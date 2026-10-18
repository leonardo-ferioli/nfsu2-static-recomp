#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_49b(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x49a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x49a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_49a(u8* __restrict R,Cpu& c);
u32 page_49a(Cpu& c){return body_49a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_49a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x49a000:goto L49a000;
case 0x49a005:goto L49a005;
case 0x49a006:c.instructions+=2;goto B49a006;
case 0x49a00b:c.instructions+=1;goto B49a00b;
case 0x49a010:goto L49a010;
case 0x49a015:goto L49a015;
case 0x49a01a:c.instructions+=1;goto B49a01a;
case 0x49a01f:goto L49a01f;
case 0x49a022:c.instructions+=5;goto B49a022;
case 0x49a025:c.instructions+=4;goto B49a025;
case 0x49a026:c.instructions+=3;goto B49a026;
case 0x49a028:c.instructions+=2;goto B49a028;
case 0x49a029:c.instructions+=1;goto B49a029;
case 0x49a02e:goto L49a02e;
case 0x49a031:c.instructions+=6;goto B49a031;
case 0x49a033:c.instructions+=5;goto B49a033;
case 0x49a038:c.instructions+=4;goto B49a038;
case 0x49a03d:c.instructions+=3;goto B49a03d;
case 0x49a03e:c.instructions+=2;goto B49a03e;
case 0x49a041:c.instructions+=1;goto B49a041;
case 0x49a046:goto L49a046;
case 0x49a049:c.instructions+=3;goto B49a049;
case 0x49a04a:c.instructions+=2;goto B49a04a;
case 0x49a04b:c.instructions+=1;goto B49a04b;
case 0x49a050:goto L49a050;
case 0x49a051:c.instructions+=6;goto B49a051;
case 0x49a053:c.instructions+=5;goto B49a053;
case 0x49a056:c.instructions+=4;goto B49a056;
case 0x49a057:c.instructions+=3;goto B49a057;
case 0x49a05b:c.instructions+=2;goto B49a05b;
case 0x49a05d:c.instructions+=1;goto B49a05d;
case 0x49a063:goto L49a063;
case 0x49a067:c.instructions+=6;goto B49a067;
case 0x49a06a:c.instructions+=5;goto B49a06a;
case 0x49a06c:c.instructions+=4;goto B49a06c;
case 0x49a071:c.instructions+=3;goto B49a071;
case 0x49a072:c.instructions+=2;goto B49a072;
case 0x49a073:c.instructions+=1;goto B49a073;
case 0x49a078:goto L49a078;
case 0x49a07b:c.instructions+=7;goto B49a07b;
case 0x49a07f:c.instructions+=6;goto B49a07f;
case 0x49a082:c.instructions+=5;goto B49a082;
case 0x49a084:c.instructions+=4;goto B49a084;
case 0x49a089:c.instructions+=3;goto B49a089;
case 0x49a08a:c.instructions+=2;goto B49a08a;
case 0x49a08b:c.instructions+=1;goto B49a08b;
case 0x49a090:goto L49a090;
case 0x49a093:c.instructions+=6;goto B49a093;
case 0x49a097:c.instructions+=5;goto B49a097;
case 0x49a09a:c.instructions+=4;goto B49a09a;
case 0x49a09c:c.instructions+=3;goto B49a09c;
case 0x49a09d:c.instructions+=2;goto B49a09d;
case 0x49a09e:c.instructions+=1;goto B49a09e;
case 0x49a0a3:goto L49a0a3;
case 0x49a0a6:c.instructions+=6;goto B49a0a6;
case 0x49a0a9:c.instructions+=5;goto B49a0a9;
case 0x49a0ad:c.instructions+=4;goto B49a0ad;
case 0x49a0af:c.instructions+=3;goto B49a0af;
case 0x49a0b0:c.instructions+=2;goto B49a0b0;
case 0x49a0b1:c.instructions+=1;goto B49a0b1;
case 0x49a0b6:goto L49a0b6;
case 0x49a0b9:c.instructions+=5;goto B49a0b9;
case 0x49a0bd:c.instructions+=4;goto B49a0bd;
case 0x49a0c0:c.instructions+=3;goto B49a0c0;
case 0x49a0c1:c.instructions+=2;goto B49a0c1;
case 0x49a0c2:c.instructions+=1;goto B49a0c2;
case 0x49a0c7:goto L49a0c7;
case 0x49a0ca:c.instructions+=8;goto B49a0ca;
case 0x49a0ce:c.instructions+=7;goto B49a0ce;
case 0x49a0d1:c.instructions+=6;goto B49a0d1;
case 0x49a0d4:c.instructions+=5;goto B49a0d4;
case 0x49a0d6:c.instructions+=4;goto B49a0d6;
case 0x49a0db:c.instructions+=3;goto B49a0db;
case 0x49a0dc:c.instructions+=2;goto B49a0dc;
case 0x49a0dd:c.instructions+=1;goto B49a0dd;
case 0x49a0e2:goto L49a0e2;
case 0x49a0e5:c.instructions+=7;goto B49a0e5;
case 0x49a0e9:c.instructions+=6;goto B49a0e9;
case 0x49a0ec:c.instructions+=5;goto B49a0ec;
case 0x49a0ee:c.instructions+=4;goto B49a0ee;
case 0x49a0f3:c.instructions+=3;goto B49a0f3;
case 0x49a0f4:c.instructions+=2;goto B49a0f4;
case 0x49a0f5:c.instructions+=1;goto B49a0f5;
case 0x49a0fa:goto L49a0fa;
case 0x49a0fd:goto L49a0fd;
case 0x49a0fe:c.instructions+=2;goto B49a0fe;
case 0x49a0ff:c.instructions+=1;goto B49a0ff;
case 0x49a110:goto L49a110;
case 0x49a111:c.instructions+=6;goto B49a111;
case 0x49a113:c.instructions+=5;goto B49a113;
case 0x49a119:c.instructions+=4;goto B49a119;
case 0x49a11a:c.instructions+=3;goto B49a11a;
case 0x49a11e:c.instructions+=2;goto B49a11e;
case 0x49a120:c.instructions+=1;goto B49a120;
case 0x49a122:goto L49a122;
case 0x49a125:c.instructions+=1;goto B49a125;
case 0x49a127:goto L49a127;
case 0x49a12e:c.instructions+=6;goto B49a12e;
case 0x49a131:c.instructions+=5;goto B49a131;
case 0x49a133:c.instructions+=4;goto B49a133;
case 0x49a138:c.instructions+=3;goto B49a138;
case 0x49a139:c.instructions+=2;goto B49a139;
case 0x49a13a:c.instructions+=1;goto B49a13a;
case 0x49a13f:goto L49a13f;
case 0x49a142:goto L49a142;
case 0x49a145:c.instructions+=7;goto B49a145;
case 0x49a147:c.instructions+=6;goto B49a147;
case 0x49a14d:c.instructions+=5;goto B49a14d;
case 0x49a154:c.instructions+=4;goto B49a154;
case 0x49a159:c.instructions+=3;goto B49a159;
case 0x49a15a:c.instructions+=2;goto B49a15a;
case 0x49a15b:c.instructions+=1;goto B49a15b;
case 0x49a160:goto L49a160;
case 0x49a163:goto L49a163;
case 0x49a164:c.instructions+=2;goto B49a164;
case 0x49a165:c.instructions+=1;goto B49a165;
case 0x49a170:goto L49a170;
case 0x49a171:c.instructions+=3;goto B49a171;
case 0x49a173:c.instructions+=2;goto B49a173;
case 0x49a17a:c.instructions+=1;goto B49a17a;
case 0x49a17c:goto L49a17c;
case 0x49a17d:c.instructions+=4;goto B49a17d;
case 0x49a17e:c.instructions+=3;goto B49a17e;
case 0x49a184:c.instructions+=2;goto B49a184;
case 0x49a189:c.instructions+=1;goto B49a189;
case 0x49a190:goto L49a190;
case 0x49a192:c.instructions+=6;goto B49a192;
case 0x49a195:c.instructions+=5;goto B49a195;
case 0x49a197:c.instructions+=4;goto B49a197;
case 0x49a19c:c.instructions+=3;goto B49a19c;
case 0x49a19d:c.instructions+=2;goto B49a19d;
case 0x49a19e:c.instructions+=1;goto B49a19e;
case 0x49a1a3:goto L49a1a3;
case 0x49a1a6:c.instructions+=3;goto B49a1a6;
case 0x49a1a9:c.instructions+=2;goto B49a1a9;
case 0x49a1aa:c.instructions+=1;goto B49a1aa;
case 0x49a1ac:goto L49a1ac;
case 0x49a1ad:c.instructions+=2;goto B49a1ad;
case 0x49a1b7:c.instructions+=1;goto B49a1b7;
case 0x49a1b8:goto L49a1b8;
case 0x49a1b9:c.instructions+=1;goto B49a1b9;
case 0x49a1c0:goto L49a1c0;
case 0x49a1c3:c.instructions+=2;goto B49a1c3;
case 0x49a1c5:c.instructions+=1;goto B49a1c5;
case 0x49a1c7:goto L49a1c7;
case 0x49a1cb:c.instructions+=3;goto B49a1cb;
case 0x49a1d2:c.instructions+=2;goto B49a1d2;
case 0x49a1d4:c.instructions+=1;goto B49a1d4;
case 0x49a1d6:goto L49a1d6;
case 0x49a1d8:c.instructions+=4;goto B49a1d8;
case 0x49a1da:c.instructions+=3;goto B49a1da;
case 0x49a1dc:c.instructions+=2;goto B49a1dc;
case 0x49a1dd:c.instructions+=1;goto B49a1dd;
case 0x49a1df:goto L49a1df;
case 0x49a1f0:goto L49a1f0;
case 0x49a1f1:c.instructions+=7;goto B49a1f1;
case 0x49a1f3:c.instructions+=6;goto B49a1f3;
case 0x49a1f6:c.instructions+=5;goto B49a1f6;
case 0x49a1f9:c.instructions+=4;goto B49a1f9;
case 0x49a1fb:c.instructions+=3;goto B49a1fb;
case 0x49a1fc:c.instructions+=2;goto B49a1fc;
case 0x49a1fd:c.instructions+=1;goto B49a1fd;
case 0x49a202:goto L49a202;
case 0x49a205:c.instructions+=4;goto B49a205;
case 0x49a208:c.instructions+=3;goto B49a208;
case 0x49a209:c.instructions+=2;goto B49a209;
case 0x49a20a:c.instructions+=1;goto B49a20a;
case 0x49a20f:goto L49a20f;
case 0x49a210:c.instructions+=1;goto B49a210;
case 0x49a215:goto L49a215;
case 0x49a218:c.instructions+=4;goto B49a218;
case 0x49a21b:c.instructions+=3;goto B49a21b;
case 0x49a21c:c.instructions+=2;goto B49a21c;
case 0x49a21d:c.instructions+=1;goto B49a21d;
case 0x49a222:goto L49a222;
case 0x49a223:c.instructions+=1;goto B49a223;
case 0x49a228:goto L49a228;
case 0x49a22b:c.instructions+=5;goto B49a22b;
case 0x49a22e:c.instructions+=4;goto B49a22e;
case 0x49a230:c.instructions+=3;goto B49a230;
case 0x49a231:c.instructions+=2;goto B49a231;
case 0x49a232:c.instructions+=1;goto B49a232;
case 0x49a237:goto L49a237;
case 0x49a23a:c.instructions+=4;goto B49a23a;
case 0x49a23d:c.instructions+=3;goto B49a23d;
case 0x49a23e:c.instructions+=2;goto B49a23e;
case 0x49a23f:c.instructions+=1;goto B49a23f;
case 0x49a244:goto L49a244;
case 0x49a245:c.instructions+=1;goto B49a245;
case 0x49a24a:goto L49a24a;
case 0x49a24d:c.instructions+=4;goto B49a24d;
case 0x49a250:c.instructions+=3;goto B49a250;
case 0x49a251:c.instructions+=2;goto B49a251;
case 0x49a252:c.instructions+=1;goto B49a252;
case 0x49a257:goto L49a257;
case 0x49a25a:c.instructions+=2;goto B49a25a;
case 0x49a25b:c.instructions+=1;goto B49a25b;
case 0x49a260:goto L49a260;
case 0x49a263:c.instructions+=5;goto B49a263;
case 0x49a266:c.instructions+=4;goto B49a266;
case 0x49a268:c.instructions+=3;goto B49a268;
case 0x49a269:c.instructions+=2;goto B49a269;
case 0x49a26a:c.instructions+=1;goto B49a26a;
case 0x49a26f:goto L49a26f;
case 0x49a272:c.instructions+=4;goto B49a272;
case 0x49a275:c.instructions+=3;goto B49a275;
case 0x49a276:c.instructions+=2;goto B49a276;
case 0x49a277:c.instructions+=1;goto B49a277;
case 0x49a27c:goto L49a27c;
case 0x49a27d:c.instructions+=1;goto B49a27d;
case 0x49a282:goto L49a282;
case 0x49a285:c.instructions+=4;goto B49a285;
case 0x49a288:c.instructions+=3;goto B49a288;
case 0x49a289:c.instructions+=2;goto B49a289;
case 0x49a28a:c.instructions+=1;goto B49a28a;
case 0x49a28f:goto L49a28f;
case 0x49a290:c.instructions+=1;goto B49a290;
case 0x49a295:goto L49a295;
case 0x49a298:c.instructions+=5;goto B49a298;
case 0x49a29b:c.instructions+=4;goto B49a29b;
case 0x49a29d:c.instructions+=3;goto B49a29d;
case 0x49a29e:c.instructions+=2;goto B49a29e;
case 0x49a29f:c.instructions+=1;goto B49a29f;
case 0x49a2a4:goto L49a2a4;
case 0x49a2a7:c.instructions+=4;goto B49a2a7;
case 0x49a2aa:c.instructions+=3;goto B49a2aa;
case 0x49a2ab:c.instructions+=2;goto B49a2ab;
case 0x49a2ac:c.instructions+=1;goto B49a2ac;
case 0x49a2b1:goto L49a2b1;
case 0x49a2b2:c.instructions+=1;goto B49a2b2;
case 0x49a2b7:goto L49a2b7;
case 0x49a2ba:c.instructions+=5;goto B49a2ba;
case 0x49a2bd:c.instructions+=4;goto B49a2bd;
case 0x49a2c0:c.instructions+=3;goto B49a2c0;
case 0x49a2c1:c.instructions+=2;goto B49a2c1;
case 0x49a2c2:c.instructions+=1;goto B49a2c2;
case 0x49a2c7:goto L49a2c7;
case 0x49a2c8:c.instructions+=1;goto B49a2c8;
case 0x49a2cd:goto L49a2cd;
case 0x49a2d0:c.instructions+=2;goto B49a2d0;
case 0x49a2d1:c.instructions+=1;goto B49a2d1;
case 0x49a2e0:goto L49a2e0;
case 0x49a2e1:c.instructions+=7;goto B49a2e1;
case 0x49a2e3:c.instructions+=6;goto B49a2e3;
case 0x49a2e6:c.instructions+=5;goto B49a2e6;
case 0x49a2e9:c.instructions+=4;goto B49a2e9;
case 0x49a2eb:c.instructions+=3;goto B49a2eb;
case 0x49a2ec:c.instructions+=2;goto B49a2ec;
case 0x49a2ed:c.instructions+=1;goto B49a2ed;
case 0x49a2f2:goto L49a2f2;
case 0x49a2f5:c.instructions+=5;goto B49a2f5;
case 0x49a2f8:c.instructions+=4;goto B49a2f8;
case 0x49a2fa:c.instructions+=3;goto B49a2fa;
case 0x49a2fb:c.instructions+=2;goto B49a2fb;
case 0x49a2fc:c.instructions+=1;goto B49a2fc;
case 0x49a301:goto L49a301;
case 0x49a304:c.instructions+=4;goto B49a304;
case 0x49a307:c.instructions+=3;goto B49a307;
case 0x49a308:c.instructions+=2;goto B49a308;
case 0x49a309:c.instructions+=1;goto B49a309;
case 0x49a30e:goto L49a30e;
case 0x49a30f:c.instructions+=1;goto B49a30f;
case 0x49a314:goto L49a314;
case 0x49a317:c.instructions+=4;goto B49a317;
case 0x49a31a:c.instructions+=3;goto B49a31a;
case 0x49a31b:c.instructions+=2;goto B49a31b;
case 0x49a31c:c.instructions+=1;goto B49a31c;
case 0x49a321:goto L49a321;
case 0x49a322:c.instructions+=1;goto B49a322;
case 0x49a327:goto L49a327;
case 0x49a32a:c.instructions+=5;goto B49a32a;
case 0x49a32d:c.instructions+=4;goto B49a32d;
case 0x49a32f:c.instructions+=3;goto B49a32f;
case 0x49a330:c.instructions+=2;goto B49a330;
case 0x49a331:c.instructions+=1;goto B49a331;
case 0x49a336:goto L49a336;
case 0x49a339:c.instructions+=4;goto B49a339;
case 0x49a33c:c.instructions+=3;goto B49a33c;
case 0x49a33d:c.instructions+=2;goto B49a33d;
case 0x49a33e:c.instructions+=1;goto B49a33e;
case 0x49a343:goto L49a343;
case 0x49a346:c.instructions+=2;goto B49a346;
case 0x49a347:c.instructions+=1;goto B49a347;
case 0x49a34c:goto L49a34c;
case 0x49a34f:c.instructions+=4;goto B49a34f;
case 0x49a352:c.instructions+=3;goto B49a352;
case 0x49a353:c.instructions+=2;goto B49a353;
case 0x49a354:c.instructions+=1;goto B49a354;
case 0x49a359:goto L49a359;
case 0x49a35a:c.instructions+=1;goto B49a35a;
case 0x49a35f:goto L49a35f;
case 0x49a362:c.instructions+=5;goto B49a362;
case 0x49a365:c.instructions+=4;goto B49a365;
case 0x49a367:c.instructions+=3;goto B49a367;
case 0x49a368:c.instructions+=2;goto B49a368;
case 0x49a369:c.instructions+=1;goto B49a369;
case 0x49a36e:goto L49a36e;
case 0x49a371:c.instructions+=4;goto B49a371;
case 0x49a374:c.instructions+=3;goto B49a374;
case 0x49a375:c.instructions+=2;goto B49a375;
case 0x49a376:c.instructions+=1;goto B49a376;
case 0x49a37b:goto L49a37b;
case 0x49a37c:c.instructions+=1;goto B49a37c;
case 0x49a381:goto L49a381;
case 0x49a384:c.instructions+=4;goto B49a384;
case 0x49a387:c.instructions+=3;goto B49a387;
case 0x49a388:c.instructions+=2;goto B49a388;
case 0x49a389:c.instructions+=1;goto B49a389;
case 0x49a38e:goto L49a38e;
case 0x49a38f:c.instructions+=1;goto B49a38f;
case 0x49a394:goto L49a394;
case 0x49a397:c.instructions+=2;goto B49a397;
case 0x49a398:c.instructions+=1;goto B49a398;
case 0x49a3a0:goto L49a3a0;
case 0x49a3a1:c.instructions+=7;goto B49a3a1;
case 0x49a3a3:c.instructions+=6;goto B49a3a3;
case 0x49a3a6:c.instructions+=5;goto B49a3a6;
case 0x49a3a9:c.instructions+=4;goto B49a3a9;
case 0x49a3ab:c.instructions+=3;goto B49a3ab;
case 0x49a3ac:c.instructions+=2;goto B49a3ac;
case 0x49a3ad:c.instructions+=1;goto B49a3ad;
case 0x49a3b2:goto L49a3b2;
case 0x49a3b5:c.instructions+=4;goto B49a3b5;
case 0x49a3b8:c.instructions+=3;goto B49a3b8;
case 0x49a3b9:c.instructions+=2;goto B49a3b9;
case 0x49a3ba:c.instructions+=1;goto B49a3ba;
case 0x49a3bf:goto L49a3bf;
case 0x49a3c0:c.instructions+=1;goto B49a3c0;
case 0x49a3c5:goto L49a3c5;
case 0x49a3c8:c.instructions+=4;goto B49a3c8;
case 0x49a3cb:c.instructions+=3;goto B49a3cb;
case 0x49a3cc:c.instructions+=2;goto B49a3cc;
case 0x49a3cd:c.instructions+=1;goto B49a3cd;
case 0x49a3d2:goto L49a3d2;
case 0x49a3d3:c.instructions+=1;goto B49a3d3;
case 0x49a3d8:goto L49a3d8;
case 0x49a3db:c.instructions+=5;goto B49a3db;
case 0x49a3de:c.instructions+=4;goto B49a3de;
case 0x49a3e0:c.instructions+=3;goto B49a3e0;
case 0x49a3e1:c.instructions+=2;goto B49a3e1;
case 0x49a3e2:c.instructions+=1;goto B49a3e2;
case 0x49a3e7:goto L49a3e7;
case 0x49a3ea:c.instructions+=5;goto B49a3ea;
case 0x49a3ed:c.instructions+=4;goto B49a3ed;
case 0x49a3ef:c.instructions+=3;goto B49a3ef;
case 0x49a3f0:c.instructions+=2;goto B49a3f0;
case 0x49a3f1:c.instructions+=1;goto B49a3f1;
case 0x49a3f6:goto L49a3f6;
case 0x49a3f9:c.instructions+=4;goto B49a3f9;
case 0x49a3fc:c.instructions+=3;goto B49a3fc;
case 0x49a3fd:c.instructions+=2;goto B49a3fd;
case 0x49a3fe:c.instructions+=1;goto B49a3fe;
case 0x49a403:goto L49a403;
case 0x49a406:c.instructions+=2;goto B49a406;
case 0x49a407:c.instructions+=1;goto B49a407;
case 0x49a40c:goto L49a40c;
case 0x49a40f:c.instructions+=4;goto B49a40f;
case 0x49a412:c.instructions+=3;goto B49a412;
case 0x49a413:c.instructions+=2;goto B49a413;
case 0x49a414:c.instructions+=1;goto B49a414;
case 0x49a419:goto L49a419;
case 0x49a41a:c.instructions+=1;goto B49a41a;
case 0x49a41f:goto L49a41f;
case 0x49a422:c.instructions+=5;goto B49a422;
case 0x49a425:c.instructions+=4;goto B49a425;
case 0x49a427:c.instructions+=3;goto B49a427;
case 0x49a428:c.instructions+=2;goto B49a428;
case 0x49a429:c.instructions+=1;goto B49a429;
case 0x49a42e:goto L49a42e;
case 0x49a431:c.instructions+=4;goto B49a431;
case 0x49a434:c.instructions+=3;goto B49a434;
case 0x49a435:c.instructions+=2;goto B49a435;
case 0x49a436:c.instructions+=1;goto B49a436;
case 0x49a43b:goto L49a43b;
case 0x49a43c:c.instructions+=1;goto B49a43c;
case 0x49a441:goto L49a441;
case 0x49a444:c.instructions+=4;goto B49a444;
case 0x49a447:c.instructions+=3;goto B49a447;
case 0x49a448:c.instructions+=2;goto B49a448;
case 0x49a449:c.instructions+=1;goto B49a449;
case 0x49a44e:goto L49a44e;
case 0x49a44f:c.instructions+=1;goto B49a44f;
case 0x49a454:goto L49a454;
case 0x49a457:c.instructions+=2;goto B49a457;
case 0x49a458:c.instructions+=1;goto B49a458;
case 0x49a460:goto L49a460;
case 0x49a461:c.instructions+=7;goto B49a461;
case 0x49a462:c.instructions+=6;goto B49a462;
case 0x49a464:c.instructions+=5;goto B49a464;
case 0x49a46a:c.instructions+=4;goto B49a46a;
case 0x49a46d:c.instructions+=3;goto B49a46d;
case 0x49a46e:c.instructions+=2;goto B49a46e;
case 0x49a46f:c.instructions+=1;goto B49a46f;
case 0x49a474:goto L49a474;
case 0x49a475:c.instructions+=1;goto B49a475;
case 0x49a47a:goto L49a47a;
case 0x49a480:c.instructions+=4;goto B49a480;
case 0x49a483:c.instructions+=3;goto B49a483;
case 0x49a484:c.instructions+=2;goto B49a484;
case 0x49a485:c.instructions+=1;goto B49a485;
case 0x49a48a:goto L49a48a;
case 0x49a48b:c.instructions+=1;goto B49a48b;
case 0x49a490:goto L49a490;
case 0x49a492:c.instructions+=7;goto B49a492;
case 0x49a498:c.instructions+=6;goto B49a498;
case 0x49a49b:c.instructions+=5;goto B49a49b;
case 0x49a4a1:c.instructions+=4;goto B49a4a1;
case 0x49a4a7:c.instructions+=3;goto B49a4a7;
case 0x49a4a8:c.instructions+=2;goto B49a4a8;
case 0x49a4a9:c.instructions+=1;goto B49a4a9;
case 0x49a4ae:goto L49a4ae;
case 0x49a4af:c.instructions+=1;goto B49a4af;
case 0x49a4b4:goto L49a4b4;
case 0x49a4ba:c.instructions+=4;goto B49a4ba;
case 0x49a4bd:c.instructions+=3;goto B49a4bd;
case 0x49a4be:c.instructions+=2;goto B49a4be;
case 0x49a4bf:c.instructions+=1;goto B49a4bf;
case 0x49a4c4:goto L49a4c4;
case 0x49a4c5:c.instructions+=1;goto B49a4c5;
case 0x49a4ca:goto L49a4ca;
case 0x49a4d0:c.instructions+=6;goto B49a4d0;
case 0x49a4d3:c.instructions+=5;goto B49a4d3;
case 0x49a4d9:c.instructions+=4;goto B49a4d9;
case 0x49a4df:c.instructions+=3;goto B49a4df;
case 0x49a4e0:c.instructions+=2;goto B49a4e0;
case 0x49a4e1:c.instructions+=1;goto B49a4e1;
case 0x49a4e6:goto L49a4e6;
case 0x49a4e7:c.instructions+=1;goto B49a4e7;
case 0x49a4ec:goto L49a4ec;
case 0x49a4f2:c.instructions+=6;goto B49a4f2;
case 0x49a4f5:c.instructions+=5;goto B49a4f5;
case 0x49a4f8:c.instructions+=4;goto B49a4f8;
case 0x49a4fd:c.instructions+=3;goto B49a4fd;
case 0x49a4fe:c.instructions+=2;goto B49a4fe;
case 0x49a4ff:c.instructions+=1;goto B49a4ff;
case 0x49a504:goto L49a504;
case 0x49a507:c.instructions+=2;goto B49a507;
case 0x49a508:c.instructions+=1;goto B49a508;
case 0x49a50d:goto L49a50d;
case 0x49a513:c.instructions+=4;goto B49a513;
case 0x49a516:c.instructions+=3;goto B49a516;
case 0x49a517:c.instructions+=2;goto B49a517;
case 0x49a518:c.instructions+=1;goto B49a518;
case 0x49a51d:goto L49a51d;
case 0x49a51e:c.instructions+=1;goto B49a51e;
case 0x49a523:goto L49a523;
case 0x49a52d:c.instructions+=7;goto B49a52d;
case 0x49a530:c.instructions+=6;goto B49a530;
case 0x49a533:c.instructions+=5;goto B49a533;
case 0x49a535:c.instructions+=4;goto B49a535;
case 0x49a536:c.instructions+=3;goto B49a536;
case 0x49a537:c.instructions+=2;goto B49a537;
case 0x49a53e:c.instructions+=1;goto B49a53e;
case 0x49a543:goto L49a543;
case 0x49a546:c.instructions+=4;goto B49a546;
case 0x49a549:c.instructions+=3;goto B49a549;
case 0x49a54a:c.instructions+=2;goto B49a54a;
case 0x49a54b:c.instructions+=1;goto B49a54b;
case 0x49a550:goto L49a550;
case 0x49a551:c.instructions+=1;goto B49a551;
case 0x49a556:goto L49a556;
case 0x49a559:c.instructions+=4;goto B49a559;
case 0x49a55c:c.instructions+=3;goto B49a55c;
case 0x49a55d:c.instructions+=2;goto B49a55d;
case 0x49a55e:c.instructions+=1;goto B49a55e;
case 0x49a563:goto L49a563;
case 0x49a564:c.instructions+=1;goto B49a564;
case 0x49a569:goto L49a569;
case 0x49a56c:c.instructions+=5;goto B49a56c;
case 0x49a56f:c.instructions+=4;goto B49a56f;
case 0x49a571:c.instructions+=3;goto B49a571;
case 0x49a572:c.instructions+=2;goto B49a572;
case 0x49a573:c.instructions+=1;goto B49a573;
case 0x49a578:goto L49a578;
case 0x49a57b:c.instructions+=5;goto B49a57b;
case 0x49a57e:c.instructions+=4;goto B49a57e;
case 0x49a581:c.instructions+=3;goto B49a581;
case 0x49a582:c.instructions+=2;goto B49a582;
case 0x49a583:c.instructions+=1;goto B49a583;
case 0x49a588:goto L49a588;
case 0x49a589:c.instructions+=1;goto B49a589;
case 0x49a58e:goto L49a58e;
case 0x49a591:c.instructions+=4;goto B49a591;
case 0x49a594:c.instructions+=3;goto B49a594;
case 0x49a595:c.instructions+=2;goto B49a595;
case 0x49a596:c.instructions+=1;goto B49a596;
case 0x49a59b:goto L49a59b;
case 0x49a59c:c.instructions+=1;goto B49a59c;
case 0x49a5a1:goto L49a5a1;
case 0x49a5a4:c.instructions+=5;goto B49a5a4;
case 0x49a5a7:c.instructions+=4;goto B49a5a7;
case 0x49a5a9:c.instructions+=3;goto B49a5a9;
case 0x49a5aa:c.instructions+=2;goto B49a5aa;
case 0x49a5ab:c.instructions+=1;goto B49a5ab;
case 0x49a5b0:goto L49a5b0;
case 0x49a5b3:c.instructions+=4;goto B49a5b3;
case 0x49a5b6:c.instructions+=3;goto B49a5b6;
case 0x49a5b7:c.instructions+=2;goto B49a5b7;
case 0x49a5b8:c.instructions+=1;goto B49a5b8;
case 0x49a5bd:goto L49a5bd;
case 0x49a5be:c.instructions+=1;goto B49a5be;
case 0x49a5c3:goto L49a5c3;
case 0x49a5c6:c.instructions+=4;goto B49a5c6;
case 0x49a5c9:c.instructions+=3;goto B49a5c9;
case 0x49a5ca:c.instructions+=2;goto B49a5ca;
case 0x49a5cb:c.instructions+=1;goto B49a5cb;
case 0x49a5d0:goto L49a5d0;
case 0x49a5d1:c.instructions+=1;goto B49a5d1;
case 0x49a5d6:goto L49a5d6;
case 0x49a5d9:c.instructions+=5;goto B49a5d9;
case 0x49a5dc:c.instructions+=4;goto B49a5dc;
case 0x49a5de:c.instructions+=3;goto B49a5de;
case 0x49a5df:c.instructions+=2;goto B49a5df;
case 0x49a5e0:c.instructions+=1;goto B49a5e0;
case 0x49a5e5:goto L49a5e5;
case 0x49a5e8:c.instructions+=5;goto B49a5e8;
case 0x49a5eb:c.instructions+=4;goto B49a5eb;
case 0x49a5ee:c.instructions+=3;goto B49a5ee;
case 0x49a5ef:c.instructions+=2;goto B49a5ef;
case 0x49a5f0:c.instructions+=1;goto B49a5f0;
case 0x49a5f5:goto L49a5f5;
case 0x49a5f6:c.instructions+=1;goto B49a5f6;
case 0x49a5fb:goto L49a5fb;
case 0x49a5fe:c.instructions+=4;goto B49a5fe;
case 0x49a601:c.instructions+=3;goto B49a601;
case 0x49a602:c.instructions+=2;goto B49a602;
case 0x49a603:c.instructions+=1;goto B49a603;
case 0x49a608:goto L49a608;
case 0x49a609:c.instructions+=1;goto B49a609;
case 0x49a60e:goto L49a60e;
case 0x49a611:c.instructions+=3;goto B49a611;
case 0x49a612:c.instructions+=2;goto B49a612;
case 0x49a613:c.instructions+=1;goto B49a613;
case 0x49a620:goto L49a620;
case 0x49a628:c.instructions+=1;goto B49a628;
case 0x49a62a:goto L49a62a;
case 0x49a634:goto L49a634;
case 0x49a640:goto L49a640;
case 0x49a648:c.instructions+=1;goto B49a648;
case 0x49a64a:goto L49a64a;
case 0x49a654:goto L49a654;
case 0x49a660:goto L49a660;
case 0x49a668:c.instructions+=1;goto B49a668;
case 0x49a66a:goto L49a66a;
case 0x49a674:goto L49a674;
case 0x49a680:goto L49a680;
case 0x49a688:c.instructions+=1;goto B49a688;
case 0x49a68a:goto L49a68a;
case 0x49a694:goto L49a694;
case 0x49a6a0:goto L49a6a0;
case 0x49a6a8:c.instructions+=1;goto B49a6a8;
case 0x49a6aa:goto L49a6aa;
case 0x49a6b4:goto L49a6b4;
case 0x49a6c0:goto L49a6c0;
case 0x49a6c8:c.instructions+=1;goto B49a6c8;
case 0x49a6ca:goto L49a6ca;
case 0x49a6d4:goto L49a6d4;
case 0x49a6e0:goto L49a6e0;
case 0x49a6e8:c.instructions+=1;goto B49a6e8;
case 0x49a6ea:goto L49a6ea;
case 0x49a6f4:goto L49a6f4;
case 0x49a700:goto L49a700;
case 0x49a708:c.instructions+=1;goto B49a708;
case 0x49a70a:goto L49a70a;
case 0x49a714:goto L49a714;
case 0x49a720:goto L49a720;
case 0x49a721:c.instructions+=7;goto B49a721;
case 0x49a722:c.instructions+=6;goto B49a722;
case 0x49a726:c.instructions+=5;goto B49a726;
case 0x49a728:c.instructions+=4;goto B49a728;
case 0x49a72b:c.instructions+=3;goto B49a72b;
case 0x49a72e:c.instructions+=2;goto B49a72e;
case 0x49a72f:c.instructions+=1;goto B49a72f;
case 0x49a732:goto L49a732;
case 0x49a734:c.instructions+=1;goto B49a734;
case 0x49a736:goto L49a736;
case 0x49a738:c.instructions+=3;goto B49a738;
case 0x49a739:c.instructions+=2;goto B49a739;
case 0x49a73b:c.instructions+=1;goto B49a73b;
case 0x49a73e:goto L49a73e;
case 0x49a740:c.instructions+=2;goto B49a740;
case 0x49a742:c.instructions+=1;goto B49a742;
case 0x49a745:goto L49a745;
case 0x49a74b:c.instructions+=3;goto B49a74b;
case 0x49a751:c.instructions+=2;goto B49a751;
case 0x49a756:c.instructions+=1;goto B49a756;
case 0x49a75b:goto L49a75b;
case 0x49a75d:c.instructions+=2;goto B49a75d;
case 0x49a75f:c.instructions+=1;goto B49a75f;
case 0x49a762:goto L49a762;
case 0x49a763:c.instructions+=2;goto B49a763;
case 0x49a764:c.instructions+=1;goto B49a764;
case 0x49a770:goto L49a770;
case 0x49a773:c.instructions+=3;goto B49a773;
case 0x49a778:c.instructions+=2;goto B49a778;
case 0x49a779:c.instructions+=1;goto B49a779;
case 0x49a77e:goto L49a77e;
case 0x49a781:c.instructions+=1;goto B49a781;
case 0x49a790:goto L49a790;
case 0x49a791:c.instructions+=9;goto B49a791;
case 0x49a796:c.instructions+=8;goto B49a796;
case 0x49a798:c.instructions+=7;goto B49a798;
case 0x49a79f:c.instructions+=6;goto B49a79f;
case 0x49a7a6:c.instructions+=5;goto B49a7a6;
case 0x49a7b0:c.instructions+=4;goto B49a7b0;
case 0x49a7b1:c.instructions+=3;goto B49a7b1;
case 0x49a7b4:c.instructions+=2;goto B49a7b4;
case 0x49a7b8:c.instructions+=1;goto B49a7b8;
case 0x49a7bd:goto L49a7bd;
case 0x49a7be:c.instructions+=1;goto B49a7be;
case 0x49a7c0:goto L49a7c0;
case 0x49a7c1:c.instructions+=7;goto B49a7c1;
case 0x49a7c2:c.instructions+=6;goto B49a7c2;
case 0x49a7c6:c.instructions+=5;goto B49a7c6;
case 0x49a7c8:c.instructions+=4;goto B49a7c8;
case 0x49a7cb:c.instructions+=3;goto B49a7cb;
case 0x49a7ce:c.instructions+=2;goto B49a7ce;
case 0x49a7cf:c.instructions+=1;goto B49a7cf;
case 0x49a7d2:goto L49a7d2;
case 0x49a7d4:c.instructions+=1;goto B49a7d4;
case 0x49a7d6:goto L49a7d6;
case 0x49a7d8:c.instructions+=3;goto B49a7d8;
case 0x49a7d9:c.instructions+=2;goto B49a7d9;
case 0x49a7db:c.instructions+=1;goto B49a7db;
case 0x49a7de:goto L49a7de;
case 0x49a7e0:c.instructions+=2;goto B49a7e0;
case 0x49a7e2:c.instructions+=1;goto B49a7e2;
case 0x49a7e5:goto L49a7e5;
case 0x49a7eb:c.instructions+=3;goto B49a7eb;
case 0x49a7f1:c.instructions+=2;goto B49a7f1;
case 0x49a7f6:c.instructions+=1;goto B49a7f6;
case 0x49a7fb:goto L49a7fb;
case 0x49a7fd:c.instructions+=2;goto B49a7fd;
case 0x49a7ff:c.instructions+=1;goto B49a7ff;
case 0x49a802:goto L49a802;
case 0x49a803:c.instructions+=2;goto B49a803;
case 0x49a804:c.instructions+=1;goto B49a804;
case 0x49a810:goto L49a810;
case 0x49a813:c.instructions+=3;goto B49a813;
case 0x49a818:c.instructions+=2;goto B49a818;
case 0x49a819:c.instructions+=1;goto B49a819;
case 0x49a81e:goto L49a81e;
case 0x49a821:c.instructions+=1;goto B49a821;
case 0x49a830:goto L49a830;
case 0x49a831:c.instructions+=9;goto B49a831;
case 0x49a836:c.instructions+=8;goto B49a836;
case 0x49a838:c.instructions+=7;goto B49a838;
case 0x49a83f:c.instructions+=6;goto B49a83f;
case 0x49a846:c.instructions+=5;goto B49a846;
case 0x49a850:c.instructions+=4;goto B49a850;
case 0x49a851:c.instructions+=3;goto B49a851;
case 0x49a854:c.instructions+=2;goto B49a854;
case 0x49a858:c.instructions+=1;goto B49a858;
case 0x49a85d:goto L49a85d;
case 0x49a85e:c.instructions+=1;goto B49a85e;
case 0x49a860:goto L49a860;
case 0x49a861:c.instructions+=7;goto B49a861;
case 0x49a862:c.instructions+=6;goto B49a862;
case 0x49a866:c.instructions+=5;goto B49a866;
case 0x49a868:c.instructions+=4;goto B49a868;
case 0x49a86b:c.instructions+=3;goto B49a86b;
case 0x49a86e:c.instructions+=2;goto B49a86e;
case 0x49a86f:c.instructions+=1;goto B49a86f;
case 0x49a872:goto L49a872;
case 0x49a874:c.instructions+=1;goto B49a874;
case 0x49a876:goto L49a876;
case 0x49a878:c.instructions+=3;goto B49a878;
case 0x49a879:c.instructions+=2;goto B49a879;
case 0x49a87b:c.instructions+=1;goto B49a87b;
case 0x49a87e:goto L49a87e;
case 0x49a880:c.instructions+=2;goto B49a880;
case 0x49a882:c.instructions+=1;goto B49a882;
case 0x49a885:goto L49a885;
case 0x49a88b:c.instructions+=3;goto B49a88b;
case 0x49a891:c.instructions+=2;goto B49a891;
case 0x49a896:c.instructions+=1;goto B49a896;
case 0x49a89b:goto L49a89b;
case 0x49a89d:c.instructions+=2;goto B49a89d;
case 0x49a89f:c.instructions+=1;goto B49a89f;
case 0x49a8a2:goto L49a8a2;
case 0x49a8a3:c.instructions+=2;goto B49a8a3;
case 0x49a8a4:c.instructions+=1;goto B49a8a4;
case 0x49a8b0:goto L49a8b0;
case 0x49a8b3:c.instructions+=3;goto B49a8b3;
case 0x49a8b8:c.instructions+=2;goto B49a8b8;
case 0x49a8b9:c.instructions+=1;goto B49a8b9;
case 0x49a8be:goto L49a8be;
case 0x49a8c1:c.instructions+=1;goto B49a8c1;
case 0x49a8d0:goto L49a8d0;
case 0x49a8d1:c.instructions+=9;goto B49a8d1;
case 0x49a8d6:c.instructions+=8;goto B49a8d6;
case 0x49a8d8:c.instructions+=7;goto B49a8d8;
case 0x49a8df:c.instructions+=6;goto B49a8df;
case 0x49a8e6:c.instructions+=5;goto B49a8e6;
case 0x49a8f0:c.instructions+=4;goto B49a8f0;
case 0x49a8f1:c.instructions+=3;goto B49a8f1;
case 0x49a8f4:c.instructions+=2;goto B49a8f4;
case 0x49a8f8:c.instructions+=1;goto B49a8f8;
case 0x49a8fd:goto L49a8fd;
case 0x49a8fe:c.instructions+=1;goto B49a8fe;
case 0x49a900:goto L49a900;
case 0x49a901:c.instructions+=7;goto B49a901;
case 0x49a902:c.instructions+=6;goto B49a902;
case 0x49a906:c.instructions+=5;goto B49a906;
case 0x49a908:c.instructions+=4;goto B49a908;
case 0x49a90b:c.instructions+=3;goto B49a90b;
case 0x49a90e:c.instructions+=2;goto B49a90e;
case 0x49a90f:c.instructions+=1;goto B49a90f;
case 0x49a912:goto L49a912;
case 0x49a914:c.instructions+=1;goto B49a914;
case 0x49a916:goto L49a916;
case 0x49a918:c.instructions+=3;goto B49a918;
case 0x49a919:c.instructions+=2;goto B49a919;
case 0x49a91b:c.instructions+=1;goto B49a91b;
case 0x49a91e:goto L49a91e;
case 0x49a920:c.instructions+=2;goto B49a920;
case 0x49a922:c.instructions+=1;goto B49a922;
case 0x49a925:goto L49a925;
case 0x49a92b:c.instructions+=3;goto B49a92b;
case 0x49a931:c.instructions+=2;goto B49a931;
case 0x49a936:c.instructions+=1;goto B49a936;
case 0x49a93b:goto L49a93b;
case 0x49a93d:c.instructions+=2;goto B49a93d;
case 0x49a93f:c.instructions+=1;goto B49a93f;
case 0x49a942:goto L49a942;
case 0x49a943:c.instructions+=2;goto B49a943;
case 0x49a944:c.instructions+=1;goto B49a944;
case 0x49a950:goto L49a950;
case 0x49a953:c.instructions+=3;goto B49a953;
case 0x49a958:c.instructions+=2;goto B49a958;
case 0x49a959:c.instructions+=1;goto B49a959;
case 0x49a95e:goto L49a95e;
case 0x49a961:c.instructions+=1;goto B49a961;
case 0x49a970:goto L49a970;
case 0x49a971:c.instructions+=9;goto B49a971;
case 0x49a976:c.instructions+=8;goto B49a976;
case 0x49a978:c.instructions+=7;goto B49a978;
case 0x49a97f:c.instructions+=6;goto B49a97f;
case 0x49a986:c.instructions+=5;goto B49a986;
case 0x49a990:c.instructions+=4;goto B49a990;
case 0x49a991:c.instructions+=3;goto B49a991;
case 0x49a994:c.instructions+=2;goto B49a994;
case 0x49a998:c.instructions+=1;goto B49a998;
case 0x49a99d:goto L49a99d;
case 0x49a99e:c.instructions+=1;goto B49a99e;
case 0x49a9a0:goto L49a9a0;
case 0x49a9a1:c.instructions+=7;goto B49a9a1;
case 0x49a9a2:c.instructions+=6;goto B49a9a2;
case 0x49a9a6:c.instructions+=5;goto B49a9a6;
case 0x49a9a8:c.instructions+=4;goto B49a9a8;
case 0x49a9ab:c.instructions+=3;goto B49a9ab;
case 0x49a9ae:c.instructions+=2;goto B49a9ae;
case 0x49a9af:c.instructions+=1;goto B49a9af;
case 0x49a9b2:goto L49a9b2;
case 0x49a9b4:c.instructions+=1;goto B49a9b4;
case 0x49a9b6:goto L49a9b6;
case 0x49a9b8:c.instructions+=3;goto B49a9b8;
case 0x49a9b9:c.instructions+=2;goto B49a9b9;
case 0x49a9bb:c.instructions+=1;goto B49a9bb;
case 0x49a9be:goto L49a9be;
case 0x49a9c0:c.instructions+=2;goto B49a9c0;
case 0x49a9c2:c.instructions+=1;goto B49a9c2;
case 0x49a9c5:goto L49a9c5;
case 0x49a9cb:c.instructions+=3;goto B49a9cb;
case 0x49a9d1:c.instructions+=2;goto B49a9d1;
case 0x49a9d6:c.instructions+=1;goto B49a9d6;
case 0x49a9db:goto L49a9db;
case 0x49a9dd:c.instructions+=2;goto B49a9dd;
case 0x49a9df:c.instructions+=1;goto B49a9df;
case 0x49a9e2:goto L49a9e2;
case 0x49a9e3:c.instructions+=2;goto B49a9e3;
case 0x49a9e4:c.instructions+=1;goto B49a9e4;
case 0x49a9f0:goto L49a9f0;
case 0x49a9f3:c.instructions+=3;goto B49a9f3;
case 0x49a9f8:c.instructions+=2;goto B49a9f8;
case 0x49a9f9:c.instructions+=1;goto B49a9f9;
case 0x49a9fe:goto L49a9fe;
case 0x49aa01:c.instructions+=1;goto B49aa01;
case 0x49aa10:goto L49aa10;
case 0x49aa11:c.instructions+=9;goto B49aa11;
case 0x49aa16:c.instructions+=8;goto B49aa16;
case 0x49aa18:c.instructions+=7;goto B49aa18;
case 0x49aa1f:c.instructions+=6;goto B49aa1f;
case 0x49aa26:c.instructions+=5;goto B49aa26;
case 0x49aa30:c.instructions+=4;goto B49aa30;
case 0x49aa31:c.instructions+=3;goto B49aa31;
case 0x49aa34:c.instructions+=2;goto B49aa34;
case 0x49aa38:c.instructions+=1;goto B49aa38;
case 0x49aa3d:goto L49aa3d;
case 0x49aa3e:c.instructions+=1;goto B49aa3e;
case 0x49aa40:goto L49aa40;
case 0x49aa41:c.instructions+=7;goto B49aa41;
case 0x49aa42:c.instructions+=6;goto B49aa42;
case 0x49aa46:c.instructions+=5;goto B49aa46;
case 0x49aa48:c.instructions+=4;goto B49aa48;
case 0x49aa4b:c.instructions+=3;goto B49aa4b;
case 0x49aa4e:c.instructions+=2;goto B49aa4e;
case 0x49aa4f:c.instructions+=1;goto B49aa4f;
case 0x49aa52:goto L49aa52;
case 0x49aa54:c.instructions+=1;goto B49aa54;
case 0x49aa56:goto L49aa56;
case 0x49aa58:c.instructions+=3;goto B49aa58;
case 0x49aa59:c.instructions+=2;goto B49aa59;
case 0x49aa5b:c.instructions+=1;goto B49aa5b;
case 0x49aa5e:goto L49aa5e;
case 0x49aa60:c.instructions+=2;goto B49aa60;
case 0x49aa62:c.instructions+=1;goto B49aa62;
case 0x49aa65:goto L49aa65;
case 0x49aa6b:c.instructions+=3;goto B49aa6b;
case 0x49aa71:c.instructions+=2;goto B49aa71;
case 0x49aa76:c.instructions+=1;goto B49aa76;
case 0x49aa7b:goto L49aa7b;
case 0x49aa7d:c.instructions+=2;goto B49aa7d;
case 0x49aa7f:c.instructions+=1;goto B49aa7f;
case 0x49aa82:goto L49aa82;
case 0x49aa83:c.instructions+=2;goto B49aa83;
case 0x49aa84:c.instructions+=1;goto B49aa84;
case 0x49aa90:goto L49aa90;
case 0x49aa93:c.instructions+=3;goto B49aa93;
case 0x49aa98:c.instructions+=2;goto B49aa98;
case 0x49aa99:c.instructions+=1;goto B49aa99;
case 0x49aa9e:goto L49aa9e;
case 0x49aaa1:c.instructions+=1;goto B49aaa1;
case 0x49aab0:goto L49aab0;
case 0x49aab1:c.instructions+=9;goto B49aab1;
case 0x49aab6:c.instructions+=8;goto B49aab6;
case 0x49aab8:c.instructions+=7;goto B49aab8;
case 0x49aabf:c.instructions+=6;goto B49aabf;
case 0x49aac6:c.instructions+=5;goto B49aac6;
case 0x49aad0:c.instructions+=4;goto B49aad0;
case 0x49aad1:c.instructions+=3;goto B49aad1;
case 0x49aad4:c.instructions+=2;goto B49aad4;
case 0x49aad8:c.instructions+=1;goto B49aad8;
case 0x49aadd:goto L49aadd;
case 0x49aade:c.instructions+=1;goto B49aade;
case 0x49aae0:goto L49aae0;
case 0x49aae1:c.instructions+=7;goto B49aae1;
case 0x49aae2:c.instructions+=6;goto B49aae2;
case 0x49aae6:c.instructions+=5;goto B49aae6;
case 0x49aae8:c.instructions+=4;goto B49aae8;
case 0x49aaeb:c.instructions+=3;goto B49aaeb;
case 0x49aaee:c.instructions+=2;goto B49aaee;
case 0x49aaef:c.instructions+=1;goto B49aaef;
case 0x49aaf2:goto L49aaf2;
case 0x49aaf4:c.instructions+=1;goto B49aaf4;
case 0x49aaf6:goto L49aaf6;
case 0x49aaf8:c.instructions+=3;goto B49aaf8;
case 0x49aaf9:c.instructions+=2;goto B49aaf9;
case 0x49aafb:c.instructions+=1;goto B49aafb;
case 0x49aafe:goto L49aafe;
case 0x49ab00:c.instructions+=2;goto B49ab00;
case 0x49ab02:c.instructions+=1;goto B49ab02;
case 0x49ab05:goto L49ab05;
case 0x49ab0b:c.instructions+=3;goto B49ab0b;
case 0x49ab11:c.instructions+=2;goto B49ab11;
case 0x49ab16:c.instructions+=1;goto B49ab16;
case 0x49ab1b:goto L49ab1b;
case 0x49ab1d:c.instructions+=2;goto B49ab1d;
case 0x49ab1f:c.instructions+=1;goto B49ab1f;
case 0x49ab22:goto L49ab22;
case 0x49ab23:c.instructions+=2;goto B49ab23;
case 0x49ab24:c.instructions+=1;goto B49ab24;
case 0x49ab30:goto L49ab30;
case 0x49ab33:c.instructions+=3;goto B49ab33;
case 0x49ab38:c.instructions+=2;goto B49ab38;
case 0x49ab39:c.instructions+=1;goto B49ab39;
case 0x49ab3e:goto L49ab3e;
case 0x49ab41:c.instructions+=1;goto B49ab41;
case 0x49ab50:goto L49ab50;
case 0x49ab51:c.instructions+=9;goto B49ab51;
case 0x49ab56:c.instructions+=8;goto B49ab56;
case 0x49ab58:c.instructions+=7;goto B49ab58;
case 0x49ab5f:c.instructions+=6;goto B49ab5f;
case 0x49ab66:c.instructions+=5;goto B49ab66;
case 0x49ab70:c.instructions+=4;goto B49ab70;
case 0x49ab71:c.instructions+=3;goto B49ab71;
case 0x49ab74:c.instructions+=2;goto B49ab74;
case 0x49ab78:c.instructions+=1;goto B49ab78;
case 0x49ab7d:goto L49ab7d;
case 0x49ab7e:c.instructions+=1;goto B49ab7e;
case 0x49ab80:goto L49ab80;
case 0x49ab84:c.instructions+=6;goto B49ab84;
case 0x49ab89:c.instructions+=5;goto B49ab89;
case 0x49ab8a:c.instructions+=4;goto B49ab8a;
case 0x49ab8b:c.instructions+=3;goto B49ab8b;
case 0x49ab91:c.instructions+=2;goto B49ab91;
case 0x49ab93:c.instructions+=1;goto B49ab93;
case 0x49ab95:goto L49ab95;
case 0x49ab96:c.instructions+=1;goto B49ab96;
case 0x49ab98:goto L49ab98;
case 0x49ab9d:c.instructions+=1;goto B49ab9d;
case 0x49ab9f:goto L49ab9f;
case 0x49aba4:c.instructions+=1;goto B49aba4;
case 0x49aba6:goto L49aba6;
case 0x49aba7:c.instructions+=2;goto B49aba7;
case 0x49abaa:c.instructions+=1;goto B49abaa;
case 0x49abac:goto L49abac;
case 0x49abae:goto L49abae;
case 0x49abb0:c.instructions+=3;goto B49abb0;
case 0x49abb1:c.instructions+=2;goto B49abb1;
case 0x49abb3:c.instructions+=1;goto B49abb3;
case 0x49abb6:goto L49abb6;
case 0x49abbc:c.instructions+=3;goto B49abbc;
case 0x49abbe:c.instructions+=2;goto B49abbe;
case 0x49abc0:c.instructions+=1;goto B49abc0;
case 0x49abc3:goto L49abc3;
case 0x49abc4:c.instructions+=2;goto B49abc4;
case 0x49abc5:c.instructions+=1;goto B49abc5;
case 0x49abd0:goto L49abd0;
case 0x49abd1:c.instructions+=5;goto B49abd1;
case 0x49abd3:c.instructions+=4;goto B49abd3;
case 0x49abd6:c.instructions+=3;goto B49abd6;
case 0x49abdb:c.instructions+=2;goto B49abdb;
case 0x49abdc:c.instructions+=1;goto B49abdc;
case 0x49abe1:goto L49abe1;
case 0x49abe6:c.instructions+=4;goto B49abe6;
case 0x49abe8:c.instructions+=3;goto B49abe8;
case 0x49abeb:c.instructions+=2;goto B49abeb;
case 0x49abed:c.instructions+=1;goto B49abed;
case 0x49abef:goto L49abef;
case 0x49abf0:c.instructions+=1;goto B49abf0;
case 0x49abf2:goto L49abf2;
case 0x49abf7:c.instructions+=4;goto B49abf7;
case 0x49abf8:c.instructions+=3;goto B49abf8;
case 0x49abfb:c.instructions+=2;goto B49abfb;
case 0x49abfc:c.instructions+=1;goto B49abfc;
case 0x49ac01:goto L49ac01;
case 0x49ac04:c.instructions+=2;goto B49ac04;
case 0x49ac05:c.instructions+=1;goto B49ac05;
case 0x49ac06:goto L49ac06;
case 0x49ac0b:goto L49ac0b;
case 0x49ac0c:c.instructions+=3;goto B49ac0c;
case 0x49ac0f:c.instructions+=2;goto B49ac0f;
case 0x49ac10:c.instructions+=1;goto B49ac10;
case 0x49ac15:goto L49ac15;
case 0x49ac18:c.instructions+=2;goto B49ac18;
case 0x49ac19:c.instructions+=1;goto B49ac19;
case 0x49ac20:goto L49ac20;
case 0x49ac24:c.instructions+=4;goto B49ac24;
case 0x49ac29:c.instructions+=3;goto B49ac29;
case 0x49ac2a:c.instructions+=2;goto B49ac2a;
case 0x49ac2c:c.instructions+=1;goto B49ac2c;
case 0x49ac2e:goto L49ac2e;
case 0x49ac33:c.instructions+=1;goto B49ac33;
case 0x49ac35:goto L49ac35;
case 0x49ac3b:c.instructions+=3;goto B49ac3b;
case 0x49ac3d:c.instructions+=2;goto B49ac3d;
case 0x49ac40:c.instructions+=1;goto B49ac40;
case 0x49ac46:goto L49ac46;
case 0x49ac48:c.instructions+=3;goto B49ac48;
case 0x49ac49:c.instructions+=2;goto B49ac49;
case 0x49ac4b:c.instructions+=1;goto B49ac4b;
case 0x49ac4e:goto L49ac4e;
case 0x49ac50:c.instructions+=2;goto B49ac50;
case 0x49ac52:c.instructions+=1;goto B49ac52;
case 0x49ac55:goto L49ac55;
case 0x49ac56:c.instructions+=1;goto B49ac56;
case 0x49ac60:goto L49ac60;
case 0x49ac61:c.instructions+=5;goto B49ac61;
case 0x49ac63:c.instructions+=4;goto B49ac63;
case 0x49ac66:c.instructions+=3;goto B49ac66;
case 0x49ac6b:c.instructions+=2;goto B49ac6b;
case 0x49ac6c:c.instructions+=1;goto B49ac6c;
case 0x49ac71:goto L49ac71;
case 0x49ac76:c.instructions+=3;goto B49ac76;
case 0x49ac79:c.instructions+=2;goto B49ac79;
case 0x49ac7b:c.instructions+=1;goto B49ac7b;
case 0x49ac7d:goto L49ac7d;
case 0x49ac80:c.instructions+=3;goto B49ac80;
case 0x49ac85:c.instructions+=2;goto B49ac85;
case 0x49ac86:c.instructions+=1;goto B49ac86;
case 0x49ac8b:goto L49ac8b;
case 0x49ac8e:c.instructions+=2;goto B49ac8e;
case 0x49ac8f:c.instructions+=1;goto B49ac8f;
case 0x49ac90:goto L49ac90;
case 0x49ac93:c.instructions+=3;goto B49ac93;
case 0x49ac98:c.instructions+=2;goto B49ac98;
case 0x49ac99:c.instructions+=1;goto B49ac99;
case 0x49ac9e:goto L49ac9e;
case 0x49aca1:c.instructions+=2;goto B49aca1;
case 0x49aca2:c.instructions+=1;goto B49aca2;
case 0x49acb0:goto L49acb0;
case 0x49acb4:c.instructions+=4;goto B49acb4;
case 0x49acb9:c.instructions+=3;goto B49acb9;
case 0x49acba:c.instructions+=2;goto B49acba;
case 0x49acbc:c.instructions+=1;goto B49acbc;
case 0x49acbe:goto L49acbe;
case 0x49acc3:c.instructions+=1;goto B49acc3;
case 0x49acc5:goto L49acc5;
case 0x49accb:c.instructions+=3;goto B49accb;
case 0x49accd:c.instructions+=2;goto B49accd;
case 0x49acd0:c.instructions+=1;goto B49acd0;
case 0x49acd6:goto L49acd6;
case 0x49acd8:c.instructions+=3;goto B49acd8;
case 0x49acd9:c.instructions+=2;goto B49acd9;
case 0x49acdb:c.instructions+=1;goto B49acdb;
case 0x49acde:goto L49acde;
case 0x49ace0:c.instructions+=2;goto B49ace0;
case 0x49ace2:c.instructions+=1;goto B49ace2;
case 0x49ace5:goto L49ace5;
case 0x49ace6:c.instructions+=1;goto B49ace6;
case 0x49acf0:goto L49acf0;
case 0x49acf1:c.instructions+=5;goto B49acf1;
case 0x49acf3:c.instructions+=4;goto B49acf3;
case 0x49acf6:c.instructions+=3;goto B49acf6;
case 0x49acfb:c.instructions+=2;goto B49acfb;
case 0x49acfc:c.instructions+=1;goto B49acfc;
case 0x49ad01:goto L49ad01;
case 0x49ad06:c.instructions+=3;goto B49ad06;
case 0x49ad09:c.instructions+=2;goto B49ad09;
case 0x49ad0b:c.instructions+=1;goto B49ad0b;
case 0x49ad0d:goto L49ad0d;
case 0x49ad10:c.instructions+=3;goto B49ad10;
case 0x49ad15:c.instructions+=2;goto B49ad15;
case 0x49ad16:c.instructions+=1;goto B49ad16;
case 0x49ad1b:goto L49ad1b;
case 0x49ad1e:c.instructions+=2;goto B49ad1e;
case 0x49ad1f:c.instructions+=1;goto B49ad1f;
case 0x49ad20:goto L49ad20;
case 0x49ad23:c.instructions+=3;goto B49ad23;
case 0x49ad28:c.instructions+=2;goto B49ad28;
case 0x49ad29:c.instructions+=1;goto B49ad29;
case 0x49ad2e:goto L49ad2e;
case 0x49ad31:c.instructions+=2;goto B49ad31;
case 0x49ad32:c.instructions+=1;goto B49ad32;
case 0x49ad40:goto L49ad40;
case 0x49ad44:c.instructions+=4;goto B49ad44;
case 0x49ad49:c.instructions+=3;goto B49ad49;
case 0x49ad4a:c.instructions+=2;goto B49ad4a;
case 0x49ad4c:c.instructions+=1;goto B49ad4c;
case 0x49ad4e:goto L49ad4e;
case 0x49ad53:c.instructions+=1;goto B49ad53;
case 0x49ad55:goto L49ad55;
case 0x49ad5b:c.instructions+=4;goto B49ad5b;
case 0x49ad61:c.instructions+=3;goto B49ad61;
case 0x49ad63:c.instructions+=2;goto B49ad63;
case 0x49ad66:c.instructions+=1;goto B49ad66;
case 0x49ad68:goto L49ad68;
case 0x49ad6e:c.instructions+=1;goto B49ad6e;
case 0x49ad70:goto L49ad70;
case 0x49ad76:goto L49ad76;
case 0x49ad77:c.instructions+=4;goto B49ad77;
case 0x49ad7d:c.instructions+=3;goto B49ad7d;
case 0x49ad83:c.instructions+=2;goto B49ad83;
case 0x49ad85:c.instructions+=1;goto B49ad85;
case 0x49ad87:goto L49ad87;
case 0x49ad89:c.instructions+=1;goto B49ad89;
case 0x49ad8e:goto L49ad8e;
case 0x49ad8f:c.instructions+=4;goto B49ad8f;
case 0x49ad91:c.instructions+=3;goto B49ad91;
case 0x49ad93:c.instructions+=2;goto B49ad93;
case 0x49ad95:c.instructions+=1;goto B49ad95;
case 0x49ad9a:goto L49ad9a;
case 0x49ad9c:c.instructions+=3;goto B49ad9c;
case 0x49ad9d:c.instructions+=2;goto B49ad9d;
case 0x49ad9f:c.instructions+=1;goto B49ad9f;
case 0x49ada2:goto L49ada2;
case 0x49ada3:c.instructions+=1;goto B49ada3;
case 0x49ada6:goto L49ada6;
case 0x49ada8:c.instructions+=1;goto B49ada8;
case 0x49ada9:goto L49ada9;
case 0x49adab:c.instructions+=2;goto B49adab;
case 0x49adad:c.instructions+=1;goto B49adad;
case 0x49adb0:goto L49adb0;
case 0x49adb1:c.instructions+=1;goto B49adb1;
case 0x49adc0:goto L49adc0;
case 0x49adc1:c.instructions+=5;goto B49adc1;
case 0x49adc3:c.instructions+=4;goto B49adc3;
case 0x49adc6:c.instructions+=3;goto B49adc6;
case 0x49adcb:c.instructions+=2;goto B49adcb;
case 0x49adcc:c.instructions+=1;goto B49adcc;
case 0x49add1:goto L49add1;
case 0x49add7:c.instructions+=6;goto B49add7;
case 0x49addd:c.instructions+=5;goto B49addd;
case 0x49ade0:c.instructions+=4;goto B49ade0;
case 0x49ade2:c.instructions+=3;goto B49ade2;
case 0x49ade5:c.instructions+=2;goto B49ade5;
case 0x49adea:c.instructions+=1;goto B49adea;
case 0x49adec:goto L49adec;
case 0x49adf1:goto L49adf1;
case 0x49adf4:c.instructions+=3;goto B49adf4;
case 0x49adf5:c.instructions+=2;goto B49adf5;
case 0x49adf6:c.instructions+=1;goto B49adf6;
case 0x49adfb:goto L49adfb;
case 0x49adfe:c.instructions+=2;goto B49adfe;
case 0x49adff:c.instructions+=1;goto B49adff;
case 0x49ae00:goto L49ae00;
case 0x49ae04:c.instructions+=4;goto B49ae04;
case 0x49ae09:c.instructions+=3;goto B49ae09;
case 0x49ae0a:c.instructions+=2;goto B49ae0a;
case 0x49ae0c:c.instructions+=1;goto B49ae0c;
case 0x49ae0e:goto L49ae0e;
case 0x49ae13:c.instructions+=1;goto B49ae13;
case 0x49ae15:goto L49ae15;
case 0x49ae1b:c.instructions+=3;goto B49ae1b;
case 0x49ae1d:c.instructions+=2;goto B49ae1d;
case 0x49ae20:c.instructions+=1;goto B49ae20;
case 0x49ae26:goto L49ae26;
case 0x49ae28:c.instructions+=3;goto B49ae28;
case 0x49ae29:c.instructions+=2;goto B49ae29;
case 0x49ae2b:c.instructions+=1;goto B49ae2b;
case 0x49ae2e:goto L49ae2e;
case 0x49ae30:c.instructions+=2;goto B49ae30;
case 0x49ae32:c.instructions+=1;goto B49ae32;
case 0x49ae35:goto L49ae35;
case 0x49ae36:c.instructions+=1;goto B49ae36;
case 0x49ae40:goto L49ae40;
case 0x49ae41:c.instructions+=5;goto B49ae41;
case 0x49ae43:c.instructions+=4;goto B49ae43;
case 0x49ae46:c.instructions+=3;goto B49ae46;
case 0x49ae4b:c.instructions+=2;goto B49ae4b;
case 0x49ae4c:c.instructions+=1;goto B49ae4c;
case 0x49ae51:goto L49ae51;
case 0x49ae56:c.instructions+=8;goto B49ae56;
case 0x49ae59:c.instructions+=7;goto B49ae59;
case 0x49ae5b:c.instructions+=6;goto B49ae5b;
case 0x49ae5d:c.instructions+=5;goto B49ae5d;
case 0x49ae62:c.instructions+=4;goto B49ae62;
case 0x49ae67:c.instructions+=3;goto B49ae67;
case 0x49ae68:c.instructions+=2;goto B49ae68;
case 0x49ae69:c.instructions+=1;goto B49ae69;
case 0x49ae6e:goto L49ae6e;
case 0x49ae71:c.instructions+=2;goto B49ae71;
case 0x49ae72:c.instructions+=1;goto B49ae72;
case 0x49ae80:goto L49ae80;
case 0x49ae81:c.instructions+=4;goto B49ae81;
case 0x49ae83:c.instructions+=3;goto B49ae83;
case 0x49ae87:c.instructions+=2;goto B49ae87;
case 0x49ae8d:c.instructions+=1;goto B49ae8d;
case 0x49ae8f:goto L49ae8f;
case 0x49ae95:c.instructions+=1;goto B49ae95;
case 0x49ae97:goto L49ae97;
case 0x49ae9c:c.instructions+=2;goto B49ae9c;
case 0x49ae9e:c.instructions+=1;goto B49ae9e;
case 0x49aea0:goto L49aea0;
case 0x49aea7:c.instructions+=4;goto B49aea7;
case 0x49aea9:c.instructions+=3;goto B49aea9;
case 0x49aeaa:c.instructions+=2;goto B49aeaa;
case 0x49aeac:c.instructions+=1;goto B49aeac;
case 0x49aeaf:goto L49aeaf;
case 0x49aeb1:c.instructions+=2;goto B49aeb1;
case 0x49aeb3:c.instructions+=1;goto B49aeb3;
case 0x49aeb6:goto L49aeb6;
case 0x49aeb7:c.instructions+=1;goto B49aeb7;
case 0x49aeba:goto L49aeba;
case 0x49aebc:c.instructions+=1;goto B49aebc;
case 0x49aebe:goto L49aebe;
case 0x49aec5:goto L49aec5;
case 0x49aec7:c.instructions+=3;goto B49aec7;
case 0x49aec8:c.instructions+=2;goto B49aec8;
case 0x49aeca:c.instructions+=1;goto B49aeca;
case 0x49aecd:goto L49aecd;
case 0x49aecf:c.instructions+=2;goto B49aecf;
case 0x49aed1:c.instructions+=1;goto B49aed1;
case 0x49aed4:goto L49aed4;
case 0x49aed5:c.instructions+=1;goto B49aed5;
case 0x49aee0:goto L49aee0;
case 0x49aee1:c.instructions+=5;goto B49aee1;
case 0x49aee3:c.instructions+=4;goto B49aee3;
case 0x49aee6:c.instructions+=3;goto B49aee6;
case 0x49aeeb:c.instructions+=2;goto B49aeeb;
case 0x49aeec:c.instructions+=1;goto B49aeec;
case 0x49aef1:goto L49aef1;
case 0x49aef6:c.instructions+=8;goto B49aef6;
case 0x49aef9:c.instructions+=7;goto B49aef9;
case 0x49aefb:c.instructions+=6;goto B49aefb;
case 0x49aefd:c.instructions+=5;goto B49aefd;
case 0x49af02:c.instructions+=4;goto B49af02;
case 0x49af07:c.instructions+=3;goto B49af07;
case 0x49af08:c.instructions+=2;goto B49af08;
case 0x49af09:c.instructions+=1;goto B49af09;
case 0x49af0e:goto L49af0e;
case 0x49af11:c.instructions+=2;goto B49af11;
case 0x49af12:c.instructions+=1;goto B49af12;
case 0x49af20:goto L49af20;
case 0x49af25:c.instructions+=5;goto B49af25;
case 0x49af26:c.instructions+=4;goto B49af26;
case 0x49af28:c.instructions+=3;goto B49af28;
case 0x49af2c:c.instructions+=2;goto B49af2c;
case 0x49af32:c.instructions+=1;goto B49af32;
case 0x49af34:goto L49af34;
case 0x49af35:c.instructions+=1;goto B49af35;
case 0x49af37:goto L49af37;
case 0x49af3c:c.instructions+=1;goto B49af3c;
case 0x49af3e:goto L49af3e;
case 0x49af44:c.instructions+=1;goto B49af44;
case 0x49af46:goto L49af46;
case 0x49af47:c.instructions+=2;goto B49af47;
case 0x49af4a:c.instructions+=1;goto B49af4a;
case 0x49af4c:goto L49af4c;
case 0x49af4e:goto L49af4e;
case 0x49af53:c.instructions+=4;goto B49af53;
case 0x49af55:c.instructions+=3;goto B49af55;
case 0x49af56:c.instructions+=2;goto B49af56;
case 0x49af58:c.instructions+=1;goto B49af58;
case 0x49af5b:goto L49af5b;
case 0x49af5d:c.instructions+=2;goto B49af5d;
case 0x49af5f:c.instructions+=1;goto B49af5f;
case 0x49af62:goto L49af62;
case 0x49af63:c.instructions+=1;goto B49af63;
case 0x49af70:goto L49af70;
case 0x49af71:c.instructions+=5;goto B49af71;
case 0x49af73:c.instructions+=4;goto B49af73;
case 0x49af76:c.instructions+=3;goto B49af76;
case 0x49af7b:c.instructions+=2;goto B49af7b;
case 0x49af7c:c.instructions+=1;goto B49af7c;
case 0x49af81:goto L49af81;
case 0x49af86:c.instructions+=4;goto B49af86;
case 0x49af88:c.instructions+=3;goto B49af88;
case 0x49af8b:c.instructions+=2;goto B49af8b;
case 0x49af8d:c.instructions+=1;goto B49af8d;
case 0x49af8f:goto L49af8f;
case 0x49af90:c.instructions+=1;goto B49af90;
case 0x49af92:goto L49af92;
case 0x49af93:c.instructions+=1;goto B49af93;
case 0x49af95:goto L49af95;
case 0x49af9a:c.instructions+=4;goto B49af9a;
case 0x49af9b:c.instructions+=3;goto B49af9b;
case 0x49af9e:c.instructions+=2;goto B49af9e;
case 0x49af9f:c.instructions+=1;goto B49af9f;
case 0x49afa4:goto L49afa4;
case 0x49afa7:c.instructions+=2;goto B49afa7;
case 0x49afa8:c.instructions+=1;goto B49afa8;
case 0x49afa9:goto L49afa9;
case 0x49afae:c.instructions+=4;goto B49afae;
case 0x49afaf:c.instructions+=3;goto B49afaf;
case 0x49afb2:c.instructions+=2;goto B49afb2;
case 0x49afb3:c.instructions+=1;goto B49afb3;
case 0x49afb8:goto L49afb8;
case 0x49afbb:c.instructions+=2;goto B49afbb;
case 0x49afbc:c.instructions+=1;goto B49afbc;
case 0x49afbd:goto L49afbd;
case 0x49afc2:goto L49afc2;
case 0x49afc3:c.instructions+=3;goto B49afc3;
case 0x49afc6:c.instructions+=2;goto B49afc6;
case 0x49afc7:c.instructions+=1;goto B49afc7;
case 0x49afcc:goto L49afcc;
case 0x49afcf:c.instructions+=2;goto B49afcf;
case 0x49afd0:c.instructions+=1;goto B49afd0;
case 0x49afe0:goto L49afe0;
case 0x49afe6:c.instructions+=9;goto B49afe6;
case 0x49afed:c.instructions+=8;goto B49afed;
case 0x49afee:c.instructions+=7;goto B49afee;
case 0x49aff0:c.instructions+=6;goto B49aff0;
case 0x49aff2:c.instructions+=5;goto B49aff2;
case 0x49aff5:c.instructions+=4;goto B49aff5;
case 0x49aff9:c.instructions+=3;goto B49aff9;
case 0x49affc:c.instructions+=2;goto B49affc;
case 0x49affd:c.instructions+=1;goto B49affd;
default:missing_instruction(c.pc);}
B49a000:L49a000:{c.instructions+=1;NFSU2_TR(0x49a000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a005ull));
TAIL_STATIC(0x501290u,501);
}
B49a005:L49a005:{c.instructions+=3;NFSU2_TR(0x49a005);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a006:{NFSU2_TR(0x49a006);
w4(R+4,u32(0x85ef50ull));
}
B49a00b:{NFSU2_TR(0x49a00b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a010ull));
TAIL_STATIC(0x5012e0u,501);
}
B49a010:L49a010:{c.instructions+=1;NFSU2_TR(0x49a010);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a015ull));
TAIL_STATIC(0x510c70u,510);
}
B49a015:L49a015:{c.instructions+=2;NFSU2_TR(0x49a015);
w4(R+4,u32(0x827e88ull));
}
B49a01a:{NFSU2_TR(0x49a01a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a01full));
TAIL_STATIC(0x430310u,430);
}
B49a01f:L49a01f:{c.instructions+=6;NFSU2_TR(0x49a01f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a022:{NFSU2_TR(0x49a022);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49a025:{NFSU2_TR(0x49a025);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a026:{NFSU2_TR(0x49a026);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a028:{NFSU2_TR(0x49a028);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a029:{NFSU2_TR(0x49a029);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a02eull));
TAIL_STATIC(0x50d150u,50d);
}
B49a02e:L49a02e:{c.instructions+=7;NFSU2_TR(0x49a02e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a031:{NFSU2_TR(0x49a031);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a033:{NFSU2_TR(0x49a033);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a038:{NFSU2_TR(0x49a038);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a03d:{NFSU2_TR(0x49a03d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a03e:{NFSU2_TR(0x49a03e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49a041:{NFSU2_TR(0x49a041);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a046ull));
TAIL_STATIC(0x537c00u,537);
}
B49a046:L49a046:{c.instructions+=4;NFSU2_TR(0x49a046);
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
B49a049:{NFSU2_TR(0x49a049);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49a04a:{NFSU2_TR(0x49a04a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49a04b:{NFSU2_TR(0x49a04b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a050:L49a050:{c.instructions+=7;NFSU2_TR(0x49a050);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a051:{NFSU2_TR(0x49a051);
__builtin_memmove((R+24),(R+4),4);
}
B49a053:{NFSU2_TR(0x49a053);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a056:{NFSU2_TR(0x49a056);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a057:{NFSU2_TR(0x49a057);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49a05b:{NFSU2_TR(0x49a05b);
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
B49a05d:{NFSU2_TR(0x49a05d);
if(r1(R+518)){{goto L49a0fd;}}
}
B49a063:L49a063:{c.instructions+=7;NFSU2_TR(0x49a063);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B49a067:{NFSU2_TR(0x49a067);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a06a:{NFSU2_TR(0x49a06a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a06c:{NFSU2_TR(0x49a06c);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a071:{NFSU2_TR(0x49a071);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a072:{NFSU2_TR(0x49a072);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a073:{NFSU2_TR(0x49a073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a078ull));
TAIL_STATIC(0x537c00u,537);
}
B49a078:L49a078:{c.instructions+=8;NFSU2_TR(0x49a078);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49a07b:{NFSU2_TR(0x49a07b);
u8 U[16];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B49a07f:{NFSU2_TR(0x49a07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a082:{NFSU2_TR(0x49a082);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a084:{NFSU2_TR(0x49a084);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a089:{NFSU2_TR(0x49a089);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a08a:{NFSU2_TR(0x49a08a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a08b:{NFSU2_TR(0x49a08b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a090ull));
TAIL_STATIC(0x537c00u,537);
}
B49a090:L49a090:{c.instructions+=7;NFSU2_TR(0x49a090);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49a093:{NFSU2_TR(0x49a093);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B49a097:{NFSU2_TR(0x49a097);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a09a:{NFSU2_TR(0x49a09a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a09c:{NFSU2_TR(0x49a09c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a09d:{NFSU2_TR(0x49a09d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a09e:{NFSU2_TR(0x49a09e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a0a3ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49a0a3:L49a0a3:{c.instructions+=7;NFSU2_TR(0x49a0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a0a6:{NFSU2_TR(0x49a0a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49a0a9:{NFSU2_TR(0x49a0a9);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B49a0ad:{NFSU2_TR(0x49a0ad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a0af:{NFSU2_TR(0x49a0af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a0b0:{NFSU2_TR(0x49a0b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a0b1:{NFSU2_TR(0x49a0b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a0b6ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49a0b6:L49a0b6:{c.instructions+=6;NFSU2_TR(0x49a0b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a0b9:{NFSU2_TR(0x49a0b9);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B49a0bd:{NFSU2_TR(0x49a0bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a0c0:{NFSU2_TR(0x49a0c0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a0c1:{NFSU2_TR(0x49a0c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a0c2:{NFSU2_TR(0x49a0c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a0c7ull));
TAIL_STATIC(0x52cea0u,52c);
}
B49a0c7:L49a0c7:{c.instructions+=9;NFSU2_TR(0x49a0c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a0ca:{NFSU2_TR(0x49a0ca);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B49a0ce:{NFSU2_TR(0x49a0ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a0d1:{NFSU2_TR(0x49a0d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B49a0d4:{NFSU2_TR(0x49a0d4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a0d6:{NFSU2_TR(0x49a0d6);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a0db:{NFSU2_TR(0x49a0db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a0dc:{NFSU2_TR(0x49a0dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a0dd:{NFSU2_TR(0x49a0dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a0e2ull));
TAIL_STATIC(0x537c00u,537);
}
B49a0e2:L49a0e2:{c.instructions+=8;NFSU2_TR(0x49a0e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a0e5:{NFSU2_TR(0x49a0e5);
u8 U[16];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B49a0e9:{NFSU2_TR(0x49a0e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a0ec:{NFSU2_TR(0x49a0ec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a0ee:{NFSU2_TR(0x49a0ee);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a0f3:{NFSU2_TR(0x49a0f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a0f4:{NFSU2_TR(0x49a0f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a0f5:{NFSU2_TR(0x49a0f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a0faull));
TAIL_STATIC(0x537c00u,537);
}
B49a0fa:L49a0fa:{c.instructions+=1;NFSU2_TR(0x49a0fa);
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
B49a0fd:L49a0fd:{c.instructions+=3;NFSU2_TR(0x49a0fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49a0fe:{NFSU2_TR(0x49a0fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49a0ff:{NFSU2_TR(0x49a0ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a110:L49a110:{c.instructions+=7;NFSU2_TR(0x49a110);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a111:{NFSU2_TR(0x49a111);
__builtin_memmove((R+24),(R+4),4);
}
B49a113:{NFSU2_TR(0x49a113);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a119:{NFSU2_TR(0x49a119);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a11a:{NFSU2_TR(0x49a11a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49a11e:{NFSU2_TR(0x49a11e);
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
B49a120:{NFSU2_TR(0x49a120);
if(r1(R+518)){{goto L49a163;}}
}
B49a122:L49a122:{c.instructions+=2;NFSU2_TR(0x49a122);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49a125:{NFSU2_TR(0x49a125);
if(r1(R+518)){{goto L49a142;}}
}
B49a127:L49a127:{c.instructions+=7;NFSU2_TR(0x49a127);
u8 U[16];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B49a12e:{NFSU2_TR(0x49a12e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a131:{NFSU2_TR(0x49a131);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a133:{NFSU2_TR(0x49a133);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a138:{NFSU2_TR(0x49a138);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a139:{NFSU2_TR(0x49a139);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a13a:{NFSU2_TR(0x49a13a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a13full));
TAIL_STATIC(0x537c00u,537);
}
B49a13f:L49a13f:{c.instructions+=1;NFSU2_TR(0x49a13f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49a142:L49a142:{c.instructions+=8;NFSU2_TR(0x49a142);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a145:{NFSU2_TR(0x49a145);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a147:{NFSU2_TR(0x49a147);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49a14d:{NFSU2_TR(0x49a14d);
u8 U[16];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B49a154:{NFSU2_TR(0x49a154);
u8 U[4];
w4(U+0,u32(0x78f9c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a159:{NFSU2_TR(0x49a159);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a15a:{NFSU2_TR(0x49a15a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a15b:{NFSU2_TR(0x49a15b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a160ull));
TAIL_STATIC(0x537c00u,537);
}
B49a160:L49a160:{c.instructions+=1;NFSU2_TR(0x49a160);
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
B49a163:L49a163:{c.instructions+=3;NFSU2_TR(0x49a163);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49a164:{NFSU2_TR(0x49a164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49a165:{NFSU2_TR(0x49a165);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a170:L49a170:{c.instructions+=4;NFSU2_TR(0x49a170);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a171:{NFSU2_TR(0x49a171);
__builtin_memmove((R+28),(R+4),4);
}
B49a173:{NFSU2_TR(0x49a173);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B49a17a:{NFSU2_TR(0x49a17a);
if(r1(R+518)){{goto L49a1b8;}}
}
B49a17c:L49a17c:{c.instructions+=5;NFSU2_TR(0x49a17c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a17d:{NFSU2_TR(0x49a17d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a17e:{NFSU2_TR(0x49a17e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49a184:{NFSU2_TR(0x49a184);
w4(R+12,u32(0x3ull));
}
B49a189:{NFSU2_TR(0x49a189);
__builtin_memmove((R+16),(R+16),4);
}
B49a190:L49a190:{c.instructions+=7;NFSU2_TR(0x49a190);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49a192:{NFSU2_TR(0x49a192);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a195:{NFSU2_TR(0x49a195);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a197:{NFSU2_TR(0x49a197);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a19c:{NFSU2_TR(0x49a19c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a19d:{NFSU2_TR(0x49a19d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a19e:{NFSU2_TR(0x49a19e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a1a3ull));
TAIL_STATIC(0x537c00u,537);
}
B49a1a3:L49a1a3:{c.instructions+=4;NFSU2_TR(0x49a1a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B49a1a6:{NFSU2_TR(0x49a1a6);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B49a1a9:{NFSU2_TR(0x49a1a9);
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
B49a1aa:{NFSU2_TR(0x49a1aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49a190u);}goto L49a190;}}
}
B49a1ac:L49a1ac:{c.instructions+=3;NFSU2_TR(0x49a1ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49a1ad:{NFSU2_TR(0x49a1ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B49a1b7:{NFSU2_TR(0x49a1b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49a1b8:L49a1b8:{c.instructions+=2;NFSU2_TR(0x49a1b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49a1b9:{NFSU2_TR(0x49a1b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a1c0:L49a1c0:{c.instructions+=3;NFSU2_TR(0x49a1c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49a1c3:{NFSU2_TR(0x49a1c3);
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
B49a1c5:{NFSU2_TR(0x49a1c5);
if(r1(R+518)){{goto L49a1df;}}
}
B49a1c7:L49a1c7:{c.instructions+=4;NFSU2_TR(0x49a1c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a1cb:{NFSU2_TR(0x49a1cb);
u8 U[16];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B49a1d2:{NFSU2_TR(0x49a1d2);
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
B49a1d4:{NFSU2_TR(0x49a1d4);
if(r1(R+518)){{goto L49a1df;}}
}
B49a1d6:L49a1d6:{c.instructions+=5;NFSU2_TR(0x49a1d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a1d8:{NFSU2_TR(0x49a1d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a1da:{NFSU2_TR(0x49a1da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a1dc:{NFSU2_TR(0x49a1dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a1dd:{NFSU2_TR(0x49a1dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a1dfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B49a1df:L49a1df:{c.instructions+=1;NFSU2_TR(0x49a1df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a1f0:L49a1f0:{c.instructions+=8;NFSU2_TR(0x49a1f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a1f1:{NFSU2_TR(0x49a1f1);
__builtin_memmove((R+24),(R+4),4);
}
B49a1f3:{NFSU2_TR(0x49a1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a1f6:{NFSU2_TR(0x49a1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a1f9:{NFSU2_TR(0x49a1f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a1fb:{NFSU2_TR(0x49a1fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a1fc:{NFSU2_TR(0x49a1fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a1fd:{NFSU2_TR(0x49a1fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a202ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49a202:L49a202:{c.instructions+=5;NFSU2_TR(0x49a202);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a205:{NFSU2_TR(0x49a205);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a208:{NFSU2_TR(0x49a208);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a209:{NFSU2_TR(0x49a209);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a20a:{NFSU2_TR(0x49a20a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a20full));
TAIL_STATIC(0x5379c0u,537);
}
B49a20f:L49a20f:{c.instructions+=2;NFSU2_TR(0x49a20f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a210:{NFSU2_TR(0x49a210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a215ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a215:L49a215:{c.instructions+=5;NFSU2_TR(0x49a215);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a218:{NFSU2_TR(0x49a218);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a21b:{NFSU2_TR(0x49a21b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a21c:{NFSU2_TR(0x49a21c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a21d:{NFSU2_TR(0x49a21d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a222ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a222:L49a222:{c.instructions+=2;NFSU2_TR(0x49a222);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a223:{NFSU2_TR(0x49a223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a228ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a228:L49a228:{c.instructions+=6;NFSU2_TR(0x49a228);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49a22b:{NFSU2_TR(0x49a22b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a22e:{NFSU2_TR(0x49a22e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a230:{NFSU2_TR(0x49a230);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a231:{NFSU2_TR(0x49a231);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a232:{NFSU2_TR(0x49a232);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a237ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49a237:L49a237:{c.instructions+=5;NFSU2_TR(0x49a237);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a23a:{NFSU2_TR(0x49a23a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a23d:{NFSU2_TR(0x49a23d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a23e:{NFSU2_TR(0x49a23e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a23f:{NFSU2_TR(0x49a23f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a244ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a244:L49a244:{c.instructions+=2;NFSU2_TR(0x49a244);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a245:{NFSU2_TR(0x49a245);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a24aull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a24a:L49a24a:{c.instructions+=5;NFSU2_TR(0x49a24a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a24d:{NFSU2_TR(0x49a24d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a250:{NFSU2_TR(0x49a250);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a251:{NFSU2_TR(0x49a251);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a252:{NFSU2_TR(0x49a252);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a257ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a257:L49a257:{c.instructions+=3;NFSU2_TR(0x49a257);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B49a25a:{NFSU2_TR(0x49a25a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a25b:{NFSU2_TR(0x49a25b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a260ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a260:L49a260:{c.instructions+=6;NFSU2_TR(0x49a260);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a263:{NFSU2_TR(0x49a263);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49a266:{NFSU2_TR(0x49a266);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a268:{NFSU2_TR(0x49a268);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a269:{NFSU2_TR(0x49a269);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a26a:{NFSU2_TR(0x49a26a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a26full));
TAIL_STATIC(0x51cda0u,51c);
}
B49a26f:L49a26f:{c.instructions+=5;NFSU2_TR(0x49a26f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a272:{NFSU2_TR(0x49a272);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a275:{NFSU2_TR(0x49a275);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a276:{NFSU2_TR(0x49a276);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a277:{NFSU2_TR(0x49a277);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a27cull));
TAIL_STATIC(0x5379c0u,537);
}
B49a27c:L49a27c:{c.instructions+=2;NFSU2_TR(0x49a27c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a27d:{NFSU2_TR(0x49a27d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a282ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a282:L49a282:{c.instructions+=5;NFSU2_TR(0x49a282);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a285:{NFSU2_TR(0x49a285);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a288:{NFSU2_TR(0x49a288);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a289:{NFSU2_TR(0x49a289);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a28a:{NFSU2_TR(0x49a28a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a28full));
TAIL_STATIC(0x5379c0u,537);
}
B49a28f:L49a28f:{c.instructions+=2;NFSU2_TR(0x49a28f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a290:{NFSU2_TR(0x49a290);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a295ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a295:L49a295:{c.instructions+=6;NFSU2_TR(0x49a295);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a298:{NFSU2_TR(0x49a298);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a29b:{NFSU2_TR(0x49a29b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a29d:{NFSU2_TR(0x49a29d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a29e:{NFSU2_TR(0x49a29e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a29f:{NFSU2_TR(0x49a29f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a2a4ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49a2a4:L49a2a4:{c.instructions+=5;NFSU2_TR(0x49a2a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a2a7:{NFSU2_TR(0x49a2a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a2aa:{NFSU2_TR(0x49a2aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a2ab:{NFSU2_TR(0x49a2ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a2ac:{NFSU2_TR(0x49a2ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a2b1ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a2b1:L49a2b1:{c.instructions+=2;NFSU2_TR(0x49a2b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a2b2:{NFSU2_TR(0x49a2b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a2b7ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a2b7:L49a2b7:{c.instructions+=6;NFSU2_TR(0x49a2b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a2ba:{NFSU2_TR(0x49a2ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49a2bd:{NFSU2_TR(0x49a2bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B49a2c0:{NFSU2_TR(0x49a2c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a2c1:{NFSU2_TR(0x49a2c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a2c2:{NFSU2_TR(0x49a2c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a2c7ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a2c7:L49a2c7:{c.instructions+=2;NFSU2_TR(0x49a2c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a2c8:{NFSU2_TR(0x49a2c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a2cdull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a2cd:L49a2cd:{c.instructions+=3;NFSU2_TR(0x49a2cd);
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
B49a2d0:{NFSU2_TR(0x49a2d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49a2d1:{NFSU2_TR(0x49a2d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a2e0:L49a2e0:{c.instructions+=8;NFSU2_TR(0x49a2e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a2e1:{NFSU2_TR(0x49a2e1);
__builtin_memmove((R+24),(R+4),4);
}
B49a2e3:{NFSU2_TR(0x49a2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a2e6:{NFSU2_TR(0x49a2e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a2e9:{NFSU2_TR(0x49a2e9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a2eb:{NFSU2_TR(0x49a2eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a2ec:{NFSU2_TR(0x49a2ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a2ed:{NFSU2_TR(0x49a2ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a2f2ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49a2f2:L49a2f2:{c.instructions+=6;NFSU2_TR(0x49a2f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49a2f5:{NFSU2_TR(0x49a2f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a2f8:{NFSU2_TR(0x49a2f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a2fa:{NFSU2_TR(0x49a2fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a2fb:{NFSU2_TR(0x49a2fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a2fc:{NFSU2_TR(0x49a2fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a301ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49a301:L49a301:{c.instructions+=5;NFSU2_TR(0x49a301);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a304:{NFSU2_TR(0x49a304);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a307:{NFSU2_TR(0x49a307);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a308:{NFSU2_TR(0x49a308);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a309:{NFSU2_TR(0x49a309);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a30eull));
TAIL_STATIC(0x5379c0u,537);
}
B49a30e:L49a30e:{c.instructions+=2;NFSU2_TR(0x49a30e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a30f:{NFSU2_TR(0x49a30f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a314ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a314:L49a314:{c.instructions+=5;NFSU2_TR(0x49a314);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a317:{NFSU2_TR(0x49a317);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a31a:{NFSU2_TR(0x49a31a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a31b:{NFSU2_TR(0x49a31b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a31c:{NFSU2_TR(0x49a31c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a321ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a321:L49a321:{c.instructions+=2;NFSU2_TR(0x49a321);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a322:{NFSU2_TR(0x49a322);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a327ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a327:L49a327:{c.instructions+=6;NFSU2_TR(0x49a327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a32a:{NFSU2_TR(0x49a32a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49a32d:{NFSU2_TR(0x49a32d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a32f:{NFSU2_TR(0x49a32f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a330:{NFSU2_TR(0x49a330);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a331:{NFSU2_TR(0x49a331);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a336ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49a336:L49a336:{c.instructions+=5;NFSU2_TR(0x49a336);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a339:{NFSU2_TR(0x49a339);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a33c:{NFSU2_TR(0x49a33c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a33d:{NFSU2_TR(0x49a33d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a33e:{NFSU2_TR(0x49a33e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a343ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a343:L49a343:{c.instructions+=3;NFSU2_TR(0x49a343);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B49a346:{NFSU2_TR(0x49a346);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a347:{NFSU2_TR(0x49a347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a34cull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a34c:L49a34c:{c.instructions+=5;NFSU2_TR(0x49a34c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a34f:{NFSU2_TR(0x49a34f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a352:{NFSU2_TR(0x49a352);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a353:{NFSU2_TR(0x49a353);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a354:{NFSU2_TR(0x49a354);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a359ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a359:L49a359:{c.instructions+=2;NFSU2_TR(0x49a359);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a35a:{NFSU2_TR(0x49a35a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a35full));
TAIL_STATIC(0x50ca00u,50c);
}
B49a35f:L49a35f:{c.instructions+=6;NFSU2_TR(0x49a35f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a362:{NFSU2_TR(0x49a362);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a365:{NFSU2_TR(0x49a365);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a367:{NFSU2_TR(0x49a367);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a368:{NFSU2_TR(0x49a368);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a369:{NFSU2_TR(0x49a369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a36eull));
TAIL_STATIC(0x51cda0u,51c);
}
B49a36e:L49a36e:{c.instructions+=5;NFSU2_TR(0x49a36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a371:{NFSU2_TR(0x49a371);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a374:{NFSU2_TR(0x49a374);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a375:{NFSU2_TR(0x49a375);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a376:{NFSU2_TR(0x49a376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a37bull));
TAIL_STATIC(0x5379c0u,537);
}
B49a37b:L49a37b:{c.instructions+=2;NFSU2_TR(0x49a37b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a37c:{NFSU2_TR(0x49a37c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a381ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a381:L49a381:{c.instructions+=5;NFSU2_TR(0x49a381);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a384:{NFSU2_TR(0x49a384);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49a387:{NFSU2_TR(0x49a387);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a388:{NFSU2_TR(0x49a388);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a389:{NFSU2_TR(0x49a389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a38eull));
TAIL_STATIC(0x5379c0u,537);
}
B49a38e:L49a38e:{c.instructions+=2;NFSU2_TR(0x49a38e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a38f:{NFSU2_TR(0x49a38f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a394ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a394:L49a394:{c.instructions+=3;NFSU2_TR(0x49a394);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49a397:{NFSU2_TR(0x49a397);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49a398:{NFSU2_TR(0x49a398);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a3a0:L49a3a0:{c.instructions+=8;NFSU2_TR(0x49a3a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3a1:{NFSU2_TR(0x49a3a1);
__builtin_memmove((R+24),(R+4),4);
}
B49a3a3:{NFSU2_TR(0x49a3a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a3a6:{NFSU2_TR(0x49a3a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a3a9:{NFSU2_TR(0x49a3a9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3ab:{NFSU2_TR(0x49a3ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3ac:{NFSU2_TR(0x49a3ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3ad:{NFSU2_TR(0x49a3ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a3b2ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49a3b2:L49a3b2:{c.instructions+=5;NFSU2_TR(0x49a3b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a3b5:{NFSU2_TR(0x49a3b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a3b8:{NFSU2_TR(0x49a3b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3b9:{NFSU2_TR(0x49a3b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3ba:{NFSU2_TR(0x49a3ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a3bfull));
TAIL_STATIC(0x5379c0u,537);
}
B49a3bf:L49a3bf:{c.instructions+=2;NFSU2_TR(0x49a3bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3c0:{NFSU2_TR(0x49a3c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a3c5ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a3c5:L49a3c5:{c.instructions+=5;NFSU2_TR(0x49a3c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a3c8:{NFSU2_TR(0x49a3c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a3cb:{NFSU2_TR(0x49a3cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3cc:{NFSU2_TR(0x49a3cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3cd:{NFSU2_TR(0x49a3cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a3d2ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a3d2:L49a3d2:{c.instructions+=2;NFSU2_TR(0x49a3d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3d3:{NFSU2_TR(0x49a3d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a3d8ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a3d8:L49a3d8:{c.instructions+=6;NFSU2_TR(0x49a3d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49a3db:{NFSU2_TR(0x49a3db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a3de:{NFSU2_TR(0x49a3de);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3e0:{NFSU2_TR(0x49a3e0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3e1:{NFSU2_TR(0x49a3e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3e2:{NFSU2_TR(0x49a3e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a3e7ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49a3e7:L49a3e7:{c.instructions+=6;NFSU2_TR(0x49a3e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a3ea:{NFSU2_TR(0x49a3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49a3ed:{NFSU2_TR(0x49a3ed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3ef:{NFSU2_TR(0x49a3ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3f0:{NFSU2_TR(0x49a3f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3f1:{NFSU2_TR(0x49a3f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a3f6ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49a3f6:L49a3f6:{c.instructions+=5;NFSU2_TR(0x49a3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a3f9:{NFSU2_TR(0x49a3f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a3fc:{NFSU2_TR(0x49a3fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3fd:{NFSU2_TR(0x49a3fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a3fe:{NFSU2_TR(0x49a3fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a403ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a403:L49a403:{c.instructions+=3;NFSU2_TR(0x49a403);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B49a406:{NFSU2_TR(0x49a406);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a407:{NFSU2_TR(0x49a407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a40cull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a40c:L49a40c:{c.instructions+=5;NFSU2_TR(0x49a40c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a40f:{NFSU2_TR(0x49a40f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a412:{NFSU2_TR(0x49a412);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a413:{NFSU2_TR(0x49a413);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a414:{NFSU2_TR(0x49a414);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a419ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a419:L49a419:{c.instructions+=2;NFSU2_TR(0x49a419);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a41a:{NFSU2_TR(0x49a41a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a41full));
TAIL_STATIC(0x50ca00u,50c);
}
B49a41f:L49a41f:{c.instructions+=6;NFSU2_TR(0x49a41f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a422:{NFSU2_TR(0x49a422);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a425:{NFSU2_TR(0x49a425);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a427:{NFSU2_TR(0x49a427);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a428:{NFSU2_TR(0x49a428);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a429:{NFSU2_TR(0x49a429);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a42eull));
TAIL_STATIC(0x51cda0u,51c);
}
B49a42e:L49a42e:{c.instructions+=5;NFSU2_TR(0x49a42e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a431:{NFSU2_TR(0x49a431);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a434:{NFSU2_TR(0x49a434);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a435:{NFSU2_TR(0x49a435);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a436:{NFSU2_TR(0x49a436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a43bull));
TAIL_STATIC(0x5379c0u,537);
}
B49a43b:L49a43b:{c.instructions+=2;NFSU2_TR(0x49a43b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a43c:{NFSU2_TR(0x49a43c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a441ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a441:L49a441:{c.instructions+=5;NFSU2_TR(0x49a441);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a444:{NFSU2_TR(0x49a444);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49a447:{NFSU2_TR(0x49a447);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a448:{NFSU2_TR(0x49a448);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a449:{NFSU2_TR(0x49a449);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a44eull));
TAIL_STATIC(0x5379c0u,537);
}
B49a44e:L49a44e:{c.instructions+=2;NFSU2_TR(0x49a44e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a44f:{NFSU2_TR(0x49a44f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a454ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a454:L49a454:{c.instructions+=3;NFSU2_TR(0x49a454);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49a457:{NFSU2_TR(0x49a457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49a458:{NFSU2_TR(0x49a458);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a460:L49a460:{c.instructions+=8;NFSU2_TR(0x49a460);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a461:{NFSU2_TR(0x49a461);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a462:{NFSU2_TR(0x49a462);
__builtin_memmove((R+24),(R+4),4);
}
B49a464:{NFSU2_TR(0x49a464);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a46a:{NFSU2_TR(0x49a46a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a46d:{NFSU2_TR(0x49a46d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a46e:{NFSU2_TR(0x49a46e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a46f:{NFSU2_TR(0x49a46f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a474ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a474:L49a474:{c.instructions+=2;NFSU2_TR(0x49a474);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a475:{NFSU2_TR(0x49a475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a47aull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a47a:L49a47a:{c.instructions+=5;NFSU2_TR(0x49a47a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a480:{NFSU2_TR(0x49a480);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a483:{NFSU2_TR(0x49a483);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a484:{NFSU2_TR(0x49a484);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a485:{NFSU2_TR(0x49a485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a48aull));
TAIL_STATIC(0x5379c0u,537);
}
B49a48a:L49a48a:{c.instructions+=2;NFSU2_TR(0x49a48a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a48b:{NFSU2_TR(0x49a48b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a490ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a490:L49a490:{c.instructions+=8;NFSU2_TR(0x49a490);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B49a492:{NFSU2_TR(0x49a492);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49a498:{NFSU2_TR(0x49a498);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a49b:{NFSU2_TR(0x49a49b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B49a4a1:{NFSU2_TR(0x49a4a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a4a7:{NFSU2_TR(0x49a4a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a4a8:{NFSU2_TR(0x49a4a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a4a9:{NFSU2_TR(0x49a4a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a4aeull));
TAIL_STATIC(0x5379c0u,537);
}
B49a4ae:L49a4ae:{c.instructions+=2;NFSU2_TR(0x49a4ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a4af:{NFSU2_TR(0x49a4af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a4b4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a4b4:L49a4b4:{c.instructions+=5;NFSU2_TR(0x49a4b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a4ba:{NFSU2_TR(0x49a4ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a4bd:{NFSU2_TR(0x49a4bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a4be:{NFSU2_TR(0x49a4be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a4bf:{NFSU2_TR(0x49a4bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a4c4ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a4c4:L49a4c4:{c.instructions+=2;NFSU2_TR(0x49a4c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a4c5:{NFSU2_TR(0x49a4c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a4caull));
TAIL_STATIC(0x50ca00u,50c);
}
B49a4ca:L49a4ca:{c.instructions+=7;NFSU2_TR(0x49a4ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49a4d0:{NFSU2_TR(0x49a4d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a4d3:{NFSU2_TR(0x49a4d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B49a4d9:{NFSU2_TR(0x49a4d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a4df:{NFSU2_TR(0x49a4df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a4e0:{NFSU2_TR(0x49a4e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a4e1:{NFSU2_TR(0x49a4e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a4e6ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a4e6:L49a4e6:{c.instructions+=2;NFSU2_TR(0x49a4e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a4e7:{NFSU2_TR(0x49a4e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a4ecull));
TAIL_STATIC(0x50ca50u,50c);
}
B49a4ec:L49a4ec:{c.instructions+=7;NFSU2_TR(0x49a4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a4f2:{NFSU2_TR(0x49a4f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a4f5:{NFSU2_TR(0x49a4f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B49a4f8:{NFSU2_TR(0x49a4f8);
u8 U[4];
w4(U+0,u32(0x79ad657full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a4fd:{NFSU2_TR(0x49a4fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a4fe:{NFSU2_TR(0x49a4fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a4ff:{NFSU2_TR(0x49a4ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a504ull));
TAIL_STATIC(0x537a10u,537);
}
B49a504:L49a504:{c.instructions+=3;NFSU2_TR(0x49a504);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49a507:{NFSU2_TR(0x49a507);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a508:{NFSU2_TR(0x49a508);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a50dull));
TAIL_STATIC(0x50c900u,50c);
}
B49a50d:L49a50d:{c.instructions+=5;NFSU2_TR(0x49a50d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a513:{NFSU2_TR(0x49a513);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a516:{NFSU2_TR(0x49a516);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a517:{NFSU2_TR(0x49a517);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a518:{NFSU2_TR(0x49a518);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a51dull));
TAIL_STATIC(0x5379c0u,537);
}
B49a51d:L49a51d:{c.instructions+=2;NFSU2_TR(0x49a51d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a51e:{NFSU2_TR(0x49a51e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a523ull));
TAIL_STATIC(0x50ca50u,50c);
}
B49a523:L49a523:{c.instructions+=8;NFSU2_TR(0x49a523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
w4(U+4,u32(0x406415e3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49a52d:{NFSU2_TR(0x49a52d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a530:{NFSU2_TR(0x49a530);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a533:{NFSU2_TR(0x49a533);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a535:{NFSU2_TR(0x49a535);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a536:{NFSU2_TR(0x49a536);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a537:{NFSU2_TR(0x49a537);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49a53e:{NFSU2_TR(0x49a53e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a543ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49a543:L49a543:{c.instructions+=5;NFSU2_TR(0x49a543);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a546:{NFSU2_TR(0x49a546);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a549:{NFSU2_TR(0x49a549);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a54a:{NFSU2_TR(0x49a54a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a54b:{NFSU2_TR(0x49a54b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a550ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a550:L49a550:{c.instructions+=2;NFSU2_TR(0x49a550);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a551:{NFSU2_TR(0x49a551);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a556ull));
TAIL_STATIC(0x50ca50u,50c);
}
B49a556:L49a556:{c.instructions+=5;NFSU2_TR(0x49a556);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a559:{NFSU2_TR(0x49a559);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a55c:{NFSU2_TR(0x49a55c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a55d:{NFSU2_TR(0x49a55d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a55e:{NFSU2_TR(0x49a55e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a563ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a563:L49a563:{c.instructions+=2;NFSU2_TR(0x49a563);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a564:{NFSU2_TR(0x49a564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a569ull));
TAIL_STATIC(0x50ca50u,50c);
}
B49a569:L49a569:{c.instructions+=6;NFSU2_TR(0x49a569);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49a56c:{NFSU2_TR(0x49a56c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a56f:{NFSU2_TR(0x49a56f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a571:{NFSU2_TR(0x49a571);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a572:{NFSU2_TR(0x49a572);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a573:{NFSU2_TR(0x49a573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a578ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49a578:L49a578:{c.instructions+=6;NFSU2_TR(0x49a578);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a57b:{NFSU2_TR(0x49a57b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a57e:{NFSU2_TR(0x49a57e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B49a581:{NFSU2_TR(0x49a581);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a582:{NFSU2_TR(0x49a582);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a583:{NFSU2_TR(0x49a583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a588ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a588:L49a588:{c.instructions+=2;NFSU2_TR(0x49a588);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a589:{NFSU2_TR(0x49a589);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a58eull));
TAIL_STATIC(0x50ca50u,50c);
}
B49a58e:L49a58e:{c.instructions+=5;NFSU2_TR(0x49a58e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a591:{NFSU2_TR(0x49a591);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a594:{NFSU2_TR(0x49a594);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a595:{NFSU2_TR(0x49a595);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a596:{NFSU2_TR(0x49a596);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a59bull));
TAIL_STATIC(0x5379c0u,537);
}
B49a59b:L49a59b:{c.instructions+=2;NFSU2_TR(0x49a59b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a59c:{NFSU2_TR(0x49a59c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a5a1ull));
TAIL_STATIC(0x50ca50u,50c);
}
B49a5a1:L49a5a1:{c.instructions+=6;NFSU2_TR(0x49a5a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a5a4:{NFSU2_TR(0x49a5a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49a5a7:{NFSU2_TR(0x49a5a7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a5a9:{NFSU2_TR(0x49a5a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a5aa:{NFSU2_TR(0x49a5aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a5ab:{NFSU2_TR(0x49a5ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a5b0ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49a5b0:L49a5b0:{c.instructions+=5;NFSU2_TR(0x49a5b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a5b3:{NFSU2_TR(0x49a5b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a5b6:{NFSU2_TR(0x49a5b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a5b7:{NFSU2_TR(0x49a5b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a5b8:{NFSU2_TR(0x49a5b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a5bdull));
TAIL_STATIC(0x5379c0u,537);
}
B49a5bd:L49a5bd:{c.instructions+=2;NFSU2_TR(0x49a5bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a5be:{NFSU2_TR(0x49a5be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a5c3ull));
TAIL_STATIC(0x50ca50u,50c);
}
B49a5c3:L49a5c3:{c.instructions+=5;NFSU2_TR(0x49a5c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a5c6:{NFSU2_TR(0x49a5c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a5c9:{NFSU2_TR(0x49a5c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a5ca:{NFSU2_TR(0x49a5ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a5cb:{NFSU2_TR(0x49a5cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a5d0ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a5d0:L49a5d0:{c.instructions+=2;NFSU2_TR(0x49a5d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a5d1:{NFSU2_TR(0x49a5d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a5d6ull));
TAIL_STATIC(0x50ca50u,50c);
}
B49a5d6:L49a5d6:{c.instructions+=6;NFSU2_TR(0x49a5d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a5d9:{NFSU2_TR(0x49a5d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a5dc:{NFSU2_TR(0x49a5dc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a5de:{NFSU2_TR(0x49a5de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a5df:{NFSU2_TR(0x49a5df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a5e0:{NFSU2_TR(0x49a5e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a5e5ull));
TAIL_STATIC(0x51cda0u,51c);
}
B49a5e5:L49a5e5:{c.instructions+=6;NFSU2_TR(0x49a5e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49a5e8:{NFSU2_TR(0x49a5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a5eb:{NFSU2_TR(0x49a5eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B49a5ee:{NFSU2_TR(0x49a5ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a5ef:{NFSU2_TR(0x49a5ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a5f0:{NFSU2_TR(0x49a5f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a5f5ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a5f5:L49a5f5:{c.instructions+=2;NFSU2_TR(0x49a5f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a5f6:{NFSU2_TR(0x49a5f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a5fbull));
TAIL_STATIC(0x50ca50u,50c);
}
B49a5fb:L49a5fb:{c.instructions+=5;NFSU2_TR(0x49a5fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a5fe:{NFSU2_TR(0x49a5fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49a601:{NFSU2_TR(0x49a601);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a602:{NFSU2_TR(0x49a602);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a603:{NFSU2_TR(0x49a603);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a608ull));
TAIL_STATIC(0x5379c0u,537);
}
B49a608:L49a608:{c.instructions+=2;NFSU2_TR(0x49a608);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a609:{NFSU2_TR(0x49a609);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a60eull));
TAIL_STATIC(0x50ca50u,50c);
}
B49a60e:L49a60e:{c.instructions+=4;NFSU2_TR(0x49a60e);
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
B49a611:{NFSU2_TR(0x49a611);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49a612:{NFSU2_TR(0x49a612);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49a613:{NFSU2_TR(0x49a613);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a620:L49a620:{c.instructions+=2;NFSU2_TR(0x49a620);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B49a628:{NFSU2_TR(0x49a628);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49a634;}}
}
B49a62a:L49a62a:{c.instructions+=1;NFSU2_TR(0x49a62a);
s4(0x83aa04,u32(0x0ull));
}
B49a634:L49a634:{c.instructions+=1;NFSU2_TR(0x49a634);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a640:L49a640:{c.instructions+=2;NFSU2_TR(0x49a640);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B49a648:{NFSU2_TR(0x49a648);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49a654;}}
}
B49a64a:L49a64a:{c.instructions+=1;NFSU2_TR(0x49a64a);
s4(0x83aa04,u32(0x1ull));
}
B49a654:L49a654:{c.instructions+=1;NFSU2_TR(0x49a654);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a660:L49a660:{c.instructions+=2;NFSU2_TR(0x49a660);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B49a668:{NFSU2_TR(0x49a668);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49a674;}}
}
B49a66a:L49a66a:{c.instructions+=1;NFSU2_TR(0x49a66a);
s4(0x83aa04,u32(0x2ull));
}
B49a674:L49a674:{c.instructions+=1;NFSU2_TR(0x49a674);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a680:L49a680:{c.instructions+=2;NFSU2_TR(0x49a680);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B49a688:{NFSU2_TR(0x49a688);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49a694;}}
}
B49a68a:L49a68a:{c.instructions+=1;NFSU2_TR(0x49a68a);
s4(0x83aa04,u32(0x3ull));
}
B49a694:L49a694:{c.instructions+=1;NFSU2_TR(0x49a694);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a6a0:L49a6a0:{c.instructions+=2;NFSU2_TR(0x49a6a0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B49a6a8:{NFSU2_TR(0x49a6a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49a6b4;}}
}
B49a6aa:L49a6aa:{c.instructions+=1;NFSU2_TR(0x49a6aa);
s4(0x83aa04,u32(0x4ull));
}
B49a6b4:L49a6b4:{c.instructions+=1;NFSU2_TR(0x49a6b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a6c0:L49a6c0:{c.instructions+=2;NFSU2_TR(0x49a6c0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B49a6c8:{NFSU2_TR(0x49a6c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49a6d4;}}
}
B49a6ca:L49a6ca:{c.instructions+=1;NFSU2_TR(0x49a6ca);
s4(0x83aa04,u32(0x5ull));
}
B49a6d4:L49a6d4:{c.instructions+=1;NFSU2_TR(0x49a6d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a6e0:L49a6e0:{c.instructions+=2;NFSU2_TR(0x49a6e0);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B49a6e8:{NFSU2_TR(0x49a6e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49a6f4;}}
}
B49a6ea:L49a6ea:{c.instructions+=1;NFSU2_TR(0x49a6ea);
s4(0x83aa04,u32(0x7ull));
}
B49a6f4:L49a6f4:{c.instructions+=1;NFSU2_TR(0x49a6f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a700:L49a700:{c.instructions+=2;NFSU2_TR(0x49a700);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B49a708:{NFSU2_TR(0x49a708);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49a714;}}
}
B49a70a:L49a70a:{c.instructions+=1;NFSU2_TR(0x49a70a);
s4(0x83aa04,u32(0x8ull));
}
B49a714:L49a714:{c.instructions+=1;NFSU2_TR(0x49a714);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a720:L49a720:{c.instructions+=8;NFSU2_TR(0x49a720);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a721:{NFSU2_TR(0x49a721);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a722:{NFSU2_TR(0x49a722);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49a726:{NFSU2_TR(0x49a726);
__builtin_memmove((R+24),(R+4),4);
}
B49a728:{NFSU2_TR(0x49a728);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a72b:{NFSU2_TR(0x49a72b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49a72e:{NFSU2_TR(0x49a72e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a72f:{NFSU2_TR(0x49a72f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a732ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a732:L49a732:{c.instructions+=2;NFSU2_TR(0x49a732);
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
B49a734:{NFSU2_TR(0x49a734);
if(r1(R+518)){{goto L49a73e;}}
}
B49a736:L49a736:{c.instructions+=4;NFSU2_TR(0x49a736);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49a738:{NFSU2_TR(0x49a738);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a739:{NFSU2_TR(0x49a739);
__builtin_memmove((R+4),(R+24),4);
}
B49a73b:{NFSU2_TR(0x49a73b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a73eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a73e:L49a73e:{c.instructions+=3;NFSU2_TR(0x49a73e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49a740:{NFSU2_TR(0x49a740);
__builtin_memmove((R+4),(R+24),4);
}
B49a742:{NFSU2_TR(0x49a742);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a745ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a745:L49a745:{c.instructions+=4;NFSU2_TR(0x49a745);
{u32 ea_=u32(u32(8628776u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49a74b:{NFSU2_TR(0x49a74b);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B49a751:{NFSU2_TR(0x49a751);
u8 U[4];
w4(U+0,u32(0x83aa28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a756:{NFSU2_TR(0x49a756);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a75bull));
TAIL_STATIC(0x469050u,469);
}
B49a75b:L49a75b:{c.instructions+=3;NFSU2_TR(0x49a75b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49a75d:{NFSU2_TR(0x49a75d);
__builtin_memmove((R+4),(R+24),4);
}
B49a75f:{NFSU2_TR(0x49a75f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a762ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a762:L49a762:{c.instructions+=3;NFSU2_TR(0x49a762);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49a763:{NFSU2_TR(0x49a763);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49a764:{NFSU2_TR(0x49a764);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a770:L49a770:{c.instructions+=4;NFSU2_TR(0x49a770);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a773:{NFSU2_TR(0x49a773);
u8 U[4];
w4(U+0,u32(0x26782c3eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a778:{NFSU2_TR(0x49a778);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a779:{NFSU2_TR(0x49a779);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a77eull));
TAIL_STATIC(0x50c900u,50c);
}
B49a77e:L49a77e:{c.instructions+=2;NFSU2_TR(0x49a77e);
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
B49a781:{NFSU2_TR(0x49a781);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a790:L49a790:{c.instructions+=10;NFSU2_TR(0x49a790);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a791:{NFSU2_TR(0x49a791);
__builtin_memmove((R+0),gp(0x83aa28),4);
}
B49a796:{NFSU2_TR(0x49a796);
__builtin_memmove((R+8),(R+0),4);
}
B49a798:{NFSU2_TR(0x49a798);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49a79f:{NFSU2_TR(0x49a79f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49a7a6:{NFSU2_TR(0x49a7a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
w4(U+4,u32(0x3d4ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B49a7b0:{NFSU2_TR(0x49a7b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a7b1:{NFSU2_TR(0x49a7b1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49a7b4:{NFSU2_TR(0x49a7b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49a7b8:{NFSU2_TR(0x49a7b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a7bdull));
TAIL_STATIC(0x4ff550u,4ff);
}
B49a7bd:L49a7bd:{c.instructions+=2;NFSU2_TR(0x49a7bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49a7be:{NFSU2_TR(0x49a7be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a7c0:L49a7c0:{c.instructions+=8;NFSU2_TR(0x49a7c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a7c1:{NFSU2_TR(0x49a7c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a7c2:{NFSU2_TR(0x49a7c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49a7c6:{NFSU2_TR(0x49a7c6);
__builtin_memmove((R+24),(R+4),4);
}
B49a7c8:{NFSU2_TR(0x49a7c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a7cb:{NFSU2_TR(0x49a7cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49a7ce:{NFSU2_TR(0x49a7ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a7cf:{NFSU2_TR(0x49a7cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a7d2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a7d2:L49a7d2:{c.instructions+=2;NFSU2_TR(0x49a7d2);
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
B49a7d4:{NFSU2_TR(0x49a7d4);
if(r1(R+518)){{goto L49a7de;}}
}
B49a7d6:L49a7d6:{c.instructions+=4;NFSU2_TR(0x49a7d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49a7d8:{NFSU2_TR(0x49a7d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a7d9:{NFSU2_TR(0x49a7d9);
__builtin_memmove((R+4),(R+24),4);
}
B49a7db:{NFSU2_TR(0x49a7db);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a7deull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a7de:L49a7de:{c.instructions+=3;NFSU2_TR(0x49a7de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49a7e0:{NFSU2_TR(0x49a7e0);
__builtin_memmove((R+4),(R+24),4);
}
B49a7e2:{NFSU2_TR(0x49a7e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a7e5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a7e5:L49a7e5:{c.instructions+=4;NFSU2_TR(0x49a7e5);
{u32 ea_=u32(u32(8628792u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49a7eb:{NFSU2_TR(0x49a7eb);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B49a7f1:{NFSU2_TR(0x49a7f1);
u8 U[4];
w4(U+0,u32(0x83aa28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a7f6:{NFSU2_TR(0x49a7f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a7fbull));
TAIL_STATIC(0x469050u,469);
}
B49a7fb:L49a7fb:{c.instructions+=3;NFSU2_TR(0x49a7fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49a7fd:{NFSU2_TR(0x49a7fd);
__builtin_memmove((R+4),(R+24),4);
}
B49a7ff:{NFSU2_TR(0x49a7ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a802ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a802:L49a802:{c.instructions+=3;NFSU2_TR(0x49a802);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49a803:{NFSU2_TR(0x49a803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49a804:{NFSU2_TR(0x49a804);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a810:L49a810:{c.instructions+=4;NFSU2_TR(0x49a810);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a813:{NFSU2_TR(0x49a813);
u8 U[4];
w4(U+0,u32(0xfd487543ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a818:{NFSU2_TR(0x49a818);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a819:{NFSU2_TR(0x49a819);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a81eull));
TAIL_STATIC(0x50c900u,50c);
}
B49a81e:L49a81e:{c.instructions+=2;NFSU2_TR(0x49a81e);
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
B49a821:{NFSU2_TR(0x49a821);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a830:L49a830:{c.instructions+=10;NFSU2_TR(0x49a830);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a831:{NFSU2_TR(0x49a831);
__builtin_memmove((R+0),gp(0x83aa38),4);
}
B49a836:{NFSU2_TR(0x49a836);
__builtin_memmove((R+8),(R+0),4);
}
B49a838:{NFSU2_TR(0x49a838);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49a83f:{NFSU2_TR(0x49a83f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49a846:{NFSU2_TR(0x49a846);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
w4(U+4,u32(0x3d4ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B49a850:{NFSU2_TR(0x49a850);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a851:{NFSU2_TR(0x49a851);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49a854:{NFSU2_TR(0x49a854);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49a858:{NFSU2_TR(0x49a858);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a85dull));
TAIL_STATIC(0x4ff550u,4ff);
}
B49a85d:L49a85d:{c.instructions+=2;NFSU2_TR(0x49a85d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49a85e:{NFSU2_TR(0x49a85e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a860:L49a860:{c.instructions+=8;NFSU2_TR(0x49a860);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a861:{NFSU2_TR(0x49a861);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a862:{NFSU2_TR(0x49a862);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49a866:{NFSU2_TR(0x49a866);
__builtin_memmove((R+24),(R+4),4);
}
B49a868:{NFSU2_TR(0x49a868);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a86b:{NFSU2_TR(0x49a86b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49a86e:{NFSU2_TR(0x49a86e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a86f:{NFSU2_TR(0x49a86f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a872ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a872:L49a872:{c.instructions+=2;NFSU2_TR(0x49a872);
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
B49a874:{NFSU2_TR(0x49a874);
if(r1(R+518)){{goto L49a87e;}}
}
B49a876:L49a876:{c.instructions+=4;NFSU2_TR(0x49a876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49a878:{NFSU2_TR(0x49a878);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a879:{NFSU2_TR(0x49a879);
__builtin_memmove((R+4),(R+24),4);
}
B49a87b:{NFSU2_TR(0x49a87b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a87eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a87e:L49a87e:{c.instructions+=3;NFSU2_TR(0x49a87e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49a880:{NFSU2_TR(0x49a880);
__builtin_memmove((R+4),(R+24),4);
}
B49a882:{NFSU2_TR(0x49a882);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a885ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a885:L49a885:{c.instructions+=4;NFSU2_TR(0x49a885);
{u32 ea_=u32(u32(8628800u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49a88b:{NFSU2_TR(0x49a88b);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B49a891:{NFSU2_TR(0x49a891);
u8 U[4];
w4(U+0,u32(0x83aa28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a896:{NFSU2_TR(0x49a896);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a89bull));
TAIL_STATIC(0x469050u,469);
}
B49a89b:L49a89b:{c.instructions+=3;NFSU2_TR(0x49a89b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49a89d:{NFSU2_TR(0x49a89d);
__builtin_memmove((R+4),(R+24),4);
}
B49a89f:{NFSU2_TR(0x49a89f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a8a2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a8a2:L49a8a2:{c.instructions+=3;NFSU2_TR(0x49a8a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49a8a3:{NFSU2_TR(0x49a8a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49a8a4:{NFSU2_TR(0x49a8a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a8b0:L49a8b0:{c.instructions+=4;NFSU2_TR(0x49a8b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a8b3:{NFSU2_TR(0x49a8b3);
u8 U[4];
w4(U+0,u32(0x69b745c6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a8b8:{NFSU2_TR(0x49a8b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a8b9:{NFSU2_TR(0x49a8b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a8beull));
TAIL_STATIC(0x50c900u,50c);
}
B49a8be:L49a8be:{c.instructions+=2;NFSU2_TR(0x49a8be);
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
B49a8c1:{NFSU2_TR(0x49a8c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a8d0:L49a8d0:{c.instructions+=10;NFSU2_TR(0x49a8d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a8d1:{NFSU2_TR(0x49a8d1);
__builtin_memmove((R+0),gp(0x83aa40),4);
}
B49a8d6:{NFSU2_TR(0x49a8d6);
__builtin_memmove((R+8),(R+0),4);
}
B49a8d8:{NFSU2_TR(0x49a8d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49a8df:{NFSU2_TR(0x49a8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49a8e6:{NFSU2_TR(0x49a8e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
w4(U+4,u32(0x3d4ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B49a8f0:{NFSU2_TR(0x49a8f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a8f1:{NFSU2_TR(0x49a8f1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49a8f4:{NFSU2_TR(0x49a8f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49a8f8:{NFSU2_TR(0x49a8f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a8fdull));
TAIL_STATIC(0x4ff550u,4ff);
}
B49a8fd:L49a8fd:{c.instructions+=2;NFSU2_TR(0x49a8fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49a8fe:{NFSU2_TR(0x49a8fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a900:L49a900:{c.instructions+=8;NFSU2_TR(0x49a900);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a901:{NFSU2_TR(0x49a901);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a902:{NFSU2_TR(0x49a902);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49a906:{NFSU2_TR(0x49a906);
__builtin_memmove((R+24),(R+4),4);
}
B49a908:{NFSU2_TR(0x49a908);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a90b:{NFSU2_TR(0x49a90b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49a90e:{NFSU2_TR(0x49a90e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a90f:{NFSU2_TR(0x49a90f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a912ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a912:L49a912:{c.instructions+=2;NFSU2_TR(0x49a912);
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
B49a914:{NFSU2_TR(0x49a914);
if(r1(R+518)){{goto L49a91e;}}
}
B49a916:L49a916:{c.instructions+=4;NFSU2_TR(0x49a916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49a918:{NFSU2_TR(0x49a918);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a919:{NFSU2_TR(0x49a919);
__builtin_memmove((R+4),(R+24),4);
}
B49a91b:{NFSU2_TR(0x49a91b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a91eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a91e:L49a91e:{c.instructions+=3;NFSU2_TR(0x49a91e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49a920:{NFSU2_TR(0x49a920);
__builtin_memmove((R+4),(R+24),4);
}
B49a922:{NFSU2_TR(0x49a922);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a925ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a925:L49a925:{c.instructions+=4;NFSU2_TR(0x49a925);
{u32 ea_=u32(u32(8628796u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49a92b:{NFSU2_TR(0x49a92b);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B49a931:{NFSU2_TR(0x49a931);
u8 U[4];
w4(U+0,u32(0x83aa28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a936:{NFSU2_TR(0x49a936);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a93bull));
TAIL_STATIC(0x469050u,469);
}
B49a93b:L49a93b:{c.instructions+=3;NFSU2_TR(0x49a93b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49a93d:{NFSU2_TR(0x49a93d);
__builtin_memmove((R+4),(R+24),4);
}
B49a93f:{NFSU2_TR(0x49a93f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a942ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a942:L49a942:{c.instructions+=3;NFSU2_TR(0x49a942);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49a943:{NFSU2_TR(0x49a943);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49a944:{NFSU2_TR(0x49a944);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a950:L49a950:{c.instructions+=4;NFSU2_TR(0x49a950);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a953:{NFSU2_TR(0x49a953);
u8 U[4];
w4(U+0,u32(0xa2b1f888ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a958:{NFSU2_TR(0x49a958);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a959:{NFSU2_TR(0x49a959);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a95eull));
TAIL_STATIC(0x50c900u,50c);
}
B49a95e:L49a95e:{c.instructions+=2;NFSU2_TR(0x49a95e);
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
B49a961:{NFSU2_TR(0x49a961);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a970:L49a970:{c.instructions+=10;NFSU2_TR(0x49a970);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a971:{NFSU2_TR(0x49a971);
__builtin_memmove((R+0),gp(0x83aa3c),4);
}
B49a976:{NFSU2_TR(0x49a976);
__builtin_memmove((R+8),(R+0),4);
}
B49a978:{NFSU2_TR(0x49a978);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49a97f:{NFSU2_TR(0x49a97f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49a986:{NFSU2_TR(0x49a986);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
w4(U+4,u32(0x3d4ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B49a990:{NFSU2_TR(0x49a990);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a991:{NFSU2_TR(0x49a991);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49a994:{NFSU2_TR(0x49a994);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49a998:{NFSU2_TR(0x49a998);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a99dull));
TAIL_STATIC(0x4ff550u,4ff);
}
B49a99d:L49a99d:{c.instructions+=2;NFSU2_TR(0x49a99d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49a99e:{NFSU2_TR(0x49a99e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a9a0:L49a9a0:{c.instructions+=8;NFSU2_TR(0x49a9a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a9a1:{NFSU2_TR(0x49a9a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a9a2:{NFSU2_TR(0x49a9a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49a9a6:{NFSU2_TR(0x49a9a6);
__builtin_memmove((R+24),(R+4),4);
}
B49a9a8:{NFSU2_TR(0x49a9a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a9ab:{NFSU2_TR(0x49a9ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49a9ae:{NFSU2_TR(0x49a9ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a9af:{NFSU2_TR(0x49a9af);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a9b2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a9b2:L49a9b2:{c.instructions+=2;NFSU2_TR(0x49a9b2);
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
B49a9b4:{NFSU2_TR(0x49a9b4);
if(r1(R+518)){{goto L49a9be;}}
}
B49a9b6:L49a9b6:{c.instructions+=4;NFSU2_TR(0x49a9b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49a9b8:{NFSU2_TR(0x49a9b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a9b9:{NFSU2_TR(0x49a9b9);
__builtin_memmove((R+4),(R+24),4);
}
B49a9bb:{NFSU2_TR(0x49a9bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a9beull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a9be:L49a9be:{c.instructions+=3;NFSU2_TR(0x49a9be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49a9c0:{NFSU2_TR(0x49a9c0);
__builtin_memmove((R+4),(R+24),4);
}
B49a9c2:{NFSU2_TR(0x49a9c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a9c5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a9c5:L49a9c5:{c.instructions+=4;NFSU2_TR(0x49a9c5);
{u32 ea_=u32(u32(8628780u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49a9cb:{NFSU2_TR(0x49a9cb);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B49a9d1:{NFSU2_TR(0x49a9d1);
u8 U[4];
w4(U+0,u32(0x83aa28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a9d6:{NFSU2_TR(0x49a9d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a9dbull));
TAIL_STATIC(0x469050u,469);
}
B49a9db:L49a9db:{c.instructions+=3;NFSU2_TR(0x49a9db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49a9dd:{NFSU2_TR(0x49a9dd);
__builtin_memmove((R+4),(R+24),4);
}
B49a9df:{NFSU2_TR(0x49a9df);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a9e2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49a9e2:L49a9e2:{c.instructions+=3;NFSU2_TR(0x49a9e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49a9e3:{NFSU2_TR(0x49a9e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49a9e4:{NFSU2_TR(0x49a9e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49a9f0:L49a9f0:{c.instructions+=4;NFSU2_TR(0x49a9f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49a9f3:{NFSU2_TR(0x49a9f3);
u8 U[4];
w4(U+0,u32(0x9e5fb82aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a9f8:{NFSU2_TR(0x49a9f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49a9f9:{NFSU2_TR(0x49a9f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49a9feull));
TAIL_STATIC(0x50c900u,50c);
}
B49a9fe:L49a9fe:{c.instructions+=2;NFSU2_TR(0x49a9fe);
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
B49aa01:{NFSU2_TR(0x49aa01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49aa10:L49aa10:{c.instructions+=10;NFSU2_TR(0x49aa10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aa11:{NFSU2_TR(0x49aa11);
__builtin_memmove((R+0),gp(0x83aa2c),4);
}
B49aa16:{NFSU2_TR(0x49aa16);
__builtin_memmove((R+8),(R+0),4);
}
B49aa18:{NFSU2_TR(0x49aa18);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49aa1f:{NFSU2_TR(0x49aa1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49aa26:{NFSU2_TR(0x49aa26);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
w4(U+4,u32(0x3d4ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B49aa30:{NFSU2_TR(0x49aa30);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aa31:{NFSU2_TR(0x49aa31);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49aa34:{NFSU2_TR(0x49aa34);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49aa38:{NFSU2_TR(0x49aa38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49aa3dull));
TAIL_STATIC(0x4ff550u,4ff);
}
B49aa3d:L49aa3d:{c.instructions+=2;NFSU2_TR(0x49aa3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49aa3e:{NFSU2_TR(0x49aa3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49aa40:L49aa40:{c.instructions+=8;NFSU2_TR(0x49aa40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aa41:{NFSU2_TR(0x49aa41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aa42:{NFSU2_TR(0x49aa42);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49aa46:{NFSU2_TR(0x49aa46);
__builtin_memmove((R+24),(R+4),4);
}
B49aa48:{NFSU2_TR(0x49aa48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49aa4b:{NFSU2_TR(0x49aa4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49aa4e:{NFSU2_TR(0x49aa4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aa4f:{NFSU2_TR(0x49aa4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49aa52ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49aa52:L49aa52:{c.instructions+=2;NFSU2_TR(0x49aa52);
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
B49aa54:{NFSU2_TR(0x49aa54);
if(r1(R+518)){{goto L49aa5e;}}
}
B49aa56:L49aa56:{c.instructions+=4;NFSU2_TR(0x49aa56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49aa58:{NFSU2_TR(0x49aa58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aa59:{NFSU2_TR(0x49aa59);
__builtin_memmove((R+4),(R+24),4);
}
B49aa5b:{NFSU2_TR(0x49aa5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49aa5eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49aa5e:L49aa5e:{c.instructions+=3;NFSU2_TR(0x49aa5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49aa60:{NFSU2_TR(0x49aa60);
__builtin_memmove((R+4),(R+24),4);
}
B49aa62:{NFSU2_TR(0x49aa62);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49aa65ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49aa65:L49aa65:{c.instructions+=4;NFSU2_TR(0x49aa65);
{u32 ea_=u32(u32(8628784u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49aa6b:{NFSU2_TR(0x49aa6b);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B49aa71:{NFSU2_TR(0x49aa71);
u8 U[4];
w4(U+0,u32(0x83aa28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aa76:{NFSU2_TR(0x49aa76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49aa7bull));
TAIL_STATIC(0x469050u,469);
}
B49aa7b:L49aa7b:{c.instructions+=3;NFSU2_TR(0x49aa7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49aa7d:{NFSU2_TR(0x49aa7d);
__builtin_memmove((R+4),(R+24),4);
}
B49aa7f:{NFSU2_TR(0x49aa7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49aa82ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49aa82:L49aa82:{c.instructions+=3;NFSU2_TR(0x49aa82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49aa83:{NFSU2_TR(0x49aa83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49aa84:{NFSU2_TR(0x49aa84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49aa90:L49aa90:{c.instructions+=4;NFSU2_TR(0x49aa90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49aa93:{NFSU2_TR(0x49aa93);
u8 U[4];
w4(U+0,u32(0x418e681dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aa98:{NFSU2_TR(0x49aa98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aa99:{NFSU2_TR(0x49aa99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49aa9eull));
TAIL_STATIC(0x50c900u,50c);
}
B49aa9e:L49aa9e:{c.instructions+=2;NFSU2_TR(0x49aa9e);
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
B49aaa1:{NFSU2_TR(0x49aaa1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49aab0:L49aab0:{c.instructions+=10;NFSU2_TR(0x49aab0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aab1:{NFSU2_TR(0x49aab1);
__builtin_memmove((R+0),gp(0x83aa30),4);
}
B49aab6:{NFSU2_TR(0x49aab6);
__builtin_memmove((R+8),(R+0),4);
}
B49aab8:{NFSU2_TR(0x49aab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49aabf:{NFSU2_TR(0x49aabf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49aac6:{NFSU2_TR(0x49aac6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
w4(U+4,u32(0x3d4ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B49aad0:{NFSU2_TR(0x49aad0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aad1:{NFSU2_TR(0x49aad1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49aad4:{NFSU2_TR(0x49aad4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49aad8:{NFSU2_TR(0x49aad8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49aaddull));
TAIL_STATIC(0x4ff550u,4ff);
}
B49aadd:L49aadd:{c.instructions+=2;NFSU2_TR(0x49aadd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49aade:{NFSU2_TR(0x49aade);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49aae0:L49aae0:{c.instructions+=8;NFSU2_TR(0x49aae0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aae1:{NFSU2_TR(0x49aae1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aae2:{NFSU2_TR(0x49aae2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49aae6:{NFSU2_TR(0x49aae6);
__builtin_memmove((R+24),(R+4),4);
}
B49aae8:{NFSU2_TR(0x49aae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49aaeb:{NFSU2_TR(0x49aaeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49aaee:{NFSU2_TR(0x49aaee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aaef:{NFSU2_TR(0x49aaef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49aaf2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49aaf2:L49aaf2:{c.instructions+=2;NFSU2_TR(0x49aaf2);
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
B49aaf4:{NFSU2_TR(0x49aaf4);
if(r1(R+518)){{goto L49aafe;}}
}
B49aaf6:L49aaf6:{c.instructions+=4;NFSU2_TR(0x49aaf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49aaf8:{NFSU2_TR(0x49aaf8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aaf9:{NFSU2_TR(0x49aaf9);
__builtin_memmove((R+4),(R+24),4);
}
B49aafb:{NFSU2_TR(0x49aafb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49aafeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49aafe:L49aafe:{c.instructions+=3;NFSU2_TR(0x49aafe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49ab00:{NFSU2_TR(0x49ab00);
__builtin_memmove((R+4),(R+24),4);
}
B49ab02:{NFSU2_TR(0x49ab02);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ab05ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49ab05:L49ab05:{c.instructions+=4;NFSU2_TR(0x49ab05);
{u32 ea_=u32(u32(8628788u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49ab0b:{NFSU2_TR(0x49ab0b);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B49ab11:{NFSU2_TR(0x49ab11);
u8 U[4];
w4(U+0,u32(0x83aa28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ab16:{NFSU2_TR(0x49ab16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ab1bull));
TAIL_STATIC(0x469050u,469);
}
B49ab1b:L49ab1b:{c.instructions+=3;NFSU2_TR(0x49ab1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49ab1d:{NFSU2_TR(0x49ab1d);
__builtin_memmove((R+4),(R+24),4);
}
B49ab1f:{NFSU2_TR(0x49ab1f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ab22ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49ab22:L49ab22:{c.instructions+=3;NFSU2_TR(0x49ab22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49ab23:{NFSU2_TR(0x49ab23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ab24:{NFSU2_TR(0x49ab24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ab30:L49ab30:{c.instructions+=4;NFSU2_TR(0x49ab30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ab33:{NFSU2_TR(0x49ab33);
u8 U[4];
w4(U+0,u32(0xdf21eac2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ab38:{NFSU2_TR(0x49ab38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ab39:{NFSU2_TR(0x49ab39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ab3eull));
TAIL_STATIC(0x50c900u,50c);
}
B49ab3e:L49ab3e:{c.instructions+=2;NFSU2_TR(0x49ab3e);
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
B49ab41:{NFSU2_TR(0x49ab41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ab50:L49ab50:{c.instructions+=10;NFSU2_TR(0x49ab50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ab51:{NFSU2_TR(0x49ab51);
__builtin_memmove((R+0),gp(0x83aa34),4);
}
B49ab56:{NFSU2_TR(0x49ab56);
__builtin_memmove((R+8),(R+0),4);
}
B49ab58:{NFSU2_TR(0x49ab58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49ab5f:{NFSU2_TR(0x49ab5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49ab66:{NFSU2_TR(0x49ab66);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
w4(U+4,u32(0x3d4ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B49ab70:{NFSU2_TR(0x49ab70);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ab71:{NFSU2_TR(0x49ab71);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49ab74:{NFSU2_TR(0x49ab74);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49ab78:{NFSU2_TR(0x49ab78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ab7dull));
TAIL_STATIC(0x4ff550u,4ff);
}
B49ab7d:L49ab7d:{c.instructions+=2;NFSU2_TR(0x49ab7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49ab7e:{NFSU2_TR(0x49ab7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ab80:L49ab80:{c.instructions+=7;NFSU2_TR(0x49ab80);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ab84:{NFSU2_TR(0x49ab84);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49ab89:{NFSU2_TR(0x49ab89);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ab8a:{NFSU2_TR(0x49ab8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ab8b:{NFSU2_TR(0x49ab8b);
__builtin_memmove((R+28),gp(0x83aa50),4);
}
B49ab91:{NFSU2_TR(0x49ab91);
__builtin_memmove((R+24),(R+4),4);
}
B49ab93:{NFSU2_TR(0x49ab93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49ab9f;}}
}
B49ab95:L49ab95:{c.instructions+=2;NFSU2_TR(0x49ab95);
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
B49ab96:{NFSU2_TR(0x49ab96);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L49abae;}}
}
B49ab98:L49ab98:{c.instructions+=2;NFSU2_TR(0x49ab98);
w4(R+28,u32(0x1ull));
}
B49ab9d:{NFSU2_TR(0x49ab9d);
{goto L49abae;}
}
B49ab9f:L49ab9f:{c.instructions+=2;NFSU2_TR(0x49ab9f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49aba4:{NFSU2_TR(0x49aba4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49abae;}}
}
B49aba6:L49aba6:{c.instructions+=3;NFSU2_TR(0x49aba6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B49aba7:{NFSU2_TR(0x49aba7);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B49abaa:{NFSU2_TR(0x49abaa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49abae;}}
}
B49abac:L49abac:{c.instructions+=1;NFSU2_TR(0x49abac);
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
B49abae:L49abae:{c.instructions+=4;NFSU2_TR(0x49abae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49abb0:{NFSU2_TR(0x49abb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49abb1:{NFSU2_TR(0x49abb1);
__builtin_memmove((R+4),(R+24),4);
}
B49abb3:{NFSU2_TR(0x49abb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49abb6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49abb6:L49abb6:{c.instructions+=4;NFSU2_TR(0x49abb6);
__builtin_memmove(gp(0x83aa50),(R+28),4);
}
B49abbc:{NFSU2_TR(0x49abbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49abbe:{NFSU2_TR(0x49abbe);
__builtin_memmove((R+4),(R+24),4);
}
B49abc0:{NFSU2_TR(0x49abc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49abc3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49abc3:L49abc3:{c.instructions+=3;NFSU2_TR(0x49abc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49abc4:{NFSU2_TR(0x49abc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49abc5:{NFSU2_TR(0x49abc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49abd0:L49abd0:{c.instructions+=6;NFSU2_TR(0x49abd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49abd1:{NFSU2_TR(0x49abd1);
__builtin_memmove((R+24),(R+4),4);
}
B49abd3:{NFSU2_TR(0x49abd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49abd6:{NFSU2_TR(0x49abd6);
u8 U[4];
w4(U+0,u32(0x2881ab87ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49abdb:{NFSU2_TR(0x49abdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49abdc:{NFSU2_TR(0x49abdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49abe1ull));
TAIL_STATIC(0x50c900u,50c);
}
B49abe1:L49abe1:{c.instructions+=5;NFSU2_TR(0x49abe1);
__builtin_memmove((R+0),gp(0x83aa50),4);
}
B49abe6:{NFSU2_TR(0x49abe6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B49abe8:{NFSU2_TR(0x49abe8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49abeb:{NFSU2_TR(0x49abeb);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B49abed:{NFSU2_TR(0x49abed);
if(r1(R+518)){{goto L49ac06;}}
}
B49abef:L49abef:{c.instructions+=2;NFSU2_TR(0x49abef);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B49abf0:{NFSU2_TR(0x49abf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49ac0b;}}
}
B49abf2:L49abf2:{c.instructions+=5;NFSU2_TR(0x49abf2);
w4(R+4,u32(0x55da8bf8ull));
}
B49abf7:{NFSU2_TR(0x49abf7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49abf8:{NFSU2_TR(0x49abf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49abfb:{NFSU2_TR(0x49abfb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49abfc:{NFSU2_TR(0x49abfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ac01ull));
TAIL_STATIC(0x50c900u,50c);
}
B49ac01:L49ac01:{c.instructions+=3;NFSU2_TR(0x49ac01);
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
B49ac04:{NFSU2_TR(0x49ac04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ac05:{NFSU2_TR(0x49ac05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ac06:L49ac06:{c.instructions+=1;NFSU2_TR(0x49ac06);
w4(R+4,u32(0xc50fa35full));
}
B49ac0b:L49ac0b:{c.instructions+=4;NFSU2_TR(0x49ac0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ac0c:{NFSU2_TR(0x49ac0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49ac0f:{NFSU2_TR(0x49ac0f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ac10:{NFSU2_TR(0x49ac10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ac15ull));
TAIL_STATIC(0x50c900u,50c);
}
B49ac15:L49ac15:{c.instructions+=3;NFSU2_TR(0x49ac15);
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
B49ac18:{NFSU2_TR(0x49ac18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ac19:{NFSU2_TR(0x49ac19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ac20:L49ac20:{c.instructions+=5;NFSU2_TR(0x49ac20);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ac24:{NFSU2_TR(0x49ac24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49ac29:{NFSU2_TR(0x49ac29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ac2a:{NFSU2_TR(0x49ac2a);
__builtin_memmove((R+24),(R+4),4);
}
B49ac2c:{NFSU2_TR(0x49ac2c);
if(r1(R+518)){{goto L49ac35;}}
}
B49ac2e:L49ac2e:{c.instructions+=2;NFSU2_TR(0x49ac2e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49ac33:{NFSU2_TR(0x49ac33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49ac46;}}
}
B49ac35:L49ac35:{c.instructions+=4;NFSU2_TR(0x49ac35);
__builtin_memmove((R+4),gp(0x8500c9),1);
}
B49ac3b:{NFSU2_TR(0x49ac3b);
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
B49ac3d:{NFSU2_TR(0x49ac3d);
__builtin_memmove((R+4),(R+518),1);
}
B49ac40:{NFSU2_TR(0x49ac40);
__builtin_memmove(gp(0x8500c9),(R+4),1);
}
B49ac46:L49ac46:{c.instructions+=4;NFSU2_TR(0x49ac46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49ac48:{NFSU2_TR(0x49ac48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ac49:{NFSU2_TR(0x49ac49);
__builtin_memmove((R+4),(R+24),4);
}
B49ac4b:{NFSU2_TR(0x49ac4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ac4eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49ac4e:L49ac4e:{c.instructions+=3;NFSU2_TR(0x49ac4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49ac50:{NFSU2_TR(0x49ac50);
__builtin_memmove((R+4),(R+24),4);
}
B49ac52:{NFSU2_TR(0x49ac52);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ac55ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49ac55:L49ac55:{c.instructions+=2;NFSU2_TR(0x49ac55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ac56:{NFSU2_TR(0x49ac56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ac60:L49ac60:{c.instructions+=6;NFSU2_TR(0x49ac60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ac61:{NFSU2_TR(0x49ac61);
__builtin_memmove((R+24),(R+4),4);
}
B49ac63:{NFSU2_TR(0x49ac63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ac66:{NFSU2_TR(0x49ac66);
u8 U[4];
w4(U+0,u32(0xb660729ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ac6b:{NFSU2_TR(0x49ac6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ac6c:{NFSU2_TR(0x49ac6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ac71ull));
TAIL_STATIC(0x50c900u,50c);
}
B49ac71:L49ac71:{c.instructions+=4;NFSU2_TR(0x49ac71);
__builtin_memmove((R+0),gp(0x8500c9),1);
}
B49ac76:{NFSU2_TR(0x49ac76);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49ac79:{NFSU2_TR(0x49ac79);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49ac7b:{NFSU2_TR(0x49ac7b);
if(r1(R+518)){{goto L49ac90;}}
}
B49ac7d:L49ac7d:{c.instructions+=4;NFSU2_TR(0x49ac7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49ac80:{NFSU2_TR(0x49ac80);
u8 U[4];
w4(U+0,u32(0x63cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ac85:{NFSU2_TR(0x49ac85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ac86:{NFSU2_TR(0x49ac86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ac8bull));
TAIL_STATIC(0x50c900u,50c);
}
B49ac8b:L49ac8b:{c.instructions+=3;NFSU2_TR(0x49ac8b);
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
B49ac8e:{NFSU2_TR(0x49ac8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ac8f:{NFSU2_TR(0x49ac8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ac90:L49ac90:{c.instructions+=4;NFSU2_TR(0x49ac90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49ac93:{NFSU2_TR(0x49ac93);
u8 U[4];
w4(U+0,u32(0xccfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ac98:{NFSU2_TR(0x49ac98);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ac99:{NFSU2_TR(0x49ac99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ac9eull));
TAIL_STATIC(0x50c900u,50c);
}
B49ac9e:L49ac9e:{c.instructions+=3;NFSU2_TR(0x49ac9e);
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
B49aca1:{NFSU2_TR(0x49aca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49aca2:{NFSU2_TR(0x49aca2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49acb0:L49acb0:{c.instructions+=5;NFSU2_TR(0x49acb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49acb4:{NFSU2_TR(0x49acb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49acb9:{NFSU2_TR(0x49acb9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49acba:{NFSU2_TR(0x49acba);
__builtin_memmove((R+24),(R+4),4);
}
B49acbc:{NFSU2_TR(0x49acbc);
if(r1(R+518)){{goto L49acc5;}}
}
B49acbe:L49acbe:{c.instructions+=2;NFSU2_TR(0x49acbe);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49acc3:{NFSU2_TR(0x49acc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49acd6;}}
}
B49acc5:L49acc5:{c.instructions+=4;NFSU2_TR(0x49acc5);
__builtin_memmove((R+4),gp(0x8500ca),1);
}
B49accb:{NFSU2_TR(0x49accb);
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
B49accd:{NFSU2_TR(0x49accd);
__builtin_memmove((R+4),(R+518),1);
}
B49acd0:{NFSU2_TR(0x49acd0);
__builtin_memmove(gp(0x8500ca),(R+4),1);
}
B49acd6:L49acd6:{c.instructions+=4;NFSU2_TR(0x49acd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49acd8:{NFSU2_TR(0x49acd8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49acd9:{NFSU2_TR(0x49acd9);
__builtin_memmove((R+4),(R+24),4);
}
B49acdb:{NFSU2_TR(0x49acdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49acdeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49acde:L49acde:{c.instructions+=3;NFSU2_TR(0x49acde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49ace0:{NFSU2_TR(0x49ace0);
__builtin_memmove((R+4),(R+24),4);
}
B49ace2:{NFSU2_TR(0x49ace2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ace5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49ace5:L49ace5:{c.instructions+=2;NFSU2_TR(0x49ace5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ace6:{NFSU2_TR(0x49ace6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49acf0:L49acf0:{c.instructions+=6;NFSU2_TR(0x49acf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49acf1:{NFSU2_TR(0x49acf1);
__builtin_memmove((R+24),(R+4),4);
}
B49acf3:{NFSU2_TR(0x49acf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49acf6:{NFSU2_TR(0x49acf6);
u8 U[4];
w4(U+0,u32(0xd1009b34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49acfb:{NFSU2_TR(0x49acfb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49acfc:{NFSU2_TR(0x49acfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ad01ull));
TAIL_STATIC(0x50c900u,50c);
}
B49ad01:L49ad01:{c.instructions+=4;NFSU2_TR(0x49ad01);
__builtin_memmove((R+0),gp(0x8500ca),1);
}
B49ad06:{NFSU2_TR(0x49ad06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49ad09:{NFSU2_TR(0x49ad09);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49ad0b:{NFSU2_TR(0x49ad0b);
if(r1(R+518)){{goto L49ad20;}}
}
B49ad0d:L49ad0d:{c.instructions+=4;NFSU2_TR(0x49ad0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49ad10:{NFSU2_TR(0x49ad10);
u8 U[4];
w4(U+0,u32(0x63cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ad15:{NFSU2_TR(0x49ad15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ad16:{NFSU2_TR(0x49ad16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ad1bull));
TAIL_STATIC(0x50c900u,50c);
}
B49ad1b:L49ad1b:{c.instructions+=3;NFSU2_TR(0x49ad1b);
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
B49ad1e:{NFSU2_TR(0x49ad1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ad1f:{NFSU2_TR(0x49ad1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ad20:L49ad20:{c.instructions+=4;NFSU2_TR(0x49ad20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49ad23:{NFSU2_TR(0x49ad23);
u8 U[4];
w4(U+0,u32(0xccfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ad28:{NFSU2_TR(0x49ad28);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ad29:{NFSU2_TR(0x49ad29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ad2eull));
TAIL_STATIC(0x50c900u,50c);
}
B49ad2e:L49ad2e:{c.instructions+=3;NFSU2_TR(0x49ad2e);
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
B49ad31:{NFSU2_TR(0x49ad31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ad32:{NFSU2_TR(0x49ad32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ad40:L49ad40:{c.instructions+=5;NFSU2_TR(0x49ad40);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ad44:{NFSU2_TR(0x49ad44);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49ad49:{NFSU2_TR(0x49ad49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ad4a:{NFSU2_TR(0x49ad4a);
__builtin_memmove((R+28),(R+4),4);
}
B49ad4c:{NFSU2_TR(0x49ad4c);
if(r1(R+518)){{goto L49ad55;}}
}
B49ad4e:L49ad4e:{c.instructions+=2;NFSU2_TR(0x49ad4e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49ad53:{NFSU2_TR(0x49ad53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49ada9;}}
}
B49ad55:L49ad55:{c.instructions+=5;NFSU2_TR(0x49ad55);
{u32 ea_=u32(u32(8628768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49ad5b:{NFSU2_TR(0x49ad5b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B49ad61:{NFSU2_TR(0x49ad61);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B49ad63:{NFSU2_TR(0x49ad63);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49ad66:{NFSU2_TR(0x49ad66);
if(r1(R+514)){{goto L49ad70;}}
}
B49ad68:L49ad68:{c.instructions+=2;NFSU2_TR(0x49ad68);
{u32 ea_=u32(u32(7909636u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49ad6e:{NFSU2_TR(0x49ad6e);
{goto L49ad76;}
}
B49ad70:L49ad70:{c.instructions+=1;NFSU2_TR(0x49ad70);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49ad76:L49ad76:{c.instructions+=5;NFSU2_TR(0x49ad76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ad77:{NFSU2_TR(0x49ad77);
{u32 ea_=u32(u32(8628768u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B49ad7d:{NFSU2_TR(0x49ad7d);
__builtin_memmove((R+24),gp(0x8650b8),4);
}
B49ad83:{NFSU2_TR(0x49ad83);
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
B49ad85:{NFSU2_TR(0x49ad85);
if(r1(R+518)){{goto L49ada6;}}
}
B49ad87:L49ad87:{c.instructions+=2;NFSU2_TR(0x49ad87);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ad89:{NFSU2_TR(0x49ad89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ad8eull));
TAIL_STATIC(0x75bed4u,75b);
}
B49ad8e:L49ad8e:{c.instructions+=5;NFSU2_TR(0x49ad8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ad8f:{NFSU2_TR(0x49ad8f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ad91:{NFSU2_TR(0x49ad91);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ad93:{NFSU2_TR(0x49ad93);
__builtin_memmove((R+4),(R+24),4);
}
B49ad95:{NFSU2_TR(0x49ad95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ad9aull));
TAIL_STATIC(0x578ef0u,578);
}
B49ad9a:L49ad9a:{c.instructions+=4;NFSU2_TR(0x49ad9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49ad9c:{NFSU2_TR(0x49ad9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ad9d:{NFSU2_TR(0x49ad9d);
__builtin_memmove((R+4),(R+28),4);
}
B49ad9f:{NFSU2_TR(0x49ad9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ada2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49ada2:L49ada2:{c.instructions+=2;NFSU2_TR(0x49ada2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49ada3:{NFSU2_TR(0x49ada3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ada6:L49ada6:{c.instructions+=2;NFSU2_TR(0x49ada6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B49ada8:{NFSU2_TR(0x49ada8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ada9:L49ada9:{c.instructions+=3;NFSU2_TR(0x49ada9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49adab:{NFSU2_TR(0x49adab);
__builtin_memmove((R+4),(R+28),4);
}
B49adad:{NFSU2_TR(0x49adad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49adb0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49adb0:L49adb0:{c.instructions+=2;NFSU2_TR(0x49adb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49adb1:{NFSU2_TR(0x49adb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49adc0:L49adc0:{c.instructions+=6;NFSU2_TR(0x49adc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49adc1:{NFSU2_TR(0x49adc1);
__builtin_memmove((R+24),(R+4),4);
}
B49adc3:{NFSU2_TR(0x49adc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49adc6:{NFSU2_TR(0x49adc6);
u8 U[4];
w4(U+0,u32(0xf26a5cbfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49adcb:{NFSU2_TR(0x49adcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49adcc:{NFSU2_TR(0x49adcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49add1ull));
TAIL_STATIC(0x50c900u,50c);
}
B49add1:L49add1:{c.instructions+=7;NFSU2_TR(0x49add1);
{u32 ea_=u32(u32(8628768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49add7:{NFSU2_TR(0x49add7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B49addd:{NFSU2_TR(0x49addd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49ade0:{NFSU2_TR(0x49ade0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B49ade2:{NFSU2_TR(0x49ade2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49ade5:{NFSU2_TR(0x49ade5);
w4(R+0,u32(0xccfaull));
}
B49adea:{NFSU2_TR(0x49adea);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L49adf1;}}
}
B49adec:L49adec:{c.instructions+=1;NFSU2_TR(0x49adec);
w4(R+0,u32(0x63cull));
}
B49adf1:L49adf1:{c.instructions+=4;NFSU2_TR(0x49adf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49adf4:{NFSU2_TR(0x49adf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49adf5:{NFSU2_TR(0x49adf5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49adf6:{NFSU2_TR(0x49adf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49adfbull));
TAIL_STATIC(0x50c900u,50c);
}
B49adfb:L49adfb:{c.instructions+=3;NFSU2_TR(0x49adfb);
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
B49adfe:{NFSU2_TR(0x49adfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49adff:{NFSU2_TR(0x49adff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ae00:L49ae00:{c.instructions+=5;NFSU2_TR(0x49ae00);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ae04:{NFSU2_TR(0x49ae04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49ae09:{NFSU2_TR(0x49ae09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ae0a:{NFSU2_TR(0x49ae0a);
__builtin_memmove((R+24),(R+4),4);
}
B49ae0c:{NFSU2_TR(0x49ae0c);
if(r1(R+518)){{goto L49ae15;}}
}
B49ae0e:L49ae0e:{c.instructions+=2;NFSU2_TR(0x49ae0e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49ae13:{NFSU2_TR(0x49ae13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49ae26;}}
}
B49ae15:L49ae15:{c.instructions+=4;NFSU2_TR(0x49ae15);
__builtin_memmove((R+4),gp(0x83aa18),1);
}
B49ae1b:{NFSU2_TR(0x49ae1b);
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
B49ae1d:{NFSU2_TR(0x49ae1d);
__builtin_memmove((R+4),(R+518),1);
}
B49ae20:{NFSU2_TR(0x49ae20);
__builtin_memmove(gp(0x83aa18),(R+4),1);
}
B49ae26:L49ae26:{c.instructions+=4;NFSU2_TR(0x49ae26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49ae28:{NFSU2_TR(0x49ae28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ae29:{NFSU2_TR(0x49ae29);
__builtin_memmove((R+4),(R+24),4);
}
B49ae2b:{NFSU2_TR(0x49ae2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ae2eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49ae2e:L49ae2e:{c.instructions+=3;NFSU2_TR(0x49ae2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49ae30:{NFSU2_TR(0x49ae30);
__builtin_memmove((R+4),(R+24),4);
}
B49ae32:{NFSU2_TR(0x49ae32);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ae35ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49ae35:L49ae35:{c.instructions+=2;NFSU2_TR(0x49ae35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ae36:{NFSU2_TR(0x49ae36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ae40:L49ae40:{c.instructions+=6;NFSU2_TR(0x49ae40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ae41:{NFSU2_TR(0x49ae41);
__builtin_memmove((R+24),(R+4),4);
}
B49ae43:{NFSU2_TR(0x49ae43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ae46:{NFSU2_TR(0x49ae46);
u8 U[4];
w4(U+0,u32(0x85a6ce05ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ae4b:{NFSU2_TR(0x49ae4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ae4c:{NFSU2_TR(0x49ae4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ae51ull));
TAIL_STATIC(0x50c900u,50c);
}
B49ae51:L49ae51:{c.instructions+=9;NFSU2_TR(0x49ae51);
__builtin_memmove((R+0),gp(0x83aa18),1);
}
B49ae56:{NFSU2_TR(0x49ae56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49ae59:{NFSU2_TR(0x49ae59);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B49ae5b:{NFSU2_TR(0x49ae5b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49ae5d:{NFSU2_TR(0x49ae5d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffff3942ull))));
}
B49ae62:{NFSU2_TR(0x49ae62);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xccfaull))));
}
B49ae67:{NFSU2_TR(0x49ae67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ae68:{NFSU2_TR(0x49ae68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ae69:{NFSU2_TR(0x49ae69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ae6eull));
TAIL_STATIC(0x50c900u,50c);
}
B49ae6e:L49ae6e:{c.instructions+=3;NFSU2_TR(0x49ae6e);
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
B49ae71:{NFSU2_TR(0x49ae71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ae72:{NFSU2_TR(0x49ae72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ae80:L49ae80:{c.instructions+=5;NFSU2_TR(0x49ae80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ae81:{NFSU2_TR(0x49ae81);
__builtin_memmove((R+24),(R+4),4);
}
B49ae83:{NFSU2_TR(0x49ae83);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49ae87:{NFSU2_TR(0x49ae87);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49ae8d:{NFSU2_TR(0x49ae8d);
if(r1(R+518)){{goto L49ae97;}}
}
B49ae8f:L49ae8f:{c.instructions+=2;NFSU2_TR(0x49ae8f);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49ae95:{NFSU2_TR(0x49ae95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49aec5;}}
}
B49ae97:L49ae97:{c.instructions+=3;NFSU2_TR(0x49ae97);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B49ae9c:{NFSU2_TR(0x49ae9c);
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
B49ae9e:{NFSU2_TR(0x49ae9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49aeba;}}
}
B49aea0:L49aea0:{c.instructions+=5;NFSU2_TR(0x49aea0);
s1(0x83aa1a,u8(0x1ull));
}
B49aea7:{NFSU2_TR(0x49aea7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49aea9:{NFSU2_TR(0x49aea9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aeaa:{NFSU2_TR(0x49aeaa);
__builtin_memmove((R+4),(R+24),4);
}
B49aeac:{NFSU2_TR(0x49aeac);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49aeafull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49aeaf:L49aeaf:{c.instructions+=3;NFSU2_TR(0x49aeaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49aeb1:{NFSU2_TR(0x49aeb1);
__builtin_memmove((R+4),(R+24),4);
}
B49aeb3:{NFSU2_TR(0x49aeb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49aeb6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49aeb6:L49aeb6:{c.instructions+=2;NFSU2_TR(0x49aeb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49aeb7:{NFSU2_TR(0x49aeb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49aeba:L49aeba:{c.instructions+=2;NFSU2_TR(0x49aeba);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49aebc:{NFSU2_TR(0x49aebc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49aec5;}}
}
B49aebe:L49aebe:{c.instructions+=1;NFSU2_TR(0x49aebe);
s1(0x83aa1a,u8(0x0ull));
}
B49aec5:L49aec5:{c.instructions+=4;NFSU2_TR(0x49aec5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49aec7:{NFSU2_TR(0x49aec7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aec8:{NFSU2_TR(0x49aec8);
__builtin_memmove((R+4),(R+24),4);
}
B49aeca:{NFSU2_TR(0x49aeca);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49aecdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49aecd:L49aecd:{c.instructions+=3;NFSU2_TR(0x49aecd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49aecf:{NFSU2_TR(0x49aecf);
__builtin_memmove((R+4),(R+24),4);
}
B49aed1:{NFSU2_TR(0x49aed1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49aed4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49aed4:L49aed4:{c.instructions+=2;NFSU2_TR(0x49aed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49aed5:{NFSU2_TR(0x49aed5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49aee0:L49aee0:{c.instructions+=6;NFSU2_TR(0x49aee0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aee1:{NFSU2_TR(0x49aee1);
__builtin_memmove((R+24),(R+4),4);
}
B49aee3:{NFSU2_TR(0x49aee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49aee6:{NFSU2_TR(0x49aee6);
u8 U[4];
w4(U+0,u32(0xf86a6272ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aeeb:{NFSU2_TR(0x49aeeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49aeec:{NFSU2_TR(0x49aeec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49aef1ull));
TAIL_STATIC(0x50c900u,50c);
}
B49aef1:L49aef1:{c.instructions+=9;NFSU2_TR(0x49aef1);
__builtin_memmove((R+0),gp(0x83aa1a),1);
}
B49aef6:{NFSU2_TR(0x49aef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49aef9:{NFSU2_TR(0x49aef9);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B49aefb:{NFSU2_TR(0x49aefb);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49aefd:{NFSU2_TR(0x49aefd);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffff71bull))));
}
B49af02:{NFSU2_TR(0x49af02);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8569ab44ull))));
}
B49af07:{NFSU2_TR(0x49af07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49af08:{NFSU2_TR(0x49af08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49af09:{NFSU2_TR(0x49af09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49af0eull));
TAIL_STATIC(0x50c900u,50c);
}
B49af0e:L49af0e:{c.instructions+=3;NFSU2_TR(0x49af0e);
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
B49af11:{NFSU2_TR(0x49af11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49af12:{NFSU2_TR(0x49af12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49af20:L49af20:{c.instructions+=6;NFSU2_TR(0x49af20);
__builtin_memmove((R+0),gp(0x83ac30),4);
}
B49af25:{NFSU2_TR(0x49af25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49af26:{NFSU2_TR(0x49af26);
__builtin_memmove((R+24),(R+4),4);
}
B49af28:{NFSU2_TR(0x49af28);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49af2c:{NFSU2_TR(0x49af2c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x9120409eull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49af32:{NFSU2_TR(0x49af32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49af3e;}}
}
B49af34:L49af34:{c.instructions+=2;NFSU2_TR(0x49af34);
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
B49af35:{NFSU2_TR(0x49af35);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L49af4e;}}
}
B49af37:L49af37:{c.instructions+=2;NFSU2_TR(0x49af37);
w4(R+0,u32(0x2ull));
}
B49af3c:{NFSU2_TR(0x49af3c);
{goto L49af4e;}
}
B49af3e:L49af3e:{c.instructions+=2;NFSU2_TR(0x49af3e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49af44:{NFSU2_TR(0x49af44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49af4e;}}
}
B49af46:L49af46:{c.instructions+=3;NFSU2_TR(0x49af46);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B49af47:{NFSU2_TR(0x49af47);
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
B49af4a:{NFSU2_TR(0x49af4a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49af4e;}}
}
B49af4c:L49af4c:{c.instructions+=1;NFSU2_TR(0x49af4c);
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
B49af4e:L49af4e:{c.instructions+=5;NFSU2_TR(0x49af4e);
__builtin_memmove(gp(0x83ac30),(R+0),4);
}
B49af53:{NFSU2_TR(0x49af53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49af55:{NFSU2_TR(0x49af55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49af56:{NFSU2_TR(0x49af56);
__builtin_memmove((R+4),(R+24),4);
}
B49af58:{NFSU2_TR(0x49af58);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49af5bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49af5b:L49af5b:{c.instructions+=3;NFSU2_TR(0x49af5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49af5d:{NFSU2_TR(0x49af5d);
__builtin_memmove((R+4),(R+24),4);
}
B49af5f:{NFSU2_TR(0x49af5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49af62ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49af62:L49af62:{c.instructions+=2;NFSU2_TR(0x49af62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49af63:{NFSU2_TR(0x49af63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49af70:L49af70:{c.instructions+=6;NFSU2_TR(0x49af70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49af71:{NFSU2_TR(0x49af71);
__builtin_memmove((R+24),(R+4),4);
}
B49af73:{NFSU2_TR(0x49af73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49af76:{NFSU2_TR(0x49af76);
u8 U[4];
w4(U+0,u32(0xbc0e6c55ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49af7b:{NFSU2_TR(0x49af7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49af7c:{NFSU2_TR(0x49af7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49af81ull));
TAIL_STATIC(0x50c900u,50c);
}
B49af81:L49af81:{c.instructions+=5;NFSU2_TR(0x49af81);
__builtin_memmove((R+0),gp(0x83ac30),4);
}
B49af86:{NFSU2_TR(0x49af86);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B49af88:{NFSU2_TR(0x49af88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49af8b:{NFSU2_TR(0x49af8b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B49af8d:{NFSU2_TR(0x49af8d);
if(r1(R+518)){{goto L49afbd;}}
}
B49af8f:L49af8f:{c.instructions+=2;NFSU2_TR(0x49af8f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B49af90:{NFSU2_TR(0x49af90);
if(r1(R+518)){{goto L49afa9;}}
}
B49af92:L49af92:{c.instructions+=2;NFSU2_TR(0x49af92);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B49af93:{NFSU2_TR(0x49af93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49afc2;}}
}
B49af95:L49af95:{c.instructions+=5;NFSU2_TR(0x49af95);
w4(R+4,u32(0xdbbcf37cull));
}
B49af9a:{NFSU2_TR(0x49af9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49af9b:{NFSU2_TR(0x49af9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49af9e:{NFSU2_TR(0x49af9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49af9f:{NFSU2_TR(0x49af9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49afa4ull));
TAIL_STATIC(0x50c900u,50c);
}
B49afa4:L49afa4:{c.instructions+=3;NFSU2_TR(0x49afa4);
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
B49afa7:{NFSU2_TR(0x49afa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49afa8:{NFSU2_TR(0x49afa8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49afa9:L49afa9:{c.instructions+=5;NFSU2_TR(0x49afa9);
w4(R+4,u32(0xcab262deull));
}
B49afae:{NFSU2_TR(0x49afae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49afaf:{NFSU2_TR(0x49afaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49afb2:{NFSU2_TR(0x49afb2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49afb3:{NFSU2_TR(0x49afb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49afb8ull));
TAIL_STATIC(0x50c900u,50c);
}
B49afb8:L49afb8:{c.instructions+=3;NFSU2_TR(0x49afb8);
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
B49afbb:{NFSU2_TR(0x49afbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49afbc:{NFSU2_TR(0x49afbc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49afbd:L49afbd:{c.instructions+=1;NFSU2_TR(0x49afbd);
w4(R+4,u32(0xdbbb4e8full));
}
B49afc2:L49afc2:{c.instructions+=4;NFSU2_TR(0x49afc2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49afc3:{NFSU2_TR(0x49afc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49afc6:{NFSU2_TR(0x49afc6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49afc7:{NFSU2_TR(0x49afc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49afccull));
TAIL_STATIC(0x50c900u,50c);
}
B49afcc:L49afcc:{c.instructions+=3;NFSU2_TR(0x49afcc);
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
B49afcf:{NFSU2_TR(0x49afcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49afd0:{NFSU2_TR(0x49afd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49afe0:L49afe0:{c.instructions+=10;NFSU2_TR(0x49afe0);
__builtin_memmove((R+8),gp(0x850078),4);
}
B49afe6:{NFSU2_TR(0x49afe6);
w4(R+0,u32(m1(0x83aa1b)));
}
B49afed:{NFSU2_TR(0x49afed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49afee:{NFSU2_TR(0x49afee);
__builtin_memmove((R+24),(R+4),4);
}
B49aff0:{NFSU2_TR(0x49aff0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B49aff2:{NFSU2_TR(0x49aff2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49aff5:{NFSU2_TR(0x49aff5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49aff9:{NFSU2_TR(0x49aff9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B49affc:{NFSU2_TR(0x49affc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B49affd:{NFSU2_TR(0x49affd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x9120409eull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
TAIL_STATIC(0x49b003u,49b);
}
XIT:NFSU2_TR_EXIT(0x49a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
