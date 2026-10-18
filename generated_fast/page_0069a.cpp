#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x69a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x69a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_69a(u8* __restrict R,Cpu& c);
u32 page_69a(Cpu& c){return body_69a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_69a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x69a000:goto L69a000;
case 0x69a001:c.instructions+=3;goto B69a001;
case 0x69a004:c.instructions+=2;goto B69a004;
case 0x69a006:c.instructions+=1;goto B69a006;
case 0x69a008:goto L69a008;
case 0x69a00a:goto L69a00a;
case 0x69a00d:c.instructions+=4;goto B69a00d;
case 0x69a010:c.instructions+=3;goto B69a010;
case 0x69a012:c.instructions+=2;goto B69a012;
case 0x69a015:c.instructions+=1;goto B69a015;
case 0x69a017:goto L69a017;
case 0x69a01a:c.instructions+=1;goto B69a01a;
case 0x69a01c:goto L69a01c;
case 0x69a01f:c.instructions+=4;goto B69a01f;
case 0x69a022:c.instructions+=3;goto B69a022;
case 0x69a024:c.instructions+=2;goto B69a024;
case 0x69a027:c.instructions+=1;goto B69a027;
case 0x69a029:goto L69a029;
case 0x69a02b:c.instructions+=2;goto B69a02b;
case 0x69a02c:c.instructions+=1;goto B69a02c;
case 0x69a02e:goto L69a02e;
case 0x69a030:goto L69a030;
case 0x69a031:c.instructions+=2;goto B69a031;
case 0x69a032:c.instructions+=1;goto B69a032;
case 0x69a035:goto L69a035;
case 0x69a037:c.instructions+=13;goto B69a037;
case 0x69a038:c.instructions+=12;goto B69a038;
case 0x69a03a:c.instructions+=11;goto B69a03a;
case 0x69a03d:c.instructions+=10;goto B69a03d;
case 0x69a040:c.instructions+=9;goto B69a040;
case 0x69a043:c.instructions+=8;goto B69a043;
case 0x69a046:c.instructions+=7;goto B69a046;
case 0x69a049:c.instructions+=6;goto B69a049;
case 0x69a04c:c.instructions+=5;goto B69a04c;
case 0x69a04f:c.instructions+=4;goto B69a04f;
case 0x69a050:c.instructions+=3;goto B69a050;
case 0x69a053:c.instructions+=2;goto B69a053;
case 0x69a055:c.instructions+=1;goto B69a055;
case 0x69a057:goto L69a057;
case 0x69a05a:c.instructions+=1;goto B69a05a;
case 0x69a05c:goto L69a05c;
case 0x69a05e:goto L69a05e;
case 0x69a060:c.instructions+=2;goto B69a060;
case 0x69a061:c.instructions+=1;goto B69a061;
case 0x69a063:goto L69a063;
case 0x69a066:c.instructions+=3;goto B69a066;
case 0x69a069:c.instructions+=2;goto B69a069;
case 0x69a06b:c.instructions+=1;goto B69a06b;
case 0x69a06d:goto L69a06d;
case 0x69a06f:goto L69a06f;
case 0x69a072:c.instructions+=3;goto B69a072;
case 0x69a075:c.instructions+=2;goto B69a075;
case 0x69a077:c.instructions+=1;goto B69a077;
case 0x69a079:goto L69a079;
case 0x69a07b:goto L69a07b;
case 0x69a07e:c.instructions+=3;goto B69a07e;
case 0x69a081:c.instructions+=2;goto B69a081;
case 0x69a083:c.instructions+=1;goto B69a083;
case 0x69a085:goto L69a085;
case 0x69a087:goto L69a087;
case 0x69a08a:c.instructions+=3;goto B69a08a;
case 0x69a08d:c.instructions+=2;goto B69a08d;
case 0x69a08f:c.instructions+=1;goto B69a08f;
case 0x69a091:goto L69a091;
case 0x69a093:goto L69a093;
case 0x69a096:c.instructions+=3;goto B69a096;
case 0x69a099:c.instructions+=2;goto B69a099;
case 0x69a09b:c.instructions+=1;goto B69a09b;
case 0x69a09d:goto L69a09d;
case 0x69a09f:goto L69a09f;
case 0x69a0a2:c.instructions+=3;goto B69a0a2;
case 0x69a0a5:c.instructions+=2;goto B69a0a5;
case 0x69a0a7:c.instructions+=1;goto B69a0a7;
case 0x69a0a9:goto L69a0a9;
case 0x69a0ab:goto L69a0ab;
case 0x69a0ae:c.instructions+=3;goto B69a0ae;
case 0x69a0b1:c.instructions+=2;goto B69a0b1;
case 0x69a0b3:c.instructions+=1;goto B69a0b3;
case 0x69a0b5:goto L69a0b5;
case 0x69a0b7:c.instructions+=3;goto B69a0b7;
case 0x69a0b9:c.instructions+=2;goto B69a0b9;
case 0x69a0bc:c.instructions+=1;goto B69a0bc;
case 0x69a0be:goto L69a0be;
case 0x69a0bf:c.instructions+=2;goto B69a0bf;
case 0x69a0c0:c.instructions+=1;goto B69a0c0;
case 0x69a0c3:goto L69a0c3;
case 0x69a0c5:c.instructions+=5;goto B69a0c5;
case 0x69a0c6:c.instructions+=4;goto B69a0c6;
case 0x69a0c8:c.instructions+=3;goto B69a0c8;
case 0x69a0cb:c.instructions+=2;goto B69a0cb;
case 0x69a0ce:c.instructions+=1;goto B69a0ce;
case 0x69a0d0:goto L69a0d0;
case 0x69a0d3:c.instructions+=1;goto B69a0d3;
case 0x69a0d5:goto L69a0d5;
case 0x69a0d7:c.instructions+=1;goto B69a0d7;
case 0x69a0d9:goto L69a0d9;
case 0x69a0da:c.instructions+=1;goto B69a0da;
case 0x69a0dd:goto L69a0dd;
case 0x69a0df:c.instructions+=13;goto B69a0df;
case 0x69a0e0:c.instructions+=12;goto B69a0e0;
case 0x69a0e2:c.instructions+=11;goto B69a0e2;
case 0x69a0e5:c.instructions+=10;goto B69a0e5;
case 0x69a0e8:c.instructions+=9;goto B69a0e8;
case 0x69a0eb:c.instructions+=8;goto B69a0eb;
case 0x69a0ee:c.instructions+=7;goto B69a0ee;
case 0x69a0f1:c.instructions+=6;goto B69a0f1;
case 0x69a0f2:c.instructions+=5;goto B69a0f2;
case 0x69a0f5:c.instructions+=4;goto B69a0f5;
case 0x69a0f8:c.instructions+=3;goto B69a0f8;
case 0x69a0fb:c.instructions+=2;goto B69a0fb;
case 0x69a0fd:c.instructions+=1;goto B69a0fd;
case 0x69a0ff:goto L69a0ff;
case 0x69a102:c.instructions+=1;goto B69a102;
case 0x69a104:goto L69a104;
case 0x69a106:goto L69a106;
case 0x69a108:c.instructions+=2;goto B69a108;
case 0x69a109:c.instructions+=1;goto B69a109;
case 0x69a10b:goto L69a10b;
case 0x69a10d:c.instructions+=1;goto B69a10d;
case 0x69a10f:goto L69a10f;
case 0x69a111:c.instructions+=1;goto B69a111;
case 0x69a113:goto L69a113;
case 0x69a114:c.instructions+=2;goto B69a114;
case 0x69a115:c.instructions+=1;goto B69a115;
case 0x69a118:goto L69a118;
case 0x69a11a:c.instructions+=21;goto B69a11a;
case 0x69a11b:c.instructions+=20;goto B69a11b;
case 0x69a11d:c.instructions+=19;goto B69a11d;
case 0x69a120:c.instructions+=18;goto B69a120;
case 0x69a123:c.instructions+=17;goto B69a123;
case 0x69a126:c.instructions+=16;goto B69a126;
case 0x69a127:c.instructions+=15;goto B69a127;
case 0x69a128:c.instructions+=14;goto B69a128;
case 0x69a12b:c.instructions+=13;goto B69a12b;
case 0x69a12e:c.instructions+=12;goto B69a12e;
case 0x69a131:c.instructions+=11;goto B69a131;
case 0x69a134:c.instructions+=10;goto B69a134;
case 0x69a137:c.instructions+=9;goto B69a137;
case 0x69a13a:c.instructions+=8;goto B69a13a;
case 0x69a13d:c.instructions+=7;goto B69a13d;
case 0x69a13e:c.instructions+=6;goto B69a13e;
case 0x69a140:c.instructions+=5;goto B69a140;
case 0x69a143:c.instructions+=4;goto B69a143;
case 0x69a146:c.instructions+=3;goto B69a146;
case 0x69a149:c.instructions+=2;goto B69a149;
case 0x69a14b:c.instructions+=1;goto B69a14b;
case 0x69a14d:goto L69a14d;
case 0x69a150:goto L69a150;
case 0x69a153:c.instructions+=4;goto B69a153;
case 0x69a156:c.instructions+=3;goto B69a156;
case 0x69a157:c.instructions+=2;goto B69a157;
case 0x69a15a:c.instructions+=1;goto B69a15a;
case 0x69a15c:goto L69a15c;
case 0x69a15f:c.instructions+=2;goto B69a15f;
case 0x69a161:c.instructions+=1;goto B69a161;
case 0x69a163:goto L69a163;
case 0x69a166:c.instructions+=5;goto B69a166;
case 0x69a169:c.instructions+=4;goto B69a169;
case 0x69a16c:c.instructions+=3;goto B69a16c;
case 0x69a16f:c.instructions+=2;goto B69a16f;
case 0x69a172:c.instructions+=1;goto B69a172;
case 0x69a174:goto L69a174;
case 0x69a177:c.instructions+=4;goto B69a177;
case 0x69a179:c.instructions+=3;goto B69a179;
case 0x69a17c:c.instructions+=2;goto B69a17c;
case 0x69a17f:c.instructions+=1;goto B69a17f;
case 0x69a181:goto L69a181;
case 0x69a183:c.instructions+=1;goto B69a183;
case 0x69a185:goto L69a185;
case 0x69a188:c.instructions+=5;goto B69a188;
case 0x69a18b:c.instructions+=4;goto B69a18b;
case 0x69a18e:c.instructions+=3;goto B69a18e;
case 0x69a18f:c.instructions+=2;goto B69a18f;
case 0x69a190:c.instructions+=1;goto B69a190;
case 0x69a192:goto L69a192;
case 0x69a195:c.instructions+=2;goto B69a195;
case 0x69a197:c.instructions+=1;goto B69a197;
case 0x69a199:goto L69a199;
case 0x69a19b:goto L69a19b;
case 0x69a19e:c.instructions+=5;goto B69a19e;
case 0x69a1a1:c.instructions+=4;goto B69a1a1;
case 0x69a1a4:c.instructions+=3;goto B69a1a4;
case 0x69a1a5:c.instructions+=2;goto B69a1a5;
case 0x69a1a8:c.instructions+=1;goto B69a1a8;
case 0x69a1aa:goto L69a1aa;
case 0x69a1ac:c.instructions+=1;goto B69a1ac;
case 0x69a1ae:goto L69a1ae;
case 0x69a1b1:goto L69a1b1;
case 0x69a1b4:c.instructions+=7;goto B69a1b4;
case 0x69a1b7:c.instructions+=6;goto B69a1b7;
case 0x69a1ba:c.instructions+=5;goto B69a1ba;
case 0x69a1bd:c.instructions+=4;goto B69a1bd;
case 0x69a1be:c.instructions+=3;goto B69a1be;
case 0x69a1c1:c.instructions+=2;goto B69a1c1;
case 0x69a1c3:c.instructions+=1;goto B69a1c3;
case 0x69a1c5:goto L69a1c5;
case 0x69a1c8:c.instructions+=9;goto B69a1c8;
case 0x69a1cb:c.instructions+=8;goto B69a1cb;
case 0x69a1ce:c.instructions+=7;goto B69a1ce;
case 0x69a1d1:c.instructions+=6;goto B69a1d1;
case 0x69a1d4:c.instructions+=5;goto B69a1d4;
case 0x69a1d7:c.instructions+=4;goto B69a1d7;
case 0x69a1da:c.instructions+=3;goto B69a1da;
case 0x69a1dd:c.instructions+=2;goto B69a1dd;
case 0x69a1df:c.instructions+=1;goto B69a1df;
case 0x69a1e1:goto L69a1e1;
case 0x69a1e4:c.instructions+=2;goto B69a1e4;
case 0x69a1e6:c.instructions+=1;goto B69a1e6;
case 0x69a1e9:goto L69a1e9;
case 0x69a1ec:c.instructions+=3;goto B69a1ec;
case 0x69a1ef:c.instructions+=2;goto B69a1ef;
case 0x69a1f2:c.instructions+=1;goto B69a1f2;
case 0x69a1f4:goto L69a1f4;
case 0x69a1f7:goto L69a1f7;
case 0x69a1fa:c.instructions+=2;goto B69a1fa;
case 0x69a1fd:c.instructions+=1;goto B69a1fd;
case 0x69a1ff:goto L69a1ff;
case 0x69a202:goto L69a202;
case 0x69a205:c.instructions+=2;goto B69a205;
case 0x69a208:c.instructions+=1;goto B69a208;
case 0x69a20a:goto L69a20a;
case 0x69a20d:c.instructions+=4;goto B69a20d;
case 0x69a210:c.instructions+=3;goto B69a210;
case 0x69a213:c.instructions+=2;goto B69a213;
case 0x69a216:c.instructions+=1;goto B69a216;
case 0x69a218:goto L69a218;
case 0x69a21b:c.instructions+=2;goto B69a21b;
case 0x69a21e:c.instructions+=1;goto B69a21e;
case 0x69a221:goto L69a221;
case 0x69a224:c.instructions+=3;goto B69a224;
case 0x69a227:c.instructions+=2;goto B69a227;
case 0x69a229:c.instructions+=1;goto B69a229;
case 0x69a22b:goto L69a22b;
case 0x69a22d:goto L69a22d;
case 0x69a230:c.instructions+=2;goto B69a230;
case 0x69a233:c.instructions+=1;goto B69a233;
case 0x69a235:goto L69a235;
case 0x69a238:goto L69a238;
case 0x69a23b:c.instructions+=2;goto B69a23b;
case 0x69a23e:c.instructions+=1;goto B69a23e;
case 0x69a240:goto L69a240;
case 0x69a243:c.instructions+=2;goto B69a243;
case 0x69a245:c.instructions+=1;goto B69a245;
case 0x69a247:goto L69a247;
case 0x69a24a:c.instructions+=1;goto B69a24a;
case 0x69a24c:goto L69a24c;
case 0x69a24f:c.instructions+=2;goto B69a24f;
case 0x69a252:c.instructions+=1;goto B69a252;
case 0x69a254:goto L69a254;
case 0x69a257:c.instructions+=1;goto B69a257;
case 0x69a259:goto L69a259;
case 0x69a25c:c.instructions+=1;goto B69a25c;
case 0x69a25e:goto L69a25e;
case 0x69a260:c.instructions+=2;goto B69a260;
case 0x69a261:c.instructions+=1;goto B69a261;
case 0x69a266:goto L69a266;
case 0x69a268:goto L69a268;
case 0x69a26b:c.instructions+=1;goto B69a26b;
case 0x69a270:goto L69a270;
case 0x69a273:c.instructions+=18;goto B69a273;
case 0x69a276:c.instructions+=17;goto B69a276;
case 0x69a278:c.instructions+=16;goto B69a278;
case 0x69a27b:c.instructions+=15;goto B69a27b;
case 0x69a27e:c.instructions+=14;goto B69a27e;
case 0x69a281:c.instructions+=13;goto B69a281;
case 0x69a284:c.instructions+=12;goto B69a284;
case 0x69a286:c.instructions+=11;goto B69a286;
case 0x69a289:c.instructions+=10;goto B69a289;
case 0x69a28c:c.instructions+=9;goto B69a28c;
case 0x69a28f:c.instructions+=8;goto B69a28f;
case 0x69a292:c.instructions+=7;goto B69a292;
case 0x69a296:c.instructions+=6;goto B69a296;
case 0x69a29a:c.instructions+=5;goto B69a29a;
case 0x69a29d:c.instructions+=4;goto B69a29d;
case 0x69a2a0:c.instructions+=3;goto B69a2a0;
case 0x69a2a3:c.instructions+=2;goto B69a2a3;
case 0x69a2a5:c.instructions+=1;goto B69a2a5;
case 0x69a2a7:goto L69a2a7;
case 0x69a2aa:c.instructions+=5;goto B69a2aa;
case 0x69a2ad:c.instructions+=4;goto B69a2ad;
case 0x69a2b0:c.instructions+=3;goto B69a2b0;
case 0x69a2b3:c.instructions+=2;goto B69a2b3;
case 0x69a2b6:c.instructions+=1;goto B69a2b6;
case 0x69a2b8:goto L69a2b8;
case 0x69a2bb:c.instructions+=2;goto B69a2bb;
case 0x69a2bd:c.instructions+=1;goto B69a2bd;
case 0x69a2bf:goto L69a2bf;
case 0x69a2c2:c.instructions+=5;goto B69a2c2;
case 0x69a2c5:c.instructions+=4;goto B69a2c5;
case 0x69a2c8:c.instructions+=3;goto B69a2c8;
case 0x69a2cb:c.instructions+=2;goto B69a2cb;
case 0x69a2ce:c.instructions+=1;goto B69a2ce;
case 0x69a2d0:goto L69a2d0;
case 0x69a2d3:c.instructions+=2;goto B69a2d3;
case 0x69a2d6:c.instructions+=1;goto B69a2d6;
case 0x69a2d8:goto L69a2d8;
case 0x69a2da:c.instructions+=1;goto B69a2da;
case 0x69a2dd:goto L69a2dd;
case 0x69a2e0:c.instructions+=6;goto B69a2e0;
case 0x69a2e3:c.instructions+=5;goto B69a2e3;
case 0x69a2e6:c.instructions+=4;goto B69a2e6;
case 0x69a2e9:c.instructions+=3;goto B69a2e9;
case 0x69a2ea:c.instructions+=2;goto B69a2ea;
case 0x69a2eb:c.instructions+=1;goto B69a2eb;
case 0x69a2ed:goto L69a2ed;
case 0x69a2f0:c.instructions+=2;goto B69a2f0;
case 0x69a2f2:c.instructions+=1;goto B69a2f2;
case 0x69a2f4:goto L69a2f4;
case 0x69a2f6:c.instructions+=1;goto B69a2f6;
case 0x69a2f8:goto L69a2f8;
case 0x69a2f9:c.instructions+=5;goto B69a2f9;
case 0x69a2fc:c.instructions+=4;goto B69a2fc;
case 0x69a2ff:c.instructions+=3;goto B69a2ff;
case 0x69a302:c.instructions+=2;goto B69a302;
case 0x69a305:c.instructions+=1;goto B69a305;
case 0x69a307:goto L69a307;
case 0x69a309:goto L69a309;
case 0x69a30c:goto L69a30c;
case 0x69a30e:c.instructions+=1;goto B69a30e;
case 0x69a310:goto L69a310;
case 0x69a313:goto L69a313;
case 0x69a316:c.instructions+=7;goto B69a316;
case 0x69a319:c.instructions+=6;goto B69a319;
case 0x69a31c:c.instructions+=5;goto B69a31c;
case 0x69a31f:c.instructions+=4;goto B69a31f;
case 0x69a322:c.instructions+=3;goto B69a322;
case 0x69a325:c.instructions+=2;goto B69a325;
case 0x69a327:c.instructions+=1;goto B69a327;
case 0x69a329:goto L69a329;
case 0x69a32b:c.instructions+=1;goto B69a32b;
case 0x69a32d:goto L69a32d;
case 0x69a32f:c.instructions+=1;goto B69a32f;
case 0x69a331:goto L69a331;
case 0x69a336:goto L69a336;
case 0x69a338:c.instructions+=1;goto B69a338;
case 0x69a33e:goto L69a33e;
case 0x69a341:c.instructions+=2;goto B69a341;
case 0x69a344:c.instructions+=1;goto B69a344;
case 0x69a34a:goto L69a34a;
case 0x69a34c:c.instructions+=1;goto B69a34c;
case 0x69a34e:goto L69a34e;
case 0x69a34f:c.instructions+=4;goto B69a34f;
case 0x69a350:c.instructions+=3;goto B69a350;
case 0x69a351:c.instructions+=2;goto B69a351;
case 0x69a352:c.instructions+=1;goto B69a352;
case 0x69a355:goto L69a355;
case 0x69a35b:c.instructions+=10;goto B69a35b;
case 0x69a35e:c.instructions+=9;goto B69a35e;
case 0x69a361:c.instructions+=8;goto B69a361;
case 0x69a364:c.instructions+=7;goto B69a364;
case 0x69a367:c.instructions+=6;goto B69a367;
case 0x69a36a:c.instructions+=5;goto B69a36a;
case 0x69a36d:c.instructions+=4;goto B69a36d;
case 0x69a36e:c.instructions+=3;goto B69a36e;
case 0x69a371:c.instructions+=2;goto B69a371;
case 0x69a373:c.instructions+=1;goto B69a373;
case 0x69a375:goto L69a375;
case 0x69a378:c.instructions+=2;goto B69a378;
case 0x69a379:c.instructions+=1;goto B69a379;
case 0x69a37a:goto L69a37a;
case 0x69a37c:goto L69a37c;
case 0x69a37e:c.instructions+=3;goto B69a37e;
case 0x69a37f:c.instructions+=2;goto B69a37f;
case 0x69a380:c.instructions+=1;goto B69a380;
case 0x69a381:goto L69a381;
case 0x69a384:c.instructions+=3;goto B69a384;
case 0x69a387:c.instructions+=2;goto B69a387;
case 0x69a389:c.instructions+=1;goto B69a389;
case 0x69a38b:goto L69a38b;
case 0x69a38d:c.instructions+=5;goto B69a38d;
case 0x69a38f:c.instructions+=4;goto B69a38f;
case 0x69a392:c.instructions+=3;goto B69a392;
case 0x69a393:c.instructions+=2;goto B69a393;
case 0x69a395:c.instructions+=1;goto B69a395;
case 0x69a396:goto L69a396;
case 0x69a398:c.instructions+=15;goto B69a398;
case 0x69a399:c.instructions+=14;goto B69a399;
case 0x69a39b:c.instructions+=13;goto B69a39b;
case 0x69a39e:c.instructions+=12;goto B69a39e;
case 0x69a3a4:c.instructions+=11;goto B69a3a4;
case 0x69a3a7:c.instructions+=10;goto B69a3a7;
case 0x69a3aa:c.instructions+=9;goto B69a3aa;
case 0x69a3ad:c.instructions+=8;goto B69a3ad;
case 0x69a3b0:c.instructions+=7;goto B69a3b0;
case 0x69a3b3:c.instructions+=6;goto B69a3b3;
case 0x69a3b5:c.instructions+=5;goto B69a3b5;
case 0x69a3b8:c.instructions+=4;goto B69a3b8;
case 0x69a3bb:c.instructions+=3;goto B69a3bb;
case 0x69a3bd:c.instructions+=2;goto B69a3bd;
case 0x69a3bf:c.instructions+=1;goto B69a3bf;
case 0x69a3c1:goto L69a3c1;
case 0x69a3c4:c.instructions+=1;goto B69a3c4;
case 0x69a3c6:goto L69a3c6;
case 0x69a3c8:c.instructions+=1;goto B69a3c8;
case 0x69a3ca:goto L69a3ca;
case 0x69a3cb:c.instructions+=1;goto B69a3cb;
case 0x69a3ce:goto L69a3ce;
case 0x69a3d0:c.instructions+=6;goto B69a3d0;
case 0x69a3d1:c.instructions+=5;goto B69a3d1;
case 0x69a3d3:c.instructions+=4;goto B69a3d3;
case 0x69a3d6:c.instructions+=3;goto B69a3d6;
case 0x69a3d9:c.instructions+=2;goto B69a3d9;
case 0x69a3dc:c.instructions+=1;goto B69a3dc;
case 0x69a3e1:goto L69a3e1;
case 0x69a3e3:c.instructions+=1;goto B69a3e3;
case 0x69a3e5:goto L69a3e5;
case 0x69a3e6:c.instructions+=1;goto B69a3e6;
case 0x69a3eb:goto L69a3eb;
case 0x69a3ec:c.instructions+=1;goto B69a3ec;
case 0x69a3ef:goto L69a3ef;
case 0x69a3f1:c.instructions+=12;goto B69a3f1;
case 0x69a3f2:c.instructions+=11;goto B69a3f2;
case 0x69a3f4:c.instructions+=10;goto B69a3f4;
case 0x69a3f7:c.instructions+=9;goto B69a3f7;
case 0x69a3fa:c.instructions+=8;goto B69a3fa;
case 0x69a3fd:c.instructions+=7;goto B69a3fd;
case 0x69a400:c.instructions+=6;goto B69a400;
case 0x69a403:c.instructions+=5;goto B69a403;
case 0x69a406:c.instructions+=4;goto B69a406;
case 0x69a409:c.instructions+=3;goto B69a409;
case 0x69a40c:c.instructions+=2;goto B69a40c;
case 0x69a40e:c.instructions+=1;goto B69a40e;
case 0x69a410:goto L69a410;
case 0x69a413:c.instructions+=1;goto B69a413;
case 0x69a415:goto L69a415;
case 0x69a417:c.instructions+=1;goto B69a417;
case 0x69a419:goto L69a419;
case 0x69a41a:c.instructions+=1;goto B69a41a;
case 0x69a41d:goto L69a41d;
case 0x69a41f:c.instructions+=7;goto B69a41f;
case 0x69a420:c.instructions+=6;goto B69a420;
case 0x69a422:c.instructions+=5;goto B69a422;
case 0x69a425:c.instructions+=4;goto B69a425;
case 0x69a426:c.instructions+=3;goto B69a426;
case 0x69a429:c.instructions+=2;goto B69a429;
case 0x69a42c:c.instructions+=1;goto B69a42c;
case 0x69a432:goto L69a432;
case 0x69a434:c.instructions+=4;goto B69a434;
case 0x69a435:c.instructions+=3;goto B69a435;
case 0x69a438:c.instructions+=2;goto B69a438;
case 0x69a439:c.instructions+=1;goto B69a439;
case 0x69a43f:goto L69a43f;
case 0x69a443:c.instructions+=1;goto B69a443;
case 0x69a446:goto L69a446;
case 0x69a449:c.instructions+=8;goto B69a449;
case 0x69a44a:c.instructions+=7;goto B69a44a;
case 0x69a44d:c.instructions+=6;goto B69a44d;
case 0x69a44e:c.instructions+=5;goto B69a44e;
case 0x69a44f:c.instructions+=4;goto B69a44f;
case 0x69a452:c.instructions+=3;goto B69a452;
case 0x69a455:c.instructions+=2;goto B69a455;
case 0x69a458:c.instructions+=1;goto B69a458;
case 0x69a45a:goto L69a45a;
case 0x69a45d:c.instructions+=5;goto B69a45d;
case 0x69a460:c.instructions+=4;goto B69a460;
case 0x69a463:c.instructions+=3;goto B69a463;
case 0x69a466:c.instructions+=2;goto B69a466;
case 0x69a469:c.instructions+=1;goto B69a469;
case 0x69a46b:goto L69a46b;
case 0x69a46e:c.instructions+=5;goto B69a46e;
case 0x69a472:c.instructions+=4;goto B69a472;
case 0x69a473:c.instructions+=3;goto B69a473;
case 0x69a474:c.instructions+=2;goto B69a474;
case 0x69a477:c.instructions+=1;goto B69a477;
case 0x69a47a:goto L69a47a;
case 0x69a47c:c.instructions+=1;goto B69a47c;
case 0x69a47e:goto L69a47e;
case 0x69a481:c.instructions+=2;goto B69a481;
case 0x69a484:c.instructions+=1;goto B69a484;
case 0x69a487:goto L69a487;
case 0x69a48a:c.instructions+=3;goto B69a48a;
case 0x69a48d:c.instructions+=2;goto B69a48d;
case 0x69a490:c.instructions+=1;goto B69a490;
case 0x69a493:goto L69a493;
case 0x69a495:c.instructions+=1;goto B69a495;
case 0x69a497:goto L69a497;
case 0x69a49a:c.instructions+=4;goto B69a49a;
case 0x69a49d:c.instructions+=3;goto B69a49d;
case 0x69a4a0:c.instructions+=2;goto B69a4a0;
case 0x69a4a3:c.instructions+=1;goto B69a4a3;
case 0x69a4a7:goto L69a4a7;
case 0x69a4aa:c.instructions+=1;goto B69a4aa;
case 0x69a4ac:goto L69a4ac;
case 0x69a4ae:c.instructions+=4;goto B69a4ae;
case 0x69a4b1:c.instructions+=3;goto B69a4b1;
case 0x69a4b4:c.instructions+=2;goto B69a4b4;
case 0x69a4b7:c.instructions+=1;goto B69a4b7;
case 0x69a4b9:goto L69a4b9;
case 0x69a4bb:goto L69a4bb;
case 0x69a4be:c.instructions+=10;goto B69a4be;
case 0x69a4c2:c.instructions+=9;goto B69a4c2;
case 0x69a4c5:c.instructions+=8;goto B69a4c5;
case 0x69a4c7:c.instructions+=7;goto B69a4c7;
case 0x69a4c9:c.instructions+=6;goto B69a4c9;
case 0x69a4cc:c.instructions+=5;goto B69a4cc;
case 0x69a4ce:c.instructions+=4;goto B69a4ce;
case 0x69a4cf:c.instructions+=3;goto B69a4cf;
case 0x69a4d1:c.instructions+=2;goto B69a4d1;
case 0x69a4d3:c.instructions+=1;goto B69a4d3;
case 0x69a4d5:goto L69a4d5;
case 0x69a4d8:c.instructions+=4;goto B69a4d8;
case 0x69a4db:c.instructions+=3;goto B69a4db;
case 0x69a4de:c.instructions+=2;goto B69a4de;
case 0x69a4e1:c.instructions+=1;goto B69a4e1;
case 0x69a4e3:goto L69a4e3;
case 0x69a4e6:c.instructions+=5;goto B69a4e6;
case 0x69a4ea:c.instructions+=4;goto B69a4ea;
case 0x69a4eb:c.instructions+=3;goto B69a4eb;
case 0x69a4ec:c.instructions+=2;goto B69a4ec;
case 0x69a4ef:c.instructions+=1;goto B69a4ef;
case 0x69a4f2:goto L69a4f2;
case 0x69a4f4:c.instructions+=1;goto B69a4f4;
case 0x69a4f6:goto L69a4f6;
case 0x69a4f9:c.instructions+=1;goto B69a4f9;
case 0x69a4fc:goto L69a4fc;
case 0x69a4ff:c.instructions+=3;goto B69a4ff;
case 0x69a502:c.instructions+=2;goto B69a502;
case 0x69a503:c.instructions+=1;goto B69a503;
case 0x69a506:goto L69a506;
case 0x69a508:c.instructions+=1;goto B69a508;
case 0x69a50a:goto L69a50a;
case 0x69a50d:c.instructions+=6;goto B69a50d;
case 0x69a510:c.instructions+=5;goto B69a510;
case 0x69a513:c.instructions+=4;goto B69a513;
case 0x69a517:c.instructions+=3;goto B69a517;
case 0x69a51a:c.instructions+=2;goto B69a51a;
case 0x69a51d:c.instructions+=1;goto B69a51d;
case 0x69a51f:goto L69a51f;
case 0x69a522:c.instructions+=2;goto B69a522;
case 0x69a525:c.instructions+=1;goto B69a525;
case 0x69a528:goto L69a528;
case 0x69a52b:c.instructions+=1;goto B69a52b;
case 0x69a52d:goto L69a52d;
case 0x69a52e:c.instructions+=1;goto B69a52e;
case 0x69a52f:goto L69a52f;
case 0x69a530:c.instructions+=2;goto B69a530;
case 0x69a531:c.instructions+=1;goto B69a531;
case 0x69a534:goto L69a534;
case 0x69a536:c.instructions+=3;goto B69a536;
case 0x69a537:c.instructions+=2;goto B69a537;
case 0x69a539:c.instructions+=1;goto B69a539;
case 0x69a53e:goto L69a53e;
case 0x69a540:c.instructions+=30;goto B69a540;
case 0x69a546:c.instructions+=29;goto B69a546;
case 0x69a54c:c.instructions+=28;goto B69a54c;
case 0x69a552:c.instructions+=27;goto B69a552;
case 0x69a558:c.instructions+=26;goto B69a558;
case 0x69a55e:c.instructions+=25;goto B69a55e;
case 0x69a564:c.instructions+=24;goto B69a564;
case 0x69a56a:c.instructions+=23;goto B69a56a;
case 0x69a570:c.instructions+=22;goto B69a570;
case 0x69a573:c.instructions+=21;goto B69a573;
case 0x69a576:c.instructions+=20;goto B69a576;
case 0x69a579:c.instructions+=19;goto B69a579;
case 0x69a57c:c.instructions+=18;goto B69a57c;
case 0x69a582:c.instructions+=17;goto B69a582;
case 0x69a588:c.instructions+=16;goto B69a588;
case 0x69a58e:c.instructions+=15;goto B69a58e;
case 0x69a594:c.instructions+=14;goto B69a594;
case 0x69a59a:c.instructions+=13;goto B69a59a;
case 0x69a5a0:c.instructions+=12;goto B69a5a0;
case 0x69a5a6:c.instructions+=11;goto B69a5a6;
case 0x69a5ac:c.instructions+=10;goto B69a5ac;
case 0x69a5b2:c.instructions+=9;goto B69a5b2;
case 0x69a5b8:c.instructions+=8;goto B69a5b8;
case 0x69a5be:c.instructions+=7;goto B69a5be;
case 0x69a5c4:c.instructions+=6;goto B69a5c4;
case 0x69a5ca:c.instructions+=5;goto B69a5ca;
case 0x69a5d0:c.instructions+=4;goto B69a5d0;
case 0x69a5d6:c.instructions+=3;goto B69a5d6;
case 0x69a5d8:c.instructions+=2;goto B69a5d8;
case 0x69a5d9:c.instructions+=1;goto B69a5d9;
case 0x69a5da:goto L69a5da;
case 0x69a5dc:c.instructions+=5;goto B69a5dc;
case 0x69a5dd:c.instructions+=4;goto B69a5dd;
case 0x69a5df:c.instructions+=3;goto B69a5df;
case 0x69a5e5:c.instructions+=2;goto B69a5e5;
case 0x69a5eb:c.instructions+=1;goto B69a5eb;
case 0x69a5f0:goto L69a5f0;
case 0x69a5f1:c.instructions+=3;goto B69a5f1;
case 0x69a5f7:c.instructions+=2;goto B69a5f7;
case 0x69a5f9:c.instructions+=1;goto B69a5f9;
case 0x69a5fb:goto L69a5fb;
case 0x69a5fd:c.instructions+=2;goto B69a5fd;
case 0x69a5ff:c.instructions+=1;goto B69a5ff;
case 0x69a601:goto L69a601;
case 0x69a603:c.instructions+=2;goto B69a603;
case 0x69a604:c.instructions+=1;goto B69a604;
case 0x69a609:goto L69a609;
case 0x69a60b:c.instructions+=9;goto B69a60b;
case 0x69a60c:c.instructions+=8;goto B69a60c;
case 0x69a60e:c.instructions+=7;goto B69a60e;
case 0x69a60f:c.instructions+=6;goto B69a60f;
case 0x69a610:c.instructions+=5;goto B69a610;
case 0x69a612:c.instructions+=4;goto B69a612;
case 0x69a615:c.instructions+=3;goto B69a615;
case 0x69a616:c.instructions+=2;goto B69a616;
case 0x69a619:c.instructions+=1;goto B69a619;
case 0x69a61b:goto L69a61b;
case 0x69a61e:c.instructions+=1;goto B69a61e;
case 0x69a621:goto L69a621;
case 0x69a623:c.instructions+=3;goto B69a623;
case 0x69a624:c.instructions+=2;goto B69a624;
case 0x69a626:c.instructions+=1;goto B69a626;
case 0x69a628:goto L69a628;
case 0x69a62a:c.instructions+=3;goto B69a62a;
case 0x69a62d:c.instructions+=2;goto B69a62d;
case 0x69a62e:c.instructions+=1;goto B69a62e;
case 0x69a633:goto L69a633;
case 0x69a635:c.instructions+=3;goto B69a635;
case 0x69a637:c.instructions+=2;goto B69a637;
case 0x69a638:c.instructions+=1;goto B69a638;
case 0x69a63a:goto L69a63a;
case 0x69a63f:c.instructions+=1;goto B69a63f;
case 0x69a641:goto L69a641;
case 0x69a643:c.instructions+=5;goto B69a643;
case 0x69a646:c.instructions+=4;goto B69a646;
case 0x69a648:c.instructions+=3;goto B69a648;
case 0x69a649:c.instructions+=2;goto B69a649;
case 0x69a64c:c.instructions+=1;goto B69a64c;
case 0x69a64e:goto L69a64e;
case 0x69a650:goto L69a650;
case 0x69a652:c.instructions+=1;goto B69a652;
case 0x69a655:goto L69a655;
case 0x69a657:goto L69a657;
case 0x69a658:goto L69a658;
case 0x69a65b:c.instructions+=3;goto B69a65b;
case 0x69a661:c.instructions+=2;goto B69a661;
case 0x69a663:c.instructions+=1;goto B69a663;
case 0x69a668:goto L69a668;
case 0x69a669:c.instructions+=2;goto B69a669;
case 0x69a66b:c.instructions+=1;goto B69a66b;
case 0x69a66d:goto L69a66d;
case 0x69a66e:c.instructions+=3;goto B69a66e;
case 0x69a66f:c.instructions+=2;goto B69a66f;
case 0x69a670:c.instructions+=1;goto B69a670;
case 0x69a673:goto L69a673;
case 0x69a677:c.instructions+=9;goto B69a677;
case 0x69a67b:c.instructions+=8;goto B69a67b;
case 0x69a67f:c.instructions+=7;goto B69a67f;
case 0x69a681:c.instructions+=6;goto B69a681;
case 0x69a682:c.instructions+=5;goto B69a682;
case 0x69a685:c.instructions+=4;goto B69a685;
case 0x69a688:c.instructions+=3;goto B69a688;
case 0x69a68f:c.instructions+=2;goto B69a68f;
case 0x69a691:c.instructions+=1;goto B69a691;
case 0x69a692:goto L69a692;
case 0x69a694:c.instructions+=2;goto B69a694;
case 0x69a695:c.instructions+=1;goto B69a695;
case 0x69a696:goto L69a696;
case 0x69a698:c.instructions+=5;goto B69a698;
case 0x69a699:c.instructions+=4;goto B69a699;
case 0x69a69b:c.instructions+=3;goto B69a69b;
case 0x69a69f:c.instructions+=2;goto B69a69f;
case 0x69a6a0:c.instructions+=1;goto B69a6a0;
case 0x69a6a2:goto L69a6a2;
case 0x69a6a5:c.instructions+=10;goto B69a6a5;
case 0x69a6a8:c.instructions+=9;goto B69a6a8;
case 0x69a6ab:c.instructions+=8;goto B69a6ab;
case 0x69a6ac:c.instructions+=7;goto B69a6ac;
case 0x69a6af:c.instructions+=6;goto B69a6af;
case 0x69a6b2:c.instructions+=5;goto B69a6b2;
case 0x69a6b4:c.instructions+=4;goto B69a6b4;
case 0x69a6b8:c.instructions+=3;goto B69a6b8;
case 0x69a6bb:c.instructions+=2;goto B69a6bb;
case 0x69a6bc:c.instructions+=1;goto B69a6bc;
case 0x69a6be:goto L69a6be;
case 0x69a6c0:c.instructions+=1;goto B69a6c0;
case 0x69a6c2:goto L69a6c2;
case 0x69a6c4:c.instructions+=1;goto B69a6c4;
case 0x69a6c6:goto L69a6c6;
case 0x69a6c8:c.instructions+=1;goto B69a6c8;
case 0x69a6ca:goto L69a6ca;
case 0x69a6cc:goto L69a6cc;
case 0x69a6cf:c.instructions+=5;goto B69a6cf;
case 0x69a6d2:c.instructions+=4;goto B69a6d2;
case 0x69a6d6:c.instructions+=3;goto B69a6d6;
case 0x69a6d9:c.instructions+=2;goto B69a6d9;
case 0x69a6dc:c.instructions+=1;goto B69a6dc;
case 0x69a6df:goto L69a6df;
case 0x69a6e2:c.instructions+=2;goto B69a6e2;
case 0x69a6e3:c.instructions+=1;goto B69a6e3;
case 0x69a6e5:goto L69a6e5;
case 0x69a6e7:goto L69a6e7;
case 0x69a6ea:c.instructions+=3;goto B69a6ea;
case 0x69a6ed:c.instructions+=2;goto B69a6ed;
case 0x69a6ef:c.instructions+=1;goto B69a6ef;
case 0x69a6f1:goto L69a6f1;
case 0x69a6f2:c.instructions+=1;goto B69a6f2;
case 0x69a6f5:goto L69a6f5;
case 0x69a6fa:c.instructions+=1;goto B69a6fa;
case 0x69a6fb:goto L69a6fb;
case 0x69a6fd:c.instructions+=7;goto B69a6fd;
case 0x69a6fe:c.instructions+=6;goto B69a6fe;
case 0x69a700:c.instructions+=5;goto B69a700;
case 0x69a704:c.instructions+=4;goto B69a704;
case 0x69a705:c.instructions+=3;goto B69a705;
case 0x69a707:c.instructions+=2;goto B69a707;
case 0x69a70d:c.instructions+=1;goto B69a70d;
case 0x69a70f:goto L69a70f;
case 0x69a710:c.instructions+=1;goto B69a710;
case 0x69a715:goto L69a715;
case 0x69a716:goto L69a716;
case 0x69a718:c.instructions+=3;goto B69a718;
case 0x69a719:c.instructions+=2;goto B69a719;
case 0x69a71a:c.instructions+=1;goto B69a71a;
case 0x69a71d:goto L69a71d;
case 0x69a71f:c.instructions+=9;goto B69a71f;
case 0x69a720:c.instructions+=8;goto B69a720;
case 0x69a722:c.instructions+=7;goto B69a722;
case 0x69a725:c.instructions+=6;goto B69a725;
case 0x69a728:c.instructions+=5;goto B69a728;
case 0x69a72b:c.instructions+=4;goto B69a72b;
case 0x69a72e:c.instructions+=3;goto B69a72e;
case 0x69a730:c.instructions+=2;goto B69a730;
case 0x69a733:c.instructions+=1;goto B69a733;
case 0x69a735:goto L69a735;
case 0x69a738:c.instructions+=4;goto B69a738;
case 0x69a73b:c.instructions+=3;goto B69a73b;
case 0x69a73c:c.instructions+=2;goto B69a73c;
case 0x69a73f:c.instructions+=1;goto B69a73f;
case 0x69a741:goto L69a741;
case 0x69a744:c.instructions+=2;goto B69a744;
case 0x69a746:c.instructions+=1;goto B69a746;
case 0x69a748:goto L69a748;
case 0x69a74a:goto L69a74a;
case 0x69a74b:c.instructions+=1;goto B69a74b;
case 0x69a74e:goto L69a74e;
case 0x69a750:c.instructions+=8;goto B69a750;
case 0x69a751:c.instructions+=7;goto B69a751;
case 0x69a752:c.instructions+=6;goto B69a752;
case 0x69a753:c.instructions+=5;goto B69a753;
case 0x69a755:c.instructions+=4;goto B69a755;
case 0x69a757:c.instructions+=3;goto B69a757;
case 0x69a759:c.instructions+=2;goto B69a759;
case 0x69a75c:c.instructions+=1;goto B69a75c;
case 0x69a75e:goto L69a75e;
case 0x69a761:c.instructions+=3;goto B69a761;
case 0x69a764:c.instructions+=2;goto B69a764;
case 0x69a76a:c.instructions+=1;goto B69a76a;
case 0x69a76c:goto L69a76c;
case 0x69a76e:c.instructions+=1;goto B69a76e;
case 0x69a773:goto L69a773;
case 0x69a775:goto L69a775;
case 0x69a778:c.instructions+=1;goto B69a778;
case 0x69a779:goto L69a779;
case 0x69a77a:c.instructions+=2;goto B69a77a;
case 0x69a77d:c.instructions+=1;goto B69a77d;
case 0x69a77f:goto L69a77f;
case 0x69a782:c.instructions+=3;goto B69a782;
case 0x69a784:c.instructions+=2;goto B69a784;
case 0x69a786:c.instructions+=1;goto B69a786;
case 0x69a788:goto L69a788;
case 0x69a789:c.instructions+=1;goto B69a789;
case 0x69a78b:goto L69a78b;
case 0x69a78e:c.instructions+=5;goto B69a78e;
case 0x69a790:c.instructions+=4;goto B69a790;
case 0x69a793:c.instructions+=3;goto B69a793;
case 0x69a796:c.instructions+=2;goto B69a796;
case 0x69a798:c.instructions+=1;goto B69a798;
case 0x69a79b:goto L69a79b;
case 0x69a79d:goto L69a79d;
case 0x69a79f:c.instructions+=1;goto B69a79f;
case 0x69a7a2:goto L69a7a2;
case 0x69a7a4:goto L69a7a4;
case 0x69a7a7:c.instructions+=1;goto B69a7a7;
case 0x69a7a9:goto L69a7a9;
case 0x69a7aa:c.instructions+=3;goto B69a7aa;
case 0x69a7ab:c.instructions+=2;goto B69a7ab;
case 0x69a7ac:c.instructions+=1;goto B69a7ac;
case 0x69a7ad:goto L69a7ad;
case 0x69a7af:c.instructions+=5;goto B69a7af;
case 0x69a7b0:c.instructions+=4;goto B69a7b0;
case 0x69a7b2:c.instructions+=3;goto B69a7b2;
case 0x69a7b5:c.instructions+=2;goto B69a7b5;
case 0x69a7b8:c.instructions+=1;goto B69a7b8;
case 0x69a7ba:goto L69a7ba;
case 0x69a7bd:goto L69a7bd;
case 0x69a7c0:c.instructions+=2;goto B69a7c0;
case 0x69a7c3:c.instructions+=1;goto B69a7c3;
case 0x69a7c5:goto L69a7c5;
case 0x69a7c8:c.instructions+=2;goto B69a7c8;
case 0x69a7cb:c.instructions+=1;goto B69a7cb;
case 0x69a7cd:goto L69a7cd;
case 0x69a7d0:c.instructions+=2;goto B69a7d0;
case 0x69a7d3:c.instructions+=1;goto B69a7d3;
case 0x69a7d5:goto L69a7d5;
case 0x69a7d8:c.instructions+=2;goto B69a7d8;
case 0x69a7db:c.instructions+=1;goto B69a7db;
case 0x69a7dd:goto L69a7dd;
case 0x69a7df:c.instructions+=1;goto B69a7df;
case 0x69a7e1:goto L69a7e1;
case 0x69a7e3:c.instructions+=1;goto B69a7e3;
case 0x69a7e4:goto L69a7e4;
case 0x69a7e5:c.instructions+=1;goto B69a7e5;
case 0x69a7e8:goto L69a7e8;
case 0x69a7ea:c.instructions+=10;goto B69a7ea;
case 0x69a7eb:c.instructions+=9;goto B69a7eb;
case 0x69a7ed:c.instructions+=8;goto B69a7ed;
case 0x69a7f0:c.instructions+=7;goto B69a7f0;
case 0x69a7f1:c.instructions+=6;goto B69a7f1;
case 0x69a7f2:c.instructions+=5;goto B69a7f2;
case 0x69a7f3:c.instructions+=4;goto B69a7f3;
case 0x69a7f5:c.instructions+=3;goto B69a7f5;
case 0x69a7f7:c.instructions+=2;goto B69a7f7;
case 0x69a7fa:c.instructions+=1;goto B69a7fa;
case 0x69a7fc:goto L69a7fc;
case 0x69a7ff:c.instructions+=7;goto B69a7ff;
case 0x69a802:c.instructions+=6;goto B69a802;
case 0x69a805:c.instructions+=5;goto B69a805;
case 0x69a808:c.instructions+=4;goto B69a808;
case 0x69a80b:c.instructions+=3;goto B69a80b;
case 0x69a80e:c.instructions+=2;goto B69a80e;
case 0x69a811:c.instructions+=1;goto B69a811;
case 0x69a813:goto L69a813;
case 0x69a816:c.instructions+=1;goto B69a816;
case 0x69a818:goto L69a818;
case 0x69a81b:c.instructions+=1;goto B69a81b;
case 0x69a81e:goto L69a81e;
case 0x69a822:c.instructions+=1;goto B69a822;
case 0x69a824:goto L69a824;
case 0x69a82a:c.instructions+=1;goto B69a82a;
case 0x69a82d:goto L69a82d;
case 0x69a82e:c.instructions+=2;goto B69a82e;
case 0x69a831:c.instructions+=1;goto B69a831;
case 0x69a833:goto L69a833;
case 0x69a836:c.instructions+=2;goto B69a836;
case 0x69a839:c.instructions+=1;goto B69a839;
case 0x69a83f:goto L69a83f;
case 0x69a841:goto L69a841;
case 0x69a843:goto L69a843;
case 0x69a846:c.instructions+=5;goto B69a846;
case 0x69a849:c.instructions+=4;goto B69a849;
case 0x69a84c:c.instructions+=3;goto B69a84c;
case 0x69a84e:c.instructions+=2;goto B69a84e;
case 0x69a854:c.instructions+=1;goto B69a854;
case 0x69a85a:goto L69a85a;
case 0x69a85d:c.instructions+=2;goto B69a85d;
case 0x69a860:c.instructions+=1;goto B69a860;
case 0x69a862:goto L69a862;
case 0x69a865:c.instructions+=3;goto B69a865;
case 0x69a868:c.instructions+=2;goto B69a868;
case 0x69a86b:c.instructions+=1;goto B69a86b;
case 0x69a86e:goto L69a86e;
case 0x69a870:c.instructions+=3;goto B69a870;
case 0x69a873:c.instructions+=2;goto B69a873;
case 0x69a876:c.instructions+=1;goto B69a876;
case 0x69a878:goto L69a878;
case 0x69a87b:goto L69a87b;
case 0x69a87e:c.instructions+=2;goto B69a87e;
case 0x69a881:c.instructions+=1;goto B69a881;
case 0x69a883:goto L69a883;
case 0x69a886:c.instructions+=2;goto B69a886;
case 0x69a889:c.instructions+=1;goto B69a889;
case 0x69a88b:goto L69a88b;
case 0x69a88e:c.instructions+=1;goto B69a88e;
case 0x69a893:goto L69a893;
case 0x69a899:goto L69a899;
case 0x69a89b:c.instructions+=3;goto B69a89b;
case 0x69a8a0:c.instructions+=2;goto B69a8a0;
case 0x69a8a5:c.instructions+=1;goto B69a8a5;
case 0x69a8ab:goto L69a8ab;
case 0x69a8b0:c.instructions+=1;goto B69a8b0;
case 0x69a8b6:goto L69a8b6;
case 0x69a8b9:c.instructions+=8;goto B69a8b9;
case 0x69a8bf:c.instructions+=7;goto B69a8bf;
case 0x69a8c1:c.instructions+=6;goto B69a8c1;
case 0x69a8c3:c.instructions+=5;goto B69a8c3;
case 0x69a8c5:c.instructions+=4;goto B69a8c5;
case 0x69a8c7:c.instructions+=3;goto B69a8c7;
case 0x69a8ca:c.instructions+=2;goto B69a8ca;
case 0x69a8cd:c.instructions+=1;goto B69a8cd;
case 0x69a8cf:goto L69a8cf;
case 0x69a8d2:c.instructions+=6;goto B69a8d2;
case 0x69a8d5:c.instructions+=5;goto B69a8d5;
case 0x69a8d8:c.instructions+=4;goto B69a8d8;
case 0x69a8db:c.instructions+=3;goto B69a8db;
case 0x69a8de:c.instructions+=2;goto B69a8de;
case 0x69a8e1:c.instructions+=1;goto B69a8e1;
case 0x69a8e3:goto L69a8e3;
case 0x69a8e7:c.instructions+=3;goto B69a8e7;
case 0x69a8eb:c.instructions+=2;goto B69a8eb;
case 0x69a8ee:c.instructions+=1;goto B69a8ee;
case 0x69a8f0:goto L69a8f0;
case 0x69a8f3:c.instructions+=11;goto B69a8f3;
case 0x69a8f7:c.instructions+=10;goto B69a8f7;
case 0x69a8fa:c.instructions+=9;goto B69a8fa;
case 0x69a8fd:c.instructions+=8;goto B69a8fd;
case 0x69a8ff:c.instructions+=7;goto B69a8ff;
case 0x69a902:c.instructions+=6;goto B69a902;
case 0x69a904:c.instructions+=5;goto B69a904;
case 0x69a907:c.instructions+=4;goto B69a907;
case 0x69a90a:c.instructions+=3;goto B69a90a;
case 0x69a90d:c.instructions+=2;goto B69a90d;
case 0x69a910:c.instructions+=1;goto B69a910;
case 0x69a912:goto L69a912;
case 0x69a913:goto L69a913;
case 0x69a916:c.instructions+=3;goto B69a916;
case 0x69a919:c.instructions+=2;goto B69a919;
case 0x69a91c:c.instructions+=1;goto B69a91c;
case 0x69a91e:goto L69a91e;
case 0x69a920:c.instructions+=4;goto B69a920;
case 0x69a921:c.instructions+=3;goto B69a921;
case 0x69a924:c.instructions+=2;goto B69a924;
case 0x69a927:c.instructions+=1;goto B69a927;
case 0x69a929:goto L69a929;
case 0x69a92b:c.instructions+=2;goto B69a92b;
case 0x69a92e:c.instructions+=1;goto B69a92e;
case 0x69a931:goto L69a931;
case 0x69a935:c.instructions+=2;goto B69a935;
case 0x69a937:c.instructions+=1;goto B69a937;
case 0x69a939:goto L69a939;
case 0x69a93c:goto L69a93c;
case 0x69a93f:c.instructions+=9;goto B69a93f;
case 0x69a943:c.instructions+=8;goto B69a943;
case 0x69a946:c.instructions+=7;goto B69a946;
case 0x69a949:c.instructions+=6;goto B69a949;
case 0x69a94c:c.instructions+=5;goto B69a94c;
case 0x69a94f:c.instructions+=4;goto B69a94f;
case 0x69a952:c.instructions+=3;goto B69a952;
case 0x69a955:c.instructions+=2;goto B69a955;
case 0x69a958:c.instructions+=1;goto B69a958;
case 0x69a95a:goto L69a95a;
case 0x69a95d:c.instructions+=6;goto B69a95d;
case 0x69a95f:c.instructions+=5;goto B69a95f;
case 0x69a962:c.instructions+=4;goto B69a962;
case 0x69a965:c.instructions+=3;goto B69a965;
case 0x69a968:c.instructions+=2;goto B69a968;
case 0x69a96b:c.instructions+=1;goto B69a96b;
case 0x69a96d:goto L69a96d;
case 0x69a96f:c.instructions+=7;goto B69a96f;
case 0x69a971:c.instructions+=6;goto B69a971;
case 0x69a976:c.instructions+=5;goto B69a976;
case 0x69a978:c.instructions+=4;goto B69a978;
case 0x69a97a:c.instructions+=3;goto B69a97a;
case 0x69a97e:c.instructions+=2;goto B69a97e;
case 0x69a981:c.instructions+=1;goto B69a981;
case 0x69a984:goto L69a984;
case 0x69a988:c.instructions+=2;goto B69a988;
case 0x69a98c:c.instructions+=1;goto B69a98c;
case 0x69a98e:goto L69a98e;
case 0x69a991:c.instructions+=8;goto B69a991;
case 0x69a994:c.instructions+=7;goto B69a994;
case 0x69a997:c.instructions+=6;goto B69a997;
case 0x69a99a:c.instructions+=5;goto B69a99a;
case 0x69a99d:c.instructions+=4;goto B69a99d;
case 0x69a9a0:c.instructions+=3;goto B69a9a0;
case 0x69a9a3:c.instructions+=2;goto B69a9a3;
case 0x69a9a6:c.instructions+=1;goto B69a9a6;
case 0x69a9a8:goto L69a9a8;
case 0x69a9aa:c.instructions+=5;goto B69a9aa;
case 0x69a9ad:c.instructions+=4;goto B69a9ad;
case 0x69a9b0:c.instructions+=3;goto B69a9b0;
case 0x69a9b3:c.instructions+=2;goto B69a9b3;
case 0x69a9b6:c.instructions+=1;goto B69a9b6;
case 0x69a9b8:goto L69a9b8;
case 0x69a9bb:c.instructions+=5;goto B69a9bb;
case 0x69a9be:c.instructions+=4;goto B69a9be;
case 0x69a9c1:c.instructions+=3;goto B69a9c1;
case 0x69a9c4:c.instructions+=2;goto B69a9c4;
case 0x69a9c7:c.instructions+=1;goto B69a9c7;
case 0x69a9ca:goto L69a9ca;
case 0x69a9cd:c.instructions+=1;goto B69a9cd;
case 0x69a9cf:goto L69a9cf;
case 0x69a9d2:c.instructions+=6;goto B69a9d2;
case 0x69a9d5:c.instructions+=5;goto B69a9d5;
case 0x69a9d8:c.instructions+=4;goto B69a9d8;
case 0x69a9db:c.instructions+=3;goto B69a9db;
case 0x69a9de:c.instructions+=2;goto B69a9de;
case 0x69a9e1:c.instructions+=1;goto B69a9e1;
case 0x69a9e3:goto L69a9e3;
case 0x69a9e6:c.instructions+=3;goto B69a9e6;
case 0x69a9e9:c.instructions+=2;goto B69a9e9;
case 0x69a9ec:c.instructions+=1;goto B69a9ec;
case 0x69a9f2:goto L69a9f2;
case 0x69a9f3:c.instructions+=5;goto B69a9f3;
case 0x69a9f4:c.instructions+=4;goto B69a9f4;
case 0x69a9f6:c.instructions+=3;goto B69a9f6;
case 0x69a9f7:c.instructions+=2;goto B69a9f7;
case 0x69a9f8:c.instructions+=1;goto B69a9f8;
case 0x69a9f9:goto L69a9f9;
case 0x69a9fb:c.instructions+=10;goto B69a9fb;
case 0x69a9fc:c.instructions+=9;goto B69a9fc;
case 0x69a9fe:c.instructions+=8;goto B69a9fe;
case 0x69aa01:c.instructions+=7;goto B69aa01;
case 0x69aa02:c.instructions+=6;goto B69aa02;
case 0x69aa04:c.instructions+=5;goto B69aa04;
case 0x69aa07:c.instructions+=4;goto B69aa07;
case 0x69aa0a:c.instructions+=3;goto B69aa0a;
case 0x69aa0d:c.instructions+=2;goto B69aa0d;
case 0x69aa10:c.instructions+=1;goto B69aa10;
case 0x69aa16:goto L69aa16;
case 0x69aa17:c.instructions+=1;goto B69aa17;
case 0x69aa18:goto L69aa18;
case 0x69aa1b:c.instructions+=6;goto B69aa1b;
case 0x69aa1e:c.instructions+=5;goto B69aa1e;
case 0x69aa21:c.instructions+=4;goto B69aa21;
case 0x69aa23:c.instructions+=3;goto B69aa23;
case 0x69aa25:c.instructions+=2;goto B69aa25;
case 0x69aa2a:c.instructions+=1;goto B69aa2a;
case 0x69aa30:goto L69aa30;
case 0x69aa35:c.instructions+=1;goto B69aa35;
case 0x69aa3b:goto L69aa3b;
case 0x69aa3e:c.instructions+=2;goto B69aa3e;
case 0x69aa41:c.instructions+=1;goto B69aa41;
case 0x69aa47:goto L69aa47;
case 0x69aa4a:c.instructions+=3;goto B69aa4a;
case 0x69aa4d:c.instructions+=2;goto B69aa4d;
case 0x69aa50:c.instructions+=1;goto B69aa50;
case 0x69aa53:goto L69aa53;
case 0x69aa55:c.instructions+=3;goto B69aa55;
case 0x69aa58:c.instructions+=2;goto B69aa58;
case 0x69aa5b:c.instructions+=1;goto B69aa5b;
case 0x69aa5d:goto L69aa5d;
case 0x69aa60:goto L69aa60;
case 0x69aa63:c.instructions+=2;goto B69aa63;
case 0x69aa66:c.instructions+=1;goto B69aa66;
case 0x69aa68:goto L69aa68;
case 0x69aa6a:c.instructions+=2;goto B69aa6a;
case 0x69aa6d:c.instructions+=1;goto B69aa6d;
case 0x69aa73:goto L69aa73;
case 0x69aa76:c.instructions+=3;goto B69aa76;
case 0x69aa79:c.instructions+=2;goto B69aa79;
case 0x69aa80:c.instructions+=1;goto B69aa80;
case 0x69aa82:goto L69aa82;
case 0x69aa84:c.instructions+=1;goto B69aa84;
case 0x69aa89:goto L69aa89;
case 0x69aa8f:goto L69aa8f;
case 0x69aa91:c.instructions+=3;goto B69aa91;
case 0x69aa96:c.instructions+=2;goto B69aa96;
case 0x69aa9b:c.instructions+=1;goto B69aa9b;
case 0x69aaa1:goto L69aaa1;
case 0x69aaa6:c.instructions+=1;goto B69aaa6;
case 0x69aaac:goto L69aaac;
case 0x69aaaf:c.instructions+=7;goto B69aaaf;
case 0x69aab5:c.instructions+=6;goto B69aab5;
case 0x69aab7:c.instructions+=5;goto B69aab7;
case 0x69aab9:c.instructions+=4;goto B69aab9;
case 0x69aabb:c.instructions+=3;goto B69aabb;
case 0x69aabe:c.instructions+=2;goto B69aabe;
case 0x69aac0:c.instructions+=1;goto B69aac0;
case 0x69aac2:goto L69aac2;
case 0x69aac5:goto L69aac5;
case 0x69aac8:c.instructions+=5;goto B69aac8;
case 0x69aacb:c.instructions+=4;goto B69aacb;
case 0x69aace:c.instructions+=3;goto B69aace;
case 0x69aad1:c.instructions+=2;goto B69aad1;
case 0x69aad4:c.instructions+=1;goto B69aad4;
case 0x69aad6:goto L69aad6;
case 0x69aada:c.instructions+=3;goto B69aada;
case 0x69aade:c.instructions+=2;goto B69aade;
case 0x69aae1:c.instructions+=1;goto B69aae1;
case 0x69aae3:goto L69aae3;
case 0x69aae6:c.instructions+=10;goto B69aae6;
case 0x69aaea:c.instructions+=9;goto B69aaea;
case 0x69aaed:c.instructions+=8;goto B69aaed;
case 0x69aaf0:c.instructions+=7;goto B69aaf0;
case 0x69aaf3:c.instructions+=6;goto B69aaf3;
case 0x69aaf5:c.instructions+=5;goto B69aaf5;
case 0x69aaf8:c.instructions+=4;goto B69aaf8;
case 0x69aafb:c.instructions+=3;goto B69aafb;
case 0x69aafe:c.instructions+=2;goto B69aafe;
case 0x69ab01:c.instructions+=1;goto B69ab01;
case 0x69ab03:goto L69ab03;
case 0x69ab04:goto L69ab04;
case 0x69ab05:c.instructions+=2;goto B69ab05;
case 0x69ab08:c.instructions+=1;goto B69ab08;
case 0x69ab0a:goto L69ab0a;
case 0x69ab0c:c.instructions+=4;goto B69ab0c;
case 0x69ab0d:c.instructions+=3;goto B69ab0d;
case 0x69ab10:c.instructions+=2;goto B69ab10;
case 0x69ab13:c.instructions+=1;goto B69ab13;
case 0x69ab15:goto L69ab15;
case 0x69ab17:c.instructions+=2;goto B69ab17;
case 0x69ab1a:c.instructions+=1;goto B69ab1a;
case 0x69ab1d:goto L69ab1d;
case 0x69ab21:c.instructions+=2;goto B69ab21;
case 0x69ab23:c.instructions+=1;goto B69ab23;
case 0x69ab25:goto L69ab25;
case 0x69ab28:goto L69ab28;
case 0x69ab2b:c.instructions+=9;goto B69ab2b;
case 0x69ab2f:c.instructions+=8;goto B69ab2f;
case 0x69ab32:c.instructions+=7;goto B69ab32;
case 0x69ab35:c.instructions+=6;goto B69ab35;
case 0x69ab38:c.instructions+=5;goto B69ab38;
case 0x69ab3b:c.instructions+=4;goto B69ab3b;
case 0x69ab3e:c.instructions+=3;goto B69ab3e;
case 0x69ab41:c.instructions+=2;goto B69ab41;
case 0x69ab44:c.instructions+=1;goto B69ab44;
case 0x69ab46:goto L69ab46;
case 0x69ab49:c.instructions+=6;goto B69ab49;
case 0x69ab4b:c.instructions+=5;goto B69ab4b;
case 0x69ab4e:c.instructions+=4;goto B69ab4e;
case 0x69ab51:c.instructions+=3;goto B69ab51;
case 0x69ab54:c.instructions+=2;goto B69ab54;
case 0x69ab57:c.instructions+=1;goto B69ab57;
case 0x69ab59:goto L69ab59;
case 0x69ab5b:c.instructions+=9;goto B69ab5b;
case 0x69ab5e:c.instructions+=8;goto B69ab5e;
case 0x69ab60:c.instructions+=7;goto B69ab60;
case 0x69ab65:c.instructions+=6;goto B69ab65;
case 0x69ab67:c.instructions+=5;goto B69ab67;
case 0x69ab69:c.instructions+=4;goto B69ab69;
case 0x69ab6d:c.instructions+=3;goto B69ab6d;
case 0x69ab70:c.instructions+=2;goto B69ab70;
case 0x69ab73:c.instructions+=1;goto B69ab73;
case 0x69ab75:goto L69ab75;
case 0x69ab78:c.instructions+=3;goto B69ab78;
case 0x69ab7b:c.instructions+=2;goto B69ab7b;
case 0x69ab7e:c.instructions+=1;goto B69ab7e;
case 0x69ab84:goto L69ab84;
case 0x69ab85:c.instructions+=1;goto B69ab85;
case 0x69ab86:goto L69ab86;
case 0x69ab88:c.instructions+=5;goto B69ab88;
case 0x69ab8b:c.instructions+=4;goto B69ab8b;
case 0x69ab8c:c.instructions+=3;goto B69ab8c;
case 0x69ab8f:c.instructions+=2;goto B69ab8f;
case 0x69ab90:c.instructions+=1;goto B69ab90;
case 0x69ab91:goto L69ab91;
case 0x69ab93:c.instructions+=15;goto B69ab93;
case 0x69ab94:c.instructions+=14;goto B69ab94;
case 0x69ab96:c.instructions+=13;goto B69ab96;
case 0x69ab97:c.instructions+=12;goto B69ab97;
case 0x69ab98:c.instructions+=11;goto B69ab98;
case 0x69ab99:c.instructions+=10;goto B69ab99;
case 0x69ab9b:c.instructions+=9;goto B69ab9b;
case 0x69ab9e:c.instructions+=8;goto B69ab9e;
case 0x69aba0:c.instructions+=7;goto B69aba0;
case 0x69aba1:c.instructions+=6;goto B69aba1;
case 0x69aba2:c.instructions+=5;goto B69aba2;
case 0x69aba5:c.instructions+=4;goto B69aba5;
case 0x69aba7:c.instructions+=3;goto B69aba7;
case 0x69aba9:c.instructions+=2;goto B69aba9;
case 0x69abac:c.instructions+=1;goto B69abac;
case 0x69abae:goto L69abae;
case 0x69abb1:c.instructions+=2;goto B69abb1;
case 0x69abb3:c.instructions+=1;goto B69abb3;
case 0x69abb5:goto L69abb5;
case 0x69abb8:c.instructions+=3;goto B69abb8;
case 0x69abba:c.instructions+=2;goto B69abba;
case 0x69abbd:c.instructions+=1;goto B69abbd;
case 0x69abc2:goto L69abc2;
case 0x69abc5:c.instructions+=1;goto B69abc5;
case 0x69abc7:goto L69abc7;
case 0x69abca:c.instructions+=1;goto B69abca;
case 0x69abd0:goto L69abd0;
case 0x69abd2:c.instructions+=4;goto B69abd2;
case 0x69abd4:c.instructions+=3;goto B69abd4;
case 0x69abd6:c.instructions+=2;goto B69abd6;
case 0x69abd9:c.instructions+=1;goto B69abd9;
case 0x69abdb:goto L69abdb;
case 0x69abde:goto L69abde;
case 0x69abe1:c.instructions+=4;goto B69abe1;
case 0x69abe4:c.instructions+=3;goto B69abe4;
case 0x69abe5:c.instructions+=2;goto B69abe5;
case 0x69abe7:c.instructions+=1;goto B69abe7;
case 0x69abe9:goto L69abe9;
case 0x69abec:c.instructions+=2;goto B69abec;
case 0x69abee:c.instructions+=1;goto B69abee;
case 0x69abf0:goto L69abf0;
case 0x69abf3:goto L69abf3;
case 0x69abf6:c.instructions+=4;goto B69abf6;
case 0x69abf9:c.instructions+=3;goto B69abf9;
case 0x69abfc:c.instructions+=2;goto B69abfc;
case 0x69abfe:c.instructions+=1;goto B69abfe;
case 0x69ac00:goto L69ac00;
case 0x69ac03:goto L69ac03;
case 0x69ac06:c.instructions+=3;goto B69ac06;
case 0x69ac09:c.instructions+=2;goto B69ac09;
case 0x69ac0b:c.instructions+=1;goto B69ac0b;
case 0x69ac0d:goto L69ac0d;
case 0x69ac10:c.instructions+=2;goto B69ac10;
case 0x69ac12:c.instructions+=1;goto B69ac12;
case 0x69ac15:goto L69ac15;
case 0x69ac18:c.instructions+=5;goto B69ac18;
case 0x69ac1b:c.instructions+=4;goto B69ac1b;
case 0x69ac1e:c.instructions+=3;goto B69ac1e;
case 0x69ac1f:c.instructions+=2;goto B69ac1f;
case 0x69ac20:c.instructions+=1;goto B69ac20;
case 0x69ac22:goto L69ac22;
case 0x69ac25:c.instructions+=3;goto B69ac25;
case 0x69ac28:c.instructions+=2;goto B69ac28;
case 0x69ac2b:c.instructions+=1;goto B69ac2b;
case 0x69ac2d:goto L69ac2d;
case 0x69ac30:c.instructions+=4;goto B69ac30;
case 0x69ac33:c.instructions+=3;goto B69ac33;
case 0x69ac36:c.instructions+=2;goto B69ac36;
case 0x69ac38:c.instructions+=1;goto B69ac38;
case 0x69ac3a:goto L69ac3a;
case 0x69ac3b:c.instructions+=4;goto B69ac3b;
case 0x69ac3e:c.instructions+=3;goto B69ac3e;
case 0x69ac41:c.instructions+=2;goto B69ac41;
case 0x69ac44:c.instructions+=1;goto B69ac44;
case 0x69ac46:goto L69ac46;
case 0x69ac48:c.instructions+=1;goto B69ac48;
case 0x69ac4a:goto L69ac4a;
case 0x69ac4c:c.instructions+=1;goto B69ac4c;
case 0x69ac4e:goto L69ac4e;
case 0x69ac51:c.instructions+=1;goto B69ac51;
case 0x69ac53:goto L69ac53;
case 0x69ac56:c.instructions+=1;goto B69ac56;
case 0x69ac58:goto L69ac58;
case 0x69ac5b:c.instructions+=8;goto B69ac5b;
case 0x69ac5e:c.instructions+=7;goto B69ac5e;
case 0x69ac61:c.instructions+=6;goto B69ac61;
case 0x69ac64:c.instructions+=5;goto B69ac64;
case 0x69ac67:c.instructions+=4;goto B69ac67;
case 0x69ac6a:c.instructions+=3;goto B69ac6a;
case 0x69ac6d:c.instructions+=2;goto B69ac6d;
case 0x69ac70:c.instructions+=1;goto B69ac70;
case 0x69ac72:goto L69ac72;
case 0x69ac75:c.instructions+=2;goto B69ac75;
case 0x69ac77:c.instructions+=1;goto B69ac77;
case 0x69ac7a:goto L69ac7a;
case 0x69ac7c:c.instructions+=1;goto B69ac7c;
case 0x69ac7e:goto L69ac7e;
case 0x69ac81:c.instructions+=3;goto B69ac81;
case 0x69ac84:c.instructions+=2;goto B69ac84;
case 0x69ac87:c.instructions+=1;goto B69ac87;
case 0x69ac8a:goto L69ac8a;
case 0x69ac8b:c.instructions+=5;goto B69ac8b;
case 0x69ac8c:c.instructions+=4;goto B69ac8c;
case 0x69ac8e:c.instructions+=3;goto B69ac8e;
case 0x69ac8f:c.instructions+=2;goto B69ac8f;
case 0x69ac90:c.instructions+=1;goto B69ac90;
case 0x69ac93:goto L69ac93;
case 0x69ac95:c.instructions+=13;goto B69ac95;
case 0x69ac96:c.instructions+=12;goto B69ac96;
case 0x69ac98:c.instructions+=11;goto B69ac98;
case 0x69ac9b:c.instructions+=10;goto B69ac9b;
case 0x69ac9e:c.instructions+=9;goto B69ac9e;
case 0x69ac9f:c.instructions+=8;goto B69ac9f;
case 0x69aca0:c.instructions+=7;goto B69aca0;
case 0x69aca2:c.instructions+=6;goto B69aca2;
case 0x69aca4:c.instructions+=5;goto B69aca4;
case 0x69aca9:c.instructions+=4;goto B69aca9;
case 0x69acae:c.instructions+=3;goto B69acae;
case 0x69acaf:c.instructions+=2;goto B69acaf;
case 0x69acb1:c.instructions+=1;goto B69acb1;
case 0x69acb7:goto L69acb7;
case 0x69acba:c.instructions+=10;goto B69acba;
case 0x69acbc:c.instructions+=9;goto B69acbc;
case 0x69acbf:c.instructions+=8;goto B69acbf;
case 0x69acc2:c.instructions+=7;goto B69acc2;
case 0x69acc5:c.instructions+=6;goto B69acc5;
case 0x69acc8:c.instructions+=5;goto B69acc8;
case 0x69accb:c.instructions+=4;goto B69accb;
case 0x69acce:c.instructions+=3;goto B69acce;
case 0x69acd1:c.instructions+=2;goto B69acd1;
case 0x69acd3:c.instructions+=1;goto B69acd3;
case 0x69acd9:goto L69acd9;
case 0x69acdc:c.instructions+=1;goto B69acdc;
case 0x69ace2:goto L69ace2;
case 0x69ace8:c.instructions+=3;goto B69ace8;
case 0x69aceb:c.instructions+=2;goto B69aceb;
case 0x69acf2:c.instructions+=1;goto B69acf2;
case 0x69acf8:goto L69acf8;
case 0x69acfb:c.instructions+=4;goto B69acfb;
case 0x69acfd:c.instructions+=3;goto B69acfd;
case 0x69ad00:c.instructions+=2;goto B69ad00;
case 0x69ad03:c.instructions+=1;goto B69ad03;
case 0x69ad06:goto L69ad06;
case 0x69ad0a:c.instructions+=3;goto B69ad0a;
case 0x69ad0c:c.instructions+=2;goto B69ad0c;
case 0x69ad0f:c.instructions+=1;goto B69ad0f;
case 0x69ad11:goto L69ad11;
case 0x69ad14:c.instructions+=3;goto B69ad14;
case 0x69ad17:c.instructions+=2;goto B69ad17;
case 0x69ad19:c.instructions+=1;goto B69ad19;
case 0x69ad1b:goto L69ad1b;
case 0x69ad1e:c.instructions+=6;goto B69ad1e;
case 0x69ad21:c.instructions+=5;goto B69ad21;
case 0x69ad24:c.instructions+=4;goto B69ad24;
case 0x69ad27:c.instructions+=3;goto B69ad27;
case 0x69ad29:c.instructions+=2;goto B69ad29;
case 0x69ad2c:c.instructions+=1;goto B69ad2c;
case 0x69ad2f:goto L69ad2f;
case 0x69ad32:c.instructions+=6;goto B69ad32;
case 0x69ad34:c.instructions+=5;goto B69ad34;
case 0x69ad38:c.instructions+=4;goto B69ad38;
case 0x69ad3b:c.instructions+=3;goto B69ad3b;
case 0x69ad3f:c.instructions+=2;goto B69ad3f;
case 0x69ad42:c.instructions+=1;goto B69ad42;
case 0x69ad44:goto L69ad44;
case 0x69ad47:c.instructions+=1;goto B69ad47;
case 0x69ad49:goto L69ad49;
case 0x69ad4d:c.instructions+=1;goto B69ad4d;
case 0x69ad4f:goto L69ad4f;
case 0x69ad52:c.instructions+=1;goto B69ad52;
case 0x69ad54:goto L69ad54;
case 0x69ad56:c.instructions+=1;goto B69ad56;
case 0x69ad58:goto L69ad58;
case 0x69ad5f:goto L69ad5f;
case 0x69ad63:c.instructions+=1;goto B69ad63;
case 0x69ad65:goto L69ad65;
case 0x69ad68:c.instructions+=1;goto B69ad68;
case 0x69ad6a:goto L69ad6a;
case 0x69ad6e:c.instructions+=1;goto B69ad6e;
case 0x69ad70:goto L69ad70;
case 0x69ad73:c.instructions+=1;goto B69ad73;
case 0x69ad75:goto L69ad75;
case 0x69ad79:goto L69ad79;
case 0x69ad7d:c.instructions+=1;goto B69ad7d;
case 0x69ad7f:goto L69ad7f;
case 0x69ad82:c.instructions+=1;goto B69ad82;
case 0x69ad84:goto L69ad84;
case 0x69ad88:goto L69ad88;
case 0x69ad8b:c.instructions+=5;goto B69ad8b;
case 0x69ad8e:c.instructions+=4;goto B69ad8e;
case 0x69ad92:c.instructions+=3;goto B69ad92;
case 0x69ad95:c.instructions+=2;goto B69ad95;
case 0x69ad98:c.instructions+=1;goto B69ad98;
case 0x69ad9e:goto L69ad9e;
case 0x69ada1:c.instructions+=6;goto B69ada1;
case 0x69ada7:c.instructions+=5;goto B69ada7;
case 0x69adaa:c.instructions+=4;goto B69adaa;
case 0x69adac:c.instructions+=3;goto B69adac;
case 0x69adae:c.instructions+=2;goto B69adae;
case 0x69adb1:c.instructions+=1;goto B69adb1;
case 0x69adb7:goto L69adb7;
case 0x69adbb:c.instructions+=7;goto B69adbb;
case 0x69adbd:c.instructions+=6;goto B69adbd;
case 0x69adc0:c.instructions+=5;goto B69adc0;
case 0x69adc3:c.instructions+=4;goto B69adc3;
case 0x69adc6:c.instructions+=3;goto B69adc6;
case 0x69adc9:c.instructions+=2;goto B69adc9;
case 0x69adcc:c.instructions+=1;goto B69adcc;
case 0x69add2:goto L69add2;
case 0x69add5:c.instructions+=6;goto B69add5;
case 0x69add8:c.instructions+=5;goto B69add8;
case 0x69addb:c.instructions+=4;goto B69addb;
case 0x69adde:c.instructions+=3;goto B69adde;
case 0x69ade1:c.instructions+=2;goto B69ade1;
case 0x69ade4:c.instructions+=1;goto B69ade4;
case 0x69ade7:goto L69ade7;
case 0x69ade9:c.instructions+=15;goto B69ade9;
case 0x69adec:c.instructions+=14;goto B69adec;
case 0x69adee:c.instructions+=13;goto B69adee;
case 0x69adf1:c.instructions+=12;goto B69adf1;
case 0x69adf4:c.instructions+=11;goto B69adf4;
case 0x69adf7:c.instructions+=10;goto B69adf7;
case 0x69adfa:c.instructions+=9;goto B69adfa;
case 0x69adfd:c.instructions+=8;goto B69adfd;
case 0x69ae00:c.instructions+=7;goto B69ae00;
case 0x69ae03:c.instructions+=6;goto B69ae03;
case 0x69ae06:c.instructions+=5;goto B69ae06;
case 0x69ae09:c.instructions+=4;goto B69ae09;
case 0x69ae0c:c.instructions+=3;goto B69ae0c;
case 0x69ae0f:c.instructions+=2;goto B69ae0f;
case 0x69ae13:c.instructions+=1;goto B69ae13;
case 0x69ae15:goto L69ae15;
case 0x69ae19:c.instructions+=1;goto B69ae19;
case 0x69ae1b:goto L69ae1b;
case 0x69ae22:c.instructions+=1;goto B69ae22;
case 0x69ae24:goto L69ae24;
case 0x69ae28:goto L69ae28;
case 0x69ae2b:c.instructions+=4;goto B69ae2b;
case 0x69ae2e:c.instructions+=3;goto B69ae2e;
case 0x69ae31:c.instructions+=2;goto B69ae31;
case 0x69ae35:c.instructions+=1;goto B69ae35;
case 0x69ae37:goto L69ae37;
case 0x69ae3a:c.instructions+=2;goto B69ae3a;
case 0x69ae3e:c.instructions+=1;goto B69ae3e;
case 0x69ae40:goto L69ae40;
case 0x69ae47:c.instructions+=1;goto B69ae47;
case 0x69ae49:goto L69ae49;
case 0x69ae4d:goto L69ae4d;
case 0x69ae51:c.instructions+=1;goto B69ae51;
case 0x69ae53:goto L69ae53;
case 0x69ae56:c.instructions+=5;goto B69ae56;
case 0x69ae58:c.instructions+=4;goto B69ae58;
case 0x69ae5a:c.instructions+=3;goto B69ae5a;
case 0x69ae5c:c.instructions+=2;goto B69ae5c;
case 0x69ae5f:c.instructions+=1;goto B69ae5f;
case 0x69ae61:goto L69ae61;
case 0x69ae65:c.instructions+=1;goto B69ae65;
case 0x69ae67:goto L69ae67;
case 0x69ae6a:c.instructions+=6;goto B69ae6a;
case 0x69ae6d:c.instructions+=5;goto B69ae6d;
case 0x69ae6f:c.instructions+=4;goto B69ae6f;
case 0x69ae71:c.instructions+=3;goto B69ae71;
case 0x69ae73:c.instructions+=2;goto B69ae73;
case 0x69ae76:c.instructions+=1;goto B69ae76;
case 0x69ae78:goto L69ae78;
case 0x69ae7c:c.instructions+=1;goto B69ae7c;
case 0x69ae7e:goto L69ae7e;
case 0x69ae82:c.instructions+=1;goto B69ae82;
case 0x69ae84:goto L69ae84;
case 0x69ae87:c.instructions+=4;goto B69ae87;
case 0x69ae8a:c.instructions+=3;goto B69ae8a;
case 0x69ae8d:c.instructions+=2;goto B69ae8d;
case 0x69ae90:c.instructions+=1;goto B69ae90;
case 0x69ae93:goto L69ae93;
case 0x69ae96:c.instructions+=1;goto B69ae96;
case 0x69ae98:goto L69ae98;
case 0x69ae9b:c.instructions+=5;goto B69ae9b;
case 0x69aea1:c.instructions+=4;goto B69aea1;
case 0x69aea3:c.instructions+=3;goto B69aea3;
case 0x69aea5:c.instructions+=2;goto B69aea5;
case 0x69aea8:c.instructions+=1;goto B69aea8;
case 0x69aeaa:goto L69aeaa;
case 0x69aead:c.instructions+=1;goto B69aead;
case 0x69aeaf:goto L69aeaf;
case 0x69aeb3:c.instructions+=1;goto B69aeb3;
case 0x69aeb5:goto L69aeb5;
case 0x69aeb8:c.instructions+=6;goto B69aeb8;
case 0x69aebb:c.instructions+=5;goto B69aebb;
case 0x69aec1:c.instructions+=4;goto B69aec1;
case 0x69aec3:c.instructions+=3;goto B69aec3;
case 0x69aec5:c.instructions+=2;goto B69aec5;
case 0x69aec8:c.instructions+=1;goto B69aec8;
case 0x69aeca:goto L69aeca;
case 0x69aecd:goto L69aecd;
case 0x69aed0:c.instructions+=1;goto B69aed0;
case 0x69aed3:goto L69aed3;
case 0x69aed6:c.instructions+=7;goto B69aed6;
case 0x69aed9:c.instructions+=6;goto B69aed9;
case 0x69aedc:c.instructions+=5;goto B69aedc;
case 0x69aee0:c.instructions+=4;goto B69aee0;
case 0x69aee3:c.instructions+=3;goto B69aee3;
case 0x69aee6:c.instructions+=2;goto B69aee6;
case 0x69aee9:c.instructions+=1;goto B69aee9;
case 0x69aeef:goto L69aeef;
case 0x69aef3:c.instructions+=1;goto B69aef3;
case 0x69aef5:goto L69aef5;
case 0x69aef8:c.instructions+=3;goto B69aef8;
case 0x69aef9:c.instructions+=2;goto B69aef9;
case 0x69aefc:c.instructions+=1;goto B69aefc;
case 0x69aefe:goto L69aefe;
case 0x69af01:c.instructions+=5;goto B69af01;
case 0x69af03:c.instructions+=4;goto B69af03;
case 0x69af05:c.instructions+=3;goto B69af05;
case 0x69af07:c.instructions+=2;goto B69af07;
case 0x69af0a:c.instructions+=1;goto B69af0a;
case 0x69af0c:goto L69af0c;
case 0x69af0f:c.instructions+=5;goto B69af0f;
case 0x69af11:c.instructions+=4;goto B69af11;
case 0x69af14:c.instructions+=3;goto B69af14;
case 0x69af17:c.instructions+=2;goto B69af17;
case 0x69af1a:c.instructions+=1;goto B69af1a;
case 0x69af1c:goto L69af1c;
case 0x69af1e:goto L69af1e;
case 0x69af21:c.instructions+=2;goto B69af21;
case 0x69af24:c.instructions+=1;goto B69af24;
case 0x69af26:goto L69af26;
case 0x69af27:c.instructions+=11;goto B69af27;
case 0x69af29:c.instructions+=10;goto B69af29;
case 0x69af2c:c.instructions+=9;goto B69af2c;
case 0x69af2d:c.instructions+=8;goto B69af2d;
case 0x69af2f:c.instructions+=7;goto B69af2f;
case 0x69af32:c.instructions+=6;goto B69af32;
case 0x69af33:c.instructions+=5;goto B69af33;
case 0x69af34:c.instructions+=4;goto B69af34;
case 0x69af36:c.instructions+=3;goto B69af36;
case 0x69af39:c.instructions+=2;goto B69af39;
case 0x69af3b:c.instructions+=1;goto B69af3b;
case 0x69af40:goto L69af40;
case 0x69af43:c.instructions+=4;goto B69af43;
case 0x69af46:c.instructions+=3;goto B69af46;
case 0x69af49:c.instructions+=2;goto B69af49;
case 0x69af4c:c.instructions+=1;goto B69af4c;
case 0x69af4f:goto L69af4f;
case 0x69af51:c.instructions+=1;goto B69af51;
case 0x69af56:goto L69af56;
case 0x69af59:c.instructions+=6;goto B69af59;
case 0x69af5b:c.instructions+=5;goto B69af5b;
case 0x69af5e:c.instructions+=4;goto B69af5e;
case 0x69af61:c.instructions+=3;goto B69af61;
case 0x69af64:c.instructions+=2;goto B69af64;
case 0x69af67:c.instructions+=1;goto B69af67;
case 0x69af6d:goto L69af6d;
case 0x69af70:c.instructions+=3;goto B69af70;
case 0x69af73:c.instructions+=2;goto B69af73;
case 0x69af76:c.instructions+=1;goto B69af76;
case 0x69af79:goto L69af79;
case 0x69af7d:c.instructions+=6;goto B69af7d;
case 0x69af80:c.instructions+=5;goto B69af80;
case 0x69af83:c.instructions+=4;goto B69af83;
case 0x69af85:c.instructions+=3;goto B69af85;
case 0x69af87:c.instructions+=2;goto B69af87;
case 0x69af8a:c.instructions+=1;goto B69af8a;
case 0x69af8c:goto L69af8c;
case 0x69af8f:c.instructions+=3;goto B69af8f;
case 0x69af92:c.instructions+=2;goto B69af92;
case 0x69af95:c.instructions+=1;goto B69af95;
case 0x69af98:goto L69af98;
case 0x69af9b:c.instructions+=6;goto B69af9b;
case 0x69af9e:c.instructions+=5;goto B69af9e;
case 0x69afa1:c.instructions+=4;goto B69afa1;
case 0x69afa4:c.instructions+=3;goto B69afa4;
case 0x69afa7:c.instructions+=2;goto B69afa7;
case 0x69afab:c.instructions+=1;goto B69afab;
case 0x69afad:goto L69afad;
case 0x69afb1:c.instructions+=1;goto B69afb1;
case 0x69afb3:goto L69afb3;
case 0x69afb6:c.instructions+=5;goto B69afb6;
case 0x69afb8:c.instructions+=4;goto B69afb8;
case 0x69afba:c.instructions+=3;goto B69afba;
case 0x69afbc:c.instructions+=2;goto B69afbc;
case 0x69afbf:c.instructions+=1;goto B69afbf;
case 0x69afc1:goto L69afc1;
case 0x69afc4:c.instructions+=4;goto B69afc4;
case 0x69afc7:c.instructions+=3;goto B69afc7;
case 0x69afca:c.instructions+=2;goto B69afca;
case 0x69afce:c.instructions+=1;goto B69afce;
case 0x69afd0:goto L69afd0;
case 0x69afd4:c.instructions+=1;goto B69afd4;
case 0x69afd6:goto L69afd6;
case 0x69afd9:c.instructions+=5;goto B69afd9;
case 0x69afdb:c.instructions+=4;goto B69afdb;
case 0x69afdd:c.instructions+=3;goto B69afdd;
case 0x69afdf:c.instructions+=2;goto B69afdf;
case 0x69afe2:c.instructions+=1;goto B69afe2;
case 0x69afe4:goto L69afe4;
case 0x69afe7:c.instructions+=2;goto B69afe7;
case 0x69afea:c.instructions+=1;goto B69afea;
case 0x69afec:goto L69afec;
case 0x69afef:c.instructions+=1;goto B69afef;
case 0x69aff3:goto L69aff3;
case 0x69aff7:c.instructions+=3;goto B69aff7;
case 0x69affa:c.instructions+=2;goto B69affa;
case 0x69affd:c.instructions+=1;goto B69affd;
default:missing_instruction(c.pc);}
B69a000:L69a000:{c.instructions+=4;NFSU2_TR(0x69a000);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a001:{NFSU2_TR(0x69a001);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69a004:{NFSU2_TR(0x69a004);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a006:{NFSU2_TR(0x69a006);
if(r1(R+512)){{goto L69a017;}}
}
B69a008:L69a008:{c.instructions+=1;NFSU2_TR(0x69a008);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69a029;}}
}
B69a00a:L69a00a:{c.instructions+=5;NFSU2_TR(0x69a00a);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69a00d:{NFSU2_TR(0x69a00d);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B69a010:{NFSU2_TR(0x69a010);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69a012:{NFSU2_TR(0x69a012);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69a015:{NFSU2_TR(0x69a015);
if(r1(R+514)){{goto L69a01c;}}
}
B69a017:L69a017:{c.instructions+=2;NFSU2_TR(0x69a017);
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
B69a01a:{NFSU2_TR(0x69a01a);
{goto L69a030;}
}
B69a01c:L69a01c:{c.instructions+=5;NFSU2_TR(0x69a01c);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69a01f:{NFSU2_TR(0x69a01f);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B69a022:{NFSU2_TR(0x69a022);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69a024:{NFSU2_TR(0x69a024);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69a027:{NFSU2_TR(0x69a027);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69a02e;}}
}
B69a029:L69a029:{c.instructions+=3;NFSU2_TR(0x69a029);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69a02b:{NFSU2_TR(0x69a02b);
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
B69a02c:{NFSU2_TR(0x69a02c);
{goto L69a030;}
}
B69a02e:L69a02e:{c.instructions+=1;NFSU2_TR(0x69a02e);
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
B69a030:L69a030:{c.instructions+=3;NFSU2_TR(0x69a030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69a031:{NFSU2_TR(0x69a031);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69a032:{NFSU2_TR(0x69a032);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a035:L69a035:{c.instructions+=14;NFSU2_TR(0x69a035);
__builtin_memmove((R+28),(R+28),4);
}
B69a037:{NFSU2_TR(0x69a037);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a038:{NFSU2_TR(0x69a038);
__builtin_memmove((R+20),(R+16),4);
}
B69a03a:{NFSU2_TR(0x69a03a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a03d:{NFSU2_TR(0x69a03d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a040:{NFSU2_TR(0x69a040);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a043:{NFSU2_TR(0x69a043);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a046:{NFSU2_TR(0x69a046);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a049:{NFSU2_TR(0x69a049);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69a04c:{NFSU2_TR(0x69a04c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a04f:{NFSU2_TR(0x69a04f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a050:{NFSU2_TR(0x69a050);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69a053:{NFSU2_TR(0x69a053);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a055:{NFSU2_TR(0x69a055);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69a05c;}}
}
B69a057:L69a057:{c.instructions+=2;NFSU2_TR(0x69a057);
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
B69a05a:{NFSU2_TR(0x69a05a);
{goto L69a0be;}
}
B69a05c:L69a05c:{c.instructions+=1;NFSU2_TR(0x69a05c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a063;}}
}
B69a05e:L69a05e:{c.instructions+=3;NFSU2_TR(0x69a05e);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69a060:{NFSU2_TR(0x69a060);
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
B69a061:{NFSU2_TR(0x69a061);
{goto L69a0be;}
}
B69a063:L69a063:{c.instructions+=4;NFSU2_TR(0x69a063);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a066:{NFSU2_TR(0x69a066);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69a069:{NFSU2_TR(0x69a069);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a06b:{NFSU2_TR(0x69a06b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a057u);}goto L69a057;}}
}
B69a06d:L69a06d:{c.instructions+=1;NFSU2_TR(0x69a06d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a05eu);}goto L69a05e;}}
}
B69a06f:L69a06f:{c.instructions+=4;NFSU2_TR(0x69a06f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a072:{NFSU2_TR(0x69a072);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69a075:{NFSU2_TR(0x69a075);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a077:{NFSU2_TR(0x69a077);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a057u);}goto L69a057;}}
}
B69a079:L69a079:{c.instructions+=1;NFSU2_TR(0x69a079);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a05eu);}goto L69a05e;}}
}
B69a07b:L69a07b:{c.instructions+=4;NFSU2_TR(0x69a07b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a07e:{NFSU2_TR(0x69a07e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69a081:{NFSU2_TR(0x69a081);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a083:{NFSU2_TR(0x69a083);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a057u);}goto L69a057;}}
}
B69a085:L69a085:{c.instructions+=1;NFSU2_TR(0x69a085);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a05eu);}goto L69a05e;}}
}
B69a087:L69a087:{c.instructions+=4;NFSU2_TR(0x69a087);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a08a:{NFSU2_TR(0x69a08a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69a08d:{NFSU2_TR(0x69a08d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a08f:{NFSU2_TR(0x69a08f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a057u);}goto L69a057;}}
}
B69a091:L69a091:{c.instructions+=1;NFSU2_TR(0x69a091);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a05eu);}goto L69a05e;}}
}
B69a093:L69a093:{c.instructions+=4;NFSU2_TR(0x69a093);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a096:{NFSU2_TR(0x69a096);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69a099:{NFSU2_TR(0x69a099);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a09b:{NFSU2_TR(0x69a09b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a057u);}goto L69a057;}}
}
B69a09d:L69a09d:{c.instructions+=1;NFSU2_TR(0x69a09d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a05eu);}goto L69a05e;}}
}
B69a09f:L69a09f:{c.instructions+=4;NFSU2_TR(0x69a09f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a0a2:{NFSU2_TR(0x69a0a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69a0a5:{NFSU2_TR(0x69a0a5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a0a7:{NFSU2_TR(0x69a0a7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a057u);}goto L69a057;}}
}
B69a0a9:L69a0a9:{c.instructions+=1;NFSU2_TR(0x69a0a9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a05eu);}goto L69a05e;}}
}
B69a0ab:L69a0ab:{c.instructions+=4;NFSU2_TR(0x69a0ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a0ae:{NFSU2_TR(0x69a0ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a0b1:{NFSU2_TR(0x69a0b1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B69a0b3:{NFSU2_TR(0x69a0b3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a057u);}goto L69a057;}}
}
B69a0b5:L69a0b5:{c.instructions+=4;NFSU2_TR(0x69a0b5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69a0b7:{NFSU2_TR(0x69a0b7);
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
B69a0b9:{NFSU2_TR(0x69a0b9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+8),(U+2),1);
}
B69a0bc:{NFSU2_TR(0x69a0bc);
__builtin_memmove((R+0),(R+8),4);
}
B69a0be:L69a0be:{c.instructions+=3;NFSU2_TR(0x69a0be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69a0bf:{NFSU2_TR(0x69a0bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69a0c0:{NFSU2_TR(0x69a0c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a0c3:L69a0c3:{c.instructions+=6;NFSU2_TR(0x69a0c3);
__builtin_memmove((R+28),(R+28),4);
}
B69a0c5:{NFSU2_TR(0x69a0c5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a0c6:{NFSU2_TR(0x69a0c6);
__builtin_memmove((R+20),(R+16),4);
}
B69a0c8:{NFSU2_TR(0x69a0c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a0cb:{NFSU2_TR(0x69a0cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a0ce:{NFSU2_TR(0x69a0ce);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a0d5;}}
}
B69a0d0:L69a0d0:{c.instructions+=2;NFSU2_TR(0x69a0d0);
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
B69a0d3:{NFSU2_TR(0x69a0d3);
{goto L69a0d9;}
}
B69a0d5:L69a0d5:{c.instructions+=2;NFSU2_TR(0x69a0d5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B69a0d7:{NFSU2_TR(0x69a0d7);
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
B69a0d9:L69a0d9:{c.instructions+=2;NFSU2_TR(0x69a0d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69a0da:{NFSU2_TR(0x69a0da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a0dd:L69a0dd:{c.instructions+=14;NFSU2_TR(0x69a0dd);
__builtin_memmove((R+28),(R+28),4);
}
B69a0df:{NFSU2_TR(0x69a0df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a0e0:{NFSU2_TR(0x69a0e0);
__builtin_memmove((R+20),(R+16),4);
}
B69a0e2:{NFSU2_TR(0x69a0e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a0e5:{NFSU2_TR(0x69a0e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a0e8:{NFSU2_TR(0x69a0e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a0eb:{NFSU2_TR(0x69a0eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69a0ee:{NFSU2_TR(0x69a0ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a0f1:{NFSU2_TR(0x69a0f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a0f2:{NFSU2_TR(0x69a0f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69a0f5:{NFSU2_TR(0x69a0f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a0f8:{NFSU2_TR(0x69a0f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a0fb:{NFSU2_TR(0x69a0fb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a0fd:{NFSU2_TR(0x69a0fd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L69a104;}}
}
B69a0ff:L69a0ff:{c.instructions+=2;NFSU2_TR(0x69a0ff);
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
B69a102:{NFSU2_TR(0x69a102);
{goto L69a113;}
}
B69a104:L69a104:{c.instructions+=1;NFSU2_TR(0x69a104);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L69a10b;}}
}
B69a106:L69a106:{c.instructions+=3;NFSU2_TR(0x69a106);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69a108:{NFSU2_TR(0x69a108);
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
B69a109:{NFSU2_TR(0x69a109);
{goto L69a113;}
}
B69a10b:L69a10b:{c.instructions+=2;NFSU2_TR(0x69a10b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a10d:{NFSU2_TR(0x69a10d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a0ffu);}goto L69a0ff;}}
}
B69a10f:L69a10f:{c.instructions+=2;NFSU2_TR(0x69a10f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B69a111:{NFSU2_TR(0x69a111);
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
B69a113:L69a113:{c.instructions+=3;NFSU2_TR(0x69a113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69a114:{NFSU2_TR(0x69a114);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69a115:{NFSU2_TR(0x69a115);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a118:L69a118:{c.instructions+=22;NFSU2_TR(0x69a118);
__builtin_memmove((R+28),(R+28),4);
}
B69a11a:{NFSU2_TR(0x69a11a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a11b:{NFSU2_TR(0x69a11b);
__builtin_memmove((R+20),(R+16),4);
}
B69a11d:{NFSU2_TR(0x69a11d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B69a120:{NFSU2_TR(0x69a120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a123:{NFSU2_TR(0x69a123);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a126:{NFSU2_TR(0x69a126);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a127:{NFSU2_TR(0x69a127);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a128:{NFSU2_TR(0x69a128);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69a12b:{NFSU2_TR(0x69a12b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a12e:{NFSU2_TR(0x69a12e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69a131:{NFSU2_TR(0x69a131);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a134:{NFSU2_TR(0x69a134);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a137:{NFSU2_TR(0x69a137);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a13a:{NFSU2_TR(0x69a13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a13d:{NFSU2_TR(0x69a13d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a13e:{NFSU2_TR(0x69a13e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69a140:{NFSU2_TR(0x69a140);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a143:{NFSU2_TR(0x69a143);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a146:{NFSU2_TR(0x69a146);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a149:{NFSU2_TR(0x69a149);
__builtin_memmove((R+0),(R+4),4);
}
B69a14b:{NFSU2_TR(0x69a14b);
if(r1(R+518)){{goto L69a15c;}}
}
B69a14d:L69a14d:{c.instructions+=1;NFSU2_TR(0x69a14d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a150:L69a150:{c.instructions+=5;NFSU2_TR(0x69a150);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a153:{NFSU2_TR(0x69a153);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a156:{NFSU2_TR(0x69a156);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69a157:{NFSU2_TR(0x69a157);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a15a:{NFSU2_TR(0x69a15a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a150u);}goto L69a150;}}
}
B69a15c:L69a15c:{c.instructions+=3;NFSU2_TR(0x69a15c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a15f:{NFSU2_TR(0x69a15f);
__builtin_memmove((R+0),(R+8),4);
}
B69a161:{NFSU2_TR(0x69a161);
if(r1(R+518)){{goto L69a174;}}
}
B69a163:L69a163:{c.instructions+=6;NFSU2_TR(0x69a163);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a166:{NFSU2_TR(0x69a166);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a169:{NFSU2_TR(0x69a169);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a16c:{NFSU2_TR(0x69a16c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a16f:{NFSU2_TR(0x69a16f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a172:{NFSU2_TR(0x69a172);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a163u);}goto L69a163;}}
}
B69a174:L69a174:{c.instructions+=5;NFSU2_TR(0x69a174);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a177:{NFSU2_TR(0x69a177);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a179:{NFSU2_TR(0x69a179);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a17c:{NFSU2_TR(0x69a17c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a17f:{NFSU2_TR(0x69a17f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a192;}}
}
B69a181:L69a181:{c.instructions+=2;NFSU2_TR(0x69a181);
__builtin_memmove((R+0),(R+28),4);
}
B69a183:{NFSU2_TR(0x69a183);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B69a185:L69a185:{c.instructions+=6;NFSU2_TR(0x69a185);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a188:{NFSU2_TR(0x69a188);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69a18b:{NFSU2_TR(0x69a18b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a18e:{NFSU2_TR(0x69a18e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B69a18f:{NFSU2_TR(0x69a18f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B69a190:{NFSU2_TR(0x69a190);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a185u);}goto L69a185;}}
}
B69a192:L69a192:{c.instructions+=3;NFSU2_TR(0x69a192);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a195:{NFSU2_TR(0x69a195);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a197:{NFSU2_TR(0x69a197);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a1aa;}}
}
B69a199:L69a199:{c.instructions+=1;NFSU2_TR(0x69a199);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B69a19b:L69a19b:{c.instructions+=6;NFSU2_TR(0x69a19b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a19e:{NFSU2_TR(0x69a19e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69a1a1:{NFSU2_TR(0x69a1a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a1a4:{NFSU2_TR(0x69a1a4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B69a1a5:{NFSU2_TR(0x69a1a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a1a8:{NFSU2_TR(0x69a1a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a19bu);}goto L69a19b;}}
}
B69a1aa:L69a1aa:{c.instructions+=2;NFSU2_TR(0x69a1aa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a1ac:{NFSU2_TR(0x69a1ac);
if(r1(R+518)){{goto L69a1c5;}}
}
B69a1ae:L69a1ae:{c.instructions+=1;NFSU2_TR(0x69a1ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a1b1:L69a1b1:{c.instructions+=8;NFSU2_TR(0x69a1b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69a1b4:{NFSU2_TR(0x69a1b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69a1b7:{NFSU2_TR(0x69a1b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a1ba:{NFSU2_TR(0x69a1ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a1bd:{NFSU2_TR(0x69a1bd);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B69a1be:{NFSU2_TR(0x69a1be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a1c1:{NFSU2_TR(0x69a1c1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a1c3:{NFSU2_TR(0x69a1c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a1b1u);}goto L69a1b1;}}
}
B69a1c5:L69a1c5:{c.instructions+=10;NFSU2_TR(0x69a1c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a1c8:{NFSU2_TR(0x69a1c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a1cb:{NFSU2_TR(0x69a1cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a1ce:{NFSU2_TR(0x69a1ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a1d1:{NFSU2_TR(0x69a1d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a1d4:{NFSU2_TR(0x69a1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a1d7:{NFSU2_TR(0x69a1d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a1da:{NFSU2_TR(0x69a1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a1dd:{NFSU2_TR(0x69a1dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B69a1df:{NFSU2_TR(0x69a1df);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69a20a;}}
}
B69a1e1:L69a1e1:{c.instructions+=3;NFSU2_TR(0x69a1e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a1e4:{NFSU2_TR(0x69a1e4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B69a1e6:{NFSU2_TR(0x69a1e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a1e9:L69a1e9:{c.instructions+=4;NFSU2_TR(0x69a1e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69a1ec:{NFSU2_TR(0x69a1ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a1ef:{NFSU2_TR(0x69a1ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a1f2:{NFSU2_TR(0x69a1f2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a1f7;}}
}
B69a1f4:L69a1f4:{c.instructions+=1;NFSU2_TR(0x69a1f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a1f7:L69a1f7:{c.instructions+=3;NFSU2_TR(0x69a1f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a1fa:{NFSU2_TR(0x69a1fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B69a1fd:{NFSU2_TR(0x69a1fd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69a202;}}
}
B69a1ff:L69a1ff:{c.instructions+=1;NFSU2_TR(0x69a1ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a202:L69a202:{c.instructions+=3;NFSU2_TR(0x69a202);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a205:{NFSU2_TR(0x69a205);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a208:{NFSU2_TR(0x69a208);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a1e9u);}goto L69a1e9;}}
}
B69a20a:L69a20a:{c.instructions+=5;NFSU2_TR(0x69a20a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a20d:{NFSU2_TR(0x69a20d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B69a210:{NFSU2_TR(0x69a210);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69a213:{NFSU2_TR(0x69a213);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a216:{NFSU2_TR(0x69a216);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69a240;}}
}
B69a218:L69a218:{c.instructions+=3;NFSU2_TR(0x69a218);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B69a21b:{NFSU2_TR(0x69a21b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a21e:{NFSU2_TR(0x69a21e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a221:L69a221:{c.instructions+=4;NFSU2_TR(0x69a221);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69a224:{NFSU2_TR(0x69a224);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a227:{NFSU2_TR(0x69a227);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a229:{NFSU2_TR(0x69a229);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a22d;}}
}
B69a22b:L69a22b:{c.instructions+=1;NFSU2_TR(0x69a22b);
__builtin_memmove((R+28),(R+0),4);
}
B69a22d:L69a22d:{c.instructions+=3;NFSU2_TR(0x69a22d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a230:{NFSU2_TR(0x69a230);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B69a233:{NFSU2_TR(0x69a233);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69a238;}}
}
B69a235:L69a235:{c.instructions+=1;NFSU2_TR(0x69a235);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a238:L69a238:{c.instructions+=3;NFSU2_TR(0x69a238);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a23b:{NFSU2_TR(0x69a23b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a23e:{NFSU2_TR(0x69a23e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a221u);}goto L69a221;}}
}
B69a240:L69a240:{c.instructions+=3;NFSU2_TR(0x69a240);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a243:{NFSU2_TR(0x69a243);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B69a245:{NFSU2_TR(0x69a245);
if(r1(R+512)){{goto L69a24c;}}
}
B69a247:L69a247:{c.instructions+=2;NFSU2_TR(0x69a247);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a24a:{NFSU2_TR(0x69a24a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a259;}}
}
B69a24c:L69a24c:{c.instructions+=3;NFSU2_TR(0x69a24c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a24f:{NFSU2_TR(0x69a24f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69a252:{NFSU2_TR(0x69a252);
if(r1(R+512)){{goto L69a270;}}
}
B69a254:L69a254:{c.instructions+=2;NFSU2_TR(0x69a254);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a257:{NFSU2_TR(0x69a257);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69a270;}}
}
B69a259:L69a259:{c.instructions+=2;NFSU2_TR(0x69a259);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a25c:{NFSU2_TR(0x69a25c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69a266;}}
}
B69a25e:L69a25e:{c.instructions+=3;NFSU2_TR(0x69a25e);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69a260:{NFSU2_TR(0x69a260);
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
B69a261:{NFSU2_TR(0x69a261);
{goto L69a34e;}
}
B69a266:L69a266:{c.instructions+=1;NFSU2_TR(0x69a266);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a270;}}
}
B69a268:L69a268:{c.instructions+=2;NFSU2_TR(0x69a268);
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
B69a26b:{NFSU2_TR(0x69a26b);
{goto L69a34e;}
}
B69a270:L69a270:{c.instructions+=19;NFSU2_TR(0x69a270);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a273:{NFSU2_TR(0x69a273);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a276:{NFSU2_TR(0x69a276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69a278:{NFSU2_TR(0x69a278);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a27b:{NFSU2_TR(0x69a27b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69a27e:{NFSU2_TR(0x69a27e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a281:{NFSU2_TR(0x69a281);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a284:{NFSU2_TR(0x69a284);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69a286:{NFSU2_TR(0x69a286);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69a289:{NFSU2_TR(0x69a289);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a28c:{NFSU2_TR(0x69a28c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69a28f:{NFSU2_TR(0x69a28f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a292:{NFSU2_TR(0x69a292);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a296:{NFSU2_TR(0x69a296);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a29a:{NFSU2_TR(0x69a29a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a29d:{NFSU2_TR(0x69a29d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a2a0:{NFSU2_TR(0x69a2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a2a3:{NFSU2_TR(0x69a2a3);
__builtin_memmove((R+0),(R+8),4);
}
B69a2a5:{NFSU2_TR(0x69a2a5);
if(r1(R+518)){{goto L69a2b8;}}
}
B69a2a7:L69a2a7:{c.instructions+=6;NFSU2_TR(0x69a2a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a2aa:{NFSU2_TR(0x69a2aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a2ad:{NFSU2_TR(0x69a2ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a2b0:{NFSU2_TR(0x69a2b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a2b3:{NFSU2_TR(0x69a2b3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a2b6:{NFSU2_TR(0x69a2b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a2a7u);}goto L69a2a7;}}
}
B69a2b8:L69a2b8:{c.instructions+=3;NFSU2_TR(0x69a2b8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a2bb:{NFSU2_TR(0x69a2bb);
__builtin_memmove((R+0),(R+4),4);
}
B69a2bd:{NFSU2_TR(0x69a2bd);
if(r1(R+518)){{goto L69a2d0;}}
}
B69a2bf:L69a2bf:{c.instructions+=6;NFSU2_TR(0x69a2bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a2c2:{NFSU2_TR(0x69a2c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a2c5:{NFSU2_TR(0x69a2c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a2c8:{NFSU2_TR(0x69a2c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a2cb:{NFSU2_TR(0x69a2cb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a2ce:{NFSU2_TR(0x69a2ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a2bfu);}goto L69a2bf;}}
}
B69a2d0:L69a2d0:{c.instructions+=3;NFSU2_TR(0x69a2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a2d3:{NFSU2_TR(0x69a2d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a2d6:{NFSU2_TR(0x69a2d6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a2ed;}}
}
B69a2d8:L69a2d8:{c.instructions+=2;NFSU2_TR(0x69a2d8);
__builtin_memmove((R+0),(R+12),4);
}
B69a2da:{NFSU2_TR(0x69a2da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B69a2dd:L69a2dd:{c.instructions+=7;NFSU2_TR(0x69a2dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69a2e0:{NFSU2_TR(0x69a2e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69a2e3:{NFSU2_TR(0x69a2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69a2e6:{NFSU2_TR(0x69a2e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a2e9:{NFSU2_TR(0x69a2e9);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B69a2ea:{NFSU2_TR(0x69a2ea);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B69a2eb:{NFSU2_TR(0x69a2eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a2ddu);}goto L69a2dd;}}
}
B69a2ed:L69a2ed:{c.instructions+=3;NFSU2_TR(0x69a2ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a2f0:{NFSU2_TR(0x69a2f0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a2f2:{NFSU2_TR(0x69a2f2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a309;}}
}
B69a2f4:L69a2f4:{c.instructions+=2;NFSU2_TR(0x69a2f4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B69a2f6:{NFSU2_TR(0x69a2f6);
__builtin_memmove((R+12),(R+0),4);
}
B69a2f8:L69a2f8:{c.instructions+=6;NFSU2_TR(0x69a2f8);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B69a2f9:{NFSU2_TR(0x69a2f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a2fc:{NFSU2_TR(0x69a2fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69a2ff:{NFSU2_TR(0x69a2ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a302:{NFSU2_TR(0x69a302);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a305:{NFSU2_TR(0x69a305);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a2f8u);}goto L69a2f8;}}
}
B69a307:L69a307:{c.instructions+=1;NFSU2_TR(0x69a307);
{goto L69a30c;}
}
B69a309:L69a309:{c.instructions+=1;NFSU2_TR(0x69a309);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a30c:L69a30c:{c.instructions+=2;NFSU2_TR(0x69a30c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a30e:{NFSU2_TR(0x69a30e);
if(r1(R+518)){{goto L69a329;}}
}
B69a310:L69a310:{c.instructions+=1;NFSU2_TR(0x69a310);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69a313:L69a313:{c.instructions+=8;NFSU2_TR(0x69a313);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69a316:{NFSU2_TR(0x69a316);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69a319:{NFSU2_TR(0x69a319);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69a31c:{NFSU2_TR(0x69a31c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a31f:{NFSU2_TR(0x69a31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a322:{NFSU2_TR(0x69a322);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a325:{NFSU2_TR(0x69a325);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a327:{NFSU2_TR(0x69a327);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a313u);}goto L69a313;}}
}
B69a329:L69a329:{c.instructions+=2;NFSU2_TR(0x69a329);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69a32b:{NFSU2_TR(0x69a32b);
if(r1(R+518)){{goto L69a336;}}
}
B69a32d:L69a32d:{c.instructions+=2;NFSU2_TR(0x69a32d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69a32f:{NFSU2_TR(0x69a32f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69a33e;}}
}
B69a331:L69a331:{c.instructions+=1;NFSU2_TR(0x69a331);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a268u);}goto L69a268;}
}
B69a336:L69a336:{c.instructions+=2;NFSU2_TR(0x69a336);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69a338:{NFSU2_TR(0x69a338);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a25eu);}goto L69a25e;}}
}
B69a33e:L69a33e:{c.instructions+=3;NFSU2_TR(0x69a33e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a341:{NFSU2_TR(0x69a341);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a344:{NFSU2_TR(0x69a344);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a268u);}goto L69a268;}}
}
B69a34a:L69a34a:{c.instructions+=2;NFSU2_TR(0x69a34a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B69a34c:{NFSU2_TR(0x69a34c);
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
B69a34e:L69a34e:{c.instructions+=5;NFSU2_TR(0x69a34e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69a34f:{NFSU2_TR(0x69a34f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69a350:{NFSU2_TR(0x69a350);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69a351:{NFSU2_TR(0x69a351);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69a352:{NFSU2_TR(0x69a352);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a355:L69a355:{c.instructions+=11;NFSU2_TR(0x69a355);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a35b:{NFSU2_TR(0x69a35b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a35e:{NFSU2_TR(0x69a35e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B69a361:{NFSU2_TR(0x69a361);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B69a364:{NFSU2_TR(0x69a364);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B69a367:{NFSU2_TR(0x69a367);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69a36a:{NFSU2_TR(0x69a36a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a36d:{NFSU2_TR(0x69a36d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a36e:{NFSU2_TR(0x69a36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69a371:{NFSU2_TR(0x69a371);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a373:{NFSU2_TR(0x69a373);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69a37a;}}
}
B69a375:L69a375:{c.instructions+=3;NFSU2_TR(0x69a375);
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
B69a378:{NFSU2_TR(0x69a378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69a379:{NFSU2_TR(0x69a379);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a37a:L69a37a:{c.instructions+=1;NFSU2_TR(0x69a37a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a381;}}
}
B69a37c:L69a37c:{c.instructions+=4;NFSU2_TR(0x69a37c);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69a37e:{NFSU2_TR(0x69a37e);
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
B69a37f:{NFSU2_TR(0x69a37f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69a380:{NFSU2_TR(0x69a380);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a381:L69a381:{c.instructions+=4;NFSU2_TR(0x69a381);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a384:{NFSU2_TR(0x69a384);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a387:{NFSU2_TR(0x69a387);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B69a389:{NFSU2_TR(0x69a389);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a375u);}goto L69a375;}}
}
B69a38b:L69a38b:{c.instructions+=6;NFSU2_TR(0x69a38b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69a38d:{NFSU2_TR(0x69a38d);
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
B69a38f:{NFSU2_TR(0x69a38f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+8),(U+2),1);
}
B69a392:{NFSU2_TR(0x69a392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69a393:{NFSU2_TR(0x69a393);
__builtin_memmove((R+0),(R+8),4);
}
B69a395:{NFSU2_TR(0x69a395);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a396:L69a396:{c.instructions+=16;NFSU2_TR(0x69a396);
__builtin_memmove((R+28),(R+28),4);
}
B69a398:{NFSU2_TR(0x69a398);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a399:{NFSU2_TR(0x69a399);
__builtin_memmove((R+20),(R+16),4);
}
B69a39b:{NFSU2_TR(0x69a39b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a39e:{NFSU2_TR(0x69a39e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a3a4:{NFSU2_TR(0x69a3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a3a7:{NFSU2_TR(0x69a3a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a3aa:{NFSU2_TR(0x69a3aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B69a3ad:{NFSU2_TR(0x69a3ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B69a3b0:{NFSU2_TR(0x69a3b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a3b3:{NFSU2_TR(0x69a3b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69a3b5:{NFSU2_TR(0x69a3b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B69a3b8:{NFSU2_TR(0x69a3b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69a3bb:{NFSU2_TR(0x69a3bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69a3bd:{NFSU2_TR(0x69a3bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a3bf:{NFSU2_TR(0x69a3bf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a3c6;}}
}
B69a3c1:L69a3c1:{c.instructions+=2;NFSU2_TR(0x69a3c1);
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
B69a3c4:{NFSU2_TR(0x69a3c4);
{goto L69a3ca;}
}
B69a3c6:L69a3c6:{c.instructions+=2;NFSU2_TR(0x69a3c6);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B69a3c8:{NFSU2_TR(0x69a3c8);
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
B69a3ca:L69a3ca:{c.instructions+=2;NFSU2_TR(0x69a3ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69a3cb:{NFSU2_TR(0x69a3cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a3ce:L69a3ce:{c.instructions+=7;NFSU2_TR(0x69a3ce);
__builtin_memmove((R+28),(R+28),4);
}
B69a3d0:{NFSU2_TR(0x69a3d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a3d1:{NFSU2_TR(0x69a3d1);
__builtin_memmove((R+20),(R+16),4);
}
B69a3d3:{NFSU2_TR(0x69a3d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a3d6:{NFSU2_TR(0x69a3d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a3d9:{NFSU2_TR(0x69a3d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a3dc:{NFSU2_TR(0x69a3dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69a3e1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a355u);}goto L69a355;}
}
B69a3e1:L69a3e1:{c.instructions+=2;NFSU2_TR(0x69a3e1);
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
B69a3e3:{NFSU2_TR(0x69a3e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69a3eb;}}
}
B69a3e5:L69a3e5:{c.instructions+=2;NFSU2_TR(0x69a3e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69a3e6:{NFSU2_TR(0x69a3e6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a396u);}goto L69a396;}
}
B69a3eb:L69a3eb:{c.instructions+=2;NFSU2_TR(0x69a3eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69a3ec:{NFSU2_TR(0x69a3ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a3ef:L69a3ef:{c.instructions+=13;NFSU2_TR(0x69a3ef);
__builtin_memmove((R+28),(R+28),4);
}
B69a3f1:{NFSU2_TR(0x69a3f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a3f2:{NFSU2_TR(0x69a3f2);
__builtin_memmove((R+20),(R+16),4);
}
B69a3f4:{NFSU2_TR(0x69a3f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a3f7:{NFSU2_TR(0x69a3f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a3fa:{NFSU2_TR(0x69a3fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a3fd:{NFSU2_TR(0x69a3fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69a400:{NFSU2_TR(0x69a400);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a403:{NFSU2_TR(0x69a403);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a406:{NFSU2_TR(0x69a406);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a409:{NFSU2_TR(0x69a409);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a40c:{NFSU2_TR(0x69a40c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a40e:{NFSU2_TR(0x69a40e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a415;}}
}
B69a410:L69a410:{c.instructions+=2;NFSU2_TR(0x69a410);
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
B69a413:{NFSU2_TR(0x69a413);
{goto L69a419;}
}
B69a415:L69a415:{c.instructions+=2;NFSU2_TR(0x69a415);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B69a417:{NFSU2_TR(0x69a417);
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
B69a419:L69a419:{c.instructions+=2;NFSU2_TR(0x69a419);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69a41a:{NFSU2_TR(0x69a41a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a41d:L69a41d:{c.instructions+=8;NFSU2_TR(0x69a41d);
__builtin_memmove((R+28),(R+28),4);
}
B69a41f:{NFSU2_TR(0x69a41f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a420:{NFSU2_TR(0x69a420);
__builtin_memmove((R+20),(R+16),4);
}
B69a422:{NFSU2_TR(0x69a422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B69a425:{NFSU2_TR(0x69a425);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a426:{NFSU2_TR(0x69a426);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a429:{NFSU2_TR(0x69a429);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B69a42c:{NFSU2_TR(0x69a42c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a52f;}}
}
B69a432:L69a432:{c.instructions+=5;NFSU2_TR(0x69a432);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+0))!=(u32(0x0ull))));
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B69a434:{NFSU2_TR(0x69a434);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a435:{NFSU2_TR(0x69a435);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69a438:{NFSU2_TR(0x69a438);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a439:{NFSU2_TR(0x69a439);
if(r1(R+518)){{goto L69a528;}}
}
B69a43f:L69a43f:{c.instructions+=2;NFSU2_TR(0x69a43f);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B69a443:{NFSU2_TR(0x69a443);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a446:L69a446:{c.instructions+=9;NFSU2_TR(0x69a446);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69a449:{NFSU2_TR(0x69a449);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B69a44a:{NFSU2_TR(0x69a44a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a44d:{NFSU2_TR(0x69a44d);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B69a44e:{NFSU2_TR(0x69a44e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B69a44f:{NFSU2_TR(0x69a44f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a452:{NFSU2_TR(0x69a452);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a455:{NFSU2_TR(0x69a455);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a458:{NFSU2_TR(0x69a458);
{goto L69a4a7;}
}
B69a45a:L69a45a:{c.instructions+=6;NFSU2_TR(0x69a45a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69a45d:{NFSU2_TR(0x69a45d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69a460:{NFSU2_TR(0x69a460);
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
B69a463:{NFSU2_TR(0x69a463);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a466:{NFSU2_TR(0x69a466);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a469:{NFSU2_TR(0x69a469);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69a487;}}
}
B69a46b:L69a46b:{c.instructions+=6;NFSU2_TR(0x69a46b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69a46e:{NFSU2_TR(0x69a46e);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B69a472:{NFSU2_TR(0x69a472);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a473:{NFSU2_TR(0x69a473);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a474:{NFSU2_TR(0x69a474);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a477:{NFSU2_TR(0x69a477);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69a47aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B69a47a:L69a47a:{c.instructions+=2;NFSU2_TR(0x69a47a);
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
B69a47c:{NFSU2_TR(0x69a47c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L69a487;}}
}
B69a47e:L69a47e:{c.instructions+=3;NFSU2_TR(0x69a47e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a481:{NFSU2_TR(0x69a481);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69a484:{NFSU2_TR(0x69a484);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a487:L69a487:{c.instructions+=4;NFSU2_TR(0x69a487);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69a48a:{NFSU2_TR(0x69a48a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69a48d:{NFSU2_TR(0x69a48d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69a490:{NFSU2_TR(0x69a490);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69a493ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B69a493:L69a493:{c.instructions+=2;NFSU2_TR(0x69a493);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69a495:{NFSU2_TR(0x69a495);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L69a4ac;}}
}
B69a497:L69a497:{c.instructions+=5;NFSU2_TR(0x69a497);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a49a:{NFSU2_TR(0x69a49a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a49d:{NFSU2_TR(0x69a49d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a4a0:{NFSU2_TR(0x69a4a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69a4a3:{NFSU2_TR(0x69a4a3);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B69a4a7:L69a4a7:{c.instructions+=2;NFSU2_TR(0x69a4a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69a4aa:{NFSU2_TR(0x69a4aa);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a45au);}goto L69a45a;}}
}
B69a4ac:L69a4ac:{c.instructions+=5;NFSU2_TR(0x69a4ac);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69a4ae:{NFSU2_TR(0x69a4ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a4b1:{NFSU2_TR(0x69a4b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a4b4:{NFSU2_TR(0x69a4b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69a4b7:{NFSU2_TR(0x69a4b7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a446u);}goto L69a446;}}
}
B69a4b9:L69a4b9:{c.instructions+=1;NFSU2_TR(0x69a4b9);
{goto L69a528;}
}
B69a4bb:L69a4bb:{c.instructions+=11;NFSU2_TR(0x69a4bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a4be:{NFSU2_TR(0x69a4be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a4c2:{NFSU2_TR(0x69a4c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69a4c5:{NFSU2_TR(0x69a4c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69a4c7:{NFSU2_TR(0x69a4c7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69a4c9:{NFSU2_TR(0x69a4c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a4cc:{NFSU2_TR(0x69a4cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69a4ce:{NFSU2_TR(0x69a4ce);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69a4cf:{NFSU2_TR(0x69a4cf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a4d1:{NFSU2_TR(0x69a4d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B69a4d3:{NFSU2_TR(0x69a4d3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a51f;}}
}
B69a4d5:L69a4d5:{c.instructions+=5;NFSU2_TR(0x69a4d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69a4d8:{NFSU2_TR(0x69a4d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69a4db:{NFSU2_TR(0x69a4db);
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
B69a4de:{NFSU2_TR(0x69a4de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a4e1:{NFSU2_TR(0x69a4e1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69a4fc;}}
}
B69a4e3:L69a4e3:{c.instructions+=6;NFSU2_TR(0x69a4e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69a4e6:{NFSU2_TR(0x69a4e6);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B69a4ea:{NFSU2_TR(0x69a4ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a4eb:{NFSU2_TR(0x69a4eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a4ec:{NFSU2_TR(0x69a4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a4ef:{NFSU2_TR(0x69a4ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69a4f2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B69a4f2:L69a4f2:{c.instructions+=2;NFSU2_TR(0x69a4f2);
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
B69a4f4:{NFSU2_TR(0x69a4f4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L69a4fc;}}
}
B69a4f6:L69a4f6:{c.instructions+=2;NFSU2_TR(0x69a4f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69a4f9:{NFSU2_TR(0x69a4f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a4fc:L69a4fc:{c.instructions+=4;NFSU2_TR(0x69a4fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69a4ff:{NFSU2_TR(0x69a4ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69a502:{NFSU2_TR(0x69a502);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a503:{NFSU2_TR(0x69a503);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69a506ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B69a506:L69a506:{c.instructions+=2;NFSU2_TR(0x69a506);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69a508:{NFSU2_TR(0x69a508);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L69a51f;}}
}
B69a50a:L69a50a:{c.instructions+=7;NFSU2_TR(0x69a50a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a50d:{NFSU2_TR(0x69a50d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a510:{NFSU2_TR(0x69a510);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a513:{NFSU2_TR(0x69a513);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B69a517:{NFSU2_TR(0x69a517);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69a51a:{NFSU2_TR(0x69a51a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69a51d:{NFSU2_TR(0x69a51d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a4d5u);}goto L69a4d5;}}
}
B69a51f:L69a51f:{c.instructions+=3;NFSU2_TR(0x69a51f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a522:{NFSU2_TR(0x69a522);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a525:{NFSU2_TR(0x69a525);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69a528:L69a528:{c.instructions+=2;NFSU2_TR(0x69a528);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B69a52b:{NFSU2_TR(0x69a52b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a4bbu);}goto L69a4bb;}}
}
B69a52d:L69a52d:{c.instructions+=2;NFSU2_TR(0x69a52d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69a52e:{NFSU2_TR(0x69a52e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69a52f:L69a52f:{c.instructions+=3;NFSU2_TR(0x69a52f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69a530:{NFSU2_TR(0x69a530);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69a531:{NFSU2_TR(0x69a531);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a534:L69a534:{c.instructions+=4;NFSU2_TR(0x69a534);
__builtin_memmove((R+28),(R+28),4);
}
B69a536:{NFSU2_TR(0x69a536);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a537:{NFSU2_TR(0x69a537);
__builtin_memmove((R+24),(R+4),4);
}
B69a539:{NFSU2_TR(0x69a539);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69a53eull));
TAIL_STATIC(0x6998c1u,699);
}
B69a53e:L69a53e:{c.instructions+=31;NFSU2_TR(0x69a53e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69a540:{NFSU2_TR(0x69a540);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a546:{NFSU2_TR(0x69a546);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a54c:{NFSU2_TR(0x69a54c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a552:{NFSU2_TR(0x69a552);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a558:{NFSU2_TR(0x69a558);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a55e:{NFSU2_TR(0x69a55e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a564:{NFSU2_TR(0x69a564);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a56a:{NFSU2_TR(0x69a56a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a570:{NFSU2_TR(0x69a570);
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
B69a573:{NFSU2_TR(0x69a573);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a576:{NFSU2_TR(0x69a576);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a579:{NFSU2_TR(0x69a579);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a57c:{NFSU2_TR(0x69a57c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a582:{NFSU2_TR(0x69a582);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a588:{NFSU2_TR(0x69a588);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a58e:{NFSU2_TR(0x69a58e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a594:{NFSU2_TR(0x69a594);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a59a:{NFSU2_TR(0x69a59a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a5a0:{NFSU2_TR(0x69a5a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a5a6:{NFSU2_TR(0x69a5a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a5ac:{NFSU2_TR(0x69a5ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a5b2:{NFSU2_TR(0x69a5b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a5b8:{NFSU2_TR(0x69a5b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a5be:{NFSU2_TR(0x69a5be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a5c4:{NFSU2_TR(0x69a5c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a5ca:{NFSU2_TR(0x69a5ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a5d0:{NFSU2_TR(0x69a5d0);
u8 U[4];
w4(U+0,u32(0x7bac0cull));
s4(u32(r4(R+24)),r4(U+0));
}
B69a5d6:{NFSU2_TR(0x69a5d6);
__builtin_memmove((R+0),(R+24),4);
}
B69a5d8:{NFSU2_TR(0x69a5d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69a5d9:{NFSU2_TR(0x69a5d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a5da:L69a5da:{c.instructions+=6;NFSU2_TR(0x69a5da);
__builtin_memmove((R+28),(R+28),4);
}
B69a5dc:{NFSU2_TR(0x69a5dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a5dd:{NFSU2_TR(0x69a5dd);
__builtin_memmove((R+24),(R+4),4);
}
B69a5df:{NFSU2_TR(0x69a5df);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69a5e5:{NFSU2_TR(0x69a5e5);
u8 U[4];
w4(U+0,u32(0x7bac0cull));
s4(u32(r4(R+24)),r4(U+0));
}
B69a5eb:{NFSU2_TR(0x69a5eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69a5f0ull));
TAIL_STATIC(0x575630u,575);
}
B69a5f0:L69a5f0:{c.instructions+=4;NFSU2_TR(0x69a5f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69a5f1:{NFSU2_TR(0x69a5f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a5f7:{NFSU2_TR(0x69a5f7);
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
B69a5f9:{NFSU2_TR(0x69a5f9);
if(r1(R+518)){{goto L69a601;}}
}
B69a5fb:L69a5fb:{c.instructions+=3;NFSU2_TR(0x69a5fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69a5fd:{NFSU2_TR(0x69a5fd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a5ff:{NFSU2_TR(0x69a5ff);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69a601ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B69a601:L69a601:{c.instructions+=3;NFSU2_TR(0x69a601);
__builtin_memmove((R+4),(R+24),4);
}
B69a603:{NFSU2_TR(0x69a603);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69a604:{NFSU2_TR(0x69a604);
TAIL_STATIC(0x699e06u,699);
}
B69a609:L69a609:{c.instructions+=10;NFSU2_TR(0x69a609);
__builtin_memmove((R+28),(R+28),4);
}
B69a60b:{NFSU2_TR(0x69a60b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a60c:{NFSU2_TR(0x69a60c);
__builtin_memmove((R+20),(R+16),4);
}
B69a60e:{NFSU2_TR(0x69a60e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a60f:{NFSU2_TR(0x69a60f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a610:{NFSU2_TR(0x69a610);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69a612:{NFSU2_TR(0x69a612);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a615:{NFSU2_TR(0x69a615);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a616:{NFSU2_TR(0x69a616);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a619:{NFSU2_TR(0x69a619);
if(r1(R+518)){{goto L69a658;}}
}
B69a61b:L69a61b:{c.instructions+=2;NFSU2_TR(0x69a61b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a61e:{NFSU2_TR(0x69a61e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B69a621:L69a621:{c.instructions+=4;NFSU2_TR(0x69a621);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B69a623:{NFSU2_TR(0x69a623);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69a624:{NFSU2_TR(0x69a624);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69a626:{NFSU2_TR(0x69a626);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a621u);}goto L69a621;}}
}
B69a628:L69a628:{c.instructions+=4;NFSU2_TR(0x69a628);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B69a62a:{NFSU2_TR(0x69a62a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69a62d:{NFSU2_TR(0x69a62d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a62e:{NFSU2_TR(0x69a62e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69a633ull));
TAIL_STATIC(0x575620u,575);
}
B69a633:L69a633:{c.instructions+=4;NFSU2_TR(0x69a633);
__builtin_memmove((R+12),(R+0),4);
}
B69a635:{NFSU2_TR(0x69a635);
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
B69a637:{NFSU2_TR(0x69a637);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69a638:{NFSU2_TR(0x69a638);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69a641;}}
}
B69a63a:L69a63a:{c.instructions+=2;NFSU2_TR(0x69a63a);
w4(R+0,u32(0x8007000eull));
}
B69a63f:{NFSU2_TR(0x69a63f);
{goto L69a66d;}
}
B69a641:L69a641:{c.instructions+=6;NFSU2_TR(0x69a641);
__builtin_memmove((R+4),(R+24),4);
}
B69a643:{NFSU2_TR(0x69a643);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69a646:{NFSU2_TR(0x69a646);
__builtin_memmove((R+0),(R+4),4);
}
B69a648:{NFSU2_TR(0x69a648);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a649:{NFSU2_TR(0x69a649);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B69a64c:{NFSU2_TR(0x69a64c);
__builtin_memmove((R+28),(R+12),4);
}
B69a64e:L69a64e:{c.instructions+=1;NFSU2_TR(0x69a64e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L69a650;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a64eu);}goto L69a64e;}
}
B69a650:L69a650:{c.instructions+=2;NFSU2_TR(0x69a650);
__builtin_memmove((R+4),(R+0),4);
}
B69a652:{NFSU2_TR(0x69a652);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B69a655:L69a655:{c.instructions+=1;NFSU2_TR(0x69a655);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L69a657;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a655u);}goto L69a655;}
}
B69a657:L69a657:{c.instructions+=1;NFSU2_TR(0x69a657);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69a658:L69a658:{c.instructions+=4;NFSU2_TR(0x69a658);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69a65b:{NFSU2_TR(0x69a65b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
}
B69a661:{NFSU2_TR(0x69a661);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B69a663:{NFSU2_TR(0x69a663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69a668ull));
TAIL_STATIC(0x575630u,575);
}
B69a668:L69a668:{c.instructions+=3;NFSU2_TR(0x69a668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69a669:{NFSU2_TR(0x69a669);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B69a66b:{NFSU2_TR(0x69a66b);
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
B69a66d:L69a66d:{c.instructions+=4;NFSU2_TR(0x69a66d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69a66e:{NFSU2_TR(0x69a66e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69a66f:{NFSU2_TR(0x69a66f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69a670:{NFSU2_TR(0x69a670);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a673:L69a673:{c.instructions+=10;NFSU2_TR(0x69a673);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a677:{NFSU2_TR(0x69a677);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffcull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a67b:{NFSU2_TR(0x69a67b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x2ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B69a67f:{NFSU2_TR(0x69a67f);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a681:{NFSU2_TR(0x69a681);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69a682:{NFSU2_TR(0x69a682);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a685:{NFSU2_TR(0x69a685);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a688:{NFSU2_TR(0x69a688);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x2000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69a68f:{NFSU2_TR(0x69a68f);
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
B69a691:{NFSU2_TR(0x69a691);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a692:L69a692:{c.instructions+=3;NFSU2_TR(0x69a692);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69a694:{NFSU2_TR(0x69a694);
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
B69a695:{NFSU2_TR(0x69a695);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a696:L69a696:{c.instructions+=6;NFSU2_TR(0x69a696);
__builtin_memmove((R+28),(R+28),4);
}
B69a698:{NFSU2_TR(0x69a698);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a699:{NFSU2_TR(0x69a699);
__builtin_memmove((R+20),(R+16),4);
}
B69a69b:{NFSU2_TR(0x69a69b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a69f:{NFSU2_TR(0x69a69f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a6a0:{NFSU2_TR(0x69a6a0);
if(r1(R+518)){{goto L69a6cc;}}
}
B69a6a2:L69a6a2:{c.instructions+=11;NFSU2_TR(0x69a6a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a6a5:{NFSU2_TR(0x69a6a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a6a8:{NFSU2_TR(0x69a6a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a6ab:{NFSU2_TR(0x69a6ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a6ac:{NFSU2_TR(0x69a6ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69a6af:{NFSU2_TR(0x69a6af);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69a6b2:{NFSU2_TR(0x69a6b2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B69a6b4:{NFSU2_TR(0x69a6b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a6b8:{NFSU2_TR(0x69a6b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a6bb:{NFSU2_TR(0x69a6bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69a6bc:{NFSU2_TR(0x69a6bc);
if(r1(R+518)){{goto L69a6c6;}}
}
B69a6be:L69a6be:{c.instructions+=2;NFSU2_TR(0x69a6be);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a6c0:{NFSU2_TR(0x69a6c0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a6df;}}
}
B69a6c2:L69a6c2:{c.instructions+=2;NFSU2_TR(0x69a6c2);
__builtin_memmove((R+0),(R+24),4);
}
B69a6c4:{NFSU2_TR(0x69a6c4);
{goto L69a6df;}
}
B69a6c6:L69a6c6:{c.instructions+=2;NFSU2_TR(0x69a6c6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a6c8:{NFSU2_TR(0x69a6c8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69a6df;}}
}
B69a6ca:L69a6ca:{c.instructions+=1;NFSU2_TR(0x69a6ca);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a6c2u);}goto L69a6c2;}
}
B69a6cc:L69a6cc:{c.instructions+=6;NFSU2_TR(0x69a6cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a6cf:{NFSU2_TR(0x69a6cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a6d2:{NFSU2_TR(0x69a6d2);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B69a6d6:{NFSU2_TR(0x69a6d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B69a6d9:{NFSU2_TR(0x69a6d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a6dc:{NFSU2_TR(0x69a6dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a6df:L69a6df:{c.instructions+=3;NFSU2_TR(0x69a6df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a6e2:{NFSU2_TR(0x69a6e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69a6e3:{NFSU2_TR(0x69a6e3);
{goto L69a6e7;}
}
B69a6e5:L69a6e5:{c.instructions+=1;NFSU2_TR(0x69a6e5);
__builtin_memmove((R+0),(R+8),4);
}
B69a6e7:L69a6e7:{c.instructions+=4;NFSU2_TR(0x69a6e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69a6ea:{NFSU2_TR(0x69a6ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a6ed:{NFSU2_TR(0x69a6ed);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B69a6ef:{NFSU2_TR(0x69a6ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a6e5u);}goto L69a6e5;}}
}
B69a6f1:L69a6f1:{c.instructions+=2;NFSU2_TR(0x69a6f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69a6f2:{NFSU2_TR(0x69a6f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a6f5:L69a6f5:{c.instructions+=2;NFSU2_TR(0x69a6f5);
w4(R+0,u32(0x80004001ull));
}
B69a6fa:{NFSU2_TR(0x69a6fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a6fb:L69a6fb:{c.instructions+=8;NFSU2_TR(0x69a6fb);
__builtin_memmove((R+28),(R+28),4);
}
B69a6fd:{NFSU2_TR(0x69a6fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a6fe:{NFSU2_TR(0x69a6fe);
__builtin_memmove((R+20),(R+16),4);
}
B69a700:{NFSU2_TR(0x69a700);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B69a704:{NFSU2_TR(0x69a704);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a705:{NFSU2_TR(0x69a705);
__builtin_memmove((R+24),(R+4),4);
}
B69a707:{NFSU2_TR(0x69a707);
u8 U[4];
w4(U+0,u32(0x7bac2cull));
s4(u32(r4(R+24)),r4(U+0));
}
B69a70d:{NFSU2_TR(0x69a70d);
if(r1(R+518)){{goto L69a716;}}
}
B69a70f:L69a70f:{c.instructions+=2;NFSU2_TR(0x69a70f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a710:{NFSU2_TR(0x69a710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69a715ull));
TAIL_STATIC(0x575630u,575);
}
B69a715:L69a715:{c.instructions+=1;NFSU2_TR(0x69a715);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69a716:L69a716:{c.instructions+=4;NFSU2_TR(0x69a716);
__builtin_memmove((R+0),(R+24),4);
}
B69a718:{NFSU2_TR(0x69a718);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69a719:{NFSU2_TR(0x69a719);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69a71a:{NFSU2_TR(0x69a71a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a71d:L69a71d:{c.instructions+=10;NFSU2_TR(0x69a71d);
__builtin_memmove((R+28),(R+28),4);
}
B69a71f:{NFSU2_TR(0x69a71f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a720:{NFSU2_TR(0x69a720);
__builtin_memmove((R+20),(R+16),4);
}
B69a722:{NFSU2_TR(0x69a722);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a725:{NFSU2_TR(0x69a725);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a728:{NFSU2_TR(0x69a728);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a72b:{NFSU2_TR(0x69a72b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a72e:{NFSU2_TR(0x69a72e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69a730:{NFSU2_TR(0x69a730);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B69a733:{NFSU2_TR(0x69a733);
if(r1(R+518)){{goto L69a74a;}}
}
B69a735:L69a735:{c.instructions+=5;NFSU2_TR(0x69a735);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a738:{NFSU2_TR(0x69a738);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a73b:{NFSU2_TR(0x69a73b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B69a73c:{NFSU2_TR(0x69a73c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a73f:{NFSU2_TR(0x69a73f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a735u);}goto L69a735;}}
}
B69a741:L69a741:{c.instructions+=3;NFSU2_TR(0x69a741);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a744:{NFSU2_TR(0x69a744);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+8)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B69a746:{NFSU2_TR(0x69a746);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69a74a;}}
}
B69a748:L69a748:{c.instructions+=1;NFSU2_TR(0x69a748);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B69a74a:L69a74a:{c.instructions+=2;NFSU2_TR(0x69a74a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69a74b:{NFSU2_TR(0x69a74b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a74e:L69a74e:{c.instructions+=9;NFSU2_TR(0x69a74e);
__builtin_memmove((R+28),(R+28),4);
}
B69a750:{NFSU2_TR(0x69a750);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a751:{NFSU2_TR(0x69a751);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a752:{NFSU2_TR(0x69a752);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a753:{NFSU2_TR(0x69a753);
__builtin_memmove((R+24),(R+4),4);
}
B69a755:{NFSU2_TR(0x69a755);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69a757:{NFSU2_TR(0x69a757);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69a759:{NFSU2_TR(0x69a759);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a75c:{NFSU2_TR(0x69a75c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a77f;}}
}
B69a75e:L69a75e:{c.instructions+=4;NFSU2_TR(0x69a75e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a761:{NFSU2_TR(0x69a761);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69a764:{NFSU2_TR(0x69a764);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+10,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+519,u8(s16(r2(U+10))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+10))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+10))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B69a76a:{NFSU2_TR(0x69a76a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69a775;}}
}
B69a76c:L69a76c:{c.instructions+=2;NFSU2_TR(0x69a76c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a76e:{NFSU2_TR(0x69a76e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69a773ull));
TAIL_STATIC(0x6739efu,673);
}
B69a773:L69a773:{c.instructions+=1;NFSU2_TR(0x69a773);
{goto L69a779;}
}
B69a775:L69a775:{c.instructions+=2;NFSU2_TR(0x69a775);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69a778:{NFSU2_TR(0x69a778);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B69a779:L69a779:{c.instructions+=3;NFSU2_TR(0x69a779);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69a77a:{NFSU2_TR(0x69a77a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69a77d:{NFSU2_TR(0x69a77d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a75eu);}goto L69a75e;}}
}
B69a77f:L69a77f:{c.instructions+=4;NFSU2_TR(0x69a77f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a782:{NFSU2_TR(0x69a782);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69a784:{NFSU2_TR(0x69a784);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a786:{NFSU2_TR(0x69a786);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69a78b;}}
}
B69a788:L69a788:{c.instructions+=2;NFSU2_TR(0x69a788);
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
B69a789:{NFSU2_TR(0x69a789);
{goto L69a7a9;}
}
B69a78b:L69a78b:{c.instructions+=6;NFSU2_TR(0x69a78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a78e:{NFSU2_TR(0x69a78e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B69a790:{NFSU2_TR(0x69a790);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69a793:{NFSU2_TR(0x69a793);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B69a796:{NFSU2_TR(0x69a796);
__builtin_memmove((R+8),(R+4),4);
}
B69a798:{NFSU2_TR(0x69a798);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B69a79b:L69a79b:{c.instructions+=1;NFSU2_TR(0x69a79b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L69a79d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a79bu);}goto L69a79b;}
}
B69a79d:L69a79d:{c.instructions+=2;NFSU2_TR(0x69a79d);
__builtin_memmove((R+4),(R+8),4);
}
B69a79f:{NFSU2_TR(0x69a79f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B69a7a2:L69a7a2:{c.instructions+=1;NFSU2_TR(0x69a7a2);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L69a7a4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a7a2u);}goto L69a7a2;}
}
B69a7a4:L69a7a4:{c.instructions+=2;NFSU2_TR(0x69a7a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a7a7:{NFSU2_TR(0x69a7a7);
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
B69a7a9:L69a7a9:{c.instructions+=4;NFSU2_TR(0x69a7a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69a7aa:{NFSU2_TR(0x69a7aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69a7ab:{NFSU2_TR(0x69a7ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69a7ac:{NFSU2_TR(0x69a7ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a7ad:L69a7ad:{c.instructions+=6;NFSU2_TR(0x69a7ad);
__builtin_memmove((R+28),(R+28),4);
}
B69a7af:{NFSU2_TR(0x69a7af);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a7b0:{NFSU2_TR(0x69a7b0);
__builtin_memmove((R+20),(R+16),4);
}
B69a7b2:{NFSU2_TR(0x69a7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a7b5:{NFSU2_TR(0x69a7b5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a7b8:{NFSU2_TR(0x69a7b8);
if(r1(R+518)){{goto L69a7dd;}}
}
B69a7ba:L69a7ba:{c.instructions+=1;NFSU2_TR(0x69a7ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a7bd:L69a7bd:{c.instructions+=3;NFSU2_TR(0x69a7bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a7c0:{NFSU2_TR(0x69a7c0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B69a7c3:{NFSU2_TR(0x69a7c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69a7e1;}}
}
B69a7c5:L69a7c5:{c.instructions+=3;NFSU2_TR(0x69a7c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69a7c8:{NFSU2_TR(0x69a7c8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a7cb:{NFSU2_TR(0x69a7cb);
if(r1(R+518)){{goto L69a7d5;}}
}
B69a7cd:L69a7cd:{c.instructions+=3;NFSU2_TR(0x69a7cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69a7d0:{NFSU2_TR(0x69a7d0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B69a7d3:{NFSU2_TR(0x69a7d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69a7e1;}}
}
B69a7d5:L69a7d5:{c.instructions+=3;NFSU2_TR(0x69a7d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a7d8:{NFSU2_TR(0x69a7d8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a7db:{NFSU2_TR(0x69a7db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a7bdu);}goto L69a7bd;}}
}
B69a7dd:L69a7dd:{c.instructions+=2;NFSU2_TR(0x69a7dd);
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
B69a7df:{NFSU2_TR(0x69a7df);
{goto L69a7e4;}
}
B69a7e1:L69a7e1:{c.instructions+=2;NFSU2_TR(0x69a7e1);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69a7e3:{NFSU2_TR(0x69a7e3);
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
B69a7e4:L69a7e4:{c.instructions+=2;NFSU2_TR(0x69a7e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69a7e5:{NFSU2_TR(0x69a7e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a7e8:L69a7e8:{c.instructions+=11;NFSU2_TR(0x69a7e8);
__builtin_memmove((R+28),(R+28),4);
}
B69a7ea:{NFSU2_TR(0x69a7ea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a7eb:{NFSU2_TR(0x69a7eb);
__builtin_memmove((R+20),(R+16),4);
}
B69a7ed:{NFSU2_TR(0x69a7ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B69a7f0:{NFSU2_TR(0x69a7f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a7f1:{NFSU2_TR(0x69a7f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a7f2:{NFSU2_TR(0x69a7f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a7f3:{NFSU2_TR(0x69a7f3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69a7f5:{NFSU2_TR(0x69a7f5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69a7f7:{NFSU2_TR(0x69a7f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a7fa:{NFSU2_TR(0x69a7fa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a833;}}
}
B69a7fc:L69a7fc:{c.instructions+=8;NFSU2_TR(0x69a7fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a7ff:{NFSU2_TR(0x69a7ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a802:{NFSU2_TR(0x69a802);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a805:{NFSU2_TR(0x69a805);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69a808:{NFSU2_TR(0x69a808);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69a80b:{NFSU2_TR(0x69a80b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a80e:{NFSU2_TR(0x69a80e);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x30ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69a811:{NFSU2_TR(0x69a811);
if(r1(R+518)){{goto L69a81e;}}
}
B69a813:L69a813:{c.instructions+=2;NFSU2_TR(0x69a813);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69a816:{NFSU2_TR(0x69a816);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69a81e;}}
}
B69a818:L69a818:{c.instructions+=2;NFSU2_TR(0x69a818);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a81b:{NFSU2_TR(0x69a81b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a81e:L69a81e:{c.instructions+=2;NFSU2_TR(0x69a81e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69a822:{NFSU2_TR(0x69a822);
if(r1(R+518)){{goto L69a82d;}}
}
B69a824:L69a824:{c.instructions+=2;NFSU2_TR(0x69a824);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a82a:{NFSU2_TR(0x69a82a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a82d:L69a82d:{c.instructions+=3;NFSU2_TR(0x69a82d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69a82e:{NFSU2_TR(0x69a82e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69a831:{NFSU2_TR(0x69a831);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a7fcu);}goto L69a7fc;}}
}
B69a833:L69a833:{c.instructions+=3;NFSU2_TR(0x69a833);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a836:{NFSU2_TR(0x69a836);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a839:{NFSU2_TR(0x69a839);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a9f2;}}
}
B69a83f:L69a83f:{c.instructions+=1;NFSU2_TR(0x69a83f);
{goto L69a843;}
}
B69a841:L69a841:{c.instructions+=1;NFSU2_TR(0x69a841);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69a843:L69a843:{c.instructions+=6;NFSU2_TR(0x69a843);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a846:{NFSU2_TR(0x69a846);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a849:{NFSU2_TR(0x69a849);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69a84c:{NFSU2_TR(0x69a84c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69a84e:{NFSU2_TR(0x69a84e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69a854:{NFSU2_TR(0x69a854);
if(r1(R+518)){{goto L69a9e3;}}
}
B69a85a:L69a85a:{c.instructions+=3;NFSU2_TR(0x69a85a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a85d:{NFSU2_TR(0x69a85d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a860:{NFSU2_TR(0x69a860);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a883;}}
}
B69a862:L69a862:{c.instructions+=4;NFSU2_TR(0x69a862);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a865:{NFSU2_TR(0x69a865);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a868:{NFSU2_TR(0x69a868);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a86b:{NFSU2_TR(0x69a86b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a86e:L69a86e:{c.instructions+=4;NFSU2_TR(0x69a86e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B69a870:{NFSU2_TR(0x69a870);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69a873:{NFSU2_TR(0x69a873);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B69a876:{NFSU2_TR(0x69a876);
if(r1(R+518)){{goto L69a87b;}}
}
B69a878:L69a878:{c.instructions+=1;NFSU2_TR(0x69a878);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a87b:L69a87b:{c.instructions+=3;NFSU2_TR(0x69a87b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B69a87e:{NFSU2_TR(0x69a87e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a881:{NFSU2_TR(0x69a881);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a86eu);}goto L69a86e;}}
}
B69a883:L69a883:{c.instructions+=3;NFSU2_TR(0x69a883);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a886:{NFSU2_TR(0x69a886);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a889:{NFSU2_TR(0x69a889);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69a893;}}
}
B69a88b:L69a88b:{c.instructions+=2;NFSU2_TR(0x69a88b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B69a88e:{NFSU2_TR(0x69a88e);
{goto L69a9e3;}
}
B69a893:L69a893:{c.instructions+=1;NFSU2_TR(0x69a893);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69a984;}}
}
B69a899:L69a899:{c.instructions+=4;NFSU2_TR(0x69a899);
__builtin_memmove((R+0),(R+28),4);
}
B69a89b:{NFSU2_TR(0x69a89b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B69a8a0:{NFSU2_TR(0x69a8a0);
w1(R+512,u8((r4(R+0))<(u32(0x10000000ull))));
}
B69a8a5:{NFSU2_TR(0x69a8a5);
if(r1(R+512)){{goto L69a984;}}
}
B69a8ab:L69a8ab:{c.instructions+=2;NFSU2_TR(0x69a8ab);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x40000000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69a8b0:{NFSU2_TR(0x69a8b0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69a984;}}
}
B69a8b6:L69a8b6:{c.instructions+=9;NFSU2_TR(0x69a8b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a8b9:{NFSU2_TR(0x69a8b9);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B69a8bf:{NFSU2_TR(0x69a8bf);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69a8c1:{NFSU2_TR(0x69a8c1);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69a8c1);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69a8c1);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B69a8c3:{NFSU2_TR(0x69a8c3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69a8c5:{NFSU2_TR(0x69a8c5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a8c7:{NFSU2_TR(0x69a8c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a8ca:{NFSU2_TR(0x69a8ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a8cd:{NFSU2_TR(0x69a8cd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a91e;}}
}
B69a8cf:L69a8cf:{c.instructions+=7;NFSU2_TR(0x69a8cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a8d2:{NFSU2_TR(0x69a8d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a8d5:{NFSU2_TR(0x69a8d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69a8d8:{NFSU2_TR(0x69a8d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a8db:{NFSU2_TR(0x69a8db);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69a8de:{NFSU2_TR(0x69a8de);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B69a8e1:{NFSU2_TR(0x69a8e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69a913;}}
}
B69a8e3:L69a8e3:{c.instructions+=4;NFSU2_TR(0x69a8e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a8e7:{NFSU2_TR(0x69a8e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a8eb:{NFSU2_TR(0x69a8eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69a8ee:{NFSU2_TR(0x69a8ee);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a912;}}
}
B69a8f0:L69a8f0:{c.instructions+=12;NFSU2_TR(0x69a8f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a8f3:{NFSU2_TR(0x69a8f3);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B69a8f7:{NFSU2_TR(0x69a8f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a8fa:{NFSU2_TR(0x69a8fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a8fd:{NFSU2_TR(0x69a8fd);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B69a8ff:{NFSU2_TR(0x69a8ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69a902:{NFSU2_TR(0x69a902);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B69a904:{NFSU2_TR(0x69a904);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a907:{NFSU2_TR(0x69a907);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69a90a:{NFSU2_TR(0x69a90a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a90d:{NFSU2_TR(0x69a90d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69a910:{NFSU2_TR(0x69a910);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a8f0u);}goto L69a8f0;}}
}
B69a912:L69a912:{c.instructions+=1;NFSU2_TR(0x69a912);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69a913:L69a913:{c.instructions+=4;NFSU2_TR(0x69a913);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a916:{NFSU2_TR(0x69a916);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a919:{NFSU2_TR(0x69a919);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69a91c:{NFSU2_TR(0x69a91c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a8cfu);}goto L69a8cf;}}
}
B69a91e:L69a91e:{c.instructions+=5;NFSU2_TR(0x69a91e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69a920:{NFSU2_TR(0x69a920);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69a921:{NFSU2_TR(0x69a921);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a924:{NFSU2_TR(0x69a924);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a927:{NFSU2_TR(0x69a927);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a96d;}}
}
B69a929:L69a929:{c.instructions+=3;NFSU2_TR(0x69a929);
__builtin_memmove((R+0),(R+28),4);
}
B69a92b:{NFSU2_TR(0x69a92b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69a92e:{NFSU2_TR(0x69a92e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a931:L69a931:{c.instructions+=3;NFSU2_TR(0x69a931);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a935:{NFSU2_TR(0x69a935);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69a937:{NFSU2_TR(0x69a937);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a95a;}}
}
B69a939:L69a939:{c.instructions+=1;NFSU2_TR(0x69a939);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a93c:L69a93c:{c.instructions+=10;NFSU2_TR(0x69a93c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a93f:{NFSU2_TR(0x69a93f);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B69a943:{NFSU2_TR(0x69a943);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B69a946:{NFSU2_TR(0x69a946);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a949:{NFSU2_TR(0x69a949);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69a94c:{NFSU2_TR(0x69a94c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a94f:{NFSU2_TR(0x69a94f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69a952:{NFSU2_TR(0x69a952);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B69a955:{NFSU2_TR(0x69a955);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B69a958:{NFSU2_TR(0x69a958);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a93cu);}goto L69a93c;}}
}
B69a95a:L69a95a:{c.instructions+=7;NFSU2_TR(0x69a95a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a95d:{NFSU2_TR(0x69a95d);
__builtin_memmove((R+0),(R+28),4);
}
B69a95f:{NFSU2_TR(0x69a95f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69a962:{NFSU2_TR(0x69a962);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a965:{NFSU2_TR(0x69a965);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a968:{NFSU2_TR(0x69a968);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69a96b:{NFSU2_TR(0x69a96b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a931u);}goto L69a931;}}
}
B69a96d:L69a96d:{c.instructions+=8;NFSU2_TR(0x69a96d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69a96f:{NFSU2_TR(0x69a96f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+28))));
}
B69a971:{NFSU2_TR(0x69a971);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B69a976:{NFSU2_TR(0x69a976);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))^u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B69a978:{NFSU2_TR(0x69a978);
__builtin_memmove((R+0),(R+28),4);
}
B69a97a:{NFSU2_TR(0x69a97a);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B69a97e:{NFSU2_TR(0x69a97e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a981:{NFSU2_TR(0x69a981);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a984:L69a984:{c.instructions+=3;NFSU2_TR(0x69a984);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a988:{NFSU2_TR(0x69a988);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69a98c:{NFSU2_TR(0x69a98c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69a9e3;}}
}
B69a98e:L69a98e:{c.instructions+=9;NFSU2_TR(0x69a98e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a991:{NFSU2_TR(0x69a991);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a994:{NFSU2_TR(0x69a994);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a997:{NFSU2_TR(0x69a997);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69a99a:{NFSU2_TR(0x69a99a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69a99d:{NFSU2_TR(0x69a99d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a9a0:{NFSU2_TR(0x69a9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a9a3:{NFSU2_TR(0x69a9a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a9a6:{NFSU2_TR(0x69a9a6);
{goto L69a9ca;}
}
B69a9a8:L69a9a8:{c.instructions+=6;NFSU2_TR(0x69a9a8);
__builtin_memmove((R+12),(R+8),4);
}
B69a9aa:{NFSU2_TR(0x69a9aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B69a9ad:{NFSU2_TR(0x69a9ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a9b0:{NFSU2_TR(0x69a9b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69a9b3:{NFSU2_TR(0x69a9b3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B69a9b6:{NFSU2_TR(0x69a9b6);
if(r1(R+518)){{goto L69a9cf;}}
}
B69a9b8:L69a9b8:{c.instructions+=6;NFSU2_TR(0x69a9b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a9bb:{NFSU2_TR(0x69a9bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a9be:{NFSU2_TR(0x69a9be);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69a9c1:{NFSU2_TR(0x69a9c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69a9c4:{NFSU2_TR(0x69a9c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69a9c7:{NFSU2_TR(0x69a9c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a9ca:L69a9ca:{c.instructions+=2;NFSU2_TR(0x69a9ca);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69a9cd:{NFSU2_TR(0x69a9cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a9a8u);}goto L69a9a8;}}
}
B69a9cf:L69a9cf:{c.instructions+=7;NFSU2_TR(0x69a9cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69a9d2:{NFSU2_TR(0x69a9d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a9d5:{NFSU2_TR(0x69a9d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a9d8:{NFSU2_TR(0x69a9d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69a9db:{NFSU2_TR(0x69a9db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a9de:{NFSU2_TR(0x69a9de);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69a9e1:{NFSU2_TR(0x69a9e1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a98eu);}goto L69a98e;}}
}
B69a9e3:L69a9e3:{c.instructions+=4;NFSU2_TR(0x69a9e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69a9e6:{NFSU2_TR(0x69a9e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69a9e9:{NFSU2_TR(0x69a9e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69a9ec:{NFSU2_TR(0x69a9ec);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69a841u);}goto L69a841;}}
}
B69a9f2:L69a9f2:{c.instructions+=6;NFSU2_TR(0x69a9f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69a9f3:{NFSU2_TR(0x69a9f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69a9f4:{NFSU2_TR(0x69a9f4);
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
B69a9f6:{NFSU2_TR(0x69a9f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69a9f7:{NFSU2_TR(0x69a9f7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69a9f8:{NFSU2_TR(0x69a9f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69a9f9:L69a9f9:{c.instructions+=11;NFSU2_TR(0x69a9f9);
__builtin_memmove((R+28),(R+28),4);
}
B69a9fb:{NFSU2_TR(0x69a9fb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69a9fc:{NFSU2_TR(0x69a9fc);
__builtin_memmove((R+20),(R+16),4);
}
B69a9fe:{NFSU2_TR(0x69a9fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B69aa01:{NFSU2_TR(0x69aa01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69aa02:{NFSU2_TR(0x69aa02);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69aa04:{NFSU2_TR(0x69aa04);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69aa07:{NFSU2_TR(0x69aa07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69aa0a:{NFSU2_TR(0x69aa0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69aa0d:{NFSU2_TR(0x69aa0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69aa10:{NFSU2_TR(0x69aa10);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ab86;}}
}
B69aa16:L69aa16:{c.instructions+=2;NFSU2_TR(0x69aa16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69aa17:{NFSU2_TR(0x69aa17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69aa18:L69aa18:{c.instructions+=7;NFSU2_TR(0x69aa18);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69aa1b:{NFSU2_TR(0x69aa1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69aa1e:{NFSU2_TR(0x69aa1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69aa21:{NFSU2_TR(0x69aa21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69aa23:{NFSU2_TR(0x69aa23);
__builtin_memmove((R+0),(R+28),4);
}
B69aa25:{NFSU2_TR(0x69aa25);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B69aa2a:{NFSU2_TR(0x69aa2a);
if(r1(R+518)){{goto L69ab75;}}
}
B69aa30:L69aa30:{c.instructions+=2;NFSU2_TR(0x69aa30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69aa35:{NFSU2_TR(0x69aa35);
if(r1(R+518)){{goto L69ab75;}}
}
B69aa3b:L69aa3b:{c.instructions+=3;NFSU2_TR(0x69aa3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69aa3e:{NFSU2_TR(0x69aa3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69aa41:{NFSU2_TR(0x69aa41);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ab75;}}
}
B69aa47:L69aa47:{c.instructions+=4;NFSU2_TR(0x69aa47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69aa4a:{NFSU2_TR(0x69aa4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69aa4d:{NFSU2_TR(0x69aa4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69aa50:{NFSU2_TR(0x69aa50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69aa53:L69aa53:{c.instructions+=4;NFSU2_TR(0x69aa53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B69aa55:{NFSU2_TR(0x69aa55);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69aa58:{NFSU2_TR(0x69aa58);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B69aa5b:{NFSU2_TR(0x69aa5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69aa60;}}
}
B69aa5d:L69aa5d:{c.instructions+=1;NFSU2_TR(0x69aa5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69aa60:L69aa60:{c.instructions+=3;NFSU2_TR(0x69aa60);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B69aa63:{NFSU2_TR(0x69aa63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69aa66:{NFSU2_TR(0x69aa66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69aa53u);}goto L69aa53;}}
}
B69aa68:L69aa68:{c.instructions+=3;NFSU2_TR(0x69aa68);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69aa6a:{NFSU2_TR(0x69aa6a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69aa6d:{NFSU2_TR(0x69aa6d);
if(r1(R+518)){{goto L69ab75;}}
}
B69aa73:L69aa73:{c.instructions+=4;NFSU2_TR(0x69aa73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69aa76:{NFSU2_TR(0x69aa76);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69aa79:{NFSU2_TR(0x69aa79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69aa80:{NFSU2_TR(0x69aa80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69aa89;}}
}
B69aa82:L69aa82:{c.instructions+=2;NFSU2_TR(0x69aa82);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B69aa84:{NFSU2_TR(0x69aa84);
{goto L69ab75;}
}
B69aa89:L69aa89:{c.instructions+=1;NFSU2_TR(0x69aa89);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L69ab75;}}
}
B69aa8f:L69aa8f:{c.instructions+=4;NFSU2_TR(0x69aa8f);
__builtin_memmove((R+0),(R+28),4);
}
B69aa91:{NFSU2_TR(0x69aa91);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B69aa96:{NFSU2_TR(0x69aa96);
w1(R+512,u8((r4(R+0))<(u32(0x10000000ull))));
}
B69aa9b:{NFSU2_TR(0x69aa9b);
if(r1(R+512)){{goto L69ab75;}}
}
B69aaa1:L69aaa1:{c.instructions+=2;NFSU2_TR(0x69aaa1);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x40000000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69aaa6:{NFSU2_TR(0x69aaa6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69ab75;}}
}
B69aaac:L69aaac:{c.instructions+=8;NFSU2_TR(0x69aaac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69aaaf:{NFSU2_TR(0x69aaaf);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B69aab5:{NFSU2_TR(0x69aab5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69aab7:{NFSU2_TR(0x69aab7);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69aab7);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x69aab7);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B69aab9:{NFSU2_TR(0x69aab9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69aabb:{NFSU2_TR(0x69aabb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69aabe:{NFSU2_TR(0x69aabe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69aac0:{NFSU2_TR(0x69aac0);
{goto L69aac5;}
}
B69aac2:L69aac2:{c.instructions+=1;NFSU2_TR(0x69aac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69aac5:L69aac5:{c.instructions+=6;NFSU2_TR(0x69aac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69aac8:{NFSU2_TR(0x69aac8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B69aacb:{NFSU2_TR(0x69aacb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69aace:{NFSU2_TR(0x69aace);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69aad1:{NFSU2_TR(0x69aad1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B69aad4:{NFSU2_TR(0x69aad4);
if(r1(R+518)){{goto L69ab04;}}
}
B69aad6:L69aad6:{c.instructions+=4;NFSU2_TR(0x69aad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69aada:{NFSU2_TR(0x69aada);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69aade:{NFSU2_TR(0x69aade);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69aae1:{NFSU2_TR(0x69aae1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ab03;}}
}
B69aae3:L69aae3:{c.instructions+=11;NFSU2_TR(0x69aae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69aae6:{NFSU2_TR(0x69aae6);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B69aaea:{NFSU2_TR(0x69aaea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69aaed:{NFSU2_TR(0x69aaed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B69aaf0:{NFSU2_TR(0x69aaf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69aaf3:{NFSU2_TR(0x69aaf3);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B69aaf5:{NFSU2_TR(0x69aaf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69aaf8:{NFSU2_TR(0x69aaf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69aafb:{NFSU2_TR(0x69aafb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69aafe:{NFSU2_TR(0x69aafe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B69ab01:{NFSU2_TR(0x69ab01);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69aae3u);}goto L69aae3;}}
}
B69ab03:L69ab03:{c.instructions+=1;NFSU2_TR(0x69ab03);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B69ab04:L69ab04:{c.instructions+=3;NFSU2_TR(0x69ab04);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69ab05:{NFSU2_TR(0x69ab05);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69ab08:{NFSU2_TR(0x69ab08);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69aac2u);}goto L69aac2;}}
}
B69ab0a:L69ab0a:{c.instructions+=5;NFSU2_TR(0x69ab0a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69ab0c:{NFSU2_TR(0x69ab0c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B69ab0d:{NFSU2_TR(0x69ab0d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ab10:{NFSU2_TR(0x69ab10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ab13:{NFSU2_TR(0x69ab13);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ab59;}}
}
B69ab15:L69ab15:{c.instructions+=3;NFSU2_TR(0x69ab15);
__builtin_memmove((R+0),(R+28),4);
}
B69ab17:{NFSU2_TR(0x69ab17);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69ab1a:{NFSU2_TR(0x69ab1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ab1d:L69ab1d:{c.instructions+=3;NFSU2_TR(0x69ab1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ab21:{NFSU2_TR(0x69ab21);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69ab23:{NFSU2_TR(0x69ab23);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ab46;}}
}
B69ab25:L69ab25:{c.instructions+=1;NFSU2_TR(0x69ab25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ab28:L69ab28:{c.instructions+=10;NFSU2_TR(0x69ab28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ab2b:{NFSU2_TR(0x69ab2b);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B69ab2f:{NFSU2_TR(0x69ab2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B69ab32:{NFSU2_TR(0x69ab32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69ab35:{NFSU2_TR(0x69ab35);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69ab38:{NFSU2_TR(0x69ab38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ab3b:{NFSU2_TR(0x69ab3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B69ab3e:{NFSU2_TR(0x69ab3e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B69ab41:{NFSU2_TR(0x69ab41);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B69ab44:{NFSU2_TR(0x69ab44);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ab28u);}goto L69ab28;}}
}
B69ab46:L69ab46:{c.instructions+=7;NFSU2_TR(0x69ab46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ab49:{NFSU2_TR(0x69ab49);
__builtin_memmove((R+0),(R+28),4);
}
B69ab4b:{NFSU2_TR(0x69ab4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69ab4e:{NFSU2_TR(0x69ab4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ab51:{NFSU2_TR(0x69ab51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ab54:{NFSU2_TR(0x69ab54);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69ab57:{NFSU2_TR(0x69ab57);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ab1du);}goto L69ab1d;}}
}
B69ab59:L69ab59:{c.instructions+=10;NFSU2_TR(0x69ab59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69ab5b:{NFSU2_TR(0x69ab5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ab5e:{NFSU2_TR(0x69ab5e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+28))));
}
B69ab60:{NFSU2_TR(0x69ab60);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B69ab65:{NFSU2_TR(0x69ab65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))^u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B69ab67:{NFSU2_TR(0x69ab67);
__builtin_memmove((R+0),(R+28),4);
}
B69ab69:{NFSU2_TR(0x69ab69);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B69ab6d:{NFSU2_TR(0x69ab6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ab70:{NFSU2_TR(0x69ab70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ab73:{NFSU2_TR(0x69ab73);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B69ab75:L69ab75:{c.instructions+=4;NFSU2_TR(0x69ab75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ab78:{NFSU2_TR(0x69ab78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ab7b:{NFSU2_TR(0x69ab7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B69ab7e:{NFSU2_TR(0x69ab7e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69aa18u);}goto L69aa18;}}
}
B69ab84:L69ab84:{c.instructions+=2;NFSU2_TR(0x69ab84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69ab85:{NFSU2_TR(0x69ab85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69ab86:L69ab86:{c.instructions+=6;NFSU2_TR(0x69ab86);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69ab88:{NFSU2_TR(0x69ab88);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B69ab8b:{NFSU2_TR(0x69ab8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69ab8c:{NFSU2_TR(0x69ab8c);
__builtin_memmove((R+0),(R+518),1);
}
B69ab8f:{NFSU2_TR(0x69ab8f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69ab90:{NFSU2_TR(0x69ab90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69ab91:L69ab91:{c.instructions+=16;NFSU2_TR(0x69ab91);
__builtin_memmove((R+28),(R+28),4);
}
B69ab93:{NFSU2_TR(0x69ab93);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ab94:{NFSU2_TR(0x69ab94);
__builtin_memmove((R+20),(R+16),4);
}
B69ab96:{NFSU2_TR(0x69ab96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ab97:{NFSU2_TR(0x69ab97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ab98:{NFSU2_TR(0x69ab98);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ab99:{NFSU2_TR(0x69ab99);
__builtin_memmove((R+8),(R+4),4);
}
B69ab9b:{NFSU2_TR(0x69ab9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ab9e:{NFSU2_TR(0x69ab9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69aba0:{NFSU2_TR(0x69aba0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69aba1:{NFSU2_TR(0x69aba1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69aba2:{NFSU2_TR(0x69aba2);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B69aba5:{NFSU2_TR(0x69aba5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B69aba7:{NFSU2_TR(0x69aba7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69aba9:{NFSU2_TR(0x69aba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69abac:{NFSU2_TR(0x69abac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69abc2;}}
}
B69abae:L69abae:{c.instructions+=3;NFSU2_TR(0x69abae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69abb1:{NFSU2_TR(0x69abb1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B69abb3:{NFSU2_TR(0x69abb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69abc2;}}
}
B69abb5:L69abb5:{c.instructions+=4;NFSU2_TR(0x69abb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69abb8:{NFSU2_TR(0x69abb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B69abba:{NFSU2_TR(0x69abba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69abbd:{NFSU2_TR(0x69abbd);
{goto L69ac7a;}
}
B69abc2:L69abc2:{c.instructions+=2;NFSU2_TR(0x69abc2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69abc5:{NFSU2_TR(0x69abc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69abd0;}}
}
B69abc7:L69abc7:{c.instructions+=2;NFSU2_TR(0x69abc7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69abca:{NFSU2_TR(0x69abca);
if(r1(R+518)){{goto L69ac8a;}}
}
B69abd0:L69abd0:{c.instructions+=5;NFSU2_TR(0x69abd0);
__builtin_memmove((R+24),(R+0),4);
}
B69abd2:{NFSU2_TR(0x69abd2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B69abd4:{NFSU2_TR(0x69abd4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69abd6:{NFSU2_TR(0x69abd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69abd9:{NFSU2_TR(0x69abd9);
if(r1(R+518)){{goto L69abe9;}}
}
B69abdb:L69abdb:{c.instructions+=1;NFSU2_TR(0x69abdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69abde:L69abde:{c.instructions+=5;NFSU2_TR(0x69abde);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69abe1:{NFSU2_TR(0x69abe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69abe4:{NFSU2_TR(0x69abe4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B69abe5:{NFSU2_TR(0x69abe5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69abe7:{NFSU2_TR(0x69abe7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69abdeu);}goto L69abde;}}
}
B69abe9:L69abe9:{c.instructions+=3;NFSU2_TR(0x69abe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69abec:{NFSU2_TR(0x69abec);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69abee:{NFSU2_TR(0x69abee);
if(r1(R+518)){{goto L69ac03;}}
}
B69abf0:L69abf0:{c.instructions+=1;NFSU2_TR(0x69abf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69abf3:L69abf3:{c.instructions+=5;NFSU2_TR(0x69abf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69abf6:{NFSU2_TR(0x69abf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69abf9:{NFSU2_TR(0x69abf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69abfc:{NFSU2_TR(0x69abfc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69abfe:{NFSU2_TR(0x69abfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69abf3u);}goto L69abf3;}}
}
B69ac00:L69ac00:{c.instructions+=1;NFSU2_TR(0x69ac00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69ac03:L69ac03:{c.instructions+=4;NFSU2_TR(0x69ac03);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ac06:{NFSU2_TR(0x69ac06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ac09:{NFSU2_TR(0x69ac09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69ac0b:{NFSU2_TR(0x69ac0b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ac22;}}
}
B69ac0d:L69ac0d:{c.instructions+=3;NFSU2_TR(0x69ac0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69ac10:{NFSU2_TR(0x69ac10);
__builtin_memmove((R+24),(R+4),4);
}
B69ac12:{NFSU2_TR(0x69ac12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B69ac15:L69ac15:{c.instructions+=6;NFSU2_TR(0x69ac15);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69ac18:{NFSU2_TR(0x69ac18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69ac1b:{NFSU2_TR(0x69ac1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ac1e:{NFSU2_TR(0x69ac1e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B69ac1f:{NFSU2_TR(0x69ac1f);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B69ac20:{NFSU2_TR(0x69ac20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ac15u);}goto L69ac15;}}
}
B69ac22:L69ac22:{c.instructions+=4;NFSU2_TR(0x69ac22);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ac25:{NFSU2_TR(0x69ac25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ac28:{NFSU2_TR(0x69ac28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69ac2b:{NFSU2_TR(0x69ac2b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ac46;}}
}
B69ac2d:L69ac2d:{c.instructions+=5;NFSU2_TR(0x69ac2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ac30:{NFSU2_TR(0x69ac30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B69ac33:{NFSU2_TR(0x69ac33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ac36:{NFSU2_TR(0x69ac36);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B69ac38:{NFSU2_TR(0x69ac38);
__builtin_memmove((R+4),(R+24),4);
}
B69ac3a:L69ac3a:{c.instructions+=5;NFSU2_TR(0x69ac3a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B69ac3b:{NFSU2_TR(0x69ac3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69ac3e:{NFSU2_TR(0x69ac3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ac41:{NFSU2_TR(0x69ac41);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69ac44:{NFSU2_TR(0x69ac44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ac3au);}goto L69ac3a;}}
}
B69ac46:L69ac46:{c.instructions+=2;NFSU2_TR(0x69ac46);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69ac48:{NFSU2_TR(0x69ac48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ac4e;}}
}
B69ac4a:L69ac4a:{c.instructions+=2;NFSU2_TR(0x69ac4a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69ac4c:{NFSU2_TR(0x69ac4c);
if(r1(R+518)){{goto L69ac72;}}
}
B69ac4e:L69ac4e:{c.instructions+=2;NFSU2_TR(0x69ac4e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69ac51:{NFSU2_TR(0x69ac51);
if(r1(R+518)){{goto L69ac7e;}}
}
B69ac53:L69ac53:{c.instructions+=2;NFSU2_TR(0x69ac53);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69ac56:{NFSU2_TR(0x69ac56);
if(r1(R+518)){{goto L69ac7e;}}
}
B69ac58:L69ac58:{c.instructions+=9;NFSU2_TR(0x69ac58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ac5b:{NFSU2_TR(0x69ac5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ac5e:{NFSU2_TR(0x69ac5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69ac61:{NFSU2_TR(0x69ac61);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B69ac64:{NFSU2_TR(0x69ac64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69ac67:{NFSU2_TR(0x69ac67);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ac6a:{NFSU2_TR(0x69ac6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ac6d:{NFSU2_TR(0x69ac6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69ac70:{NFSU2_TR(0x69ac70);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ac46u);}goto L69ac46;}
}
B69ac72:L69ac72:{c.instructions+=3;NFSU2_TR(0x69ac72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ac75:{NFSU2_TR(0x69ac75);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B69ac77:{NFSU2_TR(0x69ac77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69ac7a:L69ac7a:{c.instructions+=2;NFSU2_TR(0x69ac7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B69ac7c:{NFSU2_TR(0x69ac7c);
{goto L69ac8a;}
}
B69ac7e:L69ac7e:{c.instructions+=4;NFSU2_TR(0x69ac7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ac81:{NFSU2_TR(0x69ac81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B69ac84:{NFSU2_TR(0x69ac84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ac87:{NFSU2_TR(0x69ac87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+0)),r4(U+0));
}
B69ac8a:L69ac8a:{c.instructions+=6;NFSU2_TR(0x69ac8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69ac8b:{NFSU2_TR(0x69ac8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B69ac8c:{NFSU2_TR(0x69ac8c);
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
B69ac8e:{NFSU2_TR(0x69ac8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B69ac8f:{NFSU2_TR(0x69ac8f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B69ac90:{NFSU2_TR(0x69ac90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69ac93:L69ac93:{c.instructions+=14;NFSU2_TR(0x69ac93);
__builtin_memmove((R+28),(R+28),4);
}
B69ac95:{NFSU2_TR(0x69ac95);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ac96:{NFSU2_TR(0x69ac96);
__builtin_memmove((R+20),(R+16),4);
}
B69ac98:{NFSU2_TR(0x69ac98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B69ac9b:{NFSU2_TR(0x69ac9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69ac9e:{NFSU2_TR(0x69ac9e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69ac9f:{NFSU2_TR(0x69ac9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69aca0:{NFSU2_TR(0x69aca0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B69aca2:{NFSU2_TR(0x69aca2);
__builtin_memmove((R+0),(R+24),4);
}
B69aca4:{NFSU2_TR(0x69aca4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B69aca9:{NFSU2_TR(0x69aca9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69acae:{NFSU2_TR(0x69acae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69acaf:{NFSU2_TR(0x69acaf);
__builtin_memmove((R+12),(R+4),4);
}
B69acb1:{NFSU2_TR(0x69acb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x69b2f3u,69b);}
}
B69acb7:L69acb7:{c.instructions+=11;NFSU2_TR(0x69acb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69acba:{NFSU2_TR(0x69acba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69acbc:{NFSU2_TR(0x69acbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69acbf:{NFSU2_TR(0x69acbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69acc2:{NFSU2_TR(0x69acc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69acc5:{NFSU2_TR(0x69acc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69acc8:{NFSU2_TR(0x69acc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69accb:{NFSU2_TR(0x69accb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69acce:{NFSU2_TR(0x69acce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69acd1:{NFSU2_TR(0x69acd1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69acd3:{NFSU2_TR(0x69acd3);
if(r1(R+518)){TAIL_STATIC(0x69b2f3u,69b);}
}
B69acd9:L69acd9:{c.instructions+=2;NFSU2_TR(0x69acd9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B69acdc:{NFSU2_TR(0x69acdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x69b2f3u,69b);}
}
B69ace2:L69ace2:{c.instructions+=4;NFSU2_TR(0x69ace2);
w1(R+512,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B69ace8:{NFSU2_TR(0x69ace8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69aceb:{NFSU2_TR(0x69aceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0xeull));
s4(u32(r4(U+0)),r4(U+4));
}
B69acf2:{NFSU2_TR(0x69acf2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69ad9e;}}
}
B69acf8:L69acf8:{c.instructions+=5;NFSU2_TR(0x69acf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69acfb:{NFSU2_TR(0x69acfb);
__builtin_memmove((R+0),(R+24),4);
}
B69acfd:{NFSU2_TR(0x69acfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B69ad00:{NFSU2_TR(0x69ad00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ad03:{NFSU2_TR(0x69ad03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ad06:L69ad06:{c.instructions+=4;NFSU2_TR(0x69ad06);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ad0a:{NFSU2_TR(0x69ad0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B69ad0c:{NFSU2_TR(0x69ad0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ad0f:{NFSU2_TR(0x69ad0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ad1b;}}
}
B69ad11:L69ad11:{c.instructions+=4;NFSU2_TR(0x69ad11);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69ad14:{NFSU2_TR(0x69ad14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ad17:{NFSU2_TR(0x69ad17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B69ad19:{NFSU2_TR(0x69ad19);
{goto L69ad2f;}
}
B69ad1b:L69ad1b:{c.instructions+=7;NFSU2_TR(0x69ad1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69ad1e:{NFSU2_TR(0x69ad1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ad21:{NFSU2_TR(0x69ad21);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69ad24:{NFSU2_TR(0x69ad24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ad27:{NFSU2_TR(0x69ad27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B69ad29:{NFSU2_TR(0x69ad29);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69ad2c:{NFSU2_TR(0x69ad2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69ad2f:L69ad2f:{c.instructions+=7;NFSU2_TR(0x69ad2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B69ad32:{NFSU2_TR(0x69ad32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69ad34:{NFSU2_TR(0x69ad34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ad38:{NFSU2_TR(0x69ad38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ad3b:{NFSU2_TR(0x69ad3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69ad3f:{NFSU2_TR(0x69ad3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ad42:{NFSU2_TR(0x69ad42);
if(r1(R+518)){{goto L69ad49;}}
}
B69ad44:L69ad44:{c.instructions+=2;NFSU2_TR(0x69ad44);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B69ad47:{NFSU2_TR(0x69ad47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ad58;}}
}
B69ad49:L69ad49:{c.instructions+=2;NFSU2_TR(0x69ad49);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69ad4d:{NFSU2_TR(0x69ad4d);
if(r1(R+518)){{goto L69ad54;}}
}
B69ad4f:L69ad4f:{c.instructions+=2;NFSU2_TR(0x69ad4f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B69ad52:{NFSU2_TR(0x69ad52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ad58;}}
}
B69ad54:L69ad54:{c.instructions+=2;NFSU2_TR(0x69ad54);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69ad56:{NFSU2_TR(0x69ad56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ad5f;}}
}
B69ad58:L69ad58:{c.instructions+=1;NFSU2_TR(0x69ad58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69ad5f:L69ad5f:{c.instructions+=2;NFSU2_TR(0x69ad5f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ad63:{NFSU2_TR(0x69ad63);
if(r1(R+518)){{goto L69ad6a;}}
}
B69ad65:L69ad65:{c.instructions+=2;NFSU2_TR(0x69ad65);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B69ad68:{NFSU2_TR(0x69ad68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ad75;}}
}
B69ad6a:L69ad6a:{c.instructions+=2;NFSU2_TR(0x69ad6a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69ad6e:{NFSU2_TR(0x69ad6e);
if(r1(R+518)){{goto L69ad79;}}
}
B69ad70:L69ad70:{c.instructions+=2;NFSU2_TR(0x69ad70);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B69ad73:{NFSU2_TR(0x69ad73);
if(r1(R+518)){{goto L69ad79;}}
}
B69ad75:L69ad75:{c.instructions+=1;NFSU2_TR(0x69ad75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ad79:L69ad79:{c.instructions+=2;NFSU2_TR(0x69ad79);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69ad7d:{NFSU2_TR(0x69ad7d);
if(r1(R+518)){{goto L69ad88;}}
}
B69ad7f:L69ad7f:{c.instructions+=2;NFSU2_TR(0x69ad7f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B69ad82:{NFSU2_TR(0x69ad82);
if(r1(R+518)){{goto L69ad88;}}
}
B69ad84:L69ad84:{c.instructions+=1;NFSU2_TR(0x69ad84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ad88:L69ad88:{c.instructions+=6;NFSU2_TR(0x69ad88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ad8b:{NFSU2_TR(0x69ad8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ad8e:{NFSU2_TR(0x69ad8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ad92:{NFSU2_TR(0x69ad92);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B69ad95:{NFSU2_TR(0x69ad95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69ad98:{NFSU2_TR(0x69ad98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ad06u);}goto L69ad06;}}
}
B69ad9e:L69ad9e:{c.instructions+=7;NFSU2_TR(0x69ad9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ada1:{NFSU2_TR(0x69ada1);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69ada7:{NFSU2_TR(0x69ada7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69adaa:{NFSU2_TR(0x69adaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B69adac:{NFSU2_TR(0x69adac);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69adae:{NFSU2_TR(0x69adae);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69adb1:{NFSU2_TR(0x69adb1);
if(r1(R+518)){{goto L69af56;}}
}
B69adb7:L69adb7:{c.instructions+=8;NFSU2_TR(0x69adb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69adbb:{NFSU2_TR(0x69adbb);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B69adbd:{NFSU2_TR(0x69adbd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69adc0:{NFSU2_TR(0x69adc0);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69adc3:{NFSU2_TR(0x69adc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69adc6:{NFSU2_TR(0x69adc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69adc9:{NFSU2_TR(0x69adc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69adcc:{NFSU2_TR(0x69adcc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69af1e;}}
}
B69add2:L69add2:{c.instructions+=7;NFSU2_TR(0x69add2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69add5:{NFSU2_TR(0x69add5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69add8:{NFSU2_TR(0x69add8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69addb:{NFSU2_TR(0x69addb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69adde:{NFSU2_TR(0x69adde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ade1:{NFSU2_TR(0x69ade1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B69ade4:{NFSU2_TR(0x69ade4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ade7:L69ade7:{c.instructions+=16;NFSU2_TR(0x69ade7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69ade9:{NFSU2_TR(0x69ade9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69adec:{NFSU2_TR(0x69adec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69adee:{NFSU2_TR(0x69adee);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69adf1:{NFSU2_TR(0x69adf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69adf4:{NFSU2_TR(0x69adf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69adf7:{NFSU2_TR(0x69adf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69adfa:{NFSU2_TR(0x69adfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69adfd:{NFSU2_TR(0x69adfd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69ae00:{NFSU2_TR(0x69ae00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ae03:{NFSU2_TR(0x69ae03);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69ae06:{NFSU2_TR(0x69ae06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69ae09:{NFSU2_TR(0x69ae09);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ae0c:{NFSU2_TR(0x69ae0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69ae0f:{NFSU2_TR(0x69ae0f);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69ae13:{NFSU2_TR(0x69ae13);
if(r1(R+518)){{goto L69ae24;}}
}
B69ae15:L69ae15:{c.instructions+=2;NFSU2_TR(0x69ae15);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ae19:{NFSU2_TR(0x69ae19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ae24;}}
}
B69ae1b:L69ae1b:{c.instructions+=2;NFSU2_TR(0x69ae1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69ae22:{NFSU2_TR(0x69ae22);
{goto L69ae28;}
}
B69ae24:L69ae24:{c.instructions+=1;NFSU2_TR(0x69ae24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ae28:L69ae28:{c.instructions+=5;NFSU2_TR(0x69ae28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ae2b:{NFSU2_TR(0x69ae2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ae2e:{NFSU2_TR(0x69ae2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69ae31:{NFSU2_TR(0x69ae31);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69ae35:{NFSU2_TR(0x69ae35);
if(r1(R+518)){{goto L69ae49;}}
}
B69ae37:L69ae37:{c.instructions+=3;NFSU2_TR(0x69ae37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ae3a:{NFSU2_TR(0x69ae3a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ae3e:{NFSU2_TR(0x69ae3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69ae49;}}
}
B69ae40:L69ae40:{c.instructions+=2;NFSU2_TR(0x69ae40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69ae47:{NFSU2_TR(0x69ae47);
{goto L69ae4d;}
}
B69ae49:L69ae49:{c.instructions+=1;NFSU2_TR(0x69ae49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ae4d:L69ae4d:{c.instructions+=2;NFSU2_TR(0x69ae4d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ae51:{NFSU2_TR(0x69ae51);
if(r1(R+518)){{goto L69ae61;}}
}
B69ae53:L69ae53:{c.instructions+=6;NFSU2_TR(0x69ae53);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69ae56:{NFSU2_TR(0x69ae56);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B69ae58:{NFSU2_TR(0x69ae58);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69ae5a:{NFSU2_TR(0x69ae5a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69ae5c:{NFSU2_TR(0x69ae5c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69ae5f:{NFSU2_TR(0x69ae5f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L69ae93;}}
}
B69ae61:L69ae61:{c.instructions+=2;NFSU2_TR(0x69ae61);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ae65:{NFSU2_TR(0x69ae65);
if(r1(R+518)){{goto L69ae78;}}
}
B69ae67:L69ae67:{c.instructions+=7;NFSU2_TR(0x69ae67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ae6a:{NFSU2_TR(0x69ae6a);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69ae6d:{NFSU2_TR(0x69ae6d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B69ae6f:{NFSU2_TR(0x69ae6f);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69ae71:{NFSU2_TR(0x69ae71);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69ae73:{NFSU2_TR(0x69ae73);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69ae76:{NFSU2_TR(0x69ae76);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L69ae93;}}
}
B69ae78:L69ae78:{c.instructions+=2;NFSU2_TR(0x69ae78);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ae7c:{NFSU2_TR(0x69ae7c);
if(r1(R+518)){{goto L69aeaf;}}
}
B69ae7e:L69ae7e:{c.instructions+=2;NFSU2_TR(0x69ae7e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69ae82:{NFSU2_TR(0x69ae82);
if(r1(R+518)){{goto L69ae98;}}
}
B69ae84:L69ae84:{c.instructions+=5;NFSU2_TR(0x69ae84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69ae87:{NFSU2_TR(0x69ae87);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69ae8a:{NFSU2_TR(0x69ae8a);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B69ae8d:{NFSU2_TR(0x69ae8d);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B69ae90:{NFSU2_TR(0x69ae90);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69ae93:L69ae93:{c.instructions+=2;NFSU2_TR(0x69ae93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69ae96:{NFSU2_TR(0x69ae96);
{goto L69aed3;}
}
B69ae98:L69ae98:{c.instructions+=6;NFSU2_TR(0x69ae98);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69ae9b:{NFSU2_TR(0x69ae9b);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69aea1:{NFSU2_TR(0x69aea1);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69aea3:{NFSU2_TR(0x69aea3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69aea5:{NFSU2_TR(0x69aea5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69aea8:{NFSU2_TR(0x69aea8);
if(r1(R+514)){{goto L69aeef;}}
}
B69aeaa:L69aeaa:{c.instructions+=2;NFSU2_TR(0x69aeaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69aead:{NFSU2_TR(0x69aead);
{goto L69aecd;}
}
B69aeaf:L69aeaf:{c.instructions+=2;NFSU2_TR(0x69aeaf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69aeb3:{NFSU2_TR(0x69aeb3);
if(r1(R+518)){{goto L69aeef;}}
}
B69aeb5:L69aeb5:{c.instructions+=7;NFSU2_TR(0x69aeb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69aeb8:{NFSU2_TR(0x69aeb8);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69aebb:{NFSU2_TR(0x69aebb);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69aec1:{NFSU2_TR(0x69aec1);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69aec3:{NFSU2_TR(0x69aec3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69aec5:{NFSU2_TR(0x69aec5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69aec8:{NFSU2_TR(0x69aec8);
if(r1(R+514)){{goto L69aeef;}}
}
B69aeca:L69aeca:{c.instructions+=1;NFSU2_TR(0x69aeca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69aecd:L69aecd:{c.instructions+=2;NFSU2_TR(0x69aecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69aed0:{NFSU2_TR(0x69aed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69aed3:L69aed3:{c.instructions+=8;NFSU2_TR(0x69aed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69aed6:{NFSU2_TR(0x69aed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69aed9:{NFSU2_TR(0x69aed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69aedc:{NFSU2_TR(0x69aedc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69aee0:{NFSU2_TR(0x69aee0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B69aee3:{NFSU2_TR(0x69aee3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B69aee6:{NFSU2_TR(0x69aee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69aee9:{NFSU2_TR(0x69aee9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69ade7u);}goto L69ade7;}}
}
B69aeef:L69aeef:{c.instructions+=2;NFSU2_TR(0x69aeef);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69aef3:{NFSU2_TR(0x69aef3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69af1c;}}
}
B69aef5:L69aef5:{c.instructions+=4;NFSU2_TR(0x69aef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69aef8:{NFSU2_TR(0x69aef8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B69aef9:{NFSU2_TR(0x69aef9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69aefc:{NFSU2_TR(0x69aefc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69af1c;}}
}
B69aefe:L69aefe:{c.instructions+=6;NFSU2_TR(0x69aefe);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69af01:{NFSU2_TR(0x69af01);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B69af03:{NFSU2_TR(0x69af03);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69af05:{NFSU2_TR(0x69af05);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69af07:{NFSU2_TR(0x69af07);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69af0a:{NFSU2_TR(0x69af0a);
if(r1(R+514)){{goto L69af1c;}}
}
B69af0c:L69af0c:{c.instructions+=6;NFSU2_TR(0x69af0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69af0f:{NFSU2_TR(0x69af0f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B69af11:{NFSU2_TR(0x69af11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69af14:{NFSU2_TR(0x69af14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B69af17:{NFSU2_TR(0x69af17);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69af1a:{NFSU2_TR(0x69af1a);
{goto L69af4f;}
}
B69af1c:L69af1c:{c.instructions+=1;NFSU2_TR(0x69af1c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69af1e:L69af1e:{c.instructions+=3;NFSU2_TR(0x69af1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69af21:{NFSU2_TR(0x69af21);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69af24:{NFSU2_TR(0x69af24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69af56;}}
}
B69af26:L69af26:{c.instructions+=12;NFSU2_TR(0x69af26);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69af27:{NFSU2_TR(0x69af27);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B69af29:{NFSU2_TR(0x69af29);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69af2c:{NFSU2_TR(0x69af2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69af2d:{NFSU2_TR(0x69af2d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69af2f:{NFSU2_TR(0x69af2f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69af32:{NFSU2_TR(0x69af32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69af33:{NFSU2_TR(0x69af33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69af34:{NFSU2_TR(0x69af34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B69af36:{NFSU2_TR(0x69af36);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69af39:{NFSU2_TR(0x69af39);
__builtin_memmove((R+4),(R+12),4);
}
B69af3b:{NFSU2_TR(0x69af3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69af40ull));
TAIL_STATIC(0x699c39u,699);
}
B69af40:L69af40:{c.instructions+=5;NFSU2_TR(0x69af40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69af43:{NFSU2_TR(0x69af43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69af46:{NFSU2_TR(0x69af46);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69af49:{NFSU2_TR(0x69af49);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69af4c:{NFSU2_TR(0x69af4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69af4f:L69af4f:{c.instructions+=2;NFSU2_TR(0x69af4f);
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
B69af51:{NFSU2_TR(0x69af51);
TAIL_STATIC(0x69b2f6u,69b);
}
B69af56:L69af56:{c.instructions+=7;NFSU2_TR(0x69af56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69af59:{NFSU2_TR(0x69af59);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69af5b:{NFSU2_TR(0x69af5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69af5e:{NFSU2_TR(0x69af5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69af61:{NFSU2_TR(0x69af61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69af64:{NFSU2_TR(0x69af64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69af67:{NFSU2_TR(0x69af67);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x69b16eu,69b);}
}
B69af6d:L69af6d:{c.instructions+=4;NFSU2_TR(0x69af6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69af70:{NFSU2_TR(0x69af70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69af73:{NFSU2_TR(0x69af73);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B69af76:{NFSU2_TR(0x69af76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69af79:L69af79:{c.instructions+=7;NFSU2_TR(0x69af79);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69af7d:{NFSU2_TR(0x69af7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69af80:{NFSU2_TR(0x69af80);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69af83:{NFSU2_TR(0x69af83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B69af85:{NFSU2_TR(0x69af85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B69af87:{NFSU2_TR(0x69af87);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69af8a:{NFSU2_TR(0x69af8a);
if(r1(R+518)){{goto L69af98;}}
}
B69af8c:L69af8c:{c.instructions+=4;NFSU2_TR(0x69af8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69af8f:{NFSU2_TR(0x69af8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B69af92:{NFSU2_TR(0x69af92);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69af95:{NFSU2_TR(0x69af95);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69af98:L69af98:{c.instructions+=7;NFSU2_TR(0x69af98);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69af9b:{NFSU2_TR(0x69af9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69af9e:{NFSU2_TR(0x69af9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69afa1:{NFSU2_TR(0x69afa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69afa4:{NFSU2_TR(0x69afa4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B69afa7:{NFSU2_TR(0x69afa7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69afab:{NFSU2_TR(0x69afab);
if(r1(R+518)){{goto L69afc1;}}
}
B69afad:L69afad:{c.instructions+=2;NFSU2_TR(0x69afad);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69afb1:{NFSU2_TR(0x69afb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69afc1;}}
}
B69afb3:L69afb3:{c.instructions+=6;NFSU2_TR(0x69afb3);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69afb6:{NFSU2_TR(0x69afb6);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B69afb8:{NFSU2_TR(0x69afb8);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69afba:{NFSU2_TR(0x69afba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69afbc:{NFSU2_TR(0x69afbc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69afbf:{NFSU2_TR(0x69afbf);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L69afe4;}}
}
B69afc1:L69afc1:{c.instructions+=5;NFSU2_TR(0x69afc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69afc4:{NFSU2_TR(0x69afc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69afc7:{NFSU2_TR(0x69afc7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B69afca:{NFSU2_TR(0x69afca);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B69afce:{NFSU2_TR(0x69afce);
if(r1(R+518)){{goto L69afec;}}
}
B69afd0:L69afd0:{c.instructions+=2;NFSU2_TR(0x69afd0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69afd4:{NFSU2_TR(0x69afd4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69afec;}}
}
B69afd6:L69afd6:{c.instructions+=6;NFSU2_TR(0x69afd6);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B69afd9:{NFSU2_TR(0x69afd9);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B69afdb:{NFSU2_TR(0x69afdb);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B69afdd:{NFSU2_TR(0x69afdd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B69afdf:{NFSU2_TR(0x69afdf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B69afe2:{NFSU2_TR(0x69afe2);
if(r1(R+514)){{goto L69afec;}}
}
B69afe4:L69afe4:{c.instructions+=3;NFSU2_TR(0x69afe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69afe7:{NFSU2_TR(0x69afe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69afea:{NFSU2_TR(0x69afea);
{goto L69aff3;}
}
B69afec:L69afec:{c.instructions+=2;NFSU2_TR(0x69afec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69afef:{NFSU2_TR(0x69afef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69aff3:L69aff3:{c.instructions+=4;NFSU2_TR(0x69aff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B69aff7:{NFSU2_TR(0x69aff7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B69affa:{NFSU2_TR(0x69affa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69affd:{NFSU2_TR(0x69affd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69af79u);}goto L69af79;}}
TAIL_STATIC(0x69b003u,69b);
}
XIT:NFSU2_TR_EXIT(0x69a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
