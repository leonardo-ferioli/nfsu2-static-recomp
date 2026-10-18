#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_762(u8* __restrict R,Cpu& c);
u32 body_763(u8* __restrict R,Cpu& c);
u32 body_764(u8* __restrict R,Cpu& c);
u32 body_765(u8* __restrict R,Cpu& c);
u32 body_76e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x75c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x75c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_75c(u8* __restrict R,Cpu& c);
u32 page_75c(Cpu& c){return body_75c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_75c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x75c000:goto L75c000;
case 0x75c001:c.instructions+=4;goto B75c001;
case 0x75c004:c.instructions+=3;goto B75c004;
case 0x75c006:c.instructions+=2;goto B75c006;
case 0x75c007:c.instructions+=1;goto B75c007;
case 0x75c008:goto L75c008;
case 0x75c009:c.instructions+=10;goto B75c009;
case 0x75c00d:c.instructions+=9;goto B75c00d;
case 0x75c00f:c.instructions+=8;goto B75c00f;
case 0x75c010:c.instructions+=7;goto B75c010;
case 0x75c013:c.instructions+=6;goto B75c013;
case 0x75c016:c.instructions+=5;goto B75c016;
case 0x75c018:c.instructions+=4;goto B75c018;
case 0x75c01c:c.instructions+=3;goto B75c01c;
case 0x75c01f:c.instructions+=2;goto B75c01f;
case 0x75c023:c.instructions+=1;goto B75c023;
case 0x75c028:goto L75c028;
case 0x75c02b:c.instructions+=1;goto B75c02b;
case 0x75c02c:goto L75c02c;
case 0x75c02d:c.instructions+=8;goto B75c02d;
case 0x75c02f:c.instructions+=7;goto B75c02f;
case 0x75c030:c.instructions+=6;goto B75c030;
case 0x75c031:c.instructions+=5;goto B75c031;
case 0x75c034:c.instructions+=4;goto B75c034;
case 0x75c037:c.instructions+=3;goto B75c037;
case 0x75c03a:c.instructions+=2;goto B75c03a;
case 0x75c03c:c.instructions+=1;goto B75c03c;
case 0x75c03e:goto L75c03e;
case 0x75c041:c.instructions+=4;goto B75c041;
case 0x75c048:c.instructions+=3;goto B75c048;
case 0x75c04a:c.instructions+=2;goto B75c04a;
case 0x75c04b:c.instructions+=1;goto B75c04b;
case 0x75c04d:goto L75c04d;
case 0x75c04f:c.instructions+=12;goto B75c04f;
case 0x75c052:c.instructions+=11;goto B75c052;
case 0x75c055:c.instructions+=10;goto B75c055;
case 0x75c058:c.instructions+=9;goto B75c058;
case 0x75c05b:c.instructions+=8;goto B75c05b;
case 0x75c05e:c.instructions+=7;goto B75c05e;
case 0x75c061:c.instructions+=6;goto B75c061;
case 0x75c063:c.instructions+=5;goto B75c063;
case 0x75c066:c.instructions+=4;goto B75c066;
case 0x75c069:c.instructions+=3;goto B75c069;
case 0x75c06c:c.instructions+=2;goto B75c06c;
case 0x75c06f:c.instructions+=1;goto B75c06f;
case 0x75c074:goto L75c074;
case 0x75c077:c.instructions+=3;goto B75c077;
case 0x75c07a:c.instructions+=2;goto B75c07a;
case 0x75c07e:c.instructions+=1;goto B75c07e;
case 0x75c080:goto L75c080;
case 0x75c083:c.instructions+=2;goto B75c083;
case 0x75c086:c.instructions+=1;goto B75c086;
case 0x75c08b:goto L75c08b;
case 0x75c08e:c.instructions+=3;goto B75c08e;
case 0x75c091:c.instructions+=2;goto B75c091;
case 0x75c094:c.instructions+=1;goto B75c094;
case 0x75c09a:goto L75c09a;
case 0x75c09b:c.instructions+=2;goto B75c09b;
case 0x75c09c:c.instructions+=1;goto B75c09c;
case 0x75c09d:goto L75c09d;
case 0x75c09e:c.instructions+=13;goto B75c09e;
case 0x75c0a0:c.instructions+=12;goto B75c0a0;
case 0x75c0a1:c.instructions+=11;goto B75c0a1;
case 0x75c0a5:c.instructions+=10;goto B75c0a5;
case 0x75c0a6:c.instructions+=9;goto B75c0a6;
case 0x75c0a7:c.instructions+=8;goto B75c0a7;
case 0x75c0a8:c.instructions+=7;goto B75c0a8;
case 0x75c0ab:c.instructions+=6;goto B75c0ab;
case 0x75c0ae:c.instructions+=5;goto B75c0ae;
case 0x75c0b1:c.instructions+=4;goto B75c0b1;
case 0x75c0b3:c.instructions+=3;goto B75c0b3;
case 0x75c0b6:c.instructions+=2;goto B75c0b6;
case 0x75c0b9:c.instructions+=1;goto B75c0b9;
case 0x75c0bb:goto L75c0bb;
case 0x75c0be:c.instructions+=1;goto B75c0be;
case 0x75c0c0:goto L75c0c0;
case 0x75c0c5:goto L75c0c5;
case 0x75c0c8:c.instructions+=5;goto B75c0c8;
case 0x75c0c9:c.instructions+=4;goto B75c0c9;
case 0x75c0cc:c.instructions+=3;goto B75c0cc;
case 0x75c0cf:c.instructions+=2;goto B75c0cf;
case 0x75c0d2:c.instructions+=1;goto B75c0d2;
case 0x75c0d4:goto L75c0d4;
case 0x75c0d7:c.instructions+=1;goto B75c0d7;
case 0x75c0d9:goto L75c0d9;
case 0x75c0dc:c.instructions+=1;goto B75c0dc;
case 0x75c0de:goto L75c0de;
case 0x75c0e1:c.instructions+=3;goto B75c0e1;
case 0x75c0e4:c.instructions+=2;goto B75c0e4;
case 0x75c0e7:c.instructions+=1;goto B75c0e7;
case 0x75c0ea:goto L75c0ea;
case 0x75c0ee:c.instructions+=1;goto B75c0ee;
case 0x75c0f0:goto L75c0f0;
case 0x75c0f3:goto L75c0f3;
case 0x75c0f6:c.instructions+=6;goto B75c0f6;
case 0x75c0f7:c.instructions+=5;goto B75c0f7;
case 0x75c0f9:c.instructions+=4;goto B75c0f9;
case 0x75c0fc:c.instructions+=3;goto B75c0fc;
case 0x75c0fe:c.instructions+=2;goto B75c0fe;
case 0x75c101:c.instructions+=1;goto B75c101;
case 0x75c103:goto L75c103;
case 0x75c105:c.instructions+=1;goto B75c105;
case 0x75c107:goto L75c107;
case 0x75c10c:goto L75c10c;
case 0x75c10d:c.instructions+=6;goto B75c10d;
case 0x75c110:c.instructions+=5;goto B75c110;
case 0x75c111:c.instructions+=4;goto B75c111;
case 0x75c114:c.instructions+=3;goto B75c114;
case 0x75c115:c.instructions+=2;goto B75c115;
case 0x75c116:c.instructions+=1;goto B75c116;
case 0x75c117:goto L75c117;
case 0x75c11b:c.instructions+=4;goto B75c11b;
case 0x75c11c:c.instructions+=3;goto B75c11c;
case 0x75c120:c.instructions+=2;goto B75c120;
case 0x75c122:c.instructions+=1;goto B75c122;
case 0x75c127:goto L75c127;
case 0x75c12d:c.instructions+=2;goto B75c12d;
case 0x75c130:c.instructions+=1;goto B75c130;
case 0x75c135:goto L75c135;
case 0x75c13b:c.instructions+=3;goto B75c13b;
case 0x75c13d:c.instructions+=2;goto B75c13d;
case 0x75c13e:c.instructions+=1;goto B75c13e;
case 0x75c13f:goto L75c13f;
case 0x75c144:goto L75c144;
case 0x75c14a:c.instructions+=1;goto B75c14a;
case 0x75c14c:goto L75c14c;
case 0x75c14e:c.instructions+=2;goto B75c14e;
case 0x75c152:c.instructions+=1;goto B75c152;
case 0x75c154:goto L75c154;
case 0x75c157:goto L75c157;
case 0x75c159:c.instructions+=1;goto B75c159;
case 0x75c15b:goto L75c15b;
case 0x75c15c:c.instructions+=1;goto B75c15c;
case 0x75c15d:goto L75c15d;
case 0x75c15f:c.instructions+=1;goto B75c15f;
case 0x75c160:goto L75c160;
case 0x75c161:c.instructions+=1;goto B75c161;
case 0x75c166:goto L75c166;
case 0x75c16a:c.instructions+=2;goto B75c16a;
case 0x75c170:c.instructions+=1;goto B75c170;
case 0x75c172:goto L75c172;
case 0x75c177:goto L75c177;
case 0x75c17a:c.instructions+=3;goto B75c17a;
case 0x75c180:c.instructions+=2;goto B75c180;
case 0x75c181:c.instructions+=1;goto B75c181;
case 0x75c182:goto L75c182;
case 0x75c187:goto L75c187;
case 0x75c18d:c.instructions+=1;goto B75c18d;
case 0x75c18f:goto L75c18f;
case 0x75c192:c.instructions+=2;goto B75c192;
case 0x75c194:c.instructions+=1;goto B75c194;
case 0x75c196:goto L75c196;
case 0x75c198:goto L75c198;
case 0x75c19c:c.instructions+=1;goto B75c19c;
case 0x75c19e:goto L75c19e;
case 0x75c19f:c.instructions+=1;goto B75c19f;
case 0x75c1a4:goto L75c1a4;
case 0x75c1a7:c.instructions+=3;goto B75c1a7;
case 0x75c1aa:c.instructions+=2;goto B75c1aa;
case 0x75c1ab:c.instructions+=1;goto B75c1ab;
case 0x75c1ac:goto L75c1ac;
case 0x75c1ad:c.instructions+=19;goto B75c1ad;
case 0x75c1af:c.instructions+=18;goto B75c1af;
case 0x75c1b2:c.instructions+=17;goto B75c1b2;
case 0x75c1b5:c.instructions+=16;goto B75c1b5;
case 0x75c1b9:c.instructions+=15;goto B75c1b9;
case 0x75c1bc:c.instructions+=14;goto B75c1bc;
case 0x75c1bf:c.instructions+=13;goto B75c1bf;
case 0x75c1c2:c.instructions+=12;goto B75c1c2;
case 0x75c1c3:c.instructions+=11;goto B75c1c3;
case 0x75c1ca:c.instructions+=10;goto B75c1ca;
case 0x75c1cd:c.instructions+=9;goto B75c1cd;
case 0x75c1d0:c.instructions+=8;goto B75c1d0;
case 0x75c1d6:c.instructions+=7;goto B75c1d6;
case 0x75c1d9:c.instructions+=6;goto B75c1d9;
case 0x75c1dc:c.instructions+=5;goto B75c1dc;
case 0x75c1e2:c.instructions+=4;goto B75c1e2;
case 0x75c1e5:c.instructions+=3;goto B75c1e5;
case 0x75c1e6:c.instructions+=2;goto B75c1e6;
case 0x75c1e9:c.instructions+=1;goto B75c1e9;
case 0x75c1ee:goto L75c1ee;
case 0x75c1f0:c.instructions+=5;goto B75c1f0;
case 0x75c1f3:c.instructions+=4;goto B75c1f3;
case 0x75c1f9:c.instructions+=3;goto B75c1f9;
case 0x75c1fb:c.instructions+=2;goto B75c1fb;
case 0x75c1fc:c.instructions+=1;goto B75c1fc;
case 0x75c1fd:goto L75c1fd;
case 0x75c1fe:c.instructions+=34;goto B75c1fe;
case 0x75c200:c.instructions+=33;goto B75c200;
case 0x75c203:c.instructions+=32;goto B75c203;
case 0x75c204:c.instructions+=31;goto B75c204;
case 0x75c208:c.instructions+=30;goto B75c208;
case 0x75c20f:c.instructions+=29;goto B75c20f;
case 0x75c212:c.instructions+=28;goto B75c212;
case 0x75c215:c.instructions+=27;goto B75c215;
case 0x75c218:c.instructions+=26;goto B75c218;
case 0x75c21b:c.instructions+=25;goto B75c21b;
case 0x75c21e:c.instructions+=24;goto B75c21e;
case 0x75c221:c.instructions+=23;goto B75c221;
case 0x75c224:c.instructions+=22;goto B75c224;
case 0x75c227:c.instructions+=21;goto B75c227;
case 0x75c22b:c.instructions+=20;goto B75c22b;
case 0x75c22f:c.instructions+=19;goto B75c22f;
case 0x75c233:c.instructions+=18;goto B75c233;
case 0x75c237:c.instructions+=17;goto B75c237;
case 0x75c23e:c.instructions+=16;goto B75c23e;
case 0x75c241:c.instructions+=15;goto B75c241;
case 0x75c244:c.instructions+=14;goto B75c244;
case 0x75c24a:c.instructions+=13;goto B75c24a;
case 0x75c24d:c.instructions+=12;goto B75c24d;
case 0x75c250:c.instructions+=11;goto B75c250;
case 0x75c256:c.instructions+=10;goto B75c256;
case 0x75c25d:c.instructions+=9;goto B75c25d;
case 0x75c260:c.instructions+=8;goto B75c260;
case 0x75c263:c.instructions+=7;goto B75c263;
case 0x75c266:c.instructions+=6;goto B75c266;
case 0x75c269:c.instructions+=5;goto B75c269;
case 0x75c26c:c.instructions+=4;goto B75c26c;
case 0x75c26d:c.instructions+=3;goto B75c26d;
case 0x75c270:c.instructions+=2;goto B75c270;
case 0x75c272:c.instructions+=1;goto B75c272;
case 0x75c277:goto L75c277;
case 0x75c27a:goto L75c27a;
case 0x75c27b:c.instructions+=4;goto B75c27b;
case 0x75c27c:c.instructions+=3;goto B75c27c;
case 0x75c280:c.instructions+=2;goto B75c280;
case 0x75c284:c.instructions+=1;goto B75c284;
case 0x75c286:goto L75c286;
case 0x75c28d:c.instructions+=5;goto B75c28d;
case 0x75c28f:c.instructions+=4;goto B75c28f;
case 0x75c292:c.instructions+=3;goto B75c292;
case 0x75c294:c.instructions+=2;goto B75c294;
case 0x75c29b:c.instructions+=1;goto B75c29b;
case 0x75c29d:goto L75c29d;
case 0x75c2a0:c.instructions+=1;goto B75c2a0;
case 0x75c2a6:goto L75c2a6;
case 0x75c2a9:c.instructions+=3;goto B75c2a9;
case 0x75c2aa:c.instructions+=2;goto B75c2aa;
case 0x75c2ab:c.instructions+=1;goto B75c2ab;
case 0x75c2ac:goto L75c2ac;
case 0x75c2ad:c.instructions+=10;goto B75c2ad;
case 0x75c2af:c.instructions+=9;goto B75c2af;
case 0x75c2b0:c.instructions+=8;goto B75c2b0;
case 0x75c2b1:c.instructions+=7;goto B75c2b1;
case 0x75c2b2:c.instructions+=6;goto B75c2b2;
case 0x75c2b3:c.instructions+=5;goto B75c2b3;
case 0x75c2b5:c.instructions+=4;goto B75c2b5;
case 0x75c2b7:c.instructions+=3;goto B75c2b7;
case 0x75c2bc:c.instructions+=2;goto B75c2bc;
case 0x75c2bf:c.instructions+=1;goto B75c2bf;
case 0x75c2c4:goto L75c2c4;
case 0x75c2c5:c.instructions+=6;goto B75c2c5;
case 0x75c2c6:c.instructions+=5;goto B75c2c6;
case 0x75c2c7:c.instructions+=4;goto B75c2c7;
case 0x75c2c8:c.instructions+=3;goto B75c2c8;
case 0x75c2ca:c.instructions+=2;goto B75c2ca;
case 0x75c2cb:c.instructions+=1;goto B75c2cb;
case 0x75c2cc:goto L75c2cc;
case 0x75c2d0:c.instructions+=3;goto B75c2d0;
case 0x75c2d7:c.instructions+=2;goto B75c2d7;
case 0x75c2dc:c.instructions+=1;goto B75c2dc;
case 0x75c2de:goto L75c2de;
case 0x75c2e2:c.instructions+=3;goto B75c2e2;
case 0x75c2e6:c.instructions+=2;goto B75c2e6;
case 0x75c2e8:c.instructions+=1;goto B75c2e8;
case 0x75c2ed:goto L75c2ed;
case 0x75c2ee:goto L75c2ee;
case 0x75c2ef:c.instructions+=8;goto B75c2ef;
case 0x75c2f0:c.instructions+=7;goto B75c2f0;
case 0x75c2f1:c.instructions+=6;goto B75c2f1;
case 0x75c2f5:c.instructions+=5;goto B75c2f5;
case 0x75c2f6:c.instructions+=4;goto B75c2f6;
case 0x75c2f8:c.instructions+=3;goto B75c2f8;
case 0x75c2fd:c.instructions+=2;goto B75c2fd;
case 0x75c304:c.instructions+=1;goto B75c304;
case 0x75c30b:goto L75c30b;
case 0x75c30f:c.instructions+=4;goto B75c30f;
case 0x75c312:c.instructions+=3;goto B75c312;
case 0x75c315:c.instructions+=2;goto B75c315;
case 0x75c318:c.instructions+=1;goto B75c318;
case 0x75c31a:goto L75c31a;
case 0x75c31e:c.instructions+=1;goto B75c31e;
case 0x75c320:goto L75c320;
case 0x75c323:c.instructions+=5;goto B75c323;
case 0x75c326:c.instructions+=4;goto B75c326;
case 0x75c32a:c.instructions+=3;goto B75c32a;
case 0x75c32d:c.instructions+=2;goto B75c32d;
case 0x75c332:c.instructions+=1;goto B75c332;
case 0x75c334:goto L75c334;
case 0x75c339:c.instructions+=2;goto B75c339;
case 0x75c33d:c.instructions+=1;goto B75c33d;
case 0x75c342:goto L75c342;
case 0x75c346:goto L75c346;
case 0x75c348:goto L75c348;
case 0x75c34f:c.instructions+=5;goto B75c34f;
case 0x75c352:c.instructions+=4;goto B75c352;
case 0x75c353:c.instructions+=3;goto B75c353;
case 0x75c354:c.instructions+=2;goto B75c354;
case 0x75c355:c.instructions+=1;goto B75c355;
case 0x75c356:goto L75c356;
case 0x75c358:c.instructions+=3;goto B75c358;
case 0x75c35f:c.instructions+=2;goto B75c35f;
case 0x75c366:c.instructions+=1;goto B75c366;
case 0x75c368:goto L75c368;
case 0x75c36b:c.instructions+=3;goto B75c36b;
case 0x75c36e:c.instructions+=2;goto B75c36e;
case 0x75c371:c.instructions+=1;goto B75c371;
case 0x75c373:goto L75c373;
case 0x75c378:goto L75c378;
case 0x75c379:goto L75c379;
case 0x75c37a:c.instructions+=3;goto B75c37a;
case 0x75c37b:c.instructions+=2;goto B75c37b;
case 0x75c380:c.instructions+=1;goto B75c380;
case 0x75c382:goto L75c382;
case 0x75c383:c.instructions+=3;goto B75c383;
case 0x75c384:c.instructions+=2;goto B75c384;
case 0x75c389:c.instructions+=1;goto B75c389;
case 0x75c38c:goto L75c38c;
case 0x75c38f:c.instructions+=5;goto B75c38f;
case 0x75c392:c.instructions+=4;goto B75c392;
case 0x75c395:c.instructions+=3;goto B75c395;
case 0x75c396:c.instructions+=2;goto B75c396;
case 0x75c397:c.instructions+=1;goto B75c397;
case 0x75c39a:goto L75c39a;
case 0x75c39c:c.instructions+=1;goto B75c39c;
case 0x75c3a1:goto L75c3a1;
case 0x75c3a2:c.instructions+=1;goto B75c3a2;
case 0x75c3a3:goto L75c3a3;
case 0x75c3a5:c.instructions+=2;goto B75c3a5;
case 0x75c3aa:c.instructions+=1;goto B75c3aa;
case 0x75c3af:goto L75c3af;
case 0x75c3b3:goto L75c3b3;
case 0x75c3b6:c.instructions+=1;goto B75c3b6;
case 0x75c3b8:goto L75c3b8;
case 0x75c3bb:c.instructions+=3;goto B75c3bb;
case 0x75c3be:c.instructions+=2;goto B75c3be;
case 0x75c3c1:c.instructions+=1;goto B75c3c1;
case 0x75c3c4:goto L75c3c4;
case 0x75c3c6:goto L75c3c6;
case 0x75c3ca:c.instructions+=1;goto B75c3ca;
case 0x75c3cf:goto L75c3cf;
case 0x75c3d2:goto L75c3d2;
case 0x75c3d5:c.instructions+=7;goto B75c3d5;
case 0x75c3d8:c.instructions+=6;goto B75c3d8;
case 0x75c3db:c.instructions+=5;goto B75c3db;
case 0x75c3dd:c.instructions+=4;goto B75c3dd;
case 0x75c3e0:c.instructions+=3;goto B75c3e0;
case 0x75c3e3:c.instructions+=2;goto B75c3e3;
case 0x75c3e9:c.instructions+=1;goto B75c3e9;
case 0x75c3eb:goto L75c3eb;
case 0x75c3f2:c.instructions+=2;goto B75c3f2;
case 0x75c3f5:c.instructions+=1;goto B75c3f5;
case 0x75c3f6:goto L75c3f6;
case 0x75c3f9:c.instructions+=1;goto B75c3f9;
case 0x75c3fb:goto L75c3fb;
case 0x75c400:goto L75c400;
case 0x75c401:goto L75c401;
case 0x75c403:c.instructions+=2;goto B75c403;
case 0x75c408:c.instructions+=1;goto B75c408;
case 0x75c40d:goto L75c40d;
case 0x75c411:c.instructions+=5;goto B75c411;
case 0x75c414:c.instructions+=4;goto B75c414;
case 0x75c416:c.instructions+=3;goto B75c416;
case 0x75c41a:c.instructions+=2;goto B75c41a;
case 0x75c41d:c.instructions+=1;goto B75c41d;
case 0x75c421:goto L75c421;
case 0x75c424:c.instructions+=1;goto B75c424;
case 0x75c426:goto L75c426;
case 0x75c429:c.instructions+=2;goto B75c429;
case 0x75c42c:c.instructions+=1;goto B75c42c;
case 0x75c42f:goto L75c42f;
case 0x75c431:goto L75c431;
case 0x75c438:c.instructions+=2;goto B75c438;
case 0x75c43c:c.instructions+=1;goto B75c43c;
case 0x75c441:goto L75c441;
case 0x75c446:goto L75c446;
case 0x75c449:goto L75c449;
case 0x75c44d:c.instructions+=1;goto B75c44d;
case 0x75c44f:goto L75c44f;
case 0x75c452:c.instructions+=4;goto B75c452;
case 0x75c455:c.instructions+=3;goto B75c455;
case 0x75c458:c.instructions+=2;goto B75c458;
case 0x75c45b:c.instructions+=1;goto B75c45b;
case 0x75c460:goto L75c460;
case 0x75c461:goto L75c461;
case 0x75c463:c.instructions+=2;goto B75c463;
case 0x75c468:c.instructions+=1;goto B75c468;
case 0x75c46d:goto L75c46d;
case 0x75c46f:c.instructions+=3;goto B75c46f;
case 0x75c472:c.instructions+=2;goto B75c472;
case 0x75c475:c.instructions+=1;goto B75c475;
case 0x75c478:goto L75c478;
case 0x75c47b:c.instructions+=2;goto B75c47b;
case 0x75c47e:c.instructions+=1;goto B75c47e;
case 0x75c480:goto L75c480;
case 0x75c483:c.instructions+=2;goto B75c483;
case 0x75c485:c.instructions+=1;goto B75c485;
case 0x75c488:goto L75c488;
case 0x75c48b:c.instructions+=3;goto B75c48b;
case 0x75c48e:c.instructions+=2;goto B75c48e;
case 0x75c491:c.instructions+=1;goto B75c491;
case 0x75c493:goto L75c493;
case 0x75c49a:c.instructions+=2;goto B75c49a;
case 0x75c49e:c.instructions+=1;goto B75c49e;
case 0x75c4a3:goto L75c4a3;
case 0x75c4a8:goto L75c4a8;
case 0x75c4ab:goto L75c4ab;
case 0x75c4af:c.instructions+=1;goto B75c4af;
case 0x75c4b1:goto L75c4b1;
case 0x75c4b4:c.instructions+=4;goto B75c4b4;
case 0x75c4b7:c.instructions+=3;goto B75c4b7;
case 0x75c4ba:c.instructions+=2;goto B75c4ba;
case 0x75c4bd:c.instructions+=1;goto B75c4bd;
case 0x75c4c2:goto L75c4c2;
case 0x75c4d0:goto L75c4d0;
case 0x75c4d5:c.instructions+=1;goto B75c4d5;
case 0x75c4d7:goto L75c4d7;
case 0x75c4d9:c.instructions+=7;goto B75c4d9;
case 0x75c4db:c.instructions+=6;goto B75c4db;
case 0x75c4de:c.instructions+=5;goto B75c4de;
case 0x75c4e0:c.instructions+=4;goto B75c4e0;
case 0x75c4e1:c.instructions+=3;goto B75c4e1;
case 0x75c4e3:c.instructions+=2;goto B75c4e3;
case 0x75c4e4:c.instructions+=1;goto B75c4e4;
case 0x75c4e5:goto L75c4e5;
case 0x75c4e6:c.instructions+=1;goto B75c4e6;
case 0x75c4ea:goto L75c4ea;
case 0x75c4f0:c.instructions+=4;goto B75c4f0;
case 0x75c4f5:c.instructions+=3;goto B75c4f5;
case 0x75c4f7:c.instructions+=2;goto B75c4f7;
case 0x75c4fc:c.instructions+=1;goto B75c4fc;
case 0x75c4fe:goto L75c4fe;
case 0x75c500:c.instructions+=7;goto B75c500;
case 0x75c502:c.instructions+=6;goto B75c502;
case 0x75c504:c.instructions+=5;goto B75c504;
case 0x75c506:c.instructions+=4;goto B75c506;
case 0x75c508:c.instructions+=3;goto B75c508;
case 0x75c50b:c.instructions+=2;goto B75c50b;
case 0x75c50c:c.instructions+=1;goto B75c50c;
case 0x75c50d:goto L75c50d;
case 0x75c50e:c.instructions+=2;goto B75c50e;
case 0x75c514:c.instructions+=1;goto B75c514;
case 0x75c519:goto L75c519;
case 0x75c51a:c.instructions+=8;goto B75c51a;
case 0x75c520:c.instructions+=7;goto B75c520;
case 0x75c522:c.instructions+=6;goto B75c522;
case 0x75c527:c.instructions+=5;goto B75c527;
case 0x75c529:c.instructions+=4;goto B75c529;
case 0x75c52b:c.instructions+=3;goto B75c52b;
case 0x75c52e:c.instructions+=2;goto B75c52e;
case 0x75c530:c.instructions+=1;goto B75c530;
case 0x75c532:goto L75c532;
case 0x75c537:c.instructions+=2;goto B75c537;
case 0x75c539:c.instructions+=1;goto B75c539;
case 0x75c53b:goto L75c53b;
case 0x75c53d:goto L75c53d;
case 0x75c53f:c.instructions+=3;goto B75c53f;
case 0x75c540:c.instructions+=2;goto B75c540;
case 0x75c541:c.instructions+=1;goto B75c541;
case 0x75c546:goto L75c546;
case 0x75c548:c.instructions+=3;goto B75c548;
case 0x75c549:c.instructions+=2;goto B75c549;
case 0x75c54a:c.instructions+=1;goto B75c54a;
case 0x75c54c:goto L75c54c;
case 0x75c54f:c.instructions+=3;goto B75c54f;
case 0x75c550:c.instructions+=2;goto B75c550;
case 0x75c556:c.instructions+=1;goto B75c556;
case 0x75c55b:goto L75c55b;
case 0x75c55d:c.instructions+=3;goto B75c55d;
case 0x75c55e:c.instructions+=2;goto B75c55e;
case 0x75c55f:c.instructions+=1;goto B75c55f;
case 0x75c561:goto L75c561;
case 0x75c562:c.instructions+=1;goto B75c562;
case 0x75c563:goto L75c563;
case 0x75c569:c.instructions+=5;goto B75c569;
case 0x75c56f:c.instructions+=4;goto B75c56f;
case 0x75c574:c.instructions+=3;goto B75c574;
case 0x75c577:c.instructions+=2;goto B75c577;
case 0x75c57a:c.instructions+=1;goto B75c57a;
case 0x75c580:goto L75c580;
case 0x75c582:c.instructions+=4;goto B75c582;
case 0x75c589:c.instructions+=3;goto B75c589;
case 0x75c58b:c.instructions+=2;goto B75c58b;
case 0x75c58c:c.instructions+=1;goto B75c58c;
case 0x75c58d:goto L75c58d;
case 0x75c592:c.instructions+=1;goto B75c592;
case 0x75c597:goto L75c597;
case 0x75c599:c.instructions+=3;goto B75c599;
case 0x75c59a:c.instructions+=2;goto B75c59a;
case 0x75c59f:c.instructions+=1;goto B75c59f;
case 0x75c5a1:goto L75c5a1;
case 0x75c5a3:c.instructions+=2;goto B75c5a3;
case 0x75c5a4:c.instructions+=1;goto B75c5a4;
case 0x75c5a5:goto L75c5a5;
case 0x75c5a8:c.instructions+=4;goto B75c5a8;
case 0x75c5ad:c.instructions+=3;goto B75c5ad;
case 0x75c5b2:c.instructions+=2;goto B75c5b2;
case 0x75c5b4:c.instructions+=1;goto B75c5b4;
case 0x75c5b5:goto L75c5b5;
case 0x75c5b7:c.instructions+=2;goto B75c5b7;
case 0x75c5bc:c.instructions+=1;goto B75c5bc;
case 0x75c5c1:goto L75c5c1;
case 0x75c5c6:goto L75c5c6;
case 0x75c5ca:c.instructions+=2;goto B75c5ca;
case 0x75c5cd:c.instructions+=1;goto B75c5cd;
case 0x75c5d2:goto L75c5d2;
case 0x75c5d5:c.instructions+=2;goto B75c5d5;
case 0x75c5d9:c.instructions+=1;goto B75c5d9;
case 0x75c5de:goto L75c5de;
case 0x75c5e1:c.instructions+=1;goto B75c5e1;
case 0x75c5e6:goto L75c5e6;
case 0x75c5e7:goto L75c5e7;
case 0x75c5ec:goto L75c5ec;
case 0x75c5ed:goto L75c5ed;
case 0x75c5f1:c.instructions+=1;goto B75c5f1;
case 0x75c5f6:goto L75c5f6;
case 0x75c5f8:c.instructions+=5;goto B75c5f8;
case 0x75c5fa:c.instructions+=4;goto B75c5fa;
case 0x75c5fc:c.instructions+=3;goto B75c5fc;
case 0x75c5fd:c.instructions+=2;goto B75c5fd;
case 0x75c5fe:c.instructions+=1;goto B75c5fe;
case 0x75c600:goto L75c600;
case 0x75c603:c.instructions+=1;goto B75c603;
case 0x75c605:goto L75c605;
case 0x75c608:c.instructions+=1;goto B75c608;
case 0x75c60a:goto L75c60a;
case 0x75c60d:c.instructions+=2;goto B75c60d;
case 0x75c60f:c.instructions+=1;goto B75c60f;
case 0x75c610:goto L75c610;
case 0x75c612:c.instructions+=4;goto B75c612;
case 0x75c615:c.instructions+=3;goto B75c615;
case 0x75c618:c.instructions+=2;goto B75c618;
case 0x75c61a:c.instructions+=1;goto B75c61a;
case 0x75c61b:goto L75c61b;
case 0x75c61e:c.instructions+=2;goto B75c61e;
case 0x75c620:c.instructions+=1;goto B75c620;
case 0x75c621:goto L75c621;
case 0x75c623:c.instructions+=2;goto B75c623;
case 0x75c628:c.instructions+=1;goto B75c628;
case 0x75c62d:goto L75c62d;
case 0x75c630:c.instructions+=2;goto B75c630;
case 0x75c637:c.instructions+=1;goto B75c637;
case 0x75c639:goto L75c639;
case 0x75c63f:c.instructions+=1;goto B75c63f;
case 0x75c641:goto L75c641;
case 0x75c643:c.instructions+=1;goto B75c643;
case 0x75c648:goto L75c648;
case 0x75c649:c.instructions+=3;goto B75c649;
case 0x75c64d:c.instructions+=2;goto B75c64d;
case 0x75c64e:c.instructions+=1;goto B75c64e;
case 0x75c653:goto L75c653;
case 0x75c654:c.instructions+=3;goto B75c654;
case 0x75c657:c.instructions+=2;goto B75c657;
case 0x75c65b:c.instructions+=1;goto B75c65b;
case 0x75c660:goto L75c660;
case 0x75c663:c.instructions+=2;goto B75c663;
case 0x75c665:c.instructions+=1;goto B75c665;
case 0x75c667:goto L75c667;
case 0x75c669:c.instructions+=1;goto B75c669;
case 0x75c66b:goto L75c66b;
case 0x75c66c:goto L75c66c;
case 0x75c673:c.instructions+=1;goto B75c673;
case 0x75c675:goto L75c675;
case 0x75c678:c.instructions+=1;goto B75c678;
case 0x75c67b:goto L75c67b;
case 0x75c67c:c.instructions+=3;goto B75c67c;
case 0x75c67e:c.instructions+=2;goto B75c67e;
case 0x75c684:c.instructions+=1;goto B75c684;
case 0x75c68a:goto L75c68a;
case 0x75c68f:goto L75c68f;
case 0x75c690:goto L75c690;
case 0x75c693:goto L75c693;
case 0x75c695:c.instructions+=1;goto B75c695;
case 0x75c69a:goto L75c69a;
case 0x75c69b:c.instructions+=1;goto B75c69b;
case 0x75c69c:goto L75c69c;
case 0x75c6a1:c.instructions+=1;goto B75c6a1;
case 0x75c6a3:goto L75c6a3;
case 0x75c6a7:c.instructions+=1;goto B75c6a7;
case 0x75c6ac:goto L75c6ac;
case 0x75c6ae:c.instructions+=2;goto B75c6ae;
case 0x75c6af:c.instructions+=1;goto B75c6af;
case 0x75c6b1:goto L75c6b1;
case 0x75c6b5:c.instructions+=1;goto B75c6b5;
case 0x75c6b7:goto L75c6b7;
case 0x75c6bb:c.instructions+=1;goto B75c6bb;
case 0x75c6c0:goto L75c6c0;
case 0x75c6c2:c.instructions+=2;goto B75c6c2;
case 0x75c6c3:c.instructions+=1;goto B75c6c3;
case 0x75c6c5:goto L75c6c5;
case 0x75c6c7:goto L75c6c7;
case 0x75c6c8:goto L75c6c8;
case 0x75c6ce:c.instructions+=2;goto B75c6ce;
case 0x75c6d2:c.instructions+=1;goto B75c6d2;
case 0x75c6d7:goto L75c6d7;
case 0x75c6d8:c.instructions+=2;goto B75c6d8;
case 0x75c6d9:c.instructions+=1;goto B75c6d9;
case 0x75c6da:goto L75c6da;
case 0x75c6dc:c.instructions+=2;goto B75c6dc;
case 0x75c6e1:c.instructions+=1;goto B75c6e1;
case 0x75c6e6:goto L75c6e6;
case 0x75c6e9:c.instructions+=2;goto B75c6e9;
case 0x75c6eb:c.instructions+=1;goto B75c6eb;
case 0x75c6ed:goto L75c6ed;
case 0x75c6f4:c.instructions+=1;goto B75c6f4;
case 0x75c6f6:goto L75c6f6;
case 0x75c6f8:c.instructions+=1;goto B75c6f8;
case 0x75c6fd:goto L75c6fd;
case 0x75c6fe:c.instructions+=3;goto B75c6fe;
case 0x75c702:c.instructions+=2;goto B75c702;
case 0x75c703:c.instructions+=1;goto B75c703;
case 0x75c708:goto L75c708;
case 0x75c709:c.instructions+=3;goto B75c709;
case 0x75c70c:c.instructions+=2;goto B75c70c;
case 0x75c70e:c.instructions+=1;goto B75c70e;
case 0x75c710:goto L75c710;
case 0x75c711:c.instructions+=2;goto B75c711;
case 0x75c712:c.instructions+=1;goto B75c712;
case 0x75c717:goto L75c717;
case 0x75c718:c.instructions+=1;goto B75c718;
case 0x75c719:goto L75c719;
case 0x75c71d:c.instructions+=1;goto B75c71d;
case 0x75c722:goto L75c722;
case 0x75c726:c.instructions+=1;goto B75c726;
case 0x75c728:goto L75c728;
case 0x75c72b:c.instructions+=1;goto B75c72b;
case 0x75c72d:goto L75c72d;
case 0x75c72f:c.instructions+=1;goto B75c72f;
case 0x75c734:goto L75c734;
case 0x75c735:c.instructions+=1;goto B75c735;
case 0x75c736:goto L75c736;
case 0x75c737:goto L75c737;
case 0x75c739:c.instructions+=2;goto B75c739;
case 0x75c73f:c.instructions+=1;goto B75c73f;
case 0x75c745:goto L75c745;
case 0x75c74a:goto L75c74a;
case 0x75c750:goto L75c750;
case 0x75c754:c.instructions+=4;goto B75c754;
case 0x75c758:c.instructions+=3;goto B75c758;
case 0x75c75a:c.instructions+=2;goto B75c75a;
case 0x75c75e:c.instructions+=1;goto B75c75e;
case 0x75c760:goto L75c760;
case 0x75c764:c.instructions+=2;goto B75c764;
case 0x75c766:c.instructions+=1;goto B75c766;
case 0x75c769:goto L75c769;
case 0x75c76a:c.instructions+=10;goto B75c76a;
case 0x75c76c:c.instructions+=9;goto B75c76c;
case 0x75c76e:c.instructions+=8;goto B75c76e;
case 0x75c772:c.instructions+=7;goto B75c772;
case 0x75c776:c.instructions+=6;goto B75c776;
case 0x75c778:c.instructions+=5;goto B75c778;
case 0x75c77c:c.instructions+=4;goto B75c77c;
case 0x75c77e:c.instructions+=3;goto B75c77e;
case 0x75c780:c.instructions+=2;goto B75c780;
case 0x75c781:c.instructions+=1;goto B75c781;
case 0x75c784:goto L75c784;
case 0x75c785:c.instructions+=15;goto B75c785;
case 0x75c787:c.instructions+=14;goto B75c787;
case 0x75c78a:c.instructions+=13;goto B75c78a;
case 0x75c78b:c.instructions+=12;goto B75c78b;
case 0x75c78e:c.instructions+=11;goto B75c78e;
case 0x75c78f:c.instructions+=10;goto B75c78f;
case 0x75c792:c.instructions+=9;goto B75c792;
case 0x75c793:c.instructions+=8;goto B75c793;
case 0x75c796:c.instructions+=7;goto B75c796;
case 0x75c799:c.instructions+=6;goto B75c799;
case 0x75c79a:c.instructions+=5;goto B75c79a;
case 0x75c7a1:c.instructions+=4;goto B75c7a1;
case 0x75c7a8:c.instructions+=3;goto B75c7a8;
case 0x75c7ab:c.instructions+=2;goto B75c7ab;
case 0x75c7ae:c.instructions+=1;goto B75c7ae;
case 0x75c7b3:goto L75c7b3;
case 0x75c7b6:c.instructions+=3;goto B75c7b6;
case 0x75c7b8:c.instructions+=2;goto B75c7b8;
case 0x75c7ba:c.instructions+=1;goto B75c7ba;
case 0x75c7bc:goto L75c7bc;
case 0x75c7bf:c.instructions+=1;goto B75c7bf;
case 0x75c7c1:goto L75c7c1;
case 0x75c7c4:c.instructions+=2;goto B75c7c4;
case 0x75c7c7:c.instructions+=1;goto B75c7c7;
case 0x75c7c9:goto L75c7c9;
case 0x75c7cc:c.instructions+=3;goto B75c7cc;
case 0x75c7cd:c.instructions+=2;goto B75c7cd;
case 0x75c7cf:c.instructions+=1;goto B75c7cf;
case 0x75c7d4:goto L75c7d4;
case 0x75c7d5:c.instructions+=1;goto B75c7d5;
case 0x75c7d6:goto L75c7d6;
case 0x75c7d8:c.instructions+=4;goto B75c7d8;
case 0x75c7d9:c.instructions+=3;goto B75c7d9;
case 0x75c7da:c.instructions+=2;goto B75c7da;
case 0x75c7db:c.instructions+=1;goto B75c7db;
case 0x75c7dc:goto L75c7dc;
case 0x75c7dd:c.instructions+=14;goto B75c7dd;
case 0x75c7df:c.instructions+=13;goto B75c7df;
case 0x75c7e2:c.instructions+=12;goto B75c7e2;
case 0x75c7e3:c.instructions+=11;goto B75c7e3;
case 0x75c7e6:c.instructions+=10;goto B75c7e6;
case 0x75c7e7:c.instructions+=9;goto B75c7e7;
case 0x75c7ea:c.instructions+=8;goto B75c7ea;
case 0x75c7ed:c.instructions+=7;goto B75c7ed;
case 0x75c7f0:c.instructions+=6;goto B75c7f0;
case 0x75c7f7:c.instructions+=5;goto B75c7f7;
case 0x75c7f8:c.instructions+=4;goto B75c7f8;
case 0x75c7ff:c.instructions+=3;goto B75c7ff;
case 0x75c802:c.instructions+=2;goto B75c802;
case 0x75c805:c.instructions+=1;goto B75c805;
case 0x75c80a:goto L75c80a;
case 0x75c80d:c.instructions+=3;goto B75c80d;
case 0x75c80f:c.instructions+=2;goto B75c80f;
case 0x75c811:c.instructions+=1;goto B75c811;
case 0x75c813:goto L75c813;
case 0x75c816:c.instructions+=1;goto B75c816;
case 0x75c818:goto L75c818;
case 0x75c81b:c.instructions+=2;goto B75c81b;
case 0x75c81e:c.instructions+=1;goto B75c81e;
case 0x75c820:goto L75c820;
case 0x75c823:c.instructions+=3;goto B75c823;
case 0x75c824:c.instructions+=2;goto B75c824;
case 0x75c826:c.instructions+=1;goto B75c826;
case 0x75c82b:goto L75c82b;
case 0x75c82c:c.instructions+=1;goto B75c82c;
case 0x75c82d:goto L75c82d;
case 0x75c82f:c.instructions+=4;goto B75c82f;
case 0x75c830:c.instructions+=3;goto B75c830;
case 0x75c831:c.instructions+=2;goto B75c831;
case 0x75c832:c.instructions+=1;goto B75c832;
case 0x75c840:goto L75c840;
case 0x75c844:c.instructions+=3;goto B75c844;
case 0x75c845:c.instructions+=2;goto B75c845;
case 0x75c847:c.instructions+=1;goto B75c847;
case 0x75c84d:goto L75c84d;
case 0x75c84e:c.instructions+=6;goto B75c84e;
case 0x75c84f:c.instructions+=5;goto B75c84f;
case 0x75c851:c.instructions+=4;goto B75c851;
case 0x75c855:c.instructions+=3;goto B75c855;
case 0x75c85b:c.instructions+=2;goto B75c85b;
case 0x75c85f:c.instructions+=1;goto B75c85f;
case 0x75c861:goto L75c861;
case 0x75c864:c.instructions+=1;goto B75c864;
case 0x75c86a:goto L75c86a;
case 0x75c86c:goto L75c86c;
case 0x75c86e:c.instructions+=5;goto B75c86e;
case 0x75c871:c.instructions+=4;goto B75c871;
case 0x75c873:c.instructions+=3;goto B75c873;
case 0x75c876:c.instructions+=2;goto B75c876;
case 0x75c879:c.instructions+=1;goto B75c879;
case 0x75c87b:goto L75c87b;
case 0x75c87d:c.instructions+=1;goto B75c87d;
case 0x75c87f:goto L75c87f;
case 0x75c885:c.instructions+=1;goto B75c885;
case 0x75c887:goto L75c887;
case 0x75c889:c.instructions+=2;goto B75c889;
case 0x75c88c:c.instructions+=1;goto B75c88c;
case 0x75c88e:goto L75c88e;
case 0x75c891:c.instructions+=1;goto B75c891;
case 0x75c893:goto L75c893;
case 0x75c895:c.instructions+=5;goto B75c895;
case 0x75c898:c.instructions+=4;goto B75c898;
case 0x75c89a:c.instructions+=3;goto B75c89a;
case 0x75c89d:c.instructions+=2;goto B75c89d;
case 0x75c89f:c.instructions+=1;goto B75c89f;
case 0x75c8a1:goto L75c8a1;
case 0x75c8a4:c.instructions+=1;goto B75c8a4;
case 0x75c8a6:goto L75c8a6;
case 0x75c8aa:c.instructions+=4;goto B75c8aa;
case 0x75c8ab:c.instructions+=3;goto B75c8ab;
case 0x75c8ac:c.instructions+=2;goto B75c8ac;
case 0x75c8ad:c.instructions+=1;goto B75c8ad;
case 0x75c8ae:goto L75c8ae;
case 0x75c8b4:c.instructions+=1;goto B75c8b4;
case 0x75c8b6:goto L75c8b6;
case 0x75c8b8:c.instructions+=3;goto B75c8b8;
case 0x75c8bb:c.instructions+=2;goto B75c8bb;
case 0x75c8be:c.instructions+=1;goto B75c8be;
case 0x75c8c4:goto L75c8c4;
case 0x75c8ca:c.instructions+=1;goto B75c8ca;
case 0x75c8cc:goto L75c8cc;
case 0x75c8ce:c.instructions+=2;goto B75c8ce;
case 0x75c8d1:c.instructions+=1;goto B75c8d1;
case 0x75c8d3:goto L75c8d3;
case 0x75c8d5:c.instructions+=1;goto B75c8d5;
case 0x75c8d8:goto L75c8d8;
case 0x75c8db:c.instructions+=1;goto B75c8db;
case 0x75c8dd:goto L75c8dd;
case 0x75c8de:c.instructions+=1;goto B75c8de;
case 0x75c8df:goto L75c8df;
case 0x75c8e3:c.instructions+=2;goto B75c8e3;
case 0x75c8e4:c.instructions+=1;goto B75c8e4;
case 0x75c8e5:goto L75c8e5;
case 0x75c8e7:c.instructions+=3;goto B75c8e7;
case 0x75c8ea:c.instructions+=2;goto B75c8ea;
case 0x75c8ed:c.instructions+=1;goto B75c8ed;
case 0x75c8ef:goto L75c8ef;
case 0x75c8f4:c.instructions+=8;goto B75c8f4;
case 0x75c8f6:c.instructions+=7;goto B75c8f6;
case 0x75c8f8:c.instructions+=6;goto B75c8f8;
case 0x75c8fb:c.instructions+=5;goto B75c8fb;
case 0x75c8fd:c.instructions+=4;goto B75c8fd;
case 0x75c8ff:c.instructions+=3;goto B75c8ff;
case 0x75c902:c.instructions+=2;goto B75c902;
case 0x75c907:c.instructions+=1;goto B75c907;
case 0x75c909:goto L75c909;
case 0x75c90b:c.instructions+=1;goto B75c90b;
case 0x75c90d:goto L75c90d;
case 0x75c90f:c.instructions+=1;goto B75c90f;
case 0x75c911:goto L75c911;
case 0x75c917:c.instructions+=1;goto B75c917;
case 0x75c919:goto L75c919;
case 0x75c91f:c.instructions+=1;goto B75c91f;
case 0x75c921:goto L75c921;
case 0x75c923:c.instructions+=1;goto B75c923;
case 0x75c925:goto L75c925;
case 0x75c92b:c.instructions+=2;goto B75c92b;
case 0x75c92d:c.instructions+=1;goto B75c92d;
case 0x75c92f:goto L75c92f;
case 0x75c935:c.instructions+=2;goto B75c935;
case 0x75c937:c.instructions+=1;goto B75c937;
case 0x75c939:goto L75c939;
case 0x75c93b:c.instructions+=1;goto B75c93b;
case 0x75c93d:goto L75c93d;
case 0x75c940:c.instructions+=3;goto B75c940;
case 0x75c942:c.instructions+=2;goto B75c942;
case 0x75c945:c.instructions+=1;goto B75c945;
case 0x75c947:goto L75c947;
case 0x75c949:goto L75c949;
case 0x75c94b:c.instructions+=3;goto B75c94b;
case 0x75c94e:c.instructions+=2;goto B75c94e;
case 0x75c951:c.instructions+=1;goto B75c951;
case 0x75c953:goto L75c953;
case 0x75c956:c.instructions+=1;goto B75c956;
case 0x75c95c:goto L75c95c;
case 0x75c960:c.instructions+=4;goto B75c960;
case 0x75c961:c.instructions+=3;goto B75c961;
case 0x75c962:c.instructions+=2;goto B75c962;
case 0x75c963:c.instructions+=1;goto B75c963;
case 0x75c9b0:goto L75c9b0;
case 0x75c9b7:c.instructions+=1;goto B75c9b7;
case 0x75c9b9:goto L75c9b9;
case 0x75c9bc:c.instructions+=5;goto B75c9bc;
case 0x75c9c1:c.instructions+=4;goto B75c9c1;
case 0x75c9c5:c.instructions+=3;goto B75c9c5;
case 0x75c9ca:c.instructions+=2;goto B75c9ca;
case 0x75c9cf:c.instructions+=1;goto B75c9cf;
case 0x75c9d1:goto L75c9d1;
case 0x75c9d4:c.instructions+=3;goto B75c9d4;
case 0x75c9d8:c.instructions+=2;goto B75c9d8;
case 0x75c9dc:c.instructions+=1;goto B75c9dc;
case 0x75c9e0:goto L75c9e0;
case 0x75c9e4:c.instructions+=1;goto B75c9e4;
case 0x75c9e6:goto L75c9e6;
case 0x75c9eb:goto L75c9eb;
case 0x75c9ee:c.instructions+=5;goto B75c9ee;
case 0x75c9f0:c.instructions+=4;goto B75c9f0;
case 0x75c9f3:c.instructions+=3;goto B75c9f3;
case 0x75c9f7:c.instructions+=2;goto B75c9f7;
case 0x75c9fb:c.instructions+=1;goto B75c9fb;
case 0x75ca00:goto L75ca00;
case 0x75ca03:c.instructions+=1;goto B75ca03;
case 0x75ca0d:goto L75ca0d;
case 0x75ca0f:c.instructions+=4;goto B75ca0f;
case 0x75ca10:c.instructions+=3;goto B75ca10;
case 0x75ca14:c.instructions+=2;goto B75ca14;
case 0x75ca1a:c.instructions+=1;goto B75ca1a;
case 0x75ca1c:goto L75ca1c;
case 0x75ca21:goto L75ca21;
case 0x75ca27:c.instructions+=3;goto B75ca27;
case 0x75ca2b:c.instructions+=2;goto B75ca2b;
case 0x75ca31:c.instructions+=1;goto B75ca31;
case 0x75ca37:goto L75ca37;
case 0x75ca3c:goto L75ca3c;
case 0x75ca42:goto L75ca42;
case 0x75ca47:c.instructions+=1;goto B75ca47;
case 0x75ca4d:goto L75ca4d;
case 0x75ca51:c.instructions+=2;goto B75ca51;
case 0x75ca54:c.instructions+=1;goto B75ca54;
case 0x75ca5a:goto L75ca5a;
case 0x75ca5c:c.instructions+=1;goto B75ca5c;
case 0x75ca61:goto L75ca61;
case 0x75ca64:c.instructions+=1;goto B75ca64;
case 0x75ca66:goto L75ca66;
case 0x75ca68:goto L75ca68;
case 0x75ca6f:c.instructions+=1;goto B75ca6f;
case 0x75ca75:goto L75ca75;
case 0x75ca7b:c.instructions+=2;goto B75ca7b;
case 0x75ca80:c.instructions+=1;goto B75ca80;
case 0x75ca85:goto L75ca85;
case 0x75ca8c:c.instructions+=1;goto B75ca8c;
case 0x75ca92:goto L75ca92;
case 0x75ca98:c.instructions+=2;goto B75ca98;
case 0x75ca9d:c.instructions+=1;goto B75ca9d;
case 0x75caa2:goto L75caa2;
case 0x75caa3:c.instructions+=1;goto B75caa3;
case 0x75caa4:goto L75caa4;
case 0x75caa8:c.instructions+=1;goto B75caa8;
case 0x75caad:goto L75caad;
case 0x75cab2:c.instructions+=1;goto B75cab2;
case 0x75cab4:goto L75cab4;
case 0x75cab5:c.instructions+=1;goto B75cab5;
case 0x75cab7:goto L75cab7;
case 0x75cab9:c.instructions+=2;goto B75cab9;
case 0x75cabe:c.instructions+=1;goto B75cabe;
case 0x75cac0:goto L75cac0;
case 0x75cac5:c.instructions+=1;goto B75cac5;
case 0x75cac7:goto L75cac7;
case 0x75cac9:c.instructions+=2;goto B75cac9;
case 0x75cace:c.instructions+=1;goto B75cace;
case 0x75cad0:goto L75cad0;
case 0x75cad2:c.instructions+=1;goto B75cad2;
case 0x75cad4:goto L75cad4;
case 0x75cad6:c.instructions+=3;goto B75cad6;
case 0x75cadb:c.instructions+=2;goto B75cadb;
case 0x75cadf:c.instructions+=1;goto B75cadf;
case 0x75cae1:goto L75cae1;
case 0x75cae5:c.instructions+=1;goto B75cae5;
case 0x75caea:goto L75caea;
case 0x75caee:c.instructions+=5;goto B75caee;
case 0x75caf0:c.instructions+=4;goto B75caf0;
case 0x75caf5:c.instructions+=3;goto B75caf5;
case 0x75cafb:c.instructions+=2;goto B75cafb;
case 0x75cb00:c.instructions+=1;goto B75cb00;
case 0x75cb02:goto L75cb02;
case 0x75cb06:c.instructions+=1;goto B75cb06;
case 0x75cb08:goto L75cb08;
case 0x75cb0a:c.instructions+=1;goto B75cb0a;
case 0x75cb0c:goto L75cb0c;
case 0x75cb0f:c.instructions+=7;goto B75cb0f;
case 0x75cb11:c.instructions+=6;goto B75cb11;
case 0x75cb12:c.instructions+=5;goto B75cb12;
case 0x75cb15:c.instructions+=4;goto B75cb15;
case 0x75cb18:c.instructions+=3;goto B75cb18;
case 0x75cb1c:c.instructions+=2;goto B75cb1c;
case 0x75cb20:c.instructions+=1;goto B75cb20;
case 0x75cb25:goto L75cb25;
case 0x75cb28:c.instructions+=6;goto B75cb28;
case 0x75cb29:c.instructions+=5;goto B75cb29;
case 0x75cb2c:c.instructions+=4;goto B75cb2c;
case 0x75cb2e:c.instructions+=3;goto B75cb2e;
case 0x75cb31:c.instructions+=2;goto B75cb31;
case 0x75cb33:c.instructions+=1;goto B75cb33;
case 0x75cb39:goto L75cb39;
case 0x75cb3e:c.instructions+=1;goto B75cb3e;
case 0x75cb43:goto L75cb43;
case 0x75cb47:c.instructions+=3;goto B75cb47;
case 0x75cb4c:c.instructions+=2;goto B75cb4c;
case 0x75cb50:c.instructions+=1;goto B75cb50;
case 0x75cb56:goto L75cb56;
case 0x75cb58:c.instructions+=4;goto B75cb58;
case 0x75cb5c:c.instructions+=3;goto B75cb5c;
case 0x75cb61:c.instructions+=2;goto B75cb61;
case 0x75cb65:c.instructions+=1;goto B75cb65;
case 0x75cb67:goto L75cb67;
case 0x75cb6c:goto L75cb6c;
case 0x75cb70:c.instructions+=3;goto B75cb70;
case 0x75cb73:c.instructions+=2;goto B75cb73;
case 0x75cb7b:c.instructions+=1;goto B75cb7b;
case 0x75cb7d:goto L75cb7d;
case 0x75cb83:c.instructions+=2;goto B75cb83;
case 0x75cb85:c.instructions+=1;goto B75cb85;
case 0x75cb87:goto L75cb87;
case 0x75cb89:goto L75cb89;
case 0x75cb8e:c.instructions+=1;goto B75cb8e;
case 0x75cb93:goto L75cb93;
case 0x75cb95:c.instructions+=2;goto B75cb95;
case 0x75cb97:c.instructions+=1;goto B75cb97;
case 0x75cb9d:goto L75cb9d;
case 0x75cb9f:c.instructions+=1;goto B75cb9f;
case 0x75cba4:goto L75cba4;
case 0x75cba6:c.instructions+=2;goto B75cba6;
case 0x75cba8:c.instructions+=1;goto B75cba8;
case 0x75cbad:goto L75cbad;
case 0x75cbaf:c.instructions+=1;goto B75cbaf;
case 0x75cbb4:goto L75cbb4;
case 0x75cbb6:c.instructions+=2;goto B75cbb6;
case 0x75cbb8:c.instructions+=1;goto B75cbb8;
case 0x75cbbe:goto L75cbbe;
case 0x75cbc0:c.instructions+=4;goto B75cbc0;
case 0x75cbc2:c.instructions+=3;goto B75cbc2;
case 0x75cbc8:c.instructions+=2;goto B75cbc8;
case 0x75cbcd:c.instructions+=1;goto B75cbcd;
case 0x75cbd2:goto L75cbd2;
case 0x75cbd4:c.instructions+=6;goto B75cbd4;
case 0x75cbd6:c.instructions+=5;goto B75cbd6;
case 0x75cbd8:c.instructions+=4;goto B75cbd8;
case 0x75cbda:c.instructions+=3;goto B75cbda;
case 0x75cbdd:c.instructions+=2;goto B75cbdd;
case 0x75cbde:c.instructions+=1;goto B75cbde;
case 0x75cbe0:goto L75cbe0;
case 0x75cbe6:c.instructions+=7;goto B75cbe6;
case 0x75cbe8:c.instructions+=6;goto B75cbe8;
case 0x75cbea:c.instructions+=5;goto B75cbea;
case 0x75cbec:c.instructions+=4;goto B75cbec;
case 0x75cbee:c.instructions+=3;goto B75cbee;
case 0x75cbf1:c.instructions+=2;goto B75cbf1;
case 0x75cbf2:c.instructions+=1;goto B75cbf2;
case 0x75cbf4:goto L75cbf4;
case 0x75cbf6:goto L75cbf6;
case 0x75cbf7:goto L75cbf7;
case 0x75cbf9:c.instructions+=1;goto B75cbf9;
case 0x75cc00:goto L75cc00;
case 0x75cc04:c.instructions+=6;goto B75cc04;
case 0x75cc05:c.instructions+=5;goto B75cc05;
case 0x75cc09:c.instructions+=4;goto B75cc09;
case 0x75cc0a:c.instructions+=3;goto B75cc0a;
case 0x75cc0c:c.instructions+=2;goto B75cc0c;
case 0x75cc0e:c.instructions+=1;goto B75cc0e;
case 0x75cc10:goto L75cc10;
case 0x75cc11:c.instructions+=1;goto B75cc11;
case 0x75cc12:goto L75cc12;
case 0x75cc15:c.instructions+=3;goto B75cc15;
case 0x75cc17:c.instructions+=2;goto B75cc17;
case 0x75cc19:c.instructions+=1;goto B75cc19;
case 0x75cc1b:goto L75cc1b;
case 0x75cc20:goto L75cc20;
case 0x75cc21:c.instructions+=2;goto B75cc21;
case 0x75cc22:c.instructions+=1;goto B75cc22;
case 0x75cc26:goto L75cc26;
case 0x75cc29:c.instructions+=2;goto B75cc29;
case 0x75cc2b:c.instructions+=1;goto B75cc2b;
case 0x75cc2d:goto L75cc2d;
case 0x75cc2f:goto L75cc2f;
case 0x75cc31:c.instructions+=2;goto B75cc31;
case 0x75cc33:c.instructions+=1;goto B75cc33;
case 0x75cc35:goto L75cc35;
case 0x75cc39:goto L75cc39;
case 0x75cc3b:c.instructions+=2;goto B75cc3b;
case 0x75cc3d:c.instructions+=1;goto B75cc3d;
case 0x75cc3f:goto L75cc3f;
case 0x75cc41:c.instructions+=1;goto B75cc41;
case 0x75cc43:goto L75cc43;
case 0x75cc45:c.instructions+=3;goto B75cc45;
case 0x75cc47:c.instructions+=2;goto B75cc47;
case 0x75cc49:c.instructions+=1;goto B75cc49;
case 0x75cc50:goto L75cc50;
case 0x75cc52:c.instructions+=6;goto B75cc52;
case 0x75cc55:c.instructions+=5;goto B75cc55;
case 0x75cc58:c.instructions+=4;goto B75cc58;
case 0x75cc5a:c.instructions+=3;goto B75cc5a;
case 0x75cc5b:c.instructions+=2;goto B75cc5b;
case 0x75cc5c:c.instructions+=1;goto B75cc5c;
case 0x75cc5e:goto L75cc5e;
case 0x75cc62:goto L75cc62;
case 0x75cc64:c.instructions+=2;goto B75cc64;
case 0x75cc66:c.instructions+=1;goto B75cc66;
case 0x75cc68:goto L75cc68;
case 0x75cc69:c.instructions+=1;goto B75cc69;
case 0x75cc6a:goto L75cc6a;
case 0x75cc6b:c.instructions+=2;goto B75cc6b;
case 0x75cc6c:c.instructions+=1;goto B75cc6c;
case 0x75cc70:goto L75cc70;
case 0x75cc74:c.instructions+=3;goto B75cc74;
case 0x75cc7a:c.instructions+=2;goto B75cc7a;
case 0x75cc7d:c.instructions+=1;goto B75cc7d;
case 0x75cc83:goto L75cc83;
case 0x75cc84:c.instructions+=6;goto B75cc84;
case 0x75cc85:c.instructions+=5;goto B75cc85;
case 0x75cc8c:c.instructions+=4;goto B75cc8c;
case 0x75cc8e:c.instructions+=3;goto B75cc8e;
case 0x75cc8f:c.instructions+=2;goto B75cc8f;
case 0x75cc90:c.instructions+=1;goto B75cc90;
case 0x75cc96:goto L75cc96;
case 0x75cc9d:c.instructions+=6;goto B75cc9d;
case 0x75cca0:c.instructions+=5;goto B75cca0;
case 0x75cca3:c.instructions+=4;goto B75cca3;
case 0x75cca5:c.instructions+=3;goto B75cca5;
case 0x75ccad:c.instructions+=2;goto B75ccad;
case 0x75ccb1:c.instructions+=1;goto B75ccb1;
case 0x75ccb5:goto L75ccb5;
case 0x75ccb7:c.instructions+=6;goto B75ccb7;
case 0x75ccb9:c.instructions+=5;goto B75ccb9;
case 0x75ccbb:c.instructions+=4;goto B75ccbb;
case 0x75ccbd:c.instructions+=3;goto B75ccbd;
case 0x75ccbe:c.instructions+=2;goto B75ccbe;
case 0x75ccc1:c.instructions+=1;goto B75ccc1;
case 0x75ccc3:goto L75ccc3;
case 0x75ccca:c.instructions+=5;goto B75ccca;
case 0x75cccb:c.instructions+=4;goto B75cccb;
case 0x75cccc:c.instructions+=3;goto B75cccc;
case 0x75cccd:c.instructions+=2;goto B75cccd;
case 0x75cccf:c.instructions+=1;goto B75cccf;
case 0x75ccd4:goto L75ccd4;
case 0x75ccd7:goto L75ccd7;
case 0x75ccdb:c.instructions+=3;goto B75ccdb;
case 0x75ccdc:c.instructions+=2;goto B75ccdc;
case 0x75cce0:c.instructions+=1;goto B75cce0;
case 0x75cce6:goto L75cce6;
case 0x75ccea:c.instructions+=6;goto B75ccea;
case 0x75ccf1:c.instructions+=5;goto B75ccf1;
case 0x75ccf5:c.instructions+=4;goto B75ccf5;
case 0x75ccf9:c.instructions+=3;goto B75ccf9;
case 0x75ccfb:c.instructions+=2;goto B75ccfb;
case 0x75ccfd:c.instructions+=1;goto B75ccfd;
case 0x75ccff:goto L75ccff;
case 0x75cd01:c.instructions+=6;goto B75cd01;
case 0x75cd04:c.instructions+=5;goto B75cd04;
case 0x75cd06:c.instructions+=4;goto B75cd06;
case 0x75cd08:c.instructions+=3;goto B75cd08;
case 0x75cd09:c.instructions+=2;goto B75cd09;
case 0x75cd0a:c.instructions+=1;goto B75cd0a;
case 0x75cd11:goto L75cd11;
case 0x75cd14:c.instructions+=2;goto B75cd14;
case 0x75cd16:c.instructions+=1;goto B75cd16;
case 0x75cd18:goto L75cd18;
case 0x75cd1a:c.instructions+=2;goto B75cd1a;
case 0x75cd1c:c.instructions+=1;goto B75cd1c;
case 0x75cd1e:goto L75cd1e;
case 0x75cd20:c.instructions+=2;goto B75cd20;
case 0x75cd22:c.instructions+=1;goto B75cd22;
case 0x75cd24:goto L75cd24;
case 0x75cd26:c.instructions+=6;goto B75cd26;
case 0x75cd29:c.instructions+=5;goto B75cd29;
case 0x75cd2c:c.instructions+=4;goto B75cd2c;
case 0x75cd2e:c.instructions+=3;goto B75cd2e;
case 0x75cd2f:c.instructions+=2;goto B75cd2f;
case 0x75cd30:c.instructions+=1;goto B75cd30;
case 0x75cd32:goto L75cd32;
case 0x75cd36:c.instructions+=1;goto B75cd36;
case 0x75cd3a:goto L75cd3a;
case 0x75cd3b:c.instructions+=2;goto B75cd3b;
case 0x75cd3c:c.instructions+=1;goto B75cd3c;
case 0x75cd43:goto L75cd43;
case 0x75cd46:c.instructions+=2;goto B75cd46;
case 0x75cd48:c.instructions+=1;goto B75cd48;
case 0x75cd4a:goto L75cd4a;
case 0x75cd4c:c.instructions+=2;goto B75cd4c;
case 0x75cd4e:c.instructions+=1;goto B75cd4e;
case 0x75cd50:goto L75cd50;
case 0x75cd52:c.instructions+=2;goto B75cd52;
case 0x75cd54:c.instructions+=1;goto B75cd54;
case 0x75cd56:goto L75cd56;
case 0x75cd58:c.instructions+=6;goto B75cd58;
case 0x75cd5b:c.instructions+=5;goto B75cd5b;
case 0x75cd5e:c.instructions+=4;goto B75cd5e;
case 0x75cd60:c.instructions+=3;goto B75cd60;
case 0x75cd61:c.instructions+=2;goto B75cd61;
case 0x75cd62:c.instructions+=1;goto B75cd62;
case 0x75cd64:goto L75cd64;
case 0x75cd68:c.instructions+=1;goto B75cd68;
case 0x75cd6c:goto L75cd6c;
case 0x75cd6d:c.instructions+=2;goto B75cd6d;
case 0x75cd6e:c.instructions+=1;goto B75cd6e;
case 0x75cd75:goto L75cd75;
case 0x75cd78:c.instructions+=2;goto B75cd78;
case 0x75cd7a:c.instructions+=1;goto B75cd7a;
case 0x75cd7c:goto L75cd7c;
case 0x75cd7e:c.instructions+=2;goto B75cd7e;
case 0x75cd80:c.instructions+=1;goto B75cd80;
case 0x75cd82:goto L75cd82;
case 0x75cd84:c.instructions+=2;goto B75cd84;
case 0x75cd86:c.instructions+=1;goto B75cd86;
case 0x75cd88:goto L75cd88;
case 0x75cd8a:c.instructions+=6;goto B75cd8a;
case 0x75cd8d:c.instructions+=5;goto B75cd8d;
case 0x75cd90:c.instructions+=4;goto B75cd90;
case 0x75cd92:c.instructions+=3;goto B75cd92;
case 0x75cd93:c.instructions+=2;goto B75cd93;
case 0x75cd94:c.instructions+=1;goto B75cd94;
case 0x75cd96:goto L75cd96;
case 0x75cd9a:goto L75cd9a;
case 0x75cd9e:c.instructions+=1;goto B75cd9e;
case 0x75cda0:goto L75cda0;
case 0x75cda2:c.instructions+=1;goto B75cda2;
case 0x75cda4:goto L75cda4;
case 0x75cda6:c.instructions+=2;goto B75cda6;
case 0x75cda8:c.instructions+=1;goto B75cda8;
case 0x75cdaa:goto L75cdaa;
case 0x75cdab:c.instructions+=2;goto B75cdab;
case 0x75cdac:c.instructions+=1;goto B75cdac;
case 0x75cdb3:goto L75cdb3;
case 0x75cdb6:c.instructions+=2;goto B75cdb6;
case 0x75cdb8:c.instructions+=1;goto B75cdb8;
case 0x75cdba:goto L75cdba;
case 0x75cdbc:c.instructions+=1;goto B75cdbc;
case 0x75cdbe:goto L75cdbe;
case 0x75cdc0:goto L75cdc0;
case 0x75cdc4:c.instructions+=3;goto B75cdc4;
case 0x75cdc6:c.instructions+=2;goto B75cdc6;
case 0x75cdc8:c.instructions+=1;goto B75cdc8;
case 0x75cdca:goto L75cdca;
case 0x75cdcb:c.instructions+=2;goto B75cdcb;
case 0x75cdcc:c.instructions+=1;goto B75cdcc;
case 0x75cdd3:goto L75cdd3;
case 0x75cdd6:c.instructions+=2;goto B75cdd6;
case 0x75cdd8:c.instructions+=1;goto B75cdd8;
case 0x75cdda:goto L75cdda;
case 0x75cde0:goto L75cde0;
case 0x75cde2:c.instructions+=2;goto B75cde2;
case 0x75cde4:c.instructions+=1;goto B75cde4;
case 0x75cde6:goto L75cde6;
case 0x75cde7:c.instructions+=2;goto B75cde7;
case 0x75cde8:c.instructions+=1;goto B75cde8;
case 0x75cdef:goto L75cdef;
case 0x75cdf2:c.instructions+=2;goto B75cdf2;
case 0x75cdf4:c.instructions+=1;goto B75cdf4;
case 0x75cdf6:goto L75cdf6;
case 0x75cdf8:c.instructions+=1;goto B75cdf8;
case 0x75cdfa:goto L75cdfa;
case 0x75cdfc:c.instructions+=1;goto B75cdfc;
case 0x75cdfe:goto L75cdfe;
case 0x75ce05:c.instructions+=4;goto B75ce05;
case 0x75ce07:c.instructions+=3;goto B75ce07;
case 0x75ce09:c.instructions+=2;goto B75ce09;
case 0x75ce0d:c.instructions+=1;goto B75ce0d;
case 0x75ce10:goto L75ce10;
case 0x75ce13:c.instructions+=8;goto B75ce13;
case 0x75ce15:c.instructions+=7;goto B75ce15;
case 0x75ce18:c.instructions+=6;goto B75ce18;
case 0x75ce1a:c.instructions+=5;goto B75ce1a;
case 0x75ce1e:c.instructions+=4;goto B75ce1e;
case 0x75ce1f:c.instructions+=3;goto B75ce1f;
case 0x75ce20:c.instructions+=2;goto B75ce20;
case 0x75ce24:c.instructions+=1;goto B75ce24;
case 0x75ce26:goto L75ce26;
case 0x75ce2d:goto L75ce2d;
case 0x75ce2f:c.instructions+=1;goto B75ce2f;
case 0x75ce35:goto L75ce35;
case 0x75ce37:c.instructions+=1;goto B75ce37;
case 0x75ce3c:goto L75ce3c;
case 0x75ce3e:c.instructions+=2;goto B75ce3e;
case 0x75ce40:c.instructions+=1;goto B75ce40;
case 0x75ce42:goto L75ce42;
case 0x75ce44:c.instructions+=2;goto B75ce44;
case 0x75ce46:c.instructions+=1;goto B75ce46;
case 0x75ce48:goto L75ce48;
case 0x75ce49:c.instructions+=2;goto B75ce49;
case 0x75ce4a:c.instructions+=1;goto B75ce4a;
case 0x75ce51:goto L75ce51;
case 0x75ce54:c.instructions+=2;goto B75ce54;
case 0x75ce56:c.instructions+=1;goto B75ce56;
case 0x75ce58:goto L75ce58;
case 0x75ce5a:c.instructions+=1;goto B75ce5a;
case 0x75ce5c:goto L75ce5c;
case 0x75ce60:goto L75ce60;
case 0x75ce64:c.instructions+=3;goto B75ce64;
case 0x75ce66:c.instructions+=2;goto B75ce66;
case 0x75ce68:c.instructions+=1;goto B75ce68;
case 0x75ce6a:goto L75ce6a;
case 0x75ce6b:c.instructions+=2;goto B75ce6b;
case 0x75ce6c:c.instructions+=1;goto B75ce6c;
case 0x75ce73:goto L75ce73;
case 0x75ce76:c.instructions+=2;goto B75ce76;
case 0x75ce78:c.instructions+=1;goto B75ce78;
case 0x75ce7a:goto L75ce7a;
case 0x75ce7e:goto L75ce7e;
case 0x75ce82:c.instructions+=6;goto B75ce82;
case 0x75ce84:c.instructions+=5;goto B75ce84;
case 0x75ce86:c.instructions+=4;goto B75ce86;
case 0x75ce88:c.instructions+=3;goto B75ce88;
case 0x75ce8a:c.instructions+=2;goto B75ce8a;
case 0x75ce8c:c.instructions+=1;goto B75ce8c;
case 0x75ce8e:goto L75ce8e;
case 0x75ce90:c.instructions+=1;goto B75ce90;
case 0x75ce92:goto L75ce92;
case 0x75ce96:c.instructions+=4;goto B75ce96;
case 0x75ce9a:c.instructions+=3;goto B75ce9a;
case 0x75cea1:c.instructions+=2;goto B75cea1;
case 0x75cea2:c.instructions+=1;goto B75cea2;
case 0x75cea6:goto L75cea6;
case 0x75cea8:c.instructions+=1;goto B75cea8;
case 0x75ceae:goto L75ceae;
case 0x75ceb2:c.instructions+=2;goto B75ceb2;
case 0x75ceb6:c.instructions+=1;goto B75ceb6;
case 0x75cebb:goto L75cebb;
case 0x75cebd:c.instructions+=1;goto B75cebd;
case 0x75cebf:goto L75cebf;
case 0x75cec3:c.instructions+=4;goto B75cec3;
case 0x75cec7:c.instructions+=3;goto B75cec7;
case 0x75cece:c.instructions+=2;goto B75cece;
case 0x75cecf:c.instructions+=1;goto B75cecf;
case 0x75ced3:goto L75ced3;
case 0x75ced5:c.instructions+=1;goto B75ced5;
case 0x75cedb:goto L75cedb;
case 0x75cedf:c.instructions+=2;goto B75cedf;
case 0x75cee3:c.instructions+=1;goto B75cee3;
case 0x75cee8:goto L75cee8;
case 0x75cee9:c.instructions+=3;goto B75cee9;
case 0x75ceea:c.instructions+=2;goto B75ceea;
case 0x75ceeb:c.instructions+=1;goto B75ceeb;
case 0x75ceec:goto L75ceec;
case 0x75cef2:c.instructions+=1;goto B75cef2;
case 0x75cf00:goto L75cf00;
case 0x75cf03:c.instructions+=2;goto B75cf03;
case 0x75cf04:c.instructions+=1;goto B75cf04;
case 0x75cf10:goto L75cf10;
case 0x75cf12:c.instructions+=7;goto B75cf12;
case 0x75cf16:c.instructions+=6;goto B75cf16;
case 0x75cf17:c.instructions+=5;goto B75cf17;
case 0x75cf19:c.instructions+=4;goto B75cf19;
case 0x75cf1c:c.instructions+=3;goto B75cf1c;
case 0x75cf20:c.instructions+=2;goto B75cf20;
case 0x75cf26:c.instructions+=1;goto B75cf26;
case 0x75cf28:goto L75cf28;
case 0x75cf2a:c.instructions+=3;goto B75cf2a;
case 0x75cf2d:c.instructions+=2;goto B75cf2d;
case 0x75cf2f:c.instructions+=1;goto B75cf2f;
case 0x75cf31:goto L75cf31;
case 0x75cf33:c.instructions+=1;goto B75cf33;
case 0x75cf35:goto L75cf35;
case 0x75cf3b:c.instructions+=1;goto B75cf3b;
case 0x75cf3d:goto L75cf3d;
case 0x75cf3f:c.instructions+=5;goto B75cf3f;
case 0x75cf40:c.instructions+=4;goto B75cf40;
case 0x75cf42:c.instructions+=3;goto B75cf42;
case 0x75cf45:c.instructions+=2;goto B75cf45;
case 0x75cf46:c.instructions+=1;goto B75cf46;
case 0x75cf48:goto L75cf48;
case 0x75cf4a:c.instructions+=13;goto B75cf4a;
case 0x75cf4f:c.instructions+=12;goto B75cf4f;
case 0x75cf51:c.instructions+=11;goto B75cf51;
case 0x75cf53:c.instructions+=10;goto B75cf53;
case 0x75cf55:c.instructions+=9;goto B75cf55;
case 0x75cf57:c.instructions+=8;goto B75cf57;
case 0x75cf59:c.instructions+=7;goto B75cf59;
case 0x75cf5c:c.instructions+=6;goto B75cf5c;
case 0x75cf5f:c.instructions+=5;goto B75cf5f;
case 0x75cf61:c.instructions+=4;goto B75cf61;
case 0x75cf63:c.instructions+=3;goto B75cf63;
case 0x75cf66:c.instructions+=2;goto B75cf66;
case 0x75cf6c:c.instructions+=1;goto B75cf6c;
case 0x75cf6e:goto L75cf6e;
case 0x75cf73:c.instructions+=1;goto B75cf73;
case 0x75cf75:goto L75cf75;
case 0x75cf7a:c.instructions+=1;goto B75cf7a;
case 0x75cf7c:goto L75cf7c;
case 0x75cf82:c.instructions+=1;goto B75cf82;
case 0x75cf84:goto L75cf84;
case 0x75cf85:c.instructions+=1;goto B75cf85;
case 0x75cf86:goto L75cf86;
case 0x75cf87:c.instructions+=2;goto B75cf87;
case 0x75cf89:c.instructions+=1;goto B75cf89;
case 0x75cf8a:goto L75cf8a;
case 0x75cf8d:c.instructions+=2;goto B75cf8d;
case 0x75cf8f:c.instructions+=1;goto B75cf8f;
case 0x75cf91:goto L75cf91;
case 0x75cf93:c.instructions+=1;goto B75cf93;
case 0x75cf95:goto L75cf95;
case 0x75cf97:c.instructions+=1;goto B75cf97;
case 0x75cf99:goto L75cf99;
case 0x75cf9b:c.instructions+=1;goto B75cf9b;
case 0x75cf9d:goto L75cf9d;
case 0x75cfa0:c.instructions+=2;goto B75cfa0;
case 0x75cfa2:c.instructions+=1;goto B75cfa2;
case 0x75cfa4:goto L75cfa4;
case 0x75cfa6:c.instructions+=1;goto B75cfa6;
case 0x75cfa8:goto L75cfa8;
case 0x75cfaa:c.instructions+=1;goto B75cfaa;
case 0x75cfac:goto L75cfac;
case 0x75cfae:c.instructions+=1;goto B75cfae;
case 0x75cfb0:goto L75cfb0;
case 0x75cfb2:goto L75cfb2;
case 0x75cfb3:c.instructions+=4;goto B75cfb3;
case 0x75cfb4:c.instructions+=3;goto B75cfb4;
case 0x75cfb7:c.instructions+=2;goto B75cfb7;
case 0x75cfb8:c.instructions+=1;goto B75cfb8;
case 0x75cfb9:goto L75cfb9;
case 0x75cfbc:c.instructions+=4;goto B75cfbc;
case 0x75cfbd:c.instructions+=3;goto B75cfbd;
case 0x75cfbe:c.instructions+=2;goto B75cfbe;
case 0x75cfbf:c.instructions+=1;goto B75cfbf;
case 0x75cfc0:goto L75cfc0;
case 0x75cfc3:c.instructions+=4;goto B75cfc3;
case 0x75cfc4:c.instructions+=3;goto B75cfc4;
case 0x75cfc5:c.instructions+=2;goto B75cfc5;
case 0x75cfc6:c.instructions+=1;goto B75cfc6;
case 0x75cfc7:goto L75cfc7;
case 0x75cfca:c.instructions+=4;goto B75cfca;
case 0x75cfcb:c.instructions+=3;goto B75cfcb;
case 0x75cfcc:c.instructions+=2;goto B75cfcc;
case 0x75cfcd:c.instructions+=1;goto B75cfcd;
case 0x75cfd0:goto L75cfd0;
case 0x75cfd1:c.instructions+=11;goto B75cfd1;
case 0x75cfd3:c.instructions+=10;goto B75cfd3;
case 0x75cfd4:c.instructions+=9;goto B75cfd4;
case 0x75cfd5:c.instructions+=8;goto B75cfd5;
case 0x75cfd8:c.instructions+=7;goto B75cfd8;
case 0x75cfdb:c.instructions+=6;goto B75cfdb;
case 0x75cfde:c.instructions+=5;goto B75cfde;
case 0x75cfe0:c.instructions+=4;goto B75cfe0;
case 0x75cfe2:c.instructions+=3;goto B75cfe2;
case 0x75cfe4:c.instructions+=2;goto B75cfe4;
case 0x75cfe6:c.instructions+=1;goto B75cfe6;
case 0x75cfe8:goto L75cfe8;
case 0x75cfea:c.instructions+=1;goto B75cfea;
case 0x75cff0:goto L75cff0;
case 0x75cff6:c.instructions+=1;goto B75cff6;
case 0x75cff8:goto L75cff8;
case 0x75cffb:c.instructions+=2;goto B75cffb;
case 0x75cffe:c.instructions+=1;goto B75cffe;
default:missing_instruction(c.pc);}
B75c000:L75c000:{c.instructions+=5;NFSU2_TR(0x75c000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75c001:{NFSU2_TR(0x75c001);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c004:{NFSU2_TR(0x75c004);
__builtin_memmove((R+16),(R+20),4);
}
B75c006:{NFSU2_TR(0x75c006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75c007:{NFSU2_TR(0x75c007);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c008:L75c008:{c.instructions+=11;NFSU2_TR(0x75c008);
w1(R+522,u8(0x0ull));
}
B75c009:{NFSU2_TR(0x75c009);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c00d:{NFSU2_TR(0x75c00d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c00f:{NFSU2_TR(0x75c00f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c010:{NFSU2_TR(0x75c010);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c013:{NFSU2_TR(0x75c013);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c016:{NFSU2_TR(0x75c016);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c018:{NFSU2_TR(0x75c018);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c01c:{NFSU2_TR(0x75c01c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c01f:{NFSU2_TR(0x75c01f);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c023:{NFSU2_TR(0x75c023);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c028ull));
TAIL_STATIC(0x762d49u,762);
}
B75c028:L75c028:{c.instructions+=2;NFSU2_TR(0x75c028);
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
B75c02b:{NFSU2_TR(0x75c02b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c02c:L75c02c:{c.instructions+=9;NFSU2_TR(0x75c02c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c02d:{NFSU2_TR(0x75c02d);
__builtin_memmove((R+20),(R+16),4);
}
B75c02f:{NFSU2_TR(0x75c02f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c030:{NFSU2_TR(0x75c030);
w1(R+522,u8(0x0ull));
}
B75c031:{NFSU2_TR(0x75c031);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c034:{NFSU2_TR(0x75c034);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c037:{NFSU2_TR(0x75c037);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x66ull))));
}
B75c03a:{NFSU2_TR(0x75c03a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75c03c:{NFSU2_TR(0x75c03c);
if(r1(R+518)){{goto L75c04d;}}
}
B75c03e:L75c03e:{c.instructions+=5;NFSU2_TR(0x75c03e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c041:{NFSU2_TR(0x75c041);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75c048:{NFSU2_TR(0x75c048);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75c04a:{NFSU2_TR(0x75c04a);
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
B75c04b:{NFSU2_TR(0x75c04b);
{goto L75c09a;}
}
B75c04d:L75c04d:{c.instructions+=13;NFSU2_TR(0x75c04d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c04f:{NFSU2_TR(0x75c04f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c052:{NFSU2_TR(0x75c052);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c055:{NFSU2_TR(0x75c055);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c058:{NFSU2_TR(0x75c058);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c05b:{NFSU2_TR(0x75c05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c05e:{NFSU2_TR(0x75c05e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c061:{NFSU2_TR(0x75c061);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c063:{NFSU2_TR(0x75c063);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c066:{NFSU2_TR(0x75c066);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c069:{NFSU2_TR(0x75c069);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c06c:{NFSU2_TR(0x75c06c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c06f:{NFSU2_TR(0x75c06f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c074ull));
TAIL_STATIC(0x762d49u,762);
}
B75c074:L75c074:{c.instructions+=4;NFSU2_TR(0x75c074);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B75c077:{NFSU2_TR(0x75c077);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c07a:{NFSU2_TR(0x75c07a);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75c07e:{NFSU2_TR(0x75c07e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c08b;}}
}
B75c080:L75c080:{c.instructions+=3;NFSU2_TR(0x75c080);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c083:{NFSU2_TR(0x75c083);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c086:{NFSU2_TR(0x75c086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c08bull));
TAIL_STATIC(0x75bf80u,75b);
}
B75c08b:L75c08b:{c.instructions+=4;NFSU2_TR(0x75c08b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75c08e:{NFSU2_TR(0x75c08e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B75c091:{NFSU2_TR(0x75c091);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75c094:{NFSU2_TR(0x75c094);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B75c09a:L75c09a:{c.instructions+=3;NFSU2_TR(0x75c09a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75c09b:{NFSU2_TR(0x75c09b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75c09c:{NFSU2_TR(0x75c09c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c09d:L75c09d:{c.instructions+=14;NFSU2_TR(0x75c09d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c09e:{NFSU2_TR(0x75c09e);
__builtin_memmove((R+20),(R+16),4);
}
B75c0a0:{NFSU2_TR(0x75c0a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c0a1:{NFSU2_TR(0x75c0a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B75c0a5:{NFSU2_TR(0x75c0a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c0a6:{NFSU2_TR(0x75c0a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c0a7:{NFSU2_TR(0x75c0a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c0a8:{NFSU2_TR(0x75c0a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75c0ab:{NFSU2_TR(0x75c0ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75c0ae:{NFSU2_TR(0x75c0ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75c0b1:{NFSU2_TR(0x75c0b1);
__builtin_memmove((R+0),(R+24),4);
}
B75c0b3:{NFSU2_TR(0x75c0b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c0b6:{NFSU2_TR(0x75c0b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c0b9:{NFSU2_TR(0x75c0b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75c0f3;}}
}
B75c0bb:L75c0bb:{c.instructions+=2;NFSU2_TR(0x75c0bb);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75c0be:{NFSU2_TR(0x75c0be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c0c5;}}
}
B75c0c0:L75c0c0:{c.instructions+=1;NFSU2_TR(0x75c0c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c0c5ull));
TAIL_STATIC(0x762e20u,762);
}
B75c0c5:L75c0c5:{c.instructions+=6;NFSU2_TR(0x75c0c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75c0c8:{NFSU2_TR(0x75c0c8);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B75c0c9:{NFSU2_TR(0x75c0c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75c0cc:{NFSU2_TR(0x75c0cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75c0cf:{NFSU2_TR(0x75c0cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B75c0d2:{NFSU2_TR(0x75c0d2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75c0d9;}}
}
B75c0d4:L75c0d4:{c.instructions+=2;NFSU2_TR(0x75c0d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75c0d7:{NFSU2_TR(0x75c0d7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75c0de;}}
}
B75c0d9:L75c0d9:{c.instructions+=2;NFSU2_TR(0x75c0d9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75c0dc:{NFSU2_TR(0x75c0dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c0ea;}}
}
B75c0de:L75c0de:{c.instructions+=4;NFSU2_TR(0x75c0de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c0e1:{NFSU2_TR(0x75c0e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75c0e4:{NFSU2_TR(0x75c0e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c0e7:{NFSU2_TR(0x75c0e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c0ea:L75c0ea:{c.instructions+=2;NFSU2_TR(0x75c0ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B75c0ee:{NFSU2_TR(0x75c0ee);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c0bbu);}goto L75c0bb;}}
}
B75c0f0:L75c0f0:{c.instructions+=1;NFSU2_TR(0x75c0f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c0f3:L75c0f3:{c.instructions+=7;NFSU2_TR(0x75c0f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75c0f6:{NFSU2_TR(0x75c0f6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75c0f7:{NFSU2_TR(0x75c0f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B75c0f9:{NFSU2_TR(0x75c0f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75c0fc:{NFSU2_TR(0x75c0fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B75c0fe:{NFSU2_TR(0x75c0fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75c101:{NFSU2_TR(0x75c101);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L75c107;}}
}
B75c103:L75c103:{c.instructions+=2;NFSU2_TR(0x75c103);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B75c105:{NFSU2_TR(0x75c105);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75c10c;}}
}
B75c107:L75c107:{c.instructions+=1;NFSU2_TR(0x75c107);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c10cull));
TAIL_STATIC(0x762e20u,762);
}
B75c10c:L75c10c:{c.instructions+=7;NFSU2_TR(0x75c10c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75c10d:{NFSU2_TR(0x75c10d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75c110:{NFSU2_TR(0x75c110);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75c111:{NFSU2_TR(0x75c111);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75c114:{NFSU2_TR(0x75c114);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75c115:{NFSU2_TR(0x75c115);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75c116:{NFSU2_TR(0x75c116);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c117:L75c117:{c.instructions+=5;NFSU2_TR(0x75c117);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c11b:{NFSU2_TR(0x75c11b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c11c:{NFSU2_TR(0x75c11c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75c120:{NFSU2_TR(0x75c120);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B75c122:{NFSU2_TR(0x75c122);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c127ull));
TAIL_STATIC(0x761e3cu,761);
}
B75c127:L75c127:{c.instructions+=3;NFSU2_TR(0x75c127);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c12d:{NFSU2_TR(0x75c12d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c130:{NFSU2_TR(0x75c130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c135ull));
TAIL_STATIC(0x761e3cu,761);
}
B75c135:L75c135:{c.instructions+=4;NFSU2_TR(0x75c135);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c13b:{NFSU2_TR(0x75c13b);
__builtin_memmove((R+0),(R+24),4);
}
B75c13d:{NFSU2_TR(0x75c13d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75c13e:{NFSU2_TR(0x75c13e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c13f:L75c13f:{c.instructions+=1;NFSU2_TR(0x75c13f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c144ull));
TAIL_STATIC(0x761e3cu,761);
}
B75c144:L75c144:{c.instructions+=2;NFSU2_TR(0x75c144);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c14a:{NFSU2_TR(0x75c14a);
{goto L75c157;}
}
B75c14c:L75c14c:{c.instructions+=3;NFSU2_TR(0x75c14c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B75c14e:{NFSU2_TR(0x75c14e);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75c152:{NFSU2_TR(0x75c152);
if(r1(R+518)){{goto L75c15d;}}
}
B75c154:L75c154:{c.instructions+=1;NFSU2_TR(0x75c154);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c157:L75c157:{c.instructions+=2;NFSU2_TR(0x75c157);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75c159:{NFSU2_TR(0x75c159);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c14cu);}goto L75c14c;}}
}
B75c15b:L75c15b:{c.instructions+=2;NFSU2_TR(0x75c15b);
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
B75c15c:{NFSU2_TR(0x75c15c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c15d:L75c15d:{c.instructions+=2;NFSU2_TR(0x75c15d);
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
B75c15f:{NFSU2_TR(0x75c15f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c160:L75c160:{c.instructions+=2;NFSU2_TR(0x75c160);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c161:{NFSU2_TR(0x75c161);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c166ull));
TAIL_STATIC(0x761e3cu,761);
}
B75c166:L75c166:{c.instructions+=3;NFSU2_TR(0x75c166);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75c16a:{NFSU2_TR(0x75c16a);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
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
B75c170:{NFSU2_TR(0x75c170);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c182;}}
}
B75c172:L75c172:{c.instructions+=1;NFSU2_TR(0x75c172);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c177ull));
TAIL_STATIC(0x761e3cu,761);
}
B75c177:L75c177:{c.instructions+=4;NFSU2_TR(0x75c177);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75c17a:{NFSU2_TR(0x75c17a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c180:{NFSU2_TR(0x75c180);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75c181:{NFSU2_TR(0x75c181);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c182:L75c182:{c.instructions+=1;NFSU2_TR(0x75c182);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c187ull));
TAIL_STATIC(0x761e3cu,761);
}
B75c187:L75c187:{c.instructions+=2;NFSU2_TR(0x75c187);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c18d:{NFSU2_TR(0x75c18d);
{goto L75c198;}
}
B75c18f:L75c18f:{c.instructions+=3;NFSU2_TR(0x75c18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75c192:{NFSU2_TR(0x75c192);
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
B75c194:{NFSU2_TR(0x75c194);
if(r1(R+518)){{goto L75c1a4;}}
}
B75c196:L75c196:{c.instructions+=1;NFSU2_TR(0x75c196);
__builtin_memmove((R+0),(R+4),4);
}
B75c198:L75c198:{c.instructions+=2;NFSU2_TR(0x75c198);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75c19c:{NFSU2_TR(0x75c19c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c18fu);}goto L75c18f;}}
}
B75c19e:L75c19e:{c.instructions+=2;NFSU2_TR(0x75c19e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75c19f:{NFSU2_TR(0x75c19f);
TAIL_STATIC(0x762e20u,762);
}
B75c1a4:L75c1a4:{c.instructions+=4;NFSU2_TR(0x75c1a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75c1a7:{NFSU2_TR(0x75c1a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c1aa:{NFSU2_TR(0x75c1aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75c1ab:{NFSU2_TR(0x75c1ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c1ac:L75c1ac:{c.instructions+=20;NFSU2_TR(0x75c1ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c1ad:{NFSU2_TR(0x75c1ad);
__builtin_memmove((R+20),(R+16),4);
}
B75c1af:{NFSU2_TR(0x75c1af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B75c1b2:{NFSU2_TR(0x75c1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c1b5:{NFSU2_TR(0x75c1b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75c1b9:{NFSU2_TR(0x75c1b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75c1bc:{NFSU2_TR(0x75c1bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c1bf:{NFSU2_TR(0x75c1bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c1c2:{NFSU2_TR(0x75c1c2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75c1c3:{NFSU2_TR(0x75c1c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x75c008ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75c1ca:{NFSU2_TR(0x75c1ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c1cd:{NFSU2_TR(0x75c1cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c1d0:{NFSU2_TR(0x75c1d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c1d6:{NFSU2_TR(0x75c1d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c1d9:{NFSU2_TR(0x75c1d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B75c1dc:{NFSU2_TR(0x75c1dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c1e2:{NFSU2_TR(0x75c1e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c1e5:{NFSU2_TR(0x75c1e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c1e6:{NFSU2_TR(0x75c1e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c1e9:{NFSU2_TR(0x75c1e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c1eeull));
TAIL_STATIC(0x762e50u,762);
}
B75c1ee:L75c1ee:{c.instructions+=6;NFSU2_TR(0x75c1ee);
__builtin_memmove((R+4),(R+0),4);
}
B75c1f0:{NFSU2_TR(0x75c1f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c1f3:{NFSU2_TR(0x75c1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c1f9:{NFSU2_TR(0x75c1f9);
__builtin_memmove((R+0),(R+4),4);
}
B75c1fb:{NFSU2_TR(0x75c1fb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75c1fc:{NFSU2_TR(0x75c1fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c1fd:L75c1fd:{c.instructions+=35;NFSU2_TR(0x75c1fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c1fe:{NFSU2_TR(0x75c1fe);
__builtin_memmove((R+20),(R+16),4);
}
B75c200:{NFSU2_TR(0x75c200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B75c203:{NFSU2_TR(0x75c203);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c204:{NFSU2_TR(0x75c204);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75c208:{NFSU2_TR(0x75c208);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x75c02cull));
s4(u32(r4(U+0)),r4(U+4));
}
B75c20f:{NFSU2_TR(0x75c20f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c212:{NFSU2_TR(0x75c212);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c215:{NFSU2_TR(0x75c215);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c218:{NFSU2_TR(0x75c218);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c21b:{NFSU2_TR(0x75c21b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c21e:{NFSU2_TR(0x75c21e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c221:{NFSU2_TR(0x75c221);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c224:{NFSU2_TR(0x75c224);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c227:{NFSU2_TR(0x75c227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75c22b:{NFSU2_TR(0x75c22b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75c22f:{NFSU2_TR(0x75c22f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75c233:{NFSU2_TR(0x75c233);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B75c237:{NFSU2_TR(0x75c237);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x75c280ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75c23e:{NFSU2_TR(0x75c23e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c241:{NFSU2_TR(0x75c241);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c244:{NFSU2_TR(0x75c244);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c24a:{NFSU2_TR(0x75c24a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c24d:{NFSU2_TR(0x75c24d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75c250:{NFSU2_TR(0x75c250);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c256:{NFSU2_TR(0x75c256);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75c25d:{NFSU2_TR(0x75c25d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c260:{NFSU2_TR(0x75c260);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c263:{NFSU2_TR(0x75c263);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c266:{NFSU2_TR(0x75c266);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c269:{NFSU2_TR(0x75c269);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75c26c:{NFSU2_TR(0x75c26c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c26d:{NFSU2_TR(0x75c26d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c270:{NFSU2_TR(0x75c270);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B75c272:{NFSU2_TR(0x75c272);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c277ull));
TAIL_STATIC(0x761e3cu,761);
}
B75c277:L75c277:{c.instructions+=1;NFSU2_TR(0x75c277);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c27aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75c27a:L75c27a:{c.instructions+=5;NFSU2_TR(0x75c27a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c27b:{NFSU2_TR(0x75c27b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c27c:{NFSU2_TR(0x75c27c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75c280:{NFSU2_TR(0x75c280);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75c284:{NFSU2_TR(0x75c284);
if(r1(R+518)){{goto L75c29d;}}
}
B75c286:L75c286:{c.instructions+=6;NFSU2_TR(0x75c286);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75c28d:{NFSU2_TR(0x75c28d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75c28f:{NFSU2_TR(0x75c28f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75c292:{NFSU2_TR(0x75c292);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B75c294:{NFSU2_TR(0x75c294);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c29b:{NFSU2_TR(0x75c29b);
{goto L75c2a6;}
}
B75c29d:L75c29d:{c.instructions+=2;NFSU2_TR(0x75c29d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c2a0:{NFSU2_TR(0x75c2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c2a6:L75c2a6:{c.instructions+=4;NFSU2_TR(0x75c2a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c2a9:{NFSU2_TR(0x75c2a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75c2aa:{NFSU2_TR(0x75c2aa);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75c2ab:{NFSU2_TR(0x75c2ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c2ac:L75c2ac:{c.instructions+=11;NFSU2_TR(0x75c2ac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c2ad:{NFSU2_TR(0x75c2ad);
__builtin_memmove((R+20),(R+16),4);
}
B75c2af:{NFSU2_TR(0x75c2af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c2b0:{NFSU2_TR(0x75c2b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c2b1:{NFSU2_TR(0x75c2b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c2b2:{NFSU2_TR(0x75c2b2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c2b3:{NFSU2_TR(0x75c2b3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c2b5:{NFSU2_TR(0x75c2b5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c2b7:{NFSU2_TR(0x75c2b7);
u8 U[4];
w4(U+0,u32(0x75c2c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c2bc:{NFSU2_TR(0x75c2bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c2bf:{NFSU2_TR(0x75c2bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c2c4ull));
TAIL_STATIC(0x76ea02u,76e);
}
B75c2c4:L75c2c4:{c.instructions+=7;NFSU2_TR(0x75c2c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75c2c5:{NFSU2_TR(0x75c2c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75c2c6:{NFSU2_TR(0x75c2c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75c2c7:{NFSU2_TR(0x75c2c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75c2c8:{NFSU2_TR(0x75c2c8);
__builtin_memmove((R+16),(R+20),4);
}
B75c2ca:{NFSU2_TR(0x75c2ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75c2cb:{NFSU2_TR(0x75c2cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c2cc:L75c2cc:{c.instructions+=4;NFSU2_TR(0x75c2cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75c2d0:{NFSU2_TR(0x75c2d0);
u8 U[18];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75c2d7:{NFSU2_TR(0x75c2d7);
w4(R+0,u32(0x1ull));
}
B75c2dc:{NFSU2_TR(0x75c2dc);
if(r1(R+518)){{goto L75c2ed;}}
}
B75c2de:L75c2de:{c.instructions+=4;NFSU2_TR(0x75c2de);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c2e2:{NFSU2_TR(0x75c2e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75c2e6:{NFSU2_TR(0x75c2e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B75c2e8:{NFSU2_TR(0x75c2e8);
w4(R+0,u32(0x3ull));
}
B75c2ed:L75c2ed:{c.instructions+=1;NFSU2_TR(0x75c2ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c2ee:L75c2ee:{c.instructions+=9;NFSU2_TR(0x75c2ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c2ef:{NFSU2_TR(0x75c2ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c2f0:{NFSU2_TR(0x75c2f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c2f1:{NFSU2_TR(0x75c2f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c2f5:{NFSU2_TR(0x75c2f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c2f6:{NFSU2_TR(0x75c2f6);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c2f8:{NFSU2_TR(0x75c2f8);
u8 U[4];
w4(U+0,u32(0x75c2ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c2fd:{NFSU2_TR(0x75c2fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c304:{NFSU2_TR(0x75c304);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c30b:L75c30b:{c.instructions+=5;NFSU2_TR(0x75c30b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c30f:{NFSU2_TR(0x75c30f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75c312:{NFSU2_TR(0x75c312);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75c315:{NFSU2_TR(0x75c315);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75c318:{NFSU2_TR(0x75c318);
if(r1(R+518)){{goto L75c348;}}
}
B75c31a:L75c31a:{c.instructions+=2;NFSU2_TR(0x75c31a);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75c31e:{NFSU2_TR(0x75c31e);
if(r1(R+518)){{goto L75c348;}}
}
B75c320:L75c320:{c.instructions+=6;NFSU2_TR(0x75c320);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B75c323:{NFSU2_TR(0x75c323);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B75c326:{NFSU2_TR(0x75c326);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c32a:{NFSU2_TR(0x75c32a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c32d:{NFSU2_TR(0x75c32d);
u8 U[30];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(U+22))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+22),u32(0x0ull)));
w4(U+26,u32(u32(r4(U+22))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B75c332:{NFSU2_TR(0x75c332);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c346;}}
}
B75c334:L75c334:{c.instructions+=3;NFSU2_TR(0x75c334);
u8 U[4];
w4(U+0,u32(0x101ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c339:{NFSU2_TR(0x75c339);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75c33d:{NFSU2_TR(0x75c33d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c342ull));
{goto L75c382;}
}
B75c342:L75c342:{c.instructions+=1;NFSU2_TR(0x75c342);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c346ull));
{u32 t_=u32(r4(U+16));TAIL_DYNAMIC(t_);}
}
B75c346:L75c346:{c.instructions+=1;NFSU2_TR(0x75c346);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c30bu);}goto L75c30b;}
}
B75c348:L75c348:{c.instructions+=6;NFSU2_TR(0x75c348);
u8 U[12];
__builtin_memmove((U+8),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(U+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c34f:{NFSU2_TR(0x75c34f);
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
B75c352:{NFSU2_TR(0x75c352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75c353:{NFSU2_TR(0x75c353);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75c354:{NFSU2_TR(0x75c354);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75c355:{NFSU2_TR(0x75c355);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c356:L75c356:{c.instructions+=4;NFSU2_TR(0x75c356);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75c358:{NFSU2_TR(0x75c358);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75c35f:{NFSU2_TR(0x75c35f);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x75c2ccull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x75c2ccull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x75c2ccull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75c366:{NFSU2_TR(0x75c366);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c378;}}
}
B75c368:L75c368:{c.instructions+=4;NFSU2_TR(0x75c368);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75c36b:{NFSU2_TR(0x75c36b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75c36e:{NFSU2_TR(0x75c36e);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
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
B75c371:{NFSU2_TR(0x75c371);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c378;}}
}
B75c373:L75c373:{c.instructions+=1;NFSU2_TR(0x75c373);
w4(R+0,u32(0x1ull));
}
B75c378:L75c378:{c.instructions+=1;NFSU2_TR(0x75c378);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c379:L75c379:{c.instructions+=4;NFSU2_TR(0x75c379);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c37a:{NFSU2_TR(0x75c37a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c37b:{NFSU2_TR(0x75c37b);
w4(R+12,u32(0x819c70ull));
}
B75c380:{NFSU2_TR(0x75c380);
{goto L75c38c;}
}
B75c382:L75c382:{c.instructions+=4;NFSU2_TR(0x75c382);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c383:{NFSU2_TR(0x75c383);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c384:{NFSU2_TR(0x75c384);
w4(R+12,u32(0x819c70ull));
}
B75c389:{NFSU2_TR(0x75c389);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75c38c:L75c38c:{c.instructions+=6;NFSU2_TR(0x75c38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c38f:{NFSU2_TR(0x75c38f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c392:{NFSU2_TR(0x75c392);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c395:{NFSU2_TR(0x75c395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c396:{NFSU2_TR(0x75c396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75c397:{NFSU2_TR(0x75c397);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c39a:L75c39a:{c.instructions+=2;NFSU2_TR(0x75c39a);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c39c:{NFSU2_TR(0x75c39c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c3a1ull));
TAIL_STATIC(0x75bc7eu,75b);
}
B75c3a1:L75c3a1:{c.instructions+=2;NFSU2_TR(0x75c3a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c3a2:{NFSU2_TR(0x75c3a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c3a3:L75c3a3:{c.instructions+=3;NFSU2_TR(0x75c3a3);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c3a5:{NFSU2_TR(0x75c3a5);
u8 U[4];
w4(U+0,u32(0x7d39a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c3aa:{NFSU2_TR(0x75c3aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c3afull));
TAIL_STATIC(0x760da0u,760);
}
B75c3af:L75c3af:{c.instructions+=1;NFSU2_TR(0x75c3af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75c3b3:L75c3b3:{c.instructions+=2;NFSU2_TR(0x75c3b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75c3b6:{NFSU2_TR(0x75c3b6);
if(r1(R+519)){{goto L75c3c6;}}
}
B75c3b8:L75c3b8:{c.instructions+=4;NFSU2_TR(0x75c3b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75c3bb:{NFSU2_TR(0x75c3bb);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+4))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75c3be:{NFSU2_TR(0x75c3be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c3c1:{NFSU2_TR(0x75c3c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c3c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75c3c4:L75c3c4:{c.instructions+=1;NFSU2_TR(0x75c3c4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c3b3u);}goto L75c3b3;}
}
B75c3c6:L75c3c6:{c.instructions+=2;NFSU2_TR(0x75c3c6);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B75c3ca:{NFSU2_TR(0x75c3ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c3cfull));
TAIL_STATIC(0x760ddbu,760);
}
B75c3cf:L75c3cf:{c.instructions+=1;NFSU2_TR(0x75c3cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c3d2:L75c3d2:{c.instructions+=8;NFSU2_TR(0x75c3d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c3d5:{NFSU2_TR(0x75c3d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c3d8:{NFSU2_TR(0x75c3d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c3db:{NFSU2_TR(0x75c3db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75c3dd:{NFSU2_TR(0x75c3dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c3e0:{NFSU2_TR(0x75c3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c3e3:{NFSU2_TR(0x75c3e3);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0xe06d7363ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0xe06d7363ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0xe06d7363ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B75c3e9:{NFSU2_TR(0x75c3e9);
if(r1(R+518)){{goto L75c3fb;}}
}
B75c3eb:L75c3eb:{c.instructions+=3;NFSU2_TR(0x75c3eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75c3f2:{NFSU2_TR(0x75c3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c3f5:{NFSU2_TR(0x75c3f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c3f6:L75c3f6:{c.instructions+=2;NFSU2_TR(0x75c3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B75c3f9:{NFSU2_TR(0x75c3f9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c3c6u);}goto L75c3c6;}
}
B75c3fb:L75c3fb:{c.instructions+=1;NFSU2_TR(0x75c3fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c400ull));
TAIL_STATIC(0x762debu,762);
}
B75c400:L75c400:{c.instructions+=1;NFSU2_TR(0x75c400);
u8 U[4];
{SPILL();c.pc=0x75c400u;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B75c401:L75c401:{c.instructions+=3;NFSU2_TR(0x75c401);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c403:{NFSU2_TR(0x75c403);
u8 U[4];
w4(U+0,u32(0x7d39b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c408:{NFSU2_TR(0x75c408);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c40dull));
TAIL_STATIC(0x760da0u,760);
}
B75c40d:L75c40d:{c.instructions+=6;NFSU2_TR(0x75c40d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75c411:{NFSU2_TR(0x75c411);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75c414:{NFSU2_TR(0x75c414);
__builtin_memmove((R+0),(R+24),4);
}
B75c416:{NFSU2_TR(0x75c416);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B75c41a:{NFSU2_TR(0x75c41a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B75c41d:{NFSU2_TR(0x75c41d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75c421:L75c421:{c.instructions+=2;NFSU2_TR(0x75c421);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75c424:{NFSU2_TR(0x75c424);
if(r1(R+519)){{goto L75c431;}}
}
B75c426:L75c426:{c.instructions+=3;NFSU2_TR(0x75c426);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(U+4))<(r4(R+24))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),r4(R+24)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+24))));
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
B75c429:{NFSU2_TR(0x75c429);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75c42c:{NFSU2_TR(0x75c42c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c42full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75c42f:L75c42f:{c.instructions+=1;NFSU2_TR(0x75c42f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c421u);}goto L75c421;}
}
B75c431:L75c431:{c.instructions+=3;NFSU2_TR(0x75c431);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75c438:{NFSU2_TR(0x75c438);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75c43c:{NFSU2_TR(0x75c43c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c441ull));
{goto L75c449;}
}
B75c441:L75c441:{c.instructions+=1;NFSU2_TR(0x75c441);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c446ull));
TAIL_STATIC(0x760ddbu,760);
}
B75c446:L75c446:{c.instructions+=1;NFSU2_TR(0x75c446);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c449:L75c449:{c.instructions+=2;NFSU2_TR(0x75c449);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75c44d:{NFSU2_TR(0x75c44d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c460;}}
}
B75c44f:L75c44f:{c.instructions+=5;NFSU2_TR(0x75c44f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c452:{NFSU2_TR(0x75c452);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c455:{NFSU2_TR(0x75c455);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c458:{NFSU2_TR(0x75c458);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c45b:{NFSU2_TR(0x75c45b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c460ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c3a3u);}goto L75c3a3;}
}
B75c460:L75c460:{c.instructions+=1;NFSU2_TR(0x75c460);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c461:L75c461:{c.instructions+=3;NFSU2_TR(0x75c461);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c463:{NFSU2_TR(0x75c463);
u8 U[4];
w4(U+0,u32(0x7d39c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c468:{NFSU2_TR(0x75c468);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c46dull));
TAIL_STATIC(0x760da0u,760);
}
B75c46d:L75c46d:{c.instructions+=4;NFSU2_TR(0x75c46d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75c46f:{NFSU2_TR(0x75c46f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c472:{NFSU2_TR(0x75c472);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c475:{NFSU2_TR(0x75c475);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c478:L75c478:{c.instructions+=3;NFSU2_TR(0x75c478);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c47b:{NFSU2_TR(0x75c47b);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B75c47e:{NFSU2_TR(0x75c47e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75c493;}}
}
B75c480:L75c480:{c.instructions+=3;NFSU2_TR(0x75c480);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75c483:{NFSU2_TR(0x75c483);
__builtin_memmove((R+4),(R+24),4);
}
B75c485:{NFSU2_TR(0x75c485);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c488ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75c488:L75c488:{c.instructions+=4;NFSU2_TR(0x75c488);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B75c48b:{NFSU2_TR(0x75c48b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c48e:{NFSU2_TR(0x75c48e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75c491:{NFSU2_TR(0x75c491);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c478u);}goto L75c478;}
}
B75c493:L75c493:{c.instructions+=3;NFSU2_TR(0x75c493);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75c49a:{NFSU2_TR(0x75c49a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75c49e:{NFSU2_TR(0x75c49e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c4a3ull));
{goto L75c4ab;}
}
B75c4a3:L75c4a3:{c.instructions+=1;NFSU2_TR(0x75c4a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c4a8ull));
TAIL_STATIC(0x760ddbu,760);
}
B75c4a8:L75c4a8:{c.instructions+=1;NFSU2_TR(0x75c4a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c4ab:L75c4ab:{c.instructions+=2;NFSU2_TR(0x75c4ab);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75c4af:{NFSU2_TR(0x75c4af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c4c2;}}
}
B75c4b1:L75c4b1:{c.instructions+=5;NFSU2_TR(0x75c4b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c4b4:{NFSU2_TR(0x75c4b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c4b7:{NFSU2_TR(0x75c4b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c4ba:{NFSU2_TR(0x75c4ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c4bd:{NFSU2_TR(0x75c4bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c4c2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c3a3u);}goto L75c3a3;}
}
B75c4c2:L75c4c2:{c.instructions+=1;NFSU2_TR(0x75c4c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c4d0:L75c4d0:{c.instructions+=2;NFSU2_TR(0x75c4d0);
w1(R+512,u8((r4(R+0))<(u32(0x1000ull))));
}
B75c4d5:{NFSU2_TR(0x75c4d5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75c4e5;}}
}
B75c4d7:L75c4d7:{c.instructions+=8;NFSU2_TR(0x75c4d7);
w4(R+0,u32(0-u32(r4(R+0))));
}
B75c4d9:{NFSU2_TR(0x75c4d9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+16))));
}
B75c4db:{NFSU2_TR(0x75c4db);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B75c4de:{NFSU2_TR(0x75c4de);
u8 U[14];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+10,u32(u32(r4(U+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B75c4e0:{NFSU2_TR(0x75c4e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
__builtin_memmove((R+0),(R+16),4);
__builtin_memmove((R+16),(U+0),4);
}
B75c4e1:{NFSU2_TR(0x75c4e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75c4e3:{NFSU2_TR(0x75c4e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c4e4:{NFSU2_TR(0x75c4e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c4e5:L75c4e5:{c.instructions+=2;NFSU2_TR(0x75c4e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c4e6:{NFSU2_TR(0x75c4e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B75c4ea:L75c4ea:{c.instructions+=5;NFSU2_TR(0x75c4ea);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1000ull))));
}
B75c4f0:{NFSU2_TR(0x75c4f0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1000ull))));
}
B75c4f5:{NFSU2_TR(0x75c4f5);
}
B75c4f7:{NFSU2_TR(0x75c4f7);
w1(R+512,u8((r4(R+0))<(u32(0x1000ull))));
}
B75c4fc:{NFSU2_TR(0x75c4fc);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c4eau);}goto L75c4ea;}}
}
B75c4fe:L75c4fe:{c.instructions+=8;NFSU2_TR(0x75c4fe);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B75c500:{NFSU2_TR(0x75c500);
__builtin_memmove((R+0),(R+16),4);
}
B75c502:{NFSU2_TR(0x75c502);
u8 U[14];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+10,u32(u32(r4(U+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B75c504:{NFSU2_TR(0x75c504);
__builtin_memmove((R+16),(R+4),4);
}
B75c506:{NFSU2_TR(0x75c506);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B75c508:{NFSU2_TR(0x75c508);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c50b:{NFSU2_TR(0x75c50b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c50c:{NFSU2_TR(0x75c50c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c50d:L75c50d:{c.instructions+=3;NFSU2_TR(0x75c50d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c50e:{NFSU2_TR(0x75c50e);
u8 U[4];
__builtin_memmove((U+0),gp(0x8bb5ec),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c514:{NFSU2_TR(0x75c514);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c519ull));
TAIL_STATIC(0x763049u,763);
}
B75c519:L75c519:{c.instructions+=9;NFSU2_TR(0x75c519);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c51a:{NFSU2_TR(0x75c51a);
__builtin_memmove((R+4),gp(0x8bb5e8),4);
}
B75c520:{NFSU2_TR(0x75c520);
__builtin_memmove((R+24),(R+0),4);
}
B75c522:{NFSU2_TR(0x75c522);
__builtin_memmove((R+0),gp(0x8bb5ec),4);
}
B75c527:{NFSU2_TR(0x75c527);
__builtin_memmove((R+8),(R+4),4);
}
B75c529:{NFSU2_TR(0x75c529);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B75c52b:{NFSU2_TR(0x75c52b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B75c52e:{NFSU2_TR(0x75c52e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B75c530:{NFSU2_TR(0x75c530);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75c580;}}
}
B75c532:L75c532:{c.instructions+=3;NFSU2_TR(0x75c532);
w4(R+4,u32(0x800ull));
}
B75c537:{NFSU2_TR(0x75c537);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B75c539:{NFSU2_TR(0x75c539);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75c53d;}}
}
B75c53b:L75c53b:{c.instructions+=1;NFSU2_TR(0x75c53b);
__builtin_memmove((R+4),(R+24),4);
}
B75c53d:L75c53d:{c.instructions+=4;NFSU2_TR(0x75c53d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B75c53f:{NFSU2_TR(0x75c53f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c540:{NFSU2_TR(0x75c540);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c541:{NFSU2_TR(0x75c541);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c546ull));
TAIL_STATIC(0x762e9cu,762);
}
B75c546:L75c546:{c.instructions+=4;NFSU2_TR(0x75c546);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75c548:{NFSU2_TR(0x75c548);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c549:{NFSU2_TR(0x75c549);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c54a:{NFSU2_TR(0x75c54a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c563;}}
}
B75c54c:L75c54c:{c.instructions+=4;NFSU2_TR(0x75c54c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B75c54f:{NFSU2_TR(0x75c54f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c550:{NFSU2_TR(0x75c550);
u8 U[4];
__builtin_memmove((U+0),gp(0x8bb5ec),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c556:{NFSU2_TR(0x75c556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c55bull));
TAIL_STATIC(0x762e9cu,762);
}
B75c55b:L75c55b:{c.instructions+=4;NFSU2_TR(0x75c55b);
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
B75c55d:{NFSU2_TR(0x75c55d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c55e:{NFSU2_TR(0x75c55e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c55f:{NFSU2_TR(0x75c55f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c563;}}
}
B75c561:L75c561:{c.instructions+=2;NFSU2_TR(0x75c561);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75c562:{NFSU2_TR(0x75c562);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c563:L75c563:{c.instructions+=6;NFSU2_TR(0x75c563);
__builtin_memmove((R+4),gp(0x8bb5e8),4);
}
B75c569:{NFSU2_TR(0x75c569);
w4(R+4,u32(u32(r4(R+4))-u32(m4(0x8bb5ec))));
}
B75c56f:{NFSU2_TR(0x75c56f);
__builtin_memmove(gp(0x8bb5ec),(R+0),4);
}
B75c574:{NFSU2_TR(0x75c574);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B75c577:{NFSU2_TR(0x75c577);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B75c57a:{NFSU2_TR(0x75c57a);
__builtin_memmove(gp(0x8bb5e8),(R+4),4);
}
B75c580:L75c580:{c.instructions+=5;NFSU2_TR(0x75c580);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B75c582:{NFSU2_TR(0x75c582);
u8 U[6];
w1(R+512,carry<u32>(m4(0x8bb5e8),u32(0x4ull)));
w1(R+523,scarry<u32>(m4(0x8bb5e8),u32(0x4ull)));
s4(0x8bb5e8,u32(u32(m4(0x8bb5e8))+u32(u32(0x4ull))));
w1(R+519,u8(s32(m4(0x8bb5e8))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8bb5e8))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8bb5e8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75c589:{NFSU2_TR(0x75c589);
__builtin_memmove((R+0),(R+28),4);
}
B75c58b:{NFSU2_TR(0x75c58b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75c58c:{NFSU2_TR(0x75c58c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c58d:L75c58d:{c.instructions+=2;NFSU2_TR(0x75c58d);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c592:{NFSU2_TR(0x75c592);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c597ull));
{goto L75c6c8;}
}
B75c597:L75c597:{c.instructions+=4;NFSU2_TR(0x75c597);
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
B75c599:{NFSU2_TR(0x75c599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c59a:{NFSU2_TR(0x75c59a);
__builtin_memmove(gp(0x8bb5ec),(R+0),4);
}
B75c59f:{NFSU2_TR(0x75c59f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c5a5;}}
}
B75c5a1:L75c5a1:{c.instructions+=3;NFSU2_TR(0x75c5a1);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c5a3:{NFSU2_TR(0x75c5a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75c5a4:{NFSU2_TR(0x75c5a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c5a5:L75c5a5:{c.instructions+=5;NFSU2_TR(0x75c5a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B75c5a8:{NFSU2_TR(0x75c5a8);
__builtin_memmove((R+0),gp(0x8bb5ec),4);
}
B75c5ad:{NFSU2_TR(0x75c5ad);
__builtin_memmove(gp(0x8bb5e8),(R+0),4);
}
B75c5b2:{NFSU2_TR(0x75c5b2);
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
B75c5b4:{NFSU2_TR(0x75c5b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c5b5:L75c5b5:{c.instructions+=3;NFSU2_TR(0x75c5b5);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c5b7:{NFSU2_TR(0x75c5b7);
u8 U[4];
w4(U+0,u32(0x7d39d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c5bc:{NFSU2_TR(0x75c5bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c5c1ull));
TAIL_STATIC(0x760da0u,760);
}
B75c5c1:L75c5c1:{c.instructions+=1;NFSU2_TR(0x75c5c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c5c6ull));
TAIL_STATIC(0x75d449u,75d);
}
B75c5c6:L75c5c6:{c.instructions+=3;NFSU2_TR(0x75c5c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75c5ca:{NFSU2_TR(0x75c5ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75c5cd:{NFSU2_TR(0x75c5cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c5d2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c50du);}goto L75c50d;}
}
B75c5d2:L75c5d2:{c.instructions+=3;NFSU2_TR(0x75c5d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c5d5:{NFSU2_TR(0x75c5d5);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B75c5d9:{NFSU2_TR(0x75c5d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c5deull));
{goto L75c5e7;}
}
B75c5de:L75c5de:{c.instructions+=2;NFSU2_TR(0x75c5de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c5e1:{NFSU2_TR(0x75c5e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c5e6ull));
TAIL_STATIC(0x760ddbu,760);
}
B75c5e6:L75c5e6:{c.instructions+=1;NFSU2_TR(0x75c5e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c5e7:L75c5e7:{c.instructions+=1;NFSU2_TR(0x75c5e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c5ecull));
TAIL_STATIC(0x75d452u,75d);
}
B75c5ec:L75c5ec:{c.instructions+=1;NFSU2_TR(0x75c5ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c5ed:L75c5ed:{c.instructions+=2;NFSU2_TR(0x75c5ed);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c5f1:{NFSU2_TR(0x75c5f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c5f6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c5b5u);}goto L75c5b5;}
}
B75c5f6:L75c5f6:{c.instructions+=6;NFSU2_TR(0x75c5f6);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B75c5f8:{NFSU2_TR(0x75c5f8);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B75c5fa:{NFSU2_TR(0x75c5fa);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B75c5fc:{NFSU2_TR(0x75c5fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c5fd:{NFSU2_TR(0x75c5fd);
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
B75c5fe:{NFSU2_TR(0x75c5fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c600:L75c600:{c.instructions+=2;NFSU2_TR(0x75c600);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x40ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x40ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x40ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75c603:{NFSU2_TR(0x75c603);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75c61b;}}
}
B75c605:L75c605:{c.instructions+=2;NFSU2_TR(0x75c605);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x20ull))));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75c608:{NFSU2_TR(0x75c608);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75c610;}}
}
B75c60a:L75c60a:{c.instructions+=3;NFSU2_TR(0x75c60a);
u8 U[53];
w1(U+39,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+40),(R+0),4);
w4(U+44,shr<u32>(r4(R+0),u64(r1(U+39))));
w1(U+48,u8(u32(u8(0x20ull))-u32(r1(U+39))));
w4(U+49,shl<u32>(r4(R+8),u64(r1(U+48))));
w4(R+0,u32(u32(r4(U+44))|u32(r4(U+49))));
w1(U+24,u8((r1(U+39))==(u8(0x0ull))));
w1(U+25,u8(u32(r1(U+39))-u32(u8(0x1ull))));
w4(U+26,shr<u32>(r4(U+40),u64(r1(U+25))));
w4(U+30,u32(u32(r4(U+26))&u32(u32(0x1ull))));
w1(U+34,u8((r4(U+30))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+34))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+35,u8((r1(U+39))==(u8(0x1ull))));
w1(U+36,u8(s32(r4(U+40))<s32(u32(0x0ull))));
w1(U+37,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+38,u8(u32(r1(U+36))^u32(r1(U+37))));
__builtin_memmove((U+0),(U+35),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+35))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+38))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r1(U+39))!=(u8(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B75c60d:{NFSU2_TR(0x75c60d);
u8 U[41];
w1(U+36,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+37),(R+8),4);
w4(R+8,sar<u32>(r4(R+8),u64(r1(U+36))));
w1(U+24,u8((r1(U+36))==(u8(0x0ull))));
w1(U+25,u8(u32(r1(U+36))-u32(u8(0x1ull))));
w4(U+26,sar<u32>(r4(U+37),u64(r1(U+25))));
w4(U+30,u32(u32(r4(U+26))&u32(u32(0x1ull))));
w1(U+34,u8((r4(U+30))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+34))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+35,u8((r1(U+36))==(u8(0x1ull))));
__builtin_memmove((U+0),(U+35),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+35))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r1(U+36))!=(u8(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B75c60f:{NFSU2_TR(0x75c60f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c610:L75c610:{c.instructions+=5;NFSU2_TR(0x75c610);
__builtin_memmove((R+0),(R+8),4);
}
B75c612:{NFSU2_TR(0x75c612);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B75c615:{NFSU2_TR(0x75c615);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75c618:{NFSU2_TR(0x75c618);
u8 U[41];
w1(U+36,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+37),(R+0),4);
w4(R+0,sar<u32>(r4(R+0),u64(r1(U+36))));
w1(U+24,u8((r1(U+36))==(u8(0x0ull))));
w1(U+25,u8(u32(r1(U+36))-u32(u8(0x1ull))));
w4(U+26,sar<u32>(r4(U+37),u64(r1(U+25))));
w4(U+30,u32(u32(r4(U+26))&u32(u32(0x1ull))));
w1(U+34,u8((r4(U+30))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+34))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+35,u8((r1(U+36))==(u8(0x1ull))));
__builtin_memmove((U+0),(U+35),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+35))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r1(U+36))!=(u8(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B75c61a:{NFSU2_TR(0x75c61a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c61b:L75c61b:{c.instructions+=3;NFSU2_TR(0x75c61b);
u8 U[47];
w4(U+39,u32(u32(u32(0x1full))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+8),4);
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B75c61e:{NFSU2_TR(0x75c61e);
__builtin_memmove((R+0),(R+8),4);
}
B75c620:{NFSU2_TR(0x75c620);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c621:L75c621:{c.instructions+=3;NFSU2_TR(0x75c621);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c623:{NFSU2_TR(0x75c623);
u8 U[4];
w4(U+0,u32(0x7d39e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c628:{NFSU2_TR(0x75c628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c62dull));
TAIL_STATIC(0x760da0u,760);
}
B75c62d:L75c62d:{c.instructions+=3;NFSU2_TR(0x75c62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75c630:{NFSU2_TR(0x75c630);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba4a8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75c637:{NFSU2_TR(0x75c637);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c667;}}
}
B75c639:L75c639:{c.instructions+=2;NFSU2_TR(0x75c639);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba494),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75c63f:{NFSU2_TR(0x75c63f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L75c667;}}
}
B75c641:L75c641:{c.instructions+=2;NFSU2_TR(0x75c641);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c643:{NFSU2_TR(0x75c643);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c648ull));
TAIL_STATIC(0x7631f1u,763);
}
B75c648:L75c648:{c.instructions+=4;NFSU2_TR(0x75c648);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c649:{NFSU2_TR(0x75c649);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75c64d:{NFSU2_TR(0x75c64d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c64e:{NFSU2_TR(0x75c64e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c653ull));
TAIL_STATIC(0x763a49u,763);
}
B75c653:L75c653:{c.instructions+=4;NFSU2_TR(0x75c653);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c654:{NFSU2_TR(0x75c654);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c657:{NFSU2_TR(0x75c657);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B75c65b:{NFSU2_TR(0x75c65b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c660ull));
{goto L75c693;}
}
B75c660:L75c660:{c.instructions+=3;NFSU2_TR(0x75c660);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c663:{NFSU2_TR(0x75c663);
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
B75c665:{NFSU2_TR(0x75c665);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c68a;}}
}
B75c667:L75c667:{c.instructions+=2;NFSU2_TR(0x75c667);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75c669:{NFSU2_TR(0x75c669);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c66c;}}
}
B75c66b:L75c66b:{c.instructions+=1;NFSU2_TR(0x75c66b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75c66c:L75c66c:{c.instructions+=2;NFSU2_TR(0x75c66c);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ba4a8),4);
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
B75c673:{NFSU2_TR(0x75c673);
if(r1(R+518)){{goto L75c67b;}}
}
B75c675:L75c675:{c.instructions+=2;NFSU2_TR(0x75c675);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfull))));
}
B75c678:{NFSU2_TR(0x75c678);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75c67b:L75c67b:{c.instructions+=4;NFSU2_TR(0x75c67b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c67c:{NFSU2_TR(0x75c67c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c67e:{NFSU2_TR(0x75c67e);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba4a4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c684:{NFSU2_TR(0x75c684);
u8 U[4];
__builtin_memmove((U+0),gp(0x78325c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c68aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75c68a:L75c68a:{c.instructions+=1;NFSU2_TR(0x75c68a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c68full));
TAIL_STATIC(0x760ddbu,760);
}
B75c68f:L75c68f:{c.instructions+=1;NFSU2_TR(0x75c68f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c690:L75c690:{c.instructions+=1;NFSU2_TR(0x75c690);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75c693:L75c693:{c.instructions+=2;NFSU2_TR(0x75c693);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c695:{NFSU2_TR(0x75c695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c69aull));
TAIL_STATIC(0x76315du,763);
}
B75c69a:L75c69a:{c.instructions+=2;NFSU2_TR(0x75c69a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c69b:{NFSU2_TR(0x75c69b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c69c:L75c69c:{c.instructions+=2;NFSU2_TR(0x75c69c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffffffe0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffe0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75c6a1:{NFSU2_TR(0x75c6a1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L75c6c5;}}
}
B75c6a3:L75c6a3:{c.instructions+=2;NFSU2_TR(0x75c6a3);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c6a7:{NFSU2_TR(0x75c6a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c6acull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c621u);}goto L75c621;}
}
B75c6ac:L75c6ac:{c.instructions+=3;NFSU2_TR(0x75c6ac);
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
B75c6ae:{NFSU2_TR(0x75c6ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c6af:{NFSU2_TR(0x75c6af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c6c7;}}
}
B75c6b1:L75c6b1:{c.instructions+=2;NFSU2_TR(0x75c6b1);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B75c6b5:{NFSU2_TR(0x75c6b5);
if(r1(R+518)){{goto L75c6c7;}}
}
B75c6b7:L75c6b7:{c.instructions+=2;NFSU2_TR(0x75c6b7);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c6bb:{NFSU2_TR(0x75c6bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c6c0ull));
TAIL_STATIC(0x763d45u,763);
}
B75c6c0:L75c6c0:{c.instructions+=3;NFSU2_TR(0x75c6c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75c6c2:{NFSU2_TR(0x75c6c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c6c3:{NFSU2_TR(0x75c6c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c6a3u);}goto L75c6a3;}}
}
B75c6c5:L75c6c5:{c.instructions+=1;NFSU2_TR(0x75c6c5);
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
B75c6c7:L75c6c7:{c.instructions+=1;NFSU2_TR(0x75c6c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c6c8:L75c6c8:{c.instructions+=3;NFSU2_TR(0x75c6c8);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b8714),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c6ce:{NFSU2_TR(0x75c6ce);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c6d2:{NFSU2_TR(0x75c6d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c6d7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c69cu);}goto L75c69c;}
}
B75c6d7:L75c6d7:{c.instructions+=3;NFSU2_TR(0x75c6d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c6d8:{NFSU2_TR(0x75c6d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c6d9:{NFSU2_TR(0x75c6d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c6da:L75c6da:{c.instructions+=3;NFSU2_TR(0x75c6da);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c6dc:{NFSU2_TR(0x75c6dc);
u8 U[4];
w4(U+0,u32(0x7d39f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c6e1:{NFSU2_TR(0x75c6e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c6e6ull));
TAIL_STATIC(0x760da0u,760);
}
B75c6e6:L75c6e6:{c.instructions+=3;NFSU2_TR(0x75c6e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75c6e9:{NFSU2_TR(0x75c6e9);
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
B75c6eb:{NFSU2_TR(0x75c6eb);
if(r1(R+518)){{goto L75c745;}}
}
B75c6ed:L75c6ed:{c.instructions+=2;NFSU2_TR(0x75c6ed);
u8 U[14];
__builtin_memmove((U+6),gp(0x8ba4a8),4);
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
B75c6f4:{NFSU2_TR(0x75c6f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c736;}}
}
B75c6f6:L75c6f6:{c.instructions+=2;NFSU2_TR(0x75c6f6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c6f8:{NFSU2_TR(0x75c6f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c6fdull));
TAIL_STATIC(0x7631f1u,763);
}
B75c6fd:L75c6fd:{c.instructions+=4;NFSU2_TR(0x75c6fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c6fe:{NFSU2_TR(0x75c6fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75c702:{NFSU2_TR(0x75c702);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c703:{NFSU2_TR(0x75c703);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c708ull));
TAIL_STATIC(0x76326au,763);
}
B75c708:L75c708:{c.instructions+=4;NFSU2_TR(0x75c708);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c709:{NFSU2_TR(0x75c709);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c70c:{NFSU2_TR(0x75c70c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75c70e:{NFSU2_TR(0x75c70e);
if(r1(R+518)){{goto L75c719;}}
}
B75c710:L75c710:{c.instructions+=3;NFSU2_TR(0x75c710);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c711:{NFSU2_TR(0x75c711);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c712:{NFSU2_TR(0x75c712);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c717ull));
TAIL_STATIC(0x763295u,763);
}
B75c717:L75c717:{c.instructions+=2;NFSU2_TR(0x75c717);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c718:{NFSU2_TR(0x75c718);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c719:L75c719:{c.instructions+=2;NFSU2_TR(0x75c719);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B75c71d:{NFSU2_TR(0x75c71d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c722ull));
{goto L75c72d;}
}
B75c722:L75c722:{c.instructions+=2;NFSU2_TR(0x75c722);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75c726:{NFSU2_TR(0x75c726);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c745;}}
}
B75c728:L75c728:{c.instructions+=2;NFSU2_TR(0x75c728);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c72b:{NFSU2_TR(0x75c72b);
{goto L75c737;}
}
B75c72d:L75c72d:{c.instructions+=2;NFSU2_TR(0x75c72d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c72f:{NFSU2_TR(0x75c72f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c734ull));
TAIL_STATIC(0x76315du,763);
}
B75c734:L75c734:{c.instructions+=2;NFSU2_TR(0x75c734);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c735:{NFSU2_TR(0x75c735);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c736:L75c736:{c.instructions+=1;NFSU2_TR(0x75c736);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c737:L75c737:{c.instructions+=3;NFSU2_TR(0x75c737);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c739:{NFSU2_TR(0x75c739);
u8 U[4];
__builtin_memmove((U+0),gp(0x8ba4a4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c73f:{NFSU2_TR(0x75c73f);
u8 U[4];
__builtin_memmove((U+0),gp(0x783254),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c745ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75c745:L75c745:{c.instructions+=1;NFSU2_TR(0x75c745);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c74aull));
TAIL_STATIC(0x760ddbu,760);
}
B75c74a:L75c74a:{c.instructions+=1;NFSU2_TR(0x75c74a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c750:L75c750:{c.instructions+=5;NFSU2_TR(0x75c750);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c754:{NFSU2_TR(0x75c754);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75c758:{NFSU2_TR(0x75c758);
u8 U[6];
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75c75a:{NFSU2_TR(0x75c75a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75c75e:{NFSU2_TR(0x75c75e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c769;}}
}
B75c760:L75c760:{c.instructions+=3;NFSU2_TR(0x75c760);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c764:{NFSU2_TR(0x75c764);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
__builtin_memmove((R+523),(R+512),1);
w4(R+0,u32(r8(U+16)));
}
B75c766:{NFSU2_TR(0x75c766);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c769:L75c769:{c.instructions+=11;NFSU2_TR(0x75c769);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c76a:{NFSU2_TR(0x75c76a);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B75c76c:{NFSU2_TR(0x75c76c);
__builtin_memmove((R+12),(R+0),4);
}
B75c76e:{NFSU2_TR(0x75c76e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c772:{NFSU2_TR(0x75c772);
u8 U[32];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B75c776:{NFSU2_TR(0x75c776);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B75c778:{NFSU2_TR(0x75c778);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c77c:{NFSU2_TR(0x75c77c);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B75c77e:{NFSU2_TR(0x75c77e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+12)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75c780:{NFSU2_TR(0x75c780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75c781:{NFSU2_TR(0x75c781);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c784:L75c784:{c.instructions+=16;NFSU2_TR(0x75c784);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c785:{NFSU2_TR(0x75c785);
__builtin_memmove((R+20),(R+16),4);
}
B75c787:{NFSU2_TR(0x75c787);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B75c78a:{NFSU2_TR(0x75c78a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c78b:{NFSU2_TR(0x75c78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75c78e:{NFSU2_TR(0x75c78e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c78f:{NFSU2_TR(0x75c78f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75c792:{NFSU2_TR(0x75c792);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c793:{NFSU2_TR(0x75c793);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c796:{NFSU2_TR(0x75c796);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75c799:{NFSU2_TR(0x75c799);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c79a:{NFSU2_TR(0x75c79a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x7fffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B75c7a1:{NFSU2_TR(0x75c7a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x42ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75c7a8:{NFSU2_TR(0x75c7a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c7ab:{NFSU2_TR(0x75c7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c7ae:{NFSU2_TR(0x75c7ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c7b3ull));
TAIL_STATIC(0x763f07u,763);
}
B75c7b3:L75c7b3:{c.instructions+=4;NFSU2_TR(0x75c7b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75c7b6:{NFSU2_TR(0x75c7b6);
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
B75c7b8:{NFSU2_TR(0x75c7b8);
__builtin_memmove((R+28),(R+0),4);
}
B75c7ba:{NFSU2_TR(0x75c7ba);
if(r1(R+518)){{goto L75c7d6;}}
}
B75c7bc:L75c7bc:{c.instructions+=2;NFSU2_TR(0x75c7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75c7bf:{NFSU2_TR(0x75c7bf);
if(r1(R+519)){{goto L75c7c9;}}
}
B75c7c1:L75c7c1:{c.instructions+=3;NFSU2_TR(0x75c7c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c7c4:{NFSU2_TR(0x75c7c4);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))&u32(u8(0x0ull))));
s1(u32(r4(R+0)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B75c7c7:{NFSU2_TR(0x75c7c7);
{goto L75c7d6;}
}
B75c7c9:L75c7c9:{c.instructions+=4;NFSU2_TR(0x75c7c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75c7cc:{NFSU2_TR(0x75c7cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c7cd:{NFSU2_TR(0x75c7cd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c7cf:{NFSU2_TR(0x75c7cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c7d4ull));
TAIL_STATIC(0x763d60u,763);
}
B75c7d4:L75c7d4:{c.instructions+=2;NFSU2_TR(0x75c7d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c7d5:{NFSU2_TR(0x75c7d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c7d6:L75c7d6:{c.instructions+=5;NFSU2_TR(0x75c7d6);
__builtin_memmove((R+0),(R+28),4);
}
B75c7d8:{NFSU2_TR(0x75c7d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75c7d9:{NFSU2_TR(0x75c7d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75c7da:{NFSU2_TR(0x75c7da);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75c7db:{NFSU2_TR(0x75c7db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c7dc:L75c7dc:{c.instructions+=15;NFSU2_TR(0x75c7dc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c7dd:{NFSU2_TR(0x75c7dd);
__builtin_memmove((R+20),(R+16),4);
}
B75c7df:{NFSU2_TR(0x75c7df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B75c7e2:{NFSU2_TR(0x75c7e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c7e3:{NFSU2_TR(0x75c7e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75c7e6:{NFSU2_TR(0x75c7e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c7e7:{NFSU2_TR(0x75c7e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c7ea:{NFSU2_TR(0x75c7ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75c7ed:{NFSU2_TR(0x75c7ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75c7f0:{NFSU2_TR(0x75c7f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x7fffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B75c7f7:{NFSU2_TR(0x75c7f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c7f8:{NFSU2_TR(0x75c7f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x42ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75c7ff:{NFSU2_TR(0x75c7ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c802:{NFSU2_TR(0x75c802);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c805:{NFSU2_TR(0x75c805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c80aull));
TAIL_STATIC(0x763f07u,763);
}
B75c80a:L75c80a:{c.instructions+=4;NFSU2_TR(0x75c80a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75c80d:{NFSU2_TR(0x75c80d);
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
B75c80f:{NFSU2_TR(0x75c80f);
__builtin_memmove((R+28),(R+0),4);
}
B75c811:{NFSU2_TR(0x75c811);
if(r1(R+518)){{goto L75c82d;}}
}
B75c813:L75c813:{c.instructions+=2;NFSU2_TR(0x75c813);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75c816:{NFSU2_TR(0x75c816);
if(r1(R+519)){{goto L75c820;}}
}
B75c818:L75c818:{c.instructions+=3;NFSU2_TR(0x75c818);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c81b:{NFSU2_TR(0x75c81b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))&u32(u8(0x0ull))));
s1(u32(r4(R+0)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B75c81e:{NFSU2_TR(0x75c81e);
{goto L75c82d;}
}
B75c820:L75c820:{c.instructions+=4;NFSU2_TR(0x75c820);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75c823:{NFSU2_TR(0x75c823);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c824:{NFSU2_TR(0x75c824);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c826:{NFSU2_TR(0x75c826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75c82bull));
TAIL_STATIC(0x763d60u,763);
}
B75c82b:L75c82b:{c.instructions+=2;NFSU2_TR(0x75c82b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c82c:{NFSU2_TR(0x75c82c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75c82d:L75c82d:{c.instructions+=5;NFSU2_TR(0x75c82d);
__builtin_memmove((R+0),(R+28),4);
}
B75c82f:{NFSU2_TR(0x75c82f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75c830:{NFSU2_TR(0x75c830);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75c831:{NFSU2_TR(0x75c831);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75c832:{NFSU2_TR(0x75c832);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c840:L75c840:{c.instructions+=4;NFSU2_TR(0x75c840);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75c844:{NFSU2_TR(0x75c844);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c845:{NFSU2_TR(0x75c845);
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
B75c847:{NFSU2_TR(0x75c847);
if(r1(R+518)){{goto L75c8df;}}
}
B75c84d:L75c84d:{c.instructions+=7;NFSU2_TR(0x75c84d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c84e:{NFSU2_TR(0x75c84e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75c84f:{NFSU2_TR(0x75c84f);
__builtin_memmove((R+12),(R+4),4);
}
B75c851:{NFSU2_TR(0x75c851);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75c855:{NFSU2_TR(0x75c855);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75c85b:{NFSU2_TR(0x75c85b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75c85f:{NFSU2_TR(0x75c85f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c86c;}}
}
B75c861:L75c861:{c.instructions+=2;NFSU2_TR(0x75c861);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+4))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B75c864:{NFSU2_TR(0x75c864);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c8ef;}}
}
B75c86a:L75c86a:{c.instructions+=1;NFSU2_TR(0x75c86a);
{goto L75c893;}
}
B75c86c:L75c86c:{c.instructions+=6;NFSU2_TR(0x75c86c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B75c86e:{NFSU2_TR(0x75c86e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75c871:{NFSU2_TR(0x75c871);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B75c873:{NFSU2_TR(0x75c873);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75c876:{NFSU2_TR(0x75c876);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75c879:{NFSU2_TR(0x75c879);
if(r1(R+518)){{goto L75c8a6;}}
}
B75c87b:L75c87b:{c.instructions+=2;NFSU2_TR(0x75c87b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75c87d:{NFSU2_TR(0x75c87d);
if(r1(R+518)){{goto L75c8ae;}}
}
B75c87f:L75c87f:{c.instructions+=2;NFSU2_TR(0x75c87f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75c885:{NFSU2_TR(0x75c885);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c86cu);}goto L75c86c;}}
}
B75c887:L75c887:{c.instructions+=3;NFSU2_TR(0x75c887);
__builtin_memmove((R+12),(R+4),4);
}
B75c889:{NFSU2_TR(0x75c889);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+4))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B75c88c:{NFSU2_TR(0x75c88c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c8ef;}}
}
B75c88e:L75c88e:{c.instructions+=2;NFSU2_TR(0x75c88e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75c891:{NFSU2_TR(0x75c891);
if(r1(R+518)){{goto L75c8a6;}}
}
B75c893:L75c893:{c.instructions+=6;NFSU2_TR(0x75c893);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B75c895:{NFSU2_TR(0x75c895);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75c898:{NFSU2_TR(0x75c898);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B75c89a:{NFSU2_TR(0x75c89a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75c89d:{NFSU2_TR(0x75c89d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75c89f:{NFSU2_TR(0x75c89f);
if(r1(R+518)){{goto L75c8d8;}}
}
B75c8a1:L75c8a1:{c.instructions+=2;NFSU2_TR(0x75c8a1);
u8 U[6];
w1(R+512,u8((r4(R+12))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75c8a4:{NFSU2_TR(0x75c8a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c893u);}goto L75c893;}}
}
B75c8a6:L75c8a6:{c.instructions+=5;NFSU2_TR(0x75c8a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c8aa:{NFSU2_TR(0x75c8aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75c8ab:{NFSU2_TR(0x75c8ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75c8ac:{NFSU2_TR(0x75c8ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75c8ad:{NFSU2_TR(0x75c8ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c8ae:L75c8ae:{c.instructions+=2;NFSU2_TR(0x75c8ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75c8b4:{NFSU2_TR(0x75c8b4);
if(r1(R+518)){{goto L75c8cc;}}
}
B75c8b6:L75c8b6:{c.instructions+=4;NFSU2_TR(0x75c8b6);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B75c8b8:{NFSU2_TR(0x75c8b8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75c8bb:{NFSU2_TR(0x75c8bb);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75c8be:{NFSU2_TR(0x75c8be);
if(r1(R+518)){{goto L75c95c;}}
}
B75c8c4:L75c8c4:{c.instructions+=2;NFSU2_TR(0x75c8c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75c8ca:{NFSU2_TR(0x75c8ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c8b6u);}goto L75c8b6;}}
}
B75c8cc:L75c8cc:{c.instructions+=3;NFSU2_TR(0x75c8cc);
__builtin_memmove((R+12),(R+4),4);
}
B75c8ce:{NFSU2_TR(0x75c8ce);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+4))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B75c8d1:{NFSU2_TR(0x75c8d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c947;}}
}
B75c8d3:L75c8d3:{c.instructions+=2;NFSU2_TR(0x75c8d3);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B75c8d5:{NFSU2_TR(0x75c8d5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75c8d8:L75c8d8:{c.instructions+=2;NFSU2_TR(0x75c8d8);
u8 U[6];
w1(R+512,u8((r4(R+12))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75c8db:{NFSU2_TR(0x75c8db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c8d3u);}goto L75c8d3;}}
}
B75c8dd:L75c8dd:{c.instructions+=2;NFSU2_TR(0x75c8dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75c8de:{NFSU2_TR(0x75c8de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75c8df:L75c8df:{c.instructions+=3;NFSU2_TR(0x75c8df);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c8e3:{NFSU2_TR(0x75c8e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75c8e4:{NFSU2_TR(0x75c8e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c8e5:L75c8e5:{c.instructions+=4;NFSU2_TR(0x75c8e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B75c8e7:{NFSU2_TR(0x75c8e7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B75c8ea:{NFSU2_TR(0x75c8ea);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B75c8ed:{NFSU2_TR(0x75c8ed);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c88eu);}goto L75c88e;}}
}
B75c8ef:L75c8ef:{c.instructions+=9;NFSU2_TR(0x75c8ef);
w4(R+8,u32(0x7efefeffull));
}
B75c8f4:{NFSU2_TR(0x75c8f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75c8f6:{NFSU2_TR(0x75c8f6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B75c8f8:{NFSU2_TR(0x75c8f8);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0xffffffffull))));
}
B75c8fb:{NFSU2_TR(0x75c8fb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B75c8fd:{NFSU2_TR(0x75c8fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B75c8ff:{NFSU2_TR(0x75c8ff);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B75c902:{NFSU2_TR(0x75c902);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x81010100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75c907:{NFSU2_TR(0x75c907);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c8e5u);}goto L75c8e5;}}
}
B75c909:L75c909:{c.instructions+=2;NFSU2_TR(0x75c909);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75c90b:{NFSU2_TR(0x75c90b);
if(r1(R+518)){{goto L75c939;}}
}
B75c90d:L75c90d:{c.instructions+=2;NFSU2_TR(0x75c90d);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(r1(R+9))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75c90f:{NFSU2_TR(0x75c90f);
if(r1(R+518)){{goto L75c92f;}}
}
B75c911:L75c911:{c.instructions+=2;NFSU2_TR(0x75c911);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xff0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75c917:{NFSU2_TR(0x75c917);
if(r1(R+518)){{goto L75c925;}}
}
B75c919:L75c919:{c.instructions+=2;NFSU2_TR(0x75c919);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xff000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75c91f:{NFSU2_TR(0x75c91f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c8e5u);}goto L75c8e5;}}
}
B75c921:L75c921:{c.instructions+=2;NFSU2_TR(0x75c921);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B75c923:{NFSU2_TR(0x75c923);
{goto L75c93d;}
}
B75c925:L75c925:{c.instructions+=3;NFSU2_TR(0x75c925);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffull))));
}
B75c92b:{NFSU2_TR(0x75c92b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B75c92d:{NFSU2_TR(0x75c92d);
{goto L75c93d;}
}
B75c92f:L75c92f:{c.instructions+=3;NFSU2_TR(0x75c92f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B75c935:{NFSU2_TR(0x75c935);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B75c937:{NFSU2_TR(0x75c937);
{goto L75c93d;}
}
B75c939:L75c939:{c.instructions+=2;NFSU2_TR(0x75c939);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B75c93b:{NFSU2_TR(0x75c93b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B75c93d:L75c93d:{c.instructions+=4;NFSU2_TR(0x75c93d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B75c940:{NFSU2_TR(0x75c940);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75c942:{NFSU2_TR(0x75c942);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B75c945:{NFSU2_TR(0x75c945);
if(r1(R+518)){{goto L75c953;}}
}
B75c947:L75c947:{c.instructions+=1;NFSU2_TR(0x75c947);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75c949:L75c949:{c.instructions+=4;NFSU2_TR(0x75c949);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B75c94b:{NFSU2_TR(0x75c94b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B75c94e:{NFSU2_TR(0x75c94e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B75c951:{NFSU2_TR(0x75c951);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c949u);}goto L75c949;}}
}
B75c953:L75c953:{c.instructions+=2;NFSU2_TR(0x75c953);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75c956:{NFSU2_TR(0x75c956);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75c8d3u);}goto L75c8d3;}}
}
B75c95c:L75c95c:{c.instructions+=5;NFSU2_TR(0x75c95c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c960:{NFSU2_TR(0x75c960);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75c961:{NFSU2_TR(0x75c961);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75c962:{NFSU2_TR(0x75c962);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75c963:{NFSU2_TR(0x75c963);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75c9b0:L75c9b0:{c.instructions+=2;NFSU2_TR(0x75c9b0);
u8 U[8];
__builtin_memmove((U+0),gp(0x8ba480),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75c9b7:{NFSU2_TR(0x75c9b7);
if(r1(R+518)){{goto L75c9eb;}}
}
B75c9b9:L75c9b9:{c.instructions+=6;NFSU2_TR(0x75c9b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B75c9bc:{NFSU2_TR(0x75c9bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(R+4244,mxcsr_store());
__builtin_memmove((U+4),(R+4244),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75c9c1:{NFSU2_TR(0x75c9c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c9c5:{NFSU2_TR(0x75c9c5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1f80ull))));
}
B75c9ca:{NFSU2_TR(0x75c9ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1f80ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75c9cf:{NFSU2_TR(0x75c9cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c9e0;}}
}
B75c9d1:L75c9d1:{c.instructions+=4;NFSU2_TR(0x75c9d1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x38"::"a"(ea_):"memory");}
}
B75c9d4:{NFSU2_TR(0x75c9d4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+16))),2);
__builtin_memmove((R+0),(U+0),2);
}
B75c9d8:{NFSU2_TR(0x75c9d8);
w2(R+0,u16(u32(r2(R+0))&u32(u16(0x7full))));
}
B75c9dc:{NFSU2_TR(0x75c9dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x7full))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B75c9e0:L75c9e0:{c.instructions+=2;NFSU2_TR(0x75c9e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+16),(U+0),4);
}
B75c9e4:{NFSU2_TR(0x75c9e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75c9eb;}}
}
B75c9e6:L75c9e6:{c.instructions+=1;NFSU2_TR(0x75c9e6);
TAIL_STATIC(0x764730u,764);
}
B75c9eb:L75c9eb:{c.instructions+=6;NFSU2_TR(0x75c9eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B75c9ee:{NFSU2_TR(0x75c9ee);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B75c9f0:{NFSU2_TR(0x75c9f0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B75c9f3:{NFSU2_TR(0x75c9f3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B75c9f7:{NFSU2_TR(0x75c9f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75c9fb:{NFSU2_TR(0x75c9fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ca00ull));
{goto L75ca0d;}
}
B75ca00:L75ca00:{c.instructions+=2;NFSU2_TR(0x75ca00);
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
B75ca03:{NFSU2_TR(0x75ca03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75ca0d:L75ca0d:{c.instructions+=5;NFSU2_TR(0x75ca0d);
__builtin_memmove((R+4),(R+0),4);
}
B75ca0f:{NFSU2_TR(0x75ca0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ca10:{NFSU2_TR(0x75ca10);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0x9b,0xd9,0x38"::"a"(ea_):"memory");}
}
B75ca14:{NFSU2_TR(0x75ca14);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+16))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x27full))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B75ca1a:{NFSU2_TR(0x75ca1a);
if(r1(R+518)){{goto L75ca21;}}
}
B75ca1c:L75ca1c:{c.instructions+=1;NFSU2_TR(0x75ca1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ca21ull));
TAIL_STATIC(0x7656d5u,765);
}
B75ca21:L75ca21:{c.instructions+=4;NFSU2_TR(0x75ca21);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ff00000ull))));
}
B75ca27:{NFSU2_TR(0x75ca27);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75ca2b:{NFSU2_TR(0x75ca2b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ff00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75ca31:{NFSU2_TR(0x75ca31);
if(r1(R+518)){{goto L75cad4;}}
}
B75ca37:L75ca37:{c.instructions+=1;NFSU2_TR(0x75ca37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ca3cull));
TAIL_STATIC(0x765705u,765);
}
B75ca3c:L75ca3c:{c.instructions+=1;NFSU2_TR(0x75ca3c);
if(r1(R+518)){{goto L75cad0;}}
}
B75ca42:L75ca42:{c.instructions+=2;NFSU2_TR(0x75ca42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x7ff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75ca47:{NFSU2_TR(0x75ca47);
if(r1(R+518)){{goto L75cb43;}}
}
B75ca4d:L75ca4d:{c.instructions+=3;NFSU2_TR(0x75ca4d);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B75ca51:{NFSU2_TR(0x75ca51);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x80ull))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75ca54:{NFSU2_TR(0x75ca54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75cbad;}}
}
B75ca5a:L75ca5a:{c.instructions+=2;NFSU2_TR(0x75ca5a);
__asm__ volatile(".byte 0xd9,0xf1":::"memory");
}
B75ca5c:{NFSU2_TR(0x75ca5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ca61ull));
TAIL_STATIC(0x7656c0u,765);
}
B75ca61:L75ca61:{c.instructions+=2;NFSU2_TR(0x75ca61);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75ca64:{NFSU2_TR(0x75ca64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75ca68;}}
}
B75ca66:L75ca66:{c.instructions+=1;NFSU2_TR(0x75ca66);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B75ca68:L75ca68:{c.instructions+=2;NFSU2_TR(0x75ca68);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8424),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75ca6f:{NFSU2_TR(0x75ca6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x76575eu,765);}
}
B75ca75:L75ca75:{c.instructions+=3;NFSU2_TR(0x75ca75);
w4(R+4,u32(0x819c88ull));
}
B75ca7b:{NFSU2_TR(0x75ca7b);
w4(R+8,u32(0x1dull));
}
B75ca80:{NFSU2_TR(0x75ca80);
TAIL_STATIC(0x7657a9u,765);
}
B75ca85:L75ca85:{c.instructions+=2;NFSU2_TR(0x75ca85);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8424),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75ca8c:{NFSU2_TR(0x75ca8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x76575eu,765);}
}
B75ca92:L75ca92:{c.instructions+=3;NFSU2_TR(0x75ca92);
w4(R+4,u32(0x819c88ull));
}
B75ca98:{NFSU2_TR(0x75ca98);
w4(R+8,u32(0x1dull));
}
B75ca9d:{NFSU2_TR(0x75ca9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75caa2ull));
TAIL_STATIC(0x765660u,765);
}
B75caa2:L75caa2:{c.instructions+=2;NFSU2_TR(0x75caa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B75caa3:{NFSU2_TR(0x75caa3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75caa4:L75caa4:{c.instructions+=2;NFSU2_TR(0x75caa4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75caa8:{NFSU2_TR(0x75caa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75caadull));
TAIL_STATIC(0x765705u,765);
}
B75caad:L75caad:{c.instructions+=2;NFSU2_TR(0x75caad);
u8 U[6];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B75cab2:{NFSU2_TR(0x75cab2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75cab7;}}
}
B75cab4:L75cab4:{c.instructions+=2;NFSU2_TR(0x75cab4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B75cab5:{NFSU2_TR(0x75cab5);
{goto L75caea;}
}
B75cab7:L75cab7:{c.instructions+=3;NFSU2_TR(0x75cab7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B75cab9:{NFSU2_TR(0x75cab9);
w4(R+0,u32(0x1ull));
}
B75cabe:{NFSU2_TR(0x75cabe);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ca85u);}goto L75ca85;}
}
B75cac0:L75cac0:{c.instructions+=2;NFSU2_TR(0x75cac0);
u8 U[6];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B75cac5:{NFSU2_TR(0x75cac5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cab7u);}goto L75cab7;}}
}
B75cac7:L75cac7:{c.instructions+=3;NFSU2_TR(0x75cac7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B75cac9:{NFSU2_TR(0x75cac9);
w4(R+0,u32(0x7ull));
}
B75cace:{NFSU2_TR(0x75cace);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ca85u);}goto L75ca85;}
}
B75cad0:L75cad0:{c.instructions+=2;NFSU2_TR(0x75cad0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B75cad2:{NFSU2_TR(0x75cad2);
{goto L75caea;}
}
B75cad4:L75cad4:{c.instructions+=4;NFSU2_TR(0x75cad4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B75cad6:{NFSU2_TR(0x75cad6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B75cadb:{NFSU2_TR(0x75cadb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B75cadf:{NFSU2_TR(0x75cadf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75caa4u);}goto L75caa4;}}
}
B75cae1:L75cae1:{c.instructions+=2;NFSU2_TR(0x75cae1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B75cae5:{NFSU2_TR(0x75cae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75caeaull));
TAIL_STATIC(0x765705u,765);
}
B75caea:L75caea:{c.instructions+=6;NFSU2_TR(0x75caea);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75caee:{NFSU2_TR(0x75caee);
__builtin_memmove((R+8),(R+0),4);
}
B75caf0:{NFSU2_TR(0x75caf0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ff00000ull))));
}
B75caf5:{NFSU2_TR(0x75caf5);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B75cafb:{NFSU2_TR(0x75cafb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75cb00:{NFSU2_TR(0x75cb00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75cb08;}}
}
B75cb02:L75cb02:{c.instructions+=2;NFSU2_TR(0x75cb02);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))|u32(r4(U+4))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B75cb06:{NFSU2_TR(0x75cb06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cac0u);}goto L75cac0;}}
}
B75cb08:L75cb08:{c.instructions+=2;NFSU2_TR(0x75cb08);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75cb0a:{NFSU2_TR(0x75cb0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cac7u);}goto L75cac7;}}
}
B75cb0c:L75cb0c:{c.instructions+=8;NFSU2_TR(0x75cb0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x74ull))));
}
B75cb0f:{NFSU2_TR(0x75cb0f);
__builtin_memmove((R+4),(R+16),4);
}
B75cb11:{NFSU2_TR(0x75cb11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cb12:{NFSU2_TR(0x75cb12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B75cb15:{NFSU2_TR(0x75cb15);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B75cb18:{NFSU2_TR(0x75cb18);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B75cb1c:{NFSU2_TR(0x75cb1c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0x9b,0xdd,0x30"::"a"(ea_):"memory");}
}
B75cb20:{NFSU2_TR(0x75cb20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75cb25ull));
TAIL_STATIC(0x7658b6u,765);
}
B75cb25:L75cb25:{c.instructions+=7;NFSU2_TR(0x75cb25);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B75cb28:{NFSU2_TR(0x75cb28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75cb29:{NFSU2_TR(0x75cb29);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xdd,0x20"::"a"(ea_):"memory");}
}
B75cb2c:{NFSU2_TR(0x75cb2c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B75cb2e:{NFSU2_TR(0x75cb2e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x74ull))));
}
B75cb31:{NFSU2_TR(0x75cb31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75cb33:{NFSU2_TR(0x75cb33);
if(r1(R+518)){TAIL_STATIC(0x76575eu,765);}
}
B75cb39:L75cb39:{c.instructions+=2;NFSU2_TR(0x75cb39);
w4(R+0,u32(0x1ull));
}
B75cb3e:{NFSU2_TR(0x75cb3e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ca85u);}goto L75ca85;}
}
B75cb43:L75cb43:{c.instructions+=4;NFSU2_TR(0x75cb43);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75cb47:{NFSU2_TR(0x75cb47);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B75cb4c:{NFSU2_TR(0x75cb4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B75cb50:{NFSU2_TR(0x75cb50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ca4du);}goto L75ca4d;}}
}
B75cb56:L75cb56:{c.instructions+=5;NFSU2_TR(0x75cb56);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B75cb58:{NFSU2_TR(0x75cb58);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75cb5c:{NFSU2_TR(0x75cb5c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B75cb61:{NFSU2_TR(0x75cb61);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B75cb65:{NFSU2_TR(0x75cb65);
if(r1(R+518)){{goto L75cba4;}}
}
B75cb67:L75cb67:{c.instructions+=1;NFSU2_TR(0x75cb67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75cb6cull));
{goto L75cbd2;}
}
B75cb6c:L75cb6c:{c.instructions+=4;NFSU2_TR(0x75cb6c);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+5),(U+4),1);
}
B75cb70:{NFSU2_TR(0x75cb70);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w1(R+5,shr<u8>(r1(R+5),u64(r4(U+0))));
}
B75cb73:{NFSU2_TR(0x75cb73);
u8 U[12];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x80ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B75cb7b:{NFSU2_TR(0x75cb7b);
if(r1(R+518)){{goto L75cb93;}}
}
B75cb7d:L75cb7d:{c.instructions+=3;NFSU2_TR(0x75cb7d);
{u32 ea_=u32(u32(8496240u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B75cb83:{NFSU2_TR(0x75cb83);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75cb85:{NFSU2_TR(0x75cb85);
if(r1(R+518)){{goto L75cb89;}}
}
B75cb87:L75cb87:{c.instructions+=1;NFSU2_TR(0x75cb87);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B75cb89:L75cb89:{c.instructions+=2;NFSU2_TR(0x75cb89);
w4(R+0,u32(0x2ull));
}
B75cb8e:{NFSU2_TR(0x75cb8e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ca85u);}goto L75ca85;}
}
B75cb93:L75cb93:{c.instructions+=3;NFSU2_TR(0x75cb93);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B75cb95:{NFSU2_TR(0x75cb95);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75cb97:{NFSU2_TR(0x75cb97);
if(r1(R+518)){TAIL_STATIC(0x76575eu,765);}
}
B75cb9d:L75cb9d:{c.instructions+=2;NFSU2_TR(0x75cb9d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B75cb9f:{NFSU2_TR(0x75cb9f);
TAIL_STATIC(0x76575eu,765);
}
B75cba4:L75cba4:{c.instructions+=3;NFSU2_TR(0x75cba4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B75cba6:{NFSU2_TR(0x75cba6);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B75cba8:{NFSU2_TR(0x75cba8);
TAIL_STATIC(0x76575eu,765);
}
B75cbad:L75cbad:{c.instructions+=2;NFSU2_TR(0x75cbad);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B75cbaf:{NFSU2_TR(0x75cbaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75cbb4ull));
{goto L75cbd2;}
}
B75cbb4:L75cbb4:{c.instructions+=3;NFSU2_TR(0x75cbb4);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B75cbb6:{NFSU2_TR(0x75cbb6);
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
B75cbb8:{NFSU2_TR(0x75cbb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ca5au);}goto L75ca5a;}}
}
B75cbbe:L75cbbe:{c.instructions+=5;NFSU2_TR(0x75cbbe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B75cbc0:{NFSU2_TR(0x75cbc0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B75cbc2:{NFSU2_TR(0x75cbc2);
{u32 ea_=u32(u32(8496336u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B75cbc8:{NFSU2_TR(0x75cbc8);
w4(R+0,u32(0x1ull));
}
B75cbcd:{NFSU2_TR(0x75cbcd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ca85u);}goto L75ca85;}
}
B75cbd2:L75cbd2:{c.instructions+=7;NFSU2_TR(0x75cbd2);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B75cbd4:{NFSU2_TR(0x75cbd4);
__asm__ volatile(".byte 0xd9,0xfc":::"memory");
}
B75cbd6:{NFSU2_TR(0x75cbd6);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B75cbd8:{NFSU2_TR(0x75cbd8);
w1(R+4,u8(0x0ull));
}
B75cbda:{NFSU2_TR(0x75cbda);
{u32 ax_;__asm__ volatile(".byte 0x9b,0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B75cbdd:{NFSU2_TR(0x75cbdd);
u8 U[5];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x80ull))));
w1(R+519,u8((r1(U+0))!=(u8(0x0ull))));
w1(U+1,u8(u32(r1(R+1))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+1))!=(u8(0x0ull))));
w1(U+2,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+516,u8((r1(U+2))!=(u8(0x0ull))));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x4ull))));
w1(R+514,u8((r1(U+3))!=(u8(0x0ull))));
w1(U+4,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+512,u8((r1(U+4))!=(u8(0x0ull))));
}
B75cbde:{NFSU2_TR(0x75cbde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75cbf7;}}
}
B75cbe0:L75cbe0:{c.instructions+=8;NFSU2_TR(0x75cbe0);
{u32 ea_=u32(u32(8494208u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B75cbe6:{NFSU2_TR(0x75cbe6);
w1(R+523,scarry<u8>(r1(R+4),u8(0x1ull)));
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
}
B75cbe8:{NFSU2_TR(0x75cbe8);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B75cbea:{NFSU2_TR(0x75cbea);
__asm__ volatile(".byte 0xd9,0xfc":::"memory");
}
B75cbec:{NFSU2_TR(0x75cbec);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B75cbee:{NFSU2_TR(0x75cbee);
{u32 ax_;__asm__ volatile(".byte 0x9b,0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B75cbf1:{NFSU2_TR(0x75cbf1);
u8 U[5];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x80ull))));
w1(R+519,u8((r1(U+0))!=(u8(0x0ull))));
w1(U+1,u8(u32(r1(R+1))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+1))!=(u8(0x0ull))));
w1(U+2,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+516,u8((r1(U+2))!=(u8(0x0ull))));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x4ull))));
w1(R+514,u8((r1(U+3))!=(u8(0x0ull))));
w1(U+4,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+512,u8((r1(U+4))!=(u8(0x0ull))));
}
B75cbf2:{NFSU2_TR(0x75cbf2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75cbf6;}}
}
B75cbf4:L75cbf4:{c.instructions+=1;NFSU2_TR(0x75cbf4);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+4),u8(0x1ull)));
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75cbf6:L75cbf6:{c.instructions+=1;NFSU2_TR(0x75cbf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75cbf7:L75cbf7:{c.instructions+=2;NFSU2_TR(0x75cbf7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B75cbf9:{NFSU2_TR(0x75cbf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75cc00:L75cc00:{c.instructions+=7;NFSU2_TR(0x75cc00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75cc04:{NFSU2_TR(0x75cc04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cc05:{NFSU2_TR(0x75cc05);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75cc09:{NFSU2_TR(0x75cc09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cc0a:{NFSU2_TR(0x75cc0a);
__builtin_memmove((R+28),(R+0),4);
}
B75cc0c:{NFSU2_TR(0x75cc0c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B75cc0e:{NFSU2_TR(0x75cc0e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75cc6a;}}
}
B75cc10:L75cc10:{c.instructions+=2;NFSU2_TR(0x75cc10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cc11:{NFSU2_TR(0x75cc11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cc12:L75cc12:{c.instructions+=4;NFSU2_TR(0x75cc12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B75cc15:{NFSU2_TR(0x75cc15);
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
B75cc17:{NFSU2_TR(0x75cc17);
__builtin_memmove((R+12),(R+4),4);
}
B75cc19:{NFSU2_TR(0x75cc19);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L75cc39;}}
}
B75cc1b:L75cc1b:{c.instructions+=1;NFSU2_TR(0x75cc1b);
{goto L75cc20;}
}
B75cc20:L75cc20:{c.instructions+=3;NFSU2_TR(0x75cc20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cc21:{NFSU2_TR(0x75cc21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cc22:{NFSU2_TR(0x75cc22);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75cc26ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75cc26:L75cc26:{c.instructions+=3;NFSU2_TR(0x75cc26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B75cc29:{NFSU2_TR(0x75cc29);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75cc2b:{NFSU2_TR(0x75cc2b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75cc2f;}}
}
B75cc2d:L75cc2d:{c.instructions+=1;NFSU2_TR(0x75cc2d);
__builtin_memmove((R+12),(R+24),4);
}
B75cc2f:L75cc2f:{c.instructions+=3;NFSU2_TR(0x75cc2f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B75cc31:{NFSU2_TR(0x75cc31);
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
B75cc33:{NFSU2_TR(0x75cc33);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cc20u);}goto L75cc20;}}
}
B75cc35:L75cc35:{c.instructions+=1;NFSU2_TR(0x75cc35);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75cc39:L75cc39:{c.instructions+=3;NFSU2_TR(0x75cc39);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75cc3b:{NFSU2_TR(0x75cc3b);
__builtin_memmove((R+0),(R+28),4);
}
B75cc3d:{NFSU2_TR(0x75cc3d);
if(r1(R+518)){{goto L75cc62;}}
}
B75cc3f:L75cc3f:{c.instructions+=2;NFSU2_TR(0x75cc3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75cc41:{NFSU2_TR(0x75cc41);
if(r1(R+518)){{goto L75cc62;}}
}
B75cc43:L75cc43:{c.instructions+=4;NFSU2_TR(0x75cc43);
__builtin_memmove((R+4),(R+12),4);
}
B75cc45:{NFSU2_TR(0x75cc45);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B75cc47:{NFSU2_TR(0x75cc47);
__builtin_memmove((R+24),(R+20),4);
}
B75cc49:{NFSU2_TR(0x75cc49);
__builtin_memmove((R+16),(R+16),4);
}
B75cc50:L75cc50:{c.instructions+=7;NFSU2_TR(0x75cc50);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B75cc52:{NFSU2_TR(0x75cc52);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B75cc55:{NFSU2_TR(0x75cc55);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B75cc58:{NFSU2_TR(0x75cc58);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B75cc5a:{NFSU2_TR(0x75cc5a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75cc5b:{NFSU2_TR(0x75cc5b);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B75cc5c:{NFSU2_TR(0x75cc5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cc50u);}goto L75cc50;}}
}
B75cc5e:L75cc5e:{c.instructions+=1;NFSU2_TR(0x75cc5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75cc62:L75cc62:{c.instructions+=3;NFSU2_TR(0x75cc62);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+20))));
}
B75cc64:{NFSU2_TR(0x75cc64);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B75cc66:{NFSU2_TR(0x75cc66);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cc12u);}goto L75cc12;}}
}
B75cc68:L75cc68:{c.instructions+=2;NFSU2_TR(0x75cc68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75cc69:{NFSU2_TR(0x75cc69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75cc6a:L75cc6a:{c.instructions+=3;NFSU2_TR(0x75cc6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75cc6b:{NFSU2_TR(0x75cc6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75cc6c:{NFSU2_TR(0x75cc6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75cc70:L75cc70:{c.instructions+=4;NFSU2_TR(0x75cc70);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75cc74:{NFSU2_TR(0x75cc74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B75cc7a:{NFSU2_TR(0x75cc7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B75cc7d:{NFSU2_TR(0x75cc7d);
if(r1(R+512)){{goto L75ceec;}}
}
B75cc83:L75cc83:{c.instructions+=7;NFSU2_TR(0x75cc83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cc84:{NFSU2_TR(0x75cc84);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cc85:{NFSU2_TR(0x75cc85);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75cc8c:{NFSU2_TR(0x75cc8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75cc8e:{NFSU2_TR(0x75cc8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cc8f:{NFSU2_TR(0x75cc8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cc90:{NFSU2_TR(0x75cc90);
if(r1(R+518)){{goto L75cee8;}}
}
B75cc96:L75cc96:{c.instructions+=7;NFSU2_TR(0x75cc96);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75cc9d:{NFSU2_TR(0x75cc9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B75cca0:{NFSU2_TR(0x75cca0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B75cca3:{NFSU2_TR(0x75cca3);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B75cca5:{NFSU2_TR(0x75cca5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75ccad:{NFSU2_TR(0x75ccad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ccb1:{NFSU2_TR(0x75ccb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ccb5:L75ccb5:{c.instructions+=7;NFSU2_TR(0x75ccb5);
__builtin_memmove((R+0),(R+24),4);
}
B75ccb7:{NFSU2_TR(0x75ccb7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B75ccb9:{NFSU2_TR(0x75ccb9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B75ccbb:{NFSU2_TR(0x75ccbb);
u8 U[56];
w8(U+0,u64(r4(R+20)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75ccbb);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75ccbb);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B75ccbd:{NFSU2_TR(0x75ccbd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75ccbe:{NFSU2_TR(0x75ccbe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75ccc1:{NFSU2_TR(0x75ccc1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L75ccff;}}
}
B75ccc3:L75ccc3:{c.instructions+=6;NFSU2_TR(0x75ccc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75ccca:{NFSU2_TR(0x75ccca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cccb:{NFSU2_TR(0x75cccb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cccc:{NFSU2_TR(0x75cccc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cccd:{NFSU2_TR(0x75cccd);
__builtin_memmove((R+0),(R+24),4);
}
B75cccf:{NFSU2_TR(0x75cccf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ccd4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cc00u);}goto L75cc00;}
}
B75ccd4:L75ccd4:{c.instructions+=1;NFSU2_TR(0x75ccd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75ccd7:L75ccd7:{c.instructions+=4;NFSU2_TR(0x75ccd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75ccdb:{NFSU2_TR(0x75ccdb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B75ccdc:{NFSU2_TR(0x75ccdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75cce0:{NFSU2_TR(0x75cce0);
if(r1(R+519)){{goto L75cee8;}}
}
B75cce6:L75cce6:{c.instructions+=7;NFSU2_TR(0x75cce6);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B75ccea:{NFSU2_TR(0x75ccea);
u8 U[16];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75ccf1:{NFSU2_TR(0x75ccf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ccf5:{NFSU2_TR(0x75ccf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ccf9:{NFSU2_TR(0x75ccf9);
__builtin_memmove((R+12),(R+8),4);
}
B75ccfb:{NFSU2_TR(0x75ccfb);
__builtin_memmove((R+24),(R+0),4);
}
B75ccfd:{NFSU2_TR(0x75ccfd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ccb5u);}goto L75ccb5;}
}
B75ccff:L75ccff:{c.instructions+=7;NFSU2_TR(0x75ccff);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B75cd01:{NFSU2_TR(0x75cd01);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B75cd04:{NFSU2_TR(0x75cd04);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75cd06:{NFSU2_TR(0x75cd06);
__builtin_memmove((R+28),(R+0),4);
}
B75cd08:{NFSU2_TR(0x75cd08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cd09:{NFSU2_TR(0x75cd09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cd0a:{NFSU2_TR(0x75cd0a);
u8 U[12];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75cd11ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75cd11:L75cd11:{c.instructions+=3;NFSU2_TR(0x75cd11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B75cd14:{NFSU2_TR(0x75cd14);
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
B75cd16:{NFSU2_TR(0x75cd16);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75cd3a;}}
}
B75cd18:L75cd18:{c.instructions+=3;NFSU2_TR(0x75cd18);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B75cd1a:{NFSU2_TR(0x75cd1a);
__builtin_memmove((R+0),(R+28),4);
}
B75cd1c:{NFSU2_TR(0x75cd1c);
if(r1(R+518)){{goto L75cd3a;}}
}
B75cd1e:L75cd1e:{c.instructions+=3;NFSU2_TR(0x75cd1e);
__builtin_memmove((R+4),(R+12),4);
}
B75cd20:{NFSU2_TR(0x75cd20);
w1(R+512,u8((r4(R+4))<(r4(R+28))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B75cd22:{NFSU2_TR(0x75cd22);
__builtin_memmove((R+24),(R+20),4);
}
B75cd24:L75cd24:{c.instructions+=7;NFSU2_TR(0x75cd24);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B75cd26:{NFSU2_TR(0x75cd26);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B75cd29:{NFSU2_TR(0x75cd29);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B75cd2c:{NFSU2_TR(0x75cd2c);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B75cd2e:{NFSU2_TR(0x75cd2e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75cd2f:{NFSU2_TR(0x75cd2f);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75cd30:{NFSU2_TR(0x75cd30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cd24u);}goto L75cd24;}}
}
B75cd32:L75cd32:{c.instructions+=2;NFSU2_TR(0x75cd32);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75cd36:{NFSU2_TR(0x75cd36);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75cd3a:L75cd3a:{c.instructions+=3;NFSU2_TR(0x75cd3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cd3b:{NFSU2_TR(0x75cd3b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cd3c:{NFSU2_TR(0x75cd3c);
u8 U[12];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75cd43ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75cd43:L75cd43:{c.instructions+=3;NFSU2_TR(0x75cd43);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B75cd46:{NFSU2_TR(0x75cd46);
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
B75cd48:{NFSU2_TR(0x75cd48);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75cd6c;}}
}
B75cd4a:L75cd4a:{c.instructions+=3;NFSU2_TR(0x75cd4a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B75cd4c:{NFSU2_TR(0x75cd4c);
__builtin_memmove((R+0),(R+24),4);
}
B75cd4e:{NFSU2_TR(0x75cd4e);
if(r1(R+518)){{goto L75cd6c;}}
}
B75cd50:L75cd50:{c.instructions+=3;NFSU2_TR(0x75cd50);
__builtin_memmove((R+4),(R+12),4);
}
B75cd52:{NFSU2_TR(0x75cd52);
w1(R+512,u8((r4(R+4))<(r4(R+24))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B75cd54:{NFSU2_TR(0x75cd54);
__builtin_memmove((R+24),(R+20),4);
}
B75cd56:L75cd56:{c.instructions+=7;NFSU2_TR(0x75cd56);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B75cd58:{NFSU2_TR(0x75cd58);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B75cd5b:{NFSU2_TR(0x75cd5b);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B75cd5e:{NFSU2_TR(0x75cd5e);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B75cd60:{NFSU2_TR(0x75cd60);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75cd61:{NFSU2_TR(0x75cd61);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75cd62:{NFSU2_TR(0x75cd62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cd56u);}goto L75cd56;}}
}
B75cd64:L75cd64:{c.instructions+=2;NFSU2_TR(0x75cd64);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75cd68:{NFSU2_TR(0x75cd68);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75cd6c:L75cd6c:{c.instructions+=3;NFSU2_TR(0x75cd6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cd6d:{NFSU2_TR(0x75cd6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cd6e:{NFSU2_TR(0x75cd6e);
u8 U[12];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75cd75ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75cd75:L75cd75:{c.instructions+=3;NFSU2_TR(0x75cd75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B75cd78:{NFSU2_TR(0x75cd78);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75cd7a:{NFSU2_TR(0x75cd7a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75cd9a;}}
}
B75cd7c:L75cd7c:{c.instructions+=3;NFSU2_TR(0x75cd7c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75cd7e:{NFSU2_TR(0x75cd7e);
__builtin_memmove((R+0),(R+24),4);
}
B75cd80:{NFSU2_TR(0x75cd80);
if(r1(R+518)){{goto L75cd9a;}}
}
B75cd82:L75cd82:{c.instructions+=3;NFSU2_TR(0x75cd82);
__builtin_memmove((R+4),(R+28),4);
}
B75cd84:{NFSU2_TR(0x75cd84);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B75cd86:{NFSU2_TR(0x75cd86);
__builtin_memmove((R+24),(R+20),4);
}
B75cd88:L75cd88:{c.instructions+=7;NFSU2_TR(0x75cd88);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+12),(U+0),1);
}
B75cd8a:{NFSU2_TR(0x75cd8a);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B75cd8d:{NFSU2_TR(0x75cd8d);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B75cd90:{NFSU2_TR(0x75cd90);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B75cd92:{NFSU2_TR(0x75cd92);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75cd93:{NFSU2_TR(0x75cd93);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B75cd94:{NFSU2_TR(0x75cd94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cd88u);}goto L75cd88;}}
}
B75cd96:L75cd96:{c.instructions+=1;NFSU2_TR(0x75cd96);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75cd9a:L75cd9a:{c.instructions+=2;NFSU2_TR(0x75cd9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75cd9e:{NFSU2_TR(0x75cd9e);
__builtin_memmove((R+28),(R+28),4);
}
B75cda0:L75cda0:{c.instructions+=2;NFSU2_TR(0x75cda0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75cda2:{NFSU2_TR(0x75cda2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75cdc0;}}
}
B75cda4:L75cda4:{c.instructions+=3;NFSU2_TR(0x75cda4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+20))));
}
B75cda6:{NFSU2_TR(0x75cda6);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B75cda8:{NFSU2_TR(0x75cda8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75cdc0;}}
}
B75cdaa:L75cdaa:{c.instructions+=3;NFSU2_TR(0x75cdaa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cdab:{NFSU2_TR(0x75cdab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cdac:{NFSU2_TR(0x75cdac);
u8 U[12];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75cdb3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75cdb3:L75cdb3:{c.instructions+=3;NFSU2_TR(0x75cdb3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B75cdb6:{NFSU2_TR(0x75cdb6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75cdb8:{NFSU2_TR(0x75cdb8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cda4u);}goto L75cda4;}}
}
B75cdba:L75cdba:{c.instructions+=2;NFSU2_TR(0x75cdba);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75cdbc:{NFSU2_TR(0x75cdbc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L75cde0;}}
}
B75cdbe:L75cdbe:{c.instructions+=1;NFSU2_TR(0x75cdbe);
__builtin_memmove((R+28),(R+28),4);
}
B75cdc0:L75cdc0:{c.instructions+=4;NFSU2_TR(0x75cdc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75cdc4:{NFSU2_TR(0x75cdc4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+20))));
}
B75cdc6:{NFSU2_TR(0x75cdc6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B75cdc8:{NFSU2_TR(0x75cdc8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L75cde0;}}
}
B75cdca:L75cdca:{c.instructions+=3;NFSU2_TR(0x75cdca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cdcb:{NFSU2_TR(0x75cdcb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cdcc:{NFSU2_TR(0x75cdcc);
u8 U[12];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75cdd3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75cdd3:L75cdd3:{c.instructions+=3;NFSU2_TR(0x75cdd3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B75cdd6:{NFSU2_TR(0x75cdd6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75cdd8:{NFSU2_TR(0x75cdd8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cdc0u);}goto L75cdc0;}}
}
B75cdda:L75cdda:{c.instructions+=1;NFSU2_TR(0x75cdda);
__builtin_memmove((R+12),(R+12),4);
}
B75cde0:L75cde0:{c.instructions+=3;NFSU2_TR(0x75cde0);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+20))));
}
B75cde2:{NFSU2_TR(0x75cde2);
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
B75cde4:{NFSU2_TR(0x75cde4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75cdf6;}}
}
B75cde6:L75cde6:{c.instructions+=3;NFSU2_TR(0x75cde6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cde7:{NFSU2_TR(0x75cde7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cde8:{NFSU2_TR(0x75cde8);
u8 U[12];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75cdefull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75cdef:L75cdef:{c.instructions+=3;NFSU2_TR(0x75cdef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B75cdf2:{NFSU2_TR(0x75cdf2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75cdf4:{NFSU2_TR(0x75cdf4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cde0u);}goto L75cde0;}}
}
B75cdf6:L75cdf6:{c.instructions+=2;NFSU2_TR(0x75cdf6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75cdf8:{NFSU2_TR(0x75cdf8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L75ce3c;}}
}
B75cdfa:L75cdfa:{c.instructions+=2;NFSU2_TR(0x75cdfa);
__builtin_memmove((R+0),(R+24),4);
}
B75cdfc:{NFSU2_TR(0x75cdfc);
if(r1(R+518)){{goto L75ce2d;}}
}
B75cdfe:L75cdfe:{c.instructions+=5;NFSU2_TR(0x75cdfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75ce05:{NFSU2_TR(0x75ce05);
__builtin_memmove((R+20),(R+12),4);
}
B75ce07:{NFSU2_TR(0x75ce07);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+24))));
}
B75ce09:{NFSU2_TR(0x75ce09);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ce0d:{NFSU2_TR(0x75ce0d);
__builtin_memmove((R+4),(R+4),4);
}
B75ce10:L75ce10:{c.instructions+=9;NFSU2_TR(0x75ce10);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B75ce13:{NFSU2_TR(0x75ce13);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B75ce15:{NFSU2_TR(0x75ce15);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B75ce18:{NFSU2_TR(0x75ce18);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B75ce1a:{NFSU2_TR(0x75ce1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75ce1e:{NFSU2_TR(0x75ce1e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75ce1f:{NFSU2_TR(0x75ce1f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B75ce20:{NFSU2_TR(0x75ce20);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ce24:{NFSU2_TR(0x75ce24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ce10u);}goto L75ce10;}}
}
B75ce26:L75ce26:{c.instructions+=1;NFSU2_TR(0x75ce26);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B75ce2d:L75ce2d:{c.instructions+=2;NFSU2_TR(0x75ce2d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75ce2f:{NFSU2_TR(0x75ce2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cda0u);}goto L75cda0;}}
}
B75ce35:L75ce35:{c.instructions+=2;NFSU2_TR(0x75ce35);
__builtin_memmove((R+28),(R+12),4);
}
B75ce37:{NFSU2_TR(0x75ce37);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cda0u);}goto L75cda0;}
}
B75ce3c:L75ce3c:{c.instructions+=3;NFSU2_TR(0x75ce3c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B75ce3e:{NFSU2_TR(0x75ce3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B75ce40:{NFSU2_TR(0x75ce40);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75ce60;}}
}
B75ce42:L75ce42:{c.instructions+=3;NFSU2_TR(0x75ce42);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+20))));
}
B75ce44:{NFSU2_TR(0x75ce44);
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
B75ce46:{NFSU2_TR(0x75ce46);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75ce60;}}
}
B75ce48:L75ce48:{c.instructions+=3;NFSU2_TR(0x75ce48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ce49:{NFSU2_TR(0x75ce49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ce4a:{NFSU2_TR(0x75ce4a);
u8 U[12];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ce51ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75ce51:L75ce51:{c.instructions+=3;NFSU2_TR(0x75ce51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B75ce54:{NFSU2_TR(0x75ce54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75ce56:{NFSU2_TR(0x75ce56);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ce42u);}goto L75ce42;}}
}
B75ce58:L75ce58:{c.instructions+=2;NFSU2_TR(0x75ce58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B75ce5a:{NFSU2_TR(0x75ce5a);
if(r1(R+512)){{goto L75ce7a;}}
}
B75ce5c:L75ce5c:{c.instructions+=1;NFSU2_TR(0x75ce5c);
__builtin_memmove((R+16),(R+16),4);
}
B75ce60:L75ce60:{c.instructions+=4;NFSU2_TR(0x75ce60);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75ce64:{NFSU2_TR(0x75ce64);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+20))));
}
B75ce66:{NFSU2_TR(0x75ce66);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B75ce68:{NFSU2_TR(0x75ce68);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75ce7e;}}
}
B75ce6a:L75ce6a:{c.instructions+=3;NFSU2_TR(0x75ce6a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ce6b:{NFSU2_TR(0x75ce6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ce6c:{NFSU2_TR(0x75ce6c);
u8 U[12];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ce73ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75ce73:L75ce73:{c.instructions+=3;NFSU2_TR(0x75ce73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B75ce76:{NFSU2_TR(0x75ce76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75ce78:{NFSU2_TR(0x75ce78);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ce60u);}goto L75ce60;}}
}
B75ce7a:L75ce7a:{c.instructions+=1;NFSU2_TR(0x75ce7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75ce7e:L75ce7e:{c.instructions+=7;NFSU2_TR(0x75ce7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75ce82:{NFSU2_TR(0x75ce82);
__builtin_memmove((R+4),(R+8),4);
}
B75ce84:{NFSU2_TR(0x75ce84);
__builtin_memmove((R+28),(R+24),4);
}
B75ce86:{NFSU2_TR(0x75ce86);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B75ce88:{NFSU2_TR(0x75ce88);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B75ce8a:{NFSU2_TR(0x75ce8a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75ce8c:{NFSU2_TR(0x75ce8c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75cebb;}}
}
B75ce8e:L75ce8e:{c.instructions+=2;NFSU2_TR(0x75ce8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B75ce90:{NFSU2_TR(0x75ce90);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75cea6;}}
}
B75ce92:L75ce92:{c.instructions+=5;NFSU2_TR(0x75ce92);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75ce96:{NFSU2_TR(0x75ce96);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75ce9a:{NFSU2_TR(0x75ce9a);
u8 U[16];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75cea1:{NFSU2_TR(0x75cea1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B75cea2:{NFSU2_TR(0x75cea2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75cea6:L75cea6:{c.instructions+=2;NFSU2_TR(0x75cea6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B75cea8:{NFSU2_TR(0x75cea8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ccd7u);}goto L75ccd7;}}
}
B75ceae:L75ceae:{c.instructions+=3;NFSU2_TR(0x75ceae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75ceb2:{NFSU2_TR(0x75ceb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ceb6:{NFSU2_TR(0x75ceb6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ccb5u);}goto L75ccb5;}
}
B75cebb:L75cebb:{c.instructions+=2;NFSU2_TR(0x75cebb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B75cebd:{NFSU2_TR(0x75cebd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75ced3;}}
}
B75cebf:L75cebf:{c.instructions+=5;NFSU2_TR(0x75cebf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75cec3:{NFSU2_TR(0x75cec3);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75cec7:{NFSU2_TR(0x75cec7);
u8 U[16];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75cece:{NFSU2_TR(0x75cece);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B75cecf:{NFSU2_TR(0x75cecf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ced3:L75ced3:{c.instructions+=2;NFSU2_TR(0x75ced3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B75ced5:{NFSU2_TR(0x75ced5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ccd7u);}goto L75ccd7;}}
}
B75cedb:L75cedb:{c.instructions+=3;NFSU2_TR(0x75cedb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75cedf:{NFSU2_TR(0x75cedf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75cee3:{NFSU2_TR(0x75cee3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75ccb5u);}goto L75ccb5;}
}
B75cee8:L75cee8:{c.instructions+=4;NFSU2_TR(0x75cee8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75cee9:{NFSU2_TR(0x75cee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75ceea:{NFSU2_TR(0x75ceea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75ceeb:{NFSU2_TR(0x75ceeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75ceec:L75ceec:{c.instructions+=2;NFSU2_TR(0x75ceec);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75cef2:{NFSU2_TR(0x75cef2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75cf00:L75cf00:{c.instructions+=3;NFSU2_TR(0x75cf00);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B75cf03:{NFSU2_TR(0x75cf03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75cf04:{NFSU2_TR(0x75cf04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75cf10:L75cf10:{c.instructions+=8;NFSU2_TR(0x75cf10);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75cf12:{NFSU2_TR(0x75cf12);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75cf16:{NFSU2_TR(0x75cf16);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cf17:{NFSU2_TR(0x75cf17);
__builtin_memmove((R+12),(R+0),4);
}
B75cf19:{NFSU2_TR(0x75cf19);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B75cf1c:{NFSU2_TR(0x75cf1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75cf20:{NFSU2_TR(0x75cf20);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75cf26:{NFSU2_TR(0x75cf26);
if(r1(R+518)){{goto L75cf3d;}}
}
B75cf28:L75cf28:{c.instructions+=4;NFSU2_TR(0x75cf28);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B75cf2a:{NFSU2_TR(0x75cf2a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B75cf2d:{NFSU2_TR(0x75cf2d);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75cf2f:{NFSU2_TR(0x75cf2f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cf00u);}goto L75cf00;}}
}
B75cf31:L75cf31:{c.instructions+=2;NFSU2_TR(0x75cf31);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75cf33:{NFSU2_TR(0x75cf33);
if(r1(R+518)){{goto L75cf86;}}
}
B75cf35:L75cf35:{c.instructions+=2;NFSU2_TR(0x75cf35);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75cf3b:{NFSU2_TR(0x75cf3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cf28u);}goto L75cf28;}}
}
B75cf3d:L75cf3d:{c.instructions+=6;NFSU2_TR(0x75cf3d);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B75cf3f:{NFSU2_TR(0x75cf3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cf40:{NFSU2_TR(0x75cf40);
__builtin_memmove((R+0),(R+12),4);
}
B75cf42:{NFSU2_TR(0x75cf42);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B75cf45:{NFSU2_TR(0x75cf45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cf46:{NFSU2_TR(0x75cf46);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B75cf48:L75cf48:{c.instructions+=14;NFSU2_TR(0x75cf48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B75cf4a:{NFSU2_TR(0x75cf4a);
w4(R+28,u32(0x7efefeffull));
}
B75cf4f:{NFSU2_TR(0x75cf4f);
__builtin_memmove((R+0),(R+4),4);
}
B75cf51:{NFSU2_TR(0x75cf51);
__builtin_memmove((R+24),(R+28),4);
}
B75cf53:{NFSU2_TR(0x75cf53);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+12))));
}
B75cf55:{NFSU2_TR(0x75cf55);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B75cf57:{NFSU2_TR(0x75cf57);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B75cf59:{NFSU2_TR(0x75cf59);
w4(R+4,u32(u32(r4(R+4))^u32(u32(0xffffffffull))));
}
B75cf5c:{NFSU2_TR(0x75cf5c);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0xffffffffull))));
}
B75cf5f:{NFSU2_TR(0x75cf5f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+28))));
}
B75cf61:{NFSU2_TR(0x75cf61);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+24))));
}
B75cf63:{NFSU2_TR(0x75cf63);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B75cf66:{NFSU2_TR(0x75cf66);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x81010100ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B75cf6c:{NFSU2_TR(0x75cf6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75cf8a;}}
}
B75cf6e:L75cf6e:{c.instructions+=2;NFSU2_TR(0x75cf6e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x81010100ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B75cf73:{NFSU2_TR(0x75cf73);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cf48u);}goto L75cf48;}}
}
B75cf75:L75cf75:{c.instructions+=2;NFSU2_TR(0x75cf75);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1010100ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B75cf7a:{NFSU2_TR(0x75cf7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75cf84;}}
}
B75cf7c:L75cf7c:{c.instructions+=2;NFSU2_TR(0x75cf7c);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x80000000ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B75cf82:{NFSU2_TR(0x75cf82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cf48u);}goto L75cf48;}}
}
B75cf84:L75cf84:{c.instructions+=2;NFSU2_TR(0x75cf84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75cf85:{NFSU2_TR(0x75cf85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75cf86:L75cf86:{c.instructions+=3;NFSU2_TR(0x75cf86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75cf87:{NFSU2_TR(0x75cf87);
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
B75cf89:{NFSU2_TR(0x75cf89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75cf8a:L75cf8a:{c.instructions+=3;NFSU2_TR(0x75cf8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75cf8d:{NFSU2_TR(0x75cf8d);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75cf8f:{NFSU2_TR(0x75cf8f);
if(r1(R+518)){{goto L75cfc7;}}
}
B75cf91:L75cf91:{c.instructions+=2;NFSU2_TR(0x75cf91);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75cf93:{NFSU2_TR(0x75cf93);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cf84u);}goto L75cf84;}}
}
B75cf95:L75cf95:{c.instructions+=2;NFSU2_TR(0x75cf95);
u8 U[5];
__builtin_memmove((U+3),(R+1),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75cf97:{NFSU2_TR(0x75cf97);
if(r1(R+518)){{goto L75cfc0;}}
}
B75cf99:L75cf99:{c.instructions+=2;NFSU2_TR(0x75cf99);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(r1(R+1))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75cf9b:{NFSU2_TR(0x75cf9b);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cf84u);}goto L75cf84;}}
}
B75cf9d:L75cf9d:{c.instructions+=3;NFSU2_TR(0x75cf9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75cfa0:{NFSU2_TR(0x75cfa0);
u8 U[5];
__builtin_memmove((U+3),(R+0),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75cfa2:{NFSU2_TR(0x75cfa2);
if(r1(R+518)){{goto L75cfb9;}}
}
B75cfa4:L75cfa4:{c.instructions+=2;NFSU2_TR(0x75cfa4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75cfa6:{NFSU2_TR(0x75cfa6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cf84u);}goto L75cf84;}}
}
B75cfa8:L75cfa8:{c.instructions+=2;NFSU2_TR(0x75cfa8);
u8 U[5];
__builtin_memmove((U+3),(R+1),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75cfaa:{NFSU2_TR(0x75cfaa);
if(r1(R+518)){{goto L75cfb2;}}
}
B75cfac:L75cfac:{c.instructions+=2;NFSU2_TR(0x75cfac);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(r1(R+1))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75cfae:{NFSU2_TR(0x75cfae);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cf84u);}goto L75cf84;}}
}
B75cfb0:L75cfb0:{c.instructions+=1;NFSU2_TR(0x75cfb0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75cf48u);}goto L75cf48;}
}
B75cfb2:L75cfb2:{c.instructions+=5;NFSU2_TR(0x75cfb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75cfb3:{NFSU2_TR(0x75cfb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75cfb4:{NFSU2_TR(0x75cfb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B75cfb7:{NFSU2_TR(0x75cfb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75cfb8:{NFSU2_TR(0x75cfb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75cfb9:L75cfb9:{c.instructions+=5;NFSU2_TR(0x75cfb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B75cfbc:{NFSU2_TR(0x75cfbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75cfbd:{NFSU2_TR(0x75cfbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75cfbe:{NFSU2_TR(0x75cfbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75cfbf:{NFSU2_TR(0x75cfbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75cfc0:L75cfc0:{c.instructions+=5;NFSU2_TR(0x75cfc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffdull))));
__builtin_memmove((R+0),(U+0),4);
}
B75cfc3:{NFSU2_TR(0x75cfc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75cfc4:{NFSU2_TR(0x75cfc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75cfc5:{NFSU2_TR(0x75cfc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75cfc6:{NFSU2_TR(0x75cfc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75cfc7:L75cfc7:{c.instructions+=5;NFSU2_TR(0x75cfc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B75cfca:{NFSU2_TR(0x75cfca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75cfcb:{NFSU2_TR(0x75cfcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75cfcc:{NFSU2_TR(0x75cfcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75cfcd:{NFSU2_TR(0x75cfcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75cfd0:L75cfd0:{c.instructions+=12;NFSU2_TR(0x75cfd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cfd1:{NFSU2_TR(0x75cfd1);
__builtin_memmove((R+20),(R+16),4);
}
B75cfd3:{NFSU2_TR(0x75cfd3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cfd4:{NFSU2_TR(0x75cfd4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75cfd5:{NFSU2_TR(0x75cfd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75cfd8:{NFSU2_TR(0x75cfd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75cfdb:{NFSU2_TR(0x75cfdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75cfde:{NFSU2_TR(0x75cfde);
__builtin_memmove((R+0),(R+4),4);
}
B75cfe0:{NFSU2_TR(0x75cfe0);
__builtin_memmove((R+8),(R+4),4);
}
B75cfe2:{NFSU2_TR(0x75cfe2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B75cfe4:{NFSU2_TR(0x75cfe4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75cfe6:{NFSU2_TR(0x75cfe6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75cff0;}}
}
B75cfe8:L75cfe8:{c.instructions+=2;NFSU2_TR(0x75cfe8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B75cfea:{NFSU2_TR(0x75cfea);
if(r1(R+512)){TAIL_STATIC(0x75d16cu,75d);}
}
B75cff0:L75cff0:{c.instructions+=2;NFSU2_TR(0x75cff0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75cff6:{NFSU2_TR(0x75cff6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x75d00cu,75d);}
}
B75cff8:L75cff8:{c.instructions+=3;NFSU2_TR(0x75cff8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75cffb:{NFSU2_TR(0x75cffb);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B75cffe:{NFSU2_TR(0x75cffe);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
TAIL_STATIC(0x75d001u,75d);
}
XIT:NFSU2_TR_EXIT(0x75c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
