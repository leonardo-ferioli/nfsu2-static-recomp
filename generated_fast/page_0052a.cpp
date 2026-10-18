#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_529(u8* __restrict R,Cpu& c);
u32 body_52b(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x52a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x52a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_52a(u8* __restrict R,Cpu& c);
u32 page_52a(Cpu& c){return body_52a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_52a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x52a000:goto L52a000;
case 0x52a001:c.instructions+=2;goto B52a001;
case 0x52a002:c.instructions+=1;goto B52a002;
case 0x52a010:goto L52a010;
case 0x52a011:c.instructions+=3;goto B52a011;
case 0x52a016:c.instructions+=2;goto B52a016;
case 0x52a018:c.instructions+=1;goto B52a018;
case 0x52a01a:goto L52a01a;
case 0x52a01c:c.instructions+=2;goto B52a01c;
case 0x52a01d:c.instructions+=1;goto B52a01d;
case 0x52a01e:goto L52a01e;
case 0x52a01f:c.instructions+=8;goto B52a01f;
case 0x52a023:c.instructions+=7;goto B52a023;
case 0x52a026:c.instructions+=6;goto B52a026;
case 0x52a027:c.instructions+=5;goto B52a027;
case 0x52a02b:c.instructions+=4;goto B52a02b;
case 0x52a02c:c.instructions+=3;goto B52a02c;
case 0x52a030:c.instructions+=2;goto B52a030;
case 0x52a035:c.instructions+=1;goto B52a035;
case 0x52a037:goto L52a037;
case 0x52a03b:c.instructions+=5;goto B52a03b;
case 0x52a03c:c.instructions+=4;goto B52a03c;
case 0x52a03d:c.instructions+=3;goto B52a03d;
case 0x52a03e:c.instructions+=2;goto B52a03e;
case 0x52a03f:c.instructions+=1;goto B52a03f;
case 0x52a044:goto L52a044;
case 0x52a047:c.instructions+=1;goto B52a047;
case 0x52a04b:goto L52a04b;
case 0x52a04e:c.instructions+=1;goto B52a04e;
case 0x52a050:goto L52a050;
case 0x52a051:c.instructions+=3;goto B52a051;
case 0x52a052:c.instructions+=2;goto B52a052;
case 0x52a053:c.instructions+=1;goto B52a053;
case 0x52a058:goto L52a058;
case 0x52a05c:c.instructions+=3;goto B52a05c;
case 0x52a05f:c.instructions+=2;goto B52a05f;
case 0x52a061:c.instructions+=1;goto B52a061;
case 0x52a065:goto L52a065;
case 0x52a06b:c.instructions+=1;goto B52a06b;
case 0x52a06d:goto L52a06d;
case 0x52a06f:c.instructions+=4;goto B52a06f;
case 0x52a070:c.instructions+=3;goto B52a070;
case 0x52a071:c.instructions+=2;goto B52a071;
case 0x52a072:c.instructions+=1;goto B52a072;
case 0x52a077:goto L52a077;
case 0x52a07b:c.instructions+=3;goto B52a07b;
case 0x52a07e:c.instructions+=2;goto B52a07e;
case 0x52a080:c.instructions+=1;goto B52a080;
case 0x52a084:goto L52a084;
case 0x52a088:c.instructions+=5;goto B52a088;
case 0x52a089:c.instructions+=4;goto B52a089;
case 0x52a08a:c.instructions+=3;goto B52a08a;
case 0x52a08b:c.instructions+=2;goto B52a08b;
case 0x52a08c:c.instructions+=1;goto B52a08c;
case 0x52a090:goto L52a090;
case 0x52a091:c.instructions+=3;goto B52a091;
case 0x52a095:c.instructions+=2;goto B52a095;
case 0x52a098:c.instructions+=1;goto B52a098;
case 0x52a09a:goto L52a09a;
case 0x52a09f:c.instructions+=2;goto B52a09f;
case 0x52a0a1:c.instructions+=1;goto B52a0a1;
case 0x52a0a3:goto L52a0a3;
case 0x52a0a5:c.instructions+=2;goto B52a0a5;
case 0x52a0a6:c.instructions+=1;goto B52a0a6;
case 0x52a0a7:goto L52a0a7;
case 0x52a0aa:c.instructions+=4;goto B52a0aa;
case 0x52a0ab:c.instructions+=3;goto B52a0ab;
case 0x52a0af:c.instructions+=2;goto B52a0af;
case 0x52a0b4:c.instructions+=1;goto B52a0b4;
case 0x52a0b6:goto L52a0b6;
case 0x52a0ba:c.instructions+=4;goto B52a0ba;
case 0x52a0bb:c.instructions+=3;goto B52a0bb;
case 0x52a0bc:c.instructions+=2;goto B52a0bc;
case 0x52a0bd:c.instructions+=1;goto B52a0bd;
case 0x52a0c2:goto L52a0c2;
case 0x52a0c5:c.instructions+=1;goto B52a0c5;
case 0x52a0c9:goto L52a0c9;
case 0x52a0cc:c.instructions+=1;goto B52a0cc;
case 0x52a0ce:goto L52a0ce;
case 0x52a0cf:c.instructions+=2;goto B52a0cf;
case 0x52a0d0:c.instructions+=1;goto B52a0d0;
case 0x52a0d5:goto L52a0d5;
case 0x52a0d9:c.instructions+=3;goto B52a0d9;
case 0x52a0dc:c.instructions+=2;goto B52a0dc;
case 0x52a0de:c.instructions+=1;goto B52a0de;
case 0x52a0e2:goto L52a0e2;
case 0x52a0e8:c.instructions+=1;goto B52a0e8;
case 0x52a0ea:goto L52a0ea;
case 0x52a0eb:c.instructions+=2;goto B52a0eb;
case 0x52a0ec:c.instructions+=1;goto B52a0ec;
case 0x52a0f1:goto L52a0f1;
case 0x52a0f5:c.instructions+=3;goto B52a0f5;
case 0x52a0f8:c.instructions+=2;goto B52a0f8;
case 0x52a0fa:c.instructions+=1;goto B52a0fa;
case 0x52a0fe:goto L52a0fe;
case 0x52a102:c.instructions+=3;goto B52a102;
case 0x52a103:c.instructions+=2;goto B52a103;
case 0x52a104:c.instructions+=1;goto B52a104;
case 0x52a110:goto L52a110;
case 0x52a111:c.instructions+=3;goto B52a111;
case 0x52a116:c.instructions+=2;goto B52a116;
case 0x52a118:c.instructions+=1;goto B52a118;
case 0x52a11a:goto L52a11a;
case 0x52a11c:c.instructions+=2;goto B52a11c;
case 0x52a11d:c.instructions+=1;goto B52a11d;
case 0x52a11e:goto L52a11e;
case 0x52a122:c.instructions+=8;goto B52a122;
case 0x52a123:c.instructions+=7;goto B52a123;
case 0x52a124:c.instructions+=6;goto B52a124;
case 0x52a128:c.instructions+=5;goto B52a128;
case 0x52a12a:c.instructions+=4;goto B52a12a;
case 0x52a12c:c.instructions+=3;goto B52a12c;
case 0x52a12d:c.instructions+=2;goto B52a12d;
case 0x52a131:c.instructions+=1;goto B52a131;
case 0x52a133:goto L52a133;
case 0x52a134:c.instructions+=2;goto B52a134;
case 0x52a139:c.instructions+=1;goto B52a139;
case 0x52a13e:goto L52a13e;
case 0x52a13f:c.instructions+=4;goto B52a13f;
case 0x52a140:c.instructions+=3;goto B52a140;
case 0x52a142:c.instructions+=2;goto B52a142;
case 0x52a146:c.instructions+=1;goto B52a146;
case 0x52a14b:goto L52a14b;
case 0x52a14d:c.instructions+=4;goto B52a14d;
case 0x52a151:c.instructions+=3;goto B52a151;
case 0x52a154:c.instructions+=2;goto B52a154;
case 0x52a156:c.instructions+=1;goto B52a156;
case 0x52a15a:goto L52a15a;
case 0x52a15c:c.instructions+=1;goto B52a15c;
case 0x52a15e:goto L52a15e;
case 0x52a15f:c.instructions+=3;goto B52a15f;
case 0x52a160:c.instructions+=2;goto B52a160;
case 0x52a161:c.instructions+=1;goto B52a161;
case 0x52a166:goto L52a166;
case 0x52a169:c.instructions+=2;goto B52a169;
case 0x52a16b:c.instructions+=1;goto B52a16b;
case 0x52a16f:goto L52a16f;
case 0x52a174:c.instructions+=1;goto B52a174;
case 0x52a176:goto L52a176;
case 0x52a177:c.instructions+=2;goto B52a177;
case 0x52a17c:c.instructions+=1;goto B52a17c;
case 0x52a181:goto L52a181;
case 0x52a182:c.instructions+=4;goto B52a182;
case 0x52a183:c.instructions+=3;goto B52a183;
case 0x52a185:c.instructions+=2;goto B52a185;
case 0x52a189:c.instructions+=1;goto B52a189;
case 0x52a18e:goto L52a18e;
case 0x52a192:c.instructions+=2;goto B52a192;
case 0x52a195:c.instructions+=1;goto B52a195;
case 0x52a197:goto L52a197;
case 0x52a198:c.instructions+=5;goto B52a198;
case 0x52a199:c.instructions+=4;goto B52a199;
case 0x52a19b:c.instructions+=3;goto B52a19b;
case 0x52a19c:c.instructions+=2;goto B52a19c;
case 0x52a19d:c.instructions+=1;goto B52a19d;
case 0x52a1a0:goto L52a1a0;
case 0x52a1a1:c.instructions+=3;goto B52a1a1;
case 0x52a1a6:c.instructions+=2;goto B52a1a6;
case 0x52a1a8:c.instructions+=1;goto B52a1a8;
case 0x52a1aa:goto L52a1aa;
case 0x52a1ab:c.instructions+=8;goto B52a1ab;
case 0x52a1af:c.instructions+=7;goto B52a1af;
case 0x52a1b2:c.instructions+=6;goto B52a1b2;
case 0x52a1b3:c.instructions+=5;goto B52a1b3;
case 0x52a1b7:c.instructions+=4;goto B52a1b7;
case 0x52a1b8:c.instructions+=3;goto B52a1b8;
case 0x52a1bc:c.instructions+=2;goto B52a1bc;
case 0x52a1c1:c.instructions+=1;goto B52a1c1;
case 0x52a1c3:goto L52a1c3;
case 0x52a1c5:c.instructions+=2;goto B52a1c5;
case 0x52a1c7:c.instructions+=1;goto B52a1c7;
case 0x52a1cc:goto L52a1cc;
case 0x52a1cf:c.instructions+=1;goto B52a1cf;
case 0x52a1d3:goto L52a1d3;
case 0x52a1d6:c.instructions+=1;goto B52a1d6;
case 0x52a1d8:goto L52a1d8;
case 0x52a1da:c.instructions+=2;goto B52a1da;
case 0x52a1dd:c.instructions+=1;goto B52a1dd;
case 0x52a1df:goto L52a1df;
case 0x52a1e0:c.instructions+=2;goto B52a1e0;
case 0x52a1e2:c.instructions+=1;goto B52a1e2;
case 0x52a1e7:goto L52a1e7;
case 0x52a1ea:goto L52a1ea;
case 0x52a1ee:goto L52a1ee;
case 0x52a1f4:c.instructions+=1;goto B52a1f4;
case 0x52a1f6:goto L52a1f6;
case 0x52a1f8:c.instructions+=2;goto B52a1f8;
case 0x52a1fa:c.instructions+=1;goto B52a1fa;
case 0x52a1ff:goto L52a1ff;
case 0x52a203:c.instructions+=3;goto B52a203;
case 0x52a206:c.instructions+=2;goto B52a206;
case 0x52a208:c.instructions+=1;goto B52a208;
case 0x52a20c:goto L52a20c;
case 0x52a210:c.instructions+=5;goto B52a210;
case 0x52a211:c.instructions+=4;goto B52a211;
case 0x52a212:c.instructions+=3;goto B52a212;
case 0x52a213:c.instructions+=2;goto B52a213;
case 0x52a214:c.instructions+=1;goto B52a214;
case 0x52a215:goto L52a215;
case 0x52a217:c.instructions+=2;goto B52a217;
case 0x52a218:c.instructions+=1;goto B52a218;
case 0x52a220:goto L52a220;
case 0x52a221:c.instructions+=8;goto B52a221;
case 0x52a222:c.instructions+=7;goto B52a222;
case 0x52a223:c.instructions+=6;goto B52a223;
case 0x52a225:c.instructions+=5;goto B52a225;
case 0x52a228:c.instructions+=4;goto B52a228;
case 0x52a22b:c.instructions+=3;goto B52a22b;
case 0x52a230:c.instructions+=2;goto B52a230;
case 0x52a232:c.instructions+=1;goto B52a232;
case 0x52a234:goto L52a234;
case 0x52a238:c.instructions+=15;goto B52a238;
case 0x52a23b:c.instructions+=14;goto B52a23b;
case 0x52a240:c.instructions+=13;goto B52a240;
case 0x52a243:c.instructions+=12;goto B52a243;
case 0x52a246:c.instructions+=11;goto B52a246;
case 0x52a248:c.instructions+=10;goto B52a248;
case 0x52a24c:c.instructions+=9;goto B52a24c;
case 0x52a24f:c.instructions+=8;goto B52a24f;
case 0x52a252:c.instructions+=7;goto B52a252;
case 0x52a255:c.instructions+=6;goto B52a255;
case 0x52a258:c.instructions+=5;goto B52a258;
case 0x52a25b:c.instructions+=4;goto B52a25b;
case 0x52a25e:c.instructions+=3;goto B52a25e;
case 0x52a261:c.instructions+=2;goto B52a261;
case 0x52a262:c.instructions+=1;goto B52a262;
case 0x52a264:goto L52a264;
case 0x52a26a:c.instructions+=1;goto B52a26a;
case 0x52a26f:goto L52a26f;
case 0x52a271:c.instructions+=4;goto B52a271;
case 0x52a272:c.instructions+=3;goto B52a272;
case 0x52a273:c.instructions+=2;goto B52a273;
case 0x52a274:c.instructions+=1;goto B52a274;
case 0x52a280:goto L52a280;
case 0x52a281:c.instructions+=16;goto B52a281;
case 0x52a283:c.instructions+=15;goto B52a283;
case 0x52a284:c.instructions+=14;goto B52a284;
case 0x52a287:c.instructions+=13;goto B52a287;
case 0x52a288:c.instructions+=12;goto B52a288;
case 0x52a289:c.instructions+=11;goto B52a289;
case 0x52a28b:c.instructions+=10;goto B52a28b;
case 0x52a28e:c.instructions+=9;goto B52a28e;
case 0x52a291:c.instructions+=8;goto B52a291;
case 0x52a292:c.instructions+=7;goto B52a292;
case 0x52a294:c.instructions+=6;goto B52a294;
case 0x52a296:c.instructions+=5;goto B52a296;
case 0x52a297:c.instructions+=4;goto B52a297;
case 0x52a298:c.instructions+=3;goto B52a298;
case 0x52a29e:c.instructions+=2;goto B52a29e;
case 0x52a2a1:c.instructions+=1;goto B52a2a1;
case 0x52a2a6:goto L52a2a6;
case 0x52a2a8:c.instructions+=5;goto B52a2a8;
case 0x52a2aa:c.instructions+=4;goto B52a2aa;
case 0x52a2ab:c.instructions+=3;goto B52a2ab;
case 0x52a2ac:c.instructions+=2;goto B52a2ac;
case 0x52a2b1:c.instructions+=1;goto B52a2b1;
case 0x52a2b6:goto L52a2b6;
case 0x52a2b8:c.instructions+=3;goto B52a2b8;
case 0x52a2be:c.instructions+=2;goto B52a2be;
case 0x52a2c0:c.instructions+=1;goto B52a2c0;
case 0x52a2c2:goto L52a2c2;
case 0x52a2c8:c.instructions+=1;goto B52a2c8;
case 0x52a2cd:goto L52a2cd;
case 0x52a2cf:goto L52a2cf;
case 0x52a2d2:c.instructions+=1;goto B52a2d2;
case 0x52a2d4:goto L52a2d4;
case 0x52a2d7:c.instructions+=2;goto B52a2d7;
case 0x52a2d9:c.instructions+=1;goto B52a2d9;
case 0x52a2db:goto L52a2db;
case 0x52a2de:c.instructions+=1;goto B52a2de;
case 0x52a2e3:goto L52a2e3;
case 0x52a2e5:goto L52a2e5;
case 0x52a2e8:c.instructions+=1;goto B52a2e8;
case 0x52a2ea:goto L52a2ea;
case 0x52a2ed:c.instructions+=2;goto B52a2ed;
case 0x52a2ef:c.instructions+=1;goto B52a2ef;
case 0x52a2f1:goto L52a2f1;
case 0x52a2f4:c.instructions+=9;goto B52a2f4;
case 0x52a2f6:c.instructions+=8;goto B52a2f6;
case 0x52a2f8:c.instructions+=7;goto B52a2f8;
case 0x52a2fb:c.instructions+=6;goto B52a2fb;
case 0x52a2fe:c.instructions+=5;goto B52a2fe;
case 0x52a301:c.instructions+=4;goto B52a301;
case 0x52a304:c.instructions+=3;goto B52a304;
case 0x52a307:c.instructions+=2;goto B52a307;
case 0x52a30a:c.instructions+=1;goto B52a30a;
case 0x52a30c:goto L52a30c;
case 0x52a30f:c.instructions+=2;goto B52a30f;
case 0x52a311:c.instructions+=1;goto B52a311;
case 0x52a313:goto L52a313;
case 0x52a319:c.instructions+=1;goto B52a319;
case 0x52a31e:goto L52a31e;
case 0x52a320:goto L52a320;
case 0x52a323:c.instructions+=1;goto B52a323;
case 0x52a325:goto L52a325;
case 0x52a328:c.instructions+=2;goto B52a328;
case 0x52a32a:c.instructions+=1;goto B52a32a;
case 0x52a32c:goto L52a32c;
case 0x52a32f:c.instructions+=9;goto B52a32f;
case 0x52a331:c.instructions+=8;goto B52a331;
case 0x52a333:c.instructions+=7;goto B52a333;
case 0x52a336:c.instructions+=6;goto B52a336;
case 0x52a339:c.instructions+=5;goto B52a339;
case 0x52a33c:c.instructions+=4;goto B52a33c;
case 0x52a33f:c.instructions+=3;goto B52a33f;
case 0x52a342:c.instructions+=2;goto B52a342;
case 0x52a345:c.instructions+=1;goto B52a345;
case 0x52a347:goto L52a347;
case 0x52a34d:c.instructions+=2;goto B52a34d;
case 0x52a34f:c.instructions+=1;goto B52a34f;
case 0x52a351:goto L52a351;
case 0x52a357:c.instructions+=1;goto B52a357;
case 0x52a35c:goto L52a35c;
case 0x52a35e:goto L52a35e;
case 0x52a361:c.instructions+=1;goto B52a361;
case 0x52a363:goto L52a363;
case 0x52a366:c.instructions+=2;goto B52a366;
case 0x52a368:c.instructions+=1;goto B52a368;
case 0x52a36a:goto L52a36a;
case 0x52a370:c.instructions+=3;goto B52a370;
case 0x52a376:c.instructions+=2;goto B52a376;
case 0x52a378:c.instructions+=1;goto B52a378;
case 0x52a37a:goto L52a37a;
case 0x52a37d:c.instructions+=2;goto B52a37d;
case 0x52a37f:c.instructions+=1;goto B52a37f;
case 0x52a381:goto L52a381;
case 0x52a387:c.instructions+=3;goto B52a387;
case 0x52a38d:c.instructions+=2;goto B52a38d;
case 0x52a38f:c.instructions+=1;goto B52a38f;
case 0x52a391:goto L52a391;
case 0x52a394:c.instructions+=2;goto B52a394;
case 0x52a396:c.instructions+=1;goto B52a396;
case 0x52a398:goto L52a398;
case 0x52a39e:c.instructions+=3;goto B52a39e;
case 0x52a3a4:c.instructions+=2;goto B52a3a4;
case 0x52a3a6:c.instructions+=1;goto B52a3a6;
case 0x52a3a8:goto L52a3a8;
case 0x52a3ab:c.instructions+=2;goto B52a3ab;
case 0x52a3ad:c.instructions+=1;goto B52a3ad;
case 0x52a3af:goto L52a3af;
case 0x52a3b5:c.instructions+=3;goto B52a3b5;
case 0x52a3bb:c.instructions+=2;goto B52a3bb;
case 0x52a3bd:c.instructions+=1;goto B52a3bd;
case 0x52a3bf:goto L52a3bf;
case 0x52a3c2:c.instructions+=2;goto B52a3c2;
case 0x52a3c4:c.instructions+=1;goto B52a3c4;
case 0x52a3c6:goto L52a3c6;
case 0x52a3cc:c.instructions+=3;goto B52a3cc;
case 0x52a3d2:c.instructions+=2;goto B52a3d2;
case 0x52a3d4:c.instructions+=1;goto B52a3d4;
case 0x52a3d6:goto L52a3d6;
case 0x52a3dc:c.instructions+=2;goto B52a3dc;
case 0x52a3de:c.instructions+=1;goto B52a3de;
case 0x52a3e0:goto L52a3e0;
case 0x52a3e6:c.instructions+=1;goto B52a3e6;
case 0x52a3eb:goto L52a3eb;
case 0x52a3ed:goto L52a3ed;
case 0x52a3f0:c.instructions+=1;goto B52a3f0;
case 0x52a3f2:goto L52a3f2;
case 0x52a3f8:c.instructions+=2;goto B52a3f8;
case 0x52a3fa:c.instructions+=1;goto B52a3fa;
case 0x52a3fc:goto L52a3fc;
case 0x52a402:c.instructions+=1;goto B52a402;
case 0x52a407:goto L52a407;
case 0x52a409:goto L52a409;
case 0x52a40c:c.instructions+=1;goto B52a40c;
case 0x52a40e:goto L52a40e;
case 0x52a411:c.instructions+=2;goto B52a411;
case 0x52a413:c.instructions+=1;goto B52a413;
case 0x52a415:goto L52a415;
case 0x52a41a:goto L52a41a;
case 0x52a41c:goto L52a41c;
case 0x52a41e:goto L52a41e;
case 0x52a41f:c.instructions+=2;goto B52a41f;
case 0x52a424:c.instructions+=1;goto B52a424;
case 0x52a429:goto L52a429;
case 0x52a42a:c.instructions+=1;goto B52a42a;
case 0x52a42f:goto L52a42f;
case 0x52a432:c.instructions+=6;goto B52a432;
case 0x52a433:c.instructions+=5;goto B52a433;
case 0x52a434:c.instructions+=4;goto B52a434;
case 0x52a435:c.instructions+=3;goto B52a435;
case 0x52a437:c.instructions+=2;goto B52a437;
case 0x52a438:c.instructions+=1;goto B52a438;
case 0x52a440:goto L52a440;
case 0x52a445:goto L52a445;
case 0x52a44a:c.instructions+=1;goto B52a44a;
case 0x52a450:goto L52a450;
case 0x52a453:c.instructions+=1;goto B52a453;
case 0x52a460:goto L52a460;
case 0x52a461:c.instructions+=6;goto B52a461;
case 0x52a463:c.instructions+=5;goto B52a463;
case 0x52a464:c.instructions+=4;goto B52a464;
case 0x52a466:c.instructions+=3;goto B52a466;
case 0x52a46c:c.instructions+=2;goto B52a46c;
case 0x52a46e:c.instructions+=1;goto B52a46e;
case 0x52a470:goto L52a470;
case 0x52a473:c.instructions+=2;goto B52a473;
case 0x52a475:c.instructions+=1;goto B52a475;
case 0x52a477:goto L52a477;
case 0x52a47d:c.instructions+=2;goto B52a47d;
case 0x52a47f:c.instructions+=1;goto B52a47f;
case 0x52a481:goto L52a481;
case 0x52a486:goto L52a486;
case 0x52a48b:c.instructions+=3;goto B52a48b;
case 0x52a48d:c.instructions+=2;goto B52a48d;
case 0x52a48e:c.instructions+=1;goto B52a48e;
case 0x52a493:goto L52a493;
case 0x52a496:c.instructions+=2;goto B52a496;
case 0x52a49c:c.instructions+=1;goto B52a49c;
case 0x52a4a1:goto L52a4a1;
case 0x52a4a6:c.instructions+=5;goto B52a4a6;
case 0x52a4a7:c.instructions+=4;goto B52a4a7;
case 0x52a4ad:c.instructions+=3;goto B52a4ad;
case 0x52a4ae:c.instructions+=2;goto B52a4ae;
case 0x52a4b1:c.instructions+=1;goto B52a4b1;
case 0x52a4b6:goto L52a4b6;
case 0x52a4b7:c.instructions+=2;goto B52a4b7;
case 0x52a4b8:c.instructions+=1;goto B52a4b8;
case 0x52a4c0:goto L52a4c0;
case 0x52a4c3:c.instructions+=6;goto B52a4c3;
case 0x52a4c4:c.instructions+=5;goto B52a4c4;
case 0x52a4c6:c.instructions+=4;goto B52a4c6;
case 0x52a4cc:c.instructions+=3;goto B52a4cc;
case 0x52a4ce:c.instructions+=2;goto B52a4ce;
case 0x52a4d2:c.instructions+=1;goto B52a4d2;
case 0x52a4d4:goto L52a4d4;
case 0x52a4d6:c.instructions+=3;goto B52a4d6;
case 0x52a4d7:c.instructions+=2;goto B52a4d7;
case 0x52a4da:c.instructions+=1;goto B52a4da;
case 0x52a4db:goto L52a4db;
case 0x52a4dc:c.instructions+=2;goto B52a4dc;
case 0x52a4dd:c.instructions+=1;goto B52a4dd;
case 0x52a4e2:goto L52a4e2;
case 0x52a4e7:c.instructions+=3;goto B52a4e7;
case 0x52a4e9:c.instructions+=2;goto B52a4e9;
case 0x52a4ea:c.instructions+=1;goto B52a4ea;
case 0x52a4ef:goto L52a4ef;
case 0x52a4f1:c.instructions+=4;goto B52a4f1;
case 0x52a4f4:c.instructions+=3;goto B52a4f4;
case 0x52a4f8:c.instructions+=2;goto B52a4f8;
case 0x52a4fd:c.instructions+=1;goto B52a4fd;
case 0x52a502:goto L52a502;
case 0x52a507:c.instructions+=4;goto B52a507;
case 0x52a508:c.instructions+=3;goto B52a508;
case 0x52a509:c.instructions+=2;goto B52a509;
case 0x52a50c:c.instructions+=1;goto B52a50c;
case 0x52a511:goto L52a511;
case 0x52a516:c.instructions+=2;goto B52a516;
case 0x52a518:c.instructions+=1;goto B52a518;
case 0x52a51a:goto L52a51a;
case 0x52a51c:c.instructions+=1;goto B52a51c;
case 0x52a520:goto L52a520;
case 0x52a525:goto L52a525;
case 0x52a52a:c.instructions+=2;goto B52a52a;
case 0x52a52c:c.instructions+=1;goto B52a52c;
case 0x52a52e:goto L52a52e;
case 0x52a533:goto L52a533;
case 0x52a538:c.instructions+=4;goto B52a538;
case 0x52a53a:c.instructions+=3;goto B52a53a;
case 0x52a53c:c.instructions+=2;goto B52a53c;
case 0x52a53f:c.instructions+=1;goto B52a53f;
case 0x52a541:goto L52a541;
case 0x52a546:goto L52a546;
case 0x52a54c:c.instructions+=5;goto B52a54c;
case 0x52a550:c.instructions+=4;goto B52a550;
case 0x52a552:c.instructions+=3;goto B52a552;
case 0x52a554:c.instructions+=2;goto B52a554;
case 0x52a557:c.instructions+=1;goto B52a557;
case 0x52a559:goto L52a559;
case 0x52a55b:goto L52a55b;
case 0x52a55f:c.instructions+=1;goto B52a55f;
case 0x52a561:goto L52a561;
case 0x52a565:c.instructions+=2;goto B52a565;
case 0x52a568:c.instructions+=1;goto B52a568;
case 0x52a56a:goto L52a56a;
case 0x52a56f:c.instructions+=1;goto B52a56f;
case 0x52a571:goto L52a571;
case 0x52a576:goto L52a576;
case 0x52a57c:c.instructions+=4;goto B52a57c;
case 0x52a580:c.instructions+=3;goto B52a580;
case 0x52a585:c.instructions+=2;goto B52a585;
case 0x52a587:c.instructions+=1;goto B52a587;
case 0x52a589:goto L52a589;
case 0x52a58b:goto L52a58b;
case 0x52a58f:c.instructions+=1;goto B52a58f;
case 0x52a591:goto L52a591;
case 0x52a595:goto L52a595;
case 0x52a599:c.instructions+=2;goto B52a599;
case 0x52a59a:c.instructions+=1;goto B52a59a;
case 0x52a59f:goto L52a59f;
case 0x52a5a5:c.instructions+=5;goto B52a5a5;
case 0x52a5a8:c.instructions+=4;goto B52a5a8;
case 0x52a5aa:c.instructions+=3;goto B52a5aa;
case 0x52a5ab:c.instructions+=2;goto B52a5ab;
case 0x52a5ac:c.instructions+=1;goto B52a5ac;
case 0x52a5ae:goto L52a5ae;
case 0x52a5af:c.instructions+=1;goto B52a5af;
case 0x52a5b4:goto L52a5b4;
case 0x52a5b7:c.instructions+=1;goto B52a5b7;
case 0x52a5c1:goto L52a5c1;
case 0x52a5c5:c.instructions+=3;goto B52a5c5;
case 0x52a5c6:c.instructions+=2;goto B52a5c6;
case 0x52a5c9:c.instructions+=1;goto B52a5c9;
case 0x52a5d0:goto L52a5d0;
case 0x52a5d2:c.instructions+=15;goto B52a5d2;
case 0x52a5d7:c.instructions+=14;goto B52a5d7;
case 0x52a5dd:c.instructions+=13;goto B52a5dd;
case 0x52a5de:c.instructions+=12;goto B52a5de;
case 0x52a5e5:c.instructions+=11;goto B52a5e5;
case 0x52a5e6:c.instructions+=10;goto B52a5e6;
case 0x52a5e7:c.instructions+=9;goto B52a5e7;
case 0x52a5e8:c.instructions+=8;goto B52a5e8;
case 0x52a5ed:c.instructions+=7;goto B52a5ed;
case 0x52a5f2:c.instructions+=6;goto B52a5f2;
case 0x52a5f4:c.instructions+=5;goto B52a5f4;
case 0x52a5f6:c.instructions+=4;goto B52a5f6;
case 0x52a5f8:c.instructions+=3;goto B52a5f8;
case 0x52a5f9:c.instructions+=2;goto B52a5f9;
case 0x52a5fd:c.instructions+=1;goto B52a5fd;
case 0x52a602:goto L52a602;
case 0x52a607:c.instructions+=8;goto B52a607;
case 0x52a60c:c.instructions+=7;goto B52a60c;
case 0x52a60e:c.instructions+=6;goto B52a60e;
case 0x52a613:c.instructions+=5;goto B52a613;
case 0x52a619:c.instructions+=4;goto B52a619;
case 0x52a61b:c.instructions+=3;goto B52a61b;
case 0x52a61c:c.instructions+=2;goto B52a61c;
case 0x52a620:c.instructions+=1;goto B52a620;
case 0x52a625:goto L52a625;
case 0x52a62a:c.instructions+=7;goto B52a62a;
case 0x52a62f:c.instructions+=6;goto B52a62f;
case 0x52a631:c.instructions+=5;goto B52a631;
case 0x52a636:c.instructions+=4;goto B52a636;
case 0x52a63c:c.instructions+=3;goto B52a63c;
case 0x52a63d:c.instructions+=2;goto B52a63d;
case 0x52a642:c.instructions+=1;goto B52a642;
case 0x52a647:goto L52a647;
case 0x52a64c:c.instructions+=7;goto B52a64c;
case 0x52a651:c.instructions+=6;goto B52a651;
case 0x52a653:c.instructions+=5;goto B52a653;
case 0x52a658:c.instructions+=4;goto B52a658;
case 0x52a65e:c.instructions+=3;goto B52a65e;
case 0x52a65f:c.instructions+=2;goto B52a65f;
case 0x52a664:c.instructions+=1;goto B52a664;
case 0x52a669:goto L52a669;
case 0x52a66e:c.instructions+=7;goto B52a66e;
case 0x52a673:c.instructions+=6;goto B52a673;
case 0x52a675:c.instructions+=5;goto B52a675;
case 0x52a677:c.instructions+=4;goto B52a677;
case 0x52a67d:c.instructions+=3;goto B52a67d;
case 0x52a67e:c.instructions+=2;goto B52a67e;
case 0x52a683:c.instructions+=1;goto B52a683;
case 0x52a688:goto L52a688;
case 0x52a68e:c.instructions+=5;goto B52a68e;
case 0x52a694:c.instructions+=4;goto B52a694;
case 0x52a69a:c.instructions+=3;goto B52a69a;
case 0x52a6a0:c.instructions+=2;goto B52a6a0;
case 0x52a6a2:c.instructions+=1;goto B52a6a2;
case 0x52a6a7:goto L52a6a7;
case 0x52a6a9:goto L52a6a9;
case 0x52a6ad:c.instructions+=6;goto B52a6ad;
case 0x52a6ae:c.instructions+=5;goto B52a6ae;
case 0x52a6b0:c.instructions+=4;goto B52a6b0;
case 0x52a6b1:c.instructions+=3;goto B52a6b1;
case 0x52a6b8:c.instructions+=2;goto B52a6b8;
case 0x52a6bb:c.instructions+=1;goto B52a6bb;
case 0x52a6c0:goto L52a6c0;
case 0x52a6c1:c.instructions+=5;goto B52a6c1;
case 0x52a6c2:c.instructions+=4;goto B52a6c2;
case 0x52a6c3:c.instructions+=3;goto B52a6c3;
case 0x52a6c7:c.instructions+=2;goto B52a6c7;
case 0x52a6c8:c.instructions+=1;goto B52a6c8;
case 0x52a6cd:goto L52a6cd;
case 0x52a6cf:c.instructions+=3;goto B52a6cf;
case 0x52a6d1:c.instructions+=2;goto B52a6d1;
case 0x52a6d3:c.instructions+=1;goto B52a6d3;
case 0x52a6d5:goto L52a6d5;
case 0x52a6d6:c.instructions+=1;goto B52a6d6;
case 0x52a6db:goto L52a6db;
case 0x52a6dd:c.instructions+=1;goto B52a6dd;
case 0x52a6df:goto L52a6df;
case 0x52a6e2:c.instructions+=7;goto B52a6e2;
case 0x52a6e5:c.instructions+=6;goto B52a6e5;
case 0x52a6e8:c.instructions+=5;goto B52a6e8;
case 0x52a6eb:c.instructions+=4;goto B52a6eb;
case 0x52a6ee:c.instructions+=3;goto B52a6ee;
case 0x52a6f5:c.instructions+=2;goto B52a6f5;
case 0x52a6fa:c.instructions+=1;goto B52a6fa;
case 0x52a6fc:goto L52a6fc;
case 0x52a6fe:goto L52a6fe;
case 0x52a701:goto L52a701;
case 0x52a702:c.instructions+=3;goto B52a702;
case 0x52a703:c.instructions+=2;goto B52a703;
case 0x52a704:c.instructions+=1;goto B52a704;
case 0x52a710:goto L52a710;
case 0x52a711:c.instructions+=4;goto B52a711;
case 0x52a715:c.instructions+=3;goto B52a715;
case 0x52a716:c.instructions+=2;goto B52a716;
case 0x52a717:c.instructions+=1;goto B52a717;
case 0x52a71c:goto L52a71c;
case 0x52a71e:c.instructions+=1;goto B52a71e;
case 0x52a720:goto L52a720;
case 0x52a725:goto L52a725;
case 0x52a727:c.instructions+=1;goto B52a727;
case 0x52a72d:goto L52a72d;
case 0x52a72e:c.instructions+=2;goto B52a72e;
case 0x52a72f:c.instructions+=1;goto B52a72f;
case 0x52a734:goto L52a734;
case 0x52a736:c.instructions+=1;goto B52a736;
case 0x52a73b:goto L52a73b;
case 0x52a73d:c.instructions+=3;goto B52a73d;
case 0x52a73f:c.instructions+=2;goto B52a73f;
case 0x52a741:c.instructions+=1;goto B52a741;
case 0x52a743:goto L52a743;
case 0x52a745:c.instructions+=8;goto B52a745;
case 0x52a747:c.instructions+=7;goto B52a747;
case 0x52a74d:c.instructions+=6;goto B52a74d;
case 0x52a752:c.instructions+=5;goto B52a752;
case 0x52a754:c.instructions+=4;goto B52a754;
case 0x52a757:c.instructions+=3;goto B52a757;
case 0x52a758:c.instructions+=2;goto B52a758;
case 0x52a75d:c.instructions+=1;goto B52a75d;
case 0x52a762:goto L52a762;
case 0x52a765:c.instructions+=8;goto B52a765;
case 0x52a768:c.instructions+=7;goto B52a768;
case 0x52a76b:c.instructions+=6;goto B52a76b;
case 0x52a76e:c.instructions+=5;goto B52a76e;
case 0x52a771:c.instructions+=4;goto B52a771;
case 0x52a776:c.instructions+=3;goto B52a776;
case 0x52a779:c.instructions+=2;goto B52a779;
case 0x52a780:c.instructions+=1;goto B52a780;
case 0x52a787:goto L52a787;
case 0x52a789:goto L52a789;
case 0x52a78b:c.instructions+=4;goto B52a78b;
case 0x52a78c:c.instructions+=3;goto B52a78c;
case 0x52a78d:c.instructions+=2;goto B52a78d;
case 0x52a78e:c.instructions+=1;goto B52a78e;
case 0x52a791:goto L52a791;
case 0x52a792:c.instructions+=1;goto B52a792;
case 0x52a797:goto L52a797;
case 0x52a799:c.instructions+=1;goto B52a799;
case 0x52a79b:goto L52a79b;
case 0x52a7a0:goto L52a7a0;
case 0x52a7a2:c.instructions+=1;goto B52a7a2;
case 0x52a7a4:goto L52a7a4;
case 0x52a7a5:c.instructions+=1;goto B52a7a5;
case 0x52a7aa:goto L52a7aa;
case 0x52a7ac:c.instructions+=1;goto B52a7ac;
case 0x52a7b1:goto L52a7b1;
case 0x52a7b3:c.instructions+=2;goto B52a7b3;
case 0x52a7b5:c.instructions+=1;goto B52a7b5;
case 0x52a7b7:goto L52a7b7;
case 0x52a7b9:c.instructions+=9;goto B52a7b9;
case 0x52a7bb:c.instructions+=8;goto B52a7bb;
case 0x52a7c1:c.instructions+=7;goto B52a7c1;
case 0x52a7c6:c.instructions+=6;goto B52a7c6;
case 0x52a7c8:c.instructions+=5;goto B52a7c8;
case 0x52a7c9:c.instructions+=4;goto B52a7c9;
case 0x52a7cc:c.instructions+=3;goto B52a7cc;
case 0x52a7cd:c.instructions+=2;goto B52a7cd;
case 0x52a7d2:c.instructions+=1;goto B52a7d2;
case 0x52a7d7:goto L52a7d7;
case 0x52a7da:c.instructions+=3;goto B52a7da;
case 0x52a7db:c.instructions+=2;goto B52a7db;
case 0x52a7dd:c.instructions+=1;goto B52a7dd;
case 0x52a7e2:goto L52a7e2;
case 0x52a7e3:c.instructions+=3;goto B52a7e3;
case 0x52a7e5:c.instructions+=2;goto B52a7e5;
case 0x52a7e6:c.instructions+=1;goto B52a7e6;
case 0x52a7e9:goto L52a7e9;
case 0x52a7ea:c.instructions+=3;goto B52a7ea;
case 0x52a7ec:c.instructions+=2;goto B52a7ec;
case 0x52a7ed:c.instructions+=1;goto B52a7ed;
case 0x52a7f0:goto L52a7f0;
case 0x52a7f3:c.instructions+=8;goto B52a7f3;
case 0x52a7f4:c.instructions+=7;goto B52a7f4;
case 0x52a7f5:c.instructions+=6;goto B52a7f5;
case 0x52a7f6:c.instructions+=5;goto B52a7f6;
case 0x52a7f7:c.instructions+=4;goto B52a7f7;
case 0x52a7fb:c.instructions+=3;goto B52a7fb;
case 0x52a800:c.instructions+=2;goto B52a800;
case 0x52a806:c.instructions+=1;goto B52a806;
case 0x52a808:goto L52a808;
case 0x52a80c:c.instructions+=1;goto B52a80c;
case 0x52a810:goto L52a810;
case 0x52a812:c.instructions+=5;goto B52a812;
case 0x52a816:c.instructions+=4;goto B52a816;
case 0x52a81c:c.instructions+=3;goto B52a81c;
case 0x52a81e:c.instructions+=2;goto B52a81e;
case 0x52a820:c.instructions+=1;goto B52a820;
case 0x52a822:goto L52a822;
case 0x52a824:goto L52a824;
case 0x52a826:c.instructions+=2;goto B52a826;
case 0x52a828:c.instructions+=1;goto B52a828;
case 0x52a82b:goto L52a82b;
case 0x52a82f:c.instructions+=1;goto B52a82f;
case 0x52a831:goto L52a831;
case 0x52a835:c.instructions+=5;goto B52a835;
case 0x52a83b:c.instructions+=4;goto B52a83b;
case 0x52a83c:c.instructions+=3;goto B52a83c;
case 0x52a83f:c.instructions+=2;goto B52a83f;
case 0x52a841:c.instructions+=1;goto B52a841;
case 0x52a843:goto L52a843;
case 0x52a845:goto L52a845;
case 0x52a848:c.instructions+=6;goto B52a848;
case 0x52a84e:c.instructions+=5;goto B52a84e;
case 0x52a851:c.instructions+=4;goto B52a851;
case 0x52a852:c.instructions+=3;goto B52a852;
case 0x52a853:c.instructions+=2;goto B52a853;
case 0x52a856:c.instructions+=1;goto B52a856;
case 0x52a85b:goto L52a85b;
case 0x52a862:c.instructions+=4;goto B52a862;
case 0x52a865:c.instructions+=3;goto B52a865;
case 0x52a86b:c.instructions+=2;goto B52a86b;
case 0x52a871:c.instructions+=1;goto B52a871;
case 0x52a873:goto L52a873;
case 0x52a877:c.instructions+=7;goto B52a877;
case 0x52a878:c.instructions+=6;goto B52a878;
case 0x52a879:c.instructions+=5;goto B52a879;
case 0x52a87a:c.instructions+=4;goto B52a87a;
case 0x52a884:c.instructions+=3;goto B52a884;
case 0x52a885:c.instructions+=2;goto B52a885;
case 0x52a888:c.instructions+=1;goto B52a888;
case 0x52a889:goto L52a889;
case 0x52a88d:c.instructions+=3;goto B52a88d;
case 0x52a890:c.instructions+=2;goto B52a890;
case 0x52a892:c.instructions+=1;goto B52a892;
case 0x52a8a0:goto L52a8a0;
case 0x52a8a4:c.instructions+=4;goto B52a8a4;
case 0x52a8a5:c.instructions+=3;goto B52a8a5;
case 0x52a8a6:c.instructions+=2;goto B52a8a6;
case 0x52a8a8:c.instructions+=1;goto B52a8a8;
case 0x52a8ad:goto L52a8ad;
case 0x52a8b3:c.instructions+=3;goto B52a8b3;
case 0x52a8b8:c.instructions+=2;goto B52a8b8;
case 0x52a8ba:c.instructions+=1;goto B52a8ba;
case 0x52a8c0:goto L52a8c0;
case 0x52a8c3:c.instructions+=7;goto B52a8c3;
case 0x52a8c5:c.instructions+=6;goto B52a8c5;
case 0x52a8c8:c.instructions+=5;goto B52a8c8;
case 0x52a8cb:c.instructions+=4;goto B52a8cb;
case 0x52a8d2:c.instructions+=3;goto B52a8d2;
case 0x52a8d7:c.instructions+=2;goto B52a8d7;
case 0x52a8d8:c.instructions+=1;goto B52a8d8;
case 0x52a8da:goto L52a8da;
case 0x52a8dc:c.instructions+=1;goto B52a8dc;
case 0x52a8e1:goto L52a8e1;
case 0x52a8e3:c.instructions+=1;goto B52a8e3;
case 0x52a8e8:goto L52a8e8;
case 0x52a8ed:goto L52a8ed;
case 0x52a8ef:c.instructions+=1;goto B52a8ef;
case 0x52a8f4:goto L52a8f4;
case 0x52a8f9:goto L52a8f9;
case 0x52a8fb:c.instructions+=1;goto B52a8fb;
case 0x52a900:goto L52a900;
case 0x52a901:c.instructions+=1;goto B52a901;
case 0x52a910:goto L52a910;
case 0x52a916:c.instructions+=13;goto B52a916;
case 0x52a918:c.instructions+=12;goto B52a918;
case 0x52a91d:c.instructions+=11;goto B52a91d;
case 0x52a91e:c.instructions+=10;goto B52a91e;
case 0x52a925:c.instructions+=9;goto B52a925;
case 0x52a928:c.instructions+=8;goto B52a928;
case 0x52a929:c.instructions+=7;goto B52a929;
case 0x52a92a:c.instructions+=6;goto B52a92a;
case 0x52a92b:c.instructions+=5;goto B52a92b;
case 0x52a92f:c.instructions+=4;goto B52a92f;
case 0x52a931:c.instructions+=3;goto B52a931;
case 0x52a933:c.instructions+=2;goto B52a933;
case 0x52a935:c.instructions+=1;goto B52a935;
case 0x52a937:goto L52a937;
case 0x52a93a:c.instructions+=1;goto B52a93a;
case 0x52a93c:goto L52a93c;
case 0x52a93f:c.instructions+=2;goto B52a93f;
case 0x52a940:c.instructions+=1;goto B52a940;
case 0x52a945:goto L52a945;
case 0x52a948:c.instructions+=2;goto B52a948;
case 0x52a94b:c.instructions+=1;goto B52a94b;
case 0x52a94e:goto L52a94e;
case 0x52a950:c.instructions+=1;goto B52a950;
case 0x52a955:goto L52a955;
case 0x52a956:c.instructions+=6;goto B52a956;
case 0x52a957:c.instructions+=5;goto B52a957;
case 0x52a958:c.instructions+=4;goto B52a958;
case 0x52a95c:c.instructions+=3;goto B52a95c;
case 0x52a963:c.instructions+=2;goto B52a963;
case 0x52a966:c.instructions+=1;goto B52a966;
case 0x52a969:goto L52a969;
case 0x52a96c:c.instructions+=4;goto B52a96c;
case 0x52a96f:c.instructions+=3;goto B52a96f;
case 0x52a970:c.instructions+=2;goto B52a970;
case 0x52a971:c.instructions+=1;goto B52a971;
case 0x52a976:goto L52a976;
case 0x52a97a:c.instructions+=4;goto B52a97a;
case 0x52a97d:c.instructions+=3;goto B52a97d;
case 0x52a980:c.instructions+=2;goto B52a980;
case 0x52a982:c.instructions+=1;goto B52a982;
case 0x52a984:goto L52a984;
case 0x52a986:c.instructions+=2;goto B52a986;
case 0x52a988:c.instructions+=1;goto B52a988;
case 0x52a98a:goto L52a98a;
case 0x52a98c:goto L52a98c;
case 0x52a98f:c.instructions+=5;goto B52a98f;
case 0x52a993:c.instructions+=4;goto B52a993;
case 0x52a997:c.instructions+=3;goto B52a997;
case 0x52a99a:c.instructions+=2;goto B52a99a;
case 0x52a99c:c.instructions+=1;goto B52a99c;
case 0x52a99f:goto L52a99f;
case 0x52a9a1:goto L52a9a1;
case 0x52a9a3:c.instructions+=1;goto B52a9a3;
case 0x52a9a6:goto L52a9a6;
case 0x52a9a8:goto L52a9a8;
case 0x52a9ab:c.instructions+=2;goto B52a9ab;
case 0x52a9ac:c.instructions+=1;goto B52a9ac;
case 0x52a9b1:goto L52a9b1;
case 0x52a9b5:c.instructions+=1;goto B52a9b5;
case 0x52a9b8:goto L52a9b8;
case 0x52a9bc:c.instructions+=10;goto B52a9bc;
case 0x52a9be:c.instructions+=9;goto B52a9be;
case 0x52a9c0:c.instructions+=8;goto B52a9c0;
case 0x52a9c3:c.instructions+=7;goto B52a9c3;
case 0x52a9c6:c.instructions+=6;goto B52a9c6;
case 0x52a9ca:c.instructions+=5;goto B52a9ca;
case 0x52a9cd:c.instructions+=4;goto B52a9cd;
case 0x52a9cf:c.instructions+=3;goto B52a9cf;
case 0x52a9d2:c.instructions+=2;goto B52a9d2;
case 0x52a9d6:c.instructions+=1;goto B52a9d6;
case 0x52a9d8:goto L52a9d8;
case 0x52a9da:goto L52a9da;
case 0x52a9dc:c.instructions+=1;goto B52a9dc;
case 0x52a9df:goto L52a9df;
case 0x52a9e1:goto L52a9e1;
case 0x52a9e4:c.instructions+=4;goto B52a9e4;
case 0x52a9e7:c.instructions+=3;goto B52a9e7;
case 0x52a9e9:c.instructions+=2;goto B52a9e9;
case 0x52a9f1:c.instructions+=1;goto B52a9f1;
case 0x52a9f7:goto L52a9f7;
case 0x52a9fa:c.instructions+=3;goto B52a9fa;
case 0x52a9fd:c.instructions+=2;goto B52a9fd;
case 0x52a9fe:c.instructions+=1;goto B52a9fe;
case 0x52aa03:goto L52aa03;
case 0x52aa06:c.instructions+=4;goto B52aa06;
case 0x52aa0a:c.instructions+=3;goto B52aa0a;
case 0x52aa0c:c.instructions+=2;goto B52aa0c;
case 0x52aa14:c.instructions+=1;goto B52aa14;
case 0x52aa16:goto L52aa16;
case 0x52aa1b:c.instructions+=4;goto B52aa1b;
case 0x52aa1c:c.instructions+=3;goto B52aa1c;
case 0x52aa1e:c.instructions+=2;goto B52aa1e;
case 0x52aa1f:c.instructions+=1;goto B52aa1f;
case 0x52aa24:goto L52aa24;
case 0x52aa28:c.instructions+=1;goto B52aa28;
case 0x52aa2a:goto L52aa2a;
case 0x52aa2c:goto L52aa2c;
case 0x52aa32:c.instructions+=4;goto B52aa32;
case 0x52aa34:c.instructions+=3;goto B52aa34;
case 0x52aa3c:c.instructions+=2;goto B52aa3c;
case 0x52aa40:c.instructions+=1;goto B52aa40;
case 0x52aa46:goto L52aa46;
case 0x52aa49:c.instructions+=3;goto B52aa49;
case 0x52aa4b:c.instructions+=2;goto B52aa4b;
case 0x52aa53:c.instructions+=1;goto B52aa53;
case 0x52aa59:goto L52aa59;
case 0x52aa5d:c.instructions+=8;goto B52aa5d;
case 0x52aa60:c.instructions+=7;goto B52aa60;
case 0x52aa63:c.instructions+=6;goto B52aa63;
case 0x52aa66:c.instructions+=5;goto B52aa66;
case 0x52aa68:c.instructions+=4;goto B52aa68;
case 0x52aa6c:c.instructions+=3;goto B52aa6c;
case 0x52aa70:c.instructions+=2;goto B52aa70;
case 0x52aa74:c.instructions+=1;goto B52aa74;
case 0x52aa76:goto L52aa76;
case 0x52aa7a:c.instructions+=1;goto B52aa7a;
case 0x52aa80:goto L52aa80;
case 0x52aa83:c.instructions+=9;goto B52aa83;
case 0x52aa88:c.instructions+=8;goto B52aa88;
case 0x52aa8e:c.instructions+=7;goto B52aa8e;
case 0x52aa91:c.instructions+=6;goto B52aa91;
case 0x52aa94:c.instructions+=5;goto B52aa94;
case 0x52aa96:c.instructions+=4;goto B52aa96;
case 0x52aa98:c.instructions+=3;goto B52aa98;
case 0x52aa9b:c.instructions+=2;goto B52aa9b;
case 0x52aa9d:c.instructions+=1;goto B52aa9d;
case 0x52aaa1:goto L52aaa1;
case 0x52aaa3:goto L52aaa3;
case 0x52aaa5:c.instructions+=1;goto B52aaa5;
case 0x52aaa8:goto L52aaa8;
case 0x52aaaa:goto L52aaaa;
case 0x52aaae:c.instructions+=3;goto B52aaae;
case 0x52aaaf:c.instructions+=2;goto B52aaaf;
case 0x52aab0:c.instructions+=1;goto B52aab0;
case 0x52aab5:goto L52aab5;
case 0x52aab9:c.instructions+=13;goto B52aab9;
case 0x52aabd:c.instructions+=12;goto B52aabd;
case 0x52aac1:c.instructions+=11;goto B52aac1;
case 0x52aac5:c.instructions+=10;goto B52aac5;
case 0x52aac7:c.instructions+=9;goto B52aac7;
case 0x52aac9:c.instructions+=8;goto B52aac9;
case 0x52aacc:c.instructions+=7;goto B52aacc;
case 0x52aacf:c.instructions+=6;goto B52aacf;
case 0x52aad0:c.instructions+=5;goto B52aad0;
case 0x52aad2:c.instructions+=4;goto B52aad2;
case 0x52aad6:c.instructions+=3;goto B52aad6;
case 0x52aada:c.instructions+=2;goto B52aada;
case 0x52aade:c.instructions+=1;goto B52aade;
case 0x52aae0:goto L52aae0;
case 0x52aae4:goto L52aae4;
case 0x52aaea:c.instructions+=2;goto B52aaea;
case 0x52aaeb:c.instructions+=1;goto B52aaeb;
case 0x52aaf0:goto L52aaf0;
case 0x52aaf3:c.instructions+=1;goto B52aaf3;
case 0x52aaf5:goto L52aaf5;
case 0x52aaf6:c.instructions+=2;goto B52aaf6;
case 0x52aaf7:c.instructions+=1;goto B52aaf7;
case 0x52aafc:goto L52aafc;
case 0x52aaff:goto L52aaff;
case 0x52ab03:c.instructions+=12;goto B52ab03;
case 0x52ab07:c.instructions+=11;goto B52ab07;
case 0x52ab08:c.instructions+=10;goto B52ab08;
case 0x52ab0b:c.instructions+=9;goto B52ab0b;
case 0x52ab11:c.instructions+=8;goto B52ab11;
case 0x52ab15:c.instructions+=7;goto B52ab15;
case 0x52ab16:c.instructions+=6;goto B52ab16;
case 0x52ab19:c.instructions+=5;goto B52ab19;
case 0x52ab1a:c.instructions+=4;goto B52ab1a;
case 0x52ab1b:c.instructions+=3;goto B52ab1b;
case 0x52ab22:c.instructions+=2;goto B52ab22;
case 0x52ab25:c.instructions+=1;goto B52ab25;
case 0x52ab30:goto L52ab30;
case 0x52ab36:c.instructions+=13;goto B52ab36;
case 0x52ab38:c.instructions+=12;goto B52ab38;
case 0x52ab3d:c.instructions+=11;goto B52ab3d;
case 0x52ab3e:c.instructions+=10;goto B52ab3e;
case 0x52ab45:c.instructions+=9;goto B52ab45;
case 0x52ab48:c.instructions+=8;goto B52ab48;
case 0x52ab49:c.instructions+=7;goto B52ab49;
case 0x52ab4a:c.instructions+=6;goto B52ab4a;
case 0x52ab4b:c.instructions+=5;goto B52ab4b;
case 0x52ab4f:c.instructions+=4;goto B52ab4f;
case 0x52ab51:c.instructions+=3;goto B52ab51;
case 0x52ab53:c.instructions+=2;goto B52ab53;
case 0x52ab55:c.instructions+=1;goto B52ab55;
case 0x52ab57:goto L52ab57;
case 0x52ab5a:c.instructions+=1;goto B52ab5a;
case 0x52ab5c:goto L52ab5c;
case 0x52ab5f:c.instructions+=2;goto B52ab5f;
case 0x52ab60:c.instructions+=1;goto B52ab60;
case 0x52ab65:goto L52ab65;
case 0x52ab68:c.instructions+=2;goto B52ab68;
case 0x52ab6b:c.instructions+=1;goto B52ab6b;
case 0x52ab6e:goto L52ab6e;
case 0x52ab70:c.instructions+=1;goto B52ab70;
case 0x52ab75:goto L52ab75;
case 0x52ab76:c.instructions+=6;goto B52ab76;
case 0x52ab77:c.instructions+=5;goto B52ab77;
case 0x52ab78:c.instructions+=4;goto B52ab78;
case 0x52ab7c:c.instructions+=3;goto B52ab7c;
case 0x52ab83:c.instructions+=2;goto B52ab83;
case 0x52ab86:c.instructions+=1;goto B52ab86;
case 0x52ab89:goto L52ab89;
case 0x52ab8c:c.instructions+=4;goto B52ab8c;
case 0x52ab8f:c.instructions+=3;goto B52ab8f;
case 0x52ab90:c.instructions+=2;goto B52ab90;
case 0x52ab91:c.instructions+=1;goto B52ab91;
case 0x52ab96:goto L52ab96;
case 0x52ab9a:c.instructions+=4;goto B52ab9a;
case 0x52ab9d:c.instructions+=3;goto B52ab9d;
case 0x52aba0:c.instructions+=2;goto B52aba0;
case 0x52aba2:c.instructions+=1;goto B52aba2;
case 0x52aba4:goto L52aba4;
case 0x52aba6:c.instructions+=2;goto B52aba6;
case 0x52aba8:c.instructions+=1;goto B52aba8;
case 0x52abaa:goto L52abaa;
case 0x52abac:goto L52abac;
case 0x52abaf:c.instructions+=5;goto B52abaf;
case 0x52abb3:c.instructions+=4;goto B52abb3;
case 0x52abb7:c.instructions+=3;goto B52abb7;
case 0x52abba:c.instructions+=2;goto B52abba;
case 0x52abbc:c.instructions+=1;goto B52abbc;
case 0x52abbf:goto L52abbf;
case 0x52abc1:goto L52abc1;
case 0x52abc3:c.instructions+=1;goto B52abc3;
case 0x52abc6:goto L52abc6;
case 0x52abc8:goto L52abc8;
case 0x52abcb:c.instructions+=2;goto B52abcb;
case 0x52abcc:c.instructions+=1;goto B52abcc;
case 0x52abd1:goto L52abd1;
case 0x52abd5:c.instructions+=1;goto B52abd5;
case 0x52abd8:goto L52abd8;
case 0x52abdc:c.instructions+=10;goto B52abdc;
case 0x52abde:c.instructions+=9;goto B52abde;
case 0x52abe0:c.instructions+=8;goto B52abe0;
case 0x52abe3:c.instructions+=7;goto B52abe3;
case 0x52abe6:c.instructions+=6;goto B52abe6;
case 0x52abea:c.instructions+=5;goto B52abea;
case 0x52abed:c.instructions+=4;goto B52abed;
case 0x52abef:c.instructions+=3;goto B52abef;
case 0x52abf2:c.instructions+=2;goto B52abf2;
case 0x52abf6:c.instructions+=1;goto B52abf6;
case 0x52abf8:goto L52abf8;
case 0x52abfa:goto L52abfa;
case 0x52abfc:c.instructions+=1;goto B52abfc;
case 0x52abff:goto L52abff;
case 0x52ac01:goto L52ac01;
case 0x52ac04:c.instructions+=4;goto B52ac04;
case 0x52ac07:c.instructions+=3;goto B52ac07;
case 0x52ac09:c.instructions+=2;goto B52ac09;
case 0x52ac11:c.instructions+=1;goto B52ac11;
case 0x52ac17:goto L52ac17;
case 0x52ac1a:c.instructions+=3;goto B52ac1a;
case 0x52ac1d:c.instructions+=2;goto B52ac1d;
case 0x52ac1e:c.instructions+=1;goto B52ac1e;
case 0x52ac23:goto L52ac23;
case 0x52ac26:c.instructions+=5;goto B52ac26;
case 0x52ac2a:c.instructions+=4;goto B52ac2a;
case 0x52ac2c:c.instructions+=3;goto B52ac2c;
case 0x52ac2e:c.instructions+=2;goto B52ac2e;
case 0x52ac32:c.instructions+=1;goto B52ac32;
case 0x52ac34:goto L52ac34;
case 0x52ac39:c.instructions+=4;goto B52ac39;
case 0x52ac3a:c.instructions+=3;goto B52ac3a;
case 0x52ac3c:c.instructions+=2;goto B52ac3c;
case 0x52ac3d:c.instructions+=1;goto B52ac3d;
case 0x52ac42:goto L52ac42;
case 0x52ac46:goto L52ac46;
case 0x52ac4c:c.instructions+=4;goto B52ac4c;
case 0x52ac4e:c.instructions+=3;goto B52ac4e;
case 0x52ac56:c.instructions+=2;goto B52ac56;
case 0x52ac5a:c.instructions+=1;goto B52ac5a;
case 0x52ac5c:goto L52ac5c;
case 0x52ac5f:c.instructions+=5;goto B52ac5f;
case 0x52ac62:c.instructions+=4;goto B52ac62;
case 0x52ac64:c.instructions+=3;goto B52ac64;
case 0x52ac66:c.instructions+=2;goto B52ac66;
case 0x52ac69:c.instructions+=1;goto B52ac69;
case 0x52ac6b:goto L52ac6b;
case 0x52ac6d:goto L52ac6d;
case 0x52ac6f:c.instructions+=1;goto B52ac6f;
case 0x52ac72:goto L52ac72;
case 0x52ac74:goto L52ac74;
case 0x52ac77:c.instructions+=9;goto B52ac77;
case 0x52ac79:c.instructions+=8;goto B52ac79;
case 0x52ac7c:c.instructions+=7;goto B52ac7c;
case 0x52ac81:c.instructions+=6;goto B52ac81;
case 0x52ac84:c.instructions+=5;goto B52ac84;
case 0x52ac87:c.instructions+=4;goto B52ac87;
case 0x52ac88:c.instructions+=3;goto B52ac88;
case 0x52ac8a:c.instructions+=2;goto B52ac8a;
case 0x52ac8b:c.instructions+=1;goto B52ac8b;
case 0x52ac90:goto L52ac90;
case 0x52ac96:c.instructions+=2;goto B52ac96;
case 0x52ac97:c.instructions+=1;goto B52ac97;
case 0x52ac9c:goto L52ac9c;
case 0x52aca0:c.instructions+=2;goto B52aca0;
case 0x52aca3:c.instructions+=1;goto B52aca3;
case 0x52aca5:goto L52aca5;
case 0x52aca6:c.instructions+=2;goto B52aca6;
case 0x52aca7:c.instructions+=1;goto B52aca7;
case 0x52acac:goto L52acac;
case 0x52acaf:goto L52acaf;
case 0x52acb3:c.instructions+=12;goto B52acb3;
case 0x52acb7:c.instructions+=11;goto B52acb7;
case 0x52acbb:c.instructions+=10;goto B52acbb;
case 0x52acbc:c.instructions+=9;goto B52acbc;
case 0x52acbf:c.instructions+=8;goto B52acbf;
case 0x52acc0:c.instructions+=7;goto B52acc0;
case 0x52acc3:c.instructions+=6;goto B52acc3;
case 0x52acc9:c.instructions+=5;goto B52acc9;
case 0x52acca:c.instructions+=4;goto B52acca;
case 0x52accb:c.instructions+=3;goto B52accb;
case 0x52acd2:c.instructions+=2;goto B52acd2;
case 0x52acd5:c.instructions+=1;goto B52acd5;
case 0x52ace0:goto L52ace0;
case 0x52ace1:c.instructions+=7;goto B52ace1;
case 0x52ace2:c.instructions+=6;goto B52ace2;
case 0x52ace3:c.instructions+=5;goto B52ace3;
case 0x52ace7:c.instructions+=4;goto B52ace7;
case 0x52ace9:c.instructions+=3;goto B52ace9;
case 0x52aceb:c.instructions+=2;goto B52aceb;
case 0x52aced:c.instructions+=1;goto B52aced;
case 0x52acef:goto L52acef;
case 0x52acf0:c.instructions+=4;goto B52acf0;
case 0x52acf1:c.instructions+=3;goto B52acf1;
case 0x52acf3:c.instructions+=2;goto B52acf3;
case 0x52acf4:c.instructions+=1;goto B52acf4;
case 0x52acf7:goto L52acf7;
case 0x52acfa:c.instructions+=2;goto B52acfa;
case 0x52acfc:c.instructions+=1;goto B52acfc;
case 0x52acfe:goto L52acfe;
case 0x52ad00:goto L52ad00;
case 0x52ad03:c.instructions+=1;goto B52ad03;
case 0x52ad05:goto L52ad05;
case 0x52ad08:c.instructions+=2;goto B52ad08;
case 0x52ad0a:c.instructions+=1;goto B52ad0a;
case 0x52ad0c:goto L52ad0c;
case 0x52ad0e:c.instructions+=1;goto B52ad0e;
case 0x52ad13:goto L52ad13;
case 0x52ad16:c.instructions+=2;goto B52ad16;
case 0x52ad18:c.instructions+=1;goto B52ad18;
case 0x52ad1a:goto L52ad1a;
case 0x52ad1f:c.instructions+=9;goto B52ad1f;
case 0x52ad22:c.instructions+=8;goto B52ad22;
case 0x52ad25:c.instructions+=7;goto B52ad25;
case 0x52ad2b:c.instructions+=6;goto B52ad2b;
case 0x52ad32:c.instructions+=5;goto B52ad32;
case 0x52ad35:c.instructions+=4;goto B52ad35;
case 0x52ad38:c.instructions+=3;goto B52ad38;
case 0x52ad3b:c.instructions+=2;goto B52ad3b;
case 0x52ad3e:c.instructions+=1;goto B52ad3e;
case 0x52ad40:goto L52ad40;
case 0x52ad42:goto L52ad42;
case 0x52ad44:c.instructions+=2;goto B52ad44;
case 0x52ad46:c.instructions+=1;goto B52ad46;
case 0x52ad48:goto L52ad48;
case 0x52ad4b:c.instructions+=3;goto B52ad4b;
case 0x52ad4d:c.instructions+=2;goto B52ad4d;
case 0x52ad50:c.instructions+=1;goto B52ad50;
case 0x52ad52:goto L52ad52;
case 0x52ad55:goto L52ad55;
case 0x52ad58:c.instructions+=3;goto B52ad58;
case 0x52ad5b:c.instructions+=2;goto B52ad5b;
case 0x52ad5e:c.instructions+=1;goto B52ad5e;
case 0x52ad60:goto L52ad60;
case 0x52ad63:goto L52ad63;
case 0x52ad66:goto L52ad66;
case 0x52ad6b:goto L52ad6b;
case 0x52ad6c:c.instructions+=3;goto B52ad6c;
case 0x52ad6d:c.instructions+=2;goto B52ad6d;
case 0x52ad6e:c.instructions+=1;goto B52ad6e;
case 0x52ad80:goto L52ad80;
case 0x52ad81:c.instructions+=5;goto B52ad81;
case 0x52ad83:c.instructions+=4;goto B52ad83;
case 0x52ad85:c.instructions+=3;goto B52ad85;
case 0x52ad8a:c.instructions+=2;goto B52ad8a;
case 0x52ad8b:c.instructions+=1;goto B52ad8b;
case 0x52ad8d:goto L52ad8d;
case 0x52ad92:c.instructions+=1;goto B52ad92;
case 0x52ad94:goto L52ad94;
case 0x52ad99:c.instructions+=1;goto B52ad99;
case 0x52ad9b:goto L52ad9b;
case 0x52ad9e:c.instructions+=2;goto B52ad9e;
case 0x52ad9f:c.instructions+=1;goto B52ad9f;
case 0x52ada4:goto L52ada4;
case 0x52ada7:goto L52ada7;
case 0x52adab:c.instructions+=5;goto B52adab;
case 0x52adb2:c.instructions+=4;goto B52adb2;
case 0x52adb4:c.instructions+=3;goto B52adb4;
case 0x52adb9:c.instructions+=2;goto B52adb9;
case 0x52adbb:c.instructions+=1;goto B52adbb;
case 0x52adbd:goto L52adbd;
case 0x52adc2:c.instructions+=1;goto B52adc2;
case 0x52adc4:goto L52adc4;
case 0x52adc9:c.instructions+=1;goto B52adc9;
case 0x52adcb:goto L52adcb;
case 0x52adce:c.instructions+=3;goto B52adce;
case 0x52adcf:c.instructions+=2;goto B52adcf;
case 0x52add1:c.instructions+=1;goto B52add1;
case 0x52add6:goto L52add6;
case 0x52add9:c.instructions+=5;goto B52add9;
case 0x52addc:c.instructions+=4;goto B52addc;
case 0x52addd:c.instructions+=3;goto B52addd;
case 0x52addf:c.instructions+=2;goto B52addf;
case 0x52ade0:c.instructions+=1;goto B52ade0;
case 0x52ade3:goto L52ade3;
case 0x52ade6:c.instructions+=7;goto B52ade6;
case 0x52ade9:c.instructions+=6;goto B52ade9;
case 0x52adec:c.instructions+=5;goto B52adec;
case 0x52adef:c.instructions+=4;goto B52adef;
case 0x52adf0:c.instructions+=3;goto B52adf0;
case 0x52adf2:c.instructions+=2;goto B52adf2;
case 0x52adf3:c.instructions+=1;goto B52adf3;
case 0x52ae00:goto L52ae00;
case 0x52ae06:c.instructions+=13;goto B52ae06;
case 0x52ae08:c.instructions+=12;goto B52ae08;
case 0x52ae0d:c.instructions+=11;goto B52ae0d;
case 0x52ae0e:c.instructions+=10;goto B52ae0e;
case 0x52ae15:c.instructions+=9;goto B52ae15;
case 0x52ae16:c.instructions+=8;goto B52ae16;
case 0x52ae17:c.instructions+=7;goto B52ae17;
case 0x52ae18:c.instructions+=6;goto B52ae18;
case 0x52ae1a:c.instructions+=5;goto B52ae1a;
case 0x52ae1d:c.instructions+=4;goto B52ae1d;
case 0x52ae1e:c.instructions+=3;goto B52ae1e;
case 0x52ae22:c.instructions+=2;goto B52ae22;
case 0x52ae24:c.instructions+=1;goto B52ae24;
case 0x52ae2a:goto L52ae2a;
case 0x52ae2c:c.instructions+=2;goto B52ae2c;
case 0x52ae2e:c.instructions+=1;goto B52ae2e;
case 0x52ae30:goto L52ae30;
case 0x52ae33:c.instructions+=2;goto B52ae33;
case 0x52ae35:c.instructions+=1;goto B52ae35;
case 0x52ae37:goto L52ae37;
case 0x52ae3a:c.instructions+=6;goto B52ae3a;
case 0x52ae3d:c.instructions+=5;goto B52ae3d;
case 0x52ae42:c.instructions+=4;goto B52ae42;
case 0x52ae43:c.instructions+=3;goto B52ae43;
case 0x52ae45:c.instructions+=2;goto B52ae45;
case 0x52ae46:c.instructions+=1;goto B52ae46;
case 0x52ae4b:goto L52ae4b;
case 0x52ae4c:c.instructions+=1;goto B52ae4c;
case 0x52ae51:goto L52ae51;
case 0x52ae54:goto L52ae54;
case 0x52ae57:c.instructions+=2;goto B52ae57;
case 0x52ae5a:c.instructions+=1;goto B52ae5a;
case 0x52ae5f:goto L52ae5f;
case 0x52ae62:c.instructions+=3;goto B52ae62;
case 0x52ae69:c.instructions+=2;goto B52ae69;
case 0x52ae6a:c.instructions+=1;goto B52ae6a;
case 0x52ae6f:goto L52ae6f;
case 0x52ae72:c.instructions+=4;goto B52ae72;
case 0x52ae76:c.instructions+=3;goto B52ae76;
case 0x52ae78:c.instructions+=2;goto B52ae78;
case 0x52ae7c:c.instructions+=1;goto B52ae7c;
case 0x52ae7e:goto L52ae7e;
case 0x52ae83:c.instructions+=7;goto B52ae83;
case 0x52ae88:c.instructions+=6;goto B52ae88;
case 0x52ae89:c.instructions+=5;goto B52ae89;
case 0x52ae8c:c.instructions+=4;goto B52ae8c;
case 0x52ae8e:c.instructions+=3;goto B52ae8e;
case 0x52ae8f:c.instructions+=2;goto B52ae8f;
case 0x52ae91:c.instructions+=1;goto B52ae91;
case 0x52ae96:goto L52ae96;
case 0x52ae9a:c.instructions+=1;goto B52ae9a;
case 0x52ae9c:goto L52ae9c;
case 0x52aea0:goto L52aea0;
case 0x52aea3:c.instructions+=3;goto B52aea3;
case 0x52aea5:c.instructions+=2;goto B52aea5;
case 0x52aead:c.instructions+=1;goto B52aead;
case 0x52aeaf:goto L52aeaf;
case 0x52aeb1:goto L52aeb1;
case 0x52aeb3:c.instructions+=1;goto B52aeb3;
case 0x52aeb5:goto L52aeb5;
case 0x52aeb7:c.instructions+=2;goto B52aeb7;
case 0x52aeb9:c.instructions+=1;goto B52aeb9;
case 0x52aec0:goto L52aec0;
case 0x52aec3:c.instructions+=5;goto B52aec3;
case 0x52aec7:c.instructions+=4;goto B52aec7;
case 0x52aec9:c.instructions+=3;goto B52aec9;
case 0x52aeca:c.instructions+=2;goto B52aeca;
case 0x52aecd:c.instructions+=1;goto B52aecd;
case 0x52aed2:goto L52aed2;
case 0x52aed5:c.instructions+=2;goto B52aed5;
case 0x52aed6:c.instructions+=1;goto B52aed6;
case 0x52aed8:goto L52aed8;
case 0x52aeda:goto L52aeda;
case 0x52aedd:c.instructions+=2;goto B52aedd;
case 0x52aedf:c.instructions+=1;goto B52aedf;
case 0x52aee1:goto L52aee1;
case 0x52aee4:c.instructions+=6;goto B52aee4;
case 0x52aee7:c.instructions+=5;goto B52aee7;
case 0x52aeec:c.instructions+=4;goto B52aeec;
case 0x52aeed:c.instructions+=3;goto B52aeed;
case 0x52aeef:c.instructions+=2;goto B52aeef;
case 0x52aef0:c.instructions+=1;goto B52aef0;
case 0x52aef5:goto L52aef5;
case 0x52aef6:c.instructions+=1;goto B52aef6;
case 0x52aefb:goto L52aefb;
case 0x52aefe:goto L52aefe;
case 0x52af02:c.instructions+=2;goto B52af02;
case 0x52af05:c.instructions+=1;goto B52af05;
case 0x52af08:goto L52af08;
case 0x52af0c:c.instructions+=7;goto B52af0c;
case 0x52af0d:c.instructions+=6;goto B52af0d;
case 0x52af0e:c.instructions+=5;goto B52af0e;
case 0x52af0f:c.instructions+=4;goto B52af0f;
case 0x52af16:c.instructions+=3;goto B52af16;
case 0x52af17:c.instructions+=2;goto B52af17;
case 0x52af1a:c.instructions+=1;goto B52af1a;
case 0x52af20:goto L52af20;
case 0x52af22:c.instructions+=29;goto B52af22;
case 0x52af28:c.instructions+=28;goto B52af28;
case 0x52af2d:c.instructions+=27;goto B52af2d;
case 0x52af30:c.instructions+=26;goto B52af30;
case 0x52af33:c.instructions+=25;goto B52af33;
case 0x52af35:c.instructions+=24;goto B52af35;
case 0x52af38:c.instructions+=23;goto B52af38;
case 0x52af3b:c.instructions+=22;goto B52af3b;
case 0x52af3e:c.instructions+=21;goto B52af3e;
case 0x52af42:c.instructions+=20;goto B52af42;
case 0x52af45:c.instructions+=19;goto B52af45;
case 0x52af48:c.instructions+=18;goto B52af48;
case 0x52af4b:c.instructions+=17;goto B52af4b;
case 0x52af4e:c.instructions+=16;goto B52af4e;
case 0x52af51:c.instructions+=15;goto B52af51;
case 0x52af54:c.instructions+=14;goto B52af54;
case 0x52af57:c.instructions+=13;goto B52af57;
case 0x52af5c:c.instructions+=12;goto B52af5c;
case 0x52af5f:c.instructions+=11;goto B52af5f;
case 0x52af62:c.instructions+=10;goto B52af62;
case 0x52af65:c.instructions+=9;goto B52af65;
case 0x52af68:c.instructions+=8;goto B52af68;
case 0x52af6b:c.instructions+=7;goto B52af6b;
case 0x52af6e:c.instructions+=6;goto B52af6e;
case 0x52af74:c.instructions+=5;goto B52af74;
case 0x52af76:c.instructions+=4;goto B52af76;
case 0x52af77:c.instructions+=3;goto B52af77;
case 0x52af7d:c.instructions+=2;goto B52af7d;
case 0x52af80:c.instructions+=1;goto B52af80;
case 0x52af90:goto L52af90;
case 0x52af92:c.instructions+=13;goto B52af92;
case 0x52af97:c.instructions+=12;goto B52af97;
case 0x52af9d:c.instructions+=11;goto B52af9d;
case 0x52af9e:c.instructions+=10;goto B52af9e;
case 0x52afa5:c.instructions+=9;goto B52afa5;
case 0x52afa6:c.instructions+=8;goto B52afa6;
case 0x52afa7:c.instructions+=7;goto B52afa7;
case 0x52afa9:c.instructions+=6;goto B52afa9;
case 0x52afad:c.instructions+=5;goto B52afad;
case 0x52afb3:c.instructions+=4;goto B52afb3;
case 0x52afb9:c.instructions+=3;goto B52afb9;
case 0x52afbb:c.instructions+=2;goto B52afbb;
case 0x52afc3:c.instructions+=1;goto B52afc3;
case 0x52afc5:goto L52afc5;
case 0x52afc7:c.instructions+=2;goto B52afc7;
case 0x52afc8:c.instructions+=1;goto B52afc8;
case 0x52afca:goto L52afca;
case 0x52afcd:c.instructions+=3;goto B52afcd;
case 0x52afce:c.instructions+=2;goto B52afce;
case 0x52afd3:c.instructions+=1;goto B52afd3;
case 0x52afd8:goto L52afd8;
case 0x52afdb:c.instructions+=2;goto B52afdb;
case 0x52afdd:c.instructions+=1;goto B52afdd;
case 0x52afdf:goto L52afdf;
case 0x52afe0:c.instructions+=1;goto B52afe0;
case 0x52afe5:goto L52afe5;
case 0x52afe8:goto L52afe8;
case 0x52afeb:c.instructions+=3;goto B52afeb;
case 0x52aff0:c.instructions+=2;goto B52aff0;
case 0x52aff6:c.instructions+=1;goto B52aff6;
case 0x52affb:goto L52affb;
case 0x52affe:c.instructions+=1;goto B52affe;
default:missing_instruction(c.pc);}
B52a000:L52a000:{c.instructions+=3;NFSU2_TR(0x52a000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a001:{NFSU2_TR(0x52a001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52a002:{NFSU2_TR(0x52a002);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a010:L52a010:{c.instructions+=4;NFSU2_TR(0x52a010);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a011:{NFSU2_TR(0x52a011);
__builtin_memmove((R+0),gp(0x838464),1);
}
B52a016:{NFSU2_TR(0x52a016);
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
B52a018:{NFSU2_TR(0x52a018);
if(r1(R+518)){{goto L52a01e;}}
}
B52a01a:L52a01a:{c.instructions+=3;NFSU2_TR(0x52a01a);
w1(R+0,u8(0x1ull));
}
B52a01c:{NFSU2_TR(0x52a01c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52a01d:{NFSU2_TR(0x52a01d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a01e:L52a01e:{c.instructions+=9;NFSU2_TR(0x52a01e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a01f:{NFSU2_TR(0x52a01f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52a023:{NFSU2_TR(0x52a023);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52a026:{NFSU2_TR(0x52a026);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a027:{NFSU2_TR(0x52a027);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52a02b:{NFSU2_TR(0x52a02b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a02c:{NFSU2_TR(0x52a02c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52a030:{NFSU2_TR(0x52a030);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52a035:{NFSU2_TR(0x52a035);
if(r1(R+518)){{goto L52a04b;}}
}
B52a037:L52a037:{c.instructions+=6;NFSU2_TR(0x52a037);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a03b:{NFSU2_TR(0x52a03b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a03c:{NFSU2_TR(0x52a03c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a03d:{NFSU2_TR(0x52a03d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a03e:{NFSU2_TR(0x52a03e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a03f:{NFSU2_TR(0x52a03f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a044ull));
TAIL_STATIC(0x529d60u,529);
}
B52a044:L52a044:{c.instructions+=2;NFSU2_TR(0x52a044);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B52a047:{NFSU2_TR(0x52a047);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a04b:L52a04b:{c.instructions+=2;NFSU2_TR(0x52a04b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x6ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52a04e:{NFSU2_TR(0x52a04e);
if(r1(R+518)){{goto L52a065;}}
}
B52a050:L52a050:{c.instructions+=4;NFSU2_TR(0x52a050);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a051:{NFSU2_TR(0x52a051);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a052:{NFSU2_TR(0x52a052);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a053:{NFSU2_TR(0x52a053);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a058ull));
TAIL_STATIC(0x515500u,515);
}
B52a058:L52a058:{c.instructions+=4;NFSU2_TR(0x52a058);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B52a05c:{NFSU2_TR(0x52a05c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52a05f:{NFSU2_TR(0x52a05f);
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+0))));
}
B52a061:{NFSU2_TR(0x52a061);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a065:L52a065:{c.instructions+=2;NFSU2_TR(0x52a065);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(u32(0x1f8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52a06b:{NFSU2_TR(0x52a06b);
if(r1(R+518)){{goto L52a084;}}
}
B52a06d:L52a06d:{c.instructions+=5;NFSU2_TR(0x52a06d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a06f:{NFSU2_TR(0x52a06f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a070:{NFSU2_TR(0x52a070);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a071:{NFSU2_TR(0x52a071);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a072:{NFSU2_TR(0x52a072);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a077ull));
TAIL_STATIC(0x529d60u,529);
}
B52a077:L52a077:{c.instructions+=4;NFSU2_TR(0x52a077);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B52a07b:{NFSU2_TR(0x52a07b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B52a07e:{NFSU2_TR(0x52a07e);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52a080:{NFSU2_TR(0x52a080);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a084:L52a084:{c.instructions+=6;NFSU2_TR(0x52a084);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52a088:{NFSU2_TR(0x52a088);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52a089:{NFSU2_TR(0x52a089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a08a:{NFSU2_TR(0x52a08a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52a08b:{NFSU2_TR(0x52a08b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52a08c:{NFSU2_TR(0x52a08c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a090:L52a090:{c.instructions+=4;NFSU2_TR(0x52a090);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a091:{NFSU2_TR(0x52a091);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52a095:{NFSU2_TR(0x52a095);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52a098:{NFSU2_TR(0x52a098);
if(r1(R+518)){{goto L52a0a7;}}
}
B52a09a:L52a09a:{c.instructions+=3;NFSU2_TR(0x52a09a);
__builtin_memmove((R+0),gp(0x838464),1);
}
B52a09f:{NFSU2_TR(0x52a09f);
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
B52a0a1:{NFSU2_TR(0x52a0a1);
if(r1(R+518)){{goto L52a0a7;}}
}
B52a0a3:L52a0a3:{c.instructions+=3;NFSU2_TR(0x52a0a3);
w1(R+0,u8(0x1ull));
}
B52a0a5:{NFSU2_TR(0x52a0a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52a0a6:{NFSU2_TR(0x52a0a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a0a7:L52a0a7:{c.instructions+=5;NFSU2_TR(0x52a0a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52a0aa:{NFSU2_TR(0x52a0aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a0ab:{NFSU2_TR(0x52a0ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52a0af:{NFSU2_TR(0x52a0af);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52a0b4:{NFSU2_TR(0x52a0b4);
if(r1(R+518)){{goto L52a0c9;}}
}
B52a0b6:L52a0b6:{c.instructions+=5;NFSU2_TR(0x52a0b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a0ba:{NFSU2_TR(0x52a0ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a0bb:{NFSU2_TR(0x52a0bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a0bc:{NFSU2_TR(0x52a0bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a0bd:{NFSU2_TR(0x52a0bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a0c2ull));
TAIL_STATIC(0x529e30u,529);
}
B52a0c2:L52a0c2:{c.instructions+=2;NFSU2_TR(0x52a0c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52a0c5:{NFSU2_TR(0x52a0c5);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a0c9:L52a0c9:{c.instructions+=2;NFSU2_TR(0x52a0c9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x6ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52a0cc:{NFSU2_TR(0x52a0cc);
if(r1(R+518)){{goto L52a0e2;}}
}
B52a0ce:L52a0ce:{c.instructions+=3;NFSU2_TR(0x52a0ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a0cf:{NFSU2_TR(0x52a0cf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a0d0:{NFSU2_TR(0x52a0d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a0d5ull));
TAIL_STATIC(0x5155a0u,515);
}
B52a0d5:L52a0d5:{c.instructions+=4;NFSU2_TR(0x52a0d5);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B52a0d9:{NFSU2_TR(0x52a0d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52a0dc:{NFSU2_TR(0x52a0dc);
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+0))));
}
B52a0de:{NFSU2_TR(0x52a0de);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a0e2:L52a0e2:{c.instructions+=2;NFSU2_TR(0x52a0e2);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(u32(0x1f8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52a0e8:{NFSU2_TR(0x52a0e8);
if(r1(R+518)){{goto L52a0fe;}}
}
B52a0ea:L52a0ea:{c.instructions+=3;NFSU2_TR(0x52a0ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a0eb:{NFSU2_TR(0x52a0eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a0ec:{NFSU2_TR(0x52a0ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a0f1ull));
TAIL_STATIC(0x529e30u,529);
}
B52a0f1:L52a0f1:{c.instructions+=4;NFSU2_TR(0x52a0f1);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B52a0f5:{NFSU2_TR(0x52a0f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52a0f8:{NFSU2_TR(0x52a0f8);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52a0fa:{NFSU2_TR(0x52a0fa);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a0fe:L52a0fe:{c.instructions+=4;NFSU2_TR(0x52a0fe);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52a102:{NFSU2_TR(0x52a102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a103:{NFSU2_TR(0x52a103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52a104:{NFSU2_TR(0x52a104);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a110:L52a110:{c.instructions+=4;NFSU2_TR(0x52a110);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a111:{NFSU2_TR(0x52a111);
__builtin_memmove((R+0),gp(0x838464),1);
}
B52a116:{NFSU2_TR(0x52a116);
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
B52a118:{NFSU2_TR(0x52a118);
if(r1(R+518)){{goto L52a11e;}}
}
B52a11a:L52a11a:{c.instructions+=3;NFSU2_TR(0x52a11a);
w1(R+0,u8(0x1ull));
}
B52a11c:{NFSU2_TR(0x52a11c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52a11d:{NFSU2_TR(0x52a11d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a11e:L52a11e:{c.instructions+=9;NFSU2_TR(0x52a11e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a122:{NFSU2_TR(0x52a122);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a123:{NFSU2_TR(0x52a123);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a124:{NFSU2_TR(0x52a124);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52a128:{NFSU2_TR(0x52a128);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B52a12a:{NFSU2_TR(0x52a12a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52a12c:{NFSU2_TR(0x52a12c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a12d:{NFSU2_TR(0x52a12d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52a131:{NFSU2_TR(0x52a131);
if(r1(R+518)){{goto L52a15a;}}
}
B52a133:L52a133:{c.instructions+=3;NFSU2_TR(0x52a133);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a134:{NFSU2_TR(0x52a134);
w4(R+4,u32(0x865930ull));
}
B52a139:{NFSU2_TR(0x52a139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a13eull));
TAIL_STATIC(0x579d90u,579);
}
B52a13e:L52a13e:{c.instructions+=5;NFSU2_TR(0x52a13e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a13f:{NFSU2_TR(0x52a13f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a140:{NFSU2_TR(0x52a140);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a142:{NFSU2_TR(0x52a142);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a146:{NFSU2_TR(0x52a146);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a14bull));
TAIL_STATIC(0x515630u,515);
}
B52a14b:L52a14b:{c.instructions+=5;NFSU2_TR(0x52a14b);
__builtin_memmove((R+12),(R+0),1);
}
B52a14d:{NFSU2_TR(0x52a14d);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52a151:{NFSU2_TR(0x52a151);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52a154:{NFSU2_TR(0x52a154);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B52a156:{NFSU2_TR(0x52a156);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a15a:L52a15a:{c.instructions+=2;NFSU2_TR(0x52a15a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x6ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52a15c:{NFSU2_TR(0x52a15c);
if(r1(R+518)){{goto L52a16f;}}
}
B52a15e:L52a15e:{c.instructions+=4;NFSU2_TR(0x52a15e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a15f:{NFSU2_TR(0x52a15f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a160:{NFSU2_TR(0x52a160);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a161:{NFSU2_TR(0x52a161);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a166ull));
TAIL_STATIC(0x515630u,515);
}
B52a166:L52a166:{c.instructions+=3;NFSU2_TR(0x52a166);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52a169:{NFSU2_TR(0x52a169);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B52a16b:{NFSU2_TR(0x52a16b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a16f:L52a16f:{c.instructions+=2;NFSU2_TR(0x52a16f);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x1f8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52a174:{NFSU2_TR(0x52a174);
if(r1(R+518)){{goto L52a197;}}
}
B52a176:L52a176:{c.instructions+=3;NFSU2_TR(0x52a176);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a177:{NFSU2_TR(0x52a177);
w4(R+4,u32(0x865930ull));
}
B52a17c:{NFSU2_TR(0x52a17c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a181ull));
TAIL_STATIC(0x579d90u,579);
}
B52a181:L52a181:{c.instructions+=5;NFSU2_TR(0x52a181);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a182:{NFSU2_TR(0x52a182);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a183:{NFSU2_TR(0x52a183);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a185:{NFSU2_TR(0x52a185);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a189:{NFSU2_TR(0x52a189);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a18eull));
TAIL_STATIC(0x515630u,515);
}
B52a18e:L52a18e:{c.instructions+=3;NFSU2_TR(0x52a18e);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))|u32(r1(U+4))));
}
B52a192:{NFSU2_TR(0x52a192);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52a195:{NFSU2_TR(0x52a195);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+12))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+12))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52a197:L52a197:{c.instructions+=6;NFSU2_TR(0x52a197);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52a198:{NFSU2_TR(0x52a198);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a199:{NFSU2_TR(0x52a199);
__builtin_memmove((R+0),(R+12),1);
}
B52a19b:{NFSU2_TR(0x52a19b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52a19c:{NFSU2_TR(0x52a19c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52a19d:{NFSU2_TR(0x52a19d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a1a0:L52a1a0:{c.instructions+=4;NFSU2_TR(0x52a1a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a1a1:{NFSU2_TR(0x52a1a1);
__builtin_memmove((R+0),gp(0x838464),1);
}
B52a1a6:{NFSU2_TR(0x52a1a6);
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
B52a1a8:{NFSU2_TR(0x52a1a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52a215;}}
}
B52a1aa:L52a1aa:{c.instructions+=9;NFSU2_TR(0x52a1aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a1ab:{NFSU2_TR(0x52a1ab);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52a1af:{NFSU2_TR(0x52a1af);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52a1b2:{NFSU2_TR(0x52a1b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a1b3:{NFSU2_TR(0x52a1b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52a1b7:{NFSU2_TR(0x52a1b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a1b8:{NFSU2_TR(0x52a1b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52a1bc:{NFSU2_TR(0x52a1bc);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52a1c1:{NFSU2_TR(0x52a1c1);
if(r1(R+518)){{goto L52a1d3;}}
}
B52a1c3:L52a1c3:{c.instructions+=3;NFSU2_TR(0x52a1c3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a1c5:{NFSU2_TR(0x52a1c5);
__builtin_memmove((R+0),(R+24),4);
}
B52a1c7:{NFSU2_TR(0x52a1c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a1ccull));
TAIL_STATIC(0x515360u,515);
}
B52a1cc:L52a1cc:{c.instructions+=2;NFSU2_TR(0x52a1cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52a1cf:{NFSU2_TR(0x52a1cf);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a1d3:L52a1d3:{c.instructions+=2;NFSU2_TR(0x52a1d3);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x6ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52a1d6:{NFSU2_TR(0x52a1d6);
if(r1(R+518)){{goto L52a1ee;}}
}
B52a1d8:L52a1d8:{c.instructions+=3;NFSU2_TR(0x52a1d8);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B52a1da:{NFSU2_TR(0x52a1da);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52a1dd:{NFSU2_TR(0x52a1dd);
if(r1(R+518)){{goto L52a1ea;}}
}
B52a1df:L52a1df:{c.instructions+=3;NFSU2_TR(0x52a1df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a1e0:{NFSU2_TR(0x52a1e0);
__builtin_memmove((R+0),(R+24),4);
}
B52a1e2:{NFSU2_TR(0x52a1e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a1e7ull));
TAIL_STATIC(0x515360u,515);
}
B52a1e7:L52a1e7:{c.instructions+=1;NFSU2_TR(0x52a1e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52a1ea:L52a1ea:{c.instructions+=1;NFSU2_TR(0x52a1ea);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(r1(R+0))));
s1(u32(r4(U+0)),r1(U+4));
}
B52a1ee:L52a1ee:{c.instructions+=2;NFSU2_TR(0x52a1ee);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(u32(0x1f8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52a1f4:{NFSU2_TR(0x52a1f4);
if(r1(R+518)){{goto L52a20c;}}
}
B52a1f6:L52a1f6:{c.instructions+=3;NFSU2_TR(0x52a1f6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a1f8:{NFSU2_TR(0x52a1f8);
__builtin_memmove((R+0),(R+24),4);
}
B52a1fa:{NFSU2_TR(0x52a1fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a1ffull));
TAIL_STATIC(0x515360u,515);
}
B52a1ff:L52a1ff:{c.instructions+=4;NFSU2_TR(0x52a1ff);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B52a203:{NFSU2_TR(0x52a203);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52a206:{NFSU2_TR(0x52a206);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52a208:{NFSU2_TR(0x52a208);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a20c:L52a20c:{c.instructions+=6;NFSU2_TR(0x52a20c);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52a210:{NFSU2_TR(0x52a210);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52a211:{NFSU2_TR(0x52a211);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a212:{NFSU2_TR(0x52a212);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52a213:{NFSU2_TR(0x52a213);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52a214:{NFSU2_TR(0x52a214);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a215:L52a215:{c.instructions+=3;NFSU2_TR(0x52a215);
w1(R+0,u8(0x1ull));
}
B52a217:{NFSU2_TR(0x52a217);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52a218:{NFSU2_TR(0x52a218);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a220:L52a220:{c.instructions+=9;NFSU2_TR(0x52a220);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a221:{NFSU2_TR(0x52a221);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a222:{NFSU2_TR(0x52a222);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a223:{NFSU2_TR(0x52a223);
__builtin_memmove((R+28),(R+4),4);
}
B52a225:{NFSU2_TR(0x52a225);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B52a228:{NFSU2_TR(0x52a228);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a22b:{NFSU2_TR(0x52a22b);
w4(R+24,u32(0xcull));
}
B52a230:{NFSU2_TR(0x52a230);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B52a232:{NFSU2_TR(0x52a232);
w1(R+12,u8(0x1ull));
}
B52a234:L52a234:{c.instructions+=16;NFSU2_TR(0x52a234);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B52a238:{NFSU2_TR(0x52a238);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a23b:{NFSU2_TR(0x52a23b);
u8 U[2];
w2(U+0,u16(0x3ull));
s2(u32(r4(R+0)),r2(U+0));
}
B52a240:{NFSU2_TR(0x52a240);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a243:{NFSU2_TR(0x52a243);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a246:{NFSU2_TR(0x52a246);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+8)),r1(U+0));
}
B52a248:{NFSU2_TR(0x52a248);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff7ull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52a24c:{NFSU2_TR(0x52a24c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a24f:{NFSU2_TR(0x52a24f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a252:{NFSU2_TR(0x52a252);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a255:{NFSU2_TR(0x52a255);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffbull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a258:{NFSU2_TR(0x52a258);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a25b:{NFSU2_TR(0x52a25b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B52a25e:{NFSU2_TR(0x52a25e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B52a261:{NFSU2_TR(0x52a261);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B52a262:{NFSU2_TR(0x52a262);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a234u);}goto L52a234;}}
}
B52a264:L52a264:{c.instructions+=2;NFSU2_TR(0x52a264);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52a26a:{NFSU2_TR(0x52a26a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a26full));
TAIL_STATIC(0x525ca0u,525);
}
B52a26f:L52a26f:{c.instructions+=5;NFSU2_TR(0x52a26f);
__builtin_memmove((R+0),(R+28),4);
}
B52a271:{NFSU2_TR(0x52a271);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52a272:{NFSU2_TR(0x52a272);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a273:{NFSU2_TR(0x52a273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52a274:{NFSU2_TR(0x52a274);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a280:L52a280:{c.instructions+=17;NFSU2_TR(0x52a280);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a281:{NFSU2_TR(0x52a281);
__builtin_memmove((R+20),(R+16),4);
}
B52a283:{NFSU2_TR(0x52a283);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a284:{NFSU2_TR(0x52a284);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a287:{NFSU2_TR(0x52a287);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a288:{NFSU2_TR(0x52a288);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a289:{NFSU2_TR(0x52a289);
__builtin_memmove((R+24),(R+4),4);
}
B52a28b:{NFSU2_TR(0x52a28b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52a28e:{NFSU2_TR(0x52a28e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B52a291:{NFSU2_TR(0x52a291);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a292:{NFSU2_TR(0x52a292);
__builtin_memmove((R+8),(R+12),4);
}
B52a294:{NFSU2_TR(0x52a294);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B52a296:{NFSU2_TR(0x52a296);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a297:{NFSU2_TR(0x52a297);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a298:{NFSU2_TR(0x52a298);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52a29e:{NFSU2_TR(0x52a29e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a2a1:{NFSU2_TR(0x52a2a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a2a6ull));
TAIL_STATIC(0x5166b0u,516);
}
B52a2a6:L52a2a6:{c.instructions+=6;NFSU2_TR(0x52a2a6);
__builtin_memmove((R+4),(R+12),4);
}
B52a2a8:{NFSU2_TR(0x52a2a8);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B52a2aa:{NFSU2_TR(0x52a2aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a2ab:{NFSU2_TR(0x52a2ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a2ac:{NFSU2_TR(0x52a2ac);
w4(R+4,u32(0x85ad40ull));
}
B52a2b1:{NFSU2_TR(0x52a2b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a2b6ull));
TAIL_STATIC(0x514530u,514);
}
B52a2b6:L52a2b6:{c.instructions+=4;NFSU2_TR(0x52a2b6);
__builtin_memmove((R+28),(R+0),4);
}
B52a2b8:{NFSU2_TR(0x52a2b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a2be:{NFSU2_TR(0x52a2be);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a2c0:{NFSU2_TR(0x52a2c0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52a2d4;}}
}
B52a2c2:L52a2c2:{c.instructions+=2;NFSU2_TR(0x52a2c2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2d8ull))));
}
B52a2c8:{NFSU2_TR(0x52a2c8);
w4(R+4,u32(0x36ull));
}
B52a2cd:L52a2cd:{c.instructions+=1;NFSU2_TR(0x52a2cd);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L52a2cf;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a2cdu);}goto L52a2cd;}
}
B52a2cf:L52a2cf:{c.instructions+=2;NFSU2_TR(0x52a2cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52a2d2:{NFSU2_TR(0x52a2d2);
__builtin_memmove((R+28),(R+0),4);
}
B52a2d4:L52a2d4:{c.instructions+=3;NFSU2_TR(0x52a2d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a2d7:{NFSU2_TR(0x52a2d7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a2d9:{NFSU2_TR(0x52a2d9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52a2ea;}}
}
B52a2db:L52a2db:{c.instructions+=2;NFSU2_TR(0x52a2db);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x48ull))));
}
B52a2de:{NFSU2_TR(0x52a2de);
w4(R+4,u32(0xfull));
}
B52a2e3:L52a2e3:{c.instructions+=1;NFSU2_TR(0x52a2e3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L52a2e5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a2e3u);}goto L52a2e3;}
}
B52a2e5:L52a2e5:{c.instructions+=2;NFSU2_TR(0x52a2e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52a2e8:{NFSU2_TR(0x52a2e8);
__builtin_memmove((R+28),(R+0),4);
}
B52a2ea:L52a2ea:{c.instructions+=3;NFSU2_TR(0x52a2ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a2ed:{NFSU2_TR(0x52a2ed);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a2ef:{NFSU2_TR(0x52a2ef);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52a30c;}}
}
B52a2f1:L52a2f1:{c.instructions+=10;NFSU2_TR(0x52a2f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+8),(U+0),4);
}
B52a2f4:{NFSU2_TR(0x52a2f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B52a2f6:{NFSU2_TR(0x52a2f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B52a2f8:{NFSU2_TR(0x52a2f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52a2fb:{NFSU2_TR(0x52a2fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a2fe:{NFSU2_TR(0x52a2fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52a301:{NFSU2_TR(0x52a301);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a304:{NFSU2_TR(0x52a304);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52a307:{NFSU2_TR(0x52a307);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a30a:{NFSU2_TR(0x52a30a);
__builtin_memmove((R+28),(R+0),4);
}
B52a30c:L52a30c:{c.instructions+=3;NFSU2_TR(0x52a30c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a30f:{NFSU2_TR(0x52a30f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a311:{NFSU2_TR(0x52a311);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52a325;}}
}
B52a313:L52a313:{c.instructions+=2;NFSU2_TR(0x52a313);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x84ull))));
}
B52a319:{NFSU2_TR(0x52a319);
w4(R+4,u32(0x14ull));
}
B52a31e:L52a31e:{c.instructions+=1;NFSU2_TR(0x52a31e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L52a320;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a31eu);}goto L52a31e;}
}
B52a320:L52a320:{c.instructions+=2;NFSU2_TR(0x52a320);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52a323:{NFSU2_TR(0x52a323);
__builtin_memmove((R+28),(R+0),4);
}
B52a325:L52a325:{c.instructions+=3;NFSU2_TR(0x52a325);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a328:{NFSU2_TR(0x52a328);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a32a:{NFSU2_TR(0x52a32a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52a347;}}
}
B52a32c:L52a32c:{c.instructions+=10;NFSU2_TR(0x52a32c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52a32f:{NFSU2_TR(0x52a32f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52a331:{NFSU2_TR(0x52a331);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B52a333:{NFSU2_TR(0x52a333);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52a336:{NFSU2_TR(0x52a336);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a339:{NFSU2_TR(0x52a339);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52a33c:{NFSU2_TR(0x52a33c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a33f:{NFSU2_TR(0x52a33f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52a342:{NFSU2_TR(0x52a342);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a345:{NFSU2_TR(0x52a345);
__builtin_memmove((R+28),(R+0),4);
}
B52a347:L52a347:{c.instructions+=3;NFSU2_TR(0x52a347);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17cull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a34d:{NFSU2_TR(0x52a34d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a34f:{NFSU2_TR(0x52a34f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52a363;}}
}
B52a351:L52a351:{c.instructions+=2;NFSU2_TR(0x52a351);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
}
B52a357:{NFSU2_TR(0x52a357);
w4(R+4,u32(0x5full));
}
B52a35c:L52a35c:{c.instructions+=1;NFSU2_TR(0x52a35c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L52a35e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a35cu);}goto L52a35c;}
}
B52a35e:L52a35e:{c.instructions+=2;NFSU2_TR(0x52a35e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52a361:{NFSU2_TR(0x52a361);
__builtin_memmove((R+28),(R+0),4);
}
B52a363:L52a363:{c.instructions+=3;NFSU2_TR(0x52a363);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a366:{NFSU2_TR(0x52a366);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a368:{NFSU2_TR(0x52a368);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52a37a;}}
}
B52a36a:L52a36a:{c.instructions+=4;NFSU2_TR(0x52a36a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52a370:{NFSU2_TR(0x52a370);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
__builtin_memmove((R+8),(U+0),4);
}
B52a376:{NFSU2_TR(0x52a376);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B52a378:{NFSU2_TR(0x52a378);
__builtin_memmove((R+28),(R+0),4);
}
B52a37a:L52a37a:{c.instructions+=3;NFSU2_TR(0x52a37a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a37d:{NFSU2_TR(0x52a37d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a37f:{NFSU2_TR(0x52a37f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52a391;}}
}
B52a381:L52a381:{c.instructions+=4;NFSU2_TR(0x52a381);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52a387:{NFSU2_TR(0x52a387);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((R+8),(U+0),4);
}
B52a38d:{NFSU2_TR(0x52a38d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B52a38f:{NFSU2_TR(0x52a38f);
__builtin_memmove((R+28),(R+0),4);
}
B52a391:L52a391:{c.instructions+=3;NFSU2_TR(0x52a391);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a394:{NFSU2_TR(0x52a394);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a396:{NFSU2_TR(0x52a396);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52a3a8;}}
}
B52a398:L52a398:{c.instructions+=4;NFSU2_TR(0x52a398);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0f9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B52a39e:{NFSU2_TR(0x52a39e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0f9ull))));
__builtin_memmove((R+8),(U+0),4);
}
B52a3a4:{NFSU2_TR(0x52a3a4);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+28)),r1(U+0));
}
B52a3a6:{NFSU2_TR(0x52a3a6);
__builtin_memmove((R+28),(R+0),4);
}
B52a3a8:L52a3a8:{c.instructions+=3;NFSU2_TR(0x52a3a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a3ab:{NFSU2_TR(0x52a3ab);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a3ad:{NFSU2_TR(0x52a3ad);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52a3bf;}}
}
B52a3af:L52a3af:{c.instructions+=4;NFSU2_TR(0x52a3af);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B52a3b5:{NFSU2_TR(0x52a3b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0f8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B52a3bb:{NFSU2_TR(0x52a3bb);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+28)),r1(U+0));
}
B52a3bd:{NFSU2_TR(0x52a3bd);
__builtin_memmove((R+28),(R+0),4);
}
B52a3bf:L52a3bf:{c.instructions+=3;NFSU2_TR(0x52a3bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a3c2:{NFSU2_TR(0x52a3c2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a3c4:{NFSU2_TR(0x52a3c4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52a3d6;}}
}
B52a3c6:L52a3c6:{c.instructions+=4;NFSU2_TR(0x52a3c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52a3cc:{NFSU2_TR(0x52a3cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0f4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B52a3d2:{NFSU2_TR(0x52a3d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B52a3d4:{NFSU2_TR(0x52a3d4);
__builtin_memmove((R+28),(R+0),4);
}
B52a3d6:L52a3d6:{c.instructions+=3;NFSU2_TR(0x52a3d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a3dc:{NFSU2_TR(0x52a3dc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a3de:{NFSU2_TR(0x52a3de);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52a3f2;}}
}
B52a3e0:L52a3e0:{c.instructions+=2;NFSU2_TR(0x52a3e0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xa0fcull))));
}
B52a3e6:{NFSU2_TR(0x52a3e6);
w4(R+4,u32(0x294ull));
}
B52a3eb:L52a3eb:{c.instructions+=1;NFSU2_TR(0x52a3eb);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L52a3ed;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a3ebu);}goto L52a3eb;}
}
B52a3ed:L52a3ed:{c.instructions+=2;NFSU2_TR(0x52a3ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52a3f0:{NFSU2_TR(0x52a3f0);
__builtin_memmove((R+28),(R+0),4);
}
B52a3f2:L52a3f2:{c.instructions+=3;NFSU2_TR(0x52a3f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a3f8:{NFSU2_TR(0x52a3f8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a3fa:{NFSU2_TR(0x52a3fa);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52a40e;}}
}
B52a3fc:L52a3fc:{c.instructions+=2;NFSU2_TR(0x52a3fc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x258ull))));
}
B52a402:{NFSU2_TR(0x52a402);
w4(R+4,u32(0x20ull));
}
B52a407:L52a407:{c.instructions+=1;NFSU2_TR(0x52a407);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L52a409;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a407u);}goto L52a407;}
}
B52a409:L52a409:{c.instructions+=2;NFSU2_TR(0x52a409);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52a40c:{NFSU2_TR(0x52a40c);
__builtin_memmove((R+28),(R+0),4);
}
B52a40e:L52a40e:{c.instructions+=3;NFSU2_TR(0x52a40e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a411:{NFSU2_TR(0x52a411);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a413:{NFSU2_TR(0x52a413);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52a41e;}}
}
B52a415:L52a415:{c.instructions+=1;NFSU2_TR(0x52a415);
w4(R+4,u32(0x8ull));
}
B52a41a:L52a41a:{c.instructions+=1;NFSU2_TR(0x52a41a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L52a41c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a41au);}goto L52a41a;}
}
B52a41c:L52a41c:{c.instructions+=1;NFSU2_TR(0x52a41c);
__builtin_memmove((R+28),(R+0),4);
}
B52a41e:L52a41e:{c.instructions+=3;NFSU2_TR(0x52a41e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a41f:{NFSU2_TR(0x52a41f);
w4(R+4,u32(0x850080ull));
}
B52a424:{NFSU2_TR(0x52a424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a429ull));
TAIL_STATIC(0x515bf0u,515);
}
B52a429:L52a429:{c.instructions+=2;NFSU2_TR(0x52a429);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a42a:{NFSU2_TR(0x52a42a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a42full));
TAIL_STATIC(0x5b9420u,5b9);
}
B52a42f:L52a42f:{c.instructions+=7;NFSU2_TR(0x52a42f);
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
B52a432:{NFSU2_TR(0x52a432);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52a433:{NFSU2_TR(0x52a433);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a434:{NFSU2_TR(0x52a434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52a435:{NFSU2_TR(0x52a435);
__builtin_memmove((R+16),(R+20),4);
}
B52a437:{NFSU2_TR(0x52a437);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52a438:{NFSU2_TR(0x52a438);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a440:L52a440:{c.instructions+=1;NFSU2_TR(0x52a440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a445ull));
TAIL_STATIC(0x5b9680u,5b9);
}
B52a445:L52a445:{c.instructions+=2;NFSU2_TR(0x52a445);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xd254ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xd254ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd254ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52a44a:{NFSU2_TR(0x52a44a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a450:L52a450:{c.instructions+=2;NFSU2_TR(0x52a450);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B52a453:{NFSU2_TR(0x52a453);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a280u);}goto L52a280;}
}
B52a460:L52a460:{c.instructions+=7;NFSU2_TR(0x52a460);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a461:{NFSU2_TR(0x52a461);
__builtin_memmove((R+20),(R+16),4);
}
B52a463:{NFSU2_TR(0x52a463);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a464:{NFSU2_TR(0x52a464);
__builtin_memmove((R+24),(R+4),4);
}
B52a466:{NFSU2_TR(0x52a466);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16778ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a46c:{NFSU2_TR(0x52a46c);
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
B52a46e:{NFSU2_TR(0x52a46e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52a4b6;}}
}
B52a470:L52a470:{c.instructions+=3;NFSU2_TR(0x52a470);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52a473:{NFSU2_TR(0x52a473);
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
B52a475:{NFSU2_TR(0x52a475);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52a481;}}
}
B52a477:L52a477:{c.instructions+=3;NFSU2_TR(0x52a477);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52a47d:{NFSU2_TR(0x52a47d);
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
B52a47f:{NFSU2_TR(0x52a47f);
if(r1(R+518)){{goto L52a4b6;}}
}
B52a481:L52a481:{c.instructions+=1;NFSU2_TR(0x52a481);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a486ull));
TAIL_STATIC(0x5b9680u,5b9);
}
B52a486:L52a486:{c.instructions+=4;NFSU2_TR(0x52a486);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd254ull))));
}
B52a48b:{NFSU2_TR(0x52a48b);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a48d:{NFSU2_TR(0x52a48d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a48e:{NFSU2_TR(0x52a48e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a493ull));
TAIL_STATIC(0x440820u,440);
}
B52a493:L52a493:{c.instructions+=3;NFSU2_TR(0x52a493);
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
B52a496:{NFSU2_TR(0x52a496);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16778ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a49c:{NFSU2_TR(0x52a49c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a4a1ull));
TAIL_STATIC(0x5b9680u,5b9);
}
B52a4a1:L52a4a1:{c.instructions+=6;NFSU2_TR(0x52a4a1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd254ull))));
}
B52a4a6:{NFSU2_TR(0x52a4a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a4a7:{NFSU2_TR(0x52a4a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16778ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a4ad:{NFSU2_TR(0x52a4ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a4ae:{NFSU2_TR(0x52a4ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52a4b1:{NFSU2_TR(0x52a4b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a4b6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a280u);}goto L52a280;}
}
B52a4b6:L52a4b6:{c.instructions+=3;NFSU2_TR(0x52a4b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a4b7:{NFSU2_TR(0x52a4b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52a4b8:{NFSU2_TR(0x52a4b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a4c0:L52a4c0:{c.instructions+=7;NFSU2_TR(0x52a4c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B52a4c3:{NFSU2_TR(0x52a4c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a4c4:{NFSU2_TR(0x52a4c4);
__builtin_memmove((R+24),(R+4),4);
}
B52a4c6:{NFSU2_TR(0x52a4c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16778ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a4cc:{NFSU2_TR(0x52a4cc);
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
B52a4ce:{NFSU2_TR(0x52a4ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a4d2:{NFSU2_TR(0x52a4d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52a4db;}}
}
B52a4d4:L52a4d4:{c.instructions+=4;NFSU2_TR(0x52a4d4);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B52a4d6:{NFSU2_TR(0x52a4d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a4d7:{NFSU2_TR(0x52a4d7);
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
B52a4da:{NFSU2_TR(0x52a4da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a4db:L52a4db:{c.instructions+=3;NFSU2_TR(0x52a4db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a4dc:{NFSU2_TR(0x52a4dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a4dd:{NFSU2_TR(0x52a4dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a4e2ull));
TAIL_STATIC(0x5b9680u,5b9);
}
B52a4e2:L52a4e2:{c.instructions+=4;NFSU2_TR(0x52a4e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd254ull))));
}
B52a4e7:{NFSU2_TR(0x52a4e7);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a4e9:{NFSU2_TR(0x52a4e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a4ea:{NFSU2_TR(0x52a4ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a4efull));
TAIL_STATIC(0x440820u,440);
}
B52a4ef:L52a4ef:{c.instructions+=5;NFSU2_TR(0x52a4ef);
__builtin_memmove((R+28),(R+0),4);
}
B52a4f1:{NFSU2_TR(0x52a4f1);
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
B52a4f4:{NFSU2_TR(0x52a4f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a4f8:{NFSU2_TR(0x52a4f8);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52a4fd:{NFSU2_TR(0x52a4fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a502ull));
TAIL_STATIC(0x5b9680u,5b9);
}
B52a502:L52a502:{c.instructions+=5;NFSU2_TR(0x52a502);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd254ull))));
}
B52a507:{NFSU2_TR(0x52a507);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a508:{NFSU2_TR(0x52a508);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a509:{NFSU2_TR(0x52a509);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52a50c:{NFSU2_TR(0x52a50c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a511ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a280u);}goto L52a280;}
}
B52a511:L52a511:{c.instructions+=3;NFSU2_TR(0x52a511);
__builtin_memmove((R+0),gp(0x838467),1);
}
B52a516:{NFSU2_TR(0x52a516);
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
B52a518:{NFSU2_TR(0x52a518);
if(r1(R+518)){{goto L52a571;}}
}
B52a51a:L52a51a:{c.instructions+=2;NFSU2_TR(0x52a51a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52a51c:{NFSU2_TR(0x52a51c);
__builtin_memmove((R+16),(R+16),4);
}
B52a520:L52a520:{c.instructions+=1;NFSU2_TR(0x52a520);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a525ull));
TAIL_STATIC(0x5b9680u,5b9);
}
B52a525:L52a525:{c.instructions+=3;NFSU2_TR(0x52a525);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd254ull))));
}
B52a52a:{NFSU2_TR(0x52a52a);
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
B52a52c:{NFSU2_TR(0x52a52c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L52a595;}}
}
B52a52e:L52a52e:{c.instructions+=1;NFSU2_TR(0x52a52e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a533ull));
TAIL_STATIC(0x5b9680u,5b9);
}
B52a533:L52a533:{c.instructions+=5;NFSU2_TR(0x52a533);
w4(R+4,u32(0xd254ull));
}
B52a538:{NFSU2_TR(0x52a538);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B52a53a:{NFSU2_TR(0x52a53a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B52a53c:{NFSU2_TR(0x52a53c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a53f:{NFSU2_TR(0x52a53f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52a546;}}
}
B52a541:L52a541:{c.instructions+=1;NFSU2_TR(0x52a541);
w4(R+0,u32(0x8ull));
}
B52a546:L52a546:{c.instructions+=6;NFSU2_TR(0x52a546);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16778ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52a54c:{NFSU2_TR(0x52a54c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52a550:{NFSU2_TR(0x52a550);
__builtin_memmove((R+4),(R+0),4);
}
B52a552:{NFSU2_TR(0x52a552);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B52a554:{NFSU2_TR(0x52a554);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B52a557:{NFSU2_TR(0x52a557);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52a559:L52a559:{c.instructions+=1;NFSU2_TR(0x52a559);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L52a55b;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a559u);}goto L52a559;}}
}
B52a55b:L52a55b:{c.instructions+=2;NFSU2_TR(0x52a55b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52a55f:{NFSU2_TR(0x52a55f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52a56a;}}
}
B52a561:L52a561:{c.instructions+=3;NFSU2_TR(0x52a561);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a565:{NFSU2_TR(0x52a565);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x8ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52a568:{NFSU2_TR(0x52a568);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a520u);}goto L52a520;}
}
B52a56a:L52a56a:{c.instructions+=2;NFSU2_TR(0x52a56a);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52a56f:{NFSU2_TR(0x52a56f);
{goto L52a595;}
}
B52a571:L52a571:{c.instructions+=1;NFSU2_TR(0x52a571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a576ull));
TAIL_STATIC(0x5b9680u,5b9);
}
B52a576:L52a576:{c.instructions+=5;NFSU2_TR(0x52a576);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16778ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52a57c:{NFSU2_TR(0x52a57c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52a580:{NFSU2_TR(0x52a580);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd254ull))));
}
B52a585:{NFSU2_TR(0x52a585);
__builtin_memmove((R+4),(R+0),4);
}
B52a587:{NFSU2_TR(0x52a587);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B52a589:L52a589:{c.instructions+=1;NFSU2_TR(0x52a589);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L52a58b;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a589u);}goto L52a589;}}
}
B52a58b:L52a58b:{c.instructions+=2;NFSU2_TR(0x52a58b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52a58f:{NFSU2_TR(0x52a58f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52a595;}}
}
B52a591:L52a591:{c.instructions+=1;NFSU2_TR(0x52a591);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52a595:L52a595:{c.instructions+=3;NFSU2_TR(0x52a595);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a599:{NFSU2_TR(0x52a599);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a59a:{NFSU2_TR(0x52a59a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a59full));
TAIL_STATIC(0x440540u,440);
}
B52a59f:L52a59f:{c.instructions+=6;NFSU2_TR(0x52a59f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16778ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a5a5:{NFSU2_TR(0x52a5a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52a5a8:{NFSU2_TR(0x52a5a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52a5aa:{NFSU2_TR(0x52a5aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52a5ab:{NFSU2_TR(0x52a5ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52a5ac:{NFSU2_TR(0x52a5ac);
if(r1(R+518)){{goto L52a5c1;}}
}
B52a5ae:L52a5ae:{c.instructions+=2;NFSU2_TR(0x52a5ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a5af:{NFSU2_TR(0x52a5af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a5b4ull));
TAIL_STATIC(0x440540u,440);
}
B52a5b4:L52a5b4:{c.instructions+=2;NFSU2_TR(0x52a5b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52a5b7:{NFSU2_TR(0x52a5b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16778ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52a5c1:L52a5c1:{c.instructions+=4;NFSU2_TR(0x52a5c1);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52a5c5:{NFSU2_TR(0x52a5c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a5c6:{NFSU2_TR(0x52a5c6);
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
B52a5c9:{NFSU2_TR(0x52a5c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a5d0:L52a5d0:{c.instructions+=16;NFSU2_TR(0x52a5d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a5d2:{NFSU2_TR(0x52a5d2);
u8 U[4];
w4(U+0,u32(0x777404ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a5d7:{NFSU2_TR(0x52a5d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a5dd:{NFSU2_TR(0x52a5dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a5de:{NFSU2_TR(0x52a5de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a5e5:{NFSU2_TR(0x52a5e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a5e6:{NFSU2_TR(0x52a5e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a5e7:{NFSU2_TR(0x52a5e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a5e8:{NFSU2_TR(0x52a5e8);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a5ed:{NFSU2_TR(0x52a5ed);
u8 U[4];
w4(U+0,u32(0x503a00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a5f2:{NFSU2_TR(0x52a5f2);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a5f4:{NFSU2_TR(0x52a5f4);
__builtin_memmove((R+24),(R+4),4);
}
B52a5f6:{NFSU2_TR(0x52a5f6);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a5f8:{NFSU2_TR(0x52a5f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a5f9:{NFSU2_TR(0x52a5f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a5fd:{NFSU2_TR(0x52a5fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a602ull));
TAIL_STATIC(0x75c461u,75c);
}
B52a602:L52a602:{c.instructions+=9;NFSU2_TR(0x52a602);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a607:{NFSU2_TR(0x52a607);
u8 U[4];
w4(U+0,u32(0x516b30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a60c:{NFSU2_TR(0x52a60c);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a60e:{NFSU2_TR(0x52a60e);
u8 U[4];
w4(U+0,u32(0x434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a613:{NFSU2_TR(0x52a613);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x544ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a619:{NFSU2_TR(0x52a619);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B52a61b:{NFSU2_TR(0x52a61b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a61c:{NFSU2_TR(0x52a61c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a620:{NFSU2_TR(0x52a620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a625ull));
TAIL_STATIC(0x75c461u,75c);
}
B52a625:L52a625:{c.instructions+=8;NFSU2_TR(0x52a625);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a62a:{NFSU2_TR(0x52a62a);
u8 U[4];
w4(U+0,u32(0x525cf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a62f:{NFSU2_TR(0x52a62f);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a631:{NFSU2_TR(0x52a631);
u8 U[4];
w4(U+0,u32(0x7f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a636:{NFSU2_TR(0x52a636);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5954ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52a63c:{NFSU2_TR(0x52a63c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a63d:{NFSU2_TR(0x52a63d);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52a642:{NFSU2_TR(0x52a642);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a647ull));
TAIL_STATIC(0x75c461u,75c);
}
B52a647:L52a647:{c.instructions+=8;NFSU2_TR(0x52a647);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a64c:{NFSU2_TR(0x52a64c);
u8 U[4];
w4(U+0,u32(0x525cf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a651:{NFSU2_TR(0x52a651);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a653:{NFSU2_TR(0x52a653);
u8 U[4];
w4(U+0,u32(0x438ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a658:{NFSU2_TR(0x52a658);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8130ull))));
__builtin_memmove((R+8),(U+0),4);
}
B52a65e:{NFSU2_TR(0x52a65e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a65f:{NFSU2_TR(0x52a65f);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52a664:{NFSU2_TR(0x52a664);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a669ull));
TAIL_STATIC(0x75c461u,75c);
}
B52a669:L52a669:{c.instructions+=8;NFSU2_TR(0x52a669);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a66e:{NFSU2_TR(0x52a66e);
u8 U[4];
w4(U+0,u32(0x5118e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a673:{NFSU2_TR(0x52a673);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a675:{NFSU2_TR(0x52a675);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a677:{NFSU2_TR(0x52a677);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a67d:{NFSU2_TR(0x52a67d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a67e:{NFSU2_TR(0x52a67e);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52a683:{NFSU2_TR(0x52a683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a688ull));
TAIL_STATIC(0x75c461u,75c);
}
B52a688:L52a688:{c.instructions+=6;NFSU2_TR(0x52a688);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x540ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a68e:{NFSU2_TR(0x52a68e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x812cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a694:{NFSU2_TR(0x52a694);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9bd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a69a:{NFSU2_TR(0x52a69a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9bd8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52a6a0:{NFSU2_TR(0x52a6a0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52a6a2:{NFSU2_TR(0x52a6a2);
w4(R+4,u32(0x5bull));
}
B52a6a7:L52a6a7:{c.instructions+=1;NFSU2_TR(0x52a6a7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L52a6a9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a6a7u);}goto L52a6a7;}
}
B52a6a9:L52a6a9:{c.instructions+=7;NFSU2_TR(0x52a6a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52a6ad:{NFSU2_TR(0x52a6ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52a6ae:{NFSU2_TR(0x52a6ae);
__builtin_memmove((R+0),(R+24),4);
}
B52a6b0:{NFSU2_TR(0x52a6b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a6b1:{NFSU2_TR(0x52a6b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a6b8:{NFSU2_TR(0x52a6b8);
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
B52a6bb:{NFSU2_TR(0x52a6bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a6c0:L52a6c0:{c.instructions+=6;NFSU2_TR(0x52a6c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a6c1:{NFSU2_TR(0x52a6c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a6c2:{NFSU2_TR(0x52a6c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a6c3:{NFSU2_TR(0x52a6c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52a6c7:{NFSU2_TR(0x52a6c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a6c8:{NFSU2_TR(0x52a6c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a6cdull));
TAIL_STATIC(0x5035c0u,503);
}
B52a6cd:L52a6cd:{c.instructions+=4;NFSU2_TR(0x52a6cd);
__builtin_memmove((R+24),(R+0),4);
}
B52a6cf:{NFSU2_TR(0x52a6cf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B52a6d1:{NFSU2_TR(0x52a6d1);
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
B52a6d3:{NFSU2_TR(0x52a6d3);
if(r1(R+518)){{goto L52a701;}}
}
B52a6d5:L52a6d5:{c.instructions+=2;NFSU2_TR(0x52a6d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a6d6:{NFSU2_TR(0x52a6d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a6dbull));
TAIL_STATIC(0x503680u,503);
}
B52a6db:L52a6db:{c.instructions+=2;NFSU2_TR(0x52a6db);
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
B52a6dd:{NFSU2_TR(0x52a6dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52a701;}}
}
B52a6df:L52a6df:{c.instructions+=8;NFSU2_TR(0x52a6df);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B52a6e2:{NFSU2_TR(0x52a6e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a6e5:{NFSU2_TR(0x52a6e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a6e8:{NFSU2_TR(0x52a6e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a6eb:{NFSU2_TR(0x52a6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a6ee:{NFSU2_TR(0x52a6ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52a6f5:{NFSU2_TR(0x52a6f5);
w4(R+4,u32(0x106ull));
}
B52a6fa:{NFSU2_TR(0x52a6fa);
__builtin_memmove((R+28),(R+8),4);
}
B52a6fc:L52a6fc:{c.instructions+=1;NFSU2_TR(0x52a6fc);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L52a6fe;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a6fcu);}goto L52a6fc;}
}
B52a6fe:L52a6fe:{c.instructions+=1;NFSU2_TR(0x52a6fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a701:L52a701:{c.instructions+=4;NFSU2_TR(0x52a701);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52a702:{NFSU2_TR(0x52a702);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a703:{NFSU2_TR(0x52a703);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52a704:{NFSU2_TR(0x52a704);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a710:L52a710:{c.instructions+=5;NFSU2_TR(0x52a710);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a711:{NFSU2_TR(0x52a711);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52a715:{NFSU2_TR(0x52a715);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a716:{NFSU2_TR(0x52a716);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a717:{NFSU2_TR(0x52a717);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a71cull));
TAIL_STATIC(0x5035c0u,503);
}
B52a71c:L52a71c:{c.instructions+=2;NFSU2_TR(0x52a71c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52a71e:{NFSU2_TR(0x52a71e);
if(r1(R+518)){{goto L52a791;}}
}
B52a720:L52a720:{c.instructions+=1;NFSU2_TR(0x52a720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a725ull));
TAIL_STATIC(0x5165e0u,516);
}
B52a725:L52a725:{c.instructions+=2;NFSU2_TR(0x52a725);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52a727:{NFSU2_TR(0x52a727);
if(r1(R+518)){{goto L52a7e9;}}
}
B52a72d:L52a72d:{c.instructions+=3;NFSU2_TR(0x52a72d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a72e:{NFSU2_TR(0x52a72e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a72f:{NFSU2_TR(0x52a72f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a734ull));
TAIL_STATIC(0x5035c0u,503);
}
B52a734:L52a734:{c.instructions+=2;NFSU2_TR(0x52a734);
__builtin_memmove((R+24),(R+0),4);
}
B52a736:{NFSU2_TR(0x52a736);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a73bull));
TAIL_STATIC(0x5036c0u,503);
}
B52a73b:L52a73b:{c.instructions+=4;NFSU2_TR(0x52a73b);
__builtin_memmove((R+12),(R+0),4);
}
B52a73d:{NFSU2_TR(0x52a73d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B52a73f:{NFSU2_TR(0x52a73f);
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
B52a741:{NFSU2_TR(0x52a741);
if(r1(R+518)){{goto L52a789;}}
}
B52a743:L52a743:{c.instructions+=9;NFSU2_TR(0x52a743);
__builtin_memmove((R+8),(R+12),4);
}
B52a745:{NFSU2_TR(0x52a745);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B52a747:{NFSU2_TR(0x52a747);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x544ull))));
}
B52a74d:{NFSU2_TR(0x52a74d);
w4(R+0,u32(0xf3a0d52dull));
}
B52a752:{NFSU2_TR(0x52a752);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+8)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B52a754:{NFSU2_TR(0x52a754);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B52a757:{NFSU2_TR(0x52a757);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a758:{NFSU2_TR(0x52a758);
u8 U[4];
w4(U+0,u32(0x79b8ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a75d:{NFSU2_TR(0x52a75d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a762ull));
TAIL_STATIC(0x50b990u,50b);
}
B52a762:L52a762:{c.instructions+=9;NFSU2_TR(0x52a762);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a765:{NFSU2_TR(0x52a765);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a768:{NFSU2_TR(0x52a768);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52a76b:{NFSU2_TR(0x52a76b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x18ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52a76e:{NFSU2_TR(0x52a76e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52a771:{NFSU2_TR(0x52a771);
w4(R+4,u32(0x106ull));
}
B52a776:{NFSU2_TR(0x52a776);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a779:{NFSU2_TR(0x52a779);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52a780:{NFSU2_TR(0x52a780);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52a787:L52a787:{c.instructions+=1;NFSU2_TR(0x52a787);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L52a789;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a787u);}goto L52a787;}
}
B52a789:L52a789:{c.instructions+=5;NFSU2_TR(0x52a789);
__builtin_memmove((R+0),(R+12),4);
}
B52a78b:{NFSU2_TR(0x52a78b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52a78c:{NFSU2_TR(0x52a78c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52a78d:{NFSU2_TR(0x52a78d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a78e:{NFSU2_TR(0x52a78e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a791:L52a791:{c.instructions+=2;NFSU2_TR(0x52a791);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a792:{NFSU2_TR(0x52a792);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a797ull));
TAIL_STATIC(0x516360u,516);
}
B52a797:L52a797:{c.instructions+=2;NFSU2_TR(0x52a797);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52a799:{NFSU2_TR(0x52a799);
if(r1(R+518)){{goto L52a7e9;}}
}
B52a79b:L52a79b:{c.instructions+=1;NFSU2_TR(0x52a79b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a7a0ull));
TAIL_STATIC(0x5165e0u,516);
}
B52a7a0:L52a7a0:{c.instructions+=2;NFSU2_TR(0x52a7a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52a7a2:{NFSU2_TR(0x52a7a2);
if(r1(R+518)){{goto L52a7e9;}}
}
B52a7a4:L52a7a4:{c.instructions+=2;NFSU2_TR(0x52a7a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a7a5:{NFSU2_TR(0x52a7a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a7aaull));
TAIL_STATIC(0x503550u,503);
}
B52a7aa:L52a7aa:{c.instructions+=2;NFSU2_TR(0x52a7aa);
__builtin_memmove((R+28),(R+0),4);
}
B52a7ac:{NFSU2_TR(0x52a7ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a7b1ull));
TAIL_STATIC(0x5036c0u,503);
}
B52a7b1:L52a7b1:{c.instructions+=3;NFSU2_TR(0x52a7b1);
__builtin_memmove((R+24),(R+0),4);
}
B52a7b3:{NFSU2_TR(0x52a7b3);
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
B52a7b5:{NFSU2_TR(0x52a7b5);
if(r1(R+518)){{goto L52a7e2;}}
}
B52a7b7:L52a7b7:{c.instructions+=10;NFSU2_TR(0x52a7b7);
__builtin_memmove((R+8),(R+24),4);
}
B52a7b9:{NFSU2_TR(0x52a7b9);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B52a7bb:{NFSU2_TR(0x52a7bb);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x544ull))));
}
B52a7c1:{NFSU2_TR(0x52a7c1);
w4(R+0,u32(0xf3a0d52dull));
}
B52a7c6:{NFSU2_TR(0x52a7c6);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+8)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B52a7c8:{NFSU2_TR(0x52a7c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a7c9:{NFSU2_TR(0x52a7c9);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B52a7cc:{NFSU2_TR(0x52a7cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a7cd:{NFSU2_TR(0x52a7cd);
u8 U[4];
w4(U+0,u32(0x79b8ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a7d2:{NFSU2_TR(0x52a7d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a7d7ull));
TAIL_STATIC(0x50b990u,50b);
}
B52a7d7:L52a7d7:{c.instructions+=4;NFSU2_TR(0x52a7d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52a7da:{NFSU2_TR(0x52a7da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a7db:{NFSU2_TR(0x52a7db);
__builtin_memmove((R+4),(R+24),4);
}
B52a7dd:{NFSU2_TR(0x52a7dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a7e2ull));
TAIL_STATIC(0x516b90u,516);
}
B52a7e2:L52a7e2:{c.instructions+=4;NFSU2_TR(0x52a7e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52a7e3:{NFSU2_TR(0x52a7e3);
__builtin_memmove((R+0),(R+24),4);
}
B52a7e5:{NFSU2_TR(0x52a7e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a7e6:{NFSU2_TR(0x52a7e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a7e9:L52a7e9:{c.instructions+=4;NFSU2_TR(0x52a7e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52a7ea:{NFSU2_TR(0x52a7ea);
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
B52a7ec:{NFSU2_TR(0x52a7ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a7ed:{NFSU2_TR(0x52a7ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a7f0:L52a7f0:{c.instructions+=9;NFSU2_TR(0x52a7f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B52a7f3:{NFSU2_TR(0x52a7f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a7f4:{NFSU2_TR(0x52a7f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a7f5:{NFSU2_TR(0x52a7f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a7f6:{NFSU2_TR(0x52a7f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a7f7:{NFSU2_TR(0x52a7f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a7fb:{NFSU2_TR(0x52a7fb);
w4(R+28,u32(0x8641b0ull));
}
B52a800:{NFSU2_TR(0x52a800);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8144ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52a806:{NFSU2_TR(0x52a806);
{goto L52a810;}
}
B52a808:L52a808:{c.instructions+=2;NFSU2_TR(0x52a808);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52a80c:{NFSU2_TR(0x52a80c);
__builtin_memmove((R+16),(R+16),4);
}
B52a810:L52a810:{c.instructions+=6;NFSU2_TR(0x52a810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52a812:{NFSU2_TR(0x52a812);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a816:{NFSU2_TR(0x52a816);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x540ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a81c:{NFSU2_TR(0x52a81c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52a81e:{NFSU2_TR(0x52a81e);
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
B52a820:{NFSU2_TR(0x52a820);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52a843;}}
}
B52a822:L52a822:{c.instructions+=1;NFSU2_TR(0x52a822);
__builtin_memmove((R+12),(R+4),4);
}
B52a824:L52a824:{c.instructions+=3;NFSU2_TR(0x52a824);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52a826:{NFSU2_TR(0x52a826);
__builtin_memmove((R+4),(R+12),4);
}
B52a828:{NFSU2_TR(0x52a828);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a82bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52a82b:L52a82b:{c.instructions+=2;NFSU2_TR(0x52a82b);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52a82f:{NFSU2_TR(0x52a82f);
if(r1(R+518)){{goto L52a889;}}
}
B52a831:L52a831:{c.instructions+=6;NFSU2_TR(0x52a831);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a835:{NFSU2_TR(0x52a835);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x540ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52a83b:{NFSU2_TR(0x52a83b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B52a83c:{NFSU2_TR(0x52a83c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1cull))));
}
B52a83f:{NFSU2_TR(0x52a83f);
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
B52a841:{NFSU2_TR(0x52a841);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a824u);}goto L52a824;}}
}
B52a843:L52a843:{c.instructions+=1;NFSU2_TR(0x52a843);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52a845:L52a845:{c.instructions+=7;NFSU2_TR(0x52a845);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52a848:{NFSU2_TR(0x52a848);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x420ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a84e:{NFSU2_TR(0x52a84e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52a851:{NFSU2_TR(0x52a851);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a852:{NFSU2_TR(0x52a852);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a853:{NFSU2_TR(0x52a853);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B52a856:{NFSU2_TR(0x52a856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a85bull));
TAIL_STATIC(0x516b90u,516);
}
B52a85b:L52a85b:{c.instructions+=5;NFSU2_TR(0x52a85b);
u8 U[4];
w4(U+0,u32(0x10ull));
s4(u32(r4(R+20)),r4(U+0));
}
B52a862:{NFSU2_TR(0x52a862);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B52a865:{NFSU2_TR(0x52a865);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x438ull))));
}
B52a86b:{NFSU2_TR(0x52a86b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8641f8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8641f8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52a871:{NFSU2_TR(0x52a871);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a808u);}goto L52a808;}}
}
B52a873:L52a873:{c.instructions+=8;NFSU2_TR(0x52a873);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a877:{NFSU2_TR(0x52a877);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52a878:{NFSU2_TR(0x52a878);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a879:{NFSU2_TR(0x52a879);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52a87a:{NFSU2_TR(0x52a87a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9a80ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52a884:{NFSU2_TR(0x52a884);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52a885:{NFSU2_TR(0x52a885);
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
B52a888:{NFSU2_TR(0x52a888);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a889:L52a889:{c.instructions+=4;NFSU2_TR(0x52a889);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a88d:{NFSU2_TR(0x52a88d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B52a890:{NFSU2_TR(0x52a890);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B52a892:{NFSU2_TR(0x52a892);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a845u);}goto L52a845;}
}
B52a8a0:L52a8a0:{c.instructions+=5;NFSU2_TR(0x52a8a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a8a4:{NFSU2_TR(0x52a8a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a8a5:{NFSU2_TR(0x52a8a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a8a6:{NFSU2_TR(0x52a8a6);
__builtin_memmove((R+24),(R+4),4);
}
B52a8a8:{NFSU2_TR(0x52a8a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a8adull));
TAIL_STATIC(0x516500u,516);
}
B52a8ad:L52a8ad:{c.instructions+=4;NFSU2_TR(0x52a8ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54cull))));
__builtin_memmove((R+0),(U+0),4);
}
B52a8b3:{NFSU2_TR(0x52a8b3);
w4(R+8,u32(0x14ull));
}
B52a8b8:{NFSU2_TR(0x52a8b8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B52a8ba:{NFSU2_TR(0x52a8ba);
__builtin_memmove((R+12),(R+12),4);
}
B52a8c0:L52a8c0:{c.instructions+=8;NFSU2_TR(0x52a8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a8c3:{NFSU2_TR(0x52a8c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B52a8c5:{NFSU2_TR(0x52a8c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a8c8:{NFSU2_TR(0x52a8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a8cb:{NFSU2_TR(0x52a8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52a8d2:{NFSU2_TR(0x52a8d2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x434ull))));
}
B52a8d7:{NFSU2_TR(0x52a8d7);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B52a8d8:{NFSU2_TR(0x52a8d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a8c0u);}goto L52a8c0;}}
}
B52a8da:L52a8da:{c.instructions+=2;NFSU2_TR(0x52a8da);
__builtin_memmove((R+4),(R+24),4);
}
B52a8dc:{NFSU2_TR(0x52a8dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a8e1ull));
TAIL_STATIC(0x516480u,516);
}
B52a8e1:L52a8e1:{c.instructions+=2;NFSU2_TR(0x52a8e1);
__builtin_memmove((R+4),(R+24),4);
}
B52a8e3:{NFSU2_TR(0x52a8e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a8e8ull));
TAIL_STATIC(0x5163c0u,516);
}
B52a8e8:L52a8e8:{c.instructions+=1;NFSU2_TR(0x52a8e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a8edull));
TAIL_STATIC(0x4022c0u,402);
}
B52a8ed:L52a8ed:{c.instructions+=2;NFSU2_TR(0x52a8ed);
__builtin_memmove((R+4),(R+24),4);
}
B52a8ef:{NFSU2_TR(0x52a8ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a8f4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a7f0u);}goto L52a7f0;}
}
B52a8f4:L52a8f4:{c.instructions+=1;NFSU2_TR(0x52a8f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a8f9ull));
TAIL_STATIC(0x4022c0u,402);
}
B52a8f9:L52a8f9:{c.instructions+=2;NFSU2_TR(0x52a8f9);
__builtin_memmove((R+4),(R+24),4);
}
B52a8fb:{NFSU2_TR(0x52a8fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a900ull));
TAIL_STATIC(0x5036f0u,503);
}
B52a900:L52a900:{c.instructions+=2;NFSU2_TR(0x52a900);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a901:{NFSU2_TR(0x52a901);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a910:L52a910:{c.instructions+=14;NFSU2_TR(0x52a910);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a916:{NFSU2_TR(0x52a916);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a918:{NFSU2_TR(0x52a918);
u8 U[4];
w4(U+0,u32(0x77741bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a91d:{NFSU2_TR(0x52a91d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a91e:{NFSU2_TR(0x52a91e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a925:{NFSU2_TR(0x52a925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B52a928:{NFSU2_TR(0x52a928);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a929:{NFSU2_TR(0x52a929);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a92a:{NFSU2_TR(0x52a92a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a92b:{NFSU2_TR(0x52a92b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52a92f:{NFSU2_TR(0x52a92f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B52a931:{NFSU2_TR(0x52a931);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a933:{NFSU2_TR(0x52a933);
__builtin_memmove((R+12),(R+4),4);
}
B52a935:{NFSU2_TR(0x52a935);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52a969;}}
}
B52a937:L52a937:{c.instructions+=2;NFSU2_TR(0x52a937);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52a93a:{NFSU2_TR(0x52a93a);
if(r1(R+518)){{goto L52a94e;}}
}
B52a93c:L52a93c:{c.instructions+=3;NFSU2_TR(0x52a93c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a93f:{NFSU2_TR(0x52a93f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a940:{NFSU2_TR(0x52a940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a945ull));
TAIL_STATIC(0x575630u,575);
}
B52a945:L52a945:{c.instructions+=3;NFSU2_TR(0x52a945);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52a948:{NFSU2_TR(0x52a948);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a94b:{NFSU2_TR(0x52a94b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a94e:L52a94e:{c.instructions+=2;NFSU2_TR(0x52a94e);
__builtin_memmove((R+4),(R+12),4);
}
B52a950:{NFSU2_TR(0x52a950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a955ull));
TAIL_STATIC(0x5042e0u,504);
}
B52a955:L52a955:{c.instructions+=7;NFSU2_TR(0x52a955);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52a956:{NFSU2_TR(0x52a956);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52a957:{NFSU2_TR(0x52a957);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52a958:{NFSU2_TR(0x52a958);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52a95c:{NFSU2_TR(0x52a95c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a963:{NFSU2_TR(0x52a963);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52a966:{NFSU2_TR(0x52a966);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52a969:L52a969:{c.instructions+=5;NFSU2_TR(0x52a969);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B52a96c:{NFSU2_TR(0x52a96c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B52a96f:{NFSU2_TR(0x52a96f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a970:{NFSU2_TR(0x52a970);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a971:{NFSU2_TR(0x52a971);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a976ull));
TAIL_STATIC(0x575620u,575);
}
B52a976:L52a976:{c.instructions+=5;NFSU2_TR(0x52a976);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a97a:{NFSU2_TR(0x52a97a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a97d:{NFSU2_TR(0x52a97d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52a980:{NFSU2_TR(0x52a980);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a982:{NFSU2_TR(0x52a982);
if(r1(R+518)){{goto L52a9b8;}}
}
B52a984:L52a984:{c.instructions+=3;NFSU2_TR(0x52a984);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52a986:{NFSU2_TR(0x52a986);
__builtin_memmove((R+20),(R+0),4);
}
B52a988:{NFSU2_TR(0x52a988);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52a98c;}}
}
B52a98a:L52a98a:{c.instructions+=1;NFSU2_TR(0x52a98a);
__builtin_memmove((R+20),(R+24),4);
}
B52a98c:L52a98c:{c.instructions+=6;NFSU2_TR(0x52a98c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52a98f:{NFSU2_TR(0x52a98f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52a993:{NFSU2_TR(0x52a993);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B52a997:{NFSU2_TR(0x52a997);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B52a99a:{NFSU2_TR(0x52a99a);
__builtin_memmove((R+8),(R+4),4);
}
B52a99c:{NFSU2_TR(0x52a99c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B52a99f:L52a99f:{c.instructions+=1;NFSU2_TR(0x52a99f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L52a9a1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a99fu);}goto L52a99f;}
}
B52a9a1:L52a9a1:{c.instructions+=2;NFSU2_TR(0x52a9a1);
__builtin_memmove((R+4),(R+8),4);
}
B52a9a3:{NFSU2_TR(0x52a9a3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B52a9a6:L52a9a6:{c.instructions+=1;NFSU2_TR(0x52a9a6);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L52a9a8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a9a6u);}goto L52a9a6;}
}
B52a9a8:L52a9a8:{c.instructions+=3;NFSU2_TR(0x52a9a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52a9ab:{NFSU2_TR(0x52a9ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a9ac:{NFSU2_TR(0x52a9ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52a9b1ull));
TAIL_STATIC(0x575630u,575);
}
B52a9b1:L52a9b1:{c.instructions+=2;NFSU2_TR(0x52a9b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52a9b5:{NFSU2_TR(0x52a9b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52a9b8:L52a9b8:{c.instructions+=11;NFSU2_TR(0x52a9b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52a9bc:{NFSU2_TR(0x52a9bc);
__builtin_memmove((R+0),(R+24),4);
}
B52a9be:{NFSU2_TR(0x52a9be);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B52a9c0:{NFSU2_TR(0x52a9c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B52a9c3:{NFSU2_TR(0x52a9c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B52a9c6:{NFSU2_TR(0x52a9c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B52a9ca:{NFSU2_TR(0x52a9ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B52a9cd:{NFSU2_TR(0x52a9cd);
__builtin_memmove((R+8),(R+4),4);
}
B52a9cf:{NFSU2_TR(0x52a9cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B52a9d2:{NFSU2_TR(0x52a9d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52a9d6:{NFSU2_TR(0x52a9d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52a9d8:L52a9d8:{c.instructions+=1;NFSU2_TR(0x52a9d8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L52a9da;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a9d8u);}goto L52a9d8;}
}
B52a9da:L52a9da:{c.instructions+=2;NFSU2_TR(0x52a9da);
__builtin_memmove((R+4),(R+8),4);
}
B52a9dc:{NFSU2_TR(0x52a9dc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B52a9df:L52a9df:{c.instructions+=1;NFSU2_TR(0x52a9df);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L52a9e1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52a9dfu);}goto L52a9df;}
}
B52a9e1:L52a9e1:{c.instructions+=5;NFSU2_TR(0x52a9e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52a9e4:{NFSU2_TR(0x52a9e4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B52a9e7:{NFSU2_TR(0x52a9e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52a9e9:{NFSU2_TR(0x52a9e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52a9f1:{NFSU2_TR(0x52a9f1);
if(r1(R+518)){{goto L52aaff;}}
}
B52a9f7:L52a9f7:{c.instructions+=4;NFSU2_TR(0x52a9f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B52a9fa:{NFSU2_TR(0x52a9fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B52a9fd:{NFSU2_TR(0x52a9fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52a9fe:{NFSU2_TR(0x52a9fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52aa03ull));
TAIL_STATIC(0x575620u,575);
}
B52aa03:L52aa03:{c.instructions+=5;NFSU2_TR(0x52aa03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52aa06:{NFSU2_TR(0x52aa06);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52aa0a:{NFSU2_TR(0x52aa0a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52aa0c:{NFSU2_TR(0x52aa0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52aa14:{NFSU2_TR(0x52aa14);
if(r1(R+518)){{goto L52aa2a;}}
}
B52aa16:L52aa16:{c.instructions+=5;NFSU2_TR(0x52aa16);
u8 U[4];
w4(U+0,u32(0x504150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52aa1b:{NFSU2_TR(0x52aa1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52aa1c:{NFSU2_TR(0x52aa1c);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52aa1e:{NFSU2_TR(0x52aa1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52aa1f:{NFSU2_TR(0x52aa1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52aa24ull));
TAIL_STATIC(0x401650u,401);
}
B52aa24:L52aa24:{c.instructions+=2;NFSU2_TR(0x52aa24);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52aa28:{NFSU2_TR(0x52aa28);
{goto L52aa2c;}
}
B52aa2a:L52aa2a:{c.instructions+=1;NFSU2_TR(0x52aa2a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52aa2c:L52aa2c:{c.instructions+=5;NFSU2_TR(0x52aa2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52aa32:{NFSU2_TR(0x52aa32);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52aa34:{NFSU2_TR(0x52aa34);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B52aa3c:{NFSU2_TR(0x52aa3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52aa40:{NFSU2_TR(0x52aa40);
if(r1(R+518)){{goto L52aaf5;}}
}
B52aa46:L52aa46:{c.instructions+=4;NFSU2_TR(0x52aa46);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52aa49:{NFSU2_TR(0x52aa49);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52aa4b:{NFSU2_TR(0x52aa4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52aa53:{NFSU2_TR(0x52aa53);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L52aae4;}}
}
B52aa59:L52aa59:{c.instructions+=9;NFSU2_TR(0x52aa59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B52aa5d:{NFSU2_TR(0x52aa5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B52aa60:{NFSU2_TR(0x52aa60);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B52aa63:{NFSU2_TR(0x52aa63);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B52aa66:{NFSU2_TR(0x52aa66);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B52aa68:{NFSU2_TR(0x52aa68);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52aa6c:{NFSU2_TR(0x52aa6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52aa70:{NFSU2_TR(0x52aa70);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52aa74:{NFSU2_TR(0x52aa74);
{goto L52aa80;}
}
B52aa76:L52aa76:{c.instructions+=2;NFSU2_TR(0x52aa76);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52aa7a:{NFSU2_TR(0x52aa7a);
__builtin_memmove((R+12),(R+12),4);
}
B52aa80:L52aa80:{c.instructions+=10;NFSU2_TR(0x52aa80);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52aa83:{NFSU2_TR(0x52aa83);
u8 U[32];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B52aa88:{NFSU2_TR(0x52aa88);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52aa8e:{NFSU2_TR(0x52aa8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B52aa91:{NFSU2_TR(0x52aa91);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B52aa94:{NFSU2_TR(0x52aa94);
__builtin_memmove((R+4),(R+20),4);
}
B52aa96:{NFSU2_TR(0x52aa96);
__builtin_memmove((R+0),(R+4),4);
}
B52aa98:{NFSU2_TR(0x52aa98);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B52aa9b:{NFSU2_TR(0x52aa9b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B52aa9d:{NFSU2_TR(0x52aa9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52aaa1:L52aaa1:{c.instructions+=1;NFSU2_TR(0x52aaa1);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L52aaa3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52aaa1u);}goto L52aaa1;}
}
B52aaa3:L52aaa3:{c.instructions+=2;NFSU2_TR(0x52aaa3);
__builtin_memmove((R+4),(R+0),4);
}
B52aaa5:{NFSU2_TR(0x52aaa5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B52aaa8:L52aaa8:{c.instructions+=1;NFSU2_TR(0x52aaa8);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L52aaaa;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52aaa8u);}goto L52aaa8;}
}
B52aaaa:L52aaaa:{c.instructions+=4;NFSU2_TR(0x52aaaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52aaae:{NFSU2_TR(0x52aaae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52aaaf:{NFSU2_TR(0x52aaaf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52aab0:{NFSU2_TR(0x52aab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52aab5ull));
TAIL_STATIC(0x504290u,504);
}
B52aab5:L52aab5:{c.instructions+=14;NFSU2_TR(0x52aab5);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52aab9:{NFSU2_TR(0x52aab9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52aabd:{NFSU2_TR(0x52aabd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52aac1:{NFSU2_TR(0x52aac1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52aac5:{NFSU2_TR(0x52aac5);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B52aac7:{NFSU2_TR(0x52aac7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B52aac9:{NFSU2_TR(0x52aac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52aacc:{NFSU2_TR(0x52aacc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52aacf:{NFSU2_TR(0x52aacf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52aad0:{NFSU2_TR(0x52aad0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B52aad2:{NFSU2_TR(0x52aad2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52aad6:{NFSU2_TR(0x52aad6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52aada:{NFSU2_TR(0x52aada);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52aade:{NFSU2_TR(0x52aade);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52aa76u);}goto L52aa76;}}
}
B52aae0:L52aae0:{c.instructions+=1;NFSU2_TR(0x52aae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52aae4:L52aae4:{c.instructions+=3;NFSU2_TR(0x52aae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52aaea:{NFSU2_TR(0x52aaea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52aaeb:{NFSU2_TR(0x52aaeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52aaf0ull));
TAIL_STATIC(0x575630u,575);
}
B52aaf0:L52aaf0:{c.instructions+=2;NFSU2_TR(0x52aaf0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52aaf3:{NFSU2_TR(0x52aaf3);
{goto L52aaff;}
}
B52aaf5:L52aaf5:{c.instructions+=3;NFSU2_TR(0x52aaf5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52aaf6:{NFSU2_TR(0x52aaf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52aaf7:{NFSU2_TR(0x52aaf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52aafcull));
TAIL_STATIC(0x504290u,504);
}
B52aafc:L52aafc:{c.instructions+=1;NFSU2_TR(0x52aafc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52aaff:L52aaff:{c.instructions+=13;NFSU2_TR(0x52aaff);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ab03:{NFSU2_TR(0x52ab03);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ab07:{NFSU2_TR(0x52ab07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52ab08:{NFSU2_TR(0x52ab08);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ab0b:{NFSU2_TR(0x52ab0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ab11:{NFSU2_TR(0x52ab11);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ab15:{NFSU2_TR(0x52ab15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ab16:{NFSU2_TR(0x52ab16);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ab19:{NFSU2_TR(0x52ab19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52ab1a:{NFSU2_TR(0x52ab1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52ab1b:{NFSU2_TR(0x52ab1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ab22:{NFSU2_TR(0x52ab22);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52ab25:{NFSU2_TR(0x52ab25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52ab30:L52ab30:{c.instructions+=14;NFSU2_TR(0x52ab30);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ab36:{NFSU2_TR(0x52ab36);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ab38:{NFSU2_TR(0x52ab38);
u8 U[4];
w4(U+0,u32(0x777babull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ab3d:{NFSU2_TR(0x52ab3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ab3e:{NFSU2_TR(0x52ab3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ab45:{NFSU2_TR(0x52ab45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B52ab48:{NFSU2_TR(0x52ab48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ab49:{NFSU2_TR(0x52ab49);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ab4a:{NFSU2_TR(0x52ab4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ab4b:{NFSU2_TR(0x52ab4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52ab4f:{NFSU2_TR(0x52ab4f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B52ab51:{NFSU2_TR(0x52ab51);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52ab53:{NFSU2_TR(0x52ab53);
__builtin_memmove((R+12),(R+4),4);
}
B52ab55:{NFSU2_TR(0x52ab55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52ab89;}}
}
B52ab57:L52ab57:{c.instructions+=2;NFSU2_TR(0x52ab57);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52ab5a:{NFSU2_TR(0x52ab5a);
if(r1(R+518)){{goto L52ab6e;}}
}
B52ab5c:L52ab5c:{c.instructions+=3;NFSU2_TR(0x52ab5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ab5f:{NFSU2_TR(0x52ab5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ab60:{NFSU2_TR(0x52ab60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ab65ull));
TAIL_STATIC(0x575630u,575);
}
B52ab65:L52ab65:{c.instructions+=3;NFSU2_TR(0x52ab65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52ab68:{NFSU2_TR(0x52ab68);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ab6b:{NFSU2_TR(0x52ab6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ab6e:L52ab6e:{c.instructions+=2;NFSU2_TR(0x52ab6e);
__builtin_memmove((R+4),(R+12),4);
}
B52ab70:{NFSU2_TR(0x52ab70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ab75ull));
TAIL_STATIC(0x5042e0u,504);
}
B52ab75:L52ab75:{c.instructions+=7;NFSU2_TR(0x52ab75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ab76:{NFSU2_TR(0x52ab76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52ab77:{NFSU2_TR(0x52ab77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52ab78:{NFSU2_TR(0x52ab78);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ab7c:{NFSU2_TR(0x52ab7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ab83:{NFSU2_TR(0x52ab83);
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
B52ab86:{NFSU2_TR(0x52ab86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52ab89:L52ab89:{c.instructions+=5;NFSU2_TR(0x52ab89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B52ab8c:{NFSU2_TR(0x52ab8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B52ab8f:{NFSU2_TR(0x52ab8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ab90:{NFSU2_TR(0x52ab90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ab91:{NFSU2_TR(0x52ab91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ab96ull));
TAIL_STATIC(0x575620u,575);
}
B52ab96:L52ab96:{c.instructions+=5;NFSU2_TR(0x52ab96);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ab9a:{NFSU2_TR(0x52ab9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ab9d:{NFSU2_TR(0x52ab9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52aba0:{NFSU2_TR(0x52aba0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52aba2:{NFSU2_TR(0x52aba2);
if(r1(R+518)){{goto L52abd8;}}
}
B52aba4:L52aba4:{c.instructions+=3;NFSU2_TR(0x52aba4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52aba6:{NFSU2_TR(0x52aba6);
__builtin_memmove((R+20),(R+0),4);
}
B52aba8:{NFSU2_TR(0x52aba8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52abac;}}
}
B52abaa:L52abaa:{c.instructions+=1;NFSU2_TR(0x52abaa);
__builtin_memmove((R+20),(R+24),4);
}
B52abac:L52abac:{c.instructions+=6;NFSU2_TR(0x52abac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52abaf:{NFSU2_TR(0x52abaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52abb3:{NFSU2_TR(0x52abb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B52abb7:{NFSU2_TR(0x52abb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B52abba:{NFSU2_TR(0x52abba);
__builtin_memmove((R+8),(R+4),4);
}
B52abbc:{NFSU2_TR(0x52abbc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B52abbf:L52abbf:{c.instructions+=1;NFSU2_TR(0x52abbf);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L52abc1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52abbfu);}goto L52abbf;}
}
B52abc1:L52abc1:{c.instructions+=2;NFSU2_TR(0x52abc1);
__builtin_memmove((R+4),(R+8),4);
}
B52abc3:{NFSU2_TR(0x52abc3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B52abc6:L52abc6:{c.instructions+=1;NFSU2_TR(0x52abc6);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L52abc8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52abc6u);}goto L52abc6;}
}
B52abc8:L52abc8:{c.instructions+=3;NFSU2_TR(0x52abc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52abcb:{NFSU2_TR(0x52abcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52abcc:{NFSU2_TR(0x52abcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52abd1ull));
TAIL_STATIC(0x575630u,575);
}
B52abd1:L52abd1:{c.instructions+=2;NFSU2_TR(0x52abd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52abd5:{NFSU2_TR(0x52abd5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52abd8:L52abd8:{c.instructions+=11;NFSU2_TR(0x52abd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52abdc:{NFSU2_TR(0x52abdc);
__builtin_memmove((R+0),(R+24),4);
}
B52abde:{NFSU2_TR(0x52abde);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B52abe0:{NFSU2_TR(0x52abe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B52abe3:{NFSU2_TR(0x52abe3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B52abe6:{NFSU2_TR(0x52abe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B52abea:{NFSU2_TR(0x52abea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B52abed:{NFSU2_TR(0x52abed);
__builtin_memmove((R+8),(R+4),4);
}
B52abef:{NFSU2_TR(0x52abef);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B52abf2:{NFSU2_TR(0x52abf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52abf6:{NFSU2_TR(0x52abf6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52abf8:L52abf8:{c.instructions+=1;NFSU2_TR(0x52abf8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L52abfa;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52abf8u);}goto L52abf8;}
}
B52abfa:L52abfa:{c.instructions+=2;NFSU2_TR(0x52abfa);
__builtin_memmove((R+4),(R+8),4);
}
B52abfc:{NFSU2_TR(0x52abfc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B52abff:L52abff:{c.instructions+=1;NFSU2_TR(0x52abff);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L52ac01;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52abffu);}goto L52abff;}
}
B52ac01:L52ac01:{c.instructions+=5;NFSU2_TR(0x52ac01);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52ac04:{NFSU2_TR(0x52ac04);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B52ac07:{NFSU2_TR(0x52ac07);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52ac09:{NFSU2_TR(0x52ac09);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52ac11:{NFSU2_TR(0x52ac11);
if(r1(R+518)){{goto L52acaf;}}
}
B52ac17:L52ac17:{c.instructions+=4;NFSU2_TR(0x52ac17);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B52ac1a:{NFSU2_TR(0x52ac1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B52ac1d:{NFSU2_TR(0x52ac1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ac1e:{NFSU2_TR(0x52ac1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ac23ull));
TAIL_STATIC(0x575620u,575);
}
B52ac23:L52ac23:{c.instructions+=6;NFSU2_TR(0x52ac23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52ac26:{NFSU2_TR(0x52ac26);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ac2a:{NFSU2_TR(0x52ac2a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B52ac2c:{NFSU2_TR(0x52ac2c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52ac2e:{NFSU2_TR(0x52ac2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ac32:{NFSU2_TR(0x52ac32);
if(r1(R+518)){{goto L52ac46;}}
}
B52ac34:L52ac34:{c.instructions+=5;NFSU2_TR(0x52ac34);
u8 U[4];
w4(U+0,u32(0x504150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ac39:{NFSU2_TR(0x52ac39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ac3a:{NFSU2_TR(0x52ac3a);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ac3c:{NFSU2_TR(0x52ac3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ac3d:{NFSU2_TR(0x52ac3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ac42ull));
TAIL_STATIC(0x401650u,401);
}
B52ac42:L52ac42:{c.instructions+=1;NFSU2_TR(0x52ac42);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ac46:L52ac46:{c.instructions+=5;NFSU2_TR(0x52ac46);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ac4c:{NFSU2_TR(0x52ac4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52ac4e:{NFSU2_TR(0x52ac4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B52ac56:{NFSU2_TR(0x52ac56);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ac5a:{NFSU2_TR(0x52ac5a);
if(r1(R+518)){{goto L52aca5;}}
}
B52ac5c:L52ac5c:{c.instructions+=6;NFSU2_TR(0x52ac5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ac5f:{NFSU2_TR(0x52ac5f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B52ac62:{NFSU2_TR(0x52ac62);
__builtin_memmove((R+24),(R+0),4);
}
B52ac64:{NFSU2_TR(0x52ac64);
__builtin_memmove((R+0),(R+4),4);
}
B52ac66:{NFSU2_TR(0x52ac66);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B52ac69:{NFSU2_TR(0x52ac69);
__builtin_memmove((R+28),(R+8),4);
}
B52ac6b:L52ac6b:{c.instructions+=1;NFSU2_TR(0x52ac6b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L52ac6d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52ac6bu);}goto L52ac6b;}
}
B52ac6d:L52ac6d:{c.instructions+=2;NFSU2_TR(0x52ac6d);
__builtin_memmove((R+4),(R+0),4);
}
B52ac6f:{NFSU2_TR(0x52ac6f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B52ac72:L52ac72:{c.instructions+=1;NFSU2_TR(0x52ac72);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L52ac74;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52ac72u);}goto L52ac72;}
}
B52ac74:L52ac74:{c.instructions+=10;NFSU2_TR(0x52ac74);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ac77:{NFSU2_TR(0x52ac77);
__builtin_memmove((R+4),(R+0),4);
}
B52ac79:{NFSU2_TR(0x52ac79);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B52ac7c:{NFSU2_TR(0x52ac7c);
u8 U[32];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B52ac81:{NFSU2_TR(0x52ac81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B52ac84:{NFSU2_TR(0x52ac84);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B52ac87:{NFSU2_TR(0x52ac87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ac88:{NFSU2_TR(0x52ac88);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B52ac8a:{NFSU2_TR(0x52ac8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ac8b:{NFSU2_TR(0x52ac8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ac90ull));
TAIL_STATIC(0x504290u,504);
}
B52ac90:L52ac90:{c.instructions+=3;NFSU2_TR(0x52ac90);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ac96:{NFSU2_TR(0x52ac96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ac97:{NFSU2_TR(0x52ac97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ac9cull));
TAIL_STATIC(0x575630u,575);
}
B52ac9c:L52ac9c:{c.instructions+=3;NFSU2_TR(0x52ac9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52aca0:{NFSU2_TR(0x52aca0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52aca3:{NFSU2_TR(0x52aca3);
{goto L52acaf;}
}
B52aca5:L52aca5:{c.instructions+=3;NFSU2_TR(0x52aca5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52aca6:{NFSU2_TR(0x52aca6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52aca7:{NFSU2_TR(0x52aca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52acacull));
TAIL_STATIC(0x504290u,504);
}
B52acac:L52acac:{c.instructions+=1;NFSU2_TR(0x52acac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52acaf:L52acaf:{c.instructions+=13;NFSU2_TR(0x52acaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52acb3:{NFSU2_TR(0x52acb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52acb7:{NFSU2_TR(0x52acb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52acbb:{NFSU2_TR(0x52acbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52acbc:{NFSU2_TR(0x52acbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52acbf:{NFSU2_TR(0x52acbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52acc0:{NFSU2_TR(0x52acc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52acc3:{NFSU2_TR(0x52acc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52acc9:{NFSU2_TR(0x52acc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52acca:{NFSU2_TR(0x52acca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52accb:{NFSU2_TR(0x52accb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52acd2:{NFSU2_TR(0x52acd2);
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
B52acd5:{NFSU2_TR(0x52acd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52ace0:L52ace0:{c.instructions+=8;NFSU2_TR(0x52ace0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ace1:{NFSU2_TR(0x52ace1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ace2:{NFSU2_TR(0x52ace2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ace3:{NFSU2_TR(0x52ace3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52ace7:{NFSU2_TR(0x52ace7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B52ace9:{NFSU2_TR(0x52ace9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52aceb:{NFSU2_TR(0x52aceb);
__builtin_memmove((R+24),(R+4),4);
}
B52aced:{NFSU2_TR(0x52aced);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52acf7;}}
}
B52acef:L52acef:{c.instructions+=5;NFSU2_TR(0x52acef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52acf0:{NFSU2_TR(0x52acf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52acf1:{NFSU2_TR(0x52acf1);
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
B52acf3:{NFSU2_TR(0x52acf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52acf4:{NFSU2_TR(0x52acf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52acf7:L52acf7:{c.instructions+=3;NFSU2_TR(0x52acf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52acfa:{NFSU2_TR(0x52acfa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52acfc:{NFSU2_TR(0x52acfc);
if(r1(R+518)){{goto L52ad0c;}}
}
B52acfe:L52acfe:{c.instructions+=1;NFSU2_TR(0x52acfe);
__builtin_memmove((R+28),(R+28),4);
}
B52ad00:L52ad00:{c.instructions+=2;NFSU2_TR(0x52ad00);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52ad03:{NFSU2_TR(0x52ad03);
if(r1(R+518)){{goto L52ad66;}}
}
B52ad05:L52ad05:{c.instructions+=3;NFSU2_TR(0x52ad05);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ad08:{NFSU2_TR(0x52ad08);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52ad0a:{NFSU2_TR(0x52ad0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52ad00u);}goto L52ad00;}}
}
B52ad0c:L52ad0c:{c.instructions+=2;NFSU2_TR(0x52ad0c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ad0e:{NFSU2_TR(0x52ad0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ad13ull));
TAIL_STATIC(0x575620u,575);
}
B52ad13:L52ad13:{c.instructions+=3;NFSU2_TR(0x52ad13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52ad16:{NFSU2_TR(0x52ad16);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52ad18:{NFSU2_TR(0x52ad18);
if(r1(R+518)){{goto L52ad40;}}
}
B52ad1a:L52ad1a:{c.instructions+=10;NFSU2_TR(0x52ad1a);
w4(R+4,u32(0xabadcafeull));
}
B52ad1f:{NFSU2_TR(0x52ad1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ad22:{NFSU2_TR(0x52ad22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ad25:{NFSU2_TR(0x52ad25);
u8 U[4];
w4(U+0,u32(0x79b8dcull));
s4(u32(r4(R+0)),r4(U+0));
}
B52ad2b:{NFSU2_TR(0x52ad2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x79a9ecull));
s4(u32(r4(U+0)),r4(U+4));
}
B52ad32:{NFSU2_TR(0x52ad32);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ad35:{NFSU2_TR(0x52ad35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ad38:{NFSU2_TR(0x52ad38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ad3b:{NFSU2_TR(0x52ad3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ad3e:{NFSU2_TR(0x52ad3e);
{goto L52ad42;}
}
B52ad40:L52ad40:{c.instructions+=1;NFSU2_TR(0x52ad40);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52ad42:L52ad42:{c.instructions+=3;NFSU2_TR(0x52ad42);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52ad44:{NFSU2_TR(0x52ad44);
__builtin_memmove((R+4),(R+0),4);
}
B52ad46:{NFSU2_TR(0x52ad46);
if(r1(R+518)){{goto L52ad66;}}
}
B52ad48:L52ad48:{c.instructions+=4;NFSU2_TR(0x52ad48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ad4b:{NFSU2_TR(0x52ad4b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52ad4d:{NFSU2_TR(0x52ad4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ad50:{NFSU2_TR(0x52ad50);
if(r1(R+518)){{goto L52ad55;}}
}
B52ad52:L52ad52:{c.instructions+=1;NFSU2_TR(0x52ad52);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ad55:L52ad55:{c.instructions+=4;NFSU2_TR(0x52ad55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ad58:{NFSU2_TR(0x52ad58);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52ad5b:{NFSU2_TR(0x52ad5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ad5e:{NFSU2_TR(0x52ad5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52ad63;}}
}
B52ad60:L52ad60:{c.instructions+=1;NFSU2_TR(0x52ad60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ad63:L52ad63:{c.instructions+=1;NFSU2_TR(0x52ad63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B52ad66:L52ad66:{c.instructions+=1;NFSU2_TR(0x52ad66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ad6bull));
TAIL_STATIC(0x517400u,517);
}
B52ad6b:L52ad6b:{c.instructions+=4;NFSU2_TR(0x52ad6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52ad6c:{NFSU2_TR(0x52ad6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ad6d:{NFSU2_TR(0x52ad6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52ad6e:{NFSU2_TR(0x52ad6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52ad80:L52ad80:{c.instructions+=6;NFSU2_TR(0x52ad80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ad81:{NFSU2_TR(0x52ad81);
__builtin_memmove((R+24),(R+4),4);
}
B52ad83:{NFSU2_TR(0x52ad83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52ad85:{NFSU2_TR(0x52ad85);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B52ad8a:{NFSU2_TR(0x52ad8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ad8b:{NFSU2_TR(0x52ad8b);
if(r1(R+512)){{goto L52ada7;}}
}
B52ad8d:L52ad8d:{c.instructions+=2;NFSU2_TR(0x52ad8d);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x204ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x204ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52ad92:{NFSU2_TR(0x52ad92);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52ada7;}}
}
B52ad94:L52ad94:{c.instructions+=2;NFSU2_TR(0x52ad94);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x203ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52ad99:{NFSU2_TR(0x52ad99);
if(r1(R+518)){{goto L52ada7;}}
}
B52ad9b:L52ad9b:{c.instructions+=3;NFSU2_TR(0x52ad9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ad9e:{NFSU2_TR(0x52ad9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ad9f:{NFSU2_TR(0x52ad9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ada4ull));
TAIL_STATIC(0x575630u,575);
}
B52ada4:L52ada4:{c.instructions+=1;NFSU2_TR(0x52ada4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52ada7:L52ada7:{c.instructions+=6;NFSU2_TR(0x52ada7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52adab:{NFSU2_TR(0x52adab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52adb2:{NFSU2_TR(0x52adb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52adb4:{NFSU2_TR(0x52adb4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x200ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52adb9:{NFSU2_TR(0x52adb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B52adbb:{NFSU2_TR(0x52adbb);
if(r1(R+512)){{goto L52ade3;}}
}
B52adbd:L52adbd:{c.instructions+=2;NFSU2_TR(0x52adbd);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x204ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x204ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x204ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52adc2:{NFSU2_TR(0x52adc2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52ade3;}}
}
B52adc4:L52adc4:{c.instructions+=2;NFSU2_TR(0x52adc4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x203ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x203ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x203ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52adc9:{NFSU2_TR(0x52adc9);
if(r1(R+518)){{goto L52ade3;}}
}
B52adcb:L52adcb:{c.instructions+=4;NFSU2_TR(0x52adcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52adce:{NFSU2_TR(0x52adce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52adcf:{NFSU2_TR(0x52adcf);
__builtin_memmove((R+4),(R+24),4);
}
B52add1:{NFSU2_TR(0x52add1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52add6ull));
TAIL_STATIC(0x517630u,517);
}
B52add6:L52add6:{c.instructions+=6;NFSU2_TR(0x52add6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52add9:{NFSU2_TR(0x52add9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52addc:{NFSU2_TR(0x52addc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52addd:{NFSU2_TR(0x52addd);
__builtin_memmove((R+0),(R+24),4);
}
B52addf:{NFSU2_TR(0x52addf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ade0:{NFSU2_TR(0x52ade0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52ade3:L52ade3:{c.instructions+=8;NFSU2_TR(0x52ade3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52ade6:{NFSU2_TR(0x52ade6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ade9:{NFSU2_TR(0x52ade9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52adec:{NFSU2_TR(0x52adec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52adef:{NFSU2_TR(0x52adef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52adf0:{NFSU2_TR(0x52adf0);
__builtin_memmove((R+0),(R+24),4);
}
B52adf2:{NFSU2_TR(0x52adf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52adf3:{NFSU2_TR(0x52adf3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52ae00:L52ae00:{c.instructions+=14;NFSU2_TR(0x52ae00);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ae06:{NFSU2_TR(0x52ae06);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae08:{NFSU2_TR(0x52ae08);
u8 U[4];
w4(U+0,u32(0x77708bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae0d:{NFSU2_TR(0x52ae0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae0e:{NFSU2_TR(0x52ae0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ae15:{NFSU2_TR(0x52ae15);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae16:{NFSU2_TR(0x52ae16);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae17:{NFSU2_TR(0x52ae17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae18:{NFSU2_TR(0x52ae18);
__builtin_memmove((R+12),(R+4),4);
}
B52ae1a:{NFSU2_TR(0x52ae1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ae1d:{NFSU2_TR(0x52ae1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae1e:{NFSU2_TR(0x52ae1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52ae22:{NFSU2_TR(0x52ae22);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52ae24:{NFSU2_TR(0x52ae24);
if(r1(R+518)){{goto L52af08;}}
}
B52ae2a:L52ae2a:{c.instructions+=3;NFSU2_TR(0x52ae2a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B52ae2c:{NFSU2_TR(0x52ae2c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52ae2e:{NFSU2_TR(0x52ae2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52ae5f;}}
}
B52ae30:L52ae30:{c.instructions+=3;NFSU2_TR(0x52ae30);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52ae33:{NFSU2_TR(0x52ae33);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52ae35:{NFSU2_TR(0x52ae35);
if(r1(R+518)){{goto L52ae54;}}
}
B52ae37:L52ae37:{c.instructions+=7;NFSU2_TR(0x52ae37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52ae3a:{NFSU2_TR(0x52ae3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ae3d:{NFSU2_TR(0x52ae3d);
u8 U[4];
w4(U+0,u32(0x517600ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae42:{NFSU2_TR(0x52ae42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae43:{NFSU2_TR(0x52ae43);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae45:{NFSU2_TR(0x52ae45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae46:{NFSU2_TR(0x52ae46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ae4bull));
TAIL_STATIC(0x75c401u,75c);
}
B52ae4b:L52ae4b:{c.instructions+=2;NFSU2_TR(0x52ae4b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae4c:{NFSU2_TR(0x52ae4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ae51ull));
TAIL_STATIC(0x575630u,575);
}
B52ae51:L52ae51:{c.instructions+=1;NFSU2_TR(0x52ae51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52ae54:L52ae54:{c.instructions+=3;NFSU2_TR(0x52ae54);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ae57:{NFSU2_TR(0x52ae57);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ae5a:{NFSU2_TR(0x52ae5a);
{goto L52af08;}
}
B52ae5f:L52ae5f:{c.instructions+=4;NFSU2_TR(0x52ae5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B52ae62:{NFSU2_TR(0x52ae62);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B52ae69:{NFSU2_TR(0x52ae69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae6a:{NFSU2_TR(0x52ae6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ae6full));
TAIL_STATIC(0x575620u,575);
}
B52ae6f:L52ae6f:{c.instructions+=5;NFSU2_TR(0x52ae6f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52ae72:{NFSU2_TR(0x52ae72);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ae76:{NFSU2_TR(0x52ae76);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52ae78:{NFSU2_TR(0x52ae78);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ae7c:{NFSU2_TR(0x52ae7c);
if(r1(R+518)){{goto L52ae9c;}}
}
B52ae7e:L52ae7e:{c.instructions+=8;NFSU2_TR(0x52ae7e);
u8 U[4];
w4(U+0,u32(0x517600ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae83:{NFSU2_TR(0x52ae83);
u8 U[4];
w4(U+0,u32(0x4fe910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae88:{NFSU2_TR(0x52ae88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae89:{NFSU2_TR(0x52ae89);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ae8c:{NFSU2_TR(0x52ae8c);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae8e:{NFSU2_TR(0x52ae8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ae8f:{NFSU2_TR(0x52ae8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B52ae91:{NFSU2_TR(0x52ae91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ae96ull));
TAIL_STATIC(0x75c461u,75c);
}
B52ae96:L52ae96:{c.instructions+=2;NFSU2_TR(0x52ae96);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ae9a:{NFSU2_TR(0x52ae9a);
{goto L52aea0;}
}
B52ae9c:L52ae9c:{c.instructions+=1;NFSU2_TR(0x52ae9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52aea0:L52aea0:{c.instructions+=4;NFSU2_TR(0x52aea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52aea3:{NFSU2_TR(0x52aea3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B52aea5:{NFSU2_TR(0x52aea5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B52aead:{NFSU2_TR(0x52aead);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L52aeb1;}}
}
B52aeaf:L52aeaf:{c.instructions+=1;NFSU2_TR(0x52aeaf);
__builtin_memmove((R+0),(R+28),4);
}
B52aeb1:L52aeb1:{c.instructions+=2;NFSU2_TR(0x52aeb1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52aeb3:{NFSU2_TR(0x52aeb3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L52aeda;}}
}
B52aeb5:L52aeb5:{c.instructions+=3;NFSU2_TR(0x52aeb5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52aeb7:{NFSU2_TR(0x52aeb7);
__builtin_memmove((R+20),(R+0),4);
}
B52aeb9:{NFSU2_TR(0x52aeb9);
__builtin_memmove((R+16),(R+16),4);
}
B52aec0:L52aec0:{c.instructions+=6;NFSU2_TR(0x52aec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52aec3:{NFSU2_TR(0x52aec3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52aec7:{NFSU2_TR(0x52aec7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B52aec9:{NFSU2_TR(0x52aec9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52aeca:{NFSU2_TR(0x52aeca);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B52aecd:{NFSU2_TR(0x52aecd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52aed2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52ad80u);}goto L52ad80;}
}
B52aed2:L52aed2:{c.instructions+=3;NFSU2_TR(0x52aed2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B52aed5:{NFSU2_TR(0x52aed5);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B52aed6:{NFSU2_TR(0x52aed6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52aec0u);}goto L52aec0;}}
}
B52aed8:L52aed8:{c.instructions+=1;NFSU2_TR(0x52aed8);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B52aeda:L52aeda:{c.instructions+=3;NFSU2_TR(0x52aeda);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52aedd:{NFSU2_TR(0x52aedd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52aedf:{NFSU2_TR(0x52aedf);
if(r1(R+518)){{goto L52aefe;}}
}
B52aee1:L52aee1:{c.instructions+=7;NFSU2_TR(0x52aee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52aee4:{NFSU2_TR(0x52aee4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B52aee7:{NFSU2_TR(0x52aee7);
u8 U[4];
w4(U+0,u32(0x517600ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52aeec:{NFSU2_TR(0x52aeec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52aeed:{NFSU2_TR(0x52aeed);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52aeef:{NFSU2_TR(0x52aeef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52aef0:{NFSU2_TR(0x52aef0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52aef5ull));
TAIL_STATIC(0x75c401u,75c);
}
B52aef5:L52aef5:{c.instructions+=2;NFSU2_TR(0x52aef5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52aef6:{NFSU2_TR(0x52aef6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52aefbull));
TAIL_STATIC(0x575630u,575);
}
B52aefb:L52aefb:{c.instructions+=1;NFSU2_TR(0x52aefb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52aefe:L52aefe:{c.instructions+=3;NFSU2_TR(0x52aefe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52af02:{NFSU2_TR(0x52af02);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af05:{NFSU2_TR(0x52af05);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af08:L52af08:{c.instructions+=8;NFSU2_TR(0x52af08);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52af0c:{NFSU2_TR(0x52af0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52af0d:{NFSU2_TR(0x52af0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52af0e:{NFSU2_TR(0x52af0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52af0f:{NFSU2_TR(0x52af0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af16:{NFSU2_TR(0x52af16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52af17:{NFSU2_TR(0x52af17);
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
B52af1a:{NFSU2_TR(0x52af1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52af20:L52af20:{c.instructions+=30;NFSU2_TR(0x52af20);
__builtin_memmove((R+0),(R+4),4);
}
B52af22:{NFSU2_TR(0x52af22);
u8 U[4];
w4(U+0,u32(0x79b8e0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B52af28:{NFSU2_TR(0x52af28);
w4(R+4,u32(0xabadcafeull));
}
B52af2d:{NFSU2_TR(0x52af2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af30:{NFSU2_TR(0x52af30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af33:{NFSU2_TR(0x52af33);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B52af35:{NFSU2_TR(0x52af35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af38:{NFSU2_TR(0x52af38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af3b:{NFSU2_TR(0x52af3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af3e:{NFSU2_TR(0x52af3e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B52af42:{NFSU2_TR(0x52af42);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af45:{NFSU2_TR(0x52af45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af48:{NFSU2_TR(0x52af48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af4b:{NFSU2_TR(0x52af4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af4e:{NFSU2_TR(0x52af4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af51:{NFSU2_TR(0x52af51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af54:{NFSU2_TR(0x52af54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af57:{NFSU2_TR(0x52af57);
w4(R+8,u32(0x79a9ecull));
}
B52af5c:{NFSU2_TR(0x52af5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af5f:{NFSU2_TR(0x52af5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af62:{NFSU2_TR(0x52af62);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af65:{NFSU2_TR(0x52af65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af68:{NFSU2_TR(0x52af68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af6b:{NFSU2_TR(0x52af6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af6e:{NFSU2_TR(0x52af6e);
__builtin_memmove((R+4),gp(0x7f7cf8),4);
}
B52af74:{NFSU2_TR(0x52af74);
__builtin_memmove((R+8),(R+4),4);
}
B52af76:{NFSU2_TR(0x52af76);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52af77:{NFSU2_TR(0x52af77);
__builtin_memmove(gp(0x7f7cf8),(R+4),4);
}
B52af7d:{NFSU2_TR(0x52af7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52af80:{NFSU2_TR(0x52af80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52af90:L52af90:{c.instructions+=14;NFSU2_TR(0x52af90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52af92:{NFSU2_TR(0x52af92);
u8 U[4];
w4(U+0,u32(0x77744eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52af97:{NFSU2_TR(0x52af97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52af9d:{NFSU2_TR(0x52af9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52af9e:{NFSU2_TR(0x52af9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52afa5:{NFSU2_TR(0x52afa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52afa6:{NFSU2_TR(0x52afa6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52afa7:{NFSU2_TR(0x52afa7);
__builtin_memmove((R+24),(R+4),4);
}
B52afa9:{NFSU2_TR(0x52afa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52afad:{NFSU2_TR(0x52afad);
u8 U[4];
w4(U+0,u32(0x79b8e0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B52afb3:{NFSU2_TR(0x52afb3);
__builtin_memmove((R+4),gp(0x838474),4);
}
B52afb9:{NFSU2_TR(0x52afb9);
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
B52afbb:{NFSU2_TR(0x52afbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52afc3:{NFSU2_TR(0x52afc3);
if(r1(R+518)){{goto L52afca;}}
}
B52afc5:L52afc5:{c.instructions+=3;NFSU2_TR(0x52afc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52afc7:{NFSU2_TR(0x52afc7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52afc8:{NFSU2_TR(0x52afc8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52afcaull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B52afca:L52afca:{c.instructions+=4;NFSU2_TR(0x52afca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52afcd:{NFSU2_TR(0x52afcd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52afce:{NFSU2_TR(0x52afce);
w4(R+4,u32(0x863770ull));
}
B52afd3:{NFSU2_TR(0x52afd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52afd8ull));
TAIL_STATIC(0x517520u,517);
}
B52afd8:L52afd8:{c.instructions+=3;NFSU2_TR(0x52afd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52afdb:{NFSU2_TR(0x52afdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52afdd:{NFSU2_TR(0x52afdd);
if(r1(R+518)){{goto L52afe8;}}
}
B52afdf:L52afdf:{c.instructions+=2;NFSU2_TR(0x52afdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52afe0:{NFSU2_TR(0x52afe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52afe5ull));
TAIL_STATIC(0x575630u,575);
}
B52afe5:L52afe5:{c.instructions+=1;NFSU2_TR(0x52afe5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52afe8:L52afe8:{c.instructions+=4;NFSU2_TR(0x52afe8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52afeb:{NFSU2_TR(0x52afeb);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52aff0:{NFSU2_TR(0x52aff0);
u8 U[4];
w4(U+0,u32(0x79a9ecull));
s4(u32(r4(R+4)),r4(U+0));
}
B52aff6:{NFSU2_TR(0x52aff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52affbull));
TAIL_STATIC(0x511670u,511);
}
B52affb:L52affb:{c.instructions+=2;NFSU2_TR(0x52affb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52affe:{NFSU2_TR(0x52affe);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
TAIL_STATIC(0x52b003u,52b);
}
XIT:NFSU2_TR_EXIT(0x52a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
