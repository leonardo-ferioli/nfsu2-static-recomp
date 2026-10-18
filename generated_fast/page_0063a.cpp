#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_41b(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48c(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_633(u8* __restrict R,Cpu& c);
u32 body_634(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_638(u8* __restrict R,Cpu& c);
u32 body_639(u8* __restrict R,Cpu& c);
u32 body_63b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x63a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x63a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_63a(u8* __restrict R,Cpu& c);
u32 page_63a(Cpu& c){return body_63a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_63a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x63a000:goto L63a000;
case 0x63a006:c.instructions+=7;goto B63a006;
case 0x63a007:c.instructions+=6;goto B63a007;
case 0x63a00e:c.instructions+=5;goto B63a00e;
case 0x63a011:c.instructions+=4;goto B63a011;
case 0x63a013:c.instructions+=3;goto B63a013;
case 0x63a014:c.instructions+=2;goto B63a014;
case 0x63a016:c.instructions+=1;goto B63a016;
case 0x63a01c:goto L63a01c;
case 0x63a01d:c.instructions+=3;goto B63a01d;
case 0x63a023:c.instructions+=2;goto B63a023;
case 0x63a025:c.instructions+=1;goto B63a025;
case 0x63a02b:goto L63a02b;
case 0x63a031:c.instructions+=3;goto B63a031;
case 0x63a033:c.instructions+=2;goto B63a033;
case 0x63a035:c.instructions+=1;goto B63a035;
case 0x63a03b:goto L63a03b;
case 0x63a041:c.instructions+=1;goto B63a041;
case 0x63a047:goto L63a047;
case 0x63a04d:c.instructions+=2;goto B63a04d;
case 0x63a04f:c.instructions+=1;goto B63a04f;
case 0x63a055:goto L63a055;
case 0x63a05b:c.instructions+=1;goto B63a05b;
case 0x63a061:goto L63a061;
case 0x63a067:c.instructions+=2;goto B63a067;
case 0x63a069:c.instructions+=1;goto B63a069;
case 0x63a06f:goto L63a06f;
case 0x63a075:c.instructions+=2;goto B63a075;
case 0x63a077:c.instructions+=1;goto B63a077;
case 0x63a079:goto L63a079;
case 0x63a07f:c.instructions+=1;goto B63a07f;
case 0x63a081:goto L63a081;
case 0x63a083:c.instructions+=2;goto B63a083;
case 0x63a085:c.instructions+=1;goto B63a085;
case 0x63a087:goto L63a087;
case 0x63a08b:goto L63a08b;
case 0x63a08e:c.instructions+=2;goto B63a08e;
case 0x63a08f:c.instructions+=1;goto B63a08f;
case 0x63a091:goto L63a091;
case 0x63a097:c.instructions+=8;goto B63a097;
case 0x63a098:c.instructions+=7;goto B63a098;
case 0x63a09e:c.instructions+=6;goto B63a09e;
case 0x63a09f:c.instructions+=5;goto B63a09f;
case 0x63a0a1:c.instructions+=4;goto B63a0a1;
case 0x63a0a5:c.instructions+=3;goto B63a0a5;
case 0x63a0a6:c.instructions+=2;goto B63a0a6;
case 0x63a0a8:c.instructions+=1;goto B63a0a8;
case 0x63a0ad:goto L63a0ad;
case 0x63a0af:c.instructions+=2;goto B63a0af;
case 0x63a0b9:c.instructions+=1;goto B63a0b9;
case 0x63a0bb:goto L63a0bb;
case 0x63a0bc:c.instructions+=3;goto B63a0bc;
case 0x63a0c0:c.instructions+=2;goto B63a0c0;
case 0x63a0c1:c.instructions+=1;goto B63a0c1;
case 0x63a0c6:goto L63a0c6;
case 0x63a0c9:goto L63a0c9;
case 0x63a0cf:c.instructions+=2;goto B63a0cf;
case 0x63a0d1:c.instructions+=1;goto B63a0d1;
case 0x63a0d3:goto L63a0d3;
case 0x63a0d7:c.instructions+=4;goto B63a0d7;
case 0x63a0dd:c.instructions+=3;goto B63a0dd;
case 0x63a0de:c.instructions+=2;goto B63a0de;
case 0x63a0e0:c.instructions+=1;goto B63a0e0;
case 0x63a0e5:goto L63a0e5;
case 0x63a0ef:goto L63a0ef;
case 0x63a0f5:c.instructions+=3;goto B63a0f5;
case 0x63a0f6:c.instructions+=2;goto B63a0f6;
case 0x63a0f8:c.instructions+=1;goto B63a0f8;
case 0x63a0fd:goto L63a0fd;
case 0x63a0ff:c.instructions+=2;goto B63a0ff;
case 0x63a100:c.instructions+=1;goto B63a100;
case 0x63a102:goto L63a102;
case 0x63a108:c.instructions+=3;goto B63a108;
case 0x63a109:c.instructions+=2;goto B63a109;
case 0x63a10b:c.instructions+=1;goto B63a10b;
case 0x63a110:goto L63a110;
case 0x63a112:c.instructions+=1;goto B63a112;
case 0x63a114:goto L63a114;
case 0x63a119:c.instructions+=1;goto B63a119;
case 0x63a11b:goto L63a11b;
case 0x63a11d:goto L63a11d;
case 0x63a124:c.instructions+=2;goto B63a124;
case 0x63a126:c.instructions+=1;goto B63a126;
case 0x63a128:goto L63a128;
case 0x63a12a:c.instructions+=1;goto B63a12a;
case 0x63a12c:goto L63a12c;
case 0x63a12d:c.instructions+=4;goto B63a12d;
case 0x63a12f:c.instructions+=3;goto B63a12f;
case 0x63a130:c.instructions+=2;goto B63a130;
case 0x63a136:c.instructions+=1;goto B63a136;
case 0x63a139:goto L63a139;
case 0x63a13f:c.instructions+=3;goto B63a13f;
case 0x63a140:c.instructions+=2;goto B63a140;
case 0x63a142:c.instructions+=1;goto B63a142;
case 0x63a147:goto L63a147;
case 0x63a14d:c.instructions+=3;goto B63a14d;
case 0x63a14e:c.instructions+=2;goto B63a14e;
case 0x63a150:c.instructions+=1;goto B63a150;
case 0x63a155:goto L63a155;
case 0x63a15b:c.instructions+=3;goto B63a15b;
case 0x63a15c:c.instructions+=2;goto B63a15c;
case 0x63a15e:c.instructions+=1;goto B63a15e;
case 0x63a163:goto L63a163;
case 0x63a166:c.instructions+=5;goto B63a166;
case 0x63a169:c.instructions+=4;goto B63a169;
case 0x63a16b:c.instructions+=3;goto B63a16b;
case 0x63a16e:c.instructions+=2;goto B63a16e;
case 0x63a170:c.instructions+=1;goto B63a170;
case 0x63a175:goto L63a175;
case 0x63a17b:c.instructions+=3;goto B63a17b;
case 0x63a17c:c.instructions+=2;goto B63a17c;
case 0x63a17d:c.instructions+=1;goto B63a17d;
case 0x63a182:goto L63a182;
case 0x63a185:c.instructions+=7;goto B63a185;
case 0x63a188:c.instructions+=6;goto B63a188;
case 0x63a18b:c.instructions+=5;goto B63a18b;
case 0x63a18c:c.instructions+=4;goto B63a18c;
case 0x63a18d:c.instructions+=3;goto B63a18d;
case 0x63a190:c.instructions+=2;goto B63a190;
case 0x63a193:c.instructions+=1;goto B63a193;
case 0x63a198:goto L63a198;
case 0x63a199:c.instructions+=4;goto B63a199;
case 0x63a19e:c.instructions+=3;goto B63a19e;
case 0x63a19f:c.instructions+=2;goto B63a19f;
case 0x63a1a5:c.instructions+=1;goto B63a1a5;
case 0x63a1b0:goto L63a1b0;
case 0x63a1b1:c.instructions+=7;goto B63a1b1;
case 0x63a1b2:c.instructions+=6;goto B63a1b2;
case 0x63a1b4:c.instructions+=5;goto B63a1b4;
case 0x63a1b7:c.instructions+=4;goto B63a1b7;
case 0x63a1b8:c.instructions+=3;goto B63a1b8;
case 0x63a1bb:c.instructions+=2;goto B63a1bb;
case 0x63a1bd:c.instructions+=1;goto B63a1bd;
case 0x63a1bf:goto L63a1bf;
case 0x63a1c0:goto L63a1c0;
case 0x63a1c2:c.instructions+=3;goto B63a1c2;
case 0x63a1c3:c.instructions+=2;goto B63a1c3;
case 0x63a1c5:c.instructions+=1;goto B63a1c5;
case 0x63a1ca:goto L63a1ca;
case 0x63a1cc:c.instructions+=1;goto B63a1cc;
case 0x63a1ce:goto L63a1ce;
case 0x63a1d0:c.instructions+=2;goto B63a1d0;
case 0x63a1d2:c.instructions+=1;goto B63a1d2;
case 0x63a1d4:goto L63a1d4;
case 0x63a1d8:c.instructions+=2;goto B63a1d8;
case 0x63a1da:c.instructions+=1;goto B63a1da;
case 0x63a1dc:goto L63a1dc;
case 0x63a1dd:c.instructions+=4;goto B63a1dd;
case 0x63a1de:c.instructions+=3;goto B63a1de;
case 0x63a1e0:c.instructions+=2;goto B63a1e0;
case 0x63a1e1:c.instructions+=1;goto B63a1e1;
case 0x63a1e4:goto L63a1e4;
case 0x63a1e5:c.instructions+=4;goto B63a1e5;
case 0x63a1e6:c.instructions+=3;goto B63a1e6;
case 0x63a1eb:c.instructions+=2;goto B63a1eb;
case 0x63a1ec:c.instructions+=1;goto B63a1ec;
case 0x63a1ef:goto L63a1ef;
case 0x63a1f1:c.instructions+=2;goto B63a1f1;
case 0x63a1f5:c.instructions+=1;goto B63a1f5;
case 0x63a1f6:goto L63a1f6;
case 0x63a1f9:c.instructions+=2;goto B63a1f9;
case 0x63a1fb:c.instructions+=1;goto B63a1fb;
case 0x63a1fd:goto L63a1fd;
case 0x63a200:goto L63a200;
case 0x63a203:c.instructions+=2;goto B63a203;
case 0x63a205:c.instructions+=1;goto B63a205;
case 0x63a207:goto L63a207;
case 0x63a20a:c.instructions+=1;goto B63a20a;
case 0x63a20c:goto L63a20c;
case 0x63a212:c.instructions+=2;goto B63a212;
case 0x63a219:c.instructions+=1;goto B63a219;
case 0x63a21b:goto L63a21b;
case 0x63a21c:c.instructions+=2;goto B63a21c;
case 0x63a21e:c.instructions+=1;goto B63a21e;
case 0x63a223:goto L63a223;
case 0x63a225:c.instructions+=1;goto B63a225;
case 0x63a227:goto L63a227;
case 0x63a22b:goto L63a22b;
case 0x63a22d:c.instructions+=2;goto B63a22d;
case 0x63a22f:c.instructions+=1;goto B63a22f;
case 0x63a231:goto L63a231;
case 0x63a232:c.instructions+=3;goto B63a232;
case 0x63a235:c.instructions+=2;goto B63a235;
case 0x63a239:c.instructions+=1;goto B63a239;
case 0x63a23b:goto L63a23b;
case 0x63a240:goto L63a240;
case 0x63a241:c.instructions+=5;goto B63a241;
case 0x63a242:c.instructions+=4;goto B63a242;
case 0x63a243:c.instructions+=3;goto B63a243;
case 0x63a245:c.instructions+=2;goto B63a245;
case 0x63a246:c.instructions+=1;goto B63a246;
case 0x63a249:goto L63a249;
case 0x63a24c:c.instructions+=2;goto B63a24c;
case 0x63a24e:c.instructions+=1;goto B63a24e;
case 0x63a250:goto L63a250;
case 0x63a255:goto L63a255;
case 0x63a25b:c.instructions+=3;goto B63a25b;
case 0x63a25d:c.instructions+=2;goto B63a25d;
case 0x63a25e:c.instructions+=1;goto B63a25e;
case 0x63a263:goto L63a263;
case 0x63a266:c.instructions+=6;goto B63a266;
case 0x63a267:c.instructions+=5;goto B63a267;
case 0x63a268:c.instructions+=4;goto B63a268;
case 0x63a269:c.instructions+=3;goto B63a269;
case 0x63a26e:c.instructions+=2;goto B63a26e;
case 0x63a26f:c.instructions+=1;goto B63a26f;
case 0x63a280:goto L63a280;
case 0x63a281:c.instructions+=9;goto B63a281;
case 0x63a282:c.instructions+=8;goto B63a282;
case 0x63a286:c.instructions+=7;goto B63a286;
case 0x63a288:c.instructions+=6;goto B63a288;
case 0x63a289:c.instructions+=5;goto B63a289;
case 0x63a28d:c.instructions+=4;goto B63a28d;
case 0x63a28e:c.instructions+=3;goto B63a28e;
case 0x63a28f:c.instructions+=2;goto B63a28f;
case 0x63a293:c.instructions+=1;goto B63a293;
case 0x63a295:goto L63a295;
case 0x63a297:goto L63a297;
case 0x63a299:c.instructions+=1;goto B63a299;
case 0x63a29e:goto L63a29e;
case 0x63a2a0:c.instructions+=2;goto B63a2a0;
case 0x63a2a2:c.instructions+=1;goto B63a2a2;
case 0x63a2a7:goto L63a2a7;
case 0x63a2aa:c.instructions+=3;goto B63a2aa;
case 0x63a2ac:c.instructions+=2;goto B63a2ac;
case 0x63a2ae:c.instructions+=1;goto B63a2ae;
case 0x63a2b0:goto L63a2b0;
case 0x63a2b2:c.instructions+=1;goto B63a2b2;
case 0x63a2b4:goto L63a2b4;
case 0x63a2b8:c.instructions+=2;goto B63a2b8;
case 0x63a2ba:c.instructions+=1;goto B63a2ba;
case 0x63a2bf:goto L63a2bf;
case 0x63a2c1:c.instructions+=1;goto B63a2c1;
case 0x63a2c3:goto L63a2c3;
case 0x63a2c5:c.instructions+=1;goto B63a2c5;
case 0x63a2ca:goto L63a2ca;
case 0x63a2cc:c.instructions+=2;goto B63a2cc;
case 0x63a2ce:c.instructions+=1;goto B63a2ce;
case 0x63a2d3:goto L63a2d3;
case 0x63a2d6:c.instructions+=3;goto B63a2d6;
case 0x63a2d8:c.instructions+=2;goto B63a2d8;
case 0x63a2da:c.instructions+=1;goto B63a2da;
case 0x63a2dc:goto L63a2dc;
case 0x63a2de:c.instructions+=1;goto B63a2de;
case 0x63a2e0:goto L63a2e0;
case 0x63a2e4:c.instructions+=2;goto B63a2e4;
case 0x63a2e6:c.instructions+=1;goto B63a2e6;
case 0x63a2eb:goto L63a2eb;
case 0x63a2ed:c.instructions+=1;goto B63a2ed;
case 0x63a2ef:goto L63a2ef;
case 0x63a2f1:c.instructions+=1;goto B63a2f1;
case 0x63a2f3:goto L63a2f3;
case 0x63a2f5:c.instructions+=1;goto B63a2f5;
case 0x63a2f7:goto L63a2f7;
case 0x63a2f8:c.instructions+=6;goto B63a2f8;
case 0x63a2f9:c.instructions+=5;goto B63a2f9;
case 0x63a2fa:c.instructions+=4;goto B63a2fa;
case 0x63a2ff:c.instructions+=3;goto B63a2ff;
case 0x63a300:c.instructions+=2;goto B63a300;
case 0x63a301:c.instructions+=1;goto B63a301;
case 0x63a304:goto L63a304;
case 0x63a305:c.instructions+=6;goto B63a305;
case 0x63a306:c.instructions+=5;goto B63a306;
case 0x63a307:c.instructions+=4;goto B63a307;
case 0x63a309:c.instructions+=3;goto B63a309;
case 0x63a30a:c.instructions+=2;goto B63a30a;
case 0x63a30b:c.instructions+=1;goto B63a30b;
case 0x63a310:goto L63a310;
case 0x63a315:c.instructions+=1;goto B63a315;
case 0x63a320:goto L63a320;
case 0x63a321:c.instructions+=4;goto B63a321;
case 0x63a323:c.instructions+=3;goto B63a323;
case 0x63a326:c.instructions+=2;goto B63a326;
case 0x63a32b:c.instructions+=1;goto B63a32b;
case 0x63a330:goto L63a330;
case 0x63a334:c.instructions+=5;goto B63a334;
case 0x63a338:c.instructions+=4;goto B63a338;
case 0x63a33b:c.instructions+=3;goto B63a33b;
case 0x63a33c:c.instructions+=2;goto B63a33c;
case 0x63a33d:c.instructions+=1;goto B63a33d;
case 0x63a33f:goto L63a33f;
case 0x63a341:c.instructions+=2;goto B63a341;
case 0x63a347:c.instructions+=1;goto B63a347;
case 0x63a34c:goto L63a34c;
case 0x63a34e:c.instructions+=5;goto B63a34e;
case 0x63a351:c.instructions+=4;goto B63a351;
case 0x63a353:c.instructions+=3;goto B63a353;
case 0x63a356:c.instructions+=2;goto B63a356;
case 0x63a357:c.instructions+=1;goto B63a357;
case 0x63a360:goto L63a360;
case 0x63a362:c.instructions+=18;goto B63a362;
case 0x63a367:c.instructions+=17;goto B63a367;
case 0x63a36d:c.instructions+=16;goto B63a36d;
case 0x63a36e:c.instructions+=15;goto B63a36e;
case 0x63a375:c.instructions+=14;goto B63a375;
case 0x63a376:c.instructions+=13;goto B63a376;
case 0x63a37b:c.instructions+=12;goto B63a37b;
case 0x63a37c:c.instructions+=11;goto B63a37c;
case 0x63a37d:c.instructions+=10;goto B63a37d;
case 0x63a37f:c.instructions+=9;goto B63a37f;
case 0x63a382:c.instructions+=8;goto B63a382;
case 0x63a384:c.instructions+=7;goto B63a384;
case 0x63a38a:c.instructions+=6;goto B63a38a;
case 0x63a38b:c.instructions+=5;goto B63a38b;
case 0x63a38e:c.instructions+=4;goto B63a38e;
case 0x63a390:c.instructions+=3;goto B63a390;
case 0x63a396:c.instructions+=2;goto B63a396;
case 0x63a39b:c.instructions+=1;goto B63a39b;
case 0x63a39e:goto L63a39e;
case 0x63a3a0:goto L63a3a0;
case 0x63a3a2:c.instructions+=2;goto B63a3a2;
case 0x63a3a7:c.instructions+=1;goto B63a3a7;
case 0x63a3aa:goto L63a3aa;
case 0x63a3ac:goto L63a3ac;
case 0x63a3b0:c.instructions+=9;goto B63a3b0;
case 0x63a3b4:c.instructions+=8;goto B63a3b4;
case 0x63a3b8:c.instructions+=7;goto B63a3b8;
case 0x63a3bb:c.instructions+=6;goto B63a3bb;
case 0x63a3c1:c.instructions+=5;goto B63a3c1;
case 0x63a3c5:c.instructions+=4;goto B63a3c5;
case 0x63a3c6:c.instructions+=3;goto B63a3c6;
case 0x63a3cc:c.instructions+=2;goto B63a3cc;
case 0x63a3d0:c.instructions+=1;goto B63a3d0;
case 0x63a3d5:goto L63a3d5;
case 0x63a3d7:c.instructions+=7;goto B63a3d7;
case 0x63a3dd:c.instructions+=6;goto B63a3dd;
case 0x63a3e3:c.instructions+=5;goto B63a3e3;
case 0x63a3e6:c.instructions+=4;goto B63a3e6;
case 0x63a3e9:c.instructions+=3;goto B63a3e9;
case 0x63a3ea:c.instructions+=2;goto B63a3ea;
case 0x63a3ef:c.instructions+=1;goto B63a3ef;
case 0x63a3f4:goto L63a3f4;
case 0x63a3f8:c.instructions+=16;goto B63a3f8;
case 0x63a3fb:c.instructions+=15;goto B63a3fb;
case 0x63a3fe:c.instructions+=14;goto B63a3fe;
case 0x63a401:c.instructions+=13;goto B63a401;
case 0x63a407:c.instructions+=12;goto B63a407;
case 0x63a40d:c.instructions+=11;goto B63a40d;
case 0x63a413:c.instructions+=10;goto B63a413;
case 0x63a41a:c.instructions+=9;goto B63a41a;
case 0x63a420:c.instructions+=8;goto B63a420;
case 0x63a423:c.instructions+=7;goto B63a423;
case 0x63a424:c.instructions+=6;goto B63a424;
case 0x63a426:c.instructions+=5;goto B63a426;
case 0x63a427:c.instructions+=4;goto B63a427;
case 0x63a428:c.instructions+=3;goto B63a428;
case 0x63a42f:c.instructions+=2;goto B63a42f;
case 0x63a432:c.instructions+=1;goto B63a432;
case 0x63a440:goto L63a440;
case 0x63a442:c.instructions+=11;goto B63a442;
case 0x63a447:c.instructions+=10;goto B63a447;
case 0x63a44d:c.instructions+=9;goto B63a44d;
case 0x63a44e:c.instructions+=8;goto B63a44e;
case 0x63a455:c.instructions+=7;goto B63a455;
case 0x63a456:c.instructions+=6;goto B63a456;
case 0x63a457:c.instructions+=5;goto B63a457;
case 0x63a459:c.instructions+=4;goto B63a459;
case 0x63a45d:c.instructions+=3;goto B63a45d;
case 0x63a465:c.instructions+=2;goto B63a465;
case 0x63a46f:c.instructions+=1;goto B63a46f;
case 0x63a474:goto L63a474;
case 0x63a47a:c.instructions+=2;goto B63a47a;
case 0x63a47f:c.instructions+=1;goto B63a47f;
case 0x63a484:goto L63a484;
case 0x63a487:c.instructions+=2;goto B63a487;
case 0x63a48f:c.instructions+=1;goto B63a48f;
case 0x63a494:goto L63a494;
case 0x63a498:c.instructions+=4;goto B63a498;
case 0x63a499:c.instructions+=3;goto B63a499;
case 0x63a4a0:c.instructions+=2;goto B63a4a0;
case 0x63a4a3:c.instructions+=1;goto B63a4a3;
case 0x63a4b0:goto L63a4b0;
case 0x63a4b4:c.instructions+=3;goto B63a4b4;
case 0x63a4b8:c.instructions+=2;goto B63a4b8;
case 0x63a4ba:c.instructions+=1;goto B63a4ba;
case 0x63a4bc:goto L63a4bc;
case 0x63a4be:c.instructions+=2;goto B63a4be;
case 0x63a4c1:c.instructions+=1;goto B63a4c1;
case 0x63a4c3:goto L63a4c3;
case 0x63a4c8:goto L63a4c8;
case 0x63a4d0:goto L63a4d0;
case 0x63a4d1:c.instructions+=5;goto B63a4d1;
case 0x63a4d2:c.instructions+=4;goto B63a4d2;
case 0x63a4d4:c.instructions+=3;goto B63a4d4;
case 0x63a4d6:c.instructions+=2;goto B63a4d6;
case 0x63a4d8:c.instructions+=1;goto B63a4d8;
case 0x63a4da:goto L63a4da;
case 0x63a4e0:goto L63a4e0;
case 0x63a4e3:c.instructions+=5;goto B63a4e3;
case 0x63a4e5:c.instructions+=4;goto B63a4e5;
case 0x63a4e7:c.instructions+=3;goto B63a4e7;
case 0x63a4ea:c.instructions+=2;goto B63a4ea;
case 0x63a4ec:c.instructions+=1;goto B63a4ec;
case 0x63a4f1:goto L63a4f1;
case 0x63a4f2:c.instructions+=1;goto B63a4f2;
case 0x63a4f7:goto L63a4f7;
case 0x63a4f9:c.instructions+=3;goto B63a4f9;
case 0x63a4fc:c.instructions+=2;goto B63a4fc;
case 0x63a4fe:c.instructions+=1;goto B63a4fe;
case 0x63a500:goto L63a500;
case 0x63a501:c.instructions+=2;goto B63a501;
case 0x63a502:c.instructions+=1;goto B63a502;
case 0x63a510:goto L63a510;
case 0x63a511:c.instructions+=4;goto B63a511;
case 0x63a512:c.instructions+=3;goto B63a512;
case 0x63a514:c.instructions+=2;goto B63a514;
case 0x63a516:c.instructions+=1;goto B63a516;
case 0x63a51b:goto L63a51b;
case 0x63a51d:c.instructions+=1;goto B63a51d;
case 0x63a51f:goto L63a51f;
case 0x63a520:goto L63a520;
case 0x63a523:c.instructions+=2;goto B63a523;
case 0x63a525:c.instructions+=1;goto B63a525;
case 0x63a527:goto L63a527;
case 0x63a529:c.instructions+=3;goto B63a529;
case 0x63a52c:c.instructions+=2;goto B63a52c;
case 0x63a52e:c.instructions+=1;goto B63a52e;
case 0x63a531:goto L63a531;
case 0x63a538:c.instructions+=3;goto B63a538;
case 0x63a53a:c.instructions+=2;goto B63a53a;
case 0x63a53c:c.instructions+=1;goto B63a53c;
case 0x63a53e:goto L63a53e;
case 0x63a540:c.instructions+=3;goto B63a540;
case 0x63a541:c.instructions+=2;goto B63a541;
case 0x63a542:c.instructions+=1;goto B63a542;
case 0x63a550:goto L63a550;
case 0x63a556:c.instructions+=13;goto B63a556;
case 0x63a558:c.instructions+=12;goto B63a558;
case 0x63a55d:c.instructions+=11;goto B63a55d;
case 0x63a55e:c.instructions+=10;goto B63a55e;
case 0x63a565:c.instructions+=9;goto B63a565;
case 0x63a567:c.instructions+=8;goto B63a567;
case 0x63a56a:c.instructions+=7;goto B63a56a;
case 0x63a56c:c.instructions+=6;goto B63a56c;
case 0x63a56f:c.instructions+=5;goto B63a56f;
case 0x63a572:c.instructions+=4;goto B63a572;
case 0x63a575:c.instructions+=3;goto B63a575;
case 0x63a580:c.instructions+=2;goto B63a580;
case 0x63a588:c.instructions+=1;goto B63a588;
case 0x63a58d:goto L63a58d;
case 0x63a591:c.instructions+=3;goto B63a591;
case 0x63a598:c.instructions+=2;goto B63a598;
case 0x63a59b:c.instructions+=1;goto B63a59b;
case 0x63a5a0:goto L63a5a0;
case 0x63a5a2:c.instructions+=9;goto B63a5a2;
case 0x63a5a7:c.instructions+=8;goto B63a5a7;
case 0x63a5ad:c.instructions+=7;goto B63a5ad;
case 0x63a5ae:c.instructions+=6;goto B63a5ae;
case 0x63a5b5:c.instructions+=5;goto B63a5b5;
case 0x63a5b6:c.instructions+=4;goto B63a5b6;
case 0x63a5b7:c.instructions+=3;goto B63a5b7;
case 0x63a5bc:c.instructions+=2;goto B63a5bc;
case 0x63a5be:c.instructions+=1;goto B63a5be;
case 0x63a5c3:goto L63a5c3;
case 0x63a5c6:c.instructions+=4;goto B63a5c6;
case 0x63a5ca:c.instructions+=3;goto B63a5ca;
case 0x63a5cc:c.instructions+=2;goto B63a5cc;
case 0x63a5d4:c.instructions+=1;goto B63a5d4;
case 0x63a5d6:goto L63a5d6;
case 0x63a5da:c.instructions+=4;goto B63a5da;
case 0x63a5db:c.instructions+=3;goto B63a5db;
case 0x63a5dc:c.instructions+=2;goto B63a5dc;
case 0x63a5de:c.instructions+=1;goto B63a5de;
case 0x63a5e3:goto L63a5e3;
case 0x63a5e5:goto L63a5e5;
case 0x63a5e7:goto L63a5e7;
case 0x63a5e8:c.instructions+=4;goto B63a5e8;
case 0x63a5ea:c.instructions+=3;goto B63a5ea;
case 0x63a5f2:c.instructions+=2;goto B63a5f2;
case 0x63a5f8:c.instructions+=1;goto B63a5f8;
case 0x63a5fd:goto L63a5fd;
case 0x63a601:c.instructions+=4;goto B63a601;
case 0x63a602:c.instructions+=3;goto B63a602;
case 0x63a609:c.instructions+=2;goto B63a609;
case 0x63a60c:c.instructions+=1;goto B63a60c;
case 0x63a610:goto L63a610;
case 0x63a611:c.instructions+=5;goto B63a611;
case 0x63a613:c.instructions+=4;goto B63a613;
case 0x63a619:c.instructions+=3;goto B63a619;
case 0x63a61a:c.instructions+=2;goto B63a61a;
case 0x63a61b:c.instructions+=1;goto B63a61b;
case 0x63a620:goto L63a620;
case 0x63a626:c.instructions+=2;goto B63a626;
case 0x63a628:c.instructions+=1;goto B63a628;
case 0x63a62a:goto L63a62a;
case 0x63a62c:c.instructions+=1;goto B63a62c;
case 0x63a631:goto L63a631;
case 0x63a632:c.instructions+=1;goto B63a632;
case 0x63a637:goto L63a637;
case 0x63a63a:goto L63a63a;
case 0x63a63b:c.instructions+=3;goto B63a63b;
case 0x63a645:c.instructions+=2;goto B63a645;
case 0x63a646:c.instructions+=1;goto B63a646;
case 0x63a650:goto L63a650;
case 0x63a656:c.instructions+=10;goto B63a656;
case 0x63a658:c.instructions+=9;goto B63a658;
case 0x63a65d:c.instructions+=8;goto B63a65d;
case 0x63a65e:c.instructions+=7;goto B63a65e;
case 0x63a665:c.instructions+=6;goto B63a665;
case 0x63a666:c.instructions+=5;goto B63a666;
case 0x63a667:c.instructions+=4;goto B63a667;
case 0x63a669:c.instructions+=3;goto B63a669;
case 0x63a66c:c.instructions+=2;goto B63a66c;
case 0x63a66e:c.instructions+=1;goto B63a66e;
case 0x63a670:goto L63a670;
case 0x63a672:c.instructions+=1;goto B63a672;
case 0x63a677:goto L63a677;
case 0x63a678:c.instructions+=1;goto B63a678;
case 0x63a67d:goto L63a67d;
case 0x63a680:c.instructions+=1;goto B63a680;
case 0x63a687:goto L63a687;
case 0x63a68b:c.instructions+=2;goto B63a68b;
case 0x63a68d:c.instructions+=1;goto B63a68d;
case 0x63a68f:goto L63a68f;
case 0x63a692:c.instructions+=3;goto B63a692;
case 0x63a693:c.instructions+=2;goto B63a693;
case 0x63a695:c.instructions+=1;goto B63a695;
case 0x63a69a:goto L63a69a;
case 0x63a69f:c.instructions+=1;goto B63a69f;
case 0x63a6a4:goto L63a6a4;
case 0x63a6a7:c.instructions+=4;goto B63a6a7;
case 0x63a6ab:c.instructions+=3;goto B63a6ab;
case 0x63a6ad:c.instructions+=2;goto B63a6ad;
case 0x63a6b5:c.instructions+=1;goto B63a6b5;
case 0x63a6b7:goto L63a6b7;
case 0x63a6b9:c.instructions+=3;goto B63a6b9;
case 0x63a6ba:c.instructions+=2;goto B63a6ba;
case 0x63a6bc:c.instructions+=1;goto B63a6bc;
case 0x63a6c1:goto L63a6c1;
case 0x63a6c3:goto L63a6c3;
case 0x63a6c5:goto L63a6c5;
case 0x63a6cd:c.instructions+=2;goto B63a6cd;
case 0x63a6d0:c.instructions+=1;goto B63a6d0;
case 0x63a6d5:goto L63a6d5;
case 0x63a6d9:c.instructions+=5;goto B63a6d9;
case 0x63a6da:c.instructions+=4;goto B63a6da;
case 0x63a6e1:c.instructions+=3;goto B63a6e1;
case 0x63a6e2:c.instructions+=2;goto B63a6e2;
case 0x63a6e5:c.instructions+=1;goto B63a6e5;
case 0x63a6f0:goto L63a6f0;
case 0x63a6f1:c.instructions+=7;goto B63a6f1;
case 0x63a6f2:c.instructions+=6;goto B63a6f2;
case 0x63a6f3:c.instructions+=5;goto B63a6f3;
case 0x63a6f5:c.instructions+=4;goto B63a6f5;
case 0x63a6f8:c.instructions+=3;goto B63a6f8;
case 0x63a6fa:c.instructions+=2;goto B63a6fa;
case 0x63a6fc:c.instructions+=1;goto B63a6fc;
case 0x63a6fe:goto L63a6fe;
case 0x63a701:c.instructions+=8;goto B63a701;
case 0x63a702:c.instructions+=7;goto B63a702;
case 0x63a705:c.instructions+=6;goto B63a705;
case 0x63a708:c.instructions+=5;goto B63a708;
case 0x63a70b:c.instructions+=4;goto B63a70b;
case 0x63a70d:c.instructions+=3;goto B63a70d;
case 0x63a70f:c.instructions+=2;goto B63a70f;
case 0x63a713:c.instructions+=1;goto B63a713;
case 0x63a715:goto L63a715;
case 0x63a716:goto L63a716;
case 0x63a718:c.instructions+=4;goto B63a718;
case 0x63a71a:c.instructions+=3;goto B63a71a;
case 0x63a71b:c.instructions+=2;goto B63a71b;
case 0x63a71d:c.instructions+=1;goto B63a71d;
case 0x63a722:goto L63a722;
case 0x63a724:c.instructions+=2;goto B63a724;
case 0x63a726:c.instructions+=1;goto B63a726;
case 0x63a728:goto L63a728;
case 0x63a729:goto L63a729;
case 0x63a72d:c.instructions+=4;goto B63a72d;
case 0x63a72e:c.instructions+=3;goto B63a72e;
case 0x63a72f:c.instructions+=2;goto B63a72f;
case 0x63a731:c.instructions+=1;goto B63a731;
case 0x63a736:goto L63a736;
case 0x63a737:c.instructions+=1;goto B63a737;
case 0x63a73c:goto L63a73c;
case 0x63a73f:c.instructions+=1;goto B63a73f;
case 0x63a740:goto L63a740;
case 0x63a741:c.instructions+=3;goto B63a741;
case 0x63a742:c.instructions+=2;goto B63a742;
case 0x63a743:c.instructions+=1;goto B63a743;
case 0x63a750:goto L63a750;
case 0x63a754:c.instructions+=6;goto B63a754;
case 0x63a756:c.instructions+=5;goto B63a756;
case 0x63a757:c.instructions+=4;goto B63a757;
case 0x63a758:c.instructions+=3;goto B63a758;
case 0x63a759:c.instructions+=2;goto B63a759;
case 0x63a75b:c.instructions+=1;goto B63a75b;
case 0x63a75d:goto L63a75d;
case 0x63a75f:c.instructions+=2;goto B63a75f;
case 0x63a764:c.instructions+=1;goto B63a764;
case 0x63a769:goto L63a769;
case 0x63a76d:c.instructions+=9;goto B63a76d;
case 0x63a76f:c.instructions+=8;goto B63a76f;
case 0x63a770:c.instructions+=7;goto B63a770;
case 0x63a775:c.instructions+=6;goto B63a775;
case 0x63a778:c.instructions+=5;goto B63a778;
case 0x63a77d:c.instructions+=4;goto B63a77d;
case 0x63a780:c.instructions+=3;goto B63a780;
case 0x63a781:c.instructions+=2;goto B63a781;
case 0x63a784:c.instructions+=1;goto B63a784;
case 0x63a789:goto L63a789;
case 0x63a78c:c.instructions+=3;goto B63a78c;
case 0x63a78d:c.instructions+=2;goto B63a78d;
case 0x63a792:c.instructions+=1;goto B63a792;
case 0x63a797:goto L63a797;
case 0x63a799:c.instructions+=2;goto B63a799;
case 0x63a79c:c.instructions+=1;goto B63a79c;
case 0x63a79e:goto L63a79e;
case 0x63a7a2:c.instructions+=3;goto B63a7a2;
case 0x63a7a7:c.instructions+=2;goto B63a7a7;
case 0x63a7ac:c.instructions+=1;goto B63a7ac;
case 0x63a7b1:goto L63a7b1;
case 0x63a7b2:c.instructions+=3;goto B63a7b2;
case 0x63a7b3:c.instructions+=2;goto B63a7b3;
case 0x63a7b4:c.instructions+=1;goto B63a7b4;
case 0x63a7b7:goto L63a7b7;
case 0x63a7bb:c.instructions+=8;goto B63a7bb;
case 0x63a7bc:c.instructions+=7;goto B63a7bc;
case 0x63a7be:c.instructions+=6;goto B63a7be;
case 0x63a7c0:c.instructions+=5;goto B63a7c0;
case 0x63a7c2:c.instructions+=4;goto B63a7c2;
case 0x63a7c5:c.instructions+=3;goto B63a7c5;
case 0x63a7c7:c.instructions+=2;goto B63a7c7;
case 0x63a7c8:c.instructions+=1;goto B63a7c8;
case 0x63a7cd:goto L63a7cd;
case 0x63a7ce:c.instructions+=2;goto B63a7ce;
case 0x63a7d1:c.instructions+=1;goto B63a7d1;
case 0x63a7d6:goto L63a7d6;
case 0x63a7d9:c.instructions+=5;goto B63a7d9;
case 0x63a7db:c.instructions+=4;goto B63a7db;
case 0x63a7dc:c.instructions+=3;goto B63a7dc;
case 0x63a7dd:c.instructions+=2;goto B63a7dd;
case 0x63a7df:c.instructions+=1;goto B63a7df;
case 0x63a7e4:goto L63a7e4;
case 0x63a7e6:c.instructions+=1;goto B63a7e6;
case 0x63a7e8:goto L63a7e8;
case 0x63a7ed:goto L63a7ed;
case 0x63a7f0:c.instructions+=5;goto B63a7f0;
case 0x63a7f3:c.instructions+=4;goto B63a7f3;
case 0x63a7f4:c.instructions+=3;goto B63a7f4;
case 0x63a7fa:c.instructions+=2;goto B63a7fa;
case 0x63a7fb:c.instructions+=1;goto B63a7fb;
case 0x63a800:goto L63a800;
case 0x63a805:c.instructions+=6;goto B63a805;
case 0x63a808:c.instructions+=5;goto B63a808;
case 0x63a809:c.instructions+=4;goto B63a809;
case 0x63a80c:c.instructions+=3;goto B63a80c;
case 0x63a80f:c.instructions+=2;goto B63a80f;
case 0x63a814:c.instructions+=1;goto B63a814;
case 0x63a819:goto L63a819;
case 0x63a81a:goto L63a81a;
case 0x63a81b:c.instructions+=3;goto B63a81b;
case 0x63a81c:c.instructions+=2;goto B63a81c;
case 0x63a81d:c.instructions+=1;goto B63a81d;
case 0x63a820:goto L63a820;
case 0x63a824:c.instructions+=8;goto B63a824;
case 0x63a825:c.instructions+=7;goto B63a825;
case 0x63a826:c.instructions+=6;goto B63a826;
case 0x63a82a:c.instructions+=5;goto B63a82a;
case 0x63a82c:c.instructions+=4;goto B63a82c;
case 0x63a82e:c.instructions+=3;goto B63a82e;
case 0x63a82f:c.instructions+=2;goto B63a82f;
case 0x63a831:c.instructions+=1;goto B63a831;
case 0x63a833:goto L63a833;
case 0x63a836:c.instructions+=4;goto B63a836;
case 0x63a838:c.instructions+=3;goto B63a838;
case 0x63a839:c.instructions+=2;goto B63a839;
case 0x63a83e:c.instructions+=1;goto B63a83e;
case 0x63a843:goto L63a843;
case 0x63a844:c.instructions+=7;goto B63a844;
case 0x63a84b:c.instructions+=6;goto B63a84b;
case 0x63a84c:c.instructions+=5;goto B63a84c;
case 0x63a84f:c.instructions+=4;goto B63a84f;
case 0x63a854:c.instructions+=3;goto B63a854;
case 0x63a855:c.instructions+=2;goto B63a855;
case 0x63a859:c.instructions+=1;goto B63a859;
case 0x63a85e:goto L63a85e;
case 0x63a861:c.instructions+=3;goto B63a861;
case 0x63a862:c.instructions+=2;goto B63a862;
case 0x63a867:c.instructions+=1;goto B63a867;
case 0x63a86c:goto L63a86c;
case 0x63a86d:c.instructions+=5;goto B63a86d;
case 0x63a870:c.instructions+=4;goto B63a870;
case 0x63a871:c.instructions+=3;goto B63a871;
case 0x63a876:c.instructions+=2;goto B63a876;
case 0x63a877:c.instructions+=1;goto B63a877;
case 0x63a880:goto L63a880;
case 0x63a886:c.instructions+=11;goto B63a886;
case 0x63a887:c.instructions+=10;goto B63a887;
case 0x63a888:c.instructions+=9;goto B63a888;
case 0x63a88c:c.instructions+=8;goto B63a88c;
case 0x63a88e:c.instructions+=7;goto B63a88e;
case 0x63a891:c.instructions+=6;goto B63a891;
case 0x63a897:c.instructions+=5;goto B63a897;
case 0x63a898:c.instructions+=4;goto B63a898;
case 0x63a89f:c.instructions+=3;goto B63a89f;
case 0x63a8a4:c.instructions+=2;goto B63a8a4;
case 0x63a8a6:c.instructions+=1;goto B63a8a6;
case 0x63a8a8:goto L63a8a8;
case 0x63a8a9:c.instructions+=5;goto B63a8a9;
case 0x63a8ac:c.instructions+=4;goto B63a8ac;
case 0x63a8ad:c.instructions+=3;goto B63a8ad;
case 0x63a8af:c.instructions+=2;goto B63a8af;
case 0x63a8b0:c.instructions+=1;goto B63a8b0;
case 0x63a8b3:goto L63a8b3;
case 0x63a8b6:c.instructions+=6;goto B63a8b6;
case 0x63a8b8:c.instructions+=5;goto B63a8b8;
case 0x63a8b9:c.instructions+=4;goto B63a8b9;
case 0x63a8bc:c.instructions+=3;goto B63a8bc;
case 0x63a8bd:c.instructions+=2;goto B63a8bd;
case 0x63a8c2:c.instructions+=1;goto B63a8c2;
case 0x63a8c7:goto L63a8c7;
case 0x63a8c9:c.instructions+=1;goto B63a8c9;
case 0x63a8cb:goto L63a8cb;
case 0x63a8d0:goto L63a8d0;
case 0x63a8d2:c.instructions+=2;goto B63a8d2;
case 0x63a8d4:c.instructions+=1;goto B63a8d4;
case 0x63a8d9:goto L63a8d9;
case 0x63a8db:c.instructions+=1;goto B63a8db;
case 0x63a8dd:goto L63a8dd;
case 0x63a8e0:c.instructions+=5;goto B63a8e0;
case 0x63a8e2:c.instructions+=4;goto B63a8e2;
case 0x63a8e3:c.instructions+=3;goto B63a8e3;
case 0x63a8e4:c.instructions+=2;goto B63a8e4;
case 0x63a8e9:c.instructions+=1;goto B63a8e9;
case 0x63a8ee:goto L63a8ee;
case 0x63a8f0:c.instructions+=1;goto B63a8f0;
case 0x63a8f2:goto L63a8f2;
case 0x63a8f4:c.instructions+=8;goto B63a8f4;
case 0x63a8f5:c.instructions+=7;goto B63a8f5;
case 0x63a8f9:c.instructions+=6;goto B63a8f9;
case 0x63a900:c.instructions+=5;goto B63a900;
case 0x63a903:c.instructions+=4;goto B63a903;
case 0x63a908:c.instructions+=3;goto B63a908;
case 0x63a909:c.instructions+=2;goto B63a909;
case 0x63a90a:c.instructions+=1;goto B63a90a;
case 0x63a90f:goto L63a90f;
case 0x63a912:c.instructions+=5;goto B63a912;
case 0x63a913:c.instructions+=4;goto B63a913;
case 0x63a914:c.instructions+=3;goto B63a914;
case 0x63a919:c.instructions+=2;goto B63a919;
case 0x63a91a:c.instructions+=1;goto B63a91a;
case 0x63a920:goto L63a920;
case 0x63a926:c.instructions+=9;goto B63a926;
case 0x63a929:c.instructions+=8;goto B63a929;
case 0x63a92a:c.instructions+=7;goto B63a92a;
case 0x63a92b:c.instructions+=6;goto B63a92b;
case 0x63a92e:c.instructions+=5;goto B63a92e;
case 0x63a92f:c.instructions+=4;goto B63a92f;
case 0x63a931:c.instructions+=3;goto B63a931;
case 0x63a933:c.instructions+=2;goto B63a933;
case 0x63a937:c.instructions+=1;goto B63a937;
case 0x63a93d:goto L63a93d;
case 0x63a942:c.instructions+=1;goto B63a942;
case 0x63a943:goto L63a943;
case 0x63a946:c.instructions+=2;goto B63a946;
case 0x63a948:c.instructions+=1;goto B63a948;
case 0x63a94a:goto L63a94a;
case 0x63a950:c.instructions+=3;goto B63a950;
case 0x63a953:c.instructions+=2;goto B63a953;
case 0x63a955:c.instructions+=1;goto B63a955;
case 0x63a957:goto L63a957;
case 0x63a95a:c.instructions+=3;goto B63a95a;
case 0x63a95d:c.instructions+=2;goto B63a95d;
case 0x63a960:c.instructions+=1;goto B63a960;
case 0x63a965:goto L63a965;
case 0x63a968:c.instructions+=2;goto B63a968;
case 0x63a96a:c.instructions+=1;goto B63a96a;
case 0x63a96c:goto L63a96c;
case 0x63a970:c.instructions+=1;goto B63a970;
case 0x63a971:goto L63a971;
case 0x63a973:c.instructions+=2;goto B63a973;
case 0x63a975:c.instructions+=1;goto B63a975;
case 0x63a977:goto L63a977;
case 0x63a97b:c.instructions+=1;goto B63a97b;
case 0x63a97c:goto L63a97c;
case 0x63a97f:c.instructions+=2;goto B63a97f;
case 0x63a981:c.instructions+=1;goto B63a981;
case 0x63a983:goto L63a983;
case 0x63a987:c.instructions+=1;goto B63a987;
case 0x63a988:goto L63a988;
case 0x63a98b:c.instructions+=2;goto B63a98b;
case 0x63a98d:c.instructions+=1;goto B63a98d;
case 0x63a98f:goto L63a98f;
case 0x63a993:c.instructions+=1;goto B63a993;
case 0x63a994:goto L63a994;
case 0x63a997:c.instructions+=2;goto B63a997;
case 0x63a998:c.instructions+=1;goto B63a998;
case 0x63a99a:goto L63a99a;
case 0x63a99c:c.instructions+=2;goto B63a99c;
case 0x63a99e:c.instructions+=1;goto B63a99e;
case 0x63a9a0:goto L63a9a0;
case 0x63a9a2:c.instructions+=2;goto B63a9a2;
case 0x63a9a3:c.instructions+=1;goto B63a9a3;
case 0x63a9a5:goto L63a9a5;
case 0x63a9a7:c.instructions+=5;goto B63a9a7;
case 0x63a9a8:c.instructions+=4;goto B63a9a8;
case 0x63a9ac:c.instructions+=3;goto B63a9ac;
case 0x63a9ad:c.instructions+=2;goto B63a9ad;
case 0x63a9b2:c.instructions+=1;goto B63a9b2;
case 0x63a9b7:goto L63a9b7;
case 0x63a9b9:c.instructions+=1;goto B63a9b9;
case 0x63a9bb:goto L63a9bb;
case 0x63a9c0:goto L63a9c0;
case 0x63a9c4:c.instructions+=2;goto B63a9c4;
case 0x63a9c5:c.instructions+=1;goto B63a9c5;
case 0x63a9ca:goto L63a9ca;
case 0x63a9cc:c.instructions+=1;goto B63a9cc;
case 0x63a9ce:goto L63a9ce;
case 0x63a9d0:c.instructions+=5;goto B63a9d0;
case 0x63a9d1:c.instructions+=4;goto B63a9d1;
case 0x63a9d5:c.instructions+=3;goto B63a9d5;
case 0x63a9d6:c.instructions+=2;goto B63a9d6;
case 0x63a9db:c.instructions+=1;goto B63a9db;
case 0x63a9e0:goto L63a9e0;
case 0x63a9e2:c.instructions+=1;goto B63a9e2;
case 0x63a9e4:goto L63a9e4;
case 0x63a9e8:c.instructions+=8;goto B63a9e8;
case 0x63a9ea:c.instructions+=7;goto B63a9ea;
case 0x63a9ec:c.instructions+=6;goto B63a9ec;
case 0x63a9f1:c.instructions+=5;goto B63a9f1;
case 0x63a9f5:c.instructions+=4;goto B63a9f5;
case 0x63a9f6:c.instructions+=3;goto B63a9f6;
case 0x63a9f7:c.instructions+=2;goto B63a9f7;
case 0x63a9fa:c.instructions+=1;goto B63a9fa;
case 0x63a9ff:goto L63a9ff;
case 0x63aa02:c.instructions+=6;goto B63aa02;
case 0x63aa03:c.instructions+=5;goto B63aa03;
case 0x63aa04:c.instructions+=4;goto B63aa04;
case 0x63aa06:c.instructions+=3;goto B63aa06;
case 0x63aa07:c.instructions+=2;goto B63aa07;
case 0x63aa0d:c.instructions+=1;goto B63aa0d;
case 0x63aa0e:goto L63aa0e;
case 0x63aa0f:c.instructions+=5;goto B63aa0f;
case 0x63aa10:c.instructions+=4;goto B63aa10;
case 0x63aa12:c.instructions+=3;goto B63aa12;
case 0x63aa13:c.instructions+=2;goto B63aa13;
case 0x63aa19:c.instructions+=1;goto B63aa19;
case 0x63aa20:goto L63aa20;
case 0x63aa26:c.instructions+=11;goto B63aa26;
case 0x63aa27:c.instructions+=10;goto B63aa27;
case 0x63aa28:c.instructions+=9;goto B63aa28;
case 0x63aa2a:c.instructions+=8;goto B63aa2a;
case 0x63aa2b:c.instructions+=7;goto B63aa2b;
case 0x63aa2e:c.instructions+=6;goto B63aa2e;
case 0x63aa2f:c.instructions+=5;goto B63aa2f;
case 0x63aa31:c.instructions+=4;goto B63aa31;
case 0x63aa33:c.instructions+=3;goto B63aa33;
case 0x63aa35:c.instructions+=2;goto B63aa35;
case 0x63aa39:c.instructions+=1;goto B63aa39;
case 0x63aa3f:goto L63aa3f;
case 0x63aa44:goto L63aa44;
case 0x63aa47:c.instructions+=2;goto B63aa47;
case 0x63aa49:c.instructions+=1;goto B63aa49;
case 0x63aa4f:goto L63aa4f;
case 0x63aa55:c.instructions+=3;goto B63aa55;
case 0x63aa58:c.instructions+=2;goto B63aa58;
case 0x63aa5a:c.instructions+=1;goto B63aa5a;
case 0x63aa5c:goto L63aa5c;
case 0x63aa5f:c.instructions+=3;goto B63aa5f;
case 0x63aa61:c.instructions+=2;goto B63aa61;
case 0x63aa63:c.instructions+=1;goto B63aa63;
case 0x63aa65:goto L63aa65;
case 0x63aa68:c.instructions+=1;goto B63aa68;
case 0x63aa6a:goto L63aa6a;
case 0x63aa6d:c.instructions+=3;goto B63aa6d;
case 0x63aa70:c.instructions+=2;goto B63aa70;
case 0x63aa74:c.instructions+=1;goto B63aa74;
case 0x63aa76:goto L63aa76;
case 0x63aa79:c.instructions+=2;goto B63aa79;
case 0x63aa7b:c.instructions+=1;goto B63aa7b;
case 0x63aa7d:goto L63aa7d;
case 0x63aa81:c.instructions+=1;goto B63aa81;
case 0x63aa83:goto L63aa83;
case 0x63aa86:c.instructions+=4;goto B63aa86;
case 0x63aa89:c.instructions+=3;goto B63aa89;
case 0x63aa8c:c.instructions+=2;goto B63aa8c;
case 0x63aa90:c.instructions+=1;goto B63aa90;
case 0x63aa91:goto L63aa91;
case 0x63aa94:c.instructions+=2;goto B63aa94;
case 0x63aa96:c.instructions+=1;goto B63aa96;
case 0x63aa98:goto L63aa98;
case 0x63aa9c:c.instructions+=1;goto B63aa9c;
case 0x63aa9e:goto L63aa9e;
case 0x63aaa1:c.instructions+=4;goto B63aaa1;
case 0x63aaa4:c.instructions+=3;goto B63aaa4;
case 0x63aaa7:c.instructions+=2;goto B63aaa7;
case 0x63aaab:c.instructions+=1;goto B63aaab;
case 0x63aaac:goto L63aaac;
case 0x63aaaf:c.instructions+=2;goto B63aaaf;
case 0x63aab1:c.instructions+=1;goto B63aab1;
case 0x63aab3:goto L63aab3;
case 0x63aab7:c.instructions+=1;goto B63aab7;
case 0x63aab9:goto L63aab9;
case 0x63aabc:c.instructions+=4;goto B63aabc;
case 0x63aabf:c.instructions+=3;goto B63aabf;
case 0x63aac2:c.instructions+=2;goto B63aac2;
case 0x63aac6:c.instructions+=1;goto B63aac6;
case 0x63aac7:goto L63aac7;
case 0x63aacb:c.instructions+=6;goto B63aacb;
case 0x63aacd:c.instructions+=5;goto B63aacd;
case 0x63aad0:c.instructions+=4;goto B63aad0;
case 0x63aad2:c.instructions+=3;goto B63aad2;
case 0x63aad5:c.instructions+=2;goto B63aad5;
case 0x63aad8:c.instructions+=1;goto B63aad8;
case 0x63aada:goto L63aada;
case 0x63aadd:c.instructions+=2;goto B63aadd;
case 0x63aadf:c.instructions+=1;goto B63aadf;
case 0x63aae1:goto L63aae1;
case 0x63aae5:goto L63aae5;
case 0x63aae7:c.instructions+=3;goto B63aae7;
case 0x63aaea:c.instructions+=2;goto B63aaea;
case 0x63aaec:c.instructions+=1;goto B63aaec;
case 0x63aaf2:goto L63aaf2;
case 0x63aaf4:c.instructions+=1;goto B63aaf4;
case 0x63aaf6:goto L63aaf6;
case 0x63aaf8:c.instructions+=5;goto B63aaf8;
case 0x63aaf9:c.instructions+=4;goto B63aaf9;
case 0x63aafd:c.instructions+=3;goto B63aafd;
case 0x63aafe:c.instructions+=2;goto B63aafe;
case 0x63ab03:c.instructions+=1;goto B63ab03;
case 0x63ab08:goto L63ab08;
case 0x63ab0a:c.instructions+=1;goto B63ab0a;
case 0x63ab0c:goto L63ab0c;
case 0x63ab10:goto L63ab10;
case 0x63ab11:c.instructions+=2;goto B63ab11;
case 0x63ab13:c.instructions+=1;goto B63ab13;
case 0x63ab18:goto L63ab18;
case 0x63ab1a:c.instructions+=1;goto B63ab1a;
case 0x63ab1c:goto L63ab1c;
case 0x63ab1e:c.instructions+=5;goto B63ab1e;
case 0x63ab1f:c.instructions+=4;goto B63ab1f;
case 0x63ab23:c.instructions+=3;goto B63ab23;
case 0x63ab24:c.instructions+=2;goto B63ab24;
case 0x63ab29:c.instructions+=1;goto B63ab29;
case 0x63ab2e:goto L63ab2e;
case 0x63ab30:c.instructions+=1;goto B63ab30;
case 0x63ab32:goto L63ab32;
case 0x63ab34:c.instructions+=7;goto B63ab34;
case 0x63ab36:c.instructions+=6;goto B63ab36;
case 0x63ab3b:c.instructions+=5;goto B63ab3b;
case 0x63ab3f:c.instructions+=4;goto B63ab3f;
case 0x63ab40:c.instructions+=3;goto B63ab40;
case 0x63ab41:c.instructions+=2;goto B63ab41;
case 0x63ab44:c.instructions+=1;goto B63ab44;
case 0x63ab49:goto L63ab49;
case 0x63ab4c:c.instructions+=7;goto B63ab4c;
case 0x63ab4d:c.instructions+=6;goto B63ab4d;
case 0x63ab4e:c.instructions+=5;goto B63ab4e;
case 0x63ab4f:c.instructions+=4;goto B63ab4f;
case 0x63ab51:c.instructions+=3;goto B63ab51;
case 0x63ab52:c.instructions+=2;goto B63ab52;
case 0x63ab58:c.instructions+=1;goto B63ab58;
case 0x63ab59:goto L63ab59;
case 0x63ab5a:c.instructions+=6;goto B63ab5a;
case 0x63ab5b:c.instructions+=5;goto B63ab5b;
case 0x63ab5c:c.instructions+=4;goto B63ab5c;
case 0x63ab5e:c.instructions+=3;goto B63ab5e;
case 0x63ab5f:c.instructions+=2;goto B63ab5f;
case 0x63ab65:c.instructions+=1;goto B63ab65;
case 0x63ab70:goto L63ab70;
case 0x63ab76:c.instructions+=9;goto B63ab76;
case 0x63ab77:c.instructions+=8;goto B63ab77;
case 0x63ab78:c.instructions+=7;goto B63ab78;
case 0x63ab79:c.instructions+=6;goto B63ab79;
case 0x63ab7b:c.instructions+=5;goto B63ab7b;
case 0x63ab7e:c.instructions+=4;goto B63ab7e;
case 0x63ab7f:c.instructions+=3;goto B63ab7f;
case 0x63ab82:c.instructions+=2;goto B63ab82;
case 0x63ab84:c.instructions+=1;goto B63ab84;
case 0x63ab86:goto L63ab86;
case 0x63ab8d:c.instructions+=1;goto B63ab8d;
case 0x63ab90:goto L63ab90;
case 0x63ab93:c.instructions+=2;goto B63ab93;
case 0x63ab95:c.instructions+=1;goto B63ab95;
case 0x63ab97:goto L63ab97;
case 0x63ab9a:c.instructions+=2;goto B63ab9a;
case 0x63ab9c:c.instructions+=1;goto B63ab9c;
case 0x63ab9e:goto L63ab9e;
case 0x63aba5:c.instructions+=6;goto B63aba5;
case 0x63abab:c.instructions+=5;goto B63abab;
case 0x63abad:c.instructions+=4;goto B63abad;
case 0x63abb0:c.instructions+=3;goto B63abb0;
case 0x63abb5:c.instructions+=2;goto B63abb5;
case 0x63abb6:c.instructions+=1;goto B63abb6;
case 0x63abb8:goto L63abb8;
case 0x63abba:c.instructions+=4;goto B63abba;
case 0x63abbb:c.instructions+=3;goto B63abbb;
case 0x63abc1:c.instructions+=2;goto B63abc1;
case 0x63abc4:c.instructions+=1;goto B63abc4;
case 0x63abc6:goto L63abc6;
case 0x63abc8:c.instructions+=3;goto B63abc8;
case 0x63abc9:c.instructions+=2;goto B63abc9;
case 0x63abcf:c.instructions+=1;goto B63abcf;
case 0x63abd4:goto L63abd4;
case 0x63abd8:c.instructions+=5;goto B63abd8;
case 0x63abd9:c.instructions+=4;goto B63abd9;
case 0x63abda:c.instructions+=3;goto B63abda;
case 0x63abdc:c.instructions+=2;goto B63abdc;
case 0x63abdd:c.instructions+=1;goto B63abdd;
case 0x63abe2:goto L63abe2;
case 0x63abe5:goto L63abe5;
case 0x63abe7:c.instructions+=2;goto B63abe7;
case 0x63abe9:c.instructions+=1;goto B63abe9;
case 0x63abeb:goto L63abeb;
case 0x63abee:c.instructions+=3;goto B63abee;
case 0x63abf0:c.instructions+=2;goto B63abf0;
case 0x63abf2:c.instructions+=1;goto B63abf2;
case 0x63abf4:goto L63abf4;
case 0x63abf7:c.instructions+=2;goto B63abf7;
case 0x63abf9:c.instructions+=1;goto B63abf9;
case 0x63ac00:goto L63ac00;
case 0x63ac02:c.instructions+=2;goto B63ac02;
case 0x63ac04:c.instructions+=1;goto B63ac04;
case 0x63ac06:goto L63ac06;
case 0x63ac09:c.instructions+=2;goto B63ac09;
case 0x63ac0b:c.instructions+=1;goto B63ac0b;
case 0x63ac0d:goto L63ac0d;
case 0x63ac11:c.instructions+=3;goto B63ac11;
case 0x63ac14:c.instructions+=2;goto B63ac14;
case 0x63ac18:c.instructions+=1;goto B63ac18;
case 0x63ac19:goto L63ac19;
case 0x63ac1c:c.instructions+=2;goto B63ac1c;
case 0x63ac1d:c.instructions+=1;goto B63ac1d;
case 0x63ac1f:goto L63ac1f;
case 0x63ac21:c.instructions+=1;goto B63ac21;
case 0x63ac23:goto L63ac23;
case 0x63ac26:c.instructions+=2;goto B63ac26;
case 0x63ac28:c.instructions+=1;goto B63ac28;
case 0x63ac2a:goto L63ac2a;
case 0x63ac2d:c.instructions+=2;goto B63ac2d;
case 0x63ac2f:c.instructions+=1;goto B63ac2f;
case 0x63ac30:goto L63ac30;
case 0x63ac32:c.instructions+=2;goto B63ac32;
case 0x63ac34:c.instructions+=1;goto B63ac34;
case 0x63ac36:goto L63ac36;
case 0x63ac3a:goto L63ac3a;
case 0x63ac3d:c.instructions+=2;goto B63ac3d;
case 0x63ac3e:c.instructions+=1;goto B63ac3e;
case 0x63ac40:goto L63ac40;
case 0x63ac41:c.instructions+=7;goto B63ac41;
case 0x63ac48:c.instructions+=6;goto B63ac48;
case 0x63ac49:c.instructions+=5;goto B63ac49;
case 0x63ac4a:c.instructions+=4;goto B63ac4a;
case 0x63ac4c:c.instructions+=3;goto B63ac4c;
case 0x63ac4d:c.instructions+=2;goto B63ac4d;
case 0x63ac53:c.instructions+=1;goto B63ac53;
case 0x63ac56:goto L63ac56;
case 0x63ac5d:c.instructions+=3;goto B63ac5d;
case 0x63ac5f:c.instructions+=2;goto B63ac5f;
case 0x63ac61:c.instructions+=1;goto B63ac61;
case 0x63ac63:goto L63ac63;
case 0x63ac67:c.instructions+=1;goto B63ac67;
case 0x63ac69:goto L63ac69;
case 0x63ac6e:c.instructions+=6;goto B63ac6e;
case 0x63ac6f:c.instructions+=5;goto B63ac6f;
case 0x63ac70:c.instructions+=4;goto B63ac70;
case 0x63ac74:c.instructions+=3;goto B63ac74;
case 0x63ac75:c.instructions+=2;goto B63ac75;
case 0x63ac7a:c.instructions+=1;goto B63ac7a;
case 0x63ac7f:goto L63ac7f;
case 0x63ac81:c.instructions+=1;goto B63ac81;
case 0x63ac83:goto L63ac83;
case 0x63ac85:c.instructions+=2;goto B63ac85;
case 0x63ac87:c.instructions+=1;goto B63ac87;
case 0x63ac8c:goto L63ac8c;
case 0x63ac8e:c.instructions+=1;goto B63ac8e;
case 0x63ac90:goto L63ac90;
case 0x63ac92:c.instructions+=5;goto B63ac92;
case 0x63ac93:c.instructions+=4;goto B63ac93;
case 0x63ac97:c.instructions+=3;goto B63ac97;
case 0x63ac98:c.instructions+=2;goto B63ac98;
case 0x63ac9d:c.instructions+=1;goto B63ac9d;
case 0x63aca2:goto L63aca2;
case 0x63aca4:c.instructions+=1;goto B63aca4;
case 0x63aca6:goto L63aca6;
case 0x63aca7:c.instructions+=7;goto B63aca7;
case 0x63aca9:c.instructions+=6;goto B63aca9;
case 0x63acae:c.instructions+=5;goto B63acae;
case 0x63acb2:c.instructions+=4;goto B63acb2;
case 0x63acb3:c.instructions+=3;goto B63acb3;
case 0x63acb4:c.instructions+=2;goto B63acb4;
case 0x63acbb:c.instructions+=1;goto B63acbb;
case 0x63acc0:goto L63acc0;
case 0x63acc3:c.instructions+=7;goto B63acc3;
case 0x63acc4:c.instructions+=6;goto B63acc4;
case 0x63acc5:c.instructions+=5;goto B63acc5;
case 0x63acc6:c.instructions+=4;goto B63acc6;
case 0x63accb:c.instructions+=3;goto B63accb;
case 0x63accc:c.instructions+=2;goto B63accc;
case 0x63acd2:c.instructions+=1;goto B63acd2;
case 0x63ace0:goto L63ace0;
case 0x63ace4:c.instructions+=8;goto B63ace4;
case 0x63acea:c.instructions+=7;goto B63acea;
case 0x63acec:c.instructions+=6;goto B63acec;
case 0x63aced:c.instructions+=5;goto B63aced;
case 0x63acee:c.instructions+=4;goto B63acee;
case 0x63acef:c.instructions+=3;goto B63acef;
case 0x63acf6:c.instructions+=2;goto B63acf6;
case 0x63acf8:c.instructions+=1;goto B63acf8;
case 0x63acfa:goto L63acfa;
case 0x63ad00:c.instructions+=8;goto B63ad00;
case 0x63ad01:c.instructions+=7;goto B63ad01;
case 0x63ad07:c.instructions+=6;goto B63ad07;
case 0x63ad08:c.instructions+=5;goto B63ad08;
case 0x63ad0a:c.instructions+=4;goto B63ad0a;
case 0x63ad0e:c.instructions+=3;goto B63ad0e;
case 0x63ad0f:c.instructions+=2;goto B63ad0f;
case 0x63ad11:c.instructions+=1;goto B63ad11;
case 0x63ad16:goto L63ad16;
case 0x63ad18:c.instructions+=5;goto B63ad18;
case 0x63ad1a:c.instructions+=4;goto B63ad1a;
case 0x63ad1d:c.instructions+=3;goto B63ad1d;
case 0x63ad1f:c.instructions+=2;goto B63ad1f;
case 0x63ad25:c.instructions+=1;goto B63ad25;
case 0x63ad27:goto L63ad27;
case 0x63ad2d:c.instructions+=8;goto B63ad2d;
case 0x63ad2e:c.instructions+=7;goto B63ad2e;
case 0x63ad34:c.instructions+=6;goto B63ad34;
case 0x63ad35:c.instructions+=5;goto B63ad35;
case 0x63ad37:c.instructions+=4;goto B63ad37;
case 0x63ad3b:c.instructions+=3;goto B63ad3b;
case 0x63ad3c:c.instructions+=2;goto B63ad3c;
case 0x63ad3e:c.instructions+=1;goto B63ad3e;
case 0x63ad43:goto L63ad43;
case 0x63ad45:c.instructions+=4;goto B63ad45;
case 0x63ad47:c.instructions+=3;goto B63ad47;
case 0x63ad4a:c.instructions+=2;goto B63ad4a;
case 0x63ad4c:c.instructions+=1;goto B63ad4c;
case 0x63ad52:goto L63ad52;
case 0x63ad54:c.instructions+=1;goto B63ad54;
case 0x63ad5a:goto L63ad5a;
case 0x63ad61:c.instructions+=4;goto B63ad61;
case 0x63ad62:c.instructions+=3;goto B63ad62;
case 0x63ad64:c.instructions+=2;goto B63ad64;
case 0x63ad66:c.instructions+=1;goto B63ad66;
case 0x63ad68:goto L63ad68;
case 0x63ad6b:c.instructions+=2;goto B63ad6b;
case 0x63ad6e:c.instructions+=1;goto B63ad6e;
case 0x63ad70:goto L63ad70;
case 0x63ad73:c.instructions+=1;goto B63ad73;
case 0x63ad75:goto L63ad75;
case 0x63ad77:c.instructions+=1;goto B63ad77;
case 0x63ad79:goto L63ad79;
case 0x63ad7e:c.instructions+=6;goto B63ad7e;
case 0x63ad7f:c.instructions+=5;goto B63ad7f;
case 0x63ad80:c.instructions+=4;goto B63ad80;
case 0x63ad84:c.instructions+=3;goto B63ad84;
case 0x63ad85:c.instructions+=2;goto B63ad85;
case 0x63ad8a:c.instructions+=1;goto B63ad8a;
case 0x63ad8f:goto L63ad8f;
case 0x63ad91:c.instructions+=1;goto B63ad91;
case 0x63ad93:goto L63ad93;
case 0x63ad95:c.instructions+=2;goto B63ad95;
case 0x63ad97:c.instructions+=1;goto B63ad97;
case 0x63ad9c:goto L63ad9c;
case 0x63ad9e:c.instructions+=1;goto B63ad9e;
case 0x63ada0:goto L63ada0;
case 0x63ada2:c.instructions+=5;goto B63ada2;
case 0x63ada3:c.instructions+=4;goto B63ada3;
case 0x63ada7:c.instructions+=3;goto B63ada7;
case 0x63ada8:c.instructions+=2;goto B63ada8;
case 0x63adad:c.instructions+=1;goto B63adad;
case 0x63adb2:goto L63adb2;
case 0x63adb4:c.instructions+=1;goto B63adb4;
case 0x63adb6:goto L63adb6;
case 0x63adb7:c.instructions+=7;goto B63adb7;
case 0x63adb8:c.instructions+=6;goto B63adb8;
case 0x63adbd:c.instructions+=5;goto B63adbd;
case 0x63adc1:c.instructions+=4;goto B63adc1;
case 0x63adc2:c.instructions+=3;goto B63adc2;
case 0x63adc3:c.instructions+=2;goto B63adc3;
case 0x63adca:c.instructions+=1;goto B63adca;
case 0x63adcf:goto L63adcf;
case 0x63add2:c.instructions+=7;goto B63add2;
case 0x63add3:c.instructions+=6;goto B63add3;
case 0x63add4:c.instructions+=5;goto B63add4;
case 0x63add5:c.instructions+=4;goto B63add5;
case 0x63adda:c.instructions+=3;goto B63adda;
case 0x63addb:c.instructions+=2;goto B63addb;
case 0x63ade1:c.instructions+=1;goto B63ade1;
case 0x63ade4:goto L63ade4;
case 0x63ade5:c.instructions+=5;goto B63ade5;
case 0x63ade6:c.instructions+=4;goto B63ade6;
case 0x63ade8:c.instructions+=3;goto B63ade8;
case 0x63ade9:c.instructions+=2;goto B63ade9;
case 0x63adef:c.instructions+=1;goto B63adef;
case 0x63ae00:goto L63ae00;
case 0x63ae03:c.instructions+=3;goto B63ae03;
case 0x63ae06:c.instructions+=2;goto B63ae06;
case 0x63ae08:c.instructions+=1;goto B63ae08;
case 0x63ae0a:goto L63ae0a;
case 0x63ae0b:c.instructions+=2;goto B63ae0b;
case 0x63ae0f:c.instructions+=1;goto B63ae0f;
case 0x63ae10:goto L63ae10;
case 0x63ae16:c.instructions+=1;goto B63ae16;
case 0x63ae18:goto L63ae18;
case 0x63ae1a:c.instructions+=2;goto B63ae1a;
case 0x63ae1c:c.instructions+=1;goto B63ae1c;
case 0x63ae1e:goto L63ae1e;
case 0x63ae1f:c.instructions+=2;goto B63ae1f;
case 0x63ae20:c.instructions+=1;goto B63ae20;
case 0x63ae23:goto L63ae23;
case 0x63ae26:c.instructions+=2;goto B63ae26;
case 0x63ae28:c.instructions+=1;goto B63ae28;
case 0x63ae2a:goto L63ae2a;
case 0x63ae2d:c.instructions+=2;goto B63ae2d;
case 0x63ae2f:c.instructions+=1;goto B63ae2f;
case 0x63ae31:goto L63ae31;
case 0x63ae33:c.instructions+=8;goto B63ae33;
case 0x63ae36:c.instructions+=7;goto B63ae36;
case 0x63ae38:c.instructions+=6;goto B63ae38;
case 0x63ae3b:c.instructions+=5;goto B63ae3b;
case 0x63ae3e:c.instructions+=4;goto B63ae3e;
case 0x63ae40:c.instructions+=3;goto B63ae40;
case 0x63ae43:c.instructions+=2;goto B63ae43;
case 0x63ae46:c.instructions+=1;goto B63ae46;
case 0x63ae48:goto L63ae48;
case 0x63ae4b:c.instructions+=1;goto B63ae4b;
case 0x63ae4d:goto L63ae4d;
case 0x63ae50:goto L63ae50;
case 0x63ae53:c.instructions+=2;goto B63ae53;
case 0x63ae55:c.instructions+=1;goto B63ae55;
case 0x63ae57:goto L63ae57;
case 0x63ae5a:c.instructions+=2;goto B63ae5a;
case 0x63ae5c:c.instructions+=1;goto B63ae5c;
case 0x63ae5e:goto L63ae5e;
case 0x63ae60:c.instructions+=2;goto B63ae60;
case 0x63ae61:c.instructions+=1;goto B63ae61;
case 0x63ae66:goto L63ae66;
case 0x63ae67:c.instructions+=1;goto B63ae67;
case 0x63ae68:goto L63ae68;
case 0x63ae70:goto L63ae70;
case 0x63ae76:c.instructions+=11;goto B63ae76;
case 0x63ae78:c.instructions+=10;goto B63ae78;
case 0x63ae7d:c.instructions+=9;goto B63ae7d;
case 0x63ae7e:c.instructions+=8;goto B63ae7e;
case 0x63ae83:c.instructions+=7;goto B63ae83;
case 0x63ae8a:c.instructions+=6;goto B63ae8a;
case 0x63ae90:c.instructions+=5;goto B63ae90;
case 0x63ae91:c.instructions+=4;goto B63ae91;
case 0x63ae92:c.instructions+=3;goto B63ae92;
case 0x63ae93:c.instructions+=2;goto B63ae93;
case 0x63ae95:c.instructions+=1;goto B63ae95;
case 0x63ae9a:goto L63ae9a;
case 0x63ae9d:c.instructions+=2;goto B63ae9d;
case 0x63ae9f:c.instructions+=1;goto B63ae9f;
case 0x63aea1:goto L63aea1;
case 0x63aea4:c.instructions+=2;goto B63aea4;
case 0x63aea6:c.instructions+=1;goto B63aea6;
case 0x63aea8:goto L63aea8;
case 0x63aead:goto L63aead;
case 0x63aeb0:c.instructions+=2;goto B63aeb0;
case 0x63aeb2:c.instructions+=1;goto B63aeb2;
case 0x63aeb4:goto L63aeb4;
case 0x63aeb6:c.instructions+=2;goto B63aeb6;
case 0x63aeb8:c.instructions+=1;goto B63aeb8;
case 0x63aebd:goto L63aebd;
case 0x63aec3:c.instructions+=2;goto B63aec3;
case 0x63aec4:c.instructions+=1;goto B63aec4;
case 0x63aec9:goto L63aec9;
case 0x63aecc:c.instructions+=2;goto B63aecc;
case 0x63aece:c.instructions+=1;goto B63aece;
case 0x63aed0:goto L63aed0;
case 0x63aed6:c.instructions+=2;goto B63aed6;
case 0x63aed7:c.instructions+=1;goto B63aed7;
case 0x63aedc:goto L63aedc;
case 0x63aedf:c.instructions+=5;goto B63aedf;
case 0x63aee3:c.instructions+=4;goto B63aee3;
case 0x63aee5:c.instructions+=3;goto B63aee5;
case 0x63aee7:c.instructions+=2;goto B63aee7;
case 0x63aeee:c.instructions+=1;goto B63aeee;
case 0x63aef0:goto L63aef0;
case 0x63aef7:c.instructions+=9;goto B63aef7;
case 0x63aefa:c.instructions+=8;goto B63aefa;
case 0x63aefb:c.instructions+=7;goto B63aefb;
case 0x63aefe:c.instructions+=6;goto B63aefe;
case 0x63aeff:c.instructions+=5;goto B63aeff;
case 0x63af06:c.instructions+=4;goto B63af06;
case 0x63af07:c.instructions+=3;goto B63af07;
case 0x63af08:c.instructions+=2;goto B63af08;
case 0x63af0a:c.instructions+=1;goto B63af0a;
case 0x63af0f:goto L63af0f;
case 0x63af11:goto L63af11;
case 0x63af14:c.instructions+=17;goto B63af14;
case 0x63af16:c.instructions+=16;goto B63af16;
case 0x63af19:c.instructions+=15;goto B63af19;
case 0x63af1c:c.instructions+=14;goto B63af1c;
case 0x63af1d:c.instructions+=13;goto B63af1d;
case 0x63af20:c.instructions+=12;goto B63af20;
case 0x63af22:c.instructions+=11;goto B63af22;
case 0x63af25:c.instructions+=10;goto B63af25;
case 0x63af26:c.instructions+=9;goto B63af26;
case 0x63af27:c.instructions+=8;goto B63af27;
case 0x63af2a:c.instructions+=7;goto B63af2a;
case 0x63af30:c.instructions+=6;goto B63af30;
case 0x63af36:c.instructions+=5;goto B63af36;
case 0x63af39:c.instructions+=4;goto B63af39;
case 0x63af3a:c.instructions+=3;goto B63af3a;
case 0x63af3c:c.instructions+=2;goto B63af3c;
case 0x63af47:c.instructions+=1;goto B63af47;
case 0x63af4c:goto L63af4c;
case 0x63af4e:c.instructions+=10;goto B63af4e;
case 0x63af51:c.instructions+=9;goto B63af51;
case 0x63af57:c.instructions+=8;goto B63af57;
case 0x63af59:c.instructions+=7;goto B63af59;
case 0x63af5c:c.instructions+=6;goto B63af5c;
case 0x63af5d:c.instructions+=5;goto B63af5d;
case 0x63af5f:c.instructions+=4;goto B63af5f;
case 0x63af62:c.instructions+=3;goto B63af62;
case 0x63af63:c.instructions+=2;goto B63af63;
case 0x63af65:c.instructions+=1;goto B63af65;
case 0x63af6a:goto L63af6a;
case 0x63af70:c.instructions+=5;goto B63af70;
case 0x63af71:c.instructions+=4;goto B63af71;
case 0x63af75:c.instructions+=3;goto B63af75;
case 0x63af7a:c.instructions+=2;goto B63af7a;
case 0x63af7b:c.instructions+=1;goto B63af7b;
case 0x63af80:goto L63af80;
case 0x63af83:c.instructions+=5;goto B63af83;
case 0x63af88:c.instructions+=4;goto B63af88;
case 0x63af8c:c.instructions+=3;goto B63af8c;
case 0x63af8d:c.instructions+=2;goto B63af8d;
case 0x63af8f:c.instructions+=1;goto B63af8f;
case 0x63af94:goto L63af94;
case 0x63af9a:c.instructions+=6;goto B63af9a;
case 0x63afa0:c.instructions+=5;goto B63afa0;
case 0x63afa2:c.instructions+=4;goto B63afa2;
case 0x63afa7:c.instructions+=3;goto B63afa7;
case 0x63afad:c.instructions+=2;goto B63afad;
case 0x63afb5:c.instructions+=1;goto B63afb5;
case 0x63afb7:goto L63afb7;
case 0x63afb8:c.instructions+=4;goto B63afb8;
case 0x63afbc:c.instructions+=3;goto B63afbc;
case 0x63afc1:c.instructions+=2;goto B63afc1;
case 0x63afc2:c.instructions+=1;goto B63afc2;
case 0x63afc7:goto L63afc7;
case 0x63afcb:c.instructions+=2;goto B63afcb;
case 0x63afcc:c.instructions+=1;goto B63afcc;
case 0x63afd1:goto L63afd1;
case 0x63afd4:c.instructions+=2;goto B63afd4;
case 0x63afd6:c.instructions+=1;goto B63afd6;
case 0x63afd8:goto L63afd8;
case 0x63afdd:c.instructions+=4;goto B63afdd;
case 0x63afe1:c.instructions+=3;goto B63afe1;
case 0x63afe2:c.instructions+=2;goto B63afe2;
case 0x63afe4:c.instructions+=1;goto B63afe4;
case 0x63afe9:goto L63afe9;
case 0x63afef:goto L63afef;
case 0x63aff5:c.instructions+=5;goto B63aff5;
case 0x63aff7:c.instructions+=4;goto B63aff7;
case 0x63aff8:c.instructions+=3;goto B63aff8;
case 0x63affe:c.instructions+=2;goto B63affe;
case 0x63afff:c.instructions+=1;goto B63afff;
default:missing_instruction(c.pc);}
B63a000:L63a000:{c.instructions+=8;NFSU2_TR(0x63a000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x114ull))));
}
B63a006:{NFSU2_TR(0x63a006);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a007:{NFSU2_TR(0x63a007);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B63a00e:{NFSU2_TR(0x63a00e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a011:{NFSU2_TR(0x63a011);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a013:{NFSU2_TR(0x63a013);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a014:{NFSU2_TR(0x63a014);
__builtin_memmove((R+28),(R+4),4);
}
B63a016:{NFSU2_TR(0x63a016);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L63a12c;}}
}
B63a01c:L63a01c:{c.instructions+=4;NFSU2_TR(0x63a01c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a01d:{NFSU2_TR(0x63a01d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x95cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63a023:{NFSU2_TR(0x63a023);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a025:{NFSU2_TR(0x63a025);
if(r1(R+518)){{goto L63a0ef;}}
}
B63a02b:L63a02b:{c.instructions+=4;NFSU2_TR(0x63a02b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B63a031:{NFSU2_TR(0x63a031);
w1(R+0,u8(0x2ull));
}
B63a033:{NFSU2_TR(0x63a033);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B63a035:{NFSU2_TR(0x63a035);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63a0ef;}}
}
B63a03b:L63a03b:{c.instructions+=2;NFSU2_TR(0x63a03b);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x309ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+0))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B63a041:{NFSU2_TR(0x63a041);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63a0ef;}}
}
B63a047:L63a047:{c.instructions+=3;NFSU2_TR(0x63a047);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B63a04d:{NFSU2_TR(0x63a04d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63a04f:{NFSU2_TR(0x63a04f);
if(r1(R+518)){{goto L63a0ef;}}
}
B63a055:L63a055:{c.instructions+=2;NFSU2_TR(0x63a055);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x309ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+0))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B63a05b:{NFSU2_TR(0x63a05b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63a0ef;}}
}
B63a061:L63a061:{c.instructions+=3;NFSU2_TR(0x63a061);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B63a067:{NFSU2_TR(0x63a067);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63a069:{NFSU2_TR(0x63a069);
if(r1(R+518)){{goto L63a0ef;}}
}
B63a06f:L63a06f:{c.instructions+=3;NFSU2_TR(0x63a06f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a075:{NFSU2_TR(0x63a075);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a077:{NFSU2_TR(0x63a077);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63a091;}}
}
B63a079:L63a079:{c.instructions+=2;NFSU2_TR(0x63a079);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63a07f:{NFSU2_TR(0x63a07f);
__builtin_memmove((R+8),(R+0),4);
}
B63a081:L63a081:{c.instructions+=3;NFSU2_TR(0x63a081);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63a083:{NFSU2_TR(0x63a083);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a085:{NFSU2_TR(0x63a085);
if(r1(R+518)){{goto L63a08b;}}
}
B63a087:L63a087:{c.instructions+=1;NFSU2_TR(0x63a087);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B63a08b:L63a08b:{c.instructions+=3;NFSU2_TR(0x63a08b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B63a08e:{NFSU2_TR(0x63a08e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B63a08f:{NFSU2_TR(0x63a08f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a081u);}goto L63a081;}}
}
B63a091:L63a091:{c.instructions+=9;NFSU2_TR(0x63a091);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a097:{NFSU2_TR(0x63a097);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a098:{NFSU2_TR(0x63a098);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63a09e:{NFSU2_TR(0x63a09e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a09f:{NFSU2_TR(0x63a09f);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a0a1:{NFSU2_TR(0x63a0a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63a0a5:{NFSU2_TR(0x63a0a5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a0a6:{NFSU2_TR(0x63a0a6);
__builtin_memmove((R+4),(R+28),4);
}
B63a0a8:{NFSU2_TR(0x63a0a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a0adull));
TAIL_STATIC(0x637c10u,637);
}
B63a0ad:L63a0ad:{c.instructions+=3;NFSU2_TR(0x63a0ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a0af:{NFSU2_TR(0x63a0af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x430ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63a0b9:{NFSU2_TR(0x63a0b9);
if(r1(R+518)){{goto L63a0c9;}}
}
B63a0bb:L63a0bb:{c.instructions+=4;NFSU2_TR(0x63a0bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a0bc:{NFSU2_TR(0x63a0bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63a0c0:{NFSU2_TR(0x63a0c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a0c1:{NFSU2_TR(0x63a0c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a0c6ull));
TAIL_STATIC(0x490150u,490);
}
B63a0c6:L63a0c6:{c.instructions+=1;NFSU2_TR(0x63a0c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63a0c9:L63a0c9:{c.instructions+=3;NFSU2_TR(0x63a0c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a0cf:{NFSU2_TR(0x63a0cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a0d1:{NFSU2_TR(0x63a0d1);
if(r1(R+518)){{goto L63a0ef;}}
}
B63a0d3:L63a0d3:{c.instructions+=5;NFSU2_TR(0x63a0d3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B63a0d7:{NFSU2_TR(0x63a0d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a0dd:{NFSU2_TR(0x63a0dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a0de:{NFSU2_TR(0x63a0de);
__builtin_memmove((R+4),(R+28),4);
}
B63a0e0:{NFSU2_TR(0x63a0e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a0e5ull));
TAIL_STATIC(0x637b50u,637);
}
B63a0e5:L63a0e5:{c.instructions+=1;NFSU2_TR(0x63a0e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63a0ef:L63a0ef:{c.instructions+=4;NFSU2_TR(0x63a0ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x954ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63a0f5:{NFSU2_TR(0x63a0f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a0f6:{NFSU2_TR(0x63a0f6);
__builtin_memmove((R+4),(R+28),4);
}
B63a0f8:{NFSU2_TR(0x63a0f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a0fdull));
TAIL_STATIC(0x610980u,610);
}
B63a0fd:L63a0fd:{c.instructions+=3;NFSU2_TR(0x63a0fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a0ff:{NFSU2_TR(0x63a0ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a100:{NFSU2_TR(0x63a100);
if(r1(R+518)){{goto L63a11b;}}
}
B63a102:L63a102:{c.instructions+=4;NFSU2_TR(0x63a102);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x95cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a108:{NFSU2_TR(0x63a108);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a109:{NFSU2_TR(0x63a109);
__builtin_memmove((R+4),(R+28),4);
}
B63a10b:{NFSU2_TR(0x63a10b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a110ull));
TAIL_STATIC(0x61c8f0u,61c);
}
B63a110:L63a110:{c.instructions+=2;NFSU2_TR(0x63a110);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a112:{NFSU2_TR(0x63a112);
if(r1(R+518)){{goto L63a11b;}}
}
B63a114:L63a114:{c.instructions+=2;NFSU2_TR(0x63a114);
w4(R+0,u32(0x1ull));
}
B63a119:{NFSU2_TR(0x63a119);
{goto L63a11d;}
}
B63a11b:L63a11b:{c.instructions+=1;NFSU2_TR(0x63a11b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63a11d:L63a11d:{c.instructions+=3;NFSU2_TR(0x63a11d);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a124:{NFSU2_TR(0x63a124);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a126:{NFSU2_TR(0x63a126);
if(r1(R+518)){{goto L63a139;}}
}
B63a128:L63a128:{c.instructions+=2;NFSU2_TR(0x63a128);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a12a:{NFSU2_TR(0x63a12a);
if(r1(R+518)){{goto L63a139;}}
}
B63a12c:L63a12c:{c.instructions+=5;NFSU2_TR(0x63a12c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a12d:{NFSU2_TR(0x63a12d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63a12f:{NFSU2_TR(0x63a12f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63a130:{NFSU2_TR(0x63a130);
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
B63a136:{NFSU2_TR(0x63a136);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a139:L63a139:{c.instructions+=4;NFSU2_TR(0x63a139);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x95cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a13f:{NFSU2_TR(0x63a13f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a140:{NFSU2_TR(0x63a140);
__builtin_memmove((R+4),(R+28),4);
}
B63a142:{NFSU2_TR(0x63a142);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a147ull));
TAIL_STATIC(0x639fb0u,639);
}
B63a147:L63a147:{c.instructions+=4;NFSU2_TR(0x63a147);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63a14d:{NFSU2_TR(0x63a14d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a14e:{NFSU2_TR(0x63a14e);
__builtin_memmove((R+4),(R+28),4);
}
B63a150:{NFSU2_TR(0x63a150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a155ull));
TAIL_STATIC(0x639d20u,639);
}
B63a155:L63a155:{c.instructions+=4;NFSU2_TR(0x63a155);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x954ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a15b:{NFSU2_TR(0x63a15b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a15c:{NFSU2_TR(0x63a15c);
__builtin_memmove((R+4),(R+28),4);
}
B63a15e:{NFSU2_TR(0x63a15e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a163ull));
TAIL_STATIC(0x637bb0u,637);
}
B63a163:L63a163:{c.instructions+=6;NFSU2_TR(0x63a163);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a166:{NFSU2_TR(0x63a166);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63a169:{NFSU2_TR(0x63a169);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63a16b:{NFSU2_TR(0x63a16b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a16e:{NFSU2_TR(0x63a16e);
__builtin_memmove((R+4),(R+20),4);
}
B63a170:{NFSU2_TR(0x63a170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a175ull));
TAIL_STATIC(0x61cae0u,61c);
}
B63a175:L63a175:{c.instructions+=4;NFSU2_TR(0x63a175);
__builtin_memmove((R+4),gp(0x8a1d00),4);
}
B63a17b:{NFSU2_TR(0x63a17b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a17c:{NFSU2_TR(0x63a17c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a17d:{NFSU2_TR(0x63a17d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a182ull));
TAIL_STATIC(0x43f920u,43f);
}
B63a182:L63a182:{c.instructions+=8;NFSU2_TR(0x63a182);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a185:{NFSU2_TR(0x63a185);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a188:{NFSU2_TR(0x63a188);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63a18b:{NFSU2_TR(0x63a18b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B63a18c:{NFSU2_TR(0x63a18c);
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
B63a18d:{NFSU2_TR(0x63a18d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a190:{NFSU2_TR(0x63a190);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a193:{NFSU2_TR(0x63a193);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a198ull));
TAIL_STATIC(0x638070u,638);
}
B63a198:L63a198:{c.instructions+=5;NFSU2_TR(0x63a198);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a199:{NFSU2_TR(0x63a199);
w4(R+0,u32(0x1ull));
}
B63a19e:{NFSU2_TR(0x63a19e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63a19f:{NFSU2_TR(0x63a19f);
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
B63a1a5:{NFSU2_TR(0x63a1a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a1b0:L63a1b0:{c.instructions+=8;NFSU2_TR(0x63a1b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a1b1:{NFSU2_TR(0x63a1b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a1b2:{NFSU2_TR(0x63a1b2);
__builtin_memmove((R+12),(R+4),4);
}
B63a1b4:{NFSU2_TR(0x63a1b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63a1b7:{NFSU2_TR(0x63a1b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a1b8:{NFSU2_TR(0x63a1b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63a1bb:{NFSU2_TR(0x63a1bb);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63a1bd:{NFSU2_TR(0x63a1bd);
if(r1(R+518)){{goto L63a1d4;}}
}
B63a1bf:L63a1bf:{c.instructions+=1;NFSU2_TR(0x63a1bf);
}
B63a1c0:L63a1c0:{c.instructions+=4;NFSU2_TR(0x63a1c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a1c2:{NFSU2_TR(0x63a1c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a1c3:{NFSU2_TR(0x63a1c3);
__builtin_memmove((R+4),(R+12),4);
}
B63a1c5:{NFSU2_TR(0x63a1c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a1caull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a000u);}goto L63a000;}
}
B63a1ca:L63a1ca:{c.instructions+=2;NFSU2_TR(0x63a1ca);
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
B63a1cc:{NFSU2_TR(0x63a1cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63a1e4;}}
}
B63a1ce:L63a1ce:{c.instructions+=3;NFSU2_TR(0x63a1ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63a1d0:{NFSU2_TR(0x63a1d0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63a1d2:{NFSU2_TR(0x63a1d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a1c0u);}goto L63a1c0;}}
}
B63a1d4:L63a1d4:{c.instructions+=3;NFSU2_TR(0x63a1d4);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B63a1d8:{NFSU2_TR(0x63a1d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63a1da:{NFSU2_TR(0x63a1da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63a1ef;}}
}
B63a1dc:L63a1dc:{c.instructions+=5;NFSU2_TR(0x63a1dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a1dd:{NFSU2_TR(0x63a1dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63a1de:{NFSU2_TR(0x63a1de);
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
B63a1e0:{NFSU2_TR(0x63a1e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63a1e1:{NFSU2_TR(0x63a1e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a1e4:L63a1e4:{c.instructions+=5;NFSU2_TR(0x63a1e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a1e5:{NFSU2_TR(0x63a1e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63a1e6:{NFSU2_TR(0x63a1e6);
w4(R+0,u32(0x1ull));
}
B63a1eb:{NFSU2_TR(0x63a1eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63a1ec:{NFSU2_TR(0x63a1ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a1ef:L63a1ef:{c.instructions+=3;NFSU2_TR(0x63a1ef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63a1f1:{NFSU2_TR(0x63a1f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a1f5:{NFSU2_TR(0x63a1f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a1f6:L63a1f6:{c.instructions+=3;NFSU2_TR(0x63a1f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63a1f9:{NFSU2_TR(0x63a1f9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63a1fb:{NFSU2_TR(0x63a1fb);
if(r1(R+518)){{goto L63a231;}}
}
B63a1fd:L63a1fd:{c.instructions+=1;NFSU2_TR(0x63a1fd);
__builtin_memmove((R+4),(R+4),4);
}
B63a200:L63a200:{c.instructions+=3;NFSU2_TR(0x63a200);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a203:{NFSU2_TR(0x63a203);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a205:{NFSU2_TR(0x63a205);
if(r1(R+518)){{goto L63a20c;}}
}
B63a207:L63a207:{c.instructions+=2;NFSU2_TR(0x63a207);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63a20a:{NFSU2_TR(0x63a20a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63a22b;}}
}
B63a20c:L63a20c:{c.instructions+=3;NFSU2_TR(0x63a20c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x95cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63a212:{NFSU2_TR(0x63a212);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B63a219:{NFSU2_TR(0x63a219);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63a22b;}}
}
B63a21b:L63a21b:{c.instructions+=3;NFSU2_TR(0x63a21b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a21c:{NFSU2_TR(0x63a21c);
__builtin_memmove((R+4),(R+12),4);
}
B63a21e:{NFSU2_TR(0x63a21e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a223ull));
TAIL_STATIC(0x639f20u,639);
}
B63a223:L63a223:{c.instructions+=2;NFSU2_TR(0x63a223);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a225:{NFSU2_TR(0x63a225);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63a249;}}
}
B63a227:L63a227:{c.instructions+=1;NFSU2_TR(0x63a227);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a22b:L63a22b:{c.instructions+=3;NFSU2_TR(0x63a22b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63a22d:{NFSU2_TR(0x63a22d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63a22f:{NFSU2_TR(0x63a22f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a200u);}goto L63a200;}}
}
B63a231:L63a231:{c.instructions+=4;NFSU2_TR(0x63a231);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B63a232:{NFSU2_TR(0x63a232);
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
B63a235:{NFSU2_TR(0x63a235);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a239:{NFSU2_TR(0x63a239);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a1f6u);}goto L63a1f6;}}
}
B63a23b:L63a23b:{c.instructions+=1;NFSU2_TR(0x63a23b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a240ull));
TAIL_STATIC(0x43bd50u,43b);
}
B63a240:L63a240:{c.instructions+=6;NFSU2_TR(0x63a240);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a241:{NFSU2_TR(0x63a241);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a242:{NFSU2_TR(0x63a242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63a243:{NFSU2_TR(0x63a243);
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
B63a245:{NFSU2_TR(0x63a245);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63a246:{NFSU2_TR(0x63a246);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a249:L63a249:{c.instructions+=3;NFSU2_TR(0x63a249);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a24c:{NFSU2_TR(0x63a24c);
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
B63a24e:{NFSU2_TR(0x63a24e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63a255;}}
}
B63a250:L63a250:{c.instructions+=1;NFSU2_TR(0x63a250);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a255ull));
TAIL_STATIC(0x43bd50u,43b);
}
B63a255:L63a255:{c.instructions+=4;NFSU2_TR(0x63a255);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x304ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a25b:{NFSU2_TR(0x63a25b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B63a25d:{NFSU2_TR(0x63a25d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a25e:{NFSU2_TR(0x63a25e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a263ull));
TAIL_STATIC(0x5f4650u,5f4);
}
B63a263:L63a263:{c.instructions+=7;NFSU2_TR(0x63a263);
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
B63a266:{NFSU2_TR(0x63a266);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a267:{NFSU2_TR(0x63a267);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a268:{NFSU2_TR(0x63a268);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63a269:{NFSU2_TR(0x63a269);
w4(R+0,u32(0x1ull));
}
B63a26e:{NFSU2_TR(0x63a26e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63a26f:{NFSU2_TR(0x63a26f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a280:L63a280:{c.instructions+=10;NFSU2_TR(0x63a280);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a281:{NFSU2_TR(0x63a281);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a282:{NFSU2_TR(0x63a282);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63a286:{NFSU2_TR(0x63a286);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a288:{NFSU2_TR(0x63a288);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a289:{NFSU2_TR(0x63a289);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B63a28d:{NFSU2_TR(0x63a28d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a28e:{NFSU2_TR(0x63a28e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a28f:{NFSU2_TR(0x63a28f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a293:{NFSU2_TR(0x63a293);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63a297;}}
}
B63a295:L63a295:{c.instructions+=1;NFSU2_TR(0x63a295);
__builtin_memmove((R+12),(R+20),4);
}
B63a297:L63a297:{c.instructions+=2;NFSU2_TR(0x63a297);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a299:{NFSU2_TR(0x63a299);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a29eull));
TAIL_STATIC(0x43e8e0u,43e);
}
B63a29e:L63a29e:{c.instructions+=3;NFSU2_TR(0x63a29e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a2a0:{NFSU2_TR(0x63a2a0);
__builtin_memmove((R+24),(R+0),4);
}
B63a2a2:{NFSU2_TR(0x63a2a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a2a7ull));
TAIL_STATIC(0x43e910u,43e);
}
B63a2a7:L63a2a7:{c.instructions+=4;NFSU2_TR(0x63a2a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63a2aa:{NFSU2_TR(0x63a2aa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63a2ac:{NFSU2_TR(0x63a2ac);
__builtin_memmove((R+28),(R+0),4);
}
B63a2ae:{NFSU2_TR(0x63a2ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63a2b4;}}
}
B63a2b0:L63a2b0:{c.instructions+=2;NFSU2_TR(0x63a2b0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63a2b2:{NFSU2_TR(0x63a2b2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63a2ef;}}
}
B63a2b4:L63a2b4:{c.instructions+=3;NFSU2_TR(0x63a2b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a2b8:{NFSU2_TR(0x63a2b8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a2ba:{NFSU2_TR(0x63a2ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a2bfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a1b0u);}goto L63a1b0;}
}
B63a2bf:L63a2bf:{c.instructions+=2;NFSU2_TR(0x63a2bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a2c1:{NFSU2_TR(0x63a2c1);
if(r1(R+518)){{goto L63a2ef;}}
}
B63a2c3:L63a2c3:{c.instructions+=2;NFSU2_TR(0x63a2c3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a2c5:{NFSU2_TR(0x63a2c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a2caull));
TAIL_STATIC(0x43e8e0u,43e);
}
B63a2ca:L63a2ca:{c.instructions+=3;NFSU2_TR(0x63a2ca);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a2cc:{NFSU2_TR(0x63a2cc);
__builtin_memmove((R+24),(R+0),4);
}
B63a2ce:{NFSU2_TR(0x63a2ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a2d3ull));
TAIL_STATIC(0x43e910u,43e);
}
B63a2d3:L63a2d3:{c.instructions+=4;NFSU2_TR(0x63a2d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63a2d6:{NFSU2_TR(0x63a2d6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63a2d8:{NFSU2_TR(0x63a2d8);
__builtin_memmove((R+28),(R+0),4);
}
B63a2da:{NFSU2_TR(0x63a2da);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63a2e0;}}
}
B63a2dc:L63a2dc:{c.instructions+=2;NFSU2_TR(0x63a2dc);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63a2de:{NFSU2_TR(0x63a2de);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L63a2ef;}}
}
B63a2e0:L63a2e0:{c.instructions+=3;NFSU2_TR(0x63a2e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a2e4:{NFSU2_TR(0x63a2e4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a2e6:{NFSU2_TR(0x63a2e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a2ebull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a1b0u);}goto L63a1b0;}
}
B63a2eb:L63a2eb:{c.instructions+=2;NFSU2_TR(0x63a2eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a2ed:{NFSU2_TR(0x63a2ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a2c3u);}goto L63a2c3;}}
}
B63a2ef:L63a2ef:{c.instructions+=2;NFSU2_TR(0x63a2ef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B63a2f1:{NFSU2_TR(0x63a2f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63a304;}}
}
B63a2f3:L63a2f3:{c.instructions+=2;NFSU2_TR(0x63a2f3);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B63a2f5:{NFSU2_TR(0x63a2f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L63a304;}}
}
B63a2f7:L63a2f7:{c.instructions+=7;NFSU2_TR(0x63a2f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a2f8:{NFSU2_TR(0x63a2f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a2f9:{NFSU2_TR(0x63a2f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63a2fa:{NFSU2_TR(0x63a2fa);
w4(R+0,u32(0x1ull));
}
B63a2ff:{NFSU2_TR(0x63a2ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63a300:{NFSU2_TR(0x63a300);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63a301:{NFSU2_TR(0x63a301);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a304:L63a304:{c.instructions+=7;NFSU2_TR(0x63a304);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a305:{NFSU2_TR(0x63a305);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a306:{NFSU2_TR(0x63a306);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63a307:{NFSU2_TR(0x63a307);
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
B63a309:{NFSU2_TR(0x63a309);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63a30a:{NFSU2_TR(0x63a30a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63a30b:{NFSU2_TR(0x63a30b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a310:L63a310:{c.instructions+=2;NFSU2_TR(0x63a310);
w4(R+4,u32(0x8a3288ull));
}
B63a315:{NFSU2_TR(0x63a315);
TAIL_STATIC(0x639db0u,639);
}
B63a320:L63a320:{c.instructions+=5;NFSU2_TR(0x63a320);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a321:{NFSU2_TR(0x63a321);
__builtin_memmove((R+24),(R+4),4);
}
B63a323:{NFSU2_TR(0x63a323);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63a326:{NFSU2_TR(0x63a326);
w4(R+4,u32(0x20ull));
}
B63a32b:{NFSU2_TR(0x63a32b);
{goto L63a330;}
}
B63a330:L63a330:{c.instructions+=6;NFSU2_TR(0x63a330);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w2(R+8,u16(r1(U+0)));
}
B63a334:{NFSU2_TR(0x63a334);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(r2(R+8))));
s2(u32(r4(U+0)),r2(U+4));
}
B63a338:{NFSU2_TR(0x63a338);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B63a33b:{NFSU2_TR(0x63a33b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B63a33c:{NFSU2_TR(0x63a33c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B63a33d:{NFSU2_TR(0x63a33d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a330u);}goto L63a330;}}
}
B63a33f:L63a33f:{c.instructions+=3;NFSU2_TR(0x63a33f);
__builtin_memmove((R+4),(R+24),4);
}
B63a341:{NFSU2_TR(0x63a341);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B63a347:{NFSU2_TR(0x63a347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a34cull));
TAIL_STATIC(0x633d50u,633);
}
B63a34c:L63a34c:{c.instructions+=6;NFSU2_TR(0x63a34c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63a34e:{NFSU2_TR(0x63a34e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63a351:{NFSU2_TR(0x63a351);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B63a353:{NFSU2_TR(0x63a353);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a356:{NFSU2_TR(0x63a356);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a357:{NFSU2_TR(0x63a357);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a360:L63a360:{c.instructions+=19;NFSU2_TR(0x63a360);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a362:{NFSU2_TR(0x63a362);
u8 U[4];
w4(U+0,u32(0x77a4d9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a367:{NFSU2_TR(0x63a367);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a36d:{NFSU2_TR(0x63a36d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a36e:{NFSU2_TR(0x63a36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a375:{NFSU2_TR(0x63a375);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a376:{NFSU2_TR(0x63a376);
__builtin_memmove((R+0),gp(0x8a2ca0),4);
}
B63a37b:{NFSU2_TR(0x63a37b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a37c:{NFSU2_TR(0x63a37c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a37d:{NFSU2_TR(0x63a37d);
__builtin_memmove((R+24),(R+4),4);
}
B63a37f:{NFSU2_TR(0x63a37f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B63a382:{NFSU2_TR(0x63a382);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63a384:{NFSU2_TR(0x63a384);
__builtin_memmove(gp(0x8a2ca0),(R+8),4);
}
B63a38a:{NFSU2_TR(0x63a38a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a38b:{NFSU2_TR(0x63a38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a38e:{NFSU2_TR(0x63a38e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63a390:{NFSU2_TR(0x63a390);
u8 U[4];
w4(U+0,u32(0x8a2c9cull));
s4(u32(r4(R+8)),r4(U+0));
}
B63a396:{NFSU2_TR(0x63a396);
w4(R+4,u32(0x8ull));
}
B63a39b:{NFSU2_TR(0x63a39b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a39e:L63a39e:{c.instructions+=1;NFSU2_TR(0x63a39e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L63a3a0;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a39eu);}goto L63a39e;}
}
B63a3a0:L63a3a0:{c.instructions+=3;NFSU2_TR(0x63a3a0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B63a3a2:{NFSU2_TR(0x63a3a2);
w4(R+4,u32(0x8ull));
}
B63a3a7:{NFSU2_TR(0x63a3a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2aull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a3aa:L63a3aa:{c.instructions+=1;NFSU2_TR(0x63a3aa);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L63a3ac;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a3aau);}goto L63a3aa;}
}
B63a3ac:L63a3ac:{c.instructions+=10;NFSU2_TR(0x63a3ac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a3b0:{NFSU2_TR(0x63a3b0);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B63a3b4:{NFSU2_TR(0x63a3b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4aull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B63a3b8:{NFSU2_TR(0x63a3b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a3bb:{NFSU2_TR(0x63a3bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a3c1:{NFSU2_TR(0x63a3c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63a3c5:{NFSU2_TR(0x63a3c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a3c6:{NFSU2_TR(0x63a3c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63a3cc:{NFSU2_TR(0x63a3cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a3d0:{NFSU2_TR(0x63a3d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a3d5ull));
TAIL_STATIC(0x633e70u,633);
}
B63a3d5:L63a3d5:{c.instructions+=8;NFSU2_TR(0x63a3d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B63a3d7:{NFSU2_TR(0x63a3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a3dd:{NFSU2_TR(0x63a3dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a3e3:{NFSU2_TR(0x63a3e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63a3e6:{NFSU2_TR(0x63a3e6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B63a3e9:{NFSU2_TR(0x63a3e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a3ea:{NFSU2_TR(0x63a3ea);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63a3ef:{NFSU2_TR(0x63a3ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a3f4ull));
TAIL_STATIC(0x43db50u,43d);
}
B63a3f4:L63a3f4:{c.instructions+=17;NFSU2_TR(0x63a3f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a3f8:{NFSU2_TR(0x63a3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a3fb:{NFSU2_TR(0x63a3fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63a3fe:{NFSU2_TR(0x63a3fe);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B63a401:{NFSU2_TR(0x63a401);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a407:{NFSU2_TR(0x63a407);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a40d:{NFSU2_TR(0x63a40d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a413:{NFSU2_TR(0x63a413);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B63a41a:{NFSU2_TR(0x63a41a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63a420:{NFSU2_TR(0x63a420);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63a423:{NFSU2_TR(0x63a423);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a424:{NFSU2_TR(0x63a424);
__builtin_memmove((R+0),(R+24),4);
}
B63a426:{NFSU2_TR(0x63a426);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a427:{NFSU2_TR(0x63a427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63a428:{NFSU2_TR(0x63a428);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a42f:{NFSU2_TR(0x63a42f);
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
B63a432:{NFSU2_TR(0x63a432);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a440:L63a440:{c.instructions+=12;NFSU2_TR(0x63a440);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a442:{NFSU2_TR(0x63a442);
u8 U[4];
w4(U+0,u32(0x77a4d9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a447:{NFSU2_TR(0x63a447);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a44d:{NFSU2_TR(0x63a44d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a44e:{NFSU2_TR(0x63a44e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a455:{NFSU2_TR(0x63a455);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a456:{NFSU2_TR(0x63a456);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a457:{NFSU2_TR(0x63a457);
__builtin_memmove((R+24),(R+4),4);
}
B63a459:{NFSU2_TR(0x63a459);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a45d:{NFSU2_TR(0x63a45d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63a465:{NFSU2_TR(0x63a465);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63a46f:{NFSU2_TR(0x63a46f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a474ull));
TAIL_STATIC(0x633ef0u,633);
}
B63a474:L63a474:{c.instructions+=3;NFSU2_TR(0x63a474);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63a47a:{NFSU2_TR(0x63a47a);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63a47f:{NFSU2_TR(0x63a47f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a484ull));
TAIL_STATIC(0x610c40u,610);
}
B63a484:L63a484:{c.instructions+=3;NFSU2_TR(0x63a484);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B63a487:{NFSU2_TR(0x63a487);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B63a48f:{NFSU2_TR(0x63a48f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a494ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a320u);}goto L63a320;}
}
B63a494:L63a494:{c.instructions+=5;NFSU2_TR(0x63a494);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a498:{NFSU2_TR(0x63a498);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a499:{NFSU2_TR(0x63a499);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a4a0:{NFSU2_TR(0x63a4a0);
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
B63a4a3:{NFSU2_TR(0x63a4a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a4b0:L63a4b0:{c.instructions+=4;NFSU2_TR(0x63a4b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B63a4b4:{NFSU2_TR(0x63a4b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a4b8:{NFSU2_TR(0x63a4b8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B63a4ba:{NFSU2_TR(0x63a4ba);
if(r1(R+518)){{goto L63a4c8;}}
}
B63a4bc:L63a4bc:{c.instructions+=3;NFSU2_TR(0x63a4bc);
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
B63a4be:{NFSU2_TR(0x63a4be);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63a4c1:{NFSU2_TR(0x63a4c1);
if(r1(R+518)){{goto L63a4c8;}}
}
B63a4c3:L63a4c3:{c.instructions+=1;NFSU2_TR(0x63a4c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a4c8ull));
TAIL_STATIC(0x633ef0u,633);
}
B63a4c8:L63a4c8:{c.instructions+=1;NFSU2_TR(0x63a4c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a4d0:L63a4d0:{c.instructions+=6;NFSU2_TR(0x63a4d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a4d1:{NFSU2_TR(0x63a4d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a4d2:{NFSU2_TR(0x63a4d2);
__builtin_memmove((R+28),(R+4),4);
}
B63a4d4:{NFSU2_TR(0x63a4d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63a4d6:{NFSU2_TR(0x63a4d6);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B63a4d8:{NFSU2_TR(0x63a4d8);
if(r1(R+518)){{goto L63a500;}}
}
B63a4da:L63a4da:{c.instructions+=1;NFSU2_TR(0x63a4da);
__builtin_memmove((R+12),(R+12),4);
}
B63a4e0:L63a4e0:{c.instructions+=6;NFSU2_TR(0x63a4e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a4e3:{NFSU2_TR(0x63a4e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63a4e5:{NFSU2_TR(0x63a4e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63a4e7:{NFSU2_TR(0x63a4e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a4ea:{NFSU2_TR(0x63a4ea);
__builtin_memmove((R+4),(R+24),4);
}
B63a4ec:{NFSU2_TR(0x63a4ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a4f1ull));
TAIL_STATIC(0x41bc30u,41b);
}
B63a4f1:L63a4f1:{c.instructions+=2;NFSU2_TR(0x63a4f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a4f2:{NFSU2_TR(0x63a4f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a4f7ull));
TAIL_STATIC(0x575630u,575);
}
B63a4f7:L63a4f7:{c.instructions+=4;NFSU2_TR(0x63a4f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63a4f9:{NFSU2_TR(0x63a4f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63a4fc:{NFSU2_TR(0x63a4fc);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B63a4fe:{NFSU2_TR(0x63a4fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a4e0u);}goto L63a4e0;}}
}
B63a500:L63a500:{c.instructions+=3;NFSU2_TR(0x63a500);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a501:{NFSU2_TR(0x63a501);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a502:{NFSU2_TR(0x63a502);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a510:L63a510:{c.instructions+=5;NFSU2_TR(0x63a510);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a511:{NFSU2_TR(0x63a511);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a512:{NFSU2_TR(0x63a512);
__builtin_memmove((R+28),(R+4),4);
}
B63a514:{NFSU2_TR(0x63a514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63a516:{NFSU2_TR(0x63a516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a51bull));
TAIL_STATIC(0x502fd0u,502);
}
B63a51b:L63a51b:{c.instructions+=2;NFSU2_TR(0x63a51b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63a51d:{NFSU2_TR(0x63a51d);
if(r1(R+518)){{goto L63a53e;}}
}
B63a51f:L63a51f:{c.instructions+=1;NFSU2_TR(0x63a51f);
}
B63a520:L63a520:{c.instructions+=3;NFSU2_TR(0x63a520);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a523:{NFSU2_TR(0x63a523);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a525:{NFSU2_TR(0x63a525);
if(r1(R+518)){{goto L63a531;}}
}
B63a527:L63a527:{c.instructions+=4;NFSU2_TR(0x63a527);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B63a529:{NFSU2_TR(0x63a529);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63a52c:{NFSU2_TR(0x63a52c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B63a52e:{NFSU2_TR(0x63a52e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a531:L63a531:{c.instructions+=4;NFSU2_TR(0x63a531);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63a538:{NFSU2_TR(0x63a538);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63a53a:{NFSU2_TR(0x63a53a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63a53c:{NFSU2_TR(0x63a53c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a520u);}goto L63a520;}}
}
B63a53e:L63a53e:{c.instructions+=4;NFSU2_TR(0x63a53e);
__builtin_memmove((R+4),(R+28),4);
}
B63a540:{NFSU2_TR(0x63a540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a541:{NFSU2_TR(0x63a541);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a542:{NFSU2_TR(0x63a542);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a4d0u);}goto L63a4d0;}
}
B63a550:L63a550:{c.instructions+=14;NFSU2_TR(0x63a550);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a556:{NFSU2_TR(0x63a556);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a558:{NFSU2_TR(0x63a558);
u8 U[4];
w4(U+0,u32(0x77a4fbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a55d:{NFSU2_TR(0x63a55d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a55e:{NFSU2_TR(0x63a55e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a565:{NFSU2_TR(0x63a565);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63a567:{NFSU2_TR(0x63a567);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63a56a:{NFSU2_TR(0x63a56a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B63a56c:{NFSU2_TR(0x63a56c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a56f:{NFSU2_TR(0x63a56f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a572:{NFSU2_TR(0x63a572);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x24ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63a575:{NFSU2_TR(0x63a575);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B63a580:{NFSU2_TR(0x63a580);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B63a588:{NFSU2_TR(0x63a588);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a58dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a510u);}goto L63a510;}
}
B63a58d:L63a58d:{c.instructions+=4;NFSU2_TR(0x63a58d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+4),(U+0),4);
}
B63a591:{NFSU2_TR(0x63a591);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a598:{NFSU2_TR(0x63a598);
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
B63a59b:{NFSU2_TR(0x63a59b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a5a0:L63a5a0:{c.instructions+=10;NFSU2_TR(0x63a5a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a5a2:{NFSU2_TR(0x63a5a2);
u8 U[4];
w4(U+0,u32(0x77a524ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a5a7:{NFSU2_TR(0x63a5a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a5ad:{NFSU2_TR(0x63a5ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a5ae:{NFSU2_TR(0x63a5ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a5b5:{NFSU2_TR(0x63a5b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a5b6:{NFSU2_TR(0x63a5b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a5b7:{NFSU2_TR(0x63a5b7);
u8 U[4];
w4(U+0,u32(0x2ec0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a5bc:{NFSU2_TR(0x63a5bc);
__builtin_memmove((R+24),(R+4),4);
}
B63a5be:{NFSU2_TR(0x63a5be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a5c3ull));
TAIL_STATIC(0x575620u,575);
}
B63a5c3:L63a5c3:{c.instructions+=5;NFSU2_TR(0x63a5c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63a5c6:{NFSU2_TR(0x63a5c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a5ca:{NFSU2_TR(0x63a5ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a5cc:{NFSU2_TR(0x63a5cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63a5d4:{NFSU2_TR(0x63a5d4);
if(r1(R+518)){{goto L63a5e5;}}
}
B63a5d6:L63a5d6:{c.instructions+=5;NFSU2_TR(0x63a5d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a5da:{NFSU2_TR(0x63a5da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a5db:{NFSU2_TR(0x63a5db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a5dc:{NFSU2_TR(0x63a5dc);
__builtin_memmove((R+4),(R+0),4);
}
B63a5de:{NFSU2_TR(0x63a5de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a5e3ull));
TAIL_STATIC(0x638190u,638);
}
B63a5e3:L63a5e3:{c.instructions+=1;NFSU2_TR(0x63a5e3);
{goto L63a5e7;}
}
B63a5e5:L63a5e5:{c.instructions+=1;NFSU2_TR(0x63a5e5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63a5e7:L63a5e7:{c.instructions+=5;NFSU2_TR(0x63a5e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a5e8:{NFSU2_TR(0x63a5e8);
__builtin_memmove((R+4),(R+0),4);
}
B63a5ea:{NFSU2_TR(0x63a5ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B63a5f2:{NFSU2_TR(0x63a5f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x554ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a5f8:{NFSU2_TR(0x63a5f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a5fdull));
TAIL_STATIC(0x61b2e0u,61b);
}
B63a5fd:L63a5fd:{c.instructions+=5;NFSU2_TR(0x63a5fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a601:{NFSU2_TR(0x63a601);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a602:{NFSU2_TR(0x63a602);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a609:{NFSU2_TR(0x63a609);
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
B63a60c:{NFSU2_TR(0x63a60c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a610:L63a610:{c.instructions+=6;NFSU2_TR(0x63a610);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a611:{NFSU2_TR(0x63a611);
__builtin_memmove((R+24),(R+4),4);
}
B63a613:{NFSU2_TR(0x63a613);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a619:{NFSU2_TR(0x63a619);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a61a:{NFSU2_TR(0x63a61a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a61b:{NFSU2_TR(0x63a61b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a620ull));
TAIL_STATIC(0x61b290u,61b);
}
B63a620:L63a620:{c.instructions+=3;NFSU2_TR(0x63a620);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63a626:{NFSU2_TR(0x63a626);
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
B63a628:{NFSU2_TR(0x63a628);
if(r1(R+518)){{goto L63a63a;}}
}
B63a62a:L63a62a:{c.instructions+=2;NFSU2_TR(0x63a62a);
__builtin_memmove((R+4),(R+28),4);
}
B63a62c:{NFSU2_TR(0x63a62c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a631ull));
TAIL_STATIC(0x634630u,634);
}
B63a631:L63a631:{c.instructions+=2;NFSU2_TR(0x63a631);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a632:{NFSU2_TR(0x63a632);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a637ull));
TAIL_STATIC(0x575630u,575);
}
B63a637:L63a637:{c.instructions+=1;NFSU2_TR(0x63a637);
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
B63a63a:L63a63a:{c.instructions+=4;NFSU2_TR(0x63a63a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a63b:{NFSU2_TR(0x63a63b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x554ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63a645:{NFSU2_TR(0x63a645);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a646:{NFSU2_TR(0x63a646);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a650:L63a650:{c.instructions+=11;NFSU2_TR(0x63a650);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a656:{NFSU2_TR(0x63a656);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a658:{NFSU2_TR(0x63a658);
u8 U[4];
w4(U+0,u32(0x77a53bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a65d:{NFSU2_TR(0x63a65d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a65e:{NFSU2_TR(0x63a65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a665:{NFSU2_TR(0x63a665);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a666:{NFSU2_TR(0x63a666);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a667:{NFSU2_TR(0x63a667);
__builtin_memmove((R+28),(R+4),4);
}
B63a669:{NFSU2_TR(0x63a669);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63a66c:{NFSU2_TR(0x63a66c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a66e:{NFSU2_TR(0x63a66e);
if(r1(R+518)){{goto L63a687;}}
}
B63a670:L63a670:{c.instructions+=2;NFSU2_TR(0x63a670);
__builtin_memmove((R+4),(R+24),4);
}
B63a672:{NFSU2_TR(0x63a672);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a677ull));
TAIL_STATIC(0x634630u,634);
}
B63a677:L63a677:{c.instructions+=2;NFSU2_TR(0x63a677);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a678:{NFSU2_TR(0x63a678);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a67dull));
TAIL_STATIC(0x575630u,575);
}
B63a67d:L63a67d:{c.instructions+=2;NFSU2_TR(0x63a67d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63a680:{NFSU2_TR(0x63a680);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63a687:L63a687:{c.instructions+=3;NFSU2_TR(0x63a687);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a68b:{NFSU2_TR(0x63a68b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a68d:{NFSU2_TR(0x63a68d);
if(r1(R+518)){{goto L63a6d5;}}
}
B63a68f:L63a68f:{c.instructions+=4;NFSU2_TR(0x63a68f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a692:{NFSU2_TR(0x63a692);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a693:{NFSU2_TR(0x63a693);
__builtin_memmove((R+4),(R+24),4);
}
B63a695:{NFSU2_TR(0x63a695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a69aull));
TAIL_STATIC(0x413440u,413);
}
B63a69a:L63a69a:{c.instructions+=2;NFSU2_TR(0x63a69a);
u8 U[4];
w4(U+0,u32(0x2ec0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a69f:{NFSU2_TR(0x63a69f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a6a4ull));
TAIL_STATIC(0x575620u,575);
}
B63a6a4:L63a6a4:{c.instructions+=5;NFSU2_TR(0x63a6a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63a6a7:{NFSU2_TR(0x63a6a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a6ab:{NFSU2_TR(0x63a6ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a6ad:{NFSU2_TR(0x63a6ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63a6b5:{NFSU2_TR(0x63a6b5);
if(r1(R+518)){{goto L63a6c3;}}
}
B63a6b7:L63a6b7:{c.instructions+=4;NFSU2_TR(0x63a6b7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a6b9:{NFSU2_TR(0x63a6b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a6ba:{NFSU2_TR(0x63a6ba);
__builtin_memmove((R+4),(R+0),4);
}
B63a6bc:{NFSU2_TR(0x63a6bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a6c1ull));
TAIL_STATIC(0x638190u,638);
}
B63a6c1:L63a6c1:{c.instructions+=1;NFSU2_TR(0x63a6c1);
{goto L63a6c5;}
}
B63a6c3:L63a6c3:{c.instructions+=1;NFSU2_TR(0x63a6c3);
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
B63a6c5:L63a6c5:{c.instructions+=3;NFSU2_TR(0x63a6c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B63a6cd:{NFSU2_TR(0x63a6cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a6d0:{NFSU2_TR(0x63a6d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a6d5ull));
TAIL_STATIC(0x4022c0u,402);
}
B63a6d5:L63a6d5:{c.instructions+=6;NFSU2_TR(0x63a6d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a6d9:{NFSU2_TR(0x63a6d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a6da:{NFSU2_TR(0x63a6da);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a6e1:{NFSU2_TR(0x63a6e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a6e2:{NFSU2_TR(0x63a6e2);
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
B63a6e5:{NFSU2_TR(0x63a6e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a6f0:L63a6f0:{c.instructions+=8;NFSU2_TR(0x63a6f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a6f1:{NFSU2_TR(0x63a6f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a6f2:{NFSU2_TR(0x63a6f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a6f3:{NFSU2_TR(0x63a6f3);
__builtin_memmove((R+24),(R+4),4);
}
B63a6f5:{NFSU2_TR(0x63a6f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B63a6f8:{NFSU2_TR(0x63a6f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63a6fa:{NFSU2_TR(0x63a6fa);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B63a6fc:{NFSU2_TR(0x63a6fc);
if(r1(R+518)){{goto L63a740;}}
}
B63a6fe:L63a6fe:{c.instructions+=9;NFSU2_TR(0x63a6fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a701:{NFSU2_TR(0x63a701);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a702:{NFSU2_TR(0x63a702);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63a705:{NFSU2_TR(0x63a705);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a708:{NFSU2_TR(0x63a708);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a70b:{NFSU2_TR(0x63a70b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63a70d:{NFSU2_TR(0x63a70d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63a70f:{NFSU2_TR(0x63a70f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a713:{NFSU2_TR(0x63a713);
if(r1(R+518)){{goto L63a729;}}
}
B63a715:L63a715:{c.instructions+=1;NFSU2_TR(0x63a715);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a716:L63a716:{c.instructions+=5;NFSU2_TR(0x63a716);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B63a718:{NFSU2_TR(0x63a718);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a71a:{NFSU2_TR(0x63a71a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a71b:{NFSU2_TR(0x63a71b);
__builtin_memmove((R+4),(R+24),4);
}
B63a71d:{NFSU2_TR(0x63a71d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a722ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a000u);}goto L63a000;}
}
B63a722:L63a722:{c.instructions+=3;NFSU2_TR(0x63a722);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63a724:{NFSU2_TR(0x63a724);
__builtin_memmove((R+0),(R+28),4);
}
B63a726:{NFSU2_TR(0x63a726);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a716u);}goto L63a716;}}
}
B63a728:L63a728:{c.instructions+=1;NFSU2_TR(0x63a728);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a729:L63a729:{c.instructions+=5;NFSU2_TR(0x63a729);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63a72d:{NFSU2_TR(0x63a72d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a72e:{NFSU2_TR(0x63a72e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a72f:{NFSU2_TR(0x63a72f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a731:{NFSU2_TR(0x63a731);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a736ull));
TAIL_STATIC(0x43fba0u,43f);
}
B63a736:L63a736:{c.instructions+=2;NFSU2_TR(0x63a736);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a737:{NFSU2_TR(0x63a737);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a73cull));
TAIL_STATIC(0x440540u,440);
}
B63a73c:L63a73c:{c.instructions+=2;NFSU2_TR(0x63a73c);
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
B63a73f:{NFSU2_TR(0x63a73f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63a740:L63a740:{c.instructions+=4;NFSU2_TR(0x63a740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a741:{NFSU2_TR(0x63a741);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63a742:{NFSU2_TR(0x63a742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63a743:{NFSU2_TR(0x63a743);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a750:L63a750:{c.instructions+=7;NFSU2_TR(0x63a750);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a754:{NFSU2_TR(0x63a754);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a756:{NFSU2_TR(0x63a756);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a757:{NFSU2_TR(0x63a757);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a758:{NFSU2_TR(0x63a758);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a759:{NFSU2_TR(0x63a759);
__builtin_memmove((R+12),(R+4),4);
}
B63a75b:{NFSU2_TR(0x63a75b);
if(r1(R+518)){{goto L63a7b7;}}
}
B63a75d:L63a75d:{c.instructions+=3;NFSU2_TR(0x63a75d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a75f:{NFSU2_TR(0x63a75f);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a764:{NFSU2_TR(0x63a764);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a769ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a280u);}goto L63a280;}
}
B63a769:L63a769:{c.instructions+=10;NFSU2_TR(0x63a769);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63a76d:{NFSU2_TR(0x63a76d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a76f:{NFSU2_TR(0x63a76f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a770:{NFSU2_TR(0x63a770);
w4(R+0,u32(0x1ull));
}
B63a775:{NFSU2_TR(0x63a775);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a778:{NFSU2_TR(0x63a778);
u8 U[4];
w4(U+0,u32(0x610a10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a77d:{NFSU2_TR(0x63a77d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63a780:{NFSU2_TR(0x63a780);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a781:{NFSU2_TR(0x63a781);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a784:{NFSU2_TR(0x63a784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a789ull));
TAIL_STATIC(0x4941c0u,494);
}
B63a789:L63a789:{c.instructions+=4;NFSU2_TR(0x63a789);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B63a78c:{NFSU2_TR(0x63a78c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a78d:{NFSU2_TR(0x63a78d);
w4(R+4,u32(0x82dbc8ull));
}
B63a792:{NFSU2_TR(0x63a792);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a797ull));
TAIL_STATIC(0x48ce80u,48c);
}
B63a797:L63a797:{c.instructions+=3;NFSU2_TR(0x63a797);
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
B63a799:{NFSU2_TR(0x63a799);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a79c:{NFSU2_TR(0x63a79c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63a81a;}}
}
B63a79e:L63a79e:{c.instructions+=4;NFSU2_TR(0x63a79e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63a7a2:{NFSU2_TR(0x63a7a2);
w4(R+4,u32(0x8a3288ull));
}
B63a7a7:{NFSU2_TR(0x63a7a7);
__builtin_memmove(gp(0x8a329c),(R+0),4);
}
B63a7ac:{NFSU2_TR(0x63a7ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a7b1ull));
TAIL_STATIC(0x63b160u,63b);
}
B63a7b1:L63a7b1:{c.instructions+=4;NFSU2_TR(0x63a7b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a7b2:{NFSU2_TR(0x63a7b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a7b3:{NFSU2_TR(0x63a7b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63a7b4:{NFSU2_TR(0x63a7b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a7b7:L63a7b7:{c.instructions+=9;NFSU2_TR(0x63a7b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63a7bb:{NFSU2_TR(0x63a7bb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a7bc:{NFSU2_TR(0x63a7bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a7be:{NFSU2_TR(0x63a7be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a7c0:{NFSU2_TR(0x63a7c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a7c2:{NFSU2_TR(0x63a7c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63a7c5:{NFSU2_TR(0x63a7c5);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a7c7:{NFSU2_TR(0x63a7c7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a7c8:{NFSU2_TR(0x63a7c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a7cdull));
TAIL_STATIC(0x57cef0u,57c);
}
B63a7cd:L63a7cd:{c.instructions+=3;NFSU2_TR(0x63a7cd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a7ce:{NFSU2_TR(0x63a7ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a7d1:{NFSU2_TR(0x63a7d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a7d6ull));
TAIL_STATIC(0x57d900u,57d);
}
B63a7d6:L63a7d6:{c.instructions+=6;NFSU2_TR(0x63a7d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B63a7d9:{NFSU2_TR(0x63a7d9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B63a7db:{NFSU2_TR(0x63a7db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a7dc:{NFSU2_TR(0x63a7dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a7dd:{NFSU2_TR(0x63a7dd);
__builtin_memmove((R+4),(R+12),4);
}
B63a7df:{NFSU2_TR(0x63a7df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a7e4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a280u);}goto L63a280;}
}
B63a7e4:L63a7e4:{c.instructions+=2;NFSU2_TR(0x63a7e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a7e6:{NFSU2_TR(0x63a7e6);
if(r1(R+518)){{goto L63a7ed;}}
}
B63a7e8:L63a7e8:{c.instructions+=1;NFSU2_TR(0x63a7e8);
w4(R+28,u32(0x4ull));
}
B63a7ed:L63a7ed:{c.instructions+=6;NFSU2_TR(0x63a7ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a7f0:{NFSU2_TR(0x63a7f0);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7ull))));
}
B63a7f3:{NFSU2_TR(0x63a7f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a7f4:{NFSU2_TR(0x63a7f4);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x2000ull))));
}
B63a7fa:{NFSU2_TR(0x63a7fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a7fb:{NFSU2_TR(0x63a7fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a800ull));
TAIL_STATIC(0x570fa0u,570);
}
B63a800:L63a800:{c.instructions+=7;NFSU2_TR(0x63a800);
w4(R+0,u32(0x1ull));
}
B63a805:{NFSU2_TR(0x63a805);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5aull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63a808:{NFSU2_TR(0x63a808);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a809:{NFSU2_TR(0x63a809);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a80c:{NFSU2_TR(0x63a80c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a80f:{NFSU2_TR(0x63a80f);
u8 U[4];
w4(U+0,u32(0x610a10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a814:{NFSU2_TR(0x63a814);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a819ull));
TAIL_STATIC(0x57bd70u,57b);
}
B63a819:L63a819:{c.instructions+=1;NFSU2_TR(0x63a819);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63a81a:L63a81a:{c.instructions+=4;NFSU2_TR(0x63a81a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a81b:{NFSU2_TR(0x63a81b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a81c:{NFSU2_TR(0x63a81c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63a81d:{NFSU2_TR(0x63a81d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a820:L63a820:{c.instructions+=9;NFSU2_TR(0x63a820);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a824:{NFSU2_TR(0x63a824);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a825:{NFSU2_TR(0x63a825);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a826:{NFSU2_TR(0x63a826);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63a82a:{NFSU2_TR(0x63a82a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B63a82c:{NFSU2_TR(0x63a82c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a82e:{NFSU2_TR(0x63a82e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a82f:{NFSU2_TR(0x63a82f);
__builtin_memmove((R+28),(R+4),4);
}
B63a831:{NFSU2_TR(0x63a831);
if(r1(R+518)){{goto L63a843;}}
}
B63a833:L63a833:{c.instructions+=5;NFSU2_TR(0x63a833);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a836:{NFSU2_TR(0x63a836);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a838:{NFSU2_TR(0x63a838);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a839:{NFSU2_TR(0x63a839);
w4(R+20,u32(0x4ull));
}
B63a83e:{NFSU2_TR(0x63a83e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a843ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a280u);}goto L63a280;}
}
B63a843:L63a843:{c.instructions+=8;NFSU2_TR(0x63a843);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a844:{NFSU2_TR(0x63a844);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63a84b:{NFSU2_TR(0x63a84b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a84c:{NFSU2_TR(0x63a84c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a84f:{NFSU2_TR(0x63a84f);
u8 U[4];
w4(U+0,u32(0x610a30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a854:{NFSU2_TR(0x63a854);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a855:{NFSU2_TR(0x63a855);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63a859:{NFSU2_TR(0x63a859);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a85eull));
TAIL_STATIC(0x4944d0u,494);
}
B63a85e:L63a85e:{c.instructions+=4;NFSU2_TR(0x63a85e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B63a861:{NFSU2_TR(0x63a861);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a862:{NFSU2_TR(0x63a862);
w4(R+4,u32(0x83579cull));
}
B63a867:{NFSU2_TR(0x63a867);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a86cull));
TAIL_STATIC(0x48ce80u,48c);
}
B63a86c:L63a86c:{c.instructions+=6;NFSU2_TR(0x63a86c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a86d:{NFSU2_TR(0x63a86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a870:{NFSU2_TR(0x63a870);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a871:{NFSU2_TR(0x63a871);
w4(R+0,u32(0x1ull));
}
B63a876:{NFSU2_TR(0x63a876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63a877:{NFSU2_TR(0x63a877);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a880:L63a880:{c.instructions+=12;NFSU2_TR(0x63a880);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B63a886:{NFSU2_TR(0x63a886);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a887:{NFSU2_TR(0x63a887);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a888:{NFSU2_TR(0x63a888);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63a88c:{NFSU2_TR(0x63a88c);
__builtin_memmove((R+20),(R+4),4);
}
B63a88e:{NFSU2_TR(0x63a88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a891:{NFSU2_TR(0x63a891);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B63a897:{NFSU2_TR(0x63a897);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a898:{NFSU2_TR(0x63a898);
u8 U[16];
w4(U+0,u32(u32(u32(0x844ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B63a89f:{NFSU2_TR(0x63a89f);
w4(R+0,u32(0x2ull));
}
B63a8a4:{NFSU2_TR(0x63a8a4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63a8a6:{NFSU2_TR(0x63a8a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63a8b3;}}
}
B63a8a8:L63a8a8:{c.instructions+=6;NFSU2_TR(0x63a8a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a8a9:{NFSU2_TR(0x63a8a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63a8ac:{NFSU2_TR(0x63a8ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a8ad:{NFSU2_TR(0x63a8ad);
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
B63a8af:{NFSU2_TR(0x63a8af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63a8b0:{NFSU2_TR(0x63a8b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a8b3:L63a8b3:{c.instructions+=7;NFSU2_TR(0x63a8b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a8b6:{NFSU2_TR(0x63a8b6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a8b8:{NFSU2_TR(0x63a8b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a8b9:{NFSU2_TR(0x63a8b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a8bc:{NFSU2_TR(0x63a8bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a8bd:{NFSU2_TR(0x63a8bd);
w4(R+4,u32(0x82dbc8ull));
}
B63a8c2:{NFSU2_TR(0x63a8c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a8c7ull));
TAIL_STATIC(0x48d420u,48d);
}
B63a8c7:L63a8c7:{c.instructions+=2;NFSU2_TR(0x63a8c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a8c9:{NFSU2_TR(0x63a8c9);
if(r1(R+518)){{goto L63a8f2;}}
}
B63a8cb:L63a8cb:{c.instructions+=1;NFSU2_TR(0x63a8cb);
{goto L63a8d0;}
}
B63a8d0:L63a8d0:{c.instructions+=3;NFSU2_TR(0x63a8d0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a8d2:{NFSU2_TR(0x63a8d2);
__builtin_memmove((R+4),(R+20),4);
}
B63a8d4:{NFSU2_TR(0x63a8d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a8d9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a1b0u);}goto L63a1b0;}
}
B63a8d9:L63a8d9:{c.instructions+=2;NFSU2_TR(0x63a8d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a8db:{NFSU2_TR(0x63a8db);
if(r1(R+518)){{goto L63a8f2;}}
}
B63a8dd:L63a8dd:{c.instructions+=6;NFSU2_TR(0x63a8dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a8e0:{NFSU2_TR(0x63a8e0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a8e2:{NFSU2_TR(0x63a8e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a8e3:{NFSU2_TR(0x63a8e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a8e4:{NFSU2_TR(0x63a8e4);
w4(R+4,u32(0x82dbc8ull));
}
B63a8e9:{NFSU2_TR(0x63a8e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a8eeull));
TAIL_STATIC(0x48d420u,48d);
}
B63a8ee:L63a8ee:{c.instructions+=2;NFSU2_TR(0x63a8ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a8f0:{NFSU2_TR(0x63a8f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a8d0u);}goto L63a8d0;}}
}
B63a8f2:L63a8f2:{c.instructions+=9;NFSU2_TR(0x63a8f2);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a8f4:{NFSU2_TR(0x63a8f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a8f5:{NFSU2_TR(0x63a8f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63a8f9:{NFSU2_TR(0x63a8f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63a900:{NFSU2_TR(0x63a900);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63a903:{NFSU2_TR(0x63a903);
u8 U[4];
w4(U+0,u32(0x610a50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a908:{NFSU2_TR(0x63a908);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a909:{NFSU2_TR(0x63a909);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a90a:{NFSU2_TR(0x63a90a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a90full));
TAIL_STATIC(0x494a20u,494);
}
B63a90f:L63a90f:{c.instructions+=6;NFSU2_TR(0x63a90f);
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
B63a912:{NFSU2_TR(0x63a912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a913:{NFSU2_TR(0x63a913);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63a914:{NFSU2_TR(0x63a914);
w4(R+0,u32(0x1ull));
}
B63a919:{NFSU2_TR(0x63a919);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63a91a:{NFSU2_TR(0x63a91a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63a920:L63a920:{c.instructions+=10;NFSU2_TR(0x63a920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x204ull))));
}
B63a926:{NFSU2_TR(0x63a926);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63a929:{NFSU2_TR(0x63a929);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a92a:{NFSU2_TR(0x63a92a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a92b:{NFSU2_TR(0x63a92b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63a92e:{NFSU2_TR(0x63a92e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a92f:{NFSU2_TR(0x63a92f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B63a931:{NFSU2_TR(0x63a931);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63a933:{NFSU2_TR(0x63a933);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a937:{NFSU2_TR(0x63a937);
if(r1(R+518)){{goto L63aa0e;}}
}
B63a93d:L63a93d:{c.instructions+=2;NFSU2_TR(0x63a93d);
w4(R+12,u32(0x1ull));
}
B63a942:{NFSU2_TR(0x63a942);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a943:L63a943:{c.instructions+=3;NFSU2_TR(0x63a943);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a946:{NFSU2_TR(0x63a946);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a948:{NFSU2_TR(0x63a948);
if(r1(R+518)){{goto L63a99a;}}
}
B63a94a:L63a94a:{c.instructions+=4;NFSU2_TR(0x63a94a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63a950:{NFSU2_TR(0x63a950);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B63a953:{NFSU2_TR(0x63a953);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63a955:{NFSU2_TR(0x63a955);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63a99a;}}
}
B63a957:L63a957:{c.instructions+=4;NFSU2_TR(0x63a957);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63a95a:{NFSU2_TR(0x63a95a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a95d:{NFSU2_TR(0x63a95d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B63a960:{NFSU2_TR(0x63a960);
w4(R+28,u32(0x2ull));
}
B63a965:L63a965:{c.instructions+=3;NFSU2_TR(0x63a965);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a968:{NFSU2_TR(0x63a968);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a96a:{NFSU2_TR(0x63a96a);
if(r1(R+518)){{goto L63a971;}}
}
B63a96c:L63a96c:{c.instructions+=2;NFSU2_TR(0x63a96c);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B63a970:{NFSU2_TR(0x63a970);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B63a971:L63a971:{c.instructions+=3;NFSU2_TR(0x63a971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B63a973:{NFSU2_TR(0x63a973);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a975:{NFSU2_TR(0x63a975);
if(r1(R+518)){{goto L63a97c;}}
}
B63a977:L63a977:{c.instructions+=2;NFSU2_TR(0x63a977);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B63a97b:{NFSU2_TR(0x63a97b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B63a97c:L63a97c:{c.instructions+=3;NFSU2_TR(0x63a97c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a97f:{NFSU2_TR(0x63a97f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a981:{NFSU2_TR(0x63a981);
if(r1(R+518)){{goto L63a988;}}
}
B63a983:L63a983:{c.instructions+=2;NFSU2_TR(0x63a983);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B63a987:{NFSU2_TR(0x63a987);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B63a988:L63a988:{c.instructions+=3;NFSU2_TR(0x63a988);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a98b:{NFSU2_TR(0x63a98b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a98d:{NFSU2_TR(0x63a98d);
if(r1(R+518)){{goto L63a994;}}
}
B63a98f:L63a98f:{c.instructions+=2;NFSU2_TR(0x63a98f);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B63a993:{NFSU2_TR(0x63a993);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B63a994:L63a994:{c.instructions+=3;NFSU2_TR(0x63a994);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B63a997:{NFSU2_TR(0x63a997);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B63a998:{NFSU2_TR(0x63a998);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a965u);}goto L63a965;}}
}
B63a99a:L63a99a:{c.instructions+=3;NFSU2_TR(0x63a99a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B63a99c:{NFSU2_TR(0x63a99c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63a99e:{NFSU2_TR(0x63a99e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a943u);}goto L63a943;}}
}
B63a9a0:L63a9a0:{c.instructions+=3;NFSU2_TR(0x63a9a0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a9a2:{NFSU2_TR(0x63a9a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63a9a3:{NFSU2_TR(0x63a9a3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63aa0e;}}
}
B63a9a5:L63a9a5:{c.instructions+=6;NFSU2_TR(0x63a9a5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a9a7:{NFSU2_TR(0x63a9a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a9a8:{NFSU2_TR(0x63a9a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63a9ac:{NFSU2_TR(0x63a9ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a9ad:{NFSU2_TR(0x63a9ad);
w4(R+4,u32(0x82dbc8ull));
}
B63a9b2:{NFSU2_TR(0x63a9b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a9b7ull));
TAIL_STATIC(0x48d420u,48d);
}
B63a9b7:L63a9b7:{c.instructions+=2;NFSU2_TR(0x63a9b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a9b9:{NFSU2_TR(0x63a9b9);
if(r1(R+518)){{goto L63a9e4;}}
}
B63a9bb:L63a9bb:{c.instructions+=1;NFSU2_TR(0x63a9bb);
{goto L63a9c0;}
}
B63a9c0:L63a9c0:{c.instructions+=3;NFSU2_TR(0x63a9c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63a9c4:{NFSU2_TR(0x63a9c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a9c5:{NFSU2_TR(0x63a9c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a9caull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a1b0u);}goto L63a1b0;}
}
B63a9ca:L63a9ca:{c.instructions+=2;NFSU2_TR(0x63a9ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a9cc:{NFSU2_TR(0x63a9cc);
if(r1(R+518)){{goto L63a9e4;}}
}
B63a9ce:L63a9ce:{c.instructions+=6;NFSU2_TR(0x63a9ce);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a9d0:{NFSU2_TR(0x63a9d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a9d1:{NFSU2_TR(0x63a9d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63a9d5:{NFSU2_TR(0x63a9d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a9d6:{NFSU2_TR(0x63a9d6);
w4(R+4,u32(0x82dbc8ull));
}
B63a9db:{NFSU2_TR(0x63a9db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a9e0ull));
TAIL_STATIC(0x48d420u,48d);
}
B63a9e0:L63a9e0:{c.instructions+=2;NFSU2_TR(0x63a9e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63a9e2:{NFSU2_TR(0x63a9e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a9c0u);}goto L63a9c0;}}
}
B63a9e4:L63a9e4:{c.instructions+=9;NFSU2_TR(0x63a9e4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63a9e8:{NFSU2_TR(0x63a9e8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a9ea:{NFSU2_TR(0x63a9ea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a9ec:{NFSU2_TR(0x63a9ec);
u8 U[4];
w4(U+0,u32(0x61caf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a9f1:{NFSU2_TR(0x63a9f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63a9f5:{NFSU2_TR(0x63a9f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a9f6:{NFSU2_TR(0x63a9f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63a9f7:{NFSU2_TR(0x63a9f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63a9fa:{NFSU2_TR(0x63a9fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63a9ffull));
TAIL_STATIC(0x494a20u,494);
}
B63a9ff:L63a9ff:{c.instructions+=7;NFSU2_TR(0x63a9ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B63aa02:{NFSU2_TR(0x63aa02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63aa03:{NFSU2_TR(0x63aa03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63aa04:{NFSU2_TR(0x63aa04);
__builtin_memmove((R+0),(R+12),4);
}
B63aa06:{NFSU2_TR(0x63aa06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63aa07:{NFSU2_TR(0x63aa07);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x204ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x204ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x204ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63aa0d:{NFSU2_TR(0x63aa0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63aa0e:L63aa0e:{c.instructions+=6;NFSU2_TR(0x63aa0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63aa0f:{NFSU2_TR(0x63aa0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63aa10:{NFSU2_TR(0x63aa10);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63aa12:{NFSU2_TR(0x63aa12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63aa13:{NFSU2_TR(0x63aa13);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x204ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x204ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x204ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63aa19:{NFSU2_TR(0x63aa19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63aa20:L63aa20:{c.instructions+=12;NFSU2_TR(0x63aa20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x204ull))));
}
B63aa26:{NFSU2_TR(0x63aa26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63aa27:{NFSU2_TR(0x63aa27);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63aa28:{NFSU2_TR(0x63aa28);
__builtin_memmove((R+20),(R+4),4);
}
B63aa2a:{NFSU2_TR(0x63aa2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63aa2b:{NFSU2_TR(0x63aa2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63aa2e:{NFSU2_TR(0x63aa2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63aa2f:{NFSU2_TR(0x63aa2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B63aa31:{NFSU2_TR(0x63aa31);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B63aa33:{NFSU2_TR(0x63aa33);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63aa35:{NFSU2_TR(0x63aa35);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63aa39:{NFSU2_TR(0x63aa39);
if(r1(R+518)){{goto L63ab59;}}
}
B63aa3f:L63aa3f:{c.instructions+=1;NFSU2_TR(0x63aa3f);
w4(R+12,u32(0x1ull));
}
B63aa44:L63aa44:{c.instructions+=3;NFSU2_TR(0x63aa44);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63aa47:{NFSU2_TR(0x63aa47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63aa49:{NFSU2_TR(0x63aa49);
if(r1(R+518)){{goto L63aae5;}}
}
B63aa4f:L63aa4f:{c.instructions+=4;NFSU2_TR(0x63aa4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63aa55:{NFSU2_TR(0x63aa55);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B63aa58:{NFSU2_TR(0x63aa58);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63aa5a:{NFSU2_TR(0x63aa5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63aada;}}
}
B63aa5c:L63aa5c:{c.instructions+=4;NFSU2_TR(0x63aa5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63aa5f:{NFSU2_TR(0x63aa5f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63aa61:{NFSU2_TR(0x63aa61);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63aa63:{NFSU2_TR(0x63aa63);
if(r1(R+518)){{goto L63aa76;}}
}
B63aa65:L63aa65:{c.instructions+=2;NFSU2_TR(0x63aa65);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+0))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B63aa68:{NFSU2_TR(0x63aa68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63aa76;}}
}
B63aa6a:L63aa6a:{c.instructions+=4;NFSU2_TR(0x63aa6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63aa6d:{NFSU2_TR(0x63aa6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63aa70:{NFSU2_TR(0x63aa70);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B63aa74:{NFSU2_TR(0x63aa74);
__builtin_memmove((R+0),(R+12),4);
}
B63aa76:L63aa76:{c.instructions+=3;NFSU2_TR(0x63aa76);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63aa79:{NFSU2_TR(0x63aa79);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63aa7b:{NFSU2_TR(0x63aa7b);
if(r1(R+518)){{goto L63aa91;}}
}
B63aa7d:L63aa7d:{c.instructions+=2;NFSU2_TR(0x63aa7d);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B63aa81:{NFSU2_TR(0x63aa81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63aa91;}}
}
B63aa83:L63aa83:{c.instructions+=5;NFSU2_TR(0x63aa83);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63aa86:{NFSU2_TR(0x63aa86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63aa89:{NFSU2_TR(0x63aa89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B63aa8c:{NFSU2_TR(0x63aa8c);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B63aa90:{NFSU2_TR(0x63aa90);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B63aa91:L63aa91:{c.instructions+=3;NFSU2_TR(0x63aa91);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63aa94:{NFSU2_TR(0x63aa94);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63aa96:{NFSU2_TR(0x63aa96);
if(r1(R+518)){{goto L63aaac;}}
}
B63aa98:L63aa98:{c.instructions+=2;NFSU2_TR(0x63aa98);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B63aa9c:{NFSU2_TR(0x63aa9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63aaac;}}
}
B63aa9e:L63aa9e:{c.instructions+=5;NFSU2_TR(0x63aa9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63aaa1:{NFSU2_TR(0x63aaa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63aaa4:{NFSU2_TR(0x63aaa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B63aaa7:{NFSU2_TR(0x63aaa7);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B63aaab:{NFSU2_TR(0x63aaab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B63aaac:L63aaac:{c.instructions+=3;NFSU2_TR(0x63aaac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63aaaf:{NFSU2_TR(0x63aaaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63aab1:{NFSU2_TR(0x63aab1);
if(r1(R+518)){{goto L63aac7;}}
}
B63aab3:L63aab3:{c.instructions+=2;NFSU2_TR(0x63aab3);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B63aab7:{NFSU2_TR(0x63aab7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63aac7;}}
}
B63aab9:L63aab9:{c.instructions+=5;NFSU2_TR(0x63aab9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63aabc:{NFSU2_TR(0x63aabc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63aabf:{NFSU2_TR(0x63aabf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B63aac2:{NFSU2_TR(0x63aac2);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B63aac6:{NFSU2_TR(0x63aac6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B63aac7:L63aac7:{c.instructions+=7;NFSU2_TR(0x63aac7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B63aacb:{NFSU2_TR(0x63aacb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63aacd:{NFSU2_TR(0x63aacd);
__builtin_memmove((R+4),(R+518),1);
}
B63aad0:{NFSU2_TR(0x63aad0);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B63aad2:{NFSU2_TR(0x63aad2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63aad5:{NFSU2_TR(0x63aad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63aad8:{NFSU2_TR(0x63aad8);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B63aada:L63aada:{c.instructions+=3;NFSU2_TR(0x63aada);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B63aadd:{NFSU2_TR(0x63aadd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63aadf:{NFSU2_TR(0x63aadf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63aae5;}}
}
B63aae1:L63aae1:{c.instructions+=1;NFSU2_TR(0x63aae1);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63aae5:L63aae5:{c.instructions+=4;NFSU2_TR(0x63aae5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B63aae7:{NFSU2_TR(0x63aae7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63aaea:{NFSU2_TR(0x63aaea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63aaec:{NFSU2_TR(0x63aaec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63aa44u);}goto L63aa44;}}
}
B63aaf2:L63aaf2:{c.instructions+=2;NFSU2_TR(0x63aaf2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63aaf4:{NFSU2_TR(0x63aaf4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63ab59;}}
}
B63aaf6:L63aaf6:{c.instructions+=6;NFSU2_TR(0x63aaf6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63aaf8:{NFSU2_TR(0x63aaf8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63aaf9:{NFSU2_TR(0x63aaf9);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63aafd:{NFSU2_TR(0x63aafd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63aafe:{NFSU2_TR(0x63aafe);
w4(R+4,u32(0x83579cull));
}
B63ab03:{NFSU2_TR(0x63ab03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ab08ull));
TAIL_STATIC(0x48d420u,48d);
}
B63ab08:L63ab08:{c.instructions+=2;NFSU2_TR(0x63ab08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ab0a:{NFSU2_TR(0x63ab0a);
if(r1(R+518)){{goto L63ab32;}}
}
B63ab0c:L63ab0c:{c.instructions+=1;NFSU2_TR(0x63ab0c);
__builtin_memmove((R+16),(R+16),4);
}
B63ab10:L63ab10:{c.instructions+=3;NFSU2_TR(0x63ab10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ab11:{NFSU2_TR(0x63ab11);
__builtin_memmove((R+4),(R+20),4);
}
B63ab13:{NFSU2_TR(0x63ab13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ab18ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a1b0u);}goto L63a1b0;}
}
B63ab18:L63ab18:{c.instructions+=2;NFSU2_TR(0x63ab18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ab1a:{NFSU2_TR(0x63ab1a);
if(r1(R+518)){{goto L63ab32;}}
}
B63ab1c:L63ab1c:{c.instructions+=6;NFSU2_TR(0x63ab1c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ab1e:{NFSU2_TR(0x63ab1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ab1f:{NFSU2_TR(0x63ab1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63ab23:{NFSU2_TR(0x63ab23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ab24:{NFSU2_TR(0x63ab24);
w4(R+4,u32(0x83579cull));
}
B63ab29:{NFSU2_TR(0x63ab29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ab2eull));
TAIL_STATIC(0x48d420u,48d);
}
B63ab2e:L63ab2e:{c.instructions+=2;NFSU2_TR(0x63ab2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ab30:{NFSU2_TR(0x63ab30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63ab10u);}goto L63ab10;}}
}
B63ab32:L63ab32:{c.instructions+=8;NFSU2_TR(0x63ab32);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ab34:{NFSU2_TR(0x63ab34);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ab36:{NFSU2_TR(0x63ab36);
u8 U[4];
w4(U+0,u32(0x61cb30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ab3b:{NFSU2_TR(0x63ab3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63ab3f:{NFSU2_TR(0x63ab3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ab40:{NFSU2_TR(0x63ab40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ab41:{NFSU2_TR(0x63ab41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ab44:{NFSU2_TR(0x63ab44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ab49ull));
TAIL_STATIC(0x494d60u,494);
}
B63ab49:L63ab49:{c.instructions+=8;NFSU2_TR(0x63ab49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B63ab4c:{NFSU2_TR(0x63ab4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63ab4d:{NFSU2_TR(0x63ab4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63ab4e:{NFSU2_TR(0x63ab4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63ab4f:{NFSU2_TR(0x63ab4f);
__builtin_memmove((R+0),(R+12),4);
}
B63ab51:{NFSU2_TR(0x63ab51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63ab52:{NFSU2_TR(0x63ab52);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x204ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x204ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x204ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63ab58:{NFSU2_TR(0x63ab58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ab59:L63ab59:{c.instructions+=7;NFSU2_TR(0x63ab59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63ab5a:{NFSU2_TR(0x63ab5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63ab5b:{NFSU2_TR(0x63ab5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63ab5c:{NFSU2_TR(0x63ab5c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63ab5e:{NFSU2_TR(0x63ab5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63ab5f:{NFSU2_TR(0x63ab5f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x204ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x204ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x204ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63ab65:{NFSU2_TR(0x63ab65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ab70:L63ab70:{c.instructions+=10;NFSU2_TR(0x63ab70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x800ull))));
}
B63ab76:{NFSU2_TR(0x63ab76);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ab77:{NFSU2_TR(0x63ab77);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ab78:{NFSU2_TR(0x63ab78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ab79:{NFSU2_TR(0x63ab79);
__builtin_memmove((R+24),(R+4),4);
}
B63ab7b:{NFSU2_TR(0x63ab7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63ab7e:{NFSU2_TR(0x63ab7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ab7f:{NFSU2_TR(0x63ab7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+28),(U+0),4);
}
B63ab82:{NFSU2_TR(0x63ab82);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63ab84:{NFSU2_TR(0x63ab84);
if(r1(R+518)){{goto L63abeb;}}
}
B63ab86:L63ab86:{c.instructions+=2;NFSU2_TR(0x63ab86);
u8 U[8];
w4(U+0,u32(u32(u32(0x814ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63ab8d:{NFSU2_TR(0x63ab8d);
__builtin_memmove((R+4),(R+4),4);
}
B63ab90:L63ab90:{c.instructions+=3;NFSU2_TR(0x63ab90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ab93:{NFSU2_TR(0x63ab93);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ab95:{NFSU2_TR(0x63ab95);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63abe5;}}
}
B63ab97:L63ab97:{c.instructions+=3;NFSU2_TR(0x63ab97);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ab9a:{NFSU2_TR(0x63ab9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ab9c:{NFSU2_TR(0x63ab9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63abe5;}}
}
B63ab9e:L63ab9e:{c.instructions+=7;NFSU2_TR(0x63ab9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x818ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63aba5:{NFSU2_TR(0x63aba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x95cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63abab:{NFSU2_TR(0x63abab);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63abad:{NFSU2_TR(0x63abad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63abb0:{NFSU2_TR(0x63abb0);
w4(R+8,u32(0x200ull));
}
B63abb5:{NFSU2_TR(0x63abb5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63abb6:{NFSU2_TR(0x63abb6);
if(r1(R+518)){{goto L63abc6;}}
}
B63abb8:L63abb8:{c.instructions+=5;NFSU2_TR(0x63abb8);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B63abba:{NFSU2_TR(0x63abba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63abbb:{NFSU2_TR(0x63abbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63abc1:{NFSU2_TR(0x63abc1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B63abc4:{NFSU2_TR(0x63abc4);
{goto L63abd4;}
}
B63abc6:L63abc6:{c.instructions+=4;NFSU2_TR(0x63abc6);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B63abc8:{NFSU2_TR(0x63abc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63abc9:{NFSU2_TR(0x63abc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63abcf:{NFSU2_TR(0x63abcf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x11cull))));
}
B63abd4:L63abd4:{c.instructions+=6;NFSU2_TR(0x63abd4);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B63abd8:{NFSU2_TR(0x63abd8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63abd9:{NFSU2_TR(0x63abd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63abda:{NFSU2_TR(0x63abda);
__builtin_memmove((R+4),(R+24),4);
}
B63abdc:{NFSU2_TR(0x63abdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63abdd:{NFSU2_TR(0x63abdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63abe2ull));
TAIL_STATIC(0x633c30u,633);
}
B63abe2:L63abe2:{c.instructions+=1;NFSU2_TR(0x63abe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B63abe5:L63abe5:{c.instructions+=3;NFSU2_TR(0x63abe5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B63abe7:{NFSU2_TR(0x63abe7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63abe9:{NFSU2_TR(0x63abe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63ab90u);}goto L63ab90;}}
}
B63abeb:L63abeb:{c.instructions+=4;NFSU2_TR(0x63abeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63abee:{NFSU2_TR(0x63abee);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B63abf0:{NFSU2_TR(0x63abf0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63abf2:{NFSU2_TR(0x63abf2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63ac23;}}
}
B63abf4:L63abf4:{c.instructions+=3;NFSU2_TR(0x63abf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63abf7:{NFSU2_TR(0x63abf7);
__builtin_memmove((R+8),(R+0),4);
}
B63abf9:{NFSU2_TR(0x63abf9);
__builtin_memmove((R+16),(R+16),4);
}
B63ac00:L63ac00:{c.instructions+=3;NFSU2_TR(0x63ac00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63ac02:{NFSU2_TR(0x63ac02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ac04:{NFSU2_TR(0x63ac04);
if(r1(R+518)){{goto L63ac19;}}
}
B63ac06:L63ac06:{c.instructions+=3;NFSU2_TR(0x63ac06);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B63ac09:{NFSU2_TR(0x63ac09);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63ac0b:{NFSU2_TR(0x63ac0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63ac19;}}
}
B63ac0d:L63ac0d:{c.instructions+=4;NFSU2_TR(0x63ac0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B63ac11:{NFSU2_TR(0x63ac11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ac14:{NFSU2_TR(0x63ac14);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B63ac18:{NFSU2_TR(0x63ac18);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B63ac19:L63ac19:{c.instructions+=3;NFSU2_TR(0x63ac19);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B63ac1c:{NFSU2_TR(0x63ac1c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B63ac1d:{NFSU2_TR(0x63ac1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63ac00u);}goto L63ac00;}}
}
B63ac1f:L63ac1f:{c.instructions+=2;NFSU2_TR(0x63ac1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ac21:{NFSU2_TR(0x63ac21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63ac56;}}
}
B63ac23:L63ac23:{c.instructions+=3;NFSU2_TR(0x63ac23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ac26:{NFSU2_TR(0x63ac26);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ac28:{NFSU2_TR(0x63ac28);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63ac40;}}
}
B63ac2a:L63ac2a:{c.instructions+=3;NFSU2_TR(0x63ac2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63ac2d:{NFSU2_TR(0x63ac2d);
__builtin_memmove((R+8),(R+0),4);
}
B63ac2f:{NFSU2_TR(0x63ac2f);
}
B63ac30:L63ac30:{c.instructions+=3;NFSU2_TR(0x63ac30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63ac32:{NFSU2_TR(0x63ac32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ac34:{NFSU2_TR(0x63ac34);
if(r1(R+518)){{goto L63ac3a;}}
}
B63ac36:L63ac36:{c.instructions+=1;NFSU2_TR(0x63ac36);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B63ac3a:L63ac3a:{c.instructions+=3;NFSU2_TR(0x63ac3a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B63ac3d:{NFSU2_TR(0x63ac3d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B63ac3e:{NFSU2_TR(0x63ac3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63ac30u);}goto L63ac30;}}
}
B63ac40:L63ac40:{c.instructions+=8;NFSU2_TR(0x63ac40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63ac41:{NFSU2_TR(0x63ac41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63ac48:{NFSU2_TR(0x63ac48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63ac49:{NFSU2_TR(0x63ac49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63ac4a:{NFSU2_TR(0x63ac4a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63ac4c:{NFSU2_TR(0x63ac4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63ac4d:{NFSU2_TR(0x63ac4d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x800ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x800ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x800ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63ac53:{NFSU2_TR(0x63ac53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ac56:L63ac56:{c.instructions+=4;NFSU2_TR(0x63ac56);
u8 U[8];
w4(U+0,u32(u32(u32(0x818ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ac5d:{NFSU2_TR(0x63ac5d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B63ac5f:{NFSU2_TR(0x63ac5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ac61:{NFSU2_TR(0x63ac61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63ac69;}}
}
B63ac63:L63ac63:{c.instructions+=2;NFSU2_TR(0x63ac63);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63ac67:{NFSU2_TR(0x63ac67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63aca6;}}
}
B63ac69:L63ac69:{c.instructions+=7;NFSU2_TR(0x63ac69);
w4(R+12,u32(0x4ull));
}
B63ac6e:{NFSU2_TR(0x63ac6e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ac6f:{NFSU2_TR(0x63ac6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ac70:{NFSU2_TR(0x63ac70);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63ac74:{NFSU2_TR(0x63ac74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ac75:{NFSU2_TR(0x63ac75);
w4(R+4,u32(0x83579cull));
}
B63ac7a:{NFSU2_TR(0x63ac7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ac7full));
TAIL_STATIC(0x48d420u,48d);
}
B63ac7f:L63ac7f:{c.instructions+=2;NFSU2_TR(0x63ac7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ac81:{NFSU2_TR(0x63ac81);
if(r1(R+518)){{goto L63aca6;}}
}
B63ac83:L63ac83:{c.instructions+=3;NFSU2_TR(0x63ac83);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ac85:{NFSU2_TR(0x63ac85);
__builtin_memmove((R+4),(R+24),4);
}
B63ac87:{NFSU2_TR(0x63ac87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ac8cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a1b0u);}goto L63a1b0;}
}
B63ac8c:L63ac8c:{c.instructions+=2;NFSU2_TR(0x63ac8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ac8e:{NFSU2_TR(0x63ac8e);
if(r1(R+518)){{goto L63aca6;}}
}
B63ac90:L63ac90:{c.instructions+=6;NFSU2_TR(0x63ac90);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ac92:{NFSU2_TR(0x63ac92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ac93:{NFSU2_TR(0x63ac93);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63ac97:{NFSU2_TR(0x63ac97);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ac98:{NFSU2_TR(0x63ac98);
w4(R+4,u32(0x83579cull));
}
B63ac9d:{NFSU2_TR(0x63ac9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63aca2ull));
TAIL_STATIC(0x48d420u,48d);
}
B63aca2:L63aca2:{c.instructions+=2;NFSU2_TR(0x63aca2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63aca4:{NFSU2_TR(0x63aca4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63ac83u);}goto L63ac83;}}
}
B63aca6:L63aca6:{c.instructions+=8;NFSU2_TR(0x63aca6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63aca7:{NFSU2_TR(0x63aca7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63aca9:{NFSU2_TR(0x63aca9);
u8 U[4];
w4(U+0,u32(0x63a310ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63acae:{NFSU2_TR(0x63acae);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63acb2:{NFSU2_TR(0x63acb2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63acb3:{NFSU2_TR(0x63acb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63acb4:{NFSU2_TR(0x63acb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63acbb:{NFSU2_TR(0x63acbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63acc0ull));
TAIL_STATIC(0x494d60u,494);
}
B63acc0:L63acc0:{c.instructions+=8;NFSU2_TR(0x63acc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B63acc3:{NFSU2_TR(0x63acc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63acc4:{NFSU2_TR(0x63acc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63acc5:{NFSU2_TR(0x63acc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63acc6:{NFSU2_TR(0x63acc6);
w4(R+0,u32(0x1ull));
}
B63accb:{NFSU2_TR(0x63accb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63accc:{NFSU2_TR(0x63accc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x800ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x800ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x800ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B63acd2:{NFSU2_TR(0x63acd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ace0:L63ace0:{c.instructions+=9;NFSU2_TR(0x63ace0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ace4:{NFSU2_TR(0x63ace4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x114ull))));
}
B63acea:{NFSU2_TR(0x63acea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63acec:{NFSU2_TR(0x63acec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63aced:{NFSU2_TR(0x63aced);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63acee:{NFSU2_TR(0x63acee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63acef:{NFSU2_TR(0x63acef);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63acf6:{NFSU2_TR(0x63acf6);
__builtin_memmove((R+12),(R+4),4);
}
B63acf8:{NFSU2_TR(0x63acf8);
if(r1(R+518)){{goto L63ad27;}}
}
B63acfa:L63acfa:{c.instructions+=9;NFSU2_TR(0x63acfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x318ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ad00:{NFSU2_TR(0x63ad00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ad01:{NFSU2_TR(0x63ad01);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x31cull))));
__builtin_memmove((R+4),(U+0),4);
}
B63ad07:{NFSU2_TR(0x63ad07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ad08:{NFSU2_TR(0x63ad08);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ad0a:{NFSU2_TR(0x63ad0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63ad0e:{NFSU2_TR(0x63ad0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ad0f:{NFSU2_TR(0x63ad0f);
__builtin_memmove((R+4),(R+12),4);
}
B63ad11:{NFSU2_TR(0x63ad11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ad16ull));
TAIL_STATIC(0x6108a0u,610);
}
B63ad16:L63ad16:{c.instructions+=6;NFSU2_TR(0x63ad16);
__builtin_memmove((R+24),(R+0),4);
}
B63ad18:{NFSU2_TR(0x63ad18);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ad1a:{NFSU2_TR(0x63ad1a);
__builtin_memmove((R+0),(R+518),1);
}
B63ad1d:{NFSU2_TR(0x63ad1d);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B63ad1f:{NFSU2_TR(0x63ad1f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x308ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63ad25:{NFSU2_TR(0x63ad25);
{goto L63ad52;}
}
B63ad27:L63ad27:{c.instructions+=9;NFSU2_TR(0x63ad27);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63ad2d:{NFSU2_TR(0x63ad2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ad2e:{NFSU2_TR(0x63ad2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x434ull))));
__builtin_memmove((R+8),(U+0),4);
}
B63ad34:{NFSU2_TR(0x63ad34);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ad35:{NFSU2_TR(0x63ad35);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ad37:{NFSU2_TR(0x63ad37);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63ad3b:{NFSU2_TR(0x63ad3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ad3c:{NFSU2_TR(0x63ad3c);
__builtin_memmove((R+4),(R+12),4);
}
B63ad3e:{NFSU2_TR(0x63ad3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ad43ull));
TAIL_STATIC(0x6108a0u,610);
}
B63ad43:L63ad43:{c.instructions+=5;NFSU2_TR(0x63ad43);
__builtin_memmove((R+24),(R+0),4);
}
B63ad45:{NFSU2_TR(0x63ad45);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ad47:{NFSU2_TR(0x63ad47);
__builtin_memmove((R+4),(R+518),1);
}
B63ad4a:{NFSU2_TR(0x63ad4a);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B63ad4c:{NFSU2_TR(0x63ad4c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x309ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B63ad52:L63ad52:{c.instructions+=2;NFSU2_TR(0x63ad52);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ad54:{NFSU2_TR(0x63ad54);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L63ade4;}}
}
B63ad5a:L63ad5a:{c.instructions+=5;NFSU2_TR(0x63ad5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ad61:{NFSU2_TR(0x63ad61);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ad62:{NFSU2_TR(0x63ad62);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B63ad64:{NFSU2_TR(0x63ad64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ad66:{NFSU2_TR(0x63ad66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63ad79;}}
}
B63ad68:L63ad68:{c.instructions+=3;NFSU2_TR(0x63ad68);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ad6b:{NFSU2_TR(0x63ad6b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63ad6e:{NFSU2_TR(0x63ad6e);
if(r1(R+518)){{goto L63ad79;}}
}
B63ad70:L63ad70:{c.instructions+=2;NFSU2_TR(0x63ad70);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63ad73:{NFSU2_TR(0x63ad73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63adb6;}}
}
B63ad75:L63ad75:{c.instructions+=2;NFSU2_TR(0x63ad75);
__builtin_memmove((R+20),(R+0),4);
}
B63ad77:{NFSU2_TR(0x63ad77);
{goto L63adb6;}
}
B63ad79:L63ad79:{c.instructions+=7;NFSU2_TR(0x63ad79);
w4(R+20,u32(0x4ull));
}
B63ad7e:{NFSU2_TR(0x63ad7e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ad7f:{NFSU2_TR(0x63ad7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ad80:{NFSU2_TR(0x63ad80);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63ad84:{NFSU2_TR(0x63ad84);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ad85:{NFSU2_TR(0x63ad85);
w4(R+4,u32(0x83579cull));
}
B63ad8a:{NFSU2_TR(0x63ad8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ad8full));
TAIL_STATIC(0x48d420u,48d);
}
B63ad8f:L63ad8f:{c.instructions+=2;NFSU2_TR(0x63ad8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ad91:{NFSU2_TR(0x63ad91);
if(r1(R+518)){{goto L63adb6;}}
}
B63ad93:L63ad93:{c.instructions+=3;NFSU2_TR(0x63ad93);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ad95:{NFSU2_TR(0x63ad95);
__builtin_memmove((R+4),(R+12),4);
}
B63ad97:{NFSU2_TR(0x63ad97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ad9cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a1b0u);}goto L63a1b0;}
}
B63ad9c:L63ad9c:{c.instructions+=2;NFSU2_TR(0x63ad9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ad9e:{NFSU2_TR(0x63ad9e);
if(r1(R+518)){{goto L63adb6;}}
}
B63ada0:L63ada0:{c.instructions+=6;NFSU2_TR(0x63ada0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ada2:{NFSU2_TR(0x63ada2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ada3:{NFSU2_TR(0x63ada3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63ada7:{NFSU2_TR(0x63ada7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ada8:{NFSU2_TR(0x63ada8);
w4(R+4,u32(0x83579cull));
}
B63adad:{NFSU2_TR(0x63adad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63adb2ull));
TAIL_STATIC(0x48d420u,48d);
}
B63adb2:L63adb2:{c.instructions+=2;NFSU2_TR(0x63adb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63adb4:{NFSU2_TR(0x63adb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63ad93u);}goto L63ad93;}}
}
B63adb6:L63adb6:{c.instructions+=8;NFSU2_TR(0x63adb6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63adb7:{NFSU2_TR(0x63adb7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63adb8:{NFSU2_TR(0x63adb8);
u8 U[4];
w4(U+0,u32(0x61cb40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63adbd:{NFSU2_TR(0x63adbd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63adc1:{NFSU2_TR(0x63adc1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63adc2:{NFSU2_TR(0x63adc2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63adc3:{NFSU2_TR(0x63adc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63adca:{NFSU2_TR(0x63adca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63adcfull));
TAIL_STATIC(0x494d60u,494);
}
B63adcf:L63adcf:{c.instructions+=8;NFSU2_TR(0x63adcf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B63add2:{NFSU2_TR(0x63add2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63add3:{NFSU2_TR(0x63add3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63add4:{NFSU2_TR(0x63add4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63add5:{NFSU2_TR(0x63add5);
w4(R+0,u32(0x1ull));
}
B63adda:{NFSU2_TR(0x63adda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63addb:{NFSU2_TR(0x63addb);
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
B63ade1:{NFSU2_TR(0x63ade1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ade4:L63ade4:{c.instructions+=6;NFSU2_TR(0x63ade4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63ade5:{NFSU2_TR(0x63ade5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63ade6:{NFSU2_TR(0x63ade6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63ade8:{NFSU2_TR(0x63ade8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63ade9:{NFSU2_TR(0x63ade9);
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
B63adef:{NFSU2_TR(0x63adef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ae00:L63ae00:{c.instructions+=4;NFSU2_TR(0x63ae00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ae03:{NFSU2_TR(0x63ae03);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((R+8),(U+0),4);
}
B63ae06:{NFSU2_TR(0x63ae06);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B63ae08:{NFSU2_TR(0x63ae08);
if(r1(R+518)){{goto L63ae68;}}
}
B63ae0a:L63ae0a:{c.instructions+=3;NFSU2_TR(0x63ae0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ae0b:{NFSU2_TR(0x63ae0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63ae0f:{NFSU2_TR(0x63ae0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ae10:L63ae10:{c.instructions+=2;NFSU2_TR(0x63ae10);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x123cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63ae16:{NFSU2_TR(0x63ae16);
if(r1(R+518)){{goto L63ae23;}}
}
B63ae18:L63ae18:{c.instructions+=3;NFSU2_TR(0x63ae18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B63ae1a:{NFSU2_TR(0x63ae1a);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B63ae1c:{NFSU2_TR(0x63ae1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63ae10u);}goto L63ae10;}}
}
B63ae1e:L63ae1e:{c.instructions+=3;NFSU2_TR(0x63ae1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63ae1f:{NFSU2_TR(0x63ae1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63ae20:{NFSU2_TR(0x63ae20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ae23:L63ae23:{c.instructions+=3;NFSU2_TR(0x63ae23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63ae26:{NFSU2_TR(0x63ae26);
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
B63ae28:{NFSU2_TR(0x63ae28);
if(r1(R+518)){{goto L63ae66;}}
}
B63ae2a:L63ae2a:{c.instructions+=3;NFSU2_TR(0x63ae2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63ae2d:{NFSU2_TR(0x63ae2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ae2f:{NFSU2_TR(0x63ae2f);
if(r1(R+518)){{goto L63ae48;}}
}
B63ae31:L63ae31:{c.instructions+=9;NFSU2_TR(0x63ae31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B63ae33:{NFSU2_TR(0x63ae33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B63ae36:{NFSU2_TR(0x63ae36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+28)),r4(U+0));
}
B63ae38:{NFSU2_TR(0x63ae38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ae3b:{NFSU2_TR(0x63ae3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63ae3e:{NFSU2_TR(0x63ae3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B63ae40:{NFSU2_TR(0x63ae40);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ae43:{NFSU2_TR(0x63ae43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ae46:{NFSU2_TR(0x63ae46);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B63ae48:L63ae48:{c.instructions+=2;NFSU2_TR(0x63ae48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63ae4b:{NFSU2_TR(0x63ae4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63ae50;}}
}
B63ae4d:L63ae4d:{c.instructions+=1;NFSU2_TR(0x63ae4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B63ae50:L63ae50:{c.instructions+=3;NFSU2_TR(0x63ae50);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63ae53:{NFSU2_TR(0x63ae53);
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
B63ae55:{NFSU2_TR(0x63ae55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63ae66;}}
}
B63ae57:L63ae57:{c.instructions+=3;NFSU2_TR(0x63ae57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63ae5a:{NFSU2_TR(0x63ae5a);
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
B63ae5c:{NFSU2_TR(0x63ae5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63ae66;}}
}
B63ae5e:L63ae5e:{c.instructions+=3;NFSU2_TR(0x63ae5e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ae60:{NFSU2_TR(0x63ae60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ae61:{NFSU2_TR(0x63ae61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ae66ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a000u);}goto L63a000;}
}
B63ae66:L63ae66:{c.instructions+=2;NFSU2_TR(0x63ae66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63ae67:{NFSU2_TR(0x63ae67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63ae68:L63ae68:{c.instructions+=1;NFSU2_TR(0x63ae68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B63ae70:L63ae70:{c.instructions+=12;NFSU2_TR(0x63ae70);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63ae76:{NFSU2_TR(0x63ae76);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ae78:{NFSU2_TR(0x63ae78);
u8 U[4];
w4(U+0,u32(0x77a55eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ae7d:{NFSU2_TR(0x63ae7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ae7e:{NFSU2_TR(0x63ae7e);
__builtin_memmove((R+0),gp(0x8a1d00),4);
}
B63ae83:{NFSU2_TR(0x63ae83);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63ae8a:{NFSU2_TR(0x63ae8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x94ull))));
}
B63ae90:{NFSU2_TR(0x63ae90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ae91:{NFSU2_TR(0x63ae91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ae92:{NFSU2_TR(0x63ae92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63ae93:{NFSU2_TR(0x63ae93);
__builtin_memmove((R+24),(R+4),4);
}
B63ae95:{NFSU2_TR(0x63ae95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63ae9aull));
TAIL_STATIC(0x43cd10u,43c);
}
B63ae9a:L63ae9a:{c.instructions+=3;NFSU2_TR(0x63ae9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63ae9d:{NFSU2_TR(0x63ae9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63ae9f:{NFSU2_TR(0x63ae9f);
if(r1(R+518)){{goto L63aed0;}}
}
B63aea1:L63aea1:{c.instructions+=3;NFSU2_TR(0x63aea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63aea4:{NFSU2_TR(0x63aea4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63aea6:{NFSU2_TR(0x63aea6);
if(r1(R+518)){{goto L63aeb4;}}
}
B63aea8:L63aea8:{c.instructions+=1;NFSU2_TR(0x63aea8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63aeadull));
TAIL_STATIC(0x57ef60u,57e);
}
B63aead:L63aead:{c.instructions+=3;NFSU2_TR(0x63aead);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63aeb0:{NFSU2_TR(0x63aeb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63aeb2:{NFSU2_TR(0x63aeb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63aea8u);}goto L63aea8;}}
}
B63aeb4:L63aeb4:{c.instructions+=3;NFSU2_TR(0x63aeb4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63aeb6:{NFSU2_TR(0x63aeb6);
__builtin_memmove((R+4),(R+24),4);
}
B63aeb8:{NFSU2_TR(0x63aeb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63aebdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63a1b0u);}goto L63a1b0;}
}
B63aebd:L63aebd:{c.instructions+=3;NFSU2_TR(0x63aebd);
__builtin_memmove((R+4),gp(0x8a1d00),4);
}
B63aec3:{NFSU2_TR(0x63aec3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63aec4:{NFSU2_TR(0x63aec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63aec9ull));
TAIL_STATIC(0x43cd10u,43c);
}
B63aec9:L63aec9:{c.instructions+=3;NFSU2_TR(0x63aec9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63aecc:{NFSU2_TR(0x63aecc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63aece:{NFSU2_TR(0x63aece);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x63aea1u);}goto L63aea1;}}
}
B63aed0:L63aed0:{c.instructions+=3;NFSU2_TR(0x63aed0);
__builtin_memmove((R+8),gp(0x8a1d00),4);
}
B63aed6:{NFSU2_TR(0x63aed6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63aed7:{NFSU2_TR(0x63aed7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63aedcull));
TAIL_STATIC(0x440e50u,440);
}
B63aedc:L63aedc:{c.instructions+=6;NFSU2_TR(0x63aedc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B63aedf:{NFSU2_TR(0x63aedf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63aee3:{NFSU2_TR(0x63aee3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B63aee5:{NFSU2_TR(0x63aee5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63aee7:{NFSU2_TR(0x63aee7);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63aeee:{NFSU2_TR(0x63aeee);
if(r1(R+518)){{goto L63af11;}}
}
B63aef0:L63aef0:{c.instructions+=10;NFSU2_TR(0x63aef0);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63aef7:{NFSU2_TR(0x63aef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63aefa:{NFSU2_TR(0x63aefa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63aefb:{NFSU2_TR(0x63aefb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63aefe:{NFSU2_TR(0x63aefe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63aeff:{NFSU2_TR(0x63aeff);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63af06:{NFSU2_TR(0x63af06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63af07:{NFSU2_TR(0x63af07);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63af08:{NFSU2_TR(0x63af08);
__builtin_memmove((R+4),(R+0),4);
}
B63af0a:{NFSU2_TR(0x63af0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63af0full));
TAIL_STATIC(0x637840u,637);
}
B63af0f:L63af0f:{c.instructions+=1;NFSU2_TR(0x63af0f);
__builtin_memmove((R+28),(R+0),4);
}
B63af11:L63af11:{c.instructions+=18;NFSU2_TR(0x63af11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63af14:{NFSU2_TR(0x63af14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B63af16:{NFSU2_TR(0x63af16);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63af19:{NFSU2_TR(0x63af19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63af1c:{NFSU2_TR(0x63af1c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63af1d:{NFSU2_TR(0x63af1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63af20:{NFSU2_TR(0x63af20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B63af22:{NFSU2_TR(0x63af22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63af25:{NFSU2_TR(0x63af25);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B63af26:{NFSU2_TR(0x63af26);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63af27:{NFSU2_TR(0x63af27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63af2a:{NFSU2_TR(0x63af2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x910ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B63af30:{NFSU2_TR(0x63af30);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x954ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63af36:{NFSU2_TR(0x63af36);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63af39:{NFSU2_TR(0x63af39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63af3a:{NFSU2_TR(0x63af3a);
__builtin_memmove((R+4),(R+24),4);
}
B63af3c:{NFSU2_TR(0x63af3c);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B63af47:{NFSU2_TR(0x63af47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63af4cull));
TAIL_STATIC(0x633b00u,633);
}
B63af4c:L63af4c:{c.instructions+=11;NFSU2_TR(0x63af4c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63af4e:{NFSU2_TR(0x63af4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63af51:{NFSU2_TR(0x63af51);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63af57:{NFSU2_TR(0x63af57);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63af59:{NFSU2_TR(0x63af59);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63af5c:{NFSU2_TR(0x63af5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63af5d:{NFSU2_TR(0x63af5d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63af5f:{NFSU2_TR(0x63af5f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
}
B63af62:{NFSU2_TR(0x63af62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63af63:{NFSU2_TR(0x63af63);
__builtin_memmove((R+4),(R+24),4);
}
B63af65:{NFSU2_TR(0x63af65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63af6aull));
TAIL_STATIC(0x633c30u,633);
}
B63af6a:L63af6a:{c.instructions+=6;NFSU2_TR(0x63af6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x95cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63af70:{NFSU2_TR(0x63af70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63af71:{NFSU2_TR(0x63af71);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63af75:{NFSU2_TR(0x63af75);
u8 U[4];
w4(U+0,u32(0x7a8d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63af7a:{NFSU2_TR(0x63af7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63af7b:{NFSU2_TR(0x63af7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63af80ull));
TAIL_STATIC(0x4400d0u,440);
}
B63af80:L63af80:{c.instructions+=6;NFSU2_TR(0x63af80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B63af83:{NFSU2_TR(0x63af83);
u8 U[4];
w4(U+0,u32(0x8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63af88:{NFSU2_TR(0x63af88);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63af8c:{NFSU2_TR(0x63af8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63af8d:{NFSU2_TR(0x63af8d);
__builtin_memmove((R+4),(R+24),4);
}
B63af8f:{NFSU2_TR(0x63af8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63af94ull));
TAIL_STATIC(0x633b90u,633);
}
B63af94:L63af94:{c.instructions+=7;NFSU2_TR(0x63af94);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x304ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63af9a:{NFSU2_TR(0x63af9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x310ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63afa0:{NFSU2_TR(0x63afa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B63afa2:{NFSU2_TR(0x63afa2);
__builtin_memmove((R+0),gp(0x8a1ccc),4);
}
B63afa7:{NFSU2_TR(0x63afa7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B63afad:{NFSU2_TR(0x63afad);
u8 U[24];
w4(U+0,u32(u32(u32(0x844ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B63afb5:{NFSU2_TR(0x63afb5);
if(r1(R+518)){{goto L63afef;}}
}
B63afb7:L63afb7:{c.instructions+=5;NFSU2_TR(0x63afb7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63afb8:{NFSU2_TR(0x63afb8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63afbc:{NFSU2_TR(0x63afbc);
u8 U[4];
w4(U+0,u32(0x7a8d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63afc1:{NFSU2_TR(0x63afc1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63afc2:{NFSU2_TR(0x63afc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63afc7ull));
TAIL_STATIC(0x4400d0u,440);
}
B63afc7:L63afc7:{c.instructions+=3;NFSU2_TR(0x63afc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63afcb:{NFSU2_TR(0x63afcb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63afcc:{NFSU2_TR(0x63afcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63afd1ull));
TAIL_STATIC(0x57cac0u,57c);
}
B63afd1:L63afd1:{c.instructions+=3;NFSU2_TR(0x63afd1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B63afd4:{NFSU2_TR(0x63afd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63afd6:{NFSU2_TR(0x63afd6);
if(r1(R+518)){{goto L63afef;}}
}
B63afd8:L63afd8:{c.instructions+=5;NFSU2_TR(0x63afd8);
u8 U[4];
w4(U+0,u32(0x19000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63afdd:{NFSU2_TR(0x63afdd);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B63afe1:{NFSU2_TR(0x63afe1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63afe2:{NFSU2_TR(0x63afe2);
__builtin_memmove((R+4),(R+24),4);
}
B63afe4:{NFSU2_TR(0x63afe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63afe9ull));
TAIL_STATIC(0x633b90u,633);
}
B63afe9:L63afe9:{c.instructions+=1;NFSU2_TR(0x63afe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x314ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63afef:L63afef:{c.instructions+=6;NFSU2_TR(0x63afef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63aff5:{NFSU2_TR(0x63aff5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63aff7:{NFSU2_TR(0x63aff7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63aff8:{NFSU2_TR(0x63aff8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x31cull))));
__builtin_memmove((R+4),(U+0),4);
}
B63affe:{NFSU2_TR(0x63affe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63afff:{NFSU2_TR(0x63afff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x63b000u,63b);
}
XIT:NFSU2_TR_EXIT(0x63a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
