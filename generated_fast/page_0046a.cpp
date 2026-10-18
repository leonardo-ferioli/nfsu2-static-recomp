#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_468(u8* __restrict R,Cpu& c);
u32 body_46b(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x46a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x46a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_46a(u8* __restrict R,Cpu& c);
u32 page_46a(Cpu& c){return body_46a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_46a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x46a004:goto L46a004;
case 0x46a009:c.instructions+=15;goto B46a009;
case 0x46a00f:c.instructions+=14;goto B46a00f;
case 0x46a015:c.instructions+=13;goto B46a015;
case 0x46a01b:c.instructions+=12;goto B46a01b;
case 0x46a021:c.instructions+=11;goto B46a021;
case 0x46a027:c.instructions+=10;goto B46a027;
case 0x46a02d:c.instructions+=9;goto B46a02d;
case 0x46a033:c.instructions+=8;goto B46a033;
case 0x46a039:c.instructions+=7;goto B46a039;
case 0x46a03e:c.instructions+=6;goto B46a03e;
case 0x46a048:c.instructions+=5;goto B46a048;
case 0x46a04a:c.instructions+=4;goto B46a04a;
case 0x46a050:c.instructions+=3;goto B46a050;
case 0x46a052:c.instructions+=2;goto B46a052;
case 0x46a055:c.instructions+=1;goto B46a055;
case 0x46a057:goto L46a057;
case 0x46a05d:c.instructions+=2;goto B46a05d;
case 0x46a063:c.instructions+=1;goto B46a063;
case 0x46a069:goto L46a069;
case 0x46a06e:c.instructions+=3;goto B46a06e;
case 0x46a078:c.instructions+=2;goto B46a078;
case 0x46a07d:c.instructions+=1;goto B46a07d;
case 0x46a080:goto L46a080;
case 0x46a081:c.instructions+=24;goto B46a081;
case 0x46a083:c.instructions+=23;goto B46a083;
case 0x46a086:c.instructions+=22;goto B46a086;
case 0x46a088:c.instructions+=21;goto B46a088;
case 0x46a08d:c.instructions+=20;goto B46a08d;
case 0x46a093:c.instructions+=19;goto B46a093;
case 0x46a094:c.instructions+=18;goto B46a094;
case 0x46a09b:c.instructions+=17;goto B46a09b;
case 0x46a09e:c.instructions+=16;goto B46a09e;
case 0x46a09f:c.instructions+=15;goto B46a09f;
case 0x46a0a1:c.instructions+=14;goto B46a0a1;
case 0x46a0a2:c.instructions+=13;goto B46a0a2;
case 0x46a0a4:c.instructions+=12;goto B46a0a4;
case 0x46a0aa:c.instructions+=11;goto B46a0aa;
case 0x46a0ad:c.instructions+=10;goto B46a0ad;
case 0x46a0af:c.instructions+=9;goto B46a0af;
case 0x46a0b3:c.instructions+=8;goto B46a0b3;
case 0x46a0b6:c.instructions+=7;goto B46a0b6;
case 0x46a0b9:c.instructions+=6;goto B46a0b9;
case 0x46a0bc:c.instructions+=5;goto B46a0bc;
case 0x46a0bf:c.instructions+=4;goto B46a0bf;
case 0x46a0c2:c.instructions+=3;goto B46a0c2;
case 0x46a0c5:c.instructions+=2;goto B46a0c5;
case 0x46a0c9:c.instructions+=1;goto B46a0c9;
case 0x46a0ce:goto L46a0ce;
case 0x46a0d2:c.instructions+=3;goto B46a0d2;
case 0x46a0d8:c.instructions+=2;goto B46a0d8;
case 0x46a0dd:c.instructions+=1;goto B46a0dd;
case 0x46a0e2:goto L46a0e2;
case 0x46a0e9:c.instructions+=7;goto B46a0e9;
case 0x46a0ec:c.instructions+=6;goto B46a0ec;
case 0x46a0ee:c.instructions+=5;goto B46a0ee;
case 0x46a0f1:c.instructions+=4;goto B46a0f1;
case 0x46a0f4:c.instructions+=3;goto B46a0f4;
case 0x46a0f7:c.instructions+=2;goto B46a0f7;
case 0x46a0f8:c.instructions+=1;goto B46a0f8;
case 0x46a0fa:goto L46a0fa;
case 0x46a100:c.instructions+=18;goto B46a100;
case 0x46a106:c.instructions+=17;goto B46a106;
case 0x46a10c:c.instructions+=16;goto B46a10c;
case 0x46a10f:c.instructions+=15;goto B46a10f;
case 0x46a115:c.instructions+=14;goto B46a115;
case 0x46a11b:c.instructions+=13;goto B46a11b;
case 0x46a121:c.instructions+=12;goto B46a121;
case 0x46a127:c.instructions+=11;goto B46a127;
case 0x46a12a:c.instructions+=10;goto B46a12a;
case 0x46a12d:c.instructions+=9;goto B46a12d;
case 0x46a130:c.instructions+=8;goto B46a130;
case 0x46a137:c.instructions+=7;goto B46a137;
case 0x46a13a:c.instructions+=6;goto B46a13a;
case 0x46a13d:c.instructions+=5;goto B46a13d;
case 0x46a13e:c.instructions+=4;goto B46a13e;
case 0x46a141:c.instructions+=3;goto B46a141;
case 0x46a144:c.instructions+=2;goto B46a144;
case 0x46a147:c.instructions+=1;goto B46a147;
case 0x46a14c:goto L46a14c;
case 0x46a150:c.instructions+=15;goto B46a150;
case 0x46a156:c.instructions+=14;goto B46a156;
case 0x46a15c:c.instructions+=13;goto B46a15c;
case 0x46a162:c.instructions+=12;goto B46a162;
case 0x46a168:c.instructions+=11;goto B46a168;
case 0x46a16e:c.instructions+=10;goto B46a16e;
case 0x46a171:c.instructions+=9;goto B46a171;
case 0x46a177:c.instructions+=8;goto B46a177;
case 0x46a17a:c.instructions+=7;goto B46a17a;
case 0x46a17c:c.instructions+=6;goto B46a17c;
case 0x46a17d:c.instructions+=5;goto B46a17d;
case 0x46a184:c.instructions+=4;goto B46a184;
case 0x46a185:c.instructions+=3;goto B46a185;
case 0x46a187:c.instructions+=2;goto B46a187;
case 0x46a188:c.instructions+=1;goto B46a188;
case 0x46a190:goto L46a190;
case 0x46a194:c.instructions+=1;goto B46a194;
case 0x46a1a0:goto L46a1a0;
case 0x46a1a6:c.instructions+=3;goto B46a1a6;
case 0x46a1a8:c.instructions+=2;goto B46a1a8;
case 0x46a1aa:c.instructions+=1;goto B46a1aa;
case 0x46a1ac:goto L46a1ac;
case 0x46a1ad:c.instructions+=7;goto B46a1ad;
case 0x46a1b3:c.instructions+=6;goto B46a1b3;
case 0x46a1b5:c.instructions+=5;goto B46a1b5;
case 0x46a1b7:c.instructions+=4;goto B46a1b7;
case 0x46a1bd:c.instructions+=3;goto B46a1bd;
case 0x46a1c0:c.instructions+=2;goto B46a1c0;
case 0x46a1c1:c.instructions+=1;goto B46a1c1;
case 0x46a1c3:goto L46a1c3;
case 0x46a1c9:c.instructions+=8;goto B46a1c9;
case 0x46a1ce:c.instructions+=7;goto B46a1ce;
case 0x46a1d5:c.instructions+=6;goto B46a1d5;
case 0x46a1d8:c.instructions+=5;goto B46a1d8;
case 0x46a1db:c.instructions+=4;goto B46a1db;
case 0x46a1de:c.instructions+=3;goto B46a1de;
case 0x46a1e1:c.instructions+=2;goto B46a1e1;
case 0x46a1e4:c.instructions+=1;goto B46a1e4;
case 0x46a1e7:goto L46a1e7;
case 0x46a1f0:goto L46a1f0;
case 0x46a1f3:c.instructions+=25;goto B46a1f3;
case 0x46a1f4:c.instructions+=24;goto B46a1f4;
case 0x46a1f6:c.instructions+=23;goto B46a1f6;
case 0x46a1f9:c.instructions+=22;goto B46a1f9;
case 0x46a1fc:c.instructions+=21;goto B46a1fc;
case 0x46a1ff:c.instructions+=20;goto B46a1ff;
case 0x46a202:c.instructions+=19;goto B46a202;
case 0x46a204:c.instructions+=18;goto B46a204;
case 0x46a207:c.instructions+=17;goto B46a207;
case 0x46a209:c.instructions+=16;goto B46a209;
case 0x46a20c:c.instructions+=15;goto B46a20c;
case 0x46a20d:c.instructions+=14;goto B46a20d;
case 0x46a210:c.instructions+=13;goto B46a210;
case 0x46a213:c.instructions+=12;goto B46a213;
case 0x46a216:c.instructions+=11;goto B46a216;
case 0x46a219:c.instructions+=10;goto B46a219;
case 0x46a21c:c.instructions+=9;goto B46a21c;
case 0x46a21f:c.instructions+=8;goto B46a21f;
case 0x46a222:c.instructions+=7;goto B46a222;
case 0x46a224:c.instructions+=6;goto B46a224;
case 0x46a227:c.instructions+=5;goto B46a227;
case 0x46a22a:c.instructions+=4;goto B46a22a;
case 0x46a22d:c.instructions+=3;goto B46a22d;
case 0x46a230:c.instructions+=2;goto B46a230;
case 0x46a231:c.instructions+=1;goto B46a231;
case 0x46a236:goto L46a236;
case 0x46a23c:c.instructions+=3;goto B46a23c;
case 0x46a23f:c.instructions+=2;goto B46a23f;
case 0x46a240:c.instructions+=1;goto B46a240;
case 0x46a245:goto L46a245;
case 0x46a247:c.instructions+=4;goto B46a247;
case 0x46a24a:c.instructions+=3;goto B46a24a;
case 0x46a24c:c.instructions+=2;goto B46a24c;
case 0x46a252:c.instructions+=1;goto B46a252;
case 0x46a255:goto L46a255;
case 0x46a25b:c.instructions+=3;goto B46a25b;
case 0x46a261:c.instructions+=2;goto B46a261;
case 0x46a262:c.instructions+=1;goto B46a262;
case 0x46a267:goto L46a267;
case 0x46a26d:c.instructions+=4;goto B46a26d;
case 0x46a270:c.instructions+=3;goto B46a270;
case 0x46a277:c.instructions+=2;goto B46a277;
case 0x46a27e:c.instructions+=1;goto B46a27e;
case 0x46a283:goto L46a283;
case 0x46a286:c.instructions+=2;goto B46a286;
case 0x46a28c:c.instructions+=1;goto B46a28c;
case 0x46a291:goto L46a291;
case 0x46a297:c.instructions+=9;goto B46a297;
case 0x46a29c:c.instructions+=8;goto B46a29c;
case 0x46a2a2:c.instructions+=7;goto B46a2a2;
case 0x46a2a3:c.instructions+=6;goto B46a2a3;
case 0x46a2a8:c.instructions+=5;goto B46a2a8;
case 0x46a2af:c.instructions+=4;goto B46a2af;
case 0x46a2b9:c.instructions+=3;goto B46a2b9;
case 0x46a2c3:c.instructions+=2;goto B46a2c3;
case 0x46a2c7:c.instructions+=1;goto B46a2c7;
case 0x46a2cd:goto L46a2cd;
case 0x46a2d1:c.instructions+=5;goto B46a2d1;
case 0x46a2d2:c.instructions+=4;goto B46a2d2;
case 0x46a2d6:c.instructions+=3;goto B46a2d6;
case 0x46a2d7:c.instructions+=2;goto B46a2d7;
case 0x46a2da:c.instructions+=1;goto B46a2da;
case 0x46a2df:goto L46a2df;
case 0x46a2e3:c.instructions+=2;goto B46a2e3;
case 0x46a2e5:c.instructions+=1;goto B46a2e5;
case 0x46a2eb:goto L46a2eb;
case 0x46a2ef:c.instructions+=2;goto B46a2ef;
case 0x46a2f1:c.instructions+=1;goto B46a2f1;
case 0x46a2f3:goto L46a2f3;
case 0x46a2fa:c.instructions+=1;goto B46a2fa;
case 0x46a2fc:goto L46a2fc;
case 0x46a2ff:c.instructions+=3;goto B46a2ff;
case 0x46a302:c.instructions+=2;goto B46a302;
case 0x46a305:c.instructions+=1;goto B46a305;
case 0x46a307:goto L46a307;
case 0x46a30a:c.instructions+=2;goto B46a30a;
case 0x46a30d:c.instructions+=1;goto B46a30d;
case 0x46a30f:goto L46a30f;
case 0x46a315:c.instructions+=7;goto B46a315;
case 0x46a31b:c.instructions+=6;goto B46a31b;
case 0x46a321:c.instructions+=5;goto B46a321;
case 0x46a327:c.instructions+=4;goto B46a327;
case 0x46a329:c.instructions+=3;goto B46a329;
case 0x46a32b:c.instructions+=2;goto B46a32b;
case 0x46a32e:c.instructions+=1;goto B46a32e;
case 0x46a330:goto L46a330;
case 0x46a336:c.instructions+=1;goto B46a336;
case 0x46a338:goto L46a338;
case 0x46a33b:c.instructions+=1;goto B46a33b;
case 0x46a33d:goto L46a33d;
case 0x46a343:c.instructions+=1;goto B46a343;
case 0x46a345:goto L46a345;
case 0x46a34b:c.instructions+=7;goto B46a34b;
case 0x46a351:c.instructions+=6;goto B46a351;
case 0x46a357:c.instructions+=5;goto B46a357;
case 0x46a35d:c.instructions+=4;goto B46a35d;
case 0x46a35f:c.instructions+=3;goto B46a35f;
case 0x46a361:c.instructions+=2;goto B46a361;
case 0x46a364:c.instructions+=1;goto B46a364;
case 0x46a366:goto L46a366;
case 0x46a36c:c.instructions+=1;goto B46a36c;
case 0x46a36e:goto L46a36e;
case 0x46a372:goto L46a372;
case 0x46a378:goto L46a378;
case 0x46a37e:c.instructions+=3;goto B46a37e;
case 0x46a384:c.instructions+=2;goto B46a384;
case 0x46a38a:c.instructions+=1;goto B46a38a;
case 0x46a390:goto L46a390;
case 0x46a392:c.instructions+=2;goto B46a392;
case 0x46a394:c.instructions+=1;goto B46a394;
case 0x46a397:goto L46a397;
case 0x46a398:c.instructions+=3;goto B46a398;
case 0x46a399:c.instructions+=2;goto B46a399;
case 0x46a39c:c.instructions+=1;goto B46a39c;
case 0x46a3a0:goto L46a3a0;
case 0x46a3a1:c.instructions+=3;goto B46a3a1;
case 0x46a3a3:c.instructions+=2;goto B46a3a3;
case 0x46a3a5:c.instructions+=1;goto B46a3a5;
case 0x46a3a8:goto L46a3a8;
case 0x46a3aa:c.instructions+=1;goto B46a3aa;
case 0x46a3ac:goto L46a3ac;
case 0x46a3b2:c.instructions+=2;goto B46a3b2;
case 0x46a3b4:c.instructions+=1;goto B46a3b4;
case 0x46a3b6:goto L46a3b6;
case 0x46a3b8:c.instructions+=2;goto B46a3b8;
case 0x46a3ba:c.instructions+=1;goto B46a3ba;
case 0x46a3bd:goto L46a3bd;
case 0x46a3c4:c.instructions+=1;goto B46a3c4;
case 0x46a3ca:goto L46a3ca;
case 0x46a3d0:c.instructions+=2;goto B46a3d0;
case 0x46a3d2:c.instructions+=1;goto B46a3d2;
case 0x46a3d4:goto L46a3d4;
case 0x46a3d7:c.instructions+=2;goto B46a3d7;
case 0x46a3d9:c.instructions+=1;goto B46a3d9;
case 0x46a3db:goto L46a3db;
case 0x46a3e1:c.instructions+=2;goto B46a3e1;
case 0x46a3e3:c.instructions+=1;goto B46a3e3;
case 0x46a3e5:goto L46a3e5;
case 0x46a3e7:c.instructions+=2;goto B46a3e7;
case 0x46a3e9:c.instructions+=1;goto B46a3e9;
case 0x46a3ec:goto L46a3ec;
case 0x46a3f3:goto L46a3f3;
case 0x46a3f4:c.instructions+=1;goto B46a3f4;
case 0x46a400:goto L46a400;
case 0x46a401:c.instructions+=6;goto B46a401;
case 0x46a402:c.instructions+=5;goto B46a402;
case 0x46a403:c.instructions+=4;goto B46a403;
case 0x46a405:c.instructions+=3;goto B46a405;
case 0x46a40b:c.instructions+=2;goto B46a40b;
case 0x46a40d:c.instructions+=1;goto B46a40d;
case 0x46a40f:goto L46a40f;
case 0x46a411:c.instructions+=2;goto B46a411;
case 0x46a413:c.instructions+=1;goto B46a413;
case 0x46a415:goto L46a415;
case 0x46a41a:goto L46a41a;
case 0x46a41e:c.instructions+=2;goto B46a41e;
case 0x46a41f:c.instructions+=1;goto B46a41f;
case 0x46a424:goto L46a424;
case 0x46a427:c.instructions+=1;goto B46a427;
case 0x46a42c:goto L46a42c;
case 0x46a430:c.instructions+=4;goto B46a430;
case 0x46a432:c.instructions+=3;goto B46a432;
case 0x46a434:c.instructions+=2;goto B46a434;
case 0x46a435:c.instructions+=1;goto B46a435;
case 0x46a438:goto L46a438;
case 0x46a43d:goto L46a43d;
case 0x46a447:c.instructions+=1;goto B46a447;
case 0x46a44d:goto L46a44d;
case 0x46a44e:c.instructions+=3;goto B46a44e;
case 0x46a44f:c.instructions+=2;goto B46a44f;
case 0x46a450:c.instructions+=1;goto B46a450;
case 0x46a460:goto L46a460;
case 0x46a461:c.instructions+=6;goto B46a461;
case 0x46a462:c.instructions+=5;goto B46a462;
case 0x46a464:c.instructions+=4;goto B46a464;
case 0x46a467:c.instructions+=3;goto B46a467;
case 0x46a469:c.instructions+=2;goto B46a469;
case 0x46a46b:c.instructions+=1;goto B46a46b;
case 0x46a46d:goto L46a46d;
case 0x46a470:c.instructions+=10;goto B46a470;
case 0x46a473:c.instructions+=9;goto B46a473;
case 0x46a476:c.instructions+=8;goto B46a476;
case 0x46a47c:c.instructions+=7;goto B46a47c;
case 0x46a47e:c.instructions+=6;goto B46a47e;
case 0x46a484:c.instructions+=5;goto B46a484;
case 0x46a48a:c.instructions+=4;goto B46a48a;
case 0x46a48d:c.instructions+=3;goto B46a48d;
case 0x46a48f:c.instructions+=2;goto B46a48f;
case 0x46a496:c.instructions+=1;goto B46a496;
case 0x46a498:goto L46a498;
case 0x46a49e:c.instructions+=3;goto B46a49e;
case 0x46a4a4:c.instructions+=2;goto B46a4a4;
case 0x46a4a6:c.instructions+=1;goto B46a4a6;
case 0x46a4a8:goto L46a4a8;
case 0x46a4aa:c.instructions+=2;goto B46a4aa;
case 0x46a4ab:c.instructions+=1;goto B46a4ab;
case 0x46a4ae:goto L46a4ae;
case 0x46a4b0:c.instructions+=2;goto B46a4b0;
case 0x46a4b3:c.instructions+=1;goto B46a4b3;
case 0x46a4b5:goto L46a4b5;
case 0x46a4bb:goto L46a4bb;
case 0x46a4bd:c.instructions+=3;goto B46a4bd;
case 0x46a4be:c.instructions+=2;goto B46a4be;
case 0x46a4bf:c.instructions+=1;goto B46a4bf;
case 0x46a4c4:goto L46a4c4;
case 0x46a4c6:c.instructions+=3;goto B46a4c6;
case 0x46a4c7:c.instructions+=2;goto B46a4c7;
case 0x46a4c9:c.instructions+=1;goto B46a4c9;
case 0x46a4cc:goto L46a4cc;
case 0x46a4ce:goto L46a4ce;
case 0x46a4d0:c.instructions+=2;goto B46a4d0;
case 0x46a4d2:c.instructions+=1;goto B46a4d2;
case 0x46a4d5:goto L46a4d5;
case 0x46a4d7:c.instructions+=2;goto B46a4d7;
case 0x46a4d9:c.instructions+=1;goto B46a4d9;
case 0x46a4dc:goto L46a4dc;
case 0x46a4e2:c.instructions+=2;goto B46a4e2;
case 0x46a4e4:c.instructions+=1;goto B46a4e4;
case 0x46a4e6:goto L46a4e6;
case 0x46a4e7:c.instructions+=1;goto B46a4e7;
case 0x46a4e9:goto L46a4e9;
case 0x46a4ea:c.instructions+=1;goto B46a4ea;
case 0x46a4ec:goto L46a4ec;
case 0x46a4f6:c.instructions+=1;goto B46a4f6;
case 0x46a4f8:goto L46a4f8;
case 0x46a502:goto L46a502;
case 0x46a505:c.instructions+=9;goto B46a505;
case 0x46a50b:c.instructions+=8;goto B46a50b;
case 0x46a50d:c.instructions+=7;goto B46a50d;
case 0x46a513:c.instructions+=6;goto B46a513;
case 0x46a515:c.instructions+=5;goto B46a515;
case 0x46a51a:c.instructions+=4;goto B46a51a;
case 0x46a520:c.instructions+=3;goto B46a520;
case 0x46a526:c.instructions+=2;goto B46a526;
case 0x46a52c:c.instructions+=1;goto B46a52c;
case 0x46a52f:goto L46a52f;
case 0x46a535:goto L46a535;
case 0x46a536:c.instructions+=2;goto B46a536;
case 0x46a537:c.instructions+=1;goto B46a537;
case 0x46a540:goto L46a540;
case 0x46a541:c.instructions+=6;goto B46a541;
case 0x46a542:c.instructions+=5;goto B46a542;
case 0x46a544:c.instructions+=4;goto B46a544;
case 0x46a547:c.instructions+=3;goto B46a547;
case 0x46a549:c.instructions+=2;goto B46a549;
case 0x46a54b:c.instructions+=1;goto B46a54b;
case 0x46a551:goto L46a551;
case 0x46a554:c.instructions+=42;goto B46a554;
case 0x46a557:c.instructions+=41;goto B46a557;
case 0x46a55a:c.instructions+=40;goto B46a55a;
case 0x46a55f:c.instructions+=39;goto B46a55f;
case 0x46a561:c.instructions+=38;goto B46a561;
case 0x46a567:c.instructions+=37;goto B46a567;
case 0x46a56d:c.instructions+=36;goto B46a56d;
case 0x46a570:c.instructions+=35;goto B46a570;
case 0x46a573:c.instructions+=34;goto B46a573;
case 0x46a576:c.instructions+=33;goto B46a576;
case 0x46a579:c.instructions+=32;goto B46a579;
case 0x46a57c:c.instructions+=31;goto B46a57c;
case 0x46a57f:c.instructions+=30;goto B46a57f;
case 0x46a581:c.instructions+=29;goto B46a581;
case 0x46a584:c.instructions+=28;goto B46a584;
case 0x46a586:c.instructions+=27;goto B46a586;
case 0x46a589:c.instructions+=26;goto B46a589;
case 0x46a58c:c.instructions+=25;goto B46a58c;
case 0x46a58f:c.instructions+=24;goto B46a58f;
case 0x46a595:c.instructions+=23;goto B46a595;
case 0x46a597:c.instructions+=22;goto B46a597;
case 0x46a59d:c.instructions+=21;goto B46a59d;
case 0x46a5a3:c.instructions+=20;goto B46a5a3;
case 0x46a5a6:c.instructions+=19;goto B46a5a6;
case 0x46a5a9:c.instructions+=18;goto B46a5a9;
case 0x46a5ac:c.instructions+=17;goto B46a5ac;
case 0x46a5af:c.instructions+=16;goto B46a5af;
case 0x46a5b1:c.instructions+=15;goto B46a5b1;
case 0x46a5b6:c.instructions+=14;goto B46a5b6;
case 0x46a5b8:c.instructions+=13;goto B46a5b8;
case 0x46a5be:c.instructions+=12;goto B46a5be;
case 0x46a5c4:c.instructions+=11;goto B46a5c4;
case 0x46a5c7:c.instructions+=10;goto B46a5c7;
case 0x46a5ca:c.instructions+=9;goto B46a5ca;
case 0x46a5cd:c.instructions+=8;goto B46a5cd;
case 0x46a5d3:c.instructions+=7;goto B46a5d3;
case 0x46a5d5:c.instructions+=6;goto B46a5d5;
case 0x46a5db:c.instructions+=5;goto B46a5db;
case 0x46a5e1:c.instructions+=4;goto B46a5e1;
case 0x46a5e4:c.instructions+=3;goto B46a5e4;
case 0x46a5e6:c.instructions+=2;goto B46a5e6;
case 0x46a5ed:c.instructions+=1;goto B46a5ed;
case 0x46a5ef:goto L46a5ef;
case 0x46a5f4:c.instructions+=2;goto B46a5f4;
case 0x46a5f6:c.instructions+=1;goto B46a5f6;
case 0x46a5f8:goto L46a5f8;
case 0x46a5fe:c.instructions+=2;goto B46a5fe;
case 0x46a600:c.instructions+=1;goto B46a600;
case 0x46a602:goto L46a602;
case 0x46a604:c.instructions+=2;goto B46a604;
case 0x46a605:c.instructions+=1;goto B46a605;
case 0x46a608:goto L46a608;
case 0x46a60a:c.instructions+=2;goto B46a60a;
case 0x46a60d:c.instructions+=1;goto B46a60d;
case 0x46a60f:goto L46a60f;
case 0x46a615:goto L46a615;
case 0x46a617:c.instructions+=3;goto B46a617;
case 0x46a618:c.instructions+=2;goto B46a618;
case 0x46a619:c.instructions+=1;goto B46a619;
case 0x46a61e:goto L46a61e;
case 0x46a620:c.instructions+=3;goto B46a620;
case 0x46a621:c.instructions+=2;goto B46a621;
case 0x46a623:c.instructions+=1;goto B46a623;
case 0x46a626:goto L46a626;
case 0x46a629:c.instructions+=6;goto B46a629;
case 0x46a62f:c.instructions+=5;goto B46a62f;
case 0x46a631:c.instructions+=4;goto B46a631;
case 0x46a632:c.instructions+=3;goto B46a632;
case 0x46a633:c.instructions+=2;goto B46a633;
case 0x46a635:c.instructions+=1;goto B46a635;
case 0x46a638:goto L46a638;
case 0x46a63e:c.instructions+=11;goto B46a63e;
case 0x46a644:c.instructions+=10;goto B46a644;
case 0x46a64a:c.instructions+=9;goto B46a64a;
case 0x46a650:c.instructions+=8;goto B46a650;
case 0x46a657:c.instructions+=7;goto B46a657;
case 0x46a65e:c.instructions+=6;goto B46a65e;
case 0x46a664:c.instructions+=5;goto B46a664;
case 0x46a666:c.instructions+=4;goto B46a666;
case 0x46a668:c.instructions+=3;goto B46a668;
case 0x46a669:c.instructions+=2;goto B46a669;
case 0x46a66a:c.instructions+=1;goto B46a66a;
case 0x46a670:goto L46a670;
case 0x46a676:c.instructions+=4;goto B46a676;
case 0x46a677:c.instructions+=3;goto B46a677;
case 0x46a679:c.instructions+=2;goto B46a679;
case 0x46a67b:c.instructions+=1;goto B46a67b;
case 0x46a67d:goto L46a67d;
case 0x46a681:c.instructions+=1;goto B46a681;
case 0x46a683:goto L46a683;
case 0x46a685:c.instructions+=2;goto B46a685;
case 0x46a686:c.instructions+=1;goto B46a686;
case 0x46a687:goto L46a687;
case 0x46a68c:c.instructions+=8;goto B46a68c;
case 0x46a68d:c.instructions+=7;goto B46a68d;
case 0x46a68e:c.instructions+=6;goto B46a68e;
case 0x46a68f:c.instructions+=5;goto B46a68f;
case 0x46a692:c.instructions+=4;goto B46a692;
case 0x46a695:c.instructions+=3;goto B46a695;
case 0x46a698:c.instructions+=2;goto B46a698;
case 0x46a69a:c.instructions+=1;goto B46a69a;
case 0x46a69c:goto L46a69c;
case 0x46a69f:c.instructions+=1;goto B46a69f;
case 0x46a6a1:goto L46a6a1;
case 0x46a6a3:goto L46a6a3;
case 0x46a6a6:c.instructions+=1;goto B46a6a6;
case 0x46a6ab:goto L46a6ab;
case 0x46a6ad:c.instructions+=2;goto B46a6ad;
case 0x46a6af:c.instructions+=1;goto B46a6af;
case 0x46a6b1:goto L46a6b1;
case 0x46a6b3:c.instructions+=2;goto B46a6b3;
case 0x46a6b5:c.instructions+=1;goto B46a6b5;
case 0x46a6b7:goto L46a6b7;
case 0x46a6ba:c.instructions+=1;goto B46a6ba;
case 0x46a6bc:goto L46a6bc;
case 0x46a6be:goto L46a6be;
case 0x46a6c0:c.instructions+=1;goto B46a6c0;
case 0x46a6c5:goto L46a6c5;
case 0x46a6c7:c.instructions+=2;goto B46a6c7;
case 0x46a6c9:c.instructions+=1;goto B46a6c9;
case 0x46a6cb:goto L46a6cb;
case 0x46a6d0:goto L46a6d0;
case 0x46a6d3:c.instructions+=2;goto B46a6d3;
case 0x46a6d5:c.instructions+=1;goto B46a6d5;
case 0x46a6d7:goto L46a6d7;
case 0x46a6dc:goto L46a6dc;
case 0x46a6de:c.instructions+=1;goto B46a6de;
case 0x46a6e0:goto L46a6e0;
case 0x46a6e2:c.instructions+=1;goto B46a6e2;
case 0x46a6e4:goto L46a6e4;
case 0x46a6ea:c.instructions+=2;goto B46a6ea;
case 0x46a6ec:c.instructions+=1;goto B46a6ec;
case 0x46a6ee:goto L46a6ee;
case 0x46a6f1:c.instructions+=2;goto B46a6f1;
case 0x46a6f3:c.instructions+=1;goto B46a6f3;
case 0x46a6f5:goto L46a6f5;
case 0x46a6f8:c.instructions+=1;goto B46a6f8;
case 0x46a6fa:goto L46a6fa;
case 0x46a6fc:goto L46a6fc;
case 0x46a6fe:c.instructions+=1;goto B46a6fe;
case 0x46a700:goto L46a700;
case 0x46a701:c.instructions+=5;goto B46a701;
case 0x46a702:c.instructions+=4;goto B46a702;
case 0x46a703:c.instructions+=3;goto B46a703;
case 0x46a705:c.instructions+=2;goto B46a705;
case 0x46a706:c.instructions+=1;goto B46a706;
case 0x46a707:goto L46a707;
case 0x46a709:goto L46a709;
case 0x46a70a:c.instructions+=5;goto B46a70a;
case 0x46a70b:c.instructions+=4;goto B46a70b;
case 0x46a70c:c.instructions+=3;goto B46a70c;
case 0x46a70e:c.instructions+=2;goto B46a70e;
case 0x46a70f:c.instructions+=1;goto B46a70f;
case 0x46a710:goto L46a710;
case 0x46a714:c.instructions+=4;goto B46a714;
case 0x46a715:c.instructions+=3;goto B46a715;
case 0x46a716:c.instructions+=2;goto B46a716;
case 0x46a718:c.instructions+=1;goto B46a718;
case 0x46a71d:goto L46a71d;
case 0x46a720:c.instructions+=3;goto B46a720;
case 0x46a72a:c.instructions+=2;goto B46a72a;
case 0x46a734:c.instructions+=1;goto B46a734;
case 0x46a739:goto L46a739;
case 0x46a73c:c.instructions+=1;goto B46a73c;
case 0x46a741:goto L46a741;
case 0x46a747:c.instructions+=6;goto B46a747;
case 0x46a74d:c.instructions+=5;goto B46a74d;
case 0x46a753:c.instructions+=4;goto B46a753;
case 0x46a759:c.instructions+=3;goto B46a759;
case 0x46a75f:c.instructions+=2;goto B46a75f;
case 0x46a760:c.instructions+=1;goto B46a760;
case 0x46a770:goto L46a770;
case 0x46a771:c.instructions+=8;goto B46a771;
case 0x46a773:c.instructions+=7;goto B46a773;
case 0x46a776:c.instructions+=6;goto B46a776;
case 0x46a77c:c.instructions+=5;goto B46a77c;
case 0x46a77d:c.instructions+=4;goto B46a77d;
case 0x46a77f:c.instructions+=3;goto B46a77f;
case 0x46a785:c.instructions+=2;goto B46a785;
case 0x46a787:c.instructions+=1;goto B46a787;
case 0x46a78d:goto L46a78d;
case 0x46a793:c.instructions+=2;goto B46a793;
case 0x46a795:c.instructions+=1;goto B46a795;
case 0x46a79b:goto L46a79b;
case 0x46a7a1:c.instructions+=14;goto B46a7a1;
case 0x46a7a7:c.instructions+=13;goto B46a7a7;
case 0x46a7ab:c.instructions+=12;goto B46a7ab;
case 0x46a7af:c.instructions+=11;goto B46a7af;
case 0x46a7b7:c.instructions+=10;goto B46a7b7;
case 0x46a7bd:c.instructions+=9;goto B46a7bd;
case 0x46a7c3:c.instructions+=8;goto B46a7c3;
case 0x46a7c7:c.instructions+=7;goto B46a7c7;
case 0x46a7cb:c.instructions+=6;goto B46a7cb;
case 0x46a7cc:c.instructions+=5;goto B46a7cc;
case 0x46a7d0:c.instructions+=4;goto B46a7d0;
case 0x46a7d1:c.instructions+=3;goto B46a7d1;
case 0x46a7d5:c.instructions+=2;goto B46a7d5;
case 0x46a7dd:c.instructions+=1;goto B46a7dd;
case 0x46a7e2:goto L46a7e2;
case 0x46a7e6:c.instructions+=13;goto B46a7e6;
case 0x46a7ea:c.instructions+=12;goto B46a7ea;
case 0x46a7ee:c.instructions+=11;goto B46a7ee;
case 0x46a7f0:c.instructions+=10;goto B46a7f0;
case 0x46a7f2:c.instructions+=9;goto B46a7f2;
case 0x46a7f6:c.instructions+=8;goto B46a7f6;
case 0x46a7fa:c.instructions+=7;goto B46a7fa;
case 0x46a801:c.instructions+=6;goto B46a801;
case 0x46a802:c.instructions+=5;goto B46a802;
case 0x46a806:c.instructions+=4;goto B46a806;
case 0x46a80a:c.instructions+=3;goto B46a80a;
case 0x46a80b:c.instructions+=2;goto B46a80b;
case 0x46a80f:c.instructions+=1;goto B46a80f;
case 0x46a814:goto L46a814;
case 0x46a818:c.instructions+=22;goto B46a818;
case 0x46a81c:c.instructions+=21;goto B46a81c;
case 0x46a820:c.instructions+=20;goto B46a820;
case 0x46a822:c.instructions+=19;goto B46a822;
case 0x46a824:c.instructions+=18;goto B46a824;
case 0x46a828:c.instructions+=17;goto B46a828;
case 0x46a82c:c.instructions+=16;goto B46a82c;
case 0x46a833:c.instructions+=15;goto B46a833;
case 0x46a837:c.instructions+=14;goto B46a837;
case 0x46a83a:c.instructions+=13;goto B46a83a;
case 0x46a83e:c.instructions+=12;goto B46a83e;
case 0x46a842:c.instructions+=11;goto B46a842;
case 0x46a846:c.instructions+=10;goto B46a846;
case 0x46a84a:c.instructions+=9;goto B46a84a;
case 0x46a84c:c.instructions+=8;goto B46a84c;
case 0x46a850:c.instructions+=7;goto B46a850;
case 0x46a854:c.instructions+=6;goto B46a854;
case 0x46a856:c.instructions+=5;goto B46a856;
case 0x46a858:c.instructions+=4;goto B46a858;
case 0x46a85e:c.instructions+=3;goto B46a85e;
case 0x46a860:c.instructions+=2;goto B46a860;
case 0x46a863:c.instructions+=1;goto B46a863;
case 0x46a869:goto L46a869;
case 0x46a86f:c.instructions+=5;goto B46a86f;
case 0x46a875:c.instructions+=4;goto B46a875;
case 0x46a876:c.instructions+=3;goto B46a876;
case 0x46a87a:c.instructions+=2;goto B46a87a;
case 0x46a87b:c.instructions+=1;goto B46a87b;
case 0x46a880:goto L46a880;
case 0x46a886:c.instructions+=5;goto B46a886;
case 0x46a88c:c.instructions+=4;goto B46a88c;
case 0x46a88d:c.instructions+=3;goto B46a88d;
case 0x46a894:c.instructions+=2;goto B46a894;
case 0x46a895:c.instructions+=1;goto B46a895;
case 0x46a89a:goto L46a89a;
case 0x46a8a0:c.instructions+=42;goto B46a8a0;
case 0x46a8a3:c.instructions+=41;goto B46a8a3;
case 0x46a8a6:c.instructions+=40;goto B46a8a6;
case 0x46a8a9:c.instructions+=39;goto B46a8a9;
case 0x46a8ad:c.instructions+=38;goto B46a8ad;
case 0x46a8b0:c.instructions+=37;goto B46a8b0;
case 0x46a8b6:c.instructions+=36;goto B46a8b6;
case 0x46a8b9:c.instructions+=35;goto B46a8b9;
case 0x46a8bc:c.instructions+=34;goto B46a8bc;
case 0x46a8c0:c.instructions+=33;goto B46a8c0;
case 0x46a8c3:c.instructions+=32;goto B46a8c3;
case 0x46a8c7:c.instructions+=31;goto B46a8c7;
case 0x46a8cb:c.instructions+=30;goto B46a8cb;
case 0x46a8ce:c.instructions+=29;goto B46a8ce;
case 0x46a8d2:c.instructions+=28;goto B46a8d2;
case 0x46a8d6:c.instructions+=27;goto B46a8d6;
case 0x46a8d7:c.instructions+=26;goto B46a8d7;
case 0x46a8da:c.instructions+=25;goto B46a8da;
case 0x46a8dd:c.instructions+=24;goto B46a8dd;
case 0x46a8e1:c.instructions+=23;goto B46a8e1;
case 0x46a8e4:c.instructions+=22;goto B46a8e4;
case 0x46a8e8:c.instructions+=21;goto B46a8e8;
case 0x46a8ec:c.instructions+=20;goto B46a8ec;
case 0x46a8f0:c.instructions+=19;goto B46a8f0;
case 0x46a8f2:c.instructions+=18;goto B46a8f2;
case 0x46a8f6:c.instructions+=17;goto B46a8f6;
case 0x46a8fa:c.instructions+=16;goto B46a8fa;
case 0x46a8fe:c.instructions+=15;goto B46a8fe;
case 0x46a8ff:c.instructions+=14;goto B46a8ff;
case 0x46a903:c.instructions+=13;goto B46a903;
case 0x46a906:c.instructions+=12;goto B46a906;
case 0x46a90a:c.instructions+=11;goto B46a90a;
case 0x46a90d:c.instructions+=10;goto B46a90d;
case 0x46a911:c.instructions+=9;goto B46a911;
case 0x46a914:c.instructions+=8;goto B46a914;
case 0x46a918:c.instructions+=7;goto B46a918;
case 0x46a91c:c.instructions+=6;goto B46a91c;
case 0x46a920:c.instructions+=5;goto B46a920;
case 0x46a922:c.instructions+=4;goto B46a922;
case 0x46a929:c.instructions+=3;goto B46a929;
case 0x46a92d:c.instructions+=2;goto B46a92d;
case 0x46a931:c.instructions+=1;goto B46a931;
case 0x46a936:goto L46a936;
case 0x46a939:c.instructions+=11;goto B46a939;
case 0x46a93d:c.instructions+=10;goto B46a93d;
case 0x46a940:c.instructions+=9;goto B46a940;
case 0x46a942:c.instructions+=8;goto B46a942;
case 0x46a944:c.instructions+=7;goto B46a944;
case 0x46a945:c.instructions+=6;goto B46a945;
case 0x46a949:c.instructions+=5;goto B46a949;
case 0x46a94d:c.instructions+=4;goto B46a94d;
case 0x46a94e:c.instructions+=3;goto B46a94e;
case 0x46a952:c.instructions+=2;goto B46a952;
case 0x46a956:c.instructions+=1;goto B46a956;
case 0x46a95b:goto L46a95b;
case 0x46a95e:c.instructions+=16;goto B46a95e;
case 0x46a961:c.instructions+=15;goto B46a961;
case 0x46a964:c.instructions+=14;goto B46a964;
case 0x46a966:c.instructions+=13;goto B46a966;
case 0x46a96a:c.instructions+=12;goto B46a96a;
case 0x46a96e:c.instructions+=11;goto B46a96e;
case 0x46a972:c.instructions+=10;goto B46a972;
case 0x46a976:c.instructions+=9;goto B46a976;
case 0x46a978:c.instructions+=8;goto B46a978;
case 0x46a97c:c.instructions+=7;goto B46a97c;
case 0x46a980:c.instructions+=6;goto B46a980;
case 0x46a982:c.instructions+=5;goto B46a982;
case 0x46a984:c.instructions+=4;goto B46a984;
case 0x46a98a:c.instructions+=3;goto B46a98a;
case 0x46a98c:c.instructions+=2;goto B46a98c;
case 0x46a98f:c.instructions+=1;goto B46a98f;
case 0x46a991:goto L46a991;
case 0x46a998:c.instructions+=15;goto B46a998;
case 0x46a99a:c.instructions+=14;goto B46a99a;
case 0x46a9a1:c.instructions+=13;goto B46a9a1;
case 0x46a9a3:c.instructions+=12;goto B46a9a3;
case 0x46a9a5:c.instructions+=11;goto B46a9a5;
case 0x46a9ac:c.instructions+=10;goto B46a9ac;
case 0x46a9ae:c.instructions+=9;goto B46a9ae;
case 0x46a9b0:c.instructions+=8;goto B46a9b0;
case 0x46a9b2:c.instructions+=7;goto B46a9b2;
case 0x46a9b4:c.instructions+=6;goto B46a9b4;
case 0x46a9b6:c.instructions+=5;goto B46a9b6;
case 0x46a9b8:c.instructions+=4;goto B46a9b8;
case 0x46a9be:c.instructions+=3;goto B46a9be;
case 0x46a9c0:c.instructions+=2;goto B46a9c0;
case 0x46a9c3:c.instructions+=1;goto B46a9c3;
case 0x46a9c5:goto L46a9c5;
case 0x46a9c7:c.instructions+=4;goto B46a9c7;
case 0x46a9c8:c.instructions+=3;goto B46a9c8;
case 0x46a9ca:c.instructions+=2;goto B46a9ca;
case 0x46a9cb:c.instructions+=1;goto B46a9cb;
case 0x46a9cc:goto L46a9cc;
case 0x46a9ce:c.instructions+=2;goto B46a9ce;
case 0x46a9d0:c.instructions+=1;goto B46a9d0;
case 0x46a9d2:goto L46a9d2;
case 0x46a9d7:c.instructions+=4;goto B46a9d7;
case 0x46a9d8:c.instructions+=3;goto B46a9d8;
case 0x46a9da:c.instructions+=2;goto B46a9da;
case 0x46a9db:c.instructions+=1;goto B46a9db;
case 0x46a9e0:goto L46a9e0;
case 0x46a9e1:c.instructions+=9;goto B46a9e1;
case 0x46a9e3:c.instructions+=8;goto B46a9e3;
case 0x46a9e4:c.instructions+=7;goto B46a9e4;
case 0x46a9e8:c.instructions+=6;goto B46a9e8;
case 0x46a9ee:c.instructions+=5;goto B46a9ee;
case 0x46a9ef:c.instructions+=4;goto B46a9ef;
case 0x46a9f5:c.instructions+=3;goto B46a9f5;
case 0x46a9f6:c.instructions+=2;goto B46a9f6;
case 0x46a9f8:c.instructions+=1;goto B46a9f8;
case 0x46a9fd:goto L46a9fd;
case 0x46a9fe:c.instructions+=2;goto B46a9fe;
case 0x46aa00:c.instructions+=1;goto B46aa00;
case 0x46aa05:goto L46aa05;
case 0x46aa06:c.instructions+=3;goto B46aa06;
case 0x46aa10:c.instructions+=2;goto B46aa10;
case 0x46aa11:c.instructions+=1;goto B46aa11;
case 0x46aa20:goto L46aa20;
case 0x46aa21:c.instructions+=12;goto B46aa21;
case 0x46aa23:c.instructions+=11;goto B46aa23;
case 0x46aa26:c.instructions+=10;goto B46aa26;
case 0x46aa29:c.instructions+=9;goto B46aa29;
case 0x46aa2a:c.instructions+=8;goto B46aa2a;
case 0x46aa2b:c.instructions+=7;goto B46aa2b;
case 0x46aa2d:c.instructions+=6;goto B46aa2d;
case 0x46aa31:c.instructions+=5;goto B46aa31;
case 0x46aa32:c.instructions+=4;goto B46aa32;
case 0x46aa36:c.instructions+=3;goto B46aa36;
case 0x46aa37:c.instructions+=2;goto B46aa37;
case 0x46aa3a:c.instructions+=1;goto B46aa3a;
case 0x46aa3f:goto L46aa3f;
case 0x46aa43:c.instructions+=2;goto B46aa43;
case 0x46aa45:c.instructions+=1;goto B46aa45;
case 0x46aa47:goto L46aa47;
case 0x46aa4b:c.instructions+=2;goto B46aa4b;
case 0x46aa4d:c.instructions+=1;goto B46aa4d;
case 0x46aa4f:goto L46aa4f;
case 0x46aa54:c.instructions+=5;goto B46aa54;
case 0x46aa55:c.instructions+=4;goto B46aa55;
case 0x46aa56:c.instructions+=3;goto B46aa56;
case 0x46aa58:c.instructions+=2;goto B46aa58;
case 0x46aa59:c.instructions+=1;goto B46aa59;
case 0x46aa5a:goto L46aa5a;
case 0x46aa60:c.instructions+=19;goto B46aa60;
case 0x46aa63:c.instructions+=18;goto B46aa63;
case 0x46aa69:c.instructions+=17;goto B46aa69;
case 0x46aa6d:c.instructions+=16;goto B46aa6d;
case 0x46aa73:c.instructions+=15;goto B46aa73;
case 0x46aa76:c.instructions+=14;goto B46aa76;
case 0x46aa7a:c.instructions+=13;goto B46aa7a;
case 0x46aa7d:c.instructions+=12;goto B46aa7d;
case 0x46aa81:c.instructions+=11;goto B46aa81;
case 0x46aa84:c.instructions+=10;goto B46aa84;
case 0x46aa86:c.instructions+=9;goto B46aa86;
case 0x46aa8a:c.instructions+=8;goto B46aa8a;
case 0x46aa8c:c.instructions+=7;goto B46aa8c;
case 0x46aa90:c.instructions+=6;goto B46aa90;
case 0x46aa91:c.instructions+=5;goto B46aa91;
case 0x46aa95:c.instructions+=4;goto B46aa95;
case 0x46aa96:c.instructions+=3;goto B46aa96;
case 0x46aa9a:c.instructions+=2;goto B46aa9a;
case 0x46aa9e:c.instructions+=1;goto B46aa9e;
case 0x46aaa3:goto L46aaa3;
case 0x46aaa7:c.instructions+=18;goto B46aaa7;
case 0x46aaab:c.instructions+=17;goto B46aaab;
case 0x46aaaf:c.instructions+=16;goto B46aaaf;
case 0x46aab1:c.instructions+=15;goto B46aab1;
case 0x46aab3:c.instructions+=14;goto B46aab3;
case 0x46aab7:c.instructions+=13;goto B46aab7;
case 0x46aabb:c.instructions+=12;goto B46aabb;
case 0x46aabf:c.instructions+=11;goto B46aabf;
case 0x46aac3:c.instructions+=10;goto B46aac3;
case 0x46aac6:c.instructions+=9;goto B46aac6;
case 0x46aaca:c.instructions+=8;goto B46aaca;
case 0x46aace:c.instructions+=7;goto B46aace;
case 0x46aad4:c.instructions+=6;goto B46aad4;
case 0x46aad8:c.instructions+=5;goto B46aad8;
case 0x46aada:c.instructions+=4;goto B46aada;
case 0x46aae0:c.instructions+=3;goto B46aae0;
case 0x46aae2:c.instructions+=2;goto B46aae2;
case 0x46aae5:c.instructions+=1;goto B46aae5;
case 0x46aae7:goto L46aae7;
case 0x46aaeb:c.instructions+=11;goto B46aaeb;
case 0x46aaf1:c.instructions+=10;goto B46aaf1;
case 0x46aaf5:c.instructions+=9;goto B46aaf5;
case 0x46aafb:c.instructions+=8;goto B46aafb;
case 0x46aaff:c.instructions+=7;goto B46aaff;
case 0x46ab05:c.instructions+=6;goto B46ab05;
case 0x46ab07:c.instructions+=5;goto B46ab07;
case 0x46ab09:c.instructions+=4;goto B46ab09;
case 0x46ab0f:c.instructions+=3;goto B46ab0f;
case 0x46ab11:c.instructions+=2;goto B46ab11;
case 0x46ab14:c.instructions+=1;goto B46ab14;
case 0x46ab16:goto L46ab16;
case 0x46ab18:c.instructions+=7;goto B46ab18;
case 0x46ab1d:c.instructions+=6;goto B46ab1d;
case 0x46ab1f:c.instructions+=5;goto B46ab1f;
case 0x46ab20:c.instructions+=4;goto B46ab20;
case 0x46ab21:c.instructions+=3;goto B46ab21;
case 0x46ab23:c.instructions+=2;goto B46ab23;
case 0x46ab24:c.instructions+=1;goto B46ab24;
case 0x46ab25:goto L46ab25;
case 0x46ab27:c.instructions+=6;goto B46ab27;
case 0x46ab2b:c.instructions+=5;goto B46ab2b;
case 0x46ab31:c.instructions+=4;goto B46ab31;
case 0x46ab33:c.instructions+=3;goto B46ab33;
case 0x46ab35:c.instructions+=2;goto B46ab35;
case 0x46ab38:c.instructions+=1;goto B46ab38;
case 0x46ab3e:goto L46ab3e;
case 0x46ab43:c.instructions+=5;goto B46ab43;
case 0x46ab44:c.instructions+=4;goto B46ab44;
case 0x46ab45:c.instructions+=3;goto B46ab45;
case 0x46ab47:c.instructions+=2;goto B46ab47;
case 0x46ab48:c.instructions+=1;goto B46ab48;
case 0x46ab49:goto L46ab49;
case 0x46ab4f:c.instructions+=15;goto B46ab4f;
case 0x46ab55:c.instructions+=14;goto B46ab55;
case 0x46ab5b:c.instructions+=13;goto B46ab5b;
case 0x46ab5e:c.instructions+=12;goto B46ab5e;
case 0x46ab60:c.instructions+=11;goto B46ab60;
case 0x46ab63:c.instructions+=10;goto B46ab63;
case 0x46ab65:c.instructions+=9;goto B46ab65;
case 0x46ab67:c.instructions+=8;goto B46ab67;
case 0x46ab6a:c.instructions+=7;goto B46ab6a;
case 0x46ab6c:c.instructions+=6;goto B46ab6c;
case 0x46ab6e:c.instructions+=5;goto B46ab6e;
case 0x46ab74:c.instructions+=4;goto B46ab74;
case 0x46ab76:c.instructions+=3;goto B46ab76;
case 0x46ab79:c.instructions+=2;goto B46ab79;
case 0x46ab7e:c.instructions+=1;goto B46ab7e;
case 0x46ab80:goto L46ab80;
case 0x46ab85:goto L46ab85;
case 0x46ab86:c.instructions+=4;goto B46ab86;
case 0x46ab87:c.instructions+=3;goto B46ab87;
case 0x46ab89:c.instructions+=2;goto B46ab89;
case 0x46ab8a:c.instructions+=1;goto B46ab8a;
case 0x46ab90:goto L46ab90;
case 0x46aba0:goto L46aba0;
case 0x46aba1:c.instructions+=11;goto B46aba1;
case 0x46aba3:c.instructions+=10;goto B46aba3;
case 0x46aba6:c.instructions+=9;goto B46aba6;
case 0x46aba9:c.instructions+=8;goto B46aba9;
case 0x46abaa:c.instructions+=7;goto B46abaa;
case 0x46abab:c.instructions+=6;goto B46abab;
case 0x46abac:c.instructions+=5;goto B46abac;
case 0x46abae:c.instructions+=4;goto B46abae;
case 0x46abb1:c.instructions+=3;goto B46abb1;
case 0x46abb3:c.instructions+=2;goto B46abb3;
case 0x46abb7:c.instructions+=1;goto B46abb7;
case 0x46abbd:goto L46abbd;
case 0x46abc2:c.instructions+=3;goto B46abc2;
case 0x46abc5:c.instructions+=2;goto B46abc5;
case 0x46abc8:c.instructions+=1;goto B46abc8;
case 0x46abce:goto L46abce;
case 0x46abd0:c.instructions+=2;goto B46abd0;
case 0x46abd2:c.instructions+=1;goto B46abd2;
case 0x46abd4:goto L46abd4;
case 0x46abd7:c.instructions+=2;goto B46abd7;
case 0x46abdb:c.instructions+=1;goto B46abdb;
case 0x46abdd:goto L46abdd;
case 0x46abe5:goto L46abe5;
case 0x46abeb:c.instructions+=2;goto B46abeb;
case 0x46abed:c.instructions+=1;goto B46abed;
case 0x46abf3:goto L46abf3;
case 0x46abf7:c.instructions+=3;goto B46abf7;
case 0x46abfc:c.instructions+=2;goto B46abfc;
case 0x46abfd:c.instructions+=1;goto B46abfd;
case 0x46ac02:goto L46ac02;
case 0x46ac05:c.instructions+=5;goto B46ac05;
case 0x46ac08:c.instructions+=4;goto B46ac08;
case 0x46ac09:c.instructions+=3;goto B46ac09;
case 0x46ac0d:c.instructions+=2;goto B46ac0d;
case 0x46ac0e:c.instructions+=1;goto B46ac0e;
case 0x46ac13:goto L46ac13;
case 0x46ac17:c.instructions+=12;goto B46ac17;
case 0x46ac1b:c.instructions+=11;goto B46ac1b;
case 0x46ac1e:c.instructions+=10;goto B46ac1e;
case 0x46ac22:c.instructions+=9;goto B46ac22;
case 0x46ac26:c.instructions+=8;goto B46ac26;
case 0x46ac28:c.instructions+=7;goto B46ac28;
case 0x46ac2c:c.instructions+=6;goto B46ac2c;
case 0x46ac30:c.instructions+=5;goto B46ac30;
case 0x46ac32:c.instructions+=4;goto B46ac32;
case 0x46ac38:c.instructions+=3;goto B46ac38;
case 0x46ac3a:c.instructions+=2;goto B46ac3a;
case 0x46ac3d:c.instructions+=1;goto B46ac3d;
case 0x46ac43:goto L46ac43;
case 0x46ac46:c.instructions+=37;goto B46ac46;
case 0x46ac49:c.instructions+=36;goto B46ac49;
case 0x46ac4c:c.instructions+=35;goto B46ac4c;
case 0x46ac52:c.instructions+=34;goto B46ac52;
case 0x46ac55:c.instructions+=33;goto B46ac55;
case 0x46ac5b:c.instructions+=32;goto B46ac5b;
case 0x46ac5e:c.instructions+=31;goto B46ac5e;
case 0x46ac64:c.instructions+=30;goto B46ac64;
case 0x46ac68:c.instructions+=29;goto B46ac68;
case 0x46ac6a:c.instructions+=28;goto B46ac6a;
case 0x46ac6e:c.instructions+=27;goto B46ac6e;
case 0x46ac72:c.instructions+=26;goto B46ac72;
case 0x46ac78:c.instructions+=25;goto B46ac78;
case 0x46ac7e:c.instructions+=24;goto B46ac7e;
case 0x46ac84:c.instructions+=23;goto B46ac84;
case 0x46ac8a:c.instructions+=22;goto B46ac8a;
case 0x46ac8c:c.instructions+=21;goto B46ac8c;
case 0x46ac92:c.instructions+=20;goto B46ac92;
case 0x46ac98:c.instructions+=19;goto B46ac98;
case 0x46ac9a:c.instructions+=18;goto B46ac9a;
case 0x46ac9c:c.instructions+=17;goto B46ac9c;
case 0x46ac9e:c.instructions+=16;goto B46ac9e;
case 0x46aca0:c.instructions+=15;goto B46aca0;
case 0x46aca2:c.instructions+=14;goto B46aca2;
case 0x46aca4:c.instructions+=13;goto B46aca4;
case 0x46aca6:c.instructions+=12;goto B46aca6;
case 0x46acaa:c.instructions+=11;goto B46acaa;
case 0x46acae:c.instructions+=10;goto B46acae;
case 0x46acb0:c.instructions+=9;goto B46acb0;
case 0x46acb2:c.instructions+=8;goto B46acb2;
case 0x46acb4:c.instructions+=7;goto B46acb4;
case 0x46acb6:c.instructions+=6;goto B46acb6;
case 0x46acb8:c.instructions+=5;goto B46acb8;
case 0x46acba:c.instructions+=4;goto B46acba;
case 0x46acbc:c.instructions+=3;goto B46acbc;
case 0x46acbe:c.instructions+=2;goto B46acbe;
case 0x46acc1:c.instructions+=1;goto B46acc1;
case 0x46acc3:goto L46acc3;
case 0x46acc8:c.instructions+=1;goto B46acc8;
case 0x46accd:goto L46accd;
case 0x46acd1:c.instructions+=6;goto B46acd1;
case 0x46acd4:c.instructions+=5;goto B46acd4;
case 0x46acd9:c.instructions+=4;goto B46acd9;
case 0x46acdd:c.instructions+=3;goto B46acdd;
case 0x46acde:c.instructions+=2;goto B46acde;
case 0x46ace0:c.instructions+=1;goto B46ace0;
case 0x46ace5:goto L46ace5;
case 0x46ace6:c.instructions+=1;goto B46ace6;
case 0x46aceb:goto L46aceb;
case 0x46acef:c.instructions+=4;goto B46acef;
case 0x46acf2:c.instructions+=3;goto B46acf2;
case 0x46acf4:c.instructions+=2;goto B46acf4;
case 0x46acf7:c.instructions+=1;goto B46acf7;
case 0x46acf9:goto L46acf9;
case 0x46acfc:c.instructions+=3;goto B46acfc;
case 0x46ad01:c.instructions+=2;goto B46ad01;
case 0x46ad02:c.instructions+=1;goto B46ad02;
case 0x46ad07:goto L46ad07;
case 0x46ad0d:c.instructions+=4;goto B46ad0d;
case 0x46ad10:c.instructions+=3;goto B46ad10;
case 0x46ad12:c.instructions+=2;goto B46ad12;
case 0x46ad15:c.instructions+=1;goto B46ad15;
case 0x46ad17:goto L46ad17;
case 0x46ad1b:c.instructions+=7;goto B46ad1b;
case 0x46ad1e:c.instructions+=6;goto B46ad1e;
case 0x46ad21:c.instructions+=5;goto B46ad21;
case 0x46ad23:c.instructions+=4;goto B46ad23;
case 0x46ad29:c.instructions+=3;goto B46ad29;
case 0x46ad2b:c.instructions+=2;goto B46ad2b;
case 0x46ad2e:c.instructions+=1;goto B46ad2e;
case 0x46ad34:goto L46ad34;
case 0x46ad38:goto L46ad38;
case 0x46ad3c:c.instructions+=2;goto B46ad3c;
case 0x46ad3e:c.instructions+=1;goto B46ad3e;
case 0x46ad44:goto L46ad44;
case 0x46ad46:c.instructions+=2;goto B46ad46;
case 0x46ad48:c.instructions+=1;goto B46ad48;
case 0x46ad4a:goto L46ad4a;
case 0x46ad4d:c.instructions+=1;goto B46ad4d;
case 0x46ad4f:goto L46ad4f;
case 0x46ad51:goto L46ad51;
case 0x46ad53:c.instructions+=1;goto B46ad53;
case 0x46ad58:goto L46ad58;
case 0x46ad5a:c.instructions+=2;goto B46ad5a;
case 0x46ad5c:c.instructions+=1;goto B46ad5c;
case 0x46ad62:goto L46ad62;
case 0x46ad67:goto L46ad67;
case 0x46ad6a:c.instructions+=2;goto B46ad6a;
case 0x46ad6c:c.instructions+=1;goto B46ad6c;
case 0x46ad6e:goto L46ad6e;
case 0x46ad74:c.instructions+=1;goto B46ad74;
case 0x46ad76:goto L46ad76;
case 0x46ad7c:c.instructions+=2;goto B46ad7c;
case 0x46ad7e:c.instructions+=1;goto B46ad7e;
case 0x46ad80:goto L46ad80;
case 0x46ad86:c.instructions+=1;goto B46ad86;
case 0x46ad88:goto L46ad88;
case 0x46ad8a:c.instructions+=1;goto B46ad8a;
case 0x46ad8c:goto L46ad8c;
case 0x46ad8f:c.instructions+=21;goto B46ad8f;
case 0x46ad92:c.instructions+=20;goto B46ad92;
case 0x46ad95:c.instructions+=19;goto B46ad95;
case 0x46ad98:c.instructions+=18;goto B46ad98;
case 0x46ad9b:c.instructions+=17;goto B46ad9b;
case 0x46ad9d:c.instructions+=16;goto B46ad9d;
case 0x46ada0:c.instructions+=15;goto B46ada0;
case 0x46ada3:c.instructions+=14;goto B46ada3;
case 0x46ada5:c.instructions+=13;goto B46ada5;
case 0x46ada7:c.instructions+=12;goto B46ada7;
case 0x46ada9:c.instructions+=11;goto B46ada9;
case 0x46adab:c.instructions+=10;goto B46adab;
case 0x46adad:c.instructions+=9;goto B46adad;
case 0x46adaf:c.instructions+=8;goto B46adaf;
case 0x46adb1:c.instructions+=7;goto B46adb1;
case 0x46adb7:c.instructions+=6;goto B46adb7;
case 0x46adb9:c.instructions+=5;goto B46adb9;
case 0x46adbb:c.instructions+=4;goto B46adbb;
case 0x46adbd:c.instructions+=3;goto B46adbd;
case 0x46adc0:c.instructions+=2;goto B46adc0;
case 0x46adc2:c.instructions+=1;goto B46adc2;
case 0x46adc4:goto L46adc4;
case 0x46adc6:c.instructions+=6;goto B46adc6;
case 0x46adc7:c.instructions+=5;goto B46adc7;
case 0x46adc8:c.instructions+=4;goto B46adc8;
case 0x46adc9:c.instructions+=3;goto B46adc9;
case 0x46adcb:c.instructions+=2;goto B46adcb;
case 0x46adcc:c.instructions+=1;goto B46adcc;
case 0x46adcd:goto L46adcd;
case 0x46add3:c.instructions+=2;goto B46add3;
case 0x46add5:c.instructions+=1;goto B46add5;
case 0x46add7:goto L46add7;
case 0x46adda:c.instructions+=2;goto B46adda;
case 0x46addc:c.instructions+=1;goto B46addc;
case 0x46adde:goto L46adde;
case 0x46ade1:c.instructions+=1;goto B46ade1;
case 0x46ade3:goto L46ade3;
case 0x46ade5:goto L46ade5;
case 0x46ade7:c.instructions+=1;goto B46ade7;
case 0x46aded:goto L46aded;
case 0x46adee:c.instructions+=6;goto B46adee;
case 0x46adef:c.instructions+=5;goto B46adef;
case 0x46adf1:c.instructions+=4;goto B46adf1;
case 0x46adf2:c.instructions+=3;goto B46adf2;
case 0x46adf4:c.instructions+=2;goto B46adf4;
case 0x46adf5:c.instructions+=1;goto B46adf5;
case 0x46ae00:goto L46ae00;
case 0x46ae06:c.instructions+=8;goto B46ae06;
case 0x46ae08:c.instructions+=7;goto B46ae08;
case 0x46ae0d:c.instructions+=6;goto B46ae0d;
case 0x46ae0e:c.instructions+=5;goto B46ae0e;
case 0x46ae15:c.instructions+=4;goto B46ae15;
case 0x46ae18:c.instructions+=3;goto B46ae18;
case 0x46ae19:c.instructions+=2;goto B46ae19;
case 0x46ae1b:c.instructions+=1;goto B46ae1b;
case 0x46ae20:goto L46ae20;
case 0x46ae27:c.instructions+=1;goto B46ae27;
case 0x46ae2d:goto L46ae2d;
case 0x46ae33:c.instructions+=5;goto B46ae33;
case 0x46ae39:c.instructions+=4;goto B46ae39;
case 0x46ae3a:c.instructions+=3;goto B46ae3a;
case 0x46ae3c:c.instructions+=2;goto B46ae3c;
case 0x46ae3e:c.instructions+=1;goto B46ae3e;
case 0x46ae44:goto L46ae44;
case 0x46ae4a:c.instructions+=1;goto B46ae4a;
case 0x46ae50:goto L46ae50;
case 0x46ae51:c.instructions+=5;goto B46ae51;
case 0x46ae52:c.instructions+=4;goto B46ae52;
case 0x46ae59:c.instructions+=3;goto B46ae59;
case 0x46ae5f:c.instructions+=2;goto B46ae5f;
case 0x46ae67:c.instructions+=1;goto B46ae67;
case 0x46ae70:goto L46ae70;
case 0x46ae7a:c.instructions+=2;goto B46ae7a;
case 0x46ae7d:c.instructions+=1;goto B46ae7d;
case 0x46ae7f:goto L46ae7f;
case 0x46ae81:c.instructions+=1;goto B46ae81;
case 0x46ae86:goto L46ae86;
case 0x46ae88:c.instructions+=5;goto B46ae88;
case 0x46ae8b:c.instructions+=4;goto B46ae8b;
case 0x46ae8f:c.instructions+=3;goto B46ae8f;
case 0x46ae91:c.instructions+=2;goto B46ae91;
case 0x46ae95:c.instructions+=1;goto B46ae95;
case 0x46ae97:goto L46ae97;
case 0x46ae9a:c.instructions+=11;goto B46ae9a;
case 0x46ae9b:c.instructions+=10;goto B46ae9b;
case 0x46ae9c:c.instructions+=9;goto B46ae9c;
case 0x46aea1:c.instructions+=8;goto B46aea1;
case 0x46aea7:c.instructions+=7;goto B46aea7;
case 0x46aeaa:c.instructions+=6;goto B46aeaa;
case 0x46aead:c.instructions+=5;goto B46aead;
case 0x46aeb0:c.instructions+=4;goto B46aeb0;
case 0x46aeb7:c.instructions+=3;goto B46aeb7;
case 0x46aeba:c.instructions+=2;goto B46aeba;
case 0x46aebd:c.instructions+=1;goto B46aebd;
case 0x46aec2:goto L46aec2;
case 0x46aec5:c.instructions+=2;goto B46aec5;
case 0x46aec7:c.instructions+=1;goto B46aec7;
case 0x46aec9:goto L46aec9;
case 0x46aece:c.instructions+=2;goto B46aece;
case 0x46aed3:c.instructions+=1;goto B46aed3;
case 0x46aed8:goto L46aed8;
case 0x46aed9:c.instructions+=3;goto B46aed9;
case 0x46aeda:c.instructions+=2;goto B46aeda;
case 0x46aedf:c.instructions+=1;goto B46aedf;
case 0x46aee4:goto L46aee4;
case 0x46aee7:c.instructions+=1;goto B46aee7;
case 0x46aee9:goto L46aee9;
case 0x46aeeb:goto L46aeeb;
case 0x46aef3:c.instructions+=1;goto B46aef3;
case 0x46aef6:goto L46aef6;
case 0x46aefa:c.instructions+=4;goto B46aefa;
case 0x46aefd:c.instructions+=3;goto B46aefd;
case 0x46aefe:c.instructions+=2;goto B46aefe;
case 0x46af02:c.instructions+=1;goto B46af02;
case 0x46af08:goto L46af08;
case 0x46af09:c.instructions+=1;goto B46af09;
case 0x46af0a:goto L46af0a;
case 0x46af0b:goto L46af0b;
case 0x46af0f:c.instructions+=4;goto B46af0f;
case 0x46af10:c.instructions+=3;goto B46af10;
case 0x46af17:c.instructions+=2;goto B46af17;
case 0x46af1a:c.instructions+=1;goto B46af1a;
case 0x46af20:goto L46af20;
case 0x46af21:c.instructions+=7;goto B46af21;
case 0x46af23:c.instructions+=6;goto B46af23;
case 0x46af26:c.instructions+=5;goto B46af26;
case 0x46af28:c.instructions+=4;goto B46af28;
case 0x46af2b:c.instructions+=3;goto B46af2b;
case 0x46af2e:c.instructions+=2;goto B46af2e;
case 0x46af30:c.instructions+=1;goto B46af30;
case 0x46af33:goto L46af33;
case 0x46af36:c.instructions+=8;goto B46af36;
case 0x46af38:c.instructions+=7;goto B46af38;
case 0x46af3b:c.instructions+=6;goto B46af3b;
case 0x46af3f:c.instructions+=5;goto B46af3f;
case 0x46af42:c.instructions+=4;goto B46af42;
case 0x46af43:c.instructions+=3;goto B46af43;
case 0x46af46:c.instructions+=2;goto B46af46;
case 0x46af49:c.instructions+=1;goto B46af49;
case 0x46af4b:goto L46af4b;
case 0x46af4f:c.instructions+=8;goto B46af4f;
case 0x46af53:c.instructions+=7;goto B46af53;
case 0x46af54:c.instructions+=6;goto B46af54;
case 0x46af55:c.instructions+=5;goto B46af55;
case 0x46af59:c.instructions+=4;goto B46af59;
case 0x46af5a:c.instructions+=3;goto B46af5a;
case 0x46af5b:c.instructions+=2;goto B46af5b;
case 0x46af5e:c.instructions+=1;goto B46af5e;
case 0x46af63:goto L46af63;
case 0x46af67:c.instructions+=3;goto B46af67;
case 0x46af6a:c.instructions+=2;goto B46af6a;
case 0x46af6b:c.instructions+=1;goto B46af6b;
case 0x46af70:goto L46af70;
case 0x46af71:c.instructions+=4;goto B46af71;
case 0x46af73:c.instructions+=3;goto B46af73;
case 0x46af76:c.instructions+=2;goto B46af76;
case 0x46af78:c.instructions+=1;goto B46af78;
case 0x46af7e:goto L46af7e;
case 0x46af81:c.instructions+=2;goto B46af81;
case 0x46af83:c.instructions+=1;goto B46af83;
case 0x46af89:goto L46af89;
case 0x46af8d:c.instructions+=10;goto B46af8d;
case 0x46af90:c.instructions+=9;goto B46af90;
case 0x46af92:c.instructions+=8;goto B46af92;
case 0x46af96:c.instructions+=7;goto B46af96;
case 0x46af9a:c.instructions+=6;goto B46af9a;
case 0x46af9e:c.instructions+=5;goto B46af9e;
case 0x46afa0:c.instructions+=4;goto B46afa0;
case 0x46afa4:c.instructions+=3;goto B46afa4;
case 0x46afa6:c.instructions+=2;goto B46afa6;
case 0x46afa9:c.instructions+=1;goto B46afa9;
case 0x46afab:goto L46afab;
case 0x46afaf:c.instructions+=4;goto B46afaf;
case 0x46afb0:c.instructions+=3;goto B46afb0;
case 0x46afb2:c.instructions+=2;goto B46afb2;
case 0x46afb5:c.instructions+=1;goto B46afb5;
case 0x46afb7:goto L46afb7;
case 0x46afbb:c.instructions+=7;goto B46afbb;
case 0x46afbe:c.instructions+=6;goto B46afbe;
case 0x46afc2:c.instructions+=5;goto B46afc2;
case 0x46afc5:c.instructions+=4;goto B46afc5;
case 0x46afc7:c.instructions+=3;goto B46afc7;
case 0x46afcb:c.instructions+=2;goto B46afcb;
case 0x46afcd:c.instructions+=1;goto B46afcd;
case 0x46afd3:goto L46afd3;
case 0x46afd7:c.instructions+=3;goto B46afd7;
case 0x46afdb:c.instructions+=2;goto B46afdb;
case 0x46afdc:c.instructions+=1;goto B46afdc;
case 0x46afdf:goto L46afdf;
case 0x46afe3:c.instructions+=2;goto B46afe3;
case 0x46afe4:c.instructions+=1;goto B46afe4;
case 0x46afe7:goto L46afe7;
case 0x46afeb:c.instructions+=3;goto B46afeb;
case 0x46afec:c.instructions+=2;goto B46afec;
case 0x46afef:c.instructions+=1;goto B46afef;
case 0x46aff5:goto L46aff5;
case 0x46affc:goto L46affc;
default:missing_instruction(c.pc);}
B46a004:L46a004:{c.instructions+=16;NFSU2_TR(0x46a004);
__builtin_memmove((R+0),gp(0x7884e8),4);
}
B46a009:{NFSU2_TR(0x46a009);
__builtin_memmove(gp(0x82bd5c),(R+8),4);
}
B46a00f:{NFSU2_TR(0x46a00f);
__builtin_memmove((R+8),gp(0x7884f0),4);
}
B46a015:{NFSU2_TR(0x46a015);
__builtin_memmove(gp(0x82bd54),(R+4),4);
}
B46a01b:{NFSU2_TR(0x46a01b);
__builtin_memmove((R+4),gp(0x7884ec),4);
}
B46a021:{NFSU2_TR(0x46a021);
__builtin_memmove(gp(0x82bd68),(R+8),4);
}
B46a027:{NFSU2_TR(0x46a027);
{u32 ea_=u32(u32(8568168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a02d:{NFSU2_TR(0x46a02d);
__builtin_memmove(gp(0x82bd64),(R+4),4);
}
B46a033:{NFSU2_TR(0x46a033);
{u32 ea_=u32(u32(8568164u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46a039:{NFSU2_TR(0x46a039);
__builtin_memmove(gp(0x82bd60),(R+0),4);
}
B46a03e:{NFSU2_TR(0x46a03e);
s4(0x82bd50,u32(0x0ull));
}
B46a048:{NFSU2_TR(0x46a048);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B46a04a:{NFSU2_TR(0x46a04a);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46a050:{NFSU2_TR(0x46a050);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46a052:{NFSU2_TR(0x46a052);
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
B46a055:{NFSU2_TR(0x46a055);
if(r1(R+514)){{goto L46a069;}}
}
B46a057:L46a057:{c.instructions+=3;NFSU2_TR(0x46a057);
{u32 ea_=u32(u32(8568168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a05d:{NFSU2_TR(0x46a05d);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46a063:{NFSU2_TR(0x46a063);
{u32 ea_=u32(u32(8568168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a069:L46a069:{c.instructions+=4;NFSU2_TR(0x46a069);
__builtin_memmove((R+0),gp(0x7884e4),4);
}
B46a06e:{NFSU2_TR(0x46a06e);
s4(0x82bd6c,u32(0x0ull));
}
B46a078:{NFSU2_TR(0x46a078);
__builtin_memmove(gp(0x82bd70),(R+0),4);
}
B46a07d:{NFSU2_TR(0x46a07d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46a080:L46a080:{c.instructions+=25;NFSU2_TR(0x46a080);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a081:{NFSU2_TR(0x46a081);
__builtin_memmove((R+20),(R+16),4);
}
B46a083:{NFSU2_TR(0x46a083);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B46a086:{NFSU2_TR(0x46a086);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a088:{NFSU2_TR(0x46a088);
u8 U[4];
w4(U+0,u32(0x7724dbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a08d:{NFSU2_TR(0x46a08d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a093:{NFSU2_TR(0x46a093);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a094:{NFSU2_TR(0x46a094);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a09b:{NFSU2_TR(0x46a09b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B46a09e:{NFSU2_TR(0x46a09e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a09f:{NFSU2_TR(0x46a09f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B46a0a1:{NFSU2_TR(0x46a0a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a0a2:{NFSU2_TR(0x46a0a2);
__builtin_memmove((R+24),(R+4),4);
}
B46a0a4:{NFSU2_TR(0x46a0a4);
u8 U[4];
w4(U+0,u32(0x78a760ull));
s4(u32(r4(R+24)),r4(U+0));
}
B46a0aa:{NFSU2_TR(0x46a0aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46a0ad:{NFSU2_TR(0x46a0ad);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a0af:{NFSU2_TR(0x46a0af);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a0b3:{NFSU2_TR(0x46a0b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a0b6:{NFSU2_TR(0x46a0b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a0b9:{NFSU2_TR(0x46a0b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a0bc:{NFSU2_TR(0x46a0bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a0bf:{NFSU2_TR(0x46a0bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a0c2:{NFSU2_TR(0x46a0c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a0c5:{NFSU2_TR(0x46a0c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46a0c9:{NFSU2_TR(0x46a0c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a0ceull));
TAIL_STATIC(0x579f20u,579);
}
B46a0ce:L46a0ce:{c.instructions+=4;NFSU2_TR(0x46a0ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a0d2:{NFSU2_TR(0x46a0d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B46a0d8:{NFSU2_TR(0x46a0d8);
w4(R+4,u32(0x2ull));
}
B46a0dd:{NFSU2_TR(0x46a0dd);
w4(R+8,u32(0x1000ull));
}
B46a0e2:L46a0e2:{c.instructions+=8;NFSU2_TR(0x46a0e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x7fffull));
s4(u32(r4(U+0)),r4(U+4));
}
B46a0e9:{NFSU2_TR(0x46a0e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a0ec:{NFSU2_TR(0x46a0ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B46a0ee:{NFSU2_TR(0x46a0ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a0f1:{NFSU2_TR(0x46a0f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a0f4:{NFSU2_TR(0x46a0f4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B46a0f7:{NFSU2_TR(0x46a0f7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B46a0f8:{NFSU2_TR(0x46a0f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46a0e2u);}goto L46a0e2;}}
}
B46a0fa:L46a0fa:{c.instructions+=19;NFSU2_TR(0x46a0fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x132ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a100:{NFSU2_TR(0x46a100);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x133ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a106:{NFSU2_TR(0x46a106);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a10c:{NFSU2_TR(0x46a10c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a10f:{NFSU2_TR(0x46a10f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a115:{NFSU2_TR(0x46a115);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x135ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a11b:{NFSU2_TR(0x46a11b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a121:{NFSU2_TR(0x46a121);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x131ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a127:{NFSU2_TR(0x46a127);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a12a:{NFSU2_TR(0x46a12a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a12d:{NFSU2_TR(0x46a12d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a130:{NFSU2_TR(0x46a130);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46a137:{NFSU2_TR(0x46a137);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a13a:{NFSU2_TR(0x46a13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a13d:{NFSU2_TR(0x46a13d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a13e:{NFSU2_TR(0x46a13e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46a141:{NFSU2_TR(0x46a141);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a144:{NFSU2_TR(0x46a144);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a147:{NFSU2_TR(0x46a147);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a14cull));
TAIL_STATIC(0x576a10u,576);
}
B46a14c:L46a14c:{c.instructions+=16;NFSU2_TR(0x46a14c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a150:{NFSU2_TR(0x46a150);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a156:{NFSU2_TR(0x46a156);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a15c:{NFSU2_TR(0x46a15c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a162:{NFSU2_TR(0x46a162);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a168:{NFSU2_TR(0x46a168);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a16e:{NFSU2_TR(0x46a16e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a171:{NFSU2_TR(0x46a171);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a177:{NFSU2_TR(0x46a177);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a17a:{NFSU2_TR(0x46a17a);
__builtin_memmove((R+0),(R+24),4);
}
B46a17c:{NFSU2_TR(0x46a17c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46a17d:{NFSU2_TR(0x46a17d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a184:{NFSU2_TR(0x46a184);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46a185:{NFSU2_TR(0x46a185);
__builtin_memmove((R+16),(R+20),4);
}
B46a187:{NFSU2_TR(0x46a187);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46a188:{NFSU2_TR(0x46a188);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46a190:L46a190:{c.instructions+=2;NFSU2_TR(0x46a190);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46a194:{NFSU2_TR(0x46a194);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46a1a0:L46a1a0:{c.instructions+=4;NFSU2_TR(0x46a1a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x135ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B46a1a6:{NFSU2_TR(0x46a1a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46a1a8:{NFSU2_TR(0x46a1a8);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+8),r1(U+3)));
w1(U+4,u8(u32(r1(R+8))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46a1aa:{NFSU2_TR(0x46a1aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46a1e7;}}
}
B46a1ac:L46a1ac:{c.instructions+=8;NFSU2_TR(0x46a1ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a1ad:{NFSU2_TR(0x46a1ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B46a1b3:{NFSU2_TR(0x46a1b3);
w1(R+8,u8(0x1ull));
}
B46a1b5:{NFSU2_TR(0x46a1b5);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
w1(R+512,u8((r1(R+12))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+12),r1(U+3)));
w1(U+4,u8(u32(r1(R+12))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46a1b7:{NFSU2_TR(0x46a1b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x135ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a1bd:{NFSU2_TR(0x46a1bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a1c0:{NFSU2_TR(0x46a1c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46a1c1:{NFSU2_TR(0x46a1c1);
if(r1(R+518)){{goto L46a1e7;}}
}
B46a1c3:L46a1c3:{c.instructions+=9;NFSU2_TR(0x46a1c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a1c9:{NFSU2_TR(0x46a1c9);
w4(R+8,u32(0x3f800000ull));
}
B46a1ce:{NFSU2_TR(0x46a1ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
w4(U+4,u32(0x3dcccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B46a1d5:{NFSU2_TR(0x46a1d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a1d8:{NFSU2_TR(0x46a1d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a1db:{NFSU2_TR(0x46a1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a1de:{NFSU2_TR(0x46a1de);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a1e1:{NFSU2_TR(0x46a1e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a1e4:{NFSU2_TR(0x46a1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a1e7:L46a1e7:{c.instructions+=1;NFSU2_TR(0x46a1e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46a1f0:L46a1f0:{c.instructions+=26;NFSU2_TR(0x46a1f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B46a1f3:{NFSU2_TR(0x46a1f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a1f4:{NFSU2_TR(0x46a1f4);
__builtin_memmove((R+24),(R+4),4);
}
B46a1f6:{NFSU2_TR(0x46a1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a1f9:{NFSU2_TR(0x46a1f9);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a1fc:{NFSU2_TR(0x46a1fc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B46a1ff:{NFSU2_TR(0x46a1ff);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a202:{NFSU2_TR(0x46a202);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46a204:{NFSU2_TR(0x46a204);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a207:{NFSU2_TR(0x46a207);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46a209:{NFSU2_TR(0x46a209);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a20c:{NFSU2_TR(0x46a20c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a20d:{NFSU2_TR(0x46a20d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46a210:{NFSU2_TR(0x46a210);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a213:{NFSU2_TR(0x46a213);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a216:{NFSU2_TR(0x46a216);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a219:{NFSU2_TR(0x46a219);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a21c:{NFSU2_TR(0x46a21c);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a21f:{NFSU2_TR(0x46a21f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B46a222:{NFSU2_TR(0x46a222);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46a224:{NFSU2_TR(0x46a224);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a227:{NFSU2_TR(0x46a227);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a22a:{NFSU2_TR(0x46a22a);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a22d:{NFSU2_TR(0x46a22d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46a230:{NFSU2_TR(0x46a230);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a231:{NFSU2_TR(0x46a231);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a236ull));
TAIL_STATIC(0x459680u,459);
}
B46a236:L46a236:{c.instructions+=4;NFSU2_TR(0x46a236);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a23c:{NFSU2_TR(0x46a23c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a23f:{NFSU2_TR(0x46a23f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a240:{NFSU2_TR(0x46a240);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a245ull));
TAIL_STATIC(0x459600u,459);
}
B46a245:L46a245:{c.instructions+=5;NFSU2_TR(0x46a245);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46a247:{NFSU2_TR(0x46a247);
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
B46a24a:{NFSU2_TR(0x46a24a);
__builtin_memmove((R+4),(R+24),4);
}
B46a24c:{NFSU2_TR(0x46a24c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a252:{NFSU2_TR(0x46a252);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a255ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46a255:L46a255:{c.instructions+=4;NFSU2_TR(0x46a255);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a25b:{NFSU2_TR(0x46a25b);
__builtin_memmove((R+4),gp(0x890080),4);
}
B46a261:{NFSU2_TR(0x46a261);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a262:{NFSU2_TR(0x46a262);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a267ull));
TAIL_STATIC(0x5f1160u,5f1);
}
B46a267:L46a267:{c.instructions+=5;NFSU2_TR(0x46a267);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a26d:{NFSU2_TR(0x46a26d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a270:{NFSU2_TR(0x46a270);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x132ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46a277:{NFSU2_TR(0x46a277);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46a27e:{NFSU2_TR(0x46a27e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a283ull));
TAIL_STATIC(0x592d50u,592);
}
B46a283:L46a283:{c.instructions+=3;NFSU2_TR(0x46a283);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a286:{NFSU2_TR(0x46a286);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x131ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a28c:{NFSU2_TR(0x46a28c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a291ull));
TAIL_STATIC(0x592d00u,592);
}
B46a291:L46a291:{c.instructions+=10;NFSU2_TR(0x46a291);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a297:{NFSU2_TR(0x46a297);
__builtin_memmove((R+0),gp(0x82cb40),4);
}
B46a29c:{NFSU2_TR(0x46a29c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a2a2:{NFSU2_TR(0x46a2a2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B46a2a3:{NFSU2_TR(0x46a2a3);
__builtin_memmove(gp(0x82cb40),(R+0),4);
}
B46a2a8:{NFSU2_TR(0x46a2a8);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B46a2af:{NFSU2_TR(0x46a2af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
w4(U+4,u32(0x82bd24ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46a2b9:{NFSU2_TR(0x46a2b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
w4(U+4,u32(0x82bd40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46a2c3:{NFSU2_TR(0x46a2c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46a2c7:{NFSU2_TR(0x46a2c7);
if(r1(R+518)){{goto L46a390;}}
}
B46a2cd:L46a2cd:{c.instructions+=6;NFSU2_TR(0x46a2cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46a2d1:{NFSU2_TR(0x46a2d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a2d2:{NFSU2_TR(0x46a2d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46a2d6:{NFSU2_TR(0x46a2d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a2d7:{NFSU2_TR(0x46a2d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a2da:{NFSU2_TR(0x46a2da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a2dfull));
TAIL_STATIC(0x592c90u,592);
}
B46a2df:L46a2df:{c.instructions+=3;NFSU2_TR(0x46a2df);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a2e3:{NFSU2_TR(0x46a2e3);
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
B46a2e5:{NFSU2_TR(0x46a2e5);
if(r1(R+518)){{goto L46a36e;}}
}
B46a2eb:L46a2eb:{c.instructions+=3;NFSU2_TR(0x46a2eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46a2ef:{NFSU2_TR(0x46a2ef);
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
B46a2f1:{NFSU2_TR(0x46a2f1);
if(r1(R+518)){{goto L46a372;}}
}
B46a2f3:L46a2f3:{c.instructions+=2;NFSU2_TR(0x46a2f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B46a2fa:{NFSU2_TR(0x46a2fa);
if(r1(R+518)){{goto L46a345;}}
}
B46a2fc:L46a2fc:{c.instructions+=4;NFSU2_TR(0x46a2fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a2ff:{NFSU2_TR(0x46a2ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a302:{NFSU2_TR(0x46a302);
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
B46a305:{NFSU2_TR(0x46a305);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46a33d;}}
}
B46a307:L46a307:{c.instructions+=3;NFSU2_TR(0x46a307);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46a30a:{NFSU2_TR(0x46a30a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46a30d:{NFSU2_TR(0x46a30d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46a338;}}
}
B46a30f:L46a30f:{c.instructions+=8;NFSU2_TR(0x46a30f);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a315:{NFSU2_TR(0x46a315);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46a31b:{NFSU2_TR(0x46a31b);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a321:{NFSU2_TR(0x46a321);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46a327:{NFSU2_TR(0x46a327);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B46a329:{NFSU2_TR(0x46a329);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46a32b:{NFSU2_TR(0x46a32b);
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
B46a32e:{NFSU2_TR(0x46a32e);
if(r1(R+514)){{goto L46a372;}}
}
B46a330:L46a330:{c.instructions+=2;NFSU2_TR(0x46a330);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a336:{NFSU2_TR(0x46a336);
{goto L46a378;}
}
B46a338:L46a338:{c.instructions+=2;NFSU2_TR(0x46a338);
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
B46a33b:{NFSU2_TR(0x46a33b);
if(r1(R+518)){{goto L46a372;}}
}
B46a33d:L46a33d:{c.instructions+=2;NFSU2_TR(0x46a33d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a343:{NFSU2_TR(0x46a343);
{goto L46a378;}
}
B46a345:L46a345:{c.instructions+=8;NFSU2_TR(0x46a345);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a34b:{NFSU2_TR(0x46a34b);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46a351:{NFSU2_TR(0x46a351);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a357:{NFSU2_TR(0x46a357);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46a35d:{NFSU2_TR(0x46a35d);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B46a35f:{NFSU2_TR(0x46a35f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46a361:{NFSU2_TR(0x46a361);
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
B46a364:{NFSU2_TR(0x46a364);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L46a372;}}
}
B46a366:L46a366:{c.instructions+=2;NFSU2_TR(0x46a366);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a36c:{NFSU2_TR(0x46a36c);
{goto L46a378;}
}
B46a36e:L46a36e:{c.instructions+=1;NFSU2_TR(0x46a36e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a372:L46a372:{c.instructions+=1;NFSU2_TR(0x46a372);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a378:L46a378:{c.instructions+=4;NFSU2_TR(0x46a378);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a37e:{NFSU2_TR(0x46a37e);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a384:{NFSU2_TR(0x46a384);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46a38a:{NFSU2_TR(0x46a38a);
{u32 ea_=u32(r4(R+24)+u32(284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a390:L46a390:{c.instructions+=3;NFSU2_TR(0x46a390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46a392:{NFSU2_TR(0x46a392);
__builtin_memmove((R+4),(R+24),4);
}
B46a394:{NFSU2_TR(0x46a394);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a397ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46a397:L46a397:{c.instructions+=4;NFSU2_TR(0x46a397);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46a398:{NFSU2_TR(0x46a398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46a399:{NFSU2_TR(0x46a399);
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
B46a39c:{NFSU2_TR(0x46a39c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46a3a0:L46a3a0:{c.instructions+=4;NFSU2_TR(0x46a3a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a3a1:{NFSU2_TR(0x46a3a1);
__builtin_memmove((R+24),(R+4),4);
}
B46a3a3:{NFSU2_TR(0x46a3a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46a3a5:{NFSU2_TR(0x46a3a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a3a8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46a3a8:L46a3a8:{c.instructions+=2;NFSU2_TR(0x46a3a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46a3aa:{NFSU2_TR(0x46a3aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46a3ca;}}
}
B46a3ac:L46a3ac:{c.instructions+=3;NFSU2_TR(0x46a3ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x132ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46a3b2:{NFSU2_TR(0x46a3b2);
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
B46a3b4:{NFSU2_TR(0x46a3b4);
if(r1(R+518)){{goto L46a3ca;}}
}
B46a3b6:L46a3b6:{c.instructions+=3;NFSU2_TR(0x46a3b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46a3b8:{NFSU2_TR(0x46a3b8);
__builtin_memmove((R+4),(R+24),4);
}
B46a3ba:{NFSU2_TR(0x46a3ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a3bdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46a3bd:L46a3bd:{c.instructions+=2;NFSU2_TR(0x46a3bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x132ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46a3c4:{NFSU2_TR(0x46a3c4);
s4(0x82b950,u32(u32(m4(0x82b950))-u32(u32(0x1ull))));
}
B46a3ca:L46a3ca:{c.instructions+=3;NFSU2_TR(0x46a3ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46a3d0:{NFSU2_TR(0x46a3d0);
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
B46a3d2:{NFSU2_TR(0x46a3d2);
if(r1(R+518)){{goto L46a3f3;}}
}
B46a3d4:L46a3d4:{c.instructions+=3;NFSU2_TR(0x46a3d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46a3d7:{NFSU2_TR(0x46a3d7);
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
B46a3d9:{NFSU2_TR(0x46a3d9);
if(r1(R+518)){{goto L46a3f3;}}
}
B46a3db:L46a3db:{c.instructions+=3;NFSU2_TR(0x46a3db);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46a3e1:{NFSU2_TR(0x46a3e1);
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
B46a3e3:{NFSU2_TR(0x46a3e3);
if(r1(R+518)){{goto L46a3f3;}}
}
B46a3e5:L46a3e5:{c.instructions+=3;NFSU2_TR(0x46a3e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46a3e7:{NFSU2_TR(0x46a3e7);
__builtin_memmove((R+4),(R+24),4);
}
B46a3e9:{NFSU2_TR(0x46a3e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a3ecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46a3ec:L46a3ec:{c.instructions+=1;NFSU2_TR(0x46a3ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46a3f3:L46a3f3:{c.instructions+=2;NFSU2_TR(0x46a3f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46a3f4:{NFSU2_TR(0x46a3f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46a400:L46a400:{c.instructions+=7;NFSU2_TR(0x46a400);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a401:{NFSU2_TR(0x46a401);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a402:{NFSU2_TR(0x46a402);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a403:{NFSU2_TR(0x46a403);
__builtin_memmove((R+28),(R+4),4);
}
B46a405:{NFSU2_TR(0x46a405);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46a40b:{NFSU2_TR(0x46a40b);
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
B46a40d:{NFSU2_TR(0x46a40d);
if(r1(R+518)){{goto L46a44d;}}
}
B46a40f:L46a40f:{c.instructions+=3;NFSU2_TR(0x46a40f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46a411:{NFSU2_TR(0x46a411);
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
B46a413:{NFSU2_TR(0x46a413);
if(r1(R+518)){{goto L46a41a;}}
}
B46a415:L46a415:{c.instructions+=1;NFSU2_TR(0x46a415);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a41aull));
TAIL_STATIC(0x735550u,735);
}
B46a41a:L46a41a:{c.instructions+=3;NFSU2_TR(0x46a41a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46a41e:{NFSU2_TR(0x46a41e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a41f:{NFSU2_TR(0x46a41f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a424ull));
TAIL_STATIC(0x734df0u,734);
}
B46a424:L46a424:{c.instructions+=2;NFSU2_TR(0x46a424);
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
B46a427:{NFSU2_TR(0x46a427);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a42cull));
TAIL_STATIC(0x734e40u,734);
}
B46a42c:L46a42c:{c.instructions+=5;NFSU2_TR(0x46a42c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a430:{NFSU2_TR(0x46a430);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46a432:{NFSU2_TR(0x46a432);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a434:{NFSU2_TR(0x46a434);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a435:{NFSU2_TR(0x46a435);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a438ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46a438:L46a438:{c.instructions+=1;NFSU2_TR(0x46a438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a43dull));
TAIL_STATIC(0x734e60u,734);
}
B46a43d:L46a43d:{c.instructions+=2;NFSU2_TR(0x46a43d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46a447:{NFSU2_TR(0x46a447);
u8 U[6];
w1(R+523,sborrow<u32>(m4(0x82b94c),u32(0x1ull)));
s4(0x82b94c,u32(u32(m4(0x82b94c))-u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x82b94c))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x82b94c))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x82b94c))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46a44d:L46a44d:{c.instructions+=4;NFSU2_TR(0x46a44d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46a44e:{NFSU2_TR(0x46a44e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46a44f:{NFSU2_TR(0x46a44f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46a450:{NFSU2_TR(0x46a450);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46a460:L46a460:{c.instructions+=7;NFSU2_TR(0x46a460);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a461:{NFSU2_TR(0x46a461);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a462:{NFSU2_TR(0x46a462);
__builtin_memmove((R+24),(R+4),4);
}
B46a464:{NFSU2_TR(0x46a464);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a467:{NFSU2_TR(0x46a467);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B46a469:{NFSU2_TR(0x46a469);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46a46b:{NFSU2_TR(0x46a46b);
if(r1(R+518)){{goto L46a4bb;}}
}
B46a46d:L46a46d:{c.instructions+=11;NFSU2_TR(0x46a46d);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a470:{NFSU2_TR(0x46a470);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a473:{NFSU2_TR(0x46a473);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a476:{NFSU2_TR(0x46a476);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a47c:{NFSU2_TR(0x46a47c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46a47e:{NFSU2_TR(0x46a47e);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a484:{NFSU2_TR(0x46a484);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a48a:{NFSU2_TR(0x46a48a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a48d:{NFSU2_TR(0x46a48d);
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
B46a48f:{NFSU2_TR(0x46a48f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46a496:{NFSU2_TR(0x46a496);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46a4ce;}}
}
B46a498:L46a498:{c.instructions+=4;NFSU2_TR(0x46a498);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B46a49e:{NFSU2_TR(0x46a49e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a4a4:{NFSU2_TR(0x46a4a4);
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
B46a4a6:{NFSU2_TR(0x46a4a6);
if(r1(R+518)){{goto L46a4d5;}}
}
B46a4a8:L46a4a8:{c.instructions+=3;NFSU2_TR(0x46a4a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46a4aa:{NFSU2_TR(0x46a4aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a4ab:{NFSU2_TR(0x46a4ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a4aeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46a4ae:L46a4ae:{c.instructions+=3;NFSU2_TR(0x46a4ae);
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
B46a4b0:{NFSU2_TR(0x46a4b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a4b3:{NFSU2_TR(0x46a4b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46a4c4;}}
}
B46a4b5:L46a4b5:{c.instructions+=1;NFSU2_TR(0x46a4b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a4bb:L46a4bb:{c.instructions+=4;NFSU2_TR(0x46a4bb);
__builtin_memmove((R+4),(R+24),4);
}
B46a4bd:{NFSU2_TR(0x46a4bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46a4be:{NFSU2_TR(0x46a4be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46a4bf:{NFSU2_TR(0x46a4bf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46a1a0u);}goto L46a1a0;}
}
B46a4c4:L46a4c4:{c.instructions+=4;NFSU2_TR(0x46a4c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46a4c6:{NFSU2_TR(0x46a4c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a4c7:{NFSU2_TR(0x46a4c7);
__builtin_memmove((R+4),(R+0),4);
}
B46a4c9:{NFSU2_TR(0x46a4c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a4ccull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46a4cc:L46a4cc:{c.instructions+=1;NFSU2_TR(0x46a4cc);
{goto L46a4d5;}
}
B46a4ce:L46a4ce:{c.instructions+=3;NFSU2_TR(0x46a4ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46a4d0:{NFSU2_TR(0x46a4d0);
__builtin_memmove((R+4),(R+24),4);
}
B46a4d2:{NFSU2_TR(0x46a4d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a4d5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46a4d5:L46a4d5:{c.instructions+=3;NFSU2_TR(0x46a4d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46a4d7:{NFSU2_TR(0x46a4d7);
__builtin_memmove((R+4),(R+24),4);
}
B46a4d9:{NFSU2_TR(0x46a4d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a4dcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46a4dc:L46a4dc:{c.instructions+=3;NFSU2_TR(0x46a4dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a4e2:{NFSU2_TR(0x46a4e2);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46a4e4:{NFSU2_TR(0x46a4e4);
if(r1(R+518)){{goto L46a4f8;}}
}
B46a4e6:L46a4e6:{c.instructions+=2;NFSU2_TR(0x46a4e6);
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
B46a4e7:{NFSU2_TR(0x46a4e7);
if(r1(R+518)){{goto L46a535;}}
}
B46a4e9:L46a4e9:{c.instructions+=2;NFSU2_TR(0x46a4e9);
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
B46a4ea:{NFSU2_TR(0x46a4ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46a502;}}
}
B46a4ec:L46a4ec:{c.instructions+=2;NFSU2_TR(0x46a4ec);
s4(0x7ec844,u32(0x78a7c0ull));
}
B46a4f6:{NFSU2_TR(0x46a4f6);
{goto L46a502;}
}
B46a4f8:L46a4f8:{c.instructions+=1;NFSU2_TR(0x46a4f8);
s4(0x7ec844,u32(0x78a7b0ull));
}
B46a502:L46a502:{c.instructions+=10;NFSU2_TR(0x46a502);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a505:{NFSU2_TR(0x46a505);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a50b:{NFSU2_TR(0x46a50b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46a50d:{NFSU2_TR(0x46a50d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a513:{NFSU2_TR(0x46a513);
__builtin_memmove((R+4),(R+24),4);
}
B46a515:{NFSU2_TR(0x46a515);
__builtin_memmove(gp(0x7f3920),(R+0),4);
}
B46a51a:{NFSU2_TR(0x46a51a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a520:{NFSU2_TR(0x46a520);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a526:{NFSU2_TR(0x46a526);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a52c:{NFSU2_TR(0x46a52c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a52full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46a52f:L46a52f:{c.instructions+=1;NFSU2_TR(0x46a52f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a535:L46a535:{c.instructions+=3;NFSU2_TR(0x46a535);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46a536:{NFSU2_TR(0x46a536);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46a537:{NFSU2_TR(0x46a537);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46a540:L46a540:{c.instructions+=7;NFSU2_TR(0x46a540);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a541:{NFSU2_TR(0x46a541);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a542:{NFSU2_TR(0x46a542);
__builtin_memmove((R+24),(R+4),4);
}
B46a544:{NFSU2_TR(0x46a544);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a547:{NFSU2_TR(0x46a547);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B46a549:{NFSU2_TR(0x46a549);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46a54b:{NFSU2_TR(0x46a54b);
if(r1(R+518)){{goto L46a615;}}
}
B46a551:L46a551:{c.instructions+=43;NFSU2_TR(0x46a551);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a554:{NFSU2_TR(0x46a554);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a557:{NFSU2_TR(0x46a557);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a55a:{NFSU2_TR(0x46a55a);
__builtin_memmove(gp(0x82bcb0),(R+0),4);
}
B46a55f:{NFSU2_TR(0x46a55f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46a561:{NFSU2_TR(0x46a561);
{u32 ea_=u32(u32(8567988u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a567:{NFSU2_TR(0x46a567);
{u32 ea_=u32(u32(8567992u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a56d:{NFSU2_TR(0x46a56d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a570:{NFSU2_TR(0x46a570);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a573:{NFSU2_TR(0x46a573);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a576:{NFSU2_TR(0x46a576);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a579:{NFSU2_TR(0x46a579);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a57c:{NFSU2_TR(0x46a57c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B46a57f:{NFSU2_TR(0x46a57f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46a581:{NFSU2_TR(0x46a581);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a584:{NFSU2_TR(0x46a584);
__builtin_memmove((R+8),(R+4),4);
}
B46a586:{NFSU2_TR(0x46a586);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a589:{NFSU2_TR(0x46a589);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a58c:{NFSU2_TR(0x46a58c);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a58f:{NFSU2_TR(0x46a58f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a595:{NFSU2_TR(0x46a595);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46a597:{NFSU2_TR(0x46a597);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a59d:{NFSU2_TR(0x46a59d);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a5a3:{NFSU2_TR(0x46a5a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a5a6:{NFSU2_TR(0x46a5a6);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a5a9:{NFSU2_TR(0x46a5a9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B46a5ac:{NFSU2_TR(0x46a5ac);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a5af:{NFSU2_TR(0x46a5af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46a5b1:{NFSU2_TR(0x46a5b1);
__builtin_memmove(gp(0x82bcc0),(R+0),4);
}
B46a5b6:{NFSU2_TR(0x46a5b6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46a5b8:{NFSU2_TR(0x46a5b8);
{u32 ea_=u32(u32(8568004u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a5be:{NFSU2_TR(0x46a5be);
{u32 ea_=u32(u32(8568008u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a5c4:{NFSU2_TR(0x46a5c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a5c7:{NFSU2_TR(0x46a5c7);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a5ca:{NFSU2_TR(0x46a5ca);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a5cd:{NFSU2_TR(0x46a5cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a5d3:{NFSU2_TR(0x46a5d3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46a5d5:{NFSU2_TR(0x46a5d5);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a5db:{NFSU2_TR(0x46a5db);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a5e1:{NFSU2_TR(0x46a5e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a5e4:{NFSU2_TR(0x46a5e4);
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
B46a5e6:{NFSU2_TR(0x46a5e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x132ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46a5ed:{NFSU2_TR(0x46a5ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46a626;}}
}
B46a5ef:L46a5ef:{c.instructions+=3;NFSU2_TR(0x46a5ef);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B46a5f4:{NFSU2_TR(0x46a5f4);
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
B46a5f6:{NFSU2_TR(0x46a5f6);
if(r1(R+518)){{goto L46a626;}}
}
B46a5f8:L46a5f8:{c.instructions+=3;NFSU2_TR(0x46a5f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a5fe:{NFSU2_TR(0x46a5fe);
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
B46a600:{NFSU2_TR(0x46a600);
if(r1(R+518)){{goto L46a626;}}
}
B46a602:L46a602:{c.instructions+=3;NFSU2_TR(0x46a602);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46a604:{NFSU2_TR(0x46a604);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a605:{NFSU2_TR(0x46a605);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a608ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46a608:L46a608:{c.instructions+=3;NFSU2_TR(0x46a608);
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
B46a60a:{NFSU2_TR(0x46a60a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a60d:{NFSU2_TR(0x46a60d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46a61e;}}
}
B46a60f:L46a60f:{c.instructions+=1;NFSU2_TR(0x46a60f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x132ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46a615:L46a615:{c.instructions+=4;NFSU2_TR(0x46a615);
__builtin_memmove((R+4),(R+24),4);
}
B46a617:{NFSU2_TR(0x46a617);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46a618:{NFSU2_TR(0x46a618);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46a619:{NFSU2_TR(0x46a619);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46a1a0u);}goto L46a1a0;}
}
B46a61e:L46a61e:{c.instructions+=4;NFSU2_TR(0x46a61e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46a620:{NFSU2_TR(0x46a620);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a621:{NFSU2_TR(0x46a621);
__builtin_memmove((R+4),(R+0),4);
}
B46a623:{NFSU2_TR(0x46a623);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a626ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46a626:L46a626:{c.instructions+=7;NFSU2_TR(0x46a626);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a629:{NFSU2_TR(0x46a629);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46a62f:{NFSU2_TR(0x46a62f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46a631:{NFSU2_TR(0x46a631);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a632:{NFSU2_TR(0x46a632);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a633:{NFSU2_TR(0x46a633);
__builtin_memmove((R+4),(R+24),4);
}
B46a635:{NFSU2_TR(0x46a635);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a638ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46a638:L46a638:{c.instructions+=12;NFSU2_TR(0x46a638);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a63e:{NFSU2_TR(0x46a63e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a644:{NFSU2_TR(0x46a644);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a64a:{NFSU2_TR(0x46a64a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a650:{NFSU2_TR(0x46a650);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x132ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46a657:{NFSU2_TR(0x46a657);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x133ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46a65e:{NFSU2_TR(0x46a65e);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x82b950),u32(0x1ull)));
s4(0x82b950,u32(u32(m4(0x82b950))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x82b950))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x82b950))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x82b950))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46a664:{NFSU2_TR(0x46a664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46a666:{NFSU2_TR(0x46a666);
__builtin_memmove((R+4),(R+24),4);
}
B46a668:{NFSU2_TR(0x46a668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46a669:{NFSU2_TR(0x46a669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46a66a:{NFSU2_TR(0x46a66a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B46a670:L46a670:{c.instructions+=5;NFSU2_TR(0x46a670);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46a676:{NFSU2_TR(0x46a676);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a677:{NFSU2_TR(0x46a677);
w1(R+12,u8(0x1ull));
}
B46a679:{NFSU2_TR(0x46a679);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46a67b:{NFSU2_TR(0x46a67b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46a687;}}
}
B46a67d:L46a67d:{c.instructions+=2;NFSU2_TR(0x46a67d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0xaull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B46a681:{NFSU2_TR(0x46a681);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46a687;}}
}
B46a683:L46a683:{c.instructions+=3;NFSU2_TR(0x46a683);
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
B46a685:{NFSU2_TR(0x46a685);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46a686:{NFSU2_TR(0x46a686);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46a687:L46a687:{c.instructions+=9;NFSU2_TR(0x46a687);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B46a68c:{NFSU2_TR(0x46a68c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a68d:{NFSU2_TR(0x46a68d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a68e:{NFSU2_TR(0x46a68e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a68f:{NFSU2_TR(0x46a68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46a692:{NFSU2_TR(0x46a692);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a695:{NFSU2_TR(0x46a695);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x24ull))));
}
B46a698:{NFSU2_TR(0x46a698);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46a69a:{NFSU2_TR(0x46a69a);
if(r1(R+518)){{goto L46a6a1;}}
}
B46a69c:L46a69c:{c.instructions+=2;NFSU2_TR(0x46a69c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46a69f:{NFSU2_TR(0x46a69f);
{goto L46a6a3;}
}
B46a6a1:L46a6a1:{c.instructions+=1;NFSU2_TR(0x46a6a1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B46a6a3:L46a6a3:{c.instructions+=2;NFSU2_TR(0x46a6a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a6a6:{NFSU2_TR(0x46a6a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a6abull));
TAIL_STATIC(0x592d80u,592);
}
B46a6ab:L46a6ab:{c.instructions+=3;NFSU2_TR(0x46a6ab);
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
B46a6ad:{NFSU2_TR(0x46a6ad);
__builtin_memmove((R+20),(R+0),4);
}
B46a6af:{NFSU2_TR(0x46a6af);
if(r1(R+518)){{goto L46a709;}}
}
B46a6b1:L46a6b1:{c.instructions+=3;NFSU2_TR(0x46a6b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46a6b3:{NFSU2_TR(0x46a6b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46a6b5:{NFSU2_TR(0x46a6b5);
if(r1(R+518)){{goto L46a6bc;}}
}
B46a6b7:L46a6b7:{c.instructions+=2;NFSU2_TR(0x46a6b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46a6ba:{NFSU2_TR(0x46a6ba);
{goto L46a6be;}
}
B46a6bc:L46a6bc:{c.instructions+=1;NFSU2_TR(0x46a6bc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B46a6be:L46a6be:{c.instructions+=2;NFSU2_TR(0x46a6be);
__builtin_memmove((R+4),(R+28),4);
}
B46a6c0:{NFSU2_TR(0x46a6c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a6c5ull));
TAIL_STATIC(0x468e20u,468);
}
B46a6c5:L46a6c5:{c.instructions+=3;NFSU2_TR(0x46a6c5);
__builtin_memmove((R+28),(R+0),4);
}
B46a6c7:{NFSU2_TR(0x46a6c7);
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
B46a6c9:{NFSU2_TR(0x46a6c9);
if(r1(R+518)){{goto L46a709;}}
}
B46a6cb:L46a6cb:{c.instructions+=1;NFSU2_TR(0x46a6cb);
{goto L46a6d0;}
}
B46a6d0:L46a6d0:{c.instructions+=3;NFSU2_TR(0x46a6d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a6d3:{NFSU2_TR(0x46a6d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46a6d5:{NFSU2_TR(0x46a6d5);
if(r1(R+518)){{goto L46a6ee;}}
}
B46a6d7:L46a6d7:{c.instructions+=1;NFSU2_TR(0x46a6d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a6dcull));
TAIL_STATIC(0x592d80u,592);
}
B46a6dc:L46a6dc:{c.instructions+=2;NFSU2_TR(0x46a6dc);
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
B46a6de:{NFSU2_TR(0x46a6de);
if(r1(R+518)){{goto L46a709;}}
}
B46a6e0:L46a6e0:{c.instructions+=2;NFSU2_TR(0x46a6e0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46a6e2:{NFSU2_TR(0x46a6e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46a6ee;}}
}
B46a6e4:L46a6e4:{c.instructions+=3;NFSU2_TR(0x46a6e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x132ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46a6ea:{NFSU2_TR(0x46a6ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46a6ec:{NFSU2_TR(0x46a6ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46a707;}}
}
B46a6ee:L46a6ee:{c.instructions+=3;NFSU2_TR(0x46a6ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46a6f1:{NFSU2_TR(0x46a6f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46a6f3:{NFSU2_TR(0x46a6f3);
if(r1(R+518)){{goto L46a6fa;}}
}
B46a6f5:L46a6f5:{c.instructions+=2;NFSU2_TR(0x46a6f5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
}
B46a6f8:{NFSU2_TR(0x46a6f8);
{goto L46a6fc;}
}
B46a6fa:L46a6fa:{c.instructions+=1;NFSU2_TR(0x46a6fa);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B46a6fc:L46a6fc:{c.instructions+=2;NFSU2_TR(0x46a6fc);
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
B46a6fe:{NFSU2_TR(0x46a6fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46a6d0u);}goto L46a6d0;}}
}
B46a700:L46a700:{c.instructions+=6;NFSU2_TR(0x46a700);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46a701:{NFSU2_TR(0x46a701);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46a702:{NFSU2_TR(0x46a702);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46a703:{NFSU2_TR(0x46a703);
__builtin_memmove((R+0),(R+12),1);
}
B46a705:{NFSU2_TR(0x46a705);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46a706:{NFSU2_TR(0x46a706);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46a707:L46a707:{c.instructions+=1;NFSU2_TR(0x46a707);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46a709:L46a709:{c.instructions+=6;NFSU2_TR(0x46a709);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46a70a:{NFSU2_TR(0x46a70a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46a70b:{NFSU2_TR(0x46a70b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46a70c:{NFSU2_TR(0x46a70c);
__builtin_memmove((R+0),(R+12),1);
}
B46a70e:{NFSU2_TR(0x46a70e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46a70f:{NFSU2_TR(0x46a70f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46a710:L46a710:{c.instructions+=5;NFSU2_TR(0x46a710);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a714:{NFSU2_TR(0x46a714);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a715:{NFSU2_TR(0x46a715);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a716:{NFSU2_TR(0x46a716);
__builtin_memmove((R+24),(R+4),4);
}
B46a718:{NFSU2_TR(0x46a718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a71dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46a1f0u);}goto L46a1f0;}
}
B46a71d:L46a71d:{c.instructions+=4;NFSU2_TR(0x46a71d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a720:{NFSU2_TR(0x46a720);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
w4(U+4,u32(0x82bcecull));
s4(u32(r4(U+0)),r4(U+4));
}
B46a72a:{NFSU2_TR(0x46a72a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
w4(U+4,u32(0x82bd08ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46a734:{NFSU2_TR(0x46a734);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a739ull));
TAIL_STATIC(0x592d50u,592);
}
B46a739:L46a739:{c.instructions+=2;NFSU2_TR(0x46a739);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a73c:{NFSU2_TR(0x46a73c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a741ull));
TAIL_STATIC(0x592d80u,592);
}
B46a741:L46a741:{c.instructions+=7;NFSU2_TR(0x46a741);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a747:{NFSU2_TR(0x46a747);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x148ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a74d:{NFSU2_TR(0x46a74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a753:{NFSU2_TR(0x46a753);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a759:{NFSU2_TR(0x46a759);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a75f:{NFSU2_TR(0x46a75f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46a760:{NFSU2_TR(0x46a760);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46a770:L46a770:{c.instructions+=9;NFSU2_TR(0x46a770);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a771:{NFSU2_TR(0x46a771);
__builtin_memmove((R+20),(R+16),4);
}
B46a773:{NFSU2_TR(0x46a773);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B46a776:{NFSU2_TR(0x46a776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8cull))));
}
B46a77c:{NFSU2_TR(0x46a77c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a77d:{NFSU2_TR(0x46a77d);
__builtin_memmove((R+24),(R+4),4);
}
B46a77f:{NFSU2_TR(0x46a77f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a785:{NFSU2_TR(0x46a785);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46a787:{NFSU2_TR(0x46a787);
if(r1(R+518)){{goto L46a9c5;}}
}
B46a78d:L46a78d:{c.instructions+=3;NFSU2_TR(0x46a78d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a793:{NFSU2_TR(0x46a793);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46a795:{NFSU2_TR(0x46a795);
if(r1(R+518)){{goto L46a9c5;}}
}
B46a79b:L46a79b:{c.instructions+=15;NFSU2_TR(0x46a79b);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a7a1:{NFSU2_TR(0x46a7a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a7a7:{NFSU2_TR(0x46a7a7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a7ab:{NFSU2_TR(0x46a7ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a7af:{NFSU2_TR(0x46a7af);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46a7b7:{NFSU2_TR(0x46a7b7);
{u32 ea_=u32(r4(R+0)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a7bd:{NFSU2_TR(0x46a7bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46a7c3:{NFSU2_TR(0x46a7c3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a7c7:{NFSU2_TR(0x46a7c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46a7cb:{NFSU2_TR(0x46a7cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a7cc:{NFSU2_TR(0x46a7cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46a7d0:{NFSU2_TR(0x46a7d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a7d1:{NFSU2_TR(0x46a7d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a7d5:{NFSU2_TR(0x46a7d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46a7dd:{NFSU2_TR(0x46a7dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a7e2ull));
TAIL_STATIC(0x43cf10u,43c);
}
B46a7e2:L46a7e2:{c.instructions+=14;NFSU2_TR(0x46a7e2);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a7e6:{NFSU2_TR(0x46a7e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46a7ea:{NFSU2_TR(0x46a7ea);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a7ee:{NFSU2_TR(0x46a7ee);
__builtin_memmove((R+0),(R+8),4);
}
B46a7f0:{NFSU2_TR(0x46a7f0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46a7f2:{NFSU2_TR(0x46a7f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46a7f6:{NFSU2_TR(0x46a7f6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a7fa:{NFSU2_TR(0x46a7fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a801:{NFSU2_TR(0x46a801);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a802:{NFSU2_TR(0x46a802);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a806:{NFSU2_TR(0x46a806);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46a80a:{NFSU2_TR(0x46a80a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a80b:{NFSU2_TR(0x46a80b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a80f:{NFSU2_TR(0x46a80f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a814ull));
TAIL_STATIC(0x43cf10u,43c);
}
B46a814:L46a814:{c.instructions+=23;NFSU2_TR(0x46a814);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a818:{NFSU2_TR(0x46a818);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a81c:{NFSU2_TR(0x46a81c);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a820:{NFSU2_TR(0x46a820);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46a822:{NFSU2_TR(0x46a822);
__builtin_memmove((R+4),(R+0),4);
}
B46a824:{NFSU2_TR(0x46a824);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a828:{NFSU2_TR(0x46a828);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a82c:{NFSU2_TR(0x46a82c);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a833:{NFSU2_TR(0x46a833);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a837:{NFSU2_TR(0x46a837);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B46a83a:{NFSU2_TR(0x46a83a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a83e:{NFSU2_TR(0x46a83e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46a842:{NFSU2_TR(0x46a842);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a846:{NFSU2_TR(0x46a846);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46a84a:{NFSU2_TR(0x46a84a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B46a84c:{NFSU2_TR(0x46a84c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a850:{NFSU2_TR(0x46a850);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46a854:{NFSU2_TR(0x46a854);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B46a856:{NFSU2_TR(0x46a856);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B46a858:{NFSU2_TR(0x46a858);
{u32 ea_=u32(u32(7907284u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46a85e:{NFSU2_TR(0x46a85e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46a860:{NFSU2_TR(0x46a860);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46a863:{NFSU2_TR(0x46a863);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46a9c5;}}
}
B46a869:L46a869:{c.instructions+=6;NFSU2_TR(0x46a869);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46a86f:{NFSU2_TR(0x46a86f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x90ull))));
}
B46a875:{NFSU2_TR(0x46a875);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a876:{NFSU2_TR(0x46a876);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46a87a:{NFSU2_TR(0x46a87a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a87b:{NFSU2_TR(0x46a87b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a880ull));
TAIL_STATIC(0x468e90u,468);
}
B46a880:L46a880:{c.instructions+=6;NFSU2_TR(0x46a880);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a886:{NFSU2_TR(0x46a886);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x90ull))));
}
B46a88c:{NFSU2_TR(0x46a88c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a88d:{NFSU2_TR(0x46a88d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46a894:{NFSU2_TR(0x46a894);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a895:{NFSU2_TR(0x46a895);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a89aull));
TAIL_STATIC(0x468e90u,468);
}
B46a89a:L46a89a:{c.instructions+=43;NFSU2_TR(0x46a89a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a8a0:{NFSU2_TR(0x46a8a0);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a8a3:{NFSU2_TR(0x46a8a3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B46a8a6:{NFSU2_TR(0x46a8a6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a8a9:{NFSU2_TR(0x46a8a9);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a8ad:{NFSU2_TR(0x46a8ad);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a8b0:{NFSU2_TR(0x46a8b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a8b6:{NFSU2_TR(0x46a8b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46a8b9:{NFSU2_TR(0x46a8b9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B46a8bc:{NFSU2_TR(0x46a8bc);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a8c0:{NFSU2_TR(0x46a8c0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a8c3:{NFSU2_TR(0x46a8c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a8c7:{NFSU2_TR(0x46a8c7);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a8cb:{NFSU2_TR(0x46a8cb);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a8ce:{NFSU2_TR(0x46a8ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46a8d2:{NFSU2_TR(0x46a8d2);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a8d6:{NFSU2_TR(0x46a8d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a8d7:{NFSU2_TR(0x46a8d7);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B46a8da:{NFSU2_TR(0x46a8da);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a8dd:{NFSU2_TR(0x46a8dd);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46a8e1:{NFSU2_TR(0x46a8e1);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a8e4:{NFSU2_TR(0x46a8e4);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46a8e8:{NFSU2_TR(0x46a8e8);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a8ec:{NFSU2_TR(0x46a8ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46a8f0:{NFSU2_TR(0x46a8f0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46a8f2:{NFSU2_TR(0x46a8f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a8f6:{NFSU2_TR(0x46a8f6);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a8fa:{NFSU2_TR(0x46a8fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46a8fe:{NFSU2_TR(0x46a8fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a8ff:{NFSU2_TR(0x46a8ff);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a903:{NFSU2_TR(0x46a903);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a906:{NFSU2_TR(0x46a906);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46a90a:{NFSU2_TR(0x46a90a);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a90d:{NFSU2_TR(0x46a90d);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46a911:{NFSU2_TR(0x46a911);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a914:{NFSU2_TR(0x46a914);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46a918:{NFSU2_TR(0x46a918);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a91c:{NFSU2_TR(0x46a91c);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46a920:{NFSU2_TR(0x46a920);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46a922:{NFSU2_TR(0x46a922);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a929:{NFSU2_TR(0x46a929);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a92d:{NFSU2_TR(0x46a92d);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a931:{NFSU2_TR(0x46a931);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a936ull));
TAIL_STATIC(0x468e90u,468);
}
B46a936:L46a936:{c.instructions+=12;NFSU2_TR(0x46a936);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a939:{NFSU2_TR(0x46a939);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46a93d:{NFSU2_TR(0x46a93d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a940:{NFSU2_TR(0x46a940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46a942:{NFSU2_TR(0x46a942);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46a944:{NFSU2_TR(0x46a944);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a945:{NFSU2_TR(0x46a945);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a949:{NFSU2_TR(0x46a949);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46a94d:{NFSU2_TR(0x46a94d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a94e:{NFSU2_TR(0x46a94e);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46a952:{NFSU2_TR(0x46a952);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46a956:{NFSU2_TR(0x46a956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a95bull));
TAIL_STATIC(0x468e90u,468);
}
B46a95b:L46a95b:{c.instructions+=17;NFSU2_TR(0x46a95b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a95e:{NFSU2_TR(0x46a95e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a961:{NFSU2_TR(0x46a961);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B46a964:{NFSU2_TR(0x46a964);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a966:{NFSU2_TR(0x46a966);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a96a:{NFSU2_TR(0x46a96a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46a96e:{NFSU2_TR(0x46a96e);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a972:{NFSU2_TR(0x46a972);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46a976:{NFSU2_TR(0x46a976);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B46a978:{NFSU2_TR(0x46a978);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a97c:{NFSU2_TR(0x46a97c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46a980:{NFSU2_TR(0x46a980);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B46a982:{NFSU2_TR(0x46a982);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B46a984:{NFSU2_TR(0x46a984);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46a98a:{NFSU2_TR(0x46a98a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46a98c:{NFSU2_TR(0x46a98c);
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
B46a98f:{NFSU2_TR(0x46a98f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46a9cc;}}
}
B46a991:L46a991:{c.instructions+=16;NFSU2_TR(0x46a991);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a998:{NFSU2_TR(0x46a998);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B46a99a:{NFSU2_TR(0x46a99a);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a9a1:{NFSU2_TR(0x46a9a1);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B46a9a3:{NFSU2_TR(0x46a9a3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B46a9a5:{NFSU2_TR(0x46a9a5);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46a9ac:{NFSU2_TR(0x46a9ac);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B46a9ae:{NFSU2_TR(0x46a9ae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B46a9b0:{NFSU2_TR(0x46a9b0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B46a9b2:{NFSU2_TR(0x46a9b2);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B46a9b4:{NFSU2_TR(0x46a9b4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46a9b6:{NFSU2_TR(0x46a9b6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46a9b8:{NFSU2_TR(0x46a9b8);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46a9be:{NFSU2_TR(0x46a9be);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46a9c0:{NFSU2_TR(0x46a9c0);
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
B46a9c3:{NFSU2_TR(0x46a9c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46a9d2;}}
}
B46a9c5:L46a9c5:{c.instructions+=5;NFSU2_TR(0x46a9c5);
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
B46a9c7:{NFSU2_TR(0x46a9c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46a9c8:{NFSU2_TR(0x46a9c8);
__builtin_memmove((R+16),(R+20),4);
}
B46a9ca:{NFSU2_TR(0x46a9ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46a9cb:{NFSU2_TR(0x46a9cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46a9cc:L46a9cc:{c.instructions+=3;NFSU2_TR(0x46a9cc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46a9ce:{NFSU2_TR(0x46a9ce);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46a9d0:{NFSU2_TR(0x46a9d0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46a9d2:L46a9d2:{c.instructions+=5;NFSU2_TR(0x46a9d2);
w4(R+0,u32(0x1ull));
}
B46a9d7:{NFSU2_TR(0x46a9d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46a9d8:{NFSU2_TR(0x46a9d8);
__builtin_memmove((R+16),(R+20),4);
}
B46a9da:{NFSU2_TR(0x46a9da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46a9db:{NFSU2_TR(0x46a9db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46a9e0:L46a9e0:{c.instructions+=10;NFSU2_TR(0x46a9e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a9e1:{NFSU2_TR(0x46a9e1);
__builtin_memmove((R+24),(R+4),4);
}
B46a9e3:{NFSU2_TR(0x46a9e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a9e4:{NFSU2_TR(0x46a9e4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46a9e8:{NFSU2_TR(0x46a9e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((R+0),(U+0),4);
}
B46a9ee:{NFSU2_TR(0x46a9ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a9ef:{NFSU2_TR(0x46a9ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46a9f5:{NFSU2_TR(0x46a9f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a9f6:{NFSU2_TR(0x46a9f6);
__builtin_memmove((R+4),(R+28),4);
}
B46a9f8:{NFSU2_TR(0x46a9f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46a9fdull));
TAIL_STATIC(0x592c90u,592);
}
B46a9fd:L46a9fd:{c.instructions+=3;NFSU2_TR(0x46a9fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46a9fe:{NFSU2_TR(0x46a9fe);
__builtin_memmove((R+4),(R+24),4);
}
B46aa00:{NFSU2_TR(0x46aa00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46aa05ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46a1f0u);}goto L46a1f0;}
}
B46aa05:L46aa05:{c.instructions+=4;NFSU2_TR(0x46aa05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46aa06:{NFSU2_TR(0x46aa06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
w4(U+4,u32(0x82bd5cull));
s4(u32(r4(U+0)),r4(U+4));
}
B46aa10:{NFSU2_TR(0x46aa10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46aa11:{NFSU2_TR(0x46aa11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46aa20:L46aa20:{c.instructions+=13;NFSU2_TR(0x46aa20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46aa21:{NFSU2_TR(0x46aa21);
__builtin_memmove((R+20),(R+16),4);
}
B46aa23:{NFSU2_TR(0x46aa23);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B46aa26:{NFSU2_TR(0x46aa26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B46aa29:{NFSU2_TR(0x46aa29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46aa2a:{NFSU2_TR(0x46aa2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46aa2b:{NFSU2_TR(0x46aa2b);
__builtin_memmove((R+28),(R+4),4);
}
B46aa2d:{NFSU2_TR(0x46aa2d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46aa31:{NFSU2_TR(0x46aa31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46aa32:{NFSU2_TR(0x46aa32);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46aa36:{NFSU2_TR(0x46aa36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46aa37:{NFSU2_TR(0x46aa37);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46aa3a:{NFSU2_TR(0x46aa3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46aa3full));
TAIL_STATIC(0x592c90u,592);
}
B46aa3f:L46aa3f:{c.instructions+=3;NFSU2_TR(0x46aa3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46aa43:{NFSU2_TR(0x46aa43);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46aa45:{NFSU2_TR(0x46aa45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46aa5a;}}
}
B46aa47:L46aa47:{c.instructions+=3;NFSU2_TR(0x46aa47);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46aa4b:{NFSU2_TR(0x46aa4b);
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
B46aa4d:{NFSU2_TR(0x46aa4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46aa5a;}}
}
B46aa4f:L46aa4f:{c.instructions+=6;NFSU2_TR(0x46aa4f);
w4(R+0,u32(0x4ull));
}
B46aa54:{NFSU2_TR(0x46aa54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46aa55:{NFSU2_TR(0x46aa55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46aa56:{NFSU2_TR(0x46aa56);
__builtin_memmove((R+16),(R+20),4);
}
B46aa58:{NFSU2_TR(0x46aa58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46aa59:{NFSU2_TR(0x46aa59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46aa5a:L46aa5a:{c.instructions+=20;NFSU2_TR(0x46aa5a);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46aa60:{NFSU2_TR(0x46aa60);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46aa63:{NFSU2_TR(0x46aa63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46aa69:{NFSU2_TR(0x46aa69);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46aa6d:{NFSU2_TR(0x46aa6d);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46aa73:{NFSU2_TR(0x46aa73);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B46aa76:{NFSU2_TR(0x46aa76);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46aa7a:{NFSU2_TR(0x46aa7a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46aa7d:{NFSU2_TR(0x46aa7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46aa81:{NFSU2_TR(0x46aa81);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46aa84:{NFSU2_TR(0x46aa84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46aa86:{NFSU2_TR(0x46aa86);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46aa8a:{NFSU2_TR(0x46aa8a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46aa8c:{NFSU2_TR(0x46aa8c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46aa90:{NFSU2_TR(0x46aa90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46aa91:{NFSU2_TR(0x46aa91);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46aa95:{NFSU2_TR(0x46aa95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46aa96:{NFSU2_TR(0x46aa96);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46aa9a:{NFSU2_TR(0x46aa9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46aa9e:{NFSU2_TR(0x46aa9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46aaa3ull));
TAIL_STATIC(0x43cf10u,43c);
}
B46aaa3:L46aaa3:{c.instructions+=19;NFSU2_TR(0x46aaa3);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46aaa7:{NFSU2_TR(0x46aaa7);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46aaab:{NFSU2_TR(0x46aaab);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46aaaf:{NFSU2_TR(0x46aaaf);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46aab1:{NFSU2_TR(0x46aab1);
__builtin_memmove((R+4),(R+0),4);
}
B46aab3:{NFSU2_TR(0x46aab3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46aab7:{NFSU2_TR(0x46aab7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46aabb:{NFSU2_TR(0x46aabb);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46aabf:{NFSU2_TR(0x46aabf);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46aac3:{NFSU2_TR(0x46aac3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46aac6:{NFSU2_TR(0x46aac6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46aaca:{NFSU2_TR(0x46aaca);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46aace:{NFSU2_TR(0x46aace);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46aad4:{NFSU2_TR(0x46aad4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46aad8:{NFSU2_TR(0x46aad8);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B46aada:{NFSU2_TR(0x46aada);
{u32 ea_=u32(u32(7907284u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46aae0:{NFSU2_TR(0x46aae0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46aae2:{NFSU2_TR(0x46aae2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46aae5:{NFSU2_TR(0x46aae5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46ab49;}}
}
B46aae7:L46aae7:{c.instructions+=12;NFSU2_TR(0x46aae7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46aaeb:{NFSU2_TR(0x46aaeb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46aaf1:{NFSU2_TR(0x46aaf1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46aaf5:{NFSU2_TR(0x46aaf5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46aafb:{NFSU2_TR(0x46aafb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46aaff:{NFSU2_TR(0x46aaff);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46ab05:{NFSU2_TR(0x46ab05);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B46ab07:{NFSU2_TR(0x46ab07);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B46ab09:{NFSU2_TR(0x46ab09);
{u32 ea_=u32(u32(7907288u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46ab0f:{NFSU2_TR(0x46ab0f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46ab11:{NFSU2_TR(0x46ab11);
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
B46ab14:{NFSU2_TR(0x46ab14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46ab25;}}
}
B46ab16:L46ab16:{c.instructions+=8;NFSU2_TR(0x46ab16);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46ab18:{NFSU2_TR(0x46ab18);
w4(R+0,u32(0x2ull));
}
B46ab1d:{NFSU2_TR(0x46ab1d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46ab1f:{NFSU2_TR(0x46ab1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46ab20:{NFSU2_TR(0x46ab20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46ab21:{NFSU2_TR(0x46ab21);
__builtin_memmove((R+16),(R+20),4);
}
B46ab23:{NFSU2_TR(0x46ab23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46ab24:{NFSU2_TR(0x46ab24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46ab25:L46ab25:{c.instructions+=7;NFSU2_TR(0x46ab25);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B46ab27:{NFSU2_TR(0x46ab27);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46ab2b:{NFSU2_TR(0x46ab2b);
{u32 ea_=u32(u32(7907284u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46ab31:{NFSU2_TR(0x46ab31);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46ab33:{NFSU2_TR(0x46ab33);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46ab35:{NFSU2_TR(0x46ab35);
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
B46ab38:{NFSU2_TR(0x46ab38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46aa4fu);}goto L46aa4f;}}
}
B46ab3e:L46ab3e:{c.instructions+=6;NFSU2_TR(0x46ab3e);
w4(R+0,u32(0x3ull));
}
B46ab43:{NFSU2_TR(0x46ab43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46ab44:{NFSU2_TR(0x46ab44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46ab45:{NFSU2_TR(0x46ab45);
__builtin_memmove((R+16),(R+20),4);
}
B46ab47:{NFSU2_TR(0x46ab47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46ab48:{NFSU2_TR(0x46ab48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46ab49:L46ab49:{c.instructions+=16;NFSU2_TR(0x46ab49);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ab4f:{NFSU2_TR(0x46ab4f);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ab55:{NFSU2_TR(0x46ab55);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ab5b:{NFSU2_TR(0x46ab5b);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46ab5e:{NFSU2_TR(0x46ab5e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46ab60:{NFSU2_TR(0x46ab60);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46ab63:{NFSU2_TR(0x46ab63);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B46ab65:{NFSU2_TR(0x46ab65);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46ab67:{NFSU2_TR(0x46ab67);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46ab6a:{NFSU2_TR(0x46ab6a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B46ab6c:{NFSU2_TR(0x46ab6c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B46ab6e:{NFSU2_TR(0x46ab6e);
{u32 ea_=u32(u32(7907284u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46ab74:{NFSU2_TR(0x46ab74);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46ab76:{NFSU2_TR(0x46ab76);
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
B46ab79:{NFSU2_TR(0x46ab79);
w4(R+0,u32(0x4ull));
}
B46ab7e:{NFSU2_TR(0x46ab7e);
if(r1(R+518)){{goto L46ab85;}}
}
B46ab80:L46ab80:{c.instructions+=1;NFSU2_TR(0x46ab80);
w4(R+0,u32(0x5ull));
}
B46ab85:L46ab85:{c.instructions+=5;NFSU2_TR(0x46ab85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46ab86:{NFSU2_TR(0x46ab86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46ab87:{NFSU2_TR(0x46ab87);
__builtin_memmove((R+16),(R+20),4);
}
B46ab89:{NFSU2_TR(0x46ab89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46ab8a:{NFSU2_TR(0x46ab8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46ab90:L46ab90:{c.instructions+=1;NFSU2_TR(0x46ab90);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46a1f0u);}goto L46a1f0;}
}
B46aba0:L46aba0:{c.instructions+=12;NFSU2_TR(0x46aba0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46aba1:{NFSU2_TR(0x46aba1);
__builtin_memmove((R+20),(R+16),4);
}
B46aba3:{NFSU2_TR(0x46aba3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B46aba6:{NFSU2_TR(0x46aba6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B46aba9:{NFSU2_TR(0x46aba9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46abaa:{NFSU2_TR(0x46abaa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46abab:{NFSU2_TR(0x46abab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46abac:{NFSU2_TR(0x46abac);
__builtin_memmove((R+28),(R+4),4);
}
B46abae:{NFSU2_TR(0x46abae);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46abb1:{NFSU2_TR(0x46abb1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46abb3:{NFSU2_TR(0x46abb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46abb7:{NFSU2_TR(0x46abb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46adc4;}}
}
B46abbd:L46abbd:{c.instructions+=4;NFSU2_TR(0x46abbd);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B46abc2:{NFSU2_TR(0x46abc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46abc5:{NFSU2_TR(0x46abc5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x24ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46abc8:{NFSU2_TR(0x46abc8);
if(r1(R+518)){{goto L46aded;}}
}
B46abce:L46abce:{c.instructions+=3;NFSU2_TR(0x46abce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46abd0:{NFSU2_TR(0x46abd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46abd2:{NFSU2_TR(0x46abd2);
if(r1(R+518)){{goto L46abdd;}}
}
B46abd4:L46abd4:{c.instructions+=3;NFSU2_TR(0x46abd4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B46abd7:{NFSU2_TR(0x46abd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46abdb:{NFSU2_TR(0x46abdb);
{goto L46abe5;}
}
B46abdd:L46abdd:{c.instructions+=1;NFSU2_TR(0x46abdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46abe5:L46abe5:{c.instructions+=3;NFSU2_TR(0x46abe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46abeb:{NFSU2_TR(0x46abeb);
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
B46abed:{NFSU2_TR(0x46abed);
if(r1(R+518)){{goto L46aded;}}
}
B46abf3:L46abf3:{c.instructions+=4;NFSU2_TR(0x46abf3);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46abf7:{NFSU2_TR(0x46abf7);
u8 U[4];
w4(U+0,u32(0x82bcb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46abfc:{NFSU2_TR(0x46abfc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46abfd:{NFSU2_TR(0x46abfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ac02ull));
TAIL_STATIC(0x468e90u,468);
}
B46ac02:L46ac02:{c.instructions+=6;NFSU2_TR(0x46ac02);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46ac05:{NFSU2_TR(0x46ac05);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x70ull))));
}
B46ac08:{NFSU2_TR(0x46ac08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ac09:{NFSU2_TR(0x46ac09);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46ac0d:{NFSU2_TR(0x46ac0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ac0e:{NFSU2_TR(0x46ac0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ac13ull));
TAIL_STATIC(0x468e90u,468);
}
B46ac13:L46ac13:{c.instructions+=13;NFSU2_TR(0x46ac13);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ac17:{NFSU2_TR(0x46ac17);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46ac1b:{NFSU2_TR(0x46ac1b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B46ac1e:{NFSU2_TR(0x46ac1e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ac22:{NFSU2_TR(0x46ac22);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46ac26:{NFSU2_TR(0x46ac26);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B46ac28:{NFSU2_TR(0x46ac28);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ac2c:{NFSU2_TR(0x46ac2c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46ac30:{NFSU2_TR(0x46ac30);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B46ac32:{NFSU2_TR(0x46ac32);
{u32 ea_=u32(u32(7907292u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46ac38:{NFSU2_TR(0x46ac38);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46ac3a:{NFSU2_TR(0x46ac3a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46ac3d:{NFSU2_TR(0x46ac3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46ad38;}}
}
B46ac43:L46ac43:{c.instructions+=38;NFSU2_TR(0x46ac43);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46ac46:{NFSU2_TR(0x46ac46);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ac49:{NFSU2_TR(0x46ac49);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46ac4c:{NFSU2_TR(0x46ac4c);
{u32 ea_=u32(u32(7907292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46ac52:{NFSU2_TR(0x46ac52);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ac55:{NFSU2_TR(0x46ac55);
{u32 ea_=u32(u32(7907292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46ac5b:{NFSU2_TR(0x46ac5b);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ac5e:{NFSU2_TR(0x46ac5e);
{u32 ea_=u32(u32(7907292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46ac64:{NFSU2_TR(0x46ac64);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46ac68:{NFSU2_TR(0x46ac68);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46ac6a:{NFSU2_TR(0x46ac6a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46ac6e:{NFSU2_TR(0x46ac6e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ac72:{NFSU2_TR(0x46ac72);
{u32 ea_=u32(u32(8567992u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ac78:{NFSU2_TR(0x46ac78);
{u32 ea_=u32(u32(8567992u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46ac7e:{NFSU2_TR(0x46ac7e);
{u32 ea_=u32(u32(8567988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ac84:{NFSU2_TR(0x46ac84);
{u32 ea_=u32(u32(8567988u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46ac8a:{NFSU2_TR(0x46ac8a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B46ac8c:{NFSU2_TR(0x46ac8c);
{u32 ea_=u32(u32(8567984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ac92:{NFSU2_TR(0x46ac92);
{u32 ea_=u32(u32(8567984u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46ac98:{NFSU2_TR(0x46ac98);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B46ac9a:{NFSU2_TR(0x46ac9a);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B46ac9c:{NFSU2_TR(0x46ac9c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B46ac9e:{NFSU2_TR(0x46ac9e);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B46aca0:{NFSU2_TR(0x46aca0);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B46aca2:{NFSU2_TR(0x46aca2);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B46aca4:{NFSU2_TR(0x46aca4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B46aca6:{NFSU2_TR(0x46aca6);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46acaa:{NFSU2_TR(0x46acaa);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46acae:{NFSU2_TR(0x46acae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B46acb0:{NFSU2_TR(0x46acb0);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B46acb2:{NFSU2_TR(0x46acb2);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B46acb4:{NFSU2_TR(0x46acb4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46acb6:{NFSU2_TR(0x46acb6);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B46acb8:{NFSU2_TR(0x46acb8);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B46acba:{NFSU2_TR(0x46acba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46acbc:{NFSU2_TR(0x46acbc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46acbe:{NFSU2_TR(0x46acbe);
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
B46acc1:{NFSU2_TR(0x46acc1);
if(r1(R+514)){{goto L46ad34;}}
}
B46acc3:L46acc3:{c.instructions+=2;NFSU2_TR(0x46acc3);
u8 U[4];
w4(U+0,u32(0x82bcb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46acc8:{NFSU2_TR(0x46acc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46accdull));
TAIL_STATIC(0x440f70u,440);
}
B46accd:L46accd:{c.instructions+=7;NFSU2_TR(0x46accd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46acd1:{NFSU2_TR(0x46acd1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46acd4:{NFSU2_TR(0x46acd4);
u8 U[4];
w4(U+0,u32(0x3f866666ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46acd9:{NFSU2_TR(0x46acd9);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46acdd:{NFSU2_TR(0x46acdd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46acde:{NFSU2_TR(0x46acde);
__builtin_memmove((R+4),(R+24),4);
}
B46ace0:{NFSU2_TR(0x46ace0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ace5ull));
TAIL_STATIC(0x440fa0u,440);
}
B46ace5:L46ace5:{c.instructions+=2;NFSU2_TR(0x46ace5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ace6:{NFSU2_TR(0x46ace6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46acebull));
TAIL_STATIC(0x440f70u,440);
}
B46aceb:L46aceb:{c.instructions+=5;NFSU2_TR(0x46aceb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46acef:{NFSU2_TR(0x46acef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46acf2:{NFSU2_TR(0x46acf2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46acf4:{NFSU2_TR(0x46acf4);
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
B46acf7:{NFSU2_TR(0x46acf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46ad34;}}
}
B46acf9:L46acf9:{c.instructions+=4;NFSU2_TR(0x46acf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B46acfc:{NFSU2_TR(0x46acfc);
u8 U[4];
w4(U+0,u32(0x82bcc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ad01:{NFSU2_TR(0x46ad01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ad02:{NFSU2_TR(0x46ad02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ad07ull));
TAIL_STATIC(0x43ce10u,43c);
}
B46ad07:L46ad07:{c.instructions+=5;NFSU2_TR(0x46ad07);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46ad0d:{NFSU2_TR(0x46ad0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46ad10:{NFSU2_TR(0x46ad10);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46ad12:{NFSU2_TR(0x46ad12);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46ad15:{NFSU2_TR(0x46ad15);
if(r1(R+514)){{goto L46ad34;}}
}
B46ad17:L46ad17:{c.instructions+=8;NFSU2_TR(0x46ad17);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46ad1b:{NFSU2_TR(0x46ad1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ad1e:{NFSU2_TR(0x46ad1e);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ad21:{NFSU2_TR(0x46ad21);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B46ad23:{NFSU2_TR(0x46ad23);
{u32 ea_=u32(u32(7907284u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46ad29:{NFSU2_TR(0x46ad29);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46ad2b:{NFSU2_TR(0x46ad2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46ad2e:{NFSU2_TR(0x46ad2e);
if(r1(R+518)){{goto L46adc4;}}
}
B46ad34:L46ad34:{c.instructions+=1;NFSU2_TR(0x46ad34);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46ad38:L46ad38:{c.instructions+=3;NFSU2_TR(0x46ad38);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ad3c:{NFSU2_TR(0x46ad3c);
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
B46ad3e:{NFSU2_TR(0x46ad3e);
if(r1(R+518)){{goto L46aded;}}
}
B46ad44:L46ad44:{c.instructions+=3;NFSU2_TR(0x46ad44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46ad46:{NFSU2_TR(0x46ad46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46ad48:{NFSU2_TR(0x46ad48);
if(r1(R+518)){{goto L46ad4f;}}
}
B46ad4a:L46ad4a:{c.instructions+=2;NFSU2_TR(0x46ad4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46ad4d:{NFSU2_TR(0x46ad4d);
{goto L46ad51;}
}
B46ad4f:L46ad4f:{c.instructions+=1;NFSU2_TR(0x46ad4f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B46ad51:L46ad51:{c.instructions+=2;NFSU2_TR(0x46ad51);
__builtin_memmove((R+4),(R+12),4);
}
B46ad53:{NFSU2_TR(0x46ad53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ad58ull));
TAIL_STATIC(0x468e20u,468);
}
B46ad58:L46ad58:{c.instructions+=3;NFSU2_TR(0x46ad58);
__builtin_memmove((R+4),(R+0),4);
}
B46ad5a:{NFSU2_TR(0x46ad5a);
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
B46ad5c:{NFSU2_TR(0x46ad5c);
if(r1(R+518)){{goto L46aded;}}
}
B46ad62:L46ad62:{c.instructions+=1;NFSU2_TR(0x46ad62);
w4(R+8,u32(0x5ull));
}
B46ad67:L46ad67:{c.instructions+=3;NFSU2_TR(0x46ad67);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46ad6a:{NFSU2_TR(0x46ad6a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46ad6c:{NFSU2_TR(0x46ad6c);
if(r1(R+518)){{goto L46add7;}}
}
B46ad6e:L46ad6e:{c.instructions+=2;NFSU2_TR(0x46ad6e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46ad74:{NFSU2_TR(0x46ad74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46add7;}}
}
B46ad76:L46ad76:{c.instructions+=3;NFSU2_TR(0x46ad76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ad7c:{NFSU2_TR(0x46ad7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46ad7e:{NFSU2_TR(0x46ad7e);
if(r1(R+518)){{goto L46add7;}}
}
B46ad80:L46ad80:{c.instructions+=2;NFSU2_TR(0x46ad80);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46ad86:{NFSU2_TR(0x46ad86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46add7;}}
}
B46ad88:L46ad88:{c.instructions+=2;NFSU2_TR(0x46ad88);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46ad8a:{NFSU2_TR(0x46ad8a);
if(r1(R+518)){{goto L46adcd;}}
}
B46ad8c:L46ad8c:{c.instructions+=22;NFSU2_TR(0x46ad8c);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ad8f:{NFSU2_TR(0x46ad8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ad92:{NFSU2_TR(0x46ad92);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ad95:{NFSU2_TR(0x46ad95);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B46ad98:{NFSU2_TR(0x46ad98);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ad9b:{NFSU2_TR(0x46ad9b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ad9d:{NFSU2_TR(0x46ad9d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ada0:{NFSU2_TR(0x46ada0);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ada3:{NFSU2_TR(0x46ada3);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B46ada5:{NFSU2_TR(0x46ada5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46ada7:{NFSU2_TR(0x46ada7);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B46ada9:{NFSU2_TR(0x46ada9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B46adab:{NFSU2_TR(0x46adab);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46adad:{NFSU2_TR(0x46adad);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B46adaf:{NFSU2_TR(0x46adaf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B46adb1:{NFSU2_TR(0x46adb1);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46adb7:{NFSU2_TR(0x46adb7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46adb9:{NFSU2_TR(0x46adb9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46adbb:{NFSU2_TR(0x46adbb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46adbd:{NFSU2_TR(0x46adbd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46adc0:{NFSU2_TR(0x46adc0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46adc2:{NFSU2_TR(0x46adc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46add7;}}
}
B46adc4:L46adc4:{c.instructions+=7;NFSU2_TR(0x46adc4);
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
B46adc6:{NFSU2_TR(0x46adc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46adc7:{NFSU2_TR(0x46adc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46adc8:{NFSU2_TR(0x46adc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46adc9:{NFSU2_TR(0x46adc9);
__builtin_memmove((R+16),(R+20),4);
}
B46adcb:{NFSU2_TR(0x46adcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46adcc:{NFSU2_TR(0x46adcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46adcd:L46adcd:{c.instructions+=3;NFSU2_TR(0x46adcd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x133ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46add3:{NFSU2_TR(0x46add3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46add5:{NFSU2_TR(0x46add5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46adc4u);}goto L46adc4;}}
}
B46add7:L46add7:{c.instructions+=3;NFSU2_TR(0x46add7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46adda:{NFSU2_TR(0x46adda);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46addc:{NFSU2_TR(0x46addc);
if(r1(R+518)){{goto L46ade3;}}
}
B46adde:L46adde:{c.instructions+=2;NFSU2_TR(0x46adde);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
}
B46ade1:{NFSU2_TR(0x46ade1);
{goto L46ade5;}
}
B46ade3:L46ade3:{c.instructions+=1;NFSU2_TR(0x46ade3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B46ade5:L46ade5:{c.instructions+=2;NFSU2_TR(0x46ade5);
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
B46ade7:{NFSU2_TR(0x46ade7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46ad67u);}goto L46ad67;}}
}
B46aded:L46aded:{c.instructions+=7;NFSU2_TR(0x46aded);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46adee:{NFSU2_TR(0x46adee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46adef:{NFSU2_TR(0x46adef);
w1(R+0,u8(0x1ull));
}
B46adf1:{NFSU2_TR(0x46adf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46adf2:{NFSU2_TR(0x46adf2);
__builtin_memmove((R+16),(R+20),4);
}
B46adf4:{NFSU2_TR(0x46adf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46adf5:{NFSU2_TR(0x46adf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46ae00:L46ae00:{c.instructions+=9;NFSU2_TR(0x46ae00);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ae06:{NFSU2_TR(0x46ae06);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ae08:{NFSU2_TR(0x46ae08);
u8 U[4];
w4(U+0,u32(0x77253bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ae0d:{NFSU2_TR(0x46ae0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ae0e:{NFSU2_TR(0x46ae0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ae15:{NFSU2_TR(0x46ae15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B46ae18:{NFSU2_TR(0x46ae18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ae19:{NFSU2_TR(0x46ae19);
__builtin_memmove((R+24),(R+4),4);
}
B46ae1b:{NFSU2_TR(0x46ae1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ae20ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46a540u);}goto L46a540;}
}
B46ae20:L46ae20:{c.instructions+=2;NFSU2_TR(0x46ae20);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B46ae27:{NFSU2_TR(0x46ae27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46af0b;}}
}
B46ae2d:L46ae2d:{c.instructions+=6;NFSU2_TR(0x46ae2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ae33:{NFSU2_TR(0x46ae33);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x505ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B46ae39:{NFSU2_TR(0x46ae39);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ae3a:{NFSU2_TR(0x46ae3a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B46ae3c:{NFSU2_TR(0x46ae3c);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B46ae3e:{NFSU2_TR(0x46ae3e);
if(r1(R+518)){{goto L46af0a;}}
}
B46ae44:L46ae44:{c.instructions+=2;NFSU2_TR(0x46ae44);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B46ae4a:{NFSU2_TR(0x46ae4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46af0a;}}
}
B46ae50:L46ae50:{c.instructions+=6;NFSU2_TR(0x46ae50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ae51:{NFSU2_TR(0x46ae51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ae52:{NFSU2_TR(0x46ae52);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46ae59:{NFSU2_TR(0x46ae59);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((R+20),(U+0),4);
}
B46ae5f:{NFSU2_TR(0x46ae5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46ae67:{NFSU2_TR(0x46ae67);
{goto L46ae70;}
}
B46ae70:L46ae70:{c.instructions+=3;NFSU2_TR(0x46ae70);
s4(0x7ec844,u32(0x78a7e0ull));
}
B46ae7a:{NFSU2_TR(0x46ae7a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B46ae7d:{NFSU2_TR(0x46ae7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46aef6;}}
}
B46ae7f:L46ae7f:{c.instructions+=2;NFSU2_TR(0x46ae7f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ae81:{NFSU2_TR(0x46ae81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ae86ull));
TAIL_STATIC(0x457e20u,457);
}
B46ae86:L46ae86:{c.instructions+=6;NFSU2_TR(0x46ae86);
__builtin_memmove((R+24),(R+0),4);
}
B46ae88:{NFSU2_TR(0x46ae88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46ae8b:{NFSU2_TR(0x46ae8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ae8f:{NFSU2_TR(0x46ae8f);
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
B46ae91:{NFSU2_TR(0x46ae91);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ae95:{NFSU2_TR(0x46ae95);
if(r1(R+518)){{goto L46aee9;}}
}
B46ae97:L46ae97:{c.instructions+=12;NFSU2_TR(0x46ae97);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46ae9a:{NFSU2_TR(0x46ae9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ae9b:{NFSU2_TR(0x46ae9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ae9c:{NFSU2_TR(0x46ae9c);
u8 U[4];
w4(U+0,u32(0x82c6b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46aea1:{NFSU2_TR(0x46aea1);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+28)),r4(U+0));
}
B46aea7:{NFSU2_TR(0x46aea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46aeaa:{NFSU2_TR(0x46aeaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46aead:{NFSU2_TR(0x46aead);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46aeb0:{NFSU2_TR(0x46aeb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46aeb7:{NFSU2_TR(0x46aeb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46aeba:{NFSU2_TR(0x46aeba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46aebd:{NFSU2_TR(0x46aebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46aec2ull));
TAIL_STATIC(0x7358c0u,735);
}
B46aec2:L46aec2:{c.instructions+=3;NFSU2_TR(0x46aec2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46aec5:{NFSU2_TR(0x46aec5);
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
B46aec7:{NFSU2_TR(0x46aec7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46aeeb;}}
}
B46aec9:L46aec9:{c.instructions+=3;NFSU2_TR(0x46aec9);
u8 U[4];
w4(U+0,u32(0x7edd58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46aece:{NFSU2_TR(0x46aece);
w4(R+4,u32(0x82c6b4ull));
}
B46aed3:{NFSU2_TR(0x46aed3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46aed8ull));
TAIL_STATIC(0x735840u,735);
}
B46aed8:L46aed8:{c.instructions+=4;NFSU2_TR(0x46aed8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46aed9:{NFSU2_TR(0x46aed9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46aeda:{NFSU2_TR(0x46aeda);
u8 U[4];
w4(U+0,u32(0x82c6b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46aedf:{NFSU2_TR(0x46aedf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46aee4ull));
TAIL_STATIC(0x7358c0u,735);
}
B46aee4:L46aee4:{c.instructions+=2;NFSU2_TR(0x46aee4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B46aee7:{NFSU2_TR(0x46aee7);
{goto L46aeeb;}
}
B46aee9:L46aee9:{c.instructions+=1;NFSU2_TR(0x46aee9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B46aeeb:L46aeeb:{c.instructions+=2;NFSU2_TR(0x46aeeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B46aef3:{NFSU2_TR(0x46aef3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+20)),r4(U+0));
}
B46aef6:L46aef6:{c.instructions+=5;NFSU2_TR(0x46aef6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46aefa:{NFSU2_TR(0x46aefa);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B46aefd:{NFSU2_TR(0x46aefd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B46aefe:{NFSU2_TR(0x46aefe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46af02:{NFSU2_TR(0x46af02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46ae70u);}goto L46ae70;}}
}
B46af08:L46af08:{c.instructions+=2;NFSU2_TR(0x46af08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46af09:{NFSU2_TR(0x46af09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46af0a:L46af0a:{c.instructions+=1;NFSU2_TR(0x46af0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46af0b:L46af0b:{c.instructions+=5;NFSU2_TR(0x46af0b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46af0f:{NFSU2_TR(0x46af0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46af10:{NFSU2_TR(0x46af10);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46af17:{NFSU2_TR(0x46af17);
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
B46af1a:{NFSU2_TR(0x46af1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46af20:L46af20:{c.instructions+=8;NFSU2_TR(0x46af20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46af21:{NFSU2_TR(0x46af21);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B46af23:{NFSU2_TR(0x46af23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46af26:{NFSU2_TR(0x46af26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B46af28:{NFSU2_TR(0x46af28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46af2b:{NFSU2_TR(0x46af2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46af2e:{NFSU2_TR(0x46af2e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B46af30:{NFSU2_TR(0x46af30);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B46af33:L46af33:{c.instructions+=9;NFSU2_TR(0x46af33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46af36:{NFSU2_TR(0x46af36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B46af38:{NFSU2_TR(0x46af38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46af3b:{NFSU2_TR(0x46af3b);
u8 U[13];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B46af3f:{NFSU2_TR(0x46af3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46af42:{NFSU2_TR(0x46af42);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B46af43:{NFSU2_TR(0x46af43);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B46af46:{NFSU2_TR(0x46af46);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46af49:{NFSU2_TR(0x46af49);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46af33u);}goto L46af33;}}
}
B46af4b:L46af4b:{c.instructions+=9;NFSU2_TR(0x46af4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46af4f:{NFSU2_TR(0x46af4f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46af53:{NFSU2_TR(0x46af53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46af54:{NFSU2_TR(0x46af54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46af55:{NFSU2_TR(0x46af55);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46af59:{NFSU2_TR(0x46af59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46af5a:{NFSU2_TR(0x46af5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46af5b:{NFSU2_TR(0x46af5b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46af5e:{NFSU2_TR(0x46af5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46af63ull));
TAIL_STATIC(0x4598f0u,459);
}
B46af63:L46af63:{c.instructions+=4;NFSU2_TR(0x46af63);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46af67:{NFSU2_TR(0x46af67);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46af6a:{NFSU2_TR(0x46af6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46af6b:{NFSU2_TR(0x46af6b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46af70:L46af70:{c.instructions+=5;NFSU2_TR(0x46af70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46af71:{NFSU2_TR(0x46af71);
__builtin_memmove((R+24),(R+4),4);
}
B46af73:{NFSU2_TR(0x46af73);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B46af76:{NFSU2_TR(0x46af76);
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
B46af78:{NFSU2_TR(0x46af78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x46b0d6u,46b);}
}
B46af7e:L46af7e:{c.instructions+=3;NFSU2_TR(0x46af7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46af81:{NFSU2_TR(0x46af81);
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
B46af83:{NFSU2_TR(0x46af83);
if(r1(R+518)){TAIL_STATIC(0x46b0d6u,46b);}
}
B46af89:L46af89:{c.instructions+=11;NFSU2_TR(0x46af89);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46af8d:{NFSU2_TR(0x46af8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46af90:{NFSU2_TR(0x46af90);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46af92:{NFSU2_TR(0x46af92);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46af96:{NFSU2_TR(0x46af96);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46af9a:{NFSU2_TR(0x46af9a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46af9e:{NFSU2_TR(0x46af9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B46afa0:{NFSU2_TR(0x46afa0);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46afa4:{NFSU2_TR(0x46afa4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46afa6:{NFSU2_TR(0x46afa6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46afa9:{NFSU2_TR(0x46afa9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46afe7;}}
}
B46afab:L46afab:{c.instructions+=5;NFSU2_TR(0x46afab);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B46afaf:{NFSU2_TR(0x46afaf);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B46afb0:{NFSU2_TR(0x46afb0);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B46afb2:{NFSU2_TR(0x46afb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46afb5:{NFSU2_TR(0x46afb5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46afdf;}}
}
B46afb7:L46afb7:{c.instructions+=8;NFSU2_TR(0x46afb7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46afbb:{NFSU2_TR(0x46afbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B46afbe:{NFSU2_TR(0x46afbe);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46afc2:{NFSU2_TR(0x46afc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46afc5:{NFSU2_TR(0x46afc5);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46afc7:{NFSU2_TR(0x46afc7);
u8 U[13];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B46afcb:{NFSU2_TR(0x46afcb);
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
B46afcd:{NFSU2_TR(0x46afcd);
if(r1(R+518)){TAIL_STATIC(0x46b0d6u,46b);}
}
B46afd3:L46afd3:{c.instructions+=4;NFSU2_TR(0x46afd3);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B46afd7:{NFSU2_TR(0x46afd7);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B46afdb:{NFSU2_TR(0x46afdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46afdc:{NFSU2_TR(0x46afdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46afdf:L46afdf:{c.instructions+=3;NFSU2_TR(0x46afdf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46afe3:{NFSU2_TR(0x46afe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46afe4:{NFSU2_TR(0x46afe4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46afe7:L46afe7:{c.instructions+=4;NFSU2_TR(0x46afe7);
u8 U[16];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B46afeb:{NFSU2_TR(0x46afeb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B46afec:{NFSU2_TR(0x46afec);
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
B46afef:{NFSU2_TR(0x46afef);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x46b0bdu,46b);}
}
B46aff5:L46aff5:{c.instructions+=1;NFSU2_TR(0x46aff5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x46b0dcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46affc:L46affc:{c.instructions+=1;NFSU2_TR(0x46affc);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x46b000u,46b);
}
XIT:NFSU2_TR_EXIT(0x46a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
