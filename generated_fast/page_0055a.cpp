#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_524(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_53b(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_557(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_559(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x55a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x55a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_55a(u8* __restrict R,Cpu& c);
u32 page_55a(Cpu& c){return body_55a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_55a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x55a002:goto L55a002;
case 0x55a004:c.instructions+=1;goto B55a004;
case 0x55a006:goto L55a006;
case 0x55a009:c.instructions+=3;goto B55a009;
case 0x55a00c:c.instructions+=2;goto B55a00c;
case 0x55a00f:c.instructions+=1;goto B55a00f;
case 0x55a012:goto L55a012;
case 0x55a017:c.instructions+=3;goto B55a017;
case 0x55a01c:c.instructions+=2;goto B55a01c;
case 0x55a01d:c.instructions+=1;goto B55a01d;
case 0x55a022:goto L55a022;
case 0x55a025:c.instructions+=1;goto B55a025;
case 0x55a02a:goto L55a02a;
case 0x55a02d:c.instructions+=1;goto B55a02d;
case 0x55a02f:goto L55a02f;
case 0x55a036:c.instructions+=1;goto B55a036;
case 0x55a03c:goto L55a03c;
case 0x55a03f:c.instructions+=3;goto B55a03f;
case 0x55a040:c.instructions+=2;goto B55a040;
case 0x55a045:c.instructions+=1;goto B55a045;
case 0x55a04a:goto L55a04a;
case 0x55a04c:c.instructions+=1;goto B55a04c;
case 0x55a04e:goto L55a04e;
case 0x55a051:c.instructions+=10;goto B55a051;
case 0x55a054:c.instructions+=9;goto B55a054;
case 0x55a055:c.instructions+=8;goto B55a055;
case 0x55a058:c.instructions+=7;goto B55a058;
case 0x55a05b:c.instructions+=6;goto B55a05b;
case 0x55a05c:c.instructions+=5;goto B55a05c;
case 0x55a05e:c.instructions+=4;goto B55a05e;
case 0x55a05f:c.instructions+=3;goto B55a05f;
case 0x55a060:c.instructions+=2;goto B55a060;
case 0x55a065:c.instructions+=1;goto B55a065;
case 0x55a06a:goto L55a06a;
case 0x55a06f:c.instructions+=2;goto B55a06f;
case 0x55a072:c.instructions+=1;goto B55a072;
case 0x55a074:goto L55a074;
case 0x55a079:goto L55a079;
case 0x55a07e:c.instructions+=3;goto B55a07e;
case 0x55a083:c.instructions+=2;goto B55a083;
case 0x55a084:c.instructions+=1;goto B55a084;
case 0x55a089:goto L55a089;
case 0x55a08c:c.instructions+=1;goto B55a08c;
case 0x55a091:goto L55a091;
case 0x55a094:c.instructions+=4;goto B55a094;
case 0x55a095:c.instructions+=3;goto B55a095;
case 0x55a09a:c.instructions+=2;goto B55a09a;
case 0x55a09f:c.instructions+=1;goto B55a09f;
case 0x55a0a4:goto L55a0a4;
case 0x55a0a6:c.instructions+=1;goto B55a0a6;
case 0x55a0a8:goto L55a0a8;
case 0x55a0ad:goto L55a0ad;
case 0x55a0b2:goto L55a0b2;
case 0x55a0b3:c.instructions+=5;goto B55a0b3;
case 0x55a0b5:c.instructions+=4;goto B55a0b5;
case 0x55a0ba:c.instructions+=3;goto B55a0ba;
case 0x55a0bf:c.instructions+=2;goto B55a0bf;
case 0x55a0c4:c.instructions+=1;goto B55a0c4;
case 0x55a0c6:goto L55a0c6;
case 0x55a0c9:c.instructions+=4;goto B55a0c9;
case 0x55a0ca:c.instructions+=3;goto B55a0ca;
case 0x55a0cf:c.instructions+=2;goto B55a0cf;
case 0x55a0d4:c.instructions+=1;goto B55a0d4;
case 0x55a0d9:goto L55a0d9;
case 0x55a0db:c.instructions+=1;goto B55a0db;
case 0x55a0dd:goto L55a0dd;
case 0x55a0e2:goto L55a0e2;
case 0x55a0e7:goto L55a0e7;
case 0x55a0e8:c.instructions+=4;goto B55a0e8;
case 0x55a0ea:c.instructions+=3;goto B55a0ea;
case 0x55a0ef:c.instructions+=2;goto B55a0ef;
case 0x55a0f4:c.instructions+=1;goto B55a0f4;
case 0x55a0f9:goto L55a0f9;
case 0x55a0fe:c.instructions+=4;goto B55a0fe;
case 0x55a103:c.instructions+=3;goto B55a103;
case 0x55a108:c.instructions+=2;goto B55a108;
case 0x55a109:c.instructions+=1;goto B55a109;
case 0x55a10e:goto L55a10e;
case 0x55a111:goto L55a111;
case 0x55a113:c.instructions+=4;goto B55a113;
case 0x55a118:c.instructions+=3;goto B55a118;
case 0x55a11d:c.instructions+=2;goto B55a11d;
case 0x55a11e:c.instructions+=1;goto B55a11e;
case 0x55a123:goto L55a123;
case 0x55a126:c.instructions+=2;goto B55a126;
case 0x55a129:c.instructions+=1;goto B55a129;
case 0x55a12e:goto L55a12e;
case 0x55a12f:c.instructions+=5;goto B55a12f;
case 0x55a130:c.instructions+=4;goto B55a130;
case 0x55a131:c.instructions+=3;goto B55a131;
case 0x55a133:c.instructions+=2;goto B55a133;
case 0x55a134:c.instructions+=1;goto B55a134;
case 0x55a140:goto L55a140;
case 0x55a141:c.instructions+=3;goto B55a141;
case 0x55a143:c.instructions+=2;goto B55a143;
case 0x55a14a:c.instructions+=1;goto B55a14a;
case 0x55a150:goto L55a150;
case 0x55a151:c.instructions+=5;goto B55a151;
case 0x55a152:c.instructions+=4;goto B55a152;
case 0x55a155:c.instructions+=3;goto B55a155;
case 0x55a156:c.instructions+=2;goto B55a156;
case 0x55a15b:c.instructions+=1;goto B55a15b;
case 0x55a160:goto L55a160;
case 0x55a162:c.instructions+=2;goto B55a162;
case 0x55a164:c.instructions+=1;goto B55a164;
case 0x55a166:goto L55a166;
case 0x55a169:c.instructions+=1;goto B55a169;
case 0x55a16b:goto L55a16b;
case 0x55a16d:goto L55a16d;
case 0x55a16f:c.instructions+=1;goto B55a16f;
case 0x55a174:goto L55a174;
case 0x55a179:c.instructions+=3;goto B55a179;
case 0x55a17a:c.instructions+=2;goto B55a17a;
case 0x55a17f:c.instructions+=1;goto B55a17f;
case 0x55a184:goto L55a184;
case 0x55a186:c.instructions+=1;goto B55a186;
case 0x55a188:goto L55a188;
case 0x55a18e:c.instructions+=2;goto B55a18e;
case 0x55a18f:c.instructions+=1;goto B55a18f;
case 0x55a194:goto L55a194;
case 0x55a197:c.instructions+=2;goto B55a197;
case 0x55a199:c.instructions+=1;goto B55a199;
case 0x55a19b:goto L55a19b;
case 0x55a19e:c.instructions+=3;goto B55a19e;
case 0x55a1a1:c.instructions+=2;goto B55a1a1;
case 0x55a1a4:c.instructions+=1;goto B55a1a4;
case 0x55a1a7:goto L55a1a7;
case 0x55a1ac:c.instructions+=3;goto B55a1ac;
case 0x55a1b1:c.instructions+=2;goto B55a1b1;
case 0x55a1b2:c.instructions+=1;goto B55a1b2;
case 0x55a1b7:goto L55a1b7;
case 0x55a1ba:c.instructions+=1;goto B55a1ba;
case 0x55a1bc:goto L55a1bc;
case 0x55a1c2:c.instructions+=2;goto B55a1c2;
case 0x55a1c3:c.instructions+=1;goto B55a1c3;
case 0x55a1c8:goto L55a1c8;
case 0x55a1cb:c.instructions+=2;goto B55a1cb;
case 0x55a1cd:c.instructions+=1;goto B55a1cd;
case 0x55a1cf:goto L55a1cf;
case 0x55a1d2:c.instructions+=3;goto B55a1d2;
case 0x55a1d5:c.instructions+=2;goto B55a1d5;
case 0x55a1d8:c.instructions+=1;goto B55a1d8;
case 0x55a1db:goto L55a1db;
case 0x55a1e0:c.instructions+=9;goto B55a1e0;
case 0x55a1e2:c.instructions+=8;goto B55a1e2;
case 0x55a1e7:c.instructions+=7;goto B55a1e7;
case 0x55a1ec:c.instructions+=6;goto B55a1ec;
case 0x55a1f1:c.instructions+=5;goto B55a1f1;
case 0x55a1f6:c.instructions+=4;goto B55a1f6;
case 0x55a1fb:c.instructions+=3;goto B55a1fb;
case 0x55a200:c.instructions+=2;goto B55a200;
case 0x55a201:c.instructions+=1;goto B55a201;
case 0x55a206:goto L55a206;
case 0x55a209:goto L55a209;
case 0x55a20b:c.instructions+=4;goto B55a20b;
case 0x55a210:c.instructions+=3;goto B55a210;
case 0x55a215:c.instructions+=2;goto B55a215;
case 0x55a216:c.instructions+=1;goto B55a216;
case 0x55a21b:goto L55a21b;
case 0x55a21e:c.instructions+=3;goto B55a21e;
case 0x55a21f:c.instructions+=2;goto B55a21f;
case 0x55a226:c.instructions+=1;goto B55a226;
case 0x55a227:goto L55a227;
case 0x55a228:c.instructions+=1;goto B55a228;
case 0x55a230:goto L55a230;
case 0x55a231:c.instructions+=6;goto B55a231;
case 0x55a233:c.instructions+=5;goto B55a233;
case 0x55a236:c.instructions+=4;goto B55a236;
case 0x55a23b:c.instructions+=3;goto B55a23b;
case 0x55a23c:c.instructions+=2;goto B55a23c;
case 0x55a23e:c.instructions+=1;goto B55a23e;
case 0x55a240:goto L55a240;
case 0x55a247:c.instructions+=3;goto B55a247;
case 0x55a248:c.instructions+=2;goto B55a248;
case 0x55a249:c.instructions+=1;goto B55a249;
case 0x55a24c:goto L55a24c;
case 0x55a252:c.instructions+=2;goto B55a252;
case 0x55a254:c.instructions+=1;goto B55a254;
case 0x55a25a:goto L55a25a;
case 0x55a25f:c.instructions+=1;goto B55a25f;
case 0x55a265:goto L55a265;
case 0x55a268:c.instructions+=4;goto B55a268;
case 0x55a26a:c.instructions+=3;goto B55a26a;
case 0x55a26b:c.instructions+=2;goto B55a26b;
case 0x55a270:c.instructions+=1;goto B55a270;
case 0x55a275:goto L55a275;
case 0x55a277:c.instructions+=1;goto B55a277;
case 0x55a279:goto L55a279;
case 0x55a27e:goto L55a27e;
case 0x55a283:goto L55a283;
case 0x55a286:c.instructions+=4;goto B55a286;
case 0x55a28b:c.instructions+=3;goto B55a28b;
case 0x55a290:c.instructions+=2;goto B55a290;
case 0x55a291:c.instructions+=1;goto B55a291;
case 0x55a296:goto L55a296;
case 0x55a299:c.instructions+=1;goto B55a299;
case 0x55a29e:goto L55a29e;
case 0x55a2a5:c.instructions+=2;goto B55a2a5;
case 0x55a2a6:c.instructions+=1;goto B55a2a6;
case 0x55a2ac:goto L55a2ac;
case 0x55a2af:c.instructions+=3;goto B55a2af;
case 0x55a2b0:c.instructions+=2;goto B55a2b0;
case 0x55a2b5:c.instructions+=1;goto B55a2b5;
case 0x55a2ba:goto L55a2ba;
case 0x55a2bc:c.instructions+=1;goto B55a2bc;
case 0x55a2c2:goto L55a2c2;
case 0x55a2c5:c.instructions+=5;goto B55a2c5;
case 0x55a2c7:c.instructions+=4;goto B55a2c7;
case 0x55a2ce:c.instructions+=3;goto B55a2ce;
case 0x55a2d4:c.instructions+=2;goto B55a2d4;
case 0x55a2d7:c.instructions+=1;goto B55a2d7;
case 0x55a2d9:goto L55a2d9;
case 0x55a2de:goto L55a2de;
case 0x55a2e3:goto L55a2e3;
case 0x55a2e6:c.instructions+=4;goto B55a2e6;
case 0x55a2eb:c.instructions+=3;goto B55a2eb;
case 0x55a2f0:c.instructions+=2;goto B55a2f0;
case 0x55a2f1:c.instructions+=1;goto B55a2f1;
case 0x55a2f6:goto L55a2f6;
case 0x55a2f9:c.instructions+=1;goto B55a2f9;
case 0x55a2fe:goto L55a2fe;
case 0x55a2ff:c.instructions+=3;goto B55a2ff;
case 0x55a304:c.instructions+=2;goto B55a304;
case 0x55a309:c.instructions+=1;goto B55a309;
case 0x55a30e:goto L55a30e;
case 0x55a310:c.instructions+=1;goto B55a310;
case 0x55a312:goto L55a312;
case 0x55a317:goto L55a317;
case 0x55a31c:goto L55a31c;
case 0x55a321:goto L55a321;
case 0x55a324:c.instructions+=10;goto B55a324;
case 0x55a325:c.instructions+=9;goto B55a325;
case 0x55a327:c.instructions+=8;goto B55a327;
case 0x55a32c:c.instructions+=7;goto B55a32c;
case 0x55a331:c.instructions+=6;goto B55a331;
case 0x55a336:c.instructions+=5;goto B55a336;
case 0x55a33b:c.instructions+=4;goto B55a33b;
case 0x55a340:c.instructions+=3;goto B55a340;
case 0x55a345:c.instructions+=2;goto B55a345;
case 0x55a346:c.instructions+=1;goto B55a346;
case 0x55a34b:goto L55a34b;
case 0x55a34d:goto L55a34d;
case 0x55a350:c.instructions+=4;goto B55a350;
case 0x55a351:c.instructions+=3;goto B55a351;
case 0x55a356:c.instructions+=2;goto B55a356;
case 0x55a35b:c.instructions+=1;goto B55a35b;
case 0x55a360:goto L55a360;
case 0x55a362:c.instructions+=1;goto B55a362;
case 0x55a364:goto L55a364;
case 0x55a369:goto L55a369;
case 0x55a36e:goto L55a36e;
case 0x55a373:goto L55a373;
case 0x55a376:c.instructions+=10;goto B55a376;
case 0x55a377:c.instructions+=9;goto B55a377;
case 0x55a379:c.instructions+=8;goto B55a379;
case 0x55a37e:c.instructions+=7;goto B55a37e;
case 0x55a383:c.instructions+=6;goto B55a383;
case 0x55a388:c.instructions+=5;goto B55a388;
case 0x55a38d:c.instructions+=4;goto B55a38d;
case 0x55a392:c.instructions+=3;goto B55a392;
case 0x55a397:c.instructions+=2;goto B55a397;
case 0x55a398:c.instructions+=1;goto B55a398;
case 0x55a39d:goto L55a39d;
case 0x55a3a7:goto L55a3a7;
case 0x55a3aa:goto L55a3aa;
case 0x55a3ab:goto L55a3ab;
case 0x55a3b0:c.instructions+=3;goto B55a3b0;
case 0x55a3b1:c.instructions+=2;goto B55a3b1;
case 0x55a3b6:c.instructions+=1;goto B55a3b6;
case 0x55a3bb:goto L55a3bb;
case 0x55a3bd:c.instructions+=1;goto B55a3bd;
case 0x55a3bf:goto L55a3bf;
case 0x55a3c2:c.instructions+=2;goto B55a3c2;
case 0x55a3c4:c.instructions+=1;goto B55a3c4;
case 0x55a3c6:goto L55a3c6;
case 0x55a3c9:c.instructions+=1;goto B55a3c9;
case 0x55a3ce:goto L55a3ce;
case 0x55a3d0:c.instructions+=4;goto B55a3d0;
case 0x55a3d5:c.instructions+=3;goto B55a3d5;
case 0x55a3da:c.instructions+=2;goto B55a3da;
case 0x55a3db:c.instructions+=1;goto B55a3db;
case 0x55a3e0:goto L55a3e0;
case 0x55a3e6:c.instructions+=5;goto B55a3e6;
case 0x55a3e8:c.instructions+=4;goto B55a3e8;
case 0x55a3ed:c.instructions+=3;goto B55a3ed;
case 0x55a3f2:c.instructions+=2;goto B55a3f2;
case 0x55a3f3:c.instructions+=1;goto B55a3f3;
case 0x55a3f8:goto L55a3f8;
case 0x55a3fb:goto L55a3fb;
case 0x55a3fc:c.instructions+=2;goto B55a3fc;
case 0x55a3fd:c.instructions+=1;goto B55a3fd;
case 0x55a400:goto L55a400;
case 0x55a402:c.instructions+=7;goto B55a402;
case 0x55a407:c.instructions+=6;goto B55a407;
case 0x55a40d:c.instructions+=5;goto B55a40d;
case 0x55a40e:c.instructions+=4;goto B55a40e;
case 0x55a415:c.instructions+=3;goto B55a415;
case 0x55a416:c.instructions+=2;goto B55a416;
case 0x55a41b:c.instructions+=1;goto B55a41b;
case 0x55a420:goto L55a420;
case 0x55a423:c.instructions+=4;goto B55a423;
case 0x55a427:c.instructions+=3;goto B55a427;
case 0x55a429:c.instructions+=2;goto B55a429;
case 0x55a431:c.instructions+=1;goto B55a431;
case 0x55a433:goto L55a433;
case 0x55a437:c.instructions+=3;goto B55a437;
case 0x55a438:c.instructions+=2;goto B55a438;
case 0x55a43a:c.instructions+=1;goto B55a43a;
case 0x55a43f:goto L55a43f;
case 0x55a443:c.instructions+=3;goto B55a443;
case 0x55a44a:c.instructions+=2;goto B55a44a;
case 0x55a44d:c.instructions+=1;goto B55a44d;
case 0x55a44e:goto L55a44e;
case 0x55a452:c.instructions+=4;goto B55a452;
case 0x55a454:c.instructions+=3;goto B55a454;
case 0x55a45b:c.instructions+=2;goto B55a45b;
case 0x55a45e:c.instructions+=1;goto B55a45e;
case 0x55a460:goto L55a460;
case 0x55a461:c.instructions+=14;goto B55a461;
case 0x55a463:c.instructions+=13;goto B55a463;
case 0x55a465:c.instructions+=12;goto B55a465;
case 0x55a46a:c.instructions+=11;goto B55a46a;
case 0x55a470:c.instructions+=10;goto B55a470;
case 0x55a471:c.instructions+=9;goto B55a471;
case 0x55a478:c.instructions+=8;goto B55a478;
case 0x55a479:c.instructions+=7;goto B55a479;
case 0x55a47c:c.instructions+=6;goto B55a47c;
case 0x55a47d:c.instructions+=5;goto B55a47d;
case 0x55a47e:c.instructions+=4;goto B55a47e;
case 0x55a480:c.instructions+=3;goto B55a480;
case 0x55a481:c.instructions+=2;goto B55a481;
case 0x55a484:c.instructions+=1;goto B55a484;
case 0x55a489:goto L55a489;
case 0x55a48b:c.instructions+=6;goto B55a48b;
case 0x55a491:c.instructions+=5;goto B55a491;
case 0x55a497:c.instructions+=4;goto B55a497;
case 0x55a49c:c.instructions+=3;goto B55a49c;
case 0x55a49f:c.instructions+=2;goto B55a49f;
case 0x55a4a5:c.instructions+=1;goto B55a4a5;
case 0x55a4aa:goto L55a4aa;
case 0x55a4ad:c.instructions+=2;goto B55a4ad;
case 0x55a4af:c.instructions+=1;goto B55a4af;
case 0x55a4b1:goto L55a4b1;
case 0x55a4b7:c.instructions+=3;goto B55a4b7;
case 0x55a4b9:c.instructions+=2;goto B55a4b9;
case 0x55a4bc:c.instructions+=1;goto B55a4bc;
case 0x55a4be:goto L55a4be;
case 0x55a4c0:c.instructions+=3;goto B55a4c0;
case 0x55a4c1:c.instructions+=2;goto B55a4c1;
case 0x55a4c6:c.instructions+=1;goto B55a4c6;
case 0x55a4c8:goto L55a4c8;
case 0x55a4c9:c.instructions+=3;goto B55a4c9;
case 0x55a4ce:c.instructions+=2;goto B55a4ce;
case 0x55a4d0:c.instructions+=1;goto B55a4d0;
case 0x55a4d2:goto L55a4d2;
case 0x55a4d3:c.instructions+=2;goto B55a4d3;
case 0x55a4d8:c.instructions+=1;goto B55a4d8;
case 0x55a4d9:goto L55a4d9;
case 0x55a4de:goto L55a4de;
case 0x55a4e3:c.instructions+=4;goto B55a4e3;
case 0x55a4e5:c.instructions+=3;goto B55a4e5;
case 0x55a4e7:c.instructions+=2;goto B55a4e7;
case 0x55a4eb:c.instructions+=1;goto B55a4eb;
case 0x55a4f0:goto L55a4f0;
case 0x55a4f3:c.instructions+=5;goto B55a4f3;
case 0x55a4f6:c.instructions+=4;goto B55a4f6;
case 0x55a4f7:c.instructions+=3;goto B55a4f7;
case 0x55a4fd:c.instructions+=2;goto B55a4fd;
case 0x55a4fe:c.instructions+=1;goto B55a4fe;
case 0x55a503:goto L55a503;
case 0x55a509:c.instructions+=2;goto B55a509;
case 0x55a510:c.instructions+=1;goto B55a510;
case 0x55a515:goto L55a515;
case 0x55a518:c.instructions+=5;goto B55a518;
case 0x55a51e:c.instructions+=4;goto B55a51e;
case 0x55a523:c.instructions+=3;goto B55a523;
case 0x55a529:c.instructions+=2;goto B55a529;
case 0x55a52b:c.instructions+=1;goto B55a52b;
case 0x55a530:goto L55a530;
case 0x55a533:c.instructions+=7;goto B55a533;
case 0x55a535:c.instructions+=6;goto B55a535;
case 0x55a536:c.instructions+=5;goto B55a536;
case 0x55a537:c.instructions+=4;goto B55a537;
case 0x55a53e:c.instructions+=3;goto B55a53e;
case 0x55a540:c.instructions+=2;goto B55a540;
case 0x55a541:c.instructions+=1;goto B55a541;
case 0x55a550:goto L55a550;
case 0x55a551:c.instructions+=2;goto B55a551;
case 0x55a553:c.instructions+=1;goto B55a553;
case 0x55a558:goto L55a558;
case 0x55a55d:c.instructions+=1;goto B55a55d;
case 0x55a55f:goto L55a55f;
case 0x55a560:c.instructions+=1;goto B55a560;
case 0x55a565:goto L55a565;
case 0x55a568:goto L55a568;
case 0x55a56a:c.instructions+=2;goto B55a56a;
case 0x55a56b:c.instructions+=1;goto B55a56b;
case 0x55a570:goto L55a570;
case 0x55a576:c.instructions+=1;goto B55a576;
case 0x55a580:goto L55a580;
case 0x55a581:c.instructions+=3;goto B55a581;
case 0x55a583:c.instructions+=2;goto B55a583;
case 0x55a58a:c.instructions+=1;goto B55a58a;
case 0x55a590:goto L55a590;
case 0x55a595:c.instructions+=2;goto B55a595;
case 0x55a597:c.instructions+=1;goto B55a597;
case 0x55a599:goto L55a599;
case 0x55a59f:c.instructions+=2;goto B55a59f;
case 0x55a5a1:c.instructions+=1;goto B55a5a1;
case 0x55a5a3:goto L55a5a3;
case 0x55a5a8:c.instructions+=2;goto B55a5a8;
case 0x55a5ad:c.instructions+=1;goto B55a5ad;
case 0x55a5af:goto L55a5af;
case 0x55a5b2:c.instructions+=4;goto B55a5b2;
case 0x55a5b7:c.instructions+=3;goto B55a5b7;
case 0x55a5b8:c.instructions+=2;goto B55a5b8;
case 0x55a5bb:c.instructions+=1;goto B55a5bb;
case 0x55a5c0:goto L55a5c0;
case 0x55a5c2:c.instructions+=4;goto B55a5c2;
case 0x55a5c4:c.instructions+=3;goto B55a5c4;
case 0x55a5c6:c.instructions+=2;goto B55a5c6;
case 0x55a5c8:c.instructions+=1;goto B55a5c8;
case 0x55a5ca:goto L55a5ca;
case 0x55a5cd:c.instructions+=10;goto B55a5cd;
case 0x55a5d2:c.instructions+=9;goto B55a5d2;
case 0x55a5d4:c.instructions+=8;goto B55a5d4;
case 0x55a5d9:c.instructions+=7;goto B55a5d9;
case 0x55a5de:c.instructions+=6;goto B55a5de;
case 0x55a5e3:c.instructions+=5;goto B55a5e3;
case 0x55a5e8:c.instructions+=4;goto B55a5e8;
case 0x55a5ed:c.instructions+=3;goto B55a5ed;
case 0x55a5f2:c.instructions+=2;goto B55a5f2;
case 0x55a5f3:c.instructions+=1;goto B55a5f3;
case 0x55a5f8:goto L55a5f8;
case 0x55a5fb:c.instructions+=2;goto B55a5fb;
case 0x55a5fc:c.instructions+=1;goto B55a5fc;
case 0x55a5ff:goto L55a5ff;
case 0x55a605:c.instructions+=2;goto B55a605;
case 0x55a607:c.instructions+=1;goto B55a607;
case 0x55a609:goto L55a609;
case 0x55a60f:c.instructions+=5;goto B55a60f;
case 0x55a612:c.instructions+=4;goto B55a612;
case 0x55a614:c.instructions+=3;goto B55a614;
case 0x55a615:c.instructions+=2;goto B55a615;
case 0x55a616:c.instructions+=1;goto B55a616;
case 0x55a61b:goto L55a61b;
case 0x55a61c:c.instructions+=1;goto B55a61c;
case 0x55a620:goto L55a620;
case 0x55a621:c.instructions+=14;goto B55a621;
case 0x55a623:c.instructions+=13;goto B55a623;
case 0x55a625:c.instructions+=12;goto B55a625;
case 0x55a62a:c.instructions+=11;goto B55a62a;
case 0x55a630:c.instructions+=10;goto B55a630;
case 0x55a631:c.instructions+=9;goto B55a631;
case 0x55a638:c.instructions+=8;goto B55a638;
case 0x55a639:c.instructions+=7;goto B55a639;
case 0x55a63c:c.instructions+=6;goto B55a63c;
case 0x55a63d:c.instructions+=5;goto B55a63d;
case 0x55a63e:c.instructions+=4;goto B55a63e;
case 0x55a640:c.instructions+=3;goto B55a640;
case 0x55a641:c.instructions+=2;goto B55a641;
case 0x55a644:c.instructions+=1;goto B55a644;
case 0x55a649:goto L55a649;
case 0x55a64b:c.instructions+=6;goto B55a64b;
case 0x55a651:c.instructions+=5;goto B55a651;
case 0x55a657:c.instructions+=4;goto B55a657;
case 0x55a65c:c.instructions+=3;goto B55a65c;
case 0x55a65f:c.instructions+=2;goto B55a65f;
case 0x55a665:c.instructions+=1;goto B55a665;
case 0x55a66a:goto L55a66a;
case 0x55a66d:c.instructions+=2;goto B55a66d;
case 0x55a66f:c.instructions+=1;goto B55a66f;
case 0x55a671:goto L55a671;
case 0x55a677:c.instructions+=3;goto B55a677;
case 0x55a679:c.instructions+=2;goto B55a679;
case 0x55a67c:c.instructions+=1;goto B55a67c;
case 0x55a67e:goto L55a67e;
case 0x55a680:c.instructions+=3;goto B55a680;
case 0x55a681:c.instructions+=2;goto B55a681;
case 0x55a686:c.instructions+=1;goto B55a686;
case 0x55a688:goto L55a688;
case 0x55a689:c.instructions+=3;goto B55a689;
case 0x55a68e:c.instructions+=2;goto B55a68e;
case 0x55a690:c.instructions+=1;goto B55a690;
case 0x55a692:goto L55a692;
case 0x55a693:c.instructions+=2;goto B55a693;
case 0x55a698:c.instructions+=1;goto B55a698;
case 0x55a699:goto L55a699;
case 0x55a69e:goto L55a69e;
case 0x55a6a3:c.instructions+=4;goto B55a6a3;
case 0x55a6a5:c.instructions+=3;goto B55a6a5;
case 0x55a6a7:c.instructions+=2;goto B55a6a7;
case 0x55a6ab:c.instructions+=1;goto B55a6ab;
case 0x55a6b0:goto L55a6b0;
case 0x55a6b3:c.instructions+=5;goto B55a6b3;
case 0x55a6b6:c.instructions+=4;goto B55a6b6;
case 0x55a6b7:c.instructions+=3;goto B55a6b7;
case 0x55a6bd:c.instructions+=2;goto B55a6bd;
case 0x55a6be:c.instructions+=1;goto B55a6be;
case 0x55a6c3:goto L55a6c3;
case 0x55a6c9:c.instructions+=2;goto B55a6c9;
case 0x55a6d0:c.instructions+=1;goto B55a6d0;
case 0x55a6d5:goto L55a6d5;
case 0x55a6da:c.instructions+=5;goto B55a6da;
case 0x55a6e0:c.instructions+=4;goto B55a6e0;
case 0x55a6e3:c.instructions+=3;goto B55a6e3;
case 0x55a6e9:c.instructions+=2;goto B55a6e9;
case 0x55a6eb:c.instructions+=1;goto B55a6eb;
case 0x55a6f0:goto L55a6f0;
case 0x55a6f3:c.instructions+=7;goto B55a6f3;
case 0x55a6f5:c.instructions+=6;goto B55a6f5;
case 0x55a6f6:c.instructions+=5;goto B55a6f6;
case 0x55a6f7:c.instructions+=4;goto B55a6f7;
case 0x55a6fe:c.instructions+=3;goto B55a6fe;
case 0x55a700:c.instructions+=2;goto B55a700;
case 0x55a701:c.instructions+=1;goto B55a701;
case 0x55a710:goto L55a710;
case 0x55a711:c.instructions+=2;goto B55a711;
case 0x55a713:c.instructions+=1;goto B55a713;
case 0x55a718:goto L55a718;
case 0x55a71d:c.instructions+=1;goto B55a71d;
case 0x55a71f:goto L55a71f;
case 0x55a720:c.instructions+=1;goto B55a720;
case 0x55a725:goto L55a725;
case 0x55a728:goto L55a728;
case 0x55a72a:c.instructions+=2;goto B55a72a;
case 0x55a72b:c.instructions+=1;goto B55a72b;
case 0x55a730:goto L55a730;
case 0x55a736:c.instructions+=1;goto B55a736;
case 0x55a740:goto L55a740;
case 0x55a741:c.instructions+=14;goto B55a741;
case 0x55a743:c.instructions+=13;goto B55a743;
case 0x55a746:c.instructions+=12;goto B55a746;
case 0x55a749:c.instructions+=11;goto B55a749;
case 0x55a74a:c.instructions+=10;goto B55a74a;
case 0x55a74b:c.instructions+=9;goto B55a74b;
case 0x55a74e:c.instructions+=8;goto B55a74e;
case 0x55a750:c.instructions+=7;goto B55a750;
case 0x55a753:c.instructions+=6;goto B55a753;
case 0x55a754:c.instructions+=5;goto B55a754;
case 0x55a755:c.instructions+=4;goto B55a755;
case 0x55a756:c.instructions+=3;goto B55a756;
case 0x55a757:c.instructions+=2;goto B55a757;
case 0x55a759:c.instructions+=1;goto B55a759;
case 0x55a75e:goto L55a75e;
case 0x55a764:c.instructions+=1;goto B55a764;
case 0x55a76a:goto L55a76a;
case 0x55a770:goto L55a770;
case 0x55a776:c.instructions+=1;goto B55a776;
case 0x55a77c:goto L55a77c;
case 0x55a782:goto L55a782;
case 0x55a788:c.instructions+=1;goto B55a788;
case 0x55a78a:goto L55a78a;
case 0x55a790:c.instructions+=1;goto B55a790;
case 0x55a796:goto L55a796;
case 0x55a798:c.instructions+=1;goto B55a798;
case 0x55a79d:goto L55a79d;
case 0x55a79e:c.instructions+=3;goto B55a79e;
case 0x55a79f:c.instructions+=2;goto B55a79f;
case 0x55a7a0:c.instructions+=1;goto B55a7a0;
case 0x55a7a3:goto L55a7a3;
case 0x55a7a9:c.instructions+=3;goto B55a7a9;
case 0x55a7ab:c.instructions+=2;goto B55a7ab;
case 0x55a7ad:c.instructions+=1;goto B55a7ad;
case 0x55a7af:goto L55a7af;
case 0x55a7b0:c.instructions+=1;goto B55a7b0;
case 0x55a7b2:goto L55a7b2;
case 0x55a7b3:c.instructions+=1;goto B55a7b3;
case 0x55a7b5:goto L55a7b5;
case 0x55a7ba:c.instructions+=1;goto B55a7ba;
case 0x55a7bc:goto L55a7bc;
case 0x55a7c1:c.instructions+=1;goto B55a7c1;
case 0x55a7c3:goto L55a7c3;
case 0x55a7c8:c.instructions+=1;goto B55a7c8;
case 0x55a7cf:goto L55a7cf;
case 0x55a7d4:c.instructions+=4;goto B55a7d4;
case 0x55a7d7:c.instructions+=3;goto B55a7d7;
case 0x55a7d9:c.instructions+=2;goto B55a7d9;
case 0x55a7da:c.instructions+=1;goto B55a7da;
case 0x55a7df:goto L55a7df;
case 0x55a7e2:c.instructions+=2;goto B55a7e2;
case 0x55a7e7:c.instructions+=1;goto B55a7e7;
case 0x55a7ec:goto L55a7ec;
case 0x55a7f1:c.instructions+=1;goto B55a7f1;
case 0x55a7f6:goto L55a7f6;
case 0x55a7f9:c.instructions+=2;goto B55a7f9;
case 0x55a7fb:c.instructions+=1;goto B55a7fb;
case 0x55a7fd:goto L55a7fd;
case 0x55a802:c.instructions+=1;goto B55a802;
case 0x55a807:goto L55a807;
case 0x55a80a:goto L55a80a;
case 0x55a810:c.instructions+=2;goto B55a810;
case 0x55a812:c.instructions+=1;goto B55a812;
case 0x55a817:goto L55a817;
case 0x55a818:c.instructions+=3;goto B55a818;
case 0x55a819:c.instructions+=2;goto B55a819;
case 0x55a81a:c.instructions+=1;goto B55a81a;
case 0x55a81d:goto L55a81d;
case 0x55a823:c.instructions+=1;goto B55a823;
case 0x55a828:goto L55a828;
case 0x55a829:c.instructions+=3;goto B55a829;
case 0x55a82a:c.instructions+=2;goto B55a82a;
case 0x55a82b:c.instructions+=1;goto B55a82b;
case 0x55a82e:goto L55a82e;
case 0x55a834:c.instructions+=1;goto B55a834;
case 0x55a83a:goto L55a83a;
case 0x55a844:c.instructions+=1;goto B55a844;
case 0x55a846:goto L55a846;
case 0x55a849:c.instructions+=4;goto B55a849;
case 0x55a84e:c.instructions+=3;goto B55a84e;
case 0x55a853:c.instructions+=2;goto B55a853;
case 0x55a854:c.instructions+=1;goto B55a854;
case 0x55a859:goto L55a859;
case 0x55a85c:c.instructions+=2;goto B55a85c;
case 0x55a85e:c.instructions+=1;goto B55a85e;
case 0x55a864:goto L55a864;
case 0x55a867:c.instructions+=5;goto B55a867;
case 0x55a869:c.instructions+=4;goto B55a869;
case 0x55a86e:c.instructions+=3;goto B55a86e;
case 0x55a873:c.instructions+=2;goto B55a873;
case 0x55a874:c.instructions+=1;goto B55a874;
case 0x55a879:goto L55a879;
case 0x55a87c:c.instructions+=4;goto B55a87c;
case 0x55a87d:c.instructions+=3;goto B55a87d;
case 0x55a87e:c.instructions+=2;goto B55a87e;
case 0x55a87f:c.instructions+=1;goto B55a87f;
case 0x55a882:goto L55a882;
case 0x55a888:c.instructions+=5;goto B55a888;
case 0x55a88f:c.instructions+=4;goto B55a88f;
case 0x55a892:c.instructions+=3;goto B55a892;
case 0x55a893:c.instructions+=2;goto B55a893;
case 0x55a899:c.instructions+=1;goto B55a899;
case 0x55a89e:goto L55a89e;
case 0x55a8a4:c.instructions+=3;goto B55a8a4;
case 0x55a8aa:c.instructions+=2;goto B55a8aa;
case 0x55a8af:c.instructions+=1;goto B55a8af;
case 0x55a8b1:goto L55a8b1;
case 0x55a8b6:c.instructions+=1;goto B55a8b6;
case 0x55a8b8:goto L55a8b8;
case 0x55a8bb:c.instructions+=1;goto B55a8bb;
case 0x55a8bd:goto L55a8bd;
case 0x55a8c2:c.instructions+=4;goto B55a8c2;
case 0x55a8c4:c.instructions+=3;goto B55a8c4;
case 0x55a8c6:c.instructions+=2;goto B55a8c6;
case 0x55a8cb:c.instructions+=1;goto B55a8cb;
case 0x55a8d0:goto L55a8d0;
case 0x55a8d3:c.instructions+=10;goto B55a8d3;
case 0x55a8d4:c.instructions+=9;goto B55a8d4;
case 0x55a8d6:c.instructions+=8;goto B55a8d6;
case 0x55a8db:c.instructions+=7;goto B55a8db;
case 0x55a8e0:c.instructions+=6;goto B55a8e0;
case 0x55a8e5:c.instructions+=5;goto B55a8e5;
case 0x55a8ea:c.instructions+=4;goto B55a8ea;
case 0x55a8ef:c.instructions+=3;goto B55a8ef;
case 0x55a8f4:c.instructions+=2;goto B55a8f4;
case 0x55a8f5:c.instructions+=1;goto B55a8f5;
case 0x55a8fa:goto L55a8fa;
case 0x55a8fd:c.instructions+=2;goto B55a8fd;
case 0x55a8ff:c.instructions+=1;goto B55a8ff;
case 0x55a904:goto L55a904;
case 0x55a905:c.instructions+=3;goto B55a905;
case 0x55a906:c.instructions+=2;goto B55a906;
case 0x55a907:c.instructions+=1;goto B55a907;
case 0x55a90a:goto L55a90a;
case 0x55a910:c.instructions+=2;goto B55a910;
case 0x55a916:c.instructions+=1;goto B55a916;
case 0x55a91c:goto L55a91c;
case 0x55a921:c.instructions+=2;goto B55a921;
case 0x55a923:c.instructions+=1;goto B55a923;
case 0x55a929:goto L55a929;
case 0x55a933:c.instructions+=1;goto B55a933;
case 0x55a939:goto L55a939;
case 0x55a93f:c.instructions+=2;goto B55a93f;
case 0x55a941:c.instructions+=1;goto B55a941;
case 0x55a946:goto L55a946;
case 0x55a94b:c.instructions+=1;goto B55a94b;
case 0x55a950:goto L55a950;
case 0x55a953:c.instructions+=2;goto B55a953;
case 0x55a955:c.instructions+=1;goto B55a955;
case 0x55a95b:goto L55a95b;
case 0x55a960:c.instructions+=1;goto B55a960;
case 0x55a965:goto L55a965;
case 0x55a968:c.instructions+=4;goto B55a968;
case 0x55a969:c.instructions+=3;goto B55a969;
case 0x55a96a:c.instructions+=2;goto B55a96a;
case 0x55a96b:c.instructions+=1;goto B55a96b;
case 0x55a96e:goto L55a96e;
case 0x55a974:c.instructions+=1;goto B55a974;
case 0x55a97a:goto L55a97a;
case 0x55a980:c.instructions+=1;goto B55a980;
case 0x55a982:goto L55a982;
case 0x55a988:c.instructions+=1;goto B55a988;
case 0x55a98e:goto L55a98e;
case 0x55a998:c.instructions+=1;goto B55a998;
case 0x55a99e:goto L55a99e;
case 0x55a9a4:c.instructions+=5;goto B55a9a4;
case 0x55a9a7:c.instructions+=4;goto B55a9a7;
case 0x55a9a9:c.instructions+=3;goto B55a9a9;
case 0x55a9aa:c.instructions+=2;goto B55a9aa;
case 0x55a9ab:c.instructions+=1;goto B55a9ab;
case 0x55a9b0:goto L55a9b0;
case 0x55a9b3:c.instructions+=4;goto B55a9b3;
case 0x55a9b4:c.instructions+=3;goto B55a9b4;
case 0x55a9b5:c.instructions+=2;goto B55a9b5;
case 0x55a9b6:c.instructions+=1;goto B55a9b6;
case 0x55a9b9:goto L55a9b9;
case 0x55a9bc:c.instructions+=6;goto B55a9bc;
case 0x55a9bf:c.instructions+=5;goto B55a9bf;
case 0x55a9c5:c.instructions+=4;goto B55a9c5;
case 0x55a9c6:c.instructions+=3;goto B55a9c6;
case 0x55a9cb:c.instructions+=2;goto B55a9cb;
case 0x55a9d0:c.instructions+=1;goto B55a9d0;
case 0x55a9d5:goto L55a9d5;
case 0x55a9db:c.instructions+=2;goto B55a9db;
case 0x55a9e1:c.instructions+=1;goto B55a9e1;
case 0x55a9e3:goto L55a9e3;
case 0x55a9e5:c.instructions+=1;goto B55a9e5;
case 0x55a9e7:goto L55a9e7;
case 0x55a9ed:c.instructions+=5;goto B55a9ed;
case 0x55a9f0:c.instructions+=4;goto B55a9f0;
case 0x55a9f2:c.instructions+=3;goto B55a9f2;
case 0x55a9f3:c.instructions+=2;goto B55a9f3;
case 0x55a9f4:c.instructions+=1;goto B55a9f4;
case 0x55a9f9:goto L55a9f9;
case 0x55a9fa:c.instructions+=3;goto B55a9fa;
case 0x55a9fb:c.instructions+=2;goto B55a9fb;
case 0x55a9fc:c.instructions+=1;goto B55a9fc;
case 0x55a9ff:goto L55a9ff;
case 0x55aa01:c.instructions+=1;goto B55aa01;
case 0x55aa03:goto L55aa03;
case 0x55aa09:c.instructions+=5;goto B55aa09;
case 0x55aa0c:c.instructions+=4;goto B55aa0c;
case 0x55aa0e:c.instructions+=3;goto B55aa0e;
case 0x55aa0f:c.instructions+=2;goto B55aa0f;
case 0x55aa10:c.instructions+=1;goto B55aa10;
case 0x55aa15:goto L55aa15;
case 0x55aa16:c.instructions+=3;goto B55aa16;
case 0x55aa17:c.instructions+=2;goto B55aa17;
case 0x55aa18:c.instructions+=1;goto B55aa18;
case 0x55aa1b:goto L55aa1b;
case 0x55aa21:c.instructions+=2;goto B55aa21;
case 0x55aa23:c.instructions+=1;goto B55aa23;
case 0x55aa25:goto L55aa25;
case 0x55aa27:c.instructions+=2;goto B55aa27;
case 0x55aa2c:c.instructions+=1;goto B55aa2c;
case 0x55aa31:goto L55aa31;
case 0x55aa38:goto L55aa38;
case 0x55aa39:c.instructions+=3;goto B55aa39;
case 0x55aa3a:c.instructions+=2;goto B55aa3a;
case 0x55aa3b:c.instructions+=1;goto B55aa3b;
case 0x55aa40:goto L55aa40;
case 0x55aa41:c.instructions+=13;goto B55aa41;
case 0x55aa43:c.instructions+=12;goto B55aa43;
case 0x55aa45:c.instructions+=11;goto B55aa45;
case 0x55aa4a:c.instructions+=10;goto B55aa4a;
case 0x55aa50:c.instructions+=9;goto B55aa50;
case 0x55aa51:c.instructions+=8;goto B55aa51;
case 0x55aa58:c.instructions+=7;goto B55aa58;
case 0x55aa59:c.instructions+=6;goto B55aa59;
case 0x55aa5c:c.instructions+=5;goto B55aa5c;
case 0x55aa5d:c.instructions+=4;goto B55aa5d;
case 0x55aa5f:c.instructions+=3;goto B55aa5f;
case 0x55aa60:c.instructions+=2;goto B55aa60;
case 0x55aa63:c.instructions+=1;goto B55aa63;
case 0x55aa68:goto L55aa68;
case 0x55aa6e:c.instructions+=5;goto B55aa6e;
case 0x55aa78:c.instructions+=4;goto B55aa78;
case 0x55aa7d:c.instructions+=3;goto B55aa7d;
case 0x55aa84:c.instructions+=2;goto B55aa84;
case 0x55aa8e:c.instructions+=1;goto B55aa8e;
case 0x55aa93:goto L55aa93;
case 0x55aa96:c.instructions+=2;goto B55aa96;
case 0x55aa98:c.instructions+=1;goto B55aa98;
case 0x55aa9a:goto L55aa9a;
case 0x55aaa0:c.instructions+=3;goto B55aaa0;
case 0x55aaa2:c.instructions+=2;goto B55aaa2;
case 0x55aaa5:c.instructions+=1;goto B55aaa5;
case 0x55aaa7:goto L55aaa7;
case 0x55aaa9:c.instructions+=3;goto B55aaa9;
case 0x55aaab:c.instructions+=2;goto B55aaab;
case 0x55aab0:c.instructions+=1;goto B55aab0;
case 0x55aab2:goto L55aab2;
case 0x55aab3:c.instructions+=3;goto B55aab3;
case 0x55aab8:c.instructions+=2;goto B55aab8;
case 0x55aaba:c.instructions+=1;goto B55aaba;
case 0x55aabc:goto L55aabc;
case 0x55aabe:c.instructions+=2;goto B55aabe;
case 0x55aac3:c.instructions+=1;goto B55aac3;
case 0x55aac5:goto L55aac5;
case 0x55aaca:goto L55aaca;
case 0x55aacf:c.instructions+=4;goto B55aacf;
case 0x55aad1:c.instructions+=3;goto B55aad1;
case 0x55aad3:c.instructions+=2;goto B55aad3;
case 0x55aad7:c.instructions+=1;goto B55aad7;
case 0x55aadc:goto L55aadc;
case 0x55aadf:c.instructions+=5;goto B55aadf;
case 0x55aae2:c.instructions+=4;goto B55aae2;
case 0x55aae3:c.instructions+=3;goto B55aae3;
case 0x55aae9:c.instructions+=2;goto B55aae9;
case 0x55aaea:c.instructions+=1;goto B55aaea;
case 0x55aaef:goto L55aaef;
case 0x55aaf4:c.instructions+=7;goto B55aaf4;
case 0x55aafb:c.instructions+=6;goto B55aafb;
case 0x55ab01:c.instructions+=5;goto B55ab01;
case 0x55ab04:c.instructions+=4;goto B55ab04;
case 0x55ab0a:c.instructions+=3;goto B55ab0a;
case 0x55ab0c:c.instructions+=2;goto B55ab0c;
case 0x55ab10:c.instructions+=1;goto B55ab10;
case 0x55ab15:goto L55ab15;
case 0x55ab1b:c.instructions+=2;goto B55ab1b;
case 0x55ab22:c.instructions+=1;goto B55ab22;
case 0x55ab27:goto L55ab27;
case 0x55ab2d:c.instructions+=11;goto B55ab2d;
case 0x55ab2f:c.instructions+=10;goto B55ab2f;
case 0x55ab31:c.instructions+=9;goto B55ab31;
case 0x55ab33:c.instructions+=8;goto B55ab33;
case 0x55ab36:c.instructions+=7;goto B55ab36;
case 0x55ab39:c.instructions+=6;goto B55ab39;
case 0x55ab3b:c.instructions+=5;goto B55ab3b;
case 0x55ab3c:c.instructions+=4;goto B55ab3c;
case 0x55ab43:c.instructions+=3;goto B55ab43;
case 0x55ab45:c.instructions+=2;goto B55ab45;
case 0x55ab46:c.instructions+=1;goto B55ab46;
case 0x55ab50:goto L55ab50;
case 0x55ab51:c.instructions+=2;goto B55ab51;
case 0x55ab53:c.instructions+=1;goto B55ab53;
case 0x55ab58:goto L55ab58;
case 0x55ab5d:c.instructions+=1;goto B55ab5d;
case 0x55ab5f:goto L55ab5f;
case 0x55ab60:c.instructions+=1;goto B55ab60;
case 0x55ab65:goto L55ab65;
case 0x55ab68:goto L55ab68;
case 0x55ab6a:c.instructions+=2;goto B55ab6a;
case 0x55ab6b:c.instructions+=1;goto B55ab6b;
case 0x55ab70:goto L55ab70;
case 0x55ab76:c.instructions+=1;goto B55ab76;
case 0x55ab80:goto L55ab80;
case 0x55ab81:c.instructions+=4;goto B55ab81;
case 0x55ab83:c.instructions+=3;goto B55ab83;
case 0x55ab86:c.instructions+=2;goto B55ab86;
case 0x55ab89:c.instructions+=1;goto B55ab89;
case 0x55ab8b:goto L55ab8b;
case 0x55ab8c:c.instructions+=1;goto B55ab8c;
case 0x55ab93:goto L55ab93;
case 0x55ab99:c.instructions+=1;goto B55ab99;
case 0x55ab9b:goto L55ab9b;
case 0x55aba1:c.instructions+=2;goto B55aba1;
case 0x55aba3:c.instructions+=1;goto B55aba3;
case 0x55aba8:goto L55aba8;
case 0x55abaa:c.instructions+=1;goto B55abaa;
case 0x55abac:goto L55abac;
case 0x55abb2:c.instructions+=1;goto B55abb2;
case 0x55abb4:goto L55abb4;
case 0x55abba:c.instructions+=1;goto B55abba;
case 0x55abbc:goto L55abbc;
case 0x55abc2:goto L55abc2;
case 0x55abc4:c.instructions+=1;goto B55abc4;
case 0x55abc6:goto L55abc6;
case 0x55abc7:c.instructions+=1;goto B55abc7;
case 0x55abcc:goto L55abcc;
case 0x55abcf:c.instructions+=2;goto B55abcf;
case 0x55abd1:c.instructions+=1;goto B55abd1;
case 0x55abd3:goto L55abd3;
case 0x55abd9:c.instructions+=2;goto B55abd9;
case 0x55abdb:c.instructions+=1;goto B55abdb;
case 0x55abdd:goto L55abdd;
case 0x55abdf:c.instructions+=5;goto B55abdf;
case 0x55abe4:c.instructions+=4;goto B55abe4;
case 0x55abe6:c.instructions+=3;goto B55abe6;
case 0x55abe7:c.instructions+=2;goto B55abe7;
case 0x55abe9:c.instructions+=1;goto B55abe9;
case 0x55abee:goto L55abee;
case 0x55abef:goto L55abef;
case 0x55abf0:c.instructions+=1;goto B55abf0;
case 0x55ac10:goto L55ac10;
case 0x55ac11:c.instructions+=14;goto B55ac11;
case 0x55ac13:c.instructions+=13;goto B55ac13;
case 0x55ac15:c.instructions+=12;goto B55ac15;
case 0x55ac1a:c.instructions+=11;goto B55ac1a;
case 0x55ac20:c.instructions+=10;goto B55ac20;
case 0x55ac21:c.instructions+=9;goto B55ac21;
case 0x55ac28:c.instructions+=8;goto B55ac28;
case 0x55ac29:c.instructions+=7;goto B55ac29;
case 0x55ac2c:c.instructions+=6;goto B55ac2c;
case 0x55ac2d:c.instructions+=5;goto B55ac2d;
case 0x55ac2e:c.instructions+=4;goto B55ac2e;
case 0x55ac30:c.instructions+=3;goto B55ac30;
case 0x55ac31:c.instructions+=2;goto B55ac31;
case 0x55ac34:c.instructions+=1;goto B55ac34;
case 0x55ac39:goto L55ac39;
case 0x55ac3b:c.instructions+=6;goto B55ac3b;
case 0x55ac41:c.instructions+=5;goto B55ac41;
case 0x55ac47:c.instructions+=4;goto B55ac47;
case 0x55ac4c:c.instructions+=3;goto B55ac4c;
case 0x55ac4f:c.instructions+=2;goto B55ac4f;
case 0x55ac55:c.instructions+=1;goto B55ac55;
case 0x55ac5a:goto L55ac5a;
case 0x55ac5d:c.instructions+=2;goto B55ac5d;
case 0x55ac5f:c.instructions+=1;goto B55ac5f;
case 0x55ac61:goto L55ac61;
case 0x55ac67:c.instructions+=3;goto B55ac67;
case 0x55ac69:c.instructions+=2;goto B55ac69;
case 0x55ac6c:c.instructions+=1;goto B55ac6c;
case 0x55ac6e:goto L55ac6e;
case 0x55ac70:c.instructions+=3;goto B55ac70;
case 0x55ac71:c.instructions+=2;goto B55ac71;
case 0x55ac76:c.instructions+=1;goto B55ac76;
case 0x55ac78:goto L55ac78;
case 0x55ac79:c.instructions+=3;goto B55ac79;
case 0x55ac7e:c.instructions+=2;goto B55ac7e;
case 0x55ac80:c.instructions+=1;goto B55ac80;
case 0x55ac82:goto L55ac82;
case 0x55ac83:c.instructions+=2;goto B55ac83;
case 0x55ac88:c.instructions+=1;goto B55ac88;
case 0x55ac89:goto L55ac89;
case 0x55ac8e:goto L55ac8e;
case 0x55ac93:c.instructions+=4;goto B55ac93;
case 0x55ac95:c.instructions+=3;goto B55ac95;
case 0x55ac97:c.instructions+=2;goto B55ac97;
case 0x55ac9b:c.instructions+=1;goto B55ac9b;
case 0x55aca0:goto L55aca0;
case 0x55aca3:c.instructions+=5;goto B55aca3;
case 0x55aca6:c.instructions+=4;goto B55aca6;
case 0x55aca7:c.instructions+=3;goto B55aca7;
case 0x55acad:c.instructions+=2;goto B55acad;
case 0x55acae:c.instructions+=1;goto B55acae;
case 0x55acb3:goto L55acb3;
case 0x55acb8:c.instructions+=12;goto B55acb8;
case 0x55acb9:c.instructions+=11;goto B55acb9;
case 0x55acbb:c.instructions+=10;goto B55acbb;
case 0x55acc1:c.instructions+=9;goto B55acc1;
case 0x55acc3:c.instructions+=8;goto B55acc3;
case 0x55acc6:c.instructions+=7;goto B55acc6;
case 0x55accc:c.instructions+=6;goto B55accc;
case 0x55acd2:c.instructions+=5;goto B55acd2;
case 0x55acd8:c.instructions+=4;goto B55acd8;
case 0x55acda:c.instructions+=3;goto B55acda;
case 0x55acdd:c.instructions+=2;goto B55acdd;
case 0x55ace3:c.instructions+=1;goto B55ace3;
case 0x55ace8:goto L55ace8;
case 0x55aceb:c.instructions+=7;goto B55aceb;
case 0x55aced:c.instructions+=6;goto B55aced;
case 0x55acee:c.instructions+=5;goto B55acee;
case 0x55acef:c.instructions+=4;goto B55acef;
case 0x55acf6:c.instructions+=3;goto B55acf6;
case 0x55acf8:c.instructions+=2;goto B55acf8;
case 0x55acf9:c.instructions+=1;goto B55acf9;
case 0x55ad00:goto L55ad00;
case 0x55ad01:c.instructions+=2;goto B55ad01;
case 0x55ad03:c.instructions+=1;goto B55ad03;
case 0x55ad08:goto L55ad08;
case 0x55ad0d:c.instructions+=1;goto B55ad0d;
case 0x55ad0f:goto L55ad0f;
case 0x55ad10:c.instructions+=1;goto B55ad10;
case 0x55ad15:goto L55ad15;
case 0x55ad18:goto L55ad18;
case 0x55ad1a:c.instructions+=2;goto B55ad1a;
case 0x55ad1b:c.instructions+=1;goto B55ad1b;
case 0x55ad20:goto L55ad20;
case 0x55ad22:c.instructions+=12;goto B55ad22;
case 0x55ad27:c.instructions+=11;goto B55ad27;
case 0x55ad2d:c.instructions+=10;goto B55ad2d;
case 0x55ad2e:c.instructions+=9;goto B55ad2e;
case 0x55ad35:c.instructions+=8;goto B55ad35;
case 0x55ad36:c.instructions+=7;goto B55ad36;
case 0x55ad37:c.instructions+=6;goto B55ad37;
case 0x55ad39:c.instructions+=5;goto B55ad39;
case 0x55ad3d:c.instructions+=4;goto B55ad3d;
case 0x55ad43:c.instructions+=3;goto B55ad43;
case 0x55ad46:c.instructions+=2;goto B55ad46;
case 0x55ad4e:c.instructions+=1;goto B55ad4e;
case 0x55ad53:goto L55ad53;
case 0x55ad57:c.instructions+=5;goto B55ad57;
case 0x55ad5d:c.instructions+=4;goto B55ad5d;
case 0x55ad5e:c.instructions+=3;goto B55ad5e;
case 0x55ad65:c.instructions+=2;goto B55ad65;
case 0x55ad68:c.instructions+=1;goto B55ad68;
case 0x55ad70:goto L55ad70;
case 0x55ad71:c.instructions+=14;goto B55ad71;
case 0x55ad73:c.instructions+=13;goto B55ad73;
case 0x55ad75:c.instructions+=12;goto B55ad75;
case 0x55ad7a:c.instructions+=11;goto B55ad7a;
case 0x55ad80:c.instructions+=10;goto B55ad80;
case 0x55ad81:c.instructions+=9;goto B55ad81;
case 0x55ad88:c.instructions+=8;goto B55ad88;
case 0x55ad89:c.instructions+=7;goto B55ad89;
case 0x55ad8c:c.instructions+=6;goto B55ad8c;
case 0x55ad8d:c.instructions+=5;goto B55ad8d;
case 0x55ad8e:c.instructions+=4;goto B55ad8e;
case 0x55ad90:c.instructions+=3;goto B55ad90;
case 0x55ad91:c.instructions+=2;goto B55ad91;
case 0x55ad94:c.instructions+=1;goto B55ad94;
case 0x55ad99:goto L55ad99;
case 0x55ad9b:c.instructions+=8;goto B55ad9b;
case 0x55ada1:c.instructions+=7;goto B55ada1;
case 0x55ada4:c.instructions+=6;goto B55ada4;
case 0x55ada7:c.instructions+=5;goto B55ada7;
case 0x55adaa:c.instructions+=4;goto B55adaa;
case 0x55adaf:c.instructions+=3;goto B55adaf;
case 0x55adb2:c.instructions+=2;goto B55adb2;
case 0x55adb5:c.instructions+=1;goto B55adb5;
case 0x55adba:goto L55adba;
case 0x55adbd:c.instructions+=2;goto B55adbd;
case 0x55adbf:c.instructions+=1;goto B55adbf;
case 0x55adc1:goto L55adc1;
case 0x55adc7:c.instructions+=3;goto B55adc7;
case 0x55adc9:c.instructions+=2;goto B55adc9;
case 0x55adcc:c.instructions+=1;goto B55adcc;
case 0x55adce:goto L55adce;
case 0x55add0:c.instructions+=3;goto B55add0;
case 0x55add1:c.instructions+=2;goto B55add1;
case 0x55add6:c.instructions+=1;goto B55add6;
case 0x55add8:goto L55add8;
case 0x55add9:c.instructions+=3;goto B55add9;
case 0x55adde:c.instructions+=2;goto B55adde;
case 0x55ade0:c.instructions+=1;goto B55ade0;
case 0x55ade2:goto L55ade2;
case 0x55ade3:c.instructions+=2;goto B55ade3;
case 0x55ade8:c.instructions+=1;goto B55ade8;
case 0x55ade9:goto L55ade9;
case 0x55adee:goto L55adee;
case 0x55adf3:c.instructions+=4;goto B55adf3;
case 0x55adf5:c.instructions+=3;goto B55adf5;
case 0x55adf7:c.instructions+=2;goto B55adf7;
case 0x55adfb:c.instructions+=1;goto B55adfb;
case 0x55ae00:goto L55ae00;
case 0x55ae03:c.instructions+=5;goto B55ae03;
case 0x55ae06:c.instructions+=4;goto B55ae06;
case 0x55ae07:c.instructions+=3;goto B55ae07;
case 0x55ae0d:c.instructions+=2;goto B55ae0d;
case 0x55ae0e:c.instructions+=1;goto B55ae0e;
case 0x55ae13:goto L55ae13;
case 0x55ae18:c.instructions+=4;goto B55ae18;
case 0x55ae1e:c.instructions+=3;goto B55ae1e;
case 0x55ae21:c.instructions+=2;goto B55ae21;
case 0x55ae27:c.instructions+=1;goto B55ae27;
case 0x55ae29:goto L55ae29;
case 0x55ae2e:c.instructions+=3;goto B55ae2e;
case 0x55ae30:c.instructions+=2;goto B55ae30;
case 0x55ae31:c.instructions+=1;goto B55ae31;
case 0x55ae33:goto L55ae33;
case 0x55ae38:c.instructions+=1;goto B55ae38;
case 0x55ae3a:goto L55ae3a;
case 0x55ae3d:c.instructions+=1;goto B55ae3d;
case 0x55ae3f:goto L55ae3f;
case 0x55ae44:c.instructions+=1;goto B55ae44;
case 0x55ae46:goto L55ae46;
case 0x55ae49:c.instructions+=1;goto B55ae49;
case 0x55ae4b:goto L55ae4b;
case 0x55ae50:c.instructions+=1;goto B55ae50;
case 0x55ae52:goto L55ae52;
case 0x55ae54:c.instructions+=5;goto B55ae54;
case 0x55ae57:c.instructions+=4;goto B55ae57;
case 0x55ae5a:c.instructions+=3;goto B55ae5a;
case 0x55ae5b:c.instructions+=2;goto B55ae5b;
case 0x55ae5e:c.instructions+=1;goto B55ae5e;
case 0x55ae60:goto L55ae60;
case 0x55ae66:c.instructions+=2;goto B55ae66;
case 0x55ae67:c.instructions+=1;goto B55ae67;
case 0x55ae6c:goto L55ae6c;
case 0x55ae6f:c.instructions+=2;goto B55ae6f;
case 0x55ae71:c.instructions+=1;goto B55ae71;
case 0x55ae73:goto L55ae73;
case 0x55ae76:c.instructions+=3;goto B55ae76;
case 0x55ae79:c.instructions+=2;goto B55ae79;
case 0x55ae7c:c.instructions+=1;goto B55ae7c;
case 0x55ae7f:goto L55ae7f;
case 0x55ae80:goto L55ae80;
case 0x55ae82:c.instructions+=1;goto B55ae82;
case 0x55ae87:goto L55ae87;
case 0x55ae8a:c.instructions+=7;goto B55ae8a;
case 0x55ae8c:c.instructions+=6;goto B55ae8c;
case 0x55ae8d:c.instructions+=5;goto B55ae8d;
case 0x55ae8e:c.instructions+=4;goto B55ae8e;
case 0x55ae95:c.instructions+=3;goto B55ae95;
case 0x55ae97:c.instructions+=2;goto B55ae97;
case 0x55ae98:c.instructions+=1;goto B55ae98;
case 0x55aea0:goto L55aea0;
case 0x55aea1:c.instructions+=2;goto B55aea1;
case 0x55aea3:c.instructions+=1;goto B55aea3;
case 0x55aea8:goto L55aea8;
case 0x55aead:c.instructions+=1;goto B55aead;
case 0x55aeaf:goto L55aeaf;
case 0x55aeb0:c.instructions+=1;goto B55aeb0;
case 0x55aeb5:goto L55aeb5;
case 0x55aeb8:goto L55aeb8;
case 0x55aeba:c.instructions+=2;goto B55aeba;
case 0x55aebb:c.instructions+=1;goto B55aebb;
case 0x55aec0:goto L55aec0;
case 0x55aec2:c.instructions+=13;goto B55aec2;
case 0x55aec7:c.instructions+=12;goto B55aec7;
case 0x55aecd:c.instructions+=11;goto B55aecd;
case 0x55aece:c.instructions+=10;goto B55aece;
case 0x55aed5:c.instructions+=9;goto B55aed5;
case 0x55aed6:c.instructions+=8;goto B55aed6;
case 0x55aed7:c.instructions+=7;goto B55aed7;
case 0x55aed9:c.instructions+=6;goto B55aed9;
case 0x55aedd:c.instructions+=5;goto B55aedd;
case 0x55aee3:c.instructions+=4;goto B55aee3;
case 0x55aee6:c.instructions+=3;goto B55aee6;
case 0x55aee8:c.instructions+=2;goto B55aee8;
case 0x55aef0:c.instructions+=1;goto B55aef0;
case 0x55aef2:goto L55aef2;
case 0x55aef4:c.instructions+=2;goto B55aef4;
case 0x55aef6:c.instructions+=1;goto B55aef6;
case 0x55aef8:goto L55aef8;
case 0x55aeff:goto L55aeff;
case 0x55af03:c.instructions+=5;goto B55af03;
case 0x55af09:c.instructions+=4;goto B55af09;
case 0x55af0a:c.instructions+=3;goto B55af0a;
case 0x55af11:c.instructions+=2;goto B55af11;
case 0x55af14:c.instructions+=1;goto B55af14;
case 0x55af20:goto L55af20;
case 0x55af22:c.instructions+=7;goto B55af22;
case 0x55af27:c.instructions+=6;goto B55af27;
case 0x55af2d:c.instructions+=5;goto B55af2d;
case 0x55af2e:c.instructions+=4;goto B55af2e;
case 0x55af35:c.instructions+=3;goto B55af35;
case 0x55af36:c.instructions+=2;goto B55af36;
case 0x55af38:c.instructions+=1;goto B55af38;
case 0x55af3d:goto L55af3d;
case 0x55af40:c.instructions+=4;goto B55af40;
case 0x55af44:c.instructions+=3;goto B55af44;
case 0x55af46:c.instructions+=2;goto B55af46;
case 0x55af4e:c.instructions+=1;goto B55af4e;
case 0x55af50:goto L55af50;
case 0x55af54:c.instructions+=3;goto B55af54;
case 0x55af55:c.instructions+=2;goto B55af55;
case 0x55af57:c.instructions+=1;goto B55af57;
case 0x55af5c:goto L55af5c;
case 0x55af60:c.instructions+=3;goto B55af60;
case 0x55af67:c.instructions+=2;goto B55af67;
case 0x55af6a:c.instructions+=1;goto B55af6a;
case 0x55af6b:goto L55af6b;
case 0x55af6f:c.instructions+=4;goto B55af6f;
case 0x55af71:c.instructions+=3;goto B55af71;
case 0x55af78:c.instructions+=2;goto B55af78;
case 0x55af7b:c.instructions+=1;goto B55af7b;
case 0x55af80:goto L55af80;
case 0x55af82:c.instructions+=7;goto B55af82;
case 0x55af87:c.instructions+=6;goto B55af87;
case 0x55af8d:c.instructions+=5;goto B55af8d;
case 0x55af8e:c.instructions+=4;goto B55af8e;
case 0x55af95:c.instructions+=3;goto B55af95;
case 0x55af96:c.instructions+=2;goto B55af96;
case 0x55af9b:c.instructions+=1;goto B55af9b;
case 0x55afa0:goto L55afa0;
case 0x55afa3:c.instructions+=4;goto B55afa3;
case 0x55afa7:c.instructions+=3;goto B55afa7;
case 0x55afa9:c.instructions+=2;goto B55afa9;
case 0x55afb1:c.instructions+=1;goto B55afb1;
case 0x55afb3:goto L55afb3;
case 0x55afb7:c.instructions+=3;goto B55afb7;
case 0x55afb8:c.instructions+=2;goto B55afb8;
case 0x55afba:c.instructions+=1;goto B55afba;
case 0x55afbf:goto L55afbf;
case 0x55afc3:c.instructions+=3;goto B55afc3;
case 0x55afca:c.instructions+=2;goto B55afca;
case 0x55afcd:c.instructions+=1;goto B55afcd;
case 0x55afce:goto L55afce;
case 0x55afd2:c.instructions+=4;goto B55afd2;
case 0x55afd4:c.instructions+=3;goto B55afd4;
case 0x55afdb:c.instructions+=2;goto B55afdb;
case 0x55afde:c.instructions+=1;goto B55afde;
case 0x55afe0:goto L55afe0;
case 0x55afe1:c.instructions+=8;goto B55afe1;
case 0x55afe3:c.instructions+=7;goto B55afe3;
case 0x55afe6:c.instructions+=6;goto B55afe6;
case 0x55afeb:c.instructions+=5;goto B55afeb;
case 0x55afec:c.instructions+=4;goto B55afec;
case 0x55afed:c.instructions+=3;goto B55afed;
case 0x55afee:c.instructions+=2;goto B55afee;
case 0x55aff0:c.instructions+=1;goto B55aff0;
case 0x55aff6:goto L55aff6;
case 0x55aff8:goto L55aff8;
case 0x55affd:c.instructions+=1;goto B55affd;
case 0x55afff:goto L55afff;
default:missing_instruction(c.pc);}
B55a002:L55a002:{c.instructions+=2;NFSU2_TR(0x55a002);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a004:{NFSU2_TR(0x55a004);
if(r1(R+518)){{goto L55a012;}}
}
B55a006:L55a006:{c.instructions+=4;NFSU2_TR(0x55a006);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a009:{NFSU2_TR(0x55a009);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a00c:{NFSU2_TR(0x55a00c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a00f:{NFSU2_TR(0x55a00f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a012:L55a012:{c.instructions+=4;NFSU2_TR(0x55a012);
u8 U[4];
w4(U+0,u32(0xb84a37faull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a017:{NFSU2_TR(0x55a017);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a01c:{NFSU2_TR(0x55a01c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a01d:{NFSU2_TR(0x55a01d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a022ull));
TAIL_STATIC(0x558430u,558);
}
B55a022:L55a022:{c.instructions+=2;NFSU2_TR(0x55a022);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55a025:{NFSU2_TR(0x55a025);
{goto L55a111;}
}
B55a02a:L55a02a:{c.instructions+=2;NFSU2_TR(0x55a02a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a02d:{NFSU2_TR(0x55a02d);
TAIL_STATIC(0x559fe1u,559);
}
B55a02f:L55a02f:{c.instructions+=2;NFSU2_TR(0x55a02f);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a036:{NFSU2_TR(0x55a036);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55a0c6;}}
}
B55a03c:L55a03c:{c.instructions+=4;NFSU2_TR(0x55a03c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55a03f:{NFSU2_TR(0x55a03f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a040:{NFSU2_TR(0x55a040);
w4(R+4,u32(0x838980ull));
}
B55a045:{NFSU2_TR(0x55a045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a04aull));
TAIL_STATIC(0x53b5e0u,53b);
}
B55a04a:L55a04a:{c.instructions+=2;NFSU2_TR(0x55a04a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55a04c:{NFSU2_TR(0x55a04c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55a0c6;}}
}
B55a04e:L55a04e:{c.instructions+=11;NFSU2_TR(0x55a04e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a051:{NFSU2_TR(0x55a051);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B55a054:{NFSU2_TR(0x55a054);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a055:{NFSU2_TR(0x55a055);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55a058:{NFSU2_TR(0x55a058);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B55a05b:{NFSU2_TR(0x55a05b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a05c:{NFSU2_TR(0x55a05c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55a05e:{NFSU2_TR(0x55a05e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a05f:{NFSU2_TR(0x55a05f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a060:{NFSU2_TR(0x55a060);
w4(R+4,u32(0x85ad40ull));
}
B55a065:{NFSU2_TR(0x55a065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a06aull));
TAIL_STATIC(0x5415e0u,541);
}
B55a06a:L55a06a:{c.instructions+=3;NFSU2_TR(0x55a06a);
__builtin_memmove((R+0),gp(0x861e74),4);
}
B55a06f:{NFSU2_TR(0x55a06f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B55a072:{NFSU2_TR(0x55a072);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L55a091;}}
}
B55a074:L55a074:{c.instructions+=1;NFSU2_TR(0x55a074);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a079ull));
TAIL_STATIC(0x53b690u,53b);
}
B55a079:L55a079:{c.instructions+=4;NFSU2_TR(0x55a079);
u8 U[4];
w4(U+0,u32(0xd1ac60beull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a07e:{NFSU2_TR(0x55a07e);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a083:{NFSU2_TR(0x55a083);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a084:{NFSU2_TR(0x55a084);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a089ull));
TAIL_STATIC(0x558430u,558);
}
B55a089:L55a089:{c.instructions+=2;NFSU2_TR(0x55a089);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55a08c:{NFSU2_TR(0x55a08c);
{goto L55a111;}
}
B55a091:L55a091:{c.instructions+=5;NFSU2_TR(0x55a091);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55a094:{NFSU2_TR(0x55a094);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a095:{NFSU2_TR(0x55a095);
w4(R+4,u32(0x838980ull));
}
B55a09a:{NFSU2_TR(0x55a09a);
w4(R+24,u32(0x94f4c140ull));
}
B55a09f:{NFSU2_TR(0x55a09f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a0a4ull));
TAIL_STATIC(0x5303c0u,530);
}
B55a0a4:L55a0a4:{c.instructions+=2;NFSU2_TR(0x55a0a4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55a0a6:{NFSU2_TR(0x55a0a6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L55a0ad;}}
}
B55a0a8:L55a0a8:{c.instructions+=1;NFSU2_TR(0x55a0a8);
w4(R+24,u32(0xfddd0c23ull));
}
B55a0ad:L55a0ad:{c.instructions+=1;NFSU2_TR(0x55a0ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a0b2ull));
TAIL_STATIC(0x53b690u,53b);
}
B55a0b2:L55a0b2:{c.instructions+=6;NFSU2_TR(0x55a0b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a0b3:{NFSU2_TR(0x55a0b3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a0b5:{NFSU2_TR(0x55a0b5);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a0ba:{NFSU2_TR(0x55a0ba);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a0bf:{NFSU2_TR(0x55a0bf);
u8 U[4];
w4(U+0,u32(0x9f00f07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a0c4:{NFSU2_TR(0x55a0c4);
{goto L55a0f9;}
}
B55a0c6:L55a0c6:{c.instructions+=5;NFSU2_TR(0x55a0c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55a0c9:{NFSU2_TR(0x55a0c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a0ca:{NFSU2_TR(0x55a0ca);
w4(R+4,u32(0x838980ull));
}
B55a0cf:{NFSU2_TR(0x55a0cf);
w4(R+24,u32(0xf2d7ffabull));
}
B55a0d4:{NFSU2_TR(0x55a0d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a0d9ull));
TAIL_STATIC(0x5303c0u,530);
}
B55a0d9:L55a0d9:{c.instructions+=2;NFSU2_TR(0x55a0d9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55a0db:{NFSU2_TR(0x55a0db);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L55a0e2;}}
}
B55a0dd:L55a0dd:{c.instructions+=1;NFSU2_TR(0x55a0dd);
w4(R+24,u32(0x217453full));
}
B55a0e2:L55a0e2:{c.instructions+=1;NFSU2_TR(0x55a0e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a0e7ull));
TAIL_STATIC(0x53b690u,53b);
}
B55a0e7:L55a0e7:{c.instructions+=5;NFSU2_TR(0x55a0e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a0e8:{NFSU2_TR(0x55a0e8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a0ea:{NFSU2_TR(0x55a0ea);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a0ef:{NFSU2_TR(0x55a0ef);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a0f4:{NFSU2_TR(0x55a0f4);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a0f9:L55a0f9:{c.instructions+=5;NFSU2_TR(0x55a0f9);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a0fe:{NFSU2_TR(0x55a0fe);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a103:{NFSU2_TR(0x55a103);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a108:{NFSU2_TR(0x55a108);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a109:{NFSU2_TR(0x55a109);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a10eull));
TAIL_STATIC(0x558790u,558);
}
B55a10e:L55a10e:{c.instructions+=1;NFSU2_TR(0x55a10e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B55a111:L55a111:{c.instructions+=5;NFSU2_TR(0x55a111);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a113:{NFSU2_TR(0x55a113);
u8 U[4];
w4(U+0,u32(0x78feb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a118:{NFSU2_TR(0x55a118);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a11d:{NFSU2_TR(0x55a11d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a11e:{NFSU2_TR(0x55a11e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a123ull));
TAIL_STATIC(0x537c00u,537);
}
B55a123:L55a123:{c.instructions+=3;NFSU2_TR(0x55a123);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55a126:{NFSU2_TR(0x55a126);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55a129:{NFSU2_TR(0x55a129);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a12eull));
TAIL_STATIC(0x538c00u,538);
}
B55a12e:L55a12e:{c.instructions+=6;NFSU2_TR(0x55a12e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55a12f:{NFSU2_TR(0x55a12f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55a130:{NFSU2_TR(0x55a130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55a131:{NFSU2_TR(0x55a131);
__builtin_memmove((R+16),(R+20),4);
}
B55a133:{NFSU2_TR(0x55a133);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55a134:{NFSU2_TR(0x55a134);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a140:L55a140:{c.instructions+=4;NFSU2_TR(0x55a140);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a141:{NFSU2_TR(0x55a141);
__builtin_memmove((R+20),(R+16),4);
}
B55a143:{NFSU2_TR(0x55a143);
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
B55a14a:{NFSU2_TR(0x55a14a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55a227;}}
}
B55a150:L55a150:{c.instructions+=6;NFSU2_TR(0x55a150);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a151:{NFSU2_TR(0x55a151);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a152:{NFSU2_TR(0x55a152);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55a155:{NFSU2_TR(0x55a155);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a156:{NFSU2_TR(0x55a156);
w4(R+4,u32(0x8637b0ull));
}
B55a15b:{NFSU2_TR(0x55a15b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a160ull));
TAIL_STATIC(0x51bb70u,51b);
}
B55a160:L55a160:{c.instructions+=3;NFSU2_TR(0x55a160);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B55a162:{NFSU2_TR(0x55a162);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a164:{NFSU2_TR(0x55a164);
if(r1(R+518)){{goto L55a16b;}}
}
B55a166:L55a166:{c.instructions+=2;NFSU2_TR(0x55a166);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a169:{NFSU2_TR(0x55a169);
{goto L55a16d;}
}
B55a16b:L55a16b:{c.instructions+=1;NFSU2_TR(0x55a16b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55a16d:L55a16d:{c.instructions+=2;NFSU2_TR(0x55a16d);
__builtin_memmove((R+4),(R+0),4);
}
B55a16f:{NFSU2_TR(0x55a16f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a174ull));
TAIL_STATIC(0x538c00u,538);
}
B55a174:L55a174:{c.instructions+=4;NFSU2_TR(0x55a174);
__builtin_memmove((R+0),gp(0x838994),4);
}
B55a179:{NFSU2_TR(0x55a179);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a17a:{NFSU2_TR(0x55a17a);
w4(R+4,u32(0x8395b0ull));
}
B55a17f:{NFSU2_TR(0x55a17f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a184ull));
TAIL_STATIC(0x5995e0u,599);
}
B55a184:L55a184:{c.instructions+=2;NFSU2_TR(0x55a184);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55a186:{NFSU2_TR(0x55a186);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55a1bc;}}
}
B55a188:L55a188:{c.instructions+=3;NFSU2_TR(0x55a188);
__builtin_memmove((R+4),gp(0x7fa1c8),4);
}
B55a18e:{NFSU2_TR(0x55a18e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a18f:{NFSU2_TR(0x55a18f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a194ull));
TAIL_STATIC(0x52cef0u,52c);
}
B55a194:L55a194:{c.instructions+=3;NFSU2_TR(0x55a194);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55a197:{NFSU2_TR(0x55a197);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a199:{NFSU2_TR(0x55a199);
if(r1(R+518)){{goto L55a1a7;}}
}
B55a19b:L55a19b:{c.instructions+=4;NFSU2_TR(0x55a19b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a19e:{NFSU2_TR(0x55a19e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a1a1:{NFSU2_TR(0x55a1a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a1a4:{NFSU2_TR(0x55a1a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a1a7:L55a1a7:{c.instructions+=4;NFSU2_TR(0x55a1a7);
u8 U[4];
w4(U+0,u32(0x89d4e03full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a1ac:{NFSU2_TR(0x55a1ac);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a1b1:{NFSU2_TR(0x55a1b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a1b2:{NFSU2_TR(0x55a1b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a1b7ull));
TAIL_STATIC(0x558430u,558);
}
B55a1b7:L55a1b7:{c.instructions+=2;NFSU2_TR(0x55a1b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55a1ba:{NFSU2_TR(0x55a1ba);
{goto L55a209;}
}
B55a1bc:L55a1bc:{c.instructions+=3;NFSU2_TR(0x55a1bc);
__builtin_memmove((R+8),gp(0x7fa1c8),4);
}
B55a1c2:{NFSU2_TR(0x55a1c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a1c3:{NFSU2_TR(0x55a1c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a1c8ull));
TAIL_STATIC(0x52cef0u,52c);
}
B55a1c8:L55a1c8:{c.instructions+=3;NFSU2_TR(0x55a1c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55a1cb:{NFSU2_TR(0x55a1cb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a1cd:{NFSU2_TR(0x55a1cd);
if(r1(R+518)){{goto L55a1db;}}
}
B55a1cf:L55a1cf:{c.instructions+=4;NFSU2_TR(0x55a1cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a1d2:{NFSU2_TR(0x55a1d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a1d5:{NFSU2_TR(0x55a1d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a1d8:{NFSU2_TR(0x55a1d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a1db:L55a1db:{c.instructions+=10;NFSU2_TR(0x55a1db);
u8 U[4];
w4(U+0,u32(0x5d336f96ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a1e0:{NFSU2_TR(0x55a1e0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a1e2:{NFSU2_TR(0x55a1e2);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a1e7:{NFSU2_TR(0x55a1e7);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a1ec:{NFSU2_TR(0x55a1ec);
u8 U[4];
w4(U+0,u32(0xe75749d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a1f1:{NFSU2_TR(0x55a1f1);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a1f6:{NFSU2_TR(0x55a1f6);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a1fb:{NFSU2_TR(0x55a1fb);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a200:{NFSU2_TR(0x55a200);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a201:{NFSU2_TR(0x55a201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a206ull));
TAIL_STATIC(0x558790u,558);
}
B55a206:L55a206:{c.instructions+=1;NFSU2_TR(0x55a206);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B55a209:L55a209:{c.instructions+=5;NFSU2_TR(0x55a209);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a20b:{NFSU2_TR(0x55a20b);
u8 U[4];
w4(U+0,u32(0x79d2ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a210:{NFSU2_TR(0x55a210);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a215:{NFSU2_TR(0x55a215);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a216:{NFSU2_TR(0x55a216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a21bull));
TAIL_STATIC(0x537c00u,537);
}
B55a21b:L55a21b:{c.instructions+=4;NFSU2_TR(0x55a21b);
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
B55a21e:{NFSU2_TR(0x55a21e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55a21f:{NFSU2_TR(0x55a21f);
s1(0x83855e,u8(0x1ull));
}
B55a226:{NFSU2_TR(0x55a226);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55a227:L55a227:{c.instructions+=2;NFSU2_TR(0x55a227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55a228:{NFSU2_TR(0x55a228);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a230:L55a230:{c.instructions+=7;NFSU2_TR(0x55a230);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a231:{NFSU2_TR(0x55a231);
__builtin_memmove((R+20),(R+16),4);
}
B55a233:{NFSU2_TR(0x55a233);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a236:{NFSU2_TR(0x55a236);
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
B55a23b:{NFSU2_TR(0x55a23b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a23c:{NFSU2_TR(0x55a23c);
__builtin_memmove((R+24),(R+4),4);
}
B55a23e:{NFSU2_TR(0x55a23e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55a24c;}}
}
B55a240:L55a240:{c.instructions+=4;NFSU2_TR(0x55a240);
s1(0x83855b,u8(0x1ull));
}
B55a247:{NFSU2_TR(0x55a247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55a248:{NFSU2_TR(0x55a248);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55a249:{NFSU2_TR(0x55a249);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a24c:L55a24c:{c.instructions+=3;NFSU2_TR(0x55a24c);
__builtin_memmove((R+4),gp(0x83855b),1);
}
B55a252:{NFSU2_TR(0x55a252);
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
B55a254:{NFSU2_TR(0x55a254);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55a3fb;}}
}
B55a25a:L55a25a:{c.instructions+=2;NFSU2_TR(0x55a25a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55a25f:{NFSU2_TR(0x55a25f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55a3fb;}}
}
B55a265:L55a265:{c.instructions+=5;NFSU2_TR(0x55a265);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a268:{NFSU2_TR(0x55a268);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55a26a:{NFSU2_TR(0x55a26a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a26b:{NFSU2_TR(0x55a26b);
w4(R+4,u32(0x8395b0ull));
}
B55a270:{NFSU2_TR(0x55a270);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a275ull));
TAIL_STATIC(0x599610u,599);
}
B55a275:L55a275:{c.instructions+=2;NFSU2_TR(0x55a275);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55a277:{NFSU2_TR(0x55a277);
if(r1(R+518)){{goto L55a29e;}}
}
B55a279:L55a279:{c.instructions+=1;NFSU2_TR(0x55a279);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a27eull));
TAIL_STATIC(0x53b710u,53b);
}
B55a27e:L55a27e:{c.instructions+=1;NFSU2_TR(0x55a27e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a283ull));
TAIL_STATIC(0x53b690u,53b);
}
B55a283:L55a283:{c.instructions+=5;NFSU2_TR(0x55a283);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55a286:{NFSU2_TR(0x55a286);
u8 U[4];
w4(U+0,u32(0xda15d7e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a28b:{NFSU2_TR(0x55a28b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a290:{NFSU2_TR(0x55a290);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a291:{NFSU2_TR(0x55a291);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a296ull));
TAIL_STATIC(0x558430u,558);
}
B55a296:L55a296:{c.instructions+=2;NFSU2_TR(0x55a296);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55a299:{NFSU2_TR(0x55a299);
{goto L55a3ab;}
}
B55a29e:L55a29e:{c.instructions+=3;NFSU2_TR(0x55a29e);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a2a5:{NFSU2_TR(0x55a2a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a2a6:{NFSU2_TR(0x55a2a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55a34d;}}
}
B55a2ac:L55a2ac:{c.instructions+=4;NFSU2_TR(0x55a2ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55a2af:{NFSU2_TR(0x55a2af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a2b0:{NFSU2_TR(0x55a2b0);
w4(R+4,u32(0x838980ull));
}
B55a2b5:{NFSU2_TR(0x55a2b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a2baull));
TAIL_STATIC(0x530350u,530);
}
B55a2ba:L55a2ba:{c.instructions+=2;NFSU2_TR(0x55a2ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55a2bc:{NFSU2_TR(0x55a2bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55a34d;}}
}
B55a2c2:L55a2c2:{c.instructions+=6;NFSU2_TR(0x55a2c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55a2c5:{NFSU2_TR(0x55a2c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55a2c7:{NFSU2_TR(0x55a2c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x837b90ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B55a2ce:{NFSU2_TR(0x55a2ce);
__builtin_memmove((R+4),gp(0x861e74),4);
}
B55a2d4:{NFSU2_TR(0x55a2d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B55a2d7:{NFSU2_TR(0x55a2d7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L55a2fe;}}
}
B55a2d9:L55a2d9:{c.instructions+=1;NFSU2_TR(0x55a2d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a2deull));
TAIL_STATIC(0x53b710u,53b);
}
B55a2de:L55a2de:{c.instructions+=1;NFSU2_TR(0x55a2de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a2e3ull));
TAIL_STATIC(0x53b690u,53b);
}
B55a2e3:L55a2e3:{c.instructions+=5;NFSU2_TR(0x55a2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55a2e6:{NFSU2_TR(0x55a2e6);
u8 U[4];
w4(U+0,u32(0xd1ac60beull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a2eb:{NFSU2_TR(0x55a2eb);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a2f0:{NFSU2_TR(0x55a2f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a2f1:{NFSU2_TR(0x55a2f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a2f6ull));
TAIL_STATIC(0x558430u,558);
}
B55a2f6:L55a2f6:{c.instructions+=2;NFSU2_TR(0x55a2f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55a2f9:{NFSU2_TR(0x55a2f9);
{goto L55a3aa;}
}
B55a2fe:L55a2fe:{c.instructions+=4;NFSU2_TR(0x55a2fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a2ff:{NFSU2_TR(0x55a2ff);
w4(R+4,u32(0x838980ull));
}
B55a304:{NFSU2_TR(0x55a304);
w4(R+28,u32(0x44b7167full));
}
B55a309:{NFSU2_TR(0x55a309);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a30eull));
TAIL_STATIC(0x521c10u,521);
}
B55a30e:L55a30e:{c.instructions+=2;NFSU2_TR(0x55a30e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55a310:{NFSU2_TR(0x55a310);
if(r1(R+518)){{goto L55a317;}}
}
B55a312:L55a312:{c.instructions+=1;NFSU2_TR(0x55a312);
w4(R+28,u32(0x3949abeeull));
}
B55a317:L55a317:{c.instructions+=1;NFSU2_TR(0x55a317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a31cull));
TAIL_STATIC(0x53b710u,53b);
}
B55a31c:L55a31c:{c.instructions+=1;NFSU2_TR(0x55a31c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a321ull));
TAIL_STATIC(0x53b690u,53b);
}
B55a321:L55a321:{c.instructions+=11;NFSU2_TR(0x55a321);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55a324:{NFSU2_TR(0x55a324);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a325:{NFSU2_TR(0x55a325);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a327:{NFSU2_TR(0x55a327);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a32c:{NFSU2_TR(0x55a32c);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a331:{NFSU2_TR(0x55a331);
u8 U[4];
w4(U+0,u32(0x9f00f07ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a336:{NFSU2_TR(0x55a336);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a33b:{NFSU2_TR(0x55a33b);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a340:{NFSU2_TR(0x55a340);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a345:{NFSU2_TR(0x55a345);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a346:{NFSU2_TR(0x55a346);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a34bull));
TAIL_STATIC(0x558790u,558);
}
B55a34b:L55a34b:{c.instructions+=1;NFSU2_TR(0x55a34b);
{goto L55a3a7;}
}
B55a34d:L55a34d:{c.instructions+=5;NFSU2_TR(0x55a34d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55a350:{NFSU2_TR(0x55a350);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a351:{NFSU2_TR(0x55a351);
w4(R+4,u32(0x838980ull));
}
B55a356:{NFSU2_TR(0x55a356);
w4(R+28,u32(0xf5ac2b2aull));
}
B55a35b:{NFSU2_TR(0x55a35b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a360ull));
TAIL_STATIC(0x521c10u,521);
}
B55a360:L55a360:{c.instructions+=2;NFSU2_TR(0x55a360);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55a362:{NFSU2_TR(0x55a362);
if(r1(R+518)){{goto L55a369;}}
}
B55a364:L55a364:{c.instructions+=1;NFSU2_TR(0x55a364);
w4(R+28,u32(0xf1bd1a8aull));
}
B55a369:L55a369:{c.instructions+=1;NFSU2_TR(0x55a369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a36eull));
TAIL_STATIC(0x53b710u,53b);
}
B55a36e:L55a36e:{c.instructions+=1;NFSU2_TR(0x55a36e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a373ull));
TAIL_STATIC(0x53b690u,53b);
}
B55a373:L55a373:{c.instructions+=11;NFSU2_TR(0x55a373);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55a376:{NFSU2_TR(0x55a376);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a377:{NFSU2_TR(0x55a377);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a379:{NFSU2_TR(0x55a379);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a37e:{NFSU2_TR(0x55a37e);
u8 U[4];
w4(U+0,u32(0xb4623f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a383:{NFSU2_TR(0x55a383);
u8 U[4];
w4(U+0,u32(0x51123592ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a388:{NFSU2_TR(0x55a388);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a38d:{NFSU2_TR(0x55a38d);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a392:{NFSU2_TR(0x55a392);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a397:{NFSU2_TR(0x55a397);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a398:{NFSU2_TR(0x55a398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a39dull));
TAIL_STATIC(0x558790u,558);
}
B55a39d:L55a39d:{c.instructions+=1;NFSU2_TR(0x55a39d);
s4(0x838970,u32(0xb4623f67ull));
}
B55a3a7:L55a3a7:{c.instructions+=1;NFSU2_TR(0x55a3a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B55a3aa:L55a3aa:{c.instructions+=1;NFSU2_TR(0x55a3aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55a3ab:L55a3ab:{c.instructions+=4;NFSU2_TR(0x55a3ab);
__builtin_memmove((R+0),gp(0x7fa1c8),4);
}
B55a3b0:{NFSU2_TR(0x55a3b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a3b1:{NFSU2_TR(0x55a3b1);
w4(R+4,u32(0x8637b0ull));
}
B55a3b6:{NFSU2_TR(0x55a3b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a3bbull));
TAIL_STATIC(0x51bb70u,51b);
}
B55a3bb:L55a3bb:{c.instructions+=2;NFSU2_TR(0x55a3bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55a3bd:{NFSU2_TR(0x55a3bd);
if(r1(R+518)){{goto L55a3ce;}}
}
B55a3bf:L55a3bf:{c.instructions+=3;NFSU2_TR(0x55a3bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a3c2:{NFSU2_TR(0x55a3c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55a3c4:{NFSU2_TR(0x55a3c4);
if(r1(R+518)){{goto L55a3ce;}}
}
B55a3c6:L55a3c6:{c.instructions+=2;NFSU2_TR(0x55a3c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B55a3c9:{NFSU2_TR(0x55a3c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a3ceull));
TAIL_STATIC(0x51fd10u,51f);
}
B55a3ce:L55a3ce:{c.instructions+=5;NFSU2_TR(0x55a3ce);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a3d0:{NFSU2_TR(0x55a3d0);
u8 U[4];
w4(U+0,u32(0x78feb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a3d5:{NFSU2_TR(0x55a3d5);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a3da:{NFSU2_TR(0x55a3da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a3db:{NFSU2_TR(0x55a3db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a3e0ull));
TAIL_STATIC(0x537c00u,537);
}
B55a3e0:L55a3e0:{c.instructions+=6;NFSU2_TR(0x55a3e0);
__builtin_memmove((R+4),gp(0x7fa1c8),4);
}
B55a3e6:{NFSU2_TR(0x55a3e6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a3e8:{NFSU2_TR(0x55a3e8);
u8 U[4];
w4(U+0,u32(0x79d2ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a3ed:{NFSU2_TR(0x55a3ed);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a3f2:{NFSU2_TR(0x55a3f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a3f3:{NFSU2_TR(0x55a3f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a3f8ull));
TAIL_STATIC(0x537c00u,537);
}
B55a3f8:L55a3f8:{c.instructions+=1;NFSU2_TR(0x55a3f8);
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
B55a3fb:L55a3fb:{c.instructions+=3;NFSU2_TR(0x55a3fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55a3fc:{NFSU2_TR(0x55a3fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55a3fd:{NFSU2_TR(0x55a3fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a400:L55a400:{c.instructions+=8;NFSU2_TR(0x55a400);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a402:{NFSU2_TR(0x55a402);
u8 U[4];
w4(U+0,u32(0x778314ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a407:{NFSU2_TR(0x55a407);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a40d:{NFSU2_TR(0x55a40d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a40e:{NFSU2_TR(0x55a40e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a415:{NFSU2_TR(0x55a415);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a416:{NFSU2_TR(0x55a416);
u8 U[4];
w4(U+0,u32(0x150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a41b:{NFSU2_TR(0x55a41b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a420ull));
TAIL_STATIC(0x575620u,575);
}
B55a420:L55a420:{c.instructions+=5;NFSU2_TR(0x55a420);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55a423:{NFSU2_TR(0x55a423);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B55a427:{NFSU2_TR(0x55a427);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55a429:{NFSU2_TR(0x55a429);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55a431:{NFSU2_TR(0x55a431);
if(r1(R+518)){{goto L55a44e;}}
}
B55a433:L55a433:{c.instructions+=4;NFSU2_TR(0x55a433);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55a437:{NFSU2_TR(0x55a437);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a438:{NFSU2_TR(0x55a438);
__builtin_memmove((R+4),(R+0),4);
}
B55a43a:{NFSU2_TR(0x55a43a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a43full));
TAIL_STATIC(0x5571b0u,557);
}
B55a43f:L55a43f:{c.instructions+=4;NFSU2_TR(0x55a43f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55a443:{NFSU2_TR(0x55a443);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a44a:{NFSU2_TR(0x55a44a);
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
B55a44d:{NFSU2_TR(0x55a44d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a44e:L55a44e:{c.instructions+=5;NFSU2_TR(0x55a44e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55a452:{NFSU2_TR(0x55a452);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55a454:{NFSU2_TR(0x55a454);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a45b:{NFSU2_TR(0x55a45b);
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
B55a45e:{NFSU2_TR(0x55a45e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a460:L55a460:{c.instructions+=15;NFSU2_TR(0x55a460);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a461:{NFSU2_TR(0x55a461);
__builtin_memmove((R+20),(R+16),4);
}
B55a463:{NFSU2_TR(0x55a463);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a465:{NFSU2_TR(0x55a465);
u8 U[4];
w4(U+0,u32(0x777d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a46a:{NFSU2_TR(0x55a46a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a470:{NFSU2_TR(0x55a470);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a471:{NFSU2_TR(0x55a471);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a478:{NFSU2_TR(0x55a478);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a479:{NFSU2_TR(0x55a479);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a47c:{NFSU2_TR(0x55a47c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a47d:{NFSU2_TR(0x55a47d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a47e:{NFSU2_TR(0x55a47e);
__builtin_memmove((R+24),(R+4),4);
}
B55a480:{NFSU2_TR(0x55a480);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a481:{NFSU2_TR(0x55a481);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a484:{NFSU2_TR(0x55a484);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a489ull));
TAIL_STATIC(0x552330u,552);
}
B55a489:L55a489:{c.instructions+=7;NFSU2_TR(0x55a489);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B55a48b:{NFSU2_TR(0x55a48b);
u8 U[4];
w4(U+0,u32(0x79d30cull));
s4(u32(r4(R+24)),r4(U+0));
}
B55a491:{NFSU2_TR(0x55a491);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a497:{NFSU2_TR(0x55a497);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a49c:{NFSU2_TR(0x55a49c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a49f:{NFSU2_TR(0x55a49f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55a4a5:{NFSU2_TR(0x55a4a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a4aaull));
TAIL_STATIC(0x52cf60u,52c);
}
B55a4aa:L55a4aa:{c.instructions+=3;NFSU2_TR(0x55a4aa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55a4ad:{NFSU2_TR(0x55a4ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55a4af:{NFSU2_TR(0x55a4af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55a4de;}}
}
B55a4b1:L55a4b1:{c.instructions+=4;NFSU2_TR(0x55a4b1);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55a4b7:{NFSU2_TR(0x55a4b7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a4b9:{NFSU2_TR(0x55a4b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a4bc:{NFSU2_TR(0x55a4bc);
if(r1(R+518)){{goto L55a4de;}}
}
B55a4be:L55a4be:{c.instructions+=4;NFSU2_TR(0x55a4be);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a4c0:{NFSU2_TR(0x55a4c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a4c1:{NFSU2_TR(0x55a4c1);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a4c6:{NFSU2_TR(0x55a4c6);
if(r1(R+518)){{goto L55a4d2;}}
}
B55a4c8:L55a4c8:{c.instructions+=4;NFSU2_TR(0x55a4c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a4c9:{NFSU2_TR(0x55a4c9);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a4ce:{NFSU2_TR(0x55a4ce);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a4d0:{NFSU2_TR(0x55a4d0);
{goto L55a4d9;}
}
B55a4d2:L55a4d2:{c.instructions+=3;NFSU2_TR(0x55a4d2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a4d3:{NFSU2_TR(0x55a4d3);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a4d8:{NFSU2_TR(0x55a4d8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a4d9:L55a4d9:{c.instructions+=1;NFSU2_TR(0x55a4d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a4deull));
TAIL_STATIC(0x555d00u,555);
}
B55a4de:L55a4de:{c.instructions+=5;NFSU2_TR(0x55a4de);
__builtin_memmove((R+0),gp(0x8384d8),4);
}
B55a4e3:{NFSU2_TR(0x55a4e3);
__builtin_memmove((R+4),(R+0),4);
}
B55a4e5:{NFSU2_TR(0x55a4e5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a4e7:{NFSU2_TR(0x55a4e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55a4eb:{NFSU2_TR(0x55a4eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a4f0ull));
TAIL_STATIC(0x542990u,542);
}
B55a4f0:L55a4f0:{c.instructions+=6;NFSU2_TR(0x55a4f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55a4f3:{NFSU2_TR(0x55a4f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55a4f6:{NFSU2_TR(0x55a4f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a4f7:{NFSU2_TR(0x55a4f7);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B55a4fd:{NFSU2_TR(0x55a4fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a4fe:{NFSU2_TR(0x55a4fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a503ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B55a503:L55a503:{c.instructions+=3;NFSU2_TR(0x55a503);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B55a509:{NFSU2_TR(0x55a509);
s1(0x83a655,u8(0x1ull));
}
B55a510:{NFSU2_TR(0x55a510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a515ull));
TAIL_STATIC(0x50fe20u,50f);
}
B55a515:L55a515:{c.instructions+=6;NFSU2_TR(0x55a515);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a518:{NFSU2_TR(0x55a518);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B55a51e:{NFSU2_TR(0x55a51e);
__builtin_memmove(gp(0x83a650),(R+0),4);
}
B55a523:{NFSU2_TR(0x55a523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a529:{NFSU2_TR(0x55a529);
__builtin_memmove((R+4),(R+24),4);
}
B55a52b:{NFSU2_TR(0x55a52b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a530ull));
TAIL_STATIC(0x557350u,557);
}
B55a530:L55a530:{c.instructions+=8;NFSU2_TR(0x55a530);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55a533:{NFSU2_TR(0x55a533);
__builtin_memmove((R+0),(R+24),4);
}
B55a535:{NFSU2_TR(0x55a535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55a536:{NFSU2_TR(0x55a536);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55a537:{NFSU2_TR(0x55a537);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a53e:{NFSU2_TR(0x55a53e);
__builtin_memmove((R+16),(R+20),4);
}
B55a540:{NFSU2_TR(0x55a540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55a541:{NFSU2_TR(0x55a541);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a550:L55a550:{c.instructions+=3;NFSU2_TR(0x55a550);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a551:{NFSU2_TR(0x55a551);
__builtin_memmove((R+24),(R+4),4);
}
B55a553:{NFSU2_TR(0x55a553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a558ull));
{goto L55a570;}
}
B55a558:L55a558:{c.instructions+=2;NFSU2_TR(0x55a558);
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
B55a55d:{NFSU2_TR(0x55a55d);
if(r1(R+518)){{goto L55a568;}}
}
B55a55f:L55a55f:{c.instructions+=2;NFSU2_TR(0x55a55f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a560:{NFSU2_TR(0x55a560);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a565ull));
TAIL_STATIC(0x575630u,575);
}
B55a565:L55a565:{c.instructions+=1;NFSU2_TR(0x55a565);
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
B55a568:L55a568:{c.instructions+=3;NFSU2_TR(0x55a568);
__builtin_memmove((R+0),(R+24),4);
}
B55a56a:{NFSU2_TR(0x55a56a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55a56b:{NFSU2_TR(0x55a56b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a570:L55a570:{c.instructions+=2;NFSU2_TR(0x55a570);
u8 U[4];
w4(U+0,u32(0x79d30cull));
s4(u32(r4(R+4)),r4(U+0));
}
B55a576:{NFSU2_TR(0x55a576);
TAIL_STATIC(0x4defb0u,4de);
}
B55a580:L55a580:{c.instructions+=4;NFSU2_TR(0x55a580);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a581:{NFSU2_TR(0x55a581);
__builtin_memmove((R+20),(R+16),4);
}
B55a583:{NFSU2_TR(0x55a583);
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
B55a58a:{NFSU2_TR(0x55a58a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55a61b;}}
}
B55a590:L55a590:{c.instructions+=3;NFSU2_TR(0x55a590);
__builtin_memmove((R+0),gp(0x839c40),4);
}
B55a595:{NFSU2_TR(0x55a595);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55a597:{NFSU2_TR(0x55a597);
if(r1(R+518)){{goto L55a5ff;}}
}
B55a599:L55a599:{c.instructions+=3;NFSU2_TR(0x55a599);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B55a59f:{NFSU2_TR(0x55a59f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55a5a1:{NFSU2_TR(0x55a5a1);
if(r1(R+518)){{goto L55a5ff;}}
}
B55a5a3:L55a5a3:{c.instructions+=3;NFSU2_TR(0x55a5a3);
__builtin_memmove((R+0),gp(0x83a63c),4);
}
B55a5a8:{NFSU2_TR(0x55a5a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55a5ad:{NFSU2_TR(0x55a5ad);
if(r1(R+518)){{goto L55a5ff;}}
}
B55a5af:L55a5af:{c.instructions+=5;NFSU2_TR(0x55a5af);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x29ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B55a5b2:{NFSU2_TR(0x55a5b2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x83a544ull))));
}
B55a5b7:{NFSU2_TR(0x55a5b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a5b8:{NFSU2_TR(0x55a5b8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B55a5bb:{NFSU2_TR(0x55a5bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a5c0ull));
TAIL_STATIC(0x59ae90u,59a);
}
B55a5c0:L55a5c0:{c.instructions+=5;NFSU2_TR(0x55a5c0);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B55a5c2:{NFSU2_TR(0x55a5c2);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B55a5c4:{NFSU2_TR(0x55a5c4);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B55a5c6:{NFSU2_TR(0x55a5c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55a5c8:{NFSU2_TR(0x55a5c8);
if(r1(R+518)){{goto L55a5ff;}}
}
B55a5ca:L55a5ca:{c.instructions+=11;NFSU2_TR(0x55a5ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a5cd:{NFSU2_TR(0x55a5cd);
u8 U[4];
w4(U+0,u32(0xa2323032ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a5d2:{NFSU2_TR(0x55a5d2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a5d4:{NFSU2_TR(0x55a5d4);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a5d9:{NFSU2_TR(0x55a5d9);
u8 U[4];
w4(U+0,u32(0xb4edeb6dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a5de:{NFSU2_TR(0x55a5de);
u8 U[4];
w4(U+0,u32(0x2b5dfef6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a5e3:{NFSU2_TR(0x55a5e3);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a5e8:{NFSU2_TR(0x55a5e8);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a5ed:{NFSU2_TR(0x55a5ed);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a5f2:{NFSU2_TR(0x55a5f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a5f3:{NFSU2_TR(0x55a5f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a5f8ull));
TAIL_STATIC(0x558790u,558);
}
B55a5f8:L55a5f8:{c.instructions+=3;NFSU2_TR(0x55a5f8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55a5fb:{NFSU2_TR(0x55a5fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55a5fc:{NFSU2_TR(0x55a5fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a5ff:L55a5ff:{c.instructions+=3;NFSU2_TR(0x55a5ff);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55a605:{NFSU2_TR(0x55a605);
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
B55a607:{NFSU2_TR(0x55a607);
if(r1(R+518)){{goto L55a61b;}}
}
B55a609:L55a609:{c.instructions+=6;NFSU2_TR(0x55a609);
__builtin_memmove((R+8),gp(0x7fa218),4);
}
B55a60f:{NFSU2_TR(0x55a60f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a612:{NFSU2_TR(0x55a612);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a614:{NFSU2_TR(0x55a614);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a615:{NFSU2_TR(0x55a615);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a616:{NFSU2_TR(0x55a616);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a61bull));
TAIL_STATIC(0x5377a0u,537);
}
B55a61b:L55a61b:{c.instructions+=2;NFSU2_TR(0x55a61b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55a61c:{NFSU2_TR(0x55a61c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a620:L55a620:{c.instructions+=15;NFSU2_TR(0x55a620);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a621:{NFSU2_TR(0x55a621);
__builtin_memmove((R+20),(R+16),4);
}
B55a623:{NFSU2_TR(0x55a623);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a625:{NFSU2_TR(0x55a625);
u8 U[4];
w4(U+0,u32(0x777d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a62a:{NFSU2_TR(0x55a62a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a630:{NFSU2_TR(0x55a630);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a631:{NFSU2_TR(0x55a631);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a638:{NFSU2_TR(0x55a638);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a639:{NFSU2_TR(0x55a639);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a63c:{NFSU2_TR(0x55a63c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a63d:{NFSU2_TR(0x55a63d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a63e:{NFSU2_TR(0x55a63e);
__builtin_memmove((R+24),(R+4),4);
}
B55a640:{NFSU2_TR(0x55a640);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a641:{NFSU2_TR(0x55a641);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a644:{NFSU2_TR(0x55a644);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a649ull));
TAIL_STATIC(0x552330u,552);
}
B55a649:L55a649:{c.instructions+=7;NFSU2_TR(0x55a649);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B55a64b:{NFSU2_TR(0x55a64b);
u8 U[4];
w4(U+0,u32(0x79d328ull));
s4(u32(r4(R+24)),r4(U+0));
}
B55a651:{NFSU2_TR(0x55a651);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a657:{NFSU2_TR(0x55a657);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a65c:{NFSU2_TR(0x55a65c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a65f:{NFSU2_TR(0x55a65f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55a665:{NFSU2_TR(0x55a665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a66aull));
TAIL_STATIC(0x52cf60u,52c);
}
B55a66a:L55a66a:{c.instructions+=3;NFSU2_TR(0x55a66a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55a66d:{NFSU2_TR(0x55a66d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55a66f:{NFSU2_TR(0x55a66f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55a69e;}}
}
B55a671:L55a671:{c.instructions+=4;NFSU2_TR(0x55a671);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55a677:{NFSU2_TR(0x55a677);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a679:{NFSU2_TR(0x55a679);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a67c:{NFSU2_TR(0x55a67c);
if(r1(R+518)){{goto L55a69e;}}
}
B55a67e:L55a67e:{c.instructions+=4;NFSU2_TR(0x55a67e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a680:{NFSU2_TR(0x55a680);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a681:{NFSU2_TR(0x55a681);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a686:{NFSU2_TR(0x55a686);
if(r1(R+518)){{goto L55a692;}}
}
B55a688:L55a688:{c.instructions+=4;NFSU2_TR(0x55a688);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a689:{NFSU2_TR(0x55a689);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a68e:{NFSU2_TR(0x55a68e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a690:{NFSU2_TR(0x55a690);
{goto L55a699;}
}
B55a692:L55a692:{c.instructions+=3;NFSU2_TR(0x55a692);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a693:{NFSU2_TR(0x55a693);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a698:{NFSU2_TR(0x55a698);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a699:L55a699:{c.instructions+=1;NFSU2_TR(0x55a699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a69eull));
TAIL_STATIC(0x555d00u,555);
}
B55a69e:L55a69e:{c.instructions+=5;NFSU2_TR(0x55a69e);
__builtin_memmove((R+0),gp(0x8384d8),4);
}
B55a6a3:{NFSU2_TR(0x55a6a3);
__builtin_memmove((R+4),(R+0),4);
}
B55a6a5:{NFSU2_TR(0x55a6a5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a6a7:{NFSU2_TR(0x55a6a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55a6ab:{NFSU2_TR(0x55a6ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a6b0ull));
TAIL_STATIC(0x542990u,542);
}
B55a6b0:L55a6b0:{c.instructions+=6;NFSU2_TR(0x55a6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55a6b3:{NFSU2_TR(0x55a6b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55a6b6:{NFSU2_TR(0x55a6b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a6b7:{NFSU2_TR(0x55a6b7);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B55a6bd:{NFSU2_TR(0x55a6bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a6be:{NFSU2_TR(0x55a6be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a6c3ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B55a6c3:L55a6c3:{c.instructions+=3;NFSU2_TR(0x55a6c3);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B55a6c9:{NFSU2_TR(0x55a6c9);
s1(0x83a655,u8(0x1ull));
}
B55a6d0:{NFSU2_TR(0x55a6d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a6d5ull));
TAIL_STATIC(0x50fe20u,50f);
}
B55a6d5:L55a6d5:{c.instructions+=6;NFSU2_TR(0x55a6d5);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B55a6da:{NFSU2_TR(0x55a6da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a6e0:{NFSU2_TR(0x55a6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55a6e3:{NFSU2_TR(0x55a6e3);
__builtin_memmove(gp(0x83a650),(R+4),4);
}
B55a6e9:{NFSU2_TR(0x55a6e9);
__builtin_memmove((R+4),(R+24),4);
}
B55a6eb:{NFSU2_TR(0x55a6eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a6f0ull));
TAIL_STATIC(0x557410u,557);
}
B55a6f0:L55a6f0:{c.instructions+=8;NFSU2_TR(0x55a6f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55a6f3:{NFSU2_TR(0x55a6f3);
__builtin_memmove((R+0),(R+24),4);
}
B55a6f5:{NFSU2_TR(0x55a6f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55a6f6:{NFSU2_TR(0x55a6f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55a6f7:{NFSU2_TR(0x55a6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55a6fe:{NFSU2_TR(0x55a6fe);
__builtin_memmove((R+16),(R+20),4);
}
B55a700:{NFSU2_TR(0x55a700);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55a701:{NFSU2_TR(0x55a701);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a710:L55a710:{c.instructions+=3;NFSU2_TR(0x55a710);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a711:{NFSU2_TR(0x55a711);
__builtin_memmove((R+24),(R+4),4);
}
B55a713:{NFSU2_TR(0x55a713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a718ull));
{goto L55a730;}
}
B55a718:L55a718:{c.instructions+=2;NFSU2_TR(0x55a718);
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
B55a71d:{NFSU2_TR(0x55a71d);
if(r1(R+518)){{goto L55a728;}}
}
B55a71f:L55a71f:{c.instructions+=2;NFSU2_TR(0x55a71f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a720:{NFSU2_TR(0x55a720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a725ull));
TAIL_STATIC(0x575630u,575);
}
B55a725:L55a725:{c.instructions+=1;NFSU2_TR(0x55a725);
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
B55a728:L55a728:{c.instructions+=3;NFSU2_TR(0x55a728);
__builtin_memmove((R+0),(R+24),4);
}
B55a72a:{NFSU2_TR(0x55a72a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55a72b:{NFSU2_TR(0x55a72b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a730:L55a730:{c.instructions+=2;NFSU2_TR(0x55a730);
u8 U[4];
w4(U+0,u32(0x79d328ull));
s4(u32(r4(R+4)),r4(U+0));
}
B55a736:{NFSU2_TR(0x55a736);
TAIL_STATIC(0x4defb0u,4de);
}
B55a740:L55a740:{c.instructions+=15;NFSU2_TR(0x55a740);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a741:{NFSU2_TR(0x55a741);
__builtin_memmove((R+20),(R+16),4);
}
B55a743:{NFSU2_TR(0x55a743);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a746:{NFSU2_TR(0x55a746);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55a749:{NFSU2_TR(0x55a749);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a74a:{NFSU2_TR(0x55a74a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a74b:{NFSU2_TR(0x55a74b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55a74e:{NFSU2_TR(0x55a74e);
__builtin_memmove((R+24),(R+4),4);
}
B55a750:{NFSU2_TR(0x55a750);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55a753:{NFSU2_TR(0x55a753);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a754:{NFSU2_TR(0x55a754);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a755:{NFSU2_TR(0x55a755);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a756:{NFSU2_TR(0x55a756);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a757:{NFSU2_TR(0x55a757);
__builtin_memmove((R+4),(R+24),4);
}
B55a759:{NFSU2_TR(0x55a759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a75eull));
TAIL_STATIC(0x543d40u,543);
}
B55a75e:L55a75e:{c.instructions+=2;NFSU2_TR(0x55a75e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xb5af2461ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5af2461ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a764:{NFSU2_TR(0x55a764);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55a96e;}}
}
B55a76a:L55a76a:{c.instructions+=1;NFSU2_TR(0x55a76a);
if(r1(R+518)){{goto L55a90a;}}
}
B55a770:L55a770:{c.instructions+=2;NFSU2_TR(0x55a770);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x35f8620bull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a776:{NFSU2_TR(0x55a776);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55a82e;}}
}
B55a77c:L55a77c:{c.instructions+=1;NFSU2_TR(0x55a77c);
if(r1(R+518)){{goto L55a81d;}}
}
B55a782:L55a782:{c.instructions+=2;NFSU2_TR(0x55a782);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ed2368ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a788:{NFSU2_TR(0x55a788);
if(r1(R+518)){{goto L55a7a3;}}
}
B55a78a:L55a78a:{c.instructions+=2;NFSU2_TR(0x55a78a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x34dc1bcfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x34dc1bcfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x34dc1bcfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55a790:{NFSU2_TR(0x55a790);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55aa38;}}
}
B55a796:L55a796:{c.instructions+=2;NFSU2_TR(0x55a796);
__builtin_memmove((R+4),(R+24),4);
}
B55a798:{NFSU2_TR(0x55a798);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a79dull));
TAIL_STATIC(0x538ca0u,538);
}
B55a79d:L55a79d:{c.instructions+=4;NFSU2_TR(0x55a79d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55a79e:{NFSU2_TR(0x55a79e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55a79f:{NFSU2_TR(0x55a79f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55a7a0:{NFSU2_TR(0x55a7a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a7a3:L55a7a3:{c.instructions+=4;NFSU2_TR(0x55a7a3);
__builtin_memmove((R+4),gp(0x83a640),4);
}
B55a7a9:{NFSU2_TR(0x55a7a9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55a7ab:{NFSU2_TR(0x55a7ab);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B55a7ad:{NFSU2_TR(0x55a7ad);
if(r1(R+518)){{goto L55a7c3;}}
}
B55a7af:L55a7af:{c.instructions+=2;NFSU2_TR(0x55a7af);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B55a7b0:{NFSU2_TR(0x55a7b0);
if(r1(R+518)){{goto L55a7bc;}}
}
B55a7b2:L55a7b2:{c.instructions+=2;NFSU2_TR(0x55a7b2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B55a7b3:{NFSU2_TR(0x55a7b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55a7cf;}}
}
B55a7b5:L55a7b5:{c.instructions+=2;NFSU2_TR(0x55a7b5);
w4(R+0,u32(0x79049cull));
}
B55a7ba:{NFSU2_TR(0x55a7ba);
{goto L55a7cf;}
}
B55a7bc:L55a7bc:{c.instructions+=2;NFSU2_TR(0x55a7bc);
w4(R+0,u32(0x790478ull));
}
B55a7c1:{NFSU2_TR(0x55a7c1);
{goto L55a7cf;}
}
B55a7c3:L55a7c3:{c.instructions+=2;NFSU2_TR(0x55a7c3);
w4(R+0,u32(0x78f5a4ull));
}
B55a7c8:{NFSU2_TR(0x55a7c8);
s1(0x8635b9,u8(0x1ull));
}
B55a7cf:L55a7cf:{c.instructions+=5;NFSU2_TR(0x55a7cf);
__builtin_memmove(gp(0x8384c8),(R+0),4);
}
B55a7d4:{NFSU2_TR(0x55a7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a7d7:{NFSU2_TR(0x55a7d7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a7d9:{NFSU2_TR(0x55a7d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a7da:{NFSU2_TR(0x55a7da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a7dfull));
TAIL_STATIC(0x50b8c0u,50b);
}
B55a7df:L55a7df:{c.instructions+=3;NFSU2_TR(0x55a7df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55a7e2:{NFSU2_TR(0x55a7e2);
w4(R+4,u32(0x839c40ull));
}
B55a7e7:{NFSU2_TR(0x55a7e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a7ecull));
TAIL_STATIC(0x50f970u,50f);
}
B55a7ec:L55a7ec:{c.instructions+=2;NFSU2_TR(0x55a7ec);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a7f1:{NFSU2_TR(0x55a7f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a7f6ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55a7f6:L55a7f6:{c.instructions+=3;NFSU2_TR(0x55a7f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55a7f9:{NFSU2_TR(0x55a7f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55a7fb:{NFSU2_TR(0x55a7fb);
if(r1(R+518)){{goto L55a80a;}}
}
B55a7fd:L55a7fd:{c.instructions+=2;NFSU2_TR(0x55a7fd);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a802:{NFSU2_TR(0x55a802);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a807ull));
TAIL_STATIC(0x5379a0u,537);
}
B55a807:L55a807:{c.instructions+=1;NFSU2_TR(0x55a807);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55a80a:L55a80a:{c.instructions+=3;NFSU2_TR(0x55a80a);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B55a810:{NFSU2_TR(0x55a810);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a812:{NFSU2_TR(0x55a812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a817ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B55a817:L55a817:{c.instructions+=4;NFSU2_TR(0x55a817);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55a818:{NFSU2_TR(0x55a818);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55a819:{NFSU2_TR(0x55a819);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55a81a:{NFSU2_TR(0x55a81a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a81d:L55a81d:{c.instructions+=2;NFSU2_TR(0x55a81d);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55a823:{NFSU2_TR(0x55a823);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a828ull));
TAIL_STATIC(0x52cdd0u,52c);
}
B55a828:L55a828:{c.instructions+=4;NFSU2_TR(0x55a828);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55a829:{NFSU2_TR(0x55a829);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55a82a:{NFSU2_TR(0x55a82a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55a82b:{NFSU2_TR(0x55a82b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a82e:L55a82e:{c.instructions+=2;NFSU2_TR(0x55a82e);
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
B55a834:{NFSU2_TR(0x55a834);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55aa38;}}
}
B55a83a:L55a83a:{c.instructions+=2;NFSU2_TR(0x55a83a);
u8 U[8];
__builtin_memmove((U+0),gp(0x83a63c),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a844:{NFSU2_TR(0x55a844);
if(r1(R+518)){{goto L55a882;}}
}
B55a846:L55a846:{c.instructions+=5;NFSU2_TR(0x55a846);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a849:{NFSU2_TR(0x55a849);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a84e:{NFSU2_TR(0x55a84e);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a853:{NFSU2_TR(0x55a853);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a854:{NFSU2_TR(0x55a854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a859ull));
TAIL_STATIC(0x537d40u,537);
}
B55a859:L55a859:{c.instructions+=3;NFSU2_TR(0x55a859);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55a85c:{NFSU2_TR(0x55a85c);
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
B55a85e:{NFSU2_TR(0x55a85e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55aa38;}}
}
B55a864:L55a864:{c.instructions+=6;NFSU2_TR(0x55a864);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55a867:{NFSU2_TR(0x55a867);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a869:{NFSU2_TR(0x55a869);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a86e:{NFSU2_TR(0x55a86e);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a873:{NFSU2_TR(0x55a873);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a874:{NFSU2_TR(0x55a874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a879ull));
TAIL_STATIC(0x537c60u,537);
}
B55a879:L55a879:{c.instructions+=5;NFSU2_TR(0x55a879);
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
B55a87c:{NFSU2_TR(0x55a87c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55a87d:{NFSU2_TR(0x55a87d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55a87e:{NFSU2_TR(0x55a87e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55a87f:{NFSU2_TR(0x55a87f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a882:L55a882:{c.instructions+=6;NFSU2_TR(0x55a882);
__builtin_memmove((R+8),gp(0x83a64c),4);
}
B55a888:{NFSU2_TR(0x55a888);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B55a88f:{NFSU2_TR(0x55a88f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55a892:{NFSU2_TR(0x55a892);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a893:{NFSU2_TR(0x55a893);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B55a899:{NFSU2_TR(0x55a899);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a89eull));
TAIL_STATIC(0x5f4230u,5f4);
}
B55a89e:L55a89e:{c.instructions+=4;NFSU2_TR(0x55a89e);
__builtin_memmove((R+4),gp(0x850078),4);
}
B55a8a4:{NFSU2_TR(0x55a8a4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a8aa:{NFSU2_TR(0x55a8aa);
w4(R+0,u32(0x40813f63ull));
}
B55a8af:{NFSU2_TR(0x55a8af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55a8b8;}}
}
B55a8b1:L55a8b1:{c.instructions+=2;NFSU2_TR(0x55a8b1);
w4(R+0,u32(0xfc820867ull));
}
B55a8b6:{NFSU2_TR(0x55a8b6);
{goto L55a8d0;}
}
B55a8b8:L55a8b8:{c.instructions+=2;NFSU2_TR(0x55a8b8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a8bb:{NFSU2_TR(0x55a8bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55a8d0;}}
}
B55a8bd:L55a8bd:{c.instructions+=5;NFSU2_TR(0x55a8bd);
__builtin_memmove((R+0),gp(0x83a640),4);
}
B55a8c2:{NFSU2_TR(0x55a8c2);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B55a8c4:{NFSU2_TR(0x55a8c4);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B55a8c6:{NFSU2_TR(0x55a8c6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xce5a854bull))));
}
B55a8cb:{NFSU2_TR(0x55a8cb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xe5a0d45eull))));
}
B55a8d0:L55a8d0:{c.instructions+=11;NFSU2_TR(0x55a8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55a8d3:{NFSU2_TR(0x55a8d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a8d4:{NFSU2_TR(0x55a8d4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a8d6:{NFSU2_TR(0x55a8d6);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a8db:{NFSU2_TR(0x55a8db);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a8e0:{NFSU2_TR(0x55a8e0);
u8 U[4];
w4(U+0,u32(0x30ed2368ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a8e5:{NFSU2_TR(0x55a8e5);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a8ea:{NFSU2_TR(0x55a8ea);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a8ef:{NFSU2_TR(0x55a8ef);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a8f4:{NFSU2_TR(0x55a8f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a8f5:{NFSU2_TR(0x55a8f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a8faull));
TAIL_STATIC(0x558790u,558);
}
B55a8fa:L55a8fa:{c.instructions+=3;NFSU2_TR(0x55a8fa);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B55a8fd:{NFSU2_TR(0x55a8fd);
__builtin_memmove((R+4),(R+24),4);
}
B55a8ff:{NFSU2_TR(0x55a8ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a904ull));
TAIL_STATIC(0x538c00u,538);
}
B55a904:L55a904:{c.instructions+=4;NFSU2_TR(0x55a904);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55a905:{NFSU2_TR(0x55a905);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55a906:{NFSU2_TR(0x55a906);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55a907:{NFSU2_TR(0x55a907);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a90a:L55a90a:{c.instructions+=3;NFSU2_TR(0x55a90a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a910:{NFSU2_TR(0x55a910);
u8 U[14];
__builtin_memmove((U+6),gp(0x8651ac),4);
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
B55a916:{NFSU2_TR(0x55a916);
if(r1(R+518)){{goto L55aa38;}}
}
B55a91c:L55a91c:{c.instructions+=3;NFSU2_TR(0x55a91c);
__builtin_memmove((R+0),gp(0x83a7a4),1);
}
B55a921:{NFSU2_TR(0x55a921);
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
B55a923:{NFSU2_TR(0x55a923);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55aa38;}}
}
B55a929:L55a929:{c.instructions+=2;NFSU2_TR(0x55a929);
u8 U[14];
__builtin_memmove((U+6),gp(0x83a63c),4);
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
B55a933:{NFSU2_TR(0x55a933);
if(r1(R+518)){{goto L55aa38;}}
}
B55a939:L55a939:{c.instructions+=3;NFSU2_TR(0x55a939);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B55a93f:{NFSU2_TR(0x55a93f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a941:{NFSU2_TR(0x55a941);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a946ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B55a946:L55a946:{c.instructions+=2;NFSU2_TR(0x55a946);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a94b:{NFSU2_TR(0x55a94b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a950ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55a950:L55a950:{c.instructions+=3;NFSU2_TR(0x55a950);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55a953:{NFSU2_TR(0x55a953);
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
B55a955:{NFSU2_TR(0x55a955);
if(r1(R+518)){{goto L55aa38;}}
}
B55a95b:L55a95b:{c.instructions+=2;NFSU2_TR(0x55a95b);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a960:{NFSU2_TR(0x55a960);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a965ull));
TAIL_STATIC(0x5379a0u,537);
}
B55a965:L55a965:{c.instructions+=5;NFSU2_TR(0x55a965);
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
B55a968:{NFSU2_TR(0x55a968);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55a969:{NFSU2_TR(0x55a969);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55a96a:{NFSU2_TR(0x55a96a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55a96b:{NFSU2_TR(0x55a96b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a96e:L55a96e:{c.instructions+=2;NFSU2_TR(0x55a96e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a974:{NFSU2_TR(0x55a974);
if(r1(R+518)){{goto L55aa1b;}}
}
B55a97a:L55a97a:{c.instructions+=2;NFSU2_TR(0x55a97a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd05fc3a3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a980:{NFSU2_TR(0x55a980);
if(r1(R+518)){{goto L55a9b9;}}
}
B55a982:L55a982:{c.instructions+=2;NFSU2_TR(0x55a982);
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
B55a988:{NFSU2_TR(0x55a988);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55aa38;}}
}
B55a98e:L55a98e:{c.instructions+=2;NFSU2_TR(0x55a98e);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x911ab364ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B55a998:{NFSU2_TR(0x55a998);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55aa38;}}
}
B55a99e:L55a99e:{c.instructions+=6;NFSU2_TR(0x55a99e);
__builtin_memmove((R+4),gp(0x7fa21c),4);
}
B55a9a4:{NFSU2_TR(0x55a9a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55a9a7:{NFSU2_TR(0x55a9a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a9a9:{NFSU2_TR(0x55a9a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a9aa:{NFSU2_TR(0x55a9aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a9ab:{NFSU2_TR(0x55a9ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a9b0ull));
TAIL_STATIC(0x537980u,537);
}
B55a9b0:L55a9b0:{c.instructions+=5;NFSU2_TR(0x55a9b0);
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
B55a9b3:{NFSU2_TR(0x55a9b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55a9b4:{NFSU2_TR(0x55a9b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55a9b5:{NFSU2_TR(0x55a9b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55a9b6:{NFSU2_TR(0x55a9b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a9b9:L55a9b9:{c.instructions+=7;NFSU2_TR(0x55a9b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a9bc:{NFSU2_TR(0x55a9bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a9bf:{NFSU2_TR(0x55a9bf);
__builtin_memmove((R+28),gp(0x83a63c),4);
}
B55a9c5:{NFSU2_TR(0x55a9c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a9c6:{NFSU2_TR(0x55a9c6);
w4(R+4,u32(0x839c40ull));
}
B55a9cb:{NFSU2_TR(0x55a9cb);
__builtin_memmove(gp(0x83a63c),(R+0),4);
}
B55a9d0:{NFSU2_TR(0x55a9d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a9d5ull));
TAIL_STATIC(0x50fc60u,50f);
}
B55a9d5:L55a9d5:{c.instructions+=3;NFSU2_TR(0x55a9d5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55a9db:{NFSU2_TR(0x55a9db);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55a9e1:{NFSU2_TR(0x55a9e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55a9ff;}}
}
B55a9e3:L55a9e3:{c.instructions+=2;NFSU2_TR(0x55a9e3);
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
B55a9e5:{NFSU2_TR(0x55a9e5);
if(r1(R+518)){{goto L55aa38;}}
}
B55a9e7:L55a9e7:{c.instructions+=6;NFSU2_TR(0x55a9e7);
__builtin_memmove((R+8),gp(0x7fa230),4);
}
B55a9ed:{NFSU2_TR(0x55a9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55a9f0:{NFSU2_TR(0x55a9f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a9f2:{NFSU2_TR(0x55a9f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a9f3:{NFSU2_TR(0x55a9f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55a9f4:{NFSU2_TR(0x55a9f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55a9f9ull));
TAIL_STATIC(0x5377a0u,537);
}
B55a9f9:L55a9f9:{c.instructions+=4;NFSU2_TR(0x55a9f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55a9fa:{NFSU2_TR(0x55a9fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55a9fb:{NFSU2_TR(0x55a9fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55a9fc:{NFSU2_TR(0x55a9fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55a9ff:L55a9ff:{c.instructions+=2;NFSU2_TR(0x55a9ff);
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
B55aa01:{NFSU2_TR(0x55aa01);
if(r1(R+518)){{goto L55aa38;}}
}
B55aa03:L55aa03:{c.instructions+=6;NFSU2_TR(0x55aa03);
__builtin_memmove((R+8),gp(0x7fa21c),4);
}
B55aa09:{NFSU2_TR(0x55aa09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55aa0c:{NFSU2_TR(0x55aa0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aa0e:{NFSU2_TR(0x55aa0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aa0f:{NFSU2_TR(0x55aa0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aa10:{NFSU2_TR(0x55aa10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55aa15ull));
TAIL_STATIC(0x5377a0u,537);
}
B55aa15:L55aa15:{c.instructions+=4;NFSU2_TR(0x55aa15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55aa16:{NFSU2_TR(0x55aa16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55aa17:{NFSU2_TR(0x55aa17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55aa18:{NFSU2_TR(0x55aa18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55aa1b:L55aa1b:{c.instructions+=3;NFSU2_TR(0x55aa1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55aa21:{NFSU2_TR(0x55aa21);
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
B55aa23:{NFSU2_TR(0x55aa23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55aa38;}}
}
B55aa25:L55aa25:{c.instructions+=3;NFSU2_TR(0x55aa25);
u8 U[4];
w4(U+0,u32(0x1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aa27:{NFSU2_TR(0x55aa27);
w4(R+4,u32(0x8635bcull));
}
B55aa2c:{NFSU2_TR(0x55aa2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55aa31ull));
TAIL_STATIC(0x5243d0u,524);
}
B55aa31:L55aa31:{c.instructions+=1;NFSU2_TR(0x55aa31);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55aa38:L55aa38:{c.instructions+=4;NFSU2_TR(0x55aa38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55aa39:{NFSU2_TR(0x55aa39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55aa3a:{NFSU2_TR(0x55aa3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55aa3b:{NFSU2_TR(0x55aa3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55aa40:L55aa40:{c.instructions+=14;NFSU2_TR(0x55aa40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aa41:{NFSU2_TR(0x55aa41);
__builtin_memmove((R+20),(R+16),4);
}
B55aa43:{NFSU2_TR(0x55aa43);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aa45:{NFSU2_TR(0x55aa45);
u8 U[4];
w4(U+0,u32(0x777d78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aa4a:{NFSU2_TR(0x55aa4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55aa50:{NFSU2_TR(0x55aa50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aa51:{NFSU2_TR(0x55aa51);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55aa58:{NFSU2_TR(0x55aa58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aa59:{NFSU2_TR(0x55aa59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55aa5c:{NFSU2_TR(0x55aa5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aa5d:{NFSU2_TR(0x55aa5d);
__builtin_memmove((R+24),(R+4),4);
}
B55aa5f:{NFSU2_TR(0x55aa5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aa60:{NFSU2_TR(0x55aa60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55aa63:{NFSU2_TR(0x55aa63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55aa68ull));
TAIL_STATIC(0x552330u,552);
}
B55aa68:L55aa68:{c.instructions+=6;NFSU2_TR(0x55aa68);
u8 U[4];
w4(U+0,u32(0x79d344ull));
s4(u32(r4(R+24)),r4(U+0));
}
B55aa6e:{NFSU2_TR(0x55aa6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55aa78:{NFSU2_TR(0x55aa78);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aa7d:{NFSU2_TR(0x55aa7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55aa84:{NFSU2_TR(0x55aa84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B55aa8e:{NFSU2_TR(0x55aa8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55aa93ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55aa93:L55aa93:{c.instructions+=3;NFSU2_TR(0x55aa93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55aa96:{NFSU2_TR(0x55aa96);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55aa98:{NFSU2_TR(0x55aa98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55aaca;}}
}
B55aa9a:L55aa9a:{c.instructions+=4;NFSU2_TR(0x55aa9a);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55aaa0:{NFSU2_TR(0x55aaa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55aaa2:{NFSU2_TR(0x55aaa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55aaa5:{NFSU2_TR(0x55aaa5);
if(r1(R+518)){{goto L55aaca;}}
}
B55aaa7:L55aaa7:{c.instructions+=4;NFSU2_TR(0x55aaa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55aaa9:{NFSU2_TR(0x55aaa9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aaab:{NFSU2_TR(0x55aaab);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aab0:{NFSU2_TR(0x55aab0);
if(r1(R+518)){{goto L55aabc;}}
}
B55aab2:L55aab2:{c.instructions+=4;NFSU2_TR(0x55aab2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aab3:{NFSU2_TR(0x55aab3);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aab8:{NFSU2_TR(0x55aab8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aaba:{NFSU2_TR(0x55aaba);
{goto L55aac5;}
}
B55aabc:L55aabc:{c.instructions+=3;NFSU2_TR(0x55aabc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aabe:{NFSU2_TR(0x55aabe);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aac3:{NFSU2_TR(0x55aac3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aac5:L55aac5:{c.instructions+=1;NFSU2_TR(0x55aac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55aacaull));
TAIL_STATIC(0x555d00u,555);
}
B55aaca:L55aaca:{c.instructions+=5;NFSU2_TR(0x55aaca);
__builtin_memmove((R+0),gp(0x8384d8),4);
}
B55aacf:{NFSU2_TR(0x55aacf);
__builtin_memmove((R+4),(R+0),4);
}
B55aad1:{NFSU2_TR(0x55aad1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aad3:{NFSU2_TR(0x55aad3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55aad7:{NFSU2_TR(0x55aad7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55aadcull));
TAIL_STATIC(0x542990u,542);
}
B55aadc:L55aadc:{c.instructions+=6;NFSU2_TR(0x55aadc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55aadf:{NFSU2_TR(0x55aadf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55aae2:{NFSU2_TR(0x55aae2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aae3:{NFSU2_TR(0x55aae3);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B55aae9:{NFSU2_TR(0x55aae9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aaea:{NFSU2_TR(0x55aaea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55aaefull));
TAIL_STATIC(0x54e6e0u,54e);
}
B55aaef:L55aaef:{c.instructions+=8;NFSU2_TR(0x55aaef);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B55aaf4:{NFSU2_TR(0x55aaf4);
s1(0x838528,u8(0x0ull));
}
B55aafb:{NFSU2_TR(0x55aafb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ab01:{NFSU2_TR(0x55ab01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ab04:{NFSU2_TR(0x55ab04);
__builtin_memmove(gp(0x83a650),(R+4),4);
}
B55ab0a:{NFSU2_TR(0x55ab0a);
__builtin_memmove((R+4),(R+24),4);
}
B55ab0c:{NFSU2_TR(0x55ab0c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55ab10:{NFSU2_TR(0x55ab10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ab15ull));
TAIL_STATIC(0x557680u,557);
}
B55ab15:L55ab15:{c.instructions+=3;NFSU2_TR(0x55ab15);
__builtin_memmove((R+8),gp(0x83a64c),4);
}
B55ab1b:{NFSU2_TR(0x55ab1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B55ab22:{NFSU2_TR(0x55ab22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ab27ull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B55ab27:L55ab27:{c.instructions+=12;NFSU2_TR(0x55ab27);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B55ab2d:{NFSU2_TR(0x55ab2d);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B55ab2f:{NFSU2_TR(0x55ab2f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B55ab31:{NFSU2_TR(0x55ab31);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55ab33:{NFSU2_TR(0x55ab33);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ab36:{NFSU2_TR(0x55ab36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ab39:{NFSU2_TR(0x55ab39);
__builtin_memmove((R+0),(R+24),4);
}
B55ab3b:{NFSU2_TR(0x55ab3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55ab3c:{NFSU2_TR(0x55ab3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ab43:{NFSU2_TR(0x55ab43);
__builtin_memmove((R+16),(R+20),4);
}
B55ab45:{NFSU2_TR(0x55ab45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55ab46:{NFSU2_TR(0x55ab46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55ab50:L55ab50:{c.instructions+=3;NFSU2_TR(0x55ab50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ab51:{NFSU2_TR(0x55ab51);
__builtin_memmove((R+24),(R+4),4);
}
B55ab53:{NFSU2_TR(0x55ab53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ab58ull));
{goto L55ab70;}
}
B55ab58:L55ab58:{c.instructions+=2;NFSU2_TR(0x55ab58);
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
B55ab5d:{NFSU2_TR(0x55ab5d);
if(r1(R+518)){{goto L55ab68;}}
}
B55ab5f:L55ab5f:{c.instructions+=2;NFSU2_TR(0x55ab5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ab60:{NFSU2_TR(0x55ab60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ab65ull));
TAIL_STATIC(0x575630u,575);
}
B55ab65:L55ab65:{c.instructions+=1;NFSU2_TR(0x55ab65);
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
B55ab68:L55ab68:{c.instructions+=3;NFSU2_TR(0x55ab68);
__builtin_memmove((R+0),(R+24),4);
}
B55ab6a:{NFSU2_TR(0x55ab6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55ab6b:{NFSU2_TR(0x55ab6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55ab70:L55ab70:{c.instructions+=2;NFSU2_TR(0x55ab70);
u8 U[4];
w4(U+0,u32(0x79d344ull));
s4(u32(r4(R+4)),r4(U+0));
}
B55ab76:{NFSU2_TR(0x55ab76);
TAIL_STATIC(0x4defb0u,4de);
}
B55ab80:L55ab80:{c.instructions+=5;NFSU2_TR(0x55ab80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ab81:{NFSU2_TR(0x55ab81);
__builtin_memmove((R+20),(R+16),4);
}
B55ab83:{NFSU2_TR(0x55ab83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ab86:{NFSU2_TR(0x55ab86);
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
B55ab89:{NFSU2_TR(0x55ab89);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55abef;}}
}
B55ab8b:L55ab8b:{c.instructions+=2;NFSU2_TR(0x55ab8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ab8c:{NFSU2_TR(0x55ab8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x55abf4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55ab93:L55ab93:{c.instructions+=2;NFSU2_TR(0x55ab93);
__builtin_memmove((R+24),gp(0x7fa220),4);
}
B55ab99:{NFSU2_TR(0x55ab99);
{goto L55abc2;}
}
B55ab9b:L55ab9b:{c.instructions+=3;NFSU2_TR(0x55ab9b);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B55aba1:{NFSU2_TR(0x55aba1);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aba3:{NFSU2_TR(0x55aba3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55aba8ull));
TAIL_STATIC(0x59b080u,59b);
}
B55aba8:L55aba8:{c.instructions+=2;NFSU2_TR(0x55aba8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55abaa:{NFSU2_TR(0x55abaa);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55ab93u);}goto L55ab93;}}
}
B55abac:L55abac:{c.instructions+=2;NFSU2_TR(0x55abac);
__builtin_memmove((R+24),gp(0x7fa224),4);
}
B55abb2:{NFSU2_TR(0x55abb2);
{goto L55abc2;}
}
B55abb4:L55abb4:{c.instructions+=2;NFSU2_TR(0x55abb4);
__builtin_memmove((R+24),gp(0x7fa228),4);
}
B55abba:{NFSU2_TR(0x55abba);
{goto L55abc2;}
}
B55abbc:L55abbc:{c.instructions+=1;NFSU2_TR(0x55abbc);
__builtin_memmove((R+24),gp(0x7fa22c),4);
}
B55abc2:L55abc2:{c.instructions+=2;NFSU2_TR(0x55abc2);
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
B55abc4:{NFSU2_TR(0x55abc4);
if(r1(R+518)){{goto L55abee;}}
}
B55abc6:L55abc6:{c.instructions+=2;NFSU2_TR(0x55abc6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55abc7:{NFSU2_TR(0x55abc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55abccull));
TAIL_STATIC(0x52cf60u,52c);
}
B55abcc:L55abcc:{c.instructions+=3;NFSU2_TR(0x55abcc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55abcf:{NFSU2_TR(0x55abcf);
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
B55abd1:{NFSU2_TR(0x55abd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55abee;}}
}
B55abd3:L55abd3:{c.instructions+=3;NFSU2_TR(0x55abd3);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55abd9:{NFSU2_TR(0x55abd9);
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
B55abdb:{NFSU2_TR(0x55abdb);
if(r1(R+518)){{goto L55abee;}}
}
B55abdd:L55abdd:{c.instructions+=6;NFSU2_TR(0x55abdd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55abdf:{NFSU2_TR(0x55abdf);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55abe4:{NFSU2_TR(0x55abe4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55abe6:{NFSU2_TR(0x55abe6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55abe7:{NFSU2_TR(0x55abe7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55abe9:{NFSU2_TR(0x55abe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55abeeull));
TAIL_STATIC(0x555d00u,555);
}
B55abee:L55abee:{c.instructions+=1;NFSU2_TR(0x55abee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55abef:L55abef:{c.instructions+=2;NFSU2_TR(0x55abef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55abf0:{NFSU2_TR(0x55abf0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55ac10:L55ac10:{c.instructions+=15;NFSU2_TR(0x55ac10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac11:{NFSU2_TR(0x55ac11);
__builtin_memmove((R+20),(R+16),4);
}
B55ac13:{NFSU2_TR(0x55ac13);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac15:{NFSU2_TR(0x55ac15);
u8 U[4];
w4(U+0,u32(0x777d98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac1a:{NFSU2_TR(0x55ac1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ac20:{NFSU2_TR(0x55ac20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac21:{NFSU2_TR(0x55ac21);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ac28:{NFSU2_TR(0x55ac28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac29:{NFSU2_TR(0x55ac29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ac2c:{NFSU2_TR(0x55ac2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac2d:{NFSU2_TR(0x55ac2d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac2e:{NFSU2_TR(0x55ac2e);
__builtin_memmove((R+24),(R+4),4);
}
B55ac30:{NFSU2_TR(0x55ac30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac31:{NFSU2_TR(0x55ac31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ac34:{NFSU2_TR(0x55ac34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ac39ull));
TAIL_STATIC(0x552780u,552);
}
B55ac39:L55ac39:{c.instructions+=7;NFSU2_TR(0x55ac39);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B55ac3b:{NFSU2_TR(0x55ac3b);
u8 U[4];
w4(U+0,u32(0x79d360ull));
s4(u32(r4(R+24)),r4(U+0));
}
B55ac41:{NFSU2_TR(0x55ac41);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55ac47:{NFSU2_TR(0x55ac47);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac4c:{NFSU2_TR(0x55ac4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ac4f:{NFSU2_TR(0x55ac4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ac55:{NFSU2_TR(0x55ac55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ac5aull));
TAIL_STATIC(0x52cf60u,52c);
}
B55ac5a:L55ac5a:{c.instructions+=3;NFSU2_TR(0x55ac5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55ac5d:{NFSU2_TR(0x55ac5d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55ac5f:{NFSU2_TR(0x55ac5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ac8e;}}
}
B55ac61:L55ac61:{c.instructions+=4;NFSU2_TR(0x55ac61);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55ac67:{NFSU2_TR(0x55ac67);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ac69:{NFSU2_TR(0x55ac69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ac6c:{NFSU2_TR(0x55ac6c);
if(r1(R+518)){{goto L55ac8e;}}
}
B55ac6e:L55ac6e:{c.instructions+=4;NFSU2_TR(0x55ac6e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ac70:{NFSU2_TR(0x55ac70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac71:{NFSU2_TR(0x55ac71);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac76:{NFSU2_TR(0x55ac76);
if(r1(R+518)){{goto L55ac82;}}
}
B55ac78:L55ac78:{c.instructions+=4;NFSU2_TR(0x55ac78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac79:{NFSU2_TR(0x55ac79);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac7e:{NFSU2_TR(0x55ac7e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac80:{NFSU2_TR(0x55ac80);
{goto L55ac89;}
}
B55ac82:L55ac82:{c.instructions+=3;NFSU2_TR(0x55ac82);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac83:{NFSU2_TR(0x55ac83);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac88:{NFSU2_TR(0x55ac88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac89:L55ac89:{c.instructions+=1;NFSU2_TR(0x55ac89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ac8eull));
TAIL_STATIC(0x555d00u,555);
}
B55ac8e:L55ac8e:{c.instructions+=5;NFSU2_TR(0x55ac8e);
__builtin_memmove((R+0),gp(0x8384d8),4);
}
B55ac93:{NFSU2_TR(0x55ac93);
__builtin_memmove((R+4),(R+0),4);
}
B55ac95:{NFSU2_TR(0x55ac95);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ac97:{NFSU2_TR(0x55ac97);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55ac9b:{NFSU2_TR(0x55ac9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55aca0ull));
TAIL_STATIC(0x542990u,542);
}
B55aca0:L55aca0:{c.instructions+=6;NFSU2_TR(0x55aca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55aca3:{NFSU2_TR(0x55aca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55aca6:{NFSU2_TR(0x55aca6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aca7:{NFSU2_TR(0x55aca7);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B55acad:{NFSU2_TR(0x55acad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55acae:{NFSU2_TR(0x55acae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55acb3ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B55acb3:L55acb3:{c.instructions+=13;NFSU2_TR(0x55acb3);
__builtin_memmove((R+0),gp(0x83a648),4);
}
B55acb8:{NFSU2_TR(0x55acb8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B55acb9:{NFSU2_TR(0x55acb9);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B55acbb:{NFSU2_TR(0x55acbb);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B55acc1:{NFSU2_TR(0x55acc1);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B55acc3:{NFSU2_TR(0x55acc3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
}
B55acc6:{NFSU2_TR(0x55acc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55accc:{NFSU2_TR(0x55accc);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B55acd2:{NFSU2_TR(0x55acd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55acd8:{NFSU2_TR(0x55acd8);
__builtin_memmove((R+4),(R+24),4);
}
B55acda:{NFSU2_TR(0x55acda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55acdd:{NFSU2_TR(0x55acdd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x149ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55ace3:{NFSU2_TR(0x55ace3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ace8ull));
TAIL_STATIC(0x557780u,557);
}
B55ace8:L55ace8:{c.instructions+=8;NFSU2_TR(0x55ace8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55aceb:{NFSU2_TR(0x55aceb);
__builtin_memmove((R+0),(R+24),4);
}
B55aced:{NFSU2_TR(0x55aced);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55acee:{NFSU2_TR(0x55acee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55acef:{NFSU2_TR(0x55acef);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55acf6:{NFSU2_TR(0x55acf6);
__builtin_memmove((R+16),(R+20),4);
}
B55acf8:{NFSU2_TR(0x55acf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55acf9:{NFSU2_TR(0x55acf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55ad00:L55ad00:{c.instructions+=3;NFSU2_TR(0x55ad00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ad01:{NFSU2_TR(0x55ad01);
__builtin_memmove((R+24),(R+4),4);
}
B55ad03:{NFSU2_TR(0x55ad03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ad08ull));
{goto L55ad20;}
}
B55ad08:L55ad08:{c.instructions+=2;NFSU2_TR(0x55ad08);
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
B55ad0d:{NFSU2_TR(0x55ad0d);
if(r1(R+518)){{goto L55ad18;}}
}
B55ad0f:L55ad0f:{c.instructions+=2;NFSU2_TR(0x55ad0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ad10:{NFSU2_TR(0x55ad10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ad15ull));
TAIL_STATIC(0x575630u,575);
}
B55ad15:L55ad15:{c.instructions+=1;NFSU2_TR(0x55ad15);
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
B55ad18:L55ad18:{c.instructions+=3;NFSU2_TR(0x55ad18);
__builtin_memmove((R+0),(R+24),4);
}
B55ad1a:{NFSU2_TR(0x55ad1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55ad1b:{NFSU2_TR(0x55ad1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55ad20:L55ad20:{c.instructions+=13;NFSU2_TR(0x55ad20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ad22:{NFSU2_TR(0x55ad22);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ad27:{NFSU2_TR(0x55ad27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ad2d:{NFSU2_TR(0x55ad2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ad2e:{NFSU2_TR(0x55ad2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ad35:{NFSU2_TR(0x55ad35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ad36:{NFSU2_TR(0x55ad36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ad37:{NFSU2_TR(0x55ad37);
__builtin_memmove((R+24),(R+4),4);
}
B55ad39:{NFSU2_TR(0x55ad39);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ad3d:{NFSU2_TR(0x55ad3d);
u8 U[4];
w4(U+0,u32(0x795cdcull));
s4(u32(r4(R+24)),r4(U+0));
}
B55ad43:{NFSU2_TR(0x55ad43);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B55ad46:{NFSU2_TR(0x55ad46);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55ad4e:{NFSU2_TR(0x55ad4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ad53ull));
TAIL_STATIC(0x4358e0u,435);
}
B55ad53:L55ad53:{c.instructions+=6;NFSU2_TR(0x55ad53);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ad57:{NFSU2_TR(0x55ad57);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B55ad5d:{NFSU2_TR(0x55ad5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55ad5e:{NFSU2_TR(0x55ad5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ad65:{NFSU2_TR(0x55ad65);
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
B55ad68:{NFSU2_TR(0x55ad68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55ad70:L55ad70:{c.instructions+=15;NFSU2_TR(0x55ad70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ad71:{NFSU2_TR(0x55ad71);
__builtin_memmove((R+20),(R+16),4);
}
B55ad73:{NFSU2_TR(0x55ad73);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ad75:{NFSU2_TR(0x55ad75);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ad7a:{NFSU2_TR(0x55ad7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ad80:{NFSU2_TR(0x55ad80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ad81:{NFSU2_TR(0x55ad81);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ad88:{NFSU2_TR(0x55ad88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ad89:{NFSU2_TR(0x55ad89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ad8c:{NFSU2_TR(0x55ad8c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ad8d:{NFSU2_TR(0x55ad8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ad8e:{NFSU2_TR(0x55ad8e);
__builtin_memmove((R+24),(R+4),4);
}
B55ad90:{NFSU2_TR(0x55ad90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ad91:{NFSU2_TR(0x55ad91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ad94:{NFSU2_TR(0x55ad94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ad99ull));
TAIL_STATIC(0x551de0u,551);
}
B55ad99:L55ad99:{c.instructions+=9;NFSU2_TR(0x55ad99);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B55ad9b:{NFSU2_TR(0x55ad9b);
u8 U[4];
w4(U+0,u32(0x79d374ull));
s4(u32(r4(R+24)),r4(U+0));
}
B55ada1:{NFSU2_TR(0x55ada1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55ada4:{NFSU2_TR(0x55ada4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B55ada7:{NFSU2_TR(0x55ada7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55adaa:{NFSU2_TR(0x55adaa);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55adaf:{NFSU2_TR(0x55adaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55adb2:{NFSU2_TR(0x55adb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55adb5:{NFSU2_TR(0x55adb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55adbaull));
TAIL_STATIC(0x52cf60u,52c);
}
B55adba:L55adba:{c.instructions+=3;NFSU2_TR(0x55adba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55adbd:{NFSU2_TR(0x55adbd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55adbf:{NFSU2_TR(0x55adbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55adee;}}
}
B55adc1:L55adc1:{c.instructions+=4;NFSU2_TR(0x55adc1);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55adc7:{NFSU2_TR(0x55adc7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55adc9:{NFSU2_TR(0x55adc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55adcc:{NFSU2_TR(0x55adcc);
if(r1(R+518)){{goto L55adee;}}
}
B55adce:L55adce:{c.instructions+=4;NFSU2_TR(0x55adce);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55add0:{NFSU2_TR(0x55add0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55add1:{NFSU2_TR(0x55add1);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55add6:{NFSU2_TR(0x55add6);
if(r1(R+518)){{goto L55ade2;}}
}
B55add8:L55add8:{c.instructions+=4;NFSU2_TR(0x55add8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55add9:{NFSU2_TR(0x55add9);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55adde:{NFSU2_TR(0x55adde);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ade0:{NFSU2_TR(0x55ade0);
{goto L55ade9;}
}
B55ade2:L55ade2:{c.instructions+=3;NFSU2_TR(0x55ade2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ade3:{NFSU2_TR(0x55ade3);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ade8:{NFSU2_TR(0x55ade8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ade9:L55ade9:{c.instructions+=1;NFSU2_TR(0x55ade9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55adeeull));
TAIL_STATIC(0x555d00u,555);
}
B55adee:L55adee:{c.instructions+=5;NFSU2_TR(0x55adee);
__builtin_memmove((R+0),gp(0x8384d8),4);
}
B55adf3:{NFSU2_TR(0x55adf3);
__builtin_memmove((R+4),(R+0),4);
}
B55adf5:{NFSU2_TR(0x55adf5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55adf7:{NFSU2_TR(0x55adf7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55adfb:{NFSU2_TR(0x55adfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ae00ull));
TAIL_STATIC(0x542990u,542);
}
B55ae00:L55ae00:{c.instructions+=6;NFSU2_TR(0x55ae00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ae03:{NFSU2_TR(0x55ae03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55ae06:{NFSU2_TR(0x55ae06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ae07:{NFSU2_TR(0x55ae07);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B55ae0d:{NFSU2_TR(0x55ae0d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ae0e:{NFSU2_TR(0x55ae0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ae13ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B55ae13:L55ae13:{c.instructions+=5;NFSU2_TR(0x55ae13);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B55ae18:{NFSU2_TR(0x55ae18);
__builtin_memmove(gp(0x838528),(R+12),1);
}
B55ae1e:{NFSU2_TR(0x55ae1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ae21:{NFSU2_TR(0x55ae21);
u8 U[8];
__builtin_memmove((U+0),gp(0x83a644),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ae27:{NFSU2_TR(0x55ae27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ae80;}}
}
B55ae29:L55ae29:{c.instructions+=4;NFSU2_TR(0x55ae29);
__builtin_memmove((R+0),gp(0x83a7a0),4);
}
B55ae2e:{NFSU2_TR(0x55ae2e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ae30:{NFSU2_TR(0x55ae30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ae31:{NFSU2_TR(0x55ae31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ae3a;}}
}
B55ae33:L55ae33:{c.instructions+=2;NFSU2_TR(0x55ae33);
w4(R+28,u32(0x1ull));
}
B55ae38:{NFSU2_TR(0x55ae38);
{goto L55ae60;}
}
B55ae3a:L55ae3a:{c.instructions+=2;NFSU2_TR(0x55ae3a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ae3d:{NFSU2_TR(0x55ae3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ae46;}}
}
B55ae3f:L55ae3f:{c.instructions+=2;NFSU2_TR(0x55ae3f);
w4(R+28,u32(0x2ull));
}
B55ae44:{NFSU2_TR(0x55ae44);
{goto L55ae60;}
}
B55ae46:L55ae46:{c.instructions+=2;NFSU2_TR(0x55ae46);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ae49:{NFSU2_TR(0x55ae49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55ae52;}}
}
B55ae4b:L55ae4b:{c.instructions+=2;NFSU2_TR(0x55ae4b);
w4(R+28,u32(0x4ull));
}
B55ae50:{NFSU2_TR(0x55ae50);
{goto L55ae60;}
}
B55ae52:L55ae52:{c.instructions+=6;NFSU2_TR(0x55ae52);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B55ae54:{NFSU2_TR(0x55ae54);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ae57:{NFSU2_TR(0x55ae57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B55ae5a:{NFSU2_TR(0x55ae5a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B55ae5b:{NFSU2_TR(0x55ae5b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8ull))));
}
B55ae5e:{NFSU2_TR(0x55ae5e);
__builtin_memmove((R+28),(R+4),4);
}
B55ae60:L55ae60:{c.instructions+=3;NFSU2_TR(0x55ae60);
__builtin_memmove((R+8),gp(0x7fa228),4);
}
B55ae66:{NFSU2_TR(0x55ae66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ae67:{NFSU2_TR(0x55ae67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ae6cull));
TAIL_STATIC(0x52cef0u,52c);
}
B55ae6c:L55ae6c:{c.instructions+=3;NFSU2_TR(0x55ae6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55ae6f:{NFSU2_TR(0x55ae6f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55ae71:{NFSU2_TR(0x55ae71);
if(r1(R+518)){{goto L55ae7f;}}
}
B55ae73:L55ae73:{c.instructions+=4;NFSU2_TR(0x55ae73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ae76:{NFSU2_TR(0x55ae76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ae79:{NFSU2_TR(0x55ae79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ae7c:{NFSU2_TR(0x55ae7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ae7f:L55ae7f:{c.instructions+=1;NFSU2_TR(0x55ae7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55ae80:L55ae80:{c.instructions+=2;NFSU2_TR(0x55ae80);
__builtin_memmove((R+4),(R+24),4);
}
B55ae82:{NFSU2_TR(0x55ae82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ae87ull));
TAIL_STATIC(0x5578c0u,557);
}
B55ae87:L55ae87:{c.instructions+=8;NFSU2_TR(0x55ae87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ae8a:{NFSU2_TR(0x55ae8a);
__builtin_memmove((R+0),(R+24),4);
}
B55ae8c:{NFSU2_TR(0x55ae8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55ae8d:{NFSU2_TR(0x55ae8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55ae8e:{NFSU2_TR(0x55ae8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55ae95:{NFSU2_TR(0x55ae95);
__builtin_memmove((R+16),(R+20),4);
}
B55ae97:{NFSU2_TR(0x55ae97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55ae98:{NFSU2_TR(0x55ae98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55aea0:L55aea0:{c.instructions+=3;NFSU2_TR(0x55aea0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aea1:{NFSU2_TR(0x55aea1);
__builtin_memmove((R+24),(R+4),4);
}
B55aea3:{NFSU2_TR(0x55aea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55aea8ull));
{goto L55aec0;}
}
B55aea8:L55aea8:{c.instructions+=2;NFSU2_TR(0x55aea8);
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
B55aead:{NFSU2_TR(0x55aead);
if(r1(R+518)){{goto L55aeb8;}}
}
B55aeaf:L55aeaf:{c.instructions+=2;NFSU2_TR(0x55aeaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aeb0:{NFSU2_TR(0x55aeb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55aeb5ull));
TAIL_STATIC(0x575630u,575);
}
B55aeb5:L55aeb5:{c.instructions+=1;NFSU2_TR(0x55aeb5);
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
B55aeb8:L55aeb8:{c.instructions+=3;NFSU2_TR(0x55aeb8);
__builtin_memmove((R+0),(R+24),4);
}
B55aeba:{NFSU2_TR(0x55aeba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55aebb:{NFSU2_TR(0x55aebb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55aec0:L55aec0:{c.instructions+=14;NFSU2_TR(0x55aec0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aec2:{NFSU2_TR(0x55aec2);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aec7:{NFSU2_TR(0x55aec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55aecd:{NFSU2_TR(0x55aecd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aece:{NFSU2_TR(0x55aece);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55aed5:{NFSU2_TR(0x55aed5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aed6:{NFSU2_TR(0x55aed6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aed7:{NFSU2_TR(0x55aed7);
__builtin_memmove((R+24),(R+4),4);
}
B55aed9:{NFSU2_TR(0x55aed9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55aedd:{NFSU2_TR(0x55aedd);
u8 U[4];
w4(U+0,u32(0x79d374ull));
s4(u32(r4(R+24)),r4(U+0));
}
B55aee3:{NFSU2_TR(0x55aee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55aee6:{NFSU2_TR(0x55aee6);
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
B55aee8:{NFSU2_TR(0x55aee8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55aef0:{NFSU2_TR(0x55aef0);
if(r1(R+518)){{goto L55aeff;}}
}
B55aef2:L55aef2:{c.instructions+=3;NFSU2_TR(0x55aef2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55aef4:{NFSU2_TR(0x55aef4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55aef6:{NFSU2_TR(0x55aef6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55aef8ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B55aef8:L55aef8:{c.instructions+=1;NFSU2_TR(0x55aef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55aeff:L55aeff:{c.instructions+=6;NFSU2_TR(0x55aeff);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55af03:{NFSU2_TR(0x55af03);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B55af09:{NFSU2_TR(0x55af09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55af0a:{NFSU2_TR(0x55af0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55af11:{NFSU2_TR(0x55af11);
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
B55af14:{NFSU2_TR(0x55af14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55af20:L55af20:{c.instructions+=8;NFSU2_TR(0x55af20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55af22:{NFSU2_TR(0x55af22);
u8 U[4];
w4(U+0,u32(0x778334ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55af27:{NFSU2_TR(0x55af27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55af2d:{NFSU2_TR(0x55af2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55af2e:{NFSU2_TR(0x55af2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55af35:{NFSU2_TR(0x55af35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55af36:{NFSU2_TR(0x55af36);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55af38:{NFSU2_TR(0x55af38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55af3dull));
TAIL_STATIC(0x575620u,575);
}
B55af3d:L55af3d:{c.instructions+=5;NFSU2_TR(0x55af3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55af40:{NFSU2_TR(0x55af40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B55af44:{NFSU2_TR(0x55af44);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55af46:{NFSU2_TR(0x55af46);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55af4e:{NFSU2_TR(0x55af4e);
if(r1(R+518)){{goto L55af6b;}}
}
B55af50:L55af50:{c.instructions+=4;NFSU2_TR(0x55af50);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55af54:{NFSU2_TR(0x55af54);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55af55:{NFSU2_TR(0x55af55);
__builtin_memmove((R+4),(R+0),4);
}
B55af57:{NFSU2_TR(0x55af57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55af5cull));
TAIL_STATIC(0x557a10u,557);
}
B55af5c:L55af5c:{c.instructions+=4;NFSU2_TR(0x55af5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55af60:{NFSU2_TR(0x55af60);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55af67:{NFSU2_TR(0x55af67);
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
B55af6a:{NFSU2_TR(0x55af6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55af6b:L55af6b:{c.instructions+=5;NFSU2_TR(0x55af6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55af6f:{NFSU2_TR(0x55af6f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55af71:{NFSU2_TR(0x55af71);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55af78:{NFSU2_TR(0x55af78);
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
B55af7b:{NFSU2_TR(0x55af7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55af80:L55af80:{c.instructions+=8;NFSU2_TR(0x55af80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55af82:{NFSU2_TR(0x55af82);
u8 U[4];
w4(U+0,u32(0x778354ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55af87:{NFSU2_TR(0x55af87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55af8d:{NFSU2_TR(0x55af8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55af8e:{NFSU2_TR(0x55af8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55af95:{NFSU2_TR(0x55af95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55af96:{NFSU2_TR(0x55af96);
u8 U[4];
w4(U+0,u32(0x120ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55af9b:{NFSU2_TR(0x55af9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55afa0ull));
TAIL_STATIC(0x575620u,575);
}
B55afa0:L55afa0:{c.instructions+=5;NFSU2_TR(0x55afa0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55afa3:{NFSU2_TR(0x55afa3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B55afa7:{NFSU2_TR(0x55afa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55afa9:{NFSU2_TR(0x55afa9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55afb1:{NFSU2_TR(0x55afb1);
if(r1(R+518)){{goto L55afce;}}
}
B55afb3:L55afb3:{c.instructions+=4;NFSU2_TR(0x55afb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55afb7:{NFSU2_TR(0x55afb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55afb8:{NFSU2_TR(0x55afb8);
__builtin_memmove((R+4),(R+0),4);
}
B55afba:{NFSU2_TR(0x55afba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55afbfull));
TAIL_STATIC(0x557bd0u,557);
}
B55afbf:L55afbf:{c.instructions+=4;NFSU2_TR(0x55afbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55afc3:{NFSU2_TR(0x55afc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55afca:{NFSU2_TR(0x55afca);
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
B55afcd:{NFSU2_TR(0x55afcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55afce:L55afce:{c.instructions+=5;NFSU2_TR(0x55afce);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55afd2:{NFSU2_TR(0x55afd2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55afd4:{NFSU2_TR(0x55afd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55afdb:{NFSU2_TR(0x55afdb);
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
B55afde:{NFSU2_TR(0x55afde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55afe0:L55afe0:{c.instructions+=9;NFSU2_TR(0x55afe0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55afe1:{NFSU2_TR(0x55afe1);
__builtin_memmove((R+20),(R+16),4);
}
B55afe3:{NFSU2_TR(0x55afe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55afe6:{NFSU2_TR(0x55afe6);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc3960eb9ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc3960eb9ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55afeb:{NFSU2_TR(0x55afeb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55afec:{NFSU2_TR(0x55afec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55afed:{NFSU2_TR(0x55afed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55afee:{NFSU2_TR(0x55afee);
__builtin_memmove((R+24),(R+4),4);
}
B55aff0:{NFSU2_TR(0x55aff0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x55b096u,55b);}
}
B55aff6:L55aff6:{c.instructions+=1;NFSU2_TR(0x55aff6);
if(r1(R+518)){TAIL_STATIC(0x55b01eu,55b);}
}
B55aff8:L55aff8:{c.instructions+=2;NFSU2_TR(0x55aff8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55affd:{NFSU2_TR(0x55affd);
if(r1(R+518)){TAIL_STATIC(0x55b00au,55b);}
}
B55afff:L55afff:{c.instructions+=1;NFSU2_TR(0x55afff);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5af2461ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5af2461ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5af2461ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
TAIL_STATIC(0x55b004u,55b);
}
XIT:NFSU2_TR_EXIT(0x55a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
