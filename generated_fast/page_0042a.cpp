#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40d(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_410(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_415(u8* __restrict R,Cpu& c);
u32 body_418(u8* __restrict R,Cpu& c);
u32 body_419(u8* __restrict R,Cpu& c);
u32 body_41a(u8* __restrict R,Cpu& c);
u32 body_41b(u8* __restrict R,Cpu& c);
u32 body_41c(u8* __restrict R,Cpu& c);
u32 body_41d(u8* __restrict R,Cpu& c);
u32 body_420(u8* __restrict R,Cpu& c);
u32 body_422(u8* __restrict R,Cpu& c);
u32 body_423(u8* __restrict R,Cpu& c);
u32 body_425(u8* __restrict R,Cpu& c);
u32 body_428(u8* __restrict R,Cpu& c);
u32 body_42b(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5de(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_5fb(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x42a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x42a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_42a(u8* __restrict R,Cpu& c);
u32 page_42a(Cpu& c){return body_42a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_42a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x42a004:goto L42a004;
case 0x42a007:c.instructions+=1;goto B42a007;
case 0x42a009:goto L42a009;
case 0x42a00c:c.instructions+=1;goto B42a00c;
case 0x42a00e:goto L42a00e;
case 0x42a011:c.instructions+=1;goto B42a011;
case 0x42a013:goto L42a013;
case 0x42a016:c.instructions+=3;goto B42a016;
case 0x42a01c:c.instructions+=2;goto B42a01c;
case 0x42a01e:c.instructions+=1;goto B42a01e;
case 0x42a020:goto L42a020;
case 0x42a024:c.instructions+=1;goto B42a024;
case 0x42a026:goto L42a026;
case 0x42a028:c.instructions+=1;goto B42a028;
case 0x42a02d:goto L42a02d;
case 0x42a02f:c.instructions+=1;goto B42a02f;
case 0x42a034:goto L42a034;
case 0x42a036:c.instructions+=1;goto B42a036;
case 0x42a03b:goto L42a03b;
case 0x42a03c:c.instructions+=5;goto B42a03c;
case 0x42a03d:c.instructions+=4;goto B42a03d;
case 0x42a03e:c.instructions+=3;goto B42a03e;
case 0x42a03f:c.instructions+=2;goto B42a03f;
case 0x42a040:c.instructions+=1;goto B42a040;
case 0x42a050:goto L42a050;
case 0x42a052:c.instructions+=13;goto B42a052;
case 0x42a057:c.instructions+=12;goto B42a057;
case 0x42a05d:c.instructions+=11;goto B42a05d;
case 0x42a05e:c.instructions+=10;goto B42a05e;
case 0x42a065:c.instructions+=9;goto B42a065;
case 0x42a066:c.instructions+=8;goto B42a066;
case 0x42a067:c.instructions+=7;goto B42a067;
case 0x42a068:c.instructions+=6;goto B42a068;
case 0x42a06a:c.instructions+=5;goto B42a06a;
case 0x42a06c:c.instructions+=4;goto B42a06c;
case 0x42a072:c.instructions+=3;goto B42a072;
case 0x42a075:c.instructions+=2;goto B42a075;
case 0x42a07a:c.instructions+=1;goto B42a07a;
case 0x42a080:goto L42a080;
case 0x42a083:c.instructions+=3;goto B42a083;
case 0x42a086:c.instructions+=2;goto B42a086;
case 0x42a087:c.instructions+=1;goto B42a087;
case 0x42a089:goto L42a089;
case 0x42a08f:c.instructions+=1;goto B42a08f;
case 0x42a094:goto L42a094;
case 0x42a097:c.instructions+=4;goto B42a097;
case 0x42a098:c.instructions+=3;goto B42a098;
case 0x42a099:c.instructions+=2;goto B42a099;
case 0x42a09c:c.instructions+=1;goto B42a09c;
case 0x42a0a1:goto L42a0a1;
case 0x42a0a4:c.instructions+=2;goto B42a0a4;
case 0x42a0a5:c.instructions+=1;goto B42a0a5;
case 0x42a0aa:goto L42a0aa;
case 0x42a0ad:c.instructions+=2;goto B42a0ad;
case 0x42a0ae:c.instructions+=1;goto B42a0ae;
case 0x42a0b3:goto L42a0b3;
case 0x42a0b6:c.instructions+=2;goto B42a0b6;
case 0x42a0b7:c.instructions+=1;goto B42a0b7;
case 0x42a0bc:goto L42a0bc;
case 0x42a0be:c.instructions+=1;goto B42a0be;
case 0x42a0c3:goto L42a0c3;
case 0x42a0c9:c.instructions+=4;goto B42a0c9;
case 0x42a0cb:c.instructions+=3;goto B42a0cb;
case 0x42a0d1:c.instructions+=2;goto B42a0d1;
case 0x42a0d7:c.instructions+=1;goto B42a0d7;
case 0x42a0d9:goto L42a0d9;
case 0x42a0db:c.instructions+=2;goto B42a0db;
case 0x42a0dd:c.instructions+=1;goto B42a0dd;
case 0x42a0df:goto L42a0df;
case 0x42a0e5:c.instructions+=3;goto B42a0e5;
case 0x42a0e6:c.instructions+=2;goto B42a0e6;
case 0x42a0e7:c.instructions+=1;goto B42a0e7;
case 0x42a0ec:goto L42a0ec;
case 0x42a0ee:c.instructions+=5;goto B42a0ee;
case 0x42a0f1:c.instructions+=4;goto B42a0f1;
case 0x42a0f5:c.instructions+=3;goto B42a0f5;
case 0x42a0f7:c.instructions+=2;goto B42a0f7;
case 0x42a0fb:c.instructions+=1;goto B42a0fb;
case 0x42a0fd:goto L42a0fd;
case 0x42a102:c.instructions+=4;goto B42a102;
case 0x42a103:c.instructions+=3;goto B42a103;
case 0x42a105:c.instructions+=2;goto B42a105;
case 0x42a107:c.instructions+=1;goto B42a107;
case 0x42a10c:goto L42a10c;
case 0x42a112:c.instructions+=1;goto B42a112;
case 0x42a114:goto L42a114;
case 0x42a116:goto L42a116;
case 0x42a117:c.instructions+=4;goto B42a117;
case 0x42a11a:c.instructions+=3;goto B42a11a;
case 0x42a122:c.instructions+=2;goto B42a122;
case 0x42a128:c.instructions+=1;goto B42a128;
case 0x42a12d:goto L42a12d;
case 0x42a12f:c.instructions+=2;goto B42a12f;
case 0x42a130:c.instructions+=1;goto B42a130;
case 0x42a132:goto L42a132;
case 0x42a134:c.instructions+=1;goto B42a134;
case 0x42a139:goto L42a139;
case 0x42a13b:goto L42a13b;
case 0x42a141:c.instructions+=1;goto B42a141;
case 0x42a143:goto L42a143;
case 0x42a144:c.instructions+=2;goto B42a144;
case 0x42a149:c.instructions+=1;goto B42a149;
case 0x42a14e:goto L42a14e;
case 0x42a150:c.instructions+=1;goto B42a150;
case 0x42a155:goto L42a155;
case 0x42a158:c.instructions+=6;goto B42a158;
case 0x42a15a:c.instructions+=5;goto B42a15a;
case 0x42a15c:c.instructions+=4;goto B42a15c;
case 0x42a15d:c.instructions+=3;goto B42a15d;
case 0x42a15e:c.instructions+=2;goto B42a15e;
case 0x42a15f:c.instructions+=1;goto B42a15f;
case 0x42a162:goto L42a162;
case 0x42a169:goto L42a169;
case 0x42a16b:c.instructions+=1;goto B42a16b;
case 0x42a170:goto L42a170;
case 0x42a174:c.instructions+=5;goto B42a174;
case 0x42a175:c.instructions+=4;goto B42a175;
case 0x42a176:c.instructions+=3;goto B42a176;
case 0x42a17d:c.instructions+=2;goto B42a17d;
case 0x42a180:c.instructions+=1;goto B42a180;
case 0x42a190:goto L42a190;
case 0x42a191:c.instructions+=10;goto B42a191;
case 0x42a193:c.instructions+=9;goto B42a193;
case 0x42a196:c.instructions+=8;goto B42a196;
case 0x42a199:c.instructions+=7;goto B42a199;
case 0x42a19a:c.instructions+=6;goto B42a19a;
case 0x42a19b:c.instructions+=5;goto B42a19b;
case 0x42a19d:c.instructions+=4;goto B42a19d;
case 0x42a1a0:c.instructions+=3;goto B42a1a0;
case 0x42a1a1:c.instructions+=2;goto B42a1a1;
case 0x42a1a2:c.instructions+=1;goto B42a1a2;
case 0x42a1a7:goto L42a1a7;
case 0x42a1ab:c.instructions+=7;goto B42a1ab;
case 0x42a1ac:c.instructions+=6;goto B42a1ac;
case 0x42a1af:c.instructions+=5;goto B42a1af;
case 0x42a1b3:c.instructions+=4;goto B42a1b3;
case 0x42a1b5:c.instructions+=3;goto B42a1b5;
case 0x42a1b6:c.instructions+=2;goto B42a1b6;
case 0x42a1ba:c.instructions+=1;goto B42a1ba;
case 0x42a1bf:goto L42a1bf;
case 0x42a1c3:c.instructions+=6;goto B42a1c3;
case 0x42a1c7:c.instructions+=5;goto B42a1c7;
case 0x42a1ca:c.instructions+=4;goto B42a1ca;
case 0x42a1cc:c.instructions+=3;goto B42a1cc;
case 0x42a1d2:c.instructions+=2;goto B42a1d2;
case 0x42a1d6:c.instructions+=1;goto B42a1d6;
case 0x42a1dc:goto L42a1dc;
case 0x42a1df:c.instructions+=12;goto B42a1df;
case 0x42a1e0:c.instructions+=11;goto B42a1e0;
case 0x42a1e4:c.instructions+=10;goto B42a1e4;
case 0x42a1e5:c.instructions+=9;goto B42a1e5;
case 0x42a1e9:c.instructions+=8;goto B42a1e9;
case 0x42a1ea:c.instructions+=7;goto B42a1ea;
case 0x42a1ed:c.instructions+=6;goto B42a1ed;
case 0x42a1f0:c.instructions+=5;goto B42a1f0;
case 0x42a1f1:c.instructions+=4;goto B42a1f1;
case 0x42a1f3:c.instructions+=3;goto B42a1f3;
case 0x42a1fb:c.instructions+=2;goto B42a1fb;
case 0x42a203:c.instructions+=1;goto B42a203;
case 0x42a208:goto L42a208;
case 0x42a20b:c.instructions+=8;goto B42a20b;
case 0x42a20d:c.instructions+=7;goto B42a20d;
case 0x42a20f:c.instructions+=6;goto B42a20f;
case 0x42a210:c.instructions+=5;goto B42a210;
case 0x42a212:c.instructions+=4;goto B42a212;
case 0x42a215:c.instructions+=3;goto B42a215;
case 0x42a216:c.instructions+=2;goto B42a216;
case 0x42a218:c.instructions+=1;goto B42a218;
case 0x42a21d:goto L42a21d;
case 0x42a21f:c.instructions+=6;goto B42a21f;
case 0x42a222:c.instructions+=5;goto B42a222;
case 0x42a224:c.instructions+=4;goto B42a224;
case 0x42a228:c.instructions+=3;goto B42a228;
case 0x42a22c:c.instructions+=2;goto B42a22c;
case 0x42a230:c.instructions+=1;goto B42a230;
case 0x42a232:goto L42a232;
case 0x42a235:c.instructions+=2;goto B42a235;
case 0x42a238:c.instructions+=1;goto B42a238;
case 0x42a23a:goto L42a23a;
case 0x42a240:goto L42a240;
case 0x42a246:c.instructions+=7;goto B42a246;
case 0x42a248:c.instructions+=6;goto B42a248;
case 0x42a24c:c.instructions+=5;goto B42a24c;
case 0x42a24e:c.instructions+=4;goto B42a24e;
case 0x42a250:c.instructions+=3;goto B42a250;
case 0x42a252:c.instructions+=2;goto B42a252;
case 0x42a255:c.instructions+=1;goto B42a255;
case 0x42a257:goto L42a257;
case 0x42a25a:c.instructions+=2;goto B42a25a;
case 0x42a25c:c.instructions+=1;goto B42a25c;
case 0x42a25e:goto L42a25e;
case 0x42a262:c.instructions+=2;goto B42a262;
case 0x42a265:c.instructions+=1;goto B42a265;
case 0x42a267:goto L42a267;
case 0x42a26d:goto L42a26d;
case 0x42a271:c.instructions+=5;goto B42a271;
case 0x42a273:c.instructions+=4;goto B42a273;
case 0x42a275:c.instructions+=3;goto B42a275;
case 0x42a277:c.instructions+=2;goto B42a277;
case 0x42a27a:c.instructions+=1;goto B42a27a;
case 0x42a27c:goto L42a27c;
case 0x42a280:c.instructions+=4;goto B42a280;
case 0x42a284:c.instructions+=3;goto B42a284;
case 0x42a285:c.instructions+=2;goto B42a285;
case 0x42a286:c.instructions+=1;goto B42a286;
case 0x42a28b:goto L42a28b;
case 0x42a28f:c.instructions+=3;goto B42a28f;
case 0x42a291:c.instructions+=2;goto B42a291;
case 0x42a294:c.instructions+=1;goto B42a294;
case 0x42a296:goto L42a296;
case 0x42a29a:c.instructions+=1;goto B42a29a;
case 0x42a29f:goto L42a29f;
case 0x42a2a0:c.instructions+=4;goto B42a2a0;
case 0x42a2a1:c.instructions+=3;goto B42a2a1;
case 0x42a2a3:c.instructions+=2;goto B42a2a3;
case 0x42a2a6:c.instructions+=1;goto B42a2a6;
case 0x42a2ab:goto L42a2ab;
case 0x42a2af:c.instructions+=2;goto B42a2af;
case 0x42a2b1:c.instructions+=1;goto B42a2b1;
case 0x42a2b4:goto L42a2b4;
case 0x42a2b8:c.instructions+=5;goto B42a2b8;
case 0x42a2ba:c.instructions+=4;goto B42a2ba;
case 0x42a2bc:c.instructions+=3;goto B42a2bc;
case 0x42a2be:c.instructions+=2;goto B42a2be;
case 0x42a2c1:c.instructions+=1;goto B42a2c1;
case 0x42a2c3:goto L42a2c3;
case 0x42a2c5:c.instructions+=3;goto B42a2c5;
case 0x42a2c7:c.instructions+=2;goto B42a2c7;
case 0x42a2c9:c.instructions+=1;goto B42a2c9;
case 0x42a2cc:goto L42a2cc;
case 0x42a2cf:c.instructions+=2;goto B42a2cf;
case 0x42a2d1:c.instructions+=1;goto B42a2d1;
case 0x42a2d6:goto L42a2d6;
case 0x42a2d9:goto L42a2d9;
case 0x42a2dc:c.instructions+=2;goto B42a2dc;
case 0x42a2de:c.instructions+=1;goto B42a2de;
case 0x42a2e0:goto L42a2e0;
case 0x42a2e3:c.instructions+=7;goto B42a2e3;
case 0x42a2e9:c.instructions+=6;goto B42a2e9;
case 0x42a2ee:c.instructions+=5;goto B42a2ee;
case 0x42a2f2:c.instructions+=4;goto B42a2f2;
case 0x42a2f4:c.instructions+=3;goto B42a2f4;
case 0x42a2f6:c.instructions+=2;goto B42a2f6;
case 0x42a2fa:c.instructions+=1;goto B42a2fa;
case 0x42a2fd:goto L42a2fd;
case 0x42a301:c.instructions+=4;goto B42a301;
case 0x42a305:c.instructions+=3;goto B42a305;
case 0x42a307:c.instructions+=2;goto B42a307;
case 0x42a30a:c.instructions+=1;goto B42a30a;
case 0x42a30c:goto L42a30c;
case 0x42a310:c.instructions+=1;goto B42a310;
case 0x42a312:goto L42a312;
case 0x42a316:c.instructions+=2;goto B42a316;
case 0x42a318:c.instructions+=1;goto B42a318;
case 0x42a31c:goto L42a31c;
case 0x42a320:c.instructions+=13;goto B42a320;
case 0x42a323:c.instructions+=12;goto B42a323;
case 0x42a324:c.instructions+=11;goto B42a324;
case 0x42a327:c.instructions+=10;goto B42a327;
case 0x42a329:c.instructions+=9;goto B42a329;
case 0x42a32b:c.instructions+=8;goto B42a32b;
case 0x42a32e:c.instructions+=7;goto B42a32e;
case 0x42a331:c.instructions+=6;goto B42a331;
case 0x42a332:c.instructions+=5;goto B42a332;
case 0x42a333:c.instructions+=4;goto B42a333;
case 0x42a334:c.instructions+=3;goto B42a334;
case 0x42a335:c.instructions+=2;goto B42a335;
case 0x42a337:c.instructions+=1;goto B42a337;
case 0x42a33c:goto L42a33c;
case 0x42a33d:c.instructions+=5;goto B42a33d;
case 0x42a33e:c.instructions+=4;goto B42a33e;
case 0x42a33f:c.instructions+=3;goto B42a33f;
case 0x42a341:c.instructions+=2;goto B42a341;
case 0x42a342:c.instructions+=1;goto B42a342;
case 0x42a343:goto L42a343;
case 0x42a345:c.instructions+=1;goto B42a345;
case 0x42a34a:goto L42a34a;
case 0x42a34b:c.instructions+=5;goto B42a34b;
case 0x42a34c:c.instructions+=4;goto B42a34c;
case 0x42a34d:c.instructions+=3;goto B42a34d;
case 0x42a34f:c.instructions+=2;goto B42a34f;
case 0x42a350:c.instructions+=1;goto B42a350;
case 0x42a360:goto L42a360;
case 0x42a361:c.instructions+=10;goto B42a361;
case 0x42a363:c.instructions+=9;goto B42a363;
case 0x42a366:c.instructions+=8;goto B42a366;
case 0x42a369:c.instructions+=7;goto B42a369;
case 0x42a36a:c.instructions+=6;goto B42a36a;
case 0x42a36b:c.instructions+=5;goto B42a36b;
case 0x42a36d:c.instructions+=4;goto B42a36d;
case 0x42a370:c.instructions+=3;goto B42a370;
case 0x42a371:c.instructions+=2;goto B42a371;
case 0x42a372:c.instructions+=1;goto B42a372;
case 0x42a377:goto L42a377;
case 0x42a379:c.instructions+=5;goto B42a379;
case 0x42a37f:c.instructions+=4;goto B42a37f;
case 0x42a381:c.instructions+=3;goto B42a381;
case 0x42a383:c.instructions+=2;goto B42a383;
case 0x42a38b:c.instructions+=1;goto B42a38b;
case 0x42a38d:goto L42a38d;
case 0x42a390:c.instructions+=16;goto B42a390;
case 0x42a393:c.instructions+=15;goto B42a393;
case 0x42a399:c.instructions+=14;goto B42a399;
case 0x42a39c:c.instructions+=13;goto B42a39c;
case 0x42a3a2:c.instructions+=12;goto B42a3a2;
case 0x42a3a4:c.instructions+=11;goto B42a3a4;
case 0x42a3a6:c.instructions+=10;goto B42a3a6;
case 0x42a3a8:c.instructions+=9;goto B42a3a8;
case 0x42a3aa:c.instructions+=8;goto B42a3aa;
case 0x42a3ac:c.instructions+=7;goto B42a3ac;
case 0x42a3ae:c.instructions+=6;goto B42a3ae;
case 0x42a3b0:c.instructions+=5;goto B42a3b0;
case 0x42a3b2:c.instructions+=4;goto B42a3b2;
case 0x42a3b8:c.instructions+=3;goto B42a3b8;
case 0x42a3ba:c.instructions+=2;goto B42a3ba;
case 0x42a3bd:c.instructions+=1;goto B42a3bd;
case 0x42a3bf:goto L42a3bf;
case 0x42a3c2:c.instructions+=6;goto B42a3c2;
case 0x42a3c8:c.instructions+=5;goto B42a3c8;
case 0x42a3ca:c.instructions+=4;goto B42a3ca;
case 0x42a3d0:c.instructions+=3;goto B42a3d0;
case 0x42a3d2:c.instructions+=2;goto B42a3d2;
case 0x42a3d5:c.instructions+=1;goto B42a3d5;
case 0x42a3d7:goto L42a3d7;
case 0x42a3dc:c.instructions+=2;goto B42a3dc;
case 0x42a3e2:c.instructions+=1;goto B42a3e2;
case 0x42a3e7:goto L42a3e7;
case 0x42a3ed:c.instructions+=2;goto B42a3ed;
case 0x42a3ef:c.instructions+=1;goto B42a3ef;
case 0x42a3f5:goto L42a3f5;
case 0x42a3f8:c.instructions+=1;goto B42a3f8;
case 0x42a3fe:goto L42a3fe;
case 0x42a402:c.instructions+=5;goto B42a402;
case 0x42a403:c.instructions+=4;goto B42a403;
case 0x42a406:c.instructions+=3;goto B42a406;
case 0x42a40a:c.instructions+=2;goto B42a40a;
case 0x42a40b:c.instructions+=1;goto B42a40b;
case 0x42a410:goto L42a410;
case 0x42a414:c.instructions+=6;goto B42a414;
case 0x42a418:c.instructions+=5;goto B42a418;
case 0x42a41e:c.instructions+=4;goto B42a41e;
case 0x42a420:c.instructions+=3;goto B42a420;
case 0x42a426:c.instructions+=2;goto B42a426;
case 0x42a42a:c.instructions+=1;goto B42a42a;
case 0x42a430:goto L42a430;
case 0x42a433:c.instructions+=11;goto B42a433;
case 0x42a434:c.instructions+=10;goto B42a434;
case 0x42a438:c.instructions+=9;goto B42a438;
case 0x42a439:c.instructions+=8;goto B42a439;
case 0x42a43d:c.instructions+=7;goto B42a43d;
case 0x42a43e:c.instructions+=6;goto B42a43e;
case 0x42a444:c.instructions+=5;goto B42a444;
case 0x42a445:c.instructions+=4;goto B42a445;
case 0x42a447:c.instructions+=3;goto B42a447;
case 0x42a44f:c.instructions+=2;goto B42a44f;
case 0x42a457:c.instructions+=1;goto B42a457;
case 0x42a45c:goto L42a45c;
case 0x42a45f:c.instructions+=8;goto B42a45f;
case 0x42a461:c.instructions+=7;goto B42a461;
case 0x42a463:c.instructions+=6;goto B42a463;
case 0x42a464:c.instructions+=5;goto B42a464;
case 0x42a466:c.instructions+=4;goto B42a466;
case 0x42a469:c.instructions+=3;goto B42a469;
case 0x42a46a:c.instructions+=2;goto B42a46a;
case 0x42a46c:c.instructions+=1;goto B42a46c;
case 0x42a471:goto L42a471;
case 0x42a478:c.instructions+=4;goto B42a478;
case 0x42a47c:c.instructions+=3;goto B42a47c;
case 0x42a47f:c.instructions+=2;goto B42a47f;
case 0x42a481:c.instructions+=1;goto B42a481;
case 0x42a483:goto L42a483;
case 0x42a486:c.instructions+=2;goto B42a486;
case 0x42a489:c.instructions+=1;goto B42a489;
case 0x42a48b:goto L42a48b;
case 0x42a491:goto L42a491;
case 0x42a497:c.instructions+=7;goto B42a497;
case 0x42a499:c.instructions+=6;goto B42a499;
case 0x42a49d:c.instructions+=5;goto B42a49d;
case 0x42a49f:c.instructions+=4;goto B42a49f;
case 0x42a4a1:c.instructions+=3;goto B42a4a1;
case 0x42a4a3:c.instructions+=2;goto B42a4a3;
case 0x42a4a6:c.instructions+=1;goto B42a4a6;
case 0x42a4a8:goto L42a4a8;
case 0x42a4ab:c.instructions+=2;goto B42a4ab;
case 0x42a4ad:c.instructions+=1;goto B42a4ad;
case 0x42a4af:goto L42a4af;
case 0x42a4b3:c.instructions+=2;goto B42a4b3;
case 0x42a4b6:c.instructions+=1;goto B42a4b6;
case 0x42a4b8:goto L42a4b8;
case 0x42a4be:goto L42a4be;
case 0x42a4c2:c.instructions+=5;goto B42a4c2;
case 0x42a4c4:c.instructions+=4;goto B42a4c4;
case 0x42a4c6:c.instructions+=3;goto B42a4c6;
case 0x42a4c8:c.instructions+=2;goto B42a4c8;
case 0x42a4cb:c.instructions+=1;goto B42a4cb;
case 0x42a4cd:goto L42a4cd;
case 0x42a4d1:c.instructions+=3;goto B42a4d1;
case 0x42a4d2:c.instructions+=2;goto B42a4d2;
case 0x42a4d3:c.instructions+=1;goto B42a4d3;
case 0x42a4d8:goto L42a4d8;
case 0x42a4dc:c.instructions+=3;goto B42a4dc;
case 0x42a4de:c.instructions+=2;goto B42a4de;
case 0x42a4e1:c.instructions+=1;goto B42a4e1;
case 0x42a4e3:goto L42a4e3;
case 0x42a4e5:goto L42a4e5;
case 0x42a4e8:c.instructions+=8;goto B42a4e8;
case 0x42a4ec:c.instructions+=7;goto B42a4ec;
case 0x42a4ed:c.instructions+=6;goto B42a4ed;
case 0x42a4f0:c.instructions+=5;goto B42a4f0;
case 0x42a4f2:c.instructions+=4;goto B42a4f2;
case 0x42a4f3:c.instructions+=3;goto B42a4f3;
case 0x42a4f9:c.instructions+=2;goto B42a4f9;
case 0x42a4fd:c.instructions+=1;goto B42a4fd;
case 0x42a502:goto L42a502;
case 0x42a508:c.instructions+=5;goto B42a508;
case 0x42a50c:c.instructions+=4;goto B42a50c;
case 0x42a50f:c.instructions+=3;goto B42a50f;
case 0x42a515:c.instructions+=2;goto B42a515;
case 0x42a51b:c.instructions+=1;goto B42a51b;
case 0x42a520:goto L42a520;
case 0x42a528:c.instructions+=1;goto B42a528;
case 0x42a52a:goto L42a52a;
case 0x42a530:c.instructions+=1;goto B42a530;
case 0x42a532:goto L42a532;
case 0x42a534:goto L42a534;
case 0x42a53a:c.instructions+=2;goto B42a53a;
case 0x42a53c:c.instructions+=1;goto B42a53c;
case 0x42a53e:goto L42a53e;
case 0x42a541:c.instructions+=6;goto B42a541;
case 0x42a547:c.instructions+=5;goto B42a547;
case 0x42a54d:c.instructions+=4;goto B42a54d;
case 0x42a553:c.instructions+=3;goto B42a553;
case 0x42a555:c.instructions+=2;goto B42a555;
case 0x42a558:c.instructions+=1;goto B42a558;
case 0x42a55a:goto L42a55a;
case 0x42a55c:c.instructions+=1;goto B42a55c;
case 0x42a562:goto L42a562;
case 0x42a568:c.instructions+=15;goto B42a568;
case 0x42a56e:c.instructions+=14;goto B42a56e;
case 0x42a570:c.instructions+=13;goto B42a570;
case 0x42a572:c.instructions+=12;goto B42a572;
case 0x42a573:c.instructions+=11;goto B42a573;
case 0x42a575:c.instructions+=10;goto B42a575;
case 0x42a578:c.instructions+=9;goto B42a578;
case 0x42a57b:c.instructions+=8;goto B42a57b;
case 0x42a57d:c.instructions+=7;goto B42a57d;
case 0x42a57e:c.instructions+=6;goto B42a57e;
case 0x42a57f:c.instructions+=5;goto B42a57f;
case 0x42a583:c.instructions+=4;goto B42a583;
case 0x42a584:c.instructions+=3;goto B42a584;
case 0x42a585:c.instructions+=2;goto B42a585;
case 0x42a58b:c.instructions+=1;goto B42a58b;
case 0x42a590:goto L42a590;
case 0x42a595:c.instructions+=1;goto B42a595;
case 0x42a59a:goto L42a59a;
case 0x42a5a4:c.instructions+=6;goto B42a5a4;
case 0x42a5a5:c.instructions+=5;goto B42a5a5;
case 0x42a5a6:c.instructions+=4;goto B42a5a6;
case 0x42a5a7:c.instructions+=3;goto B42a5a7;
case 0x42a5a9:c.instructions+=2;goto B42a5a9;
case 0x42a5aa:c.instructions+=1;goto B42a5aa;
case 0x42a5ab:goto L42a5ab;
case 0x42a5ad:c.instructions+=1;goto B42a5ad;
case 0x42a5b2:goto L42a5b2;
case 0x42a5b8:c.instructions+=1;goto B42a5b8;
case 0x42a5bd:goto L42a5bd;
case 0x42a5be:c.instructions+=5;goto B42a5be;
case 0x42a5bf:c.instructions+=4;goto B42a5bf;
case 0x42a5c0:c.instructions+=3;goto B42a5c0;
case 0x42a5c2:c.instructions+=2;goto B42a5c2;
case 0x42a5c3:c.instructions+=1;goto B42a5c3;
case 0x42a5c4:goto L42a5c4;
case 0x42a5ca:c.instructions+=6;goto B42a5ca;
case 0x42a5cb:c.instructions+=5;goto B42a5cb;
case 0x42a5cc:c.instructions+=4;goto B42a5cc;
case 0x42a5cd:c.instructions+=3;goto B42a5cd;
case 0x42a5cf:c.instructions+=2;goto B42a5cf;
case 0x42a5d0:c.instructions+=1;goto B42a5d0;
case 0x42a5e0:goto L42a5e0;
case 0x42a5e3:c.instructions+=5;goto B42a5e3;
case 0x42a5e9:c.instructions+=4;goto B42a5e9;
case 0x42a5eb:c.instructions+=3;goto B42a5eb;
case 0x42a5ed:c.instructions+=2;goto B42a5ed;
case 0x42a5f1:c.instructions+=1;goto B42a5f1;
case 0x42a5f3:goto L42a5f3;
case 0x42a5f5:goto L42a5f5;
case 0x42a5fb:c.instructions+=2;goto B42a5fb;
case 0x42a5fd:c.instructions+=1;goto B42a5fd;
case 0x42a5ff:goto L42a5ff;
case 0x42a601:goto L42a601;
case 0x42a607:c.instructions+=2;goto B42a607;
case 0x42a609:c.instructions+=1;goto B42a609;
case 0x42a60b:goto L42a60b;
case 0x42a60d:goto L42a60d;
case 0x42a613:c.instructions+=8;goto B42a613;
case 0x42a615:c.instructions+=7;goto B42a615;
case 0x42a619:c.instructions+=6;goto B42a619;
case 0x42a61d:c.instructions+=5;goto B42a61d;
case 0x42a623:c.instructions+=4;goto B42a623;
case 0x42a629:c.instructions+=3;goto B42a629;
case 0x42a62b:c.instructions+=2;goto B42a62b;
case 0x42a62e:c.instructions+=1;goto B42a62e;
case 0x42a634:goto L42a634;
case 0x42a635:c.instructions+=7;goto B42a635;
case 0x42a636:c.instructions+=6;goto B42a636;
case 0x42a63c:c.instructions+=5;goto B42a63c;
case 0x42a63d:c.instructions+=4;goto B42a63d;
case 0x42a645:c.instructions+=3;goto B42a645;
case 0x42a649:c.instructions+=2;goto B42a649;
case 0x42a64a:c.instructions+=1;goto B42a64a;
case 0x42a650:goto L42a650;
case 0x42a652:c.instructions+=3;goto B42a652;
case 0x42a654:c.instructions+=2;goto B42a654;
case 0x42a658:c.instructions+=1;goto B42a658;
case 0x42a65e:goto L42a65e;
case 0x42a663:goto L42a663;
case 0x42a665:c.instructions+=1;goto B42a665;
case 0x42a66b:goto L42a66b;
case 0x42a670:c.instructions+=3;goto B42a670;
case 0x42a673:c.instructions+=2;goto B42a673;
case 0x42a675:c.instructions+=1;goto B42a675;
case 0x42a67a:goto L42a67a;
case 0x42a67c:c.instructions+=1;goto B42a67c;
case 0x42a681:goto L42a681;
case 0x42a684:c.instructions+=15;goto B42a684;
case 0x42a687:c.instructions+=14;goto B42a687;
case 0x42a689:c.instructions+=13;goto B42a689;
case 0x42a68c:c.instructions+=12;goto B42a68c;
case 0x42a690:c.instructions+=11;goto B42a690;
case 0x42a694:c.instructions+=10;goto B42a694;
case 0x42a69a:c.instructions+=9;goto B42a69a;
case 0x42a69c:c.instructions+=8;goto B42a69c;
case 0x42a69d:c.instructions+=7;goto B42a69d;
case 0x42a69e:c.instructions+=6;goto B42a69e;
case 0x42a69f:c.instructions+=5;goto B42a69f;
case 0x42a6a3:c.instructions+=4;goto B42a6a3;
case 0x42a6a5:c.instructions+=3;goto B42a6a5;
case 0x42a6a6:c.instructions+=2;goto B42a6a6;
case 0x42a6a8:c.instructions+=1;goto B42a6a8;
case 0x42a6ad:goto L42a6ad;
case 0x42a6b3:c.instructions+=4;goto B42a6b3;
case 0x42a6b6:c.instructions+=3;goto B42a6b6;
case 0x42a6b9:c.instructions+=2;goto B42a6b9;
case 0x42a6bd:c.instructions+=1;goto B42a6bd;
case 0x42a6c3:goto L42a6c3;
case 0x42a6c7:c.instructions+=2;goto B42a6c7;
case 0x42a6c9:c.instructions+=1;goto B42a6c9;
case 0x42a6cf:goto L42a6cf;
case 0x42a6d3:c.instructions+=4;goto B42a6d3;
case 0x42a6d9:c.instructions+=3;goto B42a6d9;
case 0x42a6db:c.instructions+=2;goto B42a6db;
case 0x42a6de:c.instructions+=1;goto B42a6de;
case 0x42a6e4:goto L42a6e4;
case 0x42a6e8:c.instructions+=7;goto B42a6e8;
case 0x42a6ec:c.instructions+=6;goto B42a6ec;
case 0x42a6f2:c.instructions+=5;goto B42a6f2;
case 0x42a6f3:c.instructions+=4;goto B42a6f3;
case 0x42a6f7:c.instructions+=3;goto B42a6f7;
case 0x42a6f9:c.instructions+=2;goto B42a6f9;
case 0x42a6fd:c.instructions+=1;goto B42a6fd;
case 0x42a702:goto L42a702;
case 0x42a708:c.instructions+=3;goto B42a708;
case 0x42a70a:c.instructions+=2;goto B42a70a;
case 0x42a70d:c.instructions+=1;goto B42a70d;
case 0x42a70f:goto L42a70f;
case 0x42a712:c.instructions+=2;goto B42a712;
case 0x42a715:c.instructions+=1;goto B42a715;
case 0x42a717:goto L42a717;
case 0x42a71b:c.instructions+=7;goto B42a71b;
case 0x42a721:c.instructions+=6;goto B42a721;
case 0x42a727:c.instructions+=5;goto B42a727;
case 0x42a728:c.instructions+=4;goto B42a728;
case 0x42a729:c.instructions+=3;goto B42a729;
case 0x42a72a:c.instructions+=2;goto B42a72a;
case 0x42a72b:c.instructions+=1;goto B42a72b;
case 0x42a730:goto L42a730;
case 0x42a733:c.instructions+=2;goto B42a733;
case 0x42a735:c.instructions+=1;goto B42a735;
case 0x42a737:goto L42a737;
case 0x42a73c:c.instructions+=8;goto B42a73c;
case 0x42a73e:c.instructions+=7;goto B42a73e;
case 0x42a73f:c.instructions+=6;goto B42a73f;
case 0x42a740:c.instructions+=5;goto B42a740;
case 0x42a741:c.instructions+=4;goto B42a741;
case 0x42a745:c.instructions+=3;goto B42a745;
case 0x42a747:c.instructions+=2;goto B42a747;
case 0x42a748:c.instructions+=1;goto B42a748;
case 0x42a74d:goto L42a74d;
case 0x42a753:c.instructions+=5;goto B42a753;
case 0x42a757:c.instructions+=4;goto B42a757;
case 0x42a75a:c.instructions+=3;goto B42a75a;
case 0x42a75d:c.instructions+=2;goto B42a75d;
case 0x42a761:c.instructions+=1;goto B42a761;
case 0x42a767:goto L42a767;
case 0x42a76b:c.instructions+=7;goto B42a76b;
case 0x42a76f:c.instructions+=6;goto B42a76f;
case 0x42a770:c.instructions+=5;goto B42a770;
case 0x42a773:c.instructions+=4;goto B42a773;
case 0x42a776:c.instructions+=3;goto B42a776;
case 0x42a77a:c.instructions+=2;goto B42a77a;
case 0x42a77e:c.instructions+=1;goto B42a77e;
case 0x42a784:goto L42a784;
case 0x42a785:c.instructions+=5;goto B42a785;
case 0x42a786:c.instructions+=4;goto B42a786;
case 0x42a787:c.instructions+=3;goto B42a787;
case 0x42a788:c.instructions+=2;goto B42a788;
case 0x42a78b:c.instructions+=1;goto B42a78b;
case 0x42a78c:goto L42a78c;
case 0x42a790:c.instructions+=2;goto B42a790;
case 0x42a792:c.instructions+=1;goto B42a792;
case 0x42a797:goto L42a797;
case 0x42a79b:c.instructions+=4;goto B42a79b;
case 0x42a79e:c.instructions+=3;goto B42a79e;
case 0x42a7a1:c.instructions+=2;goto B42a7a1;
case 0x42a7a4:c.instructions+=1;goto B42a7a4;
case 0x42a7a9:goto L42a7a9;
case 0x42a7ab:c.instructions+=11;goto B42a7ab;
case 0x42a7ad:c.instructions+=10;goto B42a7ad;
case 0x42a7b0:c.instructions+=9;goto B42a7b0;
case 0x42a7b8:c.instructions+=8;goto B42a7b8;
case 0x42a7bd:c.instructions+=7;goto B42a7bd;
case 0x42a7c0:c.instructions+=6;goto B42a7c0;
case 0x42a7c2:c.instructions+=5;goto B42a7c2;
case 0x42a7c6:c.instructions+=4;goto B42a7c6;
case 0x42a7ca:c.instructions+=3;goto B42a7ca;
case 0x42a7d0:c.instructions+=2;goto B42a7d0;
case 0x42a7d4:c.instructions+=1;goto B42a7d4;
case 0x42a7d6:goto L42a7d6;
case 0x42a7de:goto L42a7de;
case 0x42a7e2:c.instructions+=12;goto B42a7e2;
case 0x42a7e6:c.instructions+=11;goto B42a7e6;
case 0x42a7ea:c.instructions+=10;goto B42a7ea;
case 0x42a7ec:c.instructions+=9;goto B42a7ec;
case 0x42a7ee:c.instructions+=8;goto B42a7ee;
case 0x42a7f0:c.instructions+=7;goto B42a7f0;
case 0x42a7f1:c.instructions+=6;goto B42a7f1;
case 0x42a7f3:c.instructions+=5;goto B42a7f3;
case 0x42a7f4:c.instructions+=4;goto B42a7f4;
case 0x42a7f5:c.instructions+=3;goto B42a7f5;
case 0x42a7f6:c.instructions+=2;goto B42a7f6;
case 0x42a7fa:c.instructions+=1;goto B42a7fa;
case 0x42a7ff:goto L42a7ff;
case 0x42a804:c.instructions+=10;goto B42a804;
case 0x42a80a:c.instructions+=9;goto B42a80a;
case 0x42a80b:c.instructions+=8;goto B42a80b;
case 0x42a80d:c.instructions+=7;goto B42a80d;
case 0x42a80e:c.instructions+=6;goto B42a80e;
case 0x42a810:c.instructions+=5;goto B42a810;
case 0x42a813:c.instructions+=4;goto B42a813;
case 0x42a814:c.instructions+=3;goto B42a814;
case 0x42a816:c.instructions+=2;goto B42a816;
case 0x42a819:c.instructions+=1;goto B42a819;
case 0x42a81e:goto L42a81e;
case 0x42a822:c.instructions+=13;goto B42a822;
case 0x42a828:c.instructions+=12;goto B42a828;
case 0x42a82c:c.instructions+=11;goto B42a82c;
case 0x42a832:c.instructions+=10;goto B42a832;
case 0x42a835:c.instructions+=9;goto B42a835;
case 0x42a836:c.instructions+=8;goto B42a836;
case 0x42a839:c.instructions+=7;goto B42a839;
case 0x42a83a:c.instructions+=6;goto B42a83a;
case 0x42a83d:c.instructions+=5;goto B42a83d;
case 0x42a83f:c.instructions+=4;goto B42a83f;
case 0x42a840:c.instructions+=3;goto B42a840;
case 0x42a84a:c.instructions+=2;goto B42a84a;
case 0x42a851:c.instructions+=1;goto B42a851;
case 0x42a852:goto L42a852;
case 0x42a855:c.instructions+=1;goto B42a855;
case 0x42a860:goto L42a860;
case 0x42a865:c.instructions+=9;goto B42a865;
case 0x42a868:c.instructions+=8;goto B42a868;
case 0x42a869:c.instructions+=7;goto B42a869;
case 0x42a86c:c.instructions+=6;goto B42a86c;
case 0x42a86d:c.instructions+=5;goto B42a86d;
case 0x42a86e:c.instructions+=4;goto B42a86e;
case 0x42a86f:c.instructions+=3;goto B42a86f;
case 0x42a875:c.instructions+=2;goto B42a875;
case 0x42a87a:c.instructions+=1;goto B42a87a;
case 0x42a880:goto L42a880;
case 0x42a883:c.instructions+=2;goto B42a883;
case 0x42a885:c.instructions+=1;goto B42a885;
case 0x42a88b:goto L42a88b;
case 0x42a88d:c.instructions+=1;goto B42a88d;
case 0x42a892:goto L42a892;
case 0x42a894:c.instructions+=1;goto B42a894;
case 0x42a89a:goto L42a89a;
case 0x42a89d:c.instructions+=9;goto B42a89d;
case 0x42a8a1:c.instructions+=8;goto B42a8a1;
case 0x42a8a2:c.instructions+=7;goto B42a8a2;
case 0x42a8a6:c.instructions+=6;goto B42a8a6;
case 0x42a8a7:c.instructions+=5;goto B42a8a7;
case 0x42a8a8:c.instructions+=4;goto B42a8a8;
case 0x42a8aa:c.instructions+=3;goto B42a8aa;
case 0x42a8b2:c.instructions+=2;goto B42a8b2;
case 0x42a8ba:c.instructions+=1;goto B42a8ba;
case 0x42a8bf:goto L42a8bf;
case 0x42a8c3:c.instructions+=5;goto B42a8c3;
case 0x42a8c5:c.instructions+=4;goto B42a8c5;
case 0x42a8c7:c.instructions+=3;goto B42a8c7;
case 0x42a8ca:c.instructions+=2;goto B42a8ca;
case 0x42a8d2:c.instructions+=1;goto B42a8d2;
case 0x42a8d4:goto L42a8d4;
case 0x42a8da:c.instructions+=5;goto B42a8da;
case 0x42a8e0:c.instructions+=4;goto B42a8e0;
case 0x42a8e2:c.instructions+=3;goto B42a8e2;
case 0x42a8e4:c.instructions+=2;goto B42a8e4;
case 0x42a8e7:c.instructions+=1;goto B42a8e7;
case 0x42a8e9:goto L42a8e9;
case 0x42a8ef:goto L42a8ef;
case 0x42a8f2:c.instructions+=15;goto B42a8f2;
case 0x42a8f7:c.instructions+=14;goto B42a8f7;
case 0x42a8fd:c.instructions+=13;goto B42a8fd;
case 0x42a8ff:c.instructions+=12;goto B42a8ff;
case 0x42a903:c.instructions+=11;goto B42a903;
case 0x42a907:c.instructions+=10;goto B42a907;
case 0x42a908:c.instructions+=9;goto B42a908;
case 0x42a90c:c.instructions+=8;goto B42a90c;
case 0x42a912:c.instructions+=7;goto B42a912;
case 0x42a918:c.instructions+=6;goto B42a918;
case 0x42a91b:c.instructions+=5;goto B42a91b;
case 0x42a91c:c.instructions+=4;goto B42a91c;
case 0x42a91d:c.instructions+=3;goto B42a91d;
case 0x42a91e:c.instructions+=2;goto B42a91e;
case 0x42a920:c.instructions+=1;goto B42a920;
case 0x42a925:goto L42a925;
case 0x42a928:c.instructions+=2;goto B42a928;
case 0x42a929:c.instructions+=1;goto B42a929;
case 0x42a92f:goto L42a92f;
case 0x42a930:c.instructions+=5;goto B42a930;
case 0x42a931:c.instructions+=4;goto B42a931;
case 0x42a932:c.instructions+=3;goto B42a932;
case 0x42a933:c.instructions+=2;goto B42a933;
case 0x42a936:c.instructions+=1;goto B42a936;
case 0x42a937:goto L42a937;
case 0x42a93d:c.instructions+=3;goto B42a93d;
case 0x42a93f:c.instructions+=2;goto B42a93f;
case 0x42a942:c.instructions+=1;goto B42a942;
case 0x42a944:goto L42a944;
case 0x42a947:c.instructions+=1;goto B42a947;
case 0x42a949:goto L42a949;
case 0x42a94d:c.instructions+=4;goto B42a94d;
case 0x42a953:c.instructions+=3;goto B42a953;
case 0x42a955:c.instructions+=2;goto B42a955;
case 0x42a958:c.instructions+=1;goto B42a958;
case 0x42a95a:goto L42a95a;
case 0x42a960:c.instructions+=4;goto B42a960;
case 0x42a966:c.instructions+=3;goto B42a966;
case 0x42a968:c.instructions+=2;goto B42a968;
case 0x42a96c:c.instructions+=1;goto B42a96c;
case 0x42a96e:goto L42a96e;
case 0x42a973:c.instructions+=3;goto B42a973;
case 0x42a977:c.instructions+=2;goto B42a977;
case 0x42a97d:c.instructions+=1;goto B42a97d;
case 0x42a982:goto L42a982;
case 0x42a985:c.instructions+=1;goto B42a985;
case 0x42a987:goto L42a987;
case 0x42a98d:c.instructions+=5;goto B42a98d;
case 0x42a98f:c.instructions+=4;goto B42a98f;
case 0x42a993:c.instructions+=3;goto B42a993;
case 0x42a995:c.instructions+=2;goto B42a995;
case 0x42a998:c.instructions+=1;goto B42a998;
case 0x42a99a:goto L42a99a;
case 0x42a9a0:c.instructions+=2;goto B42a9a0;
case 0x42a9a4:c.instructions+=1;goto B42a9a4;
case 0x42a9a9:goto L42a9a9;
case 0x42a9ad:c.instructions+=4;goto B42a9ad;
case 0x42a9b3:c.instructions+=3;goto B42a9b3;
case 0x42a9b5:c.instructions+=2;goto B42a9b5;
case 0x42a9b8:c.instructions+=1;goto B42a9b8;
case 0x42a9ba:goto L42a9ba;
case 0x42a9c0:c.instructions+=3;goto B42a9c0;
case 0x42a9c4:c.instructions+=2;goto B42a9c4;
case 0x42a9ca:c.instructions+=1;goto B42a9ca;
case 0x42a9cf:goto L42a9cf;
case 0x42a9d5:c.instructions+=3;goto B42a9d5;
case 0x42a9d7:c.instructions+=2;goto B42a9d7;
case 0x42a9db:c.instructions+=1;goto B42a9db;
case 0x42a9e0:goto L42a9e0;
case 0x42a9e1:c.instructions+=3;goto B42a9e1;
case 0x42a9e5:c.instructions+=2;goto B42a9e5;
case 0x42a9e7:c.instructions+=1;goto B42a9e7;
case 0x42a9ec:goto L42a9ec;
case 0x42a9ee:c.instructions+=1;goto B42a9ee;
case 0x42a9f0:goto L42a9f0;
case 0x42a9f3:c.instructions+=2;goto B42a9f3;
case 0x42a9f6:c.instructions+=1;goto B42a9f6;
case 0x42a9f8:goto L42a9f8;
case 0x42a9fb:c.instructions+=1;goto B42a9fb;
case 0x42a9fd:goto L42a9fd;
case 0x42aa00:c.instructions+=1;goto B42aa00;
case 0x42aa02:goto L42aa02;
case 0x42aa06:c.instructions+=3;goto B42aa06;
case 0x42aa09:c.instructions+=2;goto B42aa09;
case 0x42aa0a:c.instructions+=1;goto B42aa0a;
case 0x42aa0f:goto L42aa0f;
case 0x42aa10:c.instructions+=1;goto B42aa10;
case 0x42aa20:goto L42aa20;
case 0x42aa21:c.instructions+=2;goto B42aa21;
case 0x42aa23:c.instructions+=1;goto B42aa23;
case 0x42aa28:goto L42aa28;
case 0x42aa2c:c.instructions+=3;goto B42aa2c;
case 0x42aa2d:c.instructions+=2;goto B42aa2d;
case 0x42aa30:c.instructions+=1;goto B42aa30;
case 0x42aa36:goto L42aa36;
case 0x42aa3d:goto L42aa3d;
case 0x42aa42:c.instructions+=2;goto B42aa42;
case 0x42aa43:c.instructions+=1;goto B42aa43;
case 0x42aa48:goto L42aa48;
case 0x42aa4b:c.instructions+=2;goto B42aa4b;
case 0x42aa4d:c.instructions+=1;goto B42aa4d;
case 0x42aa53:goto L42aa53;
case 0x42aa58:c.instructions+=2;goto B42aa58;
case 0x42aa5a:c.instructions+=1;goto B42aa5a;
case 0x42aa5f:goto L42aa5f;
case 0x42aa64:goto L42aa64;
case 0x42aa6a:c.instructions+=2;goto B42aa6a;
case 0x42aa6b:c.instructions+=1;goto B42aa6b;
case 0x42aa70:goto L42aa70;
case 0x42aa73:c.instructions+=2;goto B42aa73;
case 0x42aa75:c.instructions+=1;goto B42aa75;
case 0x42aa7b:goto L42aa7b;
case 0x42aa80:c.instructions+=2;goto B42aa80;
case 0x42aa82:c.instructions+=1;goto B42aa82;
case 0x42aa87:goto L42aa87;
case 0x42aa8c:goto L42aa8c;
case 0x42aa92:c.instructions+=2;goto B42aa92;
case 0x42aa93:c.instructions+=1;goto B42aa93;
case 0x42aa98:goto L42aa98;
case 0x42aa9b:c.instructions+=2;goto B42aa9b;
case 0x42aa9d:c.instructions+=1;goto B42aa9d;
case 0x42aaa3:goto L42aaa3;
case 0x42aaa8:c.instructions+=2;goto B42aaa8;
case 0x42aaaa:c.instructions+=1;goto B42aaaa;
case 0x42aaaf:goto L42aaaf;
case 0x42aab4:goto L42aab4;
case 0x42aab9:c.instructions+=2;goto B42aab9;
case 0x42aaba:c.instructions+=1;goto B42aaba;
case 0x42aabf:goto L42aabf;
case 0x42aac2:c.instructions+=2;goto B42aac2;
case 0x42aac4:c.instructions+=1;goto B42aac4;
case 0x42aac6:goto L42aac6;
case 0x42aacb:c.instructions+=2;goto B42aacb;
case 0x42aacd:c.instructions+=1;goto B42aacd;
case 0x42aad2:goto L42aad2;
case 0x42aad4:goto L42aad4;
case 0x42aada:c.instructions+=2;goto B42aada;
case 0x42aadb:c.instructions+=1;goto B42aadb;
case 0x42aae0:goto L42aae0;
case 0x42aae3:c.instructions+=2;goto B42aae3;
case 0x42aae5:c.instructions+=1;goto B42aae5;
case 0x42aae7:goto L42aae7;
case 0x42aaec:c.instructions+=2;goto B42aaec;
case 0x42aaee:c.instructions+=1;goto B42aaee;
case 0x42aaf3:goto L42aaf3;
case 0x42aaf5:goto L42aaf5;
case 0x42aafb:c.instructions+=2;goto B42aafb;
case 0x42aafc:c.instructions+=1;goto B42aafc;
case 0x42ab01:goto L42ab01;
case 0x42ab04:c.instructions+=2;goto B42ab04;
case 0x42ab06:c.instructions+=1;goto B42ab06;
case 0x42ab08:goto L42ab08;
case 0x42ab0d:c.instructions+=2;goto B42ab0d;
case 0x42ab0f:c.instructions+=1;goto B42ab0f;
case 0x42ab14:goto L42ab14;
case 0x42ab16:goto L42ab16;
case 0x42ab1b:c.instructions+=2;goto B42ab1b;
case 0x42ab1c:c.instructions+=1;goto B42ab1c;
case 0x42ab21:goto L42ab21;
case 0x42ab24:c.instructions+=2;goto B42ab24;
case 0x42ab26:c.instructions+=1;goto B42ab26;
case 0x42ab28:goto L42ab28;
case 0x42ab2a:c.instructions+=3;goto B42ab2a;
case 0x42ab2f:c.instructions+=2;goto B42ab2f;
case 0x42ab31:c.instructions+=1;goto B42ab31;
case 0x42ab36:goto L42ab36;
case 0x42ab38:goto L42ab38;
case 0x42ab3a:goto L42ab3a;
case 0x42ab40:goto L42ab40;
case 0x42ab46:c.instructions+=2;goto B42ab46;
case 0x42ab48:c.instructions+=1;goto B42ab48;
case 0x42ab4a:goto L42ab4a;
case 0x42ab50:c.instructions+=3;goto B42ab50;
case 0x42ab51:c.instructions+=2;goto B42ab51;
case 0x42ab52:c.instructions+=1;goto B42ab52;
case 0x42ab57:goto L42ab57;
case 0x42ab59:c.instructions+=3;goto B42ab59;
case 0x42ab5c:c.instructions+=2;goto B42ab5c;
case 0x42ab5e:c.instructions+=1;goto B42ab5e;
case 0x42ab60:goto L42ab60;
case 0x42ab65:c.instructions+=2;goto B42ab65;
case 0x42ab67:c.instructions+=1;goto B42ab67;
case 0x42ab6c:goto L42ab6c;
case 0x42ab73:c.instructions+=5;goto B42ab73;
case 0x42ab79:c.instructions+=4;goto B42ab79;
case 0x42ab7f:c.instructions+=3;goto B42ab7f;
case 0x42ab80:c.instructions+=2;goto B42ab80;
case 0x42ab82:c.instructions+=1;goto B42ab82;
case 0x42ab87:goto L42ab87;
case 0x42ab88:c.instructions+=1;goto B42ab88;
case 0x42ab8b:goto L42ab8b;
case 0x42ab8d:c.instructions+=2;goto B42ab8d;
case 0x42ab93:c.instructions+=1;goto B42ab93;
case 0x42ab94:goto L42ab94;
case 0x42ab96:c.instructions+=1;goto B42ab96;
case 0x42ab9b:goto L42ab9b;
case 0x42ab9c:c.instructions+=1;goto B42ab9c;
case 0x42abd0:goto L42abd0;
case 0x42abd1:c.instructions+=22;goto B42abd1;
case 0x42abd3:c.instructions+=21;goto B42abd3;
case 0x42abd6:c.instructions+=20;goto B42abd6;
case 0x42abd8:c.instructions+=19;goto B42abd8;
case 0x42abdd:c.instructions+=18;goto B42abdd;
case 0x42abe3:c.instructions+=17;goto B42abe3;
case 0x42abe4:c.instructions+=16;goto B42abe4;
case 0x42abeb:c.instructions+=15;goto B42abeb;
case 0x42abf1:c.instructions+=14;goto B42abf1;
case 0x42abf2:c.instructions+=13;goto B42abf2;
case 0x42abf5:c.instructions+=12;goto B42abf5;
case 0x42abf6:c.instructions+=11;goto B42abf6;
case 0x42abf8:c.instructions+=10;goto B42abf8;
case 0x42abfb:c.instructions+=9;goto B42abfb;
case 0x42ac01:c.instructions+=8;goto B42ac01;
case 0x42ac02:c.instructions+=7;goto B42ac02;
case 0x42ac04:c.instructions+=6;goto B42ac04;
case 0x42ac0a:c.instructions+=5;goto B42ac0a;
case 0x42ac10:c.instructions+=4;goto B42ac10;
case 0x42ac13:c.instructions+=3;goto B42ac13;
case 0x42ac15:c.instructions+=2;goto B42ac15;
case 0x42ac19:c.instructions+=1;goto B42ac19;
case 0x42ac1b:goto L42ac1b;
case 0x42ac21:c.instructions+=1;goto B42ac21;
case 0x42ac23:goto L42ac23;
case 0x42ac25:c.instructions+=1;goto B42ac25;
case 0x42ac27:goto L42ac27;
case 0x42ac2b:c.instructions+=1;goto B42ac2b;
case 0x42ac2d:goto L42ac2d;
case 0x42ac2e:c.instructions+=1;goto B42ac2e;
case 0x42ac33:goto L42ac33;
case 0x42ac36:c.instructions+=3;goto B42ac36;
case 0x42ac39:c.instructions+=2;goto B42ac39;
case 0x42ac3a:c.instructions+=1;goto B42ac3a;
case 0x42ac3f:goto L42ac3f;
case 0x42ac40:c.instructions+=2;goto B42ac40;
case 0x42ac42:c.instructions+=1;goto B42ac42;
case 0x42ac47:goto L42ac47;
case 0x42ac48:c.instructions+=2;goto B42ac48;
case 0x42ac4e:c.instructions+=1;goto B42ac4e;
case 0x42ac53:goto L42ac53;
case 0x42ac59:c.instructions+=13;goto B42ac59;
case 0x42ac5c:c.instructions+=12;goto B42ac5c;
case 0x42ac62:c.instructions+=11;goto B42ac62;
case 0x42ac68:c.instructions+=10;goto B42ac68;
case 0x42ac6f:c.instructions+=9;goto B42ac6f;
case 0x42ac76:c.instructions+=8;goto B42ac76;
case 0x42ac79:c.instructions+=7;goto B42ac79;
case 0x42ac7c:c.instructions+=6;goto B42ac7c;
case 0x42ac7f:c.instructions+=5;goto B42ac7f;
case 0x42ac84:c.instructions+=4;goto B42ac84;
case 0x42ac86:c.instructions+=3;goto B42ac86;
case 0x42ac8c:c.instructions+=2;goto B42ac8c;
case 0x42ac90:c.instructions+=1;goto B42ac90;
case 0x42ac96:goto L42ac96;
case 0x42ac9b:c.instructions+=3;goto B42ac9b;
case 0x42ac9d:c.instructions+=2;goto B42ac9d;
case 0x42aca2:c.instructions+=1;goto B42aca2;
case 0x42aca4:goto L42aca4;
case 0x42aca9:c.instructions+=2;goto B42aca9;
case 0x42acab:c.instructions+=1;goto B42acab;
case 0x42acad:goto L42acad;
case 0x42acb1:c.instructions+=1;goto B42acb1;
case 0x42acb3:goto L42acb3;
case 0x42acb8:goto L42acb8;
case 0x42acbd:c.instructions+=8;goto B42acbd;
case 0x42acbe:c.instructions+=7;goto B42acbe;
case 0x42acc0:c.instructions+=6;goto B42acc0;
case 0x42acc5:c.instructions+=5;goto B42acc5;
case 0x42acc8:c.instructions+=4;goto B42acc8;
case 0x42accb:c.instructions+=3;goto B42accb;
case 0x42accd:c.instructions+=2;goto B42accd;
case 0x42accf:c.instructions+=1;goto B42accf;
case 0x42acd1:goto L42acd1;
case 0x42acd3:c.instructions+=2;goto B42acd3;
case 0x42acd7:c.instructions+=1;goto B42acd7;
case 0x42acd9:goto L42acd9;
case 0x42acdb:c.instructions+=1;goto B42acdb;
case 0x42acdd:goto L42acdd;
case 0x42acdf:goto L42acdf;
case 0x42ace5:c.instructions+=9;goto B42ace5;
case 0x42aceb:c.instructions+=8;goto B42aceb;
case 0x42aced:c.instructions+=7;goto B42aced;
case 0x42acef:c.instructions+=6;goto B42acef;
case 0x42acf3:c.instructions+=5;goto B42acf3;
case 0x42acf7:c.instructions+=4;goto B42acf7;
case 0x42acfb:c.instructions+=3;goto B42acfb;
case 0x42ad01:c.instructions+=2;goto B42ad01;
case 0x42ad07:c.instructions+=1;goto B42ad07;
case 0x42ad09:goto L42ad09;
case 0x42ad0c:c.instructions+=1;goto B42ad0c;
case 0x42ad0e:goto L42ad0e;
case 0x42ad10:c.instructions+=1;goto B42ad10;
case 0x42ad16:goto L42ad16;
case 0x42ad1c:c.instructions+=2;goto B42ad1c;
case 0x42ad1e:c.instructions+=1;goto B42ad1e;
case 0x42ad24:goto L42ad24;
case 0x42ad28:c.instructions+=1;goto B42ad28;
case 0x42ad2a:goto L42ad2a;
case 0x42ad2d:c.instructions+=1;goto B42ad2d;
case 0x42ad32:goto L42ad32;
case 0x42ad34:c.instructions+=1;goto B42ad34;
case 0x42ad36:goto L42ad36;
case 0x42ad38:c.instructions+=1;goto B42ad38;
case 0x42ad3d:goto L42ad3d;
case 0x42ad3f:c.instructions+=1;goto B42ad3f;
case 0x42ad41:goto L42ad41;
case 0x42ad43:c.instructions+=2;goto B42ad43;
case 0x42ad45:c.instructions+=1;goto B42ad45;
case 0x42ad4b:goto L42ad4b;
case 0x42ad4d:c.instructions+=1;goto B42ad4d;
case 0x42ad4f:goto L42ad4f;
case 0x42ad52:c.instructions+=2;goto B42ad52;
case 0x42ad55:c.instructions+=1;goto B42ad55;
case 0x42ad5a:goto L42ad5a;
case 0x42ad5c:c.instructions+=2;goto B42ad5c;
case 0x42ad5e:c.instructions+=1;goto B42ad5e;
case 0x42ad64:goto L42ad64;
case 0x42ad6a:c.instructions+=2;goto B42ad6a;
case 0x42ad6c:c.instructions+=1;goto B42ad6c;
case 0x42ad72:goto L42ad72;
case 0x42ad78:c.instructions+=4;goto B42ad78;
case 0x42ad7a:c.instructions+=3;goto B42ad7a;
case 0x42ad7d:c.instructions+=2;goto B42ad7d;
case 0x42ad7e:c.instructions+=1;goto B42ad7e;
case 0x42ad81:goto L42ad81;
case 0x42ad84:c.instructions+=2;goto B42ad84;
case 0x42ad88:c.instructions+=1;goto B42ad88;
case 0x42ad8e:goto L42ad8e;
case 0x42ad94:c.instructions+=2;goto B42ad94;
case 0x42ad96:c.instructions+=1;goto B42ad96;
case 0x42ad99:goto L42ad99;
case 0x42ad9b:c.instructions+=1;goto B42ad9b;
case 0x42ada1:goto L42ada1;
case 0x42ada2:c.instructions+=2;goto B42ada2;
case 0x42ada4:c.instructions+=1;goto B42ada4;
case 0x42ada9:goto L42ada9;
case 0x42adab:c.instructions+=1;goto B42adab;
case 0x42adb1:goto L42adb1;
case 0x42adb7:c.instructions+=4;goto B42adb7;
case 0x42adb9:c.instructions+=3;goto B42adb9;
case 0x42adba:c.instructions+=2;goto B42adba;
case 0x42adbc:c.instructions+=1;goto B42adbc;
case 0x42adc2:goto L42adc2;
case 0x42adc4:c.instructions+=1;goto B42adc4;
case 0x42adc9:goto L42adc9;
case 0x42adce:goto L42adce;
case 0x42add2:c.instructions+=1;goto B42add2;
case 0x42add4:goto L42add4;
case 0x42add7:c.instructions+=1;goto B42add7;
case 0x42add9:goto L42add9;
case 0x42addf:c.instructions+=3;goto B42addf;
case 0x42ade5:c.instructions+=2;goto B42ade5;
case 0x42ade9:c.instructions+=1;goto B42ade9;
case 0x42adeb:goto L42adeb;
case 0x42adec:c.instructions+=2;goto B42adec;
case 0x42adef:c.instructions+=1;goto B42adef;
case 0x42adf0:goto L42adf0;
case 0x42adf2:c.instructions+=9;goto B42adf2;
case 0x42adf4:c.instructions+=8;goto B42adf4;
case 0x42adf7:c.instructions+=7;goto B42adf7;
case 0x42adfd:c.instructions+=6;goto B42adfd;
case 0x42ae01:c.instructions+=5;goto B42ae01;
case 0x42ae05:c.instructions+=4;goto B42ae05;
case 0x42ae0b:c.instructions+=3;goto B42ae0b;
case 0x42ae11:c.instructions+=2;goto B42ae11;
case 0x42ae13:c.instructions+=1;goto B42ae13;
case 0x42ae18:goto L42ae18;
case 0x42ae1e:c.instructions+=4;goto B42ae1e;
case 0x42ae24:c.instructions+=3;goto B42ae24;
case 0x42ae26:c.instructions+=2;goto B42ae26;
case 0x42ae29:c.instructions+=1;goto B42ae29;
case 0x42ae2f:goto L42ae2f;
case 0x42ae35:c.instructions+=8;goto B42ae35;
case 0x42ae3b:c.instructions+=7;goto B42ae3b;
case 0x42ae3e:c.instructions+=6;goto B42ae3e;
case 0x42ae44:c.instructions+=5;goto B42ae44;
case 0x42ae4a:c.instructions+=4;goto B42ae4a;
case 0x42ae4b:c.instructions+=3;goto B42ae4b;
case 0x42ae50:c.instructions+=2;goto B42ae50;
case 0x42ae56:c.instructions+=1;goto B42ae56;
case 0x42ae5b:goto L42ae5b;
case 0x42ae61:c.instructions+=3;goto B42ae61;
case 0x42ae63:c.instructions+=2;goto B42ae63;
case 0x42ae65:c.instructions+=1;goto B42ae65;
case 0x42ae67:goto L42ae67;
case 0x42ae69:c.instructions+=1;goto B42ae69;
case 0x42ae6c:goto L42ae6c;
case 0x42ae6e:c.instructions+=1;goto B42ae6e;
case 0x42ae70:goto L42ae70;
case 0x42ae72:c.instructions+=1;goto B42ae72;
case 0x42ae74:goto L42ae74;
case 0x42ae76:c.instructions+=2;goto B42ae76;
case 0x42ae78:c.instructions+=1;goto B42ae78;
case 0x42ae7d:goto L42ae7d;
case 0x42ae82:goto L42ae82;
case 0x42ae84:goto L42ae84;
case 0x42ae86:c.instructions+=1;goto B42ae86;
case 0x42ae88:goto L42ae88;
case 0x42ae8b:c.instructions+=1;goto B42ae8b;
case 0x42ae8d:goto L42ae8d;
case 0x42ae8f:c.instructions+=1;goto B42ae8f;
case 0x42ae91:goto L42ae91;
case 0x42ae93:goto L42ae93;
case 0x42ae95:c.instructions+=1;goto B42ae95;
case 0x42ae97:goto L42ae97;
case 0x42ae99:c.instructions+=1;goto B42ae99;
case 0x42ae9b:goto L42ae9b;
case 0x42ae9d:c.instructions+=1;goto B42ae9d;
case 0x42ae9f:goto L42ae9f;
case 0x42aea2:c.instructions+=2;goto B42aea2;
case 0x42aea3:c.instructions+=1;goto B42aea3;
case 0x42aea8:goto L42aea8;
case 0x42aeae:c.instructions+=3;goto B42aeae;
case 0x42aeaf:c.instructions+=2;goto B42aeaf;
case 0x42aeb5:c.instructions+=1;goto B42aeb5;
case 0x42aeba:goto L42aeba;
case 0x42aec0:c.instructions+=2;goto B42aec0;
case 0x42aec2:c.instructions+=1;goto B42aec2;
case 0x42aec8:goto L42aec8;
case 0x42aece:c.instructions+=2;goto B42aece;
case 0x42aed0:c.instructions+=1;goto B42aed0;
case 0x42aed2:goto L42aed2;
case 0x42aed4:c.instructions+=2;goto B42aed4;
case 0x42aed6:c.instructions+=1;goto B42aed6;
case 0x42aedc:goto L42aedc;
case 0x42aee2:c.instructions+=3;goto B42aee2;
case 0x42aee4:c.instructions+=2;goto B42aee4;
case 0x42aeea:c.instructions+=1;goto B42aeea;
case 0x42aeec:goto L42aeec;
case 0x42aef2:c.instructions+=2;goto B42aef2;
case 0x42aef4:c.instructions+=1;goto B42aef4;
case 0x42aef7:goto L42aef7;
case 0x42aef9:c.instructions+=5;goto B42aef9;
case 0x42aefc:c.instructions+=4;goto B42aefc;
case 0x42aeff:c.instructions+=3;goto B42aeff;
case 0x42af02:c.instructions+=2;goto B42af02;
case 0x42af04:c.instructions+=1;goto B42af04;
case 0x42af06:goto L42af06;
case 0x42af0a:c.instructions+=1;goto B42af0a;
case 0x42af0f:goto L42af0f;
case 0x42af12:c.instructions+=4;goto B42af12;
case 0x42af13:c.instructions+=3;goto B42af13;
case 0x42af17:c.instructions+=2;goto B42af17;
case 0x42af18:c.instructions+=1;goto B42af18;
case 0x42af1d:goto L42af1d;
case 0x42af20:c.instructions+=6;goto B42af20;
case 0x42af23:c.instructions+=5;goto B42af23;
case 0x42af25:c.instructions+=4;goto B42af25;
case 0x42af28:c.instructions+=3;goto B42af28;
case 0x42af2c:c.instructions+=2;goto B42af2c;
case 0x42af2d:c.instructions+=1;goto B42af2d;
case 0x42af30:goto L42af30;
case 0x42af36:c.instructions+=2;goto B42af36;
case 0x42af38:c.instructions+=1;goto B42af38;
case 0x42af3a:goto L42af3a;
case 0x42af3c:c.instructions+=3;goto B42af3c;
case 0x42af3f:c.instructions+=2;goto B42af3f;
case 0x42af40:c.instructions+=1;goto B42af40;
case 0x42af43:goto L42af43;
case 0x42af45:c.instructions+=1;goto B42af45;
case 0x42af4a:goto L42af4a;
case 0x42af4d:c.instructions+=2;goto B42af4d;
case 0x42af4e:c.instructions+=1;goto B42af4e;
case 0x42af53:goto L42af53;
case 0x42af55:c.instructions+=1;goto B42af55;
case 0x42af5b:goto L42af5b;
case 0x42af61:c.instructions+=2;goto B42af61;
case 0x42af63:c.instructions+=1;goto B42af63;
case 0x42af65:goto L42af65;
case 0x42af67:c.instructions+=1;goto B42af67;
case 0x42af6a:goto L42af6a;
case 0x42af6c:c.instructions+=1;goto B42af6c;
case 0x42af6e:goto L42af6e;
case 0x42af75:c.instructions+=1;goto B42af75;
case 0x42af77:goto L42af77;
case 0x42af7a:c.instructions+=1;goto B42af7a;
case 0x42af7f:goto L42af7f;
case 0x42af81:c.instructions+=1;goto B42af81;
case 0x42af86:goto L42af86;
case 0x42af8d:c.instructions+=7;goto B42af8d;
case 0x42af94:c.instructions+=6;goto B42af94;
case 0x42af95:c.instructions+=5;goto B42af95;
case 0x42af96:c.instructions+=4;goto B42af96;
case 0x42af97:c.instructions+=3;goto B42af97;
case 0x42af99:c.instructions+=2;goto B42af99;
case 0x42af9a:c.instructions+=1;goto B42af9a;
case 0x42af9d:goto L42af9d;
case 0x42afa3:c.instructions+=2;goto B42afa3;
case 0x42afa5:c.instructions+=1;goto B42afa5;
case 0x42afa7:goto L42afa7;
case 0x42afa9:c.instructions+=2;goto B42afa9;
case 0x42afae:c.instructions+=1;goto B42afae;
case 0x42afb3:goto L42afb3;
case 0x42afb5:c.instructions+=1;goto B42afb5;
case 0x42afba:goto L42afba;
case 0x42afbd:c.instructions+=6;goto B42afbd;
case 0x42afbf:c.instructions+=5;goto B42afbf;
case 0x42afc1:c.instructions+=4;goto B42afc1;
case 0x42afc3:c.instructions+=3;goto B42afc3;
case 0x42afc5:c.instructions+=2;goto B42afc5;
case 0x42afc7:c.instructions+=1;goto B42afc7;
case 0x42afca:goto L42afca;
case 0x42afd1:goto L42afd1;
case 0x42afd3:c.instructions+=1;goto B42afd3;
case 0x42afd8:goto L42afd8;
case 0x42afdf:c.instructions+=7;goto B42afdf;
case 0x42afe6:c.instructions+=6;goto B42afe6;
case 0x42afe7:c.instructions+=5;goto B42afe7;
case 0x42afe8:c.instructions+=4;goto B42afe8;
case 0x42afe9:c.instructions+=3;goto B42afe9;
case 0x42afeb:c.instructions+=2;goto B42afeb;
case 0x42afec:c.instructions+=1;goto B42afec;
case 0x42afef:goto L42afef;
case 0x42aff5:c.instructions+=3;goto B42aff5;
case 0x42affc:c.instructions+=2;goto B42affc;
case 0x42afff:c.instructions+=1;goto B42afff;
default:missing_instruction(c.pc);}
B42a004:L42a004:{c.instructions+=2;NFSU2_TR(0x42a004);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42a007:{NFSU2_TR(0x42a007);
if(r1(R+518)){{goto L42a013;}}
}
B42a009:L42a009:{c.instructions+=2;NFSU2_TR(0x42a009);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42a00c:{NFSU2_TR(0x42a00c);
if(r1(R+518)){{goto L42a013;}}
}
B42a00e:L42a00e:{c.instructions+=2;NFSU2_TR(0x42a00e);
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
B42a011:{NFSU2_TR(0x42a011);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42a02d;}}
}
B42a013:L42a013:{c.instructions+=4;NFSU2_TR(0x42a013);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a016:{NFSU2_TR(0x42a016);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a01c:{NFSU2_TR(0x42a01c);
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
B42a01e:{NFSU2_TR(0x42a01e);
if(r1(R+518)){{goto L42a02d;}}
}
B42a020:L42a020:{c.instructions+=2;NFSU2_TR(0x42a020);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B42a024:{NFSU2_TR(0x42a024);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42a02d;}}
}
B42a026:L42a026:{c.instructions+=2;NFSU2_TR(0x42a026);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a028:{NFSU2_TR(0x42a028);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a02dull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B42a02d:L42a02d:{c.instructions+=2;NFSU2_TR(0x42a02d);
__builtin_memmove((R+4),(R+24),4);
}
B42a02f:{NFSU2_TR(0x42a02f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a034ull));
TAIL_STATIC(0x422150u,422);
}
B42a034:L42a034:{c.instructions+=2;NFSU2_TR(0x42a034);
__builtin_memmove((R+4),(R+24),4);
}
B42a036:{NFSU2_TR(0x42a036);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a03bull));
TAIL_STATIC(0x41bf80u,41b);
}
B42a03b:L42a03b:{c.instructions+=6;NFSU2_TR(0x42a03b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42a03c:{NFSU2_TR(0x42a03c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42a03d:{NFSU2_TR(0x42a03d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42a03e:{NFSU2_TR(0x42a03e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42a03f:{NFSU2_TR(0x42a03f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42a040:{NFSU2_TR(0x42a040);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42a050:L42a050:{c.instructions+=14;NFSU2_TR(0x42a050);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a052:{NFSU2_TR(0x42a052);
u8 U[4];
w4(U+0,u32(0x77196bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a057:{NFSU2_TR(0x42a057);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a05d:{NFSU2_TR(0x42a05d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a05e:{NFSU2_TR(0x42a05e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a065:{NFSU2_TR(0x42a065);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a066:{NFSU2_TR(0x42a066);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a067:{NFSU2_TR(0x42a067);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a068:{NFSU2_TR(0x42a068);
__builtin_memmove((R+24),(R+4),4);
}
B42a06a:{NFSU2_TR(0x42a06a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B42a06c:{NFSU2_TR(0x42a06c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42a072:{NFSU2_TR(0x42a072);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42a075:{NFSU2_TR(0x42a075);
w4(R+4,u32(0x10ull));
}
B42a07a:{NFSU2_TR(0x42a07a);
__builtin_memmove((R+12),(R+12),4);
}
B42a080:L42a080:{c.instructions+=4;NFSU2_TR(0x42a080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffcull))));
s4(u32(r4(R+0)),r4(U+0));
}
B42a083:{NFSU2_TR(0x42a083);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B42a086:{NFSU2_TR(0x42a086);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B42a087:{NFSU2_TR(0x42a087);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42a080u);}goto L42a080;}}
}
B42a089:L42a089:{c.instructions+=2;NFSU2_TR(0x42a089);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a08f:{NFSU2_TR(0x42a08f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a094ull));
TAIL_STATIC(0x411be0u,411);
}
B42a094:L42a094:{c.instructions+=5;NFSU2_TR(0x42a094);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a097:{NFSU2_TR(0x42a097);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a098:{NFSU2_TR(0x42a098);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a099:{NFSU2_TR(0x42a099);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B42a09c:{NFSU2_TR(0x42a09c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a0a1ull));
TAIL_STATIC(0x41d160u,41d);
}
B42a0a1:L42a0a1:{c.instructions+=3;NFSU2_TR(0x42a0a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a0a4:{NFSU2_TR(0x42a0a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a0a5:{NFSU2_TR(0x42a0a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a0aaull));
TAIL_STATIC(0x5eb910u,5eb);
}
B42a0aa:L42a0aa:{c.instructions+=3;NFSU2_TR(0x42a0aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a0ad:{NFSU2_TR(0x42a0ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a0ae:{NFSU2_TR(0x42a0ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a0b3ull));
TAIL_STATIC(0x5eb8f0u,5eb);
}
B42a0b3:L42a0b3:{c.instructions+=3;NFSU2_TR(0x42a0b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a0b6:{NFSU2_TR(0x42a0b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a0b7:{NFSU2_TR(0x42a0b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a0bcull));
TAIL_STATIC(0x5eb900u,5eb);
}
B42a0bc:L42a0bc:{c.instructions+=2;NFSU2_TR(0x42a0bc);
__builtin_memmove((R+4),(R+24),4);
}
B42a0be:{NFSU2_TR(0x42a0be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a0c3ull));
TAIL_STATIC(0x402110u,402);
}
B42a0c3:L42a0c3:{c.instructions+=5;NFSU2_TR(0x42a0c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a0c9:{NFSU2_TR(0x42a0c9);
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
B42a0cb:{NFSU2_TR(0x42a0cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x798ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42a0d1:{NFSU2_TR(0x42a0d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x77cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42a0d7:{NFSU2_TR(0x42a0d7);
if(r1(R+518)){{goto L42a0df;}}
}
B42a0d9:L42a0d9:{c.instructions+=3;NFSU2_TR(0x42a0d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42a0db:{NFSU2_TR(0x42a0db);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a0dd:{NFSU2_TR(0x42a0dd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a0dfull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B42a0df:L42a0df:{c.instructions+=4;NFSU2_TR(0x42a0df);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B42a0e5:{NFSU2_TR(0x42a0e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a0e6:{NFSU2_TR(0x42a0e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a0e7:{NFSU2_TR(0x42a0e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a0ecull));
TAIL_STATIC(0x440e50u,440);
}
B42a0ec:L42a0ec:{c.instructions+=6;NFSU2_TR(0x42a0ec);
__builtin_memmove((R+28),(R+0),4);
}
B42a0ee:{NFSU2_TR(0x42a0ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42a0f1:{NFSU2_TR(0x42a0f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a0f5:{NFSU2_TR(0x42a0f5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42a0f7:{NFSU2_TR(0x42a0f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a0fb:{NFSU2_TR(0x42a0fb);
if(r1(R+518)){{goto L42a114;}}
}
B42a0fd:L42a0fd:{c.instructions+=5;NFSU2_TR(0x42a0fd);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a102:{NFSU2_TR(0x42a102);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a103:{NFSU2_TR(0x42a103);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a105:{NFSU2_TR(0x42a105);
__builtin_memmove((R+4),(R+28),4);
}
B42a107:{NFSU2_TR(0x42a107);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a10cull));
TAIL_STATIC(0x4234a0u,423);
}
B42a10c:L42a10c:{c.instructions+=2;NFSU2_TR(0x42a10c);
u8 U[4];
w4(U+0,u32(0x785820ull));
s4(u32(r4(R+28)),r4(U+0));
}
B42a112:{NFSU2_TR(0x42a112);
{goto L42a116;}
}
B42a114:L42a114:{c.instructions+=1;NFSU2_TR(0x42a114);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B42a116:L42a116:{c.instructions+=5;NFSU2_TR(0x42a116);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a117:{NFSU2_TR(0x42a117);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42a11a:{NFSU2_TR(0x42a11a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B42a122:{NFSU2_TR(0x42a122);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a128:{NFSU2_TR(0x42a128);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a12dull));
TAIL_STATIC(0x428720u,428);
}
B42a12d:L42a12d:{c.instructions+=3;NFSU2_TR(0x42a12d);
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
B42a12f:{NFSU2_TR(0x42a12f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42a130:{NFSU2_TR(0x42a130);
if(r1(R+518)){{goto L42a13b;}}
}
B42a132:L42a132:{c.instructions+=2;NFSU2_TR(0x42a132);
__builtin_memmove((R+4),(R+24),4);
}
B42a134:{NFSU2_TR(0x42a134);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a139ull));
TAIL_STATIC(0x422150u,422);
}
B42a139:L42a139:{c.instructions+=1;NFSU2_TR(0x42a139);
{goto L42a169;}
}
B42a13b:L42a13b:{c.instructions+=2;NFSU2_TR(0x42a13b);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B42a141:{NFSU2_TR(0x42a141);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42a14e;}}
}
B42a143:L42a143:{c.instructions+=3;NFSU2_TR(0x42a143);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a144:{NFSU2_TR(0x42a144);
w4(R+4,u32(0x88a320ull));
}
B42a149:{NFSU2_TR(0x42a149);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a14eull));
TAIL_STATIC(0x43be80u,43b);
}
B42a14e:L42a14e:{c.instructions+=2;NFSU2_TR(0x42a14e);
__builtin_memmove((R+4),(R+24),4);
}
B42a150:{NFSU2_TR(0x42a150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a155ull));
TAIL_STATIC(0x4023e0u,402);
}
B42a155:L42a155:{c.instructions+=7;NFSU2_TR(0x42a155);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a158:{NFSU2_TR(0x42a158);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42a15a:{NFSU2_TR(0x42a15a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a15c:{NFSU2_TR(0x42a15c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a15d:{NFSU2_TR(0x42a15d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a15e:{NFSU2_TR(0x42a15e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a15f:{NFSU2_TR(0x42a15f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a162ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42a162:L42a162:{c.instructions+=1;NFSU2_TR(0x42a162);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42a169:L42a169:{c.instructions+=2;NFSU2_TR(0x42a169);
__builtin_memmove((R+4),(R+24),4);
}
B42a16b:{NFSU2_TR(0x42a16b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a170ull));
TAIL_STATIC(0x41bf80u,41b);
}
B42a170:L42a170:{c.instructions+=6;NFSU2_TR(0x42a170);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a174:{NFSU2_TR(0x42a174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42a175:{NFSU2_TR(0x42a175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42a176:{NFSU2_TR(0x42a176);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a17d:{NFSU2_TR(0x42a17d);
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
B42a180:{NFSU2_TR(0x42a180);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42a190:L42a190:{c.instructions+=11;NFSU2_TR(0x42a190);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a191:{NFSU2_TR(0x42a191);
__builtin_memmove((R+20),(R+16),4);
}
B42a193:{NFSU2_TR(0x42a193);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B42a196:{NFSU2_TR(0x42a196);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B42a199:{NFSU2_TR(0x42a199);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a19a:{NFSU2_TR(0x42a19a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a19b:{NFSU2_TR(0x42a19b);
__builtin_memmove((R+24),(R+4),4);
}
B42a19d:{NFSU2_TR(0x42a19d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a1a0:{NFSU2_TR(0x42a1a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a1a1:{NFSU2_TR(0x42a1a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a1a2:{NFSU2_TR(0x42a1a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a1a7ull));
TAIL_STATIC(0x4116a0u,411);
}
B42a1a7:L42a1a7:{c.instructions+=8;NFSU2_TR(0x42a1a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42a1ab:{NFSU2_TR(0x42a1ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a1ac:{NFSU2_TR(0x42a1ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a1af:{NFSU2_TR(0x42a1af);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42a1b3:{NFSU2_TR(0x42a1b3);
__builtin_memmove((R+12),(R+0),4);
}
B42a1b5:{NFSU2_TR(0x42a1b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a1b6:{NFSU2_TR(0x42a1b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a1ba:{NFSU2_TR(0x42a1ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a1bfull));
TAIL_STATIC(0x5ec250u,5ec);
}
B42a1bf:L42a1bf:{c.instructions+=7;NFSU2_TR(0x42a1bf);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a1c3:{NFSU2_TR(0x42a1c3);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42a1c7:{NFSU2_TR(0x42a1c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a1ca:{NFSU2_TR(0x42a1ca);
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
B42a1cc:{NFSU2_TR(0x42a1cc);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42a1d2:{NFSU2_TR(0x42a1d2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42a1d6:{NFSU2_TR(0x42a1d6);
if(r1(R+518)){{goto L42a2c3;}}
}
B42a1dc:L42a1dc:{c.instructions+=13;NFSU2_TR(0x42a1dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42a1df:{NFSU2_TR(0x42a1df);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a1e0:{NFSU2_TR(0x42a1e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42a1e4:{NFSU2_TR(0x42a1e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a1e5:{NFSU2_TR(0x42a1e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42a1e9:{NFSU2_TR(0x42a1e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a1ea:{NFSU2_TR(0x42a1ea);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x60ull))));
}
B42a1ed:{NFSU2_TR(0x42a1ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42a1f0:{NFSU2_TR(0x42a1f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a1f1:{NFSU2_TR(0x42a1f1);
__builtin_memmove((R+4),(R+28),4);
}
B42a1f3:{NFSU2_TR(0x42a1f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42a1fb:{NFSU2_TR(0x42a1fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42a203:{NFSU2_TR(0x42a203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a208ull));
TAIL_STATIC(0x419b20u,419);
}
B42a208:L42a208:{c.instructions+=9;NFSU2_TR(0x42a208);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a20b:{NFSU2_TR(0x42a20b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a20d:{NFSU2_TR(0x42a20d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a20f:{NFSU2_TR(0x42a20f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a210:{NFSU2_TR(0x42a210);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a212:{NFSU2_TR(0x42a212);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B42a215:{NFSU2_TR(0x42a215);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a216:{NFSU2_TR(0x42a216);
__builtin_memmove((R+4),(R+28),4);
}
B42a218:{NFSU2_TR(0x42a218);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a21dull));
TAIL_STATIC(0x4198c0u,419);
}
B42a21d:L42a21d:{c.instructions+=7;NFSU2_TR(0x42a21d);
__builtin_memmove((R+12),(R+0),4);
}
B42a21f:{NFSU2_TR(0x42a21f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a222:{NFSU2_TR(0x42a222);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42a224:{NFSU2_TR(0x42a224);
u8 U[16];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B42a228:{NFSU2_TR(0x42a228);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a22c:{NFSU2_TR(0x42a22c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a230:{NFSU2_TR(0x42a230);
if(r1(R+518)){{goto L42a23a;}}
}
B42a232:L42a232:{c.instructions+=3;NFSU2_TR(0x42a232);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42a235:{NFSU2_TR(0x42a235);
{u32 ea_=u32(r4(R+8)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a238:{NFSU2_TR(0x42a238);
{goto L42a240;}
}
B42a23a:L42a23a:{c.instructions+=1;NFSU2_TR(0x42a23a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a240:L42a240:{c.instructions+=8;NFSU2_TR(0x42a240);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a246:{NFSU2_TR(0x42a246);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B42a248:{NFSU2_TR(0x42a248);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a24c:{NFSU2_TR(0x42a24c);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B42a24e:{NFSU2_TR(0x42a24e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a250:{NFSU2_TR(0x42a250);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42a252:{NFSU2_TR(0x42a252);
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
B42a255:{NFSU2_TR(0x42a255);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42a2c3;}}
}
B42a257:L42a257:{c.instructions+=3;NFSU2_TR(0x42a257);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a25a:{NFSU2_TR(0x42a25a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42a25c:{NFSU2_TR(0x42a25c);
if(r1(R+518)){{goto L42a267;}}
}
B42a25e:L42a25e:{c.instructions+=3;NFSU2_TR(0x42a25e);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B42a262:{NFSU2_TR(0x42a262);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a265:{NFSU2_TR(0x42a265);
{goto L42a26d;}
}
B42a267:L42a267:{c.instructions+=1;NFSU2_TR(0x42a267);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a26d:L42a26d:{c.instructions+=6;NFSU2_TR(0x42a26d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a271:{NFSU2_TR(0x42a271);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B42a273:{NFSU2_TR(0x42a273);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a275:{NFSU2_TR(0x42a275);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42a277:{NFSU2_TR(0x42a277);
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
B42a27a:{NFSU2_TR(0x42a27a);
if(r1(R+514)){{goto L42a2c3;}}
}
B42a27c:L42a27c:{c.instructions+=5;NFSU2_TR(0x42a27c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42a280:{NFSU2_TR(0x42a280);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a284:{NFSU2_TR(0x42a284);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a285:{NFSU2_TR(0x42a285);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a286:{NFSU2_TR(0x42a286);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a28bull));
TAIL_STATIC(0x40ada0u,40a);
}
B42a28b:L42a28b:{c.instructions+=4;NFSU2_TR(0x42a28b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42a28f:{NFSU2_TR(0x42a28f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a291:{NFSU2_TR(0x42a291);
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
B42a294:{NFSU2_TR(0x42a294);
if(r1(R+514)){{goto L42a2c3;}}
}
B42a296:L42a296:{c.instructions+=2;NFSU2_TR(0x42a296);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a29a:{NFSU2_TR(0x42a29a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a29full));
TAIL_STATIC(0x401ed0u,401);
}
B42a29f:L42a29f:{c.instructions+=5;NFSU2_TR(0x42a29f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a2a0:{NFSU2_TR(0x42a2a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a2a1:{NFSU2_TR(0x42a2a1);
__builtin_memmove((R+4),(R+28),4);
}
B42a2a3:{NFSU2_TR(0x42a2a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a2a6:{NFSU2_TR(0x42a2a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a2abull));
TAIL_STATIC(0x4120c0u,412);
}
B42a2ab:L42a2ab:{c.instructions+=3;NFSU2_TR(0x42a2ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a2af:{NFSU2_TR(0x42a2af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42a2b1:{NFSU2_TR(0x42a2b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a2b4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42a2b4:L42a2b4:{c.instructions+=6;NFSU2_TR(0x42a2b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42a2b8:{NFSU2_TR(0x42a2b8);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B42a2ba:{NFSU2_TR(0x42a2ba);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B42a2bc:{NFSU2_TR(0x42a2bc);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B42a2be:{NFSU2_TR(0x42a2be);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42a2c1:{NFSU2_TR(0x42a2c1);
{goto L42a2d9;}
}
B42a2c3:L42a2c3:{c.instructions+=4;NFSU2_TR(0x42a2c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42a2c5:{NFSU2_TR(0x42a2c5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a2c7:{NFSU2_TR(0x42a2c7);
__builtin_memmove((R+4),(R+24),4);
}
B42a2c9:{NFSU2_TR(0x42a2c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a2ccull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42a2cc:L42a2cc:{c.instructions+=3;NFSU2_TR(0x42a2cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42a2cf:{NFSU2_TR(0x42a2cf);
__builtin_memmove((R+4),(R+28),4);
}
B42a2d1:{NFSU2_TR(0x42a2d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a2d6ull));
TAIL_STATIC(0x411be0u,411);
}
B42a2d6:L42a2d6:{c.instructions+=1;NFSU2_TR(0x42a2d6);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B42a2d9:L42a2d9:{c.instructions+=3;NFSU2_TR(0x42a2d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a2dc:{NFSU2_TR(0x42a2dc);
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
B42a2de:{NFSU2_TR(0x42a2de);
if(r1(R+518)){{goto L42a343;}}
}
B42a2e0:L42a2e0:{c.instructions+=8;NFSU2_TR(0x42a2e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a2e3:{NFSU2_TR(0x42a2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42a2e9:{NFSU2_TR(0x42a2e9);
__builtin_memmove((R+0),gp(0x7e8e60),4);
}
B42a2ee:{NFSU2_TR(0x42a2ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a2f2:{NFSU2_TR(0x42a2f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42a2f4:{NFSU2_TR(0x42a2f4);
__builtin_memmove((R+4),(R+24),4);
}
B42a2f6:{NFSU2_TR(0x42a2f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a2fa:{NFSU2_TR(0x42a2fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a2fdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42a2fd:L42a2fd:{c.instructions+=5;NFSU2_TR(0x42a2fd);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42a301:{NFSU2_TR(0x42a301);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B42a305:{NFSU2_TR(0x42a305);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a307:{NFSU2_TR(0x42a307);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42a30a:{NFSU2_TR(0x42a30a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42a312;}}
}
B42a30c:L42a30c:{c.instructions+=2;NFSU2_TR(0x42a30c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42a310:{NFSU2_TR(0x42a310);
{goto L42a31c;}
}
B42a312:L42a312:{c.instructions+=3;NFSU2_TR(0x42a312);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a316:{NFSU2_TR(0x42a316);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42a318:{NFSU2_TR(0x42a318);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a31c:L42a31c:{c.instructions+=14;NFSU2_TR(0x42a31c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a320:{NFSU2_TR(0x42a320);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a323:{NFSU2_TR(0x42a323);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a324:{NFSU2_TR(0x42a324);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42a327:{NFSU2_TR(0x42a327);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B42a329:{NFSU2_TR(0x42a329);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42a32b:{NFSU2_TR(0x42a32b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a32e:{NFSU2_TR(0x42a32e);
__builtin_memmove((R+8),(R+518),1);
}
B42a331:{NFSU2_TR(0x42a331);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a332:{NFSU2_TR(0x42a332);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a333:{NFSU2_TR(0x42a333);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a334:{NFSU2_TR(0x42a334);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a335:{NFSU2_TR(0x42a335);
__builtin_memmove((R+4),(R+28),4);
}
B42a337:{NFSU2_TR(0x42a337);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a33cull));
TAIL_STATIC(0x428030u,428);
}
B42a33c:L42a33c:{c.instructions+=6;NFSU2_TR(0x42a33c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42a33d:{NFSU2_TR(0x42a33d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42a33e:{NFSU2_TR(0x42a33e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42a33f:{NFSU2_TR(0x42a33f);
__builtin_memmove((R+16),(R+20),4);
}
B42a341:{NFSU2_TR(0x42a341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42a342:{NFSU2_TR(0x42a342);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42a343:L42a343:{c.instructions+=2;NFSU2_TR(0x42a343);
__builtin_memmove((R+4),(R+28),4);
}
B42a345:{NFSU2_TR(0x42a345);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a34aull));
TAIL_STATIC(0x411be0u,411);
}
B42a34a:L42a34a:{c.instructions+=6;NFSU2_TR(0x42a34a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42a34b:{NFSU2_TR(0x42a34b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42a34c:{NFSU2_TR(0x42a34c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42a34d:{NFSU2_TR(0x42a34d);
__builtin_memmove((R+16),(R+20),4);
}
B42a34f:{NFSU2_TR(0x42a34f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42a350:{NFSU2_TR(0x42a350);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42a360:L42a360:{c.instructions+=11;NFSU2_TR(0x42a360);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a361:{NFSU2_TR(0x42a361);
__builtin_memmove((R+20),(R+16),4);
}
B42a363:{NFSU2_TR(0x42a363);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B42a366:{NFSU2_TR(0x42a366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B42a369:{NFSU2_TR(0x42a369);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a36a:{NFSU2_TR(0x42a36a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a36b:{NFSU2_TR(0x42a36b);
__builtin_memmove((R+24),(R+4),4);
}
B42a36d:{NFSU2_TR(0x42a36d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a370:{NFSU2_TR(0x42a370);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a371:{NFSU2_TR(0x42a371);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a372:{NFSU2_TR(0x42a372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a377ull));
TAIL_STATIC(0x4116a0u,411);
}
B42a377:L42a377:{c.instructions+=6;NFSU2_TR(0x42a377);
__builtin_memmove((R+12),(R+0),4);
}
B42a379:{NFSU2_TR(0x42a379);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a37f:{NFSU2_TR(0x42a37f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B42a381:{NFSU2_TR(0x42a381);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42a383:{NFSU2_TR(0x42a383);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B42a38b:{NFSU2_TR(0x42a38b);
if(r1(R+518)){{goto L42a3e7;}}
}
B42a38d:L42a38d:{c.instructions+=17;NFSU2_TR(0x42a38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a390:{NFSU2_TR(0x42a390);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a393:{NFSU2_TR(0x42a393);
{u32 ea_=u32(r4(R+24)+u32(1024u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42a399:{NFSU2_TR(0x42a399);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a39c:{NFSU2_TR(0x42a39c);
{u32 ea_=u32(r4(R+24)+u32(1028u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42a3a2:{NFSU2_TR(0x42a3a2);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B42a3a4:{NFSU2_TR(0x42a3a4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B42a3a6:{NFSU2_TR(0x42a3a6);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B42a3a8:{NFSU2_TR(0x42a3a8);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B42a3aa:{NFSU2_TR(0x42a3aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B42a3ac:{NFSU2_TR(0x42a3ac);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B42a3ae:{NFSU2_TR(0x42a3ae);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B42a3b0:{NFSU2_TR(0x42a3b0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42a3b2:{NFSU2_TR(0x42a3b2);
{u32 ea_=u32(u32(7879764u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42a3b8:{NFSU2_TR(0x42a3b8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a3ba:{NFSU2_TR(0x42a3ba);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42a3bd:{NFSU2_TR(0x42a3bd);
if(r1(R+514)){{goto L42a3e7;}}
}
B42a3bf:L42a3bf:{c.instructions+=7;NFSU2_TR(0x42a3bf);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a3c2:{NFSU2_TR(0x42a3c2);
{u32 ea_=u32(r4(R+24)+u32(1032u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42a3c8:{NFSU2_TR(0x42a3c8);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42a3ca:{NFSU2_TR(0x42a3ca);
{u32 ea_=u32(u32(7879768u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42a3d0:{NFSU2_TR(0x42a3d0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a3d2:{NFSU2_TR(0x42a3d2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42a3d5:{NFSU2_TR(0x42a3d5);
if(r1(R+514)){{goto L42a3e7;}}
}
B42a3d7:L42a3d7:{c.instructions+=3;NFSU2_TR(0x42a3d7);
w4(R+4,u32(0x81cbc0ull));
}
B42a3dc:{NFSU2_TR(0x42a3dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a3e2:{NFSU2_TR(0x42a3e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a3e7ull));
TAIL_STATIC(0x4131f0u,413);
}
B42a3e7:L42a3e7:{c.instructions+=3;NFSU2_TR(0x42a3e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a3ed:{NFSU2_TR(0x42a3ed);
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
B42a3ef:{NFSU2_TR(0x42a3ef);
if(r1(R+518)){{goto L42a5c4;}}
}
B42a3f5:L42a3f5:{c.instructions+=2;NFSU2_TR(0x42a3f5);
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
B42a3f8:{NFSU2_TR(0x42a3f8);
if(r1(R+518)){{goto L42a52a;}}
}
B42a3fe:L42a3fe:{c.instructions+=6;NFSU2_TR(0x42a3fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42a402:{NFSU2_TR(0x42a402);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a403:{NFSU2_TR(0x42a403);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a406:{NFSU2_TR(0x42a406);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42a40a:{NFSU2_TR(0x42a40a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a40b:{NFSU2_TR(0x42a40b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a410ull));
TAIL_STATIC(0x5ec250u,5ec);
}
B42a410:L42a410:{c.instructions+=7;NFSU2_TR(0x42a410);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a414:{NFSU2_TR(0x42a414);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42a418:{NFSU2_TR(0x42a418);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a41e:{NFSU2_TR(0x42a41e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42a420:{NFSU2_TR(0x42a420);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42a426:{NFSU2_TR(0x42a426);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42a42a:{NFSU2_TR(0x42a42a);
if(r1(R+518)){{goto L42a4e5;}}
}
B42a430:L42a430:{c.instructions+=12;NFSU2_TR(0x42a430);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42a433:{NFSU2_TR(0x42a433);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a434:{NFSU2_TR(0x42a434);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42a438:{NFSU2_TR(0x42a438);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a439:{NFSU2_TR(0x42a439);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42a43d:{NFSU2_TR(0x42a43d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a43e:{NFSU2_TR(0x42a43e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4b0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42a444:{NFSU2_TR(0x42a444);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a445:{NFSU2_TR(0x42a445);
__builtin_memmove((R+4),(R+28),4);
}
B42a447:{NFSU2_TR(0x42a447);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42a44f:{NFSU2_TR(0x42a44f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42a457:{NFSU2_TR(0x42a457);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a45cull));
TAIL_STATIC(0x419bc0u,419);
}
B42a45c:L42a45c:{c.instructions+=9;NFSU2_TR(0x42a45c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a45f:{NFSU2_TR(0x42a45f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a461:{NFSU2_TR(0x42a461);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a463:{NFSU2_TR(0x42a463);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a464:{NFSU2_TR(0x42a464);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a466:{NFSU2_TR(0x42a466);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B42a469:{NFSU2_TR(0x42a469);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a46a:{NFSU2_TR(0x42a46a);
__builtin_memmove((R+4),(R+28),4);
}
B42a46c:{NFSU2_TR(0x42a46c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a471ull));
TAIL_STATIC(0x4198c0u,419);
}
B42a471:L42a471:{c.instructions+=5;NFSU2_TR(0x42a471);
u8 U[16];
w4(U+0,u32(u32(u32(0x4b8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B42a478:{NFSU2_TR(0x42a478);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a47c:{NFSU2_TR(0x42a47c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a47f:{NFSU2_TR(0x42a47f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42a481:{NFSU2_TR(0x42a481);
if(r1(R+518)){{goto L42a48b;}}
}
B42a483:L42a483:{c.instructions+=3;NFSU2_TR(0x42a483);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42a486:{NFSU2_TR(0x42a486);
{u32 ea_=u32(r4(R+8)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a489:{NFSU2_TR(0x42a489);
{goto L42a491;}
}
B42a48b:L42a48b:{c.instructions+=1;NFSU2_TR(0x42a48b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a491:L42a491:{c.instructions+=8;NFSU2_TR(0x42a491);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a497:{NFSU2_TR(0x42a497);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B42a499:{NFSU2_TR(0x42a499);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a49d:{NFSU2_TR(0x42a49d);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B42a49f:{NFSU2_TR(0x42a49f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a4a1:{NFSU2_TR(0x42a4a1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42a4a3:{NFSU2_TR(0x42a4a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42a4a6:{NFSU2_TR(0x42a4a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42a4e3;}}
}
B42a4a8:L42a4a8:{c.instructions+=3;NFSU2_TR(0x42a4a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a4ab:{NFSU2_TR(0x42a4ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42a4ad:{NFSU2_TR(0x42a4ad);
if(r1(R+518)){{goto L42a4b8;}}
}
B42a4af:L42a4af:{c.instructions+=3;NFSU2_TR(0x42a4af);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B42a4b3:{NFSU2_TR(0x42a4b3);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a4b6:{NFSU2_TR(0x42a4b6);
{goto L42a4be;}
}
B42a4b8:L42a4b8:{c.instructions+=1;NFSU2_TR(0x42a4b8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a4be:L42a4be:{c.instructions+=6;NFSU2_TR(0x42a4be);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a4c2:{NFSU2_TR(0x42a4c2);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B42a4c4:{NFSU2_TR(0x42a4c4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a4c6:{NFSU2_TR(0x42a4c6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42a4c8:{NFSU2_TR(0x42a4c8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42a4cb:{NFSU2_TR(0x42a4cb);
if(r1(R+514)){{goto L42a4e3;}}
}
B42a4cd:L42a4cd:{c.instructions+=4;NFSU2_TR(0x42a4cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42a4d1:{NFSU2_TR(0x42a4d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a4d2:{NFSU2_TR(0x42a4d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a4d3:{NFSU2_TR(0x42a4d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a4d8ull));
TAIL_STATIC(0x40ada0u,40a);
}
B42a4d8:L42a4d8:{c.instructions+=4;NFSU2_TR(0x42a4d8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42a4dc:{NFSU2_TR(0x42a4dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a4de:{NFSU2_TR(0x42a4de);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42a4e1:{NFSU2_TR(0x42a4e1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42a532;}}
}
B42a4e3:L42a4e3:{c.instructions+=1;NFSU2_TR(0x42a4e3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B42a4e5:L42a4e5:{c.instructions+=9;NFSU2_TR(0x42a4e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a4e8:{NFSU2_TR(0x42a4e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42a4ec:{NFSU2_TR(0x42a4ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a4ed:{NFSU2_TR(0x42a4ed);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
}
B42a4f0:{NFSU2_TR(0x42a4f0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a4f2:{NFSU2_TR(0x42a4f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a4f3:{NFSU2_TR(0x42a4f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42a4f9:{NFSU2_TR(0x42a4f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a4fd:{NFSU2_TR(0x42a4fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a502ull));
TAIL_STATIC(0x41af90u,41a);
}
B42a502:L42a502:{c.instructions+=6;NFSU2_TR(0x42a502);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a508:{NFSU2_TR(0x42a508);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42a50c:{NFSU2_TR(0x42a50c);
__builtin_memmove((R+8),(R+518),1);
}
B42a50f:{NFSU2_TR(0x42a50f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42a515:{NFSU2_TR(0x42a515);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ecull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42a51b:{NFSU2_TR(0x42a51b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a520ull));
TAIL_STATIC(0x411be0u,411);
}
B42a520:L42a520:{c.instructions+=2;NFSU2_TR(0x42a520);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B42a528:{NFSU2_TR(0x42a528);
{goto L42a534;}
}
B42a52a:L42a52a:{c.instructions+=2;NFSU2_TR(0x42a52a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a530:{NFSU2_TR(0x42a530);
{goto L42a534;}
}
B42a532:L42a532:{c.instructions+=1;NFSU2_TR(0x42a532);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B42a534:L42a534:{c.instructions+=3;NFSU2_TR(0x42a534);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a53a:{NFSU2_TR(0x42a53a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42a53c:{NFSU2_TR(0x42a53c);
if(r1(R+518)){{goto L42a5ab;}}
}
B42a53e:L42a53e:{c.instructions+=7;NFSU2_TR(0x42a53e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42a541:{NFSU2_TR(0x42a541);
{u32 ea_=u32(r4(R+8)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a547:{NFSU2_TR(0x42a547);
{u32 ea_=u32(u32(7879752u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42a54d:{NFSU2_TR(0x42a54d);
{u32 ea_=u32(u32(7879756u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B42a553:{NFSU2_TR(0x42a553);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a555:{NFSU2_TR(0x42a555);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42a558:{NFSU2_TR(0x42a558);
if(r1(R+518)){{goto L42a562;}}
}
B42a55a:L42a55a:{c.instructions+=2;NFSU2_TR(0x42a55a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42a55c:{NFSU2_TR(0x42a55c);
{u32 ea_=u32(u32(7879756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a562:L42a562:{c.instructions+=16;NFSU2_TR(0x42a562);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B42a568:{NFSU2_TR(0x42a568);
{u32 ea_=u32(u32(7879760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a56e:{NFSU2_TR(0x42a56e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42a570:{NFSU2_TR(0x42a570);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B42a572:{NFSU2_TR(0x42a572);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a573:{NFSU2_TR(0x42a573);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42a575:{NFSU2_TR(0x42a575);
__builtin_memmove((R+0),(R+518),1);
}
B42a578:{NFSU2_TR(0x42a578);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42a57b:{NFSU2_TR(0x42a57b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42a57d:{NFSU2_TR(0x42a57d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a57e:{NFSU2_TR(0x42a57e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a57f:{NFSU2_TR(0x42a57f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a583:{NFSU2_TR(0x42a583);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a584:{NFSU2_TR(0x42a584);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a585:{NFSU2_TR(0x42a585);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42a58b:{NFSU2_TR(0x42a58b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a590ull));
TAIL_STATIC(0x428030u,428);
}
B42a590:L42a590:{c.instructions+=2;NFSU2_TR(0x42a590);
w4(R+4,u32(0x81e388ull));
}
B42a595:{NFSU2_TR(0x42a595);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a59aull));
TAIL_STATIC(0x40f150u,40f);
}
B42a59a:L42a59a:{c.instructions+=7;NFSU2_TR(0x42a59a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42a5a4:{NFSU2_TR(0x42a5a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42a5a5:{NFSU2_TR(0x42a5a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42a5a6:{NFSU2_TR(0x42a5a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42a5a7:{NFSU2_TR(0x42a5a7);
__builtin_memmove((R+16),(R+20),4);
}
B42a5a9:{NFSU2_TR(0x42a5a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42a5aa:{NFSU2_TR(0x42a5aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42a5ab:L42a5ab:{c.instructions+=2;NFSU2_TR(0x42a5ab);
__builtin_memmove((R+4),(R+24),4);
}
B42a5ad:{NFSU2_TR(0x42a5ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a5b2ull));
TAIL_STATIC(0x4188c0u,418);
}
B42a5b2:L42a5b2:{c.instructions+=2;NFSU2_TR(0x42a5b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42a5b8:{NFSU2_TR(0x42a5b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a5bdull));
TAIL_STATIC(0x411be0u,411);
}
B42a5bd:L42a5bd:{c.instructions+=6;NFSU2_TR(0x42a5bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42a5be:{NFSU2_TR(0x42a5be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42a5bf:{NFSU2_TR(0x42a5bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42a5c0:{NFSU2_TR(0x42a5c0);
__builtin_memmove((R+16),(R+20),4);
}
B42a5c2:{NFSU2_TR(0x42a5c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42a5c3:{NFSU2_TR(0x42a5c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42a5c4:L42a5c4:{c.instructions+=7;NFSU2_TR(0x42a5c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a5ca:{NFSU2_TR(0x42a5ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42a5cb:{NFSU2_TR(0x42a5cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42a5cc:{NFSU2_TR(0x42a5cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42a5cd:{NFSU2_TR(0x42a5cd);
__builtin_memmove((R+16),(R+20),4);
}
B42a5cf:{NFSU2_TR(0x42a5cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42a5d0:{NFSU2_TR(0x42a5d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42a5e0:L42a5e0:{c.instructions+=6;NFSU2_TR(0x42a5e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B42a5e3:{NFSU2_TR(0x42a5e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42a5e9:{NFSU2_TR(0x42a5e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42a5eb:{NFSU2_TR(0x42a5eb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42a5ed:{NFSU2_TR(0x42a5ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a5f1:{NFSU2_TR(0x42a5f1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42a5f5;}}
}
B42a5f3:L42a5f3:{c.instructions+=1;NFSU2_TR(0x42a5f3);
__builtin_memmove((R+0),(R+8),4);
}
B42a5f5:L42a5f5:{c.instructions+=3;NFSU2_TR(0x42a5f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42a5fb:{NFSU2_TR(0x42a5fb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42a5fd:{NFSU2_TR(0x42a5fd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42a601;}}
}
B42a5ff:L42a5ff:{c.instructions+=1;NFSU2_TR(0x42a5ff);
__builtin_memmove((R+0),(R+8),4);
}
B42a601:L42a601:{c.instructions+=3;NFSU2_TR(0x42a601);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42a607:{NFSU2_TR(0x42a607);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42a609:{NFSU2_TR(0x42a609);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42a60d;}}
}
B42a60b:L42a60b:{c.instructions+=1;NFSU2_TR(0x42a60b);
__builtin_memmove((R+0),(R+8),4);
}
B42a60d:L42a60d:{c.instructions+=9;NFSU2_TR(0x42a60d);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B42a613:{NFSU2_TR(0x42a613);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B42a615:{NFSU2_TR(0x42a615);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a619:{NFSU2_TR(0x42a619);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42a61d:{NFSU2_TR(0x42a61d);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42a623:{NFSU2_TR(0x42a623);
{u32 ea_=u32(u32(7879992u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42a629:{NFSU2_TR(0x42a629);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a62b:{NFSU2_TR(0x42a62b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42a62e:{NFSU2_TR(0x42a62e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42a852;}}
}
B42a634:L42a634:{c.instructions+=8;NFSU2_TR(0x42a634);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a635:{NFSU2_TR(0x42a635);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a636:{NFSU2_TR(0x42a636);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1b1cull))));
}
B42a63c:{NFSU2_TR(0x42a63c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a63d:{NFSU2_TR(0x42a63d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42a645:{NFSU2_TR(0x42a645);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a649:{NFSU2_TR(0x42a649);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a64a:{NFSU2_TR(0x42a64a);
__builtin_memmove((R+12),(R+12),4);
}
B42a650:L42a650:{c.instructions+=4;NFSU2_TR(0x42a650);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B42a652:{NFSU2_TR(0x42a652);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42a654:{NFSU2_TR(0x42a654);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a658:{NFSU2_TR(0x42a658);
if(r1(R+518)){{goto L42a767;}}
}
B42a65e:L42a65e:{c.instructions+=1;NFSU2_TR(0x42a65e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a663ull));
TAIL_STATIC(0x5ed430u,5ed);
}
B42a663:L42a663:{c.instructions+=2;NFSU2_TR(0x42a663);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42a665:{NFSU2_TR(0x42a665);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42a767;}}
}
B42a66b:L42a66b:{c.instructions+=4;NFSU2_TR(0x42a66b);
__builtin_memmove((R+0),gp(0x8900b4),4);
}
B42a670:{NFSU2_TR(0x42a670);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42a673:{NFSU2_TR(0x42a673);
__builtin_memmove((R+4),(R+20),4);
}
B42a675:{NFSU2_TR(0x42a675);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a67aull));
TAIL_STATIC(0x5ec0a0u,5ec);
}
B42a67a:L42a67a:{c.instructions+=2;NFSU2_TR(0x42a67a);
__builtin_memmove((R+4),(R+20),4);
}
B42a67c:{NFSU2_TR(0x42a67c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a681ull));
TAIL_STATIC(0x5ec0b0u,5ec);
}
B42a681:L42a681:{c.instructions+=16;NFSU2_TR(0x42a681);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a684:{NFSU2_TR(0x42a684);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B42a687:{NFSU2_TR(0x42a687);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42a689:{NFSU2_TR(0x42a689);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B42a68c:{NFSU2_TR(0x42a68c);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42a690:{NFSU2_TR(0x42a690);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a694:{NFSU2_TR(0x42a694);
__builtin_memmove((R+8),gp(0x783d08),4);
}
B42a69a:{NFSU2_TR(0x42a69a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a69c:{NFSU2_TR(0x42a69c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a69d:{NFSU2_TR(0x42a69d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a69e:{NFSU2_TR(0x42a69e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a69f:{NFSU2_TR(0x42a69f);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42a6a3:{NFSU2_TR(0x42a6a3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a6a5:{NFSU2_TR(0x42a6a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a6a6:{NFSU2_TR(0x42a6a6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B42a6a8:{NFSU2_TR(0x42a6a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a6adull));
TAIL_STATIC(0x415130u,415);
}
B42a6ad:L42a6ad:{c.instructions+=5;NFSU2_TR(0x42a6ad);
__builtin_memmove((R+4),gp(0x783d08),4);
}
B42a6b3:{NFSU2_TR(0x42a6b3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B42a6b6:{NFSU2_TR(0x42a6b6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42a6b9:{NFSU2_TR(0x42a6b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a6bd:{NFSU2_TR(0x42a6bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42a767;}}
}
B42a6c3:L42a6c3:{c.instructions+=3;NFSU2_TR(0x42a6c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42a6c7:{NFSU2_TR(0x42a6c7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42a6c9:{NFSU2_TR(0x42a6c9);
if(r1(R+518)){{goto L42a767;}}
}
B42a6cf:L42a6cf:{c.instructions+=5;NFSU2_TR(0x42a6cf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a6d3:{NFSU2_TR(0x42a6d3);
{u32 ea_=u32(u32(7879952u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42a6d9:{NFSU2_TR(0x42a6d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a6db:{NFSU2_TR(0x42a6db);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42a6de:{NFSU2_TR(0x42a6de);
if(r1(R+514)){{goto L42a767;}}
}
B42a6e4:L42a6e4:{c.instructions+=8;NFSU2_TR(0x42a6e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42a6e8:{NFSU2_TR(0x42a6e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42a6ec:{NFSU2_TR(0x42a6ec);
__builtin_memmove((R+4),gp(0x890080),4);
}
B42a6f2:{NFSU2_TR(0x42a6f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a6f3:{NFSU2_TR(0x42a6f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a6f7:{NFSU2_TR(0x42a6f7);
__builtin_memmove((R+28),(R+24),4);
}
B42a6f9:{NFSU2_TR(0x42a6f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a6fd:{NFSU2_TR(0x42a6fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a702ull));
TAIL_STATIC(0x5f0fb0u,5f0);
}
B42a702:L42a702:{c.instructions+=4;NFSU2_TR(0x42a702);
{u32 ea_=u32(u32(7881372u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42a708:{NFSU2_TR(0x42a708);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a70a:{NFSU2_TR(0x42a70a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42a70d:{NFSU2_TR(0x42a70d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42a737;}}
}
B42a70f:L42a70f:{c.instructions+=3;NFSU2_TR(0x42a70f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a712:{NFSU2_TR(0x42a712);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42a715:{NFSU2_TR(0x42a715);
if(r1(R+518)){{goto L42a737;}}
}
B42a717:L42a717:{c.instructions+=8;NFSU2_TR(0x42a717);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a71b:{NFSU2_TR(0x42a71b);
__builtin_memmove((R+4),gp(0x783d18),4);
}
B42a721:{NFSU2_TR(0x42a721);
__builtin_memmove((R+8),gp(0x783d14),4);
}
B42a727:{NFSU2_TR(0x42a727);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a728:{NFSU2_TR(0x42a728);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a729:{NFSU2_TR(0x42a729);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a72a:{NFSU2_TR(0x42a72a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a72b:{NFSU2_TR(0x42a72b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a730ull));
TAIL_STATIC(0x410fc0u,410);
}
B42a730:L42a730:{c.instructions+=3;NFSU2_TR(0x42a730);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B42a733:{NFSU2_TR(0x42a733);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42a735:{NFSU2_TR(0x42a735);
if(r1(R+518)){{goto L42a78c;}}
}
B42a737:L42a737:{c.instructions+=9;NFSU2_TR(0x42a737);
__builtin_memmove((R+0),gp(0x783d0c),4);
}
B42a73c:{NFSU2_TR(0x42a73c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a73e:{NFSU2_TR(0x42a73e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a73f:{NFSU2_TR(0x42a73f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a740:{NFSU2_TR(0x42a740);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a741:{NFSU2_TR(0x42a741);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42a745:{NFSU2_TR(0x42a745);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a747:{NFSU2_TR(0x42a747);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a748:{NFSU2_TR(0x42a748);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a74dull));
TAIL_STATIC(0x415130u,415);
}
B42a74d:L42a74d:{c.instructions+=6;NFSU2_TR(0x42a74d);
{u32 ea_=u32(u32(7879948u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a753:{NFSU2_TR(0x42a753);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42a757:{NFSU2_TR(0x42a757);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B42a75a:{NFSU2_TR(0x42a75a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42a75d:{NFSU2_TR(0x42a75d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42a761:{NFSU2_TR(0x42a761);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42a6c3u);}goto L42a6c3;}}
}
B42a767:L42a767:{c.instructions+=8;NFSU2_TR(0x42a767);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a76b:{NFSU2_TR(0x42a76b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a76f:{NFSU2_TR(0x42a76f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B42a770:{NFSU2_TR(0x42a770);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B42a773:{NFSU2_TR(0x42a773);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42a776:{NFSU2_TR(0x42a776);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a77a:{NFSU2_TR(0x42a77a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a77e:{NFSU2_TR(0x42a77e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42a650u);}goto L42a650;}}
}
B42a784:L42a784:{c.instructions+=6;NFSU2_TR(0x42a784);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42a785:{NFSU2_TR(0x42a785);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42a786:{NFSU2_TR(0x42a786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42a787:{NFSU2_TR(0x42a787);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42a788:{NFSU2_TR(0x42a788);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42a78b:{NFSU2_TR(0x42a78b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42a78c:L42a78c:{c.instructions+=3;NFSU2_TR(0x42a78c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42a790:{NFSU2_TR(0x42a790);
__builtin_memmove((R+4),(R+28),4);
}
B42a792:{NFSU2_TR(0x42a792);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a797ull));
TAIL_STATIC(0x5f6d50u,5f6);
}
B42a797:L42a797:{c.instructions+=5;NFSU2_TR(0x42a797);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42a79b:{NFSU2_TR(0x42a79b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a79e:{NFSU2_TR(0x42a79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42a7a1:{NFSU2_TR(0x42a7a1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B42a7a4:{NFSU2_TR(0x42a7a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a7a9ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B42a7a9:L42a7a9:{c.instructions+=12;NFSU2_TR(0x42a7a9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42a7ab:{NFSU2_TR(0x42a7ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42a7ad:{NFSU2_TR(0x42a7ad);
__builtin_memmove((R+0),(R+518),1);
}
B42a7b0:{NFSU2_TR(0x42a7b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42a7b8:{NFSU2_TR(0x42a7b8);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+4,u32(r1(U+12)));
}
B42a7bd:{NFSU2_TR(0x42a7bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B42a7c0:{NFSU2_TR(0x42a7c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42a7c2:{NFSU2_TR(0x42a7c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a7c6:{NFSU2_TR(0x42a7c6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42a7ca:{NFSU2_TR(0x42a7ca);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42a7d0:{NFSU2_TR(0x42a7d0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42a7d4:{NFSU2_TR(0x42a7d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42a7de;}}
}
B42a7d6:L42a7d6:{c.instructions+=1;NFSU2_TR(0x42a7d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42a7de:L42a7de:{c.instructions+=13;NFSU2_TR(0x42a7de);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42a7e2:{NFSU2_TR(0x42a7e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a7e6:{NFSU2_TR(0x42a7e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a7ea:{NFSU2_TR(0x42a7ea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a7ec:{NFSU2_TR(0x42a7ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a7ee:{NFSU2_TR(0x42a7ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a7f0:{NFSU2_TR(0x42a7f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a7f1:{NFSU2_TR(0x42a7f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a7f3:{NFSU2_TR(0x42a7f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a7f4:{NFSU2_TR(0x42a7f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a7f5:{NFSU2_TR(0x42a7f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a7f6:{NFSU2_TR(0x42a7f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a7fa:{NFSU2_TR(0x42a7fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a7ffull));
TAIL_STATIC(0x5fbed0u,5fb);
}
B42a7ff:L42a7ff:{c.instructions+=11;NFSU2_TR(0x42a7ff);
__builtin_memmove((R+0),gp(0x783d30),4);
}
B42a804:{NFSU2_TR(0x42a804);
__builtin_memmove((R+4),gp(0x783d28),4);
}
B42a80a:{NFSU2_TR(0x42a80a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a80b:{NFSU2_TR(0x42a80b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a80d:{NFSU2_TR(0x42a80d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a80e:{NFSU2_TR(0x42a80e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42a810:{NFSU2_TR(0x42a810);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B42a813:{NFSU2_TR(0x42a813);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a814:{NFSU2_TR(0x42a814);
__builtin_memmove((R+4),(R+28),4);
}
B42a816:{NFSU2_TR(0x42a816);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42a819:{NFSU2_TR(0x42a819);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a81eull));
TAIL_STATIC(0x428630u,428);
}
B42a81e:L42a81e:{c.instructions+=14;NFSU2_TR(0x42a81e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a822:{NFSU2_TR(0x42a822);
__builtin_memmove((R+24),gp(0x86518c),4);
}
B42a828:{NFSU2_TR(0x42a828);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a82c:{NFSU2_TR(0x42a82c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B42a832:{NFSU2_TR(0x42a832);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B42a835:{NFSU2_TR(0x42a835);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42a836:{NFSU2_TR(0x42a836);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B42a839:{NFSU2_TR(0x42a839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42a83a:{NFSU2_TR(0x42a83a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B42a83d:{NFSU2_TR(0x42a83d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B42a83f:{NFSU2_TR(0x42a83f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42a840:{NFSU2_TR(0x42a840);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42a84a:{NFSU2_TR(0x42a84a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b18ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42a851:{NFSU2_TR(0x42a851);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42a852:L42a852:{c.instructions+=2;NFSU2_TR(0x42a852);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42a855:{NFSU2_TR(0x42a855);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42a860:L42a860:{c.instructions+=10;NFSU2_TR(0x42a860);
__builtin_memmove((R+0),gp(0x8900b4),4);
}
B42a865:{NFSU2_TR(0x42a865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B42a868:{NFSU2_TR(0x42a868);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a869:{NFSU2_TR(0x42a869);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42a86c:{NFSU2_TR(0x42a86c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a86d:{NFSU2_TR(0x42a86d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a86e:{NFSU2_TR(0x42a86e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a86f:{NFSU2_TR(0x42a86f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42a875:{NFSU2_TR(0x42a875);
w4(R+20,u32(0x3ull));
}
B42a87a:{NFSU2_TR(0x42a87a);
__builtin_memmove((R+12),(R+12),4);
}
B42a880:L42a880:{c.instructions+=3;NFSU2_TR(0x42a880);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42a883:{NFSU2_TR(0x42a883);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42a885:{NFSU2_TR(0x42a885);
if(r1(R+518)){{goto L42a925;}}
}
B42a88b:L42a88b:{c.instructions+=2;NFSU2_TR(0x42a88b);
__builtin_memmove((R+4),(R+28),4);
}
B42a88d:{NFSU2_TR(0x42a88d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a892ull));
TAIL_STATIC(0x5ed430u,5ed);
}
B42a892:L42a892:{c.instructions+=2;NFSU2_TR(0x42a892);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42a894:{NFSU2_TR(0x42a894);
if(r1(R+518)){{goto L42a925;}}
}
B42a89a:L42a89a:{c.instructions+=10;NFSU2_TR(0x42a89a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42a89d:{NFSU2_TR(0x42a89d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42a8a1:{NFSU2_TR(0x42a8a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a8a2:{NFSU2_TR(0x42a8a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42a8a6:{NFSU2_TR(0x42a8a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a8a7:{NFSU2_TR(0x42a8a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a8a8:{NFSU2_TR(0x42a8a8);
__builtin_memmove((R+4),(R+28),4);
}
B42a8aa:{NFSU2_TR(0x42a8aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42a8b2:{NFSU2_TR(0x42a8b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42a8ba:{NFSU2_TR(0x42a8ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a8bfull));
TAIL_STATIC(0x41c100u,41c);
}
B42a8bf:L42a8bf:{c.instructions+=6;NFSU2_TR(0x42a8bf);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a8c3:{NFSU2_TR(0x42a8c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B42a8c5:{NFSU2_TR(0x42a8c5);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42a8c7:{NFSU2_TR(0x42a8c7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42a8ca:{NFSU2_TR(0x42a8ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42a8d2:{NFSU2_TR(0x42a8d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42a937;}}
}
B42a8d4:L42a8d4:{c.instructions+=6;NFSU2_TR(0x42a8d4);
{u32 ea_=u32(u32(7879968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a8da:{NFSU2_TR(0x42a8da);
{u32 ea_=u32(u32(7879964u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42a8e0:{NFSU2_TR(0x42a8e0);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B42a8e2:{NFSU2_TR(0x42a8e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a8e4:{NFSU2_TR(0x42a8e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42a8e7:{NFSU2_TR(0x42a8e7);
if(r1(R+518)){{goto L42a944;}}
}
B42a8e9:L42a8e9:{c.instructions+=1;NFSU2_TR(0x42a8e9);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B42a8ef:L42a8ef:{c.instructions+=16;NFSU2_TR(0x42a8ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a8f2:{NFSU2_TR(0x42a8f2);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B42a8f7:{NFSU2_TR(0x42a8f7);
__builtin_memmove((R+8),gp(0x783d28),4);
}
B42a8fd:{NFSU2_TR(0x42a8fd);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B42a8ff:{NFSU2_TR(0x42a8ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a903:{NFSU2_TR(0x42a903);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42a907:{NFSU2_TR(0x42a907);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a908:{NFSU2_TR(0x42a908);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42a90c:{NFSU2_TR(0x42a90c);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42a912:{NFSU2_TR(0x42a912);
{u32 ea_=u32(u32(7879984u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B42a918:{NFSU2_TR(0x42a918);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42a91b:{NFSU2_TR(0x42a91b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a91c:{NFSU2_TR(0x42a91c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a91d:{NFSU2_TR(0x42a91d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a91e:{NFSU2_TR(0x42a91e);
__builtin_memmove((R+4),(R+28),4);
}
B42a920:{NFSU2_TR(0x42a920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a925ull));
TAIL_STATIC(0x428630u,428);
}
B42a925:L42a925:{c.instructions+=3;NFSU2_TR(0x42a925);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B42a928:{NFSU2_TR(0x42a928);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B42a929:{NFSU2_TR(0x42a929);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42a880u);}goto L42a880;}}
}
B42a92f:L42a92f:{c.instructions+=6;NFSU2_TR(0x42a92f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42a930:{NFSU2_TR(0x42a930);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42a931:{NFSU2_TR(0x42a931);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42a932:{NFSU2_TR(0x42a932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42a933:{NFSU2_TR(0x42a933);
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
B42a936:{NFSU2_TR(0x42a936);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42a937:L42a937:{c.instructions+=4;NFSU2_TR(0x42a937);
{u32 ea_=u32(u32(7879964u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42a93d:{NFSU2_TR(0x42a93d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a93f:{NFSU2_TR(0x42a93f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42a942:{NFSU2_TR(0x42a942);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42a8e9u);}goto L42a8e9;}}
}
B42a944:L42a944:{c.instructions+=2;NFSU2_TR(0x42a944);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42a947:{NFSU2_TR(0x42a947);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42a982;}}
}
B42a949:L42a949:{c.instructions+=5;NFSU2_TR(0x42a949);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a94d:{NFSU2_TR(0x42a94d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42a953:{NFSU2_TR(0x42a953);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a955:{NFSU2_TR(0x42a955);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42a958:{NFSU2_TR(0x42a958);
if(r1(R+514)){{goto L42a96e;}}
}
B42a95a:L42a95a:{c.instructions+=5;NFSU2_TR(0x42a95a);
{u32 ea_=u32(u32(7879980u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a960:{NFSU2_TR(0x42a960);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+24)),r4(U+0));
}
B42a966:{NFSU2_TR(0x42a966);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B42a968:{NFSU2_TR(0x42a968);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42a96c:{NFSU2_TR(0x42a96c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42a8efu);}goto L42a8ef;}
}
B42a96e:L42a96e:{c.instructions+=4;NFSU2_TR(0x42a96e);
__builtin_memmove((R+0),gp(0x783d2c),4);
}
B42a973:{NFSU2_TR(0x42a973);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a977:{NFSU2_TR(0x42a977);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+24)),r4(U+0));
}
B42a97d:{NFSU2_TR(0x42a97d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42a8efu);}goto L42a8ef;}
}
B42a982:L42a982:{c.instructions+=2;NFSU2_TR(0x42a982);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42a985:{NFSU2_TR(0x42a985);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42a9a9;}}
}
B42a987:L42a987:{c.instructions+=6;NFSU2_TR(0x42a987);
{u32 ea_=u32(u32(7879972u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a98d:{NFSU2_TR(0x42a98d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B42a98f:{NFSU2_TR(0x42a98f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42a993:{NFSU2_TR(0x42a993);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a995:{NFSU2_TR(0x42a995);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42a998:{NFSU2_TR(0x42a998);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42a95au);}goto L42a95a;}}
}
B42a99a:L42a99a:{c.instructions+=3;NFSU2_TR(0x42a99a);
__builtin_memmove((R+4),gp(0x783d2c),4);
}
B42a9a0:{NFSU2_TR(0x42a9a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a9a4:{NFSU2_TR(0x42a9a4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42a8efu);}goto L42a8ef;}
}
B42a9a9:L42a9a9:{c.instructions+=5;NFSU2_TR(0x42a9a9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a9ad:{NFSU2_TR(0x42a9ad);
{u32 ea_=u32(u32(7879972u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42a9b3:{NFSU2_TR(0x42a9b3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42a9b5:{NFSU2_TR(0x42a9b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42a9b8:{NFSU2_TR(0x42a9b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42a9cf;}}
}
B42a9ba:L42a9ba:{c.instructions+=4;NFSU2_TR(0x42a9ba);
__builtin_memmove((R+8),gp(0x783d2c),4);
}
B42a9c0:{NFSU2_TR(0x42a9c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42a9c4:{NFSU2_TR(0x42a9c4);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+24)),r4(U+0));
}
B42a9ca:{NFSU2_TR(0x42a9ca);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42a8efu);}goto L42a8ef;}
}
B42a9cf:L42a9cf:{c.instructions+=4;NFSU2_TR(0x42a9cf);
{u32 ea_=u32(u32(7879980u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42a9d5:{NFSU2_TR(0x42a9d5);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B42a9d7:{NFSU2_TR(0x42a9d7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42a9db:{NFSU2_TR(0x42a9db);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42a8efu);}goto L42a8ef;}
}
B42a9e0:L42a9e0:{c.instructions+=4;NFSU2_TR(0x42a9e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42a9e1:{NFSU2_TR(0x42a9e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42a9e5:{NFSU2_TR(0x42a9e5);
__builtin_memmove((R+4),(R+24),4);
}
B42a9e7:{NFSU2_TR(0x42a9e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42a9ecull));
TAIL_STATIC(0x5ed430u,5ed);
}
B42a9ec:L42a9ec:{c.instructions+=2;NFSU2_TR(0x42a9ec);
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
B42a9ee:{NFSU2_TR(0x42a9ee);
if(r1(R+518)){{goto L42aa0f;}}
}
B42a9f0:L42a9f0:{c.instructions+=3;NFSU2_TR(0x42a9f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42a9f3:{NFSU2_TR(0x42a9f3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42a9f6:{NFSU2_TR(0x42a9f6);
if(r1(R+518)){{goto L42aa02;}}
}
B42a9f8:L42a9f8:{c.instructions+=2;NFSU2_TR(0x42a9f8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42a9fb:{NFSU2_TR(0x42a9fb);
if(r1(R+518)){{goto L42aa02;}}
}
B42a9fd:L42a9fd:{c.instructions+=2;NFSU2_TR(0x42a9fd);
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
B42aa00:{NFSU2_TR(0x42aa00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42aa0f;}}
}
B42aa02:L42aa02:{c.instructions+=4;NFSU2_TR(0x42aa02);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42aa06:{NFSU2_TR(0x42aa06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42aa09:{NFSU2_TR(0x42aa09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42aa0a:{NFSU2_TR(0x42aa0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42aa0full));
TAIL_STATIC(0x428510u,428);
}
B42aa0f:L42aa0f:{c.instructions+=2;NFSU2_TR(0x42aa0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42aa10:{NFSU2_TR(0x42aa10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42aa20:L42aa20:{c.instructions+=3;NFSU2_TR(0x42aa20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42aa21:{NFSU2_TR(0x42aa21);
__builtin_memmove((R+28),(R+4),4);
}
B42aa23:{NFSU2_TR(0x42aa23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42aa28ull));
TAIL_STATIC(0x402070u,402);
}
B42aa28:L42aa28:{c.instructions+=4;NFSU2_TR(0x42aa28);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42aa2c:{NFSU2_TR(0x42aa2c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B42aa2d:{NFSU2_TR(0x42aa2d);
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
B42aa30:{NFSU2_TR(0x42aa30);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L42ab40;}}
}
B42aa36:L42aa36:{c.instructions+=1;NFSU2_TR(0x42aa36);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x42aba0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42aa3d:L42aa3d:{c.instructions+=3;NFSU2_TR(0x42aa3d);
__builtin_memmove((R+0),gp(0x81cb70),4);
}
B42aa42:{NFSU2_TR(0x42aa42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42aa43:{NFSU2_TR(0x42aa43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42aa48ull));
TAIL_STATIC(0x440e50u,440);
}
B42aa48:L42aa48:{c.instructions+=3;NFSU2_TR(0x42aa48);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42aa4b:{NFSU2_TR(0x42aa4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42aa4d:{NFSU2_TR(0x42aa4d);
if(r1(R+518)){{goto L42ab38;}}
}
B42aa53:L42aa53:{c.instructions+=3;NFSU2_TR(0x42aa53);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42aa58:{NFSU2_TR(0x42aa58);
__builtin_memmove((R+4),(R+0),4);
}
B42aa5a:{NFSU2_TR(0x42aa5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42aa5full));
TAIL_STATIC(0x40ca20u,40c);
}
B42aa5f:L42aa5f:{c.instructions+=1;NFSU2_TR(0x42aa5f);
{goto L42ab3a;}
}
B42aa64:L42aa64:{c.instructions+=3;NFSU2_TR(0x42aa64);
__builtin_memmove((R+4),gp(0x81cb70),4);
}
B42aa6a:{NFSU2_TR(0x42aa6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42aa6b:{NFSU2_TR(0x42aa6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42aa70ull));
TAIL_STATIC(0x440e50u,440);
}
B42aa70:L42aa70:{c.instructions+=3;NFSU2_TR(0x42aa70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42aa73:{NFSU2_TR(0x42aa73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42aa75:{NFSU2_TR(0x42aa75);
if(r1(R+518)){{goto L42ab38;}}
}
B42aa7b:L42aa7b:{c.instructions+=3;NFSU2_TR(0x42aa7b);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42aa80:{NFSU2_TR(0x42aa80);
__builtin_memmove((R+4),(R+0),4);
}
B42aa82:{NFSU2_TR(0x42aa82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42aa87ull));
TAIL_STATIC(0x40ca70u,40c);
}
B42aa87:L42aa87:{c.instructions+=1;NFSU2_TR(0x42aa87);
{goto L42ab3a;}
}
B42aa8c:L42aa8c:{c.instructions+=3;NFSU2_TR(0x42aa8c);
__builtin_memmove((R+8),gp(0x81cb70),4);
}
B42aa92:{NFSU2_TR(0x42aa92);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42aa93:{NFSU2_TR(0x42aa93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42aa98ull));
TAIL_STATIC(0x440e50u,440);
}
B42aa98:L42aa98:{c.instructions+=3;NFSU2_TR(0x42aa98);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42aa9b:{NFSU2_TR(0x42aa9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42aa9d:{NFSU2_TR(0x42aa9d);
if(r1(R+518)){{goto L42ab38;}}
}
B42aaa3:L42aaa3:{c.instructions+=3;NFSU2_TR(0x42aaa3);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42aaa8:{NFSU2_TR(0x42aaa8);
__builtin_memmove((R+4),(R+0),4);
}
B42aaaa:{NFSU2_TR(0x42aaaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42aaafull));
TAIL_STATIC(0x40cab0u,40c);
}
B42aaaf:L42aaaf:{c.instructions+=1;NFSU2_TR(0x42aaaf);
{goto L42ab3a;}
}
B42aab4:L42aab4:{c.instructions+=3;NFSU2_TR(0x42aab4);
__builtin_memmove((R+0),gp(0x81cb70),4);
}
B42aab9:{NFSU2_TR(0x42aab9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42aaba:{NFSU2_TR(0x42aaba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42aabfull));
TAIL_STATIC(0x440e50u,440);
}
B42aabf:L42aabf:{c.instructions+=3;NFSU2_TR(0x42aabf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42aac2:{NFSU2_TR(0x42aac2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42aac4:{NFSU2_TR(0x42aac4);
if(r1(R+518)){{goto L42ab38;}}
}
B42aac6:L42aac6:{c.instructions+=3;NFSU2_TR(0x42aac6);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42aacb:{NFSU2_TR(0x42aacb);
__builtin_memmove((R+4),(R+0),4);
}
B42aacd:{NFSU2_TR(0x42aacd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42aad2ull));
TAIL_STATIC(0x40caf0u,40c);
}
B42aad2:L42aad2:{c.instructions+=1;NFSU2_TR(0x42aad2);
{goto L42ab3a;}
}
B42aad4:L42aad4:{c.instructions+=3;NFSU2_TR(0x42aad4);
__builtin_memmove((R+4),gp(0x81cb70),4);
}
B42aada:{NFSU2_TR(0x42aada);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42aadb:{NFSU2_TR(0x42aadb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42aae0ull));
TAIL_STATIC(0x440e50u,440);
}
B42aae0:L42aae0:{c.instructions+=3;NFSU2_TR(0x42aae0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42aae3:{NFSU2_TR(0x42aae3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42aae5:{NFSU2_TR(0x42aae5);
if(r1(R+518)){{goto L42ab38;}}
}
B42aae7:L42aae7:{c.instructions+=3;NFSU2_TR(0x42aae7);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42aaec:{NFSU2_TR(0x42aaec);
__builtin_memmove((R+4),(R+0),4);
}
B42aaee:{NFSU2_TR(0x42aaee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42aaf3ull));
TAIL_STATIC(0x40cb30u,40c);
}
B42aaf3:L42aaf3:{c.instructions+=1;NFSU2_TR(0x42aaf3);
{goto L42ab3a;}
}
B42aaf5:L42aaf5:{c.instructions+=3;NFSU2_TR(0x42aaf5);
__builtin_memmove((R+8),gp(0x81cb70),4);
}
B42aafb:{NFSU2_TR(0x42aafb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42aafc:{NFSU2_TR(0x42aafc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ab01ull));
TAIL_STATIC(0x440e50u,440);
}
B42ab01:L42ab01:{c.instructions+=3;NFSU2_TR(0x42ab01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42ab04:{NFSU2_TR(0x42ab04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ab06:{NFSU2_TR(0x42ab06);
if(r1(R+518)){{goto L42ab38;}}
}
B42ab08:L42ab08:{c.instructions+=3;NFSU2_TR(0x42ab08);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ab0d:{NFSU2_TR(0x42ab0d);
__builtin_memmove((R+4),(R+0),4);
}
B42ab0f:{NFSU2_TR(0x42ab0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ab14ull));
TAIL_STATIC(0x40cb80u,40c);
}
B42ab14:L42ab14:{c.instructions+=1;NFSU2_TR(0x42ab14);
{goto L42ab3a;}
}
B42ab16:L42ab16:{c.instructions+=3;NFSU2_TR(0x42ab16);
__builtin_memmove((R+0),gp(0x81cb70),4);
}
B42ab1b:{NFSU2_TR(0x42ab1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ab1c:{NFSU2_TR(0x42ab1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ab21ull));
TAIL_STATIC(0x440e50u,440);
}
B42ab21:L42ab21:{c.instructions+=3;NFSU2_TR(0x42ab21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42ab24:{NFSU2_TR(0x42ab24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ab26:{NFSU2_TR(0x42ab26);
if(r1(R+518)){{goto L42ab38;}}
}
B42ab28:L42ab28:{c.instructions+=4;NFSU2_TR(0x42ab28);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ab2a:{NFSU2_TR(0x42ab2a);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ab2f:{NFSU2_TR(0x42ab2f);
__builtin_memmove((R+4),(R+0),4);
}
B42ab31:{NFSU2_TR(0x42ab31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ab36ull));
TAIL_STATIC(0x40daf0u,40d);
}
B42ab36:L42ab36:{c.instructions+=1;NFSU2_TR(0x42ab36);
{goto L42ab3a;}
}
B42ab38:L42ab38:{c.instructions+=1;NFSU2_TR(0x42ab38);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42ab3a:L42ab3a:{c.instructions+=1;NFSU2_TR(0x42ab3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ab40:L42ab40:{c.instructions+=3;NFSU2_TR(0x42ab40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ab46:{NFSU2_TR(0x42ab46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ab48:{NFSU2_TR(0x42ab48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ab94;}}
}
B42ab4a:L42ab4a:{c.instructions+=4;NFSU2_TR(0x42ab4a);
__builtin_memmove((R+4),gp(0x81cb70),4);
}
B42ab50:{NFSU2_TR(0x42ab50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ab51:{NFSU2_TR(0x42ab51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ab52:{NFSU2_TR(0x42ab52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ab57ull));
TAIL_STATIC(0x440e50u,440);
}
B42ab57:L42ab57:{c.instructions+=4;NFSU2_TR(0x42ab57);
__builtin_memmove((R+24),(R+0),4);
}
B42ab59:{NFSU2_TR(0x42ab59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42ab5c:{NFSU2_TR(0x42ab5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ab5e:{NFSU2_TR(0x42ab5e);
if(r1(R+518)){{goto L42ab8b;}}
}
B42ab60:L42ab60:{c.instructions+=3;NFSU2_TR(0x42ab60);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ab65:{NFSU2_TR(0x42ab65);
__builtin_memmove((R+4),(R+24),4);
}
B42ab67:{NFSU2_TR(0x42ab67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ab6cull));
TAIL_STATIC(0x40c960u,40c);
}
B42ab6c:L42ab6c:{c.instructions+=6;NFSU2_TR(0x42ab6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42ab73:{NFSU2_TR(0x42ab73);
u8 U[4];
w4(U+0,u32(0x784900ull));
s4(u32(r4(R+24)),r4(U+0));
}
B42ab79:{NFSU2_TR(0x42ab79);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ab7f:{NFSU2_TR(0x42ab7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ab80:{NFSU2_TR(0x42ab80);
__builtin_memmove((R+4),(R+28),4);
}
B42ab82:{NFSU2_TR(0x42ab82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ab87ull));
TAIL_STATIC(0x428490u,428);
}
B42ab87:L42ab87:{c.instructions+=2;NFSU2_TR(0x42ab87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ab88:{NFSU2_TR(0x42ab88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42ab8b:L42ab8b:{c.instructions+=3;NFSU2_TR(0x42ab8b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B42ab8d:{NFSU2_TR(0x42ab8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ab93:{NFSU2_TR(0x42ab93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42ab94:L42ab94:{c.instructions+=2;NFSU2_TR(0x42ab94);
__builtin_memmove((R+4),(R+28),4);
}
B42ab96:{NFSU2_TR(0x42ab96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ab9bull));
TAIL_STATIC(0x428490u,428);
}
B42ab9b:L42ab9b:{c.instructions+=2;NFSU2_TR(0x42ab9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ab9c:{NFSU2_TR(0x42ab9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42abd0:L42abd0:{c.instructions+=23;NFSU2_TR(0x42abd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42abd1:{NFSU2_TR(0x42abd1);
__builtin_memmove((R+20),(R+16),4);
}
B42abd3:{NFSU2_TR(0x42abd3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B42abd6:{NFSU2_TR(0x42abd6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42abd8:{NFSU2_TR(0x42abd8);
u8 U[4];
w4(U+0,u32(0x771b1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42abdd:{NFSU2_TR(0x42abdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42abe3:{NFSU2_TR(0x42abe3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42abe4:{NFSU2_TR(0x42abe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42abeb:{NFSU2_TR(0x42abeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1e8ull))));
}
B42abf1:{NFSU2_TR(0x42abf1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42abf2:{NFSU2_TR(0x42abf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42abf5:{NFSU2_TR(0x42abf5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42abf6:{NFSU2_TR(0x42abf6);
__builtin_memmove((R+24),(R+4),4);
}
B42abf8:{NFSU2_TR(0x42abf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42abfb:{NFSU2_TR(0x42abfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ac01:{NFSU2_TR(0x42ac01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ac02:{NFSU2_TR(0x42ac02);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ac04:{NFSU2_TR(0x42ac04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x730ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ac0a:{NFSU2_TR(0x42ac0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x730ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ac10:{NFSU2_TR(0x42ac10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B42ac13:{NFSU2_TR(0x42ac13);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ac15:{NFSU2_TR(0x42ac15);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42ac19:{NFSU2_TR(0x42ac19);
if(r1(R+518)){{goto L42ac47;}}
}
B42ac1b:L42ac1b:{c.instructions+=2;NFSU2_TR(0x42ac1b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42ac21:{NFSU2_TR(0x42ac21);
if(r1(R+518)){{goto L42ac47;}}
}
B42ac23:L42ac23:{c.instructions+=2;NFSU2_TR(0x42ac23);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ac25:{NFSU2_TR(0x42ac25);
if(r1(R+518)){{goto L42ac3f;}}
}
B42ac27:L42ac27:{c.instructions+=2;NFSU2_TR(0x42ac27);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42ac2b:{NFSU2_TR(0x42ac2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ac3f;}}
}
B42ac2d:L42ac2d:{c.instructions+=2;NFSU2_TR(0x42ac2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ac2e:{NFSU2_TR(0x42ac2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ac33ull));
TAIL_STATIC(0x5f4400u,5f4);
}
B42ac33:L42ac33:{c.instructions+=4;NFSU2_TR(0x42ac33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ac36:{NFSU2_TR(0x42ac36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42ac39:{NFSU2_TR(0x42ac39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ac3a:{NFSU2_TR(0x42ac3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ac3full));
TAIL_STATIC(0x5f46a0u,5f4);
}
B42ac3f:L42ac3f:{c.instructions+=3;NFSU2_TR(0x42ac3f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ac40:{NFSU2_TR(0x42ac40);
__builtin_memmove((R+4),(R+28),4);
}
B42ac42:{NFSU2_TR(0x42ac42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ac47ull));
TAIL_STATIC(0x577310u,577);
}
B42ac47:L42ac47:{c.instructions+=3;NFSU2_TR(0x42ac47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ac48:{NFSU2_TR(0x42ac48);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x754ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42ac4e:{NFSU2_TR(0x42ac4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ac53ull));
TAIL_STATIC(0x577310u,577);
}
B42ac53:L42ac53:{c.instructions+=14;NFSU2_TR(0x42ac53);
{u32 ea_=u32(r4(R+24)+u32(1776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ac59:{NFSU2_TR(0x42ac59);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B42ac5c:{NFSU2_TR(0x42ac5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ac62:{NFSU2_TR(0x42ac62);
{u32 ea_=u32(r4(R+24)+u32(1776u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42ac68:{NFSU2_TR(0x42ac68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42ac6f:{NFSU2_TR(0x42ac6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x308ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B42ac76:{NFSU2_TR(0x42ac76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ac79:{NFSU2_TR(0x42ac79);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42ac7c:{NFSU2_TR(0x42ac7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42ac7f:{NFSU2_TR(0x42ac7f);
w4(R+0,u32(0x2ull));
}
B42ac84:{NFSU2_TR(0x42ac84);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42ac86:{NFSU2_TR(0x42ac86);
__builtin_memmove((R+28),gp(0x86518c),4);
}
B42ac8c:{NFSU2_TR(0x42ac8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ac90:{NFSU2_TR(0x42ac90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42adce;}}
}
B42ac96:L42ac96:{c.instructions+=4;NFSU2_TR(0x42ac96);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B42ac9b:{NFSU2_TR(0x42ac9b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ac9d:{NFSU2_TR(0x42ac9d);
w4(R+28,u32(0x8ull));
}
B42aca2:{NFSU2_TR(0x42aca2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42acad;}}
}
B42aca4:L42aca4:{c.instructions+=3;NFSU2_TR(0x42aca4);
__builtin_memmove((R+0),gp(0x890108),4);
}
B42aca9:{NFSU2_TR(0x42aca9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42acab:{NFSU2_TR(0x42acab);
if(r1(R+518)){{goto L42acb8;}}
}
B42acad:L42acad:{c.instructions+=2;NFSU2_TR(0x42acad);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42acb1:{NFSU2_TR(0x42acb1);
if(r1(R+518)){{goto L42acb8;}}
}
B42acb3:L42acb3:{c.instructions+=1;NFSU2_TR(0x42acb3);
w4(R+28,u32(0x4ull));
}
B42acb8:L42acb8:{c.instructions+=9;NFSU2_TR(0x42acb8);
__builtin_memmove((R+0),gp(0x7fb724),4);
}
B42acbd:{NFSU2_TR(0x42acbd);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B42acbe:{NFSU2_TR(0x42acbe);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x42acbe);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x42acbe);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B42acc0:{NFSU2_TR(0x42acc0);
__builtin_memmove((R+0),gp(0x890080),4);
}
B42acc5:{NFSU2_TR(0x42acc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42acc8:{NFSU2_TR(0x42acc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42accb:{NFSU2_TR(0x42accb);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B42accd:{NFSU2_TR(0x42accd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42accf:{NFSU2_TR(0x42accf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42acdd;}}
}
B42acd1:L42acd1:{c.instructions+=3;NFSU2_TR(0x42acd1);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B42acd3:{NFSU2_TR(0x42acd3);
u8 U[24];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B42acd7:{NFSU2_TR(0x42acd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42acdd;}}
}
B42acd9:L42acd9:{c.instructions+=2;NFSU2_TR(0x42acd9);
w1(R+12,u8(0x1ull));
}
B42acdb:{NFSU2_TR(0x42acdb);
{goto L42acdf;}
}
B42acdd:L42acdd:{c.instructions+=1;NFSU2_TR(0x42acdd);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B42acdf:L42acdf:{c.instructions+=10;NFSU2_TR(0x42acdf);
__builtin_memmove((R+28),gp(0x86518c),4);
}
B42ace5:{NFSU2_TR(0x42ace5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x778ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42aceb:{NFSU2_TR(0x42aceb);
__builtin_memmove((R+0),(R+28),4);
}
B42aced:{NFSU2_TR(0x42aced);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B42acef:{NFSU2_TR(0x42acef);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42acf3:{NFSU2_TR(0x42acf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42acf7:{NFSU2_TR(0x42acf7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42acfb:{NFSU2_TR(0x42acfb);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42ad01:{NFSU2_TR(0x42ad01);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42ad07:{NFSU2_TR(0x42ad07);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42ad09:L42ad09:{c.instructions+=2;NFSU2_TR(0x42ad09);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42ad0c:{NFSU2_TR(0x42ad0c);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42ad16;}}
}
B42ad0e:L42ad0e:{c.instructions+=2;NFSU2_TR(0x42ad0e);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ad10:{NFSU2_TR(0x42ad10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ae2f;}}
}
B42ad16:L42ad16:{c.instructions+=3;NFSU2_TR(0x42ad16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ad1c:{NFSU2_TR(0x42ad1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ad1e:{NFSU2_TR(0x42ad1e);
if(r1(R+518)){{goto L42ae2f;}}
}
B42ad24:L42ad24:{c.instructions+=2;NFSU2_TR(0x42ad24);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42ad28:{NFSU2_TR(0x42ad28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ad64;}}
}
B42ad2a:L42ad2a:{c.instructions+=2;NFSU2_TR(0x42ad2a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B42ad2d:{NFSU2_TR(0x42ad2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ad32ull));
TAIL_STATIC(0x59fa30u,59f);
}
B42ad32:L42ad32:{c.instructions+=2;NFSU2_TR(0x42ad32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ad34:{NFSU2_TR(0x42ad34);
if(r1(R+518)){{goto L42ad64;}}
}
B42ad36:L42ad36:{c.instructions+=2;NFSU2_TR(0x42ad36);
__builtin_memmove((R+4),(R+24),4);
}
B42ad38:{NFSU2_TR(0x42ad38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ad3dull));
TAIL_STATIC(0x40d850u,40d);
}
B42ad3d:L42ad3d:{c.instructions+=2;NFSU2_TR(0x42ad3d);
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
B42ad3f:{NFSU2_TR(0x42ad3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ad64;}}
}
B42ad41:L42ad41:{c.instructions+=3;NFSU2_TR(0x42ad41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42ad43:{NFSU2_TR(0x42ad43);
__builtin_memmove((R+4),(R+24),4);
}
B42ad45:{NFSU2_TR(0x42ad45);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ad4bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42ad4b:L42ad4b:{c.instructions+=2;NFSU2_TR(0x42ad4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ad4d:{NFSU2_TR(0x42ad4d);
if(r1(R+518)){{goto L42ad64;}}
}
B42ad4f:L42ad4f:{c.instructions+=3;NFSU2_TR(0x42ad4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ad52:{NFSU2_TR(0x42ad52);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B42ad55:{NFSU2_TR(0x42ad55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ad5aull));
TAIL_STATIC(0x592500u,592);
}
B42ad5a:L42ad5a:{c.instructions+=3;NFSU2_TR(0x42ad5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42ad5c:{NFSU2_TR(0x42ad5c);
__builtin_memmove((R+4),(R+24),4);
}
B42ad5e:{NFSU2_TR(0x42ad5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ad64ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42ad64:L42ad64:{c.instructions+=3;NFSU2_TR(0x42ad64);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42ad6a:{NFSU2_TR(0x42ad6a);
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
B42ad6c:{NFSU2_TR(0x42ad6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x42b2c1u,42b);}
}
B42ad72:L42ad72:{c.instructions+=5;NFSU2_TR(0x42ad72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ad78:{NFSU2_TR(0x42ad78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42ad7a:{NFSU2_TR(0x42ad7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42ad7d:{NFSU2_TR(0x42ad7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ad7e:{NFSU2_TR(0x42ad7e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ad81ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42ad81:L42ad81:{c.instructions+=3;NFSU2_TR(0x42ad81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ad84:{NFSU2_TR(0x42ad84);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B42ad88:{NFSU2_TR(0x42ad88);
if(r1(R+518)){TAIL_STATIC(0x42b2c1u,42b);}
}
B42ad8e:L42ad8e:{c.instructions+=3;NFSU2_TR(0x42ad8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ad94:{NFSU2_TR(0x42ad94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42ad96:{NFSU2_TR(0x42ad96);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ad99ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42ad99:L42ad99:{c.instructions+=2;NFSU2_TR(0x42ad99);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ad9b:{NFSU2_TR(0x42ad9b);
if(r1(R+518)){TAIL_STATIC(0x42b2c1u,42b);}
}
B42ada1:L42ada1:{c.instructions+=3;NFSU2_TR(0x42ada1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ada2:{NFSU2_TR(0x42ada2);
__builtin_memmove((R+4),(R+28),4);
}
B42ada4:{NFSU2_TR(0x42ada4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ada9ull));
TAIL_STATIC(0x428720u,428);
}
B42ada9:L42ada9:{c.instructions+=2;NFSU2_TR(0x42ada9);
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
B42adab:{NFSU2_TR(0x42adab);
if(r1(R+518)){{goto L42ae74;}}
}
B42adb1:L42adb1:{c.instructions+=5;NFSU2_TR(0x42adb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42adb7:{NFSU2_TR(0x42adb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42adb9:{NFSU2_TR(0x42adb9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42adba:{NFSU2_TR(0x42adba);
__builtin_memmove((R+4),(R+24),4);
}
B42adbc:{NFSU2_TR(0x42adbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42adc2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42adc2:L42adc2:{c.instructions+=2;NFSU2_TR(0x42adc2);
__builtin_memmove((R+4),(R+24),4);
}
B42adc4:{NFSU2_TR(0x42adc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42adc9ull));
TAIL_STATIC(0x420810u,420);
}
B42adc9:L42adc9:{c.instructions+=1;NFSU2_TR(0x42adc9);
TAIL_STATIC(0x42b2bau,42b);
}
B42adce:L42adce:{c.instructions+=2;NFSU2_TR(0x42adce);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42add2:{NFSU2_TR(0x42add2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ae18;}}
}
B42add4:L42add4:{c.instructions+=2;NFSU2_TR(0x42add4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42add7:{NFSU2_TR(0x42add7);
if(r1(R+518)){{goto L42ae2f;}}
}
B42add9:L42add9:{c.instructions+=4;NFSU2_TR(0x42add9);
__builtin_memmove((R+12),gp(0x7fb724),4);
}
B42addf:{NFSU2_TR(0x42addf);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x80000007ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B42ade5:{NFSU2_TR(0x42ade5);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B42ade9:{NFSU2_TR(0x42ade9);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L42adf0;}}
}
B42adeb:L42adeb:{c.instructions+=3;NFSU2_TR(0x42adeb);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B42adec:{NFSU2_TR(0x42adec);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xfffffff8ull))));
}
B42adef:{NFSU2_TR(0x42adef);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B42adf0:L42adf0:{c.instructions+=10;NFSU2_TR(0x42adf0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42adf2:{NFSU2_TR(0x42adf2);
__builtin_memmove((R+0),(R+28),4);
}
B42adf4:{NFSU2_TR(0x42adf4);
__builtin_memmove((R+12),(R+518),1);
}
B42adf7:{NFSU2_TR(0x42adf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x778ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B42adfd:{NFSU2_TR(0x42adfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ae01:{NFSU2_TR(0x42ae01);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42ae05:{NFSU2_TR(0x42ae05);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42ae0b:{NFSU2_TR(0x42ae0b);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42ae11:{NFSU2_TR(0x42ae11);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42ae13:{NFSU2_TR(0x42ae13);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42ad09u);}goto L42ad09;}
}
B42ae18:L42ae18:{c.instructions+=5;NFSU2_TR(0x42ae18);
{u32 ea_=u32(r4(R+24)+u32(1776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ae1e:{NFSU2_TR(0x42ae1e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42ae24:{NFSU2_TR(0x42ae24);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42ae26:{NFSU2_TR(0x42ae26);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42ae29:{NFSU2_TR(0x42ae29);
if(r1(R+514)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x42ad16u);}goto L42ad16;}}
}
B42ae2f:L42ae2f:{c.instructions+=9;NFSU2_TR(0x42ae2f);
{u32 ea_=u32(u32(7877780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42ae35:{NFSU2_TR(0x42ae35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x778ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ae3b:{NFSU2_TR(0x42ae3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42ae3e:{NFSU2_TR(0x42ae3e);
{u32 ea_=u32(r4(R+24)+u32(1776u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42ae44:{NFSU2_TR(0x42ae44);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8d8ull))));
}
B42ae4a:{NFSU2_TR(0x42ae4a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ae4b:{NFSU2_TR(0x42ae4b);
w4(R+4,u32(0x88f298ull));
}
B42ae50:{NFSU2_TR(0x42ae50);
{u32 ea_=u32(r4(R+24)+u32(1776u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42ae56:{NFSU2_TR(0x42ae56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ae5bull));
TAIL_STATIC(0x5ded60u,5de);
}
B42ae5b:L42ae5b:{c.instructions+=4;NFSU2_TR(0x42ae5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42ae61:{NFSU2_TR(0x42ae61);
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
B42ae63:{NFSU2_TR(0x42ae63);
__builtin_memmove((R+28),(R+0),4);
}
B42ae65:{NFSU2_TR(0x42ae65);
if(r1(R+518)){{goto L42ae82;}}
}
B42ae67:L42ae67:{c.instructions+=2;NFSU2_TR(0x42ae67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42ae69:{NFSU2_TR(0x42ae69);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ae6cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42ae6c:L42ae6c:{c.instructions+=2;NFSU2_TR(0x42ae6c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ae6e:{NFSU2_TR(0x42ae6e);
if(r1(R+518)){{goto L42ae82;}}
}
B42ae70:L42ae70:{c.instructions+=2;NFSU2_TR(0x42ae70);
w1(R+4,u8(0x1ull));
}
B42ae72:{NFSU2_TR(0x42ae72);
{goto L42ae84;}
}
B42ae74:L42ae74:{c.instructions+=3;NFSU2_TR(0x42ae74);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ae76:{NFSU2_TR(0x42ae76);
__builtin_memmove((R+4),(R+24),4);
}
B42ae78:{NFSU2_TR(0x42ae78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ae7dull));
TAIL_STATIC(0x402530u,402);
}
B42ae7d:L42ae7d:{c.instructions+=1;NFSU2_TR(0x42ae7d);
TAIL_STATIC(0x42b2bau,42b);
}
B42ae82:L42ae82:{c.instructions+=1;NFSU2_TR(0x42ae82);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B42ae84:L42ae84:{c.instructions+=2;NFSU2_TR(0x42ae84);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ae86:{NFSU2_TR(0x42ae86);
if(r1(R+518)){{goto L42ae91;}}
}
B42ae88:L42ae88:{c.instructions+=2;NFSU2_TR(0x42ae88);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B42ae8b:{NFSU2_TR(0x42ae8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ae91;}}
}
B42ae8d:L42ae8d:{c.instructions+=2;NFSU2_TR(0x42ae8d);
w1(R+0,u8(0x1ull));
}
B42ae8f:{NFSU2_TR(0x42ae8f);
{goto L42ae93;}
}
B42ae91:L42ae91:{c.instructions+=1;NFSU2_TR(0x42ae91);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B42ae93:L42ae93:{c.instructions+=2;NFSU2_TR(0x42ae93);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ae95:{NFSU2_TR(0x42ae95);
if(r1(R+518)){{goto L42aea8;}}
}
B42ae97:L42ae97:{c.instructions+=2;NFSU2_TR(0x42ae97);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ae99:{NFSU2_TR(0x42ae99);
if(r1(R+518)){{goto L42ae9f;}}
}
B42ae9b:L42ae9b:{c.instructions+=2;NFSU2_TR(0x42ae9b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ae9d:{NFSU2_TR(0x42ae9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42aea8;}}
}
B42ae9f:L42ae9f:{c.instructions+=3;NFSU2_TR(0x42ae9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42aea2:{NFSU2_TR(0x42aea2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42aea3:{NFSU2_TR(0x42aea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42aea8ull));
TAIL_STATIC(0x5fbe00u,5fb);
}
B42aea8:L42aea8:{c.instructions+=4;NFSU2_TR(0x42aea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42aeae:{NFSU2_TR(0x42aeae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42aeaf:{NFSU2_TR(0x42aeaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x760ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42aeb5:{NFSU2_TR(0x42aeb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42aebaull));
TAIL_STATIC(0x40fbe0u,40f);
}
B42aeba:L42aeba:{c.instructions+=3;NFSU2_TR(0x42aeba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42aec0:{NFSU2_TR(0x42aec0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42aec2:{NFSU2_TR(0x42aec2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x42b02fu,42b);}
}
B42aec8:L42aec8:{c.instructions+=3;NFSU2_TR(0x42aec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42aece:{NFSU2_TR(0x42aece);
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
B42aed0:{NFSU2_TR(0x42aed0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42aedc;}}
}
B42aed2:L42aed2:{c.instructions+=3;NFSU2_TR(0x42aed2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42aed4:{NFSU2_TR(0x42aed4);
__builtin_memmove((R+4),(R+24),4);
}
B42aed6:{NFSU2_TR(0x42aed6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42aedcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42aedc:L42aedc:{c.instructions+=4;NFSU2_TR(0x42aedc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42aee2:{NFSU2_TR(0x42aee2);
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
B42aee4:{NFSU2_TR(0x42aee4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42aeea:{NFSU2_TR(0x42aeea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42af30;}}
}
B42aeec:L42aeec:{c.instructions+=3;NFSU2_TR(0x42aeec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42aef2:{NFSU2_TR(0x42aef2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42aef4:{NFSU2_TR(0x42aef4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42aef7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42aef7:L42aef7:{c.instructions+=6;NFSU2_TR(0x42aef7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B42aef9:{NFSU2_TR(0x42aef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42aefc:{NFSU2_TR(0x42aefc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42aeff:{NFSU2_TR(0x42aeff);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42af02:{NFSU2_TR(0x42af02);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42af04:{NFSU2_TR(0x42af04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42af30;}}
}
B42af06:L42af06:{c.instructions+=2;NFSU2_TR(0x42af06);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42af0a:{NFSU2_TR(0x42af0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42af0full));
TAIL_STATIC(0x420b40u,420);
}
B42af0f:L42af0f:{c.instructions+=5;NFSU2_TR(0x42af0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42af12:{NFSU2_TR(0x42af12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42af13:{NFSU2_TR(0x42af13);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42af17:{NFSU2_TR(0x42af17);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42af18:{NFSU2_TR(0x42af18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42af1dull));
TAIL_STATIC(0x425910u,425);
}
B42af1d:L42af1d:{c.instructions+=7;NFSU2_TR(0x42af1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42af20:{NFSU2_TR(0x42af20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42af23:{NFSU2_TR(0x42af23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42af25:{NFSU2_TR(0x42af25);
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
B42af28:{NFSU2_TR(0x42af28);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42af2c:{NFSU2_TR(0x42af2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42af2d:{NFSU2_TR(0x42af2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42af30ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42af30:L42af30:{c.instructions+=3;NFSU2_TR(0x42af30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42af36:{NFSU2_TR(0x42af36);
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
B42af38:{NFSU2_TR(0x42af38);
if(r1(R+518)){{goto L42af43;}}
}
B42af3a:L42af3a:{c.instructions+=4;NFSU2_TR(0x42af3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42af3c:{NFSU2_TR(0x42af3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B42af3f:{NFSU2_TR(0x42af3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42af40:{NFSU2_TR(0x42af40);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42af43ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42af43:L42af43:{c.instructions+=2;NFSU2_TR(0x42af43);
__builtin_memmove((R+4),(R+24),4);
}
B42af45:{NFSU2_TR(0x42af45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42af4aull));
TAIL_STATIC(0x41d0e0u,41d);
}
B42af4a:L42af4a:{c.instructions+=3;NFSU2_TR(0x42af4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42af4d:{NFSU2_TR(0x42af4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42af4e:{NFSU2_TR(0x42af4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42af53ull));
TAIL_STATIC(0x428720u,428);
}
B42af53:L42af53:{c.instructions+=2;NFSU2_TR(0x42af53);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42af55:{NFSU2_TR(0x42af55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42afef;}}
}
B42af5b:L42af5b:{c.instructions+=3;NFSU2_TR(0x42af5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42af61:{NFSU2_TR(0x42af61);
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
B42af63:{NFSU2_TR(0x42af63);
if(r1(R+518)){{goto L42af9d;}}
}
B42af65:L42af65:{c.instructions+=2;NFSU2_TR(0x42af65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42af67:{NFSU2_TR(0x42af67);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42af6aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42af6a:L42af6a:{c.instructions+=2;NFSU2_TR(0x42af6a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42af6c:{NFSU2_TR(0x42af6c);
if(r1(R+518)){{goto L42af9d;}}
}
B42af6e:L42af6e:{c.instructions+=2;NFSU2_TR(0x42af6e);
u8 U[14];
__builtin_memmove((U+6),gp(0x89e7b0),4);
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
B42af75:{NFSU2_TR(0x42af75);
if(r1(R+518)){{goto L42afd1;}}
}
B42af77:L42af77:{c.instructions+=2;NFSU2_TR(0x42af77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42af7a:{NFSU2_TR(0x42af7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42af7full));
TAIL_STATIC(0x5ebf60u,5eb);
}
B42af7f:L42af7f:{c.instructions+=2;NFSU2_TR(0x42af7f);
__builtin_memmove((R+4),(R+24),4);
}
B42af81:{NFSU2_TR(0x42af81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42af86ull));
TAIL_STATIC(0x41bf80u,41b);
}
B42af86:L42af86:{c.instructions+=8;NFSU2_TR(0x42af86);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42af8d:{NFSU2_TR(0x42af8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42af94:{NFSU2_TR(0x42af94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42af95:{NFSU2_TR(0x42af95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42af96:{NFSU2_TR(0x42af96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42af97:{NFSU2_TR(0x42af97);
__builtin_memmove((R+16),(R+20),4);
}
B42af99:{NFSU2_TR(0x42af99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42af9a:{NFSU2_TR(0x42af9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42af9d:L42af9d:{c.instructions+=3;NFSU2_TR(0x42af9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42afa3:{NFSU2_TR(0x42afa3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42afa5:{NFSU2_TR(0x42afa5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42afb3;}}
}
B42afa7:L42afa7:{c.instructions+=3;NFSU2_TR(0x42afa7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42afa9:{NFSU2_TR(0x42afa9);
w4(R+4,u32(0x88a320ull));
}
B42afae:{NFSU2_TR(0x42afae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42afb3ull));
TAIL_STATIC(0x43be80u,43b);
}
B42afb3:L42afb3:{c.instructions+=2;NFSU2_TR(0x42afb3);
__builtin_memmove((R+4),(R+24),4);
}
B42afb5:{NFSU2_TR(0x42afb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42afbaull));
TAIL_STATIC(0x4023e0u,402);
}
B42afba:L42afba:{c.instructions+=7;NFSU2_TR(0x42afba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42afbd:{NFSU2_TR(0x42afbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42afbf:{NFSU2_TR(0x42afbf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42afc1:{NFSU2_TR(0x42afc1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42afc3:{NFSU2_TR(0x42afc3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42afc5:{NFSU2_TR(0x42afc5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42afc7:{NFSU2_TR(0x42afc7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42afcaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42afca:L42afca:{c.instructions+=1;NFSU2_TR(0x42afca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42afd1:L42afd1:{c.instructions+=2;NFSU2_TR(0x42afd1);
__builtin_memmove((R+4),(R+24),4);
}
B42afd3:{NFSU2_TR(0x42afd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42afd8ull));
TAIL_STATIC(0x41bf80u,41b);
}
B42afd8:L42afd8:{c.instructions+=8;NFSU2_TR(0x42afd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42afdf:{NFSU2_TR(0x42afdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42afe6:{NFSU2_TR(0x42afe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42afe7:{NFSU2_TR(0x42afe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42afe8:{NFSU2_TR(0x42afe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42afe9:{NFSU2_TR(0x42afe9);
__builtin_memmove((R+16),(R+20),4);
}
B42afeb:{NFSU2_TR(0x42afeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42afec:{NFSU2_TR(0x42afec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42afef:L42afef:{c.instructions+=4;NFSU2_TR(0x42afef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42aff5:{NFSU2_TR(0x42aff5);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B42affc:{NFSU2_TR(0x42affc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B42afff:{NFSU2_TR(0x42afff);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
TAIL_STATIC(0x42b002u,42b);
}
XIT:NFSU2_TR_EXIT(0x42a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
