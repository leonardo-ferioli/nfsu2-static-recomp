#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_594(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5a9(u8* __restrict R,Cpu& c);
u32 body_5aa(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5b0(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5af,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5af,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5af(u8* __restrict R,Cpu& c);
u32 page_5af(Cpu& c){return body_5af(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5af(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5af000:goto L5af000;
case 0x5af003:c.instructions+=16;goto B5af003;
case 0x5af005:c.instructions+=15;goto B5af005;
case 0x5af008:c.instructions+=14;goto B5af008;
case 0x5af00b:c.instructions+=13;goto B5af00b;
case 0x5af00e:c.instructions+=12;goto B5af00e;
case 0x5af010:c.instructions+=11;goto B5af010;
case 0x5af015:c.instructions+=10;goto B5af015;
case 0x5af018:c.instructions+=9;goto B5af018;
case 0x5af01e:c.instructions+=8;goto B5af01e;
case 0x5af020:c.instructions+=7;goto B5af020;
case 0x5af022:c.instructions+=6;goto B5af022;
case 0x5af028:c.instructions+=5;goto B5af028;
case 0x5af029:c.instructions+=4;goto B5af029;
case 0x5af02a:c.instructions+=3;goto B5af02a;
case 0x5af030:c.instructions+=2;goto B5af030;
case 0x5af034:c.instructions+=1;goto B5af034;
case 0x5af039:goto L5af039;
case 0x5af03f:c.instructions+=6;goto B5af03f;
case 0x5af044:c.instructions+=5;goto B5af044;
case 0x5af045:c.instructions+=4;goto B5af045;
case 0x5af047:c.instructions+=3;goto B5af047;
case 0x5af04f:c.instructions+=2;goto B5af04f;
case 0x5af054:c.instructions+=1;goto B5af054;
case 0x5af059:goto L5af059;
case 0x5af05d:c.instructions+=4;goto B5af05d;
case 0x5af05e:c.instructions+=3;goto B5af05e;
case 0x5af065:c.instructions+=2;goto B5af065;
case 0x5af068:c.instructions+=1;goto B5af068;
case 0x5af070:goto L5af070;
case 0x5af071:c.instructions+=2;goto B5af071;
case 0x5af073:c.instructions+=1;goto B5af073;
case 0x5af078:goto L5af078;
case 0x5af07d:c.instructions+=1;goto B5af07d;
case 0x5af07f:goto L5af07f;
case 0x5af080:c.instructions+=1;goto B5af080;
case 0x5af085:goto L5af085;
case 0x5af088:goto L5af088;
case 0x5af08a:c.instructions+=2;goto B5af08a;
case 0x5af08b:c.instructions+=1;goto B5af08b;
case 0x5af090:goto L5af090;
case 0x5af094:c.instructions+=4;goto B5af094;
case 0x5af095:c.instructions+=3;goto B5af095;
case 0x5af096:c.instructions+=2;goto B5af096;
case 0x5af098:c.instructions+=1;goto B5af098;
case 0x5af09d:goto L5af09d;
case 0x5af09f:c.instructions+=2;goto B5af09f;
case 0x5af0a1:c.instructions+=1;goto B5af0a1;
case 0x5af0a3:goto L5af0a3;
case 0x5af0a4:c.instructions+=3;goto B5af0a4;
case 0x5af0a8:c.instructions+=2;goto B5af0a8;
case 0x5af0a9:c.instructions+=1;goto B5af0a9;
case 0x5af0b0:goto L5af0b0;
case 0x5af0b3:c.instructions+=2;goto B5af0b3;
case 0x5af0b5:c.instructions+=1;goto B5af0b5;
case 0x5af0b7:goto L5af0b7;
case 0x5af0ba:c.instructions+=1;goto B5af0ba;
case 0x5af0bc:goto L5af0bc;
case 0x5af0bf:c.instructions+=6;goto B5af0bf;
case 0x5af0c1:c.instructions+=5;goto B5af0c1;
case 0x5af0c4:c.instructions+=4;goto B5af0c4;
case 0x5af0c9:c.instructions+=3;goto B5af0c9;
case 0x5af0ca:c.instructions+=2;goto B5af0ca;
case 0x5af0cb:c.instructions+=1;goto B5af0cb;
case 0x5af0d0:goto L5af0d0;
case 0x5af0d3:goto L5af0d3;
case 0x5af0d5:c.instructions+=2;goto B5af0d5;
case 0x5af0d7:c.instructions+=1;goto B5af0d7;
case 0x5af0d9:goto L5af0d9;
case 0x5af0da:c.instructions+=1;goto B5af0da;
case 0x5af0db:goto L5af0db;
case 0x5af0dc:c.instructions+=2;goto B5af0dc;
case 0x5af0dd:c.instructions+=1;goto B5af0dd;
case 0x5af0e0:goto L5af0e0;
case 0x5af0e1:c.instructions+=13;goto B5af0e1;
case 0x5af0e3:c.instructions+=12;goto B5af0e3;
case 0x5af0e6:c.instructions+=11;goto B5af0e6;
case 0x5af0ec:c.instructions+=10;goto B5af0ec;
case 0x5af0ed:c.instructions+=9;goto B5af0ed;
case 0x5af0ee:c.instructions+=8;goto B5af0ee;
case 0x5af0ef:c.instructions+=7;goto B5af0ef;
case 0x5af0f1:c.instructions+=6;goto B5af0f1;
case 0x5af0f5:c.instructions+=5;goto B5af0f5;
case 0x5af0f6:c.instructions+=4;goto B5af0f6;
case 0x5af0fd:c.instructions+=3;goto B5af0fd;
case 0x5af0fe:c.instructions+=2;goto B5af0fe;
case 0x5af100:c.instructions+=1;goto B5af100;
case 0x5af105:goto L5af105;
case 0x5af108:c.instructions+=3;goto B5af108;
case 0x5af10e:c.instructions+=2;goto B5af10e;
case 0x5af110:c.instructions+=1;goto B5af110;
case 0x5af112:goto L5af112;
case 0x5af119:c.instructions+=3;goto B5af119;
case 0x5af11a:c.instructions+=2;goto B5af11a;
case 0x5af11c:c.instructions+=1;goto B5af11c;
case 0x5af121:goto L5af121;
case 0x5af124:c.instructions+=4;goto B5af124;
case 0x5af12a:c.instructions+=3;goto B5af12a;
case 0x5af12c:c.instructions+=2;goto B5af12c;
case 0x5af133:c.instructions+=1;goto B5af133;
case 0x5af136:goto L5af136;
case 0x5af139:c.instructions+=12;goto B5af139;
case 0x5af13c:c.instructions+=11;goto B5af13c;
case 0x5af143:c.instructions+=10;goto B5af143;
case 0x5af146:c.instructions+=9;goto B5af146;
case 0x5af14d:c.instructions+=8;goto B5af14d;
case 0x5af154:c.instructions+=7;goto B5af154;
case 0x5af156:c.instructions+=6;goto B5af156;
case 0x5af15a:c.instructions+=5;goto B5af15a;
case 0x5af15c:c.instructions+=4;goto B5af15c;
case 0x5af160:c.instructions+=3;goto B5af160;
case 0x5af164:c.instructions+=2;goto B5af164;
case 0x5af166:c.instructions+=1;goto B5af166;
case 0x5af169:goto L5af169;
case 0x5af16c:c.instructions+=9;goto B5af16c;
case 0x5af173:c.instructions+=8;goto B5af173;
case 0x5af176:c.instructions+=7;goto B5af176;
case 0x5af17d:c.instructions+=6;goto B5af17d;
case 0x5af184:c.instructions+=5;goto B5af184;
case 0x5af186:c.instructions+=4;goto B5af186;
case 0x5af18a:c.instructions+=3;goto B5af18a;
case 0x5af18c:c.instructions+=2;goto B5af18c;
case 0x5af190:c.instructions+=1;goto B5af190;
case 0x5af194:goto L5af194;
case 0x5af197:c.instructions+=6;goto B5af197;
case 0x5af199:c.instructions+=5;goto B5af199;
case 0x5af1a0:c.instructions+=4;goto B5af1a0;
case 0x5af1a1:c.instructions+=3;goto B5af1a1;
case 0x5af1a8:c.instructions+=2;goto B5af1a8;
case 0x5af1a9:c.instructions+=1;goto B5af1a9;
case 0x5af1ac:goto L5af1ac;
case 0x5af1af:c.instructions+=6;goto B5af1af;
case 0x5af1b1:c.instructions+=5;goto B5af1b1;
case 0x5af1b8:c.instructions+=4;goto B5af1b8;
case 0x5af1b9:c.instructions+=3;goto B5af1b9;
case 0x5af1c0:c.instructions+=2;goto B5af1c0;
case 0x5af1c1:c.instructions+=1;goto B5af1c1;
case 0x5af1c4:goto L5af1c4;
case 0x5af1c8:c.instructions+=6;goto B5af1c8;
case 0x5af1c9:c.instructions+=5;goto B5af1c9;
case 0x5af1d0:c.instructions+=4;goto B5af1d0;
case 0x5af1d1:c.instructions+=3;goto B5af1d1;
case 0x5af1d8:c.instructions+=2;goto B5af1d8;
case 0x5af1d9:c.instructions+=1;goto B5af1d9;
case 0x5af1de:goto L5af1de;
case 0x5af1e5:c.instructions+=18;goto B5af1e5;
case 0x5af1ec:c.instructions+=17;goto B5af1ec;
case 0x5af1f0:c.instructions+=16;goto B5af1f0;
case 0x5af1f7:c.instructions+=15;goto B5af1f7;
case 0x5af1f8:c.instructions+=14;goto B5af1f8;
case 0x5af1ff:c.instructions+=13;goto B5af1ff;
case 0x5af206:c.instructions+=12;goto B5af206;
case 0x5af20d:c.instructions+=11;goto B5af20d;
case 0x5af20e:c.instructions+=10;goto B5af20e;
case 0x5af215:c.instructions+=9;goto B5af215;
case 0x5af21c:c.instructions+=8;goto B5af21c;
case 0x5af223:c.instructions+=7;goto B5af223;
case 0x5af225:c.instructions+=6;goto B5af225;
case 0x5af22c:c.instructions+=5;goto B5af22c;
case 0x5af233:c.instructions+=4;goto B5af233;
case 0x5af23a:c.instructions+=3;goto B5af23a;
case 0x5af23b:c.instructions+=2;goto B5af23b;
case 0x5af242:c.instructions+=1;goto B5af242;
case 0x5af247:goto L5af247;
case 0x5af24e:c.instructions+=36;goto B5af24e;
case 0x5af255:c.instructions+=35;goto B5af255;
case 0x5af258:c.instructions+=34;goto B5af258;
case 0x5af25f:c.instructions+=33;goto B5af25f;
case 0x5af263:c.instructions+=32;goto B5af263;
case 0x5af26a:c.instructions+=31;goto B5af26a;
case 0x5af271:c.instructions+=30;goto B5af271;
case 0x5af278:c.instructions+=29;goto B5af278;
case 0x5af27f:c.instructions+=28;goto B5af27f;
case 0x5af281:c.instructions+=27;goto B5af281;
case 0x5af288:c.instructions+=26;goto B5af288;
case 0x5af28f:c.instructions+=25;goto B5af28f;
case 0x5af296:c.instructions+=24;goto B5af296;
case 0x5af29d:c.instructions+=23;goto B5af29d;
case 0x5af2a4:c.instructions+=22;goto B5af2a4;
case 0x5af2a6:c.instructions+=21;goto B5af2a6;
case 0x5af2ad:c.instructions+=20;goto B5af2ad;
case 0x5af2b4:c.instructions+=19;goto B5af2b4;
case 0x5af2bb:c.instructions+=18;goto B5af2bb;
case 0x5af2c2:c.instructions+=17;goto B5af2c2;
case 0x5af2c9:c.instructions+=16;goto B5af2c9;
case 0x5af2cd:c.instructions+=15;goto B5af2cd;
case 0x5af2d1:c.instructions+=14;goto B5af2d1;
case 0x5af2d8:c.instructions+=13;goto B5af2d8;
case 0x5af2da:c.instructions+=12;goto B5af2da;
case 0x5af2de:c.instructions+=11;goto B5af2de;
case 0x5af2e5:c.instructions+=10;goto B5af2e5;
case 0x5af2e7:c.instructions+=9;goto B5af2e7;
case 0x5af2eb:c.instructions+=8;goto B5af2eb;
case 0x5af2ed:c.instructions+=7;goto B5af2ed;
case 0x5af2f0:c.instructions+=6;goto B5af2f0;
case 0x5af2f1:c.instructions+=5;goto B5af2f1;
case 0x5af2f8:c.instructions+=4;goto B5af2f8;
case 0x5af2f9:c.instructions+=3;goto B5af2f9;
case 0x5af2fd:c.instructions+=2;goto B5af2fd;
case 0x5af2fe:c.instructions+=1;goto B5af2fe;
case 0x5af303:goto L5af303;
case 0x5af307:c.instructions+=5;goto B5af307;
case 0x5af30d:c.instructions+=4;goto B5af30d;
case 0x5af310:c.instructions+=3;goto B5af310;
case 0x5af312:c.instructions+=2;goto B5af312;
case 0x5af315:c.instructions+=1;goto B5af315;
case 0x5af31b:goto L5af31b;
case 0x5af31e:c.instructions+=5;goto B5af31e;
case 0x5af321:c.instructions+=4;goto B5af321;
case 0x5af323:c.instructions+=3;goto B5af323;
case 0x5af324:c.instructions+=2;goto B5af324;
case 0x5af326:c.instructions+=1;goto B5af326;
case 0x5af329:goto L5af329;
case 0x5af32d:c.instructions+=4;goto B5af32d;
case 0x5af32f:c.instructions+=3;goto B5af32f;
case 0x5af330:c.instructions+=2;goto B5af330;
case 0x5af332:c.instructions+=1;goto B5af332;
case 0x5af335:goto L5af335;
case 0x5af338:c.instructions+=2;goto B5af338;
case 0x5af33a:c.instructions+=1;goto B5af33a;
case 0x5af33c:goto L5af33c;
case 0x5af340:c.instructions+=1;goto B5af340;
case 0x5af342:goto L5af342;
case 0x5af346:c.instructions+=3;goto B5af346;
case 0x5af348:c.instructions+=2;goto B5af348;
case 0x5af34c:c.instructions+=1;goto B5af34c;
case 0x5af34e:goto L5af34e;
case 0x5af351:c.instructions+=2;goto B5af351;
case 0x5af353:c.instructions+=1;goto B5af353;
case 0x5af355:goto L5af355;
case 0x5af357:c.instructions+=1;goto B5af357;
case 0x5af359:goto L5af359;
case 0x5af35d:c.instructions+=4;goto B5af35d;
case 0x5af35f:c.instructions+=3;goto B5af35f;
case 0x5af361:c.instructions+=2;goto B5af361;
case 0x5af364:c.instructions+=1;goto B5af364;
case 0x5af366:goto L5af366;
case 0x5af368:c.instructions+=1;goto B5af368;
case 0x5af36c:goto L5af36c;
case 0x5af370:goto L5af370;
case 0x5af373:c.instructions+=2;goto B5af373;
case 0x5af375:c.instructions+=1;goto B5af375;
case 0x5af378:goto L5af378;
case 0x5af37c:c.instructions+=3;goto B5af37c;
case 0x5af37f:c.instructions+=2;goto B5af37f;
case 0x5af381:c.instructions+=1;goto B5af381;
case 0x5af384:goto L5af384;
case 0x5af388:c.instructions+=8;goto B5af388;
case 0x5af38c:c.instructions+=7;goto B5af38c;
case 0x5af38f:c.instructions+=6;goto B5af38f;
case 0x5af395:c.instructions+=5;goto B5af395;
case 0x5af397:c.instructions+=4;goto B5af397;
case 0x5af39b:c.instructions+=3;goto B5af39b;
case 0x5af39d:c.instructions+=2;goto B5af39d;
case 0x5af3a4:c.instructions+=1;goto B5af3a4;
case 0x5af3a7:goto L5af3a7;
case 0x5af3a9:c.instructions+=7;goto B5af3a9;
case 0x5af3ad:c.instructions+=6;goto B5af3ad;
case 0x5af3ae:c.instructions+=5;goto B5af3ae;
case 0x5af3b2:c.instructions+=4;goto B5af3b2;
case 0x5af3b3:c.instructions+=3;goto B5af3b3;
case 0x5af3ba:c.instructions+=2;goto B5af3ba;
case 0x5af3bb:c.instructions+=1;goto B5af3bb;
case 0x5af3c0:goto L5af3c0;
case 0x5af3c7:c.instructions+=5;goto B5af3c7;
case 0x5af3c8:c.instructions+=4;goto B5af3c8;
case 0x5af3cf:c.instructions+=3;goto B5af3cf;
case 0x5af3d0:c.instructions+=2;goto B5af3d0;
case 0x5af3d1:c.instructions+=1;goto B5af3d1;
case 0x5af3d6:goto L5af3d6;
case 0x5af3da:c.instructions+=6;goto B5af3da;
case 0x5af3db:c.instructions+=5;goto B5af3db;
case 0x5af3e2:c.instructions+=4;goto B5af3e2;
case 0x5af3e3:c.instructions+=3;goto B5af3e3;
case 0x5af3ea:c.instructions+=2;goto B5af3ea;
case 0x5af3eb:c.instructions+=1;goto B5af3eb;
case 0x5af3f0:goto L5af3f0;
case 0x5af3f4:c.instructions+=15;goto B5af3f4;
case 0x5af3f8:c.instructions+=14;goto B5af3f8;
case 0x5af3fb:c.instructions+=13;goto B5af3fb;
case 0x5af402:c.instructions+=12;goto B5af402;
case 0x5af404:c.instructions+=11;goto B5af404;
case 0x5af408:c.instructions+=10;goto B5af408;
case 0x5af40b:c.instructions+=9;goto B5af40b;
case 0x5af40d:c.instructions+=8;goto B5af40d;
case 0x5af414:c.instructions+=7;goto B5af414;
case 0x5af418:c.instructions+=6;goto B5af418;
case 0x5af41a:c.instructions+=5;goto B5af41a;
case 0x5af421:c.instructions+=4;goto B5af421;
case 0x5af425:c.instructions+=3;goto B5af425;
case 0x5af427:c.instructions+=2;goto B5af427;
case 0x5af42b:c.instructions+=1;goto B5af42b;
case 0x5af42e:goto L5af42e;
case 0x5af430:c.instructions+=7;goto B5af430;
case 0x5af434:c.instructions+=6;goto B5af434;
case 0x5af435:c.instructions+=5;goto B5af435;
case 0x5af439:c.instructions+=4;goto B5af439;
case 0x5af43a:c.instructions+=3;goto B5af43a;
case 0x5af441:c.instructions+=2;goto B5af441;
case 0x5af442:c.instructions+=1;goto B5af442;
case 0x5af447:goto L5af447;
case 0x5af44e:c.instructions+=5;goto B5af44e;
case 0x5af44f:c.instructions+=4;goto B5af44f;
case 0x5af456:c.instructions+=3;goto B5af456;
case 0x5af457:c.instructions+=2;goto B5af457;
case 0x5af458:c.instructions+=1;goto B5af458;
case 0x5af45d:goto L5af45d;
case 0x5af461:c.instructions+=6;goto B5af461;
case 0x5af462:c.instructions+=5;goto B5af462;
case 0x5af469:c.instructions+=4;goto B5af469;
case 0x5af46a:c.instructions+=3;goto B5af46a;
case 0x5af471:c.instructions+=2;goto B5af471;
case 0x5af472:c.instructions+=1;goto B5af472;
case 0x5af477:goto L5af477;
case 0x5af47e:c.instructions+=15;goto B5af47e;
case 0x5af482:c.instructions+=14;goto B5af482;
case 0x5af485:c.instructions+=13;goto B5af485;
case 0x5af48c:c.instructions+=12;goto B5af48c;
case 0x5af490:c.instructions+=11;goto B5af490;
case 0x5af492:c.instructions+=10;goto B5af492;
case 0x5af499:c.instructions+=9;goto B5af499;
case 0x5af49d:c.instructions+=8;goto B5af49d;
case 0x5af49f:c.instructions+=7;goto B5af49f;
case 0x5af4a3:c.instructions+=6;goto B5af4a3;
case 0x5af4a7:c.instructions+=5;goto B5af4a7;
case 0x5af4ab:c.instructions+=4;goto B5af4ab;
case 0x5af4af:c.instructions+=3;goto B5af4af;
case 0x5af4b1:c.instructions+=2;goto B5af4b1;
case 0x5af4b4:c.instructions+=1;goto B5af4b4;
case 0x5af4b6:goto L5af4b6;
case 0x5af4ba:c.instructions+=1;goto B5af4ba;
case 0x5af4bc:goto L5af4bc;
case 0x5af4c0:goto L5af4c0;
case 0x5af4c6:c.instructions+=7;goto B5af4c6;
case 0x5af4cd:c.instructions+=6;goto B5af4cd;
case 0x5af4d1:c.instructions+=5;goto B5af4d1;
case 0x5af4d5:c.instructions+=4;goto B5af4d5;
case 0x5af4d7:c.instructions+=3;goto B5af4d7;
case 0x5af4d9:c.instructions+=2;goto B5af4d9;
case 0x5af4dc:c.instructions+=1;goto B5af4dc;
case 0x5af4de:goto L5af4de;
case 0x5af4e2:c.instructions+=1;goto B5af4e2;
case 0x5af4e4:goto L5af4e4;
case 0x5af4e6:goto L5af4e6;
case 0x5af4ea:c.instructions+=15;goto B5af4ea;
case 0x5af4ed:c.instructions+=14;goto B5af4ed;
case 0x5af4f1:c.instructions+=13;goto B5af4f1;
case 0x5af4f5:c.instructions+=12;goto B5af4f5;
case 0x5af4f6:c.instructions+=11;goto B5af4f6;
case 0x5af4fa:c.instructions+=10;goto B5af4fa;
case 0x5af4fe:c.instructions+=9;goto B5af4fe;
case 0x5af4ff:c.instructions+=8;goto B5af4ff;
case 0x5af503:c.instructions+=7;goto B5af503;
case 0x5af507:c.instructions+=6;goto B5af507;
case 0x5af50b:c.instructions+=5;goto B5af50b;
case 0x5af50f:c.instructions+=4;goto B5af50f;
case 0x5af513:c.instructions+=3;goto B5af513;
case 0x5af517:c.instructions+=2;goto B5af517;
case 0x5af519:c.instructions+=1;goto B5af519;
case 0x5af51c:goto L5af51c;
case 0x5af520:c.instructions+=19;goto B5af520;
case 0x5af524:c.instructions+=18;goto B5af524;
case 0x5af528:c.instructions+=17;goto B5af528;
case 0x5af52a:c.instructions+=16;goto B5af52a;
case 0x5af52b:c.instructions+=15;goto B5af52b;
case 0x5af52f:c.instructions+=14;goto B5af52f;
case 0x5af533:c.instructions+=13;goto B5af533;
case 0x5af535:c.instructions+=12;goto B5af535;
case 0x5af536:c.instructions+=11;goto B5af536;
case 0x5af53a:c.instructions+=10;goto B5af53a;
case 0x5af53c:c.instructions+=9;goto B5af53c;
case 0x5af543:c.instructions+=8;goto B5af543;
case 0x5af54a:c.instructions+=7;goto B5af54a;
case 0x5af54c:c.instructions+=6;goto B5af54c;
case 0x5af550:c.instructions+=5;goto B5af550;
case 0x5af553:c.instructions+=4;goto B5af553;
case 0x5af557:c.instructions+=3;goto B5af557;
case 0x5af55b:c.instructions+=2;goto B5af55b;
case 0x5af55d:c.instructions+=1;goto B5af55d;
case 0x5af560:goto L5af560;
case 0x5af566:c.instructions+=3;goto B5af566;
case 0x5af568:c.instructions+=2;goto B5af568;
case 0x5af56b:c.instructions+=1;goto B5af56b;
case 0x5af571:goto L5af571;
case 0x5af575:c.instructions+=4;goto B5af575;
case 0x5af57b:c.instructions+=3;goto B5af57b;
case 0x5af57d:c.instructions+=2;goto B5af57d;
case 0x5af580:c.instructions+=1;goto B5af580;
case 0x5af586:goto L5af586;
case 0x5af58c:c.instructions+=4;goto B5af58c;
case 0x5af591:c.instructions+=3;goto B5af591;
case 0x5af593:c.instructions+=2;goto B5af593;
case 0x5af596:c.instructions+=1;goto B5af596;
case 0x5af598:goto L5af598;
case 0x5af59a:c.instructions+=1;goto B5af59a;
case 0x5af59c:goto L5af59c;
case 0x5af5a0:c.instructions+=4;goto B5af5a0;
case 0x5af5a6:c.instructions+=3;goto B5af5a6;
case 0x5af5a8:c.instructions+=2;goto B5af5a8;
case 0x5af5ab:c.instructions+=1;goto B5af5ab;
case 0x5af5ad:goto L5af5ad;
case 0x5af5b1:c.instructions+=3;goto B5af5b1;
case 0x5af5b3:c.instructions+=2;goto B5af5b3;
case 0x5af5b7:c.instructions+=1;goto B5af5b7;
case 0x5af5b9:goto L5af5b9;
case 0x5af5bb:goto L5af5bb;
case 0x5af5bf:c.instructions+=3;goto B5af5bf;
case 0x5af5c1:c.instructions+=2;goto B5af5c1;
case 0x5af5c4:c.instructions+=1;goto B5af5c4;
case 0x5af5c6:goto L5af5c6;
case 0x5af5ca:c.instructions+=1;goto B5af5ca;
case 0x5af5cc:goto L5af5cc;
case 0x5af5d0:c.instructions+=2;goto B5af5d0;
case 0x5af5d2:c.instructions+=1;goto B5af5d2;
case 0x5af5d6:goto L5af5d6;
case 0x5af5da:c.instructions+=8;goto B5af5da;
case 0x5af5dd:c.instructions+=7;goto B5af5dd;
case 0x5af5e1:c.instructions+=6;goto B5af5e1;
case 0x5af5e4:c.instructions+=5;goto B5af5e4;
case 0x5af5e5:c.instructions+=4;goto B5af5e5;
case 0x5af5e6:c.instructions+=3;goto B5af5e6;
case 0x5af5e8:c.instructions+=2;goto B5af5e8;
case 0x5af5ec:c.instructions+=1;goto B5af5ec;
case 0x5af5f1:goto L5af5f1;
case 0x5af5f5:c.instructions+=15;goto B5af5f5;
case 0x5af5f9:c.instructions+=14;goto B5af5f9;
case 0x5af5fd:c.instructions+=13;goto B5af5fd;
case 0x5af601:c.instructions+=12;goto B5af601;
case 0x5af603:c.instructions+=11;goto B5af603;
case 0x5af607:c.instructions+=10;goto B5af607;
case 0x5af60b:c.instructions+=9;goto B5af60b;
case 0x5af60d:c.instructions+=8;goto B5af60d;
case 0x5af60f:c.instructions+=7;goto B5af60f;
case 0x5af613:c.instructions+=6;goto B5af613;
case 0x5af617:c.instructions+=5;goto B5af617;
case 0x5af61b:c.instructions+=4;goto B5af61b;
case 0x5af621:c.instructions+=3;goto B5af621;
case 0x5af623:c.instructions+=2;goto B5af623;
case 0x5af626:c.instructions+=1;goto B5af626;
case 0x5af628:goto L5af628;
case 0x5af62e:c.instructions+=1;goto B5af62e;
case 0x5af632:goto L5af632;
case 0x5af636:c.instructions+=4;goto B5af636;
case 0x5af63c:c.instructions+=3;goto B5af63c;
case 0x5af63e:c.instructions+=2;goto B5af63e;
case 0x5af641:c.instructions+=1;goto B5af641;
case 0x5af643:goto L5af643;
case 0x5af649:c.instructions+=12;goto B5af649;
case 0x5af64d:c.instructions+=11;goto B5af64d;
case 0x5af64f:c.instructions+=10;goto B5af64f;
case 0x5af653:c.instructions+=9;goto B5af653;
case 0x5af655:c.instructions+=8;goto B5af655;
case 0x5af659:c.instructions+=7;goto B5af659;
case 0x5af65d:c.instructions+=6;goto B5af65d;
case 0x5af661:c.instructions+=5;goto B5af661;
case 0x5af665:c.instructions+=4;goto B5af665;
case 0x5af66c:c.instructions+=3;goto B5af66c;
case 0x5af670:c.instructions+=2;goto B5af670;
case 0x5af674:c.instructions+=1;goto B5af674;
case 0x5af676:goto L5af676;
case 0x5af678:c.instructions+=3;goto B5af678;
case 0x5af683:c.instructions+=2;goto B5af683;
case 0x5af689:c.instructions+=1;goto B5af689;
case 0x5af68f:goto L5af68f;
case 0x5af693:c.instructions+=13;goto B5af693;
case 0x5af69a:c.instructions+=12;goto B5af69a;
case 0x5af69e:c.instructions+=11;goto B5af69e;
case 0x5af6a1:c.instructions+=10;goto B5af6a1;
case 0x5af6a5:c.instructions+=9;goto B5af6a5;
case 0x5af6a9:c.instructions+=8;goto B5af6a9;
case 0x5af6ad:c.instructions+=7;goto B5af6ad;
case 0x5af6b1:c.instructions+=6;goto B5af6b1;
case 0x5af6b5:c.instructions+=5;goto B5af6b5;
case 0x5af6b9:c.instructions+=4;goto B5af6b9;
case 0x5af6bd:c.instructions+=3;goto B5af6bd;
case 0x5af6c3:c.instructions+=2;goto B5af6c3;
case 0x5af6c7:c.instructions+=1;goto B5af6c7;
case 0x5af6c9:goto L5af6c9;
case 0x5af6cc:c.instructions+=6;goto B5af6cc;
case 0x5af6cf:c.instructions+=5;goto B5af6cf;
case 0x5af6d1:c.instructions+=4;goto B5af6d1;
case 0x5af6d7:c.instructions+=3;goto B5af6d7;
case 0x5af6d9:c.instructions+=2;goto B5af6d9;
case 0x5af6dc:c.instructions+=1;goto B5af6dc;
case 0x5af6de:goto L5af6de;
case 0x5af6e4:c.instructions+=2;goto B5af6e4;
case 0x5af6e8:c.instructions+=1;goto B5af6e8;
case 0x5af6ea:goto L5af6ea;
case 0x5af6ed:c.instructions+=6;goto B5af6ed;
case 0x5af6f0:c.instructions+=5;goto B5af6f0;
case 0x5af6f2:c.instructions+=4;goto B5af6f2;
case 0x5af6f8:c.instructions+=3;goto B5af6f8;
case 0x5af6fa:c.instructions+=2;goto B5af6fa;
case 0x5af6fd:c.instructions+=1;goto B5af6fd;
case 0x5af6ff:goto L5af6ff;
case 0x5af705:goto L5af705;
case 0x5af707:c.instructions+=26;goto B5af707;
case 0x5af70b:c.instructions+=25;goto B5af70b;
case 0x5af70f:c.instructions+=24;goto B5af70f;
case 0x5af710:c.instructions+=23;goto B5af710;
case 0x5af717:c.instructions+=22;goto B5af717;
case 0x5af718:c.instructions+=21;goto B5af718;
case 0x5af71f:c.instructions+=20;goto B5af71f;
case 0x5af726:c.instructions+=19;goto B5af726;
case 0x5af72d:c.instructions+=18;goto B5af72d;
case 0x5af731:c.instructions+=17;goto B5af731;
case 0x5af732:c.instructions+=16;goto B5af732;
case 0x5af734:c.instructions+=15;goto B5af734;
case 0x5af73b:c.instructions+=14;goto B5af73b;
case 0x5af73f:c.instructions+=13;goto B5af73f;
case 0x5af741:c.instructions+=12;goto B5af741;
case 0x5af748:c.instructions+=11;goto B5af748;
case 0x5af74a:c.instructions+=10;goto B5af74a;
case 0x5af751:c.instructions+=9;goto B5af751;
case 0x5af753:c.instructions+=8;goto B5af753;
case 0x5af75a:c.instructions+=7;goto B5af75a;
case 0x5af761:c.instructions+=6;goto B5af761;
case 0x5af763:c.instructions+=5;goto B5af763;
case 0x5af76a:c.instructions+=4;goto B5af76a;
case 0x5af771:c.instructions+=3;goto B5af771;
case 0x5af773:c.instructions+=2;goto B5af773;
case 0x5af77a:c.instructions+=1;goto B5af77a;
case 0x5af77f:goto L5af77f;
case 0x5af782:c.instructions+=2;goto B5af782;
case 0x5af784:c.instructions+=1;goto B5af784;
case 0x5af78a:goto L5af78a;
case 0x5af78d:c.instructions+=5;goto B5af78d;
case 0x5af790:c.instructions+=4;goto B5af790;
case 0x5af797:c.instructions+=3;goto B5af797;
case 0x5af79a:c.instructions+=2;goto B5af79a;
case 0x5af79c:c.instructions+=1;goto B5af79c;
case 0x5af7a2:goto L5af7a2;
case 0x5af7a8:c.instructions+=2;goto B5af7a8;
case 0x5af7af:c.instructions+=1;goto B5af7af;
case 0x5af7b1:goto L5af7b1;
case 0x5af7b7:c.instructions+=29;goto B5af7b7;
case 0x5af7bd:c.instructions+=28;goto B5af7bd;
case 0x5af7c3:c.instructions+=27;goto B5af7c3;
case 0x5af7ca:c.instructions+=26;goto B5af7ca;
case 0x5af7cc:c.instructions+=25;goto B5af7cc;
case 0x5af7d0:c.instructions+=24;goto B5af7d0;
case 0x5af7d7:c.instructions+=23;goto B5af7d7;
case 0x5af7db:c.instructions+=22;goto B5af7db;
case 0x5af7dd:c.instructions+=21;goto B5af7dd;
case 0x5af7df:c.instructions+=20;goto B5af7df;
case 0x5af7e3:c.instructions+=19;goto B5af7e3;
case 0x5af7e5:c.instructions+=18;goto B5af7e5;
case 0x5af7e9:c.instructions+=17;goto B5af7e9;
case 0x5af7eb:c.instructions+=16;goto B5af7eb;
case 0x5af7ef:c.instructions+=15;goto B5af7ef;
case 0x5af7f6:c.instructions+=14;goto B5af7f6;
case 0x5af7fa:c.instructions+=13;goto B5af7fa;
case 0x5af801:c.instructions+=12;goto B5af801;
case 0x5af805:c.instructions+=11;goto B5af805;
case 0x5af809:c.instructions+=10;goto B5af809;
case 0x5af810:c.instructions+=9;goto B5af810;
case 0x5af814:c.instructions+=8;goto B5af814;
case 0x5af818:c.instructions+=7;goto B5af818;
case 0x5af81a:c.instructions+=6;goto B5af81a;
case 0x5af81e:c.instructions+=5;goto B5af81e;
case 0x5af822:c.instructions+=4;goto B5af822;
case 0x5af824:c.instructions+=3;goto B5af824;
case 0x5af828:c.instructions+=2;goto B5af828;
case 0x5af82a:c.instructions+=1;goto B5af82a;
case 0x5af82c:goto L5af82c;
case 0x5af833:c.instructions+=3;goto B5af833;
case 0x5af836:c.instructions+=2;goto B5af836;
case 0x5af838:c.instructions+=1;goto B5af838;
case 0x5af83e:goto L5af83e;
case 0x5af844:c.instructions+=2;goto B5af844;
case 0x5af84b:c.instructions+=1;goto B5af84b;
case 0x5af84d:goto L5af84d;
case 0x5af853:c.instructions+=29;goto B5af853;
case 0x5af859:c.instructions+=28;goto B5af859;
case 0x5af85f:c.instructions+=27;goto B5af85f;
case 0x5af866:c.instructions+=26;goto B5af866;
case 0x5af868:c.instructions+=25;goto B5af868;
case 0x5af86c:c.instructions+=24;goto B5af86c;
case 0x5af873:c.instructions+=23;goto B5af873;
case 0x5af877:c.instructions+=22;goto B5af877;
case 0x5af879:c.instructions+=21;goto B5af879;
case 0x5af87b:c.instructions+=20;goto B5af87b;
case 0x5af87f:c.instructions+=19;goto B5af87f;
case 0x5af881:c.instructions+=18;goto B5af881;
case 0x5af885:c.instructions+=17;goto B5af885;
case 0x5af887:c.instructions+=16;goto B5af887;
case 0x5af88b:c.instructions+=15;goto B5af88b;
case 0x5af892:c.instructions+=14;goto B5af892;
case 0x5af896:c.instructions+=13;goto B5af896;
case 0x5af89d:c.instructions+=12;goto B5af89d;
case 0x5af8a1:c.instructions+=11;goto B5af8a1;
case 0x5af8a5:c.instructions+=10;goto B5af8a5;
case 0x5af8ac:c.instructions+=9;goto B5af8ac;
case 0x5af8b0:c.instructions+=8;goto B5af8b0;
case 0x5af8b4:c.instructions+=7;goto B5af8b4;
case 0x5af8b6:c.instructions+=6;goto B5af8b6;
case 0x5af8ba:c.instructions+=5;goto B5af8ba;
case 0x5af8be:c.instructions+=4;goto B5af8be;
case 0x5af8c0:c.instructions+=3;goto B5af8c0;
case 0x5af8c4:c.instructions+=2;goto B5af8c4;
case 0x5af8c6:c.instructions+=1;goto B5af8c6;
case 0x5af8c8:goto L5af8c8;
case 0x5af8cb:c.instructions+=4;goto B5af8cb;
case 0x5af8ce:c.instructions+=3;goto B5af8ce;
case 0x5af8d0:c.instructions+=2;goto B5af8d0;
case 0x5af8d2:c.instructions+=1;goto B5af8d2;
case 0x5af8d4:goto L5af8d4;
case 0x5af8d7:c.instructions+=2;goto B5af8d7;
case 0x5af8db:c.instructions+=1;goto B5af8db;
case 0x5af8dd:goto L5af8dd;
case 0x5af8e4:c.instructions+=1;goto B5af8e4;
case 0x5af8e6:goto L5af8e6;
case 0x5af8e8:c.instructions+=1;goto B5af8e8;
case 0x5af8ea:goto L5af8ea;
case 0x5af8ed:c.instructions+=2;goto B5af8ed;
case 0x5af8f1:c.instructions+=1;goto B5af8f1;
case 0x5af8f3:goto L5af8f3;
case 0x5af8f6:c.instructions+=1;goto B5af8f6;
case 0x5af8f8:goto L5af8f8;
case 0x5af8fe:c.instructions+=2;goto B5af8fe;
case 0x5af900:c.instructions+=1;goto B5af900;
case 0x5af902:goto L5af902;
case 0x5af904:goto L5af904;
case 0x5af906:c.instructions+=1;goto B5af906;
case 0x5af908:goto L5af908;
case 0x5af90f:c.instructions+=6;goto B5af90f;
case 0x5af915:c.instructions+=5;goto B5af915;
case 0x5af91b:c.instructions+=4;goto B5af91b;
case 0x5af91d:c.instructions+=3;goto B5af91d;
case 0x5af91f:c.instructions+=2;goto B5af91f;
case 0x5af922:c.instructions+=1;goto B5af922;
case 0x5af924:goto L5af924;
case 0x5af926:c.instructions+=2;goto B5af926;
case 0x5af931:c.instructions+=1;goto B5af931;
case 0x5af933:goto L5af933;
case 0x5af93a:c.instructions+=1;goto B5af93a;
case 0x5af93c:goto L5af93c;
case 0x5af93e:c.instructions+=1;goto B5af93e;
case 0x5af940:goto L5af940;
case 0x5af947:c.instructions+=6;goto B5af947;
case 0x5af94d:c.instructions+=5;goto B5af94d;
case 0x5af953:c.instructions+=4;goto B5af953;
case 0x5af955:c.instructions+=3;goto B5af955;
case 0x5af957:c.instructions+=2;goto B5af957;
case 0x5af95a:c.instructions+=1;goto B5af95a;
case 0x5af95c:goto L5af95c;
case 0x5af95e:c.instructions+=2;goto B5af95e;
case 0x5af969:c.instructions+=1;goto B5af969;
case 0x5af96b:goto L5af96b;
case 0x5af972:goto L5af972;
case 0x5af974:c.instructions+=5;goto B5af974;
case 0x5af978:c.instructions+=4;goto B5af978;
case 0x5af979:c.instructions+=3;goto B5af979;
case 0x5af980:c.instructions+=2;goto B5af980;
case 0x5af981:c.instructions+=1;goto B5af981;
case 0x5af984:goto L5af984;
case 0x5af987:c.instructions+=6;goto B5af987;
case 0x5af989:c.instructions+=5;goto B5af989;
case 0x5af98d:c.instructions+=4;goto B5af98d;
case 0x5af98e:c.instructions+=3;goto B5af98e;
case 0x5af995:c.instructions+=2;goto B5af995;
case 0x5af996:c.instructions+=1;goto B5af996;
case 0x5af999:goto L5af999;
case 0x5af99d:c.instructions+=4;goto B5af99d;
case 0x5af9a3:c.instructions+=3;goto B5af9a3;
case 0x5af9a5:c.instructions+=2;goto B5af9a5;
case 0x5af9a8:c.instructions+=1;goto B5af9a8;
case 0x5af9aa:goto L5af9aa;
case 0x5af9ac:c.instructions+=1;goto B5af9ac;
case 0x5af9b2:goto L5af9b2;
case 0x5af9b3:c.instructions+=5;goto B5af9b3;
case 0x5af9b4:c.instructions+=4;goto B5af9b4;
case 0x5af9b5:c.instructions+=3;goto B5af9b5;
case 0x5af9b7:c.instructions+=2;goto B5af9b7;
case 0x5af9b8:c.instructions+=1;goto B5af9b8;
case 0x5af9b9:goto L5af9b9;
case 0x5af9bb:goto L5af9bb;
case 0x5af9bc:c.instructions+=5;goto B5af9bc;
case 0x5af9bd:c.instructions+=4;goto B5af9bd;
case 0x5af9be:c.instructions+=3;goto B5af9be;
case 0x5af9c0:c.instructions+=2;goto B5af9c0;
case 0x5af9c1:c.instructions+=1;goto B5af9c1;
case 0x5af9d0:goto L5af9d0;
case 0x5af9d2:c.instructions+=54;goto B5af9d2;
case 0x5af9d7:c.instructions+=53;goto B5af9d7;
case 0x5af9dd:c.instructions+=52;goto B5af9dd;
case 0x5af9de:c.instructions+=51;goto B5af9de;
case 0x5af9e5:c.instructions+=50;goto B5af9e5;
case 0x5af9e6:c.instructions+=49;goto B5af9e6;
case 0x5af9e7:c.instructions+=48;goto B5af9e7;
case 0x5af9e8:c.instructions+=47;goto B5af9e8;
case 0x5af9ea:c.instructions+=46;goto B5af9ea;
case 0x5af9eb:c.instructions+=45;goto B5af9eb;
case 0x5af9ef:c.instructions+=44;goto B5af9ef;
case 0x5af9f3:c.instructions+=43;goto B5af9f3;
case 0x5af9f7:c.instructions+=42;goto B5af9f7;
case 0x5af9fb:c.instructions+=41;goto B5af9fb;
case 0x5af9fe:c.instructions+=40;goto B5af9fe;
case 0x5afa02:c.instructions+=39;goto B5afa02;
case 0x5afa05:c.instructions+=38;goto B5afa05;
case 0x5afa0b:c.instructions+=37;goto B5afa0b;
case 0x5afa15:c.instructions+=36;goto B5afa15;
case 0x5afa18:c.instructions+=35;goto B5afa18;
case 0x5afa1a:c.instructions+=34;goto B5afa1a;
case 0x5afa1d:c.instructions+=33;goto B5afa1d;
case 0x5afa20:c.instructions+=32;goto B5afa20;
case 0x5afa23:c.instructions+=31;goto B5afa23;
case 0x5afa26:c.instructions+=30;goto B5afa26;
case 0x5afa29:c.instructions+=29;goto B5afa29;
case 0x5afa2c:c.instructions+=28;goto B5afa2c;
case 0x5afa2f:c.instructions+=27;goto B5afa2f;
case 0x5afa33:c.instructions+=26;goto B5afa33;
case 0x5afa36:c.instructions+=25;goto B5afa36;
case 0x5afa38:c.instructions+=24;goto B5afa38;
case 0x5afa3d:c.instructions+=23;goto B5afa3d;
case 0x5afa40:c.instructions+=22;goto B5afa40;
case 0x5afa43:c.instructions+=21;goto B5afa43;
case 0x5afa46:c.instructions+=20;goto B5afa46;
case 0x5afa49:c.instructions+=19;goto B5afa49;
case 0x5afa50:c.instructions+=18;goto B5afa50;
case 0x5afa53:c.instructions+=17;goto B5afa53;
case 0x5afa56:c.instructions+=16;goto B5afa56;
case 0x5afa59:c.instructions+=15;goto B5afa59;
case 0x5afa5f:c.instructions+=14;goto B5afa5f;
case 0x5afa65:c.instructions+=13;goto B5afa65;
case 0x5afa66:c.instructions+=12;goto B5afa66;
case 0x5afa6c:c.instructions+=11;goto B5afa6c;
case 0x5afa6f:c.instructions+=10;goto B5afa6f;
case 0x5afa72:c.instructions+=9;goto B5afa72;
case 0x5afa75:c.instructions+=8;goto B5afa75;
case 0x5afa78:c.instructions+=7;goto B5afa78;
case 0x5afa7b:c.instructions+=6;goto B5afa7b;
case 0x5afa7e:c.instructions+=5;goto B5afa7e;
case 0x5afa7f:c.instructions+=4;goto B5afa7f;
case 0x5afa80:c.instructions+=3;goto B5afa80;
case 0x5afa81:c.instructions+=2;goto B5afa81;
case 0x5afa85:c.instructions+=1;goto B5afa85;
case 0x5afa8a:goto L5afa8a;
case 0x5afa8d:c.instructions+=2;goto B5afa8d;
case 0x5afa8f:c.instructions+=1;goto B5afa8f;
case 0x5afa94:goto L5afa94;
case 0x5afa97:c.instructions+=23;goto B5afa97;
case 0x5afa9a:c.instructions+=22;goto B5afa9a;
case 0x5afaa0:c.instructions+=21;goto B5afaa0;
case 0x5afaa6:c.instructions+=20;goto B5afaa6;
case 0x5afaa8:c.instructions+=19;goto B5afaa8;
case 0x5afaad:c.instructions+=18;goto B5afaad;
case 0x5afab3:c.instructions+=17;goto B5afab3;
case 0x5afab9:c.instructions+=16;goto B5afab9;
case 0x5afabf:c.instructions+=15;goto B5afabf;
case 0x5afac5:c.instructions+=14;goto B5afac5;
case 0x5afacb:c.instructions+=13;goto B5afacb;
case 0x5afad1:c.instructions+=12;goto B5afad1;
case 0x5afad7:c.instructions+=11;goto B5afad7;
case 0x5afada:c.instructions+=10;goto B5afada;
case 0x5afae0:c.instructions+=9;goto B5afae0;
case 0x5afae6:c.instructions+=8;goto B5afae6;
case 0x5afaec:c.instructions+=7;goto B5afaec;
case 0x5afaf1:c.instructions+=6;goto B5afaf1;
case 0x5afaf7:c.instructions+=5;goto B5afaf7;
case 0x5afaf8:c.instructions+=4;goto B5afaf8;
case 0x5afafe:c.instructions+=3;goto B5afafe;
case 0x5afb04:c.instructions+=2;goto B5afb04;
case 0x5afb07:c.instructions+=1;goto B5afb07;
case 0x5afb0c:goto L5afb0c;
case 0x5afb0f:c.instructions+=8;goto B5afb0f;
case 0x5afb10:c.instructions+=7;goto B5afb10;
case 0x5afb12:c.instructions+=6;goto B5afb12;
case 0x5afb13:c.instructions+=5;goto B5afb13;
case 0x5afb17:c.instructions+=4;goto B5afb17;
case 0x5afb18:c.instructions+=3;goto B5afb18;
case 0x5afb1f:c.instructions+=2;goto B5afb1f;
case 0x5afb22:c.instructions+=1;goto B5afb22;
case 0x5afb30:goto L5afb30;
case 0x5afb31:c.instructions+=2;goto B5afb31;
case 0x5afb33:c.instructions+=1;goto B5afb33;
case 0x5afb38:goto L5afb38;
case 0x5afb3d:c.instructions+=1;goto B5afb3d;
case 0x5afb3f:goto L5afb3f;
case 0x5afb44:c.instructions+=3;goto B5afb44;
case 0x5afb45:c.instructions+=2;goto B5afb45;
case 0x5afb46:c.instructions+=1;goto B5afb46;
case 0x5afb4b:goto L5afb4b;
case 0x5afb4e:goto L5afb4e;
case 0x5afb50:c.instructions+=2;goto B5afb50;
case 0x5afb51:c.instructions+=1;goto B5afb51;
case 0x5afb60:goto L5afb60;
case 0x5afb61:c.instructions+=11;goto B5afb61;
case 0x5afb63:c.instructions+=10;goto B5afb63;
case 0x5afb66:c.instructions+=9;goto B5afb66;
case 0x5afb6c:c.instructions+=8;goto B5afb6c;
case 0x5afb6d:c.instructions+=7;goto B5afb6d;
case 0x5afb70:c.instructions+=6;goto B5afb70;
case 0x5afb76:c.instructions+=5;goto B5afb76;
case 0x5afb77:c.instructions+=4;goto B5afb77;
case 0x5afb7a:c.instructions+=3;goto B5afb7a;
case 0x5afb7b:c.instructions+=2;goto B5afb7b;
case 0x5afb7c:c.instructions+=1;goto B5afb7c;
case 0x5afb81:goto L5afb81;
case 0x5afb84:c.instructions+=6;goto B5afb84;
case 0x5afb87:c.instructions+=5;goto B5afb87;
case 0x5afb8a:c.instructions+=4;goto B5afb8a;
case 0x5afb90:c.instructions+=3;goto B5afb90;
case 0x5afb96:c.instructions+=2;goto B5afb96;
case 0x5afb97:c.instructions+=1;goto B5afb97;
case 0x5afba0:goto L5afba0;
case 0x5afba1:c.instructions+=20;goto B5afba1;
case 0x5afba3:c.instructions+=19;goto B5afba3;
case 0x5afba6:c.instructions+=18;goto B5afba6;
case 0x5afba8:c.instructions+=17;goto B5afba8;
case 0x5afbad:c.instructions+=16;goto B5afbad;
case 0x5afbb3:c.instructions+=15;goto B5afbb3;
case 0x5afbb4:c.instructions+=14;goto B5afbb4;
case 0x5afbbb:c.instructions+=13;goto B5afbbb;
case 0x5afbbe:c.instructions+=12;goto B5afbbe;
case 0x5afbbf:c.instructions+=11;goto B5afbbf;
case 0x5afbc0:c.instructions+=10;goto B5afbc0;
case 0x5afbc2:c.instructions+=9;goto B5afbc2;
case 0x5afbc6:c.instructions+=8;goto B5afbc6;
case 0x5afbca:c.instructions+=7;goto B5afbca;
case 0x5afbcb:c.instructions+=6;goto B5afbcb;
case 0x5afbcf:c.instructions+=5;goto B5afbcf;
case 0x5afbd3:c.instructions+=4;goto B5afbd3;
case 0x5afbd5:c.instructions+=3;goto B5afbd5;
case 0x5afbda:c.instructions+=2;goto B5afbda;
case 0x5afbe1:c.instructions+=1;goto B5afbe1;
case 0x5afbe6:goto L5afbe6;
case 0x5afbe8:c.instructions+=1;goto B5afbe8;
case 0x5afbed:goto L5afbed;
case 0x5afbf0:c.instructions+=7;goto B5afbf0;
case 0x5afbf2:c.instructions+=6;goto B5afbf2;
case 0x5afbf5:c.instructions+=5;goto B5afbf5;
case 0x5afbf6:c.instructions+=4;goto B5afbf6;
case 0x5afbf7:c.instructions+=3;goto B5afbf7;
case 0x5afbfb:c.instructions+=2;goto B5afbfb;
case 0x5afbfc:c.instructions+=1;goto B5afbfc;
case 0x5afc01:goto L5afc01;
case 0x5afc04:c.instructions+=18;goto B5afc04;
case 0x5afc07:c.instructions+=17;goto B5afc07;
case 0x5afc09:c.instructions+=16;goto B5afc09;
case 0x5afc0c:c.instructions+=15;goto B5afc0c;
case 0x5afc0f:c.instructions+=14;goto B5afc0f;
case 0x5afc12:c.instructions+=13;goto B5afc12;
case 0x5afc16:c.instructions+=12;goto B5afc16;
case 0x5afc19:c.instructions+=11;goto B5afc19;
case 0x5afc1c:c.instructions+=10;goto B5afc1c;
case 0x5afc1f:c.instructions+=9;goto B5afc1f;
case 0x5afc21:c.instructions+=8;goto B5afc21;
case 0x5afc25:c.instructions+=7;goto B5afc25;
case 0x5afc27:c.instructions+=6;goto B5afc27;
case 0x5afc2b:c.instructions+=5;goto B5afc2b;
case 0x5afc2e:c.instructions+=4;goto B5afc2e;
case 0x5afc32:c.instructions+=3;goto B5afc32;
case 0x5afc36:c.instructions+=2;goto B5afc36;
case 0x5afc38:c.instructions+=1;goto B5afc38;
case 0x5afc3a:goto L5afc3a;
case 0x5afc3e:c.instructions+=1;goto B5afc3e;
case 0x5afc40:goto L5afc40;
case 0x5afc44:c.instructions+=3;goto B5afc44;
case 0x5afc48:c.instructions+=2;goto B5afc48;
case 0x5afc4a:c.instructions+=1;goto B5afc4a;
case 0x5afc50:goto L5afc50;
case 0x5afc52:c.instructions+=6;goto B5afc52;
case 0x5afc55:c.instructions+=5;goto B5afc55;
case 0x5afc57:c.instructions+=4;goto B5afc57;
case 0x5afc5a:c.instructions+=3;goto B5afc5a;
case 0x5afc5e:c.instructions+=2;goto B5afc5e;
case 0x5afc62:c.instructions+=1;goto B5afc62;
case 0x5afc64:goto L5afc64;
case 0x5afc67:c.instructions+=5;goto B5afc67;
case 0x5afc6a:c.instructions+=4;goto B5afc6a;
case 0x5afc6d:c.instructions+=3;goto B5afc6d;
case 0x5afc6f:c.instructions+=2;goto B5afc6f;
case 0x5afc72:c.instructions+=1;goto B5afc72;
case 0x5afc74:goto L5afc74;
case 0x5afc77:c.instructions+=11;goto B5afc77;
case 0x5afc7b:c.instructions+=10;goto B5afc7b;
case 0x5afc7e:c.instructions+=9;goto B5afc7e;
case 0x5afc82:c.instructions+=8;goto B5afc82;
case 0x5afc86:c.instructions+=7;goto B5afc86;
case 0x5afc89:c.instructions+=6;goto B5afc89;
case 0x5afc8d:c.instructions+=5;goto B5afc8d;
case 0x5afc91:c.instructions+=4;goto B5afc91;
case 0x5afc95:c.instructions+=3;goto B5afc95;
case 0x5afc99:c.instructions+=2;goto B5afc99;
case 0x5afc9d:c.instructions+=1;goto B5afc9d;
case 0x5afc9f:goto L5afc9f;
case 0x5afca3:c.instructions+=3;goto B5afca3;
case 0x5afca7:c.instructions+=2;goto B5afca7;
case 0x5afcab:c.instructions+=1;goto B5afcab;
case 0x5afcaf:goto L5afcaf;
case 0x5afcb3:c.instructions+=12;goto B5afcb3;
case 0x5afcb5:c.instructions+=11;goto B5afcb5;
case 0x5afcb9:c.instructions+=10;goto B5afcb9;
case 0x5afcbb:c.instructions+=9;goto B5afcbb;
case 0x5afcbd:c.instructions+=8;goto B5afcbd;
case 0x5afcbf:c.instructions+=7;goto B5afcbf;
case 0x5afcc3:c.instructions+=6;goto B5afcc3;
case 0x5afcc7:c.instructions+=5;goto B5afcc7;
case 0x5afcc9:c.instructions+=4;goto B5afcc9;
case 0x5afccb:c.instructions+=3;goto B5afccb;
case 0x5afcce:c.instructions+=2;goto B5afcce;
case 0x5afcd0:c.instructions+=1;goto B5afcd0;
case 0x5afcd2:goto L5afcd2;
case 0x5afcd5:c.instructions+=4;goto B5afcd5;
case 0x5afcd9:c.instructions+=3;goto B5afcd9;
case 0x5afcdd:c.instructions+=2;goto B5afcdd;
case 0x5afce0:c.instructions+=1;goto B5afce0;
case 0x5afce2:goto L5afce2;
case 0x5afcea:c.instructions+=1;goto B5afcea;
case 0x5afcef:goto L5afcef;
case 0x5afcf3:c.instructions+=6;goto B5afcf3;
case 0x5afcf6:c.instructions+=5;goto B5afcf6;
case 0x5afcf8:c.instructions+=4;goto B5afcf8;
case 0x5afcfa:c.instructions+=3;goto B5afcfa;
case 0x5afcfe:c.instructions+=2;goto B5afcfe;
case 0x5afd00:c.instructions+=1;goto B5afd00;
case 0x5afd06:goto L5afd06;
case 0x5afd09:c.instructions+=8;goto B5afd09;
case 0x5afd0d:c.instructions+=7;goto B5afd0d;
case 0x5afd10:c.instructions+=6;goto B5afd10;
case 0x5afd13:c.instructions+=5;goto B5afd13;
case 0x5afd16:c.instructions+=4;goto B5afd16;
case 0x5afd18:c.instructions+=3;goto B5afd18;
case 0x5afd1c:c.instructions+=2;goto B5afd1c;
case 0x5afd1f:c.instructions+=1;goto B5afd1f;
case 0x5afd21:goto L5afd21;
case 0x5afd24:c.instructions+=4;goto B5afd24;
case 0x5afd27:c.instructions+=3;goto B5afd27;
case 0x5afd29:c.instructions+=2;goto B5afd29;
case 0x5afd2c:c.instructions+=1;goto B5afd2c;
case 0x5afd2e:goto L5afd2e;
case 0x5afd31:c.instructions+=12;goto B5afd31;
case 0x5afd35:c.instructions+=11;goto B5afd35;
case 0x5afd38:c.instructions+=10;goto B5afd38;
case 0x5afd3c:c.instructions+=9;goto B5afd3c;
case 0x5afd40:c.instructions+=8;goto B5afd40;
case 0x5afd43:c.instructions+=7;goto B5afd43;
case 0x5afd47:c.instructions+=6;goto B5afd47;
case 0x5afd4a:c.instructions+=5;goto B5afd4a;
case 0x5afd4e:c.instructions+=4;goto B5afd4e;
case 0x5afd52:c.instructions+=3;goto B5afd52;
case 0x5afd56:c.instructions+=2;goto B5afd56;
case 0x5afd5a:c.instructions+=1;goto B5afd5a;
case 0x5afd5c:goto L5afd5c;
case 0x5afd60:c.instructions+=4;goto B5afd60;
case 0x5afd63:c.instructions+=3;goto B5afd63;
case 0x5afd67:c.instructions+=2;goto B5afd67;
case 0x5afd6b:c.instructions+=1;goto B5afd6b;
case 0x5afd6f:goto L5afd6f;
case 0x5afd73:c.instructions+=7;goto B5afd73;
case 0x5afd75:c.instructions+=6;goto B5afd75;
case 0x5afd79:c.instructions+=5;goto B5afd79;
case 0x5afd7b:c.instructions+=4;goto B5afd7b;
case 0x5afd7d:c.instructions+=3;goto B5afd7d;
case 0x5afd81:c.instructions+=2;goto B5afd81;
case 0x5afd83:c.instructions+=1;goto B5afd83;
case 0x5afd86:goto L5afd86;
case 0x5afd89:c.instructions+=4;goto B5afd89;
case 0x5afd8d:c.instructions+=3;goto B5afd8d;
case 0x5afd8f:c.instructions+=2;goto B5afd8f;
case 0x5afd92:c.instructions+=1;goto B5afd92;
case 0x5afd94:goto L5afd94;
case 0x5afd98:c.instructions+=3;goto B5afd98;
case 0x5afd9a:c.instructions+=2;goto B5afd9a;
case 0x5afda2:c.instructions+=1;goto B5afda2;
case 0x5afda4:goto L5afda4;
case 0x5afda7:c.instructions+=1;goto B5afda7;
case 0x5afda9:goto L5afda9;
case 0x5afdad:c.instructions+=5;goto B5afdad;
case 0x5afdaf:c.instructions+=4;goto B5afdaf;
case 0x5afdb3:c.instructions+=3;goto B5afdb3;
case 0x5afdb6:c.instructions+=2;goto B5afdb6;
case 0x5afdba:c.instructions+=1;goto B5afdba;
case 0x5afdbc:goto L5afdbc;
case 0x5afdc0:c.instructions+=4;goto B5afdc0;
case 0x5afdc1:c.instructions+=3;goto B5afdc1;
case 0x5afdc3:c.instructions+=2;goto B5afdc3;
case 0x5afdc7:c.instructions+=1;goto B5afdc7;
case 0x5afdcd:goto L5afdcd;
case 0x5afdd1:c.instructions+=4;goto B5afdd1;
case 0x5afdd3:c.instructions+=3;goto B5afdd3;
case 0x5afdd9:c.instructions+=2;goto B5afdd9;
case 0x5afddd:c.instructions+=1;goto B5afddd;
case 0x5afde3:goto L5afde3;
case 0x5afde5:c.instructions+=1;goto B5afde5;
case 0x5afdea:goto L5afdea;
case 0x5afdec:c.instructions+=2;goto B5afdec;
case 0x5afdee:c.instructions+=1;goto B5afdee;
case 0x5afdf4:goto L5afdf4;
case 0x5afdf7:c.instructions+=3;goto B5afdf7;
case 0x5afdff:c.instructions+=2;goto B5afdff;
case 0x5afe03:c.instructions+=1;goto B5afe03;
case 0x5afe09:goto L5afe09;
case 0x5afe10:goto L5afe10;
case 0x5afe13:c.instructions+=3;goto B5afe13;
case 0x5afe15:c.instructions+=2;goto B5afe15;
case 0x5afe19:c.instructions+=1;goto B5afe19;
case 0x5afe1b:goto L5afe1b;
case 0x5afe1e:c.instructions+=4;goto B5afe1e;
case 0x5afe21:c.instructions+=3;goto B5afe21;
case 0x5afe23:c.instructions+=2;goto B5afe23;
case 0x5afe26:c.instructions+=1;goto B5afe26;
case 0x5afe28:goto L5afe28;
case 0x5afe2b:c.instructions+=12;goto B5afe2b;
case 0x5afe2f:c.instructions+=11;goto B5afe2f;
case 0x5afe32:c.instructions+=10;goto B5afe32;
case 0x5afe36:c.instructions+=9;goto B5afe36;
case 0x5afe3a:c.instructions+=8;goto B5afe3a;
case 0x5afe3d:c.instructions+=7;goto B5afe3d;
case 0x5afe41:c.instructions+=6;goto B5afe41;
case 0x5afe44:c.instructions+=5;goto B5afe44;
case 0x5afe48:c.instructions+=4;goto B5afe48;
case 0x5afe4c:c.instructions+=3;goto B5afe4c;
case 0x5afe50:c.instructions+=2;goto B5afe50;
case 0x5afe54:c.instructions+=1;goto B5afe54;
case 0x5afe56:goto L5afe56;
case 0x5afe5a:c.instructions+=4;goto B5afe5a;
case 0x5afe5d:c.instructions+=3;goto B5afe5d;
case 0x5afe61:c.instructions+=2;goto B5afe61;
case 0x5afe65:c.instructions+=1;goto B5afe65;
case 0x5afe69:goto L5afe69;
case 0x5afe6d:c.instructions+=8;goto B5afe6d;
case 0x5afe6f:c.instructions+=7;goto B5afe6f;
case 0x5afe73:c.instructions+=6;goto B5afe73;
case 0x5afe75:c.instructions+=5;goto B5afe75;
case 0x5afe77:c.instructions+=4;goto B5afe77;
case 0x5afe7b:c.instructions+=3;goto B5afe7b;
case 0x5afe7f:c.instructions+=2;goto B5afe7f;
case 0x5afe81:c.instructions+=1;goto B5afe81;
case 0x5afe84:goto L5afe84;
case 0x5afe87:c.instructions+=4;goto B5afe87;
case 0x5afe8b:c.instructions+=3;goto B5afe8b;
case 0x5afe8d:c.instructions+=2;goto B5afe8d;
case 0x5afe90:c.instructions+=1;goto B5afe90;
case 0x5afe92:goto L5afe92;
case 0x5afe96:c.instructions+=4;goto B5afe96;
case 0x5afe9c:c.instructions+=3;goto B5afe9c;
case 0x5afe9e:c.instructions+=2;goto B5afe9e;
case 0x5afea1:c.instructions+=1;goto B5afea1;
case 0x5afea3:goto L5afea3;
case 0x5afea6:c.instructions+=3;goto B5afea6;
case 0x5afeaa:c.instructions+=2;goto B5afeaa;
case 0x5afeae:c.instructions+=1;goto B5afeae;
case 0x5afeb0:goto L5afeb0;
case 0x5afeb4:c.instructions+=6;goto B5afeb4;
case 0x5afeb7:c.instructions+=5;goto B5afeb7;
case 0x5afeb8:c.instructions+=4;goto B5afeb8;
case 0x5afebb:c.instructions+=3;goto B5afebb;
case 0x5afebd:c.instructions+=2;goto B5afebd;
case 0x5afec1:c.instructions+=1;goto B5afec1;
case 0x5afec7:goto L5afec7;
case 0x5afec9:c.instructions+=1;goto B5afec9;
case 0x5afecb:goto L5afecb;
case 0x5afece:c.instructions+=3;goto B5afece;
case 0x5afed0:c.instructions+=2;goto B5afed0;
case 0x5afed3:c.instructions+=1;goto B5afed3;
case 0x5afed5:goto L5afed5;
case 0x5afed8:c.instructions+=17;goto B5afed8;
case 0x5afedb:c.instructions+=16;goto B5afedb;
case 0x5afede:c.instructions+=15;goto B5afede;
case 0x5afee1:c.instructions+=14;goto B5afee1;
case 0x5afee4:c.instructions+=13;goto B5afee4;
case 0x5afee7:c.instructions+=12;goto B5afee7;
case 0x5afee9:c.instructions+=11;goto B5afee9;
case 0x5afeed:c.instructions+=10;goto B5afeed;
case 0x5afeef:c.instructions+=9;goto B5afeef;
case 0x5afef3:c.instructions+=8;goto B5afef3;
case 0x5afef7:c.instructions+=7;goto B5afef7;
case 0x5afefa:c.instructions+=6;goto B5afefa;
case 0x5afefc:c.instructions+=5;goto B5afefc;
case 0x5aff00:c.instructions+=4;goto B5aff00;
case 0x5aff03:c.instructions+=3;goto B5aff03;
case 0x5aff07:c.instructions+=2;goto B5aff07;
case 0x5aff0b:c.instructions+=1;goto B5aff0b;
case 0x5aff0e:goto L5aff0e;
case 0x5aff11:c.instructions+=6;goto B5aff11;
case 0x5aff14:c.instructions+=5;goto B5aff14;
case 0x5aff15:c.instructions+=4;goto B5aff15;
case 0x5aff16:c.instructions+=3;goto B5aff16;
case 0x5aff19:c.instructions+=2;goto B5aff19;
case 0x5aff1a:c.instructions+=1;goto B5aff1a;
case 0x5aff1f:goto L5aff1f;
case 0x5aff23:c.instructions+=11;goto B5aff23;
case 0x5aff26:c.instructions+=10;goto B5aff26;
case 0x5aff2a:c.instructions+=9;goto B5aff2a;
case 0x5aff2c:c.instructions+=8;goto B5aff2c;
case 0x5aff30:c.instructions+=7;goto B5aff30;
case 0x5aff37:c.instructions+=6;goto B5aff37;
case 0x5aff38:c.instructions+=5;goto B5aff38;
case 0x5aff39:c.instructions+=4;goto B5aff39;
case 0x5aff3a:c.instructions+=3;goto B5aff3a;
case 0x5aff3c:c.instructions+=2;goto B5aff3c;
case 0x5aff3d:c.instructions+=1;goto B5aff3d;
case 0x5aff40:goto L5aff40;
case 0x5aff44:c.instructions+=8;goto B5aff44;
case 0x5aff47:c.instructions+=7;goto B5aff47;
case 0x5aff48:c.instructions+=6;goto B5aff48;
case 0x5aff49:c.instructions+=5;goto B5aff49;
case 0x5aff50:c.instructions+=4;goto B5aff50;
case 0x5aff51:c.instructions+=3;goto B5aff51;
case 0x5aff53:c.instructions+=2;goto B5aff53;
case 0x5aff54:c.instructions+=1;goto B5aff54;
case 0x5aff60:goto L5aff60;
case 0x5aff62:c.instructions+=25;goto B5aff62;
case 0x5aff67:c.instructions+=24;goto B5aff67;
case 0x5aff6d:c.instructions+=23;goto B5aff6d;
case 0x5aff6e:c.instructions+=22;goto B5aff6e;
case 0x5aff75:c.instructions+=21;goto B5aff75;
case 0x5aff76:c.instructions+=20;goto B5aff76;
case 0x5aff77:c.instructions+=19;goto B5aff77;
case 0x5aff78:c.instructions+=18;goto B5aff78;
case 0x5aff79:c.instructions+=17;goto B5aff79;
case 0x5aff7b:c.instructions+=16;goto B5aff7b;
case 0x5aff7e:c.instructions+=15;goto B5aff7e;
case 0x5aff7f:c.instructions+=14;goto B5aff7f;
case 0x5aff83:c.instructions+=13;goto B5aff83;
case 0x5aff89:c.instructions+=12;goto B5aff89;
case 0x5aff90:c.instructions+=11;goto B5aff90;
case 0x5aff93:c.instructions+=10;goto B5aff93;
case 0x5aff96:c.instructions+=9;goto B5aff96;
case 0x5aff9a:c.instructions+=8;goto B5aff9a;
case 0x5aff9d:c.instructions+=7;goto B5aff9d;
case 0x5affa7:c.instructions+=6;goto B5affa7;
case 0x5affaa:c.instructions+=5;goto B5affaa;
case 0x5affb0:c.instructions+=4;goto B5affb0;
case 0x5affb1:c.instructions+=3;goto B5affb1;
case 0x5affb2:c.instructions+=2;goto B5affb2;
case 0x5affba:c.instructions+=1;goto B5affba;
case 0x5affbf:goto L5affbf;
case 0x5affc2:c.instructions+=3;goto B5affc2;
case 0x5affc5:c.instructions+=2;goto B5affc5;
case 0x5affca:c.instructions+=1;goto B5affca;
case 0x5affd0:goto L5affd0;
case 0x5affd2:c.instructions+=2;goto B5affd2;
case 0x5affd4:c.instructions+=1;goto B5affd4;
case 0x5affd6:goto L5affd6;
case 0x5affd8:c.instructions+=2;goto B5affd8;
case 0x5affda:c.instructions+=1;goto B5affda;
case 0x5affdc:goto L5affdc;
case 0x5affdf:c.instructions+=2;goto B5affdf;
case 0x5affe0:c.instructions+=1;goto B5affe0;
case 0x5affe2:goto L5affe2;
case 0x5affe4:c.instructions+=2;goto B5affe4;
case 0x5affe9:c.instructions+=1;goto B5affe9;
case 0x5affee:goto L5affee;
case 0x5afff2:c.instructions+=6;goto B5afff2;
case 0x5afff3:c.instructions+=5;goto B5afff3;
case 0x5afff9:c.instructions+=4;goto B5afff9;
case 0x5afffa:c.instructions+=3;goto B5afffa;
case 0x5afffb:c.instructions+=2;goto B5afffb;
case 0x5afffc:c.instructions+=1;goto B5afffc;
default:missing_instruction(c.pc);}
B5af000:L5af000:{c.instructions+=17;NFSU2_TR(0x5af000);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5af003:{NFSU2_TR(0x5af003);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5af005:{NFSU2_TR(0x5af005);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5af008:{NFSU2_TR(0x5af008);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5af00b:{NFSU2_TR(0x5af00b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5af00e:{NFSU2_TR(0x5af00e);
w1(R+8,u8(u32(r1(R+8))-u32(u8(0x1ull))));
}
B5af010:{NFSU2_TR(0x5af010);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af015:{NFSU2_TR(0x5af015);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5af018:{NFSU2_TR(0x5af018);
__builtin_memmove((R+8),gp(0x86b25c),4);
}
B5af01e:{NFSU2_TR(0x5af01e);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af020:{NFSU2_TR(0x5af020);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af022:{NFSU2_TR(0x5af022);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5af028:{NFSU2_TR(0x5af028);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5af029:{NFSU2_TR(0x5af029);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af02a:{NFSU2_TR(0x5af02a);
__builtin_memmove(gp(0x86b25c),(R+8),4);
}
B5af030:{NFSU2_TR(0x5af030);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5af034:{NFSU2_TR(0x5af034);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af039ull));
TAIL_STATIC(0x75c401u,75c);
}
B5af039:L5af039:{c.instructions+=7;NFSU2_TR(0x5af039);
u8 U[4];
w4(U+0,u32(0x7a2208ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5af03f:{NFSU2_TR(0x5af03f);
__builtin_memmove((R+0),gp(0x86b254),4);
}
B5af044:{NFSU2_TR(0x5af044);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5af045:{NFSU2_TR(0x5af045);
__builtin_memmove((R+4),(R+24),4);
}
B5af047:{NFSU2_TR(0x5af047);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5af04f:{NFSU2_TR(0x5af04f);
__builtin_memmove(gp(0x86b254),(R+0),4);
}
B5af054:{NFSU2_TR(0x5af054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af059ull));
TAIL_STATIC(0x5a9c00u,5a9);
}
B5af059:L5af059:{c.instructions+=5;NFSU2_TR(0x5af059);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af05d:{NFSU2_TR(0x5af05d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5af05e:{NFSU2_TR(0x5af05e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5af065:{NFSU2_TR(0x5af065);
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
B5af068:{NFSU2_TR(0x5af068);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5af070:L5af070:{c.instructions+=3;NFSU2_TR(0x5af070);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af071:{NFSU2_TR(0x5af071);
__builtin_memmove((R+24),(R+4),4);
}
B5af073:{NFSU2_TR(0x5af073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af078ull));
TAIL_STATIC(0x5aa410u,5aa);
}
B5af078:L5af078:{c.instructions+=2;NFSU2_TR(0x5af078);
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
B5af07d:{NFSU2_TR(0x5af07d);
if(r1(R+518)){{goto L5af088;}}
}
B5af07f:L5af07f:{c.instructions+=2;NFSU2_TR(0x5af07f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af080:{NFSU2_TR(0x5af080);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af085ull));
TAIL_STATIC(0x575630u,575);
}
B5af085:L5af085:{c.instructions+=1;NFSU2_TR(0x5af085);
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
B5af088:L5af088:{c.instructions+=3;NFSU2_TR(0x5af088);
__builtin_memmove((R+0),(R+24),4);
}
B5af08a:{NFSU2_TR(0x5af08a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5af08b:{NFSU2_TR(0x5af08b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5af090:L5af090:{c.instructions+=5;NFSU2_TR(0x5af090);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af094:{NFSU2_TR(0x5af094);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af095:{NFSU2_TR(0x5af095);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af096:{NFSU2_TR(0x5af096);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5af098:{NFSU2_TR(0x5af098);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af09dull));
TAIL_STATIC(0x502fd0u,502);
}
B5af09d:L5af09d:{c.instructions+=3;NFSU2_TR(0x5af09d);
__builtin_memmove((R+20),(R+0),4);
}
B5af09f:{NFSU2_TR(0x5af09f);
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
B5af0a1:{NFSU2_TR(0x5af0a1);
if(r1(R+518)){{goto L5af0db;}}
}
B5af0a3:L5af0a3:{c.instructions+=4;NFSU2_TR(0x5af0a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af0a4:{NFSU2_TR(0x5af0a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5af0a8:{NFSU2_TR(0x5af0a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af0a9:{NFSU2_TR(0x5af0a9);
__builtin_memmove((R+16),(R+16),4);
}
B5af0b0:L5af0b0:{c.instructions+=3;NFSU2_TR(0x5af0b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5af0b3:{NFSU2_TR(0x5af0b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5af0b5:{NFSU2_TR(0x5af0b5);
if(r1(R+518)){{goto L5af0bc;}}
}
B5af0b7:L5af0b7:{c.instructions+=2;NFSU2_TR(0x5af0b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5af0ba:{NFSU2_TR(0x5af0ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af0d3;}}
}
B5af0bc:L5af0bc:{c.instructions+=7;NFSU2_TR(0x5af0bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5af0bf:{NFSU2_TR(0x5af0bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5af0c1:{NFSU2_TR(0x5af0c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5af0c4:{NFSU2_TR(0x5af0c4);
__builtin_memmove((R+0),gp(0x86b2cc),4);
}
B5af0c9:{NFSU2_TR(0x5af0c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af0ca:{NFSU2_TR(0x5af0ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af0cb:{NFSU2_TR(0x5af0cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af0d0ull));
TAIL_STATIC(0x43f920u,43f);
}
B5af0d0:L5af0d0:{c.instructions+=1;NFSU2_TR(0x5af0d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5af0d3:L5af0d3:{c.instructions+=3;NFSU2_TR(0x5af0d3);
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
B5af0d5:{NFSU2_TR(0x5af0d5);
__builtin_memmove((R+24),(R+28),4);
}
B5af0d7:{NFSU2_TR(0x5af0d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5af0b0u);}goto L5af0b0;}}
}
B5af0d9:L5af0d9:{c.instructions+=2;NFSU2_TR(0x5af0d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5af0da:{NFSU2_TR(0x5af0da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5af0db:L5af0db:{c.instructions+=3;NFSU2_TR(0x5af0db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5af0dc:{NFSU2_TR(0x5af0dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5af0dd:{NFSU2_TR(0x5af0dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5af0e0:L5af0e0:{c.instructions+=14;NFSU2_TR(0x5af0e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af0e1:{NFSU2_TR(0x5af0e1);
__builtin_memmove((R+20),(R+16),4);
}
B5af0e3:{NFSU2_TR(0x5af0e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5af0e6:{NFSU2_TR(0x5af0e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x224ull))));
}
B5af0ec:{NFSU2_TR(0x5af0ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af0ed:{NFSU2_TR(0x5af0ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af0ee:{NFSU2_TR(0x5af0ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af0ef:{NFSU2_TR(0x5af0ef);
__builtin_memmove((R+24),(R+4),4);
}
B5af0f1:{NFSU2_TR(0x5af0f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af0f5:{NFSU2_TR(0x5af0f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af0f6:{NFSU2_TR(0x5af0f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5af0fd:{NFSU2_TR(0x5af0fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af0fe:{NFSU2_TR(0x5af0fe);
__builtin_memmove((R+4),(R+24),4);
}
B5af100:{NFSU2_TR(0x5af100);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af105ull));
TAIL_STATIC(0x594000u,594);
}
B5af105:L5af105:{c.instructions+=4;NFSU2_TR(0x5af105);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5af108:{NFSU2_TR(0x5af108);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5af10e:{NFSU2_TR(0x5af10e);
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
B5af110:{NFSU2_TR(0x5af110);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af121;}}
}
B5af112:L5af112:{c.instructions+=4;NFSU2_TR(0x5af112);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5af119:{NFSU2_TR(0x5af119);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af11a:{NFSU2_TR(0x5af11a);
__builtin_memmove((R+4),(R+28),4);
}
B5af11c:{NFSU2_TR(0x5af11c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af121ull));
TAIL_STATIC(0x5a9b10u,5a9);
}
B5af121:L5af121:{c.instructions+=5;NFSU2_TR(0x5af121);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af124:{NFSU2_TR(0x5af124);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x244ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5af12a:{NFSU2_TR(0x5af12a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5af12c:{NFSU2_TR(0x5af12c);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5af133:{NFSU2_TR(0x5af133);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af136ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5af136:L5af136:{c.instructions+=13;NFSU2_TR(0x5af136);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af139:{NFSU2_TR(0x5af139);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af13c:{NFSU2_TR(0x5af13c);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5af143:{NFSU2_TR(0x5af143);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af146:{NFSU2_TR(0x5af146);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5af14d:{NFSU2_TR(0x5af14d);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af154:{NFSU2_TR(0x5af154);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5af156:{NFSU2_TR(0x5af156);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af15a:{NFSU2_TR(0x5af15a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5af15c:{NFSU2_TR(0x5af15c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af160:{NFSU2_TR(0x5af160);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af164:{NFSU2_TR(0x5af164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5af166:{NFSU2_TR(0x5af166);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af169ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5af169:L5af169:{c.instructions+=10;NFSU2_TR(0x5af169);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af16c:{NFSU2_TR(0x5af16c);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5af173:{NFSU2_TR(0x5af173);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af176:{NFSU2_TR(0x5af176);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5af17d:{NFSU2_TR(0x5af17d);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af184:{NFSU2_TR(0x5af184);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5af186:{NFSU2_TR(0x5af186);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af18a:{NFSU2_TR(0x5af18a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5af18c:{NFSU2_TR(0x5af18c);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af190:{NFSU2_TR(0x5af190);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af194:L5af194:{c.instructions+=7;NFSU2_TR(0x5af194);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af197:{NFSU2_TR(0x5af197);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5af199:{NFSU2_TR(0x5af199);
u8 U[4];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af1a0:{NFSU2_TR(0x5af1a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af1a1:{NFSU2_TR(0x5af1a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af1a8:{NFSU2_TR(0x5af1a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af1a9:{NFSU2_TR(0x5af1a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af1acull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5af1ac:L5af1ac:{c.instructions+=7;NFSU2_TR(0x5af1ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af1af:{NFSU2_TR(0x5af1af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5af1b1:{NFSU2_TR(0x5af1b1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af1b8:{NFSU2_TR(0x5af1b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af1b9:{NFSU2_TR(0x5af1b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af1c0:{NFSU2_TR(0x5af1c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af1c1:{NFSU2_TR(0x5af1c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af1c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5af1c4:L5af1c4:{c.instructions+=7;NFSU2_TR(0x5af1c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5af1c8:{NFSU2_TR(0x5af1c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af1c9:{NFSU2_TR(0x5af1c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5af1d0:{NFSU2_TR(0x5af1d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af1d1:{NFSU2_TR(0x5af1d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af1d8:{NFSU2_TR(0x5af1d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af1d9:{NFSU2_TR(0x5af1d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af1deull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5af1de:L5af1de:{c.instructions+=19;NFSU2_TR(0x5af1de);
{u32 ea_=u32(r4(R+16)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af1e5:{NFSU2_TR(0x5af1e5);
{u32 ea_=u32(r4(R+16)+u32(364u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5af1ec:{NFSU2_TR(0x5af1ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5af1f0:{NFSU2_TR(0x5af1f0);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af1f7:{NFSU2_TR(0x5af1f7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af1f8:{NFSU2_TR(0x5af1f8);
{u32 ea_=u32(r4(R+16)+u32(372u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5af1ff:{NFSU2_TR(0x5af1ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x200ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af206:{NFSU2_TR(0x5af206);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af20d:{NFSU2_TR(0x5af20d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af20e:{NFSU2_TR(0x5af20e);
{u32 ea_=u32(r4(R+16)+u32(380u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5af215:{NFSU2_TR(0x5af215);
{u32 ea_=u32(r4(R+16)+u32(460u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af21c:{NFSU2_TR(0x5af21c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1ccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af223:{NFSU2_TR(0x5af223);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5af225:{NFSU2_TR(0x5af225);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5af22c:{NFSU2_TR(0x5af22c);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af233:{NFSU2_TR(0x5af233);
u8 U[4];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5af23a:{NFSU2_TR(0x5af23a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af23b:{NFSU2_TR(0x5af23b);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af242:{NFSU2_TR(0x5af242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af247ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5af247:L5af247:{c.instructions+=37;NFSU2_TR(0x5af247);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af24e:{NFSU2_TR(0x5af24e);
{u32 ea_=u32(r4(R+16)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5af255:{NFSU2_TR(0x5af255);
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
B5af258:{NFSU2_TR(0x5af258);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af25f:{NFSU2_TR(0x5af25f);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5af263:{NFSU2_TR(0x5af263);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5af26a:{NFSU2_TR(0x5af26a);
{u32 ea_=u32(r4(R+16)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af271:{NFSU2_TR(0x5af271);
{u32 ea_=u32(r4(R+16)+u32(284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5af278:{NFSU2_TR(0x5af278);
{u32 ea_=u32(r4(R+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af27f:{NFSU2_TR(0x5af27f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5af281:{NFSU2_TR(0x5af281);
{u32 ea_=u32(r4(R+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af288:{NFSU2_TR(0x5af288);
{u32 ea_=u32(r4(R+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af28f:{NFSU2_TR(0x5af28f);
{u32 ea_=u32(r4(R+16)+u32(404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af296:{NFSU2_TR(0x5af296);
{u32 ea_=u32(r4(R+16)+u32(244u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5af29d:{NFSU2_TR(0x5af29d);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af2a4:{NFSU2_TR(0x5af2a4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5af2a6:{NFSU2_TR(0x5af2a6);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5af2ad:{NFSU2_TR(0x5af2ad);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af2b4:{NFSU2_TR(0x5af2b4);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5af2bb:{NFSU2_TR(0x5af2bb);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af2c2:{NFSU2_TR(0x5af2c2);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af2c9:{NFSU2_TR(0x5af2c9);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af2cd:{NFSU2_TR(0x5af2cd);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af2d1:{NFSU2_TR(0x5af2d1);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af2d8:{NFSU2_TR(0x5af2d8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5af2da:{NFSU2_TR(0x5af2da);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af2de:{NFSU2_TR(0x5af2de);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af2e5:{NFSU2_TR(0x5af2e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5af2e7:{NFSU2_TR(0x5af2e7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5af2eb:{NFSU2_TR(0x5af2eb);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5af2ed:{NFSU2_TR(0x5af2ed);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af2f0:{NFSU2_TR(0x5af2f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af2f1:{NFSU2_TR(0x5af2f1);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af2f8:{NFSU2_TR(0x5af2f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af2f9:{NFSU2_TR(0x5af2f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5af2fd:{NFSU2_TR(0x5af2fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af2fe:{NFSU2_TR(0x5af2fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af303ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5af303:L5af303:{c.instructions+=6;NFSU2_TR(0x5af303);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af307:{NFSU2_TR(0x5af307);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5af30d:{NFSU2_TR(0x5af30d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5af310:{NFSU2_TR(0x5af310);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5af312:{NFSU2_TR(0x5af312);
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
B5af315:{NFSU2_TR(0x5af315);
if(r1(R+518)){{goto L5af9bb;}}
}
B5af31b:L5af31b:{c.instructions+=6;NFSU2_TR(0x5af31b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5af31e:{NFSU2_TR(0x5af31e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5af321:{NFSU2_TR(0x5af321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5af323:{NFSU2_TR(0x5af323);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af324:{NFSU2_TR(0x5af324);
__builtin_memmove((R+4),(R+28),4);
}
B5af326:{NFSU2_TR(0x5af326);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af329ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5af329:L5af329:{c.instructions+=5;NFSU2_TR(0x5af329);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af32d:{NFSU2_TR(0x5af32d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5af32f:{NFSU2_TR(0x5af32f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af330:{NFSU2_TR(0x5af330);
__builtin_memmove((R+4),(R+12),4);
}
B5af332:{NFSU2_TR(0x5af332);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af335ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5af335:L5af335:{c.instructions+=3;NFSU2_TR(0x5af335);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5af338:{NFSU2_TR(0x5af338);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5af33a:{NFSU2_TR(0x5af33a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af34e;}}
}
B5af33c:L5af33c:{c.instructions+=2;NFSU2_TR(0x5af33c);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x3ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x3ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5af340:{NFSU2_TR(0x5af340);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af34e;}}
}
B5af342:L5af342:{c.instructions+=4;NFSU2_TR(0x5af342);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af346:{NFSU2_TR(0x5af346);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5af348:{NFSU2_TR(0x5af348);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5af34c:{NFSU2_TR(0x5af34c);
{goto L5af370;}
}
B5af34e:L5af34e:{c.instructions+=3;NFSU2_TR(0x5af34e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5af351:{NFSU2_TR(0x5af351);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5af353:{NFSU2_TR(0x5af353);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af359;}}
}
B5af355:L5af355:{c.instructions+=2;NFSU2_TR(0x5af355);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x3ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x3ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5af357:{NFSU2_TR(0x5af357);
if(r1(R+518)){{goto L5af36c;}}
}
B5af359:L5af359:{c.instructions+=5;NFSU2_TR(0x5af359);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af35d:{NFSU2_TR(0x5af35d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5af35f:{NFSU2_TR(0x5af35f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5af361:{NFSU2_TR(0x5af361);
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
B5af364:{NFSU2_TR(0x5af364);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af36c;}}
}
B5af366:L5af366:{c.instructions+=2;NFSU2_TR(0x5af366);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5af368:{NFSU2_TR(0x5af368);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af36c:L5af36c:{c.instructions+=1;NFSU2_TR(0x5af36c);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af370:L5af370:{c.instructions+=3;NFSU2_TR(0x5af370);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af373:{NFSU2_TR(0x5af373);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5af375:{NFSU2_TR(0x5af375);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af378ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5af378:L5af378:{c.instructions+=4;NFSU2_TR(0x5af378);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af37c:{NFSU2_TR(0x5af37c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af37f:{NFSU2_TR(0x5af37f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5af381:{NFSU2_TR(0x5af381);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af384ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5af384:L5af384:{c.instructions+=9;NFSU2_TR(0x5af384);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af388:{NFSU2_TR(0x5af388);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af38c:{NFSU2_TR(0x5af38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af38f:{NFSU2_TR(0x5af38f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5af395:{NFSU2_TR(0x5af395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5af397:{NFSU2_TR(0x5af397);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af39b:{NFSU2_TR(0x5af39b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5af39d:{NFSU2_TR(0x5af39d);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af3a4:{NFSU2_TR(0x5af3a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af3a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5af3a7:L5af3a7:{c.instructions+=8;NFSU2_TR(0x5af3a7);
__builtin_memmove((R+28),(R+0),4);
}
B5af3a9:{NFSU2_TR(0x5af3a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af3ad:{NFSU2_TR(0x5af3ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af3ae:{NFSU2_TR(0x5af3ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5af3b2:{NFSU2_TR(0x5af3b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af3b3:{NFSU2_TR(0x5af3b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1a8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5af3ba:{NFSU2_TR(0x5af3ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af3bb:{NFSU2_TR(0x5af3bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af3c0ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5af3c0:L5af3c0:{c.instructions+=6;NFSU2_TR(0x5af3c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af3c7:{NFSU2_TR(0x5af3c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af3c8:{NFSU2_TR(0x5af3c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x1d0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5af3cf:{NFSU2_TR(0x5af3cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af3d0:{NFSU2_TR(0x5af3d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af3d1:{NFSU2_TR(0x5af3d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af3d6ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5af3d6:L5af3d6:{c.instructions+=7;NFSU2_TR(0x5af3d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5af3da:{NFSU2_TR(0x5af3da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af3db:{NFSU2_TR(0x5af3db);
u8 U[4];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af3e2:{NFSU2_TR(0x5af3e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af3e3:{NFSU2_TR(0x5af3e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5af3ea:{NFSU2_TR(0x5af3ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af3eb:{NFSU2_TR(0x5af3eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af3f0ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5af3f0:L5af3f0:{c.instructions+=16;NFSU2_TR(0x5af3f0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af3f4:{NFSU2_TR(0x5af3f4);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5af3f8:{NFSU2_TR(0x5af3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af3fb:{NFSU2_TR(0x5af3fb);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af402:{NFSU2_TR(0x5af402);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5af404:{NFSU2_TR(0x5af404);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af408:{NFSU2_TR(0x5af408);
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
B5af40b:{NFSU2_TR(0x5af40b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5af40d:{NFSU2_TR(0x5af40d);
{u32 ea_=u32(r4(R+16)+u32(312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af414:{NFSU2_TR(0x5af414);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af418:{NFSU2_TR(0x5af418);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5af41a:{NFSU2_TR(0x5af41a);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af421:{NFSU2_TR(0x5af421);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af425:{NFSU2_TR(0x5af425);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5af427:{NFSU2_TR(0x5af427);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af42b:{NFSU2_TR(0x5af42b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af42eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5af42e:L5af42e:{c.instructions+=8;NFSU2_TR(0x5af42e);
__builtin_memmove((R+28),(R+0),4);
}
B5af430:{NFSU2_TR(0x5af430);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af434:{NFSU2_TR(0x5af434);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af435:{NFSU2_TR(0x5af435);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5af439:{NFSU2_TR(0x5af439);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af43a:{NFSU2_TR(0x5af43a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5af441:{NFSU2_TR(0x5af441);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af442:{NFSU2_TR(0x5af442);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af447ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5af447:L5af447:{c.instructions+=6;NFSU2_TR(0x5af447);
u8 U[4];
w4(U+0,u32(u32(u32(0x1ecull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af44e:{NFSU2_TR(0x5af44e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af44f:{NFSU2_TR(0x5af44f);
u8 U[4];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5af456:{NFSU2_TR(0x5af456);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af457:{NFSU2_TR(0x5af457);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af458:{NFSU2_TR(0x5af458);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af45dull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5af45d:L5af45d:{c.instructions+=7;NFSU2_TR(0x5af45d);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5af461:{NFSU2_TR(0x5af461);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af462:{NFSU2_TR(0x5af462);
u8 U[4];
w4(U+0,u32(u32(u32(0x21cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af469:{NFSU2_TR(0x5af469);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af46a:{NFSU2_TR(0x5af46a);
u8 U[4];
w4(U+0,u32(u32(u32(0x170ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5af471:{NFSU2_TR(0x5af471);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af472:{NFSU2_TR(0x5af472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af477ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5af477:L5af477:{c.instructions+=16;NFSU2_TR(0x5af477);
{u32 ea_=u32(r4(R+16)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af47e:{NFSU2_TR(0x5af47e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af482:{NFSU2_TR(0x5af482);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B5af485:{NFSU2_TR(0x5af485);
{u32 ea_=u32(r4(R+16)+u32(344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af48c:{NFSU2_TR(0x5af48c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af490:{NFSU2_TR(0x5af490);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5af492:{NFSU2_TR(0x5af492);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af499:{NFSU2_TR(0x5af499);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af49d:{NFSU2_TR(0x5af49d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5af49f:{NFSU2_TR(0x5af49f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5af4a3:{NFSU2_TR(0x5af4a3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af4a7:{NFSU2_TR(0x5af4a7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af4ab:{NFSU2_TR(0x5af4ab);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5af4af:{NFSU2_TR(0x5af4af);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5af4b1:{NFSU2_TR(0x5af4b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5af4b4:{NFSU2_TR(0x5af4b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af4bc;}}
}
B5af4b6:L5af4b6:{c.instructions+=2;NFSU2_TR(0x5af4b6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af4ba:{NFSU2_TR(0x5af4ba);
{goto L5af4c0;}
}
B5af4bc:L5af4bc:{c.instructions+=1;NFSU2_TR(0x5af4bc);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af4c0:L5af4c0:{c.instructions+=8;NFSU2_TR(0x5af4c0);
{u32 ea_=u32(u32(8372004u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5af4c6:{NFSU2_TR(0x5af4c6);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af4cd:{NFSU2_TR(0x5af4cd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5af4d1:{NFSU2_TR(0x5af4d1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5af4d5:{NFSU2_TR(0x5af4d5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5af4d7:{NFSU2_TR(0x5af4d7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5af4d9:{NFSU2_TR(0x5af4d9);
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
B5af4dc:{NFSU2_TR(0x5af4dc);
if(r1(R+514)){{goto L5af4e4;}}
}
B5af4de:L5af4de:{c.instructions+=2;NFSU2_TR(0x5af4de);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af4e2:{NFSU2_TR(0x5af4e2);
{goto L5af4e6;}
}
B5af4e4:L5af4e4:{c.instructions+=1;NFSU2_TR(0x5af4e4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5af4e6:L5af4e6:{c.instructions+=16;NFSU2_TR(0x5af4e6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af4ea:{NFSU2_TR(0x5af4ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af4ed:{NFSU2_TR(0x5af4ed);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af4f1:{NFSU2_TR(0x5af4f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af4f5:{NFSU2_TR(0x5af4f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af4f6:{NFSU2_TR(0x5af4f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af4fa:{NFSU2_TR(0x5af4fa);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af4fe:{NFSU2_TR(0x5af4fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af4ff:{NFSU2_TR(0x5af4ff);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af503:{NFSU2_TR(0x5af503);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af507:{NFSU2_TR(0x5af507);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af50b:{NFSU2_TR(0x5af50b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af50f:{NFSU2_TR(0x5af50f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af513:{NFSU2_TR(0x5af513);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af517:{NFSU2_TR(0x5af517);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5af519:{NFSU2_TR(0x5af519);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af51cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5af51c:L5af51c:{c.instructions+=20;NFSU2_TR(0x5af51c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af520:{NFSU2_TR(0x5af520);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af524:{NFSU2_TR(0x5af524);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af528:{NFSU2_TR(0x5af528);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5af52a:{NFSU2_TR(0x5af52a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af52b:{NFSU2_TR(0x5af52b);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af52f:{NFSU2_TR(0x5af52f);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af533:{NFSU2_TR(0x5af533);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5af535:{NFSU2_TR(0x5af535);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af536:{NFSU2_TR(0x5af536);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af53a:{NFSU2_TR(0x5af53a);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5af53c:{NFSU2_TR(0x5af53c);
{u32 ea_=u32(r4(R+16)+u32(560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af543:{NFSU2_TR(0x5af543);
u8 U[8];
w4(U+0,u32(u32(u32(0x230ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af54a:{NFSU2_TR(0x5af54a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5af54c:{NFSU2_TR(0x5af54c);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5af550:{NFSU2_TR(0x5af550);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af553:{NFSU2_TR(0x5af553);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af557:{NFSU2_TR(0x5af557);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af55b:{NFSU2_TR(0x5af55b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5af55d:{NFSU2_TR(0x5af55d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af560ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5af560:L5af560:{c.instructions+=4;NFSU2_TR(0x5af560);
{u32 ea_=u32(u32(8004860u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5af566:{NFSU2_TR(0x5af566);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5af568:{NFSU2_TR(0x5af568);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5af56b:{NFSU2_TR(0x5af56b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5af9b9;}}
}
B5af571:L5af571:{c.instructions+=5;NFSU2_TR(0x5af571);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af575:{NFSU2_TR(0x5af575);
{u32 ea_=u32(u32(8004860u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5af57b:{NFSU2_TR(0x5af57b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5af57d:{NFSU2_TR(0x5af57d);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5af580:{NFSU2_TR(0x5af580);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5af9b9;}}
}
B5af586:L5af586:{c.instructions+=5;NFSU2_TR(0x5af586);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5af58c:{NFSU2_TR(0x5af58c);
w4(R+12,u32(0x1ull));
}
B5af591:{NFSU2_TR(0x5af591);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5af593:{NFSU2_TR(0x5af593);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5af596:{NFSU2_TR(0x5af596);
if(r1(R+514)){{goto L5af59c;}}
}
B5af598:L5af598:{c.instructions+=2;NFSU2_TR(0x5af598);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5af59a:{NFSU2_TR(0x5af59a);
{goto L5af5bb;}
}
B5af59c:L5af59c:{c.instructions+=5;NFSU2_TR(0x5af59c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af5a0:{NFSU2_TR(0x5af5a0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5af5a6:{NFSU2_TR(0x5af5a6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5af5a8:{NFSU2_TR(0x5af5a8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5af5ab:{NFSU2_TR(0x5af5ab);
if(r1(R+514)){{goto L5af5b9;}}
}
B5af5ad:L5af5ad:{c.instructions+=4;NFSU2_TR(0x5af5ad);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af5b1:{NFSU2_TR(0x5af5b1);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5af5b3:{NFSU2_TR(0x5af5b3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af5b7:{NFSU2_TR(0x5af5b7);
{goto L5af5bb;}
}
B5af5b9:L5af5b9:{c.instructions+=1;NFSU2_TR(0x5af5b9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5af5bb:L5af5bb:{c.instructions+=4;NFSU2_TR(0x5af5bb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5af5bf:{NFSU2_TR(0x5af5bf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5af5c1:{NFSU2_TR(0x5af5c1);
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
B5af5c4:{NFSU2_TR(0x5af5c4);
if(r1(R+514)){{goto L5af5cc;}}
}
B5af5c6:L5af5c6:{c.instructions+=2;NFSU2_TR(0x5af5c6);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af5ca:{NFSU2_TR(0x5af5ca);
{goto L5af5d6;}
}
B5af5cc:L5af5cc:{c.instructions+=3;NFSU2_TR(0x5af5cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af5d0:{NFSU2_TR(0x5af5d0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5af5d2:{NFSU2_TR(0x5af5d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5af5d6:L5af5d6:{c.instructions+=9;NFSU2_TR(0x5af5d6);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af5da:{NFSU2_TR(0x5af5da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5af5dd:{NFSU2_TR(0x5af5dd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af5e1:{NFSU2_TR(0x5af5e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5af5e4:{NFSU2_TR(0x5af5e4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af5e5:{NFSU2_TR(0x5af5e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af5e6:{NFSU2_TR(0x5af5e6);
__builtin_memmove((R+4),(R+24),4);
}
B5af5e8:{NFSU2_TR(0x5af5e8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af5ec:{NFSU2_TR(0x5af5ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af5f1ull));
TAIL_STATIC(0x5941c0u,594);
}
B5af5f1:L5af5f1:{c.instructions+=16;NFSU2_TR(0x5af5f1);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af5f5:{NFSU2_TR(0x5af5f5);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af5f9:{NFSU2_TR(0x5af5f9);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af5fd:{NFSU2_TR(0x5af5fd);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af601:{NFSU2_TR(0x5af601);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5af603:{NFSU2_TR(0x5af603);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af607:{NFSU2_TR(0x5af607);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af60b:{NFSU2_TR(0x5af60b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5af60d:{NFSU2_TR(0x5af60d);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5af60f:{NFSU2_TR(0x5af60f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af613:{NFSU2_TR(0x5af613);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af617:{NFSU2_TR(0x5af617);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af61b:{NFSU2_TR(0x5af61b);
{u32 ea_=u32(u32(8372016u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5af621:{NFSU2_TR(0x5af621);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5af623:{NFSU2_TR(0x5af623);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5af626:{NFSU2_TR(0x5af626);
if(r1(R+514)){{goto L5af632;}}
}
B5af628:L5af628:{c.instructions+=2;NFSU2_TR(0x5af628);
{u32 ea_=u32(u32(8372016u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5af62e:{NFSU2_TR(0x5af62e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af632:L5af632:{c.instructions+=5;NFSU2_TR(0x5af632);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af636:{NFSU2_TR(0x5af636);
{u32 ea_=u32(u32(7882144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5af63c:{NFSU2_TR(0x5af63c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5af63e:{NFSU2_TR(0x5af63e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5af641:{NFSU2_TR(0x5af641);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af676;}}
}
B5af643:L5af643:{c.instructions+=13;NFSU2_TR(0x5af643);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af649:{NFSU2_TR(0x5af649);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5af64d:{NFSU2_TR(0x5af64d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5af64f:{NFSU2_TR(0x5af64f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af653:{NFSU2_TR(0x5af653);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5af655:{NFSU2_TR(0x5af655);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af659:{NFSU2_TR(0x5af659);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af65d:{NFSU2_TR(0x5af65d);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af661:{NFSU2_TR(0x5af661);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af665:{NFSU2_TR(0x5af665);
{u32 ea_=u32(r4(R+16)+u32(388u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af66c:{NFSU2_TR(0x5af66c);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af670:{NFSU2_TR(0x5af670);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af674:{NFSU2_TR(0x5af674);
{goto L5af68f;}
}
B5af676:L5af676:{c.instructions+=4;NFSU2_TR(0x5af676);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5af678:{NFSU2_TR(0x5af678);
u8 U[8];
w4(U+0,u32(u32(u32(0x184ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5af683:{NFSU2_TR(0x5af683);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af689:{NFSU2_TR(0x5af689);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af68f:L5af68f:{c.instructions+=14;NFSU2_TR(0x5af68f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af693:{NFSU2_TR(0x5af693);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5af69a:{NFSU2_TR(0x5af69a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af69e:{NFSU2_TR(0x5af69e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af6a1:{NFSU2_TR(0x5af6a1);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af6a5:{NFSU2_TR(0x5af6a5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af6a9:{NFSU2_TR(0x5af6a9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af6ad:{NFSU2_TR(0x5af6ad);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af6b1:{NFSU2_TR(0x5af6b1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af6b5:{NFSU2_TR(0x5af6b5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af6b9:{NFSU2_TR(0x5af6b9);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af6bd:{NFSU2_TR(0x5af6bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5af6c3:{NFSU2_TR(0x5af6c3);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5af6c7:{NFSU2_TR(0x5af6c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af6de;}}
}
B5af6c9:L5af6c9:{c.instructions+=7;NFSU2_TR(0x5af6c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5af6cc:{NFSU2_TR(0x5af6cc);
{u32 ea_=u32(r4(R+8)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af6cf:{NFSU2_TR(0x5af6cf);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5af6d1:{NFSU2_TR(0x5af6d1);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5af6d7:{NFSU2_TR(0x5af6d7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5af6d9:{NFSU2_TR(0x5af6d9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5af6dc:{NFSU2_TR(0x5af6dc);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5af6ff;}}
}
B5af6de:L5af6de:{c.instructions+=3;NFSU2_TR(0x5af6de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af6e4:{NFSU2_TR(0x5af6e4);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5af6e8:{NFSU2_TR(0x5af6e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af705;}}
}
B5af6ea:L5af6ea:{c.instructions+=7;NFSU2_TR(0x5af6ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5af6ed:{NFSU2_TR(0x5af6ed);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af6f0:{NFSU2_TR(0x5af6f0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5af6f2:{NFSU2_TR(0x5af6f2);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5af6f8:{NFSU2_TR(0x5af6f8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5af6fa:{NFSU2_TR(0x5af6fa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5af6fd:{NFSU2_TR(0x5af6fd);
if(r1(R+514)){{goto L5af705;}}
}
B5af6ff:L5af6ff:{c.instructions+=1;NFSU2_TR(0x5af6ff);
{u32 ea_=u32(u32(8001700u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af705:L5af705:{c.instructions+=27;NFSU2_TR(0x5af705);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5af707:{NFSU2_TR(0x5af707);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af70b:{NFSU2_TR(0x5af70b);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5af70f:{NFSU2_TR(0x5af70f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af710:{NFSU2_TR(0x5af710);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5af717:{NFSU2_TR(0x5af717);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af718:{NFSU2_TR(0x5af718);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af71f:{NFSU2_TR(0x5af71f);
{u32 ea_=u32(r4(R+16)+u32(396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af726:{NFSU2_TR(0x5af726);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af72d:{NFSU2_TR(0x5af72d);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5af731:{NFSU2_TR(0x5af731);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af732:{NFSU2_TR(0x5af732);
__builtin_memmove((R+4),(R+28),4);
}
B5af734:{NFSU2_TR(0x5af734);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af73b:{NFSU2_TR(0x5af73b);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af73f:{NFSU2_TR(0x5af73f);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5af741:{NFSU2_TR(0x5af741);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af748:{NFSU2_TR(0x5af748);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5af74a:{NFSU2_TR(0x5af74a);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af751:{NFSU2_TR(0x5af751);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5af753:{NFSU2_TR(0x5af753);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af75a:{NFSU2_TR(0x5af75a);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af761:{NFSU2_TR(0x5af761);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5af763:{NFSU2_TR(0x5af763);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af76a:{NFSU2_TR(0x5af76a);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af771:{NFSU2_TR(0x5af771);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5af773:{NFSU2_TR(0x5af773);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af77a:{NFSU2_TR(0x5af77a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af77full));
TAIL_STATIC(0x5a9620u,5a9);
}
B5af77f:L5af77f:{c.instructions+=3;NFSU2_TR(0x5af77f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5af782:{NFSU2_TR(0x5af782);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5af784:{NFSU2_TR(0x5af784);
if(r1(R+518)){{goto L5af8c8;}}
}
B5af78a:L5af78a:{c.instructions+=6;NFSU2_TR(0x5af78a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af78d:{NFSU2_TR(0x5af78d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5af790:{NFSU2_TR(0x5af790);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5af797:{NFSU2_TR(0x5af797);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5af79a:{NFSU2_TR(0x5af79a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5af79c:{NFSU2_TR(0x5af79c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af82c;}}
}
B5af7a2:L5af7a2:{c.instructions+=3;NFSU2_TR(0x5af7a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5af7a8:{NFSU2_TR(0x5af7a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5af7af:{NFSU2_TR(0x5af7af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af82c;}}
}
B5af7b1:L5af7b1:{c.instructions+=30;NFSU2_TR(0x5af7b1);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af7b7:{NFSU2_TR(0x5af7b7);
{u32 ea_=u32(r4(R+0)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af7bd:{NFSU2_TR(0x5af7bd);
{u32 ea_=u32(r4(R+0)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af7c3:{NFSU2_TR(0x5af7c3);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af7ca:{NFSU2_TR(0x5af7ca);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5af7cc:{NFSU2_TR(0x5af7cc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af7d0:{NFSU2_TR(0x5af7d0);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af7d7:{NFSU2_TR(0x5af7d7);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af7db:{NFSU2_TR(0x5af7db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5af7dd:{NFSU2_TR(0x5af7dd);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5af7df:{NFSU2_TR(0x5af7df);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af7e3:{NFSU2_TR(0x5af7e3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5af7e5:{NFSU2_TR(0x5af7e5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af7e9:{NFSU2_TR(0x5af7e9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5af7eb:{NFSU2_TR(0x5af7eb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af7ef:{NFSU2_TR(0x5af7ef);
{u32 ea_=u32(r4(R+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af7f6:{NFSU2_TR(0x5af7f6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af7fa:{NFSU2_TR(0x5af7fa);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af801:{NFSU2_TR(0x5af801);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af805:{NFSU2_TR(0x5af805);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af809:{NFSU2_TR(0x5af809);
{u32 ea_=u32(r4(R+16)+u32(368u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5af810:{NFSU2_TR(0x5af810);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af814:{NFSU2_TR(0x5af814);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af818:{NFSU2_TR(0x5af818);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5af81a:{NFSU2_TR(0x5af81a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af81e:{NFSU2_TR(0x5af81e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af822:{NFSU2_TR(0x5af822);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5af824:{NFSU2_TR(0x5af824);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af828:{NFSU2_TR(0x5af828);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5af82a:{NFSU2_TR(0x5af82a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5af82c:L5af82c:{c.instructions+=4;NFSU2_TR(0x5af82c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5af833:{NFSU2_TR(0x5af833);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5af836:{NFSU2_TR(0x5af836);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5af838:{NFSU2_TR(0x5af838);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af8c8;}}
}
B5af83e:L5af83e:{c.instructions+=3;NFSU2_TR(0x5af83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5af844:{NFSU2_TR(0x5af844);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5af84b:{NFSU2_TR(0x5af84b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af8c8;}}
}
B5af84d:L5af84d:{c.instructions+=30;NFSU2_TR(0x5af84d);
{u32 ea_=u32(r4(R+0)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af853:{NFSU2_TR(0x5af853);
{u32 ea_=u32(r4(R+0)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af859:{NFSU2_TR(0x5af859);
{u32 ea_=u32(r4(R+0)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af85f:{NFSU2_TR(0x5af85f);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af866:{NFSU2_TR(0x5af866);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5af868:{NFSU2_TR(0x5af868);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af86c:{NFSU2_TR(0x5af86c);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af873:{NFSU2_TR(0x5af873);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af877:{NFSU2_TR(0x5af877);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5af879:{NFSU2_TR(0x5af879);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5af87b:{NFSU2_TR(0x5af87b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af87f:{NFSU2_TR(0x5af87f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5af881:{NFSU2_TR(0x5af881);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af885:{NFSU2_TR(0x5af885);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5af887:{NFSU2_TR(0x5af887);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af88b:{NFSU2_TR(0x5af88b);
{u32 ea_=u32(r4(R+16)+u32(368u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af892:{NFSU2_TR(0x5af892);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af896:{NFSU2_TR(0x5af896);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af89d:{NFSU2_TR(0x5af89d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af8a1:{NFSU2_TR(0x5af8a1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af8a5:{NFSU2_TR(0x5af8a5);
{u32 ea_=u32(r4(R+16)+u32(368u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5af8ac:{NFSU2_TR(0x5af8ac);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af8b0:{NFSU2_TR(0x5af8b0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af8b4:{NFSU2_TR(0x5af8b4);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5af8b6:{NFSU2_TR(0x5af8b6);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af8ba:{NFSU2_TR(0x5af8ba);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af8be:{NFSU2_TR(0x5af8be);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5af8c0:{NFSU2_TR(0x5af8c0);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af8c4:{NFSU2_TR(0x5af8c4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5af8c6:{NFSU2_TR(0x5af8c6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5af8c8:L5af8c8:{c.instructions+=5;NFSU2_TR(0x5af8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5af8cb:{NFSU2_TR(0x5af8cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5af8ce:{NFSU2_TR(0x5af8ce);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5af8d0:{NFSU2_TR(0x5af8d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5af8d2:{NFSU2_TR(0x5af8d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af8ea;}}
}
B5af8d4:L5af8d4:{c.instructions+=3;NFSU2_TR(0x5af8d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af8d7:{NFSU2_TR(0x5af8d7);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5af8db:{NFSU2_TR(0x5af8db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af8ea;}}
}
B5af8dd:L5af8dd:{c.instructions+=2;NFSU2_TR(0x5af8dd);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5af8e4:{NFSU2_TR(0x5af8e4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5af8ea;}}
}
B5af8e6:L5af8e6:{c.instructions+=2;NFSU2_TR(0x5af8e6);
__builtin_memmove((R+28),(R+0),4);
}
B5af8e8:{NFSU2_TR(0x5af8e8);
{goto L5af904;}
}
B5af8ea:L5af8ea:{c.instructions+=3;NFSU2_TR(0x5af8ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af8ed:{NFSU2_TR(0x5af8ed);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5af8f1:{NFSU2_TR(0x5af8f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af904;}}
}
B5af8f3:L5af8f3:{c.instructions+=2;NFSU2_TR(0x5af8f3);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5af8f6:{NFSU2_TR(0x5af8f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af904;}}
}
B5af8f8:L5af8f8:{c.instructions+=3;NFSU2_TR(0x5af8f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5af8fe:{NFSU2_TR(0x5af8fe);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5af900:{NFSU2_TR(0x5af900);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5af904;}}
}
B5af902:L5af902:{c.instructions+=1;NFSU2_TR(0x5af902);
__builtin_memmove((R+28),(R+4),4);
}
B5af904:L5af904:{c.instructions+=2;NFSU2_TR(0x5af904);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5af906:{NFSU2_TR(0x5af906);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af93c;}}
}
B5af908:L5af908:{c.instructions+=7;NFSU2_TR(0x5af908);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af90f:{NFSU2_TR(0x5af90f);
{u32 ea_=u32(u32(8001704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af915:{NFSU2_TR(0x5af915);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af91b:{NFSU2_TR(0x5af91b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5af91d:{NFSU2_TR(0x5af91d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5af91f:{NFSU2_TR(0x5af91f);
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
B5af922:{NFSU2_TR(0x5af922);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af933;}}
}
B5af924:L5af924:{c.instructions+=3;NFSU2_TR(0x5af924);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5af926:{NFSU2_TR(0x5af926);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5af931:{NFSU2_TR(0x5af931);
{goto L5af972;}
}
B5af933:L5af933:{c.instructions+=2;NFSU2_TR(0x5af933);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af93a:{NFSU2_TR(0x5af93a);
{goto L5af972;}
}
B5af93c:L5af93c:{c.instructions+=2;NFSU2_TR(0x5af93c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5af93e:{NFSU2_TR(0x5af93e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af972;}}
}
B5af940:L5af940:{c.instructions+=7;NFSU2_TR(0x5af940);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af947:{NFSU2_TR(0x5af947);
{u32 ea_=u32(u32(8001704u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5af94d:{NFSU2_TR(0x5af94d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af953:{NFSU2_TR(0x5af953);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5af955:{NFSU2_TR(0x5af955);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5af957:{NFSU2_TR(0x5af957);
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
B5af95a:{NFSU2_TR(0x5af95a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5af96b;}}
}
B5af95c:L5af95c:{c.instructions+=3;NFSU2_TR(0x5af95c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5af95e:{NFSU2_TR(0x5af95e);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5af969:{NFSU2_TR(0x5af969);
{goto L5af972;}
}
B5af96b:L5af96b:{c.instructions+=1;NFSU2_TR(0x5af96b);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5af972:L5af972:{c.instructions+=6;NFSU2_TR(0x5af972);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5af974:{NFSU2_TR(0x5af974);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af978:{NFSU2_TR(0x5af978);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af979:{NFSU2_TR(0x5af979);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af980:{NFSU2_TR(0x5af980);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af981:{NFSU2_TR(0x5af981);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af984ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5af984:L5af984:{c.instructions+=7;NFSU2_TR(0x5af984);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af987:{NFSU2_TR(0x5af987);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5af989:{NFSU2_TR(0x5af989);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af98d:{NFSU2_TR(0x5af98d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af98e:{NFSU2_TR(0x5af98e);
u8 U[4];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5af995:{NFSU2_TR(0x5af995);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af996:{NFSU2_TR(0x5af996);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5af999ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5af999:L5af999:{c.instructions+=5;NFSU2_TR(0x5af999);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5af99d:{NFSU2_TR(0x5af99d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5af9a3:{NFSU2_TR(0x5af9a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5af9a5:{NFSU2_TR(0x5af9a5);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5af9a8:{NFSU2_TR(0x5af9a8);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5af9bb;}}
}
B5af9aa:L5af9aa:{c.instructions+=2;NFSU2_TR(0x5af9aa);
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
B5af9ac:{NFSU2_TR(0x5af9ac);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5af194u);}goto L5af194;}}
}
B5af9b2:L5af9b2:{c.instructions+=6;NFSU2_TR(0x5af9b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5af9b3:{NFSU2_TR(0x5af9b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5af9b4:{NFSU2_TR(0x5af9b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5af9b5:{NFSU2_TR(0x5af9b5);
__builtin_memmove((R+16),(R+20),4);
}
B5af9b7:{NFSU2_TR(0x5af9b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5af9b8:{NFSU2_TR(0x5af9b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5af9b9:L5af9b9:{c.instructions+=1;NFSU2_TR(0x5af9b9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5af9bb:L5af9bb:{c.instructions+=6;NFSU2_TR(0x5af9bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5af9bc:{NFSU2_TR(0x5af9bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5af9bd:{NFSU2_TR(0x5af9bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5af9be:{NFSU2_TR(0x5af9be);
__builtin_memmove((R+16),(R+20),4);
}
B5af9c0:{NFSU2_TR(0x5af9c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5af9c1:{NFSU2_TR(0x5af9c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5af9d0:L5af9d0:{c.instructions+=55;NFSU2_TR(0x5af9d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af9d2:{NFSU2_TR(0x5af9d2);
u8 U[4];
w4(U+0,u32(0x778e68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af9d7:{NFSU2_TR(0x5af9d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5af9dd:{NFSU2_TR(0x5af9dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af9de:{NFSU2_TR(0x5af9de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5af9e5:{NFSU2_TR(0x5af9e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af9e6:{NFSU2_TR(0x5af9e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af9e7:{NFSU2_TR(0x5af9e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af9e8:{NFSU2_TR(0x5af9e8);
__builtin_memmove((R+24),(R+4),4);
}
B5af9ea:{NFSU2_TR(0x5af9ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5af9eb:{NFSU2_TR(0x5af9eb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5af9ef:{NFSU2_TR(0x5af9ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5af9f3:{NFSU2_TR(0x5af9f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5af9f7:{NFSU2_TR(0x5af9f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5af9fb:{NFSU2_TR(0x5af9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5af9fe:{NFSU2_TR(0x5af9fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afa02:{NFSU2_TR(0x5afa02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa05:{NFSU2_TR(0x5afa05);
u8 U[4];
w4(U+0,u32(0x7a2508ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5afa0b:{NFSU2_TR(0x5afa0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5afa15:{NFSU2_TR(0x5afa15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa18:{NFSU2_TR(0x5afa18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5afa1a:{NFSU2_TR(0x5afa1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa1d:{NFSU2_TR(0x5afa1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5afa20:{NFSU2_TR(0x5afa20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa23:{NFSU2_TR(0x5afa23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5afa26:{NFSU2_TR(0x5afa26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa29:{NFSU2_TR(0x5afa29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afa2c:{NFSU2_TR(0x5afa2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa2f:{NFSU2_TR(0x5afa2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afa33:{NFSU2_TR(0x5afa33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa36:{NFSU2_TR(0x5afa36);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5afa38:{NFSU2_TR(0x5afa38);
w4(R+0,u32(0x1ull));
}
B5afa3d:{NFSU2_TR(0x5afa3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa40:{NFSU2_TR(0x5afa40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa43:{NFSU2_TR(0x5afa43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afa46:{NFSU2_TR(0x5afa46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa49:{NFSU2_TR(0x5afa49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5afa50:{NFSU2_TR(0x5afa50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa53:{NFSU2_TR(0x5afa53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa56:{NFSU2_TR(0x5afa56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afa59:{NFSU2_TR(0x5afa59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa5f:{NFSU2_TR(0x5afa5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5afa65:{NFSU2_TR(0x5afa65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afa66:{NFSU2_TR(0x5afa66);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5afa6c:{NFSU2_TR(0x5afa6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa6f:{NFSU2_TR(0x5afa6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa72:{NFSU2_TR(0x5afa72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa75:{NFSU2_TR(0x5afa75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa78:{NFSU2_TR(0x5afa78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa7b:{NFSU2_TR(0x5afa7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5afa7e:{NFSU2_TR(0x5afa7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afa7f:{NFSU2_TR(0x5afa7f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afa80:{NFSU2_TR(0x5afa80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afa81:{NFSU2_TR(0x5afa81);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afa85:{NFSU2_TR(0x5afa85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5afa8aull));
TAIL_STATIC(0x5ac7d0u,5ac);
}
B5afa8a:L5afa8a:{c.instructions+=3;NFSU2_TR(0x5afa8a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5afa8d:{NFSU2_TR(0x5afa8d);
__builtin_memmove((R+4),(R+24),4);
}
B5afa8f:{NFSU2_TR(0x5afa8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5afa94ull));
TAIL_STATIC(0x594710u,594);
}
B5afa94:L5afa94:{c.instructions+=24;NFSU2_TR(0x5afa94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afa97:{NFSU2_TR(0x5afa97);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afa9a:{NFSU2_TR(0x5afa9a);
__builtin_memmove((R+8),gp(0x7a18c0),4);
}
B5afaa0:{NFSU2_TR(0x5afaa0);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5afaa6:{NFSU2_TR(0x5afaa6);
__builtin_memmove((R+0),(R+8),4);
}
B5afaa8:{NFSU2_TR(0x5afaa8);
u8 U[4];
w4(U+0,u32(0x7a2500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afaad:{NFSU2_TR(0x5afaad);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5afab3:{NFSU2_TR(0x5afab3);
__builtin_memmove((R+4),gp(0x7fc294),4);
}
B5afab9:{NFSU2_TR(0x5afab9);
{u32 ea_=u32(u32(8001724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afabf:{NFSU2_TR(0x5afabf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afac5:{NFSU2_TR(0x5afac5);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5afacb:{NFSU2_TR(0x5afacb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afad1:{NFSU2_TR(0x5afad1);
{u32 ea_=u32(u32(8001732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afad7:{NFSU2_TR(0x5afad7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5afada:{NFSU2_TR(0x5afada);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5afae0:{NFSU2_TR(0x5afae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afae6:{NFSU2_TR(0x5afae6);
{u32 ea_=u32(u32(8001732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afaec:{NFSU2_TR(0x5afaec);
w4(R+0,u32(0x3f800000ull));
}
B5afaf1:{NFSU2_TR(0x5afaf1);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5afaf7:{NFSU2_TR(0x5afaf7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afaf8:{NFSU2_TR(0x5afaf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afafe:{NFSU2_TR(0x5afafe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afb04:{NFSU2_TR(0x5afb04);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5afb07:{NFSU2_TR(0x5afb07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5afb0cull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5afb0c:L5afb0c:{c.instructions+=9;NFSU2_TR(0x5afb0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5afb0f:{NFSU2_TR(0x5afb0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5afb10:{NFSU2_TR(0x5afb10);
__builtin_memmove((R+0),(R+24),4);
}
B5afb12:{NFSU2_TR(0x5afb12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5afb13:{NFSU2_TR(0x5afb13);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5afb17:{NFSU2_TR(0x5afb17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5afb18:{NFSU2_TR(0x5afb18);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afb1f:{NFSU2_TR(0x5afb1f);
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
B5afb22:{NFSU2_TR(0x5afb22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5afb30:L5afb30:{c.instructions+=3;NFSU2_TR(0x5afb30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afb31:{NFSU2_TR(0x5afb31);
__builtin_memmove((R+24),(R+4),4);
}
B5afb33:{NFSU2_TR(0x5afb33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5afb38ull));
TAIL_STATIC(0x5a0d10u,5a0);
}
B5afb38:L5afb38:{c.instructions+=2;NFSU2_TR(0x5afb38);
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
B5afb3d:{NFSU2_TR(0x5afb3d);
if(r1(R+518)){{goto L5afb4e;}}
}
B5afb3f:L5afb3f:{c.instructions+=4;NFSU2_TR(0x5afb3f);
__builtin_memmove((R+0),gp(0x86b2f0),4);
}
B5afb44:{NFSU2_TR(0x5afb44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afb45:{NFSU2_TR(0x5afb45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afb46:{NFSU2_TR(0x5afb46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5afb4bull));
TAIL_STATIC(0x43f920u,43f);
}
B5afb4b:L5afb4b:{c.instructions+=1;NFSU2_TR(0x5afb4b);
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
B5afb4e:L5afb4e:{c.instructions+=3;NFSU2_TR(0x5afb4e);
__builtin_memmove((R+0),(R+24),4);
}
B5afb50:{NFSU2_TR(0x5afb50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5afb51:{NFSU2_TR(0x5afb51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5afb60:L5afb60:{c.instructions+=12;NFSU2_TR(0x5afb60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afb61:{NFSU2_TR(0x5afb61);
__builtin_memmove((R+24),(R+4),4);
}
B5afb63:{NFSU2_TR(0x5afb63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5afb66:{NFSU2_TR(0x5afb66);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5afb6c:{NFSU2_TR(0x5afb6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afb6d:{NFSU2_TR(0x5afb6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afb70:{NFSU2_TR(0x5afb70);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5afb76:{NFSU2_TR(0x5afb76);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afb77:{NFSU2_TR(0x5afb77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5afb7a:{NFSU2_TR(0x5afb7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afb7b:{NFSU2_TR(0x5afb7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afb7c:{NFSU2_TR(0x5afb7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5afb81ull));
TAIL_STATIC(0x5ac7d0u,5ac);
}
B5afb81:L5afb81:{c.instructions+=7;NFSU2_TR(0x5afb81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5afb84:{NFSU2_TR(0x5afb84);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afb87:{NFSU2_TR(0x5afb87);
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
B5afb8a:{NFSU2_TR(0x5afb8a);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5afb90:{NFSU2_TR(0x5afb90);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5afb96:{NFSU2_TR(0x5afb96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5afb97:{NFSU2_TR(0x5afb97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5afba0:L5afba0:{c.instructions+=21;NFSU2_TR(0x5afba0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afba1:{NFSU2_TR(0x5afba1);
__builtin_memmove((R+20),(R+16),4);
}
B5afba3:{NFSU2_TR(0x5afba3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5afba6:{NFSU2_TR(0x5afba6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afba8:{NFSU2_TR(0x5afba8);
u8 U[4];
w4(U+0,u32(0x778e08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afbad:{NFSU2_TR(0x5afbad);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afbb3:{NFSU2_TR(0x5afbb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afbb4:{NFSU2_TR(0x5afbb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afbbb:{NFSU2_TR(0x5afbbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x68ull))));
}
B5afbbe:{NFSU2_TR(0x5afbbe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afbbf:{NFSU2_TR(0x5afbbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afbc0:{NFSU2_TR(0x5afbc0);
__builtin_memmove((R+24),(R+4),4);
}
B5afbc2:{NFSU2_TR(0x5afbc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5afbc6:{NFSU2_TR(0x5afbc6);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5afbca:{NFSU2_TR(0x5afbca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afbcb:{NFSU2_TR(0x5afbcb);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afbcf:{NFSU2_TR(0x5afbcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afbd3:{NFSU2_TR(0x5afbd3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5afbd5:{NFSU2_TR(0x5afbd5);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afbda:{NFSU2_TR(0x5afbda);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afbe1:{NFSU2_TR(0x5afbe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5afbe6ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5afbe6:L5afbe6:{c.instructions+=2;NFSU2_TR(0x5afbe6);
__builtin_memmove((R+28),(R+0),4);
}
B5afbe8:{NFSU2_TR(0x5afbe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5afbedull));
TAIL_STATIC(0x43bdf0u,43b);
}
B5afbed:L5afbed:{c.instructions+=8;NFSU2_TR(0x5afbed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5afbf0:{NFSU2_TR(0x5afbf0);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B5afbf2:{NFSU2_TR(0x5afbf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afbf5:{NFSU2_TR(0x5afbf5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afbf6:{NFSU2_TR(0x5afbf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afbf7:{NFSU2_TR(0x5afbf7);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5afbfb:{NFSU2_TR(0x5afbfb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5afbfc:{NFSU2_TR(0x5afbfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5afc01ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5afc01:L5afc01:{c.instructions+=19;NFSU2_TR(0x5afc01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afc04:{NFSU2_TR(0x5afc04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5afc07:{NFSU2_TR(0x5afc07);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5afc09:{NFSU2_TR(0x5afc09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5afc0c:{NFSU2_TR(0x5afc0c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5afc0f:{NFSU2_TR(0x5afc0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afc12:{NFSU2_TR(0x5afc12);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5afc16:{NFSU2_TR(0x5afc16);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+8),(U+2),1);
}
B5afc19:{NFSU2_TR(0x5afc19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5afc1c:{NFSU2_TR(0x5afc1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5afc1f:{NFSU2_TR(0x5afc1f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5afc21:{NFSU2_TR(0x5afc21);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5afc25:{NFSU2_TR(0x5afc25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5afc27:{NFSU2_TR(0x5afc27);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afc2b:{NFSU2_TR(0x5afc2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afc2e:{NFSU2_TR(0x5afc2e);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5afc32:{NFSU2_TR(0x5afc32);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afc36:{NFSU2_TR(0x5afc36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5afc38:{NFSU2_TR(0x5afc38);
{goto L5afc40;}
}
B5afc3a:L5afc3a:{c.instructions+=2;NFSU2_TR(0x5afc3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5afc3e:{NFSU2_TR(0x5afc3e);
__builtin_memmove((R+28),(R+28),4);
}
B5afc40:L5afc40:{c.instructions+=4;NFSU2_TR(0x5afc40);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afc44:{NFSU2_TR(0x5afc44);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5afc48:{NFSU2_TR(0x5afc48);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5afc4a:{NFSU2_TR(0x5afc4a);
if(r1(R+518)){{goto L5afdea;}}
}
B5afc50:L5afc50:{c.instructions+=7;NFSU2_TR(0x5afc50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5afc52:{NFSU2_TR(0x5afc52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5afc55:{NFSU2_TR(0x5afc55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5afc57:{NFSU2_TR(0x5afc57);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afc5a:{NFSU2_TR(0x5afc5a);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+28))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5afc5e:{NFSU2_TR(0x5afc5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afc62:{NFSU2_TR(0x5afc62);
if(r1(R+518)){{goto L5afcd2;}}
}
B5afc64:L5afc64:{c.instructions+=6;NFSU2_TR(0x5afc64);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5afc67:{NFSU2_TR(0x5afc67);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afc6a:{NFSU2_TR(0x5afc6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5afc6d:{NFSU2_TR(0x5afc6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5afc6f:{NFSU2_TR(0x5afc6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5afc72:{NFSU2_TR(0x5afc72);
if(r1(R+518)){{goto L5afc9f;}}
}
B5afc74:L5afc74:{c.instructions+=12;NFSU2_TR(0x5afc74);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5afc77:{NFSU2_TR(0x5afc77);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afc7b:{NFSU2_TR(0x5afc7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5afc7e:{NFSU2_TR(0x5afc7e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afc82:{NFSU2_TR(0x5afc82);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afc86:{NFSU2_TR(0x5afc86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5afc89:{NFSU2_TR(0x5afc89);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afc8d:{NFSU2_TR(0x5afc8d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5afc91:{NFSU2_TR(0x5afc91);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afc95:{NFSU2_TR(0x5afc95);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afc99:{NFSU2_TR(0x5afc99);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5afc9d:{NFSU2_TR(0x5afc9d);
{goto L5afcaf;}
}
B5afc9f:L5afc9f:{c.instructions+=4;NFSU2_TR(0x5afc9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afca3:{NFSU2_TR(0x5afca3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afca7:{NFSU2_TR(0x5afca7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afcab:{NFSU2_TR(0x5afcab);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afcaf:L5afcaf:{c.instructions+=13;NFSU2_TR(0x5afcaf);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afcb3:{NFSU2_TR(0x5afcb3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5afcb5:{NFSU2_TR(0x5afcb5);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afcb9:{NFSU2_TR(0x5afcb9);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5afcbb:{NFSU2_TR(0x5afcbb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5afcbd:{NFSU2_TR(0x5afcbd);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B5afcbf:{NFSU2_TR(0x5afcbf);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5afcc3:{NFSU2_TR(0x5afcc3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5afcc7:{NFSU2_TR(0x5afcc7);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B5afcc9:{NFSU2_TR(0x5afcc9);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5afccb:{NFSU2_TR(0x5afccb);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5afcce:{NFSU2_TR(0x5afcce);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5afcd0:{NFSU2_TR(0x5afcd0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5afcd2:L5afcd2:{c.instructions+=5;NFSU2_TR(0x5afcd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5afcd5:{NFSU2_TR(0x5afcd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afcd9:{NFSU2_TR(0x5afcd9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5afcdd:{NFSU2_TR(0x5afcdd);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B5afce0:{NFSU2_TR(0x5afce0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5afcef;}}
}
B5afce2:L5afce2:{c.instructions+=2;NFSU2_TR(0x5afce2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5afcea:{NFSU2_TR(0x5afcea);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5afc3au);}goto L5afc3a;}
}
B5afcef:L5afcef:{c.instructions+=7;NFSU2_TR(0x5afcef);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5afcf3:{NFSU2_TR(0x5afcf3);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B5afcf6:{NFSU2_TR(0x5afcf6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5afcf8:{NFSU2_TR(0x5afcf8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5afcfa:{NFSU2_TR(0x5afcfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afcfe:{NFSU2_TR(0x5afcfe);
__builtin_memmove((R+8),(R+0),4);
}
B5afd00:{NFSU2_TR(0x5afd00);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5afdcd;}}
}
B5afd06:L5afd06:{c.instructions+=9;NFSU2_TR(0x5afd06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afd09:{NFSU2_TR(0x5afd09);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B5afd0d:{NFSU2_TR(0x5afd0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5afd10:{NFSU2_TR(0x5afd10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5afd13:{NFSU2_TR(0x5afd13);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5afd16:{NFSU2_TR(0x5afd16);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B5afd18:{NFSU2_TR(0x5afd18);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B5afd1c:{NFSU2_TR(0x5afd1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w2(U+2,u16(u32(r2(R+12))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B5afd1f:{NFSU2_TR(0x5afd1f);
if(r1(R+518)){{goto L5afd86;}}
}
B5afd21:L5afd21:{c.instructions+=5;NFSU2_TR(0x5afd21);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5afd24:{NFSU2_TR(0x5afd24);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afd27:{NFSU2_TR(0x5afd27);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5afd29:{NFSU2_TR(0x5afd29);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afd2c:{NFSU2_TR(0x5afd2c);
if(r1(R+518)){{goto L5afd5c;}}
}
B5afd2e:L5afd2e:{c.instructions+=13;NFSU2_TR(0x5afd2e);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5afd31:{NFSU2_TR(0x5afd31);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afd35:{NFSU2_TR(0x5afd35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afd38:{NFSU2_TR(0x5afd38);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afd3c:{NFSU2_TR(0x5afd3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afd40:{NFSU2_TR(0x5afd40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afd43:{NFSU2_TR(0x5afd43);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afd47:{NFSU2_TR(0x5afd47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afd4a:{NFSU2_TR(0x5afd4a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5afd4e:{NFSU2_TR(0x5afd4e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afd52:{NFSU2_TR(0x5afd52);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afd56:{NFSU2_TR(0x5afd56);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5afd5a:{NFSU2_TR(0x5afd5a);
{goto L5afd6f;}
}
B5afd5c:L5afd5c:{c.instructions+=5;NFSU2_TR(0x5afd5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afd60:{NFSU2_TR(0x5afd60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afd63:{NFSU2_TR(0x5afd63);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afd67:{NFSU2_TR(0x5afd67);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afd6b:{NFSU2_TR(0x5afd6b);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afd6f:L5afd6f:{c.instructions+=8;NFSU2_TR(0x5afd6f);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5afd73:{NFSU2_TR(0x5afd73);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5afd75:{NFSU2_TR(0x5afd75);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5afd79:{NFSU2_TR(0x5afd79);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5afd7b:{NFSU2_TR(0x5afd7b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5afd7d:{NFSU2_TR(0x5afd7d);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5afd81:{NFSU2_TR(0x5afd81);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5afd83:{NFSU2_TR(0x5afd83);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5afd86:L5afd86:{c.instructions+=5;NFSU2_TR(0x5afd86);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afd89:{NFSU2_TR(0x5afd89);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5afd8d:{NFSU2_TR(0x5afd8d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5afd8f:{NFSU2_TR(0x5afd8f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5afd92:{NFSU2_TR(0x5afd92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5afdbc;}}
}
B5afd94:L5afd94:{c.instructions+=4;NFSU2_TR(0x5afd94);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afd98:{NFSU2_TR(0x5afd98);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5afd9a:{NFSU2_TR(0x5afd9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5afda2:{NFSU2_TR(0x5afda2);
if(r1(R+518)){{goto L5afdbc;}}
}
B5afda4:L5afda4:{c.instructions+=2;NFSU2_TR(0x5afda4);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w2(U+2,u16(u32(r2(R+12))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B5afda7:{NFSU2_TR(0x5afda7);
if(r1(R+518)){{goto L5afdbc;}}
}
B5afda9:L5afda9:{c.instructions+=6;NFSU2_TR(0x5afda9);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afdad:{NFSU2_TR(0x5afdad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5afdaf:{NFSU2_TR(0x5afdaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afdb3:{NFSU2_TR(0x5afdb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afdb6:{NFSU2_TR(0x5afdb6);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5afdba:{NFSU2_TR(0x5afdba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5afdbc:L5afdbc:{c.instructions+=5;NFSU2_TR(0x5afdbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afdc0:{NFSU2_TR(0x5afdc0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5afdc1:{NFSU2_TR(0x5afdc1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5afdc3:{NFSU2_TR(0x5afdc3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5afdc7:{NFSU2_TR(0x5afdc7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5afd06u);}goto L5afd06;}}
}
B5afdcd:L5afdcd:{c.instructions+=5;NFSU2_TR(0x5afdcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afdd1:{NFSU2_TR(0x5afdd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5afdd3:{NFSU2_TR(0x5afdd3);
__builtin_memmove((R+4),gp(0x86b2d8),4);
}
B5afdd9:{NFSU2_TR(0x5afdd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afddd:{NFSU2_TR(0x5afddd);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5afc3au);}goto L5afc3a;}}
}
B5afde3:L5afde3:{c.instructions+=2;NFSU2_TR(0x5afde3);
__builtin_memmove((R+12),(R+0),4);
}
B5afde5:{NFSU2_TR(0x5afde5);
{goto L5afecb;}
}
B5afdea:L5afdea:{c.instructions+=3;NFSU2_TR(0x5afdea);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5afdec:{NFSU2_TR(0x5afdec);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5afdee:{NFSU2_TR(0x5afdee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5afecb;}}
}
B5afdf4:L5afdf4:{c.instructions+=4;NFSU2_TR(0x5afdf4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5afdf7:{NFSU2_TR(0x5afdf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xfcdc84dcull));
s4(u32(r4(U+0)),r4(U+4));
}
B5afdff:{NFSU2_TR(0x5afdff);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afe03:{NFSU2_TR(0x5afe03);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5aff40;}}
}
B5afe09:L5afe09:{c.instructions+=1;NFSU2_TR(0x5afe09);
__builtin_memmove((R+16),(R+16),4);
}
B5afe10:L5afe10:{c.instructions+=4;NFSU2_TR(0x5afe10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5afe13:{NFSU2_TR(0x5afe13);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5afe15:{NFSU2_TR(0x5afe15);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+28))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5afe19:{NFSU2_TR(0x5afe19);
if(r1(R+518)){{goto L5afe84;}}
}
B5afe1b:L5afe1b:{c.instructions+=5;NFSU2_TR(0x5afe1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5afe1e:{NFSU2_TR(0x5afe1e);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afe21:{NFSU2_TR(0x5afe21);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5afe23:{NFSU2_TR(0x5afe23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afe26:{NFSU2_TR(0x5afe26);
if(r1(R+518)){{goto L5afe56;}}
}
B5afe28:L5afe28:{c.instructions+=13;NFSU2_TR(0x5afe28);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5afe2b:{NFSU2_TR(0x5afe2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afe2f:{NFSU2_TR(0x5afe2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afe32:{NFSU2_TR(0x5afe32);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afe36:{NFSU2_TR(0x5afe36);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afe3a:{NFSU2_TR(0x5afe3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afe3d:{NFSU2_TR(0x5afe3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afe41:{NFSU2_TR(0x5afe41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afe44:{NFSU2_TR(0x5afe44);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5afe48:{NFSU2_TR(0x5afe48);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afe4c:{NFSU2_TR(0x5afe4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afe50:{NFSU2_TR(0x5afe50);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5afe54:{NFSU2_TR(0x5afe54);
{goto L5afe69;}
}
B5afe56:L5afe56:{c.instructions+=5;NFSU2_TR(0x5afe56);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afe5a:{NFSU2_TR(0x5afe5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afe5d:{NFSU2_TR(0x5afe5d);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afe61:{NFSU2_TR(0x5afe61);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afe65:{NFSU2_TR(0x5afe65);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afe69:L5afe69:{c.instructions+=9;NFSU2_TR(0x5afe69);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5afe6d:{NFSU2_TR(0x5afe6d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5afe6f:{NFSU2_TR(0x5afe6f);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5afe73:{NFSU2_TR(0x5afe73);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5afe75:{NFSU2_TR(0x5afe75);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5afe77:{NFSU2_TR(0x5afe77);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5afe7b:{NFSU2_TR(0x5afe7b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5afe7f:{NFSU2_TR(0x5afe7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5afe81:{NFSU2_TR(0x5afe81);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5afe84:L5afe84:{c.instructions+=5;NFSU2_TR(0x5afe84);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afe87:{NFSU2_TR(0x5afe87);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5afe8b:{NFSU2_TR(0x5afe8b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5afe8d:{NFSU2_TR(0x5afe8d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5afe90:{NFSU2_TR(0x5afe90);
if(r1(R+518)){{goto L5afea3;}}
}
B5afe92:L5afe92:{c.instructions+=5;NFSU2_TR(0x5afe92);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afe96:{NFSU2_TR(0x5afe96);
{u32 ea_=u32(u32(8003692u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5afe9c:{NFSU2_TR(0x5afe9c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5afe9e:{NFSU2_TR(0x5afe9e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5afea1:{NFSU2_TR(0x5afea1);
if(r1(R+514)){{goto L5afeb0;}}
}
B5afea3:L5afea3:{c.instructions+=4;NFSU2_TR(0x5afea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afea6:{NFSU2_TR(0x5afea6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afeaa:{NFSU2_TR(0x5afeaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afeae:{NFSU2_TR(0x5afeae);
__builtin_memmove((R+12),(R+4),4);
}
B5afeb0:L5afeb0:{c.instructions+=7;NFSU2_TR(0x5afeb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afeb4:{NFSU2_TR(0x5afeb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5afeb7:{NFSU2_TR(0x5afeb7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5afeb8:{NFSU2_TR(0x5afeb8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
}
B5afebb:{NFSU2_TR(0x5afebb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5afebd:{NFSU2_TR(0x5afebd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afec1:{NFSU2_TR(0x5afec1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5afe10u);}goto L5afe10;}}
}
B5afec7:L5afec7:{c.instructions+=2;NFSU2_TR(0x5afec7);
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
B5afec9:{NFSU2_TR(0x5afec9);
if(r1(R+518)){{goto L5aff40;}}
}
B5afecb:L5afecb:{c.instructions+=4;NFSU2_TR(0x5afecb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5afece:{NFSU2_TR(0x5afece);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5afed0:{NFSU2_TR(0x5afed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5afed3:{NFSU2_TR(0x5afed3);
if(r1(R+518)){{goto L5aff0e;}}
}
B5afed5:L5afed5:{c.instructions+=18;NFSU2_TR(0x5afed5);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afed8:{NFSU2_TR(0x5afed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5afedb:{NFSU2_TR(0x5afedb);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afede:{NFSU2_TR(0x5afede);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5afee1:{NFSU2_TR(0x5afee1);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5afee4:{NFSU2_TR(0x5afee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5afee7:{NFSU2_TR(0x5afee7);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5afee9:{NFSU2_TR(0x5afee9);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afeed:{NFSU2_TR(0x5afeed);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5afeef:{NFSU2_TR(0x5afeef);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afef3:{NFSU2_TR(0x5afef3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5afef7:{NFSU2_TR(0x5afef7);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5afefa:{NFSU2_TR(0x5afefa);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5afefc:{NFSU2_TR(0x5afefc);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5aff00:{NFSU2_TR(0x5aff00);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aff03:{NFSU2_TR(0x5aff03);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5aff07:{NFSU2_TR(0x5aff07);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5aff0b:{NFSU2_TR(0x5aff0b);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5aff0e:L5aff0e:{c.instructions+=7;NFSU2_TR(0x5aff0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5aff11:{NFSU2_TR(0x5aff11);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5aff14:{NFSU2_TR(0x5aff14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aff15:{NFSU2_TR(0x5aff15);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aff16:{NFSU2_TR(0x5aff16);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5aff19:{NFSU2_TR(0x5aff19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aff1a:{NFSU2_TR(0x5aff1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5aff1full));
TAIL_STATIC(0x43c9c0u,43c);
}
B5aff1f:L5aff1f:{c.instructions+=12;NFSU2_TR(0x5aff1f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5aff23:{NFSU2_TR(0x5aff23);
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
B5aff26:{NFSU2_TR(0x5aff26);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5aff2a:{NFSU2_TR(0x5aff2a);
__builtin_memmove((R+0),(R+28),4);
}
B5aff2c:{NFSU2_TR(0x5aff2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aff30:{NFSU2_TR(0x5aff30);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aff37:{NFSU2_TR(0x5aff37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5aff38:{NFSU2_TR(0x5aff38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aff39:{NFSU2_TR(0x5aff39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5aff3a:{NFSU2_TR(0x5aff3a);
__builtin_memmove((R+16),(R+20),4);
}
B5aff3c:{NFSU2_TR(0x5aff3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5aff3d:{NFSU2_TR(0x5aff3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aff40:L5aff40:{c.instructions+=9;NFSU2_TR(0x5aff40);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5aff44:{NFSU2_TR(0x5aff44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aff47:{NFSU2_TR(0x5aff47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5aff48:{NFSU2_TR(0x5aff48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5aff49:{NFSU2_TR(0x5aff49);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aff50:{NFSU2_TR(0x5aff50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5aff51:{NFSU2_TR(0x5aff51);
__builtin_memmove((R+16),(R+20),4);
}
B5aff53:{NFSU2_TR(0x5aff53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5aff54:{NFSU2_TR(0x5aff54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5aff60:L5aff60:{c.instructions+=26;NFSU2_TR(0x5aff60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aff62:{NFSU2_TR(0x5aff62);
u8 U[4];
w4(U+0,u32(0x778e4full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aff67:{NFSU2_TR(0x5aff67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aff6d:{NFSU2_TR(0x5aff6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aff6e:{NFSU2_TR(0x5aff6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aff75:{NFSU2_TR(0x5aff75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aff76:{NFSU2_TR(0x5aff76);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aff77:{NFSU2_TR(0x5aff77);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aff78:{NFSU2_TR(0x5aff78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aff79:{NFSU2_TR(0x5aff79);
__builtin_memmove((R+24),(R+4),4);
}
B5aff7b:{NFSU2_TR(0x5aff7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5aff7e:{NFSU2_TR(0x5aff7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5aff7f:{NFSU2_TR(0x5aff7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5aff83:{NFSU2_TR(0x5aff83);
u8 U[4];
w4(U+0,u32(0x7a2538ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5aff89:{NFSU2_TR(0x5aff89);
u8 U[4];
w4(U+0,u32(0x7a252cull));
s4(u32(r4(R+20)),r4(U+0));
}
B5aff90:{NFSU2_TR(0x5aff90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aff93:{NFSU2_TR(0x5aff93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aff96:{NFSU2_TR(0x5aff96);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5aff9a:{NFSU2_TR(0x5aff9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5aff9d:{NFSU2_TR(0x5aff9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x160ull))));
w4(U+4,u32(0x411ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5affa7:{NFSU2_TR(0x5affa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5affaa:{NFSU2_TR(0x5affaa);
__builtin_memmove((R+4),gp(0x86b2f4),4);
}
B5affb0:{NFSU2_TR(0x5affb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5affb1:{NFSU2_TR(0x5affb1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5affb2:{NFSU2_TR(0x5affb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5affba:{NFSU2_TR(0x5affba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5affbfull));
TAIL_STATIC(0x43f920u,43f);
}
B5affbf:L5affbf:{c.instructions+=4;NFSU2_TR(0x5affbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5affc2:{NFSU2_TR(0x5affc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5affc5:{NFSU2_TR(0x5affc5);
w4(R+12,u32(0x4ull));
}
B5affca:{NFSU2_TR(0x5affca);
__builtin_memmove((R+12),(R+12),4);
}
B5affd0:L5affd0:{c.instructions+=3;NFSU2_TR(0x5affd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5affd2:{NFSU2_TR(0x5affd2);
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
B5affd4:{NFSU2_TR(0x5affd4);
if(r1(R+518)){{goto L5affdc;}}
}
B5affd6:L5affd6:{c.instructions+=3;NFSU2_TR(0x5affd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5affd8:{NFSU2_TR(0x5affd8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5affda:{NFSU2_TR(0x5affda);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5affdcull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5affdc:L5affdc:{c.instructions+=3;NFSU2_TR(0x5affdc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5affdf:{NFSU2_TR(0x5affdf);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5affe0:{NFSU2_TR(0x5affe0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5affd0u);}goto L5affd0;}}
}
B5affe2:L5affe2:{c.instructions+=3;NFSU2_TR(0x5affe2);
__builtin_memmove((R+4),(R+20),4);
}
B5affe4:{NFSU2_TR(0x5affe4);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5affe9:{NFSU2_TR(0x5affe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5affeeull));
TAIL_STATIC(0x5aa410u,5aa);
}
B5affee:L5affee:{c.instructions+=7;NFSU2_TR(0x5affee);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5afff2:{NFSU2_TR(0x5afff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5afff3:{NFSU2_TR(0x5afff3);
u8 U[4];
w4(U+0,u32(0x78427cull));
s4(u32(r4(R+24)),r4(U+0));
}
B5afff9:{NFSU2_TR(0x5afff9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5afffa:{NFSU2_TR(0x5afffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5afffb:{NFSU2_TR(0x5afffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5afffc:{NFSU2_TR(0x5afffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x5b0003u,5b0);
}
XIT:NFSU2_TR_EXIT(0x5af,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
