#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_53b(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x53a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x53a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_53a(u8* __restrict R,Cpu& c);
u32 page_53a(Cpu& c){return body_53a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_53a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x53a000:goto L53a000;
case 0x53a004:c.instructions+=1;goto B53a004;
case 0x53a006:goto L53a006;
case 0x53a008:c.instructions+=6;goto B53a008;
case 0x53a00a:c.instructions+=5;goto B53a00a;
case 0x53a00d:c.instructions+=4;goto B53a00d;
case 0x53a00f:c.instructions+=3;goto B53a00f;
case 0x53a010:c.instructions+=2;goto B53a010;
case 0x53a013:c.instructions+=1;goto B53a013;
case 0x53a018:goto L53a018;
case 0x53a01a:c.instructions+=3;goto B53a01a;
case 0x53a01d:c.instructions+=2;goto B53a01d;
case 0x53a01f:c.instructions+=1;goto B53a01f;
case 0x53a021:goto L53a021;
case 0x53a024:c.instructions+=3;goto B53a024;
case 0x53a027:c.instructions+=2;goto B53a027;
case 0x53a028:c.instructions+=1;goto B53a028;
case 0x53a02d:goto L53a02d;
case 0x53a032:c.instructions+=1;goto B53a032;
case 0x53a037:goto L53a037;
case 0x53a03d:c.instructions+=3;goto B53a03d;
case 0x53a03f:c.instructions+=2;goto B53a03f;
case 0x53a042:c.instructions+=1;goto B53a042;
case 0x53a045:goto L53a045;
case 0x53a047:c.instructions+=6;goto B53a047;
case 0x53a049:c.instructions+=5;goto B53a049;
case 0x53a04a:c.instructions+=4;goto B53a04a;
case 0x53a04b:c.instructions+=3;goto B53a04b;
case 0x53a050:c.instructions+=2;goto B53a050;
case 0x53a054:c.instructions+=1;goto B53a054;
case 0x53a059:goto L53a059;
case 0x53a05b:c.instructions+=2;goto B53a05b;
case 0x53a05d:c.instructions+=1;goto B53a05d;
case 0x53a05f:goto L53a05f;
case 0x53a060:goto L53a060;
case 0x53a061:c.instructions+=2;goto B53a061;
case 0x53a063:c.instructions+=1;goto B53a063;
case 0x53a068:goto L53a068;
case 0x53a06c:c.instructions+=7;goto B53a06c;
case 0x53a06e:c.instructions+=6;goto B53a06e;
case 0x53a070:c.instructions+=5;goto B53a070;
case 0x53a071:c.instructions+=4;goto B53a071;
case 0x53a072:c.instructions+=3;goto B53a072;
case 0x53a073:c.instructions+=2;goto B53a073;
case 0x53a078:c.instructions+=1;goto B53a078;
case 0x53a07d:goto L53a07d;
case 0x53a07f:c.instructions+=2;goto B53a07f;
case 0x53a081:c.instructions+=1;goto B53a081;
case 0x53a083:goto L53a083;
case 0x53a085:c.instructions+=7;goto B53a085;
case 0x53a089:c.instructions+=6;goto B53a089;
case 0x53a08a:c.instructions+=5;goto B53a08a;
case 0x53a08b:c.instructions+=4;goto B53a08b;
case 0x53a091:c.instructions+=3;goto B53a091;
case 0x53a092:c.instructions+=2;goto B53a092;
case 0x53a095:c.instructions+=1;goto B53a095;
case 0x53a096:goto L53a096;
case 0x53a098:c.instructions+=7;goto B53a098;
case 0x53a09c:c.instructions+=6;goto B53a09c;
case 0x53a09d:c.instructions+=5;goto B53a09d;
case 0x53a09e:c.instructions+=4;goto B53a09e;
case 0x53a0a4:c.instructions+=3;goto B53a0a4;
case 0x53a0a5:c.instructions+=2;goto B53a0a5;
case 0x53a0a8:c.instructions+=1;goto B53a0a8;
case 0x53a0b0:goto L53a0b0;
case 0x53a0b1:c.instructions+=7;goto B53a0b1;
case 0x53a0b2:c.instructions+=6;goto B53a0b2;
case 0x53a0b4:c.instructions+=5;goto B53a0b4;
case 0x53a0b7:c.instructions+=4;goto B53a0b7;
case 0x53a0bc:c.instructions+=3;goto B53a0bc;
case 0x53a0c1:c.instructions+=2;goto B53a0c1;
case 0x53a0c2:c.instructions+=1;goto B53a0c2;
case 0x53a0c7:goto L53a0c7;
case 0x53a0ca:c.instructions+=4;goto B53a0ca;
case 0x53a0cf:c.instructions+=3;goto B53a0cf;
case 0x53a0d4:c.instructions+=2;goto B53a0d4;
case 0x53a0d5:c.instructions+=1;goto B53a0d5;
case 0x53a0da:goto L53a0da;
case 0x53a0dd:c.instructions+=6;goto B53a0dd;
case 0x53a0e0:c.instructions+=5;goto B53a0e0;
case 0x53a0e3:c.instructions+=4;goto B53a0e3;
case 0x53a0e4:c.instructions+=3;goto B53a0e4;
case 0x53a0e9:c.instructions+=2;goto B53a0e9;
case 0x53a0ea:c.instructions+=1;goto B53a0ea;
case 0x53a0ef:goto L53a0ef;
case 0x53a0f2:c.instructions+=6;goto B53a0f2;
case 0x53a0f5:c.instructions+=5;goto B53a0f5;
case 0x53a0f8:c.instructions+=4;goto B53a0f8;
case 0x53a0f9:c.instructions+=3;goto B53a0f9;
case 0x53a0fe:c.instructions+=2;goto B53a0fe;
case 0x53a0ff:c.instructions+=1;goto B53a0ff;
case 0x53a104:goto L53a104;
case 0x53a10a:c.instructions+=4;goto B53a10a;
case 0x53a10d:c.instructions+=3;goto B53a10d;
case 0x53a110:c.instructions+=2;goto B53a110;
case 0x53a112:c.instructions+=1;goto B53a112;
case 0x53a118:goto L53a118;
case 0x53a119:c.instructions+=4;goto B53a119;
case 0x53a11a:c.instructions+=3;goto B53a11a;
case 0x53a11d:c.instructions+=2;goto B53a11d;
case 0x53a11f:c.instructions+=1;goto B53a11f;
case 0x53a124:goto L53a124;
case 0x53a125:c.instructions+=1;goto B53a125;
case 0x53a12a:goto L53a12a;
case 0x53a12b:c.instructions+=5;goto B53a12b;
case 0x53a12e:c.instructions+=4;goto B53a12e;
case 0x53a133:c.instructions+=3;goto B53a133;
case 0x53a138:c.instructions+=2;goto B53a138;
case 0x53a139:c.instructions+=1;goto B53a139;
case 0x53a13e:goto L53a13e;
case 0x53a142:c.instructions+=3;goto B53a142;
case 0x53a145:c.instructions+=2;goto B53a145;
case 0x53a146:c.instructions+=1;goto B53a146;
case 0x53a14b:goto L53a14b;
case 0x53a14c:c.instructions+=4;goto B53a14c;
case 0x53a151:c.instructions+=3;goto B53a151;
case 0x53a156:c.instructions+=2;goto B53a156;
case 0x53a157:c.instructions+=1;goto B53a157;
case 0x53a15c:goto L53a15c;
case 0x53a15f:c.instructions+=3;goto B53a15f;
case 0x53a162:c.instructions+=2;goto B53a162;
case 0x53a164:c.instructions+=1;goto B53a164;
case 0x53a169:goto L53a169;
case 0x53a16a:c.instructions+=4;goto B53a16a;
case 0x53a16f:c.instructions+=3;goto B53a16f;
case 0x53a174:c.instructions+=2;goto B53a174;
case 0x53a175:c.instructions+=1;goto B53a175;
case 0x53a17a:goto L53a17a;
case 0x53a17e:c.instructions+=9;goto B53a17e;
case 0x53a181:c.instructions+=8;goto B53a181;
case 0x53a184:c.instructions+=7;goto B53a184;
case 0x53a187:c.instructions+=6;goto B53a187;
case 0x53a189:c.instructions+=5;goto B53a189;
case 0x53a18a:c.instructions+=4;goto B53a18a;
case 0x53a18f:c.instructions+=3;goto B53a18f;
case 0x53a194:c.instructions+=2;goto B53a194;
case 0x53a195:c.instructions+=1;goto B53a195;
case 0x53a19a:goto L53a19a;
case 0x53a1a0:c.instructions+=4;goto B53a1a0;
case 0x53a1a3:c.instructions+=3;goto B53a1a3;
case 0x53a1a4:c.instructions+=2;goto B53a1a4;
case 0x53a1a6:c.instructions+=1;goto B53a1a6;
case 0x53a1ab:goto L53a1ab;
case 0x53a1ae:c.instructions+=5;goto B53a1ae;
case 0x53a1b0:c.instructions+=4;goto B53a1b0;
case 0x53a1b2:c.instructions+=3;goto B53a1b2;
case 0x53a1b4:c.instructions+=2;goto B53a1b4;
case 0x53a1b5:c.instructions+=1;goto B53a1b5;
case 0x53a1ba:goto L53a1ba;
case 0x53a1bb:c.instructions+=6;goto B53a1bb;
case 0x53a1bc:c.instructions+=5;goto B53a1bc;
case 0x53a1bd:c.instructions+=4;goto B53a1bd;
case 0x53a1c2:c.instructions+=3;goto B53a1c2;
case 0x53a1c7:c.instructions+=2;goto B53a1c7;
case 0x53a1c8:c.instructions+=1;goto B53a1c8;
case 0x53a1cd:goto L53a1cd;
case 0x53a1d0:c.instructions+=5;goto B53a1d0;
case 0x53a1d1:c.instructions+=4;goto B53a1d1;
case 0x53a1d2:c.instructions+=3;goto B53a1d2;
case 0x53a1d3:c.instructions+=2;goto B53a1d3;
case 0x53a1d4:c.instructions+=1;goto B53a1d4;
case 0x53a1d5:goto L53a1d5;
case 0x53a1d8:c.instructions+=4;goto B53a1d8;
case 0x53a1dd:c.instructions+=3;goto B53a1dd;
case 0x53a1e2:c.instructions+=2;goto B53a1e2;
case 0x53a1e3:c.instructions+=1;goto B53a1e3;
case 0x53a1e8:goto L53a1e8;
case 0x53a1eb:c.instructions+=4;goto B53a1eb;
case 0x53a1f0:c.instructions+=3;goto B53a1f0;
case 0x53a1f5:c.instructions+=2;goto B53a1f5;
case 0x53a1f6:c.instructions+=1;goto B53a1f6;
case 0x53a1fb:goto L53a1fb;
case 0x53a1fe:c.instructions+=4;goto B53a1fe;
case 0x53a203:c.instructions+=3;goto B53a203;
case 0x53a208:c.instructions+=2;goto B53a208;
case 0x53a209:c.instructions+=1;goto B53a209;
case 0x53a20e:goto L53a20e;
case 0x53a211:c.instructions+=4;goto B53a211;
case 0x53a216:c.instructions+=3;goto B53a216;
case 0x53a21b:c.instructions+=2;goto B53a21b;
case 0x53a21c:c.instructions+=1;goto B53a21c;
case 0x53a221:goto L53a221;
case 0x53a224:c.instructions+=4;goto B53a224;
case 0x53a229:c.instructions+=3;goto B53a229;
case 0x53a22e:c.instructions+=2;goto B53a22e;
case 0x53a22f:c.instructions+=1;goto B53a22f;
case 0x53a234:goto L53a234;
case 0x53a237:c.instructions+=3;goto B53a237;
case 0x53a238:c.instructions+=2;goto B53a238;
case 0x53a239:c.instructions+=1;goto B53a239;
case 0x53a240:goto L53a240;
case 0x53a241:c.instructions+=5;goto B53a241;
case 0x53a244:c.instructions+=4;goto B53a244;
case 0x53a24a:c.instructions+=3;goto B53a24a;
case 0x53a24c:c.instructions+=2;goto B53a24c;
case 0x53a24e:c.instructions+=1;goto B53a24e;
case 0x53a250:goto L53a250;
case 0x53a252:c.instructions+=5;goto B53a252;
case 0x53a255:c.instructions+=4;goto B53a255;
case 0x53a257:c.instructions+=3;goto B53a257;
case 0x53a258:c.instructions+=2;goto B53a258;
case 0x53a25b:c.instructions+=1;goto B53a25b;
case 0x53a260:goto L53a260;
case 0x53a262:c.instructions+=3;goto B53a262;
case 0x53a265:c.instructions+=2;goto B53a265;
case 0x53a267:c.instructions+=1;goto B53a267;
case 0x53a269:goto L53a269;
case 0x53a26a:c.instructions+=1;goto B53a26a;
case 0x53a270:goto L53a270;
case 0x53a271:c.instructions+=3;goto B53a271;
case 0x53a273:c.instructions+=2;goto B53a273;
case 0x53a27a:c.instructions+=1;goto B53a27a;
case 0x53a27c:goto L53a27c;
case 0x53a280:c.instructions+=1;goto B53a280;
case 0x53a282:goto L53a282;
case 0x53a28c:goto L53a28c;
case 0x53a28f:c.instructions+=7;goto B53a28f;
case 0x53a292:c.instructions+=6;goto B53a292;
case 0x53a294:c.instructions+=5;goto B53a294;
case 0x53a299:c.instructions+=4;goto B53a299;
case 0x53a29e:c.instructions+=3;goto B53a29e;
case 0x53a29f:c.instructions+=2;goto B53a29f;
case 0x53a2a4:c.instructions+=1;goto B53a2a4;
case 0x53a2a9:goto L53a2a9;
case 0x53a2ac:goto L53a2ac;
case 0x53a2ad:c.instructions+=1;goto B53a2ad;
case 0x53a2b0:goto L53a2b0;
case 0x53a2b5:c.instructions+=2;goto B53a2b5;
case 0x53a2b6:c.instructions+=1;goto B53a2b6;
case 0x53a2bb:goto L53a2bb;
case 0x53a2bd:c.instructions+=3;goto B53a2bd;
case 0x53a2c0:c.instructions+=2;goto B53a2c0;
case 0x53a2c2:c.instructions+=1;goto B53a2c2;
case 0x53a2c4:goto L53a2c4;
case 0x53a2c7:c.instructions+=3;goto B53a2c7;
case 0x53a2ca:c.instructions+=2;goto B53a2ca;
case 0x53a2cd:c.instructions+=1;goto B53a2cd;
case 0x53a2d0:goto L53a2d0;
case 0x53a2e0:goto L53a2e0;
case 0x53a2e5:c.instructions+=2;goto B53a2e5;
case 0x53a2e6:c.instructions+=1;goto B53a2e6;
case 0x53a2eb:goto L53a2eb;
case 0x53a2ee:c.instructions+=2;goto B53a2ee;
case 0x53a2f0:c.instructions+=1;goto B53a2f0;
case 0x53a2f2:goto L53a2f2;
case 0x53a2f7:c.instructions+=4;goto B53a2f7;
case 0x53a2fa:c.instructions+=3;goto B53a2fa;
case 0x53a2fd:c.instructions+=2;goto B53a2fd;
case 0x53a300:c.instructions+=1;goto B53a300;
case 0x53a303:goto L53a303;
case 0x53a310:goto L53a310;
case 0x53a311:c.instructions+=6;goto B53a311;
case 0x53a312:c.instructions+=5;goto B53a312;
case 0x53a313:c.instructions+=4;goto B53a313;
case 0x53a315:c.instructions+=3;goto B53a315;
case 0x53a31b:c.instructions+=2;goto B53a31b;
case 0x53a31d:c.instructions+=1;goto B53a31d;
case 0x53a322:goto L53a322;
case 0x53a324:c.instructions+=10;goto B53a324;
case 0x53a326:c.instructions+=9;goto B53a326;
case 0x53a32b:c.instructions+=8;goto B53a32b;
case 0x53a331:c.instructions+=7;goto B53a331;
case 0x53a337:c.instructions+=6;goto B53a337;
case 0x53a33a:c.instructions+=5;goto B53a33a;
case 0x53a340:c.instructions+=4;goto B53a340;
case 0x53a346:c.instructions+=3;goto B53a346;
case 0x53a349:c.instructions+=2;goto B53a349;
case 0x53a34b:c.instructions+=1;goto B53a34b;
case 0x53a34d:goto L53a34d;
case 0x53a34e:c.instructions+=1;goto B53a34e;
case 0x53a353:goto L53a353;
case 0x53a356:c.instructions+=2;goto B53a356;
case 0x53a358:c.instructions+=1;goto B53a358;
case 0x53a35a:goto L53a35a;
case 0x53a35f:c.instructions+=2;goto B53a35f;
case 0x53a361:c.instructions+=1;goto B53a361;
case 0x53a366:goto L53a366;
case 0x53a368:c.instructions+=1;goto B53a368;
case 0x53a36a:goto L53a36a;
case 0x53a36f:c.instructions+=2;goto B53a36f;
case 0x53a371:c.instructions+=1;goto B53a371;
case 0x53a373:goto L53a373;
case 0x53a376:c.instructions+=3;goto B53a376;
case 0x53a377:c.instructions+=2;goto B53a377;
case 0x53a37c:c.instructions+=1;goto B53a37c;
case 0x53a381:goto L53a381;
case 0x53a383:c.instructions+=2;goto B53a383;
case 0x53a385:c.instructions+=1;goto B53a385;
case 0x53a387:goto L53a387;
case 0x53a38a:c.instructions+=2;goto B53a38a;
case 0x53a38c:c.instructions+=1;goto B53a38c;
case 0x53a38e:goto L53a38e;
case 0x53a390:goto L53a390;
case 0x53a395:c.instructions+=1;goto B53a395;
case 0x53a39a:goto L53a39a;
case 0x53a39d:c.instructions+=3;goto B53a39d;
case 0x53a3a0:c.instructions+=2;goto B53a3a0;
case 0x53a3a2:c.instructions+=1;goto B53a3a2;
case 0x53a3a4:goto L53a3a4;
case 0x53a3a7:c.instructions+=2;goto B53a3a7;
case 0x53a3a9:c.instructions+=1;goto B53a3a9;
case 0x53a3ab:goto L53a3ab;
case 0x53a3ac:c.instructions+=3;goto B53a3ac;
case 0x53a3ad:c.instructions+=2;goto B53a3ad;
case 0x53a3ae:c.instructions+=1;goto B53a3ae;
case 0x53a3af:goto L53a3af;
case 0x53a3b1:c.instructions+=1;goto B53a3b1;
case 0x53a3b3:goto L53a3b3;
case 0x53a3b6:c.instructions+=1;goto B53a3b6;
case 0x53a3b8:goto L53a3b8;
case 0x53a3ba:c.instructions+=2;goto B53a3ba;
case 0x53a3bd:c.instructions+=1;goto B53a3bd;
case 0x53a3c2:goto L53a3c2;
case 0x53a3c5:c.instructions+=1;goto B53a3c5;
case 0x53a3c8:goto L53a3c8;
case 0x53a3cb:goto L53a3cb;
case 0x53a3cc:c.instructions+=3;goto B53a3cc;
case 0x53a3cd:c.instructions+=2;goto B53a3cd;
case 0x53a3ce:c.instructions+=1;goto B53a3ce;
case 0x53a3d0:goto L53a3d0;
case 0x53a3d1:c.instructions+=6;goto B53a3d1;
case 0x53a3d2:c.instructions+=5;goto B53a3d2;
case 0x53a3d3:c.instructions+=4;goto B53a3d3;
case 0x53a3d5:c.instructions+=3;goto B53a3d5;
case 0x53a3db:c.instructions+=2;goto B53a3db;
case 0x53a3dd:c.instructions+=1;goto B53a3dd;
case 0x53a3e2:goto L53a3e2;
case 0x53a3e5:c.instructions+=8;goto B53a3e5;
case 0x53a3e7:c.instructions+=7;goto B53a3e7;
case 0x53a3e8:c.instructions+=6;goto B53a3e8;
case 0x53a3ee:c.instructions+=5;goto B53a3ee;
case 0x53a3f5:c.instructions+=4;goto B53a3f5;
case 0x53a3f8:c.instructions+=3;goto B53a3f8;
case 0x53a3fe:c.instructions+=2;goto B53a3fe;
case 0x53a404:c.instructions+=1;goto B53a404;
case 0x53a409:goto L53a409;
case 0x53a40a:c.instructions+=1;goto B53a40a;
case 0x53a40f:goto L53a40f;
case 0x53a412:c.instructions+=2;goto B53a412;
case 0x53a414:c.instructions+=1;goto B53a414;
case 0x53a416:goto L53a416;
case 0x53a41d:goto L53a41d;
case 0x53a420:c.instructions+=2;goto B53a420;
case 0x53a422:c.instructions+=1;goto B53a422;
case 0x53a424:goto L53a424;
case 0x53a425:c.instructions+=1;goto B53a425;
case 0x53a42a:goto L53a42a;
case 0x53a42d:c.instructions+=2;goto B53a42d;
case 0x53a42f:c.instructions+=1;goto B53a42f;
case 0x53a431:goto L53a431;
case 0x53a436:c.instructions+=2;goto B53a436;
case 0x53a438:c.instructions+=1;goto B53a438;
case 0x53a43d:goto L53a43d;
case 0x53a43f:c.instructions+=1;goto B53a43f;
case 0x53a441:goto L53a441;
case 0x53a446:c.instructions+=2;goto B53a446;
case 0x53a448:c.instructions+=1;goto B53a448;
case 0x53a44a:goto L53a44a;
case 0x53a44d:c.instructions+=3;goto B53a44d;
case 0x53a44e:c.instructions+=2;goto B53a44e;
case 0x53a453:c.instructions+=1;goto B53a453;
case 0x53a458:goto L53a458;
case 0x53a45a:c.instructions+=2;goto B53a45a;
case 0x53a45c:c.instructions+=1;goto B53a45c;
case 0x53a45e:goto L53a45e;
case 0x53a461:c.instructions+=2;goto B53a461;
case 0x53a463:c.instructions+=1;goto B53a463;
case 0x53a465:goto L53a465;
case 0x53a46a:c.instructions+=1;goto B53a46a;
case 0x53a46f:goto L53a46f;
case 0x53a472:c.instructions+=3;goto B53a472;
case 0x53a475:c.instructions+=2;goto B53a475;
case 0x53a477:c.instructions+=1;goto B53a477;
case 0x53a479:goto L53a479;
case 0x53a47c:c.instructions+=2;goto B53a47c;
case 0x53a47e:c.instructions+=1;goto B53a47e;
case 0x53a480:goto L53a480;
case 0x53a481:c.instructions+=3;goto B53a481;
case 0x53a482:c.instructions+=2;goto B53a482;
case 0x53a483:c.instructions+=1;goto B53a483;
case 0x53a484:goto L53a484;
case 0x53a486:c.instructions+=1;goto B53a486;
case 0x53a488:goto L53a488;
case 0x53a48b:c.instructions+=1;goto B53a48b;
case 0x53a48d:goto L53a48d;
case 0x53a48f:c.instructions+=2;goto B53a48f;
case 0x53a492:c.instructions+=1;goto B53a492;
case 0x53a497:goto L53a497;
case 0x53a49a:c.instructions+=1;goto B53a49a;
case 0x53a49d:goto L53a49d;
case 0x53a4a0:goto L53a4a0;
case 0x53a4a1:c.instructions+=3;goto B53a4a1;
case 0x53a4a2:c.instructions+=2;goto B53a4a2;
case 0x53a4a3:c.instructions+=1;goto B53a4a3;
case 0x53a4b0:goto L53a4b0;
case 0x53a4b1:c.instructions+=8;goto B53a4b1;
case 0x53a4b3:c.instructions+=7;goto B53a4b3;
case 0x53a4b6:c.instructions+=6;goto B53a4b6;
case 0x53a4b7:c.instructions+=5;goto B53a4b7;
case 0x53a4b8:c.instructions+=4;goto B53a4b8;
case 0x53a4ba:c.instructions+=3;goto B53a4ba;
case 0x53a4c0:c.instructions+=2;goto B53a4c0;
case 0x53a4c3:c.instructions+=1;goto B53a4c3;
case 0x53a4c8:goto L53a4c8;
case 0x53a4cb:c.instructions+=7;goto B53a4cb;
case 0x53a4cd:c.instructions+=6;goto B53a4cd;
case 0x53a4d0:c.instructions+=5;goto B53a4d0;
case 0x53a4d6:c.instructions+=4;goto B53a4d6;
case 0x53a4d8:c.instructions+=3;goto B53a4d8;
case 0x53a4da:c.instructions+=2;goto B53a4da;
case 0x53a4dd:c.instructions+=1;goto B53a4dd;
case 0x53a4e3:goto L53a4e3;
case 0x53a4e4:c.instructions+=3;goto B53a4e4;
case 0x53a4e6:c.instructions+=2;goto B53a4e6;
case 0x53a4e8:c.instructions+=1;goto B53a4e8;
case 0x53a4ea:goto L53a4ea;
case 0x53a4f0:goto L53a4f0;
case 0x53a4f2:c.instructions+=1;goto B53a4f2;
case 0x53a4f7:goto L53a4f7;
case 0x53a4fa:c.instructions+=2;goto B53a4fa;
case 0x53a4fc:c.instructions+=1;goto B53a4fc;
case 0x53a4fe:goto L53a4fe;
case 0x53a501:c.instructions+=11;goto B53a501;
case 0x53a504:c.instructions+=10;goto B53a504;
case 0x53a507:c.instructions+=9;goto B53a507;
case 0x53a50a:c.instructions+=8;goto B53a50a;
case 0x53a50d:c.instructions+=7;goto B53a50d;
case 0x53a510:c.instructions+=6;goto B53a510;
case 0x53a514:c.instructions+=5;goto B53a514;
case 0x53a517:c.instructions+=4;goto B53a517;
case 0x53a51a:c.instructions+=3;goto B53a51a;
case 0x53a520:c.instructions+=2;goto B53a520;
case 0x53a523:c.instructions+=1;goto B53a523;
case 0x53a525:goto L53a525;
case 0x53a527:goto L53a527;
case 0x53a52a:c.instructions+=4;goto B53a52a;
case 0x53a52c:c.instructions+=3;goto B53a52c;
case 0x53a52e:c.instructions+=2;goto B53a52e;
case 0x53a52f:c.instructions+=1;goto B53a52f;
case 0x53a534:goto L53a534;
case 0x53a536:c.instructions+=1;goto B53a536;
case 0x53a538:goto L53a538;
case 0x53a53b:c.instructions+=3;goto B53a53b;
case 0x53a540:c.instructions+=2;goto B53a540;
case 0x53a542:c.instructions+=1;goto B53a542;
case 0x53a544:goto L53a544;
case 0x53a547:c.instructions+=1;goto B53a547;
case 0x53a54e:goto L53a54e;
case 0x53a554:c.instructions+=6;goto B53a554;
case 0x53a557:c.instructions+=5;goto B53a557;
case 0x53a558:c.instructions+=4;goto B53a558;
case 0x53a55e:c.instructions+=3;goto B53a55e;
case 0x53a560:c.instructions+=2;goto B53a560;
case 0x53a562:c.instructions+=1;goto B53a562;
case 0x53a564:goto L53a564;
case 0x53a567:c.instructions+=3;goto B53a567;
case 0x53a569:c.instructions+=2;goto B53a569;
case 0x53a56c:c.instructions+=1;goto B53a56c;
case 0x53a572:goto L53a572;
case 0x53a578:c.instructions+=2;goto B53a578;
case 0x53a57d:c.instructions+=1;goto B53a57d;
case 0x53a57f:goto L53a57f;
case 0x53a584:c.instructions+=2;goto B53a584;
case 0x53a585:c.instructions+=1;goto B53a585;
case 0x53a58a:goto L53a58a;
case 0x53a58c:c.instructions+=2;goto B53a58c;
case 0x53a58e:c.instructions+=1;goto B53a58e;
case 0x53a590:goto L53a590;
case 0x53a596:c.instructions+=3;goto B53a596;
case 0x53a597:c.instructions+=2;goto B53a597;
case 0x53a59c:c.instructions+=1;goto B53a59c;
case 0x53a5a1:goto L53a5a1;
case 0x53a5a3:goto L53a5a3;
case 0x53a5a6:c.instructions+=2;goto B53a5a6;
case 0x53a5a7:c.instructions+=1;goto B53a5a7;
case 0x53a5ac:goto L53a5ac;
case 0x53a5ae:goto L53a5ae;
case 0x53a5b1:c.instructions+=2;goto B53a5b1;
case 0x53a5b4:c.instructions+=1;goto B53a5b4;
case 0x53a5b6:goto L53a5b6;
case 0x53a5b8:c.instructions+=1;goto B53a5b8;
case 0x53a5ba:goto L53a5ba;
case 0x53a5c0:c.instructions+=1;goto B53a5c0;
case 0x53a5c2:goto L53a5c2;
case 0x53a5c3:c.instructions+=3;goto B53a5c3;
case 0x53a5c8:c.instructions+=2;goto B53a5c8;
case 0x53a5ca:c.instructions+=1;goto B53a5ca;
case 0x53a5cf:goto L53a5cf;
case 0x53a5d1:c.instructions+=1;goto B53a5d1;
case 0x53a5d3:goto L53a5d3;
case 0x53a5d9:c.instructions+=1;goto B53a5d9;
case 0x53a5db:goto L53a5db;
case 0x53a5de:c.instructions+=4;goto B53a5de;
case 0x53a5e1:c.instructions+=3;goto B53a5e1;
case 0x53a5e4:c.instructions+=2;goto B53a5e4;
case 0x53a5e6:c.instructions+=1;goto B53a5e6;
case 0x53a5e8:goto L53a5e8;
case 0x53a5eb:c.instructions+=2;goto B53a5eb;
case 0x53a5ec:c.instructions+=1;goto B53a5ec;
case 0x53a5f1:goto L53a5f1;
case 0x53a5f3:goto L53a5f3;
case 0x53a5f6:c.instructions+=3;goto B53a5f6;
case 0x53a5f9:c.instructions+=2;goto B53a5f9;
case 0x53a5fb:c.instructions+=1;goto B53a5fb;
case 0x53a5fd:goto L53a5fd;
case 0x53a600:goto L53a600;
case 0x53a601:c.instructions+=1;goto B53a601;
case 0x53a606:goto L53a606;
case 0x53a609:c.instructions+=3;goto B53a609;
case 0x53a60b:c.instructions+=2;goto B53a60b;
case 0x53a60f:c.instructions+=1;goto B53a60f;
case 0x53a614:goto L53a614;
case 0x53a615:goto L53a615;
case 0x53a616:c.instructions+=4;goto B53a616;
case 0x53a617:c.instructions+=3;goto B53a617;
case 0x53a619:c.instructions+=2;goto B53a619;
case 0x53a61a:c.instructions+=1;goto B53a61a;
case 0x53a620:goto L53a620;
case 0x53a621:c.instructions+=4;goto B53a621;
case 0x53a622:c.instructions+=3;goto B53a622;
case 0x53a623:c.instructions+=2;goto B53a623;
case 0x53a625:c.instructions+=1;goto B53a625;
case 0x53a62a:goto L53a62a;
case 0x53a62c:c.instructions+=2;goto B53a62c;
case 0x53a630:c.instructions+=1;goto B53a630;
case 0x53a635:goto L53a635;
case 0x53a637:c.instructions+=4;goto B53a637;
case 0x53a63a:c.instructions+=3;goto B53a63a;
case 0x53a63c:c.instructions+=2;goto B53a63c;
case 0x53a641:c.instructions+=1;goto B53a641;
case 0x53a643:goto L53a643;
case 0x53a647:c.instructions+=17;goto B53a647;
case 0x53a64a:c.instructions+=16;goto B53a64a;
case 0x53a64d:c.instructions+=15;goto B53a64d;
case 0x53a654:c.instructions+=14;goto B53a654;
case 0x53a657:c.instructions+=13;goto B53a657;
case 0x53a65a:c.instructions+=12;goto B53a65a;
case 0x53a65d:c.instructions+=11;goto B53a65d;
case 0x53a660:c.instructions+=10;goto B53a660;
case 0x53a663:c.instructions+=9;goto B53a663;
case 0x53a669:c.instructions+=8;goto B53a669;
case 0x53a66c:c.instructions+=7;goto B53a66c;
case 0x53a66f:c.instructions+=6;goto B53a66f;
case 0x53a671:c.instructions+=5;goto B53a671;
case 0x53a674:c.instructions+=4;goto B53a674;
case 0x53a678:c.instructions+=3;goto B53a678;
case 0x53a67b:c.instructions+=2;goto B53a67b;
case 0x53a67e:c.instructions+=1;goto B53a67e;
case 0x53a680:goto L53a680;
case 0x53a682:goto L53a682;
case 0x53a684:c.instructions+=4;goto B53a684;
case 0x53a685:c.instructions+=3;goto B53a685;
case 0x53a686:c.instructions+=2;goto B53a686;
case 0x53a689:c.instructions+=1;goto B53a689;
case 0x53a68e:goto L53a68e;
case 0x53a690:c.instructions+=1;goto B53a690;
case 0x53a692:goto L53a692;
case 0x53a696:c.instructions+=2;goto B53a696;
case 0x53a699:c.instructions+=1;goto B53a699;
case 0x53a69b:goto L53a69b;
case 0x53a69e:c.instructions+=1;goto B53a69e;
case 0x53a6a5:goto L53a6a5;
case 0x53a6ab:c.instructions+=4;goto B53a6ab;
case 0x53a6ac:c.instructions+=3;goto B53a6ac;
case 0x53a6ad:c.instructions+=2;goto B53a6ad;
case 0x53a6ae:c.instructions+=1;goto B53a6ae;
case 0x53a6c0:goto L53a6c0;
case 0x53a6c4:c.instructions+=27;goto B53a6c4;
case 0x53a6c6:c.instructions+=26;goto B53a6c6;
case 0x53a6ca:c.instructions+=25;goto B53a6ca;
case 0x53a6cd:c.instructions+=24;goto B53a6cd;
case 0x53a6cf:c.instructions+=23;goto B53a6cf;
case 0x53a6d2:c.instructions+=22;goto B53a6d2;
case 0x53a6d5:c.instructions+=21;goto B53a6d5;
case 0x53a6d8:c.instructions+=20;goto B53a6d8;
case 0x53a6db:c.instructions+=19;goto B53a6db;
case 0x53a6de:c.instructions+=18;goto B53a6de;
case 0x53a6e1:c.instructions+=17;goto B53a6e1;
case 0x53a6e4:c.instructions+=16;goto B53a6e4;
case 0x53a6e7:c.instructions+=15;goto B53a6e7;
case 0x53a6eb:c.instructions+=14;goto B53a6eb;
case 0x53a6ee:c.instructions+=13;goto B53a6ee;
case 0x53a6f3:c.instructions+=12;goto B53a6f3;
case 0x53a6f6:c.instructions+=11;goto B53a6f6;
case 0x53a6f9:c.instructions+=10;goto B53a6f9;
case 0x53a6fd:c.instructions+=9;goto B53a6fd;
case 0x53a700:c.instructions+=8;goto B53a700;
case 0x53a703:c.instructions+=7;goto B53a703;
case 0x53a706:c.instructions+=6;goto B53a706;
case 0x53a709:c.instructions+=5;goto B53a709;
case 0x53a70d:c.instructions+=4;goto B53a70d;
case 0x53a713:c.instructions+=3;goto B53a713;
case 0x53a715:c.instructions+=2;goto B53a715;
case 0x53a718:c.instructions+=1;goto B53a718;
case 0x53a720:goto L53a720;
case 0x53a721:c.instructions+=5;goto B53a721;
case 0x53a723:c.instructions+=4;goto B53a723;
case 0x53a729:c.instructions+=3;goto B53a729;
case 0x53a72b:c.instructions+=2;goto B53a72b;
case 0x53a72f:c.instructions+=1;goto B53a72f;
case 0x53a734:goto L53a734;
case 0x53a736:c.instructions+=2;goto B53a736;
case 0x53a737:c.instructions+=1;goto B53a737;
case 0x53a740:goto L53a740;
case 0x53a741:c.instructions+=5;goto B53a741;
case 0x53a743:c.instructions+=4;goto B53a743;
case 0x53a749:c.instructions+=3;goto B53a749;
case 0x53a74b:c.instructions+=2;goto B53a74b;
case 0x53a74f:c.instructions+=1;goto B53a74f;
case 0x53a754:goto L53a754;
case 0x53a756:c.instructions+=2;goto B53a756;
case 0x53a757:c.instructions+=1;goto B53a757;
case 0x53a760:goto L53a760;
case 0x53a765:c.instructions+=2;goto B53a765;
case 0x53a766:c.instructions+=1;goto B53a766;
case 0x53a76b:goto L53a76b;
case 0x53a76d:c.instructions+=3;goto B53a76d;
case 0x53a770:c.instructions+=2;goto B53a770;
case 0x53a772:c.instructions+=1;goto B53a772;
case 0x53a774:goto L53a774;
case 0x53a777:c.instructions+=3;goto B53a777;
case 0x53a77a:c.instructions+=2;goto B53a77a;
case 0x53a77d:c.instructions+=1;goto B53a77d;
case 0x53a780:goto L53a780;
case 0x53a790:goto L53a790;
case 0x53a795:c.instructions+=2;goto B53a795;
case 0x53a796:c.instructions+=1;goto B53a796;
case 0x53a79b:goto L53a79b;
case 0x53a79e:c.instructions+=2;goto B53a79e;
case 0x53a7a0:c.instructions+=1;goto B53a7a0;
case 0x53a7a2:goto L53a7a2;
case 0x53a7a7:c.instructions+=4;goto B53a7a7;
case 0x53a7aa:c.instructions+=3;goto B53a7aa;
case 0x53a7ad:c.instructions+=2;goto B53a7ad;
case 0x53a7b0:c.instructions+=1;goto B53a7b0;
case 0x53a7b3:goto L53a7b3;
case 0x53a7c0:goto L53a7c0;
case 0x53a7c3:c.instructions+=8;goto B53a7c3;
case 0x53a7c6:c.instructions+=7;goto B53a7c6;
case 0x53a7c7:c.instructions+=6;goto B53a7c7;
case 0x53a7cd:c.instructions+=5;goto B53a7cd;
case 0x53a7cf:c.instructions+=4;goto B53a7cf;
case 0x53a7d2:c.instructions+=3;goto B53a7d2;
case 0x53a7d3:c.instructions+=2;goto B53a7d3;
case 0x53a7d8:c.instructions+=1;goto B53a7d8;
case 0x53a7da:goto L53a7da;
case 0x53a7e1:goto L53a7e1;
case 0x53a7e6:c.instructions+=2;goto B53a7e6;
case 0x53a7eb:c.instructions+=1;goto B53a7eb;
case 0x53a7ed:goto L53a7ed;
case 0x53a7f2:c.instructions+=1;goto B53a7f2;
case 0x53a7f4:goto L53a7f4;
case 0x53a7f9:c.instructions+=2;goto B53a7f9;
case 0x53a7fe:c.instructions+=1;goto B53a7fe;
case 0x53a800:goto L53a800;
case 0x53a805:c.instructions+=1;goto B53a805;
case 0x53a807:goto L53a807;
case 0x53a80c:c.instructions+=2;goto B53a80c;
case 0x53a811:c.instructions+=1;goto B53a811;
case 0x53a813:goto L53a813;
case 0x53a818:goto L53a818;
case 0x53a81d:goto L53a81d;
case 0x53a81e:c.instructions+=3;goto B53a81e;
case 0x53a81f:c.instructions+=2;goto B53a81f;
case 0x53a824:c.instructions+=1;goto B53a824;
case 0x53a829:goto L53a829;
case 0x53a82b:c.instructions+=2;goto B53a82b;
case 0x53a82d:c.instructions+=1;goto B53a82d;
case 0x53a82f:goto L53a82f;
case 0x53a831:c.instructions+=2;goto B53a831;
case 0x53a836:c.instructions+=1;goto B53a836;
case 0x53a83b:goto L53a83b;
case 0x53a83e:c.instructions+=3;goto B53a83e;
case 0x53a83f:c.instructions+=2;goto B53a83f;
case 0x53a841:c.instructions+=1;goto B53a841;
case 0x53a846:goto L53a846;
case 0x53a847:c.instructions+=3;goto B53a847;
case 0x53a84c:c.instructions+=2;goto B53a84c;
case 0x53a84e:c.instructions+=1;goto B53a84e;
case 0x53a853:goto L53a853;
case 0x53a855:c.instructions+=4;goto B53a855;
case 0x53a856:c.instructions+=3;goto B53a856;
case 0x53a859:c.instructions+=2;goto B53a859;
case 0x53a85a:c.instructions+=1;goto B53a85a;
case 0x53a85b:goto L53a85b;
case 0x53a85c:c.instructions+=3;goto B53a85c;
case 0x53a861:c.instructions+=2;goto B53a861;
case 0x53a863:c.instructions+=1;goto B53a863;
case 0x53a868:goto L53a868;
case 0x53a86a:c.instructions+=4;goto B53a86a;
case 0x53a86b:c.instructions+=3;goto B53a86b;
case 0x53a86e:c.instructions+=2;goto B53a86e;
case 0x53a86f:c.instructions+=1;goto B53a86f;
case 0x53a890:goto L53a890;
case 0x53a893:c.instructions+=6;goto B53a893;
case 0x53a896:c.instructions+=5;goto B53a896;
case 0x53a89b:c.instructions+=4;goto B53a89b;
case 0x53a89e:c.instructions+=3;goto B53a89e;
case 0x53a89f:c.instructions+=2;goto B53a89f;
case 0x53a8a0:c.instructions+=1;goto B53a8a0;
case 0x53a8a2:goto L53a8a2;
case 0x53a8a9:goto L53a8a9;
case 0x53a8ae:c.instructions+=1;goto B53a8ae;
case 0x53a8b3:goto L53a8b3;
case 0x53a8b4:c.instructions+=4;goto B53a8b4;
case 0x53a8b6:c.instructions+=3;goto B53a8b6;
case 0x53a8b7:c.instructions+=2;goto B53a8b7;
case 0x53a8bc:c.instructions+=1;goto B53a8bc;
case 0x53a8c1:goto L53a8c1;
case 0x53a8c3:c.instructions+=2;goto B53a8c3;
case 0x53a8c5:c.instructions+=1;goto B53a8c5;
case 0x53a8c7:goto L53a8c7;
case 0x53a8c9:c.instructions+=2;goto B53a8c9;
case 0x53a8ce:c.instructions+=1;goto B53a8ce;
case 0x53a8d3:goto L53a8d3;
case 0x53a8d6:c.instructions+=3;goto B53a8d6;
case 0x53a8d7:c.instructions+=2;goto B53a8d7;
case 0x53a8d9:c.instructions+=1;goto B53a8d9;
case 0x53a8de:goto L53a8de;
case 0x53a8e0:c.instructions+=1;goto B53a8e0;
case 0x53a8e2:goto L53a8e2;
case 0x53a8e7:c.instructions+=2;goto B53a8e7;
case 0x53a8ec:c.instructions+=1;goto B53a8ec;
case 0x53a8ee:goto L53a8ee;
case 0x53a8f3:c.instructions+=2;goto B53a8f3;
case 0x53a8f8:c.instructions+=1;goto B53a8f8;
case 0x53a8fa:goto L53a8fa;
case 0x53a8fb:c.instructions+=3;goto B53a8fb;
case 0x53a8fd:c.instructions+=2;goto B53a8fd;
case 0x53a8fe:c.instructions+=1;goto B53a8fe;
case 0x53a8ff:goto L53a8ff;
case 0x53a901:goto L53a901;
case 0x53a903:c.instructions+=3;goto B53a903;
case 0x53a904:c.instructions+=2;goto B53a904;
case 0x53a909:c.instructions+=1;goto B53a909;
case 0x53a90e:goto L53a90e;
case 0x53a910:c.instructions+=2;goto B53a910;
case 0x53a912:c.instructions+=1;goto B53a912;
case 0x53a914:goto L53a914;
case 0x53a916:c.instructions+=2;goto B53a916;
case 0x53a91b:c.instructions+=1;goto B53a91b;
case 0x53a920:goto L53a920;
case 0x53a923:c.instructions+=3;goto B53a923;
case 0x53a924:c.instructions+=2;goto B53a924;
case 0x53a926:c.instructions+=1;goto B53a926;
case 0x53a92b:goto L53a92b;
case 0x53a92d:goto L53a92d;
case 0x53a92f:goto L53a92f;
case 0x53a931:c.instructions+=1;goto B53a931;
case 0x53a933:goto L53a933;
case 0x53a935:goto L53a935;
case 0x53a938:c.instructions+=3;goto B53a938;
case 0x53a93a:c.instructions+=2;goto B53a93a;
case 0x53a93c:c.instructions+=1;goto B53a93c;
case 0x53a93e:goto L53a93e;
case 0x53a940:goto L53a940;
case 0x53a945:c.instructions+=2;goto B53a945;
case 0x53a94a:c.instructions+=1;goto B53a94a;
case 0x53a94c:goto L53a94c;
case 0x53a950:goto L53a950;
case 0x53a953:c.instructions+=1;goto B53a953;
case 0x53a955:goto L53a955;
case 0x53a957:c.instructions+=2;goto B53a957;
case 0x53a95c:c.instructions+=1;goto B53a95c;
case 0x53a95e:goto L53a95e;
case 0x53a960:goto L53a960;
case 0x53a963:c.instructions+=2;goto B53a963;
case 0x53a965:c.instructions+=1;goto B53a965;
case 0x53a967:goto L53a967;
case 0x53a968:c.instructions+=2;goto B53a968;
case 0x53a96d:c.instructions+=1;goto B53a96d;
case 0x53a972:goto L53a972;
case 0x53a974:c.instructions+=1;goto B53a974;
case 0x53a976:goto L53a976;
case 0x53a977:goto L53a977;
case 0x53a978:c.instructions+=2;goto B53a978;
case 0x53a97a:c.instructions+=1;goto B53a97a;
case 0x53a97c:goto L53a97c;
case 0x53a97e:c.instructions+=6;goto B53a97e;
case 0x53a980:c.instructions+=5;goto B53a980;
case 0x53a981:c.instructions+=4;goto B53a981;
case 0x53a982:c.instructions+=3;goto B53a982;
case 0x53a985:c.instructions+=2;goto B53a985;
case 0x53a986:c.instructions+=1;goto B53a986;
case 0x53a9a0:goto L53a9a0;
case 0x53a9a3:c.instructions+=2;goto B53a9a3;
case 0x53a9a4:c.instructions+=1;goto B53a9a4;
case 0x53a9a9:goto L53a9a9;
case 0x53a9ac:c.instructions+=2;goto B53a9ac;
case 0x53a9ae:c.instructions+=1;goto B53a9ae;
case 0x53a9b0:goto L53a9b0;
case 0x53a9b5:c.instructions+=4;goto B53a9b5;
case 0x53a9b8:c.instructions+=3;goto B53a9b8;
case 0x53a9bb:c.instructions+=2;goto B53a9bb;
case 0x53a9be:c.instructions+=1;goto B53a9be;
case 0x53a9c1:goto L53a9c1;
case 0x53a9d0:goto L53a9d0;
case 0x53a9d2:c.instructions+=41;goto B53a9d2;
case 0x53a9d7:c.instructions+=40;goto B53a9d7;
case 0x53a9dd:c.instructions+=39;goto B53a9dd;
case 0x53a9de:c.instructions+=38;goto B53a9de;
case 0x53a9e5:c.instructions+=37;goto B53a9e5;
case 0x53a9e6:c.instructions+=36;goto B53a9e6;
case 0x53a9ea:c.instructions+=35;goto B53a9ea;
case 0x53a9ee:c.instructions+=34;goto B53a9ee;
case 0x53a9ef:c.instructions+=33;goto B53a9ef;
case 0x53a9f1:c.instructions+=32;goto B53a9f1;
case 0x53a9f5:c.instructions+=31;goto B53a9f5;
case 0x53a9f8:c.instructions+=30;goto B53a9f8;
case 0x53a9fa:c.instructions+=29;goto B53a9fa;
case 0x53a9fd:c.instructions+=28;goto B53a9fd;
case 0x53aa02:c.instructions+=27;goto B53aa02;
case 0x53aa06:c.instructions+=26;goto B53aa06;
case 0x53aa09:c.instructions+=25;goto B53aa09;
case 0x53aa0c:c.instructions+=24;goto B53aa0c;
case 0x53aa0f:c.instructions+=23;goto B53aa0f;
case 0x53aa12:c.instructions+=22;goto B53aa12;
case 0x53aa16:c.instructions+=21;goto B53aa16;
case 0x53aa19:c.instructions+=20;goto B53aa19;
case 0x53aa1c:c.instructions+=19;goto B53aa1c;
case 0x53aa1f:c.instructions+=18;goto B53aa1f;
case 0x53aa22:c.instructions+=17;goto B53aa22;
case 0x53aa25:c.instructions+=16;goto B53aa25;
case 0x53aa28:c.instructions+=15;goto B53aa28;
case 0x53aa2b:c.instructions+=14;goto B53aa2b;
case 0x53aa2f:c.instructions+=13;goto B53aa2f;
case 0x53aa32:c.instructions+=12;goto B53aa32;
case 0x53aa36:c.instructions+=11;goto B53aa36;
case 0x53aa3a:c.instructions+=10;goto B53aa3a;
case 0x53aa3e:c.instructions+=9;goto B53aa3e;
case 0x53aa41:c.instructions+=8;goto B53aa41;
case 0x53aa45:c.instructions+=7;goto B53aa45;
case 0x53aa46:c.instructions+=6;goto B53aa46;
case 0x53aa4c:c.instructions+=5;goto B53aa4c;
case 0x53aa4f:c.instructions+=4;goto B53aa4f;
case 0x53aa52:c.instructions+=3;goto B53aa52;
case 0x53aa59:c.instructions+=2;goto B53aa59;
case 0x53aa5c:c.instructions+=1;goto B53aa5c;
case 0x53aa61:goto L53aa61;
case 0x53aa65:c.instructions+=8;goto B53aa65;
case 0x53aa68:c.instructions+=7;goto B53aa68;
case 0x53aa6b:c.instructions+=6;goto B53aa6b;
case 0x53aa6f:c.instructions+=5;goto B53aa6f;
case 0x53aa71:c.instructions+=4;goto B53aa71;
case 0x53aa72:c.instructions+=3;goto B53aa72;
case 0x53aa79:c.instructions+=2;goto B53aa79;
case 0x53aa7c:c.instructions+=1;goto B53aa7c;
case 0x53aa80:goto L53aa80;
case 0x53aa84:c.instructions+=12;goto B53aa84;
case 0x53aa88:c.instructions+=11;goto B53aa88;
case 0x53aa89:c.instructions+=10;goto B53aa89;
case 0x53aa8b:c.instructions+=9;goto B53aa8b;
case 0x53aa8d:c.instructions+=8;goto B53aa8d;
case 0x53aa8f:c.instructions+=7;goto B53aa8f;
case 0x53aa91:c.instructions+=6;goto B53aa91;
case 0x53aa95:c.instructions+=5;goto B53aa95;
case 0x53aa96:c.instructions+=4;goto B53aa96;
case 0x53aa97:c.instructions+=3;goto B53aa97;
case 0x53aa98:c.instructions+=2;goto B53aa98;
case 0x53aa9a:c.instructions+=1;goto B53aa9a;
case 0x53aa9f:goto L53aa9f;
case 0x53aaa3:c.instructions+=5;goto B53aaa3;
case 0x53aaa6:c.instructions+=4;goto B53aaa6;
case 0x53aaac:c.instructions+=3;goto B53aaac;
case 0x53aaae:c.instructions+=2;goto B53aaae;
case 0x53aaaf:c.instructions+=1;goto B53aaaf;
case 0x53aac0:goto L53aac0;
case 0x53aac2:c.instructions+=15;goto B53aac2;
case 0x53aac7:c.instructions+=14;goto B53aac7;
case 0x53aacd:c.instructions+=13;goto B53aacd;
case 0x53aace:c.instructions+=12;goto B53aace;
case 0x53aad5:c.instructions+=11;goto B53aad5;
case 0x53aad6:c.instructions+=10;goto B53aad6;
case 0x53aad7:c.instructions+=9;goto B53aad7;
case 0x53aad9:c.instructions+=8;goto B53aad9;
case 0x53aadb:c.instructions+=7;goto B53aadb;
case 0x53aadd:c.instructions+=6;goto B53aadd;
case 0x53aae2:c.instructions+=5;goto B53aae2;
case 0x53aae7:c.instructions+=4;goto B53aae7;
case 0x53aae9:c.instructions+=3;goto B53aae9;
case 0x53aaeb:c.instructions+=2;goto B53aaeb;
case 0x53aaef:c.instructions+=1;goto B53aaef;
case 0x53aaf4:goto L53aaf4;
case 0x53aafb:c.instructions+=4;goto B53aafb;
case 0x53aafd:c.instructions+=3;goto B53aafd;
case 0x53ab05:c.instructions+=2;goto B53ab05;
case 0x53ab0b:c.instructions+=1;goto B53ab0b;
case 0x53ab10:goto L53ab10;
case 0x53ab14:c.instructions+=8;goto B53ab14;
case 0x53ab17:c.instructions+=7;goto B53ab17;
case 0x53ab1a:c.instructions+=6;goto B53ab1a;
case 0x53ab1e:c.instructions+=5;goto B53ab1e;
case 0x53ab20:c.instructions+=4;goto B53ab20;
case 0x53ab21:c.instructions+=3;goto B53ab21;
case 0x53ab28:c.instructions+=2;goto B53ab28;
case 0x53ab2b:c.instructions+=1;goto B53ab2b;
case 0x53ab30:goto L53ab30;
case 0x53ab36:c.instructions+=10;goto B53ab36;
case 0x53ab38:c.instructions+=9;goto B53ab38;
case 0x53ab3d:c.instructions+=8;goto B53ab3d;
case 0x53ab3e:c.instructions+=7;goto B53ab3e;
case 0x53ab45:c.instructions+=6;goto B53ab45;
case 0x53ab46:c.instructions+=5;goto B53ab46;
case 0x53ab4a:c.instructions+=4;goto B53ab4a;
case 0x53ab4b:c.instructions+=3;goto B53ab4b;
case 0x53ab4d:c.instructions+=2;goto B53ab4d;
case 0x53ab4f:c.instructions+=1;goto B53ab4f;
case 0x53ab54:goto L53ab54;
case 0x53ab57:c.instructions+=3;goto B53ab57;
case 0x53ab59:c.instructions+=2;goto B53ab59;
case 0x53ab5d:c.instructions+=1;goto B53ab5d;
case 0x53ab5f:goto L53ab5f;
case 0x53ab61:c.instructions+=2;goto B53ab61;
case 0x53ab69:c.instructions+=1;goto B53ab69;
case 0x53ab6b:goto L53ab6b;
case 0x53ab6c:goto L53ab6c;
case 0x53ab70:c.instructions+=9;goto B53ab70;
case 0x53ab74:c.instructions+=8;goto B53ab74;
case 0x53ab76:c.instructions+=7;goto B53ab76;
case 0x53ab78:c.instructions+=6;goto B53ab78;
case 0x53ab79:c.instructions+=5;goto B53ab79;
case 0x53ab7d:c.instructions+=4;goto B53ab7d;
case 0x53ab7e:c.instructions+=3;goto B53ab7e;
case 0x53ab7f:c.instructions+=2;goto B53ab7f;
case 0x53ab81:c.instructions+=1;goto B53ab81;
case 0x53ab86:goto L53ab86;
case 0x53ab88:goto L53ab88;
case 0x53ab8a:c.instructions+=2;goto B53ab8a;
case 0x53ab92:c.instructions+=1;goto B53ab92;
case 0x53ab94:goto L53ab94;
case 0x53ab9a:c.instructions+=2;goto B53ab9a;
case 0x53ab9b:c.instructions+=1;goto B53ab9b;
case 0x53ab9d:goto L53ab9d;
case 0x53ab9f:goto L53ab9f;
case 0x53aba3:c.instructions+=6;goto B53aba3;
case 0x53aba6:c.instructions+=5;goto B53aba6;
case 0x53aba8:c.instructions+=4;goto B53aba8;
case 0x53aba9:c.instructions+=3;goto B53aba9;
case 0x53abab:c.instructions+=2;goto B53abab;
case 0x53abb3:c.instructions+=1;goto B53abb3;
case 0x53abb6:goto L53abb6;
case 0x53abba:c.instructions+=5;goto B53abba;
case 0x53abbb:c.instructions+=4;goto B53abbb;
case 0x53abc2:c.instructions+=3;goto B53abc2;
case 0x53abc3:c.instructions+=2;goto B53abc3;
case 0x53abc6:c.instructions+=1;goto B53abc6;
case 0x53abd0:goto L53abd0;
case 0x53abd2:c.instructions+=22;goto B53abd2;
case 0x53abd7:c.instructions+=21;goto B53abd7;
case 0x53abdd:c.instructions+=20;goto B53abdd;
case 0x53abde:c.instructions+=19;goto B53abde;
case 0x53abe5:c.instructions+=18;goto B53abe5;
case 0x53abe8:c.instructions+=17;goto B53abe8;
case 0x53abe9:c.instructions+=16;goto B53abe9;
case 0x53abea:c.instructions+=15;goto B53abea;
case 0x53abec:c.instructions+=14;goto B53abec;
case 0x53abf0:c.instructions+=13;goto B53abf0;
case 0x53abf4:c.instructions+=12;goto B53abf4;
case 0x53abf5:c.instructions+=11;goto B53abf5;
case 0x53abf9:c.instructions+=10;goto B53abf9;
case 0x53abfd:c.instructions+=9;goto B53abfd;
case 0x53ac01:c.instructions+=8;goto B53ac01;
case 0x53ac02:c.instructions+=7;goto B53ac02;
case 0x53ac08:c.instructions+=6;goto B53ac08;
case 0x53ac09:c.instructions+=5;goto B53ac09;
case 0x53ac0d:c.instructions+=4;goto B53ac0d;
case 0x53ac0f:c.instructions+=3;goto B53ac0f;
case 0x53ac10:c.instructions+=2;goto B53ac10;
case 0x53ac14:c.instructions+=1;goto B53ac14;
case 0x53ac19:goto L53ac19;
case 0x53ac1d:c.instructions+=4;goto B53ac1d;
case 0x53ac21:c.instructions+=3;goto B53ac21;
case 0x53ac24:c.instructions+=2;goto B53ac24;
case 0x53ac26:c.instructions+=1;goto B53ac26;
case 0x53ac2c:goto L53ac2c;
case 0x53ac32:c.instructions+=3;goto B53ac32;
case 0x53ac36:c.instructions+=2;goto B53ac36;
case 0x53ac3a:c.instructions+=1;goto B53ac3a;
case 0x53ac40:goto L53ac40;
case 0x53ac45:goto L53ac45;
case 0x53ac47:c.instructions+=2;goto B53ac47;
case 0x53ac4b:c.instructions+=1;goto B53ac4b;
case 0x53ac51:goto L53ac51;
case 0x53ac55:c.instructions+=2;goto B53ac55;
case 0x53ac58:c.instructions+=1;goto B53ac58;
case 0x53ac5a:goto L53ac5a;
case 0x53ac60:c.instructions+=2;goto B53ac60;
case 0x53ac62:c.instructions+=1;goto B53ac62;
case 0x53ac65:goto L53ac65;
case 0x53ac6b:c.instructions+=8;goto B53ac6b;
case 0x53ac71:c.instructions+=7;goto B53ac71;
case 0x53ac79:c.instructions+=6;goto B53ac79;
case 0x53ac7b:c.instructions+=5;goto B53ac7b;
case 0x53ac7f:c.instructions+=4;goto B53ac7f;
case 0x53ac82:c.instructions+=3;goto B53ac82;
case 0x53ac83:c.instructions+=2;goto B53ac83;
case 0x53ac88:c.instructions+=1;goto B53ac88;
case 0x53ac8d:goto L53ac8d;
case 0x53ac90:c.instructions+=4;goto B53ac90;
case 0x53ac92:c.instructions+=3;goto B53ac92;
case 0x53ac95:c.instructions+=2;goto B53ac95;
case 0x53ac97:c.instructions+=1;goto B53ac97;
case 0x53ac99:goto L53ac99;
case 0x53ac9d:goto L53ac9d;
case 0x53ac9f:c.instructions+=1;goto B53ac9f;
case 0x53aca4:goto L53aca4;
case 0x53aca6:c.instructions+=3;goto B53aca6;
case 0x53aca9:c.instructions+=2;goto B53aca9;
case 0x53acab:c.instructions+=1;goto B53acab;
case 0x53acad:goto L53acad;
case 0x53acb1:c.instructions+=6;goto B53acb1;
case 0x53acb4:c.instructions+=5;goto B53acb4;
case 0x53acb5:c.instructions+=4;goto B53acb5;
case 0x53acb6:c.instructions+=3;goto B53acb6;
case 0x53acb7:c.instructions+=2;goto B53acb7;
case 0x53acb9:c.instructions+=1;goto B53acb9;
case 0x53acbe:goto L53acbe;
case 0x53acbf:c.instructions+=2;goto B53acbf;
case 0x53acc0:c.instructions+=1;goto B53acc0;
case 0x53acc5:goto L53acc5;
case 0x53acc6:c.instructions+=2;goto B53acc6;
case 0x53acc8:c.instructions+=1;goto B53acc8;
case 0x53accd:goto L53accd;
case 0x53accf:goto L53accf;
case 0x53acd1:goto L53acd1;
case 0x53acd3:c.instructions+=3;goto B53acd3;
case 0x53acd4:c.instructions+=2;goto B53acd4;
case 0x53acd6:c.instructions+=1;goto B53acd6;
case 0x53acd9:goto L53acd9;
case 0x53acdd:c.instructions+=4;goto B53acdd;
case 0x53acdf:c.instructions+=3;goto B53acdf;
case 0x53ace3:c.instructions+=2;goto B53ace3;
case 0x53ace7:c.instructions+=1;goto B53ace7;
case 0x53aced:goto L53aced;
case 0x53acf2:goto L53acf2;
case 0x53acf7:goto L53acf7;
case 0x53acf9:c.instructions+=2;goto B53acf9;
case 0x53acfd:c.instructions+=1;goto B53acfd;
case 0x53ad03:goto L53ad03;
case 0x53ad07:c.instructions+=3;goto B53ad07;
case 0x53ad0a:c.instructions+=2;goto B53ad0a;
case 0x53ad0c:c.instructions+=1;goto B53ad0c;
case 0x53ad11:goto L53ad11;
case 0x53ad13:c.instructions+=3;goto B53ad13;
case 0x53ad16:c.instructions+=2;goto B53ad16;
case 0x53ad18:c.instructions+=1;goto B53ad18;
case 0x53ad1a:goto L53ad1a;
case 0x53ad1b:c.instructions+=2;goto B53ad1b;
case 0x53ad1d:c.instructions+=1;goto B53ad1d;
case 0x53ad22:goto L53ad22;
case 0x53ad23:c.instructions+=2;goto B53ad23;
case 0x53ad27:c.instructions+=1;goto B53ad27;
case 0x53ad2c:goto L53ad2c;
case 0x53ad2f:c.instructions+=20;goto B53ad2f;
case 0x53ad33:c.instructions+=19;goto B53ad33;
case 0x53ad36:c.instructions+=18;goto B53ad36;
case 0x53ad3b:c.instructions+=17;goto B53ad3b;
case 0x53ad3e:c.instructions+=16;goto B53ad3e;
case 0x53ad41:c.instructions+=15;goto B53ad41;
case 0x53ad44:c.instructions+=14;goto B53ad44;
case 0x53ad47:c.instructions+=13;goto B53ad47;
case 0x53ad4b:c.instructions+=12;goto B53ad4b;
case 0x53ad4e:c.instructions+=11;goto B53ad4e;
case 0x53ad51:c.instructions+=10;goto B53ad51;
case 0x53ad54:c.instructions+=9;goto B53ad54;
case 0x53ad57:c.instructions+=8;goto B53ad57;
case 0x53ad5a:c.instructions+=7;goto B53ad5a;
case 0x53ad5d:c.instructions+=6;goto B53ad5d;
case 0x53ad60:c.instructions+=5;goto B53ad60;
case 0x53ad64:c.instructions+=4;goto B53ad64;
case 0x53ad6a:c.instructions+=3;goto B53ad6a;
case 0x53ad6d:c.instructions+=2;goto B53ad6d;
case 0x53ad71:c.instructions+=1;goto B53ad71;
case 0x53ad73:goto L53ad73;
case 0x53ad75:goto L53ad75;
case 0x53ad77:c.instructions+=3;goto B53ad77;
case 0x53ad78:c.instructions+=2;goto B53ad78;
case 0x53ad7a:c.instructions+=1;goto B53ad7a;
case 0x53ad7d:goto L53ad7d;
case 0x53ad81:c.instructions+=4;goto B53ad81;
case 0x53ad83:c.instructions+=3;goto B53ad83;
case 0x53ad87:c.instructions+=2;goto B53ad87;
case 0x53ad8b:c.instructions+=1;goto B53ad8b;
case 0x53ad91:goto L53ad91;
case 0x53ad94:c.instructions+=3;goto B53ad94;
case 0x53ad97:c.instructions+=2;goto B53ad97;
case 0x53ad98:c.instructions+=1;goto B53ad98;
case 0x53ad9b:goto L53ad9b;
case 0x53ad9d:c.instructions+=2;goto B53ad9d;
case 0x53ad9f:c.instructions+=1;goto B53ad9f;
case 0x53ada2:goto L53ada2;
case 0x53ada6:goto L53ada6;
case 0x53adaa:c.instructions+=3;goto B53adaa;
case 0x53adac:c.instructions+=2;goto B53adac;
case 0x53adb4:c.instructions+=1;goto B53adb4;
case 0x53adb6:goto L53adb6;
case 0x53adb8:c.instructions+=6;goto B53adb8;
case 0x53adba:c.instructions+=5;goto B53adba;
case 0x53adbd:c.instructions+=4;goto B53adbd;
case 0x53adbf:c.instructions+=3;goto B53adbf;
case 0x53adc0:c.instructions+=2;goto B53adc0;
case 0x53adc3:c.instructions+=1;goto B53adc3;
case 0x53adc8:goto L53adc8;
case 0x53adcc:c.instructions+=4;goto B53adcc;
case 0x53add0:c.instructions+=3;goto B53add0;
case 0x53add3:c.instructions+=2;goto B53add3;
case 0x53add5:c.instructions+=1;goto B53add5;
case 0x53add7:goto L53add7;
case 0x53addb:c.instructions+=6;goto B53addb;
case 0x53addc:c.instructions+=5;goto B53addc;
case 0x53addd:c.instructions+=4;goto B53addd;
case 0x53adde:c.instructions+=3;goto B53adde;
case 0x53ade5:c.instructions+=2;goto B53ade5;
case 0x53ade8:c.instructions+=1;goto B53ade8;
case 0x53adf0:goto L53adf0;
case 0x53adf2:c.instructions+=32;goto B53adf2;
case 0x53adf7:c.instructions+=31;goto B53adf7;
case 0x53adfd:c.instructions+=30;goto B53adfd;
case 0x53adfe:c.instructions+=29;goto B53adfe;
case 0x53ae05:c.instructions+=28;goto B53ae05;
case 0x53ae06:c.instructions+=27;goto B53ae06;
case 0x53ae07:c.instructions+=26;goto B53ae07;
case 0x53ae09:c.instructions+=25;goto B53ae09;
case 0x53ae0c:c.instructions+=24;goto B53ae0c;
case 0x53ae0d:c.instructions+=23;goto B53ae0d;
case 0x53ae0f:c.instructions+=22;goto B53ae0f;
case 0x53ae12:c.instructions+=21;goto B53ae12;
case 0x53ae15:c.instructions+=20;goto B53ae15;
case 0x53ae18:c.instructions+=19;goto B53ae18;
case 0x53ae1a:c.instructions+=18;goto B53ae1a;
case 0x53ae1d:c.instructions+=17;goto B53ae1d;
case 0x53ae20:c.instructions+=16;goto B53ae20;
case 0x53ae23:c.instructions+=15;goto B53ae23;
case 0x53ae26:c.instructions+=14;goto B53ae26;
case 0x53ae29:c.instructions+=13;goto B53ae29;
case 0x53ae2c:c.instructions+=12;goto B53ae2c;
case 0x53ae2f:c.instructions+=11;goto B53ae2f;
case 0x53ae32:c.instructions+=10;goto B53ae32;
case 0x53ae35:c.instructions+=9;goto B53ae35;
case 0x53ae3c:c.instructions+=8;goto B53ae3c;
case 0x53ae3f:c.instructions+=7;goto B53ae3f;
case 0x53ae42:c.instructions+=6;goto B53ae42;
case 0x53ae46:c.instructions+=5;goto B53ae46;
case 0x53ae48:c.instructions+=4;goto B53ae48;
case 0x53ae4b:c.instructions+=3;goto B53ae4b;
case 0x53ae4e:c.instructions+=2;goto B53ae4e;
case 0x53ae52:c.instructions+=1;goto B53ae52;
case 0x53ae57:goto L53ae57;
case 0x53ae5d:c.instructions+=2;goto B53ae5d;
case 0x53ae62:c.instructions+=1;goto B53ae62;
case 0x53ae67:goto L53ae67;
case 0x53ae6b:c.instructions+=10;goto B53ae6b;
case 0x53ae71:c.instructions+=9;goto B53ae71;
case 0x53ae77:c.instructions+=8;goto B53ae77;
case 0x53ae7d:c.instructions+=7;goto B53ae7d;
case 0x53ae83:c.instructions+=6;goto B53ae83;
case 0x53ae85:c.instructions+=5;goto B53ae85;
case 0x53ae86:c.instructions+=4;goto B53ae86;
case 0x53ae87:c.instructions+=3;goto B53ae87;
case 0x53ae8e:c.instructions+=2;goto B53ae8e;
case 0x53ae91:c.instructions+=1;goto B53ae91;
case 0x53aea0:goto L53aea0;
case 0x53aea1:c.instructions+=7;goto B53aea1;
case 0x53aea3:c.instructions+=6;goto B53aea3;
case 0x53aea4:c.instructions+=5;goto B53aea4;
case 0x53aea5:c.instructions+=4;goto B53aea5;
case 0x53aea6:c.instructions+=3;goto B53aea6;
case 0x53aea9:c.instructions+=2;goto B53aea9;
case 0x53aeaa:c.instructions+=1;goto B53aeaa;
case 0x53aeaf:goto L53aeaf;
case 0x53aeb5:c.instructions+=3;goto B53aeb5;
case 0x53aeb7:c.instructions+=2;goto B53aeb7;
case 0x53aeba:c.instructions+=1;goto B53aeba;
case 0x53aebd:goto L53aebd;
case 0x53aebf:c.instructions+=6;goto B53aebf;
case 0x53aec1:c.instructions+=5;goto B53aec1;
case 0x53aec3:c.instructions+=4;goto B53aec3;
case 0x53aec4:c.instructions+=3;goto B53aec4;
case 0x53aec5:c.instructions+=2;goto B53aec5;
case 0x53aeca:c.instructions+=1;goto B53aeca;
case 0x53aecf:goto L53aecf;
case 0x53aed1:c.instructions+=2;goto B53aed1;
case 0x53aed3:c.instructions+=1;goto B53aed3;
case 0x53aed5:goto L53aed5;
case 0x53aedb:c.instructions+=4;goto B53aedb;
case 0x53aedc:c.instructions+=3;goto B53aedc;
case 0x53aedd:c.instructions+=2;goto B53aedd;
case 0x53aede:c.instructions+=1;goto B53aede;
case 0x53aee3:goto L53aee3;
case 0x53aee4:c.instructions+=1;goto B53aee4;
case 0x53aee9:goto L53aee9;
case 0x53aeec:c.instructions+=2;goto B53aeec;
case 0x53aeee:c.instructions+=1;goto B53aeee;
case 0x53aef0:goto L53aef0;
case 0x53aef4:c.instructions+=1;goto B53aef4;
case 0x53aef6:goto L53aef6;
case 0x53aef8:c.instructions+=6;goto B53aef8;
case 0x53aefa:c.instructions+=5;goto B53aefa;
case 0x53aefb:c.instructions+=4;goto B53aefb;
case 0x53aefc:c.instructions+=3;goto B53aefc;
case 0x53aefd:c.instructions+=2;goto B53aefd;
case 0x53af02:c.instructions+=1;goto B53af02;
case 0x53af07:goto L53af07;
case 0x53af09:c.instructions+=2;goto B53af09;
case 0x53af0b:c.instructions+=1;goto B53af0b;
case 0x53af0d:goto L53af0d;
case 0x53af0e:c.instructions+=5;goto B53af0e;
case 0x53af0f:c.instructions+=4;goto B53af0f;
case 0x53af11:c.instructions+=3;goto B53af11;
case 0x53af12:c.instructions+=2;goto B53af12;
case 0x53af13:c.instructions+=1;goto B53af13;
case 0x53af16:goto L53af16;
case 0x53af17:c.instructions+=5;goto B53af17;
case 0x53af19:c.instructions+=4;goto B53af19;
case 0x53af1a:c.instructions+=3;goto B53af1a;
case 0x53af1b:c.instructions+=2;goto B53af1b;
case 0x53af1c:c.instructions+=1;goto B53af1c;
case 0x53af20:goto L53af20;
case 0x53af26:c.instructions+=8;goto B53af26;
case 0x53af28:c.instructions+=7;goto B53af28;
case 0x53af2d:c.instructions+=6;goto B53af2d;
case 0x53af2e:c.instructions+=5;goto B53af2e;
case 0x53af32:c.instructions+=4;goto B53af32;
case 0x53af39:c.instructions+=3;goto B53af39;
case 0x53af3c:c.instructions+=2;goto B53af3c;
case 0x53af3e:c.instructions+=1;goto B53af3e;
case 0x53af44:goto L53af44;
case 0x53af47:c.instructions+=6;goto B53af47;
case 0x53af48:c.instructions+=5;goto B53af48;
case 0x53af4c:c.instructions+=4;goto B53af4c;
case 0x53af4d:c.instructions+=3;goto B53af4d;
case 0x53af50:c.instructions+=2;goto B53af50;
case 0x53af52:c.instructions+=1;goto B53af52;
case 0x53af58:goto L53af58;
case 0x53af59:c.instructions+=9;goto B53af59;
case 0x53af5a:c.instructions+=8;goto B53af5a;
case 0x53af5e:c.instructions+=7;goto B53af5e;
case 0x53af62:c.instructions+=6;goto B53af62;
case 0x53af66:c.instructions+=5;goto B53af66;
case 0x53af6a:c.instructions+=4;goto B53af6a;
case 0x53af6c:c.instructions+=3;goto B53af6c;
case 0x53af6e:c.instructions+=2;goto B53af6e;
case 0x53af76:c.instructions+=1;goto B53af76;
case 0x53af78:goto L53af78;
case 0x53af7b:c.instructions+=1;goto B53af7b;
case 0x53af7d:goto L53af7d;
case 0x53af7f:c.instructions+=1;goto B53af7f;
case 0x53af84:goto L53af84;
case 0x53af87:c.instructions+=2;goto B53af87;
case 0x53af89:c.instructions+=1;goto B53af89;
case 0x53af8b:goto L53af8b;
case 0x53af8e:c.instructions+=4;goto B53af8e;
case 0x53af91:c.instructions+=3;goto B53af91;
case 0x53af94:c.instructions+=2;goto B53af94;
case 0x53af97:c.instructions+=1;goto B53af97;
case 0x53af99:goto L53af99;
case 0x53af9b:goto L53af9b;
case 0x53af9f:c.instructions+=6;goto B53af9f;
case 0x53afa1:c.instructions+=5;goto B53afa1;
case 0x53afa5:c.instructions+=4;goto B53afa5;
case 0x53afa8:c.instructions+=3;goto B53afa8;
case 0x53afac:c.instructions+=2;goto B53afac;
case 0x53afae:c.instructions+=1;goto B53afae;
case 0x53afb2:goto L53afb2;
case 0x53afb4:c.instructions+=2;goto B53afb4;
case 0x53afb6:c.instructions+=1;goto B53afb6;
case 0x53afb8:goto L53afb8;
case 0x53afba:c.instructions+=2;goto B53afba;
case 0x53afbc:c.instructions+=1;goto B53afbc;
case 0x53afbe:goto L53afbe;
case 0x53afc0:goto L53afc0;
case 0x53afc2:c.instructions+=5;goto B53afc2;
case 0x53afc5:c.instructions+=4;goto B53afc5;
case 0x53afc7:c.instructions+=3;goto B53afc7;
case 0x53afc8:c.instructions+=2;goto B53afc8;
case 0x53afcb:c.instructions+=1;goto B53afcb;
case 0x53afd0:goto L53afd0;
case 0x53afd2:c.instructions+=3;goto B53afd2;
case 0x53afd5:c.instructions+=2;goto B53afd5;
case 0x53afd7:c.instructions+=1;goto B53afd7;
case 0x53afd9:goto L53afd9;
case 0x53afdd:goto L53afdd;
case 0x53afe1:c.instructions+=1;goto B53afe1;
case 0x53afe6:goto L53afe6;
case 0x53afe8:c.instructions+=2;goto B53afe8;
case 0x53afea:c.instructions+=1;goto B53afea;
case 0x53afec:goto L53afec;
case 0x53aff0:c.instructions+=2;goto B53aff0;
case 0x53aff2:c.instructions+=1;goto B53aff2;
case 0x53aff7:goto L53aff7;
case 0x53affa:c.instructions+=2;goto B53affa;
case 0x53affc:c.instructions+=1;goto B53affc;
case 0x53affe:goto L53affe;
default:missing_instruction(c.pc);}
B53a000:L53a000:{c.instructions+=2;NFSU2_TR(0x53a000);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a004:{NFSU2_TR(0x53a004);
if(r1(R+518)){{goto L53a021;}}
}
B53a006:L53a006:{c.instructions+=7;NFSU2_TR(0x53a006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53a008:{NFSU2_TR(0x53a008);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B53a00a:{NFSU2_TR(0x53a00a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53a00d:{NFSU2_TR(0x53a00d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B53a00f:{NFSU2_TR(0x53a00f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a010:{NFSU2_TR(0x53a010);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a013:{NFSU2_TR(0x53a013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a018ull));
TAIL_STATIC(0x440ef0u,440);
}
B53a018:L53a018:{c.instructions+=4;NFSU2_TR(0x53a018);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53a01a:{NFSU2_TR(0x53a01a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53a01d:{NFSU2_TR(0x53a01d);
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
B53a01f:{NFSU2_TR(0x53a01f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53a006u);}goto L53a006;}}
}
B53a021:L53a021:{c.instructions+=4;NFSU2_TR(0x53a021);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a024:{NFSU2_TR(0x53a024);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B53a027:{NFSU2_TR(0x53a027);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a028:{NFSU2_TR(0x53a028);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a02dull));
TAIL_STATIC(0x60fee0u,60f);
}
B53a02d:L53a02d:{c.instructions+=2;NFSU2_TR(0x53a02d);
u8 U[4];
w4(U+0,u32(0x79b548ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a032:{NFSU2_TR(0x53a032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a037ull));
TAIL_STATIC(0x43db50u,43d);
}
B53a037:L53a037:{c.instructions+=4;NFSU2_TR(0x53a037);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B53a03d:{NFSU2_TR(0x53a03d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53a03f:{NFSU2_TR(0x53a03f);
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
B53a042:{NFSU2_TR(0x53a042);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a045ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53a045:L53a045:{c.instructions+=7;NFSU2_TR(0x53a045);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a047:{NFSU2_TR(0x53a047);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a049:{NFSU2_TR(0x53a049);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a04a:{NFSU2_TR(0x53a04a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a04b:{NFSU2_TR(0x53a04b);
w4(R+4,u32(0x8a2b68ull));
}
B53a050:{NFSU2_TR(0x53a050);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a054:{NFSU2_TR(0x53a054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a059ull));
TAIL_STATIC(0x61ba30u,61b);
}
B53a059:L53a059:{c.instructions+=3;NFSU2_TR(0x53a059);
__builtin_memmove((R+24),(R+0),4);
}
B53a05b:{NFSU2_TR(0x53a05b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53a05d:{NFSU2_TR(0x53a05d);
if(r1(R+518)){{goto L53a096;}}
}
B53a05f:L53a05f:{c.instructions+=1;NFSU2_TR(0x53a05f);
}
B53a060:L53a060:{c.instructions+=3;NFSU2_TR(0x53a060);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a061:{NFSU2_TR(0x53a061);
__builtin_memmove((R+4),(R+28),4);
}
B53a063:{NFSU2_TR(0x53a063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a068ull));
TAIL_STATIC(0x479130u,479);
}
B53a068:L53a068:{c.instructions+=8;NFSU2_TR(0x53a068);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a06c:{NFSU2_TR(0x53a06c);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a06e:{NFSU2_TR(0x53a06e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a070:{NFSU2_TR(0x53a070);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a071:{NFSU2_TR(0x53a071);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a072:{NFSU2_TR(0x53a072);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a073:{NFSU2_TR(0x53a073);
w4(R+4,u32(0x8a2b68ull));
}
B53a078:{NFSU2_TR(0x53a078);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a07dull));
TAIL_STATIC(0x61ba50u,61b);
}
B53a07d:L53a07d:{c.instructions+=3;NFSU2_TR(0x53a07d);
__builtin_memmove((R+24),(R+0),4);
}
B53a07f:{NFSU2_TR(0x53a07f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53a081:{NFSU2_TR(0x53a081);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53a060u);}goto L53a060;}}
}
B53a083:L53a083:{c.instructions+=8;NFSU2_TR(0x53a083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B53a085:{NFSU2_TR(0x53a085);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53a089:{NFSU2_TR(0x53a089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53a08a:{NFSU2_TR(0x53a08a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a08b:{NFSU2_TR(0x53a08b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a091:{NFSU2_TR(0x53a091);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53a092:{NFSU2_TR(0x53a092);
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
B53a095:{NFSU2_TR(0x53a095);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a096:L53a096:{c.instructions+=8;NFSU2_TR(0x53a096);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53a098:{NFSU2_TR(0x53a098);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a09c:{NFSU2_TR(0x53a09c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53a09d:{NFSU2_TR(0x53a09d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a09e:{NFSU2_TR(0x53a09e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a0a4:{NFSU2_TR(0x53a0a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53a0a5:{NFSU2_TR(0x53a0a5);
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
B53a0a8:{NFSU2_TR(0x53a0a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a0b0:L53a0b0:{c.instructions+=8;NFSU2_TR(0x53a0b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a0b1:{NFSU2_TR(0x53a0b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a0b2:{NFSU2_TR(0x53a0b2);
__builtin_memmove((R+24),(R+4),4);
}
B53a0b4:{NFSU2_TR(0x53a0b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a0b7:{NFSU2_TR(0x53a0b7);
u8 U[4];
w4(U+0,u32(0x79be28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a0bc:{NFSU2_TR(0x53a0bc);
u8 U[4];
w4(U+0,u32(0x36db742ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a0c1:{NFSU2_TR(0x53a0c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a0c2:{NFSU2_TR(0x53a0c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a0c7ull));
TAIL_STATIC(0x537b80u,537);
}
B53a0c7:L53a0c7:{c.instructions+=5;NFSU2_TR(0x53a0c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a0ca:{NFSU2_TR(0x53a0ca);
u8 U[4];
w4(U+0,u32(0x79be18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a0cf:{NFSU2_TR(0x53a0cf);
u8 U[4];
w4(U+0,u32(0x36db743ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a0d4:{NFSU2_TR(0x53a0d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a0d5:{NFSU2_TR(0x53a0d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a0daull));
TAIL_STATIC(0x537b80u,537);
}
B53a0da:L53a0da:{c.instructions+=7;NFSU2_TR(0x53a0da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53a0dd:{NFSU2_TR(0x53a0dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a0e0:{NFSU2_TR(0x53a0e0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B53a0e3:{NFSU2_TR(0x53a0e3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a0e4:{NFSU2_TR(0x53a0e4);
u8 U[4];
w4(U+0,u32(0x3e40712ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a0e9:{NFSU2_TR(0x53a0e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a0ea:{NFSU2_TR(0x53a0ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a0efull));
TAIL_STATIC(0x537b80u,537);
}
B53a0ef:L53a0ef:{c.instructions+=7;NFSU2_TR(0x53a0ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a0f2:{NFSU2_TR(0x53a0f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53a0f5:{NFSU2_TR(0x53a0f5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B53a0f8:{NFSU2_TR(0x53a0f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a0f9:{NFSU2_TR(0x53a0f9);
u8 U[4];
w4(U+0,u32(0x3e40713ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a0fe:{NFSU2_TR(0x53a0fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a0ff:{NFSU2_TR(0x53a0ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a104ull));
TAIL_STATIC(0x537b80u,537);
}
B53a104:L53a104:{c.instructions+=5;NFSU2_TR(0x53a104);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a10a:{NFSU2_TR(0x53a10a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((R+12),(U+0),4);
}
B53a10d:{NFSU2_TR(0x53a10d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B53a110:{NFSU2_TR(0x53a110);
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
B53a112:{NFSU2_TR(0x53a112);
if(r1(R+518)){{goto L53a1d5;}}
}
B53a118:L53a118:{c.instructions+=5;NFSU2_TR(0x53a118);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a119:{NFSU2_TR(0x53a119);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a11a:{NFSU2_TR(0x53a11a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53a11d:{NFSU2_TR(0x53a11d);
__builtin_memmove((R+4),(R+28),4);
}
B53a11f:{NFSU2_TR(0x53a11f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a124ull));
TAIL_STATIC(0x610010u,610);
}
B53a124:L53a124:{c.instructions+=2;NFSU2_TR(0x53a124);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a125:{NFSU2_TR(0x53a125);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a12aull));
TAIL_STATIC(0x610130u,610);
}
B53a12a:L53a12a:{c.instructions+=6;NFSU2_TR(0x53a12a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a12b:{NFSU2_TR(0x53a12b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a12e:{NFSU2_TR(0x53a12e);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a133:{NFSU2_TR(0x53a133);
u8 U[4];
w4(U+0,u32(0xd6d32016ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a138:{NFSU2_TR(0x53a138);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a139:{NFSU2_TR(0x53a139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a13eull));
TAIL_STATIC(0x537b80u,537);
}
B53a13e:L53a13e:{c.instructions+=4;NFSU2_TR(0x53a13e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B53a142:{NFSU2_TR(0x53a142);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B53a145:{NFSU2_TR(0x53a145);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a146:{NFSU2_TR(0x53a146);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a14bull));
TAIL_STATIC(0x6105c0u,610);
}
B53a14b:L53a14b:{c.instructions+=5;NFSU2_TR(0x53a14b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a14c:{NFSU2_TR(0x53a14c);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a151:{NFSU2_TR(0x53a151);
u8 U[4];
w4(U+0,u32(0xeffe7224ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a156:{NFSU2_TR(0x53a156);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a157:{NFSU2_TR(0x53a157);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a15cull));
TAIL_STATIC(0x537b80u,537);
}
B53a15c:L53a15c:{c.instructions+=4;NFSU2_TR(0x53a15c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B53a15f:{NFSU2_TR(0x53a15f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53a162:{NFSU2_TR(0x53a162);
__builtin_memmove((R+4),(R+28),4);
}
B53a164:{NFSU2_TR(0x53a164);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a169ull));
TAIL_STATIC(0x610000u,610);
}
B53a169:L53a169:{c.instructions+=5;NFSU2_TR(0x53a169);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a16a:{NFSU2_TR(0x53a16a);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a16f:{NFSU2_TR(0x53a16f);
u8 U[4];
w4(U+0,u32(0xb1027477ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a174:{NFSU2_TR(0x53a174);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a175:{NFSU2_TR(0x53a175);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a17aull));
TAIL_STATIC(0x537b80u,537);
}
B53a17a:L53a17a:{c.instructions+=10;NFSU2_TR(0x53a17a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B53a17e:{NFSU2_TR(0x53a17e);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+0,u32(r2(U+0)));
}
B53a181:{NFSU2_TR(0x53a181);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a184:{NFSU2_TR(0x53a184);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B53a187:{NFSU2_TR(0x53a187);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B53a189:{NFSU2_TR(0x53a189);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a18a:{NFSU2_TR(0x53a18a);
u8 U[4];
w4(U+0,u32(0x79be10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a18f:{NFSU2_TR(0x53a18f);
u8 U[4];
w4(U+0,u32(0x6a81554ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a194:{NFSU2_TR(0x53a194);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a195:{NFSU2_TR(0x53a195);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a19aull));
TAIL_STATIC(0x537b80u,537);
}
B53a19a:L53a19a:{c.instructions+=5;NFSU2_TR(0x53a19a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a1a0:{NFSU2_TR(0x53a1a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B53a1a3:{NFSU2_TR(0x53a1a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a1a4:{NFSU2_TR(0x53a1a4);
__builtin_memmove((R+4),(R+12),4);
}
B53a1a6:{NFSU2_TR(0x53a1a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a1abull));
TAIL_STATIC(0x43be80u,43b);
}
B53a1ab:L53a1ab:{c.instructions+=6;NFSU2_TR(0x53a1ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53a1ae:{NFSU2_TR(0x53a1ae);
__builtin_memmove((R+28),(R+0),4);
}
B53a1b0:{NFSU2_TR(0x53a1b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a1b2:{NFSU2_TR(0x53a1b2);
__builtin_memmove((R+4),(R+12),4);
}
B53a1b4:{NFSU2_TR(0x53a1b4);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B53a1b5:{NFSU2_TR(0x53a1b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a1baull));
TAIL_STATIC(0x43be80u,43b);
}
B53a1ba:L53a1ba:{c.instructions+=7;NFSU2_TR(0x53a1ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a1bb:{NFSU2_TR(0x53a1bb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B53a1bc:{NFSU2_TR(0x53a1bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a1bd:{NFSU2_TR(0x53a1bd);
u8 U[4];
w4(U+0,u32(0x79bdfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a1c2:{NFSU2_TR(0x53a1c2);
u8 U[4];
w4(U+0,u32(0x36db746ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a1c7:{NFSU2_TR(0x53a1c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a1c8:{NFSU2_TR(0x53a1c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a1cdull));
TAIL_STATIC(0x537b80u,537);
}
B53a1cd:L53a1cd:{c.instructions+=6;NFSU2_TR(0x53a1cd);
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
B53a1d0:{NFSU2_TR(0x53a1d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53a1d1:{NFSU2_TR(0x53a1d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53a1d2:{NFSU2_TR(0x53a1d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a1d3:{NFSU2_TR(0x53a1d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53a1d4:{NFSU2_TR(0x53a1d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a1d5:L53a1d5:{c.instructions+=5;NFSU2_TR(0x53a1d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53a1d8:{NFSU2_TR(0x53a1d8);
u8 U[4];
w4(U+0,u32(0x795b2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a1dd:{NFSU2_TR(0x53a1dd);
u8 U[4];
w4(U+0,u32(0xd6d32016ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a1e2:{NFSU2_TR(0x53a1e2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a1e3:{NFSU2_TR(0x53a1e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a1e8ull));
TAIL_STATIC(0x537b80u,537);
}
B53a1e8:L53a1e8:{c.instructions+=5;NFSU2_TR(0x53a1e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a1eb:{NFSU2_TR(0x53a1eb);
u8 U[4];
w4(U+0,u32(0x795b2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a1f0:{NFSU2_TR(0x53a1f0);
u8 U[4];
w4(U+0,u32(0xeffe7224ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a1f5:{NFSU2_TR(0x53a1f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a1f6:{NFSU2_TR(0x53a1f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a1fbull));
TAIL_STATIC(0x537b80u,537);
}
B53a1fb:L53a1fb:{c.instructions+=5;NFSU2_TR(0x53a1fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a1fe:{NFSU2_TR(0x53a1fe);
u8 U[4];
w4(U+0,u32(0x795b2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a203:{NFSU2_TR(0x53a203);
u8 U[4];
w4(U+0,u32(0xb1027477ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a208:{NFSU2_TR(0x53a208);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a209:{NFSU2_TR(0x53a209);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a20eull));
TAIL_STATIC(0x537b80u,537);
}
B53a20e:L53a20e:{c.instructions+=5;NFSU2_TR(0x53a20e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53a211:{NFSU2_TR(0x53a211);
u8 U[4];
w4(U+0,u32(0x795b2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a216:{NFSU2_TR(0x53a216);
u8 U[4];
w4(U+0,u32(0x6a81554ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a21b:{NFSU2_TR(0x53a21b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a21c:{NFSU2_TR(0x53a21c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a221ull));
TAIL_STATIC(0x537b80u,537);
}
B53a221:L53a221:{c.instructions+=5;NFSU2_TR(0x53a221);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a224:{NFSU2_TR(0x53a224);
u8 U[4];
w4(U+0,u32(0x79bde8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a229:{NFSU2_TR(0x53a229);
u8 U[4];
w4(U+0,u32(0x36db746ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a22e:{NFSU2_TR(0x53a22e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a22f:{NFSU2_TR(0x53a22f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a234ull));
TAIL_STATIC(0x537b80u,537);
}
B53a234:L53a234:{c.instructions+=4;NFSU2_TR(0x53a234);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53a237:{NFSU2_TR(0x53a237);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a238:{NFSU2_TR(0x53a238);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53a239:{NFSU2_TR(0x53a239);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a240:L53a240:{c.instructions+=6;NFSU2_TR(0x53a240);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a241:{NFSU2_TR(0x53a241);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a244:{NFSU2_TR(0x53a244);
u8 U[4];
w4(U+0,u32(0x79be30ull));
s4(u32(r4(R+4)),r4(U+0));
}
B53a24a:{NFSU2_TR(0x53a24a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53a24c:{NFSU2_TR(0x53a24c);
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
B53a24e:{NFSU2_TR(0x53a24e);
if(r1(R+518)){{goto L53a269;}}
}
B53a250:L53a250:{c.instructions+=6;NFSU2_TR(0x53a250);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B53a252:{NFSU2_TR(0x53a252);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53a255:{NFSU2_TR(0x53a255);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B53a257:{NFSU2_TR(0x53a257);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a258:{NFSU2_TR(0x53a258);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a25b:{NFSU2_TR(0x53a25b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a260ull));
TAIL_STATIC(0x440ef0u,440);
}
B53a260:L53a260:{c.instructions+=4;NFSU2_TR(0x53a260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53a262:{NFSU2_TR(0x53a262);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53a265:{NFSU2_TR(0x53a265);
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
B53a267:{NFSU2_TR(0x53a267);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53a250u);}goto L53a250;}}
}
B53a269:L53a269:{c.instructions+=2;NFSU2_TR(0x53a269);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a26a:{NFSU2_TR(0x53a26a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a270:L53a270:{c.instructions+=4;NFSU2_TR(0x53a270);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a271:{NFSU2_TR(0x53a271);
__builtin_memmove((R+20),(R+16),4);
}
B53a273:{NFSU2_TR(0x53a273);
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
B53a27a:{NFSU2_TR(0x53a27a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53a2ac;}}
}
B53a27c:L53a27c:{c.instructions+=2;NFSU2_TR(0x53a27c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53a280:{NFSU2_TR(0x53a280);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53a28c;}}
}
B53a282:L53a282:{c.instructions+=1;NFSU2_TR(0x53a282);
s4(0x838998,u32(0x0ull));
}
B53a28c:L53a28c:{c.instructions+=8;NFSU2_TR(0x53a28c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a28f:{NFSU2_TR(0x53a28f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a292:{NFSU2_TR(0x53a292);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a294:{NFSU2_TR(0x53a294);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a299:{NFSU2_TR(0x53a299);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a29e:{NFSU2_TR(0x53a29e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a29f:{NFSU2_TR(0x53a29f);
__builtin_memmove(gp(0x838990),(R+0),4);
}
B53a2a4:{NFSU2_TR(0x53a2a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a2a9ull));
TAIL_STATIC(0x537c60u,537);
}
B53a2a9:L53a2a9:{c.instructions+=1;NFSU2_TR(0x53a2a9);
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
B53a2ac:L53a2ac:{c.instructions+=2;NFSU2_TR(0x53a2ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53a2ad:{NFSU2_TR(0x53a2ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a2b0:L53a2b0:{c.instructions+=3;NFSU2_TR(0x53a2b0);
__builtin_memmove((R+0),gp(0x7fa1b8),4);
}
B53a2b5:{NFSU2_TR(0x53a2b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a2b6:{NFSU2_TR(0x53a2b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a2bbull));
TAIL_STATIC(0x52cef0u,52c);
}
B53a2bb:L53a2bb:{c.instructions+=4;NFSU2_TR(0x53a2bb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B53a2bd:{NFSU2_TR(0x53a2bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53a2c0:{NFSU2_TR(0x53a2c0);
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
B53a2c2:{NFSU2_TR(0x53a2c2);
if(r1(R+518)){{goto L53a2d0;}}
}
B53a2c4:L53a2c4:{c.instructions+=4;NFSU2_TR(0x53a2c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a2c7:{NFSU2_TR(0x53a2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a2ca:{NFSU2_TR(0x53a2ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a2cd:{NFSU2_TR(0x53a2cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a2d0:L53a2d0:{c.instructions+=1;NFSU2_TR(0x53a2d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a2e0:L53a2e0:{c.instructions+=3;NFSU2_TR(0x53a2e0);
__builtin_memmove((R+0),gp(0x7fa1b8),4);
}
B53a2e5:{NFSU2_TR(0x53a2e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a2e6:{NFSU2_TR(0x53a2e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a2ebull));
TAIL_STATIC(0x52cef0u,52c);
}
B53a2eb:L53a2eb:{c.instructions+=3;NFSU2_TR(0x53a2eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53a2ee:{NFSU2_TR(0x53a2ee);
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
B53a2f0:{NFSU2_TR(0x53a2f0);
if(r1(R+518)){{goto L53a303;}}
}
B53a2f2:L53a2f2:{c.instructions+=5;NFSU2_TR(0x53a2f2);
w4(R+4,u32(0xffull));
}
B53a2f7:{NFSU2_TR(0x53a2f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a2fa:{NFSU2_TR(0x53a2fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a2fd:{NFSU2_TR(0x53a2fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a300:{NFSU2_TR(0x53a300);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a303:L53a303:{c.instructions+=1;NFSU2_TR(0x53a303);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a310:L53a310:{c.instructions+=7;NFSU2_TR(0x53a310);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a311:{NFSU2_TR(0x53a311);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a312:{NFSU2_TR(0x53a312);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a313:{NFSU2_TR(0x53a313);
__builtin_memmove((R+24),(R+4),4);
}
B53a315:{NFSU2_TR(0x53a315);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B53a31b:{NFSU2_TR(0x53a31b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a31d:{NFSU2_TR(0x53a31d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a322ull));
TAIL_STATIC(0x458520u,458);
}
B53a322:L53a322:{c.instructions+=11;NFSU2_TR(0x53a322);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53a324:{NFSU2_TR(0x53a324);
w1(R+0,u8(0x1ull));
}
B53a326:{NFSU2_TR(0x53a326);
__builtin_memmove(gp(0x839bc0),(R+0),1);
}
B53a32b:{NFSU2_TR(0x53a32b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a331:{NFSU2_TR(0x53a331);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a337:{NFSU2_TR(0x53a337);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a33a:{NFSU2_TR(0x53a33a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdfull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a340:{NFSU2_TR(0x53a340);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a346:{NFSU2_TR(0x53a346);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53a349:{NFSU2_TR(0x53a349);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a34b:{NFSU2_TR(0x53a34b);
if(r1(R+518)){{goto L53a36a;}}
}
B53a34d:L53a34d:{c.instructions+=2;NFSU2_TR(0x53a34d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a34e:{NFSU2_TR(0x53a34e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a353ull));
TAIL_STATIC(0x52cef0u,52c);
}
B53a353:L53a353:{c.instructions+=3;NFSU2_TR(0x53a353);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53a356:{NFSU2_TR(0x53a356);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a358:{NFSU2_TR(0x53a358);
if(r1(R+518)){{goto L53a36a;}}
}
B53a35a:L53a35a:{c.instructions+=3;NFSU2_TR(0x53a35a);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a35f:{NFSU2_TR(0x53a35f);
__builtin_memmove((R+4),(R+0),4);
}
B53a361:{NFSU2_TR(0x53a361);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a366ull));
TAIL_STATIC(0x517f80u,517);
}
B53a366:L53a366:{c.instructions+=2;NFSU2_TR(0x53a366);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a368:{NFSU2_TR(0x53a368);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53a381;}}
}
B53a36a:L53a36a:{c.instructions+=3;NFSU2_TR(0x53a36a);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B53a36f:{NFSU2_TR(0x53a36f);
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
B53a371:{NFSU2_TR(0x53a371);
if(r1(R+518)){{goto L53a3cb;}}
}
B53a373:L53a373:{c.instructions+=4;NFSU2_TR(0x53a373);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a376:{NFSU2_TR(0x53a376);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a377:{NFSU2_TR(0x53a377);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a37c:{NFSU2_TR(0x53a37c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a381ull));
TAIL_STATIC(0x52c570u,52c);
}
B53a381:L53a381:{c.instructions+=3;NFSU2_TR(0x53a381);
__builtin_memmove((R+28),(R+0),4);
}
B53a383:{NFSU2_TR(0x53a383);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B53a385:{NFSU2_TR(0x53a385);
if(r1(R+518)){{goto L53a3cb;}}
}
B53a387:L53a387:{c.instructions+=3;NFSU2_TR(0x53a387);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53a38a:{NFSU2_TR(0x53a38a);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B53a38c:{NFSU2_TR(0x53a38c);
if(r1(R+518)){{goto L53a3cb;}}
}
B53a38e:L53a38e:{c.instructions+=1;NFSU2_TR(0x53a38e);
__builtin_memmove((R+28),(R+28),4);
}
B53a390:L53a390:{c.instructions+=2;NFSU2_TR(0x53a390);
u8 U[4];
w4(U+0,u32(0x79be38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a395:{NFSU2_TR(0x53a395);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a39aull));
TAIL_STATIC(0x505450u,505);
}
B53a39a:L53a39a:{c.instructions+=4;NFSU2_TR(0x53a39a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a39d:{NFSU2_TR(0x53a39d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53a3a0:{NFSU2_TR(0x53a3a0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a3a2:{NFSU2_TR(0x53a3a2);
if(r1(R+518)){{goto L53a3af;}}
}
B53a3a4:L53a3a4:{c.instructions+=3;NFSU2_TR(0x53a3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53a3a7:{NFSU2_TR(0x53a3a7);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B53a3a9:{NFSU2_TR(0x53a3a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53a390u);}goto L53a390;}}
}
B53a3ab:L53a3ab:{c.instructions+=4;NFSU2_TR(0x53a3ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53a3ac:{NFSU2_TR(0x53a3ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a3ad:{NFSU2_TR(0x53a3ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53a3ae:{NFSU2_TR(0x53a3ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a3af:L53a3af:{c.instructions+=2;NFSU2_TR(0x53a3af);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B53a3b1:{NFSU2_TR(0x53a3b1);
if(r1(R+518)){{goto L53a3cb;}}
}
B53a3b3:L53a3b3:{c.instructions+=2;NFSU2_TR(0x53a3b3);
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
B53a3b6:{NFSU2_TR(0x53a3b6);
if(r1(R+518)){{goto L53a3c8;}}
}
B53a3b8:L53a3b8:{c.instructions+=3;NFSU2_TR(0x53a3b8);
__builtin_memmove((R+4),(R+28),4);
}
B53a3ba:{NFSU2_TR(0x53a3ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a3bd:{NFSU2_TR(0x53a3bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a3c2ull));
TAIL_STATIC(0x517720u,517);
}
B53a3c2:L53a3c2:{c.instructions+=2;NFSU2_TR(0x53a3c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a3c5:{NFSU2_TR(0x53a3c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a3c8:L53a3c8:{c.instructions+=1;NFSU2_TR(0x53a3c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a3cb:L53a3cb:{c.instructions+=4;NFSU2_TR(0x53a3cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53a3cc:{NFSU2_TR(0x53a3cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a3cd:{NFSU2_TR(0x53a3cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53a3ce:{NFSU2_TR(0x53a3ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a3d0:L53a3d0:{c.instructions+=7;NFSU2_TR(0x53a3d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a3d1:{NFSU2_TR(0x53a3d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a3d2:{NFSU2_TR(0x53a3d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a3d3:{NFSU2_TR(0x53a3d3);
__builtin_memmove((R+24),(R+4),4);
}
B53a3d5:{NFSU2_TR(0x53a3d5);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B53a3db:{NFSU2_TR(0x53a3db);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a3dd:{NFSU2_TR(0x53a3dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a3e2ull));
TAIL_STATIC(0x458520u,458);
}
B53a3e2:L53a3e2:{c.instructions+=9;NFSU2_TR(0x53a3e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a3e5:{NFSU2_TR(0x53a3e5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53a3e7:{NFSU2_TR(0x53a3e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a3e8:{NFSU2_TR(0x53a3e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a3ee:{NFSU2_TR(0x53a3ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53a3f5:{NFSU2_TR(0x53a3f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a3f8:{NFSU2_TR(0x53a3f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdfull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a3fe:{NFSU2_TR(0x53a3fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a404:{NFSU2_TR(0x53a404);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a409ull));
TAIL_STATIC(0x505450u,505);
}
B53a409:L53a409:{c.instructions+=2;NFSU2_TR(0x53a409);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a40a:{NFSU2_TR(0x53a40a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a40full));
TAIL_STATIC(0x50b840u,50b);
}
B53a40f:L53a40f:{c.instructions+=3;NFSU2_TR(0x53a40f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53a412:{NFSU2_TR(0x53a412);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a414:{NFSU2_TR(0x53a414);
if(r1(R+518)){{goto L53a41d;}}
}
B53a416:L53a416:{c.instructions+=1;NFSU2_TR(0x53a416);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x5eull));
s4(u32(r4(U+0)),r4(U+4));
}
B53a41d:L53a41d:{c.instructions+=3;NFSU2_TR(0x53a41d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53a420:{NFSU2_TR(0x53a420);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a422:{NFSU2_TR(0x53a422);
if(r1(R+518)){{goto L53a441;}}
}
B53a424:L53a424:{c.instructions+=2;NFSU2_TR(0x53a424);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a425:{NFSU2_TR(0x53a425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a42aull));
TAIL_STATIC(0x52cef0u,52c);
}
B53a42a:L53a42a:{c.instructions+=3;NFSU2_TR(0x53a42a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53a42d:{NFSU2_TR(0x53a42d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a42f:{NFSU2_TR(0x53a42f);
if(r1(R+518)){{goto L53a441;}}
}
B53a431:L53a431:{c.instructions+=3;NFSU2_TR(0x53a431);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a436:{NFSU2_TR(0x53a436);
__builtin_memmove((R+4),(R+0),4);
}
B53a438:{NFSU2_TR(0x53a438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a43dull));
TAIL_STATIC(0x517f80u,517);
}
B53a43d:L53a43d:{c.instructions+=2;NFSU2_TR(0x53a43d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a43f:{NFSU2_TR(0x53a43f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53a458;}}
}
B53a441:L53a441:{c.instructions+=3;NFSU2_TR(0x53a441);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B53a446:{NFSU2_TR(0x53a446);
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
B53a448:{NFSU2_TR(0x53a448);
if(r1(R+518)){{goto L53a4a0;}}
}
B53a44a:L53a44a:{c.instructions+=4;NFSU2_TR(0x53a44a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a44d:{NFSU2_TR(0x53a44d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a44e:{NFSU2_TR(0x53a44e);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a453:{NFSU2_TR(0x53a453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a458ull));
TAIL_STATIC(0x52c570u,52c);
}
B53a458:L53a458:{c.instructions+=3;NFSU2_TR(0x53a458);
__builtin_memmove((R+28),(R+0),4);
}
B53a45a:{NFSU2_TR(0x53a45a);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B53a45c:{NFSU2_TR(0x53a45c);
if(r1(R+518)){{goto L53a4a0;}}
}
B53a45e:L53a45e:{c.instructions+=3;NFSU2_TR(0x53a45e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53a461:{NFSU2_TR(0x53a461);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B53a463:{NFSU2_TR(0x53a463);
if(r1(R+518)){{goto L53a4a0;}}
}
B53a465:L53a465:{c.instructions+=2;NFSU2_TR(0x53a465);
u8 U[4];
w4(U+0,u32(0x79be38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a46a:{NFSU2_TR(0x53a46a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a46full));
TAIL_STATIC(0x505450u,505);
}
B53a46f:L53a46f:{c.instructions+=4;NFSU2_TR(0x53a46f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a472:{NFSU2_TR(0x53a472);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53a475:{NFSU2_TR(0x53a475);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a477:{NFSU2_TR(0x53a477);
if(r1(R+518)){{goto L53a484;}}
}
B53a479:L53a479:{c.instructions+=3;NFSU2_TR(0x53a479);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53a47c:{NFSU2_TR(0x53a47c);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B53a47e:{NFSU2_TR(0x53a47e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53a465u);}goto L53a465;}}
}
B53a480:L53a480:{c.instructions+=4;NFSU2_TR(0x53a480);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53a481:{NFSU2_TR(0x53a481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a482:{NFSU2_TR(0x53a482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53a483:{NFSU2_TR(0x53a483);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a484:L53a484:{c.instructions+=2;NFSU2_TR(0x53a484);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B53a486:{NFSU2_TR(0x53a486);
if(r1(R+518)){{goto L53a4a0;}}
}
B53a488:L53a488:{c.instructions+=2;NFSU2_TR(0x53a488);
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
B53a48b:{NFSU2_TR(0x53a48b);
if(r1(R+518)){{goto L53a49d;}}
}
B53a48d:L53a48d:{c.instructions+=3;NFSU2_TR(0x53a48d);
__builtin_memmove((R+4),(R+28),4);
}
B53a48f:{NFSU2_TR(0x53a48f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a492:{NFSU2_TR(0x53a492);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a497ull));
TAIL_STATIC(0x517720u,517);
}
B53a497:L53a497:{c.instructions+=2;NFSU2_TR(0x53a497);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a49a:{NFSU2_TR(0x53a49a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a49d:L53a49d:{c.instructions+=1;NFSU2_TR(0x53a49d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a4a0:L53a4a0:{c.instructions+=4;NFSU2_TR(0x53a4a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53a4a1:{NFSU2_TR(0x53a4a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a4a2:{NFSU2_TR(0x53a4a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53a4a3:{NFSU2_TR(0x53a4a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a4b0:L53a4b0:{c.instructions+=9;NFSU2_TR(0x53a4b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a4b1:{NFSU2_TR(0x53a4b1);
__builtin_memmove((R+20),(R+16),4);
}
B53a4b3:{NFSU2_TR(0x53a4b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B53a4b6:{NFSU2_TR(0x53a4b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a4b7:{NFSU2_TR(0x53a4b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a4b8:{NFSU2_TR(0x53a4b8);
__builtin_memmove((R+28),(R+4),4);
}
B53a4ba:{NFSU2_TR(0x53a4ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53a4c0:{NFSU2_TR(0x53a4c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a4c3:{NFSU2_TR(0x53a4c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a4c8ull));
TAIL_STATIC(0x5385c0u,538);
}
B53a4c8:L53a4c8:{c.instructions+=8;NFSU2_TR(0x53a4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a4cb:{NFSU2_TR(0x53a4cb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53a4cd:{NFSU2_TR(0x53a4cd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
}
B53a4d0:{NFSU2_TR(0x53a4d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a4d6:{NFSU2_TR(0x53a4d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B53a4d8:{NFSU2_TR(0x53a4d8);
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
B53a4da:{NFSU2_TR(0x53a4da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a4dd:{NFSU2_TR(0x53a4dd);
if(r1(R+518)){{goto L53a615;}}
}
B53a4e3:L53a4e3:{c.instructions+=4;NFSU2_TR(0x53a4e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a4e4:{NFSU2_TR(0x53a4e4);
__builtin_memmove((R+24),(R+4),4);
}
B53a4e6:{NFSU2_TR(0x53a4e6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a4e8:{NFSU2_TR(0x53a4e8);
if(r1(R+518)){{goto L53a564;}}
}
B53a4ea:L53a4ea:{c.instructions+=1;NFSU2_TR(0x53a4ea);
__builtin_memmove((R+12),(R+12),4);
}
B53a4f0:L53a4f0:{c.instructions+=2;NFSU2_TR(0x53a4f0);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a4f2:{NFSU2_TR(0x53a4f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a4f7ull));
TAIL_STATIC(0x575620u,575);
}
B53a4f7:L53a4f7:{c.instructions+=3;NFSU2_TR(0x53a4f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53a4fa:{NFSU2_TR(0x53a4fa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a4fc:{NFSU2_TR(0x53a4fc);
if(r1(R+518)){{goto L53a525;}}
}
B53a4fe:L53a4fe:{c.instructions+=12;NFSU2_TR(0x53a4fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a501:{NFSU2_TR(0x53a501);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a504:{NFSU2_TR(0x53a504);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a507:{NFSU2_TR(0x53a507);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a50a:{NFSU2_TR(0x53a50a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a50d:{NFSU2_TR(0x53a50d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a510:{NFSU2_TR(0x53a510);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53a514:{NFSU2_TR(0x53a514);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a517:{NFSU2_TR(0x53a517);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a51a:{NFSU2_TR(0x53a51a);
u8 U[4];
w4(U+0,u32(0x79afdcull));
s4(u32(r4(R+0)),r4(U+0));
}
B53a520:{NFSU2_TR(0x53a520);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a523:{NFSU2_TR(0x53a523);
{goto L53a527;}
}
B53a525:L53a525:{c.instructions+=1;NFSU2_TR(0x53a525);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53a527:L53a527:{c.instructions+=5;NFSU2_TR(0x53a527);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a52a:{NFSU2_TR(0x53a52a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a52c:{NFSU2_TR(0x53a52c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a52e:{NFSU2_TR(0x53a52e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a52f:{NFSU2_TR(0x53a52f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a534ull));
TAIL_STATIC(0x52ed80u,52e);
}
B53a534:L53a534:{c.instructions+=2;NFSU2_TR(0x53a534);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a536:{NFSU2_TR(0x53a536);
if(r1(R+518)){{goto L53a54e;}}
}
B53a538:L53a538:{c.instructions+=4;NFSU2_TR(0x53a538);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53a53b:{NFSU2_TR(0x53a53b);
w4(R+4,u32(0x73c4ec2dull));
}
B53a540:{NFSU2_TR(0x53a540);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a542:{NFSU2_TR(0x53a542);
if(r1(R+518)){{goto L53a54e;}}
}
B53a544:L53a544:{c.instructions+=2;NFSU2_TR(0x53a544);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a547:{NFSU2_TR(0x53a547);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53a54e:L53a54e:{c.instructions+=7;NFSU2_TR(0x53a54e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a554:{NFSU2_TR(0x53a554);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a557:{NFSU2_TR(0x53a557);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B53a558:{NFSU2_TR(0x53a558);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a55e:{NFSU2_TR(0x53a55e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B53a560:{NFSU2_TR(0x53a560);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a562:{NFSU2_TR(0x53a562);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53a4f0u);}goto L53a4f0;}}
}
B53a564:L53a564:{c.instructions+=4;NFSU2_TR(0x53a564);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a567:{NFSU2_TR(0x53a567);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a569:{NFSU2_TR(0x53a569);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a56c:{NFSU2_TR(0x53a56c);
if(r1(R+518)){{goto L53a5f3;}}
}
B53a572:L53a572:{c.instructions+=3;NFSU2_TR(0x53a572);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1d7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B53a578:{NFSU2_TR(0x53a578);
w4(R+4,u32(0x8392c0ull));
}
B53a57d:{NFSU2_TR(0x53a57d);
if(r1(R+518)){{goto L53a5a3;}}
}
B53a57f:L53a57f:{c.instructions+=3;NFSU2_TR(0x53a57f);
__builtin_memmove((R+0),gp(0x8389a8),4);
}
B53a584:{NFSU2_TR(0x53a584);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a585:{NFSU2_TR(0x53a585);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a58aull));
TAIL_STATIC(0x6102f0u,610);
}
B53a58a:L53a58a:{c.instructions+=3;NFSU2_TR(0x53a58a);
__builtin_memmove((R+24),(R+0),4);
}
B53a58c:{NFSU2_TR(0x53a58c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a58e:{NFSU2_TR(0x53a58e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53a5ae;}}
}
B53a590:L53a590:{c.instructions+=4;NFSU2_TR(0x53a590);
__builtin_memmove((R+4),gp(0x8389a8),4);
}
B53a596:{NFSU2_TR(0x53a596);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a597:{NFSU2_TR(0x53a597);
w4(R+4,u32(0x838980ull));
}
B53a59c:{NFSU2_TR(0x53a59c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a5a1ull));
TAIL_STATIC(0x521850u,521);
}
B53a5a1:L53a5a1:{c.instructions+=1;NFSU2_TR(0x53a5a1);
{goto L53a5ac;}
}
B53a5a3:L53a5a3:{c.instructions+=3;NFSU2_TR(0x53a5a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53a5a6:{NFSU2_TR(0x53a5a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a5a7:{NFSU2_TR(0x53a5a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a5acull));
TAIL_STATIC(0x6102f0u,610);
}
B53a5ac:L53a5ac:{c.instructions+=1;NFSU2_TR(0x53a5ac);
__builtin_memmove((R+24),(R+0),4);
}
B53a5ae:L53a5ae:{c.instructions+=3;NFSU2_TR(0x53a5ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a5b1:{NFSU2_TR(0x53a5b1);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B53a5b4:{NFSU2_TR(0x53a5b4);
if(r1(R+518)){{goto L53a5f3;}}
}
B53a5b6:L53a5b6:{c.instructions+=2;NFSU2_TR(0x53a5b6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a5b8:{NFSU2_TR(0x53a5b8);
if(r1(R+518)){{goto L53a5f3;}}
}
B53a5ba:L53a5ba:{c.instructions+=2;NFSU2_TR(0x53a5ba);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1d5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B53a5c0:{NFSU2_TR(0x53a5c0);
if(r1(R+518)){{goto L53a5d3;}}
}
B53a5c2:L53a5c2:{c.instructions+=4;NFSU2_TR(0x53a5c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a5c3:{NFSU2_TR(0x53a5c3);
u8 U[4];
w4(U+0,u32(0x721aff7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a5c8:{NFSU2_TR(0x53a5c8);
__builtin_memmove((R+4),(R+24),4);
}
B53a5ca:{NFSU2_TR(0x53a5ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a5cfull));
TAIL_STATIC(0x61b500u,61b);
}
B53a5cf:L53a5cf:{c.instructions+=2;NFSU2_TR(0x53a5cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53a5d1:{NFSU2_TR(0x53a5d1);
if(r1(R+518)){{goto L53a5f3;}}
}
B53a5d3:L53a5d3:{c.instructions+=2;NFSU2_TR(0x53a5d3);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1d7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B53a5d9:{NFSU2_TR(0x53a5d9);
if(r1(R+518)){{goto L53a5e8;}}
}
B53a5db:L53a5db:{c.instructions+=5;NFSU2_TR(0x53a5db);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B53a5de:{NFSU2_TR(0x53a5de);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53a5e1:{NFSU2_TR(0x53a5e1);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1full))));
}
B53a5e4:{NFSU2_TR(0x53a5e4);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B53a5e6:{NFSU2_TR(0x53a5e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53a5f3;}}
}
B53a5e8:L53a5e8:{c.instructions+=3;NFSU2_TR(0x53a5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a5eb:{NFSU2_TR(0x53a5eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a5ec:{NFSU2_TR(0x53a5ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a5f1ull));
TAIL_STATIC(0x538700u,538);
}
B53a5f1:L53a5f1:{c.instructions+=1;NFSU2_TR(0x53a5f1);
{goto L53a606;}
}
B53a5f3:L53a5f3:{c.instructions+=4;NFSU2_TR(0x53a5f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a5f6:{NFSU2_TR(0x53a5f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a5f9:{NFSU2_TR(0x53a5f9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a5fb:{NFSU2_TR(0x53a5fb);
if(r1(R+518)){{goto L53a600;}}
}
B53a5fd:L53a5fd:{c.instructions+=1;NFSU2_TR(0x53a5fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B53a600:L53a600:{c.instructions+=2;NFSU2_TR(0x53a600);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a601:{NFSU2_TR(0x53a601);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a606ull));
TAIL_STATIC(0x5386a0u,538);
}
B53a606:L53a606:{c.instructions+=4;NFSU2_TR(0x53a606);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a609:{NFSU2_TR(0x53a609);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a60b:{NFSU2_TR(0x53a60b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53a60f:{NFSU2_TR(0x53a60f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a614ull));
TAIL_STATIC(0x52eb90u,52e);
}
B53a614:L53a614:{c.instructions+=1;NFSU2_TR(0x53a614);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a615:L53a615:{c.instructions+=5;NFSU2_TR(0x53a615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53a616:{NFSU2_TR(0x53a616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53a617:{NFSU2_TR(0x53a617);
__builtin_memmove((R+16),(R+20),4);
}
B53a619:{NFSU2_TR(0x53a619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53a61a:{NFSU2_TR(0x53a61a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a620:L53a620:{c.instructions+=5;NFSU2_TR(0x53a620);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a621:{NFSU2_TR(0x53a621);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a622:{NFSU2_TR(0x53a622);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a623:{NFSU2_TR(0x53a623);
__builtin_memmove((R+24),(R+4),4);
}
B53a625:{NFSU2_TR(0x53a625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a62aull));
TAIL_STATIC(0x539c20u,539);
}
B53a62a:L53a62a:{c.instructions+=3;NFSU2_TR(0x53a62a);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a62c:{NFSU2_TR(0x53a62c);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a630:{NFSU2_TR(0x53a630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a635ull));
TAIL_STATIC(0x575620u,575);
}
B53a635:L53a635:{c.instructions+=5;NFSU2_TR(0x53a635);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53a637:{NFSU2_TR(0x53a637);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53a63a:{NFSU2_TR(0x53a63a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a63c:{NFSU2_TR(0x53a63c);
w4(R+8,u32(0x1ull));
}
B53a641:{NFSU2_TR(0x53a641);
if(r1(R+518)){{goto L53a680;}}
}
B53a643:L53a643:{c.instructions+=18;NFSU2_TR(0x53a643);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a647:{NFSU2_TR(0x53a647);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a64a:{NFSU2_TR(0x53a64a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53a64d:{NFSU2_TR(0x53a64d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x1dull));
s4(u32(r4(U+0)),r4(U+4));
}
B53a654:{NFSU2_TR(0x53a654);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a657:{NFSU2_TR(0x53a657);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a65a:{NFSU2_TR(0x53a65a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a65d:{NFSU2_TR(0x53a65d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a660:{NFSU2_TR(0x53a660);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a663:{NFSU2_TR(0x53a663);
u8 U[4];
w4(U+0,u32(0x79be34ull));
s4(u32(r4(R+0)),r4(U+0));
}
B53a669:{NFSU2_TR(0x53a669);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a66c:{NFSU2_TR(0x53a66c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a66f:{NFSU2_TR(0x53a66f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53a671:{NFSU2_TR(0x53a671);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a674:{NFSU2_TR(0x53a674);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B53a678:{NFSU2_TR(0x53a678);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a67b:{NFSU2_TR(0x53a67b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a67e:{NFSU2_TR(0x53a67e);
{goto L53a682;}
}
B53a680:L53a680:{c.instructions+=1;NFSU2_TR(0x53a680);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53a682:L53a682:{c.instructions+=5;NFSU2_TR(0x53a682);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a684:{NFSU2_TR(0x53a684);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a685:{NFSU2_TR(0x53a685);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a686:{NFSU2_TR(0x53a686);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B53a689:{NFSU2_TR(0x53a689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a68eull));
TAIL_STATIC(0x52ed80u,52e);
}
B53a68e:L53a68e:{c.instructions+=2;NFSU2_TR(0x53a68e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a690:{NFSU2_TR(0x53a690);
if(r1(R+518)){{goto L53a6a5;}}
}
B53a692:L53a692:{c.instructions+=3;NFSU2_TR(0x53a692);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a696:{NFSU2_TR(0x53a696);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53a699:{NFSU2_TR(0x53a699);
if(r1(R+518)){{goto L53a6a5;}}
}
B53a69b:L53a69b:{c.instructions+=2;NFSU2_TR(0x53a69b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a69e:{NFSU2_TR(0x53a69e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53a6a5:L53a6a5:{c.instructions+=5;NFSU2_TR(0x53a6a5);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
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
B53a6ab:{NFSU2_TR(0x53a6ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a6ac:{NFSU2_TR(0x53a6ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53a6ad:{NFSU2_TR(0x53a6ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53a6ae:{NFSU2_TR(0x53a6ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a6c0:L53a6c0:{c.instructions+=28;NFSU2_TR(0x53a6c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53a6c4:{NFSU2_TR(0x53a6c4);
__builtin_memmove((R+0),(R+4),4);
}
B53a6c6:{NFSU2_TR(0x53a6c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a6ca:{NFSU2_TR(0x53a6ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a6cd:{NFSU2_TR(0x53a6cd);
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
B53a6cf:{NFSU2_TR(0x53a6cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a6d2:{NFSU2_TR(0x53a6d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a6d5:{NFSU2_TR(0x53a6d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a6d8:{NFSU2_TR(0x53a6d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a6db:{NFSU2_TR(0x53a6db);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a6de:{NFSU2_TR(0x53a6de);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a6e1:{NFSU2_TR(0x53a6e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a6e4:{NFSU2_TR(0x53a6e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53a6e7:{NFSU2_TR(0x53a6e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a6eb:{NFSU2_TR(0x53a6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a6ee:{NFSU2_TR(0x53a6ee);
w4(R+8,u32(0x3f800000ull));
}
B53a6f3:{NFSU2_TR(0x53a6f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a6f6:{NFSU2_TR(0x53a6f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B53a6f9:{NFSU2_TR(0x53a6f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53a6fd:{NFSU2_TR(0x53a6fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a700:{NFSU2_TR(0x53a700);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a703:{NFSU2_TR(0x53a703);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a706:{NFSU2_TR(0x53a706);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a709:{NFSU2_TR(0x53a709);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53a70d:{NFSU2_TR(0x53a70d);
u8 U[4];
w4(U+0,u32(0x79be44ull));
s4(u32(r4(R+0)),r4(U+0));
}
B53a713:{NFSU2_TR(0x53a713);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53a715:{NFSU2_TR(0x53a715);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a718:{NFSU2_TR(0x53a718);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a720:L53a720:{c.instructions+=6;NFSU2_TR(0x53a720);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a721:{NFSU2_TR(0x53a721);
__builtin_memmove((R+24),(R+4),4);
}
B53a723:{NFSU2_TR(0x53a723);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53a729:{NFSU2_TR(0x53a729);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a72b:{NFSU2_TR(0x53a72b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53a72f:{NFSU2_TR(0x53a72f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a734ull));
TAIL_STATIC(0x52eb90u,52e);
}
B53a734:L53a734:{c.instructions+=3;NFSU2_TR(0x53a734);
__builtin_memmove((R+4),(R+24),4);
}
B53a736:{NFSU2_TR(0x53a736);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a737:{NFSU2_TR(0x53a737);
TAIL_STATIC(0x538c00u,538);
}
B53a740:L53a740:{c.instructions+=6;NFSU2_TR(0x53a740);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a741:{NFSU2_TR(0x53a741);
__builtin_memmove((R+24),(R+4),4);
}
B53a743:{NFSU2_TR(0x53a743);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53a749:{NFSU2_TR(0x53a749);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a74b:{NFSU2_TR(0x53a74b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53a74f:{NFSU2_TR(0x53a74f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a754ull));
TAIL_STATIC(0x52eb90u,52e);
}
B53a754:L53a754:{c.instructions+=3;NFSU2_TR(0x53a754);
__builtin_memmove((R+4),(R+24),4);
}
B53a756:{NFSU2_TR(0x53a756);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a757:{NFSU2_TR(0x53a757);
TAIL_STATIC(0x538ca0u,538);
}
B53a760:L53a760:{c.instructions+=3;NFSU2_TR(0x53a760);
__builtin_memmove((R+0),gp(0x7fa1e0),4);
}
B53a765:{NFSU2_TR(0x53a765);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a766:{NFSU2_TR(0x53a766);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a76bull));
TAIL_STATIC(0x52cef0u,52c);
}
B53a76b:L53a76b:{c.instructions+=4;NFSU2_TR(0x53a76b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B53a76d:{NFSU2_TR(0x53a76d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53a770:{NFSU2_TR(0x53a770);
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
B53a772:{NFSU2_TR(0x53a772);
if(r1(R+518)){{goto L53a780;}}
}
B53a774:L53a774:{c.instructions+=4;NFSU2_TR(0x53a774);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a777:{NFSU2_TR(0x53a777);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a77a:{NFSU2_TR(0x53a77a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a77d:{NFSU2_TR(0x53a77d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a780:L53a780:{c.instructions+=1;NFSU2_TR(0x53a780);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a790:L53a790:{c.instructions+=3;NFSU2_TR(0x53a790);
__builtin_memmove((R+0),gp(0x7fa1e0),4);
}
B53a795:{NFSU2_TR(0x53a795);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a796:{NFSU2_TR(0x53a796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a79bull));
TAIL_STATIC(0x52cef0u,52c);
}
B53a79b:L53a79b:{c.instructions+=3;NFSU2_TR(0x53a79b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53a79e:{NFSU2_TR(0x53a79e);
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
B53a7a0:{NFSU2_TR(0x53a7a0);
if(r1(R+518)){{goto L53a7b3;}}
}
B53a7a2:L53a7a2:{c.instructions+=5;NFSU2_TR(0x53a7a2);
w4(R+4,u32(0xffull));
}
B53a7a7:{NFSU2_TR(0x53a7a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a7aa:{NFSU2_TR(0x53a7aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a7ad:{NFSU2_TR(0x53a7ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a7b0:{NFSU2_TR(0x53a7b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a7b3:L53a7b3:{c.instructions+=1;NFSU2_TR(0x53a7b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a7c0:L53a7c0:{c.instructions+=9;NFSU2_TR(0x53a7c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a7c3:{NFSU2_TR(0x53a7c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a7c6:{NFSU2_TR(0x53a7c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a7c7:{NFSU2_TR(0x53a7c7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffdfffaull))));
}
B53a7cd:{NFSU2_TR(0x53a7cd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53a7cf:{NFSU2_TR(0x53a7cf);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B53a7d2:{NFSU2_TR(0x53a7d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a7d3:{NFSU2_TR(0x53a7d3);
w4(R+24,u32(0xa9ull));
}
B53a7d8:{NFSU2_TR(0x53a7d8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L53a81d;}}
}
B53a7da:L53a7da:{c.instructions+=1;NFSU2_TR(0x53a7da);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x53a870ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53a7e1:L53a7e1:{c.instructions+=3;NFSU2_TR(0x53a7e1);
w4(R+0,u32(0x1ull));
}
B53a7e6:{NFSU2_TR(0x53a7e6);
w4(R+24,u32(0x39ull));
}
B53a7eb:{NFSU2_TR(0x53a7eb);
{goto L53a81d;}
}
B53a7ed:L53a7ed:{c.instructions+=2;NFSU2_TR(0x53a7ed);
w4(R+24,u32(0x39ull));
}
B53a7f2:{NFSU2_TR(0x53a7f2);
{goto L53a818;}
}
B53a7f4:L53a7f4:{c.instructions+=3;NFSU2_TR(0x53a7f4);
w4(R+0,u32(0x1ull));
}
B53a7f9:{NFSU2_TR(0x53a7f9);
w4(R+24,u32(0x3aull));
}
B53a7fe:{NFSU2_TR(0x53a7fe);
{goto L53a81d;}
}
B53a800:L53a800:{c.instructions+=2;NFSU2_TR(0x53a800);
w4(R+24,u32(0x3aull));
}
B53a805:{NFSU2_TR(0x53a805);
{goto L53a818;}
}
B53a807:L53a807:{c.instructions+=3;NFSU2_TR(0x53a807);
w4(R+0,u32(0x1ull));
}
B53a80c:{NFSU2_TR(0x53a80c);
w4(R+24,u32(0x34ull));
}
B53a811:{NFSU2_TR(0x53a811);
{goto L53a81d;}
}
B53a813:L53a813:{c.instructions+=1;NFSU2_TR(0x53a813);
w4(R+24,u32(0x34ull));
}
B53a818:L53a818:{c.instructions+=1;NFSU2_TR(0x53a818);
w4(R+0,u32(0x2ull));
}
B53a81d:L53a81d:{c.instructions+=4;NFSU2_TR(0x53a81d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a81e:{NFSU2_TR(0x53a81e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a81f:{NFSU2_TR(0x53a81f);
w4(R+4,u32(0x838980ull));
}
B53a824:{NFSU2_TR(0x53a824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a829ull));
TAIL_STATIC(0x521940u,521);
}
B53a829:L53a829:{c.instructions+=3;NFSU2_TR(0x53a829);
__builtin_memmove((R+28),(R+0),4);
}
B53a82b:{NFSU2_TR(0x53a82b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53a82d:{NFSU2_TR(0x53a82d);
if(r1(R+518)){{goto L53a85b;}}
}
B53a82f:L53a82f:{c.instructions+=3;NFSU2_TR(0x53a82f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a831:{NFSU2_TR(0x53a831);
u8 U[4];
w4(U+0,u32(0x79b5a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a836:{NFSU2_TR(0x53a836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a83bull));
TAIL_STATIC(0x43db50u,43d);
}
B53a83b:L53a83b:{c.instructions+=4;NFSU2_TR(0x53a83b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53a83e:{NFSU2_TR(0x53a83e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a83f:{NFSU2_TR(0x53a83f);
__builtin_memmove((R+4),(R+28),4);
}
B53a841:{NFSU2_TR(0x53a841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a846ull));
TAIL_STATIC(0x61b500u,61b);
}
B53a846:L53a846:{c.instructions+=4;NFSU2_TR(0x53a846);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a847:{NFSU2_TR(0x53a847);
w4(R+4,u32(0x838980ull));
}
B53a84c:{NFSU2_TR(0x53a84c);
__builtin_memmove((R+28),(R+0),4);
}
B53a84e:{NFSU2_TR(0x53a84e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a853ull));
TAIL_STATIC(0x5218b0u,521);
}
B53a853:L53a853:{c.instructions+=5;NFSU2_TR(0x53a853);
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
B53a855:{NFSU2_TR(0x53a855);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53a856:{NFSU2_TR(0x53a856);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B53a859:{NFSU2_TR(0x53a859);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a85a:{NFSU2_TR(0x53a85a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a85b:L53a85b:{c.instructions+=4;NFSU2_TR(0x53a85b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a85c:{NFSU2_TR(0x53a85c);
w4(R+4,u32(0x838980ull));
}
B53a861:{NFSU2_TR(0x53a861);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B53a863:{NFSU2_TR(0x53a863);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a868ull));
TAIL_STATIC(0x5218b0u,521);
}
B53a868:L53a868:{c.instructions+=5;NFSU2_TR(0x53a868);
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
B53a86a:{NFSU2_TR(0x53a86a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53a86b:{NFSU2_TR(0x53a86b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B53a86e:{NFSU2_TR(0x53a86e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a86f:{NFSU2_TR(0x53a86f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a890:L53a890:{c.instructions+=7;NFSU2_TR(0x53a890);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a893:{NFSU2_TR(0x53a893);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a896:{NFSU2_TR(0x53a896);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffdfffaull))));
}
B53a89b:{NFSU2_TR(0x53a89b);
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
B53a89e:{NFSU2_TR(0x53a89e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a89f:{NFSU2_TR(0x53a89f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a8a0:{NFSU2_TR(0x53a8a0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L53a8fa;}}
}
B53a8a2:L53a8a2:{c.instructions+=1;NFSU2_TR(0x53a8a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x53a988ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53a8a9:L53a8a9:{c.instructions+=2;NFSU2_TR(0x53a8a9);
w4(R+24,u32(0x39ull));
}
B53a8ae:{NFSU2_TR(0x53a8ae);
w4(R+28,u32(0x89ull));
}
B53a8b3:L53a8b3:{c.instructions+=5;NFSU2_TR(0x53a8b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a8b4:{NFSU2_TR(0x53a8b4);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a8b6:{NFSU2_TR(0x53a8b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a8b7:{NFSU2_TR(0x53a8b7);
w4(R+4,u32(0x838980ull));
}
B53a8bc:{NFSU2_TR(0x53a8bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a8c1ull));
TAIL_STATIC(0x521940u,521);
}
B53a8c1:L53a8c1:{c.instructions+=3;NFSU2_TR(0x53a8c1);
__builtin_memmove((R+12),(R+0),4);
}
B53a8c3:{NFSU2_TR(0x53a8c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53a8c5:{NFSU2_TR(0x53a8c5);
if(r1(R+518)){{goto L53a8ff;}}
}
B53a8c7:L53a8c7:{c.instructions+=3;NFSU2_TR(0x53a8c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a8c9:{NFSU2_TR(0x53a8c9);
u8 U[4];
w4(U+0,u32(0x79b5a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a8ce:{NFSU2_TR(0x53a8ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a8d3ull));
TAIL_STATIC(0x43db50u,43d);
}
B53a8d3:L53a8d3:{c.instructions+=4;NFSU2_TR(0x53a8d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53a8d6:{NFSU2_TR(0x53a8d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a8d7:{NFSU2_TR(0x53a8d7);
__builtin_memmove((R+4),(R+12),4);
}
B53a8d9:{NFSU2_TR(0x53a8d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a8deull));
TAIL_STATIC(0x61b500u,61b);
}
B53a8de:L53a8de:{c.instructions+=2;NFSU2_TR(0x53a8de);
__builtin_memmove((R+12),(R+0),4);
}
B53a8e0:{NFSU2_TR(0x53a8e0);
{goto L53a901;}
}
B53a8e2:L53a8e2:{c.instructions+=3;NFSU2_TR(0x53a8e2);
w4(R+24,u32(0x3aull));
}
B53a8e7:{NFSU2_TR(0x53a8e7);
w4(R+28,u32(0x91ull));
}
B53a8ec:{NFSU2_TR(0x53a8ec);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53a8b3u);}goto L53a8b3;}
}
B53a8ee:L53a8ee:{c.instructions+=3;NFSU2_TR(0x53a8ee);
w4(R+24,u32(0x34ull));
}
B53a8f3:{NFSU2_TR(0x53a8f3);
w4(R+28,u32(0x61ull));
}
B53a8f8:{NFSU2_TR(0x53a8f8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53a8b3u);}goto L53a8b3;}
}
B53a8fa:L53a8fa:{c.instructions+=4;NFSU2_TR(0x53a8fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53a8fb:{NFSU2_TR(0x53a8fb);
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
B53a8fd:{NFSU2_TR(0x53a8fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a8fe:{NFSU2_TR(0x53a8fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a8ff:L53a8ff:{c.instructions+=1;NFSU2_TR(0x53a8ff);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53a901:L53a901:{c.instructions+=4;NFSU2_TR(0x53a901);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a903:{NFSU2_TR(0x53a903);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a904:{NFSU2_TR(0x53a904);
w4(R+4,u32(0x838980ull));
}
B53a909:{NFSU2_TR(0x53a909);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a90eull));
TAIL_STATIC(0x521940u,521);
}
B53a90e:L53a90e:{c.instructions+=3;NFSU2_TR(0x53a90e);
__builtin_memmove((R+24),(R+0),4);
}
B53a910:{NFSU2_TR(0x53a910);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53a912:{NFSU2_TR(0x53a912);
if(r1(R+518)){{goto L53a92d;}}
}
B53a914:L53a914:{c.instructions+=3;NFSU2_TR(0x53a914);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a916:{NFSU2_TR(0x53a916);
u8 U[4];
w4(U+0,u32(0x79b5a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a91b:{NFSU2_TR(0x53a91b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a920ull));
TAIL_STATIC(0x43db50u,43d);
}
B53a920:L53a920:{c.instructions+=4;NFSU2_TR(0x53a920);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53a923:{NFSU2_TR(0x53a923);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a924:{NFSU2_TR(0x53a924);
__builtin_memmove((R+4),(R+24),4);
}
B53a926:{NFSU2_TR(0x53a926);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a92bull));
TAIL_STATIC(0x61b500u,61b);
}
B53a92b:L53a92b:{c.instructions+=1;NFSU2_TR(0x53a92b);
{goto L53a92f;}
}
B53a92d:L53a92d:{c.instructions+=1;NFSU2_TR(0x53a92d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53a92f:L53a92f:{c.instructions+=2;NFSU2_TR(0x53a92f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53a931:{NFSU2_TR(0x53a931);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L53a935;}}
}
B53a933:L53a933:{c.instructions+=1;NFSU2_TR(0x53a933);
__builtin_memmove((R+0),(R+12),4);
}
B53a935:L53a935:{c.instructions+=4;NFSU2_TR(0x53a935);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B53a938:{NFSU2_TR(0x53a938);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53a93a:{NFSU2_TR(0x53a93a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53a93c:{NFSU2_TR(0x53a93c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L53a97c;}}
}
B53a93e:L53a93e:{c.instructions+=1;NFSU2_TR(0x53a93e);
__builtin_memmove((R+28),(R+28),4);
}
B53a940:L53a940:{c.instructions+=3;NFSU2_TR(0x53a940);
__builtin_memmove((R+0),gp(0x8389c8),4);
}
B53a945:{NFSU2_TR(0x53a945);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8389c8ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8389c8ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8389c8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53a94a:{NFSU2_TR(0x53a94a);
if(r1(R+518)){{goto L53a967;}}
}
B53a94c:L53a94c:{c.instructions+=1;NFSU2_TR(0x53a94c);
__builtin_memmove((R+16),(R+16),4);
}
B53a950:L53a950:{c.instructions+=2;NFSU2_TR(0x53a950);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53a953:{NFSU2_TR(0x53a953);
if(r1(R+518)){{goto L53a960;}}
}
B53a955:L53a955:{c.instructions+=3;NFSU2_TR(0x53a955);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53a957:{NFSU2_TR(0x53a957);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8389c8ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8389c8ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8389c8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53a95c:{NFSU2_TR(0x53a95c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53a950u);}goto L53a950;}}
}
B53a95e:L53a95e:{c.instructions+=1;NFSU2_TR(0x53a95e);
{goto L53a967;}
}
B53a960:L53a960:{c.instructions+=3;NFSU2_TR(0x53a960);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a963:{NFSU2_TR(0x53a963);
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
B53a965:{NFSU2_TR(0x53a965);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53a976;}}
}
B53a967:L53a967:{c.instructions+=3;NFSU2_TR(0x53a967);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a968:{NFSU2_TR(0x53a968);
w4(R+4,u32(0x8392c0ull));
}
B53a96d:{NFSU2_TR(0x53a96d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a972ull));
TAIL_STATIC(0x6102f0u,610);
}
B53a972:L53a972:{c.instructions+=2;NFSU2_TR(0x53a972);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53a974:{NFSU2_TR(0x53a974);
if(r1(R+518)){{goto L53a977;}}
}
B53a976:L53a976:{c.instructions+=1;NFSU2_TR(0x53a976);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B53a977:L53a977:{c.instructions+=3;NFSU2_TR(0x53a977);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B53a978:{NFSU2_TR(0x53a978);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53a97a:{NFSU2_TR(0x53a97a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53a940u);}goto L53a940;}}
}
B53a97c:L53a97c:{c.instructions+=7;NFSU2_TR(0x53a97c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53a97e:{NFSU2_TR(0x53a97e);
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
B53a980:{NFSU2_TR(0x53a980);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53a981:{NFSU2_TR(0x53a981);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53a982:{NFSU2_TR(0x53a982);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B53a985:{NFSU2_TR(0x53a985);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53a986:{NFSU2_TR(0x53a986);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a9a0:L53a9a0:{c.instructions+=3;NFSU2_TR(0x53a9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a9a3:{NFSU2_TR(0x53a9a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a9a4:{NFSU2_TR(0x53a9a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53a9a9ull));
TAIL_STATIC(0x52cef0u,52c);
}
B53a9a9:L53a9a9:{c.instructions+=3;NFSU2_TR(0x53a9a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53a9ac:{NFSU2_TR(0x53a9ac);
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
B53a9ae:{NFSU2_TR(0x53a9ae);
if(r1(R+518)){{goto L53a9c1;}}
}
B53a9b0:L53a9b0:{c.instructions+=5;NFSU2_TR(0x53a9b0);
w4(R+4,u32(0xffull));
}
B53a9b5:{NFSU2_TR(0x53a9b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a9b8:{NFSU2_TR(0x53a9b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a9bb:{NFSU2_TR(0x53a9bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a9be:{NFSU2_TR(0x53a9be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a9c1:L53a9c1:{c.instructions+=1;NFSU2_TR(0x53a9c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53a9d0:L53a9d0:{c.instructions+=42;NFSU2_TR(0x53a9d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a9d2:{NFSU2_TR(0x53a9d2);
u8 U[4];
w4(U+0,u32(0x7772b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a9d7:{NFSU2_TR(0x53a9d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a9dd:{NFSU2_TR(0x53a9dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a9de:{NFSU2_TR(0x53a9de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a9e5:{NFSU2_TR(0x53a9e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a9e6:{NFSU2_TR(0x53a9e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53a9ea:{NFSU2_TR(0x53a9ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53a9ee:{NFSU2_TR(0x53a9ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53a9ef:{NFSU2_TR(0x53a9ef);
__builtin_memmove((R+24),(R+4),4);
}
B53a9f1:{NFSU2_TR(0x53a9f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53a9f5:{NFSU2_TR(0x53a9f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a9f8:{NFSU2_TR(0x53a9f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53a9fa:{NFSU2_TR(0x53a9fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53a9fd:{NFSU2_TR(0x53a9fd);
w4(R+4,u32(0x3f800000ull));
}
B53aa02:{NFSU2_TR(0x53aa02);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aa06:{NFSU2_TR(0x53aa06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aa09:{NFSU2_TR(0x53aa09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aa0c:{NFSU2_TR(0x53aa0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aa0f:{NFSU2_TR(0x53aa0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53aa12:{NFSU2_TR(0x53aa12);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53aa16:{NFSU2_TR(0x53aa16);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53aa19:{NFSU2_TR(0x53aa19);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53aa1c:{NFSU2_TR(0x53aa1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aa1f:{NFSU2_TR(0x53aa1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aa22:{NFSU2_TR(0x53aa22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aa25:{NFSU2_TR(0x53aa25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aa28:{NFSU2_TR(0x53aa28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aa2b:{NFSU2_TR(0x53aa2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53aa2f:{NFSU2_TR(0x53aa2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53aa32:{NFSU2_TR(0x53aa32);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53aa36:{NFSU2_TR(0x53aa36);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53aa3a:{NFSU2_TR(0x53aa3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aa3e:{NFSU2_TR(0x53aa3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aa41:{NFSU2_TR(0x53aa41);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53aa45:{NFSU2_TR(0x53aa45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aa46:{NFSU2_TR(0x53aa46);
u8 U[4];
w4(U+0,u32(0x79b604ull));
s4(u32(r4(R+24)),r4(U+0));
}
B53aa4c:{NFSU2_TR(0x53aa4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aa4f:{NFSU2_TR(0x53aa4f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53aa52:{NFSU2_TR(0x53aa52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53aa59:{NFSU2_TR(0x53aa59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aa5c:{NFSU2_TR(0x53aa5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53aa61ull));
TAIL_STATIC(0x539d00u,539);
}
B53aa61:L53aa61:{c.instructions+=9;NFSU2_TR(0x53aa61);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53aa65:{NFSU2_TR(0x53aa65);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53aa68:{NFSU2_TR(0x53aa68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53aa6b:{NFSU2_TR(0x53aa6b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53aa6f:{NFSU2_TR(0x53aa6f);
__builtin_memmove((R+0),(R+24),4);
}
B53aa71:{NFSU2_TR(0x53aa71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53aa72:{NFSU2_TR(0x53aa72);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aa79:{NFSU2_TR(0x53aa79);
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
B53aa7c:{NFSU2_TR(0x53aa7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53aa80:L53aa80:{c.instructions+=13;NFSU2_TR(0x53aa80);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53aa84:{NFSU2_TR(0x53aa84);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53aa88:{NFSU2_TR(0x53aa88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aa89:{NFSU2_TR(0x53aa89);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aa8b:{NFSU2_TR(0x53aa8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aa8d:{NFSU2_TR(0x53aa8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aa8f:{NFSU2_TR(0x53aa8f);
__builtin_memmove((R+24),(R+4),4);
}
B53aa91:{NFSU2_TR(0x53aa91);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53aa95:{NFSU2_TR(0x53aa95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aa96:{NFSU2_TR(0x53aa96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aa97:{NFSU2_TR(0x53aa97);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aa98:{NFSU2_TR(0x53aa98);
__builtin_memmove((R+4),(R+24),4);
}
B53aa9a:{NFSU2_TR(0x53aa9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53aa9full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53a9d0u);}goto L53a9d0;}
}
B53aa9f:L53aa9f:{c.instructions+=6;NFSU2_TR(0x53aa9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53aaa3:{NFSU2_TR(0x53aaa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aaa6:{NFSU2_TR(0x53aaa6);
u8 U[4];
w4(U+0,u32(0x79be4cull));
s4(u32(r4(R+24)),r4(U+0));
}
B53aaac:{NFSU2_TR(0x53aaac);
__builtin_memmove((R+0),(R+24),4);
}
B53aaae:{NFSU2_TR(0x53aaae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53aaaf:{NFSU2_TR(0x53aaaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53aac0:L53aac0:{c.instructions+=16;NFSU2_TR(0x53aac0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aac2:{NFSU2_TR(0x53aac2);
u8 U[4];
w4(U+0,u32(0x7772b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aac7:{NFSU2_TR(0x53aac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53aacd:{NFSU2_TR(0x53aacd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aace:{NFSU2_TR(0x53aace);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aad5:{NFSU2_TR(0x53aad5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aad6:{NFSU2_TR(0x53aad6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aad7:{NFSU2_TR(0x53aad7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aad9:{NFSU2_TR(0x53aad9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aadb:{NFSU2_TR(0x53aadb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aadd:{NFSU2_TR(0x53aadd);
u8 U[4];
w4(U+0,u32(0x8b543f71ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aae2:{NFSU2_TR(0x53aae2);
u8 U[4];
w4(U+0,u32(0xe803e1cdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aae7:{NFSU2_TR(0x53aae7);
__builtin_memmove((R+24),(R+4),4);
}
B53aae9:{NFSU2_TR(0x53aae9);
u8 U[4];
w4(U+0,u32(0x22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aaeb:{NFSU2_TR(0x53aaeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aaef:{NFSU2_TR(0x53aaef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53aaf4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53a9d0u);}goto L53a9d0;}
}
B53aaf4:L53aaf4:{c.instructions+=5;NFSU2_TR(0x53aaf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53aafb:{NFSU2_TR(0x53aafb);
u8 U[4];
w4(U+0,u32(0x22ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aafd:{NFSU2_TR(0x53aafd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53ab05:{NFSU2_TR(0x53ab05);
u8 U[4];
w4(U+0,u32(0x79be54ull));
s4(u32(r4(R+24)),r4(U+0));
}
B53ab0b:{NFSU2_TR(0x53ab0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ab10ull));
TAIL_STATIC(0x539d00u,539);
}
B53ab10:L53ab10:{c.instructions+=9;NFSU2_TR(0x53ab10);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ab14:{NFSU2_TR(0x53ab14);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ab17:{NFSU2_TR(0x53ab17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53ab1a:{NFSU2_TR(0x53ab1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53ab1e:{NFSU2_TR(0x53ab1e);
__builtin_memmove((R+0),(R+24),4);
}
B53ab20:{NFSU2_TR(0x53ab20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53ab21:{NFSU2_TR(0x53ab21);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ab28:{NFSU2_TR(0x53ab28);
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
B53ab2b:{NFSU2_TR(0x53ab2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53ab30:L53ab30:{c.instructions+=11;NFSU2_TR(0x53ab30);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53ab36:{NFSU2_TR(0x53ab36);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ab38:{NFSU2_TR(0x53ab38);
u8 U[4];
w4(U+0,u32(0x777728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ab3d:{NFSU2_TR(0x53ab3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ab3e:{NFSU2_TR(0x53ab3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ab45:{NFSU2_TR(0x53ab45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ab46:{NFSU2_TR(0x53ab46);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53ab4a:{NFSU2_TR(0x53ab4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ab4b:{NFSU2_TR(0x53ab4b);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ab4d:{NFSU2_TR(0x53ab4d);
__builtin_memmove((R+28),(R+4),4);
}
B53ab4f:{NFSU2_TR(0x53ab4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ab54ull));
TAIL_STATIC(0x575620u,575);
}
B53ab54:L53ab54:{c.instructions+=4;NFSU2_TR(0x53ab54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53ab57:{NFSU2_TR(0x53ab57);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53ab59:{NFSU2_TR(0x53ab59);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ab5d:{NFSU2_TR(0x53ab5d);
if(r1(R+518)){{goto L53ab88;}}
}
B53ab5f:L53ab5f:{c.instructions+=3;NFSU2_TR(0x53ab5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53ab61:{NFSU2_TR(0x53ab61);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53ab69:{NFSU2_TR(0x53ab69);
if(r1(R+518)){{goto L53ab9d;}}
}
B53ab6b:L53ab6b:{c.instructions+=1;NFSU2_TR(0x53ab6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ab6c:L53ab6c:{c.instructions+=10;NFSU2_TR(0x53ab6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ab70:{NFSU2_TR(0x53ab70);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53ab74:{NFSU2_TR(0x53ab74);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ab76:{NFSU2_TR(0x53ab76);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ab78:{NFSU2_TR(0x53ab78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ab79:{NFSU2_TR(0x53ab79);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ab7d:{NFSU2_TR(0x53ab7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ab7e:{NFSU2_TR(0x53ab7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ab7f:{NFSU2_TR(0x53ab7f);
__builtin_memmove((R+4),(R+0),4);
}
B53ab81:{NFSU2_TR(0x53ab81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ab86ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53a9d0u);}goto L53a9d0;}
}
B53ab86:L53ab86:{c.instructions+=1;NFSU2_TR(0x53ab86);
{goto L53ab9f;}
}
B53ab88:L53ab88:{c.instructions+=3;NFSU2_TR(0x53ab88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53ab8a:{NFSU2_TR(0x53ab8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53ab92:{NFSU2_TR(0x53ab92);
if(r1(R+518)){{goto L53ab9d;}}
}
B53ab94:L53ab94:{c.instructions+=3;NFSU2_TR(0x53ab94);
__builtin_memmove((R+8),gp(0x7fa204),4);
}
B53ab9a:{NFSU2_TR(0x53ab9a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ab9b:{NFSU2_TR(0x53ab9b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53ab6cu);}goto L53ab6c;}
}
B53ab9d:L53ab9d:{c.instructions+=1;NFSU2_TR(0x53ab9d);
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
B53ab9f:L53ab9f:{c.instructions+=7;NFSU2_TR(0x53ab9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53aba3:{NFSU2_TR(0x53aba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53aba6:{NFSU2_TR(0x53aba6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53aba8:{NFSU2_TR(0x53aba8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aba9:{NFSU2_TR(0x53aba9);
__builtin_memmove((R+4),(R+28),4);
}
B53abab:{NFSU2_TR(0x53abab);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53abb3:{NFSU2_TR(0x53abb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53abb6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53abb6:L53abb6:{c.instructions+=6;NFSU2_TR(0x53abb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53abba:{NFSU2_TR(0x53abba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53abbb:{NFSU2_TR(0x53abbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53abc2:{NFSU2_TR(0x53abc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53abc3:{NFSU2_TR(0x53abc3);
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
B53abc6:{NFSU2_TR(0x53abc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53abd0:L53abd0:{c.instructions+=23;NFSU2_TR(0x53abd0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53abd2:{NFSU2_TR(0x53abd2);
u8 U[4];
w4(U+0,u32(0x7775c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53abd7:{NFSU2_TR(0x53abd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53abdd:{NFSU2_TR(0x53abdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53abde:{NFSU2_TR(0x53abde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53abe5:{NFSU2_TR(0x53abe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B53abe8:{NFSU2_TR(0x53abe8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53abe9:{NFSU2_TR(0x53abe9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53abea:{NFSU2_TR(0x53abea);
__builtin_memmove((R+24),(R+4),4);
}
B53abec:{NFSU2_TR(0x53abec);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53abf0:{NFSU2_TR(0x53abf0);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53abf4:{NFSU2_TR(0x53abf4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53abf5:{NFSU2_TR(0x53abf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53abf9:{NFSU2_TR(0x53abf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53abfd:{NFSU2_TR(0x53abfd);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53ac01:{NFSU2_TR(0x53ac01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ac02:{NFSU2_TR(0x53ac02);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x151ull))));
__builtin_memmove((R+0),(U+0),4);
}
B53ac08:{NFSU2_TR(0x53ac08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ac09:{NFSU2_TR(0x53ac09);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53ac0d:{NFSU2_TR(0x53ac0d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53ac0f:{NFSU2_TR(0x53ac0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ac10:{NFSU2_TR(0x53ac10);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ac14:{NFSU2_TR(0x53ac14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ac19ull));
TAIL_STATIC(0x539a90u,539);
}
B53ac19:L53ac19:{c.instructions+=5;NFSU2_TR(0x53ac19);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53ac1d:{NFSU2_TR(0x53ac1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53ac21:{NFSU2_TR(0x53ac21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53ac24:{NFSU2_TR(0x53ac24);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ac26:{NFSU2_TR(0x53ac26);
if(r1(R+518)){{goto L53ada6;}}
}
B53ac2c:L53ac2c:{c.instructions+=4;NFSU2_TR(0x53ac2c);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x151ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B53ac32:{NFSU2_TR(0x53ac32);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53ac36:{NFSU2_TR(0x53ac36);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ac3a:{NFSU2_TR(0x53ac3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53acf2;}}
}
B53ac40:L53ac40:{c.instructions+=1;NFSU2_TR(0x53ac40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ac45ull));
TAIL_STATIC(0x502fd0u,502);
}
B53ac45:L53ac45:{c.instructions+=3;NFSU2_TR(0x53ac45);
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
B53ac47:{NFSU2_TR(0x53ac47);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ac4b:{NFSU2_TR(0x53ac4b);
if(r1(R+518)){{goto L53ad91;}}
}
B53ac51:L53ac51:{c.instructions+=3;NFSU2_TR(0x53ac51);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53ac55:{NFSU2_TR(0x53ac55);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x1dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53ac58:{NFSU2_TR(0x53ac58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53ac9d;}}
}
B53ac5a:L53ac5a:{c.instructions+=3;NFSU2_TR(0x53ac5a);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B53ac60:{NFSU2_TR(0x53ac60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53ac62:{NFSU2_TR(0x53ac62);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ac65ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53ac65:L53ac65:{c.instructions+=9;NFSU2_TR(0x53ac65);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B53ac6b:{NFSU2_TR(0x53ac6b);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B53ac71:{NFSU2_TR(0x53ac71);
u8 U[13];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+28,u32(s32(s8(r1(U+12)))));
}
B53ac79:{NFSU2_TR(0x53ac79);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B53ac7b:{NFSU2_TR(0x53ac7b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ac7f:{NFSU2_TR(0x53ac7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ac82:{NFSU2_TR(0x53ac82);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ac83:{NFSU2_TR(0x53ac83);
u8 U[4];
w4(U+0,u32(0xce7d8db5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ac88:{NFSU2_TR(0x53ac88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ac8dull));
TAIL_STATIC(0x61b500u,61b);
}
B53ac8d:L53ac8d:{c.instructions+=5;NFSU2_TR(0x53ac8d);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B53ac90:{NFSU2_TR(0x53ac90);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ac92:{NFSU2_TR(0x53ac92);
__builtin_memmove((R+0),(R+518),1);
}
B53ac95:{NFSU2_TR(0x53ac95);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B53ac97:{NFSU2_TR(0x53ac97);
if(r1(R+518)){{goto L53acd9;}}
}
B53ac99:L53ac99:{c.instructions+=1;NFSU2_TR(0x53ac99);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53ac9d:L53ac9d:{c.instructions+=2;NFSU2_TR(0x53ac9d);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ac9f:{NFSU2_TR(0x53ac9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53aca4ull));
TAIL_STATIC(0x575620u,575);
}
B53aca4:L53aca4:{c.instructions+=4;NFSU2_TR(0x53aca4);
__builtin_memmove((R+8),(R+0),4);
}
B53aca6:{NFSU2_TR(0x53aca6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53aca9:{NFSU2_TR(0x53aca9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53acab:{NFSU2_TR(0x53acab);
if(r1(R+518)){{goto L53accf;}}
}
B53acad:L53acad:{c.instructions+=7;NFSU2_TR(0x53acad);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53acb1:{NFSU2_TR(0x53acb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53acb4:{NFSU2_TR(0x53acb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53acb5:{NFSU2_TR(0x53acb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53acb6:{NFSU2_TR(0x53acb6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53acb7:{NFSU2_TR(0x53acb7);
__builtin_memmove((R+4),(R+24),4);
}
B53acb9:{NFSU2_TR(0x53acb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53acbeull));
TAIL_STATIC(0x50e6f0u,50e);
}
B53acbe:L53acbe:{c.instructions+=3;NFSU2_TR(0x53acbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53acbf:{NFSU2_TR(0x53acbf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53acc0:{NFSU2_TR(0x53acc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53acc5ull));
TAIL_STATIC(0x50e640u,50e);
}
B53acc5:L53acc5:{c.instructions+=3;NFSU2_TR(0x53acc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53acc6:{NFSU2_TR(0x53acc6);
__builtin_memmove((R+4),(R+8),4);
}
B53acc8:{NFSU2_TR(0x53acc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53accdull));
TAIL_STATIC(0x5210a0u,521);
}
B53accd:L53accd:{c.instructions+=1;NFSU2_TR(0x53accd);
{goto L53acd1;}
}
B53accf:L53accf:{c.instructions+=1;NFSU2_TR(0x53accf);
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
B53acd1:L53acd1:{c.instructions+=4;NFSU2_TR(0x53acd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53acd3:{NFSU2_TR(0x53acd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53acd4:{NFSU2_TR(0x53acd4);
__builtin_memmove((R+4),(R+24),4);
}
B53acd6:{NFSU2_TR(0x53acd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53acd9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53acd9:L53acd9:{c.instructions+=5;NFSU2_TR(0x53acd9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53acdd:{NFSU2_TR(0x53acdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53acdf:{NFSU2_TR(0x53acdf);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
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
B53ace3:{NFSU2_TR(0x53ace3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ace7:{NFSU2_TR(0x53ace7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53ac51u);}goto L53ac51;}}
}
B53aced:L53aced:{c.instructions+=1;NFSU2_TR(0x53aced);
{goto L53ad91;}
}
B53acf2:L53acf2:{c.instructions+=1;NFSU2_TR(0x53acf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53acf7ull));
TAIL_STATIC(0x502fd0u,502);
}
B53acf7:L53acf7:{c.instructions+=3;NFSU2_TR(0x53acf7);
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
B53acf9:{NFSU2_TR(0x53acf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53acfd:{NFSU2_TR(0x53acfd);
if(r1(R+518)){{goto L53ad91;}}
}
B53ad03:L53ad03:{c.instructions+=4;NFSU2_TR(0x53ad03);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ad07:{NFSU2_TR(0x53ad07);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53ad0a:{NFSU2_TR(0x53ad0a);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ad0c:{NFSU2_TR(0x53ad0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ad11ull));
TAIL_STATIC(0x575620u,575);
}
B53ad11:L53ad11:{c.instructions+=4;NFSU2_TR(0x53ad11);
__builtin_memmove((R+8),(R+0),4);
}
B53ad13:{NFSU2_TR(0x53ad13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53ad16:{NFSU2_TR(0x53ad16);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53ad18:{NFSU2_TR(0x53ad18);
if(r1(R+518)){{goto L53ad73;}}
}
B53ad1a:L53ad1a:{c.instructions+=3;NFSU2_TR(0x53ad1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ad1b:{NFSU2_TR(0x53ad1b);
__builtin_memmove((R+4),(R+24),4);
}
B53ad1d:{NFSU2_TR(0x53ad1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ad22ull));
TAIL_STATIC(0x50e790u,50e);
}
B53ad22:L53ad22:{c.instructions+=3;NFSU2_TR(0x53ad22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ad23:{NFSU2_TR(0x53ad23);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ad27:{NFSU2_TR(0x53ad27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ad2cull));
TAIL_STATIC(0x50e820u,50e);
}
B53ad2c:L53ad2c:{c.instructions+=21;NFSU2_TR(0x53ad2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ad2f:{NFSU2_TR(0x53ad2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53ad33:{NFSU2_TR(0x53ad33);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ad36:{NFSU2_TR(0x53ad36);
w4(R+0,u32(0x3f800000ull));
}
B53ad3b:{NFSU2_TR(0x53ad3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ad3e:{NFSU2_TR(0x53ad3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ad41:{NFSU2_TR(0x53ad41);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ad44:{NFSU2_TR(0x53ad44);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ad47:{NFSU2_TR(0x53ad47);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53ad4b:{NFSU2_TR(0x53ad4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ad4e:{NFSU2_TR(0x53ad4e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ad51:{NFSU2_TR(0x53ad51);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ad54:{NFSU2_TR(0x53ad54);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ad57:{NFSU2_TR(0x53ad57);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ad5a:{NFSU2_TR(0x53ad5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ad5d:{NFSU2_TR(0x53ad5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ad60:{NFSU2_TR(0x53ad60);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53ad64:{NFSU2_TR(0x53ad64);
u8 U[4];
w4(U+0,u32(0x79b578ull));
s4(u32(r4(R+8)),r4(U+0));
}
B53ad6a:{NFSU2_TR(0x53ad6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ad6d:{NFSU2_TR(0x53ad6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x45ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53ad71:{NFSU2_TR(0x53ad71);
{goto L53ad75;}
}
B53ad73:L53ad73:{c.instructions+=1;NFSU2_TR(0x53ad73);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53ad75:L53ad75:{c.instructions+=4;NFSU2_TR(0x53ad75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53ad77:{NFSU2_TR(0x53ad77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ad78:{NFSU2_TR(0x53ad78);
__builtin_memmove((R+4),(R+24),4);
}
B53ad7a:{NFSU2_TR(0x53ad7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ad7dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53ad7d:L53ad7d:{c.instructions+=5;NFSU2_TR(0x53ad7d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ad81:{NFSU2_TR(0x53ad81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53ad83:{NFSU2_TR(0x53ad83);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
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
B53ad87:{NFSU2_TR(0x53ad87);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ad8b:{NFSU2_TR(0x53ad8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53ad03u);}goto L53ad03;}}
}
B53ad91:L53ad91:{c.instructions+=4;NFSU2_TR(0x53ad91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53ad94:{NFSU2_TR(0x53ad94);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B53ad97:{NFSU2_TR(0x53ad97);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ad98:{NFSU2_TR(0x53ad98);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ad9bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53ad9b:L53ad9b:{c.instructions+=3;NFSU2_TR(0x53ad9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53ad9d:{NFSU2_TR(0x53ad9d);
__builtin_memmove((R+4),(R+24),4);
}
B53ad9f:{NFSU2_TR(0x53ad9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ada2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53ada2:L53ada2:{c.instructions+=1;NFSU2_TR(0x53ada2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53ada6:L53ada6:{c.instructions+=4;NFSU2_TR(0x53ada6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53adaa:{NFSU2_TR(0x53adaa);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53adac:{NFSU2_TR(0x53adac);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53adb4:{NFSU2_TR(0x53adb4);
if(r1(R+518)){{goto L53add7;}}
}
B53adb6:L53adb6:{c.instructions+=7;NFSU2_TR(0x53adb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53adb8:{NFSU2_TR(0x53adb8);
__builtin_memmove((R+4),(R+28),4);
}
B53adba:{NFSU2_TR(0x53adba);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53adbd:{NFSU2_TR(0x53adbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B53adbf:{NFSU2_TR(0x53adbf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53adc0:{NFSU2_TR(0x53adc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53adc3:{NFSU2_TR(0x53adc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53adc8ull));
TAIL_STATIC(0x575630u,575);
}
B53adc8:L53adc8:{c.instructions+=5;NFSU2_TR(0x53adc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53adcc:{NFSU2_TR(0x53adcc);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53add0:{NFSU2_TR(0x53add0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53add3:{NFSU2_TR(0x53add3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53add5:{NFSU2_TR(0x53add5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53adb6u);}goto L53adb6;}}
}
B53add7:L53add7:{c.instructions+=7;NFSU2_TR(0x53add7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53addb:{NFSU2_TR(0x53addb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53addc:{NFSU2_TR(0x53addc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53addd:{NFSU2_TR(0x53addd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53adde:{NFSU2_TR(0x53adde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ade5:{NFSU2_TR(0x53ade5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53ade8:{NFSU2_TR(0x53ade8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53adf0:L53adf0:{c.instructions+=33;NFSU2_TR(0x53adf0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53adf2:{NFSU2_TR(0x53adf2);
u8 U[4];
w4(U+0,u32(0x7776f6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53adf7:{NFSU2_TR(0x53adf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53adfd:{NFSU2_TR(0x53adfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53adfe:{NFSU2_TR(0x53adfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ae05:{NFSU2_TR(0x53ae05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ae06:{NFSU2_TR(0x53ae06);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ae07:{NFSU2_TR(0x53ae07);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53ae09:{NFSU2_TR(0x53ae09);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B53ae0c:{NFSU2_TR(0x53ae0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ae0d:{NFSU2_TR(0x53ae0d);
__builtin_memmove((R+24),(R+4),4);
}
B53ae0f:{NFSU2_TR(0x53ae0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ae12:{NFSU2_TR(0x53ae12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ae15:{NFSU2_TR(0x53ae15);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B53ae18:{NFSU2_TR(0x53ae18);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B53ae1a:{NFSU2_TR(0x53ae1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ae1d:{NFSU2_TR(0x53ae1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ae20:{NFSU2_TR(0x53ae20);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ae23:{NFSU2_TR(0x53ae23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ae26:{NFSU2_TR(0x53ae26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ae29:{NFSU2_TR(0x53ae29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ae2c:{NFSU2_TR(0x53ae2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ae2f:{NFSU2_TR(0x53ae2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ae32:{NFSU2_TR(0x53ae32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ae35:{NFSU2_TR(0x53ae35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53ae3c:{NFSU2_TR(0x53ae3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ae3f:{NFSU2_TR(0x53ae3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ae42:{NFSU2_TR(0x53ae42);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ae46:{NFSU2_TR(0x53ae46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53ae48:{NFSU2_TR(0x53ae48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ae4b:{NFSU2_TR(0x53ae4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53ae4e:{NFSU2_TR(0x53ae4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ae52:{NFSU2_TR(0x53ae52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ae57ull));
TAIL_STATIC(0x40c910u,40c);
}
B53ae57:L53ae57:{c.instructions+=3;NFSU2_TR(0x53ae57);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x940ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53ae5d:{NFSU2_TR(0x53ae5d);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53ae62:{NFSU2_TR(0x53ae62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ae67ull));
TAIL_STATIC(0x40c910u,40c);
}
B53ae67:L53ae67:{c.instructions+=11;NFSU2_TR(0x53ae67);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53ae6b:{NFSU2_TR(0x53ae6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x123cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ae71:{NFSU2_TR(0x53ae71);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1240ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ae77:{NFSU2_TR(0x53ae77);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1241ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ae7d:{NFSU2_TR(0x53ae7d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1242ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53ae83:{NFSU2_TR(0x53ae83);
__builtin_memmove((R+0),(R+24),4);
}
B53ae85:{NFSU2_TR(0x53ae85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53ae86:{NFSU2_TR(0x53ae86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53ae87:{NFSU2_TR(0x53ae87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ae8e:{NFSU2_TR(0x53ae8e);
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
B53ae91:{NFSU2_TR(0x53ae91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53aea0:L53aea0:{c.instructions+=8;NFSU2_TR(0x53aea0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aea1:{NFSU2_TR(0x53aea1);
__builtin_memmove((R+20),(R+16),4);
}
B53aea3:{NFSU2_TR(0x53aea3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aea4:{NFSU2_TR(0x53aea4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aea5:{NFSU2_TR(0x53aea5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aea6:{NFSU2_TR(0x53aea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53aea9:{NFSU2_TR(0x53aea9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aeaa:{NFSU2_TR(0x53aeaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53aeafull));
TAIL_STATIC(0x60fee0u,60f);
}
B53aeaf:L53aeaf:{c.instructions+=4;NFSU2_TR(0x53aeaf);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B53aeb5:{NFSU2_TR(0x53aeb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53aeb7:{NFSU2_TR(0x53aeb7);
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
B53aeba:{NFSU2_TR(0x53aeba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53aebdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53aebd:L53aebd:{c.instructions+=7;NFSU2_TR(0x53aebd);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aebf:{NFSU2_TR(0x53aebf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aec1:{NFSU2_TR(0x53aec1);
__builtin_memmove((R+12),(R+0),4);
}
B53aec3:{NFSU2_TR(0x53aec3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aec4:{NFSU2_TR(0x53aec4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aec5:{NFSU2_TR(0x53aec5);
w4(R+4,u32(0x8a2b68ull));
}
B53aeca:{NFSU2_TR(0x53aeca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53aecfull));
TAIL_STATIC(0x61ba30u,61b);
}
B53aecf:L53aecf:{c.instructions+=3;NFSU2_TR(0x53aecf);
__builtin_memmove((R+24),(R+0),4);
}
B53aed1:{NFSU2_TR(0x53aed1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53aed3:{NFSU2_TR(0x53aed3);
if(r1(R+518)){{goto L53af0d;}}
}
B53aed5:L53aed5:{c.instructions+=5;NFSU2_TR(0x53aed5);
__builtin_memmove((R+4),gp(0x8389b0),4);
}
B53aedb:{NFSU2_TR(0x53aedb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aedc:{NFSU2_TR(0x53aedc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aedd:{NFSU2_TR(0x53aedd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aede:{NFSU2_TR(0x53aede);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53aee3ull));
TAIL_STATIC(0x50f0d0u,50f);
}
B53aee3:L53aee3:{c.instructions+=2;NFSU2_TR(0x53aee3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aee4:{NFSU2_TR(0x53aee4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53aee9ull));
TAIL_STATIC(0x52a010u,52a);
}
B53aee9:L53aee9:{c.instructions+=3;NFSU2_TR(0x53aee9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B53aeec:{NFSU2_TR(0x53aeec);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53aeee:{NFSU2_TR(0x53aeee);
if(r1(R+518)){{goto L53aef6;}}
}
B53aef0:L53aef0:{c.instructions+=2;NFSU2_TR(0x53aef0);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0xe0ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B53aef4:{NFSU2_TR(0x53aef4);
if(r1(R+518)){{goto L53af16;}}
}
B53aef6:L53aef6:{c.instructions+=7;NFSU2_TR(0x53aef6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aef8:{NFSU2_TR(0x53aef8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aefa:{NFSU2_TR(0x53aefa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aefb:{NFSU2_TR(0x53aefb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aefc:{NFSU2_TR(0x53aefc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aefd:{NFSU2_TR(0x53aefd);
w4(R+4,u32(0x8a2b68ull));
}
B53af02:{NFSU2_TR(0x53af02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53af07ull));
TAIL_STATIC(0x61ba50u,61b);
}
B53af07:L53af07:{c.instructions+=3;NFSU2_TR(0x53af07);
__builtin_memmove((R+24),(R+0),4);
}
B53af09:{NFSU2_TR(0x53af09);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53af0b:{NFSU2_TR(0x53af0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53aed5u);}goto L53aed5;}}
}
B53af0d:L53af0d:{c.instructions+=6;NFSU2_TR(0x53af0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53af0e:{NFSU2_TR(0x53af0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53af0f:{NFSU2_TR(0x53af0f);
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
B53af11:{NFSU2_TR(0x53af11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53af12:{NFSU2_TR(0x53af12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53af13:{NFSU2_TR(0x53af13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53af16:L53af16:{c.instructions+=6;NFSU2_TR(0x53af16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53af17:{NFSU2_TR(0x53af17);
__builtin_memmove((R+0),(R+24),4);
}
B53af19:{NFSU2_TR(0x53af19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53af1a:{NFSU2_TR(0x53af1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53af1b:{NFSU2_TR(0x53af1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53af1c:{NFSU2_TR(0x53af1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53af20:L53af20:{c.instructions+=9;NFSU2_TR(0x53af20);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53af26:{NFSU2_TR(0x53af26);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53af28:{NFSU2_TR(0x53af28);
u8 U[4];
w4(U+0,u32(0x7775c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53af2d:{NFSU2_TR(0x53af2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53af2e:{NFSU2_TR(0x53af2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53af32:{NFSU2_TR(0x53af32);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53af39:{NFSU2_TR(0x53af39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B53af3c:{NFSU2_TR(0x53af3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53af3e:{NFSU2_TR(0x53af3e);
if(r1(R+518)){TAIL_STATIC(0x53b0afu,53b);}
}
B53af44:L53af44:{c.instructions+=7;NFSU2_TR(0x53af44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53af47:{NFSU2_TR(0x53af47);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53af48:{NFSU2_TR(0x53af48);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B53af4c:{NFSU2_TR(0x53af4c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53af4d:{NFSU2_TR(0x53af4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53af50:{NFSU2_TR(0x53af50);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53af52:{NFSU2_TR(0x53af52);
if(r1(R+518)){TAIL_STATIC(0x53b084u,53b);}
}
B53af58:L53af58:{c.instructions+=10;NFSU2_TR(0x53af58);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53af59:{NFSU2_TR(0x53af59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53af5a:{NFSU2_TR(0x53af5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B53af5e:{NFSU2_TR(0x53af5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53af62:{NFSU2_TR(0x53af62);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53af66:{NFSU2_TR(0x53af66);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53af6a:{NFSU2_TR(0x53af6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+12),(U+0),4);
}
B53af6c:{NFSU2_TR(0x53af6c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53af6e:{NFSU2_TR(0x53af6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53af76:{NFSU2_TR(0x53af76);
if(r1(R+518)){{goto L53afb8;}}
}
B53af78:L53af78:{c.instructions+=2;NFSU2_TR(0x53af78);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53af7b:{NFSU2_TR(0x53af7b);
if(r1(R+518)){{goto L53afb2;}}
}
B53af7d:L53af7d:{c.instructions+=2;NFSU2_TR(0x53af7d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53af7f:{NFSU2_TR(0x53af7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53af84ull));
TAIL_STATIC(0x575620u,575);
}
B53af84:L53af84:{c.instructions+=3;NFSU2_TR(0x53af84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53af87:{NFSU2_TR(0x53af87);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53af89:{NFSU2_TR(0x53af89);
if(r1(R+518)){{goto L53af99;}}
}
B53af8b:L53af8b:{c.instructions+=5;NFSU2_TR(0x53af8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53af8e:{NFSU2_TR(0x53af8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53af91:{NFSU2_TR(0x53af91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53af94:{NFSU2_TR(0x53af94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53af97:{NFSU2_TR(0x53af97);
{goto L53af9b;}
}
B53af99:L53af99:{c.instructions+=1;NFSU2_TR(0x53af99);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53af9b:L53af9b:{c.instructions+=7;NFSU2_TR(0x53af9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53af9f:{NFSU2_TR(0x53af9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53afa1:{NFSU2_TR(0x53afa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53afa5:{NFSU2_TR(0x53afa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53afa8:{NFSU2_TR(0x53afa8);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53afac:{NFSU2_TR(0x53afac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53afae:{NFSU2_TR(0x53afae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53afb2:L53afb2:{c.instructions+=3;NFSU2_TR(0x53afb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B53afb4:{NFSU2_TR(0x53afb4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53afb6:{NFSU2_TR(0x53afb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53af78u);}goto L53af78;}}
}
B53afb8:L53afb8:{c.instructions+=3;NFSU2_TR(0x53afb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53afba:{NFSU2_TR(0x53afba);
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
B53afbc:{NFSU2_TR(0x53afbc);
if(r1(R+518)){{goto L53afdd;}}
}
B53afbe:L53afbe:{c.instructions+=1;NFSU2_TR(0x53afbe);
__builtin_memmove((R+28),(R+28),4);
}
B53afc0:L53afc0:{c.instructions+=6;NFSU2_TR(0x53afc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B53afc2:{NFSU2_TR(0x53afc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53afc5:{NFSU2_TR(0x53afc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B53afc7:{NFSU2_TR(0x53afc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53afc8:{NFSU2_TR(0x53afc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53afcb:{NFSU2_TR(0x53afcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53afd0ull));
TAIL_STATIC(0x575630u,575);
}
B53afd0:L53afd0:{c.instructions+=4;NFSU2_TR(0x53afd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53afd2:{NFSU2_TR(0x53afd2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53afd5:{NFSU2_TR(0x53afd5);
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
B53afd7:{NFSU2_TR(0x53afd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53afc0u);}goto L53afc0;}}
}
B53afd9:L53afd9:{c.instructions+=1;NFSU2_TR(0x53afd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53afdd:L53afdd:{c.instructions+=2;NFSU2_TR(0x53afdd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53afe1:{NFSU2_TR(0x53afe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53afe6ull));
TAIL_STATIC(0x502fd0u,502);
}
B53afe6:L53afe6:{c.instructions+=3;NFSU2_TR(0x53afe6);
__builtin_memmove((R+12),(R+0),4);
}
B53afe8:{NFSU2_TR(0x53afe8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53afea:{NFSU2_TR(0x53afea);
if(r1(R+518)){TAIL_STATIC(0x53b025u,53b);}
}
B53afec:L53afec:{c.instructions+=3;NFSU2_TR(0x53afec);
__builtin_memmove((R+16),(R+16),4);
}
B53aff0:{NFSU2_TR(0x53aff0);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53aff2:{NFSU2_TR(0x53aff2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53aff7ull));
TAIL_STATIC(0x575620u,575);
}
B53aff7:L53aff7:{c.instructions+=3;NFSU2_TR(0x53aff7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53affa:{NFSU2_TR(0x53affa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53affc:{NFSU2_TR(0x53affc);
if(r1(R+518)){TAIL_STATIC(0x53b00cu,53b);}
}
B53affe:L53affe:{c.instructions+=1;NFSU2_TR(0x53affe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x53b001u,53b);
}
XIT:NFSU2_TR_EXIT(0x53a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
