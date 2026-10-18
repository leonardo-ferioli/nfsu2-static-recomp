#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_40b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x40a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x40a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_40a(u8* __restrict R,Cpu& c);
u32 page_40a(Cpu& c){return body_40a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_40a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x40a001:goto L40a001;
case 0x40a006:goto L40a006;
case 0x40a007:c.instructions+=2;goto B40a007;
case 0x40a00d:c.instructions+=1;goto B40a00d;
case 0x40a012:goto L40a012;
case 0x40a013:c.instructions+=2;goto B40a013;
case 0x40a015:c.instructions+=1;goto B40a015;
case 0x40a01a:goto L40a01a;
case 0x40a01c:c.instructions+=1;goto B40a01c;
case 0x40a021:goto L40a021;
case 0x40a022:c.instructions+=2;goto B40a022;
case 0x40a023:c.instructions+=1;goto B40a023;
case 0x40a030:goto L40a030;
case 0x40a031:c.instructions+=4;goto B40a031;
case 0x40a035:c.instructions+=3;goto B40a035;
case 0x40a038:c.instructions+=2;goto B40a038;
case 0x40a040:c.instructions+=1;goto B40a040;
case 0x40a042:goto L40a042;
case 0x40a043:c.instructions+=1;goto B40a043;
case 0x40a045:goto L40a045;
case 0x40a046:c.instructions+=1;goto B40a046;
case 0x40a048:goto L40a048;
case 0x40a04e:c.instructions+=2;goto B40a04e;
case 0x40a04f:c.instructions+=1;goto B40a04f;
case 0x40a052:goto L40a052;
case 0x40a058:c.instructions+=2;goto B40a058;
case 0x40a05a:c.instructions+=1;goto B40a05a;
case 0x40a05c:goto L40a05c;
case 0x40a062:c.instructions+=8;goto B40a062;
case 0x40a065:c.instructions+=7;goto B40a065;
case 0x40a069:c.instructions+=6;goto B40a069;
case 0x40a06d:c.instructions+=5;goto B40a06d;
case 0x40a073:c.instructions+=4;goto B40a073;
case 0x40a079:c.instructions+=3;goto B40a079;
case 0x40a07b:c.instructions+=2;goto B40a07b;
case 0x40a07c:c.instructions+=1;goto B40a07c;
case 0x40a07f:goto L40a07f;
case 0x40a085:c.instructions+=2;goto B40a085;
case 0x40a086:c.instructions+=1;goto B40a086;
case 0x40a089:goto L40a089;
case 0x40a08f:c.instructions+=2;goto B40a08f;
case 0x40a090:c.instructions+=1;goto B40a090;
case 0x40a093:goto L40a093;
case 0x40a097:c.instructions+=2;goto B40a097;
case 0x40a098:c.instructions+=1;goto B40a098;
case 0x40a0a0:goto L40a0a0;
case 0x40a0a4:c.instructions+=2;goto B40a0a4;
case 0x40a0ab:c.instructions+=1;goto B40a0ab;
case 0x40a0b0:goto L40a0b0;
case 0x40a0b1:c.instructions+=9;goto B40a0b1;
case 0x40a0b2:c.instructions+=8;goto B40a0b2;
case 0x40a0b3:c.instructions+=7;goto B40a0b3;
case 0x40a0b4:c.instructions+=6;goto B40a0b4;
case 0x40a0b8:c.instructions+=5;goto B40a0b8;
case 0x40a0bd:c.instructions+=4;goto B40a0bd;
case 0x40a0bf:c.instructions+=3;goto B40a0bf;
case 0x40a0c1:c.instructions+=2;goto B40a0c1;
case 0x40a0c3:c.instructions+=1;goto B40a0c3;
case 0x40a0c8:goto L40a0c8;
case 0x40a0ce:c.instructions+=1;goto B40a0ce;
case 0x40a0d3:goto L40a0d3;
case 0x40a0d4:c.instructions+=2;goto B40a0d4;
case 0x40a0d6:c.instructions+=1;goto B40a0d6;
case 0x40a0db:goto L40a0db;
case 0x40a0de:c.instructions+=2;goto B40a0de;
case 0x40a0df:c.instructions+=1;goto B40a0df;
case 0x40a0e1:goto L40a0e1;
case 0x40a0e2:c.instructions+=2;goto B40a0e2;
case 0x40a0e4:c.instructions+=1;goto B40a0e4;
case 0x40a0e9:goto L40a0e9;
case 0x40a0eb:c.instructions+=1;goto B40a0eb;
case 0x40a0f0:goto L40a0f0;
case 0x40a0f1:c.instructions+=4;goto B40a0f1;
case 0x40a0f2:c.instructions+=3;goto B40a0f2;
case 0x40a0f3:c.instructions+=2;goto B40a0f3;
case 0x40a0f4:c.instructions+=1;goto B40a0f4;
case 0x40a100:goto L40a100;
case 0x40a103:c.instructions+=6;goto B40a103;
case 0x40a107:c.instructions+=5;goto B40a107;
case 0x40a10d:c.instructions+=4;goto B40a10d;
case 0x40a110:c.instructions+=3;goto B40a110;
case 0x40a112:c.instructions+=2;goto B40a112;
case 0x40a115:c.instructions+=1;goto B40a115;
case 0x40a117:goto L40a117;
case 0x40a11a:c.instructions+=10;goto B40a11a;
case 0x40a120:c.instructions+=9;goto B40a120;
case 0x40a122:c.instructions+=8;goto B40a122;
case 0x40a125:c.instructions+=7;goto B40a125;
case 0x40a12b:c.instructions+=6;goto B40a12b;
case 0x40a133:c.instructions+=5;goto B40a133;
case 0x40a135:c.instructions+=4;goto B40a135;
case 0x40a137:c.instructions+=3;goto B40a137;
case 0x40a13a:c.instructions+=2;goto B40a13a;
case 0x40a13c:c.instructions+=1;goto B40a13c;
case 0x40a13f:goto L40a13f;
case 0x40a141:c.instructions+=1;goto B40a141;
case 0x40a150:goto L40a150;
case 0x40a151:c.instructions+=7;goto B40a151;
case 0x40a155:c.instructions+=6;goto B40a155;
case 0x40a156:c.instructions+=5;goto B40a156;
case 0x40a15b:c.instructions+=4;goto B40a15b;
case 0x40a15d:c.instructions+=3;goto B40a15d;
case 0x40a15f:c.instructions+=2;goto B40a15f;
case 0x40a161:c.instructions+=1;goto B40a161;
case 0x40a166:goto L40a166;
case 0x40a167:c.instructions+=2;goto B40a167;
case 0x40a169:c.instructions+=1;goto B40a169;
case 0x40a16e:goto L40a16e;
case 0x40a171:c.instructions+=3;goto B40a171;
case 0x40a172:c.instructions+=2;goto B40a172;
case 0x40a174:c.instructions+=1;goto B40a174;
case 0x40a179:goto L40a179;
case 0x40a17c:c.instructions+=3;goto B40a17c;
case 0x40a17d:c.instructions+=2;goto B40a17d;
case 0x40a17f:c.instructions+=1;goto B40a17f;
case 0x40a184:goto L40a184;
case 0x40a187:c.instructions+=3;goto B40a187;
case 0x40a188:c.instructions+=2;goto B40a188;
case 0x40a18a:c.instructions+=1;goto B40a18a;
case 0x40a18f:goto L40a18f;
case 0x40a191:c.instructions+=1;goto B40a191;
case 0x40a196:goto L40a196;
case 0x40a197:c.instructions+=2;goto B40a197;
case 0x40a198:c.instructions+=1;goto B40a198;
case 0x40a1a0:goto L40a1a0;
case 0x40a1a4:c.instructions+=7;goto B40a1a4;
case 0x40a1aa:c.instructions+=6;goto B40a1aa;
case 0x40a1ad:c.instructions+=5;goto B40a1ad;
case 0x40a1b0:c.instructions+=4;goto B40a1b0;
case 0x40a1b3:c.instructions+=3;goto B40a1b3;
case 0x40a1b9:c.instructions+=2;goto B40a1b9;
case 0x40a1bc:c.instructions+=1;goto B40a1bc;
case 0x40a1c0:goto L40a1c0;
case 0x40a1c2:c.instructions+=13;goto B40a1c2;
case 0x40a1c7:c.instructions+=12;goto B40a1c7;
case 0x40a1cd:c.instructions+=11;goto B40a1cd;
case 0x40a1ce:c.instructions+=10;goto B40a1ce;
case 0x40a1d5:c.instructions+=9;goto B40a1d5;
case 0x40a1d6:c.instructions+=8;goto B40a1d6;
case 0x40a1d7:c.instructions+=7;goto B40a1d7;
case 0x40a1d9:c.instructions+=6;goto B40a1d9;
case 0x40a1dd:c.instructions+=5;goto B40a1dd;
case 0x40a1e3:c.instructions+=4;goto B40a1e3;
case 0x40a1e6:c.instructions+=3;goto B40a1e6;
case 0x40a1e8:c.instructions+=2;goto B40a1e8;
case 0x40a1f0:c.instructions+=1;goto B40a1f0;
case 0x40a1f2:goto L40a1f2;
case 0x40a1f4:c.instructions+=2;goto B40a1f4;
case 0x40a1f6:c.instructions+=1;goto B40a1f6;
case 0x40a1f8:goto L40a1f8;
case 0x40a1fc:c.instructions+=5;goto B40a1fc;
case 0x40a202:c.instructions+=4;goto B40a202;
case 0x40a203:c.instructions+=3;goto B40a203;
case 0x40a20a:c.instructions+=2;goto B40a20a;
case 0x40a20d:c.instructions+=1;goto B40a20d;
case 0x40a210:goto L40a210;
case 0x40a213:c.instructions+=1;goto B40a213;
case 0x40a220:goto L40a220;
case 0x40a224:c.instructions+=4;goto B40a224;
case 0x40a226:c.instructions+=3;goto B40a226;
case 0x40a229:c.instructions+=2;goto B40a229;
case 0x40a231:c.instructions+=1;goto B40a231;
case 0x40a233:goto L40a233;
case 0x40a23b:goto L40a23b;
case 0x40a240:goto L40a240;
case 0x40a246:c.instructions+=1;goto B40a246;
case 0x40a250:goto L40a250;
case 0x40a254:c.instructions+=2;goto B40a254;
case 0x40a256:c.instructions+=1;goto B40a256;
case 0x40a258:goto L40a258;
case 0x40a25d:c.instructions+=3;goto B40a25d;
case 0x40a25f:c.instructions+=2;goto B40a25f;
case 0x40a267:c.instructions+=1;goto B40a267;
case 0x40a269:goto L40a269;
case 0x40a271:goto L40a271;
case 0x40a274:c.instructions+=1;goto B40a274;
case 0x40a280:goto L40a280;
case 0x40a283:c.instructions+=7;goto B40a283;
case 0x40a286:c.instructions+=6;goto B40a286;
case 0x40a28a:c.instructions+=5;goto B40a28a;
case 0x40a28c:c.instructions+=4;goto B40a28c;
case 0x40a28f:c.instructions+=3;goto B40a28f;
case 0x40a292:c.instructions+=2;goto B40a292;
case 0x40a293:c.instructions+=1;goto B40a293;
case 0x40a296:goto L40a296;
case 0x40a2a0:goto L40a2a0;
case 0x40a2a3:c.instructions+=6;goto B40a2a3;
case 0x40a2a9:c.instructions+=5;goto B40a2a9;
case 0x40a2af:c.instructions+=4;goto B40a2af;
case 0x40a2b5:c.instructions+=3;goto B40a2b5;
case 0x40a2b7:c.instructions+=2;goto B40a2b7;
case 0x40a2ba:c.instructions+=1;goto B40a2ba;
case 0x40a2bc:goto L40a2bc;
case 0x40a2be:c.instructions+=1;goto B40a2be;
case 0x40a2c4:goto L40a2c4;
case 0x40a2d0:goto L40a2d0;
case 0x40a2d2:c.instructions+=35;goto B40a2d2;
case 0x40a2d6:c.instructions+=34;goto B40a2d6;
case 0x40a2d8:c.instructions+=33;goto B40a2d8;
case 0x40a2da:c.instructions+=32;goto B40a2da;
case 0x40a2dd:c.instructions+=31;goto B40a2dd;
case 0x40a2e0:c.instructions+=30;goto B40a2e0;
case 0x40a2e3:c.instructions+=29;goto B40a2e3;
case 0x40a2e6:c.instructions+=28;goto B40a2e6;
case 0x40a2e9:c.instructions+=27;goto B40a2e9;
case 0x40a2ec:c.instructions+=26;goto B40a2ec;
case 0x40a2ef:c.instructions+=25;goto B40a2ef;
case 0x40a2f2:c.instructions+=24;goto B40a2f2;
case 0x40a2f5:c.instructions+=23;goto B40a2f5;
case 0x40a2f8:c.instructions+=22;goto B40a2f8;
case 0x40a2fa:c.instructions+=21;goto B40a2fa;
case 0x40a2fd:c.instructions+=20;goto B40a2fd;
case 0x40a2fe:c.instructions+=19;goto B40a2fe;
case 0x40a2ff:c.instructions+=18;goto B40a2ff;
case 0x40a302:c.instructions+=17;goto B40a302;
case 0x40a305:c.instructions+=16;goto B40a305;
case 0x40a308:c.instructions+=15;goto B40a308;
case 0x40a30b:c.instructions+=14;goto B40a30b;
case 0x40a30e:c.instructions+=13;goto B40a30e;
case 0x40a311:c.instructions+=12;goto B40a311;
case 0x40a314:c.instructions+=11;goto B40a314;
case 0x40a317:c.instructions+=10;goto B40a317;
case 0x40a31a:c.instructions+=9;goto B40a31a;
case 0x40a31d:c.instructions+=8;goto B40a31d;
case 0x40a320:c.instructions+=7;goto B40a320;
case 0x40a323:c.instructions+=6;goto B40a323;
case 0x40a325:c.instructions+=5;goto B40a325;
case 0x40a326:c.instructions+=4;goto B40a326;
case 0x40a329:c.instructions+=3;goto B40a329;
case 0x40a32c:c.instructions+=2;goto B40a32c;
case 0x40a32e:c.instructions+=1;goto B40a32e;
case 0x40a333:goto L40a333;
case 0x40a337:c.instructions+=4;goto B40a337;
case 0x40a33a:c.instructions+=3;goto B40a33a;
case 0x40a33d:c.instructions+=2;goto B40a33d;
case 0x40a33e:c.instructions+=1;goto B40a33e;
case 0x40a340:goto L40a340;
case 0x40a346:c.instructions+=13;goto B40a346;
case 0x40a34c:c.instructions+=12;goto B40a34c;
case 0x40a352:c.instructions+=11;goto B40a352;
case 0x40a358:c.instructions+=10;goto B40a358;
case 0x40a35e:c.instructions+=9;goto B40a35e;
case 0x40a364:c.instructions+=8;goto B40a364;
case 0x40a36a:c.instructions+=7;goto B40a36a;
case 0x40a36b:c.instructions+=6;goto B40a36b;
case 0x40a371:c.instructions+=5;goto B40a371;
case 0x40a377:c.instructions+=4;goto B40a377;
case 0x40a378:c.instructions+=3;goto B40a378;
case 0x40a37e:c.instructions+=2;goto B40a37e;
case 0x40a37f:c.instructions+=1;goto B40a37f;
case 0x40a390:goto L40a390;
case 0x40a393:c.instructions+=11;goto B40a393;
case 0x40a394:c.instructions+=10;goto B40a394;
case 0x40a396:c.instructions+=9;goto B40a396;
case 0x40a399:c.instructions+=8;goto B40a399;
case 0x40a39b:c.instructions+=7;goto B40a39b;
case 0x40a39d:c.instructions+=6;goto B40a39d;
case 0x40a3a0:c.instructions+=5;goto B40a3a0;
case 0x40a3a1:c.instructions+=4;goto B40a3a1;
case 0x40a3a3:c.instructions+=3;goto B40a3a3;
case 0x40a3a6:c.instructions+=2;goto B40a3a6;
case 0x40a3a8:c.instructions+=1;goto B40a3a8;
case 0x40a3ae:goto L40a3ae;
case 0x40a3b0:c.instructions+=1;goto B40a3b0;
case 0x40a3b2:goto L40a3b2;
case 0x40a3b6:c.instructions+=10;goto B40a3b6;
case 0x40a3ba:c.instructions+=9;goto B40a3ba;
case 0x40a3be:c.instructions+=8;goto B40a3be;
case 0x40a3c2:c.instructions+=7;goto B40a3c2;
case 0x40a3c6:c.instructions+=6;goto B40a3c6;
case 0x40a3cc:c.instructions+=5;goto B40a3cc;
case 0x40a3d0:c.instructions+=4;goto B40a3d0;
case 0x40a3d4:c.instructions+=3;goto B40a3d4;
case 0x40a3da:c.instructions+=2;goto B40a3da;
case 0x40a3de:c.instructions+=1;goto B40a3de;
case 0x40a3e0:goto L40a3e0;
case 0x40a3e4:c.instructions+=2;goto B40a3e4;
case 0x40a3e5:c.instructions+=1;goto B40a3e5;
case 0x40a3ea:goto L40a3ea;
case 0x40a3ed:c.instructions+=6;goto B40a3ed;
case 0x40a3f3:c.instructions+=5;goto B40a3f3;
case 0x40a3f9:c.instructions+=4;goto B40a3f9;
case 0x40a3ff:c.instructions+=3;goto B40a3ff;
case 0x40a401:c.instructions+=2;goto B40a401;
case 0x40a404:c.instructions+=1;goto B40a404;
case 0x40a406:goto L40a406;
case 0x40a409:c.instructions+=4;goto B40a409;
case 0x40a40d:c.instructions+=3;goto B40a40d;
case 0x40a40e:c.instructions+=2;goto B40a40e;
case 0x40a40f:c.instructions+=1;goto B40a40f;
case 0x40a414:goto L40a414;
case 0x40a418:c.instructions+=2;goto B40a418;
case 0x40a41b:c.instructions+=1;goto B40a41b;
case 0x40a41d:goto L40a41d;
case 0x40a423:c.instructions+=2;goto B40a423;
case 0x40a429:c.instructions+=1;goto B40a429;
case 0x40a42d:goto L40a42d;
case 0x40a431:c.instructions+=8;goto B40a431;
case 0x40a435:c.instructions+=7;goto B40a435;
case 0x40a437:c.instructions+=6;goto B40a437;
case 0x40a43b:c.instructions+=5;goto B40a43b;
case 0x40a43d:c.instructions+=4;goto B40a43d;
case 0x40a443:c.instructions+=3;goto B40a443;
case 0x40a445:c.instructions+=2;goto B40a445;
case 0x40a448:c.instructions+=1;goto B40a448;
case 0x40a44a:goto L40a44a;
case 0x40a44c:c.instructions+=6;goto B40a44c;
case 0x40a44e:c.instructions+=5;goto B40a44e;
case 0x40a44f:c.instructions+=4;goto B40a44f;
case 0x40a452:c.instructions+=3;goto B40a452;
case 0x40a453:c.instructions+=2;goto B40a453;
case 0x40a456:c.instructions+=1;goto B40a456;
case 0x40a457:goto L40a457;
case 0x40a459:c.instructions+=4;goto B40a459;
case 0x40a45a:c.instructions+=3;goto B40a45a;
case 0x40a45b:c.instructions+=2;goto B40a45b;
case 0x40a45e:c.instructions+=1;goto B40a45e;
case 0x40a460:goto L40a460;
case 0x40a464:c.instructions+=2;goto B40a464;
case 0x40a46a:c.instructions+=1;goto B40a46a;
case 0x40a46c:goto L40a46c;
case 0x40a46f:c.instructions+=7;goto B40a46f;
case 0x40a475:c.instructions+=6;goto B40a475;
case 0x40a479:c.instructions+=5;goto B40a479;
case 0x40a47f:c.instructions+=4;goto B40a47f;
case 0x40a483:c.instructions+=3;goto B40a483;
case 0x40a488:c.instructions+=2;goto B40a488;
case 0x40a48d:c.instructions+=1;goto B40a48d;
case 0x40a48e:goto L40a48e;
case 0x40a490:c.instructions+=1;goto B40a490;
case 0x40a4a0:goto L40a4a0;
case 0x40a4a4:c.instructions+=4;goto B40a4a4;
case 0x40a4a6:c.instructions+=3;goto B40a4a6;
case 0x40a4a8:c.instructions+=2;goto B40a4a8;
case 0x40a4ae:c.instructions+=1;goto B40a4ae;
case 0x40a4b0:goto L40a4b0;
case 0x40a4b5:c.instructions+=3;goto B40a4b5;
case 0x40a4ba:c.instructions+=2;goto B40a4ba;
case 0x40a4bf:c.instructions+=1;goto B40a4bf;
case 0x40a4c4:goto L40a4c4;
case 0x40a4d0:goto L40a4d0;
case 0x40a4d2:c.instructions+=80;goto B40a4d2;
case 0x40a4d6:c.instructions+=79;goto B40a4d6;
case 0x40a4d8:c.instructions+=78;goto B40a4d8;
case 0x40a4db:c.instructions+=77;goto B40a4db;
case 0x40a4de:c.instructions+=76;goto B40a4de;
case 0x40a4e0:c.instructions+=75;goto B40a4e0;
case 0x40a4e3:c.instructions+=74;goto B40a4e3;
case 0x40a4e6:c.instructions+=73;goto B40a4e6;
case 0x40a4e9:c.instructions+=72;goto B40a4e9;
case 0x40a4ec:c.instructions+=71;goto B40a4ec;
case 0x40a4ef:c.instructions+=70;goto B40a4ef;
case 0x40a4f2:c.instructions+=69;goto B40a4f2;
case 0x40a4f5:c.instructions+=68;goto B40a4f5;
case 0x40a4f8:c.instructions+=67;goto B40a4f8;
case 0x40a4fb:c.instructions+=66;goto B40a4fb;
case 0x40a4fe:c.instructions+=65;goto B40a4fe;
case 0x40a501:c.instructions+=64;goto B40a501;
case 0x40a504:c.instructions+=63;goto B40a504;
case 0x40a507:c.instructions+=62;goto B40a507;
case 0x40a50a:c.instructions+=61;goto B40a50a;
case 0x40a50d:c.instructions+=60;goto B40a50d;
case 0x40a510:c.instructions+=59;goto B40a510;
case 0x40a513:c.instructions+=58;goto B40a513;
case 0x40a516:c.instructions+=57;goto B40a516;
case 0x40a519:c.instructions+=56;goto B40a519;
case 0x40a51c:c.instructions+=55;goto B40a51c;
case 0x40a51f:c.instructions+=54;goto B40a51f;
case 0x40a522:c.instructions+=53;goto B40a522;
case 0x40a525:c.instructions+=52;goto B40a525;
case 0x40a528:c.instructions+=51;goto B40a528;
case 0x40a52b:c.instructions+=50;goto B40a52b;
case 0x40a52e:c.instructions+=49;goto B40a52e;
case 0x40a531:c.instructions+=48;goto B40a531;
case 0x40a534:c.instructions+=47;goto B40a534;
case 0x40a537:c.instructions+=46;goto B40a537;
case 0x40a53a:c.instructions+=45;goto B40a53a;
case 0x40a53d:c.instructions+=44;goto B40a53d;
case 0x40a540:c.instructions+=43;goto B40a540;
case 0x40a543:c.instructions+=42;goto B40a543;
case 0x40a546:c.instructions+=41;goto B40a546;
case 0x40a549:c.instructions+=40;goto B40a549;
case 0x40a54c:c.instructions+=39;goto B40a54c;
case 0x40a54f:c.instructions+=38;goto B40a54f;
case 0x40a552:c.instructions+=37;goto B40a552;
case 0x40a555:c.instructions+=36;goto B40a555;
case 0x40a558:c.instructions+=35;goto B40a558;
case 0x40a55b:c.instructions+=34;goto B40a55b;
case 0x40a55e:c.instructions+=33;goto B40a55e;
case 0x40a561:c.instructions+=32;goto B40a561;
case 0x40a564:c.instructions+=31;goto B40a564;
case 0x40a567:c.instructions+=30;goto B40a567;
case 0x40a56a:c.instructions+=29;goto B40a56a;
case 0x40a56d:c.instructions+=28;goto B40a56d;
case 0x40a570:c.instructions+=27;goto B40a570;
case 0x40a573:c.instructions+=26;goto B40a573;
case 0x40a576:c.instructions+=25;goto B40a576;
case 0x40a579:c.instructions+=24;goto B40a579;
case 0x40a57c:c.instructions+=23;goto B40a57c;
case 0x40a57f:c.instructions+=22;goto B40a57f;
case 0x40a582:c.instructions+=21;goto B40a582;
case 0x40a585:c.instructions+=20;goto B40a585;
case 0x40a588:c.instructions+=19;goto B40a588;
case 0x40a58b:c.instructions+=18;goto B40a58b;
case 0x40a58e:c.instructions+=17;goto B40a58e;
case 0x40a591:c.instructions+=16;goto B40a591;
case 0x40a594:c.instructions+=15;goto B40a594;
case 0x40a597:c.instructions+=14;goto B40a597;
case 0x40a59a:c.instructions+=13;goto B40a59a;
case 0x40a59d:c.instructions+=12;goto B40a59d;
case 0x40a5a0:c.instructions+=11;goto B40a5a0;
case 0x40a5a3:c.instructions+=10;goto B40a5a3;
case 0x40a5a6:c.instructions+=9;goto B40a5a6;
case 0x40a5a9:c.instructions+=8;goto B40a5a9;
case 0x40a5ac:c.instructions+=7;goto B40a5ac;
case 0x40a5af:c.instructions+=6;goto B40a5af;
case 0x40a5b2:c.instructions+=5;goto B40a5b2;
case 0x40a5b5:c.instructions+=4;goto B40a5b5;
case 0x40a5b8:c.instructions+=3;goto B40a5b8;
case 0x40a5bb:c.instructions+=2;goto B40a5bb;
case 0x40a5be:c.instructions+=1;goto B40a5be;
case 0x40a5d0:goto L40a5d0;
case 0x40a5d3:c.instructions+=2;goto B40a5d3;
case 0x40a5d6:c.instructions+=1;goto B40a5d6;
case 0x40a5d8:goto L40a5d8;
case 0x40a5dc:c.instructions+=4;goto B40a5dc;
case 0x40a5e0:c.instructions+=3;goto B40a5e0;
case 0x40a5e3:c.instructions+=2;goto B40a5e3;
case 0x40a5e5:c.instructions+=1;goto B40a5e5;
case 0x40a5e7:goto L40a5e7;
case 0x40a5eb:c.instructions+=6;goto B40a5eb;
case 0x40a5ef:c.instructions+=5;goto B40a5ef;
case 0x40a5f2:c.instructions+=4;goto B40a5f2;
case 0x40a5f5:c.instructions+=3;goto B40a5f5;
case 0x40a5f9:c.instructions+=2;goto B40a5f9;
case 0x40a5fd:c.instructions+=1;goto B40a5fd;
case 0x40a600:goto L40a600;
case 0x40a603:goto L40a603;
case 0x40a606:goto L40a606;
case 0x40a60a:c.instructions+=2;goto B40a60a;
case 0x40a60c:c.instructions+=1;goto B40a60c;
case 0x40a60e:goto L40a60e;
case 0x40a610:c.instructions+=2;goto B40a610;
case 0x40a618:c.instructions+=1;goto B40a618;
case 0x40a620:goto L40a620;
case 0x40a621:c.instructions+=9;goto B40a621;
case 0x40a622:c.instructions+=8;goto B40a622;
case 0x40a623:c.instructions+=7;goto B40a623;
case 0x40a624:c.instructions+=6;goto B40a624;
case 0x40a625:c.instructions+=5;goto B40a625;
case 0x40a627:c.instructions+=4;goto B40a627;
case 0x40a62a:c.instructions+=3;goto B40a62a;
case 0x40a62b:c.instructions+=2;goto B40a62b;
case 0x40a630:c.instructions+=1;goto B40a630;
case 0x40a632:goto L40a632;
case 0x40a636:goto L40a636;
case 0x40a638:c.instructions+=6;goto B40a638;
case 0x40a63b:c.instructions+=5;goto B40a63b;
case 0x40a63d:c.instructions+=4;goto B40a63d;
case 0x40a643:c.instructions+=3;goto B40a643;
case 0x40a645:c.instructions+=2;goto B40a645;
case 0x40a648:c.instructions+=1;goto B40a648;
case 0x40a64a:goto L40a64a;
case 0x40a64c:c.instructions+=1;goto B40a64c;
case 0x40a64e:goto L40a64e;
case 0x40a650:c.instructions+=2;goto B40a650;
case 0x40a652:c.instructions+=1;goto B40a652;
case 0x40a654:goto L40a654;
case 0x40a656:c.instructions+=2;goto B40a656;
case 0x40a658:c.instructions+=1;goto B40a658;
case 0x40a65a:goto L40a65a;
case 0x40a65d:c.instructions+=1;goto B40a65d;
case 0x40a660:goto L40a660;
case 0x40a663:c.instructions+=6;goto B40a663;
case 0x40a664:c.instructions+=5;goto B40a664;
case 0x40a665:c.instructions+=4;goto B40a665;
case 0x40a668:c.instructions+=3;goto B40a668;
case 0x40a66a:c.instructions+=2;goto B40a66a;
case 0x40a66d:c.instructions+=1;goto B40a66d;
case 0x40a66f:goto L40a66f;
case 0x40a675:c.instructions+=1;goto B40a675;
case 0x40a677:goto L40a677;
case 0x40a67d:c.instructions+=1;goto B40a67d;
case 0x40a681:goto L40a681;
case 0x40a685:c.instructions+=2;goto B40a685;
case 0x40a688:c.instructions+=1;goto B40a688;
case 0x40a68a:goto L40a68a;
case 0x40a690:c.instructions+=4;goto B40a690;
case 0x40a691:c.instructions+=3;goto B40a691;
case 0x40a693:c.instructions+=2;goto B40a693;
case 0x40a695:c.instructions+=1;goto B40a695;
case 0x40a697:goto L40a697;
case 0x40a69d:c.instructions+=3;goto B40a69d;
case 0x40a69e:c.instructions+=2;goto B40a69e;
case 0x40a6a0:c.instructions+=1;goto B40a6a0;
case 0x40a6a5:goto L40a6a5;
case 0x40a6ab:c.instructions+=5;goto B40a6ab;
case 0x40a6ac:c.instructions+=4;goto B40a6ac;
case 0x40a6b2:c.instructions+=3;goto B40a6b2;
case 0x40a6b3:c.instructions+=2;goto B40a6b3;
case 0x40a6b5:c.instructions+=1;goto B40a6b5;
case 0x40a6b7:goto L40a6b7;
case 0x40a6bb:goto L40a6bb;
case 0x40a6c1:c.instructions+=1;goto B40a6c1;
case 0x40a6c3:goto L40a6c3;
case 0x40a6c4:c.instructions+=2;goto B40a6c4;
case 0x40a6ca:c.instructions+=1;goto B40a6ca;
case 0x40a6ce:goto L40a6ce;
case 0x40a6d4:c.instructions+=1;goto B40a6d4;
case 0x40a6d6:goto L40a6d6;
case 0x40a6d7:c.instructions+=5;goto B40a6d7;
case 0x40a6d8:c.instructions+=4;goto B40a6d8;
case 0x40a6d9:c.instructions+=3;goto B40a6d9;
case 0x40a6da:c.instructions+=2;goto B40a6da;
case 0x40a6db:c.instructions+=1;goto B40a6db;
case 0x40a6e0:goto L40a6e0;
case 0x40a6e3:c.instructions+=12;goto B40a6e3;
case 0x40a6e4:c.instructions+=11;goto B40a6e4;
case 0x40a6e8:c.instructions+=10;goto B40a6e8;
case 0x40a6ea:c.instructions+=9;goto B40a6ea;
case 0x40a6eb:c.instructions+=8;goto B40a6eb;
case 0x40a6ec:c.instructions+=7;goto B40a6ec;
case 0x40a6ed:c.instructions+=6;goto B40a6ed;
case 0x40a6f1:c.instructions+=5;goto B40a6f1;
case 0x40a6f3:c.instructions+=4;goto B40a6f3;
case 0x40a6f7:c.instructions+=3;goto B40a6f7;
case 0x40a6fb:c.instructions+=2;goto B40a6fb;
case 0x40a6fe:c.instructions+=1;goto B40a6fe;
case 0x40a700:goto L40a700;
case 0x40a703:goto L40a703;
case 0x40a706:c.instructions+=9;goto B40a706;
case 0x40a708:c.instructions+=8;goto B40a708;
case 0x40a709:c.instructions+=7;goto B40a709;
case 0x40a70b:c.instructions+=6;goto B40a70b;
case 0x40a70e:c.instructions+=5;goto B40a70e;
case 0x40a70f:c.instructions+=4;goto B40a70f;
case 0x40a711:c.instructions+=3;goto B40a711;
case 0x40a713:c.instructions+=2;goto B40a713;
case 0x40a715:c.instructions+=1;goto B40a715;
case 0x40a717:goto L40a717;
case 0x40a719:goto L40a719;
case 0x40a71d:c.instructions+=2;goto B40a71d;
case 0x40a71e:c.instructions+=1;goto B40a71e;
case 0x40a723:goto L40a723;
case 0x40a727:c.instructions+=3;goto B40a727;
case 0x40a72a:c.instructions+=2;goto B40a72a;
case 0x40a72c:c.instructions+=1;goto B40a72c;
case 0x40a732:goto L40a732;
case 0x40a739:c.instructions+=2;goto B40a739;
case 0x40a73d:c.instructions+=1;goto B40a73d;
case 0x40a740:goto L40a740;
case 0x40a744:c.instructions+=3;goto B40a744;
case 0x40a748:c.instructions+=2;goto B40a748;
case 0x40a74b:c.instructions+=1;goto B40a74b;
case 0x40a751:goto L40a751;
case 0x40a753:c.instructions+=8;goto B40a753;
case 0x40a756:c.instructions+=7;goto B40a756;
case 0x40a759:c.instructions+=6;goto B40a759;
case 0x40a75d:c.instructions+=5;goto B40a75d;
case 0x40a760:c.instructions+=4;goto B40a760;
case 0x40a763:c.instructions+=3;goto B40a763;
case 0x40a767:c.instructions+=2;goto B40a767;
case 0x40a76b:c.instructions+=1;goto B40a76b;
case 0x40a76d:goto L40a76d;
case 0x40a771:c.instructions+=4;goto B40a771;
case 0x40a774:c.instructions+=3;goto B40a774;
case 0x40a775:c.instructions+=2;goto B40a775;
case 0x40a778:c.instructions+=1;goto B40a778;
case 0x40a77d:goto L40a77d;
case 0x40a77f:c.instructions+=1;goto B40a77f;
case 0x40a784:goto L40a784;
case 0x40a788:c.instructions+=1;goto B40a788;
case 0x40a78a:goto L40a78a;
case 0x40a78e:c.instructions+=1;goto B40a78e;
case 0x40a790:goto L40a790;
case 0x40a794:c.instructions+=12;goto B40a794;
case 0x40a798:c.instructions+=11;goto B40a798;
case 0x40a79a:c.instructions+=10;goto B40a79a;
case 0x40a79e:c.instructions+=9;goto B40a79e;
case 0x40a7a0:c.instructions+=8;goto B40a7a0;
case 0x40a7a2:c.instructions+=7;goto B40a7a2;
case 0x40a7a4:c.instructions+=6;goto B40a7a4;
case 0x40a7a7:c.instructions+=5;goto B40a7a7;
case 0x40a7ab:c.instructions+=4;goto B40a7ab;
case 0x40a7ad:c.instructions+=3;goto B40a7ad;
case 0x40a7af:c.instructions+=2;goto B40a7af;
case 0x40a7b2:c.instructions+=1;goto B40a7b2;
case 0x40a7b4:goto L40a7b4;
case 0x40a7b6:c.instructions+=1;goto B40a7b6;
case 0x40a7ba:goto L40a7ba;
case 0x40a7bc:c.instructions+=3;goto B40a7bc;
case 0x40a7bf:c.instructions+=2;goto B40a7bf;
case 0x40a7c2:c.instructions+=1;goto B40a7c2;
case 0x40a7c4:goto L40a7c4;
case 0x40a7ca:c.instructions+=1;goto B40a7ca;
case 0x40a7cc:goto L40a7cc;
case 0x40a7d2:goto L40a7d2;
case 0x40a7d6:c.instructions+=7;goto B40a7d6;
case 0x40a7d8:c.instructions+=6;goto B40a7d8;
case 0x40a7db:c.instructions+=5;goto B40a7db;
case 0x40a7df:c.instructions+=4;goto B40a7df;
case 0x40a7e1:c.instructions+=3;goto B40a7e1;
case 0x40a7e3:c.instructions+=2;goto B40a7e3;
case 0x40a7e6:c.instructions+=1;goto B40a7e6;
case 0x40a7e8:goto L40a7e8;
case 0x40a7ea:c.instructions+=1;goto B40a7ea;
case 0x40a7ee:goto L40a7ee;
case 0x40a7f0:c.instructions+=3;goto B40a7f0;
case 0x40a7f3:c.instructions+=2;goto B40a7f3;
case 0x40a7f6:c.instructions+=1;goto B40a7f6;
case 0x40a7f8:goto L40a7f8;
case 0x40a7fe:c.instructions+=1;goto B40a7fe;
case 0x40a800:goto L40a800;
case 0x40a806:goto L40a806;
case 0x40a80a:c.instructions+=7;goto B40a80a;
case 0x40a80c:c.instructions+=6;goto B40a80c;
case 0x40a80f:c.instructions+=5;goto B40a80f;
case 0x40a813:c.instructions+=4;goto B40a813;
case 0x40a815:c.instructions+=3;goto B40a815;
case 0x40a817:c.instructions+=2;goto B40a817;
case 0x40a81a:c.instructions+=1;goto B40a81a;
case 0x40a81c:goto L40a81c;
case 0x40a81e:c.instructions+=1;goto B40a81e;
case 0x40a822:goto L40a822;
case 0x40a824:c.instructions+=3;goto B40a824;
case 0x40a827:c.instructions+=2;goto B40a827;
case 0x40a82a:c.instructions+=1;goto B40a82a;
case 0x40a82c:goto L40a82c;
case 0x40a832:c.instructions+=1;goto B40a832;
case 0x40a834:goto L40a834;
case 0x40a83a:goto L40a83a;
case 0x40a83e:c.instructions+=7;goto B40a83e;
case 0x40a840:c.instructions+=6;goto B40a840;
case 0x40a843:c.instructions+=5;goto B40a843;
case 0x40a847:c.instructions+=4;goto B40a847;
case 0x40a849:c.instructions+=3;goto B40a849;
case 0x40a84b:c.instructions+=2;goto B40a84b;
case 0x40a84e:c.instructions+=1;goto B40a84e;
case 0x40a850:goto L40a850;
case 0x40a852:c.instructions+=1;goto B40a852;
case 0x40a856:goto L40a856;
case 0x40a858:c.instructions+=3;goto B40a858;
case 0x40a85b:c.instructions+=2;goto B40a85b;
case 0x40a85e:c.instructions+=1;goto B40a85e;
case 0x40a860:goto L40a860;
case 0x40a866:c.instructions+=1;goto B40a866;
case 0x40a868:goto L40a868;
case 0x40a86e:goto L40a86e;
case 0x40a872:c.instructions+=7;goto B40a872;
case 0x40a874:c.instructions+=6;goto B40a874;
case 0x40a877:c.instructions+=5;goto B40a877;
case 0x40a87b:c.instructions+=4;goto B40a87b;
case 0x40a87d:c.instructions+=3;goto B40a87d;
case 0x40a87f:c.instructions+=2;goto B40a87f;
case 0x40a882:c.instructions+=1;goto B40a882;
case 0x40a884:goto L40a884;
case 0x40a886:c.instructions+=1;goto B40a886;
case 0x40a88a:goto L40a88a;
case 0x40a88c:c.instructions+=3;goto B40a88c;
case 0x40a88f:c.instructions+=2;goto B40a88f;
case 0x40a896:c.instructions+=1;goto B40a896;
case 0x40a898:goto L40a898;
case 0x40a899:c.instructions+=2;goto B40a899;
case 0x40a89c:c.instructions+=1;goto B40a89c;
case 0x40a89e:goto L40a89e;
case 0x40a89f:c.instructions+=1;goto B40a89f;
case 0x40a8a2:goto L40a8a2;
case 0x40a8a4:c.instructions+=2;goto B40a8a4;
case 0x40a8a8:c.instructions+=1;goto B40a8a8;
case 0x40a8ae:goto L40a8ae;
case 0x40a8af:c.instructions+=5;goto B40a8af;
case 0x40a8b0:c.instructions+=4;goto B40a8b0;
case 0x40a8b1:c.instructions+=3;goto B40a8b1;
case 0x40a8b2:c.instructions+=2;goto B40a8b2;
case 0x40a8b5:c.instructions+=1;goto B40a8b5;
case 0x40a8c0:goto L40a8c0;
case 0x40a8c3:c.instructions+=9;goto B40a8c3;
case 0x40a8c7:c.instructions+=8;goto B40a8c7;
case 0x40a8c8:c.instructions+=7;goto B40a8c8;
case 0x40a8c9:c.instructions+=6;goto B40a8c9;
case 0x40a8cb:c.instructions+=5;goto B40a8cb;
case 0x40a8ce:c.instructions+=4;goto B40a8ce;
case 0x40a8cf:c.instructions+=3;goto B40a8cf;
case 0x40a8d2:c.instructions+=2;goto B40a8d2;
case 0x40a8d6:c.instructions+=1;goto B40a8d6;
case 0x40a8db:goto L40a8db;
case 0x40a8de:c.instructions+=5;goto B40a8de;
case 0x40a8e0:c.instructions+=4;goto B40a8e0;
case 0x40a8e2:c.instructions+=3;goto B40a8e2;
case 0x40a8e4:c.instructions+=2;goto B40a8e4;
case 0x40a8e8:c.instructions+=1;goto B40a8e8;
case 0x40a8ea:goto L40a8ea;
case 0x40a8ed:c.instructions+=1;goto B40a8ed;
case 0x40a8f0:goto L40a8f0;
case 0x40a8f2:c.instructions+=7;goto B40a8f2;
case 0x40a8f5:c.instructions+=6;goto B40a8f5;
case 0x40a8fb:c.instructions+=5;goto B40a8fb;
case 0x40a8fd:c.instructions+=4;goto B40a8fd;
case 0x40a903:c.instructions+=3;goto B40a903;
case 0x40a905:c.instructions+=2;goto B40a905;
case 0x40a908:c.instructions+=1;goto B40a908;
case 0x40a90a:goto L40a90a;
case 0x40a90b:c.instructions+=3;goto B40a90b;
case 0x40a90e:c.instructions+=2;goto B40a90e;
case 0x40a910:c.instructions+=1;goto B40a910;
case 0x40a912:goto L40a912;
case 0x40a914:goto L40a914;
case 0x40a918:c.instructions+=1;goto B40a918;
case 0x40a91a:goto L40a91a;
case 0x40a91c:c.instructions+=2;goto B40a91c;
case 0x40a920:c.instructions+=1;goto B40a920;
case 0x40a926:goto L40a926;
case 0x40a92a:c.instructions+=3;goto B40a92a;
case 0x40a92e:c.instructions+=2;goto B40a92e;
case 0x40a92f:c.instructions+=1;goto B40a92f;
case 0x40a930:goto L40a930;
case 0x40a934:c.instructions+=4;goto B40a934;
case 0x40a936:c.instructions+=3;goto B40a936;
case 0x40a93a:c.instructions+=2;goto B40a93a;
case 0x40a93e:c.instructions+=1;goto B40a93e;
case 0x40a940:goto L40a940;
case 0x40a944:c.instructions+=2;goto B40a944;
case 0x40a948:c.instructions+=1;goto B40a948;
case 0x40a94a:goto L40a94a;
case 0x40a94d:c.instructions+=2;goto B40a94d;
case 0x40a94f:c.instructions+=1;goto B40a94f;
case 0x40a951:goto L40a951;
case 0x40a958:c.instructions+=4;goto B40a958;
case 0x40a95b:c.instructions+=3;goto B40a95b;
case 0x40a95e:c.instructions+=2;goto B40a95e;
case 0x40a965:c.instructions+=1;goto B40a965;
case 0x40a967:goto L40a967;
case 0x40a96a:c.instructions+=4;goto B40a96a;
case 0x40a96c:c.instructions+=3;goto B40a96c;
case 0x40a96f:c.instructions+=2;goto B40a96f;
case 0x40a976:c.instructions+=1;goto B40a976;
case 0x40a978:goto L40a978;
case 0x40a97a:c.instructions+=1;goto B40a97a;
case 0x40a980:goto L40a980;
case 0x40a982:c.instructions+=2;goto B40a982;
case 0x40a984:c.instructions+=1;goto B40a984;
case 0x40a987:goto L40a987;
case 0x40a98c:c.instructions+=7;goto B40a98c;
case 0x40a98f:c.instructions+=6;goto B40a98f;
case 0x40a993:c.instructions+=5;goto B40a993;
case 0x40a995:c.instructions+=4;goto B40a995;
case 0x40a998:c.instructions+=3;goto B40a998;
case 0x40a99c:c.instructions+=2;goto B40a99c;
case 0x40a9a2:c.instructions+=1;goto B40a9a2;
case 0x40a9a5:goto L40a9a5;
case 0x40a9a7:c.instructions+=4;goto B40a9a7;
case 0x40a9aa:c.instructions+=3;goto B40a9aa;
case 0x40a9ab:c.instructions+=2;goto B40a9ab;
case 0x40a9ad:c.instructions+=1;goto B40a9ad;
case 0x40a9b0:goto L40a9b0;
case 0x40a9b5:c.instructions+=9;goto B40a9b5;
case 0x40a9b8:c.instructions+=8;goto B40a9b8;
case 0x40a9bc:c.instructions+=7;goto B40a9bc;
case 0x40a9bd:c.instructions+=6;goto B40a9bd;
case 0x40a9c0:c.instructions+=5;goto B40a9c0;
case 0x40a9c3:c.instructions+=4;goto B40a9c3;
case 0x40a9c7:c.instructions+=3;goto B40a9c7;
case 0x40a9cd:c.instructions+=2;goto B40a9cd;
case 0x40a9d0:c.instructions+=1;goto B40a9d0;
case 0x40a9d2:goto L40a9d2;
case 0x40a9d6:c.instructions+=9;goto B40a9d6;
case 0x40a9da:c.instructions+=8;goto B40a9da;
case 0x40a9dd:c.instructions+=7;goto B40a9dd;
case 0x40a9e1:c.instructions+=6;goto B40a9e1;
case 0x40a9e5:c.instructions+=5;goto B40a9e5;
case 0x40a9e8:c.instructions+=4;goto B40a9e8;
case 0x40a9e9:c.instructions+=3;goto B40a9e9;
case 0x40a9eb:c.instructions+=2;goto B40a9eb;
case 0x40a9ef:c.instructions+=1;goto B40a9ef;
case 0x40a9f5:goto L40a9f5;
case 0x40a9f9:c.instructions+=2;goto B40a9f9;
case 0x40a9fb:c.instructions+=1;goto B40a9fb;
case 0x40a9fc:goto L40a9fc;
case 0x40aa00:c.instructions+=5;goto B40aa00;
case 0x40aa01:c.instructions+=4;goto B40aa01;
case 0x40aa03:c.instructions+=3;goto B40aa03;
case 0x40aa04:c.instructions+=2;goto B40aa04;
case 0x40aa06:c.instructions+=1;goto B40aa06;
case 0x40aa0b:goto L40aa0b;
case 0x40aa0c:c.instructions+=4;goto B40aa0c;
case 0x40aa0d:c.instructions+=3;goto B40aa0d;
case 0x40aa0e:c.instructions+=2;goto B40aa0e;
case 0x40aa11:c.instructions+=1;goto B40aa11;
case 0x40aa20:goto L40aa20;
case 0x40aa25:c.instructions+=4;goto B40aa25;
case 0x40aa27:c.instructions+=3;goto B40aa27;
case 0x40aa2b:c.instructions+=2;goto B40aa2b;
case 0x40aa2d:c.instructions+=1;goto B40aa2d;
case 0x40aa2f:goto L40aa2f;
case 0x40aa34:c.instructions+=2;goto B40aa34;
case 0x40aa36:c.instructions+=1;goto B40aa36;
case 0x40aa38:goto L40aa38;
case 0x40aa3e:c.instructions+=1;goto B40aa3e;
case 0x40aa40:goto L40aa40;
case 0x40aa46:goto L40aa46;
case 0x40aa48:c.instructions+=5;goto B40aa48;
case 0x40aa4e:c.instructions+=4;goto B40aa4e;
case 0x40aa52:c.instructions+=3;goto B40aa52;
case 0x40aa54:c.instructions+=2;goto B40aa54;
case 0x40aa57:c.instructions+=1;goto B40aa57;
case 0x40aa59:goto L40aa59;
case 0x40aa5b:c.instructions+=4;goto B40aa5b;
case 0x40aa61:c.instructions+=3;goto B40aa61;
case 0x40aa63:c.instructions+=2;goto B40aa63;
case 0x40aa66:c.instructions+=1;goto B40aa66;
case 0x40aa68:goto L40aa68;
case 0x40aa6a:c.instructions+=2;goto B40aa6a;
case 0x40aa70:c.instructions+=1;goto B40aa70;
case 0x40aa73:goto L40aa73;
case 0x40aa75:c.instructions+=4;goto B40aa75;
case 0x40aa7b:c.instructions+=3;goto B40aa7b;
case 0x40aa7d:c.instructions+=2;goto B40aa7d;
case 0x40aa80:c.instructions+=1;goto B40aa80;
case 0x40aa82:goto L40aa82;
case 0x40aa84:c.instructions+=1;goto B40aa84;
case 0x40aa90:goto L40aa90;
case 0x40aa94:c.instructions+=2;goto B40aa94;
case 0x40aa96:c.instructions+=1;goto B40aa96;
case 0x40aa98:goto L40aa98;
case 0x40aa9b:c.instructions+=1;goto B40aa9b;
case 0x40aa9d:goto L40aa9d;
case 0x40aaa0:c.instructions+=2;goto B40aaa0;
case 0x40aaa2:c.instructions+=1;goto B40aaa2;
case 0x40aaa4:goto L40aaa4;
case 0x40aaa8:c.instructions+=3;goto B40aaa8;
case 0x40aaab:c.instructions+=2;goto B40aaab;
case 0x40aab1:c.instructions+=1;goto B40aab1;
case 0x40aab3:goto L40aab3;
case 0x40aab9:c.instructions+=2;goto B40aab9;
case 0x40aabf:c.instructions+=1;goto B40aabf;
case 0x40aac1:goto L40aac1;
case 0x40aac4:c.instructions+=1;goto B40aac4;
case 0x40aac6:goto L40aac6;
case 0x40aac9:c.instructions+=1;goto B40aac9;
case 0x40aacb:goto L40aacb;
case 0x40aace:c.instructions+=2;goto B40aace;
case 0x40aad0:c.instructions+=1;goto B40aad0;
case 0x40aad2:goto L40aad2;
case 0x40aad6:c.instructions+=2;goto B40aad6;
case 0x40aad9:c.instructions+=1;goto B40aad9;
case 0x40aadb:goto L40aadb;
case 0x40aae1:goto L40aae1;
case 0x40aae8:goto L40aae8;
case 0x40aaea:c.instructions+=2;goto B40aaea;
case 0x40aaed:c.instructions+=1;goto B40aaed;
case 0x40aaef:goto L40aaef;
case 0x40aaf4:c.instructions+=1;goto B40aaf4;
case 0x40aaf7:goto L40aaf7;
case 0x40aaf9:c.instructions+=1;goto B40aaf9;
case 0x40aafc:goto L40aafc;
case 0x40aafe:c.instructions+=1;goto B40aafe;
case 0x40ab10:goto L40ab10;
case 0x40ab11:c.instructions+=10;goto B40ab11;
case 0x40ab15:c.instructions+=9;goto B40ab15;
case 0x40ab16:c.instructions+=8;goto B40ab16;
case 0x40ab17:c.instructions+=7;goto B40ab17;
case 0x40ab1a:c.instructions+=6;goto B40ab1a;
case 0x40ab1d:c.instructions+=5;goto B40ab1d;
case 0x40ab1f:c.instructions+=4;goto B40ab1f;
case 0x40ab20:c.instructions+=3;goto B40ab20;
case 0x40ab28:c.instructions+=2;goto B40ab28;
case 0x40ab2a:c.instructions+=1;goto B40ab2a;
case 0x40ab2c:goto L40ab2c;
case 0x40ab2d:c.instructions+=3;goto B40ab2d;
case 0x40ab31:c.instructions+=2;goto B40ab31;
case 0x40ab34:c.instructions+=1;goto B40ab34;
case 0x40ab38:goto L40ab38;
case 0x40ab3a:c.instructions+=2;goto B40ab3a;
case 0x40ab3c:c.instructions+=1;goto B40ab3c;
case 0x40ab3e:goto L40ab3e;
case 0x40ab41:c.instructions+=6;goto B40ab41;
case 0x40ab45:c.instructions+=5;goto B40ab45;
case 0x40ab49:c.instructions+=4;goto B40ab49;
case 0x40ab4b:c.instructions+=3;goto B40ab4b;
case 0x40ab4d:c.instructions+=2;goto B40ab4d;
case 0x40ab50:c.instructions+=1;goto B40ab50;
case 0x40ab52:goto L40ab52;
case 0x40ab57:c.instructions+=1;goto B40ab57;
case 0x40ab59:goto L40ab59;
case 0x40ab5c:c.instructions+=6;goto B40ab5c;
case 0x40ab60:c.instructions+=5;goto B40ab60;
case 0x40ab64:c.instructions+=4;goto B40ab64;
case 0x40ab66:c.instructions+=3;goto B40ab66;
case 0x40ab68:c.instructions+=2;goto B40ab68;
case 0x40ab6b:c.instructions+=1;goto B40ab6b;
case 0x40ab6d:goto L40ab6d;
case 0x40ab70:c.instructions+=4;goto B40ab70;
case 0x40ab73:c.instructions+=3;goto B40ab73;
case 0x40ab77:c.instructions+=2;goto B40ab77;
case 0x40ab79:c.instructions+=1;goto B40ab79;
case 0x40ab7b:goto L40ab7b;
case 0x40ab7f:c.instructions+=3;goto B40ab7f;
case 0x40ab81:c.instructions+=2;goto B40ab81;
case 0x40ab84:c.instructions+=1;goto B40ab84;
case 0x40ab86:goto L40ab86;
case 0x40ab8a:c.instructions+=2;goto B40ab8a;
case 0x40ab8c:c.instructions+=1;goto B40ab8c;
case 0x40ab8e:goto L40ab8e;
case 0x40ab90:goto L40ab90;
case 0x40ab91:c.instructions+=3;goto B40ab91;
case 0x40ab94:c.instructions+=2;goto B40ab94;
case 0x40ab96:c.instructions+=1;goto B40ab96;
case 0x40ab98:goto L40ab98;
case 0x40ab99:goto L40ab99;
case 0x40ab9a:c.instructions+=5;goto B40ab9a;
case 0x40ab9b:c.instructions+=4;goto B40ab9b;
case 0x40ab9d:c.instructions+=3;goto B40ab9d;
case 0x40ab9e:c.instructions+=2;goto B40ab9e;
case 0x40ab9f:c.instructions+=1;goto B40ab9f;
case 0x40abb0:goto L40abb0;
case 0x40abb4:c.instructions+=7;goto B40abb4;
case 0x40abb5:c.instructions+=6;goto B40abb5;
case 0x40abb7:c.instructions+=5;goto B40abb7;
case 0x40abb9:c.instructions+=4;goto B40abb9;
case 0x40abbb:c.instructions+=3;goto B40abbb;
case 0x40abbc:c.instructions+=2;goto B40abbc;
case 0x40abbe:c.instructions+=1;goto B40abbe;
case 0x40abc3:goto L40abc3;
case 0x40abc5:c.instructions+=3;goto B40abc5;
case 0x40abc7:c.instructions+=2;goto B40abc7;
case 0x40abca:c.instructions+=1;goto B40abca;
case 0x40abcc:goto L40abcc;
case 0x40abcf:c.instructions+=2;goto B40abcf;
case 0x40abd3:c.instructions+=1;goto B40abd3;
case 0x40abd5:goto L40abd5;
case 0x40abdb:c.instructions+=3;goto B40abdb;
case 0x40abdd:c.instructions+=2;goto B40abdd;
case 0x40abde:c.instructions+=1;goto B40abde;
case 0x40abe0:goto L40abe0;
case 0x40abe2:c.instructions+=1;goto B40abe2;
case 0x40abe4:goto L40abe4;
case 0x40abe8:c.instructions+=2;goto B40abe8;
case 0x40abec:c.instructions+=1;goto B40abec;
case 0x40abee:goto L40abee;
case 0x40abf3:c.instructions+=1;goto B40abf3;
case 0x40abf5:goto L40abf5;
case 0x40abf8:c.instructions+=2;goto B40abf8;
case 0x40abfa:c.instructions+=1;goto B40abfa;
case 0x40abfc:goto L40abfc;
case 0x40ac03:c.instructions+=1;goto B40ac03;
case 0x40ac05:goto L40ac05;
case 0x40ac07:goto L40ac07;
case 0x40ac0b:c.instructions+=1;goto B40ac0b;
case 0x40ac0d:goto L40ac0d;
case 0x40ac10:c.instructions+=1;goto B40ac10;
case 0x40ac12:goto L40ac12;
case 0x40ac17:c.instructions+=1;goto B40ac17;
case 0x40ac1a:goto L40ac1a;
case 0x40ac1c:c.instructions+=1;goto B40ac1c;
case 0x40ac20:goto L40ac20;
case 0x40ac21:c.instructions+=8;goto B40ac21;
case 0x40ac22:c.instructions+=7;goto B40ac22;
case 0x40ac26:c.instructions+=6;goto B40ac26;
case 0x40ac27:c.instructions+=5;goto B40ac27;
case 0x40ac2c:c.instructions+=4;goto B40ac2c;
case 0x40ac2e:c.instructions+=3;goto B40ac2e;
case 0x40ac30:c.instructions+=2;goto B40ac30;
case 0x40ac32:c.instructions+=1;goto B40ac32;
case 0x40ac37:goto L40ac37;
case 0x40ac3a:c.instructions+=3;goto B40ac3a;
case 0x40ac3b:c.instructions+=2;goto B40ac3b;
case 0x40ac3d:c.instructions+=1;goto B40ac3d;
case 0x40ac42:goto L40ac42;
case 0x40ac45:c.instructions+=3;goto B40ac45;
case 0x40ac46:c.instructions+=2;goto B40ac46;
case 0x40ac48:c.instructions+=1;goto B40ac48;
case 0x40ac4d:goto L40ac4d;
case 0x40ac50:c.instructions+=3;goto B40ac50;
case 0x40ac51:c.instructions+=2;goto B40ac51;
case 0x40ac53:c.instructions+=1;goto B40ac53;
case 0x40ac58:goto L40ac58;
case 0x40ac5b:c.instructions+=3;goto B40ac5b;
case 0x40ac5c:c.instructions+=2;goto B40ac5c;
case 0x40ac5e:c.instructions+=1;goto B40ac5e;
case 0x40ac63:goto L40ac63;
case 0x40ac66:c.instructions+=3;goto B40ac66;
case 0x40ac67:c.instructions+=2;goto B40ac67;
case 0x40ac69:c.instructions+=1;goto B40ac69;
case 0x40ac6e:goto L40ac6e;
case 0x40ac71:c.instructions+=3;goto B40ac71;
case 0x40ac72:c.instructions+=2;goto B40ac72;
case 0x40ac73:c.instructions+=1;goto B40ac73;
case 0x40ac78:goto L40ac78;
case 0x40ac7b:c.instructions+=5;goto B40ac7b;
case 0x40ac80:c.instructions+=4;goto B40ac80;
case 0x40ac83:c.instructions+=3;goto B40ac83;
case 0x40ac84:c.instructions+=2;goto B40ac84;
case 0x40ac86:c.instructions+=1;goto B40ac86;
case 0x40ac8b:goto L40ac8b;
case 0x40ac90:c.instructions+=4;goto B40ac90;
case 0x40ac93:c.instructions+=3;goto B40ac93;
case 0x40ac94:c.instructions+=2;goto B40ac94;
case 0x40ac96:c.instructions+=1;goto B40ac96;
case 0x40ac9b:goto L40ac9b;
case 0x40aca0:c.instructions+=4;goto B40aca0;
case 0x40aca3:c.instructions+=3;goto B40aca3;
case 0x40aca4:c.instructions+=2;goto B40aca4;
case 0x40aca6:c.instructions+=1;goto B40aca6;
case 0x40acab:goto L40acab;
case 0x40acb0:c.instructions+=4;goto B40acb0;
case 0x40acb3:c.instructions+=3;goto B40acb3;
case 0x40acb4:c.instructions+=2;goto B40acb4;
case 0x40acb6:c.instructions+=1;goto B40acb6;
case 0x40acbb:goto L40acbb;
case 0x40acbe:c.instructions+=1;goto B40acbe;
case 0x40acc3:goto L40acc3;
case 0x40acc8:c.instructions+=4;goto B40acc8;
case 0x40accb:c.instructions+=3;goto B40accb;
case 0x40accc:c.instructions+=2;goto B40accc;
case 0x40acce:c.instructions+=1;goto B40acce;
case 0x40acd3:goto L40acd3;
case 0x40acd8:c.instructions+=3;goto B40acd8;
case 0x40acd9:c.instructions+=2;goto B40acd9;
case 0x40acdb:c.instructions+=1;goto B40acdb;
case 0x40ace0:goto L40ace0;
case 0x40ace5:c.instructions+=4;goto B40ace5;
case 0x40ace8:c.instructions+=3;goto B40ace8;
case 0x40ace9:c.instructions+=2;goto B40ace9;
case 0x40aceb:c.instructions+=1;goto B40aceb;
case 0x40acf0:goto L40acf0;
case 0x40acf5:c.instructions+=4;goto B40acf5;
case 0x40acf8:c.instructions+=3;goto B40acf8;
case 0x40acf9:c.instructions+=2;goto B40acf9;
case 0x40acfb:c.instructions+=1;goto B40acfb;
case 0x40ad00:goto L40ad00;
case 0x40ad03:c.instructions+=2;goto B40ad03;
case 0x40ad04:c.instructions+=1;goto B40ad04;
case 0x40ad06:goto L40ad06;
case 0x40ad08:c.instructions+=1;goto B40ad08;
case 0x40ad0d:goto L40ad0d;
case 0x40ad0e:c.instructions+=3;goto B40ad0e;
case 0x40ad0f:c.instructions+=2;goto B40ad0f;
case 0x40ad10:c.instructions+=1;goto B40ad10;
case 0x40ad20:goto L40ad20;
case 0x40ad21:c.instructions+=38;goto B40ad21;
case 0x40ad24:c.instructions+=37;goto B40ad24;
case 0x40ad28:c.instructions+=36;goto B40ad28;
case 0x40ad2c:c.instructions+=35;goto B40ad2c;
case 0x40ad2e:c.instructions+=34;goto B40ad2e;
case 0x40ad31:c.instructions+=33;goto B40ad31;
case 0x40ad34:c.instructions+=32;goto B40ad34;
case 0x40ad37:c.instructions+=31;goto B40ad37;
case 0x40ad3a:c.instructions+=30;goto B40ad3a;
case 0x40ad3c:c.instructions+=29;goto B40ad3c;
case 0x40ad3f:c.instructions+=28;goto B40ad3f;
case 0x40ad41:c.instructions+=27;goto B40ad41;
case 0x40ad44:c.instructions+=26;goto B40ad44;
case 0x40ad47:c.instructions+=25;goto B40ad47;
case 0x40ad4a:c.instructions+=24;goto B40ad4a;
case 0x40ad4d:c.instructions+=23;goto B40ad4d;
case 0x40ad50:c.instructions+=22;goto B40ad50;
case 0x40ad53:c.instructions+=21;goto B40ad53;
case 0x40ad56:c.instructions+=20;goto B40ad56;
case 0x40ad58:c.instructions+=19;goto B40ad58;
case 0x40ad5b:c.instructions+=18;goto B40ad5b;
case 0x40ad5d:c.instructions+=17;goto B40ad5d;
case 0x40ad60:c.instructions+=16;goto B40ad60;
case 0x40ad63:c.instructions+=15;goto B40ad63;
case 0x40ad66:c.instructions+=14;goto B40ad66;
case 0x40ad69:c.instructions+=13;goto B40ad69;
case 0x40ad6b:c.instructions+=12;goto B40ad6b;
case 0x40ad6e:c.instructions+=11;goto B40ad6e;
case 0x40ad71:c.instructions+=10;goto B40ad71;
case 0x40ad74:c.instructions+=9;goto B40ad74;
case 0x40ad7a:c.instructions+=8;goto B40ad7a;
case 0x40ad7d:c.instructions+=7;goto B40ad7d;
case 0x40ad80:c.instructions+=6;goto B40ad80;
case 0x40ad83:c.instructions+=5;goto B40ad83;
case 0x40ad86:c.instructions+=4;goto B40ad86;
case 0x40ad89:c.instructions+=3;goto B40ad89;
case 0x40ad8c:c.instructions+=2;goto B40ad8c;
case 0x40ad8d:c.instructions+=1;goto B40ad8d;
case 0x40ad8f:goto L40ad8f;
case 0x40ad92:goto L40ad92;
case 0x40ada0:goto L40ada0;
case 0x40ada4:c.instructions+=7;goto B40ada4;
case 0x40ada8:c.instructions+=6;goto B40ada8;
case 0x40adae:c.instructions+=5;goto B40adae;
case 0x40adaf:c.instructions+=4;goto B40adaf;
case 0x40adb1:c.instructions+=3;goto B40adb1;
case 0x40adb4:c.instructions+=2;goto B40adb4;
case 0x40adb6:c.instructions+=1;goto B40adb6;
case 0x40adb8:goto L40adb8;
case 0x40adbb:goto L40adbb;
case 0x40adbf:c.instructions+=1;goto B40adbf;
case 0x40adc2:goto L40adc2;
case 0x40adc5:goto L40adc5;
case 0x40adc9:c.instructions+=1;goto B40adc9;
case 0x40add0:goto L40add0;
case 0x40add4:c.instructions+=2;goto B40add4;
case 0x40add8:c.instructions+=1;goto B40add8;
case 0x40adda:goto L40adda;
case 0x40adde:c.instructions+=2;goto B40adde;
case 0x40ade2:c.instructions+=1;goto B40ade2;
case 0x40ade4:goto L40ade4;
case 0x40ade7:c.instructions+=2;goto B40ade7;
case 0x40ade9:c.instructions+=1;goto B40ade9;
case 0x40adeb:goto L40adeb;
case 0x40adf2:c.instructions+=1;goto B40adf2;
case 0x40adf4:goto L40adf4;
case 0x40adf6:goto L40adf6;
case 0x40adf9:c.instructions+=4;goto B40adf9;
case 0x40adfc:c.instructions+=3;goto B40adfc;
case 0x40ae03:c.instructions+=2;goto B40ae03;
case 0x40ae05:c.instructions+=1;goto B40ae05;
case 0x40ae07:goto L40ae07;
case 0x40ae09:c.instructions+=5;goto B40ae09;
case 0x40ae0a:c.instructions+=4;goto B40ae0a;
case 0x40ae0e:c.instructions+=3;goto B40ae0e;
case 0x40ae0f:c.instructions+=2;goto B40ae0f;
case 0x40ae10:c.instructions+=1;goto B40ae10;
case 0x40ae13:goto L40ae13;
case 0x40ae15:c.instructions+=2;goto B40ae15;
case 0x40ae16:c.instructions+=1;goto B40ae16;
case 0x40ae19:goto L40ae19;
case 0x40ae1d:c.instructions+=3;goto B40ae1d;
case 0x40ae23:c.instructions+=2;goto B40ae23;
case 0x40ae2a:c.instructions+=1;goto B40ae2a;
case 0x40ae30:goto L40ae30;
case 0x40ae36:c.instructions+=5;goto B40ae36;
case 0x40ae37:c.instructions+=4;goto B40ae37;
case 0x40ae39:c.instructions+=3;goto B40ae39;
case 0x40ae3d:c.instructions+=2;goto B40ae3d;
case 0x40ae41:c.instructions+=1;goto B40ae41;
case 0x40ae43:goto L40ae43;
case 0x40ae47:c.instructions+=2;goto B40ae47;
case 0x40ae4b:c.instructions+=1;goto B40ae4b;
case 0x40ae4d:goto L40ae4d;
case 0x40ae50:c.instructions+=2;goto B40ae50;
case 0x40ae52:c.instructions+=1;goto B40ae52;
case 0x40ae54:goto L40ae54;
case 0x40ae5b:c.instructions+=1;goto B40ae5b;
case 0x40ae5d:goto L40ae5d;
case 0x40ae5f:goto L40ae5f;
case 0x40ae62:c.instructions+=4;goto B40ae62;
case 0x40ae65:c.instructions+=3;goto B40ae65;
case 0x40ae6c:c.instructions+=2;goto B40ae6c;
case 0x40ae6e:c.instructions+=1;goto B40ae6e;
case 0x40ae70:goto L40ae70;
case 0x40ae74:c.instructions+=6;goto B40ae74;
case 0x40ae76:c.instructions+=5;goto B40ae76;
case 0x40ae78:c.instructions+=4;goto B40ae78;
case 0x40ae79:c.instructions+=3;goto B40ae79;
case 0x40ae7a:c.instructions+=2;goto B40ae7a;
case 0x40ae7c:c.instructions+=1;goto B40ae7c;
case 0x40ae7f:goto L40ae7f;
case 0x40ae82:c.instructions+=2;goto B40ae82;
case 0x40ae85:c.instructions+=1;goto B40ae85;
case 0x40ae87:goto L40ae87;
case 0x40ae88:c.instructions+=1;goto B40ae88;
case 0x40ae90:goto L40ae90;
case 0x40ae94:c.instructions+=2;goto B40ae94;
case 0x40ae97:c.instructions+=1;goto B40ae97;
case 0x40ae99:goto L40ae99;
case 0x40ae9b:c.instructions+=1;goto B40ae9b;
case 0x40ae9e:goto L40ae9e;
case 0x40aea0:c.instructions+=3;goto B40aea0;
case 0x40aea1:c.instructions+=2;goto B40aea1;
case 0x40aea2:c.instructions+=1;goto B40aea2;
case 0x40aea4:goto L40aea4;
case 0x40aea7:c.instructions+=1;goto B40aea7;
case 0x40aea9:goto L40aea9;
case 0x40aeae:c.instructions+=1;goto B40aeae;
case 0x40aeb0:goto L40aeb0;
case 0x40aeb3:c.instructions+=1;goto B40aeb3;
case 0x40aeb5:goto L40aeb5;
case 0x40aeb8:c.instructions+=1;goto B40aeb8;
case 0x40aeba:goto L40aeba;
case 0x40aebf:c.instructions+=1;goto B40aebf;
case 0x40aec1:goto L40aec1;
case 0x40aec3:goto L40aec3;
case 0x40aec7:c.instructions+=2;goto B40aec7;
case 0x40aecb:c.instructions+=1;goto B40aecb;
case 0x40aecd:goto L40aecd;
case 0x40aed2:c.instructions+=1;goto B40aed2;
case 0x40aed4:goto L40aed4;
case 0x40aed7:c.instructions+=2;goto B40aed7;
case 0x40aed9:c.instructions+=1;goto B40aed9;
case 0x40aedb:goto L40aedb;
case 0x40aee2:c.instructions+=1;goto B40aee2;
case 0x40aee4:goto L40aee4;
case 0x40aee6:goto L40aee6;
case 0x40aee8:c.instructions+=2;goto B40aee8;
case 0x40aee9:c.instructions+=1;goto B40aee9;
case 0x40aeec:goto L40aeec;
case 0x40aeee:c.instructions+=2;goto B40aeee;
case 0x40aeef:c.instructions+=1;goto B40aeef;
case 0x40aef1:goto L40aef1;
case 0x40aef2:c.instructions+=1;goto B40aef2;
case 0x40aef4:goto L40aef4;
case 0x40aefb:c.instructions+=2;goto B40aefb;
case 0x40aefd:c.instructions+=1;goto B40aefd;
case 0x40aeff:goto L40aeff;
case 0x40af00:c.instructions+=3;goto B40af00;
case 0x40af02:c.instructions+=2;goto B40af02;
case 0x40af03:c.instructions+=1;goto B40af03;
case 0x40af06:goto L40af06;
case 0x40af0a:c.instructions+=2;goto B40af0a;
case 0x40af0c:c.instructions+=1;goto B40af0c;
case 0x40af0e:goto L40af0e;
case 0x40af12:c.instructions+=2;goto B40af12;
case 0x40af14:c.instructions+=1;goto B40af14;
case 0x40af16:goto L40af16;
case 0x40af17:c.instructions+=3;goto B40af17;
case 0x40af19:c.instructions+=2;goto B40af19;
case 0x40af1a:c.instructions+=1;goto B40af1a;
case 0x40af1d:goto L40af1d;
case 0x40af1e:c.instructions+=3;goto B40af1e;
case 0x40af20:c.instructions+=2;goto B40af20;
case 0x40af21:c.instructions+=1;goto B40af21;
case 0x40af30:goto L40af30;
case 0x40af31:c.instructions+=4;goto B40af31;
case 0x40af35:c.instructions+=3;goto B40af35;
case 0x40af37:c.instructions+=2;goto B40af37;
case 0x40af38:c.instructions+=1;goto B40af38;
case 0x40af3a:goto L40af3a;
case 0x40af3d:c.instructions+=1;goto B40af3d;
case 0x40af3f:goto L40af3f;
case 0x40af44:c.instructions+=1;goto B40af44;
case 0x40af46:goto L40af46;
case 0x40af49:c.instructions+=1;goto B40af49;
case 0x40af4b:goto L40af4b;
case 0x40af4e:c.instructions+=1;goto B40af4e;
case 0x40af50:goto L40af50;
case 0x40af55:c.instructions+=1;goto B40af55;
case 0x40af57:goto L40af57;
case 0x40af59:goto L40af59;
case 0x40af5d:c.instructions+=2;goto B40af5d;
case 0x40af5f:c.instructions+=1;goto B40af5f;
case 0x40af61:goto L40af61;
case 0x40af64:c.instructions+=1;goto B40af64;
case 0x40af66:goto L40af66;
case 0x40af6b:c.instructions+=1;goto B40af6b;
case 0x40af6d:goto L40af6d;
case 0x40af70:c.instructions+=1;goto B40af70;
case 0x40af72:goto L40af72;
case 0x40af75:c.instructions+=1;goto B40af75;
case 0x40af77:goto L40af77;
case 0x40af7c:c.instructions+=1;goto B40af7c;
case 0x40af7e:goto L40af7e;
case 0x40af80:goto L40af80;
case 0x40af83:c.instructions+=1;goto B40af83;
case 0x40af85:goto L40af85;
case 0x40af87:c.instructions+=1;goto B40af87;
case 0x40af89:goto L40af89;
case 0x40af8c:c.instructions+=6;goto B40af8c;
case 0x40af93:c.instructions+=5;goto B40af93;
case 0x40af9a:c.instructions+=4;goto B40af9a;
case 0x40af9e:c.instructions+=3;goto B40af9e;
case 0x40afa0:c.instructions+=2;goto B40afa0;
case 0x40afa3:c.instructions+=1;goto B40afa3;
case 0x40afa5:goto L40afa5;
case 0x40afa6:c.instructions+=3;goto B40afa6;
case 0x40afab:c.instructions+=2;goto B40afab;
case 0x40afac:c.instructions+=1;goto B40afac;
case 0x40afaf:goto L40afaf;
case 0x40afb0:c.instructions+=3;goto B40afb0;
case 0x40afb2:c.instructions+=2;goto B40afb2;
case 0x40afb3:c.instructions+=1;goto B40afb3;
case 0x40afb6:goto L40afb6;
case 0x40afb7:c.instructions+=3;goto B40afb7;
case 0x40afb9:c.instructions+=2;goto B40afb9;
case 0x40afba:c.instructions+=1;goto B40afba;
case 0x40afc0:goto L40afc0;
case 0x40afc4:c.instructions+=2;goto B40afc4;
case 0x40afc6:c.instructions+=1;goto B40afc6;
case 0x40afc8:goto L40afc8;
case 0x40afcb:c.instructions+=1;goto B40afcb;
case 0x40afcd:goto L40afcd;
case 0x40afd0:c.instructions+=1;goto B40afd0;
case 0x40afd3:goto L40afd3;
case 0x40afd6:c.instructions+=1;goto B40afd6;
case 0x40afd8:goto L40afd8;
case 0x40afdb:c.instructions+=1;goto B40afdb;
case 0x40afdd:goto L40afdd;
case 0x40afe1:c.instructions+=1;goto B40afe1;
case 0x40afe4:goto L40afe4;
case 0x40afea:c.instructions+=1;goto B40afea;
case 0x40aff0:goto L40aff0;
case 0x40aff6:c.instructions+=5;goto B40aff6;
case 0x40aff7:c.instructions+=4;goto B40aff7;
case 0x40aff9:c.instructions+=3;goto B40aff9;
case 0x40affc:c.instructions+=2;goto B40affc;
case 0x40affe:c.instructions+=1;goto B40affe;
default:missing_instruction(c.pc);}
B40a001:L40a001:{c.instructions+=1;NFSU2_TR(0x40a001);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a006ull));
TAIL_STATIC(0x578ce0u,578);
}
B40a006:L40a006:{c.instructions+=3;NFSU2_TR(0x40a006);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a007:{NFSU2_TR(0x40a007);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40a00d:{NFSU2_TR(0x40a00d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a012ull));
TAIL_STATIC(0x57cd10u,57c);
}
B40a012:L40a012:{c.instructions+=3;NFSU2_TR(0x40a012);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a013:{NFSU2_TR(0x40a013);
__builtin_memmove((R+4),(R+28),4);
}
B40a015:{NFSU2_TR(0x40a015);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a01aull));
TAIL_STATIC(0x409cc0u,409);
}
B40a01a:L40a01a:{c.instructions+=2;NFSU2_TR(0x40a01a);
__builtin_memmove((R+4),(R+24),4);
}
B40a01c:{NFSU2_TR(0x40a01c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a021ull));
TAIL_STATIC(0x578d90u,578);
}
B40a021:L40a021:{c.instructions+=3;NFSU2_TR(0x40a021);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40a022:{NFSU2_TR(0x40a022);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40a023:{NFSU2_TR(0x40a023);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a030:L40a030:{c.instructions+=5;NFSU2_TR(0x40a030);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a031:{NFSU2_TR(0x40a031);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a035:{NFSU2_TR(0x40a035);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40a038:{NFSU2_TR(0x40a038);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+16)),r4(U+0));
}
B40a040:{NFSU2_TR(0x40a040);
if(r1(R+518)){{goto L40a089;}}
}
B40a042:L40a042:{c.instructions+=2;NFSU2_TR(0x40a042);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B40a043:{NFSU2_TR(0x40a043);
if(r1(R+518)){{goto L40a052;}}
}
B40a045:L40a045:{c.instructions+=2;NFSU2_TR(0x40a045);
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
B40a046:{NFSU2_TR(0x40a046);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40a093;}}
}
B40a048:L40a048:{c.instructions+=3;NFSU2_TR(0x40a048);
{u32 ea_=u32(r4(R+4)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a04e:{NFSU2_TR(0x40a04e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40a04f:{NFSU2_TR(0x40a04f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a052:L40a052:{c.instructions+=3;NFSU2_TR(0x40a052);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40a058:{NFSU2_TR(0x40a058);
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
B40a05a:{NFSU2_TR(0x40a05a);
if(r1(R+518)){{goto L40a07f;}}
}
B40a05c:L40a05c:{c.instructions+=9;NFSU2_TR(0x40a05c);
{u32 ea_=u32(r4(R+4)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a062:{NFSU2_TR(0x40a062);
w4(R+0,u32(r1(R+0)));
}
B40a065:{NFSU2_TR(0x40a065);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a069:{NFSU2_TR(0x40a069);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B40a06d:{NFSU2_TR(0x40a06d);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a073:{NFSU2_TR(0x40a073);
{u32 ea_=u32(r4(R+4)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40a079:{NFSU2_TR(0x40a079);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B40a07b:{NFSU2_TR(0x40a07b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40a07c:{NFSU2_TR(0x40a07c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a07f:L40a07f:{c.instructions+=3;NFSU2_TR(0x40a07f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a085:{NFSU2_TR(0x40a085);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40a086:{NFSU2_TR(0x40a086);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a089:L40a089:{c.instructions+=3;NFSU2_TR(0x40a089);
{u32 ea_=u32(r4(R+4)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a08f:{NFSU2_TR(0x40a08f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40a090:{NFSU2_TR(0x40a090);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a093:L40a093:{c.instructions+=3;NFSU2_TR(0x40a093);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a097:{NFSU2_TR(0x40a097);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40a098:{NFSU2_TR(0x40a098);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a0a0:L40a0a0:{c.instructions+=3;NFSU2_TR(0x40a0a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a0a4:{NFSU2_TR(0x40a0a4);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a0ab:{NFSU2_TR(0x40a0ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a0b0:L40a0b0:{c.instructions+=10;NFSU2_TR(0x40a0b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a0b1:{NFSU2_TR(0x40a0b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a0b2:{NFSU2_TR(0x40a0b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a0b3:{NFSU2_TR(0x40a0b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a0b4:{NFSU2_TR(0x40a0b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40a0b8:{NFSU2_TR(0x40a0b8);
u8 U[4];
w4(U+0,u32(0x784648ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a0bd:{NFSU2_TR(0x40a0bd);
__builtin_memmove((R+20),(R+4),4);
}
B40a0bf:{NFSU2_TR(0x40a0bf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a0c1:{NFSU2_TR(0x40a0c1);
__builtin_memmove((R+4),(R+28),4);
}
B40a0c3:{NFSU2_TR(0x40a0c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a0c8ull));
TAIL_STATIC(0x578ce0u,578);
}
B40a0c8:L40a0c8:{c.instructions+=2;NFSU2_TR(0x40a0c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40a0ce:{NFSU2_TR(0x40a0ce);
w4(R+12,u32(0x3ull));
}
B40a0d3:L40a0d3:{c.instructions+=3;NFSU2_TR(0x40a0d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a0d4:{NFSU2_TR(0x40a0d4);
__builtin_memmove((R+4),(R+28),4);
}
B40a0d6:{NFSU2_TR(0x40a0d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a0dbull));
TAIL_STATIC(0x571770u,571);
}
B40a0db:L40a0db:{c.instructions+=3;NFSU2_TR(0x40a0db);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B40a0de:{NFSU2_TR(0x40a0de);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B40a0df:{NFSU2_TR(0x40a0df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40a0d3u);}goto L40a0d3;}}
}
B40a0e1:L40a0e1:{c.instructions+=3;NFSU2_TR(0x40a0e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a0e2:{NFSU2_TR(0x40a0e2);
__builtin_memmove((R+4),(R+20),4);
}
B40a0e4:{NFSU2_TR(0x40a0e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a0e9ull));
TAIL_STATIC(0x409cc0u,409);
}
B40a0e9:L40a0e9:{c.instructions+=2;NFSU2_TR(0x40a0e9);
__builtin_memmove((R+4),(R+28),4);
}
B40a0eb:{NFSU2_TR(0x40a0eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a0f0ull));
TAIL_STATIC(0x578d90u,578);
}
B40a0f0:L40a0f0:{c.instructions+=5;NFSU2_TR(0x40a0f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40a0f1:{NFSU2_TR(0x40a0f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40a0f2:{NFSU2_TR(0x40a0f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40a0f3:{NFSU2_TR(0x40a0f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40a0f4:{NFSU2_TR(0x40a0f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a100:L40a100:{c.instructions+=7;NFSU2_TR(0x40a100);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a103:{NFSU2_TR(0x40a103);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40a107:{NFSU2_TR(0x40a107);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40a10d:{NFSU2_TR(0x40a10d);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40a110:{NFSU2_TR(0x40a110);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40a112:{NFSU2_TR(0x40a112);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40a115:{NFSU2_TR(0x40a115);
if(r1(R+518)){{goto L40a13f;}}
}
B40a117:L40a117:{c.instructions+=11;NFSU2_TR(0x40a117);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a11a:{NFSU2_TR(0x40a11a);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a120:{NFSU2_TR(0x40a120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40a122:{NFSU2_TR(0x40a122);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40a125:{NFSU2_TR(0x40a125);
{u32 ea_=u32(u32(7879708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a12b:{NFSU2_TR(0x40a12b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40a133:{NFSU2_TR(0x40a133);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B40a135:{NFSU2_TR(0x40a135);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B40a137:{NFSU2_TR(0x40a137);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a13a:{NFSU2_TR(0x40a13a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40a13c:{NFSU2_TR(0x40a13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B40a13f:L40a13f:{c.instructions+=2;NFSU2_TR(0x40a13f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40a141:{NFSU2_TR(0x40a141);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a150:L40a150:{c.instructions+=8;NFSU2_TR(0x40a150);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a151:{NFSU2_TR(0x40a151);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40a155:{NFSU2_TR(0x40a155);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a156:{NFSU2_TR(0x40a156);
u8 U[4];
w4(U+0,u32(0x78466cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a15b:{NFSU2_TR(0x40a15b);
__builtin_memmove((R+28),(R+4),4);
}
B40a15d:{NFSU2_TR(0x40a15d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a15f:{NFSU2_TR(0x40a15f);
__builtin_memmove((R+4),(R+24),4);
}
B40a161:{NFSU2_TR(0x40a161);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a166ull));
TAIL_STATIC(0x578ce0u,578);
}
B40a166:L40a166:{c.instructions+=3;NFSU2_TR(0x40a166);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a167:{NFSU2_TR(0x40a167);
__builtin_memmove((R+4),(R+28),4);
}
B40a169:{NFSU2_TR(0x40a169);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a16eull));
TAIL_STATIC(0x404820u,404);
}
B40a16e:L40a16e:{c.instructions+=4;NFSU2_TR(0x40a16e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40a171:{NFSU2_TR(0x40a171);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a172:{NFSU2_TR(0x40a172);
__builtin_memmove((R+4),(R+24),4);
}
B40a174:{NFSU2_TR(0x40a174);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a179ull));
TAIL_STATIC(0x571770u,571);
}
B40a179:L40a179:{c.instructions+=4;NFSU2_TR(0x40a179);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40a17c:{NFSU2_TR(0x40a17c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a17d:{NFSU2_TR(0x40a17d);
__builtin_memmove((R+4),(R+24),4);
}
B40a17f:{NFSU2_TR(0x40a17f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a184ull));
TAIL_STATIC(0x571770u,571);
}
B40a184:L40a184:{c.instructions+=4;NFSU2_TR(0x40a184);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x5cull))));
}
B40a187:{NFSU2_TR(0x40a187);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a188:{NFSU2_TR(0x40a188);
__builtin_memmove((R+4),(R+24),4);
}
B40a18a:{NFSU2_TR(0x40a18a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a18full));
TAIL_STATIC(0x571770u,571);
}
B40a18f:L40a18f:{c.instructions+=2;NFSU2_TR(0x40a18f);
__builtin_memmove((R+4),(R+24),4);
}
B40a191:{NFSU2_TR(0x40a191);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a196ull));
TAIL_STATIC(0x578d90u,578);
}
B40a196:L40a196:{c.instructions+=3;NFSU2_TR(0x40a196);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40a197:{NFSU2_TR(0x40a197);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40a198:{NFSU2_TR(0x40a198);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a1a0:L40a1a0:{c.instructions+=8;NFSU2_TR(0x40a1a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a1a4:{NFSU2_TR(0x40a1a4);
__builtin_memmove((R+8),gp(0x783c1c),4);
}
B40a1aa:{NFSU2_TR(0x40a1aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a1ad:{NFSU2_TR(0x40a1ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a1b0:{NFSU2_TR(0x40a1b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a1b3:{NFSU2_TR(0x40a1b3);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a1b9:{NFSU2_TR(0x40a1b9);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a1bc:{NFSU2_TR(0x40a1bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a1c0:L40a1c0:{c.instructions+=14;NFSU2_TR(0x40a1c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a1c2:{NFSU2_TR(0x40a1c2);
u8 U[4];
w4(U+0,u32(0x7713c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a1c7:{NFSU2_TR(0x40a1c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a1cd:{NFSU2_TR(0x40a1cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a1ce:{NFSU2_TR(0x40a1ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a1d5:{NFSU2_TR(0x40a1d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a1d6:{NFSU2_TR(0x40a1d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a1d7:{NFSU2_TR(0x40a1d7);
__builtin_memmove((R+24),(R+4),4);
}
B40a1d9:{NFSU2_TR(0x40a1d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a1dd:{NFSU2_TR(0x40a1dd);
u8 U[4];
w4(U+0,u32(0x784680ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40a1e3:{NFSU2_TR(0x40a1e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40a1e6:{NFSU2_TR(0x40a1e6);
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
B40a1e8:{NFSU2_TR(0x40a1e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40a1f0:{NFSU2_TR(0x40a1f0);
if(r1(R+518)){{goto L40a1f8;}}
}
B40a1f2:L40a1f2:{c.instructions+=3;NFSU2_TR(0x40a1f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40a1f4:{NFSU2_TR(0x40a1f4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a1f6:{NFSU2_TR(0x40a1f6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a1f8ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B40a1f8:L40a1f8:{c.instructions+=6;NFSU2_TR(0x40a1f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40a1fc:{NFSU2_TR(0x40a1fc);
u8 U[4];
w4(U+0,u32(0x7843f0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B40a202:{NFSU2_TR(0x40a202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40a203:{NFSU2_TR(0x40a203);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a20a:{NFSU2_TR(0x40a20a);
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
B40a20d:{NFSU2_TR(0x40a20d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a210:L40a210:{c.instructions+=2;NFSU2_TR(0x40a210);
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
B40a213:{NFSU2_TR(0x40a213);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a220:L40a220:{c.instructions+=5;NFSU2_TR(0x40a220);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40a224:{NFSU2_TR(0x40a224);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40a226:{NFSU2_TR(0x40a226);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40a229:{NFSU2_TR(0x40a229);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40a231:{NFSU2_TR(0x40a231);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40a23b;}}
}
B40a233:L40a233:{c.instructions+=1;NFSU2_TR(0x40a233);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40a23b:L40a23b:{c.instructions+=1;NFSU2_TR(0x40a23b);
TAIL_STATIC(0x5f46a0u,5f4);
}
B40a240:L40a240:{c.instructions+=2;NFSU2_TR(0x40a240);
{u32 ea_=u32(u32(7879736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a246:{NFSU2_TR(0x40a246);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a250:L40a250:{c.instructions+=3;NFSU2_TR(0x40a250);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40a254:{NFSU2_TR(0x40a254);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40a256:{NFSU2_TR(0x40a256);
if(r1(R+518)){{goto L40a269;}}
}
B40a258:L40a258:{c.instructions+=4;NFSU2_TR(0x40a258);
__builtin_memmove((R+0),gp(0x82a3a4),4);
}
B40a25d:{NFSU2_TR(0x40a25d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40a25f:{NFSU2_TR(0x40a25f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40a267:{NFSU2_TR(0x40a267);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40a271;}}
}
B40a269:L40a269:{c.instructions+=1;NFSU2_TR(0x40a269);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40a271:L40a271:{c.instructions+=2;NFSU2_TR(0x40a271);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40a274:{NFSU2_TR(0x40a274);
TAIL_STATIC(0x5f46a0u,5f4);
}
B40a280:L40a280:{c.instructions+=8;NFSU2_TR(0x40a280);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a283:{NFSU2_TR(0x40a283);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40a286:{NFSU2_TR(0x40a286);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a28a:{NFSU2_TR(0x40a28a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40a28c:{NFSU2_TR(0x40a28c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B40a28f:{NFSU2_TR(0x40a28f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B40a292:{NFSU2_TR(0x40a292);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a293:{NFSU2_TR(0x40a293);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a296ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40a296:L40a296:{c.instructions+=1;NFSU2_TR(0x40a296);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a2a0:L40a2a0:{c.instructions+=7;NFSU2_TR(0x40a2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a2a3:{NFSU2_TR(0x40a2a3);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a2a9:{NFSU2_TR(0x40a2a9);
{u32 ea_=u32(u32(7879752u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40a2af:{NFSU2_TR(0x40a2af);
{u32 ea_=u32(u32(7879756u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40a2b5:{NFSU2_TR(0x40a2b5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40a2b7:{NFSU2_TR(0x40a2b7);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40a2ba:{NFSU2_TR(0x40a2ba);
if(r1(R+518)){{goto L40a2c4;}}
}
B40a2bc:L40a2bc:{c.instructions+=2;NFSU2_TR(0x40a2bc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40a2be:{NFSU2_TR(0x40a2be);
{u32 ea_=u32(u32(7879756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a2c4:L40a2c4:{c.instructions+=1;NFSU2_TR(0x40a2c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a2d0:L40a2d0:{c.instructions+=36;NFSU2_TR(0x40a2d0);
__builtin_memmove((R+0),(R+4),4);
}
B40a2d2:{NFSU2_TR(0x40a2d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40a2d6:{NFSU2_TR(0x40a2d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40a2d8:{NFSU2_TR(0x40a2d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B40a2da:{NFSU2_TR(0x40a2da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a2dd:{NFSU2_TR(0x40a2dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a2e0:{NFSU2_TR(0x40a2e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a2e3:{NFSU2_TR(0x40a2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a2e6:{NFSU2_TR(0x40a2e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a2e9:{NFSU2_TR(0x40a2e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a2ec:{NFSU2_TR(0x40a2ec);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a2ef:{NFSU2_TR(0x40a2ef);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a2f2:{NFSU2_TR(0x40a2f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a2f5:{NFSU2_TR(0x40a2f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a2f8:{NFSU2_TR(0x40a2f8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40a2fa:{NFSU2_TR(0x40a2fa);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a2fd:{NFSU2_TR(0x40a2fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a2fe:{NFSU2_TR(0x40a2fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a2ff:{NFSU2_TR(0x40a2ff);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a302:{NFSU2_TR(0x40a302);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a305:{NFSU2_TR(0x40a305);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a308:{NFSU2_TR(0x40a308);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a30b:{NFSU2_TR(0x40a30b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a30e:{NFSU2_TR(0x40a30e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a311:{NFSU2_TR(0x40a311);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a314:{NFSU2_TR(0x40a314);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a317:{NFSU2_TR(0x40a317);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a31a:{NFSU2_TR(0x40a31a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a31d:{NFSU2_TR(0x40a31d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a320:{NFSU2_TR(0x40a320);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a323:{NFSU2_TR(0x40a323);
__builtin_memmove((R+24),(R+4),4);
}
B40a325:{NFSU2_TR(0x40a325);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a326:{NFSU2_TR(0x40a326);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a329:{NFSU2_TR(0x40a329);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((R+8),(U+0),4);
}
B40a32c:{NFSU2_TR(0x40a32c);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B40a32e:{NFSU2_TR(0x40a32e);
w4(R+28,u32(0x40ull));
}
B40a333:L40a333:{c.instructions+=5;NFSU2_TR(0x40a333);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+12),(U+8),2);
}
B40a337:{NFSU2_TR(0x40a337);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+8)),r2(U+0));
}
B40a33a:{NFSU2_TR(0x40a33a);
w1(R+512,carry<u32>(r4(R+8),u32(0x2ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B40a33d:{NFSU2_TR(0x40a33d);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40a33e:{NFSU2_TR(0x40a33e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40a333u);}goto L40a333;}}
}
B40a340:L40a340:{c.instructions+=14;NFSU2_TR(0x40a340);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B40a346:{NFSU2_TR(0x40a346);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40a34c:{NFSU2_TR(0x40a34c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B40a352:{NFSU2_TR(0x40a352);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40a358:{NFSU2_TR(0x40a358);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B40a35e:{NFSU2_TR(0x40a35e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbaull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40a364:{NFSU2_TR(0x40a364);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B40a36a:{NFSU2_TR(0x40a36a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40a36b:{NFSU2_TR(0x40a36b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbbull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40a371:{NFSU2_TR(0x40a371);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B40a377:{NFSU2_TR(0x40a377);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40a378:{NFSU2_TR(0x40a378);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40a37e:{NFSU2_TR(0x40a37e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40a37f:{NFSU2_TR(0x40a37f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a390:L40a390:{c.instructions+=12;NFSU2_TR(0x40a390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B40a393:{NFSU2_TR(0x40a393);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a394:{NFSU2_TR(0x40a394);
__builtin_memmove((R+24),(R+4),4);
}
B40a396:{NFSU2_TR(0x40a396);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40a399:{NFSU2_TR(0x40a399);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B40a39b:{NFSU2_TR(0x40a39b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40a39d:{NFSU2_TR(0x40a39d);
__builtin_memmove((R+4),(R+518),1);
}
B40a3a0:{NFSU2_TR(0x40a3a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a3a1:{NFSU2_TR(0x40a3a1);
__builtin_memmove((R+28),(R+4),4);
}
B40a3a3:{NFSU2_TR(0x40a3a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40a3a6:{NFSU2_TR(0x40a3a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40a3a8:{NFSU2_TR(0x40a3a8);
if(r1(R+518)){{goto L40a457;}}
}
B40a3ae:L40a3ae:{c.instructions+=2;NFSU2_TR(0x40a3ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40a3b0:{NFSU2_TR(0x40a3b0);
if(r1(R+518)){{goto L40a3e0;}}
}
B40a3b2:L40a3b2:{c.instructions+=11;NFSU2_TR(0x40a3b2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B40a3b6:{NFSU2_TR(0x40a3b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a3ba:{NFSU2_TR(0x40a3ba);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B40a3be:{NFSU2_TR(0x40a3be);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40a3c2:{NFSU2_TR(0x40a3c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a3c6:{NFSU2_TR(0x40a3c6);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40a3cc:{NFSU2_TR(0x40a3cc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a3d0:{NFSU2_TR(0x40a3d0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40a3d4:{NFSU2_TR(0x40a3d4);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40a3da:{NFSU2_TR(0x40a3da);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a3de:{NFSU2_TR(0x40a3de);
{goto L40a3ea;}
}
B40a3e0:L40a3e0:{c.instructions+=3;NFSU2_TR(0x40a3e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B40a3e4:{NFSU2_TR(0x40a3e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a3e5:{NFSU2_TR(0x40a3e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a3eaull));
TAIL_STATIC(0x401aa0u,401);
}
B40a3ea:L40a3ea:{c.instructions+=7;NFSU2_TR(0x40a3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40a3ed:{NFSU2_TR(0x40a3ed);
{u32 ea_=u32(r4(R+24)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a3f3:{NFSU2_TR(0x40a3f3);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40a3f9:{NFSU2_TR(0x40a3f9);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40a3ff:{NFSU2_TR(0x40a3ff);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40a401:{NFSU2_TR(0x40a401);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40a404:{NFSU2_TR(0x40a404);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40a41d;}}
}
B40a406:L40a406:{c.instructions+=5;NFSU2_TR(0x40a406);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x70ull))));
}
B40a409:{NFSU2_TR(0x40a409);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B40a40d:{NFSU2_TR(0x40a40d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a40e:{NFSU2_TR(0x40a40e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a40f:{NFSU2_TR(0x40a40f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a414ull));
TAIL_STATIC(0x43ce50u,43c);
}
B40a414:L40a414:{c.instructions+=3;NFSU2_TR(0x40a414);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a418:{NFSU2_TR(0x40a418);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40a41b:{NFSU2_TR(0x40a41b);
{goto L40a42d;}
}
B40a41d:L40a41d:{c.instructions+=3;NFSU2_TR(0x40a41d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40a423:{NFSU2_TR(0x40a423);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a429:{NFSU2_TR(0x40a429);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a42d:L40a42d:{c.instructions+=9;NFSU2_TR(0x40a42d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a431:{NFSU2_TR(0x40a431);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40a435:{NFSU2_TR(0x40a435);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40a437:{NFSU2_TR(0x40a437);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40a43b:{NFSU2_TR(0x40a43b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40a43d:{NFSU2_TR(0x40a43d);
{u32 ea_=u32(u32(7882472u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40a443:{NFSU2_TR(0x40a443);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40a445:{NFSU2_TR(0x40a445);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40a448:{NFSU2_TR(0x40a448);
if(r1(R+514)){{goto L40a457;}}
}
B40a44a:L40a44a:{c.instructions+=7;NFSU2_TR(0x40a44a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40a44c:{NFSU2_TR(0x40a44c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40a44e:{NFSU2_TR(0x40a44e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40a44f:{NFSU2_TR(0x40a44f);
__builtin_memmove((R+0),(R+518),1);
}
B40a452:{NFSU2_TR(0x40a452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40a453:{NFSU2_TR(0x40a453);
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
B40a456:{NFSU2_TR(0x40a456);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a457:L40a457:{c.instructions+=5;NFSU2_TR(0x40a457);
__builtin_memmove((R+0),(R+28),4);
}
B40a459:{NFSU2_TR(0x40a459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40a45a:{NFSU2_TR(0x40a45a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40a45b:{NFSU2_TR(0x40a45b);
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
B40a45e:{NFSU2_TR(0x40a45e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a460:L40a460:{c.instructions+=3;NFSU2_TR(0x40a460);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a464:{NFSU2_TR(0x40a464);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x3a000ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x3a000ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x3a000ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B40a46a:{NFSU2_TR(0x40a46a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40a48e;}}
}
B40a46c:L40a46c:{c.instructions+=8;NFSU2_TR(0x40a46c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B40a46f:{NFSU2_TR(0x40a46f);
__builtin_memmove(gp(0x827a04),(R+4),4);
}
B40a475:{NFSU2_TR(0x40a475);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B40a479:{NFSU2_TR(0x40a479);
__builtin_memmove(gp(0x827a08),(R+8),4);
}
B40a47f:{NFSU2_TR(0x40a47f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B40a483:{NFSU2_TR(0x40a483);
__builtin_memmove(gp(0x827a0c),(R+0),4);
}
B40a488:{NFSU2_TR(0x40a488);
w4(R+0,u32(0x1ull));
}
B40a48d:{NFSU2_TR(0x40a48d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a48e:L40a48e:{c.instructions+=2;NFSU2_TR(0x40a48e);
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
B40a490:{NFSU2_TR(0x40a490);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a4a0:L40a4a0:{c.instructions+=5;NFSU2_TR(0x40a4a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a4a4:{NFSU2_TR(0x40a4a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B40a4a6:{NFSU2_TR(0x40a4a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40a4a8:{NFSU2_TR(0x40a4a8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x3a000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3a000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3a000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40a4ae:{NFSU2_TR(0x40a4ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40a4c4;}}
}
B40a4b0:L40a4b0:{c.instructions+=4;NFSU2_TR(0x40a4b0);
__builtin_memmove(gp(0x827a04),(R+0),4);
}
B40a4b5:{NFSU2_TR(0x40a4b5);
__builtin_memmove(gp(0x827a08),(R+0),4);
}
B40a4ba:{NFSU2_TR(0x40a4ba);
__builtin_memmove(gp(0x827a0c),(R+0),4);
}
B40a4bf:{NFSU2_TR(0x40a4bf);
w4(R+0,u32(0x1ull));
}
B40a4c4:L40a4c4:{c.instructions+=1;NFSU2_TR(0x40a4c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a4d0:L40a4d0:{c.instructions+=81;NFSU2_TR(0x40a4d0);
__builtin_memmove((R+0),(R+4),4);
}
B40a4d2:{NFSU2_TR(0x40a4d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40a4d6:{NFSU2_TR(0x40a4d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40a4d8:{NFSU2_TR(0x40a4d8);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a4db:{NFSU2_TR(0x40a4db);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a4de:{NFSU2_TR(0x40a4de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B40a4e0:{NFSU2_TR(0x40a4e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a4e3:{NFSU2_TR(0x40a4e3);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a4e6:{NFSU2_TR(0x40a4e6);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a4e9:{NFSU2_TR(0x40a4e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a4ec:{NFSU2_TR(0x40a4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a4ef:{NFSU2_TR(0x40a4ef);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a4f2:{NFSU2_TR(0x40a4f2);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a4f5:{NFSU2_TR(0x40a4f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a4f8:{NFSU2_TR(0x40a4f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a4fb:{NFSU2_TR(0x40a4fb);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a4fe:{NFSU2_TR(0x40a4fe);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a501:{NFSU2_TR(0x40a501);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a504:{NFSU2_TR(0x40a504);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a507:{NFSU2_TR(0x40a507);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a50a:{NFSU2_TR(0x40a50a);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a50d:{NFSU2_TR(0x40a50d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a510:{NFSU2_TR(0x40a510);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a513:{NFSU2_TR(0x40a513);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a516:{NFSU2_TR(0x40a516);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a519:{NFSU2_TR(0x40a519);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a51c:{NFSU2_TR(0x40a51c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a51f:{NFSU2_TR(0x40a51f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a522:{NFSU2_TR(0x40a522);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a525:{NFSU2_TR(0x40a525);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a528:{NFSU2_TR(0x40a528);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a52b:{NFSU2_TR(0x40a52b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a52e:{NFSU2_TR(0x40a52e);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a531:{NFSU2_TR(0x40a531);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a534:{NFSU2_TR(0x40a534);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a537:{NFSU2_TR(0x40a537);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a53a:{NFSU2_TR(0x40a53a);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a53d:{NFSU2_TR(0x40a53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a540:{NFSU2_TR(0x40a540);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a543:{NFSU2_TR(0x40a543);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a546:{NFSU2_TR(0x40a546);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a549:{NFSU2_TR(0x40a549);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a54c:{NFSU2_TR(0x40a54c);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a54f:{NFSU2_TR(0x40a54f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a552:{NFSU2_TR(0x40a552);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a555:{NFSU2_TR(0x40a555);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a558:{NFSU2_TR(0x40a558);
{u32 ea_=u32(r4(R+0)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a55b:{NFSU2_TR(0x40a55b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a55e:{NFSU2_TR(0x40a55e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a561:{NFSU2_TR(0x40a561);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a564:{NFSU2_TR(0x40a564);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a567:{NFSU2_TR(0x40a567);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a56a:{NFSU2_TR(0x40a56a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a56d:{NFSU2_TR(0x40a56d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a570:{NFSU2_TR(0x40a570);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a573:{NFSU2_TR(0x40a573);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a576:{NFSU2_TR(0x40a576);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a579:{NFSU2_TR(0x40a579);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a57c:{NFSU2_TR(0x40a57c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a57f:{NFSU2_TR(0x40a57f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a582:{NFSU2_TR(0x40a582);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B40a585:{NFSU2_TR(0x40a585);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40a588:{NFSU2_TR(0x40a588);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x75ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B40a58b:{NFSU2_TR(0x40a58b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x75ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40a58e:{NFSU2_TR(0x40a58e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x76ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B40a591:{NFSU2_TR(0x40a591);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x76ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40a594:{NFSU2_TR(0x40a594);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x77ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B40a597:{NFSU2_TR(0x40a597);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x77ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40a59a:{NFSU2_TR(0x40a59a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B40a59d:{NFSU2_TR(0x40a59d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40a5a0:{NFSU2_TR(0x40a5a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x79ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B40a5a3:{NFSU2_TR(0x40a5a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x79ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40a5a6:{NFSU2_TR(0x40a5a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B40a5a9:{NFSU2_TR(0x40a5a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7aull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40a5ac:{NFSU2_TR(0x40a5ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B40a5af:{NFSU2_TR(0x40a5af);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7bull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40a5b2:{NFSU2_TR(0x40a5b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B40a5b5:{NFSU2_TR(0x40a5b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40a5b8:{NFSU2_TR(0x40a5b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B40a5bb:{NFSU2_TR(0x40a5bb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7dull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40a5be:{NFSU2_TR(0x40a5be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a5d0:L40a5d0:{c.instructions+=3;NFSU2_TR(0x40a5d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a5d3:{NFSU2_TR(0x40a5d3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x28ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40a5d6:{NFSU2_TR(0x40a5d6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40a606;}}
}
B40a5d8:L40a5d8:{c.instructions+=5;NFSU2_TR(0x40a5d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a5dc:{NFSU2_TR(0x40a5dc);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B40a5e0:{NFSU2_TR(0x40a5e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a5e3:{NFSU2_TR(0x40a5e3);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40a5e5:{NFSU2_TR(0x40a5e5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40a600;}}
}
B40a5e7:L40a5e7:{c.instructions+=7;NFSU2_TR(0x40a5e7);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B40a5eb:{NFSU2_TR(0x40a5eb);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B40a5ef:{NFSU2_TR(0x40a5ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a5f2:{NFSU2_TR(0x40a5f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a5f5:{NFSU2_TR(0x40a5f5);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B40a5f9:{NFSU2_TR(0x40a5f9);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B40a5fd:{NFSU2_TR(0x40a5fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a600:L40a600:{c.instructions+=1;NFSU2_TR(0x40a600);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
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
B40a603:L40a603:{c.instructions+=1;NFSU2_TR(0x40a603);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a606:L40a606:{c.instructions+=3;NFSU2_TR(0x40a606);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40a60a:{NFSU2_TR(0x40a60a);
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
B40a60c:{NFSU2_TR(0x40a60c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40a603u);}goto L40a603;}}
}
B40a60e:L40a60e:{c.instructions+=3;NFSU2_TR(0x40a60e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40a610:{NFSU2_TR(0x40a610);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40a618:{NFSU2_TR(0x40a618);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B40a620:L40a620:{c.instructions+=10;NFSU2_TR(0x40a620);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a621:{NFSU2_TR(0x40a621);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a622:{NFSU2_TR(0x40a622);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a623:{NFSU2_TR(0x40a623);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a624:{NFSU2_TR(0x40a624);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a625:{NFSU2_TR(0x40a625);
__builtin_memmove((R+28),(R+4),4);
}
B40a627:{NFSU2_TR(0x40a627);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40a62a:{NFSU2_TR(0x40a62a);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B40a62b:{NFSU2_TR(0x40a62b);
w4(R+20,u32(0x0ull));
}
B40a630:{NFSU2_TR(0x40a630);
if(r1(R+519)){{goto L40a66f;}}
}
B40a632:L40a632:{c.instructions+=1;NFSU2_TR(0x40a632);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B40a636:L40a636:{c.instructions+=7;NFSU2_TR(0x40a636);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B40a638:{NFSU2_TR(0x40a638);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a63b:{NFSU2_TR(0x40a63b);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B40a63d:{NFSU2_TR(0x40a63d);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40a643:{NFSU2_TR(0x40a643);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40a645:{NFSU2_TR(0x40a645);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40a648:{NFSU2_TR(0x40a648);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L40a66f;}}
}
B40a64a:L40a64a:{c.instructions+=2;NFSU2_TR(0x40a64a);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B40a64c:{NFSU2_TR(0x40a64c);
if(r1(R+518)){{goto L40a654;}}
}
B40a64e:L40a64e:{c.instructions+=3;NFSU2_TR(0x40a64e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40a650:{NFSU2_TR(0x40a650);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a652:{NFSU2_TR(0x40a652);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a654ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B40a654:L40a654:{c.instructions+=3;NFSU2_TR(0x40a654);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40a656:{NFSU2_TR(0x40a656);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+12)),r4(U+0));
}
B40a658:{NFSU2_TR(0x40a658);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40a660;}}
}
B40a65a:L40a65a:{c.instructions+=2;NFSU2_TR(0x40a65a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40a65d:{NFSU2_TR(0x40a65d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a660:L40a660:{c.instructions+=7;NFSU2_TR(0x40a660);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a663:{NFSU2_TR(0x40a663);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B40a664:{NFSU2_TR(0x40a664);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B40a665:{NFSU2_TR(0x40a665);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x4ull))));
}
B40a668:{NFSU2_TR(0x40a668);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40a66a:{NFSU2_TR(0x40a66a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a66d:{NFSU2_TR(0x40a66d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40a636u);}goto L40a636;}}
}
B40a66f:L40a66f:{c.instructions+=2;NFSU2_TR(0x40a66f);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+20)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B40a675:{NFSU2_TR(0x40a675);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40a6d6;}}
}
B40a677:L40a677:{c.instructions+=2;NFSU2_TR(0x40a677);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40a67d:{NFSU2_TR(0x40a67d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a681:L40a681:{c.instructions+=3;NFSU2_TR(0x40a681);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B40a685:{NFSU2_TR(0x40a685);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B40a688:{NFSU2_TR(0x40a688);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40a6c3;}}
}
B40a68a:L40a68a:{c.instructions+=5;NFSU2_TR(0x40a68a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a690:{NFSU2_TR(0x40a690);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B40a691:{NFSU2_TR(0x40a691);
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
B40a693:{NFSU2_TR(0x40a693);
__builtin_memmove((R+12),(R+20),4);
}
B40a695:{NFSU2_TR(0x40a695);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40a6bb;}}
}
B40a697:L40a697:{c.instructions+=4;NFSU2_TR(0x40a697);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40a69d:{NFSU2_TR(0x40a69d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a69e:{NFSU2_TR(0x40a69e);
__builtin_memmove((R+4),(R+24),4);
}
B40a6a0:{NFSU2_TR(0x40a6a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a6a5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40a4d0u);}goto L40a4d0;}
}
B40a6a5:L40a6a5:{c.instructions+=6;NFSU2_TR(0x40a6a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a6ab:{NFSU2_TR(0x40a6ab);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B40a6ac:{NFSU2_TR(0x40a6ac);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x80ull))));
}
B40a6b2:{NFSU2_TR(0x40a6b2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B40a6b3:{NFSU2_TR(0x40a6b3);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40a6b5:{NFSU2_TR(0x40a6b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40a697u);}goto L40a697;}}
}
B40a6b7:L40a6b7:{c.instructions+=1;NFSU2_TR(0x40a6b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40a6bb:L40a6bb:{c.instructions+=2;NFSU2_TR(0x40a6bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B40a6c1:{NFSU2_TR(0x40a6c1);
{goto L40a6ce;}
}
B40a6c3:L40a6c3:{c.instructions+=3;NFSU2_TR(0x40a6c3);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B40a6c4:{NFSU2_TR(0x40a6c4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x80ull))));
}
B40a6ca:{NFSU2_TR(0x40a6ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a6ce:L40a6ce:{c.instructions+=2;NFSU2_TR(0x40a6ce);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+20))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+14)));
w4(U+18,u32(u32(r4(R+20))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B40a6d4:{NFSU2_TR(0x40a6d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40a681u);}goto L40a681;}}
}
B40a6d6:L40a6d6:{c.instructions+=6;NFSU2_TR(0x40a6d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40a6d7:{NFSU2_TR(0x40a6d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40a6d8:{NFSU2_TR(0x40a6d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40a6d9:{NFSU2_TR(0x40a6d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40a6da:{NFSU2_TR(0x40a6da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40a6db:{NFSU2_TR(0x40a6db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a6e0:L40a6e0:{c.instructions+=13;NFSU2_TR(0x40a6e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B40a6e3:{NFSU2_TR(0x40a6e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a6e4:{NFSU2_TR(0x40a6e4);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B40a6e8:{NFSU2_TR(0x40a6e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40a6ea:{NFSU2_TR(0x40a6ea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a6eb:{NFSU2_TR(0x40a6eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a6ec:{NFSU2_TR(0x40a6ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a6ed:{NFSU2_TR(0x40a6ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40a6f1:{NFSU2_TR(0x40a6f1);
__builtin_memmove((R+20),(R+4),4);
}
B40a6f3:{NFSU2_TR(0x40a6f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a6f7:{NFSU2_TR(0x40a6f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a6fb:{NFSU2_TR(0x40a6fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B40a6fe:{NFSU2_TR(0x40a6fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40a703;}}
}
B40a700:L40a700:{c.instructions+=1;NFSU2_TR(0x40a700);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40a703:L40a703:{c.instructions+=10;NFSU2_TR(0x40a703);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a706:{NFSU2_TR(0x40a706);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B40a708:{NFSU2_TR(0x40a708);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B40a709:{NFSU2_TR(0x40a709);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40a70b:{NFSU2_TR(0x40a70b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B40a70e:{NFSU2_TR(0x40a70e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B40a70f:{NFSU2_TR(0x40a70f);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+24))));
}
B40a711:{NFSU2_TR(0x40a711);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40a713:{NFSU2_TR(0x40a713);
__builtin_memmove((R+24),(R+0),4);
}
B40a715:{NFSU2_TR(0x40a715);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40a719;}}
}
B40a717:L40a717:{c.instructions+=1;NFSU2_TR(0x40a717);
__builtin_memmove((R+24),(R+4),4);
}
B40a719:L40a719:{c.instructions+=3;NFSU2_TR(0x40a719);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a71d:{NFSU2_TR(0x40a71d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a71e:{NFSU2_TR(0x40a71e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a723ull));
TAIL_STATIC(0x5d4650u,5d4);
}
B40a723:L40a723:{c.instructions+=4;NFSU2_TR(0x40a723);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a727:{NFSU2_TR(0x40a727);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B40a72a:{NFSU2_TR(0x40a72a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40a72c:{NFSU2_TR(0x40a72c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40a8ae;}}
}
B40a732:L40a732:{c.instructions+=3;NFSU2_TR(0x40a732);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B40a739:{NFSU2_TR(0x40a739);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B40a73d:{NFSU2_TR(0x40a73d);
__builtin_memmove((R+4),(R+4),4);
}
B40a740:L40a740:{c.instructions+=4;NFSU2_TR(0x40a740);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40a744:{NFSU2_TR(0x40a744);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a748:{NFSU2_TR(0x40a748);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B40a74b:{NFSU2_TR(0x40a74b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40a8ae;}}
}
B40a751:L40a751:{c.instructions+=9;NFSU2_TR(0x40a751);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40a753:{NFSU2_TR(0x40a753);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B40a756:{NFSU2_TR(0x40a756);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a759:{NFSU2_TR(0x40a759);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B40a75d:{NFSU2_TR(0x40a75d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40a760:{NFSU2_TR(0x40a760);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40a763:{NFSU2_TR(0x40a763);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a767:{NFSU2_TR(0x40a767);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a76b:{NFSU2_TR(0x40a76b);
if(r1(R+518)){{goto L40a78a;}}
}
B40a76d:L40a76d:{c.instructions+=5;NFSU2_TR(0x40a76d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a771:{NFSU2_TR(0x40a771);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a774:{NFSU2_TR(0x40a774);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a775:{NFSU2_TR(0x40a775);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40a778:{NFSU2_TR(0x40a778);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a77dull));
TAIL_STATIC(0x5b5380u,5b5);
}
B40a77d:L40a77d:{c.instructions+=2;NFSU2_TR(0x40a77d);
__builtin_memmove((R+4),(R+0),4);
}
B40a77f:{NFSU2_TR(0x40a77f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a784ull));
TAIL_STATIC(0x5764d0u,576);
}
B40a784:L40a784:{c.instructions+=2;NFSU2_TR(0x40a784);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a788:{NFSU2_TR(0x40a788);
{goto L40a790;}
}
B40a78a:L40a78a:{c.instructions+=2;NFSU2_TR(0x40a78a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a78e:{NFSU2_TR(0x40a78e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B40a790:L40a790:{c.instructions+=13;NFSU2_TR(0x40a790);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a794:{NFSU2_TR(0x40a794);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40a798:{NFSU2_TR(0x40a798);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B40a79a:{NFSU2_TR(0x40a79a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40a79e:{NFSU2_TR(0x40a79e);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B40a7a0:{NFSU2_TR(0x40a7a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40a7a2:{NFSU2_TR(0x40a7a2);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B40a7a4:{NFSU2_TR(0x40a7a4);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a7a7:{NFSU2_TR(0x40a7a7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40a7ab:{NFSU2_TR(0x40a7ab);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40a7ad:{NFSU2_TR(0x40a7ad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40a7af:{NFSU2_TR(0x40a7af);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40a7b2:{NFSU2_TR(0x40a7b2);
if(r1(R+514)){{goto L40a7ba;}}
}
B40a7b4:L40a7b4:{c.instructions+=2;NFSU2_TR(0x40a7b4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40a7b6:{NFSU2_TR(0x40a7b6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a7ba:L40a7ba:{c.instructions+=4;NFSU2_TR(0x40a7ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40a7bc:{NFSU2_TR(0x40a7bc);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a7bf:{NFSU2_TR(0x40a7bf);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a7c2:{NFSU2_TR(0x40a7c2);
if(r1(R+518)){{goto L40a7cc;}}
}
B40a7c4:L40a7c4:{c.instructions+=2;NFSU2_TR(0x40a7c4);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a7ca:{NFSU2_TR(0x40a7ca);
{goto L40a7d2;}
}
B40a7cc:L40a7cc:{c.instructions+=1;NFSU2_TR(0x40a7cc);
{u32 ea_=u32(u32(7882476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a7d2:L40a7d2:{c.instructions+=8;NFSU2_TR(0x40a7d2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40a7d6:{NFSU2_TR(0x40a7d6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40a7d8:{NFSU2_TR(0x40a7d8);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a7db:{NFSU2_TR(0x40a7db);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40a7df:{NFSU2_TR(0x40a7df);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40a7e1:{NFSU2_TR(0x40a7e1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40a7e3:{NFSU2_TR(0x40a7e3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40a7e6:{NFSU2_TR(0x40a7e6);
if(r1(R+514)){{goto L40a7ee;}}
}
B40a7e8:L40a7e8:{c.instructions+=2;NFSU2_TR(0x40a7e8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40a7ea:{NFSU2_TR(0x40a7ea);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a7ee:L40a7ee:{c.instructions+=4;NFSU2_TR(0x40a7ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40a7f0:{NFSU2_TR(0x40a7f0);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a7f3:{NFSU2_TR(0x40a7f3);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a7f6:{NFSU2_TR(0x40a7f6);
if(r1(R+518)){{goto L40a800;}}
}
B40a7f8:L40a7f8:{c.instructions+=2;NFSU2_TR(0x40a7f8);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a7fe:{NFSU2_TR(0x40a7fe);
{goto L40a806;}
}
B40a800:L40a800:{c.instructions+=1;NFSU2_TR(0x40a800);
{u32 ea_=u32(u32(7882476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a806:L40a806:{c.instructions+=8;NFSU2_TR(0x40a806);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40a80a:{NFSU2_TR(0x40a80a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40a80c:{NFSU2_TR(0x40a80c);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a80f:{NFSU2_TR(0x40a80f);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40a813:{NFSU2_TR(0x40a813);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40a815:{NFSU2_TR(0x40a815);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40a817:{NFSU2_TR(0x40a817);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40a81a:{NFSU2_TR(0x40a81a);
if(r1(R+514)){{goto L40a822;}}
}
B40a81c:L40a81c:{c.instructions+=2;NFSU2_TR(0x40a81c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40a81e:{NFSU2_TR(0x40a81e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a822:L40a822:{c.instructions+=4;NFSU2_TR(0x40a822);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40a824:{NFSU2_TR(0x40a824);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a827:{NFSU2_TR(0x40a827);
{u32 ea_=u32(r4(R+28)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a82a:{NFSU2_TR(0x40a82a);
if(r1(R+518)){{goto L40a834;}}
}
B40a82c:L40a82c:{c.instructions+=2;NFSU2_TR(0x40a82c);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a832:{NFSU2_TR(0x40a832);
{goto L40a83a;}
}
B40a834:L40a834:{c.instructions+=1;NFSU2_TR(0x40a834);
{u32 ea_=u32(u32(7882476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a83a:L40a83a:{c.instructions+=8;NFSU2_TR(0x40a83a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40a83e:{NFSU2_TR(0x40a83e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40a840:{NFSU2_TR(0x40a840);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a843:{NFSU2_TR(0x40a843);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40a847:{NFSU2_TR(0x40a847);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40a849:{NFSU2_TR(0x40a849);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40a84b:{NFSU2_TR(0x40a84b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40a84e:{NFSU2_TR(0x40a84e);
if(r1(R+514)){{goto L40a856;}}
}
B40a850:L40a850:{c.instructions+=2;NFSU2_TR(0x40a850);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40a852:{NFSU2_TR(0x40a852);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a856:L40a856:{c.instructions+=4;NFSU2_TR(0x40a856);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40a858:{NFSU2_TR(0x40a858);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a85b:{NFSU2_TR(0x40a85b);
{u32 ea_=u32(r4(R+28)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a85e:{NFSU2_TR(0x40a85e);
if(r1(R+518)){{goto L40a868;}}
}
B40a860:L40a860:{c.instructions+=2;NFSU2_TR(0x40a860);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a866:{NFSU2_TR(0x40a866);
{goto L40a86e;}
}
B40a868:L40a868:{c.instructions+=1;NFSU2_TR(0x40a868);
{u32 ea_=u32(u32(7882476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a86e:L40a86e:{c.instructions+=8;NFSU2_TR(0x40a86e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40a872:{NFSU2_TR(0x40a872);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40a874:{NFSU2_TR(0x40a874);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a877:{NFSU2_TR(0x40a877);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B40a87b:{NFSU2_TR(0x40a87b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B40a87d:{NFSU2_TR(0x40a87d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40a87f:{NFSU2_TR(0x40a87f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40a882:{NFSU2_TR(0x40a882);
if(r1(R+514)){{goto L40a88a;}}
}
B40a884:L40a884:{c.instructions+=2;NFSU2_TR(0x40a884);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40a886:{NFSU2_TR(0x40a886);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a88a:L40a88a:{c.instructions+=4;NFSU2_TR(0x40a88a);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40a88c:{NFSU2_TR(0x40a88c);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a88f:{NFSU2_TR(0x40a88f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B40a896:{NFSU2_TR(0x40a896);
if(r1(R+518)){{goto L40a89e;}}
}
B40a898:L40a898:{c.instructions+=3;NFSU2_TR(0x40a898);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B40a899:{NFSU2_TR(0x40a899);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B40a89c:{NFSU2_TR(0x40a89c);
{goto L40a8a2;}
}
B40a89e:L40a89e:{c.instructions+=2;NFSU2_TR(0x40a89e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B40a89f:{NFSU2_TR(0x40a89f);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x4ull))));
}
B40a8a2:L40a8a2:{c.instructions+=3;NFSU2_TR(0x40a8a2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40a8a4:{NFSU2_TR(0x40a8a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a8a8:{NFSU2_TR(0x40a8a8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40a740u);}goto L40a740;}}
}
B40a8ae:L40a8ae:{c.instructions+=6;NFSU2_TR(0x40a8ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40a8af:{NFSU2_TR(0x40a8af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40a8b0:{NFSU2_TR(0x40a8b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40a8b1:{NFSU2_TR(0x40a8b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40a8b2:{NFSU2_TR(0x40a8b2);
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
B40a8b5:{NFSU2_TR(0x40a8b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40a8c0:L40a8c0:{c.instructions+=10;NFSU2_TR(0x40a8c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B40a8c3:{NFSU2_TR(0x40a8c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a8c7:{NFSU2_TR(0x40a8c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a8c8:{NFSU2_TR(0x40a8c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a8c9:{NFSU2_TR(0x40a8c9);
__builtin_memmove((R+24),(R+4),4);
}
B40a8cb:{NFSU2_TR(0x40a8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40a8ce:{NFSU2_TR(0x40a8ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a8cf:{NFSU2_TR(0x40a8cf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B40a8d2:{NFSU2_TR(0x40a8d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a8d6:{NFSU2_TR(0x40a8d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a8dbull));
TAIL_STATIC(0x5b5330u,5b5);
}
B40a8db:L40a8db:{c.instructions+=6;NFSU2_TR(0x40a8db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40a8de:{NFSU2_TR(0x40a8de);
__builtin_memmove((R+12),(R+4),4);
}
B40a8e0:{NFSU2_TR(0x40a8e0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40a8e2:{NFSU2_TR(0x40a8e2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40a8e4:{NFSU2_TR(0x40a8e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a8e8:{NFSU2_TR(0x40a8e8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L40a91a;}}
}
B40a8ea:L40a8ea:{c.instructions+=2;NFSU2_TR(0x40a8ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40a8ed:{NFSU2_TR(0x40a8ed);
__builtin_memmove((R+4),(R+4),4);
}
B40a8f0:L40a8f0:{c.instructions+=8;NFSU2_TR(0x40a8f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40a8f2:{NFSU2_TR(0x40a8f2);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40a8f5:{NFSU2_TR(0x40a8f5);
{u32 ea_=u32(u32(7879776u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40a8fb:{NFSU2_TR(0x40a8fb);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B40a8fd:{NFSU2_TR(0x40a8fd);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40a903:{NFSU2_TR(0x40a903);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40a905:{NFSU2_TR(0x40a905);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40a908:{NFSU2_TR(0x40a908);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L40a914;}}
}
B40a90a:L40a90a:{c.instructions+=4;NFSU2_TR(0x40a90a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B40a90b:{NFSU2_TR(0x40a90b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B40a90e:{NFSU2_TR(0x40a90e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40a910:{NFSU2_TR(0x40a910);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40a8f0u);}goto L40a8f0;}}
}
B40a912:L40a912:{c.instructions+=1;NFSU2_TR(0x40a912);
{goto L40a91a;}
}
B40a914:L40a914:{c.instructions+=2;NFSU2_TR(0x40a914);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a918:{NFSU2_TR(0x40a918);
__builtin_memmove((R+12),(R+8),4);
}
B40a91a:L40a91a:{c.instructions+=3;NFSU2_TR(0x40a91a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40a91c:{NFSU2_TR(0x40a91c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a920:{NFSU2_TR(0x40a920);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40a9fc;}}
}
B40a926:L40a926:{c.instructions+=4;NFSU2_TR(0x40a926);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B40a92a:{NFSU2_TR(0x40a92a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a92e:{NFSU2_TR(0x40a92e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a92f:{NFSU2_TR(0x40a92f);
}
B40a930:L40a930:{c.instructions+=5;NFSU2_TR(0x40a930);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a934:{NFSU2_TR(0x40a934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B40a936:{NFSU2_TR(0x40a936);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B40a93a:{NFSU2_TR(0x40a93a);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B40a93e:{NFSU2_TR(0x40a93e);
if(r1(R+518)){{goto L40a978;}}
}
B40a940:L40a940:{c.instructions+=3;NFSU2_TR(0x40a940);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B40a944:{NFSU2_TR(0x40a944);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B40a948:{NFSU2_TR(0x40a948);
if(r1(R+518)){{goto L40a978;}}
}
B40a94a:L40a94a:{c.instructions+=3;NFSU2_TR(0x40a94a);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B40a94d:{NFSU2_TR(0x40a94d);
u8 U[10];
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40a94f:{NFSU2_TR(0x40a94f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40a967;}}
}
B40a951:L40a951:{c.instructions+=5;NFSU2_TR(0x40a951);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B40a958:{NFSU2_TR(0x40a958);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B40a95b:{NFSU2_TR(0x40a95b);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B40a95e:{NFSU2_TR(0x40a95e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B40a965:{NFSU2_TR(0x40a965);
{goto L40a980;}
}
B40a967:L40a967:{c.instructions+=5;NFSU2_TR(0x40a967);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B40a96a:{NFSU2_TR(0x40a96a);
u8 U[6];
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40a96c:{NFSU2_TR(0x40a96c);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B40a96f:{NFSU2_TR(0x40a96f);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B40a976:{NFSU2_TR(0x40a976);
{goto L40a980;}
}
B40a978:L40a978:{c.instructions+=2;NFSU2_TR(0x40a978);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40a97a:{NFSU2_TR(0x40a97a);
__builtin_memmove((R+12),(R+12),4);
}
B40a980:L40a980:{c.instructions+=3;NFSU2_TR(0x40a980);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40a982:{NFSU2_TR(0x40a982);
__builtin_memmove((R+4),(R+24),4);
}
B40a984:{NFSU2_TR(0x40a984);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a987ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40a987:L40a987:{c.instructions+=8;NFSU2_TR(0x40a987);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B40a98c:{NFSU2_TR(0x40a98c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B40a98f:{NFSU2_TR(0x40a98f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a993:{NFSU2_TR(0x40a993);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40a995:{NFSU2_TR(0x40a995);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40a998:{NFSU2_TR(0x40a998);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40a99c:{NFSU2_TR(0x40a99c);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40a9a2:{NFSU2_TR(0x40a9a2);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a9a5:L40a9a5:{c.instructions+=5;NFSU2_TR(0x40a9a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40a9a7:{NFSU2_TR(0x40a9a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40a9aa:{NFSU2_TR(0x40a9aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40a9ab:{NFSU2_TR(0x40a9ab);
__builtin_memmove((R+4),(R+24),4);
}
B40a9ad:{NFSU2_TR(0x40a9ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40a9b0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40a9b0:L40a9b0:{c.instructions+=10;NFSU2_TR(0x40a9b0);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B40a9b5:{NFSU2_TR(0x40a9b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B40a9b8:{NFSU2_TR(0x40a9b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a9bc:{NFSU2_TR(0x40a9bc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B40a9bd:{NFSU2_TR(0x40a9bd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B40a9c0:{NFSU2_TR(0x40a9c0);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B40a9c3:{NFSU2_TR(0x40a9c3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B40a9c7:{NFSU2_TR(0x40a9c7);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40a9cd:{NFSU2_TR(0x40a9cd);
{u32 ea_=u32(r4(R+12)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40a9d0:{NFSU2_TR(0x40a9d0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40a9a5u);}goto L40a9a5;}}
}
B40a9d2:L40a9d2:{c.instructions+=10;NFSU2_TR(0x40a9d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a9d6:{NFSU2_TR(0x40a9d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40a9da:{NFSU2_TR(0x40a9da);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B40a9dd:{NFSU2_TR(0x40a9dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a9e1:{NFSU2_TR(0x40a9e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40a9e5:{NFSU2_TR(0x40a9e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40a9e8:{NFSU2_TR(0x40a9e8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B40a9e9:{NFSU2_TR(0x40a9e9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40a9eb:{NFSU2_TR(0x40a9eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40a9ef:{NFSU2_TR(0x40a9ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40a930u);}goto L40a930;}}
}
B40a9f5:L40a9f5:{c.instructions+=3;NFSU2_TR(0x40a9f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B40a9f9:{NFSU2_TR(0x40a9f9);
__builtin_memmove((R+24),(R+8),4);
}
B40a9fb:{NFSU2_TR(0x40a9fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40a9fc:L40a9fc:{c.instructions+=6;NFSU2_TR(0x40a9fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40aa00:{NFSU2_TR(0x40aa00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40aa01:{NFSU2_TR(0x40aa01);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40aa03:{NFSU2_TR(0x40aa03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40aa04:{NFSU2_TR(0x40aa04);
__builtin_memmove((R+4),(R+24),4);
}
B40aa06:{NFSU2_TR(0x40aa06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40aa0bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40a6e0u);}goto L40a6e0;}
}
B40aa0b:L40aa0b:{c.instructions+=5;NFSU2_TR(0x40aa0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40aa0c:{NFSU2_TR(0x40aa0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40aa0d:{NFSU2_TR(0x40aa0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40aa0e:{NFSU2_TR(0x40aa0e);
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
B40aa11:{NFSU2_TR(0x40aa11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40aa20:L40aa20:{c.instructions+=5;NFSU2_TR(0x40aa20);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B40aa25:{NFSU2_TR(0x40aa25);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40aa27:{NFSU2_TR(0x40aa27);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40aa2b:{NFSU2_TR(0x40aa2b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40aa2d:{NFSU2_TR(0x40aa2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40aa38;}}
}
B40aa2f:L40aa2f:{c.instructions+=3;NFSU2_TR(0x40aa2f);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B40aa34:{NFSU2_TR(0x40aa34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40aa36:{NFSU2_TR(0x40aa36);
if(r1(R+518)){{goto L40aa40;}}
}
B40aa38:L40aa38:{c.instructions+=2;NFSU2_TR(0x40aa38);
{u32 ea_=u32(u32(7879872u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40aa3e:{NFSU2_TR(0x40aa3e);
{goto L40aa46;}
}
B40aa40:L40aa40:{c.instructions+=1;NFSU2_TR(0x40aa40);
{u32 ea_=u32(u32(7879868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40aa46:L40aa46:{c.instructions+=6;NFSU2_TR(0x40aa46);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B40aa48:{NFSU2_TR(0x40aa48);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40aa4e:{NFSU2_TR(0x40aa4e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B40aa52:{NFSU2_TR(0x40aa52);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40aa54:{NFSU2_TR(0x40aa54);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40aa57:{NFSU2_TR(0x40aa57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40aa73;}}
}
B40aa59:L40aa59:{c.instructions+=5;NFSU2_TR(0x40aa59);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B40aa5b:{NFSU2_TR(0x40aa5b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40aa61:{NFSU2_TR(0x40aa61);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40aa63:{NFSU2_TR(0x40aa63);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40aa66:{NFSU2_TR(0x40aa66);
if(r1(R+518)){{goto L40aa82;}}
}
B40aa68:L40aa68:{c.instructions+=3;NFSU2_TR(0x40aa68);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40aa6a:{NFSU2_TR(0x40aa6a);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B40aa70:{NFSU2_TR(0x40aa70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40aa73:L40aa73:{c.instructions+=5;NFSU2_TR(0x40aa73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40aa75:{NFSU2_TR(0x40aa75);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40aa7b:{NFSU2_TR(0x40aa7b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40aa7d:{NFSU2_TR(0x40aa7d);
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
B40aa80:{NFSU2_TR(0x40aa80);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40aa68u);}goto L40aa68;}}
}
B40aa82:L40aa82:{c.instructions+=2;NFSU2_TR(0x40aa82);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40aa84:{NFSU2_TR(0x40aa84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40aa90:L40aa90:{c.instructions+=3;NFSU2_TR(0x40aa90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40aa94:{NFSU2_TR(0x40aa94);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40aa96:{NFSU2_TR(0x40aa96);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40aac1;}}
}
B40aa98:L40aa98:{c.instructions+=2;NFSU2_TR(0x40aa98);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40aa9b:{NFSU2_TR(0x40aa9b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40aac1;}}
}
B40aa9d:L40aa9d:{c.instructions+=3;NFSU2_TR(0x40aa9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40aaa0:{NFSU2_TR(0x40aaa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40aaa2:{NFSU2_TR(0x40aaa2);
if(r1(R+518)){{goto L40aab3;}}
}
B40aaa4:L40aaa4:{c.instructions+=4;NFSU2_TR(0x40aaa4);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B40aaa8:{NFSU2_TR(0x40aaa8);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40aaab:{NFSU2_TR(0x40aaab);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40aab1:{NFSU2_TR(0x40aab1);
{goto L40aae8;}
}
B40aab3:L40aab3:{c.instructions+=3;NFSU2_TR(0x40aab3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40aab9:{NFSU2_TR(0x40aab9);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40aabf:{NFSU2_TR(0x40aabf);
{goto L40aae8;}
}
B40aac1:L40aac1:{c.instructions+=2;NFSU2_TR(0x40aac1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40aac4:{NFSU2_TR(0x40aac4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40aafc;}}
}
B40aac6:L40aac6:{c.instructions+=2;NFSU2_TR(0x40aac6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40aac9:{NFSU2_TR(0x40aac9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40aafc;}}
}
B40aacb:L40aacb:{c.instructions+=3;NFSU2_TR(0x40aacb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40aace:{NFSU2_TR(0x40aace);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40aad0:{NFSU2_TR(0x40aad0);
if(r1(R+518)){{goto L40aadb;}}
}
B40aad2:L40aad2:{c.instructions+=3;NFSU2_TR(0x40aad2);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B40aad6:{NFSU2_TR(0x40aad6);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40aad9:{NFSU2_TR(0x40aad9);
{goto L40aae1;}
}
B40aadb:L40aadb:{c.instructions+=1;NFSU2_TR(0x40aadb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40aae1:L40aae1:{c.instructions+=1;NFSU2_TR(0x40aae1);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4)+u32(172u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40aae8:L40aae8:{c.instructions+=3;NFSU2_TR(0x40aae8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40aaea:{NFSU2_TR(0x40aaea);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40aaed:{NFSU2_TR(0x40aaed);
if(r1(R+514)){{goto L40aaf7;}}
}
B40aaef:L40aaef:{c.instructions+=2;NFSU2_TR(0x40aaef);
w4(R+0,u32(0x1ull));
}
B40aaf4:{NFSU2_TR(0x40aaf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40aaf7:L40aaf7:{c.instructions+=2;NFSU2_TR(0x40aaf7);
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
B40aaf9:{NFSU2_TR(0x40aaf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40aafc:L40aafc:{c.instructions+=2;NFSU2_TR(0x40aafc);
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
B40aafe:{NFSU2_TR(0x40aafe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ab10:L40ab10:{c.instructions+=11;NFSU2_TR(0x40ab10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ab11:{NFSU2_TR(0x40ab11);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40ab15:{NFSU2_TR(0x40ab15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ab16:{NFSU2_TR(0x40ab16);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ab17:{NFSU2_TR(0x40ab17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B40ab1a:{NFSU2_TR(0x40ab1a);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B40ab1d:{NFSU2_TR(0x40ab1d);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B40ab1f:{NFSU2_TR(0x40ab1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ab20:{NFSU2_TR(0x40ab20);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40ab28:{NFSU2_TR(0x40ab28);
__builtin_memmove((R+24),(R+0),4);
}
B40ab2a:{NFSU2_TR(0x40ab2a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40ab99;}}
}
B40ab2c:L40ab2c:{c.instructions+=4;NFSU2_TR(0x40ab2c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ab2d:{NFSU2_TR(0x40ab2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B40ab31:{NFSU2_TR(0x40ab31);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x1ull))));
}
B40ab34:{NFSU2_TR(0x40ab34);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B40ab38:L40ab38:{c.instructions+=3;NFSU2_TR(0x40ab38);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40ab3a:{NFSU2_TR(0x40ab3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B40ab3c:{NFSU2_TR(0x40ab3c);
if(r1(R+518)){{goto L40ab52;}}
}
B40ab3e:L40ab3e:{c.instructions+=7;NFSU2_TR(0x40ab3e);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ab41:{NFSU2_TR(0x40ab41);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ab45:{NFSU2_TR(0x40ab45);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B40ab49:{NFSU2_TR(0x40ab49);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B40ab4b:{NFSU2_TR(0x40ab4b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40ab4d:{NFSU2_TR(0x40ab4d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40ab50:{NFSU2_TR(0x40ab50);
if(r1(R+514)){{goto L40ab90;}}
}
B40ab52:L40ab52:{c.instructions+=2;NFSU2_TR(0x40ab52);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B40ab57:{NFSU2_TR(0x40ab57);
if(r1(R+518)){{goto L40ab6d;}}
}
B40ab59:L40ab59:{c.instructions+=7;NFSU2_TR(0x40ab59);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ab5c:{NFSU2_TR(0x40ab5c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ab60:{NFSU2_TR(0x40ab60);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40ab64:{NFSU2_TR(0x40ab64);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B40ab66:{NFSU2_TR(0x40ab66);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40ab68:{NFSU2_TR(0x40ab68);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40ab6b:{NFSU2_TR(0x40ab6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40ab90;}}
}
B40ab6d:L40ab6d:{c.instructions+=5;NFSU2_TR(0x40ab6d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40ab70:{NFSU2_TR(0x40ab70);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ab73:{NFSU2_TR(0x40ab73);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40ab77:{NFSU2_TR(0x40ab77);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B40ab79:{NFSU2_TR(0x40ab79);
if(r1(R+518)){{goto L40ab86;}}
}
B40ab7b:L40ab7b:{c.instructions+=4;NFSU2_TR(0x40ab7b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B40ab7f:{NFSU2_TR(0x40ab7f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40ab81:{NFSU2_TR(0x40ab81);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40ab84:{NFSU2_TR(0x40ab84);
if(r1(R+514)){{goto L40ab8e;}}
}
B40ab86:L40ab86:{c.instructions+=3;NFSU2_TR(0x40ab86);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B40ab8a:{NFSU2_TR(0x40ab8a);
__builtin_memmove((R+12),(R+24),4);
}
B40ab8c:{NFSU2_TR(0x40ab8c);
{goto L40ab90;}
}
B40ab8e:L40ab8e:{c.instructions+=1;NFSU2_TR(0x40ab8e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40ab90:L40ab90:{c.instructions+=4;NFSU2_TR(0x40ab90);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B40ab91:{NFSU2_TR(0x40ab91);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B40ab94:{NFSU2_TR(0x40ab94);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B40ab96:{NFSU2_TR(0x40ab96);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40ab38u);}goto L40ab38;}}
}
B40ab98:L40ab98:{c.instructions+=1;NFSU2_TR(0x40ab98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40ab99:L40ab99:{c.instructions+=6;NFSU2_TR(0x40ab99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ab9a:{NFSU2_TR(0x40ab9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B40ab9b:{NFSU2_TR(0x40ab9b);
__builtin_memmove((R+0),(R+12),4);
}
B40ab9d:{NFSU2_TR(0x40ab9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40ab9e:{NFSU2_TR(0x40ab9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40ab9f:{NFSU2_TR(0x40ab9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40abb0:L40abb0:{c.instructions+=8;NFSU2_TR(0x40abb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40abb4:{NFSU2_TR(0x40abb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40abb5:{NFSU2_TR(0x40abb5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40abb7:{NFSU2_TR(0x40abb7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40abb9:{NFSU2_TR(0x40abb9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40abbb:{NFSU2_TR(0x40abbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40abbc:{NFSU2_TR(0x40abbc);
__builtin_memmove((R+24),(R+4),4);
}
B40abbe:{NFSU2_TR(0x40abbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40abc3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40ab10u);}goto L40ab10;}
}
B40abc3:L40abc3:{c.instructions+=4;NFSU2_TR(0x40abc3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B40abc5:{NFSU2_TR(0x40abc5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40abc7:{NFSU2_TR(0x40abc7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40abca:{NFSU2_TR(0x40abca);
if(r1(R+518)){{goto L40abd5;}}
}
B40abcc:L40abcc:{c.instructions+=3;NFSU2_TR(0x40abcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40abcf:{NFSU2_TR(0x40abcf);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B40abd3:{NFSU2_TR(0x40abd3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B40abd5:L40abd5:{c.instructions+=4;NFSU2_TR(0x40abd5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B40abdb:{NFSU2_TR(0x40abdb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B40abdd:{NFSU2_TR(0x40abdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40abde:{NFSU2_TR(0x40abde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40ac0d;}}
}
B40abe0:L40abe0:{c.instructions+=2;NFSU2_TR(0x40abe0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B40abe2:{NFSU2_TR(0x40abe2);
if(r1(R+518)){{goto L40ac1a;}}
}
B40abe4:L40abe4:{c.instructions+=3;NFSU2_TR(0x40abe4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B40abe8:{NFSU2_TR(0x40abe8);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B40abec:{NFSU2_TR(0x40abec);
if(r1(R+518)){{goto L40ac05;}}
}
B40abee:L40abee:{c.instructions+=2;NFSU2_TR(0x40abee);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B40abf3:{NFSU2_TR(0x40abf3);
if(r1(R+518)){{goto L40ac05;}}
}
B40abf5:L40abf5:{c.instructions+=3;NFSU2_TR(0x40abf5);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B40abf8:{NFSU2_TR(0x40abf8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40abfa:{NFSU2_TR(0x40abfa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40ac05;}}
}
B40abfc:L40abfc:{c.instructions+=2;NFSU2_TR(0x40abfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B40ac03:{NFSU2_TR(0x40ac03);
{goto L40ac07;}
}
B40ac05:L40ac05:{c.instructions+=1;NFSU2_TR(0x40ac05);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40ac07:L40ac07:{c.instructions+=2;NFSU2_TR(0x40ac07);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B40ac0b:{NFSU2_TR(0x40ac0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40ac1a;}}
}
B40ac0d:L40ac0d:{c.instructions+=2;NFSU2_TR(0x40ac0d);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40ac10:{NFSU2_TR(0x40ac10);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L40ac1a;}}
}
B40ac12:L40ac12:{c.instructions+=2;NFSU2_TR(0x40ac12);
w4(R+0,u32(0x1ull));
}
B40ac17:{NFSU2_TR(0x40ac17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ac1a:L40ac1a:{c.instructions+=2;NFSU2_TR(0x40ac1a);
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
B40ac1c:{NFSU2_TR(0x40ac1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ac20:L40ac20:{c.instructions+=9;NFSU2_TR(0x40ac20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ac21:{NFSU2_TR(0x40ac21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ac22:{NFSU2_TR(0x40ac22);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40ac26:{NFSU2_TR(0x40ac26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ac27:{NFSU2_TR(0x40ac27);
u8 U[4];
w4(U+0,u32(0x784744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ac2c:{NFSU2_TR(0x40ac2c);
__builtin_memmove((R+28),(R+4),4);
}
B40ac2e:{NFSU2_TR(0x40ac2e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ac30:{NFSU2_TR(0x40ac30);
__builtin_memmove((R+4),(R+24),4);
}
B40ac32:{NFSU2_TR(0x40ac32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ac37ull));
TAIL_STATIC(0x578ce0u,578);
}
B40ac37:L40ac37:{c.instructions+=4;NFSU2_TR(0x40ac37);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((R+0),(U+0),4);
}
B40ac3a:{NFSU2_TR(0x40ac3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ac3b:{NFSU2_TR(0x40ac3b);
__builtin_memmove((R+4),(R+24),4);
}
B40ac3d:{NFSU2_TR(0x40ac3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ac42ull));
TAIL_STATIC(0x571710u,571);
}
B40ac42:L40ac42:{c.instructions+=4;NFSU2_TR(0x40ac42);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5eull))));
__builtin_memmove((R+4),(U+0),4);
}
B40ac45:{NFSU2_TR(0x40ac45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ac46:{NFSU2_TR(0x40ac46);
__builtin_memmove((R+4),(R+24),4);
}
B40ac48:{NFSU2_TR(0x40ac48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ac4dull));
TAIL_STATIC(0x571710u,571);
}
B40ac4d:L40ac4d:{c.instructions+=4;NFSU2_TR(0x40ac4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+8),(U+0),4);
}
B40ac50:{NFSU2_TR(0x40ac50);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ac51:{NFSU2_TR(0x40ac51);
__builtin_memmove((R+4),(R+24),4);
}
B40ac53:{NFSU2_TR(0x40ac53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ac58ull));
TAIL_STATIC(0x571770u,571);
}
B40ac58:L40ac58:{c.instructions+=4;NFSU2_TR(0x40ac58);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40ac5b:{NFSU2_TR(0x40ac5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ac5c:{NFSU2_TR(0x40ac5c);
__builtin_memmove((R+4),(R+24),4);
}
B40ac5e:{NFSU2_TR(0x40ac5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ac63ull));
TAIL_STATIC(0x571770u,571);
}
B40ac63:L40ac63:{c.instructions+=4;NFSU2_TR(0x40ac63);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40ac66:{NFSU2_TR(0x40ac66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ac67:{NFSU2_TR(0x40ac67);
__builtin_memmove((R+4),(R+24),4);
}
B40ac69:{NFSU2_TR(0x40ac69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ac6eull));
TAIL_STATIC(0x5716c0u,571);
}
B40ac6e:L40ac6e:{c.instructions+=4;NFSU2_TR(0x40ac6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B40ac71:{NFSU2_TR(0x40ac71);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ac72:{NFSU2_TR(0x40ac72);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ac73:{NFSU2_TR(0x40ac73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ac78ull));
TAIL_STATIC(0x5d3f10u,5d3);
}
B40ac78:L40ac78:{c.instructions+=6;NFSU2_TR(0x40ac78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B40ac7b:{NFSU2_TR(0x40ac7b);
u8 U[4];
w4(U+0,u32(0x43000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ac80:{NFSU2_TR(0x40ac80);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40ac83:{NFSU2_TR(0x40ac83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ac84:{NFSU2_TR(0x40ac84);
__builtin_memmove((R+4),(R+24),4);
}
B40ac86:{NFSU2_TR(0x40ac86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ac8bull));
TAIL_STATIC(0x578410u,578);
}
B40ac8b:L40ac8b:{c.instructions+=5;NFSU2_TR(0x40ac8b);
u8 U[4];
w4(U+0,u32(0x43000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ac90:{NFSU2_TR(0x40ac90);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B40ac93:{NFSU2_TR(0x40ac93);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ac94:{NFSU2_TR(0x40ac94);
__builtin_memmove((R+4),(R+24),4);
}
B40ac96:{NFSU2_TR(0x40ac96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ac9bull));
TAIL_STATIC(0x578410u,578);
}
B40ac9b:L40ac9b:{c.instructions+=5;NFSU2_TR(0x40ac9b);
u8 U[4];
w4(U+0,u32(0x43000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40aca0:{NFSU2_TR(0x40aca0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((R+8),(U+0),4);
}
B40aca3:{NFSU2_TR(0x40aca3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40aca4:{NFSU2_TR(0x40aca4);
__builtin_memmove((R+4),(R+24),4);
}
B40aca6:{NFSU2_TR(0x40aca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40acabull));
TAIL_STATIC(0x578410u,578);
}
B40acab:L40acab:{c.instructions+=5;NFSU2_TR(0x40acab);
u8 U[4];
w4(U+0,u32(0x44000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40acb0:{NFSU2_TR(0x40acb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40acb3:{NFSU2_TR(0x40acb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40acb4:{NFSU2_TR(0x40acb4);
__builtin_memmove((R+4),(R+24),4);
}
B40acb6:{NFSU2_TR(0x40acb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40acbbull));
TAIL_STATIC(0x578410u,578);
}
B40acbb:L40acbb:{c.instructions+=2;NFSU2_TR(0x40acbb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B40acbe:{NFSU2_TR(0x40acbe);
w4(R+12,u32(0x4ull));
}
B40acc3:L40acc3:{c.instructions+=5;NFSU2_TR(0x40acc3);
u8 U[4];
w4(U+0,u32(0x43000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40acc8:{NFSU2_TR(0x40acc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B40accb:{NFSU2_TR(0x40accb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40accc:{NFSU2_TR(0x40accc);
__builtin_memmove((R+4),(R+24),4);
}
B40acce:{NFSU2_TR(0x40acce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40acd3ull));
TAIL_STATIC(0x578410u,578);
}
B40acd3:L40acd3:{c.instructions+=4;NFSU2_TR(0x40acd3);
u8 U[4];
w4(U+0,u32(0x43000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40acd8:{NFSU2_TR(0x40acd8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40acd9:{NFSU2_TR(0x40acd9);
__builtin_memmove((R+4),(R+24),4);
}
B40acdb:{NFSU2_TR(0x40acdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ace0ull));
TAIL_STATIC(0x578410u,578);
}
B40ace0:L40ace0:{c.instructions+=5;NFSU2_TR(0x40ace0);
u8 U[4];
w4(U+0,u32(0x43000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ace5:{NFSU2_TR(0x40ace5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+8),(U+0),4);
}
B40ace8:{NFSU2_TR(0x40ace8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ace9:{NFSU2_TR(0x40ace9);
__builtin_memmove((R+4),(R+24),4);
}
B40aceb:{NFSU2_TR(0x40aceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40acf0ull));
TAIL_STATIC(0x578410u,578);
}
B40acf0:L40acf0:{c.instructions+=5;NFSU2_TR(0x40acf0);
u8 U[4];
w4(U+0,u32(0x44000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40acf5:{NFSU2_TR(0x40acf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B40acf8:{NFSU2_TR(0x40acf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40acf9:{NFSU2_TR(0x40acf9);
__builtin_memmove((R+4),(R+24),4);
}
B40acfb:{NFSU2_TR(0x40acfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ad00ull));
TAIL_STATIC(0x578410u,578);
}
B40ad00:L40ad00:{c.instructions+=3;NFSU2_TR(0x40ad00);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B40ad03:{NFSU2_TR(0x40ad03);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B40ad04:{NFSU2_TR(0x40ad04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x40acc3u);}goto L40acc3;}}
}
B40ad06:L40ad06:{c.instructions+=2;NFSU2_TR(0x40ad06);
__builtin_memmove((R+4),(R+24),4);
}
B40ad08:{NFSU2_TR(0x40ad08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ad0dull));
TAIL_STATIC(0x578d90u,578);
}
B40ad0d:L40ad0d:{c.instructions+=4;NFSU2_TR(0x40ad0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40ad0e:{NFSU2_TR(0x40ad0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ad0f:{NFSU2_TR(0x40ad0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B40ad10:{NFSU2_TR(0x40ad10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ad20:L40ad20:{c.instructions+=39;NFSU2_TR(0x40ad20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ad21:{NFSU2_TR(0x40ad21);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B40ad24:{NFSU2_TR(0x40ad24);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B40ad28:{NFSU2_TR(0x40ad28);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B40ad2c:{NFSU2_TR(0x40ad2c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40ad2e:{NFSU2_TR(0x40ad2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad31:{NFSU2_TR(0x40ad31);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B40ad34:{NFSU2_TR(0x40ad34);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad37:{NFSU2_TR(0x40ad37);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B40ad3a:{NFSU2_TR(0x40ad3a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40ad3c:{NFSU2_TR(0x40ad3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ad3f:{NFSU2_TR(0x40ad3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B40ad41:{NFSU2_TR(0x40ad41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad44:{NFSU2_TR(0x40ad44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad47:{NFSU2_TR(0x40ad47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad4a:{NFSU2_TR(0x40ad4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad4d:{NFSU2_TR(0x40ad4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad50:{NFSU2_TR(0x40ad50);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B40ad53:{NFSU2_TR(0x40ad53);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((R+8),(U+0),4);
}
B40ad56:{NFSU2_TR(0x40ad56);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B40ad58:{NFSU2_TR(0x40ad58);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ad5b:{NFSU2_TR(0x40ad5b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B40ad5d:{NFSU2_TR(0x40ad5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad60:{NFSU2_TR(0x40ad60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad63:{NFSU2_TR(0x40ad63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad66:{NFSU2_TR(0x40ad66);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ad69:{NFSU2_TR(0x40ad69);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B40ad6b:{NFSU2_TR(0x40ad6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad6e:{NFSU2_TR(0x40ad6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad71:{NFSU2_TR(0x40ad71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad74:{NFSU2_TR(0x40ad74);
__builtin_memmove((R+8),gp(0x783c60),4);
}
B40ad7a:{NFSU2_TR(0x40ad7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad7d:{NFSU2_TR(0x40ad7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad80:{NFSU2_TR(0x40ad80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad83:{NFSU2_TR(0x40ad83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad86:{NFSU2_TR(0x40ad86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad89:{NFSU2_TR(0x40ad89);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B40ad8c:{NFSU2_TR(0x40ad8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ad8d:{NFSU2_TR(0x40ad8d);
if(r1(R+518)){{goto L40ad92;}}
}
B40ad8f:L40ad8f:{c.instructions+=1;NFSU2_TR(0x40ad8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B40ad92:L40ad92:{c.instructions+=1;NFSU2_TR(0x40ad92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ada0:L40ada0:{c.instructions+=8;NFSU2_TR(0x40ada0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ada4:{NFSU2_TR(0x40ada4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40ada8:{NFSU2_TR(0x40ada8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40adae:{NFSU2_TR(0x40adae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40adaf:{NFSU2_TR(0x40adaf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40adb1:{NFSU2_TR(0x40adb1);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40adb4:{NFSU2_TR(0x40adb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40adb6:{NFSU2_TR(0x40adb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40adc2;}}
}
B40adb8:L40adb8:{c.instructions+=1;NFSU2_TR(0x40adb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40adbbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40adbb:L40adbb:{c.instructions+=2;NFSU2_TR(0x40adbb);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B40adbf:{NFSU2_TR(0x40adbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40adc2:L40adc2:{c.instructions+=1;NFSU2_TR(0x40adc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40adc5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40adc5:L40adc5:{c.instructions+=2;NFSU2_TR(0x40adc5);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40adc9:{NFSU2_TR(0x40adc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40add0:L40add0:{c.instructions+=3;NFSU2_TR(0x40add0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B40add4:{NFSU2_TR(0x40add4);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0xffffull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B40add8:{NFSU2_TR(0x40add8);
if(r1(R+518)){{goto L40ae19;}}
}
B40adda:L40adda:{c.instructions+=3;NFSU2_TR(0x40adda);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B40adde:{NFSU2_TR(0x40adde);
u8 U[8];
__builtin_memmove((U+4),(R+8),2);
w1(R+512,u8((r2(U+4))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0xffffull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B40ade2:{NFSU2_TR(0x40ade2);
if(r1(R+518)){{goto L40ae19;}}
}
B40ade4:L40ade4:{c.instructions+=3;NFSU2_TR(0x40ade4);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B40ade7:{NFSU2_TR(0x40ade7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40ade9:{NFSU2_TR(0x40ade9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40adf4;}}
}
B40adeb:L40adeb:{c.instructions+=2;NFSU2_TR(0x40adeb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B40adf2:{NFSU2_TR(0x40adf2);
{goto L40adf6;}
}
B40adf4:L40adf4:{c.instructions+=1;NFSU2_TR(0x40adf4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40adf6:L40adf6:{c.instructions+=5;NFSU2_TR(0x40adf6);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B40adf9:{NFSU2_TR(0x40adf9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B40adfc:{NFSU2_TR(0x40adfc);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B40ae03:{NFSU2_TR(0x40ae03);
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
B40ae05:{NFSU2_TR(0x40ae05);
if(r1(R+518)){{goto L40ae19;}}
}
B40ae07:L40ae07:{c.instructions+=6;NFSU2_TR(0x40ae07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40ae09:{NFSU2_TR(0x40ae09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ae0a:{NFSU2_TR(0x40ae0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40ae0e:{NFSU2_TR(0x40ae0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ae0f:{NFSU2_TR(0x40ae0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ae10:{NFSU2_TR(0x40ae10);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ae13ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40ae13:L40ae13:{c.instructions+=3;NFSU2_TR(0x40ae13);
__builtin_memmove((R+0),(R+24),4);
}
B40ae15:{NFSU2_TR(0x40ae15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ae16:{NFSU2_TR(0x40ae16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ae19:L40ae19:{c.instructions+=4;NFSU2_TR(0x40ae19);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40ae1d:{NFSU2_TR(0x40ae1d);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B40ae23:{NFSU2_TR(0x40ae23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B40ae2a:{NFSU2_TR(0x40ae2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ae30:L40ae30:{c.instructions+=6;NFSU2_TR(0x40ae30);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ae36:{NFSU2_TR(0x40ae36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ae37:{NFSU2_TR(0x40ae37);
__builtin_memmove((R+24),(R+4),4);
}
B40ae39:{NFSU2_TR(0x40ae39);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B40ae3d:{NFSU2_TR(0x40ae3d);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0xffffull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B40ae41:{NFSU2_TR(0x40ae41);
if(r1(R+518)){{goto L40ae87;}}
}
B40ae43:L40ae43:{c.instructions+=3;NFSU2_TR(0x40ae43);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B40ae47:{NFSU2_TR(0x40ae47);
u8 U[8];
__builtin_memmove((U+4),(R+4),2);
w1(R+512,u8((r2(U+4))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0xffffull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B40ae4b:{NFSU2_TR(0x40ae4b);
if(r1(R+518)){{goto L40ae87;}}
}
B40ae4d:L40ae4d:{c.instructions+=3;NFSU2_TR(0x40ae4d);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B40ae50:{NFSU2_TR(0x40ae50);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40ae52:{NFSU2_TR(0x40ae52);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40ae5d;}}
}
B40ae54:L40ae54:{c.instructions+=2;NFSU2_TR(0x40ae54);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B40ae5b:{NFSU2_TR(0x40ae5b);
{goto L40ae5f;}
}
B40ae5d:L40ae5d:{c.instructions+=1;NFSU2_TR(0x40ae5d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40ae5f:L40ae5f:{c.instructions+=5;NFSU2_TR(0x40ae5f);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B40ae62:{NFSU2_TR(0x40ae62);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B40ae65:{NFSU2_TR(0x40ae65);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B40ae6c:{NFSU2_TR(0x40ae6c);
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
B40ae6e:{NFSU2_TR(0x40ae6e);
if(r1(R+518)){{goto L40ae87;}}
}
B40ae70:L40ae70:{c.instructions+=7;NFSU2_TR(0x40ae70);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B40ae74:{NFSU2_TR(0x40ae74);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B40ae76:{NFSU2_TR(0x40ae76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B40ae78:{NFSU2_TR(0x40ae78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ae79:{NFSU2_TR(0x40ae79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40ae7a:{NFSU2_TR(0x40ae7a);
__builtin_memmove((R+4),(R+24),4);
}
B40ae7c:{NFSU2_TR(0x40ae7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40ae7full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40ae7f:L40ae7f:{c.instructions+=3;NFSU2_TR(0x40ae7f);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40ae82:{NFSU2_TR(0x40ae82);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40ae85:{NFSU2_TR(0x40ae85);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B40ae87:L40ae87:{c.instructions+=2;NFSU2_TR(0x40ae87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40ae88:{NFSU2_TR(0x40ae88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ae90:L40ae90:{c.instructions+=3;NFSU2_TR(0x40ae90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40ae94:{NFSU2_TR(0x40ae94);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B40ae97:{NFSU2_TR(0x40ae97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40ae9e;}}
}
B40ae99:L40ae99:{c.instructions+=2;NFSU2_TR(0x40ae99);
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
B40ae9b:{NFSU2_TR(0x40ae9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40ae9e:L40ae9e:{c.instructions+=4;NFSU2_TR(0x40ae9e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40aea0:{NFSU2_TR(0x40aea0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40aea1:{NFSU2_TR(0x40aea1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40aea2:{NFSU2_TR(0x40aea2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40aeb0;}}
}
B40aea4:L40aea4:{c.instructions+=2;NFSU2_TR(0x40aea4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40aea7:{NFSU2_TR(0x40aea7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40aeb5;}}
}
B40aea9:L40aea9:{c.instructions+=2;NFSU2_TR(0x40aea9);
w4(R+28,u32(0x1ull));
}
B40aeae:{NFSU2_TR(0x40aeae);
{goto L40aec3;}
}
B40aeb0:L40aeb0:{c.instructions+=2;NFSU2_TR(0x40aeb0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40aeb3:{NFSU2_TR(0x40aeb3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40aec1;}}
}
B40aeb5:L40aeb5:{c.instructions+=2;NFSU2_TR(0x40aeb5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40aeb8:{NFSU2_TR(0x40aeb8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40aec1;}}
}
B40aeba:L40aeba:{c.instructions+=2;NFSU2_TR(0x40aeba);
w4(R+28,u32(0x2ull));
}
B40aebf:{NFSU2_TR(0x40aebf);
{goto L40aec3;}
}
B40aec1:L40aec1:{c.instructions+=1;NFSU2_TR(0x40aec1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B40aec3:L40aec3:{c.instructions+=3;NFSU2_TR(0x40aec3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B40aec7:{NFSU2_TR(0x40aec7);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B40aecb:{NFSU2_TR(0x40aecb);
if(r1(R+518)){{goto L40aee4;}}
}
B40aecd:L40aecd:{c.instructions+=2;NFSU2_TR(0x40aecd);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B40aed2:{NFSU2_TR(0x40aed2);
if(r1(R+518)){{goto L40aee4;}}
}
B40aed4:L40aed4:{c.instructions+=3;NFSU2_TR(0x40aed4);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B40aed7:{NFSU2_TR(0x40aed7);
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
B40aed9:{NFSU2_TR(0x40aed9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40aee4;}}
}
B40aedb:L40aedb:{c.instructions+=2;NFSU2_TR(0x40aedb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B40aee2:{NFSU2_TR(0x40aee2);
{goto L40aee6;}
}
B40aee4:L40aee4:{c.instructions+=1;NFSU2_TR(0x40aee4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40aee6:L40aee6:{c.instructions+=3;NFSU2_TR(0x40aee6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B40aee8:{NFSU2_TR(0x40aee8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40aee9:{NFSU2_TR(0x40aee9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x40aeecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B40aeec:L40aeec:{c.instructions+=3;NFSU2_TR(0x40aeec);
__builtin_memmove((R+4),(R+28),4);
}
B40aeee:{NFSU2_TR(0x40aeee);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B40aeef:{NFSU2_TR(0x40aeef);
if(r1(R+518)){{goto L40af06;}}
}
B40aef1:L40aef1:{c.instructions+=2;NFSU2_TR(0x40aef1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B40aef2:{NFSU2_TR(0x40aef2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40aeff;}}
}
B40aef4:L40aef4:{c.instructions+=3;NFSU2_TR(0x40aef4);
u8 U[13];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B40aefb:{NFSU2_TR(0x40aefb);
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
B40aefd:{NFSU2_TR(0x40aefd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40af1d;}}
}
B40aeff:L40aeff:{c.instructions+=4;NFSU2_TR(0x40aeff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40af00:{NFSU2_TR(0x40af00);
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
B40af02:{NFSU2_TR(0x40af02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40af03:{NFSU2_TR(0x40af03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40af06:L40af06:{c.instructions+=3;NFSU2_TR(0x40af06);
u8 U[13];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B40af0a:{NFSU2_TR(0x40af0a);
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
B40af0c:{NFSU2_TR(0x40af0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40af1d;}}
}
B40af0e:L40af0e:{c.instructions+=3;NFSU2_TR(0x40af0e);
u8 U[13];
w4(U+0,u32(u32(u32(0x75ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B40af12:{NFSU2_TR(0x40af12);
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
B40af14:{NFSU2_TR(0x40af14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40af1d;}}
}
B40af16:L40af16:{c.instructions+=4;NFSU2_TR(0x40af16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40af17:{NFSU2_TR(0x40af17);
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
B40af19:{NFSU2_TR(0x40af19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40af1a:{NFSU2_TR(0x40af1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40af1d:L40af1d:{c.instructions+=4;NFSU2_TR(0x40af1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40af1e:{NFSU2_TR(0x40af1e);
w1(R+0,u8(0x1ull));
}
B40af20:{NFSU2_TR(0x40af20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40af21:{NFSU2_TR(0x40af21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40af30:L40af30:{c.instructions+=5;NFSU2_TR(0x40af30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40af31:{NFSU2_TR(0x40af31);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B40af35:{NFSU2_TR(0x40af35);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40af37:{NFSU2_TR(0x40af37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40af38:{NFSU2_TR(0x40af38);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40af46;}}
}
B40af3a:L40af3a:{c.instructions+=2;NFSU2_TR(0x40af3a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40af3d:{NFSU2_TR(0x40af3d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40af4b;}}
}
B40af3f:L40af3f:{c.instructions+=2;NFSU2_TR(0x40af3f);
w4(R+28,u32(0x1ull));
}
B40af44:{NFSU2_TR(0x40af44);
{goto L40af59;}
}
B40af46:L40af46:{c.instructions+=2;NFSU2_TR(0x40af46);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40af49:{NFSU2_TR(0x40af49);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40af57;}}
}
B40af4b:L40af4b:{c.instructions+=2;NFSU2_TR(0x40af4b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40af4e:{NFSU2_TR(0x40af4e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40af57;}}
}
B40af50:L40af50:{c.instructions+=2;NFSU2_TR(0x40af50);
w4(R+28,u32(0x2ull));
}
B40af55:{NFSU2_TR(0x40af55);
{goto L40af59;}
}
B40af57:L40af57:{c.instructions+=1;NFSU2_TR(0x40af57);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B40af59:L40af59:{c.instructions+=3;NFSU2_TR(0x40af59);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B40af5d:{NFSU2_TR(0x40af5d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40af5f:{NFSU2_TR(0x40af5f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40af6d;}}
}
B40af61:L40af61:{c.instructions+=2;NFSU2_TR(0x40af61);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40af64:{NFSU2_TR(0x40af64);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40af72;}}
}
B40af66:L40af66:{c.instructions+=2;NFSU2_TR(0x40af66);
w4(R+0,u32(0x1ull));
}
B40af6b:{NFSU2_TR(0x40af6b);
{goto L40af80;}
}
B40af6d:L40af6d:{c.instructions+=2;NFSU2_TR(0x40af6d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40af70:{NFSU2_TR(0x40af70);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40af7e;}}
}
B40af72:L40af72:{c.instructions+=2;NFSU2_TR(0x40af72);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B40af75:{NFSU2_TR(0x40af75);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40af7e;}}
}
B40af77:L40af77:{c.instructions+=2;NFSU2_TR(0x40af77);
w4(R+0,u32(0x2ull));
}
B40af7c:{NFSU2_TR(0x40af7c);
{goto L40af80;}
}
B40af7e:L40af7e:{c.instructions+=1;NFSU2_TR(0x40af7e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B40af80:L40af80:{c.instructions+=2;NFSU2_TR(0x40af80);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B40af83:{NFSU2_TR(0x40af83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40afb6;}}
}
B40af85:L40af85:{c.instructions+=2;NFSU2_TR(0x40af85);
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
B40af87:{NFSU2_TR(0x40af87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40afb6;}}
}
B40af89:L40af89:{c.instructions+=7;NFSU2_TR(0x40af89);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40af8c:{NFSU2_TR(0x40af8c);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+0)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40af93:{NFSU2_TR(0x40af93);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+0)+u32(172u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B40af9a:{NFSU2_TR(0x40af9a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B40af9e:{NFSU2_TR(0x40af9e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B40afa0:{NFSU2_TR(0x40afa0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B40afa3:{NFSU2_TR(0x40afa3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L40afaf;}}
}
B40afa5:L40afa5:{c.instructions+=4;NFSU2_TR(0x40afa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40afa6:{NFSU2_TR(0x40afa6);
w4(R+0,u32(0x1ull));
}
B40afab:{NFSU2_TR(0x40afab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40afac:{NFSU2_TR(0x40afac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40afaf:L40afaf:{c.instructions+=4;NFSU2_TR(0x40afaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40afb0:{NFSU2_TR(0x40afb0);
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
B40afb2:{NFSU2_TR(0x40afb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40afb3:{NFSU2_TR(0x40afb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40afb6:L40afb6:{c.instructions+=4;NFSU2_TR(0x40afb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B40afb7:{NFSU2_TR(0x40afb7);
w1(R+0,u8(0x1ull));
}
B40afb9:{NFSU2_TR(0x40afb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B40afba:{NFSU2_TR(0x40afba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40afc0:L40afc0:{c.instructions+=3;NFSU2_TR(0x40afc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40afc4:{NFSU2_TR(0x40afc4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B40afc6:{NFSU2_TR(0x40afc6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40afd3;}}
}
B40afc8:L40afc8:{c.instructions+=2;NFSU2_TR(0x40afc8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40afcb:{NFSU2_TR(0x40afcb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40afd3;}}
}
B40afcd:L40afcd:{c.instructions+=2;NFSU2_TR(0x40afcd);
{u32 ea_=u32(r4(R+4)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40afd0:{NFSU2_TR(0x40afd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40afd3:L40afd3:{c.instructions+=2;NFSU2_TR(0x40afd3);
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
B40afd6:{NFSU2_TR(0x40afd6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L40afe4;}}
}
B40afd8:L40afd8:{c.instructions+=2;NFSU2_TR(0x40afd8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B40afdb:{NFSU2_TR(0x40afdb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L40afe4;}}
}
B40afdd:L40afdd:{c.instructions+=2;NFSU2_TR(0x40afdd);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40afe1:{NFSU2_TR(0x40afe1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40afe4:L40afe4:{c.instructions+=2;NFSU2_TR(0x40afe4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40afea:{NFSU2_TR(0x40afea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B40aff0:L40aff0:{c.instructions+=6;NFSU2_TR(0x40aff0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B40aff6:{NFSU2_TR(0x40aff6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B40aff7:{NFSU2_TR(0x40aff7);
__builtin_memmove((R+24),(R+4),4);
}
B40aff9:{NFSU2_TR(0x40aff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B40affc:{NFSU2_TR(0x40affc);
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
B40affe:{NFSU2_TR(0x40affe);
if(r1(R+518)){TAIL_STATIC(0x40b00au,40b);}
TAIL_STATIC(0x40b000u,40b);
}
XIT:NFSU2_TR_EXIT(0x40a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
