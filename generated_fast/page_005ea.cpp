#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_438(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_499(u8* __restrict R,Cpu& c);
u32 body_4db(u8* __restrict R,Cpu& c);
u32 body_4f9(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_5dd(u8* __restrict R,Cpu& c);
u32 body_5e8(u8* __restrict R,Cpu& c);
u32 body_5e9(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_605(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5ea,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5ea,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 page_5ea(Cpu& c){return body_5ea(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5ea(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5ea000:goto L5ea000;
case 0x5ea001:c.instructions+=2;goto B5ea001;
case 0x5ea006:c.instructions+=1;goto B5ea006;
case 0x5ea008:goto L5ea008;
case 0x5ea00d:c.instructions+=3;goto B5ea00d;
case 0x5ea00f:c.instructions+=2;goto B5ea00f;
case 0x5ea011:c.instructions+=1;goto B5ea011;
case 0x5ea017:goto L5ea017;
case 0x5ea01d:c.instructions+=2;goto B5ea01d;
case 0x5ea01f:c.instructions+=1;goto B5ea01f;
case 0x5ea020:goto L5ea020;
case 0x5ea024:c.instructions+=5;goto B5ea024;
case 0x5ea026:c.instructions+=4;goto B5ea026;
case 0x5ea028:c.instructions+=3;goto B5ea028;
case 0x5ea02b:c.instructions+=2;goto B5ea02b;
case 0x5ea02e:c.instructions+=1;goto B5ea02e;
case 0x5ea030:goto L5ea030;
case 0x5ea033:c.instructions+=1;goto B5ea033;
case 0x5ea035:goto L5ea035;
case 0x5ea03a:c.instructions+=3;goto B5ea03a;
case 0x5ea03d:c.instructions+=2;goto B5ea03d;
case 0x5ea03f:c.instructions+=1;goto B5ea03f;
case 0x5ea041:goto L5ea041;
case 0x5ea048:c.instructions+=2;goto B5ea048;
case 0x5ea04a:c.instructions+=1;goto B5ea04a;
case 0x5ea04c:goto L5ea04c;
case 0x5ea04f:c.instructions+=3;goto B5ea04f;
case 0x5ea051:c.instructions+=2;goto B5ea051;
case 0x5ea054:c.instructions+=1;goto B5ea054;
case 0x5ea056:goto L5ea056;
case 0x5ea058:goto L5ea058;
case 0x5ea05a:c.instructions+=9;goto B5ea05a;
case 0x5ea05d:c.instructions+=8;goto B5ea05d;
case 0x5ea060:c.instructions+=7;goto B5ea060;
case 0x5ea062:c.instructions+=6;goto B5ea062;
case 0x5ea064:c.instructions+=5;goto B5ea064;
case 0x5ea066:c.instructions+=4;goto B5ea066;
case 0x5ea068:c.instructions+=3;goto B5ea068;
case 0x5ea06a:c.instructions+=2;goto B5ea06a;
case 0x5ea06c:c.instructions+=1;goto B5ea06c;
case 0x5ea06e:goto L5ea06e;
case 0x5ea070:c.instructions+=1;goto B5ea070;
case 0x5ea072:goto L5ea072;
case 0x5ea077:goto L5ea077;
case 0x5ea07a:c.instructions+=2;goto B5ea07a;
case 0x5ea07c:c.instructions+=1;goto B5ea07c;
case 0x5ea07e:goto L5ea07e;
case 0x5ea085:c.instructions+=1;goto B5ea085;
case 0x5ea087:goto L5ea087;
case 0x5ea089:goto L5ea089;
case 0x5ea08c:c.instructions+=11;goto B5ea08c;
case 0x5ea08e:c.instructions+=10;goto B5ea08e;
case 0x5ea093:c.instructions+=9;goto B5ea093;
case 0x5ea095:c.instructions+=8;goto B5ea095;
case 0x5ea098:c.instructions+=7;goto B5ea098;
case 0x5ea09a:c.instructions+=6;goto B5ea09a;
case 0x5ea09c:c.instructions+=5;goto B5ea09c;
case 0x5ea09e:c.instructions+=4;goto B5ea09e;
case 0x5ea0a0:c.instructions+=3;goto B5ea0a0;
case 0x5ea0a2:c.instructions+=2;goto B5ea0a2;
case 0x5ea0a5:c.instructions+=1;goto B5ea0a5;
case 0x5ea0ab:goto L5ea0ab;
case 0x5ea0b0:c.instructions+=4;goto B5ea0b0;
case 0x5ea0b1:c.instructions+=3;goto B5ea0b1;
case 0x5ea0b4:c.instructions+=2;goto B5ea0b4;
case 0x5ea0b6:c.instructions+=1;goto B5ea0b6;
case 0x5ea0bc:goto L5ea0bc;
case 0x5ea0bd:c.instructions+=3;goto B5ea0bd;
case 0x5ea0be:c.instructions+=2;goto B5ea0be;
case 0x5ea0c3:c.instructions+=1;goto B5ea0c3;
case 0x5ea0c8:goto L5ea0c8;
case 0x5ea0ca:c.instructions+=2;goto B5ea0ca;
case 0x5ea0cf:c.instructions+=1;goto B5ea0cf;
case 0x5ea0d4:goto L5ea0d4;
case 0x5ea0da:c.instructions+=2;goto B5ea0da;
case 0x5ea0db:c.instructions+=1;goto B5ea0db;
case 0x5ea0e0:goto L5ea0e0;
case 0x5ea0e3:c.instructions+=4;goto B5ea0e3;
case 0x5ea0e4:c.instructions+=3;goto B5ea0e4;
case 0x5ea0ee:c.instructions+=2;goto B5ea0ee;
case 0x5ea0ef:c.instructions+=1;goto B5ea0ef;
case 0x5ea0f0:goto L5ea0f0;
case 0x5ea0f4:c.instructions+=3;goto B5ea0f4;
case 0x5ea0f5:c.instructions+=2;goto B5ea0f5;
case 0x5ea0fa:c.instructions+=1;goto B5ea0fa;
case 0x5ea0ff:goto L5ea0ff;
case 0x5ea100:goto L5ea100;
case 0x5ea101:c.instructions+=26;goto B5ea101;
case 0x5ea105:c.instructions+=25;goto B5ea105;
case 0x5ea108:c.instructions+=24;goto B5ea108;
case 0x5ea10b:c.instructions+=23;goto B5ea10b;
case 0x5ea10e:c.instructions+=22;goto B5ea10e;
case 0x5ea112:c.instructions+=21;goto B5ea112;
case 0x5ea116:c.instructions+=20;goto B5ea116;
case 0x5ea119:c.instructions+=19;goto B5ea119;
case 0x5ea11c:c.instructions+=18;goto B5ea11c;
case 0x5ea11e:c.instructions+=17;goto B5ea11e;
case 0x5ea122:c.instructions+=16;goto B5ea122;
case 0x5ea124:c.instructions+=15;goto B5ea124;
case 0x5ea128:c.instructions+=14;goto B5ea128;
case 0x5ea12b:c.instructions+=13;goto B5ea12b;
case 0x5ea12f:c.instructions+=12;goto B5ea12f;
case 0x5ea131:c.instructions+=11;goto B5ea131;
case 0x5ea133:c.instructions+=10;goto B5ea133;
case 0x5ea135:c.instructions+=9;goto B5ea135;
case 0x5ea138:c.instructions+=8;goto B5ea138;
case 0x5ea13a:c.instructions+=7;goto B5ea13a;
case 0x5ea13e:c.instructions+=6;goto B5ea13e;
case 0x5ea141:c.instructions+=5;goto B5ea141;
case 0x5ea145:c.instructions+=4;goto B5ea145;
case 0x5ea149:c.instructions+=3;goto B5ea149;
case 0x5ea14c:c.instructions+=2;goto B5ea14c;
case 0x5ea14d:c.instructions+=1;goto B5ea14d;
case 0x5ea150:goto L5ea150;
case 0x5ea151:c.instructions+=3;goto B5ea151;
case 0x5ea157:c.instructions+=2;goto B5ea157;
case 0x5ea159:c.instructions+=1;goto B5ea159;
case 0x5ea15b:goto L5ea15b;
case 0x5ea160:c.instructions+=1;goto B5ea160;
case 0x5ea162:goto L5ea162;
case 0x5ea167:c.instructions+=6;goto B5ea167;
case 0x5ea16d:c.instructions+=5;goto B5ea16d;
case 0x5ea171:c.instructions+=4;goto B5ea171;
case 0x5ea175:c.instructions+=3;goto B5ea175;
case 0x5ea17b:c.instructions+=2;goto B5ea17b;
case 0x5ea17c:c.instructions+=1;goto B5ea17c;
case 0x5ea17d:goto L5ea17d;
case 0x5ea183:c.instructions+=2;goto B5ea183;
case 0x5ea184:c.instructions+=1;goto B5ea184;
case 0x5ea190:goto L5ea190;
case 0x5ea193:c.instructions+=1;goto B5ea193;
case 0x5ea195:goto L5ea195;
case 0x5ea198:c.instructions+=2;goto B5ea198;
case 0x5ea19b:c.instructions+=1;goto B5ea19b;
case 0x5ea19d:goto L5ea19d;
case 0x5ea1a0:c.instructions+=1;goto B5ea1a0;
case 0x5ea1a2:goto L5ea1a2;
case 0x5ea1a7:c.instructions+=1;goto B5ea1a7;
case 0x5ea1a8:goto L5ea1a8;
case 0x5ea1aa:c.instructions+=1;goto B5ea1aa;
case 0x5ea1b0:goto L5ea1b0;
case 0x5ea1b4:c.instructions+=4;goto B5ea1b4;
case 0x5ea1ba:c.instructions+=3;goto B5ea1ba;
case 0x5ea1bb:c.instructions+=2;goto B5ea1bb;
case 0x5ea1bc:c.instructions+=1;goto B5ea1bc;
case 0x5ea1c1:goto L5ea1c1;
case 0x5ea1c4:c.instructions+=1;goto B5ea1c4;
case 0x5ea1d0:goto L5ea1d0;
case 0x5ea1d1:c.instructions+=2;goto B5ea1d1;
case 0x5ea1d3:c.instructions+=1;goto B5ea1d3;
case 0x5ea1d8:goto L5ea1d8;
case 0x5ea1dd:c.instructions+=1;goto B5ea1dd;
case 0x5ea1df:goto L5ea1df;
case 0x5ea1e4:c.instructions+=3;goto B5ea1e4;
case 0x5ea1e5:c.instructions+=2;goto B5ea1e5;
case 0x5ea1e6:c.instructions+=1;goto B5ea1e6;
case 0x5ea1eb:goto L5ea1eb;
case 0x5ea1ee:goto L5ea1ee;
case 0x5ea1f0:c.instructions+=2;goto B5ea1f0;
case 0x5ea1f1:c.instructions+=1;goto B5ea1f1;
case 0x5ea200:goto L5ea200;
case 0x5ea201:c.instructions+=8;goto B5ea201;
case 0x5ea202:c.instructions+=7;goto B5ea202;
case 0x5ea206:c.instructions+=6;goto B5ea206;
case 0x5ea20c:c.instructions+=5;goto B5ea20c;
case 0x5ea20d:c.instructions+=4;goto B5ea20d;
case 0x5ea211:c.instructions+=3;goto B5ea211;
case 0x5ea212:c.instructions+=2;goto B5ea212;
case 0x5ea21a:c.instructions+=1;goto B5ea21a;
case 0x5ea21f:goto L5ea21f;
case 0x5ea223:c.instructions+=3;goto B5ea223;
case 0x5ea224:c.instructions+=2;goto B5ea224;
case 0x5ea226:c.instructions+=1;goto B5ea226;
case 0x5ea22b:goto L5ea22b;
case 0x5ea22f:c.instructions+=4;goto B5ea22f;
case 0x5ea231:c.instructions+=3;goto B5ea231;
case 0x5ea232:c.instructions+=2;goto B5ea232;
case 0x5ea233:c.instructions+=1;goto B5ea233;
case 0x5ea240:goto L5ea240;
case 0x5ea244:c.instructions+=6;goto B5ea244;
case 0x5ea248:c.instructions+=5;goto B5ea248;
case 0x5ea24b:c.instructions+=4;goto B5ea24b;
case 0x5ea24e:c.instructions+=3;goto B5ea24e;
case 0x5ea250:c.instructions+=2;goto B5ea250;
case 0x5ea253:c.instructions+=1;goto B5ea253;
case 0x5ea255:goto L5ea255;
case 0x5ea25a:c.instructions+=1;goto B5ea25a;
case 0x5ea25b:goto L5ea25b;
case 0x5ea25e:c.instructions+=4;goto B5ea25e;
case 0x5ea261:c.instructions+=3;goto B5ea261;
case 0x5ea263:c.instructions+=2;goto B5ea263;
case 0x5ea266:c.instructions+=1;goto B5ea266;
case 0x5ea268:goto L5ea268;
case 0x5ea26a:c.instructions+=1;goto B5ea26a;
case 0x5ea26b:goto L5ea26b;
case 0x5ea26f:c.instructions+=5;goto B5ea26f;
case 0x5ea271:c.instructions+=4;goto B5ea271;
case 0x5ea275:c.instructions+=3;goto B5ea275;
case 0x5ea278:c.instructions+=2;goto B5ea278;
case 0x5ea27a:c.instructions+=1;goto B5ea27a;
case 0x5ea280:goto L5ea280;
case 0x5ea284:c.instructions+=8;goto B5ea284;
case 0x5ea288:c.instructions+=7;goto B5ea288;
case 0x5ea28e:c.instructions+=6;goto B5ea28e;
case 0x5ea292:c.instructions+=5;goto B5ea292;
case 0x5ea298:c.instructions+=4;goto B5ea298;
case 0x5ea29c:c.instructions+=3;goto B5ea29c;
case 0x5ea2a2:c.instructions+=2;goto B5ea2a2;
case 0x5ea2a8:c.instructions+=1;goto B5ea2a8;
case 0x5ea2b0:goto L5ea2b0;
case 0x5ea2b1:c.instructions+=6;goto B5ea2b1;
case 0x5ea2b3:c.instructions+=5;goto B5ea2b3;
case 0x5ea2b9:c.instructions+=4;goto B5ea2b9;
case 0x5ea2bf:c.instructions+=3;goto B5ea2bf;
case 0x5ea2c1:c.instructions+=2;goto B5ea2c1;
case 0x5ea2c4:c.instructions+=1;goto B5ea2c4;
case 0x5ea2c6:goto L5ea2c6;
case 0x5ea2cc:c.instructions+=6;goto B5ea2cc;
case 0x5ea2d2:c.instructions+=5;goto B5ea2d2;
case 0x5ea2d8:c.instructions+=4;goto B5ea2d8;
case 0x5ea2de:c.instructions+=3;goto B5ea2de;
case 0x5ea2e0:c.instructions+=2;goto B5ea2e0;
case 0x5ea2e3:c.instructions+=1;goto B5ea2e3;
case 0x5ea2e5:goto L5ea2e5;
case 0x5ea2eb:c.instructions+=3;goto B5ea2eb;
case 0x5ea2ed:c.instructions+=2;goto B5ea2ed;
case 0x5ea2f7:c.instructions+=1;goto B5ea2f7;
case 0x5ea2f9:goto L5ea2f9;
case 0x5ea2ff:c.instructions+=2;goto B5ea2ff;
case 0x5ea300:c.instructions+=1;goto B5ea300;
case 0x5ea302:goto L5ea302;
case 0x5ea305:c.instructions+=2;goto B5ea305;
case 0x5ea30f:c.instructions+=1;goto B5ea30f;
case 0x5ea319:goto L5ea319;
case 0x5ea31a:c.instructions+=1;goto B5ea31a;
case 0x5ea320:goto L5ea320;
case 0x5ea325:c.instructions+=2;goto B5ea325;
case 0x5ea327:c.instructions+=1;goto B5ea327;
case 0x5ea329:goto L5ea329;
case 0x5ea32f:c.instructions+=4;goto B5ea32f;
case 0x5ea335:c.instructions+=3;goto B5ea335;
case 0x5ea337:c.instructions+=2;goto B5ea337;
case 0x5ea33a:c.instructions+=1;goto B5ea33a;
case 0x5ea33c:goto L5ea33c;
case 0x5ea341:c.instructions+=2;goto B5ea341;
case 0x5ea343:c.instructions+=1;goto B5ea343;
case 0x5ea345:goto L5ea345;
case 0x5ea34b:c.instructions+=2;goto B5ea34b;
case 0x5ea34d:c.instructions+=1;goto B5ea34d;
case 0x5ea34f:goto L5ea34f;
case 0x5ea354:c.instructions+=1;goto B5ea354;
case 0x5ea355:goto L5ea355;
case 0x5ea357:c.instructions+=1;goto B5ea357;
case 0x5ea360:goto L5ea360;
case 0x5ea363:c.instructions+=6;goto B5ea363;
case 0x5ea364:c.instructions+=5;goto B5ea364;
case 0x5ea366:c.instructions+=4;goto B5ea366;
case 0x5ea36c:c.instructions+=3;goto B5ea36c;
case 0x5ea36f:c.instructions+=2;goto B5ea36f;
case 0x5ea370:c.instructions+=1;goto B5ea370;
case 0x5ea372:goto L5ea372;
case 0x5ea374:c.instructions+=2;goto B5ea374;
case 0x5ea376:c.instructions+=1;goto B5ea376;
case 0x5ea37b:goto L5ea37b;
case 0x5ea37d:c.instructions+=1;goto B5ea37d;
case 0x5ea37f:goto L5ea37f;
case 0x5ea382:c.instructions+=3;goto B5ea382;
case 0x5ea384:c.instructions+=2;goto B5ea384;
case 0x5ea38a:c.instructions+=1;goto B5ea38a;
case 0x5ea38c:goto L5ea38c;
case 0x5ea38e:c.instructions+=3;goto B5ea38e;
case 0x5ea390:c.instructions+=2;goto B5ea390;
case 0x5ea391:c.instructions+=1;goto B5ea391;
case 0x5ea396:goto L5ea396;
case 0x5ea397:c.instructions+=1;goto B5ea397;
case 0x5ea39c:goto L5ea39c;
case 0x5ea3a0:c.instructions+=5;goto B5ea3a0;
case 0x5ea3a5:c.instructions+=4;goto B5ea3a5;
case 0x5ea3a7:c.instructions+=3;goto B5ea3a7;
case 0x5ea3aa:c.instructions+=2;goto B5ea3aa;
case 0x5ea3ac:c.instructions+=1;goto B5ea3ac;
case 0x5ea3b2:goto L5ea3b2;
case 0x5ea3b5:c.instructions+=2;goto B5ea3b5;
case 0x5ea3b7:c.instructions+=1;goto B5ea3b7;
case 0x5ea3bd:goto L5ea3bd;
case 0x5ea3c0:c.instructions+=2;goto B5ea3c0;
case 0x5ea3c2:c.instructions+=1;goto B5ea3c2;
case 0x5ea3c8:goto L5ea3c8;
case 0x5ea3cc:c.instructions+=7;goto B5ea3cc;
case 0x5ea3d2:c.instructions+=6;goto B5ea3d2;
case 0x5ea3d8:c.instructions+=5;goto B5ea3d8;
case 0x5ea3dc:c.instructions+=4;goto B5ea3dc;
case 0x5ea3e2:c.instructions+=3;goto B5ea3e2;
case 0x5ea3e4:c.instructions+=2;goto B5ea3e4;
case 0x5ea3e7:c.instructions+=1;goto B5ea3e7;
case 0x5ea3ed:goto L5ea3ed;
case 0x5ea3f1:c.instructions+=5;goto B5ea3f1;
case 0x5ea3f7:c.instructions+=4;goto B5ea3f7;
case 0x5ea3fb:c.instructions+=3;goto B5ea3fb;
case 0x5ea3fd:c.instructions+=2;goto B5ea3fd;
case 0x5ea400:c.instructions+=1;goto B5ea400;
case 0x5ea402:goto L5ea402;
case 0x5ea404:c.instructions+=1;goto B5ea404;
case 0x5ea40a:goto L5ea40a;
case 0x5ea40e:c.instructions+=5;goto B5ea40e;
case 0x5ea414:c.instructions+=4;goto B5ea414;
case 0x5ea41a:c.instructions+=3;goto B5ea41a;
case 0x5ea41c:c.instructions+=2;goto B5ea41c;
case 0x5ea41f:c.instructions+=1;goto B5ea41f;
case 0x5ea421:goto L5ea421;
case 0x5ea426:goto L5ea426;
case 0x5ea428:goto L5ea428;
case 0x5ea42d:goto L5ea42d;
case 0x5ea42e:c.instructions+=2;goto B5ea42e;
case 0x5ea42f:c.instructions+=1;goto B5ea42f;
case 0x5ea434:goto L5ea434;
case 0x5ea43a:c.instructions+=5;goto B5ea43a;
case 0x5ea43d:c.instructions+=4;goto B5ea43d;
case 0x5ea441:c.instructions+=3;goto B5ea441;
case 0x5ea443:c.instructions+=2;goto B5ea443;
case 0x5ea446:c.instructions+=1;goto B5ea446;
case 0x5ea448:goto L5ea448;
case 0x5ea44e:c.instructions+=4;goto B5ea44e;
case 0x5ea454:c.instructions+=3;goto B5ea454;
case 0x5ea456:c.instructions+=2;goto B5ea456;
case 0x5ea459:c.instructions+=1;goto B5ea459;
case 0x5ea45b:goto L5ea45b;
case 0x5ea461:c.instructions+=6;goto B5ea461;
case 0x5ea465:c.instructions+=5;goto B5ea465;
case 0x5ea46b:c.instructions+=4;goto B5ea46b;
case 0x5ea471:c.instructions+=3;goto B5ea471;
case 0x5ea473:c.instructions+=2;goto B5ea473;
case 0x5ea476:c.instructions+=1;goto B5ea476;
case 0x5ea478:goto L5ea478;
case 0x5ea47e:c.instructions+=4;goto B5ea47e;
case 0x5ea480:c.instructions+=3;goto B5ea480;
case 0x5ea48a:c.instructions+=2;goto B5ea48a;
case 0x5ea494:c.instructions+=1;goto B5ea494;
case 0x5ea496:goto L5ea496;
case 0x5ea49c:c.instructions+=2;goto B5ea49c;
case 0x5ea49d:c.instructions+=1;goto B5ea49d;
case 0x5ea49f:goto L5ea49f;
case 0x5ea4a2:c.instructions+=2;goto B5ea4a2;
case 0x5ea4ac:c.instructions+=1;goto B5ea4ac;
case 0x5ea4b6:goto L5ea4b6;
case 0x5ea4ba:c.instructions+=5;goto B5ea4ba;
case 0x5ea4bb:c.instructions+=4;goto B5ea4bb;
case 0x5ea4c1:c.instructions+=3;goto B5ea4c1;
case 0x5ea4c2:c.instructions+=2;goto B5ea4c2;
case 0x5ea4c5:c.instructions+=1;goto B5ea4c5;
case 0x5ea4c6:goto L5ea4c6;
case 0x5ea4cc:c.instructions+=1;goto B5ea4cc;
case 0x5ea4e0:goto L5ea4e0;
case 0x5ea4e4:c.instructions+=4;goto B5ea4e4;
case 0x5ea4ea:c.instructions+=3;goto B5ea4ea;
case 0x5ea4eb:c.instructions+=2;goto B5ea4eb;
case 0x5ea4ec:c.instructions+=1;goto B5ea4ec;
case 0x5ea4f1:goto L5ea4f1;
case 0x5ea4f4:c.instructions+=1;goto B5ea4f4;
case 0x5ea500:goto L5ea500;
case 0x5ea504:c.instructions+=4;goto B5ea504;
case 0x5ea50a:c.instructions+=3;goto B5ea50a;
case 0x5ea50b:c.instructions+=2;goto B5ea50b;
case 0x5ea50c:c.instructions+=1;goto B5ea50c;
case 0x5ea511:goto L5ea511;
case 0x5ea514:c.instructions+=1;goto B5ea514;
case 0x5ea520:goto L5ea520;
case 0x5ea526:c.instructions+=1;goto B5ea526;
case 0x5ea530:goto L5ea530;
case 0x5ea531:c.instructions+=7;goto B5ea531;
case 0x5ea532:c.instructions+=6;goto B5ea532;
case 0x5ea534:c.instructions+=5;goto B5ea534;
case 0x5ea537:c.instructions+=4;goto B5ea537;
case 0x5ea538:c.instructions+=3;goto B5ea538;
case 0x5ea53a:c.instructions+=2;goto B5ea53a;
case 0x5ea53c:c.instructions+=1;goto B5ea53c;
case 0x5ea542:goto L5ea542;
case 0x5ea547:c.instructions+=8;goto B5ea547;
case 0x5ea54a:c.instructions+=7;goto B5ea54a;
case 0x5ea54d:c.instructions+=6;goto B5ea54d;
case 0x5ea552:c.instructions+=5;goto B5ea552;
case 0x5ea553:c.instructions+=4;goto B5ea553;
case 0x5ea556:c.instructions+=3;goto B5ea556;
case 0x5ea55a:c.instructions+=2;goto B5ea55a;
case 0x5ea560:c.instructions+=1;goto B5ea560;
case 0x5ea562:goto L5ea562;
case 0x5ea565:c.instructions+=2;goto B5ea565;
case 0x5ea569:c.instructions+=1;goto B5ea569;
case 0x5ea56b:goto L5ea56b;
case 0x5ea56c:c.instructions+=1;goto B5ea56c;
case 0x5ea571:goto L5ea571;
case 0x5ea574:c.instructions+=7;goto B5ea574;
case 0x5ea576:c.instructions+=6;goto B5ea576;
case 0x5ea578:c.instructions+=5;goto B5ea578;
case 0x5ea57b:c.instructions+=4;goto B5ea57b;
case 0x5ea57c:c.instructions+=3;goto B5ea57c;
case 0x5ea57f:c.instructions+=2;goto B5ea57f;
case 0x5ea580:c.instructions+=1;goto B5ea580;
case 0x5ea585:goto L5ea585;
case 0x5ea58b:c.instructions+=4;goto B5ea58b;
case 0x5ea58e:c.instructions+=3;goto B5ea58e;
case 0x5ea590:c.instructions+=2;goto B5ea590;
case 0x5ea593:c.instructions+=1;goto B5ea593;
case 0x5ea595:goto L5ea595;
case 0x5ea599:goto L5ea599;
case 0x5ea59e:c.instructions+=5;goto B5ea59e;
case 0x5ea5a1:c.instructions+=4;goto B5ea5a1;
case 0x5ea5a2:c.instructions+=3;goto B5ea5a2;
case 0x5ea5a5:c.instructions+=2;goto B5ea5a5;
case 0x5ea5a7:c.instructions+=1;goto B5ea5a7;
case 0x5ea5a9:goto L5ea5a9;
case 0x5ea5aa:goto L5ea5aa;
case 0x5ea5ae:c.instructions+=8;goto B5ea5ae;
case 0x5ea5b3:c.instructions+=7;goto B5ea5b3;
case 0x5ea5b4:c.instructions+=6;goto B5ea5b4;
case 0x5ea5ba:c.instructions+=5;goto B5ea5ba;
case 0x5ea5c0:c.instructions+=4;goto B5ea5c0;
case 0x5ea5c6:c.instructions+=3;goto B5ea5c6;
case 0x5ea5cc:c.instructions+=2;goto B5ea5cc;
case 0x5ea5cf:c.instructions+=1;goto B5ea5cf;
case 0x5ea5d4:goto L5ea5d4;
case 0x5ea5d7:c.instructions+=3;goto B5ea5d7;
case 0x5ea5da:c.instructions+=2;goto B5ea5da;
case 0x5ea5db:c.instructions+=1;goto B5ea5db;
case 0x5ea5dd:goto L5ea5dd;
case 0x5ea5e0:c.instructions+=1;goto B5ea5e0;
case 0x5ea5e2:goto L5ea5e2;
case 0x5ea5e7:c.instructions+=2;goto B5ea5e7;
case 0x5ea5ea:c.instructions+=1;goto B5ea5ea;
case 0x5ea5ec:goto L5ea5ec;
case 0x5ea5f3:c.instructions+=1;goto B5ea5f3;
case 0x5ea5f5:goto L5ea5f5;
case 0x5ea5fb:c.instructions+=1;goto B5ea5fb;
case 0x5ea5fd:goto L5ea5fd;
case 0x5ea600:c.instructions+=1;goto B5ea600;
case 0x5ea602:goto L5ea602;
case 0x5ea609:c.instructions+=1;goto B5ea609;
case 0x5ea60b:goto L5ea60b;
case 0x5ea611:goto L5ea611;
case 0x5ea617:c.instructions+=1;goto B5ea617;
case 0x5ea61c:goto L5ea61c;
case 0x5ea61f:goto L5ea61f;
case 0x5ea622:c.instructions+=2;goto B5ea622;
case 0x5ea624:c.instructions+=1;goto B5ea624;
case 0x5ea626:goto L5ea626;
case 0x5ea627:c.instructions+=4;goto B5ea627;
case 0x5ea62a:c.instructions+=3;goto B5ea62a;
case 0x5ea62b:c.instructions+=2;goto B5ea62b;
case 0x5ea62e:c.instructions+=1;goto B5ea62e;
case 0x5ea633:goto L5ea633;
case 0x5ea634:c.instructions+=3;goto B5ea634;
case 0x5ea635:c.instructions+=2;goto B5ea635;
case 0x5ea636:c.instructions+=1;goto B5ea636;
case 0x5ea640:goto L5ea640;
case 0x5ea643:c.instructions+=3;goto B5ea643;
case 0x5ea649:c.instructions+=2;goto B5ea649;
case 0x5ea64f:c.instructions+=1;goto B5ea64f;
case 0x5ea650:goto L5ea650;
case 0x5ea655:c.instructions+=7;goto B5ea655;
case 0x5ea657:c.instructions+=6;goto B5ea657;
case 0x5ea658:c.instructions+=5;goto B5ea658;
case 0x5ea65a:c.instructions+=4;goto B5ea65a;
case 0x5ea65d:c.instructions+=3;goto B5ea65d;
case 0x5ea65e:c.instructions+=2;goto B5ea65e;
case 0x5ea660:c.instructions+=1;goto B5ea660;
case 0x5ea662:goto L5ea662;
case 0x5ea669:goto L5ea669;
case 0x5ea66e:c.instructions+=1;goto B5ea66e;
case 0x5ea670:goto L5ea670;
case 0x5ea675:c.instructions+=1;goto B5ea675;
case 0x5ea677:goto L5ea677;
case 0x5ea67a:c.instructions+=3;goto B5ea67a;
case 0x5ea67c:c.instructions+=2;goto B5ea67c;
case 0x5ea682:c.instructions+=1;goto B5ea682;
case 0x5ea684:goto L5ea684;
case 0x5ea687:c.instructions+=2;goto B5ea687;
case 0x5ea689:c.instructions+=1;goto B5ea689;
case 0x5ea68b:goto L5ea68b;
case 0x5ea68e:c.instructions+=2;goto B5ea68e;
case 0x5ea690:c.instructions+=1;goto B5ea690;
case 0x5ea692:goto L5ea692;
case 0x5ea694:goto L5ea694;
case 0x5ea699:c.instructions+=2;goto B5ea699;
case 0x5ea69b:c.instructions+=1;goto B5ea69b;
case 0x5ea69d:goto L5ea69d;
case 0x5ea6a4:c.instructions+=1;goto B5ea6a4;
case 0x5ea6aa:goto L5ea6aa;
case 0x5ea6af:goto L5ea6af;
case 0x5ea6b1:c.instructions+=1;goto B5ea6b1;
case 0x5ea6b3:goto L5ea6b3;
case 0x5ea6b5:c.instructions+=1;goto B5ea6b5;
case 0x5ea6ba:goto L5ea6ba;
case 0x5ea6bf:c.instructions+=1;goto B5ea6bf;
case 0x5ea6c4:goto L5ea6c4;
case 0x5ea6c6:c.instructions+=1;goto B5ea6c6;
case 0x5ea6c8:goto L5ea6c8;
case 0x5ea6cd:c.instructions+=1;goto B5ea6cd;
case 0x5ea6d2:goto L5ea6d2;
case 0x5ea6d7:goto L5ea6d7;
case 0x5ea6d9:c.instructions+=1;goto B5ea6d9;
case 0x5ea6db:goto L5ea6db;
case 0x5ea6dd:c.instructions+=1;goto B5ea6dd;
case 0x5ea6e2:goto L5ea6e2;
case 0x5ea6e7:c.instructions+=1;goto B5ea6e7;
case 0x5ea6ec:goto L5ea6ec;
case 0x5ea6ee:c.instructions+=1;goto B5ea6ee;
case 0x5ea6f4:goto L5ea6f4;
case 0x5ea6f7:c.instructions+=1;goto B5ea6f7;
case 0x5ea6fd:goto L5ea6fd;
case 0x5ea702:c.instructions+=1;goto B5ea702;
case 0x5ea707:goto L5ea707;
case 0x5ea70c:c.instructions+=2;goto B5ea70c;
case 0x5ea70e:c.instructions+=1;goto B5ea70e;
case 0x5ea710:goto L5ea710;
case 0x5ea715:goto L5ea715;
case 0x5ea717:c.instructions+=1;goto B5ea717;
case 0x5ea719:goto L5ea719;
case 0x5ea71e:c.instructions+=1;goto B5ea71e;
case 0x5ea723:goto L5ea723;
case 0x5ea725:c.instructions+=1;goto B5ea725;
case 0x5ea727:goto L5ea727;
case 0x5ea72c:c.instructions+=1;goto B5ea72c;
case 0x5ea72e:goto L5ea72e;
case 0x5ea733:c.instructions+=1;goto B5ea733;
case 0x5ea738:goto L5ea738;
case 0x5ea73a:c.instructions+=5;goto B5ea73a;
case 0x5ea73c:c.instructions+=4;goto B5ea73c;
case 0x5ea73f:c.instructions+=3;goto B5ea73f;
case 0x5ea740:c.instructions+=2;goto B5ea740;
case 0x5ea742:c.instructions+=1;goto B5ea742;
case 0x5ea744:goto L5ea744;
case 0x5ea74a:c.instructions+=4;goto B5ea74a;
case 0x5ea750:c.instructions+=3;goto B5ea750;
case 0x5ea752:c.instructions+=2;goto B5ea752;
case 0x5ea755:c.instructions+=1;goto B5ea755;
case 0x5ea757:goto L5ea757;
case 0x5ea75c:c.instructions+=2;goto B5ea75c;
case 0x5ea75e:c.instructions+=1;goto B5ea75e;
case 0x5ea760:goto L5ea760;
case 0x5ea763:c.instructions+=1;goto B5ea763;
case 0x5ea765:goto L5ea765;
case 0x5ea76a:goto L5ea76a;
case 0x5ea76d:c.instructions+=2;goto B5ea76d;
case 0x5ea76f:c.instructions+=1;goto B5ea76f;
case 0x5ea771:goto L5ea771;
case 0x5ea776:goto L5ea776;
case 0x5ea779:c.instructions+=3;goto B5ea779;
case 0x5ea77f:c.instructions+=2;goto B5ea77f;
case 0x5ea781:c.instructions+=1;goto B5ea781;
case 0x5ea783:goto L5ea783;
case 0x5ea788:goto L5ea788;
case 0x5ea78e:c.instructions+=1;goto B5ea78e;
case 0x5ea790:goto L5ea790;
case 0x5ea791:c.instructions+=2;goto B5ea791;
case 0x5ea793:c.instructions+=1;goto B5ea793;
case 0x5ea798:goto L5ea798;
case 0x5ea799:c.instructions+=2;goto B5ea799;
case 0x5ea79a:c.instructions+=1;goto B5ea79a;
case 0x5ea7c0:goto L5ea7c0;
case 0x5ea7c6:c.instructions+=2;goto B5ea7c6;
case 0x5ea7c8:c.instructions+=1;goto B5ea7c8;
case 0x5ea7ca:goto L5ea7ca;
case 0x5ea7ce:c.instructions+=1;goto B5ea7ce;
case 0x5ea7d0:goto L5ea7d0;
case 0x5ea7d3:c.instructions+=2;goto B5ea7d3;
case 0x5ea7d5:c.instructions+=1;goto B5ea7d5;
case 0x5ea7d7:goto L5ea7d7;
case 0x5ea7da:c.instructions+=4;goto B5ea7da;
case 0x5ea7dd:c.instructions+=3;goto B5ea7dd;
case 0x5ea7e4:c.instructions+=2;goto B5ea7e4;
case 0x5ea7e5:c.instructions+=1;goto B5ea7e5;
case 0x5ea7ea:goto L5ea7ea;
case 0x5ea7ed:c.instructions+=5;goto B5ea7ed;
case 0x5ea7f0:c.instructions+=4;goto B5ea7f0;
case 0x5ea7f2:c.instructions+=3;goto B5ea7f2;
case 0x5ea7f4:c.instructions+=2;goto B5ea7f4;
case 0x5ea7f5:c.instructions+=1;goto B5ea7f5;
case 0x5ea7f6:goto L5ea7f6;
case 0x5ea7f8:c.instructions+=1;goto B5ea7f8;
case 0x5ea800:goto L5ea800;
case 0x5ea803:c.instructions+=17;goto B5ea803;
case 0x5ea804:c.instructions+=16;goto B5ea804;
case 0x5ea808:c.instructions+=15;goto B5ea808;
case 0x5ea809:c.instructions+=14;goto B5ea809;
case 0x5ea80e:c.instructions+=13;goto B5ea80e;
case 0x5ea814:c.instructions+=12;goto B5ea814;
case 0x5ea815:c.instructions+=11;goto B5ea815;
case 0x5ea81a:c.instructions+=10;goto B5ea81a;
case 0x5ea822:c.instructions+=9;goto B5ea822;
case 0x5ea82a:c.instructions+=8;goto B5ea82a;
case 0x5ea82e:c.instructions+=7;goto B5ea82e;
case 0x5ea832:c.instructions+=6;goto B5ea832;
case 0x5ea83a:c.instructions+=5;goto B5ea83a;
case 0x5ea83e:c.instructions+=4;goto B5ea83e;
case 0x5ea842:c.instructions+=3;goto B5ea842;
case 0x5ea846:c.instructions+=2;goto B5ea846;
case 0x5ea84b:c.instructions+=1;goto B5ea84b;
case 0x5ea84d:goto L5ea84d;
case 0x5ea851:c.instructions+=1;goto B5ea851;
case 0x5ea853:goto L5ea853;
case 0x5ea855:c.instructions+=3;goto B5ea855;
case 0x5ea857:c.instructions+=2;goto B5ea857;
case 0x5ea859:c.instructions+=1;goto B5ea859;
case 0x5ea85b:goto L5ea85b;
case 0x5ea860:goto L5ea860;
case 0x5ea863:c.instructions+=1;goto B5ea863;
case 0x5ea865:goto L5ea865;
case 0x5ea867:goto L5ea867;
case 0x5ea868:c.instructions+=2;goto B5ea868;
case 0x5ea86a:c.instructions+=1;goto B5ea86a;
case 0x5ea86c:goto L5ea86c;
case 0x5ea870:c.instructions+=1;goto B5ea870;
case 0x5ea872:goto L5ea872;
case 0x5ea875:goto L5ea875;
case 0x5ea877:c.instructions+=1;goto B5ea877;
case 0x5ea879:goto L5ea879;
case 0x5ea87b:c.instructions+=7;goto B5ea87b;
case 0x5ea87e:c.instructions+=6;goto B5ea87e;
case 0x5ea87f:c.instructions+=5;goto B5ea87f;
case 0x5ea880:c.instructions+=4;goto B5ea880;
case 0x5ea883:c.instructions+=3;goto B5ea883;
case 0x5ea884:c.instructions+=2;goto B5ea884;
case 0x5ea887:c.instructions+=1;goto B5ea887;
case 0x5ea88a:goto L5ea88a;
case 0x5ea88d:c.instructions+=6;goto B5ea88d;
case 0x5ea88e:c.instructions+=5;goto B5ea88e;
case 0x5ea88f:c.instructions+=4;goto B5ea88f;
case 0x5ea892:c.instructions+=3;goto B5ea892;
case 0x5ea893:c.instructions+=2;goto B5ea893;
case 0x5ea896:c.instructions+=1;goto B5ea896;
case 0x5ea8a0:goto L5ea8a0;
case 0x5ea8a6:c.instructions+=4;goto B5ea8a6;
case 0x5ea8a8:c.instructions+=3;goto B5ea8a8;
case 0x5ea8aa:c.instructions+=2;goto B5ea8aa;
case 0x5ea8ad:c.instructions+=1;goto B5ea8ad;
case 0x5ea8b0:goto L5ea8b0;
case 0x5ea8b6:c.instructions+=4;goto B5ea8b6;
case 0x5ea8b8:c.instructions+=3;goto B5ea8b8;
case 0x5ea8bb:c.instructions+=2;goto B5ea8bb;
case 0x5ea8be:c.instructions+=1;goto B5ea8be;
case 0x5ea8c0:goto L5ea8c0;
case 0x5ea8c3:c.instructions+=8;goto B5ea8c3;
case 0x5ea8c4:c.instructions+=7;goto B5ea8c4;
case 0x5ea8c7:c.instructions+=6;goto B5ea8c7;
case 0x5ea8ce:c.instructions+=5;goto B5ea8ce;
case 0x5ea8d0:c.instructions+=4;goto B5ea8d0;
case 0x5ea8d2:c.instructions+=3;goto B5ea8d2;
case 0x5ea8d4:c.instructions+=2;goto B5ea8d4;
case 0x5ea8d5:c.instructions+=1;goto B5ea8d5;
case 0x5ea8d7:goto L5ea8d7;
case 0x5ea8dc:goto L5ea8dc;
case 0x5ea8e0:goto L5ea8e0;
case 0x5ea8e1:c.instructions+=6;goto B5ea8e1;
case 0x5ea8e2:c.instructions+=5;goto B5ea8e2;
case 0x5ea8e8:c.instructions+=4;goto B5ea8e8;
case 0x5ea8ea:c.instructions+=3;goto B5ea8ea;
case 0x5ea8ec:c.instructions+=2;goto B5ea8ec;
case 0x5ea8ee:c.instructions+=1;goto B5ea8ee;
case 0x5ea8f0:goto L5ea8f0;
case 0x5ea8f6:c.instructions+=2;goto B5ea8f6;
case 0x5ea8f8:c.instructions+=1;goto B5ea8f8;
case 0x5ea8fa:goto L5ea8fa;
case 0x5ea8fc:goto L5ea8fc;
case 0x5ea902:c.instructions+=2;goto B5ea902;
case 0x5ea904:c.instructions+=1;goto B5ea904;
case 0x5ea906:goto L5ea906;
case 0x5ea90b:c.instructions+=1;goto B5ea90b;
case 0x5ea90d:goto L5ea90d;
case 0x5ea914:c.instructions+=1;goto B5ea914;
case 0x5ea916:goto L5ea916;
case 0x5ea91a:c.instructions+=1;goto B5ea91a;
case 0x5ea91c:goto L5ea91c;
case 0x5ea91f:goto L5ea91f;
case 0x5ea921:c.instructions+=3;goto B5ea921;
case 0x5ea922:c.instructions+=2;goto B5ea922;
case 0x5ea923:c.instructions+=1;goto B5ea923;
case 0x5ea925:goto L5ea925;
case 0x5ea928:goto L5ea928;
case 0x5ea930:goto L5ea930;
case 0x5ea936:c.instructions+=2;goto B5ea936;
case 0x5ea938:c.instructions+=1;goto B5ea938;
case 0x5ea93a:goto L5ea93a;
case 0x5ea93d:c.instructions+=2;goto B5ea93d;
case 0x5ea93f:c.instructions+=1;goto B5ea93f;
case 0x5ea941:goto L5ea941;
case 0x5ea944:c.instructions+=2;goto B5ea944;
case 0x5ea947:c.instructions+=1;goto B5ea947;
case 0x5ea949:goto L5ea949;
case 0x5ea94c:c.instructions+=2;goto B5ea94c;
case 0x5ea94f:c.instructions+=1;goto B5ea94f;
case 0x5ea951:goto L5ea951;
case 0x5ea954:c.instructions+=1;goto B5ea954;
case 0x5ea956:goto L5ea956;
case 0x5ea959:c.instructions+=1;goto B5ea959;
case 0x5ea95b:goto L5ea95b;
case 0x5ea960:c.instructions+=1;goto B5ea960;
case 0x5ea961:goto L5ea961;
case 0x5ea966:c.instructions+=2;goto B5ea966;
case 0x5ea968:c.instructions+=1;goto B5ea968;
case 0x5ea96a:goto L5ea96a;
case 0x5ea971:goto L5ea971;
case 0x5ea973:c.instructions+=1;goto B5ea973;
case 0x5ea980:goto L5ea980;
case 0x5ea981:c.instructions+=4;goto B5ea981;
case 0x5ea983:c.instructions+=3;goto B5ea983;
case 0x5ea989:c.instructions+=2;goto B5ea989;
case 0x5ea98b:c.instructions+=1;goto B5ea98b;
case 0x5ea98d:goto L5ea98d;
case 0x5ea992:goto L5ea992;
case 0x5ea999:c.instructions+=2;goto B5ea999;
case 0x5ea99a:c.instructions+=1;goto B5ea99a;
case 0x5ea9a0:goto L5ea9a0;
case 0x5ea9a1:c.instructions+=3;goto B5ea9a1;
case 0x5ea9a7:c.instructions+=2;goto B5ea9a7;
case 0x5ea9a9:c.instructions+=1;goto B5ea9a9;
case 0x5ea9af:goto L5ea9af;
case 0x5ea9b5:c.instructions+=8;goto B5ea9b5;
case 0x5ea9b7:c.instructions+=7;goto B5ea9b7;
case 0x5ea9b9:c.instructions+=6;goto B5ea9b9;
case 0x5ea9bf:c.instructions+=5;goto B5ea9bf;
case 0x5ea9c3:c.instructions+=4;goto B5ea9c3;
case 0x5ea9c5:c.instructions+=3;goto B5ea9c5;
case 0x5ea9c7:c.instructions+=2;goto B5ea9c7;
case 0x5ea9ca:c.instructions+=1;goto B5ea9ca;
case 0x5ea9cc:goto L5ea9cc;
case 0x5ea9ce:c.instructions+=1;goto B5ea9ce;
case 0x5ea9d2:goto L5ea9d2;
case 0x5ea9d8:c.instructions+=4;goto B5ea9d8;
case 0x5ea9da:c.instructions+=3;goto B5ea9da;
case 0x5ea9dc:c.instructions+=2;goto B5ea9dc;
case 0x5ea9df:c.instructions+=1;goto B5ea9df;
case 0x5ea9e1:goto L5ea9e1;
case 0x5ea9e3:c.instructions+=1;goto B5ea9e3;
case 0x5ea9e9:goto L5ea9e9;
case 0x5ea9ef:c.instructions+=3;goto B5ea9ef;
case 0x5ea9f1:c.instructions+=2;goto B5ea9f1;
case 0x5ea9f4:c.instructions+=1;goto B5ea9f4;
case 0x5ea9f6:goto L5ea9f6;
case 0x5ea9fc:c.instructions+=5;goto B5ea9fc;
case 0x5eaa00:c.instructions+=4;goto B5eaa00;
case 0x5eaa02:c.instructions+=3;goto B5eaa02;
case 0x5eaa04:c.instructions+=2;goto B5eaa04;
case 0x5eaa07:c.instructions+=1;goto B5eaa07;
case 0x5eaa09:goto L5eaa09;
case 0x5eaa0b:c.instructions+=1;goto B5eaa0b;
case 0x5eaa0f:goto L5eaa0f;
case 0x5eaa15:c.instructions+=4;goto B5eaa15;
case 0x5eaa17:c.instructions+=3;goto B5eaa17;
case 0x5eaa19:c.instructions+=2;goto B5eaa19;
case 0x5eaa1c:c.instructions+=1;goto B5eaa1c;
case 0x5eaa1e:goto L5eaa1e;
case 0x5eaa20:c.instructions+=1;goto B5eaa20;
case 0x5eaa26:goto L5eaa26;
case 0x5eaa2c:c.instructions+=3;goto B5eaa2c;
case 0x5eaa2e:c.instructions+=2;goto B5eaa2e;
case 0x5eaa31:c.instructions+=1;goto B5eaa31;
case 0x5eaa33:goto L5eaa33;
case 0x5eaa38:c.instructions+=2;goto B5eaa38;
case 0x5eaa39:c.instructions+=1;goto B5eaa39;
case 0x5eaa3a:goto L5eaa3a;
case 0x5eaa3c:goto L5eaa3c;
case 0x5eaa3e:c.instructions+=2;goto B5eaa3e;
case 0x5eaa3f:c.instructions+=1;goto B5eaa3f;
case 0x5eaa40:goto L5eaa40;
case 0x5eaa41:c.instructions+=15;goto B5eaa41;
case 0x5eaa43:c.instructions+=14;goto B5eaa43;
case 0x5eaa46:c.instructions+=13;goto B5eaa46;
case 0x5eaa49:c.instructions+=12;goto B5eaa49;
case 0x5eaa4f:c.instructions+=11;goto B5eaa4f;
case 0x5eaa55:c.instructions+=10;goto B5eaa55;
case 0x5eaa58:c.instructions+=9;goto B5eaa58;
case 0x5eaa5b:c.instructions+=8;goto B5eaa5b;
case 0x5eaa5c:c.instructions+=7;goto B5eaa5c;
case 0x5eaa5d:c.instructions+=6;goto B5eaa5d;
case 0x5eaa5f:c.instructions+=5;goto B5eaa5f;
case 0x5eaa61:c.instructions+=4;goto B5eaa61;
case 0x5eaa63:c.instructions+=3;goto B5eaa63;
case 0x5eaa64:c.instructions+=2;goto B5eaa64;
case 0x5eaa68:c.instructions+=1;goto B5eaa68;
case 0x5eaa6e:goto L5eaa6e;
case 0x5eaa74:c.instructions+=10;goto B5eaa74;
case 0x5eaa77:c.instructions+=9;goto B5eaa77;
case 0x5eaa7d:c.instructions+=8;goto B5eaa7d;
case 0x5eaa80:c.instructions+=7;goto B5eaa80;
case 0x5eaa84:c.instructions+=6;goto B5eaa84;
case 0x5eaa86:c.instructions+=5;goto B5eaa86;
case 0x5eaa8a:c.instructions+=4;goto B5eaa8a;
case 0x5eaa90:c.instructions+=3;goto B5eaa90;
case 0x5eaa96:c.instructions+=2;goto B5eaa96;
case 0x5eaa9a:c.instructions+=1;goto B5eaa9a;
case 0x5eaaa0:goto L5eaaa0;
case 0x5eaaa2:c.instructions+=38;goto B5eaaa2;
case 0x5eaaa5:c.instructions+=37;goto B5eaaa5;
case 0x5eaaa7:c.instructions+=36;goto B5eaaa7;
case 0x5eaaaa:c.instructions+=35;goto B5eaaaa;
case 0x5eaaad:c.instructions+=34;goto B5eaaad;
case 0x5eaab0:c.instructions+=33;goto B5eaab0;
case 0x5eaab3:c.instructions+=32;goto B5eaab3;
case 0x5eaab5:c.instructions+=31;goto B5eaab5;
case 0x5eaab7:c.instructions+=30;goto B5eaab7;
case 0x5eaab9:c.instructions+=29;goto B5eaab9;
case 0x5eaabb:c.instructions+=28;goto B5eaabb;
case 0x5eaabd:c.instructions+=27;goto B5eaabd;
case 0x5eaabf:c.instructions+=26;goto B5eaabf;
case 0x5eaac1:c.instructions+=25;goto B5eaac1;
case 0x5eaac3:c.instructions+=24;goto B5eaac3;
case 0x5eaac5:c.instructions+=23;goto B5eaac5;
case 0x5eaac9:c.instructions+=22;goto B5eaac9;
case 0x5eaacb:c.instructions+=21;goto B5eaacb;
case 0x5eaacd:c.instructions+=20;goto B5eaacd;
case 0x5eaacf:c.instructions+=19;goto B5eaacf;
case 0x5eaad2:c.instructions+=18;goto B5eaad2;
case 0x5eaad4:c.instructions+=17;goto B5eaad4;
case 0x5eaad7:c.instructions+=16;goto B5eaad7;
case 0x5eaad9:c.instructions+=15;goto B5eaad9;
case 0x5eaadd:c.instructions+=14;goto B5eaadd;
case 0x5eaae1:c.instructions+=13;goto B5eaae1;
case 0x5eaae5:c.instructions+=12;goto B5eaae5;
case 0x5eaae9:c.instructions+=11;goto B5eaae9;
case 0x5eaaed:c.instructions+=10;goto B5eaaed;
case 0x5eaaf1:c.instructions+=9;goto B5eaaf1;
case 0x5eaaf5:c.instructions+=8;goto B5eaaf5;
case 0x5eaaf7:c.instructions+=7;goto B5eaaf7;
case 0x5eaaf9:c.instructions+=6;goto B5eaaf9;
case 0x5eaafd:c.instructions+=5;goto B5eaafd;
case 0x5eab01:c.instructions+=4;goto B5eab01;
case 0x5eab07:c.instructions+=3;goto B5eab07;
case 0x5eab09:c.instructions+=2;goto B5eab09;
case 0x5eab0c:c.instructions+=1;goto B5eab0c;
case 0x5eab0e:goto L5eab0e;
case 0x5eab10:c.instructions+=5;goto B5eab10;
case 0x5eab16:c.instructions+=4;goto B5eab16;
case 0x5eab18:c.instructions+=3;goto B5eab18;
case 0x5eab1a:c.instructions+=2;goto B5eab1a;
case 0x5eab1d:c.instructions+=1;goto B5eab1d;
case 0x5eab1f:goto L5eab1f;
case 0x5eab21:c.instructions+=1;goto B5eab21;
case 0x5eab27:goto L5eab27;
case 0x5eab29:c.instructions+=5;goto B5eab29;
case 0x5eab2b:c.instructions+=4;goto B5eab2b;
case 0x5eab2d:c.instructions+=3;goto B5eab2d;
case 0x5eab2f:c.instructions+=2;goto B5eab2f;
case 0x5eab32:c.instructions+=1;goto B5eab32;
case 0x5eab34:goto L5eab34;
case 0x5eab38:c.instructions+=4;goto B5eab38;
case 0x5eab3e:c.instructions+=3;goto B5eab3e;
case 0x5eab40:c.instructions+=2;goto B5eab40;
case 0x5eab43:c.instructions+=1;goto B5eab43;
case 0x5eab45:goto L5eab45;
case 0x5eab49:c.instructions+=3;goto B5eab49;
case 0x5eab4b:c.instructions+=2;goto B5eab4b;
case 0x5eab4e:c.instructions+=1;goto B5eab4e;
case 0x5eab50:goto L5eab50;
case 0x5eab52:c.instructions+=2;goto B5eab52;
case 0x5eab56:c.instructions+=1;goto B5eab56;
case 0x5eab5a:goto L5eab5a;
case 0x5eab5d:c.instructions+=2;goto B5eab5d;
case 0x5eab5e:c.instructions+=1;goto B5eab5e;
case 0x5eab64:goto L5eab64;
case 0x5eab68:c.instructions+=7;goto B5eab68;
case 0x5eab6a:c.instructions+=6;goto B5eab6a;
case 0x5eab6b:c.instructions+=5;goto B5eab6b;
case 0x5eab6c:c.instructions+=4;goto B5eab6c;
case 0x5eab6d:c.instructions+=3;goto B5eab6d;
case 0x5eab6f:c.instructions+=2;goto B5eab6f;
case 0x5eab70:c.instructions+=1;goto B5eab70;
case 0x5eab73:goto L5eab73;
case 0x5eab79:c.instructions+=1;goto B5eab79;
case 0x5eab7b:goto L5eab7b;
case 0x5eab7c:c.instructions+=7;goto B5eab7c;
case 0x5eab7e:c.instructions+=6;goto B5eab7e;
case 0x5eab80:c.instructions+=5;goto B5eab80;
case 0x5eab81:c.instructions+=4;goto B5eab81;
case 0x5eab82:c.instructions+=3;goto B5eab82;
case 0x5eab84:c.instructions+=2;goto B5eab84;
case 0x5eab85:c.instructions+=1;goto B5eab85;
case 0x5eab90:goto L5eab90;
case 0x5eab91:c.instructions+=11;goto B5eab91;
case 0x5eab93:c.instructions+=10;goto B5eab93;
case 0x5eab96:c.instructions+=9;goto B5eab96;
case 0x5eab99:c.instructions+=8;goto B5eab99;
case 0x5eab9c:c.instructions+=7;goto B5eab9c;
case 0x5eab9f:c.instructions+=6;goto B5eab9f;
case 0x5eaba0:c.instructions+=5;goto B5eaba0;
case 0x5eaba1:c.instructions+=4;goto B5eaba1;
case 0x5eaba2:c.instructions+=3;goto B5eaba2;
case 0x5eaba6:c.instructions+=2;goto B5eaba6;
case 0x5eaba7:c.instructions+=1;goto B5eaba7;
case 0x5eabac:goto L5eabac;
case 0x5eabb2:c.instructions+=5;goto B5eabb2;
case 0x5eabb6:c.instructions+=4;goto B5eabb6;
case 0x5eabb9:c.instructions+=3;goto B5eabb9;
case 0x5eabbb:c.instructions+=2;goto B5eabbb;
case 0x5eabbe:c.instructions+=1;goto B5eabbe;
case 0x5eabc0:goto L5eabc0;
case 0x5eabc3:c.instructions+=6;goto B5eabc3;
case 0x5eabc9:c.instructions+=5;goto B5eabc9;
case 0x5eabd0:c.instructions+=4;goto B5eabd0;
case 0x5eabd1:c.instructions+=3;goto B5eabd1;
case 0x5eabd3:c.instructions+=2;goto B5eabd3;
case 0x5eabd4:c.instructions+=1;goto B5eabd4;
case 0x5eabd5:goto L5eabd5;
case 0x5eabd9:c.instructions+=14;goto B5eabd9;
case 0x5eabdb:c.instructions+=13;goto B5eabdb;
case 0x5eabdd:c.instructions+=12;goto B5eabdd;
case 0x5eabe1:c.instructions+=11;goto B5eabe1;
case 0x5eabe5:c.instructions+=10;goto B5eabe5;
case 0x5eabeb:c.instructions+=9;goto B5eabeb;
case 0x5eabee:c.instructions+=8;goto B5eabee;
case 0x5eabf2:c.instructions+=7;goto B5eabf2;
case 0x5eabf3:c.instructions+=6;goto B5eabf3;
case 0x5eabf7:c.instructions+=5;goto B5eabf7;
case 0x5eabf9:c.instructions+=4;goto B5eabf9;
case 0x5eabfd:c.instructions+=3;goto B5eabfd;
case 0x5eac01:c.instructions+=2;goto B5eac01;
case 0x5eac05:c.instructions+=1;goto B5eac05;
case 0x5eac0a:goto L5eac0a;
case 0x5eac0b:c.instructions+=2;goto B5eac0b;
case 0x5eac0f:c.instructions+=1;goto B5eac0f;
case 0x5eac14:goto L5eac14;
case 0x5eac18:c.instructions+=3;goto B5eac18;
case 0x5eac1b:c.instructions+=2;goto B5eac1b;
case 0x5eac1f:c.instructions+=1;goto B5eac1f;
case 0x5eac24:goto L5eac24;
case 0x5eac28:c.instructions+=4;goto B5eac28;
case 0x5eac2c:c.instructions+=3;goto B5eac2c;
case 0x5eac30:c.instructions+=2;goto B5eac30;
case 0x5eac34:c.instructions+=1;goto B5eac34;
case 0x5eac39:goto L5eac39;
case 0x5eac3d:c.instructions+=14;goto B5eac3d;
case 0x5eac41:c.instructions+=13;goto B5eac41;
case 0x5eac44:c.instructions+=12;goto B5eac44;
case 0x5eac45:c.instructions+=11;goto B5eac45;
case 0x5eac49:c.instructions+=10;goto B5eac49;
case 0x5eac4d:c.instructions+=9;goto B5eac4d;
case 0x5eac51:c.instructions+=8;goto B5eac51;
case 0x5eac53:c.instructions+=7;goto B5eac53;
case 0x5eac57:c.instructions+=6;goto B5eac57;
case 0x5eac59:c.instructions+=5;goto B5eac59;
case 0x5eac5c:c.instructions+=4;goto B5eac5c;
case 0x5eac5e:c.instructions+=3;goto B5eac5e;
case 0x5eac60:c.instructions+=2;goto B5eac60;
case 0x5eac61:c.instructions+=1;goto B5eac61;
case 0x5eac70:goto L5eac70;
case 0x5eac76:c.instructions+=3;goto B5eac76;
case 0x5eac78:c.instructions+=2;goto B5eac78;
case 0x5eac7b:c.instructions+=1;goto B5eac7b;
case 0x5eac7d:goto L5eac7d;
case 0x5eac83:c.instructions+=3;goto B5eac83;
case 0x5eac89:c.instructions+=2;goto B5eac89;
case 0x5eac8b:c.instructions+=1;goto B5eac8b;
case 0x5eac8d:goto L5eac8d;
case 0x5eac8f:goto L5eac8f;
case 0x5eac90:goto L5eac90;
case 0x5eac91:c.instructions+=11;goto B5eac91;
case 0x5eac93:c.instructions+=10;goto B5eac93;
case 0x5eac96:c.instructions+=9;goto B5eac96;
case 0x5eac9c:c.instructions+=8;goto B5eac9c;
case 0x5eaca2:c.instructions+=7;goto B5eaca2;
case 0x5eaca3:c.instructions+=6;goto B5eaca3;
case 0x5eaca4:c.instructions+=5;goto B5eaca4;
case 0x5eacaa:c.instructions+=4;goto B5eacaa;
case 0x5eacad:c.instructions+=3;goto B5eacad;
case 0x5eacaf:c.instructions+=2;goto B5eacaf;
case 0x5eacb0:c.instructions+=1;goto B5eacb0;
case 0x5eacb2:goto L5eacb2;
case 0x5eacb7:c.instructions+=5;goto B5eacb7;
case 0x5eacba:c.instructions+=4;goto B5eacba;
case 0x5eacc4:c.instructions+=3;goto B5eacc4;
case 0x5eacc9:c.instructions+=2;goto B5eacc9;
case 0x5eaccb:c.instructions+=1;goto B5eaccb;
case 0x5eaccd:goto L5eaccd;
case 0x5eacd2:goto L5eacd2;
case 0x5eacd5:c.instructions+=2;goto B5eacd5;
case 0x5eacd7:c.instructions+=1;goto B5eacd7;
case 0x5eacdd:goto L5eacdd;
case 0x5eacdf:c.instructions+=1;goto B5eacdf;
case 0x5eace5:goto L5eace5;
case 0x5eaceb:c.instructions+=5;goto B5eaceb;
case 0x5eacee:c.instructions+=4;goto B5eacee;
case 0x5eacf2:c.instructions+=3;goto B5eacf2;
case 0x5eacf3:c.instructions+=2;goto B5eacf3;
case 0x5eacf4:c.instructions+=1;goto B5eacf4;
case 0x5eacf9:goto L5eacf9;
case 0x5eacff:c.instructions+=7;goto B5eacff;
case 0x5ead01:c.instructions+=6;goto B5ead01;
case 0x5ead08:c.instructions+=5;goto B5ead08;
case 0x5ead0b:c.instructions+=4;goto B5ead0b;
case 0x5ead0e:c.instructions+=3;goto B5ead0e;
case 0x5ead11:c.instructions+=2;goto B5ead11;
case 0x5ead15:c.instructions+=1;goto B5ead15;
case 0x5ead17:goto L5ead17;
case 0x5ead1e:c.instructions+=1;goto B5ead1e;
case 0x5ead20:goto L5ead20;
case 0x5ead25:c.instructions+=1;goto B5ead25;
case 0x5ead29:goto L5ead29;
case 0x5ead2a:c.instructions+=1;goto B5ead2a;
case 0x5ead2f:goto L5ead2f;
case 0x5ead35:c.instructions+=6;goto B5ead35;
case 0x5ead3a:c.instructions+=5;goto B5ead3a;
case 0x5ead3e:c.instructions+=4;goto B5ead3e;
case 0x5ead42:c.instructions+=3;goto B5ead42;
case 0x5ead46:c.instructions+=2;goto B5ead46;
case 0x5ead4c:c.instructions+=1;goto B5ead4c;
case 0x5ead51:goto L5ead51;
case 0x5ead55:c.instructions+=6;goto B5ead55;
case 0x5ead57:c.instructions+=5;goto B5ead57;
case 0x5ead58:c.instructions+=4;goto B5ead58;
case 0x5ead5c:c.instructions+=3;goto B5ead5c;
case 0x5ead5d:c.instructions+=2;goto B5ead5d;
case 0x5ead5e:c.instructions+=1;goto B5ead5e;
case 0x5ead63:goto L5ead63;
case 0x5ead67:c.instructions+=13;goto B5ead67;
case 0x5ead6b:c.instructions+=12;goto B5ead6b;
case 0x5ead6f:c.instructions+=11;goto B5ead6f;
case 0x5ead70:c.instructions+=10;goto B5ead70;
case 0x5ead77:c.instructions+=9;goto B5ead77;
case 0x5ead7b:c.instructions+=8;goto B5ead7b;
case 0x5ead7f:c.instructions+=7;goto B5ead7f;
case 0x5ead80:c.instructions+=6;goto B5ead80;
case 0x5ead84:c.instructions+=5;goto B5ead84;
case 0x5ead88:c.instructions+=4;goto B5ead88;
case 0x5ead89:c.instructions+=3;goto B5ead89;
case 0x5ead91:c.instructions+=2;goto B5ead91;
case 0x5ead95:c.instructions+=1;goto B5ead95;
case 0x5ead9a:goto L5ead9a;
case 0x5ead9e:c.instructions+=14;goto B5ead9e;
case 0x5eada1:c.instructions+=13;goto B5eada1;
case 0x5eada3:c.instructions+=12;goto B5eada3;
case 0x5eada7:c.instructions+=11;goto B5eada7;
case 0x5eada8:c.instructions+=10;goto B5eada8;
case 0x5eadac:c.instructions+=9;goto B5eadac;
case 0x5eadaf:c.instructions+=8;goto B5eadaf;
case 0x5eadb3:c.instructions+=7;goto B5eadb3;
case 0x5eadb7:c.instructions+=6;goto B5eadb7;
case 0x5eadba:c.instructions+=5;goto B5eadba;
case 0x5eadbe:c.instructions+=4;goto B5eadbe;
case 0x5eadc2:c.instructions+=3;goto B5eadc2;
case 0x5eadc3:c.instructions+=2;goto B5eadc3;
case 0x5eadc7:c.instructions+=1;goto B5eadc7;
case 0x5eadcc:goto L5eadcc;
case 0x5eadd0:c.instructions+=9;goto B5eadd0;
case 0x5eadd1:c.instructions+=8;goto B5eadd1;
case 0x5eadd5:c.instructions+=7;goto B5eadd5;
case 0x5eadd6:c.instructions+=6;goto B5eadd6;
case 0x5eaddd:c.instructions+=5;goto B5eaddd;
case 0x5eadde:c.instructions+=4;goto B5eadde;
case 0x5eade6:c.instructions+=3;goto B5eade6;
case 0x5eadee:c.instructions+=2;goto B5eadee;
case 0x5eadf6:c.instructions+=1;goto B5eadf6;
case 0x5eadfb:goto L5eadfb;
case 0x5eae02:c.instructions+=4;goto B5eae02;
case 0x5eae03:c.instructions+=3;goto B5eae03;
case 0x5eae0a:c.instructions+=2;goto B5eae0a;
case 0x5eae0b:c.instructions+=1;goto B5eae0b;
case 0x5eae10:goto L5eae10;
case 0x5eae17:c.instructions+=6;goto B5eae17;
case 0x5eae18:c.instructions+=5;goto B5eae18;
case 0x5eae1c:c.instructions+=4;goto B5eae1c;
case 0x5eae1d:c.instructions+=3;goto B5eae1d;
case 0x5eae21:c.instructions+=2;goto B5eae21;
case 0x5eae22:c.instructions+=1;goto B5eae22;
case 0x5eae27:goto L5eae27;
case 0x5eae2a:c.instructions+=5;goto B5eae2a;
case 0x5eae2e:c.instructions+=4;goto B5eae2e;
case 0x5eae2f:c.instructions+=3;goto B5eae2f;
case 0x5eae33:c.instructions+=2;goto B5eae33;
case 0x5eae34:c.instructions+=1;goto B5eae34;
case 0x5eae39:goto L5eae39;
case 0x5eae3d:c.instructions+=36;goto B5eae3d;
case 0x5eae41:c.instructions+=35;goto B5eae41;
case 0x5eae45:c.instructions+=34;goto B5eae45;
case 0x5eae47:c.instructions+=33;goto B5eae47;
case 0x5eae4b:c.instructions+=32;goto B5eae4b;
case 0x5eae4e:c.instructions+=31;goto B5eae4e;
case 0x5eae52:c.instructions+=30;goto B5eae52;
case 0x5eae55:c.instructions+=29;goto B5eae55;
case 0x5eae57:c.instructions+=28;goto B5eae57;
case 0x5eae5a:c.instructions+=27;goto B5eae5a;
case 0x5eae5d:c.instructions+=26;goto B5eae5d;
case 0x5eae61:c.instructions+=25;goto B5eae61;
case 0x5eae64:c.instructions+=24;goto B5eae64;
case 0x5eae68:c.instructions+=23;goto B5eae68;
case 0x5eae6b:c.instructions+=22;goto B5eae6b;
case 0x5eae6f:c.instructions+=21;goto B5eae6f;
case 0x5eae72:c.instructions+=20;goto B5eae72;
case 0x5eae75:c.instructions+=19;goto B5eae75;
case 0x5eae78:c.instructions+=18;goto B5eae78;
case 0x5eae7c:c.instructions+=17;goto B5eae7c;
case 0x5eae7d:c.instructions+=16;goto B5eae7d;
case 0x5eae80:c.instructions+=15;goto B5eae80;
case 0x5eae84:c.instructions+=14;goto B5eae84;
case 0x5eae87:c.instructions+=13;goto B5eae87;
case 0x5eae8b:c.instructions+=12;goto B5eae8b;
case 0x5eae8c:c.instructions+=11;goto B5eae8c;
case 0x5eae8f:c.instructions+=10;goto B5eae8f;
case 0x5eae90:c.instructions+=9;goto B5eae90;
case 0x5eae93:c.instructions+=8;goto B5eae93;
case 0x5eae97:c.instructions+=7;goto B5eae97;
case 0x5eae98:c.instructions+=6;goto B5eae98;
case 0x5eae9b:c.instructions+=5;goto B5eae9b;
case 0x5eae9e:c.instructions+=4;goto B5eae9e;
case 0x5eae9f:c.instructions+=3;goto B5eae9f;
case 0x5eaea2:c.instructions+=2;goto B5eaea2;
case 0x5eaea9:c.instructions+=1;goto B5eaea9;
case 0x5eaeae:goto L5eaeae;
case 0x5eaeaf:c.instructions+=5;goto B5eaeaf;
case 0x5eaeb0:c.instructions+=4;goto B5eaeb0;
case 0x5eaeb1:c.instructions+=3;goto B5eaeb1;
case 0x5eaeb3:c.instructions+=2;goto B5eaeb3;
case 0x5eaeb4:c.instructions+=1;goto B5eaeb4;
case 0x5eaec0:goto L5eaec0;
case 0x5eaec5:c.instructions+=2;goto B5eaec5;
case 0x5eaec7:c.instructions+=1;goto B5eaec7;
case 0x5eaec9:goto L5eaec9;
case 0x5eaece:c.instructions+=2;goto B5eaece;
case 0x5eaed0:c.instructions+=1;goto B5eaed0;
case 0x5eaed2:goto L5eaed2;
case 0x5eaed7:c.instructions+=2;goto B5eaed7;
case 0x5eaedc:c.instructions+=1;goto B5eaedc;
case 0x5eaede:goto L5eaede;
case 0x5eaee3:c.instructions+=1;goto B5eaee3;
case 0x5eaee5:goto L5eaee5;
case 0x5eaeea:c.instructions+=1;goto B5eaeea;
case 0x5eaeec:goto L5eaeec;
case 0x5eaeef:c.instructions+=17;goto B5eaeef;
case 0x5eaef5:c.instructions+=16;goto B5eaef5;
case 0x5eaefa:c.instructions+=15;goto B5eaefa;
case 0x5eaefd:c.instructions+=14;goto B5eaefd;
case 0x5eaf00:c.instructions+=13;goto B5eaf00;
case 0x5eaf03:c.instructions+=12;goto B5eaf03;
case 0x5eaf05:c.instructions+=11;goto B5eaf05;
case 0x5eaf07:c.instructions+=10;goto B5eaf07;
case 0x5eaf09:c.instructions+=9;goto B5eaf09;
case 0x5eaf0b:c.instructions+=8;goto B5eaf0b;
case 0x5eaf0d:c.instructions+=7;goto B5eaf0d;
case 0x5eaf0f:c.instructions+=6;goto B5eaf0f;
case 0x5eaf11:c.instructions+=5;goto B5eaf11;
case 0x5eaf13:c.instructions+=4;goto B5eaf13;
case 0x5eaf19:c.instructions+=3;goto B5eaf19;
case 0x5eaf1b:c.instructions+=2;goto B5eaf1b;
case 0x5eaf1e:c.instructions+=1;goto B5eaf1e;
case 0x5eaf20:goto L5eaf20;
case 0x5eaf25:c.instructions+=1;goto B5eaf25;
case 0x5eaf26:goto L5eaf26;
case 0x5eaf28:c.instructions+=1;goto B5eaf28;
case 0x5eaf29:goto L5eaf29;
case 0x5eaf2b:c.instructions+=1;goto B5eaf2b;
case 0x5eaf30:goto L5eaf30;
case 0x5eaf31:c.instructions+=10;goto B5eaf31;
case 0x5eaf33:c.instructions+=9;goto B5eaf33;
case 0x5eaf36:c.instructions+=8;goto B5eaf36;
case 0x5eaf37:c.instructions+=7;goto B5eaf37;
case 0x5eaf38:c.instructions+=6;goto B5eaf38;
case 0x5eaf3b:c.instructions+=5;goto B5eaf3b;
case 0x5eaf3c:c.instructions+=4;goto B5eaf3c;
case 0x5eaf3e:c.instructions+=3;goto B5eaf3e;
case 0x5eaf40:c.instructions+=2;goto B5eaf40;
case 0x5eaf42:c.instructions+=1;goto B5eaf42;
case 0x5eaf44:goto L5eaf44;
case 0x5eaf47:c.instructions+=7;goto B5eaf47;
case 0x5eaf4d:c.instructions+=6;goto B5eaf4d;
case 0x5eaf4e:c.instructions+=5;goto B5eaf4e;
case 0x5eaf4f:c.instructions+=4;goto B5eaf4f;
case 0x5eaf50:c.instructions+=3;goto B5eaf50;
case 0x5eaf51:c.instructions+=2;goto B5eaf51;
case 0x5eaf52:c.instructions+=1;goto B5eaf52;
case 0x5eaf57:goto L5eaf57;
case 0x5eaf5c:c.instructions+=3;goto B5eaf5c;
case 0x5eaf5f:c.instructions+=2;goto B5eaf5f;
case 0x5eaf61:c.instructions+=1;goto B5eaf61;
case 0x5eaf63:goto L5eaf63;
case 0x5eaf64:c.instructions+=8;goto B5eaf64;
case 0x5eaf67:c.instructions+=7;goto B5eaf67;
case 0x5eaf68:c.instructions+=6;goto B5eaf68;
case 0x5eaf6d:c.instructions+=5;goto B5eaf6d;
case 0x5eaf70:c.instructions+=4;goto B5eaf70;
case 0x5eaf73:c.instructions+=3;goto B5eaf73;
case 0x5eaf76:c.instructions+=2;goto B5eaf76;
case 0x5eaf79:c.instructions+=1;goto B5eaf79;
case 0x5eaf7e:goto L5eaf7e;
case 0x5eaf81:c.instructions+=1;goto B5eaf81;
case 0x5eaf83:goto L5eaf83;
case 0x5eaf86:c.instructions+=3;goto B5eaf86;
case 0x5eaf87:c.instructions+=2;goto B5eaf87;
case 0x5eaf8c:c.instructions+=1;goto B5eaf8c;
case 0x5eaf91:goto L5eaf91;
case 0x5eaf94:c.instructions+=3;goto B5eaf94;
case 0x5eaf95:c.instructions+=2;goto B5eaf95;
case 0x5eaf9b:c.instructions+=1;goto B5eaf9b;
case 0x5eafa0:goto L5eafa0;
case 0x5eafa1:c.instructions+=5;goto B5eafa1;
case 0x5eafa2:c.instructions+=4;goto B5eafa2;
case 0x5eafa3:c.instructions+=3;goto B5eafa3;
case 0x5eafa5:c.instructions+=2;goto B5eafa5;
case 0x5eafa6:c.instructions+=1;goto B5eafa6;
case 0x5eafb0:goto L5eafb0;
case 0x5eafb1:c.instructions+=9;goto B5eafb1;
case 0x5eafb3:c.instructions+=8;goto B5eafb3;
case 0x5eafb4:c.instructions+=7;goto B5eafb4;
case 0x5eafb5:c.instructions+=6;goto B5eafb5;
case 0x5eafb6:c.instructions+=5;goto B5eafb6;
case 0x5eafb9:c.instructions+=4;goto B5eafb9;
case 0x5eafbb:c.instructions+=3;goto B5eafbb;
case 0x5eafbd:c.instructions+=2;goto B5eafbd;
case 0x5eafbf:c.instructions+=1;goto B5eafbf;
case 0x5eafc1:goto L5eafc1;
case 0x5eafc4:c.instructions+=7;goto B5eafc4;
case 0x5eafca:c.instructions+=6;goto B5eafca;
case 0x5eafcc:c.instructions+=5;goto B5eafcc;
case 0x5eafce:c.instructions+=4;goto B5eafce;
case 0x5eafd0:c.instructions+=3;goto B5eafd0;
case 0x5eafd1:c.instructions+=2;goto B5eafd1;
case 0x5eafd2:c.instructions+=1;goto B5eafd2;
case 0x5eafd7:goto L5eafd7;
case 0x5eafdd:c.instructions+=4;goto B5eafdd;
case 0x5eafdf:c.instructions+=3;goto B5eafdf;
case 0x5eafe2:c.instructions+=2;goto B5eafe2;
case 0x5eafe4:c.instructions+=1;goto B5eafe4;
case 0x5eafe6:goto L5eafe6;
case 0x5eafe9:c.instructions+=2;goto B5eafe9;
case 0x5eafeb:c.instructions+=1;goto B5eafeb;
case 0x5eafed:goto L5eafed;
case 0x5eafee:c.instructions+=3;goto B5eafee;
case 0x5eafef:c.instructions+=2;goto B5eafef;
case 0x5eaff4:c.instructions+=1;goto B5eaff4;
case 0x5eaff9:goto L5eaff9;
case 0x5eaffc:c.instructions+=1;goto B5eaffc;
case 0x5eaffe:goto L5eaffe;
case 0x5eafff:c.instructions+=1;goto B5eafff;
default:missing_instruction(c.pc);}
B5ea000:L5ea000:{c.instructions+=3;NFSU2_TR(0x5ea000);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ea001:{NFSU2_TR(0x5ea001);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x5dcull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5dcull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ea006:{NFSU2_TR(0x5ea006);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ea000u);}goto L5ea000;}}
}
B5ea008:L5ea008:{c.instructions+=4;NFSU2_TR(0x5ea008);
__builtin_memmove((R+0),gp(0x883db4),4);
}
B5ea00d:{NFSU2_TR(0x5ea00d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5ea00f:{NFSU2_TR(0x5ea00f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea011:{NFSU2_TR(0x5ea011);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5ea0bc;}}
}
B5ea017:L5ea017:{c.instructions+=3;NFSU2_TR(0x5ea017);
__builtin_memmove((R+28),gp(0x883db0),4);
}
B5ea01d:{NFSU2_TR(0x5ea01d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ea01f:{NFSU2_TR(0x5ea01f);
}
B5ea020:L5ea020:{c.instructions+=6;NFSU2_TR(0x5ea020);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5ea024:{NFSU2_TR(0x5ea024);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ea026:{NFSU2_TR(0x5ea026);
__builtin_memmove((R+4),(R+0),1);
}
B5ea028:{NFSU2_TR(0x5ea028);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B5ea02b:{NFSU2_TR(0x5ea02b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ea02e:{NFSU2_TR(0x5ea02e);
if(r1(R+518)){{goto L5ea035;}}
}
B5ea030:L5ea030:{c.instructions+=2;NFSU2_TR(0x5ea030);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ea033:{NFSU2_TR(0x5ea033);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea0ab;}}
}
B5ea035:L5ea035:{c.instructions+=4;NFSU2_TR(0x5ea035);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+24),(U+12),2);
}
B5ea03a:{NFSU2_TR(0x5ea03a);
w4(R+4,u32(s32(s16(r2(R+24)))));
}
B5ea03d:{NFSU2_TR(0x5ea03d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ea03f:{NFSU2_TR(0x5ea03f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5ea056;}}
}
B5ea041:L5ea041:{c.instructions+=3;NFSU2_TR(0x5ea041);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5ea048:{NFSU2_TR(0x5ea048);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea04a:{NFSU2_TR(0x5ea04a);
if(r1(R+518)){{goto L5ea056;}}
}
B5ea04c:L5ea04c:{c.instructions+=4;NFSU2_TR(0x5ea04c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ea04f:{NFSU2_TR(0x5ea04f);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B5ea051:{NFSU2_TR(0x5ea051);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B5ea054:{NFSU2_TR(0x5ea054);
{goto L5ea058;}
}
B5ea056:L5ea056:{c.instructions+=1;NFSU2_TR(0x5ea056);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B5ea058:L5ea058:{c.instructions+=10;NFSU2_TR(0x5ea058);
__builtin_memmove((R+4),(R+0),4);
}
B5ea05a:{NFSU2_TR(0x5ea05a);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5ea05d:{NFSU2_TR(0x5ea05d);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B5ea060:{NFSU2_TR(0x5ea060);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+8))));
}
B5ea062:{NFSU2_TR(0x5ea062);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B5ea064:{NFSU2_TR(0x5ea064);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(R+4))));
w1(R+4,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B5ea066:{NFSU2_TR(0x5ea066);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5ea068:{NFSU2_TR(0x5ea068);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B5ea06a:{NFSU2_TR(0x5ea06a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ea06c:{NFSU2_TR(0x5ea06c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea072;}}
}
B5ea06e:L5ea06e:{c.instructions+=2;NFSU2_TR(0x5ea06e);
__builtin_memmove((R+0),(R+24),4);
}
B5ea070:{NFSU2_TR(0x5ea070);
{goto L5ea077;}
}
B5ea072:L5ea072:{c.instructions+=1;NFSU2_TR(0x5ea072);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B5ea077:L5ea077:{c.instructions+=3;NFSU2_TR(0x5ea077);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5ea07a:{NFSU2_TR(0x5ea07a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ea07c:{NFSU2_TR(0x5ea07c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5ea087;}}
}
B5ea07e:L5ea07e:{c.instructions+=2;NFSU2_TR(0x5ea07e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5ea085:{NFSU2_TR(0x5ea085);
{goto L5ea089;}
}
B5ea087:L5ea087:{c.instructions+=1;NFSU2_TR(0x5ea087);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5ea089:L5ea089:{c.instructions+=12;NFSU2_TR(0x5ea089);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ea08c:{NFSU2_TR(0x5ea08c);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B5ea08e:{NFSU2_TR(0x5ea08e);
w4(R+0,u32(0x1ull));
}
B5ea093:{NFSU2_TR(0x5ea093);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5ea095:{NFSU2_TR(0x5ea095);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B5ea098:{NFSU2_TR(0x5ea098);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B5ea09a:{NFSU2_TR(0x5ea09a);
__builtin_memmove((R+4),(R+0),4);
}
B5ea09c:{NFSU2_TR(0x5ea09c);
w4(R+4,u32(~u32(r4(R+4))));
}
B5ea09e:{NFSU2_TR(0x5ea09e);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B5ea0a0:{NFSU2_TR(0x5ea0a0);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B5ea0a2:{NFSU2_TR(0x5ea0a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ea0a5:{NFSU2_TR(0x5ea0a5);
__builtin_memmove((R+28),gp(0x883db0),4);
}
B5ea0ab:L5ea0ab:{c.instructions+=5;NFSU2_TR(0x5ea0ab);
__builtin_memmove((R+0),gp(0x883db4),4);
}
B5ea0b0:{NFSU2_TR(0x5ea0b0);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5ea0b1:{NFSU2_TR(0x5ea0b1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B5ea0b4:{NFSU2_TR(0x5ea0b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
}
B5ea0b6:{NFSU2_TR(0x5ea0b6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ea020u);}goto L5ea020;}}
}
B5ea0bc:L5ea0bc:{c.instructions+=4;NFSU2_TR(0x5ea0bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ea0bd:{NFSU2_TR(0x5ea0bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ea0be:{NFSU2_TR(0x5ea0be);
w4(R+4,u32(0x88a320ull));
}
B5ea0c3:{NFSU2_TR(0x5ea0c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea0c8ull));
TAIL_STATIC(0x5ddfc0u,5dd);
}
B5ea0c8:L5ea0c8:{c.instructions+=3;NFSU2_TR(0x5ea0c8);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea0ca:{NFSU2_TR(0x5ea0ca);
w4(R+4,u32(0x88a320ull));
}
B5ea0cf:{NFSU2_TR(0x5ea0cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea0d4ull));
TAIL_STATIC(0x5e8780u,5e8);
}
B5ea0d4:L5ea0d4:{c.instructions+=3;NFSU2_TR(0x5ea0d4);
__builtin_memmove((R+8),gp(0x88e990),4);
}
B5ea0da:{NFSU2_TR(0x5ea0da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea0db:{NFSU2_TR(0x5ea0db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea0e0ull));
TAIL_STATIC(0x575630u,575);
}
B5ea0e0:L5ea0e0:{c.instructions+=5;NFSU2_TR(0x5ea0e0);
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
B5ea0e3:{NFSU2_TR(0x5ea0e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ea0e4:{NFSU2_TR(0x5ea0e4);
s4(0x88e990,u32(0x0ull));
}
B5ea0ee:{NFSU2_TR(0x5ea0ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ea0ef:{NFSU2_TR(0x5ea0ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea0f0:L5ea0f0:{c.instructions+=4;NFSU2_TR(0x5ea0f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea0f4:{NFSU2_TR(0x5ea0f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea0f5:{NFSU2_TR(0x5ea0f5);
w4(R+4,u32(0x883e70ull));
}
B5ea0fa:{NFSU2_TR(0x5ea0fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea0ffull));
TAIL_STATIC(0x5e9c10u,5e9);
}
B5ea0ff:L5ea0ff:{c.instructions+=1;NFSU2_TR(0x5ea0ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea100:L5ea100:{c.instructions+=27;NFSU2_TR(0x5ea100);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea101:{NFSU2_TR(0x5ea101);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea105:{NFSU2_TR(0x5ea105);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ea108:{NFSU2_TR(0x5ea108);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea10b:{NFSU2_TR(0x5ea10b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea10e:{NFSU2_TR(0x5ea10e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ea112:{NFSU2_TR(0x5ea112);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ea116:{NFSU2_TR(0x5ea116);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea119:{NFSU2_TR(0x5ea119);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ea11c:{NFSU2_TR(0x5ea11c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea11e:{NFSU2_TR(0x5ea11e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea122:{NFSU2_TR(0x5ea122);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ea124:{NFSU2_TR(0x5ea124);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ea128:{NFSU2_TR(0x5ea128);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ea12b:{NFSU2_TR(0x5ea12b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ea12f:{NFSU2_TR(0x5ea12f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ea131:{NFSU2_TR(0x5ea131);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5ea133:{NFSU2_TR(0x5ea133);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B5ea135:{NFSU2_TR(0x5ea135);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ea138:{NFSU2_TR(0x5ea138);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B5ea13a:{NFSU2_TR(0x5ea13a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ea13e:{NFSU2_TR(0x5ea13e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ea141:{NFSU2_TR(0x5ea141);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea145:{NFSU2_TR(0x5ea145);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ea149:{NFSU2_TR(0x5ea149);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ea14c:{NFSU2_TR(0x5ea14c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ea14d:{NFSU2_TR(0x5ea14d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea150:L5ea150:{c.instructions+=4;NFSU2_TR(0x5ea150);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea151:{NFSU2_TR(0x5ea151);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea157:{NFSU2_TR(0x5ea157);
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
B5ea159:{NFSU2_TR(0x5ea159);
if(r1(R+518)){{goto L5ea17d;}}
}
B5ea15b:L5ea15b:{c.instructions+=2;NFSU2_TR(0x5ea15b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ea160:{NFSU2_TR(0x5ea160);
if(r1(R+518)){{goto L5ea17d;}}
}
B5ea162:L5ea162:{c.instructions+=7;NFSU2_TR(0x5ea162);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B5ea167:{NFSU2_TR(0x5ea167);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5ea16d:{NFSU2_TR(0x5ea16d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ea171:{NFSU2_TR(0x5ea171);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ea175:{NFSU2_TR(0x5ea175);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ea17b:{NFSU2_TR(0x5ea17b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ea17c:{NFSU2_TR(0x5ea17c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea17d:L5ea17d:{c.instructions+=3;NFSU2_TR(0x5ea17d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea183:{NFSU2_TR(0x5ea183);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ea184:{NFSU2_TR(0x5ea184);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea190:L5ea190:{c.instructions+=2;NFSU2_TR(0x5ea190);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5ea193:{NFSU2_TR(0x5ea193);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea1a8;}}
}
B5ea195:L5ea195:{c.instructions+=3;NFSU2_TR(0x5ea195);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea198:{NFSU2_TR(0x5ea198);
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
B5ea19b:{NFSU2_TR(0x5ea19b);
if(r1(R+518)){{goto L5ea1a2;}}
}
B5ea19d:L5ea19d:{c.instructions+=2;NFSU2_TR(0x5ea19d);
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
B5ea1a0:{NFSU2_TR(0x5ea1a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea1a8;}}
}
B5ea1a2:L5ea1a2:{c.instructions+=2;NFSU2_TR(0x5ea1a2);
w4(R+0,u32(0x1ull));
}
B5ea1a7:{NFSU2_TR(0x5ea1a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea1a8:L5ea1a8:{c.instructions+=2;NFSU2_TR(0x5ea1a8);
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
B5ea1aa:{NFSU2_TR(0x5ea1aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea1b0:L5ea1b0:{c.instructions+=5;NFSU2_TR(0x5ea1b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea1b4:{NFSU2_TR(0x5ea1b4);
__builtin_memmove((R+4),gp(0x86ad60),4);
}
B5ea1ba:{NFSU2_TR(0x5ea1ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea1bb:{NFSU2_TR(0x5ea1bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea1bc:{NFSU2_TR(0x5ea1bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea1c1ull));
TAIL_STATIC(0x43f920u,43f);
}
B5ea1c1:L5ea1c1:{c.instructions+=2;NFSU2_TR(0x5ea1c1);
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
B5ea1c4:{NFSU2_TR(0x5ea1c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea1d0:L5ea1d0:{c.instructions+=3;NFSU2_TR(0x5ea1d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea1d1:{NFSU2_TR(0x5ea1d1);
__builtin_memmove((R+24),(R+4),4);
}
B5ea1d3:{NFSU2_TR(0x5ea1d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea1d8ull));
TAIL_STATIC(0x401fd0u,401);
}
B5ea1d8:L5ea1d8:{c.instructions+=2;NFSU2_TR(0x5ea1d8);
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
B5ea1dd:{NFSU2_TR(0x5ea1dd);
if(r1(R+518)){{goto L5ea1ee;}}
}
B5ea1df:L5ea1df:{c.instructions+=4;NFSU2_TR(0x5ea1df);
__builtin_memmove((R+0),gp(0x86b304),4);
}
B5ea1e4:{NFSU2_TR(0x5ea1e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea1e5:{NFSU2_TR(0x5ea1e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea1e6:{NFSU2_TR(0x5ea1e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea1ebull));
TAIL_STATIC(0x43f920u,43f);
}
B5ea1eb:L5ea1eb:{c.instructions+=1;NFSU2_TR(0x5ea1eb);
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
B5ea1ee:L5ea1ee:{c.instructions+=3;NFSU2_TR(0x5ea1ee);
__builtin_memmove((R+0),(R+24),4);
}
B5ea1f0:{NFSU2_TR(0x5ea1f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ea1f1:{NFSU2_TR(0x5ea1f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea200:L5ea200:{c.instructions+=9;NFSU2_TR(0x5ea200);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea201:{NFSU2_TR(0x5ea201);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea202:{NFSU2_TR(0x5ea202);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ea206:{NFSU2_TR(0x5ea206);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea20c:{NFSU2_TR(0x5ea20c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea20d:{NFSU2_TR(0x5ea20d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ea211:{NFSU2_TR(0x5ea211);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea212:{NFSU2_TR(0x5ea212);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ea21a:{NFSU2_TR(0x5ea21a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea21full));
TAIL_STATIC(0x581d90u,581);
}
B5ea21f:L5ea21f:{c.instructions+=4;NFSU2_TR(0x5ea21f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea223:{NFSU2_TR(0x5ea223);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea224:{NFSU2_TR(0x5ea224);
__builtin_memmove((R+4),(R+24),4);
}
B5ea226:{NFSU2_TR(0x5ea226);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea22bull));
TAIL_STATIC(0x582030u,582);
}
B5ea22b:L5ea22b:{c.instructions+=5;NFSU2_TR(0x5ea22b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ea22f:{NFSU2_TR(0x5ea22f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ea231:{NFSU2_TR(0x5ea231);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ea232:{NFSU2_TR(0x5ea232);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ea233:{NFSU2_TR(0x5ea233);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea240:L5ea240:{c.instructions+=7;NFSU2_TR(0x5ea240);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ea244:{NFSU2_TR(0x5ea244);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ea248:{NFSU2_TR(0x5ea248);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea24b:{NFSU2_TR(0x5ea24b);
{u32 ea_=u32(r4(R+8)+u32(96u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ea24e:{NFSU2_TR(0x5ea24e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ea250:{NFSU2_TR(0x5ea250);
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
B5ea253:{NFSU2_TR(0x5ea253);
if(r1(R+514)){{goto L5ea25b;}}
}
B5ea255:L5ea255:{c.instructions+=2;NFSU2_TR(0x5ea255);
w4(R+0,u32(0x1ull));
}
B5ea25a:{NFSU2_TR(0x5ea25a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea25b:L5ea25b:{c.instructions+=5;NFSU2_TR(0x5ea25b);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea25e:{NFSU2_TR(0x5ea25e);
{u32 ea_=u32(r4(R+8)+u32(96u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ea261:{NFSU2_TR(0x5ea261);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ea263:{NFSU2_TR(0x5ea263);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ea266:{NFSU2_TR(0x5ea266);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea26b;}}
}
B5ea268:L5ea268:{c.instructions+=2;NFSU2_TR(0x5ea268);
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
B5ea26a:{NFSU2_TR(0x5ea26a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea26b:L5ea26b:{c.instructions+=6;NFSU2_TR(0x5ea26b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5ea26f:{NFSU2_TR(0x5ea26f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ea271:{NFSU2_TR(0x5ea271);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+10))));
w1(R+523,sborrow<u16>(r2(R+0),r2(U+10)));
w2(U+12,u16(u32(r2(R+0))-u32(r2(U+10))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5ea275:{NFSU2_TR(0x5ea275);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B5ea278:{NFSU2_TR(0x5ea278);
__builtin_memmove((R+0),(R+4),4);
}
B5ea27a:{NFSU2_TR(0x5ea27a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea280:L5ea280:{c.instructions+=9;NFSU2_TR(0x5ea280);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea284:{NFSU2_TR(0x5ea284);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ea288:{NFSU2_TR(0x5ea288);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ea28e:{NFSU2_TR(0x5ea28e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea292:{NFSU2_TR(0x5ea292);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ea298:{NFSU2_TR(0x5ea298);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ea29c:{NFSU2_TR(0x5ea29c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ea2a2:{NFSU2_TR(0x5ea2a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ea2a8:{NFSU2_TR(0x5ea2a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea2b0:L5ea2b0:{c.instructions+=7;NFSU2_TR(0x5ea2b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea2b1:{NFSU2_TR(0x5ea2b1);
__builtin_memmove((R+24),(R+4),4);
}
B5ea2b3:{NFSU2_TR(0x5ea2b3);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea2b9:{NFSU2_TR(0x5ea2b9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ea2bf:{NFSU2_TR(0x5ea2bf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ea2c1:{NFSU2_TR(0x5ea2c1);
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
B5ea2c4:{NFSU2_TR(0x5ea2c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea319;}}
}
B5ea2c6:L5ea2c6:{c.instructions+=7;NFSU2_TR(0x5ea2c6);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea2cc:{NFSU2_TR(0x5ea2cc);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ea2d2:{NFSU2_TR(0x5ea2d2);
{u32 ea_=u32(r4(R+24)+u32(252u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ea2d8:{NFSU2_TR(0x5ea2d8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ea2de:{NFSU2_TR(0x5ea2de);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ea2e0:{NFSU2_TR(0x5ea2e0);
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
B5ea2e3:{NFSU2_TR(0x5ea2e3);
if(r1(R+514)){{goto L5ea319;}}
}
B5ea2e5:L5ea2e5:{c.instructions+=4;NFSU2_TR(0x5ea2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea2eb:{NFSU2_TR(0x5ea2eb);
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
B5ea2ed:{NFSU2_TR(0x5ea2ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ea2f7:{NFSU2_TR(0x5ea2f7);
if(r1(R+518)){{goto L5ea319;}}
}
B5ea2f9:L5ea2f9:{c.instructions+=3;NFSU2_TR(0x5ea2f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ea2ff:{NFSU2_TR(0x5ea2ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea300:{NFSU2_TR(0x5ea300);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea302ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5ea302:L5ea302:{c.instructions+=3;NFSU2_TR(0x5ea302);
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
B5ea305:{NFSU2_TR(0x5ea305);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ea30f:{NFSU2_TR(0x5ea30f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ea319:L5ea319:{c.instructions+=2;NFSU2_TR(0x5ea319);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ea31a:{NFSU2_TR(0x5ea31a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea320:L5ea320:{c.instructions+=3;NFSU2_TR(0x5ea320);
__builtin_memmove((R+0),gp(0x890088),4);
}
B5ea325:{NFSU2_TR(0x5ea325);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea327:{NFSU2_TR(0x5ea327);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea355;}}
}
B5ea329:L5ea329:{c.instructions+=5;NFSU2_TR(0x5ea329);
{u32 ea_=u32(r4(R+4)+u32(252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea32f:{NFSU2_TR(0x5ea32f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ea335:{NFSU2_TR(0x5ea335);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ea337:{NFSU2_TR(0x5ea337);
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
B5ea33a:{NFSU2_TR(0x5ea33a);
if(r1(R+518)){{goto L5ea34f;}}
}
B5ea33c:L5ea33c:{c.instructions+=3;NFSU2_TR(0x5ea33c);
__builtin_memmove((R+0),gp(0x890084),4);
}
B5ea341:{NFSU2_TR(0x5ea341);
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
B5ea343:{NFSU2_TR(0x5ea343);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea34f;}}
}
B5ea345:L5ea345:{c.instructions+=3;NFSU2_TR(0x5ea345);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea34b:{NFSU2_TR(0x5ea34b);
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
B5ea34d:{NFSU2_TR(0x5ea34d);
if(r1(R+518)){{goto L5ea355;}}
}
B5ea34f:L5ea34f:{c.instructions+=2;NFSU2_TR(0x5ea34f);
w4(R+0,u32(0x1ull));
}
B5ea354:{NFSU2_TR(0x5ea354);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea355:L5ea355:{c.instructions+=2;NFSU2_TR(0x5ea355);
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
B5ea357:{NFSU2_TR(0x5ea357);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea360:L5ea360:{c.instructions+=7;NFSU2_TR(0x5ea360);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5ea363:{NFSU2_TR(0x5ea363);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea364:{NFSU2_TR(0x5ea364);
__builtin_memmove((R+24),(R+4),4);
}
B5ea366:{NFSU2_TR(0x5ea366);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B5ea36c:{NFSU2_TR(0x5ea36c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5ea36f:{NFSU2_TR(0x5ea36f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea370:{NFSU2_TR(0x5ea370);
if(r1(R+518)){{goto L5ea37f;}}
}
B5ea372:L5ea372:{c.instructions+=3;NFSU2_TR(0x5ea372);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea374:{NFSU2_TR(0x5ea374);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea376:{NFSU2_TR(0x5ea376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea37bull));
TAIL_STATIC(0x5790e0u,579);
}
B5ea37b:L5ea37b:{c.instructions+=2;NFSU2_TR(0x5ea37b);
__builtin_memmove((R+28),(R+0),4);
}
B5ea37d:{NFSU2_TR(0x5ea37d);
{goto L5ea396;}
}
B5ea37f:L5ea37f:{c.instructions+=4;NFSU2_TR(0x5ea37f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea382:{NFSU2_TR(0x5ea382);
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
B5ea384:{NFSU2_TR(0x5ea384);
__builtin_memmove((R+28),gp(0x865140),4);
}
B5ea38a:{NFSU2_TR(0x5ea38a);
if(r1(R+518)){{goto L5ea396;}}
}
B5ea38c:L5ea38c:{c.instructions+=4;NFSU2_TR(0x5ea38c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea38e:{NFSU2_TR(0x5ea38e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea390:{NFSU2_TR(0x5ea390);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea391:{NFSU2_TR(0x5ea391);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea396ull));
TAIL_STATIC(0x579130u,579);
}
B5ea396:L5ea396:{c.instructions+=2;NFSU2_TR(0x5ea396);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea397:{NFSU2_TR(0x5ea397);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea39cull));
TAIL_STATIC(0x576ce0u,576);
}
B5ea39c:L5ea39c:{c.instructions+=6;NFSU2_TR(0x5ea39c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ea3a0:{NFSU2_TR(0x5ea3a0);
__builtin_memmove((R+0),gp(0x8650b8),4);
}
B5ea3a5:{NFSU2_TR(0x5ea3a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ea3a7:{NFSU2_TR(0x5ea3a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ea3aa:{NFSU2_TR(0x5ea3aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea3ac:{NFSU2_TR(0x5ea3ac);
if(r1(R+518)){{goto L5ea448;}}
}
B5ea3b2:L5ea3b2:{c.instructions+=3;NFSU2_TR(0x5ea3b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ea3b5:{NFSU2_TR(0x5ea3b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea3b7:{NFSU2_TR(0x5ea3b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea448;}}
}
B5ea3bd:L5ea3bd:{c.instructions+=3;NFSU2_TR(0x5ea3bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ea3c0:{NFSU2_TR(0x5ea3c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea3c2:{NFSU2_TR(0x5ea3c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea448;}}
}
B5ea3c8:L5ea3c8:{c.instructions+=8;NFSU2_TR(0x5ea3c8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea3cc:{NFSU2_TR(0x5ea3cc);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ea3d2:{NFSU2_TR(0x5ea3d2);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ea3d8:{NFSU2_TR(0x5ea3d8);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ea3dc:{NFSU2_TR(0x5ea3dc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ea3e2:{NFSU2_TR(0x5ea3e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ea3e4:{NFSU2_TR(0x5ea3e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ea3e7:{NFSU2_TR(0x5ea3e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea4c6;}}
}
B5ea3ed:L5ea3ed:{c.instructions+=6;NFSU2_TR(0x5ea3ed);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea3f1:{NFSU2_TR(0x5ea3f1);
{u32 ea_=u32(u32(7897424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea3f7:{NFSU2_TR(0x5ea3f7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ea3fb:{NFSU2_TR(0x5ea3fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ea3fd:{NFSU2_TR(0x5ea3fd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ea400:{NFSU2_TR(0x5ea400);
if(r1(R+514)){{goto L5ea40a;}}
}
B5ea402:L5ea402:{c.instructions+=2;NFSU2_TR(0x5ea402);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ea404:{NFSU2_TR(0x5ea404);
{u32 ea_=u32(u32(7897424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea40a:L5ea40a:{c.instructions+=6;NFSU2_TR(0x5ea40a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ea40e:{NFSU2_TR(0x5ea40e);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ea414:{NFSU2_TR(0x5ea414);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ea41a:{NFSU2_TR(0x5ea41a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ea41c:{NFSU2_TR(0x5ea41c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ea41f:{NFSU2_TR(0x5ea41f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea448;}}
}
B5ea421:L5ea421:{c.instructions+=1;NFSU2_TR(0x5ea421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea426ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B5ea426:L5ea426:{c.instructions+=1;NFSU2_TR(0x5ea426);
__builtin_memmove((R+28),(R+0),4);
}
B5ea428:L5ea428:{c.instructions+=1;NFSU2_TR(0x5ea428);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea42dull));
TAIL_STATIC(0x43bdf0u,43b);
}
B5ea42d:L5ea42d:{c.instructions+=3;NFSU2_TR(0x5ea42d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea42e:{NFSU2_TR(0x5ea42e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea42f:{NFSU2_TR(0x5ea42f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea434ull));
TAIL_STATIC(0x43be20u,43b);
}
B5ea434:L5ea434:{c.instructions+=6;NFSU2_TR(0x5ea434);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ea43a:{NFSU2_TR(0x5ea43a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ea43d:{NFSU2_TR(0x5ea43d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ea441:{NFSU2_TR(0x5ea441);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ea443:{NFSU2_TR(0x5ea443);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ea446:{NFSU2_TR(0x5ea446);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ea428u);}goto L5ea428;}}
}
B5ea448:L5ea448:{c.instructions+=5;NFSU2_TR(0x5ea448);
{u32 ea_=u32(r4(R+24)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea44e:{NFSU2_TR(0x5ea44e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ea454:{NFSU2_TR(0x5ea454);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ea456:{NFSU2_TR(0x5ea456);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ea459:{NFSU2_TR(0x5ea459);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea4b6;}}
}
B5ea45b:L5ea45b:{c.instructions+=7;NFSU2_TR(0x5ea45b);
{u32 ea_=u32(r4(R+24)+u32(268u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea461:{NFSU2_TR(0x5ea461);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ea465:{NFSU2_TR(0x5ea465);
{u32 ea_=u32(r4(R+24)+u32(268u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ea46b:{NFSU2_TR(0x5ea46b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ea471:{NFSU2_TR(0x5ea471);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ea473:{NFSU2_TR(0x5ea473);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ea476:{NFSU2_TR(0x5ea476);
if(r1(R+514)){{goto L5ea4b6;}}
}
B5ea478:L5ea478:{c.instructions+=5;NFSU2_TR(0x5ea478);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea47e:{NFSU2_TR(0x5ea47e);
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
B5ea480:{NFSU2_TR(0x5ea480);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ea48a:{NFSU2_TR(0x5ea48a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ea494:{NFSU2_TR(0x5ea494);
if(r1(R+518)){{goto L5ea4b6;}}
}
B5ea496:L5ea496:{c.instructions+=3;NFSU2_TR(0x5ea496);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ea49c:{NFSU2_TR(0x5ea49c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea49d:{NFSU2_TR(0x5ea49d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea49full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5ea49f:L5ea49f:{c.instructions+=3;NFSU2_TR(0x5ea49f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ea4a2:{NFSU2_TR(0x5ea4a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ea4ac:{NFSU2_TR(0x5ea4ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ea4b6:L5ea4b6:{c.instructions+=6;NFSU2_TR(0x5ea4b6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea4ba:{NFSU2_TR(0x5ea4ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ea4bb:{NFSU2_TR(0x5ea4bb);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ea4c1:{NFSU2_TR(0x5ea4c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ea4c2:{NFSU2_TR(0x5ea4c2);
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
B5ea4c5:{NFSU2_TR(0x5ea4c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea4c6:L5ea4c6:{c.instructions+=2;NFSU2_TR(0x5ea4c6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea4cc:{NFSU2_TR(0x5ea4cc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ea40au);}goto L5ea40a;}
}
B5ea4e0:L5ea4e0:{c.instructions+=5;NFSU2_TR(0x5ea4e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea4e4:{NFSU2_TR(0x5ea4e4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
}
B5ea4ea:{NFSU2_TR(0x5ea4ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea4eb:{NFSU2_TR(0x5ea4eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea4ec:{NFSU2_TR(0x5ea4ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea4f1ull));
TAIL_STATIC(0x43c140u,43c);
}
B5ea4f1:L5ea4f1:{c.instructions+=2;NFSU2_TR(0x5ea4f1);
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
B5ea4f4:{NFSU2_TR(0x5ea4f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea500:L5ea500:{c.instructions+=5;NFSU2_TR(0x5ea500);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea504:{NFSU2_TR(0x5ea504);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
}
B5ea50a:{NFSU2_TR(0x5ea50a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea50b:{NFSU2_TR(0x5ea50b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea50c:{NFSU2_TR(0x5ea50c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea511ull));
TAIL_STATIC(0x43c170u,43c);
}
B5ea511:L5ea511:{c.instructions+=2;NFSU2_TR(0x5ea511);
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
B5ea514:{NFSU2_TR(0x5ea514);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea520:L5ea520:{c.instructions+=2;NFSU2_TR(0x5ea520);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
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
B5ea526:{NFSU2_TR(0x5ea526);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea530:L5ea530:{c.instructions+=8;NFSU2_TR(0x5ea530);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea531:{NFSU2_TR(0x5ea531);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea532:{NFSU2_TR(0x5ea532);
__builtin_memmove((R+20),(R+4),4);
}
B5ea534:{NFSU2_TR(0x5ea534);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea537:{NFSU2_TR(0x5ea537);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea538:{NFSU2_TR(0x5ea538);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ea53a:{NFSU2_TR(0x5ea53a);
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
B5ea53c:{NFSU2_TR(0x5ea53c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea633;}}
}
B5ea542:L5ea542:{c.instructions+=9;NFSU2_TR(0x5ea542);
__builtin_memmove((R+0),gp(0x7fb720),4);
}
B5ea547:{NFSU2_TR(0x5ea547);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ea54a:{NFSU2_TR(0x5ea54a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ea54d:{NFSU2_TR(0x5ea54d);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5ea552:{NFSU2_TR(0x5ea552);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea553:{NFSU2_TR(0x5ea553);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5ea556:{NFSU2_TR(0x5ea556);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5ea55a:{NFSU2_TR(0x5ea55a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ea560:{NFSU2_TR(0x5ea560);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea5d4;}}
}
B5ea562:L5ea562:{c.instructions+=3;NFSU2_TR(0x5ea562);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ea565:{NFSU2_TR(0x5ea565);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ea569:{NFSU2_TR(0x5ea569);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ea5aa;}}
}
B5ea56b:L5ea56b:{c.instructions+=2;NFSU2_TR(0x5ea56b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea56c:{NFSU2_TR(0x5ea56c);
w4(R+24,u32(0xbd0ull));
}
B5ea571:L5ea571:{c.instructions+=8;NFSU2_TR(0x5ea571);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5ea574:{NFSU2_TR(0x5ea574);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ea576:{NFSU2_TR(0x5ea576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ea578:{NFSU2_TR(0x5ea578);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B5ea57b:{NFSU2_TR(0x5ea57b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea57c:{NFSU2_TR(0x5ea57c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x60ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ea57f:{NFSU2_TR(0x5ea57f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea580:{NFSU2_TR(0x5ea580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea585ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5ea585:L5ea585:{c.instructions+=5;NFSU2_TR(0x5ea585);
{u32 ea_=u32(u32(7881848u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ea58b:{NFSU2_TR(0x5ea58b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ea58e:{NFSU2_TR(0x5ea58e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ea590:{NFSU2_TR(0x5ea590);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ea593:{NFSU2_TR(0x5ea593);
if(r1(R+514)){{goto L5ea599;}}
}
B5ea595:L5ea595:{c.instructions+=1;NFSU2_TR(0x5ea595);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5ea599:L5ea599:{c.instructions+=6;NFSU2_TR(0x5ea599);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5ea59e:{NFSU2_TR(0x5ea59e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ea5a1:{NFSU2_TR(0x5ea5a1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5ea5a2:{NFSU2_TR(0x5ea5a2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5ea5a5:{NFSU2_TR(0x5ea5a5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ea5a7:{NFSU2_TR(0x5ea5a7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ea571u);}goto L5ea571;}}
}
B5ea5a9:L5ea5a9:{c.instructions+=1;NFSU2_TR(0x5ea5a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ea5aa:L5ea5aa:{c.instructions+=9;NFSU2_TR(0x5ea5aa);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ea5ae:{NFSU2_TR(0x5ea5ae);
u8 U[4];
w4(U+0,u32(0x7a5bd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea5b3:{NFSU2_TR(0x5ea5b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea5b4:{NFSU2_TR(0x5ea5b4);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B5ea5ba:{NFSU2_TR(0x5ea5ba);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ea5c0:{NFSU2_TR(0x5ea5c0);
{u32 ea_=u32(u32(8017180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ea5c6:{NFSU2_TR(0x5ea5c6);
{u32 ea_=u32(u32(8017176u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ea5cc:{NFSU2_TR(0x5ea5cc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ea5cf:{NFSU2_TR(0x5ea5cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea5d4ull));
TAIL_STATIC(0x578e90u,578);
}
B5ea5d4:L5ea5d4:{c.instructions+=4;NFSU2_TR(0x5ea5d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea5d7:{NFSU2_TR(0x5ea5d7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ea5da:{NFSU2_TR(0x5ea5da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ea5db:{NFSU2_TR(0x5ea5db);
if(r1(R+518)){{goto L5ea60b;}}
}
B5ea5dd:L5ea5dd:{c.instructions+=2;NFSU2_TR(0x5ea5dd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ea5e0:{NFSU2_TR(0x5ea5e0);
if(r1(R+518)){{goto L5ea60b;}}
}
B5ea5e2:L5ea5e2:{c.instructions+=3;NFSU2_TR(0x5ea5e2);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B5ea5e7:{NFSU2_TR(0x5ea5e7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ea5ea:{NFSU2_TR(0x5ea5ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea5fd;}}
}
B5ea5ec:L5ea5ec:{c.instructions+=2;NFSU2_TR(0x5ea5ec);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ea5f3:{NFSU2_TR(0x5ea5f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea602;}}
}
B5ea5f5:L5ea5f5:{c.instructions+=2;NFSU2_TR(0x5ea5f5);
{u32 ea_=u32(u32(8017056u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea5fb:{NFSU2_TR(0x5ea5fb);
{goto L5ea611;}
}
B5ea5fd:L5ea5fd:{c.instructions+=2;NFSU2_TR(0x5ea5fd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ea600:{NFSU2_TR(0x5ea600);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ea5f5u);}goto L5ea5f5;}}
}
B5ea602:L5ea602:{c.instructions+=2;NFSU2_TR(0x5ea602);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ea609:{NFSU2_TR(0x5ea609);
{goto L5ea61f;}
}
B5ea60b:L5ea60b:{c.instructions+=1;NFSU2_TR(0x5ea60b);
{u32 ea_=u32(u32(8017052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea611:L5ea611:{c.instructions+=2;NFSU2_TR(0x5ea611);
{u32 ea_=u32(u32(7894416u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ea617:{NFSU2_TR(0x5ea617);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea61cull));
TAIL_STATIC(0x75bed4u,75b);
}
B5ea61c:L5ea61c:{c.instructions+=1;NFSU2_TR(0x5ea61c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ea61f:L5ea61f:{c.instructions+=3;NFSU2_TR(0x5ea61f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea622:{NFSU2_TR(0x5ea622);
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
B5ea624:{NFSU2_TR(0x5ea624);
if(r1(R+518)){{goto L5ea633;}}
}
B5ea626:L5ea626:{c.instructions+=5;NFSU2_TR(0x5ea626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ea627:{NFSU2_TR(0x5ea627);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ea62a:{NFSU2_TR(0x5ea62a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ea62b:{NFSU2_TR(0x5ea62b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ea62e:{NFSU2_TR(0x5ea62e);
TAIL_STATIC(0x592500u,592);
}
B5ea633:L5ea633:{c.instructions+=4;NFSU2_TR(0x5ea633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ea634:{NFSU2_TR(0x5ea634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ea635:{NFSU2_TR(0x5ea635);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ea636:{NFSU2_TR(0x5ea636);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea640:L5ea640:{c.instructions+=4;NFSU2_TR(0x5ea640);
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
B5ea643:{NFSU2_TR(0x5ea643);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x644ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ea649:{NFSU2_TR(0x5ea649);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x648ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ea64f:{NFSU2_TR(0x5ea64f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea650:L5ea650:{c.instructions+=8;NFSU2_TR(0x5ea650);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B5ea655:{NFSU2_TR(0x5ea655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ea657:{NFSU2_TR(0x5ea657);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea658:{NFSU2_TR(0x5ea658);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ea65a:{NFSU2_TR(0x5ea65a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ea65d:{NFSU2_TR(0x5ea65d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea65e:{NFSU2_TR(0x5ea65e);
__builtin_memmove((R+28),(R+4),4);
}
B5ea660:{NFSU2_TR(0x5ea660);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5ea694;}}
}
B5ea662:L5ea662:{c.instructions+=1;NFSU2_TR(0x5ea662);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5ea79cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ea669:L5ea669:{c.instructions+=2;NFSU2_TR(0x5ea669);
w4(R+24,u32(0x8ull));
}
B5ea66e:{NFSU2_TR(0x5ea66e);
{goto L5ea694;}
}
B5ea670:L5ea670:{c.instructions+=2;NFSU2_TR(0x5ea670);
w4(R+24,u32(0x1ull));
}
B5ea675:{NFSU2_TR(0x5ea675);
{goto L5ea694;}
}
B5ea677:L5ea677:{c.instructions+=4;NFSU2_TR(0x5ea677);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea67a:{NFSU2_TR(0x5ea67a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea67c:{NFSU2_TR(0x5ea67c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ea682:{NFSU2_TR(0x5ea682);
if(r1(R+518)){{goto L5ea692;}}
}
B5ea684:L5ea684:{c.instructions+=3;NFSU2_TR(0x5ea684);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ea687:{NFSU2_TR(0x5ea687);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea689:{NFSU2_TR(0x5ea689);
if(r1(R+518)){{goto L5ea692;}}
}
B5ea68b:L5ea68b:{c.instructions+=3;NFSU2_TR(0x5ea68b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ea68e:{NFSU2_TR(0x5ea68e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea690:{NFSU2_TR(0x5ea690);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea694;}}
}
B5ea692:L5ea692:{c.instructions+=1;NFSU2_TR(0x5ea692);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ea694:L5ea694:{c.instructions+=3;NFSU2_TR(0x5ea694);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B5ea699:{NFSU2_TR(0x5ea699);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea69b:{NFSU2_TR(0x5ea69b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea707;}}
}
B5ea69d:L5ea69d:{c.instructions+=2;NFSU2_TR(0x5ea69d);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
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
B5ea6a4:{NFSU2_TR(0x5ea6a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea788;}}
}
B5ea6aa:L5ea6aa:{c.instructions+=1;NFSU2_TR(0x5ea6aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea6afull));
TAIL_STATIC(0x499dc0u,499);
}
B5ea6af:L5ea6af:{c.instructions+=2;NFSU2_TR(0x5ea6af);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ea6b1:{NFSU2_TR(0x5ea6b1);
if(r1(R+518)){{goto L5ea6ba;}}
}
B5ea6b3:L5ea6b3:{c.instructions+=2;NFSU2_TR(0x5ea6b3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ea6b5:{NFSU2_TR(0x5ea6b5);
{goto L5ea788;}
}
B5ea6ba:L5ea6ba:{c.instructions+=2;NFSU2_TR(0x5ea6ba);
w4(R+4,u32(0x827e88ull));
}
B5ea6bf:{NFSU2_TR(0x5ea6bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea6c4ull));
TAIL_STATIC(0x430560u,430);
}
B5ea6c4:L5ea6c4:{c.instructions+=2;NFSU2_TR(0x5ea6c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ea6c6:{NFSU2_TR(0x5ea6c6);
if(r1(R+518)){{goto L5ea6d2;}}
}
B5ea6c8:L5ea6c8:{c.instructions+=2;NFSU2_TR(0x5ea6c8);
w4(R+24,u32(0x8ull));
}
B5ea6cd:{NFSU2_TR(0x5ea6cd);
{goto L5ea788;}
}
B5ea6d2:L5ea6d2:{c.instructions+=1;NFSU2_TR(0x5ea6d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea6d7ull));
TAIL_STATIC(0x4fe4a0u,4fe);
}
B5ea6d7:L5ea6d7:{c.instructions+=2;NFSU2_TR(0x5ea6d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ea6d9:{NFSU2_TR(0x5ea6d9);
if(r1(R+518)){{goto L5ea6e2;}}
}
B5ea6db:L5ea6db:{c.instructions+=2;NFSU2_TR(0x5ea6db);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ea6dd:{NFSU2_TR(0x5ea6dd);
{goto L5ea788;}
}
B5ea6e2:L5ea6e2:{c.instructions+=2;NFSU2_TR(0x5ea6e2);
w4(R+4,u32(0x861e7cull));
}
B5ea6e7:{NFSU2_TR(0x5ea6e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea6ecull));
TAIL_STATIC(0x502420u,502);
}
B5ea6ec:L5ea6ec:{c.instructions+=2;NFSU2_TR(0x5ea6ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ea6ee:{NFSU2_TR(0x5ea6ee);
if(r1(R+518)){{goto L5ea788;}}
}
B5ea6f4:L5ea6f4:{c.instructions+=2;NFSU2_TR(0x5ea6f4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ea6f7:{NFSU2_TR(0x5ea6f7);
if(r1(R+518)){{goto L5ea788;}}
}
B5ea6fd:L5ea6fd:{c.instructions+=2;NFSU2_TR(0x5ea6fd);
w4(R+24,u32(0xaull));
}
B5ea702:{NFSU2_TR(0x5ea702);
{goto L5ea788;}
}
B5ea707:L5ea707:{c.instructions+=3;NFSU2_TR(0x5ea707);
__builtin_memmove((R+0),gp(0x89e7e6),1);
}
B5ea70c:{NFSU2_TR(0x5ea70c);
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
B5ea70e:{NFSU2_TR(0x5ea70e);
if(r1(R+518)){{goto L5ea744;}}
}
B5ea710:L5ea710:{c.instructions+=1;NFSU2_TR(0x5ea710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea715ull));
TAIL_STATIC(0x510050u,510);
}
B5ea715:L5ea715:{c.instructions+=2;NFSU2_TR(0x5ea715);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ea717:{NFSU2_TR(0x5ea717);
if(r1(R+518)){{goto L5ea744;}}
}
B5ea719:L5ea719:{c.instructions+=2;NFSU2_TR(0x5ea719);
w4(R+4,u32(0x827e88ull));
}
B5ea71e:{NFSU2_TR(0x5ea71e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea723ull));
TAIL_STATIC(0x430350u,430);
}
B5ea723:L5ea723:{c.instructions+=2;NFSU2_TR(0x5ea723);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ea725:{NFSU2_TR(0x5ea725);
if(r1(R+518)){{goto L5ea72e;}}
}
B5ea727:L5ea727:{c.instructions+=2;NFSU2_TR(0x5ea727);
w4(R+24,u32(0x8ull));
}
B5ea72c:{NFSU2_TR(0x5ea72c);
{goto L5ea788;}
}
B5ea72e:L5ea72e:{c.instructions+=2;NFSU2_TR(0x5ea72e);
w4(R+4,u32(0x827e88ull));
}
B5ea733:{NFSU2_TR(0x5ea733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea738ull));
TAIL_STATIC(0x430420u,430);
}
B5ea738:L5ea738:{c.instructions+=6;NFSU2_TR(0x5ea738);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B5ea73a:{NFSU2_TR(0x5ea73a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5ea73c:{NFSU2_TR(0x5ea73c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8ull))));
}
B5ea73f:{NFSU2_TR(0x5ea73f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ea740:{NFSU2_TR(0x5ea740);
__builtin_memmove((R+24),(R+0),4);
}
B5ea742:{NFSU2_TR(0x5ea742);
{goto L5ea788;}
}
B5ea744:L5ea744:{c.instructions+=5;NFSU2_TR(0x5ea744);
{u32 ea_=u32(u32(9037752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea74a:{NFSU2_TR(0x5ea74a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ea750:{NFSU2_TR(0x5ea750);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ea752:{NFSU2_TR(0x5ea752);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ea755:{NFSU2_TR(0x5ea755);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea76a;}}
}
B5ea757:L5ea757:{c.instructions+=3;NFSU2_TR(0x5ea757);
__builtin_memmove((R+0),gp(0x890118),4);
}
B5ea75c:{NFSU2_TR(0x5ea75c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea75e:{NFSU2_TR(0x5ea75e);
if(r1(R+518)){{goto L5ea76a;}}
}
B5ea760:L5ea760:{c.instructions+=2;NFSU2_TR(0x5ea760);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5ea763:{NFSU2_TR(0x5ea763);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea76a;}}
}
B5ea765:L5ea765:{c.instructions+=1;NFSU2_TR(0x5ea765);
w4(R+24,u32(0x4ull));
}
B5ea76a:L5ea76a:{c.instructions+=3;NFSU2_TR(0x5ea76a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea76d:{NFSU2_TR(0x5ea76d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea76f:{NFSU2_TR(0x5ea76f);
if(r1(R+518)){{goto L5ea776;}}
}
B5ea771:L5ea771:{c.instructions+=1;NFSU2_TR(0x5ea771);
w4(R+24,u32(0x9ull));
}
B5ea776:L5ea776:{c.instructions+=4;NFSU2_TR(0x5ea776);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ea779:{NFSU2_TR(0x5ea779);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8020e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ea77f:{NFSU2_TR(0x5ea77f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ea781:{NFSU2_TR(0x5ea781);
if(r1(R+518)){{goto L5ea788;}}
}
B5ea783:L5ea783:{c.instructions+=1;NFSU2_TR(0x5ea783);
w4(R+24,u32(0x6ull));
}
B5ea788:L5ea788:{c.instructions+=2;NFSU2_TR(0x5ea788);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5ea78e:{NFSU2_TR(0x5ea78e);
if(r1(R+518)){{goto L5ea798;}}
}
B5ea790:L5ea790:{c.instructions+=3;NFSU2_TR(0x5ea790);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea791:{NFSU2_TR(0x5ea791);
__builtin_memmove((R+4),(R+28),4);
}
B5ea793:{NFSU2_TR(0x5ea793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea798ull));
TAIL_STATIC(0x605c70u,605);
}
B5ea798:L5ea798:{c.instructions+=3;NFSU2_TR(0x5ea798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ea799:{NFSU2_TR(0x5ea799);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ea79a:{NFSU2_TR(0x5ea79a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea7c0:L5ea7c0:{c.instructions+=3;NFSU2_TR(0x5ea7c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea7c6:{NFSU2_TR(0x5ea7c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea7c8:{NFSU2_TR(0x5ea7c8);
if(r1(R+518)){{goto L5ea7f6;}}
}
B5ea7ca:L5ea7ca:{c.instructions+=2;NFSU2_TR(0x5ea7ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ea7ce:{NFSU2_TR(0x5ea7ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea7f6;}}
}
B5ea7d0:L5ea7d0:{c.instructions+=3;NFSU2_TR(0x5ea7d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ea7d3:{NFSU2_TR(0x5ea7d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea7d5:{NFSU2_TR(0x5ea7d5);
if(r1(R+518)){{goto L5ea7f6;}}
}
B5ea7d7:L5ea7d7:{c.instructions+=5;NFSU2_TR(0x5ea7d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ea7da:{NFSU2_TR(0x5ea7da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5ea7dd:{NFSU2_TR(0x5ea7dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa74ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5ea7e4:{NFSU2_TR(0x5ea7e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea7e5:{NFSU2_TR(0x5ea7e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea7eaull));
TAIL_STATIC(0x502500u,502);
}
B5ea7ea:L5ea7ea:{c.instructions+=6;NFSU2_TR(0x5ea7ea);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
}
B5ea7ed:{NFSU2_TR(0x5ea7ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ea7f0:{NFSU2_TR(0x5ea7f0);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B5ea7f2:{NFSU2_TR(0x5ea7f2);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5ea7f4:{NFSU2_TR(0x5ea7f4);
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
B5ea7f5:{NFSU2_TR(0x5ea7f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea7f6:L5ea7f6:{c.instructions+=2;NFSU2_TR(0x5ea7f6);
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
B5ea7f8:{NFSU2_TR(0x5ea7f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea800:L5ea800:{c.instructions+=18;NFSU2_TR(0x5ea800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B5ea803:{NFSU2_TR(0x5ea803);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea804:{NFSU2_TR(0x5ea804);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B5ea808:{NFSU2_TR(0x5ea808);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea809:{NFSU2_TR(0x5ea809);
w4(R+0,u32(0x2ull));
}
B5ea80e:{NFSU2_TR(0x5ea80e);
u8 U[8];
__builtin_memmove((U+0),gp(0x8900bc),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ea814:{NFSU2_TR(0x5ea814);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea815:{NFSU2_TR(0x5ea815);
w4(R+28,u32(0x3ull));
}
B5ea81a:{NFSU2_TR(0x5ea81a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ea822:{NFSU2_TR(0x5ea822);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ea82a:{NFSU2_TR(0x5ea82a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ea82e:{NFSU2_TR(0x5ea82e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ea832:{NFSU2_TR(0x5ea832);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ea83a:{NFSU2_TR(0x5ea83a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ea83e:{NFSU2_TR(0x5ea83e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ea842:{NFSU2_TR(0x5ea842);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5ea846:{NFSU2_TR(0x5ea846);
w4(R+8,u32(0x4ull));
}
B5ea84b:{NFSU2_TR(0x5ea84b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea853;}}
}
B5ea84d:L5ea84d:{c.instructions+=2;NFSU2_TR(0x5ea84d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5ea851:{NFSU2_TR(0x5ea851);
__builtin_memmove((R+8),(R+28),4);
}
B5ea853:L5ea853:{c.instructions+=4;NFSU2_TR(0x5ea853);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ea855:{NFSU2_TR(0x5ea855);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ea857:{NFSU2_TR(0x5ea857);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea859:{NFSU2_TR(0x5ea859);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ea86c;}}
}
B5ea85b:L5ea85b:{c.instructions+=1;NFSU2_TR(0x5ea85b);
{goto L5ea860;}
}
B5ea860:L5ea860:{c.instructions+=2;NFSU2_TR(0x5ea860);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B5ea863:{NFSU2_TR(0x5ea863);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea867;}}
}
B5ea865:L5ea865:{c.instructions+=1;NFSU2_TR(0x5ea865);
__builtin_memmove((R+28),(R+0),4);
}
B5ea867:L5ea867:{c.instructions+=3;NFSU2_TR(0x5ea867);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ea868:{NFSU2_TR(0x5ea868);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ea86a:{NFSU2_TR(0x5ea86a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ea860u);}goto L5ea860;}}
}
B5ea86c:L5ea86c:{c.instructions+=2;NFSU2_TR(0x5ea86c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
}
B5ea870:{NFSU2_TR(0x5ea870);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5ea875;}}
}
B5ea872:L5ea872:{c.instructions+=1;NFSU2_TR(0x5ea872);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ea875:L5ea875:{c.instructions+=2;NFSU2_TR(0x5ea875);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ea877:{NFSU2_TR(0x5ea877);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5ea88a;}}
}
B5ea879:L5ea879:{c.instructions+=8;NFSU2_TR(0x5ea879);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ea87b:{NFSU2_TR(0x5ea87b);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B5ea87e:{NFSU2_TR(0x5ea87e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ea87f:{NFSU2_TR(0x5ea87f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ea880:{NFSU2_TR(0x5ea880);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ea883:{NFSU2_TR(0x5ea883);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ea884:{NFSU2_TR(0x5ea884);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ea887:{NFSU2_TR(0x5ea887);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea88a:L5ea88a:{c.instructions+=7;NFSU2_TR(0x5ea88a);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B5ea88d:{NFSU2_TR(0x5ea88d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ea88e:{NFSU2_TR(0x5ea88e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ea88f:{NFSU2_TR(0x5ea88f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ea892:{NFSU2_TR(0x5ea892);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ea893:{NFSU2_TR(0x5ea893);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ea896:{NFSU2_TR(0x5ea896);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea8a0:L5ea8a0:{c.instructions+=5;NFSU2_TR(0x5ea8a0);
__builtin_memmove((R+4),gp(0x83aa1a),1);
}
B5ea8a6:{NFSU2_TR(0x5ea8a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ea8a8:{NFSU2_TR(0x5ea8a8);
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
B5ea8aa:{NFSU2_TR(0x5ea8aa);
__builtin_memmove((R+0),(R+518),1);
}
B5ea8ad:{NFSU2_TR(0x5ea8ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea8b0:L5ea8b0:{c.instructions+=5;NFSU2_TR(0x5ea8b0);
__builtin_memmove((R+4),gp(0x83aa1a),1);
}
B5ea8b6:{NFSU2_TR(0x5ea8b6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ea8b8:{NFSU2_TR(0x5ea8b8);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x1ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ea8bb:{NFSU2_TR(0x5ea8bb);
__builtin_memmove((R+0),(R+518),1);
}
B5ea8be:{NFSU2_TR(0x5ea8be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea8c0:L5ea8c0:{c.instructions+=9;NFSU2_TR(0x5ea8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ea8c3:{NFSU2_TR(0x5ea8c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea8c4:{NFSU2_TR(0x5ea8c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5ea8c7:{NFSU2_TR(0x5ea8c7);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa67ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B5ea8ce:{NFSU2_TR(0x5ea8ce);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ea8d0:{NFSU2_TR(0x5ea8d0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5ea8d2:{NFSU2_TR(0x5ea8d2);
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
B5ea8d4:{NFSU2_TR(0x5ea8d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ea8d5:{NFSU2_TR(0x5ea8d5);
if(r1(R+518)){{goto L5ea8dc;}}
}
B5ea8d7:L5ea8d7:{c.instructions+=1;NFSU2_TR(0x5ea8d7);
w4(R+0,u32(0x20000ull));
}
B5ea8dc:L5ea8dc:{c.instructions+=1;NFSU2_TR(0x5ea8dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea8e0:L5ea8e0:{c.instructions+=7;NFSU2_TR(0x5ea8e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea8e1:{NFSU2_TR(0x5ea8e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea8e2:{NFSU2_TR(0x5ea8e2);
__builtin_memmove((R+24),gp(0x89e7b0),4);
}
B5ea8e8:{NFSU2_TR(0x5ea8e8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ea8ea:{NFSU2_TR(0x5ea8ea);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5ea8ec:{NFSU2_TR(0x5ea8ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea8ee:{NFSU2_TR(0x5ea8ee);
if(r1(R+518)){{goto L5ea8fc;}}
}
B5ea8f0:L5ea8f0:{c.instructions+=3;NFSU2_TR(0x5ea8f0);
__builtin_memmove((R+12),gp(0x83aa1b),1);
}
B5ea8f6:{NFSU2_TR(0x5ea8f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ea8f8:{NFSU2_TR(0x5ea8f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea906;}}
}
B5ea8fa:L5ea8fa:{c.instructions+=1;NFSU2_TR(0x5ea8fa);
{goto L5ea90d;}
}
B5ea8fc:L5ea8fc:{c.instructions+=3;NFSU2_TR(0x5ea8fc);
__builtin_memmove((R+12),gp(0x83aa1c),1);
}
B5ea902:{NFSU2_TR(0x5ea902);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ea904:{NFSU2_TR(0x5ea904);
if(r1(R+518)){{goto L5ea90d;}}
}
B5ea906:L5ea906:{c.instructions+=2;NFSU2_TR(0x5ea906);
w4(R+0,u32(0x1ull));
}
B5ea90b:{NFSU2_TR(0x5ea90b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5ea90d:L5ea90d:{c.instructions+=2;NFSU2_TR(0x5ea90d);
u8 U[8];
__builtin_memmove((U+0),gp(0x8900bc),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ea914:{NFSU2_TR(0x5ea914);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea91f;}}
}
B5ea916:L5ea916:{c.instructions+=2;NFSU2_TR(0x5ea916);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ea91a:{NFSU2_TR(0x5ea91a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea91f;}}
}
B5ea91c:L5ea91c:{c.instructions+=1;NFSU2_TR(0x5ea91c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B5ea91f:L5ea91f:{c.instructions+=4;NFSU2_TR(0x5ea91f);
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
B5ea921:{NFSU2_TR(0x5ea921);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ea922:{NFSU2_TR(0x5ea922);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ea923:{NFSU2_TR(0x5ea923);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea928;}}
}
B5ea925:L5ea925:{c.instructions+=1;NFSU2_TR(0x5ea925);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ea928:L5ea928:{c.instructions+=1;NFSU2_TR(0x5ea928);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea930:L5ea930:{c.instructions+=3;NFSU2_TR(0x5ea930);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea936:{NFSU2_TR(0x5ea936);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea938:{NFSU2_TR(0x5ea938);
if(r1(R+518)){{goto L5ea971;}}
}
B5ea93a:L5ea93a:{c.instructions+=3;NFSU2_TR(0x5ea93a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ea93d:{NFSU2_TR(0x5ea93d);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea93f:{NFSU2_TR(0x5ea93f);
if(r1(R+518)){{goto L5ea971;}}
}
B5ea941:L5ea941:{c.instructions+=3;NFSU2_TR(0x5ea941);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea944:{NFSU2_TR(0x5ea944);
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
B5ea947:{NFSU2_TR(0x5ea947);
if(r1(R+518)){{goto L5ea95b;}}
}
B5ea949:L5ea949:{c.instructions+=3;NFSU2_TR(0x5ea949);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ea94c:{NFSU2_TR(0x5ea94c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5ea94f:{NFSU2_TR(0x5ea94f);
if(r1(R+518)){{goto L5ea95b;}}
}
B5ea951:L5ea951:{c.instructions+=2;NFSU2_TR(0x5ea951);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ea954:{NFSU2_TR(0x5ea954);
if(r1(R+518)){{goto L5ea95b;}}
}
B5ea956:L5ea956:{c.instructions+=2;NFSU2_TR(0x5ea956);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x12ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x12ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ea959:{NFSU2_TR(0x5ea959);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea961;}}
}
B5ea95b:L5ea95b:{c.instructions+=2;NFSU2_TR(0x5ea95b);
w4(R+0,u32(0x40ull));
}
B5ea960:{NFSU2_TR(0x5ea960);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea961:L5ea961:{c.instructions+=3;NFSU2_TR(0x5ea961);
__builtin_memmove((R+0),gp(0x89e82c),1);
}
B5ea966:{NFSU2_TR(0x5ea966);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ea968:{NFSU2_TR(0x5ea968);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea971;}}
}
B5ea96a:L5ea96a:{c.instructions+=1;NFSU2_TR(0x5ea96a);
s1(0x89e82c,u8(0x1ull));
}
B5ea971:L5ea971:{c.instructions+=2;NFSU2_TR(0x5ea971);
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
B5ea973:{NFSU2_TR(0x5ea973);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea980:L5ea980:{c.instructions+=5;NFSU2_TR(0x5ea980);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea981:{NFSU2_TR(0x5ea981);
__builtin_memmove((R+24),(R+4),4);
}
B5ea983:{NFSU2_TR(0x5ea983);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ea989:{NFSU2_TR(0x5ea989);
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
B5ea98b:{NFSU2_TR(0x5ea98b);
if(r1(R+518)){{goto L5ea992;}}
}
B5ea98d:L5ea98d:{c.instructions+=1;NFSU2_TR(0x5ea98d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ea992ull));
TAIL_STATIC(0x4f92a0u,4f9);
}
B5ea992:L5ea992:{c.instructions+=3;NFSU2_TR(0x5ea992);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ea999:{NFSU2_TR(0x5ea999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ea99a:{NFSU2_TR(0x5ea99a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ea9a0:L5ea9a0:{c.instructions+=4;NFSU2_TR(0x5ea9a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ea9a1:{NFSU2_TR(0x5ea9a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ea9a7:{NFSU2_TR(0x5ea9a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ea9a9:{NFSU2_TR(0x5ea9a9);
if(r1(R+518)){{goto L5eaa3c;}}
}
B5ea9af:L5ea9af:{c.instructions+=9;NFSU2_TR(0x5ea9af);
{u32 ea_=u32(u32(8017096u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea9b5:{NFSU2_TR(0x5ea9b5);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ea9b7:{NFSU2_TR(0x5ea9b7);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ea9b9:{NFSU2_TR(0x5ea9b9);
{u32 ea_=u32(r4(R+4)+u32(364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea9bf:{NFSU2_TR(0x5ea9bf);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ea9c3:{NFSU2_TR(0x5ea9c3);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ea9c5:{NFSU2_TR(0x5ea9c5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ea9c7:{NFSU2_TR(0x5ea9c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ea9ca:{NFSU2_TR(0x5ea9ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ea9d2;}}
}
B5ea9cc:L5ea9cc:{c.instructions+=2;NFSU2_TR(0x5ea9cc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ea9ce:{NFSU2_TR(0x5ea9ce);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea9d2:L5ea9d2:{c.instructions+=5;NFSU2_TR(0x5ea9d2);
{u32 ea_=u32(u32(8017096u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea9d8:{NFSU2_TR(0x5ea9d8);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ea9da:{NFSU2_TR(0x5ea9da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ea9dc:{NFSU2_TR(0x5ea9dc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ea9df:{NFSU2_TR(0x5ea9df);
if(r1(R+514)){{goto L5ea9e9;}}
}
B5ea9e1:L5ea9e1:{c.instructions+=2;NFSU2_TR(0x5ea9e1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ea9e3:{NFSU2_TR(0x5ea9e3);
{u32 ea_=u32(u32(8017096u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea9e9:L5ea9e9:{c.instructions+=4;NFSU2_TR(0x5ea9e9);
{u32 ea_=u32(r4(R+4)+u32(364u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ea9ef:{NFSU2_TR(0x5ea9ef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ea9f1:{NFSU2_TR(0x5ea9f1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ea9f4:{NFSU2_TR(0x5ea9f4);
if(r1(R+514)){{goto L5eaa3a;}}
}
B5ea9f6:L5ea9f6:{c.instructions+=6;NFSU2_TR(0x5ea9f6);
{u32 ea_=u32(r4(R+4)+u32(368u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ea9fc:{NFSU2_TR(0x5ea9fc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5eaa00:{NFSU2_TR(0x5eaa00);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5eaa02:{NFSU2_TR(0x5eaa02);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eaa04:{NFSU2_TR(0x5eaa04);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eaa07:{NFSU2_TR(0x5eaa07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eaa0f;}}
}
B5eaa09:L5eaa09:{c.instructions+=2;NFSU2_TR(0x5eaa09);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eaa0b:{NFSU2_TR(0x5eaa0b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eaa0f:L5eaa0f:{c.instructions+=5;NFSU2_TR(0x5eaa0f);
{u32 ea_=u32(u32(8017096u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eaa15:{NFSU2_TR(0x5eaa15);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5eaa17:{NFSU2_TR(0x5eaa17);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eaa19:{NFSU2_TR(0x5eaa19);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5eaa1c:{NFSU2_TR(0x5eaa1c);
if(r1(R+514)){{goto L5eaa26;}}
}
B5eaa1e:L5eaa1e:{c.instructions+=2;NFSU2_TR(0x5eaa1e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eaa20:{NFSU2_TR(0x5eaa20);
{u32 ea_=u32(u32(8017096u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eaa26:L5eaa26:{c.instructions+=4;NFSU2_TR(0x5eaa26);
{u32 ea_=u32(r4(R+4)+u32(368u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5eaa2c:{NFSU2_TR(0x5eaa2c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eaa2e:{NFSU2_TR(0x5eaa2e);
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
B5eaa31:{NFSU2_TR(0x5eaa31);
if(r1(R+514)){{goto L5eaa3c;}}
}
B5eaa33:L5eaa33:{c.instructions+=3;NFSU2_TR(0x5eaa33);
w4(R+0,u32(0x1ull));
}
B5eaa38:{NFSU2_TR(0x5eaa38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eaa39:{NFSU2_TR(0x5eaa39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eaa3a:L5eaa3a:{c.instructions+=1;NFSU2_TR(0x5eaa3a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eaa3c:L5eaa3c:{c.instructions+=3;NFSU2_TR(0x5eaa3c);
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
B5eaa3e:{NFSU2_TR(0x5eaa3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eaa3f:{NFSU2_TR(0x5eaa3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eaa40:L5eaa40:{c.instructions+=16;NFSU2_TR(0x5eaa40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaa41:{NFSU2_TR(0x5eaa41);
__builtin_memmove((R+20),(R+16),4);
}
B5eaa43:{NFSU2_TR(0x5eaa43);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5eaa46:{NFSU2_TR(0x5eaa46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5eaa49:{NFSU2_TR(0x5eaa49);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5eaa4f:{NFSU2_TR(0x5eaa4f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eaa55:{NFSU2_TR(0x5eaa55);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eaa58:{NFSU2_TR(0x5eaa58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eaa5b:{NFSU2_TR(0x5eaa5b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaa5c:{NFSU2_TR(0x5eaa5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaa5d:{NFSU2_TR(0x5eaa5d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5eaa5f:{NFSU2_TR(0x5eaa5f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5eaa61:{NFSU2_TR(0x5eaa61);
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
B5eaa63:{NFSU2_TR(0x5eaa63);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaa64:{NFSU2_TR(0x5eaa64);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eaa68:{NFSU2_TR(0x5eaa68);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5eab7b;}}
}
B5eaa6e:L5eaa6e:{c.instructions+=11;NFSU2_TR(0x5eaa6e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eaa74:{NFSU2_TR(0x5eaa74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5eaa77:{NFSU2_TR(0x5eaa77);
{u32 ea_=u32(u32(8017088u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5eaa7d:{NFSU2_TR(0x5eaa7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5eaa80:{NFSU2_TR(0x5eaa80);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5eaa84:{NFSU2_TR(0x5eaa84);
__builtin_memmove((R+12),(R+0),4);
}
B5eaa86:{NFSU2_TR(0x5eaa86);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eaa8a:{NFSU2_TR(0x5eaa8a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eaa90:{NFSU2_TR(0x5eaa90);
{u32 ea_=u32(u32(8017092u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5eaa96:{NFSU2_TR(0x5eaa96);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eaa9a:{NFSU2_TR(0x5eaa9a);
__builtin_memmove((R+12),(R+12),4);
}
B5eaaa0:L5eaaa0:{c.instructions+=39;NFSU2_TR(0x5eaaa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5eaaa2:{NFSU2_TR(0x5eaaa2);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eaaa5:{NFSU2_TR(0x5eaaa5);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5eaaa7:{NFSU2_TR(0x5eaaa7);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eaaaa:{NFSU2_TR(0x5eaaaa);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5eaaad:{NFSU2_TR(0x5eaaad);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eaab0:{NFSU2_TR(0x5eaab0);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5eaab3:{NFSU2_TR(0x5eaab3);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5eaab5:{NFSU2_TR(0x5eaab5);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5eaab7:{NFSU2_TR(0x5eaab7);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5eaab9:{NFSU2_TR(0x5eaab9);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5eaabb:{NFSU2_TR(0x5eaabb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5eaabd:{NFSU2_TR(0x5eaabd);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5eaabf:{NFSU2_TR(0x5eaabf);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5eaac1:{NFSU2_TR(0x5eaac1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5eaac3:{NFSU2_TR(0x5eaac3);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5eaac5:{NFSU2_TR(0x5eaac5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eaac9:{NFSU2_TR(0x5eaac9);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5eaacb:{NFSU2_TR(0x5eaacb);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eaacd:{NFSU2_TR(0x5eaacd);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5eaacf:{NFSU2_TR(0x5eaacf);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eaad2:{NFSU2_TR(0x5eaad2);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5eaad4:{NFSU2_TR(0x5eaad4);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eaad7:{NFSU2_TR(0x5eaad7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5eaad9:{NFSU2_TR(0x5eaad9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eaadd:{NFSU2_TR(0x5eaadd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eaae1:{NFSU2_TR(0x5eaae1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eaae5:{NFSU2_TR(0x5eaae5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eaae9:{NFSU2_TR(0x5eaae9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eaaed:{NFSU2_TR(0x5eaaed);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eaaf1:{NFSU2_TR(0x5eaaf1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eaaf5:{NFSU2_TR(0x5eaaf5);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B5eaaf7:{NFSU2_TR(0x5eaaf7);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5eaaf9:{NFSU2_TR(0x5eaaf9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eaafd:{NFSU2_TR(0x5eaafd);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eab01:{NFSU2_TR(0x5eab01);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5eab07:{NFSU2_TR(0x5eab07);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eab09:{NFSU2_TR(0x5eab09);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eab0c:{NFSU2_TR(0x5eab0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eab73;}}
}
B5eab0e:L5eab0e:{c.instructions+=6;NFSU2_TR(0x5eab0e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5eab10:{NFSU2_TR(0x5eab10);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eab16:{NFSU2_TR(0x5eab16);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B5eab18:{NFSU2_TR(0x5eab18);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eab1a:{NFSU2_TR(0x5eab1a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5eab1d:{NFSU2_TR(0x5eab1d);
if(r1(R+514)){{goto L5eab27;}}
}
B5eab1f:L5eab1f:{c.instructions+=2;NFSU2_TR(0x5eab1f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eab21:{NFSU2_TR(0x5eab21);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eab27:L5eab27:{c.instructions+=6;NFSU2_TR(0x5eab27);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5eab29:{NFSU2_TR(0x5eab29);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5eab2b:{NFSU2_TR(0x5eab2b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eab2d:{NFSU2_TR(0x5eab2d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eab2f:{NFSU2_TR(0x5eab2f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5eab32:{NFSU2_TR(0x5eab32);
if(r1(R+514)){{goto L5eab5a;}}
}
B5eab34:L5eab34:{c.instructions+=5;NFSU2_TR(0x5eab34);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eab38:{NFSU2_TR(0x5eab38);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5eab3e:{NFSU2_TR(0x5eab3e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eab40:{NFSU2_TR(0x5eab40);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5eab43:{NFSU2_TR(0x5eab43);
if(r1(R+514)){{goto L5eab5a;}}
}
B5eab45:L5eab45:{c.instructions+=4;NFSU2_TR(0x5eab45);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5eab49:{NFSU2_TR(0x5eab49);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eab4b:{NFSU2_TR(0x5eab4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eab4e:{NFSU2_TR(0x5eab4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eab5a;}}
}
B5eab50:L5eab50:{c.instructions+=3;NFSU2_TR(0x5eab50);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eab52:{NFSU2_TR(0x5eab52);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eab56:{NFSU2_TR(0x5eab56);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eab5a:L5eab5a:{c.instructions+=3;NFSU2_TR(0x5eab5a);
w1(R+512,carry<u32>(r4(R+8),u32(0x4ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5eab5d:{NFSU2_TR(0x5eab5d);
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
B5eab5e:{NFSU2_TR(0x5eab5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eaaa0u);}goto L5eaaa0;}}
}
B5eab64:L5eab64:{c.instructions+=8;NFSU2_TR(0x5eab64);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eab68:{NFSU2_TR(0x5eab68);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eab6a:{NFSU2_TR(0x5eab6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eab6b:{NFSU2_TR(0x5eab6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eab6c:{NFSU2_TR(0x5eab6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5eab6d:{NFSU2_TR(0x5eab6d);
__builtin_memmove((R+16),(R+20),4);
}
B5eab6f:{NFSU2_TR(0x5eab6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5eab70:{NFSU2_TR(0x5eab70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eab73:L5eab73:{c.instructions+=2;NFSU2_TR(0x5eab73);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eab79:{NFSU2_TR(0x5eab79);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5eab27u);}goto L5eab27;}
}
B5eab7b:L5eab7b:{c.instructions+=8;NFSU2_TR(0x5eab7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eab7c:{NFSU2_TR(0x5eab7c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eab7e:{NFSU2_TR(0x5eab7e);
__builtin_memmove((R+0),(R+24),4);
}
B5eab80:{NFSU2_TR(0x5eab80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eab81:{NFSU2_TR(0x5eab81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5eab82:{NFSU2_TR(0x5eab82);
__builtin_memmove((R+16),(R+20),4);
}
B5eab84:{NFSU2_TR(0x5eab84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5eab85:{NFSU2_TR(0x5eab85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eab90:L5eab90:{c.instructions+=12;NFSU2_TR(0x5eab90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eab91:{NFSU2_TR(0x5eab91);
__builtin_memmove((R+20),(R+16),4);
}
B5eab93:{NFSU2_TR(0x5eab93);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5eab96:{NFSU2_TR(0x5eab96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B5eab99:{NFSU2_TR(0x5eab99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eab9c:{NFSU2_TR(0x5eab9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eab9f:{NFSU2_TR(0x5eab9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaba0:{NFSU2_TR(0x5eaba0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaba1:{NFSU2_TR(0x5eaba1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaba2:{NFSU2_TR(0x5eaba2);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5eaba6:{NFSU2_TR(0x5eaba6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaba7:{NFSU2_TR(0x5eaba7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eabacull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5eabac:L5eabac:{c.instructions+=6;NFSU2_TR(0x5eabac);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eabb2:{NFSU2_TR(0x5eabb2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5eabb6:{NFSU2_TR(0x5eabb6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5eabb9:{NFSU2_TR(0x5eabb9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eabbb:{NFSU2_TR(0x5eabbb);
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
B5eabbe:{NFSU2_TR(0x5eabbe);
if(r1(R+514)){{goto L5eabd5;}}
}
B5eabc0:L5eabc0:{c.instructions+=7;NFSU2_TR(0x5eabc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eabc3:{NFSU2_TR(0x5eabc3);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5eabc9:{NFSU2_TR(0x5eabc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5eabd0:{NFSU2_TR(0x5eabd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eabd1:{NFSU2_TR(0x5eabd1);
__builtin_memmove((R+16),(R+20),4);
}
B5eabd3:{NFSU2_TR(0x5eabd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5eabd4:{NFSU2_TR(0x5eabd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eabd5:L5eabd5:{c.instructions+=15;NFSU2_TR(0x5eabd5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eabd9:{NFSU2_TR(0x5eabd9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5eabdb:{NFSU2_TR(0x5eabdb);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5eabdd:{NFSU2_TR(0x5eabdd);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B5eabe1:{NFSU2_TR(0x5eabe1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eabe5:{NFSU2_TR(0x5eabe5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eabeb:{NFSU2_TR(0x5eabeb);
w2(R+24,shr<u16>(r2(R+24),u64(u32(0x1ull))));
}
B5eabee:{NFSU2_TR(0x5eabee);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5eabf2:{NFSU2_TR(0x5eabf2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eabf3:{NFSU2_TR(0x5eabf3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eabf7:{NFSU2_TR(0x5eabf7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5eabf9:{NFSU2_TR(0x5eabf9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eabfd:{NFSU2_TR(0x5eabfd);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eac01:{NFSU2_TR(0x5eac01);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eac05:{NFSU2_TR(0x5eac05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eac0aull));
TAIL_STATIC(0x43c2b0u,43c);
}
B5eac0a:L5eac0a:{c.instructions+=3;NFSU2_TR(0x5eac0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eac0b:{NFSU2_TR(0x5eac0b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eac0f:{NFSU2_TR(0x5eac0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eac14ull));
TAIL_STATIC(0x43c370u,43c);
}
B5eac14:L5eac14:{c.instructions+=4;NFSU2_TR(0x5eac14);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5eac18:{NFSU2_TR(0x5eac18);
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
B5eac1b:{NFSU2_TR(0x5eac1b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eac1f:{NFSU2_TR(0x5eac1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eac24ull));
TAIL_STATIC(0x5bc200u,5bc);
}
B5eac24:L5eac24:{c.instructions+=5;NFSU2_TR(0x5eac24);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eac28:{NFSU2_TR(0x5eac28);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5eac2c:{NFSU2_TR(0x5eac2c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eac30:{NFSU2_TR(0x5eac30);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eac34:{NFSU2_TR(0x5eac34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eac39ull));
TAIL_STATIC(0x5bc1f0u,5bc);
}
B5eac39:L5eac39:{c.instructions+=15;NFSU2_TR(0x5eac39);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eac3d:{NFSU2_TR(0x5eac3d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5eac41:{NFSU2_TR(0x5eac41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eac44:{NFSU2_TR(0x5eac44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eac45:{NFSU2_TR(0x5eac45);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5eac49:{NFSU2_TR(0x5eac49);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eac4d:{NFSU2_TR(0x5eac4d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5eac51:{NFSU2_TR(0x5eac51);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eac53:{NFSU2_TR(0x5eac53);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eac57:{NFSU2_TR(0x5eac57);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5eac59:{NFSU2_TR(0x5eac59);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eac5c:{NFSU2_TR(0x5eac5c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eac5e:{NFSU2_TR(0x5eac5e);
__builtin_memmove((R+16),(R+20),4);
}
B5eac60:{NFSU2_TR(0x5eac60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5eac61:{NFSU2_TR(0x5eac61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eac70:L5eac70:{c.instructions+=4;NFSU2_TR(0x5eac70);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5eac76:{NFSU2_TR(0x5eac76);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5eac78:{NFSU2_TR(0x5eac78);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eac7b:{NFSU2_TR(0x5eac7b);
if(r1(R+518)){{goto L5eac8f;}}
}
B5eac7d:L5eac7d:{c.instructions+=4;NFSU2_TR(0x5eac7d);
__builtin_memmove((R+4),gp(0x890118),4);
}
B5eac83:{NFSU2_TR(0x5eac83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eac89:{NFSU2_TR(0x5eac89);
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
B5eac8b:{NFSU2_TR(0x5eac8b);
if(r1(R+518)){{goto L5eac8f;}}
}
B5eac8d:L5eac8d:{c.instructions+=1;NFSU2_TR(0x5eac8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5eac8f:L5eac8f:{c.instructions+=1;NFSU2_TR(0x5eac8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eac90:L5eac90:{c.instructions+=12;NFSU2_TR(0x5eac90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eac91:{NFSU2_TR(0x5eac91);
__builtin_memmove((R+20),(R+16),4);
}
B5eac93:{NFSU2_TR(0x5eac93);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5eac96:{NFSU2_TR(0x5eac96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa4ull))));
}
B5eac9c:{NFSU2_TR(0x5eac9c);
__builtin_memmove((R+8),gp(0x82da60),4);
}
B5eaca2:{NFSU2_TR(0x5eaca2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaca3:{NFSU2_TR(0x5eaca3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaca4:{NFSU2_TR(0x5eaca4);
__builtin_memmove((R+24),gp(0x82da5c),4);
}
B5eacaa:{NFSU2_TR(0x5eacaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5eacad:{NFSU2_TR(0x5eacad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5eacaf:{NFSU2_TR(0x5eacaf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eacb0:{NFSU2_TR(0x5eacb0);
if(r1(R+512)){{goto L5eaccd;}}
}
B5eacb2:L5eacb2:{c.instructions+=6;NFSU2_TR(0x5eacb2);
__builtin_memmove((R+0),gp(0x82da70),4);
}
B5eacb7:{NFSU2_TR(0x5eacb7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B5eacba:{NFSU2_TR(0x5eacba);
s4(0x82da6c,u32(0x1ull));
}
B5eacc4:{NFSU2_TR(0x5eacc4);
__builtin_memmove(gp(0x82da70),(R+0),4);
}
B5eacc9:{NFSU2_TR(0x5eacc9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5eaccb:{NFSU2_TR(0x5eaccb);
{goto L5eacd2;}
}
B5eaccd:L5eaccd:{c.instructions+=1;NFSU2_TR(0x5eaccd);
__builtin_memmove(gp(0x82da5c),(R+0),4);
}
B5eacd2:L5eacd2:{c.instructions+=3;NFSU2_TR(0x5eacd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5eacd5:{NFSU2_TR(0x5eacd5);
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
B5eacd7:{NFSU2_TR(0x5eacd7);
if(r1(R+518)){{goto L5eaeae;}}
}
B5eacdd:L5eacdd:{c.instructions+=2;NFSU2_TR(0x5eacdd);
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
B5eacdf:{NFSU2_TR(0x5eacdf);
if(r1(R+518)){{goto L5eaeae;}}
}
B5eace5:L5eace5:{c.instructions+=6;NFSU2_TR(0x5eace5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eaceb:{NFSU2_TR(0x5eaceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5eacee:{NFSU2_TR(0x5eacee);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eacf2:{NFSU2_TR(0x5eacf2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eacf3:{NFSU2_TR(0x5eacf3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eacf4:{NFSU2_TR(0x5eacf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eacf9ull));
TAIL_STATIC(0x5baf90u,5ba);
}
B5eacf9:L5eacf9:{c.instructions+=8;NFSU2_TR(0x5eacf9);
__builtin_memmove((R+4),gp(0x850078),4);
}
B5eacff:{NFSU2_TR(0x5eacff);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ead01:{NFSU2_TR(0x5ead01);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5ead08:{NFSU2_TR(0x5ead08);
w2(R+0,shr<u16>(r2(R+0),u64(u32(0x1ull))));
}
B5ead0b:{NFSU2_TR(0x5ead0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5ead0e:{NFSU2_TR(0x5ead0e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ead11:{NFSU2_TR(0x5ead11);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ead15:{NFSU2_TR(0x5ead15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ead29;}}
}
B5ead17:L5ead17:{c.instructions+=2;NFSU2_TR(0x5ead17);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ead1e:{NFSU2_TR(0x5ead1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ead29;}}
}
B5ead20:L5ead20:{c.instructions+=2;NFSU2_TR(0x5ead20);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,shr<u16>(r2(U+4),u64(u32(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B5ead25:{NFSU2_TR(0x5ead25);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ead29:L5ead29:{c.instructions+=2;NFSU2_TR(0x5ead29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ead2a:{NFSU2_TR(0x5ead2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ead2full));
TAIL_STATIC(0x43c370u,43c);
}
B5ead2f:L5ead2f:{c.instructions+=7;NFSU2_TR(0x5ead2f);
{u32 ea_=u32(u32(8017240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ead35:{NFSU2_TR(0x5ead35);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5ead3a:{NFSU2_TR(0x5ead3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ead3e:{NFSU2_TR(0x5ead3e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ead42:{NFSU2_TR(0x5ead42);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ead46:{NFSU2_TR(0x5ead46);
{u32 ea_=u32(u32(8017244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ead4c:{NFSU2_TR(0x5ead4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ead51ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5ead51:L5ead51:{c.instructions+=7;NFSU2_TR(0x5ead51);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ead55:{NFSU2_TR(0x5ead55);
w4(R+0,u32(0-u32(r4(R+0))));
}
B5ead57:{NFSU2_TR(0x5ead57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ead58:{NFSU2_TR(0x5ead58);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ead5c:{NFSU2_TR(0x5ead5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ead5d:{NFSU2_TR(0x5ead5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ead5e:{NFSU2_TR(0x5ead5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ead63ull));
TAIL_STATIC(0x43c390u,43c);
}
B5ead63:L5ead63:{c.instructions+=14;NFSU2_TR(0x5ead63);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ead67:{NFSU2_TR(0x5ead67);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ead6b:{NFSU2_TR(0x5ead6b);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ead6f:{NFSU2_TR(0x5ead6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ead70:{NFSU2_TR(0x5ead70);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ead77:{NFSU2_TR(0x5ead77);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ead7b:{NFSU2_TR(0x5ead7b);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ead7f:{NFSU2_TR(0x5ead7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ead80:{NFSU2_TR(0x5ead80);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ead84:{NFSU2_TR(0x5ead84);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ead88:{NFSU2_TR(0x5ead88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ead89:{NFSU2_TR(0x5ead89);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ead91:{NFSU2_TR(0x5ead91);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ead95:{NFSU2_TR(0x5ead95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ead9aull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5ead9a:L5ead9a:{c.instructions+=15;NFSU2_TR(0x5ead9a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ead9e:{NFSU2_TR(0x5ead9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eada1:{NFSU2_TR(0x5eada1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5eada3:{NFSU2_TR(0x5eada3);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5eada7:{NFSU2_TR(0x5eada7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eada8:{NFSU2_TR(0x5eada8);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eadac:{NFSU2_TR(0x5eadac);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eadaf:{NFSU2_TR(0x5eadaf);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5eadb3:{NFSU2_TR(0x5eadb3);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eadb7:{NFSU2_TR(0x5eadb7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eadba:{NFSU2_TR(0x5eadba);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5eadbe:{NFSU2_TR(0x5eadbe);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5eadc2:{NFSU2_TR(0x5eadc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eadc3:{NFSU2_TR(0x5eadc3);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eadc7:{NFSU2_TR(0x5eadc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eadccull));
TAIL_STATIC(0x43cf10u,43c);
}
B5eadcc:L5eadcc:{c.instructions+=10;NFSU2_TR(0x5eadcc);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eadd0:{NFSU2_TR(0x5eadd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eadd1:{NFSU2_TR(0x5eadd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5eadd5:{NFSU2_TR(0x5eadd5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eadd6:{NFSU2_TR(0x5eadd6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5eaddd:{NFSU2_TR(0x5eaddd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eadde:{NFSU2_TR(0x5eadde);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5eade6:{NFSU2_TR(0x5eade6);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5eadee:{NFSU2_TR(0x5eadee);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5eadf6:{NFSU2_TR(0x5eadf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eadfbull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5eadfb:L5eadfb:{c.instructions+=5;NFSU2_TR(0x5eadfb);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eae02:{NFSU2_TR(0x5eae02);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eae03:{NFSU2_TR(0x5eae03);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5eae0a:{NFSU2_TR(0x5eae0a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eae0b:{NFSU2_TR(0x5eae0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eae10ull));
TAIL_STATIC(0x43cf10u,43c);
}
B5eae10:L5eae10:{c.instructions+=7;NFSU2_TR(0x5eae10);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5eae17:{NFSU2_TR(0x5eae17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eae18:{NFSU2_TR(0x5eae18);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eae1c:{NFSU2_TR(0x5eae1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eae1d:{NFSU2_TR(0x5eae1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5eae21:{NFSU2_TR(0x5eae21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eae22:{NFSU2_TR(0x5eae22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eae27ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5eae27:L5eae27:{c.instructions+=6;NFSU2_TR(0x5eae27);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B5eae2a:{NFSU2_TR(0x5eae2a);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5eae2e:{NFSU2_TR(0x5eae2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eae2f:{NFSU2_TR(0x5eae2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eae33:{NFSU2_TR(0x5eae33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eae34:{NFSU2_TR(0x5eae34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eae39ull));
TAIL_STATIC(0x43cf10u,43c);
}
B5eae39:L5eae39:{c.instructions+=37;NFSU2_TR(0x5eae39);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eae3d:{NFSU2_TR(0x5eae3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eae41:{NFSU2_TR(0x5eae41);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eae45:{NFSU2_TR(0x5eae45);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5eae47:{NFSU2_TR(0x5eae47);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eae4b:{NFSU2_TR(0x5eae4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eae4e:{NFSU2_TR(0x5eae4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eae52:{NFSU2_TR(0x5eae52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eae55:{NFSU2_TR(0x5eae55);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5eae57:{NFSU2_TR(0x5eae57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eae5a:{NFSU2_TR(0x5eae5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eae5d:{NFSU2_TR(0x5eae5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eae61:{NFSU2_TR(0x5eae61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eae64:{NFSU2_TR(0x5eae64);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eae68:{NFSU2_TR(0x5eae68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eae6b:{NFSU2_TR(0x5eae6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eae6f:{NFSU2_TR(0x5eae6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eae72:{NFSU2_TR(0x5eae72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5eae75:{NFSU2_TR(0x5eae75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eae78:{NFSU2_TR(0x5eae78);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eae7c:{NFSU2_TR(0x5eae7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eae7d:{NFSU2_TR(0x5eae7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eae80:{NFSU2_TR(0x5eae80);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eae84:{NFSU2_TR(0x5eae84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eae87:{NFSU2_TR(0x5eae87);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eae8b:{NFSU2_TR(0x5eae8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eae8c:{NFSU2_TR(0x5eae8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eae8f:{NFSU2_TR(0x5eae8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eae90:{NFSU2_TR(0x5eae90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eae93:{NFSU2_TR(0x5eae93);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eae97:{NFSU2_TR(0x5eae97);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eae98:{NFSU2_TR(0x5eae98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eae9b:{NFSU2_TR(0x5eae9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eae9e:{NFSU2_TR(0x5eae9e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eae9f:{NFSU2_TR(0x5eae9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eaea2:{NFSU2_TR(0x5eaea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5eaea9:{NFSU2_TR(0x5eaea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eaeaeull));
TAIL_STATIC(0x5c5930u,5c5);
}
B5eaeae:L5eaeae:{c.instructions+=6;NFSU2_TR(0x5eaeae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eaeaf:{NFSU2_TR(0x5eaeaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eaeb0:{NFSU2_TR(0x5eaeb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5eaeb1:{NFSU2_TR(0x5eaeb1);
__builtin_memmove((R+16),(R+20),4);
}
B5eaeb3:{NFSU2_TR(0x5eaeb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5eaeb4:{NFSU2_TR(0x5eaeb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eaec0:L5eaec0:{c.instructions+=3;NFSU2_TR(0x5eaec0);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5eaec5:{NFSU2_TR(0x5eaec5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eaec7:{NFSU2_TR(0x5eaec7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eaed2;}}
}
B5eaec9:L5eaec9:{c.instructions+=3;NFSU2_TR(0x5eaec9);
__builtin_memmove((R+0),gp(0x890108),4);
}
B5eaece:{NFSU2_TR(0x5eaece);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eaed0:{NFSU2_TR(0x5eaed0);
if(r1(R+518)){{goto L5eaf29;}}
}
B5eaed2:L5eaed2:{c.instructions+=3;NFSU2_TR(0x5eaed2);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B5eaed7:{NFSU2_TR(0x5eaed7);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1130ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1130ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5eaedc:{NFSU2_TR(0x5eaedc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5eaee5;}}
}
B5eaede:L5eaede:{c.instructions+=2;NFSU2_TR(0x5eaede);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1134ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1134ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eaee3:{NFSU2_TR(0x5eaee3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5eaeec;}}
}
B5eaee5:L5eaee5:{c.instructions+=2;NFSU2_TR(0x5eaee5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1265ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eaeea:{NFSU2_TR(0x5eaeea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eaf29;}}
}
B5eaeec:L5eaeec:{c.instructions+=18;NFSU2_TR(0x5eaeec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eaeef:{NFSU2_TR(0x5eaeef);
{u32 ea_=u32(r4(R+0)+u32(2272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eaef5:{NFSU2_TR(0x5eaef5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8d8ull))));
}
B5eaefa:{NFSU2_TR(0x5eaefa);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5eaefd:{NFSU2_TR(0x5eaefd);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eaf00:{NFSU2_TR(0x5eaf00);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5eaf03:{NFSU2_TR(0x5eaf03);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5eaf05:{NFSU2_TR(0x5eaf05);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5eaf07:{NFSU2_TR(0x5eaf07);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5eaf09:{NFSU2_TR(0x5eaf09);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5eaf0b:{NFSU2_TR(0x5eaf0b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5eaf0d:{NFSU2_TR(0x5eaf0d);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5eaf0f:{NFSU2_TR(0x5eaf0f);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5eaf11:{NFSU2_TR(0x5eaf11);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eaf13:{NFSU2_TR(0x5eaf13);
{u32 ea_=u32(u32(8017264u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5eaf19:{NFSU2_TR(0x5eaf19);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eaf1b:{NFSU2_TR(0x5eaf1b);
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
B5eaf1e:{NFSU2_TR(0x5eaf1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eaf26;}}
}
B5eaf20:L5eaf20:{c.instructions+=2;NFSU2_TR(0x5eaf20);
w4(R+0,u32(0x1ull));
}
B5eaf25:{NFSU2_TR(0x5eaf25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eaf26:L5eaf26:{c.instructions+=2;NFSU2_TR(0x5eaf26);
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
B5eaf28:{NFSU2_TR(0x5eaf28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eaf29:L5eaf29:{c.instructions+=2;NFSU2_TR(0x5eaf29);
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
B5eaf2b:{NFSU2_TR(0x5eaf2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eaf30:L5eaf30:{c.instructions+=11;NFSU2_TR(0x5eaf30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaf31:{NFSU2_TR(0x5eaf31);
__builtin_memmove((R+20),(R+16),4);
}
B5eaf33:{NFSU2_TR(0x5eaf33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B5eaf36:{NFSU2_TR(0x5eaf36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaf37:{NFSU2_TR(0x5eaf37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaf38:{NFSU2_TR(0x5eaf38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5eaf3b:{NFSU2_TR(0x5eaf3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaf3c:{NFSU2_TR(0x5eaf3c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5eaf3e:{NFSU2_TR(0x5eaf3e);
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
B5eaf40:{NFSU2_TR(0x5eaf40);
__builtin_memmove((R+12),(R+4),4);
}
B5eaf42:{NFSU2_TR(0x5eaf42);
if(r1(R+518)){{goto L5eafa0;}}
}
B5eaf44:L5eaf44:{c.instructions+=8;NFSU2_TR(0x5eaf44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eaf47:{NFSU2_TR(0x5eaf47);
__builtin_memmove((R+4),gp(0x89ccec),4);
}
B5eaf4d:{NFSU2_TR(0x5eaf4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaf4e:{NFSU2_TR(0x5eaf4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaf4f:{NFSU2_TR(0x5eaf4f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaf50:{NFSU2_TR(0x5eaf50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaf51:{NFSU2_TR(0x5eaf51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaf52:{NFSU2_TR(0x5eaf52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eaf57ull));
TAIL_STATIC(0x438e30u,438);
}
B5eaf57:L5eaf57:{c.instructions+=4;NFSU2_TR(0x5eaf57);
__builtin_memmove((R+0),gp(0x863440),4);
}
B5eaf5c:{NFSU2_TR(0x5eaf5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5eaf5f:{NFSU2_TR(0x5eaf5f);
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
B5eaf61:{NFSU2_TR(0x5eaf61);
if(r1(R+518)){{goto L5eafa0;}}
}
B5eaf63:L5eaf63:{c.instructions+=9;NFSU2_TR(0x5eaf63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaf64:{NFSU2_TR(0x5eaf64);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5eaf67:{NFSU2_TR(0x5eaf67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaf68:{NFSU2_TR(0x5eaf68);
w4(R+4,u32(0x85ad40ull));
}
B5eaf6d:{NFSU2_TR(0x5eaf6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eaf70:{NFSU2_TR(0x5eaf70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eaf73:{NFSU2_TR(0x5eaf73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eaf76:{NFSU2_TR(0x5eaf76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eaf79:{NFSU2_TR(0x5eaf79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eaf7eull));
TAIL_STATIC(0x527800u,527);
}
B5eaf7e:L5eaf7e:{c.instructions+=2;NFSU2_TR(0x5eaf7e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5eaf81:{NFSU2_TR(0x5eaf81);
if(r1(R+518)){{goto L5eafa0;}}
}
B5eaf83:L5eaf83:{c.instructions+=4;NFSU2_TR(0x5eaf83);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5eaf86:{NFSU2_TR(0x5eaf86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaf87:{NFSU2_TR(0x5eaf87);
w4(R+4,u32(0x85ad40ull));
}
B5eaf8c:{NFSU2_TR(0x5eaf8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eaf91ull));
TAIL_STATIC(0x513050u,513);
}
B5eaf91:L5eaf91:{c.instructions+=4;NFSU2_TR(0x5eaf91);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5eaf94:{NFSU2_TR(0x5eaf94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eaf95:{NFSU2_TR(0x5eaf95);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eaf9b:{NFSU2_TR(0x5eaf9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eafa0ull));
TAIL_STATIC(0x4db820u,4db);
}
B5eafa0:L5eafa0:{c.instructions+=6;NFSU2_TR(0x5eafa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5eafa1:{NFSU2_TR(0x5eafa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eafa2:{NFSU2_TR(0x5eafa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5eafa3:{NFSU2_TR(0x5eafa3);
__builtin_memmove((R+16),(R+20),4);
}
B5eafa5:{NFSU2_TR(0x5eafa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5eafa6:{NFSU2_TR(0x5eafa6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eafb0:L5eafb0:{c.instructions+=10;NFSU2_TR(0x5eafb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eafb1:{NFSU2_TR(0x5eafb1);
__builtin_memmove((R+20),(R+16),4);
}
B5eafb3:{NFSU2_TR(0x5eafb3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eafb4:{NFSU2_TR(0x5eafb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eafb5:{NFSU2_TR(0x5eafb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eafb6:{NFSU2_TR(0x5eafb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5eafb9:{NFSU2_TR(0x5eafb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5eafbb:{NFSU2_TR(0x5eafbb);
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
B5eafbd:{NFSU2_TR(0x5eafbd);
__builtin_memmove((R+12),(R+4),4);
}
B5eafbf:{NFSU2_TR(0x5eafbf);
if(r1(R+518)){TAIL_STATIC(0x5eb024u,5eb);}
}
B5eafc1:L5eafc1:{c.instructions+=8;NFSU2_TR(0x5eafc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eafc4:{NFSU2_TR(0x5eafc4);
__builtin_memmove((R+4),gp(0x89cf2c),4);
}
B5eafca:{NFSU2_TR(0x5eafca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eafcc:{NFSU2_TR(0x5eafcc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eafce:{NFSU2_TR(0x5eafce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eafd0:{NFSU2_TR(0x5eafd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eafd1:{NFSU2_TR(0x5eafd1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eafd2:{NFSU2_TR(0x5eafd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eafd7ull));
TAIL_STATIC(0x438e30u,438);
}
B5eafd7:L5eafd7:{c.instructions+=5;NFSU2_TR(0x5eafd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9acull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eafdd:{NFSU2_TR(0x5eafdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5eafdf:{NFSU2_TR(0x5eafdf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5eafe2:{NFSU2_TR(0x5eafe2);
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
B5eafe4:{NFSU2_TR(0x5eafe4);
if(r1(R+518)){TAIL_STATIC(0x5eb024u,5eb);}
}
B5eafe6:L5eafe6:{c.instructions+=3;NFSU2_TR(0x5eafe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eafe9:{NFSU2_TR(0x5eafe9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5eafeb:{NFSU2_TR(0x5eafeb);
if(r1(R+518)){{goto L5eaff9;}}
}
B5eafed:L5eafed:{c.instructions+=4;NFSU2_TR(0x5eafed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eafee:{NFSU2_TR(0x5eafee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eafef:{NFSU2_TR(0x5eafef);
w4(R+4,u32(0x85ad40ull));
}
B5eaff4:{NFSU2_TR(0x5eaff4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eaff9ull));
TAIL_STATIC(0x512ff0u,512);
}
B5eaff9:L5eaff9:{c.instructions+=2;NFSU2_TR(0x5eaff9);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
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
B5eaffc:{NFSU2_TR(0x5eaffc);
if(r1(R+518)){TAIL_STATIC(0x5eb024u,5eb);}
}
B5eaffe:L5eaffe:{c.instructions+=2;NFSU2_TR(0x5eaffe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eafff:{NFSU2_TR(0x5eafff);
w4(R+4,u32(0x85ad40ull));
TAIL_STATIC(0x5eb004u,5eb);
}
XIT:NFSU2_TR_EXIT(0x5ea,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
