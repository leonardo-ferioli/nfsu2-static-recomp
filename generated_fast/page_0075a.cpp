#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_74a(u8* __restrict R,Cpu& c);
u32 body_758(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x75a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x75a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_75a(u8* __restrict R,Cpu& c);
u32 page_75a(Cpu& c){return body_75a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_75a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x75a002:goto L75a002;
case 0x75a004:c.instructions+=3;goto B75a004;
case 0x75a005:c.instructions+=2;goto B75a005;
case 0x75a007:c.instructions+=1;goto B75a007;
case 0x75a009:goto L75a009;
case 0x75a00b:c.instructions+=3;goto B75a00b;
case 0x75a00d:c.instructions+=2;goto B75a00d;
case 0x75a013:c.instructions+=1;goto B75a013;
case 0x75a015:goto L75a015;
case 0x75a01a:goto L75a01a;
case 0x75a021:c.instructions+=1;goto B75a021;
case 0x75a023:goto L75a023;
case 0x75a026:c.instructions+=3;goto B75a026;
case 0x75a028:c.instructions+=2;goto B75a028;
case 0x75a02a:c.instructions+=1;goto B75a02a;
case 0x75a02c:goto L75a02c;
case 0x75a02d:c.instructions+=3;goto B75a02d;
case 0x75a02e:c.instructions+=2;goto B75a02e;
case 0x75a02f:c.instructions+=1;goto B75a02f;
case 0x75a034:goto L75a034;
case 0x75a037:c.instructions+=2;goto B75a037;
case 0x75a039:c.instructions+=1;goto B75a039;
case 0x75a03b:goto L75a03b;
case 0x75a03d:goto L75a03d;
case 0x75a044:c.instructions+=1;goto B75a044;
case 0x75a046:goto L75a046;
case 0x75a048:c.instructions+=7;goto B75a048;
case 0x75a04a:c.instructions+=6;goto B75a04a;
case 0x75a04c:c.instructions+=5;goto B75a04c;
case 0x75a04e:c.instructions+=4;goto B75a04e;
case 0x75a04f:c.instructions+=3;goto B75a04f;
case 0x75a050:c.instructions+=2;goto B75a050;
case 0x75a051:c.instructions+=1;goto B75a051;
case 0x75a056:goto L75a056;
case 0x75a059:goto L75a059;
case 0x75a05a:c.instructions+=4;goto B75a05a;
case 0x75a05b:c.instructions+=3;goto B75a05b;
case 0x75a05c:c.instructions+=2;goto B75a05c;
case 0x75a05d:c.instructions+=1;goto B75a05d;
case 0x75a060:goto L75a060;
case 0x75a061:c.instructions+=8;goto B75a061;
case 0x75a062:c.instructions+=7;goto B75a062;
case 0x75a063:c.instructions+=6;goto B75a063;
case 0x75a067:c.instructions+=5;goto B75a067;
case 0x75a06d:c.instructions+=4;goto B75a06d;
case 0x75a073:c.instructions+=3;goto B75a073;
case 0x75a076:c.instructions+=2;goto B75a076;
case 0x75a079:c.instructions+=1;goto B75a079;
case 0x75a07f:goto L75a07f;
case 0x75a085:c.instructions+=3;goto B75a085;
case 0x75a087:c.instructions+=2;goto B75a087;
case 0x75a089:c.instructions+=1;goto B75a089;
case 0x75a08b:goto L75a08b;
case 0x75a091:c.instructions+=2;goto B75a091;
case 0x75a097:c.instructions+=1;goto B75a097;
case 0x75a099:goto L75a099;
case 0x75a09c:c.instructions+=1;goto B75a09c;
case 0x75a09e:goto L75a09e;
case 0x75a09f:c.instructions+=2;goto B75a09f;
case 0x75a0a5:c.instructions+=1;goto B75a0a5;
case 0x75a0aa:goto L75a0aa;
case 0x75a0ad:c.instructions+=2;goto B75a0ad;
case 0x75a0b3:c.instructions+=1;goto B75a0b3;
case 0x75a0b5:goto L75a0b5;
case 0x75a0bb:c.instructions+=2;goto B75a0bb;
case 0x75a0bd:c.instructions+=1;goto B75a0bd;
case 0x75a0bf:goto L75a0bf;
case 0x75a0c2:goto L75a0c2;
case 0x75a0c8:c.instructions+=2;goto B75a0c8;
case 0x75a0ca:c.instructions+=1;goto B75a0ca;
case 0x75a0cc:goto L75a0cc;
case 0x75a0d2:c.instructions+=5;goto B75a0d2;
case 0x75a0d8:c.instructions+=4;goto B75a0d8;
case 0x75a0dc:c.instructions+=3;goto B75a0dc;
case 0x75a0de:c.instructions+=2;goto B75a0de;
case 0x75a0e0:c.instructions+=1;goto B75a0e0;
case 0x75a0e2:goto L75a0e2;
case 0x75a0e4:goto L75a0e4;
case 0x75a0ea:c.instructions+=6;goto B75a0ea;
case 0x75a0ec:c.instructions+=5;goto B75a0ec;
case 0x75a0ed:c.instructions+=4;goto B75a0ed;
case 0x75a0f1:c.instructions+=3;goto B75a0f1;
case 0x75a0f3:c.instructions+=2;goto B75a0f3;
case 0x75a0f5:c.instructions+=1;goto B75a0f5;
case 0x75a0f8:goto L75a0f8;
case 0x75a0fa:goto L75a0fa;
case 0x75a0fc:c.instructions+=1;goto B75a0fc;
case 0x75a0ff:goto L75a0ff;
case 0x75a101:goto L75a101;
case 0x75a107:c.instructions+=8;goto B75a107;
case 0x75a10d:c.instructions+=7;goto B75a10d;
case 0x75a111:c.instructions+=6;goto B75a111;
case 0x75a113:c.instructions+=5;goto B75a113;
case 0x75a115:c.instructions+=4;goto B75a115;
case 0x75a117:c.instructions+=3;goto B75a117;
case 0x75a11d:c.instructions+=2;goto B75a11d;
case 0x75a11e:c.instructions+=1;goto B75a11e;
case 0x75a120:goto L75a120;
case 0x75a122:c.instructions+=3;goto B75a122;
case 0x75a128:c.instructions+=2;goto B75a128;
case 0x75a12e:c.instructions+=1;goto B75a12e;
case 0x75a134:goto L75a134;
case 0x75a13b:c.instructions+=1;goto B75a13b;
case 0x75a13d:goto L75a13d;
case 0x75a141:c.instructions+=9;goto B75a141;
case 0x75a145:c.instructions+=8;goto B75a145;
case 0x75a147:c.instructions+=7;goto B75a147;
case 0x75a149:c.instructions+=6;goto B75a149;
case 0x75a14b:c.instructions+=5;goto B75a14b;
case 0x75a14d:c.instructions+=4;goto B75a14d;
case 0x75a14e:c.instructions+=3;goto B75a14e;
case 0x75a14f:c.instructions+=2;goto B75a14f;
case 0x75a150:c.instructions+=1;goto B75a150;
case 0x75a155:goto L75a155;
case 0x75a158:c.instructions+=1;goto B75a158;
case 0x75a15a:goto L75a15a;
case 0x75a15c:c.instructions+=1;goto B75a15c;
case 0x75a15e:goto L75a15e;
case 0x75a162:c.instructions+=2;goto B75a162;
case 0x75a164:c.instructions+=1;goto B75a164;
case 0x75a166:goto L75a166;
case 0x75a16a:c.instructions+=5;goto B75a16a;
case 0x75a16b:c.instructions+=4;goto B75a16b;
case 0x75a16c:c.instructions+=3;goto B75a16c;
case 0x75a170:c.instructions+=2;goto B75a170;
case 0x75a171:c.instructions+=1;goto B75a171;
case 0x75a172:goto L75a172;
case 0x75a174:goto L75a174;
case 0x75a175:c.instructions+=3;goto B75a175;
case 0x75a176:c.instructions+=2;goto B75a176;
case 0x75a177:c.instructions+=1;goto B75a177;
case 0x75a180:goto L75a180;
case 0x75a181:c.instructions+=5;goto B75a181;
case 0x75a185:c.instructions+=4;goto B75a185;
case 0x75a187:c.instructions+=3;goto B75a187;
case 0x75a18a:c.instructions+=2;goto B75a18a;
case 0x75a18c:c.instructions+=1;goto B75a18c;
case 0x75a18e:goto L75a18e;
case 0x75a192:c.instructions+=8;goto B75a192;
case 0x75a196:c.instructions+=7;goto B75a196;
case 0x75a197:c.instructions+=6;goto B75a197;
case 0x75a19b:c.instructions+=5;goto B75a19b;
case 0x75a19c:c.instructions+=4;goto B75a19c;
case 0x75a19d:c.instructions+=3;goto B75a19d;
case 0x75a19e:c.instructions+=2;goto B75a19e;
case 0x75a19f:c.instructions+=1;goto B75a19f;
case 0x75a1a4:goto L75a1a4;
case 0x75a1a7:c.instructions+=3;goto B75a1a7;
case 0x75a1ad:c.instructions+=2;goto B75a1ad;
case 0x75a1ae:c.instructions+=1;goto B75a1ae;
case 0x75a1b0:goto L75a1b0;
case 0x75a1b6:c.instructions+=2;goto B75a1b6;
case 0x75a1b9:c.instructions+=1;goto B75a1b9;
case 0x75a1bb:goto L75a1bb;
case 0x75a1bd:c.instructions+=1;goto B75a1bd;
case 0x75a1bf:goto L75a1bf;
case 0x75a1c2:c.instructions+=1;goto B75a1c2;
case 0x75a1c4:goto L75a1c4;
case 0x75a1c7:c.instructions+=1;goto B75a1c7;
case 0x75a1c9:goto L75a1c9;
case 0x75a1cb:goto L75a1cb;
case 0x75a1cc:c.instructions+=1;goto B75a1cc;
case 0x75a1d0:goto L75a1d0;
case 0x75a1d4:c.instructions+=5;goto B75a1d4;
case 0x75a1d5:c.instructions+=4;goto B75a1d5;
case 0x75a1d6:c.instructions+=3;goto B75a1d6;
case 0x75a1da:c.instructions+=2;goto B75a1da;
case 0x75a1dc:c.instructions+=1;goto B75a1dc;
case 0x75a1de:goto L75a1de;
case 0x75a1e3:c.instructions+=1;goto B75a1e3;
case 0x75a1e5:goto L75a1e5;
case 0x75a1e7:goto L75a1e7;
case 0x75a1eb:c.instructions+=2;goto B75a1eb;
case 0x75a1ed:c.instructions+=1;goto B75a1ed;
case 0x75a1ef:goto L75a1ef;
case 0x75a1f2:c.instructions+=1;goto B75a1f2;
case 0x75a1f7:goto L75a1f7;
case 0x75a1f9:goto L75a1f9;
case 0x75a1fa:c.instructions+=3;goto B75a1fa;
case 0x75a1ff:c.instructions+=2;goto B75a1ff;
case 0x75a200:c.instructions+=1;goto B75a200;
case 0x75a210:goto L75a210;
case 0x75a211:c.instructions+=6;goto B75a211;
case 0x75a215:c.instructions+=5;goto B75a215;
case 0x75a216:c.instructions+=4;goto B75a216;
case 0x75a21a:c.instructions+=3;goto B75a21a;
case 0x75a21c:c.instructions+=2;goto B75a21c;
case 0x75a222:c.instructions+=1;goto B75a222;
case 0x75a224:goto L75a224;
case 0x75a226:c.instructions+=7;goto B75a226;
case 0x75a228:c.instructions+=6;goto B75a228;
case 0x75a22e:c.instructions+=5;goto B75a22e;
case 0x75a22f:c.instructions+=4;goto B75a22f;
case 0x75a230:c.instructions+=3;goto B75a230;
case 0x75a236:c.instructions+=2;goto B75a236;
case 0x75a23d:c.instructions+=1;goto B75a23d;
case 0x75a242:goto L75a242;
case 0x75a244:c.instructions+=6;goto B75a244;
case 0x75a246:c.instructions+=5;goto B75a246;
case 0x75a249:c.instructions+=4;goto B75a249;
case 0x75a24c:c.instructions+=3;goto B75a24c;
case 0x75a24d:c.instructions+=2;goto B75a24d;
case 0x75a24e:c.instructions+=1;goto B75a24e;
case 0x75a253:goto L75a253;
case 0x75a256:goto L75a256;
case 0x75a258:c.instructions+=3;goto B75a258;
case 0x75a259:c.instructions+=2;goto B75a259;
case 0x75a25a:c.instructions+=1;goto B75a25a;
case 0x75a260:goto L75a260;
case 0x75a261:c.instructions+=3;goto B75a261;
case 0x75a265:c.instructions+=2;goto B75a265;
case 0x75a268:c.instructions+=1;goto B75a268;
case 0x75a26a:goto L75a26a;
case 0x75a26e:c.instructions+=6;goto B75a26e;
case 0x75a272:c.instructions+=5;goto B75a272;
case 0x75a273:c.instructions+=4;goto B75a273;
case 0x75a274:c.instructions+=3;goto B75a274;
case 0x75a277:c.instructions+=2;goto B75a277;
case 0x75a278:c.instructions+=1;goto B75a278;
case 0x75a27d:goto L75a27d;
case 0x75a280:c.instructions+=1;goto B75a280;
case 0x75a287:goto L75a287;
case 0x75a288:c.instructions+=1;goto B75a288;
case 0x75a290:goto L75a290;
case 0x75a293:c.instructions+=5;goto B75a293;
case 0x75a298:c.instructions+=4;goto B75a298;
case 0x75a29c:c.instructions+=3;goto B75a29c;
case 0x75a2a0:c.instructions+=2;goto B75a2a0;
case 0x75a2a3:c.instructions+=1;goto B75a2a3;
case 0x75a2a9:goto L75a2a9;
case 0x75a2ac:c.instructions+=2;goto B75a2ac;
case 0x75a2ae:c.instructions+=1;goto B75a2ae;
case 0x75a2b0:goto L75a2b0;
case 0x75a2b1:c.instructions+=3;goto B75a2b1;
case 0x75a2b5:c.instructions+=2;goto B75a2b5;
case 0x75a2b8:c.instructions+=1;goto B75a2b8;
case 0x75a2ba:goto L75a2ba;
case 0x75a2bd:c.instructions+=3;goto B75a2bd;
case 0x75a2be:c.instructions+=2;goto B75a2be;
case 0x75a2c2:c.instructions+=1;goto B75a2c2;
case 0x75a2c7:goto L75a2c7;
case 0x75a2ca:c.instructions+=1;goto B75a2ca;
case 0x75a2cb:goto L75a2cb;
case 0x75a2cc:c.instructions+=4;goto B75a2cc;
case 0x75a2d0:c.instructions+=3;goto B75a2d0;
case 0x75a2d1:c.instructions+=2;goto B75a2d1;
case 0x75a2d2:c.instructions+=1;goto B75a2d2;
case 0x75a2d7:goto L75a2d7;
case 0x75a2de:c.instructions+=6;goto B75a2de;
case 0x75a2e1:c.instructions+=5;goto B75a2e1;
case 0x75a2e2:c.instructions+=4;goto B75a2e2;
case 0x75a2e6:c.instructions+=3;goto B75a2e6;
case 0x75a2e7:c.instructions+=2;goto B75a2e7;
case 0x75a2e8:c.instructions+=1;goto B75a2e8;
case 0x75a2ed:goto L75a2ed;
case 0x75a2ef:c.instructions+=5;goto B75a2ef;
case 0x75a2f3:c.instructions+=4;goto B75a2f3;
case 0x75a2f4:c.instructions+=3;goto B75a2f4;
case 0x75a2f8:c.instructions+=2;goto B75a2f8;
case 0x75a2f9:c.instructions+=1;goto B75a2f9;
case 0x75a2fe:goto L75a2fe;
case 0x75a301:c.instructions+=4;goto B75a301;
case 0x75a303:c.instructions+=3;goto B75a303;
case 0x75a307:c.instructions+=2;goto B75a307;
case 0x75a30c:c.instructions+=1;goto B75a30c;
case 0x75a310:goto L75a310;
case 0x75a312:goto L75a312;
case 0x75a314:c.instructions+=8;goto B75a314;
case 0x75a317:c.instructions+=7;goto B75a317;
case 0x75a318:c.instructions+=6;goto B75a318;
case 0x75a319:c.instructions+=5;goto B75a319;
case 0x75a31a:c.instructions+=4;goto B75a31a;
case 0x75a31b:c.instructions+=3;goto B75a31b;
case 0x75a31e:c.instructions+=2;goto B75a31e;
case 0x75a322:c.instructions+=1;goto B75a322;
case 0x75a327:goto L75a327;
case 0x75a32a:c.instructions+=1;goto B75a32a;
case 0x75a32b:goto L75a32b;
case 0x75a32f:c.instructions+=2;goto B75a32f;
case 0x75a331:c.instructions+=1;goto B75a331;
case 0x75a336:goto L75a336;
case 0x75a339:c.instructions+=1;goto B75a339;
case 0x75a340:goto L75a340;
case 0x75a344:c.instructions+=2;goto B75a344;
case 0x75a347:c.instructions+=1;goto B75a347;
case 0x75a349:goto L75a349;
case 0x75a34c:c.instructions+=3;goto B75a34c;
case 0x75a34e:c.instructions+=2;goto B75a34e;
case 0x75a352:c.instructions+=1;goto B75a352;
case 0x75a354:goto L75a354;
case 0x75a357:c.instructions+=1;goto B75a357;
case 0x75a359:goto L75a359;
case 0x75a35c:c.instructions+=1;goto B75a35c;
case 0x75a35d:goto L75a35d;
case 0x75a361:goto L75a361;
case 0x75a370:goto L75a370;
case 0x75a374:c.instructions+=3;goto B75a374;
case 0x75a377:c.instructions+=2;goto B75a377;
case 0x75a37b:c.instructions+=1;goto B75a37b;
case 0x75a37d:goto L75a37d;
case 0x75a380:goto L75a380;
case 0x75a390:goto L75a390;
case 0x75a393:c.instructions+=9;goto B75a393;
case 0x75a398:c.instructions+=8;goto B75a398;
case 0x75a39c:c.instructions+=7;goto B75a39c;
case 0x75a3a0:c.instructions+=6;goto B75a3a0;
case 0x75a3a2:c.instructions+=5;goto B75a3a2;
case 0x75a3a3:c.instructions+=4;goto B75a3a3;
case 0x75a3a7:c.instructions+=3;goto B75a3a7;
case 0x75a3aa:c.instructions+=2;goto B75a3aa;
case 0x75a3ac:c.instructions+=1;goto B75a3ac;
case 0x75a3ae:goto L75a3ae;
case 0x75a3b0:c.instructions+=1;goto B75a3b0;
case 0x75a3b2:goto L75a3b2;
case 0x75a3b5:c.instructions+=3;goto B75a3b5;
case 0x75a3b6:c.instructions+=2;goto B75a3b6;
case 0x75a3ba:c.instructions+=1;goto B75a3ba;
case 0x75a3bf:goto L75a3bf;
case 0x75a3c2:c.instructions+=1;goto B75a3c2;
case 0x75a3c3:goto L75a3c3;
case 0x75a3c7:c.instructions+=3;goto B75a3c7;
case 0x75a3c8:c.instructions+=2;goto B75a3c8;
case 0x75a3c9:c.instructions+=1;goto B75a3c9;
case 0x75a3ce:goto L75a3ce;
case 0x75a3d2:c.instructions+=5;goto B75a3d2;
case 0x75a3d3:c.instructions+=4;goto B75a3d3;
case 0x75a3d7:c.instructions+=3;goto B75a3d7;
case 0x75a3d8:c.instructions+=2;goto B75a3d8;
case 0x75a3d9:c.instructions+=1;goto B75a3d9;
case 0x75a3de:goto L75a3de;
case 0x75a3e0:c.instructions+=5;goto B75a3e0;
case 0x75a3e2:c.instructions+=4;goto B75a3e2;
case 0x75a3e6:c.instructions+=3;goto B75a3e6;
case 0x75a3e7:c.instructions+=2;goto B75a3e7;
case 0x75a3e8:c.instructions+=1;goto B75a3e8;
case 0x75a3ed:goto L75a3ed;
case 0x75a3f0:c.instructions+=1;goto B75a3f0;
case 0x75a3f1:goto L75a3f1;
case 0x75a3f5:c.instructions+=3;goto B75a3f5;
case 0x75a3f7:c.instructions+=2;goto B75a3f7;
case 0x75a3f8:c.instructions+=1;goto B75a3f8;
case 0x75a3fd:goto L75a3fd;
case 0x75a400:c.instructions+=1;goto B75a400;
case 0x75a410:goto L75a410;
case 0x75a414:c.instructions+=2;goto B75a414;
case 0x75a417:c.instructions+=1;goto B75a417;
case 0x75a419:goto L75a419;
case 0x75a41e:c.instructions+=2;goto B75a41e;
case 0x75a422:c.instructions+=1;goto B75a422;
case 0x75a427:goto L75a427;
case 0x75a430:goto L75a430;
case 0x75a434:c.instructions+=3;goto B75a434;
case 0x75a437:c.instructions+=2;goto B75a437;
case 0x75a43a:c.instructions+=1;goto B75a43a;
case 0x75a43c:goto L75a43c;
case 0x75a441:goto L75a441;
case 0x75a442:c.instructions+=7;goto B75a442;
case 0x75a443:c.instructions+=6;goto B75a443;
case 0x75a445:c.instructions+=5;goto B75a445;
case 0x75a446:c.instructions+=4;goto B75a446;
case 0x75a44a:c.instructions+=3;goto B75a44a;
case 0x75a44c:c.instructions+=2;goto B75a44c;
case 0x75a44f:c.instructions+=1;goto B75a44f;
case 0x75a451:goto L75a451;
case 0x75a455:c.instructions+=3;goto B75a455;
case 0x75a456:c.instructions+=2;goto B75a456;
case 0x75a45b:c.instructions+=1;goto B75a45b;
case 0x75a45d:goto L75a45d;
case 0x75a461:c.instructions+=2;goto B75a461;
case 0x75a463:c.instructions+=1;goto B75a463;
case 0x75a469:goto L75a469;
case 0x75a46b:c.instructions+=1;goto B75a46b;
case 0x75a471:goto L75a471;
case 0x75a474:c.instructions+=12;goto B75a474;
case 0x75a476:c.instructions+=11;goto B75a476;
case 0x75a47a:c.instructions+=10;goto B75a47a;
case 0x75a47f:c.instructions+=9;goto B75a47f;
case 0x75a481:c.instructions+=8;goto B75a481;
case 0x75a485:c.instructions+=7;goto B75a485;
case 0x75a48a:c.instructions+=6;goto B75a48a;
case 0x75a48c:c.instructions+=5;goto B75a48c;
case 0x75a48d:c.instructions+=4;goto B75a48d;
case 0x75a491:c.instructions+=3;goto B75a491;
case 0x75a495:c.instructions+=2;goto B75a495;
case 0x75a499:c.instructions+=1;goto B75a499;
case 0x75a4a0:goto L75a4a0;
case 0x75a4a8:c.instructions+=2;goto B75a4a8;
case 0x75a4ab:c.instructions+=1;goto B75a4ab;
case 0x75a4b0:goto L75a4b0;
case 0x75a4b2:c.instructions+=64;goto B75a4b2;
case 0x75a4b6:c.instructions+=63;goto B75a4b6;
case 0x75a4b8:c.instructions+=62;goto B75a4b8;
case 0x75a4ba:c.instructions+=61;goto B75a4ba;
case 0x75a4bc:c.instructions+=60;goto B75a4bc;
case 0x75a4bf:c.instructions+=59;goto B75a4bf;
case 0x75a4c3:c.instructions+=58;goto B75a4c3;
case 0x75a4c5:c.instructions+=57;goto B75a4c5;
case 0x75a4c8:c.instructions+=56;goto B75a4c8;
case 0x75a4cc:c.instructions+=55;goto B75a4cc;
case 0x75a4ce:c.instructions+=54;goto B75a4ce;
case 0x75a4d0:c.instructions+=53;goto B75a4d0;
case 0x75a4d4:c.instructions+=52;goto B75a4d4;
case 0x75a4d6:c.instructions+=51;goto B75a4d6;
case 0x75a4d9:c.instructions+=50;goto B75a4d9;
case 0x75a4dd:c.instructions+=49;goto B75a4dd;
case 0x75a4e1:c.instructions+=48;goto B75a4e1;
case 0x75a4e4:c.instructions+=47;goto B75a4e4;
case 0x75a4e6:c.instructions+=46;goto B75a4e6;
case 0x75a4e8:c.instructions+=45;goto B75a4e8;
case 0x75a4eb:c.instructions+=44;goto B75a4eb;
case 0x75a4ef:c.instructions+=43;goto B75a4ef;
case 0x75a4f1:c.instructions+=42;goto B75a4f1;
case 0x75a4f4:c.instructions+=41;goto B75a4f4;
case 0x75a4f8:c.instructions+=40;goto B75a4f8;
case 0x75a4fa:c.instructions+=39;goto B75a4fa;
case 0x75a4fd:c.instructions+=38;goto B75a4fd;
case 0x75a501:c.instructions+=37;goto B75a501;
case 0x75a503:c.instructions+=36;goto B75a503;
case 0x75a506:c.instructions+=35;goto B75a506;
case 0x75a50a:c.instructions+=34;goto B75a50a;
case 0x75a50e:c.instructions+=33;goto B75a50e;
case 0x75a510:c.instructions+=32;goto B75a510;
case 0x75a512:c.instructions+=31;goto B75a512;
case 0x75a516:c.instructions+=30;goto B75a516;
case 0x75a519:c.instructions+=29;goto B75a519;
case 0x75a51b:c.instructions+=28;goto B75a51b;
case 0x75a51d:c.instructions+=27;goto B75a51d;
case 0x75a520:c.instructions+=26;goto B75a520;
case 0x75a524:c.instructions+=25;goto B75a524;
case 0x75a528:c.instructions+=24;goto B75a528;
case 0x75a52b:c.instructions+=23;goto B75a52b;
case 0x75a52f:c.instructions+=22;goto B75a52f;
case 0x75a531:c.instructions+=21;goto B75a531;
case 0x75a534:c.instructions+=20;goto B75a534;
case 0x75a538:c.instructions+=19;goto B75a538;
case 0x75a53c:c.instructions+=18;goto B75a53c;
case 0x75a53f:c.instructions+=17;goto B75a53f;
case 0x75a541:c.instructions+=16;goto B75a541;
case 0x75a543:c.instructions+=15;goto B75a543;
case 0x75a546:c.instructions+=14;goto B75a546;
case 0x75a549:c.instructions+=13;goto B75a549;
case 0x75a54d:c.instructions+=12;goto B75a54d;
case 0x75a54f:c.instructions+=11;goto B75a54f;
case 0x75a552:c.instructions+=10;goto B75a552;
case 0x75a556:c.instructions+=9;goto B75a556;
case 0x75a558:c.instructions+=8;goto B75a558;
case 0x75a55b:c.instructions+=7;goto B75a55b;
case 0x75a55f:c.instructions+=6;goto B75a55f;
case 0x75a561:c.instructions+=5;goto B75a561;
case 0x75a566:c.instructions+=4;goto B75a566;
case 0x75a56a:c.instructions+=3;goto B75a56a;
case 0x75a56d:c.instructions+=2;goto B75a56d;
case 0x75a573:c.instructions+=1;goto B75a573;
case 0x75a579:goto L75a579;
case 0x75a57d:c.instructions+=1;goto B75a57d;
case 0x75a583:goto L75a583;
case 0x75a584:goto L75a584;
case 0x75a585:c.instructions+=4;goto B75a585;
case 0x75a586:c.instructions+=3;goto B75a586;
case 0x75a587:c.instructions+=2;goto B75a587;
case 0x75a58a:c.instructions+=1;goto B75a58a;
case 0x75a590:goto L75a590;
case 0x75a594:c.instructions+=6;goto B75a594;
case 0x75a598:c.instructions+=5;goto B75a598;
case 0x75a59a:c.instructions+=4;goto B75a59a;
case 0x75a59d:c.instructions+=3;goto B75a59d;
case 0x75a59e:c.instructions+=2;goto B75a59e;
case 0x75a5a0:c.instructions+=1;goto B75a5a0;
case 0x75a5a2:goto L75a5a2;
case 0x75a5a3:c.instructions+=5;goto B75a5a3;
case 0x75a5a7:c.instructions+=4;goto B75a5a7;
case 0x75a5a8:c.instructions+=3;goto B75a5a8;
case 0x75a5a9:c.instructions+=2;goto B75a5a9;
case 0x75a5ad:c.instructions+=1;goto B75a5ad;
case 0x75a5b0:goto L75a5b0;
case 0x75a5b2:c.instructions+=21;goto B75a5b2;
case 0x75a5b5:c.instructions+=20;goto B75a5b5;
case 0x75a5b9:c.instructions+=19;goto B75a5b9;
case 0x75a5bb:c.instructions+=18;goto B75a5bb;
case 0x75a5bd:c.instructions+=17;goto B75a5bd;
case 0x75a5c1:c.instructions+=16;goto B75a5c1;
case 0x75a5c4:c.instructions+=15;goto B75a5c4;
case 0x75a5c8:c.instructions+=14;goto B75a5c8;
case 0x75a5ca:c.instructions+=13;goto B75a5ca;
case 0x75a5cc:c.instructions+=12;goto B75a5cc;
case 0x75a5ce:c.instructions+=11;goto B75a5ce;
case 0x75a5d0:c.instructions+=10;goto B75a5d0;
case 0x75a5d2:c.instructions+=9;goto B75a5d2;
case 0x75a5d7:c.instructions+=8;goto B75a5d7;
case 0x75a5db:c.instructions+=7;goto B75a5db;
case 0x75a5de:c.instructions+=6;goto B75a5de;
case 0x75a5e2:c.instructions+=5;goto B75a5e2;
case 0x75a5e3:c.instructions+=4;goto B75a5e3;
case 0x75a5e4:c.instructions+=3;goto B75a5e4;
case 0x75a5e8:c.instructions+=2;goto B75a5e8;
case 0x75a5ec:c.instructions+=1;goto B75a5ec;
case 0x75a5ee:goto L75a5ee;
case 0x75a5ef:c.instructions+=2;goto B75a5ef;
case 0x75a5f0:c.instructions+=1;goto B75a5f0;
case 0x75a5f1:goto L75a5f1;
case 0x75a5f3:c.instructions+=3;goto B75a5f3;
case 0x75a5f6:c.instructions+=2;goto B75a5f6;
case 0x75a5f7:c.instructions+=1;goto B75a5f7;
case 0x75a600:goto L75a600;
case 0x75a604:c.instructions+=7;goto B75a604;
case 0x75a607:c.instructions+=6;goto B75a607;
case 0x75a608:c.instructions+=5;goto B75a608;
case 0x75a609:c.instructions+=4;goto B75a609;
case 0x75a60a:c.instructions+=3;goto B75a60a;
case 0x75a60b:c.instructions+=2;goto B75a60b;
case 0x75a60e:c.instructions+=1;goto B75a60e;
case 0x75a613:goto L75a613;
case 0x75a617:c.instructions+=17;goto B75a617;
case 0x75a618:c.instructions+=16;goto B75a618;
case 0x75a61c:c.instructions+=15;goto B75a61c;
case 0x75a61d:c.instructions+=14;goto B75a61d;
case 0x75a620:c.instructions+=13;goto B75a620;
case 0x75a622:c.instructions+=12;goto B75a622;
case 0x75a626:c.instructions+=11;goto B75a626;
case 0x75a627:c.instructions+=10;goto B75a627;
case 0x75a62a:c.instructions+=9;goto B75a62a;
case 0x75a62c:c.instructions+=8;goto B75a62c;
case 0x75a630:c.instructions+=7;goto B75a630;
case 0x75a631:c.instructions+=6;goto B75a631;
case 0x75a634:c.instructions+=5;goto B75a634;
case 0x75a635:c.instructions+=4;goto B75a635;
case 0x75a637:c.instructions+=3;goto B75a637;
case 0x75a639:c.instructions+=2;goto B75a639;
case 0x75a63d:c.instructions+=1;goto B75a63d;
case 0x75a63f:goto L75a63f;
case 0x75a642:c.instructions+=772;goto B75a642;
case 0x75a645:c.instructions+=771;goto B75a645;
case 0x75a648:c.instructions+=770;goto B75a648;
case 0x75a64b:c.instructions+=769;goto B75a64b;
case 0x75a64d:c.instructions+=768;goto B75a64d;
case 0x75a64f:c.instructions+=767;goto B75a64f;
case 0x75a651:c.instructions+=766;goto B75a651;
case 0x75a653:c.instructions+=765;goto B75a653;
case 0x75a655:c.instructions+=764;goto B75a655;
case 0x75a659:c.instructions+=763;goto B75a659;
case 0x75a660:c.instructions+=762;goto B75a660;
case 0x75a664:c.instructions+=761;goto B75a664;
case 0x75a666:c.instructions+=760;goto B75a666;
case 0x75a669:c.instructions+=759;goto B75a669;
case 0x75a66c:c.instructions+=758;goto B75a66c;
case 0x75a66e:c.instructions+=757;goto B75a66e;
case 0x75a670:c.instructions+=756;goto B75a670;
case 0x75a672:c.instructions+=755;goto B75a672;
case 0x75a674:c.instructions+=754;goto B75a674;
case 0x75a676:c.instructions+=753;goto B75a676;
case 0x75a678:c.instructions+=752;goto B75a678;
case 0x75a67a:c.instructions+=751;goto B75a67a;
case 0x75a681:c.instructions+=750;goto B75a681;
case 0x75a685:c.instructions+=749;goto B75a685;
case 0x75a687:c.instructions+=748;goto B75a687;
case 0x75a68a:c.instructions+=747;goto B75a68a;
case 0x75a68e:c.instructions+=746;goto B75a68e;
case 0x75a691:c.instructions+=745;goto B75a691;
case 0x75a693:c.instructions+=744;goto B75a693;
case 0x75a695:c.instructions+=743;goto B75a695;
case 0x75a697:c.instructions+=742;goto B75a697;
case 0x75a699:c.instructions+=741;goto B75a699;
case 0x75a69b:c.instructions+=740;goto B75a69b;
case 0x75a69d:c.instructions+=739;goto B75a69d;
case 0x75a69f:c.instructions+=738;goto B75a69f;
case 0x75a6a6:c.instructions+=737;goto B75a6a6;
case 0x75a6a8:c.instructions+=736;goto B75a6a8;
case 0x75a6ab:c.instructions+=735;goto B75a6ab;
case 0x75a6af:c.instructions+=734;goto B75a6af;
case 0x75a6b2:c.instructions+=733;goto B75a6b2;
case 0x75a6b4:c.instructions+=732;goto B75a6b4;
case 0x75a6b6:c.instructions+=731;goto B75a6b6;
case 0x75a6b8:c.instructions+=730;goto B75a6b8;
case 0x75a6ba:c.instructions+=729;goto B75a6ba;
case 0x75a6bc:c.instructions+=728;goto B75a6bc;
case 0x75a6be:c.instructions+=727;goto B75a6be;
case 0x75a6c0:c.instructions+=726;goto B75a6c0;
case 0x75a6c7:c.instructions+=725;goto B75a6c7;
case 0x75a6c9:c.instructions+=724;goto B75a6c9;
case 0x75a6cc:c.instructions+=723;goto B75a6cc;
case 0x75a6cf:c.instructions+=722;goto B75a6cf;
case 0x75a6d1:c.instructions+=721;goto B75a6d1;
case 0x75a6d3:c.instructions+=720;goto B75a6d3;
case 0x75a6d5:c.instructions+=719;goto B75a6d5;
case 0x75a6d7:c.instructions+=718;goto B75a6d7;
case 0x75a6d9:c.instructions+=717;goto B75a6d9;
case 0x75a6db:c.instructions+=716;goto B75a6db;
case 0x75a6dd:c.instructions+=715;goto B75a6dd;
case 0x75a6e1:c.instructions+=714;goto B75a6e1;
case 0x75a6e8:c.instructions+=713;goto B75a6e8;
case 0x75a6ea:c.instructions+=712;goto B75a6ea;
case 0x75a6ed:c.instructions+=711;goto B75a6ed;
case 0x75a6f0:c.instructions+=710;goto B75a6f0;
case 0x75a6f2:c.instructions+=709;goto B75a6f2;
case 0x75a6f4:c.instructions+=708;goto B75a6f4;
case 0x75a6f6:c.instructions+=707;goto B75a6f6;
case 0x75a6f8:c.instructions+=706;goto B75a6f8;
case 0x75a6fa:c.instructions+=705;goto B75a6fa;
case 0x75a6fc:c.instructions+=704;goto B75a6fc;
case 0x75a6fe:c.instructions+=703;goto B75a6fe;
case 0x75a702:c.instructions+=702;goto B75a702;
case 0x75a709:c.instructions+=701;goto B75a709;
case 0x75a70b:c.instructions+=700;goto B75a70b;
case 0x75a70e:c.instructions+=699;goto B75a70e;
case 0x75a711:c.instructions+=698;goto B75a711;
case 0x75a713:c.instructions+=697;goto B75a713;
case 0x75a715:c.instructions+=696;goto B75a715;
case 0x75a717:c.instructions+=695;goto B75a717;
case 0x75a719:c.instructions+=694;goto B75a719;
case 0x75a71b:c.instructions+=693;goto B75a71b;
case 0x75a71d:c.instructions+=692;goto B75a71d;
case 0x75a71f:c.instructions+=691;goto B75a71f;
case 0x75a726:c.instructions+=690;goto B75a726;
case 0x75a728:c.instructions+=689;goto B75a728;
case 0x75a72b:c.instructions+=688;goto B75a72b;
case 0x75a72f:c.instructions+=687;goto B75a72f;
case 0x75a732:c.instructions+=686;goto B75a732;
case 0x75a734:c.instructions+=685;goto B75a734;
case 0x75a736:c.instructions+=684;goto B75a736;
case 0x75a738:c.instructions+=683;goto B75a738;
case 0x75a73a:c.instructions+=682;goto B75a73a;
case 0x75a73c:c.instructions+=681;goto B75a73c;
case 0x75a73e:c.instructions+=680;goto B75a73e;
case 0x75a740:c.instructions+=679;goto B75a740;
case 0x75a747:c.instructions+=678;goto B75a747;
case 0x75a749:c.instructions+=677;goto B75a749;
case 0x75a74c:c.instructions+=676;goto B75a74c;
case 0x75a750:c.instructions+=675;goto B75a750;
case 0x75a753:c.instructions+=674;goto B75a753;
case 0x75a755:c.instructions+=673;goto B75a755;
case 0x75a757:c.instructions+=672;goto B75a757;
case 0x75a759:c.instructions+=671;goto B75a759;
case 0x75a75b:c.instructions+=670;goto B75a75b;
case 0x75a75d:c.instructions+=669;goto B75a75d;
case 0x75a75f:c.instructions+=668;goto B75a75f;
case 0x75a761:c.instructions+=667;goto B75a761;
case 0x75a768:c.instructions+=666;goto B75a768;
case 0x75a76a:c.instructions+=665;goto B75a76a;
case 0x75a76d:c.instructions+=664;goto B75a76d;
case 0x75a771:c.instructions+=663;goto B75a771;
case 0x75a774:c.instructions+=662;goto B75a774;
case 0x75a776:c.instructions+=661;goto B75a776;
case 0x75a778:c.instructions+=660;goto B75a778;
case 0x75a77a:c.instructions+=659;goto B75a77a;
case 0x75a77c:c.instructions+=658;goto B75a77c;
case 0x75a77e:c.instructions+=657;goto B75a77e;
case 0x75a780:c.instructions+=656;goto B75a780;
case 0x75a782:c.instructions+=655;goto B75a782;
case 0x75a789:c.instructions+=654;goto B75a789;
case 0x75a78b:c.instructions+=653;goto B75a78b;
case 0x75a78f:c.instructions+=652;goto B75a78f;
case 0x75a792:c.instructions+=651;goto B75a792;
case 0x75a795:c.instructions+=650;goto B75a795;
case 0x75a797:c.instructions+=649;goto B75a797;
case 0x75a799:c.instructions+=648;goto B75a799;
case 0x75a79b:c.instructions+=647;goto B75a79b;
case 0x75a79d:c.instructions+=646;goto B75a79d;
case 0x75a79f:c.instructions+=645;goto B75a79f;
case 0x75a7a1:c.instructions+=644;goto B75a7a1;
case 0x75a7a3:c.instructions+=643;goto B75a7a3;
case 0x75a7aa:c.instructions+=642;goto B75a7aa;
case 0x75a7ae:c.instructions+=641;goto B75a7ae;
case 0x75a7b0:c.instructions+=640;goto B75a7b0;
case 0x75a7b3:c.instructions+=639;goto B75a7b3;
case 0x75a7b6:c.instructions+=638;goto B75a7b6;
case 0x75a7b8:c.instructions+=637;goto B75a7b8;
case 0x75a7ba:c.instructions+=636;goto B75a7ba;
case 0x75a7bc:c.instructions+=635;goto B75a7bc;
case 0x75a7be:c.instructions+=634;goto B75a7be;
case 0x75a7c0:c.instructions+=633;goto B75a7c0;
case 0x75a7c2:c.instructions+=632;goto B75a7c2;
case 0x75a7c4:c.instructions+=631;goto B75a7c4;
case 0x75a7c8:c.instructions+=630;goto B75a7c8;
case 0x75a7cf:c.instructions+=629;goto B75a7cf;
case 0x75a7d1:c.instructions+=628;goto B75a7d1;
case 0x75a7d4:c.instructions+=627;goto B75a7d4;
case 0x75a7d7:c.instructions+=626;goto B75a7d7;
case 0x75a7d9:c.instructions+=625;goto B75a7d9;
case 0x75a7db:c.instructions+=624;goto B75a7db;
case 0x75a7dd:c.instructions+=623;goto B75a7dd;
case 0x75a7df:c.instructions+=622;goto B75a7df;
case 0x75a7e1:c.instructions+=621;goto B75a7e1;
case 0x75a7e3:c.instructions+=620;goto B75a7e3;
case 0x75a7e5:c.instructions+=619;goto B75a7e5;
case 0x75a7ec:c.instructions+=618;goto B75a7ec;
case 0x75a7ee:c.instructions+=617;goto B75a7ee;
case 0x75a7f1:c.instructions+=616;goto B75a7f1;
case 0x75a7f4:c.instructions+=615;goto B75a7f4;
case 0x75a7f6:c.instructions+=614;goto B75a7f6;
case 0x75a7f8:c.instructions+=613;goto B75a7f8;
case 0x75a7fa:c.instructions+=612;goto B75a7fa;
case 0x75a7fc:c.instructions+=611;goto B75a7fc;
case 0x75a800:c.instructions+=610;goto B75a800;
case 0x75a802:c.instructions+=609;goto B75a802;
case 0x75a804:c.instructions+=608;goto B75a804;
case 0x75a806:c.instructions+=607;goto B75a806;
case 0x75a80d:c.instructions+=606;goto B75a80d;
case 0x75a811:c.instructions+=605;goto B75a811;
case 0x75a813:c.instructions+=604;goto B75a813;
case 0x75a816:c.instructions+=603;goto B75a816;
case 0x75a819:c.instructions+=602;goto B75a819;
case 0x75a81b:c.instructions+=601;goto B75a81b;
case 0x75a81d:c.instructions+=600;goto B75a81d;
case 0x75a81f:c.instructions+=599;goto B75a81f;
case 0x75a821:c.instructions+=598;goto B75a821;
case 0x75a823:c.instructions+=597;goto B75a823;
case 0x75a825:c.instructions+=596;goto B75a825;
case 0x75a827:c.instructions+=595;goto B75a827;
case 0x75a82e:c.instructions+=594;goto B75a82e;
case 0x75a832:c.instructions+=593;goto B75a832;
case 0x75a834:c.instructions+=592;goto B75a834;
case 0x75a837:c.instructions+=591;goto B75a837;
case 0x75a83a:c.instructions+=590;goto B75a83a;
case 0x75a83c:c.instructions+=589;goto B75a83c;
case 0x75a83e:c.instructions+=588;goto B75a83e;
case 0x75a840:c.instructions+=587;goto B75a840;
case 0x75a842:c.instructions+=586;goto B75a842;
case 0x75a844:c.instructions+=585;goto B75a844;
case 0x75a846:c.instructions+=584;goto B75a846;
case 0x75a848:c.instructions+=583;goto B75a848;
case 0x75a84f:c.instructions+=582;goto B75a84f;
case 0x75a853:c.instructions+=581;goto B75a853;
case 0x75a855:c.instructions+=580;goto B75a855;
case 0x75a858:c.instructions+=579;goto B75a858;
case 0x75a85b:c.instructions+=578;goto B75a85b;
case 0x75a85d:c.instructions+=577;goto B75a85d;
case 0x75a85f:c.instructions+=576;goto B75a85f;
case 0x75a861:c.instructions+=575;goto B75a861;
case 0x75a863:c.instructions+=574;goto B75a863;
case 0x75a865:c.instructions+=573;goto B75a865;
case 0x75a867:c.instructions+=572;goto B75a867;
case 0x75a869:c.instructions+=571;goto B75a869;
case 0x75a86d:c.instructions+=570;goto B75a86d;
case 0x75a874:c.instructions+=569;goto B75a874;
case 0x75a876:c.instructions+=568;goto B75a876;
case 0x75a879:c.instructions+=567;goto B75a879;
case 0x75a87c:c.instructions+=566;goto B75a87c;
case 0x75a87e:c.instructions+=565;goto B75a87e;
case 0x75a880:c.instructions+=564;goto B75a880;
case 0x75a882:c.instructions+=563;goto B75a882;
case 0x75a884:c.instructions+=562;goto B75a884;
case 0x75a886:c.instructions+=561;goto B75a886;
case 0x75a888:c.instructions+=560;goto B75a888;
case 0x75a88a:c.instructions+=559;goto B75a88a;
case 0x75a891:c.instructions+=558;goto B75a891;
case 0x75a895:c.instructions+=557;goto B75a895;
case 0x75a897:c.instructions+=556;goto B75a897;
case 0x75a89a:c.instructions+=555;goto B75a89a;
case 0x75a89d:c.instructions+=554;goto B75a89d;
case 0x75a89f:c.instructions+=553;goto B75a89f;
case 0x75a8a1:c.instructions+=552;goto B75a8a1;
case 0x75a8a3:c.instructions+=551;goto B75a8a3;
case 0x75a8a5:c.instructions+=550;goto B75a8a5;
case 0x75a8a7:c.instructions+=549;goto B75a8a7;
case 0x75a8a9:c.instructions+=548;goto B75a8a9;
case 0x75a8ab:c.instructions+=547;goto B75a8ab;
case 0x75a8af:c.instructions+=546;goto B75a8af;
case 0x75a8b6:c.instructions+=545;goto B75a8b6;
case 0x75a8b8:c.instructions+=544;goto B75a8b8;
case 0x75a8bb:c.instructions+=543;goto B75a8bb;
case 0x75a8be:c.instructions+=542;goto B75a8be;
case 0x75a8c0:c.instructions+=541;goto B75a8c0;
case 0x75a8c2:c.instructions+=540;goto B75a8c2;
case 0x75a8c4:c.instructions+=539;goto B75a8c4;
case 0x75a8c6:c.instructions+=538;goto B75a8c6;
case 0x75a8c8:c.instructions+=537;goto B75a8c8;
case 0x75a8ca:c.instructions+=536;goto B75a8ca;
case 0x75a8cc:c.instructions+=535;goto B75a8cc;
case 0x75a8d3:c.instructions+=534;goto B75a8d3;
case 0x75a8d5:c.instructions+=533;goto B75a8d5;
case 0x75a8d8:c.instructions+=532;goto B75a8d8;
case 0x75a8db:c.instructions+=531;goto B75a8db;
case 0x75a8dd:c.instructions+=530;goto B75a8dd;
case 0x75a8e1:c.instructions+=529;goto B75a8e1;
case 0x75a8e3:c.instructions+=528;goto B75a8e3;
case 0x75a8e5:c.instructions+=527;goto B75a8e5;
case 0x75a8e7:c.instructions+=526;goto B75a8e7;
case 0x75a8e9:c.instructions+=525;goto B75a8e9;
case 0x75a8eb:c.instructions+=524;goto B75a8eb;
case 0x75a8ed:c.instructions+=523;goto B75a8ed;
case 0x75a8f4:c.instructions+=522;goto B75a8f4;
case 0x75a8f6:c.instructions+=521;goto B75a8f6;
case 0x75a8f9:c.instructions+=520;goto B75a8f9;
case 0x75a8fd:c.instructions+=519;goto B75a8fd;
case 0x75a900:c.instructions+=518;goto B75a900;
case 0x75a902:c.instructions+=517;goto B75a902;
case 0x75a904:c.instructions+=516;goto B75a904;
case 0x75a906:c.instructions+=515;goto B75a906;
case 0x75a908:c.instructions+=514;goto B75a908;
case 0x75a90a:c.instructions+=513;goto B75a90a;
case 0x75a90c:c.instructions+=512;goto B75a90c;
case 0x75a90e:c.instructions+=511;goto B75a90e;
case 0x75a915:c.instructions+=510;goto B75a915;
case 0x75a917:c.instructions+=509;goto B75a917;
case 0x75a91a:c.instructions+=508;goto B75a91a;
case 0x75a91e:c.instructions+=507;goto B75a91e;
case 0x75a921:c.instructions+=506;goto B75a921;
case 0x75a923:c.instructions+=505;goto B75a923;
case 0x75a925:c.instructions+=504;goto B75a925;
case 0x75a927:c.instructions+=503;goto B75a927;
case 0x75a929:c.instructions+=502;goto B75a929;
case 0x75a92b:c.instructions+=501;goto B75a92b;
case 0x75a92d:c.instructions+=500;goto B75a92d;
case 0x75a92f:c.instructions+=499;goto B75a92f;
case 0x75a936:c.instructions+=498;goto B75a936;
case 0x75a938:c.instructions+=497;goto B75a938;
case 0x75a93b:c.instructions+=496;goto B75a93b;
case 0x75a93f:c.instructions+=495;goto B75a93f;
case 0x75a942:c.instructions+=494;goto B75a942;
case 0x75a944:c.instructions+=493;goto B75a944;
case 0x75a946:c.instructions+=492;goto B75a946;
case 0x75a948:c.instructions+=491;goto B75a948;
case 0x75a94a:c.instructions+=490;goto B75a94a;
case 0x75a94c:c.instructions+=489;goto B75a94c;
case 0x75a94e:c.instructions+=488;goto B75a94e;
case 0x75a950:c.instructions+=487;goto B75a950;
case 0x75a957:c.instructions+=486;goto B75a957;
case 0x75a959:c.instructions+=485;goto B75a959;
case 0x75a95d:c.instructions+=484;goto B75a95d;
case 0x75a960:c.instructions+=483;goto B75a960;
case 0x75a963:c.instructions+=482;goto B75a963;
case 0x75a965:c.instructions+=481;goto B75a965;
case 0x75a967:c.instructions+=480;goto B75a967;
case 0x75a969:c.instructions+=479;goto B75a969;
case 0x75a96b:c.instructions+=478;goto B75a96b;
case 0x75a96d:c.instructions+=477;goto B75a96d;
case 0x75a96f:c.instructions+=476;goto B75a96f;
case 0x75a971:c.instructions+=475;goto B75a971;
case 0x75a975:c.instructions+=474;goto B75a975;
case 0x75a97c:c.instructions+=473;goto B75a97c;
case 0x75a97e:c.instructions+=472;goto B75a97e;
case 0x75a981:c.instructions+=471;goto B75a981;
case 0x75a984:c.instructions+=470;goto B75a984;
case 0x75a986:c.instructions+=469;goto B75a986;
case 0x75a988:c.instructions+=468;goto B75a988;
case 0x75a98a:c.instructions+=467;goto B75a98a;
case 0x75a98c:c.instructions+=466;goto B75a98c;
case 0x75a98e:c.instructions+=465;goto B75a98e;
case 0x75a990:c.instructions+=464;goto B75a990;
case 0x75a992:c.instructions+=463;goto B75a992;
case 0x75a996:c.instructions+=462;goto B75a996;
case 0x75a99d:c.instructions+=461;goto B75a99d;
case 0x75a99f:c.instructions+=460;goto B75a99f;
case 0x75a9a2:c.instructions+=459;goto B75a9a2;
case 0x75a9a5:c.instructions+=458;goto B75a9a5;
case 0x75a9a7:c.instructions+=457;goto B75a9a7;
case 0x75a9a9:c.instructions+=456;goto B75a9a9;
case 0x75a9ab:c.instructions+=455;goto B75a9ab;
case 0x75a9ad:c.instructions+=454;goto B75a9ad;
case 0x75a9af:c.instructions+=453;goto B75a9af;
case 0x75a9b1:c.instructions+=452;goto B75a9b1;
case 0x75a9b3:c.instructions+=451;goto B75a9b3;
case 0x75a9ba:c.instructions+=450;goto B75a9ba;
case 0x75a9bc:c.instructions+=449;goto B75a9bc;
case 0x75a9bf:c.instructions+=448;goto B75a9bf;
case 0x75a9c3:c.instructions+=447;goto B75a9c3;
case 0x75a9c6:c.instructions+=446;goto B75a9c6;
case 0x75a9c8:c.instructions+=445;goto B75a9c8;
case 0x75a9ca:c.instructions+=444;goto B75a9ca;
case 0x75a9cc:c.instructions+=443;goto B75a9cc;
case 0x75a9ce:c.instructions+=442;goto B75a9ce;
case 0x75a9d0:c.instructions+=441;goto B75a9d0;
case 0x75a9d2:c.instructions+=440;goto B75a9d2;
case 0x75a9d4:c.instructions+=439;goto B75a9d4;
case 0x75a9db:c.instructions+=438;goto B75a9db;
case 0x75a9dd:c.instructions+=437;goto B75a9dd;
case 0x75a9e0:c.instructions+=436;goto B75a9e0;
case 0x75a9e4:c.instructions+=435;goto B75a9e4;
case 0x75a9e7:c.instructions+=434;goto B75a9e7;
case 0x75a9e9:c.instructions+=433;goto B75a9e9;
case 0x75a9eb:c.instructions+=432;goto B75a9eb;
case 0x75a9ed:c.instructions+=431;goto B75a9ed;
case 0x75a9ef:c.instructions+=430;goto B75a9ef;
case 0x75a9f1:c.instructions+=429;goto B75a9f1;
case 0x75a9f3:c.instructions+=428;goto B75a9f3;
case 0x75a9f5:c.instructions+=427;goto B75a9f5;
case 0x75a9fc:c.instructions+=426;goto B75a9fc;
case 0x75aa00:c.instructions+=425;goto B75aa00;
case 0x75aa02:c.instructions+=424;goto B75aa02;
case 0x75aa05:c.instructions+=423;goto B75aa05;
case 0x75aa08:c.instructions+=422;goto B75aa08;
case 0x75aa0a:c.instructions+=421;goto B75aa0a;
case 0x75aa0c:c.instructions+=420;goto B75aa0c;
case 0x75aa0e:c.instructions+=419;goto B75aa0e;
case 0x75aa10:c.instructions+=418;goto B75aa10;
case 0x75aa12:c.instructions+=417;goto B75aa12;
case 0x75aa14:c.instructions+=416;goto B75aa14;
case 0x75aa16:c.instructions+=415;goto B75aa16;
case 0x75aa1a:c.instructions+=414;goto B75aa1a;
case 0x75aa21:c.instructions+=413;goto B75aa21;
case 0x75aa23:c.instructions+=412;goto B75aa23;
case 0x75aa26:c.instructions+=411;goto B75aa26;
case 0x75aa29:c.instructions+=410;goto B75aa29;
case 0x75aa2b:c.instructions+=409;goto B75aa2b;
case 0x75aa2d:c.instructions+=408;goto B75aa2d;
case 0x75aa2f:c.instructions+=407;goto B75aa2f;
case 0x75aa31:c.instructions+=406;goto B75aa31;
case 0x75aa33:c.instructions+=405;goto B75aa33;
case 0x75aa35:c.instructions+=404;goto B75aa35;
case 0x75aa37:c.instructions+=403;goto B75aa37;
case 0x75aa3b:c.instructions+=402;goto B75aa3b;
case 0x75aa42:c.instructions+=401;goto B75aa42;
case 0x75aa44:c.instructions+=400;goto B75aa44;
case 0x75aa47:c.instructions+=399;goto B75aa47;
case 0x75aa4a:c.instructions+=398;goto B75aa4a;
case 0x75aa4c:c.instructions+=397;goto B75aa4c;
case 0x75aa4e:c.instructions+=396;goto B75aa4e;
case 0x75aa50:c.instructions+=395;goto B75aa50;
case 0x75aa52:c.instructions+=394;goto B75aa52;
case 0x75aa56:c.instructions+=393;goto B75aa56;
case 0x75aa58:c.instructions+=392;goto B75aa58;
case 0x75aa5a:c.instructions+=391;goto B75aa5a;
case 0x75aa5c:c.instructions+=390;goto B75aa5c;
case 0x75aa60:c.instructions+=389;goto B75aa60;
case 0x75aa67:c.instructions+=388;goto B75aa67;
case 0x75aa69:c.instructions+=387;goto B75aa69;
case 0x75aa6c:c.instructions+=386;goto B75aa6c;
case 0x75aa6f:c.instructions+=385;goto B75aa6f;
case 0x75aa71:c.instructions+=384;goto B75aa71;
case 0x75aa75:c.instructions+=383;goto B75aa75;
case 0x75aa77:c.instructions+=382;goto B75aa77;
case 0x75aa79:c.instructions+=381;goto B75aa79;
case 0x75aa7b:c.instructions+=380;goto B75aa7b;
case 0x75aa7f:c.instructions+=379;goto B75aa7f;
case 0x75aa86:c.instructions+=378;goto B75aa86;
case 0x75aa88:c.instructions+=377;goto B75aa88;
case 0x75aa8b:c.instructions+=376;goto B75aa8b;
case 0x75aa8e:c.instructions+=375;goto B75aa8e;
case 0x75aa90:c.instructions+=374;goto B75aa90;
case 0x75aa92:c.instructions+=373;goto B75aa92;
case 0x75aa94:c.instructions+=372;goto B75aa94;
case 0x75aa96:c.instructions+=371;goto B75aa96;
case 0x75aa98:c.instructions+=370;goto B75aa98;
case 0x75aa9a:c.instructions+=369;goto B75aa9a;
case 0x75aaa1:c.instructions+=368;goto B75aaa1;
case 0x75aaa5:c.instructions+=367;goto B75aaa5;
case 0x75aaa7:c.instructions+=366;goto B75aaa7;
case 0x75aaaa:c.instructions+=365;goto B75aaaa;
case 0x75aaad:c.instructions+=364;goto B75aaad;
case 0x75aaaf:c.instructions+=363;goto B75aaaf;
case 0x75aab1:c.instructions+=362;goto B75aab1;
case 0x75aab3:c.instructions+=361;goto B75aab3;
case 0x75aab5:c.instructions+=360;goto B75aab5;
case 0x75aab7:c.instructions+=359;goto B75aab7;
case 0x75aab9:c.instructions+=358;goto B75aab9;
case 0x75aac0:c.instructions+=357;goto B75aac0;
case 0x75aac2:c.instructions+=356;goto B75aac2;
case 0x75aac5:c.instructions+=355;goto B75aac5;
case 0x75aac9:c.instructions+=354;goto B75aac9;
case 0x75aacc:c.instructions+=353;goto B75aacc;
case 0x75aace:c.instructions+=352;goto B75aace;
case 0x75aad0:c.instructions+=351;goto B75aad0;
case 0x75aad2:c.instructions+=350;goto B75aad2;
case 0x75aad4:c.instructions+=349;goto B75aad4;
case 0x75aad8:c.instructions+=348;goto B75aad8;
case 0x75aada:c.instructions+=347;goto B75aada;
case 0x75aadc:c.instructions+=346;goto B75aadc;
case 0x75aae3:c.instructions+=345;goto B75aae3;
case 0x75aae5:c.instructions+=344;goto B75aae5;
case 0x75aae8:c.instructions+=343;goto B75aae8;
case 0x75aaec:c.instructions+=342;goto B75aaec;
case 0x75aaef:c.instructions+=341;goto B75aaef;
case 0x75aaf1:c.instructions+=340;goto B75aaf1;
case 0x75aaf5:c.instructions+=339;goto B75aaf5;
case 0x75aaf7:c.instructions+=338;goto B75aaf7;
case 0x75aaf9:c.instructions+=337;goto B75aaf9;
case 0x75aafb:c.instructions+=336;goto B75aafb;
case 0x75ab02:c.instructions+=335;goto B75ab02;
case 0x75ab04:c.instructions+=334;goto B75ab04;
case 0x75ab08:c.instructions+=333;goto B75ab08;
case 0x75ab0b:c.instructions+=332;goto B75ab0b;
case 0x75ab0e:c.instructions+=331;goto B75ab0e;
case 0x75ab10:c.instructions+=330;goto B75ab10;
case 0x75ab12:c.instructions+=329;goto B75ab12;
case 0x75ab14:c.instructions+=328;goto B75ab14;
case 0x75ab16:c.instructions+=327;goto B75ab16;
case 0x75ab18:c.instructions+=326;goto B75ab18;
case 0x75ab1a:c.instructions+=325;goto B75ab1a;
case 0x75ab21:c.instructions+=324;goto B75ab21;
case 0x75ab25:c.instructions+=323;goto B75ab25;
case 0x75ab27:c.instructions+=322;goto B75ab27;
case 0x75ab2a:c.instructions+=321;goto B75ab2a;
case 0x75ab2d:c.instructions+=320;goto B75ab2d;
case 0x75ab2f:c.instructions+=319;goto B75ab2f;
case 0x75ab31:c.instructions+=318;goto B75ab31;
case 0x75ab33:c.instructions+=317;goto B75ab33;
case 0x75ab35:c.instructions+=316;goto B75ab35;
case 0x75ab37:c.instructions+=315;goto B75ab37;
case 0x75ab39:c.instructions+=314;goto B75ab39;
case 0x75ab3d:c.instructions+=313;goto B75ab3d;
case 0x75ab44:c.instructions+=312;goto B75ab44;
case 0x75ab46:c.instructions+=311;goto B75ab46;
case 0x75ab49:c.instructions+=310;goto B75ab49;
case 0x75ab4c:c.instructions+=309;goto B75ab4c;
case 0x75ab4e:c.instructions+=308;goto B75ab4e;
case 0x75ab50:c.instructions+=307;goto B75ab50;
case 0x75ab52:c.instructions+=306;goto B75ab52;
case 0x75ab54:c.instructions+=305;goto B75ab54;
case 0x75ab58:c.instructions+=304;goto B75ab58;
case 0x75ab5a:c.instructions+=303;goto B75ab5a;
case 0x75ab5c:c.instructions+=302;goto B75ab5c;
case 0x75ab60:c.instructions+=301;goto B75ab60;
case 0x75ab67:c.instructions+=300;goto B75ab67;
case 0x75ab69:c.instructions+=299;goto B75ab69;
case 0x75ab6c:c.instructions+=298;goto B75ab6c;
case 0x75ab6f:c.instructions+=297;goto B75ab6f;
case 0x75ab71:c.instructions+=296;goto B75ab71;
case 0x75ab75:c.instructions+=295;goto B75ab75;
case 0x75ab77:c.instructions+=294;goto B75ab77;
case 0x75ab79:c.instructions+=293;goto B75ab79;
case 0x75ab7b:c.instructions+=292;goto B75ab7b;
case 0x75ab82:c.instructions+=291;goto B75ab82;
case 0x75ab84:c.instructions+=290;goto B75ab84;
case 0x75ab87:c.instructions+=289;goto B75ab87;
case 0x75ab8a:c.instructions+=288;goto B75ab8a;
case 0x75ab8c:c.instructions+=287;goto B75ab8c;
case 0x75ab90:c.instructions+=286;goto B75ab90;
case 0x75ab92:c.instructions+=285;goto B75ab92;
case 0x75ab94:c.instructions+=284;goto B75ab94;
case 0x75ab96:c.instructions+=283;goto B75ab96;
case 0x75ab98:c.instructions+=282;goto B75ab98;
case 0x75ab9a:c.instructions+=281;goto B75ab9a;
case 0x75aba1:c.instructions+=280;goto B75aba1;
case 0x75aba3:c.instructions+=279;goto B75aba3;
case 0x75aba6:c.instructions+=278;goto B75aba6;
case 0x75abaa:c.instructions+=277;goto B75abaa;
case 0x75abad:c.instructions+=276;goto B75abad;
case 0x75abaf:c.instructions+=275;goto B75abaf;
case 0x75abb1:c.instructions+=274;goto B75abb1;
case 0x75abb3:c.instructions+=273;goto B75abb3;
case 0x75abb5:c.instructions+=272;goto B75abb5;
case 0x75abb7:c.instructions+=271;goto B75abb7;
case 0x75abb9:c.instructions+=270;goto B75abb9;
case 0x75abc0:c.instructions+=269;goto B75abc0;
case 0x75abc2:c.instructions+=268;goto B75abc2;
case 0x75abc5:c.instructions+=267;goto B75abc5;
case 0x75abc9:c.instructions+=266;goto B75abc9;
case 0x75abcc:c.instructions+=265;goto B75abcc;
case 0x75abce:c.instructions+=264;goto B75abce;
case 0x75abd0:c.instructions+=263;goto B75abd0;
case 0x75abd2:c.instructions+=262;goto B75abd2;
case 0x75abd4:c.instructions+=261;goto B75abd4;
case 0x75abd8:c.instructions+=260;goto B75abd8;
case 0x75abda:c.instructions+=259;goto B75abda;
case 0x75abdc:c.instructions+=258;goto B75abdc;
case 0x75abe3:c.instructions+=257;goto B75abe3;
case 0x75abe5:c.instructions+=256;goto B75abe5;
case 0x75abe9:c.instructions+=255;goto B75abe9;
case 0x75abec:c.instructions+=254;goto B75abec;
case 0x75abef:c.instructions+=253;goto B75abef;
case 0x75abf1:c.instructions+=252;goto B75abf1;
case 0x75abf5:c.instructions+=251;goto B75abf5;
case 0x75abf7:c.instructions+=250;goto B75abf7;
case 0x75abf9:c.instructions+=249;goto B75abf9;
case 0x75abfb:c.instructions+=248;goto B75abfb;
case 0x75ac02:c.instructions+=247;goto B75ac02;
case 0x75ac06:c.instructions+=246;goto B75ac06;
case 0x75ac08:c.instructions+=245;goto B75ac08;
case 0x75ac0b:c.instructions+=244;goto B75ac0b;
case 0x75ac0e:c.instructions+=243;goto B75ac0e;
case 0x75ac10:c.instructions+=242;goto B75ac10;
case 0x75ac12:c.instructions+=241;goto B75ac12;
case 0x75ac14:c.instructions+=240;goto B75ac14;
case 0x75ac16:c.instructions+=239;goto B75ac16;
case 0x75ac18:c.instructions+=238;goto B75ac18;
case 0x75ac1a:c.instructions+=237;goto B75ac1a;
case 0x75ac21:c.instructions+=236;goto B75ac21;
case 0x75ac25:c.instructions+=235;goto B75ac25;
case 0x75ac27:c.instructions+=234;goto B75ac27;
case 0x75ac2a:c.instructions+=233;goto B75ac2a;
case 0x75ac2d:c.instructions+=232;goto B75ac2d;
case 0x75ac2f:c.instructions+=231;goto B75ac2f;
case 0x75ac31:c.instructions+=230;goto B75ac31;
case 0x75ac33:c.instructions+=229;goto B75ac33;
case 0x75ac35:c.instructions+=228;goto B75ac35;
case 0x75ac37:c.instructions+=227;goto B75ac37;
case 0x75ac39:c.instructions+=226;goto B75ac39;
case 0x75ac3d:c.instructions+=225;goto B75ac3d;
case 0x75ac44:c.instructions+=224;goto B75ac44;
case 0x75ac46:c.instructions+=223;goto B75ac46;
case 0x75ac49:c.instructions+=222;goto B75ac49;
case 0x75ac4c:c.instructions+=221;goto B75ac4c;
case 0x75ac4e:c.instructions+=220;goto B75ac4e;
case 0x75ac50:c.instructions+=219;goto B75ac50;
case 0x75ac52:c.instructions+=218;goto B75ac52;
case 0x75ac54:c.instructions+=217;goto B75ac54;
case 0x75ac56:c.instructions+=216;goto B75ac56;
case 0x75ac58:c.instructions+=215;goto B75ac58;
case 0x75ac5f:c.instructions+=214;goto B75ac5f;
case 0x75ac61:c.instructions+=213;goto B75ac61;
case 0x75ac64:c.instructions+=212;goto B75ac64;
case 0x75ac67:c.instructions+=211;goto B75ac67;
case 0x75ac69:c.instructions+=210;goto B75ac69;
case 0x75ac6b:c.instructions+=209;goto B75ac6b;
case 0x75ac6d:c.instructions+=208;goto B75ac6d;
case 0x75ac6f:c.instructions+=207;goto B75ac6f;
case 0x75ac71:c.instructions+=206;goto B75ac71;
case 0x75ac73:c.instructions+=205;goto B75ac73;
case 0x75ac77:c.instructions+=204;goto B75ac77;
case 0x75ac7e:c.instructions+=203;goto B75ac7e;
case 0x75ac80:c.instructions+=202;goto B75ac80;
case 0x75ac83:c.instructions+=201;goto B75ac83;
case 0x75ac87:c.instructions+=200;goto B75ac87;
case 0x75ac8a:c.instructions+=199;goto B75ac8a;
case 0x75ac8c:c.instructions+=198;goto B75ac8c;
case 0x75ac8e:c.instructions+=197;goto B75ac8e;
case 0x75ac90:c.instructions+=196;goto B75ac90;
case 0x75ac92:c.instructions+=195;goto B75ac92;
case 0x75ac94:c.instructions+=194;goto B75ac94;
case 0x75ac96:c.instructions+=193;goto B75ac96;
case 0x75ac98:c.instructions+=192;goto B75ac98;
case 0x75ac9f:c.instructions+=191;goto B75ac9f;
case 0x75aca1:c.instructions+=190;goto B75aca1;
case 0x75aca4:c.instructions+=189;goto B75aca4;
case 0x75aca8:c.instructions+=188;goto B75aca8;
case 0x75acab:c.instructions+=187;goto B75acab;
case 0x75acad:c.instructions+=186;goto B75acad;
case 0x75acaf:c.instructions+=185;goto B75acaf;
case 0x75acb1:c.instructions+=184;goto B75acb1;
case 0x75acb3:c.instructions+=183;goto B75acb3;
case 0x75acb5:c.instructions+=182;goto B75acb5;
case 0x75acb7:c.instructions+=181;goto B75acb7;
case 0x75acb9:c.instructions+=180;goto B75acb9;
case 0x75acc0:c.instructions+=179;goto B75acc0;
case 0x75acc2:c.instructions+=178;goto B75acc2;
case 0x75acc5:c.instructions+=177;goto B75acc5;
case 0x75acc9:c.instructions+=176;goto B75acc9;
case 0x75accc:c.instructions+=175;goto B75accc;
case 0x75acce:c.instructions+=174;goto B75acce;
case 0x75acd0:c.instructions+=173;goto B75acd0;
case 0x75acd2:c.instructions+=172;goto B75acd2;
case 0x75acd4:c.instructions+=171;goto B75acd4;
case 0x75acd6:c.instructions+=170;goto B75acd6;
case 0x75acd8:c.instructions+=169;goto B75acd8;
case 0x75acda:c.instructions+=168;goto B75acda;
case 0x75ace1:c.instructions+=167;goto B75ace1;
case 0x75ace3:c.instructions+=166;goto B75ace3;
case 0x75ace7:c.instructions+=165;goto B75ace7;
case 0x75acea:c.instructions+=164;goto B75acea;
case 0x75aced:c.instructions+=163;goto B75aced;
case 0x75acef:c.instructions+=162;goto B75acef;
case 0x75acf1:c.instructions+=161;goto B75acf1;
case 0x75acf3:c.instructions+=160;goto B75acf3;
case 0x75acf5:c.instructions+=159;goto B75acf5;
case 0x75acf7:c.instructions+=158;goto B75acf7;
case 0x75acf9:c.instructions+=157;goto B75acf9;
case 0x75acfb:c.instructions+=156;goto B75acfb;
case 0x75acff:c.instructions+=155;goto B75acff;
case 0x75ad06:c.instructions+=154;goto B75ad06;
case 0x75ad08:c.instructions+=153;goto B75ad08;
case 0x75ad0b:c.instructions+=152;goto B75ad0b;
case 0x75ad0e:c.instructions+=151;goto B75ad0e;
case 0x75ad10:c.instructions+=150;goto B75ad10;
case 0x75ad12:c.instructions+=149;goto B75ad12;
case 0x75ad14:c.instructions+=148;goto B75ad14;
case 0x75ad16:c.instructions+=147;goto B75ad16;
case 0x75ad18:c.instructions+=146;goto B75ad18;
case 0x75ad1a:c.instructions+=145;goto B75ad1a;
case 0x75ad1c:c.instructions+=144;goto B75ad1c;
case 0x75ad20:c.instructions+=143;goto B75ad20;
case 0x75ad27:c.instructions+=142;goto B75ad27;
case 0x75ad29:c.instructions+=141;goto B75ad29;
case 0x75ad2c:c.instructions+=140;goto B75ad2c;
case 0x75ad2f:c.instructions+=139;goto B75ad2f;
case 0x75ad31:c.instructions+=138;goto B75ad31;
case 0x75ad33:c.instructions+=137;goto B75ad33;
case 0x75ad35:c.instructions+=136;goto B75ad35;
case 0x75ad37:c.instructions+=135;goto B75ad37;
case 0x75ad39:c.instructions+=134;goto B75ad39;
case 0x75ad3b:c.instructions+=133;goto B75ad3b;
case 0x75ad3d:c.instructions+=132;goto B75ad3d;
case 0x75ad44:c.instructions+=131;goto B75ad44;
case 0x75ad46:c.instructions+=130;goto B75ad46;
case 0x75ad49:c.instructions+=129;goto B75ad49;
case 0x75ad4c:c.instructions+=128;goto B75ad4c;
case 0x75ad4e:c.instructions+=127;goto B75ad4e;
case 0x75ad50:c.instructions+=126;goto B75ad50;
case 0x75ad54:c.instructions+=125;goto B75ad54;
case 0x75ad56:c.instructions+=124;goto B75ad56;
case 0x75ad58:c.instructions+=123;goto B75ad58;
case 0x75ad5a:c.instructions+=122;goto B75ad5a;
case 0x75ad5c:c.instructions+=121;goto B75ad5c;
case 0x75ad5e:c.instructions+=120;goto B75ad5e;
case 0x75ad65:c.instructions+=119;goto B75ad65;
case 0x75ad67:c.instructions+=118;goto B75ad67;
case 0x75ad6a:c.instructions+=117;goto B75ad6a;
case 0x75ad6e:c.instructions+=116;goto B75ad6e;
case 0x75ad71:c.instructions+=115;goto B75ad71;
case 0x75ad73:c.instructions+=114;goto B75ad73;
case 0x75ad75:c.instructions+=113;goto B75ad75;
case 0x75ad77:c.instructions+=112;goto B75ad77;
case 0x75ad79:c.instructions+=111;goto B75ad79;
case 0x75ad7b:c.instructions+=110;goto B75ad7b;
case 0x75ad7d:c.instructions+=109;goto B75ad7d;
case 0x75ad7f:c.instructions+=108;goto B75ad7f;
case 0x75ad86:c.instructions+=107;goto B75ad86;
case 0x75ad88:c.instructions+=106;goto B75ad88;
case 0x75ad8b:c.instructions+=105;goto B75ad8b;
case 0x75ad8f:c.instructions+=104;goto B75ad8f;
case 0x75ad92:c.instructions+=103;goto B75ad92;
case 0x75ad94:c.instructions+=102;goto B75ad94;
case 0x75ad96:c.instructions+=101;goto B75ad96;
case 0x75ad98:c.instructions+=100;goto B75ad98;
case 0x75ad9a:c.instructions+=99;goto B75ad9a;
case 0x75ad9c:c.instructions+=98;goto B75ad9c;
case 0x75ad9e:c.instructions+=97;goto B75ad9e;
case 0x75ada0:c.instructions+=96;goto B75ada0;
case 0x75ada7:c.instructions+=95;goto B75ada7;
case 0x75ada9:c.instructions+=94;goto B75ada9;
case 0x75adac:c.instructions+=93;goto B75adac;
case 0x75adb0:c.instructions+=92;goto B75adb0;
case 0x75adb3:c.instructions+=91;goto B75adb3;
case 0x75adb5:c.instructions+=90;goto B75adb5;
case 0x75adb7:c.instructions+=89;goto B75adb7;
case 0x75adb9:c.instructions+=88;goto B75adb9;
case 0x75adbb:c.instructions+=87;goto B75adbb;
case 0x75adbd:c.instructions+=86;goto B75adbd;
case 0x75adbf:c.instructions+=85;goto B75adbf;
case 0x75adc1:c.instructions+=84;goto B75adc1;
case 0x75adc8:c.instructions+=83;goto B75adc8;
case 0x75adcc:c.instructions+=82;goto B75adcc;
case 0x75adce:c.instructions+=81;goto B75adce;
case 0x75add1:c.instructions+=80;goto B75add1;
case 0x75add4:c.instructions+=79;goto B75add4;
case 0x75add6:c.instructions+=78;goto B75add6;
case 0x75add8:c.instructions+=77;goto B75add8;
case 0x75adda:c.instructions+=76;goto B75adda;
case 0x75addc:c.instructions+=75;goto B75addc;
case 0x75adde:c.instructions+=74;goto B75adde;
case 0x75ade0:c.instructions+=73;goto B75ade0;
case 0x75ade2:c.instructions+=72;goto B75ade2;
case 0x75ade6:c.instructions+=71;goto B75ade6;
case 0x75aded:c.instructions+=70;goto B75aded;
case 0x75adef:c.instructions+=69;goto B75adef;
case 0x75adf2:c.instructions+=68;goto B75adf2;
case 0x75adf5:c.instructions+=67;goto B75adf5;
case 0x75adf7:c.instructions+=66;goto B75adf7;
case 0x75adf9:c.instructions+=65;goto B75adf9;
case 0x75adfb:c.instructions+=64;goto B75adfb;
case 0x75adfd:c.instructions+=63;goto B75adfd;
case 0x75adff:c.instructions+=62;goto B75adff;
case 0x75ae01:c.instructions+=61;goto B75ae01;
case 0x75ae03:c.instructions+=60;goto B75ae03;
case 0x75ae07:c.instructions+=59;goto B75ae07;
case 0x75ae0e:c.instructions+=58;goto B75ae0e;
case 0x75ae10:c.instructions+=57;goto B75ae10;
case 0x75ae13:c.instructions+=56;goto B75ae13;
case 0x75ae16:c.instructions+=55;goto B75ae16;
case 0x75ae18:c.instructions+=54;goto B75ae18;
case 0x75ae1a:c.instructions+=53;goto B75ae1a;
case 0x75ae1c:c.instructions+=52;goto B75ae1c;
case 0x75ae1e:c.instructions+=51;goto B75ae1e;
case 0x75ae20:c.instructions+=50;goto B75ae20;
case 0x75ae22:c.instructions+=49;goto B75ae22;
case 0x75ae24:c.instructions+=48;goto B75ae24;
case 0x75ae2b:c.instructions+=47;goto B75ae2b;
case 0x75ae2d:c.instructions+=46;goto B75ae2d;
case 0x75ae30:c.instructions+=45;goto B75ae30;
case 0x75ae34:c.instructions+=44;goto B75ae34;
case 0x75ae37:c.instructions+=43;goto B75ae37;
case 0x75ae39:c.instructions+=42;goto B75ae39;
case 0x75ae3b:c.instructions+=41;goto B75ae3b;
case 0x75ae3d:c.instructions+=40;goto B75ae3d;
case 0x75ae3f:c.instructions+=39;goto B75ae3f;
case 0x75ae41:c.instructions+=38;goto B75ae41;
case 0x75ae43:c.instructions+=37;goto B75ae43;
case 0x75ae45:c.instructions+=36;goto B75ae45;
case 0x75ae49:c.instructions+=35;goto B75ae49;
case 0x75ae50:c.instructions+=34;goto B75ae50;
case 0x75ae52:c.instructions+=33;goto B75ae52;
case 0x75ae55:c.instructions+=32;goto B75ae55;
case 0x75ae58:c.instructions+=31;goto B75ae58;
case 0x75ae5a:c.instructions+=30;goto B75ae5a;
case 0x75ae5c:c.instructions+=29;goto B75ae5c;
case 0x75ae5e:c.instructions+=28;goto B75ae5e;
case 0x75ae60:c.instructions+=27;goto B75ae60;
case 0x75ae62:c.instructions+=26;goto B75ae62;
case 0x75ae64:c.instructions+=25;goto B75ae64;
case 0x75ae66:c.instructions+=24;goto B75ae66;
case 0x75ae6d:c.instructions+=23;goto B75ae6d;
case 0x75ae71:c.instructions+=22;goto B75ae71;
case 0x75ae74:c.instructions+=21;goto B75ae74;
case 0x75ae76:c.instructions+=20;goto B75ae76;
case 0x75ae78:c.instructions+=19;goto B75ae78;
case 0x75ae7b:c.instructions+=18;goto B75ae7b;
case 0x75ae7e:c.instructions+=17;goto B75ae7e;
case 0x75ae80:c.instructions+=16;goto B75ae80;
case 0x75ae82:c.instructions+=15;goto B75ae82;
case 0x75ae84:c.instructions+=14;goto B75ae84;
case 0x75ae87:c.instructions+=13;goto B75ae87;
case 0x75ae8a:c.instructions+=12;goto B75ae8a;
case 0x75ae8c:c.instructions+=11;goto B75ae8c;
case 0x75ae8f:c.instructions+=10;goto B75ae8f;
case 0x75ae92:c.instructions+=9;goto B75ae92;
case 0x75ae93:c.instructions+=8;goto B75ae93;
case 0x75ae95:c.instructions+=7;goto B75ae95;
case 0x75ae98:c.instructions+=6;goto B75ae98;
case 0x75ae9b:c.instructions+=5;goto B75ae9b;
case 0x75ae9c:c.instructions+=4;goto B75ae9c;
case 0x75ae9d:c.instructions+=3;goto B75ae9d;
case 0x75ae9e:c.instructions+=2;goto B75ae9e;
case 0x75aea1:c.instructions+=1;goto B75aea1;
case 0x75aeb0:goto L75aeb0;
case 0x75aeb4:c.instructions+=6;goto B75aeb4;
case 0x75aeba:c.instructions+=5;goto B75aeba;
case 0x75aec1:c.instructions+=4;goto B75aec1;
case 0x75aec8:c.instructions+=3;goto B75aec8;
case 0x75aecf:c.instructions+=2;goto B75aecf;
case 0x75aed6:c.instructions+=1;goto B75aed6;
case 0x75aee0:goto L75aee0;
case 0x75aee4:c.instructions+=6;goto B75aee4;
case 0x75aee6:c.instructions+=5;goto B75aee6;
case 0x75aeea:c.instructions+=4;goto B75aeea;
case 0x75aeeb:c.instructions+=3;goto B75aeeb;
case 0x75aeec:c.instructions+=2;goto B75aeec;
case 0x75aeee:c.instructions+=1;goto B75aeee;
case 0x75aef0:goto L75aef0;
case 0x75aef2:c.instructions+=3;goto B75aef2;
case 0x75aef4:c.instructions+=2;goto B75aef4;
case 0x75aef6:c.instructions+=1;goto B75aef6;
case 0x75aef8:goto L75aef8;
case 0x75aefc:c.instructions+=3;goto B75aefc;
case 0x75aefd:c.instructions+=2;goto B75aefd;
case 0x75aeff:c.instructions+=1;goto B75aeff;
case 0x75af01:goto L75af01;
case 0x75af05:c.instructions+=4;goto B75af05;
case 0x75af07:c.instructions+=3;goto B75af07;
case 0x75af0a:c.instructions+=2;goto B75af0a;
case 0x75af0c:c.instructions+=1;goto B75af0c;
case 0x75af0e:goto L75af0e;
case 0x75af0f:c.instructions+=1;goto B75af0f;
case 0x75af11:goto L75af11;
case 0x75af13:c.instructions+=8;goto B75af13;
case 0x75af17:c.instructions+=7;goto B75af17;
case 0x75af19:c.instructions+=6;goto B75af19;
case 0x75af1a:c.instructions+=5;goto B75af1a;
case 0x75af1b:c.instructions+=4;goto B75af1b;
case 0x75af1c:c.instructions+=3;goto B75af1c;
case 0x75af1f:c.instructions+=2;goto B75af1f;
case 0x75af21:c.instructions+=1;goto B75af21;
case 0x75af23:goto L75af23;
case 0x75af24:c.instructions+=1;goto B75af24;
case 0x75af29:goto L75af29;
case 0x75af2c:c.instructions+=1;goto B75af2c;
case 0x75af2e:goto L75af2e;
case 0x75af2f:c.instructions+=1;goto B75af2f;
case 0x75af31:goto L75af31;
case 0x75af32:goto L75af32;
case 0x75af33:c.instructions+=2;goto B75af33;
case 0x75af34:c.instructions+=1;goto B75af34;
case 0x75af40:goto L75af40;
case 0x75af41:c.instructions+=11;goto B75af41;
case 0x75af42:c.instructions+=10;goto B75af42;
case 0x75af43:c.instructions+=9;goto B75af43;
case 0x75af44:c.instructions+=8;goto B75af44;
case 0x75af48:c.instructions+=7;goto B75af48;
case 0x75af4a:c.instructions+=6;goto B75af4a;
case 0x75af4b:c.instructions+=5;goto B75af4b;
case 0x75af4f:c.instructions+=4;goto B75af4f;
case 0x75af57:c.instructions+=3;goto B75af57;
case 0x75af59:c.instructions+=2;goto B75af59;
case 0x75af5c:c.instructions+=1;goto B75af5c;
case 0x75af60:goto L75af60;
case 0x75af64:c.instructions+=4;goto B75af64;
case 0x75af65:c.instructions+=3;goto B75af65;
case 0x75af67:c.instructions+=2;goto B75af67;
case 0x75af6a:c.instructions+=1;goto B75af6a;
case 0x75af6c:goto L75af6c;
case 0x75af6d:c.instructions+=1;goto B75af6d;
case 0x75af72:goto L75af72;
case 0x75af75:c.instructions+=2;goto B75af75;
case 0x75af77:c.instructions+=1;goto B75af77;
case 0x75af79:goto L75af79;
case 0x75af7c:c.instructions+=1;goto B75af7c;
case 0x75af7e:goto L75af7e;
case 0x75af80:c.instructions+=19;goto B75af80;
case 0x75af83:c.instructions+=18;goto B75af83;
case 0x75af86:c.instructions+=17;goto B75af86;
case 0x75af88:c.instructions+=16;goto B75af88;
case 0x75af8a:c.instructions+=15;goto B75af8a;
case 0x75af8d:c.instructions+=14;goto B75af8d;
case 0x75af90:c.instructions+=13;goto B75af90;
case 0x75af92:c.instructions+=12;goto B75af92;
case 0x75af94:c.instructions+=11;goto B75af94;
case 0x75af97:c.instructions+=10;goto B75af97;
case 0x75af9a:c.instructions+=9;goto B75af9a;
case 0x75af9d:c.instructions+=8;goto B75af9d;
case 0x75af9e:c.instructions+=7;goto B75af9e;
case 0x75afa1:c.instructions+=6;goto B75afa1;
case 0x75afa4:c.instructions+=5;goto B75afa4;
case 0x75afa7:c.instructions+=4;goto B75afa7;
case 0x75afab:c.instructions+=3;goto B75afab;
case 0x75afaf:c.instructions+=2;goto B75afaf;
case 0x75afb3:c.instructions+=1;goto B75afb3;
case 0x75afb8:goto L75afb8;
case 0x75afbc:c.instructions+=5;goto B75afbc;
case 0x75afc2:c.instructions+=4;goto B75afc2;
case 0x75afc5:c.instructions+=3;goto B75afc5;
case 0x75afc7:c.instructions+=2;goto B75afc7;
case 0x75afca:c.instructions+=1;goto B75afca;
case 0x75afcc:goto L75afcc;
case 0x75afce:c.instructions+=3;goto B75afce;
case 0x75afd1:c.instructions+=2;goto B75afd1;
case 0x75afd5:c.instructions+=1;goto B75afd5;
case 0x75afd7:goto L75afd7;
case 0x75afdb:goto L75afdb;
case 0x75afde:c.instructions+=1;goto B75afde;
case 0x75afe0:goto L75afe0;
case 0x75afe2:c.instructions+=10;goto B75afe2;
case 0x75afe5:c.instructions+=9;goto B75afe5;
case 0x75afe8:c.instructions+=8;goto B75afe8;
case 0x75afeb:c.instructions+=7;goto B75afeb;
case 0x75afed:c.instructions+=6;goto B75afed;
case 0x75afee:c.instructions+=5;goto B75afee;
case 0x75aff0:c.instructions+=4;goto B75aff0;
case 0x75aff3:c.instructions+=3;goto B75aff3;
case 0x75aff6:c.instructions+=2;goto B75aff6;
case 0x75aff8:c.instructions+=1;goto B75aff8;
case 0x75affa:goto L75affa;
case 0x75affc:c.instructions+=1;goto B75affc;
case 0x75affe:goto L75affe;
default:missing_instruction(c.pc);}
B75a002:L75a002:{c.instructions+=4;NFSU2_TR(0x75a002);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B75a004:{NFSU2_TR(0x75a004);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B75a005:{NFSU2_TR(0x75a005);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75a007:{NFSU2_TR(0x75a007);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75a002u);}goto L75a002;}}
}
B75a009:L75a009:{c.instructions+=4;NFSU2_TR(0x75a009);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B75a00b:{NFSU2_TR(0x75a00b);
__builtin_memmove((R+24),(R+4),4);
}
B75a00d:{NFSU2_TR(0x75a00d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3e80ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3e80ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75a013:{NFSU2_TR(0x75a013);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75a01a;}}
}
B75a015:L75a015:{c.instructions+=1;NFSU2_TR(0x75a015);
w4(R+24,u32(0x3e80ull));
}
B75a01a:L75a01a:{c.instructions+=2;NFSU2_TR(0x75a01a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75a021:{NFSU2_TR(0x75a021);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75a03d;}}
}
B75a023:L75a023:{c.instructions+=4;NFSU2_TR(0x75a023);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75a026:{NFSU2_TR(0x75a026);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75a028:{NFSU2_TR(0x75a028);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75a02a:{NFSU2_TR(0x75a02a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75a03d;}}
}
B75a02c:L75a02c:{c.instructions+=4;NFSU2_TR(0x75a02c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a02d:{NFSU2_TR(0x75a02d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a02e:{NFSU2_TR(0x75a02e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a02f:{NFSU2_TR(0x75a02f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a034ull));
TAIL_STATIC(0x7583e0u,758);
}
B75a034:L75a034:{c.instructions+=3;NFSU2_TR(0x75a034);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75a037:{NFSU2_TR(0x75a037);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B75a039:{NFSU2_TR(0x75a039);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75a03d;}}
}
B75a03b:L75a03b:{c.instructions+=1;NFSU2_TR(0x75a03b);
__builtin_memmove((R+0),(R+24),4);
}
B75a03d:L75a03d:{c.instructions+=2;NFSU2_TR(0x75a03d);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x14ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75a044:{NFSU2_TR(0x75a044);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75a059;}}
}
B75a046:L75a046:{c.instructions+=8;NFSU2_TR(0x75a046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75a048:{NFSU2_TR(0x75a048);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a04a:{NFSU2_TR(0x75a04a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a04c:{NFSU2_TR(0x75a04c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a04e:{NFSU2_TR(0x75a04e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a04f:{NFSU2_TR(0x75a04f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a050:{NFSU2_TR(0x75a050);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a051:{NFSU2_TR(0x75a051);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a056ull));
TAIL_STATIC(0x74a5c0u,74a);
}
B75a056:L75a056:{c.instructions+=1;NFSU2_TR(0x75a056);
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
B75a059:L75a059:{c.instructions+=5;NFSU2_TR(0x75a059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75a05a:{NFSU2_TR(0x75a05a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a05b:{NFSU2_TR(0x75a05b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75a05c:{NFSU2_TR(0x75a05c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75a05d:{NFSU2_TR(0x75a05d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a060:L75a060:{c.instructions+=9;NFSU2_TR(0x75a060);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a061:{NFSU2_TR(0x75a061);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a062:{NFSU2_TR(0x75a062);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a063:{NFSU2_TR(0x75a063);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a067:{NFSU2_TR(0x75a067);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a06d:{NFSU2_TR(0x75a06d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a073:{NFSU2_TR(0x75a073);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B75a076:{NFSU2_TR(0x75a076);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75a079:{NFSU2_TR(0x75a079);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75a134;}}
}
B75a07f:L75a07f:{c.instructions+=4;NFSU2_TR(0x75a07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x801cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a085:{NFSU2_TR(0x75a085);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B75a087:{NFSU2_TR(0x75a087);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75a089:{NFSU2_TR(0x75a089);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75a0c2;}}
}
B75a08b:L75a08b:{c.instructions+=3;NFSU2_TR(0x75a08b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a091:{NFSU2_TR(0x75a091);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x400cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75a097:{NFSU2_TR(0x75a097);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75a0c2;}}
}
B75a099:L75a099:{c.instructions+=2;NFSU2_TR(0x75a099);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75a09c:{NFSU2_TR(0x75a09c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75a0b5;}}
}
B75a09e:L75a09e:{c.instructions+=3;NFSU2_TR(0x75a09e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a09f:{NFSU2_TR(0x75a09f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4014ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a0a5:{NFSU2_TR(0x75a0a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a0aaull));
TAIL_STATIC(0x7585e0u,758);
}
B75a0aa:L75a0aa:{c.instructions+=3;NFSU2_TR(0x75a0aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75a0ad:{NFSU2_TR(0x75a0ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x801cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a0b3:{NFSU2_TR(0x75a0b3);
{goto L75a0c2;}
}
B75a0b5:L75a0b5:{c.instructions+=3;NFSU2_TR(0x75a0b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a0bb:{NFSU2_TR(0x75a0bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75a0bd:{NFSU2_TR(0x75a0bd);
if(r1(R+518)){{goto L75a0c2;}}
}
B75a0bf:L75a0bf:{c.instructions+=1;NFSU2_TR(0x75a0bf);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B75a0c2:L75a0c2:{c.instructions+=3;NFSU2_TR(0x75a0c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x801cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a0c8:{NFSU2_TR(0x75a0c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75a0ca:{NFSU2_TR(0x75a0ca);
if(r1(R+518)){{goto L75a134;}}
}
B75a0cc:L75a0cc:{c.instructions+=6;NFSU2_TR(0x75a0cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75a0d2:{NFSU2_TR(0x75a0d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4014ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a0d8:{NFSU2_TR(0x75a0d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75a0dc:{NFSU2_TR(0x75a0dc);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B75a0de:{NFSU2_TR(0x75a0de);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75a0e0:{NFSU2_TR(0x75a0e0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75a0e4;}}
}
B75a0e2:L75a0e2:{c.instructions+=1;NFSU2_TR(0x75a0e2);
__builtin_memmove((R+12),(R+4),4);
}
B75a0e4:L75a0e4:{c.instructions+=7;NFSU2_TR(0x75a0e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4014ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a0ea:{NFSU2_TR(0x75a0ea);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B75a0ec:{NFSU2_TR(0x75a0ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a0ed:{NFSU2_TR(0x75a0ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75a0f1:{NFSU2_TR(0x75a0f1);
__builtin_memmove((R+4),(R+12),4);
}
B75a0f3:{NFSU2_TR(0x75a0f3);
__builtin_memmove((R+0),(R+4),4);
}
B75a0f5:{NFSU2_TR(0x75a0f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75a0f8:L75a0f8:{c.instructions+=1;NFSU2_TR(0x75a0f8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75a0fa;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75a0f8u);}goto L75a0f8;}
}
B75a0fa:L75a0fa:{c.instructions+=2;NFSU2_TR(0x75a0fa);
__builtin_memmove((R+4),(R+0),4);
}
B75a0fc:{NFSU2_TR(0x75a0fc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B75a0ff:L75a0ff:{c.instructions+=1;NFSU2_TR(0x75a0ff);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L75a101;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75a0ffu);}goto L75a0ff;}
}
B75a101:L75a101:{c.instructions+=9;NFSU2_TR(0x75a101);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4014ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75a107:{NFSU2_TR(0x75a107);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75a10d:{NFSU2_TR(0x75a10d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a111:{NFSU2_TR(0x75a111);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B75a113:{NFSU2_TR(0x75a113);
__builtin_memmove((R+0),(R+8),4);
}
B75a115:{NFSU2_TR(0x75a115);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75a117:{NFSU2_TR(0x75a117);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4014ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a11d:{NFSU2_TR(0x75a11d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75a11e:{NFSU2_TR(0x75a11e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75a134;}}
}
B75a120:L75a120:{c.instructions+=4;NFSU2_TR(0x75a120);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75a122:{NFSU2_TR(0x75a122);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4010ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a128:{NFSU2_TR(0x75a128);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x400cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a12e:{NFSU2_TR(0x75a12e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x801cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a134:L75a134:{c.instructions+=2;NFSU2_TR(0x75a134);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75a13b:{NFSU2_TR(0x75a13b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75a15a;}}
}
B75a13d:L75a13d:{c.instructions+=10;NFSU2_TR(0x75a13d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75a141:{NFSU2_TR(0x75a141);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75a145:{NFSU2_TR(0x75a145);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75a147:{NFSU2_TR(0x75a147);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a149:{NFSU2_TR(0x75a149);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a14b:{NFSU2_TR(0x75a14b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a14d:{NFSU2_TR(0x75a14d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a14e:{NFSU2_TR(0x75a14e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a14f:{NFSU2_TR(0x75a14f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a150:{NFSU2_TR(0x75a150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a155ull));
TAIL_STATIC(0x74a6d0u,74a);
}
B75a155:L75a155:{c.instructions+=2;NFSU2_TR(0x75a155);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B75a158:{NFSU2_TR(0x75a158);
__builtin_memmove((R+12),(R+0),4);
}
B75a15a:L75a15a:{c.instructions+=2;NFSU2_TR(0x75a15a);
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
B75a15c:{NFSU2_TR(0x75a15c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75a172;}}
}
B75a15e:L75a15e:{c.instructions+=3;NFSU2_TR(0x75a15e);
u8 U[22];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75a162:{NFSU2_TR(0x75a162);
__builtin_memmove((R+0),(R+12),4);
}
B75a164:{NFSU2_TR(0x75a164);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75a174;}}
}
B75a166:L75a166:{c.instructions+=6;NFSU2_TR(0x75a166);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75a16a:{NFSU2_TR(0x75a16a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a16b:{NFSU2_TR(0x75a16b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75a16c:{NFSU2_TR(0x75a16c);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B75a170:{NFSU2_TR(0x75a170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75a171:{NFSU2_TR(0x75a171);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a172:L75a172:{c.instructions+=1;NFSU2_TR(0x75a172);
__builtin_memmove((R+0),(R+12),4);
}
B75a174:L75a174:{c.instructions+=4;NFSU2_TR(0x75a174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a175:{NFSU2_TR(0x75a175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75a176:{NFSU2_TR(0x75a176);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75a177:{NFSU2_TR(0x75a177);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a180:L75a180:{c.instructions+=6;NFSU2_TR(0x75a180);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a181:{NFSU2_TR(0x75a181);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75a185:{NFSU2_TR(0x75a185);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B75a187:{NFSU2_TR(0x75a187);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B75a18a:{NFSU2_TR(0x75a18a);
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
B75a18c:{NFSU2_TR(0x75a18c);
if(r1(R+518)){{goto L75a1cb;}}
}
B75a18e:L75a18e:{c.instructions+=9;NFSU2_TR(0x75a18e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a192:{NFSU2_TR(0x75a192);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75a196:{NFSU2_TR(0x75a196);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a197:{NFSU2_TR(0x75a197);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a19b:{NFSU2_TR(0x75a19b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a19c:{NFSU2_TR(0x75a19c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a19d:{NFSU2_TR(0x75a19d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a19e:{NFSU2_TR(0x75a19e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a19f:{NFSU2_TR(0x75a19f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a1a4ull));
TAIL_STATIC(0x74a760u,74a);
}
B75a1a4:L75a1a4:{c.instructions+=4;NFSU2_TR(0x75a1a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B75a1a7:{NFSU2_TR(0x75a1a7);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x73746174ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x73746174ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x73746174ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75a1ad:{NFSU2_TR(0x75a1ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a1ae:{NFSU2_TR(0x75a1ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75a1cb;}}
}
B75a1b0:L75a1b0:{c.instructions+=3;NFSU2_TR(0x75a1b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75a1b6:{NFSU2_TR(0x75a1b6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75a1b9:{NFSU2_TR(0x75a1b9);
if(r1(R+518)){{goto L75a1c9;}}
}
B75a1bb:L75a1bb:{c.instructions+=2;NFSU2_TR(0x75a1bb);
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
B75a1bd:{NFSU2_TR(0x75a1bd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75a1cb;}}
}
B75a1bf:L75a1bf:{c.instructions+=2;NFSU2_TR(0x75a1bf);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B75a1c2:{NFSU2_TR(0x75a1c2);
if(r1(R+518)){{goto L75a1cb;}}
}
B75a1c4:L75a1c4:{c.instructions+=2;NFSU2_TR(0x75a1c4);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75a1c7:{NFSU2_TR(0x75a1c7);
if(r1(R+518)){{goto L75a1cb;}}
}
B75a1c9:L75a1c9:{c.instructions+=1;NFSU2_TR(0x75a1c9);
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
B75a1cb:L75a1cb:{c.instructions+=2;NFSU2_TR(0x75a1cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75a1cc:{NFSU2_TR(0x75a1cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a1d0:L75a1d0:{c.instructions+=6;NFSU2_TR(0x75a1d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a1d4:{NFSU2_TR(0x75a1d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a1d5:{NFSU2_TR(0x75a1d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a1d6:{NFSU2_TR(0x75a1d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75a1da:{NFSU2_TR(0x75a1da);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75a1dc:{NFSU2_TR(0x75a1dc);
if(r1(R+518)){{goto L75a1e7;}}
}
B75a1de:L75a1de:{c.instructions+=2;NFSU2_TR(0x75a1de);
w4(R+4,u32(0x8ull));
}
B75a1e3:{NFSU2_TR(0x75a1e3);
__builtin_memmove((R+24),(R+0),4);
}
B75a1e5:L75a1e5:{c.instructions+=1;NFSU2_TR(0x75a1e5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75a1e7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75a1e5u);}goto L75a1e5;}
}
B75a1e7:L75a1e7:{c.instructions+=3;NFSU2_TR(0x75a1e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75a1eb:{NFSU2_TR(0x75a1eb);
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
B75a1ed:{NFSU2_TR(0x75a1ed);
if(r1(R+518)){{goto L75a1f9;}}
}
B75a1ef:L75a1ef:{c.instructions+=2;NFSU2_TR(0x75a1ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a1f2:{NFSU2_TR(0x75a1f2);
w4(R+4,u32(0xdull));
}
B75a1f7:L75a1f7:{c.instructions+=1;NFSU2_TR(0x75a1f7);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75a1f9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75a1f7u);}goto L75a1f7;}
}
B75a1f9:L75a1f9:{c.instructions+=4;NFSU2_TR(0x75a1f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75a1fa:{NFSU2_TR(0x75a1fa);
w4(R+0,u32(0x1ull));
}
B75a1ff:{NFSU2_TR(0x75a1ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a200:{NFSU2_TR(0x75a200);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a210:L75a210:{c.instructions+=7;NFSU2_TR(0x75a210);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a211:{NFSU2_TR(0x75a211);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a215:{NFSU2_TR(0x75a215);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a216:{NFSU2_TR(0x75a216);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75a21a:{NFSU2_TR(0x75a21a);
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
B75a21c:{NFSU2_TR(0x75a21c);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B75a222:{NFSU2_TR(0x75a222);
if(r1(R+518)){{goto L75a256;}}
}
B75a224:L75a224:{c.instructions+=8;NFSU2_TR(0x75a224);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a226:{NFSU2_TR(0x75a226);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a228:{NFSU2_TR(0x75a228);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10aull))));
__builtin_memmove((R+0),(U+0),4);
}
B75a22e:{NFSU2_TR(0x75a22e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a22f:{NFSU2_TR(0x75a22f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a230:{NFSU2_TR(0x75a230);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B75a236:{NFSU2_TR(0x75a236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75a23d:{NFSU2_TR(0x75a23d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a242ull));
{goto L75a430;}
}
B75a242:L75a242:{c.instructions+=7;NFSU2_TR(0x75a242);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a244:{NFSU2_TR(0x75a244);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a246:{NFSU2_TR(0x75a246);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B75a249:{NFSU2_TR(0x75a249);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75a24c:{NFSU2_TR(0x75a24c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a24d:{NFSU2_TR(0x75a24d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a24e:{NFSU2_TR(0x75a24e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a253ull));
{goto L75a430;}
}
B75a253:L75a253:{c.instructions+=1;NFSU2_TR(0x75a253);
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
B75a256:L75a256:{c.instructions+=4;NFSU2_TR(0x75a256);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75a258:{NFSU2_TR(0x75a258);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75a259:{NFSU2_TR(0x75a259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a25a:{NFSU2_TR(0x75a25a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a260:L75a260:{c.instructions+=4;NFSU2_TR(0x75a260);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a261:{NFSU2_TR(0x75a261);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a265:{NFSU2_TR(0x75a265);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B75a268:{NFSU2_TR(0x75a268);
if(r1(R+518)){{goto L75a287;}}
}
B75a26a:L75a26a:{c.instructions+=7;NFSU2_TR(0x75a26a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a26e:{NFSU2_TR(0x75a26e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75a272:{NFSU2_TR(0x75a272);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a273:{NFSU2_TR(0x75a273);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a274:{NFSU2_TR(0x75a274);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B75a277:{NFSU2_TR(0x75a277);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a278:{NFSU2_TR(0x75a278);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a27dull));
{goto L75a590;}
}
B75a27d:L75a27d:{c.instructions+=2;NFSU2_TR(0x75a27d);
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
B75a280:{NFSU2_TR(0x75a280);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75a287:L75a287:{c.instructions+=2;NFSU2_TR(0x75a287);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a288:{NFSU2_TR(0x75a288);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a290:L75a290:{c.instructions+=6;NFSU2_TR(0x75a290);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x68ull))));
}
B75a293:{NFSU2_TR(0x75a293);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75a298:{NFSU2_TR(0x75a298);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a29c:{NFSU2_TR(0x75a29c);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a2a0:{NFSU2_TR(0x75a2a0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B75a2a3:{NFSU2_TR(0x75a2a3);
if(r1(R+518)){{goto L75a32b;}}
}
B75a2a9:L75a2a9:{c.instructions+=3;NFSU2_TR(0x75a2a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75a2ac:{NFSU2_TR(0x75a2ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75a2ae:{NFSU2_TR(0x75a2ae);
if(r1(R+518)){{goto L75a32b;}}
}
B75a2b0:L75a2b0:{c.instructions+=4;NFSU2_TR(0x75a2b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a2b1:{NFSU2_TR(0x75a2b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a2b5:{NFSU2_TR(0x75a2b5);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75a2b8:{NFSU2_TR(0x75a2b8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75a2cb;}}
}
B75a2ba:L75a2ba:{c.instructions+=4;NFSU2_TR(0x75a2ba);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B75a2bd:{NFSU2_TR(0x75a2bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a2be:{NFSU2_TR(0x75a2be);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75a2c2:{NFSU2_TR(0x75a2c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a2c7ull));
TAIL_STATIC(0x76115eu,761);
}
B75a2c7:L75a2c7:{c.instructions+=2;NFSU2_TR(0x75a2c7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x68ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x68ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75a2ca:{NFSU2_TR(0x75a2ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a2cb:L75a2cb:{c.instructions+=5;NFSU2_TR(0x75a2cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a2cc:{NFSU2_TR(0x75a2cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75a2d0:{NFSU2_TR(0x75a2d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a2d1:{NFSU2_TR(0x75a2d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a2d2:{NFSU2_TR(0x75a2d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a2d7ull));
{goto L75aeb0;}
}
B75a2d7:L75a2d7:{c.instructions+=7;NFSU2_TR(0x75a2d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75a2de:{NFSU2_TR(0x75a2de);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75a2e1:{NFSU2_TR(0x75a2e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a2e2:{NFSU2_TR(0x75a2e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75a2e6:{NFSU2_TR(0x75a2e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a2e7:{NFSU2_TR(0x75a2e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a2e8:{NFSU2_TR(0x75a2e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a2edull));
{goto L75aee0;}
}
B75a2ed:L75a2ed:{c.instructions+=6;NFSU2_TR(0x75a2ed);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a2ef:{NFSU2_TR(0x75a2ef);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75a2f3:{NFSU2_TR(0x75a2f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a2f4:{NFSU2_TR(0x75a2f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75a2f8:{NFSU2_TR(0x75a2f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a2f9:{NFSU2_TR(0x75a2f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a2feull));
{goto L75af40;}
}
B75a2fe:L75a2fe:{c.instructions+=5;NFSU2_TR(0x75a2fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B75a301:{NFSU2_TR(0x75a301);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B75a303:{NFSU2_TR(0x75a303);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75a307:{NFSU2_TR(0x75a307);
w4(R+4,u32(0x2ull));
}
B75a30c:{NFSU2_TR(0x75a30c);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B75a310:L75a310:{c.instructions+=1;NFSU2_TR(0x75a310);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75a312;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75a310u);}goto L75a310;}}
}
B75a312:L75a312:{c.instructions+=9;NFSU2_TR(0x75a312);
__builtin_memmove((R+0),(R+8),4);
}
B75a314:{NFSU2_TR(0x75a314);
__builtin_memmove((R+0),(R+518),1);
}
B75a317:{NFSU2_TR(0x75a317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75a318:{NFSU2_TR(0x75a318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75a319:{NFSU2_TR(0x75a319);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a31a:{NFSU2_TR(0x75a31a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B75a31b:{NFSU2_TR(0x75a31b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B75a31e:{NFSU2_TR(0x75a31e);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75a322:{NFSU2_TR(0x75a322);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a327ull));
TAIL_STATIC(0x76115eu,761);
}
B75a327:L75a327:{c.instructions+=2;NFSU2_TR(0x75a327);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x68ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x68ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75a32a:{NFSU2_TR(0x75a32a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a32b:L75a32b:{c.instructions+=3;NFSU2_TR(0x75a32b);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75a32f:{NFSU2_TR(0x75a32f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75a331:{NFSU2_TR(0x75a331);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a336ull));
TAIL_STATIC(0x76115eu,761);
}
B75a336:L75a336:{c.instructions+=2;NFSU2_TR(0x75a336);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x68ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x68ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75a339:{NFSU2_TR(0x75a339);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a340:L75a340:{c.instructions+=3;NFSU2_TR(0x75a340);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a344:{NFSU2_TR(0x75a344);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B75a347:{NFSU2_TR(0x75a347);
if(r1(R+518)){{goto L75a35d;}}
}
B75a349:L75a349:{c.instructions+=4;NFSU2_TR(0x75a349);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75a34c:{NFSU2_TR(0x75a34c);
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
B75a34e:{NFSU2_TR(0x75a34e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a352:{NFSU2_TR(0x75a352);
if(r1(R+518)){{goto L75a361;}}
}
B75a354:L75a354:{c.instructions+=2;NFSU2_TR(0x75a354);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75a357:{NFSU2_TR(0x75a357);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75a361;}}
}
B75a359:L75a359:{c.instructions+=2;NFSU2_TR(0x75a359);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75a35c:{NFSU2_TR(0x75a35c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a35d:L75a35d:{c.instructions+=1;NFSU2_TR(0x75a35d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a361:L75a361:{c.instructions+=1;NFSU2_TR(0x75a361);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a370:L75a370:{c.instructions+=4;NFSU2_TR(0x75a370);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a374:{NFSU2_TR(0x75a374);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B75a377:{NFSU2_TR(0x75a377);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a37b:{NFSU2_TR(0x75a37b);
if(r1(R+518)){{goto L75a380;}}
}
B75a37d:L75a37d:{c.instructions+=1;NFSU2_TR(0x75a37d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75a380:L75a380:{c.instructions+=1;NFSU2_TR(0x75a380);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a390:L75a390:{c.instructions+=10;NFSU2_TR(0x75a390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x58ull))));
}
B75a393:{NFSU2_TR(0x75a393);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75a398:{NFSU2_TR(0x75a398);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a39c:{NFSU2_TR(0x75a39c);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a3a0:{NFSU2_TR(0x75a3a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B75a3a2:{NFSU2_TR(0x75a3a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a3a3:{NFSU2_TR(0x75a3a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a3a7:{NFSU2_TR(0x75a3a7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
}
B75a3aa:{NFSU2_TR(0x75a3aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75a3ac:{NFSU2_TR(0x75a3ac);
if(r1(R+518)){{goto L75a3f1;}}
}
B75a3ae:L75a3ae:{c.instructions+=2;NFSU2_TR(0x75a3ae);
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
B75a3b0:{NFSU2_TR(0x75a3b0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75a3c3;}}
}
B75a3b2:L75a3b2:{c.instructions+=4;NFSU2_TR(0x75a3b2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B75a3b5:{NFSU2_TR(0x75a3b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a3b6:{NFSU2_TR(0x75a3b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75a3ba:{NFSU2_TR(0x75a3ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a3bfull));
TAIL_STATIC(0x76115eu,761);
}
B75a3bf:L75a3bf:{c.instructions+=2;NFSU2_TR(0x75a3bf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75a3c2:{NFSU2_TR(0x75a3c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a3c3:L75a3c3:{c.instructions+=4;NFSU2_TR(0x75a3c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75a3c7:{NFSU2_TR(0x75a3c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a3c8:{NFSU2_TR(0x75a3c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a3c9:{NFSU2_TR(0x75a3c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a3ceull));
{goto L75aeb0;}
}
B75a3ce:L75a3ce:{c.instructions+=6;NFSU2_TR(0x75a3ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75a3d2:{NFSU2_TR(0x75a3d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a3d3:{NFSU2_TR(0x75a3d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75a3d7:{NFSU2_TR(0x75a3d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a3d8:{NFSU2_TR(0x75a3d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a3d9:{NFSU2_TR(0x75a3d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a3deull));
{goto L75aee0;}
}
B75a3de:L75a3de:{c.instructions+=6;NFSU2_TR(0x75a3de);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a3e0:{NFSU2_TR(0x75a3e0);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B75a3e2:{NFSU2_TR(0x75a3e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B75a3e6:{NFSU2_TR(0x75a3e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a3e7:{NFSU2_TR(0x75a3e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a3e8:{NFSU2_TR(0x75a3e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a3edull));
{goto L75af40;}
}
B75a3ed:L75a3ed:{c.instructions+=2;NFSU2_TR(0x75a3ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B75a3f0:{NFSU2_TR(0x75a3f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75a3f1:L75a3f1:{c.instructions+=4;NFSU2_TR(0x75a3f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75a3f5:{NFSU2_TR(0x75a3f5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75a3f7:{NFSU2_TR(0x75a3f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a3f8:{NFSU2_TR(0x75a3f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75a3fdull));
TAIL_STATIC(0x76115eu,761);
}
B75a3fd:L75a3fd:{c.instructions+=2;NFSU2_TR(0x75a3fd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75a400:{NFSU2_TR(0x75a400);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a410:L75a410:{c.instructions+=3;NFSU2_TR(0x75a410);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a414:{NFSU2_TR(0x75a414);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B75a417:{NFSU2_TR(0x75a417);
if(r1(R+518)){{goto L75a427;}}
}
B75a419:L75a419:{c.instructions+=3;NFSU2_TR(0x75a419);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10aull))));
}
B75a41e:{NFSU2_TR(0x75a41e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a422:{NFSU2_TR(0x75a422);
{goto L75a590;}
}
B75a427:L75a427:{c.instructions+=1;NFSU2_TR(0x75a427);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a430:L75a430:{c.instructions+=4;NFSU2_TR(0x75a430);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75a434:{NFSU2_TR(0x75a434);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B75a437:{NFSU2_TR(0x75a437);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75a43a:{NFSU2_TR(0x75a43a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75a441;}}
}
B75a43c:L75a43c:{c.instructions+=1;NFSU2_TR(0x75a43c);
w4(R+4,u32(0x1ull));
}
B75a441:L75a441:{c.instructions+=8;NFSU2_TR(0x75a441);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a442:{NFSU2_TR(0x75a442);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a443:{NFSU2_TR(0x75a443);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B75a445:{NFSU2_TR(0x75a445);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a446:{NFSU2_TR(0x75a446);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a44a:{NFSU2_TR(0x75a44a);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B75a44c:{NFSU2_TR(0x75a44c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a44f:{NFSU2_TR(0x75a44f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75a451:L75a451:{c.instructions+=4;NFSU2_TR(0x75a451);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B75a455:{NFSU2_TR(0x75a455);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75a456:{NFSU2_TR(0x75a456);
w1(R+512,u8((r4(R+0))<(u32(0x100ull))));
}
B75a45b:{NFSU2_TR(0x75a45b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75a451u);}goto L75a451;}}
}
B75a45d:L75a45d:{c.instructions+=3;NFSU2_TR(0x75a45d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a461:{NFSU2_TR(0x75a461);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75a463:{NFSU2_TR(0x75a463);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75a584;}}
}
B75a469:L75a469:{c.instructions+=2;NFSU2_TR(0x75a469);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75a46b:{NFSU2_TR(0x75a46b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75a584;}}
}
B75a471:L75a471:{c.instructions+=13;NFSU2_TR(0x75a471);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B75a474:{NFSU2_TR(0x75a474);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B75a476:{NFSU2_TR(0x75a476);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a47a:{NFSU2_TR(0x75a47a);
w4(R+0,u32(0x1ull));
}
B75a47f:{NFSU2_TR(0x75a47f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B75a481:{NFSU2_TR(0x75a481);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a485:{NFSU2_TR(0x75a485);
w4(R+0,u32(0xfffffffeull));
}
B75a48a:{NFSU2_TR(0x75a48a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B75a48c:{NFSU2_TR(0x75a48c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a48d:{NFSU2_TR(0x75a48d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75a491:{NFSU2_TR(0x75a491);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a495:{NFSU2_TR(0x75a495);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a499:{NFSU2_TR(0x75a499);
__builtin_memmove((R+16),(R+16),4);
}
B75a4a0:L75a4a0:{c.instructions+=3;NFSU2_TR(0x75a4a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75a4a8:{NFSU2_TR(0x75a4a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75a4ab:{NFSU2_TR(0x75a4ab);
{goto L75a4b0;}
}
B75a4b0:L75a4b0:{c.instructions+=65;NFSU2_TR(0x75a4b0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B75a4b2:{NFSU2_TR(0x75a4b2);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a4b6:{NFSU2_TR(0x75a4b6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B75a4b8:{NFSU2_TR(0x75a4b8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B75a4ba:{NFSU2_TR(0x75a4ba);
u8 U[56];
w8(U+0,u64(r4(R+20)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75a4ba);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75a4ba);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B75a4bc:{NFSU2_TR(0x75a4bc);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B75a4bf:{NFSU2_TR(0x75a4bf);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))+u32(r1(U+4))));
}
B75a4c3:{NFSU2_TR(0x75a4c3);
w1(R+12,u8(u32(r1(R+12))+u32(r1(R+0))));
}
B75a4c5:{NFSU2_TR(0x75a4c5);
w4(R+8,u32(r1(R+12)));
}
B75a4c8:{NFSU2_TR(0x75a4c8);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B75a4cc:{NFSU2_TR(0x75a4cc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B75a4ce:{NFSU2_TR(0x75a4ce);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B75a4d0:{NFSU2_TR(0x75a4d0);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B75a4d4:{NFSU2_TR(0x75a4d4);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B75a4d6:{NFSU2_TR(0x75a4d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75a4d9:{NFSU2_TR(0x75a4d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75a4dd:{NFSU2_TR(0x75a4dd);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a4e1:{NFSU2_TR(0x75a4e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75a4e4:{NFSU2_TR(0x75a4e4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B75a4e6:{NFSU2_TR(0x75a4e6);
u8 U[56];
w8(U+0,u64(r4(R+20)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75a4e6);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75a4e6);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B75a4e8:{NFSU2_TR(0x75a4e8);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B75a4eb:{NFSU2_TR(0x75a4eb);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))+u32(r1(U+4))));
}
B75a4ef:{NFSU2_TR(0x75a4ef);
w1(R+12,u8(u32(r1(R+12))+u32(r1(R+0))));
}
B75a4f1:{NFSU2_TR(0x75a4f1);
w4(R+8,u32(r1(R+12)));
}
B75a4f4:{NFSU2_TR(0x75a4f4);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B75a4f8:{NFSU2_TR(0x75a4f8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B75a4fa:{NFSU2_TR(0x75a4fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a4fd:{NFSU2_TR(0x75a4fd);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B75a501:{NFSU2_TR(0x75a501);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B75a503:{NFSU2_TR(0x75a503);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75a506:{NFSU2_TR(0x75a506);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a50a:{NFSU2_TR(0x75a50a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a50e:{NFSU2_TR(0x75a50e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B75a510:{NFSU2_TR(0x75a510);
u8 U[56];
w8(U+0,u64(r4(R+20)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75a510);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75a510);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B75a512:{NFSU2_TR(0x75a512);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75a516:{NFSU2_TR(0x75a516);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B75a519:{NFSU2_TR(0x75a519);
w1(R+8,u8(u32(r1(R+8))+u32(r1(R+0))));
}
B75a51b:{NFSU2_TR(0x75a51b);
w1(R+12,u8(u32(r1(R+12))+u32(r1(R+8))));
}
B75a51d:{NFSU2_TR(0x75a51d);
w4(R+0,u32(r1(R+12)));
}
B75a520:{NFSU2_TR(0x75a520);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B75a524:{NFSU2_TR(0x75a524);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B75a528:{NFSU2_TR(0x75a528);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a52b:{NFSU2_TR(0x75a52b);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B75a52f:{NFSU2_TR(0x75a52f);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B75a531:{NFSU2_TR(0x75a531);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75a534:{NFSU2_TR(0x75a534);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75a538:{NFSU2_TR(0x75a538);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a53c:{NFSU2_TR(0x75a53c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75a53f:{NFSU2_TR(0x75a53f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B75a541:{NFSU2_TR(0x75a541);
u8 U[56];
w8(U+0,u64(r4(R+20)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75a541);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75a541);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B75a543:{NFSU2_TR(0x75a543);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B75a546:{NFSU2_TR(0x75a546);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B75a549:{NFSU2_TR(0x75a549);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))+u32(r1(U+4))));
}
B75a54d:{NFSU2_TR(0x75a54d);
w1(R+12,u8(u32(r1(R+12))+u32(r1(R+0))));
}
B75a54f:{NFSU2_TR(0x75a54f);
w4(R+8,u32(r1(R+12)));
}
B75a552:{NFSU2_TR(0x75a552);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B75a556:{NFSU2_TR(0x75a556);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B75a558:{NFSU2_TR(0x75a558);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a55b:{NFSU2_TR(0x75a55b);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B75a55f:{NFSU2_TR(0x75a55f);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B75a561:{NFSU2_TR(0x75a561);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75a566:{NFSU2_TR(0x75a566);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a56a:{NFSU2_TR(0x75a56a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B75a56d:{NFSU2_TR(0x75a56d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x100ull))));
}
B75a573:{NFSU2_TR(0x75a573);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75a4b0u);}goto L75a4b0;}}
}
B75a579:L75a579:{c.instructions+=2;NFSU2_TR(0x75a579);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75a57d:{NFSU2_TR(0x75a57d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75a4a0u);}goto L75a4a0;}}
}
B75a583:L75a583:{c.instructions+=1;NFSU2_TR(0x75a583);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75a584:L75a584:{c.instructions+=5;NFSU2_TR(0x75a584);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a585:{NFSU2_TR(0x75a585);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75a586:{NFSU2_TR(0x75a586);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75a587:{NFSU2_TR(0x75a587);
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
B75a58a:{NFSU2_TR(0x75a58a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a590:L75a590:{c.instructions+=7;NFSU2_TR(0x75a590);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75a594:{NFSU2_TR(0x75a594);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75a598:{NFSU2_TR(0x75a598);
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
B75a59a:{NFSU2_TR(0x75a59a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75a59d:{NFSU2_TR(0x75a59d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a59e:{NFSU2_TR(0x75a59e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+12),(U+0),1);
}
B75a5a0:{NFSU2_TR(0x75a5a0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75a5f1;}}
}
B75a5a2:L75a5a2:{c.instructions+=6;NFSU2_TR(0x75a5a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a5a3:{NFSU2_TR(0x75a5a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a5a7:{NFSU2_TR(0x75a5a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a5a8:{NFSU2_TR(0x75a5a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a5a9:{NFSU2_TR(0x75a5a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a5ad:{NFSU2_TR(0x75a5ad);
__builtin_memmove((R+4),(R+4),4);
}
B75a5b0:L75a5b0:{c.instructions+=22;NFSU2_TR(0x75a5b0);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B75a5b2:{NFSU2_TR(0x75a5b2);
w4(R+4,u32(r1(R+12)));
}
B75a5b5:{NFSU2_TR(0x75a5b5);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75a5b9:{NFSU2_TR(0x75a5b9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B75a5bb:{NFSU2_TR(0x75a5bb);
w1(R+0,u8(u32(r1(R+0))+u32(r1(R+4))));
}
B75a5bd:{NFSU2_TR(0x75a5bd);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a5c1:{NFSU2_TR(0x75a5c1);
w4(R+0,u32(r1(R+0)));
}
B75a5c4:{NFSU2_TR(0x75a5c4);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a5c8:{NFSU2_TR(0x75a5c8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75a5ca:{NFSU2_TR(0x75a5ca);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B75a5cc:{NFSU2_TR(0x75a5cc);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B75a5ce:{NFSU2_TR(0x75a5ce);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+28)),r1(U+0));
}
B75a5d0:{NFSU2_TR(0x75a5d0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B75a5d2:{NFSU2_TR(0x75a5d2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B75a5d7:{NFSU2_TR(0x75a5d7);
u8 U[13];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B75a5db:{NFSU2_TR(0x75a5db);
u8 U[1];
w1(R+512,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
w1(U+0,u8(u32(r1(U+0))^u32(r1(R+4))));
s1(u32(r4(R+20)),r1(U+0));
}
B75a5de:{NFSU2_TR(0x75a5de);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a5e2:{NFSU2_TR(0x75a5e2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B75a5e3:{NFSU2_TR(0x75a5e3);
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
B75a5e4:{NFSU2_TR(0x75a5e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75a5e8:{NFSU2_TR(0x75a5e8);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75a5ec:{NFSU2_TR(0x75a5ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75a5b0u);}goto L75a5b0;}}
}
B75a5ee:L75a5ee:{c.instructions+=3;NFSU2_TR(0x75a5ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75a5ef:{NFSU2_TR(0x75a5ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75a5f0:{NFSU2_TR(0x75a5f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75a5f1:L75a5f1:{c.instructions+=4;NFSU2_TR(0x75a5f1);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+8)),r1(U+0));
}
B75a5f3:{NFSU2_TR(0x75a5f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75a5f6:{NFSU2_TR(0x75a5f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75a5f7:{NFSU2_TR(0x75a5f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75a600:L75a600:{c.instructions+=8;NFSU2_TR(0x75a600);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a604:{NFSU2_TR(0x75a604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B75a607:{NFSU2_TR(0x75a607);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a608:{NFSU2_TR(0x75a608);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a609:{NFSU2_TR(0x75a609);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a60a:{NFSU2_TR(0x75a60a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75a60b:{NFSU2_TR(0x75a60b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75a60e:{NFSU2_TR(0x75a60e);
w4(R+24,u32(0x10ull));
}
B75a613:L75a613:{c.instructions+=18;NFSU2_TR(0x75a613);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B75a617:{NFSU2_TR(0x75a617);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B75a618:{NFSU2_TR(0x75a618);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B75a61c:{NFSU2_TR(0x75a61c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B75a61d:{NFSU2_TR(0x75a61d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75a620:{NFSU2_TR(0x75a620);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B75a622:{NFSU2_TR(0x75a622);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B75a626:{NFSU2_TR(0x75a626);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B75a627:{NFSU2_TR(0x75a627);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75a62a:{NFSU2_TR(0x75a62a);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B75a62c:{NFSU2_TR(0x75a62c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B75a630:{NFSU2_TR(0x75a630);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B75a631:{NFSU2_TR(0x75a631);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75a634:{NFSU2_TR(0x75a634);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B75a635:{NFSU2_TR(0x75a635);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B75a637:{NFSU2_TR(0x75a637);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75a639:{NFSU2_TR(0x75a639);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75a63d:{NFSU2_TR(0x75a63d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75a613u);}goto L75a613;}}
}
B75a63f:L75a63f:{c.instructions+=773;NFSU2_TR(0x75a63f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75a642:{NFSU2_TR(0x75a642);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75a645:{NFSU2_TR(0x75a645);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75a648:{NFSU2_TR(0x75a648);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a64b:{NFSU2_TR(0x75a64b);
__builtin_memmove((R+4),(R+24),4);
}
B75a64d:{NFSU2_TR(0x75a64d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+8))));
}
B75a64f:{NFSU2_TR(0x75a64f);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+12))));
}
B75a651:{NFSU2_TR(0x75a651);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+24))));
}
B75a653:{NFSU2_TR(0x75a653);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B75a655:{NFSU2_TR(0x75a655);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75a659:{NFSU2_TR(0x75a659);
u8 U[12];
w4(U+0,u32(u32(u32(0xd76aa478ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B75a660:{NFSU2_TR(0x75a660);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a664:{NFSU2_TR(0x75a664);
__builtin_memmove((R+0),(R+4),4);
}
B75a666:{NFSU2_TR(0x75a666);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75a669:{NFSU2_TR(0x75a669);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75a66c:{NFSU2_TR(0x75a66c);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B75a66e:{NFSU2_TR(0x75a66e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B75a670:{NFSU2_TR(0x75a670);
__builtin_memmove((R+4),(R+8),4);
}
B75a672:{NFSU2_TR(0x75a672);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+12))));
}
B75a674:{NFSU2_TR(0x75a674);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B75a676:{NFSU2_TR(0x75a676);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+8))));
}
B75a678:{NFSU2_TR(0x75a678);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B75a67a:{NFSU2_TR(0x75a67a);
u8 U[12];
w4(U+0,u32(u32(u32(0xe8c7b756ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75a681:{NFSU2_TR(0x75a681);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a685:{NFSU2_TR(0x75a685);
__builtin_memmove((R+4),(R+24),4);
}
B75a687:{NFSU2_TR(0x75a687);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B75a68a:{NFSU2_TR(0x75a68a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75a68e:{NFSU2_TR(0x75a68e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75a691:{NFSU2_TR(0x75a691);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+24))));
}
B75a693:{NFSU2_TR(0x75a693);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B75a695:{NFSU2_TR(0x75a695);
__builtin_memmove((R+24),(R+12),4);
}
B75a697:{NFSU2_TR(0x75a697);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+0))));
}
B75a699:{NFSU2_TR(0x75a699);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+4))));
}
B75a69b:{NFSU2_TR(0x75a69b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+12))));
}
B75a69d:{NFSU2_TR(0x75a69d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B75a69f:{NFSU2_TR(0x75a69f);
u8 U[12];
w4(U+0,u32(u32(u32(0x242070dbull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75a6a6:{NFSU2_TR(0x75a6a6);
__builtin_memmove((R+8),(R+24),4);
}
B75a6a8:{NFSU2_TR(0x75a6a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B75a6ab:{NFSU2_TR(0x75a6ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a6af:{NFSU2_TR(0x75a6af);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75a6b2:{NFSU2_TR(0x75a6b2);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B75a6b4:{NFSU2_TR(0x75a6b4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B75a6b6:{NFSU2_TR(0x75a6b6);
__builtin_memmove((R+24),(R+4),4);
}
B75a6b8:{NFSU2_TR(0x75a6b8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+0))));
}
B75a6ba:{NFSU2_TR(0x75a6ba);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B75a6bc:{NFSU2_TR(0x75a6bc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+0))));
}
B75a6be:{NFSU2_TR(0x75a6be);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B75a6c0:{NFSU2_TR(0x75a6c0);
u8 U[12];
w4(U+0,u32(u32(u32(0xc1bdceeeull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a6c7:{NFSU2_TR(0x75a6c7);
__builtin_memmove((R+24),(R+28),4);
}
B75a6c9:{NFSU2_TR(0x75a6c9);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75a6cc:{NFSU2_TR(0x75a6cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B75a6cf:{NFSU2_TR(0x75a6cf);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75a6d1:{NFSU2_TR(0x75a6d1);
__builtin_memmove((R+28),(R+4),4);
}
B75a6d3:{NFSU2_TR(0x75a6d3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a6d5:{NFSU2_TR(0x75a6d5);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75a6d7:{NFSU2_TR(0x75a6d7);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B75a6d9:{NFSU2_TR(0x75a6d9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75a6db:{NFSU2_TR(0x75a6db);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a6dd:{NFSU2_TR(0x75a6dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a6e1:{NFSU2_TR(0x75a6e1);
u8 U[12];
w4(U+0,u32(u32(u32(0xf57c0fafull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a6e8:{NFSU2_TR(0x75a6e8);
__builtin_memmove((R+0),(R+28),4);
}
B75a6ea:{NFSU2_TR(0x75a6ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a6ed:{NFSU2_TR(0x75a6ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75a6f0:{NFSU2_TR(0x75a6f0);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B75a6f2:{NFSU2_TR(0x75a6f2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B75a6f4:{NFSU2_TR(0x75a6f4);
__builtin_memmove((R+28),(R+8),4);
}
B75a6f6:{NFSU2_TR(0x75a6f6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75a6f8:{NFSU2_TR(0x75a6f8);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+0))));
}
B75a6fa:{NFSU2_TR(0x75a6fa);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a6fc:{NFSU2_TR(0x75a6fc);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a6fe:{NFSU2_TR(0x75a6fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a702:{NFSU2_TR(0x75a702);
u8 U[12];
w4(U+0,u32(u32(u32(0x4787c62aull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a709:{NFSU2_TR(0x75a709);
__builtin_memmove((R+4),(R+28),4);
}
B75a70b:{NFSU2_TR(0x75a70b);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a70e:{NFSU2_TR(0x75a70e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75a711:{NFSU2_TR(0x75a711);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B75a713:{NFSU2_TR(0x75a713);
__builtin_memmove((R+28),(R+24),4);
}
B75a715:{NFSU2_TR(0x75a715);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B75a717:{NFSU2_TR(0x75a717);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75a719:{NFSU2_TR(0x75a719);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B75a71b:{NFSU2_TR(0x75a71b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75a71d:{NFSU2_TR(0x75a71d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a71f:{NFSU2_TR(0x75a71f);
u8 U[12];
w4(U+0,u32(u32(u32(0xa8304613ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a726:{NFSU2_TR(0x75a726);
__builtin_memmove((R+8),(R+28),4);
}
B75a728:{NFSU2_TR(0x75a728);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a72b:{NFSU2_TR(0x75a72b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a72f:{NFSU2_TR(0x75a72f);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75a732:{NFSU2_TR(0x75a732);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75a734:{NFSU2_TR(0x75a734);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B75a736:{NFSU2_TR(0x75a736);
__builtin_memmove((R+28),(R+4),4);
}
B75a738:{NFSU2_TR(0x75a738);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75a73a:{NFSU2_TR(0x75a73a);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B75a73c:{NFSU2_TR(0x75a73c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75a73e:{NFSU2_TR(0x75a73e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a740:{NFSU2_TR(0x75a740);
u8 U[12];
w4(U+0,u32(u32(u32(0xfd469501ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a747:{NFSU2_TR(0x75a747);
__builtin_memmove((R+24),(R+28),4);
}
B75a749:{NFSU2_TR(0x75a749);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75a74c:{NFSU2_TR(0x75a74c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a750:{NFSU2_TR(0x75a750);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B75a753:{NFSU2_TR(0x75a753);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75a755:{NFSU2_TR(0x75a755);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75a757:{NFSU2_TR(0x75a757);
__builtin_memmove((R+28),(R+4),4);
}
B75a759:{NFSU2_TR(0x75a759);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a75b:{NFSU2_TR(0x75a75b);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B75a75d:{NFSU2_TR(0x75a75d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75a75f:{NFSU2_TR(0x75a75f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a761:{NFSU2_TR(0x75a761);
u8 U[12];
w4(U+0,u32(u32(u32(0x698098d8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a768:{NFSU2_TR(0x75a768);
__builtin_memmove((R+0),(R+28),4);
}
B75a76a:{NFSU2_TR(0x75a76a);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a76d:{NFSU2_TR(0x75a76d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a771:{NFSU2_TR(0x75a771);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75a774:{NFSU2_TR(0x75a774);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B75a776:{NFSU2_TR(0x75a776);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B75a778:{NFSU2_TR(0x75a778);
__builtin_memmove((R+28),(R+8),4);
}
B75a77a:{NFSU2_TR(0x75a77a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75a77c:{NFSU2_TR(0x75a77c);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+0))));
}
B75a77e:{NFSU2_TR(0x75a77e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a780:{NFSU2_TR(0x75a780);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a782:{NFSU2_TR(0x75a782);
u8 U[12];
w4(U+0,u32(u32(u32(0x8b44f7afull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a789:{NFSU2_TR(0x75a789);
__builtin_memmove((R+4),(R+28),4);
}
B75a78b:{NFSU2_TR(0x75a78b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a78f:{NFSU2_TR(0x75a78f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a792:{NFSU2_TR(0x75a792);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75a795:{NFSU2_TR(0x75a795);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B75a797:{NFSU2_TR(0x75a797);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B75a799:{NFSU2_TR(0x75a799);
__builtin_memmove((R+28),(R+24),4);
}
B75a79b:{NFSU2_TR(0x75a79b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75a79d:{NFSU2_TR(0x75a79d);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B75a79f:{NFSU2_TR(0x75a79f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75a7a1:{NFSU2_TR(0x75a7a1);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a7a3:{NFSU2_TR(0x75a7a3);
u8 U[12];
w4(U+0,u32(u32(u32(0xffff5bb1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a7aa:{NFSU2_TR(0x75a7aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a7ae:{NFSU2_TR(0x75a7ae);
__builtin_memmove((R+8),(R+28),4);
}
B75a7b0:{NFSU2_TR(0x75a7b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a7b3:{NFSU2_TR(0x75a7b3);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75a7b6:{NFSU2_TR(0x75a7b6);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75a7b8:{NFSU2_TR(0x75a7b8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B75a7ba:{NFSU2_TR(0x75a7ba);
__builtin_memmove((R+28),(R+4),4);
}
B75a7bc:{NFSU2_TR(0x75a7bc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75a7be:{NFSU2_TR(0x75a7be);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B75a7c0:{NFSU2_TR(0x75a7c0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75a7c2:{NFSU2_TR(0x75a7c2);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a7c4:{NFSU2_TR(0x75a7c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a7c8:{NFSU2_TR(0x75a7c8);
u8 U[12];
w4(U+0,u32(u32(u32(0x895cd7beull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a7cf:{NFSU2_TR(0x75a7cf);
__builtin_memmove((R+24),(R+28),4);
}
B75a7d1:{NFSU2_TR(0x75a7d1);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75a7d4:{NFSU2_TR(0x75a7d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B75a7d7:{NFSU2_TR(0x75a7d7);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75a7d9:{NFSU2_TR(0x75a7d9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75a7db:{NFSU2_TR(0x75a7db);
__builtin_memmove((R+28),(R+4),4);
}
B75a7dd:{NFSU2_TR(0x75a7dd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a7df:{NFSU2_TR(0x75a7df);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B75a7e1:{NFSU2_TR(0x75a7e1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75a7e3:{NFSU2_TR(0x75a7e3);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a7e5:{NFSU2_TR(0x75a7e5);
u8 U[12];
w4(U+0,u32(u32(u32(0x6b901122ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a7ec:{NFSU2_TR(0x75a7ec);
__builtin_memmove((R+0),(R+28),4);
}
B75a7ee:{NFSU2_TR(0x75a7ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75a7f1:{NFSU2_TR(0x75a7f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a7f4:{NFSU2_TR(0x75a7f4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B75a7f6:{NFSU2_TR(0x75a7f6);
__builtin_memmove((R+28),(R+8),4);
}
B75a7f8:{NFSU2_TR(0x75a7f8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B75a7fa:{NFSU2_TR(0x75a7fa);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75a7fc:{NFSU2_TR(0x75a7fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a800:{NFSU2_TR(0x75a800);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+0))));
}
B75a802:{NFSU2_TR(0x75a802);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a804:{NFSU2_TR(0x75a804);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a806:{NFSU2_TR(0x75a806);
u8 U[12];
w4(U+0,u32(u32(u32(0xfd987193ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B75a80d:{NFSU2_TR(0x75a80d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a811:{NFSU2_TR(0x75a811);
__builtin_memmove((R+28),(R+4),4);
}
B75a813:{NFSU2_TR(0x75a813);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75a816:{NFSU2_TR(0x75a816);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75a819:{NFSU2_TR(0x75a819);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B75a81b:{NFSU2_TR(0x75a81b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B75a81d:{NFSU2_TR(0x75a81d);
__builtin_memmove((R+4),(R+24),4);
}
B75a81f:{NFSU2_TR(0x75a81f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B75a821:{NFSU2_TR(0x75a821);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B75a823:{NFSU2_TR(0x75a823);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+24))));
}
B75a825:{NFSU2_TR(0x75a825);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B75a827:{NFSU2_TR(0x75a827);
u8 U[12];
w4(U+0,u32(u32(u32(0xa679438eull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B75a82e:{NFSU2_TR(0x75a82e);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a832:{NFSU2_TR(0x75a832);
__builtin_memmove((R+4),(R+8),4);
}
B75a834:{NFSU2_TR(0x75a834);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75a837:{NFSU2_TR(0x75a837);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75a83a:{NFSU2_TR(0x75a83a);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B75a83c:{NFSU2_TR(0x75a83c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B75a83e:{NFSU2_TR(0x75a83e);
__builtin_memmove((R+8),(R+28),4);
}
B75a840:{NFSU2_TR(0x75a840);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B75a842:{NFSU2_TR(0x75a842);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B75a844:{NFSU2_TR(0x75a844);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B75a846:{NFSU2_TR(0x75a846);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B75a848:{NFSU2_TR(0x75a848);
u8 U[12];
w4(U+0,u32(u32(u32(0x49b40821ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75a84f:{NFSU2_TR(0x75a84f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a853:{NFSU2_TR(0x75a853);
__builtin_memmove((R+8),(R+24),4);
}
B75a855:{NFSU2_TR(0x75a855);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75a858:{NFSU2_TR(0x75a858);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75a85b:{NFSU2_TR(0x75a85b);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B75a85d:{NFSU2_TR(0x75a85d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B75a85f:{NFSU2_TR(0x75a85f);
__builtin_memmove((R+24),(R+4),4);
}
B75a861:{NFSU2_TR(0x75a861);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+8))));
}
B75a863:{NFSU2_TR(0x75a863);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+28))));
}
B75a865:{NFSU2_TR(0x75a865);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+4))));
}
B75a867:{NFSU2_TR(0x75a867);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B75a869:{NFSU2_TR(0x75a869);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a86d:{NFSU2_TR(0x75a86d);
u8 U[12];
w4(U+0,u32(u32(u32(0xf61e2562ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75a874:{NFSU2_TR(0x75a874);
__builtin_memmove((R+0),(R+24),4);
}
B75a876:{NFSU2_TR(0x75a876);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B75a879:{NFSU2_TR(0x75a879);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75a87c:{NFSU2_TR(0x75a87c);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
}
B75a87e:{NFSU2_TR(0x75a87e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B75a880:{NFSU2_TR(0x75a880);
__builtin_memmove((R+24),(R+8),4);
}
B75a882:{NFSU2_TR(0x75a882);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+0))));
}
B75a884:{NFSU2_TR(0x75a884);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+4))));
}
B75a886:{NFSU2_TR(0x75a886);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+8))));
}
B75a888:{NFSU2_TR(0x75a888);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B75a88a:{NFSU2_TR(0x75a88a);
u8 U[12];
w4(U+0,u32(u32(u32(0xc040b340ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a891:{NFSU2_TR(0x75a891);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a895:{NFSU2_TR(0x75a895);
__builtin_memmove((R+24),(R+28),4);
}
B75a897:{NFSU2_TR(0x75a897);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a89a:{NFSU2_TR(0x75a89a);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75a89d:{NFSU2_TR(0x75a89d);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75a89f:{NFSU2_TR(0x75a89f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B75a8a1:{NFSU2_TR(0x75a8a1);
__builtin_memmove((R+28),(R+24),4);
}
B75a8a3:{NFSU2_TR(0x75a8a3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75a8a5:{NFSU2_TR(0x75a8a5);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B75a8a7:{NFSU2_TR(0x75a8a7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75a8a9:{NFSU2_TR(0x75a8a9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a8ab:{NFSU2_TR(0x75a8ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a8af:{NFSU2_TR(0x75a8af);
u8 U[12];
w4(U+0,u32(u32(u32(0x265e5a51ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a8b6:{NFSU2_TR(0x75a8b6);
__builtin_memmove((R+4),(R+28),4);
}
B75a8b8:{NFSU2_TR(0x75a8b8);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a8bb:{NFSU2_TR(0x75a8bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75a8be:{NFSU2_TR(0x75a8be);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B75a8c0:{NFSU2_TR(0x75a8c0);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B75a8c2:{NFSU2_TR(0x75a8c2);
__builtin_memmove((R+28),(R+24),4);
}
B75a8c4:{NFSU2_TR(0x75a8c4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75a8c6:{NFSU2_TR(0x75a8c6);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+0))));
}
B75a8c8:{NFSU2_TR(0x75a8c8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75a8ca:{NFSU2_TR(0x75a8ca);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a8cc:{NFSU2_TR(0x75a8cc);
u8 U[12];
w4(U+0,u32(u32(u32(0xe9b6c7aaull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a8d3:{NFSU2_TR(0x75a8d3);
__builtin_memmove((R+8),(R+28),4);
}
B75a8d5:{NFSU2_TR(0x75a8d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75a8d8:{NFSU2_TR(0x75a8d8);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75a8db:{NFSU2_TR(0x75a8db);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75a8dd:{NFSU2_TR(0x75a8dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a8e1:{NFSU2_TR(0x75a8e1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B75a8e3:{NFSU2_TR(0x75a8e3);
__builtin_memmove((R+28),(R+4),4);
}
B75a8e5:{NFSU2_TR(0x75a8e5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a8e7:{NFSU2_TR(0x75a8e7);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B75a8e9:{NFSU2_TR(0x75a8e9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75a8eb:{NFSU2_TR(0x75a8eb);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a8ed:{NFSU2_TR(0x75a8ed);
u8 U[12];
w4(U+0,u32(u32(u32(0xd62f105dull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a8f4:{NFSU2_TR(0x75a8f4);
__builtin_memmove((R+0),(R+28),4);
}
B75a8f6:{NFSU2_TR(0x75a8f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a8f9:{NFSU2_TR(0x75a8f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a8fd:{NFSU2_TR(0x75a8fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75a900:{NFSU2_TR(0x75a900);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B75a902:{NFSU2_TR(0x75a902);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B75a904:{NFSU2_TR(0x75a904);
__builtin_memmove((R+28),(R+8),4);
}
B75a906:{NFSU2_TR(0x75a906);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75a908:{NFSU2_TR(0x75a908);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B75a90a:{NFSU2_TR(0x75a90a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a90c:{NFSU2_TR(0x75a90c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a90e:{NFSU2_TR(0x75a90e);
u8 U[12];
w4(U+0,u32(u32(u32(0x2441453ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a915:{NFSU2_TR(0x75a915);
__builtin_memmove((R+24),(R+28),4);
}
B75a917:{NFSU2_TR(0x75a917);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a91a:{NFSU2_TR(0x75a91a);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a91e:{NFSU2_TR(0x75a91e);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75a921:{NFSU2_TR(0x75a921);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75a923:{NFSU2_TR(0x75a923);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B75a925:{NFSU2_TR(0x75a925);
__builtin_memmove((R+28),(R+24),4);
}
B75a927:{NFSU2_TR(0x75a927);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75a929:{NFSU2_TR(0x75a929);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B75a92b:{NFSU2_TR(0x75a92b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75a92d:{NFSU2_TR(0x75a92d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a92f:{NFSU2_TR(0x75a92f);
u8 U[12];
w4(U+0,u32(u32(u32(0xd8a1e681ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a936:{NFSU2_TR(0x75a936);
__builtin_memmove((R+4),(R+28),4);
}
B75a938:{NFSU2_TR(0x75a938);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a93b:{NFSU2_TR(0x75a93b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a93f:{NFSU2_TR(0x75a93f);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75a942:{NFSU2_TR(0x75a942);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B75a944:{NFSU2_TR(0x75a944);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B75a946:{NFSU2_TR(0x75a946);
__builtin_memmove((R+28),(R+24),4);
}
B75a948:{NFSU2_TR(0x75a948);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75a94a:{NFSU2_TR(0x75a94a);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+0))));
}
B75a94c:{NFSU2_TR(0x75a94c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75a94e:{NFSU2_TR(0x75a94e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a950:{NFSU2_TR(0x75a950);
u8 U[12];
w4(U+0,u32(u32(u32(0xe7d3fbc8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a957:{NFSU2_TR(0x75a957);
__builtin_memmove((R+8),(R+28),4);
}
B75a959:{NFSU2_TR(0x75a959);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a95d:{NFSU2_TR(0x75a95d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75a960:{NFSU2_TR(0x75a960);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75a963:{NFSU2_TR(0x75a963);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75a965:{NFSU2_TR(0x75a965);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B75a967:{NFSU2_TR(0x75a967);
__builtin_memmove((R+28),(R+4),4);
}
B75a969:{NFSU2_TR(0x75a969);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a96b:{NFSU2_TR(0x75a96b);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B75a96d:{NFSU2_TR(0x75a96d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75a96f:{NFSU2_TR(0x75a96f);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a971:{NFSU2_TR(0x75a971);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a975:{NFSU2_TR(0x75a975);
u8 U[12];
w4(U+0,u32(u32(u32(0x21e1cde6ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a97c:{NFSU2_TR(0x75a97c);
__builtin_memmove((R+0),(R+28),4);
}
B75a97e:{NFSU2_TR(0x75a97e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a981:{NFSU2_TR(0x75a981);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75a984:{NFSU2_TR(0x75a984);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B75a986:{NFSU2_TR(0x75a986);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B75a988:{NFSU2_TR(0x75a988);
__builtin_memmove((R+28),(R+8),4);
}
B75a98a:{NFSU2_TR(0x75a98a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75a98c:{NFSU2_TR(0x75a98c);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B75a98e:{NFSU2_TR(0x75a98e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a990:{NFSU2_TR(0x75a990);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a992:{NFSU2_TR(0x75a992);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a996:{NFSU2_TR(0x75a996);
u8 U[12];
w4(U+0,u32(u32(u32(0xc33707d6ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a99d:{NFSU2_TR(0x75a99d);
__builtin_memmove((R+24),(R+28),4);
}
B75a99f:{NFSU2_TR(0x75a99f);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a9a2:{NFSU2_TR(0x75a9a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75a9a5:{NFSU2_TR(0x75a9a5);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75a9a7:{NFSU2_TR(0x75a9a7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B75a9a9:{NFSU2_TR(0x75a9a9);
__builtin_memmove((R+28),(R+24),4);
}
B75a9ab:{NFSU2_TR(0x75a9ab);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75a9ad:{NFSU2_TR(0x75a9ad);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B75a9af:{NFSU2_TR(0x75a9af);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75a9b1:{NFSU2_TR(0x75a9b1);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a9b3:{NFSU2_TR(0x75a9b3);
u8 U[12];
w4(U+0,u32(u32(u32(0xf4d50d87ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a9ba:{NFSU2_TR(0x75a9ba);
__builtin_memmove((R+4),(R+28),4);
}
B75a9bc:{NFSU2_TR(0x75a9bc);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75a9bf:{NFSU2_TR(0x75a9bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a9c3:{NFSU2_TR(0x75a9c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75a9c6:{NFSU2_TR(0x75a9c6);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B75a9c8:{NFSU2_TR(0x75a9c8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B75a9ca:{NFSU2_TR(0x75a9ca);
__builtin_memmove((R+28),(R+24),4);
}
B75a9cc:{NFSU2_TR(0x75a9cc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75a9ce:{NFSU2_TR(0x75a9ce);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+0))));
}
B75a9d0:{NFSU2_TR(0x75a9d0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75a9d2:{NFSU2_TR(0x75a9d2);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a9d4:{NFSU2_TR(0x75a9d4);
u8 U[12];
w4(U+0,u32(u32(u32(0x455a14edull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a9db:{NFSU2_TR(0x75a9db);
__builtin_memmove((R+8),(R+28),4);
}
B75a9dd:{NFSU2_TR(0x75a9dd);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75a9e0:{NFSU2_TR(0x75a9e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75a9e4:{NFSU2_TR(0x75a9e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75a9e7:{NFSU2_TR(0x75a9e7);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75a9e9:{NFSU2_TR(0x75a9e9);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B75a9eb:{NFSU2_TR(0x75a9eb);
__builtin_memmove((R+28),(R+4),4);
}
B75a9ed:{NFSU2_TR(0x75a9ed);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75a9ef:{NFSU2_TR(0x75a9ef);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B75a9f1:{NFSU2_TR(0x75a9f1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75a9f3:{NFSU2_TR(0x75a9f3);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75a9f5:{NFSU2_TR(0x75a9f5);
u8 U[12];
w4(U+0,u32(u32(u32(0xa9e3e905ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75a9fc:{NFSU2_TR(0x75a9fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aa00:{NFSU2_TR(0x75aa00);
__builtin_memmove((R+0),(R+28),4);
}
B75aa02:{NFSU2_TR(0x75aa02);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75aa05:{NFSU2_TR(0x75aa05);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75aa08:{NFSU2_TR(0x75aa08);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B75aa0a:{NFSU2_TR(0x75aa0a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B75aa0c:{NFSU2_TR(0x75aa0c);
__builtin_memmove((R+28),(R+8),4);
}
B75aa0e:{NFSU2_TR(0x75aa0e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75aa10:{NFSU2_TR(0x75aa10);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+4))));
}
B75aa12:{NFSU2_TR(0x75aa12);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75aa14:{NFSU2_TR(0x75aa14);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75aa16:{NFSU2_TR(0x75aa16);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aa1a:{NFSU2_TR(0x75aa1a);
u8 U[12];
w4(U+0,u32(u32(u32(0xfcefa3f8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75aa21:{NFSU2_TR(0x75aa21);
__builtin_memmove((R+24),(R+28),4);
}
B75aa23:{NFSU2_TR(0x75aa23);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75aa26:{NFSU2_TR(0x75aa26);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75aa29:{NFSU2_TR(0x75aa29);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75aa2b:{NFSU2_TR(0x75aa2b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B75aa2d:{NFSU2_TR(0x75aa2d);
__builtin_memmove((R+28),(R+24),4);
}
B75aa2f:{NFSU2_TR(0x75aa2f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75aa31:{NFSU2_TR(0x75aa31);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+8))));
}
B75aa33:{NFSU2_TR(0x75aa33);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75aa35:{NFSU2_TR(0x75aa35);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75aa37:{NFSU2_TR(0x75aa37);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aa3b:{NFSU2_TR(0x75aa3b);
u8 U[12];
w4(U+0,u32(u32(u32(0x676f02d9ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B75aa42:{NFSU2_TR(0x75aa42);
__builtin_memmove((R+28),(R+4),4);
}
B75aa44:{NFSU2_TR(0x75aa44);
u8 U[4];
w4(U+0,u32(u32(u32(0xeull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75aa47:{NFSU2_TR(0x75aa47);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75aa4a:{NFSU2_TR(0x75aa4a);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B75aa4c:{NFSU2_TR(0x75aa4c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B75aa4e:{NFSU2_TR(0x75aa4e);
__builtin_memmove((R+4),(R+24),4);
}
B75aa50:{NFSU2_TR(0x75aa50);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+28))));
}
B75aa52:{NFSU2_TR(0x75aa52);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75aa56:{NFSU2_TR(0x75aa56);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B75aa58:{NFSU2_TR(0x75aa58);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+24))));
}
B75aa5a:{NFSU2_TR(0x75aa5a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B75aa5c:{NFSU2_TR(0x75aa5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aa60:{NFSU2_TR(0x75aa60);
u8 U[12];
w4(U+0,u32(u32(u32(0x8d2a4c8aull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B75aa67:{NFSU2_TR(0x75aa67);
__builtin_memmove((R+4),(R+8),4);
}
B75aa69:{NFSU2_TR(0x75aa69);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75aa6c:{NFSU2_TR(0x75aa6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75aa6f:{NFSU2_TR(0x75aa6f);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B75aa71:{NFSU2_TR(0x75aa71);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75aa75:{NFSU2_TR(0x75aa75);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B75aa77:{NFSU2_TR(0x75aa77);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B75aa79:{NFSU2_TR(0x75aa79);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B75aa7b:{NFSU2_TR(0x75aa7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aa7f:{NFSU2_TR(0x75aa7f);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffa3942ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B75aa86:{NFSU2_TR(0x75aa86);
__builtin_memmove((R+0),(R+8),4);
}
B75aa88:{NFSU2_TR(0x75aa88);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B75aa8b:{NFSU2_TR(0x75aa8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75aa8e:{NFSU2_TR(0x75aa8e);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B75aa90:{NFSU2_TR(0x75aa90);
__builtin_memmove((R+8),(R+28),4);
}
B75aa92:{NFSU2_TR(0x75aa92);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B75aa94:{NFSU2_TR(0x75aa94);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B75aa96:{NFSU2_TR(0x75aa96);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
}
B75aa98:{NFSU2_TR(0x75aa98);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B75aa9a:{NFSU2_TR(0x75aa9a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8771f681ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75aaa1:{NFSU2_TR(0x75aaa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aaa5:{NFSU2_TR(0x75aaa5);
__builtin_memmove((R+8),(R+24),4);
}
B75aaa7:{NFSU2_TR(0x75aaa7);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B75aaaa:{NFSU2_TR(0x75aaaa);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75aaad:{NFSU2_TR(0x75aaad);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B75aaaf:{NFSU2_TR(0x75aaaf);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B75aab1:{NFSU2_TR(0x75aab1);
__builtin_memmove((R+24),(R+8),4);
}
B75aab3:{NFSU2_TR(0x75aab3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+4))));
}
B75aab5:{NFSU2_TR(0x75aab5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+0))));
}
B75aab7:{NFSU2_TR(0x75aab7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B75aab9:{NFSU2_TR(0x75aab9);
u8 U[12];
w4(U+0,u32(u32(u32(0x6d9d6122ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75aac0:{NFSU2_TR(0x75aac0);
__builtin_memmove((R+24),(R+28),4);
}
B75aac2:{NFSU2_TR(0x75aac2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75aac5:{NFSU2_TR(0x75aac5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aac9:{NFSU2_TR(0x75aac9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75aacc:{NFSU2_TR(0x75aacc);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75aace:{NFSU2_TR(0x75aace);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75aad0:{NFSU2_TR(0x75aad0);
__builtin_memmove((R+28),(R+8),4);
}
B75aad2:{NFSU2_TR(0x75aad2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75aad4:{NFSU2_TR(0x75aad4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75aad8:{NFSU2_TR(0x75aad8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75aada:{NFSU2_TR(0x75aada);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75aadc:{NFSU2_TR(0x75aadc);
u8 U[12];
w4(U+0,u32(u32(u32(0xfde5380cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75aae3:{NFSU2_TR(0x75aae3);
__builtin_memmove((R+4),(R+28),4);
}
B75aae5:{NFSU2_TR(0x75aae5);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75aae8:{NFSU2_TR(0x75aae8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aaec:{NFSU2_TR(0x75aaec);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75aaef:{NFSU2_TR(0x75aaef);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B75aaf1:{NFSU2_TR(0x75aaf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75aaf5:{NFSU2_TR(0x75aaf5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B75aaf7:{NFSU2_TR(0x75aaf7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75aaf9:{NFSU2_TR(0x75aaf9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75aafb:{NFSU2_TR(0x75aafb);
u8 U[12];
w4(U+0,u32(u32(u32(0xa4beea44ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ab02:{NFSU2_TR(0x75ab02);
__builtin_memmove((R+0),(R+28),4);
}
B75ab04:{NFSU2_TR(0x75ab04);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ab08:{NFSU2_TR(0x75ab08);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ab0b:{NFSU2_TR(0x75ab0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75ab0e:{NFSU2_TR(0x75ab0e);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B75ab10:{NFSU2_TR(0x75ab10);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B75ab12:{NFSU2_TR(0x75ab12);
__builtin_memmove((R+28),(R+24),4);
}
B75ab14:{NFSU2_TR(0x75ab14);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75ab16:{NFSU2_TR(0x75ab16);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75ab18:{NFSU2_TR(0x75ab18);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ab1a:{NFSU2_TR(0x75ab1a);
u8 U[12];
w4(U+0,u32(u32(u32(0x4bdecfa9ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ab21:{NFSU2_TR(0x75ab21);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ab25:{NFSU2_TR(0x75ab25);
__builtin_memmove((R+8),(R+28),4);
}
B75ab27:{NFSU2_TR(0x75ab27);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ab2a:{NFSU2_TR(0x75ab2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75ab2d:{NFSU2_TR(0x75ab2d);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75ab2f:{NFSU2_TR(0x75ab2f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B75ab31:{NFSU2_TR(0x75ab31);
__builtin_memmove((R+28),(R+8),4);
}
B75ab33:{NFSU2_TR(0x75ab33);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75ab35:{NFSU2_TR(0x75ab35);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75ab37:{NFSU2_TR(0x75ab37);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ab39:{NFSU2_TR(0x75ab39);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ab3d:{NFSU2_TR(0x75ab3d);
u8 U[12];
w4(U+0,u32(u32(u32(0xf6bb4b60ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ab44:{NFSU2_TR(0x75ab44);
__builtin_memmove((R+24),(R+28),4);
}
B75ab46:{NFSU2_TR(0x75ab46);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ab49:{NFSU2_TR(0x75ab49);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75ab4c:{NFSU2_TR(0x75ab4c);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75ab4e:{NFSU2_TR(0x75ab4e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75ab50:{NFSU2_TR(0x75ab50);
__builtin_memmove((R+28),(R+8),4);
}
B75ab52:{NFSU2_TR(0x75ab52);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75ab54:{NFSU2_TR(0x75ab54);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ab58:{NFSU2_TR(0x75ab58);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75ab5a:{NFSU2_TR(0x75ab5a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ab5c:{NFSU2_TR(0x75ab5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ab60:{NFSU2_TR(0x75ab60);
u8 U[12];
w4(U+0,u32(u32(u32(0xbebfbc70ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ab67:{NFSU2_TR(0x75ab67);
__builtin_memmove((R+4),(R+28),4);
}
B75ab69:{NFSU2_TR(0x75ab69);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75ab6c:{NFSU2_TR(0x75ab6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75ab6f:{NFSU2_TR(0x75ab6f);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B75ab71:{NFSU2_TR(0x75ab71);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75ab75:{NFSU2_TR(0x75ab75);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B75ab77:{NFSU2_TR(0x75ab77);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75ab79:{NFSU2_TR(0x75ab79);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ab7b:{NFSU2_TR(0x75ab7b);
u8 U[12];
w4(U+0,u32(u32(u32(0x289b7ec6ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ab82:{NFSU2_TR(0x75ab82);
__builtin_memmove((R+0),(R+28),4);
}
B75ab84:{NFSU2_TR(0x75ab84);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75ab87:{NFSU2_TR(0x75ab87);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ab8a:{NFSU2_TR(0x75ab8a);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B75ab8c:{NFSU2_TR(0x75ab8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ab90:{NFSU2_TR(0x75ab90);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B75ab92:{NFSU2_TR(0x75ab92);
__builtin_memmove((R+28),(R+24),4);
}
B75ab94:{NFSU2_TR(0x75ab94);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75ab96:{NFSU2_TR(0x75ab96);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75ab98:{NFSU2_TR(0x75ab98);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ab9a:{NFSU2_TR(0x75ab9a);
u8 U[12];
w4(U+0,u32(u32(u32(0xeaa127faull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75aba1:{NFSU2_TR(0x75aba1);
__builtin_memmove((R+8),(R+28),4);
}
B75aba3:{NFSU2_TR(0x75aba3);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75aba6:{NFSU2_TR(0x75aba6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75abaa:{NFSU2_TR(0x75abaa);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75abad:{NFSU2_TR(0x75abad);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75abaf:{NFSU2_TR(0x75abaf);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B75abb1:{NFSU2_TR(0x75abb1);
__builtin_memmove((R+28),(R+8),4);
}
B75abb3:{NFSU2_TR(0x75abb3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75abb5:{NFSU2_TR(0x75abb5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75abb7:{NFSU2_TR(0x75abb7);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75abb9:{NFSU2_TR(0x75abb9);
u8 U[12];
w4(U+0,u32(u32(u32(0xd4ef3085ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75abc0:{NFSU2_TR(0x75abc0);
__builtin_memmove((R+24),(R+28),4);
}
B75abc2:{NFSU2_TR(0x75abc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75abc5:{NFSU2_TR(0x75abc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75abc9:{NFSU2_TR(0x75abc9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75abcc:{NFSU2_TR(0x75abcc);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75abce:{NFSU2_TR(0x75abce);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75abd0:{NFSU2_TR(0x75abd0);
__builtin_memmove((R+28),(R+8),4);
}
B75abd2:{NFSU2_TR(0x75abd2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75abd4:{NFSU2_TR(0x75abd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75abd8:{NFSU2_TR(0x75abd8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75abda:{NFSU2_TR(0x75abda);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75abdc:{NFSU2_TR(0x75abdc);
u8 U[12];
w4(U+0,u32(u32(u32(0x4881d05ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75abe3:{NFSU2_TR(0x75abe3);
__builtin_memmove((R+4),(R+28),4);
}
B75abe5:{NFSU2_TR(0x75abe5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75abe9:{NFSU2_TR(0x75abe9);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75abec:{NFSU2_TR(0x75abec);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75abef:{NFSU2_TR(0x75abef);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B75abf1:{NFSU2_TR(0x75abf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75abf5:{NFSU2_TR(0x75abf5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B75abf7:{NFSU2_TR(0x75abf7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75abf9:{NFSU2_TR(0x75abf9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75abfb:{NFSU2_TR(0x75abfb);
u8 U[12];
w4(U+0,u32(u32(u32(0xd9d4d039ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ac02:{NFSU2_TR(0x75ac02);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ac06:{NFSU2_TR(0x75ac06);
__builtin_memmove((R+0),(R+28),4);
}
B75ac08:{NFSU2_TR(0x75ac08);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ac0b:{NFSU2_TR(0x75ac0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75ac0e:{NFSU2_TR(0x75ac0e);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B75ac10:{NFSU2_TR(0x75ac10);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B75ac12:{NFSU2_TR(0x75ac12);
__builtin_memmove((R+28),(R+24),4);
}
B75ac14:{NFSU2_TR(0x75ac14);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75ac16:{NFSU2_TR(0x75ac16);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75ac18:{NFSU2_TR(0x75ac18);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ac1a:{NFSU2_TR(0x75ac1a);
u8 U[12];
w4(U+0,u32(u32(u32(0xe6db99e5ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ac21:{NFSU2_TR(0x75ac21);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ac25:{NFSU2_TR(0x75ac25);
__builtin_memmove((R+8),(R+28),4);
}
B75ac27:{NFSU2_TR(0x75ac27);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ac2a:{NFSU2_TR(0x75ac2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75ac2d:{NFSU2_TR(0x75ac2d);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75ac2f:{NFSU2_TR(0x75ac2f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B75ac31:{NFSU2_TR(0x75ac31);
__builtin_memmove((R+28),(R+8),4);
}
B75ac33:{NFSU2_TR(0x75ac33);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75ac35:{NFSU2_TR(0x75ac35);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75ac37:{NFSU2_TR(0x75ac37);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ac39:{NFSU2_TR(0x75ac39);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ac3d:{NFSU2_TR(0x75ac3d);
u8 U[12];
w4(U+0,u32(u32(u32(0x1fa27cf8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ac44:{NFSU2_TR(0x75ac44);
__builtin_memmove((R+24),(R+28),4);
}
B75ac46:{NFSU2_TR(0x75ac46);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ac49:{NFSU2_TR(0x75ac49);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75ac4c:{NFSU2_TR(0x75ac4c);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75ac4e:{NFSU2_TR(0x75ac4e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75ac50:{NFSU2_TR(0x75ac50);
__builtin_memmove((R+28),(R+8),4);
}
B75ac52:{NFSU2_TR(0x75ac52);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75ac54:{NFSU2_TR(0x75ac54);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75ac56:{NFSU2_TR(0x75ac56);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ac58:{NFSU2_TR(0x75ac58);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ac5665ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ac5f:{NFSU2_TR(0x75ac5f);
__builtin_memmove((R+4),(R+28),4);
}
B75ac61:{NFSU2_TR(0x75ac61);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75ac64:{NFSU2_TR(0x75ac64);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75ac67:{NFSU2_TR(0x75ac67);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B75ac69:{NFSU2_TR(0x75ac69);
__builtin_memmove((R+28),(R+8),4);
}
B75ac6b:{NFSU2_TR(0x75ac6b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B75ac6d:{NFSU2_TR(0x75ac6d);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ac6f:{NFSU2_TR(0x75ac6f);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B75ac71:{NFSU2_TR(0x75ac71);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75ac73:{NFSU2_TR(0x75ac73);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B75ac77:{NFSU2_TR(0x75ac77);
u8 U[12];
w4(U+0,u32(u32(u32(0xf4292244ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ac7e:{NFSU2_TR(0x75ac7e);
__builtin_memmove((R+0),(R+28),4);
}
B75ac80:{NFSU2_TR(0x75ac80);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ac83:{NFSU2_TR(0x75ac83);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ac87:{NFSU2_TR(0x75ac87);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75ac8a:{NFSU2_TR(0x75ac8a);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B75ac8c:{NFSU2_TR(0x75ac8c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B75ac8e:{NFSU2_TR(0x75ac8e);
__builtin_memmove((R+28),(R+24),4);
}
B75ac90:{NFSU2_TR(0x75ac90);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ac92:{NFSU2_TR(0x75ac92);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B75ac94:{NFSU2_TR(0x75ac94);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75ac96:{NFSU2_TR(0x75ac96);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ac98:{NFSU2_TR(0x75ac98);
u8 U[12];
w4(U+0,u32(u32(u32(0x432aff97ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ac9f:{NFSU2_TR(0x75ac9f);
__builtin_memmove((R+8),(R+28),4);
}
B75aca1:{NFSU2_TR(0x75aca1);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75aca4:{NFSU2_TR(0x75aca4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75aca8:{NFSU2_TR(0x75aca8);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75acab:{NFSU2_TR(0x75acab);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75acad:{NFSU2_TR(0x75acad);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B75acaf:{NFSU2_TR(0x75acaf);
__builtin_memmove((R+28),(R+4),4);
}
B75acb1:{NFSU2_TR(0x75acb1);
w4(R+28,u32(~u32(r4(R+28))));
}
B75acb3:{NFSU2_TR(0x75acb3);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+8))));
}
B75acb5:{NFSU2_TR(0x75acb5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75acb7:{NFSU2_TR(0x75acb7);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75acb9:{NFSU2_TR(0x75acb9);
u8 U[12];
w4(U+0,u32(u32(u32(0xab9423a7ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75acc0:{NFSU2_TR(0x75acc0);
__builtin_memmove((R+24),(R+28),4);
}
B75acc2:{NFSU2_TR(0x75acc2);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75acc5:{NFSU2_TR(0x75acc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75acc9:{NFSU2_TR(0x75acc9);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75accc:{NFSU2_TR(0x75accc);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75acce:{NFSU2_TR(0x75acce);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75acd0:{NFSU2_TR(0x75acd0);
__builtin_memmove((R+28),(R+0),4);
}
B75acd2:{NFSU2_TR(0x75acd2);
w4(R+28,u32(~u32(r4(R+28))));
}
B75acd4:{NFSU2_TR(0x75acd4);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B75acd6:{NFSU2_TR(0x75acd6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75acd8:{NFSU2_TR(0x75acd8);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75acda:{NFSU2_TR(0x75acda);
u8 U[12];
w4(U+0,u32(u32(u32(0xfc93a039ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ace1:{NFSU2_TR(0x75ace1);
__builtin_memmove((R+4),(R+28),4);
}
B75ace3:{NFSU2_TR(0x75ace3);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ace7:{NFSU2_TR(0x75ace7);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75acea:{NFSU2_TR(0x75acea);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75aced:{NFSU2_TR(0x75aced);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B75acef:{NFSU2_TR(0x75acef);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B75acf1:{NFSU2_TR(0x75acf1);
__builtin_memmove((R+28),(R+8),4);
}
B75acf3:{NFSU2_TR(0x75acf3);
w4(R+28,u32(~u32(r4(R+28))));
}
B75acf5:{NFSU2_TR(0x75acf5);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B75acf7:{NFSU2_TR(0x75acf7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75acf9:{NFSU2_TR(0x75acf9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75acfb:{NFSU2_TR(0x75acfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75acff:{NFSU2_TR(0x75acff);
u8 U[12];
w4(U+0,u32(u32(u32(0x655b59c3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ad06:{NFSU2_TR(0x75ad06);
__builtin_memmove((R+0),(R+28),4);
}
B75ad08:{NFSU2_TR(0x75ad08);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ad0b:{NFSU2_TR(0x75ad0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75ad0e:{NFSU2_TR(0x75ad0e);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B75ad10:{NFSU2_TR(0x75ad10);
__builtin_memmove((R+28),(R+24),4);
}
B75ad12:{NFSU2_TR(0x75ad12);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ad14:{NFSU2_TR(0x75ad14);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B75ad16:{NFSU2_TR(0x75ad16);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B75ad18:{NFSU2_TR(0x75ad18);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75ad1a:{NFSU2_TR(0x75ad1a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ad1c:{NFSU2_TR(0x75ad1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ad20:{NFSU2_TR(0x75ad20);
u8 U[12];
w4(U+0,u32(u32(u32(0x8f0ccc92ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ad27:{NFSU2_TR(0x75ad27);
__builtin_memmove((R+8),(R+28),4);
}
B75ad29:{NFSU2_TR(0x75ad29);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ad2c:{NFSU2_TR(0x75ad2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75ad2f:{NFSU2_TR(0x75ad2f);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75ad31:{NFSU2_TR(0x75ad31);
__builtin_memmove((R+28),(R+4),4);
}
B75ad33:{NFSU2_TR(0x75ad33);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ad35:{NFSU2_TR(0x75ad35);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B75ad37:{NFSU2_TR(0x75ad37);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+8))));
}
B75ad39:{NFSU2_TR(0x75ad39);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75ad3b:{NFSU2_TR(0x75ad3b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ad3d:{NFSU2_TR(0x75ad3d);
u8 U[12];
w4(U+0,u32(u32(u32(0xffeff47dull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ad44:{NFSU2_TR(0x75ad44);
__builtin_memmove((R+24),(R+28),4);
}
B75ad46:{NFSU2_TR(0x75ad46);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75ad49:{NFSU2_TR(0x75ad49);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ad4c:{NFSU2_TR(0x75ad4c);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75ad4e:{NFSU2_TR(0x75ad4e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75ad50:{NFSU2_TR(0x75ad50);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ad54:{NFSU2_TR(0x75ad54);
__builtin_memmove((R+28),(R+0),4);
}
B75ad56:{NFSU2_TR(0x75ad56);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ad58:{NFSU2_TR(0x75ad58);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B75ad5a:{NFSU2_TR(0x75ad5a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75ad5c:{NFSU2_TR(0x75ad5c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ad5e:{NFSU2_TR(0x75ad5e);
u8 U[12];
w4(U+0,u32(u32(u32(0x85845dd1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ad65:{NFSU2_TR(0x75ad65);
__builtin_memmove((R+4),(R+28),4);
}
B75ad67:{NFSU2_TR(0x75ad67);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75ad6a:{NFSU2_TR(0x75ad6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ad6e:{NFSU2_TR(0x75ad6e);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75ad71:{NFSU2_TR(0x75ad71);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B75ad73:{NFSU2_TR(0x75ad73);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B75ad75:{NFSU2_TR(0x75ad75);
__builtin_memmove((R+28),(R+8),4);
}
B75ad77:{NFSU2_TR(0x75ad77);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ad79:{NFSU2_TR(0x75ad79);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B75ad7b:{NFSU2_TR(0x75ad7b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75ad7d:{NFSU2_TR(0x75ad7d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ad7f:{NFSU2_TR(0x75ad7f);
u8 U[12];
w4(U+0,u32(u32(u32(0x6fa87e4full))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ad86:{NFSU2_TR(0x75ad86);
__builtin_memmove((R+0),(R+28),4);
}
B75ad88:{NFSU2_TR(0x75ad88);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ad8b:{NFSU2_TR(0x75ad8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ad8f:{NFSU2_TR(0x75ad8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75ad92:{NFSU2_TR(0x75ad92);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B75ad94:{NFSU2_TR(0x75ad94);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B75ad96:{NFSU2_TR(0x75ad96);
__builtin_memmove((R+28),(R+24),4);
}
B75ad98:{NFSU2_TR(0x75ad98);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ad9a:{NFSU2_TR(0x75ad9a);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B75ad9c:{NFSU2_TR(0x75ad9c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75ad9e:{NFSU2_TR(0x75ad9e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ada0:{NFSU2_TR(0x75ada0);
u8 U[12];
w4(U+0,u32(u32(u32(0xfe2ce6e0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ada7:{NFSU2_TR(0x75ada7);
__builtin_memmove((R+8),(R+28),4);
}
B75ada9:{NFSU2_TR(0x75ada9);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75adac:{NFSU2_TR(0x75adac);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75adb0:{NFSU2_TR(0x75adb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75adb3:{NFSU2_TR(0x75adb3);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75adb5:{NFSU2_TR(0x75adb5);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B75adb7:{NFSU2_TR(0x75adb7);
__builtin_memmove((R+28),(R+4),4);
}
B75adb9:{NFSU2_TR(0x75adb9);
w4(R+28,u32(~u32(r4(R+28))));
}
B75adbb:{NFSU2_TR(0x75adbb);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+8))));
}
B75adbd:{NFSU2_TR(0x75adbd);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75adbf:{NFSU2_TR(0x75adbf);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75adc1:{NFSU2_TR(0x75adc1);
u8 U[12];
w4(U+0,u32(u32(u32(0xa3014314ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75adc8:{NFSU2_TR(0x75adc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75adcc:{NFSU2_TR(0x75adcc);
__builtin_memmove((R+24),(R+28),4);
}
B75adce:{NFSU2_TR(0x75adce);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75add1:{NFSU2_TR(0x75add1);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75add4:{NFSU2_TR(0x75add4);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75add6:{NFSU2_TR(0x75add6);
__builtin_memmove((R+28),(R+0),4);
}
B75add8:{NFSU2_TR(0x75add8);
w4(R+28,u32(~u32(r4(R+28))));
}
B75adda:{NFSU2_TR(0x75adda);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B75addc:{NFSU2_TR(0x75addc);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B75adde:{NFSU2_TR(0x75adde);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B75ade0:{NFSU2_TR(0x75ade0);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ade2:{NFSU2_TR(0x75ade2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ade6:{NFSU2_TR(0x75ade6);
u8 U[12];
w4(U+0,u32(u32(u32(0x4e0811a1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75aded:{NFSU2_TR(0x75aded);
__builtin_memmove((R+4),(R+28),4);
}
B75adef:{NFSU2_TR(0x75adef);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75adf2:{NFSU2_TR(0x75adf2);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B75adf5:{NFSU2_TR(0x75adf5);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B75adf7:{NFSU2_TR(0x75adf7);
__builtin_memmove((R+28),(R+8),4);
}
B75adf9:{NFSU2_TR(0x75adf9);
w4(R+28,u32(~u32(r4(R+28))));
}
B75adfb:{NFSU2_TR(0x75adfb);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B75adfd:{NFSU2_TR(0x75adfd);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B75adff:{NFSU2_TR(0x75adff);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+24))));
}
B75ae01:{NFSU2_TR(0x75ae01);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ae03:{NFSU2_TR(0x75ae03);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ae07:{NFSU2_TR(0x75ae07);
u8 U[12];
w4(U+0,u32(u32(u32(0xf7537e82ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ae0e:{NFSU2_TR(0x75ae0e);
__builtin_memmove((R+0),(R+28),4);
}
B75ae10:{NFSU2_TR(0x75ae10);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ae13:{NFSU2_TR(0x75ae13);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75ae16:{NFSU2_TR(0x75ae16);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B75ae18:{NFSU2_TR(0x75ae18);
__builtin_memmove((R+28),(R+24),4);
}
B75ae1a:{NFSU2_TR(0x75ae1a);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ae1c:{NFSU2_TR(0x75ae1c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B75ae1e:{NFSU2_TR(0x75ae1e);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B75ae20:{NFSU2_TR(0x75ae20);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B75ae22:{NFSU2_TR(0x75ae22);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ae24:{NFSU2_TR(0x75ae24);
u8 U[12];
w4(U+0,u32(u32(u32(0xbd3af235ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75ae2b:{NFSU2_TR(0x75ae2b);
__builtin_memmove((R+8),(R+28),4);
}
B75ae2d:{NFSU2_TR(0x75ae2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x16ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75ae30:{NFSU2_TR(0x75ae30);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ae34:{NFSU2_TR(0x75ae34);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B75ae37:{NFSU2_TR(0x75ae37);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B75ae39:{NFSU2_TR(0x75ae39);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B75ae3b:{NFSU2_TR(0x75ae3b);
__builtin_memmove((R+28),(R+4),4);
}
B75ae3d:{NFSU2_TR(0x75ae3d);
w4(R+28,u32(~u32(r4(R+28))));
}
B75ae3f:{NFSU2_TR(0x75ae3f);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+8))));
}
B75ae41:{NFSU2_TR(0x75ae41);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+0))));
}
B75ae43:{NFSU2_TR(0x75ae43);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B75ae45:{NFSU2_TR(0x75ae45);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ae49:{NFSU2_TR(0x75ae49);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ad7d2bbull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75ae50:{NFSU2_TR(0x75ae50);
__builtin_memmove((R+28),(R+24),4);
}
B75ae52:{NFSU2_TR(0x75ae52);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B75ae55:{NFSU2_TR(0x75ae55);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B75ae58:{NFSU2_TR(0x75ae58);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+24))));
}
B75ae5a:{NFSU2_TR(0x75ae5a);
__builtin_memmove((R+24),(R+0),4);
}
B75ae5c:{NFSU2_TR(0x75ae5c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B75ae5e:{NFSU2_TR(0x75ae5e);
w4(R+24,u32(~u32(r4(R+24))));
}
B75ae60:{NFSU2_TR(0x75ae60);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B75ae62:{NFSU2_TR(0x75ae62);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+8))));
}
B75ae64:{NFSU2_TR(0x75ae64);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B75ae66:{NFSU2_TR(0x75ae66);
u8 U[12];
w4(U+0,u32(u32(u32(0xeb86d391ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B75ae6d:{NFSU2_TR(0x75ae6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75ae71:{NFSU2_TR(0x75ae71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ae74:{NFSU2_TR(0x75ae74);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B75ae76:{NFSU2_TR(0x75ae76);
__builtin_memmove((R+0),(R+4),4);
}
B75ae78:{NFSU2_TR(0x75ae78);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B75ae7b:{NFSU2_TR(0x75ae7b);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75ae7e:{NFSU2_TR(0x75ae7e);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B75ae80:{NFSU2_TR(0x75ae80);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B75ae82:{NFSU2_TR(0x75ae82);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B75ae84:{NFSU2_TR(0x75ae84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ae87:{NFSU2_TR(0x75ae87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75ae8a:{NFSU2_TR(0x75ae8a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B75ae8c:{NFSU2_TR(0x75ae8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ae8f:{NFSU2_TR(0x75ae8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75ae92:{NFSU2_TR(0x75ae92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75ae93:{NFSU2_TR(0x75ae93);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B75ae95:{NFSU2_TR(0x75ae95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ae98:{NFSU2_TR(0x75ae98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ae9b:{NFSU2_TR(0x75ae9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75ae9c:{NFSU2_TR(0x75ae9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75ae9d:{NFSU2_TR(0x75ae9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75ae9e:{NFSU2_TR(0x75ae9e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75aea1:{NFSU2_TR(0x75aea1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75aeb0:L75aeb0:{c.instructions+=7;NFSU2_TR(0x75aeb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75aeb4:{NFSU2_TR(0x75aeb4);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B75aeba:{NFSU2_TR(0x75aeba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x67452301ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75aec1:{NFSU2_TR(0x75aec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0xefcdab89ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75aec8:{NFSU2_TR(0x75aec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x98badcfeull));
s4(u32(r4(U+0)),r4(U+4));
}
B75aecf:{NFSU2_TR(0x75aecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x10325476ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75aed6:{NFSU2_TR(0x75aed6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75aee0:L75aee0:{c.instructions+=7;NFSU2_TR(0x75aee0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75aee4:{NFSU2_TR(0x75aee4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B75aee6:{NFSU2_TR(0x75aee6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75aeea:{NFSU2_TR(0x75aeea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75aeeb:{NFSU2_TR(0x75aeeb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75aeec:{NFSU2_TR(0x75aeec);
__builtin_memmove((R+28),(R+0),4);
}
B75aeee:{NFSU2_TR(0x75aeee);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75af01;}}
}
B75aef0:L75aef0:{c.instructions+=4;NFSU2_TR(0x75aef0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B75aef2:{NFSU2_TR(0x75aef2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B75aef4:{NFSU2_TR(0x75aef4);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75aef6:{NFSU2_TR(0x75aef6);
if(r1(R+518)){{goto L75af01;}}
}
B75aef8:L75aef8:{c.instructions+=4;NFSU2_TR(0x75aef8);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B75aefc:{NFSU2_TR(0x75aefc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B75aefd:{NFSU2_TR(0x75aefd);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75aeff:{NFSU2_TR(0x75aeff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75aef8u);}goto L75aef8;}}
}
B75af01:L75af01:{c.instructions+=5;NFSU2_TR(0x75af01);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75af05:{NFSU2_TR(0x75af05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75af07:{NFSU2_TR(0x75af07);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3full))));
}
B75af0a:{NFSU2_TR(0x75af0a);
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
B75af0c:{NFSU2_TR(0x75af0c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75af32;}}
}
B75af0e:L75af0e:{c.instructions+=2;NFSU2_TR(0x75af0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75af0f:{NFSU2_TR(0x75af0f);
__builtin_memmove((R+12),(R+4),4);
}
B75af11:L75af11:{c.instructions+=9;NFSU2_TR(0x75af11);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B75af13:{NFSU2_TR(0x75af13);
u8 U[13];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B75af17:{NFSU2_TR(0x75af17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B75af19:{NFSU2_TR(0x75af19);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75af1a:{NFSU2_TR(0x75af1a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75af1b:{NFSU2_TR(0x75af1b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B75af1c:{NFSU2_TR(0x75af1c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x40ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75af1f:{NFSU2_TR(0x75af1f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B75af21:{NFSU2_TR(0x75af21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75af2e;}}
}
B75af23:L75af23:{c.instructions+=2;NFSU2_TR(0x75af23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75af24:{NFSU2_TR(0x75af24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75af29ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75a600u);}goto L75a600;}
}
B75af29:L75af29:{c.instructions+=2;NFSU2_TR(0x75af29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75af2c:{NFSU2_TR(0x75af2c);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75af2e:L75af2e:{c.instructions+=2;NFSU2_TR(0x75af2e);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75af2f:{NFSU2_TR(0x75af2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75af11u);}goto L75af11;}}
}
B75af31:L75af31:{c.instructions+=1;NFSU2_TR(0x75af31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75af32:L75af32:{c.instructions+=3;NFSU2_TR(0x75af32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75af33:{NFSU2_TR(0x75af33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75af34:{NFSU2_TR(0x75af34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75af40:L75af40:{c.instructions+=12;NFSU2_TR(0x75af40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75af41:{NFSU2_TR(0x75af41);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75af42:{NFSU2_TR(0x75af42);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75af43:{NFSU2_TR(0x75af43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75af44:{NFSU2_TR(0x75af44);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75af48:{NFSU2_TR(0x75af48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75af4a:{NFSU2_TR(0x75af4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75af4b:{NFSU2_TR(0x75af4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75af4f:{NFSU2_TR(0x75af4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75af57:{NFSU2_TR(0x75af57);
w1(R+12,u8(0x80ull));
}
B75af59:{NFSU2_TR(0x75af59);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3full))));
}
B75af5c:{NFSU2_TR(0x75af5c);
__builtin_memmove((R+16),(R+16),4);
}
B75af60:L75af60:{c.instructions+=5;NFSU2_TR(0x75af60);
u8 U[13];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B75af64:{NFSU2_TR(0x75af64);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75af65:{NFSU2_TR(0x75af65);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B75af67:{NFSU2_TR(0x75af67);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75af6a:{NFSU2_TR(0x75af6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75af79;}}
}
B75af6c:L75af6c:{c.instructions+=2;NFSU2_TR(0x75af6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75af6d:{NFSU2_TR(0x75af6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75af72ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75a600u);}goto L75a600;}
}
B75af72:L75af72:{c.instructions+=3;NFSU2_TR(0x75af72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75af75:{NFSU2_TR(0x75af75);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75af77:{NFSU2_TR(0x75af77);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75af60u);}goto L75af60;}
}
B75af79:L75af79:{c.instructions+=2;NFSU2_TR(0x75af79);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x38ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75af7c:{NFSU2_TR(0x75af7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75af60u);}goto L75af60;}}
}
B75af7e:L75af7e:{c.instructions+=20;NFSU2_TR(0x75af7e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B75af80:{NFSU2_TR(0x75af80);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w1(R+0,shl<u8>(r1(R+0),u64(r4(U+0))));
}
B75af83:{NFSU2_TR(0x75af83);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75af86:{NFSU2_TR(0x75af86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75af88:{NFSU2_TR(0x75af88);
__builtin_memmove((R+4),(R+0),4);
}
B75af8a:{NFSU2_TR(0x75af8a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75af8d:{NFSU2_TR(0x75af8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75af90:{NFSU2_TR(0x75af90);
__builtin_memmove((R+8),(R+0),4);
}
B75af92:{NFSU2_TR(0x75af92);
__builtin_memmove((R+4),(R+0),4);
}
B75af94:{NFSU2_TR(0x75af94);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B75af97:{NFSU2_TR(0x75af97);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75af9a:{NFSU2_TR(0x75af9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75af9d:{NFSU2_TR(0x75af9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75af9e:{NFSU2_TR(0x75af9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75afa1:{NFSU2_TR(0x75afa1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4full))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75afa4:{NFSU2_TR(0x75afa4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75afa7:{NFSU2_TR(0x75afa7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B75afab:{NFSU2_TR(0x75afab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B75afaf:{NFSU2_TR(0x75afaf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x53ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B75afb3:{NFSU2_TR(0x75afb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75afb8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75a600u);}goto L75a600;}
}
B75afb8:L75afb8:{c.instructions+=6;NFSU2_TR(0x75afb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75afbc:{NFSU2_TR(0x75afbc);
__builtin_memmove((R+20),gp(0x819c50),4);
}
B75afc2:{NFSU2_TR(0x75afc2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75afc5:{NFSU2_TR(0x75afc5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B75afc7:{NFSU2_TR(0x75afc7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75afca:{NFSU2_TR(0x75afca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75afd7;}}
}
B75afcc:L75afcc:{c.instructions+=4;NFSU2_TR(0x75afcc);
__builtin_memmove((R+0),(R+4),4);
}
B75afce:{NFSU2_TR(0x75afce);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B75afd1:{NFSU2_TR(0x75afd1);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75afd5:{NFSU2_TR(0x75afd5);
{goto L75afdb;}
}
B75afd7:L75afd7:{c.instructions+=1;NFSU2_TR(0x75afd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75afdb:L75afdb:{c.instructions+=2;NFSU2_TR(0x75afdb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x21ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x21ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75afde:{NFSU2_TR(0x75afde);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75affa;}}
}
B75afe0:L75afe0:{c.instructions+=11;NFSU2_TR(0x75afe0);
__builtin_memmove((R+12),(R+0),4);
}
B75afe2:{NFSU2_TR(0x75afe2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B75afe5:{NFSU2_TR(0x75afe5);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfull))));
}
B75afe8:{NFSU2_TR(0x75afe8);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B75afeb:{NFSU2_TR(0x75afeb);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+28)),r1(U+0));
}
B75afed:{NFSU2_TR(0x75afed);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75afee:{NFSU2_TR(0x75afee);
__builtin_memmove((R+12),(R+0),4);
}
B75aff0:{NFSU2_TR(0x75aff0);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfull))));
}
B75aff3:{NFSU2_TR(0x75aff3);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B75aff6:{NFSU2_TR(0x75aff6);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+28)),r1(U+0));
}
B75aff8:{NFSU2_TR(0x75aff8);
TAIL_STATIC(0x75b000u,75b);
}
B75affa:L75affa:{c.instructions+=2;NFSU2_TR(0x75affa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75affc:{NFSU2_TR(0x75affc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x75b001u,75b);}
}
B75affe:L75affe:{c.instructions+=1;NFSU2_TR(0x75affe);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
TAIL_STATIC(0x75b000u,75b);
}
XIT:NFSU2_TR_EXIT(0x75a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
