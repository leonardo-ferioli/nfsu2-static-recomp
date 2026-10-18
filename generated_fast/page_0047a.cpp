#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_46a(u8* __restrict R,Cpu& c);
u32 body_46b(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_47b(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_721(u8* __restrict R,Cpu& c);
u32 body_724(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_739(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x47a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x47a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_47a(u8* __restrict R,Cpu& c);
u32 page_47a(Cpu& c){return body_47a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_47a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x47a004:goto L47a004;
case 0x47a007:c.instructions+=2;goto B47a007;
case 0x47a00a:c.instructions+=1;goto B47a00a;
case 0x47a010:goto L47a010;
case 0x47a017:goto L47a017;
case 0x47a01c:c.instructions+=7;goto B47a01c;
case 0x47a020:c.instructions+=6;goto B47a020;
case 0x47a021:c.instructions+=5;goto B47a021;
case 0x47a026:c.instructions+=4;goto B47a026;
case 0x47a028:c.instructions+=3;goto B47a028;
case 0x47a02e:c.instructions+=2;goto B47a02e;
case 0x47a030:c.instructions+=1;goto B47a030;
case 0x47a035:goto L47a035;
case 0x47a037:c.instructions+=1;goto B47a037;
case 0x47a039:goto L47a039;
case 0x47a03b:c.instructions+=1;goto B47a03b;
case 0x47a03d:goto L47a03d;
case 0x47a040:c.instructions+=1;goto B47a040;
case 0x47a042:goto L47a042;
case 0x47a047:goto L47a047;
case 0x47a04e:c.instructions+=2;goto B47a04e;
case 0x47a054:c.instructions+=1;goto B47a054;
case 0x47a059:goto L47a059;
case 0x47a05c:c.instructions+=6;goto B47a05c;
case 0x47a05e:c.instructions+=5;goto B47a05e;
case 0x47a060:c.instructions+=4;goto B47a060;
case 0x47a065:c.instructions+=3;goto B47a065;
case 0x47a066:c.instructions+=2;goto B47a066;
case 0x47a06c:c.instructions+=1;goto B47a06c;
case 0x47a071:goto L47a071;
case 0x47a076:c.instructions+=7;goto B47a076;
case 0x47a07a:c.instructions+=6;goto B47a07a;
case 0x47a07b:c.instructions+=5;goto B47a07b;
case 0x47a080:c.instructions+=4;goto B47a080;
case 0x47a082:c.instructions+=3;goto B47a082;
case 0x47a088:c.instructions+=2;goto B47a088;
case 0x47a08a:c.instructions+=1;goto B47a08a;
case 0x47a08f:goto L47a08f;
case 0x47a091:c.instructions+=1;goto B47a091;
case 0x47a093:goto L47a093;
case 0x47a095:c.instructions+=1;goto B47a095;
case 0x47a097:goto L47a097;
case 0x47a09a:c.instructions+=1;goto B47a09a;
case 0x47a09c:goto L47a09c;
case 0x47a0a1:goto L47a0a1;
case 0x47a0a8:c.instructions+=2;goto B47a0a8;
case 0x47a0ae:c.instructions+=1;goto B47a0ae;
case 0x47a0b3:goto L47a0b3;
case 0x47a0b6:c.instructions+=6;goto B47a0b6;
case 0x47a0b8:c.instructions+=5;goto B47a0b8;
case 0x47a0ba:c.instructions+=4;goto B47a0ba;
case 0x47a0bf:c.instructions+=3;goto B47a0bf;
case 0x47a0c0:c.instructions+=2;goto B47a0c0;
case 0x47a0c6:c.instructions+=1;goto B47a0c6;
case 0x47a0cb:goto L47a0cb;
case 0x47a0d0:c.instructions+=7;goto B47a0d0;
case 0x47a0d4:c.instructions+=6;goto B47a0d4;
case 0x47a0d5:c.instructions+=5;goto B47a0d5;
case 0x47a0da:c.instructions+=4;goto B47a0da;
case 0x47a0dc:c.instructions+=3;goto B47a0dc;
case 0x47a0e2:c.instructions+=2;goto B47a0e2;
case 0x47a0e4:c.instructions+=1;goto B47a0e4;
case 0x47a0e9:goto L47a0e9;
case 0x47a0eb:c.instructions+=1;goto B47a0eb;
case 0x47a0ed:goto L47a0ed;
case 0x47a0ef:c.instructions+=1;goto B47a0ef;
case 0x47a0f1:goto L47a0f1;
case 0x47a0f4:c.instructions+=1;goto B47a0f4;
case 0x47a0f6:goto L47a0f6;
case 0x47a0fb:goto L47a0fb;
case 0x47a102:c.instructions+=2;goto B47a102;
case 0x47a108:c.instructions+=1;goto B47a108;
case 0x47a10d:goto L47a10d;
case 0x47a110:c.instructions+=6;goto B47a110;
case 0x47a112:c.instructions+=5;goto B47a112;
case 0x47a114:c.instructions+=4;goto B47a114;
case 0x47a117:c.instructions+=3;goto B47a117;
case 0x47a118:c.instructions+=2;goto B47a118;
case 0x47a11e:c.instructions+=1;goto B47a11e;
case 0x47a123:goto L47a123;
case 0x47a128:c.instructions+=7;goto B47a128;
case 0x47a12c:c.instructions+=6;goto B47a12c;
case 0x47a12d:c.instructions+=5;goto B47a12d;
case 0x47a132:c.instructions+=4;goto B47a132;
case 0x47a134:c.instructions+=3;goto B47a134;
case 0x47a13a:c.instructions+=2;goto B47a13a;
case 0x47a13c:c.instructions+=1;goto B47a13c;
case 0x47a141:goto L47a141;
case 0x47a143:c.instructions+=1;goto B47a143;
case 0x47a145:goto L47a145;
case 0x47a147:c.instructions+=1;goto B47a147;
case 0x47a149:goto L47a149;
case 0x47a14c:c.instructions+=1;goto B47a14c;
case 0x47a14e:goto L47a14e;
case 0x47a153:goto L47a153;
case 0x47a15a:c.instructions+=2;goto B47a15a;
case 0x47a160:c.instructions+=1;goto B47a160;
case 0x47a165:goto L47a165;
case 0x47a168:c.instructions+=6;goto B47a168;
case 0x47a16a:c.instructions+=5;goto B47a16a;
case 0x47a16c:c.instructions+=4;goto B47a16c;
case 0x47a171:c.instructions+=3;goto B47a171;
case 0x47a172:c.instructions+=2;goto B47a172;
case 0x47a178:c.instructions+=1;goto B47a178;
case 0x47a17d:goto L47a17d;
case 0x47a182:c.instructions+=7;goto B47a182;
case 0x47a186:c.instructions+=6;goto B47a186;
case 0x47a187:c.instructions+=5;goto B47a187;
case 0x47a18c:c.instructions+=4;goto B47a18c;
case 0x47a18e:c.instructions+=3;goto B47a18e;
case 0x47a194:c.instructions+=2;goto B47a194;
case 0x47a196:c.instructions+=1;goto B47a196;
case 0x47a19b:goto L47a19b;
case 0x47a19d:c.instructions+=1;goto B47a19d;
case 0x47a19f:goto L47a19f;
case 0x47a1a1:c.instructions+=1;goto B47a1a1;
case 0x47a1a3:goto L47a1a3;
case 0x47a1a6:c.instructions+=1;goto B47a1a6;
case 0x47a1a8:goto L47a1a8;
case 0x47a1ad:goto L47a1ad;
case 0x47a1b4:c.instructions+=2;goto B47a1b4;
case 0x47a1ba:c.instructions+=1;goto B47a1ba;
case 0x47a1bf:goto L47a1bf;
case 0x47a1c2:c.instructions+=6;goto B47a1c2;
case 0x47a1c4:c.instructions+=5;goto B47a1c4;
case 0x47a1c6:c.instructions+=4;goto B47a1c6;
case 0x47a1cb:c.instructions+=3;goto B47a1cb;
case 0x47a1cc:c.instructions+=2;goto B47a1cc;
case 0x47a1d2:c.instructions+=1;goto B47a1d2;
case 0x47a1d7:goto L47a1d7;
case 0x47a1dc:c.instructions+=7;goto B47a1dc;
case 0x47a1e0:c.instructions+=6;goto B47a1e0;
case 0x47a1e1:c.instructions+=5;goto B47a1e1;
case 0x47a1e6:c.instructions+=4;goto B47a1e6;
case 0x47a1e8:c.instructions+=3;goto B47a1e8;
case 0x47a1ee:c.instructions+=2;goto B47a1ee;
case 0x47a1f0:c.instructions+=1;goto B47a1f0;
case 0x47a1f5:goto L47a1f5;
case 0x47a1f7:c.instructions+=1;goto B47a1f7;
case 0x47a1f9:goto L47a1f9;
case 0x47a1fb:c.instructions+=1;goto B47a1fb;
case 0x47a1fd:goto L47a1fd;
case 0x47a200:c.instructions+=1;goto B47a200;
case 0x47a202:goto L47a202;
case 0x47a207:goto L47a207;
case 0x47a20e:c.instructions+=2;goto B47a20e;
case 0x47a214:c.instructions+=1;goto B47a214;
case 0x47a219:goto L47a219;
case 0x47a21c:c.instructions+=6;goto B47a21c;
case 0x47a21e:c.instructions+=5;goto B47a21e;
case 0x47a220:c.instructions+=4;goto B47a220;
case 0x47a225:c.instructions+=3;goto B47a225;
case 0x47a226:c.instructions+=2;goto B47a226;
case 0x47a22c:c.instructions+=1;goto B47a22c;
case 0x47a231:goto L47a231;
case 0x47a236:c.instructions+=7;goto B47a236;
case 0x47a23a:c.instructions+=6;goto B47a23a;
case 0x47a23b:c.instructions+=5;goto B47a23b;
case 0x47a240:c.instructions+=4;goto B47a240;
case 0x47a242:c.instructions+=3;goto B47a242;
case 0x47a248:c.instructions+=2;goto B47a248;
case 0x47a24a:c.instructions+=1;goto B47a24a;
case 0x47a24f:goto L47a24f;
case 0x47a251:c.instructions+=1;goto B47a251;
case 0x47a253:goto L47a253;
case 0x47a255:c.instructions+=1;goto B47a255;
case 0x47a257:goto L47a257;
case 0x47a25a:c.instructions+=1;goto B47a25a;
case 0x47a25c:goto L47a25c;
case 0x47a261:goto L47a261;
case 0x47a268:c.instructions+=2;goto B47a268;
case 0x47a26e:c.instructions+=1;goto B47a26e;
case 0x47a273:goto L47a273;
case 0x47a276:c.instructions+=6;goto B47a276;
case 0x47a278:c.instructions+=5;goto B47a278;
case 0x47a27a:c.instructions+=4;goto B47a27a;
case 0x47a27f:c.instructions+=3;goto B47a27f;
case 0x47a280:c.instructions+=2;goto B47a280;
case 0x47a286:c.instructions+=1;goto B47a286;
case 0x47a28b:goto L47a28b;
case 0x47a290:c.instructions+=7;goto B47a290;
case 0x47a294:c.instructions+=6;goto B47a294;
case 0x47a295:c.instructions+=5;goto B47a295;
case 0x47a29a:c.instructions+=4;goto B47a29a;
case 0x47a29c:c.instructions+=3;goto B47a29c;
case 0x47a2a2:c.instructions+=2;goto B47a2a2;
case 0x47a2a4:c.instructions+=1;goto B47a2a4;
case 0x47a2a9:goto L47a2a9;
case 0x47a2ab:c.instructions+=1;goto B47a2ab;
case 0x47a2ad:goto L47a2ad;
case 0x47a2af:c.instructions+=1;goto B47a2af;
case 0x47a2b1:goto L47a2b1;
case 0x47a2b4:c.instructions+=1;goto B47a2b4;
case 0x47a2b6:goto L47a2b6;
case 0x47a2bb:goto L47a2bb;
case 0x47a2c2:c.instructions+=2;goto B47a2c2;
case 0x47a2c8:c.instructions+=1;goto B47a2c8;
case 0x47a2cd:goto L47a2cd;
case 0x47a2d0:c.instructions+=6;goto B47a2d0;
case 0x47a2d2:c.instructions+=5;goto B47a2d2;
case 0x47a2d4:c.instructions+=4;goto B47a2d4;
case 0x47a2d9:c.instructions+=3;goto B47a2d9;
case 0x47a2da:c.instructions+=2;goto B47a2da;
case 0x47a2e0:c.instructions+=1;goto B47a2e0;
case 0x47a2e5:goto L47a2e5;
case 0x47a2ea:c.instructions+=7;goto B47a2ea;
case 0x47a2ee:c.instructions+=6;goto B47a2ee;
case 0x47a2ef:c.instructions+=5;goto B47a2ef;
case 0x47a2f4:c.instructions+=4;goto B47a2f4;
case 0x47a2f6:c.instructions+=3;goto B47a2f6;
case 0x47a2fc:c.instructions+=2;goto B47a2fc;
case 0x47a2fe:c.instructions+=1;goto B47a2fe;
case 0x47a303:goto L47a303;
case 0x47a305:c.instructions+=1;goto B47a305;
case 0x47a307:goto L47a307;
case 0x47a309:c.instructions+=1;goto B47a309;
case 0x47a30b:goto L47a30b;
case 0x47a30e:c.instructions+=1;goto B47a30e;
case 0x47a310:goto L47a310;
case 0x47a315:goto L47a315;
case 0x47a31c:c.instructions+=2;goto B47a31c;
case 0x47a322:c.instructions+=1;goto B47a322;
case 0x47a327:goto L47a327;
case 0x47a32a:c.instructions+=6;goto B47a32a;
case 0x47a32c:c.instructions+=5;goto B47a32c;
case 0x47a32e:c.instructions+=4;goto B47a32e;
case 0x47a333:c.instructions+=3;goto B47a333;
case 0x47a334:c.instructions+=2;goto B47a334;
case 0x47a33a:c.instructions+=1;goto B47a33a;
case 0x47a33f:goto L47a33f;
case 0x47a344:c.instructions+=7;goto B47a344;
case 0x47a348:c.instructions+=6;goto B47a348;
case 0x47a349:c.instructions+=5;goto B47a349;
case 0x47a34e:c.instructions+=4;goto B47a34e;
case 0x47a350:c.instructions+=3;goto B47a350;
case 0x47a356:c.instructions+=2;goto B47a356;
case 0x47a358:c.instructions+=1;goto B47a358;
case 0x47a35d:goto L47a35d;
case 0x47a35f:c.instructions+=1;goto B47a35f;
case 0x47a361:goto L47a361;
case 0x47a363:c.instructions+=1;goto B47a363;
case 0x47a365:goto L47a365;
case 0x47a368:c.instructions+=1;goto B47a368;
case 0x47a36a:goto L47a36a;
case 0x47a36f:goto L47a36f;
case 0x47a376:c.instructions+=2;goto B47a376;
case 0x47a37c:c.instructions+=1;goto B47a37c;
case 0x47a381:goto L47a381;
case 0x47a384:c.instructions+=6;goto B47a384;
case 0x47a386:c.instructions+=5;goto B47a386;
case 0x47a388:c.instructions+=4;goto B47a388;
case 0x47a38d:c.instructions+=3;goto B47a38d;
case 0x47a38e:c.instructions+=2;goto B47a38e;
case 0x47a394:c.instructions+=1;goto B47a394;
case 0x47a399:goto L47a399;
case 0x47a39e:c.instructions+=7;goto B47a39e;
case 0x47a3a2:c.instructions+=6;goto B47a3a2;
case 0x47a3a3:c.instructions+=5;goto B47a3a3;
case 0x47a3a8:c.instructions+=4;goto B47a3a8;
case 0x47a3aa:c.instructions+=3;goto B47a3aa;
case 0x47a3b0:c.instructions+=2;goto B47a3b0;
case 0x47a3b2:c.instructions+=1;goto B47a3b2;
case 0x47a3b7:goto L47a3b7;
case 0x47a3b9:c.instructions+=1;goto B47a3b9;
case 0x47a3bb:goto L47a3bb;
case 0x47a3bd:c.instructions+=1;goto B47a3bd;
case 0x47a3bf:goto L47a3bf;
case 0x47a3c2:c.instructions+=1;goto B47a3c2;
case 0x47a3c4:goto L47a3c4;
case 0x47a3c9:goto L47a3c9;
case 0x47a3d0:c.instructions+=2;goto B47a3d0;
case 0x47a3d6:c.instructions+=1;goto B47a3d6;
case 0x47a3db:goto L47a3db;
case 0x47a3de:c.instructions+=6;goto B47a3de;
case 0x47a3e0:c.instructions+=5;goto B47a3e0;
case 0x47a3e2:c.instructions+=4;goto B47a3e2;
case 0x47a3e5:c.instructions+=3;goto B47a3e5;
case 0x47a3e6:c.instructions+=2;goto B47a3e6;
case 0x47a3ec:c.instructions+=1;goto B47a3ec;
case 0x47a3f1:goto L47a3f1;
case 0x47a3f6:c.instructions+=7;goto B47a3f6;
case 0x47a3fa:c.instructions+=6;goto B47a3fa;
case 0x47a3fb:c.instructions+=5;goto B47a3fb;
case 0x47a400:c.instructions+=4;goto B47a400;
case 0x47a402:c.instructions+=3;goto B47a402;
case 0x47a408:c.instructions+=2;goto B47a408;
case 0x47a40a:c.instructions+=1;goto B47a40a;
case 0x47a40f:goto L47a40f;
case 0x47a411:c.instructions+=1;goto B47a411;
case 0x47a413:goto L47a413;
case 0x47a415:c.instructions+=1;goto B47a415;
case 0x47a417:goto L47a417;
case 0x47a41a:c.instructions+=1;goto B47a41a;
case 0x47a41c:goto L47a41c;
case 0x47a421:goto L47a421;
case 0x47a428:c.instructions+=2;goto B47a428;
case 0x47a42e:c.instructions+=1;goto B47a42e;
case 0x47a433:goto L47a433;
case 0x47a436:c.instructions+=6;goto B47a436;
case 0x47a438:c.instructions+=5;goto B47a438;
case 0x47a43a:c.instructions+=4;goto B47a43a;
case 0x47a43f:c.instructions+=3;goto B47a43f;
case 0x47a440:c.instructions+=2;goto B47a440;
case 0x47a446:c.instructions+=1;goto B47a446;
case 0x47a448:goto L47a448;
case 0x47a44d:c.instructions+=7;goto B47a44d;
case 0x47a451:c.instructions+=6;goto B47a451;
case 0x47a452:c.instructions+=5;goto B47a452;
case 0x47a457:c.instructions+=4;goto B47a457;
case 0x47a459:c.instructions+=3;goto B47a459;
case 0x47a45f:c.instructions+=2;goto B47a45f;
case 0x47a461:c.instructions+=1;goto B47a461;
case 0x47a466:goto L47a466;
case 0x47a468:c.instructions+=1;goto B47a468;
case 0x47a46a:goto L47a46a;
case 0x47a46c:c.instructions+=1;goto B47a46c;
case 0x47a46e:goto L47a46e;
case 0x47a471:c.instructions+=1;goto B47a471;
case 0x47a473:goto L47a473;
case 0x47a478:goto L47a478;
case 0x47a47f:c.instructions+=2;goto B47a47f;
case 0x47a485:c.instructions+=1;goto B47a485;
case 0x47a48a:goto L47a48a;
case 0x47a48d:c.instructions+=5;goto B47a48d;
case 0x47a48f:c.instructions+=4;goto B47a48f;
case 0x47a491:c.instructions+=3;goto B47a491;
case 0x47a496:c.instructions+=2;goto B47a496;
case 0x47a497:c.instructions+=1;goto B47a497;
case 0x47a49d:goto L47a49d;
case 0x47a4a3:c.instructions+=4;goto B47a4a3;
case 0x47a4a9:c.instructions+=3;goto B47a4a9;
case 0x47a4aa:c.instructions+=2;goto B47a4aa;
case 0x47a4ad:c.instructions+=1;goto B47a4ad;
case 0x47a4b2:goto L47a4b2;
case 0x47a4b5:c.instructions+=2;goto B47a4b5;
case 0x47a4b6:c.instructions+=1;goto B47a4b6;
case 0x47a550:goto L47a550;
case 0x47a553:c.instructions+=8;goto B47a553;
case 0x47a554:c.instructions+=7;goto B47a554;
case 0x47a556:c.instructions+=6;goto B47a556;
case 0x47a559:c.instructions+=5;goto B47a559;
case 0x47a55c:c.instructions+=4;goto B47a55c;
case 0x47a55d:c.instructions+=3;goto B47a55d;
case 0x47a55e:c.instructions+=2;goto B47a55e;
case 0x47a562:c.instructions+=1;goto B47a562;
case 0x47a567:goto L47a567;
case 0x47a569:c.instructions+=2;goto B47a569;
case 0x47a56b:c.instructions+=1;goto B47a56b;
case 0x47a56e:goto L47a56e;
case 0x47a572:c.instructions+=4;goto B47a572;
case 0x47a578:c.instructions+=3;goto B47a578;
case 0x47a57e:c.instructions+=2;goto B47a57e;
case 0x47a583:c.instructions+=1;goto B47a583;
case 0x47a587:goto L47a587;
case 0x47a589:goto L47a589;
case 0x47a58d:c.instructions+=12;goto B47a58d;
case 0x47a594:c.instructions+=11;goto B47a594;
case 0x47a598:c.instructions+=10;goto B47a598;
case 0x47a59c:c.instructions+=9;goto B47a59c;
case 0x47a5a0:c.instructions+=8;goto B47a5a0;
case 0x47a5a4:c.instructions+=7;goto B47a5a4;
case 0x47a5a8:c.instructions+=6;goto B47a5a8;
case 0x47a5ac:c.instructions+=5;goto B47a5ac;
case 0x47a5ae:c.instructions+=4;goto B47a5ae;
case 0x47a5b4:c.instructions+=3;goto B47a5b4;
case 0x47a5b6:c.instructions+=2;goto B47a5b6;
case 0x47a5b9:c.instructions+=1;goto B47a5b9;
case 0x47a5bb:goto L47a5bb;
case 0x47a5bf:c.instructions+=2;goto B47a5bf;
case 0x47a5c5:c.instructions+=1;goto B47a5c5;
case 0x47a5c9:goto L47a5c9;
case 0x47a5cd:c.instructions+=4;goto B47a5cd;
case 0x47a5d1:c.instructions+=3;goto B47a5d1;
case 0x47a5d5:c.instructions+=2;goto B47a5d5;
case 0x47a5d9:c.instructions+=1;goto B47a5d9;
case 0x47a5de:goto L47a5de;
case 0x47a5e2:c.instructions+=2;goto B47a5e2;
case 0x47a5e4:c.instructions+=1;goto B47a5e4;
case 0x47a5e6:goto L47a5e6;
case 0x47a5ea:c.instructions+=1;goto B47a5ea;
case 0x47a5ef:goto L47a5ef;
case 0x47a5f3:c.instructions+=2;goto B47a5f3;
case 0x47a5f9:c.instructions+=1;goto B47a5f9;
case 0x47a5fe:goto L47a5fe;
case 0x47a5ff:c.instructions+=5;goto B47a5ff;
case 0x47a600:c.instructions+=4;goto B47a600;
case 0x47a603:c.instructions+=3;goto B47a603;
case 0x47a604:c.instructions+=2;goto B47a604;
case 0x47a607:c.instructions+=1;goto B47a607;
case 0x47a610:goto L47a610;
case 0x47a616:c.instructions+=4;goto B47a616;
case 0x47a618:c.instructions+=3;goto B47a618;
case 0x47a61a:c.instructions+=2;goto B47a61a;
case 0x47a61b:c.instructions+=1;goto B47a61b;
case 0x47a61d:goto L47a61d;
case 0x47a61e:c.instructions+=1;goto B47a61e;
case 0x47a624:goto L47a624;
case 0x47a62a:c.instructions+=2;goto B47a62a;
case 0x47a630:c.instructions+=1;goto B47a630;
case 0x47a632:goto L47a632;
case 0x47a633:c.instructions+=2;goto B47a633;
case 0x47a636:c.instructions+=1;goto B47a636;
case 0x47a637:goto L47a637;
case 0x47a63b:c.instructions+=2;goto B47a63b;
case 0x47a641:c.instructions+=1;goto B47a641;
case 0x47a646:goto L47a646;
case 0x47a648:c.instructions+=1;goto B47a648;
case 0x47a64a:goto L47a64a;
case 0x47a64c:c.instructions+=1;goto B47a64c;
case 0x47a64e:goto L47a64e;
case 0x47a651:c.instructions+=1;goto B47a651;
case 0x47a653:goto L47a653;
case 0x47a658:goto L47a658;
case 0x47a65f:c.instructions+=2;goto B47a65f;
case 0x47a665:c.instructions+=1;goto B47a665;
case 0x47a66a:goto L47a66a;
case 0x47a66d:c.instructions+=7;goto B47a66d;
case 0x47a66f:c.instructions+=6;goto B47a66f;
case 0x47a671:c.instructions+=5;goto B47a671;
case 0x47a673:c.instructions+=4;goto B47a673;
case 0x47a676:c.instructions+=3;goto B47a676;
case 0x47a677:c.instructions+=2;goto B47a677;
case 0x47a67d:c.instructions+=1;goto B47a67d;
case 0x47a67f:goto L47a67f;
case 0x47a685:c.instructions+=2;goto B47a685;
case 0x47a68b:c.instructions+=1;goto B47a68b;
case 0x47a68d:goto L47a68d;
case 0x47a68e:c.instructions+=2;goto B47a68e;
case 0x47a691:c.instructions+=1;goto B47a691;
case 0x47a692:goto L47a692;
case 0x47a696:c.instructions+=2;goto B47a696;
case 0x47a69c:c.instructions+=1;goto B47a69c;
case 0x47a6a1:goto L47a6a1;
case 0x47a6a3:c.instructions+=1;goto B47a6a3;
case 0x47a6a5:goto L47a6a5;
case 0x47a6a7:c.instructions+=1;goto B47a6a7;
case 0x47a6a9:goto L47a6a9;
case 0x47a6ac:c.instructions+=1;goto B47a6ac;
case 0x47a6ae:goto L47a6ae;
case 0x47a6b3:goto L47a6b3;
case 0x47a6ba:c.instructions+=2;goto B47a6ba;
case 0x47a6c0:c.instructions+=1;goto B47a6c0;
case 0x47a6c5:goto L47a6c5;
case 0x47a6c8:c.instructions+=6;goto B47a6c8;
case 0x47a6ca:c.instructions+=5;goto B47a6ca;
case 0x47a6cc:c.instructions+=4;goto B47a6cc;
case 0x47a6ce:c.instructions+=3;goto B47a6ce;
case 0x47a6d1:c.instructions+=2;goto B47a6d1;
case 0x47a6d2:c.instructions+=1;goto B47a6d2;
case 0x47a6d8:goto L47a6d8;
case 0x47a6de:c.instructions+=4;goto B47a6de;
case 0x47a6e4:c.instructions+=3;goto B47a6e4;
case 0x47a6e5:c.instructions+=2;goto B47a6e5;
case 0x47a6e8:c.instructions+=1;goto B47a6e8;
case 0x47a6ed:goto L47a6ed;
case 0x47a6f0:c.instructions+=2;goto B47a6f0;
case 0x47a6f1:c.instructions+=1;goto B47a6f1;
case 0x47a700:goto L47a700;
case 0x47a701:c.instructions+=2;goto B47a701;
case 0x47a703:c.instructions+=1;goto B47a703;
case 0x47a708:goto L47a708;
case 0x47a70e:c.instructions+=2;goto B47a70e;
case 0x47a710:c.instructions+=1;goto B47a710;
case 0x47a712:goto L47a712;
case 0x47a718:c.instructions+=7;goto B47a718;
case 0x47a71e:c.instructions+=6;goto B47a71e;
case 0x47a724:c.instructions+=5;goto B47a724;
case 0x47a72a:c.instructions+=4;goto B47a72a;
case 0x47a730:c.instructions+=3;goto B47a730;
case 0x47a732:c.instructions+=2;goto B47a732;
case 0x47a735:c.instructions+=1;goto B47a735;
case 0x47a737:goto L47a737;
case 0x47a73c:goto L47a73c;
case 0x47a742:c.instructions+=3;goto B47a742;
case 0x47a744:c.instructions+=2;goto B47a744;
case 0x47a747:c.instructions+=1;goto B47a747;
case 0x47a749:goto L47a749;
case 0x47a74c:c.instructions+=5;goto B47a74c;
case 0x47a74f:c.instructions+=4;goto B47a74f;
case 0x47a751:c.instructions+=3;goto B47a751;
case 0x47a754:c.instructions+=2;goto B47a754;
case 0x47a757:c.instructions+=1;goto B47a757;
case 0x47a759:goto L47a759;
case 0x47a760:goto L47a760;
case 0x47a761:c.instructions+=1;goto B47a761;
case 0x47a770:goto L47a770;
case 0x47a776:c.instructions+=2;goto B47a776;
case 0x47a778:c.instructions+=1;goto B47a778;
case 0x47a77a:goto L47a77a;
case 0x47a77d:c.instructions+=2;goto B47a77d;
case 0x47a77f:c.instructions+=1;goto B47a77f;
case 0x47a781:goto L47a781;
case 0x47a785:c.instructions+=1;goto B47a785;
case 0x47a787:goto L47a787;
case 0x47a78b:c.instructions+=4;goto B47a78b;
case 0x47a78e:c.instructions+=3;goto B47a78e;
case 0x47a791:c.instructions+=2;goto B47a791;
case 0x47a795:c.instructions+=1;goto B47a795;
case 0x47a797:goto L47a797;
case 0x47a79f:goto L47a79f;
case 0x47a7a3:c.instructions+=4;goto B47a7a3;
case 0x47a7a6:c.instructions+=3;goto B47a7a6;
case 0x47a7a9:c.instructions+=2;goto B47a7a9;
case 0x47a7aa:c.instructions+=1;goto B47a7aa;
case 0x47a7b0:goto L47a7b0;
case 0x47a7b7:goto L47a7b7;
case 0x47a7bd:c.instructions+=2;goto B47a7bd;
case 0x47a7c3:c.instructions+=1;goto B47a7c3;
case 0x47a7c5:goto L47a7c5;
case 0x47a7c6:c.instructions+=2;goto B47a7c6;
case 0x47a7c9:c.instructions+=1;goto B47a7c9;
case 0x47a7ca:goto L47a7ca;
case 0x47a7ce:c.instructions+=2;goto B47a7ce;
case 0x47a7d4:c.instructions+=1;goto B47a7d4;
case 0x47a7d9:goto L47a7d9;
case 0x47a7db:c.instructions+=1;goto B47a7db;
case 0x47a7dd:goto L47a7dd;
case 0x47a7df:c.instructions+=1;goto B47a7df;
case 0x47a7e1:goto L47a7e1;
case 0x47a7e4:c.instructions+=1;goto B47a7e4;
case 0x47a7e6:goto L47a7e6;
case 0x47a7eb:goto L47a7eb;
case 0x47a7f2:c.instructions+=2;goto B47a7f2;
case 0x47a7f8:c.instructions+=1;goto B47a7f8;
case 0x47a7fd:goto L47a7fd;
case 0x47a800:c.instructions+=7;goto B47a800;
case 0x47a802:c.instructions+=6;goto B47a802;
case 0x47a804:c.instructions+=5;goto B47a804;
case 0x47a806:c.instructions+=4;goto B47a806;
case 0x47a809:c.instructions+=3;goto B47a809;
case 0x47a80a:c.instructions+=2;goto B47a80a;
case 0x47a810:c.instructions+=1;goto B47a810;
case 0x47a815:goto L47a815;
case 0x47a81b:c.instructions+=2;goto B47a81b;
case 0x47a821:c.instructions+=1;goto B47a821;
case 0x47a823:goto L47a823;
case 0x47a824:c.instructions+=2;goto B47a824;
case 0x47a827:c.instructions+=1;goto B47a827;
case 0x47a828:goto L47a828;
case 0x47a82c:c.instructions+=2;goto B47a82c;
case 0x47a832:c.instructions+=1;goto B47a832;
case 0x47a837:goto L47a837;
case 0x47a839:c.instructions+=1;goto B47a839;
case 0x47a83b:goto L47a83b;
case 0x47a83d:c.instructions+=1;goto B47a83d;
case 0x47a83f:goto L47a83f;
case 0x47a842:c.instructions+=1;goto B47a842;
case 0x47a844:goto L47a844;
case 0x47a849:goto L47a849;
case 0x47a850:c.instructions+=2;goto B47a850;
case 0x47a856:c.instructions+=1;goto B47a856;
case 0x47a85b:goto L47a85b;
case 0x47a860:c.instructions+=5;goto B47a860;
case 0x47a862:c.instructions+=4;goto B47a862;
case 0x47a865:c.instructions+=3;goto B47a865;
case 0x47a866:c.instructions+=2;goto B47a866;
case 0x47a86c:c.instructions+=1;goto B47a86c;
case 0x47a871:goto L47a871;
case 0x47a877:c.instructions+=2;goto B47a877;
case 0x47a87d:c.instructions+=1;goto B47a87d;
case 0x47a87f:goto L47a87f;
case 0x47a880:c.instructions+=2;goto B47a880;
case 0x47a883:c.instructions+=1;goto B47a883;
case 0x47a884:goto L47a884;
case 0x47a888:c.instructions+=2;goto B47a888;
case 0x47a88e:c.instructions+=1;goto B47a88e;
case 0x47a893:goto L47a893;
case 0x47a895:c.instructions+=1;goto B47a895;
case 0x47a897:goto L47a897;
case 0x47a899:c.instructions+=1;goto B47a899;
case 0x47a89b:goto L47a89b;
case 0x47a89e:c.instructions+=1;goto B47a89e;
case 0x47a8a0:goto L47a8a0;
case 0x47a8a5:goto L47a8a5;
case 0x47a8ac:c.instructions+=2;goto B47a8ac;
case 0x47a8b2:c.instructions+=1;goto B47a8b2;
case 0x47a8b7:goto L47a8b7;
case 0x47a8ba:c.instructions+=7;goto B47a8ba;
case 0x47a8bc:c.instructions+=6;goto B47a8bc;
case 0x47a8be:c.instructions+=5;goto B47a8be;
case 0x47a8c0:c.instructions+=4;goto B47a8c0;
case 0x47a8c3:c.instructions+=3;goto B47a8c3;
case 0x47a8c4:c.instructions+=2;goto B47a8c4;
case 0x47a8ca:c.instructions+=1;goto B47a8ca;
case 0x47a8cc:goto L47a8cc;
case 0x47a8d2:c.instructions+=2;goto B47a8d2;
case 0x47a8d8:c.instructions+=1;goto B47a8d8;
case 0x47a8da:goto L47a8da;
case 0x47a8db:c.instructions+=2;goto B47a8db;
case 0x47a8de:c.instructions+=1;goto B47a8de;
case 0x47a8df:goto L47a8df;
case 0x47a8e3:c.instructions+=2;goto B47a8e3;
case 0x47a8e9:c.instructions+=1;goto B47a8e9;
case 0x47a8ee:goto L47a8ee;
case 0x47a8f0:c.instructions+=1;goto B47a8f0;
case 0x47a8f2:goto L47a8f2;
case 0x47a8f4:c.instructions+=1;goto B47a8f4;
case 0x47a8f6:goto L47a8f6;
case 0x47a8f9:c.instructions+=1;goto B47a8f9;
case 0x47a8fb:goto L47a8fb;
case 0x47a900:goto L47a900;
case 0x47a907:c.instructions+=2;goto B47a907;
case 0x47a90d:c.instructions+=1;goto B47a90d;
case 0x47a912:goto L47a912;
case 0x47a915:c.instructions+=7;goto B47a915;
case 0x47a917:c.instructions+=6;goto B47a917;
case 0x47a919:c.instructions+=5;goto B47a919;
case 0x47a91b:c.instructions+=4;goto B47a91b;
case 0x47a91e:c.instructions+=3;goto B47a91e;
case 0x47a91f:c.instructions+=2;goto B47a91f;
case 0x47a925:c.instructions+=1;goto B47a925;
case 0x47a927:goto L47a927;
case 0x47a92c:goto L47a92c;
case 0x47a932:c.instructions+=4;goto B47a932;
case 0x47a938:c.instructions+=3;goto B47a938;
case 0x47a939:c.instructions+=2;goto B47a939;
case 0x47a93c:c.instructions+=1;goto B47a93c;
case 0x47a941:goto L47a941;
case 0x47a944:c.instructions+=2;goto B47a944;
case 0x47a945:c.instructions+=1;goto B47a945;
case 0x47a960:goto L47a960;
case 0x47a961:c.instructions+=2;goto B47a961;
case 0x47a963:c.instructions+=1;goto B47a963;
case 0x47a968:goto L47a968;
case 0x47a96a:c.instructions+=7;goto B47a96a;
case 0x47a970:c.instructions+=6;goto B47a970;
case 0x47a976:c.instructions+=5;goto B47a976;
case 0x47a97c:c.instructions+=4;goto B47a97c;
case 0x47a982:c.instructions+=3;goto B47a982;
case 0x47a984:c.instructions+=2;goto B47a984;
case 0x47a985:c.instructions+=1;goto B47a985;
case 0x47a990:goto L47a990;
case 0x47a992:c.instructions+=16;goto B47a992;
case 0x47a997:c.instructions+=15;goto B47a997;
case 0x47a99d:c.instructions+=14;goto B47a99d;
case 0x47a99e:c.instructions+=13;goto B47a99e;
case 0x47a9a5:c.instructions+=12;goto B47a9a5;
case 0x47a9a8:c.instructions+=11;goto B47a9a8;
case 0x47a9a9:c.instructions+=10;goto B47a9a9;
case 0x47a9aa:c.instructions+=9;goto B47a9aa;
case 0x47a9ac:c.instructions+=8;goto B47a9ac;
case 0x47a9ad:c.instructions+=7;goto B47a9ad;
case 0x47a9b1:c.instructions+=6;goto B47a9b1;
case 0x47a9b7:c.instructions+=5;goto B47a9b7;
case 0x47a9bd:c.instructions+=4;goto B47a9bd;
case 0x47a9bf:c.instructions+=3;goto B47a9bf;
case 0x47a9c1:c.instructions+=2;goto B47a9c1;
case 0x47a9c5:c.instructions+=1;goto B47a9c5;
case 0x47a9c7:goto L47a9c7;
case 0x47a9c9:c.instructions+=2;goto B47a9c9;
case 0x47a9cb:c.instructions+=1;goto B47a9cb;
case 0x47a9cd:goto L47a9cd;
case 0x47a9d2:goto L47a9d2;
case 0x47a9d6:c.instructions+=2;goto B47a9d6;
case 0x47a9d7:c.instructions+=1;goto B47a9d7;
case 0x47a9dc:goto L47a9dc;
case 0x47a9df:c.instructions+=1;goto B47a9df;
case 0x47a9e4:goto L47a9e4;
case 0x47a9e8:c.instructions+=4;goto B47a9e8;
case 0x47a9ea:c.instructions+=3;goto B47a9ea;
case 0x47a9eb:c.instructions+=2;goto B47a9eb;
case 0x47a9ec:c.instructions+=1;goto B47a9ec;
case 0x47a9ef:goto L47a9ef;
case 0x47a9f4:goto L47a9f4;
case 0x47a9fa:c.instructions+=3;goto B47a9fa;
case 0x47a9fc:c.instructions+=2;goto B47a9fc;
case 0x47aa02:c.instructions+=1;goto B47aa02;
case 0x47aa04:goto L47aa04;
case 0x47aa06:c.instructions+=2;goto B47aa06;
case 0x47aa08:c.instructions+=1;goto B47aa08;
case 0x47aa0a:goto L47aa0a;
case 0x47aa0f:goto L47aa0f;
case 0x47aa13:c.instructions+=2;goto B47aa13;
case 0x47aa14:c.instructions+=1;goto B47aa14;
case 0x47aa19:goto L47aa19;
case 0x47aa1c:c.instructions+=1;goto B47aa1c;
case 0x47aa21:goto L47aa21;
case 0x47aa25:c.instructions+=4;goto B47aa25;
case 0x47aa27:c.instructions+=3;goto B47aa27;
case 0x47aa28:c.instructions+=2;goto B47aa28;
case 0x47aa29:c.instructions+=1;goto B47aa29;
case 0x47aa2c:goto L47aa2c;
case 0x47aa31:goto L47aa31;
case 0x47aa37:c.instructions+=3;goto B47aa37;
case 0x47aa39:c.instructions+=2;goto B47aa39;
case 0x47aa3f:c.instructions+=1;goto B47aa3f;
case 0x47aa41:goto L47aa41;
case 0x47aa43:c.instructions+=2;goto B47aa43;
case 0x47aa45:c.instructions+=1;goto B47aa45;
case 0x47aa47:goto L47aa47;
case 0x47aa4c:goto L47aa4c;
case 0x47aa50:c.instructions+=2;goto B47aa50;
case 0x47aa51:c.instructions+=1;goto B47aa51;
case 0x47aa56:goto L47aa56;
case 0x47aa59:c.instructions+=1;goto B47aa59;
case 0x47aa5e:goto L47aa5e;
case 0x47aa62:c.instructions+=4;goto B47aa62;
case 0x47aa64:c.instructions+=3;goto B47aa64;
case 0x47aa65:c.instructions+=2;goto B47aa65;
case 0x47aa66:c.instructions+=1;goto B47aa66;
case 0x47aa69:goto L47aa69;
case 0x47aa6e:goto L47aa6e;
case 0x47aa70:c.instructions+=3;goto B47aa70;
case 0x47aa76:c.instructions+=2;goto B47aa76;
case 0x47aa7e:c.instructions+=1;goto B47aa7e;
case 0x47aa83:goto L47aa83;
case 0x47aa87:c.instructions+=6;goto B47aa87;
case 0x47aa88:c.instructions+=5;goto B47aa88;
case 0x47aa89:c.instructions+=4;goto B47aa89;
case 0x47aa8a:c.instructions+=3;goto B47aa8a;
case 0x47aa91:c.instructions+=2;goto B47aa91;
case 0x47aa94:c.instructions+=1;goto B47aa94;
case 0x47aaa0:goto L47aaa0;
case 0x47aaa4:c.instructions+=7;goto B47aaa4;
case 0x47aaa5:c.instructions+=6;goto B47aaa5;
case 0x47aaa7:c.instructions+=5;goto B47aaa7;
case 0x47aaab:c.instructions+=4;goto B47aaab;
case 0x47aaac:c.instructions+=3;goto B47aaac;
case 0x47aaae:c.instructions+=2;goto B47aaae;
case 0x47aab1:c.instructions+=1;goto B47aab1;
case 0x47aab6:goto L47aab6;
case 0x47aab9:c.instructions+=2;goto B47aab9;
case 0x47aabb:c.instructions+=1;goto B47aabb;
case 0x47aabd:goto L47aabd;
case 0x47aac1:c.instructions+=1;goto B47aac1;
case 0x47aac4:goto L47aac4;
case 0x47aac5:c.instructions+=1;goto B47aac5;
case 0x47aad0:goto L47aad0;
case 0x47aad5:c.instructions+=5;goto B47aad5;
case 0x47aad8:c.instructions+=4;goto B47aad8;
case 0x47aada:c.instructions+=3;goto B47aada;
case 0x47aadb:c.instructions+=2;goto B47aadb;
case 0x47aadd:c.instructions+=1;goto B47aadd;
case 0x47aadf:goto L47aadf;
case 0x47aae3:c.instructions+=4;goto B47aae3;
case 0x47aae4:c.instructions+=3;goto B47aae4;
case 0x47aae6:c.instructions+=2;goto B47aae6;
case 0x47aaeb:c.instructions+=1;goto B47aaeb;
case 0x47aaf0:goto L47aaf0;
case 0x47aaf3:c.instructions+=2;goto B47aaf3;
case 0x47aaf5:c.instructions+=1;goto B47aaf5;
case 0x47aaf7:goto L47aaf7;
case 0x47aaf9:c.instructions+=3;goto B47aaf9;
case 0x47aafa:c.instructions+=2;goto B47aafa;
case 0x47aafd:c.instructions+=1;goto B47aafd;
case 0x47aafe:goto L47aafe;
case 0x47ab04:c.instructions+=7;goto B47ab04;
case 0x47ab0a:c.instructions+=6;goto B47ab0a;
case 0x47ab0b:c.instructions+=5;goto B47ab0b;
case 0x47ab0c:c.instructions+=4;goto B47ab0c;
case 0x47ab11:c.instructions+=3;goto B47ab11;
case 0x47ab16:c.instructions+=2;goto B47ab16;
case 0x47ab17:c.instructions+=1;goto B47ab17;
case 0x47ab1c:goto L47ab1c;
case 0x47ab21:c.instructions+=2;goto B47ab21;
case 0x47ab26:c.instructions+=1;goto B47ab26;
case 0x47ab2b:goto L47ab2b;
case 0x47ab30:goto L47ab30;
case 0x47ab35:goto L47ab35;
case 0x47ab3a:goto L47ab3a;
case 0x47ab3c:c.instructions+=1;goto B47ab3c;
case 0x47ab41:goto L47ab41;
case 0x47ab48:c.instructions+=4;goto B47ab48;
case 0x47ab4d:c.instructions+=3;goto B47ab4d;
case 0x47ab4e:c.instructions+=2;goto B47ab4e;
case 0x47ab50:c.instructions+=1;goto B47ab50;
case 0x47ab55:goto L47ab55;
case 0x47ab58:c.instructions+=2;goto B47ab58;
case 0x47ab5d:c.instructions+=1;goto B47ab5d;
case 0x47ab5f:goto L47ab5f;
case 0x47ab65:c.instructions+=5;goto B47ab65;
case 0x47ab68:c.instructions+=4;goto B47ab68;
case 0x47ab6e:c.instructions+=3;goto B47ab6e;
case 0x47ab6f:c.instructions+=2;goto B47ab6f;
case 0x47ab74:c.instructions+=1;goto B47ab74;
case 0x47ab79:goto L47ab79;
case 0x47ab7c:c.instructions+=1;goto B47ab7c;
case 0x47ab7e:goto L47ab7e;
case 0x47ab81:c.instructions+=4;goto B47ab81;
case 0x47ab87:c.instructions+=3;goto B47ab87;
case 0x47ab88:c.instructions+=2;goto B47ab88;
case 0x47ab8a:c.instructions+=1;goto B47ab8a;
case 0x47ab8f:goto L47ab8f;
case 0x47ab92:c.instructions+=5;goto B47ab92;
case 0x47ab94:c.instructions+=4;goto B47ab94;
case 0x47ab96:c.instructions+=3;goto B47ab96;
case 0x47ab9d:c.instructions+=2;goto B47ab9d;
case 0x47aba4:c.instructions+=1;goto B47aba4;
case 0x47aba9:goto L47aba9;
case 0x47abae:c.instructions+=3;goto B47abae;
case 0x47abb0:c.instructions+=2;goto B47abb0;
case 0x47abb1:c.instructions+=1;goto B47abb1;
case 0x47abb3:goto L47abb3;
case 0x47abb6:c.instructions+=2;goto B47abb6;
case 0x47abc0:c.instructions+=1;goto B47abc0;
case 0x47abc2:goto L47abc2;
case 0x47abcc:goto L47abcc;
case 0x47abd1:c.instructions+=2;goto B47abd1;
case 0x47abd3:c.instructions+=1;goto B47abd3;
case 0x47abd5:goto L47abd5;
case 0x47abda:goto L47abda;
case 0x47abde:c.instructions+=3;goto B47abde;
case 0x47abdf:c.instructions+=2;goto B47abdf;
case 0x47abe1:c.instructions+=1;goto B47abe1;
case 0x47abe6:goto L47abe6;
case 0x47abe8:c.instructions+=2;goto B47abe8;
case 0x47abea:c.instructions+=1;goto B47abea;
case 0x47abef:goto L47abef;
case 0x47abf3:c.instructions+=3;goto B47abf3;
case 0x47abf4:c.instructions+=2;goto B47abf4;
case 0x47abf6:c.instructions+=1;goto B47abf6;
case 0x47abfb:goto L47abfb;
case 0x47ac01:c.instructions+=2;goto B47ac01;
case 0x47ac02:c.instructions+=1;goto B47ac02;
case 0x47ac07:goto L47ac07;
case 0x47ac0c:c.instructions+=3;goto B47ac0c;
case 0x47ac0d:c.instructions+=2;goto B47ac0d;
case 0x47ac0f:c.instructions+=1;goto B47ac0f;
case 0x47ac14:goto L47ac14;
case 0x47ac19:goto L47ac19;
case 0x47ac1c:c.instructions+=5;goto B47ac1c;
case 0x47ac1f:c.instructions+=4;goto B47ac1f;
case 0x47ac20:c.instructions+=3;goto B47ac20;
case 0x47ac21:c.instructions+=2;goto B47ac21;
case 0x47ac23:c.instructions+=1;goto B47ac23;
case 0x47ac28:goto L47ac28;
case 0x47ac2d:c.instructions+=2;goto B47ac2d;
case 0x47ac2f:c.instructions+=1;goto B47ac2f;
case 0x47ac34:goto L47ac34;
case 0x47ac39:c.instructions+=1;goto B47ac39;
case 0x47ac3e:goto L47ac3e;
case 0x47ac41:c.instructions+=4;goto B47ac41;
case 0x47ac43:c.instructions+=3;goto B47ac43;
case 0x47ac44:c.instructions+=2;goto B47ac44;
case 0x47ac47:c.instructions+=1;goto B47ac47;
case 0x47ac50:goto L47ac50;
case 0x47ac54:c.instructions+=5;goto B47ac54;
case 0x47ac55:c.instructions+=4;goto B47ac55;
case 0x47ac57:c.instructions+=3;goto B47ac57;
case 0x47ac5d:c.instructions+=2;goto B47ac5d;
case 0x47ac5f:c.instructions+=1;goto B47ac5f;
case 0x47ac65:goto L47ac65;
case 0x47ac6b:c.instructions+=4;goto B47ac6b;
case 0x47ac6c:c.instructions+=3;goto B47ac6c;
case 0x47ac6f:c.instructions+=2;goto B47ac6f;
case 0x47ac75:c.instructions+=1;goto B47ac75;
case 0x47ac7b:goto L47ac7b;
case 0x47ac82:goto L47ac82;
case 0x47ac87:c.instructions+=2;goto B47ac87;
case 0x47ac89:c.instructions+=1;goto B47ac89;
case 0x47ac8f:goto L47ac8f;
case 0x47ac95:c.instructions+=2;goto B47ac95;
case 0x47ac97:c.instructions+=1;goto B47ac97;
case 0x47ac9d:goto L47ac9d;
case 0x47aca3:c.instructions+=3;goto B47aca3;
case 0x47aca5:c.instructions+=2;goto B47aca5;
case 0x47aca6:c.instructions+=1;goto B47aca6;
case 0x47acab:goto L47acab;
case 0x47acae:c.instructions+=3;goto B47acae;
case 0x47acb5:c.instructions+=2;goto B47acb5;
case 0x47acb6:c.instructions+=1;goto B47acb6;
case 0x47acb9:goto L47acb9;
case 0x47acbe:goto L47acbe;
case 0x47acc0:c.instructions+=1;goto B47acc0;
case 0x47acc6:goto L47acc6;
case 0x47accb:c.instructions+=2;goto B47accb;
case 0x47accd:c.instructions+=1;goto B47accd;
case 0x47acd3:goto L47acd3;
case 0x47acd9:c.instructions+=2;goto B47acd9;
case 0x47acdb:c.instructions+=1;goto B47acdb;
case 0x47ace1:goto L47ace1;
case 0x47ace3:c.instructions+=3;goto B47ace3;
case 0x47ace5:c.instructions+=2;goto B47ace5;
case 0x47ace8:c.instructions+=1;goto B47ace8;
case 0x47aced:goto L47aced;
case 0x47acf3:c.instructions+=4;goto B47acf3;
case 0x47acf9:c.instructions+=3;goto B47acf9;
case 0x47acfb:c.instructions+=2;goto B47acfb;
case 0x47acfc:c.instructions+=1;goto B47acfc;
case 0x47ad01:goto L47ad01;
case 0x47ad04:c.instructions+=3;goto B47ad04;
case 0x47ad0b:c.instructions+=2;goto B47ad0b;
case 0x47ad0c:c.instructions+=1;goto B47ad0c;
case 0x47ad0f:goto L47ad0f;
case 0x47ad14:c.instructions+=2;goto B47ad14;
case 0x47ad16:c.instructions+=1;goto B47ad16;
case 0x47ad1c:goto L47ad1c;
case 0x47ad23:c.instructions+=2;goto B47ad23;
case 0x47ad2a:c.instructions+=1;goto B47ad2a;
case 0x47ad2c:goto L47ad2c;
case 0x47ad31:c.instructions+=4;goto B47ad31;
case 0x47ad37:c.instructions+=3;goto B47ad37;
case 0x47ad39:c.instructions+=2;goto B47ad39;
case 0x47ad3a:c.instructions+=1;goto B47ad3a;
case 0x47ad3f:goto L47ad3f;
case 0x47ad42:c.instructions+=1;goto B47ad42;
case 0x47ad49:goto L47ad49;
case 0x47ad4f:c.instructions+=4;goto B47ad4f;
case 0x47ad55:c.instructions+=3;goto B47ad55;
case 0x47ad58:c.instructions+=2;goto B47ad58;
case 0x47ad5a:c.instructions+=1;goto B47ad5a;
case 0x47ad5c:goto L47ad5c;
case 0x47ad5e:c.instructions+=3;goto B47ad5e;
case 0x47ad61:c.instructions+=2;goto B47ad61;
case 0x47ad63:c.instructions+=1;goto B47ad63;
case 0x47ad69:goto L47ad69;
case 0x47ad6b:c.instructions+=1;goto B47ad6b;
case 0x47ad70:goto L47ad70;
case 0x47ad72:c.instructions+=1;goto B47ad72;
case 0x47ad74:goto L47ad74;
case 0x47ad79:c.instructions+=3;goto B47ad79;
case 0x47ad7f:c.instructions+=2;goto B47ad7f;
case 0x47ad80:c.instructions+=1;goto B47ad80;
case 0x47ad85:goto L47ad85;
case 0x47ad88:c.instructions+=1;goto B47ad88;
case 0x47ad8a:goto L47ad8a;
case 0x47ad8e:c.instructions+=1;goto B47ad8e;
case 0x47ad90:goto L47ad90;
case 0x47ad96:c.instructions+=3;goto B47ad96;
case 0x47ad9c:c.instructions+=2;goto B47ad9c;
case 0x47ad9d:c.instructions+=1;goto B47ad9d;
case 0x47ada2:goto L47ada2;
case 0x47ada5:goto L47ada5;
case 0x47ada8:c.instructions+=1;goto B47ada8;
case 0x47adab:goto L47adab;
case 0x47adb1:c.instructions+=3;goto B47adb1;
case 0x47adb3:c.instructions+=2;goto B47adb3;
case 0x47adb5:c.instructions+=1;goto B47adb5;
case 0x47adb8:goto L47adb8;
case 0x47adc2:c.instructions+=2;goto B47adc2;
case 0x47adc3:c.instructions+=1;goto B47adc3;
case 0x47adc6:goto L47adc6;
case 0x47adcd:c.instructions+=1;goto B47adcd;
case 0x47adcf:goto L47adcf;
case 0x47add4:c.instructions+=4;goto B47add4;
case 0x47adda:c.instructions+=3;goto B47adda;
case 0x47addc:c.instructions+=2;goto B47addc;
case 0x47addd:c.instructions+=1;goto B47addd;
case 0x47ade2:goto L47ade2;
case 0x47ade5:c.instructions+=7;goto B47ade5;
case 0x47adec:c.instructions+=6;goto B47adec;
case 0x47adf3:c.instructions+=5;goto B47adf3;
case 0x47adf6:c.instructions+=4;goto B47adf6;
case 0x47adfb:c.instructions+=3;goto B47adfb;
case 0x47ae01:c.instructions+=2;goto B47ae01;
case 0x47ae02:c.instructions+=1;goto B47ae02;
case 0x47ae07:goto L47ae07;
case 0x47ae0a:goto L47ae0a;
case 0x47ae0d:c.instructions+=5;goto B47ae0d;
case 0x47ae10:c.instructions+=4;goto B47ae10;
case 0x47ae16:c.instructions+=3;goto B47ae16;
case 0x47ae18:c.instructions+=2;goto B47ae18;
case 0x47ae1a:c.instructions+=1;goto B47ae1a;
case 0x47ae1d:goto L47ae1d;
case 0x47ae24:c.instructions+=3;goto B47ae24;
case 0x47ae2e:c.instructions+=2;goto B47ae2e;
case 0x47ae2f:c.instructions+=1;goto B47ae2f;
case 0x47ae32:goto L47ae32;
case 0x47ae37:c.instructions+=2;goto B47ae37;
case 0x47ae39:c.instructions+=1;goto B47ae39;
case 0x47ae3f:goto L47ae3f;
case 0x47ae46:c.instructions+=1;goto B47ae46;
case 0x47ae48:goto L47ae48;
case 0x47ae4e:c.instructions+=3;goto B47ae4e;
case 0x47ae50:c.instructions+=2;goto B47ae50;
case 0x47ae51:c.instructions+=1;goto B47ae51;
case 0x47ae56:goto L47ae56;
case 0x47ae5d:c.instructions+=2;goto B47ae5d;
case 0x47ae62:c.instructions+=1;goto B47ae62;
case 0x47ae65:goto L47ae65;
case 0x47ae6b:c.instructions+=2;goto B47ae6b;
case 0x47ae6c:c.instructions+=1;goto B47ae6c;
case 0x47ae71:goto L47ae71;
case 0x47ae74:c.instructions+=2;goto B47ae74;
case 0x47ae75:c.instructions+=1;goto B47ae75;
case 0x47ae78:goto L47ae78;
case 0x47ae7d:c.instructions+=2;goto B47ae7d;
case 0x47ae7f:c.instructions+=1;goto B47ae7f;
case 0x47ae81:goto L47ae81;
case 0x47ae88:c.instructions+=1;goto B47ae88;
case 0x47ae8a:goto L47ae8a;
case 0x47ae90:c.instructions+=3;goto B47ae90;
case 0x47ae92:c.instructions+=2;goto B47ae92;
case 0x47ae93:c.instructions+=1;goto B47ae93;
case 0x47ae98:goto L47ae98;
case 0x47ae9f:c.instructions+=2;goto B47ae9f;
case 0x47aea4:c.instructions+=1;goto B47aea4;
case 0x47aea7:goto L47aea7;
case 0x47aead:c.instructions+=2;goto B47aead;
case 0x47aeae:c.instructions+=1;goto B47aeae;
case 0x47aeb3:goto L47aeb3;
case 0x47aeba:c.instructions+=2;goto B47aeba;
case 0x47aebd:c.instructions+=1;goto B47aebd;
case 0x47aec4:goto L47aec4;
case 0x47aec9:c.instructions+=1;goto B47aec9;
case 0x47aecb:goto L47aecb;
case 0x47aed2:c.instructions+=1;goto B47aed2;
case 0x47aed4:goto L47aed4;
case 0x47aede:c.instructions+=2;goto B47aede;
case 0x47aedf:c.instructions+=1;goto B47aedf;
case 0x47aee2:goto L47aee2;
case 0x47aee7:c.instructions+=2;goto B47aee7;
case 0x47aee9:c.instructions+=1;goto B47aee9;
case 0x47aeeb:goto L47aeeb;
case 0x47aef2:c.instructions+=4;goto B47aef2;
case 0x47aef8:c.instructions+=3;goto B47aef8;
case 0x47aefe:c.instructions+=2;goto B47aefe;
case 0x47aeff:c.instructions+=1;goto B47aeff;
case 0x47af04:goto L47af04;
case 0x47af07:goto L47af07;
case 0x47af08:c.instructions+=1;goto B47af08;
case 0x47af40:goto L47af40;
case 0x47af41:c.instructions+=9;goto B47af41;
case 0x47af42:c.instructions+=8;goto B47af42;
case 0x47af44:c.instructions+=7;goto B47af44;
case 0x47af46:c.instructions+=6;goto B47af46;
case 0x47af47:c.instructions+=5;goto B47af47;
case 0x47af4d:c.instructions+=4;goto B47af4d;
case 0x47af4f:c.instructions+=3;goto B47af4f;
case 0x47af52:c.instructions+=2;goto B47af52;
case 0x47af58:c.instructions+=1;goto B47af58;
case 0x47af5d:goto L47af5d;
case 0x47af63:c.instructions+=3;goto B47af63;
case 0x47af65:c.instructions+=2;goto B47af65;
case 0x47af66:c.instructions+=1;goto B47af66;
case 0x47af69:goto L47af69;
case 0x47af6f:c.instructions+=6;goto B47af6f;
case 0x47af72:c.instructions+=5;goto B47af72;
case 0x47af79:c.instructions+=4;goto B47af79;
case 0x47af80:c.instructions+=3;goto B47af80;
case 0x47af81:c.instructions+=2;goto B47af81;
case 0x47af82:c.instructions+=1;goto B47af82;
case 0x47af90:goto L47af90;
case 0x47af91:c.instructions+=5;goto B47af91;
case 0x47af95:c.instructions+=4;goto B47af95;
case 0x47af98:c.instructions+=3;goto B47af98;
case 0x47af99:c.instructions+=2;goto B47af99;
case 0x47af9b:c.instructions+=1;goto B47af9b;
case 0x47afa1:goto L47afa1;
case 0x47afa8:c.instructions+=1;goto B47afa8;
case 0x47afaa:goto L47afaa;
case 0x47afaf:c.instructions+=4;goto B47afaf;
case 0x47afb5:c.instructions+=3;goto B47afb5;
case 0x47afb7:c.instructions+=2;goto B47afb7;
case 0x47afb8:c.instructions+=1;goto B47afb8;
case 0x47afbd:goto L47afbd;
case 0x47afc0:c.instructions+=1;goto B47afc0;
case 0x47afc7:goto L47afc7;
case 0x47afcd:c.instructions+=4;goto B47afcd;
case 0x47afd3:c.instructions+=3;goto B47afd3;
case 0x47afd4:c.instructions+=2;goto B47afd4;
case 0x47afd5:c.instructions+=1;goto B47afd5;
case 0x47afda:goto L47afda;
case 0x47afe0:c.instructions+=4;goto B47afe0;
case 0x47afe6:c.instructions+=3;goto B47afe6;
case 0x47afe7:c.instructions+=2;goto B47afe7;
case 0x47afe8:c.instructions+=1;goto B47afe8;
case 0x47afed:goto L47afed;
case 0x47aff3:c.instructions+=3;goto B47aff3;
case 0x47aff6:c.instructions+=2;goto B47aff6;
case 0x47affd:c.instructions+=1;goto B47affd;
default:missing_instruction(c.pc);}
B47a004:L47a004:{c.instructions+=3;NFSU2_TR(0x47a004);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B47a007:{NFSU2_TR(0x47a007);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x11ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x11ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x11ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47a00a:{NFSU2_TR(0x47a00a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L47a448;}}
}
B47a010:L47a010:{c.instructions+=1;NFSU2_TR(0x47a010);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x47a504ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47a017:L47a017:{c.instructions+=8;NFSU2_TR(0x47a017);
__builtin_memmove((R+0),gp(0x82cba0),4);
}
B47a01c:{NFSU2_TR(0x47a01c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a020:{NFSU2_TR(0x47a020);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B47a021:{NFSU2_TR(0x47a021);
w4(R+4,u32(0x3ull));
}
B47a026:{NFSU2_TR(0x47a026);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a026);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a026);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B47a028:{NFSU2_TR(0x47a028);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a02e:{NFSU2_TR(0x47a02e);
__builtin_memmove((R+24),(R+8),4);
}
B47a030:{NFSU2_TR(0x47a030);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a035ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a035:L47a035:{c.instructions+=2;NFSU2_TR(0x47a035);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a037:{NFSU2_TR(0x47a037);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a03d;}}
}
B47a039:L47a039:{c.instructions+=2;NFSU2_TR(0x47a039);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a03b:{NFSU2_TR(0x47a03b);
{goto L47a047;}
}
B47a03d:L47a03d:{c.instructions+=2;NFSU2_TR(0x47a03d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a040:{NFSU2_TR(0x47a040);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a047;}}
}
B47a042:L47a042:{c.instructions+=1;NFSU2_TR(0x47a042);
w4(R+0,u32(0x13ull));
}
B47a047:L47a047:{c.instructions+=3;NFSU2_TR(0x47a047);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a04e:{NFSU2_TR(0x47a04e);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a054:{NFSU2_TR(0x47a054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a059ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a059:L47a059:{c.instructions+=7;NFSU2_TR(0x47a059);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B47a05c:{NFSU2_TR(0x47a05c);
__builtin_memmove((R+0),(R+24),4);
}
B47a05e:{NFSU2_TR(0x47a05e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B47a060:{NFSU2_TR(0x47a060);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcdull))));
}
B47a065:{NFSU2_TR(0x47a065);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a066:{NFSU2_TR(0x47a066);
__builtin_memmove(gp(0x82cba0),(R+24),4);
}
B47a06c:{NFSU2_TR(0x47a06c);
{goto L47a49d;}
}
B47a071:L47a071:{c.instructions+=8;NFSU2_TR(0x47a071);
__builtin_memmove((R+0),gp(0x82cb9c),4);
}
B47a076:{NFSU2_TR(0x47a076);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a07a:{NFSU2_TR(0x47a07a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B47a07b:{NFSU2_TR(0x47a07b);
w4(R+4,u32(0x3ull));
}
B47a080:{NFSU2_TR(0x47a080);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a080);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a080);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B47a082:{NFSU2_TR(0x47a082);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a088:{NFSU2_TR(0x47a088);
__builtin_memmove((R+24),(R+8),4);
}
B47a08a:{NFSU2_TR(0x47a08a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a08full));
TAIL_STATIC(0x75bed4u,75b);
}
B47a08f:L47a08f:{c.instructions+=2;NFSU2_TR(0x47a08f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a091:{NFSU2_TR(0x47a091);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a097;}}
}
B47a093:L47a093:{c.instructions+=2;NFSU2_TR(0x47a093);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a095:{NFSU2_TR(0x47a095);
{goto L47a0a1;}
}
B47a097:L47a097:{c.instructions+=2;NFSU2_TR(0x47a097);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a09a:{NFSU2_TR(0x47a09a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a0a1;}}
}
B47a09c:L47a09c:{c.instructions+=1;NFSU2_TR(0x47a09c);
w4(R+0,u32(0x13ull));
}
B47a0a1:L47a0a1:{c.instructions+=3;NFSU2_TR(0x47a0a1);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a0a8:{NFSU2_TR(0x47a0a8);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a0ae:{NFSU2_TR(0x47a0ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a0b3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a0b3:L47a0b3:{c.instructions+=7;NFSU2_TR(0x47a0b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B47a0b6:{NFSU2_TR(0x47a0b6);
__builtin_memmove((R+0),(R+24),4);
}
B47a0b8:{NFSU2_TR(0x47a0b8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B47a0ba:{NFSU2_TR(0x47a0ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x91ull))));
}
B47a0bf:{NFSU2_TR(0x47a0bf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a0c0:{NFSU2_TR(0x47a0c0);
__builtin_memmove(gp(0x82cb9c),(R+24),4);
}
B47a0c6:{NFSU2_TR(0x47a0c6);
{goto L47a49d;}
}
B47a0cb:L47a0cb:{c.instructions+=8;NFSU2_TR(0x47a0cb);
__builtin_memmove((R+0),gp(0x82cb98),4);
}
B47a0d0:{NFSU2_TR(0x47a0d0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a0d4:{NFSU2_TR(0x47a0d4);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B47a0d5:{NFSU2_TR(0x47a0d5);
w4(R+4,u32(0x3ull));
}
B47a0da:{NFSU2_TR(0x47a0da);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a0da);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a0da);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B47a0dc:{NFSU2_TR(0x47a0dc);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a0e2:{NFSU2_TR(0x47a0e2);
__builtin_memmove((R+24),(R+8),4);
}
B47a0e4:{NFSU2_TR(0x47a0e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a0e9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a0e9:L47a0e9:{c.instructions+=2;NFSU2_TR(0x47a0e9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a0eb:{NFSU2_TR(0x47a0eb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a0f1;}}
}
B47a0ed:L47a0ed:{c.instructions+=2;NFSU2_TR(0x47a0ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a0ef:{NFSU2_TR(0x47a0ef);
{goto L47a0fb;}
}
B47a0f1:L47a0f1:{c.instructions+=2;NFSU2_TR(0x47a0f1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a0f4:{NFSU2_TR(0x47a0f4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a0fb;}}
}
B47a0f6:L47a0f6:{c.instructions+=1;NFSU2_TR(0x47a0f6);
w4(R+0,u32(0x13ull));
}
B47a0fb:L47a0fb:{c.instructions+=3;NFSU2_TR(0x47a0fb);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a102:{NFSU2_TR(0x47a102);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a108:{NFSU2_TR(0x47a108);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a10dull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a10d:L47a10d:{c.instructions+=7;NFSU2_TR(0x47a10d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B47a110:{NFSU2_TR(0x47a110);
__builtin_memmove((R+0),(R+24),4);
}
B47a112:{NFSU2_TR(0x47a112);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B47a114:{NFSU2_TR(0x47a114);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
}
B47a117:{NFSU2_TR(0x47a117);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a118:{NFSU2_TR(0x47a118);
__builtin_memmove(gp(0x82cb98),(R+24),4);
}
B47a11e:{NFSU2_TR(0x47a11e);
{goto L47a49d;}
}
B47a123:L47a123:{c.instructions+=8;NFSU2_TR(0x47a123);
__builtin_memmove((R+0),gp(0x82cb94),4);
}
B47a128:{NFSU2_TR(0x47a128);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a12c:{NFSU2_TR(0x47a12c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B47a12d:{NFSU2_TR(0x47a12d);
w4(R+4,u32(0x3ull));
}
B47a132:{NFSU2_TR(0x47a132);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a132);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a132);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B47a134:{NFSU2_TR(0x47a134);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a13a:{NFSU2_TR(0x47a13a);
__builtin_memmove((R+24),(R+8),4);
}
B47a13c:{NFSU2_TR(0x47a13c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a141ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a141:L47a141:{c.instructions+=2;NFSU2_TR(0x47a141);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a143:{NFSU2_TR(0x47a143);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a149;}}
}
B47a145:L47a145:{c.instructions+=2;NFSU2_TR(0x47a145);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a147:{NFSU2_TR(0x47a147);
{goto L47a153;}
}
B47a149:L47a149:{c.instructions+=2;NFSU2_TR(0x47a149);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a14c:{NFSU2_TR(0x47a14c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a153;}}
}
B47a14e:L47a14e:{c.instructions+=1;NFSU2_TR(0x47a14e);
w4(R+0,u32(0x13ull));
}
B47a153:L47a153:{c.instructions+=3;NFSU2_TR(0x47a153);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a15a:{NFSU2_TR(0x47a15a);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a160:{NFSU2_TR(0x47a160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a165ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a165:L47a165:{c.instructions+=7;NFSU2_TR(0x47a165);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B47a168:{NFSU2_TR(0x47a168);
__builtin_memmove((R+0),(R+24),4);
}
B47a16a:{NFSU2_TR(0x47a16a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B47a16c:{NFSU2_TR(0x47a16c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x109ull))));
}
B47a171:{NFSU2_TR(0x47a171);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a172:{NFSU2_TR(0x47a172);
__builtin_memmove(gp(0x82cb94),(R+24),4);
}
B47a178:{NFSU2_TR(0x47a178);
{goto L47a49d;}
}
B47a17d:L47a17d:{c.instructions+=8;NFSU2_TR(0x47a17d);
__builtin_memmove((R+0),gp(0x82cb90),4);
}
B47a182:{NFSU2_TR(0x47a182);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a186:{NFSU2_TR(0x47a186);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B47a187:{NFSU2_TR(0x47a187);
w4(R+4,u32(0x3ull));
}
B47a18c:{NFSU2_TR(0x47a18c);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a18c);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a18c);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B47a18e:{NFSU2_TR(0x47a18e);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a194:{NFSU2_TR(0x47a194);
__builtin_memmove((R+24),(R+8),4);
}
B47a196:{NFSU2_TR(0x47a196);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a19bull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a19b:L47a19b:{c.instructions+=2;NFSU2_TR(0x47a19b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a19d:{NFSU2_TR(0x47a19d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a1a3;}}
}
B47a19f:L47a19f:{c.instructions+=2;NFSU2_TR(0x47a19f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a1a1:{NFSU2_TR(0x47a1a1);
{goto L47a1ad;}
}
B47a1a3:L47a1a3:{c.instructions+=2;NFSU2_TR(0x47a1a3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a1a6:{NFSU2_TR(0x47a1a6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a1ad;}}
}
B47a1a8:L47a1a8:{c.instructions+=1;NFSU2_TR(0x47a1a8);
w4(R+0,u32(0x13ull));
}
B47a1ad:L47a1ad:{c.instructions+=3;NFSU2_TR(0x47a1ad);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a1b4:{NFSU2_TR(0x47a1b4);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a1ba:{NFSU2_TR(0x47a1ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a1bfull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a1bf:L47a1bf:{c.instructions+=7;NFSU2_TR(0x47a1bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B47a1c2:{NFSU2_TR(0x47a1c2);
__builtin_memmove((R+0),(R+24),4);
}
B47a1c4:{NFSU2_TR(0x47a1c4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B47a1c6:{NFSU2_TR(0x47a1c6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xebull))));
}
B47a1cb:{NFSU2_TR(0x47a1cb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a1cc:{NFSU2_TR(0x47a1cc);
__builtin_memmove(gp(0x82cb90),(R+24),4);
}
B47a1d2:{NFSU2_TR(0x47a1d2);
{goto L47a49d;}
}
B47a1d7:L47a1d7:{c.instructions+=8;NFSU2_TR(0x47a1d7);
__builtin_memmove((R+0),gp(0x82cb8c),4);
}
B47a1dc:{NFSU2_TR(0x47a1dc);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a1e0:{NFSU2_TR(0x47a1e0);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B47a1e1:{NFSU2_TR(0x47a1e1);
w4(R+4,u32(0x3ull));
}
B47a1e6:{NFSU2_TR(0x47a1e6);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a1e6);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a1e6);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B47a1e8:{NFSU2_TR(0x47a1e8);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a1ee:{NFSU2_TR(0x47a1ee);
__builtin_memmove((R+24),(R+8),4);
}
B47a1f0:{NFSU2_TR(0x47a1f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a1f5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a1f5:L47a1f5:{c.instructions+=2;NFSU2_TR(0x47a1f5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a1f7:{NFSU2_TR(0x47a1f7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a1fd;}}
}
B47a1f9:L47a1f9:{c.instructions+=2;NFSU2_TR(0x47a1f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a1fb:{NFSU2_TR(0x47a1fb);
{goto L47a207;}
}
B47a1fd:L47a1fd:{c.instructions+=2;NFSU2_TR(0x47a1fd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a200:{NFSU2_TR(0x47a200);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a207;}}
}
B47a202:L47a202:{c.instructions+=1;NFSU2_TR(0x47a202);
w4(R+0,u32(0x13ull));
}
B47a207:L47a207:{c.instructions+=3;NFSU2_TR(0x47a207);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a20e:{NFSU2_TR(0x47a20e);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a214:{NFSU2_TR(0x47a214);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a219ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a219:L47a219:{c.instructions+=7;NFSU2_TR(0x47a219);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B47a21c:{NFSU2_TR(0x47a21c);
__builtin_memmove((R+0),(R+24),4);
}
B47a21e:{NFSU2_TR(0x47a21e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B47a220:{NFSU2_TR(0x47a220);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfaull))));
}
B47a225:{NFSU2_TR(0x47a225);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a226:{NFSU2_TR(0x47a226);
__builtin_memmove(gp(0x82cb8c),(R+24),4);
}
B47a22c:{NFSU2_TR(0x47a22c);
{goto L47a49d;}
}
B47a231:L47a231:{c.instructions+=8;NFSU2_TR(0x47a231);
__builtin_memmove((R+0),gp(0x82cb88),4);
}
B47a236:{NFSU2_TR(0x47a236);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a23a:{NFSU2_TR(0x47a23a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B47a23b:{NFSU2_TR(0x47a23b);
w4(R+4,u32(0x3ull));
}
B47a240:{NFSU2_TR(0x47a240);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a240);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a240);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B47a242:{NFSU2_TR(0x47a242);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a248:{NFSU2_TR(0x47a248);
__builtin_memmove((R+24),(R+8),4);
}
B47a24a:{NFSU2_TR(0x47a24a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a24full));
TAIL_STATIC(0x75bed4u,75b);
}
B47a24f:L47a24f:{c.instructions+=2;NFSU2_TR(0x47a24f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a251:{NFSU2_TR(0x47a251);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a257;}}
}
B47a253:L47a253:{c.instructions+=2;NFSU2_TR(0x47a253);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a255:{NFSU2_TR(0x47a255);
{goto L47a261;}
}
B47a257:L47a257:{c.instructions+=2;NFSU2_TR(0x47a257);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a25a:{NFSU2_TR(0x47a25a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a261;}}
}
B47a25c:L47a25c:{c.instructions+=1;NFSU2_TR(0x47a25c);
w4(R+0,u32(0x13ull));
}
B47a261:L47a261:{c.instructions+=3;NFSU2_TR(0x47a261);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a268:{NFSU2_TR(0x47a268);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a26e:{NFSU2_TR(0x47a26e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a273ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a273:L47a273:{c.instructions+=7;NFSU2_TR(0x47a273);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B47a276:{NFSU2_TR(0x47a276);
__builtin_memmove((R+0),(R+24),4);
}
B47a278:{NFSU2_TR(0x47a278);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B47a27a:{NFSU2_TR(0x47a27a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
}
B47a27f:{NFSU2_TR(0x47a27f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a280:{NFSU2_TR(0x47a280);
__builtin_memmove(gp(0x82cb88),(R+24),4);
}
B47a286:{NFSU2_TR(0x47a286);
{goto L47a49d;}
}
B47a28b:L47a28b:{c.instructions+=8;NFSU2_TR(0x47a28b);
__builtin_memmove((R+0),gp(0x82cb84),4);
}
B47a290:{NFSU2_TR(0x47a290);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a294:{NFSU2_TR(0x47a294);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B47a295:{NFSU2_TR(0x47a295);
w4(R+4,u32(0x3ull));
}
B47a29a:{NFSU2_TR(0x47a29a);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a29a);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a29a);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B47a29c:{NFSU2_TR(0x47a29c);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a2a2:{NFSU2_TR(0x47a2a2);
__builtin_memmove((R+24),(R+8),4);
}
B47a2a4:{NFSU2_TR(0x47a2a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a2a9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a2a9:L47a2a9:{c.instructions+=2;NFSU2_TR(0x47a2a9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a2ab:{NFSU2_TR(0x47a2ab);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a2b1;}}
}
B47a2ad:L47a2ad:{c.instructions+=2;NFSU2_TR(0x47a2ad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a2af:{NFSU2_TR(0x47a2af);
{goto L47a2bb;}
}
B47a2b1:L47a2b1:{c.instructions+=2;NFSU2_TR(0x47a2b1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a2b4:{NFSU2_TR(0x47a2b4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a2bb;}}
}
B47a2b6:L47a2b6:{c.instructions+=1;NFSU2_TR(0x47a2b6);
w4(R+0,u32(0x13ull));
}
B47a2bb:L47a2bb:{c.instructions+=3;NFSU2_TR(0x47a2bb);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a2c2:{NFSU2_TR(0x47a2c2);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a2c8:{NFSU2_TR(0x47a2c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a2cdull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a2cd:L47a2cd:{c.instructions+=7;NFSU2_TR(0x47a2cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B47a2d0:{NFSU2_TR(0x47a2d0);
__builtin_memmove((R+0),(R+24),4);
}
B47a2d2:{NFSU2_TR(0x47a2d2);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B47a2d4:{NFSU2_TR(0x47a2d4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
}
B47a2d9:{NFSU2_TR(0x47a2d9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a2da:{NFSU2_TR(0x47a2da);
__builtin_memmove(gp(0x82cb84),(R+24),4);
}
B47a2e0:{NFSU2_TR(0x47a2e0);
{goto L47a49d;}
}
B47a2e5:L47a2e5:{c.instructions+=8;NFSU2_TR(0x47a2e5);
__builtin_memmove((R+0),gp(0x82cb80),4);
}
B47a2ea:{NFSU2_TR(0x47a2ea);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a2ee:{NFSU2_TR(0x47a2ee);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B47a2ef:{NFSU2_TR(0x47a2ef);
w4(R+4,u32(0x3ull));
}
B47a2f4:{NFSU2_TR(0x47a2f4);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a2f4);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a2f4);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B47a2f6:{NFSU2_TR(0x47a2f6);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a2fc:{NFSU2_TR(0x47a2fc);
__builtin_memmove((R+24),(R+8),4);
}
B47a2fe:{NFSU2_TR(0x47a2fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a303ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a303:L47a303:{c.instructions+=2;NFSU2_TR(0x47a303);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a305:{NFSU2_TR(0x47a305);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a30b;}}
}
B47a307:L47a307:{c.instructions+=2;NFSU2_TR(0x47a307);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a309:{NFSU2_TR(0x47a309);
{goto L47a315;}
}
B47a30b:L47a30b:{c.instructions+=2;NFSU2_TR(0x47a30b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a30e:{NFSU2_TR(0x47a30e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a315;}}
}
B47a310:L47a310:{c.instructions+=1;NFSU2_TR(0x47a310);
w4(R+0,u32(0x13ull));
}
B47a315:L47a315:{c.instructions+=3;NFSU2_TR(0x47a315);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a31c:{NFSU2_TR(0x47a31c);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a322:{NFSU2_TR(0x47a322);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a327ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a327:L47a327:{c.instructions+=7;NFSU2_TR(0x47a327);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B47a32a:{NFSU2_TR(0x47a32a);
__builtin_memmove((R+0),(R+24),4);
}
B47a32c:{NFSU2_TR(0x47a32c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B47a32e:{NFSU2_TR(0x47a32e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xdcull))));
}
B47a333:{NFSU2_TR(0x47a333);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a334:{NFSU2_TR(0x47a334);
__builtin_memmove(gp(0x82cb80),(R+24),4);
}
B47a33a:{NFSU2_TR(0x47a33a);
{goto L47a49d;}
}
B47a33f:L47a33f:{c.instructions+=8;NFSU2_TR(0x47a33f);
__builtin_memmove((R+0),gp(0x82cb7c),4);
}
B47a344:{NFSU2_TR(0x47a344);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a348:{NFSU2_TR(0x47a348);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B47a349:{NFSU2_TR(0x47a349);
w4(R+4,u32(0x3ull));
}
B47a34e:{NFSU2_TR(0x47a34e);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a34e);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a34e);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B47a350:{NFSU2_TR(0x47a350);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a356:{NFSU2_TR(0x47a356);
__builtin_memmove((R+24),(R+8),4);
}
B47a358:{NFSU2_TR(0x47a358);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a35dull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a35d:L47a35d:{c.instructions+=2;NFSU2_TR(0x47a35d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a35f:{NFSU2_TR(0x47a35f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a365;}}
}
B47a361:L47a361:{c.instructions+=2;NFSU2_TR(0x47a361);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a363:{NFSU2_TR(0x47a363);
{goto L47a36f;}
}
B47a365:L47a365:{c.instructions+=2;NFSU2_TR(0x47a365);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a368:{NFSU2_TR(0x47a368);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a36f;}}
}
B47a36a:L47a36a:{c.instructions+=1;NFSU2_TR(0x47a36a);
w4(R+0,u32(0x13ull));
}
B47a36f:L47a36f:{c.instructions+=3;NFSU2_TR(0x47a36f);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a376:{NFSU2_TR(0x47a376);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a37c:{NFSU2_TR(0x47a37c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a381ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a381:L47a381:{c.instructions+=7;NFSU2_TR(0x47a381);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B47a384:{NFSU2_TR(0x47a384);
__builtin_memmove((R+0),(R+24),4);
}
B47a386:{NFSU2_TR(0x47a386);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B47a388:{NFSU2_TR(0x47a388);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x82ull))));
}
B47a38d:{NFSU2_TR(0x47a38d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a38e:{NFSU2_TR(0x47a38e);
__builtin_memmove(gp(0x82cb7c),(R+24),4);
}
B47a394:{NFSU2_TR(0x47a394);
{goto L47a49d;}
}
B47a399:L47a399:{c.instructions+=8;NFSU2_TR(0x47a399);
__builtin_memmove((R+0),gp(0x82cb78),4);
}
B47a39e:{NFSU2_TR(0x47a39e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a3a2:{NFSU2_TR(0x47a3a2);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B47a3a3:{NFSU2_TR(0x47a3a3);
w4(R+4,u32(0x3ull));
}
B47a3a8:{NFSU2_TR(0x47a3a8);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a3a8);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a3a8);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B47a3aa:{NFSU2_TR(0x47a3aa);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a3b0:{NFSU2_TR(0x47a3b0);
__builtin_memmove((R+24),(R+8),4);
}
B47a3b2:{NFSU2_TR(0x47a3b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a3b7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a3b7:L47a3b7:{c.instructions+=2;NFSU2_TR(0x47a3b7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a3b9:{NFSU2_TR(0x47a3b9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a3bf;}}
}
B47a3bb:L47a3bb:{c.instructions+=2;NFSU2_TR(0x47a3bb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a3bd:{NFSU2_TR(0x47a3bd);
{goto L47a3c9;}
}
B47a3bf:L47a3bf:{c.instructions+=2;NFSU2_TR(0x47a3bf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a3c2:{NFSU2_TR(0x47a3c2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a3c9;}}
}
B47a3c4:L47a3c4:{c.instructions+=1;NFSU2_TR(0x47a3c4);
w4(R+0,u32(0x13ull));
}
B47a3c9:L47a3c9:{c.instructions+=3;NFSU2_TR(0x47a3c9);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a3d0:{NFSU2_TR(0x47a3d0);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a3d6:{NFSU2_TR(0x47a3d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a3dbull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a3db:L47a3db:{c.instructions+=7;NFSU2_TR(0x47a3db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B47a3de:{NFSU2_TR(0x47a3de);
__builtin_memmove((R+0),(R+24),4);
}
B47a3e0:{NFSU2_TR(0x47a3e0);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B47a3e2:{NFSU2_TR(0x47a3e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x73ull))));
}
B47a3e5:{NFSU2_TR(0x47a3e5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a3e6:{NFSU2_TR(0x47a3e6);
__builtin_memmove(gp(0x82cb78),(R+24),4);
}
B47a3ec:{NFSU2_TR(0x47a3ec);
{goto L47a49d;}
}
B47a3f1:L47a3f1:{c.instructions+=8;NFSU2_TR(0x47a3f1);
__builtin_memmove((R+0),gp(0x82cb74),4);
}
B47a3f6:{NFSU2_TR(0x47a3f6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a3fa:{NFSU2_TR(0x47a3fa);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B47a3fb:{NFSU2_TR(0x47a3fb);
w4(R+4,u32(0x3ull));
}
B47a400:{NFSU2_TR(0x47a400);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a400);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a400);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B47a402:{NFSU2_TR(0x47a402);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a408:{NFSU2_TR(0x47a408);
__builtin_memmove((R+24),(R+8),4);
}
B47a40a:{NFSU2_TR(0x47a40a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a40full));
TAIL_STATIC(0x75bed4u,75b);
}
B47a40f:L47a40f:{c.instructions+=2;NFSU2_TR(0x47a40f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a411:{NFSU2_TR(0x47a411);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a417;}}
}
B47a413:L47a413:{c.instructions+=2;NFSU2_TR(0x47a413);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a415:{NFSU2_TR(0x47a415);
{goto L47a421;}
}
B47a417:L47a417:{c.instructions+=2;NFSU2_TR(0x47a417);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a41a:{NFSU2_TR(0x47a41a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a421;}}
}
B47a41c:L47a41c:{c.instructions+=1;NFSU2_TR(0x47a41c);
w4(R+0,u32(0x13ull));
}
B47a421:L47a421:{c.instructions+=3;NFSU2_TR(0x47a421);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a428:{NFSU2_TR(0x47a428);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a42e:{NFSU2_TR(0x47a42e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a433ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a433:L47a433:{c.instructions+=7;NFSU2_TR(0x47a433);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B47a436:{NFSU2_TR(0x47a436);
__builtin_memmove((R+0),(R+24),4);
}
B47a438:{NFSU2_TR(0x47a438);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B47a43a:{NFSU2_TR(0x47a43a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xafull))));
}
B47a43f:{NFSU2_TR(0x47a43f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a440:{NFSU2_TR(0x47a440);
__builtin_memmove(gp(0x82cb74),(R+24),4);
}
B47a446:{NFSU2_TR(0x47a446);
{goto L47a49d;}
}
B47a448:L47a448:{c.instructions+=8;NFSU2_TR(0x47a448);
__builtin_memmove((R+0),gp(0x82cb70),4);
}
B47a44d:{NFSU2_TR(0x47a44d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a451:{NFSU2_TR(0x47a451);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B47a452:{NFSU2_TR(0x47a452);
w4(R+4,u32(0x3ull));
}
B47a457:{NFSU2_TR(0x47a457);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a457);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x47a457);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B47a459:{NFSU2_TR(0x47a459);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a45f:{NFSU2_TR(0x47a45f);
__builtin_memmove((R+24),(R+8),4);
}
B47a461:{NFSU2_TR(0x47a461);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a466ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a466:L47a466:{c.instructions+=2;NFSU2_TR(0x47a466);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a468:{NFSU2_TR(0x47a468);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a46e;}}
}
B47a46a:L47a46a:{c.instructions+=2;NFSU2_TR(0x47a46a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a46c:{NFSU2_TR(0x47a46c);
{goto L47a478;}
}
B47a46e:L47a46e:{c.instructions+=2;NFSU2_TR(0x47a46e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a471:{NFSU2_TR(0x47a471);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a478;}}
}
B47a473:L47a473:{c.instructions+=1;NFSU2_TR(0x47a473);
w4(R+0,u32(0x13ull));
}
B47a478:L47a478:{c.instructions+=3;NFSU2_TR(0x47a478);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a47f:{NFSU2_TR(0x47a47f);
{u32 ea_=u32(u32(7912188u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a485:{NFSU2_TR(0x47a485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a48aull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a48a:L47a48a:{c.instructions+=6;NFSU2_TR(0x47a48a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B47a48d:{NFSU2_TR(0x47a48d);
__builtin_memmove((R+0),(R+24),4);
}
B47a48f:{NFSU2_TR(0x47a48f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B47a491:{NFSU2_TR(0x47a491);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x109ull))));
}
B47a496:{NFSU2_TR(0x47a496);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a497:{NFSU2_TR(0x47a497);
__builtin_memmove(gp(0x82cb70),(R+24),4);
}
B47a49d:L47a49d:{c.instructions+=5;NFSU2_TR(0x47a49d);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B47a4a3:{NFSU2_TR(0x47a4a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47a4a9:{NFSU2_TR(0x47a4a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a4aa:{NFSU2_TR(0x47a4aa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B47a4ad:{NFSU2_TR(0x47a4ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a4b2ull));
TAIL_STATIC(0x43be60u,43b);
}
B47a4b2:L47a4b2:{c.instructions+=3;NFSU2_TR(0x47a4b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47a4b5:{NFSU2_TR(0x47a4b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47a4b6:{NFSU2_TR(0x47a4b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47a550:L47a550:{c.instructions+=9;NFSU2_TR(0x47a550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B47a553:{NFSU2_TR(0x47a553);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a554:{NFSU2_TR(0x47a554);
__builtin_memmove((R+12),(R+4),4);
}
B47a556:{NFSU2_TR(0x47a556);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47a559:{NFSU2_TR(0x47a559);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47a55c:{NFSU2_TR(0x47a55c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a55d:{NFSU2_TR(0x47a55d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a55e:{NFSU2_TR(0x47a55e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47a562:{NFSU2_TR(0x47a562);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a567ull));
TAIL_STATIC(0x592d80u,592);
}
B47a567:L47a567:{c.instructions+=3;NFSU2_TR(0x47a567);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47a569:{NFSU2_TR(0x47a569);
__builtin_memmove((R+4),(R+0),4);
}
B47a56b:{NFSU2_TR(0x47a56b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a56eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47a56e:L47a56e:{c.instructions+=5;NFSU2_TR(0x47a56e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a572:{NFSU2_TR(0x47a572);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47a578:{NFSU2_TR(0x47a578);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47a57e:{NFSU2_TR(0x47a57e);
w4(R+4,u32(0x7ull));
}
B47a583:{NFSU2_TR(0x47a583);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B47a587:L47a587:{c.instructions+=1;NFSU2_TR(0x47a587);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L47a589;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47a587u);}goto L47a587;}
}
B47a589:L47a589:{c.instructions+=13;NFSU2_TR(0x47a589);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a58d:{NFSU2_TR(0x47a58d);
{u32 ea_=u32((r4(R+8)*4u)+u32(7898356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a594:{NFSU2_TR(0x47a594);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47a598:{NFSU2_TR(0x47a598);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47a59c:{NFSU2_TR(0x47a59c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47a5a0:{NFSU2_TR(0x47a5a0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B47a5a4:{NFSU2_TR(0x47a5a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47a5a8:{NFSU2_TR(0x47a5a8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B47a5ac:{NFSU2_TR(0x47a5ac);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B47a5ae:{NFSU2_TR(0x47a5ae);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47a5b4:{NFSU2_TR(0x47a5b4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47a5b6:{NFSU2_TR(0x47a5b6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47a5b9:{NFSU2_TR(0x47a5b9);
if(r1(R+514)){{goto L47a5c9;}}
}
B47a5bb:L47a5bb:{c.instructions+=3;NFSU2_TR(0x47a5bb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a5bf:{NFSU2_TR(0x47a5bf);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47a5c5:{NFSU2_TR(0x47a5c5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47a5c9:L47a5c9:{c.instructions+=5;NFSU2_TR(0x47a5c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47a5cd:{NFSU2_TR(0x47a5cd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47a5d1:{NFSU2_TR(0x47a5d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B47a5d5:{NFSU2_TR(0x47a5d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47a5d9:{NFSU2_TR(0x47a5d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a5deull));
TAIL_STATIC(0x4599e0u,459);
}
B47a5de:L47a5de:{c.instructions+=3;NFSU2_TR(0x47a5de);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47a5e2:{NFSU2_TR(0x47a5e2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47a5e4:{NFSU2_TR(0x47a5e4);
if(r1(R+518)){{goto L47a5ef;}}
}
B47a5e6:L47a5e6:{c.instructions+=2;NFSU2_TR(0x47a5e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B47a5ea:{NFSU2_TR(0x47a5ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a5efull));
TAIL_STATIC(0x4599e0u,459);
}
B47a5ef:L47a5ef:{c.instructions+=3;NFSU2_TR(0x47a5ef);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a5f3:{NFSU2_TR(0x47a5f3);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a5f9:{NFSU2_TR(0x47a5f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a5feull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a5fe:L47a5fe:{c.instructions+=6;NFSU2_TR(0x47a5fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47a5ff:{NFSU2_TR(0x47a5ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47a600:{NFSU2_TR(0x47a600);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47a603:{NFSU2_TR(0x47a603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47a604:{NFSU2_TR(0x47a604);
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
B47a607:{NFSU2_TR(0x47a607);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47a610:L47a610:{c.instructions+=5;NFSU2_TR(0x47a610);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47a616:{NFSU2_TR(0x47a616);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a618:{NFSU2_TR(0x47a618);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B47a61a:{NFSU2_TR(0x47a61a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a61b:{NFSU2_TR(0x47a61b);
if(r1(R+518)){{goto L47a67f;}}
}
B47a61d:L47a61d:{c.instructions+=2;NFSU2_TR(0x47a61d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B47a61e:{NFSU2_TR(0x47a61e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47a6d8;}}
}
B47a624:L47a624:{c.instructions+=3;NFSU2_TR(0x47a624);
__builtin_memmove((R+24),gp(0x82cbdc),4);
}
B47a62a:{NFSU2_TR(0x47a62a);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B47a630:{NFSU2_TR(0x47a630);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L47a637;}}
}
B47a632:L47a632:{c.instructions+=3;NFSU2_TR(0x47a632);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B47a633:{NFSU2_TR(0x47a633);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xfffffffcull))));
}
B47a636:{NFSU2_TR(0x47a636);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a637:L47a637:{c.instructions+=3;NFSU2_TR(0x47a637);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a63b:{NFSU2_TR(0x47a63b);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a641:{NFSU2_TR(0x47a641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a646ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a646:L47a646:{c.instructions+=2;NFSU2_TR(0x47a646);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a648:{NFSU2_TR(0x47a648);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a64e;}}
}
B47a64a:L47a64a:{c.instructions+=2;NFSU2_TR(0x47a64a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a64c:{NFSU2_TR(0x47a64c);
{goto L47a658;}
}
B47a64e:L47a64e:{c.instructions+=2;NFSU2_TR(0x47a64e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a651:{NFSU2_TR(0x47a651);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a658;}}
}
B47a653:L47a653:{c.instructions+=1;NFSU2_TR(0x47a653);
w4(R+0,u32(0x13ull));
}
B47a658:L47a658:{c.instructions+=3;NFSU2_TR(0x47a658);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a65f:{NFSU2_TR(0x47a65f);
{u32 ea_=u32(u32(7912196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a665:{NFSU2_TR(0x47a665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a66aull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a66a:L47a66a:{c.instructions+=8;NFSU2_TR(0x47a66a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B47a66d:{NFSU2_TR(0x47a66d);
__builtin_memmove((R+4),(R+0),4);
}
B47a66f:{NFSU2_TR(0x47a66f);
__builtin_memmove((R+0),(R+24),4);
}
B47a671:{NFSU2_TR(0x47a671);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B47a673:{NFSU2_TR(0x47a673);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
}
B47a676:{NFSU2_TR(0x47a676);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a677:{NFSU2_TR(0x47a677);
__builtin_memmove(gp(0x82cbdc),(R+24),4);
}
B47a67d:{NFSU2_TR(0x47a67d);
{goto L47a6d8;}
}
B47a67f:L47a67f:{c.instructions+=3;NFSU2_TR(0x47a67f);
__builtin_memmove((R+24),gp(0x82cbd8),4);
}
B47a685:{NFSU2_TR(0x47a685);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B47a68b:{NFSU2_TR(0x47a68b);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L47a692;}}
}
B47a68d:L47a68d:{c.instructions+=3;NFSU2_TR(0x47a68d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B47a68e:{NFSU2_TR(0x47a68e);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xfffffffcull))));
}
B47a691:{NFSU2_TR(0x47a691);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a692:L47a692:{c.instructions+=3;NFSU2_TR(0x47a692);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a696:{NFSU2_TR(0x47a696);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a69c:{NFSU2_TR(0x47a69c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a6a1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a6a1:L47a6a1:{c.instructions+=2;NFSU2_TR(0x47a6a1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a6a3:{NFSU2_TR(0x47a6a3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a6a9;}}
}
B47a6a5:L47a6a5:{c.instructions+=2;NFSU2_TR(0x47a6a5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a6a7:{NFSU2_TR(0x47a6a7);
{goto L47a6b3;}
}
B47a6a9:L47a6a9:{c.instructions+=2;NFSU2_TR(0x47a6a9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a6ac:{NFSU2_TR(0x47a6ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a6b3;}}
}
B47a6ae:L47a6ae:{c.instructions+=1;NFSU2_TR(0x47a6ae);
w4(R+0,u32(0x13ull));
}
B47a6b3:L47a6b3:{c.instructions+=3;NFSU2_TR(0x47a6b3);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a6ba:{NFSU2_TR(0x47a6ba);
{u32 ea_=u32(u32(7912196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a6c0:{NFSU2_TR(0x47a6c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a6c5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a6c5:L47a6c5:{c.instructions+=7;NFSU2_TR(0x47a6c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B47a6c8:{NFSU2_TR(0x47a6c8);
__builtin_memmove((R+8),(R+0),4);
}
B47a6ca:{NFSU2_TR(0x47a6ca);
__builtin_memmove((R+0),(R+24),4);
}
B47a6cc:{NFSU2_TR(0x47a6cc);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B47a6ce:{NFSU2_TR(0x47a6ce);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
}
B47a6d1:{NFSU2_TR(0x47a6d1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a6d2:{NFSU2_TR(0x47a6d2);
__builtin_memmove(gp(0x82cbd8),(R+24),4);
}
B47a6d8:L47a6d8:{c.instructions+=5;NFSU2_TR(0x47a6d8);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B47a6de:{NFSU2_TR(0x47a6de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47a6e4:{NFSU2_TR(0x47a6e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a6e5:{NFSU2_TR(0x47a6e5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B47a6e8:{NFSU2_TR(0x47a6e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a6edull));
TAIL_STATIC(0x43be60u,43b);
}
B47a6ed:L47a6ed:{c.instructions+=3;NFSU2_TR(0x47a6ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47a6f0:{NFSU2_TR(0x47a6f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47a6f1:{NFSU2_TR(0x47a6f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47a700:L47a700:{c.instructions+=3;NFSU2_TR(0x47a700);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a701:{NFSU2_TR(0x47a701);
__builtin_memmove((R+24),(R+4),4);
}
B47a703:{NFSU2_TR(0x47a703);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a708ull));
TAIL_STATIC(0x479a20u,479);
}
B47a708:L47a708:{c.instructions+=3;NFSU2_TR(0x47a708);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47a70e:{NFSU2_TR(0x47a70e);
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
B47a710:{NFSU2_TR(0x47a710);
if(r1(R+518)){{goto L47a760;}}
}
B47a712:L47a712:{c.instructions+=8;NFSU2_TR(0x47a712);
{u32 ea_=u32(r4(R+4)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a718:{NFSU2_TR(0x47a718);
{u32 ea_=u32(r4(R+4)+u32(176u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47a71e:{NFSU2_TR(0x47a71e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a724:{NFSU2_TR(0x47a724);
{u32 ea_=u32(r4(R+4)+u32(184u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47a72a:{NFSU2_TR(0x47a72a);
{u32 ea_=u32(u32(8312164u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47a730:{NFSU2_TR(0x47a730);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47a732:{NFSU2_TR(0x47a732);
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
B47a735:{NFSU2_TR(0x47a735);
if(r1(R+514)){{goto L47a760;}}
}
B47a737:L47a737:{c.instructions+=1;NFSU2_TR(0x47a737);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a73cull));
TAIL_STATIC(0x5ec1f0u,5ec);
}
B47a73c:L47a73c:{c.instructions+=4;NFSU2_TR(0x47a73c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47a742:{NFSU2_TR(0x47a742);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47a744:{NFSU2_TR(0x47a744);
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
B47a747:{NFSU2_TR(0x47a747);
if(r1(R+514)){{goto L47a760;}}
}
B47a749:L47a749:{c.instructions+=6;NFSU2_TR(0x47a749);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47a74c:{NFSU2_TR(0x47a74c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x32ull))));
}
B47a74f:{NFSU2_TR(0x47a74f);
__builtin_memmove((R+0),(R+8),4);
}
B47a751:{NFSU2_TR(0x47a751);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7full))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7full)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47a754:{NFSU2_TR(0x47a754);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47a757:{NFSU2_TR(0x47a757);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a760;}}
}
B47a759:L47a759:{c.instructions+=1;NFSU2_TR(0x47a759);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x7full));
s4(u32(r4(U+0)),r4(U+4));
}
B47a760:L47a760:{c.instructions+=2;NFSU2_TR(0x47a760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47a761:{NFSU2_TR(0x47a761);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47a770:L47a770:{c.instructions+=3;NFSU2_TR(0x47a770);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47a776:{NFSU2_TR(0x47a776);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a778:{NFSU2_TR(0x47a778);
if(r1(R+518)){{goto L47a79f;}}
}
B47a77a:L47a77a:{c.instructions+=3;NFSU2_TR(0x47a77a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47a77d:{NFSU2_TR(0x47a77d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a77f:{NFSU2_TR(0x47a77f);
if(r1(R+518)){{goto L47a79f;}}
}
B47a781:L47a781:{c.instructions+=2;NFSU2_TR(0x47a781);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47a785:{NFSU2_TR(0x47a785);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47a79f;}}
}
B47a787:L47a787:{c.instructions+=5;NFSU2_TR(0x47a787);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47a78b:{NFSU2_TR(0x47a78b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
}
B47a78e:{NFSU2_TR(0x47a78e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7full)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a791:{NFSU2_TR(0x47a791);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47a795:{NFSU2_TR(0x47a795);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a79f;}}
}
B47a797:L47a797:{c.instructions+=1;NFSU2_TR(0x47a797);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x7full));
s4(u32(r4(U+0)),r4(U+4));
}
B47a79f:L47a79f:{c.instructions+=5;NFSU2_TR(0x47a79f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47a7a3:{NFSU2_TR(0x47a7a3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B47a7a6:{NFSU2_TR(0x47a7a6);
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
B47a7a9:{NFSU2_TR(0x47a7a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a7aa:{NFSU2_TR(0x47a7aa);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L47a927;}}
}
B47a7b0:L47a7b0:{c.instructions+=1;NFSU2_TR(0x47a7b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x47a948ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47a7b7:L47a7b7:{c.instructions+=3;NFSU2_TR(0x47a7b7);
__builtin_memmove((R+24),gp(0x82cbec),4);
}
B47a7bd:{NFSU2_TR(0x47a7bd);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B47a7c3:{NFSU2_TR(0x47a7c3);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L47a7ca;}}
}
B47a7c5:L47a7c5:{c.instructions+=3;NFSU2_TR(0x47a7c5);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B47a7c6:{NFSU2_TR(0x47a7c6);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xfffffffcull))));
}
B47a7c9:{NFSU2_TR(0x47a7c9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a7ca:L47a7ca:{c.instructions+=3;NFSU2_TR(0x47a7ca);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a7ce:{NFSU2_TR(0x47a7ce);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a7d4:{NFSU2_TR(0x47a7d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a7d9ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a7d9:L47a7d9:{c.instructions+=2;NFSU2_TR(0x47a7d9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a7db:{NFSU2_TR(0x47a7db);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a7e1;}}
}
B47a7dd:L47a7dd:{c.instructions+=2;NFSU2_TR(0x47a7dd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a7df:{NFSU2_TR(0x47a7df);
{goto L47a7eb;}
}
B47a7e1:L47a7e1:{c.instructions+=2;NFSU2_TR(0x47a7e1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a7e4:{NFSU2_TR(0x47a7e4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a7eb;}}
}
B47a7e6:L47a7e6:{c.instructions+=1;NFSU2_TR(0x47a7e6);
w4(R+0,u32(0x13ull));
}
B47a7eb:L47a7eb:{c.instructions+=3;NFSU2_TR(0x47a7eb);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a7f2:{NFSU2_TR(0x47a7f2);
{u32 ea_=u32(u32(7912196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a7f8:{NFSU2_TR(0x47a7f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a7fdull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a7fd:L47a7fd:{c.instructions+=8;NFSU2_TR(0x47a7fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B47a800:{NFSU2_TR(0x47a800);
__builtin_memmove((R+4),(R+0),4);
}
B47a802:{NFSU2_TR(0x47a802);
__builtin_memmove((R+0),(R+24),4);
}
B47a804:{NFSU2_TR(0x47a804);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B47a806:{NFSU2_TR(0x47a806);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4eull))));
}
B47a809:{NFSU2_TR(0x47a809);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a80a:{NFSU2_TR(0x47a80a);
__builtin_memmove(gp(0x82cbec),(R+24),4);
}
B47a810:{NFSU2_TR(0x47a810);
{goto L47a92c;}
}
B47a815:L47a815:{c.instructions+=3;NFSU2_TR(0x47a815);
__builtin_memmove((R+24),gp(0x82cbe8),4);
}
B47a81b:{NFSU2_TR(0x47a81b);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B47a821:{NFSU2_TR(0x47a821);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L47a828;}}
}
B47a823:L47a823:{c.instructions+=3;NFSU2_TR(0x47a823);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B47a824:{NFSU2_TR(0x47a824);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xfffffffeull))));
}
B47a827:{NFSU2_TR(0x47a827);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a828:L47a828:{c.instructions+=3;NFSU2_TR(0x47a828);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a82c:{NFSU2_TR(0x47a82c);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a832:{NFSU2_TR(0x47a832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a837ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a837:L47a837:{c.instructions+=2;NFSU2_TR(0x47a837);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a839:{NFSU2_TR(0x47a839);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a83f;}}
}
B47a83b:L47a83b:{c.instructions+=2;NFSU2_TR(0x47a83b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a83d:{NFSU2_TR(0x47a83d);
{goto L47a849;}
}
B47a83f:L47a83f:{c.instructions+=2;NFSU2_TR(0x47a83f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a842:{NFSU2_TR(0x47a842);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a849;}}
}
B47a844:L47a844:{c.instructions+=1;NFSU2_TR(0x47a844);
w4(R+0,u32(0x13ull));
}
B47a849:L47a849:{c.instructions+=3;NFSU2_TR(0x47a849);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a850:{NFSU2_TR(0x47a850);
{u32 ea_=u32(u32(7912196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a856:{NFSU2_TR(0x47a856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a85bull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a85b:L47a85b:{c.instructions+=6;NFSU2_TR(0x47a85b);
w4(R+8,u32(0x23ull));
}
B47a860:{NFSU2_TR(0x47a860);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B47a862:{NFSU2_TR(0x47a862);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B47a865:{NFSU2_TR(0x47a865);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a866:{NFSU2_TR(0x47a866);
__builtin_memmove(gp(0x82cbe8),(R+24),4);
}
B47a86c:{NFSU2_TR(0x47a86c);
{goto L47a92c;}
}
B47a871:L47a871:{c.instructions+=3;NFSU2_TR(0x47a871);
__builtin_memmove((R+24),gp(0x82cbe4),4);
}
B47a877:{NFSU2_TR(0x47a877);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B47a87d:{NFSU2_TR(0x47a87d);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L47a884;}}
}
B47a87f:L47a87f:{c.instructions+=3;NFSU2_TR(0x47a87f);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B47a880:{NFSU2_TR(0x47a880);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xfffffffcull))));
}
B47a883:{NFSU2_TR(0x47a883);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a884:L47a884:{c.instructions+=3;NFSU2_TR(0x47a884);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a888:{NFSU2_TR(0x47a888);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a88e:{NFSU2_TR(0x47a88e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a893ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a893:L47a893:{c.instructions+=2;NFSU2_TR(0x47a893);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a895:{NFSU2_TR(0x47a895);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a89b;}}
}
B47a897:L47a897:{c.instructions+=2;NFSU2_TR(0x47a897);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a899:{NFSU2_TR(0x47a899);
{goto L47a8a5;}
}
B47a89b:L47a89b:{c.instructions+=2;NFSU2_TR(0x47a89b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a89e:{NFSU2_TR(0x47a89e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a8a5;}}
}
B47a8a0:L47a8a0:{c.instructions+=1;NFSU2_TR(0x47a8a0);
w4(R+0,u32(0x13ull));
}
B47a8a5:L47a8a5:{c.instructions+=3;NFSU2_TR(0x47a8a5);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a8ac:{NFSU2_TR(0x47a8ac);
{u32 ea_=u32(u32(7912196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a8b2:{NFSU2_TR(0x47a8b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a8b7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a8b7:L47a8b7:{c.instructions+=8;NFSU2_TR(0x47a8b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B47a8ba:{NFSU2_TR(0x47a8ba);
__builtin_memmove((R+4),(R+0),4);
}
B47a8bc:{NFSU2_TR(0x47a8bc);
__builtin_memmove((R+0),(R+24),4);
}
B47a8be:{NFSU2_TR(0x47a8be);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B47a8c0:{NFSU2_TR(0x47a8c0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x36ull))));
}
B47a8c3:{NFSU2_TR(0x47a8c3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a8c4:{NFSU2_TR(0x47a8c4);
__builtin_memmove(gp(0x82cbe4),(R+24),4);
}
B47a8ca:{NFSU2_TR(0x47a8ca);
{goto L47a92c;}
}
B47a8cc:L47a8cc:{c.instructions+=3;NFSU2_TR(0x47a8cc);
__builtin_memmove((R+24),gp(0x82cbe0),4);
}
B47a8d2:{NFSU2_TR(0x47a8d2);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x80000003ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B47a8d8:{NFSU2_TR(0x47a8d8);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L47a8df;}}
}
B47a8da:L47a8da:{c.instructions+=3;NFSU2_TR(0x47a8da);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B47a8db:{NFSU2_TR(0x47a8db);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xfffffffcull))));
}
B47a8de:{NFSU2_TR(0x47a8de);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a8df:L47a8df:{c.instructions+=3;NFSU2_TR(0x47a8df);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47a8e3:{NFSU2_TR(0x47a8e3);
{u32 ea_=u32(u32(7912192u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a8e9:{NFSU2_TR(0x47a8e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a8eeull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a8ee:L47a8ee:{c.instructions+=2;NFSU2_TR(0x47a8ee);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47a8f0:{NFSU2_TR(0x47a8f0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47a8f6;}}
}
B47a8f2:L47a8f2:{c.instructions+=2;NFSU2_TR(0x47a8f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47a8f4:{NFSU2_TR(0x47a8f4);
{goto L47a900;}
}
B47a8f6:L47a8f6:{c.instructions+=2;NFSU2_TR(0x47a8f6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x13ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a8f9:{NFSU2_TR(0x47a8f9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47a900;}}
}
B47a8fb:L47a8fb:{c.instructions+=1;NFSU2_TR(0x47a8fb);
w4(R+0,u32(0x13ull));
}
B47a900:L47a900:{c.instructions+=3;NFSU2_TR(0x47a900);
{u32 ea_=u32((r4(R+0)*4u)+u32(8309624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47a907:{NFSU2_TR(0x47a907);
{u32 ea_=u32(u32(7912196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47a90d:{NFSU2_TR(0x47a90d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a912ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47a912:L47a912:{c.instructions+=8;NFSU2_TR(0x47a912);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B47a915:{NFSU2_TR(0x47a915);
__builtin_memmove((R+8),(R+0),4);
}
B47a917:{NFSU2_TR(0x47a917);
__builtin_memmove((R+0),(R+24),4);
}
B47a919:{NFSU2_TR(0x47a919);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B47a91b:{NFSU2_TR(0x47a91b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x26ull))));
}
B47a91e:{NFSU2_TR(0x47a91e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47a91f:{NFSU2_TR(0x47a91f);
__builtin_memmove(gp(0x82cbe0),(R+24),4);
}
B47a925:{NFSU2_TR(0x47a925);
{goto L47a92c;}
}
B47a927:L47a927:{c.instructions+=1;NFSU2_TR(0x47a927);
w4(R+0,u32(0x26ull));
}
B47a92c:L47a92c:{c.instructions+=5;NFSU2_TR(0x47a92c);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B47a932:{NFSU2_TR(0x47a932);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47a938:{NFSU2_TR(0x47a938);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a939:{NFSU2_TR(0x47a939);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B47a93c:{NFSU2_TR(0x47a93c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a941ull));
TAIL_STATIC(0x43be60u,43b);
}
B47a941:L47a941:{c.instructions+=3;NFSU2_TR(0x47a941);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47a944:{NFSU2_TR(0x47a944);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47a945:{NFSU2_TR(0x47a945);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47a960:L47a960:{c.instructions+=3;NFSU2_TR(0x47a960);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a961:{NFSU2_TR(0x47a961);
__builtin_memmove((R+24),(R+4),4);
}
B47a963:{NFSU2_TR(0x47a963);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a968ull));
TAIL_STATIC(0x46a080u,46a);
}
B47a968:L47a968:{c.instructions+=8;NFSU2_TR(0x47a968);
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
B47a96a:{NFSU2_TR(0x47a96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47a970:{NFSU2_TR(0x47a970);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47a976:{NFSU2_TR(0x47a976);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47a97c:{NFSU2_TR(0x47a97c);
u8 U[4];
w4(U+0,u32(0x78bb08ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47a982:{NFSU2_TR(0x47a982);
__builtin_memmove((R+0),(R+24),4);
}
B47a984:{NFSU2_TR(0x47a984);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47a985:{NFSU2_TR(0x47a985);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47a990:L47a990:{c.instructions+=17;NFSU2_TR(0x47a990);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a992:{NFSU2_TR(0x47a992);
u8 U[4];
w4(U+0,u32(0x7725f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a997:{NFSU2_TR(0x47a997);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47a99d:{NFSU2_TR(0x47a99d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a99e:{NFSU2_TR(0x47a99e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47a9a5:{NFSU2_TR(0x47a9a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B47a9a8:{NFSU2_TR(0x47a9a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a9a9:{NFSU2_TR(0x47a9a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a9aa:{NFSU2_TR(0x47a9aa);
__builtin_memmove((R+24),(R+4),4);
}
B47a9ac:{NFSU2_TR(0x47a9ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a9ad:{NFSU2_TR(0x47a9ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47a9b1:{NFSU2_TR(0x47a9b1);
u8 U[4];
w4(U+0,u32(0x78bb08ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47a9b7:{NFSU2_TR(0x47a9b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47a9bd:{NFSU2_TR(0x47a9bd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47a9bf:{NFSU2_TR(0x47a9bf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a9c1:{NFSU2_TR(0x47a9c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47a9c5:{NFSU2_TR(0x47a9c5);
if(r1(R+518)){{goto L47a9f4;}}
}
B47a9c7:L47a9c7:{c.instructions+=3;NFSU2_TR(0x47a9c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47a9c9:{NFSU2_TR(0x47a9c9);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47a9cb:{NFSU2_TR(0x47a9cb);
if(r1(R+518)){{goto L47a9d2;}}
}
B47a9cd:L47a9cd:{c.instructions+=1;NFSU2_TR(0x47a9cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a9d2ull));
TAIL_STATIC(0x735550u,735);
}
B47a9d2:L47a9d2:{c.instructions+=3;NFSU2_TR(0x47a9d2);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47a9d6:{NFSU2_TR(0x47a9d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a9d7:{NFSU2_TR(0x47a9d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a9dcull));
TAIL_STATIC(0x734df0u,734);
}
B47a9dc:L47a9dc:{c.instructions+=2;NFSU2_TR(0x47a9dc);
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
B47a9df:{NFSU2_TR(0x47a9df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a9e4ull));
TAIL_STATIC(0x734e40u,734);
}
B47a9e4:L47a9e4:{c.instructions+=5;NFSU2_TR(0x47a9e4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47a9e8:{NFSU2_TR(0x47a9e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47a9ea:{NFSU2_TR(0x47a9ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a9eb:{NFSU2_TR(0x47a9eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47a9ec:{NFSU2_TR(0x47a9ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a9efull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47a9ef:L47a9ef:{c.instructions+=1;NFSU2_TR(0x47a9ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47a9f4ull));
TAIL_STATIC(0x734e60u,734);
}
B47a9f4:L47a9f4:{c.instructions+=4;NFSU2_TR(0x47a9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47a9fa:{NFSU2_TR(0x47a9fa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47a9fc:{NFSU2_TR(0x47a9fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47aa02:{NFSU2_TR(0x47aa02);
if(r1(R+518)){{goto L47aa31;}}
}
B47aa04:L47aa04:{c.instructions+=3;NFSU2_TR(0x47aa04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47aa06:{NFSU2_TR(0x47aa06);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47aa08:{NFSU2_TR(0x47aa08);
if(r1(R+518)){{goto L47aa0f;}}
}
B47aa0a:L47aa0a:{c.instructions+=1;NFSU2_TR(0x47aa0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47aa0full));
TAIL_STATIC(0x735550u,735);
}
B47aa0f:L47aa0f:{c.instructions+=3;NFSU2_TR(0x47aa0f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47aa13:{NFSU2_TR(0x47aa13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47aa14:{NFSU2_TR(0x47aa14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47aa19ull));
TAIL_STATIC(0x734df0u,734);
}
B47aa19:L47aa19:{c.instructions+=2;NFSU2_TR(0x47aa19);
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
B47aa1c:{NFSU2_TR(0x47aa1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47aa21ull));
TAIL_STATIC(0x734e40u,734);
}
B47aa21:L47aa21:{c.instructions+=5;NFSU2_TR(0x47aa21);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47aa25:{NFSU2_TR(0x47aa25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47aa27:{NFSU2_TR(0x47aa27);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47aa28:{NFSU2_TR(0x47aa28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47aa29:{NFSU2_TR(0x47aa29);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47aa2cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47aa2c:L47aa2c:{c.instructions+=1;NFSU2_TR(0x47aa2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47aa31ull));
TAIL_STATIC(0x734e60u,734);
}
B47aa31:L47aa31:{c.instructions+=4;NFSU2_TR(0x47aa31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47aa37:{NFSU2_TR(0x47aa37);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47aa39:{NFSU2_TR(0x47aa39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47aa3f:{NFSU2_TR(0x47aa3f);
if(r1(R+518)){{goto L47aa6e;}}
}
B47aa41:L47aa41:{c.instructions+=3;NFSU2_TR(0x47aa41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47aa43:{NFSU2_TR(0x47aa43);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47aa45:{NFSU2_TR(0x47aa45);
if(r1(R+518)){{goto L47aa4c;}}
}
B47aa47:L47aa47:{c.instructions+=1;NFSU2_TR(0x47aa47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47aa4cull));
TAIL_STATIC(0x735550u,735);
}
B47aa4c:L47aa4c:{c.instructions+=3;NFSU2_TR(0x47aa4c);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47aa50:{NFSU2_TR(0x47aa50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47aa51:{NFSU2_TR(0x47aa51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47aa56ull));
TAIL_STATIC(0x734df0u,734);
}
B47aa56:L47aa56:{c.instructions+=2;NFSU2_TR(0x47aa56);
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
B47aa59:{NFSU2_TR(0x47aa59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47aa5eull));
TAIL_STATIC(0x734e40u,734);
}
B47aa5e:L47aa5e:{c.instructions+=5;NFSU2_TR(0x47aa5e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47aa62:{NFSU2_TR(0x47aa62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47aa64:{NFSU2_TR(0x47aa64);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47aa65:{NFSU2_TR(0x47aa65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47aa66:{NFSU2_TR(0x47aa66);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47aa69ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47aa69:L47aa69:{c.instructions+=1;NFSU2_TR(0x47aa69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47aa6eull));
TAIL_STATIC(0x734e60u,734);
}
B47aa6e:L47aa6e:{c.instructions+=4;NFSU2_TR(0x47aa6e);
__builtin_memmove((R+4),(R+24),4);
}
B47aa70:{NFSU2_TR(0x47aa70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47aa76:{NFSU2_TR(0x47aa76);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B47aa7e:{NFSU2_TR(0x47aa7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47aa83ull));
TAIL_STATIC(0x479880u,479);
}
B47aa83:L47aa83:{c.instructions+=7;NFSU2_TR(0x47aa83);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47aa87:{NFSU2_TR(0x47aa87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47aa88:{NFSU2_TR(0x47aa88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47aa89:{NFSU2_TR(0x47aa89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47aa8a:{NFSU2_TR(0x47aa8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47aa91:{NFSU2_TR(0x47aa91);
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
B47aa94:{NFSU2_TR(0x47aa94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47aaa0:L47aaa0:{c.instructions+=8;NFSU2_TR(0x47aaa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47aaa4:{NFSU2_TR(0x47aaa4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47aaa5:{NFSU2_TR(0x47aaa5);
__builtin_memmove((R+24),(R+4),4);
}
B47aaa7:{NFSU2_TR(0x47aaa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47aaab:{NFSU2_TR(0x47aaab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47aaac:{NFSU2_TR(0x47aaac);
__builtin_memmove((R+4),(R+24),4);
}
B47aaae:{NFSU2_TR(0x47aaae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47aab1:{NFSU2_TR(0x47aab1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47aab6ull));
TAIL_STATIC(0x46b100u,46b);
}
B47aab6:L47aab6:{c.instructions+=3;NFSU2_TR(0x47aab6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47aab9:{NFSU2_TR(0x47aab9);
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
B47aabb:{NFSU2_TR(0x47aabb);
if(r1(R+518)){{goto L47aac4;}}
}
B47aabd:L47aabd:{c.instructions+=2;NFSU2_TR(0x47aabd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47aac1:{NFSU2_TR(0x47aac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47aac4:L47aac4:{c.instructions+=2;NFSU2_TR(0x47aac4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47aac5:{NFSU2_TR(0x47aac5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47aad0:L47aad0:{c.instructions+=6;NFSU2_TR(0x47aad0);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B47aad5:{NFSU2_TR(0x47aad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B47aad8:{NFSU2_TR(0x47aad8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47aada:{NFSU2_TR(0x47aada);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47aadb:{NFSU2_TR(0x47aadb);
__builtin_memmove((R+24),(R+4),4);
}
B47aadd:{NFSU2_TR(0x47aadd);
if(r1(R+518)){{goto L47aaf7;}}
}
B47aadf:L47aadf:{c.instructions+=5;NFSU2_TR(0x47aadf);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47aae3:{NFSU2_TR(0x47aae3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47aae4:{NFSU2_TR(0x47aae4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47aae6:{NFSU2_TR(0x47aae6);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47aaeb:{NFSU2_TR(0x47aaeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47aaf0ull));
TAIL_STATIC(0x72163du,721);
}
B47aaf0:L47aaf0:{c.instructions+=3;NFSU2_TR(0x47aaf0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47aaf3:{NFSU2_TR(0x47aaf3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47aaf5:{NFSU2_TR(0x47aaf5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47aafe;}}
}
B47aaf7:L47aaf7:{c.instructions+=4;NFSU2_TR(0x47aaf7);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B47aaf9:{NFSU2_TR(0x47aaf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47aafa:{NFSU2_TR(0x47aafa);
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
B47aafd:{NFSU2_TR(0x47aafd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47aafe:L47aafe:{c.instructions+=8;NFSU2_TR(0x47aafe);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47ab04:{NFSU2_TR(0x47ab04);
__builtin_memmove((R+8),gp(0x82b06c),4);
}
B47ab0a:{NFSU2_TR(0x47ab0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ab0b:{NFSU2_TR(0x47ab0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ab0c:{NFSU2_TR(0x47ab0c);
u8 U[4];
w4(U+0,u32(0x78bb58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ab11:{NFSU2_TR(0x47ab11);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ab16:{NFSU2_TR(0x47ab16);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ab17:{NFSU2_TR(0x47ab17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ab1cull));
TAIL_STATIC(0x440df0u,440);
}
B47ab1c:L47ab1c:{c.instructions+=3;NFSU2_TR(0x47ab1c);
u8 U[4];
w4(U+0,u32(0x82c694ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ab21:{NFSU2_TR(0x47ab21);
__builtin_memmove(gp(0x82afa8),(R+0),4);
}
B47ab26:{NFSU2_TR(0x47ab26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ab2bull));
TAIL_STATIC(0x734de0u,734);
}
B47ab2b:L47ab2b:{c.instructions+=1;NFSU2_TR(0x47ab2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ab30ull));
TAIL_STATIC(0x734e10u,734);
}
B47ab30:L47ab30:{c.instructions+=1;NFSU2_TR(0x47ab30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ab35ull));
TAIL_STATIC(0x724314u,724);
}
B47ab35:L47ab35:{c.instructions+=1;NFSU2_TR(0x47ab35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ab3aull));
TAIL_STATIC(0x7242cdu,724);
}
B47ab3a:L47ab3a:{c.instructions+=2;NFSU2_TR(0x47ab3a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ab3c:{NFSU2_TR(0x47ab3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ab41ull));
TAIL_STATIC(0x7215c7u,721);
}
B47ab41:L47ab41:{c.instructions+=5;NFSU2_TR(0x47ab41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x64000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47ab48:{NFSU2_TR(0x47ab48);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47ab4d:{NFSU2_TR(0x47ab4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ab4e:{NFSU2_TR(0x47ab4e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B47ab50:{NFSU2_TR(0x47ab50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ab55ull));
TAIL_STATIC(0x43e910u,43e);
}
B47ab55:L47ab55:{c.instructions+=3;NFSU2_TR(0x47ab55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B47ab58:{NFSU2_TR(0x47ab58);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x64400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x64400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47ab5d:{NFSU2_TR(0x47ab5d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47ab7e;}}
}
B47ab5f:L47ab5f:{c.instructions+=6;NFSU2_TR(0x47ab5f);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47ab65:{NFSU2_TR(0x47ab65);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47ab68:{NFSU2_TR(0x47ab68);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47ab6e:{NFSU2_TR(0x47ab6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ab6f:{NFSU2_TR(0x47ab6f);
u8 U[4];
w4(U+0,u32(0x64000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ab74:{NFSU2_TR(0x47ab74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ab79ull));
TAIL_STATIC(0x440820u,440);
}
B47ab79:L47ab79:{c.instructions+=2;NFSU2_TR(0x47ab79);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47ab7c:{NFSU2_TR(0x47ab7c);
__builtin_memmove((R+28),(R+0),4);
}
B47ab7e:L47ab7e:{c.instructions+=5;NFSU2_TR(0x47ab7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ab81:{NFSU2_TR(0x47ab81);
__builtin_memmove((R+8),gp(0x7ecbd0),4);
}
B47ab87:{NFSU2_TR(0x47ab87);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ab88:{NFSU2_TR(0x47ab88);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ab8a:{NFSU2_TR(0x47ab8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ab8full));
TAIL_STATIC(0x7216c6u,721);
}
B47ab8f:L47ab8f:{c.instructions+=6;NFSU2_TR(0x47ab8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47ab92:{NFSU2_TR(0x47ab92);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ab94:{NFSU2_TR(0x47ab94);
__builtin_memmove((R+4),(R+24),4);
}
B47ab96:{NFSU2_TR(0x47ab96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47ab9d:{NFSU2_TR(0x47ab9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47aba4:{NFSU2_TR(0x47aba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47aba9ull));
TAIL_STATIC(0x46b2c0u,46b);
}
B47aba9:L47aba9:{c.instructions+=4;NFSU2_TR(0x47aba9);
__builtin_memmove((R+0),gp(0x87099c),4);
}
B47abae:{NFSU2_TR(0x47abae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47abb0:{NFSU2_TR(0x47abb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47abb1:{NFSU2_TR(0x47abb1);
if(r1(R+518)){{goto L47abc2;}}
}
B47abb3:L47abb3:{c.instructions+=3;NFSU2_TR(0x47abb3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47abb6:{NFSU2_TR(0x47abb6);
s4(0x7ecbd8,u32(0xac44ull));
}
B47abc0:{NFSU2_TR(0x47abc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47abcc;}}
}
B47abc2:L47abc2:{c.instructions+=1;NFSU2_TR(0x47abc2);
s4(0x7ecbd8,u32(0x5622ull));
}
B47abcc:L47abcc:{c.instructions+=3;NFSU2_TR(0x47abcc);
__builtin_memmove((R+0),gp(0x82b96c),4);
}
B47abd1:{NFSU2_TR(0x47abd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47abd3:{NFSU2_TR(0x47abd3);
if(r1(R+518)){{goto L47abda;}}
}
B47abd5:L47abd5:{c.instructions+=1;NFSU2_TR(0x47abd5);
__builtin_memmove(gp(0x7ecbd8),(R+0),4);
}
B47abda:L47abda:{c.instructions+=4;NFSU2_TR(0x47abda);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47abde:{NFSU2_TR(0x47abde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47abdf:{NFSU2_TR(0x47abdf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47abe1:{NFSU2_TR(0x47abe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47abe6ull));
TAIL_STATIC(0x721776u,721);
}
B47abe6:L47abe6:{c.instructions+=3;NFSU2_TR(0x47abe6);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47abe8:{NFSU2_TR(0x47abe8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47abea:{NFSU2_TR(0x47abea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47abefull));
TAIL_STATIC(0x721725u,721);
}
B47abef:L47abef:{c.instructions+=4;NFSU2_TR(0x47abef);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B47abf3:{NFSU2_TR(0x47abf3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47abf4:{NFSU2_TR(0x47abf4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47abf6:{NFSU2_TR(0x47abf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47abfbull));
TAIL_STATIC(0x721776u,721);
}
B47abfb:L47abfb:{c.instructions+=3;NFSU2_TR(0x47abfb);
__builtin_memmove((R+8),gp(0x7ecbd4),4);
}
B47ac01:{NFSU2_TR(0x47ac01);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ac02:{NFSU2_TR(0x47ac02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ac07ull));
TAIL_STATIC(0x7215f5u,721);
}
B47ac07:L47ac07:{c.instructions+=4;NFSU2_TR(0x47ac07);
__builtin_memmove((R+0),gp(0x7ecbd8),4);
}
B47ac0c:{NFSU2_TR(0x47ac0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ac0d:{NFSU2_TR(0x47ac0d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ac0f:{NFSU2_TR(0x47ac0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ac14ull));
TAIL_STATIC(0x7216c6u,721);
}
B47ac14:L47ac14:{c.instructions+=1;NFSU2_TR(0x47ac14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ac19ull));
TAIL_STATIC(0x72428bu,724);
}
B47ac19:L47ac19:{c.instructions+=6;NFSU2_TR(0x47ac19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ac1c:{NFSU2_TR(0x47ac1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47ac1f:{NFSU2_TR(0x47ac1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ac20:{NFSU2_TR(0x47ac20);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ac21:{NFSU2_TR(0x47ac21);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ac23:{NFSU2_TR(0x47ac23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ac28ull));
TAIL_STATIC(0x72192eu,721);
}
B47ac28:L47ac28:{c.instructions+=3;NFSU2_TR(0x47ac28);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ac2d:{NFSU2_TR(0x47ac2d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ac2f:{NFSU2_TR(0x47ac2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ac34ull));
TAIL_STATIC(0x72194eu,721);
}
B47ac34:L47ac34:{c.instructions+=2;NFSU2_TR(0x47ac34);
u8 U[4];
w4(U+0,u32(0x90304ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ac39:{NFSU2_TR(0x47ac39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ac3eull));
TAIL_STATIC(0x7217a7u,721);
}
B47ac3e:L47ac3e:{c.instructions+=5;NFSU2_TR(0x47ac3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B47ac41:{NFSU2_TR(0x47ac41);
w1(R+0,u8(0x1ull));
}
B47ac43:{NFSU2_TR(0x47ac43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47ac44:{NFSU2_TR(0x47ac44);
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
B47ac47:{NFSU2_TR(0x47ac47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47ac50:L47ac50:{c.instructions+=6;NFSU2_TR(0x47ac50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ac54:{NFSU2_TR(0x47ac54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ac55:{NFSU2_TR(0x47ac55);
__builtin_memmove((R+24),(R+4),4);
}
B47ac57:{NFSU2_TR(0x47ac57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ac5d:{NFSU2_TR(0x47ac5d);
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
B47ac5f:{NFSU2_TR(0x47ac5f);
if(r1(R+518)){{goto L47af07;}}
}
B47ac65:L47ac65:{c.instructions+=5;NFSU2_TR(0x47ac65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ac6b:{NFSU2_TR(0x47ac6b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B47ac6c:{NFSU2_TR(0x47ac6c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47ac6f:{NFSU2_TR(0x47ac6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ac75:{NFSU2_TR(0x47ac75);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L47af07;}}
}
B47ac7b:L47ac7b:{c.instructions+=1;NFSU2_TR(0x47ac7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x47af0cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47ac82:L47ac82:{c.instructions+=3;NFSU2_TR(0x47ac82);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B47ac87:{NFSU2_TR(0x47ac87);
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
B47ac89:{NFSU2_TR(0x47ac89);
if(r1(R+518)){{goto L47af07;}}
}
B47ac8f:L47ac8f:{c.instructions+=3;NFSU2_TR(0x47ac8f);
__builtin_memmove((R+4),gp(0x82afb0),4);
}
B47ac95:{NFSU2_TR(0x47ac95);
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
B47ac97:{NFSU2_TR(0x47ac97);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47af07;}}
}
B47ac9d:L47ac9d:{c.instructions+=4;NFSU2_TR(0x47ac9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47aca3:{NFSU2_TR(0x47aca3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47aca5:{NFSU2_TR(0x47aca5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47aca6:{NFSU2_TR(0x47aca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47acabull));
TAIL_STATIC(0x739030u,739);
}
B47acab:L47acab:{c.instructions+=4;NFSU2_TR(0x47acab);
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
B47acae:{NFSU2_TR(0x47acae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47acb5:{NFSU2_TR(0x47acb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47acb6:{NFSU2_TR(0x47acb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47acb9:L47acb9:{c.instructions+=1;NFSU2_TR(0x47acb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47acbeull));
TAIL_STATIC(0x4fe4a0u,4fe);
}
B47acbe:L47acbe:{c.instructions+=2;NFSU2_TR(0x47acbe);
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
B47acc0:{NFSU2_TR(0x47acc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47af07;}}
}
B47acc6:L47acc6:{c.instructions+=3;NFSU2_TR(0x47acc6);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B47accb:{NFSU2_TR(0x47accb);
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
B47accd:{NFSU2_TR(0x47accd);
if(r1(R+518)){{goto L47af07;}}
}
B47acd3:L47acd3:{c.instructions+=3;NFSU2_TR(0x47acd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B47acd9:{NFSU2_TR(0x47acd9);
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
B47acdb:{NFSU2_TR(0x47acdb);
if(r1(R+518)){{goto L47af07;}}
}
B47ace1:L47ace1:{c.instructions+=4;NFSU2_TR(0x47ace1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ace3:{NFSU2_TR(0x47ace3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ace5:{NFSU2_TR(0x47ace5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47ace8:{NFSU2_TR(0x47ace8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47acedull));
TAIL_STATIC(0x46c800u,46c);
}
B47aced:L47aced:{c.instructions+=5;NFSU2_TR(0x47aced);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47acf3:{NFSU2_TR(0x47acf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47acf9:{NFSU2_TR(0x47acf9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47acfb:{NFSU2_TR(0x47acfb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47acfc:{NFSU2_TR(0x47acfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ad01ull));
TAIL_STATIC(0x739030u,739);
}
B47ad01:L47ad01:{c.instructions+=4;NFSU2_TR(0x47ad01);
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
B47ad04:{NFSU2_TR(0x47ad04);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47ad0b:{NFSU2_TR(0x47ad0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47ad0c:{NFSU2_TR(0x47ad0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47ad0f:L47ad0f:{c.instructions+=3;NFSU2_TR(0x47ad0f);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B47ad14:{NFSU2_TR(0x47ad14);
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
B47ad16:{NFSU2_TR(0x47ad16);
if(r1(R+518)){{goto L47adb8;}}
}
B47ad1c:L47ad1c:{c.instructions+=3;NFSU2_TR(0x47ad1c);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ad23:{NFSU2_TR(0x47ad23);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa5ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47ad2a:{NFSU2_TR(0x47ad2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ad49;}}
}
B47ad2c:L47ad2c:{c.instructions+=5;NFSU2_TR(0x47ad2c);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B47ad31:{NFSU2_TR(0x47ad31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ad37:{NFSU2_TR(0x47ad37);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ad39:{NFSU2_TR(0x47ad39);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ad3a:{NFSU2_TR(0x47ad3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ad3full));
TAIL_STATIC(0x739030u,739);
}
B47ad3f:L47ad3f:{c.instructions+=2;NFSU2_TR(0x47ad3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47ad42:{NFSU2_TR(0x47ad42);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47ad49:L47ad49:{c.instructions+=5;NFSU2_TR(0x47ad49);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B47ad4f:{NFSU2_TR(0x47ad4f);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47ad55:{NFSU2_TR(0x47ad55);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ad58:{NFSU2_TR(0x47ad58);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47ad5a:{NFSU2_TR(0x47ad5a);
if(r1(R+518)){{goto L47ad69;}}
}
B47ad5c:L47ad5c:{c.instructions+=4;NFSU2_TR(0x47ad5c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B47ad5e:{NFSU2_TR(0x47ad5e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47ad61:{NFSU2_TR(0x47ad61);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47ad63:{NFSU2_TR(0x47ad63);
{u32 ea_=u32(u32(7904500u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47ad69:L47ad69:{c.instructions+=2;NFSU2_TR(0x47ad69);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47ad6b:{NFSU2_TR(0x47ad6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ad70ull));
TAIL_STATIC(0x75bed4u,75b);
}
B47ad70:L47ad70:{c.instructions+=2;NFSU2_TR(0x47ad70);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47ad72:{NFSU2_TR(0x47ad72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ad8a;}}
}
B47ad74:L47ad74:{c.instructions+=4;NFSU2_TR(0x47ad74);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B47ad79:{NFSU2_TR(0x47ad79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ad7f:{NFSU2_TR(0x47ad7f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ad80:{NFSU2_TR(0x47ad80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ad85ull));
TAIL_STATIC(0x739320u,739);
}
B47ad85:L47ad85:{c.instructions+=2;NFSU2_TR(0x47ad85);
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
B47ad88:{NFSU2_TR(0x47ad88);
{goto L47adab;}
}
B47ad8a:L47ad8a:{c.instructions+=2;NFSU2_TR(0x47ad8a);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1bull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1bull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B47ad8e:{NFSU2_TR(0x47ad8e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47ada5;}}
}
B47ad90:L47ad90:{c.instructions+=4;NFSU2_TR(0x47ad90);
__builtin_memmove((R+8),gp(0x82b974),4);
}
B47ad96:{NFSU2_TR(0x47ad96);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ad9c:{NFSU2_TR(0x47ad9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ad9d:{NFSU2_TR(0x47ad9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ada2ull));
TAIL_STATIC(0x739320u,739);
}
B47ada2:L47ada2:{c.instructions+=1;NFSU2_TR(0x47ada2);
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
B47ada5:L47ada5:{c.instructions+=2;NFSU2_TR(0x47ada5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ada8:{NFSU2_TR(0x47ada8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47adab:L47adab:{c.instructions+=4;NFSU2_TR(0x47adab);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47adb1:{NFSU2_TR(0x47adb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47adb3:{NFSU2_TR(0x47adb3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47adb5:{NFSU2_TR(0x47adb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47adb8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47adb8:L47adb8:{c.instructions+=3;NFSU2_TR(0x47adb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47adc2:{NFSU2_TR(0x47adc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47adc3:{NFSU2_TR(0x47adc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47adc6:L47adc6:{c.instructions+=2;NFSU2_TR(0x47adc6);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B47adcd:{NFSU2_TR(0x47adcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ae0a;}}
}
B47adcf:L47adcf:{c.instructions+=5;NFSU2_TR(0x47adcf);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B47add4:{NFSU2_TR(0x47add4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47adda:{NFSU2_TR(0x47adda);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47addc:{NFSU2_TR(0x47addc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47addd:{NFSU2_TR(0x47addd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ade2ull));
TAIL_STATIC(0x739030u,739);
}
B47ade2:L47ade2:{c.instructions+=8;NFSU2_TR(0x47ade2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47ade5:{NFSU2_TR(0x47ade5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47adec:{NFSU2_TR(0x47adec);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa5ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47adf3:{NFSU2_TR(0x47adf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47adf6:{NFSU2_TR(0x47adf6);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B47adfb:{NFSU2_TR(0x47adfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ae01:{NFSU2_TR(0x47ae01);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ae02:{NFSU2_TR(0x47ae02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ae07ull));
TAIL_STATIC(0x739320u,739);
}
B47ae07:L47ae07:{c.instructions+=1;NFSU2_TR(0x47ae07);
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
B47ae0a:L47ae0a:{c.instructions+=6;NFSU2_TR(0x47ae0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47ae0d:{NFSU2_TR(0x47ae0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ae10:{NFSU2_TR(0x47ae10);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47ae16:{NFSU2_TR(0x47ae16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47ae18:{NFSU2_TR(0x47ae18);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ae1a:{NFSU2_TR(0x47ae1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ae1dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47ae1d:L47ae1d:{c.instructions+=4;NFSU2_TR(0x47ae1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa5ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47ae24:{NFSU2_TR(0x47ae24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47ae2e:{NFSU2_TR(0x47ae2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47ae2f:{NFSU2_TR(0x47ae2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47ae32:L47ae32:{c.instructions+=3;NFSU2_TR(0x47ae32);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B47ae37:{NFSU2_TR(0x47ae37);
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
B47ae39:{NFSU2_TR(0x47ae39);
if(r1(R+518)){{goto L47af07;}}
}
B47ae3f:L47ae3f:{c.instructions+=2;NFSU2_TR(0x47ae3f);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ae46:{NFSU2_TR(0x47ae46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ae65;}}
}
B47ae48:L47ae48:{c.instructions+=4;NFSU2_TR(0x47ae48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ae4e:{NFSU2_TR(0x47ae4e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ae50:{NFSU2_TR(0x47ae50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ae51:{NFSU2_TR(0x47ae51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ae56ull));
TAIL_STATIC(0x739030u,739);
}
B47ae56:L47ae56:{c.instructions+=3;NFSU2_TR(0x47ae56);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47ae5d:{NFSU2_TR(0x47ae5d);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B47ae62:{NFSU2_TR(0x47ae62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47ae65:L47ae65:{c.instructions+=3;NFSU2_TR(0x47ae65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47ae6b:{NFSU2_TR(0x47ae6b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ae6c:{NFSU2_TR(0x47ae6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ae71ull));
TAIL_STATIC(0x739320u,739);
}
B47ae71:L47ae71:{c.instructions+=3;NFSU2_TR(0x47ae71);
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
B47ae74:{NFSU2_TR(0x47ae74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47ae75:{NFSU2_TR(0x47ae75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47ae78:L47ae78:{c.instructions+=3;NFSU2_TR(0x47ae78);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B47ae7d:{NFSU2_TR(0x47ae7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47ae7f:{NFSU2_TR(0x47ae7f);
if(r1(R+518)){{goto L47aec4;}}
}
B47ae81:L47ae81:{c.instructions+=2;NFSU2_TR(0x47ae81);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ae88:{NFSU2_TR(0x47ae88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47aea7;}}
}
B47ae8a:L47ae8a:{c.instructions+=4;NFSU2_TR(0x47ae8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ae90:{NFSU2_TR(0x47ae90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ae92:{NFSU2_TR(0x47ae92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ae93:{NFSU2_TR(0x47ae93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ae98ull));
TAIL_STATIC(0x739030u,739);
}
B47ae98:L47ae98:{c.instructions+=3;NFSU2_TR(0x47ae98);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47ae9f:{NFSU2_TR(0x47ae9f);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B47aea4:{NFSU2_TR(0x47aea4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47aea7:L47aea7:{c.instructions+=3;NFSU2_TR(0x47aea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47aead:{NFSU2_TR(0x47aead);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47aeae:{NFSU2_TR(0x47aeae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47aeb3ull));
TAIL_STATIC(0x739320u,739);
}
B47aeb3:L47aeb3:{c.instructions+=3;NFSU2_TR(0x47aeb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47aeba:{NFSU2_TR(0x47aeba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47aebd:{NFSU2_TR(0x47aebd);
s1(0x82b9cc,u8(0x1ull));
}
B47aec4:L47aec4:{c.instructions+=2;NFSU2_TR(0x47aec4);
u8 U[22];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xfffffffeull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xfffffffeull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B47aec9:{NFSU2_TR(0x47aec9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47af07;}}
}
B47aecb:L47aecb:{c.instructions+=2;NFSU2_TR(0x47aecb);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(m1(0x83acbc))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47aed2:{NFSU2_TR(0x47aed2);
if(r1(R+518)){{goto L47af07;}}
}
B47aed4:L47aed4:{c.instructions+=3;NFSU2_TR(0x47aed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47aede:{NFSU2_TR(0x47aede);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47aedf:{NFSU2_TR(0x47aedf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47aee2:L47aee2:{c.instructions+=3;NFSU2_TR(0x47aee2);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B47aee7:{NFSU2_TR(0x47aee7);
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
B47aee9:{NFSU2_TR(0x47aee9);
if(r1(R+518)){{goto L47af07;}}
}
B47aeeb:L47aeeb:{c.instructions+=5;NFSU2_TR(0x47aeeb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa5ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47aef2:{NFSU2_TR(0x47aef2);
__builtin_memmove((R+8),gp(0x82b974),4);
}
B47aef8:{NFSU2_TR(0x47aef8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47aefe:{NFSU2_TR(0x47aefe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47aeff:{NFSU2_TR(0x47aeff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47af04ull));
TAIL_STATIC(0x739320u,739);
}
B47af04:L47af04:{c.instructions+=1;NFSU2_TR(0x47af04);
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
B47af07:L47af07:{c.instructions+=2;NFSU2_TR(0x47af07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47af08:{NFSU2_TR(0x47af08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47af40:L47af40:{c.instructions+=10;NFSU2_TR(0x47af40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47af41:{NFSU2_TR(0x47af41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47af42:{NFSU2_TR(0x47af42);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47af44:{NFSU2_TR(0x47af44);
__builtin_memmove((R+24),(R+4),4);
}
B47af46:{NFSU2_TR(0x47af46);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47af47:{NFSU2_TR(0x47af47);
__builtin_memmove(gp(0x82b9d4),(R+12),4);
}
B47af4d:{NFSU2_TR(0x47af4d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47af4f:{NFSU2_TR(0x47af4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47af52:{NFSU2_TR(0x47af52);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47af58:{NFSU2_TR(0x47af58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47af5dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47ac50u);}goto L47ac50;}
}
B47af5d:L47af5d:{c.instructions+=4;NFSU2_TR(0x47af5d);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47af63:{NFSU2_TR(0x47af63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47af65:{NFSU2_TR(0x47af65);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47af66:{NFSU2_TR(0x47af66);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47af69ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47af69:L47af69:{c.instructions+=7;NFSU2_TR(0x47af69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47af6f:{NFSU2_TR(0x47af6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47af72:{NFSU2_TR(0x47af72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B47af79:{NFSU2_TR(0x47af79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w4(U+4,u32(0xfffffffeull));
s4(u32(r4(U+0)),r4(U+4));
}
B47af80:{NFSU2_TR(0x47af80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47af81:{NFSU2_TR(0x47af81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47af82:{NFSU2_TR(0x47af82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47af90:L47af90:{c.instructions+=6;NFSU2_TR(0x47af90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47af91:{NFSU2_TR(0x47af91);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B47af95:{NFSU2_TR(0x47af95);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x1bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47af98:{NFSU2_TR(0x47af98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47af99:{NFSU2_TR(0x47af99);
__builtin_memmove((R+24),(R+4),4);
}
B47af9b:{NFSU2_TR(0x47af9b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x47b073u,47b);}
}
B47afa1:L47afa1:{c.instructions+=2;NFSU2_TR(0x47afa1);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47afa8:{NFSU2_TR(0x47afa8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47afc7;}}
}
B47afaa:L47afaa:{c.instructions+=5;NFSU2_TR(0x47afaa);
__builtin_memmove((R+0),gp(0x82b974),4);
}
B47afaf:{NFSU2_TR(0x47afaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47afb5:{NFSU2_TR(0x47afb5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47afb7:{NFSU2_TR(0x47afb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47afb8:{NFSU2_TR(0x47afb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47afbdull));
TAIL_STATIC(0x739030u,739);
}
B47afbd:L47afbd:{c.instructions+=2;NFSU2_TR(0x47afbd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47afc0:{NFSU2_TR(0x47afc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47afc7:L47afc7:{c.instructions+=5;NFSU2_TR(0x47afc7);
__builtin_memmove((R+8),gp(0x82b974),4);
}
B47afcd:{NFSU2_TR(0x47afcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47afd3:{NFSU2_TR(0x47afd3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47afd4:{NFSU2_TR(0x47afd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47afd5:{NFSU2_TR(0x47afd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47afdaull));
TAIL_STATIC(0x739320u,739);
}
B47afda:L47afda:{c.instructions+=5;NFSU2_TR(0x47afda);
__builtin_memmove((R+4),gp(0x82b974),4);
}
B47afe0:{NFSU2_TR(0x47afe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47afe6:{NFSU2_TR(0x47afe6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47afe7:{NFSU2_TR(0x47afe7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47afe8:{NFSU2_TR(0x47afe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47afedull));
TAIL_STATIC(0x7399e0u,739);
}
B47afed:L47afed:{c.instructions+=4;NFSU2_TR(0x47afed);
__builtin_memmove((R+28),gp(0x82b974),4);
}
B47aff3:{NFSU2_TR(0x47aff3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x4ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47aff6:{NFSU2_TR(0x47aff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47affd:{NFSU2_TR(0x47affd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47b002ull));
TAIL_STATIC(0x721f99u,721);
}
XIT:NFSU2_TR_EXIT(0x47a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
