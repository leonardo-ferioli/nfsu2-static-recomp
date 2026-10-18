#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_708(u8* __restrict R,Cpu& c);
u32 body_709(u8* __restrict R,Cpu& c);
u32 body_70b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x70a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x70a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_70a(u8* __restrict R,Cpu& c);
u32 page_70a(Cpu& c){return body_70a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_70a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x70a000:goto L70a000;
case 0x70a002:c.instructions+=5;goto B70a002;
case 0x70a003:c.instructions+=4;goto B70a003;
case 0x70a006:c.instructions+=3;goto B70a006;
case 0x70a007:c.instructions+=2;goto B70a007;
case 0x70a00d:c.instructions+=1;goto B70a00d;
case 0x70a013:goto L70a013;
case 0x70a016:c.instructions+=2;goto B70a016;
case 0x70a019:c.instructions+=1;goto B70a019;
case 0x70a01f:goto L70a01f;
case 0x70a022:c.instructions+=3;goto B70a022;
case 0x70a025:c.instructions+=2;goto B70a025;
case 0x70a028:c.instructions+=1;goto B70a028;
case 0x70a02b:goto L70a02b;
case 0x70a02f:c.instructions+=22;goto B70a02f;
case 0x70a032:c.instructions+=21;goto B70a032;
case 0x70a036:c.instructions+=20;goto B70a036;
case 0x70a039:c.instructions+=19;goto B70a039;
case 0x70a03d:c.instructions+=18;goto B70a03d;
case 0x70a040:c.instructions+=17;goto B70a040;
case 0x70a044:c.instructions+=16;goto B70a044;
case 0x70a048:c.instructions+=15;goto B70a048;
case 0x70a04c:c.instructions+=14;goto B70a04c;
case 0x70a04f:c.instructions+=13;goto B70a04f;
case 0x70a053:c.instructions+=12;goto B70a053;
case 0x70a056:c.instructions+=11;goto B70a056;
case 0x70a05a:c.instructions+=10;goto B70a05a;
case 0x70a05d:c.instructions+=9;goto B70a05d;
case 0x70a061:c.instructions+=8;goto B70a061;
case 0x70a064:c.instructions+=7;goto B70a064;
case 0x70a068:c.instructions+=6;goto B70a068;
case 0x70a06b:c.instructions+=5;goto B70a06b;
case 0x70a06f:c.instructions+=4;goto B70a06f;
case 0x70a072:c.instructions+=3;goto B70a072;
case 0x70a075:c.instructions+=2;goto B70a075;
case 0x70a078:c.instructions+=1;goto B70a078;
case 0x70a07f:goto L70a07f;
case 0x70a082:c.instructions+=9;goto B70a082;
case 0x70a085:c.instructions+=8;goto B70a085;
case 0x70a089:c.instructions+=7;goto B70a089;
case 0x70a08c:c.instructions+=6;goto B70a08c;
case 0x70a092:c.instructions+=5;goto B70a092;
case 0x70a095:c.instructions+=4;goto B70a095;
case 0x70a098:c.instructions+=3;goto B70a098;
case 0x70a09a:c.instructions+=2;goto B70a09a;
case 0x70a09c:c.instructions+=1;goto B70a09c;
case 0x70a09e:goto L70a09e;
case 0x70a0a0:c.instructions+=1;goto B70a0a0;
case 0x70a0a2:goto L70a0a2;
case 0x70a0a5:goto L70a0a5;
case 0x70a0a8:c.instructions+=3;goto B70a0a8;
case 0x70a0ab:c.instructions+=2;goto B70a0ab;
case 0x70a0af:c.instructions+=1;goto B70a0af;
case 0x70a0b1:goto L70a0b1;
case 0x70a0b8:goto L70a0b8;
case 0x70a0bb:c.instructions+=7;goto B70a0bb;
case 0x70a0be:c.instructions+=6;goto B70a0be;
case 0x70a0c2:c.instructions+=5;goto B70a0c2;
case 0x70a0c6:c.instructions+=4;goto B70a0c6;
case 0x70a0c9:c.instructions+=3;goto B70a0c9;
case 0x70a0cb:c.instructions+=2;goto B70a0cb;
case 0x70a0cd:c.instructions+=1;goto B70a0cd;
case 0x70a0cf:goto L70a0cf;
case 0x70a0d1:c.instructions+=1;goto B70a0d1;
case 0x70a0d3:goto L70a0d3;
case 0x70a0d6:goto L70a0d6;
case 0x70a0d9:c.instructions+=3;goto B70a0d9;
case 0x70a0dc:c.instructions+=2;goto B70a0dc;
case 0x70a0e0:c.instructions+=1;goto B70a0e0;
case 0x70a0e2:goto L70a0e2;
case 0x70a0e5:c.instructions+=4;goto B70a0e5;
case 0x70a0ea:c.instructions+=3;goto B70a0ea;
case 0x70a0ec:c.instructions+=2;goto B70a0ec;
case 0x70a0ef:c.instructions+=1;goto B70a0ef;
case 0x70a0f1:goto L70a0f1;
case 0x70a0f4:goto L70a0f4;
case 0x70a0f7:c.instructions+=10;goto B70a0f7;
case 0x70a0fa:c.instructions+=9;goto B70a0fa;
case 0x70a0fd:c.instructions+=8;goto B70a0fd;
case 0x70a101:c.instructions+=7;goto B70a101;
case 0x70a104:c.instructions+=6;goto B70a104;
case 0x70a106:c.instructions+=5;goto B70a106;
case 0x70a109:c.instructions+=4;goto B70a109;
case 0x70a10e:c.instructions+=3;goto B70a10e;
case 0x70a110:c.instructions+=2;goto B70a110;
case 0x70a113:c.instructions+=1;goto B70a113;
case 0x70a115:goto L70a115;
case 0x70a118:goto L70a118;
case 0x70a11b:c.instructions+=8;goto B70a11b;
case 0x70a11e:c.instructions+=7;goto B70a11e;
case 0x70a121:c.instructions+=6;goto B70a121;
case 0x70a123:c.instructions+=5;goto B70a123;
case 0x70a126:c.instructions+=4;goto B70a126;
case 0x70a128:c.instructions+=3;goto B70a128;
case 0x70a12e:c.instructions+=2;goto B70a12e;
case 0x70a131:c.instructions+=1;goto B70a131;
case 0x70a137:goto L70a137;
case 0x70a13a:c.instructions+=1;goto B70a13a;
case 0x70a140:goto L70a140;
case 0x70a143:c.instructions+=4;goto B70a143;
case 0x70a145:c.instructions+=3;goto B70a145;
case 0x70a147:c.instructions+=2;goto B70a147;
case 0x70a14a:c.instructions+=1;goto B70a14a;
case 0x70a150:goto L70a150;
case 0x70a152:c.instructions+=3;goto B70a152;
case 0x70a154:c.instructions+=2;goto B70a154;
case 0x70a157:c.instructions+=1;goto B70a157;
case 0x70a15d:goto L70a15d;
case 0x70a160:c.instructions+=56;goto B70a160;
case 0x70a163:c.instructions+=55;goto B70a163;
case 0x70a165:c.instructions+=54;goto B70a165;
case 0x70a168:c.instructions+=53;goto B70a168;
case 0x70a16b:c.instructions+=52;goto B70a16b;
case 0x70a16f:c.instructions+=51;goto B70a16f;
case 0x70a172:c.instructions+=50;goto B70a172;
case 0x70a175:c.instructions+=49;goto B70a175;
case 0x70a177:c.instructions+=48;goto B70a177;
case 0x70a17a:c.instructions+=47;goto B70a17a;
case 0x70a17c:c.instructions+=46;goto B70a17c;
case 0x70a17e:c.instructions+=45;goto B70a17e;
case 0x70a181:c.instructions+=44;goto B70a181;
case 0x70a184:c.instructions+=43;goto B70a184;
case 0x70a187:c.instructions+=42;goto B70a187;
case 0x70a18a:c.instructions+=41;goto B70a18a;
case 0x70a18d:c.instructions+=40;goto B70a18d;
case 0x70a18f:c.instructions+=39;goto B70a18f;
case 0x70a192:c.instructions+=38;goto B70a192;
case 0x70a195:c.instructions+=37;goto B70a195;
case 0x70a198:c.instructions+=36;goto B70a198;
case 0x70a19b:c.instructions+=35;goto B70a19b;
case 0x70a19e:c.instructions+=34;goto B70a19e;
case 0x70a1a1:c.instructions+=33;goto B70a1a1;
case 0x70a1a3:c.instructions+=32;goto B70a1a3;
case 0x70a1a6:c.instructions+=31;goto B70a1a6;
case 0x70a1a9:c.instructions+=30;goto B70a1a9;
case 0x70a1ac:c.instructions+=29;goto B70a1ac;
case 0x70a1af:c.instructions+=28;goto B70a1af;
case 0x70a1b2:c.instructions+=27;goto B70a1b2;
case 0x70a1b5:c.instructions+=26;goto B70a1b5;
case 0x70a1b7:c.instructions+=25;goto B70a1b7;
case 0x70a1ba:c.instructions+=24;goto B70a1ba;
case 0x70a1bd:c.instructions+=23;goto B70a1bd;
case 0x70a1c0:c.instructions+=22;goto B70a1c0;
case 0x70a1c3:c.instructions+=21;goto B70a1c3;
case 0x70a1c5:c.instructions+=20;goto B70a1c5;
case 0x70a1c8:c.instructions+=19;goto B70a1c8;
case 0x70a1cb:c.instructions+=18;goto B70a1cb;
case 0x70a1cd:c.instructions+=17;goto B70a1cd;
case 0x70a1d0:c.instructions+=16;goto B70a1d0;
case 0x70a1d3:c.instructions+=15;goto B70a1d3;
case 0x70a1d6:c.instructions+=14;goto B70a1d6;
case 0x70a1d9:c.instructions+=13;goto B70a1d9;
case 0x70a1dc:c.instructions+=12;goto B70a1dc;
case 0x70a1de:c.instructions+=11;goto B70a1de;
case 0x70a1e1:c.instructions+=10;goto B70a1e1;
case 0x70a1e4:c.instructions+=9;goto B70a1e4;
case 0x70a1e7:c.instructions+=8;goto B70a1e7;
case 0x70a1ea:c.instructions+=7;goto B70a1ea;
case 0x70a1ed:c.instructions+=6;goto B70a1ed;
case 0x70a1f0:c.instructions+=5;goto B70a1f0;
case 0x70a1f3:c.instructions+=4;goto B70a1f3;
case 0x70a1f6:c.instructions+=3;goto B70a1f6;
case 0x70a1f9:c.instructions+=2;goto B70a1f9;
case 0x70a1fc:c.instructions+=1;goto B70a1fc;
case 0x70a1fe:goto L70a1fe;
case 0x70a201:goto L70a201;
case 0x70a204:c.instructions+=15;goto B70a204;
case 0x70a206:c.instructions+=14;goto B70a206;
case 0x70a208:c.instructions+=13;goto B70a208;
case 0x70a20b:c.instructions+=12;goto B70a20b;
case 0x70a20e:c.instructions+=11;goto B70a20e;
case 0x70a212:c.instructions+=10;goto B70a212;
case 0x70a215:c.instructions+=9;goto B70a215;
case 0x70a218:c.instructions+=8;goto B70a218;
case 0x70a21b:c.instructions+=7;goto B70a21b;
case 0x70a21e:c.instructions+=6;goto B70a21e;
case 0x70a225:c.instructions+=5;goto B70a225;
case 0x70a227:c.instructions+=4;goto B70a227;
case 0x70a22a:c.instructions+=3;goto B70a22a;
case 0x70a230:c.instructions+=2;goto B70a230;
case 0x70a233:c.instructions+=1;goto B70a233;
case 0x70a235:goto L70a235;
case 0x70a238:c.instructions+=5;goto B70a238;
case 0x70a23a:c.instructions+=4;goto B70a23a;
case 0x70a23c:c.instructions+=3;goto B70a23c;
case 0x70a23f:c.instructions+=2;goto B70a23f;
case 0x70a240:c.instructions+=1;goto B70a240;
case 0x70a246:goto L70a246;
case 0x70a24a:c.instructions+=12;goto B70a24a;
case 0x70a24d:c.instructions+=11;goto B70a24d;
case 0x70a250:c.instructions+=10;goto B70a250;
case 0x70a253:c.instructions+=9;goto B70a253;
case 0x70a256:c.instructions+=8;goto B70a256;
case 0x70a259:c.instructions+=7;goto B70a259;
case 0x70a25c:c.instructions+=6;goto B70a25c;
case 0x70a25f:c.instructions+=5;goto B70a25f;
case 0x70a262:c.instructions+=4;goto B70a262;
case 0x70a265:c.instructions+=3;goto B70a265;
case 0x70a269:c.instructions+=2;goto B70a269;
case 0x70a26f:c.instructions+=1;goto B70a26f;
case 0x70a275:goto L70a275;
case 0x70a276:c.instructions+=4;goto B70a276;
case 0x70a277:c.instructions+=3;goto B70a277;
case 0x70a278:c.instructions+=2;goto B70a278;
case 0x70a279:c.instructions+=1;goto B70a279;
case 0x70a27a:goto L70a27a;
case 0x70a27b:c.instructions+=11;goto B70a27b;
case 0x70a27d:c.instructions+=10;goto B70a27d;
case 0x70a280:c.instructions+=9;goto B70a280;
case 0x70a281:c.instructions+=8;goto B70a281;
case 0x70a282:c.instructions+=7;goto B70a282;
case 0x70a285:c.instructions+=6;goto B70a285;
case 0x70a287:c.instructions+=5;goto B70a287;
case 0x70a289:c.instructions+=4;goto B70a289;
case 0x70a28c:c.instructions+=3;goto B70a28c;
case 0x70a28d:c.instructions+=2;goto B70a28d;
case 0x70a290:c.instructions+=1;goto B70a290;
case 0x70a292:goto L70a292;
case 0x70a297:c.instructions+=2;goto B70a297;
case 0x70a29e:c.instructions+=1;goto B70a29e;
case 0x70a2a0:goto L70a2a0;
case 0x70a2a5:c.instructions+=1;goto B70a2a5;
case 0x70a2ac:goto L70a2ac;
case 0x70a2b2:c.instructions+=5;goto B70a2b2;
case 0x70a2b5:c.instructions+=4;goto B70a2b5;
case 0x70a2b8:c.instructions+=3;goto B70a2b8;
case 0x70a2bb:c.instructions+=2;goto B70a2bb;
case 0x70a2bd:c.instructions+=1;goto B70a2bd;
case 0x70a2bf:goto L70a2bf;
case 0x70a2c5:c.instructions+=4;goto B70a2c5;
case 0x70a2c7:c.instructions+=3;goto B70a2c7;
case 0x70a2c8:c.instructions+=2;goto B70a2c8;
case 0x70a2ce:c.instructions+=1;goto B70a2ce;
case 0x70a2d0:goto L70a2d0;
case 0x70a2d6:c.instructions+=5;goto B70a2d6;
case 0x70a2d8:c.instructions+=4;goto B70a2d8;
case 0x70a2de:c.instructions+=3;goto B70a2de;
case 0x70a2e1:c.instructions+=2;goto B70a2e1;
case 0x70a2e7:c.instructions+=1;goto B70a2e7;
case 0x70a2e9:goto L70a2e9;
case 0x70a2ef:c.instructions+=4;goto B70a2ef;
case 0x70a2f2:c.instructions+=3;goto B70a2f2;
case 0x70a2f5:c.instructions+=2;goto B70a2f5;
case 0x70a2f7:c.instructions+=1;goto B70a2f7;
case 0x70a2f9:goto L70a2f9;
case 0x70a2ff:c.instructions+=3;goto B70a2ff;
case 0x70a305:c.instructions+=2;goto B70a305;
case 0x70a308:c.instructions+=1;goto B70a308;
case 0x70a30b:goto L70a30b;
case 0x70a30d:c.instructions+=7;goto B70a30d;
case 0x70a310:c.instructions+=6;goto B70a310;
case 0x70a313:c.instructions+=5;goto B70a313;
case 0x70a315:c.instructions+=4;goto B70a315;
case 0x70a318:c.instructions+=3;goto B70a318;
case 0x70a31a:c.instructions+=2;goto B70a31a;
case 0x70a31d:c.instructions+=1;goto B70a31d;
case 0x70a31f:goto L70a31f;
case 0x70a323:c.instructions+=1;goto B70a323;
case 0x70a325:goto L70a325;
case 0x70a327:goto L70a327;
case 0x70a32b:c.instructions+=1;goto B70a32b;
case 0x70a32d:goto L70a32d;
case 0x70a333:c.instructions+=1;goto B70a333;
case 0x70a335:goto L70a335;
case 0x70a33b:c.instructions+=1;goto B70a33b;
case 0x70a33d:goto L70a33d;
case 0x70a343:goto L70a343;
case 0x70a346:goto L70a346;
case 0x70a349:c.instructions+=2;goto B70a349;
case 0x70a34c:c.instructions+=1;goto B70a34c;
case 0x70a353:goto L70a353;
case 0x70a355:c.instructions+=1;goto B70a355;
case 0x70a357:goto L70a357;
case 0x70a35a:c.instructions+=6;goto B70a35a;
case 0x70a35d:c.instructions+=5;goto B70a35d;
case 0x70a360:c.instructions+=4;goto B70a360;
case 0x70a363:c.instructions+=3;goto B70a363;
case 0x70a366:c.instructions+=2;goto B70a366;
case 0x70a369:c.instructions+=1;goto B70a369;
case 0x70a36b:goto L70a36b;
case 0x70a36e:goto L70a36e;
case 0x70a371:c.instructions+=5;goto B70a371;
case 0x70a374:c.instructions+=4;goto B70a374;
case 0x70a377:c.instructions+=3;goto B70a377;
case 0x70a37a:c.instructions+=2;goto B70a37a;
case 0x70a37c:c.instructions+=1;goto B70a37c;
case 0x70a37e:goto L70a37e;
case 0x70a381:c.instructions+=2;goto B70a381;
case 0x70a384:c.instructions+=1;goto B70a384;
case 0x70a386:goto L70a386;
case 0x70a389:c.instructions+=1;goto B70a389;
case 0x70a38b:goto L70a38b;
case 0x70a38c:c.instructions+=1;goto B70a38c;
case 0x70a38f:goto L70a38f;
case 0x70a392:c.instructions+=11;goto B70a392;
case 0x70a394:c.instructions+=10;goto B70a394;
case 0x70a397:c.instructions+=9;goto B70a397;
case 0x70a39a:c.instructions+=8;goto B70a39a;
case 0x70a39d:c.instructions+=7;goto B70a39d;
case 0x70a3a0:c.instructions+=6;goto B70a3a0;
case 0x70a3a1:c.instructions+=5;goto B70a3a1;
case 0x70a3a2:c.instructions+=4;goto B70a3a2;
case 0x70a3a5:c.instructions+=3;goto B70a3a5;
case 0x70a3a8:c.instructions+=2;goto B70a3a8;
case 0x70a3a9:c.instructions+=1;goto B70a3a9;
case 0x70a3ac:goto L70a3ac;
case 0x70a3af:c.instructions+=3;goto B70a3af;
case 0x70a3b2:c.instructions+=2;goto B70a3b2;
case 0x70a3b5:c.instructions+=1;goto B70a3b5;
case 0x70a3b7:goto L70a3b7;
case 0x70a3ba:c.instructions+=3;goto B70a3ba;
case 0x70a3bd:c.instructions+=2;goto B70a3bd;
case 0x70a3c0:c.instructions+=1;goto B70a3c0;
case 0x70a3c7:goto L70a3c7;
case 0x70a3c9:c.instructions+=1;goto B70a3c9;
case 0x70a3cb:goto L70a3cb;
case 0x70a3ce:c.instructions+=3;goto B70a3ce;
case 0x70a3d1:c.instructions+=2;goto B70a3d1;
case 0x70a3d4:c.instructions+=1;goto B70a3d4;
case 0x70a3d7:goto L70a3d7;
case 0x70a3da:c.instructions+=4;goto B70a3da;
case 0x70a3dc:c.instructions+=3;goto B70a3dc;
case 0x70a3dd:c.instructions+=2;goto B70a3dd;
case 0x70a3e0:c.instructions+=1;goto B70a3e0;
case 0x70a3e2:goto L70a3e2;
case 0x70a3e5:c.instructions+=2;goto B70a3e5;
case 0x70a3e8:c.instructions+=1;goto B70a3e8;
case 0x70a3ea:goto L70a3ea;
case 0x70a3ed:c.instructions+=7;goto B70a3ed;
case 0x70a3f0:c.instructions+=6;goto B70a3f0;
case 0x70a3f1:c.instructions+=5;goto B70a3f1;
case 0x70a3f2:c.instructions+=4;goto B70a3f2;
case 0x70a3f5:c.instructions+=3;goto B70a3f5;
case 0x70a3f8:c.instructions+=2;goto B70a3f8;
case 0x70a3f9:c.instructions+=1;goto B70a3f9;
case 0x70a3fc:goto L70a3fc;
case 0x70a3ff:c.instructions+=5;goto B70a3ff;
case 0x70a400:c.instructions+=4;goto B70a400;
case 0x70a401:c.instructions+=3;goto B70a401;
case 0x70a402:c.instructions+=2;goto B70a402;
case 0x70a403:c.instructions+=1;goto B70a403;
case 0x70a404:goto L70a404;
case 0x70a405:c.instructions+=14;goto B70a405;
case 0x70a407:c.instructions+=13;goto B70a407;
case 0x70a40a:c.instructions+=12;goto B70a40a;
case 0x70a40f:c.instructions+=11;goto B70a40f;
case 0x70a412:c.instructions+=10;goto B70a412;
case 0x70a413:c.instructions+=9;goto B70a413;
case 0x70a416:c.instructions+=8;goto B70a416;
case 0x70a419:c.instructions+=7;goto B70a419;
case 0x70a41c:c.instructions+=6;goto B70a41c;
case 0x70a41d:c.instructions+=5;goto B70a41d;
case 0x70a41f:c.instructions+=4;goto B70a41f;
case 0x70a420:c.instructions+=3;goto B70a420;
case 0x70a423:c.instructions+=2;goto B70a423;
case 0x70a42a:c.instructions+=1;goto B70a42a;
case 0x70a42c:goto L70a42c;
case 0x70a42f:goto L70a42f;
case 0x70a432:c.instructions+=4;goto B70a432;
case 0x70a434:c.instructions+=3;goto B70a434;
case 0x70a436:c.instructions+=2;goto B70a436;
case 0x70a439:c.instructions+=1;goto B70a439;
case 0x70a43b:goto L70a43b;
case 0x70a43d:goto L70a43d;
case 0x70a43f:c.instructions+=3;goto B70a43f;
case 0x70a442:c.instructions+=2;goto B70a442;
case 0x70a444:c.instructions+=1;goto B70a444;
case 0x70a447:goto L70a447;
case 0x70a449:goto L70a449;
case 0x70a44b:goto L70a44b;
case 0x70a44e:c.instructions+=2;goto B70a44e;
case 0x70a451:c.instructions+=1;goto B70a451;
case 0x70a453:goto L70a453;
case 0x70a455:c.instructions+=2;goto B70a455;
case 0x70a458:c.instructions+=1;goto B70a458;
case 0x70a45b:goto L70a45b;
case 0x70a45e:c.instructions+=9;goto B70a45e;
case 0x70a461:c.instructions+=8;goto B70a461;
case 0x70a464:c.instructions+=7;goto B70a464;
case 0x70a467:c.instructions+=6;goto B70a467;
case 0x70a46a:c.instructions+=5;goto B70a46a;
case 0x70a46b:c.instructions+=4;goto B70a46b;
case 0x70a46e:c.instructions+=3;goto B70a46e;
case 0x70a471:c.instructions+=2;goto B70a471;
case 0x70a474:c.instructions+=1;goto B70a474;
case 0x70a477:goto L70a477;
case 0x70a47a:c.instructions+=4;goto B70a47a;
case 0x70a47d:c.instructions+=3;goto B70a47d;
case 0x70a480:c.instructions+=2;goto B70a480;
case 0x70a481:c.instructions+=1;goto B70a481;
case 0x70a483:goto L70a483;
case 0x70a486:c.instructions+=6;goto B70a486;
case 0x70a489:c.instructions+=5;goto B70a489;
case 0x70a48b:c.instructions+=4;goto B70a48b;
case 0x70a48e:c.instructions+=3;goto B70a48e;
case 0x70a491:c.instructions+=2;goto B70a491;
case 0x70a498:c.instructions+=1;goto B70a498;
case 0x70a49a:goto L70a49a;
case 0x70a49d:goto L70a49d;
case 0x70a4a0:c.instructions+=4;goto B70a4a0;
case 0x70a4a2:c.instructions+=3;goto B70a4a2;
case 0x70a4a4:c.instructions+=2;goto B70a4a4;
case 0x70a4a7:c.instructions+=1;goto B70a4a7;
case 0x70a4a9:goto L70a4a9;
case 0x70a4ab:goto L70a4ab;
case 0x70a4ad:c.instructions+=3;goto B70a4ad;
case 0x70a4b0:c.instructions+=2;goto B70a4b0;
case 0x70a4b2:c.instructions+=1;goto B70a4b2;
case 0x70a4b5:goto L70a4b5;
case 0x70a4b7:goto L70a4b7;
case 0x70a4b9:goto L70a4b9;
case 0x70a4bc:c.instructions+=7;goto B70a4bc;
case 0x70a4bf:c.instructions+=6;goto B70a4bf;
case 0x70a4c2:c.instructions+=5;goto B70a4c2;
case 0x70a4c3:c.instructions+=4;goto B70a4c3;
case 0x70a4c6:c.instructions+=3;goto B70a4c6;
case 0x70a4c9:c.instructions+=2;goto B70a4c9;
case 0x70a4cc:c.instructions+=1;goto B70a4cc;
case 0x70a4d1:goto L70a4d1;
case 0x70a4d4:c.instructions+=5;goto B70a4d4;
case 0x70a4d5:c.instructions+=4;goto B70a4d5;
case 0x70a4d6:c.instructions+=3;goto B70a4d6;
case 0x70a4d7:c.instructions+=2;goto B70a4d7;
case 0x70a4d8:c.instructions+=1;goto B70a4d8;
case 0x70a4d9:goto L70a4d9;
case 0x70a4da:c.instructions+=10;goto B70a4da;
case 0x70a4dc:c.instructions+=9;goto B70a4dc;
case 0x70a4dd:c.instructions+=8;goto B70a4dd;
case 0x70a4e0:c.instructions+=7;goto B70a4e0;
case 0x70a4e6:c.instructions+=6;goto B70a4e6;
case 0x70a4e9:c.instructions+=5;goto B70a4e9;
case 0x70a4eb:c.instructions+=4;goto B70a4eb;
case 0x70a4ee:c.instructions+=3;goto B70a4ee;
case 0x70a4ef:c.instructions+=2;goto B70a4ef;
case 0x70a4f2:c.instructions+=1;goto B70a4f2;
case 0x70a4f4:goto L70a4f4;
case 0x70a4f6:goto L70a4f6;
case 0x70a4f8:c.instructions+=1;goto B70a4f8;
case 0x70a4fb:goto L70a4fb;
case 0x70a4fd:goto L70a4fd;
case 0x70a500:c.instructions+=1;goto B70a500;
case 0x70a502:goto L70a502;
case 0x70a503:c.instructions+=1;goto B70a503;
case 0x70a508:goto L70a508;
case 0x70a509:goto L70a509;
case 0x70a50c:c.instructions+=1;goto B70a50c;
case 0x70a512:goto L70a512;
case 0x70a515:c.instructions+=14;goto B70a515;
case 0x70a518:c.instructions+=13;goto B70a518;
case 0x70a519:c.instructions+=12;goto B70a519;
case 0x70a51f:c.instructions+=11;goto B70a51f;
case 0x70a522:c.instructions+=10;goto B70a522;
case 0x70a525:c.instructions+=9;goto B70a525;
case 0x70a526:c.instructions+=8;goto B70a526;
case 0x70a528:c.instructions+=7;goto B70a528;
case 0x70a529:c.instructions+=6;goto B70a529;
case 0x70a52f:c.instructions+=5;goto B70a52f;
case 0x70a535:c.instructions+=4;goto B70a535;
case 0x70a537:c.instructions+=3;goto B70a537;
case 0x70a53d:c.instructions+=2;goto B70a53d;
case 0x70a53e:c.instructions+=1;goto B70a53e;
case 0x70a543:goto L70a543;
case 0x70a549:c.instructions+=15;goto B70a549;
case 0x70a54c:c.instructions+=14;goto B70a54c;
case 0x70a54f:c.instructions+=13;goto B70a54f;
case 0x70a550:c.instructions+=12;goto B70a550;
case 0x70a552:c.instructions+=11;goto B70a552;
case 0x70a553:c.instructions+=10;goto B70a553;
case 0x70a559:c.instructions+=9;goto B70a559;
case 0x70a55b:c.instructions+=8;goto B70a55b;
case 0x70a55c:c.instructions+=7;goto B70a55c;
case 0x70a562:c.instructions+=6;goto B70a562;
case 0x70a564:c.instructions+=5;goto B70a564;
case 0x70a565:c.instructions+=4;goto B70a565;
case 0x70a567:c.instructions+=3;goto B70a567;
case 0x70a56d:c.instructions+=2;goto B70a56d;
case 0x70a56e:c.instructions+=1;goto B70a56e;
case 0x70a573:goto L70a573;
case 0x70a579:c.instructions+=16;goto B70a579;
case 0x70a57c:c.instructions+=15;goto B70a57c;
case 0x70a582:c.instructions+=14;goto B70a582;
case 0x70a585:c.instructions+=13;goto B70a585;
case 0x70a586:c.instructions+=12;goto B70a586;
case 0x70a588:c.instructions+=11;goto B70a588;
case 0x70a589:c.instructions+=10;goto B70a589;
case 0x70a58f:c.instructions+=9;goto B70a58f;
case 0x70a591:c.instructions+=8;goto B70a591;
case 0x70a592:c.instructions+=7;goto B70a592;
case 0x70a598:c.instructions+=6;goto B70a598;
case 0x70a59a:c.instructions+=5;goto B70a59a;
case 0x70a59b:c.instructions+=4;goto B70a59b;
case 0x70a59d:c.instructions+=3;goto B70a59d;
case 0x70a5a3:c.instructions+=2;goto B70a5a3;
case 0x70a5a4:c.instructions+=1;goto B70a5a4;
case 0x70a5a9:goto L70a5a9;
case 0x70a5ac:c.instructions+=2;goto B70a5ac;
case 0x70a5ad:c.instructions+=1;goto B70a5ad;
case 0x70a5af:goto L70a5af;
case 0x70a5b1:c.instructions+=4;goto B70a5b1;
case 0x70a5b4:c.instructions+=3;goto B70a5b4;
case 0x70a5b7:c.instructions+=2;goto B70a5b7;
case 0x70a5b8:c.instructions+=1;goto B70a5b8;
case 0x70a5bd:goto L70a5bd;
case 0x70a5bf:c.instructions+=4;goto B70a5bf;
case 0x70a5c2:c.instructions+=3;goto B70a5c2;
case 0x70a5c5:c.instructions+=2;goto B70a5c5;
case 0x70a5c6:c.instructions+=1;goto B70a5c6;
case 0x70a5cb:goto L70a5cb;
case 0x70a5cd:c.instructions+=4;goto B70a5cd;
case 0x70a5d0:c.instructions+=3;goto B70a5d0;
case 0x70a5d3:c.instructions+=2;goto B70a5d3;
case 0x70a5d4:c.instructions+=1;goto B70a5d4;
case 0x70a5d9:goto L70a5d9;
case 0x70a5dc:goto L70a5dc;
case 0x70a5dd:c.instructions+=3;goto B70a5dd;
case 0x70a5de:c.instructions+=2;goto B70a5de;
case 0x70a5df:c.instructions+=1;goto B70a5df;
case 0x70a5e0:goto L70a5e0;
case 0x70a5e1:c.instructions+=8;goto B70a5e1;
case 0x70a5e3:c.instructions+=7;goto B70a5e3;
case 0x70a5e4:c.instructions+=6;goto B70a5e4;
case 0x70a5e5:c.instructions+=5;goto B70a5e5;
case 0x70a5e6:c.instructions+=4;goto B70a5e6;
case 0x70a5e9:c.instructions+=3;goto B70a5e9;
case 0x70a5ea:c.instructions+=2;goto B70a5ea;
case 0x70a5eb:c.instructions+=1;goto B70a5eb;
case 0x70a5f0:goto L70a5f0;
case 0x70a5f6:c.instructions+=7;goto B70a5f6;
case 0x70a5f9:c.instructions+=6;goto B70a5f9;
case 0x70a5fc:c.instructions+=5;goto B70a5fc;
case 0x70a5ff:c.instructions+=4;goto B70a5ff;
case 0x70a601:c.instructions+=3;goto B70a601;
case 0x70a603:c.instructions+=2;goto B70a603;
case 0x70a606:c.instructions+=1;goto B70a606;
case 0x70a609:goto L70a609;
case 0x70a60b:goto L70a60b;
case 0x70a60d:c.instructions+=1;goto B70a60d;
case 0x70a610:goto L70a610;
case 0x70a612:goto L70a612;
case 0x70a618:c.instructions+=16;goto B70a618;
case 0x70a61b:c.instructions+=15;goto B70a61b;
case 0x70a61e:c.instructions+=14;goto B70a61e;
case 0x70a621:c.instructions+=13;goto B70a621;
case 0x70a622:c.instructions+=12;goto B70a622;
case 0x70a624:c.instructions+=11;goto B70a624;
case 0x70a625:c.instructions+=10;goto B70a625;
case 0x70a62b:c.instructions+=9;goto B70a62b;
case 0x70a62d:c.instructions+=8;goto B70a62d;
case 0x70a62e:c.instructions+=7;goto B70a62e;
case 0x70a634:c.instructions+=6;goto B70a634;
case 0x70a63a:c.instructions+=5;goto B70a63a;
case 0x70a63c:c.instructions+=4;goto B70a63c;
case 0x70a63e:c.instructions+=3;goto B70a63e;
case 0x70a63f:c.instructions+=2;goto B70a63f;
case 0x70a640:c.instructions+=1;goto B70a640;
case 0x70a645:goto L70a645;
case 0x70a64b:c.instructions+=23;goto B70a64b;
case 0x70a651:c.instructions+=22;goto B70a651;
case 0x70a654:c.instructions+=21;goto B70a654;
case 0x70a657:c.instructions+=20;goto B70a657;
case 0x70a659:c.instructions+=19;goto B70a659;
case 0x70a65c:c.instructions+=18;goto B70a65c;
case 0x70a65f:c.instructions+=17;goto B70a65f;
case 0x70a665:c.instructions+=16;goto B70a665;
case 0x70a66b:c.instructions+=15;goto B70a66b;
case 0x70a66d:c.instructions+=14;goto B70a66d;
case 0x70a670:c.instructions+=13;goto B70a670;
case 0x70a672:c.instructions+=12;goto B70a672;
case 0x70a673:c.instructions+=11;goto B70a673;
case 0x70a676:c.instructions+=10;goto B70a676;
case 0x70a678:c.instructions+=9;goto B70a678;
case 0x70a679:c.instructions+=8;goto B70a679;
case 0x70a67b:c.instructions+=7;goto B70a67b;
case 0x70a67c:c.instructions+=6;goto B70a67c;
case 0x70a682:c.instructions+=5;goto B70a682;
case 0x70a685:c.instructions+=4;goto B70a685;
case 0x70a687:c.instructions+=3;goto B70a687;
case 0x70a688:c.instructions+=2;goto B70a688;
case 0x70a689:c.instructions+=1;goto B70a689;
case 0x70a68e:goto L70a68e;
case 0x70a691:c.instructions+=18;goto B70a691;
case 0x70a694:c.instructions+=17;goto B70a694;
case 0x70a697:c.instructions+=16;goto B70a697;
case 0x70a69d:c.instructions+=15;goto B70a69d;
case 0x70a6a0:c.instructions+=14;goto B70a6a0;
case 0x70a6a3:c.instructions+=13;goto B70a6a3;
case 0x70a6a4:c.instructions+=12;goto B70a6a4;
case 0x70a6a6:c.instructions+=11;goto B70a6a6;
case 0x70a6a7:c.instructions+=10;goto B70a6a7;
case 0x70a6ad:c.instructions+=9;goto B70a6ad;
case 0x70a6af:c.instructions+=8;goto B70a6af;
case 0x70a6b0:c.instructions+=7;goto B70a6b0;
case 0x70a6b6:c.instructions+=6;goto B70a6b6;
case 0x70a6b8:c.instructions+=5;goto B70a6b8;
case 0x70a6b9:c.instructions+=4;goto B70a6b9;
case 0x70a6bf:c.instructions+=3;goto B70a6bf;
case 0x70a6c5:c.instructions+=2;goto B70a6c5;
case 0x70a6c6:c.instructions+=1;goto B70a6c6;
case 0x70a6cb:goto L70a6cb;
case 0x70a6d1:c.instructions+=17;goto B70a6d1;
case 0x70a6d7:c.instructions+=16;goto B70a6d7;
case 0x70a6da:c.instructions+=15;goto B70a6da;
case 0x70a6dc:c.instructions+=14;goto B70a6dc;
case 0x70a6dd:c.instructions+=13;goto B70a6dd;
case 0x70a6de:c.instructions+=12;goto B70a6de;
case 0x70a6e4:c.instructions+=11;goto B70a6e4;
case 0x70a6e6:c.instructions+=10;goto B70a6e6;
case 0x70a6e7:c.instructions+=9;goto B70a6e7;
case 0x70a6ed:c.instructions+=8;goto B70a6ed;
case 0x70a6ef:c.instructions+=7;goto B70a6ef;
case 0x70a6f0:c.instructions+=6;goto B70a6f0;
case 0x70a6f6:c.instructions+=5;goto B70a6f6;
case 0x70a6fc:c.instructions+=4;goto B70a6fc;
case 0x70a6fd:c.instructions+=3;goto B70a6fd;
case 0x70a703:c.instructions+=2;goto B70a703;
case 0x70a704:c.instructions+=1;goto B70a704;
case 0x70a709:goto L70a709;
case 0x70a70c:c.instructions+=5;goto B70a70c;
case 0x70a70d:c.instructions+=4;goto B70a70d;
case 0x70a70e:c.instructions+=3;goto B70a70e;
case 0x70a70f:c.instructions+=2;goto B70a70f;
case 0x70a710:c.instructions+=1;goto B70a710;
case 0x70a711:goto L70a711;
case 0x70a712:c.instructions+=13;goto B70a712;
case 0x70a714:c.instructions+=12;goto B70a714;
case 0x70a715:c.instructions+=11;goto B70a715;
case 0x70a716:c.instructions+=10;goto B70a716;
case 0x70a719:c.instructions+=9;goto B70a719;
case 0x70a71a:c.instructions+=8;goto B70a71a;
case 0x70a71d:c.instructions+=7;goto B70a71d;
case 0x70a71e:c.instructions+=6;goto B70a71e;
case 0x70a721:c.instructions+=5;goto B70a721;
case 0x70a723:c.instructions+=4;goto B70a723;
case 0x70a726:c.instructions+=3;goto B70a726;
case 0x70a728:c.instructions+=2;goto B70a728;
case 0x70a72d:c.instructions+=1;goto B70a72d;
case 0x70a733:goto L70a733;
case 0x70a735:goto L70a735;
case 0x70a737:goto L70a737;
case 0x70a73a:c.instructions+=10;goto B70a73a;
case 0x70a73c:c.instructions+=9;goto B70a73c;
case 0x70a73f:c.instructions+=8;goto B70a73f;
case 0x70a742:c.instructions+=7;goto B70a742;
case 0x70a745:c.instructions+=6;goto B70a745;
case 0x70a747:c.instructions+=5;goto B70a747;
case 0x70a749:c.instructions+=4;goto B70a749;
case 0x70a74b:c.instructions+=3;goto B70a74b;
case 0x70a74e:c.instructions+=2;goto B70a74e;
case 0x70a750:c.instructions+=1;goto B70a750;
case 0x70a751:goto L70a751;
case 0x70a754:c.instructions+=16;goto B70a754;
case 0x70a757:c.instructions+=15;goto B70a757;
case 0x70a75b:c.instructions+=14;goto B70a75b;
case 0x70a75d:c.instructions+=13;goto B70a75d;
case 0x70a75f:c.instructions+=12;goto B70a75f;
case 0x70a762:c.instructions+=11;goto B70a762;
case 0x70a764:c.instructions+=10;goto B70a764;
case 0x70a767:c.instructions+=9;goto B70a767;
case 0x70a76a:c.instructions+=8;goto B70a76a;
case 0x70a76d:c.instructions+=7;goto B70a76d;
case 0x70a771:c.instructions+=6;goto B70a771;
case 0x70a772:c.instructions+=5;goto B70a772;
case 0x70a775:c.instructions+=4;goto B70a775;
case 0x70a778:c.instructions+=3;goto B70a778;
case 0x70a77b:c.instructions+=2;goto B70a77b;
case 0x70a77d:c.instructions+=1;goto B70a77d;
case 0x70a77f:goto L70a77f;
case 0x70a780:goto L70a780;
case 0x70a781:c.instructions+=4;goto B70a781;
case 0x70a783:c.instructions+=3;goto B70a783;
case 0x70a784:c.instructions+=2;goto B70a784;
case 0x70a785:c.instructions+=1;goto B70a785;
case 0x70a786:goto L70a786;
case 0x70a787:c.instructions+=10;goto B70a787;
case 0x70a789:c.instructions+=9;goto B70a789;
case 0x70a78f:c.instructions+=8;goto B70a78f;
case 0x70a790:c.instructions+=7;goto B70a790;
case 0x70a793:c.instructions+=6;goto B70a793;
case 0x70a796:c.instructions+=5;goto B70a796;
case 0x70a799:c.instructions+=4;goto B70a799;
case 0x70a79c:c.instructions+=3;goto B70a79c;
case 0x70a79d:c.instructions+=2;goto B70a79d;
case 0x70a79e:c.instructions+=1;goto B70a79e;
case 0x70a7a0:goto L70a7a0;
case 0x70a7a5:goto L70a7a5;
case 0x70a7a7:goto L70a7a7;
case 0x70a7ad:goto L70a7ad;
case 0x70a7ae:c.instructions+=5;goto B70a7ae;
case 0x70a7af:c.instructions+=4;goto B70a7af;
case 0x70a7b2:c.instructions+=3;goto B70a7b2;
case 0x70a7b3:c.instructions+=2;goto B70a7b3;
case 0x70a7b4:c.instructions+=1;goto B70a7b4;
case 0x70a7b5:goto L70a7b5;
case 0x70a7b6:c.instructions+=7;goto B70a7b6;
case 0x70a7b8:c.instructions+=6;goto B70a7b8;
case 0x70a7bb:c.instructions+=5;goto B70a7bb;
case 0x70a7bc:c.instructions+=4;goto B70a7bc;
case 0x70a7bd:c.instructions+=3;goto B70a7bd;
case 0x70a7be:c.instructions+=2;goto B70a7be;
case 0x70a7c0:c.instructions+=1;goto B70a7c0;
case 0x70a7c1:goto L70a7c1;
case 0x70a7c5:c.instructions+=19;goto B70a7c5;
case 0x70a7c9:c.instructions+=18;goto B70a7c9;
case 0x70a7cd:c.instructions+=17;goto B70a7cd;
case 0x70a7cf:c.instructions+=16;goto B70a7cf;
case 0x70a7d1:c.instructions+=15;goto B70a7d1;
case 0x70a7d4:c.instructions+=14;goto B70a7d4;
case 0x70a7d6:c.instructions+=13;goto B70a7d6;
case 0x70a7d9:c.instructions+=12;goto B70a7d9;
case 0x70a7dd:c.instructions+=11;goto B70a7dd;
case 0x70a7e0:c.instructions+=10;goto B70a7e0;
case 0x70a7e3:c.instructions+=9;goto B70a7e3;
case 0x70a7e6:c.instructions+=8;goto B70a7e6;
case 0x70a7ed:c.instructions+=7;goto B70a7ed;
case 0x70a7ef:c.instructions+=6;goto B70a7ef;
case 0x70a7f2:c.instructions+=5;goto B70a7f2;
case 0x70a7f8:c.instructions+=4;goto B70a7f8;
case 0x70a7fb:c.instructions+=3;goto B70a7fb;
case 0x70a7fe:c.instructions+=2;goto B70a7fe;
case 0x70a7ff:c.instructions+=1;goto B70a7ff;
case 0x70a801:goto L70a801;
case 0x70a802:c.instructions+=4;goto B70a802;
case 0x70a803:c.instructions+=3;goto B70a803;
case 0x70a804:c.instructions+=2;goto B70a804;
case 0x70a805:c.instructions+=1;goto B70a805;
case 0x70a806:goto L70a806;
case 0x70a807:c.instructions+=14;goto B70a807;
case 0x70a809:c.instructions+=13;goto B70a809;
case 0x70a80a:c.instructions+=12;goto B70a80a;
case 0x70a80d:c.instructions+=11;goto B70a80d;
case 0x70a80e:c.instructions+=10;goto B70a80e;
case 0x70a811:c.instructions+=9;goto B70a811;
case 0x70a812:c.instructions+=8;goto B70a812;
case 0x70a814:c.instructions+=7;goto B70a814;
case 0x70a817:c.instructions+=6;goto B70a817;
case 0x70a819:c.instructions+=5;goto B70a819;
case 0x70a81b:c.instructions+=4;goto B70a81b;
case 0x70a81c:c.instructions+=3;goto B70a81c;
case 0x70a81e:c.instructions+=2;goto B70a81e;
case 0x70a825:c.instructions+=1;goto B70a825;
case 0x70a827:goto L70a827;
case 0x70a82a:goto L70a82a;
case 0x70a82d:c.instructions+=21;goto B70a82d;
case 0x70a830:c.instructions+=20;goto B70a830;
case 0x70a834:c.instructions+=19;goto B70a834;
case 0x70a836:c.instructions+=18;goto B70a836;
case 0x70a839:c.instructions+=17;goto B70a839;
case 0x70a83b:c.instructions+=16;goto B70a83b;
case 0x70a83e:c.instructions+=15;goto B70a83e;
case 0x70a842:c.instructions+=14;goto B70a842;
case 0x70a845:c.instructions+=13;goto B70a845;
case 0x70a848:c.instructions+=12;goto B70a848;
case 0x70a84b:c.instructions+=11;goto B70a84b;
case 0x70a852:c.instructions+=10;goto B70a852;
case 0x70a854:c.instructions+=9;goto B70a854;
case 0x70a857:c.instructions+=8;goto B70a857;
case 0x70a859:c.instructions+=7;goto B70a859;
case 0x70a85f:c.instructions+=6;goto B70a85f;
case 0x70a861:c.instructions+=5;goto B70a861;
case 0x70a862:c.instructions+=4;goto B70a862;
case 0x70a863:c.instructions+=3;goto B70a863;
case 0x70a864:c.instructions+=2;goto B70a864;
case 0x70a867:c.instructions+=1;goto B70a867;
case 0x70a869:goto L70a869;
case 0x70a86a:c.instructions+=4;goto B70a86a;
case 0x70a86b:c.instructions+=3;goto B70a86b;
case 0x70a86c:c.instructions+=2;goto B70a86c;
case 0x70a86d:c.instructions+=1;goto B70a86d;
case 0x70a86e:goto L70a86e;
case 0x70a86f:c.instructions+=11;goto B70a86f;
case 0x70a871:c.instructions+=10;goto B70a871;
case 0x70a872:c.instructions+=9;goto B70a872;
case 0x70a875:c.instructions+=8;goto B70a875;
case 0x70a87b:c.instructions+=7;goto B70a87b;
case 0x70a87e:c.instructions+=6;goto B70a87e;
case 0x70a87f:c.instructions+=5;goto B70a87f;
case 0x70a880:c.instructions+=4;goto B70a880;
case 0x70a883:c.instructions+=3;goto B70a883;
case 0x70a884:c.instructions+=2;goto B70a884;
case 0x70a887:c.instructions+=1;goto B70a887;
case 0x70a88e:goto L70a88e;
case 0x70a891:c.instructions+=12;goto B70a891;
case 0x70a895:c.instructions+=11;goto B70a895;
case 0x70a899:c.instructions+=10;goto B70a899;
case 0x70a89b:c.instructions+=9;goto B70a89b;
case 0x70a89d:c.instructions+=8;goto B70a89d;
case 0x70a8a0:c.instructions+=7;goto B70a8a0;
case 0x70a8a2:c.instructions+=6;goto B70a8a2;
case 0x70a8a6:c.instructions+=5;goto B70a8a6;
case 0x70a8aa:c.instructions+=4;goto B70a8aa;
case 0x70a8ad:c.instructions+=3;goto B70a8ad;
case 0x70a8ae:c.instructions+=2;goto B70a8ae;
case 0x70a8b1:c.instructions+=1;goto B70a8b1;
case 0x70a8b6:goto L70a8b6;
case 0x70a8b7:c.instructions+=9;goto B70a8b7;
case 0x70a8b8:c.instructions+=8;goto B70a8b8;
case 0x70a8bf:c.instructions+=7;goto B70a8bf;
case 0x70a8c1:c.instructions+=6;goto B70a8c1;
case 0x70a8c4:c.instructions+=5;goto B70a8c4;
case 0x70a8ca:c.instructions+=4;goto B70a8ca;
case 0x70a8cc:c.instructions+=3;goto B70a8cc;
case 0x70a8cf:c.instructions+=2;goto B70a8cf;
case 0x70a8d2:c.instructions+=1;goto B70a8d2;
case 0x70a8d4:goto L70a8d4;
case 0x70a8d5:c.instructions+=4;goto B70a8d5;
case 0x70a8d6:c.instructions+=3;goto B70a8d6;
case 0x70a8d7:c.instructions+=2;goto B70a8d7;
case 0x70a8d8:c.instructions+=1;goto B70a8d8;
case 0x70a8d9:goto L70a8d9;
case 0x70a8da:c.instructions+=18;goto B70a8da;
case 0x70a8dc:c.instructions+=17;goto B70a8dc;
case 0x70a8dd:c.instructions+=16;goto B70a8dd;
case 0x70a8e0:c.instructions+=15;goto B70a8e0;
case 0x70a8e6:c.instructions+=14;goto B70a8e6;
case 0x70a8e9:c.instructions+=13;goto B70a8e9;
case 0x70a8ec:c.instructions+=12;goto B70a8ec;
case 0x70a8ed:c.instructions+=11;goto B70a8ed;
case 0x70a8ee:c.instructions+=10;goto B70a8ee;
case 0x70a8ef:c.instructions+=9;goto B70a8ef;
case 0x70a8f2:c.instructions+=8;goto B70a8f2;
case 0x70a8f5:c.instructions+=7;goto B70a8f5;
case 0x70a8f7:c.instructions+=6;goto B70a8f7;
case 0x70a8fa:c.instructions+=5;goto B70a8fa;
case 0x70a8fc:c.instructions+=4;goto B70a8fc;
case 0x70a8fe:c.instructions+=3;goto B70a8fe;
case 0x70a900:c.instructions+=2;goto B70a900;
case 0x70a907:c.instructions+=1;goto B70a907;
case 0x70a909:goto L70a909;
case 0x70a90c:goto L70a90c;
case 0x70a90f:c.instructions+=11;goto B70a90f;
case 0x70a912:c.instructions+=10;goto B70a912;
case 0x70a916:c.instructions+=9;goto B70a916;
case 0x70a918:c.instructions+=8;goto B70a918;
case 0x70a91b:c.instructions+=7;goto B70a91b;
case 0x70a91d:c.instructions+=6;goto B70a91d;
case 0x70a920:c.instructions+=5;goto B70a920;
case 0x70a924:c.instructions+=4;goto B70a924;
case 0x70a927:c.instructions+=3;goto B70a927;
case 0x70a928:c.instructions+=2;goto B70a928;
case 0x70a92b:c.instructions+=1;goto B70a92b;
case 0x70a930:goto L70a930;
case 0x70a931:c.instructions+=13;goto B70a931;
case 0x70a932:c.instructions+=12;goto B70a932;
case 0x70a935:c.instructions+=11;goto B70a935;
case 0x70a93c:c.instructions+=10;goto B70a93c;
case 0x70a93e:c.instructions+=9;goto B70a93e;
case 0x70a941:c.instructions+=8;goto B70a941;
case 0x70a943:c.instructions+=7;goto B70a943;
case 0x70a949:c.instructions+=6;goto B70a949;
case 0x70a94b:c.instructions+=5;goto B70a94b;
case 0x70a94c:c.instructions+=4;goto B70a94c;
case 0x70a94d:c.instructions+=3;goto B70a94d;
case 0x70a94e:c.instructions+=2;goto B70a94e;
case 0x70a951:c.instructions+=1;goto B70a951;
case 0x70a953:goto L70a953;
case 0x70a954:c.instructions+=4;goto B70a954;
case 0x70a955:c.instructions+=3;goto B70a955;
case 0x70a956:c.instructions+=2;goto B70a956;
case 0x70a957:c.instructions+=1;goto B70a957;
case 0x70a958:goto L70a958;
case 0x70a959:c.instructions+=11;goto B70a959;
case 0x70a95b:c.instructions+=10;goto B70a95b;
case 0x70a95c:c.instructions+=9;goto B70a95c;
case 0x70a95f:c.instructions+=8;goto B70a95f;
case 0x70a965:c.instructions+=7;goto B70a965;
case 0x70a968:c.instructions+=6;goto B70a968;
case 0x70a969:c.instructions+=5;goto B70a969;
case 0x70a96a:c.instructions+=4;goto B70a96a;
case 0x70a96d:c.instructions+=3;goto B70a96d;
case 0x70a96e:c.instructions+=2;goto B70a96e;
case 0x70a971:c.instructions+=1;goto B70a971;
case 0x70a978:goto L70a978;
case 0x70a97b:c.instructions+=12;goto B70a97b;
case 0x70a97f:c.instructions+=11;goto B70a97f;
case 0x70a983:c.instructions+=10;goto B70a983;
case 0x70a985:c.instructions+=9;goto B70a985;
case 0x70a987:c.instructions+=8;goto B70a987;
case 0x70a98a:c.instructions+=7;goto B70a98a;
case 0x70a98c:c.instructions+=6;goto B70a98c;
case 0x70a990:c.instructions+=5;goto B70a990;
case 0x70a994:c.instructions+=4;goto B70a994;
case 0x70a997:c.instructions+=3;goto B70a997;
case 0x70a998:c.instructions+=2;goto B70a998;
case 0x70a99b:c.instructions+=1;goto B70a99b;
case 0x70a9a0:goto L70a9a0;
case 0x70a9a1:c.instructions+=9;goto B70a9a1;
case 0x70a9a2:c.instructions+=8;goto B70a9a2;
case 0x70a9a9:c.instructions+=7;goto B70a9a9;
case 0x70a9ab:c.instructions+=6;goto B70a9ab;
case 0x70a9ae:c.instructions+=5;goto B70a9ae;
case 0x70a9b4:c.instructions+=4;goto B70a9b4;
case 0x70a9b6:c.instructions+=3;goto B70a9b6;
case 0x70a9b9:c.instructions+=2;goto B70a9b9;
case 0x70a9bc:c.instructions+=1;goto B70a9bc;
case 0x70a9be:goto L70a9be;
case 0x70a9bf:c.instructions+=4;goto B70a9bf;
case 0x70a9c0:c.instructions+=3;goto B70a9c0;
case 0x70a9c1:c.instructions+=2;goto B70a9c1;
case 0x70a9c2:c.instructions+=1;goto B70a9c2;
case 0x70a9c3:goto L70a9c3;
case 0x70a9c4:c.instructions+=18;goto B70a9c4;
case 0x70a9c6:c.instructions+=17;goto B70a9c6;
case 0x70a9c7:c.instructions+=16;goto B70a9c7;
case 0x70a9ca:c.instructions+=15;goto B70a9ca;
case 0x70a9d0:c.instructions+=14;goto B70a9d0;
case 0x70a9d3:c.instructions+=13;goto B70a9d3;
case 0x70a9d6:c.instructions+=12;goto B70a9d6;
case 0x70a9d7:c.instructions+=11;goto B70a9d7;
case 0x70a9d8:c.instructions+=10;goto B70a9d8;
case 0x70a9d9:c.instructions+=9;goto B70a9d9;
case 0x70a9dc:c.instructions+=8;goto B70a9dc;
case 0x70a9df:c.instructions+=7;goto B70a9df;
case 0x70a9e1:c.instructions+=6;goto B70a9e1;
case 0x70a9e4:c.instructions+=5;goto B70a9e4;
case 0x70a9e6:c.instructions+=4;goto B70a9e6;
case 0x70a9e8:c.instructions+=3;goto B70a9e8;
case 0x70a9ea:c.instructions+=2;goto B70a9ea;
case 0x70a9f1:c.instructions+=1;goto B70a9f1;
case 0x70a9f3:goto L70a9f3;
case 0x70a9f6:goto L70a9f6;
case 0x70a9f9:c.instructions+=11;goto B70a9f9;
case 0x70a9fc:c.instructions+=10;goto B70a9fc;
case 0x70aa00:c.instructions+=9;goto B70aa00;
case 0x70aa02:c.instructions+=8;goto B70aa02;
case 0x70aa05:c.instructions+=7;goto B70aa05;
case 0x70aa07:c.instructions+=6;goto B70aa07;
case 0x70aa0a:c.instructions+=5;goto B70aa0a;
case 0x70aa0e:c.instructions+=4;goto B70aa0e;
case 0x70aa11:c.instructions+=3;goto B70aa11;
case 0x70aa12:c.instructions+=2;goto B70aa12;
case 0x70aa15:c.instructions+=1;goto B70aa15;
case 0x70aa1a:goto L70aa1a;
case 0x70aa1b:c.instructions+=13;goto B70aa1b;
case 0x70aa1c:c.instructions+=12;goto B70aa1c;
case 0x70aa1f:c.instructions+=11;goto B70aa1f;
case 0x70aa26:c.instructions+=10;goto B70aa26;
case 0x70aa28:c.instructions+=9;goto B70aa28;
case 0x70aa2b:c.instructions+=8;goto B70aa2b;
case 0x70aa2d:c.instructions+=7;goto B70aa2d;
case 0x70aa33:c.instructions+=6;goto B70aa33;
case 0x70aa35:c.instructions+=5;goto B70aa35;
case 0x70aa36:c.instructions+=4;goto B70aa36;
case 0x70aa37:c.instructions+=3;goto B70aa37;
case 0x70aa38:c.instructions+=2;goto B70aa38;
case 0x70aa3b:c.instructions+=1;goto B70aa3b;
case 0x70aa3d:goto L70aa3d;
case 0x70aa3e:c.instructions+=4;goto B70aa3e;
case 0x70aa3f:c.instructions+=3;goto B70aa3f;
case 0x70aa40:c.instructions+=2;goto B70aa40;
case 0x70aa41:c.instructions+=1;goto B70aa41;
case 0x70aa42:goto L70aa42;
case 0x70aa43:c.instructions+=30;goto B70aa43;
case 0x70aa45:c.instructions+=29;goto B70aa45;
case 0x70aa48:c.instructions+=28;goto B70aa48;
case 0x70aa4b:c.instructions+=27;goto B70aa4b;
case 0x70aa4c:c.instructions+=26;goto B70aa4c;
case 0x70aa4d:c.instructions+=25;goto B70aa4d;
case 0x70aa50:c.instructions+=24;goto B70aa50;
case 0x70aa56:c.instructions+=23;goto B70aa56;
case 0x70aa59:c.instructions+=22;goto B70aa59;
case 0x70aa5c:c.instructions+=21;goto B70aa5c;
case 0x70aa5f:c.instructions+=20;goto B70aa5f;
case 0x70aa62:c.instructions+=19;goto B70aa62;
case 0x70aa65:c.instructions+=18;goto B70aa65;
case 0x70aa6b:c.instructions+=17;goto B70aa6b;
case 0x70aa6e:c.instructions+=16;goto B70aa6e;
case 0x70aa71:c.instructions+=15;goto B70aa71;
case 0x70aa74:c.instructions+=14;goto B70aa74;
case 0x70aa77:c.instructions+=13;goto B70aa77;
case 0x70aa7a:c.instructions+=12;goto B70aa7a;
case 0x70aa7d:c.instructions+=11;goto B70aa7d;
case 0x70aa7f:c.instructions+=10;goto B70aa7f;
case 0x70aa82:c.instructions+=9;goto B70aa82;
case 0x70aa85:c.instructions+=8;goto B70aa85;
case 0x70aa8c:c.instructions+=7;goto B70aa8c;
case 0x70aa8d:c.instructions+=6;goto B70aa8d;
case 0x70aa8f:c.instructions+=5;goto B70aa8f;
case 0x70aa91:c.instructions+=4;goto B70aa91;
case 0x70aa94:c.instructions+=3;goto B70aa94;
case 0x70aa97:c.instructions+=2;goto B70aa97;
case 0x70aa9a:c.instructions+=1;goto B70aa9a;
case 0x70aaa0:goto L70aaa0;
case 0x70aaa1:c.instructions+=2;goto B70aaa1;
case 0x70aaa2:c.instructions+=1;goto B70aaa2;
case 0x70aaa8:goto L70aaa8;
case 0x70aaa9:c.instructions+=4;goto B70aaa9;
case 0x70aaaa:c.instructions+=3;goto B70aaaa;
case 0x70aaad:c.instructions+=2;goto B70aaad;
case 0x70aab0:c.instructions+=1;goto B70aab0;
case 0x70aab2:goto L70aab2;
case 0x70aab4:goto L70aab4;
case 0x70aab7:c.instructions+=2;goto B70aab7;
case 0x70aab9:c.instructions+=1;goto B70aab9;
case 0x70aabb:goto L70aabb;
case 0x70aabc:c.instructions+=1;goto B70aabc;
case 0x70aabe:goto L70aabe;
case 0x70aabf:c.instructions+=1;goto B70aabf;
case 0x70aac5:goto L70aac5;
case 0x70aacb:c.instructions+=13;goto B70aacb;
case 0x70aad1:c.instructions+=12;goto B70aad1;
case 0x70aad7:c.instructions+=11;goto B70aad7;
case 0x70aadd:c.instructions+=10;goto B70aadd;
case 0x70aae0:c.instructions+=9;goto B70aae0;
case 0x70aae6:c.instructions+=8;goto B70aae6;
case 0x70aae8:c.instructions+=7;goto B70aae8;
case 0x70aaea:c.instructions+=6;goto B70aaea;
case 0x70aaed:c.instructions+=5;goto B70aaed;
case 0x70aaf3:c.instructions+=4;goto B70aaf3;
case 0x70aaf6:c.instructions+=3;goto B70aaf6;
case 0x70aaf9:c.instructions+=2;goto B70aaf9;
case 0x70aafc:c.instructions+=1;goto B70aafc;
case 0x70aafe:goto L70aafe;
case 0x70ab04:c.instructions+=12;goto B70ab04;
case 0x70ab0a:c.instructions+=11;goto B70ab0a;
case 0x70ab0d:c.instructions+=10;goto B70ab0d;
case 0x70ab10:c.instructions+=9;goto B70ab10;
case 0x70ab16:c.instructions+=8;goto B70ab16;
case 0x70ab18:c.instructions+=7;goto B70ab18;
case 0x70ab1a:c.instructions+=6;goto B70ab1a;
case 0x70ab1d:c.instructions+=5;goto B70ab1d;
case 0x70ab23:c.instructions+=4;goto B70ab23;
case 0x70ab26:c.instructions+=3;goto B70ab26;
case 0x70ab29:c.instructions+=2;goto B70ab29;
case 0x70ab2c:c.instructions+=1;goto B70ab2c;
case 0x70ab2e:goto L70ab2e;
case 0x70ab34:c.instructions+=8;goto B70ab34;
case 0x70ab3a:c.instructions+=7;goto B70ab3a;
case 0x70ab3d:c.instructions+=6;goto B70ab3d;
case 0x70ab40:c.instructions+=5;goto B70ab40;
case 0x70ab46:c.instructions+=4;goto B70ab46;
case 0x70ab49:c.instructions+=3;goto B70ab49;
case 0x70ab4c:c.instructions+=2;goto B70ab4c;
case 0x70ab4f:c.instructions+=1;goto B70ab4f;
case 0x70ab52:goto L70ab52;
case 0x70ab55:goto L70ab55;
case 0x70ab58:c.instructions+=6;goto B70ab58;
case 0x70ab5b:c.instructions+=5;goto B70ab5b;
case 0x70ab5e:c.instructions+=4;goto B70ab5e;
case 0x70ab60:c.instructions+=3;goto B70ab60;
case 0x70ab64:c.instructions+=2;goto B70ab64;
case 0x70ab67:c.instructions+=1;goto B70ab67;
case 0x70ab69:goto L70ab69;
case 0x70ab6c:c.instructions+=4;goto B70ab6c;
case 0x70ab6d:c.instructions+=3;goto B70ab6d;
case 0x70ab70:c.instructions+=2;goto B70ab70;
case 0x70ab73:c.instructions+=1;goto B70ab73;
case 0x70ab75:goto L70ab75;
case 0x70ab78:c.instructions+=5;goto B70ab78;
case 0x70ab7b:c.instructions+=4;goto B70ab7b;
case 0x70ab7e:c.instructions+=3;goto B70ab7e;
case 0x70ab7f:c.instructions+=2;goto B70ab7f;
case 0x70ab80:c.instructions+=1;goto B70ab80;
case 0x70ab86:goto L70ab86;
case 0x70ab89:goto L70ab89;
case 0x70ab8c:c.instructions+=7;goto B70ab8c;
case 0x70ab8f:c.instructions+=6;goto B70ab8f;
case 0x70ab91:c.instructions+=5;goto B70ab91;
case 0x70ab95:c.instructions+=4;goto B70ab95;
case 0x70ab98:c.instructions+=3;goto B70ab98;
case 0x70ab9b:c.instructions+=2;goto B70ab9b;
case 0x70ab9e:c.instructions+=1;goto B70ab9e;
case 0x70aba0:goto L70aba0;
case 0x70aba3:c.instructions+=7;goto B70aba3;
case 0x70aba6:c.instructions+=6;goto B70aba6;
case 0x70aba7:c.instructions+=5;goto B70aba7;
case 0x70abaa:c.instructions+=4;goto B70abaa;
case 0x70abac:c.instructions+=3;goto B70abac;
case 0x70abad:c.instructions+=2;goto B70abad;
case 0x70abae:c.instructions+=1;goto B70abae;
case 0x70abb4:goto L70abb4;
case 0x70abb7:goto L70abb7;
case 0x70abba:c.instructions+=7;goto B70abba;
case 0x70abbd:c.instructions+=6;goto B70abbd;
case 0x70abbf:c.instructions+=5;goto B70abbf;
case 0x70abc0:c.instructions+=4;goto B70abc0;
case 0x70abc1:c.instructions+=3;goto B70abc1;
case 0x70abc2:c.instructions+=2;goto B70abc2;
case 0x70abc4:c.instructions+=1;goto B70abc4;
case 0x70abca:goto L70abca;
case 0x70abcd:c.instructions+=10;goto B70abcd;
case 0x70abd4:c.instructions+=9;goto B70abd4;
case 0x70abd7:c.instructions+=8;goto B70abd7;
case 0x70abda:c.instructions+=7;goto B70abda;
case 0x70abdb:c.instructions+=6;goto B70abdb;
case 0x70abde:c.instructions+=5;goto B70abde;
case 0x70abe1:c.instructions+=4;goto B70abe1;
case 0x70abe4:c.instructions+=3;goto B70abe4;
case 0x70abe5:c.instructions+=2;goto B70abe5;
case 0x70abe8:c.instructions+=1;goto B70abe8;
case 0x70abeb:goto L70abeb;
case 0x70abee:c.instructions+=5;goto B70abee;
case 0x70abf1:c.instructions+=4;goto B70abf1;
case 0x70abf4:c.instructions+=3;goto B70abf4;
case 0x70abf7:c.instructions+=2;goto B70abf7;
case 0x70abfa:c.instructions+=1;goto B70abfa;
case 0x70abfc:goto L70abfc;
case 0x70abff:c.instructions+=6;goto B70abff;
case 0x70ac02:c.instructions+=5;goto B70ac02;
case 0x70ac05:c.instructions+=4;goto B70ac05;
case 0x70ac08:c.instructions+=3;goto B70ac08;
case 0x70ac09:c.instructions+=2;goto B70ac09;
case 0x70ac0a:c.instructions+=1;goto B70ac0a;
case 0x70ac10:goto L70ac10;
case 0x70ac13:c.instructions+=8;goto B70ac13;
case 0x70ac16:c.instructions+=7;goto B70ac16;
case 0x70ac18:c.instructions+=6;goto B70ac18;
case 0x70ac1c:c.instructions+=5;goto B70ac1c;
case 0x70ac1f:c.instructions+=4;goto B70ac1f;
case 0x70ac22:c.instructions+=3;goto B70ac22;
case 0x70ac25:c.instructions+=2;goto B70ac25;
case 0x70ac28:c.instructions+=1;goto B70ac28;
case 0x70ac2a:goto L70ac2a;
case 0x70ac2d:c.instructions+=4;goto B70ac2d;
case 0x70ac30:c.instructions+=3;goto B70ac30;
case 0x70ac33:c.instructions+=2;goto B70ac33;
case 0x70ac34:c.instructions+=1;goto B70ac34;
case 0x70ac3a:goto L70ac3a;
case 0x70ac3d:goto L70ac3d;
case 0x70ac40:c.instructions+=5;goto B70ac40;
case 0x70ac44:c.instructions+=4;goto B70ac44;
case 0x70ac47:c.instructions+=3;goto B70ac47;
case 0x70ac4a:c.instructions+=2;goto B70ac4a;
case 0x70ac4d:c.instructions+=1;goto B70ac4d;
case 0x70ac4f:goto L70ac4f;
case 0x70ac52:c.instructions+=8;goto B70ac52;
case 0x70ac55:c.instructions+=7;goto B70ac55;
case 0x70ac58:c.instructions+=6;goto B70ac58;
case 0x70ac59:c.instructions+=5;goto B70ac59;
case 0x70ac5c:c.instructions+=4;goto B70ac5c;
case 0x70ac60:c.instructions+=3;goto B70ac60;
case 0x70ac61:c.instructions+=2;goto B70ac61;
case 0x70ac62:c.instructions+=1;goto B70ac62;
case 0x70ac68:goto L70ac68;
case 0x70ac6b:goto L70ac6b;
case 0x70ac6f:c.instructions+=4;goto B70ac6f;
case 0x70ac70:c.instructions+=3;goto B70ac70;
case 0x70ac73:c.instructions+=2;goto B70ac73;
case 0x70ac76:c.instructions+=1;goto B70ac76;
case 0x70ac7c:goto L70ac7c;
case 0x70ac7f:goto L70ac7f;
case 0x70ac82:c.instructions+=5;goto B70ac82;
case 0x70ac85:c.instructions+=4;goto B70ac85;
case 0x70ac88:c.instructions+=3;goto B70ac88;
case 0x70ac8b:c.instructions+=2;goto B70ac8b;
case 0x70ac8e:c.instructions+=1;goto B70ac8e;
case 0x70ac90:goto L70ac90;
case 0x70ac93:c.instructions+=8;goto B70ac93;
case 0x70ac95:c.instructions+=7;goto B70ac95;
case 0x70ac98:c.instructions+=6;goto B70ac98;
case 0x70ac9b:c.instructions+=5;goto B70ac9b;
case 0x70ac9e:c.instructions+=4;goto B70ac9e;
case 0x70aca2:c.instructions+=3;goto B70aca2;
case 0x70aca3:c.instructions+=2;goto B70aca3;
case 0x70aca4:c.instructions+=1;goto B70aca4;
case 0x70acaa:goto L70acaa;
case 0x70acad:c.instructions+=7;goto B70acad;
case 0x70acb0:c.instructions+=6;goto B70acb0;
case 0x70acb2:c.instructions+=5;goto B70acb2;
case 0x70acb6:c.instructions+=4;goto B70acb6;
case 0x70acb9:c.instructions+=3;goto B70acb9;
case 0x70acbc:c.instructions+=2;goto B70acbc;
case 0x70acbf:c.instructions+=1;goto B70acbf;
case 0x70acc1:goto L70acc1;
case 0x70acc4:c.instructions+=9;goto B70acc4;
case 0x70acc7:c.instructions+=8;goto B70acc7;
case 0x70acca:c.instructions+=7;goto B70acca;
case 0x70accb:c.instructions+=6;goto B70accb;
case 0x70acce:c.instructions+=5;goto B70acce;
case 0x70acd0:c.instructions+=4;goto B70acd0;
case 0x70acd2:c.instructions+=3;goto B70acd2;
case 0x70acd3:c.instructions+=2;goto B70acd3;
case 0x70acd4:c.instructions+=1;goto B70acd4;
case 0x70acda:goto L70acda;
case 0x70acdd:goto L70acdd;
case 0x70ace0:c.instructions+=7;goto B70ace0;
case 0x70ace3:c.instructions+=6;goto B70ace3;
case 0x70ace5:c.instructions+=5;goto B70ace5;
case 0x70ace8:c.instructions+=4;goto B70ace8;
case 0x70ace9:c.instructions+=3;goto B70ace9;
case 0x70acea:c.instructions+=2;goto B70acea;
case 0x70aced:c.instructions+=1;goto B70aced;
case 0x70acf3:goto L70acf3;
case 0x70acf4:c.instructions+=1;goto B70acf4;
case 0x70acf7:goto L70acf7;
case 0x70acfa:c.instructions+=5;goto B70acfa;
case 0x70acfd:c.instructions+=4;goto B70acfd;
case 0x70ad00:c.instructions+=3;goto B70ad00;
case 0x70ad03:c.instructions+=2;goto B70ad03;
case 0x70ad06:c.instructions+=1;goto B70ad06;
case 0x70ad08:goto L70ad08;
case 0x70ad0b:c.instructions+=4;goto B70ad0b;
case 0x70ad0e:c.instructions+=3;goto B70ad0e;
case 0x70ad0f:c.instructions+=2;goto B70ad0f;
case 0x70ad10:c.instructions+=1;goto B70ad10;
case 0x70ad16:goto L70ad16;
case 0x70ad19:c.instructions+=6;goto B70ad19;
case 0x70ad1c:c.instructions+=5;goto B70ad1c;
case 0x70ad20:c.instructions+=4;goto B70ad20;
case 0x70ad23:c.instructions+=3;goto B70ad23;
case 0x70ad26:c.instructions+=2;goto B70ad26;
case 0x70ad29:c.instructions+=1;goto B70ad29;
case 0x70ad2b:goto L70ad2b;
case 0x70ad2e:c.instructions+=5;goto B70ad2e;
case 0x70ad31:c.instructions+=4;goto B70ad31;
case 0x70ad34:c.instructions+=3;goto B70ad34;
case 0x70ad35:c.instructions+=2;goto B70ad35;
case 0x70ad36:c.instructions+=1;goto B70ad36;
case 0x70ad3c:goto L70ad3c;
case 0x70ad3f:goto L70ad3f;
case 0x70ad42:c.instructions+=6;goto B70ad42;
case 0x70ad45:c.instructions+=5;goto B70ad45;
case 0x70ad47:c.instructions+=4;goto B70ad47;
case 0x70ad4b:c.instructions+=3;goto B70ad4b;
case 0x70ad4e:c.instructions+=2;goto B70ad4e;
case 0x70ad51:c.instructions+=1;goto B70ad51;
case 0x70ad53:goto L70ad53;
case 0x70ad56:c.instructions+=7;goto B70ad56;
case 0x70ad59:c.instructions+=6;goto B70ad59;
case 0x70ad5a:c.instructions+=5;goto B70ad5a;
case 0x70ad5d:c.instructions+=4;goto B70ad5d;
case 0x70ad5f:c.instructions+=3;goto B70ad5f;
case 0x70ad60:c.instructions+=2;goto B70ad60;
case 0x70ad61:c.instructions+=1;goto B70ad61;
case 0x70ad67:goto L70ad67;
case 0x70ad6a:goto L70ad6a;
case 0x70ad6d:c.instructions+=6;goto B70ad6d;
case 0x70ad6f:c.instructions+=5;goto B70ad6f;
case 0x70ad70:c.instructions+=4;goto B70ad70;
case 0x70ad71:c.instructions+=3;goto B70ad71;
case 0x70ad72:c.instructions+=2;goto B70ad72;
case 0x70ad74:c.instructions+=1;goto B70ad74;
case 0x70ad7a:goto L70ad7a;
case 0x70ad7d:c.instructions+=10;goto B70ad7d;
case 0x70ad84:c.instructions+=9;goto B70ad84;
case 0x70ad87:c.instructions+=8;goto B70ad87;
case 0x70ad8a:c.instructions+=7;goto B70ad8a;
case 0x70ad8b:c.instructions+=6;goto B70ad8b;
case 0x70ad8e:c.instructions+=5;goto B70ad8e;
case 0x70ad91:c.instructions+=4;goto B70ad91;
case 0x70ad94:c.instructions+=3;goto B70ad94;
case 0x70ad95:c.instructions+=2;goto B70ad95;
case 0x70ad98:c.instructions+=1;goto B70ad98;
case 0x70ad9b:goto L70ad9b;
case 0x70ad9e:c.instructions+=5;goto B70ad9e;
case 0x70ada1:c.instructions+=4;goto B70ada1;
case 0x70ada4:c.instructions+=3;goto B70ada4;
case 0x70ada7:c.instructions+=2;goto B70ada7;
case 0x70adaa:c.instructions+=1;goto B70adaa;
case 0x70adb0:goto L70adb0;
case 0x70adb3:c.instructions+=6;goto B70adb3;
case 0x70adb6:c.instructions+=5;goto B70adb6;
case 0x70adb9:c.instructions+=4;goto B70adb9;
case 0x70adbc:c.instructions+=3;goto B70adbc;
case 0x70adbd:c.instructions+=2;goto B70adbd;
case 0x70adbe:c.instructions+=1;goto B70adbe;
case 0x70adc4:goto L70adc4;
case 0x70adc7:c.instructions+=6;goto B70adc7;
case 0x70adca:c.instructions+=5;goto B70adca;
case 0x70adcd:c.instructions+=4;goto B70adcd;
case 0x70add0:c.instructions+=3;goto B70add0;
case 0x70add1:c.instructions+=2;goto B70add1;
case 0x70add2:c.instructions+=1;goto B70add2;
case 0x70add8:goto L70add8;
case 0x70addb:c.instructions+=8;goto B70addb;
case 0x70adde:c.instructions+=7;goto B70adde;
case 0x70ade0:c.instructions+=6;goto B70ade0;
case 0x70ade4:c.instructions+=5;goto B70ade4;
case 0x70ade7:c.instructions+=4;goto B70ade7;
case 0x70adea:c.instructions+=3;goto B70adea;
case 0x70aded:c.instructions+=2;goto B70aded;
case 0x70adf0:c.instructions+=1;goto B70adf0;
case 0x70adf2:goto L70adf2;
case 0x70adf5:c.instructions+=4;goto B70adf5;
case 0x70adf8:c.instructions+=3;goto B70adf8;
case 0x70adfb:c.instructions+=2;goto B70adfb;
case 0x70adfc:c.instructions+=1;goto B70adfc;
case 0x70ae02:goto L70ae02;
case 0x70ae05:goto L70ae05;
case 0x70ae08:c.instructions+=5;goto B70ae08;
case 0x70ae0c:c.instructions+=4;goto B70ae0c;
case 0x70ae0f:c.instructions+=3;goto B70ae0f;
case 0x70ae12:c.instructions+=2;goto B70ae12;
case 0x70ae15:c.instructions+=1;goto B70ae15;
case 0x70ae17:goto L70ae17;
case 0x70ae1a:c.instructions+=8;goto B70ae1a;
case 0x70ae1d:c.instructions+=7;goto B70ae1d;
case 0x70ae20:c.instructions+=6;goto B70ae20;
case 0x70ae21:c.instructions+=5;goto B70ae21;
case 0x70ae24:c.instructions+=4;goto B70ae24;
case 0x70ae28:c.instructions+=3;goto B70ae28;
case 0x70ae29:c.instructions+=2;goto B70ae29;
case 0x70ae2a:c.instructions+=1;goto B70ae2a;
case 0x70ae30:goto L70ae30;
case 0x70ae33:goto L70ae33;
case 0x70ae37:c.instructions+=4;goto B70ae37;
case 0x70ae38:c.instructions+=3;goto B70ae38;
case 0x70ae3b:c.instructions+=2;goto B70ae3b;
case 0x70ae3e:c.instructions+=1;goto B70ae3e;
case 0x70ae44:goto L70ae44;
case 0x70ae47:goto L70ae47;
case 0x70ae4a:c.instructions+=5;goto B70ae4a;
case 0x70ae4d:c.instructions+=4;goto B70ae4d;
case 0x70ae50:c.instructions+=3;goto B70ae50;
case 0x70ae53:c.instructions+=2;goto B70ae53;
case 0x70ae56:c.instructions+=1;goto B70ae56;
case 0x70ae58:goto L70ae58;
case 0x70ae5b:c.instructions+=9;goto B70ae5b;
case 0x70ae5d:c.instructions+=8;goto B70ae5d;
case 0x70ae60:c.instructions+=7;goto B70ae60;
case 0x70ae63:c.instructions+=6;goto B70ae63;
case 0x70ae66:c.instructions+=5;goto B70ae66;
case 0x70ae68:c.instructions+=4;goto B70ae68;
case 0x70ae6b:c.instructions+=3;goto B70ae6b;
case 0x70ae6c:c.instructions+=2;goto B70ae6c;
case 0x70ae6d:c.instructions+=1;goto B70ae6d;
case 0x70ae73:goto L70ae73;
case 0x70ae76:c.instructions+=6;goto B70ae76;
case 0x70ae79:c.instructions+=5;goto B70ae79;
case 0x70ae7c:c.instructions+=4;goto B70ae7c;
case 0x70ae7e:c.instructions+=3;goto B70ae7e;
case 0x70ae7f:c.instructions+=2;goto B70ae7f;
case 0x70ae80:c.instructions+=1;goto B70ae80;
case 0x70ae86:goto L70ae86;
case 0x70ae89:c.instructions+=7;goto B70ae89;
case 0x70ae8c:c.instructions+=6;goto B70ae8c;
case 0x70ae8e:c.instructions+=5;goto B70ae8e;
case 0x70ae92:c.instructions+=4;goto B70ae92;
case 0x70ae95:c.instructions+=3;goto B70ae95;
case 0x70ae98:c.instructions+=2;goto B70ae98;
case 0x70ae9b:c.instructions+=1;goto B70ae9b;
case 0x70ae9d:goto L70ae9d;
case 0x70aea0:c.instructions+=9;goto B70aea0;
case 0x70aea3:c.instructions+=8;goto B70aea3;
case 0x70aea6:c.instructions+=7;goto B70aea6;
case 0x70aea7:c.instructions+=6;goto B70aea7;
case 0x70aeaa:c.instructions+=5;goto B70aeaa;
case 0x70aeac:c.instructions+=4;goto B70aeac;
case 0x70aeae:c.instructions+=3;goto B70aeae;
case 0x70aeaf:c.instructions+=2;goto B70aeaf;
case 0x70aeb0:c.instructions+=1;goto B70aeb0;
case 0x70aeb6:goto L70aeb6;
case 0x70aeb9:goto L70aeb9;
case 0x70aebc:c.instructions+=5;goto B70aebc;
case 0x70aebf:c.instructions+=4;goto B70aebf;
case 0x70aec0:c.instructions+=3;goto B70aec0;
case 0x70aec2:c.instructions+=2;goto B70aec2;
case 0x70aec5:c.instructions+=1;goto B70aec5;
case 0x70aecb:goto L70aecb;
case 0x70aece:c.instructions+=2;goto B70aece;
case 0x70aed2:c.instructions+=1;goto B70aed2;
case 0x70aed8:goto L70aed8;
case 0x70aedb:c.instructions+=5;goto B70aedb;
case 0x70aede:c.instructions+=4;goto B70aede;
case 0x70aee1:c.instructions+=3;goto B70aee1;
case 0x70aee4:c.instructions+=2;goto B70aee4;
case 0x70aee7:c.instructions+=1;goto B70aee7;
case 0x70aee9:goto L70aee9;
case 0x70aeec:c.instructions+=4;goto B70aeec;
case 0x70aeef:c.instructions+=3;goto B70aeef;
case 0x70aef0:c.instructions+=2;goto B70aef0;
case 0x70aef1:c.instructions+=1;goto B70aef1;
case 0x70aef7:goto L70aef7;
case 0x70aefa:c.instructions+=6;goto B70aefa;
case 0x70aefd:c.instructions+=5;goto B70aefd;
case 0x70af01:c.instructions+=4;goto B70af01;
case 0x70af04:c.instructions+=3;goto B70af04;
case 0x70af07:c.instructions+=2;goto B70af07;
case 0x70af0a:c.instructions+=1;goto B70af0a;
case 0x70af0c:goto L70af0c;
case 0x70af0f:c.instructions+=5;goto B70af0f;
case 0x70af12:c.instructions+=4;goto B70af12;
case 0x70af15:c.instructions+=3;goto B70af15;
case 0x70af16:c.instructions+=2;goto B70af16;
case 0x70af17:c.instructions+=1;goto B70af17;
case 0x70af1d:goto L70af1d;
case 0x70af20:goto L70af20;
case 0x70af23:c.instructions+=6;goto B70af23;
case 0x70af25:c.instructions+=5;goto B70af25;
case 0x70af26:c.instructions+=4;goto B70af26;
case 0x70af27:c.instructions+=3;goto B70af27;
case 0x70af28:c.instructions+=2;goto B70af28;
case 0x70af2a:c.instructions+=1;goto B70af2a;
case 0x70af30:goto L70af30;
case 0x70af33:c.instructions+=7;goto B70af33;
case 0x70af34:c.instructions+=6;goto B70af34;
case 0x70af37:c.instructions+=5;goto B70af37;
case 0x70af3a:c.instructions+=4;goto B70af3a;
case 0x70af3d:c.instructions+=3;goto B70af3d;
case 0x70af3e:c.instructions+=2;goto B70af3e;
case 0x70af41:c.instructions+=1;goto B70af41;
case 0x70af44:goto L70af44;
case 0x70af47:c.instructions+=5;goto B70af47;
case 0x70af4a:c.instructions+=4;goto B70af4a;
case 0x70af4d:c.instructions+=3;goto B70af4d;
case 0x70af50:c.instructions+=2;goto B70af50;
case 0x70af53:c.instructions+=1;goto B70af53;
case 0x70af55:goto L70af55;
case 0x70af58:c.instructions+=6;goto B70af58;
case 0x70af5b:c.instructions+=5;goto B70af5b;
case 0x70af5e:c.instructions+=4;goto B70af5e;
case 0x70af61:c.instructions+=3;goto B70af61;
case 0x70af62:c.instructions+=2;goto B70af62;
case 0x70af63:c.instructions+=1;goto B70af63;
case 0x70af69:goto L70af69;
case 0x70af6c:c.instructions+=6;goto B70af6c;
case 0x70af6f:c.instructions+=5;goto B70af6f;
case 0x70af72:c.instructions+=4;goto B70af72;
case 0x70af75:c.instructions+=3;goto B70af75;
case 0x70af76:c.instructions+=2;goto B70af76;
case 0x70af77:c.instructions+=1;goto B70af77;
case 0x70af7d:goto L70af7d;
case 0x70af80:c.instructions+=6;goto B70af80;
case 0x70af84:c.instructions+=5;goto B70af84;
case 0x70af87:c.instructions+=4;goto B70af87;
case 0x70af8a:c.instructions+=3;goto B70af8a;
case 0x70af8d:c.instructions+=2;goto B70af8d;
case 0x70af90:c.instructions+=1;goto B70af90;
case 0x70af92:goto L70af92;
case 0x70af95:c.instructions+=4;goto B70af95;
case 0x70af98:c.instructions+=3;goto B70af98;
case 0x70af9b:c.instructions+=2;goto B70af9b;
case 0x70af9c:c.instructions+=1;goto B70af9c;
case 0x70afa2:goto L70afa2;
case 0x70afa5:goto L70afa5;
case 0x70afa9:c.instructions+=4;goto B70afa9;
case 0x70afaa:c.instructions+=3;goto B70afaa;
case 0x70afad:c.instructions+=2;goto B70afad;
case 0x70afb0:c.instructions+=1;goto B70afb0;
case 0x70afb2:goto L70afb2;
case 0x70afb5:goto L70afb5;
case 0x70afb8:c.instructions+=5;goto B70afb8;
case 0x70afbb:c.instructions+=4;goto B70afbb;
case 0x70afbe:c.instructions+=3;goto B70afbe;
case 0x70afc1:c.instructions+=2;goto B70afc1;
case 0x70afc4:c.instructions+=1;goto B70afc4;
case 0x70afc6:goto L70afc6;
case 0x70afc9:c.instructions+=6;goto B70afc9;
case 0x70afcc:c.instructions+=5;goto B70afcc;
case 0x70afcf:c.instructions+=4;goto B70afcf;
case 0x70afd2:c.instructions+=3;goto B70afd2;
case 0x70afd3:c.instructions+=2;goto B70afd3;
case 0x70afd4:c.instructions+=1;goto B70afd4;
case 0x70afda:goto L70afda;
case 0x70afdd:c.instructions+=4;goto B70afdd;
case 0x70afe0:c.instructions+=3;goto B70afe0;
case 0x70afe1:c.instructions+=2;goto B70afe1;
case 0x70afe2:c.instructions+=1;goto B70afe2;
case 0x70afe8:goto L70afe8;
case 0x70afeb:goto L70afeb;
case 0x70afec:c.instructions+=4;goto B70afec;
case 0x70afed:c.instructions+=3;goto B70afed;
case 0x70afee:c.instructions+=2;goto B70afee;
case 0x70afef:c.instructions+=1;goto B70afef;
case 0x70aff0:goto L70aff0;
case 0x70aff1:c.instructions+=7;goto B70aff1;
case 0x70aff3:c.instructions+=6;goto B70aff3;
case 0x70aff6:c.instructions+=5;goto B70aff6;
case 0x70aff9:c.instructions+=4;goto B70aff9;
case 0x70affa:c.instructions+=3;goto B70affa;
case 0x70affb:c.instructions+=2;goto B70affb;
case 0x70affe:c.instructions+=1;goto B70affe;
default:missing_instruction(c.pc);}
B70a000:L70a000:{c.instructions+=6;NFSU2_TR(0x70a000);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a002:{NFSU2_TR(0x70a002);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B70a003:{NFSU2_TR(0x70a003);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70a006:{NFSU2_TR(0x70a006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70a007:{NFSU2_TR(0x70a007);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a00d:{NFSU2_TR(0x70a00d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x709d5bu,709);}
}
B70a013:L70a013:{c.instructions+=3;NFSU2_TR(0x70a013);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a016:{NFSU2_TR(0x70a016);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70a019:{NFSU2_TR(0x70a019);
if(r1(R+518)){{goto L70a246;}}
}
B70a01f:L70a01f:{c.instructions+=4;NFSU2_TR(0x70a01f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a022:{NFSU2_TR(0x70a022);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a025:{NFSU2_TR(0x70a025);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a028:{NFSU2_TR(0x70a028);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a02b:L70a02b:{c.instructions+=23;NFSU2_TR(0x70a02b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70a02f:{NFSU2_TR(0x70a02f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a032:{NFSU2_TR(0x70a032);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70a036:{NFSU2_TR(0x70a036);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+28,u32(r1(U+0)));
}
B70a039:{NFSU2_TR(0x70a039);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B70a03d:{NFSU2_TR(0x70a03d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a040:{NFSU2_TR(0x70a040);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70a044:{NFSU2_TR(0x70a044);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a048:{NFSU2_TR(0x70a048);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a04c:{NFSU2_TR(0x70a04c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a04f:{NFSU2_TR(0x70a04f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70a053:{NFSU2_TR(0x70a053);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a056:{NFSU2_TR(0x70a056);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70a05a:{NFSU2_TR(0x70a05a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a05d:{NFSU2_TR(0x70a05d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70a061:{NFSU2_TR(0x70a061);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a064:{NFSU2_TR(0x70a064);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70a068:{NFSU2_TR(0x70a068);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a06b:{NFSU2_TR(0x70a06b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70a06f:{NFSU2_TR(0x70a06f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a072:{NFSU2_TR(0x70a072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a075:{NFSU2_TR(0x70a075);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a078:{NFSU2_TR(0x70a078);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70a07f:L70a07f:{c.instructions+=10;NFSU2_TR(0x70a07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a082:{NFSU2_TR(0x70a082);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70a085:{NFSU2_TR(0x70a085);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B70a089:{NFSU2_TR(0x70a089);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a08c:{NFSU2_TR(0x70a08c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a092:{NFSU2_TR(0x70a092);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B70a095:{NFSU2_TR(0x70a095);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a098:{NFSU2_TR(0x70a098);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B70a09a:{NFSU2_TR(0x70a09a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70a09c:{NFSU2_TR(0x70a09c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70a0a2;}}
}
B70a09e:L70a09e:{c.instructions+=2;NFSU2_TR(0x70a09e);
__builtin_memmove((R+4),(R+12),4);
}
B70a0a0:{NFSU2_TR(0x70a0a0);
{goto L70a0a5;}
}
B70a0a2:L70a0a2:{c.instructions+=1;NFSU2_TR(0x70a0a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B70a0a5:L70a0a5:{c.instructions+=4;NFSU2_TR(0x70a0a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a0a8:{NFSU2_TR(0x70a0a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a0ab:{NFSU2_TR(0x70a0ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70a0af:{NFSU2_TR(0x70a0af);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a07fu);}goto L70a07f;}}
}
B70a0b1:L70a0b1:{c.instructions+=1;NFSU2_TR(0x70a0b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70a0b8:L70a0b8:{c.instructions+=8;NFSU2_TR(0x70a0b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a0bb:{NFSU2_TR(0x70a0bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70a0be:{NFSU2_TR(0x70a0be);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B70a0c2:{NFSU2_TR(0x70a0c2);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B70a0c6:{NFSU2_TR(0x70a0c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a0c9:{NFSU2_TR(0x70a0c9);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B70a0cb:{NFSU2_TR(0x70a0cb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70a0cd:{NFSU2_TR(0x70a0cd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70a0d3;}}
}
B70a0cf:L70a0cf:{c.instructions+=2;NFSU2_TR(0x70a0cf);
__builtin_memmove((R+4),(R+12),4);
}
B70a0d1:{NFSU2_TR(0x70a0d1);
{goto L70a0d6;}
}
B70a0d3:L70a0d3:{c.instructions+=1;NFSU2_TR(0x70a0d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B70a0d6:L70a0d6:{c.instructions+=4;NFSU2_TR(0x70a0d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a0d9:{NFSU2_TR(0x70a0d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a0dc:{NFSU2_TR(0x70a0dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x8ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70a0e0:{NFSU2_TR(0x70a0e0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a0b8u);}goto L70a0b8;}}
}
B70a0e2:L70a0e2:{c.instructions+=5;NFSU2_TR(0x70a0e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a0e5:{NFSU2_TR(0x70a0e5);
w4(R+4,u32(0xffull));
}
B70a0ea:{NFSU2_TR(0x70a0ea);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70a0ec:{NFSU2_TR(0x70a0ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a0ef:{NFSU2_TR(0x70a0ef);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70a0f4;}}
}
B70a0f1:L70a0f1:{c.instructions+=1;NFSU2_TR(0x70a0f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a0f4:L70a0f4:{c.instructions+=11;NFSU2_TR(0x70a0f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a0f7:{NFSU2_TR(0x70a0f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a0fa:{NFSU2_TR(0x70a0fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a0fd:{NFSU2_TR(0x70a0fd);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B70a101:{NFSU2_TR(0x70a101);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a104:{NFSU2_TR(0x70a104);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(R+4)),r4(U+0));
}
B70a106:{NFSU2_TR(0x70a106);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a109:{NFSU2_TR(0x70a109);
w4(R+4,u32(0xffull));
}
B70a10e:{NFSU2_TR(0x70a10e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70a110:{NFSU2_TR(0x70a110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a113:{NFSU2_TR(0x70a113);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70a118;}}
}
B70a115:L70a115:{c.instructions+=1;NFSU2_TR(0x70a115);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a118:L70a118:{c.instructions+=9;NFSU2_TR(0x70a118);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a11b:{NFSU2_TR(0x70a11b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a11e:{NFSU2_TR(0x70a11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a121:{NFSU2_TR(0x70a121);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B70a123:{NFSU2_TR(0x70a123);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a126:{NFSU2_TR(0x70a126);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(R+4)),r4(U+0));
}
B70a128:{NFSU2_TR(0x70a128);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a12e:{NFSU2_TR(0x70a12e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70a131:{NFSU2_TR(0x70a131);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70a1fe;}}
}
B70a137:L70a137:{c.instructions+=2;NFSU2_TR(0x70a137);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+4)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70a13a:{NFSU2_TR(0x70a13a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70a1fe;}}
}
B70a140:L70a140:{c.instructions+=5;NFSU2_TR(0x70a140);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a143:{NFSU2_TR(0x70a143);
__builtin_memmove((R+12),(R+24),4);
}
B70a145:{NFSU2_TR(0x70a145);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B70a147:{NFSU2_TR(0x70a147);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70a14a:{NFSU2_TR(0x70a14a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70a201;}}
}
B70a150:L70a150:{c.instructions+=4;NFSU2_TR(0x70a150);
__builtin_memmove((R+12),(R+4),4);
}
B70a152:{NFSU2_TR(0x70a152);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B70a154:{NFSU2_TR(0x70a154);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70a157:{NFSU2_TR(0x70a157);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70a201;}}
}
B70a15d:L70a15d:{c.instructions+=57;NFSU2_TR(0x70a15d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a160:{NFSU2_TR(0x70a160);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70a163:{NFSU2_TR(0x70a163);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B70a165:{NFSU2_TR(0x70a165);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B70a168:{NFSU2_TR(0x70a168);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B70a16b:{NFSU2_TR(0x70a16b);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B70a16f:{NFSU2_TR(0x70a16f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B70a172:{NFSU2_TR(0x70a172);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B70a175:{NFSU2_TR(0x70a175);
__builtin_memmove((R+28),(R+24),4);
}
B70a177:{NFSU2_TR(0x70a177);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B70a17a:{NFSU2_TR(0x70a17a);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+0)),r1(U+0));
}
B70a17c:{NFSU2_TR(0x70a17c);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B70a17e:{NFSU2_TR(0x70a17e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a181:{NFSU2_TR(0x70a181);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B70a184:{NFSU2_TR(0x70a184);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a187:{NFSU2_TR(0x70a187);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B70a18a:{NFSU2_TR(0x70a18a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B70a18d:{NFSU2_TR(0x70a18d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B70a18f:{NFSU2_TR(0x70a18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a192:{NFSU2_TR(0x70a192);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70a195:{NFSU2_TR(0x70a195);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B70a198:{NFSU2_TR(0x70a198);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a19b:{NFSU2_TR(0x70a19b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B70a19e:{NFSU2_TR(0x70a19e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B70a1a1:{NFSU2_TR(0x70a1a1);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B70a1a3:{NFSU2_TR(0x70a1a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a1a6:{NFSU2_TR(0x70a1a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70a1a9:{NFSU2_TR(0x70a1a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B70a1ac:{NFSU2_TR(0x70a1ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a1af:{NFSU2_TR(0x70a1af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B70a1b2:{NFSU2_TR(0x70a1b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B70a1b5:{NFSU2_TR(0x70a1b5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B70a1b7:{NFSU2_TR(0x70a1b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70a1ba:{NFSU2_TR(0x70a1ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B70a1bd:{NFSU2_TR(0x70a1bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70a1c0:{NFSU2_TR(0x70a1c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B70a1c3:{NFSU2_TR(0x70a1c3);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+24)),r1(U+0));
}
B70a1c5:{NFSU2_TR(0x70a1c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70a1c8:{NFSU2_TR(0x70a1c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B70a1cb:{NFSU2_TR(0x70a1cb);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B70a1cd:{NFSU2_TR(0x70a1cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70a1d0:{NFSU2_TR(0x70a1d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B70a1d3:{NFSU2_TR(0x70a1d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70a1d6:{NFSU2_TR(0x70a1d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B70a1d9:{NFSU2_TR(0x70a1d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B70a1dc:{NFSU2_TR(0x70a1dc);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B70a1de:{NFSU2_TR(0x70a1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70a1e1:{NFSU2_TR(0x70a1e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70a1e4:{NFSU2_TR(0x70a1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B70a1e7:{NFSU2_TR(0x70a1e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B70a1ea:{NFSU2_TR(0x70a1ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B70a1ed:{NFSU2_TR(0x70a1ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B70a1f0:{NFSU2_TR(0x70a1f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70a1f3:{NFSU2_TR(0x70a1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B70a1f6:{NFSU2_TR(0x70a1f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B70a1f9:{NFSU2_TR(0x70a1f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70a1fc:{NFSU2_TR(0x70a1fc);
{goto L70a235;}
}
B70a1fe:L70a1fe:{c.instructions+=1;NFSU2_TR(0x70a1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a201:L70a201:{c.instructions+=16;NFSU2_TR(0x70a201);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a204:{NFSU2_TR(0x70a204);
__builtin_memmove((R+28),(R+24),4);
}
B70a206:{NFSU2_TR(0x70a206);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B70a208:{NFSU2_TR(0x70a208);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B70a20b:{NFSU2_TR(0x70a20b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B70a20e:{NFSU2_TR(0x70a20e);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B70a212:{NFSU2_TR(0x70a212);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a215:{NFSU2_TR(0x70a215);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a218:{NFSU2_TR(0x70a218);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+0))));
}
B70a21b:{NFSU2_TR(0x70a21b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B70a21e:{NFSU2_TR(0x70a21e);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B70a225:{NFSU2_TR(0x70a225);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B70a227:{NFSU2_TR(0x70a227);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70a22a:{NFSU2_TR(0x70a22a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B70a230:{NFSU2_TR(0x70a230);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70a233:{NFSU2_TR(0x70a233);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B70a235:L70a235:{c.instructions+=6;NFSU2_TR(0x70a235);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a238:{NFSU2_TR(0x70a238);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a23a:{NFSU2_TR(0x70a23a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B70a23c:{NFSU2_TR(0x70a23c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70a23f:{NFSU2_TR(0x70a23f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70a240:{NFSU2_TR(0x70a240);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a02bu);}goto L70a02b;}}
}
B70a246:L70a246:{c.instructions+=13;NFSU2_TR(0x70a246);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a24a:{NFSU2_TR(0x70a24a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a24d:{NFSU2_TR(0x70a24d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a250:{NFSU2_TR(0x70a250);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a253:{NFSU2_TR(0x70a253);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a256:{NFSU2_TR(0x70a256);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a259:{NFSU2_TR(0x70a259);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a25c:{NFSU2_TR(0x70a25c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a25f:{NFSU2_TR(0x70a25f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a262:{NFSU2_TR(0x70a262);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a265:{NFSU2_TR(0x70a265);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a269:{NFSU2_TR(0x70a269);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
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
B70a26f:{NFSU2_TR(0x70a26f);
if(r1(R+512)){TAIL_STATIC(0x709d3au,709);}
}
B70a275:L70a275:{c.instructions+=5;NFSU2_TR(0x70a275);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70a276:{NFSU2_TR(0x70a276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70a277:{NFSU2_TR(0x70a277);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70a278:{NFSU2_TR(0x70a278);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70a279:{NFSU2_TR(0x70a279);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70a27a:L70a27a:{c.instructions+=12;NFSU2_TR(0x70a27a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a27b:{NFSU2_TR(0x70a27b);
__builtin_memmove((R+20),(R+16),4);
}
B70a27d:{NFSU2_TR(0x70a27d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B70a280:{NFSU2_TR(0x70a280);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a281:{NFSU2_TR(0x70a281);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a282:{NFSU2_TR(0x70a282);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70a285:{NFSU2_TR(0x70a285);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70a287:{NFSU2_TR(0x70a287);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70a289:{NFSU2_TR(0x70a289);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70a28c:{NFSU2_TR(0x70a28c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a28d:{NFSU2_TR(0x70a28d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a290:{NFSU2_TR(0x70a290);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L70a2a0;}}
}
B70a292:L70a292:{c.instructions+=3;NFSU2_TR(0x70a292);
__builtin_memmove((R+0),gp(0x8b9eec),4);
}
B70a297:{NFSU2_TR(0x70a297);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x708f87ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70a29e:{NFSU2_TR(0x70a29e);
{goto L70a2ac;}
}
B70a2a0:L70a2a0:{c.instructions+=2;NFSU2_TR(0x70a2a0);
__builtin_memmove((R+0),gp(0x8b9ee0),4);
}
B70a2a5:{NFSU2_TR(0x70a2a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x708621ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70a2ac:L70a2ac:{c.instructions+=6;NFSU2_TR(0x70a2ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a2b2:{NFSU2_TR(0x70a2b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70a2b5:{NFSU2_TR(0x70a2b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a2b8:{NFSU2_TR(0x70a2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a2bb:{NFSU2_TR(0x70a2bb);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70a2bd:{NFSU2_TR(0x70a2bd);
if(r1(R+518)){{goto L70a2f9;}}
}
B70a2bf:L70a2bf:{c.instructions+=5;NFSU2_TR(0x70a2bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a2c5:{NFSU2_TR(0x70a2c5);
w4(R+28,shr<u32>(r4(R+28),u64(u32(0x1ull))));
}
B70a2c7:{NFSU2_TR(0x70a2c7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70a2c8:{NFSU2_TR(0x70a2c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a2ce:{NFSU2_TR(0x70a2ce);
if(r1(R+518)){{goto L70a2e9;}}
}
B70a2d0:L70a2d0:{c.instructions+=6;NFSU2_TR(0x70a2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a2d6:{NFSU2_TR(0x70a2d6);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70a2d8:{NFSU2_TR(0x70a2d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B70a2de:{NFSU2_TR(0x70a2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a2e1:{NFSU2_TR(0x70a2e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a2e7:{NFSU2_TR(0x70a2e7);
{goto L70a30b;}
}
B70a2e9:L70a2e9:{c.instructions+=5;NFSU2_TR(0x70a2e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a2ef:{NFSU2_TR(0x70a2ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a2f2:{NFSU2_TR(0x70a2f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a2f5:{NFSU2_TR(0x70a2f5);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70a2f7:{NFSU2_TR(0x70a2f7);
{goto L70a30b;}
}
B70a2f9:L70a2f9:{c.instructions+=4;NFSU2_TR(0x70a2f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a2ff:{NFSU2_TR(0x70a2ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a305:{NFSU2_TR(0x70a305);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a308:{NFSU2_TR(0x70a308);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a30b:L70a30b:{c.instructions+=8;NFSU2_TR(0x70a30b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B70a30d:{NFSU2_TR(0x70a30d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a310:{NFSU2_TR(0x70a310);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70a313:{NFSU2_TR(0x70a313);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B70a315:{NFSU2_TR(0x70a315);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a318:{NFSU2_TR(0x70a318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B70a31a:{NFSU2_TR(0x70a31a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70a31d:{NFSU2_TR(0x70a31d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L70a33d;}}
}
B70a31f:L70a31f:{c.instructions+=2;NFSU2_TR(0x70a31f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70a323:{NFSU2_TR(0x70a323);
if(r1(R+518)){{goto L70a335;}}
}
B70a325:L70a325:{c.instructions+=1;NFSU2_TR(0x70a325);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70a346;}}
}
B70a327:L70a327:{c.instructions+=2;NFSU2_TR(0x70a327);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70a32b:{NFSU2_TR(0x70a32b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L70a346;}}
}
B70a32d:L70a32d:{c.instructions+=2;NFSU2_TR(0x70a32d);
__builtin_memmove((R+4),gp(0x8b9c48),4);
}
B70a333:{NFSU2_TR(0x70a333);
{goto L70a343;}
}
B70a335:L70a335:{c.instructions+=2;NFSU2_TR(0x70a335);
__builtin_memmove((R+4),gp(0x8b9c50),4);
}
B70a33b:{NFSU2_TR(0x70a33b);
{goto L70a343;}
}
B70a33d:L70a33d:{c.instructions+=1;NFSU2_TR(0x70a33d);
__builtin_memmove((R+4),gp(0x8b9c44),4);
}
B70a343:L70a343:{c.instructions+=1;NFSU2_TR(0x70a343);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a346:L70a346:{c.instructions+=3;NFSU2_TR(0x70a346);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a349:{NFSU2_TR(0x70a349);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a34c:{NFSU2_TR(0x70a34c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70a353:L70a353:{c.instructions+=2;NFSU2_TR(0x70a353);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70a355:{NFSU2_TR(0x70a355);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70a37e;}}
}
B70a357:L70a357:{c.instructions+=7;NFSU2_TR(0x70a357);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a35a:{NFSU2_TR(0x70a35a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a35d:{NFSU2_TR(0x70a35d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a360:{NFSU2_TR(0x70a360);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B70a363:{NFSU2_TR(0x70a363);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a366:{NFSU2_TR(0x70a366);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a369:{NFSU2_TR(0x70a369);
{goto L70a36e;}
}
B70a36b:L70a36b:{c.instructions+=1;NFSU2_TR(0x70a36b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a36e:L70a36e:{c.instructions+=6;NFSU2_TR(0x70a36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70a371:{NFSU2_TR(0x70a371);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B70a374:{NFSU2_TR(0x70a374);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a377:{NFSU2_TR(0x70a377);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70a37a:{NFSU2_TR(0x70a37a);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+8)),r1(U+0));
}
B70a37c:{NFSU2_TR(0x70a37c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a36bu);}goto L70a36b;}}
}
B70a37e:L70a37e:{c.instructions+=3;NFSU2_TR(0x70a37e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a381:{NFSU2_TR(0x70a381);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70a384:{NFSU2_TR(0x70a384);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a353u);}goto L70a353;}}
}
B70a386:L70a386:{c.instructions+=2;NFSU2_TR(0x70a386);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70a389:{NFSU2_TR(0x70a389);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70a3b7;}}
}
B70a38b:L70a38b:{c.instructions+=2;NFSU2_TR(0x70a38b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70a38c:{NFSU2_TR(0x70a38c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a38f:L70a38f:{c.instructions+=12;NFSU2_TR(0x70a38f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a392:{NFSU2_TR(0x70a392);
__builtin_memmove((R+0),(R+12),4);
}
B70a394:{NFSU2_TR(0x70a394);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a397:{NFSU2_TR(0x70a397);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70a39a:{NFSU2_TR(0x70a39a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a39d:{NFSU2_TR(0x70a39d);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
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
B70a3a0:{NFSU2_TR(0x70a3a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a3a1:{NFSU2_TR(0x70a3a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a3a2:{NFSU2_TR(0x70a3a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a3a5:{NFSU2_TR(0x70a3a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a3a8:{NFSU2_TR(0x70a3a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a3a9:{NFSU2_TR(0x70a3a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a3acull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B70a3ac:L70a3ac:{c.instructions+=4;NFSU2_TR(0x70a3ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a3af:{NFSU2_TR(0x70a3af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B70a3b2:{NFSU2_TR(0x70a3b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70a3b5:{NFSU2_TR(0x70a3b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a38fu);}goto L70a38f;}}
}
B70a3b7:L70a3b7:{c.instructions+=4;NFSU2_TR(0x70a3b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a3ba:{NFSU2_TR(0x70a3ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70a3bd:{NFSU2_TR(0x70a3bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a3c0:{NFSU2_TR(0x70a3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70a3c7:L70a3c7:{c.instructions+=2;NFSU2_TR(0x70a3c7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70a3c9:{NFSU2_TR(0x70a3c9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70a3e2;}}
}
B70a3cb:L70a3cb:{c.instructions+=4;NFSU2_TR(0x70a3cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a3ce:{NFSU2_TR(0x70a3ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a3d1:{NFSU2_TR(0x70a3d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B70a3d4:{NFSU2_TR(0x70a3d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a3d7:L70a3d7:{c.instructions+=5;NFSU2_TR(0x70a3d7);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B70a3da:{NFSU2_TR(0x70a3da);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B70a3dc:{NFSU2_TR(0x70a3dc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70a3dd:{NFSU2_TR(0x70a3dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70a3e0:{NFSU2_TR(0x70a3e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a3d7u);}goto L70a3d7;}}
}
B70a3e2:L70a3e2:{c.instructions+=3;NFSU2_TR(0x70a3e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+12)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a3e5:{NFSU2_TR(0x70a3e5);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
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
B70a3e8:{NFSU2_TR(0x70a3e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a3c7u);}goto L70a3c7;}}
}
B70a3ea:L70a3ea:{c.instructions+=8;NFSU2_TR(0x70a3ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a3ed:{NFSU2_TR(0x70a3ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a3f0:{NFSU2_TR(0x70a3f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a3f1:{NFSU2_TR(0x70a3f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a3f2:{NFSU2_TR(0x70a3f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a3f5:{NFSU2_TR(0x70a3f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a3f8:{NFSU2_TR(0x70a3f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a3f9:{NFSU2_TR(0x70a3f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a3fcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B70a3fc:L70a3fc:{c.instructions+=6;NFSU2_TR(0x70a3fc);
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
B70a3ff:{NFSU2_TR(0x70a3ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70a400:{NFSU2_TR(0x70a400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70a401:{NFSU2_TR(0x70a401);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70a402:{NFSU2_TR(0x70a402);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70a403:{NFSU2_TR(0x70a403);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70a404:L70a404:{c.instructions+=15;NFSU2_TR(0x70a404);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a405:{NFSU2_TR(0x70a405);
__builtin_memmove((R+20),(R+16),4);
}
B70a407:{NFSU2_TR(0x70a407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B70a40a:{NFSU2_TR(0x70a40a);
__builtin_memmove((R+0),gp(0x8b9f0c),4);
}
B70a40f:{NFSU2_TR(0x70a40f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70a412:{NFSU2_TR(0x70a412);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a413:{NFSU2_TR(0x70a413);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a416:{NFSU2_TR(0x70a416);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a419:{NFSU2_TR(0x70a419);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a41c:{NFSU2_TR(0x70a41c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a41d:{NFSU2_TR(0x70a41d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B70a41f:{NFSU2_TR(0x70a41f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a420:{NFSU2_TR(0x70a420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a423:{NFSU2_TR(0x70a423);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70a42a:{NFSU2_TR(0x70a42a);
{goto L70a42f;}
}
B70a42c:L70a42c:{c.instructions+=1;NFSU2_TR(0x70a42c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70a42f:L70a42f:{c.instructions+=5;NFSU2_TR(0x70a42f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B70a432:{NFSU2_TR(0x70a432);
__builtin_memmove((R+4),(R+12),4);
}
B70a434:{NFSU2_TR(0x70a434);
__builtin_memmove((R+8),(R+4),4);
}
B70a436:{NFSU2_TR(0x70a436);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B70a439:{NFSU2_TR(0x70a439);
__builtin_memmove((R+28),(R+0),4);
}
B70a43b:L70a43b:{c.instructions+=1;NFSU2_TR(0x70a43b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L70a43d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a43bu);}goto L70a43b;}
}
B70a43d:L70a43d:{c.instructions+=4;NFSU2_TR(0x70a43d);
__builtin_memmove((R+4),(R+8),4);
}
B70a43f:{NFSU2_TR(0x70a43f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B70a442:{NFSU2_TR(0x70a442);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70a444:{NFSU2_TR(0x70a444);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70a447:L70a447:{c.instructions+=1;NFSU2_TR(0x70a447);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L70a449;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a447u);}goto L70a447;}
}
B70a449:L70a449:{c.instructions+=1;NFSU2_TR(0x70a449);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a42cu);}goto L70a42c;}}
}
B70a44b:L70a44b:{c.instructions+=3;NFSU2_TR(0x70a44b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a44e:{NFSU2_TR(0x70a44e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70a451:{NFSU2_TR(0x70a451);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70a483;}}
}
B70a453:L70a453:{c.instructions+=3;NFSU2_TR(0x70a453);
__builtin_memmove((R+24),(R+12),4);
}
B70a455:{NFSU2_TR(0x70a455);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B70a458:{NFSU2_TR(0x70a458);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B70a45b:L70a45b:{c.instructions+=10;NFSU2_TR(0x70a45b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a45e:{NFSU2_TR(0x70a45e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a461:{NFSU2_TR(0x70a461);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a464:{NFSU2_TR(0x70a464);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+24)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+24)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
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
B70a467:{NFSU2_TR(0x70a467);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a46a:{NFSU2_TR(0x70a46a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a46b:{NFSU2_TR(0x70a46b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a46e:{NFSU2_TR(0x70a46e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a471:{NFSU2_TR(0x70a471);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a474:{NFSU2_TR(0x70a474);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a477ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B70a477:L70a477:{c.instructions+=5;NFSU2_TR(0x70a477);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a47a:{NFSU2_TR(0x70a47a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a47d:{NFSU2_TR(0x70a47d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B70a480:{NFSU2_TR(0x70a480);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B70a481:{NFSU2_TR(0x70a481);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a45bu);}goto L70a45b;}}
}
B70a483:L70a483:{c.instructions+=7;NFSU2_TR(0x70a483);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a486:{NFSU2_TR(0x70a486);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70a489:{NFSU2_TR(0x70a489);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B70a48b:{NFSU2_TR(0x70a48b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70a48e:{NFSU2_TR(0x70a48e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a491:{NFSU2_TR(0x70a491);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70a498:{NFSU2_TR(0x70a498);
{goto L70a49d;}
}
B70a49a:L70a49a:{c.instructions+=1;NFSU2_TR(0x70a49a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70a49d:L70a49d:{c.instructions+=5;NFSU2_TR(0x70a49d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B70a4a0:{NFSU2_TR(0x70a4a0);
__builtin_memmove((R+4),(R+12),4);
}
B70a4a2:{NFSU2_TR(0x70a4a2);
__builtin_memmove((R+8),(R+4),4);
}
B70a4a4:{NFSU2_TR(0x70a4a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B70a4a7:{NFSU2_TR(0x70a4a7);
__builtin_memmove((R+28),(R+0),4);
}
B70a4a9:L70a4a9:{c.instructions+=1;NFSU2_TR(0x70a4a9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L70a4ab;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a4a9u);}goto L70a4a9;}
}
B70a4ab:L70a4ab:{c.instructions+=4;NFSU2_TR(0x70a4ab);
__builtin_memmove((R+4),(R+8),4);
}
B70a4ad:{NFSU2_TR(0x70a4ad);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B70a4b0:{NFSU2_TR(0x70a4b0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70a4b2:{NFSU2_TR(0x70a4b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70a4b5:L70a4b5:{c.instructions+=1;NFSU2_TR(0x70a4b5);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L70a4b7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a4b5u);}goto L70a4b5;}
}
B70a4b7:L70a4b7:{c.instructions+=1;NFSU2_TR(0x70a4b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a49au);}goto L70a49a;}}
}
B70a4b9:L70a4b9:{c.instructions+=8;NFSU2_TR(0x70a4b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a4bc:{NFSU2_TR(0x70a4bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a4bf:{NFSU2_TR(0x70a4bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a4c2:{NFSU2_TR(0x70a4c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a4c3:{NFSU2_TR(0x70a4c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a4c6:{NFSU2_TR(0x70a4c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a4c9:{NFSU2_TR(0x70a4c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a4cc:{NFSU2_TR(0x70a4cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a4d1ull));
TAIL_STATIC(0x709282u,709);
}
B70a4d1:L70a4d1:{c.instructions+=6;NFSU2_TR(0x70a4d1);
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
B70a4d4:{NFSU2_TR(0x70a4d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70a4d5:{NFSU2_TR(0x70a4d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70a4d6:{NFSU2_TR(0x70a4d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70a4d7:{NFSU2_TR(0x70a4d7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70a4d8:{NFSU2_TR(0x70a4d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70a4d9:L70a4d9:{c.instructions+=11;NFSU2_TR(0x70a4d9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a4da:{NFSU2_TR(0x70a4da);
__builtin_memmove((R+20),(R+16),4);
}
B70a4dc:{NFSU2_TR(0x70a4dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a4dd:{NFSU2_TR(0x70a4dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70a4e0:{NFSU2_TR(0x70a4e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a4e6:{NFSU2_TR(0x70a4e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70a4e9:{NFSU2_TR(0x70a4e9);
__builtin_memmove((R+8),(R+4),4);
}
B70a4eb:{NFSU2_TR(0x70a4eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B70a4ee:{NFSU2_TR(0x70a4ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a4ef:{NFSU2_TR(0x70a4ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a4f2:{NFSU2_TR(0x70a4f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70a4f4:L70a4f4:{c.instructions+=1;NFSU2_TR(0x70a4f4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L70a4f6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a4f4u);}goto L70a4f4;}
}
B70a4f6:L70a4f6:{c.instructions+=2;NFSU2_TR(0x70a4f6);
__builtin_memmove((R+4),(R+8),4);
}
B70a4f8:{NFSU2_TR(0x70a4f8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B70a4fb:L70a4fb:{c.instructions+=1;NFSU2_TR(0x70a4fb);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L70a4fd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a4fbu);}goto L70a4fb;}
}
B70a4fd:L70a4fd:{c.instructions+=2;NFSU2_TR(0x70a4fd);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x2ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B70a500:{NFSU2_TR(0x70a500);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L70a509;}}
}
B70a502:L70a502:{c.instructions+=2;NFSU2_TR(0x70a502);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a503:{NFSU2_TR(0x70a503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a508ull));
TAIL_STATIC(0x7085f3u,708);
}
B70a508:L70a508:{c.instructions+=1;NFSU2_TR(0x70a508);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70a509:L70a509:{c.instructions+=2;NFSU2_TR(0x70a509);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x5ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B70a50c:{NFSU2_TR(0x70a50c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L70a5af;}}
}
B70a512:L70a512:{c.instructions+=15;NFSU2_TR(0x70a512);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a515:{NFSU2_TR(0x70a515);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a518:{NFSU2_TR(0x70a518);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a519:{NFSU2_TR(0x70a519);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c50),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a51f:{NFSU2_TR(0x70a51f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a522:{NFSU2_TR(0x70a522);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70a525:{NFSU2_TR(0x70a525);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a526:{NFSU2_TR(0x70a526);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70a528:{NFSU2_TR(0x70a528);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a529:{NFSU2_TR(0x70a529);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a52f:{NFSU2_TR(0x70a52f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a535:{NFSU2_TR(0x70a535);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a537:{NFSU2_TR(0x70a537);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a53d:{NFSU2_TR(0x70a53d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a53e:{NFSU2_TR(0x70a53e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a543ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a404u);}goto L70a404;}
}
B70a543:L70a543:{c.instructions+=16;NFSU2_TR(0x70a543);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c48),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a549:{NFSU2_TR(0x70a549);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a54c:{NFSU2_TR(0x70a54c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70a54f:{NFSU2_TR(0x70a54f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a550:{NFSU2_TR(0x70a550);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70a552:{NFSU2_TR(0x70a552);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a553:{NFSU2_TR(0x70a553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a559:{NFSU2_TR(0x70a559);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70a55b:{NFSU2_TR(0x70a55b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a55c:{NFSU2_TR(0x70a55c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a562:{NFSU2_TR(0x70a562);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70a564:{NFSU2_TR(0x70a564);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a565:{NFSU2_TR(0x70a565);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a567:{NFSU2_TR(0x70a567);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a56d:{NFSU2_TR(0x70a56d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a56e:{NFSU2_TR(0x70a56e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a573ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a404u);}goto L70a404;}
}
B70a573:L70a573:{c.instructions+=17;NFSU2_TR(0x70a573);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a579:{NFSU2_TR(0x70a579);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B70a57c:{NFSU2_TR(0x70a57c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c48),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a582:{NFSU2_TR(0x70a582);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70a585:{NFSU2_TR(0x70a585);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a586:{NFSU2_TR(0x70a586);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70a588:{NFSU2_TR(0x70a588);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a589:{NFSU2_TR(0x70a589);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a58f:{NFSU2_TR(0x70a58f);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70a591:{NFSU2_TR(0x70a591);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a592:{NFSU2_TR(0x70a592);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a598:{NFSU2_TR(0x70a598);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70a59a:{NFSU2_TR(0x70a59a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a59b:{NFSU2_TR(0x70a59b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a59d:{NFSU2_TR(0x70a59d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a5a3:{NFSU2_TR(0x70a5a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a5a4:{NFSU2_TR(0x70a5a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a5a9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a404u);}goto L70a404;}
}
B70a5a9:L70a5a9:{c.instructions+=3;NFSU2_TR(0x70a5a9);
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
B70a5ac:{NFSU2_TR(0x70a5ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70a5ad:{NFSU2_TR(0x70a5ad);
{goto L70a5dc;}
}
B70a5af:L70a5af:{c.instructions+=5;NFSU2_TR(0x70a5af);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a5b1:{NFSU2_TR(0x70a5b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a5b4:{NFSU2_TR(0x70a5b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a5b7:{NFSU2_TR(0x70a5b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a5b8:{NFSU2_TR(0x70a5b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a5bdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a27au);}goto L70a27a;}
}
B70a5bd:L70a5bd:{c.instructions+=5;NFSU2_TR(0x70a5bd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a5bf:{NFSU2_TR(0x70a5bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a5c2:{NFSU2_TR(0x70a5c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a5c5:{NFSU2_TR(0x70a5c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a5c6:{NFSU2_TR(0x70a5c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a5cbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a27au);}goto L70a27a;}
}
B70a5cb:L70a5cb:{c.instructions+=5;NFSU2_TR(0x70a5cb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a5cd:{NFSU2_TR(0x70a5cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a5d0:{NFSU2_TR(0x70a5d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a5d3:{NFSU2_TR(0x70a5d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a5d4:{NFSU2_TR(0x70a5d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a5d9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a27au);}goto L70a27a;}
}
B70a5d9:L70a5d9:{c.instructions+=1;NFSU2_TR(0x70a5d9);
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
B70a5dc:L70a5dc:{c.instructions+=4;NFSU2_TR(0x70a5dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70a5dd:{NFSU2_TR(0x70a5dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70a5de:{NFSU2_TR(0x70a5de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70a5df:{NFSU2_TR(0x70a5df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70a5e0:L70a5e0:{c.instructions+=9;NFSU2_TR(0x70a5e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a5e1:{NFSU2_TR(0x70a5e1);
__builtin_memmove((R+20),(R+16),4);
}
B70a5e3:{NFSU2_TR(0x70a5e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a5e4:{NFSU2_TR(0x70a5e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a5e5:{NFSU2_TR(0x70a5e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a5e6:{NFSU2_TR(0x70a5e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70a5e9:{NFSU2_TR(0x70a5e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a5ea:{NFSU2_TR(0x70a5ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a5eb:{NFSU2_TR(0x70a5eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a5f0ull));
TAIL_STATIC(0x7085f3u,708);
}
B70a5f0:L70a5f0:{c.instructions+=8;NFSU2_TR(0x70a5f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a5f6:{NFSU2_TR(0x70a5f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a5f9:{NFSU2_TR(0x70a5f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a5fc:{NFSU2_TR(0x70a5fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70a5ff:{NFSU2_TR(0x70a5ff);
__builtin_memmove((R+8),(R+4),4);
}
B70a601:{NFSU2_TR(0x70a601);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70a603:{NFSU2_TR(0x70a603);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B70a606:{NFSU2_TR(0x70a606);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a609:L70a609:{c.instructions+=1;NFSU2_TR(0x70a609);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L70a60b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a609u);}goto L70a609;}
}
B70a60b:L70a60b:{c.instructions+=2;NFSU2_TR(0x70a60b);
__builtin_memmove((R+4),(R+8),4);
}
B70a60d:{NFSU2_TR(0x70a60d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B70a610:L70a610:{c.instructions+=1;NFSU2_TR(0x70a610);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L70a612;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a610u);}goto L70a610;}
}
B70a612:L70a612:{c.instructions+=17;NFSU2_TR(0x70a612);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c50),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a618:{NFSU2_TR(0x70a618);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a61b:{NFSU2_TR(0x70a61b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a61e:{NFSU2_TR(0x70a61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70a621:{NFSU2_TR(0x70a621);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a622:{NFSU2_TR(0x70a622);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70a624:{NFSU2_TR(0x70a624);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a625:{NFSU2_TR(0x70a625);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a62b:{NFSU2_TR(0x70a62b);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70a62d:{NFSU2_TR(0x70a62d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a62e:{NFSU2_TR(0x70a62e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a634:{NFSU2_TR(0x70a634);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a63a:{NFSU2_TR(0x70a63a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a63c:{NFSU2_TR(0x70a63c);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70a63e:{NFSU2_TR(0x70a63e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a63f:{NFSU2_TR(0x70a63f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a640:{NFSU2_TR(0x70a640);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a645ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a404u);}goto L70a404;}
}
B70a645:L70a645:{c.instructions+=24;NFSU2_TR(0x70a645);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a64b:{NFSU2_TR(0x70a64b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a651:{NFSU2_TR(0x70a651);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70a654:{NFSU2_TR(0x70a654);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B70a657:{NFSU2_TR(0x70a657);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B70a659:{NFSU2_TR(0x70a659);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70a65c:{NFSU2_TR(0x70a65c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a65f:{NFSU2_TR(0x70a65f);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c50),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a665:{NFSU2_TR(0x70a665);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a66b:{NFSU2_TR(0x70a66b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B70a66d:{NFSU2_TR(0x70a66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a670:{NFSU2_TR(0x70a670);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B70a672:{NFSU2_TR(0x70a672);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a673:{NFSU2_TR(0x70a673);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70a676:{NFSU2_TR(0x70a676);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B70a678:{NFSU2_TR(0x70a678);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a679:{NFSU2_TR(0x70a679);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70a67b:{NFSU2_TR(0x70a67b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a67c:{NFSU2_TR(0x70a67c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a682:{NFSU2_TR(0x70a682);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70a685:{NFSU2_TR(0x70a685);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a687:{NFSU2_TR(0x70a687);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a688:{NFSU2_TR(0x70a688);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a689:{NFSU2_TR(0x70a689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a68eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a404u);}goto L70a404;}
}
B70a68e:L70a68e:{c.instructions+=19;NFSU2_TR(0x70a68e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a691:{NFSU2_TR(0x70a691);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B70a694:{NFSU2_TR(0x70a694);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a697:{NFSU2_TR(0x70a697);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c48),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a69d:{NFSU2_TR(0x70a69d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a6a0:{NFSU2_TR(0x70a6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70a6a3:{NFSU2_TR(0x70a6a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a6a4:{NFSU2_TR(0x70a6a4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70a6a6:{NFSU2_TR(0x70a6a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a6a7:{NFSU2_TR(0x70a6a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a6ad:{NFSU2_TR(0x70a6ad);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70a6af:{NFSU2_TR(0x70a6af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a6b0:{NFSU2_TR(0x70a6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a6b6:{NFSU2_TR(0x70a6b6);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70a6b8:{NFSU2_TR(0x70a6b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a6b9:{NFSU2_TR(0x70a6b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a6bf:{NFSU2_TR(0x70a6bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a6c5:{NFSU2_TR(0x70a6c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a6c6:{NFSU2_TR(0x70a6c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a6cbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a404u);}goto L70a404;}
}
B70a6cb:L70a6cb:{c.instructions+=18;NFSU2_TR(0x70a6cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a6d1:{NFSU2_TR(0x70a6d1);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c48),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a6d7:{NFSU2_TR(0x70a6d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70a6da:{NFSU2_TR(0x70a6da);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70a6dc:{NFSU2_TR(0x70a6dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a6dd:{NFSU2_TR(0x70a6dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a6de:{NFSU2_TR(0x70a6de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a6e4:{NFSU2_TR(0x70a6e4);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70a6e6:{NFSU2_TR(0x70a6e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a6e7:{NFSU2_TR(0x70a6e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a6ed:{NFSU2_TR(0x70a6ed);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70a6ef:{NFSU2_TR(0x70a6ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a6f0:{NFSU2_TR(0x70a6f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a6f6:{NFSU2_TR(0x70a6f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B70a6fc:{NFSU2_TR(0x70a6fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a6fd:{NFSU2_TR(0x70a6fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a703:{NFSU2_TR(0x70a703);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a704:{NFSU2_TR(0x70a704);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a709ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a404u);}goto L70a404;}
}
B70a709:L70a709:{c.instructions+=6;NFSU2_TR(0x70a709);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70a70c:{NFSU2_TR(0x70a70c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70a70d:{NFSU2_TR(0x70a70d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70a70e:{NFSU2_TR(0x70a70e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70a70f:{NFSU2_TR(0x70a70f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70a710:{NFSU2_TR(0x70a710);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70a711:L70a711:{c.instructions+=14;NFSU2_TR(0x70a711);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a712:{NFSU2_TR(0x70a712);
__builtin_memmove((R+20),(R+16),4);
}
B70a714:{NFSU2_TR(0x70a714);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a715:{NFSU2_TR(0x70a715);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a716:{NFSU2_TR(0x70a716);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a719:{NFSU2_TR(0x70a719);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a71a:{NFSU2_TR(0x70a71a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70a71d:{NFSU2_TR(0x70a71d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a71e:{NFSU2_TR(0x70a71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a721:{NFSU2_TR(0x70a721);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B70a723:{NFSU2_TR(0x70a723);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a726:{NFSU2_TR(0x70a726);
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
B70a728:{NFSU2_TR(0x70a728);
w4(R+4,u32(0x200ull));
}
B70a72d:{NFSU2_TR(0x70a72d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x400ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70a733:L70a733:{c.instructions+=1;NFSU2_TR(0x70a733);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L70a735;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a733u);}goto L70a733;}
}
B70a735:L70a735:{c.instructions+=1;NFSU2_TR(0x70a735);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70a780;}}
}
B70a737:L70a737:{c.instructions+=11;NFSU2_TR(0x70a737);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a73a:{NFSU2_TR(0x70a73a);
__builtin_memmove((R+28),(R+24),4);
}
B70a73c:{NFSU2_TR(0x70a73c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B70a73f:{NFSU2_TR(0x70a73f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70a742:{NFSU2_TR(0x70a742);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a745:{NFSU2_TR(0x70a745);
__builtin_memmove((R+0),(R+24),4);
}
B70a747:{NFSU2_TR(0x70a747);
__builtin_memmove((R+4),(R+8),4);
}
B70a749:{NFSU2_TR(0x70a749);
w4(R+0,u32(0-u32(r4(R+0))));
}
B70a74b:{NFSU2_TR(0x70a74b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a74e:{NFSU2_TR(0x70a74e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B70a750:{NFSU2_TR(0x70a750);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a751:L70a751:{c.instructions+=17;NFSU2_TR(0x70a751);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a754:{NFSU2_TR(0x70a754);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a757:{NFSU2_TR(0x70a757);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a75b:{NFSU2_TR(0x70a75b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B70a75d:{NFSU2_TR(0x70a75d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B70a75f:{NFSU2_TR(0x70a75f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a762:{NFSU2_TR(0x70a762);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B70a764:{NFSU2_TR(0x70a764);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a767:{NFSU2_TR(0x70a767);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B70a76a:{NFSU2_TR(0x70a76a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a76d:{NFSU2_TR(0x70a76d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a771:{NFSU2_TR(0x70a771);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70a772:{NFSU2_TR(0x70a772);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
}
B70a775:{NFSU2_TR(0x70a775);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70a778:{NFSU2_TR(0x70a778);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B70a77b:{NFSU2_TR(0x70a77b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B70a77d:{NFSU2_TR(0x70a77d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a751u);}goto L70a751;}}
}
B70a77f:L70a77f:{c.instructions+=1;NFSU2_TR(0x70a77f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70a780:L70a780:{c.instructions+=5;NFSU2_TR(0x70a780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70a781:{NFSU2_TR(0x70a781);
__builtin_memmove((R+0),(R+8),4);
}
B70a783:{NFSU2_TR(0x70a783);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70a784:{NFSU2_TR(0x70a784);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70a785:{NFSU2_TR(0x70a785);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70a786:L70a786:{c.instructions+=11;NFSU2_TR(0x70a786);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a787:{NFSU2_TR(0x70a787);
__builtin_memmove((R+20),(R+16),4);
}
B70a789:{NFSU2_TR(0x70a789);
__builtin_memmove((R+4),gp(0x8b9c40),4);
}
B70a78f:{NFSU2_TR(0x70a78f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a790:{NFSU2_TR(0x70a790);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70a793:{NFSU2_TR(0x70a793);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x2ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B70a796:{NFSU2_TR(0x70a796);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a799:{NFSU2_TR(0x70a799);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B70a79c:{NFSU2_TR(0x70a79c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a79d:{NFSU2_TR(0x70a79d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a79e:{NFSU2_TR(0x70a79e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L70a7a7;}}
}
B70a7a0:L70a7a0:{c.instructions+=1;NFSU2_TR(0x70a7a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a7a5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a711u);}goto L70a711;}
}
B70a7a5:L70a7a5:{c.instructions+=1;NFSU2_TR(0x70a7a5);
{goto L70a7ad;}
}
B70a7a7:L70a7a7:{c.instructions+=1;NFSU2_TR(0x70a7a7);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ec0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a7adull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70a7ad:L70a7ad:{c.instructions+=6;NFSU2_TR(0x70a7ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70a7ae:{NFSU2_TR(0x70a7ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70a7af:{NFSU2_TR(0x70a7af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a7b2:{NFSU2_TR(0x70a7b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70a7b3:{NFSU2_TR(0x70a7b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70a7b4:{NFSU2_TR(0x70a7b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70a7b5:L70a7b5:{c.instructions+=8;NFSU2_TR(0x70a7b5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a7b6:{NFSU2_TR(0x70a7b6);
__builtin_memmove((R+20),(R+16),4);
}
B70a7b8:{NFSU2_TR(0x70a7b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a7bb:{NFSU2_TR(0x70a7bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a7bc:{NFSU2_TR(0x70a7bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a7bd:{NFSU2_TR(0x70a7bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a7be:{NFSU2_TR(0x70a7be);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a7c0:{NFSU2_TR(0x70a7c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70a7c1:L70a7c1:{c.instructions+=20;NFSU2_TR(0x70a7c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70a7c5:{NFSU2_TR(0x70a7c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B70a7c9:{NFSU2_TR(0x70a7c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70a7cd:{NFSU2_TR(0x70a7cd);
__builtin_memmove((R+8),(R+4),4);
}
B70a7cf:{NFSU2_TR(0x70a7cf);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B70a7d1:{NFSU2_TR(0x70a7d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70a7d4:{NFSU2_TR(0x70a7d4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B70a7d6:{NFSU2_TR(0x70a7d6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+28,u32(r1(U+0)));
}
B70a7d9:{NFSU2_TR(0x70a7d9);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B70a7dd:{NFSU2_TR(0x70a7dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a7e0:{NFSU2_TR(0x70a7e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B70a7e3:{NFSU2_TR(0x70a7e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B70a7e6:{NFSU2_TR(0x70a7e6);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B70a7ed:{NFSU2_TR(0x70a7ed);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B70a7ef:{NFSU2_TR(0x70a7ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70a7f2:{NFSU2_TR(0x70a7f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B70a7f8:{NFSU2_TR(0x70a7f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70a7fb:{NFSU2_TR(0x70a7fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B70a7fe:{NFSU2_TR(0x70a7fe);
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
B70a7ff:{NFSU2_TR(0x70a7ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a7c1u);}goto L70a7c1;}}
}
B70a801:L70a801:{c.instructions+=5;NFSU2_TR(0x70a801);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70a802:{NFSU2_TR(0x70a802);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70a803:{NFSU2_TR(0x70a803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70a804:{NFSU2_TR(0x70a804);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70a805:{NFSU2_TR(0x70a805);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70a806:L70a806:{c.instructions+=15;NFSU2_TR(0x70a806);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a807:{NFSU2_TR(0x70a807);
__builtin_memmove((R+20),(R+16),4);
}
B70a809:{NFSU2_TR(0x70a809);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a80a:{NFSU2_TR(0x70a80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a80d:{NFSU2_TR(0x70a80d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a80e:{NFSU2_TR(0x70a80e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a811:{NFSU2_TR(0x70a811);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a812:{NFSU2_TR(0x70a812);
__builtin_memmove((R+8),(R+4),4);
}
B70a814:{NFSU2_TR(0x70a814);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70a817:{NFSU2_TR(0x70a817);
__builtin_memmove((R+24),(R+4),4);
}
B70a819:{NFSU2_TR(0x70a819);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B70a81b:{NFSU2_TR(0x70a81b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a81c:{NFSU2_TR(0x70a81c);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B70a81e:{NFSU2_TR(0x70a81e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70a825:{NFSU2_TR(0x70a825);
{goto L70a82a;}
}
B70a827:L70a827:{c.instructions+=1;NFSU2_TR(0x70a827);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a82a:L70a82a:{c.instructions+=22;NFSU2_TR(0x70a82a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+28,u32(r1(U+0)));
}
B70a82d:{NFSU2_TR(0x70a82d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B70a830:{NFSU2_TR(0x70a830);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+12,u32(r1(U+8)));
}
B70a834:{NFSU2_TR(0x70a834);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B70a836:{NFSU2_TR(0x70a836);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70a839:{NFSU2_TR(0x70a839);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B70a83b:{NFSU2_TR(0x70a83b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+12,u32(r1(U+0)));
}
B70a83e:{NFSU2_TR(0x70a83e);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70a842:{NFSU2_TR(0x70a842);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70a845:{NFSU2_TR(0x70a845);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70a848:{NFSU2_TR(0x70a848);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B70a84b:{NFSU2_TR(0x70a84b);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B70a852:{NFSU2_TR(0x70a852);
u8 U[1];
__builtin_memmove((U+0),(R+12),1);
s1(u32(r4(R+8)),r1(U+0));
}
B70a854:{NFSU2_TR(0x70a854);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+28,u32(r1(U+0)));
}
B70a857:{NFSU2_TR(0x70a857);
w1(R+512,u8((r4(R+28))<(r4(R+0))));
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B70a859:{NFSU2_TR(0x70a859);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B70a85f:{NFSU2_TR(0x70a85f);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B70a861:{NFSU2_TR(0x70a861);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70a862:{NFSU2_TR(0x70a862);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B70a863:{NFSU2_TR(0x70a863);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B70a864:{NFSU2_TR(0x70a864);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B70a867:{NFSU2_TR(0x70a867);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a827u);}goto L70a827;}}
}
B70a869:L70a869:{c.instructions+=5;NFSU2_TR(0x70a869);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70a86a:{NFSU2_TR(0x70a86a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70a86b:{NFSU2_TR(0x70a86b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70a86c:{NFSU2_TR(0x70a86c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70a86d:{NFSU2_TR(0x70a86d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70a86e:L70a86e:{c.instructions+=12;NFSU2_TR(0x70a86e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a86f:{NFSU2_TR(0x70a86f);
__builtin_memmove((R+20),(R+16),4);
}
B70a871:{NFSU2_TR(0x70a871);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a872:{NFSU2_TR(0x70a872);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a875:{NFSU2_TR(0x70a875);
__builtin_memmove((R+4),gp(0x8b9c40),4);
}
B70a87b:{NFSU2_TR(0x70a87b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B70a87e:{NFSU2_TR(0x70a87e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a87f:{NFSU2_TR(0x70a87f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a880:{NFSU2_TR(0x70a880);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70a883:{NFSU2_TR(0x70a883);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a884:{NFSU2_TR(0x70a884);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a887:{NFSU2_TR(0x70a887);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70a88e:L70a88e:{c.instructions+=13;NFSU2_TR(0x70a88e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+28,u32(r1(U+0)));
}
B70a891:{NFSU2_TR(0x70a891);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B70a895:{NFSU2_TR(0x70a895);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70a899:{NFSU2_TR(0x70a899);
__builtin_memmove((R+0),(R+28),4);
}
B70a89b:{NFSU2_TR(0x70a89b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B70a89d:{NFSU2_TR(0x70a89d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70a8a0:{NFSU2_TR(0x70a8a0);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B70a8a2:{NFSU2_TR(0x70a8a2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70a8a6:{NFSU2_TR(0x70a8a6);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70a8aa:{NFSU2_TR(0x70a8aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70a8ad:{NFSU2_TR(0x70a8ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a8ae:{NFSU2_TR(0x70a8ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a8b1:{NFSU2_TR(0x70a8b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a8b6ull));
TAIL_STATIC(0x70b59eu,70b);
}
B70a8b6:L70a8b6:{c.instructions+=10;NFSU2_TR(0x70a8b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70a8b7:{NFSU2_TR(0x70a8b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70a8b8:{NFSU2_TR(0x70a8b8);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B70a8bf:{NFSU2_TR(0x70a8bf);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B70a8c1:{NFSU2_TR(0x70a8c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70a8c4:{NFSU2_TR(0x70a8c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B70a8ca:{NFSU2_TR(0x70a8ca);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B70a8cc:{NFSU2_TR(0x70a8cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B70a8cf:{NFSU2_TR(0x70a8cf);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B70a8d2:{NFSU2_TR(0x70a8d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a88eu);}goto L70a88e;}}
}
B70a8d4:L70a8d4:{c.instructions+=5;NFSU2_TR(0x70a8d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70a8d5:{NFSU2_TR(0x70a8d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70a8d6:{NFSU2_TR(0x70a8d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70a8d7:{NFSU2_TR(0x70a8d7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70a8d8:{NFSU2_TR(0x70a8d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70a8d9:L70a8d9:{c.instructions+=19;NFSU2_TR(0x70a8d9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a8da:{NFSU2_TR(0x70a8da);
__builtin_memmove((R+20),(R+16),4);
}
B70a8dc:{NFSU2_TR(0x70a8dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a8dd:{NFSU2_TR(0x70a8dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a8e0:{NFSU2_TR(0x70a8e0);
__builtin_memmove((R+4),gp(0x8b9c40),4);
}
B70a8e6:{NFSU2_TR(0x70a8e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B70a8e9:{NFSU2_TR(0x70a8e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a8ec:{NFSU2_TR(0x70a8ec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a8ed:{NFSU2_TR(0x70a8ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a8ee:{NFSU2_TR(0x70a8ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a8ef:{NFSU2_TR(0x70a8ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a8f2:{NFSU2_TR(0x70a8f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a8f5:{NFSU2_TR(0x70a8f5);
__builtin_memmove((R+24),(R+28),4);
}
B70a8f7:{NFSU2_TR(0x70a8f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70a8fa:{NFSU2_TR(0x70a8fa);
__builtin_memmove((R+12),(R+28),4);
}
B70a8fc:{NFSU2_TR(0x70a8fc);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B70a8fe:{NFSU2_TR(0x70a8fe);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B70a900:{NFSU2_TR(0x70a900);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70a907:{NFSU2_TR(0x70a907);
{goto L70a90c;}
}
B70a909:L70a909:{c.instructions+=1;NFSU2_TR(0x70a909);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a90c:L70a90c:{c.instructions+=12;NFSU2_TR(0x70a90c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+8,u32(r1(U+0)));
}
B70a90f:{NFSU2_TR(0x70a90f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B70a912:{NFSU2_TR(0x70a912);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B70a916:{NFSU2_TR(0x70a916);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B70a918:{NFSU2_TR(0x70a918);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70a91b:{NFSU2_TR(0x70a91b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B70a91d:{NFSU2_TR(0x70a91d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+4,u32(r1(U+0)));
}
B70a920:{NFSU2_TR(0x70a920);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70a924:{NFSU2_TR(0x70a924);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70a927:{NFSU2_TR(0x70a927);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a928:{NFSU2_TR(0x70a928);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a92b:{NFSU2_TR(0x70a92b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a930ull));
TAIL_STATIC(0x70b59eu,70b);
}
B70a930:L70a930:{c.instructions+=14;NFSU2_TR(0x70a930);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70a931:{NFSU2_TR(0x70a931);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70a932:{NFSU2_TR(0x70a932);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+4,u32(r1(U+0)));
}
B70a935:{NFSU2_TR(0x70a935);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B70a93c:{NFSU2_TR(0x70a93c);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B70a93e:{NFSU2_TR(0x70a93e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B70a941:{NFSU2_TR(0x70a941);
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B70a943:{NFSU2_TR(0x70a943);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B70a949:{NFSU2_TR(0x70a949);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B70a94b:{NFSU2_TR(0x70a94b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70a94c:{NFSU2_TR(0x70a94c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70a94d:{NFSU2_TR(0x70a94d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B70a94e:{NFSU2_TR(0x70a94e);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B70a951:{NFSU2_TR(0x70a951);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a909u);}goto L70a909;}}
}
B70a953:L70a953:{c.instructions+=5;NFSU2_TR(0x70a953);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70a954:{NFSU2_TR(0x70a954);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70a955:{NFSU2_TR(0x70a955);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70a956:{NFSU2_TR(0x70a956);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70a957:{NFSU2_TR(0x70a957);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70a958:L70a958:{c.instructions+=12;NFSU2_TR(0x70a958);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a959:{NFSU2_TR(0x70a959);
__builtin_memmove((R+20),(R+16),4);
}
B70a95b:{NFSU2_TR(0x70a95b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a95c:{NFSU2_TR(0x70a95c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a95f:{NFSU2_TR(0x70a95f);
__builtin_memmove((R+4),gp(0x8b9c40),4);
}
B70a965:{NFSU2_TR(0x70a965);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B70a968:{NFSU2_TR(0x70a968);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a969:{NFSU2_TR(0x70a969);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a96a:{NFSU2_TR(0x70a96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70a96d:{NFSU2_TR(0x70a96d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a96e:{NFSU2_TR(0x70a96e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a971:{NFSU2_TR(0x70a971);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B70a978:L70a978:{c.instructions+=13;NFSU2_TR(0x70a978);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+28,u32(r1(U+0)));
}
B70a97b:{NFSU2_TR(0x70a97b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B70a97f:{NFSU2_TR(0x70a97f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70a983:{NFSU2_TR(0x70a983);
__builtin_memmove((R+0),(R+28),4);
}
B70a985:{NFSU2_TR(0x70a985);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B70a987:{NFSU2_TR(0x70a987);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70a98a:{NFSU2_TR(0x70a98a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B70a98c:{NFSU2_TR(0x70a98c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70a990:{NFSU2_TR(0x70a990);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70a994:{NFSU2_TR(0x70a994);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70a997:{NFSU2_TR(0x70a997);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a998:{NFSU2_TR(0x70a998);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70a99b:{NFSU2_TR(0x70a99b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70a9a0ull));
TAIL_STATIC(0x70b59eu,70b);
}
B70a9a0:L70a9a0:{c.instructions+=10;NFSU2_TR(0x70a9a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70a9a1:{NFSU2_TR(0x70a9a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70a9a2:{NFSU2_TR(0x70a9a2);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B70a9a9:{NFSU2_TR(0x70a9a9);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B70a9ab:{NFSU2_TR(0x70a9ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70a9ae:{NFSU2_TR(0x70a9ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B70a9b4:{NFSU2_TR(0x70a9b4);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+24)),r1(U+0));
}
B70a9b6:{NFSU2_TR(0x70a9b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B70a9b9:{NFSU2_TR(0x70a9b9);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B70a9bc:{NFSU2_TR(0x70a9bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a978u);}goto L70a978;}}
}
B70a9be:L70a9be:{c.instructions+=5;NFSU2_TR(0x70a9be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70a9bf:{NFSU2_TR(0x70a9bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70a9c0:{NFSU2_TR(0x70a9c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70a9c1:{NFSU2_TR(0x70a9c1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70a9c2:{NFSU2_TR(0x70a9c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70a9c3:L70a9c3:{c.instructions+=19;NFSU2_TR(0x70a9c3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a9c4:{NFSU2_TR(0x70a9c4);
__builtin_memmove((R+20),(R+16),4);
}
B70a9c6:{NFSU2_TR(0x70a9c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a9c7:{NFSU2_TR(0x70a9c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70a9ca:{NFSU2_TR(0x70a9ca);
__builtin_memmove((R+4),gp(0x8b9c40),4);
}
B70a9d0:{NFSU2_TR(0x70a9d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B70a9d3:{NFSU2_TR(0x70a9d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a9d6:{NFSU2_TR(0x70a9d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a9d7:{NFSU2_TR(0x70a9d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a9d8:{NFSU2_TR(0x70a9d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70a9d9:{NFSU2_TR(0x70a9d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70a9dc:{NFSU2_TR(0x70a9dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70a9df:{NFSU2_TR(0x70a9df);
__builtin_memmove((R+24),(R+28),4);
}
B70a9e1:{NFSU2_TR(0x70a9e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70a9e4:{NFSU2_TR(0x70a9e4);
__builtin_memmove((R+12),(R+28),4);
}
B70a9e6:{NFSU2_TR(0x70a9e6);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B70a9e8:{NFSU2_TR(0x70a9e8);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B70a9ea:{NFSU2_TR(0x70a9ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B70a9f1:{NFSU2_TR(0x70a9f1);
{goto L70a9f6;}
}
B70a9f3:L70a9f3:{c.instructions+=1;NFSU2_TR(0x70a9f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70a9f6:L70a9f6:{c.instructions+=12;NFSU2_TR(0x70a9f6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+8,u32(r1(U+0)));
}
B70a9f9:{NFSU2_TR(0x70a9f9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B70a9fc:{NFSU2_TR(0x70a9fc);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B70aa00:{NFSU2_TR(0x70aa00);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B70aa02:{NFSU2_TR(0x70aa02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70aa05:{NFSU2_TR(0x70aa05);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B70aa07:{NFSU2_TR(0x70aa07);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
w4(R+4,u32(r1(U+0)));
}
B70aa0a:{NFSU2_TR(0x70aa0a);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70aa0e:{NFSU2_TR(0x70aa0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70aa11:{NFSU2_TR(0x70aa11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70aa12:{NFSU2_TR(0x70aa12);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70aa15:{NFSU2_TR(0x70aa15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70aa1aull));
TAIL_STATIC(0x70b59eu,70b);
}
B70aa1a:L70aa1a:{c.instructions+=14;NFSU2_TR(0x70aa1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70aa1b:{NFSU2_TR(0x70aa1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70aa1c:{NFSU2_TR(0x70aa1c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+4,u32(r1(U+0)));
}
B70aa1f:{NFSU2_TR(0x70aa1f);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B70aa26:{NFSU2_TR(0x70aa26);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+24)),r1(U+0));
}
B70aa28:{NFSU2_TR(0x70aa28);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(r1(U+0)));
}
B70aa2b:{NFSU2_TR(0x70aa2b);
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B70aa2d:{NFSU2_TR(0x70aa2d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B70aa33:{NFSU2_TR(0x70aa33);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B70aa35:{NFSU2_TR(0x70aa35);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70aa36:{NFSU2_TR(0x70aa36);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70aa37:{NFSU2_TR(0x70aa37);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B70aa38:{NFSU2_TR(0x70aa38);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B70aa3b:{NFSU2_TR(0x70aa3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70a9f3u);}goto L70a9f3;}}
}
B70aa3d:L70aa3d:{c.instructions+=5;NFSU2_TR(0x70aa3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70aa3e:{NFSU2_TR(0x70aa3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70aa3f:{NFSU2_TR(0x70aa3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70aa40:{NFSU2_TR(0x70aa40);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70aa41:{NFSU2_TR(0x70aa41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70aa42:L70aa42:{c.instructions+=31;NFSU2_TR(0x70aa42);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70aa43:{NFSU2_TR(0x70aa43);
__builtin_memmove((R+20),(R+16),4);
}
B70aa45:{NFSU2_TR(0x70aa45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B70aa48:{NFSU2_TR(0x70aa48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70aa4b:{NFSU2_TR(0x70aa4b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70aa4c:{NFSU2_TR(0x70aa4c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70aa4d:{NFSU2_TR(0x70aa4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70aa50:{NFSU2_TR(0x70aa50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70aa56:{NFSU2_TR(0x70aa56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aa59:{NFSU2_TR(0x70aa59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70aa5c:{NFSU2_TR(0x70aa5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aa5f:{NFSU2_TR(0x70aa5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70aa62:{NFSU2_TR(0x70aa62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aa65:{NFSU2_TR(0x70aa65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70aa6b:{NFSU2_TR(0x70aa6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aa6e:{NFSU2_TR(0x70aa6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70aa71:{NFSU2_TR(0x70aa71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aa74:{NFSU2_TR(0x70aa74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70aa77:{NFSU2_TR(0x70aa77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aa7a:{NFSU2_TR(0x70aa7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70aa7d:{NFSU2_TR(0x70aa7d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B70aa7f:{NFSU2_TR(0x70aa7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aa82:{NFSU2_TR(0x70aa82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aa85:{NFSU2_TR(0x70aa85);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x816a48ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B70aa8c:{NFSU2_TR(0x70aa8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70aa8d:{NFSU2_TR(0x70aa8d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B70aa8f:{NFSU2_TR(0x70aa8f);
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
B70aa91:{NFSU2_TR(0x70aa91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aa94:{NFSU2_TR(0x70aa94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aa97:{NFSU2_TR(0x70aa97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aa9a:{NFSU2_TR(0x70aa9a);
if(r1(R+518)){{goto L70afeb;}}
}
B70aaa0:L70aaa0:{c.instructions+=3;NFSU2_TR(0x70aaa0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70aaa1:{NFSU2_TR(0x70aaa1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70aaa2:{NFSU2_TR(0x70aaa2);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ec0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70aaa8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70aaa8:L70aaa8:{c.instructions+=5;NFSU2_TR(0x70aaa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70aaa9:{NFSU2_TR(0x70aaa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70aaaa:{NFSU2_TR(0x70aaaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aaad:{NFSU2_TR(0x70aaad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aab0:{NFSU2_TR(0x70aab0);
{goto L70aab4;}
}
B70aab2:L70aab2:{c.instructions+=1;NFSU2_TR(0x70aab2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B70aab4:L70aab4:{c.instructions+=3;NFSU2_TR(0x70aab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70aab7:{NFSU2_TR(0x70aab7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70aab9:{NFSU2_TR(0x70aab9);
if(r1(R+518)){{goto L70ab2e;}}
}
B70aabb:L70aabb:{c.instructions+=2;NFSU2_TR(0x70aabb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70aabc:{NFSU2_TR(0x70aabc);
if(r1(R+518)){{goto L70aafe;}}
}
B70aabe:L70aabe:{c.instructions+=2;NFSU2_TR(0x70aabe);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70aabf:{NFSU2_TR(0x70aabf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70ab55;}}
}
B70aac5:L70aac5:{c.instructions+=14;NFSU2_TR(0x70aac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70aacb:{NFSU2_TR(0x70aacb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B70aad1:{NFSU2_TR(0x70aad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70aad7:{NFSU2_TR(0x70aad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70aadd:{NFSU2_TR(0x70aadd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aae0:{NFSU2_TR(0x70aae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70aae6:{NFSU2_TR(0x70aae6);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B70aae8:{NFSU2_TR(0x70aae8);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70aaea:{NFSU2_TR(0x70aaea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aaed:{NFSU2_TR(0x70aaed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70aaf3:{NFSU2_TR(0x70aaf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aaf6:{NFSU2_TR(0x70aaf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aaf9:{NFSU2_TR(0x70aaf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70aafc:{NFSU2_TR(0x70aafc);
{goto L70ab52;}
}
B70aafe:L70aafe:{c.instructions+=13;NFSU2_TR(0x70aafe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ab04:{NFSU2_TR(0x70ab04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ab0a:{NFSU2_TR(0x70ab0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70ab0d:{NFSU2_TR(0x70ab0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ab10:{NFSU2_TR(0x70ab10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ab16:{NFSU2_TR(0x70ab16);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B70ab18:{NFSU2_TR(0x70ab18);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70ab1a:{NFSU2_TR(0x70ab1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ab1d:{NFSU2_TR(0x70ab1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ab23:{NFSU2_TR(0x70ab23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ab26:{NFSU2_TR(0x70ab26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ab29:{NFSU2_TR(0x70ab29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ab2c:{NFSU2_TR(0x70ab2c);
{goto L70ab52;}
}
B70ab2e:L70ab2e:{c.instructions+=9;NFSU2_TR(0x70ab2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ab34:{NFSU2_TR(0x70ab34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ab3a:{NFSU2_TR(0x70ab3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70ab3d:{NFSU2_TR(0x70ab3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ab40:{NFSU2_TR(0x70ab40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ab46:{NFSU2_TR(0x70ab46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ab49:{NFSU2_TR(0x70ab49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ab4c:{NFSU2_TR(0x70ab4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ab4f:{NFSU2_TR(0x70ab4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ab52:L70ab52:{c.instructions+=1;NFSU2_TR(0x70ab52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B70ab55:L70ab55:{c.instructions+=7;NFSU2_TR(0x70ab55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ab58:{NFSU2_TR(0x70ab58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ab5b:{NFSU2_TR(0x70ab5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ab5e:{NFSU2_TR(0x70ab5e);
__builtin_memmove((R+12),(R+8),4);
}
B70ab60:{NFSU2_TR(0x70ab60);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w8(U+8,u64(s64(s32(r4(R+12)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+12,u32(r8(U+24)));
}
B70ab64:{NFSU2_TR(0x70ab64);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w1(U+9,u8(u32(r1(U+8))&u32(r1(R+4))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
}
B70ab67:{NFSU2_TR(0x70ab67);
if(r1(R+518)){{goto L70abb7;}}
}
B70ab69:L70ab69:{c.instructions+=5;NFSU2_TR(0x70ab69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70ab6c:{NFSU2_TR(0x70ab6c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70ab6d:{NFSU2_TR(0x70ab6d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B70ab70:{NFSU2_TR(0x70ab70);
u8 U[13];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w1(U+12,u8(u32(r1(U+8))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+12))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+12))==(u8(0x0ull))));
w1(U+9,u8(u32(r1(U+12))&u32(u8(0xffull))));
w1(U+10,u8(__builtin_popcountll(u64(r1(U+9)))));
w1(U+11,u8(u32(r1(U+10))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+11))==(u8(0x0ull))));
}
B70ab73:{NFSU2_TR(0x70ab73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70ab89;}}
}
B70ab75:L70ab75:{c.instructions+=6;NFSU2_TR(0x70ab75);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ab78:{NFSU2_TR(0x70ab78);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70ab7b:{NFSU2_TR(0x70ab7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ab7e:{NFSU2_TR(0x70ab7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ab7f:{NFSU2_TR(0x70ab7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ab80:{NFSU2_TR(0x70ab80);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ab86ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70ab86:L70ab86:{c.instructions+=1;NFSU2_TR(0x70ab86);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70ab89:L70ab89:{c.instructions+=8;NFSU2_TR(0x70ab89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ab8c:{NFSU2_TR(0x70ab8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ab8f:{NFSU2_TR(0x70ab8f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B70ab91:{NFSU2_TR(0x70ab91);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70ab95:{NFSU2_TR(0x70ab95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ab98:{NFSU2_TR(0x70ab98);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70ab9b:{NFSU2_TR(0x70ab9b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70ab9e:{NFSU2_TR(0x70ab9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70abb7;}}
}
B70aba0:L70aba0:{c.instructions+=8;NFSU2_TR(0x70aba0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70aba3:{NFSU2_TR(0x70aba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70aba6:{NFSU2_TR(0x70aba6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70aba7:{NFSU2_TR(0x70aba7);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70abaa:{NFSU2_TR(0x70abaa);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70abac:{NFSU2_TR(0x70abac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70abad:{NFSU2_TR(0x70abad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70abae:{NFSU2_TR(0x70abae);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70abb4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70abb4:L70abb4:{c.instructions+=1;NFSU2_TR(0x70abb4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70abb7:L70abb7:{c.instructions+=8;NFSU2_TR(0x70abb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70abba:{NFSU2_TR(0x70abba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70abbd:{NFSU2_TR(0x70abbd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70abbf:{NFSU2_TR(0x70abbf);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70abc0:{NFSU2_TR(0x70abc0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70abc1:{NFSU2_TR(0x70abc1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70abc2:{NFSU2_TR(0x70abc2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70abc4:{NFSU2_TR(0x70abc4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70ac7f;}}
}
B70abca:L70abca:{c.instructions+=11;NFSU2_TR(0x70abca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70abcd:{NFSU2_TR(0x70abcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70abd4:{NFSU2_TR(0x70abd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70abd7:{NFSU2_TR(0x70abd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70abda:{NFSU2_TR(0x70abda);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70abdb:{NFSU2_TR(0x70abdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70abde:{NFSU2_TR(0x70abde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70abe1:{NFSU2_TR(0x70abe1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((R+8),(U+0),4);
}
B70abe4:{NFSU2_TR(0x70abe4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70abe5:{NFSU2_TR(0x70abe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70abe8:{NFSU2_TR(0x70abe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70abeb:L70abeb:{c.instructions+=6;NFSU2_TR(0x70abeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70abee:{NFSU2_TR(0x70abee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70abf1:{NFSU2_TR(0x70abf1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70abf4:{NFSU2_TR(0x70abf4);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70abf7:{NFSU2_TR(0x70abf7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70abfa:{NFSU2_TR(0x70abfa);
if(r1(R+518)){{goto L70ac6b;}}
}
B70abfc:L70abfc:{c.instructions+=7;NFSU2_TR(0x70abfc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70abff:{NFSU2_TR(0x70abff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ac02:{NFSU2_TR(0x70ac02);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ac05:{NFSU2_TR(0x70ac05);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffff8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffff8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70ac08:{NFSU2_TR(0x70ac08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ac09:{NFSU2_TR(0x70ac09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ac0a:{NFSU2_TR(0x70ac0a);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ac10ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70ac10:L70ac10:{c.instructions+=9;NFSU2_TR(0x70ac10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ac13:{NFSU2_TR(0x70ac13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ac16:{NFSU2_TR(0x70ac16);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B70ac18:{NFSU2_TR(0x70ac18);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70ac1c:{NFSU2_TR(0x70ac1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ac1f:{NFSU2_TR(0x70ac1f);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70ac22:{NFSU2_TR(0x70ac22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70ac25:{NFSU2_TR(0x70ac25);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70ac28:{NFSU2_TR(0x70ac28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70ac3d;}}
}
B70ac2a:L70ac2a:{c.instructions+=5;NFSU2_TR(0x70ac2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ac2d:{NFSU2_TR(0x70ac2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ac30:{NFSU2_TR(0x70ac30);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ac33:{NFSU2_TR(0x70ac33);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ac34:{NFSU2_TR(0x70ac34);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ac3aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70ac3a:L70ac3a:{c.instructions+=1;NFSU2_TR(0x70ac3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70ac3d:L70ac3d:{c.instructions+=6;NFSU2_TR(0x70ac3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ac40:{NFSU2_TR(0x70ac40);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70ac44:{NFSU2_TR(0x70ac44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ac47:{NFSU2_TR(0x70ac47);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70ac4a:{NFSU2_TR(0x70ac4a);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70ac4d:{NFSU2_TR(0x70ac4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70ac6b;}}
}
B70ac4f:L70ac4f:{c.instructions+=9;NFSU2_TR(0x70ac4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ac52:{NFSU2_TR(0x70ac52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ac55:{NFSU2_TR(0x70ac55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ac58:{NFSU2_TR(0x70ac58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ac59:{NFSU2_TR(0x70ac59);
u8 U[45];
w4(U+37,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B70ac5c:{NFSU2_TR(0x70ac5c);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffaull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70ac60:{NFSU2_TR(0x70ac60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ac61:{NFSU2_TR(0x70ac61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ac62:{NFSU2_TR(0x70ac62);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ac68ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70ac68:L70ac68:{c.instructions+=1;NFSU2_TR(0x70ac68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70ac6b:L70ac6b:{c.instructions+=5;NFSU2_TR(0x70ac6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70ac6f:{NFSU2_TR(0x70ac6f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70ac70:{NFSU2_TR(0x70ac70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70ac73:{NFSU2_TR(0x70ac73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70ac76:{NFSU2_TR(0x70ac76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70abebu);}goto L70abeb;}}
}
B70ac7c:L70ac7c:{c.instructions+=1;NFSU2_TR(0x70ac7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ac7f:L70ac7f:{c.instructions+=6;NFSU2_TR(0x70ac7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ac82:{NFSU2_TR(0x70ac82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ac85:{NFSU2_TR(0x70ac85);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70ac88:{NFSU2_TR(0x70ac88);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70ac8b:{NFSU2_TR(0x70ac8b);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70ac8e:{NFSU2_TR(0x70ac8e);
if(r1(R+518)){{goto L70acdd;}}
}
B70ac90:L70ac90:{c.instructions+=9;NFSU2_TR(0x70ac90);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ac93:{NFSU2_TR(0x70ac93);
__builtin_memmove((R+0),(R+4),4);
}
B70ac95:{NFSU2_TR(0x70ac95);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ac98:{NFSU2_TR(0x70ac98);
u8 U[45];
w4(U+37,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B70ac9b:{NFSU2_TR(0x70ac9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ac9e:{NFSU2_TR(0x70ac9e);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70aca2:{NFSU2_TR(0x70aca2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70aca3:{NFSU2_TR(0x70aca3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70aca4:{NFSU2_TR(0x70aca4);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70acaaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70acaa:L70acaa:{c.instructions+=8;NFSU2_TR(0x70acaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70acad:{NFSU2_TR(0x70acad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70acb0:{NFSU2_TR(0x70acb0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70acb2:{NFSU2_TR(0x70acb2);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70acb6:{NFSU2_TR(0x70acb6);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70acb9:{NFSU2_TR(0x70acb9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70acbc:{NFSU2_TR(0x70acbc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70acbf:{NFSU2_TR(0x70acbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70acdd;}}
}
B70acc1:L70acc1:{c.instructions+=10;NFSU2_TR(0x70acc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70acc4:{NFSU2_TR(0x70acc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70acc7:{NFSU2_TR(0x70acc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70acca:{NFSU2_TR(0x70acca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70accb:{NFSU2_TR(0x70accb);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70acce:{NFSU2_TR(0x70acce);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B70acd0:{NFSU2_TR(0x70acd0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+28)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70acd2:{NFSU2_TR(0x70acd2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70acd3:{NFSU2_TR(0x70acd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70acd4:{NFSU2_TR(0x70acd4);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70acdaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70acda:L70acda:{c.instructions+=1;NFSU2_TR(0x70acda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70acdd:L70acdd:{c.instructions+=8;NFSU2_TR(0x70acdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ace0:{NFSU2_TR(0x70ace0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70ace3:{NFSU2_TR(0x70ace3);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B70ace5:{NFSU2_TR(0x70ace5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ace8:{NFSU2_TR(0x70ace8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70ace9:{NFSU2_TR(0x70ace9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70acea:{NFSU2_TR(0x70acea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70aced:{NFSU2_TR(0x70aced);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70aecb;}}
}
B70acf3:L70acf3:{c.instructions+=2;NFSU2_TR(0x70acf3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70acf4:{NFSU2_TR(0x70acf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70acf7:L70acf7:{c.instructions+=6;NFSU2_TR(0x70acf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70acfa:{NFSU2_TR(0x70acfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70acfd:{NFSU2_TR(0x70acfd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70ad00:{NFSU2_TR(0x70ad00);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70ad03:{NFSU2_TR(0x70ad03);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70ad06:{NFSU2_TR(0x70ad06);
if(r1(R+518)){{goto L70ad6a;}}
}
B70ad08:L70ad08:{c.instructions+=5;NFSU2_TR(0x70ad08);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ad0b:{NFSU2_TR(0x70ad0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ad0e:{NFSU2_TR(0x70ad0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ad0f:{NFSU2_TR(0x70ad0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ad10:{NFSU2_TR(0x70ad10);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ad16ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70ad16:L70ad16:{c.instructions+=7;NFSU2_TR(0x70ad16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ad19:{NFSU2_TR(0x70ad19);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70ad1c:{NFSU2_TR(0x70ad1c);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70ad20:{NFSU2_TR(0x70ad20);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70ad23:{NFSU2_TR(0x70ad23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70ad26:{NFSU2_TR(0x70ad26);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70ad29:{NFSU2_TR(0x70ad29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70ad3f;}}
}
B70ad2b:L70ad2b:{c.instructions+=6;NFSU2_TR(0x70ad2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ad2e:{NFSU2_TR(0x70ad2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70ad31:{NFSU2_TR(0x70ad31);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ad34:{NFSU2_TR(0x70ad34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ad35:{NFSU2_TR(0x70ad35);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ad36:{NFSU2_TR(0x70ad36);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ad3cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70ad3c:L70ad3c:{c.instructions+=1;NFSU2_TR(0x70ad3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70ad3f:L70ad3f:{c.instructions+=7;NFSU2_TR(0x70ad3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ad42:{NFSU2_TR(0x70ad42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ad45:{NFSU2_TR(0x70ad45);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70ad47:{NFSU2_TR(0x70ad47);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70ad4b:{NFSU2_TR(0x70ad4b);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70ad4e:{NFSU2_TR(0x70ad4e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70ad51:{NFSU2_TR(0x70ad51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70ad6a;}}
}
B70ad53:L70ad53:{c.instructions+=8;NFSU2_TR(0x70ad53);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ad56:{NFSU2_TR(0x70ad56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ad59:{NFSU2_TR(0x70ad59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ad5a:{NFSU2_TR(0x70ad5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70ad5d:{NFSU2_TR(0x70ad5d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70ad5f:{NFSU2_TR(0x70ad5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ad60:{NFSU2_TR(0x70ad60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ad61:{NFSU2_TR(0x70ad61);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ad67ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70ad67:L70ad67:{c.instructions+=1;NFSU2_TR(0x70ad67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70ad6a:L70ad6a:{c.instructions+=7;NFSU2_TR(0x70ad6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ad6d:{NFSU2_TR(0x70ad6d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70ad6f:{NFSU2_TR(0x70ad6f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70ad70:{NFSU2_TR(0x70ad70);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70ad71:{NFSU2_TR(0x70ad71);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70ad72:{NFSU2_TR(0x70ad72);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70ad74:{NFSU2_TR(0x70ad74);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70ae47;}}
}
B70ad7a:L70ad7a:{c.instructions+=11;NFSU2_TR(0x70ad7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ad7d:{NFSU2_TR(0x70ad7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70ad84:{NFSU2_TR(0x70ad84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B70ad87:{NFSU2_TR(0x70ad87);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70ad8a:{NFSU2_TR(0x70ad8a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70ad8b:{NFSU2_TR(0x70ad8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ad8e:{NFSU2_TR(0x70ad8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ad91:{NFSU2_TR(0x70ad91);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((R+8),(U+0),4);
}
B70ad94:{NFSU2_TR(0x70ad94);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70ad95:{NFSU2_TR(0x70ad95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ad98:{NFSU2_TR(0x70ad98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ad9b:L70ad9b:{c.instructions+=6;NFSU2_TR(0x70ad9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ad9e:{NFSU2_TR(0x70ad9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ada1:{NFSU2_TR(0x70ada1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70ada4:{NFSU2_TR(0x70ada4);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70ada7:{NFSU2_TR(0x70ada7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70adaa:{NFSU2_TR(0x70adaa);
if(r1(R+518)){{goto L70ae33;}}
}
B70adb0:L70adb0:{c.instructions+=7;NFSU2_TR(0x70adb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70adb3:{NFSU2_TR(0x70adb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70adb6:{NFSU2_TR(0x70adb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70adb9:{NFSU2_TR(0x70adb9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffff8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffff8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70adbc:{NFSU2_TR(0x70adbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70adbd:{NFSU2_TR(0x70adbd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70adbe:{NFSU2_TR(0x70adbe);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70adc4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70adc4:L70adc4:{c.instructions+=7;NFSU2_TR(0x70adc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70adc7:{NFSU2_TR(0x70adc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70adca:{NFSU2_TR(0x70adca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70adcd:{NFSU2_TR(0x70adcd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffffaull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffffaull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffaull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70add0:{NFSU2_TR(0x70add0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70add1:{NFSU2_TR(0x70add1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70add2:{NFSU2_TR(0x70add2);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70add8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70add8:L70add8:{c.instructions+=9;NFSU2_TR(0x70add8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70addb:{NFSU2_TR(0x70addb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70adde:{NFSU2_TR(0x70adde);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B70ade0:{NFSU2_TR(0x70ade0);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70ade4:{NFSU2_TR(0x70ade4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ade7:{NFSU2_TR(0x70ade7);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70adea:{NFSU2_TR(0x70adea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B70aded:{NFSU2_TR(0x70aded);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70adf0:{NFSU2_TR(0x70adf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70ae05;}}
}
B70adf2:L70adf2:{c.instructions+=5;NFSU2_TR(0x70adf2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70adf5:{NFSU2_TR(0x70adf5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70adf8:{NFSU2_TR(0x70adf8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70adfb:{NFSU2_TR(0x70adfb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70adfc:{NFSU2_TR(0x70adfc);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ae02ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70ae02:L70ae02:{c.instructions+=1;NFSU2_TR(0x70ae02);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70ae05:L70ae05:{c.instructions+=6;NFSU2_TR(0x70ae05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ae08:{NFSU2_TR(0x70ae08);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70ae0c:{NFSU2_TR(0x70ae0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ae0f:{NFSU2_TR(0x70ae0f);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70ae12:{NFSU2_TR(0x70ae12);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70ae15:{NFSU2_TR(0x70ae15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70ae33;}}
}
B70ae17:L70ae17:{c.instructions+=9;NFSU2_TR(0x70ae17);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ae1a:{NFSU2_TR(0x70ae1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ae1d:{NFSU2_TR(0x70ae1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ae20:{NFSU2_TR(0x70ae20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ae21:{NFSU2_TR(0x70ae21);
u8 U[45];
w4(U+37,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B70ae24:{NFSU2_TR(0x70ae24);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffaull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B70ae28:{NFSU2_TR(0x70ae28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ae29:{NFSU2_TR(0x70ae29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ae2a:{NFSU2_TR(0x70ae2a);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ae30ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70ae30:L70ae30:{c.instructions+=1;NFSU2_TR(0x70ae30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70ae33:L70ae33:{c.instructions+=5;NFSU2_TR(0x70ae33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70ae37:{NFSU2_TR(0x70ae37);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70ae38:{NFSU2_TR(0x70ae38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70ae3b:{NFSU2_TR(0x70ae3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70ae3e:{NFSU2_TR(0x70ae3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70ad9bu);}goto L70ad9b;}}
}
B70ae44:L70ae44:{c.instructions+=1;NFSU2_TR(0x70ae44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ae47:L70ae47:{c.instructions+=6;NFSU2_TR(0x70ae47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ae4a:{NFSU2_TR(0x70ae4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ae4d:{NFSU2_TR(0x70ae4d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70ae50:{NFSU2_TR(0x70ae50);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70ae53:{NFSU2_TR(0x70ae53);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70ae56:{NFSU2_TR(0x70ae56);
if(r1(R+518)){{goto L70aeb9;}}
}
B70ae58:L70ae58:{c.instructions+=10;NFSU2_TR(0x70ae58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ae5b:{NFSU2_TR(0x70ae5b);
__builtin_memmove((R+0),(R+4),4);
}
B70ae5d:{NFSU2_TR(0x70ae5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ae60:{NFSU2_TR(0x70ae60);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70ae63:{NFSU2_TR(0x70ae63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ae66:{NFSU2_TR(0x70ae66);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B70ae68:{NFSU2_TR(0x70ae68);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffffeull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffffeull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70ae6b:{NFSU2_TR(0x70ae6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ae6c:{NFSU2_TR(0x70ae6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ae6d:{NFSU2_TR(0x70ae6d);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ae73ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70ae73:L70ae73:{c.instructions+=7;NFSU2_TR(0x70ae73);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ae76:{NFSU2_TR(0x70ae76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ae79:{NFSU2_TR(0x70ae79);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ae7c:{NFSU2_TR(0x70ae7c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70ae7e:{NFSU2_TR(0x70ae7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ae7f:{NFSU2_TR(0x70ae7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ae80:{NFSU2_TR(0x70ae80);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ae86ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70ae86:L70ae86:{c.instructions+=8;NFSU2_TR(0x70ae86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ae89:{NFSU2_TR(0x70ae89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ae8c:{NFSU2_TR(0x70ae8c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70ae8e:{NFSU2_TR(0x70ae8e);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70ae92:{NFSU2_TR(0x70ae92);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70ae95:{NFSU2_TR(0x70ae95);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B70ae98:{NFSU2_TR(0x70ae98);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70ae9b:{NFSU2_TR(0x70ae9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70aeb9;}}
}
B70ae9d:L70ae9d:{c.instructions+=10;NFSU2_TR(0x70ae9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70aea0:{NFSU2_TR(0x70aea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70aea3:{NFSU2_TR(0x70aea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70aea6:{NFSU2_TR(0x70aea6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70aea7:{NFSU2_TR(0x70aea7);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70aeaa:{NFSU2_TR(0x70aeaa);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B70aeac:{NFSU2_TR(0x70aeac);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+28)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70aeae:{NFSU2_TR(0x70aeae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70aeaf:{NFSU2_TR(0x70aeaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70aeb0:{NFSU2_TR(0x70aeb0);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70aeb6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70aeb6:L70aeb6:{c.instructions+=1;NFSU2_TR(0x70aeb6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70aeb9:L70aeb9:{c.instructions+=6;NFSU2_TR(0x70aeb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70aebc:{NFSU2_TR(0x70aebc);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70aebf:{NFSU2_TR(0x70aebf);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70aec0:{NFSU2_TR(0x70aec0);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B70aec2:{NFSU2_TR(0x70aec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70aec5:{NFSU2_TR(0x70aec5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70acf7u);}goto L70acf7;}}
}
B70aecb:L70aecb:{c.instructions+=3;NFSU2_TR(0x70aecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70aece:{NFSU2_TR(0x70aece);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x3ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70aed2:{NFSU2_TR(0x70aed2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70aab2u);}goto L70aab2;}}
}
B70aed8:L70aed8:{c.instructions+=6;NFSU2_TR(0x70aed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70aedb:{NFSU2_TR(0x70aedb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70aede:{NFSU2_TR(0x70aede);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70aee1:{NFSU2_TR(0x70aee1);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70aee4:{NFSU2_TR(0x70aee4);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70aee7:{NFSU2_TR(0x70aee7);
if(r1(R+518)){{goto L70af20;}}
}
B70aee9:L70aee9:{c.instructions+=5;NFSU2_TR(0x70aee9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70aeec:{NFSU2_TR(0x70aeec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70aeef:{NFSU2_TR(0x70aeef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70aef0:{NFSU2_TR(0x70aef0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70aef1:{NFSU2_TR(0x70aef1);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70aef7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70aef7:L70aef7:{c.instructions+=7;NFSU2_TR(0x70aef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70aefa:{NFSU2_TR(0x70aefa);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70aefd:{NFSU2_TR(0x70aefd);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70af01:{NFSU2_TR(0x70af01);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70af04:{NFSU2_TR(0x70af04);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70af07:{NFSU2_TR(0x70af07);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70af0a:{NFSU2_TR(0x70af0a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70af20;}}
}
B70af0c:L70af0c:{c.instructions+=6;NFSU2_TR(0x70af0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70af0f:{NFSU2_TR(0x70af0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70af12:{NFSU2_TR(0x70af12);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70af15:{NFSU2_TR(0x70af15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70af16:{NFSU2_TR(0x70af16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70af17:{NFSU2_TR(0x70af17);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70af1dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70af1d:L70af1d:{c.instructions+=1;NFSU2_TR(0x70af1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70af20:L70af20:{c.instructions+=7;NFSU2_TR(0x70af20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70af23:{NFSU2_TR(0x70af23);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B70af25:{NFSU2_TR(0x70af25);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70af26:{NFSU2_TR(0x70af26);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70af27:{NFSU2_TR(0x70af27);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70af28:{NFSU2_TR(0x70af28);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70af2a:{NFSU2_TR(0x70af2a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70afb5;}}
}
B70af30:L70af30:{c.instructions+=8;NFSU2_TR(0x70af30);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70af33:{NFSU2_TR(0x70af33);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70af34:{NFSU2_TR(0x70af34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70af37:{NFSU2_TR(0x70af37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70af3a:{NFSU2_TR(0x70af3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((R+4),(U+0),4);
}
B70af3d:{NFSU2_TR(0x70af3d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70af3e:{NFSU2_TR(0x70af3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70af41:{NFSU2_TR(0x70af41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70af44:L70af44:{c.instructions+=6;NFSU2_TR(0x70af44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70af47:{NFSU2_TR(0x70af47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70af4a:{NFSU2_TR(0x70af4a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70af4d:{NFSU2_TR(0x70af4d);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70af50:{NFSU2_TR(0x70af50);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70af53:{NFSU2_TR(0x70af53);
if(r1(R+518)){{goto L70afa5;}}
}
B70af55:L70af55:{c.instructions+=7;NFSU2_TR(0x70af55);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70af58:{NFSU2_TR(0x70af58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70af5b:{NFSU2_TR(0x70af5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70af5e:{NFSU2_TR(0x70af5e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffff8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffff8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70af61:{NFSU2_TR(0x70af61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70af62:{NFSU2_TR(0x70af62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70af63:{NFSU2_TR(0x70af63);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70af69ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70af69:L70af69:{c.instructions+=7;NFSU2_TR(0x70af69);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70af6c:{NFSU2_TR(0x70af6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70af6f:{NFSU2_TR(0x70af6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70af72:{NFSU2_TR(0x70af72);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffffaull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffffaull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffaull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70af75:{NFSU2_TR(0x70af75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70af76:{NFSU2_TR(0x70af76);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70af77:{NFSU2_TR(0x70af77);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70af7dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70af7d:L70af7d:{c.instructions+=7;NFSU2_TR(0x70af7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70af80:{NFSU2_TR(0x70af80);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70af84:{NFSU2_TR(0x70af84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70af87:{NFSU2_TR(0x70af87);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70af8a:{NFSU2_TR(0x70af8a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B70af8d:{NFSU2_TR(0x70af8d);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70af90:{NFSU2_TR(0x70af90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70afa5;}}
}
B70af92:L70af92:{c.instructions+=5;NFSU2_TR(0x70af92);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70af95:{NFSU2_TR(0x70af95);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70af98:{NFSU2_TR(0x70af98);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70af9b:{NFSU2_TR(0x70af9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70af9c:{NFSU2_TR(0x70af9c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70afa2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70afa2:L70afa2:{c.instructions+=1;NFSU2_TR(0x70afa2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70afa5:L70afa5:{c.instructions+=5;NFSU2_TR(0x70afa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70afa9:{NFSU2_TR(0x70afa9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70afaa:{NFSU2_TR(0x70afaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70afad:{NFSU2_TR(0x70afad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70afb0:{NFSU2_TR(0x70afb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70af44u);}goto L70af44;}}
}
B70afb2:L70afb2:{c.instructions+=1;NFSU2_TR(0x70afb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70afb5:L70afb5:{c.instructions+=6;NFSU2_TR(0x70afb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70afb8:{NFSU2_TR(0x70afb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70afbb:{NFSU2_TR(0x70afbb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70afbe:{NFSU2_TR(0x70afbe);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B70afc1:{NFSU2_TR(0x70afc1);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70afc4:{NFSU2_TR(0x70afc4);
if(r1(R+518)){{goto L70afeb;}}
}
B70afc6:L70afc6:{c.instructions+=7;NFSU2_TR(0x70afc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70afc9:{NFSU2_TR(0x70afc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B70afcc:{NFSU2_TR(0x70afcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70afcf:{NFSU2_TR(0x70afcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B70afd2:{NFSU2_TR(0x70afd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70afd3:{NFSU2_TR(0x70afd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70afd4:{NFSU2_TR(0x70afd4);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70afdaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70afda:L70afda:{c.instructions+=5;NFSU2_TR(0x70afda);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70afdd:{NFSU2_TR(0x70afdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70afe0:{NFSU2_TR(0x70afe0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70afe1:{NFSU2_TR(0x70afe1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70afe2:{NFSU2_TR(0x70afe2);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f14),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70afe8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70afe8:L70afe8:{c.instructions+=1;NFSU2_TR(0x70afe8);
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
B70afeb:L70afeb:{c.instructions+=5;NFSU2_TR(0x70afeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70afec:{NFSU2_TR(0x70afec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70afed:{NFSU2_TR(0x70afed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70afee:{NFSU2_TR(0x70afee);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70afef:{NFSU2_TR(0x70afef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70aff0:L70aff0:{c.instructions+=8;NFSU2_TR(0x70aff0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70aff1:{NFSU2_TR(0x70aff1);
__builtin_memmove((R+20),(R+16),4);
}
B70aff3:{NFSU2_TR(0x70aff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B70aff6:{NFSU2_TR(0x70aff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70aff9:{NFSU2_TR(0x70aff9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70affa:{NFSU2_TR(0x70affa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70affb:{NFSU2_TR(0x70affb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70affe:{NFSU2_TR(0x70affe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x70b004u,70b);
}
XIT:NFSU2_TR_EXIT(0x70a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
