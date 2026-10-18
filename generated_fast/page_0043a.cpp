#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_42f(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_434(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_436(u8* __restrict R,Cpu& c);
u32 body_437(u8* __restrict R,Cpu& c);
u32 body_438(u8* __restrict R,Cpu& c);
u32 body_439(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x43a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x43a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_43a(u8* __restrict R,Cpu& c);
u32 page_43a(Cpu& c){return body_43a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_43a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x43a000:goto L43a000;
case 0x43a002:c.instructions+=1;goto B43a002;
case 0x43a004:goto L43a004;
case 0x43a007:c.instructions+=3;goto B43a007;
case 0x43a009:c.instructions+=2;goto B43a009;
case 0x43a00b:c.instructions+=1;goto B43a00b;
case 0x43a00e:goto L43a00e;
case 0x43a010:c.instructions+=1;goto B43a010;
case 0x43a012:goto L43a012;
case 0x43a014:goto L43a014;
case 0x43a016:c.instructions+=2;goto B43a016;
case 0x43a018:c.instructions+=1;goto B43a018;
case 0x43a01a:goto L43a01a;
case 0x43a01f:goto L43a01f;
case 0x43a024:c.instructions+=8;goto B43a024;
case 0x43a026:c.instructions+=7;goto B43a026;
case 0x43a027:c.instructions+=6;goto B43a027;
case 0x43a028:c.instructions+=5;goto B43a028;
case 0x43a029:c.instructions+=4;goto B43a029;
case 0x43a02b:c.instructions+=3;goto B43a02b;
case 0x43a02c:c.instructions+=2;goto B43a02c;
case 0x43a02d:c.instructions+=1;goto B43a02d;
case 0x43a02e:goto L43a02e;
case 0x43a02f:c.instructions+=6;goto B43a02f;
case 0x43a030:c.instructions+=5;goto B43a030;
case 0x43a031:c.instructions+=4;goto B43a031;
case 0x43a033:c.instructions+=3;goto B43a033;
case 0x43a034:c.instructions+=2;goto B43a034;
case 0x43a035:c.instructions+=1;goto B43a035;
case 0x43a040:goto L43a040;
case 0x43a045:c.instructions+=4;goto B43a045;
case 0x43a047:c.instructions+=3;goto B43a047;
case 0x43a048:c.instructions+=2;goto B43a048;
case 0x43a04a:c.instructions+=1;goto B43a04a;
case 0x43a04c:goto L43a04c;
case 0x43a051:c.instructions+=2;goto B43a051;
case 0x43a053:c.instructions+=1;goto B43a053;
case 0x43a055:goto L43a055;
case 0x43a058:c.instructions+=2;goto B43a058;
case 0x43a05a:c.instructions+=1;goto B43a05a;
case 0x43a05c:goto L43a05c;
case 0x43a061:goto L43a061;
case 0x43a065:c.instructions+=3;goto B43a065;
case 0x43a066:c.instructions+=2;goto B43a066;
case 0x43a069:c.instructions+=1;goto B43a069;
case 0x43a06e:goto L43a06e;
case 0x43a06f:c.instructions+=1;goto B43a06f;
case 0x43a080:goto L43a080;
case 0x43a085:c.instructions+=4;goto B43a085;
case 0x43a087:c.instructions+=3;goto B43a087;
case 0x43a088:c.instructions+=2;goto B43a088;
case 0x43a08a:c.instructions+=1;goto B43a08a;
case 0x43a08c:goto L43a08c;
case 0x43a091:c.instructions+=2;goto B43a091;
case 0x43a093:c.instructions+=1;goto B43a093;
case 0x43a095:goto L43a095;
case 0x43a098:c.instructions+=2;goto B43a098;
case 0x43a09a:c.instructions+=1;goto B43a09a;
case 0x43a09c:goto L43a09c;
case 0x43a0a1:goto L43a0a1;
case 0x43a0a2:c.instructions+=4;goto B43a0a2;
case 0x43a0a6:c.instructions+=3;goto B43a0a6;
case 0x43a0a7:c.instructions+=2;goto B43a0a7;
case 0x43a0aa:c.instructions+=1;goto B43a0aa;
case 0x43a0af:goto L43a0af;
case 0x43a0b4:c.instructions+=5;goto B43a0b4;
case 0x43a0ba:c.instructions+=4;goto B43a0ba;
case 0x43a0bb:c.instructions+=3;goto B43a0bb;
case 0x43a0bd:c.instructions+=2;goto B43a0bd;
case 0x43a0c2:c.instructions+=1;goto B43a0c2;
case 0x43a0c4:goto L43a0c4;
case 0x43a0c9:goto L43a0c9;
case 0x43a0ce:c.instructions+=2;goto B43a0ce;
case 0x43a0cf:c.instructions+=1;goto B43a0cf;
case 0x43a0d4:goto L43a0d4;
case 0x43a0d7:c.instructions+=2;goto B43a0d7;
case 0x43a0d9:c.instructions+=1;goto B43a0d9;
case 0x43a0db:goto L43a0db;
case 0x43a0dd:c.instructions+=1;goto B43a0dd;
case 0x43a0e2:goto L43a0e2;
case 0x43a0e4:goto L43a0e4;
case 0x43a0e6:goto L43a0e6;
case 0x43a0e9:c.instructions+=8;goto B43a0e9;
case 0x43a0ec:c.instructions+=7;goto B43a0ec;
case 0x43a0f3:c.instructions+=6;goto B43a0f3;
case 0x43a0f6:c.instructions+=5;goto B43a0f6;
case 0x43a0f8:c.instructions+=4;goto B43a0f8;
case 0x43a0fb:c.instructions+=3;goto B43a0fb;
case 0x43a0fe:c.instructions+=2;goto B43a0fe;
case 0x43a100:c.instructions+=1;goto B43a100;
case 0x43a101:goto L43a101;
case 0x43a102:c.instructions+=1;goto B43a102;
case 0x43a110:goto L43a110;
case 0x43a112:c.instructions+=13;goto B43a112;
case 0x43a117:c.instructions+=12;goto B43a117;
case 0x43a11d:c.instructions+=11;goto B43a11d;
case 0x43a11e:c.instructions+=10;goto B43a11e;
case 0x43a125:c.instructions+=9;goto B43a125;
case 0x43a126:c.instructions+=8;goto B43a126;
case 0x43a127:c.instructions+=7;goto B43a127;
case 0x43a128:c.instructions+=6;goto B43a128;
case 0x43a12a:c.instructions+=5;goto B43a12a;
case 0x43a12e:c.instructions+=4;goto B43a12e;
case 0x43a130:c.instructions+=3;goto B43a130;
case 0x43a132:c.instructions+=2;goto B43a132;
case 0x43a13a:c.instructions+=1;goto B43a13a;
case 0x43a13f:goto L43a13f;
case 0x43a142:c.instructions+=2;goto B43a142;
case 0x43a147:c.instructions+=1;goto B43a147;
case 0x43a14c:goto L43a14c;
case 0x43a14f:c.instructions+=4;goto B43a14f;
case 0x43a152:c.instructions+=3;goto B43a152;
case 0x43a154:c.instructions+=2;goto B43a154;
case 0x43a159:c.instructions+=1;goto B43a159;
case 0x43a15b:goto L43a15b;
case 0x43a160:goto L43a160;
case 0x43a162:c.instructions+=5;goto B43a162;
case 0x43a165:c.instructions+=4;goto B43a165;
case 0x43a167:c.instructions+=3;goto B43a167;
case 0x43a168:c.instructions+=2;goto B43a168;
case 0x43a16b:c.instructions+=1;goto B43a16b;
case 0x43a170:goto L43a170;
case 0x43a172:c.instructions+=3;goto B43a172;
case 0x43a175:c.instructions+=2;goto B43a175;
case 0x43a177:c.instructions+=1;goto B43a177;
case 0x43a179:goto L43a179;
case 0x43a17c:c.instructions+=4;goto B43a17c;
case 0x43a17f:c.instructions+=3;goto B43a17f;
case 0x43a181:c.instructions+=2;goto B43a181;
case 0x43a186:c.instructions+=1;goto B43a186;
case 0x43a188:goto L43a188;
case 0x43a18a:c.instructions+=5;goto B43a18a;
case 0x43a18d:c.instructions+=4;goto B43a18d;
case 0x43a18f:c.instructions+=3;goto B43a18f;
case 0x43a190:c.instructions+=2;goto B43a190;
case 0x43a193:c.instructions+=1;goto B43a193;
case 0x43a198:goto L43a198;
case 0x43a19a:c.instructions+=3;goto B43a19a;
case 0x43a19d:c.instructions+=2;goto B43a19d;
case 0x43a19f:c.instructions+=1;goto B43a19f;
case 0x43a1a1:goto L43a1a1;
case 0x43a1a4:c.instructions+=2;goto B43a1a4;
case 0x43a1a9:c.instructions+=1;goto B43a1a9;
case 0x43a1ae:goto L43a1ae;
case 0x43a1b1:c.instructions+=4;goto B43a1b1;
case 0x43a1b4:c.instructions+=3;goto B43a1b4;
case 0x43a1b6:c.instructions+=2;goto B43a1b6;
case 0x43a1be:c.instructions+=1;goto B43a1be;
case 0x43a1c0:goto L43a1c0;
case 0x43a1c2:c.instructions+=5;goto B43a1c2;
case 0x43a1c5:c.instructions+=4;goto B43a1c5;
case 0x43a1c7:c.instructions+=3;goto B43a1c7;
case 0x43a1c8:c.instructions+=2;goto B43a1c8;
case 0x43a1cb:c.instructions+=1;goto B43a1cb;
case 0x43a1d0:goto L43a1d0;
case 0x43a1d2:c.instructions+=3;goto B43a1d2;
case 0x43a1d5:c.instructions+=2;goto B43a1d5;
case 0x43a1d7:c.instructions+=1;goto B43a1d7;
case 0x43a1d9:goto L43a1d9;
case 0x43a1dd:c.instructions+=5;goto B43a1dd;
case 0x43a1de:c.instructions+=4;goto B43a1de;
case 0x43a1df:c.instructions+=3;goto B43a1df;
case 0x43a1e6:c.instructions+=2;goto B43a1e6;
case 0x43a1e9:c.instructions+=1;goto B43a1e9;
case 0x43a1f0:goto L43a1f0;
case 0x43a1f4:c.instructions+=2;goto B43a1f4;
case 0x43a1fa:c.instructions+=1;goto B43a1fa;
case 0x43a1fc:goto L43a1fc;
case 0x43a202:c.instructions+=2;goto B43a202;
case 0x43a204:c.instructions+=1;goto B43a204;
case 0x43a206:goto L43a206;
case 0x43a20c:c.instructions+=2;goto B43a20c;
case 0x43a20e:c.instructions+=1;goto B43a20e;
case 0x43a210:goto L43a210;
case 0x43a213:c.instructions+=4;goto B43a213;
case 0x43a216:c.instructions+=3;goto B43a216;
case 0x43a217:c.instructions+=2;goto B43a217;
case 0x43a21c:c.instructions+=1;goto B43a21c;
case 0x43a221:goto L43a221;
case 0x43a226:c.instructions+=1;goto B43a226;
case 0x43a227:goto L43a227;
case 0x43a229:c.instructions+=1;goto B43a229;
case 0x43a230:goto L43a230;
case 0x43a231:c.instructions+=2;goto B43a231;
case 0x43a233:c.instructions+=1;goto B43a233;
case 0x43a238:goto L43a238;
case 0x43a23d:c.instructions+=1;goto B43a23d;
case 0x43a23f:goto L43a23f;
case 0x43a245:c.instructions+=4;goto B43a245;
case 0x43a24a:c.instructions+=3;goto B43a24a;
case 0x43a24b:c.instructions+=2;goto B43a24b;
case 0x43a24c:c.instructions+=1;goto B43a24c;
case 0x43a251:goto L43a251;
case 0x43a254:goto L43a254;
case 0x43a256:c.instructions+=2;goto B43a256;
case 0x43a257:c.instructions+=1;goto B43a257;
case 0x43a260:goto L43a260;
case 0x43a261:c.instructions+=4;goto B43a261;
case 0x43a265:c.instructions+=3;goto B43a265;
case 0x43a26b:c.instructions+=2;goto B43a26b;
case 0x43a26c:c.instructions+=1;goto B43a26c;
case 0x43a272:goto L43a272;
case 0x43a278:c.instructions+=2;goto B43a278;
case 0x43a27a:c.instructions+=1;goto B43a27a;
case 0x43a27c:goto L43a27c;
case 0x43a282:c.instructions+=2;goto B43a282;
case 0x43a284:c.instructions+=1;goto B43a284;
case 0x43a286:goto L43a286;
case 0x43a289:c.instructions+=5;goto B43a289;
case 0x43a28c:c.instructions+=4;goto B43a28c;
case 0x43a28e:c.instructions+=3;goto B43a28e;
case 0x43a292:c.instructions+=2;goto B43a292;
case 0x43a29c:c.instructions+=1;goto B43a29c;
case 0x43a29e:goto L43a29e;
case 0x43a2a3:c.instructions+=3;goto B43a2a3;
case 0x43a2a4:c.instructions+=2;goto B43a2a4;
case 0x43a2a5:c.instructions+=1;goto B43a2a5;
case 0x43a2a6:goto L43a2a6;
case 0x43a2a7:c.instructions+=5;goto B43a2a7;
case 0x43a2a8:c.instructions+=4;goto B43a2a8;
case 0x43a2a9:c.instructions+=3;goto B43a2a9;
case 0x43a2ab:c.instructions+=2;goto B43a2ab;
case 0x43a2b0:c.instructions+=1;goto B43a2b0;
case 0x43a2b5:goto L43a2b5;
case 0x43a2bc:c.instructions+=2;goto B43a2bc;
case 0x43a2bd:c.instructions+=1;goto B43a2bd;
case 0x43a2c2:goto L43a2c2;
case 0x43a2c4:c.instructions+=5;goto B43a2c4;
case 0x43a2c6:c.instructions+=4;goto B43a2c6;
case 0x43a2c9:c.instructions+=3;goto B43a2c9;
case 0x43a2cb:c.instructions+=2;goto B43a2cb;
case 0x43a2cd:c.instructions+=1;goto B43a2cd;
case 0x43a2d1:goto L43a2d1;
case 0x43a2d3:goto L43a2d3;
case 0x43a2d5:c.instructions+=1;goto B43a2d5;
case 0x43a2d8:goto L43a2d8;
case 0x43a2da:goto L43a2da;
case 0x43a2e0:c.instructions+=3;goto B43a2e0;
case 0x43a2e3:c.instructions+=2;goto B43a2e3;
case 0x43a2e8:c.instructions+=1;goto B43a2e8;
case 0x43a2ed:goto L43a2ed;
case 0x43a2f1:c.instructions+=3;goto B43a2f1;
case 0x43a2f3:c.instructions+=2;goto B43a2f3;
case 0x43a2f5:c.instructions+=1;goto B43a2f5;
case 0x43a2f7:goto L43a2f7;
case 0x43a2f9:c.instructions+=1;goto B43a2f9;
case 0x43a300:goto L43a300;
case 0x43a303:c.instructions+=5;goto B43a303;
case 0x43a305:c.instructions+=4;goto B43a305;
case 0x43a307:c.instructions+=3;goto B43a307;
case 0x43a30a:c.instructions+=2;goto B43a30a;
case 0x43a30c:c.instructions+=1;goto B43a30c;
case 0x43a30e:goto L43a30e;
case 0x43a314:c.instructions+=2;goto B43a314;
case 0x43a316:c.instructions+=1;goto B43a316;
case 0x43a318:goto L43a318;
case 0x43a31b:c.instructions+=3;goto B43a31b;
case 0x43a31e:c.instructions+=2;goto B43a31e;
case 0x43a320:c.instructions+=1;goto B43a320;
case 0x43a322:goto L43a322;
case 0x43a325:c.instructions+=3;goto B43a325;
case 0x43a328:c.instructions+=2;goto B43a328;
case 0x43a32b:c.instructions+=1;goto B43a32b;
case 0x43a32d:goto L43a32d;
case 0x43a334:goto L43a334;
case 0x43a336:c.instructions+=2;goto B43a336;
case 0x43a338:c.instructions+=1;goto B43a338;
case 0x43a33a:goto L43a33a;
case 0x43a33f:c.instructions+=5;goto B43a33f;
case 0x43a345:c.instructions+=4;goto B43a345;
case 0x43a346:c.instructions+=3;goto B43a346;
case 0x43a348:c.instructions+=2;goto B43a348;
case 0x43a34d:c.instructions+=1;goto B43a34d;
case 0x43a34f:goto L43a34f;
case 0x43a354:goto L43a354;
case 0x43a35a:c.instructions+=2;goto B43a35a;
case 0x43a35b:c.instructions+=1;goto B43a35b;
case 0x43a360:goto L43a360;
case 0x43a363:c.instructions+=2;goto B43a363;
case 0x43a365:c.instructions+=1;goto B43a365;
case 0x43a367:goto L43a367;
case 0x43a36b:c.instructions+=6;goto B43a36b;
case 0x43a36e:c.instructions+=5;goto B43a36e;
case 0x43a36f:c.instructions+=4;goto B43a36f;
case 0x43a374:c.instructions+=3;goto B43a374;
case 0x43a375:c.instructions+=2;goto B43a375;
case 0x43a377:c.instructions+=1;goto B43a377;
case 0x43a37c:goto L43a37c;
case 0x43a37e:c.instructions+=1;goto B43a37e;
case 0x43a380:goto L43a380;
case 0x43a382:goto L43a382;
case 0x43a387:c.instructions+=2;goto B43a387;
case 0x43a389:c.instructions+=1;goto B43a389;
case 0x43a38b:goto L43a38b;
case 0x43a390:c.instructions+=2;goto B43a390;
case 0x43a392:c.instructions+=1;goto B43a392;
case 0x43a394:goto L43a394;
case 0x43a399:c.instructions+=2;goto B43a399;
case 0x43a39b:c.instructions+=1;goto B43a39b;
case 0x43a39d:goto L43a39d;
case 0x43a3a2:c.instructions+=1;goto B43a3a2;
case 0x43a3a7:goto L43a3a7;
case 0x43a3a9:c.instructions+=1;goto B43a3a9;
case 0x43a3ab:goto L43a3ab;
case 0x43a3ae:c.instructions+=1;goto B43a3ae;
case 0x43a3b0:goto L43a3b0;
case 0x43a3b2:goto L43a3b2;
case 0x43a3b8:c.instructions+=4;goto B43a3b8;
case 0x43a3ba:c.instructions+=3;goto B43a3ba;
case 0x43a3bf:c.instructions+=2;goto B43a3bf;
case 0x43a3c2:c.instructions+=1;goto B43a3c2;
case 0x43a3c8:goto L43a3c8;
case 0x43a3ce:c.instructions+=2;goto B43a3ce;
case 0x43a3d0:c.instructions+=1;goto B43a3d0;
case 0x43a3d2:goto L43a3d2;
case 0x43a3d7:c.instructions+=3;goto B43a3d7;
case 0x43a3d9:c.instructions+=2;goto B43a3d9;
case 0x43a3dc:c.instructions+=1;goto B43a3dc;
case 0x43a3de:goto L43a3de;
case 0x43a3e3:c.instructions+=2;goto B43a3e3;
case 0x43a3e5:c.instructions+=1;goto B43a3e5;
case 0x43a3e7:goto L43a3e7;
case 0x43a3ec:c.instructions+=2;goto B43a3ec;
case 0x43a3ee:c.instructions+=1;goto B43a3ee;
case 0x43a3f0:goto L43a3f0;
case 0x43a3f5:c.instructions+=1;goto B43a3f5;
case 0x43a3fa:goto L43a3fa;
case 0x43a3fb:c.instructions+=2;goto B43a3fb;
case 0x43a400:c.instructions+=1;goto B43a400;
case 0x43a405:goto L43a405;
case 0x43a407:c.instructions+=2;goto B43a407;
case 0x43a409:c.instructions+=1;goto B43a409;
case 0x43a40b:goto L43a40b;
case 0x43a40f:goto L43a40f;
case 0x43a414:c.instructions+=3;goto B43a414;
case 0x43a419:c.instructions+=2;goto B43a419;
case 0x43a41b:c.instructions+=1;goto B43a41b;
case 0x43a41d:goto L43a41d;
case 0x43a420:goto L43a420;
case 0x43a425:c.instructions+=6;goto B43a425;
case 0x43a427:c.instructions+=5;goto B43a427;
case 0x43a42a:c.instructions+=4;goto B43a42a;
case 0x43a42c:c.instructions+=3;goto B43a42c;
case 0x43a42d:c.instructions+=2;goto B43a42d;
case 0x43a430:c.instructions+=1;goto B43a430;
case 0x43a435:goto L43a435;
case 0x43a43a:c.instructions+=3;goto B43a43a;
case 0x43a43d:c.instructions+=2;goto B43a43d;
case 0x43a43f:c.instructions+=1;goto B43a43f;
case 0x43a441:goto L43a441;
case 0x43a442:c.instructions+=1;goto B43a442;
case 0x43a447:goto L43a447;
case 0x43a44a:c.instructions+=7;goto B43a44a;
case 0x43a44b:c.instructions+=6;goto B43a44b;
case 0x43a44c:c.instructions+=5;goto B43a44c;
case 0x43a44d:c.instructions+=4;goto B43a44d;
case 0x43a452:c.instructions+=3;goto B43a452;
case 0x43a453:c.instructions+=2;goto B43a453;
case 0x43a454:c.instructions+=1;goto B43a454;
case 0x43a455:goto L43a455;
case 0x43a457:c.instructions+=3;goto B43a457;
case 0x43a458:c.instructions+=2;goto B43a458;
case 0x43a459:c.instructions+=1;goto B43a459;
case 0x43a460:goto L43a460;
case 0x43a464:c.instructions+=2;goto B43a464;
case 0x43a46a:c.instructions+=1;goto B43a46a;
case 0x43a46c:goto L43a46c;
case 0x43a472:c.instructions+=2;goto B43a472;
case 0x43a474:c.instructions+=1;goto B43a474;
case 0x43a476:goto L43a476;
case 0x43a47c:c.instructions+=2;goto B43a47c;
case 0x43a47e:c.instructions+=1;goto B43a47e;
case 0x43a480:goto L43a480;
case 0x43a483:c.instructions+=4;goto B43a483;
case 0x43a486:c.instructions+=3;goto B43a486;
case 0x43a487:c.instructions+=2;goto B43a487;
case 0x43a48c:c.instructions+=1;goto B43a48c;
case 0x43a491:goto L43a491;
case 0x43a496:c.instructions+=1;goto B43a496;
case 0x43a497:goto L43a497;
case 0x43a499:c.instructions+=1;goto B43a499;
case 0x43a4a0:goto L43a4a0;
case 0x43a4a1:c.instructions+=16;goto B43a4a1;
case 0x43a4a3:c.instructions+=15;goto B43a4a3;
case 0x43a4a6:c.instructions+=14;goto B43a4a6;
case 0x43a4a8:c.instructions+=13;goto B43a4a8;
case 0x43a4ad:c.instructions+=12;goto B43a4ad;
case 0x43a4b3:c.instructions+=11;goto B43a4b3;
case 0x43a4b4:c.instructions+=10;goto B43a4b4;
case 0x43a4bb:c.instructions+=9;goto B43a4bb;
case 0x43a4c1:c.instructions+=8;goto B43a4c1;
case 0x43a4c6:c.instructions+=7;goto B43a4c6;
case 0x43a4c7:c.instructions+=6;goto B43a4c7;
case 0x43a4c8:c.instructions+=5;goto B43a4c8;
case 0x43a4ca:c.instructions+=4;goto B43a4ca;
case 0x43a4cc:c.instructions+=3;goto B43a4cc;
case 0x43a4cd:c.instructions+=2;goto B43a4cd;
case 0x43a4d1:c.instructions+=1;goto B43a4d1;
case 0x43a4d7:goto L43a4d7;
case 0x43a4dc:c.instructions+=2;goto B43a4dc;
case 0x43a4de:c.instructions+=1;goto B43a4de;
case 0x43a4e4:goto L43a4e4;
case 0x43a4e7:c.instructions+=3;goto B43a4e7;
case 0x43a4ea:c.instructions+=2;goto B43a4ea;
case 0x43a4ec:c.instructions+=1;goto B43a4ec;
case 0x43a4ee:goto L43a4ee;
case 0x43a4f3:c.instructions+=8;goto B43a4f3;
case 0x43a4f5:c.instructions+=7;goto B43a4f5;
case 0x43a4fa:c.instructions+=6;goto B43a4fa;
case 0x43a4fb:c.instructions+=5;goto B43a4fb;
case 0x43a500:c.instructions+=4;goto B43a500;
case 0x43a502:c.instructions+=3;goto B43a502;
case 0x43a506:c.instructions+=2;goto B43a506;
case 0x43a508:c.instructions+=1;goto B43a508;
case 0x43a50a:goto L43a50a;
case 0x43a50c:c.instructions+=1;goto B43a50c;
case 0x43a50e:goto L43a50e;
case 0x43a512:c.instructions+=2;goto B43a512;
case 0x43a514:c.instructions+=1;goto B43a514;
case 0x43a51a:goto L43a51a;
case 0x43a51e:c.instructions+=2;goto B43a51e;
case 0x43a520:c.instructions+=1;goto B43a520;
case 0x43a526:goto L43a526;
case 0x43a528:goto L43a528;
case 0x43a52b:c.instructions+=3;goto B43a52b;
case 0x43a52c:c.instructions+=2;goto B43a52c;
case 0x43a531:c.instructions+=1;goto B43a531;
case 0x43a536:goto L43a536;
case 0x43a538:c.instructions+=3;goto B43a538;
case 0x43a53a:c.instructions+=2;goto B43a53a;
case 0x43a53e:c.instructions+=1;goto B43a53e;
case 0x43a544:goto L43a544;
case 0x43a549:c.instructions+=5;goto B43a549;
case 0x43a54f:c.instructions+=4;goto B43a54f;
case 0x43a550:c.instructions+=3;goto B43a550;
case 0x43a552:c.instructions+=2;goto B43a552;
case 0x43a557:c.instructions+=1;goto B43a557;
case 0x43a559:goto L43a559;
case 0x43a55e:goto L43a55e;
case 0x43a563:c.instructions+=2;goto B43a563;
case 0x43a564:c.instructions+=1;goto B43a564;
case 0x43a569:goto L43a569;
case 0x43a56c:c.instructions+=2;goto B43a56c;
case 0x43a56e:c.instructions+=1;goto B43a56e;
case 0x43a570:goto L43a570;
case 0x43a573:c.instructions+=11;goto B43a573;
case 0x43a579:c.instructions+=10;goto B43a579;
case 0x43a57b:c.instructions+=9;goto B43a57b;
case 0x43a57e:c.instructions+=8;goto B43a57e;
case 0x43a581:c.instructions+=7;goto B43a581;
case 0x43a584:c.instructions+=6;goto B43a584;
case 0x43a587:c.instructions+=5;goto B43a587;
case 0x43a58a:c.instructions+=4;goto B43a58a;
case 0x43a58d:c.instructions+=3;goto B43a58d;
case 0x43a58f:c.instructions+=2;goto B43a58f;
case 0x43a593:c.instructions+=1;goto B43a593;
case 0x43a595:goto L43a595;
case 0x43a599:goto L43a599;
case 0x43a59c:c.instructions+=7;goto B43a59c;
case 0x43a59f:c.instructions+=6;goto B43a59f;
case 0x43a5a2:c.instructions+=5;goto B43a5a2;
case 0x43a5a4:c.instructions+=4;goto B43a5a4;
case 0x43a5a7:c.instructions+=3;goto B43a5a7;
case 0x43a5ae:c.instructions+=2;goto B43a5ae;
case 0x43a5b2:c.instructions+=1;goto B43a5b2;
case 0x43a5b7:goto L43a5b7;
case 0x43a5be:c.instructions+=2;goto B43a5be;
case 0x43a5bf:c.instructions+=1;goto B43a5bf;
case 0x43a5c4:goto L43a5c4;
case 0x43a5c6:c.instructions+=6;goto B43a5c6;
case 0x43a5c8:c.instructions+=5;goto B43a5c8;
case 0x43a5ca:c.instructions+=4;goto B43a5ca;
case 0x43a5ce:c.instructions+=3;goto B43a5ce;
case 0x43a5d0:c.instructions+=2;goto B43a5d0;
case 0x43a5d3:c.instructions+=1;goto B43a5d3;
case 0x43a5d5:goto L43a5d5;
case 0x43a5d7:goto L43a5d7;
case 0x43a5d9:c.instructions+=1;goto B43a5d9;
case 0x43a5dc:goto L43a5dc;
case 0x43a5de:goto L43a5de;
case 0x43a5e1:c.instructions+=3;goto B43a5e1;
case 0x43a5e4:c.instructions+=2;goto B43a5e4;
case 0x43a5e7:c.instructions+=1;goto B43a5e7;
case 0x43a5e9:goto L43a5e9;
case 0x43a5ee:c.instructions+=1;goto B43a5ee;
case 0x43a5f3:goto L43a5f3;
case 0x43a5f5:c.instructions+=1;goto B43a5f5;
case 0x43a5f8:goto L43a5f8;
case 0x43a5fb:c.instructions+=2;goto B43a5fb;
case 0x43a5fe:c.instructions+=1;goto B43a5fe;
case 0x43a600:goto L43a600;
case 0x43a605:c.instructions+=1;goto B43a605;
case 0x43a60a:goto L43a60a;
case 0x43a60c:c.instructions+=1;goto B43a60c;
case 0x43a60f:goto L43a60f;
case 0x43a612:c.instructions+=3;goto B43a612;
case 0x43a614:c.instructions+=2;goto B43a614;
case 0x43a616:c.instructions+=1;goto B43a616;
case 0x43a618:goto L43a618;
case 0x43a619:c.instructions+=1;goto B43a619;
case 0x43a61e:goto L43a61e;
case 0x43a621:c.instructions+=2;goto B43a621;
case 0x43a623:c.instructions+=1;goto B43a623;
case 0x43a625:goto L43a625;
case 0x43a62a:c.instructions+=1;goto B43a62a;
case 0x43a62f:goto L43a62f;
case 0x43a632:c.instructions+=4;goto B43a632;
case 0x43a636:c.instructions+=3;goto B43a636;
case 0x43a638:c.instructions+=2;goto B43a638;
case 0x43a63f:c.instructions+=1;goto B43a63f;
case 0x43a641:goto L43a641;
case 0x43a643:c.instructions+=1;goto B43a643;
case 0x43a648:goto L43a648;
case 0x43a64a:goto L43a64a;
case 0x43a64d:c.instructions+=5;goto B43a64d;
case 0x43a64e:c.instructions+=4;goto B43a64e;
case 0x43a64f:c.instructions+=3;goto B43a64f;
case 0x43a651:c.instructions+=2;goto B43a651;
case 0x43a65c:c.instructions+=1;goto B43a65c;
case 0x43a661:goto L43a661;
case 0x43a664:goto L43a664;
case 0x43a668:c.instructions+=5;goto B43a668;
case 0x43a66a:c.instructions+=4;goto B43a66a;
case 0x43a66c:c.instructions+=3;goto B43a66c;
case 0x43a674:c.instructions+=2;goto B43a674;
case 0x43a678:c.instructions+=1;goto B43a678;
case 0x43a67e:goto L43a67e;
case 0x43a682:c.instructions+=2;goto B43a682;
case 0x43a686:c.instructions+=1;goto B43a686;
case 0x43a688:goto L43a688;
case 0x43a68c:c.instructions+=1;goto B43a68c;
case 0x43a690:goto L43a690;
case 0x43a693:c.instructions+=5;goto B43a693;
case 0x43a696:c.instructions+=4;goto B43a696;
case 0x43a698:c.instructions+=3;goto B43a698;
case 0x43a69c:c.instructions+=2;goto B43a69c;
case 0x43a6a4:c.instructions+=1;goto B43a6a4;
case 0x43a6a6:goto L43a6a6;
case 0x43a6a9:c.instructions+=3;goto B43a6a9;
case 0x43a6ac:c.instructions+=2;goto B43a6ac;
case 0x43a6ae:c.instructions+=1;goto B43a6ae;
case 0x43a6b1:goto L43a6b1;
case 0x43a6b5:c.instructions+=3;goto B43a6b5;
case 0x43a6b8:c.instructions+=2;goto B43a6b8;
case 0x43a6ba:c.instructions+=1;goto B43a6ba;
case 0x43a6bd:goto L43a6bd;
case 0x43a6c1:goto L43a6c1;
case 0x43a6c6:c.instructions+=5;goto B43a6c6;
case 0x43a6cc:c.instructions+=4;goto B43a6cc;
case 0x43a6cd:c.instructions+=3;goto B43a6cd;
case 0x43a6cf:c.instructions+=2;goto B43a6cf;
case 0x43a6d4:c.instructions+=1;goto B43a6d4;
case 0x43a6d6:goto L43a6d6;
case 0x43a6db:goto L43a6db;
case 0x43a6e0:c.instructions+=2;goto B43a6e0;
case 0x43a6e1:c.instructions+=1;goto B43a6e1;
case 0x43a6e6:goto L43a6e6;
case 0x43a6e8:c.instructions+=3;goto B43a6e8;
case 0x43a6eb:c.instructions+=2;goto B43a6eb;
case 0x43a6ed:c.instructions+=1;goto B43a6ed;
case 0x43a6ef:goto L43a6ef;
case 0x43a6f2:c.instructions+=7;goto B43a6f2;
case 0x43a6f5:c.instructions+=6;goto B43a6f5;
case 0x43a6f8:c.instructions+=5;goto B43a6f8;
case 0x43a6fb:c.instructions+=4;goto B43a6fb;
case 0x43a6fe:c.instructions+=3;goto B43a6fe;
case 0x43a701:c.instructions+=2;goto B43a701;
case 0x43a707:c.instructions+=1;goto B43a707;
case 0x43a709:goto L43a709;
case 0x43a70d:c.instructions+=6;goto B43a70d;
case 0x43a70f:c.instructions+=5;goto B43a70f;
case 0x43a712:c.instructions+=4;goto B43a712;
case 0x43a714:c.instructions+=3;goto B43a714;
case 0x43a717:c.instructions+=2;goto B43a717;
case 0x43a71c:c.instructions+=1;goto B43a71c;
case 0x43a720:goto L43a720;
case 0x43a722:goto L43a722;
case 0x43a725:c.instructions+=4;goto B43a725;
case 0x43a729:c.instructions+=3;goto B43a729;
case 0x43a72c:c.instructions+=2;goto B43a72c;
case 0x43a72e:c.instructions+=1;goto B43a72e;
case 0x43a730:goto L43a730;
case 0x43a734:goto L43a734;
case 0x43a737:c.instructions+=11;goto B43a737;
case 0x43a73a:c.instructions+=10;goto B43a73a;
case 0x43a73c:c.instructions+=9;goto B43a73c;
case 0x43a73f:c.instructions+=8;goto B43a73f;
case 0x43a743:c.instructions+=7;goto B43a743;
case 0x43a747:c.instructions+=6;goto B43a747;
case 0x43a74a:c.instructions+=5;goto B43a74a;
case 0x43a74d:c.instructions+=4;goto B43a74d;
case 0x43a751:c.instructions+=3;goto B43a751;
case 0x43a755:c.instructions+=2;goto B43a755;
case 0x43a758:c.instructions+=1;goto B43a758;
case 0x43a75a:goto L43a75a;
case 0x43a761:c.instructions+=1;goto B43a761;
case 0x43a763:goto L43a763;
case 0x43a768:c.instructions+=1;goto B43a768;
case 0x43a76a:goto L43a76a;
case 0x43a771:goto L43a771;
case 0x43a775:c.instructions+=6;goto B43a775;
case 0x43a777:c.instructions+=5;goto B43a777;
case 0x43a778:c.instructions+=4;goto B43a778;
case 0x43a77c:c.instructions+=3;goto B43a77c;
case 0x43a77d:c.instructions+=2;goto B43a77d;
case 0x43a77f:c.instructions+=1;goto B43a77f;
case 0x43a782:goto L43a782;
case 0x43a786:c.instructions+=4;goto B43a786;
case 0x43a789:c.instructions+=3;goto B43a789;
case 0x43a78d:c.instructions+=2;goto B43a78d;
case 0x43a790:c.instructions+=1;goto B43a790;
case 0x43a792:goto L43a792;
case 0x43a794:c.instructions+=3;goto B43a794;
case 0x43a796:c.instructions+=2;goto B43a796;
case 0x43a79a:c.instructions+=1;goto B43a79a;
case 0x43a79d:goto L43a79d;
case 0x43a79f:c.instructions+=5;goto B43a79f;
case 0x43a7a2:c.instructions+=4;goto B43a7a2;
case 0x43a7a3:c.instructions+=3;goto B43a7a3;
case 0x43a7a6:c.instructions+=2;goto B43a7a6;
case 0x43a7a7:c.instructions+=1;goto B43a7a7;
case 0x43a7ac:goto L43a7ac;
case 0x43a7b2:c.instructions+=3;goto B43a7b2;
case 0x43a7b5:c.instructions+=2;goto B43a7b5;
case 0x43a7b7:c.instructions+=1;goto B43a7b7;
case 0x43a7b9:goto L43a7b9;
case 0x43a7bb:c.instructions+=1;goto B43a7bb;
case 0x43a7c0:goto L43a7c0;
case 0x43a7c4:goto L43a7c4;
case 0x43a7c9:goto L43a7c9;
case 0x43a7cb:c.instructions+=1;goto B43a7cb;
case 0x43a7cd:goto L43a7cd;
case 0x43a7d0:c.instructions+=1;goto B43a7d0;
case 0x43a7d2:goto L43a7d2;
case 0x43a7d4:goto L43a7d4;
case 0x43a7d7:c.instructions+=8;goto B43a7d7;
case 0x43a7da:c.instructions+=7;goto B43a7da;
case 0x43a7dc:c.instructions+=6;goto B43a7dc;
case 0x43a7df:c.instructions+=5;goto B43a7df;
case 0x43a7e2:c.instructions+=4;goto B43a7e2;
case 0x43a7e4:c.instructions+=3;goto B43a7e4;
case 0x43a7e7:c.instructions+=2;goto B43a7e7;
case 0x43a7e9:c.instructions+=1;goto B43a7e9;
case 0x43a7eb:goto L43a7eb;
case 0x43a7f0:c.instructions+=1;goto B43a7f0;
case 0x43a7f2:goto L43a7f2;
case 0x43a7f5:c.instructions+=2;goto B43a7f5;
case 0x43a7f7:c.instructions+=1;goto B43a7f7;
case 0x43a7f9:goto L43a7f9;
case 0x43a800:goto L43a800;
case 0x43a804:c.instructions+=7;goto B43a804;
case 0x43a806:c.instructions+=6;goto B43a806;
case 0x43a80a:c.instructions+=5;goto B43a80a;
case 0x43a80e:c.instructions+=4;goto B43a80e;
case 0x43a811:c.instructions+=3;goto B43a811;
case 0x43a813:c.instructions+=2;goto B43a813;
case 0x43a817:c.instructions+=1;goto B43a817;
case 0x43a81d:goto L43a81d;
case 0x43a821:c.instructions+=12;goto B43a821;
case 0x43a825:c.instructions+=11;goto B43a825;
case 0x43a828:c.instructions+=10;goto B43a828;
case 0x43a82b:c.instructions+=9;goto B43a82b;
case 0x43a82e:c.instructions+=8;goto B43a82e;
case 0x43a831:c.instructions+=7;goto B43a831;
case 0x43a833:c.instructions+=6;goto B43a833;
case 0x43a836:c.instructions+=5;goto B43a836;
case 0x43a839:c.instructions+=4;goto B43a839;
case 0x43a83b:c.instructions+=3;goto B43a83b;
case 0x43a83f:c.instructions+=2;goto B43a83f;
case 0x43a840:c.instructions+=1;goto B43a840;
case 0x43a845:goto L43a845;
case 0x43a848:c.instructions+=9;goto B43a848;
case 0x43a84a:c.instructions+=8;goto B43a84a;
case 0x43a851:c.instructions+=7;goto B43a851;
case 0x43a858:c.instructions+=6;goto B43a858;
case 0x43a859:c.instructions+=5;goto B43a859;
case 0x43a85a:c.instructions+=4;goto B43a85a;
case 0x43a85b:c.instructions+=3;goto B43a85b;
case 0x43a85d:c.instructions+=2;goto B43a85d;
case 0x43a85e:c.instructions+=1;goto B43a85e;
case 0x43a861:goto L43a861;
case 0x43a868:c.instructions+=8;goto B43a868;
case 0x43a869:c.instructions+=7;goto B43a869;
case 0x43a86a:c.instructions+=6;goto B43a86a;
case 0x43a86c:c.instructions+=5;goto B43a86c;
case 0x43a873:c.instructions+=4;goto B43a873;
case 0x43a874:c.instructions+=3;goto B43a874;
case 0x43a876:c.instructions+=2;goto B43a876;
case 0x43a877:c.instructions+=1;goto B43a877;
case 0x43a880:goto L43a880;
case 0x43a881:c.instructions+=9;goto B43a881;
case 0x43a883:c.instructions+=8;goto B43a883;
case 0x43a886:c.instructions+=7;goto B43a886;
case 0x43a889:c.instructions+=6;goto B43a889;
case 0x43a88e:c.instructions+=5;goto B43a88e;
case 0x43a890:c.instructions+=4;goto B43a890;
case 0x43a891:c.instructions+=3;goto B43a891;
case 0x43a892:c.instructions+=2;goto B43a892;
case 0x43a893:c.instructions+=1;goto B43a893;
case 0x43a899:goto L43a899;
case 0x43a89e:c.instructions+=2;goto B43a89e;
case 0x43a8a0:c.instructions+=1;goto B43a8a0;
case 0x43a8a6:goto L43a8a6;
case 0x43a8ab:c.instructions+=1;goto B43a8ab;
case 0x43a8b0:goto L43a8b0;
case 0x43a8b5:c.instructions+=2;goto B43a8b5;
case 0x43a8b7:c.instructions+=1;goto B43a8b7;
case 0x43a8b9:goto L43a8b9;
case 0x43a8be:c.instructions+=1;goto B43a8be;
case 0x43a8c3:goto L43a8c3;
case 0x43a8c9:c.instructions+=2;goto B43a8c9;
case 0x43a8cb:c.instructions+=1;goto B43a8cb;
case 0x43a8d1:goto L43a8d1;
case 0x43a8d7:c.instructions+=2;goto B43a8d7;
case 0x43a8dc:c.instructions+=1;goto B43a8dc;
case 0x43a8e1:goto L43a8e1;
case 0x43a8e3:c.instructions+=2;goto B43a8e3;
case 0x43a8e7:c.instructions+=1;goto B43a8e7;
case 0x43a8ed:goto L43a8ed;
case 0x43a8f0:goto L43a8f0;
case 0x43a8f5:goto L43a8f5;
case 0x43a8f8:c.instructions+=3;goto B43a8f8;
case 0x43a8fc:c.instructions+=2;goto B43a8fc;
case 0x43a8fd:c.instructions+=1;goto B43a8fd;
case 0x43a902:goto L43a902;
case 0x43a905:c.instructions+=14;goto B43a905;
case 0x43a908:c.instructions+=13;goto B43a908;
case 0x43a90b:c.instructions+=12;goto B43a90b;
case 0x43a90e:c.instructions+=11;goto B43a90e;
case 0x43a910:c.instructions+=10;goto B43a910;
case 0x43a914:c.instructions+=9;goto B43a914;
case 0x43a917:c.instructions+=8;goto B43a917;
case 0x43a919:c.instructions+=7;goto B43a919;
case 0x43a91d:c.instructions+=6;goto B43a91d;
case 0x43a921:c.instructions+=5;goto B43a921;
case 0x43a922:c.instructions+=4;goto B43a922;
case 0x43a924:c.instructions+=3;goto B43a924;
case 0x43a928:c.instructions+=2;goto B43a928;
case 0x43a92c:c.instructions+=1;goto B43a92c;
case 0x43a931:goto L43a931;
case 0x43a933:c.instructions+=2;goto B43a933;
case 0x43a935:c.instructions+=1;goto B43a935;
case 0x43a937:goto L43a937;
case 0x43a93b:c.instructions+=1;goto B43a93b;
case 0x43a93d:goto L43a93d;
case 0x43a942:c.instructions+=2;goto B43a942;
case 0x43a944:c.instructions+=1;goto B43a944;
case 0x43a946:goto L43a946;
case 0x43a94b:c.instructions+=2;goto B43a94b;
case 0x43a94d:c.instructions+=1;goto B43a94d;
case 0x43a94f:goto L43a94f;
case 0x43a954:c.instructions+=2;goto B43a954;
case 0x43a956:c.instructions+=1;goto B43a956;
case 0x43a958:goto L43a958;
case 0x43a95d:c.instructions+=1;goto B43a95d;
case 0x43a962:goto L43a962;
case 0x43a968:c.instructions+=1;goto B43a968;
case 0x43a96a:goto L43a96a;
case 0x43a96c:goto L43a96c;
case 0x43a972:c.instructions+=8;goto B43a972;
case 0x43a976:c.instructions+=7;goto B43a976;
case 0x43a978:c.instructions+=6;goto B43a978;
case 0x43a97c:c.instructions+=5;goto B43a97c;
case 0x43a97d:c.instructions+=4;goto B43a97d;
case 0x43a983:c.instructions+=3;goto B43a983;
case 0x43a984:c.instructions+=2;goto B43a984;
case 0x43a985:c.instructions+=1;goto B43a985;
case 0x43a988:goto L43a988;
case 0x43a98a:c.instructions+=2;goto B43a98a;
case 0x43a98e:c.instructions+=1;goto B43a98e;
case 0x43a994:goto L43a994;
case 0x43a995:c.instructions+=5;goto B43a995;
case 0x43a996:c.instructions+=4;goto B43a996;
case 0x43a997:c.instructions+=3;goto B43a997;
case 0x43a999:c.instructions+=2;goto B43a999;
case 0x43a99a:c.instructions+=1;goto B43a99a;
case 0x43a9a0:goto L43a9a0;
case 0x43a9a2:c.instructions+=13;goto B43a9a2;
case 0x43a9a7:c.instructions+=12;goto B43a9a7;
case 0x43a9ad:c.instructions+=11;goto B43a9ad;
case 0x43a9ae:c.instructions+=10;goto B43a9ae;
case 0x43a9b5:c.instructions+=9;goto B43a9b5;
case 0x43a9b6:c.instructions+=8;goto B43a9b6;
case 0x43a9b7:c.instructions+=7;goto B43a9b7;
case 0x43a9b9:c.instructions+=6;goto B43a9b9;
case 0x43a9bd:c.instructions+=5;goto B43a9bd;
case 0x43a9c3:c.instructions+=4;goto B43a9c3;
case 0x43a9c8:c.instructions+=3;goto B43a9c8;
case 0x43a9ca:c.instructions+=2;goto B43a9ca;
case 0x43a9d2:c.instructions+=1;goto B43a9d2;
case 0x43a9d4:goto L43a9d4;
case 0x43a9d9:c.instructions+=2;goto B43a9d9;
case 0x43a9db:c.instructions+=1;goto B43a9db;
case 0x43a9dd:goto L43a9dd;
case 0x43a9e0:c.instructions+=2;goto B43a9e0;
case 0x43a9e2:c.instructions+=1;goto B43a9e2;
case 0x43a9e4:goto L43a9e4;
case 0x43a9e7:c.instructions+=2;goto B43a9e7;
case 0x43a9e9:c.instructions+=1;goto B43a9e9;
case 0x43a9eb:goto L43a9eb;
case 0x43a9f0:goto L43a9f0;
case 0x43a9f3:c.instructions+=2;goto B43a9f3;
case 0x43a9f5:c.instructions+=1;goto B43a9f5;
case 0x43a9f7:goto L43a9f7;
case 0x43a9f9:c.instructions+=2;goto B43a9f9;
case 0x43a9fb:c.instructions+=1;goto B43a9fb;
case 0x43a9fd:goto L43a9fd;
case 0x43aa04:goto L43aa04;
case 0x43aa06:c.instructions+=3;goto B43aa06;
case 0x43aa08:c.instructions+=2;goto B43aa08;
case 0x43aa0d:c.instructions+=1;goto B43aa0d;
case 0x43aa12:goto L43aa12;
case 0x43aa15:c.instructions+=2;goto B43aa15;
case 0x43aa1d:c.instructions+=1;goto B43aa1d;
case 0x43aa22:goto L43aa22;
case 0x43aa26:c.instructions+=4;goto B43aa26;
case 0x43aa27:c.instructions+=3;goto B43aa27;
case 0x43aa2e:c.instructions+=2;goto B43aa2e;
case 0x43aa31:c.instructions+=1;goto B43aa31;
case 0x43aa40:goto L43aa40;
case 0x43aa44:c.instructions+=3;goto B43aa44;
case 0x43aa45:c.instructions+=2;goto B43aa45;
case 0x43aa46:c.instructions+=1;goto B43aa46;
case 0x43aa4b:goto L43aa4b;
case 0x43aa4d:c.instructions+=2;goto B43aa4d;
case 0x43aa4f:c.instructions+=1;goto B43aa4f;
case 0x43aa51:goto L43aa51;
case 0x43aa56:c.instructions+=2;goto B43aa56;
case 0x43aa58:c.instructions+=1;goto B43aa58;
case 0x43aa5a:goto L43aa5a;
case 0x43aa60:c.instructions+=1;goto B43aa60;
case 0x43aa65:goto L43aa65;
case 0x43aa68:c.instructions+=2;goto B43aa68;
case 0x43aa6b:c.instructions+=1;goto B43aa6b;
case 0x43aa6d:goto L43aa6d;
case 0x43aa6e:c.instructions+=1;goto B43aa6e;
case 0x43aa70:goto L43aa70;
case 0x43aa77:c.instructions+=3;goto B43aa77;
case 0x43aa79:c.instructions+=2;goto B43aa79;
case 0x43aa7a:c.instructions+=1;goto B43aa7a;
case 0x43aa7d:goto L43aa7d;
case 0x43aa7f:c.instructions+=2;goto B43aa7f;
case 0x43aa86:c.instructions+=1;goto B43aa86;
case 0x43aa8b:goto L43aa8b;
case 0x43aa92:goto L43aa92;
case 0x43aa94:c.instructions+=2;goto B43aa94;
case 0x43aa95:c.instructions+=1;goto B43aa95;
case 0x43aa98:goto L43aa98;
case 0x43aa9a:c.instructions+=2;goto B43aa9a;
case 0x43aa9b:c.instructions+=1;goto B43aa9b;
case 0x43aaa0:goto L43aaa0;
case 0x43aaa3:c.instructions+=7;goto B43aaa3;
case 0x43aaa4:c.instructions+=6;goto B43aaa4;
case 0x43aaa5:c.instructions+=5;goto B43aaa5;
case 0x43aaa6:c.instructions+=4;goto B43aaa6;
case 0x43aaa9:c.instructions+=3;goto B43aaa9;
case 0x43aaab:c.instructions+=2;goto B43aaab;
case 0x43aaad:c.instructions+=1;goto B43aaad;
case 0x43aaaf:goto L43aaaf;
case 0x43aab2:c.instructions+=1;goto B43aab2;
case 0x43aab4:goto L43aab4;
case 0x43aab6:goto L43aab6;
case 0x43aab8:c.instructions+=1;goto B43aab8;
case 0x43aaba:goto L43aaba;
case 0x43aabd:c.instructions+=1;goto B43aabd;
case 0x43aabf:goto L43aabf;
case 0x43aac1:goto L43aac1;
case 0x43aac3:c.instructions+=1;goto B43aac3;
case 0x43aac5:goto L43aac5;
case 0x43aac8:c.instructions+=2;goto B43aac8;
case 0x43aacb:c.instructions+=1;goto B43aacb;
case 0x43aacd:goto L43aacd;
case 0x43aace:c.instructions+=1;goto B43aace;
case 0x43aad0:goto L43aad0;
case 0x43aad1:c.instructions+=1;goto B43aad1;
case 0x43aad3:goto L43aad3;
case 0x43aada:goto L43aada;
case 0x43aadf:c.instructions+=2;goto B43aadf;
case 0x43aae1:c.instructions+=1;goto B43aae1;
case 0x43aae3:goto L43aae3;
case 0x43aae8:c.instructions+=2;goto B43aae8;
case 0x43aaea:c.instructions+=1;goto B43aaea;
case 0x43aaec:goto L43aaec;
case 0x43aaf1:c.instructions+=2;goto B43aaf1;
case 0x43aaf4:c.instructions+=1;goto B43aaf4;
case 0x43aaf9:goto L43aaf9;
case 0x43aafb:c.instructions+=1;goto B43aafb;
case 0x43aafd:goto L43aafd;
case 0x43aaff:goto L43aaff;
case 0x43ab02:c.instructions+=2;goto B43ab02;
case 0x43ab04:c.instructions+=1;goto B43ab04;
case 0x43ab06:goto L43ab06;
case 0x43ab09:c.instructions+=1;goto B43ab09;
case 0x43ab0b:goto L43ab0b;
case 0x43ab0c:c.instructions+=4;goto B43ab0c;
case 0x43ab0d:c.instructions+=3;goto B43ab0d;
case 0x43ab0f:c.instructions+=2;goto B43ab0f;
case 0x43ab10:c.instructions+=1;goto B43ab10;
case 0x43ab20:goto L43ab20;
case 0x43ab21:c.instructions+=8;goto B43ab21;
case 0x43ab24:c.instructions+=7;goto B43ab24;
case 0x43ab26:c.instructions+=6;goto B43ab26;
case 0x43ab27:c.instructions+=5;goto B43ab27;
case 0x43ab28:c.instructions+=4;goto B43ab28;
case 0x43ab29:c.instructions+=3;goto B43ab29;
case 0x43ab2c:c.instructions+=2;goto B43ab2c;
case 0x43ab31:c.instructions+=1;goto B43ab31;
case 0x43ab33:goto L43ab33;
case 0x43ab36:c.instructions+=1;goto B43ab36;
case 0x43ab38:goto L43ab38;
case 0x43ab3a:goto L43ab3a;
case 0x43ab3f:c.instructions+=1;goto B43ab3f;
case 0x43ab40:goto L43ab40;
case 0x43ab42:c.instructions+=1;goto B43ab42;
case 0x43ab44:goto L43ab44;
case 0x43ab47:c.instructions+=1;goto B43ab47;
case 0x43ab49:goto L43ab49;
case 0x43ab4b:goto L43ab4b;
case 0x43ab4d:c.instructions+=1;goto B43ab4d;
case 0x43ab4f:goto L43ab4f;
case 0x43ab52:c.instructions+=2;goto B43ab52;
case 0x43ab55:c.instructions+=1;goto B43ab55;
case 0x43ab57:goto L43ab57;
case 0x43ab58:c.instructions+=1;goto B43ab58;
case 0x43ab5a:goto L43ab5a;
case 0x43ab5c:goto L43ab5c;
case 0x43ab5e:c.instructions+=2;goto B43ab5e;
case 0x43ab65:c.instructions+=1;goto B43ab65;
case 0x43ab6a:goto L43ab6a;
case 0x43ab6d:goto L43ab6d;
case 0x43ab72:c.instructions+=2;goto B43ab72;
case 0x43ab74:c.instructions+=1;goto B43ab74;
case 0x43ab76:goto L43ab76;
case 0x43ab7b:c.instructions+=2;goto B43ab7b;
case 0x43ab7d:c.instructions+=1;goto B43ab7d;
case 0x43ab7f:goto L43ab7f;
case 0x43ab84:c.instructions+=2;goto B43ab84;
case 0x43ab87:c.instructions+=1;goto B43ab87;
case 0x43ab8c:goto L43ab8c;
case 0x43ab90:c.instructions+=2;goto B43ab90;
case 0x43ab92:c.instructions+=1;goto B43ab92;
case 0x43ab94:goto L43ab94;
case 0x43ab99:goto L43ab99;
case 0x43ab9c:c.instructions+=2;goto B43ab9c;
case 0x43ab9e:c.instructions+=1;goto B43ab9e;
case 0x43aba0:goto L43aba0;
case 0x43aba3:c.instructions+=1;goto B43aba3;
case 0x43aba5:goto L43aba5;
case 0x43aba7:c.instructions+=1;goto B43aba7;
case 0x43aba9:goto L43aba9;
case 0x43abad:c.instructions+=5;goto B43abad;
case 0x43abae:c.instructions+=4;goto B43abae;
case 0x43abaf:c.instructions+=3;goto B43abaf;
case 0x43abb0:c.instructions+=2;goto B43abb0;
case 0x43abb1:c.instructions+=1;goto B43abb1;
case 0x43abc0:goto L43abc0;
case 0x43abc3:c.instructions+=5;goto B43abc3;
case 0x43abc4:c.instructions+=4;goto B43abc4;
case 0x43abc6:c.instructions+=3;goto B43abc6;
case 0x43abc9:c.instructions+=2;goto B43abc9;
case 0x43abcb:c.instructions+=1;goto B43abcb;
case 0x43abd1:goto L43abd1;
case 0x43abd4:c.instructions+=1;goto B43abd4;
case 0x43abda:goto L43abda;
case 0x43abde:c.instructions+=5;goto B43abde;
case 0x43abe1:c.instructions+=4;goto B43abe1;
case 0x43abe4:c.instructions+=3;goto B43abe4;
case 0x43abe9:c.instructions+=2;goto B43abe9;
case 0x43abeb:c.instructions+=1;goto B43abeb;
case 0x43abed:goto L43abed;
case 0x43abf0:c.instructions+=7;goto B43abf0;
case 0x43abf3:c.instructions+=6;goto B43abf3;
case 0x43abf9:c.instructions+=5;goto B43abf9;
case 0x43abfd:c.instructions+=4;goto B43abfd;
case 0x43abfe:c.instructions+=3;goto B43abfe;
case 0x43ac00:c.instructions+=2;goto B43ac00;
case 0x43ac01:c.instructions+=1;goto B43ac01;
case 0x43ac06:goto L43ac06;
case 0x43ac07:c.instructions+=6;goto B43ac07;
case 0x43ac0b:c.instructions+=5;goto B43ac0b;
case 0x43ac0c:c.instructions+=4;goto B43ac0c;
case 0x43ac0d:c.instructions+=3;goto B43ac0d;
case 0x43ac0e:c.instructions+=2;goto B43ac0e;
case 0x43ac10:c.instructions+=1;goto B43ac10;
case 0x43ac15:goto L43ac15;
case 0x43ac18:c.instructions+=3;goto B43ac18;
case 0x43ac1b:c.instructions+=2;goto B43ac1b;
case 0x43ac1d:c.instructions+=1;goto B43ac1d;
case 0x43ac1f:goto L43ac1f;
case 0x43ac20:goto L43ac20;
case 0x43ac23:c.instructions+=3;goto B43ac23;
case 0x43ac25:c.instructions+=2;goto B43ac25;
case 0x43ac26:c.instructions+=1;goto B43ac26;
case 0x43ac29:goto L43ac29;
case 0x43ac2c:c.instructions+=2;goto B43ac2c;
case 0x43ac2e:c.instructions+=1;goto B43ac2e;
case 0x43ac30:goto L43ac30;
case 0x43ac31:c.instructions+=2;goto B43ac31;
case 0x43ac37:c.instructions+=1;goto B43ac37;
case 0x43ac3c:goto L43ac3c;
case 0x43ac3f:c.instructions+=4;goto B43ac3f;
case 0x43ac42:c.instructions+=3;goto B43ac42;
case 0x43ac45:c.instructions+=2;goto B43ac45;
case 0x43ac47:c.instructions+=1;goto B43ac47;
case 0x43ac4d:goto L43ac4d;
case 0x43ac50:c.instructions+=4;goto B43ac50;
case 0x43ac53:c.instructions+=3;goto B43ac53;
case 0x43ac55:c.instructions+=2;goto B43ac55;
case 0x43ac58:c.instructions+=1;goto B43ac58;
case 0x43ac5a:goto L43ac5a;
case 0x43ac5d:c.instructions+=4;goto B43ac5d;
case 0x43ac60:c.instructions+=3;goto B43ac60;
case 0x43ac62:c.instructions+=2;goto B43ac62;
case 0x43ac65:c.instructions+=1;goto B43ac65;
case 0x43ac67:goto L43ac67;
case 0x43ac6a:c.instructions+=2;goto B43ac6a;
case 0x43ac6c:c.instructions+=1;goto B43ac6c;
case 0x43ac6e:goto L43ac6e;
case 0x43ac73:c.instructions+=2;goto B43ac73;
case 0x43ac75:c.instructions+=1;goto B43ac75;
case 0x43ac77:goto L43ac77;
case 0x43ac7d:c.instructions+=3;goto B43ac7d;
case 0x43ac83:c.instructions+=2;goto B43ac83;
case 0x43ac85:c.instructions+=1;goto B43ac85;
case 0x43ac87:goto L43ac87;
case 0x43ac8e:c.instructions+=1;goto B43ac8e;
case 0x43ac93:goto L43ac93;
case 0x43ac9a:goto L43ac9a;
case 0x43ac9f:c.instructions+=3;goto B43ac9f;
case 0x43aca1:c.instructions+=2;goto B43aca1;
case 0x43aca3:c.instructions+=1;goto B43aca3;
case 0x43aca5:goto L43aca5;
case 0x43acb0:goto L43acb0;
case 0x43acb7:c.instructions+=3;goto B43acb7;
case 0x43acbd:c.instructions+=2;goto B43acbd;
case 0x43acbf:c.instructions+=1;goto B43acbf;
case 0x43acc1:goto L43acc1;
case 0x43acc5:c.instructions+=1;goto B43acc5;
case 0x43acc7:goto L43acc7;
case 0x43acc9:c.instructions+=1;goto B43acc9;
case 0x43acce:goto L43acce;
case 0x43acd3:c.instructions+=3;goto B43acd3;
case 0x43acd4:c.instructions+=2;goto B43acd4;
case 0x43acd6:c.instructions+=1;goto B43acd6;
case 0x43acd8:goto L43acd8;
case 0x43acdc:goto L43acdc;
case 0x43acdd:c.instructions+=2;goto B43acdd;
case 0x43acde:c.instructions+=1;goto B43acde;
case 0x43acdf:goto L43acdf;
case 0x43ace0:c.instructions+=2;goto B43ace0;
case 0x43ace3:c.instructions+=1;goto B43ace3;
case 0x43acf0:goto L43acf0;
case 0x43acf3:c.instructions+=6;goto B43acf3;
case 0x43acf6:c.instructions+=5;goto B43acf6;
case 0x43acfa:c.instructions+=4;goto B43acfa;
case 0x43acfd:c.instructions+=3;goto B43acfd;
case 0x43ad00:c.instructions+=2;goto B43ad00;
case 0x43ad02:c.instructions+=1;goto B43ad02;
case 0x43ad08:goto L43ad08;
case 0x43ad0e:c.instructions+=2;goto B43ad0e;
case 0x43ad0f:c.instructions+=1;goto B43ad0f;
case 0x43ad14:goto L43ad14;
case 0x43ad17:c.instructions+=3;goto B43ad17;
case 0x43ad19:c.instructions+=2;goto B43ad19;
case 0x43ad1d:c.instructions+=1;goto B43ad1d;
case 0x43ad23:goto L43ad23;
case 0x43ad24:c.instructions+=7;goto B43ad24;
case 0x43ad25:c.instructions+=6;goto B43ad25;
case 0x43ad2a:c.instructions+=5;goto B43ad2a;
case 0x43ad2c:c.instructions+=4;goto B43ad2c;
case 0x43ad2d:c.instructions+=3;goto B43ad2d;
case 0x43ad31:c.instructions+=2;goto B43ad31;
case 0x43ad35:c.instructions+=1;goto B43ad35;
case 0x43ad36:goto L43ad36;
case 0x43ad3a:c.instructions+=1;goto B43ad3a;
case 0x43ad40:goto L43ad40;
case 0x43ad46:c.instructions+=4;goto B43ad46;
case 0x43ad48:c.instructions+=3;goto B43ad48;
case 0x43ad4e:c.instructions+=2;goto B43ad4e;
case 0x43ad54:c.instructions+=1;goto B43ad54;
case 0x43ad5a:goto L43ad5a;
case 0x43ad5c:c.instructions+=1;goto B43ad5c;
case 0x43ad62:goto L43ad62;
case 0x43ad64:c.instructions+=1;goto B43ad64;
case 0x43ad6a:goto L43ad6a;
case 0x43ad70:c.instructions+=2;goto B43ad70;
case 0x43ad72:c.instructions+=1;goto B43ad72;
case 0x43ad78:goto L43ad78;
case 0x43ad7d:c.instructions+=2;goto B43ad7d;
case 0x43ad7e:c.instructions+=1;goto B43ad7e;
case 0x43ad83:goto L43ad83;
case 0x43ad86:c.instructions+=2;goto B43ad86;
case 0x43ad88:c.instructions+=1;goto B43ad88;
case 0x43ad8a:goto L43ad8a;
case 0x43ad8c:c.instructions+=1;goto B43ad8c;
case 0x43ad91:goto L43ad91;
case 0x43ad93:c.instructions+=1;goto B43ad93;
case 0x43ad95:goto L43ad95;
case 0x43ad97:goto L43ad97;
case 0x43ad9b:c.instructions+=8;goto B43ad9b;
case 0x43ad9e:c.instructions+=7;goto B43ad9e;
case 0x43ada1:c.instructions+=6;goto B43ada1;
case 0x43ada2:c.instructions+=5;goto B43ada2;
case 0x43ada5:c.instructions+=4;goto B43ada5;
case 0x43ada8:c.instructions+=3;goto B43ada8;
case 0x43adaf:c.instructions+=2;goto B43adaf;
case 0x43adb2:c.instructions+=1;goto B43adb2;
case 0x43adb7:goto L43adb7;
case 0x43adb9:c.instructions+=3;goto B43adb9;
case 0x43adba:c.instructions+=2;goto B43adba;
case 0x43adbc:c.instructions+=1;goto B43adbc;
case 0x43adc1:goto L43adc1;
case 0x43adc3:c.instructions+=3;goto B43adc3;
case 0x43adc4:c.instructions+=2;goto B43adc4;
case 0x43adc6:c.instructions+=1;goto B43adc6;
case 0x43adcb:goto L43adcb;
case 0x43adce:c.instructions+=2;goto B43adce;
case 0x43add0:c.instructions+=1;goto B43add0;
case 0x43add2:goto L43add2;
case 0x43add6:c.instructions+=2;goto B43add6;
case 0x43add8:c.instructions+=1;goto B43add8;
case 0x43adda:goto L43adda;
case 0x43addc:c.instructions+=1;goto B43addc;
case 0x43ade1:goto L43ade1;
case 0x43ade3:c.instructions+=1;goto B43ade3;
case 0x43ade8:goto L43ade8;
case 0x43adea:c.instructions+=1;goto B43adea;
case 0x43adef:goto L43adef;
case 0x43adf4:c.instructions+=3;goto B43adf4;
case 0x43adf5:c.instructions+=2;goto B43adf5;
case 0x43adf6:c.instructions+=1;goto B43adf6;
case 0x43adfb:goto L43adfb;
case 0x43adff:c.instructions+=2;goto B43adff;
case 0x43ae02:c.instructions+=1;goto B43ae02;
case 0x43ae08:goto L43ae08;
case 0x43ae0c:goto L43ae0c;
case 0x43ae10:c.instructions+=6;goto B43ae10;
case 0x43ae13:c.instructions+=5;goto B43ae13;
case 0x43ae16:c.instructions+=4;goto B43ae16;
case 0x43ae1c:c.instructions+=3;goto B43ae1c;
case 0x43ae20:c.instructions+=2;goto B43ae20;
case 0x43ae24:c.instructions+=1;goto B43ae24;
case 0x43ae2a:goto L43ae2a;
case 0x43ae2e:c.instructions+=3;goto B43ae2e;
case 0x43ae30:c.instructions+=2;goto B43ae30;
case 0x43ae32:c.instructions+=1;goto B43ae32;
case 0x43ae37:goto L43ae37;
case 0x43ae38:c.instructions+=3;goto B43ae38;
case 0x43ae39:c.instructions+=2;goto B43ae39;
case 0x43ae3a:c.instructions+=1;goto B43ae3a;
case 0x43ae3b:goto L43ae3b;
case 0x43ae3e:c.instructions+=1;goto B43ae3e;
case 0x43ae40:goto L43ae40;
case 0x43ae42:c.instructions+=11;goto B43ae42;
case 0x43ae47:c.instructions+=10;goto B43ae47;
case 0x43ae4d:c.instructions+=9;goto B43ae4d;
case 0x43ae4e:c.instructions+=8;goto B43ae4e;
case 0x43ae55:c.instructions+=7;goto B43ae55;
case 0x43ae56:c.instructions+=6;goto B43ae56;
case 0x43ae57:c.instructions+=5;goto B43ae57;
case 0x43ae59:c.instructions+=4;goto B43ae59;
case 0x43ae5d:c.instructions+=3;goto B43ae5d;
case 0x43ae63:c.instructions+=2;goto B43ae63;
case 0x43ae6b:c.instructions+=1;goto B43ae6b;
case 0x43ae70:goto L43ae70;
case 0x43ae74:c.instructions+=5;goto B43ae74;
case 0x43ae7a:c.instructions+=4;goto B43ae7a;
case 0x43ae7b:c.instructions+=3;goto B43ae7b;
case 0x43ae82:c.instructions+=2;goto B43ae82;
case 0x43ae85:c.instructions+=1;goto B43ae85;
case 0x43ae90:goto L43ae90;
case 0x43ae92:c.instructions+=11;goto B43ae92;
case 0x43ae97:c.instructions+=10;goto B43ae97;
case 0x43ae9d:c.instructions+=9;goto B43ae9d;
case 0x43ae9e:c.instructions+=8;goto B43ae9e;
case 0x43aea5:c.instructions+=7;goto B43aea5;
case 0x43aea6:c.instructions+=6;goto B43aea6;
case 0x43aea7:c.instructions+=5;goto B43aea7;
case 0x43aea9:c.instructions+=4;goto B43aea9;
case 0x43aead:c.instructions+=3;goto B43aead;
case 0x43aeb3:c.instructions+=2;goto B43aeb3;
case 0x43aebb:c.instructions+=1;goto B43aebb;
case 0x43aec0:goto L43aec0;
case 0x43aec4:c.instructions+=5;goto B43aec4;
case 0x43aeca:c.instructions+=4;goto B43aeca;
case 0x43aecb:c.instructions+=3;goto B43aecb;
case 0x43aed2:c.instructions+=2;goto B43aed2;
case 0x43aed5:c.instructions+=1;goto B43aed5;
case 0x43aee0:goto L43aee0;
case 0x43aee1:c.instructions+=2;goto B43aee1;
case 0x43aee3:c.instructions+=1;goto B43aee3;
case 0x43aee8:goto L43aee8;
case 0x43aeed:c.instructions+=1;goto B43aeed;
case 0x43aeef:goto L43aeef;
case 0x43aef0:c.instructions+=1;goto B43aef0;
case 0x43aef5:goto L43aef5;
case 0x43aef8:goto L43aef8;
case 0x43aefa:c.instructions+=2;goto B43aefa;
case 0x43aefb:c.instructions+=1;goto B43aefb;
case 0x43af00:goto L43af00;
case 0x43af01:c.instructions+=2;goto B43af01;
case 0x43af03:c.instructions+=1;goto B43af03;
case 0x43af08:goto L43af08;
case 0x43af0d:c.instructions+=1;goto B43af0d;
case 0x43af0f:goto L43af0f;
case 0x43af10:c.instructions+=1;goto B43af10;
case 0x43af15:goto L43af15;
case 0x43af18:goto L43af18;
case 0x43af1a:c.instructions+=2;goto B43af1a;
case 0x43af1b:c.instructions+=1;goto B43af1b;
case 0x43af20:goto L43af20;
case 0x43af21:c.instructions+=8;goto B43af21;
case 0x43af22:c.instructions+=7;goto B43af22;
case 0x43af23:c.instructions+=6;goto B43af23;
case 0x43af25:c.instructions+=5;goto B43af25;
case 0x43af28:c.instructions+=4;goto B43af28;
case 0x43af2a:c.instructions+=3;goto B43af2a;
case 0x43af2b:c.instructions+=2;goto B43af2b;
case 0x43af2e:c.instructions+=1;goto B43af2e;
case 0x43af30:goto L43af30;
case 0x43af33:c.instructions+=1;goto B43af33;
case 0x43af35:goto L43af35;
case 0x43af37:goto L43af37;
case 0x43af3b:c.instructions+=1;goto B43af3b;
case 0x43af40:goto L43af40;
case 0x43af42:c.instructions+=1;goto B43af42;
case 0x43af44:goto L43af44;
case 0x43af47:c.instructions+=1;goto B43af47;
case 0x43af49:goto L43af49;
case 0x43af4b:goto L43af4b;
case 0x43af4d:c.instructions+=1;goto B43af4d;
case 0x43af4f:goto L43af4f;
case 0x43af50:c.instructions+=2;goto B43af50;
case 0x43af52:c.instructions+=1;goto B43af52;
case 0x43af57:goto L43af57;
case 0x43af5a:c.instructions+=2;goto B43af5a;
case 0x43af5c:c.instructions+=1;goto B43af5c;
case 0x43af5e:goto L43af5e;
case 0x43af61:c.instructions+=1;goto B43af61;
case 0x43af63:goto L43af63;
case 0x43af65:c.instructions+=1;goto B43af65;
case 0x43af67:goto L43af67;
case 0x43af6a:c.instructions+=2;goto B43af6a;
case 0x43af6c:c.instructions+=1;goto B43af6c;
case 0x43af6e:goto L43af6e;
case 0x43af6f:c.instructions+=1;goto B43af6f;
case 0x43af74:goto L43af74;
case 0x43af75:c.instructions+=4;goto B43af75;
case 0x43af76:c.instructions+=3;goto B43af76;
case 0x43af77:c.instructions+=2;goto B43af77;
case 0x43af78:c.instructions+=1;goto B43af78;
case 0x43af80:goto L43af80;
case 0x43af81:c.instructions+=9;goto B43af81;
case 0x43af82:c.instructions+=8;goto B43af82;
case 0x43af86:c.instructions+=7;goto B43af86;
case 0x43af87:c.instructions+=6;goto B43af87;
case 0x43af89:c.instructions+=5;goto B43af89;
case 0x43af8c:c.instructions+=4;goto B43af8c;
case 0x43af8d:c.instructions+=3;goto B43af8d;
case 0x43af90:c.instructions+=2;goto B43af90;
case 0x43af92:c.instructions+=1;goto B43af92;
case 0x43af94:goto L43af94;
case 0x43af97:c.instructions+=3;goto B43af97;
case 0x43af99:c.instructions+=2;goto B43af99;
case 0x43af9a:c.instructions+=1;goto B43af9a;
case 0x43af9d:goto L43af9d;
case 0x43afa0:c.instructions+=2;goto B43afa0;
case 0x43afa2:c.instructions+=1;goto B43afa2;
case 0x43afa4:goto L43afa4;
case 0x43afaa:c.instructions+=5;goto B43afaa;
case 0x43afac:c.instructions+=4;goto B43afac;
case 0x43afad:c.instructions+=3;goto B43afad;
case 0x43afb0:c.instructions+=2;goto B43afb0;
case 0x43afb3:c.instructions+=1;goto B43afb3;
case 0x43afb8:goto L43afb8;
case 0x43afbd:c.instructions+=1;goto B43afbd;
case 0x43afc0:goto L43afc0;
case 0x43afc3:c.instructions+=5;goto B43afc3;
case 0x43afc5:c.instructions+=4;goto B43afc5;
case 0x43afc8:c.instructions+=3;goto B43afc8;
case 0x43afca:c.instructions+=2;goto B43afca;
case 0x43afcd:c.instructions+=1;goto B43afcd;
case 0x43afcf:goto L43afcf;
case 0x43afd2:goto L43afd2;
case 0x43afd5:c.instructions+=2;goto B43afd5;
case 0x43afda:c.instructions+=1;goto B43afda;
case 0x43afdc:goto L43afdc;
case 0x43afdd:c.instructions+=2;goto B43afdd;
case 0x43afdf:c.instructions+=1;goto B43afdf;
case 0x43afe4:goto L43afe4;
case 0x43afe8:c.instructions+=6;goto B43afe8;
case 0x43afe9:c.instructions+=5;goto B43afe9;
case 0x43afea:c.instructions+=4;goto B43afea;
case 0x43afeb:c.instructions+=3;goto B43afeb;
case 0x43afee:c.instructions+=2;goto B43afee;
case 0x43afef:c.instructions+=1;goto B43afef;
default:missing_instruction(c.pc);}
B43a000:L43a000:{c.instructions+=2;NFSU2_TR(0x43a000);
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
B43a002:{NFSU2_TR(0x43a002);
if(r1(R+518)){TAIL_STATIC(0x439f87u,439);}
}
B43a004:L43a004:{c.instructions+=4;NFSU2_TR(0x43a004);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43a007:{NFSU2_TR(0x43a007);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43a009:{NFSU2_TR(0x43a009);
__builtin_memmove((R+4),(R+28),4);
}
B43a00b:{NFSU2_TR(0x43a00b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a00eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43a00e:L43a00e:{c.instructions+=2;NFSU2_TR(0x43a00e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a010:{NFSU2_TR(0x43a010);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a014;}}
}
B43a012:L43a012:{c.instructions+=1;NFSU2_TR(0x43a012);
__builtin_memmove((R+12),(R+28),4);
}
B43a014:L43a014:{c.instructions+=3;NFSU2_TR(0x43a014);
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
B43a016:{NFSU2_TR(0x43a016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43a018:{NFSU2_TR(0x43a018);
if(r1(R+518)){TAIL_STATIC(0x439ff9u,439);}
}
B43a01a:L43a01a:{c.instructions+=1;NFSU2_TR(0x43a01a);
TAIL_STATIC(0x439f8fu,439);
}
B43a01f:L43a01f:{c.instructions+=9;NFSU2_TR(0x43a01f);
w4(R+0,u32(0x1ull));
}
B43a024:{NFSU2_TR(0x43a024);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B43a026:{NFSU2_TR(0x43a026);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43a027:{NFSU2_TR(0x43a027);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43a028:{NFSU2_TR(0x43a028);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43a029:{NFSU2_TR(0x43a029);
w1(R+0,u8(0x1ull));
}
B43a02b:{NFSU2_TR(0x43a02b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43a02c:{NFSU2_TR(0x43a02c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43a02d:{NFSU2_TR(0x43a02d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43a02e:L43a02e:{c.instructions+=7;NFSU2_TR(0x43a02e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43a02f:{NFSU2_TR(0x43a02f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43a030:{NFSU2_TR(0x43a030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43a031:{NFSU2_TR(0x43a031);
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
B43a033:{NFSU2_TR(0x43a033);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43a034:{NFSU2_TR(0x43a034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43a035:{NFSU2_TR(0x43a035);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43a040:L43a040:{c.instructions+=5;NFSU2_TR(0x43a040);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B43a045:{NFSU2_TR(0x43a045);
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
B43a047:{NFSU2_TR(0x43a047);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a048:{NFSU2_TR(0x43a048);
__builtin_memmove((R+24),(R+4),4);
}
B43a04a:{NFSU2_TR(0x43a04a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a06e;}}
}
B43a04c:L43a04c:{c.instructions+=3;NFSU2_TR(0x43a04c);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B43a051:{NFSU2_TR(0x43a051);
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
B43a053:{NFSU2_TR(0x43a053);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a06e;}}
}
B43a055:L43a055:{c.instructions+=3;NFSU2_TR(0x43a055);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43a058:{NFSU2_TR(0x43a058);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43a05a:{NFSU2_TR(0x43a05a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a061;}}
}
B43a05c:L43a05c:{c.instructions+=1;NFSU2_TR(0x43a05c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a061ull));
TAIL_STATIC(0x4385b0u,438);
}
B43a061:L43a061:{c.instructions+=4;NFSU2_TR(0x43a061);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a065:{NFSU2_TR(0x43a065);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a066:{NFSU2_TR(0x43a066);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43a069:{NFSU2_TR(0x43a069);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a06eull));
TAIL_STATIC(0x479130u,479);
}
B43a06e:L43a06e:{c.instructions+=2;NFSU2_TR(0x43a06e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43a06f:{NFSU2_TR(0x43a06f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43a080:L43a080:{c.instructions+=5;NFSU2_TR(0x43a080);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B43a085:{NFSU2_TR(0x43a085);
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
B43a087:{NFSU2_TR(0x43a087);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a088:{NFSU2_TR(0x43a088);
__builtin_memmove((R+24),(R+4),4);
}
B43a08a:{NFSU2_TR(0x43a08a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a101;}}
}
B43a08c:L43a08c:{c.instructions+=3;NFSU2_TR(0x43a08c);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B43a091:{NFSU2_TR(0x43a091);
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
B43a093:{NFSU2_TR(0x43a093);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a101;}}
}
B43a095:L43a095:{c.instructions+=3;NFSU2_TR(0x43a095);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43a098:{NFSU2_TR(0x43a098);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43a09a:{NFSU2_TR(0x43a09a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a0a1;}}
}
B43a09c:L43a09c:{c.instructions+=1;NFSU2_TR(0x43a09c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a0a1ull));
TAIL_STATIC(0x4385b0u,438);
}
B43a0a1:L43a0a1:{c.instructions+=5;NFSU2_TR(0x43a0a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a0a2:{NFSU2_TR(0x43a0a2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43a0a6:{NFSU2_TR(0x43a0a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a0a7:{NFSU2_TR(0x43a0a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43a0aa:{NFSU2_TR(0x43a0aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a0afull));
TAIL_STATIC(0x479130u,479);
}
B43a0af:L43a0af:{c.instructions+=6;NFSU2_TR(0x43a0af);
__builtin_memmove((R+0),gp(0x827b78),4);
}
B43a0b4:{NFSU2_TR(0x43a0b4);
__builtin_memmove((R+4),gp(0x827b7c),4);
}
B43a0ba:{NFSU2_TR(0x43a0ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43a0bb:{NFSU2_TR(0x43a0bb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a0bd:{NFSU2_TR(0x43a0bd);
__builtin_memmove(gp(0x827b78),(R+0),4);
}
B43a0c2:{NFSU2_TR(0x43a0c2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43a0c9;}}
}
B43a0c4:L43a0c4:{c.instructions+=1;NFSU2_TR(0x43a0c4);
__builtin_memmove(gp(0x827b7c),(R+0),4);
}
B43a0c9:L43a0c9:{c.instructions+=3;NFSU2_TR(0x43a0c9);
__builtin_memmove((R+0),gp(0x827f00),4);
}
B43a0ce:{NFSU2_TR(0x43a0ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a0cf:{NFSU2_TR(0x43a0cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a0d4ull));
TAIL_STATIC(0x440e50u,440);
}
B43a0d4:L43a0d4:{c.instructions+=3;NFSU2_TR(0x43a0d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43a0d7:{NFSU2_TR(0x43a0d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43a0d9:{NFSU2_TR(0x43a0d9);
if(r1(R+518)){{goto L43a0e4;}}
}
B43a0db:L43a0db:{c.instructions+=2;NFSU2_TR(0x43a0db);
__builtin_memmove((R+4),(R+0),4);
}
B43a0dd:{NFSU2_TR(0x43a0dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a0e2ull));
TAIL_STATIC(0x435490u,435);
}
B43a0e2:L43a0e2:{c.instructions+=1;NFSU2_TR(0x43a0e2);
{goto L43a0e6;}
}
B43a0e4:L43a0e4:{c.instructions+=1;NFSU2_TR(0x43a0e4);
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
B43a0e6:L43a0e6:{c.instructions+=9;NFSU2_TR(0x43a0e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a0e9:{NFSU2_TR(0x43a0e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43a0ec:{NFSU2_TR(0x43a0ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43a0f3:{NFSU2_TR(0x43a0f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43a0f6:{NFSU2_TR(0x43a0f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B43a0f8:{NFSU2_TR(0x43a0f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a0fb:{NFSU2_TR(0x43a0fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a0fe:{NFSU2_TR(0x43a0fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43a100:{NFSU2_TR(0x43a100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43a101:L43a101:{c.instructions+=2;NFSU2_TR(0x43a101);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43a102:{NFSU2_TR(0x43a102);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43a110:L43a110:{c.instructions+=14;NFSU2_TR(0x43a110);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a112:{NFSU2_TR(0x43a112);
u8 U[4];
w4(U+0,u32(0x771f37ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a117:{NFSU2_TR(0x43a117);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a11d:{NFSU2_TR(0x43a11d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a11e:{NFSU2_TR(0x43a11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a125:{NFSU2_TR(0x43a125);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a126:{NFSU2_TR(0x43a126);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a127:{NFSU2_TR(0x43a127);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a128:{NFSU2_TR(0x43a128);
__builtin_memmove((R+28),(R+4),4);
}
B43a12a:{NFSU2_TR(0x43a12a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a12e:{NFSU2_TR(0x43a12e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a130:{NFSU2_TR(0x43a130);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a132:{NFSU2_TR(0x43a132);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43a13a:{NFSU2_TR(0x43a13a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a13full));
TAIL_STATIC(0x438660u,438);
}
B43a13f:L43a13f:{c.instructions+=3;NFSU2_TR(0x43a13f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43a142:{NFSU2_TR(0x43a142);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43a147:{NFSU2_TR(0x43a147);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a14cull));
TAIL_STATIC(0x436800u,436);
}
B43a14c:L43a14c:{c.instructions+=5;NFSU2_TR(0x43a14c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a14f:{NFSU2_TR(0x43a14f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43a152:{NFSU2_TR(0x43a152);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a154:{NFSU2_TR(0x43a154);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43a159:{NFSU2_TR(0x43a159);
if(r1(R+518)){{goto L43a179;}}
}
B43a15b:L43a15b:{c.instructions+=1;NFSU2_TR(0x43a15b);
{goto L43a160;}
}
B43a160:L43a160:{c.instructions+=6;NFSU2_TR(0x43a160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43a162:{NFSU2_TR(0x43a162);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43a165:{NFSU2_TR(0x43a165);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B43a167:{NFSU2_TR(0x43a167);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a168:{NFSU2_TR(0x43a168);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a16b:{NFSU2_TR(0x43a16b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a170ull));
TAIL_STATIC(0x440ef0u,440);
}
B43a170:L43a170:{c.instructions+=4;NFSU2_TR(0x43a170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43a172:{NFSU2_TR(0x43a172);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43a175:{NFSU2_TR(0x43a175);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a177:{NFSU2_TR(0x43a177);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a160u);}goto L43a160;}}
}
B43a179:L43a179:{c.instructions+=5;NFSU2_TR(0x43a179);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a17c:{NFSU2_TR(0x43a17c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43a17f:{NFSU2_TR(0x43a17f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a181:{NFSU2_TR(0x43a181);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43a186:{NFSU2_TR(0x43a186);
if(r1(R+518)){{goto L43a1a1;}}
}
B43a188:L43a188:{c.instructions+=6;NFSU2_TR(0x43a188);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43a18a:{NFSU2_TR(0x43a18a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43a18d:{NFSU2_TR(0x43a18d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B43a18f:{NFSU2_TR(0x43a18f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a190:{NFSU2_TR(0x43a190);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a193:{NFSU2_TR(0x43a193);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a198ull));
TAIL_STATIC(0x440ef0u,440);
}
B43a198:L43a198:{c.instructions+=4;NFSU2_TR(0x43a198);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43a19a:{NFSU2_TR(0x43a19a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43a19d:{NFSU2_TR(0x43a19d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a19f:{NFSU2_TR(0x43a19f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a188u);}goto L43a188;}}
}
B43a1a1:L43a1a1:{c.instructions+=3;NFSU2_TR(0x43a1a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43a1a4:{NFSU2_TR(0x43a1a4);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43a1a9:{NFSU2_TR(0x43a1a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a1aeull));
TAIL_STATIC(0x4358e0u,435);
}
B43a1ae:L43a1ae:{c.instructions+=5;NFSU2_TR(0x43a1ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a1b1:{NFSU2_TR(0x43a1b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43a1b4:{NFSU2_TR(0x43a1b4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a1b6:{NFSU2_TR(0x43a1b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B43a1be:{NFSU2_TR(0x43a1be);
if(r1(R+518)){{goto L43a1d9;}}
}
B43a1c0:L43a1c0:{c.instructions+=6;NFSU2_TR(0x43a1c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43a1c2:{NFSU2_TR(0x43a1c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43a1c5:{NFSU2_TR(0x43a1c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B43a1c7:{NFSU2_TR(0x43a1c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a1c8:{NFSU2_TR(0x43a1c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a1cb:{NFSU2_TR(0x43a1cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a1d0ull));
TAIL_STATIC(0x440ef0u,440);
}
B43a1d0:L43a1d0:{c.instructions+=4;NFSU2_TR(0x43a1d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43a1d2:{NFSU2_TR(0x43a1d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43a1d5:{NFSU2_TR(0x43a1d5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a1d7:{NFSU2_TR(0x43a1d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a1c0u);}goto L43a1c0;}}
}
B43a1d9:L43a1d9:{c.instructions+=6;NFSU2_TR(0x43a1d9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43a1dd:{NFSU2_TR(0x43a1dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43a1de:{NFSU2_TR(0x43a1de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43a1df:{NFSU2_TR(0x43a1df);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a1e6:{NFSU2_TR(0x43a1e6);
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
B43a1e9:{NFSU2_TR(0x43a1e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43a1f0:L43a1f0:{c.instructions+=3;NFSU2_TR(0x43a1f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a1f4:{NFSU2_TR(0x43a1f4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x37150ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B43a1fa:{NFSU2_TR(0x43a1fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a227;}}
}
B43a1fc:L43a1fc:{c.instructions+=3;NFSU2_TR(0x43a1fc);
__builtin_memmove((R+4),gp(0x86501c),4);
}
B43a202:{NFSU2_TR(0x43a202);
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
B43a204:{NFSU2_TR(0x43a204);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a221;}}
}
B43a206:L43a206:{c.instructions+=3;NFSU2_TR(0x43a206);
__builtin_memmove((R+4),gp(0x827adc),1);
}
B43a20c:{NFSU2_TR(0x43a20c);
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
B43a20e:{NFSU2_TR(0x43a20e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a221;}}
}
B43a210:L43a210:{c.instructions+=5;NFSU2_TR(0x43a210);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
}
B43a213:{NFSU2_TR(0x43a213);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B43a216:{NFSU2_TR(0x43a216);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a217:{NFSU2_TR(0x43a217);
w4(R+4,u32(0x827ef0ull));
}
B43a21c:{NFSU2_TR(0x43a21c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a221ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a080u);}goto L43a080;}
}
B43a221:L43a221:{c.instructions+=2;NFSU2_TR(0x43a221);
w4(R+0,u32(0x1ull));
}
B43a226:{NFSU2_TR(0x43a226);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43a227:L43a227:{c.instructions+=2;NFSU2_TR(0x43a227);
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
B43a229:{NFSU2_TR(0x43a229);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43a230:L43a230:{c.instructions+=3;NFSU2_TR(0x43a230);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a231:{NFSU2_TR(0x43a231);
__builtin_memmove((R+24),(R+4),4);
}
B43a233:{NFSU2_TR(0x43a233);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a238ull));
TAIL_STATIC(0x438810u,438);
}
B43a238:L43a238:{c.instructions+=2;NFSU2_TR(0x43a238);
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
B43a23d:{NFSU2_TR(0x43a23d);
if(r1(R+518)){{goto L43a254;}}
}
B43a23f:L43a23f:{c.instructions+=5;NFSU2_TR(0x43a23f);
s4(0x827ae0,u32(u32(m4(0x827ae0))-u32(u32(0x1ull))));
}
B43a245:{NFSU2_TR(0x43a245);
__builtin_memmove((R+0),gp(0x827ef0),4);
}
B43a24a:{NFSU2_TR(0x43a24a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a24b:{NFSU2_TR(0x43a24b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a24c:{NFSU2_TR(0x43a24c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a251ull));
TAIL_STATIC(0x43f920u,43f);
}
B43a251:L43a251:{c.instructions+=1;NFSU2_TR(0x43a251);
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
B43a254:L43a254:{c.instructions+=3;NFSU2_TR(0x43a254);
__builtin_memmove((R+0),(R+24),4);
}
B43a256:{NFSU2_TR(0x43a256);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43a257:{NFSU2_TR(0x43a257);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43a260:L43a260:{c.instructions+=5;NFSU2_TR(0x43a260);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a261:{NFSU2_TR(0x43a261);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a265:{NFSU2_TR(0x43a265);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x37110ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B43a26b:{NFSU2_TR(0x43a26b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a26c:{NFSU2_TR(0x43a26c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a455;}}
}
B43a272:L43a272:{c.instructions+=3;NFSU2_TR(0x43a272);
__builtin_memmove((R+4),gp(0x827adc),1);
}
B43a278:{NFSU2_TR(0x43a278);
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
B43a27a:{NFSU2_TR(0x43a27a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a29e;}}
}
B43a27c:L43a27c:{c.instructions+=3;NFSU2_TR(0x43a27c);
__builtin_memmove((R+4),gp(0x86501c),4);
}
B43a282:{NFSU2_TR(0x43a282);
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
B43a284:{NFSU2_TR(0x43a284);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a29e;}}
}
B43a286:L43a286:{c.instructions+=6;NFSU2_TR(0x43a286);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43a289:{NFSU2_TR(0x43a289);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffff0ull))));
}
B43a28c:{NFSU2_TR(0x43a28c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43a28e:{NFSU2_TR(0x43a28e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a292:{NFSU2_TR(0x43a292);
u8 U[14];
__builtin_memmove((U+6),gp(0x827c3c),4);
w1(R+512,u8((r4(U+6))<(u32(0x827c3cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x827c3cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x827c3cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43a29c:{NFSU2_TR(0x43a29c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a2a6;}}
}
B43a29e:L43a29e:{c.instructions+=4;NFSU2_TR(0x43a29e);
w4(R+0,u32(0x1ull));
}
B43a2a3:{NFSU2_TR(0x43a2a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43a2a4:{NFSU2_TR(0x43a2a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43a2a5:{NFSU2_TR(0x43a2a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43a2a6:L43a2a6:{c.instructions+=6;NFSU2_TR(0x43a2a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a2a7:{NFSU2_TR(0x43a2a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a2a8:{NFSU2_TR(0x43a2a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a2a9:{NFSU2_TR(0x43a2a9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a2ab:{NFSU2_TR(0x43a2ab);
w4(R+4,u32(0x827c3cull));
}
B43a2b0:{NFSU2_TR(0x43a2b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a2b5ull));
TAIL_STATIC(0x43be80u,43b);
}
B43a2b5:L43a2b5:{c.instructions+=3;NFSU2_TR(0x43a2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B43a2bc:{NFSU2_TR(0x43a2bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a2bd:{NFSU2_TR(0x43a2bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a2c2ull));
TAIL_STATIC(0x575620u,575);
}
B43a2c2:L43a2c2:{c.instructions+=6;NFSU2_TR(0x43a2c2);
__builtin_memmove((R+4),(R+24),4);
}
B43a2c4:{NFSU2_TR(0x43a2c4);
__builtin_memmove((R+8),(R+4),4);
}
B43a2c6:{NFSU2_TR(0x43a2c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B43a2c9:{NFSU2_TR(0x43a2c9);
__builtin_memmove((R+28),(R+0),4);
}
B43a2cb:{NFSU2_TR(0x43a2cb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43a2cd:{NFSU2_TR(0x43a2cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a2d1:L43a2d1:{c.instructions+=1;NFSU2_TR(0x43a2d1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L43a2d3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a2d1u);}goto L43a2d1;}
}
B43a2d3:L43a2d3:{c.instructions+=2;NFSU2_TR(0x43a2d3);
__builtin_memmove((R+4),(R+8),4);
}
B43a2d5:{NFSU2_TR(0x43a2d5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B43a2d8:L43a2d8:{c.instructions+=1;NFSU2_TR(0x43a2d8);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L43a2da;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a2d8u);}goto L43a2d8;}
}
B43a2da:L43a2da:{c.instructions+=4;NFSU2_TR(0x43a2da);
__builtin_memmove((R+24),gp(0x827c3c),4);
}
B43a2e0:{NFSU2_TR(0x43a2e0);
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
B43a2e3:{NFSU2_TR(0x43a2e3);
w4(R+4,u32(0x827c3cull));
}
B43a2e8:{NFSU2_TR(0x43a2e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a2edull));
TAIL_STATIC(0x502fd0u,502);
}
B43a2ed:L43a2ed:{c.instructions+=4;NFSU2_TR(0x43a2ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43a2f1:{NFSU2_TR(0x43a2f1);
__builtin_memmove((R+20),(R+0),4);
}
B43a2f3:{NFSU2_TR(0x43a2f3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a2f5:{NFSU2_TR(0x43a2f5);
if(r1(R+518)){{goto L43a30e;}}
}
B43a2f7:L43a2f7:{c.instructions+=2;NFSU2_TR(0x43a2f7);
__builtin_memmove((R+0),(R+28),4);
}
B43a2f9:{NFSU2_TR(0x43a2f9);
__builtin_memmove((R+16),(R+16),4);
}
B43a300:L43a300:{c.instructions+=6;NFSU2_TR(0x43a300);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43a303:{NFSU2_TR(0x43a303);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43a305:{NFSU2_TR(0x43a305);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43a307:{NFSU2_TR(0x43a307);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B43a30a:{NFSU2_TR(0x43a30a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a30c:{NFSU2_TR(0x43a30c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a300u);}goto L43a300;}}
}
B43a30e:L43a30e:{c.instructions+=3;NFSU2_TR(0x43a30e);
__builtin_memmove((R+8),gp(0x827c3c),4);
}
B43a314:{NFSU2_TR(0x43a314);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a316:{NFSU2_TR(0x43a316);
if(r1(R+518)){{goto L43a33a;}}
}
B43a318:L43a318:{c.instructions+=4;NFSU2_TR(0x43a318);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a31b:{NFSU2_TR(0x43a31b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x29ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B43a31e:{NFSU2_TR(0x43a31e);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B43a320:{NFSU2_TR(0x43a320);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43a32d;}}
}
B43a322:L43a322:{c.instructions+=4;NFSU2_TR(0x43a322);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B43a325:{NFSU2_TR(0x43a325);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B43a328:{NFSU2_TR(0x43a328);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a32b:{NFSU2_TR(0x43a32b);
{goto L43a334;}
}
B43a32d:L43a32d:{c.instructions+=1;NFSU2_TR(0x43a32d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43a334:L43a334:{c.instructions+=3;NFSU2_TR(0x43a334);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43a336:{NFSU2_TR(0x43a336);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a338:{NFSU2_TR(0x43a338);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a318u);}goto L43a318;}}
}
B43a33a:L43a33a:{c.instructions+=6;NFSU2_TR(0x43a33a);
__builtin_memmove((R+0),gp(0x827af0),4);
}
B43a33f:{NFSU2_TR(0x43a33f);
__builtin_memmove((R+4),gp(0x827af4),4);
}
B43a345:{NFSU2_TR(0x43a345);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43a346:{NFSU2_TR(0x43a346);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a348:{NFSU2_TR(0x43a348);
__builtin_memmove(gp(0x827af0),(R+0),4);
}
B43a34d:{NFSU2_TR(0x43a34d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43a354;}}
}
B43a34f:L43a34f:{c.instructions+=1;NFSU2_TR(0x43a34f);
__builtin_memmove(gp(0x827af4),(R+0),4);
}
B43a354:L43a354:{c.instructions+=3;NFSU2_TR(0x43a354);
__builtin_memmove((R+8),gp(0x827ef8),4);
}
B43a35a:{NFSU2_TR(0x43a35a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a35b:{NFSU2_TR(0x43a35b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a360ull));
TAIL_STATIC(0x440e50u,440);
}
B43a360:L43a360:{c.instructions+=3;NFSU2_TR(0x43a360);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43a363:{NFSU2_TR(0x43a363);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43a365:{NFSU2_TR(0x43a365);
if(r1(R+518)){{goto L43a380;}}
}
B43a367:L43a367:{c.instructions+=7;NFSU2_TR(0x43a367);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43a36b:{NFSU2_TR(0x43a36b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B43a36e:{NFSU2_TR(0x43a36e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a36f:{NFSU2_TR(0x43a36f);
u8 U[4];
w4(U+0,u32(0x827c3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a374:{NFSU2_TR(0x43a374);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a375:{NFSU2_TR(0x43a375);
__builtin_memmove((R+4),(R+0),4);
}
B43a377:{NFSU2_TR(0x43a377);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a37cull));
TAIL_STATIC(0x437450u,437);
}
B43a37c:L43a37c:{c.instructions+=2;NFSU2_TR(0x43a37c);
__builtin_memmove((R+24),(R+0),4);
}
B43a37e:{NFSU2_TR(0x43a37e);
{goto L43a382;}
}
B43a380:L43a380:{c.instructions+=1;NFSU2_TR(0x43a380);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43a382:L43a382:{c.instructions+=3;NFSU2_TR(0x43a382);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B43a387:{NFSU2_TR(0x43a387);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43a389:{NFSU2_TR(0x43a389);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a3c8;}}
}
B43a38b:L43a38b:{c.instructions+=3;NFSU2_TR(0x43a38b);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B43a390:{NFSU2_TR(0x43a390);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43a392:{NFSU2_TR(0x43a392);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a3c8;}}
}
B43a394:L43a394:{c.instructions+=3;NFSU2_TR(0x43a394);
__builtin_memmove((R+0),gp(0x827f04),1);
}
B43a399:{NFSU2_TR(0x43a399);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43a39b:{NFSU2_TR(0x43a39b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a3a7;}}
}
B43a39d:L43a39d:{c.instructions+=2;NFSU2_TR(0x43a39d);
w4(R+4,u32(0x827ef0ull));
}
B43a3a2:{NFSU2_TR(0x43a3a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a3a7ull));
TAIL_STATIC(0x4385b0u,438);
}
B43a3a7:L43a3a7:{c.instructions+=2;NFSU2_TR(0x43a3a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43a3a9:{NFSU2_TR(0x43a3a9);
if(r1(R+518)){{goto L43a3b0;}}
}
B43a3ab:L43a3ab:{c.instructions+=2;NFSU2_TR(0x43a3ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43a3ae:{NFSU2_TR(0x43a3ae);
{goto L43a3b2;}
}
B43a3b0:L43a3b0:{c.instructions+=1;NFSU2_TR(0x43a3b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43a3b2:L43a3b2:{c.instructions+=5;NFSU2_TR(0x43a3b2);
__builtin_memmove((R+4),gp(0x827f24),4);
}
B43a3b8:{NFSU2_TR(0x43a3b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43a3ba:{NFSU2_TR(0x43a3ba);
__builtin_memmove(gp(0x827f24),(R+0),4);
}
B43a3bf:{NFSU2_TR(0x43a3bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a3c2:{NFSU2_TR(0x43a3c2);
u8 U[4];
w4(U+0,u32(0x827f20ull));
s4(u32(r4(R+0)),r4(U+0));
}
B43a3c8:L43a3c8:{c.instructions+=3;NFSU2_TR(0x43a3c8);
__builtin_memmove((R+24),gp(0x827c3c),4);
}
B43a3ce:{NFSU2_TR(0x43a3ce);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a3d0:{NFSU2_TR(0x43a3d0);
if(r1(R+518)){{goto L43a40f;}}
}
B43a3d2:L43a3d2:{c.instructions+=4;NFSU2_TR(0x43a3d2);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B43a3d7:{NFSU2_TR(0x43a3d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43a3d9:{NFSU2_TR(0x43a3d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43a3dc:{NFSU2_TR(0x43a3dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a405;}}
}
B43a3de:L43a3de:{c.instructions+=3;NFSU2_TR(0x43a3de);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B43a3e3:{NFSU2_TR(0x43a3e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43a3e5:{NFSU2_TR(0x43a3e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a405;}}
}
B43a3e7:L43a3e7:{c.instructions+=3;NFSU2_TR(0x43a3e7);
__builtin_memmove((R+0),gp(0x827f04),1);
}
B43a3ec:{NFSU2_TR(0x43a3ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43a3ee:{NFSU2_TR(0x43a3ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a3fa;}}
}
B43a3f0:L43a3f0:{c.instructions+=2;NFSU2_TR(0x43a3f0);
w4(R+4,u32(0x827ef0ull));
}
B43a3f5:{NFSU2_TR(0x43a3f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a3faull));
TAIL_STATIC(0x4385b0u,438);
}
B43a3fa:L43a3fa:{c.instructions+=3;NFSU2_TR(0x43a3fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a3fb:{NFSU2_TR(0x43a3fb);
w4(R+4,u32(0x827f18ull));
}
B43a400:{NFSU2_TR(0x43a400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a405ull));
TAIL_STATIC(0x479130u,479);
}
B43a405:L43a405:{c.instructions+=3;NFSU2_TR(0x43a405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B43a407:{NFSU2_TR(0x43a407);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a409:{NFSU2_TR(0x43a409);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a3d2u);}goto L43a3d2;}}
}
B43a40b:L43a40b:{c.instructions+=1;NFSU2_TR(0x43a40b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43a40f:L43a40f:{c.instructions+=4;NFSU2_TR(0x43a40f);
__builtin_memmove((R+0),gp(0x827c3c),4);
}
B43a414:{NFSU2_TR(0x43a414);
w4(R+24,u32(0x827c3cull));
}
B43a419:{NFSU2_TR(0x43a419);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a41b:{NFSU2_TR(0x43a41b);
if(r1(R+518)){{goto L43a441;}}
}
B43a41d:L43a41d:{c.instructions+=1;NFSU2_TR(0x43a41d);
__builtin_memmove((R+4),(R+4),4);
}
B43a420:L43a420:{c.instructions+=7;NFSU2_TR(0x43a420);
__builtin_memmove((R+0),gp(0x827c40),4);
}
B43a425:{NFSU2_TR(0x43a425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43a427:{NFSU2_TR(0x43a427);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43a42a:{NFSU2_TR(0x43a42a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B43a42c:{NFSU2_TR(0x43a42c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a42d:{NFSU2_TR(0x43a42d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a430:{NFSU2_TR(0x43a430);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a435ull));
TAIL_STATIC(0x440ef0u,440);
}
B43a435:L43a435:{c.instructions+=4;NFSU2_TR(0x43a435);
__builtin_memmove((R+0),gp(0x827c3c),4);
}
B43a43a:{NFSU2_TR(0x43a43a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43a43d:{NFSU2_TR(0x43a43d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a43f:{NFSU2_TR(0x43a43f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a420u);}goto L43a420;}}
}
B43a441:L43a441:{c.instructions+=2;NFSU2_TR(0x43a441);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a442:{NFSU2_TR(0x43a442);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a447ull));
TAIL_STATIC(0x575630u,575);
}
B43a447:L43a447:{c.instructions+=8;NFSU2_TR(0x43a447);
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
B43a44a:{NFSU2_TR(0x43a44a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43a44b:{NFSU2_TR(0x43a44b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43a44c:{NFSU2_TR(0x43a44c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43a44d:{NFSU2_TR(0x43a44d);
w4(R+0,u32(0x1ull));
}
B43a452:{NFSU2_TR(0x43a452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43a453:{NFSU2_TR(0x43a453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43a454:{NFSU2_TR(0x43a454);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43a455:L43a455:{c.instructions+=4;NFSU2_TR(0x43a455);
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
B43a457:{NFSU2_TR(0x43a457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43a458:{NFSU2_TR(0x43a458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43a459:{NFSU2_TR(0x43a459);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43a460:L43a460:{c.instructions+=3;NFSU2_TR(0x43a460);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a464:{NFSU2_TR(0x43a464);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x37090ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B43a46a:{NFSU2_TR(0x43a46a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a497;}}
}
B43a46c:L43a46c:{c.instructions+=3;NFSU2_TR(0x43a46c);
__builtin_memmove((R+4),gp(0x827adc),1);
}
B43a472:{NFSU2_TR(0x43a472);
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
B43a474:{NFSU2_TR(0x43a474);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a491;}}
}
B43a476:L43a476:{c.instructions+=3;NFSU2_TR(0x43a476);
__builtin_memmove((R+4),gp(0x86501c),4);
}
B43a47c:{NFSU2_TR(0x43a47c);
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
B43a47e:{NFSU2_TR(0x43a47e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a491;}}
}
B43a480:L43a480:{c.instructions+=5;NFSU2_TR(0x43a480);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
}
B43a483:{NFSU2_TR(0x43a483);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B43a486:{NFSU2_TR(0x43a486);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a487:{NFSU2_TR(0x43a487);
w4(R+4,u32(0x827ef0ull));
}
B43a48c:{NFSU2_TR(0x43a48c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a491ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a040u);}goto L43a040;}
}
B43a491:L43a491:{c.instructions+=2;NFSU2_TR(0x43a491);
w4(R+0,u32(0x1ull));
}
B43a496:{NFSU2_TR(0x43a496);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43a497:L43a497:{c.instructions+=2;NFSU2_TR(0x43a497);
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
B43a499:{NFSU2_TR(0x43a499);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43a4a0:L43a4a0:{c.instructions+=17;NFSU2_TR(0x43a4a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a4a1:{NFSU2_TR(0x43a4a1);
__builtin_memmove((R+20),(R+16),4);
}
B43a4a3:{NFSU2_TR(0x43a4a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B43a4a6:{NFSU2_TR(0x43a4a6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a4a8:{NFSU2_TR(0x43a4a8);
u8 U[4];
w4(U+0,u32(0x771f67ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a4ad:{NFSU2_TR(0x43a4ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a4b3:{NFSU2_TR(0x43a4b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a4b4:{NFSU2_TR(0x43a4b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a4bb:{NFSU2_TR(0x43a4bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x98ull))));
}
B43a4c1:{NFSU2_TR(0x43a4c1);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B43a4c6:{NFSU2_TR(0x43a4c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a4c7:{NFSU2_TR(0x43a4c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a4c8:{NFSU2_TR(0x43a4c8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43a4ca:{NFSU2_TR(0x43a4ca);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a4cc:{NFSU2_TR(0x43a4cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a4cd:{NFSU2_TR(0x43a4cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a4d1:{NFSU2_TR(0x43a4d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a861;}}
}
B43a4d7:L43a4d7:{c.instructions+=3;NFSU2_TR(0x43a4d7);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B43a4dc:{NFSU2_TR(0x43a4dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43a4de:{NFSU2_TR(0x43a4de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a861;}}
}
B43a4e4:L43a4e4:{c.instructions+=4;NFSU2_TR(0x43a4e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43a4e7:{NFSU2_TR(0x43a4e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a4ea:{NFSU2_TR(0x43a4ea);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a4ec:{NFSU2_TR(0x43a4ec);
if(r1(R+518)){{goto L43a528;}}
}
B43a4ee:L43a4ee:{c.instructions+=9;NFSU2_TR(0x43a4ee);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B43a4f3:{NFSU2_TR(0x43a4f3);
__builtin_memmove((R+28),(R+0),4);
}
B43a4f5:{NFSU2_TR(0x43a4f5);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B43a4fa:{NFSU2_TR(0x43a4fa);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B43a4fb:{NFSU2_TR(0x43a4fb);
w4(R+24,u32(0x64ull));
}
B43a500:{NFSU2_TR(0x43a500);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43a500);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x43a500);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B43a502:{NFSU2_TR(0x43a502);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x39ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B43a506:{NFSU2_TR(0x43a506);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43a508:{NFSU2_TR(0x43a508);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43a50e;}}
}
B43a50a:L43a50a:{c.instructions+=2;NFSU2_TR(0x43a50a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a50c:{NFSU2_TR(0x43a50c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43a526;}}
}
B43a50e:L43a50e:{c.instructions+=3;NFSU2_TR(0x43a50e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B43a512:{NFSU2_TR(0x43a512);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43a514:{NFSU2_TR(0x43a514);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43a861;}}
}
B43a51a:L43a51a:{c.instructions+=3;NFSU2_TR(0x43a51a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B43a51e:{NFSU2_TR(0x43a51e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a520:{NFSU2_TR(0x43a520);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43a861;}}
}
B43a526:L43a526:{c.instructions+=1;NFSU2_TR(0x43a526);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43a528:L43a528:{c.instructions+=4;NFSU2_TR(0x43a528);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a52b:{NFSU2_TR(0x43a52b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a52c:{NFSU2_TR(0x43a52c);
w4(R+4,u32(0x827ef0ull));
}
B43a531:{NFSU2_TR(0x43a531);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a536ull));
TAIL_STATIC(0x439ee0u,439);
}
B43a536:L43a536:{c.instructions+=4;NFSU2_TR(0x43a536);
__builtin_memmove((R+28),(R+0),4);
}
B43a538:{NFSU2_TR(0x43a538);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a53a:{NFSU2_TR(0x43a53a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a53e:{NFSU2_TR(0x43a53e);
if(r1(R+518)){{goto L43a861;}}
}
B43a544:L43a544:{c.instructions+=6;NFSU2_TR(0x43a544);
__builtin_memmove((R+0),gp(0x827ae8),4);
}
B43a549:{NFSU2_TR(0x43a549);
__builtin_memmove((R+4),gp(0x827aec),4);
}
B43a54f:{NFSU2_TR(0x43a54f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43a550:{NFSU2_TR(0x43a550);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a552:{NFSU2_TR(0x43a552);
__builtin_memmove(gp(0x827ae8),(R+0),4);
}
B43a557:{NFSU2_TR(0x43a557);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43a55e;}}
}
B43a559:L43a559:{c.instructions+=1;NFSU2_TR(0x43a559);
__builtin_memmove(gp(0x827aec),(R+0),4);
}
B43a55e:L43a55e:{c.instructions+=3;NFSU2_TR(0x43a55e);
__builtin_memmove((R+0),gp(0x827ef4),4);
}
B43a563:{NFSU2_TR(0x43a563);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a564:{NFSU2_TR(0x43a564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a569ull));
TAIL_STATIC(0x440e50u,440);
}
B43a569:L43a569:{c.instructions+=3;NFSU2_TR(0x43a569);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43a56c:{NFSU2_TR(0x43a56c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a56e:{NFSU2_TR(0x43a56e);
if(r1(R+518)){{goto L43a595;}}
}
B43a570:L43a570:{c.instructions+=12;NFSU2_TR(0x43a570);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43a573:{NFSU2_TR(0x43a573);
u8 U[4];
w4(U+0,u32(0x78638cull));
s4(u32(r4(R+0)),r4(U+0));
}
B43a579:{NFSU2_TR(0x43a579);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43a57b:{NFSU2_TR(0x43a57b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a57e:{NFSU2_TR(0x43a57e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a581:{NFSU2_TR(0x43a581);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a584:{NFSU2_TR(0x43a584);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a587:{NFSU2_TR(0x43a587);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a58a:{NFSU2_TR(0x43a58a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a58d:{NFSU2_TR(0x43a58d);
__builtin_memmove((R+24),(R+0),4);
}
B43a58f:{NFSU2_TR(0x43a58f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a593:{NFSU2_TR(0x43a593);
{goto L43a599;}
}
B43a595:L43a595:{c.instructions+=1;NFSU2_TR(0x43a595);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a599:L43a599:{c.instructions+=8;NFSU2_TR(0x43a599);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43a59c:{NFSU2_TR(0x43a59c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a59f:{NFSU2_TR(0x43a59f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43a5a2:{NFSU2_TR(0x43a5a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a5a4:{NFSU2_TR(0x43a5a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a5a7:{NFSU2_TR(0x43a5a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B43a5ae:{NFSU2_TR(0x43a5ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a5b2:{NFSU2_TR(0x43a5b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a5b7ull));
TAIL_STATIC(0x43be80u,43b);
}
B43a5b7:L43a5b7:{c.instructions+=3;NFSU2_TR(0x43a5b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B43a5be:{NFSU2_TR(0x43a5be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a5bf:{NFSU2_TR(0x43a5bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a5c4ull));
TAIL_STATIC(0x575620u,575);
}
B43a5c4:L43a5c4:{c.instructions+=7;NFSU2_TR(0x43a5c4);
__builtin_memmove((R+8),(R+0),4);
}
B43a5c6:{NFSU2_TR(0x43a5c6);
__builtin_memmove((R+4),(R+28),4);
}
B43a5c8:{NFSU2_TR(0x43a5c8);
__builtin_memmove((R+28),(R+8),4);
}
B43a5ca:{NFSU2_TR(0x43a5ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a5ce:{NFSU2_TR(0x43a5ce);
__builtin_memmove((R+8),(R+4),4);
}
B43a5d0:{NFSU2_TR(0x43a5d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B43a5d3:{NFSU2_TR(0x43a5d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43a5d5:L43a5d5:{c.instructions+=1;NFSU2_TR(0x43a5d5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L43a5d7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a5d5u);}goto L43a5d5;}
}
B43a5d7:L43a5d7:{c.instructions+=2;NFSU2_TR(0x43a5d7);
__builtin_memmove((R+4),(R+8),4);
}
B43a5d9:{NFSU2_TR(0x43a5d9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B43a5dc:L43a5dc:{c.instructions+=1;NFSU2_TR(0x43a5dc);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L43a5de;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a5dcu);}goto L43a5dc;}
}
B43a5de:L43a5de:{c.instructions+=4;NFSU2_TR(0x43a5de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a5e1:{NFSU2_TR(0x43a5e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43a5e4:{NFSU2_TR(0x43a5e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43a5e7:{NFSU2_TR(0x43a5e7);
if(r1(R+518)){{goto L43a5f8;}}
}
B43a5e9:L43a5e9:{c.instructions+=2;NFSU2_TR(0x43a5e9);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a5ee:{NFSU2_TR(0x43a5ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a5f3ull));
TAIL_STATIC(0x43c1f0u,43c);
}
B43a5f3:L43a5f3:{c.instructions+=2;NFSU2_TR(0x43a5f3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43a5f5:{NFSU2_TR(0x43a5f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43a5f8:L43a5f8:{c.instructions+=3;NFSU2_TR(0x43a5f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a5fb:{NFSU2_TR(0x43a5fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43a5fe:{NFSU2_TR(0x43a5fe);
if(r1(R+518)){{goto L43a60f;}}
}
B43a600:L43a600:{c.instructions+=2;NFSU2_TR(0x43a600);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a605:{NFSU2_TR(0x43a605);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a60aull));
TAIL_STATIC(0x43c1f0u,43c);
}
B43a60a:L43a60a:{c.instructions+=2;NFSU2_TR(0x43a60a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43a60c:{NFSU2_TR(0x43a60c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43a60f:L43a60f:{c.instructions+=4;NFSU2_TR(0x43a60f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a612:{NFSU2_TR(0x43a612);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B43a614:{NFSU2_TR(0x43a614);
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
B43a616:{NFSU2_TR(0x43a616);
if(r1(R+518)){{goto L43a664;}}
}
B43a618:L43a618:{c.instructions+=2;NFSU2_TR(0x43a618);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a619:{NFSU2_TR(0x43a619);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a61eull));
TAIL_STATIC(0x432040u,432);
}
B43a61e:L43a61e:{c.instructions+=3;NFSU2_TR(0x43a61e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43a621:{NFSU2_TR(0x43a621);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a623:{NFSU2_TR(0x43a623);
if(r1(R+518)){{goto L43a664;}}
}
B43a625:L43a625:{c.instructions+=2;NFSU2_TR(0x43a625);
u8 U[4];
w4(U+0,u32(0xb0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a62a:{NFSU2_TR(0x43a62a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a62full));
TAIL_STATIC(0x575620u,575);
}
B43a62f:L43a62f:{c.instructions+=5;NFSU2_TR(0x43a62f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43a632:{NFSU2_TR(0x43a632);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a636:{NFSU2_TR(0x43a636);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a638:{NFSU2_TR(0x43a638);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a63f:{NFSU2_TR(0x43a63f);
if(r1(R+518)){{goto L43a64a;}}
}
B43a641:L43a641:{c.instructions+=2;NFSU2_TR(0x43a641);
__builtin_memmove((R+4),(R+0),4);
}
B43a643:{NFSU2_TR(0x43a643);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a648ull));
TAIL_STATIC(0x432a70u,432);
}
B43a648:L43a648:{c.instructions+=1;NFSU2_TR(0x43a648);
__builtin_memmove((R+28),(R+0),4);
}
B43a64a:L43a64a:{c.instructions+=6;NFSU2_TR(0x43a64a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a64d:{NFSU2_TR(0x43a64d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a64e:{NFSU2_TR(0x43a64e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a64f:{NFSU2_TR(0x43a64f);
__builtin_memmove((R+4),(R+28),4);
}
B43a651:{NFSU2_TR(0x43a651);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B43a65c:{NFSU2_TR(0x43a65c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a661ull));
TAIL_STATIC(0x432ac0u,432);
}
B43a661:L43a661:{c.instructions+=1;NFSU2_TR(0x43a661);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a664:L43a664:{c.instructions+=6;NFSU2_TR(0x43a664);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43a668:{NFSU2_TR(0x43a668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43a66a:{NFSU2_TR(0x43a66a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a66c:{NFSU2_TR(0x43a66c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43a674:{NFSU2_TR(0x43a674);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a678:{NFSU2_TR(0x43a678);
if(r1(R+518)){{goto L43a81d;}}
}
B43a67e:L43a67e:{c.instructions+=3;NFSU2_TR(0x43a67e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43a682:{NFSU2_TR(0x43a682);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a686:{NFSU2_TR(0x43a686);
{goto L43a690;}
}
B43a688:L43a688:{c.instructions+=2;NFSU2_TR(0x43a688);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a68c:{NFSU2_TR(0x43a68c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43a690:L43a690:{c.instructions+=6;NFSU2_TR(0x43a690);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43a693:{NFSU2_TR(0x43a693);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x29ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43a696:{NFSU2_TR(0x43a696);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0xffull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0xffull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43a698:{NFSU2_TR(0x43a698);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a69c:{NFSU2_TR(0x43a69c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43a6a4:{NFSU2_TR(0x43a6a4);
if(r1(R+518)){{goto L43a6c1;}}
}
B43a6a6:L43a6a6:{c.instructions+=4;NFSU2_TR(0x43a6a6);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B43a6a9:{NFSU2_TR(0x43a6a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B43a6ac:{NFSU2_TR(0x43a6ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43a6ae:{NFSU2_TR(0x43a6ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a6b1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43a6b1:L43a6b1:{c.instructions+=4;NFSU2_TR(0x43a6b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x29ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B43a6b5:{NFSU2_TR(0x43a6b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B43a6b8:{NFSU2_TR(0x43a6b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43a6ba:{NFSU2_TR(0x43a6ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a6bdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43a6bd:L43a6bd:{c.instructions+=1;NFSU2_TR(0x43a6bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a6c1:L43a6c1:{c.instructions+=6;NFSU2_TR(0x43a6c1);
__builtin_memmove((R+0),gp(0x827ae0),4);
}
B43a6c6:{NFSU2_TR(0x43a6c6);
__builtin_memmove((R+4),gp(0x827ae4),4);
}
B43a6cc:{NFSU2_TR(0x43a6cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43a6cd:{NFSU2_TR(0x43a6cd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a6cf:{NFSU2_TR(0x43a6cf);
__builtin_memmove(gp(0x827ae0),(R+0),4);
}
B43a6d4:{NFSU2_TR(0x43a6d4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43a6db;}}
}
B43a6d6:L43a6d6:{c.instructions+=1;NFSU2_TR(0x43a6d6);
__builtin_memmove(gp(0x827ae4),(R+0),4);
}
B43a6db:L43a6db:{c.instructions+=3;NFSU2_TR(0x43a6db);
__builtin_memmove((R+0),gp(0x827ef0),4);
}
B43a6e0:{NFSU2_TR(0x43a6e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a6e1:{NFSU2_TR(0x43a6e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a6e6ull));
TAIL_STATIC(0x440e50u,440);
}
B43a6e6:L43a6e6:{c.instructions+=4;NFSU2_TR(0x43a6e6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B43a6e8:{NFSU2_TR(0x43a6e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43a6eb:{NFSU2_TR(0x43a6eb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a6ed:{NFSU2_TR(0x43a6ed);
if(r1(R+518)){{goto L43a709;}}
}
B43a6ef:L43a6ef:{c.instructions+=8;NFSU2_TR(0x43a6ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a6f2:{NFSU2_TR(0x43a6f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a6f5:{NFSU2_TR(0x43a6f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a6f8:{NFSU2_TR(0x43a6f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a6fb:{NFSU2_TR(0x43a6fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a6fe:{NFSU2_TR(0x43a6fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a701:{NFSU2_TR(0x43a701);
u8 U[4];
w4(U+0,u32(0x785dccull));
s4(u32(r4(R+0)),r4(U+0));
}
B43a707:{NFSU2_TR(0x43a707);
__builtin_memmove((R+12),(R+0),4);
}
B43a709:L43a709:{c.instructions+=7;NFSU2_TR(0x43a709);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a70d:{NFSU2_TR(0x43a70d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43a70f:{NFSU2_TR(0x43a70f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a712:{NFSU2_TR(0x43a712);
__builtin_memmove((R+24),(R+28),4);
}
B43a714:{NFSU2_TR(0x43a714);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B43a717:{NFSU2_TR(0x43a717);
w4(R+4,u32(0x1cull));
}
B43a71c:{NFSU2_TR(0x43a71c);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B43a720:L43a720:{c.instructions+=1;NFSU2_TR(0x43a720);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L43a722;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a720u);}goto L43a720;}
}
B43a722:L43a722:{c.instructions+=5;NFSU2_TR(0x43a722);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43a725:{NFSU2_TR(0x43a725);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a729:{NFSU2_TR(0x43a729);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a72c:{NFSU2_TR(0x43a72c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43a72e:{NFSU2_TR(0x43a72e);
if(r1(R+518)){{goto L43a734;}}
}
B43a730:L43a730:{c.instructions+=1;NFSU2_TR(0x43a730);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B43a734:L43a734:{c.instructions+=12;NFSU2_TR(0x43a734);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43a737:{NFSU2_TR(0x43a737);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a73a:{NFSU2_TR(0x43a73a);
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
B43a73c:{NFSU2_TR(0x43a73c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43a73f:{NFSU2_TR(0x43a73f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43a743:{NFSU2_TR(0x43a743);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a747:{NFSU2_TR(0x43a747);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a74a:{NFSU2_TR(0x43a74a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43a74d:{NFSU2_TR(0x43a74d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a751:{NFSU2_TR(0x43a751);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a755:{NFSU2_TR(0x43a755);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a758:{NFSU2_TR(0x43a758);
if(r1(R+518)){{goto L43a763;}}
}
B43a75a:L43a75a:{c.instructions+=2;NFSU2_TR(0x43a75a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43a761:{NFSU2_TR(0x43a761);
{goto L43a771;}
}
B43a763:L43a763:{c.instructions+=2;NFSU2_TR(0x43a763);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B43a768:{NFSU2_TR(0x43a768);
if(r1(R+518)){{goto L43a771;}}
}
B43a76a:L43a76a:{c.instructions+=1;NFSU2_TR(0x43a76a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43a771:L43a771:{c.instructions+=7;NFSU2_TR(0x43a771);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a775:{NFSU2_TR(0x43a775);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43a777:{NFSU2_TR(0x43a777);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a778:{NFSU2_TR(0x43a778);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B43a77c:{NFSU2_TR(0x43a77c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a77d:{NFSU2_TR(0x43a77d);
__builtin_memmove((R+4),(R+12),4);
}
B43a77f:{NFSU2_TR(0x43a77f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a782ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43a782:L43a782:{c.instructions+=5;NFSU2_TR(0x43a782);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43a786:{NFSU2_TR(0x43a786);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a789:{NFSU2_TR(0x43a789);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43a78d:{NFSU2_TR(0x43a78d);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
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
B43a790:{NFSU2_TR(0x43a790);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a7c4;}}
}
B43a792:L43a792:{c.instructions+=4;NFSU2_TR(0x43a792);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43a794:{NFSU2_TR(0x43a794);
__builtin_memmove((R+4),(R+12),4);
}
B43a796:{NFSU2_TR(0x43a796);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a79a:{NFSU2_TR(0x43a79a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a79dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43a79d:L43a79d:{c.instructions+=6;NFSU2_TR(0x43a79d);
__builtin_memmove((R+28),(R+0),4);
}
B43a79f:{NFSU2_TR(0x43a79f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43a7a2:{NFSU2_TR(0x43a7a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a7a3:{NFSU2_TR(0x43a7a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43a7a6:{NFSU2_TR(0x43a7a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a7a7:{NFSU2_TR(0x43a7a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a7acull));
TAIL_STATIC(0x4012b0u,401);
}
B43a7ac:L43a7ac:{c.instructions+=4;NFSU2_TR(0x43a7ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a7b2:{NFSU2_TR(0x43a7b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B43a7b5:{NFSU2_TR(0x43a7b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43a7b7:{NFSU2_TR(0x43a7b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a7c0;}}
}
B43a7b9:L43a7b9:{c.instructions+=2;NFSU2_TR(0x43a7b9);
__builtin_memmove((R+4),(R+28),4);
}
B43a7bb:{NFSU2_TR(0x43a7bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a7c0ull));
TAIL_STATIC(0x6147e0u,614);
}
B43a7c0:L43a7c0:{c.instructions+=1;NFSU2_TR(0x43a7c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43a7c4:L43a7c4:{c.instructions+=1;NFSU2_TR(0x43a7c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a7c9ull));
TAIL_STATIC(0x440ec0u,440);
}
B43a7c9:L43a7c9:{c.instructions+=2;NFSU2_TR(0x43a7c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43a7cb:{NFSU2_TR(0x43a7cb);
if(r1(R+518)){{goto L43a7d2;}}
}
B43a7cd:L43a7cd:{c.instructions+=2;NFSU2_TR(0x43a7cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a7d0:{NFSU2_TR(0x43a7d0);
{goto L43a7d4;}
}
B43a7d2:L43a7d2:{c.instructions+=1;NFSU2_TR(0x43a7d2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43a7d4:L43a7d4:{c.instructions+=9;NFSU2_TR(0x43a7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43a7d7:{NFSU2_TR(0x43a7d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43a7da:{NFSU2_TR(0x43a7da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B43a7dc:{NFSU2_TR(0x43a7dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a7df:{NFSU2_TR(0x43a7df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a7e2:{NFSU2_TR(0x43a7e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43a7e4:{NFSU2_TR(0x43a7e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a7e7:{NFSU2_TR(0x43a7e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43a7e9:{NFSU2_TR(0x43a7e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a800;}}
}
B43a7eb:L43a7eb:{c.instructions+=2;NFSU2_TR(0x43a7eb);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B43a7f0:{NFSU2_TR(0x43a7f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a800;}}
}
B43a7f2:L43a7f2:{c.instructions+=3;NFSU2_TR(0x43a7f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43a7f5:{NFSU2_TR(0x43a7f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43a7f7:{NFSU2_TR(0x43a7f7);
if(r1(R+518)){{goto L43a800;}}
}
B43a7f9:L43a7f9:{c.instructions+=1;NFSU2_TR(0x43a7f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43a800:L43a800:{c.instructions+=8;NFSU2_TR(0x43a800);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43a804:{NFSU2_TR(0x43a804);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43a806:{NFSU2_TR(0x43a806);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43a80a:{NFSU2_TR(0x43a80a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43a80e:{NFSU2_TR(0x43a80e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B43a811:{NFSU2_TR(0x43a811);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43a813:{NFSU2_TR(0x43a813);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a817:{NFSU2_TR(0x43a817);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a688u);}goto L43a688;}}
}
B43a81d:L43a81d:{c.instructions+=13;NFSU2_TR(0x43a81d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43a821:{NFSU2_TR(0x43a821);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43a825:{NFSU2_TR(0x43a825);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a828:{NFSU2_TR(0x43a828);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43a82b:{NFSU2_TR(0x43a82b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B43a82e:{NFSU2_TR(0x43a82e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43a831:{NFSU2_TR(0x43a831);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B43a833:{NFSU2_TR(0x43a833);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a836:{NFSU2_TR(0x43a836);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a839:{NFSU2_TR(0x43a839);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43a83b:{NFSU2_TR(0x43a83b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a83f:{NFSU2_TR(0x43a83f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a840:{NFSU2_TR(0x43a840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a845ull));
TAIL_STATIC(0x575630u,575);
}
B43a845:L43a845:{c.instructions+=10;NFSU2_TR(0x43a845);
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
B43a848:{NFSU2_TR(0x43a848);
__builtin_memmove((R+0),(R+24),4);
}
B43a84a:{NFSU2_TR(0x43a84a);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43a851:{NFSU2_TR(0x43a851);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a858:{NFSU2_TR(0x43a858);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43a859:{NFSU2_TR(0x43a859);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43a85a:{NFSU2_TR(0x43a85a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43a85b:{NFSU2_TR(0x43a85b);
__builtin_memmove((R+16),(R+20),4);
}
B43a85d:{NFSU2_TR(0x43a85d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43a85e:{NFSU2_TR(0x43a85e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43a861:L43a861:{c.instructions+=9;NFSU2_TR(0x43a861);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43a868:{NFSU2_TR(0x43a868);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43a869:{NFSU2_TR(0x43a869);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43a86a:{NFSU2_TR(0x43a86a);
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
B43a86c:{NFSU2_TR(0x43a86c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a873:{NFSU2_TR(0x43a873);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43a874:{NFSU2_TR(0x43a874);
__builtin_memmove((R+16),(R+20),4);
}
B43a876:{NFSU2_TR(0x43a876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43a877:{NFSU2_TR(0x43a877);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43a880:L43a880:{c.instructions+=10;NFSU2_TR(0x43a880);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a881:{NFSU2_TR(0x43a881);
__builtin_memmove((R+20),(R+16),4);
}
B43a883:{NFSU2_TR(0x43a883);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B43a886:{NFSU2_TR(0x43a886);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B43a889:{NFSU2_TR(0x43a889);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B43a88e:{NFSU2_TR(0x43a88e);
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
B43a890:{NFSU2_TR(0x43a890);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a891:{NFSU2_TR(0x43a891);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a892:{NFSU2_TR(0x43a892);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a893:{NFSU2_TR(0x43a893);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a994;}}
}
B43a899:L43a899:{c.instructions+=3;NFSU2_TR(0x43a899);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B43a89e:{NFSU2_TR(0x43a89e);
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
B43a8a0:{NFSU2_TR(0x43a8a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a994;}}
}
B43a8a6:L43a8a6:{c.instructions+=2;NFSU2_TR(0x43a8a6);
w4(R+4,u32(0x827ef0ull));
}
B43a8ab:{NFSU2_TR(0x43a8ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a8b0ull));
TAIL_STATIC(0x4385b0u,438);
}
B43a8b0:L43a8b0:{c.instructions+=3;NFSU2_TR(0x43a8b0);
__builtin_memmove((R+0),gp(0x827b94),4);
}
B43a8b5:{NFSU2_TR(0x43a8b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43a8b7:{NFSU2_TR(0x43a8b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a8c3;}}
}
B43a8b9:L43a8b9:{c.instructions+=2;NFSU2_TR(0x43a8b9);
w4(R+4,u32(0x827b88ull));
}
B43a8be:{NFSU2_TR(0x43a8be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a8c3ull));
TAIL_STATIC(0x435d60u,435);
}
B43a8c3:L43a8c3:{c.instructions+=3;NFSU2_TR(0x43a8c3);
__builtin_memmove((R+12),gp(0x827b94),4);
}
B43a8c9:{NFSU2_TR(0x43a8c9);
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
B43a8cb:{NFSU2_TR(0x43a8cb);
if(r1(R+518)){{goto L43a994;}}
}
B43a8d1:L43a8d1:{c.instructions+=3;NFSU2_TR(0x43a8d1);
__builtin_memmove((R+28),gp(0x827f28),4);
}
B43a8d7:{NFSU2_TR(0x43a8d7);
w4(R+4,u32(0x827f28ull));
}
B43a8dc:{NFSU2_TR(0x43a8dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a8e1ull));
TAIL_STATIC(0x502fd0u,502);
}
B43a8e1:L43a8e1:{c.instructions+=3;NFSU2_TR(0x43a8e1);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B43a8e3:{NFSU2_TR(0x43a8e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a8e7:{NFSU2_TR(0x43a8e7);
if(r1(R+518)){{goto L43a994;}}
}
B43a8ed:L43a8ed:{c.instructions+=1;NFSU2_TR(0x43a8ed);
__builtin_memmove((R+4),(R+4),4);
}
B43a8f0:L43a8f0:{c.instructions+=1;NFSU2_TR(0x43a8f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a8f5ull));
TAIL_STATIC(0x4022c0u,402);
}
B43a8f5:L43a8f5:{c.instructions+=4;NFSU2_TR(0x43a8f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43a8f8:{NFSU2_TR(0x43a8f8);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43a8fc:{NFSU2_TR(0x43a8fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a8fd:{NFSU2_TR(0x43a8fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a902ull));
TAIL_STATIC(0x43c780u,43c);
}
B43a902:L43a902:{c.instructions+=15;NFSU2_TR(0x43a902);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43a905:{NFSU2_TR(0x43a905);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43a908:{NFSU2_TR(0x43a908);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43a90b:{NFSU2_TR(0x43a90b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43a90e:{NFSU2_TR(0x43a90e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43a910:{NFSU2_TR(0x43a910);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43a914:{NFSU2_TR(0x43a914);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43a917:{NFSU2_TR(0x43a917);
__builtin_memmove((R+0),(R+4),4);
}
B43a919:{NFSU2_TR(0x43a919);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a91d:{NFSU2_TR(0x43a91d);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43a921:{NFSU2_TR(0x43a921);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a922:{NFSU2_TR(0x43a922);
__builtin_memmove((R+4),(R+12),4);
}
B43a924:{NFSU2_TR(0x43a924);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a928:{NFSU2_TR(0x43a928);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a92c:{NFSU2_TR(0x43a92c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a931ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a4a0u);}goto L43a4a0;}
}
B43a931:L43a931:{c.instructions+=3;NFSU2_TR(0x43a931);
__builtin_memmove((R+24),(R+0),4);
}
B43a933:{NFSU2_TR(0x43a933);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43a935:{NFSU2_TR(0x43a935);
if(r1(R+518)){{goto L43a988;}}
}
B43a937:L43a937:{c.instructions+=2;NFSU2_TR(0x43a937);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B43a93b:{NFSU2_TR(0x43a93b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a988;}}
}
B43a93d:L43a93d:{c.instructions+=3;NFSU2_TR(0x43a93d);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B43a942:{NFSU2_TR(0x43a942);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43a944:{NFSU2_TR(0x43a944);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a96a;}}
}
B43a946:L43a946:{c.instructions+=3;NFSU2_TR(0x43a946);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B43a94b:{NFSU2_TR(0x43a94b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43a94d:{NFSU2_TR(0x43a94d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a96a;}}
}
B43a94f:L43a94f:{c.instructions+=3;NFSU2_TR(0x43a94f);
__builtin_memmove((R+0),gp(0x827f04),1);
}
B43a954:{NFSU2_TR(0x43a954);
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
B43a956:{NFSU2_TR(0x43a956);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a962;}}
}
B43a958:L43a958:{c.instructions+=2;NFSU2_TR(0x43a958);
w4(R+4,u32(0x827ef0ull));
}
B43a95d:{NFSU2_TR(0x43a95d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a962ull));
TAIL_STATIC(0x4385b0u,438);
}
B43a962:L43a962:{c.instructions+=2;NFSU2_TR(0x43a962);
__builtin_memmove((R+4),gp(0x827f14),4);
}
B43a968:{NFSU2_TR(0x43a968);
{goto L43a96c;}
}
B43a96a:L43a96a:{c.instructions+=1;NFSU2_TR(0x43a96a);
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
B43a96c:L43a96c:{c.instructions+=9;NFSU2_TR(0x43a96c);
__builtin_memmove((R+8),gp(0x89e7a4),4);
}
B43a972:{NFSU2_TR(0x43a972);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a976:{NFSU2_TR(0x43a976);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43a978:{NFSU2_TR(0x43a978);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B43a97c:{NFSU2_TR(0x43a97c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a97d:{NFSU2_TR(0x43a97d);
__builtin_memmove((R+8),gp(0x827db0),4);
}
B43a983:{NFSU2_TR(0x43a983);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a984:{NFSU2_TR(0x43a984);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a985:{NFSU2_TR(0x43a985);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a988ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43a988:L43a988:{c.instructions+=3;NFSU2_TR(0x43a988);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B43a98a:{NFSU2_TR(0x43a98a);
u8 U[22];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B43a98e:{NFSU2_TR(0x43a98e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a8f0u);}goto L43a8f0;}}
}
B43a994:L43a994:{c.instructions+=6;NFSU2_TR(0x43a994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43a995:{NFSU2_TR(0x43a995);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43a996:{NFSU2_TR(0x43a996);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43a997:{NFSU2_TR(0x43a997);
__builtin_memmove((R+16),(R+20),4);
}
B43a999:{NFSU2_TR(0x43a999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43a99a:{NFSU2_TR(0x43a99a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43a9a0:L43a9a0:{c.instructions+=14;NFSU2_TR(0x43a9a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a9a2:{NFSU2_TR(0x43a9a2);
u8 U[4];
w4(U+0,u32(0x771f8bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a9a7:{NFSU2_TR(0x43a9a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a9ad:{NFSU2_TR(0x43a9ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a9ae:{NFSU2_TR(0x43a9ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a9b5:{NFSU2_TR(0x43a9b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a9b6:{NFSU2_TR(0x43a9b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a9b7:{NFSU2_TR(0x43a9b7);
__builtin_memmove((R+24),(R+4),4);
}
B43a9b9:{NFSU2_TR(0x43a9b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43a9bd:{NFSU2_TR(0x43a9bd);
u8 U[4];
w4(U+0,u32(0x786328ull));
s4(u32(r4(R+24)),r4(U+0));
}
B43a9c3:{NFSU2_TR(0x43a9c3);
__builtin_memmove((R+0),gp(0x827adc),1);
}
B43a9c8:{NFSU2_TR(0x43a9c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43a9ca:{NFSU2_TR(0x43a9ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43a9d2:{NFSU2_TR(0x43a9d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43a9dd;}}
}
B43a9d4:L43a9d4:{c.instructions+=3;NFSU2_TR(0x43a9d4);
__builtin_memmove((R+0),gp(0x86501c),4);
}
B43a9d9:{NFSU2_TR(0x43a9d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43a9db:{NFSU2_TR(0x43a9db);
if(r1(R+518)){{goto L43a9e4;}}
}
B43a9dd:L43a9dd:{c.instructions+=3;NFSU2_TR(0x43a9dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43a9e0:{NFSU2_TR(0x43a9e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43a9e2:{NFSU2_TR(0x43a9e2);
if(r1(R+518)){{goto L43aa12;}}
}
B43a9e4:L43a9e4:{c.instructions+=3;NFSU2_TR(0x43a9e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43a9e7:{NFSU2_TR(0x43a9e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43a9e9:{NFSU2_TR(0x43a9e9);
if(r1(R+518)){{goto L43aa04;}}
}
B43a9eb:L43a9eb:{c.instructions+=1;NFSU2_TR(0x43a9eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a9f0ull));
TAIL_STATIC(0x432130u,432);
}
B43a9f0:L43a9f0:{c.instructions+=3;NFSU2_TR(0x43a9f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43a9f3:{NFSU2_TR(0x43a9f3);
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
B43a9f5:{NFSU2_TR(0x43a9f5);
if(r1(R+518)){{goto L43a9fd;}}
}
B43a9f7:L43a9f7:{c.instructions+=3;NFSU2_TR(0x43a9f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43a9f9:{NFSU2_TR(0x43a9f9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43a9fb:{NFSU2_TR(0x43a9fb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43a9fdull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B43a9fd:L43a9fd:{c.instructions+=1;NFSU2_TR(0x43a9fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43aa04:L43aa04:{c.instructions+=4;NFSU2_TR(0x43aa04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43aa06:{NFSU2_TR(0x43aa06);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43aa08:{NFSU2_TR(0x43aa08);
w4(R+4,u32(0x827ef0ull));
}
B43aa0d:{NFSU2_TR(0x43aa0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43aa12ull));
TAIL_STATIC(0x438660u,438);
}
B43aa12:L43aa12:{c.instructions+=3;NFSU2_TR(0x43aa12);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43aa15:{NFSU2_TR(0x43aa15);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B43aa1d:{NFSU2_TR(0x43aa1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43aa22ull));
TAIL_STATIC(0x479100u,479);
}
B43aa22:L43aa22:{c.instructions+=5;NFSU2_TR(0x43aa22);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43aa26:{NFSU2_TR(0x43aa26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43aa27:{NFSU2_TR(0x43aa27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43aa2e:{NFSU2_TR(0x43aa2e);
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
B43aa31:{NFSU2_TR(0x43aa31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43aa40:L43aa40:{c.instructions+=4;NFSU2_TR(0x43aa40);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43aa44:{NFSU2_TR(0x43aa44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43aa45:{NFSU2_TR(0x43aa45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43aa46:{NFSU2_TR(0x43aa46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43aa4bull));
TAIL_STATIC(0x432490u,432);
}
B43aa4b:L43aa4b:{c.instructions+=3;NFSU2_TR(0x43aa4b);
__builtin_memmove((R+24),(R+0),4);
}
B43aa4d:{NFSU2_TR(0x43aa4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43aa4f:{NFSU2_TR(0x43aa4f);
if(r1(R+518)){{goto L43aa98;}}
}
B43aa51:L43aa51:{c.instructions+=3;NFSU2_TR(0x43aa51);
__builtin_memmove((R+0),gp(0x827c38),1);
}
B43aa56:{NFSU2_TR(0x43aa56);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43aa58:{NFSU2_TR(0x43aa58);
if(r1(R+518)){{goto L43aa65;}}
}
B43aa5a:L43aa5a:{c.instructions+=2;NFSU2_TR(0x43aa5a);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B43aa60:{NFSU2_TR(0x43aa60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43aa65ull));
TAIL_STATIC(0x4791d0u,479);
}
B43aa65:L43aa65:{c.instructions+=3;NFSU2_TR(0x43aa65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43aa68:{NFSU2_TR(0x43aa68);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43aa6b:{NFSU2_TR(0x43aa6b);
if(r1(R+518)){{goto L43aa7d;}}
}
B43aa6d:L43aa6d:{c.instructions+=2;NFSU2_TR(0x43aa6d);
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
B43aa6e:{NFSU2_TR(0x43aa6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43aa92;}}
}
B43aa70:L43aa70:{c.instructions+=4;NFSU2_TR(0x43aa70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43aa77:{NFSU2_TR(0x43aa77);
w1(R+0,u8(0x1ull));
}
B43aa79:{NFSU2_TR(0x43aa79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43aa7a:{NFSU2_TR(0x43aa7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43aa7d:L43aa7d:{c.instructions+=3;NFSU2_TR(0x43aa7d);
__builtin_memmove((R+4),(R+24),4);
}
B43aa7f:{NFSU2_TR(0x43aa7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43aa86:{NFSU2_TR(0x43aa86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43aa8bull));
TAIL_STATIC(0x437910u,437);
}
B43aa8b:L43aa8b:{c.instructions+=1;NFSU2_TR(0x43aa8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43aa92:L43aa92:{c.instructions+=3;NFSU2_TR(0x43aa92);
w1(R+0,u8(0x1ull));
}
B43aa94:{NFSU2_TR(0x43aa94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43aa95:{NFSU2_TR(0x43aa95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43aa98:L43aa98:{c.instructions+=3;NFSU2_TR(0x43aa98);
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
B43aa9a:{NFSU2_TR(0x43aa9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43aa9b:{NFSU2_TR(0x43aa9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43aaa0:L43aaa0:{c.instructions+=8;NFSU2_TR(0x43aaa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43aaa3:{NFSU2_TR(0x43aaa3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43aaa4:{NFSU2_TR(0x43aaa4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43aaa5:{NFSU2_TR(0x43aaa5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43aaa6:{NFSU2_TR(0x43aaa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43aaa9:{NFSU2_TR(0x43aaa9);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B43aaab:{NFSU2_TR(0x43aaab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43aaad:{NFSU2_TR(0x43aaad);
if(r1(R+518)){{goto L43aab4;}}
}
B43aaaf:L43aaaf:{c.instructions+=2;NFSU2_TR(0x43aaaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43aab2:{NFSU2_TR(0x43aab2);
{goto L43aab6;}
}
B43aab4:L43aab4:{c.instructions+=1;NFSU2_TR(0x43aab4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43aab6:L43aab6:{c.instructions+=2;NFSU2_TR(0x43aab6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43aab8:{NFSU2_TR(0x43aab8);
if(r1(R+518)){{goto L43aabf;}}
}
B43aaba:L43aaba:{c.instructions+=2;NFSU2_TR(0x43aaba);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43aabd:{NFSU2_TR(0x43aabd);
{goto L43aac1;}
}
B43aabf:L43aabf:{c.instructions+=1;NFSU2_TR(0x43aabf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43aac1:L43aac1:{c.instructions+=2;NFSU2_TR(0x43aac1);
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
B43aac3:{NFSU2_TR(0x43aac3);
if(r1(R+518)){{goto L43ab0b;}}
}
B43aac5:L43aac5:{c.instructions+=3;NFSU2_TR(0x43aac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43aac8:{NFSU2_TR(0x43aac8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43aacb:{NFSU2_TR(0x43aacb);
if(r1(R+518)){{goto L43aada;}}
}
B43aacd:L43aacd:{c.instructions+=2;NFSU2_TR(0x43aacd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43aace:{NFSU2_TR(0x43aace);
if(r1(R+518)){{goto L43aada;}}
}
B43aad0:L43aad0:{c.instructions+=2;NFSU2_TR(0x43aad0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43aad1:{NFSU2_TR(0x43aad1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43aada;}}
}
B43aad3:L43aad3:{c.instructions+=1;NFSU2_TR(0x43aad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43aada:L43aada:{c.instructions+=3;NFSU2_TR(0x43aada);
__builtin_memmove((R+0),gp(0x827c38),1);
}
B43aadf:{NFSU2_TR(0x43aadf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43aae1:{NFSU2_TR(0x43aae1);
if(r1(R+518)){{goto L43aaf9;}}
}
B43aae3:L43aae3:{c.instructions+=3;NFSU2_TR(0x43aae3);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B43aae8:{NFSU2_TR(0x43aae8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43aaea:{NFSU2_TR(0x43aaea);
if(r1(R+518)){{goto L43aaf9;}}
}
B43aaec:L43aaec:{c.instructions+=3;NFSU2_TR(0x43aaec);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B43aaf1:{NFSU2_TR(0x43aaf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43aaf4:{NFSU2_TR(0x43aaf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43aaf9ull));
TAIL_STATIC(0x45ae00u,45a);
}
B43aaf9:L43aaf9:{c.instructions+=2;NFSU2_TR(0x43aaf9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43aafb:{NFSU2_TR(0x43aafb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43aaff;}}
}
B43aafd:L43aafd:{c.instructions+=1;NFSU2_TR(0x43aafd);
w1(R+12,u8(0x1ull));
}
B43aaff:L43aaff:{c.instructions+=3;NFSU2_TR(0x43aaff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43ab02:{NFSU2_TR(0x43ab02);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ab04:{NFSU2_TR(0x43ab04);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43aab4u);}goto L43aab4;}}
}
B43ab06:L43ab06:{c.instructions+=2;NFSU2_TR(0x43ab06);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
}
B43ab09:{NFSU2_TR(0x43ab09);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43aab6u);}goto L43aab6;}
}
B43ab0b:L43ab0b:{c.instructions+=5;NFSU2_TR(0x43ab0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43ab0c:{NFSU2_TR(0x43ab0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43ab0d:{NFSU2_TR(0x43ab0d);
__builtin_memmove((R+0),(R+12),1);
}
B43ab0f:{NFSU2_TR(0x43ab0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43ab10:{NFSU2_TR(0x43ab10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43ab20:L43ab20:{c.instructions+=9;NFSU2_TR(0x43ab20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ab21:{NFSU2_TR(0x43ab21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ab24:{NFSU2_TR(0x43ab24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ab26:{NFSU2_TR(0x43ab26);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ab27:{NFSU2_TR(0x43ab27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ab28:{NFSU2_TR(0x43ab28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ab29:{NFSU2_TR(0x43ab29);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43ab2c:{NFSU2_TR(0x43ab2c);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43ab31:{NFSU2_TR(0x43ab31);
if(r1(R+518)){{goto L43ab38;}}
}
B43ab33:L43ab33:{c.instructions+=2;NFSU2_TR(0x43ab33);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43ab36:{NFSU2_TR(0x43ab36);
{goto L43ab3a;}
}
B43ab38:L43ab38:{c.instructions+=1;NFSU2_TR(0x43ab38);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43ab3a:L43ab3a:{c.instructions+=2;NFSU2_TR(0x43ab3a);
w4(R+20,u32(0x2ull));
}
B43ab3f:{NFSU2_TR(0x43ab3f);
}
B43ab40:L43ab40:{c.instructions+=2;NFSU2_TR(0x43ab40);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ab42:{NFSU2_TR(0x43ab42);
if(r1(R+518)){{goto L43ab49;}}
}
B43ab44:L43ab44:{c.instructions+=2;NFSU2_TR(0x43ab44);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43ab47:{NFSU2_TR(0x43ab47);
{goto L43ab4b;}
}
B43ab49:L43ab49:{c.instructions+=1;NFSU2_TR(0x43ab49);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43ab4b:L43ab4b:{c.instructions+=2;NFSU2_TR(0x43ab4b);
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
B43ab4d:{NFSU2_TR(0x43ab4d);
if(r1(R+518)){{goto L43aba9;}}
}
B43ab4f:L43ab4f:{c.instructions+=3;NFSU2_TR(0x43ab4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ab52:{NFSU2_TR(0x43ab52);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43ab55:{NFSU2_TR(0x43ab55);
if(r1(R+518)){{goto L43ab5c;}}
}
B43ab57:L43ab57:{c.instructions+=2;NFSU2_TR(0x43ab57);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43ab58:{NFSU2_TR(0x43ab58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43ab6d;}}
}
B43ab5a:L43ab5a:{c.instructions+=1;NFSU2_TR(0x43ab5a);
{goto L43ab6a;}
}
B43ab5c:L43ab5c:{c.instructions+=3;NFSU2_TR(0x43ab5c);
__builtin_memmove((R+4),(R+24),4);
}
B43ab5e:{NFSU2_TR(0x43ab5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43ab65:{NFSU2_TR(0x43ab65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ab6aull));
TAIL_STATIC(0x437910u,437);
}
B43ab6a:L43ab6a:{c.instructions+=1;NFSU2_TR(0x43ab6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ab6d:L43ab6d:{c.instructions+=3;NFSU2_TR(0x43ab6d);
__builtin_memmove((R+0),gp(0x827c38),1);
}
B43ab72:{NFSU2_TR(0x43ab72);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ab74:{NFSU2_TR(0x43ab74);
if(r1(R+518)){{goto L43ab8c;}}
}
B43ab76:L43ab76:{c.instructions+=3;NFSU2_TR(0x43ab76);
__builtin_memmove((R+0),gp(0x7faaa8),4);
}
B43ab7b:{NFSU2_TR(0x43ab7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ab7d:{NFSU2_TR(0x43ab7d);
if(r1(R+518)){{goto L43ab8c;}}
}
B43ab7f:L43ab7f:{c.instructions+=3;NFSU2_TR(0x43ab7f);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B43ab84:{NFSU2_TR(0x43ab84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ab87:{NFSU2_TR(0x43ab87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ab8cull));
TAIL_STATIC(0x45ae20u,45a);
}
B43ab8c:L43ab8c:{c.instructions+=3;NFSU2_TR(0x43ab8c);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43ab90:{NFSU2_TR(0x43ab90);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ab92:{NFSU2_TR(0x43ab92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43ab99;}}
}
B43ab94:L43ab94:{c.instructions+=1;NFSU2_TR(0x43ab94);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43ab99:L43ab99:{c.instructions+=3;NFSU2_TR(0x43ab99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43ab9c:{NFSU2_TR(0x43ab9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ab9e:{NFSU2_TR(0x43ab9e);
if(r1(R+518)){{goto L43aba5;}}
}
B43aba0:L43aba0:{c.instructions+=2;NFSU2_TR(0x43aba0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
}
B43aba3:{NFSU2_TR(0x43aba3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43ab40u);}goto L43ab40;}
}
B43aba5:L43aba5:{c.instructions+=2;NFSU2_TR(0x43aba5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43aba7:{NFSU2_TR(0x43aba7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43ab40u);}goto L43ab40;}
}
B43aba9:L43aba9:{c.instructions+=6;NFSU2_TR(0x43aba9);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43abad:{NFSU2_TR(0x43abad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43abae:{NFSU2_TR(0x43abae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43abaf:{NFSU2_TR(0x43abaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43abb0:{NFSU2_TR(0x43abb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43abb1:{NFSU2_TR(0x43abb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43abc0:L43abc0:{c.instructions+=6;NFSU2_TR(0x43abc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B43abc3:{NFSU2_TR(0x43abc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43abc4:{NFSU2_TR(0x43abc4);
__builtin_memmove((R+28),(R+4),4);
}
B43abc6:{NFSU2_TR(0x43abc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43abc9:{NFSU2_TR(0x43abc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43abcb:{NFSU2_TR(0x43abcb);
if(r1(R+518)){{goto L43acdf;}}
}
B43abd1:L43abd1:{c.instructions+=2;NFSU2_TR(0x43abd1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43abd4:{NFSU2_TR(0x43abd4);
if(r1(R+518)){{goto L43acdf;}}
}
B43abda:L43abda:{c.instructions+=6;NFSU2_TR(0x43abda);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43abde:{NFSU2_TR(0x43abde);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43abe1:{NFSU2_TR(0x43abe1);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43abe4:{NFSU2_TR(0x43abe4);
__builtin_memmove((R+0),gp(0x827b18),4);
}
B43abe9:{NFSU2_TR(0x43abe9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43abeb:{NFSU2_TR(0x43abeb);
if(r1(R+518)){{goto L43ac06;}}
}
B43abed:L43abed:{c.instructions+=8;NFSU2_TR(0x43abed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43abf0:{NFSU2_TR(0x43abf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43abf3:{NFSU2_TR(0x43abf3);
__builtin_memmove((R+4),gp(0x827ad8),4);
}
B43abf9:{NFSU2_TR(0x43abf9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B43abfd:{NFSU2_TR(0x43abfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43abfe:{NFSU2_TR(0x43abfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43ac00:{NFSU2_TR(0x43ac00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ac01:{NFSU2_TR(0x43ac01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ac06ull));
TAIL_STATIC(0x42fbf0u,42f);
}
B43ac06:L43ac06:{c.instructions+=7;NFSU2_TR(0x43ac06);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ac07:{NFSU2_TR(0x43ac07);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43ac0b:{NFSU2_TR(0x43ac0b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ac0c:{NFSU2_TR(0x43ac0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ac0d:{NFSU2_TR(0x43ac0d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ac0e:{NFSU2_TR(0x43ac0e);
__builtin_memmove((R+4),(R+28),4);
}
B43ac10:{NFSU2_TR(0x43ac10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ac15ull));
TAIL_STATIC(0x439240u,439);
}
B43ac15:L43ac15:{c.instructions+=4;NFSU2_TR(0x43ac15);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43ac18:{NFSU2_TR(0x43ac18);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43ac1b:{NFSU2_TR(0x43ac1b);
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
B43ac1d:{NFSU2_TR(0x43ac1d);
if(r1(R+518)){{goto L43ac30;}}
}
B43ac1f:L43ac1f:{c.instructions+=1;NFSU2_TR(0x43ac1f);
}
B43ac20:L43ac20:{c.instructions+=4;NFSU2_TR(0x43ac20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ac23:{NFSU2_TR(0x43ac23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43ac25:{NFSU2_TR(0x43ac25);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ac26:{NFSU2_TR(0x43ac26);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ac29ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43ac29:L43ac29:{c.instructions+=3;NFSU2_TR(0x43ac29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43ac2c:{NFSU2_TR(0x43ac2c);
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
B43ac2e:{NFSU2_TR(0x43ac2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43ac20u);}goto L43ac20;}}
}
B43ac30:L43ac30:{c.instructions+=3;NFSU2_TR(0x43ac30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ac31:{NFSU2_TR(0x43ac31);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43ac37:{NFSU2_TR(0x43ac37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ac3cull));
TAIL_STATIC(0x4395f0u,439);
}
B43ac3c:L43ac3c:{c.instructions+=5;NFSU2_TR(0x43ac3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ac3f:{NFSU2_TR(0x43ac3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ac42:{NFSU2_TR(0x43ac42);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ac45:{NFSU2_TR(0x43ac45);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ac47:{NFSU2_TR(0x43ac47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43acdc;}}
}
B43ac4d:L43ac4d:{c.instructions+=5;NFSU2_TR(0x43ac4d);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ac50:{NFSU2_TR(0x43ac50);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43ac53:{NFSU2_TR(0x43ac53);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43ac55:{NFSU2_TR(0x43ac55);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43ac58:{NFSU2_TR(0x43ac58);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43ac67;}}
}
B43ac5a:L43ac5a:{c.instructions+=5;NFSU2_TR(0x43ac5a);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43ac5d:{NFSU2_TR(0x43ac5d);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43ac60:{NFSU2_TR(0x43ac60);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43ac62:{NFSU2_TR(0x43ac62);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43ac65:{NFSU2_TR(0x43ac65);
if(r1(R+514)){{goto L43acdc;}}
}
B43ac67:L43ac67:{c.instructions+=3;NFSU2_TR(0x43ac67);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43ac6a:{NFSU2_TR(0x43ac6a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ac6c:{NFSU2_TR(0x43ac6c);
if(r1(R+518)){{goto L43acdc;}}
}
B43ac6e:L43ac6e:{c.instructions+=3;NFSU2_TR(0x43ac6e);
__builtin_memmove((R+0),gp(0x827eea),1);
}
B43ac73:{NFSU2_TR(0x43ac73);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ac75:{NFSU2_TR(0x43ac75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43ac9a;}}
}
B43ac77:L43ac77:{c.instructions+=4;NFSU2_TR(0x43ac77);
__builtin_memmove((R+8),gp(0x890080),4);
}
B43ac7d:{NFSU2_TR(0x43ac7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ac83:{NFSU2_TR(0x43ac83);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ac85:{NFSU2_TR(0x43ac85);
if(r1(R+518)){{goto L43ac93;}}
}
B43ac87:L43ac87:{c.instructions+=2;NFSU2_TR(0x43ac87);
s1(0x827ee9,u8(0x1ull));
}
B43ac8e:{NFSU2_TR(0x43ac8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ac93ull));
TAIL_STATIC(0x409a30u,409);
}
B43ac93:L43ac93:{c.instructions+=1;NFSU2_TR(0x43ac93);
s1(0x827eea,u8(0x1ull));
}
B43ac9a:L43ac9a:{c.instructions+=4;NFSU2_TR(0x43ac9a);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B43ac9f:{NFSU2_TR(0x43ac9f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43aca1:{NFSU2_TR(0x43aca1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43aca3:{NFSU2_TR(0x43aca3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43acd8;}}
}
B43aca5:L43aca5:{c.instructions+=1;NFSU2_TR(0x43aca5);
{goto L43acb0;}
}
B43acb0:L43acb0:{c.instructions+=4;NFSU2_TR(0x43acb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B43acb7:{NFSU2_TR(0x43acb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43acbd:{NFSU2_TR(0x43acbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43acbf:{NFSU2_TR(0x43acbf);
if(r1(R+518)){{goto L43acce;}}
}
B43acc1:L43acc1:{c.instructions+=2;NFSU2_TR(0x43acc1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B43acc5:{NFSU2_TR(0x43acc5);
if(r1(R+518)){{goto L43acce;}}
}
B43acc7:L43acc7:{c.instructions+=2;NFSU2_TR(0x43acc7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43acc9:{NFSU2_TR(0x43acc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43acceull));
TAIL_STATIC(0x5fa820u,5fa);
}
B43acce:L43acce:{c.instructions+=4;NFSU2_TR(0x43acce);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B43acd3:{NFSU2_TR(0x43acd3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43acd4:{NFSU2_TR(0x43acd4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43acd6:{NFSU2_TR(0x43acd6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43acb0u);}goto L43acb0;}}
}
B43acd8:L43acd8:{c.instructions+=1;NFSU2_TR(0x43acd8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43acdc:L43acdc:{c.instructions+=3;NFSU2_TR(0x43acdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43acdd:{NFSU2_TR(0x43acdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43acde:{NFSU2_TR(0x43acde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43acdf:L43acdf:{c.instructions+=3;NFSU2_TR(0x43acdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43ace0:{NFSU2_TR(0x43ace0);
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
B43ace3:{NFSU2_TR(0x43ace3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43acf0:L43acf0:{c.instructions+=7;NFSU2_TR(0x43acf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B43acf3:{NFSU2_TR(0x43acf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43acf6:{NFSU2_TR(0x43acf6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43acfa:{NFSU2_TR(0x43acfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43acfd:{NFSU2_TR(0x43acfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ad00:{NFSU2_TR(0x43ad00);
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
B43ad02:{NFSU2_TR(0x43ad02);
if(r1(R+518)){{goto L43ae3b;}}
}
B43ad08:L43ad08:{c.instructions+=3;NFSU2_TR(0x43ad08);
__builtin_memmove((R+8),gp(0x827f60),4);
}
B43ad0e:{NFSU2_TR(0x43ad0e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ad0f:{NFSU2_TR(0x43ad0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ad14ull));
TAIL_STATIC(0x434dc0u,434);
}
B43ad14:L43ad14:{c.instructions+=4;NFSU2_TR(0x43ad14);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43ad17:{NFSU2_TR(0x43ad17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ad19:{NFSU2_TR(0x43ad19);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ad1d:{NFSU2_TR(0x43ad1d);
if(r1(R+518)){{goto L43ae3b;}}
}
B43ad23:L43ad23:{c.instructions+=8;NFSU2_TR(0x43ad23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ad24:{NFSU2_TR(0x43ad24);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ad25:{NFSU2_TR(0x43ad25);
w4(R+4,u32(0x827b98ull));
}
B43ad2a:{NFSU2_TR(0x43ad2a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43ad2c:{NFSU2_TR(0x43ad2c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ad2d:{NFSU2_TR(0x43ad2d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ad31:{NFSU2_TR(0x43ad31);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ad35:{NFSU2_TR(0x43ad35);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ad36:L43ad36:{c.instructions+=2;NFSU2_TR(0x43ad36);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B43ad3a:{NFSU2_TR(0x43ad3a);
if(r1(R+518)){{goto L43ae0c;}}
}
B43ad40:L43ad40:{c.instructions+=5;NFSU2_TR(0x43ad40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x827fa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43ad46:{NFSU2_TR(0x43ad46);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ad48:{NFSU2_TR(0x43ad48);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x827f64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43ad4e:{NFSU2_TR(0x43ad4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x827fc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B43ad54:{NFSU2_TR(0x43ad54);
if(r1(R+518)){{goto L43ae0c;}}
}
B43ad5a:L43ad5a:{c.instructions+=2;NFSU2_TR(0x43ad5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ad5c:{NFSU2_TR(0x43ad5c);
if(r1(R+518)){{goto L43ae0c;}}
}
B43ad62:L43ad62:{c.instructions+=2;NFSU2_TR(0x43ad62);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ad64:{NFSU2_TR(0x43ad64);
if(r1(R+518)){{goto L43ae0c;}}
}
B43ad6a:L43ad6a:{c.instructions+=3;NFSU2_TR(0x43ad6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x827f84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ad70:{NFSU2_TR(0x43ad70);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ad72:{NFSU2_TR(0x43ad72);
if(r1(R+518)){{goto L43ae0c;}}
}
B43ad78:L43ad78:{c.instructions+=3;NFSU2_TR(0x43ad78);
__builtin_memmove((R+0),gp(0x827b54),4);
}
B43ad7d:{NFSU2_TR(0x43ad7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ad7e:{NFSU2_TR(0x43ad7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ad83ull));
TAIL_STATIC(0x440e50u,440);
}
B43ad83:L43ad83:{c.instructions+=3;NFSU2_TR(0x43ad83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43ad86:{NFSU2_TR(0x43ad86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ad88:{NFSU2_TR(0x43ad88);
if(r1(R+518)){{goto L43ad95;}}
}
B43ad8a:L43ad8a:{c.instructions+=2;NFSU2_TR(0x43ad8a);
__builtin_memmove((R+4),(R+0),4);
}
B43ad8c:{NFSU2_TR(0x43ad8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ad91ull));
TAIL_STATIC(0x4364e0u,436);
}
B43ad91:L43ad91:{c.instructions+=2;NFSU2_TR(0x43ad91);
__builtin_memmove((R+24),(R+0),4);
}
B43ad93:{NFSU2_TR(0x43ad93);
{goto L43ad97;}
}
B43ad95:L43ad95:{c.instructions+=1;NFSU2_TR(0x43ad95);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43ad97:L43ad97:{c.instructions+=9;NFSU2_TR(0x43ad97);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ad9b:{NFSU2_TR(0x43ad9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ad9e:{NFSU2_TR(0x43ad9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43ada1:{NFSU2_TR(0x43ada1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ada2:{NFSU2_TR(0x43ada2);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0x8ull))));
}
B43ada5:{NFSU2_TR(0x43ada5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43ada8:{NFSU2_TR(0x43ada8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43adaf:{NFSU2_TR(0x43adaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43adb2:{NFSU2_TR(0x43adb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43adb7ull));
TAIL_STATIC(0x434f20u,434);
}
B43adb7:L43adb7:{c.instructions+=4;NFSU2_TR(0x43adb7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43adb9:{NFSU2_TR(0x43adb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43adba:{NFSU2_TR(0x43adba);
__builtin_memmove((R+4),(R+24),4);
}
B43adbc:{NFSU2_TR(0x43adbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43adc1ull));
TAIL_STATIC(0x434a80u,434);
}
B43adc1:L43adc1:{c.instructions+=4;NFSU2_TR(0x43adc1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43adc3:{NFSU2_TR(0x43adc3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43adc4:{NFSU2_TR(0x43adc4);
__builtin_memmove((R+4),(R+24),4);
}
B43adc6:{NFSU2_TR(0x43adc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43adcbull));
TAIL_STATIC(0x434a80u,434);
}
B43adcb:L43adcb:{c.instructions+=3;NFSU2_TR(0x43adcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43adce:{NFSU2_TR(0x43adce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43add0:{NFSU2_TR(0x43add0);
if(r1(R+518)){{goto L43adda;}}
}
B43add2:L43add2:{c.instructions+=3;NFSU2_TR(0x43add2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43add6:{NFSU2_TR(0x43add6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B43add8:{NFSU2_TR(0x43add8);
{goto L43ae08;}
}
B43adda:L43adda:{c.instructions+=2;NFSU2_TR(0x43adda);
__builtin_memmove((R+4),(R+24),4);
}
B43addc:{NFSU2_TR(0x43addc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ade1ull));
TAIL_STATIC(0x436550u,436);
}
B43ade1:L43ade1:{c.instructions+=2;NFSU2_TR(0x43ade1);
__builtin_memmove((R+4),(R+24),4);
}
B43ade3:{NFSU2_TR(0x43ade3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ade8ull));
TAIL_STATIC(0x434a20u,434);
}
B43ade8:L43ade8:{c.instructions+=2;NFSU2_TR(0x43ade8);
__builtin_memmove((R+4),(R+24),4);
}
B43adea:{NFSU2_TR(0x43adea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43adefull));
TAIL_STATIC(0x4383a0u,438);
}
B43adef:L43adef:{c.instructions+=4;NFSU2_TR(0x43adef);
__builtin_memmove((R+0),gp(0x827b54),4);
}
B43adf4:{NFSU2_TR(0x43adf4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43adf5:{NFSU2_TR(0x43adf5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43adf6:{NFSU2_TR(0x43adf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43adfbull));
TAIL_STATIC(0x43f920u,43f);
}
B43adfb:L43adfb:{c.instructions+=3;NFSU2_TR(0x43adfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43adff:{NFSU2_TR(0x43adff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B43ae02:{NFSU2_TR(0x43ae02);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B43ae08:L43ae08:{c.instructions+=1;NFSU2_TR(0x43ae08);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ae0c:L43ae0c:{c.instructions+=7;NFSU2_TR(0x43ae0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ae10:{NFSU2_TR(0x43ae10);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B43ae13:{NFSU2_TR(0x43ae13);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B43ae16:{NFSU2_TR(0x43ae16);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x827c38ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x827c38ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43ae1c:{NFSU2_TR(0x43ae1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ae20:{NFSU2_TR(0x43ae20);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ae24:{NFSU2_TR(0x43ae24);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43ad36u);}goto L43ad36;}}
}
B43ae2a:L43ae2a:{c.instructions+=4;NFSU2_TR(0x43ae2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ae2e:{NFSU2_TR(0x43ae2e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ae30:{NFSU2_TR(0x43ae30);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ae32:{NFSU2_TR(0x43ae32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ae37ull));
TAIL_STATIC(0x435ef0u,435);
}
B43ae37:L43ae37:{c.instructions+=4;NFSU2_TR(0x43ae37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43ae38:{NFSU2_TR(0x43ae38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43ae39:{NFSU2_TR(0x43ae39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43ae3a:{NFSU2_TR(0x43ae3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43ae3b:L43ae3b:{c.instructions+=2;NFSU2_TR(0x43ae3b);
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
B43ae3e:{NFSU2_TR(0x43ae3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43ae40:L43ae40:{c.instructions+=12;NFSU2_TR(0x43ae40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ae42:{NFSU2_TR(0x43ae42);
u8 U[4];
w4(U+0,u32(0x771c58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ae47:{NFSU2_TR(0x43ae47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ae4d:{NFSU2_TR(0x43ae4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ae4e:{NFSU2_TR(0x43ae4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ae55:{NFSU2_TR(0x43ae55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ae56:{NFSU2_TR(0x43ae56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ae57:{NFSU2_TR(0x43ae57);
__builtin_memmove((R+24),(R+4),4);
}
B43ae59:{NFSU2_TR(0x43ae59);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ae5d:{NFSU2_TR(0x43ae5d);
u8 U[4];
w4(U+0,u32(0x785fb4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B43ae63:{NFSU2_TR(0x43ae63);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43ae6b:{NFSU2_TR(0x43ae6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43ae70ull));
TAIL_STATIC(0x439970u,439);
}
B43ae70:L43ae70:{c.instructions+=6;NFSU2_TR(0x43ae70);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43ae74:{NFSU2_TR(0x43ae74);
u8 U[4];
w4(U+0,u32(0x785da4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B43ae7a:{NFSU2_TR(0x43ae7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43ae7b:{NFSU2_TR(0x43ae7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43ae82:{NFSU2_TR(0x43ae82);
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
B43ae85:{NFSU2_TR(0x43ae85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43ae90:L43ae90:{c.instructions+=12;NFSU2_TR(0x43ae90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ae92:{NFSU2_TR(0x43ae92);
u8 U[4];
w4(U+0,u32(0x771c58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ae97:{NFSU2_TR(0x43ae97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ae9d:{NFSU2_TR(0x43ae9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ae9e:{NFSU2_TR(0x43ae9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43aea5:{NFSU2_TR(0x43aea5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43aea6:{NFSU2_TR(0x43aea6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43aea7:{NFSU2_TR(0x43aea7);
__builtin_memmove((R+24),(R+4),4);
}
B43aea9:{NFSU2_TR(0x43aea9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43aead:{NFSU2_TR(0x43aead);
u8 U[4];
w4(U+0,u32(0x785ffcull));
s4(u32(r4(R+24)),r4(U+0));
}
B43aeb3:{NFSU2_TR(0x43aeb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B43aebb:{NFSU2_TR(0x43aebb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43aec0ull));
TAIL_STATIC(0x439c30u,439);
}
B43aec0:L43aec0:{c.instructions+=6;NFSU2_TR(0x43aec0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43aec4:{NFSU2_TR(0x43aec4);
u8 U[4];
w4(U+0,u32(0x785da4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B43aeca:{NFSU2_TR(0x43aeca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43aecb:{NFSU2_TR(0x43aecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43aed2:{NFSU2_TR(0x43aed2);
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
B43aed5:{NFSU2_TR(0x43aed5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43aee0:L43aee0:{c.instructions+=3;NFSU2_TR(0x43aee0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43aee1:{NFSU2_TR(0x43aee1);
__builtin_memmove((R+24),(R+4),4);
}
B43aee3:{NFSU2_TR(0x43aee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43aee8ull));
TAIL_STATIC(0x439cb0u,439);
}
B43aee8:L43aee8:{c.instructions+=2;NFSU2_TR(0x43aee8);
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
B43aeed:{NFSU2_TR(0x43aeed);
if(r1(R+518)){{goto L43aef8;}}
}
B43aeef:L43aeef:{c.instructions+=2;NFSU2_TR(0x43aeef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43aef0:{NFSU2_TR(0x43aef0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43aef5ull));
TAIL_STATIC(0x575630u,575);
}
B43aef5:L43aef5:{c.instructions+=1;NFSU2_TR(0x43aef5);
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
B43aef8:L43aef8:{c.instructions+=3;NFSU2_TR(0x43aef8);
__builtin_memmove((R+0),(R+24),4);
}
B43aefa:{NFSU2_TR(0x43aefa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43aefb:{NFSU2_TR(0x43aefb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43af00:L43af00:{c.instructions+=3;NFSU2_TR(0x43af00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43af01:{NFSU2_TR(0x43af01);
__builtin_memmove((R+24),(R+4),4);
}
B43af03:{NFSU2_TR(0x43af03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43af08ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43a9a0u);}goto L43a9a0;}
}
B43af08:L43af08:{c.instructions+=2;NFSU2_TR(0x43af08);
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
B43af0d:{NFSU2_TR(0x43af0d);
if(r1(R+518)){{goto L43af18;}}
}
B43af0f:L43af0f:{c.instructions+=2;NFSU2_TR(0x43af0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43af10:{NFSU2_TR(0x43af10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43af15ull));
TAIL_STATIC(0x575630u,575);
}
B43af15:L43af15:{c.instructions+=1;NFSU2_TR(0x43af15);
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
B43af18:L43af18:{c.instructions+=3;NFSU2_TR(0x43af18);
__builtin_memmove((R+0),(R+24),4);
}
B43af1a:{NFSU2_TR(0x43af1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43af1b:{NFSU2_TR(0x43af1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43af20:L43af20:{c.instructions+=9;NFSU2_TR(0x43af20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43af21:{NFSU2_TR(0x43af21);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43af22:{NFSU2_TR(0x43af22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43af23:{NFSU2_TR(0x43af23);
__builtin_memmove((R+20),(R+4),4);
}
B43af25:{NFSU2_TR(0x43af25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43af28:{NFSU2_TR(0x43af28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43af2a:{NFSU2_TR(0x43af2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43af2b:{NFSU2_TR(0x43af2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43af2e:{NFSU2_TR(0x43af2e);
if(r1(R+518)){{goto L43af35;}}
}
B43af30:L43af30:{c.instructions+=2;NFSU2_TR(0x43af30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43af33:{NFSU2_TR(0x43af33);
{goto L43af37;}
}
B43af35:L43af35:{c.instructions+=1;NFSU2_TR(0x43af35);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43af37:L43af37:{c.instructions+=2;NFSU2_TR(0x43af37);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43af3b:{NFSU2_TR(0x43af3b);
{goto L43af40;}
}
B43af40:L43af40:{c.instructions+=2;NFSU2_TR(0x43af40);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43af42:{NFSU2_TR(0x43af42);
if(r1(R+518)){{goto L43af49;}}
}
B43af44:L43af44:{c.instructions+=2;NFSU2_TR(0x43af44);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B43af47:{NFSU2_TR(0x43af47);
{goto L43af4b;}
}
B43af49:L43af49:{c.instructions+=1;NFSU2_TR(0x43af49);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43af4b:L43af4b:{c.instructions+=2;NFSU2_TR(0x43af4b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43af4d:{NFSU2_TR(0x43af4d);
if(r1(R+518)){{goto L43af67;}}
}
B43af4f:L43af4f:{c.instructions+=3;NFSU2_TR(0x43af4f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43af50:{NFSU2_TR(0x43af50);
__builtin_memmove((R+4),(R+24),4);
}
B43af52:{NFSU2_TR(0x43af52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43af57ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43abc0u);}goto L43abc0;}
}
B43af57:L43af57:{c.instructions+=3;NFSU2_TR(0x43af57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43af5a:{NFSU2_TR(0x43af5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43af5c:{NFSU2_TR(0x43af5c);
if(r1(R+518)){{goto L43af63;}}
}
B43af5e:L43af5e:{c.instructions+=2;NFSU2_TR(0x43af5e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
}
B43af61:{NFSU2_TR(0x43af61);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43af40u);}goto L43af40;}
}
B43af63:L43af63:{c.instructions+=2;NFSU2_TR(0x43af63);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43af65:{NFSU2_TR(0x43af65);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43af40u);}goto L43af40;}
}
B43af67:L43af67:{c.instructions+=3;NFSU2_TR(0x43af67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43af6a:{NFSU2_TR(0x43af6a);
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
B43af6c:{NFSU2_TR(0x43af6c);
if(r1(R+518)){{goto L43af74;}}
}
B43af6e:L43af6e:{c.instructions+=2;NFSU2_TR(0x43af6e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43af6f:{NFSU2_TR(0x43af6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43af74ull));
TAIL_STATIC(0x4321c0u,432);
}
B43af74:L43af74:{c.instructions+=5;NFSU2_TR(0x43af74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43af75:{NFSU2_TR(0x43af75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43af76:{NFSU2_TR(0x43af76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43af77:{NFSU2_TR(0x43af77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43af78:{NFSU2_TR(0x43af78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43af80:L43af80:{c.instructions+=10;NFSU2_TR(0x43af80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43af81:{NFSU2_TR(0x43af81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43af82:{NFSU2_TR(0x43af82);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B43af86:{NFSU2_TR(0x43af86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43af87:{NFSU2_TR(0x43af87);
__builtin_memmove((R+12),(R+4),4);
}
B43af89:{NFSU2_TR(0x43af89);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43af8c:{NFSU2_TR(0x43af8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43af8d:{NFSU2_TR(0x43af8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43af90:{NFSU2_TR(0x43af90);
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
B43af92:{NFSU2_TR(0x43af92);
if(r1(R+518)){{goto L43afa4;}}
}
B43af94:L43af94:{c.instructions+=4;NFSU2_TR(0x43af94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43af97:{NFSU2_TR(0x43af97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43af99:{NFSU2_TR(0x43af99);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43af9a:{NFSU2_TR(0x43af9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43af9dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B43af9d:L43af9d:{c.instructions+=3;NFSU2_TR(0x43af9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43afa0:{NFSU2_TR(0x43afa0);
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
B43afa2:{NFSU2_TR(0x43afa2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43af94u);}goto L43af94;}}
}
B43afa4:L43afa4:{c.instructions+=6;NFSU2_TR(0x43afa4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43afaa:{NFSU2_TR(0x43afaa);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43afac:{NFSU2_TR(0x43afac);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43afad:{NFSU2_TR(0x43afad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43afb0:{NFSU2_TR(0x43afb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43afb3:{NFSU2_TR(0x43afb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43afb8ull));
TAIL_STATIC(0x4395f0u,439);
}
B43afb8:L43afb8:{c.instructions+=2;NFSU2_TR(0x43afb8);
w4(R+0,u32(0x827ba0ull));
}
B43afbd:{NFSU2_TR(0x43afbd);
__builtin_memmove((R+4),(R+4),4);
}
B43afc0:L43afc0:{c.instructions+=6;NFSU2_TR(0x43afc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43afc3:{NFSU2_TR(0x43afc3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B43afc5:{NFSU2_TR(0x43afc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43afc8:{NFSU2_TR(0x43afc8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43afca:{NFSU2_TR(0x43afca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43afcd:{NFSU2_TR(0x43afcd);
if(r1(R+518)){{goto L43afd2;}}
}
B43afcf:L43afcf:{c.instructions+=1;NFSU2_TR(0x43afcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43afd2:L43afd2:{c.instructions+=3;NFSU2_TR(0x43afd2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B43afd5:{NFSU2_TR(0x43afd5);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x827c40ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x827c40ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43afda:{NFSU2_TR(0x43afda);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43afc0u);}goto L43afc0;}}
}
B43afdc:L43afdc:{c.instructions+=3;NFSU2_TR(0x43afdc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43afdd:{NFSU2_TR(0x43afdd);
__builtin_memmove((R+4),(R+12),4);
}
B43afdf:{NFSU2_TR(0x43afdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43afe4ull));
TAIL_STATIC(0x439240u,439);
}
B43afe4:L43afe4:{c.instructions+=7;NFSU2_TR(0x43afe4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43afe8:{NFSU2_TR(0x43afe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43afe9:{NFSU2_TR(0x43afe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43afea:{NFSU2_TR(0x43afea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43afeb:{NFSU2_TR(0x43afeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43afee:{NFSU2_TR(0x43afee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43afef:{NFSU2_TR(0x43afef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x43a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
