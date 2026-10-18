#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_519(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5c7(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x51a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x51a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_51a(u8* __restrict R,Cpu& c);
u32 page_51a(Cpu& c){return body_51a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_51a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x51a000:goto L51a000;
case 0x51a001:c.instructions+=4;goto B51a001;
case 0x51a006:c.instructions+=3;goto B51a006;
case 0x51a00b:c.instructions+=2;goto B51a00b;
case 0x51a010:c.instructions+=1;goto B51a010;
case 0x51a015:goto L51a015;
case 0x51a018:c.instructions+=3;goto B51a018;
case 0x51a01d:c.instructions+=2;goto B51a01d;
case 0x51a01f:c.instructions+=1;goto B51a01f;
case 0x51a024:goto L51a024;
case 0x51a026:c.instructions+=5;goto B51a026;
case 0x51a02a:c.instructions+=4;goto B51a02a;
case 0x51a02c:c.instructions+=3;goto B51a02c;
case 0x51a02e:c.instructions+=2;goto B51a02e;
case 0x51a032:c.instructions+=1;goto B51a032;
case 0x51a034:goto L51a034;
case 0x51a037:c.instructions+=1;goto B51a037;
case 0x51a03c:goto L51a03c;
case 0x51a03e:goto L51a03e;
case 0x51a040:goto L51a040;
case 0x51a044:c.instructions+=32;goto B51a044;
case 0x51a04a:c.instructions+=31;goto B51a04a;
case 0x51a04d:c.instructions+=30;goto B51a04d;
case 0x51a04f:c.instructions+=29;goto B51a04f;
case 0x51a052:c.instructions+=28;goto B51a052;
case 0x51a055:c.instructions+=27;goto B51a055;
case 0x51a059:c.instructions+=26;goto B51a059;
case 0x51a05c:c.instructions+=25;goto B51a05c;
case 0x51a05f:c.instructions+=24;goto B51a05f;
case 0x51a061:c.instructions+=23;goto B51a061;
case 0x51a065:c.instructions+=22;goto B51a065;
case 0x51a067:c.instructions+=21;goto B51a067;
case 0x51a06b:c.instructions+=20;goto B51a06b;
case 0x51a06c:c.instructions+=19;goto B51a06c;
case 0x51a06f:c.instructions+=18;goto B51a06f;
case 0x51a072:c.instructions+=17;goto B51a072;
case 0x51a075:c.instructions+=16;goto B51a075;
case 0x51a077:c.instructions+=15;goto B51a077;
case 0x51a07a:c.instructions+=14;goto B51a07a;
case 0x51a07e:c.instructions+=13;goto B51a07e;
case 0x51a081:c.instructions+=12;goto B51a081;
case 0x51a085:c.instructions+=11;goto B51a085;
case 0x51a086:c.instructions+=10;goto B51a086;
case 0x51a087:c.instructions+=9;goto B51a087;
case 0x51a08f:c.instructions+=8;goto B51a08f;
case 0x51a092:c.instructions+=7;goto B51a092;
case 0x51a095:c.instructions+=6;goto B51a095;
case 0x51a098:c.instructions+=5;goto B51a098;
case 0x51a09b:c.instructions+=4;goto B51a09b;
case 0x51a09e:c.instructions+=3;goto B51a09e;
case 0x51a0a1:c.instructions+=2;goto B51a0a1;
case 0x51a0a4:c.instructions+=1;goto B51a0a4;
case 0x51a0a9:goto L51a0a9;
case 0x51a0aa:c.instructions+=3;goto B51a0aa;
case 0x51a0ab:c.instructions+=2;goto B51a0ab;
case 0x51a0ac:c.instructions+=1;goto B51a0ac;
case 0x51a0b1:goto L51a0b1;
case 0x51a0b4:c.instructions+=4;goto B51a0b4;
case 0x51a0b5:c.instructions+=3;goto B51a0b5;
case 0x51a0b6:c.instructions+=2;goto B51a0b6;
case 0x51a0b7:c.instructions+=1;goto B51a0b7;
case 0x51a0bc:goto L51a0bc;
case 0x51a0bf:c.instructions+=4;goto B51a0bf;
case 0x51a0c0:c.instructions+=3;goto B51a0c0;
case 0x51a0c1:c.instructions+=2;goto B51a0c1;
case 0x51a0c2:c.instructions+=1;goto B51a0c2;
case 0x51a0c7:goto L51a0c7;
case 0x51a0cb:c.instructions+=38;goto B51a0cb;
case 0x51a0cd:c.instructions+=37;goto B51a0cd;
case 0x51a0d0:c.instructions+=36;goto B51a0d0;
case 0x51a0d4:c.instructions+=35;goto B51a0d4;
case 0x51a0d6:c.instructions+=34;goto B51a0d6;
case 0x51a0d9:c.instructions+=33;goto B51a0d9;
case 0x51a0dd:c.instructions+=32;goto B51a0dd;
case 0x51a0e0:c.instructions+=31;goto B51a0e0;
case 0x51a0e3:c.instructions+=30;goto B51a0e3;
case 0x51a0e7:c.instructions+=29;goto B51a0e7;
case 0x51a0ea:c.instructions+=28;goto B51a0ea;
case 0x51a0ed:c.instructions+=27;goto B51a0ed;
case 0x51a0ef:c.instructions+=26;goto B51a0ef;
case 0x51a0f2:c.instructions+=25;goto B51a0f2;
case 0x51a0f4:c.instructions+=24;goto B51a0f4;
case 0x51a0f8:c.instructions+=23;goto B51a0f8;
case 0x51a0fb:c.instructions+=22;goto B51a0fb;
case 0x51a0fe:c.instructions+=21;goto B51a0fe;
case 0x51a102:c.instructions+=20;goto B51a102;
case 0x51a104:c.instructions+=19;goto B51a104;
case 0x51a107:c.instructions+=18;goto B51a107;
case 0x51a10b:c.instructions+=17;goto B51a10b;
case 0x51a10e:c.instructions+=16;goto B51a10e;
case 0x51a111:c.instructions+=15;goto B51a111;
case 0x51a113:c.instructions+=14;goto B51a113;
case 0x51a116:c.instructions+=13;goto B51a116;
case 0x51a119:c.instructions+=12;goto B51a119;
case 0x51a11c:c.instructions+=11;goto B51a11c;
case 0x51a11f:c.instructions+=10;goto B51a11f;
case 0x51a122:c.instructions+=9;goto B51a122;
case 0x51a125:c.instructions+=8;goto B51a125;
case 0x51a128:c.instructions+=7;goto B51a128;
case 0x51a12b:c.instructions+=6;goto B51a12b;
case 0x51a12f:c.instructions+=5;goto B51a12f;
case 0x51a133:c.instructions+=4;goto B51a133;
case 0x51a136:c.instructions+=3;goto B51a136;
case 0x51a139:c.instructions+=2;goto B51a139;
case 0x51a13e:c.instructions+=1;goto B51a13e;
case 0x51a140:goto L51a140;
case 0x51a145:c.instructions+=1;goto B51a145;
case 0x51a147:goto L51a147;
case 0x51a14c:c.instructions+=1;goto B51a14c;
case 0x51a14e:goto L51a14e;
case 0x51a153:c.instructions+=1;goto B51a153;
case 0x51a155:goto L51a155;
case 0x51a159:goto L51a159;
case 0x51a15c:c.instructions+=2;goto B51a15c;
case 0x51a163:c.instructions+=1;goto B51a163;
case 0x51a165:goto L51a165;
case 0x51a169:goto L51a169;
case 0x51a16c:c.instructions+=2;goto B51a16c;
case 0x51a173:c.instructions+=1;goto B51a173;
case 0x51a175:goto L51a175;
case 0x51a177:c.instructions+=9;goto B51a177;
case 0x51a17c:c.instructions+=8;goto B51a17c;
case 0x51a17f:c.instructions+=7;goto B51a17f;
case 0x51a182:c.instructions+=6;goto B51a182;
case 0x51a185:c.instructions+=5;goto B51a185;
case 0x51a188:c.instructions+=4;goto B51a188;
case 0x51a18b:c.instructions+=3;goto B51a18b;
case 0x51a18e:c.instructions+=2;goto B51a18e;
case 0x51a191:c.instructions+=1;goto B51a191;
case 0x51a194:goto L51a194;
case 0x51a198:c.instructions+=2;goto B51a198;
case 0x51a19a:c.instructions+=1;goto B51a19a;
case 0x51a19c:goto L51a19c;
case 0x51a1a0:goto L51a1a0;
case 0x51a1a4:c.instructions+=8;goto B51a1a4;
case 0x51a1a6:c.instructions+=7;goto B51a1a6;
case 0x51a1a7:c.instructions+=6;goto B51a1a7;
case 0x51a1a8:c.instructions+=5;goto B51a1a8;
case 0x51a1a9:c.instructions+=4;goto B51a1a9;
case 0x51a1aa:c.instructions+=3;goto B51a1aa;
case 0x51a1b1:c.instructions+=2;goto B51a1b1;
case 0x51a1b4:c.instructions+=1;goto B51a1b4;
case 0x51a1c0:goto L51a1c0;
case 0x51a1c1:c.instructions+=16;goto B51a1c1;
case 0x51a1c3:c.instructions+=15;goto B51a1c3;
case 0x51a1c6:c.instructions+=14;goto B51a1c6;
case 0x51a1c8:c.instructions+=13;goto B51a1c8;
case 0x51a1cd:c.instructions+=12;goto B51a1cd;
case 0x51a1d3:c.instructions+=11;goto B51a1d3;
case 0x51a1d4:c.instructions+=10;goto B51a1d4;
case 0x51a1db:c.instructions+=9;goto B51a1db;
case 0x51a1e1:c.instructions+=8;goto B51a1e1;
case 0x51a1e2:c.instructions+=7;goto B51a1e2;
case 0x51a1e3:c.instructions+=6;goto B51a1e3;
case 0x51a1e4:c.instructions+=5;goto B51a1e4;
case 0x51a1e7:c.instructions+=4;goto B51a1e7;
case 0x51a1e9:c.instructions+=3;goto B51a1e9;
case 0x51a1eb:c.instructions+=2;goto B51a1eb;
case 0x51a1ef:c.instructions+=1;goto B51a1ef;
case 0x51a1f1:goto L51a1f1;
case 0x51a1f4:c.instructions+=24;goto B51a1f4;
case 0x51a1f7:c.instructions+=23;goto B51a1f7;
case 0x51a1fa:c.instructions+=22;goto B51a1fa;
case 0x51a1fb:c.instructions+=21;goto B51a1fb;
case 0x51a1fc:c.instructions+=20;goto B51a1fc;
case 0x51a1ff:c.instructions+=19;goto B51a1ff;
case 0x51a200:c.instructions+=18;goto B51a200;
case 0x51a203:c.instructions+=17;goto B51a203;
case 0x51a204:c.instructions+=16;goto B51a204;
case 0x51a207:c.instructions+=15;goto B51a207;
case 0x51a208:c.instructions+=14;goto B51a208;
case 0x51a20b:c.instructions+=13;goto B51a20b;
case 0x51a20c:c.instructions+=12;goto B51a20c;
case 0x51a20f:c.instructions+=11;goto B51a20f;
case 0x51a210:c.instructions+=10;goto B51a210;
case 0x51a213:c.instructions+=9;goto B51a213;
case 0x51a214:c.instructions+=8;goto B51a214;
case 0x51a217:c.instructions+=7;goto B51a217;
case 0x51a218:c.instructions+=6;goto B51a218;
case 0x51a21b:c.instructions+=5;goto B51a21b;
case 0x51a21c:c.instructions+=4;goto B51a21c;
case 0x51a21d:c.instructions+=3;goto B51a21d;
case 0x51a21e:c.instructions+=2;goto B51a21e;
case 0x51a220:c.instructions+=1;goto B51a220;
case 0x51a225:goto L51a225;
case 0x51a22c:c.instructions+=7;goto B51a22c;
case 0x51a233:c.instructions+=6;goto B51a233;
case 0x51a234:c.instructions+=5;goto B51a234;
case 0x51a235:c.instructions+=4;goto B51a235;
case 0x51a236:c.instructions+=3;goto B51a236;
case 0x51a238:c.instructions+=2;goto B51a238;
case 0x51a239:c.instructions+=1;goto B51a239;
case 0x51a23c:goto L51a23c;
case 0x51a23f:c.instructions+=38;goto B51a23f;
case 0x51a242:c.instructions+=37;goto B51a242;
case 0x51a245:c.instructions+=36;goto B51a245;
case 0x51a249:c.instructions+=35;goto B51a249;
case 0x51a24c:c.instructions+=34;goto B51a24c;
case 0x51a250:c.instructions+=33;goto B51a250;
case 0x51a254:c.instructions+=32;goto B51a254;
case 0x51a258:c.instructions+=31;goto B51a258;
case 0x51a25b:c.instructions+=30;goto B51a25b;
case 0x51a262:c.instructions+=29;goto B51a262;
case 0x51a265:c.instructions+=28;goto B51a265;
case 0x51a26c:c.instructions+=27;goto B51a26c;
case 0x51a273:c.instructions+=26;goto B51a273;
case 0x51a276:c.instructions+=25;goto B51a276;
case 0x51a27d:c.instructions+=24;goto B51a27d;
case 0x51a280:c.instructions+=23;goto B51a280;
case 0x51a284:c.instructions+=22;goto B51a284;
case 0x51a288:c.instructions+=21;goto B51a288;
case 0x51a28f:c.instructions+=20;goto B51a28f;
case 0x51a296:c.instructions+=19;goto B51a296;
case 0x51a299:c.instructions+=18;goto B51a299;
case 0x51a29d:c.instructions+=17;goto B51a29d;
case 0x51a29f:c.instructions+=16;goto B51a29f;
case 0x51a2a3:c.instructions+=15;goto B51a2a3;
case 0x51a2a5:c.instructions+=14;goto B51a2a5;
case 0x51a2a9:c.instructions+=13;goto B51a2a9;
case 0x51a2ac:c.instructions+=12;goto B51a2ac;
case 0x51a2b0:c.instructions+=11;goto B51a2b0;
case 0x51a2b2:c.instructions+=10;goto B51a2b2;
case 0x51a2b6:c.instructions+=9;goto B51a2b6;
case 0x51a2b9:c.instructions+=8;goto B51a2b9;
case 0x51a2bd:c.instructions+=7;goto B51a2bd;
case 0x51a2c0:c.instructions+=6;goto B51a2c0;
case 0x51a2c4:c.instructions+=5;goto B51a2c4;
case 0x51a2c8:c.instructions+=4;goto B51a2c8;
case 0x51a2cf:c.instructions+=3;goto B51a2cf;
case 0x51a2d2:c.instructions+=2;goto B51a2d2;
case 0x51a2d7:c.instructions+=1;goto B51a2d7;
case 0x51a2e0:goto L51a2e0;
case 0x51a2e4:c.instructions+=23;goto B51a2e4;
case 0x51a2e8:c.instructions+=22;goto B51a2e8;
case 0x51a2eb:c.instructions+=21;goto B51a2eb;
case 0x51a2ef:c.instructions+=20;goto B51a2ef;
case 0x51a2f3:c.instructions+=19;goto B51a2f3;
case 0x51a2f9:c.instructions+=18;goto B51a2f9;
case 0x51a2fd:c.instructions+=17;goto B51a2fd;
case 0x51a301:c.instructions+=16;goto B51a301;
case 0x51a305:c.instructions+=15;goto B51a305;
case 0x51a30b:c.instructions+=14;goto B51a30b;
case 0x51a30f:c.instructions+=13;goto B51a30f;
case 0x51a313:c.instructions+=12;goto B51a313;
case 0x51a317:c.instructions+=11;goto B51a317;
case 0x51a31d:c.instructions+=10;goto B51a31d;
case 0x51a320:c.instructions+=9;goto B51a320;
case 0x51a324:c.instructions+=8;goto B51a324;
case 0x51a327:c.instructions+=7;goto B51a327;
case 0x51a328:c.instructions+=6;goto B51a328;
case 0x51a32e:c.instructions+=5;goto B51a32e;
case 0x51a331:c.instructions+=4;goto B51a331;
case 0x51a334:c.instructions+=3;goto B51a334;
case 0x51a337:c.instructions+=2;goto B51a337;
case 0x51a33a:c.instructions+=1;goto B51a33a;
case 0x51a33c:goto L51a33c;
case 0x51a340:c.instructions+=6;goto B51a340;
case 0x51a341:c.instructions+=5;goto B51a341;
case 0x51a344:c.instructions+=4;goto B51a344;
case 0x51a348:c.instructions+=3;goto B51a348;
case 0x51a349:c.instructions+=2;goto B51a349;
case 0x51a34a:c.instructions+=1;goto B51a34a;
case 0x51a34f:goto L51a34f;
case 0x51a353:c.instructions+=5;goto B51a353;
case 0x51a354:c.instructions+=4;goto B51a354;
case 0x51a35b:c.instructions+=3;goto B51a35b;
case 0x51a35c:c.instructions+=2;goto B51a35c;
case 0x51a35d:c.instructions+=1;goto B51a35d;
case 0x51a362:goto L51a362;
case 0x51a369:c.instructions+=5;goto B51a369;
case 0x51a36a:c.instructions+=4;goto B51a36a;
case 0x51a371:c.instructions+=3;goto B51a371;
case 0x51a372:c.instructions+=2;goto B51a372;
case 0x51a373:c.instructions+=1;goto B51a373;
case 0x51a378:goto L51a378;
case 0x51a37f:c.instructions+=5;goto B51a37f;
case 0x51a380:c.instructions+=4;goto B51a380;
case 0x51a387:c.instructions+=3;goto B51a387;
case 0x51a388:c.instructions+=2;goto B51a388;
case 0x51a389:c.instructions+=1;goto B51a389;
case 0x51a38e:goto L51a38e;
case 0x51a391:c.instructions+=17;goto B51a391;
case 0x51a394:c.instructions+=16;goto B51a394;
case 0x51a396:c.instructions+=15;goto B51a396;
case 0x51a39d:c.instructions+=14;goto B51a39d;
case 0x51a39e:c.instructions+=13;goto B51a39e;
case 0x51a3a5:c.instructions+=12;goto B51a3a5;
case 0x51a3a6:c.instructions+=11;goto B51a3a6;
case 0x51a3ad:c.instructions+=10;goto B51a3ad;
case 0x51a3ae:c.instructions+=9;goto B51a3ae;
case 0x51a3b5:c.instructions+=8;goto B51a3b5;
case 0x51a3b6:c.instructions+=7;goto B51a3b6;
case 0x51a3ba:c.instructions+=6;goto B51a3ba;
case 0x51a3bb:c.instructions+=5;goto B51a3bb;
case 0x51a3bf:c.instructions+=4;goto B51a3bf;
case 0x51a3c0:c.instructions+=3;goto B51a3c0;
case 0x51a3c2:c.instructions+=2;goto B51a3c2;
case 0x51a3c3:c.instructions+=1;goto B51a3c3;
case 0x51a3c5:goto L51a3c5;
case 0x51a3ca:goto L51a3ca;
case 0x51a3ce:c.instructions+=1;goto B51a3ce;
case 0x51a3d0:goto L51a3d0;
case 0x51a3d5:goto L51a3d5;
case 0x51a3d9:goto L51a3d9;
case 0x51a3db:c.instructions+=1;goto B51a3db;
case 0x51a3e1:goto L51a3e1;
case 0x51a3e3:goto L51a3e3;
case 0x51a3ea:c.instructions+=3;goto B51a3ea;
case 0x51a3f1:c.instructions+=2;goto B51a3f1;
case 0x51a3f3:c.instructions+=1;goto B51a3f3;
case 0x51a400:goto L51a400;
case 0x51a403:c.instructions+=2;goto B51a403;
case 0x51a409:c.instructions+=1;goto B51a409;
case 0x51a40e:goto L51a40e;
case 0x51a410:c.instructions+=3;goto B51a410;
case 0x51a416:c.instructions+=2;goto B51a416;
case 0x51a419:c.instructions+=1;goto B51a419;
case 0x51a41e:goto L51a41e;
case 0x51a421:c.instructions+=3;goto B51a421;
case 0x51a427:c.instructions+=2;goto B51a427;
case 0x51a42a:c.instructions+=1;goto B51a42a;
case 0x51a42f:goto L51a42f;
case 0x51a432:c.instructions+=3;goto B51a432;
case 0x51a438:c.instructions+=2;goto B51a438;
case 0x51a43a:c.instructions+=1;goto B51a43a;
case 0x51a43f:goto L51a43f;
case 0x51a442:c.instructions+=4;goto B51a442;
case 0x51a445:c.instructions+=3;goto B51a445;
case 0x51a448:c.instructions+=2;goto B51a448;
case 0x51a449:c.instructions+=1;goto B51a449;
case 0x51a44b:goto L51a44b;
case 0x51a44f:c.instructions+=1;goto B51a44f;
case 0x51a453:goto L51a453;
case 0x51a456:c.instructions+=4;goto B51a456;
case 0x51a458:c.instructions+=3;goto B51a458;
case 0x51a45a:c.instructions+=2;goto B51a45a;
case 0x51a45e:c.instructions+=1;goto B51a45e;
case 0x51a464:goto L51a464;
case 0x51a467:c.instructions+=2;goto B51a467;
case 0x51a46b:c.instructions+=1;goto B51a46b;
case 0x51a470:goto L51a470;
case 0x51a476:c.instructions+=3;goto B51a476;
case 0x51a479:c.instructions+=2;goto B51a479;
case 0x51a47c:c.instructions+=1;goto B51a47c;
case 0x51a47e:goto L51a47e;
case 0x51a483:goto L51a483;
case 0x51a487:c.instructions+=1;goto B51a487;
case 0x51a489:goto L51a489;
case 0x51a48e:c.instructions+=2;goto B51a48e;
case 0x51a490:c.instructions+=1;goto B51a490;
case 0x51a492:goto L51a492;
case 0x51a493:c.instructions+=4;goto B51a493;
case 0x51a498:c.instructions+=3;goto B51a498;
case 0x51a49d:c.instructions+=2;goto B51a49d;
case 0x51a4a2:c.instructions+=1;goto B51a4a2;
case 0x51a4a7:goto L51a4a7;
case 0x51a4aa:c.instructions+=1;goto B51a4aa;
case 0x51a4af:goto L51a4af;
case 0x51a4b1:c.instructions+=1;goto B51a4b1;
case 0x51a4b6:goto L51a4b6;
case 0x51a4ba:goto L51a4ba;
case 0x51a4bc:c.instructions+=2;goto B51a4bc;
case 0x51a4c7:c.instructions+=1;goto B51a4c7;
case 0x51a4c9:goto L51a4c9;
case 0x51a4cc:c.instructions+=1;goto B51a4cc;
case 0x51a4d1:goto L51a4d1;
case 0x51a4d5:c.instructions+=1;goto B51a4d5;
case 0x51a4d7:goto L51a4d7;
case 0x51a4d9:goto L51a4d9;
case 0x51a4e3:c.instructions+=62;goto B51a4e3;
case 0x51a4e6:c.instructions+=61;goto B51a4e6;
case 0x51a4e8:c.instructions+=60;goto B51a4e8;
case 0x51a4eb:c.instructions+=59;goto B51a4eb;
case 0x51a4ee:c.instructions+=58;goto B51a4ee;
case 0x51a4f0:c.instructions+=57;goto B51a4f0;
case 0x51a4f4:c.instructions+=56;goto B51a4f4;
case 0x51a4f8:c.instructions+=55;goto B51a4f8;
case 0x51a4fc:c.instructions+=54;goto B51a4fc;
case 0x51a500:c.instructions+=53;goto B51a500;
case 0x51a502:c.instructions+=52;goto B51a502;
case 0x51a505:c.instructions+=51;goto B51a505;
case 0x51a508:c.instructions+=50;goto B51a508;
case 0x51a50c:c.instructions+=49;goto B51a50c;
case 0x51a50f:c.instructions+=48;goto B51a50f;
case 0x51a512:c.instructions+=47;goto B51a512;
case 0x51a519:c.instructions+=46;goto B51a519;
case 0x51a51c:c.instructions+=45;goto B51a51c;
case 0x51a520:c.instructions+=44;goto B51a520;
case 0x51a523:c.instructions+=43;goto B51a523;
case 0x51a526:c.instructions+=42;goto B51a526;
case 0x51a528:c.instructions+=41;goto B51a528;
case 0x51a52c:c.instructions+=40;goto B51a52c;
case 0x51a52f:c.instructions+=39;goto B51a52f;
case 0x51a530:c.instructions+=38;goto B51a530;
case 0x51a533:c.instructions+=37;goto B51a533;
case 0x51a535:c.instructions+=36;goto B51a535;
case 0x51a538:c.instructions+=35;goto B51a538;
case 0x51a53b:c.instructions+=34;goto B51a53b;
case 0x51a546:c.instructions+=33;goto B51a546;
case 0x51a549:c.instructions+=32;goto B51a549;
case 0x51a54c:c.instructions+=31;goto B51a54c;
case 0x51a553:c.instructions+=30;goto B51a553;
case 0x51a556:c.instructions+=29;goto B51a556;
case 0x51a55a:c.instructions+=28;goto B51a55a;
case 0x51a55d:c.instructions+=27;goto B51a55d;
case 0x51a560:c.instructions+=26;goto B51a560;
case 0x51a562:c.instructions+=25;goto B51a562;
case 0x51a566:c.instructions+=24;goto B51a566;
case 0x51a569:c.instructions+=23;goto B51a569;
case 0x51a56c:c.instructions+=22;goto B51a56c;
case 0x51a56e:c.instructions+=21;goto B51a56e;
case 0x51a571:c.instructions+=20;goto B51a571;
case 0x51a574:c.instructions+=19;goto B51a574;
case 0x51a577:c.instructions+=18;goto B51a577;
case 0x51a57e:c.instructions+=17;goto B51a57e;
case 0x51a581:c.instructions+=16;goto B51a581;
case 0x51a584:c.instructions+=15;goto B51a584;
case 0x51a587:c.instructions+=14;goto B51a587;
case 0x51a58a:c.instructions+=13;goto B51a58a;
case 0x51a58d:c.instructions+=12;goto B51a58d;
case 0x51a590:c.instructions+=11;goto B51a590;
case 0x51a592:c.instructions+=10;goto B51a592;
case 0x51a595:c.instructions+=9;goto B51a595;
case 0x51a598:c.instructions+=8;goto B51a598;
case 0x51a59b:c.instructions+=7;goto B51a59b;
case 0x51a59e:c.instructions+=6;goto B51a59e;
case 0x51a5a1:c.instructions+=5;goto B51a5a1;
case 0x51a5a4:c.instructions+=4;goto B51a5a4;
case 0x51a5a7:c.instructions+=3;goto B51a5a7;
case 0x51a5ae:c.instructions+=2;goto B51a5ae;
case 0x51a5b2:c.instructions+=1;goto B51a5b2;
case 0x51a5b8:goto L51a5b8;
case 0x51a5bf:c.instructions+=7;goto B51a5bf;
case 0x51a5c0:c.instructions+=6;goto B51a5c0;
case 0x51a5c1:c.instructions+=5;goto B51a5c1;
case 0x51a5c8:c.instructions+=4;goto B51a5c8;
case 0x51a5c9:c.instructions+=3;goto B51a5c9;
case 0x51a5cb:c.instructions+=2;goto B51a5cb;
case 0x51a5cc:c.instructions+=1;goto B51a5cc;
case 0x51a5d0:goto L51a5d0;
case 0x51a5d1:c.instructions+=6;goto B51a5d1;
case 0x51a5d2:c.instructions+=5;goto B51a5d2;
case 0x51a5d3:c.instructions+=4;goto B51a5d3;
case 0x51a5d4:c.instructions+=3;goto B51a5d4;
case 0x51a5d6:c.instructions+=2;goto B51a5d6;
case 0x51a5d8:c.instructions+=1;goto B51a5d8;
case 0x51a5dd:goto L51a5dd;
case 0x51a5e0:c.instructions+=5;goto B51a5e0;
case 0x51a5e3:c.instructions+=4;goto B51a5e3;
case 0x51a5e6:c.instructions+=3;goto B51a5e6;
case 0x51a5e8:c.instructions+=2;goto B51a5e8;
case 0x51a5ea:c.instructions+=1;goto B51a5ea;
case 0x51a5ec:goto L51a5ec;
case 0x51a5f0:goto L51a5f0;
case 0x51a5f6:c.instructions+=3;goto B51a5f6;
case 0x51a5f8:c.instructions+=2;goto B51a5f8;
case 0x51a5fb:c.instructions+=1;goto B51a5fb;
case 0x51a5fd:goto L51a5fd;
case 0x51a5ff:goto L51a5ff;
case 0x51a602:c.instructions+=10;goto B51a602;
case 0x51a607:c.instructions+=9;goto B51a607;
case 0x51a609:c.instructions+=8;goto B51a609;
case 0x51a60b:c.instructions+=7;goto B51a60b;
case 0x51a60d:c.instructions+=6;goto B51a60d;
case 0x51a60e:c.instructions+=5;goto B51a60e;
case 0x51a60f:c.instructions+=4;goto B51a60f;
case 0x51a612:c.instructions+=3;goto B51a612;
case 0x51a613:c.instructions+=2;goto B51a613;
case 0x51a615:c.instructions+=1;goto B51a615;
case 0x51a61a:goto L51a61a;
case 0x51a61c:c.instructions+=2;goto B51a61c;
case 0x51a61e:c.instructions+=1;goto B51a61e;
case 0x51a620:goto L51a620;
case 0x51a623:c.instructions+=10;goto B51a623;
case 0x51a626:c.instructions+=9;goto B51a626;
case 0x51a627:c.instructions+=8;goto B51a627;
case 0x51a62a:c.instructions+=7;goto B51a62a;
case 0x51a62d:c.instructions+=6;goto B51a62d;
case 0x51a630:c.instructions+=5;goto B51a630;
case 0x51a631:c.instructions+=4;goto B51a631;
case 0x51a632:c.instructions+=3;goto B51a632;
case 0x51a633:c.instructions+=2;goto B51a633;
case 0x51a634:c.instructions+=1;goto B51a634;
case 0x51a640:goto L51a640;
case 0x51a641:c.instructions+=6;goto B51a641;
case 0x51a642:c.instructions+=5;goto B51a642;
case 0x51a643:c.instructions+=4;goto B51a643;
case 0x51a645:c.instructions+=3;goto B51a645;
case 0x51a647:c.instructions+=2;goto B51a647;
case 0x51a64c:c.instructions+=1;goto B51a64c;
case 0x51a650:goto L51a650;
case 0x51a656:c.instructions+=2;goto B51a656;
case 0x51a658:c.instructions+=1;goto B51a658;
case 0x51a65a:goto L51a65a;
case 0x51a65c:c.instructions+=3;goto B51a65c;
case 0x51a65e:c.instructions+=2;goto B51a65e;
case 0x51a660:c.instructions+=1;goto B51a660;
case 0x51a662:goto L51a662;
case 0x51a664:c.instructions+=1;goto B51a664;
case 0x51a666:goto L51a666;
case 0x51a669:c.instructions+=2;goto B51a669;
case 0x51a66b:c.instructions+=1;goto B51a66b;
case 0x51a66d:goto L51a66d;
case 0x51a66f:c.instructions+=2;goto B51a66f;
case 0x51a671:c.instructions+=1;goto B51a671;
case 0x51a673:goto L51a673;
case 0x51a675:goto L51a675;
case 0x51a677:c.instructions+=1;goto B51a677;
case 0x51a679:goto L51a679;
case 0x51a67c:c.instructions+=1;goto B51a67c;
case 0x51a682:goto L51a682;
case 0x51a688:c.instructions+=1;goto B51a688;
case 0x51a68a:goto L51a68a;
case 0x51a68d:c.instructions+=1;goto B51a68d;
case 0x51a693:goto L51a693;
case 0x51a696:c.instructions+=2;goto B51a696;
case 0x51a698:c.instructions+=1;goto B51a698;
case 0x51a69a:goto L51a69a;
case 0x51a69d:c.instructions+=1;goto B51a69d;
case 0x51a6a0:goto L51a6a0;
case 0x51a6a3:c.instructions+=2;goto B51a6a3;
case 0x51a6a5:c.instructions+=1;goto B51a6a5;
case 0x51a6a7:goto L51a6a7;
case 0x51a6aa:c.instructions+=1;goto B51a6aa;
case 0x51a6ad:goto L51a6ad;
case 0x51a6b0:c.instructions+=2;goto B51a6b0;
case 0x51a6b3:c.instructions+=1;goto B51a6b3;
case 0x51a6b9:goto L51a6b9;
case 0x51a6bb:c.instructions+=2;goto B51a6bb;
case 0x51a6bd:c.instructions+=1;goto B51a6bd;
case 0x51a6bf:goto L51a6bf;
case 0x51a6c1:goto L51a6c1;
case 0x51a6c7:c.instructions+=1;goto B51a6c7;
case 0x51a6cc:goto L51a6cc;
case 0x51a6d2:c.instructions+=1;goto B51a6d2;
case 0x51a6d7:goto L51a6d7;
case 0x51a6dd:c.instructions+=1;goto B51a6dd;
case 0x51a6e2:goto L51a6e2;
case 0x51a6e5:c.instructions+=2;goto B51a6e5;
case 0x51a6e6:c.instructions+=1;goto B51a6e6;
case 0x51a6eb:goto L51a6eb;
case 0x51a6ee:c.instructions+=9;goto B51a6ee;
case 0x51a6f1:c.instructions+=8;goto B51a6f1;
case 0x51a6f7:c.instructions+=7;goto B51a6f7;
case 0x51a6fd:c.instructions+=6;goto B51a6fd;
case 0x51a700:c.instructions+=5;goto B51a700;
case 0x51a703:c.instructions+=4;goto B51a703;
case 0x51a709:c.instructions+=3;goto B51a709;
case 0x51a70b:c.instructions+=2;goto B51a70b;
case 0x51a711:c.instructions+=1;goto B51a711;
case 0x51a716:goto L51a716;
case 0x51a718:goto L51a718;
case 0x51a71e:c.instructions+=2;goto B51a71e;
case 0x51a724:c.instructions+=1;goto B51a724;
case 0x51a729:goto L51a729;
case 0x51a72b:goto L51a72b;
case 0x51a72c:c.instructions+=4;goto B51a72c;
case 0x51a732:c.instructions+=3;goto B51a732;
case 0x51a733:c.instructions+=2;goto B51a733;
case 0x51a734:c.instructions+=1;goto B51a734;
case 0x51a740:goto L51a740;
case 0x51a746:c.instructions+=12;goto B51a746;
case 0x51a748:c.instructions+=11;goto B51a748;
case 0x51a74d:c.instructions+=10;goto B51a74d;
case 0x51a74e:c.instructions+=9;goto B51a74e;
case 0x51a755:c.instructions+=8;goto B51a755;
case 0x51a756:c.instructions+=7;goto B51a756;
case 0x51a757:c.instructions+=6;goto B51a757;
case 0x51a758:c.instructions+=5;goto B51a758;
case 0x51a75a:c.instructions+=4;goto B51a75a;
case 0x51a75d:c.instructions+=3;goto B51a75d;
case 0x51a75e:c.instructions+=2;goto B51a75e;
case 0x51a75f:c.instructions+=1;goto B51a75f;
case 0x51a764:goto L51a764;
case 0x51a768:c.instructions+=3;goto B51a768;
case 0x51a76b:c.instructions+=2;goto B51a76b;
case 0x51a76d:c.instructions+=1;goto B51a76d;
case 0x51a76f:goto L51a76f;
case 0x51a772:c.instructions+=4;goto B51a772;
case 0x51a774:c.instructions+=3;goto B51a774;
case 0x51a77a:c.instructions+=2;goto B51a77a;
case 0x51a77b:c.instructions+=1;goto B51a77b;
case 0x51a780:goto L51a780;
case 0x51a782:c.instructions+=5;goto B51a782;
case 0x51a785:c.instructions+=4;goto B51a785;
case 0x51a789:c.instructions+=3;goto B51a789;
case 0x51a78b:c.instructions+=2;goto B51a78b;
case 0x51a793:c.instructions+=1;goto B51a793;
case 0x51a795:goto L51a795;
case 0x51a79a:c.instructions+=4;goto B51a79a;
case 0x51a79b:c.instructions+=3;goto B51a79b;
case 0x51a7a0:c.instructions+=2;goto B51a7a0;
case 0x51a7a1:c.instructions+=1;goto B51a7a1;
case 0x51a7a6:goto L51a7a6;
case 0x51a7a8:goto L51a7a8;
case 0x51a7aa:goto L51a7aa;
case 0x51a7ad:goto L51a7ad;
case 0x51a7b0:c.instructions+=4;goto B51a7b0;
case 0x51a7b6:c.instructions+=3;goto B51a7b6;
case 0x51a7b9:c.instructions+=2;goto B51a7b9;
case 0x51a7be:c.instructions+=1;goto B51a7be;
case 0x51a7c0:goto L51a7c0;
case 0x51a7c2:goto L51a7c2;
case 0x51a7c6:c.instructions+=7;goto B51a7c6;
case 0x51a7c7:c.instructions+=6;goto B51a7c7;
case 0x51a7c8:c.instructions+=5;goto B51a7c8;
case 0x51a7c9:c.instructions+=4;goto B51a7c9;
case 0x51a7d0:c.instructions+=3;goto B51a7d0;
case 0x51a7d1:c.instructions+=2;goto B51a7d1;
case 0x51a7d4:c.instructions+=1;goto B51a7d4;
case 0x51a7e0:goto L51a7e0;
case 0x51a7e2:c.instructions+=15;goto B51a7e2;
case 0x51a7e7:c.instructions+=14;goto B51a7e7;
case 0x51a7ed:c.instructions+=13;goto B51a7ed;
case 0x51a7ee:c.instructions+=12;goto B51a7ee;
case 0x51a7f5:c.instructions+=11;goto B51a7f5;
case 0x51a7f6:c.instructions+=10;goto B51a7f6;
case 0x51a7f7:c.instructions+=9;goto B51a7f7;
case 0x51a7f8:c.instructions+=8;goto B51a7f8;
case 0x51a7f9:c.instructions+=7;goto B51a7f9;
case 0x51a7fb:c.instructions+=6;goto B51a7fb;
case 0x51a803:c.instructions+=5;goto B51a803;
case 0x51a809:c.instructions+=4;goto B51a809;
case 0x51a80b:c.instructions+=3;goto B51a80b;
case 0x51a80d:c.instructions+=2;goto B51a80d;
case 0x51a811:c.instructions+=1;goto B51a811;
case 0x51a813:goto L51a813;
case 0x51a817:c.instructions+=3;goto B51a817;
case 0x51a818:c.instructions+=2;goto B51a818;
case 0x51a81a:c.instructions+=1;goto B51a81a;
case 0x51a81f:goto L51a81f;
case 0x51a821:c.instructions+=1;goto B51a821;
case 0x51a823:goto L51a823;
case 0x51a826:c.instructions+=2;goto B51a826;
case 0x51a828:c.instructions+=1;goto B51a828;
case 0x51a82a:goto L51a82a;
case 0x51a830:c.instructions+=3;goto B51a830;
case 0x51a832:c.instructions+=2;goto B51a832;
case 0x51a834:c.instructions+=1;goto B51a834;
case 0x51a836:goto L51a836;
case 0x51a838:c.instructions+=1;goto B51a838;
case 0x51a840:goto L51a840;
case 0x51a843:c.instructions+=8;goto B51a843;
case 0x51a849:c.instructions+=7;goto B51a849;
case 0x51a84b:c.instructions+=6;goto B51a84b;
case 0x51a84e:c.instructions+=5;goto B51a84e;
case 0x51a850:c.instructions+=4;goto B51a850;
case 0x51a853:c.instructions+=3;goto B51a853;
case 0x51a855:c.instructions+=2;goto B51a855;
case 0x51a85a:c.instructions+=1;goto B51a85a;
case 0x51a85c:goto L51a85c;
case 0x51a85e:goto L51a85e;
case 0x51a864:c.instructions+=3;goto B51a864;
case 0x51a867:c.instructions+=2;goto B51a867;
case 0x51a869:c.instructions+=1;goto B51a869;
case 0x51a86b:goto L51a86b;
case 0x51a86e:c.instructions+=1;goto B51a86e;
case 0x51a870:goto L51a870;
case 0x51a873:c.instructions+=9;goto B51a873;
case 0x51a876:c.instructions+=8;goto B51a876;
case 0x51a879:c.instructions+=7;goto B51a879;
case 0x51a87d:c.instructions+=6;goto B51a87d;
case 0x51a881:c.instructions+=5;goto B51a881;
case 0x51a884:c.instructions+=4;goto B51a884;
case 0x51a887:c.instructions+=3;goto B51a887;
case 0x51a88a:c.instructions+=2;goto B51a88a;
case 0x51a88d:c.instructions+=1;goto B51a88d;
case 0x51a890:goto L51a890;
case 0x51a894:c.instructions+=6;goto B51a894;
case 0x51a895:c.instructions+=5;goto B51a895;
case 0x51a896:c.instructions+=4;goto B51a896;
case 0x51a897:c.instructions+=3;goto B51a897;
case 0x51a89e:c.instructions+=2;goto B51a89e;
case 0x51a8a1:c.instructions+=1;goto B51a8a1;
case 0x51a8b0:goto L51a8b0;
case 0x51a8b4:c.instructions+=4;goto B51a8b4;
case 0x51a8b6:c.instructions+=3;goto B51a8b6;
case 0x51a8b7:c.instructions+=2;goto B51a8b7;
case 0x51a8bd:c.instructions+=1;goto B51a8bd;
case 0x51a8bf:goto L51a8bf;
case 0x51a8c1:c.instructions+=1;goto B51a8c1;
case 0x51a8c3:goto L51a8c3;
case 0x51a8c6:c.instructions+=3;goto B51a8c6;
case 0x51a8c8:c.instructions+=2;goto B51a8c8;
case 0x51a8cb:c.instructions+=1;goto B51a8cb;
case 0x51a8cd:goto L51a8cd;
case 0x51a8d0:goto L51a8d0;
case 0x51a8d3:c.instructions+=2;goto B51a8d3;
case 0x51a8d6:c.instructions+=1;goto B51a8d6;
case 0x51a8d8:goto L51a8d8;
case 0x51a8de:c.instructions+=3;goto B51a8de;
case 0x51a8e0:c.instructions+=2;goto B51a8e0;
case 0x51a8e3:c.instructions+=1;goto B51a8e3;
case 0x51a8e5:goto L51a8e5;
case 0x51a8e8:goto L51a8e8;
case 0x51a8ef:c.instructions+=1;goto B51a8ef;
case 0x51a8f5:goto L51a8f5;
case 0x51a8fb:c.instructions+=1;goto B51a8fb;
case 0x51a8fd:goto L51a8fd;
case 0x51a903:goto L51a903;
case 0x51a909:goto L51a909;
case 0x51a90a:c.instructions+=1;goto B51a90a;
case 0x51a910:goto L51a910;
case 0x51a914:c.instructions+=2;goto B51a914;
case 0x51a916:c.instructions+=1;goto B51a916;
case 0x51a918:goto L51a918;
case 0x51a91e:c.instructions+=1;goto B51a91e;
case 0x51a920:goto L51a920;
case 0x51a923:c.instructions+=1;goto B51a923;
case 0x51a929:goto L51a929;
case 0x51a92f:c.instructions+=1;goto B51a92f;
case 0x51a931:goto L51a931;
case 0x51a934:c.instructions+=1;goto B51a934;
case 0x51a93a:goto L51a93a;
case 0x51a93d:c.instructions+=3;goto B51a93d;
case 0x51a93f:c.instructions+=2;goto B51a93f;
case 0x51a940:c.instructions+=1;goto B51a940;
case 0x51a942:goto L51a942;
case 0x51a945:c.instructions+=1;goto B51a945;
case 0x51a948:goto L51a948;
case 0x51a94b:c.instructions+=2;goto B51a94b;
case 0x51a94d:c.instructions+=1;goto B51a94d;
case 0x51a94f:goto L51a94f;
case 0x51a952:c.instructions+=1;goto B51a952;
case 0x51a955:goto L51a955;
case 0x51a95a:c.instructions+=4;goto B51a95a;
case 0x51a95d:c.instructions+=3;goto B51a95d;
case 0x51a960:c.instructions+=2;goto B51a960;
case 0x51a966:c.instructions+=1;goto B51a966;
case 0x51a967:goto L51a967;
case 0x51a970:goto L51a970;
case 0x51a973:c.instructions+=7;goto B51a973;
case 0x51a974:c.instructions+=6;goto B51a974;
case 0x51a978:c.instructions+=5;goto B51a978;
case 0x51a97b:c.instructions+=4;goto B51a97b;
case 0x51a97d:c.instructions+=3;goto B51a97d;
case 0x51a980:c.instructions+=2;goto B51a980;
case 0x51a982:c.instructions+=1;goto B51a982;
case 0x51a988:goto L51a988;
case 0x51a98b:c.instructions+=19;goto B51a98b;
case 0x51a98e:c.instructions+=18;goto B51a98e;
case 0x51a991:c.instructions+=17;goto B51a991;
case 0x51a995:c.instructions+=16;goto B51a995;
case 0x51a999:c.instructions+=15;goto B51a999;
case 0x51a99b:c.instructions+=14;goto B51a99b;
case 0x51a99e:c.instructions+=13;goto B51a99e;
case 0x51a9a6:c.instructions+=12;goto B51a9a6;
case 0x51a9aa:c.instructions+=11;goto B51a9aa;
case 0x51a9ad:c.instructions+=10;goto B51a9ad;
case 0x51a9b1:c.instructions+=9;goto B51a9b1;
case 0x51a9b5:c.instructions+=8;goto B51a9b5;
case 0x51a9b8:c.instructions+=7;goto B51a9b8;
case 0x51a9bc:c.instructions+=6;goto B51a9bc;
case 0x51a9bd:c.instructions+=5;goto B51a9bd;
case 0x51a9be:c.instructions+=4;goto B51a9be;
case 0x51a9c2:c.instructions+=3;goto B51a9c2;
case 0x51a9c6:c.instructions+=2;goto B51a9c6;
case 0x51a9c7:c.instructions+=1;goto B51a9c7;
case 0x51a9cc:goto L51a9cc;
case 0x51a9d0:c.instructions+=7;goto B51a9d0;
case 0x51a9d6:c.instructions+=6;goto B51a9d6;
case 0x51a9db:c.instructions+=5;goto B51a9db;
case 0x51a9de:c.instructions+=4;goto B51a9de;
case 0x51a9e2:c.instructions+=3;goto B51a9e2;
case 0x51a9e4:c.instructions+=2;goto B51a9e4;
case 0x51a9e7:c.instructions+=1;goto B51a9e7;
case 0x51a9e9:goto L51a9e9;
case 0x51a9ef:c.instructions+=7;goto B51a9ef;
case 0x51a9f3:c.instructions+=6;goto B51a9f3;
case 0x51a9f7:c.instructions+=5;goto B51a9f7;
case 0x51a9fe:c.instructions+=4;goto B51a9fe;
case 0x51aa04:c.instructions+=3;goto B51aa04;
case 0x51aa08:c.instructions+=2;goto B51aa08;
case 0x51aa0f:c.instructions+=1;goto B51aa0f;
case 0x51aa15:goto L51aa15;
case 0x51aa16:c.instructions+=2;goto B51aa16;
case 0x51aa19:c.instructions+=1;goto B51aa19;
case 0x51aa20:goto L51aa20;
case 0x51aa21:c.instructions+=4;goto B51aa21;
case 0x51aa22:c.instructions+=3;goto B51aa22;
case 0x51aa24:c.instructions+=2;goto B51aa24;
case 0x51aa26:c.instructions+=1;goto B51aa26;
case 0x51aa2b:goto L51aa2b;
case 0x51aa2e:c.instructions+=2;goto B51aa2e;
case 0x51aa30:c.instructions+=1;goto B51aa30;
case 0x51aa32:goto L51aa32;
case 0x51aa37:c.instructions+=5;goto B51aa37;
case 0x51aa3a:c.instructions+=4;goto B51aa3a;
case 0x51aa3d:c.instructions+=3;goto B51aa3d;
case 0x51aa43:c.instructions+=2;goto B51aa43;
case 0x51aa45:c.instructions+=1;goto B51aa45;
case 0x51aa47:goto L51aa47;
case 0x51aa49:goto L51aa49;
case 0x51aa4d:c.instructions+=13;goto B51aa4d;
case 0x51aa51:c.instructions+=12;goto B51aa51;
case 0x51aa55:c.instructions+=11;goto B51aa55;
case 0x51aa58:c.instructions+=10;goto B51aa58;
case 0x51aa5c:c.instructions+=9;goto B51aa5c;
case 0x51aa5d:c.instructions+=8;goto B51aa5d;
case 0x51aa61:c.instructions+=7;goto B51aa61;
case 0x51aa64:c.instructions+=6;goto B51aa64;
case 0x51aa67:c.instructions+=5;goto B51aa67;
case 0x51aa6a:c.instructions+=4;goto B51aa6a;
case 0x51aa6d:c.instructions+=3;goto B51aa6d;
case 0x51aa73:c.instructions+=2;goto B51aa73;
case 0x51aa75:c.instructions+=1;goto B51aa75;
case 0x51aa77:goto L51aa77;
case 0x51aa7d:c.instructions+=10;goto B51aa7d;
case 0x51aa7e:c.instructions+=9;goto B51aa7e;
case 0x51aa80:c.instructions+=8;goto B51aa80;
case 0x51aa81:c.instructions+=7;goto B51aa81;
case 0x51aa85:c.instructions+=6;goto B51aa85;
case 0x51aa86:c.instructions+=5;goto B51aa86;
case 0x51aa8a:c.instructions+=4;goto B51aa8a;
case 0x51aa8b:c.instructions+=3;goto B51aa8b;
case 0x51aa8c:c.instructions+=2;goto B51aa8c;
case 0x51aa8d:c.instructions+=1;goto B51aa8d;
case 0x51aa90:goto L51aa90;
case 0x51aa91:goto L51aa91;
case 0x51aa97:c.instructions+=3;goto B51aa97;
case 0x51aa99:c.instructions+=2;goto B51aa99;
case 0x51aa9a:c.instructions+=1;goto B51aa9a;
case 0x51aa9c:goto L51aa9c;
case 0x51aa9f:c.instructions+=3;goto B51aa9f;
case 0x51aaa1:c.instructions+=2;goto B51aaa1;
case 0x51aaa4:c.instructions+=1;goto B51aaa4;
case 0x51aaa6:goto L51aaa6;
case 0x51aaa9:goto L51aaa9;
case 0x51aaac:c.instructions+=2;goto B51aaac;
case 0x51aaaf:c.instructions+=1;goto B51aaaf;
case 0x51aab1:goto L51aab1;
case 0x51aab7:c.instructions+=3;goto B51aab7;
case 0x51aab9:c.instructions+=2;goto B51aab9;
case 0x51aabc:c.instructions+=1;goto B51aabc;
case 0x51aabe:goto L51aabe;
case 0x51aac1:goto L51aac1;
case 0x51aac8:c.instructions+=1;goto B51aac8;
case 0x51aace:goto L51aace;
case 0x51aad4:c.instructions+=2;goto B51aad4;
case 0x51aada:c.instructions+=1;goto B51aada;
case 0x51aadc:goto L51aadc;
case 0x51aae2:goto L51aae2;
case 0x51aae3:c.instructions+=4;goto B51aae3;
case 0x51aae9:c.instructions+=3;goto B51aae9;
case 0x51aaea:c.instructions+=2;goto B51aaea;
case 0x51aaeb:c.instructions+=1;goto B51aaeb;
case 0x51aaf0:goto L51aaf0;
case 0x51aaf1:c.instructions+=2;goto B51aaf1;
case 0x51aaf3:c.instructions+=1;goto B51aaf3;
case 0x51aaf8:goto L51aaf8;
case 0x51aafd:c.instructions+=1;goto B51aafd;
case 0x51aaff:goto L51aaff;
case 0x51ab00:c.instructions+=1;goto B51ab00;
case 0x51ab05:goto L51ab05;
case 0x51ab08:goto L51ab08;
case 0x51ab0a:c.instructions+=2;goto B51ab0a;
case 0x51ab0b:c.instructions+=1;goto B51ab0b;
case 0x51ab10:goto L51ab10;
case 0x51ab16:c.instructions+=1;goto B51ab16;
case 0x51ab20:goto L51ab20;
case 0x51ab21:c.instructions+=6;goto B51ab21;
case 0x51ab22:c.instructions+=5;goto B51ab22;
case 0x51ab23:c.instructions+=4;goto B51ab23;
case 0x51ab24:c.instructions+=3;goto B51ab24;
case 0x51ab26:c.instructions+=2;goto B51ab26;
case 0x51ab28:c.instructions+=1;goto B51ab28;
case 0x51ab2d:goto L51ab2d;
case 0x51ab2f:c.instructions+=3;goto B51ab2f;
case 0x51ab32:c.instructions+=2;goto B51ab32;
case 0x51ab34:c.instructions+=1;goto B51ab34;
case 0x51ab36:goto L51ab36;
case 0x51ab3b:c.instructions+=7;goto B51ab3b;
case 0x51ab3e:c.instructions+=6;goto B51ab3e;
case 0x51ab41:c.instructions+=5;goto B51ab41;
case 0x51ab44:c.instructions+=4;goto B51ab44;
case 0x51ab47:c.instructions+=3;goto B51ab47;
case 0x51ab4d:c.instructions+=2;goto B51ab4d;
case 0x51ab4f:c.instructions+=1;goto B51ab4f;
case 0x51ab51:goto L51ab51;
case 0x51ab53:goto L51ab53;
case 0x51ab57:c.instructions+=8;goto B51ab57;
case 0x51ab5b:c.instructions+=7;goto B51ab5b;
case 0x51ab5e:c.instructions+=6;goto B51ab5e;
case 0x51ab61:c.instructions+=5;goto B51ab61;
case 0x51ab62:c.instructions+=4;goto B51ab62;
case 0x51ab64:c.instructions+=3;goto B51ab64;
case 0x51ab67:c.instructions+=2;goto B51ab67;
case 0x51ab6e:c.instructions+=1;goto B51ab6e;
case 0x51ab73:goto L51ab73;
case 0x51ab79:c.instructions+=2;goto B51ab79;
case 0x51ab7b:c.instructions+=1;goto B51ab7b;
case 0x51ab7d:goto L51ab7d;
case 0x51ab80:c.instructions+=3;goto B51ab80;
case 0x51ab82:c.instructions+=2;goto B51ab82;
case 0x51ab85:c.instructions+=1;goto B51ab85;
case 0x51ab87:goto L51ab87;
case 0x51ab8a:goto L51ab8a;
case 0x51ab8d:c.instructions+=2;goto B51ab8d;
case 0x51ab90:c.instructions+=1;goto B51ab90;
case 0x51ab92:goto L51ab92;
case 0x51ab98:c.instructions+=3;goto B51ab98;
case 0x51ab9a:c.instructions+=2;goto B51ab9a;
case 0x51ab9d:c.instructions+=1;goto B51ab9d;
case 0x51ab9f:goto L51ab9f;
case 0x51aba2:goto L51aba2;
case 0x51aba5:c.instructions+=1;goto B51aba5;
case 0x51abab:goto L51abab;
case 0x51abb1:c.instructions+=1;goto B51abb1;
case 0x51abb3:goto L51abb3;
case 0x51abb9:goto L51abb9;
case 0x51abbf:c.instructions+=9;goto B51abbf;
case 0x51abc0:c.instructions+=8;goto B51abc0;
case 0x51abc1:c.instructions+=7;goto B51abc1;
case 0x51abc4:c.instructions+=6;goto B51abc4;
case 0x51abc7:c.instructions+=5;goto B51abc7;
case 0x51abca:c.instructions+=4;goto B51abca;
case 0x51abcd:c.instructions+=3;goto B51abcd;
case 0x51abce:c.instructions+=2;goto B51abce;
case 0x51abcf:c.instructions+=1;goto B51abcf;
case 0x51abe0:goto L51abe0;
case 0x51abe1:c.instructions+=2;goto B51abe1;
case 0x51abe3:c.instructions+=1;goto B51abe3;
case 0x51abe8:goto L51abe8;
case 0x51abed:c.instructions+=1;goto B51abed;
case 0x51abef:goto L51abef;
case 0x51abf0:c.instructions+=1;goto B51abf0;
case 0x51abf5:goto L51abf5;
case 0x51abf8:goto L51abf8;
case 0x51abfa:c.instructions+=2;goto B51abfa;
case 0x51abfb:c.instructions+=1;goto B51abfb;
case 0x51ac00:goto L51ac00;
case 0x51ac10:goto L51ac10;
case 0x51ac11:c.instructions+=6;goto B51ac11;
case 0x51ac12:c.instructions+=5;goto B51ac12;
case 0x51ac13:c.instructions+=4;goto B51ac13;
case 0x51ac14:c.instructions+=3;goto B51ac14;
case 0x51ac16:c.instructions+=2;goto B51ac16;
case 0x51ac18:c.instructions+=1;goto B51ac18;
case 0x51ac1d:goto L51ac1d;
case 0x51ac1f:c.instructions+=3;goto B51ac1f;
case 0x51ac22:c.instructions+=2;goto B51ac22;
case 0x51ac24:c.instructions+=1;goto B51ac24;
case 0x51ac26:goto L51ac26;
case 0x51ac2b:c.instructions+=6;goto B51ac2b;
case 0x51ac2e:c.instructions+=5;goto B51ac2e;
case 0x51ac31:c.instructions+=4;goto B51ac31;
case 0x51ac34:c.instructions+=3;goto B51ac34;
case 0x51ac37:c.instructions+=2;goto B51ac37;
case 0x51ac3d:c.instructions+=1;goto B51ac3d;
case 0x51ac3f:goto L51ac3f;
case 0x51ac43:c.instructions+=8;goto B51ac43;
case 0x51ac47:c.instructions+=7;goto B51ac47;
case 0x51ac4b:c.instructions+=6;goto B51ac4b;
case 0x51ac4c:c.instructions+=5;goto B51ac4c;
case 0x51ac4e:c.instructions+=4;goto B51ac4e;
case 0x51ac51:c.instructions+=3;goto B51ac51;
case 0x51ac54:c.instructions+=2;goto B51ac54;
case 0x51ac5b:c.instructions+=1;goto B51ac5b;
case 0x51ac60:goto L51ac60;
case 0x51ac66:c.instructions+=2;goto B51ac66;
case 0x51ac68:c.instructions+=1;goto B51ac68;
case 0x51ac6a:goto L51ac6a;
case 0x51ac6d:c.instructions+=3;goto B51ac6d;
case 0x51ac6f:c.instructions+=2;goto B51ac6f;
case 0x51ac72:c.instructions+=1;goto B51ac72;
case 0x51ac74:goto L51ac74;
case 0x51ac77:goto L51ac77;
case 0x51ac7a:c.instructions+=2;goto B51ac7a;
case 0x51ac7d:c.instructions+=1;goto B51ac7d;
case 0x51ac7f:goto L51ac7f;
case 0x51ac85:c.instructions+=3;goto B51ac85;
case 0x51ac87:c.instructions+=2;goto B51ac87;
case 0x51ac8a:c.instructions+=1;goto B51ac8a;
case 0x51ac8c:goto L51ac8c;
case 0x51ac8f:goto L51ac8f;
case 0x51ac96:c.instructions+=1;goto B51ac96;
case 0x51ac9c:goto L51ac9c;
case 0x51aca2:c.instructions+=1;goto B51aca2;
case 0x51aca4:goto L51aca4;
case 0x51acaa:goto L51acaa;
case 0x51acb0:c.instructions+=4;goto B51acb0;
case 0x51acb1:c.instructions+=3;goto B51acb1;
case 0x51acb3:c.instructions+=2;goto B51acb3;
case 0x51acb9:c.instructions+=1;goto B51acb9;
case 0x51acbb:goto L51acbb;
case 0x51acbe:c.instructions+=7;goto B51acbe;
case 0x51acc0:c.instructions+=6;goto B51acc0;
case 0x51acc2:c.instructions+=5;goto B51acc2;
case 0x51acc4:c.instructions+=4;goto B51acc4;
case 0x51acc7:c.instructions+=3;goto B51acc7;
case 0x51acca:c.instructions+=2;goto B51acca;
case 0x51accd:c.instructions+=1;goto B51accd;
case 0x51acd0:goto L51acd0;
case 0x51acd1:c.instructions+=4;goto B51acd1;
case 0x51acd2:c.instructions+=3;goto B51acd2;
case 0x51acd3:c.instructions+=2;goto B51acd3;
case 0x51acd4:c.instructions+=1;goto B51acd4;
case 0x51ace0:goto L51ace0;
case 0x51ace1:c.instructions+=5;goto B51ace1;
case 0x51ace2:c.instructions+=4;goto B51ace2;
case 0x51ace3:c.instructions+=3;goto B51ace3;
case 0x51ace5:c.instructions+=2;goto B51ace5;
case 0x51ace7:c.instructions+=1;goto B51ace7;
case 0x51acec:goto L51acec;
case 0x51acef:c.instructions+=2;goto B51acef;
case 0x51acf1:c.instructions+=1;goto B51acf1;
case 0x51acf3:goto L51acf3;
case 0x51acf8:c.instructions+=7;goto B51acf8;
case 0x51acfb:c.instructions+=6;goto B51acfb;
case 0x51acfe:c.instructions+=5;goto B51acfe;
case 0x51ad05:c.instructions+=4;goto B51ad05;
case 0x51ad0c:c.instructions+=3;goto B51ad0c;
case 0x51ad12:c.instructions+=2;goto B51ad12;
case 0x51ad14:c.instructions+=1;goto B51ad14;
case 0x51ad16:goto L51ad16;
case 0x51ad18:goto L51ad18;
case 0x51ad1c:c.instructions+=8;goto B51ad1c;
case 0x51ad20:c.instructions+=7;goto B51ad20;
case 0x51ad24:c.instructions+=6;goto B51ad24;
case 0x51ad25:c.instructions+=5;goto B51ad25;
case 0x51ad27:c.instructions+=4;goto B51ad27;
case 0x51ad2a:c.instructions+=3;goto B51ad2a;
case 0x51ad2d:c.instructions+=2;goto B51ad2d;
case 0x51ad34:c.instructions+=1;goto B51ad34;
case 0x51ad39:goto L51ad39;
case 0x51ad3f:c.instructions+=2;goto B51ad3f;
case 0x51ad41:c.instructions+=1;goto B51ad41;
case 0x51ad43:goto L51ad43;
case 0x51ad46:c.instructions+=3;goto B51ad46;
case 0x51ad48:c.instructions+=2;goto B51ad48;
case 0x51ad4b:c.instructions+=1;goto B51ad4b;
case 0x51ad4d:goto L51ad4d;
case 0x51ad50:goto L51ad50;
case 0x51ad53:c.instructions+=2;goto B51ad53;
case 0x51ad56:c.instructions+=1;goto B51ad56;
case 0x51ad58:goto L51ad58;
case 0x51ad5e:c.instructions+=3;goto B51ad5e;
case 0x51ad60:c.instructions+=2;goto B51ad60;
case 0x51ad63:c.instructions+=1;goto B51ad63;
case 0x51ad65:goto L51ad65;
case 0x51ad68:goto L51ad68;
case 0x51ad6f:c.instructions+=1;goto B51ad6f;
case 0x51ad75:goto L51ad75;
case 0x51ad7b:c.instructions+=1;goto B51ad7b;
case 0x51ad7d:goto L51ad7d;
case 0x51ad83:goto L51ad83;
case 0x51ad89:c.instructions+=3;goto B51ad89;
case 0x51ad8f:c.instructions+=2;goto B51ad8f;
case 0x51ad91:c.instructions+=1;goto B51ad91;
case 0x51ad93:goto L51ad93;
case 0x51ad95:c.instructions+=1;goto B51ad95;
case 0x51ad97:goto L51ad97;
case 0x51ad9a:c.instructions+=6;goto B51ad9a;
case 0x51ad9c:c.instructions+=5;goto B51ad9c;
case 0x51ad9f:c.instructions+=4;goto B51ad9f;
case 0x51ada2:c.instructions+=3;goto B51ada2;
case 0x51ada5:c.instructions+=2;goto B51ada5;
case 0x51ada7:c.instructions+=1;goto B51ada7;
case 0x51ada9:goto L51ada9;
case 0x51adaa:c.instructions+=3;goto B51adaa;
case 0x51adab:c.instructions+=2;goto B51adab;
case 0x51adac:c.instructions+=1;goto B51adac;
case 0x51adb0:goto L51adb0;
case 0x51adb1:c.instructions+=5;goto B51adb1;
case 0x51adb2:c.instructions+=4;goto B51adb2;
case 0x51adb3:c.instructions+=3;goto B51adb3;
case 0x51adb5:c.instructions+=2;goto B51adb5;
case 0x51adb7:c.instructions+=1;goto B51adb7;
case 0x51adbc:goto L51adbc;
case 0x51adbe:c.instructions+=3;goto B51adbe;
case 0x51adc1:c.instructions+=2;goto B51adc1;
case 0x51adc3:c.instructions+=1;goto B51adc3;
case 0x51adc5:goto L51adc5;
case 0x51adca:c.instructions+=6;goto B51adca;
case 0x51adcd:c.instructions+=5;goto B51adcd;
case 0x51add0:c.instructions+=4;goto B51add0;
case 0x51add3:c.instructions+=3;goto B51add3;
case 0x51add6:c.instructions+=2;goto B51add6;
case 0x51addc:c.instructions+=1;goto B51addc;
case 0x51adde:goto L51adde;
case 0x51ade0:goto L51ade0;
case 0x51ade4:c.instructions+=7;goto B51ade4;
case 0x51ade7:c.instructions+=6;goto B51ade7;
case 0x51adea:c.instructions+=5;goto B51adea;
case 0x51aded:c.instructions+=4;goto B51aded;
case 0x51adf4:c.instructions+=3;goto B51adf4;
case 0x51adfa:c.instructions+=2;goto B51adfa;
case 0x51adfc:c.instructions+=1;goto B51adfc;
case 0x51adfe:goto L51adfe;
case 0x51ae01:c.instructions+=3;goto B51ae01;
case 0x51ae03:c.instructions+=2;goto B51ae03;
case 0x51ae06:c.instructions+=1;goto B51ae06;
case 0x51ae08:goto L51ae08;
case 0x51ae0b:goto L51ae0b;
case 0x51ae0e:c.instructions+=2;goto B51ae0e;
case 0x51ae11:c.instructions+=1;goto B51ae11;
case 0x51ae13:goto L51ae13;
case 0x51ae19:c.instructions+=3;goto B51ae19;
case 0x51ae1b:c.instructions+=2;goto B51ae1b;
case 0x51ae1e:c.instructions+=1;goto B51ae1e;
case 0x51ae20:goto L51ae20;
case 0x51ae23:goto L51ae23;
case 0x51ae26:c.instructions+=1;goto B51ae26;
case 0x51ae2c:goto L51ae2c;
case 0x51ae32:c.instructions+=1;goto B51ae32;
case 0x51ae34:goto L51ae34;
case 0x51ae3a:goto L51ae3a;
case 0x51ae40:c.instructions+=3;goto B51ae40;
case 0x51ae46:c.instructions+=2;goto B51ae46;
case 0x51ae48:c.instructions+=1;goto B51ae48;
case 0x51ae4a:goto L51ae4a;
case 0x51ae50:goto L51ae50;
case 0x51ae53:c.instructions+=5;goto B51ae53;
case 0x51ae56:c.instructions+=4;goto B51ae56;
case 0x51ae59:c.instructions+=3;goto B51ae59;
case 0x51ae5c:c.instructions+=2;goto B51ae5c;
case 0x51ae5e:c.instructions+=1;goto B51ae5e;
case 0x51ae60:goto L51ae60;
case 0x51ae63:c.instructions+=7;goto B51ae63;
case 0x51ae66:c.instructions+=6;goto B51ae66;
case 0x51ae69:c.instructions+=5;goto B51ae69;
case 0x51ae6c:c.instructions+=4;goto B51ae6c;
case 0x51ae6d:c.instructions+=3;goto B51ae6d;
case 0x51ae6e:c.instructions+=2;goto B51ae6e;
case 0x51ae6f:c.instructions+=1;goto B51ae6f;
case 0x51ae80:goto L51ae80;
case 0x51ae84:c.instructions+=8;goto B51ae84;
case 0x51ae85:c.instructions+=7;goto B51ae85;
case 0x51ae86:c.instructions+=6;goto B51ae86;
case 0x51ae87:c.instructions+=5;goto B51ae87;
case 0x51ae89:c.instructions+=4;goto B51ae89;
case 0x51ae8b:c.instructions+=3;goto B51ae8b;
case 0x51ae8c:c.instructions+=2;goto B51ae8c;
case 0x51ae8e:c.instructions+=1;goto B51ae8e;
case 0x51ae94:goto L51ae94;
case 0x51ae95:c.instructions+=1;goto B51ae95;
case 0x51ae9a:goto L51ae9a;
case 0x51aea0:c.instructions+=3;goto B51aea0;
case 0x51aea3:c.instructions+=2;goto B51aea3;
case 0x51aea5:c.instructions+=1;goto B51aea5;
case 0x51aeab:goto L51aeab;
case 0x51aeb0:goto L51aeb0;
case 0x51aeb2:c.instructions+=1;goto B51aeb2;
case 0x51aeb8:goto L51aeb8;
case 0x51aebc:c.instructions+=1;goto B51aebc;
case 0x51aebe:goto L51aebe;
case 0x51aec1:c.instructions+=1;goto B51aec1;
case 0x51aec3:goto L51aec3;
case 0x51aec9:c.instructions+=2;goto B51aec9;
case 0x51aecb:c.instructions+=1;goto B51aecb;
case 0x51aecd:goto L51aecd;
case 0x51aed0:c.instructions+=1;goto B51aed0;
case 0x51aed6:goto L51aed6;
case 0x51aedc:c.instructions+=1;goto B51aedc;
case 0x51aede:goto L51aede;
case 0x51aee1:c.instructions+=1;goto B51aee1;
case 0x51aee7:goto L51aee7;
case 0x51aeea:c.instructions+=2;goto B51aeea;
case 0x51aeec:c.instructions+=1;goto B51aeec;
case 0x51aeee:goto L51aeee;
case 0x51aef1:c.instructions+=1;goto B51aef1;
case 0x51aef4:goto L51aef4;
case 0x51aef7:c.instructions+=2;goto B51aef7;
case 0x51aef9:c.instructions+=1;goto B51aef9;
case 0x51aefb:goto L51aefb;
case 0x51aefe:c.instructions+=1;goto B51aefe;
case 0x51af01:goto L51af01;
case 0x51af04:c.instructions+=5;goto B51af04;
case 0x51af07:c.instructions+=4;goto B51af07;
case 0x51af0d:c.instructions+=3;goto B51af0d;
case 0x51af13:c.instructions+=2;goto B51af13;
case 0x51af15:c.instructions+=1;goto B51af15;
case 0x51af17:goto L51af17;
case 0x51af1a:c.instructions+=6;goto B51af1a;
case 0x51af1d:c.instructions+=5;goto B51af1d;
case 0x51af20:c.instructions+=4;goto B51af20;
case 0x51af23:c.instructions+=3;goto B51af23;
case 0x51af26:c.instructions+=2;goto B51af26;
case 0x51af28:c.instructions+=1;goto B51af28;
case 0x51af2a:goto L51af2a;
case 0x51af2c:goto L51af2c;
case 0x51af32:c.instructions+=1;goto B51af32;
case 0x51af34:goto L51af34;
case 0x51af37:goto L51af37;
case 0x51af39:c.instructions+=1;goto B51af39;
case 0x51af3f:goto L51af3f;
case 0x51af40:c.instructions+=5;goto B51af40;
case 0x51af41:c.instructions+=4;goto B51af41;
case 0x51af42:c.instructions+=3;goto B51af42;
case 0x51af44:c.instructions+=2;goto B51af44;
case 0x51af45:c.instructions+=1;goto B51af45;
case 0x51af50:goto L51af50;
case 0x51af51:c.instructions+=3;goto B51af51;
case 0x51af53:c.instructions+=2;goto B51af53;
case 0x51af55:c.instructions+=1;goto B51af55;
case 0x51af5a:goto L51af5a;
case 0x51af5d:c.instructions+=2;goto B51af5d;
case 0x51af5f:c.instructions+=1;goto B51af5f;
case 0x51af61:goto L51af61;
case 0x51af66:c.instructions+=6;goto B51af66;
case 0x51af69:c.instructions+=5;goto B51af69;
case 0x51af6c:c.instructions+=4;goto B51af6c;
case 0x51af73:c.instructions+=3;goto B51af73;
case 0x51af7a:c.instructions+=2;goto B51af7a;
case 0x51af80:c.instructions+=1;goto B51af80;
case 0x51af82:goto L51af82;
case 0x51af84:goto L51af84;
case 0x51af88:c.instructions+=14;goto B51af88;
case 0x51af8c:c.instructions+=13;goto B51af8c;
case 0x51af8f:c.instructions+=12;goto B51af8f;
case 0x51af92:c.instructions+=11;goto B51af92;
case 0x51af94:c.instructions+=10;goto B51af94;
case 0x51af97:c.instructions+=9;goto B51af97;
case 0x51af9b:c.instructions+=8;goto B51af9b;
case 0x51af9d:c.instructions+=7;goto B51af9d;
case 0x51af9f:c.instructions+=6;goto B51af9f;
case 0x51afa2:c.instructions+=5;goto B51afa2;
case 0x51afa9:c.instructions+=4;goto B51afa9;
case 0x51afac:c.instructions+=3;goto B51afac;
case 0x51afb2:c.instructions+=2;goto B51afb2;
case 0x51afb4:c.instructions+=1;goto B51afb4;
case 0x51afb6:goto L51afb6;
case 0x51afb9:c.instructions+=3;goto B51afb9;
case 0x51afbb:c.instructions+=2;goto B51afbb;
case 0x51afbe:c.instructions+=1;goto B51afbe;
case 0x51afc0:goto L51afc0;
case 0x51afc3:goto L51afc3;
case 0x51afc6:c.instructions+=2;goto B51afc6;
case 0x51afc9:c.instructions+=1;goto B51afc9;
case 0x51afcb:goto L51afcb;
case 0x51afd1:c.instructions+=3;goto B51afd1;
case 0x51afd3:c.instructions+=2;goto B51afd3;
case 0x51afd6:c.instructions+=1;goto B51afd6;
case 0x51afd8:goto L51afd8;
case 0x51afdb:goto L51afdb;
case 0x51afe2:c.instructions+=1;goto B51afe2;
case 0x51afe8:goto L51afe8;
case 0x51afee:c.instructions+=1;goto B51afee;
case 0x51aff0:goto L51aff0;
case 0x51aff6:goto L51aff6;
case 0x51affc:c.instructions+=2;goto B51affc;
case 0x51affd:c.instructions+=1;goto B51affd;
default:missing_instruction(c.pc);}
B51a000:L51a000:{c.instructions+=5;NFSU2_TR(0x51a000);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a001:{NFSU2_TR(0x51a001);
u8 U[4];
w4(U+0,u32(0x79ab40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a006:{NFSU2_TR(0x51a006);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a00b:{NFSU2_TR(0x51a00b);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a010:{NFSU2_TR(0x51a010);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a015ull));
TAIL_STATIC(0x440df0u,440);
}
B51a015:L51a015:{c.instructions+=4;NFSU2_TR(0x51a015);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B51a018:{NFSU2_TR(0x51a018);
__builtin_memmove(gp(0x838484),(R+0),4);
}
B51a01d:{NFSU2_TR(0x51a01d);
__builtin_memmove((R+4),(R+0),4);
}
B51a01f:{NFSU2_TR(0x51a01f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a024ull));
TAIL_STATIC(0x440d40u,440);
}
B51a024:L51a024:{c.instructions+=6;NFSU2_TR(0x51a024);
__builtin_memmove((R+28),(R+0),4);
}
B51a026:{NFSU2_TR(0x51a026);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a02a:{NFSU2_TR(0x51a02a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51a02c:{NFSU2_TR(0x51a02c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51a02e:{NFSU2_TR(0x51a02e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a032:{NFSU2_TR(0x51a032);
if(r1(R+518)){{goto L51a03e;}}
}
B51a034:L51a034:{c.instructions+=2;NFSU2_TR(0x51a034);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51a037:{NFSU2_TR(0x51a037);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a03cull));
TAIL_STATIC(0x5bb1c0u,5bb);
}
B51a03c:L51a03c:{c.instructions+=1;NFSU2_TR(0x51a03c);
{goto L51a040;}
}
B51a03e:L51a03e:{c.instructions+=1;NFSU2_TR(0x51a03e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B51a040:L51a040:{c.instructions+=33;NFSU2_TR(0x51a040);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a044:{NFSU2_TR(0x51a044);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a04a:{NFSU2_TR(0x51a04a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a04d:{NFSU2_TR(0x51a04d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B51a04f:{NFSU2_TR(0x51a04f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a052:{NFSU2_TR(0x51a052);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a055:{NFSU2_TR(0x51a055);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a059:{NFSU2_TR(0x51a059);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51a05c:{NFSU2_TR(0x51a05c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B51a05f:{NFSU2_TR(0x51a05f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B51a061:{NFSU2_TR(0x51a061);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a065:{NFSU2_TR(0x51a065);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B51a067:{NFSU2_TR(0x51a067);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a06b:{NFSU2_TR(0x51a06b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a06c:{NFSU2_TR(0x51a06c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51a06f:{NFSU2_TR(0x51a06f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x20ull))));
}
B51a072:{NFSU2_TR(0x51a072);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a075:{NFSU2_TR(0x51a075);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B51a077:{NFSU2_TR(0x51a077);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a07a:{NFSU2_TR(0x51a07a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a07e:{NFSU2_TR(0x51a07e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a081:{NFSU2_TR(0x51a081);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a085:{NFSU2_TR(0x51a085);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a086:{NFSU2_TR(0x51a086);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a087:{NFSU2_TR(0x51a087);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B51a08f:{NFSU2_TR(0x51a08f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a092:{NFSU2_TR(0x51a092);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a095:{NFSU2_TR(0x51a095);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a098:{NFSU2_TR(0x51a098);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a09b:{NFSU2_TR(0x51a09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a09e:{NFSU2_TR(0x51a09e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a0a1:{NFSU2_TR(0x51a0a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a0a4:{NFSU2_TR(0x51a0a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a0a9ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B51a0a9:L51a0a9:{c.instructions+=4;NFSU2_TR(0x51a0a9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a0aa:{NFSU2_TR(0x51a0aa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a0ab:{NFSU2_TR(0x51a0ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a0ac:{NFSU2_TR(0x51a0ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a0b1ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B51a0b1:L51a0b1:{c.instructions+=5;NFSU2_TR(0x51a0b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B51a0b4:{NFSU2_TR(0x51a0b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a0b5:{NFSU2_TR(0x51a0b5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a0b6:{NFSU2_TR(0x51a0b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a0b7:{NFSU2_TR(0x51a0b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a0bcull));
TAIL_STATIC(0x43c9c0u,43c);
}
B51a0bc:L51a0bc:{c.instructions+=5;NFSU2_TR(0x51a0bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B51a0bf:{NFSU2_TR(0x51a0bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a0c0:{NFSU2_TR(0x51a0c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a0c1:{NFSU2_TR(0x51a0c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a0c2:{NFSU2_TR(0x51a0c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a0c7ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B51a0c7:L51a0c7:{c.instructions+=39;NFSU2_TR(0x51a0c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a0cb:{NFSU2_TR(0x51a0cb);
__builtin_memmove((R+8),(R+4),4);
}
B51a0cd:{NFSU2_TR(0x51a0cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a0d0:{NFSU2_TR(0x51a0d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a0d4:{NFSU2_TR(0x51a0d4);
__builtin_memmove((R+0),(R+4),4);
}
B51a0d6:{NFSU2_TR(0x51a0d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a0d9:{NFSU2_TR(0x51a0d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a0dd:{NFSU2_TR(0x51a0dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a0e0:{NFSU2_TR(0x51a0e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a0e3:{NFSU2_TR(0x51a0e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a0e7:{NFSU2_TR(0x51a0e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a0ea:{NFSU2_TR(0x51a0ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a0ed:{NFSU2_TR(0x51a0ed);
__builtin_memmove((R+8),(R+0),4);
}
B51a0ef:{NFSU2_TR(0x51a0ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a0f2:{NFSU2_TR(0x51a0f2);
__builtin_memmove((R+0),(R+4),4);
}
B51a0f4:{NFSU2_TR(0x51a0f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a0f8:{NFSU2_TR(0x51a0f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a0fb:{NFSU2_TR(0x51a0fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a0fe:{NFSU2_TR(0x51a0fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a102:{NFSU2_TR(0x51a102);
__builtin_memmove((R+0),(R+4),4);
}
B51a104:{NFSU2_TR(0x51a104);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a107:{NFSU2_TR(0x51a107);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a10b:{NFSU2_TR(0x51a10b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a10e:{NFSU2_TR(0x51a10e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a111:{NFSU2_TR(0x51a111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51a113:{NFSU2_TR(0x51a113);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a116:{NFSU2_TR(0x51a116);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a119:{NFSU2_TR(0x51a119);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a11c:{NFSU2_TR(0x51a11c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a11f:{NFSU2_TR(0x51a11f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a122:{NFSU2_TR(0x51a122);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a125:{NFSU2_TR(0x51a125);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B51a128:{NFSU2_TR(0x51a128);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a12b:{NFSU2_TR(0x51a12b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51a12f:{NFSU2_TR(0x51a12f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a133:{NFSU2_TR(0x51a133);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a136:{NFSU2_TR(0x51a136);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a139:{NFSU2_TR(0x51a139);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xdbf6eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51a13e:{NFSU2_TR(0x51a13e);
if(r1(R+518)){{goto L51a155;}}
}
B51a140:L51a140:{c.instructions+=2;NFSU2_TR(0x51a140);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xe0baeull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51a145:{NFSU2_TR(0x51a145);
if(r1(R+518)){{goto L51a155;}}
}
B51a147:L51a147:{c.instructions+=2;NFSU2_TR(0x51a147);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xe0be8ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51a14c:{NFSU2_TR(0x51a14c);
if(r1(R+518)){{goto L51a155;}}
}
B51a14e:L51a14e:{c.instructions+=2;NFSU2_TR(0x51a14e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xe16d8ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51a153:{NFSU2_TR(0x51a153);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51a159;}}
}
B51a155:L51a155:{c.instructions+=1;NFSU2_TR(0x51a155);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71ull))));
w1(U+4,u8(0x72ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51a159:L51a159:{c.instructions+=3;NFSU2_TR(0x51a159);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a15c:{NFSU2_TR(0x51a15c);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdccd1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51a163:{NFSU2_TR(0x51a163);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51a169;}}
}
B51a165:L51a165:{c.instructions+=1;NFSU2_TR(0x51a165);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71ull))));
w1(U+4,u8(0x73ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51a169:L51a169:{c.instructions+=3;NFSU2_TR(0x51a169);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a16c:{NFSU2_TR(0x51a16c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xe093full))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51a173:{NFSU2_TR(0x51a173);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51a194;}}
}
B51a175:L51a175:{c.instructions+=10;NFSU2_TR(0x51a175);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51a177:{NFSU2_TR(0x51a177);
w4(R+4,u32(0x3f800000ull));
}
B51a17c:{NFSU2_TR(0x51a17c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a17f:{NFSU2_TR(0x51a17f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a182:{NFSU2_TR(0x51a182);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a185:{NFSU2_TR(0x51a185);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a188:{NFSU2_TR(0x51a188);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a18b:{NFSU2_TR(0x51a18b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a18e:{NFSU2_TR(0x51a18e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a191:{NFSU2_TR(0x51a191);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a194:L51a194:{c.instructions+=3;NFSU2_TR(0x51a194);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B51a198:{NFSU2_TR(0x51a198);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51a19a:{NFSU2_TR(0x51a19a);
if(r1(R+518)){{goto L51a1a0;}}
}
B51a19c:L51a19c:{c.instructions+=1;NFSU2_TR(0x51a19c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x2ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B51a1a0:L51a1a0:{c.instructions+=9;NFSU2_TR(0x51a1a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a1a4:{NFSU2_TR(0x51a1a4);
__builtin_memmove((R+0),(R+28),4);
}
B51a1a6:{NFSU2_TR(0x51a1a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51a1a7:{NFSU2_TR(0x51a1a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51a1a8:{NFSU2_TR(0x51a1a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51a1a9:{NFSU2_TR(0x51a1a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51a1aa:{NFSU2_TR(0x51a1aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a1b1:{NFSU2_TR(0x51a1b1);
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
B51a1b4:{NFSU2_TR(0x51a1b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51a1c0:L51a1c0:{c.instructions+=17;NFSU2_TR(0x51a1c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a1c1:{NFSU2_TR(0x51a1c1);
__builtin_memmove((R+20),(R+16),4);
}
B51a1c3:{NFSU2_TR(0x51a1c3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B51a1c6:{NFSU2_TR(0x51a1c6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a1c8:{NFSU2_TR(0x51a1c8);
u8 U[4];
w4(U+0,u32(0x7770eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a1cd:{NFSU2_TR(0x51a1cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a1d3:{NFSU2_TR(0x51a1d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a1d4:{NFSU2_TR(0x51a1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a1db:{NFSU2_TR(0x51a1db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x298ull))));
}
B51a1e1:{NFSU2_TR(0x51a1e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a1e2:{NFSU2_TR(0x51a1e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a1e3:{NFSU2_TR(0x51a1e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a1e4:{NFSU2_TR(0x51a1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51a1e7:{NFSU2_TR(0x51a1e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51a1e9:{NFSU2_TR(0x51a1e9);
__builtin_memmove((R+12),(R+4),4);
}
B51a1eb:{NFSU2_TR(0x51a1eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a1ef:{NFSU2_TR(0x51a1ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51a23c;}}
}
B51a1f1:L51a1f1:{c.instructions+=25;NFSU2_TR(0x51a1f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a1f4:{NFSU2_TR(0x51a1f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a1f7:{NFSU2_TR(0x51a1f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a1fa:{NFSU2_TR(0x51a1fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a1fb:{NFSU2_TR(0x51a1fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a1fc:{NFSU2_TR(0x51a1fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a1ff:{NFSU2_TR(0x51a1ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a200:{NFSU2_TR(0x51a200);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a203:{NFSU2_TR(0x51a203);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a204:{NFSU2_TR(0x51a204);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a207:{NFSU2_TR(0x51a207);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a208:{NFSU2_TR(0x51a208);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a20b:{NFSU2_TR(0x51a20b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a20c:{NFSU2_TR(0x51a20c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a20f:{NFSU2_TR(0x51a20f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a210:{NFSU2_TR(0x51a210);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a213:{NFSU2_TR(0x51a213);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a214:{NFSU2_TR(0x51a214);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a217:{NFSU2_TR(0x51a217);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a218:{NFSU2_TR(0x51a218);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a21b:{NFSU2_TR(0x51a21b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a21c:{NFSU2_TR(0x51a21c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a21d:{NFSU2_TR(0x51a21d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a21e:{NFSU2_TR(0x51a21e);
__builtin_memmove((R+4),(R+12),4);
}
B51a220:{NFSU2_TR(0x51a220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a225ull));
TAIL_STATIC(0x519fc0u,519);
}
B51a225:L51a225:{c.instructions+=8;NFSU2_TR(0x51a225);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a22c:{NFSU2_TR(0x51a22c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a233:{NFSU2_TR(0x51a233);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51a234:{NFSU2_TR(0x51a234);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51a235:{NFSU2_TR(0x51a235);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51a236:{NFSU2_TR(0x51a236);
__builtin_memmove((R+16),(R+20),4);
}
B51a238:{NFSU2_TR(0x51a238);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51a239:{NFSU2_TR(0x51a239);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51a23c:L51a23c:{c.instructions+=39;NFSU2_TR(0x51a23c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a23f:{NFSU2_TR(0x51a23f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a242:{NFSU2_TR(0x51a242);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a245:{NFSU2_TR(0x51a245);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a249:{NFSU2_TR(0x51a249);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a24c:{NFSU2_TR(0x51a24c);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a250:{NFSU2_TR(0x51a250);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a254:{NFSU2_TR(0x51a254);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a258:{NFSU2_TR(0x51a258);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a25b:{NFSU2_TR(0x51a25b);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a262:{NFSU2_TR(0x51a262);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a265:{NFSU2_TR(0x51a265);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a26c:{NFSU2_TR(0x51a26c);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a273:{NFSU2_TR(0x51a273);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a276:{NFSU2_TR(0x51a276);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a27d:{NFSU2_TR(0x51a27d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a280:{NFSU2_TR(0x51a280);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a284:{NFSU2_TR(0x51a284);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a288:{NFSU2_TR(0x51a288);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a28f:{NFSU2_TR(0x51a28f);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a296:{NFSU2_TR(0x51a296);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a299:{NFSU2_TR(0x51a299);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a29d:{NFSU2_TR(0x51a29d);
__builtin_memmove((R+8),(R+0),4);
}
B51a29f:{NFSU2_TR(0x51a29f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a2a3:{NFSU2_TR(0x51a2a3);
__builtin_memmove((R+0),(R+4),4);
}
B51a2a5:{NFSU2_TR(0x51a2a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a2a9:{NFSU2_TR(0x51a2a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a2ac:{NFSU2_TR(0x51a2ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a2b0:{NFSU2_TR(0x51a2b0);
__builtin_memmove((R+0),(R+4),4);
}
B51a2b2:{NFSU2_TR(0x51a2b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a2b6:{NFSU2_TR(0x51a2b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a2b9:{NFSU2_TR(0x51a2b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a2bd:{NFSU2_TR(0x51a2bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a2c0:{NFSU2_TR(0x51a2c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a2c4:{NFSU2_TR(0x51a2c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a2c8:{NFSU2_TR(0x51a2c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B51a2cf:{NFSU2_TR(0x51a2cf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B51a2d2:{NFSU2_TR(0x51a2d2);
w4(R+8,u32(0x4ull));
}
B51a2d7:{NFSU2_TR(0x51a2d7);
{goto L51a2e0;}
}
B51a2e0:L51a2e0:{c.instructions+=24;NFSU2_TR(0x51a2e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B51a2e4:{NFSU2_TR(0x51a2e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a2e8:{NFSU2_TR(0x51a2e8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+24,u32(r1(U+0)));
}
B51a2eb:{NFSU2_TR(0x51a2eb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51a2ef:{NFSU2_TR(0x51a2ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a2f3:{NFSU2_TR(0x51a2f3);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51a2f9:{NFSU2_TR(0x51a2f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B51a2fd:{NFSU2_TR(0x51a2fd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51a301:{NFSU2_TR(0x51a301);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a305:{NFSU2_TR(0x51a305);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51a30b:{NFSU2_TR(0x51a30b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B51a30f:{NFSU2_TR(0x51a30f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51a313:{NFSU2_TR(0x51a313);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a317:{NFSU2_TR(0x51a317);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51a31d:{NFSU2_TR(0x51a31d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B51a320:{NFSU2_TR(0x51a320);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51a324:{NFSU2_TR(0x51a324);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B51a327:{NFSU2_TR(0x51a327);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B51a328:{NFSU2_TR(0x51a328);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51a32e:{NFSU2_TR(0x51a32e);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51a331:{NFSU2_TR(0x51a331);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51a334:{NFSU2_TR(0x51a334);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51a337:{NFSU2_TR(0x51a337);
{u32 ea_=u32(r4(R+4)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51a33a:{NFSU2_TR(0x51a33a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51a2e0u);}goto L51a2e0;}}
}
B51a33c:L51a33c:{c.instructions+=7;NFSU2_TR(0x51a33c);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B51a340:{NFSU2_TR(0x51a340);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a341:{NFSU2_TR(0x51a341);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51a344:{NFSU2_TR(0x51a344);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51a348:{NFSU2_TR(0x51a348);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a349:{NFSU2_TR(0x51a349);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a34a:{NFSU2_TR(0x51a34a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a34full));
TAIL_STATIC(0x43c9c0u,43c);
}
B51a34f:L51a34f:{c.instructions+=6;NFSU2_TR(0x51a34f);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51a353:{NFSU2_TR(0x51a353);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a354:{NFSU2_TR(0x51a354);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B51a35b:{NFSU2_TR(0x51a35b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a35c:{NFSU2_TR(0x51a35c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a35d:{NFSU2_TR(0x51a35d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a362ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B51a362:L51a362:{c.instructions+=6;NFSU2_TR(0x51a362);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51a369:{NFSU2_TR(0x51a369);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a36a:{NFSU2_TR(0x51a36a);
u8 U[4];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51a371:{NFSU2_TR(0x51a371);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a372:{NFSU2_TR(0x51a372);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a373:{NFSU2_TR(0x51a373);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a378ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B51a378:L51a378:{c.instructions+=6;NFSU2_TR(0x51a378);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B51a37f:{NFSU2_TR(0x51a37f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a380:{NFSU2_TR(0x51a380);
u8 U[4];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51a387:{NFSU2_TR(0x51a387);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a388:{NFSU2_TR(0x51a388);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a389:{NFSU2_TR(0x51a389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a38eull));
TAIL_STATIC(0x43c9c0u,43c);
}
B51a38e:L51a38e:{c.instructions+=18;NFSU2_TR(0x51a38e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B51a391:{NFSU2_TR(0x51a391);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B51a394:{NFSU2_TR(0x51a394);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51a396:{NFSU2_TR(0x51a396);
u8 U[4];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51a39d:{NFSU2_TR(0x51a39d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a39e:{NFSU2_TR(0x51a39e);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B51a3a5:{NFSU2_TR(0x51a3a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a3a6:{NFSU2_TR(0x51a3a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51a3ad:{NFSU2_TR(0x51a3ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a3ae:{NFSU2_TR(0x51a3ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51a3b5:{NFSU2_TR(0x51a3b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a3b6:{NFSU2_TR(0x51a3b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B51a3ba:{NFSU2_TR(0x51a3ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a3bb:{NFSU2_TR(0x51a3bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51a3bf:{NFSU2_TR(0x51a3bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a3c0:{NFSU2_TR(0x51a3c0);
__builtin_memmove((R+4),(R+12),4);
}
B51a3c2:{NFSU2_TR(0x51a3c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a3c3:{NFSU2_TR(0x51a3c3);
if(r1(R+518)){{goto L51a3d0;}}
}
B51a3c5:L51a3c5:{c.instructions+=1;NFSU2_TR(0x51a3c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a3caull));
TAIL_STATIC(0x50b010u,50b);
}
B51a3ca:L51a3ca:{c.instructions+=2;NFSU2_TR(0x51a3ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a3ce:{NFSU2_TR(0x51a3ce);
{goto L51a3d9;}
}
B51a3d0:L51a3d0:{c.instructions+=1;NFSU2_TR(0x51a3d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a3d5ull));
TAIL_STATIC(0x505660u,505);
}
B51a3d5:L51a3d5:{c.instructions+=1;NFSU2_TR(0x51a3d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a3d9:L51a3d9:{c.instructions+=2;NFSU2_TR(0x51a3d9);
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
B51a3db:{NFSU2_TR(0x51a3db);
if(r1(R+518)){{goto L51a5b8;}}
}
B51a3e1:L51a3e1:{c.instructions+=1;NFSU2_TR(0x51a3e1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L51a453;}}
}
B51a3e3:L51a3e3:{c.instructions+=4;NFSU2_TR(0x51a3e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1a4ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B51a3ea:{NFSU2_TR(0x51a3ea);
u8 U[4];
w4(U+0,u32(u32(u32(0xe2ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B51a3f1:{NFSU2_TR(0x51a3f1);
__builtin_memmove((R+12),(R+0),4);
}
B51a3f3:{NFSU2_TR(0x51a3f3);
{goto L51a400;}
}
B51a400:L51a400:{c.instructions+=3;NFSU2_TR(0x51a400);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a403:{NFSU2_TR(0x51a403);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51a409:{NFSU2_TR(0x51a409);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a40eull));
TAIL_STATIC(0x75bed4u,75b);
}
B51a40e:L51a40e:{c.instructions+=4;NFSU2_TR(0x51a40e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a410:{NFSU2_TR(0x51a410);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51a416:{NFSU2_TR(0x51a416);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51a419:{NFSU2_TR(0x51a419);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a41eull));
TAIL_STATIC(0x75bed4u,75b);
}
B51a41e:L51a41e:{c.instructions+=4;NFSU2_TR(0x51a41e);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a421:{NFSU2_TR(0x51a421);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51a427:{NFSU2_TR(0x51a427);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51a42a:{NFSU2_TR(0x51a42a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a42full));
TAIL_STATIC(0x75bed4u,75b);
}
B51a42f:L51a42f:{c.instructions+=4;NFSU2_TR(0x51a42f);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a432:{NFSU2_TR(0x51a432);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51a438:{NFSU2_TR(0x51a438);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B51a43a:{NFSU2_TR(0x51a43a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a43full));
TAIL_STATIC(0x75bed4u,75b);
}
B51a43f:L51a43f:{c.instructions+=5;NFSU2_TR(0x51a43f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51a442:{NFSU2_TR(0x51a442);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B51a445:{NFSU2_TR(0x51a445);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B51a448:{NFSU2_TR(0x51a448);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B51a449:{NFSU2_TR(0x51a449);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51a400u);}goto L51a400;}}
}
B51a44b:L51a44b:{c.instructions+=2;NFSU2_TR(0x51a44b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a44f:{NFSU2_TR(0x51a44f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51a453:L51a453:{c.instructions+=5;NFSU2_TR(0x51a453);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B51a456:{NFSU2_TR(0x51a456);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51a458:{NFSU2_TR(0x51a458);
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
B51a45a:{NFSU2_TR(0x51a45a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a45e:{NFSU2_TR(0x51a45e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L51a5b8;}}
}
B51a464:L51a464:{c.instructions+=3;NFSU2_TR(0x51a464);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B51a467:{NFSU2_TR(0x51a467);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B51a46b:{NFSU2_TR(0x51a46b);
{goto L51a470;}
}
B51a470:L51a470:{c.instructions+=4;NFSU2_TR(0x51a470);
__builtin_memmove((R+4),gp(0x838480),4);
}
B51a476:{NFSU2_TR(0x51a476);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a479:{NFSU2_TR(0x51a479);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51a47c:{NFSU2_TR(0x51a47c);
if(r1(R+518)){{goto L51a489;}}
}
B51a47e:L51a47e:{c.instructions+=1;NFSU2_TR(0x51a47e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a483ull));
TAIL_STATIC(0x43cdd0u,43c);
}
B51a483:L51a483:{c.instructions+=2;NFSU2_TR(0x51a483);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a487:{NFSU2_TR(0x51a487);
{goto L51a4ba;}
}
B51a489:L51a489:{c.instructions+=3;NFSU2_TR(0x51a489);
__builtin_memmove((R+0),gp(0x838484),4);
}
B51a48e:{NFSU2_TR(0x51a48e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51a490:{NFSU2_TR(0x51a490);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51a4af;}}
}
B51a492:L51a492:{c.instructions+=5;NFSU2_TR(0x51a492);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a493:{NFSU2_TR(0x51a493);
u8 U[4];
w4(U+0,u32(0x79ab40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a498:{NFSU2_TR(0x51a498);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a49d:{NFSU2_TR(0x51a49d);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a4a2:{NFSU2_TR(0x51a4a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a4a7ull));
TAIL_STATIC(0x440df0u,440);
}
B51a4a7:L51a4a7:{c.instructions+=2;NFSU2_TR(0x51a4a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B51a4aa:{NFSU2_TR(0x51a4aa);
__builtin_memmove(gp(0x838484),(R+0),4);
}
B51a4af:L51a4af:{c.instructions+=2;NFSU2_TR(0x51a4af);
__builtin_memmove((R+4),(R+0),4);
}
B51a4b1:{NFSU2_TR(0x51a4b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a4b6ull));
TAIL_STATIC(0x440d40u,440);
}
B51a4b6:L51a4b6:{c.instructions+=1;NFSU2_TR(0x51a4b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a4ba:L51a4ba:{c.instructions+=3;NFSU2_TR(0x51a4ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51a4bc:{NFSU2_TR(0x51a4bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2acull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51a4c7:{NFSU2_TR(0x51a4c7);
if(r1(R+518)){{goto L51a4d7;}}
}
B51a4c9:L51a4c9:{c.instructions+=2;NFSU2_TR(0x51a4c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51a4cc:{NFSU2_TR(0x51a4cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a4d1ull));
TAIL_STATIC(0x5bb1c0u,5bb);
}
B51a4d1:L51a4d1:{c.instructions+=2;NFSU2_TR(0x51a4d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a4d5:{NFSU2_TR(0x51a4d5);
{goto L51a4d9;}
}
B51a4d7:L51a4d7:{c.instructions+=1;NFSU2_TR(0x51a4d7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51a4d9:L51a4d9:{c.instructions+=63;NFSU2_TR(0x51a4d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51a4e3:{NFSU2_TR(0x51a4e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a4e6:{NFSU2_TR(0x51a4e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B51a4e8:{NFSU2_TR(0x51a4e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a4eb:{NFSU2_TR(0x51a4eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a4ee:{NFSU2_TR(0x51a4ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B51a4f0:{NFSU2_TR(0x51a4f0);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a4f4:{NFSU2_TR(0x51a4f4);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a4f8:{NFSU2_TR(0x51a4f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a4fc:{NFSU2_TR(0x51a4fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a500:{NFSU2_TR(0x51a500);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B51a502:{NFSU2_TR(0x51a502);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51a505:{NFSU2_TR(0x51a505);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a508:{NFSU2_TR(0x51a508);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a50c:{NFSU2_TR(0x51a50c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a50f:{NFSU2_TR(0x51a50f);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51a512:{NFSU2_TR(0x51a512);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a519:{NFSU2_TR(0x51a519);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a51c:{NFSU2_TR(0x51a51c);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B51a520:{NFSU2_TR(0x51a520);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a523:{NFSU2_TR(0x51a523);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a526:{NFSU2_TR(0x51a526);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a528:{NFSU2_TR(0x51a528);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B51a52c:{NFSU2_TR(0x51a52c);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a52f:{NFSU2_TR(0x51a52f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B51a530:{NFSU2_TR(0x51a530);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51a533:{NFSU2_TR(0x51a533);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B51a535:{NFSU2_TR(0x51a535);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B51a538:{NFSU2_TR(0x51a538);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51a53b:{NFSU2_TR(0x51a53b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2acull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B51a546:{NFSU2_TR(0x51a546);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51a549:{NFSU2_TR(0x51a549);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a54c:{NFSU2_TR(0x51a54c);
u8 U[16];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B51a553:{NFSU2_TR(0x51a553);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a556:{NFSU2_TR(0x51a556);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B51a55a:{NFSU2_TR(0x51a55a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a55d:{NFSU2_TR(0x51a55d);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a560:{NFSU2_TR(0x51a560);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a562:{NFSU2_TR(0x51a562);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B51a566:{NFSU2_TR(0x51a566);
{u32 ea_=u32(r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a569:{NFSU2_TR(0x51a569);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51a56c:{NFSU2_TR(0x51a56c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B51a56e:{NFSU2_TR(0x51a56e);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51a571:{NFSU2_TR(0x51a571);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51a574:{NFSU2_TR(0x51a574);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a577:{NFSU2_TR(0x51a577);
u8 U[16];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B51a57e:{NFSU2_TR(0x51a57e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a581:{NFSU2_TR(0x51a581);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a584:{NFSU2_TR(0x51a584);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a587:{NFSU2_TR(0x51a587);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a58a:{NFSU2_TR(0x51a58a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a58d:{NFSU2_TR(0x51a58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a590:{NFSU2_TR(0x51a590);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B51a592:{NFSU2_TR(0x51a592);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51a595:{NFSU2_TR(0x51a595);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51a598:{NFSU2_TR(0x51a598);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a59b:{NFSU2_TR(0x51a59b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a59e:{NFSU2_TR(0x51a59e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a5a1:{NFSU2_TR(0x51a5a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a5a4:{NFSU2_TR(0x51a5a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a5a7:{NFSU2_TR(0x51a5a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x81ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51a5ae:{NFSU2_TR(0x51a5ae);
u8 U[22];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
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
B51a5b2:{NFSU2_TR(0x51a5b2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51a470u);}goto L51a470;}}
}
B51a5b8:L51a5b8:{c.instructions+=8;NFSU2_TR(0x51a5b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2a4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a5bf:{NFSU2_TR(0x51a5bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51a5c0:{NFSU2_TR(0x51a5c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51a5c1:{NFSU2_TR(0x51a5c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a5c8:{NFSU2_TR(0x51a5c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51a5c9:{NFSU2_TR(0x51a5c9);
__builtin_memmove((R+16),(R+20),4);
}
B51a5cb:{NFSU2_TR(0x51a5cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51a5cc:{NFSU2_TR(0x51a5cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51a5d0:L51a5d0:{c.instructions+=7;NFSU2_TR(0x51a5d0);
if(mod_hook_table[41]){SPILL();c.pc=0x51a5d0u;mod_hook_table[41](c);SPILL();if(c.pc!=0x51a5d0u){TAIL_DYNAMIC(c.pc);}}
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a5d1:{NFSU2_TR(0x51a5d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a5d2:{NFSU2_TR(0x51a5d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a5d3:{NFSU2_TR(0x51a5d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a5d4:{NFSU2_TR(0x51a5d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a5d6:{NFSU2_TR(0x51a5d6);
__builtin_memmove((R+28),(R+4),4);
}
B51a5d8:{NFSU2_TR(0x51a5d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a5ddull));
TAIL_STATIC(0x48b1e0u,48b);
}
B51a5dd:L51a5dd:{c.instructions+=6;NFSU2_TR(0x51a5dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51a5e0:{NFSU2_TR(0x51a5e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51a5e3:{NFSU2_TR(0x51a5e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51a5e6:{NFSU2_TR(0x51a5e6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51a5e8:{NFSU2_TR(0x51a5e8);
__builtin_memmove((R+20),(R+0),4);
}
B51a5ea:{NFSU2_TR(0x51a5ea);
if(r1(R+518)){{goto L51a620;}}
}
B51a5ec:L51a5ec:{c.instructions+=1;NFSU2_TR(0x51a5ec);
__builtin_memmove((R+16),(R+16),4);
}
B51a5f0:L51a5f0:{c.instructions+=4;NFSU2_TR(0x51a5f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a5f6:{NFSU2_TR(0x51a5f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51a5f8:{NFSU2_TR(0x51a5f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a5fb:{NFSU2_TR(0x51a5fb);
if(r1(R+518)){{goto L51a5ff;}}
}
B51a5fd:L51a5fd:{c.instructions+=1;NFSU2_TR(0x51a5fd);
__builtin_memmove((R+0),(R+4),4);
}
B51a5ff:L51a5ff:{c.instructions+=11;NFSU2_TR(0x51a5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a602:{NFSU2_TR(0x51a602);
w4(R+4,u32(0x2ull));
}
B51a607:{NFSU2_TR(0x51a607);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B51a609:{NFSU2_TR(0x51a609);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B51a60b:{NFSU2_TR(0x51a60b);
w4(R+8,u32(0-u32(r4(R+8))));
}
B51a60d:{NFSU2_TR(0x51a60d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a60e:{NFSU2_TR(0x51a60e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a60f:{NFSU2_TR(0x51a60f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B51a612:{NFSU2_TR(0x51a612);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a613:{NFSU2_TR(0x51a613);
__builtin_memmove((R+4),(R+20),4);
}
B51a615:{NFSU2_TR(0x51a615);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a61aull));
TAIL_STATIC(0x5c7ea0u,5c7);
}
B51a61a:L51a61a:{c.instructions+=3;NFSU2_TR(0x51a61a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B51a61c:{NFSU2_TR(0x51a61c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51a61e:{NFSU2_TR(0x51a61e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51a5f0u);}goto L51a5f0;}}
}
B51a620:L51a620:{c.instructions+=11;NFSU2_TR(0x51a620);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a623:{NFSU2_TR(0x51a623);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a626:{NFSU2_TR(0x51a626);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B51a627:{NFSU2_TR(0x51a627);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51a62a:{NFSU2_TR(0x51a62a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a62d:{NFSU2_TR(0x51a62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a630:{NFSU2_TR(0x51a630);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51a631:{NFSU2_TR(0x51a631);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51a632:{NFSU2_TR(0x51a632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51a633:{NFSU2_TR(0x51a633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51a634:{NFSU2_TR(0x51a634);
if(mod_hook_table[42]){SPILL();c.pc=0x51a634u;mod_hook_table[42](c);SPILL();if(c.pc!=0x51a634u){TAIL_DYNAMIC(c.pc);}}
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51a640:L51a640:{c.instructions+=7;NFSU2_TR(0x51a640);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a641:{NFSU2_TR(0x51a641);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a642:{NFSU2_TR(0x51a642);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a643:{NFSU2_TR(0x51a643);
__builtin_memmove((R+24),(R+4),4);
}
B51a645:{NFSU2_TR(0x51a645);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B51a647:{NFSU2_TR(0x51a647);
w4(R+28,u32(0xabadcafeull));
}
B51a64c:{NFSU2_TR(0x51a64c);
__builtin_memmove((R+16),(R+16),4);
}
B51a650:L51a650:{c.instructions+=3;NFSU2_TR(0x51a650);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a656:{NFSU2_TR(0x51a656);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51a658:{NFSU2_TR(0x51a658);
if(r1(R+518)){{goto L51a6c1;}}
}
B51a65a:L51a65a:{c.instructions+=4;NFSU2_TR(0x51a65a);
__builtin_memmove((R+8),(R+4),4);
}
B51a65c:{NFSU2_TR(0x51a65c);
__builtin_memmove((R+0),(R+4),4);
}
B51a65e:{NFSU2_TR(0x51a65e);
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
B51a660:{NFSU2_TR(0x51a660);
if(r1(R+518)){{goto L51a6b9;}}
}
B51a662:L51a662:{c.instructions+=2;NFSU2_TR(0x51a662);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51a664:{NFSU2_TR(0x51a664);
if(r1(R+518)){{goto L51a675;}}
}
B51a666:L51a666:{c.instructions+=3;NFSU2_TR(0x51a666);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a669:{NFSU2_TR(0x51a669);
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
B51a66b:{NFSU2_TR(0x51a66b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51a662u);}goto L51a662;}}
}
B51a66d:L51a66d:{c.instructions+=3;NFSU2_TR(0x51a66d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51a66f:{NFSU2_TR(0x51a66f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a671:{NFSU2_TR(0x51a671);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a673ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B51a673:L51a673:{c.instructions+=1;NFSU2_TR(0x51a673);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51a650u);}goto L51a650;}
}
B51a675:L51a675:{c.instructions+=2;NFSU2_TR(0x51a675);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51a677:{NFSU2_TR(0x51a677);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51a682;}}
}
B51a679:L51a679:{c.instructions+=2;NFSU2_TR(0x51a679);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a67c:{NFSU2_TR(0x51a67c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a682:L51a682:{c.instructions+=2;NFSU2_TR(0x51a682);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51a688:{NFSU2_TR(0x51a688);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51a693;}}
}
B51a68a:L51a68a:{c.instructions+=2;NFSU2_TR(0x51a68a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a68d:{NFSU2_TR(0x51a68d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a693:L51a693:{c.instructions+=3;NFSU2_TR(0x51a693);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a696:{NFSU2_TR(0x51a696);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51a698:{NFSU2_TR(0x51a698);
if(r1(R+518)){{goto L51a6a0;}}
}
B51a69a:L51a69a:{c.instructions+=2;NFSU2_TR(0x51a69a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a69d:{NFSU2_TR(0x51a69d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a6a0:L51a6a0:{c.instructions+=3;NFSU2_TR(0x51a6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a6a3:{NFSU2_TR(0x51a6a3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51a6a5:{NFSU2_TR(0x51a6a5);
if(r1(R+518)){{goto L51a6ad;}}
}
B51a6a7:L51a6a7:{c.instructions+=2;NFSU2_TR(0x51a6a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a6aa:{NFSU2_TR(0x51a6aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a6ad:L51a6ad:{c.instructions+=3;NFSU2_TR(0x51a6ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a6b0:{NFSU2_TR(0x51a6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a6b3:{NFSU2_TR(0x51a6b3);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B51a6b9:L51a6b9:{c.instructions+=3;NFSU2_TR(0x51a6b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51a6bb:{NFSU2_TR(0x51a6bb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a6bd:{NFSU2_TR(0x51a6bd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a6bfull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B51a6bf:L51a6bf:{c.instructions+=1;NFSU2_TR(0x51a6bf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51a650u);}goto L51a650;}
}
B51a6c1:L51a6c1:{c.instructions+=2;NFSU2_TR(0x51a6c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((R+4),(U+0),4);
}
B51a6c7:{NFSU2_TR(0x51a6c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a6ccull));
TAIL_STATIC(0x511670u,511);
}
B51a6cc:L51a6cc:{c.instructions+=2;NFSU2_TR(0x51a6cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B51a6d2:{NFSU2_TR(0x51a6d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a6d7ull));
TAIL_STATIC(0x511670u,511);
}
B51a6d7:L51a6d7:{c.instructions+=2;NFSU2_TR(0x51a6d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51a6dd:{NFSU2_TR(0x51a6dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a6e2ull));
TAIL_STATIC(0x511670u,511);
}
B51a6e2:L51a6e2:{c.instructions+=3;NFSU2_TR(0x51a6e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a6e5:{NFSU2_TR(0x51a6e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a6e6:{NFSU2_TR(0x51a6e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a6ebull));
TAIL_STATIC(0x575630u,575);
}
B51a6eb:L51a6eb:{c.instructions+=10;NFSU2_TR(0x51a6eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51a6ee:{NFSU2_TR(0x51a6ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a6f1:{NFSU2_TR(0x51a6f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a6f7:{NFSU2_TR(0x51a6f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5250ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51a6fd:{NFSU2_TR(0x51a6fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a700:{NFSU2_TR(0x51a700);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a703:{NFSU2_TR(0x51a703);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4148ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a709:{NFSU2_TR(0x51a709);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51a70b:{NFSU2_TR(0x51a70b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x414cull))));
__builtin_memmove((R+28),(U+0),4);
}
B51a711:{NFSU2_TR(0x51a711);
w4(R+4,u32(0x400ull));
}
B51a716:L51a716:{c.instructions+=1;NFSU2_TR(0x51a716);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L51a718;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51a716u);}goto L51a716;}
}
B51a718:L51a718:{c.instructions+=3;NFSU2_TR(0x51a718);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x514cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a71e:{NFSU2_TR(0x51a71e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51a724:{NFSU2_TR(0x51a724);
w4(R+4,u32(0x40ull));
}
B51a729:L51a729:{c.instructions+=1;NFSU2_TR(0x51a729);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L51a72b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51a729u);}goto L51a729;}
}
B51a72b:L51a72b:{c.instructions+=5;NFSU2_TR(0x51a72b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51a72c:{NFSU2_TR(0x51a72c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4134ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51a732:{NFSU2_TR(0x51a732);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51a733:{NFSU2_TR(0x51a733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51a734:{NFSU2_TR(0x51a734);
TAIL_STATIC(0x511670u,511);
}
B51a740:L51a740:{c.instructions+=13;NFSU2_TR(0x51a740);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a746:{NFSU2_TR(0x51a746);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a748:{NFSU2_TR(0x51a748);
u8 U[4];
w4(U+0,u32(0x77708bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a74d:{NFSU2_TR(0x51a74d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a74e:{NFSU2_TR(0x51a74e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a755:{NFSU2_TR(0x51a755);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a756:{NFSU2_TR(0x51a756);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a757:{NFSU2_TR(0x51a757);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a758:{NFSU2_TR(0x51a758);
__builtin_memmove((R+20),(R+4),4);
}
B51a75a:{NFSU2_TR(0x51a75a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a75d:{NFSU2_TR(0x51a75d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a75e:{NFSU2_TR(0x51a75e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a75f:{NFSU2_TR(0x51a75f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a764ull));
TAIL_STATIC(0x575630u,575);
}
B51a764:L51a764:{c.instructions+=4;NFSU2_TR(0x51a764);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B51a768:{NFSU2_TR(0x51a768);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51a76b:{NFSU2_TR(0x51a76b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51a76d:{NFSU2_TR(0x51a76d);
if(r1(R+518)){{goto L51a7ad;}}
}
B51a76f:L51a76f:{c.instructions+=5;NFSU2_TR(0x51a76f);
w4(R+28,u32(r1(R+12)));
}
B51a772:{NFSU2_TR(0x51a772);
__builtin_memmove((R+0),(R+28),4);
}
B51a774:{NFSU2_TR(0x51a774);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B51a77a:{NFSU2_TR(0x51a77a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a77b:{NFSU2_TR(0x51a77b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a780ull));
TAIL_STATIC(0x575620u,575);
}
B51a780:L51a780:{c.instructions+=6;NFSU2_TR(0x51a780);
__builtin_memmove((R+24),(R+0),4);
}
B51a782:{NFSU2_TR(0x51a782);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51a785:{NFSU2_TR(0x51a785);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a789:{NFSU2_TR(0x51a789);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51a78b:{NFSU2_TR(0x51a78b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51a793:{NFSU2_TR(0x51a793);
if(r1(R+518)){{goto L51a7a8;}}
}
B51a795:L51a795:{c.instructions+=5;NFSU2_TR(0x51a795);
u8 U[4];
w4(U+0,u32(0x519ae0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a79a:{NFSU2_TR(0x51a79a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a79b:{NFSU2_TR(0x51a79b);
u8 U[4];
w4(U+0,u32(0x88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a7a0:{NFSU2_TR(0x51a7a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a7a1:{NFSU2_TR(0x51a7a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a7a6ull));
TAIL_STATIC(0x401650u,401);
}
B51a7a6:L51a7a6:{c.instructions+=1;NFSU2_TR(0x51a7a6);
{goto L51a7aa;}
}
B51a7a8:L51a7a8:{c.instructions+=1;NFSU2_TR(0x51a7a8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51a7aa:L51a7aa:{c.instructions+=1;NFSU2_TR(0x51a7aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a7ad:L51a7ad:{c.instructions+=5;NFSU2_TR(0x51a7ad);
w4(R+4,u32(r1(R+12)));
}
B51a7b0:{NFSU2_TR(0x51a7b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a7b6:{NFSU2_TR(0x51a7b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51a7b9:{NFSU2_TR(0x51a7b9);
w4(R+4,u32(0x13ull));
}
B51a7be:{NFSU2_TR(0x51a7be);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51a7c0:L51a7c0:{c.instructions+=1;NFSU2_TR(0x51a7c0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L51a7c2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51a7c0u);}goto L51a7c0;}
}
B51a7c2:L51a7c2:{c.instructions+=8;NFSU2_TR(0x51a7c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a7c6:{NFSU2_TR(0x51a7c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51a7c7:{NFSU2_TR(0x51a7c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51a7c8:{NFSU2_TR(0x51a7c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51a7c9:{NFSU2_TR(0x51a7c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a7d0:{NFSU2_TR(0x51a7d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51a7d1:{NFSU2_TR(0x51a7d1);
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
B51a7d4:{NFSU2_TR(0x51a7d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51a7e0:L51a7e0:{c.instructions+=16;NFSU2_TR(0x51a7e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a7e2:{NFSU2_TR(0x51a7e2);
u8 U[4];
w4(U+0,u32(0x777108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a7e7:{NFSU2_TR(0x51a7e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a7ed:{NFSU2_TR(0x51a7ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a7ee:{NFSU2_TR(0x51a7ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a7f5:{NFSU2_TR(0x51a7f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a7f6:{NFSU2_TR(0x51a7f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a7f7:{NFSU2_TR(0x51a7f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a7f8:{NFSU2_TR(0x51a7f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a7f9:{NFSU2_TR(0x51a7f9);
__builtin_memmove((R+24),(R+4),4);
}
B51a7fb:{NFSU2_TR(0x51a7fb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x79aaecull));
s4(u32(r4(U+0)),r4(U+4));
}
B51a803:{NFSU2_TR(0x51a803);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51a809:{NFSU2_TR(0x51a809);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B51a80b:{NFSU2_TR(0x51a80b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51a80d:{NFSU2_TR(0x51a80d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a811:{NFSU2_TR(0x51a811);
if(r1(R+518)){{goto L51a82a;}}
}
B51a813:L51a813:{c.instructions+=4;NFSU2_TR(0x51a813);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51a817:{NFSU2_TR(0x51a817);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a818:{NFSU2_TR(0x51a818);
__builtin_memmove((R+4),(R+28),4);
}
B51a81a:{NFSU2_TR(0x51a81a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a81full));
TAIL_STATIC(0x504880u,504);
}
B51a81f:L51a81f:{c.instructions+=2;NFSU2_TR(0x51a81f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51a821:{NFSU2_TR(0x51a821);
if(r1(R+518)){{goto L51a82a;}}
}
B51a823:L51a823:{c.instructions+=3;NFSU2_TR(0x51a823);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51a826:{NFSU2_TR(0x51a826);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51a828:{NFSU2_TR(0x51a828);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51a813u);}goto L51a813;}}
}
B51a82a:L51a82a:{c.instructions+=4;NFSU2_TR(0x51a82a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a830:{NFSU2_TR(0x51a830);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B51a832:{NFSU2_TR(0x51a832);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51a834:{NFSU2_TR(0x51a834);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L51a86b;}}
}
B51a836:L51a836:{c.instructions+=2;NFSU2_TR(0x51a836);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51a838:{NFSU2_TR(0x51a838);
{goto L51a840;}
}
B51a840:L51a840:{c.instructions+=9;NFSU2_TR(0x51a840);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a843:{NFSU2_TR(0x51a843);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B51a849:{NFSU2_TR(0x51a849);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B51a84b:{NFSU2_TR(0x51a84b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a84e:{NFSU2_TR(0x51a84e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B51a850:{NFSU2_TR(0x51a850);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51a853:{NFSU2_TR(0x51a853);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51a855:{NFSU2_TR(0x51a855);
w4(R+4,u32(0x20ull));
}
B51a85a:{NFSU2_TR(0x51a85a);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x1ull))));
}
B51a85c:L51a85c:{c.instructions+=1;NFSU2_TR(0x51a85c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L51a85e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51a85cu);}goto L51a85c;}
}
B51a85e:L51a85e:{c.instructions+=4;NFSU2_TR(0x51a85e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a864:{NFSU2_TR(0x51a864);
w4(R+0,u32(r1(R+8)));
}
B51a867:{NFSU2_TR(0x51a867);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B51a869:{NFSU2_TR(0x51a869);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51a840u);}goto L51a840;}}
}
B51a86b:L51a86b:{c.instructions+=2;NFSU2_TR(0x51a86b);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B51a86e:{NFSU2_TR(0x51a86e);
if(r1(R+518)){{goto L51a890;}}
}
B51a870:L51a870:{c.instructions+=10;NFSU2_TR(0x51a870);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a873:{NFSU2_TR(0x51a873);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a876:{NFSU2_TR(0x51a876);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a879:{NFSU2_TR(0x51a879);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B51a87d:{NFSU2_TR(0x51a87d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B51a881:{NFSU2_TR(0x51a881);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a884:{NFSU2_TR(0x51a884);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a887:{NFSU2_TR(0x51a887);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a88a:{NFSU2_TR(0x51a88a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51a88d:{NFSU2_TR(0x51a88d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51a890:L51a890:{c.instructions+=7;NFSU2_TR(0x51a890);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a894:{NFSU2_TR(0x51a894);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51a895:{NFSU2_TR(0x51a895);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51a896:{NFSU2_TR(0x51a896);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51a897:{NFSU2_TR(0x51a897);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a89e:{NFSU2_TR(0x51a89e);
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
B51a8a1:{NFSU2_TR(0x51a8a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51a8b0:L51a8b0:{c.instructions+=5;NFSU2_TR(0x51a8b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a8b4:{NFSU2_TR(0x51a8b4);
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
B51a8b6:{NFSU2_TR(0x51a8b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a8b7:{NFSU2_TR(0x51a8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51a8bd:{NFSU2_TR(0x51a8bd);
if(r1(R+518)){{goto L51a909;}}
}
B51a8bf:L51a8bf:{c.instructions+=2;NFSU2_TR(0x51a8bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51a8c1:{NFSU2_TR(0x51a8c1);
if(r1(R+518)){{goto L51a8d8;}}
}
B51a8c3:L51a8c3:{c.instructions+=4;NFSU2_TR(0x51a8c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a8c6:{NFSU2_TR(0x51a8c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51a8c8:{NFSU2_TR(0x51a8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a8cb:{NFSU2_TR(0x51a8cb);
if(r1(R+518)){{goto L51a8d0;}}
}
B51a8cd:L51a8cd:{c.instructions+=1;NFSU2_TR(0x51a8cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a8d0:L51a8d0:{c.instructions+=3;NFSU2_TR(0x51a8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a8d3:{NFSU2_TR(0x51a8d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a8d6:{NFSU2_TR(0x51a8d6);
{goto L51a8f5;}
}
B51a8d8:L51a8d8:{c.instructions+=4;NFSU2_TR(0x51a8d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a8de:{NFSU2_TR(0x51a8de);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51a8e0:{NFSU2_TR(0x51a8e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a8e3:{NFSU2_TR(0x51a8e3);
if(r1(R+518)){{goto L51a8e8;}}
}
B51a8e5:L51a8e5:{c.instructions+=1;NFSU2_TR(0x51a8e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a8e8:L51a8e8:{c.instructions+=2;NFSU2_TR(0x51a8e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51a8ef:{NFSU2_TR(0x51a8ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a8f5:L51a8f5:{c.instructions+=2;NFSU2_TR(0x51a8f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51a8fb:{NFSU2_TR(0x51a8fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51a903;}}
}
B51a8fd:L51a8fd:{c.instructions+=1;NFSU2_TR(0x51a8fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a903:L51a903:{c.instructions+=1;NFSU2_TR(0x51a903);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B51a909:L51a909:{c.instructions+=2;NFSU2_TR(0x51a909);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51a90a:{NFSU2_TR(0x51a90a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51a910:L51a910:{c.instructions+=3;NFSU2_TR(0x51a910);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a914:{NFSU2_TR(0x51a914);
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
B51a916:{NFSU2_TR(0x51a916);
if(r1(R+518)){{goto L51a967;}}
}
B51a918:L51a918:{c.instructions+=2;NFSU2_TR(0x51a918);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51a91e:{NFSU2_TR(0x51a91e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51a929;}}
}
B51a920:L51a920:{c.instructions+=2;NFSU2_TR(0x51a920);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a923:{NFSU2_TR(0x51a923);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a929:L51a929:{c.instructions+=2;NFSU2_TR(0x51a929);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51a92f:{NFSU2_TR(0x51a92f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51a93a;}}
}
B51a931:L51a931:{c.instructions+=2;NFSU2_TR(0x51a931);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a934:{NFSU2_TR(0x51a934);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a93a:L51a93a:{c.instructions+=4;NFSU2_TR(0x51a93a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a93d:{NFSU2_TR(0x51a93d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51a93f:{NFSU2_TR(0x51a93f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a940:{NFSU2_TR(0x51a940);
if(r1(R+518)){{goto L51a948;}}
}
B51a942:L51a942:{c.instructions+=2;NFSU2_TR(0x51a942);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51a945:{NFSU2_TR(0x51a945);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a948:L51a948:{c.instructions+=3;NFSU2_TR(0x51a948);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51a94b:{NFSU2_TR(0x51a94b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51a94d:{NFSU2_TR(0x51a94d);
if(r1(R+518)){{goto L51a955;}}
}
B51a94f:L51a94f:{c.instructions+=2;NFSU2_TR(0x51a94f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51a952:{NFSU2_TR(0x51a952);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a955:L51a955:{c.instructions+=5;NFSU2_TR(0x51a955);
w4(R+8,u32(0xabadcafeull));
}
B51a95a:{NFSU2_TR(0x51a95a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a95d:{NFSU2_TR(0x51a95d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a960:{NFSU2_TR(0x51a960);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B51a966:{NFSU2_TR(0x51a966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51a967:L51a967:{c.instructions+=1;NFSU2_TR(0x51a967);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51a970:L51a970:{c.instructions+=8;NFSU2_TR(0x51a970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B51a973:{NFSU2_TR(0x51a973);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a974:{NFSU2_TR(0x51a974);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51a978:{NFSU2_TR(0x51a978);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a97b:{NFSU2_TR(0x51a97b);
__builtin_memmove((R+8),(R+4),4);
}
B51a97d:{NFSU2_TR(0x51a97d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a980:{NFSU2_TR(0x51a980);
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
B51a982:{NFSU2_TR(0x51a982);
if(r1(R+518)){{goto L51aa15;}}
}
B51a988:L51a988:{c.instructions+=20;NFSU2_TR(0x51a988);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a98b:{NFSU2_TR(0x51a98b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a98e:{NFSU2_TR(0x51a98e);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a991:{NFSU2_TR(0x51a991);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a995:{NFSU2_TR(0x51a995);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a999:{NFSU2_TR(0x51a999);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B51a99b:{NFSU2_TR(0x51a99b);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51a99e:{NFSU2_TR(0x51a99e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51a9a6:{NFSU2_TR(0x51a9a6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51a9aa:{NFSU2_TR(0x51a9aa);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51a9ad:{NFSU2_TR(0x51a9ad);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51a9b1:{NFSU2_TR(0x51a9b1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a9b5:{NFSU2_TR(0x51a9b5);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51a9b8:{NFSU2_TR(0x51a9b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51a9bc:{NFSU2_TR(0x51a9bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a9bd:{NFSU2_TR(0x51a9bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a9be:{NFSU2_TR(0x51a9be);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51a9c2:{NFSU2_TR(0x51a9c2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51a9c6:{NFSU2_TR(0x51a9c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51a9c7:{NFSU2_TR(0x51a9c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51a9ccull));
TAIL_STATIC(0x504b50u,504);
}
B51a9cc:L51a9cc:{c.instructions+=8;NFSU2_TR(0x51a9cc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51a9d0:{NFSU2_TR(0x51a9d0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51a9d6:{NFSU2_TR(0x51a9d6);
u8 U[6];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B51a9db:{NFSU2_TR(0x51a9db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B51a9de:{NFSU2_TR(0x51a9de);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B51a9e2:{NFSU2_TR(0x51a9e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51a9e4:{NFSU2_TR(0x51a9e4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51a9e7:{NFSU2_TR(0x51a9e7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L51aa15;}}
}
B51a9e9:L51a9e9:{c.instructions+=8;NFSU2_TR(0x51a9e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51a9ef:{NFSU2_TR(0x51a9ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51a9f3:{NFSU2_TR(0x51a9f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51a9f7:{NFSU2_TR(0x51a9f7);
u8 U[16];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B51a9fe:{NFSU2_TR(0x51a9fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51aa04:{NFSU2_TR(0x51aa04);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51aa08:{NFSU2_TR(0x51aa08);
u8 U[16];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B51aa0f:{NFSU2_TR(0x51aa0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B51aa15:L51aa15:{c.instructions+=3;NFSU2_TR(0x51aa15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51aa16:{NFSU2_TR(0x51aa16);
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
B51aa19:{NFSU2_TR(0x51aa19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51aa20:L51aa20:{c.instructions+=5;NFSU2_TR(0x51aa20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51aa21:{NFSU2_TR(0x51aa21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51aa22:{NFSU2_TR(0x51aa22);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51aa24:{NFSU2_TR(0x51aa24);
__builtin_memmove((R+28),(R+4),4);
}
B51aa26:{NFSU2_TR(0x51aa26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51aa2bull));
TAIL_STATIC(0x575620u,575);
}
B51aa2b:L51aa2b:{c.instructions+=3;NFSU2_TR(0x51aa2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51aa2e:{NFSU2_TR(0x51aa2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51aa30:{NFSU2_TR(0x51aa30);
if(r1(R+518)){{goto L51aa47;}}
}
B51aa32:L51aa32:{c.instructions+=6;NFSU2_TR(0x51aa32);
w4(R+4,u32(0xabadcafeull));
}
B51aa37:{NFSU2_TR(0x51aa37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aa3a:{NFSU2_TR(0x51aa3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aa3d:{NFSU2_TR(0x51aa3d);
u8 U[4];
w4(U+0,u32(0x79ab60ull));
s4(u32(r4(R+0)),r4(U+0));
}
B51aa43:{NFSU2_TR(0x51aa43);
__builtin_memmove((R+24),(R+0),4);
}
B51aa45:{NFSU2_TR(0x51aa45);
{goto L51aa49;}
}
B51aa47:L51aa47:{c.instructions+=1;NFSU2_TR(0x51aa47);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51aa49:L51aa49:{c.instructions+=14;NFSU2_TR(0x51aa49);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51aa4d:{NFSU2_TR(0x51aa4d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51aa51:{NFSU2_TR(0x51aa51);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51aa55:{NFSU2_TR(0x51aa55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aa58:{NFSU2_TR(0x51aa58);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51aa5c:{NFSU2_TR(0x51aa5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51aa5d:{NFSU2_TR(0x51aa5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51aa61:{NFSU2_TR(0x51aa61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aa64:{NFSU2_TR(0x51aa64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aa67:{NFSU2_TR(0x51aa67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aa6a:{NFSU2_TR(0x51aa6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aa6d:{NFSU2_TR(0x51aa6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5251ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51aa73:{NFSU2_TR(0x51aa73);
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
B51aa75:{NFSU2_TR(0x51aa75);
if(r1(R+518)){{goto L51aa91;}}
}
B51aa77:L51aa77:{c.instructions+=11;NFSU2_TR(0x51aa77);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51aa7d:{NFSU2_TR(0x51aa7d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51aa7e:{NFSU2_TR(0x51aa7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+20),(U+0),4);
}
B51aa80:{NFSU2_TR(0x51aa80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51aa81:{NFSU2_TR(0x51aa81);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51aa85:{NFSU2_TR(0x51aa85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51aa86:{NFSU2_TR(0x51aa86);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51aa8a:{NFSU2_TR(0x51aa8a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51aa8b:{NFSU2_TR(0x51aa8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51aa8c:{NFSU2_TR(0x51aa8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51aa8d:{NFSU2_TR(0x51aa8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51aa90ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51aa90:L51aa90:{c.instructions+=1;NFSU2_TR(0x51aa90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51aa91:L51aa91:{c.instructions+=4;NFSU2_TR(0x51aa91);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51aa97:{NFSU2_TR(0x51aa97);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51aa99:{NFSU2_TR(0x51aa99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51aa9a:{NFSU2_TR(0x51aa9a);
if(r1(R+518)){{goto L51aab1;}}
}
B51aa9c:L51aa9c:{c.instructions+=4;NFSU2_TR(0x51aa9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51aa9f:{NFSU2_TR(0x51aa9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51aaa1:{NFSU2_TR(0x51aaa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aaa4:{NFSU2_TR(0x51aaa4);
if(r1(R+518)){{goto L51aaa9;}}
}
B51aaa6:L51aaa6:{c.instructions+=1;NFSU2_TR(0x51aaa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aaa9:L51aaa9:{c.instructions+=3;NFSU2_TR(0x51aaa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aaac:{NFSU2_TR(0x51aaac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aaaf:{NFSU2_TR(0x51aaaf);
{goto L51aace;}
}
B51aab1:L51aab1:{c.instructions+=4;NFSU2_TR(0x51aab1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x411cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51aab7:{NFSU2_TR(0x51aab7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51aab9:{NFSU2_TR(0x51aab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aabc:{NFSU2_TR(0x51aabc);
if(r1(R+518)){{goto L51aac1;}}
}
B51aabe:L51aabe:{c.instructions+=1;NFSU2_TR(0x51aabe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aac1:L51aac1:{c.instructions+=2;NFSU2_TR(0x51aac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51aac8:{NFSU2_TR(0x51aac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x411cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aace:L51aace:{c.instructions+=3;NFSU2_TR(0x51aace);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51aad4:{NFSU2_TR(0x51aad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51aada:{NFSU2_TR(0x51aada);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51aae2;}}
}
B51aadc:L51aadc:{c.instructions+=1;NFSU2_TR(0x51aadc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4120ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aae2:L51aae2:{c.instructions+=5;NFSU2_TR(0x51aae2);
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
B51aae3:{NFSU2_TR(0x51aae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aae9:{NFSU2_TR(0x51aae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51aaea:{NFSU2_TR(0x51aaea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51aaeb:{NFSU2_TR(0x51aaeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51aaf0:L51aaf0:{c.instructions+=3;NFSU2_TR(0x51aaf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51aaf1:{NFSU2_TR(0x51aaf1);
__builtin_memmove((R+24),(R+4),4);
}
B51aaf3:{NFSU2_TR(0x51aaf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51aaf8ull));
{goto L51ab10;}
}
B51aaf8:L51aaf8:{c.instructions+=2;NFSU2_TR(0x51aaf8);
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
B51aafd:{NFSU2_TR(0x51aafd);
if(r1(R+518)){{goto L51ab08;}}
}
B51aaff:L51aaff:{c.instructions+=2;NFSU2_TR(0x51aaff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ab00:{NFSU2_TR(0x51ab00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ab05ull));
TAIL_STATIC(0x575630u,575);
}
B51ab05:L51ab05:{c.instructions+=1;NFSU2_TR(0x51ab05);
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
B51ab08:L51ab08:{c.instructions+=3;NFSU2_TR(0x51ab08);
__builtin_memmove((R+0),(R+24),4);
}
B51ab0a:{NFSU2_TR(0x51ab0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ab0b:{NFSU2_TR(0x51ab0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ab10:L51ab10:{c.instructions+=2;NFSU2_TR(0x51ab10);
u8 U[4];
w4(U+0,u32(0x79a9e8ull));
s4(u32(r4(R+4)),r4(U+0));
}
B51ab16:{NFSU2_TR(0x51ab16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ab20:L51ab20:{c.instructions+=7;NFSU2_TR(0x51ab20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ab21:{NFSU2_TR(0x51ab21);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ab22:{NFSU2_TR(0x51ab22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ab23:{NFSU2_TR(0x51ab23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ab24:{NFSU2_TR(0x51ab24);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ab26:{NFSU2_TR(0x51ab26);
__builtin_memmove((R+28),(R+4),4);
}
B51ab28:{NFSU2_TR(0x51ab28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ab2dull));
TAIL_STATIC(0x575620u,575);
}
B51ab2d:L51ab2d:{c.instructions+=4;NFSU2_TR(0x51ab2d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B51ab2f:{NFSU2_TR(0x51ab2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51ab32:{NFSU2_TR(0x51ab32);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ab34:{NFSU2_TR(0x51ab34);
if(r1(R+518)){{goto L51ab51;}}
}
B51ab36:L51ab36:{c.instructions+=8;NFSU2_TR(0x51ab36);
w4(R+4,u32(0xabadcafeull));
}
B51ab3b:{NFSU2_TR(0x51ab3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ab3e:{NFSU2_TR(0x51ab3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ab41:{NFSU2_TR(0x51ab41);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ab44:{NFSU2_TR(0x51ab44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ab47:{NFSU2_TR(0x51ab47);
u8 U[4];
w4(U+0,u32(0x79ab64ull));
s4(u32(r4(R+0)),r4(U+0));
}
B51ab4d:{NFSU2_TR(0x51ab4d);
__builtin_memmove((R+24),(R+0),4);
}
B51ab4f:{NFSU2_TR(0x51ab4f);
{goto L51ab53;}
}
B51ab51:L51ab51:{c.instructions+=1;NFSU2_TR(0x51ab51);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51ab53:L51ab53:{c.instructions+=9;NFSU2_TR(0x51ab53);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51ab57:{NFSU2_TR(0x51ab57);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ab5b:{NFSU2_TR(0x51ab5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ab5e:{NFSU2_TR(0x51ab5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ab61:{NFSU2_TR(0x51ab61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ab62:{NFSU2_TR(0x51ab62);
__builtin_memmove((R+4),(R+24),4);
}
B51ab64:{NFSU2_TR(0x51ab64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ab67:{NFSU2_TR(0x51ab67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51ab6e:{NFSU2_TR(0x51ab6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ab73ull));
TAIL_STATIC(0x519de0u,519);
}
B51ab73:L51ab73:{c.instructions+=3;NFSU2_TR(0x51ab73);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ab79:{NFSU2_TR(0x51ab79);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ab7b:{NFSU2_TR(0x51ab7b);
if(r1(R+518)){{goto L51ab92;}}
}
B51ab7d:L51ab7d:{c.instructions+=4;NFSU2_TR(0x51ab7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ab80:{NFSU2_TR(0x51ab80);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ab82:{NFSU2_TR(0x51ab82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ab85:{NFSU2_TR(0x51ab85);
if(r1(R+518)){{goto L51ab8a;}}
}
B51ab87:L51ab87:{c.instructions+=1;NFSU2_TR(0x51ab87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ab8a:L51ab8a:{c.instructions+=3;NFSU2_TR(0x51ab8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ab8d:{NFSU2_TR(0x51ab8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ab90:{NFSU2_TR(0x51ab90);
{goto L51abab;}
}
B51ab92:L51ab92:{c.instructions+=4;NFSU2_TR(0x51ab92);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x412cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ab98:{NFSU2_TR(0x51ab98);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ab9a:{NFSU2_TR(0x51ab9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ab9d:{NFSU2_TR(0x51ab9d);
if(r1(R+518)){{goto L51aba2;}}
}
B51ab9f:L51ab9f:{c.instructions+=1;NFSU2_TR(0x51ab9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aba2:L51aba2:{c.instructions+=2;NFSU2_TR(0x51aba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aba5:{NFSU2_TR(0x51aba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x412cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51abab:L51abab:{c.instructions+=2;NFSU2_TR(0x51abab);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51abb1:{NFSU2_TR(0x51abb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51abb9;}}
}
B51abb3:L51abb3:{c.instructions+=1;NFSU2_TR(0x51abb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51abb9:L51abb9:{c.instructions+=10;NFSU2_TR(0x51abb9);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B51abbf:{NFSU2_TR(0x51abbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51abc0:{NFSU2_TR(0x51abc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51abc1:{NFSU2_TR(0x51abc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51abc4:{NFSU2_TR(0x51abc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51abc7:{NFSU2_TR(0x51abc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51abca:{NFSU2_TR(0x51abca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51abcd:{NFSU2_TR(0x51abcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51abce:{NFSU2_TR(0x51abce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51abcf:{NFSU2_TR(0x51abcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51abe0:L51abe0:{c.instructions+=3;NFSU2_TR(0x51abe0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51abe1:{NFSU2_TR(0x51abe1);
__builtin_memmove((R+24),(R+4),4);
}
B51abe3:{NFSU2_TR(0x51abe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51abe8ull));
{goto L51ac00;}
}
B51abe8:L51abe8:{c.instructions+=2;NFSU2_TR(0x51abe8);
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
B51abed:{NFSU2_TR(0x51abed);
if(r1(R+518)){{goto L51abf8;}}
}
B51abef:L51abef:{c.instructions+=2;NFSU2_TR(0x51abef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51abf0:{NFSU2_TR(0x51abf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51abf5ull));
TAIL_STATIC(0x575630u,575);
}
B51abf5:L51abf5:{c.instructions+=1;NFSU2_TR(0x51abf5);
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
B51abf8:L51abf8:{c.instructions+=3;NFSU2_TR(0x51abf8);
__builtin_memmove((R+0),(R+24),4);
}
B51abfa:{NFSU2_TR(0x51abfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51abfb:{NFSU2_TR(0x51abfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ac00:L51ac00:{c.instructions+=1;NFSU2_TR(0x51ac00);
TAIL_STATIC(0x505350u,505);
}
B51ac10:L51ac10:{c.instructions+=7;NFSU2_TR(0x51ac10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ac11:{NFSU2_TR(0x51ac11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ac12:{NFSU2_TR(0x51ac12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ac13:{NFSU2_TR(0x51ac13);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ac14:{NFSU2_TR(0x51ac14);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ac16:{NFSU2_TR(0x51ac16);
__builtin_memmove((R+28),(R+4),4);
}
B51ac18:{NFSU2_TR(0x51ac18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ac1dull));
TAIL_STATIC(0x575620u,575);
}
B51ac1d:L51ac1d:{c.instructions+=4;NFSU2_TR(0x51ac1d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51ac1f:{NFSU2_TR(0x51ac1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51ac22:{NFSU2_TR(0x51ac22);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ac24:{NFSU2_TR(0x51ac24);
if(r1(R+518)){{goto L51ac3f;}}
}
B51ac26:L51ac26:{c.instructions+=7;NFSU2_TR(0x51ac26);
w4(R+4,u32(0xabadcafeull));
}
B51ac2b:{NFSU2_TR(0x51ac2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ac2e:{NFSU2_TR(0x51ac2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ac31:{NFSU2_TR(0x51ac31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ac34:{NFSU2_TR(0x51ac34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ac37:{NFSU2_TR(0x51ac37);
u8 U[4];
w4(U+0,u32(0x79ab64ull));
s4(u32(r4(R+0)),r4(U+0));
}
B51ac3d:{NFSU2_TR(0x51ac3d);
__builtin_memmove((R+24),(R+0),4);
}
B51ac3f:L51ac3f:{c.instructions+=9;NFSU2_TR(0x51ac3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ac43:{NFSU2_TR(0x51ac43);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51ac47:{NFSU2_TR(0x51ac47);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B51ac4b:{NFSU2_TR(0x51ac4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ac4c:{NFSU2_TR(0x51ac4c);
__builtin_memmove((R+4),(R+24),4);
}
B51ac4e:{NFSU2_TR(0x51ac4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ac51:{NFSU2_TR(0x51ac51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ac54:{NFSU2_TR(0x51ac54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51ac5b:{NFSU2_TR(0x51ac5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ac60ull));
TAIL_STATIC(0x519de0u,519);
}
B51ac60:L51ac60:{c.instructions+=3;NFSU2_TR(0x51ac60);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ac66:{NFSU2_TR(0x51ac66);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51ac68:{NFSU2_TR(0x51ac68);
if(r1(R+518)){{goto L51ac7f;}}
}
B51ac6a:L51ac6a:{c.instructions+=4;NFSU2_TR(0x51ac6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ac6d:{NFSU2_TR(0x51ac6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51ac6f:{NFSU2_TR(0x51ac6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ac72:{NFSU2_TR(0x51ac72);
if(r1(R+518)){{goto L51ac77;}}
}
B51ac74:L51ac74:{c.instructions+=1;NFSU2_TR(0x51ac74);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ac77:L51ac77:{c.instructions+=3;NFSU2_TR(0x51ac77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ac7a:{NFSU2_TR(0x51ac7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ac7d:{NFSU2_TR(0x51ac7d);
{goto L51ac9c;}
}
B51ac7f:L51ac7f:{c.instructions+=4;NFSU2_TR(0x51ac7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x412cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ac85:{NFSU2_TR(0x51ac85);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51ac87:{NFSU2_TR(0x51ac87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ac8a:{NFSU2_TR(0x51ac8a);
if(r1(R+518)){{goto L51ac8f;}}
}
B51ac8c:L51ac8c:{c.instructions+=1;NFSU2_TR(0x51ac8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ac8f:L51ac8f:{c.instructions+=2;NFSU2_TR(0x51ac8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51ac96:{NFSU2_TR(0x51ac96);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x412cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ac9c:L51ac9c:{c.instructions+=2;NFSU2_TR(0x51ac9c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51aca2:{NFSU2_TR(0x51aca2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51acaa;}}
}
B51aca4:L51aca4:{c.instructions+=1;NFSU2_TR(0x51aca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51acaa:L51acaa:{c.instructions+=5;NFSU2_TR(0x51acaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51acb0:{NFSU2_TR(0x51acb0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B51acb1:{NFSU2_TR(0x51acb1);
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
B51acb3:{NFSU2_TR(0x51acb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4128ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51acb9:{NFSU2_TR(0x51acb9);
if(r1(R+518)){{goto L51acd0;}}
}
B51acbb:L51acbb:{c.instructions+=8;NFSU2_TR(0x51acbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51acbe:{NFSU2_TR(0x51acbe);
w4(R+20,u32(~u32(r4(R+20))));
}
B51acc0:{NFSU2_TR(0x51acc0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+20,u32(u32(r4(R+20))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51acc2:{NFSU2_TR(0x51acc2);
__builtin_memmove((R+0),(R+20),4);
}
B51acc4:{NFSU2_TR(0x51acc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51acc7:{NFSU2_TR(0x51acc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51acca:{NFSU2_TR(0x51acca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51accd:{NFSU2_TR(0x51accd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51acd0:L51acd0:{c.instructions+=5;NFSU2_TR(0x51acd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51acd1:{NFSU2_TR(0x51acd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51acd2:{NFSU2_TR(0x51acd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51acd3:{NFSU2_TR(0x51acd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51acd4:{NFSU2_TR(0x51acd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ace0:L51ace0:{c.instructions+=6;NFSU2_TR(0x51ace0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ace1:{NFSU2_TR(0x51ace1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ace2:{NFSU2_TR(0x51ace2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ace3:{NFSU2_TR(0x51ace3);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ace5:{NFSU2_TR(0x51ace5);
__builtin_memmove((R+28),(R+4),4);
}
B51ace7:{NFSU2_TR(0x51ace7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51acecull));
TAIL_STATIC(0x575620u,575);
}
B51acec:L51acec:{c.instructions+=3;NFSU2_TR(0x51acec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51acef:{NFSU2_TR(0x51acef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51acf1:{NFSU2_TR(0x51acf1);
if(r1(R+518)){{goto L51ad16;}}
}
B51acf3:L51acf3:{c.instructions+=8;NFSU2_TR(0x51acf3);
w4(R+4,u32(0xabadcafeull));
}
B51acf8:{NFSU2_TR(0x51acf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51acfb:{NFSU2_TR(0x51acfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51acfe:{NFSU2_TR(0x51acfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51ad05:{NFSU2_TR(0x51ad05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51ad0c:{NFSU2_TR(0x51ad0c);
u8 U[4];
w4(U+0,u32(0x79ab64ull));
s4(u32(r4(R+0)),r4(U+0));
}
B51ad12:{NFSU2_TR(0x51ad12);
__builtin_memmove((R+24),(R+0),4);
}
B51ad14:{NFSU2_TR(0x51ad14);
{goto L51ad18;}
}
B51ad16:L51ad16:{c.instructions+=1;NFSU2_TR(0x51ad16);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51ad18:L51ad18:{c.instructions+=9;NFSU2_TR(0x51ad18);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ad1c:{NFSU2_TR(0x51ad1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ad20:{NFSU2_TR(0x51ad20);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B51ad24:{NFSU2_TR(0x51ad24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ad25:{NFSU2_TR(0x51ad25);
__builtin_memmove((R+4),(R+24),4);
}
B51ad27:{NFSU2_TR(0x51ad27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ad2a:{NFSU2_TR(0x51ad2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ad2d:{NFSU2_TR(0x51ad2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51ad34:{NFSU2_TR(0x51ad34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ad39ull));
TAIL_STATIC(0x519de0u,519);
}
B51ad39:L51ad39:{c.instructions+=3;NFSU2_TR(0x51ad39);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ad3f:{NFSU2_TR(0x51ad3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51ad41:{NFSU2_TR(0x51ad41);
if(r1(R+518)){{goto L51ad58;}}
}
B51ad43:L51ad43:{c.instructions+=4;NFSU2_TR(0x51ad43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ad46:{NFSU2_TR(0x51ad46);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51ad48:{NFSU2_TR(0x51ad48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ad4b:{NFSU2_TR(0x51ad4b);
if(r1(R+518)){{goto L51ad50;}}
}
B51ad4d:L51ad4d:{c.instructions+=1;NFSU2_TR(0x51ad4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ad50:L51ad50:{c.instructions+=3;NFSU2_TR(0x51ad50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ad53:{NFSU2_TR(0x51ad53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ad56:{NFSU2_TR(0x51ad56);
{goto L51ad75;}
}
B51ad58:L51ad58:{c.instructions+=4;NFSU2_TR(0x51ad58);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x412cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ad5e:{NFSU2_TR(0x51ad5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51ad60:{NFSU2_TR(0x51ad60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ad63:{NFSU2_TR(0x51ad63);
if(r1(R+518)){{goto L51ad68;}}
}
B51ad65:L51ad65:{c.instructions+=1;NFSU2_TR(0x51ad65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ad68:L51ad68:{c.instructions+=2;NFSU2_TR(0x51ad68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51ad6f:{NFSU2_TR(0x51ad6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x412cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ad75:L51ad75:{c.instructions+=2;NFSU2_TR(0x51ad75);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51ad7b:{NFSU2_TR(0x51ad7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51ad83;}}
}
B51ad7d:L51ad7d:{c.instructions+=1;NFSU2_TR(0x51ad7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ad83:L51ad83:{c.instructions+=4;NFSU2_TR(0x51ad83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B51ad89:{NFSU2_TR(0x51ad89);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ad8f:{NFSU2_TR(0x51ad8f);
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
B51ad91:{NFSU2_TR(0x51ad91);
if(r1(R+518)){{goto L51ada9;}}
}
B51ad93:L51ad93:{c.instructions+=2;NFSU2_TR(0x51ad93);
__builtin_memmove((R+8),(R+20),4);
}
B51ad95:{NFSU2_TR(0x51ad95);
w4(R+8,u32(~u32(r4(R+8))));
}
B51ad97:L51ad97:{c.instructions+=7;NFSU2_TR(0x51ad97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ad9a:{NFSU2_TR(0x51ad9a);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B51ad9c:{NFSU2_TR(0x51ad9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ad9f:{NFSU2_TR(0x51ad9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ada2:{NFSU2_TR(0x51ada2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ada5:{NFSU2_TR(0x51ada5);
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
B51ada7:{NFSU2_TR(0x51ada7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51ad97u);}goto L51ad97;}}
}
B51ada9:L51ada9:{c.instructions+=4;NFSU2_TR(0x51ada9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51adaa:{NFSU2_TR(0x51adaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51adab:{NFSU2_TR(0x51adab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51adac:{NFSU2_TR(0x51adac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51adb0:L51adb0:{c.instructions+=6;NFSU2_TR(0x51adb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51adb1:{NFSU2_TR(0x51adb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51adb2:{NFSU2_TR(0x51adb2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51adb3:{NFSU2_TR(0x51adb3);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51adb5:{NFSU2_TR(0x51adb5);
__builtin_memmove((R+24),(R+4),4);
}
B51adb7:{NFSU2_TR(0x51adb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51adbcull));
TAIL_STATIC(0x575620u,575);
}
B51adbc:L51adbc:{c.instructions+=4;NFSU2_TR(0x51adbc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B51adbe:{NFSU2_TR(0x51adbe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51adc1:{NFSU2_TR(0x51adc1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51adc3:{NFSU2_TR(0x51adc3);
if(r1(R+518)){{goto L51adde;}}
}
B51adc5:L51adc5:{c.instructions+=7;NFSU2_TR(0x51adc5);
w4(R+4,u32(0xabadcafeull));
}
B51adca:{NFSU2_TR(0x51adca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51adcd:{NFSU2_TR(0x51adcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51add0:{NFSU2_TR(0x51add0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51add3:{NFSU2_TR(0x51add3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51add6:{NFSU2_TR(0x51add6);
u8 U[4];
w4(U+0,u32(0x79ab64ull));
s4(u32(r4(R+0)),r4(U+0));
}
B51addc:{NFSU2_TR(0x51addc);
{goto L51ade0;}
}
B51adde:L51adde:{c.instructions+=1;NFSU2_TR(0x51adde);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51ade0:L51ade0:{c.instructions+=8;NFSU2_TR(0x51ade0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51ade4:{NFSU2_TR(0x51ade4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ade7:{NFSU2_TR(0x51ade7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51adea:{NFSU2_TR(0x51adea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aded:{NFSU2_TR(0x51aded);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51adf4:{NFSU2_TR(0x51adf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51adfa:{NFSU2_TR(0x51adfa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51adfc:{NFSU2_TR(0x51adfc);
if(r1(R+518)){{goto L51ae13;}}
}
B51adfe:L51adfe:{c.instructions+=4;NFSU2_TR(0x51adfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51ae01:{NFSU2_TR(0x51ae01);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ae03:{NFSU2_TR(0x51ae03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ae06:{NFSU2_TR(0x51ae06);
if(r1(R+518)){{goto L51ae0b;}}
}
B51ae08:L51ae08:{c.instructions+=1;NFSU2_TR(0x51ae08);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ae0b:L51ae0b:{c.instructions+=3;NFSU2_TR(0x51ae0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ae0e:{NFSU2_TR(0x51ae0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ae11:{NFSU2_TR(0x51ae11);
{goto L51ae2c;}
}
B51ae13:L51ae13:{c.instructions+=4;NFSU2_TR(0x51ae13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x412cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51ae19:{NFSU2_TR(0x51ae19);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51ae1b:{NFSU2_TR(0x51ae1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ae1e:{NFSU2_TR(0x51ae1e);
if(r1(R+518)){{goto L51ae23;}}
}
B51ae20:L51ae20:{c.instructions+=1;NFSU2_TR(0x51ae20);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ae23:L51ae23:{c.instructions+=2;NFSU2_TR(0x51ae23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ae26:{NFSU2_TR(0x51ae26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x412cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ae2c:L51ae2c:{c.instructions+=2;NFSU2_TR(0x51ae2c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51ae32:{NFSU2_TR(0x51ae32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51ae3a;}}
}
B51ae34:L51ae34:{c.instructions+=1;NFSU2_TR(0x51ae34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ae3a:L51ae3a:{c.instructions+=4;NFSU2_TR(0x51ae3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B51ae40:{NFSU2_TR(0x51ae40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ae46:{NFSU2_TR(0x51ae46);
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
B51ae48:{NFSU2_TR(0x51ae48);
if(r1(R+518)){{goto L51ae60;}}
}
B51ae4a:L51ae4a:{c.instructions+=1;NFSU2_TR(0x51ae4a);
__builtin_memmove((R+12),(R+12),4);
}
B51ae50:L51ae50:{c.instructions+=6;NFSU2_TR(0x51ae50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ae53:{NFSU2_TR(0x51ae53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ae56:{NFSU2_TR(0x51ae56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ae59:{NFSU2_TR(0x51ae59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ae5c:{NFSU2_TR(0x51ae5c);
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
B51ae5e:{NFSU2_TR(0x51ae5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51ae50u);}goto L51ae50;}}
}
B51ae60:L51ae60:{c.instructions+=8;NFSU2_TR(0x51ae60);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ae63:{NFSU2_TR(0x51ae63);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ae66:{NFSU2_TR(0x51ae66);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ae69:{NFSU2_TR(0x51ae69);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ae6c:{NFSU2_TR(0x51ae6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ae6d:{NFSU2_TR(0x51ae6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ae6e:{NFSU2_TR(0x51ae6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51ae6f:{NFSU2_TR(0x51ae6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ae80:L51ae80:{c.instructions+=9;NFSU2_TR(0x51ae80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ae84:{NFSU2_TR(0x51ae84);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ae85:{NFSU2_TR(0x51ae85);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ae86:{NFSU2_TR(0x51ae86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ae87:{NFSU2_TR(0x51ae87);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B51ae89:{NFSU2_TR(0x51ae89);
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
B51ae8b:{NFSU2_TR(0x51ae8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ae8c:{NFSU2_TR(0x51ae8c);
__builtin_memmove((R+28),(R+4),4);
}
B51ae8e:{NFSU2_TR(0x51ae8e);
if(r1(R+518)){{goto L51af3f;}}
}
B51ae94:L51ae94:{c.instructions+=2;NFSU2_TR(0x51ae94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ae95:{NFSU2_TR(0x51ae95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ae9aull));
TAIL_STATIC(0x505450u,505);
}
B51ae9a:L51ae9a:{c.instructions+=4;NFSU2_TR(0x51ae9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51aea0:{NFSU2_TR(0x51aea0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51aea3:{NFSU2_TR(0x51aea3);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51aea5:{NFSU2_TR(0x51aea5);
if(r1(R+518)){{goto L51af3f;}}
}
B51aeab:L51aeab:{c.instructions+=1;NFSU2_TR(0x51aeab);
w4(R+20,u32(0xabadcafeull));
}
B51aeb0:L51aeb0:{c.instructions+=2;NFSU2_TR(0x51aeb0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51aeb2:{NFSU2_TR(0x51aeb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51af3f;}}
}
B51aeb8:L51aeb8:{c.instructions+=2;NFSU2_TR(0x51aeb8);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B51aebc:{NFSU2_TR(0x51aebc);
if(r1(R+518)){{goto L51af2c;}}
}
B51aebe:L51aebe:{c.instructions+=2;NFSU2_TR(0x51aebe);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51aec1:{NFSU2_TR(0x51aec1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51af2c;}}
}
B51aec3:L51aec3:{c.instructions+=3;NFSU2_TR(0x51aec3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x412cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51aec9:{NFSU2_TR(0x51aec9);
w1(R+12,u8(0x1ull));
}
B51aecb:{NFSU2_TR(0x51aecb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51aed6;}}
}
B51aecd:L51aecd:{c.instructions+=2;NFSU2_TR(0x51aecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51aed0:{NFSU2_TR(0x51aed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x412cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aed6:L51aed6:{c.instructions+=2;NFSU2_TR(0x51aed6);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51aedc:{NFSU2_TR(0x51aedc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51aee7;}}
}
B51aede:L51aede:{c.instructions+=2;NFSU2_TR(0x51aede);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51aee1:{NFSU2_TR(0x51aee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aee7:L51aee7:{c.instructions+=3;NFSU2_TR(0x51aee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51aeea:{NFSU2_TR(0x51aeea);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51aeec:{NFSU2_TR(0x51aeec);
if(r1(R+518)){{goto L51aef4;}}
}
B51aeee:L51aeee:{c.instructions+=2;NFSU2_TR(0x51aeee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51aef1:{NFSU2_TR(0x51aef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aef4:L51aef4:{c.instructions+=3;NFSU2_TR(0x51aef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51aef7:{NFSU2_TR(0x51aef7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51aef9:{NFSU2_TR(0x51aef9);
if(r1(R+518)){{goto L51af01;}}
}
B51aefb:L51aefb:{c.instructions+=2;NFSU2_TR(0x51aefb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51aefe:{NFSU2_TR(0x51aefe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51af01:L51af01:{c.instructions+=6;NFSU2_TR(0x51af01);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51af04:{NFSU2_TR(0x51af04);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51af07:{NFSU2_TR(0x51af07);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B51af0d:{NFSU2_TR(0x51af0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51af13:{NFSU2_TR(0x51af13);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51af15:{NFSU2_TR(0x51af15);
if(r1(R+518)){{goto L51af37;}}
}
B51af17:L51af17:{c.instructions+=7;NFSU2_TR(0x51af17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51af1a:{NFSU2_TR(0x51af1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51af1d:{NFSU2_TR(0x51af1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51af20:{NFSU2_TR(0x51af20);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51af23:{NFSU2_TR(0x51af23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51af26:{NFSU2_TR(0x51af26);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51af28:{NFSU2_TR(0x51af28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51af17u);}goto L51af17;}}
}
B51af2a:L51af2a:{c.instructions+=1;NFSU2_TR(0x51af2a);
{goto L51af37;}
}
B51af2c:L51af2c:{c.instructions+=2;NFSU2_TR(0x51af2c);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x412cull))));
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
B51af32:{NFSU2_TR(0x51af32);
if(r1(R+518)){{goto L51af3f;}}
}
B51af34:L51af34:{c.instructions+=1;NFSU2_TR(0x51af34);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51af37:L51af37:{c.instructions+=2;NFSU2_TR(0x51af37);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51af39:{NFSU2_TR(0x51af39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51aeb0u);}goto L51aeb0;}}
}
B51af3f:L51af3f:{c.instructions+=6;NFSU2_TR(0x51af3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51af40:{NFSU2_TR(0x51af40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51af41:{NFSU2_TR(0x51af41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51af42:{NFSU2_TR(0x51af42);
__builtin_memmove((R+0),(R+12),1);
}
B51af44:{NFSU2_TR(0x51af44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51af45:{NFSU2_TR(0x51af45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51af50:L51af50:{c.instructions+=4;NFSU2_TR(0x51af50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51af51:{NFSU2_TR(0x51af51);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51af53:{NFSU2_TR(0x51af53);
__builtin_memmove((R+24),(R+4),4);
}
B51af55:{NFSU2_TR(0x51af55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51af5aull));
TAIL_STATIC(0x575620u,575);
}
B51af5a:L51af5a:{c.instructions+=3;NFSU2_TR(0x51af5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51af5d:{NFSU2_TR(0x51af5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51af5f:{NFSU2_TR(0x51af5f);
if(r1(R+518)){{goto L51af82;}}
}
B51af61:L51af61:{c.instructions+=7;NFSU2_TR(0x51af61);
w4(R+4,u32(0xabadcafeull));
}
B51af66:{NFSU2_TR(0x51af66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51af69:{NFSU2_TR(0x51af69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51af6c:{NFSU2_TR(0x51af6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51af73:{NFSU2_TR(0x51af73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51af7a:{NFSU2_TR(0x51af7a);
u8 U[4];
w4(U+0,u32(0x79ab64ull));
s4(u32(r4(R+0)),r4(U+0));
}
B51af80:{NFSU2_TR(0x51af80);
{goto L51af84;}
}
B51af82:L51af82:{c.instructions+=1;NFSU2_TR(0x51af82);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51af84:L51af84:{c.instructions+=15;NFSU2_TR(0x51af84);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51af88:{NFSU2_TR(0x51af88);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51af8c:{NFSU2_TR(0x51af8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51af8f:{NFSU2_TR(0x51af8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51af92:{NFSU2_TR(0x51af92);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B51af94:{NFSU2_TR(0x51af94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51af97:{NFSU2_TR(0x51af97);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51af9b:{NFSU2_TR(0x51af9b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51af9d:{NFSU2_TR(0x51af9d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51af9f:{NFSU2_TR(0x51af9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B51afa2:{NFSU2_TR(0x51afa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B51afa9:{NFSU2_TR(0x51afa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51afac:{NFSU2_TR(0x51afac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51afb2:{NFSU2_TR(0x51afb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51afb4:{NFSU2_TR(0x51afb4);
if(r1(R+518)){{goto L51afcb;}}
}
B51afb6:L51afb6:{c.instructions+=4;NFSU2_TR(0x51afb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51afb9:{NFSU2_TR(0x51afb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51afbb:{NFSU2_TR(0x51afbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51afbe:{NFSU2_TR(0x51afbe);
if(r1(R+518)){{goto L51afc3;}}
}
B51afc0:L51afc0:{c.instructions+=1;NFSU2_TR(0x51afc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51afc3:L51afc3:{c.instructions+=3;NFSU2_TR(0x51afc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51afc6:{NFSU2_TR(0x51afc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51afc9:{NFSU2_TR(0x51afc9);
{goto L51afe8;}
}
B51afcb:L51afcb:{c.instructions+=4;NFSU2_TR(0x51afcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x412cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51afd1:{NFSU2_TR(0x51afd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51afd3:{NFSU2_TR(0x51afd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51afd6:{NFSU2_TR(0x51afd6);
if(r1(R+518)){{goto L51afdb;}}
}
B51afd8:L51afd8:{c.instructions+=1;NFSU2_TR(0x51afd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51afdb:L51afdb:{c.instructions+=2;NFSU2_TR(0x51afdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51afe2:{NFSU2_TR(0x51afe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x412cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51afe8:L51afe8:{c.instructions+=2;NFSU2_TR(0x51afe8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51afee:{NFSU2_TR(0x51afee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51aff6;}}
}
B51aff0:L51aff0:{c.instructions+=1;NFSU2_TR(0x51aff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4130ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51aff6:L51aff6:{c.instructions+=3;NFSU2_TR(0x51aff6);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B51affc:{NFSU2_TR(0x51affc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51affd:{NFSU2_TR(0x51affd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x51a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
