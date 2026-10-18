#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_419(u8* __restrict R,Cpu& c);
u32 body_41b(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_63a(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x41a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x41a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_41a(u8* __restrict R,Cpu& c);
u32 page_41a(Cpu& c){return body_41a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_41a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x41a003:goto L41a003;
case 0x41a005:c.instructions+=2;goto B41a005;
case 0x41a008:c.instructions+=1;goto B41a008;
case 0x41a00a:goto L41a00a;
case 0x41a00c:c.instructions+=6;goto B41a00c;
case 0x41a00d:c.instructions+=5;goto B41a00d;
case 0x41a00e:c.instructions+=4;goto B41a00e;
case 0x41a00f:c.instructions+=3;goto B41a00f;
case 0x41a011:c.instructions+=2;goto B41a011;
case 0x41a012:c.instructions+=1;goto B41a012;
case 0x41a015:goto L41a015;
case 0x41a01b:goto L41a01b;
case 0x41a01c:c.instructions+=5;goto B41a01c;
case 0x41a01d:c.instructions+=4;goto B41a01d;
case 0x41a01e:c.instructions+=3;goto B41a01e;
case 0x41a020:c.instructions+=2;goto B41a020;
case 0x41a021:c.instructions+=1;goto B41a021;
case 0x41a030:goto L41a030;
case 0x41a031:c.instructions+=11;goto B41a031;
case 0x41a035:c.instructions+=10;goto B41a035;
case 0x41a036:c.instructions+=9;goto B41a036;
case 0x41a037:c.instructions+=8;goto B41a037;
case 0x41a03b:c.instructions+=7;goto B41a03b;
case 0x41a03d:c.instructions+=6;goto B41a03d;
case 0x41a03f:c.instructions+=5;goto B41a03f;
case 0x41a040:c.instructions+=4;goto B41a040;
case 0x41a042:c.instructions+=3;goto B41a042;
case 0x41a043:c.instructions+=2;goto B41a043;
case 0x41a045:c.instructions+=1;goto B41a045;
case 0x41a04a:goto L41a04a;
case 0x41a04d:c.instructions+=1;goto B41a04d;
case 0x41a04f:goto L41a04f;
case 0x41a053:c.instructions+=5;goto B41a053;
case 0x41a054:c.instructions+=4;goto B41a054;
case 0x41a055:c.instructions+=3;goto B41a055;
case 0x41a056:c.instructions+=2;goto B41a056;
case 0x41a058:c.instructions+=1;goto B41a058;
case 0x41a05d:goto L41a05d;
case 0x41a05e:c.instructions+=3;goto B41a05e;
case 0x41a05f:c.instructions+=2;goto B41a05f;
case 0x41a060:c.instructions+=1;goto B41a060;
case 0x41a063:goto L41a063;
case 0x41a066:c.instructions+=2;goto B41a066;
case 0x41a068:c.instructions+=1;goto B41a068;
case 0x41a06a:goto L41a06a;
case 0x41a06b:c.instructions+=7;goto B41a06b;
case 0x41a06f:c.instructions+=6;goto B41a06f;
case 0x41a070:c.instructions+=5;goto B41a070;
case 0x41a074:c.instructions+=4;goto B41a074;
case 0x41a075:c.instructions+=3;goto B41a075;
case 0x41a076:c.instructions+=2;goto B41a076;
case 0x41a078:c.instructions+=1;goto B41a078;
case 0x41a07d:goto L41a07d;
case 0x41a082:goto L41a082;
case 0x41a088:c.instructions+=4;goto B41a088;
case 0x41a089:c.instructions+=3;goto B41a089;
case 0x41a08a:c.instructions+=2;goto B41a08a;
case 0x41a08b:c.instructions+=1;goto B41a08b;
case 0x41a090:goto L41a090;
case 0x41a091:c.instructions+=12;goto B41a091;
case 0x41a093:c.instructions+=11;goto B41a093;
case 0x41a096:c.instructions+=10;goto B41a096;
case 0x41a099:c.instructions+=9;goto B41a099;
case 0x41a09a:c.instructions+=8;goto B41a09a;
case 0x41a09b:c.instructions+=7;goto B41a09b;
case 0x41a09e:c.instructions+=6;goto B41a09e;
case 0x41a0a0:c.instructions+=5;goto B41a0a0;
case 0x41a0a3:c.instructions+=4;goto B41a0a3;
case 0x41a0a4:c.instructions+=3;goto B41a0a4;
case 0x41a0a7:c.instructions+=2;goto B41a0a7;
case 0x41a0ab:c.instructions+=1;goto B41a0ab;
case 0x41a0b0:goto L41a0b0;
case 0x41a0b2:c.instructions+=1;goto B41a0b2;
case 0x41a0b7:goto L41a0b7;
case 0x41a0b9:c.instructions+=9;goto B41a0b9;
case 0x41a0bb:c.instructions+=8;goto B41a0bb;
case 0x41a0be:c.instructions+=7;goto B41a0be;
case 0x41a0c6:c.instructions+=6;goto B41a0c6;
case 0x41a0c7:c.instructions+=5;goto B41a0c7;
case 0x41a0c9:c.instructions+=4;goto B41a0c9;
case 0x41a0cc:c.instructions+=3;goto B41a0cc;
case 0x41a0ce:c.instructions+=2;goto B41a0ce;
case 0x41a0d2:c.instructions+=1;goto B41a0d2;
case 0x41a0d8:goto L41a0d8;
case 0x41a0db:c.instructions+=1;goto B41a0db;
case 0x41a0e0:goto L41a0e0;
case 0x41a0e4:c.instructions+=10;goto B41a0e4;
case 0x41a0e6:c.instructions+=9;goto B41a0e6;
case 0x41a0e9:c.instructions+=8;goto B41a0e9;
case 0x41a0ea:c.instructions+=7;goto B41a0ea;
case 0x41a0ec:c.instructions+=6;goto B41a0ec;
case 0x41a0ed:c.instructions+=5;goto B41a0ed;
case 0x41a0f1:c.instructions+=4;goto B41a0f1;
case 0x41a0f4:c.instructions+=3;goto B41a0f4;
case 0x41a0f5:c.instructions+=2;goto B41a0f5;
case 0x41a0f7:c.instructions+=1;goto B41a0f7;
case 0x41a0fc:goto L41a0fc;
case 0x41a0fe:c.instructions+=1;goto B41a0fe;
case 0x41a100:goto L41a100;
case 0x41a104:c.instructions+=2;goto B41a104;
case 0x41a108:c.instructions+=1;goto B41a108;
case 0x41a10a:goto L41a10a;
case 0x41a10e:c.instructions+=2;goto B41a10e;
case 0x41a112:c.instructions+=1;goto B41a112;
case 0x41a114:goto L41a114;
case 0x41a117:c.instructions+=2;goto B41a117;
case 0x41a119:c.instructions+=1;goto B41a119;
case 0x41a11b:goto L41a11b;
case 0x41a122:c.instructions+=4;goto B41a122;
case 0x41a125:c.instructions+=3;goto B41a125;
case 0x41a128:c.instructions+=2;goto B41a128;
case 0x41a12f:c.instructions+=1;goto B41a12f;
case 0x41a131:goto L41a131;
case 0x41a134:c.instructions+=4;goto B41a134;
case 0x41a136:c.instructions+=3;goto B41a136;
case 0x41a139:c.instructions+=2;goto B41a139;
case 0x41a140:c.instructions+=1;goto B41a140;
case 0x41a142:goto L41a142;
case 0x41a144:goto L41a144;
case 0x41a145:c.instructions+=1;goto B41a145;
case 0x41a14a:goto L41a14a;
case 0x41a14b:c.instructions+=2;goto B41a14b;
case 0x41a14e:c.instructions+=1;goto B41a14e;
case 0x41a150:goto L41a150;
case 0x41a154:c.instructions+=7;goto B41a154;
case 0x41a158:c.instructions+=6;goto B41a158;
case 0x41a15b:c.instructions+=5;goto B41a15b;
case 0x41a15c:c.instructions+=4;goto B41a15c;
case 0x41a15f:c.instructions+=3;goto B41a15f;
case 0x41a161:c.instructions+=2;goto B41a161;
case 0x41a165:c.instructions+=1;goto B41a165;
case 0x41a16b:goto L41a16b;
case 0x41a16c:c.instructions+=5;goto B41a16c;
case 0x41a16d:c.instructions+=4;goto B41a16d;
case 0x41a16e:c.instructions+=3;goto B41a16e;
case 0x41a170:c.instructions+=2;goto B41a170;
case 0x41a171:c.instructions+=1;goto B41a171;
case 0x41a180:goto L41a180;
case 0x41a181:c.instructions+=19;goto B41a181;
case 0x41a183:c.instructions+=18;goto B41a183;
case 0x41a186:c.instructions+=17;goto B41a186;
case 0x41a18c:c.instructions+=16;goto B41a18c;
case 0x41a18d:c.instructions+=15;goto B41a18d;
case 0x41a18e:c.instructions+=14;goto B41a18e;
case 0x41a18f:c.instructions+=13;goto B41a18f;
case 0x41a191:c.instructions+=12;goto B41a191;
case 0x41a194:c.instructions+=11;goto B41a194;
case 0x41a197:c.instructions+=10;goto B41a197;
case 0x41a199:c.instructions+=9;goto B41a199;
case 0x41a19a:c.instructions+=8;goto B41a19a;
case 0x41a19c:c.instructions+=7;goto B41a19c;
case 0x41a19f:c.instructions+=6;goto B41a19f;
case 0x41a1a3:c.instructions+=5;goto B41a1a3;
case 0x41a1a4:c.instructions+=4;goto B41a1a4;
case 0x41a1a6:c.instructions+=3;goto B41a1a6;
case 0x41a1a8:c.instructions+=2;goto B41a1a8;
case 0x41a1aa:c.instructions+=1;goto B41a1aa;
case 0x41a1ac:goto L41a1ac;
case 0x41a1ae:goto L41a1ae;
case 0x41a1b1:c.instructions+=3;goto B41a1b1;
case 0x41a1b4:c.instructions+=2;goto B41a1b4;
case 0x41a1b7:c.instructions+=1;goto B41a1b7;
case 0x41a1bc:goto L41a1bc;
case 0x41a1be:c.instructions+=3;goto B41a1be;
case 0x41a1c2:c.instructions+=2;goto B41a1c2;
case 0x41a1c4:c.instructions+=1;goto B41a1c4;
case 0x41a1c8:goto L41a1c8;
case 0x41a1ca:c.instructions+=1;goto B41a1ca;
case 0x41a1cc:goto L41a1cc;
case 0x41a1ce:c.instructions+=3;goto B41a1ce;
case 0x41a1d1:c.instructions+=2;goto B41a1d1;
case 0x41a1d3:c.instructions+=1;goto B41a1d3;
case 0x41a1d5:goto L41a1d5;
case 0x41a1d6:goto L41a1d6;
case 0x41a1d7:c.instructions+=3;goto B41a1d7;
case 0x41a1da:c.instructions+=2;goto B41a1da;
case 0x41a1dd:c.instructions+=1;goto B41a1dd;
case 0x41a1df:goto L41a1df;
case 0x41a1e1:c.instructions+=2;goto B41a1e1;
case 0x41a1e5:c.instructions+=1;goto B41a1e5;
case 0x41a1e7:goto L41a1e7;
case 0x41a1e9:c.instructions+=1;goto B41a1e9;
case 0x41a1ed:goto L41a1ed;
case 0x41a1f0:c.instructions+=2;goto B41a1f0;
case 0x41a1f2:c.instructions+=1;goto B41a1f2;
case 0x41a1f8:goto L41a1f8;
case 0x41a1fa:goto L41a1fa;
case 0x41a1fe:c.instructions+=1;goto B41a1fe;
case 0x41a202:goto L41a202;
case 0x41a204:c.instructions+=1;goto B41a204;
case 0x41a206:goto L41a206;
case 0x41a20a:c.instructions+=1;goto B41a20a;
case 0x41a210:goto L41a210;
case 0x41a212:c.instructions+=3;goto B41a212;
case 0x41a215:c.instructions+=2;goto B41a215;
case 0x41a217:c.instructions+=1;goto B41a217;
case 0x41a219:goto L41a219;
case 0x41a21a:c.instructions+=3;goto B41a21a;
case 0x41a21d:c.instructions+=2;goto B41a21d;
case 0x41a21f:c.instructions+=1;goto B41a21f;
case 0x41a221:goto L41a221;
case 0x41a225:goto L41a225;
case 0x41a228:c.instructions+=4;goto B41a228;
case 0x41a22a:c.instructions+=3;goto B41a22a;
case 0x41a22e:c.instructions+=2;goto B41a22e;
case 0x41a232:c.instructions+=1;goto B41a232;
case 0x41a234:goto L41a234;
case 0x41a238:goto L41a238;
case 0x41a23a:c.instructions+=3;goto B41a23a;
case 0x41a23d:c.instructions+=2;goto B41a23d;
case 0x41a23f:c.instructions+=1;goto B41a23f;
case 0x41a241:goto L41a241;
case 0x41a242:c.instructions+=3;goto B41a242;
case 0x41a245:c.instructions+=2;goto B41a245;
case 0x41a247:c.instructions+=1;goto B41a247;
case 0x41a249:goto L41a249;
case 0x41a24d:goto L41a24d;
case 0x41a24f:c.instructions+=1;goto B41a24f;
case 0x41a255:goto L41a255;
case 0x41a259:c.instructions+=2;goto B41a259;
case 0x41a25b:c.instructions+=1;goto B41a25b;
case 0x41a261:goto L41a261;
case 0x41a265:c.instructions+=4;goto B41a265;
case 0x41a267:c.instructions+=3;goto B41a267;
case 0x41a269:c.instructions+=2;goto B41a269;
case 0x41a26c:c.instructions+=1;goto B41a26c;
case 0x41a272:goto L41a272;
case 0x41a276:c.instructions+=19;goto B41a276;
case 0x41a27a:c.instructions+=18;goto B41a27a;
case 0x41a27e:c.instructions+=17;goto B41a27e;
case 0x41a282:c.instructions+=16;goto B41a282;
case 0x41a285:c.instructions+=15;goto B41a285;
case 0x41a288:c.instructions+=14;goto B41a288;
case 0x41a28c:c.instructions+=13;goto B41a28c;
case 0x41a290:c.instructions+=12;goto B41a290;
case 0x41a292:c.instructions+=11;goto B41a292;
case 0x41a294:c.instructions+=10;goto B41a294;
case 0x41a296:c.instructions+=9;goto B41a296;
case 0x41a29a:c.instructions+=8;goto B41a29a;
case 0x41a29b:c.instructions+=7;goto B41a29b;
case 0x41a2a1:c.instructions+=6;goto B41a2a1;
case 0x41a2a8:c.instructions+=5;goto B41a2a8;
case 0x41a2ac:c.instructions+=4;goto B41a2ac;
case 0x41a2ad:c.instructions+=3;goto B41a2ad;
case 0x41a2af:c.instructions+=2;goto B41a2af;
case 0x41a2b3:c.instructions+=1;goto B41a2b3;
case 0x41a2b8:goto L41a2b8;
case 0x41a2bf:c.instructions+=11;goto B41a2bf;
case 0x41a2c6:c.instructions+=10;goto B41a2c6;
case 0x41a2c8:c.instructions+=9;goto B41a2c8;
case 0x41a2cc:c.instructions+=8;goto B41a2cc;
case 0x41a2d0:c.instructions+=7;goto B41a2d0;
case 0x41a2d3:c.instructions+=6;goto B41a2d3;
case 0x41a2d5:c.instructions+=5;goto B41a2d5;
case 0x41a2d6:c.instructions+=4;goto B41a2d6;
case 0x41a2dd:c.instructions+=3;goto B41a2dd;
case 0x41a2de:c.instructions+=2;goto B41a2de;
case 0x41a2e0:c.instructions+=1;goto B41a2e0;
case 0x41a2e5:goto L41a2e5;
case 0x41a2ec:c.instructions+=7;goto B41a2ec;
case 0x41a2f3:c.instructions+=6;goto B41a2f3;
case 0x41a2f7:c.instructions+=5;goto B41a2f7;
case 0x41a2fb:c.instructions+=4;goto B41a2fb;
case 0x41a303:c.instructions+=3;goto B41a303;
case 0x41a305:c.instructions+=2;goto B41a305;
case 0x41a30d:c.instructions+=1;goto B41a30d;
case 0x41a310:goto L41a310;
case 0x41a314:c.instructions+=8;goto B41a314;
case 0x41a317:c.instructions+=7;goto B41a317;
case 0x41a318:c.instructions+=6;goto B41a318;
case 0x41a31a:c.instructions+=5;goto B41a31a;
case 0x41a31b:c.instructions+=4;goto B41a31b;
case 0x41a322:c.instructions+=3;goto B41a322;
case 0x41a323:c.instructions+=2;goto B41a323;
case 0x41a325:c.instructions+=1;goto B41a325;
case 0x41a32a:goto L41a32a;
case 0x41a331:c.instructions+=12;goto B41a331;
case 0x41a335:c.instructions+=11;goto B41a335;
case 0x41a33c:c.instructions+=10;goto B41a33c;
case 0x41a343:c.instructions+=9;goto B41a343;
case 0x41a344:c.instructions+=8;goto B41a344;
case 0x41a34b:c.instructions+=7;goto B41a34b;
case 0x41a34e:c.instructions+=6;goto B41a34e;
case 0x41a350:c.instructions+=5;goto B41a350;
case 0x41a351:c.instructions+=4;goto B41a351;
case 0x41a358:c.instructions+=3;goto B41a358;
case 0x41a359:c.instructions+=2;goto B41a359;
case 0x41a35b:c.instructions+=1;goto B41a35b;
case 0x41a360:goto L41a360;
case 0x41a367:c.instructions+=11;goto B41a367;
case 0x41a36b:c.instructions+=10;goto B41a36b;
case 0x41a372:c.instructions+=9;goto B41a372;
case 0x41a379:c.instructions+=8;goto B41a379;
case 0x41a37d:c.instructions+=7;goto B41a37d;
case 0x41a384:c.instructions+=6;goto B41a384;
case 0x41a385:c.instructions+=5;goto B41a385;
case 0x41a388:c.instructions+=4;goto B41a388;
case 0x41a389:c.instructions+=3;goto B41a389;
case 0x41a38d:c.instructions+=2;goto B41a38d;
case 0x41a391:c.instructions+=1;goto B41a391;
case 0x41a397:goto L41a397;
case 0x41a39b:c.instructions+=8;goto B41a39b;
case 0x41a39f:c.instructions+=7;goto B41a39f;
case 0x41a3a2:c.instructions+=6;goto B41a3a2;
case 0x41a3a6:c.instructions+=5;goto B41a3a6;
case 0x41a3a7:c.instructions+=4;goto B41a3a7;
case 0x41a3a9:c.instructions+=3;goto B41a3a9;
case 0x41a3ac:c.instructions+=2;goto B41a3ac;
case 0x41a3b0:c.instructions+=1;goto B41a3b0;
case 0x41a3b2:goto L41a3b2;
case 0x41a3b6:goto L41a3b6;
case 0x41a3b8:c.instructions+=2;goto B41a3b8;
case 0x41a3bc:c.instructions+=1;goto B41a3bc;
case 0x41a3be:goto L41a3be;
case 0x41a3bf:c.instructions+=3;goto B41a3bf;
case 0x41a3c2:c.instructions+=2;goto B41a3c2;
case 0x41a3c4:c.instructions+=1;goto B41a3c4;
case 0x41a3c6:goto L41a3c6;
case 0x41a3ca:c.instructions+=1;goto B41a3ca;
case 0x41a3ce:goto L41a3ce;
case 0x41a3d0:c.instructions+=1;goto B41a3d0;
case 0x41a3d6:goto L41a3d6;
case 0x41a3da:c.instructions+=9;goto B41a3da;
case 0x41a3de:c.instructions+=8;goto B41a3de;
case 0x41a3e1:c.instructions+=7;goto B41a3e1;
case 0x41a3e3:c.instructions+=6;goto B41a3e3;
case 0x41a3e5:c.instructions+=5;goto B41a3e5;
case 0x41a3e6:c.instructions+=4;goto B41a3e6;
case 0x41a3ed:c.instructions+=3;goto B41a3ed;
case 0x41a3ee:c.instructions+=2;goto B41a3ee;
case 0x41a3f0:c.instructions+=1;goto B41a3f0;
case 0x41a3f5:goto L41a3f5;
case 0x41a3fc:c.instructions+=14;goto B41a3fc;
case 0x41a400:c.instructions+=13;goto B41a400;
case 0x41a404:c.instructions+=12;goto B41a404;
case 0x41a40b:c.instructions+=11;goto B41a40b;
case 0x41a40c:c.instructions+=10;goto B41a40c;
case 0x41a410:c.instructions+=9;goto B41a410;
case 0x41a411:c.instructions+=8;goto B41a411;
case 0x41a415:c.instructions+=7;goto B41a415;
case 0x41a419:c.instructions+=6;goto B41a419;
case 0x41a41d:c.instructions+=5;goto B41a41d;
case 0x41a41e:c.instructions+=4;goto B41a41e;
case 0x41a420:c.instructions+=3;goto B41a420;
case 0x41a424:c.instructions+=2;goto B41a424;
case 0x41a426:c.instructions+=1;goto B41a426;
case 0x41a42b:goto L41a42b;
case 0x41a42e:c.instructions+=2;goto B41a42e;
case 0x41a430:c.instructions+=1;goto B41a430;
case 0x41a432:goto L41a432;
case 0x41a435:c.instructions+=8;goto B41a435;
case 0x41a438:c.instructions+=7;goto B41a438;
case 0x41a439:c.instructions+=6;goto B41a439;
case 0x41a43b:c.instructions+=5;goto B41a43b;
case 0x41a43c:c.instructions+=4;goto B41a43c;
case 0x41a443:c.instructions+=3;goto B41a443;
case 0x41a444:c.instructions+=2;goto B41a444;
case 0x41a446:c.instructions+=1;goto B41a446;
case 0x41a44b:goto L41a44b;
case 0x41a452:c.instructions+=13;goto B41a452;
case 0x41a459:c.instructions+=12;goto B41a459;
case 0x41a45d:c.instructions+=11;goto B41a45d;
case 0x41a464:c.instructions+=10;goto B41a464;
case 0x41a46b:c.instructions+=9;goto B41a46b;
case 0x41a46c:c.instructions+=8;goto B41a46c;
case 0x41a46d:c.instructions+=7;goto B41a46d;
case 0x41a46f:c.instructions+=6;goto B41a46f;
case 0x41a470:c.instructions+=5;goto B41a470;
case 0x41a477:c.instructions+=4;goto B41a477;
case 0x41a479:c.instructions+=3;goto B41a479;
case 0x41a480:c.instructions+=2;goto B41a480;
case 0x41a482:c.instructions+=1;goto B41a482;
case 0x41a487:goto L41a487;
case 0x41a48a:c.instructions+=4;goto B41a48a;
case 0x41a48d:c.instructions+=3;goto B41a48d;
case 0x41a48e:c.instructions+=2;goto B41a48e;
case 0x41a491:c.instructions+=1;goto B41a491;
case 0x41a493:goto L41a493;
case 0x41a497:c.instructions+=1;goto B41a497;
case 0x41a49c:goto L41a49c;
case 0x41a4a0:c.instructions+=3;goto B41a4a0;
case 0x41a4a4:c.instructions+=2;goto B41a4a4;
case 0x41a4a8:c.instructions+=1;goto B41a4a8;
case 0x41a4aa:goto L41a4aa;
case 0x41a4ae:c.instructions+=2;goto B41a4ae;
case 0x41a4b2:c.instructions+=1;goto B41a4b2;
case 0x41a4b4:goto L41a4b4;
case 0x41a4b7:c.instructions+=2;goto B41a4b7;
case 0x41a4b9:c.instructions+=1;goto B41a4b9;
case 0x41a4bb:goto L41a4bb;
case 0x41a4c2:c.instructions+=1;goto B41a4c2;
case 0x41a4c4:goto L41a4c4;
case 0x41a4c6:goto L41a4c6;
case 0x41a4c9:c.instructions+=4;goto B41a4c9;
case 0x41a4cc:c.instructions+=3;goto B41a4cc;
case 0x41a4d3:c.instructions+=2;goto B41a4d3;
case 0x41a4d5:c.instructions+=1;goto B41a4d5;
case 0x41a4d7:goto L41a4d7;
case 0x41a4d9:c.instructions+=4;goto B41a4d9;
case 0x41a4da:c.instructions+=3;goto B41a4da;
case 0x41a4de:c.instructions+=2;goto B41a4de;
case 0x41a4df:c.instructions+=1;goto B41a4df;
case 0x41a4e2:goto L41a4e2;
case 0x41a4e4:goto L41a4e4;
case 0x41a4ec:c.instructions+=1;goto B41a4ec;
case 0x41a4f4:goto L41a4f4;
case 0x41a4f8:c.instructions+=6;goto B41a4f8;
case 0x41a4f9:c.instructions+=5;goto B41a4f9;
case 0x41a4fd:c.instructions+=4;goto B41a4fd;
case 0x41a4fe:c.instructions+=3;goto B41a4fe;
case 0x41a502:c.instructions+=2;goto B41a502;
case 0x41a503:c.instructions+=1;goto B41a503;
case 0x41a508:goto L41a508;
case 0x41a50c:c.instructions+=5;goto B41a50c;
case 0x41a513:c.instructions+=4;goto B41a513;
case 0x41a516:c.instructions+=3;goto B41a516;
case 0x41a51a:c.instructions+=2;goto B41a51a;
case 0x41a51e:c.instructions+=1;goto B41a51e;
case 0x41a520:goto L41a520;
case 0x41a524:c.instructions+=4;goto B41a524;
case 0x41a528:c.instructions+=3;goto B41a528;
case 0x41a52c:c.instructions+=2;goto B41a52c;
case 0x41a530:c.instructions+=1;goto B41a530;
case 0x41a532:goto L41a532;
case 0x41a536:c.instructions+=2;goto B41a536;
case 0x41a53a:c.instructions+=1;goto B41a53a;
case 0x41a53c:goto L41a53c;
case 0x41a53f:c.instructions+=2;goto B41a53f;
case 0x41a541:c.instructions+=1;goto B41a541;
case 0x41a543:goto L41a543;
case 0x41a54a:c.instructions+=1;goto B41a54a;
case 0x41a54c:goto L41a54c;
case 0x41a54e:goto L41a54e;
case 0x41a551:c.instructions+=4;goto B41a551;
case 0x41a554:c.instructions+=3;goto B41a554;
case 0x41a55b:c.instructions+=2;goto B41a55b;
case 0x41a55d:c.instructions+=1;goto B41a55d;
case 0x41a55f:goto L41a55f;
case 0x41a561:c.instructions+=4;goto B41a561;
case 0x41a562:c.instructions+=3;goto B41a562;
case 0x41a566:c.instructions+=2;goto B41a566;
case 0x41a567:c.instructions+=1;goto B41a567;
case 0x41a56a:goto L41a56a;
case 0x41a56c:goto L41a56c;
case 0x41a574:c.instructions+=1;goto B41a574;
case 0x41a57c:goto L41a57c;
case 0x41a580:c.instructions+=6;goto B41a580;
case 0x41a581:c.instructions+=5;goto B41a581;
case 0x41a585:c.instructions+=4;goto B41a585;
case 0x41a586:c.instructions+=3;goto B41a586;
case 0x41a58d:c.instructions+=2;goto B41a58d;
case 0x41a58e:c.instructions+=1;goto B41a58e;
case 0x41a593:goto L41a593;
case 0x41a59a:c.instructions+=7;goto B41a59a;
case 0x41a5a1:c.instructions+=6;goto B41a5a1;
case 0x41a5a4:c.instructions+=5;goto B41a5a4;
case 0x41a5ab:c.instructions+=4;goto B41a5ab;
case 0x41a5ac:c.instructions+=3;goto B41a5ac;
case 0x41a5af:c.instructions+=2;goto B41a5af;
case 0x41a5b6:c.instructions+=1;goto B41a5b6;
case 0x41a5bc:goto L41a5bc;
case 0x41a5c0:c.instructions+=2;goto B41a5c0;
case 0x41a5c3:c.instructions+=1;goto B41a5c3;
case 0x41a5c9:goto L41a5c9;
case 0x41a5cd:c.instructions+=10;goto B41a5cd;
case 0x41a5cf:c.instructions+=9;goto B41a5cf;
case 0x41a5d3:c.instructions+=8;goto B41a5d3;
case 0x41a5d6:c.instructions+=7;goto B41a5d6;
case 0x41a5d8:c.instructions+=6;goto B41a5d8;
case 0x41a5da:c.instructions+=5;goto B41a5da;
case 0x41a5db:c.instructions+=4;goto B41a5db;
case 0x41a5e2:c.instructions+=3;goto B41a5e2;
case 0x41a5e3:c.instructions+=2;goto B41a5e3;
case 0x41a5e5:c.instructions+=1;goto B41a5e5;
case 0x41a5ea:goto L41a5ea;
case 0x41a5f1:c.instructions+=12;goto B41a5f1;
case 0x41a5f8:c.instructions+=11;goto B41a5f8;
case 0x41a5fc:c.instructions+=10;goto B41a5fc;
case 0x41a600:c.instructions+=9;goto B41a600;
case 0x41a601:c.instructions+=8;goto B41a601;
case 0x41a605:c.instructions+=7;goto B41a605;
case 0x41a606:c.instructions+=6;goto B41a606;
case 0x41a60a:c.instructions+=5;goto B41a60a;
case 0x41a60e:c.instructions+=4;goto B41a60e;
case 0x41a60f:c.instructions+=3;goto B41a60f;
case 0x41a613:c.instructions+=2;goto B41a613;
case 0x41a617:c.instructions+=1;goto B41a617;
case 0x41a61c:goto L41a61c;
case 0x41a61f:c.instructions+=2;goto B41a61f;
case 0x41a621:c.instructions+=1;goto B41a621;
case 0x41a623:goto L41a623;
case 0x41a626:c.instructions+=8;goto B41a626;
case 0x41a629:c.instructions+=7;goto B41a629;
case 0x41a62a:c.instructions+=6;goto B41a62a;
case 0x41a62c:c.instructions+=5;goto B41a62c;
case 0x41a62d:c.instructions+=4;goto B41a62d;
case 0x41a634:c.instructions+=3;goto B41a634;
case 0x41a635:c.instructions+=2;goto B41a635;
case 0x41a637:c.instructions+=1;goto B41a637;
case 0x41a63c:goto L41a63c;
case 0x41a643:c.instructions+=13;goto B41a643;
case 0x41a64a:c.instructions+=12;goto B41a64a;
case 0x41a64e:c.instructions+=11;goto B41a64e;
case 0x41a655:c.instructions+=10;goto B41a655;
case 0x41a65c:c.instructions+=9;goto B41a65c;
case 0x41a65d:c.instructions+=8;goto B41a65d;
case 0x41a65e:c.instructions+=7;goto B41a65e;
case 0x41a660:c.instructions+=6;goto B41a660;
case 0x41a661:c.instructions+=5;goto B41a661;
case 0x41a668:c.instructions+=4;goto B41a668;
case 0x41a66a:c.instructions+=3;goto B41a66a;
case 0x41a671:c.instructions+=2;goto B41a671;
case 0x41a673:c.instructions+=1;goto B41a673;
case 0x41a678:goto L41a678;
case 0x41a67b:c.instructions+=4;goto B41a67b;
case 0x41a67e:c.instructions+=3;goto B41a67e;
case 0x41a67f:c.instructions+=2;goto B41a67f;
case 0x41a682:c.instructions+=1;goto B41a682;
case 0x41a684:goto L41a684;
case 0x41a688:c.instructions+=1;goto B41a688;
case 0x41a68d:goto L41a68d;
case 0x41a691:c.instructions+=4;goto B41a691;
case 0x41a695:c.instructions+=3;goto B41a695;
case 0x41a699:c.instructions+=2;goto B41a699;
case 0x41a69d:c.instructions+=1;goto B41a69d;
case 0x41a69f:goto L41a69f;
case 0x41a6a3:c.instructions+=2;goto B41a6a3;
case 0x41a6a7:c.instructions+=1;goto B41a6a7;
case 0x41a6a9:goto L41a6a9;
case 0x41a6ac:c.instructions+=2;goto B41a6ac;
case 0x41a6ae:c.instructions+=1;goto B41a6ae;
case 0x41a6b0:goto L41a6b0;
case 0x41a6b7:c.instructions+=1;goto B41a6b7;
case 0x41a6b9:goto L41a6b9;
case 0x41a6bb:goto L41a6bb;
case 0x41a6be:c.instructions+=4;goto B41a6be;
case 0x41a6c1:c.instructions+=3;goto B41a6c1;
case 0x41a6c8:c.instructions+=2;goto B41a6c8;
case 0x41a6ca:c.instructions+=1;goto B41a6ca;
case 0x41a6cc:goto L41a6cc;
case 0x41a6ce:c.instructions+=4;goto B41a6ce;
case 0x41a6cf:c.instructions+=3;goto B41a6cf;
case 0x41a6d3:c.instructions+=2;goto B41a6d3;
case 0x41a6d4:c.instructions+=1;goto B41a6d4;
case 0x41a6d7:goto L41a6d7;
case 0x41a6d9:goto L41a6d9;
case 0x41a6e1:c.instructions+=1;goto B41a6e1;
case 0x41a6e9:goto L41a6e9;
case 0x41a6ed:c.instructions+=6;goto B41a6ed;
case 0x41a6ee:c.instructions+=5;goto B41a6ee;
case 0x41a6f2:c.instructions+=4;goto B41a6f2;
case 0x41a6f3:c.instructions+=3;goto B41a6f3;
case 0x41a6fa:c.instructions+=2;goto B41a6fa;
case 0x41a6fb:c.instructions+=1;goto B41a6fb;
case 0x41a700:goto L41a700;
case 0x41a707:c.instructions+=6;goto B41a707;
case 0x41a70e:c.instructions+=5;goto B41a70e;
case 0x41a711:c.instructions+=4;goto B41a711;
case 0x41a715:c.instructions+=3;goto B41a715;
case 0x41a719:c.instructions+=2;goto B41a719;
case 0x41a71b:c.instructions+=1;goto B41a71b;
case 0x41a720:goto L41a720;
case 0x41a724:c.instructions+=4;goto B41a724;
case 0x41a728:c.instructions+=3;goto B41a728;
case 0x41a72c:c.instructions+=2;goto B41a72c;
case 0x41a730:c.instructions+=1;goto B41a730;
case 0x41a732:goto L41a732;
case 0x41a736:c.instructions+=2;goto B41a736;
case 0x41a73a:c.instructions+=1;goto B41a73a;
case 0x41a73c:goto L41a73c;
case 0x41a73f:c.instructions+=2;goto B41a73f;
case 0x41a741:c.instructions+=1;goto B41a741;
case 0x41a743:goto L41a743;
case 0x41a74a:c.instructions+=1;goto B41a74a;
case 0x41a74c:goto L41a74c;
case 0x41a74e:goto L41a74e;
case 0x41a751:c.instructions+=4;goto B41a751;
case 0x41a754:c.instructions+=3;goto B41a754;
case 0x41a75b:c.instructions+=2;goto B41a75b;
case 0x41a75d:c.instructions+=1;goto B41a75d;
case 0x41a75f:goto L41a75f;
case 0x41a761:c.instructions+=4;goto B41a761;
case 0x41a762:c.instructions+=3;goto B41a762;
case 0x41a766:c.instructions+=2;goto B41a766;
case 0x41a767:c.instructions+=1;goto B41a767;
case 0x41a76a:goto L41a76a;
case 0x41a76c:goto L41a76c;
case 0x41a774:c.instructions+=1;goto B41a774;
case 0x41a77c:goto L41a77c;
case 0x41a77d:c.instructions+=5;goto B41a77d;
case 0x41a781:c.instructions+=4;goto B41a781;
case 0x41a782:c.instructions+=3;goto B41a782;
case 0x41a789:c.instructions+=2;goto B41a789;
case 0x41a78a:c.instructions+=1;goto B41a78a;
case 0x41a78f:goto L41a78f;
case 0x41a796:c.instructions+=7;goto B41a796;
case 0x41a79d:c.instructions+=6;goto B41a79d;
case 0x41a7a0:c.instructions+=5;goto B41a7a0;
case 0x41a7a4:c.instructions+=4;goto B41a7a4;
case 0x41a7a5:c.instructions+=3;goto B41a7a5;
case 0x41a7a8:c.instructions+=2;goto B41a7a8;
case 0x41a7af:c.instructions+=1;goto B41a7af;
case 0x41a7b5:goto L41a7b5;
case 0x41a7b7:c.instructions+=23;goto B41a7b7;
case 0x41a7bc:c.instructions+=22;goto B41a7bc;
case 0x41a7c4:c.instructions+=21;goto B41a7c4;
case 0x41a7cc:c.instructions+=20;goto B41a7cc;
case 0x41a7d0:c.instructions+=19;goto B41a7d0;
case 0x41a7d8:c.instructions+=18;goto B41a7d8;
case 0x41a7df:c.instructions+=17;goto B41a7df;
case 0x41a7e6:c.instructions+=16;goto B41a7e6;
case 0x41a7ed:c.instructions+=15;goto B41a7ed;
case 0x41a7f4:c.instructions+=14;goto B41a7f4;
case 0x41a7fc:c.instructions+=13;goto B41a7fc;
case 0x41a7ff:c.instructions+=12;goto B41a7ff;
case 0x41a800:c.instructions+=11;goto B41a800;
case 0x41a807:c.instructions+=10;goto B41a807;
case 0x41a812:c.instructions+=9;goto B41a812;
case 0x41a81d:c.instructions+=8;goto B41a81d;
case 0x41a828:c.instructions+=7;goto B41a828;
case 0x41a833:c.instructions+=6;goto B41a833;
case 0x41a83e:c.instructions+=5;goto B41a83e;
case 0x41a849:c.instructions+=4;goto B41a849;
case 0x41a854:c.instructions+=3;goto B41a854;
case 0x41a85f:c.instructions+=2;goto B41a85f;
case 0x41a863:c.instructions+=1;goto B41a863;
case 0x41a868:goto L41a868;
case 0x41a86c:c.instructions+=3;goto B41a86c;
case 0x41a86d:c.instructions+=2;goto B41a86d;
case 0x41a874:c.instructions+=1;goto B41a874;
case 0x41a879:goto L41a879;
case 0x41a87d:c.instructions+=3;goto B41a87d;
case 0x41a87e:c.instructions+=2;goto B41a87e;
case 0x41a885:c.instructions+=1;goto B41a885;
case 0x41a88a:goto L41a88a;
case 0x41a88e:c.instructions+=3;goto B41a88e;
case 0x41a88f:c.instructions+=2;goto B41a88f;
case 0x41a896:c.instructions+=1;goto B41a896;
case 0x41a89b:goto L41a89b;
case 0x41a8a2:c.instructions+=1;goto B41a8a2;
case 0x41a8a7:goto L41a8a7;
case 0x41a8ae:c.instructions+=1;goto B41a8ae;
case 0x41a8b3:goto L41a8b3;
case 0x41a8b7:c.instructions+=2;goto B41a8b7;
case 0x41a8b9:c.instructions+=1;goto B41a8b9;
case 0x41a8bb:goto L41a8bb;
case 0x41a8c1:c.instructions+=7;goto B41a8c1;
case 0x41a8c5:c.instructions+=6;goto B41a8c5;
case 0x41a8c9:c.instructions+=5;goto B41a8c9;
case 0x41a8cb:c.instructions+=4;goto B41a8cb;
case 0x41a8cd:c.instructions+=3;goto B41a8cd;
case 0x41a8d1:c.instructions+=2;goto B41a8d1;
case 0x41a8d2:c.instructions+=1;goto B41a8d2;
case 0x41a8d6:goto L41a8d6;
case 0x41a8d8:c.instructions+=9;goto B41a8d8;
case 0x41a8db:c.instructions+=8;goto B41a8db;
case 0x41a8dc:c.instructions+=7;goto B41a8dc;
case 0x41a8e0:c.instructions+=6;goto B41a8e0;
case 0x41a8e7:c.instructions+=5;goto B41a8e7;
case 0x41a8ee:c.instructions+=4;goto B41a8ee;
case 0x41a8f2:c.instructions+=3;goto B41a8f2;
case 0x41a8f5:c.instructions+=2;goto B41a8f5;
case 0x41a8f6:c.instructions+=1;goto B41a8f6;
case 0x41a8fb:goto L41a8fb;
case 0x41a8fd:c.instructions+=4;goto B41a8fd;
case 0x41a904:c.instructions+=3;goto B41a904;
case 0x41a905:c.instructions+=2;goto B41a905;
case 0x41a907:c.instructions+=1;goto B41a907;
case 0x41a90c:goto L41a90c;
case 0x41a90f:c.instructions+=4;goto B41a90f;
case 0x41a912:c.instructions+=3;goto B41a912;
case 0x41a913:c.instructions+=2;goto B41a913;
case 0x41a916:c.instructions+=1;goto B41a916;
case 0x41a918:goto L41a918;
case 0x41a91a:c.instructions+=3;goto B41a91a;
case 0x41a91e:c.instructions+=2;goto B41a91e;
case 0x41a923:c.instructions+=1;goto B41a923;
case 0x41a925:goto L41a925;
case 0x41a929:c.instructions+=1;goto B41a929;
case 0x41a930:goto L41a930;
case 0x41a937:c.instructions+=3;goto B41a937;
case 0x41a938:c.instructions+=2;goto B41a938;
case 0x41a93f:c.instructions+=1;goto B41a93f;
case 0x41a944:goto L41a944;
case 0x41a94b:c.instructions+=3;goto B41a94b;
case 0x41a94c:c.instructions+=2;goto B41a94c;
case 0x41a953:c.instructions+=1;goto B41a953;
case 0x41a958:goto L41a958;
case 0x41a95f:c.instructions+=3;goto B41a95f;
case 0x41a960:c.instructions+=2;goto B41a960;
case 0x41a967:c.instructions+=1;goto B41a967;
case 0x41a96c:goto L41a96c;
case 0x41a973:c.instructions+=3;goto B41a973;
case 0x41a974:c.instructions+=2;goto B41a974;
case 0x41a97b:c.instructions+=1;goto B41a97b;
case 0x41a980:goto L41a980;
case 0x41a987:c.instructions+=1;goto B41a987;
case 0x41a98c:goto L41a98c;
case 0x41a993:c.instructions+=1;goto B41a993;
case 0x41a998:goto L41a998;
case 0x41a99c:c.instructions+=3;goto B41a99c;
case 0x41a9a0:c.instructions+=2;goto B41a9a0;
case 0x41a9a2:c.instructions+=1;goto B41a9a2;
case 0x41a9a8:goto L41a9a8;
case 0x41a9ae:c.instructions+=9;goto B41a9ae;
case 0x41a9b2:c.instructions+=8;goto B41a9b2;
case 0x41a9b6:c.instructions+=7;goto B41a9b6;
case 0x41a9ba:c.instructions+=6;goto B41a9ba;
case 0x41a9be:c.instructions+=5;goto B41a9be;
case 0x41a9c0:c.instructions+=4;goto B41a9c0;
case 0x41a9c4:c.instructions+=3;goto B41a9c4;
case 0x41a9c5:c.instructions+=2;goto B41a9c5;
case 0x41a9c9:c.instructions+=1;goto B41a9c9;
case 0x41a9d0:goto L41a9d0;
case 0x41a9d4:c.instructions+=10;goto B41a9d4;
case 0x41a9d6:c.instructions+=9;goto B41a9d6;
case 0x41a9d9:c.instructions+=8;goto B41a9d9;
case 0x41a9da:c.instructions+=7;goto B41a9da;
case 0x41a9de:c.instructions+=6;goto B41a9de;
case 0x41a9e5:c.instructions+=5;goto B41a9e5;
case 0x41a9e9:c.instructions+=4;goto B41a9e9;
case 0x41a9ec:c.instructions+=3;goto B41a9ec;
case 0x41a9ed:c.instructions+=2;goto B41a9ed;
case 0x41a9f4:c.instructions+=1;goto B41a9f4;
case 0x41a9f9:goto L41a9f9;
case 0x41a9fd:c.instructions+=6;goto B41a9fd;
case 0x41aa00:c.instructions+=5;goto B41aa00;
case 0x41aa01:c.instructions+=4;goto B41aa01;
case 0x41aa08:c.instructions+=3;goto B41aa08;
case 0x41aa09:c.instructions+=2;goto B41aa09;
case 0x41aa0b:c.instructions+=1;goto B41aa0b;
case 0x41aa10:goto L41aa10;
case 0x41aa13:c.instructions+=6;goto B41aa13;
case 0x41aa17:c.instructions+=5;goto B41aa17;
case 0x41aa1a:c.instructions+=4;goto B41aa1a;
case 0x41aa1b:c.instructions+=3;goto B41aa1b;
case 0x41aa1e:c.instructions+=2;goto B41aa1e;
case 0x41aa22:c.instructions+=1;goto B41aa22;
case 0x41aa24:goto L41aa24;
case 0x41aa28:c.instructions+=5;goto B41aa28;
case 0x41aa29:c.instructions+=4;goto B41aa29;
case 0x41aa2c:c.instructions+=3;goto B41aa2c;
case 0x41aa2f:c.instructions+=2;goto B41aa2f;
case 0x41aa33:c.instructions+=1;goto B41aa33;
case 0x41aa39:goto L41aa39;
case 0x41aa3d:c.instructions+=5;goto B41aa3d;
case 0x41aa41:c.instructions+=4;goto B41aa41;
case 0x41aa44:c.instructions+=3;goto B41aa44;
case 0x41aa46:c.instructions+=2;goto B41aa46;
case 0x41aa4a:c.instructions+=1;goto B41aa4a;
case 0x41aa50:goto L41aa50;
case 0x41aa51:c.instructions+=5;goto B41aa51;
case 0x41aa52:c.instructions+=4;goto B41aa52;
case 0x41aa53:c.instructions+=3;goto B41aa53;
case 0x41aa55:c.instructions+=2;goto B41aa55;
case 0x41aa56:c.instructions+=1;goto B41aa56;
case 0x41aa60:goto L41aa60;
case 0x41aa62:c.instructions+=10;goto B41aa62;
case 0x41aa67:c.instructions+=9;goto B41aa67;
case 0x41aa6d:c.instructions+=8;goto B41aa6d;
case 0x41aa6e:c.instructions+=7;goto B41aa6e;
case 0x41aa75:c.instructions+=6;goto B41aa75;
case 0x41aa76:c.instructions+=5;goto B41aa76;
case 0x41aa77:c.instructions+=4;goto B41aa77;
case 0x41aa79:c.instructions+=3;goto B41aa79;
case 0x41aa7c:c.instructions+=2;goto B41aa7c;
case 0x41aa80:c.instructions+=1;goto B41aa80;
case 0x41aa85:goto L41aa85;
case 0x41aa8b:c.instructions+=11;goto B41aa8b;
case 0x41aa93:c.instructions+=10;goto B41aa93;
case 0x41aa95:c.instructions+=9;goto B41aa95;
case 0x41aa98:c.instructions+=8;goto B41aa98;
case 0x41aa9d:c.instructions+=7;goto B41aa9d;
case 0x41aaa2:c.instructions+=6;goto B41aaa2;
case 0x41aaa4:c.instructions+=5;goto B41aaa4;
case 0x41aaa9:c.instructions+=4;goto B41aaa9;
case 0x41aaaf:c.instructions+=3;goto B41aaaf;
case 0x41aab0:c.instructions+=2;goto B41aab0;
case 0x41aab5:c.instructions+=1;goto B41aab5;
case 0x41aaba:goto L41aaba;
case 0x41aabe:c.instructions+=8;goto B41aabe;
case 0x41aac8:c.instructions+=7;goto B41aac8;
case 0x41aace:c.instructions+=6;goto B41aace;
case 0x41aad5:c.instructions+=5;goto B41aad5;
case 0x41aad7:c.instructions+=4;goto B41aad7;
case 0x41aad8:c.instructions+=3;goto B41aad8;
case 0x41aadf:c.instructions+=2;goto B41aadf;
case 0x41aae2:c.instructions+=1;goto B41aae2;
case 0x41aaf0:goto L41aaf0;
case 0x41aaf1:c.instructions+=5;goto B41aaf1;
case 0x41aaf2:c.instructions+=4;goto B41aaf2;
case 0x41aaf4:c.instructions+=3;goto B41aaf4;
case 0x41aafa:c.instructions+=2;goto B41aafa;
case 0x41aafc:c.instructions+=1;goto B41aafc;
case 0x41ab02:goto L41ab02;
case 0x41ab03:c.instructions+=6;goto B41ab03;
case 0x41ab04:c.instructions+=5;goto B41ab04;
case 0x41ab06:c.instructions+=4;goto B41ab06;
case 0x41ab08:c.instructions+=3;goto B41ab08;
case 0x41ab09:c.instructions+=2;goto B41ab09;
case 0x41ab10:c.instructions+=1;goto B41ab10;
case 0x41ab14:goto L41ab14;
case 0x41ab19:c.instructions+=3;goto B41ab19;
case 0x41ab1b:c.instructions+=2;goto B41ab1b;
case 0x41ab1d:c.instructions+=1;goto B41ab1d;
case 0x41ab1f:goto L41ab1f;
case 0x41ab26:c.instructions+=1;goto B41ab26;
case 0x41ab28:goto L41ab28;
case 0x41ab2e:c.instructions+=3;goto B41ab2e;
case 0x41ab34:c.instructions+=2;goto B41ab34;
case 0x41ab3b:c.instructions+=1;goto B41ab3b;
case 0x41ab40:goto L41ab40;
case 0x41ab42:c.instructions+=6;goto B41ab42;
case 0x41ab44:c.instructions+=5;goto B41ab44;
case 0x41ab46:c.instructions+=4;goto B41ab46;
case 0x41ab49:c.instructions+=3;goto B41ab49;
case 0x41ab4a:c.instructions+=2;goto B41ab4a;
case 0x41ab4c:c.instructions+=1;goto B41ab4c;
case 0x41ab51:goto L41ab51;
case 0x41ab53:c.instructions+=2;goto B41ab53;
case 0x41ab55:c.instructions+=1;goto B41ab55;
case 0x41ab5a:goto L41ab5a;
case 0x41ab60:c.instructions+=7;goto B41ab60;
case 0x41ab66:c.instructions+=6;goto B41ab66;
case 0x41ab68:c.instructions+=5;goto B41ab68;
case 0x41ab6b:c.instructions+=4;goto B41ab6b;
case 0x41ab6e:c.instructions+=3;goto B41ab6e;
case 0x41ab72:c.instructions+=2;goto B41ab72;
case 0x41ab74:c.instructions+=1;goto B41ab74;
case 0x41ab7a:goto L41ab7a;
case 0x41ab80:c.instructions+=4;goto B41ab80;
case 0x41ab81:c.instructions+=3;goto B41ab81;
case 0x41ab87:c.instructions+=2;goto B41ab87;
case 0x41ab8b:c.instructions+=1;goto B41ab8b;
case 0x41ab8d:goto L41ab8d;
case 0x41ab8f:c.instructions+=1;goto B41ab8f;
case 0x41ab94:goto L41ab94;
case 0x41ab9a:c.instructions+=6;goto B41ab9a;
case 0x41aba0:c.instructions+=5;goto B41aba0;
case 0x41aba2:c.instructions+=4;goto B41aba2;
case 0x41aba3:c.instructions+=3;goto B41aba3;
case 0x41aba4:c.instructions+=2;goto B41aba4;
case 0x41aba5:c.instructions+=1;goto B41aba5;
case 0x41aba7:goto L41aba7;
case 0x41abaa:c.instructions+=3;goto B41abaa;
case 0x41abab:c.instructions+=2;goto B41abab;
case 0x41abae:c.instructions+=1;goto B41abae;
case 0x41abb3:goto L41abb3;
case 0x41abb4:c.instructions+=2;goto B41abb4;
case 0x41abb5:c.instructions+=1;goto B41abb5;
case 0x41abc0:goto L41abc0;
case 0x41abc1:c.instructions+=6;goto B41abc1;
case 0x41abc3:c.instructions+=5;goto B41abc3;
case 0x41abc9:c.instructions+=4;goto B41abc9;
case 0x41abca:c.instructions+=3;goto B41abca;
case 0x41abd0:c.instructions+=2;goto B41abd0;
case 0x41abd2:c.instructions+=1;goto B41abd2;
case 0x41abd4:goto L41abd4;
case 0x41abd5:goto L41abd5;
case 0x41abd7:c.instructions+=7;goto B41abd7;
case 0x41abd9:c.instructions+=6;goto B41abd9;
case 0x41abdc:c.instructions+=5;goto B41abdc;
case 0x41abde:c.instructions+=4;goto B41abde;
case 0x41abe1:c.instructions+=3;goto B41abe1;
case 0x41abe7:c.instructions+=2;goto B41abe7;
case 0x41abe9:c.instructions+=1;goto B41abe9;
case 0x41abeb:goto L41abeb;
case 0x41abec:c.instructions+=2;goto B41abec;
case 0x41abf1:c.instructions+=1;goto B41abf1;
case 0x41abf6:goto L41abf6;
case 0x41abf8:c.instructions+=1;goto B41abf8;
case 0x41abfd:goto L41abfd;
case 0x41abfe:c.instructions+=1;goto B41abfe;
case 0x41ac03:goto L41ac03;
case 0x41ac05:c.instructions+=3;goto B41ac05;
case 0x41ac08:c.instructions+=2;goto B41ac08;
case 0x41ac0a:c.instructions+=1;goto B41ac0a;
case 0x41ac0c:goto L41ac0c;
case 0x41ac0d:goto L41ac0d;
case 0x41ac13:c.instructions+=6;goto B41ac13;
case 0x41ac15:c.instructions+=5;goto B41ac15;
case 0x41ac16:c.instructions+=4;goto B41ac16;
case 0x41ac20:c.instructions+=3;goto B41ac20;
case 0x41ac26:c.instructions+=2;goto B41ac26;
case 0x41ac27:c.instructions+=1;goto B41ac27;
case 0x41ac29:goto L41ac29;
case 0x41ac2a:c.instructions+=2;goto B41ac2a;
case 0x41ac2f:c.instructions+=1;goto B41ac2f;
case 0x41ac34:goto L41ac34;
case 0x41ac40:goto L41ac40;
case 0x41ac44:c.instructions+=3;goto B41ac44;
case 0x41ac47:c.instructions+=2;goto B41ac47;
case 0x41ac48:c.instructions+=1;goto B41ac48;
case 0x41ac4d:goto L41ac4d;
case 0x41ac4f:c.instructions+=1;goto B41ac4f;
case 0x41ac51:goto L41ac51;
case 0x41ac57:goto L41ac57;
case 0x41ac60:goto L41ac60;
case 0x41ac62:c.instructions+=15;goto B41ac62;
case 0x41ac67:c.instructions+=14;goto B41ac67;
case 0x41ac6d:c.instructions+=13;goto B41ac6d;
case 0x41ac6e:c.instructions+=12;goto B41ac6e;
case 0x41ac75:c.instructions+=11;goto B41ac75;
case 0x41ac76:c.instructions+=10;goto B41ac76;
case 0x41ac77:c.instructions+=9;goto B41ac77;
case 0x41ac7c:c.instructions+=8;goto B41ac7c;
case 0x41ac81:c.instructions+=7;goto B41ac81;
case 0x41ac83:c.instructions+=6;goto B41ac83;
case 0x41ac85:c.instructions+=5;goto B41ac85;
case 0x41ac8a:c.instructions+=4;goto B41ac8a;
case 0x41ac8d:c.instructions+=3;goto B41ac8d;
case 0x41ac8e:c.instructions+=2;goto B41ac8e;
case 0x41ac92:c.instructions+=1;goto B41ac92;
case 0x41ac97:goto L41ac97;
case 0x41ac9f:c.instructions+=3;goto B41ac9f;
case 0x41aca5:c.instructions+=2;goto B41aca5;
case 0x41acaa:c.instructions+=1;goto B41acaa;
case 0x41acb0:goto L41acb0;
case 0x41acb6:c.instructions+=3;goto B41acb6;
case 0x41acb9:c.instructions+=2;goto B41acb9;
case 0x41acba:c.instructions+=1;goto B41acba;
case 0x41acbc:goto L41acbc;
case 0x41acbe:c.instructions+=2;goto B41acbe;
case 0x41acc4:c.instructions+=1;goto B41acc4;
case 0x41acc9:goto L41acc9;
case 0x41accd:c.instructions+=5;goto B41accd;
case 0x41accf:c.instructions+=4;goto B41accf;
case 0x41acd0:c.instructions+=3;goto B41acd0;
case 0x41acd7:c.instructions+=2;goto B41acd7;
case 0x41acda:c.instructions+=1;goto B41acda;
case 0x41ace0:goto L41ace0;
case 0x41ace1:c.instructions+=4;goto B41ace1;
case 0x41ace2:c.instructions+=3;goto B41ace2;
case 0x41ace4:c.instructions+=2;goto B41ace4;
case 0x41ace9:c.instructions+=1;goto B41ace9;
case 0x41acee:goto L41acee;
case 0x41acf0:c.instructions+=2;goto B41acf0;
case 0x41acf2:c.instructions+=1;goto B41acf2;
case 0x41acf4:goto L41acf4;
case 0x41acf5:c.instructions+=2;goto B41acf5;
case 0x41acfa:c.instructions+=1;goto B41acfa;
case 0x41acff:goto L41acff;
case 0x41ad02:c.instructions+=3;goto B41ad02;
case 0x41ad04:c.instructions+=2;goto B41ad04;
case 0x41ad07:c.instructions+=1;goto B41ad07;
case 0x41ad10:goto L41ad10;
case 0x41ad11:c.instructions+=2;goto B41ad11;
case 0x41ad16:c.instructions+=1;goto B41ad16;
case 0x41ad1b:goto L41ad1b;
case 0x41ad1c:c.instructions+=2;goto B41ad1c;
case 0x41ad1e:c.instructions+=1;goto B41ad1e;
case 0x41ad23:goto L41ad23;
case 0x41ad24:c.instructions+=3;goto B41ad24;
case 0x41ad2a:c.instructions+=2;goto B41ad2a;
case 0x41ad2d:c.instructions+=1;goto B41ad2d;
case 0x41ad2f:goto L41ad2f;
case 0x41ad30:goto L41ad30;
case 0x41ad31:c.instructions+=3;goto B41ad31;
case 0x41ad33:c.instructions+=2;goto B41ad33;
case 0x41ad34:c.instructions+=1;goto B41ad34;
case 0x41ad40:goto L41ad40;
case 0x41ad41:c.instructions+=6;goto B41ad41;
case 0x41ad45:c.instructions+=5;goto B41ad45;
case 0x41ad46:c.instructions+=4;goto B41ad46;
case 0x41ad48:c.instructions+=3;goto B41ad48;
case 0x41ad4f:c.instructions+=2;goto B41ad4f;
case 0x41ad51:c.instructions+=1;goto B41ad51;
case 0x41ad57:goto L41ad57;
case 0x41ad58:c.instructions+=4;goto B41ad58;
case 0x41ad5c:c.instructions+=3;goto B41ad5c;
case 0x41ad5d:c.instructions+=2;goto B41ad5d;
case 0x41ad5f:c.instructions+=1;goto B41ad5f;
case 0x41ad64:goto L41ad64;
case 0x41ad68:c.instructions+=12;goto B41ad68;
case 0x41ad6b:c.instructions+=11;goto B41ad6b;
case 0x41ad6f:c.instructions+=10;goto B41ad6f;
case 0x41ad75:c.instructions+=9;goto B41ad75;
case 0x41ad7b:c.instructions+=8;goto B41ad7b;
case 0x41ad7d:c.instructions+=7;goto B41ad7d;
case 0x41ad7f:c.instructions+=6;goto B41ad7f;
case 0x41ad82:c.instructions+=5;goto B41ad82;
case 0x41ad85:c.instructions+=4;goto B41ad85;
case 0x41ad86:c.instructions+=3;goto B41ad86;
case 0x41ad87:c.instructions+=2;goto B41ad87;
case 0x41ad8a:c.instructions+=1;goto B41ad8a;
case 0x41ad8f:goto L41ad8f;
case 0x41ad92:c.instructions+=3;goto B41ad92;
case 0x41ad94:c.instructions+=2;goto B41ad94;
case 0x41ad97:c.instructions+=1;goto B41ad97;
case 0x41ad99:goto L41ad99;
case 0x41ad9c:c.instructions+=2;goto B41ad9c;
case 0x41ada0:c.instructions+=1;goto B41ada0;
case 0x41ada1:goto L41ada1;
case 0x41ada7:c.instructions+=3;goto B41ada7;
case 0x41ada9:c.instructions+=2;goto B41ada9;
case 0x41adac:c.instructions+=1;goto B41adac;
case 0x41adae:goto L41adae;
case 0x41adb1:c.instructions+=10;goto B41adb1;
case 0x41adb5:c.instructions+=9;goto B41adb5;
case 0x41adb7:c.instructions+=8;goto B41adb7;
case 0x41adba:c.instructions+=7;goto B41adba;
case 0x41adbd:c.instructions+=6;goto B41adbd;
case 0x41adc3:c.instructions+=5;goto B41adc3;
case 0x41adc6:c.instructions+=4;goto B41adc6;
case 0x41adcd:c.instructions+=3;goto B41adcd;
case 0x41add2:c.instructions+=2;goto B41add2;
case 0x41add6:c.instructions+=1;goto B41add6;
case 0x41addc:goto L41addc;
case 0x41ade0:c.instructions+=4;goto B41ade0;
case 0x41ade3:c.instructions+=3;goto B41ade3;
case 0x41ade4:c.instructions+=2;goto B41ade4;
case 0x41ade8:c.instructions+=1;goto B41ade8;
case 0x41adea:goto L41adea;
case 0x41adeb:goto L41adeb;
case 0x41adf0:c.instructions+=2;goto B41adf0;
case 0x41adf4:c.instructions+=1;goto B41adf4;
case 0x41adf6:goto L41adf6;
case 0x41adfc:c.instructions+=2;goto B41adfc;
case 0x41adfe:c.instructions+=1;goto B41adfe;
case 0x41ae00:goto L41ae00;
case 0x41ae03:c.instructions+=10;goto B41ae03;
case 0x41ae07:c.instructions+=9;goto B41ae07;
case 0x41ae09:c.instructions+=8;goto B41ae09;
case 0x41ae0c:c.instructions+=7;goto B41ae0c;
case 0x41ae0f:c.instructions+=6;goto B41ae0f;
case 0x41ae15:c.instructions+=5;goto B41ae15;
case 0x41ae18:c.instructions+=4;goto B41ae18;
case 0x41ae1f:c.instructions+=3;goto B41ae1f;
case 0x41ae24:c.instructions+=2;goto B41ae24;
case 0x41ae28:c.instructions+=1;goto B41ae28;
case 0x41ae2e:goto L41ae2e;
case 0x41ae2f:c.instructions+=4;goto B41ae2f;
case 0x41ae30:c.instructions+=3;goto B41ae30;
case 0x41ae32:c.instructions+=2;goto B41ae32;
case 0x41ae33:c.instructions+=1;goto B41ae33;
case 0x41ae36:goto L41ae36;
case 0x41ae37:c.instructions+=3;goto B41ae37;
case 0x41ae39:c.instructions+=2;goto B41ae39;
case 0x41ae3a:c.instructions+=1;goto B41ae3a;
case 0x41ae40:goto L41ae40;
case 0x41ae41:c.instructions+=6;goto B41ae41;
case 0x41ae42:c.instructions+=5;goto B41ae42;
case 0x41ae44:c.instructions+=4;goto B41ae44;
case 0x41ae47:c.instructions+=3;goto B41ae47;
case 0x41ae49:c.instructions+=2;goto B41ae49;
case 0x41ae50:c.instructions+=1;goto B41ae50;
case 0x41ae56:goto L41ae56;
case 0x41ae5c:c.instructions+=2;goto B41ae5c;
case 0x41ae5e:c.instructions+=1;goto B41ae5e;
case 0x41ae64:goto L41ae64;
case 0x41ae65:c.instructions+=3;goto B41ae65;
case 0x41ae66:c.instructions+=2;goto B41ae66;
case 0x41ae67:c.instructions+=1;goto B41ae67;
case 0x41ae6c:goto L41ae6c;
case 0x41ae6e:c.instructions+=3;goto B41ae6e;
case 0x41ae70:c.instructions+=2;goto B41ae70;
case 0x41ae74:c.instructions+=1;goto B41ae74;
case 0x41ae7a:goto L41ae7a;
case 0x41ae7e:c.instructions+=1;goto B41ae7e;
case 0x41ae80:goto L41ae80;
case 0x41ae83:c.instructions+=2;goto B41ae83;
case 0x41ae84:c.instructions+=1;goto B41ae84;
case 0x41ae89:goto L41ae89;
case 0x41ae8f:c.instructions+=9;goto B41ae8f;
case 0x41ae91:c.instructions+=8;goto B41ae91;
case 0x41ae94:c.instructions+=7;goto B41ae94;
case 0x41ae96:c.instructions+=6;goto B41ae96;
case 0x41ae99:c.instructions+=5;goto B41ae99;
case 0x41ae9c:c.instructions+=4;goto B41ae9c;
case 0x41ae9e:c.instructions+=3;goto B41ae9e;
case 0x41aea1:c.instructions+=2;goto B41aea1;
case 0x41aea3:c.instructions+=1;goto B41aea3;
case 0x41aea5:goto L41aea5;
case 0x41aea6:c.instructions+=2;goto B41aea6;
case 0x41aea8:c.instructions+=1;goto B41aea8;
case 0x41aead:goto L41aead;
case 0x41aeaf:c.instructions+=2;goto B41aeaf;
case 0x41aeb0:c.instructions+=1;goto B41aeb0;
case 0x41aeb6:goto L41aeb6;
case 0x41aeb8:c.instructions+=1;goto B41aeb8;
case 0x41aebd:goto L41aebd;
case 0x41aebf:c.instructions+=1;goto B41aebf;
case 0x41aec1:goto L41aec1;
case 0x41aec2:c.instructions+=2;goto B41aec2;
case 0x41aec4:c.instructions+=1;goto B41aec4;
case 0x41aec9:goto L41aec9;
case 0x41aecb:c.instructions+=1;goto B41aecb;
case 0x41aecd:goto L41aecd;
case 0x41aed0:c.instructions+=10;goto B41aed0;
case 0x41aed7:c.instructions+=9;goto B41aed7;
case 0x41aeda:c.instructions+=8;goto B41aeda;
case 0x41aedd:c.instructions+=7;goto B41aedd;
case 0x41aedf:c.instructions+=6;goto B41aedf;
case 0x41aee2:c.instructions+=5;goto B41aee2;
case 0x41aee3:c.instructions+=4;goto B41aee3;
case 0x41aee4:c.instructions+=3;goto B41aee4;
case 0x41aee6:c.instructions+=2;goto B41aee6;
case 0x41aee7:c.instructions+=1;goto B41aee7;
case 0x41aeec:goto L41aeec;
case 0x41aeed:c.instructions+=2;goto B41aeed;
case 0x41aeef:c.instructions+=1;goto B41aeef;
case 0x41aef4:goto L41aef4;
case 0x41aef6:goto L41aef6;
case 0x41aef8:c.instructions+=2;goto B41aef8;
case 0x41aefa:c.instructions+=1;goto B41aefa;
case 0x41aefc:goto L41aefc;
case 0x41af00:c.instructions+=3;goto B41af00;
case 0x41af01:c.instructions+=2;goto B41af01;
case 0x41af03:c.instructions+=1;goto B41af03;
case 0x41af09:goto L41af09;
case 0x41af0f:c.instructions+=5;goto B41af0f;
case 0x41af12:c.instructions+=4;goto B41af12;
case 0x41af14:c.instructions+=3;goto B41af14;
case 0x41af17:c.instructions+=2;goto B41af17;
case 0x41af18:c.instructions+=1;goto B41af18;
case 0x41af1d:goto L41af1d;
case 0x41af1f:c.instructions+=1;goto B41af1f;
case 0x41af21:goto L41af21;
case 0x41af28:c.instructions+=9;goto B41af28;
case 0x41af2e:c.instructions+=8;goto B41af2e;
case 0x41af32:c.instructions+=7;goto B41af32;
case 0x41af39:c.instructions+=6;goto B41af39;
case 0x41af3b:c.instructions+=5;goto B41af3b;
case 0x41af3e:c.instructions+=4;goto B41af3e;
case 0x41af42:c.instructions+=3;goto B41af42;
case 0x41af49:c.instructions+=2;goto B41af49;
case 0x41af50:c.instructions+=1;goto B41af50;
case 0x41af56:goto L41af56;
case 0x41af57:c.instructions+=2;goto B41af57;
case 0x41af58:c.instructions+=1;goto B41af58;
case 0x41af59:goto L41af59;
case 0x41af5a:c.instructions+=2;goto B41af5a;
case 0x41af5b:c.instructions+=1;goto B41af5b;
case 0x41af5e:goto L41af5e;
case 0x41af61:c.instructions+=9;goto B41af61;
case 0x41af68:c.instructions+=8;goto B41af68;
case 0x41af6b:c.instructions+=7;goto B41af6b;
case 0x41af6e:c.instructions+=6;goto B41af6e;
case 0x41af70:c.instructions+=5;goto B41af70;
case 0x41af73:c.instructions+=4;goto B41af73;
case 0x41af74:c.instructions+=3;goto B41af74;
case 0x41af76:c.instructions+=2;goto B41af76;
case 0x41af77:c.instructions+=1;goto B41af77;
case 0x41af7c:goto L41af7c;
case 0x41af7d:c.instructions+=2;goto B41af7d;
case 0x41af7f:c.instructions+=1;goto B41af7f;
case 0x41af84:goto L41af84;
case 0x41af85:c.instructions+=5;goto B41af85;
case 0x41af86:c.instructions+=4;goto B41af86;
case 0x41af87:c.instructions+=3;goto B41af87;
case 0x41af88:c.instructions+=2;goto B41af88;
case 0x41af89:c.instructions+=1;goto B41af89;
case 0x41af90:goto L41af90;
case 0x41af93:c.instructions+=12;goto B41af93;
case 0x41af94:c.instructions+=11;goto B41af94;
case 0x41af9a:c.instructions+=10;goto B41af9a;
case 0x41af9c:c.instructions+=9;goto B41af9c;
case 0x41af9e:c.instructions+=8;goto B41af9e;
case 0x41af9f:c.instructions+=7;goto B41af9f;
case 0x41afa1:c.instructions+=6;goto B41afa1;
case 0x41afa6:c.instructions+=5;goto B41afa6;
case 0x41afa8:c.instructions+=4;goto B41afa8;
case 0x41afac:c.instructions+=3;goto B41afac;
case 0x41afb0:c.instructions+=2;goto B41afb0;
case 0x41afb4:c.instructions+=1;goto B41afb4;
case 0x41afba:goto L41afba;
case 0x41afbb:c.instructions+=6;goto B41afbb;
case 0x41afbc:c.instructions+=5;goto B41afbc;
case 0x41afc0:c.instructions+=4;goto B41afc0;
case 0x41afc3:c.instructions+=3;goto B41afc3;
case 0x41afc4:c.instructions+=2;goto B41afc4;
case 0x41afc6:c.instructions+=1;goto B41afc6;
case 0x41afcb:goto L41afcb;
case 0x41afd1:c.instructions+=3;goto B41afd1;
case 0x41afd3:c.instructions+=2;goto B41afd3;
case 0x41afd6:c.instructions+=1;goto B41afd6;
case 0x41afd8:goto L41afd8;
case 0x41afdc:c.instructions+=10;goto B41afdc;
case 0x41afe0:c.instructions+=9;goto B41afe0;
case 0x41afe4:c.instructions+=8;goto B41afe4;
case 0x41afe5:c.instructions+=7;goto B41afe5;
case 0x41afe9:c.instructions+=6;goto B41afe9;
case 0x41afed:c.instructions+=5;goto B41afed;
case 0x41afef:c.instructions+=4;goto B41afef;
case 0x41aff5:c.instructions+=3;goto B41aff5;
case 0x41aff9:c.instructions+=2;goto B41aff9;
case 0x41afff:c.instructions+=1;goto B41afff;
default:missing_instruction(c.pc);}
B41a003:L41a003:{c.instructions+=3;NFSU2_TR(0x41a003);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41a005:{NFSU2_TR(0x41a005);
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
B41a008:{NFSU2_TR(0x41a008);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41a01b;}}
}
B41a00a:L41a00a:{c.instructions+=7;NFSU2_TR(0x41a00a);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B41a00c:{NFSU2_TR(0x41a00c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41a00d:{NFSU2_TR(0x41a00d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41a00e:{NFSU2_TR(0x41a00e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41a00f:{NFSU2_TR(0x41a00f);
__builtin_memmove((R+16),(R+20),4);
}
B41a011:{NFSU2_TR(0x41a011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41a012:{NFSU2_TR(0x41a012);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41a015:L41a015:{c.instructions+=1;NFSU2_TR(0x41a015);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a01b:L41a01b:{c.instructions+=6;NFSU2_TR(0x41a01b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41a01c:{NFSU2_TR(0x41a01c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41a01d:{NFSU2_TR(0x41a01d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41a01e:{NFSU2_TR(0x41a01e);
__builtin_memmove((R+16),(R+20),4);
}
B41a020:{NFSU2_TR(0x41a020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41a021:{NFSU2_TR(0x41a021);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41a030:L41a030:{c.instructions+=12;NFSU2_TR(0x41a030);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a031:{NFSU2_TR(0x41a031);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41a035:{NFSU2_TR(0x41a035);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a036:{NFSU2_TR(0x41a036);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a037:{NFSU2_TR(0x41a037);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41a03b:{NFSU2_TR(0x41a03b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a03d:{NFSU2_TR(0x41a03d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a03f:{NFSU2_TR(0x41a03f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a040:{NFSU2_TR(0x41a040);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a042:{NFSU2_TR(0x41a042);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a043:{NFSU2_TR(0x41a043);
__builtin_memmove((R+24),(R+4),4);
}
B41a045:{NFSU2_TR(0x41a045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a04aull));
TAIL_STATIC(0x4198c0u,419);
}
B41a04a:L41a04a:{c.instructions+=2;NFSU2_TR(0x41a04a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41a04d:{NFSU2_TR(0x41a04d);
if(r1(R+518)){{goto L41a063;}}
}
B41a04f:L41a04f:{c.instructions+=6;NFSU2_TR(0x41a04f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a053:{NFSU2_TR(0x41a053);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a054:{NFSU2_TR(0x41a054);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a055:{NFSU2_TR(0x41a055);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a056:{NFSU2_TR(0x41a056);
__builtin_memmove((R+4),(R+24),4);
}
B41a058:{NFSU2_TR(0x41a058);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a05dull));
TAIL_STATIC(0x419e10u,419);
}
B41a05d:L41a05d:{c.instructions+=4;NFSU2_TR(0x41a05d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41a05e:{NFSU2_TR(0x41a05e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41a05f:{NFSU2_TR(0x41a05f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41a060:{NFSU2_TR(0x41a060);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41a063:L41a063:{c.instructions+=3;NFSU2_TR(0x41a063);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a066:{NFSU2_TR(0x41a066);
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
B41a068:{NFSU2_TR(0x41a068);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41a082;}}
}
B41a06a:L41a06a:{c.instructions+=8;NFSU2_TR(0x41a06a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a06b:{NFSU2_TR(0x41a06b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41a06f:{NFSU2_TR(0x41a06f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a070:{NFSU2_TR(0x41a070);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41a074:{NFSU2_TR(0x41a074);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a075:{NFSU2_TR(0x41a075);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a076:{NFSU2_TR(0x41a076);
__builtin_memmove((R+4),(R+24),4);
}
B41a078:{NFSU2_TR(0x41a078);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a07dull));
TAIL_STATIC(0x419b20u,419);
}
B41a07d:L41a07d:{c.instructions+=1;NFSU2_TR(0x41a07d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a082ull));
TAIL_STATIC(0x43bd50u,43b);
}
B41a082:L41a082:{c.instructions+=5;NFSU2_TR(0x41a082);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a088:{NFSU2_TR(0x41a088);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41a089:{NFSU2_TR(0x41a089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41a08a:{NFSU2_TR(0x41a08a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41a08b:{NFSU2_TR(0x41a08b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41a090:L41a090:{c.instructions+=13;NFSU2_TR(0x41a090);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a091:{NFSU2_TR(0x41a091);
__builtin_memmove((R+20),(R+16),4);
}
B41a093:{NFSU2_TR(0x41a093);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B41a096:{NFSU2_TR(0x41a096);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B41a099:{NFSU2_TR(0x41a099);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a09a:{NFSU2_TR(0x41a09a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a09b:{NFSU2_TR(0x41a09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41a09e:{NFSU2_TR(0x41a09e);
__builtin_memmove((R+12),(R+4),4);
}
B41a0a0:{NFSU2_TR(0x41a0a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a0a3:{NFSU2_TR(0x41a0a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a0a4:{NFSU2_TR(0x41a0a4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B41a0a7:{NFSU2_TR(0x41a0a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a0ab:{NFSU2_TR(0x41a0ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a0b0ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B41a0b0:L41a0b0:{c.instructions+=2;NFSU2_TR(0x41a0b0);
__builtin_memmove((R+4),(R+24),4);
}
B41a0b2:{NFSU2_TR(0x41a0b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a0b7ull));
TAIL_STATIC(0x5ec0d0u,5ec);
}
B41a0b7:L41a0b7:{c.instructions+=10;NFSU2_TR(0x41a0b7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41a0b9:{NFSU2_TR(0x41a0b9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41a0bb:{NFSU2_TR(0x41a0bb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B41a0be:{NFSU2_TR(0x41a0be);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a0c6:{NFSU2_TR(0x41a0c6);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B41a0c7:{NFSU2_TR(0x41a0c7);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B41a0c9:{NFSU2_TR(0x41a0c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a0cc:{NFSU2_TR(0x41a0cc);
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
B41a0ce:{NFSU2_TR(0x41a0ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a0d2:{NFSU2_TR(0x41a0d2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41a16b;}}
}
B41a0d8:L41a0d8:{c.instructions+=2;NFSU2_TR(0x41a0d8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B41a0db:{NFSU2_TR(0x41a0db);
{goto L41a0e0;}
}
B41a0e0:L41a0e0:{c.instructions+=11;NFSU2_TR(0x41a0e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41a0e4:{NFSU2_TR(0x41a0e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B41a0e6:{NFSU2_TR(0x41a0e6);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a0e9:{NFSU2_TR(0x41a0e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a0ea:{NFSU2_TR(0x41a0ea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a0ec:{NFSU2_TR(0x41a0ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a0ed:{NFSU2_TR(0x41a0ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41a0f1:{NFSU2_TR(0x41a0f1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a0f4:{NFSU2_TR(0x41a0f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a0f5:{NFSU2_TR(0x41a0f5);
__builtin_memmove((R+4),(R+24),4);
}
B41a0f7:{NFSU2_TR(0x41a0f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a0fcull));
TAIL_STATIC(0x4122c0u,412);
}
B41a0fc:L41a0fc:{c.instructions+=2;NFSU2_TR(0x41a0fc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B41a0fe:{NFSU2_TR(0x41a0fe);
__builtin_memmove((R+28),(R+28),4);
}
B41a100:L41a100:{c.instructions+=3;NFSU2_TR(0x41a100);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41a104:{NFSU2_TR(0x41a104);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B41a108:{NFSU2_TR(0x41a108);
if(r1(R+518)){{goto L41a142;}}
}
B41a10a:L41a10a:{c.instructions+=3;NFSU2_TR(0x41a10a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B41a10e:{NFSU2_TR(0x41a10e);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B41a112:{NFSU2_TR(0x41a112);
if(r1(R+518)){{goto L41a142;}}
}
B41a114:L41a114:{c.instructions+=3;NFSU2_TR(0x41a114);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B41a117:{NFSU2_TR(0x41a117);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41a119:{NFSU2_TR(0x41a119);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41a131;}}
}
B41a11b:L41a11b:{c.instructions+=5;NFSU2_TR(0x41a11b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B41a122:{NFSU2_TR(0x41a122);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B41a125:{NFSU2_TR(0x41a125);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B41a128:{NFSU2_TR(0x41a128);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41a12f:{NFSU2_TR(0x41a12f);
{goto L41a144;}
}
B41a131:L41a131:{c.instructions+=5;NFSU2_TR(0x41a131);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B41a134:{NFSU2_TR(0x41a134);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41a136:{NFSU2_TR(0x41a136);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B41a139:{NFSU2_TR(0x41a139);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41a140:{NFSU2_TR(0x41a140);
{goto L41a144;}
}
B41a142:L41a142:{c.instructions+=1;NFSU2_TR(0x41a142);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41a144:L41a144:{c.instructions+=2;NFSU2_TR(0x41a144);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a145:{NFSU2_TR(0x41a145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a14aull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B41a14a:L41a14a:{c.instructions+=3;NFSU2_TR(0x41a14a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B41a14b:{NFSU2_TR(0x41a14b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41a14e:{NFSU2_TR(0x41a14e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41a100u);}goto L41a100;}}
}
B41a150:L41a150:{c.instructions+=8;NFSU2_TR(0x41a150);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a154:{NFSU2_TR(0x41a154);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41a158:{NFSU2_TR(0x41a158);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a15b:{NFSU2_TR(0x41a15b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41a15c:{NFSU2_TR(0x41a15c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B41a15f:{NFSU2_TR(0x41a15f);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B41a161:{NFSU2_TR(0x41a161);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a165:{NFSU2_TR(0x41a165);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41a0e0u);}goto L41a0e0;}}
}
B41a16b:L41a16b:{c.instructions+=6;NFSU2_TR(0x41a16b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41a16c:{NFSU2_TR(0x41a16c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41a16d:{NFSU2_TR(0x41a16d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41a16e:{NFSU2_TR(0x41a16e);
__builtin_memmove((R+16),(R+20),4);
}
B41a170:{NFSU2_TR(0x41a170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41a171:{NFSU2_TR(0x41a171);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41a180:L41a180:{c.instructions+=20;NFSU2_TR(0x41a180);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a181:{NFSU2_TR(0x41a181);
__builtin_memmove((R+20),(R+16),4);
}
B41a183:{NFSU2_TR(0x41a183);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B41a186:{NFSU2_TR(0x41a186);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1f4ull))));
}
B41a18c:{NFSU2_TR(0x41a18c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a18d:{NFSU2_TR(0x41a18d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a18e:{NFSU2_TR(0x41a18e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a18f:{NFSU2_TR(0x41a18f);
__builtin_memmove((R+28),(R+4),4);
}
B41a191:{NFSU2_TR(0x41a191);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a194:{NFSU2_TR(0x41a194);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a197:{NFSU2_TR(0x41a197);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B41a199:{NFSU2_TR(0x41a199);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B41a19a:{NFSU2_TR(0x41a19a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41a19c:{NFSU2_TR(0x41a19c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B41a19f:{NFSU2_TR(0x41a19f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a1a3:{NFSU2_TR(0x41a1a3);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B41a1a4:{NFSU2_TR(0x41a1a4);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B41a1a6:{NFSU2_TR(0x41a1a6);
__builtin_memmove((R+24),(R+8),4);
}
B41a1a8:{NFSU2_TR(0x41a1a8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41a1aa:{NFSU2_TR(0x41a1aa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41a1ae;}}
}
B41a1ac:L41a1ac:{c.instructions+=1;NFSU2_TR(0x41a1ac);
__builtin_memmove((R+24),(R+0),4);
}
B41a1ae:L41a1ae:{c.instructions+=4;NFSU2_TR(0x41a1ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a1b1:{NFSU2_TR(0x41a1b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a1b4:{NFSU2_TR(0x41a1b4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B41a1b7:{NFSU2_TR(0x41a1b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a1bcull));
TAIL_STATIC(0x5b5330u,5b5);
}
B41a1bc:L41a1bc:{c.instructions+=4;NFSU2_TR(0x41a1bc);
__builtin_memmove((R+0),(R+24),4);
}
B41a1be:{NFSU2_TR(0x41a1be);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a1c2:{NFSU2_TR(0x41a1c2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B41a1c4:{NFSU2_TR(0x41a1c4);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41a1c8:L41a1c8:{c.instructions+=2;NFSU2_TR(0x41a1c8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41a1ca:{NFSU2_TR(0x41a1ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41a1df;}}
}
B41a1cc:L41a1cc:{c.instructions+=4;NFSU2_TR(0x41a1cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B41a1ce:{NFSU2_TR(0x41a1ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B41a1d1:{NFSU2_TR(0x41a1d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41a1d3:{NFSU2_TR(0x41a1d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41a1d6;}}
}
B41a1d5:L41a1d5:{c.instructions+=1;NFSU2_TR(0x41a1d5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B41a1d6:L41a1d6:{c.instructions+=4;NFSU2_TR(0x41a1d6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B41a1d7:{NFSU2_TR(0x41a1d7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B41a1da:{NFSU2_TR(0x41a1da);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41a1dd:{NFSU2_TR(0x41a1dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41a1c8u);}goto L41a1c8;}}
}
B41a1df:L41a1df:{c.instructions+=3;NFSU2_TR(0x41a1df);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41a1e1:{NFSU2_TR(0x41a1e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a1e5:{NFSU2_TR(0x41a1e5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L41a1ed;}}
}
B41a1e7:L41a1e7:{c.instructions+=2;NFSU2_TR(0x41a1e7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41a1e9:{NFSU2_TR(0x41a1e9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a1ed:L41a1ed:{c.instructions+=3;NFSU2_TR(0x41a1ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a1f0:{NFSU2_TR(0x41a1f0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B41a1f2:{NFSU2_TR(0x41a1f2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41aa50;}}
}
B41a1f8:L41a1f8:{c.instructions+=1;NFSU2_TR(0x41a1f8);
{goto L41a202;}
}
B41a1fa:L41a1fa:{c.instructions+=2;NFSU2_TR(0x41a1fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41a1fe:{NFSU2_TR(0x41a1fe);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a202:L41a202:{c.instructions+=2;NFSU2_TR(0x41a202);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41a204:{NFSU2_TR(0x41a204);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41a225;}}
}
B41a206:L41a206:{c.instructions+=2;NFSU2_TR(0x41a206);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B41a20a:{NFSU2_TR(0x41a20a);
__builtin_memmove((R+12),(R+12),4);
}
B41a210:L41a210:{c.instructions+=4;NFSU2_TR(0x41a210);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B41a212:{NFSU2_TR(0x41a212);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B41a215:{NFSU2_TR(0x41a215);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41a217:{NFSU2_TR(0x41a217);
if(r1(R+518)){{goto L41a221;}}
}
B41a219:L41a219:{c.instructions+=4;NFSU2_TR(0x41a219);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41a21a:{NFSU2_TR(0x41a21a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B41a21d:{NFSU2_TR(0x41a21d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41a21f:{NFSU2_TR(0x41a21f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41a210u);}goto L41a210;}}
}
B41a221:L41a221:{c.instructions+=1;NFSU2_TR(0x41a221);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a225:L41a225:{c.instructions+=5;NFSU2_TR(0x41a225);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B41a228:{NFSU2_TR(0x41a228);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41a22a:{NFSU2_TR(0x41a22a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a22e:{NFSU2_TR(0x41a22e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a232:{NFSU2_TR(0x41a232);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41a24d;}}
}
B41a234:L41a234:{c.instructions+=1;NFSU2_TR(0x41a234);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B41a238:L41a238:{c.instructions+=4;NFSU2_TR(0x41a238);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B41a23a:{NFSU2_TR(0x41a23a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B41a23d:{NFSU2_TR(0x41a23d);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41a23f:{NFSU2_TR(0x41a23f);
if(r1(R+518)){{goto L41a249;}}
}
B41a241:L41a241:{c.instructions+=4;NFSU2_TR(0x41a241);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B41a242:{NFSU2_TR(0x41a242);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B41a245:{NFSU2_TR(0x41a245);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41a247:{NFSU2_TR(0x41a247);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41a238u);}goto L41a238;}}
}
B41a249:L41a249:{c.instructions+=1;NFSU2_TR(0x41a249);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a24d:L41a24d:{c.instructions+=2;NFSU2_TR(0x41a24d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41a24f:{NFSU2_TR(0x41a24f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41aa39;}}
}
B41a255:L41a255:{c.instructions+=3;NFSU2_TR(0x41a255);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a259:{NFSU2_TR(0x41a259);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41a25b:{NFSU2_TR(0x41a25b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41aa39;}}
}
B41a261:L41a261:{c.instructions+=5;NFSU2_TR(0x41a261);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41a265:{NFSU2_TR(0x41a265);
__builtin_memmove((R+4),(R+0),4);
}
B41a267:{NFSU2_TR(0x41a267);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B41a269:{NFSU2_TR(0x41a269);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41a26c:{NFSU2_TR(0x41a26c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41aa39;}}
}
B41a272:L41a272:{c.instructions+=20;NFSU2_TR(0x41a272);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a276:{NFSU2_TR(0x41a276);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B41a27a:{NFSU2_TR(0x41a27a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a27e:{NFSU2_TR(0x41a27e);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B41a282:{NFSU2_TR(0x41a282);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41a285:{NFSU2_TR(0x41a285);
{u32 ea_=u32(r4(R+12)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a288:{NFSU2_TR(0x41a288);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a28c:{NFSU2_TR(0x41a28c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41a290:{NFSU2_TR(0x41a290);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a292:{NFSU2_TR(0x41a292);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a294:{NFSU2_TR(0x41a294);
__builtin_memmove((R+0),(R+8),4);
}
B41a296:{NFSU2_TR(0x41a296);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a29a:{NFSU2_TR(0x41a29a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a29b:{NFSU2_TR(0x41a29b);
{u32 ea_=u32(u32(7879824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a2a1:{NFSU2_TR(0x41a2a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a2a8:{NFSU2_TR(0x41a2a8);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41a2ac:{NFSU2_TR(0x41a2ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a2ad:{NFSU2_TR(0x41a2ad);
__builtin_memmove((R+4),(R+28),4);
}
B41a2af:{NFSU2_TR(0x41a2af);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a2b3:{NFSU2_TR(0x41a2b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a2b8ull));
TAIL_STATIC(0x4122c0u,412);
}
B41a2b8:L41a2b8:{c.instructions+=12;NFSU2_TR(0x41a2b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x150ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41a2bf:{NFSU2_TR(0x41a2bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x154ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a2c6:{NFSU2_TR(0x41a2c6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a2c8:{NFSU2_TR(0x41a2c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a2cc:{NFSU2_TR(0x41a2cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a2d0:{NFSU2_TR(0x41a2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a2d3:{NFSU2_TR(0x41a2d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a2d5:{NFSU2_TR(0x41a2d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a2d6:{NFSU2_TR(0x41a2d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41a2dd:{NFSU2_TR(0x41a2dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a2de:{NFSU2_TR(0x41a2de);
__builtin_memmove((R+4),(R+12),4);
}
B41a2e0:{NFSU2_TR(0x41a2e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a2e5ull));
TAIL_STATIC(0x4122c0u,412);
}
B41a2e5:L41a2e5:{c.instructions+=8;NFSU2_TR(0x41a2e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a2ec:{NFSU2_TR(0x41a2ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a2f3:{NFSU2_TR(0x41a2f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a2f7:{NFSU2_TR(0x41a2f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a2fb:{NFSU2_TR(0x41a2fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a303:{NFSU2_TR(0x41a303);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B41a305:{NFSU2_TR(0x41a305);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a30d:{NFSU2_TR(0x41a30d);
__builtin_memmove((R+4),(R+4),4);
}
B41a310:L41a310:{c.instructions+=9;NFSU2_TR(0x41a310);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41a314:{NFSU2_TR(0x41a314);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a317:{NFSU2_TR(0x41a317);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a318:{NFSU2_TR(0x41a318);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a31a:{NFSU2_TR(0x41a31a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a31b:{NFSU2_TR(0x41a31b);
u8 U[4];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a322:{NFSU2_TR(0x41a322);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a323:{NFSU2_TR(0x41a323);
__builtin_memmove((R+4),(R+28),4);
}
B41a325:{NFSU2_TR(0x41a325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a32aull));
TAIL_STATIC(0x4122c0u,412);
}
B41a32a:L41a32a:{c.instructions+=13;NFSU2_TR(0x41a32a);
{u32 ea_=u32(r4(R+16)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a331:{NFSU2_TR(0x41a331);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41a335:{NFSU2_TR(0x41a335);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a33c:{NFSU2_TR(0x41a33c);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a343:{NFSU2_TR(0x41a343);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a344:{NFSU2_TR(0x41a344);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(392u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a34b:{NFSU2_TR(0x41a34b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a34e:{NFSU2_TR(0x41a34e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a350:{NFSU2_TR(0x41a350);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a351:{NFSU2_TR(0x41a351);
u8 U[4];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a358:{NFSU2_TR(0x41a358);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a359:{NFSU2_TR(0x41a359);
__builtin_memmove((R+4),(R+12),4);
}
B41a35b:{NFSU2_TR(0x41a35b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a360ull));
TAIL_STATIC(0x4122c0u,412);
}
B41a360:L41a360:{c.instructions+=12;NFSU2_TR(0x41a360);
{u32 ea_=u32(r4(R+16)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a367:{NFSU2_TR(0x41a367);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41a36b:{NFSU2_TR(0x41a36b);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a372:{NFSU2_TR(0x41a372);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a379:{NFSU2_TR(0x41a379);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a37d:{NFSU2_TR(0x41a37d);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(452u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a384:{NFSU2_TR(0x41a384);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B41a385:{NFSU2_TR(0x41a385);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B41a388:{NFSU2_TR(0x41a388);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B41a389:{NFSU2_TR(0x41a389);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a38d:{NFSU2_TR(0x41a38d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a391:{NFSU2_TR(0x41a391);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41a310u);}goto L41a310;}}
}
B41a397:L41a397:{c.instructions+=9;NFSU2_TR(0x41a397);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41a39b:{NFSU2_TR(0x41a39b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a39f:{NFSU2_TR(0x41a39f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a3a2:{NFSU2_TR(0x41a3a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41a3a6:{NFSU2_TR(0x41a3a6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B41a3a7:{NFSU2_TR(0x41a3a7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41a3a9:{NFSU2_TR(0x41a3a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B41a3ac:{NFSU2_TR(0x41a3ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a3b0:{NFSU2_TR(0x41a3b0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41a3ce;}}
}
B41a3b2:L41a3b2:{c.instructions+=1;NFSU2_TR(0x41a3b2);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41a3b6:L41a3b6:{c.instructions+=3;NFSU2_TR(0x41a3b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B41a3b8:{NFSU2_TR(0x41a3b8);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B41a3bc:{NFSU2_TR(0x41a3bc);
if(r1(R+518)){{goto L41a3c6;}}
}
B41a3be:L41a3be:{c.instructions+=4;NFSU2_TR(0x41a3be);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B41a3bf:{NFSU2_TR(0x41a3bf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B41a3c2:{NFSU2_TR(0x41a3c2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41a3c4:{NFSU2_TR(0x41a3c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41a3b6u);}goto L41a3b6;}}
}
B41a3c6:L41a3c6:{c.instructions+=2;NFSU2_TR(0x41a3c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a3ca:{NFSU2_TR(0x41a3ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a3ce:L41a3ce:{c.instructions+=2;NFSU2_TR(0x41a3ce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41a3d0:{NFSU2_TR(0x41a3d0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41a49c;}}
}
B41a3d6:L41a3d6:{c.instructions+=10;NFSU2_TR(0x41a3d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a3da:{NFSU2_TR(0x41a3da);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B41a3de:{NFSU2_TR(0x41a3de);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a3e1:{NFSU2_TR(0x41a3e1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a3e3:{NFSU2_TR(0x41a3e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a3e5:{NFSU2_TR(0x41a3e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a3e6:{NFSU2_TR(0x41a3e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x17cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41a3ed:{NFSU2_TR(0x41a3ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a3ee:{NFSU2_TR(0x41a3ee);
__builtin_memmove((R+4),(R+28),4);
}
B41a3f0:{NFSU2_TR(0x41a3f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a3f5ull));
TAIL_STATIC(0x4122c0u,412);
}
B41a3f5:L41a3f5:{c.instructions+=15;NFSU2_TR(0x41a3f5);
{u32 ea_=u32(r4(R+16)+u32(372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a3fc:{NFSU2_TR(0x41a3fc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a400:{NFSU2_TR(0x41a400);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a404:{NFSU2_TR(0x41a404);
{u32 ea_=u32(r4(R+16)+u32(368u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41a40b:{NFSU2_TR(0x41a40b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a40c:{NFSU2_TR(0x41a40c);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a410:{NFSU2_TR(0x41a410);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a411:{NFSU2_TR(0x41a411);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a415:{NFSU2_TR(0x41a415);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41a419:{NFSU2_TR(0x41a419);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a41d:{NFSU2_TR(0x41a41d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a41e:{NFSU2_TR(0x41a41e);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B41a420:{NFSU2_TR(0x41a420);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a424:{NFSU2_TR(0x41a424);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41a426:{NFSU2_TR(0x41a426);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a42bull));
TAIL_STATIC(0x43ceb0u,43c);
}
B41a42b:L41a42b:{c.instructions+=3;NFSU2_TR(0x41a42b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B41a42e:{NFSU2_TR(0x41a42e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B41a430:{NFSU2_TR(0x41a430);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B41a432:L41a432:{c.instructions+=9;NFSU2_TR(0x41a432);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a435:{NFSU2_TR(0x41a435);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41a438:{NFSU2_TR(0x41a438);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a439:{NFSU2_TR(0x41a439);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a43b:{NFSU2_TR(0x41a43b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a43c:{NFSU2_TR(0x41a43c);
u8 U[4];
w4(U+0,u32(u32(u32(0x16cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41a443:{NFSU2_TR(0x41a443);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a444:{NFSU2_TR(0x41a444);
__builtin_memmove((R+4),(R+28),4);
}
B41a446:{NFSU2_TR(0x41a446);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a44bull));
TAIL_STATIC(0x4122c0u,412);
}
B41a44b:L41a44b:{c.instructions+=14;NFSU2_TR(0x41a44b);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a452:{NFSU2_TR(0x41a452);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a459:{NFSU2_TR(0x41a459);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a45d:{NFSU2_TR(0x41a45d);
u8 U[12];
w4(U+0,u32(u32(u32(0x1e0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41a464:{NFSU2_TR(0x41a464);
{u32 ea_=u32(r4(R+16)+u32(352u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41a46b:{NFSU2_TR(0x41a46b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a46c:{NFSU2_TR(0x41a46c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a46d:{NFSU2_TR(0x41a46d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a46f:{NFSU2_TR(0x41a46f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a470:{NFSU2_TR(0x41a470);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a477:{NFSU2_TR(0x41a477);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B41a479:{NFSU2_TR(0x41a479);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a480:{NFSU2_TR(0x41a480);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41a482:{NFSU2_TR(0x41a482);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a487ull));
TAIL_STATIC(0x43ceb0u,43c);
}
B41a487:L41a487:{c.instructions+=5;NFSU2_TR(0x41a487);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B41a48a:{NFSU2_TR(0x41a48a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B41a48d:{NFSU2_TR(0x41a48d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B41a48e:{NFSU2_TR(0x41a48e);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41a491:{NFSU2_TR(0x41a491);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41a432u);}goto L41a432;}}
}
B41a493:L41a493:{c.instructions+=2;NFSU2_TR(0x41a493);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41a497:{NFSU2_TR(0x41a497);
{goto L41a5bc;}
}
B41a49c:L41a49c:{c.instructions+=4;NFSU2_TR(0x41a49c);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B41a4a0:{NFSU2_TR(0x41a4a0);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41a4a4:{NFSU2_TR(0x41a4a4);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B41a4a8:{NFSU2_TR(0x41a4a8);
if(r1(R+518)){{goto L41a4e4;}}
}
B41a4aa:L41a4aa:{c.instructions+=3;NFSU2_TR(0x41a4aa);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B41a4ae:{NFSU2_TR(0x41a4ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B41a4b2:{NFSU2_TR(0x41a4b2);
if(r1(R+518)){{goto L41a4e4;}}
}
B41a4b4:L41a4b4:{c.instructions+=3;NFSU2_TR(0x41a4b4);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B41a4b7:{NFSU2_TR(0x41a4b7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41a4b9:{NFSU2_TR(0x41a4b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41a4c4;}}
}
B41a4bb:L41a4bb:{c.instructions+=2;NFSU2_TR(0x41a4bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B41a4c2:{NFSU2_TR(0x41a4c2);
{goto L41a4c6;}
}
B41a4c4:L41a4c4:{c.instructions+=1;NFSU2_TR(0x41a4c4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41a4c6:L41a4c6:{c.instructions+=5;NFSU2_TR(0x41a4c6);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B41a4c9:{NFSU2_TR(0x41a4c9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B41a4cc:{NFSU2_TR(0x41a4cc);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41a4d3:{NFSU2_TR(0x41a4d3);
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
B41a4d5:{NFSU2_TR(0x41a4d5);
if(r1(R+518)){{goto L41a4e4;}}
}
B41a4d7:L41a4d7:{c.instructions+=5;NFSU2_TR(0x41a4d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41a4d9:{NFSU2_TR(0x41a4d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a4da:{NFSU2_TR(0x41a4da);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41a4de:{NFSU2_TR(0x41a4de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a4df:{NFSU2_TR(0x41a4df);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a4e2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41a4e2:L41a4e2:{c.instructions+=1;NFSU2_TR(0x41a4e2);
{goto L41a4f4;}
}
B41a4e4:L41a4e4:{c.instructions+=2;NFSU2_TR(0x41a4e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a4ec:{NFSU2_TR(0x41a4ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a4f4:L41a4f4:{c.instructions+=7;NFSU2_TR(0x41a4f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a4f8:{NFSU2_TR(0x41a4f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a4f9:{NFSU2_TR(0x41a4f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41a4fd:{NFSU2_TR(0x41a4fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a4fe:{NFSU2_TR(0x41a4fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41a502:{NFSU2_TR(0x41a502);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a503:{NFSU2_TR(0x41a503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a508ull));
TAIL_STATIC(0x43ceb0u,43c);
}
B41a508:L41a508:{c.instructions+=6;NFSU2_TR(0x41a508);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a50c:{NFSU2_TR(0x41a50c);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41a513:{NFSU2_TR(0x41a513);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B41a516:{NFSU2_TR(0x41a516);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a51a:{NFSU2_TR(0x41a51a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a51e:{NFSU2_TR(0x41a51e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B41a520:L41a520:{c.instructions+=5;NFSU2_TR(0x41a520);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a524:{NFSU2_TR(0x41a524);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B41a528:{NFSU2_TR(0x41a528);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41a52c:{NFSU2_TR(0x41a52c);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B41a530:{NFSU2_TR(0x41a530);
if(r1(R+518)){{goto L41a56c;}}
}
B41a532:L41a532:{c.instructions+=3;NFSU2_TR(0x41a532);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B41a536:{NFSU2_TR(0x41a536);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B41a53a:{NFSU2_TR(0x41a53a);
if(r1(R+518)){{goto L41a56c;}}
}
B41a53c:L41a53c:{c.instructions+=3;NFSU2_TR(0x41a53c);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B41a53f:{NFSU2_TR(0x41a53f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41a541:{NFSU2_TR(0x41a541);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41a54c;}}
}
B41a543:L41a543:{c.instructions+=2;NFSU2_TR(0x41a543);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B41a54a:{NFSU2_TR(0x41a54a);
{goto L41a54e;}
}
B41a54c:L41a54c:{c.instructions+=1;NFSU2_TR(0x41a54c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41a54e:L41a54e:{c.instructions+=5;NFSU2_TR(0x41a54e);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B41a551:{NFSU2_TR(0x41a551);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B41a554:{NFSU2_TR(0x41a554);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41a55b:{NFSU2_TR(0x41a55b);
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
B41a55d:{NFSU2_TR(0x41a55d);
if(r1(R+518)){{goto L41a56c;}}
}
B41a55f:L41a55f:{c.instructions+=5;NFSU2_TR(0x41a55f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41a561:{NFSU2_TR(0x41a561);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a562:{NFSU2_TR(0x41a562);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41a566:{NFSU2_TR(0x41a566);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a567:{NFSU2_TR(0x41a567);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a56aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41a56a:L41a56a:{c.instructions+=1;NFSU2_TR(0x41a56a);
{goto L41a57c;}
}
B41a56c:L41a56c:{c.instructions+=2;NFSU2_TR(0x41a56c);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a574:{NFSU2_TR(0x41a574);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a57c:L41a57c:{c.instructions+=7;NFSU2_TR(0x41a57c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a580:{NFSU2_TR(0x41a580);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a581:{NFSU2_TR(0x41a581);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41a585:{NFSU2_TR(0x41a585);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a586:{NFSU2_TR(0x41a586);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41a58d:{NFSU2_TR(0x41a58d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a58e:{NFSU2_TR(0x41a58e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a593ull));
TAIL_STATIC(0x43ceb0u,43c);
}
B41a593:L41a593:{c.instructions+=8;NFSU2_TR(0x41a593);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a59a:{NFSU2_TR(0x41a59a);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(492u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a5a1:{NFSU2_TR(0x41a5a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B41a5a4:{NFSU2_TR(0x41a5a4);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a5ab:{NFSU2_TR(0x41a5ab);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B41a5ac:{NFSU2_TR(0x41a5ac);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41a5af:{NFSU2_TR(0x41a5af);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(476u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a5b6:{NFSU2_TR(0x41a5b6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41a520u);}goto L41a520;}}
}
B41a5bc:L41a5bc:{c.instructions+=3;NFSU2_TR(0x41a5bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a5c0:{NFSU2_TR(0x41a5c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B41a5c3:{NFSU2_TR(0x41a5c3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41a68d;}}
}
B41a5c9:L41a5c9:{c.instructions+=11;NFSU2_TR(0x41a5c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41a5cd:{NFSU2_TR(0x41a5cd);
__builtin_memmove((R+4),(R+0),4);
}
B41a5cf:{NFSU2_TR(0x41a5cf);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B41a5d3:{NFSU2_TR(0x41a5d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a5d6:{NFSU2_TR(0x41a5d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a5d8:{NFSU2_TR(0x41a5d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a5da:{NFSU2_TR(0x41a5da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a5db:{NFSU2_TR(0x41a5db);
u8 U[4];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a5e2:{NFSU2_TR(0x41a5e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a5e3:{NFSU2_TR(0x41a5e3);
__builtin_memmove((R+4),(R+28),4);
}
B41a5e5:{NFSU2_TR(0x41a5e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a5eaull));
TAIL_STATIC(0x4122c0u,412);
}
B41a5ea:L41a5ea:{c.instructions+=13;NFSU2_TR(0x41a5ea);
{u32 ea_=u32(r4(R+16)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a5f1:{NFSU2_TR(0x41a5f1);
{u32 ea_=u32(r4(R+16)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a5f8:{NFSU2_TR(0x41a5f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41a5fc:{NFSU2_TR(0x41a5fc);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41a600:{NFSU2_TR(0x41a600);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a601:{NFSU2_TR(0x41a601);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41a605:{NFSU2_TR(0x41a605);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a606:{NFSU2_TR(0x41a606);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a60a:{NFSU2_TR(0x41a60a);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a60e:{NFSU2_TR(0x41a60e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a60f:{NFSU2_TR(0x41a60f);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41a613:{NFSU2_TR(0x41a613);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a617:{NFSU2_TR(0x41a617);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a61cull));
TAIL_STATIC(0x43ceb0u,43c);
}
B41a61c:L41a61c:{c.instructions+=3;NFSU2_TR(0x41a61c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B41a61f:{NFSU2_TR(0x41a61f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B41a621:{NFSU2_TR(0x41a621);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B41a623:L41a623:{c.instructions+=9;NFSU2_TR(0x41a623);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a626:{NFSU2_TR(0x41a626);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B41a629:{NFSU2_TR(0x41a629);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a62a:{NFSU2_TR(0x41a62a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a62c:{NFSU2_TR(0x41a62c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a62d:{NFSU2_TR(0x41a62d);
u8 U[4];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a634:{NFSU2_TR(0x41a634);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a635:{NFSU2_TR(0x41a635);
__builtin_memmove((R+4),(R+28),4);
}
B41a637:{NFSU2_TR(0x41a637);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a63cull));
TAIL_STATIC(0x4122c0u,412);
}
B41a63c:L41a63c:{c.instructions+=14;NFSU2_TR(0x41a63c);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a643:{NFSU2_TR(0x41a643);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a64a:{NFSU2_TR(0x41a64a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41a64e:{NFSU2_TR(0x41a64e);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41a655:{NFSU2_TR(0x41a655);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B41a65c:{NFSU2_TR(0x41a65c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a65d:{NFSU2_TR(0x41a65d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a65e:{NFSU2_TR(0x41a65e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a660:{NFSU2_TR(0x41a660);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a661:{NFSU2_TR(0x41a661);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a668:{NFSU2_TR(0x41a668);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B41a66a:{NFSU2_TR(0x41a66a);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(432u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a671:{NFSU2_TR(0x41a671);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41a673:{NFSU2_TR(0x41a673);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a678ull));
TAIL_STATIC(0x43ceb0u,43c);
}
B41a678:L41a678:{c.instructions+=5;NFSU2_TR(0x41a678);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B41a67b:{NFSU2_TR(0x41a67b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B41a67e:{NFSU2_TR(0x41a67e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B41a67f:{NFSU2_TR(0x41a67f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41a682:{NFSU2_TR(0x41a682);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41a623u);}goto L41a623;}}
}
B41a684:L41a684:{c.instructions+=2;NFSU2_TR(0x41a684);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41a688:{NFSU2_TR(0x41a688);
{goto L41a7b5;}
}
B41a68d:L41a68d:{c.instructions+=5;NFSU2_TR(0x41a68d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41a691:{NFSU2_TR(0x41a691);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B41a695:{NFSU2_TR(0x41a695);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41a699:{NFSU2_TR(0x41a699);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B41a69d:{NFSU2_TR(0x41a69d);
if(r1(R+518)){{goto L41a6d9;}}
}
B41a69f:L41a69f:{c.instructions+=3;NFSU2_TR(0x41a69f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B41a6a3:{NFSU2_TR(0x41a6a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B41a6a7:{NFSU2_TR(0x41a6a7);
if(r1(R+518)){{goto L41a6d9;}}
}
B41a6a9:L41a6a9:{c.instructions+=3;NFSU2_TR(0x41a6a9);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B41a6ac:{NFSU2_TR(0x41a6ac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41a6ae:{NFSU2_TR(0x41a6ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41a6b9;}}
}
B41a6b0:L41a6b0:{c.instructions+=2;NFSU2_TR(0x41a6b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B41a6b7:{NFSU2_TR(0x41a6b7);
{goto L41a6bb;}
}
B41a6b9:L41a6b9:{c.instructions+=1;NFSU2_TR(0x41a6b9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41a6bb:L41a6bb:{c.instructions+=5;NFSU2_TR(0x41a6bb);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B41a6be:{NFSU2_TR(0x41a6be);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B41a6c1:{NFSU2_TR(0x41a6c1);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41a6c8:{NFSU2_TR(0x41a6c8);
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
B41a6ca:{NFSU2_TR(0x41a6ca);
if(r1(R+518)){{goto L41a6d9;}}
}
B41a6cc:L41a6cc:{c.instructions+=5;NFSU2_TR(0x41a6cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41a6ce:{NFSU2_TR(0x41a6ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a6cf:{NFSU2_TR(0x41a6cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41a6d3:{NFSU2_TR(0x41a6d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a6d4:{NFSU2_TR(0x41a6d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a6d7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41a6d7:L41a6d7:{c.instructions+=1;NFSU2_TR(0x41a6d7);
{goto L41a6e9;}
}
B41a6d9:L41a6d9:{c.instructions+=2;NFSU2_TR(0x41a6d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a6e1:{NFSU2_TR(0x41a6e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a6e9:L41a6e9:{c.instructions+=7;NFSU2_TR(0x41a6e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41a6ed:{NFSU2_TR(0x41a6ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a6ee:{NFSU2_TR(0x41a6ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a6f2:{NFSU2_TR(0x41a6f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a6f3:{NFSU2_TR(0x41a6f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41a6fa:{NFSU2_TR(0x41a6fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a6fb:{NFSU2_TR(0x41a6fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a700ull));
TAIL_STATIC(0x43ceb0u,43c);
}
B41a700:L41a700:{c.instructions+=7;NFSU2_TR(0x41a700);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a707:{NFSU2_TR(0x41a707);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a70e:{NFSU2_TR(0x41a70e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B41a711:{NFSU2_TR(0x41a711);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a715:{NFSU2_TR(0x41a715);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a719:{NFSU2_TR(0x41a719);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B41a71b:{NFSU2_TR(0x41a71b);
{goto L41a720;}
}
B41a720:L41a720:{c.instructions+=5;NFSU2_TR(0x41a720);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41a724:{NFSU2_TR(0x41a724);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B41a728:{NFSU2_TR(0x41a728);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41a72c:{NFSU2_TR(0x41a72c);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B41a730:{NFSU2_TR(0x41a730);
if(r1(R+518)){{goto L41a76c;}}
}
B41a732:L41a732:{c.instructions+=3;NFSU2_TR(0x41a732);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B41a736:{NFSU2_TR(0x41a736);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B41a73a:{NFSU2_TR(0x41a73a);
if(r1(R+518)){{goto L41a76c;}}
}
B41a73c:L41a73c:{c.instructions+=3;NFSU2_TR(0x41a73c);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B41a73f:{NFSU2_TR(0x41a73f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41a741:{NFSU2_TR(0x41a741);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41a74c;}}
}
B41a743:L41a743:{c.instructions+=2;NFSU2_TR(0x41a743);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B41a74a:{NFSU2_TR(0x41a74a);
{goto L41a74e;}
}
B41a74c:L41a74c:{c.instructions+=1;NFSU2_TR(0x41a74c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41a74e:L41a74e:{c.instructions+=5;NFSU2_TR(0x41a74e);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B41a751:{NFSU2_TR(0x41a751);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B41a754:{NFSU2_TR(0x41a754);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41a75b:{NFSU2_TR(0x41a75b);
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
B41a75d:{NFSU2_TR(0x41a75d);
if(r1(R+518)){{goto L41a76c;}}
}
B41a75f:L41a75f:{c.instructions+=5;NFSU2_TR(0x41a75f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41a761:{NFSU2_TR(0x41a761);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a762:{NFSU2_TR(0x41a762);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41a766:{NFSU2_TR(0x41a766);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a767:{NFSU2_TR(0x41a767);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a76aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41a76a:L41a76a:{c.instructions+=1;NFSU2_TR(0x41a76a);
{goto L41a77c;}
}
B41a76c:L41a76c:{c.instructions+=2;NFSU2_TR(0x41a76c);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a774:{NFSU2_TR(0x41a774);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a77c:L41a77c:{c.instructions+=6;NFSU2_TR(0x41a77c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a77d:{NFSU2_TR(0x41a77d);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a781:{NFSU2_TR(0x41a781);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a782:{NFSU2_TR(0x41a782);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41a789:{NFSU2_TR(0x41a789);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a78a:{NFSU2_TR(0x41a78a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a78full));
TAIL_STATIC(0x43ceb0u,43c);
}
B41a78f:L41a78f:{c.instructions+=8;NFSU2_TR(0x41a78f);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a796:{NFSU2_TR(0x41a796);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(428u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a79d:{NFSU2_TR(0x41a79d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B41a7a0:{NFSU2_TR(0x41a7a0);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a7a4:{NFSU2_TR(0x41a7a4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B41a7a5:{NFSU2_TR(0x41a7a5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41a7a8:{NFSU2_TR(0x41a7a8);
{u32 ea_=u32((r4(R+24)*8u)+r4(R+16)+u32(412u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a7af:{NFSU2_TR(0x41a7af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41a720u);}goto L41a720;}}
}
B41a7b5:L41a7b5:{c.instructions+=24;NFSU2_TR(0x41a7b5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41a7b7:{NFSU2_TR(0x41a7b7);
w4(R+0,u32(0x1ull));
}
B41a7bc:{NFSU2_TR(0x41a7bc);
u8 U[6];
w4(U+0,u32(u32(u32(0xbeull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B41a7c4:{NFSU2_TR(0x41a7c4);
u8 U[6];
w4(U+0,u32(u32(u32(0xeeull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B41a7cc:{NFSU2_TR(0x41a7cc);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41a7d0:{NFSU2_TR(0x41a7d0);
u8 U[6];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B41a7d8:{NFSU2_TR(0x41a7d8);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a7df:{NFSU2_TR(0x41a7df);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a7e6:{NFSU2_TR(0x41a7e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a7ed:{NFSU2_TR(0x41a7ed);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a7f4:{NFSU2_TR(0x41a7f4);
u8 U[6];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B41a7fc:{NFSU2_TR(0x41a7fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B41a7ff:{NFSU2_TR(0x41a7ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a800:{NFSU2_TR(0x41a800);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a807:{NFSU2_TR(0x41a807);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a812:{NFSU2_TR(0x41a812);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a81d:{NFSU2_TR(0x41a81d);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a828:{NFSU2_TR(0x41a828);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a833:{NFSU2_TR(0x41a833);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a83e:{NFSU2_TR(0x41a83e);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a849:{NFSU2_TR(0x41a849);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a854:{NFSU2_TR(0x41a854);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41a85f:{NFSU2_TR(0x41a85f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a863:{NFSU2_TR(0x41a863);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a868ull));
TAIL_STATIC(0x574b10u,574);
}
B41a868:L41a868:{c.instructions+=4;NFSU2_TR(0x41a868);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a86c:{NFSU2_TR(0x41a86c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a86d:{NFSU2_TR(0x41a86d);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a874:{NFSU2_TR(0x41a874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a879ull));
TAIL_STATIC(0x574b50u,574);
}
B41a879:L41a879:{c.instructions+=4;NFSU2_TR(0x41a879);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41a87d:{NFSU2_TR(0x41a87d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a87e:{NFSU2_TR(0x41a87e);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a885:{NFSU2_TR(0x41a885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a88aull));
TAIL_STATIC(0x574b90u,574);
}
B41a88a:L41a88a:{c.instructions+=4;NFSU2_TR(0x41a88a);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41a88e:{NFSU2_TR(0x41a88e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a88f:{NFSU2_TR(0x41a88f);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a896:{NFSU2_TR(0x41a896);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a89bull));
TAIL_STATIC(0x574bd0u,574);
}
B41a89b:L41a89b:{c.instructions+=2;NFSU2_TR(0x41a89b);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a8a2:{NFSU2_TR(0x41a8a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a8a7ull));
TAIL_STATIC(0x574830u,574);
}
B41a8a7:L41a8a7:{c.instructions+=2;NFSU2_TR(0x41a8a7);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a8ae:{NFSU2_TR(0x41a8ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a8b3ull));
TAIL_STATIC(0x574830u,574);
}
B41a8b3:L41a8b3:{c.instructions+=3;NFSU2_TR(0x41a8b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a8b7:{NFSU2_TR(0x41a8b7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41a8b9:{NFSU2_TR(0x41a8b9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L41a918;}}
}
B41a8bb:L41a8bb:{c.instructions+=8;NFSU2_TR(0x41a8bb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a8c1:{NFSU2_TR(0x41a8c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a8c5:{NFSU2_TR(0x41a8c5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B41a8c9:{NFSU2_TR(0x41a8c9);
__builtin_memmove((R+28),(R+24),4);
}
B41a8cb:{NFSU2_TR(0x41a8cb);
w1(R+512,u8((r4(R+28))<(r4(R+0))));
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B41a8cd:{NFSU2_TR(0x41a8cd);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B41a8d1:{NFSU2_TR(0x41a8d1);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41a8d2:{NFSU2_TR(0x41a8d2);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a8d6:L41a8d6:{c.instructions+=10;NFSU2_TR(0x41a8d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B41a8d8:{NFSU2_TR(0x41a8d8);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a8db:{NFSU2_TR(0x41a8db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a8dc:{NFSU2_TR(0x41a8dc);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41a8e0:{NFSU2_TR(0x41a8e0);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41a8e7:{NFSU2_TR(0x41a8e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a8ee:{NFSU2_TR(0x41a8ee);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41a8f2:{NFSU2_TR(0x41a8f2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a8f5:{NFSU2_TR(0x41a8f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a8f6:{NFSU2_TR(0x41a8f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a8fbull));
TAIL_STATIC(0x574c30u,574);
}
B41a8fb:L41a8fb:{c.instructions+=5;NFSU2_TR(0x41a8fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a8fd:{NFSU2_TR(0x41a8fd);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41a904:{NFSU2_TR(0x41a904);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a905:{NFSU2_TR(0x41a905);
__builtin_memmove((R+4),(R+24),4);
}
B41a907:{NFSU2_TR(0x41a907);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a90cull));
TAIL_STATIC(0x4123c0u,412);
}
B41a90c:L41a90c:{c.instructions+=5;NFSU2_TR(0x41a90c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41a90f:{NFSU2_TR(0x41a90f);
w1(R+512,carry<u32>(r4(R+12),u32(0x4ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B41a912:{NFSU2_TR(0x41a912);
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
B41a913:{NFSU2_TR(0x41a913);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a916:{NFSU2_TR(0x41a916);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41a8d6u);}goto L41a8d6;}}
}
B41a918:L41a918:{c.instructions+=4;NFSU2_TR(0x41a918);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B41a91a:{NFSU2_TR(0x41a91a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a91e:{NFSU2_TR(0x41a91e);
w4(R+12,u32(0x8ull));
}
B41a923:{NFSU2_TR(0x41a923);
{goto L41a930;}
}
B41a925:L41a925:{c.instructions+=2;NFSU2_TR(0x41a925);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41a929:{NFSU2_TR(0x41a929);
__builtin_memmove((R+16),(R+16),4);
}
B41a930:L41a930:{c.instructions+=4;NFSU2_TR(0x41a930);
u8 U[12];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41a937:{NFSU2_TR(0x41a937);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a938:{NFSU2_TR(0x41a938);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a93f:{NFSU2_TR(0x41a93f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a944ull));
TAIL_STATIC(0x574b10u,574);
}
B41a944:L41a944:{c.instructions+=4;NFSU2_TR(0x41a944);
u8 U[12];
w4(U+0,u32(u32(u32(0x1e0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B41a94b:{NFSU2_TR(0x41a94b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a94c:{NFSU2_TR(0x41a94c);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a953:{NFSU2_TR(0x41a953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a958ull));
TAIL_STATIC(0x574b50u,574);
}
B41a958:L41a958:{c.instructions+=4;NFSU2_TR(0x41a958);
u8 U[12];
w4(U+0,u32(u32(u32(0x1c0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41a95f:{NFSU2_TR(0x41a95f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a960:{NFSU2_TR(0x41a960);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a967:{NFSU2_TR(0x41a967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a96cull));
TAIL_STATIC(0x574b90u,574);
}
B41a96c:L41a96c:{c.instructions+=4;NFSU2_TR(0x41a96c);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41a973:{NFSU2_TR(0x41a973);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a974:{NFSU2_TR(0x41a974);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a97b:{NFSU2_TR(0x41a97b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a980ull));
TAIL_STATIC(0x574bd0u,574);
}
B41a980:L41a980:{c.instructions+=2;NFSU2_TR(0x41a980);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a987:{NFSU2_TR(0x41a987);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a98cull));
TAIL_STATIC(0x574830u,574);
}
B41a98c:L41a98c:{c.instructions+=2;NFSU2_TR(0x41a98c);
u8 U[4];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a993:{NFSU2_TR(0x41a993);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a998ull));
TAIL_STATIC(0x574830u,574);
}
B41a998:L41a998:{c.instructions+=4;NFSU2_TR(0x41a998);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41a99c:{NFSU2_TR(0x41a99c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a9a0:{NFSU2_TR(0x41a9a0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41a9a2:{NFSU2_TR(0x41a9a2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L41aa24;}}
}
B41a9a8:L41a9a8:{c.instructions+=10;NFSU2_TR(0x41a9a8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a9ae:{NFSU2_TR(0x41a9ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41a9b2:{NFSU2_TR(0x41a9b2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B41a9b6:{NFSU2_TR(0x41a9b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41a9ba:{NFSU2_TR(0x41a9ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B41a9be:{NFSU2_TR(0x41a9be);
w1(R+512,u8((r4(R+28))<(r4(R+0))));
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B41a9c0:{NFSU2_TR(0x41a9c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41a9c4:{NFSU2_TR(0x41a9c4);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41a9c5:{NFSU2_TR(0x41a9c5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a9c9:{NFSU2_TR(0x41a9c9);
__builtin_memmove((R+16),(R+16),4);
}
B41a9d0:L41a9d0:{c.instructions+=11;NFSU2_TR(0x41a9d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a9d4:{NFSU2_TR(0x41a9d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B41a9d6:{NFSU2_TR(0x41a9d6);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41a9d9:{NFSU2_TR(0x41a9d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a9da:{NFSU2_TR(0x41a9da);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41a9de:{NFSU2_TR(0x41a9de);
u8 U[4];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a9e5:{NFSU2_TR(0x41a9e5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41a9e9:{NFSU2_TR(0x41a9e9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41a9ec:{NFSU2_TR(0x41a9ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41a9ed:{NFSU2_TR(0x41a9ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41a9f4:{NFSU2_TR(0x41a9f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41a9f9ull));
TAIL_STATIC(0x574c30u,574);
}
B41a9f9:L41a9f9:{c.instructions+=7;NFSU2_TR(0x41a9f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41a9fd:{NFSU2_TR(0x41a9fd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B41aa00:{NFSU2_TR(0x41aa00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aa01:{NFSU2_TR(0x41aa01);
u8 U[4];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41aa08:{NFSU2_TR(0x41aa08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aa09:{NFSU2_TR(0x41aa09);
__builtin_memmove((R+4),(R+24),4);
}
B41aa0b:{NFSU2_TR(0x41aa0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41aa10ull));
TAIL_STATIC(0x4123c0u,412);
}
B41aa10:L41aa10:{c.instructions+=7;NFSU2_TR(0x41aa10);
{u32 ea_=u32(r4(R+24)+r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41aa13:{NFSU2_TR(0x41aa13);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41aa17:{NFSU2_TR(0x41aa17);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B41aa1a:{NFSU2_TR(0x41aa1a);
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
B41aa1b:{NFSU2_TR(0x41aa1b);
{u32 ea_=u32(r4(R+24)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41aa1e:{NFSU2_TR(0x41aa1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41aa22:{NFSU2_TR(0x41aa22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41a9d0u);}goto L41a9d0;}}
}
B41aa24:L41aa24:{c.instructions+=6;NFSU2_TR(0x41aa24);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41aa28:{NFSU2_TR(0x41aa28);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B41aa29:{NFSU2_TR(0x41aa29);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B41aa2c:{NFSU2_TR(0x41aa2c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x18ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41aa2f:{NFSU2_TR(0x41aa2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41aa33:{NFSU2_TR(0x41aa33);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41a925u);}goto L41a925;}}
}
B41aa39:L41aa39:{c.instructions+=6;NFSU2_TR(0x41aa39);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41aa3d:{NFSU2_TR(0x41aa3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41aa41:{NFSU2_TR(0x41aa41);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41aa44:{NFSU2_TR(0x41aa44);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B41aa46:{NFSU2_TR(0x41aa46);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41aa4a:{NFSU2_TR(0x41aa4a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41a1fau);}goto L41a1fa;}}
}
B41aa50:L41aa50:{c.instructions+=6;NFSU2_TR(0x41aa50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41aa51:{NFSU2_TR(0x41aa51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41aa52:{NFSU2_TR(0x41aa52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41aa53:{NFSU2_TR(0x41aa53);
__builtin_memmove((R+16),(R+20),4);
}
B41aa55:{NFSU2_TR(0x41aa55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41aa56:{NFSU2_TR(0x41aa56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41aa60:L41aa60:{c.instructions+=11;NFSU2_TR(0x41aa60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aa62:{NFSU2_TR(0x41aa62);
u8 U[4];
w4(U+0,u32(0x771539ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aa67:{NFSU2_TR(0x41aa67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41aa6d:{NFSU2_TR(0x41aa6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aa6e:{NFSU2_TR(0x41aa6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41aa75:{NFSU2_TR(0x41aa75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aa76:{NFSU2_TR(0x41aa76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aa77:{NFSU2_TR(0x41aa77);
__builtin_memmove((R+24),(R+4),4);
}
B41aa79:{NFSU2_TR(0x41aa79);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41aa7c:{NFSU2_TR(0x41aa7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41aa80:{NFSU2_TR(0x41aa80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41aa85ull));
TAIL_STATIC(0x40c910u,40c);
}
B41aa85:L41aa85:{c.instructions+=12;NFSU2_TR(0x41aa85);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41aa8b:{NFSU2_TR(0x41aa8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41aa93:{NFSU2_TR(0x41aa93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B41aa95:{NFSU2_TR(0x41aa95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41aa98:{NFSU2_TR(0x41aa98);
u8 U[4];
w4(U+0,u32(0x50f7d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aa9d:{NFSU2_TR(0x41aa9d);
u8 U[4];
w4(U+0,u32(0x412700ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aaa2:{NFSU2_TR(0x41aaa2);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aaa4:{NFSU2_TR(0x41aaa4);
u8 U[4];
w4(U+0,u32(0x920ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aaa9:{NFSU2_TR(0x41aaa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x910ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41aaaf:{NFSU2_TR(0x41aaaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aab0:{NFSU2_TR(0x41aab0);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41aab5:{NFSU2_TR(0x41aab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41aabaull));
TAIL_STATIC(0x75c461u,75c);
}
B41aaba:L41aaba:{c.instructions+=9;NFSU2_TR(0x41aaba);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41aabe:{NFSU2_TR(0x41aabe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x908ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41aac8:{NFSU2_TR(0x41aac8);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B41aace:{NFSU2_TR(0x41aace);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41aad5:{NFSU2_TR(0x41aad5);
__builtin_memmove((R+0),(R+24),4);
}
B41aad7:{NFSU2_TR(0x41aad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41aad8:{NFSU2_TR(0x41aad8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41aadf:{NFSU2_TR(0x41aadf);
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
B41aae2:{NFSU2_TR(0x41aae2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41aaf0:L41aaf0:{c.instructions+=6;NFSU2_TR(0x41aaf0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aaf1:{NFSU2_TR(0x41aaf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aaf2:{NFSU2_TR(0x41aaf2);
__builtin_memmove((R+28),(R+4),4);
}
B41aaf4:{NFSU2_TR(0x41aaf4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41aafa:{NFSU2_TR(0x41aafa);
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
B41aafc:{NFSU2_TR(0x41aafc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41abb3;}}
}
B41ab02:L41ab02:{c.instructions+=7;NFSU2_TR(0x41ab02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ab03:{NFSU2_TR(0x41ab03);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ab04:{NFSU2_TR(0x41ab04);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B41ab06:{NFSU2_TR(0x41ab06);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41ab08:{NFSU2_TR(0x41ab08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ab09:{NFSU2_TR(0x41ab09);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41ab10:{NFSU2_TR(0x41ab10);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ab14:L41ab14:{c.instructions+=4;NFSU2_TR(0x41ab14);
__builtin_memmove((R+0),gp(0x8a1ccc),4);
}
B41ab19:{NFSU2_TR(0x41ab19);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B41ab1b:{NFSU2_TR(0x41ab1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41ab1d:{NFSU2_TR(0x41ab1d);
if(r1(R+518)){{goto L41ab7a;}}
}
B41ab1f:L41ab1f:{c.instructions+=2;NFSU2_TR(0x41ab1f);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x844ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B41ab26:{NFSU2_TR(0x41ab26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ab7a;}}
}
B41ab28:L41ab28:{c.instructions+=4;NFSU2_TR(0x41ab28);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x908ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ab2e:{NFSU2_TR(0x41ab2e);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x920ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B41ab34:{NFSU2_TR(0x41ab34);
u8 U[12];
w4(U+0,u32(u32(u32(0x910ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B41ab3b:{NFSU2_TR(0x41ab3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ab40ull));
TAIL_STATIC(0x4022c0u,402);
}
B41ab40:L41ab40:{c.instructions+=7;NFSU2_TR(0x41ab40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ab42:{NFSU2_TR(0x41ab42);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ab44:{NFSU2_TR(0x41ab44);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ab46:{NFSU2_TR(0x41ab46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41ab49:{NFSU2_TR(0x41ab49);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ab4a:{NFSU2_TR(0x41ab4a);
__builtin_memmove((R+4),(R+12),4);
}
B41ab4c:{NFSU2_TR(0x41ab4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ab51ull));
TAIL_STATIC(0x610270u,610);
}
B41ab51:L41ab51:{c.instructions+=3;NFSU2_TR(0x41ab51);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ab53:{NFSU2_TR(0x41ab53);
__builtin_memmove((R+4),(R+12),4);
}
B41ab55:{NFSU2_TR(0x41ab55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ab5aull));
TAIL_STATIC(0x637040u,637);
}
B41ab5a:L41ab5a:{c.instructions+=8;NFSU2_TR(0x41ab5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x904ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ab60:{NFSU2_TR(0x41ab60);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41ab66:{NFSU2_TR(0x41ab66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B41ab68:{NFSU2_TR(0x41ab68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ab6b:{NFSU2_TR(0x41ab6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ab6e:{NFSU2_TR(0x41ab6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ab72:{NFSU2_TR(0x41ab72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B41ab74:{NFSU2_TR(0x41ab74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x908ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B41ab7a:L41ab7a:{c.instructions+=5;NFSU2_TR(0x41ab7a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x890ull))));
}
B41ab80:{NFSU2_TR(0x41ab80);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B41ab81:{NFSU2_TR(0x41ab81);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x189e0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x189e0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41ab87:{NFSU2_TR(0x41ab87);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ab8b:{NFSU2_TR(0x41ab8b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41ab14u);}goto L41ab14;}}
}
B41ab8d:L41ab8d:{c.instructions+=2;NFSU2_TR(0x41ab8d);
__builtin_memmove((R+4),(R+28),4);
}
B41ab8f:{NFSU2_TR(0x41ab8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ab94ull));
TAIL_STATIC(0x412840u,412);
}
B41ab94:L41ab94:{c.instructions+=7;NFSU2_TR(0x41ab94);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ab9a:{NFSU2_TR(0x41ab9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41aba0:{NFSU2_TR(0x41aba0);
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
B41aba2:{NFSU2_TR(0x41aba2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41aba3:{NFSU2_TR(0x41aba3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41aba4:{NFSU2_TR(0x41aba4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41aba5:{NFSU2_TR(0x41aba5);
if(r1(R+518)){{goto L41abb3;}}
}
B41aba7:L41aba7:{c.instructions+=4;NFSU2_TR(0x41aba7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B41abaa:{NFSU2_TR(0x41abaa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41abab:{NFSU2_TR(0x41abab);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41abae:{NFSU2_TR(0x41abae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41abb3ull));
TAIL_STATIC(0x413440u,413);
}
B41abb3:L41abb3:{c.instructions+=3;NFSU2_TR(0x41abb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41abb4:{NFSU2_TR(0x41abb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41abb5:{NFSU2_TR(0x41abb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41abc0:L41abc0:{c.instructions+=7;NFSU2_TR(0x41abc0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41abc1:{NFSU2_TR(0x41abc1);
__builtin_memmove((R+12),(R+4),4);
}
B41abc3:{NFSU2_TR(0x41abc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41abc9:{NFSU2_TR(0x41abc9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41abca:{NFSU2_TR(0x41abca);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x900ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41abd0:{NFSU2_TR(0x41abd0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41abd2:{NFSU2_TR(0x41abd2);
if(r1(R+518)){{goto L41ac0d;}}
}
B41abd4:L41abd4:{c.instructions+=1;NFSU2_TR(0x41abd4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41abd5:L41abd5:{c.instructions+=8;NFSU2_TR(0x41abd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B41abd7:{NFSU2_TR(0x41abd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41abd9:{NFSU2_TR(0x41abd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41abdc:{NFSU2_TR(0x41abdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B41abde:{NFSU2_TR(0x41abde);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41abe1:{NFSU2_TR(0x41abe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41abe7:{NFSU2_TR(0x41abe7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41abe9:{NFSU2_TR(0x41abe9);
if(r1(R+518)){{goto L41abf6;}}
}
B41abeb:L41abeb:{c.instructions+=3;NFSU2_TR(0x41abeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41abec:{NFSU2_TR(0x41abec);
w4(R+4,u32(0x8a3288ull));
}
B41abf1:{NFSU2_TR(0x41abf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41abf6ull));
TAIL_STATIC(0x63ae00u,63a);
}
B41abf6:L41abf6:{c.instructions+=2;NFSU2_TR(0x41abf6);
__builtin_memmove((R+4),(R+24),4);
}
B41abf8:{NFSU2_TR(0x41abf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41abfdull));
TAIL_STATIC(0x50f7d0u,50f);
}
B41abfd:L41abfd:{c.instructions+=2;NFSU2_TR(0x41abfd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41abfe:{NFSU2_TR(0x41abfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ac03ull));
TAIL_STATIC(0x575630u,575);
}
B41ac03:L41ac03:{c.instructions+=4;NFSU2_TR(0x41ac03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41ac05:{NFSU2_TR(0x41ac05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B41ac08:{NFSU2_TR(0x41ac08);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41ac0a:{NFSU2_TR(0x41ac0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41abd5u);}goto L41abd5;}}
}
B41ac0c:L41ac0c:{c.instructions+=1;NFSU2_TR(0x41ac0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41ac0d:L41ac0d:{c.instructions+=7;NFSU2_TR(0x41ac0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ac13:{NFSU2_TR(0x41ac13);
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
B41ac15:{NFSU2_TR(0x41ac15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41ac16:{NFSU2_TR(0x41ac16);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x908ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41ac20:{NFSU2_TR(0x41ac20);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B41ac26:{NFSU2_TR(0x41ac26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41ac27:{NFSU2_TR(0x41ac27);
if(r1(R+518)){{goto L41ac34;}}
}
B41ac29:L41ac29:{c.instructions+=3;NFSU2_TR(0x41ac29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ac2a:{NFSU2_TR(0x41ac2a);
w4(R+4,u32(0x8a3288ull));
}
B41ac2f:{NFSU2_TR(0x41ac2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ac34ull));
TAIL_STATIC(0x63ae00u,63a);
}
B41ac34:L41ac34:{c.instructions+=1;NFSU2_TR(0x41ac34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41ac40:L41ac40:{c.instructions+=4;NFSU2_TR(0x41ac40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ac44:{NFSU2_TR(0x41ac44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41ac47:{NFSU2_TR(0x41ac47);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ac48:{NFSU2_TR(0x41ac48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ac4dull));
TAIL_STATIC(0x412910u,412);
}
B41ac4d:L41ac4d:{c.instructions+=2;NFSU2_TR(0x41ac4d);
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
B41ac4f:{NFSU2_TR(0x41ac4f);
if(r1(R+518)){{goto L41ac57;}}
}
B41ac51:L41ac51:{c.instructions+=1;NFSU2_TR(0x41ac51);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x908ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B41ac57:L41ac57:{c.instructions+=1;NFSU2_TR(0x41ac57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41ac60:L41ac60:{c.instructions+=16;NFSU2_TR(0x41ac60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ac62:{NFSU2_TR(0x41ac62);
u8 U[4];
w4(U+0,u32(0x771569ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ac67:{NFSU2_TR(0x41ac67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ac6d:{NFSU2_TR(0x41ac6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ac6e:{NFSU2_TR(0x41ac6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ac75:{NFSU2_TR(0x41ac75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ac76:{NFSU2_TR(0x41ac76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ac77:{NFSU2_TR(0x41ac77);
u8 U[4];
w4(U+0,u32(0x401800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ac7c:{NFSU2_TR(0x41ac7c);
u8 U[4];
w4(U+0,u32(0x412e20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ac81:{NFSU2_TR(0x41ac81);
__builtin_memmove((R+24),(R+4),4);
}
B41ac83:{NFSU2_TR(0x41ac83);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ac85:{NFSU2_TR(0x41ac85);
u8 U[4];
w4(U+0,u32(0x900ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ac8a:{NFSU2_TR(0x41ac8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41ac8d:{NFSU2_TR(0x41ac8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ac8e:{NFSU2_TR(0x41ac8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ac92:{NFSU2_TR(0x41ac92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ac97ull));
TAIL_STATIC(0x75c461u,75c);
}
B41ac97:L41ac97:{c.instructions+=4;NFSU2_TR(0x41ac97);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41ac9f:{NFSU2_TR(0x41ac9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41aca5:{NFSU2_TR(0x41aca5);
w4(R+4,u32(0x3ull));
}
B41acaa:{NFSU2_TR(0x41acaa);
__builtin_memmove((R+12),(R+12),4);
}
B41acb0:L41acb0:{c.instructions+=4;NFSU2_TR(0x41acb0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B41acb6:{NFSU2_TR(0x41acb6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B41acb9:{NFSU2_TR(0x41acb9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B41acba:{NFSU2_TR(0x41acba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41acb0u);}goto L41acb0;}}
}
B41acbc:L41acbc:{c.instructions+=3;NFSU2_TR(0x41acbc);
__builtin_memmove((R+4),(R+24),4);
}
B41acbe:{NFSU2_TR(0x41acbe);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B41acc4:{NFSU2_TR(0x41acc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41acc9ull));
TAIL_STATIC(0x412f90u,412);
}
B41acc9:L41acc9:{c.instructions+=6;NFSU2_TR(0x41acc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41accd:{NFSU2_TR(0x41accd);
__builtin_memmove((R+0),(R+24),4);
}
B41accf:{NFSU2_TR(0x41accf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41acd0:{NFSU2_TR(0x41acd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41acd7:{NFSU2_TR(0x41acd7);
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
B41acda:{NFSU2_TR(0x41acda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41ace0:L41ace0:{c.instructions+=5;NFSU2_TR(0x41ace0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ace1:{NFSU2_TR(0x41ace1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ace2:{NFSU2_TR(0x41ace2);
__builtin_memmove((R+28),(R+4),4);
}
B41ace4:{NFSU2_TR(0x41ace4);
w4(R+4,u32(0x85ef70ull));
}
B41ace9:{NFSU2_TR(0x41ace9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41aceeull));
TAIL_STATIC(0x500cb0u,500);
}
B41acee:L41acee:{c.instructions+=3;NFSU2_TR(0x41acee);
__builtin_memmove((R+12),(R+0),1);
}
B41acf0:{NFSU2_TR(0x41acf0);
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
B41acf2:{NFSU2_TR(0x41acf2);
if(r1(R+518)){{goto L41ad30;}}
}
B41acf4:L41acf4:{c.instructions+=3;NFSU2_TR(0x41acf4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41acf5:{NFSU2_TR(0x41acf5);
w4(R+4,u32(0x85ef70ull));
}
B41acfa:{NFSU2_TR(0x41acfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41acffull));
TAIL_STATIC(0x500cf0u,500);
}
B41acff:L41acff:{c.instructions+=4;NFSU2_TR(0x41acff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ad02:{NFSU2_TR(0x41ad02);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B41ad04:{NFSU2_TR(0x41ad04);
u8 U[6];
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41ad07:{NFSU2_TR(0x41ad07);
{goto L41ad10;}
}
B41ad10:L41ad10:{c.instructions+=3;NFSU2_TR(0x41ad10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ad11:{NFSU2_TR(0x41ad11);
w4(R+4,u32(0x85ef70ull));
}
B41ad16:{NFSU2_TR(0x41ad16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ad1bull));
TAIL_STATIC(0x500d00u,500);
}
B41ad1b:L41ad1b:{c.instructions+=3;NFSU2_TR(0x41ad1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ad1c:{NFSU2_TR(0x41ad1c);
__builtin_memmove((R+4),(R+28),4);
}
B41ad1e:{NFSU2_TR(0x41ad1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ad23ull));
TAIL_STATIC(0x413440u,413);
}
B41ad23:L41ad23:{c.instructions+=4;NFSU2_TR(0x41ad23);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B41ad24:{NFSU2_TR(0x41ad24);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x900ull))));
}
B41ad2a:{NFSU2_TR(0x41ad2a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B41ad2d:{NFSU2_TR(0x41ad2d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41ad10u);}goto L41ad10;}}
}
B41ad2f:L41ad2f:{c.instructions+=1;NFSU2_TR(0x41ad2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41ad30:L41ad30:{c.instructions+=4;NFSU2_TR(0x41ad30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41ad31:{NFSU2_TR(0x41ad31);
__builtin_memmove((R+0),(R+12),1);
}
B41ad33:{NFSU2_TR(0x41ad33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41ad34:{NFSU2_TR(0x41ad34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41ad40:L41ad40:{c.instructions+=7;NFSU2_TR(0x41ad40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ad41:{NFSU2_TR(0x41ad41);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41ad45:{NFSU2_TR(0x41ad45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ad46:{NFSU2_TR(0x41ad46);
__builtin_memmove((R+28),(R+4),4);
}
B41ad48:{NFSU2_TR(0x41ad48);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B41ad4f:{NFSU2_TR(0x41ad4f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41ad51:{NFSU2_TR(0x41ad51);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41ae36;}}
}
B41ad57:L41ad57:{c.instructions+=5;NFSU2_TR(0x41ad57);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ad58:{NFSU2_TR(0x41ad58);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41ad5c:{NFSU2_TR(0x41ad5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ad5d:{NFSU2_TR(0x41ad5d);
__builtin_memmove((R+4),(R+24),4);
}
B41ad5f:{NFSU2_TR(0x41ad5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ad64ull));
TAIL_STATIC(0x40a2d0u,40a);
}
B41ad64:L41ad64:{c.instructions+=13;NFSU2_TR(0x41ad64);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B41ad68:{NFSU2_TR(0x41ad68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ad6b:{NFSU2_TR(0x41ad6b);
u8 U[13];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B41ad6f:{NFSU2_TR(0x41ad6f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41ad75:{NFSU2_TR(0x41ad75);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41ad7b:{NFSU2_TR(0x41ad7b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41ad7d:{NFSU2_TR(0x41ad7d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41ad7f:{NFSU2_TR(0x41ad7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ad82:{NFSU2_TR(0x41ad82);
__builtin_memmove((R+0),(R+518),1);
}
B41ad85:{NFSU2_TR(0x41ad85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ad86:{NFSU2_TR(0x41ad86);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ad87:{NFSU2_TR(0x41ad87);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ad8a:{NFSU2_TR(0x41ad8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ad8full));
TAIL_STATIC(0x40cbc0u,40c);
}
B41ad8f:L41ad8f:{c.instructions+=4;NFSU2_TR(0x41ad8f);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41ad92:{NFSU2_TR(0x41ad92);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41ad94:{NFSU2_TR(0x41ad94);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41ad97:{NFSU2_TR(0x41ad97);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41adeb;}}
}
B41ad99:L41ad99:{c.instructions+=3;NFSU2_TR(0x41ad99);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x26ull))));
__builtin_memmove((R+8),(U+0),4);
}
B41ad9c:{NFSU2_TR(0x41ad9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ada0:{NFSU2_TR(0x41ada0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ada1:L41ada1:{c.instructions+=4;NFSU2_TR(0x41ada1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41ada7:{NFSU2_TR(0x41ada7);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x3full)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3full))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B41ada9:{NFSU2_TR(0x41ada9);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+4),(U+0),2);
}
B41adac:{NFSU2_TR(0x41adac);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41addc;}}
}
B41adae:L41adae:{c.instructions+=11;NFSU2_TR(0x41adae);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B41adb1:{NFSU2_TR(0x41adb1);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41adb5:{NFSU2_TR(0x41adb5);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B41adb7:{NFSU2_TR(0x41adb7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+20),(U+0),2);
}
B41adba:{NFSU2_TR(0x41adba);
w2(R+20,u16(u32(r2(R+20))^u32(r2(R+4))));
}
B41adbd:{NFSU2_TR(0x41adbd);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0x1fffull))));
}
B41adc3:{NFSU2_TR(0x41adc3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(U+0,u16(u32(r2(U+0))^u32(r2(R+20))));
s2(u32(r4(R+0)),r2(U+0));
}
B41adc6:{NFSU2_TR(0x41adc6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B41adcd:{NFSU2_TR(0x41adcd);
u8 U[13];
w4(U+0,u32(u32(u32(0x39ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))&u32(u8(0xdfull))));
s1(u32(r4(U+8)),r1(U+12));
}
B41add2:{NFSU2_TR(0x41add2);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41add6:{NFSU2_TR(0x41add6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B41addc:L41addc:{c.instructions+=5;NFSU2_TR(0x41addc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ade0:{NFSU2_TR(0x41ade0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B41ade3:{NFSU2_TR(0x41ade3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B41ade4:{NFSU2_TR(0x41ade4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ade8:{NFSU2_TR(0x41ade8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41ada1u);}goto L41ada1;}}
}
B41adea:L41adea:{c.instructions+=1;NFSU2_TR(0x41adea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41adeb:L41adeb:{c.instructions+=3;NFSU2_TR(0x41adeb);
u8 U[14];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+28),(U+12),2);
}
B41adf0:{NFSU2_TR(0x41adf0);
u8 U[8];
__builtin_memmove((U+4),(R+28),2);
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
B41adf4:{NFSU2_TR(0x41adf4);
if(r1(R+518)){{goto L41ae2e;}}
}
B41adf6:L41adf6:{c.instructions+=3;NFSU2_TR(0x41adf6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41adfc:{NFSU2_TR(0x41adfc);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x3full))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x3full)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x3full))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41adfe:{NFSU2_TR(0x41adfe);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41ae2e;}}
}
B41ae00:L41ae00:{c.instructions+=11;NFSU2_TR(0x41ae00);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B41ae03:{NFSU2_TR(0x41ae03);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41ae07:{NFSU2_TR(0x41ae07);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41ae09:{NFSU2_TR(0x41ae09);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+4),(U+0),2);
}
B41ae0c:{NFSU2_TR(0x41ae0c);
w2(R+4,u16(u32(r2(R+4))^u32(r2(R+28))));
}
B41ae0f:{NFSU2_TR(0x41ae0f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1fffull))));
}
B41ae15:{NFSU2_TR(0x41ae15);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(U+0,u16(u32(r2(U+0))^u32(r2(R+4))));
s2(u32(r4(R+0)),r2(U+0));
}
B41ae18:{NFSU2_TR(0x41ae18);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B41ae1f:{NFSU2_TR(0x41ae1f);
u8 U[13];
w4(U+0,u32(u32(u32(0x39ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))|u32(u8(0x20ull))));
s1(u32(r4(U+8)),r1(U+12));
}
B41ae24:{NFSU2_TR(0x41ae24);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41ae28:{NFSU2_TR(0x41ae28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+523,scarry<u8>(r1(U+4),u8(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B41ae2e:L41ae2e:{c.instructions+=5;NFSU2_TR(0x41ae2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41ae2f:{NFSU2_TR(0x41ae2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41ae30:{NFSU2_TR(0x41ae30);
w1(R+0,u8(0x1ull));
}
B41ae32:{NFSU2_TR(0x41ae32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41ae33:{NFSU2_TR(0x41ae33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41ae36:L41ae36:{c.instructions+=4;NFSU2_TR(0x41ae36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41ae37:{NFSU2_TR(0x41ae37);
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
B41ae39:{NFSU2_TR(0x41ae39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41ae3a:{NFSU2_TR(0x41ae3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41ae40:L41ae40:{c.instructions+=7;NFSU2_TR(0x41ae40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ae41:{NFSU2_TR(0x41ae41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ae42:{NFSU2_TR(0x41ae42);
__builtin_memmove((R+24),(R+4),4);
}
B41ae44:{NFSU2_TR(0x41ae44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ae47:{NFSU2_TR(0x41ae47);
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
B41ae49:{NFSU2_TR(0x41ae49);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41ae50:{NFSU2_TR(0x41ae50);
if(r1(R+518)){{goto L41af59;}}
}
B41ae56:L41ae56:{c.instructions+=3;NFSU2_TR(0x41ae56);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41ae5c:{NFSU2_TR(0x41ae5c);
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
B41ae5e:{NFSU2_TR(0x41ae5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41af59;}}
}
B41ae64:L41ae64:{c.instructions+=4;NFSU2_TR(0x41ae64);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ae65:{NFSU2_TR(0x41ae65);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ae66:{NFSU2_TR(0x41ae66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ae67:{NFSU2_TR(0x41ae67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ae6cull));
TAIL_STATIC(0x5d4380u,5d4);
}
B41ae6c:L41ae6c:{c.instructions+=4;NFSU2_TR(0x41ae6c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B41ae6e:{NFSU2_TR(0x41ae6e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41ae70:{NFSU2_TR(0x41ae70);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ae74:{NFSU2_TR(0x41ae74);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41af09;}}
}
B41ae7a:L41ae7a:{c.instructions+=2;NFSU2_TR(0x41ae7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41ae7e:{NFSU2_TR(0x41ae7e);
__builtin_memmove((R+28),(R+28),4);
}
B41ae80:L41ae80:{c.instructions+=3;NFSU2_TR(0x41ae80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ae83:{NFSU2_TR(0x41ae83);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ae84:{NFSU2_TR(0x41ae84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ae89ull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B41ae89:L41ae89:{c.instructions+=10;NFSU2_TR(0x41ae89);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B41ae8f:{NFSU2_TR(0x41ae8f);
__builtin_memmove((R+28),(R+0),4);
}
B41ae91:{NFSU2_TR(0x41ae91);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ae94:{NFSU2_TR(0x41ae94);
__builtin_memmove((R+4),(R+0),4);
}
B41ae96:{NFSU2_TR(0x41ae96);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B41ae99:{NFSU2_TR(0x41ae99);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B41ae9c:{NFSU2_TR(0x41ae9c);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41ae9e:{NFSU2_TR(0x41ae9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B41aea1:{NFSU2_TR(0x41aea1);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+8))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B41aea3:{NFSU2_TR(0x41aea3);
if(r1(R+518)){{goto L41aef6;}}
}
B41aea5:L41aea5:{c.instructions+=3;NFSU2_TR(0x41aea5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aea6:{NFSU2_TR(0x41aea6);
__builtin_memmove((R+4),(R+28),4);
}
B41aea8:{NFSU2_TR(0x41aea8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41aeadull));
TAIL_STATIC(0x5dcbe0u,5dc);
}
B41aead:L41aead:{c.instructions+=3;NFSU2_TR(0x41aead);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41aeaf:{NFSU2_TR(0x41aeaf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aeb0:{NFSU2_TR(0x41aeb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41af5e;}}
}
B41aeb6:L41aeb6:{c.instructions+=2;NFSU2_TR(0x41aeb6);
__builtin_memmove((R+4),(R+28),4);
}
B41aeb8:{NFSU2_TR(0x41aeb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41aebdull));
TAIL_STATIC(0x5dcb90u,5dc);
}
B41aebd:L41aebd:{c.instructions+=2;NFSU2_TR(0x41aebd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41aebf:{NFSU2_TR(0x41aebf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41aefc;}}
}
B41aec1:L41aec1:{c.instructions+=3;NFSU2_TR(0x41aec1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aec2:{NFSU2_TR(0x41aec2);
__builtin_memmove((R+4),(R+28),4);
}
B41aec4:{NFSU2_TR(0x41aec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41aec9ull));
TAIL_STATIC(0x5dcc30u,5dc);
}
B41aec9:L41aec9:{c.instructions+=2;NFSU2_TR(0x41aec9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41aecb:{NFSU2_TR(0x41aecb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41aefc;}}
}
B41aecd:L41aecd:{c.instructions+=11;NFSU2_TR(0x41aecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41aed0:{NFSU2_TR(0x41aed0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B41aed7:{NFSU2_TR(0x41aed7);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B41aeda:{NFSU2_TR(0x41aeda);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B41aedd:{NFSU2_TR(0x41aedd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B41aedf:{NFSU2_TR(0x41aedf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B41aee2:{NFSU2_TR(0x41aee2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aee3:{NFSU2_TR(0x41aee3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aee4:{NFSU2_TR(0x41aee4);
__builtin_memmove((R+4),(R+28),4);
}
B41aee6:{NFSU2_TR(0x41aee6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aee7:{NFSU2_TR(0x41aee7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41aeecull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B41aeec:L41aeec:{c.instructions+=3;NFSU2_TR(0x41aeec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41aeed:{NFSU2_TR(0x41aeed);
__builtin_memmove((R+4),(R+24),4);
}
B41aeef:{NFSU2_TR(0x41aeef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41aef4ull));
TAIL_STATIC(0x40c580u,40c);
}
B41aef4:L41aef4:{c.instructions+=1;NFSU2_TR(0x41aef4);
{goto L41aefc;}
}
B41aef6:L41aef6:{c.instructions+=3;NFSU2_TR(0x41aef6);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B41aef8:{NFSU2_TR(0x41aef8);
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
B41aefa:{NFSU2_TR(0x41aefa);
if(r1(R+518)){{goto L41af56;}}
}
B41aefc:L41aefc:{c.instructions+=4;NFSU2_TR(0x41aefc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41af00:{NFSU2_TR(0x41af00);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B41af01:{NFSU2_TR(0x41af01);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41af03:{NFSU2_TR(0x41af03);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41ae80u);}goto L41ae80;}}
}
B41af09:L41af09:{c.instructions+=6;NFSU2_TR(0x41af09);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B41af0f:{NFSU2_TR(0x41af0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41af12:{NFSU2_TR(0x41af12);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41af14:{NFSU2_TR(0x41af14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B41af17:{NFSU2_TR(0x41af17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41af18:{NFSU2_TR(0x41af18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41af1dull));
TAIL_STATIC(0x5d8a40u,5d8);
}
B41af1d:L41af1d:{c.instructions+=2;NFSU2_TR(0x41af1d);
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
B41af1f:{NFSU2_TR(0x41af1f);
if(r1(R+518)){{goto L41af56;}}
}
B41af21:L41af21:{c.instructions+=10;NFSU2_TR(0x41af21);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B41af28:{NFSU2_TR(0x41af28);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41af2e:{NFSU2_TR(0x41af2e);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B41af32:{NFSU2_TR(0x41af32);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B41af39:{NFSU2_TR(0x41af39);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41af3b:{NFSU2_TR(0x41af3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B41af3e:{NFSU2_TR(0x41af3e);
u8 U[13];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B41af42:{NFSU2_TR(0x41af42);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B41af49:{NFSU2_TR(0x41af49);
u8 U[14];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w2(U+12,u16(0xffffull));
s2(u32(r4(U+8)),r2(U+12));
}
B41af50:{NFSU2_TR(0x41af50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+523,scarry<u8>(r1(U+4),u8(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B41af56:L41af56:{c.instructions+=3;NFSU2_TR(0x41af56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41af57:{NFSU2_TR(0x41af57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41af58:{NFSU2_TR(0x41af58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41af59:L41af59:{c.instructions+=3;NFSU2_TR(0x41af59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41af5a:{NFSU2_TR(0x41af5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41af5b:{NFSU2_TR(0x41af5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41af5e:L41af5e:{c.instructions+=10;NFSU2_TR(0x41af5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41af61:{NFSU2_TR(0x41af61);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B41af68:{NFSU2_TR(0x41af68);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B41af6b:{NFSU2_TR(0x41af6b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B41af6e:{NFSU2_TR(0x41af6e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B41af70:{NFSU2_TR(0x41af70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B41af73:{NFSU2_TR(0x41af73);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41af74:{NFSU2_TR(0x41af74);
__builtin_memmove((R+4),(R+28),4);
}
B41af76:{NFSU2_TR(0x41af76);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41af77:{NFSU2_TR(0x41af77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41af7cull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B41af7c:L41af7c:{c.instructions+=3;NFSU2_TR(0x41af7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41af7d:{NFSU2_TR(0x41af7d);
__builtin_memmove((R+4),(R+24),4);
}
B41af7f:{NFSU2_TR(0x41af7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41af84ull));
TAIL_STATIC(0x40c580u,40c);
}
B41af84:L41af84:{c.instructions+=6;NFSU2_TR(0x41af84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41af85:{NFSU2_TR(0x41af85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41af86:{NFSU2_TR(0x41af86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41af87:{NFSU2_TR(0x41af87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41af88:{NFSU2_TR(0x41af88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41af89:{NFSU2_TR(0x41af89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41af90:L41af90:{c.instructions+=13;NFSU2_TR(0x41af90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B41af93:{NFSU2_TR(0x41af93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41af94:{NFSU2_TR(0x41af94);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xbbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B41af9a:{NFSU2_TR(0x41af9a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41af9c:{NFSU2_TR(0x41af9c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41af9e:{NFSU2_TR(0x41af9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41af9f:{NFSU2_TR(0x41af9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B41afa1:{NFSU2_TR(0x41afa1);
u8 U[6];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
w1(U+5,u8(!(r1(R+518))));
__builtin_memmove((U+4),(U+5),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41afa6:{NFSU2_TR(0x41afa6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41afa8:{NFSU2_TR(0x41afa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41afac:{NFSU2_TR(0x41afac);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41afb0:{NFSU2_TR(0x41afb0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41afb4:{NFSU2_TR(0x41afb4);
if(r1(R+518)){TAIL_STATIC(0x41b20bu,41b);}
}
B41afba:L41afba:{c.instructions+=7;NFSU2_TR(0x41afba);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41afbb:{NFSU2_TR(0x41afbb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41afbc:{NFSU2_TR(0x41afbc);
__builtin_memmove((R+16),(R+16),4);
}
B41afc0:{NFSU2_TR(0x41afc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41afc3:{NFSU2_TR(0x41afc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41afc4:{NFSU2_TR(0x41afc4);
__builtin_memmove((R+4),(R+24),4);
}
B41afc6:{NFSU2_TR(0x41afc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41afcbull));
TAIL_STATIC(0x40cd00u,40c);
}
B41afcb:L41afcb:{c.instructions+=4;NFSU2_TR(0x41afcb);
{u32 ea_=u32(u32(7880000u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41afd1:{NFSU2_TR(0x41afd1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41afd3:{NFSU2_TR(0x41afd3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41afd6:{NFSU2_TR(0x41afd6);
if(r1(R+518)){TAIL_STATIC(0x41b02cu,41b);}
}
B41afd8:L41afd8:{c.instructions+=11;NFSU2_TR(0x41afd8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B41afdc:{NFSU2_TR(0x41afdc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B41afe0:{NFSU2_TR(0x41afe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41afe4:{NFSU2_TR(0x41afe4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41afe5:{NFSU2_TR(0x41afe5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41afe9:{NFSU2_TR(0x41afe9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41afed:{NFSU2_TR(0x41afed);
__builtin_memmove((R+4),(R+24),4);
}
B41afef:{NFSU2_TR(0x41afef);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41aff5:{NFSU2_TR(0x41aff5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41aff9:{NFSU2_TR(0x41aff9);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41afff:{NFSU2_TR(0x41afff);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x41b002u,41b);
}
XIT:NFSU2_TR_EXIT(0x41a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
