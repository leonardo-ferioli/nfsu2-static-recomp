#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_499(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_519(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_523(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_56e(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5b0(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x54a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x54a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_54a(u8* __restrict R,Cpu& c);
u32 page_54a(Cpu& c){return body_54a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_54a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x54a004:goto L54a004;
case 0x54a009:goto L54a009;
case 0x54a00e:c.instructions+=2;goto B54a00e;
case 0x54a011:c.instructions+=1;goto B54a011;
case 0x54a013:goto L54a013;
case 0x54a01a:goto L54a01a;
case 0x54a01d:c.instructions+=5;goto B54a01d;
case 0x54a01f:c.instructions+=4;goto B54a01f;
case 0x54a022:c.instructions+=3;goto B54a022;
case 0x54a025:c.instructions+=2;goto B54a025;
case 0x54a028:c.instructions+=1;goto B54a028;
case 0x54a030:goto L54a030;
case 0x54a033:c.instructions+=3;goto B54a033;
case 0x54a034:c.instructions+=2;goto B54a034;
case 0x54a039:c.instructions+=1;goto B54a039;
case 0x54a03e:goto L54a03e;
case 0x54a041:c.instructions+=3;goto B54a041;
case 0x54a043:c.instructions+=2;goto B54a043;
case 0x54a045:c.instructions+=1;goto B54a045;
case 0x54a047:goto L54a047;
case 0x54a048:c.instructions+=1;goto B54a048;
case 0x54a04d:goto L54a04d;
case 0x54a050:c.instructions+=2;goto B54a050;
case 0x54a052:c.instructions+=1;goto B54a052;
case 0x54a054:goto L54a054;
case 0x54a055:c.instructions+=2;goto B54a055;
case 0x54a057:c.instructions+=1;goto B54a057;
case 0x54a05c:goto L54a05c;
case 0x54a05e:c.instructions+=1;goto B54a05e;
case 0x54a060:goto L54a060;
case 0x54a062:c.instructions+=1;goto B54a062;
case 0x54a064:goto L54a064;
case 0x54a069:c.instructions+=2;goto B54a069;
case 0x54a06b:c.instructions+=1;goto B54a06b;
case 0x54a06d:goto L54a06d;
case 0x54a070:c.instructions+=3;goto B54a070;
case 0x54a071:c.instructions+=2;goto B54a071;
case 0x54a072:c.instructions+=1;goto B54a072;
case 0x54a077:goto L54a077;
case 0x54a079:c.instructions+=1;goto B54a079;
case 0x54a07b:goto L54a07b;
case 0x54a07d:goto L54a07d;
case 0x54a080:c.instructions+=14;goto B54a080;
case 0x54a083:c.instructions+=13;goto B54a083;
case 0x54a089:c.instructions+=12;goto B54a089;
case 0x54a08c:c.instructions+=11;goto B54a08c;
case 0x54a08f:c.instructions+=10;goto B54a08f;
case 0x54a091:c.instructions+=9;goto B54a091;
case 0x54a094:c.instructions+=8;goto B54a094;
case 0x54a097:c.instructions+=7;goto B54a097;
case 0x54a099:c.instructions+=6;goto B54a099;
case 0x54a09c:c.instructions+=5;goto B54a09c;
case 0x54a09e:c.instructions+=4;goto B54a09e;
case 0x54a0a0:c.instructions+=3;goto B54a0a0;
case 0x54a0a2:c.instructions+=2;goto B54a0a2;
case 0x54a0a5:c.instructions+=1;goto B54a0a5;
case 0x54a0a7:goto L54a0a7;
case 0x54a0aa:c.instructions+=4;goto B54a0aa;
case 0x54a0ab:c.instructions+=3;goto B54a0ab;
case 0x54a0b0:c.instructions+=2;goto B54a0b0;
case 0x54a0b1:c.instructions+=1;goto B54a0b1;
case 0x54a0b6:goto L54a0b6;
case 0x54a0b9:c.instructions+=7;goto B54a0b9;
case 0x54a0bf:c.instructions+=6;goto B54a0bf;
case 0x54a0c2:c.instructions+=5;goto B54a0c2;
case 0x54a0c5:c.instructions+=4;goto B54a0c5;
case 0x54a0c8:c.instructions+=3;goto B54a0c8;
case 0x54a0c9:c.instructions+=2;goto B54a0c9;
case 0x54a0ca:c.instructions+=1;goto B54a0ca;
case 0x54a0cf:goto L54a0cf;
case 0x54a0d2:c.instructions+=1;goto B54a0d2;
case 0x54a0d4:goto L54a0d4;
case 0x54a0d6:c.instructions+=1;goto B54a0d6;
case 0x54a0d8:goto L54a0d8;
case 0x54a0dd:c.instructions+=2;goto B54a0dd;
case 0x54a0df:c.instructions+=1;goto B54a0df;
case 0x54a0e1:goto L54a0e1;
case 0x54a0e5:c.instructions+=1;goto B54a0e5;
case 0x54a0e7:goto L54a0e7;
case 0x54a0ee:goto L54a0ee;
case 0x54a0f2:c.instructions+=1;goto B54a0f2;
case 0x54a0f4:goto L54a0f4;
case 0x54a0f7:c.instructions+=3;goto B54a0f7;
case 0x54a0fa:c.instructions+=2;goto B54a0fa;
case 0x54a0fc:c.instructions+=1;goto B54a0fc;
case 0x54a0fe:goto L54a0fe;
case 0x54a100:goto L54a100;
case 0x54a101:c.instructions+=1;goto B54a101;
case 0x54a106:goto L54a106;
case 0x54a109:c.instructions+=3;goto B54a109;
case 0x54a10c:c.instructions+=2;goto B54a10c;
case 0x54a10d:c.instructions+=1;goto B54a10d;
case 0x54a10f:goto L54a10f;
case 0x54a112:c.instructions+=7;goto B54a112;
case 0x54a115:c.instructions+=6;goto B54a115;
case 0x54a11a:c.instructions+=5;goto B54a11a;
case 0x54a11b:c.instructions+=4;goto B54a11b;
case 0x54a120:c.instructions+=3;goto B54a120;
case 0x54a123:c.instructions+=2;goto B54a123;
case 0x54a126:c.instructions+=1;goto B54a126;
case 0x54a12c:goto L54a12c;
case 0x54a12f:c.instructions+=4;goto B54a12f;
case 0x54a132:c.instructions+=3;goto B54a132;
case 0x54a135:c.instructions+=2;goto B54a135;
case 0x54a13b:c.instructions+=1;goto B54a13b;
case 0x54a140:goto L54a140;
case 0x54a142:c.instructions+=2;goto B54a142;
case 0x54a144:c.instructions+=1;goto B54a144;
case 0x54a146:goto L54a146;
case 0x54a149:c.instructions+=3;goto B54a149;
case 0x54a14c:c.instructions+=2;goto B54a14c;
case 0x54a14f:c.instructions+=1;goto B54a14f;
case 0x54a154:goto L54a154;
case 0x54a156:c.instructions+=5;goto B54a156;
case 0x54a157:c.instructions+=4;goto B54a157;
case 0x54a15c:c.instructions+=3;goto B54a15c;
case 0x54a15d:c.instructions+=2;goto B54a15d;
case 0x54a162:c.instructions+=1;goto B54a162;
case 0x54a167:goto L54a167;
case 0x54a16a:c.instructions+=4;goto B54a16a;
case 0x54a16d:c.instructions+=3;goto B54a16d;
case 0x54a16e:c.instructions+=2;goto B54a16e;
case 0x54a16f:c.instructions+=1;goto B54a16f;
case 0x54a174:goto L54a174;
case 0x54a176:c.instructions+=4;goto B54a176;
case 0x54a179:c.instructions+=3;goto B54a179;
case 0x54a17b:c.instructions+=2;goto B54a17b;
case 0x54a17e:c.instructions+=1;goto B54a17e;
case 0x54a180:goto L54a180;
case 0x54a181:c.instructions+=5;goto B54a181;
case 0x54a182:c.instructions+=4;goto B54a182;
case 0x54a183:c.instructions+=3;goto B54a183;
case 0x54a185:c.instructions+=2;goto B54a185;
case 0x54a186:c.instructions+=1;goto B54a186;
case 0x54a190:goto L54a190;
case 0x54a193:c.instructions+=32;goto B54a193;
case 0x54a197:c.instructions+=31;goto B54a197;
case 0x54a19b:c.instructions+=30;goto B54a19b;
case 0x54a19f:c.instructions+=29;goto B54a19f;
case 0x54a1a3:c.instructions+=28;goto B54a1a3;
case 0x54a1a7:c.instructions+=27;goto B54a1a7;
case 0x54a1aa:c.instructions+=26;goto B54a1aa;
case 0x54a1ae:c.instructions+=25;goto B54a1ae;
case 0x54a1b0:c.instructions+=24;goto B54a1b0;
case 0x54a1b4:c.instructions+=23;goto B54a1b4;
case 0x54a1b8:c.instructions+=22;goto B54a1b8;
case 0x54a1bc:c.instructions+=21;goto B54a1bc;
case 0x54a1bd:c.instructions+=20;goto B54a1bd;
case 0x54a1c1:c.instructions+=19;goto B54a1c1;
case 0x54a1c5:c.instructions+=18;goto B54a1c5;
case 0x54a1cb:c.instructions+=17;goto B54a1cb;
case 0x54a1cf:c.instructions+=16;goto B54a1cf;
case 0x54a1d2:c.instructions+=15;goto B54a1d2;
case 0x54a1d4:c.instructions+=14;goto B54a1d4;
case 0x54a1d8:c.instructions+=13;goto B54a1d8;
case 0x54a1dc:c.instructions+=12;goto B54a1dc;
case 0x54a1df:c.instructions+=11;goto B54a1df;
case 0x54a1e0:c.instructions+=10;goto B54a1e0;
case 0x54a1e2:c.instructions+=9;goto B54a1e2;
case 0x54a1ea:c.instructions+=8;goto B54a1ea;
case 0x54a1f2:c.instructions+=7;goto B54a1f2;
case 0x54a1fa:c.instructions+=6;goto B54a1fa;
case 0x54a202:c.instructions+=5;goto B54a202;
case 0x54a20a:c.instructions+=4;goto B54a20a;
case 0x54a212:c.instructions+=3;goto B54a212;
case 0x54a21a:c.instructions+=2;goto B54a21a;
case 0x54a222:c.instructions+=1;goto B54a222;
case 0x54a227:goto L54a227;
case 0x54a22c:c.instructions+=1;goto B54a22c;
case 0x54a231:goto L54a231;
case 0x54a234:c.instructions+=3;goto B54a234;
case 0x54a235:c.instructions+=2;goto B54a235;
case 0x54a236:c.instructions+=1;goto B54a236;
case 0x54a23b:goto L54a23b;
case 0x54a23f:c.instructions+=6;goto B54a23f;
case 0x54a242:c.instructions+=5;goto B54a242;
case 0x54a245:c.instructions+=4;goto B54a245;
case 0x54a247:c.instructions+=3;goto B54a247;
case 0x54a24a:c.instructions+=2;goto B54a24a;
case 0x54a24c:c.instructions+=1;goto B54a24c;
case 0x54a24f:goto L54a24f;
case 0x54a250:c.instructions+=2;goto B54a250;
case 0x54a253:c.instructions+=1;goto B54a253;
case 0x54a260:goto L54a260;
case 0x54a261:c.instructions+=11;goto B54a261;
case 0x54a263:c.instructions+=10;goto B54a263;
case 0x54a266:c.instructions+=9;goto B54a266;
case 0x54a267:c.instructions+=8;goto B54a267;
case 0x54a26a:c.instructions+=7;goto B54a26a;
case 0x54a26b:c.instructions+=6;goto B54a26b;
case 0x54a26c:c.instructions+=5;goto B54a26c;
case 0x54a271:c.instructions+=4;goto B54a271;
case 0x54a276:c.instructions+=3;goto B54a276;
case 0x54a277:c.instructions+=2;goto B54a277;
case 0x54a27a:c.instructions+=1;goto B54a27a;
case 0x54a27f:goto L54a27f;
case 0x54a285:c.instructions+=3;goto B54a285;
case 0x54a288:c.instructions+=2;goto B54a288;
case 0x54a28a:c.instructions+=1;goto B54a28a;
case 0x54a28f:goto L54a28f;
case 0x54a291:c.instructions+=1;goto B54a291;
case 0x54a293:goto L54a293;
case 0x54a299:c.instructions+=4;goto B54a299;
case 0x54a29b:c.instructions+=3;goto B54a29b;
case 0x54a29d:c.instructions+=2;goto B54a29d;
case 0x54a29f:c.instructions+=1;goto B54a29f;
case 0x54a2a4:goto L54a2a4;
case 0x54a2aa:c.instructions+=3;goto B54a2aa;
case 0x54a2ac:c.instructions+=2;goto B54a2ac;
case 0x54a2af:c.instructions+=1;goto B54a2af;
case 0x54a2b1:goto L54a2b1;
case 0x54a2b3:goto L54a2b3;
case 0x54a2b9:goto L54a2b9;
case 0x54a2bf:c.instructions+=7;goto B54a2bf;
case 0x54a2c1:c.instructions+=6;goto B54a2c1;
case 0x54a2c3:c.instructions+=5;goto B54a2c3;
case 0x54a2c6:c.instructions+=4;goto B54a2c6;
case 0x54a2c9:c.instructions+=3;goto B54a2c9;
case 0x54a2cc:c.instructions+=2;goto B54a2cc;
case 0x54a2ce:c.instructions+=1;goto B54a2ce;
case 0x54a2d0:goto L54a2d0;
case 0x54a2d3:c.instructions+=3;goto B54a2d3;
case 0x54a2d4:c.instructions+=2;goto B54a2d4;
case 0x54a2d9:c.instructions+=1;goto B54a2d9;
case 0x54a2de:goto L54a2de;
case 0x54a2e1:c.instructions+=3;goto B54a2e1;
case 0x54a2e3:c.instructions+=2;goto B54a2e3;
case 0x54a2e5:c.instructions+=1;goto B54a2e5;
case 0x54a2e7:goto L54a2e7;
case 0x54a2e8:c.instructions+=1;goto B54a2e8;
case 0x54a2ed:goto L54a2ed;
case 0x54a2f0:c.instructions+=2;goto B54a2f0;
case 0x54a2f2:c.instructions+=1;goto B54a2f2;
case 0x54a2f4:goto L54a2f4;
case 0x54a2f5:c.instructions+=2;goto B54a2f5;
case 0x54a2f7:c.instructions+=1;goto B54a2f7;
case 0x54a2fc:goto L54a2fc;
case 0x54a2fe:c.instructions+=1;goto B54a2fe;
case 0x54a300:goto L54a300;
case 0x54a302:c.instructions+=1;goto B54a302;
case 0x54a304:goto L54a304;
case 0x54a309:c.instructions+=2;goto B54a309;
case 0x54a30b:c.instructions+=1;goto B54a30b;
case 0x54a30d:goto L54a30d;
case 0x54a310:c.instructions+=3;goto B54a310;
case 0x54a311:c.instructions+=2;goto B54a311;
case 0x54a312:c.instructions+=1;goto B54a312;
case 0x54a317:goto L54a317;
case 0x54a319:c.instructions+=1;goto B54a319;
case 0x54a31b:goto L54a31b;
case 0x54a31d:goto L54a31d;
case 0x54a320:c.instructions+=12;goto B54a320;
case 0x54a323:c.instructions+=11;goto B54a323;
case 0x54a326:c.instructions+=10;goto B54a326;
case 0x54a329:c.instructions+=9;goto B54a329;
case 0x54a32c:c.instructions+=8;goto B54a32c;
case 0x54a32f:c.instructions+=7;goto B54a32f;
case 0x54a332:c.instructions+=6;goto B54a332;
case 0x54a335:c.instructions+=5;goto B54a335;
case 0x54a337:c.instructions+=4;goto B54a337;
case 0x54a339:c.instructions+=3;goto B54a339;
case 0x54a33b:c.instructions+=2;goto B54a33b;
case 0x54a33e:c.instructions+=1;goto B54a33e;
case 0x54a340:goto L54a340;
case 0x54a343:c.instructions+=4;goto B54a343;
case 0x54a344:c.instructions+=3;goto B54a344;
case 0x54a349:c.instructions+=2;goto B54a349;
case 0x54a34a:c.instructions+=1;goto B54a34a;
case 0x54a34f:goto L54a34f;
case 0x54a352:c.instructions+=7;goto B54a352;
case 0x54a358:c.instructions+=6;goto B54a358;
case 0x54a35b:c.instructions+=5;goto B54a35b;
case 0x54a35e:c.instructions+=4;goto B54a35e;
case 0x54a361:c.instructions+=3;goto B54a361;
case 0x54a362:c.instructions+=2;goto B54a362;
case 0x54a363:c.instructions+=1;goto B54a363;
case 0x54a368:goto L54a368;
case 0x54a36b:c.instructions+=1;goto B54a36b;
case 0x54a36d:goto L54a36d;
case 0x54a36f:c.instructions+=1;goto B54a36f;
case 0x54a371:goto L54a371;
case 0x54a376:c.instructions+=2;goto B54a376;
case 0x54a378:c.instructions+=1;goto B54a378;
case 0x54a37a:goto L54a37a;
case 0x54a37e:c.instructions+=1;goto B54a37e;
case 0x54a380:goto L54a380;
case 0x54a387:goto L54a387;
case 0x54a38b:c.instructions+=1;goto B54a38b;
case 0x54a38d:goto L54a38d;
case 0x54a390:c.instructions+=3;goto B54a390;
case 0x54a393:c.instructions+=2;goto B54a393;
case 0x54a395:c.instructions+=1;goto B54a395;
case 0x54a397:goto L54a397;
case 0x54a398:c.instructions+=1;goto B54a398;
case 0x54a39d:goto L54a39d;
case 0x54a3a0:c.instructions+=3;goto B54a3a0;
case 0x54a3a3:c.instructions+=2;goto B54a3a3;
case 0x54a3a4:c.instructions+=1;goto B54a3a4;
case 0x54a3a6:goto L54a3a6;
case 0x54a3a9:c.instructions+=7;goto B54a3a9;
case 0x54a3ac:c.instructions+=6;goto B54a3ac;
case 0x54a3af:c.instructions+=5;goto B54a3af;
case 0x54a3b0:c.instructions+=4;goto B54a3b0;
case 0x54a3b3:c.instructions+=3;goto B54a3b3;
case 0x54a3b6:c.instructions+=2;goto B54a3b6;
case 0x54a3b9:c.instructions+=1;goto B54a3b9;
case 0x54a3bf:goto L54a3bf;
case 0x54a3c2:c.instructions+=4;goto B54a3c2;
case 0x54a3c5:c.instructions+=3;goto B54a3c5;
case 0x54a3cb:c.instructions+=2;goto B54a3cb;
case 0x54a3cd:c.instructions+=1;goto B54a3cd;
case 0x54a3d2:goto L54a3d2;
case 0x54a3d4:c.instructions+=8;goto B54a3d4;
case 0x54a3d9:c.instructions+=7;goto B54a3d9;
case 0x54a3db:c.instructions+=6;goto B54a3db;
case 0x54a3de:c.instructions+=5;goto B54a3de;
case 0x54a3e0:c.instructions+=4;goto B54a3e0;
case 0x54a3e3:c.instructions+=3;goto B54a3e3;
case 0x54a3e5:c.instructions+=2;goto B54a3e5;
case 0x54a3e8:c.instructions+=1;goto B54a3e8;
case 0x54a3ea:goto L54a3ea;
case 0x54a3f1:c.instructions+=1;goto B54a3f1;
case 0x54a3f3:goto L54a3f3;
case 0x54a3f8:c.instructions+=8;goto B54a3f8;
case 0x54a3fa:c.instructions+=7;goto B54a3fa;
case 0x54a3fd:c.instructions+=6;goto B54a3fd;
case 0x54a3ff:c.instructions+=5;goto B54a3ff;
case 0x54a402:c.instructions+=4;goto B54a402;
case 0x54a404:c.instructions+=3;goto B54a404;
case 0x54a407:c.instructions+=2;goto B54a407;
case 0x54a40e:c.instructions+=1;goto B54a40e;
case 0x54a410:goto L54a410;
case 0x54a417:goto L54a417;
case 0x54a41d:c.instructions+=5;goto B54a41d;
case 0x54a424:c.instructions+=4;goto B54a424;
case 0x54a426:c.instructions+=3;goto B54a426;
case 0x54a429:c.instructions+=2;goto B54a429;
case 0x54a42b:c.instructions+=1;goto B54a42b;
case 0x54a430:goto L54a430;
case 0x54a433:c.instructions+=5;goto B54a433;
case 0x54a434:c.instructions+=4;goto B54a434;
case 0x54a435:c.instructions+=3;goto B54a435;
case 0x54a43a:c.instructions+=2;goto B54a43a;
case 0x54a43d:c.instructions+=1;goto B54a43d;
case 0x54a442:goto L54a442;
case 0x54a444:c.instructions+=4;goto B54a444;
case 0x54a447:c.instructions+=3;goto B54a447;
case 0x54a44a:c.instructions+=2;goto B54a44a;
case 0x54a44c:c.instructions+=1;goto B54a44c;
case 0x54a44e:goto L54a44e;
case 0x54a454:c.instructions+=2;goto B54a454;
case 0x54a456:c.instructions+=1;goto B54a456;
case 0x54a458:goto L54a458;
case 0x54a45e:c.instructions+=2;goto B54a45e;
case 0x54a460:c.instructions+=1;goto B54a460;
case 0x54a462:goto L54a462;
case 0x54a465:c.instructions+=2;goto B54a465;
case 0x54a467:c.instructions+=1;goto B54a467;
case 0x54a469:goto L54a469;
case 0x54a46f:c.instructions+=4;goto B54a46f;
case 0x54a475:c.instructions+=3;goto B54a475;
case 0x54a476:c.instructions+=2;goto B54a476;
case 0x54a477:c.instructions+=1;goto B54a477;
case 0x54a47c:goto L54a47c;
case 0x54a47e:c.instructions+=1;goto B54a47e;
case 0x54a480:goto L54a480;
case 0x54a486:c.instructions+=5;goto B54a486;
case 0x54a489:c.instructions+=4;goto B54a489;
case 0x54a48f:c.instructions+=3;goto B54a48f;
case 0x54a490:c.instructions+=2;goto B54a490;
case 0x54a491:c.instructions+=1;goto B54a491;
case 0x54a496:goto L54a496;
case 0x54a498:c.instructions+=1;goto B54a498;
case 0x54a49a:goto L54a49a;
case 0x54a49c:goto L54a49c;
case 0x54a49d:c.instructions+=2;goto B54a49d;
case 0x54a4a2:c.instructions+=1;goto B54a4a2;
case 0x54a4a7:goto L54a4a7;
case 0x54a4a9:c.instructions+=1;goto B54a4a9;
case 0x54a4ab:goto L54a4ab;
case 0x54a4ae:c.instructions+=2;goto B54a4ae;
case 0x54a4b0:c.instructions+=1;goto B54a4b0;
case 0x54a4b2:goto L54a4b2;
case 0x54a4b8:goto L54a4b8;
case 0x54a4ba:c.instructions+=2;goto B54a4ba;
case 0x54a4bc:c.instructions+=1;goto B54a4bc;
case 0x54a4be:goto L54a4be;
case 0x54a4bf:c.instructions+=1;goto B54a4bf;
case 0x54a4c4:goto L54a4c4;
case 0x54a4c6:c.instructions+=1;goto B54a4c6;
case 0x54a4c8:goto L54a4c8;
case 0x54a4ca:c.instructions+=1;goto B54a4ca;
case 0x54a4cc:goto L54a4cc;
case 0x54a4d2:goto L54a4d2;
case 0x54a4d4:c.instructions+=1;goto B54a4d4;
case 0x54a4d6:goto L54a4d6;
case 0x54a4d9:c.instructions+=4;goto B54a4d9;
case 0x54a4da:c.instructions+=3;goto B54a4da;
case 0x54a4dd:c.instructions+=2;goto B54a4dd;
case 0x54a4de:c.instructions+=1;goto B54a4de;
case 0x54a4e3:goto L54a4e3;
case 0x54a4e5:c.instructions+=1;goto B54a4e5;
case 0x54a4e7:goto L54a4e7;
case 0x54a4e9:goto L54a4e9;
case 0x54a4ec:c.instructions+=15;goto B54a4ec;
case 0x54a4ef:c.instructions+=14;goto B54a4ef;
case 0x54a4f2:c.instructions+=13;goto B54a4f2;
case 0x54a4f5:c.instructions+=12;goto B54a4f5;
case 0x54a4f8:c.instructions+=11;goto B54a4f8;
case 0x54a4fe:c.instructions+=10;goto B54a4fe;
case 0x54a500:c.instructions+=9;goto B54a500;
case 0x54a503:c.instructions+=8;goto B54a503;
case 0x54a506:c.instructions+=7;goto B54a506;
case 0x54a509:c.instructions+=6;goto B54a509;
case 0x54a50c:c.instructions+=5;goto B54a50c;
case 0x54a50e:c.instructions+=4;goto B54a50e;
case 0x54a510:c.instructions+=3;goto B54a510;
case 0x54a512:c.instructions+=2;goto B54a512;
case 0x54a515:c.instructions+=1;goto B54a515;
case 0x54a51b:goto L54a51b;
case 0x54a51e:c.instructions+=1;goto B54a51e;
case 0x54a523:goto L54a523;
case 0x54a527:c.instructions+=4;goto B54a527;
case 0x54a528:c.instructions+=3;goto B54a528;
case 0x54a52d:c.instructions+=2;goto B54a52d;
case 0x54a52e:c.instructions+=1;goto B54a52e;
case 0x54a533:goto L54a533;
case 0x54a536:c.instructions+=5;goto B54a536;
case 0x54a537:c.instructions+=4;goto B54a537;
case 0x54a53a:c.instructions+=3;goto B54a53a;
case 0x54a53b:c.instructions+=2;goto B54a53b;
case 0x54a53c:c.instructions+=1;goto B54a53c;
case 0x54a541:goto L54a541;
case 0x54a544:c.instructions+=8;goto B54a544;
case 0x54a547:c.instructions+=7;goto B54a547;
case 0x54a54d:c.instructions+=6;goto B54a54d;
case 0x54a550:c.instructions+=5;goto B54a550;
case 0x54a551:c.instructions+=4;goto B54a551;
case 0x54a552:c.instructions+=3;goto B54a552;
case 0x54a555:c.instructions+=2;goto B54a555;
case 0x54a556:c.instructions+=1;goto B54a556;
case 0x54a55b:goto L54a55b;
case 0x54a55e:c.instructions+=5;goto B54a55e;
case 0x54a55f:c.instructions+=4;goto B54a55f;
case 0x54a562:c.instructions+=3;goto B54a562;
case 0x54a563:c.instructions+=2;goto B54a563;
case 0x54a564:c.instructions+=1;goto B54a564;
case 0x54a569:goto L54a569;
case 0x54a56c:c.instructions+=5;goto B54a56c;
case 0x54a56f:c.instructions+=4;goto B54a56f;
case 0x54a570:c.instructions+=3;goto B54a570;
case 0x54a571:c.instructions+=2;goto B54a571;
case 0x54a572:c.instructions+=1;goto B54a572;
case 0x54a577:goto L54a577;
case 0x54a57a:c.instructions+=2;goto B54a57a;
case 0x54a57c:c.instructions+=1;goto B54a57c;
case 0x54a582:goto L54a582;
case 0x54a587:c.instructions+=2;goto B54a587;
case 0x54a589:c.instructions+=1;goto B54a589;
case 0x54a58b:goto L54a58b;
case 0x54a58f:c.instructions+=1;goto B54a58f;
case 0x54a591:goto L54a591;
case 0x54a594:c.instructions+=3;goto B54a594;
case 0x54a597:c.instructions+=2;goto B54a597;
case 0x54a59c:c.instructions+=1;goto B54a59c;
case 0x54a59f:goto L54a59f;
case 0x54a5a3:c.instructions+=1;goto B54a5a3;
case 0x54a5a5:goto L54a5a5;
case 0x54a5a8:c.instructions+=3;goto B54a5a8;
case 0x54a5ab:c.instructions+=2;goto B54a5ab;
case 0x54a5ad:c.instructions+=1;goto B54a5ad;
case 0x54a5af:goto L54a5af;
case 0x54a5b0:goto L54a5b0;
case 0x54a5b1:c.instructions+=1;goto B54a5b1;
case 0x54a5b6:goto L54a5b6;
case 0x54a5b9:c.instructions+=3;goto B54a5b9;
case 0x54a5bc:c.instructions+=2;goto B54a5bc;
case 0x54a5bd:c.instructions+=1;goto B54a5bd;
case 0x54a5bf:goto L54a5bf;
case 0x54a5c1:goto L54a5c1;
case 0x54a5c3:c.instructions+=1;goto B54a5c3;
case 0x54a5c5:goto L54a5c5;
case 0x54a5ca:c.instructions+=2;goto B54a5ca;
case 0x54a5cc:c.instructions+=1;goto B54a5cc;
case 0x54a5ce:goto L54a5ce;
case 0x54a5d2:c.instructions+=1;goto B54a5d2;
case 0x54a5d4:goto L54a5d4;
case 0x54a5db:goto L54a5db;
case 0x54a5df:c.instructions+=1;goto B54a5df;
case 0x54a5e1:goto L54a5e1;
case 0x54a5e4:c.instructions+=3;goto B54a5e4;
case 0x54a5e7:c.instructions+=2;goto B54a5e7;
case 0x54a5e9:c.instructions+=1;goto B54a5e9;
case 0x54a5eb:goto L54a5eb;
case 0x54a5f0:goto L54a5f0;
case 0x54a5f1:c.instructions+=1;goto B54a5f1;
case 0x54a5f6:goto L54a5f6;
case 0x54a5f9:c.instructions+=3;goto B54a5f9;
case 0x54a5fc:c.instructions+=2;goto B54a5fc;
case 0x54a5fd:c.instructions+=1;goto B54a5fd;
case 0x54a5ff:goto L54a5ff;
case 0x54a602:c.instructions+=3;goto B54a602;
case 0x54a605:c.instructions+=2;goto B54a605;
case 0x54a608:c.instructions+=1;goto B54a608;
case 0x54a60e:goto L54a60e;
case 0x54a60f:c.instructions+=5;goto B54a60f;
case 0x54a610:c.instructions+=4;goto B54a610;
case 0x54a611:c.instructions+=3;goto B54a611;
case 0x54a613:c.instructions+=2;goto B54a613;
case 0x54a614:c.instructions+=1;goto B54a614;
case 0x54a620:goto L54a620;
case 0x54a621:c.instructions+=8;goto B54a621;
case 0x54a623:c.instructions+=7;goto B54a623;
case 0x54a626:c.instructions+=6;goto B54a626;
case 0x54a627:c.instructions+=5;goto B54a627;
case 0x54a628:c.instructions+=4;goto B54a628;
case 0x54a629:c.instructions+=3;goto B54a629;
case 0x54a62e:c.instructions+=2;goto B54a62e;
case 0x54a630:c.instructions+=1;goto B54a630;
case 0x54a635:goto L54a635;
case 0x54a63b:c.instructions+=7;goto B54a63b;
case 0x54a641:c.instructions+=6;goto B54a641;
case 0x54a643:c.instructions+=5;goto B54a643;
case 0x54a646:c.instructions+=4;goto B54a646;
case 0x54a649:c.instructions+=3;goto B54a649;
case 0x54a64b:c.instructions+=2;goto B54a64b;
case 0x54a64e:c.instructions+=1;goto B54a64e;
case 0x54a654:goto L54a654;
case 0x54a657:c.instructions+=2;goto B54a657;
case 0x54a659:c.instructions+=1;goto B54a659;
case 0x54a65e:goto L54a65e;
case 0x54a664:c.instructions+=2;goto B54a664;
case 0x54a666:c.instructions+=1;goto B54a666;
case 0x54a668:goto L54a668;
case 0x54a66e:goto L54a66e;
case 0x54a674:c.instructions+=3;goto B54a674;
case 0x54a676:c.instructions+=2;goto B54a676;
case 0x54a679:c.instructions+=1;goto B54a679;
case 0x54a67e:goto L54a67e;
case 0x54a680:c.instructions+=5;goto B54a680;
case 0x54a682:c.instructions+=4;goto B54a682;
case 0x54a687:c.instructions+=3;goto B54a687;
case 0x54a68c:c.instructions+=2;goto B54a68c;
case 0x54a68e:c.instructions+=1;goto B54a68e;
case 0x54a693:goto L54a693;
case 0x54a695:c.instructions+=2;goto B54a695;
case 0x54a697:c.instructions+=1;goto B54a697;
case 0x54a699:goto L54a699;
case 0x54a69e:c.instructions+=1;goto B54a69e;
case 0x54a6a3:goto L54a6a3;
case 0x54a6a5:goto L54a6a5;
case 0x54a6aa:c.instructions+=1;goto B54a6aa;
case 0x54a6af:goto L54a6af;
case 0x54a6b1:c.instructions+=2;goto B54a6b1;
case 0x54a6b3:c.instructions+=1;goto B54a6b3;
case 0x54a6b5:goto L54a6b5;
case 0x54a6ba:c.instructions+=1;goto B54a6ba;
case 0x54a6bf:goto L54a6bf;
case 0x54a6c1:goto L54a6c1;
case 0x54a6c7:c.instructions+=2;goto B54a6c7;
case 0x54a6cd:c.instructions+=1;goto B54a6cd;
case 0x54a6d2:goto L54a6d2;
case 0x54a6d5:c.instructions+=10;goto B54a6d5;
case 0x54a6d8:c.instructions+=9;goto B54a6d8;
case 0x54a6d9:c.instructions+=8;goto B54a6d9;
case 0x54a6dc:c.instructions+=7;goto B54a6dc;
case 0x54a6dd:c.instructions+=6;goto B54a6dd;
case 0x54a6e0:c.instructions+=5;goto B54a6e0;
case 0x54a6e3:c.instructions+=4;goto B54a6e3;
case 0x54a6e4:c.instructions+=3;goto B54a6e4;
case 0x54a6e5:c.instructions+=2;goto B54a6e5;
case 0x54a6e6:c.instructions+=1;goto B54a6e6;
case 0x54a6eb:goto L54a6eb;
case 0x54a6ee:c.instructions+=1;goto B54a6ee;
case 0x54a6f0:goto L54a6f0;
case 0x54a6f3:c.instructions+=4;goto B54a6f3;
case 0x54a6f8:c.instructions+=3;goto B54a6f8;
case 0x54a6f9:c.instructions+=2;goto B54a6f9;
case 0x54a6fa:c.instructions+=1;goto B54a6fa;
case 0x54a6ff:goto L54a6ff;
case 0x54a702:goto L54a702;
case 0x54a707:c.instructions+=1;goto B54a707;
case 0x54a70c:goto L54a70c;
case 0x54a712:c.instructions+=7;goto B54a712;
case 0x54a718:c.instructions+=6;goto B54a718;
case 0x54a71a:c.instructions+=5;goto B54a71a;
case 0x54a71d:c.instructions+=4;goto B54a71d;
case 0x54a720:c.instructions+=3;goto B54a720;
case 0x54a722:c.instructions+=2;goto B54a722;
case 0x54a725:c.instructions+=1;goto B54a725;
case 0x54a72b:goto L54a72b;
case 0x54a72e:c.instructions+=2;goto B54a72e;
case 0x54a730:c.instructions+=1;goto B54a730;
case 0x54a735:goto L54a735;
case 0x54a73b:c.instructions+=2;goto B54a73b;
case 0x54a73d:c.instructions+=1;goto B54a73d;
case 0x54a73f:goto L54a73f;
case 0x54a745:goto L54a745;
case 0x54a747:c.instructions+=2;goto B54a747;
case 0x54a74a:c.instructions+=1;goto B54a74a;
case 0x54a74f:goto L54a74f;
case 0x54a751:c.instructions+=5;goto B54a751;
case 0x54a753:c.instructions+=4;goto B54a753;
case 0x54a758:c.instructions+=3;goto B54a758;
case 0x54a75d:c.instructions+=2;goto B54a75d;
case 0x54a75f:c.instructions+=1;goto B54a75f;
case 0x54a764:goto L54a764;
case 0x54a766:c.instructions+=2;goto B54a766;
case 0x54a768:c.instructions+=1;goto B54a768;
case 0x54a76a:goto L54a76a;
case 0x54a76f:c.instructions+=1;goto B54a76f;
case 0x54a774:goto L54a774;
case 0x54a776:goto L54a776;
case 0x54a77b:c.instructions+=1;goto B54a77b;
case 0x54a780:goto L54a780;
case 0x54a782:c.instructions+=2;goto B54a782;
case 0x54a784:c.instructions+=1;goto B54a784;
case 0x54a786:goto L54a786;
case 0x54a78b:c.instructions+=1;goto B54a78b;
case 0x54a790:goto L54a790;
case 0x54a792:goto L54a792;
case 0x54a798:c.instructions+=2;goto B54a798;
case 0x54a79e:c.instructions+=1;goto B54a79e;
case 0x54a7a3:goto L54a7a3;
case 0x54a7a6:c.instructions+=10;goto B54a7a6;
case 0x54a7a9:c.instructions+=9;goto B54a7a9;
case 0x54a7aa:c.instructions+=8;goto B54a7aa;
case 0x54a7ad:c.instructions+=7;goto B54a7ad;
case 0x54a7ae:c.instructions+=6;goto B54a7ae;
case 0x54a7b1:c.instructions+=5;goto B54a7b1;
case 0x54a7b4:c.instructions+=4;goto B54a7b4;
case 0x54a7b5:c.instructions+=3;goto B54a7b5;
case 0x54a7b6:c.instructions+=2;goto B54a7b6;
case 0x54a7b7:c.instructions+=1;goto B54a7b7;
case 0x54a7bc:goto L54a7bc;
case 0x54a7bf:c.instructions+=1;goto B54a7bf;
case 0x54a7c1:goto L54a7c1;
case 0x54a7c4:c.instructions+=4;goto B54a7c4;
case 0x54a7c9:c.instructions+=3;goto B54a7c9;
case 0x54a7ca:c.instructions+=2;goto B54a7ca;
case 0x54a7cb:c.instructions+=1;goto B54a7cb;
case 0x54a7d0:goto L54a7d0;
case 0x54a7d3:goto L54a7d3;
case 0x54a7d6:c.instructions+=5;goto B54a7d6;
case 0x54a7d8:c.instructions+=4;goto B54a7d8;
case 0x54a7dd:c.instructions+=3;goto B54a7dd;
case 0x54a7e2:c.instructions+=2;goto B54a7e2;
case 0x54a7e3:c.instructions+=1;goto B54a7e3;
case 0x54a7e8:goto L54a7e8;
case 0x54a7eb:c.instructions+=6;goto B54a7eb;
case 0x54a7ec:c.instructions+=5;goto B54a7ec;
case 0x54a7ed:c.instructions+=4;goto B54a7ed;
case 0x54a7ee:c.instructions+=3;goto B54a7ee;
case 0x54a7f0:c.instructions+=2;goto B54a7f0;
case 0x54a7f1:c.instructions+=1;goto B54a7f1;
case 0x54a800:goto L54a800;
case 0x54a801:c.instructions+=15;goto B54a801;
case 0x54a803:c.instructions+=14;goto B54a803;
case 0x54a806:c.instructions+=13;goto B54a806;
case 0x54a80b:c.instructions+=12;goto B54a80b;
case 0x54a80c:c.instructions+=11;goto B54a80c;
case 0x54a813:c.instructions+=10;goto B54a813;
case 0x54a814:c.instructions+=9;goto B54a814;
case 0x54a816:c.instructions+=8;goto B54a816;
case 0x54a819:c.instructions+=7;goto B54a819;
case 0x54a81b:c.instructions+=6;goto B54a81b;
case 0x54a81e:c.instructions+=5;goto B54a81e;
case 0x54a81f:c.instructions+=4;goto B54a81f;
case 0x54a822:c.instructions+=3;goto B54a822;
case 0x54a826:c.instructions+=2;goto B54a826;
case 0x54a82d:c.instructions+=1;goto B54a82d;
case 0x54a82f:goto L54a82f;
case 0x54a835:c.instructions+=1;goto B54a835;
case 0x54a83a:goto L54a83a;
case 0x54a83d:c.instructions+=4;goto B54a83d;
case 0x54a843:c.instructions+=3;goto B54a843;
case 0x54a845:c.instructions+=2;goto B54a845;
case 0x54a848:c.instructions+=1;goto B54a848;
case 0x54a84e:goto L54a84e;
case 0x54a851:c.instructions+=6;goto B54a851;
case 0x54a853:c.instructions+=5;goto B54a853;
case 0x54a858:c.instructions+=4;goto B54a858;
case 0x54a85d:c.instructions+=3;goto B54a85d;
case 0x54a85e:c.instructions+=2;goto B54a85e;
case 0x54a862:c.instructions+=1;goto B54a862;
case 0x54a867:goto L54a867;
case 0x54a86a:c.instructions+=5;goto B54a86a;
case 0x54a86c:c.instructions+=4;goto B54a86c;
case 0x54a86d:c.instructions+=3;goto B54a86d;
case 0x54a86f:c.instructions+=2;goto B54a86f;
case 0x54a873:c.instructions+=1;goto B54a873;
case 0x54a878:goto L54a878;
case 0x54a879:c.instructions+=2;goto B54a879;
case 0x54a87b:c.instructions+=1;goto B54a87b;
case 0x54a880:goto L54a880;
case 0x54a885:c.instructions+=5;goto B54a885;
case 0x54a888:c.instructions+=4;goto B54a888;
case 0x54a88b:c.instructions+=3;goto B54a88b;
case 0x54a88e:c.instructions+=2;goto B54a88e;
case 0x54a893:c.instructions+=1;goto B54a893;
case 0x54a899:goto L54a899;
case 0x54a89e:c.instructions+=1;goto B54a89e;
case 0x54a8a0:goto L54a8a0;
case 0x54a8a5:c.instructions+=1;goto B54a8a5;
case 0x54a8ab:goto L54a8ab;
case 0x54a8b1:c.instructions+=2;goto B54a8b1;
case 0x54a8b3:c.instructions+=1;goto B54a8b3;
case 0x54a8b9:goto L54a8b9;
case 0x54a8bf:c.instructions+=5;goto B54a8bf;
case 0x54a8c2:c.instructions+=4;goto B54a8c2;
case 0x54a8c4:c.instructions+=3;goto B54a8c4;
case 0x54a8c5:c.instructions+=2;goto B54a8c5;
case 0x54a8c6:c.instructions+=1;goto B54a8c6;
case 0x54a8cb:goto L54a8cb;
case 0x54a8cc:c.instructions+=5;goto B54a8cc;
case 0x54a8cd:c.instructions+=4;goto B54a8cd;
case 0x54a8ce:c.instructions+=3;goto B54a8ce;
case 0x54a8d0:c.instructions+=2;goto B54a8d0;
case 0x54a8d1:c.instructions+=1;goto B54a8d1;
case 0x54a8d4:goto L54a8d4;
case 0x54a8d8:c.instructions+=1;goto B54a8d8;
case 0x54a8da:goto L54a8da;
case 0x54a8e0:c.instructions+=1;goto B54a8e0;
case 0x54a8e5:goto L54a8e5;
case 0x54a8e8:c.instructions+=2;goto B54a8e8;
case 0x54a8ea:c.instructions+=1;goto B54a8ea;
case 0x54a8ec:goto L54a8ec;
case 0x54a8f2:c.instructions+=2;goto B54a8f2;
case 0x54a8f4:c.instructions+=1;goto B54a8f4;
case 0x54a8f6:goto L54a8f6;
case 0x54a8f9:c.instructions+=2;goto B54a8f9;
case 0x54a8fa:c.instructions+=1;goto B54a8fa;
case 0x54a8ff:goto L54a8ff;
case 0x54a904:c.instructions+=1;goto B54a904;
case 0x54a909:goto L54a909;
case 0x54a90c:c.instructions+=2;goto B54a90c;
case 0x54a90e:c.instructions+=1;goto B54a90e;
case 0x54a910:goto L54a910;
case 0x54a916:c.instructions+=2;goto B54a916;
case 0x54a918:c.instructions+=1;goto B54a918;
case 0x54a91a:goto L54a91a;
case 0x54a91f:c.instructions+=1;goto B54a91f;
case 0x54a924:goto L54a924;
case 0x54a925:c.instructions+=5;goto B54a925;
case 0x54a926:c.instructions+=4;goto B54a926;
case 0x54a927:c.instructions+=3;goto B54a927;
case 0x54a929:c.instructions+=2;goto B54a929;
case 0x54a92a:c.instructions+=1;goto B54a92a;
case 0x54a92d:goto L54a92d;
case 0x54a930:c.instructions+=2;goto B54a930;
case 0x54a932:c.instructions+=1;goto B54a932;
case 0x54a934:goto L54a934;
case 0x54a936:c.instructions+=3;goto B54a936;
case 0x54a937:c.instructions+=2;goto B54a937;
case 0x54a939:c.instructions+=1;goto B54a939;
case 0x54a93e:goto L54a93e;
case 0x54a944:c.instructions+=2;goto B54a944;
case 0x54a946:c.instructions+=1;goto B54a946;
case 0x54a94b:goto L54a94b;
case 0x54a94e:c.instructions+=5;goto B54a94e;
case 0x54a950:c.instructions+=4;goto B54a950;
case 0x54a955:c.instructions+=3;goto B54a955;
case 0x54a95a:c.instructions+=2;goto B54a95a;
case 0x54a95b:c.instructions+=1;goto B54a95b;
case 0x54a960:goto L54a960;
case 0x54a963:goto L54a963;
case 0x54a964:c.instructions+=5;goto B54a964;
case 0x54a965:c.instructions+=4;goto B54a965;
case 0x54a966:c.instructions+=3;goto B54a966;
case 0x54a968:c.instructions+=2;goto B54a968;
case 0x54a969:c.instructions+=1;goto B54a969;
case 0x54a970:goto L54a970;
case 0x54a971:c.instructions+=11;goto B54a971;
case 0x54a973:c.instructions+=10;goto B54a973;
case 0x54a976:c.instructions+=9;goto B54a976;
case 0x54a977:c.instructions+=8;goto B54a977;
case 0x54a978:c.instructions+=7;goto B54a978;
case 0x54a97b:c.instructions+=6;goto B54a97b;
case 0x54a982:c.instructions+=5;goto B54a982;
case 0x54a989:c.instructions+=4;goto B54a989;
case 0x54a990:c.instructions+=3;goto B54a990;
case 0x54a997:c.instructions+=2;goto B54a997;
case 0x54a998:c.instructions+=1;goto B54a998;
case 0x54a9a0:goto L54a9a0;
case 0x54a9a3:c.instructions+=9;goto B54a9a3;
case 0x54a9a5:c.instructions+=8;goto B54a9a5;
case 0x54a9a9:c.instructions+=7;goto B54a9a9;
case 0x54a9ac:c.instructions+=6;goto B54a9ac;
case 0x54a9ad:c.instructions+=5;goto B54a9ad;
case 0x54a9b3:c.instructions+=4;goto B54a9b3;
case 0x54a9b8:c.instructions+=3;goto B54a9b8;
case 0x54a9bb:c.instructions+=2;goto B54a9bb;
case 0x54a9be:c.instructions+=1;goto B54a9be;
case 0x54a9c3:goto L54a9c3;
case 0x54a9c6:c.instructions+=5;goto B54a9c6;
case 0x54a9c8:c.instructions+=4;goto B54a9c8;
case 0x54a9ca:c.instructions+=3;goto B54a9ca;
case 0x54a9cd:c.instructions+=2;goto B54a9cd;
case 0x54a9cf:c.instructions+=1;goto B54a9cf;
case 0x54a9d1:goto L54a9d1;
case 0x54a9d6:c.instructions+=1;goto B54a9d6;
case 0x54a9d8:goto L54a9d8;
case 0x54a9da:c.instructions+=3;goto B54a9da;
case 0x54a9dd:c.instructions+=2;goto B54a9dd;
case 0x54a9de:c.instructions+=1;goto B54a9de;
case 0x54a9e3:goto L54a9e3;
case 0x54a9e8:c.instructions+=1;goto B54a9e8;
case 0x54a9ed:goto L54a9ed;
case 0x54a9ef:c.instructions+=1;goto B54a9ef;
case 0x54a9f1:goto L54a9f1;
case 0x54a9f6:c.instructions+=1;goto B54a9f6;
case 0x54a9fb:goto L54a9fb;
case 0x54a9fe:c.instructions+=8;goto B54a9fe;
case 0x54a9ff:c.instructions+=7;goto B54a9ff;
case 0x54aa02:c.instructions+=6;goto B54aa02;
case 0x54aa05:c.instructions+=5;goto B54aa05;
case 0x54aa06:c.instructions+=4;goto B54aa06;
case 0x54aa0b:c.instructions+=3;goto B54aa0b;
case 0x54aa0c:c.instructions+=2;goto B54aa0c;
case 0x54aa0d:c.instructions+=1;goto B54aa0d;
case 0x54aa12:goto L54aa12;
case 0x54aa15:c.instructions+=1;goto B54aa15;
case 0x54aa1a:goto L54aa1a;
case 0x54aa1d:c.instructions+=3;goto B54aa1d;
case 0x54aa20:c.instructions+=2;goto B54aa20;
case 0x54aa22:c.instructions+=1;goto B54aa22;
case 0x54aa24:goto L54aa24;
case 0x54aa25:c.instructions+=1;goto B54aa25;
case 0x54aa2a:goto L54aa2a;
case 0x54aa2d:c.instructions+=2;goto B54aa2d;
case 0x54aa2f:c.instructions+=1;goto B54aa2f;
case 0x54aa31:goto L54aa31;
case 0x54aa32:c.instructions+=2;goto B54aa32;
case 0x54aa34:c.instructions+=1;goto B54aa34;
case 0x54aa39:goto L54aa39;
case 0x54aa3b:c.instructions+=1;goto B54aa3b;
case 0x54aa3d:goto L54aa3d;
case 0x54aa42:c.instructions+=2;goto B54aa42;
case 0x54aa44:c.instructions+=1;goto B54aa44;
case 0x54aa46:goto L54aa46;
case 0x54aa49:c.instructions+=3;goto B54aa49;
case 0x54aa4a:c.instructions+=2;goto B54aa4a;
case 0x54aa4b:c.instructions+=1;goto B54aa4b;
case 0x54aa50:goto L54aa50;
case 0x54aa52:c.instructions+=2;goto B54aa52;
case 0x54aa54:c.instructions+=1;goto B54aa54;
case 0x54aa56:goto L54aa56;
case 0x54aa5a:c.instructions+=1;goto B54aa5a;
case 0x54aa5c:goto L54aa5c;
case 0x54aa5f:c.instructions+=3;goto B54aa5f;
case 0x54aa61:c.instructions+=2;goto B54aa61;
case 0x54aa65:c.instructions+=1;goto B54aa65;
case 0x54aa67:goto L54aa67;
case 0x54aa6b:goto L54aa6b;
case 0x54aa6e:c.instructions+=3;goto B54aa6e;
case 0x54aa73:c.instructions+=2;goto B54aa73;
case 0x54aa75:c.instructions+=1;goto B54aa75;
case 0x54aa77:goto L54aa77;
case 0x54aa7c:c.instructions+=2;goto B54aa7c;
case 0x54aa7f:c.instructions+=1;goto B54aa7f;
case 0x54aa82:goto L54aa82;
case 0x54aa88:c.instructions+=2;goto B54aa88;
case 0x54aa8a:c.instructions+=1;goto B54aa8a;
case 0x54aa8c:goto L54aa8c;
case 0x54aa8e:c.instructions+=2;goto B54aa8e;
case 0x54aa8f:c.instructions+=1;goto B54aa8f;
case 0x54aa91:goto L54aa91;
case 0x54aa94:c.instructions+=6;goto B54aa94;
case 0x54aa97:c.instructions+=5;goto B54aa97;
case 0x54aa9a:c.instructions+=4;goto B54aa9a;
case 0x54aa9c:c.instructions+=3;goto B54aa9c;
case 0x54aa9f:c.instructions+=2;goto B54aa9f;
case 0x54aaa1:c.instructions+=1;goto B54aaa1;
case 0x54aaa3:goto L54aaa3;
case 0x54aaa8:c.instructions+=1;goto B54aaa8;
case 0x54aaab:goto L54aaab;
case 0x54aaae:c.instructions+=3;goto B54aaae;
case 0x54aaaf:c.instructions+=2;goto B54aaaf;
case 0x54aab4:c.instructions+=1;goto B54aab4;
case 0x54aab9:goto L54aab9;
case 0x54aabc:c.instructions+=5;goto B54aabc;
case 0x54aabe:c.instructions+=4;goto B54aabe;
case 0x54aac0:c.instructions+=3;goto B54aac0;
case 0x54aac3:c.instructions+=2;goto B54aac3;
case 0x54aac5:c.instructions+=1;goto B54aac5;
case 0x54aac7:goto L54aac7;
case 0x54aacc:c.instructions+=1;goto B54aacc;
case 0x54aace:goto L54aace;
case 0x54aad0:c.instructions+=3;goto B54aad0;
case 0x54aad3:c.instructions+=2;goto B54aad3;
case 0x54aad4:c.instructions+=1;goto B54aad4;
case 0x54aad9:goto L54aad9;
case 0x54aade:c.instructions+=1;goto B54aade;
case 0x54aae3:goto L54aae3;
case 0x54aae5:c.instructions+=1;goto B54aae5;
case 0x54aae7:goto L54aae7;
case 0x54aaec:c.instructions+=1;goto B54aaec;
case 0x54aaf1:goto L54aaf1;
case 0x54aaf4:c.instructions+=8;goto B54aaf4;
case 0x54aaf7:c.instructions+=7;goto B54aaf7;
case 0x54aaf8:c.instructions+=6;goto B54aaf8;
case 0x54aafb:c.instructions+=5;goto B54aafb;
case 0x54aafc:c.instructions+=4;goto B54aafc;
case 0x54ab01:c.instructions+=3;goto B54ab01;
case 0x54ab02:c.instructions+=2;goto B54ab02;
case 0x54ab03:c.instructions+=1;goto B54ab03;
case 0x54ab08:goto L54ab08;
case 0x54ab0b:c.instructions+=1;goto B54ab0b;
case 0x54ab10:goto L54ab10;
case 0x54ab13:c.instructions+=3;goto B54ab13;
case 0x54ab16:c.instructions+=2;goto B54ab16;
case 0x54ab18:c.instructions+=1;goto B54ab18;
case 0x54ab1a:goto L54ab1a;
case 0x54ab1b:c.instructions+=1;goto B54ab1b;
case 0x54ab20:goto L54ab20;
case 0x54ab23:c.instructions+=2;goto B54ab23;
case 0x54ab25:c.instructions+=1;goto B54ab25;
case 0x54ab27:goto L54ab27;
case 0x54ab28:c.instructions+=2;goto B54ab28;
case 0x54ab2a:c.instructions+=1;goto B54ab2a;
case 0x54ab2f:goto L54ab2f;
case 0x54ab31:c.instructions+=1;goto B54ab31;
case 0x54ab33:goto L54ab33;
case 0x54ab38:c.instructions+=2;goto B54ab38;
case 0x54ab3a:c.instructions+=1;goto B54ab3a;
case 0x54ab3c:goto L54ab3c;
case 0x54ab3f:c.instructions+=3;goto B54ab3f;
case 0x54ab40:c.instructions+=2;goto B54ab40;
case 0x54ab41:c.instructions+=1;goto B54ab41;
case 0x54ab46:goto L54ab46;
case 0x54ab48:c.instructions+=2;goto B54ab48;
case 0x54ab4a:c.instructions+=1;goto B54ab4a;
case 0x54ab4c:goto L54ab4c;
case 0x54ab50:c.instructions+=1;goto B54ab50;
case 0x54ab52:goto L54ab52;
case 0x54ab55:c.instructions+=3;goto B54ab55;
case 0x54ab57:c.instructions+=2;goto B54ab57;
case 0x54ab59:c.instructions+=1;goto B54ab59;
case 0x54ab5b:goto L54ab5b;
case 0x54ab5d:goto L54ab5d;
case 0x54ab60:c.instructions+=3;goto B54ab60;
case 0x54ab65:c.instructions+=2;goto B54ab65;
case 0x54ab67:c.instructions+=1;goto B54ab67;
case 0x54ab69:goto L54ab69;
case 0x54ab6e:c.instructions+=2;goto B54ab6e;
case 0x54ab71:c.instructions+=1;goto B54ab71;
case 0x54ab74:goto L54ab74;
case 0x54ab7a:c.instructions+=2;goto B54ab7a;
case 0x54ab7c:c.instructions+=1;goto B54ab7c;
case 0x54ab7e:goto L54ab7e;
case 0x54ab80:c.instructions+=2;goto B54ab80;
case 0x54ab81:c.instructions+=1;goto B54ab81;
case 0x54ab83:goto L54ab83;
case 0x54ab86:c.instructions+=5;goto B54ab86;
case 0x54ab89:c.instructions+=4;goto B54ab89;
case 0x54ab8b:c.instructions+=3;goto B54ab8b;
case 0x54ab8e:c.instructions+=2;goto B54ab8e;
case 0x54ab90:c.instructions+=1;goto B54ab90;
case 0x54ab92:goto L54ab92;
case 0x54ab97:c.instructions+=1;goto B54ab97;
case 0x54ab9a:goto L54ab9a;
case 0x54ab9d:c.instructions+=3;goto B54ab9d;
case 0x54ab9e:c.instructions+=2;goto B54ab9e;
case 0x54aba3:c.instructions+=1;goto B54aba3;
case 0x54aba8:goto L54aba8;
case 0x54abab:c.instructions+=7;goto B54abab;
case 0x54abad:c.instructions+=6;goto B54abad;
case 0x54abaf:c.instructions+=5;goto B54abaf;
case 0x54abb5:c.instructions+=4;goto B54abb5;
case 0x54abb8:c.instructions+=3;goto B54abb8;
case 0x54abba:c.instructions+=2;goto B54abba;
case 0x54abbd:c.instructions+=1;goto B54abbd;
case 0x54abbf:goto L54abbf;
case 0x54abc2:c.instructions+=2;goto B54abc2;
case 0x54abc4:c.instructions+=1;goto B54abc4;
case 0x54abc9:goto L54abc9;
case 0x54abcb:c.instructions+=2;goto B54abcb;
case 0x54abcd:c.instructions+=1;goto B54abcd;
case 0x54abcf:goto L54abcf;
case 0x54abd5:c.instructions+=1;goto B54abd5;
case 0x54abd7:goto L54abd7;
case 0x54abdd:goto L54abdd;
case 0x54abe0:c.instructions+=2;goto B54abe0;
case 0x54abe2:c.instructions+=1;goto B54abe2;
case 0x54abe7:goto L54abe7;
case 0x54abe9:c.instructions+=5;goto B54abe9;
case 0x54abeb:c.instructions+=4;goto B54abeb;
case 0x54abf0:c.instructions+=3;goto B54abf0;
case 0x54abf5:c.instructions+=2;goto B54abf5;
case 0x54abf7:c.instructions+=1;goto B54abf7;
case 0x54abfc:goto L54abfc;
case 0x54abfe:c.instructions+=1;goto B54abfe;
case 0x54ac00:goto L54ac00;
case 0x54ac05:c.instructions+=1;goto B54ac05;
case 0x54ac0a:goto L54ac0a;
case 0x54ac0d:c.instructions+=9;goto B54ac0d;
case 0x54ac10:c.instructions+=8;goto B54ac10;
case 0x54ac13:c.instructions+=7;goto B54ac13;
case 0x54ac14:c.instructions+=6;goto B54ac14;
case 0x54ac17:c.instructions+=5;goto B54ac17;
case 0x54ac1a:c.instructions+=4;goto B54ac1a;
case 0x54ac1f:c.instructions+=3;goto B54ac1f;
case 0x54ac20:c.instructions+=2;goto B54ac20;
case 0x54ac21:c.instructions+=1;goto B54ac21;
case 0x54ac26:goto L54ac26;
case 0x54ac29:c.instructions+=1;goto B54ac29;
case 0x54ac2e:goto L54ac2e;
case 0x54ac31:c.instructions+=3;goto B54ac31;
case 0x54ac34:c.instructions+=2;goto B54ac34;
case 0x54ac36:c.instructions+=1;goto B54ac36;
case 0x54ac38:goto L54ac38;
case 0x54ac39:c.instructions+=1;goto B54ac39;
case 0x54ac3e:goto L54ac3e;
case 0x54ac41:c.instructions+=2;goto B54ac41;
case 0x54ac43:c.instructions+=1;goto B54ac43;
case 0x54ac45:goto L54ac45;
case 0x54ac46:c.instructions+=2;goto B54ac46;
case 0x54ac48:c.instructions+=1;goto B54ac48;
case 0x54ac4d:goto L54ac4d;
case 0x54ac4f:c.instructions+=1;goto B54ac4f;
case 0x54ac51:goto L54ac51;
case 0x54ac56:c.instructions+=2;goto B54ac56;
case 0x54ac58:c.instructions+=1;goto B54ac58;
case 0x54ac5a:goto L54ac5a;
case 0x54ac5d:c.instructions+=3;goto B54ac5d;
case 0x54ac5e:c.instructions+=2;goto B54ac5e;
case 0x54ac5f:c.instructions+=1;goto B54ac5f;
case 0x54ac64:goto L54ac64;
case 0x54ac66:c.instructions+=2;goto B54ac66;
case 0x54ac68:c.instructions+=1;goto B54ac68;
case 0x54ac6a:goto L54ac6a;
case 0x54ac6e:c.instructions+=1;goto B54ac6e;
case 0x54ac70:goto L54ac70;
case 0x54ac73:c.instructions+=3;goto B54ac73;
case 0x54ac75:c.instructions+=2;goto B54ac75;
case 0x54ac77:c.instructions+=1;goto B54ac77;
case 0x54ac79:goto L54ac79;
case 0x54ac7b:goto L54ac7b;
case 0x54ac7e:c.instructions+=3;goto B54ac7e;
case 0x54ac83:c.instructions+=2;goto B54ac83;
case 0x54ac85:c.instructions+=1;goto B54ac85;
case 0x54ac87:goto L54ac87;
case 0x54ac8c:c.instructions+=2;goto B54ac8c;
case 0x54ac8f:c.instructions+=1;goto B54ac8f;
case 0x54ac92:goto L54ac92;
case 0x54ac98:c.instructions+=2;goto B54ac98;
case 0x54ac9a:c.instructions+=1;goto B54ac9a;
case 0x54ac9c:goto L54ac9c;
case 0x54ac9e:c.instructions+=2;goto B54ac9e;
case 0x54ac9f:c.instructions+=1;goto B54ac9f;
case 0x54aca1:goto L54aca1;
case 0x54aca4:c.instructions+=5;goto B54aca4;
case 0x54aca7:c.instructions+=4;goto B54aca7;
case 0x54aca9:c.instructions+=3;goto B54aca9;
case 0x54acac:c.instructions+=2;goto B54acac;
case 0x54acae:c.instructions+=1;goto B54acae;
case 0x54acb0:goto L54acb0;
case 0x54acb5:c.instructions+=1;goto B54acb5;
case 0x54acb8:goto L54acb8;
case 0x54acbb:goto L54acbb;
case 0x54acbe:c.instructions+=3;goto B54acbe;
case 0x54acbf:c.instructions+=2;goto B54acbf;
case 0x54acc4:c.instructions+=1;goto B54acc4;
case 0x54acc9:goto L54acc9;
case 0x54accc:c.instructions+=7;goto B54accc;
case 0x54accf:c.instructions+=6;goto B54accf;
case 0x54acd1:c.instructions+=5;goto B54acd1;
case 0x54acd7:c.instructions+=4;goto B54acd7;
case 0x54acda:c.instructions+=3;goto B54acda;
case 0x54acdc:c.instructions+=2;goto B54acdc;
case 0x54acdf:c.instructions+=1;goto B54acdf;
case 0x54ace5:goto L54ace5;
case 0x54ace7:c.instructions+=1;goto B54ace7;
case 0x54acec:goto L54acec;
case 0x54acef:c.instructions+=2;goto B54acef;
case 0x54acf1:c.instructions+=1;goto B54acf1;
case 0x54acf3:goto L54acf3;
case 0x54acf9:goto L54acf9;
case 0x54acff:c.instructions+=3;goto B54acff;
case 0x54ad01:c.instructions+=2;goto B54ad01;
case 0x54ad04:c.instructions+=1;goto B54ad04;
case 0x54ad09:goto L54ad09;
case 0x54ad0b:c.instructions+=5;goto B54ad0b;
case 0x54ad0d:c.instructions+=4;goto B54ad0d;
case 0x54ad12:c.instructions+=3;goto B54ad12;
case 0x54ad17:c.instructions+=2;goto B54ad17;
case 0x54ad19:c.instructions+=1;goto B54ad19;
case 0x54ad1e:goto L54ad1e;
case 0x54ad20:c.instructions+=2;goto B54ad20;
case 0x54ad22:c.instructions+=1;goto B54ad22;
case 0x54ad24:goto L54ad24;
case 0x54ad29:c.instructions+=1;goto B54ad29;
case 0x54ad2e:goto L54ad2e;
case 0x54ad30:goto L54ad30;
case 0x54ad35:c.instructions+=1;goto B54ad35;
case 0x54ad3a:goto L54ad3a;
case 0x54ad3c:c.instructions+=2;goto B54ad3c;
case 0x54ad3e:c.instructions+=1;goto B54ad3e;
case 0x54ad40:goto L54ad40;
case 0x54ad45:c.instructions+=1;goto B54ad45;
case 0x54ad4a:goto L54ad4a;
case 0x54ad4c:goto L54ad4c;
case 0x54ad4f:c.instructions+=3;goto B54ad4f;
case 0x54ad52:c.instructions+=2;goto B54ad52;
case 0x54ad58:c.instructions+=1;goto B54ad58;
case 0x54ad5d:goto L54ad5d;
case 0x54ad60:c.instructions+=10;goto B54ad60;
case 0x54ad63:c.instructions+=9;goto B54ad63;
case 0x54ad64:c.instructions+=8;goto B54ad64;
case 0x54ad67:c.instructions+=7;goto B54ad67;
case 0x54ad68:c.instructions+=6;goto B54ad68;
case 0x54ad6b:c.instructions+=5;goto B54ad6b;
case 0x54ad6e:c.instructions+=4;goto B54ad6e;
case 0x54ad6f:c.instructions+=3;goto B54ad6f;
case 0x54ad70:c.instructions+=2;goto B54ad70;
case 0x54ad71:c.instructions+=1;goto B54ad71;
case 0x54ad76:goto L54ad76;
case 0x54ad79:c.instructions+=1;goto B54ad79;
case 0x54ad7e:goto L54ad7e;
case 0x54ad81:c.instructions+=3;goto B54ad81;
case 0x54ad84:c.instructions+=2;goto B54ad84;
case 0x54ad86:c.instructions+=1;goto B54ad86;
case 0x54ad88:goto L54ad88;
case 0x54ad89:c.instructions+=1;goto B54ad89;
case 0x54ad8e:goto L54ad8e;
case 0x54ad91:c.instructions+=2;goto B54ad91;
case 0x54ad93:c.instructions+=1;goto B54ad93;
case 0x54ad95:goto L54ad95;
case 0x54ad96:c.instructions+=2;goto B54ad96;
case 0x54ad98:c.instructions+=1;goto B54ad98;
case 0x54ad9d:goto L54ad9d;
case 0x54ad9f:c.instructions+=1;goto B54ad9f;
case 0x54ada1:goto L54ada1;
case 0x54ada6:c.instructions+=2;goto B54ada6;
case 0x54ada8:c.instructions+=1;goto B54ada8;
case 0x54adaa:goto L54adaa;
case 0x54adad:c.instructions+=3;goto B54adad;
case 0x54adae:c.instructions+=2;goto B54adae;
case 0x54adaf:c.instructions+=1;goto B54adaf;
case 0x54adb4:goto L54adb4;
case 0x54adb6:c.instructions+=2;goto B54adb6;
case 0x54adb8:c.instructions+=1;goto B54adb8;
case 0x54adba:goto L54adba;
case 0x54adbe:c.instructions+=1;goto B54adbe;
case 0x54adc0:goto L54adc0;
case 0x54adc3:c.instructions+=3;goto B54adc3;
case 0x54adc5:c.instructions+=2;goto B54adc5;
case 0x54adc7:c.instructions+=1;goto B54adc7;
case 0x54adc9:goto L54adc9;
case 0x54adcb:goto L54adcb;
case 0x54adce:c.instructions+=3;goto B54adce;
case 0x54add3:c.instructions+=2;goto B54add3;
case 0x54add5:c.instructions+=1;goto B54add5;
case 0x54add7:goto L54add7;
case 0x54addc:c.instructions+=2;goto B54addc;
case 0x54addf:c.instructions+=1;goto B54addf;
case 0x54ade2:goto L54ade2;
case 0x54ade8:c.instructions+=2;goto B54ade8;
case 0x54adea:c.instructions+=1;goto B54adea;
case 0x54adec:goto L54adec;
case 0x54adee:c.instructions+=2;goto B54adee;
case 0x54adef:c.instructions+=1;goto B54adef;
case 0x54adf1:goto L54adf1;
case 0x54adf4:c.instructions+=5;goto B54adf4;
case 0x54adf7:c.instructions+=4;goto B54adf7;
case 0x54adf9:c.instructions+=3;goto B54adf9;
case 0x54adfc:c.instructions+=2;goto B54adfc;
case 0x54adfe:c.instructions+=1;goto B54adfe;
case 0x54ae00:goto L54ae00;
case 0x54ae05:c.instructions+=1;goto B54ae05;
case 0x54ae08:goto L54ae08;
case 0x54ae0b:c.instructions+=3;goto B54ae0b;
case 0x54ae0c:c.instructions+=2;goto B54ae0c;
case 0x54ae11:c.instructions+=1;goto B54ae11;
case 0x54ae16:goto L54ae16;
case 0x54ae19:c.instructions+=7;goto B54ae19;
case 0x54ae1c:c.instructions+=6;goto B54ae1c;
case 0x54ae1e:c.instructions+=5;goto B54ae1e;
case 0x54ae24:c.instructions+=4;goto B54ae24;
case 0x54ae27:c.instructions+=3;goto B54ae27;
case 0x54ae29:c.instructions+=2;goto B54ae29;
case 0x54ae2c:c.instructions+=1;goto B54ae2c;
case 0x54ae32:goto L54ae32;
case 0x54ae35:c.instructions+=2;goto B54ae35;
case 0x54ae37:c.instructions+=1;goto B54ae37;
case 0x54ae3c:goto L54ae3c;
case 0x54ae3f:c.instructions+=2;goto B54ae3f;
case 0x54ae41:c.instructions+=1;goto B54ae41;
case 0x54ae43:goto L54ae43;
case 0x54ae49:goto L54ae49;
case 0x54ae4b:c.instructions+=2;goto B54ae4b;
case 0x54ae4e:c.instructions+=1;goto B54ae4e;
case 0x54ae53:goto L54ae53;
case 0x54ae55:c.instructions+=5;goto B54ae55;
case 0x54ae57:c.instructions+=4;goto B54ae57;
case 0x54ae5c:c.instructions+=3;goto B54ae5c;
case 0x54ae61:c.instructions+=2;goto B54ae61;
case 0x54ae63:c.instructions+=1;goto B54ae63;
case 0x54ae68:goto L54ae68;
case 0x54ae6a:c.instructions+=2;goto B54ae6a;
case 0x54ae6c:c.instructions+=1;goto B54ae6c;
case 0x54ae6e:goto L54ae6e;
case 0x54ae73:c.instructions+=1;goto B54ae73;
case 0x54ae78:goto L54ae78;
case 0x54ae7a:goto L54ae7a;
case 0x54ae7f:c.instructions+=1;goto B54ae7f;
case 0x54ae84:goto L54ae84;
case 0x54ae86:c.instructions+=2;goto B54ae86;
case 0x54ae88:c.instructions+=1;goto B54ae88;
case 0x54ae8a:goto L54ae8a;
case 0x54ae8f:c.instructions+=1;goto B54ae8f;
case 0x54ae94:goto L54ae94;
case 0x54ae96:goto L54ae96;
case 0x54ae99:c.instructions+=3;goto B54ae99;
case 0x54ae9c:c.instructions+=2;goto B54ae9c;
case 0x54aea2:c.instructions+=1;goto B54aea2;
case 0x54aea7:goto L54aea7;
case 0x54aeaa:c.instructions+=10;goto B54aeaa;
case 0x54aead:c.instructions+=9;goto B54aead;
case 0x54aeae:c.instructions+=8;goto B54aeae;
case 0x54aeb1:c.instructions+=7;goto B54aeb1;
case 0x54aeb2:c.instructions+=6;goto B54aeb2;
case 0x54aeb5:c.instructions+=5;goto B54aeb5;
case 0x54aeb8:c.instructions+=4;goto B54aeb8;
case 0x54aeb9:c.instructions+=3;goto B54aeb9;
case 0x54aeba:c.instructions+=2;goto B54aeba;
case 0x54aebb:c.instructions+=1;goto B54aebb;
case 0x54aec0:goto L54aec0;
case 0x54aec3:c.instructions+=1;goto B54aec3;
case 0x54aec8:goto L54aec8;
case 0x54aecb:c.instructions+=3;goto B54aecb;
case 0x54aece:c.instructions+=2;goto B54aece;
case 0x54aed0:c.instructions+=1;goto B54aed0;
case 0x54aed2:goto L54aed2;
case 0x54aed3:c.instructions+=1;goto B54aed3;
case 0x54aed8:goto L54aed8;
case 0x54aedb:c.instructions+=2;goto B54aedb;
case 0x54aedd:c.instructions+=1;goto B54aedd;
case 0x54aedf:goto L54aedf;
case 0x54aee0:c.instructions+=2;goto B54aee0;
case 0x54aee2:c.instructions+=1;goto B54aee2;
case 0x54aee7:goto L54aee7;
case 0x54aee9:c.instructions+=1;goto B54aee9;
case 0x54aeeb:goto L54aeeb;
case 0x54aef0:c.instructions+=2;goto B54aef0;
case 0x54aef2:c.instructions+=1;goto B54aef2;
case 0x54aef4:goto L54aef4;
case 0x54aef7:c.instructions+=3;goto B54aef7;
case 0x54aef8:c.instructions+=2;goto B54aef8;
case 0x54aef9:c.instructions+=1;goto B54aef9;
case 0x54aefe:goto L54aefe;
case 0x54af00:c.instructions+=2;goto B54af00;
case 0x54af02:c.instructions+=1;goto B54af02;
case 0x54af04:goto L54af04;
case 0x54af08:c.instructions+=1;goto B54af08;
case 0x54af0a:goto L54af0a;
case 0x54af0d:c.instructions+=3;goto B54af0d;
case 0x54af0f:c.instructions+=2;goto B54af0f;
case 0x54af11:c.instructions+=1;goto B54af11;
case 0x54af13:goto L54af13;
case 0x54af15:goto L54af15;
case 0x54af18:c.instructions+=3;goto B54af18;
case 0x54af1d:c.instructions+=2;goto B54af1d;
case 0x54af1f:c.instructions+=1;goto B54af1f;
case 0x54af21:goto L54af21;
case 0x54af26:c.instructions+=2;goto B54af26;
case 0x54af29:c.instructions+=1;goto B54af29;
case 0x54af2c:goto L54af2c;
case 0x54af32:c.instructions+=2;goto B54af32;
case 0x54af34:c.instructions+=1;goto B54af34;
case 0x54af36:goto L54af36;
case 0x54af38:c.instructions+=2;goto B54af38;
case 0x54af39:c.instructions+=1;goto B54af39;
case 0x54af3b:goto L54af3b;
case 0x54af3e:c.instructions+=5;goto B54af3e;
case 0x54af41:c.instructions+=4;goto B54af41;
case 0x54af43:c.instructions+=3;goto B54af43;
case 0x54af46:c.instructions+=2;goto B54af46;
case 0x54af48:c.instructions+=1;goto B54af48;
case 0x54af4a:goto L54af4a;
case 0x54af4f:c.instructions+=1;goto B54af4f;
case 0x54af52:goto L54af52;
case 0x54af55:c.instructions+=4;goto B54af55;
case 0x54af56:c.instructions+=3;goto B54af56;
case 0x54af59:c.instructions+=2;goto B54af59;
case 0x54af5c:c.instructions+=1;goto B54af5c;
case 0x54af62:goto L54af62;
case 0x54af65:c.instructions+=1;goto B54af65;
case 0x54af6a:goto L54af6a;
case 0x54af6b:c.instructions+=5;goto B54af6b;
case 0x54af6c:c.instructions+=4;goto B54af6c;
case 0x54af6d:c.instructions+=3;goto B54af6d;
case 0x54af6f:c.instructions+=2;goto B54af6f;
case 0x54af70:c.instructions+=1;goto B54af70;
case 0x54af80:goto L54af80;
case 0x54af85:c.instructions+=3;goto B54af85;
case 0x54af86:c.instructions+=2;goto B54af86;
case 0x54af89:c.instructions+=1;goto B54af89;
case 0x54af8b:goto L54af8b;
case 0x54af92:goto L54af92;
case 0x54af97:goto L54af97;
case 0x54af9c:c.instructions+=2;goto B54af9c;
case 0x54afa1:c.instructions+=1;goto B54afa1;
case 0x54afa6:goto L54afa6;
case 0x54afa8:c.instructions+=5;goto B54afa8;
case 0x54afaa:c.instructions+=4;goto B54afaa;
case 0x54afac:c.instructions+=3;goto B54afac;
case 0x54afb1:c.instructions+=2;goto B54afb1;
case 0x54afb2:c.instructions+=1;goto B54afb2;
case 0x54afb7:goto L54afb7;
case 0x54afba:c.instructions+=3;goto B54afba;
case 0x54afbb:c.instructions+=2;goto B54afbb;
case 0x54afc0:c.instructions+=1;goto B54afc0;
case 0x54afc5:goto L54afc5;
case 0x54afca:goto L54afca;
case 0x54afd1:c.instructions+=1;goto B54afd1;
case 0x54afd2:goto L54afd2;
case 0x54afd7:goto L54afd7;
case 0x54afdd:c.instructions+=3;goto B54afdd;
case 0x54afdf:c.instructions+=2;goto B54afdf;
case 0x54afe1:c.instructions+=1;goto B54afe1;
case 0x54afe6:goto L54afe6;
default:missing_instruction(c.pc);}
B54a004:L54a004:{c.instructions+=1;NFSU2_TR(0x54a004);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a009ull));
TAIL_STATIC(0x75bed4u,75b);
}
B54a009:L54a009:{c.instructions+=3;NFSU2_TR(0x54a009);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2328ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2328ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a00e:{NFSU2_TR(0x54a00e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a011:{NFSU2_TR(0x54a011);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54a01a;}}
}
B54a013:L54a013:{c.instructions+=1;NFSU2_TR(0x54a013);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x2328ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a01a:L54a01a:{c.instructions+=6;NFSU2_TR(0x54a01a);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B54a01d:{NFSU2_TR(0x54a01d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54a01f:{NFSU2_TR(0x54a01f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a022:{NFSU2_TR(0x54a022);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a025:{NFSU2_TR(0x54a025);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54a028:{NFSU2_TR(0x54a028);
{goto L54a030;}
}
B54a030:L54a030:{c.instructions+=4;NFSU2_TR(0x54a030);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a033:{NFSU2_TR(0x54a033);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a034:{NFSU2_TR(0x54a034);
u8 U[4];
w4(U+0,u32(0x79c604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a039:{NFSU2_TR(0x54a039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a03eull));
TAIL_STATIC(0x50b990u,50b);
}
B54a03e:L54a03e:{c.instructions+=4;NFSU2_TR(0x54a03e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54a041:{NFSU2_TR(0x54a041);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a043:{NFSU2_TR(0x54a043);
__builtin_memmove((R+28),(R+0),4);
}
B54a045:{NFSU2_TR(0x54a045);
if(r1(R+518)){{goto L54a064;}}
}
B54a047:L54a047:{c.instructions+=2;NFSU2_TR(0x54a047);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a048:{NFSU2_TR(0x54a048);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a04dull));
TAIL_STATIC(0x52cef0u,52c);
}
B54a04d:L54a04d:{c.instructions+=3;NFSU2_TR(0x54a04d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54a050:{NFSU2_TR(0x54a050);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a052:{NFSU2_TR(0x54a052);
if(r1(R+518)){{goto L54a064;}}
}
B54a054:L54a054:{c.instructions+=3;NFSU2_TR(0x54a054);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a055:{NFSU2_TR(0x54a055);
__builtin_memmove((R+4),(R+0),4);
}
B54a057:{NFSU2_TR(0x54a057);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a05cull));
TAIL_STATIC(0x517f80u,517);
}
B54a05c:L54a05c:{c.instructions+=2;NFSU2_TR(0x54a05c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a05e:{NFSU2_TR(0x54a05e);
if(r1(R+518)){{goto L54a064;}}
}
B54a060:L54a060:{c.instructions+=2;NFSU2_TR(0x54a060);
__builtin_memmove((R+24),(R+0),4);
}
B54a062:{NFSU2_TR(0x54a062);
{goto L54a07d;}
}
B54a064:L54a064:{c.instructions+=3;NFSU2_TR(0x54a064);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54a069:{NFSU2_TR(0x54a069);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a06b:{NFSU2_TR(0x54a06b);
if(r1(R+518)){{goto L54a07b;}}
}
B54a06d:L54a06d:{c.instructions+=4;NFSU2_TR(0x54a06d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54a070:{NFSU2_TR(0x54a070);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a071:{NFSU2_TR(0x54a071);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a072:{NFSU2_TR(0x54a072);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a077ull));
TAIL_STATIC(0x52c570u,52c);
}
B54a077:L54a077:{c.instructions+=2;NFSU2_TR(0x54a077);
__builtin_memmove((R+24),(R+0),4);
}
B54a079:{NFSU2_TR(0x54a079);
{goto L54a07d;}
}
B54a07b:L54a07b:{c.instructions+=1;NFSU2_TR(0x54a07b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B54a07d:L54a07d:{c.instructions+=15;NFSU2_TR(0x54a07d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54a080:{NFSU2_TR(0x54a080);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a083:{NFSU2_TR(0x54a083);
{u32 ea_=u32(u32(7885040u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B54a089:{NFSU2_TR(0x54a089);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B54a08c:{NFSU2_TR(0x54a08c);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B54a08f:{NFSU2_TR(0x54a08f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B54a091:{NFSU2_TR(0x54a091);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54a094:{NFSU2_TR(0x54a094);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B54a097:{NFSU2_TR(0x54a097);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B54a099:{NFSU2_TR(0x54a099);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54a09c:{NFSU2_TR(0x54a09c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B54a09e:{NFSU2_TR(0x54a09e);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B54a0a0:{NFSU2_TR(0x54a0a0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54a0a2:{NFSU2_TR(0x54a0a2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B54a0a5:{NFSU2_TR(0x54a0a5);
if(r1(R+514)){{goto L54a0d4;}}
}
B54a0a7:L54a0a7:{c.instructions+=5;NFSU2_TR(0x54a0a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a0aa:{NFSU2_TR(0x54a0aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a0ab:{NFSU2_TR(0x54a0ab);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a0b0:{NFSU2_TR(0x54a0b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a0b1:{NFSU2_TR(0x54a0b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a0b6ull));
TAIL_STATIC(0x537be0u,537);
}
B54a0b6:L54a0b6:{c.instructions+=8;NFSU2_TR(0x54a0b6);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a0b9:{NFSU2_TR(0x54a0b9);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54a0bf:{NFSU2_TR(0x54a0bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a0c2:{NFSU2_TR(0x54a0c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54a0c5:{NFSU2_TR(0x54a0c5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54a0c8:{NFSU2_TR(0x54a0c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a0c9:{NFSU2_TR(0x54a0c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a0ca:{NFSU2_TR(0x54a0ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a0cfull));
TAIL_STATIC(0x51d380u,51d);
}
B54a0cf:L54a0cf:{c.instructions+=2;NFSU2_TR(0x54a0cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54a0d2:{NFSU2_TR(0x54a0d2);
{goto L54a10f;}
}
B54a0d4:L54a0d4:{c.instructions+=2;NFSU2_TR(0x54a0d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a0d6:{NFSU2_TR(0x54a0d6);
if(r1(R+518)){{goto L54a10f;}}
}
B54a0d8:L54a0d8:{c.instructions+=3;NFSU2_TR(0x54a0d8);
__builtin_memmove((R+0),gp(0x8384d4),4);
}
B54a0dd:{NFSU2_TR(0x54a0dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a0df:{NFSU2_TR(0x54a0df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a0e7;}}
}
B54a0e1:L54a0e1:{c.instructions+=2;NFSU2_TR(0x54a0e1);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B54a0e5:{NFSU2_TR(0x54a0e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a0ee;}}
}
B54a0e7:L54a0e7:{c.instructions+=1;NFSU2_TR(0x54a0e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B54a0ee:L54a0ee:{c.instructions+=2;NFSU2_TR(0x54a0ee);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54a0f2:{NFSU2_TR(0x54a0f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a10f;}}
}
B54a0f4:L54a0f4:{c.instructions+=4;NFSU2_TR(0x54a0f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a0f7:{NFSU2_TR(0x54a0f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54a0fa:{NFSU2_TR(0x54a0fa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a0fc:{NFSU2_TR(0x54a0fc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54a10f;}}
}
B54a0fe:L54a0fe:{c.instructions+=1;NFSU2_TR(0x54a0fe);
__builtin_memmove((R+28),(R+28),4);
}
B54a100:L54a100:{c.instructions+=2;NFSU2_TR(0x54a100);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a101:{NFSU2_TR(0x54a101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a106ull));
TAIL_STATIC(0x50ca00u,50c);
}
B54a106:L54a106:{c.instructions+=4;NFSU2_TR(0x54a106);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a109:{NFSU2_TR(0x54a109);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54a10c:{NFSU2_TR(0x54a10c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B54a10d:{NFSU2_TR(0x54a10d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54a100u);}goto L54a100;}}
}
B54a10f:L54a10f:{c.instructions+=8;NFSU2_TR(0x54a10f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a112:{NFSU2_TR(0x54a112);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54a115:{NFSU2_TR(0x54a115);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3e8ull))));
}
B54a11a:{NFSU2_TR(0x54a11a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B54a11b:{NFSU2_TR(0x54a11b);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2328ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2328ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a120:{NFSU2_TR(0x54a120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a123:{NFSU2_TR(0x54a123);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a126:{NFSU2_TR(0x54a126);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54a030u);}goto L54a030;}}
}
B54a12c:L54a12c:{c.instructions+=5;NFSU2_TR(0x54a12c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a12f:{NFSU2_TR(0x54a12f);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a132:{NFSU2_TR(0x54a132);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B54a135:{NFSU2_TR(0x54a135);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B54a13b:{NFSU2_TR(0x54a13b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a140ull));
TAIL_STATIC(0x75bed4u,75b);
}
B54a140:L54a140:{c.instructions+=3;NFSU2_TR(0x54a140);
__builtin_memmove((R+12),(R+0),4);
}
B54a142:{NFSU2_TR(0x54a142);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54a144:{NFSU2_TR(0x54a144);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B54a146:L54a146:{c.instructions+=4;NFSU2_TR(0x54a146);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54a149:{NFSU2_TR(0x54a149);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a14c:{NFSU2_TR(0x54a14c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54a14f:{NFSU2_TR(0x54a14f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a154ull));
TAIL_STATIC(0x75bed4u,75b);
}
B54a154:L54a154:{c.instructions+=6;NFSU2_TR(0x54a154);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B54a156:{NFSU2_TR(0x54a156);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a157:{NFSU2_TR(0x54a157);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a15c:{NFSU2_TR(0x54a15c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a15d:{NFSU2_TR(0x54a15d);
u8 U[4];
w4(U+0,u32(0x79c5f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a162:{NFSU2_TR(0x54a162);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a167ull));
TAIL_STATIC(0x50b990u,50b);
}
B54a167:L54a167:{c.instructions+=5;NFSU2_TR(0x54a167);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a16a:{NFSU2_TR(0x54a16a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54a16d:{NFSU2_TR(0x54a16d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a16e:{NFSU2_TR(0x54a16e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a16f:{NFSU2_TR(0x54a16f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a174ull));
TAIL_STATIC(0x537b80u,537);
}
B54a174:L54a174:{c.instructions+=5;NFSU2_TR(0x54a174);
__builtin_memmove((R+0),(R+24),4);
}
B54a176:{NFSU2_TR(0x54a176);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B54a179:{NFSU2_TR(0x54a179);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B54a17b:{NFSU2_TR(0x54a17b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B54a17e:{NFSU2_TR(0x54a17e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54a146u);}goto L54a146;}}
}
B54a180:L54a180:{c.instructions+=6;NFSU2_TR(0x54a180);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54a181:{NFSU2_TR(0x54a181);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54a182:{NFSU2_TR(0x54a182);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54a183:{NFSU2_TR(0x54a183);
__builtin_memmove((R+16),(R+20),4);
}
B54a185:{NFSU2_TR(0x54a185);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54a186:{NFSU2_TR(0x54a186);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54a190:L54a190:{c.instructions+=33;NFSU2_TR(0x54a190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B54a193:{NFSU2_TR(0x54a193);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a197:{NFSU2_TR(0x54a197);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a19b:{NFSU2_TR(0x54a19b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B54a19f:{NFSU2_TR(0x54a19f);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a1a3:{NFSU2_TR(0x54a1a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B54a1a7:{NFSU2_TR(0x54a1a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a1aa:{NFSU2_TR(0x54a1aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a1ae:{NFSU2_TR(0x54a1ae);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B54a1b0:{NFSU2_TR(0x54a1b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a1b4:{NFSU2_TR(0x54a1b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a1b8:{NFSU2_TR(0x54a1b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a1bc:{NFSU2_TR(0x54a1bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a1bd:{NFSU2_TR(0x54a1bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a1c1:{NFSU2_TR(0x54a1c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a1c5:{NFSU2_TR(0x54a1c5);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B54a1cb:{NFSU2_TR(0x54a1cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a1cf:{NFSU2_TR(0x54a1cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54a1d2:{NFSU2_TR(0x54a1d2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a1d4:{NFSU2_TR(0x54a1d4);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54a1d8:{NFSU2_TR(0x54a1d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B54a1dc:{NFSU2_TR(0x54a1dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a1df:{NFSU2_TR(0x54a1df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a1e0:{NFSU2_TR(0x54a1e0);
__builtin_memmove((R+4),(R+24),4);
}
B54a1e2:{NFSU2_TR(0x54a1e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c674ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a1ea:{NFSU2_TR(0x54a1ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c664ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a1f2:{NFSU2_TR(0x54a1f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c654ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a1fa:{NFSU2_TR(0x54a1fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x79c644ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a202:{NFSU2_TR(0x54a202);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c634ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a20a:{NFSU2_TR(0x54a20a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x79c624ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a212:{NFSU2_TR(0x54a212);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x79c610ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a21a:{NFSU2_TR(0x54a21a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x40800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a222:{NFSU2_TR(0x54a222);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a227ull));
TAIL_STATIC(0x540c10u,540);
}
B54a227:L54a227:{c.instructions+=2;NFSU2_TR(0x54a227);
u8 U[4];
w4(U+0,u32(0x79c610ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a22c:{NFSU2_TR(0x54a22c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a231ull));
TAIL_STATIC(0x505450u,505);
}
B54a231:L54a231:{c.instructions+=4;NFSU2_TR(0x54a231);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54a234:{NFSU2_TR(0x54a234);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a235:{NFSU2_TR(0x54a235);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a236:{NFSU2_TR(0x54a236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a23bull));
TAIL_STATIC(0x537a60u,537);
}
B54a23b:L54a23b:{c.instructions+=7;NFSU2_TR(0x54a23b);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a23f:{NFSU2_TR(0x54a23f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a242:{NFSU2_TR(0x54a242);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a245:{NFSU2_TR(0x54a245);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54a247:{NFSU2_TR(0x54a247);
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
B54a24a:{NFSU2_TR(0x54a24a);
__builtin_memmove((R+4),(R+24),4);
}
B54a24c:{NFSU2_TR(0x54a24c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a24full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54a24f:L54a24f:{c.instructions+=3;NFSU2_TR(0x54a24f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54a250:{NFSU2_TR(0x54a250);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54a253:{NFSU2_TR(0x54a253);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54a260:L54a260:{c.instructions+=12;NFSU2_TR(0x54a260);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a261:{NFSU2_TR(0x54a261);
__builtin_memmove((R+20),(R+16),4);
}
B54a263:{NFSU2_TR(0x54a263);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B54a266:{NFSU2_TR(0x54a266);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a267:{NFSU2_TR(0x54a267);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54a26a:{NFSU2_TR(0x54a26a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a26b:{NFSU2_TR(0x54a26b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a26c:{NFSU2_TR(0x54a26c);
u8 U[4];
w4(U+0,u32(0x35c9376ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a271:{NFSU2_TR(0x54a271);
u8 U[4];
w4(U+0,u32(0x83841a5eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a276:{NFSU2_TR(0x54a276);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a277:{NFSU2_TR(0x54a277);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a27a:{NFSU2_TR(0x54a27a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a27full));
TAIL_STATIC(0x495460u,495);
}
B54a27f:L54a27f:{c.instructions+=4;NFSU2_TR(0x54a27f);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B54a285:{NFSU2_TR(0x54a285);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54a288:{NFSU2_TR(0x54a288);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a28a:{NFSU2_TR(0x54a28a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a28full));
TAIL_STATIC(0x59b080u,59b);
}
B54a28f:L54a28f:{c.instructions+=2;NFSU2_TR(0x54a28f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54a291:{NFSU2_TR(0x54a291);
if(r1(R+518)){{goto L54a2b3;}}
}
B54a293:L54a293:{c.instructions+=5;NFSU2_TR(0x54a293);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B54a299:{NFSU2_TR(0x54a299);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a29b:{NFSU2_TR(0x54a29b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a29d:{NFSU2_TR(0x54a29d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a29f:{NFSU2_TR(0x54a29f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a2a4ull));
TAIL_STATIC(0x5b0c00u,5b0);
}
B54a2a4:L54a2a4:{c.instructions+=4;NFSU2_TR(0x54a2a4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B54a2aa:{NFSU2_TR(0x54a2aa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54a2ac:{NFSU2_TR(0x54a2ac);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B54a2af:{NFSU2_TR(0x54a2af);
if(r1(R+514)){{goto L54a2b9;}}
}
B54a2b1:L54a2b1:{c.instructions+=1;NFSU2_TR(0x54a2b1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B54a2b3:L54a2b3:{c.instructions+=1;NFSU2_TR(0x54a2b3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a2b9:L54a2b9:{c.instructions+=8;NFSU2_TR(0x54a2b9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a2bf:{NFSU2_TR(0x54a2bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B54a2c1:{NFSU2_TR(0x54a2c1);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B54a2c3:{NFSU2_TR(0x54a2c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a2c6:{NFSU2_TR(0x54a2c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a2c9:{NFSU2_TR(0x54a2c9);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54a2cc:{NFSU2_TR(0x54a2cc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B54a2ce:{NFSU2_TR(0x54a2ce);
__builtin_memmove((R+28),(R+28),4);
}
B54a2d0:L54a2d0:{c.instructions+=4;NFSU2_TR(0x54a2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a2d3:{NFSU2_TR(0x54a2d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a2d4:{NFSU2_TR(0x54a2d4);
u8 U[4];
w4(U+0,u32(0x79c604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a2d9:{NFSU2_TR(0x54a2d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a2deull));
TAIL_STATIC(0x50b990u,50b);
}
B54a2de:L54a2de:{c.instructions+=4;NFSU2_TR(0x54a2de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54a2e1:{NFSU2_TR(0x54a2e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a2e3:{NFSU2_TR(0x54a2e3);
__builtin_memmove((R+28),(R+0),4);
}
B54a2e5:{NFSU2_TR(0x54a2e5);
if(r1(R+518)){{goto L54a304;}}
}
B54a2e7:L54a2e7:{c.instructions+=2;NFSU2_TR(0x54a2e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a2e8:{NFSU2_TR(0x54a2e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a2edull));
TAIL_STATIC(0x52cef0u,52c);
}
B54a2ed:L54a2ed:{c.instructions+=3;NFSU2_TR(0x54a2ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54a2f0:{NFSU2_TR(0x54a2f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a2f2:{NFSU2_TR(0x54a2f2);
if(r1(R+518)){{goto L54a304;}}
}
B54a2f4:L54a2f4:{c.instructions+=3;NFSU2_TR(0x54a2f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a2f5:{NFSU2_TR(0x54a2f5);
__builtin_memmove((R+4),(R+0),4);
}
B54a2f7:{NFSU2_TR(0x54a2f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a2fcull));
TAIL_STATIC(0x517f80u,517);
}
B54a2fc:L54a2fc:{c.instructions+=2;NFSU2_TR(0x54a2fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a2fe:{NFSU2_TR(0x54a2fe);
if(r1(R+518)){{goto L54a304;}}
}
B54a300:L54a300:{c.instructions+=2;NFSU2_TR(0x54a300);
__builtin_memmove((R+24),(R+0),4);
}
B54a302:{NFSU2_TR(0x54a302);
{goto L54a31d;}
}
B54a304:L54a304:{c.instructions+=3;NFSU2_TR(0x54a304);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54a309:{NFSU2_TR(0x54a309);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a30b:{NFSU2_TR(0x54a30b);
if(r1(R+518)){{goto L54a31b;}}
}
B54a30d:L54a30d:{c.instructions+=4;NFSU2_TR(0x54a30d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54a310:{NFSU2_TR(0x54a310);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a311:{NFSU2_TR(0x54a311);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a312:{NFSU2_TR(0x54a312);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a317ull));
TAIL_STATIC(0x52c570u,52c);
}
B54a317:L54a317:{c.instructions+=2;NFSU2_TR(0x54a317);
__builtin_memmove((R+24),(R+0),4);
}
B54a319:{NFSU2_TR(0x54a319);
{goto L54a31d;}
}
B54a31b:L54a31b:{c.instructions+=1;NFSU2_TR(0x54a31b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B54a31d:L54a31d:{c.instructions+=13;NFSU2_TR(0x54a31d);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B54a320:{NFSU2_TR(0x54a320);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a323:{NFSU2_TR(0x54a323);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B54a326:{NFSU2_TR(0x54a326);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B54a329:{NFSU2_TR(0x54a329);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54a32c:{NFSU2_TR(0x54a32c);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B54a32f:{NFSU2_TR(0x54a32f);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a332:{NFSU2_TR(0x54a332);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54a335:{NFSU2_TR(0x54a335);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B54a337:{NFSU2_TR(0x54a337);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B54a339:{NFSU2_TR(0x54a339);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54a33b:{NFSU2_TR(0x54a33b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B54a33e:{NFSU2_TR(0x54a33e);
if(r1(R+514)){{goto L54a36d;}}
}
B54a340:L54a340:{c.instructions+=5;NFSU2_TR(0x54a340);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54a343:{NFSU2_TR(0x54a343);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a344:{NFSU2_TR(0x54a344);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a349:{NFSU2_TR(0x54a349);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a34a:{NFSU2_TR(0x54a34a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a34full));
TAIL_STATIC(0x537be0u,537);
}
B54a34f:L54a34f:{c.instructions+=8;NFSU2_TR(0x54a34f);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a352:{NFSU2_TR(0x54a352);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54a358:{NFSU2_TR(0x54a358);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a35b:{NFSU2_TR(0x54a35b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54a35e:{NFSU2_TR(0x54a35e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54a361:{NFSU2_TR(0x54a361);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a362:{NFSU2_TR(0x54a362);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a363:{NFSU2_TR(0x54a363);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a368ull));
TAIL_STATIC(0x51d380u,51d);
}
B54a368:L54a368:{c.instructions+=2;NFSU2_TR(0x54a368);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54a36b:{NFSU2_TR(0x54a36b);
{goto L54a3a6;}
}
B54a36d:L54a36d:{c.instructions+=2;NFSU2_TR(0x54a36d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a36f:{NFSU2_TR(0x54a36f);
if(r1(R+518)){{goto L54a3a6;}}
}
B54a371:L54a371:{c.instructions+=3;NFSU2_TR(0x54a371);
__builtin_memmove((R+0),gp(0x8384d4),4);
}
B54a376:{NFSU2_TR(0x54a376);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a378:{NFSU2_TR(0x54a378);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a380;}}
}
B54a37a:L54a37a:{c.instructions+=2;NFSU2_TR(0x54a37a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B54a37e:{NFSU2_TR(0x54a37e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a387;}}
}
B54a380:L54a380:{c.instructions+=1;NFSU2_TR(0x54a380);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B54a387:L54a387:{c.instructions+=2;NFSU2_TR(0x54a387);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54a38b:{NFSU2_TR(0x54a38b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a3a6;}}
}
B54a38d:L54a38d:{c.instructions+=4;NFSU2_TR(0x54a38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a390:{NFSU2_TR(0x54a390);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54a393:{NFSU2_TR(0x54a393);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a395:{NFSU2_TR(0x54a395);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54a3a6;}}
}
B54a397:L54a397:{c.instructions+=2;NFSU2_TR(0x54a397);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a398:{NFSU2_TR(0x54a398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a39dull));
TAIL_STATIC(0x50ca00u,50c);
}
B54a39d:L54a39d:{c.instructions+=4;NFSU2_TR(0x54a39d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a3a0:{NFSU2_TR(0x54a3a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54a3a3:{NFSU2_TR(0x54a3a3);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B54a3a4:{NFSU2_TR(0x54a3a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54a397u);}goto L54a397;}}
}
B54a3a6:L54a3a6:{c.instructions+=8;NFSU2_TR(0x54a3a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a3a9:{NFSU2_TR(0x54a3a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54a3ac:{NFSU2_TR(0x54a3ac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B54a3af:{NFSU2_TR(0x54a3af);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B54a3b0:{NFSU2_TR(0x54a3b0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x14ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54a3b3:{NFSU2_TR(0x54a3b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a3b6:{NFSU2_TR(0x54a3b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a3b9:{NFSU2_TR(0x54a3b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54a2d0u);}goto L54a2d0;}}
}
B54a3bf:L54a3bf:{c.instructions+=5;NFSU2_TR(0x54a3bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a3c2:{NFSU2_TR(0x54a3c2);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a3c5:{NFSU2_TR(0x54a3c5);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B54a3cb:{NFSU2_TR(0x54a3cb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B54a3cd:{NFSU2_TR(0x54a3cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a3d2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B54a3d2:L54a3d2:{c.instructions+=9;NFSU2_TR(0x54a3d2);
__builtin_memmove((R+4),(R+0),4);
}
B54a3d4:{NFSU2_TR(0x54a3d4);
w4(R+0,u32(0x51eb851full));
}
B54a3d9:{NFSU2_TR(0x54a3d9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B54a3db:{NFSU2_TR(0x54a3db);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B54a3de:{NFSU2_TR(0x54a3de);
__builtin_memmove((R+0),(R+8),4);
}
B54a3e0:{NFSU2_TR(0x54a3e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B54a3e3:{NFSU2_TR(0x54a3e3);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B54a3e5:{NFSU2_TR(0x54a3e5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54a3e8:{NFSU2_TR(0x54a3e8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L54a3f3;}}
}
B54a3ea:L54a3ea:{c.instructions+=2;NFSU2_TR(0x54a3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x42480000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a3f1:{NFSU2_TR(0x54a3f1);
{goto L54a417;}
}
B54a3f3:L54a3f3:{c.instructions+=9;NFSU2_TR(0x54a3f3);
w4(R+0,u32(0x51eb851full));
}
B54a3f8:{NFSU2_TR(0x54a3f8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B54a3fa:{NFSU2_TR(0x54a3fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B54a3fd:{NFSU2_TR(0x54a3fd);
__builtin_memmove((R+4),(R+8),4);
}
B54a3ff:{NFSU2_TR(0x54a3ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B54a402:{NFSU2_TR(0x54a402);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B54a404:{NFSU2_TR(0x54a404);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54a407:{NFSU2_TR(0x54a407);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x42c80000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a40e:{NFSU2_TR(0x54a40e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54a417;}}
}
B54a410:L54a410:{c.instructions+=1;NFSU2_TR(0x54a410);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x43480000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a417:L54a417:{c.instructions+=6;NFSU2_TR(0x54a417);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a41d:{NFSU2_TR(0x54a41d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a424:{NFSU2_TR(0x54a424);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B54a426:{NFSU2_TR(0x54a426);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54a429:{NFSU2_TR(0x54a429);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B54a42b:{NFSU2_TR(0x54a42b);
{goto L54a430;}
}
B54a430:L54a430:{c.instructions+=6;NFSU2_TR(0x54a430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a433:{NFSU2_TR(0x54a433);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B54a434:{NFSU2_TR(0x54a434);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a435:{NFSU2_TR(0x54a435);
u8 U[4];
w4(U+0,u32(0x79c5f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a43a:{NFSU2_TR(0x54a43a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a43d:{NFSU2_TR(0x54a43d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a442ull));
TAIL_STATIC(0x50b990u,50b);
}
B54a442:L54a442:{c.instructions+=5;NFSU2_TR(0x54a442);
__builtin_memmove((R+12),(R+0),4);
}
B54a444:{NFSU2_TR(0x54a444);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a447:{NFSU2_TR(0x54a447);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54a44a:{NFSU2_TR(0x54a44a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a44c:{NFSU2_TR(0x54a44c);
if(r1(R+518)){{goto L54a4cc;}}
}
B54a44e:L54a44e:{c.instructions+=3;NFSU2_TR(0x54a44e);
__builtin_memmove((R+4),gp(0x8384d0),4);
}
B54a454:{NFSU2_TR(0x54a454);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a456:{NFSU2_TR(0x54a456);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a49c;}}
}
B54a458:L54a458:{c.instructions+=3;NFSU2_TR(0x54a458);
__builtin_memmove((R+28),gp(0x8384c4),4);
}
B54a45e:{NFSU2_TR(0x54a45e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a460:{NFSU2_TR(0x54a460);
if(r1(R+518)){{goto L54a49c;}}
}
B54a462:L54a462:{c.instructions+=3;NFSU2_TR(0x54a462);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54a465:{NFSU2_TR(0x54a465);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a467:{NFSU2_TR(0x54a467);
if(r1(R+518)){{goto L54a4d2;}}
}
B54a469:L54a469:{c.instructions+=5;NFSU2_TR(0x54a469);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a46f:{NFSU2_TR(0x54a46f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B54a475:{NFSU2_TR(0x54a475);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a476:{NFSU2_TR(0x54a476);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a477:{NFSU2_TR(0x54a477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a47cull));
TAIL_STATIC(0x519e50u,519);
}
B54a47c:L54a47c:{c.instructions+=2;NFSU2_TR(0x54a47c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a47e:{NFSU2_TR(0x54a47e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a4b8;}}
}
B54a480:L54a480:{c.instructions+=6;NFSU2_TR(0x54a480);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a486:{NFSU2_TR(0x54a486);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a489:{NFSU2_TR(0x54a489);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((R+4),(U+0),4);
}
B54a48f:{NFSU2_TR(0x54a48f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a490:{NFSU2_TR(0x54a490);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a491:{NFSU2_TR(0x54a491);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a496ull));
TAIL_STATIC(0x519e50u,519);
}
B54a496:L54a496:{c.instructions+=2;NFSU2_TR(0x54a496);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a498:{NFSU2_TR(0x54a498);
if(r1(R+518)){{goto L54a4d2;}}
}
B54a49a:L54a49a:{c.instructions+=1;NFSU2_TR(0x54a49a);
{goto L54a4b8;}
}
B54a49c:L54a49c:{c.instructions+=3;NFSU2_TR(0x54a49c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a49d:{NFSU2_TR(0x54a49d);
w4(R+4,u32(0x8637b0ull));
}
B54a4a2:{NFSU2_TR(0x54a4a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a4a7ull));
TAIL_STATIC(0x51bb70u,51b);
}
B54a4a7:L54a4a7:{c.instructions+=2;NFSU2_TR(0x54a4a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a4a9:{NFSU2_TR(0x54a4a9);
if(r1(R+518)){{goto L54a4cc;}}
}
B54a4ab:L54a4ab:{c.instructions+=3;NFSU2_TR(0x54a4ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a4ae:{NFSU2_TR(0x54a4ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a4b0:{NFSU2_TR(0x54a4b0);
if(r1(R+518)){{goto L54a4cc;}}
}
B54a4b2:L54a4b2:{c.instructions+=1;NFSU2_TR(0x54a4b2);
__builtin_memmove((R+28),gp(0x8384c4),4);
}
B54a4b8:L54a4b8:{c.instructions+=3;NFSU2_TR(0x54a4b8);
__builtin_memmove((R+4),(R+0),4);
}
B54a4ba:{NFSU2_TR(0x54a4ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a4bc:{NFSU2_TR(0x54a4bc);
if(r1(R+518)){{goto L54a4d2;}}
}
B54a4be:L54a4be:{c.instructions+=2;NFSU2_TR(0x54a4be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a4bf:{NFSU2_TR(0x54a4bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a4c4ull));
TAIL_STATIC(0x517f80u,517);
}
B54a4c4:L54a4c4:{c.instructions+=2;NFSU2_TR(0x54a4c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a4c6:{NFSU2_TR(0x54a4c6);
if(r1(R+518)){{goto L54a4cc;}}
}
B54a4c8:L54a4c8:{c.instructions+=2;NFSU2_TR(0x54a4c8);
__builtin_memmove((R+24),(R+0),4);
}
B54a4ca:{NFSU2_TR(0x54a4ca);
{goto L54a4e9;}
}
B54a4cc:L54a4cc:{c.instructions+=1;NFSU2_TR(0x54a4cc);
__builtin_memmove((R+28),gp(0x8384c4),4);
}
B54a4d2:L54a4d2:{c.instructions+=2;NFSU2_TR(0x54a4d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a4d4:{NFSU2_TR(0x54a4d4);
if(r1(R+518)){{goto L54a4e7;}}
}
B54a4d6:L54a4d6:{c.instructions+=5;NFSU2_TR(0x54a4d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54a4d9:{NFSU2_TR(0x54a4d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a4da:{NFSU2_TR(0x54a4da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54a4dd:{NFSU2_TR(0x54a4dd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a4de:{NFSU2_TR(0x54a4de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a4e3ull));
TAIL_STATIC(0x52c570u,52c);
}
B54a4e3:L54a4e3:{c.instructions+=2;NFSU2_TR(0x54a4e3);
__builtin_memmove((R+24),(R+0),4);
}
B54a4e5:{NFSU2_TR(0x54a4e5);
{goto L54a4e9;}
}
B54a4e7:L54a4e7:{c.instructions+=1;NFSU2_TR(0x54a4e7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B54a4e9:L54a4e9:{c.instructions+=16;NFSU2_TR(0x54a4e9);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B54a4ec:{NFSU2_TR(0x54a4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a4ef:{NFSU2_TR(0x54a4ef);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B54a4f2:{NFSU2_TR(0x54a4f2);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B54a4f5:{NFSU2_TR(0x54a4f5);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a4f8:{NFSU2_TR(0x54a4f8);
{u32 ea_=u32(u32(7980676u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B54a4fe:{NFSU2_TR(0x54a4fe);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B54a500:{NFSU2_TR(0x54a500);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B54a503:{NFSU2_TR(0x54a503);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B54a506:{NFSU2_TR(0x54a506);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a509:{NFSU2_TR(0x54a509);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B54a50c:{NFSU2_TR(0x54a50c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B54a50e:{NFSU2_TR(0x54a50e);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B54a510:{NFSU2_TR(0x54a510);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54a512:{NFSU2_TR(0x54a512);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54a515:{NFSU2_TR(0x54a515);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a5c1;}}
}
B54a51b:L54a51b:{c.instructions+=2;NFSU2_TR(0x54a51b);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a51e:{NFSU2_TR(0x54a51e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a523ull));
TAIL_STATIC(0x75bed4u,75b);
}
B54a523:L54a523:{c.instructions+=5;NFSU2_TR(0x54a523);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B54a527:{NFSU2_TR(0x54a527);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a528:{NFSU2_TR(0x54a528);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a52d:{NFSU2_TR(0x54a52d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a52e:{NFSU2_TR(0x54a52e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a533ull));
TAIL_STATIC(0x537be0u,537);
}
B54a533:L54a533:{c.instructions+=6;NFSU2_TR(0x54a533);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B54a536:{NFSU2_TR(0x54a536);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a537:{NFSU2_TR(0x54a537);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B54a53a:{NFSU2_TR(0x54a53a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a53b:{NFSU2_TR(0x54a53b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a53c:{NFSU2_TR(0x54a53c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a541ull));
TAIL_STATIC(0x51d170u,51d);
}
B54a541:L54a541:{c.instructions+=9;NFSU2_TR(0x54a541);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54a544:{NFSU2_TR(0x54a544);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a547:{NFSU2_TR(0x54a547);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B54a54d:{NFSU2_TR(0x54a54d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B54a550:{NFSU2_TR(0x54a550);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a551:{NFSU2_TR(0x54a551);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a552:{NFSU2_TR(0x54a552);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54a555:{NFSU2_TR(0x54a555);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a556:{NFSU2_TR(0x54a556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a55bull));
TAIL_STATIC(0x51d2d0u,51d);
}
B54a55b:L54a55b:{c.instructions+=6;NFSU2_TR(0x54a55b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+8),(U+0),4);
}
B54a55e:{NFSU2_TR(0x54a55e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a55f:{NFSU2_TR(0x54a55f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B54a562:{NFSU2_TR(0x54a562);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a563:{NFSU2_TR(0x54a563);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a564:{NFSU2_TR(0x54a564);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a569ull));
TAIL_STATIC(0x51d070u,51d);
}
B54a569:L54a569:{c.instructions+=6;NFSU2_TR(0x54a569);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54a56c:{NFSU2_TR(0x54a56c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a56f:{NFSU2_TR(0x54a56f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a570:{NFSU2_TR(0x54a570);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a571:{NFSU2_TR(0x54a571);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a572:{NFSU2_TR(0x54a572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a577ull));
TAIL_STATIC(0x51d380u,51d);
}
B54a577:L54a577:{c.instructions+=3;NFSU2_TR(0x54a577);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B54a57a:{NFSU2_TR(0x54a57a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a57c:{NFSU2_TR(0x54a57c);
if(r1(R+518)){{goto L54a5ff;}}
}
B54a582:L54a582:{c.instructions+=3;NFSU2_TR(0x54a582);
__builtin_memmove((R+0),gp(0x8384d4),4);
}
B54a587:{NFSU2_TR(0x54a587);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a589:{NFSU2_TR(0x54a589);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a591;}}
}
B54a58b:L54a58b:{c.instructions+=2;NFSU2_TR(0x54a58b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B54a58f:{NFSU2_TR(0x54a58f);
if(r1(R+518)){{goto L54a59f;}}
}
B54a591:L54a591:{c.instructions+=4;NFSU2_TR(0x54a591);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a594:{NFSU2_TR(0x54a594);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B54a597:{NFSU2_TR(0x54a597);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B54a59c:{NFSU2_TR(0x54a59c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a59f:L54a59f:{c.instructions+=2;NFSU2_TR(0x54a59f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54a5a3:{NFSU2_TR(0x54a5a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a5ff;}}
}
B54a5a5:L54a5a5:{c.instructions+=4;NFSU2_TR(0x54a5a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a5a8:{NFSU2_TR(0x54a5a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54a5ab:{NFSU2_TR(0x54a5ab);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a5ad:{NFSU2_TR(0x54a5ad);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54a5ff;}}
}
B54a5af:L54a5af:{c.instructions+=1;NFSU2_TR(0x54a5af);
}
B54a5b0:L54a5b0:{c.instructions+=2;NFSU2_TR(0x54a5b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a5b1:{NFSU2_TR(0x54a5b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a5b6ull));
TAIL_STATIC(0x50ca50u,50c);
}
B54a5b6:L54a5b6:{c.instructions+=4;NFSU2_TR(0x54a5b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a5b9:{NFSU2_TR(0x54a5b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54a5bc:{NFSU2_TR(0x54a5bc);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B54a5bd:{NFSU2_TR(0x54a5bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54a5b0u);}goto L54a5b0;}}
}
B54a5bf:L54a5bf:{c.instructions+=1;NFSU2_TR(0x54a5bf);
{goto L54a5ff;}
}
B54a5c1:L54a5c1:{c.instructions+=2;NFSU2_TR(0x54a5c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a5c3:{NFSU2_TR(0x54a5c3);
if(r1(R+518)){{goto L54a5ff;}}
}
B54a5c5:L54a5c5:{c.instructions+=3;NFSU2_TR(0x54a5c5);
__builtin_memmove((R+0),gp(0x8384d4),4);
}
B54a5ca:{NFSU2_TR(0x54a5ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a5cc:{NFSU2_TR(0x54a5cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a5d4;}}
}
B54a5ce:L54a5ce:{c.instructions+=2;NFSU2_TR(0x54a5ce);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B54a5d2:{NFSU2_TR(0x54a5d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a5db;}}
}
B54a5d4:L54a5d4:{c.instructions+=1;NFSU2_TR(0x54a5d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B54a5db:L54a5db:{c.instructions+=2;NFSU2_TR(0x54a5db);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54a5df:{NFSU2_TR(0x54a5df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a5ff;}}
}
B54a5e1:L54a5e1:{c.instructions+=4;NFSU2_TR(0x54a5e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a5e4:{NFSU2_TR(0x54a5e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54a5e7:{NFSU2_TR(0x54a5e7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a5e9:{NFSU2_TR(0x54a5e9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L54a5ff;}}
}
B54a5eb:L54a5eb:{c.instructions+=1;NFSU2_TR(0x54a5eb);
{goto L54a5f0;}
}
B54a5f0:L54a5f0:{c.instructions+=2;NFSU2_TR(0x54a5f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a5f1:{NFSU2_TR(0x54a5f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a5f6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B54a5f6:L54a5f6:{c.instructions+=4;NFSU2_TR(0x54a5f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a5f9:{NFSU2_TR(0x54a5f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54a5fc:{NFSU2_TR(0x54a5fc);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B54a5fd:{NFSU2_TR(0x54a5fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54a5f0u);}goto L54a5f0;}}
}
B54a5ff:L54a5ff:{c.instructions+=4;NFSU2_TR(0x54a5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a602:{NFSU2_TR(0x54a602);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54a605:{NFSU2_TR(0x54a605);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a608:{NFSU2_TR(0x54a608);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54a430u);}goto L54a430;}}
}
B54a60e:L54a60e:{c.instructions+=6;NFSU2_TR(0x54a60e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54a60f:{NFSU2_TR(0x54a60f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54a610:{NFSU2_TR(0x54a610);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54a611:{NFSU2_TR(0x54a611);
__builtin_memmove((R+16),(R+20),4);
}
B54a613:{NFSU2_TR(0x54a613);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54a614:{NFSU2_TR(0x54a614);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54a620:L54a620:{c.instructions+=9;NFSU2_TR(0x54a620);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a621:{NFSU2_TR(0x54a621);
__builtin_memmove((R+20),(R+16),4);
}
B54a623:{NFSU2_TR(0x54a623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B54a626:{NFSU2_TR(0x54a626);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a627:{NFSU2_TR(0x54a627);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a628:{NFSU2_TR(0x54a628);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a629:{NFSU2_TR(0x54a629);
u8 U[4];
w4(U+0,u32(0x79c6a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a62e:{NFSU2_TR(0x54a62e);
__builtin_memmove((R+12),(R+4),4);
}
B54a630:{NFSU2_TR(0x54a630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a635ull));
TAIL_STATIC(0x50b990u,50b);
}
B54a635:L54a635:{c.instructions+=8;NFSU2_TR(0x54a635);
{u32 ea_=u32(u32(8627892u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a63b:{NFSU2_TR(0x54a63b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54a641:{NFSU2_TR(0x54a641);
__builtin_memmove((R+4),(R+0),4);
}
B54a643:{NFSU2_TR(0x54a643);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54a646:{NFSU2_TR(0x54a646);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a649:{NFSU2_TR(0x54a649);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54a64b:{NFSU2_TR(0x54a64b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54a64e:{NFSU2_TR(0x54a64e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a6f0;}}
}
B54a654:L54a654:{c.instructions+=3;NFSU2_TR(0x54a654);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54a657:{NFSU2_TR(0x54a657);
__builtin_memmove((R+4),(R+24),4);
}
B54a659:{NFSU2_TR(0x54a659);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a65eull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B54a65e:L54a65e:{c.instructions+=3;NFSU2_TR(0x54a65e);
{u32 ea_=u32(u32(8627892u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a664:{NFSU2_TR(0x54a664);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54a666:{NFSU2_TR(0x54a666);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a66e;}}
}
B54a668:L54a668:{c.instructions+=1;NFSU2_TR(0x54a668);
{u32 ea_=u32(u32(7978748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B54a66e:L54a66e:{c.instructions+=4;NFSU2_TR(0x54a66e);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B54a674:{NFSU2_TR(0x54a674);
__builtin_memmove((R+4),(R+24),4);
}
B54a676:{NFSU2_TR(0x54a676);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54a679:{NFSU2_TR(0x54a679);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a67eull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B54a67e:L54a67e:{c.instructions+=6;NFSU2_TR(0x54a67e);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B54a680:{NFSU2_TR(0x54a680);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B54a682:{NFSU2_TR(0x54a682);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xaec8f620ull))));
}
B54a687:{NFSU2_TR(0x54a687);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xacb8dff3ull))));
}
B54a68c:{NFSU2_TR(0x54a68c);
__builtin_memmove((R+8),(R+0),4);
}
B54a68e:{NFSU2_TR(0x54a68e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a693ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54a693:L54a693:{c.instructions+=3;NFSU2_TR(0x54a693);
__builtin_memmove((R+24),(R+0),4);
}
B54a695:{NFSU2_TR(0x54a695);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a697:{NFSU2_TR(0x54a697);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a6a5;}}
}
B54a699:L54a699:{c.instructions+=2;NFSU2_TR(0x54a699);
w4(R+8,u32(0xc01a6f63ull));
}
B54a69e:{NFSU2_TR(0x54a69e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a6a3ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54a6a3:L54a6a3:{c.instructions+=1;NFSU2_TR(0x54a6a3);
__builtin_memmove((R+24),(R+0),4);
}
B54a6a5:L54a6a5:{c.instructions+=2;NFSU2_TR(0x54a6a5);
w4(R+8,u32(0x76f2bc60ull));
}
B54a6aa:{NFSU2_TR(0x54a6aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a6afull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54a6af:L54a6af:{c.instructions+=3;NFSU2_TR(0x54a6af);
__builtin_memmove((R+28),(R+0),4);
}
B54a6b1:{NFSU2_TR(0x54a6b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a6b3:{NFSU2_TR(0x54a6b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a6c1;}}
}
B54a6b5:L54a6b5:{c.instructions+=2;NFSU2_TR(0x54a6b5);
w4(R+8,u32(0xc01a6f63ull));
}
B54a6ba:{NFSU2_TR(0x54a6ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a6bfull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54a6bf:L54a6bf:{c.instructions+=1;NFSU2_TR(0x54a6bf);
__builtin_memmove((R+28),(R+0),4);
}
B54a6c1:L54a6c1:{c.instructions+=3;NFSU2_TR(0x54a6c1);
{u32 ea_=u32(u32(8627900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a6c7:{NFSU2_TR(0x54a6c7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54a6cd:{NFSU2_TR(0x54a6cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a6d2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B54a6d2:L54a6d2:{c.instructions+=11;NFSU2_TR(0x54a6d2);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a6d5:{NFSU2_TR(0x54a6d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54a6d8:{NFSU2_TR(0x54a6d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a6d9:{NFSU2_TR(0x54a6d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a6dc:{NFSU2_TR(0x54a6dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a6dd:{NFSU2_TR(0x54a6dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B54a6e0:{NFSU2_TR(0x54a6e0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B54a6e3:{NFSU2_TR(0x54a6e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a6e4:{NFSU2_TR(0x54a6e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a6e5:{NFSU2_TR(0x54a6e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a6e6:{NFSU2_TR(0x54a6e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a6ebull));
TAIL_STATIC(0x537b80u,537);
}
B54a6eb:L54a6eb:{c.instructions+=2;NFSU2_TR(0x54a6eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B54a6ee:{NFSU2_TR(0x54a6ee);
{goto L54a702;}
}
B54a6f0:L54a6f0:{c.instructions+=5;NFSU2_TR(0x54a6f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a6f3:{NFSU2_TR(0x54a6f3);
u8 U[4];
w4(U+0,u32(0xa4c02484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a6f8:{NFSU2_TR(0x54a6f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a6f9:{NFSU2_TR(0x54a6f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a6fa:{NFSU2_TR(0x54a6fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a6ffull));
TAIL_STATIC(0x495460u,495);
}
B54a6ff:L54a6ff:{c.instructions+=1;NFSU2_TR(0x54a6ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54a702:L54a702:{c.instructions+=2;NFSU2_TR(0x54a702);
u8 U[4];
w4(U+0,u32(0x79c698ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a707:{NFSU2_TR(0x54a707);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a70cull));
TAIL_STATIC(0x50b990u,50b);
}
B54a70c:L54a70c:{c.instructions+=8;NFSU2_TR(0x54a70c);
{u32 ea_=u32(u32(8627896u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a712:{NFSU2_TR(0x54a712);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54a718:{NFSU2_TR(0x54a718);
__builtin_memmove((R+4),(R+0),4);
}
B54a71a:{NFSU2_TR(0x54a71a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54a71d:{NFSU2_TR(0x54a71d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a720:{NFSU2_TR(0x54a720);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54a722:{NFSU2_TR(0x54a722);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54a725:{NFSU2_TR(0x54a725);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a7c1;}}
}
B54a72b:L54a72b:{c.instructions+=3;NFSU2_TR(0x54a72b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54a72e:{NFSU2_TR(0x54a72e);
__builtin_memmove((R+4),(R+24),4);
}
B54a730:{NFSU2_TR(0x54a730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a735ull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B54a735:L54a735:{c.instructions+=3;NFSU2_TR(0x54a735);
{u32 ea_=u32(u32(8627896u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a73b:{NFSU2_TR(0x54a73b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54a73d:{NFSU2_TR(0x54a73d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a745;}}
}
B54a73f:L54a73f:{c.instructions+=1;NFSU2_TR(0x54a73f);
{u32 ea_=u32(u32(7978736u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B54a745:L54a745:{c.instructions+=3;NFSU2_TR(0x54a745);
__builtin_memmove((R+4),(R+24),4);
}
B54a747:{NFSU2_TR(0x54a747);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54a74a:{NFSU2_TR(0x54a74a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a74full));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B54a74f:L54a74f:{c.instructions+=6;NFSU2_TR(0x54a74f);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B54a751:{NFSU2_TR(0x54a751);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B54a753:{NFSU2_TR(0x54a753);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8fc570a8ull))));
}
B54a758:{NFSU2_TR(0x54a758);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcbbc6512ull))));
}
B54a75d:{NFSU2_TR(0x54a75d);
__builtin_memmove((R+8),(R+0),4);
}
B54a75f:{NFSU2_TR(0x54a75f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a764ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54a764:L54a764:{c.instructions+=3;NFSU2_TR(0x54a764);
__builtin_memmove((R+24),(R+0),4);
}
B54a766:{NFSU2_TR(0x54a766);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a768:{NFSU2_TR(0x54a768);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a776;}}
}
B54a76a:L54a76a:{c.instructions+=2;NFSU2_TR(0x54a76a);
w4(R+8,u32(0xc01a6f63ull));
}
B54a76f:{NFSU2_TR(0x54a76f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a774ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54a774:L54a774:{c.instructions+=1;NFSU2_TR(0x54a774);
__builtin_memmove((R+24),(R+0),4);
}
B54a776:L54a776:{c.instructions+=2;NFSU2_TR(0x54a776);
w4(R+8,u32(0x43aeef78ull));
}
B54a77b:{NFSU2_TR(0x54a77b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a780ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54a780:L54a780:{c.instructions+=3;NFSU2_TR(0x54a780);
__builtin_memmove((R+28),(R+0),4);
}
B54a782:{NFSU2_TR(0x54a782);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a784:{NFSU2_TR(0x54a784);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a792;}}
}
B54a786:L54a786:{c.instructions+=2;NFSU2_TR(0x54a786);
w4(R+8,u32(0xc01a6f63ull));
}
B54a78b:{NFSU2_TR(0x54a78b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a790ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54a790:L54a790:{c.instructions+=1;NFSU2_TR(0x54a790);
__builtin_memmove((R+28),(R+0),4);
}
B54a792:L54a792:{c.instructions+=3;NFSU2_TR(0x54a792);
{u32 ea_=u32(u32(8627904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a798:{NFSU2_TR(0x54a798);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54a79e:{NFSU2_TR(0x54a79e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a7a3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B54a7a3:L54a7a3:{c.instructions+=11;NFSU2_TR(0x54a7a3);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a7a6:{NFSU2_TR(0x54a7a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54a7a9:{NFSU2_TR(0x54a7a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a7aa:{NFSU2_TR(0x54a7aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a7ad:{NFSU2_TR(0x54a7ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a7ae:{NFSU2_TR(0x54a7ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B54a7b1:{NFSU2_TR(0x54a7b1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B54a7b4:{NFSU2_TR(0x54a7b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a7b5:{NFSU2_TR(0x54a7b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a7b6:{NFSU2_TR(0x54a7b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a7b7:{NFSU2_TR(0x54a7b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a7bcull));
TAIL_STATIC(0x537b80u,537);
}
B54a7bc:L54a7bc:{c.instructions+=2;NFSU2_TR(0x54a7bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B54a7bf:{NFSU2_TR(0x54a7bf);
{goto L54a7d3;}
}
B54a7c1:L54a7c1:{c.instructions+=5;NFSU2_TR(0x54a7c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a7c4:{NFSU2_TR(0x54a7c4);
u8 U[4];
w4(U+0,u32(0xa4c02484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a7c9:{NFSU2_TR(0x54a7c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a7ca:{NFSU2_TR(0x54a7ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a7cb:{NFSU2_TR(0x54a7cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a7d0ull));
TAIL_STATIC(0x495460u,495);
}
B54a7d0:L54a7d0:{c.instructions+=1;NFSU2_TR(0x54a7d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B54a7d3:L54a7d3:{c.instructions+=6;NFSU2_TR(0x54a7d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a7d6:{NFSU2_TR(0x54a7d6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a7d8:{NFSU2_TR(0x54a7d8);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a7dd:{NFSU2_TR(0x54a7dd);
u8 U[4];
w4(U+0,u32(0x79c688ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a7e2:{NFSU2_TR(0x54a7e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a7e3:{NFSU2_TR(0x54a7e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a7e8ull));
TAIL_STATIC(0x5426c0u,542);
}
B54a7e8:L54a7e8:{c.instructions+=7;NFSU2_TR(0x54a7e8);
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
B54a7eb:{NFSU2_TR(0x54a7eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54a7ec:{NFSU2_TR(0x54a7ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54a7ed:{NFSU2_TR(0x54a7ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54a7ee:{NFSU2_TR(0x54a7ee);
__builtin_memmove((R+16),(R+20),4);
}
B54a7f0:{NFSU2_TR(0x54a7f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54a7f1:{NFSU2_TR(0x54a7f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54a800:L54a800:{c.instructions+=16;NFSU2_TR(0x54a800);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a801:{NFSU2_TR(0x54a801);
__builtin_memmove((R+20),(R+16),4);
}
B54a803:{NFSU2_TR(0x54a803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B54a806:{NFSU2_TR(0x54a806);
__builtin_memmove((R+0),gp(0x83a64c),4);
}
B54a80b:{NFSU2_TR(0x54a80b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a80c:{NFSU2_TR(0x54a80c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B54a813:{NFSU2_TR(0x54a813);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a814:{NFSU2_TR(0x54a814);
__builtin_memmove((R+24),(R+4),4);
}
B54a816:{NFSU2_TR(0x54a816);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54a819:{NFSU2_TR(0x54a819);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54a81b:{NFSU2_TR(0x54a81b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54a81e:{NFSU2_TR(0x54a81e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a81f:{NFSU2_TR(0x54a81f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54a822:{NFSU2_TR(0x54a822);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54a826:{NFSU2_TR(0x54a826);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a82d:{NFSU2_TR(0x54a82d);
if(r1(R+518)){{goto L54a880;}}
}
B54a82f:L54a82f:{c.instructions+=2;NFSU2_TR(0x54a82f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54a835:{NFSU2_TR(0x54a835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a83aull));
TAIL_STATIC(0x56d440u,56d);
}
B54a83a:L54a83a:{c.instructions+=5;NFSU2_TR(0x54a83a);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B54a83d:{NFSU2_TR(0x54a83d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54a843:{NFSU2_TR(0x54a843);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54a845:{NFSU2_TR(0x54a845);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B54a848:{NFSU2_TR(0x54a848);
if(r1(R+514)){{goto L54a8d4;}}
}
B54a84e:L54a84e:{c.instructions+=7;NFSU2_TR(0x54a84e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a851:{NFSU2_TR(0x54a851);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a853:{NFSU2_TR(0x54a853);
u8 U[4];
w4(U+0,u32(0x79c6b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a858:{NFSU2_TR(0x54a858);
u8 U[4];
w4(U+0,u32(0x11bf9934ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a85d:{NFSU2_TR(0x54a85d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a85e:{NFSU2_TR(0x54a85e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54a862:{NFSU2_TR(0x54a862);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a867ull));
TAIL_STATIC(0x537c00u,537);
}
B54a867:L54a867:{c.instructions+=6;NFSU2_TR(0x54a867);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B54a86a:{NFSU2_TR(0x54a86a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a86c:{NFSU2_TR(0x54a86c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a86d:{NFSU2_TR(0x54a86d);
__builtin_memmove((R+4),(R+24),4);
}
B54a86f:{NFSU2_TR(0x54a86f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54a873:{NFSU2_TR(0x54a873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a878ull));
TAIL_STATIC(0x523330u,523);
}
B54a878:L54a878:{c.instructions+=3;NFSU2_TR(0x54a878);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a879:{NFSU2_TR(0x54a879);
__builtin_memmove((R+4),(R+24),4);
}
B54a87b:{NFSU2_TR(0x54a87b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a880ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54a620u);}goto L54a620;}
}
B54a880:L54a880:{c.instructions+=6;NFSU2_TR(0x54a880);
__builtin_memmove((R+0),gp(0x838564),4);
}
B54a885:{NFSU2_TR(0x54a885);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54a888:{NFSU2_TR(0x54a888);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54a88b:{NFSU2_TR(0x54a88b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a88e:{NFSU2_TR(0x54a88e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a893:{NFSU2_TR(0x54a893);
if(r1(R+518)){{goto L54a92d;}}
}
B54a899:L54a899:{c.instructions+=2;NFSU2_TR(0x54a899);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a89e:{NFSU2_TR(0x54a89e);
if(r1(R+518)){{goto L54a8da;}}
}
B54a8a0:L54a8a0:{c.instructions+=2;NFSU2_TR(0x54a8a0);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe1fde1d1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54a8a5:{NFSU2_TR(0x54a8a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a963;}}
}
B54a8ab:L54a8ab:{c.instructions+=3;NFSU2_TR(0x54a8ab);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B54a8b1:{NFSU2_TR(0x54a8b1);
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
B54a8b3:{NFSU2_TR(0x54a8b3);
if(r1(R+518)){{goto L54a963;}}
}
B54a8b9:L54a8b9:{c.instructions+=6;NFSU2_TR(0x54a8b9);
__builtin_memmove((R+8),gp(0x7fa234),4);
}
B54a8bf:{NFSU2_TR(0x54a8bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a8c2:{NFSU2_TR(0x54a8c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a8c4:{NFSU2_TR(0x54a8c4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a8c5:{NFSU2_TR(0x54a8c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a8c6:{NFSU2_TR(0x54a8c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a8cbull));
TAIL_STATIC(0x5377a0u,537);
}
B54a8cb:L54a8cb:{c.instructions+=6;NFSU2_TR(0x54a8cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54a8cc:{NFSU2_TR(0x54a8cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54a8cd:{NFSU2_TR(0x54a8cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54a8ce:{NFSU2_TR(0x54a8ce);
__builtin_memmove((R+16),(R+20),4);
}
B54a8d0:{NFSU2_TR(0x54a8d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54a8d1:{NFSU2_TR(0x54a8d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54a8d4:L54a8d4:{c.instructions+=2;NFSU2_TR(0x54a8d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54a8d8:{NFSU2_TR(0x54a8d8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54a880u);}goto L54a880;}
}
B54a8da:L54a8da:{c.instructions+=2;NFSU2_TR(0x54a8da);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B54a8e0:{NFSU2_TR(0x54a8e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a8e5ull));
TAIL_STATIC(0x52cdd0u,52c);
}
B54a8e5:L54a8e5:{c.instructions+=3;NFSU2_TR(0x54a8e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54a8e8:{NFSU2_TR(0x54a8e8);
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
B54a8ea:{NFSU2_TR(0x54a8ea);
if(r1(R+518)){{goto L54a963;}}
}
B54a8ec:L54a8ec:{c.instructions+=3;NFSU2_TR(0x54a8ec);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B54a8f2:{NFSU2_TR(0x54a8f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a8f4:{NFSU2_TR(0x54a8f4);
if(r1(R+518)){{goto L54a8ff;}}
}
B54a8f6:L54a8f6:{c.instructions+=3;NFSU2_TR(0x54a8f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a8f9:{NFSU2_TR(0x54a8f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a8fa:{NFSU2_TR(0x54a8fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a8ffull));
TAIL_STATIC(0x5376f0u,537);
}
B54a8ff:L54a8ff:{c.instructions+=2;NFSU2_TR(0x54a8ff);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a904:{NFSU2_TR(0x54a904);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a909ull));
TAIL_STATIC(0x52cf60u,52c);
}
B54a909:L54a909:{c.instructions+=3;NFSU2_TR(0x54a909);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54a90c:{NFSU2_TR(0x54a90c);
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
B54a90e:{NFSU2_TR(0x54a90e);
if(r1(R+518)){{goto L54a963;}}
}
B54a910:L54a910:{c.instructions+=3;NFSU2_TR(0x54a910);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B54a916:{NFSU2_TR(0x54a916);
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
B54a918:{NFSU2_TR(0x54a918);
if(r1(R+518)){{goto L54a963;}}
}
B54a91a:L54a91a:{c.instructions+=2;NFSU2_TR(0x54a91a);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a91f:{NFSU2_TR(0x54a91f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a924ull));
TAIL_STATIC(0x5376f0u,537);
}
B54a924:L54a924:{c.instructions+=6;NFSU2_TR(0x54a924);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54a925:{NFSU2_TR(0x54a925);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54a926:{NFSU2_TR(0x54a926);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54a927:{NFSU2_TR(0x54a927);
__builtin_memmove((R+16),(R+20),4);
}
B54a929:{NFSU2_TR(0x54a929);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54a92a:{NFSU2_TR(0x54a92a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54a92d:L54a92d:{c.instructions+=3;NFSU2_TR(0x54a92d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B54a930:{NFSU2_TR(0x54a930);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54a932:{NFSU2_TR(0x54a932);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a94b;}}
}
B54a934:L54a934:{c.instructions+=4;NFSU2_TR(0x54a934);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a936:{NFSU2_TR(0x54a936);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a937:{NFSU2_TR(0x54a937);
__builtin_memmove((R+4),(R+24),4);
}
B54a939:{NFSU2_TR(0x54a939);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a93eull));
TAIL_STATIC(0x523330u,523);
}
B54a93e:L54a93e:{c.instructions+=3;NFSU2_TR(0x54a93e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54a944:{NFSU2_TR(0x54a944);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a946:{NFSU2_TR(0x54a946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a94bull));
TAIL_STATIC(0x56e680u,56e);
}
B54a94b:L54a94b:{c.instructions+=6;NFSU2_TR(0x54a94b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a94e:{NFSU2_TR(0x54a94e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a950:{NFSU2_TR(0x54a950);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a955:{NFSU2_TR(0x54a955);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a95a:{NFSU2_TR(0x54a95a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a95b:{NFSU2_TR(0x54a95b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a960ull));
TAIL_STATIC(0x537c60u,537);
}
B54a960:L54a960:{c.instructions+=1;NFSU2_TR(0x54a960);
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
B54a963:L54a963:{c.instructions+=6;NFSU2_TR(0x54a963);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54a964:{NFSU2_TR(0x54a964);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54a965:{NFSU2_TR(0x54a965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54a966:{NFSU2_TR(0x54a966);
__builtin_memmove((R+16),(R+20),4);
}
B54a968:{NFSU2_TR(0x54a968);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54a969:{NFSU2_TR(0x54a969);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54a970:L54a970:{c.instructions+=12;NFSU2_TR(0x54a970);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a971:{NFSU2_TR(0x54a971);
__builtin_memmove((R+20),(R+16),4);
}
B54a973:{NFSU2_TR(0x54a973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B54a976:{NFSU2_TR(0x54a976);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a977:{NFSU2_TR(0x54a977);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a978:{NFSU2_TR(0x54a978);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a97b:{NFSU2_TR(0x54a97b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x79c704ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a982:{NFSU2_TR(0x54a982);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x79c6fcull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a989:{NFSU2_TR(0x54a989);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x79c6f8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a990:{NFSU2_TR(0x54a990);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B54a997:{NFSU2_TR(0x54a997);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a998:{NFSU2_TR(0x54a998);
{goto L54a9a0;}
}
B54a9a0:L54a9a0:{c.instructions+=10;NFSU2_TR(0x54a9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54a9a3:{NFSU2_TR(0x54a9a3);
__builtin_memmove((R+12),(R+0),4);
}
B54a9a5:{NFSU2_TR(0x54a9a5);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B54a9a9:{NFSU2_TR(0x54a9a9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x6cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B54a9ac:{NFSU2_TR(0x54a9ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a9ad:{NFSU2_TR(0x54a9ad);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x83a65cull))));
}
B54a9b3:{NFSU2_TR(0x54a9b3);
u8 U[4];
w4(U+0,u32(0x79c6ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a9b8:{NFSU2_TR(0x54a9b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a9bb:{NFSU2_TR(0x54a9bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54a9be:{NFSU2_TR(0x54a9be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a9c3ull));
TAIL_STATIC(0x50b990u,50b);
}
B54a9c3:L54a9c3:{c.instructions+=6;NFSU2_TR(0x54a9c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B54a9c6:{NFSU2_TR(0x54a9c6);
__builtin_memmove((R+28),(R+0),4);
}
B54a9c8:{NFSU2_TR(0x54a9c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54a9ca:{NFSU2_TR(0x54a9ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54a9cd:{NFSU2_TR(0x54a9cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a9cf:{NFSU2_TR(0x54a9cf);
if(r1(R+518)){{goto L54aa1a;}}
}
B54a9d1:L54a9d1:{c.instructions+=2;NFSU2_TR(0x54a9d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a9d6:{NFSU2_TR(0x54a9d6);
if(r1(R+518)){{goto L54aa1a;}}
}
B54a9d8:L54a9d8:{c.instructions+=4;NFSU2_TR(0x54a9d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a9da:{NFSU2_TR(0x54a9da);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B54a9dd:{NFSU2_TR(0x54a9dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a9de:{NFSU2_TR(0x54a9de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a9e3ull));
TAIL_STATIC(0x577240u,577);
}
B54a9e3:L54a9e3:{c.instructions+=2;NFSU2_TR(0x54a9e3);
w4(R+8,u32(0x29f4bf03ull));
}
B54a9e8:{NFSU2_TR(0x54a9e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a9edull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54a9ed:L54a9ed:{c.instructions+=2;NFSU2_TR(0x54a9ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54a9ef:{NFSU2_TR(0x54a9ef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54a9fb;}}
}
B54a9f1:L54a9f1:{c.instructions+=2;NFSU2_TR(0x54a9f1);
w4(R+8,u32(0xc01a6f63ull));
}
B54a9f6:{NFSU2_TR(0x54a9f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54a9fbull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54a9fb:L54a9fb:{c.instructions+=9;NFSU2_TR(0x54a9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54a9fe:{NFSU2_TR(0x54a9fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54a9ff:{NFSU2_TR(0x54a9ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54aa02:{NFSU2_TR(0x54aa02);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B54aa05:{NFSU2_TR(0x54aa05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aa06:{NFSU2_TR(0x54aa06);
u8 U[4];
w4(U+0,u32(0x794fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aa0b:{NFSU2_TR(0x54aa0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aa0c:{NFSU2_TR(0x54aa0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aa0d:{NFSU2_TR(0x54aa0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54aa12ull));
TAIL_STATIC(0x537b80u,537);
}
B54aa12:L54aa12:{c.instructions+=2;NFSU2_TR(0x54aa12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B54aa15:{NFSU2_TR(0x54aa15);
{goto L54aaab;}
}
B54aa1a:L54aa1a:{c.instructions+=4;NFSU2_TR(0x54aa1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54aa1d:{NFSU2_TR(0x54aa1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54aa20:{NFSU2_TR(0x54aa20);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54aa22:{NFSU2_TR(0x54aa22);
if(r1(R+518)){{goto L54aa3d;}}
}
B54aa24:L54aa24:{c.instructions+=2;NFSU2_TR(0x54aa24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aa25:{NFSU2_TR(0x54aa25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54aa2aull));
TAIL_STATIC(0x52cef0u,52c);
}
B54aa2a:L54aa2a:{c.instructions+=3;NFSU2_TR(0x54aa2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54aa2d:{NFSU2_TR(0x54aa2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54aa2f:{NFSU2_TR(0x54aa2f);
if(r1(R+518)){{goto L54aa3d;}}
}
B54aa31:L54aa31:{c.instructions+=3;NFSU2_TR(0x54aa31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aa32:{NFSU2_TR(0x54aa32);
__builtin_memmove((R+4),(R+0),4);
}
B54aa34:{NFSU2_TR(0x54aa34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54aa39ull));
TAIL_STATIC(0x517f80u,517);
}
B54aa39:L54aa39:{c.instructions+=2;NFSU2_TR(0x54aa39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54aa3b:{NFSU2_TR(0x54aa3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54aa50;}}
}
B54aa3d:L54aa3d:{c.instructions+=3;NFSU2_TR(0x54aa3d);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54aa42:{NFSU2_TR(0x54aa42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54aa44:{NFSU2_TR(0x54aa44);
if(r1(R+518)){{goto L54aaab;}}
}
B54aa46:L54aa46:{c.instructions+=4;NFSU2_TR(0x54aa46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54aa49:{NFSU2_TR(0x54aa49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aa4a:{NFSU2_TR(0x54aa4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aa4b:{NFSU2_TR(0x54aa4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54aa50ull));
TAIL_STATIC(0x52c570u,52c);
}
B54aa50:L54aa50:{c.instructions+=3;NFSU2_TR(0x54aa50);
__builtin_memmove((R+24),(R+0),4);
}
B54aa52:{NFSU2_TR(0x54aa52);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54aa54:{NFSU2_TR(0x54aa54);
if(r1(R+518)){{goto L54aaab;}}
}
B54aa56:L54aa56:{c.instructions+=2;NFSU2_TR(0x54aa56);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54aa5a:{NFSU2_TR(0x54aa5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54aaab;}}
}
B54aa5c:L54aa5c:{c.instructions+=4;NFSU2_TR(0x54aa5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54aa5f:{NFSU2_TR(0x54aa5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54aa61:{NFSU2_TR(0x54aa61);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54aa65:{NFSU2_TR(0x54aa65);
if(r1(R+518)){{goto L54aa6b;}}
}
B54aa67:L54aa67:{c.instructions+=1;NFSU2_TR(0x54aa67);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B54aa6b:L54aa6b:{c.instructions+=4;NFSU2_TR(0x54aa6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54aa6e:{NFSU2_TR(0x54aa6e);
w4(R+4,u32(0xa4c02484ull));
}
B54aa73:{NFSU2_TR(0x54aa73);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54aa75:{NFSU2_TR(0x54aa75);
if(r1(R+518)){{goto L54aa82;}}
}
B54aa77:L54aa77:{c.instructions+=3;NFSU2_TR(0x54aa77);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B54aa7c:{NFSU2_TR(0x54aa7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54aa7f:{NFSU2_TR(0x54aa7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54aa82:L54aa82:{c.instructions+=3;NFSU2_TR(0x54aa82);
__builtin_memmove((R+4),gp(0x838478),4);
}
B54aa88:{NFSU2_TR(0x54aa88);
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
B54aa8a:{NFSU2_TR(0x54aa8a);
if(r1(R+518)){{goto L54aa91;}}
}
B54aa8c:L54aa8c:{c.instructions+=3;NFSU2_TR(0x54aa8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54aa8e:{NFSU2_TR(0x54aa8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aa8f:{NFSU2_TR(0x54aa8f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54aa91ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B54aa91:L54aa91:{c.instructions+=7;NFSU2_TR(0x54aa91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54aa94:{NFSU2_TR(0x54aa94);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B54aa97:{NFSU2_TR(0x54aa97);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffdull))));
}
B54aa9a:{NFSU2_TR(0x54aa9a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54aa9c:{NFSU2_TR(0x54aa9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54aa9f:{NFSU2_TR(0x54aa9f);
__builtin_memmove((R+0),(R+8),4);
}
B54aaa1:{NFSU2_TR(0x54aaa1);
if(r1(R+518)){{goto L54aaab;}}
}
B54aaa3:L54aaa3:{c.instructions+=2;NFSU2_TR(0x54aaa3);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B54aaa8:{NFSU2_TR(0x54aaa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54aaab:L54aaab:{c.instructions+=4;NFSU2_TR(0x54aaab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54aaae:{NFSU2_TR(0x54aaae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aaaf:{NFSU2_TR(0x54aaaf);
u8 U[4];
w4(U+0,u32(0x79c6e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aab4:{NFSU2_TR(0x54aab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54aab9ull));
TAIL_STATIC(0x50b990u,50b);
}
B54aab9:L54aab9:{c.instructions+=6;NFSU2_TR(0x54aab9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B54aabc:{NFSU2_TR(0x54aabc);
__builtin_memmove((R+28),(R+0),4);
}
B54aabe:{NFSU2_TR(0x54aabe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B54aac0:{NFSU2_TR(0x54aac0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54aac3:{NFSU2_TR(0x54aac3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54aac5:{NFSU2_TR(0x54aac5);
if(r1(R+518)){{goto L54ab10;}}
}
B54aac7:L54aac7:{c.instructions+=2;NFSU2_TR(0x54aac7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54aacc:{NFSU2_TR(0x54aacc);
if(r1(R+518)){{goto L54ab10;}}
}
B54aace:L54aace:{c.instructions+=4;NFSU2_TR(0x54aace);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aad0:{NFSU2_TR(0x54aad0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+8),(U+0),4);
}
B54aad3:{NFSU2_TR(0x54aad3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aad4:{NFSU2_TR(0x54aad4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54aad9ull));
TAIL_STATIC(0x577240u,577);
}
B54aad9:L54aad9:{c.instructions+=2;NFSU2_TR(0x54aad9);
w4(R+8,u32(0x29f4bf03ull));
}
B54aade:{NFSU2_TR(0x54aade);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54aae3ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54aae3:L54aae3:{c.instructions+=2;NFSU2_TR(0x54aae3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54aae5:{NFSU2_TR(0x54aae5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54aaf1;}}
}
B54aae7:L54aae7:{c.instructions+=2;NFSU2_TR(0x54aae7);
w4(R+8,u32(0xc01a6f63ull));
}
B54aaec:{NFSU2_TR(0x54aaec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54aaf1ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54aaf1:L54aaf1:{c.instructions+=9;NFSU2_TR(0x54aaf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54aaf4:{NFSU2_TR(0x54aaf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54aaf7:{NFSU2_TR(0x54aaf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aaf8:{NFSU2_TR(0x54aaf8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B54aafb:{NFSU2_TR(0x54aafb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aafc:{NFSU2_TR(0x54aafc);
u8 U[4];
w4(U+0,u32(0x794fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ab01:{NFSU2_TR(0x54ab01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ab02:{NFSU2_TR(0x54ab02);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ab03:{NFSU2_TR(0x54ab03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ab08ull));
TAIL_STATIC(0x537b80u,537);
}
B54ab08:L54ab08:{c.instructions+=2;NFSU2_TR(0x54ab08);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B54ab0b:{NFSU2_TR(0x54ab0b);
{goto L54ab9a;}
}
B54ab10:L54ab10:{c.instructions+=4;NFSU2_TR(0x54ab10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ab13:{NFSU2_TR(0x54ab13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54ab16:{NFSU2_TR(0x54ab16);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ab18:{NFSU2_TR(0x54ab18);
if(r1(R+518)){{goto L54ab33;}}
}
B54ab1a:L54ab1a:{c.instructions+=2;NFSU2_TR(0x54ab1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ab1b:{NFSU2_TR(0x54ab1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ab20ull));
TAIL_STATIC(0x52cef0u,52c);
}
B54ab20:L54ab20:{c.instructions+=3;NFSU2_TR(0x54ab20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54ab23:{NFSU2_TR(0x54ab23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ab25:{NFSU2_TR(0x54ab25);
if(r1(R+518)){{goto L54ab33;}}
}
B54ab27:L54ab27:{c.instructions+=3;NFSU2_TR(0x54ab27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ab28:{NFSU2_TR(0x54ab28);
__builtin_memmove((R+4),(R+0),4);
}
B54ab2a:{NFSU2_TR(0x54ab2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ab2full));
TAIL_STATIC(0x517f80u,517);
}
B54ab2f:L54ab2f:{c.instructions+=2;NFSU2_TR(0x54ab2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ab31:{NFSU2_TR(0x54ab31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ab46;}}
}
B54ab33:L54ab33:{c.instructions+=3;NFSU2_TR(0x54ab33);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54ab38:{NFSU2_TR(0x54ab38);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ab3a:{NFSU2_TR(0x54ab3a);
if(r1(R+518)){{goto L54ab9a;}}
}
B54ab3c:L54ab3c:{c.instructions+=4;NFSU2_TR(0x54ab3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54ab3f:{NFSU2_TR(0x54ab3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ab40:{NFSU2_TR(0x54ab40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ab41:{NFSU2_TR(0x54ab41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ab46ull));
TAIL_STATIC(0x52c570u,52c);
}
B54ab46:L54ab46:{c.instructions+=3;NFSU2_TR(0x54ab46);
__builtin_memmove((R+24),(R+0),4);
}
B54ab48:{NFSU2_TR(0x54ab48);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ab4a:{NFSU2_TR(0x54ab4a);
if(r1(R+518)){{goto L54ab9a;}}
}
B54ab4c:L54ab4c:{c.instructions+=2;NFSU2_TR(0x54ab4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54ab50:{NFSU2_TR(0x54ab50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ab9a;}}
}
B54ab52:L54ab52:{c.instructions+=4;NFSU2_TR(0x54ab52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ab55:{NFSU2_TR(0x54ab55);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B54ab57:{NFSU2_TR(0x54ab57);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54ab59:{NFSU2_TR(0x54ab59);
if(r1(R+518)){{goto L54ab5d;}}
}
B54ab5b:L54ab5b:{c.instructions+=1;NFSU2_TR(0x54ab5b);
w1(R+12,u8(0x1ull));
}
B54ab5d:L54ab5d:{c.instructions+=4;NFSU2_TR(0x54ab5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ab60:{NFSU2_TR(0x54ab60);
w4(R+4,u32(0xa4c02484ull));
}
B54ab65:{NFSU2_TR(0x54ab65);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54ab67:{NFSU2_TR(0x54ab67);
if(r1(R+518)){{goto L54ab74;}}
}
B54ab69:L54ab69:{c.instructions+=3;NFSU2_TR(0x54ab69);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B54ab6e:{NFSU2_TR(0x54ab6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ab71:{NFSU2_TR(0x54ab71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ab74:L54ab74:{c.instructions+=3;NFSU2_TR(0x54ab74);
__builtin_memmove((R+4),gp(0x838478),4);
}
B54ab7a:{NFSU2_TR(0x54ab7a);
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
B54ab7c:{NFSU2_TR(0x54ab7c);
if(r1(R+518)){{goto L54ab83;}}
}
B54ab7e:L54ab7e:{c.instructions+=3;NFSU2_TR(0x54ab7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54ab80:{NFSU2_TR(0x54ab80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ab81:{NFSU2_TR(0x54ab81);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ab83ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B54ab83:L54ab83:{c.instructions+=6;NFSU2_TR(0x54ab83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ab86:{NFSU2_TR(0x54ab86);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffdull))));
}
B54ab89:{NFSU2_TR(0x54ab89);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54ab8b:{NFSU2_TR(0x54ab8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ab8e:{NFSU2_TR(0x54ab8e);
__builtin_memmove((R+0),(R+8),4);
}
B54ab90:{NFSU2_TR(0x54ab90);
if(r1(R+518)){{goto L54ab9a;}}
}
B54ab92:L54ab92:{c.instructions+=2;NFSU2_TR(0x54ab92);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B54ab97:{NFSU2_TR(0x54ab97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ab9a:L54ab9a:{c.instructions+=4;NFSU2_TR(0x54ab9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ab9d:{NFSU2_TR(0x54ab9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ab9e:{NFSU2_TR(0x54ab9e);
u8 U[4];
w4(U+0,u32(0x79c6d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aba3:{NFSU2_TR(0x54aba3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54aba8ull));
TAIL_STATIC(0x50b990u,50b);
}
B54aba8:L54aba8:{c.instructions+=8;NFSU2_TR(0x54aba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B54abab:{NFSU2_TR(0x54abab);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54abad:{NFSU2_TR(0x54abad);
__builtin_memmove((R+28),(R+0),4);
}
B54abaf:{NFSU2_TR(0x54abaf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54abb5:{NFSU2_TR(0x54abb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54abb8:{NFSU2_TR(0x54abb8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54abba:{NFSU2_TR(0x54abba);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54abbd:{NFSU2_TR(0x54abbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ac2e;}}
}
B54abbf:L54abbf:{c.instructions+=3;NFSU2_TR(0x54abbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54abc2:{NFSU2_TR(0x54abc2);
__builtin_memmove((R+4),(R+24),4);
}
B54abc4:{NFSU2_TR(0x54abc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54abc9ull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B54abc9:L54abc9:{c.instructions+=3;NFSU2_TR(0x54abc9);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54abcb:{NFSU2_TR(0x54abcb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54abcd:{NFSU2_TR(0x54abcd);
if(r1(R+518)){{goto L54abd7;}}
}
B54abcf:L54abcf:{c.instructions+=2;NFSU2_TR(0x54abcf);
{u32 ea_=u32(u32(7931132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B54abd5:{NFSU2_TR(0x54abd5);
{goto L54abdd;}
}
B54abd7:L54abd7:{c.instructions+=1;NFSU2_TR(0x54abd7);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B54abdd:L54abdd:{c.instructions+=3;NFSU2_TR(0x54abdd);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54abe0:{NFSU2_TR(0x54abe0);
__builtin_memmove((R+4),(R+24),4);
}
B54abe2:{NFSU2_TR(0x54abe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54abe7ull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B54abe7:L54abe7:{c.instructions+=6;NFSU2_TR(0x54abe7);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B54abe9:{NFSU2_TR(0x54abe9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B54abeb:{NFSU2_TR(0x54abeb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4652e0b4ull))));
}
B54abf0:{NFSU2_TR(0x54abf0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8569ab44ull))));
}
B54abf5:{NFSU2_TR(0x54abf5);
__builtin_memmove((R+8),(R+0),4);
}
B54abf7:{NFSU2_TR(0x54abf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54abfcull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54abfc:L54abfc:{c.instructions+=2;NFSU2_TR(0x54abfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54abfe:{NFSU2_TR(0x54abfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ac0a;}}
}
B54ac00:L54ac00:{c.instructions+=2;NFSU2_TR(0x54ac00);
w4(R+8,u32(0xc01a6f63ull));
}
B54ac05:{NFSU2_TR(0x54ac05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ac0aull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54ac0a:L54ac0a:{c.instructions+=10;NFSU2_TR(0x54ac0a);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54ac0d:{NFSU2_TR(0x54ac0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54ac10:{NFSU2_TR(0x54ac10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ac13:{NFSU2_TR(0x54ac13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ac14:{NFSU2_TR(0x54ac14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B54ac17:{NFSU2_TR(0x54ac17);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B54ac1a:{NFSU2_TR(0x54ac1a);
u8 U[4];
w4(U+0,u32(0x7951f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ac1f:{NFSU2_TR(0x54ac1f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ac20:{NFSU2_TR(0x54ac20);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ac21:{NFSU2_TR(0x54ac21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ac26ull));
TAIL_STATIC(0x537b80u,537);
}
B54ac26:L54ac26:{c.instructions+=2;NFSU2_TR(0x54ac26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B54ac29:{NFSU2_TR(0x54ac29);
{goto L54acbb;}
}
B54ac2e:L54ac2e:{c.instructions+=4;NFSU2_TR(0x54ac2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ac31:{NFSU2_TR(0x54ac31);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54ac34:{NFSU2_TR(0x54ac34);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ac36:{NFSU2_TR(0x54ac36);
if(r1(R+518)){{goto L54ac51;}}
}
B54ac38:L54ac38:{c.instructions+=2;NFSU2_TR(0x54ac38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ac39:{NFSU2_TR(0x54ac39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ac3eull));
TAIL_STATIC(0x52cef0u,52c);
}
B54ac3e:L54ac3e:{c.instructions+=3;NFSU2_TR(0x54ac3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54ac41:{NFSU2_TR(0x54ac41);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ac43:{NFSU2_TR(0x54ac43);
if(r1(R+518)){{goto L54ac51;}}
}
B54ac45:L54ac45:{c.instructions+=3;NFSU2_TR(0x54ac45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ac46:{NFSU2_TR(0x54ac46);
__builtin_memmove((R+4),(R+0),4);
}
B54ac48:{NFSU2_TR(0x54ac48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ac4dull));
TAIL_STATIC(0x517f80u,517);
}
B54ac4d:L54ac4d:{c.instructions+=2;NFSU2_TR(0x54ac4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ac4f:{NFSU2_TR(0x54ac4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ac64;}}
}
B54ac51:L54ac51:{c.instructions+=3;NFSU2_TR(0x54ac51);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54ac56:{NFSU2_TR(0x54ac56);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ac58:{NFSU2_TR(0x54ac58);
if(r1(R+518)){{goto L54acb8;}}
}
B54ac5a:L54ac5a:{c.instructions+=4;NFSU2_TR(0x54ac5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54ac5d:{NFSU2_TR(0x54ac5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ac5e:{NFSU2_TR(0x54ac5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ac5f:{NFSU2_TR(0x54ac5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ac64ull));
TAIL_STATIC(0x52c570u,52c);
}
B54ac64:L54ac64:{c.instructions+=3;NFSU2_TR(0x54ac64);
__builtin_memmove((R+24),(R+0),4);
}
B54ac66:{NFSU2_TR(0x54ac66);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ac68:{NFSU2_TR(0x54ac68);
if(r1(R+518)){{goto L54acb8;}}
}
B54ac6a:L54ac6a:{c.instructions+=2;NFSU2_TR(0x54ac6a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54ac6e:{NFSU2_TR(0x54ac6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54acb8;}}
}
B54ac70:L54ac70:{c.instructions+=4;NFSU2_TR(0x54ac70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ac73:{NFSU2_TR(0x54ac73);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B54ac75:{NFSU2_TR(0x54ac75);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54ac77:{NFSU2_TR(0x54ac77);
if(r1(R+518)){{goto L54ac7b;}}
}
B54ac79:L54ac79:{c.instructions+=1;NFSU2_TR(0x54ac79);
w1(R+12,u8(0x1ull));
}
B54ac7b:L54ac7b:{c.instructions+=4;NFSU2_TR(0x54ac7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ac7e:{NFSU2_TR(0x54ac7e);
w4(R+4,u32(0xa4c02484ull));
}
B54ac83:{NFSU2_TR(0x54ac83);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54ac85:{NFSU2_TR(0x54ac85);
if(r1(R+518)){{goto L54ac92;}}
}
B54ac87:L54ac87:{c.instructions+=3;NFSU2_TR(0x54ac87);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B54ac8c:{NFSU2_TR(0x54ac8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ac8f:{NFSU2_TR(0x54ac8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ac92:L54ac92:{c.instructions+=3;NFSU2_TR(0x54ac92);
__builtin_memmove((R+4),gp(0x838478),4);
}
B54ac98:{NFSU2_TR(0x54ac98);
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
B54ac9a:{NFSU2_TR(0x54ac9a);
if(r1(R+518)){{goto L54aca1;}}
}
B54ac9c:L54ac9c:{c.instructions+=3;NFSU2_TR(0x54ac9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54ac9e:{NFSU2_TR(0x54ac9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ac9f:{NFSU2_TR(0x54ac9f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54aca1ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B54aca1:L54aca1:{c.instructions+=6;NFSU2_TR(0x54aca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54aca4:{NFSU2_TR(0x54aca4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffdull))));
}
B54aca7:{NFSU2_TR(0x54aca7);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54aca9:{NFSU2_TR(0x54aca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54acac:{NFSU2_TR(0x54acac);
__builtin_memmove((R+0),(R+8),4);
}
B54acae:{NFSU2_TR(0x54acae);
if(r1(R+518)){{goto L54acb8;}}
}
B54acb0:L54acb0:{c.instructions+=2;NFSU2_TR(0x54acb0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B54acb5:{NFSU2_TR(0x54acb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54acb8:L54acb8:{c.instructions+=1;NFSU2_TR(0x54acb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54acbb:L54acbb:{c.instructions+=4;NFSU2_TR(0x54acbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54acbe:{NFSU2_TR(0x54acbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54acbf:{NFSU2_TR(0x54acbf);
u8 U[4];
w4(U+0,u32(0x79c6c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54acc4:{NFSU2_TR(0x54acc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54acc9ull));
TAIL_STATIC(0x50b990u,50b);
}
B54acc9:L54acc9:{c.instructions+=8;NFSU2_TR(0x54acc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54accc:{NFSU2_TR(0x54accc);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54accf:{NFSU2_TR(0x54accf);
__builtin_memmove((R+12),(R+0),4);
}
B54acd1:{NFSU2_TR(0x54acd1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54acd7:{NFSU2_TR(0x54acd7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54acda:{NFSU2_TR(0x54acda);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54acdc:{NFSU2_TR(0x54acdc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54acdf:{NFSU2_TR(0x54acdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ad7e;}}
}
B54ace5:L54ace5:{c.instructions+=2;NFSU2_TR(0x54ace5);
__builtin_memmove((R+4),(R+24),4);
}
B54ace7:{NFSU2_TR(0x54ace7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54acecull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B54acec:L54acec:{c.instructions+=3;NFSU2_TR(0x54acec);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54acef:{NFSU2_TR(0x54acef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54acf1:{NFSU2_TR(0x54acf1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54acf9;}}
}
B54acf3:L54acf3:{c.instructions+=1;NFSU2_TR(0x54acf3);
{u32 ea_=u32(u32(7978748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B54acf9:L54acf9:{c.instructions+=4;NFSU2_TR(0x54acf9);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B54acff:{NFSU2_TR(0x54acff);
__builtin_memmove((R+4),(R+24),4);
}
B54ad01:{NFSU2_TR(0x54ad01);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54ad04:{NFSU2_TR(0x54ad04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ad09ull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B54ad09:L54ad09:{c.instructions+=6;NFSU2_TR(0x54ad09);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B54ad0b:{NFSU2_TR(0x54ad0b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B54ad0d:{NFSU2_TR(0x54ad0d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xaec8f620ull))));
}
B54ad12:{NFSU2_TR(0x54ad12);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xacb8dff3ull))));
}
B54ad17:{NFSU2_TR(0x54ad17);
__builtin_memmove((R+8),(R+0),4);
}
B54ad19:{NFSU2_TR(0x54ad19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ad1eull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54ad1e:L54ad1e:{c.instructions+=3;NFSU2_TR(0x54ad1e);
__builtin_memmove((R+24),(R+0),4);
}
B54ad20:{NFSU2_TR(0x54ad20);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ad22:{NFSU2_TR(0x54ad22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ad30;}}
}
B54ad24:L54ad24:{c.instructions+=2;NFSU2_TR(0x54ad24);
w4(R+8,u32(0xc01a6f63ull));
}
B54ad29:{NFSU2_TR(0x54ad29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ad2eull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54ad2e:L54ad2e:{c.instructions+=1;NFSU2_TR(0x54ad2e);
__builtin_memmove((R+24),(R+0),4);
}
B54ad30:L54ad30:{c.instructions+=2;NFSU2_TR(0x54ad30);
w4(R+8,u32(0x76f2bc60ull));
}
B54ad35:{NFSU2_TR(0x54ad35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ad3aull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54ad3a:L54ad3a:{c.instructions+=3;NFSU2_TR(0x54ad3a);
__builtin_memmove((R+28),(R+0),4);
}
B54ad3c:{NFSU2_TR(0x54ad3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ad3e:{NFSU2_TR(0x54ad3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ad4c;}}
}
B54ad40:L54ad40:{c.instructions+=2;NFSU2_TR(0x54ad40);
w4(R+8,u32(0xc01a6f63ull));
}
B54ad45:{NFSU2_TR(0x54ad45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ad4aull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54ad4a:L54ad4a:{c.instructions+=1;NFSU2_TR(0x54ad4a);
__builtin_memmove((R+28),(R+0),4);
}
B54ad4c:L54ad4c:{c.instructions+=4;NFSU2_TR(0x54ad4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54ad4f:{NFSU2_TR(0x54ad4f);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54ad52:{NFSU2_TR(0x54ad52);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54ad58:{NFSU2_TR(0x54ad58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ad5dull));
TAIL_STATIC(0x75bed4u,75b);
}
B54ad5d:L54ad5d:{c.instructions+=11;NFSU2_TR(0x54ad5d);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54ad60:{NFSU2_TR(0x54ad60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54ad63:{NFSU2_TR(0x54ad63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ad64:{NFSU2_TR(0x54ad64);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ad67:{NFSU2_TR(0x54ad67);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ad68:{NFSU2_TR(0x54ad68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B54ad6b:{NFSU2_TR(0x54ad6b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B54ad6e:{NFSU2_TR(0x54ad6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ad6f:{NFSU2_TR(0x54ad6f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ad70:{NFSU2_TR(0x54ad70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ad71:{NFSU2_TR(0x54ad71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ad76ull));
TAIL_STATIC(0x537b80u,537);
}
B54ad76:L54ad76:{c.instructions+=2;NFSU2_TR(0x54ad76);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B54ad79:{NFSU2_TR(0x54ad79);
{goto L54ae08;}
}
B54ad7e:L54ad7e:{c.instructions+=4;NFSU2_TR(0x54ad7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54ad81:{NFSU2_TR(0x54ad81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54ad84:{NFSU2_TR(0x54ad84);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ad86:{NFSU2_TR(0x54ad86);
if(r1(R+518)){{goto L54ada1;}}
}
B54ad88:L54ad88:{c.instructions+=2;NFSU2_TR(0x54ad88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ad89:{NFSU2_TR(0x54ad89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ad8eull));
TAIL_STATIC(0x52cef0u,52c);
}
B54ad8e:L54ad8e:{c.instructions+=3;NFSU2_TR(0x54ad8e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54ad91:{NFSU2_TR(0x54ad91);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ad93:{NFSU2_TR(0x54ad93);
if(r1(R+518)){{goto L54ada1;}}
}
B54ad95:L54ad95:{c.instructions+=3;NFSU2_TR(0x54ad95);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ad96:{NFSU2_TR(0x54ad96);
__builtin_memmove((R+4),(R+0),4);
}
B54ad98:{NFSU2_TR(0x54ad98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ad9dull));
TAIL_STATIC(0x517f80u,517);
}
B54ad9d:L54ad9d:{c.instructions+=2;NFSU2_TR(0x54ad9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ad9f:{NFSU2_TR(0x54ad9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54adb4;}}
}
B54ada1:L54ada1:{c.instructions+=3;NFSU2_TR(0x54ada1);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54ada6:{NFSU2_TR(0x54ada6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ada8:{NFSU2_TR(0x54ada8);
if(r1(R+518)){{goto L54ae08;}}
}
B54adaa:L54adaa:{c.instructions+=4;NFSU2_TR(0x54adaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54adad:{NFSU2_TR(0x54adad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54adae:{NFSU2_TR(0x54adae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54adaf:{NFSU2_TR(0x54adaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54adb4ull));
TAIL_STATIC(0x52c570u,52c);
}
B54adb4:L54adb4:{c.instructions+=3;NFSU2_TR(0x54adb4);
__builtin_memmove((R+24),(R+0),4);
}
B54adb6:{NFSU2_TR(0x54adb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54adb8:{NFSU2_TR(0x54adb8);
if(r1(R+518)){{goto L54ae08;}}
}
B54adba:L54adba:{c.instructions+=2;NFSU2_TR(0x54adba);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54adbe:{NFSU2_TR(0x54adbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ae08;}}
}
B54adc0:L54adc0:{c.instructions+=4;NFSU2_TR(0x54adc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54adc3:{NFSU2_TR(0x54adc3);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B54adc5:{NFSU2_TR(0x54adc5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54adc7:{NFSU2_TR(0x54adc7);
if(r1(R+518)){{goto L54adcb;}}
}
B54adc9:L54adc9:{c.instructions+=1;NFSU2_TR(0x54adc9);
w1(R+12,u8(0x1ull));
}
B54adcb:L54adcb:{c.instructions+=4;NFSU2_TR(0x54adcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54adce:{NFSU2_TR(0x54adce);
w4(R+4,u32(0xa4c02484ull));
}
B54add3:{NFSU2_TR(0x54add3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54add5:{NFSU2_TR(0x54add5);
if(r1(R+518)){{goto L54ade2;}}
}
B54add7:L54add7:{c.instructions+=3;NFSU2_TR(0x54add7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B54addc:{NFSU2_TR(0x54addc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54addf:{NFSU2_TR(0x54addf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ade2:L54ade2:{c.instructions+=3;NFSU2_TR(0x54ade2);
__builtin_memmove((R+4),gp(0x838478),4);
}
B54ade8:{NFSU2_TR(0x54ade8);
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
B54adea:{NFSU2_TR(0x54adea);
if(r1(R+518)){{goto L54adf1;}}
}
B54adec:L54adec:{c.instructions+=3;NFSU2_TR(0x54adec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54adee:{NFSU2_TR(0x54adee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54adef:{NFSU2_TR(0x54adef);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54adf1ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B54adf1:L54adf1:{c.instructions+=6;NFSU2_TR(0x54adf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54adf4:{NFSU2_TR(0x54adf4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffdull))));
}
B54adf7:{NFSU2_TR(0x54adf7);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54adf9:{NFSU2_TR(0x54adf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54adfc:{NFSU2_TR(0x54adfc);
__builtin_memmove((R+0),(R+8),4);
}
B54adfe:{NFSU2_TR(0x54adfe);
if(r1(R+518)){{goto L54ae08;}}
}
B54ae00:L54ae00:{c.instructions+=2;NFSU2_TR(0x54ae00);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B54ae05:{NFSU2_TR(0x54ae05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54ae08:L54ae08:{c.instructions+=4;NFSU2_TR(0x54ae08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54ae0b:{NFSU2_TR(0x54ae0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ae0c:{NFSU2_TR(0x54ae0c);
u8 U[4];
w4(U+0,u32(0x79c6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54ae11:{NFSU2_TR(0x54ae11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ae16ull));
TAIL_STATIC(0x50b990u,50b);
}
B54ae16:L54ae16:{c.instructions+=8;NFSU2_TR(0x54ae16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54ae19:{NFSU2_TR(0x54ae19);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54ae1c:{NFSU2_TR(0x54ae1c);
__builtin_memmove((R+12),(R+0),4);
}
B54ae1e:{NFSU2_TR(0x54ae1e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B54ae24:{NFSU2_TR(0x54ae24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B54ae27:{NFSU2_TR(0x54ae27);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B54ae29:{NFSU2_TR(0x54ae29);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54ae2c:{NFSU2_TR(0x54ae2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54aec8;}}
}
B54ae32:L54ae32:{c.instructions+=3;NFSU2_TR(0x54ae32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B54ae35:{NFSU2_TR(0x54ae35);
__builtin_memmove((R+4),(R+28),4);
}
B54ae37:{NFSU2_TR(0x54ae37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ae3cull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B54ae3c:L54ae3c:{c.instructions+=3;NFSU2_TR(0x54ae3c);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54ae3f:{NFSU2_TR(0x54ae3f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54ae41:{NFSU2_TR(0x54ae41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ae49;}}
}
B54ae43:L54ae43:{c.instructions+=1;NFSU2_TR(0x54ae43);
{u32 ea_=u32(u32(7978736u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B54ae49:L54ae49:{c.instructions+=3;NFSU2_TR(0x54ae49);
__builtin_memmove((R+4),(R+28),4);
}
B54ae4b:{NFSU2_TR(0x54ae4b);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B54ae4e:{NFSU2_TR(0x54ae4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ae53ull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B54ae53:L54ae53:{c.instructions+=6;NFSU2_TR(0x54ae53);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B54ae55:{NFSU2_TR(0x54ae55);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B54ae57:{NFSU2_TR(0x54ae57);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8fc570a8ull))));
}
B54ae5c:{NFSU2_TR(0x54ae5c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcbbc6512ull))));
}
B54ae61:{NFSU2_TR(0x54ae61);
__builtin_memmove((R+8),(R+0),4);
}
B54ae63:{NFSU2_TR(0x54ae63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ae68ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54ae68:L54ae68:{c.instructions+=3;NFSU2_TR(0x54ae68);
__builtin_memmove((R+24),(R+0),4);
}
B54ae6a:{NFSU2_TR(0x54ae6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ae6c:{NFSU2_TR(0x54ae6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ae7a;}}
}
B54ae6e:L54ae6e:{c.instructions+=2;NFSU2_TR(0x54ae6e);
w4(R+8,u32(0xc01a6f63ull));
}
B54ae73:{NFSU2_TR(0x54ae73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ae78ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54ae78:L54ae78:{c.instructions+=1;NFSU2_TR(0x54ae78);
__builtin_memmove((R+24),(R+0),4);
}
B54ae7a:L54ae7a:{c.instructions+=2;NFSU2_TR(0x54ae7a);
w4(R+8,u32(0x43aeef78ull));
}
B54ae7f:{NFSU2_TR(0x54ae7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ae84ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54ae84:L54ae84:{c.instructions+=3;NFSU2_TR(0x54ae84);
__builtin_memmove((R+28),(R+0),4);
}
B54ae86:{NFSU2_TR(0x54ae86);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54ae88:{NFSU2_TR(0x54ae88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54ae96;}}
}
B54ae8a:L54ae8a:{c.instructions+=2;NFSU2_TR(0x54ae8a);
w4(R+8,u32(0xc01a6f63ull));
}
B54ae8f:{NFSU2_TR(0x54ae8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54ae94ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B54ae94:L54ae94:{c.instructions+=1;NFSU2_TR(0x54ae94);
__builtin_memmove((R+28),(R+0),4);
}
B54ae96:L54ae96:{c.instructions+=4;NFSU2_TR(0x54ae96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54ae99:{NFSU2_TR(0x54ae99);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54ae9c:{NFSU2_TR(0x54ae9c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B54aea2:{NFSU2_TR(0x54aea2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54aea7ull));
TAIL_STATIC(0x75bed4u,75b);
}
B54aea7:L54aea7:{c.instructions+=11;NFSU2_TR(0x54aea7);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B54aeaa:{NFSU2_TR(0x54aeaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54aead:{NFSU2_TR(0x54aead);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aeae:{NFSU2_TR(0x54aeae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54aeb1:{NFSU2_TR(0x54aeb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aeb2:{NFSU2_TR(0x54aeb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B54aeb5:{NFSU2_TR(0x54aeb5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B54aeb8:{NFSU2_TR(0x54aeb8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aeb9:{NFSU2_TR(0x54aeb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aeba:{NFSU2_TR(0x54aeba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aebb:{NFSU2_TR(0x54aebb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54aec0ull));
TAIL_STATIC(0x537b80u,537);
}
B54aec0:L54aec0:{c.instructions+=2;NFSU2_TR(0x54aec0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B54aec3:{NFSU2_TR(0x54aec3);
{goto L54af52;}
}
B54aec8:L54aec8:{c.instructions+=4;NFSU2_TR(0x54aec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54aecb:{NFSU2_TR(0x54aecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B54aece:{NFSU2_TR(0x54aece);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54aed0:{NFSU2_TR(0x54aed0);
if(r1(R+518)){{goto L54aeeb;}}
}
B54aed2:L54aed2:{c.instructions+=2;NFSU2_TR(0x54aed2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aed3:{NFSU2_TR(0x54aed3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54aed8ull));
TAIL_STATIC(0x52cef0u,52c);
}
B54aed8:L54aed8:{c.instructions+=3;NFSU2_TR(0x54aed8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54aedb:{NFSU2_TR(0x54aedb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54aedd:{NFSU2_TR(0x54aedd);
if(r1(R+518)){{goto L54aeeb;}}
}
B54aedf:L54aedf:{c.instructions+=3;NFSU2_TR(0x54aedf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aee0:{NFSU2_TR(0x54aee0);
__builtin_memmove((R+4),(R+0),4);
}
B54aee2:{NFSU2_TR(0x54aee2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54aee7ull));
TAIL_STATIC(0x517f80u,517);
}
B54aee7:L54aee7:{c.instructions+=2;NFSU2_TR(0x54aee7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54aee9:{NFSU2_TR(0x54aee9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54aefe;}}
}
B54aeeb:L54aeeb:{c.instructions+=3;NFSU2_TR(0x54aeeb);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B54aef0:{NFSU2_TR(0x54aef0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54aef2:{NFSU2_TR(0x54aef2);
if(r1(R+518)){{goto L54af52;}}
}
B54aef4:L54aef4:{c.instructions+=4;NFSU2_TR(0x54aef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54aef7:{NFSU2_TR(0x54aef7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aef8:{NFSU2_TR(0x54aef8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54aef9:{NFSU2_TR(0x54aef9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54aefeull));
TAIL_STATIC(0x52c570u,52c);
}
B54aefe:L54aefe:{c.instructions+=3;NFSU2_TR(0x54aefe);
__builtin_memmove((R+24),(R+0),4);
}
B54af00:{NFSU2_TR(0x54af00);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B54af02:{NFSU2_TR(0x54af02);
if(r1(R+518)){{goto L54af52;}}
}
B54af04:L54af04:{c.instructions+=2;NFSU2_TR(0x54af04);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B54af08:{NFSU2_TR(0x54af08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L54af52;}}
}
B54af0a:L54af0a:{c.instructions+=4;NFSU2_TR(0x54af0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54af0d:{NFSU2_TR(0x54af0d);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B54af0f:{NFSU2_TR(0x54af0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54af11:{NFSU2_TR(0x54af11);
if(r1(R+518)){{goto L54af15;}}
}
B54af13:L54af13:{c.instructions+=1;NFSU2_TR(0x54af13);
w1(R+12,u8(0x1ull));
}
B54af15:L54af15:{c.instructions+=4;NFSU2_TR(0x54af15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54af18:{NFSU2_TR(0x54af18);
w4(R+4,u32(0xa4c02484ull));
}
B54af1d:{NFSU2_TR(0x54af1d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B54af1f:{NFSU2_TR(0x54af1f);
if(r1(R+518)){{goto L54af2c;}}
}
B54af21:L54af21:{c.instructions+=3;NFSU2_TR(0x54af21);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B54af26:{NFSU2_TR(0x54af26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54af29:{NFSU2_TR(0x54af29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54af2c:L54af2c:{c.instructions+=3;NFSU2_TR(0x54af2c);
__builtin_memmove((R+4),gp(0x838478),4);
}
B54af32:{NFSU2_TR(0x54af32);
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
B54af34:{NFSU2_TR(0x54af34);
if(r1(R+518)){{goto L54af3b;}}
}
B54af36:L54af36:{c.instructions+=3;NFSU2_TR(0x54af36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B54af38:{NFSU2_TR(0x54af38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54af39:{NFSU2_TR(0x54af39);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54af3bull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B54af3b:L54af3b:{c.instructions+=6;NFSU2_TR(0x54af3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B54af3e:{NFSU2_TR(0x54af3e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffdull))));
}
B54af41:{NFSU2_TR(0x54af41);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B54af43:{NFSU2_TR(0x54af43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54af46:{NFSU2_TR(0x54af46);
__builtin_memmove((R+0),(R+8),4);
}
B54af48:{NFSU2_TR(0x54af48);
if(r1(R+518)){{goto L54af52;}}
}
B54af4a:L54af4a:{c.instructions+=2;NFSU2_TR(0x54af4a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B54af4f:{NFSU2_TR(0x54af4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54af52:L54af52:{c.instructions+=5;NFSU2_TR(0x54af52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B54af55:{NFSU2_TR(0x54af55);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B54af56:{NFSU2_TR(0x54af56);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B54af59:{NFSU2_TR(0x54af59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B54af5c:{NFSU2_TR(0x54af5c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x54a9a0u);}goto L54a9a0;}}
}
B54af62:L54af62:{c.instructions+=2;NFSU2_TR(0x54af62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B54af65:{NFSU2_TR(0x54af65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54af6aull));
TAIL_STATIC(0x5103d0u,510);
}
B54af6a:L54af6a:{c.instructions+=6;NFSU2_TR(0x54af6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B54af6b:{NFSU2_TR(0x54af6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B54af6c:{NFSU2_TR(0x54af6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B54af6d:{NFSU2_TR(0x54af6d);
__builtin_memmove((R+16),(R+20),4);
}
B54af6f:{NFSU2_TR(0x54af6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B54af70:{NFSU2_TR(0x54af70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54af80:L54af80:{c.instructions+=4;NFSU2_TR(0x54af80);
__builtin_memmove((R+0),gp(0x838568),4);
}
B54af85:{NFSU2_TR(0x54af85);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B54af86:{NFSU2_TR(0x54af86);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B54af89:{NFSU2_TR(0x54af89);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L54afe6;}}
}
B54af8b:L54af8b:{c.instructions+=1;NFSU2_TR(0x54af8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x54afe8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B54af92:L54af92:{c.instructions+=1;NFSU2_TR(0x54af92);
TAIL_STATIC(0x499b10u,499);
}
B54af97:L54af97:{c.instructions+=3;NFSU2_TR(0x54af97);
u8 U[4];
w4(U+0,u32(0xdd60e402ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54af9c:{NFSU2_TR(0x54af9c);
w4(R+4,u32(0x85ad40ull));
}
B54afa1:{NFSU2_TR(0x54afa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54afa6ull));
TAIL_STATIC(0x500b80u,500);
}
B54afa6:L54afa6:{c.instructions+=6;NFSU2_TR(0x54afa6);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B54afa8:{NFSU2_TR(0x54afa8);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B54afaa:{NFSU2_TR(0x54afaa);
w4(R+0,u32(0-u32(r4(R+0))));
}
B54afac:{NFSU2_TR(0x54afac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xdd60e402ull))));
}
B54afb1:{NFSU2_TR(0x54afb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54afb2:{NFSU2_TR(0x54afb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54afb7ull));
TAIL_STATIC(0x4ffc90u,4ff);
}
B54afb7:L54afb7:{c.instructions+=4;NFSU2_TR(0x54afb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B54afba:{NFSU2_TR(0x54afba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54afbb:{NFSU2_TR(0x54afbb);
w4(R+4,u32(0x85ad40ull));
}
B54afc0:{NFSU2_TR(0x54afc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54afc5ull));
TAIL_STATIC(0x5410e0u,541);
}
B54afc5:L54afc5:{c.instructions+=1;NFSU2_TR(0x54afc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54afcaull));
TAIL_STATIC(0x5404a0u,540);
}
B54afca:L54afca:{c.instructions+=2;NFSU2_TR(0x54afca);
s1(0x86347c,u8(0x1ull));
}
B54afd1:{NFSU2_TR(0x54afd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B54afd2:L54afd2:{c.instructions+=1;NFSU2_TR(0x54afd2);
TAIL_STATIC(0x499560u,499);
}
B54afd7:L54afd7:{c.instructions+=4;NFSU2_TR(0x54afd7);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B54afdd:{NFSU2_TR(0x54afdd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54afdf:{NFSU2_TR(0x54afdf);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B54afe1:{NFSU2_TR(0x54afe1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x54afe6ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B54afe6:L54afe6:{c.instructions+=1;NFSU2_TR(0x54afe6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x54a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
