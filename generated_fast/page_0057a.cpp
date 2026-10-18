#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_43a(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_56c(u8* __restrict R,Cpu& c);
u32 body_56f(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5df(u8* __restrict R,Cpu& c);
u32 body_5e4(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_5e9(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f9(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_611(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x57a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x57a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_57a(u8* __restrict R,Cpu& c);
u32 page_57a(Cpu& c){return body_57a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_57a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x57a000:goto L57a000;
case 0x57a005:goto L57a005;
case 0x57a008:c.instructions+=3;goto B57a008;
case 0x57a00a:c.instructions+=2;goto B57a00a;
case 0x57a00b:c.instructions+=1;goto B57a00b;
case 0x57a010:goto L57a010;
case 0x57a014:c.instructions+=9;goto B57a014;
case 0x57a015:c.instructions+=8;goto B57a015;
case 0x57a016:c.instructions+=7;goto B57a016;
case 0x57a018:c.instructions+=6;goto B57a018;
case 0x57a01a:c.instructions+=5;goto B57a01a;
case 0x57a01b:c.instructions+=4;goto B57a01b;
case 0x57a01e:c.instructions+=3;goto B57a01e;
case 0x57a025:c.instructions+=2;goto B57a025;
case 0x57a02b:c.instructions+=1;goto B57a02b;
case 0x57a030:goto L57a030;
case 0x57a032:c.instructions+=5;goto B57a032;
case 0x57a038:c.instructions+=4;goto B57a038;
case 0x57a039:c.instructions+=3;goto B57a039;
case 0x57a03c:c.instructions+=2;goto B57a03c;
case 0x57a043:c.instructions+=1;goto B57a043;
case 0x57a048:goto L57a048;
case 0x57a049:c.instructions+=2;goto B57a049;
case 0x57a04a:c.instructions+=1;goto B57a04a;
case 0x57a050:goto L57a050;
case 0x57a051:c.instructions+=5;goto B57a051;
case 0x57a057:c.instructions+=4;goto B57a057;
case 0x57a05d:c.instructions+=3;goto B57a05d;
case 0x57a063:c.instructions+=2;goto B57a063;
case 0x57a065:c.instructions+=1;goto B57a065;
case 0x57a06a:goto L57a06a;
case 0x57a06c:c.instructions+=7;goto B57a06c;
case 0x57a070:c.instructions+=6;goto B57a070;
case 0x57a074:c.instructions+=5;goto B57a074;
case 0x57a07a:c.instructions+=4;goto B57a07a;
case 0x57a07c:c.instructions+=3;goto B57a07c;
case 0x57a082:c.instructions+=2;goto B57a082;
case 0x57a084:c.instructions+=1;goto B57a084;
case 0x57a086:goto L57a086;
case 0x57a08b:goto L57a08b;
case 0x57a091:c.instructions+=8;goto B57a091;
case 0x57a097:c.instructions+=7;goto B57a097;
case 0x57a09d:c.instructions+=6;goto B57a09d;
case 0x57a09f:c.instructions+=5;goto B57a09f;
case 0x57a0a5:c.instructions+=4;goto B57a0a5;
case 0x57a0aa:c.instructions+=3;goto B57a0aa;
case 0x57a0b0:c.instructions+=2;goto B57a0b0;
case 0x57a0b6:c.instructions+=1;goto B57a0b6;
case 0x57a0bb:goto L57a0bb;
case 0x57a0c1:c.instructions+=7;goto B57a0c1;
case 0x57a0c3:c.instructions+=6;goto B57a0c3;
case 0x57a0c8:c.instructions+=5;goto B57a0c8;
case 0x57a0c9:c.instructions+=4;goto B57a0c9;
case 0x57a0cf:c.instructions+=3;goto B57a0cf;
case 0x57a0d4:c.instructions+=2;goto B57a0d4;
case 0x57a0d5:c.instructions+=1;goto B57a0d5;
case 0x57a0e0:goto L57a0e0;
case 0x57a0e1:c.instructions+=6;goto B57a0e1;
case 0x57a0e7:c.instructions+=5;goto B57a0e7;
case 0x57a0f1:c.instructions+=4;goto B57a0f1;
case 0x57a0f7:c.instructions+=3;goto B57a0f7;
case 0x57a0f9:c.instructions+=2;goto B57a0f9;
case 0x57a0fc:c.instructions+=1;goto B57a0fc;
case 0x57a102:goto L57a102;
case 0x57a108:c.instructions+=4;goto B57a108;
case 0x57a10e:c.instructions+=3;goto B57a10e;
case 0x57a114:c.instructions+=2;goto B57a114;
case 0x57a116:c.instructions+=1;goto B57a116;
case 0x57a11b:goto L57a11b;
case 0x57a121:c.instructions+=14;goto B57a121;
case 0x57a125:c.instructions+=13;goto B57a125;
case 0x57a129:c.instructions+=12;goto B57a129;
case 0x57a12b:c.instructions+=11;goto B57a12b;
case 0x57a131:c.instructions+=10;goto B57a131;
case 0x57a136:c.instructions+=9;goto B57a136;
case 0x57a13c:c.instructions+=8;goto B57a13c;
case 0x57a142:c.instructions+=7;goto B57a142;
case 0x57a144:c.instructions+=6;goto B57a144;
case 0x57a14a:c.instructions+=5;goto B57a14a;
case 0x57a14c:c.instructions+=4;goto B57a14c;
case 0x57a152:c.instructions+=3;goto B57a152;
case 0x57a158:c.instructions+=2;goto B57a158;
case 0x57a15e:c.instructions+=1;goto B57a15e;
case 0x57a163:goto L57a163;
case 0x57a169:c.instructions+=9;goto B57a169;
case 0x57a16b:c.instructions+=8;goto B57a16b;
case 0x57a170:c.instructions+=7;goto B57a170;
case 0x57a176:c.instructions+=6;goto B57a176;
case 0x57a17c:c.instructions+=5;goto B57a17c;
case 0x57a17d:c.instructions+=4;goto B57a17d;
case 0x57a187:c.instructions+=3;goto B57a187;
case 0x57a18d:c.instructions+=2;goto B57a18d;
case 0x57a192:c.instructions+=1;goto B57a192;
case 0x57a198:goto L57a198;
case 0x57a199:c.instructions+=1;goto B57a199;
case 0x57a1a0:goto L57a1a0;
case 0x57a1a3:c.instructions+=5;goto B57a1a3;
case 0x57a1a8:c.instructions+=4;goto B57a1a8;
case 0x57a1ac:c.instructions+=3;goto B57a1ac;
case 0x57a1b1:c.instructions+=2;goto B57a1b1;
case 0x57a1b3:c.instructions+=1;goto B57a1b3;
case 0x57a1b5:goto L57a1b5;
case 0x57a1bb:c.instructions+=1;goto B57a1bb;
case 0x57a1bd:goto L57a1bd;
case 0x57a1c3:goto L57a1c3;
case 0x57a1c7:c.instructions+=6;goto B57a1c7;
case 0x57a1cc:c.instructions+=5;goto B57a1cc;
case 0x57a1ce:c.instructions+=4;goto B57a1ce;
case 0x57a1d0:c.instructions+=3;goto B57a1d0;
case 0x57a1d4:c.instructions+=2;goto B57a1d4;
case 0x57a1d6:c.instructions+=1;goto B57a1d6;
case 0x57a1d8:goto L57a1d8;
case 0x57a1dd:goto L57a1dd;
case 0x57a1e3:c.instructions+=3;goto B57a1e3;
case 0x57a1e4:c.instructions+=2;goto B57a1e4;
case 0x57a1e5:c.instructions+=1;goto B57a1e5;
case 0x57a1ea:goto L57a1ea;
case 0x57a1f0:c.instructions+=5;goto B57a1f0;
case 0x57a1f5:c.instructions+=4;goto B57a1f5;
case 0x57a1f8:c.instructions+=3;goto B57a1f8;
case 0x57a1fa:c.instructions+=2;goto B57a1fa;
case 0x57a1fe:c.instructions+=1;goto B57a1fe;
case 0x57a200:goto L57a200;
case 0x57a206:c.instructions+=1;goto B57a206;
case 0x57a208:goto L57a208;
case 0x57a20e:goto L57a20e;
case 0x57a212:c.instructions+=4;goto B57a212;
case 0x57a214:c.instructions+=3;goto B57a214;
case 0x57a216:c.instructions+=2;goto B57a216;
case 0x57a219:c.instructions+=1;goto B57a219;
case 0x57a21b:goto L57a21b;
case 0x57a21f:c.instructions+=4;goto B57a21f;
case 0x57a223:c.instructions+=3;goto B57a223;
case 0x57a227:c.instructions+=2;goto B57a227;
case 0x57a22a:c.instructions+=1;goto B57a22a;
case 0x57a22b:goto L57a22b;
case 0x57a22d:c.instructions+=4;goto B57a22d;
case 0x57a231:c.instructions+=3;goto B57a231;
case 0x57a235:c.instructions+=2;goto B57a235;
case 0x57a238:c.instructions+=1;goto B57a238;
case 0x57a239:goto L57a239;
case 0x57a23d:c.instructions+=2;goto B57a23d;
case 0x57a240:c.instructions+=1;goto B57a240;
case 0x57a250:goto L57a250;
case 0x57a251:c.instructions+=4;goto B57a251;
case 0x57a253:c.instructions+=3;goto B57a253;
case 0x57a255:c.instructions+=2;goto B57a255;
case 0x57a257:c.instructions+=1;goto B57a257;
case 0x57a259:goto L57a259;
case 0x57a260:goto L57a260;
case 0x57a262:c.instructions+=5;goto B57a262;
case 0x57a265:c.instructions+=4;goto B57a265;
case 0x57a267:c.instructions+=3;goto B57a267;
case 0x57a268:c.instructions+=2;goto B57a268;
case 0x57a26b:c.instructions+=1;goto B57a26b;
case 0x57a270:goto L57a270;
case 0x57a272:c.instructions+=3;goto B57a272;
case 0x57a275:c.instructions+=2;goto B57a275;
case 0x57a277:c.instructions+=1;goto B57a277;
case 0x57a279:goto L57a279;
case 0x57a27a:c.instructions+=1;goto B57a27a;
case 0x57a280:goto L57a280;
case 0x57a281:c.instructions+=5;goto B57a281;
case 0x57a282:c.instructions+=4;goto B57a282;
case 0x57a284:c.instructions+=3;goto B57a284;
case 0x57a286:c.instructions+=2;goto B57a286;
case 0x57a288:c.instructions+=1;goto B57a288;
case 0x57a28a:goto L57a28a;
case 0x57a290:goto L57a290;
case 0x57a293:c.instructions+=5;goto B57a293;
case 0x57a295:c.instructions+=4;goto B57a295;
case 0x57a297:c.instructions+=3;goto B57a297;
case 0x57a29a:c.instructions+=2;goto B57a29a;
case 0x57a29c:c.instructions+=1;goto B57a29c;
case 0x57a2a1:goto L57a2a1;
case 0x57a2a6:c.instructions+=3;goto B57a2a6;
case 0x57a2a7:c.instructions+=2;goto B57a2a7;
case 0x57a2a8:c.instructions+=1;goto B57a2a8;
case 0x57a2ad:goto L57a2ad;
case 0x57a2af:c.instructions+=3;goto B57a2af;
case 0x57a2b2:c.instructions+=2;goto B57a2b2;
case 0x57a2b4:c.instructions+=1;goto B57a2b4;
case 0x57a2b6:goto L57a2b6;
case 0x57a2b7:c.instructions+=2;goto B57a2b7;
case 0x57a2b8:c.instructions+=1;goto B57a2b8;
case 0x57a2c0:goto L57a2c0;
case 0x57a2c1:c.instructions+=5;goto B57a2c1;
case 0x57a2c2:c.instructions+=4;goto B57a2c2;
case 0x57a2c4:c.instructions+=3;goto B57a2c4;
case 0x57a2c6:c.instructions+=2;goto B57a2c6;
case 0x57a2c8:c.instructions+=1;goto B57a2c8;
case 0x57a2ca:goto L57a2ca;
case 0x57a2d0:goto L57a2d0;
case 0x57a2d3:c.instructions+=5;goto B57a2d3;
case 0x57a2d5:c.instructions+=4;goto B57a2d5;
case 0x57a2d7:c.instructions+=3;goto B57a2d7;
case 0x57a2da:c.instructions+=2;goto B57a2da;
case 0x57a2dc:c.instructions+=1;goto B57a2dc;
case 0x57a2e1:goto L57a2e1;
case 0x57a2e6:c.instructions+=3;goto B57a2e6;
case 0x57a2e7:c.instructions+=2;goto B57a2e7;
case 0x57a2e8:c.instructions+=1;goto B57a2e8;
case 0x57a2ed:goto L57a2ed;
case 0x57a2ef:c.instructions+=3;goto B57a2ef;
case 0x57a2f2:c.instructions+=2;goto B57a2f2;
case 0x57a2f4:c.instructions+=1;goto B57a2f4;
case 0x57a2f6:goto L57a2f6;
case 0x57a2f7:c.instructions+=2;goto B57a2f7;
case 0x57a2f8:c.instructions+=1;goto B57a2f8;
case 0x57a300:goto L57a300;
case 0x57a301:c.instructions+=14;goto B57a301;
case 0x57a303:c.instructions+=13;goto B57a303;
case 0x57a306:c.instructions+=12;goto B57a306;
case 0x57a307:c.instructions+=11;goto B57a307;
case 0x57a309:c.instructions+=10;goto B57a309;
case 0x57a30d:c.instructions+=9;goto B57a30d;
case 0x57a310:c.instructions+=8;goto B57a310;
case 0x57a313:c.instructions+=7;goto B57a313;
case 0x57a314:c.instructions+=6;goto B57a314;
case 0x57a317:c.instructions+=5;goto B57a317;
case 0x57a319:c.instructions+=4;goto B57a319;
case 0x57a31a:c.instructions+=3;goto B57a31a;
case 0x57a31c:c.instructions+=2;goto B57a31c;
case 0x57a320:c.instructions+=1;goto B57a320;
case 0x57a325:goto L57a325;
case 0x57a328:c.instructions+=8;goto B57a328;
case 0x57a32b:c.instructions+=7;goto B57a32b;
case 0x57a32e:c.instructions+=6;goto B57a32e;
case 0x57a330:c.instructions+=5;goto B57a330;
case 0x57a333:c.instructions+=4;goto B57a333;
case 0x57a336:c.instructions+=3;goto B57a336;
case 0x57a339:c.instructions+=2;goto B57a339;
case 0x57a33c:c.instructions+=1;goto B57a33c;
case 0x57a33e:goto L57a33e;
case 0x57a345:goto L57a345;
case 0x57a348:c.instructions+=4;goto B57a348;
case 0x57a34a:c.instructions+=3;goto B57a34a;
case 0x57a34d:c.instructions+=2;goto B57a34d;
case 0x57a351:c.instructions+=1;goto B57a351;
case 0x57a353:goto L57a353;
case 0x57a357:goto L57a357;
case 0x57a35a:c.instructions+=5;goto B57a35a;
case 0x57a35e:c.instructions+=4;goto B57a35e;
case 0x57a362:c.instructions+=3;goto B57a362;
case 0x57a365:c.instructions+=2;goto B57a365;
case 0x57a368:c.instructions+=1;goto B57a368;
case 0x57a36d:goto L57a36d;
case 0x57a36e:c.instructions+=4;goto B57a36e;
case 0x57a370:c.instructions+=3;goto B57a370;
case 0x57a371:c.instructions+=2;goto B57a371;
case 0x57a372:c.instructions+=1;goto B57a372;
case 0x57a380:goto L57a380;
case 0x57a381:c.instructions+=12;goto B57a381;
case 0x57a382:c.instructions+=11;goto B57a382;
case 0x57a383:c.instructions+=10;goto B57a383;
case 0x57a384:c.instructions+=9;goto B57a384;
case 0x57a388:c.instructions+=8;goto B57a388;
case 0x57a389:c.instructions+=7;goto B57a389;
case 0x57a38b:c.instructions+=6;goto B57a38b;
case 0x57a390:c.instructions+=5;goto B57a390;
case 0x57a392:c.instructions+=4;goto B57a392;
case 0x57a393:c.instructions+=3;goto B57a393;
case 0x57a395:c.instructions+=2;goto B57a395;
case 0x57a399:c.instructions+=1;goto B57a399;
case 0x57a39e:goto L57a39e;
case 0x57a3a1:c.instructions+=3;goto B57a3a1;
case 0x57a3a2:c.instructions+=2;goto B57a3a2;
case 0x57a3a4:c.instructions+=1;goto B57a3a4;
case 0x57a3a9:goto L57a3a9;
case 0x57a3ac:c.instructions+=2;goto B57a3ac;
case 0x57a3af:c.instructions+=1;goto B57a3af;
case 0x57a3b1:goto L57a3b1;
case 0x57a3b4:c.instructions+=3;goto B57a3b4;
case 0x57a3b5:c.instructions+=2;goto B57a3b5;
case 0x57a3b7:c.instructions+=1;goto B57a3b7;
case 0x57a3bc:goto L57a3bc;
case 0x57a3bf:c.instructions+=2;goto B57a3bf;
case 0x57a3c3:c.instructions+=1;goto B57a3c3;
case 0x57a3c9:goto L57a3c9;
case 0x57a3cd:c.instructions+=1;goto B57a3cd;
case 0x57a3d0:goto L57a3d0;
case 0x57a3d3:c.instructions+=4;goto B57a3d3;
case 0x57a3d6:c.instructions+=3;goto B57a3d6;
case 0x57a3d8:c.instructions+=2;goto B57a3d8;
case 0x57a3da:c.instructions+=1;goto B57a3da;
case 0x57a3dc:goto L57a3dc;
case 0x57a3de:c.instructions+=5;goto B57a3de;
case 0x57a3df:c.instructions+=4;goto B57a3df;
case 0x57a3e0:c.instructions+=3;goto B57a3e0;
case 0x57a3e1:c.instructions+=2;goto B57a3e1;
case 0x57a3e3:c.instructions+=1;goto B57a3e3;
case 0x57a3e8:goto L57a3e8;
case 0x57a3ea:goto L57a3ea;
case 0x57a3ed:c.instructions+=2;goto B57a3ed;
case 0x57a3ef:c.instructions+=1;goto B57a3ef;
case 0x57a3f1:goto L57a3f1;
case 0x57a3f3:c.instructions+=5;goto B57a3f3;
case 0x57a3f4:c.instructions+=4;goto B57a3f4;
case 0x57a3f5:c.instructions+=3;goto B57a3f5;
case 0x57a3f6:c.instructions+=2;goto B57a3f6;
case 0x57a3f8:c.instructions+=1;goto B57a3f8;
case 0x57a3fd:goto L57a3fd;
case 0x57a3ff:goto L57a3ff;
case 0x57a402:c.instructions+=2;goto B57a402;
case 0x57a404:c.instructions+=1;goto B57a404;
case 0x57a406:goto L57a406;
case 0x57a408:c.instructions+=3;goto B57a408;
case 0x57a40a:c.instructions+=2;goto B57a40a;
case 0x57a40f:c.instructions+=1;goto B57a40f;
case 0x57a411:goto L57a411;
case 0x57a415:c.instructions+=5;goto B57a415;
case 0x57a418:c.instructions+=4;goto B57a418;
case 0x57a41a:c.instructions+=3;goto B57a41a;
case 0x57a41b:c.instructions+=2;goto B57a41b;
case 0x57a41d:c.instructions+=1;goto B57a41d;
case 0x57a41f:goto L57a41f;
case 0x57a423:goto L57a423;
case 0x57a429:c.instructions+=3;goto B57a429;
case 0x57a42c:c.instructions+=2;goto B57a42c;
case 0x57a432:c.instructions+=1;goto B57a432;
case 0x57a434:goto L57a434;
case 0x57a43b:c.instructions+=1;goto B57a43b;
case 0x57a442:goto L57a442;
case 0x57a448:goto L57a448;
case 0x57a44c:c.instructions+=6;goto B57a44c;
case 0x57a450:c.instructions+=5;goto B57a450;
case 0x57a451:c.instructions+=4;goto B57a451;
case 0x57a454:c.instructions+=3;goto B57a454;
case 0x57a456:c.instructions+=2;goto B57a456;
case 0x57a45a:c.instructions+=1;goto B57a45a;
case 0x57a460:goto L57a460;
case 0x57a462:c.instructions+=1;goto B57a462;
case 0x57a467:goto L57a467;
case 0x57a468:c.instructions+=5;goto B57a468;
case 0x57a469:c.instructions+=4;goto B57a469;
case 0x57a46a:c.instructions+=3;goto B57a46a;
case 0x57a46b:c.instructions+=2;goto B57a46b;
case 0x57a46c:c.instructions+=1;goto B57a46c;
case 0x57a470:goto L57a470;
case 0x57a471:c.instructions+=5;goto B57a471;
case 0x57a473:c.instructions+=4;goto B57a473;
case 0x57a474:c.instructions+=3;goto B57a474;
case 0x57a477:c.instructions+=2;goto B57a477;
case 0x57a47d:c.instructions+=1;goto B57a47d;
case 0x57a47f:goto L57a47f;
case 0x57a482:c.instructions+=5;goto B57a482;
case 0x57a483:c.instructions+=4;goto B57a483;
case 0x57a486:c.instructions+=3;goto B57a486;
case 0x57a48a:c.instructions+=2;goto B57a48a;
case 0x57a48c:c.instructions+=1;goto B57a48c;
case 0x57a48e:goto L57a48e;
case 0x57a48f:c.instructions+=1;goto B57a48f;
case 0x57a490:goto L57a490;
case 0x57a493:c.instructions+=13;goto B57a493;
case 0x57a497:c.instructions+=12;goto B57a497;
case 0x57a49a:c.instructions+=11;goto B57a49a;
case 0x57a49d:c.instructions+=10;goto B57a49d;
case 0x57a4a0:c.instructions+=9;goto B57a4a0;
case 0x57a4a3:c.instructions+=8;goto B57a4a3;
case 0x57a4a6:c.instructions+=7;goto B57a4a6;
case 0x57a4a9:c.instructions+=6;goto B57a4a9;
case 0x57a4ac:c.instructions+=5;goto B57a4ac;
case 0x57a4af:c.instructions+=4;goto B57a4af;
case 0x57a4b1:c.instructions+=3;goto B57a4b1;
case 0x57a4b5:c.instructions+=2;goto B57a4b5;
case 0x57a4bc:c.instructions+=1;goto B57a4bc;
case 0x57a4be:goto L57a4be;
case 0x57a4c5:goto L57a4c5;
case 0x57a4ca:goto L57a4ca;
case 0x57a4cb:c.instructions+=2;goto B57a4cb;
case 0x57a4d0:c.instructions+=1;goto B57a4d0;
case 0x57a4d5:goto L57a4d5;
case 0x57a4d7:c.instructions+=1;goto B57a4d7;
case 0x57a4dc:goto L57a4dc;
case 0x57a4df:c.instructions+=5;goto B57a4df;
case 0x57a4e2:c.instructions+=4;goto B57a4e2;
case 0x57a4e6:c.instructions+=3;goto B57a4e6;
case 0x57a4ea:c.instructions+=2;goto B57a4ea;
case 0x57a4ec:c.instructions+=1;goto B57a4ec;
case 0x57a4ee:goto L57a4ee;
case 0x57a4ef:goto L57a4ef;
case 0x57a4f0:c.instructions+=4;goto B57a4f0;
case 0x57a4f5:c.instructions+=3;goto B57a4f5;
case 0x57a4f6:c.instructions+=2;goto B57a4f6;
case 0x57a4f7:c.instructions+=1;goto B57a4f7;
case 0x57a4f8:goto L57a4f8;
case 0x57a4fa:c.instructions+=3;goto B57a4fa;
case 0x57a4fb:c.instructions+=2;goto B57a4fb;
case 0x57a4fc:c.instructions+=1;goto B57a4fc;
case 0x57a500:goto L57a500;
case 0x57a504:c.instructions+=2;goto B57a504;
case 0x57a505:c.instructions+=1;goto B57a505;
case 0x57a50a:goto L57a50a;
case 0x57a50b:c.instructions+=1;goto B57a50b;
case 0x57a510:goto L57a510;
case 0x57a513:c.instructions+=4;goto B57a513;
case 0x57a514:c.instructions+=3;goto B57a514;
case 0x57a515:c.instructions+=2;goto B57a515;
case 0x57a517:c.instructions+=1;goto B57a517;
case 0x57a520:goto L57a520;
case 0x57a527:c.instructions+=2;goto B57a527;
case 0x57a529:c.instructions+=1;goto B57a529;
case 0x57a52b:goto L57a52b;
case 0x57a532:c.instructions+=4;goto B57a532;
case 0x57a538:c.instructions+=3;goto B57a538;
case 0x57a53a:c.instructions+=2;goto B57a53a;
case 0x57a53d:c.instructions+=1;goto B57a53d;
case 0x57a53f:goto L57a53f;
case 0x57a544:goto L57a544;
case 0x57a546:goto L57a546;
case 0x57a549:c.instructions+=1;goto B57a549;
case 0x57a54b:goto L57a54b;
case 0x57a54d:c.instructions+=2;goto B57a54d;
case 0x57a552:c.instructions+=1;goto B57a552;
case 0x57a556:goto L57a556;
case 0x57a558:goto L57a558;
case 0x57a55a:c.instructions+=7;goto B57a55a;
case 0x57a55b:c.instructions+=6;goto B57a55b;
case 0x57a560:c.instructions+=5;goto B57a560;
case 0x57a562:c.instructions+=4;goto B57a562;
case 0x57a563:c.instructions+=3;goto B57a563;
case 0x57a567:c.instructions+=2;goto B57a567;
case 0x57a568:c.instructions+=1;goto B57a568;
case 0x57a56d:goto L57a56d;
case 0x57a570:goto L57a570;
case 0x57a571:c.instructions+=2;goto B57a571;
case 0x57a574:c.instructions+=1;goto B57a574;
case 0x57a576:goto L57a576;
case 0x57a577:c.instructions+=3;goto B57a577;
case 0x57a578:c.instructions+=2;goto B57a578;
case 0x57a57b:c.instructions+=1;goto B57a57b;
case 0x57a580:goto L57a580;
case 0x57a583:c.instructions+=6;goto B57a583;
case 0x57a584:c.instructions+=5;goto B57a584;
case 0x57a586:c.instructions+=4;goto B57a586;
case 0x57a589:c.instructions+=3;goto B57a589;
case 0x57a58b:c.instructions+=2;goto B57a58b;
case 0x57a58c:c.instructions+=1;goto B57a58c;
case 0x57a58e:goto L57a58e;
case 0x57a590:c.instructions+=5;goto B57a590;
case 0x57a593:c.instructions+=4;goto B57a593;
case 0x57a595:c.instructions+=3;goto B57a595;
case 0x57a596:c.instructions+=2;goto B57a596;
case 0x57a599:c.instructions+=1;goto B57a599;
case 0x57a59e:goto L57a59e;
case 0x57a5a1:goto L57a5a1;
case 0x57a5a8:c.instructions+=7;goto B57a5a8;
case 0x57a5ad:c.instructions+=6;goto B57a5ad;
case 0x57a5b0:c.instructions+=5;goto B57a5b0;
case 0x57a5b1:c.instructions+=4;goto B57a5b1;
case 0x57a5b5:c.instructions+=3;goto B57a5b5;
case 0x57a5ba:c.instructions+=2;goto B57a5ba;
case 0x57a5bb:c.instructions+=1;goto B57a5bb;
case 0x57a5c0:goto L57a5c0;
case 0x57a5c3:c.instructions+=1;goto B57a5c3;
case 0x57a5c8:goto L57a5c8;
case 0x57a5ca:c.instructions+=2;goto B57a5ca;
case 0x57a5cf:c.instructions+=1;goto B57a5cf;
case 0x57a5d4:goto L57a5d4;
case 0x57a5d8:c.instructions+=3;goto B57a5d8;
case 0x57a5d9:c.instructions+=2;goto B57a5d9;
case 0x57a5de:c.instructions+=1;goto B57a5de;
case 0x57a5e3:goto L57a5e3;
case 0x57a5e8:c.instructions+=3;goto B57a5e8;
case 0x57a5ea:c.instructions+=2;goto B57a5ea;
case 0x57a5ed:c.instructions+=1;goto B57a5ed;
case 0x57a5ef:goto L57a5ef;
case 0x57a5f4:c.instructions+=1;goto B57a5f4;
case 0x57a5f6:goto L57a5f6;
case 0x57a5fb:c.instructions+=4;goto B57a5fb;
case 0x57a5fe:c.instructions+=3;goto B57a5fe;
case 0x57a603:c.instructions+=2;goto B57a603;
case 0x57a604:c.instructions+=1;goto B57a604;
case 0x57a609:goto L57a609;
case 0x57a60c:c.instructions+=2;goto B57a60c;
case 0x57a60e:c.instructions+=1;goto B57a60e;
case 0x57a610:goto L57a610;
case 0x57a615:goto L57a615;
case 0x57a61c:c.instructions+=5;goto B57a61c;
case 0x57a623:c.instructions+=4;goto B57a623;
case 0x57a626:c.instructions+=3;goto B57a626;
case 0x57a627:c.instructions+=2;goto B57a627;
case 0x57a62c:c.instructions+=1;goto B57a62c;
case 0x57a631:goto L57a631;
case 0x57a634:c.instructions+=3;goto B57a634;
case 0x57a635:c.instructions+=2;goto B57a635;
case 0x57a63a:c.instructions+=1;goto B57a63a;
case 0x57a63f:goto L57a63f;
case 0x57a644:goto L57a644;
case 0x57a645:c.instructions+=3;goto B57a645;
case 0x57a646:c.instructions+=2;goto B57a646;
case 0x57a649:c.instructions+=1;goto B57a649;
case 0x57a650:goto L57a650;
case 0x57a651:c.instructions+=2;goto B57a651;
case 0x57a653:c.instructions+=1;goto B57a653;
case 0x57a658:goto L57a658;
case 0x57a65d:goto L57a65d;
case 0x57a663:c.instructions+=7;goto B57a663;
case 0x57a665:c.instructions+=6;goto B57a665;
case 0x57a668:c.instructions+=5;goto B57a668;
case 0x57a66b:c.instructions+=4;goto B57a66b;
case 0x57a670:c.instructions+=3;goto B57a670;
case 0x57a671:c.instructions+=2;goto B57a671;
case 0x57a673:c.instructions+=1;goto B57a673;
case 0x57a678:goto L57a678;
case 0x57a67d:goto L57a67d;
case 0x57a682:goto L57a682;
case 0x57a687:goto L57a687;
case 0x57a689:c.instructions+=1;goto B57a689;
case 0x57a68e:goto L57a68e;
case 0x57a693:goto L57a693;
case 0x57a698:goto L57a698;
case 0x57a69d:goto L57a69d;
case 0x57a6a2:goto L57a6a2;
case 0x57a6a7:goto L57a6a7;
case 0x57a6ac:goto L57a6ac;
case 0x57a6b1:goto L57a6b1;
case 0x57a6b6:c.instructions+=3;goto B57a6b6;
case 0x57a6b8:c.instructions+=2;goto B57a6b8;
case 0x57a6bd:c.instructions+=1;goto B57a6bd;
case 0x57a6bf:goto L57a6bf;
case 0x57a6c4:c.instructions+=1;goto B57a6c4;
case 0x57a6c9:goto L57a6c9;
case 0x57a6cb:goto L57a6cb;
case 0x57a6d0:c.instructions+=7;goto B57a6d0;
case 0x57a6d6:c.instructions+=6;goto B57a6d6;
case 0x57a6d8:c.instructions+=5;goto B57a6d8;
case 0x57a6db:c.instructions+=4;goto B57a6db;
case 0x57a6dc:c.instructions+=3;goto B57a6dc;
case 0x57a6dd:c.instructions+=2;goto B57a6dd;
case 0x57a6e2:c.instructions+=1;goto B57a6e2;
case 0x57a6e7:goto L57a6e7;
case 0x57a6ec:c.instructions+=2;goto B57a6ec;
case 0x57a6ee:c.instructions+=1;goto B57a6ee;
case 0x57a6f0:goto L57a6f0;
case 0x57a6f6:c.instructions+=6;goto B57a6f6;
case 0x57a6f8:c.instructions+=5;goto B57a6f8;
case 0x57a6fa:c.instructions+=4;goto B57a6fa;
case 0x57a6fd:c.instructions+=3;goto B57a6fd;
case 0x57a6ff:c.instructions+=2;goto B57a6ff;
case 0x57a704:c.instructions+=1;goto B57a704;
case 0x57a706:goto L57a706;
case 0x57a70c:goto L57a70c;
case 0x57a711:goto L57a711;
case 0x57a71b:c.instructions+=1;goto B57a71b;
case 0x57a720:goto L57a720;
case 0x57a725:goto L57a725;
case 0x57a72a:c.instructions+=2;goto B57a72a;
case 0x57a72b:c.instructions+=1;goto B57a72b;
case 0x57a730:goto L57a730;
case 0x57a735:c.instructions+=4;goto B57a735;
case 0x57a738:c.instructions+=3;goto B57a738;
case 0x57a73a:c.instructions+=2;goto B57a73a;
case 0x57a73b:c.instructions+=1;goto B57a73b;
case 0x57a73d:goto L57a73d;
case 0x57a742:c.instructions+=2;goto B57a742;
case 0x57a744:c.instructions+=1;goto B57a744;
case 0x57a746:goto L57a746;
case 0x57a74b:goto L57a74b;
case 0x57a750:c.instructions+=1;goto B57a750;
case 0x57a755:goto L57a755;
case 0x57a757:c.instructions+=1;goto B57a757;
case 0x57a759:goto L57a759;
case 0x57a75e:c.instructions+=1;goto B57a75e;
case 0x57a763:goto L57a763;
case 0x57a768:goto L57a768;
case 0x57a772:c.instructions+=1;goto B57a772;
case 0x57a780:goto L57a780;
case 0x57a781:c.instructions+=9;goto B57a781;
case 0x57a782:c.instructions+=8;goto B57a782;
case 0x57a783:c.instructions+=7;goto B57a783;
case 0x57a787:c.instructions+=6;goto B57a787;
case 0x57a788:c.instructions+=5;goto B57a788;
case 0x57a78d:c.instructions+=4;goto B57a78d;
case 0x57a78f:c.instructions+=3;goto B57a78f;
case 0x57a791:c.instructions+=2;goto B57a791;
case 0x57a793:c.instructions+=1;goto B57a793;
case 0x57a798:goto L57a798;
case 0x57a79c:c.instructions+=2;goto B57a79c;
case 0x57a79e:c.instructions+=1;goto B57a79e;
case 0x57a7a0:goto L57a7a0;
case 0x57a7a3:c.instructions+=3;goto B57a7a3;
case 0x57a7a4:c.instructions+=2;goto B57a7a4;
case 0x57a7a6:c.instructions+=1;goto B57a7a6;
case 0x57a7ab:goto L57a7ab;
case 0x57a7ae:c.instructions+=3;goto B57a7ae;
case 0x57a7af:c.instructions+=2;goto B57a7af;
case 0x57a7b1:c.instructions+=1;goto B57a7b1;
case 0x57a7b6:goto L57a7b6;
case 0x57a7b9:c.instructions+=3;goto B57a7b9;
case 0x57a7bb:c.instructions+=2;goto B57a7bb;
case 0x57a7bd:c.instructions+=1;goto B57a7bd;
case 0x57a7c3:goto L57a7c3;
case 0x57a7c6:goto L57a7c6;
case 0x57a7c9:c.instructions+=3;goto B57a7c9;
case 0x57a7ca:c.instructions+=2;goto B57a7ca;
case 0x57a7cc:c.instructions+=1;goto B57a7cc;
case 0x57a7d1:goto L57a7d1;
case 0x57a7d2:c.instructions+=2;goto B57a7d2;
case 0x57a7d4:c.instructions+=1;goto B57a7d4;
case 0x57a7d9:goto L57a7d9;
case 0x57a7dc:c.instructions+=3;goto B57a7dc;
case 0x57a7dd:c.instructions+=2;goto B57a7dd;
case 0x57a7df:c.instructions+=1;goto B57a7df;
case 0x57a7e4:goto L57a7e4;
case 0x57a7e7:c.instructions+=4;goto B57a7e7;
case 0x57a7e8:c.instructions+=3;goto B57a7e8;
case 0x57a7eb:c.instructions+=2;goto B57a7eb;
case 0x57a7ed:c.instructions+=1;goto B57a7ed;
case 0x57a7ef:goto L57a7ef;
case 0x57a7f1:c.instructions+=1;goto B57a7f1;
case 0x57a7f6:goto L57a7f6;
case 0x57a7f7:c.instructions+=4;goto B57a7f7;
case 0x57a7f8:c.instructions+=3;goto B57a7f8;
case 0x57a7f9:c.instructions+=2;goto B57a7f9;
case 0x57a7fa:c.instructions+=1;goto B57a7fa;
case 0x57a7fd:goto L57a7fd;
case 0x57a800:c.instructions+=4;goto B57a800;
case 0x57a801:c.instructions+=3;goto B57a801;
case 0x57a803:c.instructions+=2;goto B57a803;
case 0x57a80a:c.instructions+=1;goto B57a80a;
case 0x57a80f:goto L57a80f;
case 0x57a812:c.instructions+=3;goto B57a812;
case 0x57a813:c.instructions+=2;goto B57a813;
case 0x57a815:c.instructions+=1;goto B57a815;
case 0x57a81a:goto L57a81a;
case 0x57a81d:c.instructions+=3;goto B57a81d;
case 0x57a81f:c.instructions+=2;goto B57a81f;
case 0x57a821:c.instructions+=1;goto B57a821;
case 0x57a823:goto L57a823;
case 0x57a826:goto L57a826;
case 0x57a829:c.instructions+=3;goto B57a829;
case 0x57a82a:c.instructions+=2;goto B57a82a;
case 0x57a82c:c.instructions+=1;goto B57a82c;
case 0x57a831:goto L57a831;
case 0x57a832:c.instructions+=2;goto B57a832;
case 0x57a834:c.instructions+=1;goto B57a834;
case 0x57a839:goto L57a839;
case 0x57a83c:c.instructions+=3;goto B57a83c;
case 0x57a83d:c.instructions+=2;goto B57a83d;
case 0x57a83f:c.instructions+=1;goto B57a83f;
case 0x57a844:goto L57a844;
case 0x57a847:c.instructions+=4;goto B57a847;
case 0x57a848:c.instructions+=3;goto B57a848;
case 0x57a84b:c.instructions+=2;goto B57a84b;
case 0x57a84d:c.instructions+=1;goto B57a84d;
case 0x57a84f:goto L57a84f;
case 0x57a851:c.instructions+=1;goto B57a851;
case 0x57a856:goto L57a856;
case 0x57a857:c.instructions+=4;goto B57a857;
case 0x57a858:c.instructions+=3;goto B57a858;
case 0x57a859:c.instructions+=2;goto B57a859;
case 0x57a85a:c.instructions+=1;goto B57a85a;
case 0x57a860:goto L57a860;
case 0x57a862:c.instructions+=61;goto B57a862;
case 0x57a867:c.instructions+=60;goto B57a867;
case 0x57a86d:c.instructions+=59;goto B57a86d;
case 0x57a86e:c.instructions+=58;goto B57a86e;
case 0x57a875:c.instructions+=57;goto B57a875;
case 0x57a876:c.instructions+=56;goto B57a876;
case 0x57a877:c.instructions+=55;goto B57a877;
case 0x57a878:c.instructions+=54;goto B57a878;
case 0x57a87a:c.instructions+=53;goto B57a87a;
case 0x57a87c:c.instructions+=52;goto B57a87c;
case 0x57a882:c.instructions+=51;goto B57a882;
case 0x57a888:c.instructions+=50;goto B57a888;
case 0x57a88e:c.instructions+=49;goto B57a88e;
case 0x57a88f:c.instructions+=48;goto B57a88f;
case 0x57a893:c.instructions+=47;goto B57a893;
case 0x57a895:c.instructions+=46;goto B57a895;
case 0x57a898:c.instructions+=45;goto B57a898;
case 0x57a89e:c.instructions+=44;goto B57a89e;
case 0x57a8a2:c.instructions+=43;goto B57a8a2;
case 0x57a8a5:c.instructions+=42;goto B57a8a5;
case 0x57a8a8:c.instructions+=41;goto B57a8a8;
case 0x57a8ab:c.instructions+=40;goto B57a8ab;
case 0x57a8ae:c.instructions+=39;goto B57a8ae;
case 0x57a8b1:c.instructions+=38;goto B57a8b1;
case 0x57a8b7:c.instructions+=37;goto B57a8b7;
case 0x57a8b9:c.instructions+=36;goto B57a8b9;
case 0x57a8bb:c.instructions+=35;goto B57a8bb;
case 0x57a8be:c.instructions+=34;goto B57a8be;
case 0x57a8c1:c.instructions+=33;goto B57a8c1;
case 0x57a8c4:c.instructions+=32;goto B57a8c4;
case 0x57a8c7:c.instructions+=31;goto B57a8c7;
case 0x57a8ca:c.instructions+=30;goto B57a8ca;
case 0x57a8cd:c.instructions+=29;goto B57a8cd;
case 0x57a8d0:c.instructions+=28;goto B57a8d0;
case 0x57a8d6:c.instructions+=27;goto B57a8d6;
case 0x57a8dc:c.instructions+=26;goto B57a8dc;
case 0x57a8e2:c.instructions+=25;goto B57a8e2;
case 0x57a8e5:c.instructions+=24;goto B57a8e5;
case 0x57a8eb:c.instructions+=23;goto B57a8eb;
case 0x57a8f1:c.instructions+=22;goto B57a8f1;
case 0x57a8f7:c.instructions+=21;goto B57a8f7;
case 0x57a901:c.instructions+=20;goto B57a901;
case 0x57a907:c.instructions+=19;goto B57a907;
case 0x57a90a:c.instructions+=18;goto B57a90a;
case 0x57a90d:c.instructions+=17;goto B57a90d;
case 0x57a910:c.instructions+=16;goto B57a910;
case 0x57a913:c.instructions+=15;goto B57a913;
case 0x57a91a:c.instructions+=14;goto B57a91a;
case 0x57a920:c.instructions+=13;goto B57a920;
case 0x57a926:c.instructions+=12;goto B57a926;
case 0x57a92c:c.instructions+=11;goto B57a92c;
case 0x57a932:c.instructions+=10;goto B57a932;
case 0x57a938:c.instructions+=9;goto B57a938;
case 0x57a93e:c.instructions+=8;goto B57a93e;
case 0x57a944:c.instructions+=7;goto B57a944;
case 0x57a94a:c.instructions+=6;goto B57a94a;
case 0x57a950:c.instructions+=5;goto B57a950;
case 0x57a956:c.instructions+=4;goto B57a956;
case 0x57a95c:c.instructions+=3;goto B57a95c;
case 0x57a962:c.instructions+=2;goto B57a962;
case 0x57a967:c.instructions+=1;goto B57a967;
case 0x57a96d:goto L57a96d;
case 0x57a96f:goto L57a96f;
case 0x57a975:c.instructions+=2;goto B57a975;
case 0x57a97a:c.instructions+=1;goto B57a97a;
case 0x57a97c:goto L57a97c;
case 0x57a981:c.instructions+=5;goto B57a981;
case 0x57a987:c.instructions+=4;goto B57a987;
case 0x57a98c:c.instructions+=3;goto B57a98c;
case 0x57a98e:c.instructions+=2;goto B57a98e;
case 0x57a994:c.instructions+=1;goto B57a994;
case 0x57a999:goto L57a999;
case 0x57a99d:c.instructions+=8;goto B57a99d;
case 0x57a99e:c.instructions+=7;goto B57a99e;
case 0x57a9a5:c.instructions+=6;goto B57a9a5;
case 0x57a9a7:c.instructions+=5;goto B57a9a7;
case 0x57a9a8:c.instructions+=4;goto B57a9a8;
case 0x57a9a9:c.instructions+=3;goto B57a9a9;
case 0x57a9b0:c.instructions+=2;goto B57a9b0;
case 0x57a9b3:c.instructions+=1;goto B57a9b3;
case 0x57a9c0:goto L57a9c0;
case 0x57a9c2:c.instructions+=15;goto B57a9c2;
case 0x57a9c7:c.instructions+=14;goto B57a9c7;
case 0x57a9cd:c.instructions+=13;goto B57a9cd;
case 0x57a9ce:c.instructions+=12;goto B57a9ce;
case 0x57a9d5:c.instructions+=11;goto B57a9d5;
case 0x57a9d6:c.instructions+=10;goto B57a9d6;
case 0x57a9d7:c.instructions+=9;goto B57a9d7;
case 0x57a9d8:c.instructions+=8;goto B57a9d8;
case 0x57a9da:c.instructions+=7;goto B57a9da;
case 0x57a9db:c.instructions+=6;goto B57a9db;
case 0x57a9df:c.instructions+=5;goto B57a9df;
case 0x57a9e5:c.instructions+=4;goto B57a9e5;
case 0x57a9eb:c.instructions+=3;goto B57a9eb;
case 0x57a9ed:c.instructions+=2;goto B57a9ed;
case 0x57a9f5:c.instructions+=1;goto B57a9f5;
case 0x57a9f7:goto L57a9f7;
case 0x57a9f9:c.instructions+=7;goto B57a9f9;
case 0x57a9fb:c.instructions+=6;goto B57a9fb;
case 0x57a9fe:c.instructions+=5;goto B57a9fe;
case 0x57aa00:c.instructions+=4;goto B57aa00;
case 0x57aa03:c.instructions+=3;goto B57aa03;
case 0x57aa06:c.instructions+=2;goto B57aa06;
case 0x57aa08:c.instructions+=1;goto B57aa08;
case 0x57aa0a:goto L57aa0a;
case 0x57aa0b:c.instructions+=2;goto B57aa0b;
case 0x57aa10:c.instructions+=1;goto B57aa10;
case 0x57aa15:goto L57aa15;
case 0x57aa1b:c.instructions+=2;goto B57aa1b;
case 0x57aa1d:c.instructions+=1;goto B57aa1d;
case 0x57aa1f:goto L57aa1f;
case 0x57aa24:c.instructions+=2;goto B57aa24;
case 0x57aa2e:c.instructions+=1;goto B57aa2e;
case 0x57aa30:goto L57aa30;
case 0x57aa31:c.instructions+=1;goto B57aa31;
case 0x57aa36:goto L57aa36;
case 0x57aa39:goto L57aa39;
case 0x57aa3b:c.instructions+=1;goto B57aa3b;
case 0x57aa3d:goto L57aa3d;
case 0x57aa43:c.instructions+=3;goto B57aa43;
case 0x57aa49:c.instructions+=2;goto B57aa49;
case 0x57aa4b:c.instructions+=1;goto B57aa4b;
case 0x57aa4d:goto L57aa4d;
case 0x57aa50:goto L57aa50;
case 0x57aa52:c.instructions+=6;goto B57aa52;
case 0x57aa54:c.instructions+=5;goto B57aa54;
case 0x57aa57:c.instructions+=4;goto B57aa57;
case 0x57aa59:c.instructions+=3;goto B57aa59;
case 0x57aa5a:c.instructions+=2;goto B57aa5a;
case 0x57aa5d:c.instructions+=1;goto B57aa5d;
case 0x57aa62:goto L57aa62;
case 0x57aa64:c.instructions+=3;goto B57aa64;
case 0x57aa67:c.instructions+=2;goto B57aa67;
case 0x57aa69:c.instructions+=1;goto B57aa69;
case 0x57aa6b:goto L57aa6b;
case 0x57aa71:c.instructions+=2;goto B57aa71;
case 0x57aa73:c.instructions+=1;goto B57aa73;
case 0x57aa75:goto L57aa75;
case 0x57aa76:c.instructions+=1;goto B57aa76;
case 0x57aa7b:goto L57aa7b;
case 0x57aa7e:goto L57aa7e;
case 0x57aa80:c.instructions+=2;goto B57aa80;
case 0x57aa82:c.instructions+=1;goto B57aa82;
case 0x57aa84:goto L57aa84;
case 0x57aa86:c.instructions+=5;goto B57aa86;
case 0x57aa89:c.instructions+=4;goto B57aa89;
case 0x57aa8b:c.instructions+=3;goto B57aa8b;
case 0x57aa8c:c.instructions+=2;goto B57aa8c;
case 0x57aa8f:c.instructions+=1;goto B57aa8f;
case 0x57aa94:goto L57aa94;
case 0x57aa96:c.instructions+=3;goto B57aa96;
case 0x57aa99:c.instructions+=2;goto B57aa99;
case 0x57aa9b:c.instructions+=1;goto B57aa9b;
case 0x57aa9d:goto L57aa9d;
case 0x57aa9f:c.instructions+=2;goto B57aa9f;
case 0x57aaa1:c.instructions+=1;goto B57aaa1;
case 0x57aaa3:goto L57aaa3;
case 0x57aaa5:c.instructions+=5;goto B57aaa5;
case 0x57aaa8:c.instructions+=4;goto B57aaa8;
case 0x57aaaa:c.instructions+=3;goto B57aaaa;
case 0x57aaab:c.instructions+=2;goto B57aaab;
case 0x57aaae:c.instructions+=1;goto B57aaae;
case 0x57aab3:goto L57aab3;
case 0x57aab5:c.instructions+=3;goto B57aab5;
case 0x57aab8:c.instructions+=2;goto B57aab8;
case 0x57aaba:c.instructions+=1;goto B57aaba;
case 0x57aabc:goto L57aabc;
case 0x57aac0:c.instructions+=6;goto B57aac0;
case 0x57aac1:c.instructions+=5;goto B57aac1;
case 0x57aac2:c.instructions+=4;goto B57aac2;
case 0x57aac3:c.instructions+=3;goto B57aac3;
case 0x57aaca:c.instructions+=2;goto B57aaca;
case 0x57aacd:c.instructions+=1;goto B57aacd;
case 0x57aad0:goto L57aad0;
case 0x57aad1:c.instructions+=3;goto B57aad1;
case 0x57aad3:c.instructions+=2;goto B57aad3;
case 0x57aad7:c.instructions+=1;goto B57aad7;
case 0x57aadd:goto L57aadd;
case 0x57aae2:c.instructions+=5;goto B57aae2;
case 0x57aae3:c.instructions+=4;goto B57aae3;
case 0x57aae5:c.instructions+=3;goto B57aae5;
case 0x57aae7:c.instructions+=2;goto B57aae7;
case 0x57aae8:c.instructions+=1;goto B57aae8;
case 0x57aaee:goto L57aaee;
case 0x57aaf3:c.instructions+=1;goto B57aaf3;
case 0x57aaf8:goto L57aaf8;
case 0x57aafa:c.instructions+=1;goto B57aafa;
case 0x57ab00:goto L57ab00;
case 0x57ab06:c.instructions+=3;goto B57ab06;
case 0x57ab0b:c.instructions+=2;goto B57ab0b;
case 0x57ab0d:c.instructions+=1;goto B57ab0d;
case 0x57ab13:goto L57ab13;
case 0x57ab1a:c.instructions+=1;goto B57ab1a;
case 0x57ab20:goto L57ab20;
case 0x57ab26:c.instructions+=15;goto B57ab26;
case 0x57ab29:c.instructions+=14;goto B57ab29;
case 0x57ab2f:c.instructions+=13;goto B57ab2f;
case 0x57ab32:c.instructions+=12;goto B57ab32;
case 0x57ab38:c.instructions+=11;goto B57ab38;
case 0x57ab3e:c.instructions+=10;goto B57ab3e;
case 0x57ab44:c.instructions+=9;goto B57ab44;
case 0x57ab4a:c.instructions+=8;goto B57ab4a;
case 0x57ab4f:c.instructions+=7;goto B57ab4f;
case 0x57ab50:c.instructions+=6;goto B57ab50;
case 0x57ab56:c.instructions+=5;goto B57ab56;
case 0x57ab5c:c.instructions+=4;goto B57ab5c;
case 0x57ab66:c.instructions+=3;goto B57ab66;
case 0x57ab6c:c.instructions+=2;goto B57ab6c;
case 0x57ab72:c.instructions+=1;goto B57ab72;
case 0x57ab77:goto L57ab77;
case 0x57ab7c:c.instructions+=3;goto B57ab7c;
case 0x57ab7f:c.instructions+=2;goto B57ab7f;
case 0x57ab84:c.instructions+=1;goto B57ab84;
case 0x57ab8a:goto L57ab8a;
case 0x57ab8b:c.instructions+=3;goto B57ab8b;
case 0x57ab8c:c.instructions+=2;goto B57ab8c;
case 0x57ab91:c.instructions+=1;goto B57ab91;
case 0x57ab96:goto L57ab96;
case 0x57ab99:c.instructions+=6;goto B57ab99;
case 0x57ab9a:c.instructions+=5;goto B57ab9a;
case 0x57ab9c:c.instructions+=4;goto B57ab9c;
case 0x57ab9e:c.instructions+=3;goto B57ab9e;
case 0x57aba3:c.instructions+=2;goto B57aba3;
case 0x57aba5:c.instructions+=1;goto B57aba5;
case 0x57abaa:goto L57abaa;
case 0x57abad:c.instructions+=15;goto B57abad;
case 0x57abb0:c.instructions+=14;goto B57abb0;
case 0x57abb7:c.instructions+=13;goto B57abb7;
case 0x57abbe:c.instructions+=12;goto B57abbe;
case 0x57abc1:c.instructions+=11;goto B57abc1;
case 0x57abc4:c.instructions+=10;goto B57abc4;
case 0x57abca:c.instructions+=9;goto B57abca;
case 0x57abd0:c.instructions+=8;goto B57abd0;
case 0x57abd6:c.instructions+=7;goto B57abd6;
case 0x57abdc:c.instructions+=6;goto B57abdc;
case 0x57abe2:c.instructions+=5;goto B57abe2;
case 0x57abe8:c.instructions+=4;goto B57abe8;
case 0x57abea:c.instructions+=3;goto B57abea;
case 0x57abec:c.instructions+=2;goto B57abec;
case 0x57abf2:c.instructions+=1;goto B57abf2;
case 0x57abf4:goto L57abf4;
case 0x57abf5:c.instructions+=2;goto B57abf5;
case 0x57abf7:c.instructions+=1;goto B57abf7;
case 0x57abfc:goto L57abfc;
case 0x57ac02:c.instructions+=3;goto B57ac02;
case 0x57ac03:c.instructions+=2;goto B57ac03;
case 0x57ac05:c.instructions+=1;goto B57ac05;
case 0x57ac07:goto L57ac07;
case 0x57ac08:c.instructions+=5;goto B57ac08;
case 0x57ac09:c.instructions+=4;goto B57ac09;
case 0x57ac0a:c.instructions+=3;goto B57ac0a;
case 0x57ac11:c.instructions+=2;goto B57ac11;
case 0x57ac12:c.instructions+=1;goto B57ac12;
case 0x57ac13:goto L57ac13;
case 0x57ac19:c.instructions+=4;goto B57ac19;
case 0x57ac1f:c.instructions+=3;goto B57ac1f;
case 0x57ac25:c.instructions+=2;goto B57ac25;
case 0x57ac2b:c.instructions+=1;goto B57ac2b;
case 0x57ac31:goto L57ac31;
case 0x57ac32:c.instructions+=1;goto B57ac32;
case 0x57ac33:goto L57ac33;
case 0x57ac34:c.instructions+=1;goto B57ac34;
case 0x57ac40:goto L57ac40;
case 0x57ac41:c.instructions+=18;goto B57ac41;
case 0x57ac43:c.instructions+=17;goto B57ac43;
case 0x57ac46:c.instructions+=16;goto B57ac46;
case 0x57ac48:c.instructions+=15;goto B57ac48;
case 0x57ac4d:c.instructions+=14;goto B57ac4d;
case 0x57ac53:c.instructions+=13;goto B57ac53;
case 0x57ac54:c.instructions+=12;goto B57ac54;
case 0x57ac5b:c.instructions+=11;goto B57ac5b;
case 0x57ac5e:c.instructions+=10;goto B57ac5e;
case 0x57ac5f:c.instructions+=9;goto B57ac5f;
case 0x57ac60:c.instructions+=8;goto B57ac60;
case 0x57ac64:c.instructions+=7;goto B57ac64;
case 0x57ac68:c.instructions+=6;goto B57ac68;
case 0x57ac69:c.instructions+=5;goto B57ac69;
case 0x57ac6d:c.instructions+=4;goto B57ac6d;
case 0x57ac71:c.instructions+=3;goto B57ac71;
case 0x57ac79:c.instructions+=2;goto B57ac79;
case 0x57ac7f:c.instructions+=1;goto B57ac7f;
case 0x57ac80:goto L57ac80;
case 0x57ac82:c.instructions+=3;goto B57ac82;
case 0x57ac84:c.instructions+=2;goto B57ac84;
case 0x57ac86:c.instructions+=1;goto B57ac86;
case 0x57ac88:goto L57ac88;
case 0x57ac8b:c.instructions+=4;goto B57ac8b;
case 0x57ac8c:c.instructions+=3;goto B57ac8c;
case 0x57ac8f:c.instructions+=2;goto B57ac8f;
case 0x57ac90:c.instructions+=1;goto B57ac90;
case 0x57ac95:goto L57ac95;
case 0x57ac98:c.instructions+=2;goto B57ac98;
case 0x57ac9a:c.instructions+=1;goto B57ac9a;
case 0x57ac9c:goto L57ac9c;
case 0x57ac9e:c.instructions+=1;goto B57ac9e;
case 0x57aca0:goto L57aca0;
case 0x57aca1:goto L57aca1;
case 0x57aca3:c.instructions+=2;goto B57aca3;
case 0x57aca5:c.instructions+=1;goto B57aca5;
case 0x57aca7:goto L57aca7;
case 0x57acac:c.instructions+=2;goto B57acac;
case 0x57acb0:c.instructions+=1;goto B57acb0;
case 0x57acb5:goto L57acb5;
case 0x57acb9:c.instructions+=3;goto B57acb9;
case 0x57acba:c.instructions+=2;goto B57acba;
case 0x57acbc:c.instructions+=1;goto B57acbc;
case 0x57acc1:goto L57acc1;
case 0x57acc5:c.instructions+=3;goto B57acc5;
case 0x57acc9:c.instructions+=2;goto B57acc9;
case 0x57accb:c.instructions+=1;goto B57accb;
case 0x57accd:goto L57accd;
case 0x57acd0:goto L57acd0;
case 0x57acd2:c.instructions+=6;goto B57acd2;
case 0x57acd4:c.instructions+=5;goto B57acd4;
case 0x57acd7:c.instructions+=4;goto B57acd7;
case 0x57acd9:c.instructions+=3;goto B57acd9;
case 0x57acda:c.instructions+=2;goto B57acda;
case 0x57acdd:c.instructions+=1;goto B57acdd;
case 0x57ace2:goto L57ace2;
case 0x57ace6:c.instructions+=4;goto B57ace6;
case 0x57acea:c.instructions+=3;goto B57acea;
case 0x57aced:c.instructions+=2;goto B57aced;
case 0x57acef:c.instructions+=1;goto B57acef;
case 0x57acf1:goto L57acf1;
case 0x57acf5:c.instructions+=7;goto B57acf5;
case 0x57acf6:c.instructions+=6;goto B57acf6;
case 0x57acf7:c.instructions+=5;goto B57acf7;
case 0x57acfe:c.instructions+=4;goto B57acfe;
case 0x57acff:c.instructions+=3;goto B57acff;
case 0x57ad01:c.instructions+=2;goto B57ad01;
case 0x57ad02:c.instructions+=1;goto B57ad02;
case 0x57ad05:goto L57ad05;
case 0x57ad07:c.instructions+=1;goto B57ad07;
case 0x57ad09:goto L57ad09;
case 0x57ad0b:c.instructions+=10;goto B57ad0b;
case 0x57ad0e:c.instructions+=9;goto B57ad0e;
case 0x57ad10:c.instructions+=8;goto B57ad10;
case 0x57ad13:c.instructions+=7;goto B57ad13;
case 0x57ad17:c.instructions+=6;goto B57ad17;
case 0x57ad19:c.instructions+=5;goto B57ad19;
case 0x57ad1d:c.instructions+=4;goto B57ad1d;
case 0x57ad21:c.instructions+=3;goto B57ad21;
case 0x57ad24:c.instructions+=2;goto B57ad24;
case 0x57ad26:c.instructions+=1;goto B57ad26;
case 0x57ad30:goto L57ad30;
case 0x57ad34:c.instructions+=5;goto B57ad34;
case 0x57ad35:c.instructions+=4;goto B57ad35;
case 0x57ad37:c.instructions+=3;goto B57ad37;
case 0x57ad38:c.instructions+=2;goto B57ad38;
case 0x57ad3a:c.instructions+=1;goto B57ad3a;
case 0x57ad3f:goto L57ad3f;
case 0x57ad41:c.instructions+=1;goto B57ad41;
case 0x57ad43:goto L57ad43;
case 0x57ad45:c.instructions+=12;goto B57ad45;
case 0x57ad48:c.instructions+=11;goto B57ad48;
case 0x57ad4a:c.instructions+=10;goto B57ad4a;
case 0x57ad4d:c.instructions+=9;goto B57ad4d;
case 0x57ad53:c.instructions+=8;goto B57ad53;
case 0x57ad59:c.instructions+=7;goto B57ad59;
case 0x57ad5b:c.instructions+=6;goto B57ad5b;
case 0x57ad5e:c.instructions+=5;goto B57ad5e;
case 0x57ad61:c.instructions+=4;goto B57ad61;
case 0x57ad63:c.instructions+=3;goto B57ad63;
case 0x57ad68:c.instructions+=2;goto B57ad68;
case 0x57ad69:c.instructions+=1;goto B57ad69;
case 0x57ad6c:goto L57ad6c;
case 0x57ad6e:c.instructions+=2;goto B57ad6e;
case 0x57ad6f:c.instructions+=1;goto B57ad6f;
case 0x57ad80:goto L57ad80;
case 0x57ad81:c.instructions+=11;goto B57ad81;
case 0x57ad82:c.instructions+=10;goto B57ad82;
case 0x57ad83:c.instructions+=9;goto B57ad83;
case 0x57ad84:c.instructions+=8;goto B57ad84;
case 0x57ad88:c.instructions+=7;goto B57ad88;
case 0x57ad89:c.instructions+=6;goto B57ad89;
case 0x57ad8b:c.instructions+=5;goto B57ad8b;
case 0x57ad90:c.instructions+=4;goto B57ad90;
case 0x57ad92:c.instructions+=3;goto B57ad92;
case 0x57ad94:c.instructions+=2;goto B57ad94;
case 0x57ad98:c.instructions+=1;goto B57ad98;
case 0x57ad9d:goto L57ad9d;
case 0x57ada0:c.instructions+=3;goto B57ada0;
case 0x57ada1:c.instructions+=2;goto B57ada1;
case 0x57ada3:c.instructions+=1;goto B57ada3;
case 0x57ada8:goto L57ada8;
case 0x57adab:c.instructions+=3;goto B57adab;
case 0x57adac:c.instructions+=2;goto B57adac;
case 0x57adae:c.instructions+=1;goto B57adae;
case 0x57adb3:goto L57adb3;
case 0x57adb9:c.instructions+=3;goto B57adb9;
case 0x57adba:c.instructions+=2;goto B57adba;
case 0x57adbc:c.instructions+=1;goto B57adbc;
case 0x57adc1:goto L57adc1;
case 0x57adc3:c.instructions+=3;goto B57adc3;
case 0x57adc5:c.instructions+=2;goto B57adc5;
case 0x57adc7:c.instructions+=1;goto B57adc7;
case 0x57adc9:goto L57adc9;
case 0x57adcf:c.instructions+=1;goto B57adcf;
case 0x57add0:goto L57add0;
case 0x57add1:c.instructions+=2;goto B57add1;
case 0x57add3:c.instructions+=1;goto B57add3;
case 0x57add8:goto L57add8;
case 0x57adda:c.instructions+=4;goto B57adda;
case 0x57addb:c.instructions+=3;goto B57addb;
case 0x57adde:c.instructions+=2;goto B57adde;
case 0x57ade0:c.instructions+=1;goto B57ade0;
case 0x57ade2:goto L57ade2;
case 0x57ade6:goto L57ade6;
case 0x57adec:c.instructions+=3;goto B57adec;
case 0x57aded:c.instructions+=2;goto B57aded;
case 0x57adef:c.instructions+=1;goto B57adef;
case 0x57adf4:goto L57adf4;
case 0x57adf7:c.instructions+=2;goto B57adf7;
case 0x57adff:c.instructions+=1;goto B57adff;
case 0x57ae05:goto L57ae05;
case 0x57ae0b:c.instructions+=1;goto B57ae0b;
case 0x57ae10:goto L57ae10;
case 0x57ae13:c.instructions+=2;goto B57ae13;
case 0x57ae15:c.instructions+=1;goto B57ae15;
case 0x57ae17:goto L57ae17;
case 0x57ae1d:c.instructions+=4;goto B57ae1d;
case 0x57ae23:c.instructions+=3;goto B57ae23;
case 0x57ae26:c.instructions+=2;goto B57ae26;
case 0x57ae28:c.instructions+=1;goto B57ae28;
case 0x57ae2a:goto L57ae2a;
case 0x57ae2c:c.instructions+=1;goto B57ae2c;
case 0x57ae30:goto L57ae30;
case 0x57ae33:c.instructions+=5;goto B57ae33;
case 0x57ae3a:c.instructions+=4;goto B57ae3a;
case 0x57ae3b:c.instructions+=3;goto B57ae3b;
case 0x57ae3c:c.instructions+=2;goto B57ae3c;
case 0x57ae3f:c.instructions+=1;goto B57ae3f;
case 0x57ae41:goto L57ae41;
case 0x57ae46:goto L57ae46;
case 0x57ae48:c.instructions+=1;goto B57ae48;
case 0x57ae4d:goto L57ae4d;
case 0x57ae50:c.instructions+=2;goto B57ae50;
case 0x57ae52:c.instructions+=1;goto B57ae52;
case 0x57ae54:goto L57ae54;
case 0x57ae5a:c.instructions+=4;goto B57ae5a;
case 0x57ae60:c.instructions+=3;goto B57ae60;
case 0x57ae63:c.instructions+=2;goto B57ae63;
case 0x57ae65:c.instructions+=1;goto B57ae65;
case 0x57ae6b:goto L57ae6b;
case 0x57ae6d:c.instructions+=1;goto B57ae6d;
case 0x57ae70:goto L57ae70;
case 0x57ae77:c.instructions+=5;goto B57ae77;
case 0x57ae78:c.instructions+=4;goto B57ae78;
case 0x57ae7b:c.instructions+=3;goto B57ae7b;
case 0x57ae7c:c.instructions+=2;goto B57ae7c;
case 0x57ae7f:c.instructions+=1;goto B57ae7f;
case 0x57ae81:goto L57ae81;
case 0x57ae86:goto L57ae86;
case 0x57ae89:c.instructions+=2;goto B57ae89;
case 0x57ae8b:c.instructions+=1;goto B57ae8b;
case 0x57ae91:goto L57ae91;
case 0x57ae94:c.instructions+=3;goto B57ae94;
case 0x57ae97:c.instructions+=2;goto B57ae97;
case 0x57ae9c:c.instructions+=1;goto B57ae9c;
case 0x57aea0:goto L57aea0;
case 0x57aea4:c.instructions+=26;goto B57aea4;
case 0x57aea7:c.instructions+=25;goto B57aea7;
case 0x57aea9:c.instructions+=24;goto B57aea9;
case 0x57aeac:c.instructions+=23;goto B57aeac;
case 0x57aeaf:c.instructions+=22;goto B57aeaf;
case 0x57aeb1:c.instructions+=21;goto B57aeb1;
case 0x57aeb5:c.instructions+=20;goto B57aeb5;
case 0x57aeb8:c.instructions+=19;goto B57aeb8;
case 0x57aeba:c.instructions+=18;goto B57aeba;
case 0x57aebe:c.instructions+=17;goto B57aebe;
case 0x57aec1:c.instructions+=16;goto B57aec1;
case 0x57aec3:c.instructions+=15;goto B57aec3;
case 0x57aec7:c.instructions+=14;goto B57aec7;
case 0x57aeca:c.instructions+=13;goto B57aeca;
case 0x57aecc:c.instructions+=12;goto B57aecc;
case 0x57aed0:c.instructions+=11;goto B57aed0;
case 0x57aed3:c.instructions+=10;goto B57aed3;
case 0x57aed5:c.instructions+=9;goto B57aed5;
case 0x57aed9:c.instructions+=8;goto B57aed9;
case 0x57aedc:c.instructions+=7;goto B57aedc;
case 0x57aede:c.instructions+=6;goto B57aede;
case 0x57aee2:c.instructions+=5;goto B57aee2;
case 0x57aee5:c.instructions+=4;goto B57aee5;
case 0x57aee7:c.instructions+=3;goto B57aee7;
case 0x57aeea:c.instructions+=2;goto B57aeea;
case 0x57aeeb:c.instructions+=1;goto B57aeeb;
case 0x57aeed:goto L57aeed;
case 0x57aef3:c.instructions+=4;goto B57aef3;
case 0x57aef9:c.instructions+=3;goto B57aef9;
case 0x57aefc:c.instructions+=2;goto B57aefc;
case 0x57aefe:c.instructions+=1;goto B57aefe;
case 0x57af00:goto L57af00;
case 0x57af07:c.instructions+=1;goto B57af07;
case 0x57af0e:goto L57af0e;
case 0x57af14:goto L57af14;
case 0x57af18:c.instructions+=6;goto B57af18;
case 0x57af1a:c.instructions+=5;goto B57af1a;
case 0x57af1b:c.instructions+=4;goto B57af1b;
case 0x57af1e:c.instructions+=3;goto B57af1e;
case 0x57af20:c.instructions+=2;goto B57af20;
case 0x57af24:c.instructions+=1;goto B57af24;
case 0x57af2a:goto L57af2a;
case 0x57af2e:goto L57af2e;
case 0x57af33:c.instructions+=2;goto B57af33;
case 0x57af35:c.instructions+=1;goto B57af35;
case 0x57af37:goto L57af37;
case 0x57af3d:c.instructions+=2;goto B57af3d;
case 0x57af3f:c.instructions+=1;goto B57af3f;
case 0x57af41:goto L57af41;
case 0x57af43:goto L57af43;
case 0x57af49:c.instructions+=4;goto B57af49;
case 0x57af4b:c.instructions+=3;goto B57af4b;
case 0x57af4c:c.instructions+=2;goto B57af4c;
case 0x57af4e:c.instructions+=1;goto B57af4e;
case 0x57af53:goto L57af53;
case 0x57af55:c.instructions+=1;goto B57af55;
case 0x57af5a:goto L57af5a;
case 0x57af5b:c.instructions+=5;goto B57af5b;
case 0x57af5c:c.instructions+=4;goto B57af5c;
case 0x57af5d:c.instructions+=3;goto B57af5d;
case 0x57af5e:c.instructions+=2;goto B57af5e;
case 0x57af5f:c.instructions+=1;goto B57af5f;
case 0x57af70:goto L57af70;
case 0x57af73:c.instructions+=4;goto B57af73;
case 0x57af74:c.instructions+=3;goto B57af74;
case 0x57af77:c.instructions+=2;goto B57af77;
case 0x57af79:c.instructions+=1;goto B57af79;
case 0x57af7b:goto L57af7b;
case 0x57af80:goto L57af80;
case 0x57af82:c.instructions+=5;goto B57af82;
case 0x57af85:c.instructions+=4;goto B57af85;
case 0x57af87:c.instructions+=3;goto B57af87;
case 0x57af88:c.instructions+=2;goto B57af88;
case 0x57af8b:c.instructions+=1;goto B57af8b;
case 0x57af90:goto L57af90;
case 0x57af92:c.instructions+=3;goto B57af92;
case 0x57af95:c.instructions+=2;goto B57af95;
case 0x57af97:c.instructions+=1;goto B57af97;
case 0x57af99:goto L57af99;
case 0x57af9a:c.instructions+=1;goto B57af9a;
case 0x57afa0:goto L57afa0;
case 0x57afa2:c.instructions+=18;goto B57afa2;
case 0x57afa5:c.instructions+=17;goto B57afa5;
case 0x57afa7:c.instructions+=16;goto B57afa7;
case 0x57afaa:c.instructions+=15;goto B57afaa;
case 0x57afac:c.instructions+=14;goto B57afac;
case 0x57afae:c.instructions+=13;goto B57afae;
case 0x57afb1:c.instructions+=12;goto B57afb1;
case 0x57afb4:c.instructions+=11;goto B57afb4;
case 0x57afb7:c.instructions+=10;goto B57afb7;
case 0x57afba:c.instructions+=9;goto B57afba;
case 0x57afbd:c.instructions+=8;goto B57afbd;
case 0x57afc0:c.instructions+=7;goto B57afc0;
case 0x57afc3:c.instructions+=6;goto B57afc3;
case 0x57afca:c.instructions+=5;goto B57afca;
case 0x57afcd:c.instructions+=4;goto B57afcd;
case 0x57afd0:c.instructions+=3;goto B57afd0;
case 0x57afd3:c.instructions+=2;goto B57afd3;
case 0x57afd6:c.instructions+=1;goto B57afd6;
case 0x57afe0:goto L57afe0;
case 0x57afe1:c.instructions+=9;goto B57afe1;
case 0x57afe2:c.instructions+=8;goto B57afe2;
case 0x57afe3:c.instructions+=7;goto B57afe3;
case 0x57afe4:c.instructions+=6;goto B57afe4;
case 0x57afe8:c.instructions+=5;goto B57afe8;
case 0x57afe9:c.instructions+=4;goto B57afe9;
case 0x57aff0:c.instructions+=3;goto B57aff0;
case 0x57aff6:c.instructions+=2;goto B57aff6;
case 0x57affc:c.instructions+=1;goto B57affc;
default:missing_instruction(c.pc);}
B57a000:L57a000:{c.instructions+=1;NFSU2_TR(0x57a000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a005ull));
TAIL_STATIC(0x75c6dau,75c);
}
B57a005:L57a005:{c.instructions+=4;NFSU2_TR(0x57a005);
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
B57a008:{NFSU2_TR(0x57a008);
__builtin_memmove((R+0),(R+24),4);
}
B57a00a:{NFSU2_TR(0x57a00a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57a00b:{NFSU2_TR(0x57a00b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a010:L57a010:{c.instructions+=10;NFSU2_TR(0x57a010);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57a014:{NFSU2_TR(0x57a014);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a015:{NFSU2_TR(0x57a015);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a016:{NFSU2_TR(0x57a016);
__builtin_memmove((R+24),(R+4),4);
}
B57a018:{NFSU2_TR(0x57a018);
__builtin_memmove((R+28),(R+0),4);
}
B57a01a:{NFSU2_TR(0x57a01a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a01b:{NFSU2_TR(0x57a01b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57a01e:{NFSU2_TR(0x57a01e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57a025:{NFSU2_TR(0x57a025);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a02b:{NFSU2_TR(0x57a02b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a030ull));
TAIL_STATIC(0x5769d0u,576);
}
B57a030:L57a030:{c.instructions+=6;NFSU2_TR(0x57a030);
__builtin_memmove((R+4),(R+28),4);
}
B57a032:{NFSU2_TR(0x57a032);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a038:{NFSU2_TR(0x57a038);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a039:{NFSU2_TR(0x57a039);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57a03c:{NFSU2_TR(0x57a03c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57a043:{NFSU2_TR(0x57a043);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a048ull));
TAIL_STATIC(0x5769d0u,576);
}
B57a048:L57a048:{c.instructions+=3;NFSU2_TR(0x57a048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57a049:{NFSU2_TR(0x57a049);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57a04a:{NFSU2_TR(0x57a04a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a050:L57a050:{c.instructions+=6;NFSU2_TR(0x57a050);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a051:{NFSU2_TR(0x57a051);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57a057:{NFSU2_TR(0x57a057);
{u32 ea_=u32(u32(8802628u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B57a05d:{NFSU2_TR(0x57a05d);
{u32 ea_=u32(u32(7894416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57a063:{NFSU2_TR(0x57a063);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B57a065:{NFSU2_TR(0x57a065);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a06aull));
TAIL_STATIC(0x75bed4u,75b);
}
B57a06a:L57a06a:{c.instructions+=8;NFSU2_TR(0x57a06a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57a06c:{NFSU2_TR(0x57a06c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B57a070:{NFSU2_TR(0x57a070);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57a074:{NFSU2_TR(0x57a074);
{u32 ea_=u32(u32(7894460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57a07a:{NFSU2_TR(0x57a07a);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B57a07c:{NFSU2_TR(0x57a07c);
{u32 ea_=u32(u32(8802628u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57a082:{NFSU2_TR(0x57a082);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B57a084:{NFSU2_TR(0x57a084);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57a08b;}}
}
B57a086:L57a086:{c.instructions+=1;NFSU2_TR(0x57a086);
w4(R+0,u32(0x1ull));
}
B57a08b:L57a08b:{c.instructions+=9;NFSU2_TR(0x57a08b);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57a091:{NFSU2_TR(0x57a091);
__builtin_memmove((R+4),gp(0x7fb708),4);
}
B57a097:{NFSU2_TR(0x57a097);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57a09d:{NFSU2_TR(0x57a09d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B57a09f:{NFSU2_TR(0x57a09f);
__builtin_memmove(gp(0x7fb708),(R+4),4);
}
B57a0a5:{NFSU2_TR(0x57a0a5);
__builtin_memmove(gp(0x7fb70c),(R+0),4);
}
B57a0aa:{NFSU2_TR(0x57a0aa);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B57a0b0:{NFSU2_TR(0x57a0b0);
__builtin_memmove(gp(0x7fb704),(R+4),4);
}
B57a0b6:{NFSU2_TR(0x57a0b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a0bbull));
TAIL_STATIC(0x75bed4u,75b);
}
B57a0bb:L57a0bb:{c.instructions+=8;NFSU2_TR(0x57a0bb);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B57a0c1:{NFSU2_TR(0x57a0c1);
w1(R+512,carry<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B57a0c3:{NFSU2_TR(0x57a0c3);
__builtin_memmove((R+0),gp(0x86514c),4);
}
B57a0c8:{NFSU2_TR(0x57a0c8);
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
B57a0c9:{NFSU2_TR(0x57a0c9);
__builtin_memmove(gp(0x8651ac),(R+4),4);
}
B57a0cf:{NFSU2_TR(0x57a0cf);
__builtin_memmove(gp(0x86514c),(R+0),4);
}
B57a0d4:{NFSU2_TR(0x57a0d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57a0d5:{NFSU2_TR(0x57a0d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a0e0:L57a0e0:{c.instructions+=7;NFSU2_TR(0x57a0e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a0e1:{NFSU2_TR(0x57a0e1);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57a0e7:{NFSU2_TR(0x57a0e7);
s4(0x7fb728,u32(0x1ull));
}
B57a0f1:{NFSU2_TR(0x57a0f1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57a0f7:{NFSU2_TR(0x57a0f7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57a0f9:{NFSU2_TR(0x57a0f9);
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
B57a0fc:{NFSU2_TR(0x57a0fc);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L57a198;}}
}
B57a102:L57a102:{c.instructions+=5;NFSU2_TR(0x57a102);
{u32 ea_=u32(u32(8802648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57a108:{NFSU2_TR(0x57a108);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B57a10e:{NFSU2_TR(0x57a10e);
{u32 ea_=u32(u32(7894416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57a114:{NFSU2_TR(0x57a114);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B57a116:{NFSU2_TR(0x57a116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a11bull));
TAIL_STATIC(0x75bed4u,75b);
}
B57a11b:L57a11b:{c.instructions+=15;NFSU2_TR(0x57a11b);
__builtin_memmove((R+4),gp(0x7fb720),4);
}
B57a121:{NFSU2_TR(0x57a121);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B57a125:{NFSU2_TR(0x57a125);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57a129:{NFSU2_TR(0x57a129);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B57a12b:{NFSU2_TR(0x57a12b);
__builtin_memmove(gp(0x7fb720),(R+4),4);
}
B57a131:{NFSU2_TR(0x57a131);
__builtin_memmove(gp(0x865150),(R+0),4);
}
B57a136:{NFSU2_TR(0x57a136);
{u32 ea_=u32(u32(7894460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57a13c:{NFSU2_TR(0x57a13c);
__builtin_memmove(gp(0x7fb71c),(R+4),4);
}
B57a142:{NFSU2_TR(0x57a142);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B57a144:{NFSU2_TR(0x57a144);
{u32 ea_=u32(u32(8802648u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57a14a:{NFSU2_TR(0x57a14a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B57a14c:{NFSU2_TR(0x57a14c);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57a152:{NFSU2_TR(0x57a152);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57a158:{NFSU2_TR(0x57a158);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B57a15e:{NFSU2_TR(0x57a15e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a163ull));
TAIL_STATIC(0x75bed4u,75b);
}
B57a163:L57a163:{c.instructions+=10;NFSU2_TR(0x57a163);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B57a169:{NFSU2_TR(0x57a169);
w1(R+512,carry<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B57a16b:{NFSU2_TR(0x57a16b);
__builtin_memmove((R+0),gp(0x7fb724),4);
}
B57a170:{NFSU2_TR(0x57a170);
__builtin_memmove(gp(0x86518c),(R+4),4);
}
B57a176:{NFSU2_TR(0x57a176);
{u32 ea_=u32(u32(8802700u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57a17c:{NFSU2_TR(0x57a17c);
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
B57a17d:{NFSU2_TR(0x57a17d);
s4(0x865154,u32(0x0ull));
}
B57a187:{NFSU2_TR(0x57a187);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57a18d:{NFSU2_TR(0x57a18d);
__builtin_memmove(gp(0x7fb724),(R+0),4);
}
B57a192:{NFSU2_TR(0x57a192);
{u32 ea_=u32(u32(8369944u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57a198:L57a198:{c.instructions+=2;NFSU2_TR(0x57a198);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57a199:{NFSU2_TR(0x57a199);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a1a0:L57a1a0:{c.instructions+=6;NFSU2_TR(0x57a1a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B57a1a3:{NFSU2_TR(0x57a1a3);
__builtin_memmove((R+0),gp(0x865138),4);
}
B57a1a8:{NFSU2_TR(0x57a1a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a1ac:{NFSU2_TR(0x57a1ac);
__builtin_memmove((R+0),gp(0x7fb700),4);
}
B57a1b1:{NFSU2_TR(0x57a1b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57a1b3:{NFSU2_TR(0x57a1b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57a1bd;}}
}
B57a1b5:L57a1b5:{c.instructions+=2;NFSU2_TR(0x57a1b5);
{u32 ea_=u32(u32(7885248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57a1bb:{NFSU2_TR(0x57a1bb);
{goto L57a1c3;}
}
B57a1bd:L57a1bd:{c.instructions+=1;NFSU2_TR(0x57a1bd);
{u32 ea_=u32(u32(7894460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57a1c3:L57a1c3:{c.instructions+=7;NFSU2_TR(0x57a1c3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B57a1c7:{NFSU2_TR(0x57a1c7);
__builtin_memmove((R+0),gp(0x86513c),4);
}
B57a1cc:{NFSU2_TR(0x57a1cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57a1ce:{NFSU2_TR(0x57a1ce);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B57a1d0:{NFSU2_TR(0x57a1d0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57a1d4:{NFSU2_TR(0x57a1d4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B57a1d6:{NFSU2_TR(0x57a1d6);
if(r1(R+518)){{goto L57a239;}}
}
B57a1d8:L57a1d8:{c.instructions+=1;NFSU2_TR(0x57a1d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a1ddull));
TAIL_STATIC(0x43bdf0u,43b);
}
B57a1dd:L57a1dd:{c.instructions+=4;NFSU2_TR(0x57a1dd);
__builtin_memmove((R+4),gp(0x86513c),4);
}
B57a1e3:{NFSU2_TR(0x57a1e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a1e4:{NFSU2_TR(0x57a1e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a1e5:{NFSU2_TR(0x57a1e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a1eaull));
TAIL_STATIC(0x43be20u,43b);
}
B57a1ea:L57a1ea:{c.instructions+=6;NFSU2_TR(0x57a1ea);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B57a1f0:{NFSU2_TR(0x57a1f0);
__builtin_memmove((R+0),gp(0x7fb700),4);
}
B57a1f5:{NFSU2_TR(0x57a1f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57a1f8:{NFSU2_TR(0x57a1f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57a1fa:{NFSU2_TR(0x57a1fa);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57a1fe:{NFSU2_TR(0x57a1fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57a208;}}
}
B57a200:L57a200:{c.instructions+=2;NFSU2_TR(0x57a200);
{u32 ea_=u32(u32(7885248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57a206:{NFSU2_TR(0x57a206);
{goto L57a20e;}
}
B57a208:L57a208:{c.instructions+=1;NFSU2_TR(0x57a208);
{u32 ea_=u32(u32(7894460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57a20e:L57a20e:{c.instructions+=5;NFSU2_TR(0x57a20e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57a212:{NFSU2_TR(0x57a212);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B57a214:{NFSU2_TR(0x57a214);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57a216:{NFSU2_TR(0x57a216);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57a219:{NFSU2_TR(0x57a219);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57a22b;}}
}
B57a21b:L57a21b:{c.instructions+=5;NFSU2_TR(0x57a21b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B57a21f:{NFSU2_TR(0x57a21f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57a223:{NFSU2_TR(0x57a223);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B57a227:{NFSU2_TR(0x57a227);
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
B57a22a:{NFSU2_TR(0x57a22a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a22b:L57a22b:{c.instructions+=5;NFSU2_TR(0x57a22b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B57a22d:{NFSU2_TR(0x57a22d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57a231:{NFSU2_TR(0x57a231);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B57a235:{NFSU2_TR(0x57a235);
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
B57a238:{NFSU2_TR(0x57a238);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a239:L57a239:{c.instructions+=3;NFSU2_TR(0x57a239);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57a23d:{NFSU2_TR(0x57a23d);
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
B57a240:{NFSU2_TR(0x57a240);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a250:L57a250:{c.instructions+=5;NFSU2_TR(0x57a250);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a251:{NFSU2_TR(0x57a251);
__builtin_memmove((R+24),(R+4),4);
}
B57a253:{NFSU2_TR(0x57a253);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57a255:{NFSU2_TR(0x57a255);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B57a257:{NFSU2_TR(0x57a257);
if(r1(R+518)){{goto L57a279;}}
}
B57a259:L57a259:{c.instructions+=1;NFSU2_TR(0x57a259);
__builtin_memmove((R+16),(R+16),4);
}
B57a260:L57a260:{c.instructions+=6;NFSU2_TR(0x57a260);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57a262:{NFSU2_TR(0x57a262);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57a265:{NFSU2_TR(0x57a265);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57a267:{NFSU2_TR(0x57a267);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a268:{NFSU2_TR(0x57a268);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a26b:{NFSU2_TR(0x57a26b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a270ull));
TAIL_STATIC(0x75c6dau,75c);
}
B57a270:L57a270:{c.instructions+=4;NFSU2_TR(0x57a270);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57a272:{NFSU2_TR(0x57a272);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57a275:{NFSU2_TR(0x57a275);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B57a277:{NFSU2_TR(0x57a277);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57a260u);}goto L57a260;}}
}
B57a279:L57a279:{c.instructions+=2;NFSU2_TR(0x57a279);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57a27a:{NFSU2_TR(0x57a27a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a280:L57a280:{c.instructions+=6;NFSU2_TR(0x57a280);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a281:{NFSU2_TR(0x57a281);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a282:{NFSU2_TR(0x57a282);
__builtin_memmove((R+28),(R+4),4);
}
B57a284:{NFSU2_TR(0x57a284);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57a286:{NFSU2_TR(0x57a286);
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
B57a288:{NFSU2_TR(0x57a288);
if(r1(R+518)){{goto L57a2b6;}}
}
B57a28a:L57a28a:{c.instructions+=1;NFSU2_TR(0x57a28a);
__builtin_memmove((R+12),(R+12),4);
}
B57a290:L57a290:{c.instructions+=6;NFSU2_TR(0x57a290);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57a293:{NFSU2_TR(0x57a293);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57a295:{NFSU2_TR(0x57a295);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57a297:{NFSU2_TR(0x57a297);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a29a:{NFSU2_TR(0x57a29a);
__builtin_memmove((R+4),(R+24),4);
}
B57a29c:{NFSU2_TR(0x57a29c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a2a1ull));
TAIL_STATIC(0x577d80u,577);
}
B57a2a1:L57a2a1:{c.instructions+=4;NFSU2_TR(0x57a2a1);
__builtin_memmove((R+0),gp(0x864f78),4);
}
B57a2a6:{NFSU2_TR(0x57a2a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a2a7:{NFSU2_TR(0x57a2a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a2a8:{NFSU2_TR(0x57a2a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a2adull));
TAIL_STATIC(0x43f920u,43f);
}
B57a2ad:L57a2ad:{c.instructions+=4;NFSU2_TR(0x57a2ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57a2af:{NFSU2_TR(0x57a2af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57a2b2:{NFSU2_TR(0x57a2b2);
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
B57a2b4:{NFSU2_TR(0x57a2b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57a290u);}goto L57a290;}}
}
B57a2b6:L57a2b6:{c.instructions+=3;NFSU2_TR(0x57a2b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57a2b7:{NFSU2_TR(0x57a2b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57a2b8:{NFSU2_TR(0x57a2b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a2c0:L57a2c0:{c.instructions+=6;NFSU2_TR(0x57a2c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a2c1:{NFSU2_TR(0x57a2c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a2c2:{NFSU2_TR(0x57a2c2);
__builtin_memmove((R+28),(R+4),4);
}
B57a2c4:{NFSU2_TR(0x57a2c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57a2c6:{NFSU2_TR(0x57a2c6);
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
B57a2c8:{NFSU2_TR(0x57a2c8);
if(r1(R+518)){{goto L57a2f6;}}
}
B57a2ca:L57a2ca:{c.instructions+=1;NFSU2_TR(0x57a2ca);
__builtin_memmove((R+12),(R+12),4);
}
B57a2d0:L57a2d0:{c.instructions+=6;NFSU2_TR(0x57a2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57a2d3:{NFSU2_TR(0x57a2d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57a2d5:{NFSU2_TR(0x57a2d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57a2d7:{NFSU2_TR(0x57a2d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a2da:{NFSU2_TR(0x57a2da);
__builtin_memmove((R+4),(R+24),4);
}
B57a2dc:{NFSU2_TR(0x57a2dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a2e1ull));
TAIL_STATIC(0x5798c0u,579);
}
B57a2e1:L57a2e1:{c.instructions+=4;NFSU2_TR(0x57a2e1);
__builtin_memmove((R+0),gp(0x865104),4);
}
B57a2e6:{NFSU2_TR(0x57a2e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a2e7:{NFSU2_TR(0x57a2e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a2e8:{NFSU2_TR(0x57a2e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a2edull));
TAIL_STATIC(0x43f920u,43f);
}
B57a2ed:L57a2ed:{c.instructions+=4;NFSU2_TR(0x57a2ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57a2ef:{NFSU2_TR(0x57a2ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57a2f2:{NFSU2_TR(0x57a2f2);
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
B57a2f4:{NFSU2_TR(0x57a2f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57a2d0u);}goto L57a2d0;}}
}
B57a2f6:L57a2f6:{c.instructions+=3;NFSU2_TR(0x57a2f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57a2f7:{NFSU2_TR(0x57a2f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57a2f8:{NFSU2_TR(0x57a2f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a300:L57a300:{c.instructions+=15;NFSU2_TR(0x57a300);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a301:{NFSU2_TR(0x57a301);
__builtin_memmove((R+20),(R+16),4);
}
B57a303:{NFSU2_TR(0x57a303);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57a306:{NFSU2_TR(0x57a306);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a307:{NFSU2_TR(0x57a307);
__builtin_memmove((R+24),(R+4),4);
}
B57a309:{NFSU2_TR(0x57a309);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57a30d:{NFSU2_TR(0x57a30d);
w4(R+0,u32(r2(R+0)));
}
B57a310:{NFSU2_TR(0x57a310);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B57a313:{NFSU2_TR(0x57a313);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a314:{NFSU2_TR(0x57a314);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B57a317:{NFSU2_TR(0x57a317);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B57a319:{NFSU2_TR(0x57a319);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a31a:{NFSU2_TR(0x57a31a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B57a31c:{NFSU2_TR(0x57a31c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57a320:{NFSU2_TR(0x57a320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a325ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B57a325:L57a325:{c.instructions+=9;NFSU2_TR(0x57a325);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57a328:{NFSU2_TR(0x57a328);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57a32b:{NFSU2_TR(0x57a32b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57a32e:{NFSU2_TR(0x57a32e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57a330:{NFSU2_TR(0x57a330);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a333:{NFSU2_TR(0x57a333);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a336:{NFSU2_TR(0x57a336);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a339:{NFSU2_TR(0x57a339);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a33c:{NFSU2_TR(0x57a33c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57a345;}}
}
B57a33e:L57a33e:{c.instructions+=1;NFSU2_TR(0x57a33e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x865230ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57a345:L57a345:{c.instructions+=5;NFSU2_TR(0x57a345);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B57a348:{NFSU2_TR(0x57a348);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57a34a:{NFSU2_TR(0x57a34a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a34d:{NFSU2_TR(0x57a34d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57a351:{NFSU2_TR(0x57a351);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57a357;}}
}
B57a353:L57a353:{c.instructions+=1;NFSU2_TR(0x57a353);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57a357:L57a357:{c.instructions+=6;NFSU2_TR(0x57a357);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a35a:{NFSU2_TR(0x57a35a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57a35e:{NFSU2_TR(0x57a35e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B57a362:{NFSU2_TR(0x57a362);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a365:{NFSU2_TR(0x57a365);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a368:{NFSU2_TR(0x57a368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a36dull));
TAIL_STATIC(0x56ffa0u,56f);
}
B57a36d:L57a36d:{c.instructions+=5;NFSU2_TR(0x57a36d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57a36e:{NFSU2_TR(0x57a36e);
__builtin_memmove((R+0),(R+24),4);
}
B57a370:{NFSU2_TR(0x57a370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57a371:{NFSU2_TR(0x57a371);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57a372:{NFSU2_TR(0x57a372);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a380:L57a380:{c.instructions+=13;NFSU2_TR(0x57a380);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a381:{NFSU2_TR(0x57a381);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a382:{NFSU2_TR(0x57a382);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a383:{NFSU2_TR(0x57a383);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a384:{NFSU2_TR(0x57a384);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57a388:{NFSU2_TR(0x57a388);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a389:{NFSU2_TR(0x57a389);
__builtin_memmove((R+20),(R+4),4);
}
B57a38b:{NFSU2_TR(0x57a38b);
u8 U[4];
w4(U+0,u32(0x7a0880ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a390:{NFSU2_TR(0x57a390);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B57a392:{NFSU2_TR(0x57a392);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a393:{NFSU2_TR(0x57a393);
__builtin_memmove((R+4),(R+24),4);
}
B57a395:{NFSU2_TR(0x57a395);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a399:{NFSU2_TR(0x57a399);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a39eull));
TAIL_STATIC(0x578ce0u,578);
}
B57a39e:L57a39e:{c.instructions+=4;NFSU2_TR(0x57a39e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1eull))));
__builtin_memmove((R+28),(U+0),4);
}
B57a3a1:{NFSU2_TR(0x57a3a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a3a2:{NFSU2_TR(0x57a3a2);
__builtin_memmove((R+4),(R+24),4);
}
B57a3a4:{NFSU2_TR(0x57a3a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a3a9ull));
TAIL_STATIC(0x571710u,571);
}
B57a3a9:L57a3a9:{c.instructions+=3;NFSU2_TR(0x57a3a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57a3ac:{NFSU2_TR(0x57a3ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))|u32(r1(U+4))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B57a3af:{NFSU2_TR(0x57a3af);
if(r1(R+518)){{goto L57a3bc;}}
}
B57a3b1:L57a3b1:{c.instructions+=4;NFSU2_TR(0x57a3b1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(r2(U+0)));
}
B57a3b4:{NFSU2_TR(0x57a3b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a3b5:{NFSU2_TR(0x57a3b5);
__builtin_memmove((R+4),(R+20),4);
}
B57a3b7:{NFSU2_TR(0x57a3b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a3bcull));
TAIL_STATIC(0x5701d0u,570);
}
B57a3bc:L57a3bc:{c.instructions+=3;NFSU2_TR(0x57a3bc);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w1(R+512,u8((r2(U+2))<(r2(R+12))));
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+12))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B57a3bf:{NFSU2_TR(0x57a3bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a3c3:{NFSU2_TR(0x57a3c3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L57a460;}}
}
B57a3c9:L57a3c9:{c.instructions+=2;NFSU2_TR(0x57a3c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57a3cd:{NFSU2_TR(0x57a3cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B57a3d0:L57a3d0:{c.instructions+=5;NFSU2_TR(0x57a3d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57a3d3:{NFSU2_TR(0x57a3d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57a3d6:{NFSU2_TR(0x57a3d6);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B57a3d8:{NFSU2_TR(0x57a3d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57a3da:{NFSU2_TR(0x57a3da);
if(r1(R+518)){{goto L57a3ea;}}
}
B57a3dc:L57a3dc:{c.instructions+=6;NFSU2_TR(0x57a3dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a3de:{NFSU2_TR(0x57a3de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a3df:{NFSU2_TR(0x57a3df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a3e0:{NFSU2_TR(0x57a3e0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a3e1:{NFSU2_TR(0x57a3e1);
__builtin_memmove((R+4),(R+24),4);
}
B57a3e3:{NFSU2_TR(0x57a3e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a3e8ull));
TAIL_STATIC(0x571550u,571);
}
B57a3e8:L57a3e8:{c.instructions+=1;NFSU2_TR(0x57a3e8);
{goto L57a448;}
}
B57a3ea:L57a3ea:{c.instructions+=3;NFSU2_TR(0x57a3ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57a3ed:{NFSU2_TR(0x57a3ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57a3ef:{NFSU2_TR(0x57a3ef);
if(r1(R+518)){{goto L57a3ff;}}
}
B57a3f1:L57a3f1:{c.instructions+=6;NFSU2_TR(0x57a3f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a3f3:{NFSU2_TR(0x57a3f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a3f4:{NFSU2_TR(0x57a3f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a3f5:{NFSU2_TR(0x57a3f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a3f6:{NFSU2_TR(0x57a3f6);
__builtin_memmove((R+4),(R+24),4);
}
B57a3f8:{NFSU2_TR(0x57a3f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a3fdull));
TAIL_STATIC(0x5715b0u,571);
}
B57a3fd:L57a3fd:{c.instructions+=1;NFSU2_TR(0x57a3fd);
{goto L57a448;}
}
B57a3ff:L57a3ff:{c.instructions+=3;NFSU2_TR(0x57a3ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57a402:{NFSU2_TR(0x57a402);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57a404:{NFSU2_TR(0x57a404);
if(r1(R+518)){{goto L57a448;}}
}
B57a406:L57a406:{c.instructions+=4;NFSU2_TR(0x57a406);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57a408:{NFSU2_TR(0x57a408);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57a40a:{NFSU2_TR(0x57a40a);
w4(R+0,u32(0xffffffffull));
}
B57a40f:{NFSU2_TR(0x57a40f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57a423;}}
}
B57a411:L57a411:{c.instructions+=6;NFSU2_TR(0x57a411);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+20,u32(r1(U+8)));
}
B57a415:{NFSU2_TR(0x57a415);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B57a418:{NFSU2_TR(0x57a418);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B57a41a:{NFSU2_TR(0x57a41a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B57a41b:{NFSU2_TR(0x57a41b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57a41d:{NFSU2_TR(0x57a41d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57a411u);}goto L57a411;}}
}
B57a41f:L57a41f:{c.instructions+=1;NFSU2_TR(0x57a41f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B57a423:L57a423:{c.instructions+=4;NFSU2_TR(0x57a423);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57a429:{NFSU2_TR(0x57a429);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B57a42c:{NFSU2_TR(0x57a42c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B57a432:{NFSU2_TR(0x57a432);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57a442;}}
}
B57a434:L57a434:{c.instructions+=2;NFSU2_TR(0x57a434);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57a43b:{NFSU2_TR(0x57a43b);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e9ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+1),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57a442:L57a442:{c.instructions+=1;NFSU2_TR(0x57a442);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a448:L57a448:{c.instructions+=7;NFSU2_TR(0x57a448);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57a44c:{NFSU2_TR(0x57a44c);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B57a450:{NFSU2_TR(0x57a450);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57a451:{NFSU2_TR(0x57a451);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B57a454:{NFSU2_TR(0x57a454);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57a456:{NFSU2_TR(0x57a456);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a45a:{NFSU2_TR(0x57a45a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57a3d0u);}goto L57a3d0;}}
}
B57a460:L57a460:{c.instructions+=2;NFSU2_TR(0x57a460);
__builtin_memmove((R+4),(R+24),4);
}
B57a462:{NFSU2_TR(0x57a462);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a467ull));
TAIL_STATIC(0x578d90u,578);
}
B57a467:L57a467:{c.instructions+=6;NFSU2_TR(0x57a467);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57a468:{NFSU2_TR(0x57a468);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57a469:{NFSU2_TR(0x57a469);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57a46a:{NFSU2_TR(0x57a46a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57a46b:{NFSU2_TR(0x57a46b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57a46c:{NFSU2_TR(0x57a46c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a470:L57a470:{c.instructions+=6;NFSU2_TR(0x57a470);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a471:{NFSU2_TR(0x57a471);
__builtin_memmove((R+20),(R+16),4);
}
B57a473:{NFSU2_TR(0x57a473);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a474:{NFSU2_TR(0x57a474);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57a477:{NFSU2_TR(0x57a477);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x8003b000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B57a47d:{NFSU2_TR(0x57a47d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57a4f8;}}
}
B57a47f:L57a47f:{c.instructions+=6;NFSU2_TR(0x57a47f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57a482:{NFSU2_TR(0x57a482);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a483:{NFSU2_TR(0x57a483);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57a486:{NFSU2_TR(0x57a486);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B57a48a:{NFSU2_TR(0x57a48a);
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
B57a48c:{NFSU2_TR(0x57a48c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L57a4ef;}}
}
B57a48e:L57a48e:{c.instructions+=2;NFSU2_TR(0x57a48e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a48f:{NFSU2_TR(0x57a48f);
}
B57a490:L57a490:{c.instructions+=14;NFSU2_TR(0x57a490);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57a493:{NFSU2_TR(0x57a493);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B57a497:{NFSU2_TR(0x57a497);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
}
B57a49a:{NFSU2_TR(0x57a49a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B57a49d:{NFSU2_TR(0x57a49d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1full))));
__builtin_memmove((R+24),(U+0),4);
}
B57a4a0:{NFSU2_TR(0x57a4a0);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
}
B57a4a3:{NFSU2_TR(0x57a4a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a4a6:{NFSU2_TR(0x57a4a6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B57a4a9:{NFSU2_TR(0x57a4a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a4ac:{NFSU2_TR(0x57a4ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57a4af:{NFSU2_TR(0x57a4af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57a4b1:{NFSU2_TR(0x57a4b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57a4b5:{NFSU2_TR(0x57a4b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57a4bc:{NFSU2_TR(0x57a4bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57a4c5;}}
}
B57a4be:L57a4be:{c.instructions+=1;NFSU2_TR(0x57a4be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x865230ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57a4c5:L57a4c5:{c.instructions+=1;NFSU2_TR(0x57a4c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a4caull));
TAIL_STATIC(0x56ffa0u,56f);
}
B57a4ca:L57a4ca:{c.instructions+=3;NFSU2_TR(0x57a4ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a4cb:{NFSU2_TR(0x57a4cb);
w4(R+4,u32(0x865210ull));
}
B57a4d0:{NFSU2_TR(0x57a4d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a4d5ull));
TAIL_STATIC(0x479130u,479);
}
B57a4d5:L57a4d5:{c.instructions+=2;NFSU2_TR(0x57a4d5);
__builtin_memmove((R+4),(R+24),4);
}
B57a4d7:{NFSU2_TR(0x57a4d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a4dcull));
TAIL_STATIC(0x570800u,570);
}
B57a4dc:L57a4dc:{c.instructions+=6;NFSU2_TR(0x57a4dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57a4df:{NFSU2_TR(0x57a4df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57a4e2:{NFSU2_TR(0x57a4e2);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B57a4e6:{NFSU2_TR(0x57a4e6);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B57a4ea:{NFSU2_TR(0x57a4ea);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B57a4ec:{NFSU2_TR(0x57a4ec);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57a490u);}goto L57a490;}}
}
B57a4ee:L57a4ee:{c.instructions+=1;NFSU2_TR(0x57a4ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57a4ef:L57a4ef:{c.instructions+=5;NFSU2_TR(0x57a4ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57a4f0:{NFSU2_TR(0x57a4f0);
w4(R+0,u32(0x1ull));
}
B57a4f5:{NFSU2_TR(0x57a4f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57a4f6:{NFSU2_TR(0x57a4f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57a4f7:{NFSU2_TR(0x57a4f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a4f8:L57a4f8:{c.instructions+=4;NFSU2_TR(0x57a4f8);
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
B57a4fa:{NFSU2_TR(0x57a4fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57a4fb:{NFSU2_TR(0x57a4fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57a4fc:{NFSU2_TR(0x57a4fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a500:L57a500:{c.instructions+=3;NFSU2_TR(0x57a500);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57a504:{NFSU2_TR(0x57a504);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a505:{NFSU2_TR(0x57a505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a50aull));
TAIL_STATIC(0x579830u,579);
}
B57a50a:L57a50a:{c.instructions+=2;NFSU2_TR(0x57a50a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57a50b:{NFSU2_TR(0x57a50b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a510:L57a510:{c.instructions+=5;NFSU2_TR(0x57a510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B57a513:{NFSU2_TR(0x57a513);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a514:{NFSU2_TR(0x57a514);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a515:{NFSU2_TR(0x57a515);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57a517:{NFSU2_TR(0x57a517);
{goto L57a520;}
}
B57a520:L57a520:{c.instructions+=3;NFSU2_TR(0x57a520);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x864f80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B57a527:{NFSU2_TR(0x57a527);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57a529:{NFSU2_TR(0x57a529);
if(r1(R+518)){{goto L57a570;}}
}
B57a52b:L57a52b:{c.instructions+=5;NFSU2_TR(0x57a52b);
{u32 ea_=u32((r4(R+24)*4u)+u32(8801768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B57a532:{NFSU2_TR(0x57a532);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B57a538:{NFSU2_TR(0x57a538);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B57a53a:{NFSU2_TR(0x57a53a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B57a53d:{NFSU2_TR(0x57a53d);
if(r1(R+514)){{goto L57a546;}}
}
B57a53f:L57a53f:{c.instructions+=1;NFSU2_TR(0x57a53f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a544ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57a1a0u);}goto L57a1a0;}
}
B57a544:L57a544:{c.instructions+=1;NFSU2_TR(0x57a544);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B57a546:L57a546:{c.instructions+=2;NFSU2_TR(0x57a546);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57a549:{NFSU2_TR(0x57a549);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57a570;}}
}
B57a54b:L57a54b:{c.instructions+=3;NFSU2_TR(0x57a54b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57a54d:{NFSU2_TR(0x57a54d);
w4(R+4,u32(0x6ull));
}
B57a552:{NFSU2_TR(0x57a552);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B57a556:L57a556:{c.instructions+=1;NFSU2_TR(0x57a556);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L57a558;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57a556u);}goto L57a556;}
}
B57a558:L57a558:{c.instructions+=8;NFSU2_TR(0x57a558);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B57a55a:{NFSU2_TR(0x57a55a);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B57a55b:{NFSU2_TR(0x57a55b);
__builtin_memmove((R+0),gp(0x7fa734),4);
}
B57a560:{NFSU2_TR(0x57a560);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a562:{NFSU2_TR(0x57a562);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a563:{NFSU2_TR(0x57a563);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57a567:{NFSU2_TR(0x57a567);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a568:{NFSU2_TR(0x57a568);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a56dull));
TAIL_STATIC(0x43dc00u,43d);
}
B57a56d:L57a56d:{c.instructions+=1;NFSU2_TR(0x57a56d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B57a570:L57a570:{c.instructions+=3;NFSU2_TR(0x57a570);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57a571:{NFSU2_TR(0x57a571);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57a574:{NFSU2_TR(0x57a574);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57a520u);}goto L57a520;}}
}
B57a576:L57a576:{c.instructions+=4;NFSU2_TR(0x57a576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57a577:{NFSU2_TR(0x57a577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57a578:{NFSU2_TR(0x57a578);
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
B57a57b:{NFSU2_TR(0x57a57b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a580:L57a580:{c.instructions+=7;NFSU2_TR(0x57a580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B57a583:{NFSU2_TR(0x57a583);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a584:{NFSU2_TR(0x57a584);
__builtin_memmove((R+24),(R+4),4);
}
B57a586:{NFSU2_TR(0x57a586);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57a589:{NFSU2_TR(0x57a589);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57a58b:{NFSU2_TR(0x57a58b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a58c:{NFSU2_TR(0x57a58c);
if(r1(R+518)){{goto L57a5a1;}}
}
B57a58e:L57a58e:{c.instructions+=6;NFSU2_TR(0x57a58e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57a590:{NFSU2_TR(0x57a590);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57a593:{NFSU2_TR(0x57a593);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57a595:{NFSU2_TR(0x57a595);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a596:{NFSU2_TR(0x57a596);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a599:{NFSU2_TR(0x57a599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a59eull));
TAIL_STATIC(0x440540u,440);
}
B57a59e:L57a59e:{c.instructions+=1;NFSU2_TR(0x57a59e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57a5a1:L57a5a1:{c.instructions+=8;NFSU2_TR(0x57a5a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57a5a8:{NFSU2_TR(0x57a5a8);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B57a5ad:{NFSU2_TR(0x57a5ad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B57a5b0:{NFSU2_TR(0x57a5b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a5b1:{NFSU2_TR(0x57a5b1);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57a5b5:{NFSU2_TR(0x57a5b5);
u8 U[4];
w4(U+0,u32(0x7a0894ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a5ba:{NFSU2_TR(0x57a5ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a5bb:{NFSU2_TR(0x57a5bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a5c0ull));
TAIL_STATIC(0x4400d0u,440);
}
B57a5c0:L57a5c0:{c.instructions+=2;NFSU2_TR(0x57a5c0);
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
B57a5c3:{NFSU2_TR(0x57a5c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a5c8ull));
TAIL_STATIC(0x4022c0u,402);
}
B57a5c8:L57a5c8:{c.instructions+=3;NFSU2_TR(0x57a5c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a5ca:{NFSU2_TR(0x57a5ca);
w4(R+4,u32(0x88f768ull));
}
B57a5cf:{NFSU2_TR(0x57a5cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a5d4ull));
TAIL_STATIC(0x5d8350u,5d8);
}
B57a5d4:L57a5d4:{c.instructions+=4;NFSU2_TR(0x57a5d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57a5d8:{NFSU2_TR(0x57a5d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a5d9:{NFSU2_TR(0x57a5d9);
w4(R+4,u32(0x88eb00ull));
}
B57a5de:{NFSU2_TR(0x57a5de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a5e3ull));
TAIL_STATIC(0x5da970u,5da);
}
B57a5e3:L57a5e3:{c.instructions+=4;NFSU2_TR(0x57a5e3);
__builtin_memmove((R+0),gp(0x89e7c0),4);
}
B57a5e8:{NFSU2_TR(0x57a5e8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57a5ea:{NFSU2_TR(0x57a5ea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57a5ed:{NFSU2_TR(0x57a5ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57a5f6;}}
}
B57a5ef:L57a5ef:{c.instructions+=2;NFSU2_TR(0x57a5ef);
w4(R+24,u32(0x1ull));
}
B57a5f4:{NFSU2_TR(0x57a5f4);
{goto L57a615;}
}
B57a5f6:L57a5f6:{c.instructions+=5;NFSU2_TR(0x57a5f6);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B57a5fb:{NFSU2_TR(0x57a5fb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B57a5fe:{NFSU2_TR(0x57a5fe);
u8 U[4];
w4(U+0,u32(0x7a088cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a603:{NFSU2_TR(0x57a603);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a604:{NFSU2_TR(0x57a604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a609ull));
TAIL_STATIC(0x43dc30u,43d);
}
B57a609:L57a609:{c.instructions+=3;NFSU2_TR(0x57a609);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57a60c:{NFSU2_TR(0x57a60c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57a60e:{NFSU2_TR(0x57a60e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57a615;}}
}
B57a610:L57a610:{c.instructions+=1;NFSU2_TR(0x57a610);
w4(R+24,u32(0x2ull));
}
B57a615:L57a615:{c.instructions+=6;NFSU2_TR(0x57a615);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fa9d4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B57a61c:{NFSU2_TR(0x57a61c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x79dc54ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B57a623:{NFSU2_TR(0x57a623);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B57a626:{NFSU2_TR(0x57a626);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a627:{NFSU2_TR(0x57a627);
w4(R+4,u32(0x8a3288ull));
}
B57a62c:{NFSU2_TR(0x57a62c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a631ull));
TAIL_STATIC(0x610750u,610);
}
B57a631:L57a631:{c.instructions+=4;NFSU2_TR(0x57a631);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B57a634:{NFSU2_TR(0x57a634);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a635:{NFSU2_TR(0x57a635);
w4(R+4,u32(0x88eb00ull));
}
B57a63a:{NFSU2_TR(0x57a63a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a63full));
TAIL_STATIC(0x5e4e70u,5e4);
}
B57a63f:L57a63f:{c.instructions+=1;NFSU2_TR(0x57a63f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a644ull));
TAIL_STATIC(0x5db2d0u,5db);
}
B57a644:L57a644:{c.instructions+=4;NFSU2_TR(0x57a644);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57a645:{NFSU2_TR(0x57a645);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57a646:{NFSU2_TR(0x57a646);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B57a649:{NFSU2_TR(0x57a649);
TAIL_STATIC(0x581580u,581);
}
B57a650:L57a650:{c.instructions+=3;NFSU2_TR(0x57a650);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a651:{NFSU2_TR(0x57a651);
__builtin_memmove((R+24),(R+4),4);
}
B57a653:{NFSU2_TR(0x57a653);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a658ull));
TAIL_STATIC(0x4887c0u,488);
}
B57a658:L57a658:{c.instructions+=1;NFSU2_TR(0x57a658);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a65dull));
TAIL_STATIC(0x4022c0u,402);
}
B57a65d:L57a65d:{c.instructions+=8;NFSU2_TR(0x57a65d);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B57a663:{NFSU2_TR(0x57a663);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57a665:{NFSU2_TR(0x57a665);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57a668:{NFSU2_TR(0x57a668);
__builtin_memmove((R+0),(R+518),1);
}
B57a66b:{NFSU2_TR(0x57a66b);
w4(R+4,u32(0x8a3288ull));
}
B57a670:{NFSU2_TR(0x57a670);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a671:{NFSU2_TR(0x57a671);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a673:{NFSU2_TR(0x57a673);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a678ull));
TAIL_STATIC(0x610700u,610);
}
B57a678:L57a678:{c.instructions+=1;NFSU2_TR(0x57a678);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a67dull));
TAIL_STATIC(0x592b00u,592);
}
B57a67d:L57a67d:{c.instructions+=1;NFSU2_TR(0x57a67d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a682ull));
TAIL_STATIC(0x5a0200u,5a0);
}
B57a682:L57a682:{c.instructions+=1;NFSU2_TR(0x57a682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a687ull));
TAIL_STATIC(0x593db0u,593);
}
B57a687:L57a687:{c.instructions+=2;NFSU2_TR(0x57a687);
__builtin_memmove((R+4),(R+24),4);
}
B57a689:{NFSU2_TR(0x57a689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a68eull));
TAIL_STATIC(0x578060u,578);
}
B57a68e:L57a68e:{c.instructions+=1;NFSU2_TR(0x57a68e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a693ull));
TAIL_STATIC(0x5dfd00u,5df);
}
B57a693:L57a693:{c.instructions+=1;NFSU2_TR(0x57a693);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a698ull));
TAIL_STATIC(0x4022c0u,402);
}
B57a698:L57a698:{c.instructions+=1;NFSU2_TR(0x57a698);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a69dull));
TAIL_STATIC(0x598f10u,598);
}
B57a69d:L57a69d:{c.instructions+=1;NFSU2_TR(0x57a69d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a6a2ull));
TAIL_STATIC(0x490330u,490);
}
B57a6a2:L57a6a2:{c.instructions+=1;NFSU2_TR(0x57a6a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a6a7ull));
TAIL_STATIC(0x4022c0u,402);
}
B57a6a7:L57a6a7:{c.instructions+=1;NFSU2_TR(0x57a6a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a6acull));
TAIL_STATIC(0x60fd40u,60f);
}
B57a6ac:L57a6ac:{c.instructions+=1;NFSU2_TR(0x57a6ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a6b1ull));
TAIL_STATIC(0x4022c0u,402);
}
B57a6b1:L57a6b1:{c.instructions+=4;NFSU2_TR(0x57a6b1);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B57a6b6:{NFSU2_TR(0x57a6b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57a6b8:{NFSU2_TR(0x57a6b8);
w4(R+24,u32(0x1ull));
}
B57a6bd:{NFSU2_TR(0x57a6bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57a6cb;}}
}
B57a6bf:L57a6bf:{c.instructions+=2;NFSU2_TR(0x57a6bf);
w4(R+4,u32(0x88f298ull));
}
B57a6c4:{NFSU2_TR(0x57a6c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a6c9ull));
TAIL_STATIC(0x5d9a60u,5d9);
}
B57a6c9:L57a6c9:{c.instructions+=1;NFSU2_TR(0x57a6c9);
{goto L57a6e7;}
}
B57a6cb:L57a6cb:{c.instructions+=8;NFSU2_TR(0x57a6cb);
__builtin_memmove((R+0),gp(0x89e7a4),4);
}
B57a6d0:{NFSU2_TR(0x57a6d0);
__builtin_memmove((R+8),gp(0x89e7a0),4);
}
B57a6d6:{NFSU2_TR(0x57a6d6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57a6d8:{NFSU2_TR(0x57a6d8);
__builtin_memmove((R+4),(R+518),1);
}
B57a6db:{NFSU2_TR(0x57a6db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a6dc:{NFSU2_TR(0x57a6dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a6dd:{NFSU2_TR(0x57a6dd);
w4(R+4,u32(0x88f298ull));
}
B57a6e2:{NFSU2_TR(0x57a6e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a6e7ull));
TAIL_STATIC(0x5e6a40u,5e6);
}
B57a6e7:L57a6e7:{c.instructions+=3;NFSU2_TR(0x57a6e7);
__builtin_memmove((R+0),gp(0x864fac),4);
}
B57a6ec:{NFSU2_TR(0x57a6ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57a6ee:{NFSU2_TR(0x57a6ee);
if(r1(R+518)){{goto L57a70c;}}
}
B57a6f0:L57a6f0:{c.instructions+=7;NFSU2_TR(0x57a6f0);
__builtin_memmove((R+8),gp(0x88f2bc),1);
}
B57a6f6:{NFSU2_TR(0x57a6f6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57a6f8:{NFSU2_TR(0x57a6f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57a6fa:{NFSU2_TR(0x57a6fa);
__builtin_memmove((R+0),(R+518),1);
}
B57a6fd:{NFSU2_TR(0x57a6fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57a6ff:{NFSU2_TR(0x57a6ff);
__builtin_memmove(gp(0x89e7b4),(R+0),4);
}
B57a704:{NFSU2_TR(0x57a704);
if(r1(R+518)){{goto L57a70c;}}
}
B57a706:L57a706:{c.instructions+=1;NFSU2_TR(0x57a706);
__builtin_memmove(gp(0x89e7bc),(R+24),4);
}
B57a70c:L57a70c:{c.instructions+=1;NFSU2_TR(0x57a70c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a711ull));
TAIL_STATIC(0x611040u,611);
}
B57a711:L57a711:{c.instructions+=2;NFSU2_TR(0x57a711);
s4(0x828650,u32(0x0ull));
}
B57a71b:{NFSU2_TR(0x57a71b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a720ull));
TAIL_STATIC(0x4035d0u,403);
}
B57a720:L57a720:{c.instructions+=1;NFSU2_TR(0x57a720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a725ull));
TAIL_STATIC(0x56c500u,56c);
}
B57a725:L57a725:{c.instructions+=3;NFSU2_TR(0x57a725);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B57a72a:{NFSU2_TR(0x57a72a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a72b:{NFSU2_TR(0x57a72b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a730ull));
TAIL_STATIC(0x5e9e80u,5e9);
}
B57a730:L57a730:{c.instructions+=5;NFSU2_TR(0x57a730);
__builtin_memmove((R+0),gp(0x89e7ac),1);
}
B57a735:{NFSU2_TR(0x57a735);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57a738:{NFSU2_TR(0x57a738);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57a73a:{NFSU2_TR(0x57a73a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57a73b:{NFSU2_TR(0x57a73b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57a74b;}}
}
B57a73d:L57a73d:{c.instructions+=3;NFSU2_TR(0x57a73d);
__builtin_memmove((R+0),gp(0x89e7ad),1);
}
B57a742:{NFSU2_TR(0x57a742);
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
B57a744:{NFSU2_TR(0x57a744);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57a74b;}}
}
B57a746:L57a746:{c.instructions+=1;NFSU2_TR(0x57a746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a74bull));
TAIL_STATIC(0x4022c0u,402);
}
B57a74b:L57a74b:{c.instructions+=2;NFSU2_TR(0x57a74b);
w4(R+4,u32(0x89cf48ull));
}
B57a750:{NFSU2_TR(0x57a750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a755ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B57a755:L57a755:{c.instructions+=2;NFSU2_TR(0x57a755);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57a757:{NFSU2_TR(0x57a757);
if(r1(R+518)){{goto L57a763;}}
}
B57a759:L57a759:{c.instructions+=2;NFSU2_TR(0x57a759);
w4(R+4,u32(0x89cf48ull));
}
B57a75e:{NFSU2_TR(0x57a75e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a763ull));
TAIL_STATIC(0x5f9460u,5f9);
}
B57a763:L57a763:{c.instructions+=1;NFSU2_TR(0x57a763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a768ull));
TAIL_STATIC(0x43a880u,43a);
}
B57a768:L57a768:{c.instructions+=2;NFSU2_TR(0x57a768);
s4(0x82b8dc,u32(0x0ull));
}
B57a772:{NFSU2_TR(0x57a772);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a780:L57a780:{c.instructions+=10;NFSU2_TR(0x57a780);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a781:{NFSU2_TR(0x57a781);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a782:{NFSU2_TR(0x57a782);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a783:{NFSU2_TR(0x57a783);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57a787:{NFSU2_TR(0x57a787);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a788:{NFSU2_TR(0x57a788);
u8 U[4];
w4(U+0,u32(0x7a08a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a78d:{NFSU2_TR(0x57a78d);
__builtin_memmove((R+28),(R+4),4);
}
B57a78f:{NFSU2_TR(0x57a78f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a791:{NFSU2_TR(0x57a791);
__builtin_memmove((R+4),(R+24),4);
}
B57a793:{NFSU2_TR(0x57a793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a798ull));
TAIL_STATIC(0x578ce0u,578);
}
B57a798:L57a798:{c.instructions+=3;NFSU2_TR(0x57a798);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57a79c:{NFSU2_TR(0x57a79c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57a79e:{NFSU2_TR(0x57a79e);
if(r1(R+518)){{goto L57a7fd;}}
}
B57a7a0:L57a7a0:{c.instructions+=4;NFSU2_TR(0x57a7a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57a7a3:{NFSU2_TR(0x57a7a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a7a4:{NFSU2_TR(0x57a7a4);
__builtin_memmove((R+4),(R+24),4);
}
B57a7a6:{NFSU2_TR(0x57a7a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a7abull));
TAIL_STATIC(0x571770u,571);
}
B57a7ab:L57a7ab:{c.instructions+=4;NFSU2_TR(0x57a7ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57a7ae:{NFSU2_TR(0x57a7ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a7af:{NFSU2_TR(0x57a7af);
__builtin_memmove((R+4),(R+24),4);
}
B57a7b1:{NFSU2_TR(0x57a7b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a7b6ull));
TAIL_STATIC(0x571770u,571);
}
B57a7b6:L57a7b6:{c.instructions+=4;NFSU2_TR(0x57a7b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57a7b9:{NFSU2_TR(0x57a7b9);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B57a7bb:{NFSU2_TR(0x57a7bb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57a7bd:{NFSU2_TR(0x57a7bd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57a84f;}}
}
B57a7c3:L57a7c3:{c.instructions+=1;NFSU2_TR(0x57a7c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57a7c6:L57a7c6:{c.instructions+=4;NFSU2_TR(0x57a7c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B57a7c9:{NFSU2_TR(0x57a7c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a7ca:{NFSU2_TR(0x57a7ca);
__builtin_memmove((R+4),(R+24),4);
}
B57a7cc:{NFSU2_TR(0x57a7cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a7d1ull));
TAIL_STATIC(0x571770u,571);
}
B57a7d1:L57a7d1:{c.instructions+=3;NFSU2_TR(0x57a7d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a7d2:{NFSU2_TR(0x57a7d2);
__builtin_memmove((R+4),(R+24),4);
}
B57a7d4:{NFSU2_TR(0x57a7d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a7d9ull));
TAIL_STATIC(0x571770u,571);
}
B57a7d9:L57a7d9:{c.instructions+=4;NFSU2_TR(0x57a7d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57a7dc:{NFSU2_TR(0x57a7dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a7dd:{NFSU2_TR(0x57a7dd);
__builtin_memmove((R+4),(R+24),4);
}
B57a7df:{NFSU2_TR(0x57a7df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a7e4ull));
TAIL_STATIC(0x571770u,571);
}
B57a7e4:L57a7e4:{c.instructions+=5;NFSU2_TR(0x57a7e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57a7e7:{NFSU2_TR(0x57a7e7);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B57a7e8:{NFSU2_TR(0x57a7e8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x24ull))));
}
B57a7eb:{NFSU2_TR(0x57a7eb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57a7ed:{NFSU2_TR(0x57a7ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57a7c6u);}goto L57a7c6;}}
}
B57a7ef:L57a7ef:{c.instructions+=2;NFSU2_TR(0x57a7ef);
__builtin_memmove((R+4),(R+24),4);
}
B57a7f1:{NFSU2_TR(0x57a7f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a7f6ull));
TAIL_STATIC(0x578d90u,578);
}
B57a7f6:L57a7f6:{c.instructions+=5;NFSU2_TR(0x57a7f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57a7f7:{NFSU2_TR(0x57a7f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57a7f8:{NFSU2_TR(0x57a7f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57a7f9:{NFSU2_TR(0x57a7f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57a7fa:{NFSU2_TR(0x57a7fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a7fd:L57a7fd:{c.instructions+=5;NFSU2_TR(0x57a7fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57a800:{NFSU2_TR(0x57a800);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a801:{NFSU2_TR(0x57a801);
__builtin_memmove((R+4),(R+24),4);
}
B57a803:{NFSU2_TR(0x57a803);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57a80a:{NFSU2_TR(0x57a80a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a80full));
TAIL_STATIC(0x571770u,571);
}
B57a80f:L57a80f:{c.instructions+=4;NFSU2_TR(0x57a80f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((R+8),(U+0),4);
}
B57a812:{NFSU2_TR(0x57a812);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a813:{NFSU2_TR(0x57a813);
__builtin_memmove((R+4),(R+24),4);
}
B57a815:{NFSU2_TR(0x57a815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a81aull));
TAIL_STATIC(0x571770u,571);
}
B57a81a:L57a81a:{c.instructions+=4;NFSU2_TR(0x57a81a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57a81d:{NFSU2_TR(0x57a81d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B57a81f:{NFSU2_TR(0x57a81f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57a821:{NFSU2_TR(0x57a821);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57a84f;}}
}
B57a823:L57a823:{c.instructions+=1;NFSU2_TR(0x57a823);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+12),(U+0),4);
}
B57a826:L57a826:{c.instructions+=4;NFSU2_TR(0x57a826);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B57a829:{NFSU2_TR(0x57a829);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a82a:{NFSU2_TR(0x57a82a);
__builtin_memmove((R+4),(R+24),4);
}
B57a82c:{NFSU2_TR(0x57a82c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a831ull));
TAIL_STATIC(0x571770u,571);
}
B57a831:L57a831:{c.instructions+=3;NFSU2_TR(0x57a831);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a832:{NFSU2_TR(0x57a832);
__builtin_memmove((R+4),(R+24),4);
}
B57a834:{NFSU2_TR(0x57a834);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a839ull));
TAIL_STATIC(0x571770u,571);
}
B57a839:L57a839:{c.instructions+=4;NFSU2_TR(0x57a839);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57a83c:{NFSU2_TR(0x57a83c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a83d:{NFSU2_TR(0x57a83d);
__builtin_memmove((R+4),(R+24),4);
}
B57a83f:{NFSU2_TR(0x57a83f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a844ull));
TAIL_STATIC(0x571770u,571);
}
B57a844:L57a844:{c.instructions+=5;NFSU2_TR(0x57a844);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57a847:{NFSU2_TR(0x57a847);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B57a848:{NFSU2_TR(0x57a848);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x24ull))));
}
B57a84b:{NFSU2_TR(0x57a84b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57a84d:{NFSU2_TR(0x57a84d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57a826u);}goto L57a826;}}
}
B57a84f:L57a84f:{c.instructions+=2;NFSU2_TR(0x57a84f);
__builtin_memmove((R+4),(R+24),4);
}
B57a851:{NFSU2_TR(0x57a851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a856ull));
TAIL_STATIC(0x578d90u,578);
}
B57a856:L57a856:{c.instructions+=5;NFSU2_TR(0x57a856);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57a857:{NFSU2_TR(0x57a857);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57a858:{NFSU2_TR(0x57a858);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57a859:{NFSU2_TR(0x57a859);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57a85a:{NFSU2_TR(0x57a85a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a860:L57a860:{c.instructions+=62;NFSU2_TR(0x57a860);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a862:{NFSU2_TR(0x57a862);
u8 U[4];
w4(U+0,u32(0x7787fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a867:{NFSU2_TR(0x57a867);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57a86d:{NFSU2_TR(0x57a86d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a86e:{NFSU2_TR(0x57a86e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a875:{NFSU2_TR(0x57a875);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a876:{NFSU2_TR(0x57a876);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a877:{NFSU2_TR(0x57a877);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a878:{NFSU2_TR(0x57a878);
__builtin_memmove((R+24),(R+4),4);
}
B57a87a:{NFSU2_TR(0x57a87a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B57a87c:{NFSU2_TR(0x57a87c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a882:{NFSU2_TR(0x57a882);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57a888:{NFSU2_TR(0x57a888);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a88e:{NFSU2_TR(0x57a88e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a88f:{NFSU2_TR(0x57a88f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a893:{NFSU2_TR(0x57a893);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57a895:{NFSU2_TR(0x57a895);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a898:{NFSU2_TR(0x57a898);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57a89e:{NFSU2_TR(0x57a89e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8a2:{NFSU2_TR(0x57a8a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+20)),r4(U+0));
}
B57a8a5:{NFSU2_TR(0x57a8a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8a8:{NFSU2_TR(0x57a8a8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B57a8ab:{NFSU2_TR(0x57a8ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8ae:{NFSU2_TR(0x57a8ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8b1:{NFSU2_TR(0x57a8b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8b7:{NFSU2_TR(0x57a8b7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57a8b9:{NFSU2_TR(0x57a8b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B57a8bb:{NFSU2_TR(0x57a8bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8be:{NFSU2_TR(0x57a8be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8c1:{NFSU2_TR(0x57a8c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8c4:{NFSU2_TR(0x57a8c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8c7:{NFSU2_TR(0x57a8c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8ca:{NFSU2_TR(0x57a8ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8cd:{NFSU2_TR(0x57a8cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8d0:{NFSU2_TR(0x57a8d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8d6:{NFSU2_TR(0x57a8d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8dc:{NFSU2_TR(0x57a8dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8e2:{NFSU2_TR(0x57a8e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8e5:{NFSU2_TR(0x57a8e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8eb:{NFSU2_TR(0x57a8eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8f1:{NFSU2_TR(0x57a8f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a8f7:{NFSU2_TR(0x57a8f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
w4(U+4,u32(0x41700000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57a901:{NFSU2_TR(0x57a901);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a907:{NFSU2_TR(0x57a907);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a90a:{NFSU2_TR(0x57a90a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a90d:{NFSU2_TR(0x57a90d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a910:{NFSU2_TR(0x57a910);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a913:{NFSU2_TR(0x57a913);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x7fffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B57a91a:{NFSU2_TR(0x57a91a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a920:{NFSU2_TR(0x57a920);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a926:{NFSU2_TR(0x57a926);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a92c:{NFSU2_TR(0x57a92c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a932:{NFSU2_TR(0x57a932);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a938:{NFSU2_TR(0x57a938);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a93e:{NFSU2_TR(0x57a93e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a944:{NFSU2_TR(0x57a944);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a94a:{NFSU2_TR(0x57a94a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a950:{NFSU2_TR(0x57a950);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a956:{NFSU2_TR(0x57a956);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40e4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a95c:{NFSU2_TR(0x57a95c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40e8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a962:{NFSU2_TR(0x57a962);
w4(R+4,u32(0x400ull));
}
B57a967:{NFSU2_TR(0x57a967);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ecull))));
__builtin_memmove((R+28),(U+0),4);
}
B57a96d:L57a96d:{c.instructions+=1;NFSU2_TR(0x57a96d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L57a96f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57a96du);}goto L57a96d;}
}
B57a96f:L57a96f:{c.instructions+=3;NFSU2_TR(0x57a96f);
u8 U[2];
__builtin_memmove((U+0),gp(0x865564),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+8))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B57a975:{NFSU2_TR(0x57a975);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57a97a:{NFSU2_TR(0x57a97a);
if(r1(R+518)){{goto L57a999;}}
}
B57a97c:L57a97c:{c.instructions+=6;NFSU2_TR(0x57a97c);
__builtin_memmove((R+0),gp(0x86558c),4);
}
B57a981:{NFSU2_TR(0x57a981);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a987:{NFSU2_TR(0x57a987);
u8 U[4];
w4(U+0,u32(0x865590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a98c:{NFSU2_TR(0x57a98c);
__builtin_memmove((R+4),(R+20),4);
}
B57a98e:{NFSU2_TR(0x57a98e);
__builtin_memmove(gp(0x86558c),(R+8),4);
}
B57a994:{NFSU2_TR(0x57a994);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57a999ull));
TAIL_STATIC(0x43beb0u,43b);
}
B57a999:L57a999:{c.instructions+=9;NFSU2_TR(0x57a999);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57a99d:{NFSU2_TR(0x57a99d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57a99e:{NFSU2_TR(0x57a99e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ecull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B57a9a5:{NFSU2_TR(0x57a9a5);
__builtin_memmove((R+0),(R+24),4);
}
B57a9a7:{NFSU2_TR(0x57a9a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57a9a8:{NFSU2_TR(0x57a9a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57a9a9:{NFSU2_TR(0x57a9a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a9b0:{NFSU2_TR(0x57a9b0);
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
B57a9b3:{NFSU2_TR(0x57a9b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57a9c0:L57a9c0:{c.instructions+=16;NFSU2_TR(0x57a9c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a9c2:{NFSU2_TR(0x57a9c2);
u8 U[4];
w4(U+0,u32(0x7787fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a9c7:{NFSU2_TR(0x57a9c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57a9cd:{NFSU2_TR(0x57a9cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a9ce:{NFSU2_TR(0x57a9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a9d5:{NFSU2_TR(0x57a9d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a9d6:{NFSU2_TR(0x57a9d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a9d7:{NFSU2_TR(0x57a9d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a9d8:{NFSU2_TR(0x57a9d8);
__builtin_memmove((R+12),(R+4),4);
}
B57a9da:{NFSU2_TR(0x57a9da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57a9db:{NFSU2_TR(0x57a9db);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57a9df:{NFSU2_TR(0x57a9df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57a9e5:{NFSU2_TR(0x57a9e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57a9eb:{NFSU2_TR(0x57a9eb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57a9ed:{NFSU2_TR(0x57a9ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57a9f5:{NFSU2_TR(0x57a9f5);
if(r1(R+518)){{goto L57aa3d;}}
}
B57a9f7:L57a9f7:{c.instructions+=8;NFSU2_TR(0x57a9f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57a9f9:{NFSU2_TR(0x57a9f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57a9fb:{NFSU2_TR(0x57a9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57a9fe:{NFSU2_TR(0x57a9fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57aa00:{NFSU2_TR(0x57aa00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57aa03:{NFSU2_TR(0x57aa03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57aa06:{NFSU2_TR(0x57aa06);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57aa08:{NFSU2_TR(0x57aa08);
if(r1(R+518)){{goto L57aa30;}}
}
B57aa0a:L57aa0a:{c.instructions+=3;NFSU2_TR(0x57aa0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57aa0b:{NFSU2_TR(0x57aa0b);
w4(R+4,u32(0x86519cull));
}
B57aa10:{NFSU2_TR(0x57aa10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57aa15ull));
TAIL_STATIC(0x43beb0u,43b);
}
B57aa15:L57aa15:{c.instructions+=3;NFSU2_TR(0x57aa15);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57aa1b:{NFSU2_TR(0x57aa1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57aa1d:{NFSU2_TR(0x57aa1d);
if(r1(R+518)){{goto L57aa39;}}
}
B57aa1f:L57aa1f:{c.instructions+=3;NFSU2_TR(0x57aa1f);
__builtin_memmove(gp(0x86558c),(R+0),4);
}
B57aa24:{NFSU2_TR(0x57aa24);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57aa2e:{NFSU2_TR(0x57aa2e);
{goto L57aa39;}
}
B57aa30:L57aa30:{c.instructions+=2;NFSU2_TR(0x57aa30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57aa31:{NFSU2_TR(0x57aa31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57aa36ull));
TAIL_STATIC(0x75c6dau,75c);
}
B57aa36:L57aa36:{c.instructions+=1;NFSU2_TR(0x57aa36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57aa39:L57aa39:{c.instructions+=2;NFSU2_TR(0x57aa39);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B57aa3b:{NFSU2_TR(0x57aa3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57a9f7u);}goto L57a9f7;}}
}
B57aa3d:L57aa3d:{c.instructions+=4;NFSU2_TR(0x57aa3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57aa43:{NFSU2_TR(0x57aa43);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57aa49:{NFSU2_TR(0x57aa49);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57aa4b:{NFSU2_TR(0x57aa4b);
if(r1(R+518)){{goto L57aa6b;}}
}
B57aa4d:L57aa4d:{c.instructions+=1;NFSU2_TR(0x57aa4d);
__builtin_memmove((R+4),(R+4),4);
}
B57aa50:L57aa50:{c.instructions+=7;NFSU2_TR(0x57aa50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57aa52:{NFSU2_TR(0x57aa52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57aa54:{NFSU2_TR(0x57aa54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57aa57:{NFSU2_TR(0x57aa57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57aa59:{NFSU2_TR(0x57aa59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57aa5a:{NFSU2_TR(0x57aa5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57aa5d:{NFSU2_TR(0x57aa5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57aa62ull));
TAIL_STATIC(0x75c6dau,75c);
}
B57aa62:L57aa62:{c.instructions+=4;NFSU2_TR(0x57aa62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57aa64:{NFSU2_TR(0x57aa64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57aa67:{NFSU2_TR(0x57aa67);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57aa69:{NFSU2_TR(0x57aa69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57aa50u);}goto L57aa50;}}
}
B57aa6b:L57aa6b:{c.instructions+=3;NFSU2_TR(0x57aa6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B57aa71:{NFSU2_TR(0x57aa71);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57aa73:{NFSU2_TR(0x57aa73);
if(r1(R+518)){{goto L57aa7e;}}
}
B57aa75:L57aa75:{c.instructions+=2;NFSU2_TR(0x57aa75);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57aa76:{NFSU2_TR(0x57aa76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57aa7bull));
TAIL_STATIC(0x440540u,440);
}
B57aa7b:L57aa7b:{c.instructions+=1;NFSU2_TR(0x57aa7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57aa7e:L57aa7e:{c.instructions+=3;NFSU2_TR(0x57aa7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57aa80:{NFSU2_TR(0x57aa80);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57aa82:{NFSU2_TR(0x57aa82);
if(r1(R+518)){{goto L57aa9d;}}
}
B57aa84:L57aa84:{c.instructions+=6;NFSU2_TR(0x57aa84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57aa86:{NFSU2_TR(0x57aa86);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57aa89:{NFSU2_TR(0x57aa89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57aa8b:{NFSU2_TR(0x57aa8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57aa8c:{NFSU2_TR(0x57aa8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57aa8f:{NFSU2_TR(0x57aa8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57aa94ull));
TAIL_STATIC(0x75c6dau,75c);
}
B57aa94:L57aa94:{c.instructions+=4;NFSU2_TR(0x57aa94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57aa96:{NFSU2_TR(0x57aa96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57aa99:{NFSU2_TR(0x57aa99);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57aa9b:{NFSU2_TR(0x57aa9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57aa84u);}goto L57aa84;}}
}
B57aa9d:L57aa9d:{c.instructions+=3;NFSU2_TR(0x57aa9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57aa9f:{NFSU2_TR(0x57aa9f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57aaa1:{NFSU2_TR(0x57aaa1);
if(r1(R+518)){{goto L57aabc;}}
}
B57aaa3:L57aaa3:{c.instructions+=6;NFSU2_TR(0x57aaa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57aaa5:{NFSU2_TR(0x57aaa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57aaa8:{NFSU2_TR(0x57aaa8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57aaaa:{NFSU2_TR(0x57aaaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57aaab:{NFSU2_TR(0x57aaab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57aaae:{NFSU2_TR(0x57aaae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57aab3ull));
TAIL_STATIC(0x75c6dau,75c);
}
B57aab3:L57aab3:{c.instructions+=4;NFSU2_TR(0x57aab3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57aab5:{NFSU2_TR(0x57aab5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57aab8:{NFSU2_TR(0x57aab8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57aaba:{NFSU2_TR(0x57aaba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57aaa3u);}goto L57aaa3;}}
}
B57aabc:L57aabc:{c.instructions+=7;NFSU2_TR(0x57aabc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57aac0:{NFSU2_TR(0x57aac0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57aac1:{NFSU2_TR(0x57aac1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57aac2:{NFSU2_TR(0x57aac2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57aac3:{NFSU2_TR(0x57aac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57aaca:{NFSU2_TR(0x57aaca);
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
B57aacd:{NFSU2_TR(0x57aacd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57aad0:L57aad0:{c.instructions+=4;NFSU2_TR(0x57aad0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57aad1:{NFSU2_TR(0x57aad1);
__builtin_memmove((R+28),(R+4),4);
}
B57aad3:{NFSU2_TR(0x57aad3);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
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
B57aad7:{NFSU2_TR(0x57aad7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57ac33;}}
}
B57aadd:L57aadd:{c.instructions+=6;NFSU2_TR(0x57aadd);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B57aae2:{NFSU2_TR(0x57aae2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57aae3:{NFSU2_TR(0x57aae3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B57aae5:{NFSU2_TR(0x57aae5);
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
B57aae7:{NFSU2_TR(0x57aae7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57aae8:{NFSU2_TR(0x57aae8);
if(r1(R+518)){{goto L57ac31;}}
}
B57aaee:L57aaee:{c.instructions+=2;NFSU2_TR(0x57aaee);
w4(R+4,u32(0x89cf48ull));
}
B57aaf3:{NFSU2_TR(0x57aaf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57aaf8ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B57aaf8:L57aaf8:{c.instructions+=2;NFSU2_TR(0x57aaf8);
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
B57aafa:{NFSU2_TR(0x57aafa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57ac31;}}
}
B57ab00:L57ab00:{c.instructions+=4;NFSU2_TR(0x57ab00);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B57ab06:{NFSU2_TR(0x57ab06);
w4(R+0,u32(0x2ull));
}
B57ab0b:{NFSU2_TR(0x57ab0b);
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
B57ab0d:{NFSU2_TR(0x57ab0d);
if(r1(R+518)){{goto L57ac31;}}
}
B57ab13:L57ab13:{c.instructions+=2;NFSU2_TR(0x57ab13);
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
B57ab1a:{NFSU2_TR(0x57ab1a);
if(r1(R+518)){{goto L57ac31;}}
}
B57ab20:L57ab20:{c.instructions+=16;NFSU2_TR(0x57ab20);
__builtin_memmove((R+4),gp(0x7fb724),4);
}
B57ab26:{NFSU2_TR(0x57ab26);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ab29:{NFSU2_TR(0x57ab29);
__builtin_memmove((R+8),gp(0x7fb724),4);
}
B57ab2f:{NFSU2_TR(0x57ab2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ab32:{NFSU2_TR(0x57ab32);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B57ab38:{NFSU2_TR(0x57ab38);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ab3e:{NFSU2_TR(0x57ab3e);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B57ab44:{NFSU2_TR(0x57ab44);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ab4a:{NFSU2_TR(0x57ab4a);
w4(R+20,u32(0x8ull));
}
B57ab4f:{NFSU2_TR(0x57ab4f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ab50:{NFSU2_TR(0x57ab50);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ab56:{NFSU2_TR(0x57ab56);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ab5c:{NFSU2_TR(0x57ab5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57ab66:{NFSU2_TR(0x57ab66);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ab6c:{NFSU2_TR(0x57ab6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ab72:{NFSU2_TR(0x57ab72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ab77ull));
TAIL_STATIC(0x43e910u,43e);
}
B57ab77:L57ab77:{c.instructions+=4;NFSU2_TR(0x57ab77);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
}
B57ab7c:{NFSU2_TR(0x57ab7c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57ab7f:{NFSU2_TR(0x57ab7f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xf8f40ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xf8f40ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xf8f40ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57ab84:{NFSU2_TR(0x57ab84);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L57ac13;}}
}
B57ab8a:L57ab8a:{c.instructions+=4;NFSU2_TR(0x57ab8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ab8b:{NFSU2_TR(0x57ab8b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ab8c:{NFSU2_TR(0x57ab8c);
u8 U[4];
w4(U+0,u32(0x40000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ab91:{NFSU2_TR(0x57ab91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ab96ull));
TAIL_STATIC(0x440820u,440);
}
B57ab96:L57ab96:{c.instructions+=7;NFSU2_TR(0x57ab96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57ab99:{NFSU2_TR(0x57ab99);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ab9a:{NFSU2_TR(0x57ab9a);
__builtin_memmove((R+24),(R+0),4);
}
B57ab9c:{NFSU2_TR(0x57ab9c);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ab9e:{NFSU2_TR(0x57ab9e);
u8 U[4];
w4(U+0,u32(0x40000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57aba3:{NFSU2_TR(0x57aba3);
__builtin_memmove((R+4),(R+24),4);
}
B57aba5:{NFSU2_TR(0x57aba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57abaaull));
TAIL_STATIC(0x575020u,575);
}
B57abaa:L57abaa:{c.instructions+=16;NFSU2_TR(0x57abaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57abad:{NFSU2_TR(0x57abad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57abb0:{NFSU2_TR(0x57abb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57abb7:{NFSU2_TR(0x57abb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57abbe:{NFSU2_TR(0x57abbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57abc1:{NFSU2_TR(0x57abc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57abc4:{NFSU2_TR(0x57abc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57abca:{NFSU2_TR(0x57abca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57abd0:{NFSU2_TR(0x57abd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57abd6:{NFSU2_TR(0x57abd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57abdc:{NFSU2_TR(0x57abdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57abe2:{NFSU2_TR(0x57abe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57abe8:{NFSU2_TR(0x57abe8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B57abea:{NFSU2_TR(0x57abea);
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
B57abec:{NFSU2_TR(0x57abec);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57abf2:{NFSU2_TR(0x57abf2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57ac07;}}
}
B57abf4:L57abf4:{c.instructions+=3;NFSU2_TR(0x57abf4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57abf5:{NFSU2_TR(0x57abf5);
__builtin_memmove((R+4),(R+28),4);
}
B57abf7:{NFSU2_TR(0x57abf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57abfcull));
TAIL_STATIC(0x579080u,579);
}
B57abfc:L57abfc:{c.instructions+=4;NFSU2_TR(0x57abfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57ac02:{NFSU2_TR(0x57ac02);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B57ac03:{NFSU2_TR(0x57ac03);
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
B57ac05:{NFSU2_TR(0x57ac05);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57abf4u);}goto L57abf4;}}
}
B57ac07:L57ac07:{c.instructions+=6;NFSU2_TR(0x57ac07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57ac08:{NFSU2_TR(0x57ac08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57ac09:{NFSU2_TR(0x57ac09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57ac0a:{NFSU2_TR(0x57ac0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
w4(U+4,u32(0x7fffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B57ac11:{NFSU2_TR(0x57ac11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57ac12:{NFSU2_TR(0x57ac12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57ac13:L57ac13:{c.instructions+=5;NFSU2_TR(0x57ac13);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ac19:{NFSU2_TR(0x57ac19);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ac1f:{NFSU2_TR(0x57ac1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ac25:{NFSU2_TR(0x57ac25);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ac2b:{NFSU2_TR(0x57ac2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ac31:L57ac31:{c.instructions+=2;NFSU2_TR(0x57ac31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57ac32:{NFSU2_TR(0x57ac32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57ac33:L57ac33:{c.instructions+=2;NFSU2_TR(0x57ac33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57ac34:{NFSU2_TR(0x57ac34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57ac40:L57ac40:{c.instructions+=19;NFSU2_TR(0x57ac40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ac41:{NFSU2_TR(0x57ac41);
__builtin_memmove((R+20),(R+16),4);
}
B57ac43:{NFSU2_TR(0x57ac43);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B57ac46:{NFSU2_TR(0x57ac46);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ac48:{NFSU2_TR(0x57ac48);
u8 U[4];
w4(U+0,u32(0x778818ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ac4d:{NFSU2_TR(0x57ac4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57ac53:{NFSU2_TR(0x57ac53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ac54:{NFSU2_TR(0x57ac54);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ac5b:{NFSU2_TR(0x57ac5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B57ac5e:{NFSU2_TR(0x57ac5e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ac5f:{NFSU2_TR(0x57ac5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ac60:{NFSU2_TR(0x57ac60);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57ac64:{NFSU2_TR(0x57ac64);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57ac68:{NFSU2_TR(0x57ac68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ac69:{NFSU2_TR(0x57ac69);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ac6d:{NFSU2_TR(0x57ac6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ac71:{NFSU2_TR(0x57ac71);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57ac79:{NFSU2_TR(0x57ac79);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57ac7f:{NFSU2_TR(0x57ac7f);
}
B57ac80:L57ac80:{c.instructions+=4;NFSU2_TR(0x57ac80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57ac82:{NFSU2_TR(0x57ac82);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B57ac84:{NFSU2_TR(0x57ac84);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57ac86:{NFSU2_TR(0x57ac86);
if(r1(R+518)){{goto L57aca7;}}
}
B57ac88:L57ac88:{c.instructions+=5;NFSU2_TR(0x57ac88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57ac8b:{NFSU2_TR(0x57ac8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ac8c:{NFSU2_TR(0x57ac8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57ac8f:{NFSU2_TR(0x57ac8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ac90:{NFSU2_TR(0x57ac90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ac95ull));
TAIL_STATIC(0x43dc30u,43d);
}
B57ac95:L57ac95:{c.instructions+=3;NFSU2_TR(0x57ac95);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B57ac98:{NFSU2_TR(0x57ac98);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57ac9a:{NFSU2_TR(0x57ac9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L57aca1;}}
}
B57ac9c:L57ac9c:{c.instructions+=2;NFSU2_TR(0x57ac9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57ac9e:{NFSU2_TR(0x57ac9e);
if(r1(R+518)){{goto L57ad05;}}
}
B57aca0:L57aca0:{c.instructions+=1;NFSU2_TR(0x57aca0);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B57aca1:L57aca1:{c.instructions+=3;NFSU2_TR(0x57aca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B57aca3:{NFSU2_TR(0x57aca3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57aca5:{NFSU2_TR(0x57aca5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57ac88u);}goto L57ac88;}}
}
B57aca7:L57aca7:{c.instructions+=3;NFSU2_TR(0x57aca7);
u8 U[4];
w4(U+0,u32(0x571950ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57acac:{NFSU2_TR(0x57acac);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57acb0:{NFSU2_TR(0x57acb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57acb5ull));
TAIL_STATIC(0x43e650u,43e);
}
B57acb5:L57acb5:{c.instructions+=4;NFSU2_TR(0x57acb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B57acb9:{NFSU2_TR(0x57acb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57acba:{NFSU2_TR(0x57acba);
__builtin_memmove((R+4),(R+12),4);
}
B57acbc:{NFSU2_TR(0x57acbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57acc1ull));
TAIL_STATIC(0x43beb0u,43b);
}
B57acc1:L57acc1:{c.instructions+=4;NFSU2_TR(0x57acc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57acc5:{NFSU2_TR(0x57acc5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B57acc9:{NFSU2_TR(0x57acc9);
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
B57accb:{NFSU2_TR(0x57accb);
if(r1(R+518)){{goto L57acf1;}}
}
B57accd:L57accd:{c.instructions+=1;NFSU2_TR(0x57accd);
__builtin_memmove((R+4),(R+4),4);
}
B57acd0:L57acd0:{c.instructions+=7;NFSU2_TR(0x57acd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57acd2:{NFSU2_TR(0x57acd2);
__builtin_memmove((R+8),(R+0),4);
}
B57acd4:{NFSU2_TR(0x57acd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57acd7:{NFSU2_TR(0x57acd7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57acd9:{NFSU2_TR(0x57acd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57acda:{NFSU2_TR(0x57acda);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57acdd:{NFSU2_TR(0x57acdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ace2ull));
TAIL_STATIC(0x75c6dau,75c);
}
B57ace2:L57ace2:{c.instructions+=5;NFSU2_TR(0x57ace2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57ace6:{NFSU2_TR(0x57ace6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57acea:{NFSU2_TR(0x57acea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57aced:{NFSU2_TR(0x57aced);
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
B57acef:{NFSU2_TR(0x57acef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57acd0u);}goto L57acd0;}}
}
B57acf1:L57acf1:{c.instructions+=8;NFSU2_TR(0x57acf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57acf5:{NFSU2_TR(0x57acf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57acf6:{NFSU2_TR(0x57acf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57acf7:{NFSU2_TR(0x57acf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57acfe:{NFSU2_TR(0x57acfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57acff:{NFSU2_TR(0x57acff);
__builtin_memmove((R+16),(R+20),4);
}
B57ad01:{NFSU2_TR(0x57ad01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57ad02:{NFSU2_TR(0x57ad02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57ad05:L57ad05:{c.instructions+=2;NFSU2_TR(0x57ad05);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57ad07:{NFSU2_TR(0x57ad07);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57aca7u);}goto L57aca7;}}
}
B57ad09:L57ad09:{c.instructions+=11;NFSU2_TR(0x57ad09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57ad0b:{NFSU2_TR(0x57ad0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57ad0e:{NFSU2_TR(0x57ad0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57ad10:{NFSU2_TR(0x57ad10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ad13:{NFSU2_TR(0x57ad13);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57ad17:{NFSU2_TR(0x57ad17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57ad19:{NFSU2_TR(0x57ad19);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ad1d:{NFSU2_TR(0x57ad1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B57ad21:{NFSU2_TR(0x57ad21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ad24:{NFSU2_TR(0x57ad24);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B57ad26:{NFSU2_TR(0x57ad26);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57ac80u);}goto L57ac80;}
}
B57ad30:L57ad30:{c.instructions+=6;NFSU2_TR(0x57ad30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57ad34:{NFSU2_TR(0x57ad34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ad35:{NFSU2_TR(0x57ad35);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ad37:{NFSU2_TR(0x57ad37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ad38:{NFSU2_TR(0x57ad38);
__builtin_memmove((R+24),(R+4),4);
}
B57ad3a:{NFSU2_TR(0x57ad3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ad3full));
TAIL_STATIC(0x578fd0u,578);
}
B57ad3f:L57ad3f:{c.instructions+=2;NFSU2_TR(0x57ad3f);
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
B57ad41:{NFSU2_TR(0x57ad41);
if(r1(R+518)){{goto L57ad6c;}}
}
B57ad43:L57ad43:{c.instructions+=13;NFSU2_TR(0x57ad43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57ad45:{NFSU2_TR(0x57ad45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57ad48:{NFSU2_TR(0x57ad48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57ad4a:{NFSU2_TR(0x57ad4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ad4d:{NFSU2_TR(0x57ad4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57ad53:{NFSU2_TR(0x57ad53);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57ad59:{NFSU2_TR(0x57ad59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57ad5b:{NFSU2_TR(0x57ad5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ad5e:{NFSU2_TR(0x57ad5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ad61:{NFSU2_TR(0x57ad61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57ad63:{NFSU2_TR(0x57ad63);
w4(R+0,u32(0x1ull));
}
B57ad68:{NFSU2_TR(0x57ad68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57ad69:{NFSU2_TR(0x57ad69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57ad6c:L57ad6c:{c.instructions+=3;NFSU2_TR(0x57ad6c);
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
B57ad6e:{NFSU2_TR(0x57ad6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57ad6f:{NFSU2_TR(0x57ad6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57ad80:L57ad80:{c.instructions+=12;NFSU2_TR(0x57ad80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ad81:{NFSU2_TR(0x57ad81);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ad82:{NFSU2_TR(0x57ad82);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ad83:{NFSU2_TR(0x57ad83);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ad84:{NFSU2_TR(0x57ad84);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57ad88:{NFSU2_TR(0x57ad88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ad89:{NFSU2_TR(0x57ad89);
__builtin_memmove((R+20),(R+4),4);
}
B57ad8b:{NFSU2_TR(0x57ad8b);
u8 U[4];
w4(U+0,u32(0x7a08b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ad90:{NFSU2_TR(0x57ad90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ad92:{NFSU2_TR(0x57ad92);
__builtin_memmove((R+4),(R+24),4);
}
B57ad94:{NFSU2_TR(0x57ad94);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57ad98:{NFSU2_TR(0x57ad98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ad9dull));
TAIL_STATIC(0x578ce0u,578);
}
B57ad9d:L57ad9d:{c.instructions+=4;NFSU2_TR(0x57ad9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57ada0:{NFSU2_TR(0x57ada0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57ada1:{NFSU2_TR(0x57ada1);
__builtin_memmove((R+4),(R+24),4);
}
B57ada3:{NFSU2_TR(0x57ada3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57ada8ull));
TAIL_STATIC(0x571770u,571);
}
B57ada8:L57ada8:{c.instructions+=4;NFSU2_TR(0x57ada8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((R+4),(U+0),4);
}
B57adab:{NFSU2_TR(0x57adab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57adac:{NFSU2_TR(0x57adac);
__builtin_memmove((R+4),(R+24),4);
}
B57adae:{NFSU2_TR(0x57adae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57adb3ull));
TAIL_STATIC(0x571770u,571);
}
B57adb3:L57adb3:{c.instructions+=4;NFSU2_TR(0x57adb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xd4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57adb9:{NFSU2_TR(0x57adb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57adba:{NFSU2_TR(0x57adba);
__builtin_memmove((R+4),(R+24),4);
}
B57adbc:{NFSU2_TR(0x57adbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57adc1ull));
TAIL_STATIC(0x571770u,571);
}
B57adc1:L57adc1:{c.instructions+=4;NFSU2_TR(0x57adc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57adc3:{NFSU2_TR(0x57adc3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B57adc5:{NFSU2_TR(0x57adc5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57adc7:{NFSU2_TR(0x57adc7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57ade6;}}
}
B57adc9:L57adc9:{c.instructions+=2;NFSU2_TR(0x57adc9);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xe0ull))));
}
B57adcf:{NFSU2_TR(0x57adcf);
}
B57add0:L57add0:{c.instructions+=3;NFSU2_TR(0x57add0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57add1:{NFSU2_TR(0x57add1);
__builtin_memmove((R+4),(R+24),4);
}
B57add3:{NFSU2_TR(0x57add3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57add8ull));
TAIL_STATIC(0x571770u,571);
}
B57add8:L57add8:{c.instructions+=5;NFSU2_TR(0x57add8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57adda:{NFSU2_TR(0x57adda);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B57addb:{NFSU2_TR(0x57addb);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B57adde:{NFSU2_TR(0x57adde);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57ade0:{NFSU2_TR(0x57ade0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57add0u);}goto L57add0;}}
}
B57ade2:L57ade2:{c.instructions+=1;NFSU2_TR(0x57ade2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B57ade6:L57ade6:{c.instructions+=4;NFSU2_TR(0x57ade6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40e4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57adec:{NFSU2_TR(0x57adec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57aded:{NFSU2_TR(0x57aded);
__builtin_memmove((R+4),(R+24),4);
}
B57adef:{NFSU2_TR(0x57adef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57adf4ull));
TAIL_STATIC(0x571770u,571);
}
B57adf4:L57adf4:{c.instructions+=3;NFSU2_TR(0x57adf4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x0ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B57adf7:{NFSU2_TR(0x57adf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B57adff:{NFSU2_TR(0x57adff);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L57af2e;}}
}
B57ae05:L57ae05:{c.instructions+=2;NFSU2_TR(0x57ae05);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x40ecull))));
}
B57ae0b:{NFSU2_TR(0x57ae0b);
{goto L57ae10;}
}
B57ae10:L57ae10:{c.instructions+=3;NFSU2_TR(0x57ae10);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57ae13:{NFSU2_TR(0x57ae13);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57ae15:{NFSU2_TR(0x57ae15);
if(r1(R+518)){{goto L57ae4d;}}
}
B57ae17:L57ae17:{c.instructions+=5;NFSU2_TR(0x57ae17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57ae1d:{NFSU2_TR(0x57ae1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57ae23:{NFSU2_TR(0x57ae23);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57ae26:{NFSU2_TR(0x57ae26);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57ae28:{NFSU2_TR(0x57ae28);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57ae46;}}
}
B57ae2a:L57ae2a:{c.instructions+=2;NFSU2_TR(0x57ae2a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57ae2c:{NFSU2_TR(0x57ae2c);
__builtin_memmove((R+16),(R+16),4);
}
B57ae30:L57ae30:{c.instructions+=6;NFSU2_TR(0x57ae30);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B57ae33:{NFSU2_TR(0x57ae33);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57ae3a:{NFSU2_TR(0x57ae3a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B57ae3b:{NFSU2_TR(0x57ae3b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57ae3c:{NFSU2_TR(0x57ae3c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57ae3f:{NFSU2_TR(0x57ae3f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57ae30u);}goto L57ae30;}}
}
B57ae41:L57ae41:{c.instructions+=1;NFSU2_TR(0x57ae41);
{goto L57af0e;}
}
B57ae46:L57ae46:{c.instructions+=2;NFSU2_TR(0x57ae46);
__builtin_memmove((R+4),(R+0),4);
}
B57ae48:{NFSU2_TR(0x57ae48);
{goto L57af0e;}
}
B57ae4d:L57ae4d:{c.instructions+=3;NFSU2_TR(0x57ae4d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57ae50:{NFSU2_TR(0x57ae50);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57ae52:{NFSU2_TR(0x57ae52);
if(r1(R+518)){{goto L57ae86;}}
}
B57ae54:L57ae54:{c.instructions+=5;NFSU2_TR(0x57ae54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B57ae5a:{NFSU2_TR(0x57ae5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57ae60:{NFSU2_TR(0x57ae60);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57ae63:{NFSU2_TR(0x57ae63);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B57ae65:{NFSU2_TR(0x57ae65);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L57af0e;}}
}
B57ae6b:L57ae6b:{c.instructions+=2;NFSU2_TR(0x57ae6b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B57ae6d:{NFSU2_TR(0x57ae6d);
__builtin_memmove((R+4),(R+4),4);
}
B57ae70:L57ae70:{c.instructions+=6;NFSU2_TR(0x57ae70);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B57ae77:{NFSU2_TR(0x57ae77);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B57ae78:{NFSU2_TR(0x57ae78);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B57ae7b:{NFSU2_TR(0x57ae7b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57ae7c:{NFSU2_TR(0x57ae7c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57ae7f:{NFSU2_TR(0x57ae7f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57ae70u);}goto L57ae70;}}
}
B57ae81:L57ae81:{c.instructions+=1;NFSU2_TR(0x57ae81);
{goto L57af0e;}
}
B57ae86:L57ae86:{c.instructions+=3;NFSU2_TR(0x57ae86);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B57ae89:{NFSU2_TR(0x57ae89);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B57ae8b:{NFSU2_TR(0x57ae8b);
if(r1(R+518)){{goto L57af14;}}
}
B57ae91:L57ae91:{c.instructions+=4;NFSU2_TR(0x57ae91);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B57ae94:{NFSU2_TR(0x57ae94);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57ae97:{NFSU2_TR(0x57ae97);
w4(R+28,u32(0x2ull));
}
B57ae9c:{NFSU2_TR(0x57ae9c);
__builtin_memmove((R+16),(R+16),4);
}
B57aea0:L57aea0:{c.instructions+=27;NFSU2_TR(0x57aea0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B57aea4:{NFSU2_TR(0x57aea4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B57aea7:{NFSU2_TR(0x57aea7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B57aea9:{NFSU2_TR(0x57aea9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B57aeac:{NFSU2_TR(0x57aeac);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B57aeaf:{NFSU2_TR(0x57aeaf);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B57aeb1:{NFSU2_TR(0x57aeb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B57aeb5:{NFSU2_TR(0x57aeb5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B57aeb8:{NFSU2_TR(0x57aeb8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B57aeba:{NFSU2_TR(0x57aeba);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B57aebe:{NFSU2_TR(0x57aebe);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B57aec1:{NFSU2_TR(0x57aec1);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B57aec3:{NFSU2_TR(0x57aec3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B57aec7:{NFSU2_TR(0x57aec7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B57aeca:{NFSU2_TR(0x57aeca);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B57aecc:{NFSU2_TR(0x57aecc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B57aed0:{NFSU2_TR(0x57aed0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B57aed3:{NFSU2_TR(0x57aed3);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B57aed5:{NFSU2_TR(0x57aed5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B57aed9:{NFSU2_TR(0x57aed9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B57aedc:{NFSU2_TR(0x57aedc);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B57aede:{NFSU2_TR(0x57aede);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B57aee2:{NFSU2_TR(0x57aee2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B57aee5:{NFSU2_TR(0x57aee5);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B57aee7:{NFSU2_TR(0x57aee7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B57aeea:{NFSU2_TR(0x57aeea);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B57aeeb:{NFSU2_TR(0x57aeeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57aea0u);}goto L57aea0;}}
}
B57aeed:L57aeed:{c.instructions+=5;NFSU2_TR(0x57aeed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57aef3:{NFSU2_TR(0x57aef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B57aef9:{NFSU2_TR(0x57aef9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57aefc:{NFSU2_TR(0x57aefc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57aefe:{NFSU2_TR(0x57aefe);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L57af0e;}}
}
B57af00:L57af00:{c.instructions+=2;NFSU2_TR(0x57af00);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57af07:{NFSU2_TR(0x57af07);
u8 U[13];
w4(U+0,u32(u32(u32(0x1e9ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+9),1);
s1(u32(r4(U+8)),r1(U+12));
}
B57af0e:L57af0e:{c.instructions+=1;NFSU2_TR(0x57af0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57af14:L57af14:{c.instructions+=7;NFSU2_TR(0x57af14);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57af18:{NFSU2_TR(0x57af18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57af1a:{NFSU2_TR(0x57af1a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B57af1b:{NFSU2_TR(0x57af1b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B57af1e:{NFSU2_TR(0x57af1e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B57af20:{NFSU2_TR(0x57af20);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57af24:{NFSU2_TR(0x57af24);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57ae10u);}goto L57ae10;}}
}
B57af2a:L57af2a:{c.instructions+=1;NFSU2_TR(0x57af2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B57af2e:L57af2e:{c.instructions+=3;NFSU2_TR(0x57af2e);
__builtin_memmove((R+0),gp(0x8650d4),4);
}
B57af33:{NFSU2_TR(0x57af33);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B57af35:{NFSU2_TR(0x57af35);
if(r1(R+518)){{goto L57af41;}}
}
B57af37:L57af37:{c.instructions+=3;NFSU2_TR(0x57af37);
__builtin_memmove((R+8),gp(0x8650dc),4);
}
B57af3d:{NFSU2_TR(0x57af3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57af3f:{NFSU2_TR(0x57af3f);
{goto L57af43;}
}
B57af41:L57af41:{c.instructions+=1;NFSU2_TR(0x57af41);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B57af43:L57af43:{c.instructions+=5;NFSU2_TR(0x57af43);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40e0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B57af49:{NFSU2_TR(0x57af49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B57af4b:{NFSU2_TR(0x57af4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57af4c:{NFSU2_TR(0x57af4c);
__builtin_memmove((R+4),(R+24),4);
}
B57af4e:{NFSU2_TR(0x57af4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57af53ull));
TAIL_STATIC(0x571770u,571);
}
B57af53:L57af53:{c.instructions+=2;NFSU2_TR(0x57af53);
__builtin_memmove((R+4),(R+24),4);
}
B57af55:{NFSU2_TR(0x57af55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57af5aull));
TAIL_STATIC(0x578d90u,578);
}
B57af5a:L57af5a:{c.instructions+=6;NFSU2_TR(0x57af5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B57af5b:{NFSU2_TR(0x57af5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57af5c:{NFSU2_TR(0x57af5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B57af5d:{NFSU2_TR(0x57af5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B57af5e:{NFSU2_TR(0x57af5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B57af5f:{NFSU2_TR(0x57af5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57af70:L57af70:{c.instructions+=5;NFSU2_TR(0x57af70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B57af73:{NFSU2_TR(0x57af73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57af74:{NFSU2_TR(0x57af74);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((R+24),(U+0),4);
}
B57af77:{NFSU2_TR(0x57af77);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B57af79:{NFSU2_TR(0x57af79);
if(r1(R+518)){{goto L57af99;}}
}
B57af7b:L57af7b:{c.instructions+=1;NFSU2_TR(0x57af7b);
{goto L57af80;}
}
B57af80:L57af80:{c.instructions+=6;NFSU2_TR(0x57af80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B57af82:{NFSU2_TR(0x57af82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B57af85:{NFSU2_TR(0x57af85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B57af87:{NFSU2_TR(0x57af87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57af88:{NFSU2_TR(0x57af88);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57af8b:{NFSU2_TR(0x57af8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x57af90ull));
TAIL_STATIC(0x75c6dau,75c);
}
B57af90:L57af90:{c.instructions+=4;NFSU2_TR(0x57af90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B57af92:{NFSU2_TR(0x57af92);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B57af95:{NFSU2_TR(0x57af95);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B57af97:{NFSU2_TR(0x57af97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x57af80u);}goto L57af80;}}
}
B57af99:L57af99:{c.instructions+=2;NFSU2_TR(0x57af99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B57af9a:{NFSU2_TR(0x57af9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57afa0:L57afa0:{c.instructions+=19;NFSU2_TR(0x57afa0);
__builtin_memmove((R+0),(R+4),4);
}
B57afa2:{NFSU2_TR(0x57afa2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((R+4),(U+0),4);
}
B57afa5:{NFSU2_TR(0x57afa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B57afa7:{NFSU2_TR(0x57afa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57afaa:{NFSU2_TR(0x57afaa);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B57afac:{NFSU2_TR(0x57afac);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B57afae:{NFSU2_TR(0x57afae);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57afb1:{NFSU2_TR(0x57afb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57afb4:{NFSU2_TR(0x57afb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57afb7:{NFSU2_TR(0x57afb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57afba:{NFSU2_TR(0x57afba);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B57afbd:{NFSU2_TR(0x57afbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57afc0:{NFSU2_TR(0x57afc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57afc3:{NFSU2_TR(0x57afc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B57afca:{NFSU2_TR(0x57afca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57afcd:{NFSU2_TR(0x57afcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57afd0:{NFSU2_TR(0x57afd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57afd3:{NFSU2_TR(0x57afd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57afd6:{NFSU2_TR(0x57afd6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B57afe0:L57afe0:{c.instructions+=10;NFSU2_TR(0x57afe0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57afe1:{NFSU2_TR(0x57afe1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57afe2:{NFSU2_TR(0x57afe2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57afe3:{NFSU2_TR(0x57afe3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57afe4:{NFSU2_TR(0x57afe4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B57afe8:{NFSU2_TR(0x57afe8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B57afe9:{NFSU2_TR(0x57afe9);
__builtin_memmove((R+16),(R+16),4);
}
B57aff0:{NFSU2_TR(0x57aff0);
__builtin_memmove((R+4),gp(0x8650b8),4);
}
B57aff6:{NFSU2_TR(0x57aff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B57affc:{NFSU2_TR(0x57affc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((R+28),(U+0),4);
TAIL_STATIC(0x57b002u,57b);
}
XIT:NFSU2_TR_EXIT(0x57a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
