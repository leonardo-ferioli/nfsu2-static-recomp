#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_64b(u8* __restrict R,Cpu& c);
u32 body_65a(u8* __restrict R,Cpu& c);
u32 body_65b(u8* __restrict R,Cpu& c);
u32 body_65c(u8* __restrict R,Cpu& c);
u32 body_65e(u8* __restrict R,Cpu& c);
u32 body_661(u8* __restrict R,Cpu& c);
u32 body_662(u8* __restrict R,Cpu& c);
u32 body_663(u8* __restrict R,Cpu& c);
u32 body_664(u8* __restrict R,Cpu& c);
u32 body_665(u8* __restrict R,Cpu& c);
u32 body_666(u8* __restrict R,Cpu& c);
u32 body_667(u8* __restrict R,Cpu& c);
u32 body_668(u8* __restrict R,Cpu& c);
u32 body_669(u8* __restrict R,Cpu& c);
u32 body_66b(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x66a,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x66a,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_66a(u8* __restrict R,Cpu& c);
u32 page_66a(Cpu& c){return body_66a(c.regs.data(),c);}
__attribute__((noinline)) u32 body_66a(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x66a002:goto L66a002;
case 0x66a004:goto L66a004;
case 0x66a007:c.instructions+=9;goto B66a007;
case 0x66a009:c.instructions+=8;goto B66a009;
case 0x66a00c:c.instructions+=7;goto B66a00c;
case 0x66a00f:c.instructions+=6;goto B66a00f;
case 0x66a011:c.instructions+=5;goto B66a011;
case 0x66a013:c.instructions+=4;goto B66a013;
case 0x66a016:c.instructions+=3;goto B66a016;
case 0x66a018:c.instructions+=2;goto B66a018;
case 0x66a01b:c.instructions+=1;goto B66a01b;
case 0x66a01d:goto L66a01d;
case 0x66a020:goto L66a020;
case 0x66a023:c.instructions+=10;goto B66a023;
case 0x66a025:c.instructions+=9;goto B66a025;
case 0x66a028:c.instructions+=8;goto B66a028;
case 0x66a02b:c.instructions+=7;goto B66a02b;
case 0x66a02d:c.instructions+=6;goto B66a02d;
case 0x66a030:c.instructions+=5;goto B66a030;
case 0x66a033:c.instructions+=4;goto B66a033;
case 0x66a034:c.instructions+=3;goto B66a034;
case 0x66a036:c.instructions+=2;goto B66a036;
case 0x66a039:c.instructions+=1;goto B66a039;
case 0x66a03f:goto L66a03f;
case 0x66a043:c.instructions+=3;goto B66a043;
case 0x66a046:c.instructions+=2;goto B66a046;
case 0x66a049:c.instructions+=1;goto B66a049;
case 0x66a04b:goto L66a04b;
case 0x66a04f:c.instructions+=1;goto B66a04f;
case 0x66a051:goto L66a051;
case 0x66a054:c.instructions+=9;goto B66a054;
case 0x66a056:c.instructions+=8;goto B66a056;
case 0x66a059:c.instructions+=7;goto B66a059;
case 0x66a05c:c.instructions+=6;goto B66a05c;
case 0x66a05e:c.instructions+=5;goto B66a05e;
case 0x66a060:c.instructions+=4;goto B66a060;
case 0x66a063:c.instructions+=3;goto B66a063;
case 0x66a065:c.instructions+=2;goto B66a065;
case 0x66a068:c.instructions+=1;goto B66a068;
case 0x66a06a:goto L66a06a;
case 0x66a06d:goto L66a06d;
case 0x66a070:c.instructions+=11;goto B66a070;
case 0x66a073:c.instructions+=10;goto B66a073;
case 0x66a075:c.instructions+=9;goto B66a075;
case 0x66a078:c.instructions+=8;goto B66a078;
case 0x66a07b:c.instructions+=7;goto B66a07b;
case 0x66a07d:c.instructions+=6;goto B66a07d;
case 0x66a080:c.instructions+=5;goto B66a080;
case 0x66a081:c.instructions+=4;goto B66a081;
case 0x66a084:c.instructions+=3;goto B66a084;
case 0x66a086:c.instructions+=2;goto B66a086;
case 0x66a089:c.instructions+=1;goto B66a089;
case 0x66a08f:goto L66a08f;
case 0x66a093:c.instructions+=3;goto B66a093;
case 0x66a096:c.instructions+=2;goto B66a096;
case 0x66a099:c.instructions+=1;goto B66a099;
case 0x66a09b:goto L66a09b;
case 0x66a09f:c.instructions+=1;goto B66a09f;
case 0x66a0a5:goto L66a0a5;
case 0x66a0a8:c.instructions+=8;goto B66a0a8;
case 0x66a0aa:c.instructions+=7;goto B66a0aa;
case 0x66a0ad:c.instructions+=6;goto B66a0ad;
case 0x66a0af:c.instructions+=5;goto B66a0af;
case 0x66a0b2:c.instructions+=4;goto B66a0b2;
case 0x66a0b4:c.instructions+=3;goto B66a0b4;
case 0x66a0b7:c.instructions+=2;goto B66a0b7;
case 0x66a0b9:c.instructions+=1;goto B66a0b9;
case 0x66a0bf:goto L66a0bf;
case 0x66a0c2:goto L66a0c2;
case 0x66a0c4:c.instructions+=10;goto B66a0c4;
case 0x66a0c7:c.instructions+=9;goto B66a0c7;
case 0x66a0ca:c.instructions+=8;goto B66a0ca;
case 0x66a0cc:c.instructions+=7;goto B66a0cc;
case 0x66a0ce:c.instructions+=6;goto B66a0ce;
case 0x66a0d1:c.instructions+=5;goto B66a0d1;
case 0x66a0d4:c.instructions+=4;goto B66a0d4;
case 0x66a0d5:c.instructions+=3;goto B66a0d5;
case 0x66a0d6:c.instructions+=2;goto B66a0d6;
case 0x66a0d7:c.instructions+=1;goto B66a0d7;
case 0x66a0dd:goto L66a0dd;
case 0x66a0e0:c.instructions+=3;goto B66a0e0;
case 0x66a0e3:c.instructions+=2;goto B66a0e3;
case 0x66a0e6:c.instructions+=1;goto B66a0e6;
case 0x66a0e8:goto L66a0e8;
case 0x66a0ed:goto L66a0ed;
case 0x66a0f0:c.instructions+=4;goto B66a0f0;
case 0x66a0f3:c.instructions+=3;goto B66a0f3;
case 0x66a0f5:c.instructions+=2;goto B66a0f5;
case 0x66a0f6:c.instructions+=1;goto B66a0f6;
case 0x66a0f9:goto L66a0f9;
case 0x66a0fb:c.instructions+=2;goto B66a0fb;
case 0x66a0ff:c.instructions+=1;goto B66a0ff;
case 0x66a101:goto L66a101;
case 0x66a104:c.instructions+=9;goto B66a104;
case 0x66a106:c.instructions+=8;goto B66a106;
case 0x66a109:c.instructions+=7;goto B66a109;
case 0x66a10c:c.instructions+=6;goto B66a10c;
case 0x66a10e:c.instructions+=5;goto B66a10e;
case 0x66a110:c.instructions+=4;goto B66a110;
case 0x66a113:c.instructions+=3;goto B66a113;
case 0x66a115:c.instructions+=2;goto B66a115;
case 0x66a118:c.instructions+=1;goto B66a118;
case 0x66a11a:goto L66a11a;
case 0x66a11d:goto L66a11d;
case 0x66a120:c.instructions+=10;goto B66a120;
case 0x66a122:c.instructions+=9;goto B66a122;
case 0x66a125:c.instructions+=8;goto B66a125;
case 0x66a128:c.instructions+=7;goto B66a128;
case 0x66a12a:c.instructions+=6;goto B66a12a;
case 0x66a12d:c.instructions+=5;goto B66a12d;
case 0x66a130:c.instructions+=4;goto B66a130;
case 0x66a131:c.instructions+=3;goto B66a131;
case 0x66a133:c.instructions+=2;goto B66a133;
case 0x66a136:c.instructions+=1;goto B66a136;
case 0x66a13c:goto L66a13c;
case 0x66a140:c.instructions+=3;goto B66a140;
case 0x66a143:c.instructions+=2;goto B66a143;
case 0x66a146:c.instructions+=1;goto B66a146;
case 0x66a148:goto L66a148;
case 0x66a14c:c.instructions+=1;goto B66a14c;
case 0x66a14e:goto L66a14e;
case 0x66a151:c.instructions+=9;goto B66a151;
case 0x66a153:c.instructions+=8;goto B66a153;
case 0x66a156:c.instructions+=7;goto B66a156;
case 0x66a159:c.instructions+=6;goto B66a159;
case 0x66a15b:c.instructions+=5;goto B66a15b;
case 0x66a15d:c.instructions+=4;goto B66a15d;
case 0x66a160:c.instructions+=3;goto B66a160;
case 0x66a162:c.instructions+=2;goto B66a162;
case 0x66a165:c.instructions+=1;goto B66a165;
case 0x66a167:goto L66a167;
case 0x66a16a:goto L66a16a;
case 0x66a16d:c.instructions+=11;goto B66a16d;
case 0x66a170:c.instructions+=10;goto B66a170;
case 0x66a172:c.instructions+=9;goto B66a172;
case 0x66a175:c.instructions+=8;goto B66a175;
case 0x66a178:c.instructions+=7;goto B66a178;
case 0x66a17a:c.instructions+=6;goto B66a17a;
case 0x66a17d:c.instructions+=5;goto B66a17d;
case 0x66a17e:c.instructions+=4;goto B66a17e;
case 0x66a181:c.instructions+=3;goto B66a181;
case 0x66a183:c.instructions+=2;goto B66a183;
case 0x66a186:c.instructions+=1;goto B66a186;
case 0x66a18c:goto L66a18c;
case 0x66a190:c.instructions+=3;goto B66a190;
case 0x66a193:c.instructions+=2;goto B66a193;
case 0x66a196:c.instructions+=1;goto B66a196;
case 0x66a198:goto L66a198;
case 0x66a19c:c.instructions+=1;goto B66a19c;
case 0x66a19e:goto L66a19e;
case 0x66a1a1:c.instructions+=8;goto B66a1a1;
case 0x66a1a3:c.instructions+=7;goto B66a1a3;
case 0x66a1a6:c.instructions+=6;goto B66a1a6;
case 0x66a1a8:c.instructions+=5;goto B66a1a8;
case 0x66a1ab:c.instructions+=4;goto B66a1ab;
case 0x66a1ad:c.instructions+=3;goto B66a1ad;
case 0x66a1b0:c.instructions+=2;goto B66a1b0;
case 0x66a1b2:c.instructions+=1;goto B66a1b2;
case 0x66a1b4:goto L66a1b4;
case 0x66a1b7:goto L66a1b7;
case 0x66a1b9:c.instructions+=10;goto B66a1b9;
case 0x66a1bc:c.instructions+=9;goto B66a1bc;
case 0x66a1bf:c.instructions+=8;goto B66a1bf;
case 0x66a1c1:c.instructions+=7;goto B66a1c1;
case 0x66a1c3:c.instructions+=6;goto B66a1c3;
case 0x66a1c6:c.instructions+=5;goto B66a1c6;
case 0x66a1c9:c.instructions+=4;goto B66a1c9;
case 0x66a1ca:c.instructions+=3;goto B66a1ca;
case 0x66a1cb:c.instructions+=2;goto B66a1cb;
case 0x66a1cc:c.instructions+=1;goto B66a1cc;
case 0x66a1d2:goto L66a1d2;
case 0x66a1d5:c.instructions+=3;goto B66a1d5;
case 0x66a1d8:c.instructions+=2;goto B66a1d8;
case 0x66a1db:c.instructions+=1;goto B66a1db;
case 0x66a1dd:goto L66a1dd;
case 0x66a1e0:c.instructions+=5;goto B66a1e0;
case 0x66a1e1:c.instructions+=4;goto B66a1e1;
case 0x66a1e2:c.instructions+=3;goto B66a1e2;
case 0x66a1e3:c.instructions+=2;goto B66a1e3;
case 0x66a1e4:c.instructions+=1;goto B66a1e4;
case 0x66a25f:goto L66a25f;
case 0x66a261:c.instructions+=22;goto B66a261;
case 0x66a262:c.instructions+=21;goto B66a262;
case 0x66a264:c.instructions+=20;goto B66a264;
case 0x66a265:c.instructions+=19;goto B66a265;
case 0x66a266:c.instructions+=18;goto B66a266;
case 0x66a26a:c.instructions+=17;goto B66a26a;
case 0x66a26b:c.instructions+=16;goto B66a26b;
case 0x66a26e:c.instructions+=15;goto B66a26e;
case 0x66a271:c.instructions+=14;goto B66a271;
case 0x66a274:c.instructions+=13;goto B66a274;
case 0x66a275:c.instructions+=12;goto B66a275;
case 0x66a277:c.instructions+=11;goto B66a277;
case 0x66a27a:c.instructions+=10;goto B66a27a;
case 0x66a27b:c.instructions+=9;goto B66a27b;
case 0x66a27e:c.instructions+=8;goto B66a27e;
case 0x66a280:c.instructions+=7;goto B66a280;
case 0x66a282:c.instructions+=6;goto B66a282;
case 0x66a284:c.instructions+=5;goto B66a284;
case 0x66a287:c.instructions+=4;goto B66a287;
case 0x66a28a:c.instructions+=3;goto B66a28a;
case 0x66a28d:c.instructions+=2;goto B66a28d;
case 0x66a290:c.instructions+=1;goto B66a290;
case 0x66a292:goto L66a292;
case 0x66a293:c.instructions+=1;goto B66a293;
case 0x66a295:goto L66a295;
case 0x66a296:c.instructions+=2;goto B66a296;
case 0x66a297:c.instructions+=1;goto B66a297;
case 0x66a299:goto L66a299;
case 0x66a29c:c.instructions+=5;goto B66a29c;
case 0x66a29d:c.instructions+=4;goto B66a29d;
case 0x66a29e:c.instructions+=3;goto B66a29e;
case 0x66a29f:c.instructions+=2;goto B66a29f;
case 0x66a2a1:c.instructions+=1;goto B66a2a1;
case 0x66a2a6:goto L66a2a6;
case 0x66a2ab:goto L66a2ab;
case 0x66a2b2:goto L66a2b2;
case 0x66a2b8:c.instructions+=8;goto B66a2b8;
case 0x66a2bb:c.instructions+=7;goto B66a2bb;
case 0x66a2be:c.instructions+=6;goto B66a2be;
case 0x66a2c4:c.instructions+=5;goto B66a2c4;
case 0x66a2c7:c.instructions+=4;goto B66a2c7;
case 0x66a2ca:c.instructions+=3;goto B66a2ca;
case 0x66a2cd:c.instructions+=2;goto B66a2cd;
case 0x66a2d0:c.instructions+=1;goto B66a2d0;
case 0x66a2d6:goto L66a2d6;
case 0x66a2dc:c.instructions+=1;goto B66a2dc;
case 0x66a2de:goto L66a2de;
case 0x66a2e4:c.instructions+=1;goto B66a2e4;
case 0x66a2e6:goto L66a2e6;
case 0x66a2ec:c.instructions+=1;goto B66a2ec;
case 0x66a2f2:goto L66a2f2;
case 0x66a2f8:c.instructions+=1;goto B66a2f8;
case 0x66a2fa:goto L66a2fa;
case 0x66a300:c.instructions+=1;goto B66a300;
case 0x66a302:goto L66a302;
case 0x66a307:c.instructions+=1;goto B66a307;
case 0x66a30c:goto L66a30c;
case 0x66a30d:c.instructions+=11;goto B66a30d;
case 0x66a310:c.instructions+=10;goto B66a310;
case 0x66a311:c.instructions+=9;goto B66a311;
case 0x66a314:c.instructions+=8;goto B66a314;
case 0x66a318:c.instructions+=7;goto B66a318;
case 0x66a31b:c.instructions+=6;goto B66a31b;
case 0x66a31c:c.instructions+=5;goto B66a31c;
case 0x66a31d:c.instructions+=4;goto B66a31d;
case 0x66a320:c.instructions+=3;goto B66a320;
case 0x66a321:c.instructions+=2;goto B66a321;
case 0x66a323:c.instructions+=1;goto B66a323;
case 0x66a328:goto L66a328;
case 0x66a32c:c.instructions+=9;goto B66a32c;
case 0x66a330:c.instructions+=8;goto B66a330;
case 0x66a333:c.instructions+=7;goto B66a333;
case 0x66a335:c.instructions+=6;goto B66a335;
case 0x66a336:c.instructions+=5;goto B66a336;
case 0x66a33a:c.instructions+=4;goto B66a33a;
case 0x66a33d:c.instructions+=3;goto B66a33d;
case 0x66a33e:c.instructions+=2;goto B66a33e;
case 0x66a33f:c.instructions+=1;goto B66a33f;
case 0x66a341:goto L66a341;
case 0x66a347:goto L66a347;
case 0x66a34c:goto L66a34c;
case 0x66a352:goto L66a352;
case 0x66a357:goto L66a357;
case 0x66a358:c.instructions+=11;goto B66a358;
case 0x66a35b:c.instructions+=10;goto B66a35b;
case 0x66a35c:c.instructions+=9;goto B66a35c;
case 0x66a35f:c.instructions+=8;goto B66a35f;
case 0x66a363:c.instructions+=7;goto B66a363;
case 0x66a366:c.instructions+=6;goto B66a366;
case 0x66a367:c.instructions+=5;goto B66a367;
case 0x66a368:c.instructions+=4;goto B66a368;
case 0x66a36b:c.instructions+=3;goto B66a36b;
case 0x66a36c:c.instructions+=2;goto B66a36c;
case 0x66a36e:c.instructions+=1;goto B66a36e;
case 0x66a373:goto L66a373;
case 0x66a377:c.instructions+=9;goto B66a377;
case 0x66a37b:c.instructions+=8;goto B66a37b;
case 0x66a37e:c.instructions+=7;goto B66a37e;
case 0x66a380:c.instructions+=6;goto B66a380;
case 0x66a381:c.instructions+=5;goto B66a381;
case 0x66a385:c.instructions+=4;goto B66a385;
case 0x66a388:c.instructions+=3;goto B66a388;
case 0x66a389:c.instructions+=2;goto B66a389;
case 0x66a38a:c.instructions+=1;goto B66a38a;
case 0x66a38c:goto L66a38c;
case 0x66a392:goto L66a392;
case 0x66a394:goto L66a394;
case 0x66a39a:goto L66a39a;
case 0x66a39c:goto L66a39c;
case 0x66a3a0:c.instructions+=1;goto B66a3a0;
case 0x66a3a2:goto L66a3a2;
case 0x66a3a5:c.instructions+=4;goto B66a3a5;
case 0x66a3a8:c.instructions+=3;goto B66a3a8;
case 0x66a3aa:c.instructions+=2;goto B66a3aa;
case 0x66a3ad:c.instructions+=1;goto B66a3ad;
case 0x66a3af:goto L66a3af;
case 0x66a3b1:goto L66a3b1;
case 0x66a3b3:c.instructions+=1;goto B66a3b3;
case 0x66a3b6:goto L66a3b6;
case 0x66a3b8:goto L66a3b8;
case 0x66a3bc:c.instructions+=2;goto B66a3bc;
case 0x66a3bf:c.instructions+=1;goto B66a3bf;
case 0x66a3c1:goto L66a3c1;
case 0x66a3c2:c.instructions+=11;goto B66a3c2;
case 0x66a3c5:c.instructions+=10;goto B66a3c5;
case 0x66a3c6:c.instructions+=9;goto B66a3c6;
case 0x66a3c9:c.instructions+=8;goto B66a3c9;
case 0x66a3cd:c.instructions+=7;goto B66a3cd;
case 0x66a3d0:c.instructions+=6;goto B66a3d0;
case 0x66a3d1:c.instructions+=5;goto B66a3d1;
case 0x66a3d2:c.instructions+=4;goto B66a3d2;
case 0x66a3d5:c.instructions+=3;goto B66a3d5;
case 0x66a3d6:c.instructions+=2;goto B66a3d6;
case 0x66a3d8:c.instructions+=1;goto B66a3d8;
case 0x66a3dd:goto L66a3dd;
case 0x66a3e0:c.instructions+=1;goto B66a3e0;
case 0x66a3e3:goto L66a3e3;
case 0x66a3e7:c.instructions+=2;goto B66a3e7;
case 0x66a3ea:c.instructions+=1;goto B66a3ea;
case 0x66a3ec:goto L66a3ec;
case 0x66a3ee:c.instructions+=6;goto B66a3ee;
case 0x66a3ef:c.instructions+=5;goto B66a3ef;
case 0x66a3f0:c.instructions+=4;goto B66a3f0;
case 0x66a3f4:c.instructions+=3;goto B66a3f4;
case 0x66a3f5:c.instructions+=2;goto B66a3f5;
case 0x66a3f6:c.instructions+=1;goto B66a3f6;
case 0x66a3fc:goto L66a3fc;
case 0x66a3fe:goto L66a3fe;
case 0x66a402:c.instructions+=7;goto B66a402;
case 0x66a404:c.instructions+=6;goto B66a404;
case 0x66a405:c.instructions+=5;goto B66a405;
case 0x66a406:c.instructions+=4;goto B66a406;
case 0x66a40a:c.instructions+=3;goto B66a40a;
case 0x66a40b:c.instructions+=2;goto B66a40b;
case 0x66a40c:c.instructions+=1;goto B66a40c;
case 0x66a412:goto L66a412;
case 0x66a413:c.instructions+=4;goto B66a413;
case 0x66a414:c.instructions+=3;goto B66a414;
case 0x66a415:c.instructions+=2;goto B66a415;
case 0x66a416:c.instructions+=1;goto B66a416;
case 0x66a419:goto L66a419;
case 0x66a41b:c.instructions+=5;goto B66a41b;
case 0x66a41c:c.instructions+=4;goto B66a41c;
case 0x66a41e:c.instructions+=3;goto B66a41e;
case 0x66a420:c.instructions+=2;goto B66a420;
case 0x66a422:c.instructions+=1;goto B66a422;
case 0x66a424:goto L66a424;
case 0x66a425:c.instructions+=1;goto B66a425;
case 0x66a42a:goto L66a42a;
case 0x66a42d:c.instructions+=1;goto B66a42d;
case 0x66a42e:goto L66a42e;
case 0x66a431:c.instructions+=2;goto B66a431;
case 0x66a433:c.instructions+=1;goto B66a433;
case 0x66a435:goto L66a435;
case 0x66a437:c.instructions+=1;goto B66a437;
case 0x66a43c:goto L66a43c;
case 0x66a440:goto L66a440;
case 0x66a441:c.instructions+=1;goto B66a441;
case 0x66a442:goto L66a442;
case 0x66a444:c.instructions+=11;goto B66a444;
case 0x66a445:c.instructions+=10;goto B66a445;
case 0x66a447:c.instructions+=9;goto B66a447;
case 0x66a448:c.instructions+=8;goto B66a448;
case 0x66a449:c.instructions+=7;goto B66a449;
case 0x66a44a:c.instructions+=6;goto B66a44a;
case 0x66a44c:c.instructions+=5;goto B66a44c;
case 0x66a44f:c.instructions+=4;goto B66a44f;
case 0x66a451:c.instructions+=3;goto B66a451;
case 0x66a453:c.instructions+=2;goto B66a453;
case 0x66a454:c.instructions+=1;goto B66a454;
case 0x66a456:goto L66a456;
case 0x66a458:c.instructions+=1;goto B66a458;
case 0x66a45d:goto L66a45d;
case 0x66a460:goto L66a460;
case 0x66a463:c.instructions+=2;goto B66a463;
case 0x66a465:c.instructions+=1;goto B66a465;
case 0x66a467:goto L66a467;
case 0x66a469:c.instructions+=1;goto B66a469;
case 0x66a46e:goto L66a46e;
case 0x66a471:goto L66a471;
case 0x66a474:c.instructions+=2;goto B66a474;
case 0x66a476:c.instructions+=1;goto B66a476;
case 0x66a478:goto L66a478;
case 0x66a479:c.instructions+=1;goto B66a479;
case 0x66a47e:goto L66a47e;
case 0x66a47f:c.instructions+=1;goto B66a47f;
case 0x66a482:goto L66a482;
case 0x66a488:c.instructions+=3;goto B66a488;
case 0x66a48a:c.instructions+=2;goto B66a48a;
case 0x66a48c:c.instructions+=1;goto B66a48c;
case 0x66a48e:goto L66a48e;
case 0x66a490:c.instructions+=2;goto B66a490;
case 0x66a491:c.instructions+=1;goto B66a491;
case 0x66a494:goto L66a494;
case 0x66a496:goto L66a496;
case 0x66a49c:c.instructions+=1;goto B66a49c;
case 0x66a4a3:goto L66a4a3;
case 0x66a4a6:c.instructions+=2;goto B66a4a6;
case 0x66a4a8:c.instructions+=1;goto B66a4a8;
case 0x66a4aa:goto L66a4aa;
case 0x66a4ac:c.instructions+=2;goto B66a4ac;
case 0x66a4ad:c.instructions+=1;goto B66a4ad;
case 0x66a4b0:goto L66a4b0;
case 0x66a4b3:goto L66a4b3;
case 0x66a4b5:c.instructions+=2;goto B66a4b5;
case 0x66a4b7:c.instructions+=1;goto B66a4b7;
case 0x66a4b9:goto L66a4b9;
case 0x66a4bb:c.instructions+=2;goto B66a4bb;
case 0x66a4bc:c.instructions+=1;goto B66a4bc;
case 0x66a4bf:goto L66a4bf;
case 0x66a4c1:goto L66a4c1;
case 0x66a4c4:c.instructions+=2;goto B66a4c4;
case 0x66a4c7:c.instructions+=1;goto B66a4c7;
case 0x66a4c9:goto L66a4c9;
case 0x66a4cb:c.instructions+=1;goto B66a4cb;
case 0x66a4d0:goto L66a4d0;
case 0x66a4d1:c.instructions+=4;goto B66a4d1;
case 0x66a4d2:c.instructions+=3;goto B66a4d2;
case 0x66a4d3:c.instructions+=2;goto B66a4d3;
case 0x66a4d4:c.instructions+=1;goto B66a4d4;
case 0x66a4d5:goto L66a4d5;
case 0x66a4d7:c.instructions+=6;goto B66a4d7;
case 0x66a4d8:c.instructions+=5;goto B66a4d8;
case 0x66a4da:c.instructions+=4;goto B66a4da;
case 0x66a4de:c.instructions+=3;goto B66a4de;
case 0x66a4df:c.instructions+=2;goto B66a4df;
case 0x66a4e1:c.instructions+=1;goto B66a4e1;
case 0x66a4e3:goto L66a4e3;
case 0x66a4e4:c.instructions+=6;goto B66a4e4;
case 0x66a4e9:c.instructions+=5;goto B66a4e9;
case 0x66a4ec:c.instructions+=4;goto B66a4ec;
case 0x66a4ee:c.instructions+=3;goto B66a4ee;
case 0x66a4f0:c.instructions+=2;goto B66a4f0;
case 0x66a4f1:c.instructions+=1;goto B66a4f1;
case 0x66a4f6:goto L66a4f6;
case 0x66a4fa:c.instructions+=1;goto B66a4fa;
case 0x66a4fc:goto L66a4fc;
case 0x66a4fd:c.instructions+=1;goto B66a4fd;
case 0x66a502:goto L66a502;
case 0x66a503:goto L66a503;
case 0x66a505:c.instructions+=2;goto B66a505;
case 0x66a506:c.instructions+=1;goto B66a506;
case 0x66a508:goto L66a508;
case 0x66a50a:c.instructions+=1;goto B66a50a;
case 0x66a50f:goto L66a50f;
case 0x66a513:c.instructions+=1;goto B66a513;
case 0x66a515:goto L66a515;
case 0x66a516:c.instructions+=1;goto B66a516;
case 0x66a51b:goto L66a51b;
case 0x66a51c:goto L66a51c;
case 0x66a51e:goto L66a51e;
case 0x66a51f:c.instructions+=2;goto B66a51f;
case 0x66a520:c.instructions+=1;goto B66a520;
case 0x66a523:goto L66a523;
case 0x66a525:c.instructions+=6;goto B66a525;
case 0x66a526:c.instructions+=5;goto B66a526;
case 0x66a528:c.instructions+=4;goto B66a528;
case 0x66a52c:c.instructions+=3;goto B66a52c;
case 0x66a52d:c.instructions+=2;goto B66a52d;
case 0x66a52f:c.instructions+=1;goto B66a52f;
case 0x66a531:goto L66a531;
case 0x66a532:c.instructions+=6;goto B66a532;
case 0x66a537:c.instructions+=5;goto B66a537;
case 0x66a53a:c.instructions+=4;goto B66a53a;
case 0x66a53c:c.instructions+=3;goto B66a53c;
case 0x66a541:c.instructions+=2;goto B66a541;
case 0x66a542:c.instructions+=1;goto B66a542;
case 0x66a547:goto L66a547;
case 0x66a54b:c.instructions+=1;goto B66a54b;
case 0x66a54d:goto L66a54d;
case 0x66a54e:c.instructions+=1;goto B66a54e;
case 0x66a553:goto L66a553;
case 0x66a554:goto L66a554;
case 0x66a556:c.instructions+=2;goto B66a556;
case 0x66a557:c.instructions+=1;goto B66a557;
case 0x66a559:goto L66a559;
case 0x66a55b:c.instructions+=1;goto B66a55b;
case 0x66a560:goto L66a560;
case 0x66a564:c.instructions+=1;goto B66a564;
case 0x66a566:goto L66a566;
case 0x66a567:c.instructions+=1;goto B66a567;
case 0x66a56c:goto L66a56c;
case 0x66a56d:goto L66a56d;
case 0x66a56f:goto L66a56f;
case 0x66a570:c.instructions+=2;goto B66a570;
case 0x66a571:c.instructions+=1;goto B66a571;
case 0x66a574:goto L66a574;
case 0x66a576:c.instructions+=18;goto B66a576;
case 0x66a577:c.instructions+=17;goto B66a577;
case 0x66a579:c.instructions+=16;goto B66a579;
case 0x66a57a:c.instructions+=15;goto B66a57a;
case 0x66a57b:c.instructions+=14;goto B66a57b;
case 0x66a57e:c.instructions+=13;goto B66a57e;
case 0x66a57f:c.instructions+=12;goto B66a57f;
case 0x66a580:c.instructions+=11;goto B66a580;
case 0x66a583:c.instructions+=10;goto B66a583;
case 0x66a585:c.instructions+=9;goto B66a585;
case 0x66a587:c.instructions+=8;goto B66a587;
case 0x66a589:c.instructions+=7;goto B66a589;
case 0x66a58a:c.instructions+=6;goto B66a58a;
case 0x66a58d:c.instructions+=5;goto B66a58d;
case 0x66a594:c.instructions+=4;goto B66a594;
case 0x66a597:c.instructions+=3;goto B66a597;
case 0x66a59a:c.instructions+=2;goto B66a59a;
case 0x66a59d:c.instructions+=1;goto B66a59d;
case 0x66a59f:goto L66a59f;
case 0x66a5a1:c.instructions+=2;goto B66a5a1;
case 0x66a5a2:c.instructions+=1;goto B66a5a2;
case 0x66a5a5:goto L66a5a5;
case 0x66a5a7:c.instructions+=3;goto B66a5a7;
case 0x66a5a8:c.instructions+=2;goto B66a5a8;
case 0x66a5aa:c.instructions+=1;goto B66a5aa;
case 0x66a5ac:goto L66a5ac;
case 0x66a5af:c.instructions+=3;goto B66a5af;
case 0x66a5b1:c.instructions+=2;goto B66a5b1;
case 0x66a5b2:c.instructions+=1;goto B66a5b2;
case 0x66a5b5:goto L66a5b5;
case 0x66a5b7:c.instructions+=2;goto B66a5b7;
case 0x66a5ba:c.instructions+=1;goto B66a5ba;
case 0x66a5bd:goto L66a5bd;
case 0x66a5c0:c.instructions+=3;goto B66a5c0;
case 0x66a5c2:c.instructions+=2;goto B66a5c2;
case 0x66a5c4:c.instructions+=1;goto B66a5c4;
case 0x66a5c6:goto L66a5c6;
case 0x66a5c8:c.instructions+=2;goto B66a5c8;
case 0x66a5c9:c.instructions+=1;goto B66a5c9;
case 0x66a5cc:goto L66a5cc;
case 0x66a5ce:c.instructions+=3;goto B66a5ce;
case 0x66a5cf:c.instructions+=2;goto B66a5cf;
case 0x66a5d1:c.instructions+=1;goto B66a5d1;
case 0x66a5d3:goto L66a5d3;
case 0x66a5d6:c.instructions+=3;goto B66a5d6;
case 0x66a5d8:c.instructions+=2;goto B66a5d8;
case 0x66a5d9:c.instructions+=1;goto B66a5d9;
case 0x66a5dc:goto L66a5dc;
case 0x66a5de:c.instructions+=2;goto B66a5de;
case 0x66a5e1:c.instructions+=1;goto B66a5e1;
case 0x66a5e4:goto L66a5e4;
case 0x66a5e7:c.instructions+=3;goto B66a5e7;
case 0x66a5e9:c.instructions+=2;goto B66a5e9;
case 0x66a5eb:c.instructions+=1;goto B66a5eb;
case 0x66a5f1:goto L66a5f1;
case 0x66a5f3:c.instructions+=2;goto B66a5f3;
case 0x66a5f4:c.instructions+=1;goto B66a5f4;
case 0x66a5f7:goto L66a5f7;
case 0x66a5f9:c.instructions+=1;goto B66a5f9;
case 0x66a5fb:goto L66a5fb;
case 0x66a5ff:c.instructions+=8;goto B66a5ff;
case 0x66a605:c.instructions+=7;goto B66a605;
case 0x66a608:c.instructions+=6;goto B66a608;
case 0x66a60b:c.instructions+=5;goto B66a60b;
case 0x66a60e:c.instructions+=4;goto B66a60e;
case 0x66a610:c.instructions+=3;goto B66a610;
case 0x66a614:c.instructions+=2;goto B66a614;
case 0x66a616:c.instructions+=1;goto B66a616;
case 0x66a61c:goto L66a61c;
case 0x66a620:c.instructions+=3;goto B66a620;
case 0x66a623:c.instructions+=2;goto B66a623;
case 0x66a627:c.instructions+=1;goto B66a627;
case 0x66a629:goto L66a629;
case 0x66a62c:c.instructions+=1;goto B66a62c;
case 0x66a62e:goto L66a62e;
case 0x66a631:c.instructions+=1;goto B66a631;
case 0x66a633:goto L66a633;
case 0x66a636:c.instructions+=13;goto B66a636;
case 0x66a639:c.instructions+=12;goto B66a639;
case 0x66a63b:c.instructions+=11;goto B66a63b;
case 0x66a63d:c.instructions+=10;goto B66a63d;
case 0x66a640:c.instructions+=9;goto B66a640;
case 0x66a642:c.instructions+=8;goto B66a642;
case 0x66a645:c.instructions+=7;goto B66a645;
case 0x66a646:c.instructions+=6;goto B66a646;
case 0x66a649:c.instructions+=5;goto B66a649;
case 0x66a64c:c.instructions+=4;goto B66a64c;
case 0x66a64d:c.instructions+=3;goto B66a64d;
case 0x66a64f:c.instructions+=2;goto B66a64f;
case 0x66a652:c.instructions+=1;goto B66a652;
case 0x66a657:goto L66a657;
case 0x66a659:c.instructions+=2;goto B66a659;
case 0x66a65c:c.instructions+=1;goto B66a65c;
case 0x66a65e:goto L66a65e;
case 0x66a661:c.instructions+=5;goto B66a661;
case 0x66a662:c.instructions+=4;goto B66a662;
case 0x66a665:c.instructions+=3;goto B66a665;
case 0x66a666:c.instructions+=2;goto B66a666;
case 0x66a669:c.instructions+=1;goto B66a669;
case 0x66a66e:goto L66a66e;
case 0x66a674:c.instructions+=1;goto B66a674;
case 0x66a676:goto L66a676;
case 0x66a67d:c.instructions+=1;goto B66a67d;
case 0x66a67f:goto L66a67f;
case 0x66a681:c.instructions+=3;goto B66a681;
case 0x66a682:c.instructions+=2;goto B66a682;
case 0x66a684:c.instructions+=1;goto B66a684;
case 0x66a686:goto L66a686;
case 0x66a688:goto L66a688;
case 0x66a68b:c.instructions+=2;goto B66a68b;
case 0x66a691:c.instructions+=1;goto B66a691;
case 0x66a693:goto L66a693;
case 0x66a695:c.instructions+=3;goto B66a695;
case 0x66a696:c.instructions+=2;goto B66a696;
case 0x66a698:c.instructions+=1;goto B66a698;
case 0x66a69a:goto L66a69a;
case 0x66a69c:goto L66a69c;
case 0x66a69f:c.instructions+=1;goto B66a69f;
case 0x66a6a5:goto L66a6a5;
case 0x66a6a8:c.instructions+=5;goto B66a6a8;
case 0x66a6a9:c.instructions+=4;goto B66a6a9;
case 0x66a6aa:c.instructions+=3;goto B66a6aa;
case 0x66a6ab:c.instructions+=2;goto B66a6ab;
case 0x66a6ac:c.instructions+=1;goto B66a6ac;
case 0x66a6af:goto L66a6af;
case 0x66a6b1:c.instructions+=13;goto B66a6b1;
case 0x66a6b2:c.instructions+=12;goto B66a6b2;
case 0x66a6b4:c.instructions+=11;goto B66a6b4;
case 0x66a6b7:c.instructions+=10;goto B66a6b7;
case 0x66a6bb:c.instructions+=9;goto B66a6bb;
case 0x66a6bc:c.instructions+=8;goto B66a6bc;
case 0x66a6bf:c.instructions+=7;goto B66a6bf;
case 0x66a6c0:c.instructions+=6;goto B66a6c0;
case 0x66a6c3:c.instructions+=5;goto B66a6c3;
case 0x66a6c4:c.instructions+=4;goto B66a6c4;
case 0x66a6c7:c.instructions+=3;goto B66a6c7;
case 0x66a6c9:c.instructions+=2;goto B66a6c9;
case 0x66a6cc:c.instructions+=1;goto B66a6cc;
case 0x66a6ce:goto L66a6ce;
case 0x66a6d0:c.instructions+=2;goto B66a6d0;
case 0x66a6d1:c.instructions+=1;goto B66a6d1;
case 0x66a6d4:goto L66a6d4;
case 0x66a6d6:c.instructions+=3;goto B66a6d6;
case 0x66a6d7:c.instructions+=2;goto B66a6d7;
case 0x66a6d9:c.instructions+=1;goto B66a6d9;
case 0x66a6db:goto L66a6db;
case 0x66a6dd:c.instructions+=2;goto B66a6dd;
case 0x66a6de:c.instructions+=1;goto B66a6de;
case 0x66a6e1:goto L66a6e1;
case 0x66a6e3:c.instructions+=2;goto B66a6e3;
case 0x66a6e6:c.instructions+=1;goto B66a6e6;
case 0x66a6e9:goto L66a6e9;
case 0x66a6eb:c.instructions+=2;goto B66a6eb;
case 0x66a6ed:c.instructions+=1;goto B66a6ed;
case 0x66a6ef:goto L66a6ef;
case 0x66a6f1:c.instructions+=2;goto B66a6f1;
case 0x66a6f2:c.instructions+=1;goto B66a6f2;
case 0x66a6f5:goto L66a6f5;
case 0x66a6f7:c.instructions+=3;goto B66a6f7;
case 0x66a6f8:c.instructions+=2;goto B66a6f8;
case 0x66a6fa:c.instructions+=1;goto B66a6fa;
case 0x66a6fc:goto L66a6fc;
case 0x66a6fe:c.instructions+=2;goto B66a6fe;
case 0x66a6ff:c.instructions+=1;goto B66a6ff;
case 0x66a702:goto L66a702;
case 0x66a704:c.instructions+=2;goto B66a704;
case 0x66a707:c.instructions+=1;goto B66a707;
case 0x66a70a:goto L66a70a;
case 0x66a70c:c.instructions+=2;goto B66a70c;
case 0x66a70e:c.instructions+=1;goto B66a70e;
case 0x66a710:goto L66a710;
case 0x66a712:c.instructions+=2;goto B66a712;
case 0x66a713:c.instructions+=1;goto B66a713;
case 0x66a716:goto L66a716;
case 0x66a718:c.instructions+=3;goto B66a718;
case 0x66a719:c.instructions+=2;goto B66a719;
case 0x66a71b:c.instructions+=1;goto B66a71b;
case 0x66a71d:goto L66a71d;
case 0x66a71f:c.instructions+=2;goto B66a71f;
case 0x66a720:c.instructions+=1;goto B66a720;
case 0x66a723:goto L66a723;
case 0x66a725:c.instructions+=2;goto B66a725;
case 0x66a728:c.instructions+=1;goto B66a728;
case 0x66a72b:goto L66a72b;
case 0x66a72d:c.instructions+=2;goto B66a72d;
case 0x66a72f:c.instructions+=1;goto B66a72f;
case 0x66a731:goto L66a731;
case 0x66a733:c.instructions+=2;goto B66a733;
case 0x66a734:c.instructions+=1;goto B66a734;
case 0x66a737:goto L66a737;
case 0x66a739:c.instructions+=1;goto B66a739;
case 0x66a73b:goto L66a73b;
case 0x66a742:c.instructions+=1;goto B66a742;
case 0x66a747:goto L66a747;
case 0x66a74a:c.instructions+=2;goto B66a74a;
case 0x66a74d:c.instructions+=1;goto B66a74d;
case 0x66a752:goto L66a752;
case 0x66a754:c.instructions+=3;goto B66a754;
case 0x66a756:c.instructions+=2;goto B66a756;
case 0x66a759:c.instructions+=1;goto B66a759;
case 0x66a75f:goto L66a75f;
case 0x66a762:c.instructions+=3;goto B66a762;
case 0x66a765:c.instructions+=2;goto B66a765;
case 0x66a768:c.instructions+=1;goto B66a768;
case 0x66a76a:goto L66a76a;
case 0x66a76c:c.instructions+=1;goto B66a76c;
case 0x66a771:goto L66a771;
case 0x66a773:c.instructions+=2;goto B66a773;
case 0x66a774:c.instructions+=1;goto B66a774;
case 0x66a776:goto L66a776;
case 0x66a778:c.instructions+=1;goto B66a778;
case 0x66a77d:goto L66a77d;
case 0x66a780:c.instructions+=1;goto B66a780;
case 0x66a782:goto L66a782;
case 0x66a786:goto L66a786;
case 0x66a78a:c.instructions+=1;goto B66a78a;
case 0x66a790:goto L66a790;
case 0x66a793:c.instructions+=4;goto B66a793;
case 0x66a794:c.instructions+=3;goto B66a794;
case 0x66a795:c.instructions+=2;goto B66a795;
case 0x66a798:c.instructions+=1;goto B66a798;
case 0x66a79d:goto L66a79d;
case 0x66a79f:c.instructions+=2;goto B66a79f;
case 0x66a7a2:c.instructions+=1;goto B66a7a2;
case 0x66a7a4:goto L66a7a4;
case 0x66a7a7:c.instructions+=2;goto B66a7a7;
case 0x66a7a9:c.instructions+=1;goto B66a7a9;
case 0x66a7ab:goto L66a7ab;
case 0x66a7ae:c.instructions+=2;goto B66a7ae;
case 0x66a7b1:c.instructions+=1;goto B66a7b1;
case 0x66a7b3:goto L66a7b3;
case 0x66a7b6:c.instructions+=1;goto B66a7b6;
case 0x66a7b9:goto L66a7b9;
case 0x66a7bc:c.instructions+=6;goto B66a7bc;
case 0x66a7c0:c.instructions+=5;goto B66a7c0;
case 0x66a7c3:c.instructions+=4;goto B66a7c3;
case 0x66a7c6:c.instructions+=3;goto B66a7c6;
case 0x66a7c9:c.instructions+=2;goto B66a7c9;
case 0x66a7cc:c.instructions+=1;goto B66a7cc;
case 0x66a7ce:goto L66a7ce;
case 0x66a7d2:c.instructions+=5;goto B66a7d2;
case 0x66a7d5:c.instructions+=4;goto B66a7d5;
case 0x66a7d8:c.instructions+=3;goto B66a7d8;
case 0x66a7db:c.instructions+=2;goto B66a7db;
case 0x66a7de:c.instructions+=1;goto B66a7de;
case 0x66a7e3:goto L66a7e3;
case 0x66a7e5:c.instructions+=2;goto B66a7e5;
case 0x66a7e8:c.instructions+=1;goto B66a7e8;
case 0x66a7ea:goto L66a7ea;
case 0x66a7ee:c.instructions+=2;goto B66a7ee;
case 0x66a7f2:c.instructions+=1;goto B66a7f2;
case 0x66a7f4:goto L66a7f4;
case 0x66a7f7:c.instructions+=7;goto B66a7f7;
case 0x66a7f9:c.instructions+=6;goto B66a7f9;
case 0x66a7fd:c.instructions+=5;goto B66a7fd;
case 0x66a7fe:c.instructions+=4;goto B66a7fe;
case 0x66a7ff:c.instructions+=3;goto B66a7ff;
case 0x66a802:c.instructions+=2;goto B66a802;
case 0x66a803:c.instructions+=1;goto B66a803;
case 0x66a808:goto L66a808;
case 0x66a80a:c.instructions+=2;goto B66a80a;
case 0x66a80d:c.instructions+=1;goto B66a80d;
case 0x66a80f:goto L66a80f;
case 0x66a812:c.instructions+=3;goto B66a812;
case 0x66a816:c.instructions+=2;goto B66a816;
case 0x66a819:c.instructions+=1;goto B66a819;
case 0x66a81b:goto L66a81b;
case 0x66a81e:c.instructions+=2;goto B66a81e;
case 0x66a820:c.instructions+=1;goto B66a820;
case 0x66a822:goto L66a822;
case 0x66a824:c.instructions+=1;goto B66a824;
case 0x66a829:goto L66a829;
case 0x66a82c:c.instructions+=5;goto B66a82c;
case 0x66a82d:c.instructions+=4;goto B66a82d;
case 0x66a82e:c.instructions+=3;goto B66a82e;
case 0x66a82f:c.instructions+=2;goto B66a82f;
case 0x66a830:c.instructions+=1;goto B66a830;
case 0x66a833:goto L66a833;
case 0x66a83a:c.instructions+=1;goto B66a83a;
case 0x66a83c:goto L66a83c;
case 0x66a83e:c.instructions+=10;goto B66a83e;
case 0x66a83f:c.instructions+=9;goto B66a83f;
case 0x66a841:c.instructions+=8;goto B66a841;
case 0x66a844:c.instructions+=7;goto B66a844;
case 0x66a847:c.instructions+=6;goto B66a847;
case 0x66a848:c.instructions+=5;goto B66a848;
case 0x66a849:c.instructions+=4;goto B66a849;
case 0x66a84b:c.instructions+=3;goto B66a84b;
case 0x66a84c:c.instructions+=2;goto B66a84c;
case 0x66a84f:c.instructions+=1;goto B66a84f;
case 0x66a854:goto L66a854;
case 0x66a857:c.instructions+=7;goto B66a857;
case 0x66a859:c.instructions+=6;goto B66a859;
case 0x66a85a:c.instructions+=5;goto B66a85a;
case 0x66a85b:c.instructions+=4;goto B66a85b;
case 0x66a85c:c.instructions+=3;goto B66a85c;
case 0x66a85d:c.instructions+=2;goto B66a85d;
case 0x66a85f:c.instructions+=1;goto B66a85f;
case 0x66a864:goto L66a864;
case 0x66a866:c.instructions+=2;goto B66a866;
case 0x66a868:c.instructions+=1;goto B66a868;
case 0x66a86e:goto L66a86e;
case 0x66a871:c.instructions+=1;goto B66a871;
case 0x66a877:goto L66a877;
case 0x66a87a:c.instructions+=2;goto B66a87a;
case 0x66a87e:c.instructions+=1;goto B66a87e;
case 0x66a884:goto L66a884;
case 0x66a888:c.instructions+=1;goto B66a888;
case 0x66a88a:goto L66a88a;
case 0x66a88d:c.instructions+=1;goto B66a88d;
case 0x66a893:goto L66a893;
case 0x66a896:c.instructions+=3;goto B66a896;
case 0x66a899:c.instructions+=2;goto B66a899;
case 0x66a89c:c.instructions+=1;goto B66a89c;
case 0x66a89e:goto L66a89e;
case 0x66a89f:c.instructions+=3;goto B66a89f;
case 0x66a8a0:c.instructions+=2;goto B66a8a0;
case 0x66a8a2:c.instructions+=1;goto B66a8a2;
case 0x66a8a7:goto L66a8a7;
case 0x66a8a9:c.instructions+=1;goto B66a8a9;
case 0x66a8af:goto L66a8af;
case 0x66a8b3:goto L66a8b3;
case 0x66a8b6:c.instructions+=1;goto B66a8b6;
case 0x66a8bc:goto L66a8bc;
case 0x66a8bf:c.instructions+=9;goto B66a8bf;
case 0x66a8c2:c.instructions+=8;goto B66a8c2;
case 0x66a8c6:c.instructions+=7;goto B66a8c6;
case 0x66a8cc:c.instructions+=6;goto B66a8cc;
case 0x66a8cf:c.instructions+=5;goto B66a8cf;
case 0x66a8d2:c.instructions+=4;goto B66a8d2;
case 0x66a8d5:c.instructions+=3;goto B66a8d5;
case 0x66a8d7:c.instructions+=2;goto B66a8d7;
case 0x66a8da:c.instructions+=1;goto B66a8da;
case 0x66a8dc:goto L66a8dc;
case 0x66a8df:c.instructions+=1;goto B66a8df;
case 0x66a8e1:goto L66a8e1;
case 0x66a8e4:c.instructions+=1;goto B66a8e4;
case 0x66a8e7:goto L66a8e7;
case 0x66a8ea:c.instructions+=2;goto B66a8ea;
case 0x66a8ee:c.instructions+=1;goto B66a8ee;
case 0x66a8f0:goto L66a8f0;
case 0x66a8f2:c.instructions+=1;goto B66a8f2;
case 0x66a8f4:goto L66a8f4;
case 0x66a8f6:c.instructions+=1;goto B66a8f6;
case 0x66a8f8:goto L66a8f8;
case 0x66a8fb:c.instructions+=1;goto B66a8fb;
case 0x66a8fd:goto L66a8fd;
case 0x66a900:c.instructions+=1;goto B66a900;
case 0x66a903:goto L66a903;
case 0x66a907:goto L66a907;
case 0x66a90a:c.instructions+=3;goto B66a90a;
case 0x66a90c:c.instructions+=2;goto B66a90c;
case 0x66a90e:c.instructions+=1;goto B66a90e;
case 0x66a910:goto L66a910;
case 0x66a912:c.instructions+=1;goto B66a912;
case 0x66a914:goto L66a914;
case 0x66a915:c.instructions+=2;goto B66a915;
case 0x66a917:c.instructions+=1;goto B66a917;
case 0x66a918:goto L66a918;
case 0x66a91a:c.instructions+=1;goto B66a91a;
case 0x66a91c:goto L66a91c;
case 0x66a91e:c.instructions+=3;goto B66a91e;
case 0x66a920:c.instructions+=2;goto B66a920;
case 0x66a922:c.instructions+=1;goto B66a922;
case 0x66a928:goto L66a928;
case 0x66a92a:c.instructions+=1;goto B66a92a;
case 0x66a92c:goto L66a92c;
case 0x66a92e:c.instructions+=1;goto B66a92e;
case 0x66a930:goto L66a930;
case 0x66a932:c.instructions+=1;goto B66a932;
case 0x66a938:goto L66a938;
case 0x66a93a:c.instructions+=1;goto B66a93a;
case 0x66a93c:goto L66a93c;
case 0x66a93f:c.instructions+=3;goto B66a93f;
case 0x66a940:c.instructions+=2;goto B66a940;
case 0x66a944:c.instructions+=1;goto B66a944;
case 0x66a949:goto L66a949;
case 0x66a94a:c.instructions+=3;goto B66a94a;
case 0x66a94c:c.instructions+=2;goto B66a94c;
case 0x66a94e:c.instructions+=1;goto B66a94e;
case 0x66a950:goto L66a950;
case 0x66a952:c.instructions+=1;goto B66a952;
case 0x66a954:goto L66a954;
case 0x66a955:c.instructions+=1;goto B66a955;
case 0x66a95a:goto L66a95a;
case 0x66a95b:c.instructions+=3;goto B66a95b;
case 0x66a95e:c.instructions+=2;goto B66a95e;
case 0x66a961:c.instructions+=1;goto B66a961;
case 0x66a963:goto L66a963;
case 0x66a965:goto L66a965;
case 0x66a966:c.instructions+=4;goto B66a966;
case 0x66a967:c.instructions+=3;goto B66a967;
case 0x66a968:c.instructions+=2;goto B66a968;
case 0x66a969:c.instructions+=1;goto B66a969;
case 0x66a96c:goto L66a96c;
case 0x66a96f:c.instructions+=1;goto B66a96f;
case 0x66a971:goto L66a971;
case 0x66a972:goto L66a972;
case 0x66a974:c.instructions+=2;goto B66a974;
case 0x66a977:c.instructions+=1;goto B66a977;
case 0x66a979:goto L66a979;
case 0x66a97c:c.instructions+=1;goto B66a97c;
case 0x66a97e:goto L66a97e;
case 0x66a981:c.instructions+=9;goto B66a981;
case 0x66a984:c.instructions+=8;goto B66a984;
case 0x66a985:c.instructions+=7;goto B66a985;
case 0x66a988:c.instructions+=6;goto B66a988;
case 0x66a98b:c.instructions+=5;goto B66a98b;
case 0x66a98e:c.instructions+=4;goto B66a98e;
case 0x66a990:c.instructions+=3;goto B66a990;
case 0x66a991:c.instructions+=2;goto B66a991;
case 0x66a992:c.instructions+=1;goto B66a992;
case 0x66a997:goto L66a997;
case 0x66a999:c.instructions+=1;goto B66a999;
case 0x66a99b:goto L66a99b;
case 0x66a99d:c.instructions+=2;goto B66a99d;
case 0x66a99f:c.instructions+=1;goto B66a99f;
case 0x66a9a1:goto L66a9a1;
case 0x66a9a4:c.instructions+=1;goto B66a9a4;
case 0x66a9a6:goto L66a9a6;
case 0x66a9a8:goto L66a9a8;
case 0x66a9ab:c.instructions+=3;goto B66a9ab;
case 0x66a9ae:c.instructions+=2;goto B66a9ae;
case 0x66a9b1:c.instructions+=1;goto B66a9b1;
case 0x66a9b3:goto L66a9b3;
case 0x66a9b4:c.instructions+=2;goto B66a9b4;
case 0x66a9b7:c.instructions+=1;goto B66a9b7;
case 0x66a9ba:goto L66a9ba;
case 0x66a9bc:c.instructions+=1;goto B66a9bc;
case 0x66a9c2:goto L66a9c2;
case 0x66a9c5:c.instructions+=1;goto B66a9c5;
case 0x66a9c7:goto L66a9c7;
case 0x66a9c8:c.instructions+=6;goto B66a9c8;
case 0x66a9cb:c.instructions+=5;goto B66a9cb;
case 0x66a9cc:c.instructions+=4;goto B66a9cc;
case 0x66a9cd:c.instructions+=3;goto B66a9cd;
case 0x66a9d0:c.instructions+=2;goto B66a9d0;
case 0x66a9d2:c.instructions+=1;goto B66a9d2;
case 0x66a9d7:goto L66a9d7;
case 0x66a9d9:c.instructions+=1;goto B66a9d9;
case 0x66a9db:goto L66a9db;
case 0x66a9dd:c.instructions+=1;goto B66a9dd;
case 0x66a9df:goto L66a9df;
case 0x66a9e1:c.instructions+=1;goto B66a9e1;
case 0x66a9e3:goto L66a9e3;
case 0x66a9e6:c.instructions+=3;goto B66a9e6;
case 0x66a9e9:c.instructions+=2;goto B66a9e9;
case 0x66a9ec:c.instructions+=1;goto B66a9ec;
case 0x66a9ee:goto L66a9ee;
case 0x66a9f1:c.instructions+=9;goto B66a9f1;
case 0x66a9f4:c.instructions+=8;goto B66a9f4;
case 0x66a9f7:c.instructions+=7;goto B66a9f7;
case 0x66a9fa:c.instructions+=6;goto B66a9fa;
case 0x66a9fd:c.instructions+=5;goto B66a9fd;
case 0x66a9fe:c.instructions+=4;goto B66a9fe;
case 0x66a9ff:c.instructions+=3;goto B66a9ff;
case 0x66aa01:c.instructions+=2;goto B66aa01;
case 0x66aa02:c.instructions+=1;goto B66aa02;
case 0x66aa07:goto L66aa07;
case 0x66aa0c:goto L66aa0c;
case 0x66aa0e:c.instructions+=4;goto B66aa0e;
case 0x66aa0f:c.instructions+=3;goto B66aa0f;
case 0x66aa11:c.instructions+=2;goto B66aa11;
case 0x66aa15:c.instructions+=1;goto B66aa15;
case 0x66aa17:goto L66aa17;
case 0x66aa19:c.instructions+=1;goto B66aa19;
case 0x66aa1b:goto L66aa1b;
case 0x66aa1e:c.instructions+=4;goto B66aa1e;
case 0x66aa20:c.instructions+=3;goto B66aa20;
case 0x66aa23:c.instructions+=2;goto B66aa23;
case 0x66aa26:c.instructions+=1;goto B66aa26;
case 0x66aa2b:goto L66aa2b;
case 0x66aa2c:c.instructions+=1;goto B66aa2c;
case 0x66aa2f:goto L66aa2f;
case 0x66aa31:c.instructions+=16;goto B66aa31;
case 0x66aa32:c.instructions+=15;goto B66aa32;
case 0x66aa34:c.instructions+=14;goto B66aa34;
case 0x66aa37:c.instructions+=13;goto B66aa37;
case 0x66aa3b:c.instructions+=12;goto B66aa3b;
case 0x66aa3c:c.instructions+=11;goto B66aa3c;
case 0x66aa3f:c.instructions+=10;goto B66aa3f;
case 0x66aa40:c.instructions+=9;goto B66aa40;
case 0x66aa42:c.instructions+=8;goto B66aa42;
case 0x66aa45:c.instructions+=7;goto B66aa45;
case 0x66aa46:c.instructions+=6;goto B66aa46;
case 0x66aa48:c.instructions+=5;goto B66aa48;
case 0x66aa4b:c.instructions+=4;goto B66aa4b;
case 0x66aa4e:c.instructions+=3;goto B66aa4e;
case 0x66aa52:c.instructions+=2;goto B66aa52;
case 0x66aa56:c.instructions+=1;goto B66aa56;
case 0x66aa58:goto L66aa58;
case 0x66aa5b:c.instructions+=4;goto B66aa5b;
case 0x66aa5e:c.instructions+=3;goto B66aa5e;
case 0x66aa61:c.instructions+=2;goto B66aa61;
case 0x66aa64:c.instructions+=1;goto B66aa64;
case 0x66aa66:goto L66aa66;
case 0x66aa6d:c.instructions+=1;goto B66aa6d;
case 0x66aa6f:goto L66aa6f;
case 0x66aa72:c.instructions+=6;goto B66aa72;
case 0x66aa74:c.instructions+=5;goto B66aa74;
case 0x66aa76:c.instructions+=4;goto B66aa76;
case 0x66aa78:c.instructions+=3;goto B66aa78;
case 0x66aa79:c.instructions+=2;goto B66aa79;
case 0x66aa7a:c.instructions+=1;goto B66aa7a;
case 0x66aa7f:goto L66aa7f;
case 0x66aa81:c.instructions+=2;goto B66aa81;
case 0x66aa84:c.instructions+=1;goto B66aa84;
case 0x66aa8a:goto L66aa8a;
case 0x66aa8b:c.instructions+=2;goto B66aa8b;
case 0x66aa8d:c.instructions+=1;goto B66aa8d;
case 0x66aa92:goto L66aa92;
case 0x66aa94:c.instructions+=2;goto B66aa94;
case 0x66aa97:c.instructions+=1;goto B66aa97;
case 0x66aa9d:goto L66aa9d;
case 0x66aa9f:c.instructions+=7;goto B66aa9f;
case 0x66aaa2:c.instructions+=6;goto B66aaa2;
case 0x66aaa4:c.instructions+=5;goto B66aaa4;
case 0x66aaa7:c.instructions+=4;goto B66aaa7;
case 0x66aaa9:c.instructions+=3;goto B66aaa9;
case 0x66aaaa:c.instructions+=2;goto B66aaaa;
case 0x66aaab:c.instructions+=1;goto B66aaab;
case 0x66aab0:goto L66aab0;
case 0x66aab2:c.instructions+=2;goto B66aab2;
case 0x66aab5:c.instructions+=1;goto B66aab5;
case 0x66aabb:goto L66aabb;
case 0x66aabf:c.instructions+=2;goto B66aabf;
case 0x66aac3:c.instructions+=1;goto B66aac3;
case 0x66aac5:goto L66aac5;
case 0x66aac8:c.instructions+=4;goto B66aac8;
case 0x66aacb:c.instructions+=3;goto B66aacb;
case 0x66aace:c.instructions+=2;goto B66aace;
case 0x66aad1:c.instructions+=1;goto B66aad1;
case 0x66aad3:goto L66aad3;
case 0x66aada:c.instructions+=1;goto B66aada;
case 0x66aadc:goto L66aadc;
case 0x66aadf:c.instructions+=7;goto B66aadf;
case 0x66aae1:c.instructions+=6;goto B66aae1;
case 0x66aae3:c.instructions+=5;goto B66aae3;
case 0x66aae5:c.instructions+=4;goto B66aae5;
case 0x66aae6:c.instructions+=3;goto B66aae6;
case 0x66aae7:c.instructions+=2;goto B66aae7;
case 0x66aae9:c.instructions+=1;goto B66aae9;
case 0x66aaee:goto L66aaee;
case 0x66aaf0:c.instructions+=2;goto B66aaf0;
case 0x66aaf3:c.instructions+=1;goto B66aaf3;
case 0x66aaf9:goto L66aaf9;
case 0x66aafa:c.instructions+=2;goto B66aafa;
case 0x66aafc:c.instructions+=1;goto B66aafc;
case 0x66ab01:goto L66ab01;
case 0x66ab03:c.instructions+=2;goto B66ab03;
case 0x66ab06:c.instructions+=1;goto B66ab06;
case 0x66ab0c:goto L66ab0c;
case 0x66ab0e:c.instructions+=7;goto B66ab0e;
case 0x66ab11:c.instructions+=6;goto B66ab11;
case 0x66ab13:c.instructions+=5;goto B66ab13;
case 0x66ab16:c.instructions+=4;goto B66ab16;
case 0x66ab18:c.instructions+=3;goto B66ab18;
case 0x66ab19:c.instructions+=2;goto B66ab19;
case 0x66ab1a:c.instructions+=1;goto B66ab1a;
case 0x66ab1f:goto L66ab1f;
case 0x66ab21:c.instructions+=2;goto B66ab21;
case 0x66ab24:c.instructions+=1;goto B66ab24;
case 0x66ab2a:goto L66ab2a;
case 0x66ab2d:c.instructions+=5;goto B66ab2d;
case 0x66ab2f:c.instructions+=4;goto B66ab2f;
case 0x66ab33:c.instructions+=3;goto B66ab33;
case 0x66ab38:c.instructions+=2;goto B66ab38;
case 0x66ab3b:c.instructions+=1;goto B66ab3b;
case 0x66ab41:goto L66ab41;
case 0x66ab43:goto L66ab43;
case 0x66ab46:goto L66ab46;
case 0x66ab4a:c.instructions+=8;goto B66ab4a;
case 0x66ab4d:c.instructions+=7;goto B66ab4d;
case 0x66ab50:c.instructions+=6;goto B66ab50;
case 0x66ab53:c.instructions+=5;goto B66ab53;
case 0x66ab56:c.instructions+=4;goto B66ab56;
case 0x66ab59:c.instructions+=3;goto B66ab59;
case 0x66ab5b:c.instructions+=2;goto B66ab5b;
case 0x66ab5f:c.instructions+=1;goto B66ab5f;
case 0x66ab65:goto L66ab65;
case 0x66ab68:c.instructions+=4;goto B66ab68;
case 0x66ab6b:c.instructions+=3;goto B66ab6b;
case 0x66ab6d:c.instructions+=2;goto B66ab6d;
case 0x66ab70:c.instructions+=1;goto B66ab70;
case 0x66ab72:goto L66ab72;
case 0x66ab79:goto L66ab79;
case 0x66ab7c:c.instructions+=1;goto B66ab7c;
case 0x66ab7e:goto L66ab7e;
case 0x66ab81:c.instructions+=6;goto B66ab81;
case 0x66ab83:c.instructions+=5;goto B66ab83;
case 0x66ab86:c.instructions+=4;goto B66ab86;
case 0x66ab89:c.instructions+=3;goto B66ab89;
case 0x66ab8a:c.instructions+=2;goto B66ab8a;
case 0x66ab8d:c.instructions+=1;goto B66ab8d;
case 0x66ab92:goto L66ab92;
case 0x66ab94:c.instructions+=2;goto B66ab94;
case 0x66ab97:c.instructions+=1;goto B66ab97;
case 0x66ab99:goto L66ab99;
case 0x66ab9c:c.instructions+=3;goto B66ab9c;
case 0x66ab9e:c.instructions+=2;goto B66ab9e;
case 0x66ab9f:c.instructions+=1;goto B66ab9f;
case 0x66aba2:goto L66aba2;
case 0x66aba5:c.instructions+=4;goto B66aba5;
case 0x66aba7:c.instructions+=3;goto B66aba7;
case 0x66abaa:c.instructions+=2;goto B66abaa;
case 0x66abb0:c.instructions+=1;goto B66abb0;
case 0x66abb5:goto L66abb5;
case 0x66abb9:c.instructions+=1;goto B66abb9;
case 0x66abbb:goto L66abbb;
case 0x66abbe:c.instructions+=2;goto B66abbe;
case 0x66abc1:c.instructions+=1;goto B66abc1;
case 0x66abc3:goto L66abc3;
case 0x66abc7:goto L66abc7;
case 0x66abc9:c.instructions+=3;goto B66abc9;
case 0x66abcb:c.instructions+=2;goto B66abcb;
case 0x66abce:c.instructions+=1;goto B66abce;
case 0x66abd0:goto L66abd0;
case 0x66abd3:c.instructions+=5;goto B66abd3;
case 0x66abd6:c.instructions+=4;goto B66abd6;
case 0x66abda:c.instructions+=3;goto B66abda;
case 0x66abdd:c.instructions+=2;goto B66abdd;
case 0x66abde:c.instructions+=1;goto B66abde;
case 0x66abe3:goto L66abe3;
case 0x66abe5:c.instructions+=2;goto B66abe5;
case 0x66abe8:c.instructions+=1;goto B66abe8;
case 0x66abea:goto L66abea;
case 0x66abeb:c.instructions+=3;goto B66abeb;
case 0x66abee:c.instructions+=2;goto B66abee;
case 0x66abf1:c.instructions+=1;goto B66abf1;
case 0x66abf3:goto L66abf3;
case 0x66abf6:c.instructions+=3;goto B66abf6;
case 0x66abfa:c.instructions+=2;goto B66abfa;
case 0x66abfe:c.instructions+=1;goto B66abfe;
case 0x66ac04:goto L66ac04;
case 0x66ac06:goto L66ac06;
case 0x66ac0d:goto L66ac0d;
case 0x66ac10:c.instructions+=5;goto B66ac10;
case 0x66ac11:c.instructions+=4;goto B66ac11;
case 0x66ac12:c.instructions+=3;goto B66ac12;
case 0x66ac13:c.instructions+=2;goto B66ac13;
case 0x66ac14:c.instructions+=1;goto B66ac14;
case 0x66ac17:goto L66ac17;
case 0x66ac19:c.instructions+=9;goto B66ac19;
case 0x66ac1a:c.instructions+=8;goto B66ac1a;
case 0x66ac1c:c.instructions+=7;goto B66ac1c;
case 0x66ac1d:c.instructions+=6;goto B66ac1d;
case 0x66ac20:c.instructions+=5;goto B66ac20;
case 0x66ac27:c.instructions+=4;goto B66ac27;
case 0x66ac28:c.instructions+=3;goto B66ac28;
case 0x66ac2a:c.instructions+=2;goto B66ac2a;
case 0x66ac30:c.instructions+=1;goto B66ac30;
case 0x66ac32:goto L66ac32;
case 0x66ac38:c.instructions+=11;goto B66ac38;
case 0x66ac3b:c.instructions+=10;goto B66ac3b;
case 0x66ac3e:c.instructions+=9;goto B66ac3e;
case 0x66ac42:c.instructions+=8;goto B66ac42;
case 0x66ac45:c.instructions+=7;goto B66ac45;
case 0x66ac48:c.instructions+=6;goto B66ac48;
case 0x66ac4b:c.instructions+=5;goto B66ac4b;
case 0x66ac4e:c.instructions+=4;goto B66ac4e;
case 0x66ac52:c.instructions+=3;goto B66ac52;
case 0x66ac57:c.instructions+=2;goto B66ac57;
case 0x66ac5a:c.instructions+=1;goto B66ac5a;
case 0x66ac5c:goto L66ac5c;
case 0x66ac5f:c.instructions+=1;goto B66ac5f;
case 0x66ac61:goto L66ac61;
case 0x66ac64:c.instructions+=1;goto B66ac64;
case 0x66ac66:goto L66ac66;
case 0x66ac67:c.instructions+=3;goto B66ac67;
case 0x66ac68:c.instructions+=2;goto B66ac68;
case 0x66ac6a:c.instructions+=1;goto B66ac6a;
case 0x66ac6f:goto L66ac6f;
case 0x66ac71:goto L66ac71;
case 0x66ac77:c.instructions+=9;goto B66ac77;
case 0x66ac7a:c.instructions+=8;goto B66ac7a;
case 0x66ac7c:c.instructions+=7;goto B66ac7c;
case 0x66ac80:c.instructions+=6;goto B66ac80;
case 0x66ac83:c.instructions+=5;goto B66ac83;
case 0x66ac88:c.instructions+=4;goto B66ac88;
case 0x66ac89:c.instructions+=3;goto B66ac89;
case 0x66ac8a:c.instructions+=2;goto B66ac8a;
case 0x66ac8c:c.instructions+=1;goto B66ac8c;
case 0x66ac91:goto L66ac91;
case 0x66ac92:c.instructions+=2;goto B66ac92;
case 0x66ac98:c.instructions+=1;goto B66ac98;
case 0x66ac9a:goto L66ac9a;
case 0x66aca1:c.instructions+=1;goto B66aca1;
case 0x66aca3:goto L66aca3;
case 0x66aca8:c.instructions+=2;goto B66aca8;
case 0x66acae:c.instructions+=1;goto B66acae;
case 0x66acb3:goto L66acb3;
case 0x66acba:c.instructions+=2;goto B66acba;
case 0x66acbb:c.instructions+=1;goto B66acbb;
case 0x66acbc:goto L66acbc;
case 0x66acc3:c.instructions+=6;goto B66acc3;
case 0x66acca:c.instructions+=5;goto B66acca;
case 0x66accb:c.instructions+=4;goto B66accb;
case 0x66accd:c.instructions+=3;goto B66accd;
case 0x66acce:c.instructions+=2;goto B66acce;
case 0x66accf:c.instructions+=1;goto B66accf;
case 0x66acd2:goto L66acd2;
case 0x66acd4:c.instructions+=7;goto B66acd4;
case 0x66acd5:c.instructions+=6;goto B66acd5;
case 0x66acd7:c.instructions+=5;goto B66acd7;
case 0x66acd8:c.instructions+=4;goto B66acd8;
case 0x66acdb:c.instructions+=3;goto B66acdb;
case 0x66acdf:c.instructions+=2;goto B66acdf;
case 0x66ace0:c.instructions+=1;goto B66ace0;
case 0x66ace2:goto L66ace2;
case 0x66ace9:c.instructions+=1;goto B66ace9;
case 0x66acee:goto L66acee;
case 0x66acf2:c.instructions+=7;goto B66acf2;
case 0x66acf5:c.instructions+=6;goto B66acf5;
case 0x66acfb:c.instructions+=5;goto B66acfb;
case 0x66ad01:c.instructions+=4;goto B66ad01;
case 0x66ad02:c.instructions+=3;goto B66ad02;
case 0x66ad05:c.instructions+=2;goto B66ad05;
case 0x66ad08:c.instructions+=1;goto B66ad08;
case 0x66ad0a:goto L66ad0a;
case 0x66ad11:c.instructions+=1;goto B66ad11;
case 0x66ad16:goto L66ad16;
case 0x66ad1a:c.instructions+=2;goto B66ad1a;
case 0x66ad1d:c.instructions+=1;goto B66ad1d;
case 0x66ad1f:goto L66ad1f;
case 0x66ad24:c.instructions+=1;goto B66ad24;
case 0x66ad26:goto L66ad26;
case 0x66ad28:c.instructions+=12;goto B66ad28;
case 0x66ad2c:c.instructions+=11;goto B66ad2c;
case 0x66ad2f:c.instructions+=10;goto B66ad2f;
case 0x66ad32:c.instructions+=9;goto B66ad32;
case 0x66ad35:c.instructions+=8;goto B66ad35;
case 0x66ad38:c.instructions+=7;goto B66ad38;
case 0x66ad3d:c.instructions+=6;goto B66ad3d;
case 0x66ad3e:c.instructions+=5;goto B66ad3e;
case 0x66ad3f:c.instructions+=4;goto B66ad3f;
case 0x66ad41:c.instructions+=3;goto B66ad41;
case 0x66ad42:c.instructions+=2;goto B66ad42;
case 0x66ad44:c.instructions+=1;goto B66ad44;
case 0x66ad49:goto L66ad49;
case 0x66ad4b:c.instructions+=2;goto B66ad4b;
case 0x66ad4e:c.instructions+=1;goto B66ad4e;
case 0x66ad50:goto L66ad50;
case 0x66ad54:c.instructions+=14;goto B66ad54;
case 0x66ad58:c.instructions+=13;goto B66ad58;
case 0x66ad5c:c.instructions+=12;goto B66ad5c;
case 0x66ad5f:c.instructions+=11;goto B66ad5f;
case 0x66ad62:c.instructions+=10;goto B66ad62;
case 0x66ad64:c.instructions+=9;goto B66ad64;
case 0x66ad65:c.instructions+=8;goto B66ad65;
case 0x66ad66:c.instructions+=7;goto B66ad66;
case 0x66ad69:c.instructions+=6;goto B66ad69;
case 0x66ad6c:c.instructions+=5;goto B66ad6c;
case 0x66ad71:c.instructions+=4;goto B66ad71;
case 0x66ad73:c.instructions+=3;goto B66ad73;
case 0x66ad74:c.instructions+=2;goto B66ad74;
case 0x66ad76:c.instructions+=1;goto B66ad76;
case 0x66ad7b:goto L66ad7b;
case 0x66ad7d:c.instructions+=2;goto B66ad7d;
case 0x66ad80:c.instructions+=1;goto B66ad80;
case 0x66ad82:goto L66ad82;
case 0x66ad85:c.instructions+=6;goto B66ad85;
case 0x66ad88:c.instructions+=5;goto B66ad88;
case 0x66ad8f:c.instructions+=4;goto B66ad8f;
case 0x66ad95:c.instructions+=3;goto B66ad95;
case 0x66ad9a:c.instructions+=2;goto B66ad9a;
case 0x66ad9c:c.instructions+=1;goto B66ad9c;
case 0x66ada2:goto L66ada2;
case 0x66ada4:c.instructions+=5;goto B66ada4;
case 0x66ada8:c.instructions+=4;goto B66ada8;
case 0x66adad:c.instructions+=3;goto B66adad;
case 0x66adaf:c.instructions+=2;goto B66adaf;
case 0x66adb0:c.instructions+=1;goto B66adb0;
case 0x66adb5:goto L66adb5;
case 0x66adb7:c.instructions+=2;goto B66adb7;
case 0x66adba:c.instructions+=1;goto B66adba;
case 0x66adbc:goto L66adbc;
case 0x66adc2:goto L66adc2;
case 0x66adc3:goto L66adc3;
case 0x66adc9:c.instructions+=2;goto B66adc9;
case 0x66adcc:c.instructions+=1;goto B66adcc;
case 0x66adce:goto L66adce;
case 0x66add3:c.instructions+=2;goto B66add3;
case 0x66add9:c.instructions+=1;goto B66add9;
case 0x66adde:goto L66adde;
case 0x66ade1:c.instructions+=2;goto B66ade1;
case 0x66ade2:c.instructions+=1;goto B66ade2;
case 0x66ade3:goto L66ade3;
case 0x66ade6:c.instructions+=4;goto B66ade6;
case 0x66ade7:c.instructions+=3;goto B66ade7;
case 0x66ade8:c.instructions+=2;goto B66ade8;
case 0x66ade9:c.instructions+=1;goto B66ade9;
case 0x66adec:goto L66adec;
case 0x66adee:c.instructions+=10;goto B66adee;
case 0x66adef:c.instructions+=9;goto B66adef;
case 0x66adf0:c.instructions+=8;goto B66adf0;
case 0x66adf2:c.instructions+=7;goto B66adf2;
case 0x66adf8:c.instructions+=6;goto B66adf8;
case 0x66adfa:c.instructions+=5;goto B66adfa;
case 0x66adfb:c.instructions+=4;goto B66adfb;
case 0x66adfd:c.instructions+=3;goto B66adfd;
case 0x66adff:c.instructions+=2;goto B66adff;
case 0x66ae05:c.instructions+=1;goto B66ae05;
case 0x66ae07:goto L66ae07;
case 0x66ae09:c.instructions+=1;goto B66ae09;
case 0x66ae0e:goto L66ae0e;
case 0x66ae10:goto L66ae10;
case 0x66ae16:c.instructions+=1;goto B66ae16;
case 0x66ae18:goto L66ae18;
case 0x66ae1a:c.instructions+=2;goto B66ae1a;
case 0x66ae20:c.instructions+=1;goto B66ae20;
case 0x66ae22:goto L66ae22;
case 0x66ae28:c.instructions+=3;goto B66ae28;
case 0x66ae2b:c.instructions+=2;goto B66ae2b;
case 0x66ae2d:c.instructions+=1;goto B66ae2d;
case 0x66ae2f:goto L66ae2f;
case 0x66ae31:c.instructions+=1;goto B66ae31;
case 0x66ae36:goto L66ae36;
case 0x66ae3c:c.instructions+=1;goto B66ae3c;
case 0x66ae3f:goto L66ae3f;
case 0x66ae40:c.instructions+=2;goto B66ae40;
case 0x66ae46:c.instructions+=1;goto B66ae46;
case 0x66ae48:goto L66ae48;
case 0x66ae4a:c.instructions+=1;goto B66ae4a;
case 0x66ae4f:goto L66ae4f;
case 0x66ae55:c.instructions+=1;goto B66ae55;
case 0x66ae5a:goto L66ae5a;
case 0x66ae5c:c.instructions+=3;goto B66ae5c;
case 0x66ae62:c.instructions+=2;goto B66ae62;
case 0x66ae63:c.instructions+=1;goto B66ae63;
case 0x66ae65:goto L66ae65;
case 0x66ae6b:c.instructions+=3;goto B66ae6b;
case 0x66ae6e:c.instructions+=2;goto B66ae6e;
case 0x66ae70:c.instructions+=1;goto B66ae70;
case 0x66ae72:goto L66ae72;
case 0x66ae73:c.instructions+=1;goto B66ae73;
case 0x66ae78:goto L66ae78;
case 0x66ae7e:c.instructions+=2;goto B66ae7e;
case 0x66ae7f:c.instructions+=1;goto B66ae7f;
case 0x66ae82:goto L66ae82;
case 0x66ae83:c.instructions+=2;goto B66ae83;
case 0x66ae89:c.instructions+=1;goto B66ae89;
case 0x66ae8b:goto L66ae8b;
case 0x66ae91:c.instructions+=3;goto B66ae91;
case 0x66ae93:c.instructions+=2;goto B66ae93;
case 0x66ae95:c.instructions+=1;goto B66ae95;
case 0x66ae97:goto L66ae97;
case 0x66ae98:c.instructions+=1;goto B66ae98;
case 0x66ae9d:goto L66ae9d;
case 0x66ae9e:c.instructions+=1;goto B66ae9e;
case 0x66aea0:goto L66aea0;
case 0x66aea6:c.instructions+=2;goto B66aea6;
case 0x66aea8:c.instructions+=1;goto B66aea8;
case 0x66aeaa:goto L66aeaa;
case 0x66aeab:c.instructions+=1;goto B66aeab;
case 0x66aeb0:goto L66aeb0;
case 0x66aeb1:c.instructions+=1;goto B66aeb1;
case 0x66aeb7:goto L66aeb7;
case 0x66aeba:c.instructions+=2;goto B66aeba;
case 0x66aebc:c.instructions+=1;goto B66aebc;
case 0x66aebe:goto L66aebe;
case 0x66aec0:c.instructions+=1;goto B66aec0;
case 0x66aec5:goto L66aec5;
case 0x66aec8:goto L66aec8;
case 0x66aece:c.instructions+=3;goto B66aece;
case 0x66aed0:c.instructions+=2;goto B66aed0;
case 0x66aed2:c.instructions+=1;goto B66aed2;
case 0x66aed4:goto L66aed4;
case 0x66aed5:c.instructions+=1;goto B66aed5;
case 0x66aeda:goto L66aeda;
case 0x66aedb:c.instructions+=1;goto B66aedb;
case 0x66aedd:goto L66aedd;
case 0x66aee3:c.instructions+=3;goto B66aee3;
case 0x66aee5:c.instructions+=2;goto B66aee5;
case 0x66aee7:c.instructions+=1;goto B66aee7;
case 0x66aee9:goto L66aee9;
case 0x66aeeb:c.instructions+=1;goto B66aeeb;
case 0x66aef0:goto L66aef0;
case 0x66aef2:goto L66aef2;
case 0x66aef8:c.instructions+=3;goto B66aef8;
case 0x66aefa:c.instructions+=2;goto B66aefa;
case 0x66aefc:c.instructions+=1;goto B66aefc;
case 0x66aefe:goto L66aefe;
case 0x66af00:c.instructions+=1;goto B66af00;
case 0x66af05:goto L66af05;
case 0x66af07:goto L66af07;
case 0x66af0a:c.instructions+=2;goto B66af0a;
case 0x66af0c:c.instructions+=1;goto B66af0c;
case 0x66af0e:goto L66af0e;
case 0x66af10:c.instructions+=1;goto B66af10;
case 0x66af15:goto L66af15;
case 0x66af18:goto L66af18;
case 0x66af1b:c.instructions+=2;goto B66af1b;
case 0x66af1d:c.instructions+=1;goto B66af1d;
case 0x66af1f:goto L66af1f;
case 0x66af20:c.instructions+=1;goto B66af20;
case 0x66af25:goto L66af25;
case 0x66af26:c.instructions+=1;goto B66af26;
case 0x66af29:goto L66af29;
case 0x66af2f:c.instructions+=3;goto B66af2f;
case 0x66af31:c.instructions+=2;goto B66af31;
case 0x66af33:c.instructions+=1;goto B66af33;
case 0x66af35:goto L66af35;
case 0x66af36:c.instructions+=1;goto B66af36;
case 0x66af3b:goto L66af3b;
case 0x66af3c:c.instructions+=1;goto B66af3c;
case 0x66af3e:goto L66af3e;
case 0x66af44:c.instructions+=3;goto B66af44;
case 0x66af46:c.instructions+=2;goto B66af46;
case 0x66af48:c.instructions+=1;goto B66af48;
case 0x66af4a:goto L66af4a;
case 0x66af4b:c.instructions+=1;goto B66af4b;
case 0x66af50:goto L66af50;
case 0x66af51:c.instructions+=1;goto B66af51;
case 0x66af53:goto L66af53;
case 0x66af59:c.instructions+=3;goto B66af59;
case 0x66af5b:c.instructions+=2;goto B66af5b;
case 0x66af5d:c.instructions+=1;goto B66af5d;
case 0x66af5f:goto L66af5f;
case 0x66af61:c.instructions+=2;goto B66af61;
case 0x66af62:c.instructions+=1;goto B66af62;
case 0x66af65:goto L66af65;
case 0x66af67:goto L66af67;
case 0x66af6d:c.instructions+=3;goto B66af6d;
case 0x66af6f:c.instructions+=2;goto B66af6f;
case 0x66af71:c.instructions+=1;goto B66af71;
case 0x66af73:goto L66af73;
case 0x66af75:c.instructions+=2;goto B66af75;
case 0x66af76:c.instructions+=1;goto B66af76;
case 0x66af79:goto L66af79;
case 0x66af7b:goto L66af7b;
case 0x66af7e:c.instructions+=2;goto B66af7e;
case 0x66af80:c.instructions+=1;goto B66af80;
case 0x66af82:goto L66af82;
case 0x66af84:c.instructions+=2;goto B66af84;
case 0x66af85:c.instructions+=1;goto B66af85;
case 0x66af88:goto L66af88;
case 0x66af8b:goto L66af8b;
case 0x66af8e:c.instructions+=2;goto B66af8e;
case 0x66af90:c.instructions+=1;goto B66af90;
case 0x66af92:goto L66af92;
case 0x66af94:c.instructions+=2;goto B66af94;
case 0x66af95:c.instructions+=1;goto B66af95;
case 0x66af98:goto L66af98;
case 0x66af9b:goto L66af9b;
case 0x66afa1:c.instructions+=1;goto B66afa1;
case 0x66afa6:goto L66afa6;
case 0x66afa7:c.instructions+=2;goto B66afa7;
case 0x66afad:c.instructions+=1;goto B66afad;
case 0x66afb2:goto L66afb2;
case 0x66afb5:c.instructions+=1;goto B66afb5;
case 0x66afba:goto L66afba;
case 0x66afbb:c.instructions+=4;goto B66afbb;
case 0x66afbe:c.instructions+=3;goto B66afbe;
case 0x66afbf:c.instructions+=2;goto B66afbf;
case 0x66afc0:c.instructions+=1;goto B66afc0;
case 0x66afc5:goto L66afc5;
case 0x66afc7:c.instructions+=5;goto B66afc7;
case 0x66afc8:c.instructions+=4;goto B66afc8;
case 0x66afca:c.instructions+=3;goto B66afca;
case 0x66afcb:c.instructions+=2;goto B66afcb;
case 0x66afcd:c.instructions+=1;goto B66afcd;
case 0x66afd2:goto L66afd2;
case 0x66afd6:c.instructions+=1;goto B66afd6;
case 0x66afd8:goto L66afd8;
case 0x66afd9:c.instructions+=1;goto B66afd9;
case 0x66afde:goto L66afde;
case 0x66afdf:goto L66afdf;
case 0x66afe1:c.instructions+=3;goto B66afe1;
case 0x66afe2:c.instructions+=2;goto B66afe2;
case 0x66afe3:c.instructions+=1;goto B66afe3;
case 0x66afe6:goto L66afe6;
case 0x66afe8:c.instructions+=8;goto B66afe8;
case 0x66afe9:c.instructions+=7;goto B66afe9;
case 0x66afeb:c.instructions+=6;goto B66afeb;
case 0x66afee:c.instructions+=5;goto B66afee;
case 0x66afef:c.instructions+=4;goto B66afef;
case 0x66aff1:c.instructions+=3;goto B66aff1;
case 0x66aff7:c.instructions+=2;goto B66aff7;
case 0x66affe:c.instructions+=1;goto B66affe;
default:missing_instruction(c.pc);}
B66a002:L66a002:{c.instructions+=1;NFSU2_TR(0x66a002);
if(r1(R+518)){{goto L66a04b;}}
}
B66a004:L66a004:{c.instructions+=10;NFSU2_TR(0x66a004);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a007:{NFSU2_TR(0x66a007);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B66a009:{NFSU2_TR(0x66a009);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a00c:{NFSU2_TR(0x66a00c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a00f:{NFSU2_TR(0x66a00f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B66a011:{NFSU2_TR(0x66a011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a013:{NFSU2_TR(0x66a013);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66a016:{NFSU2_TR(0x66a016);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66a018:{NFSU2_TR(0x66a018);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a01b:{NFSU2_TR(0x66a01b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66a04b;}}
}
B66a01d:L66a01d:{c.instructions+=1;NFSU2_TR(0x66a01d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a020:L66a020:{c.instructions+=11;NFSU2_TR(0x66a020);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a023:{NFSU2_TR(0x66a023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66a025:{NFSU2_TR(0x66a025);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a028:{NFSU2_TR(0x66a028);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a02b:{NFSU2_TR(0x66a02b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a02d:{NFSU2_TR(0x66a02d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B66a030:{NFSU2_TR(0x66a030);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+8),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+8),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66a033:{NFSU2_TR(0x66a033);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a034:{NFSU2_TR(0x66a034);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66a036:{NFSU2_TR(0x66a036);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a039:{NFSU2_TR(0x66a039);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a03full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a03f:L66a03f:{c.instructions+=4;NFSU2_TR(0x66a03f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66a043:{NFSU2_TR(0x66a043);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66a046:{NFSU2_TR(0x66a046);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a049:{NFSU2_TR(0x66a049);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a020u);}goto L66a020;}}
}
B66a04b:L66a04b:{c.instructions+=2;NFSU2_TR(0x66a04b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66a04f:{NFSU2_TR(0x66a04f);
if(r1(R+518)){{goto L66a09b;}}
}
B66a051:L66a051:{c.instructions+=10;NFSU2_TR(0x66a051);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a054:{NFSU2_TR(0x66a054);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B66a056:{NFSU2_TR(0x66a056);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a059:{NFSU2_TR(0x66a059);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a05c:{NFSU2_TR(0x66a05c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B66a05e:{NFSU2_TR(0x66a05e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a060:{NFSU2_TR(0x66a060);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66a063:{NFSU2_TR(0x66a063);
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
B66a065:{NFSU2_TR(0x66a065);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a068:{NFSU2_TR(0x66a068);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66a09b;}}
}
B66a06a:L66a06a:{c.instructions+=1;NFSU2_TR(0x66a06a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a06d:L66a06d:{c.instructions+=12;NFSU2_TR(0x66a06d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66a070:{NFSU2_TR(0x66a070);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a073:{NFSU2_TR(0x66a073);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a075:{NFSU2_TR(0x66a075);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66a078:{NFSU2_TR(0x66a078);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a07b:{NFSU2_TR(0x66a07b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a07d:{NFSU2_TR(0x66a07d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66a080:{NFSU2_TR(0x66a080);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a081:{NFSU2_TR(0x66a081);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a084:{NFSU2_TR(0x66a084);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66a086:{NFSU2_TR(0x66a086);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a089:{NFSU2_TR(0x66a089);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a08full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a08f:L66a08f:{c.instructions+=4;NFSU2_TR(0x66a08f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x8ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66a093:{NFSU2_TR(0x66a093);
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
B66a096:{NFSU2_TR(0x66a096);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a099:{NFSU2_TR(0x66a099);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a06du);}goto L66a06d;}}
}
B66a09b:L66a09b:{c.instructions+=2;NFSU2_TR(0x66a09b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
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
B66a09f:{NFSU2_TR(0x66a09f);
if(r1(R+518)){{goto L66a1dd;}}
}
B66a0a5:L66a0a5:{c.instructions+=9;NFSU2_TR(0x66a0a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a0a8:{NFSU2_TR(0x66a0a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B66a0aa:{NFSU2_TR(0x66a0aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66a0ad:{NFSU2_TR(0x66a0ad);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B66a0af:{NFSU2_TR(0x66a0af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a0b2:{NFSU2_TR(0x66a0b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a0b4:{NFSU2_TR(0x66a0b4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B66a0b7:{NFSU2_TR(0x66a0b7);
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
B66a0b9:{NFSU2_TR(0x66a0b9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66a1dd;}}
}
B66a0bf:L66a0bf:{c.instructions+=1;NFSU2_TR(0x66a0bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a0c2:L66a0c2:{c.instructions+=11;NFSU2_TR(0x66a0c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a0c4:{NFSU2_TR(0x66a0c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a0c7:{NFSU2_TR(0x66a0c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a0ca:{NFSU2_TR(0x66a0ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66a0cc:{NFSU2_TR(0x66a0cc);
__builtin_memmove((R+24),(R+4),4);
}
B66a0ce:{NFSU2_TR(0x66a0ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B66a0d1:{NFSU2_TR(0x66a0d1);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66a0d4:{NFSU2_TR(0x66a0d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a0d5:{NFSU2_TR(0x66a0d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a0d6:{NFSU2_TR(0x66a0d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a0d7:{NFSU2_TR(0x66a0d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a0ddull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a0dd:L66a0dd:{c.instructions+=4;NFSU2_TR(0x66a0dd);
w1(R+512,carry<u32>(r4(R+28),u32(0x8ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B66a0e0:{NFSU2_TR(0x66a0e0);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B66a0e3:{NFSU2_TR(0x66a0e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a0e6:{NFSU2_TR(0x66a0e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a0c2u);}goto L66a0c2;}}
}
B66a0e8:L66a0e8:{c.instructions+=1;NFSU2_TR(0x66a0e8);
{goto L66a1dd;}
}
B66a0ed:L66a0ed:{c.instructions+=5;NFSU2_TR(0x66a0ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a0f0:{NFSU2_TR(0x66a0f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a0f3:{NFSU2_TR(0x66a0f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a0f5:{NFSU2_TR(0x66a0f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a0f6:{NFSU2_TR(0x66a0f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a0f9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a0f9:L66a0f9:{c.instructions+=3;NFSU2_TR(0x66a0f9);
__builtin_memmove((R+24),(R+0),4);
}
B66a0fb:{NFSU2_TR(0x66a0fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66a0ff:{NFSU2_TR(0x66a0ff);
if(r1(R+518)){{goto L66a148;}}
}
B66a101:L66a101:{c.instructions+=10;NFSU2_TR(0x66a101);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a104:{NFSU2_TR(0x66a104);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B66a106:{NFSU2_TR(0x66a106);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a109:{NFSU2_TR(0x66a109);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a10c:{NFSU2_TR(0x66a10c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B66a10e:{NFSU2_TR(0x66a10e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a110:{NFSU2_TR(0x66a110);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66a113:{NFSU2_TR(0x66a113);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66a115:{NFSU2_TR(0x66a115);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a118:{NFSU2_TR(0x66a118);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66a148;}}
}
B66a11a:L66a11a:{c.instructions+=1;NFSU2_TR(0x66a11a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a11d:L66a11d:{c.instructions+=11;NFSU2_TR(0x66a11d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a120:{NFSU2_TR(0x66a120);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66a122:{NFSU2_TR(0x66a122);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a125:{NFSU2_TR(0x66a125);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a128:{NFSU2_TR(0x66a128);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a12a:{NFSU2_TR(0x66a12a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B66a12d:{NFSU2_TR(0x66a12d);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+8),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+8),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66a130:{NFSU2_TR(0x66a130);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a131:{NFSU2_TR(0x66a131);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66a133:{NFSU2_TR(0x66a133);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a136:{NFSU2_TR(0x66a136);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a13cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a13c:L66a13c:{c.instructions+=4;NFSU2_TR(0x66a13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66a140:{NFSU2_TR(0x66a140);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66a143:{NFSU2_TR(0x66a143);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a146:{NFSU2_TR(0x66a146);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a11du);}goto L66a11d;}}
}
B66a148:L66a148:{c.instructions+=2;NFSU2_TR(0x66a148);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66a14c:{NFSU2_TR(0x66a14c);
if(r1(R+518)){{goto L66a198;}}
}
B66a14e:L66a14e:{c.instructions+=10;NFSU2_TR(0x66a14e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a151:{NFSU2_TR(0x66a151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B66a153:{NFSU2_TR(0x66a153);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a156:{NFSU2_TR(0x66a156);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a159:{NFSU2_TR(0x66a159);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B66a15b:{NFSU2_TR(0x66a15b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a15d:{NFSU2_TR(0x66a15d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66a160:{NFSU2_TR(0x66a160);
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
B66a162:{NFSU2_TR(0x66a162);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a165:{NFSU2_TR(0x66a165);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66a198;}}
}
B66a167:L66a167:{c.instructions+=1;NFSU2_TR(0x66a167);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a16a:L66a16a:{c.instructions+=12;NFSU2_TR(0x66a16a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66a16d:{NFSU2_TR(0x66a16d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a170:{NFSU2_TR(0x66a170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a172:{NFSU2_TR(0x66a172);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66a175:{NFSU2_TR(0x66a175);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a178:{NFSU2_TR(0x66a178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a17a:{NFSU2_TR(0x66a17a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66a17d:{NFSU2_TR(0x66a17d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a17e:{NFSU2_TR(0x66a17e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a181:{NFSU2_TR(0x66a181);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66a183:{NFSU2_TR(0x66a183);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a186:{NFSU2_TR(0x66a186);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a18cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a18c:L66a18c:{c.instructions+=4;NFSU2_TR(0x66a18c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),u32(0x8ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x8ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66a190:{NFSU2_TR(0x66a190);
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
B66a193:{NFSU2_TR(0x66a193);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a196:{NFSU2_TR(0x66a196);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a16au);}goto L66a16a;}}
}
B66a198:L66a198:{c.instructions+=2;NFSU2_TR(0x66a198);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
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
B66a19c:{NFSU2_TR(0x66a19c);
if(r1(R+518)){{goto L66a1dd;}}
}
B66a19e:L66a19e:{c.instructions+=9;NFSU2_TR(0x66a19e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a1a1:{NFSU2_TR(0x66a1a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B66a1a3:{NFSU2_TR(0x66a1a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66a1a6:{NFSU2_TR(0x66a1a6);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B66a1a8:{NFSU2_TR(0x66a1a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a1ab:{NFSU2_TR(0x66a1ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a1ad:{NFSU2_TR(0x66a1ad);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B66a1b0:{NFSU2_TR(0x66a1b0);
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
B66a1b2:{NFSU2_TR(0x66a1b2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66a1dd;}}
}
B66a1b4:L66a1b4:{c.instructions+=1;NFSU2_TR(0x66a1b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a1b7:L66a1b7:{c.instructions+=11;NFSU2_TR(0x66a1b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a1b9:{NFSU2_TR(0x66a1b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a1bc:{NFSU2_TR(0x66a1bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a1bf:{NFSU2_TR(0x66a1bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66a1c1:{NFSU2_TR(0x66a1c1);
__builtin_memmove((R+24),(R+4),4);
}
B66a1c3:{NFSU2_TR(0x66a1c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B66a1c6:{NFSU2_TR(0x66a1c6);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+24),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66a1c9:{NFSU2_TR(0x66a1c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a1ca:{NFSU2_TR(0x66a1ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a1cb:{NFSU2_TR(0x66a1cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a1cc:{NFSU2_TR(0x66a1cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a1d2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a1d2:L66a1d2:{c.instructions+=4;NFSU2_TR(0x66a1d2);
w1(R+512,carry<u32>(r4(R+28),u32(0x8ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B66a1d5:{NFSU2_TR(0x66a1d5);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
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
B66a1d8:{NFSU2_TR(0x66a1d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a1db:{NFSU2_TR(0x66a1db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a1b7u);}goto L66a1b7;}}
}
B66a1dd:L66a1dd:{c.instructions+=6;NFSU2_TR(0x66a1dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a1e0:{NFSU2_TR(0x66a1e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66a1e1:{NFSU2_TR(0x66a1e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66a1e2:{NFSU2_TR(0x66a1e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66a1e3:{NFSU2_TR(0x66a1e3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66a1e4:{NFSU2_TR(0x66a1e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66a25f:L66a25f:{c.instructions+=23;NFSU2_TR(0x66a25f);
__builtin_memmove((R+28),(R+28),4);
}
B66a261:{NFSU2_TR(0x66a261);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a262:{NFSU2_TR(0x66a262);
__builtin_memmove((R+20),(R+16),4);
}
B66a264:{NFSU2_TR(0x66a264);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a265:{NFSU2_TR(0x66a265);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a266:{NFSU2_TR(0x66a266);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66a26a:{NFSU2_TR(0x66a26a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a26b:{NFSU2_TR(0x66a26b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66a26e:{NFSU2_TR(0x66a26e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a271:{NFSU2_TR(0x66a271);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66a274:{NFSU2_TR(0x66a274);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a275:{NFSU2_TR(0x66a275);
__builtin_memmove((R+24),(R+4),4);
}
B66a277:{NFSU2_TR(0x66a277);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a27a:{NFSU2_TR(0x66a27a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a27b:{NFSU2_TR(0x66a27b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66a27e:{NFSU2_TR(0x66a27e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B66a280:{NFSU2_TR(0x66a280);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66a282:{NFSU2_TR(0x66a282);
__builtin_memmove((R+4),(R+8),4);
}
B66a284:{NFSU2_TR(0x66a284);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66a287:{NFSU2_TR(0x66a287);
w1(R+512,u8((r4(R+4))<(u32(0xcull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0xcull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66a28a:{NFSU2_TR(0x66a28a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a28d:{NFSU2_TR(0x66a28d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a290:{NFSU2_TR(0x66a290);
if(r1(R+518)){{goto L66a2ab;}}
}
B66a292:L66a292:{c.instructions+=2;NFSU2_TR(0x66a292);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66a293:{NFSU2_TR(0x66a293);
if(r1(R+518)){{goto L66a2b2;}}
}
B66a295:L66a295:{c.instructions+=3;NFSU2_TR(0x66a295);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B66a296:{NFSU2_TR(0x66a296);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66a297:{NFSU2_TR(0x66a297);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66a302;}}
}
B66a299:L66a299:{c.instructions+=6;NFSU2_TR(0x66a299);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66a29c:{NFSU2_TR(0x66a29c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a29d:{NFSU2_TR(0x66a29d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a29e:{NFSU2_TR(0x66a29e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a29f:{NFSU2_TR(0x66a29f);
__builtin_memmove((R+4),(R+24),4);
}
B66a2a1:{NFSU2_TR(0x66a2a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a2a6ull));
TAIL_STATIC(0x668cc0u,668);
}
B66a2a6:L66a2a6:{c.instructions+=1;NFSU2_TR(0x66a2a6);
{goto L66a412;}
}
B66a2ab:L66a2ab:{c.instructions+=1;NFSU2_TR(0x66a2ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66a2b2:L66a2b2:{c.instructions+=9;NFSU2_TR(0x66a2b2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66a2b8:{NFSU2_TR(0x66a2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a2bb:{NFSU2_TR(0x66a2bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a2be:{NFSU2_TR(0x66a2be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66a2c4:{NFSU2_TR(0x66a2c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a2c7:{NFSU2_TR(0x66a2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a2ca:{NFSU2_TR(0x66a2ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66a2cd:{NFSU2_TR(0x66a2cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a2d0:{NFSU2_TR(0x66a2d0);
if(r1(R+518)){{goto L66a39c;}}
}
B66a2d6:L66a2d6:{c.instructions+=2;NFSU2_TR(0x66a2d6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc010000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66a2dc:{NFSU2_TR(0x66a2dc);
if(r1(R+518)){{goto L66a357;}}
}
B66a2de:L66a2de:{c.instructions+=2;NFSU2_TR(0x66a2de);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc020000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66a2e4:{NFSU2_TR(0x66a2e4);
if(r1(R+518)){{goto L66a30c;}}
}
B66a2e6:L66a2e6:{c.instructions+=2;NFSU2_TR(0x66a2e6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66a2ec:{NFSU2_TR(0x66a2ec);
if(r1(R+518)){{goto L66a39c;}}
}
B66a2f2:L66a2f2:{c.instructions+=2;NFSU2_TR(0x66a2f2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd010000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66a2f8:{NFSU2_TR(0x66a2f8);
if(r1(R+518)){{goto L66a357;}}
}
B66a2fa:L66a2fa:{c.instructions+=2;NFSU2_TR(0x66a2fa);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0xd020000ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xd020000ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xd020000ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66a300:{NFSU2_TR(0x66a300);
if(r1(R+518)){{goto L66a30c;}}
}
B66a302:L66a302:{c.instructions+=2;NFSU2_TR(0x66a302);
w4(R+0,u32(0x80004005ull));
}
B66a307:{NFSU2_TR(0x66a307);
{goto L66a412;}
}
B66a30c:L66a30c:{c.instructions+=12;NFSU2_TR(0x66a30c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a30d:{NFSU2_TR(0x66a30d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66a310:{NFSU2_TR(0x66a310);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a311:{NFSU2_TR(0x66a311);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a314:{NFSU2_TR(0x66a314);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66a318:{NFSU2_TR(0x66a318);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a31b:{NFSU2_TR(0x66a31b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a31c:{NFSU2_TR(0x66a31c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a31d:{NFSU2_TR(0x66a31d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66a320:{NFSU2_TR(0x66a320);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a321:{NFSU2_TR(0x66a321);
__builtin_memmove((R+4),(R+24),4);
}
B66a323:{NFSU2_TR(0x66a323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a328ull));
TAIL_STATIC(0x662795u,662);
}
B66a328:L66a328:{c.instructions+=10;NFSU2_TR(0x66a328);
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
B66a32c:{NFSU2_TR(0x66a32c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66a330:{NFSU2_TR(0x66a330);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66a333:{NFSU2_TR(0x66a333);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a335:{NFSU2_TR(0x66a335);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a336:{NFSU2_TR(0x66a336);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66a33a:{NFSU2_TR(0x66a33a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a33d:{NFSU2_TR(0x66a33d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a33e:{NFSU2_TR(0x66a33e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a33f:{NFSU2_TR(0x66a33f);
if(r1(R+518)){{goto L66a34c;}}
}
B66a341:L66a341:{c.instructions+=1;NFSU2_TR(0x66a341);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a347ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a347:L66a347:{c.instructions+=1;NFSU2_TR(0x66a347);
{goto L66a412;}
}
B66a34c:L66a34c:{c.instructions+=1;NFSU2_TR(0x66a34c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a352ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a352:L66a352:{c.instructions+=1;NFSU2_TR(0x66a352);
{goto L66a412;}
}
B66a357:L66a357:{c.instructions+=12;NFSU2_TR(0x66a357);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a358:{NFSU2_TR(0x66a358);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66a35b:{NFSU2_TR(0x66a35b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a35c:{NFSU2_TR(0x66a35c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a35f:{NFSU2_TR(0x66a35f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66a363:{NFSU2_TR(0x66a363);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a366:{NFSU2_TR(0x66a366);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a367:{NFSU2_TR(0x66a367);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a368:{NFSU2_TR(0x66a368);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66a36b:{NFSU2_TR(0x66a36b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a36c:{NFSU2_TR(0x66a36c);
__builtin_memmove((R+4),(R+24),4);
}
B66a36e:{NFSU2_TR(0x66a36e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a373ull));
TAIL_STATIC(0x662b9bu,662);
}
B66a373:L66a373:{c.instructions+=10;NFSU2_TR(0x66a373);
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
B66a377:{NFSU2_TR(0x66a377);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66a37b:{NFSU2_TR(0x66a37b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66a37e:{NFSU2_TR(0x66a37e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a380:{NFSU2_TR(0x66a380);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a381:{NFSU2_TR(0x66a381);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66a385:{NFSU2_TR(0x66a385);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a388:{NFSU2_TR(0x66a388);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a389:{NFSU2_TR(0x66a389);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a38a:{NFSU2_TR(0x66a38a);
if(r1(R+518)){{goto L66a394;}}
}
B66a38c:L66a38c:{c.instructions+=1;NFSU2_TR(0x66a38c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a392ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a392:L66a392:{c.instructions+=1;NFSU2_TR(0x66a392);
{goto L66a412;}
}
B66a394:L66a394:{c.instructions+=1;NFSU2_TR(0x66a394);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a39aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a39a:L66a39a:{c.instructions+=1;NFSU2_TR(0x66a39a);
{goto L66a412;}
}
B66a39c:L66a39c:{c.instructions+=2;NFSU2_TR(0x66a39c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B66a3a0:{NFSU2_TR(0x66a3a0);
if(r1(R+518)){{goto L66a3c1;}}
}
B66a3a2:L66a3a2:{c.instructions+=5;NFSU2_TR(0x66a3a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a3a5:{NFSU2_TR(0x66a3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66a3a8:{NFSU2_TR(0x66a3a8);
__builtin_memmove((R+8),(R+4),4);
}
B66a3aa:{NFSU2_TR(0x66a3aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66a3ad:{NFSU2_TR(0x66a3ad);
__builtin_memmove((R+28),(R+0),4);
}
B66a3af:L66a3af:{c.instructions+=1;NFSU2_TR(0x66a3af);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66a3b1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a3afu);}goto L66a3af;}
}
B66a3b1:L66a3b1:{c.instructions+=2;NFSU2_TR(0x66a3b1);
__builtin_memmove((R+4),(R+8),4);
}
B66a3b3:{NFSU2_TR(0x66a3b3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66a3b6:L66a3b6:{c.instructions+=1;NFSU2_TR(0x66a3b6);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L66a3b8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a3b6u);}goto L66a3b6;}
}
B66a3b8:L66a3b8:{c.instructions+=3;NFSU2_TR(0x66a3b8);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66a3bc:{NFSU2_TR(0x66a3bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66a3bf:{NFSU2_TR(0x66a3bf);
{goto L66a3e3;}
}
B66a3c1:L66a3c1:{c.instructions+=12;NFSU2_TR(0x66a3c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a3c2:{NFSU2_TR(0x66a3c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66a3c5:{NFSU2_TR(0x66a3c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a3c6:{NFSU2_TR(0x66a3c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a3c9:{NFSU2_TR(0x66a3c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66a3cd:{NFSU2_TR(0x66a3cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a3d0:{NFSU2_TR(0x66a3d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a3d1:{NFSU2_TR(0x66a3d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a3d2:{NFSU2_TR(0x66a3d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66a3d5:{NFSU2_TR(0x66a3d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a3d6:{NFSU2_TR(0x66a3d6);
__builtin_memmove((R+4),(R+24),4);
}
B66a3d8:{NFSU2_TR(0x66a3d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a3ddull));
TAIL_STATIC(0x6623dau,662);
}
B66a3dd:L66a3dd:{c.instructions+=2;NFSU2_TR(0x66a3dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a3e0:{NFSU2_TR(0x66a3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a3e3:L66a3e3:{c.instructions+=3;NFSU2_TR(0x66a3e3);
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
B66a3e7:{NFSU2_TR(0x66a3e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66a3ea:{NFSU2_TR(0x66a3ea);
if(r1(R+518)){{goto L66a3fe;}}
}
B66a3ec:L66a3ec:{c.instructions+=7;NFSU2_TR(0x66a3ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66a3ee:{NFSU2_TR(0x66a3ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a3ef:{NFSU2_TR(0x66a3ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a3f0:{NFSU2_TR(0x66a3f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66a3f4:{NFSU2_TR(0x66a3f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a3f5:{NFSU2_TR(0x66a3f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a3f6:{NFSU2_TR(0x66a3f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a3fcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a3fc:L66a3fc:{c.instructions+=1;NFSU2_TR(0x66a3fc);
{goto L66a412;}
}
B66a3fe:L66a3fe:{c.instructions+=8;NFSU2_TR(0x66a3fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B66a402:{NFSU2_TR(0x66a402);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a404:{NFSU2_TR(0x66a404);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a405:{NFSU2_TR(0x66a405);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a406:{NFSU2_TR(0x66a406);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66a40a:{NFSU2_TR(0x66a40a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a40b:{NFSU2_TR(0x66a40b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a40c:{NFSU2_TR(0x66a40c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a412ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a412:L66a412:{c.instructions+=5;NFSU2_TR(0x66a412);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66a413:{NFSU2_TR(0x66a413);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66a414:{NFSU2_TR(0x66a414);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66a415:{NFSU2_TR(0x66a415);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66a416:{NFSU2_TR(0x66a416);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66a419:L66a419:{c.instructions+=6;NFSU2_TR(0x66a419);
__builtin_memmove((R+28),(R+28),4);
}
B66a41b:{NFSU2_TR(0x66a41b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a41c:{NFSU2_TR(0x66a41c);
__builtin_memmove((R+24),(R+4),4);
}
B66a41e:{NFSU2_TR(0x66a41e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a420:{NFSU2_TR(0x66a420);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66a422:{NFSU2_TR(0x66a422);
if(r1(R+518)){{goto L66a42e;}}
}
B66a424:L66a424:{c.instructions+=2;NFSU2_TR(0x66a424);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a425:{NFSU2_TR(0x66a425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a42aull));
TAIL_STATIC(0x575630u,575);
}
B66a42a:L66a42a:{c.instructions+=2;NFSU2_TR(0x66a42a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B66a42d:{NFSU2_TR(0x66a42d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66a42e:L66a42e:{c.instructions+=3;NFSU2_TR(0x66a42e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a431:{NFSU2_TR(0x66a431);
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
B66a433:{NFSU2_TR(0x66a433);
if(r1(R+518)){{goto L66a440;}}
}
B66a435:L66a435:{c.instructions+=2;NFSU2_TR(0x66a435);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a437:{NFSU2_TR(0x66a437);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a43cull));
TAIL_STATIC(0x664f63u,664);
}
B66a43c:L66a43c:{c.instructions+=1;NFSU2_TR(0x66a43c);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B66a440:L66a440:{c.instructions+=2;NFSU2_TR(0x66a440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66a441:{NFSU2_TR(0x66a441);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66a442:L66a442:{c.instructions+=12;NFSU2_TR(0x66a442);
__builtin_memmove((R+28),(R+28),4);
}
B66a444:{NFSU2_TR(0x66a444);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a445:{NFSU2_TR(0x66a445);
__builtin_memmove((R+20),(R+16),4);
}
B66a447:{NFSU2_TR(0x66a447);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a448:{NFSU2_TR(0x66a448);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a449:{NFSU2_TR(0x66a449);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a44a:{NFSU2_TR(0x66a44a);
__builtin_memmove((R+24),(R+4),4);
}
B66a44c:{NFSU2_TR(0x66a44c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a44f:{NFSU2_TR(0x66a44f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66a451:{NFSU2_TR(0x66a451);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66a453:{NFSU2_TR(0x66a453);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a454:{NFSU2_TR(0x66a454);
if(r1(R+518)){{goto L66a460;}}
}
B66a456:L66a456:{c.instructions+=2;NFSU2_TR(0x66a456);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a458:{NFSU2_TR(0x66a458);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a45dull));
TAIL_STATIC(0x664f42u,664);
}
B66a45d:L66a45d:{c.instructions+=1;NFSU2_TR(0x66a45d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a460:L66a460:{c.instructions+=3;NFSU2_TR(0x66a460);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a463:{NFSU2_TR(0x66a463);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66a465:{NFSU2_TR(0x66a465);
if(r1(R+518)){{goto L66a471;}}
}
B66a467:L66a467:{c.instructions+=2;NFSU2_TR(0x66a467);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a469:{NFSU2_TR(0x66a469);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a46eull));
TAIL_STATIC(0x665050u,665);
}
B66a46e:L66a46e:{c.instructions+=1;NFSU2_TR(0x66a46e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a471:L66a471:{c.instructions+=3;NFSU2_TR(0x66a471);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a474:{NFSU2_TR(0x66a474);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66a476:{NFSU2_TR(0x66a476);
if(r1(R+518)){{goto L66a482;}}
}
B66a478:L66a478:{c.instructions+=2;NFSU2_TR(0x66a478);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a479:{NFSU2_TR(0x66a479);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a47eull));
TAIL_STATIC(0x575630u,575);
}
B66a47e:L66a47e:{c.instructions+=2;NFSU2_TR(0x66a47e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66a47f:{NFSU2_TR(0x66a47f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a482:L66a482:{c.instructions+=4;NFSU2_TR(0x66a482);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66a488:{NFSU2_TR(0x66a488);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a48a:{NFSU2_TR(0x66a48a);
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
B66a48c:{NFSU2_TR(0x66a48c);
if(r1(R+518)){{goto L66a496;}}
}
B66a48e:L66a48e:{c.instructions+=3;NFSU2_TR(0x66a48e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a490:{NFSU2_TR(0x66a490);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a491:{NFSU2_TR(0x66a491);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a494ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a494:L66a494:{c.instructions+=1;NFSU2_TR(0x66a494);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66a496:L66a496:{c.instructions+=2;NFSU2_TR(0x66a496);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+28),(U+0),4);
}
B66a49c:{NFSU2_TR(0x66a49c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66a4a3:L66a4a3:{c.instructions+=3;NFSU2_TR(0x66a4a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a4a6:{NFSU2_TR(0x66a4a6);
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
B66a4a8:{NFSU2_TR(0x66a4a8);
if(r1(R+518)){{goto L66a4b3;}}
}
B66a4aa:L66a4aa:{c.instructions+=3;NFSU2_TR(0x66a4aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a4ac:{NFSU2_TR(0x66a4ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a4ad:{NFSU2_TR(0x66a4ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a4b0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a4b0:L66a4b0:{c.instructions+=1;NFSU2_TR(0x66a4b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a4b3:L66a4b3:{c.instructions+=3;NFSU2_TR(0x66a4b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a4b5:{NFSU2_TR(0x66a4b5);
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
B66a4b7:{NFSU2_TR(0x66a4b7);
if(r1(R+518)){{goto L66a4c1;}}
}
B66a4b9:L66a4b9:{c.instructions+=3;NFSU2_TR(0x66a4b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a4bb:{NFSU2_TR(0x66a4bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a4bc:{NFSU2_TR(0x66a4bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a4bfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a4bf:L66a4bf:{c.instructions+=1;NFSU2_TR(0x66a4bf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66a4c1:L66a4c1:{c.instructions+=3;NFSU2_TR(0x66a4c1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B66a4c4:{NFSU2_TR(0x66a4c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66a4c7:{NFSU2_TR(0x66a4c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a4a3u);}goto L66a4a3;}}
}
B66a4c9:L66a4c9:{c.instructions+=2;NFSU2_TR(0x66a4c9);
__builtin_memmove((R+4),(R+24),4);
}
B66a4cb:{NFSU2_TR(0x66a4cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a4d0ull));
TAIL_STATIC(0x663e90u,663);
}
B66a4d0:L66a4d0:{c.instructions+=5;NFSU2_TR(0x66a4d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66a4d1:{NFSU2_TR(0x66a4d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66a4d2:{NFSU2_TR(0x66a4d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66a4d3:{NFSU2_TR(0x66a4d3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66a4d4:{NFSU2_TR(0x66a4d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66a4d5:L66a4d5:{c.instructions+=7;NFSU2_TR(0x66a4d5);
__builtin_memmove((R+28),(R+28),4);
}
B66a4d7:{NFSU2_TR(0x66a4d7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a4d8:{NFSU2_TR(0x66a4d8);
__builtin_memmove((R+20),(R+16),4);
}
B66a4da:{NFSU2_TR(0x66a4da);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B66a4de:{NFSU2_TR(0x66a4de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a4df:{NFSU2_TR(0x66a4df);
__builtin_memmove((R+28),(R+4),4);
}
B66a4e1:{NFSU2_TR(0x66a4e1);
if(r1(R+518)){{goto L66a508;}}
}
B66a4e3:L66a4e3:{c.instructions+=7;NFSU2_TR(0x66a4e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a4e4:{NFSU2_TR(0x66a4e4);
u8 U[4];
w4(U+0,u32(0x66a419ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a4e9:{NFSU2_TR(0x66a4e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B66a4ec:{NFSU2_TR(0x66a4ec);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66a4ee:{NFSU2_TR(0x66a4ee);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a4f0:{NFSU2_TR(0x66a4f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a4f1:{NFSU2_TR(0x66a4f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a4f6ull));
TAIL_STATIC(0x64b5ffu,64b);
}
B66a4f6:L66a4f6:{c.instructions+=2;NFSU2_TR(0x66a4f6);
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
B66a4fa:{NFSU2_TR(0x66a4fa);
if(r1(R+518)){{goto L66a503;}}
}
B66a4fc:L66a4fc:{c.instructions+=2;NFSU2_TR(0x66a4fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a4fd:{NFSU2_TR(0x66a4fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a502ull));
TAIL_STATIC(0x575630u,575);
}
B66a502:L66a502:{c.instructions+=1;NFSU2_TR(0x66a502);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66a503:L66a503:{c.instructions+=3;NFSU2_TR(0x66a503);
__builtin_memmove((R+0),(R+24),4);
}
B66a505:{NFSU2_TR(0x66a505);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66a506:{NFSU2_TR(0x66a506);
{goto L66a51e;}
}
B66a508:L66a508:{c.instructions+=2;NFSU2_TR(0x66a508);
__builtin_memmove((R+4),(R+28),4);
}
B66a50a:{NFSU2_TR(0x66a50a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a50full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a419u);}goto L66a419;}
}
B66a50f:L66a50f:{c.instructions+=2;NFSU2_TR(0x66a50f);
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
B66a513:{NFSU2_TR(0x66a513);
if(r1(R+518)){{goto L66a51c;}}
}
B66a515:L66a515:{c.instructions+=2;NFSU2_TR(0x66a515);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a516:{NFSU2_TR(0x66a516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a51bull));
TAIL_STATIC(0x575630u,575);
}
B66a51b:L66a51b:{c.instructions+=1;NFSU2_TR(0x66a51b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66a51c:L66a51c:{c.instructions+=1;NFSU2_TR(0x66a51c);
__builtin_memmove((R+0),(R+28),4);
}
B66a51e:L66a51e:{c.instructions+=3;NFSU2_TR(0x66a51e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66a51f:{NFSU2_TR(0x66a51f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66a520:{NFSU2_TR(0x66a520);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66a523:L66a523:{c.instructions+=7;NFSU2_TR(0x66a523);
__builtin_memmove((R+28),(R+28),4);
}
B66a525:{NFSU2_TR(0x66a525);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a526:{NFSU2_TR(0x66a526);
__builtin_memmove((R+20),(R+16),4);
}
B66a528:{NFSU2_TR(0x66a528);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B66a52c:{NFSU2_TR(0x66a52c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a52d:{NFSU2_TR(0x66a52d);
__builtin_memmove((R+28),(R+4),4);
}
B66a52f:{NFSU2_TR(0x66a52f);
if(r1(R+518)){{goto L66a559;}}
}
B66a531:L66a531:{c.instructions+=7;NFSU2_TR(0x66a531);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a532:{NFSU2_TR(0x66a532);
u8 U[4];
w4(U+0,u32(0x66a442ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a537:{NFSU2_TR(0x66a537);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B66a53a:{NFSU2_TR(0x66a53a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B66a53c:{NFSU2_TR(0x66a53c);
u8 U[4];
w4(U+0,u32(0xb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a541:{NFSU2_TR(0x66a541);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a542:{NFSU2_TR(0x66a542);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a547ull));
TAIL_STATIC(0x64b5ffu,64b);
}
B66a547:L66a547:{c.instructions+=2;NFSU2_TR(0x66a547);
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
B66a54b:{NFSU2_TR(0x66a54b);
if(r1(R+518)){{goto L66a554;}}
}
B66a54d:L66a54d:{c.instructions+=2;NFSU2_TR(0x66a54d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a54e:{NFSU2_TR(0x66a54e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a553ull));
TAIL_STATIC(0x575630u,575);
}
B66a553:L66a553:{c.instructions+=1;NFSU2_TR(0x66a553);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66a554:L66a554:{c.instructions+=3;NFSU2_TR(0x66a554);
__builtin_memmove((R+0),(R+24),4);
}
B66a556:{NFSU2_TR(0x66a556);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66a557:{NFSU2_TR(0x66a557);
{goto L66a56f;}
}
B66a559:L66a559:{c.instructions+=2;NFSU2_TR(0x66a559);
__builtin_memmove((R+4),(R+28),4);
}
B66a55b:{NFSU2_TR(0x66a55b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a560ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a442u);}goto L66a442;}
}
B66a560:L66a560:{c.instructions+=2;NFSU2_TR(0x66a560);
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
B66a564:{NFSU2_TR(0x66a564);
if(r1(R+518)){{goto L66a56d;}}
}
B66a566:L66a566:{c.instructions+=2;NFSU2_TR(0x66a566);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a567:{NFSU2_TR(0x66a567);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a56cull));
TAIL_STATIC(0x575630u,575);
}
B66a56c:L66a56c:{c.instructions+=1;NFSU2_TR(0x66a56c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66a56d:L66a56d:{c.instructions+=1;NFSU2_TR(0x66a56d);
__builtin_memmove((R+0),(R+28),4);
}
B66a56f:L66a56f:{c.instructions+=3;NFSU2_TR(0x66a56f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66a570:{NFSU2_TR(0x66a570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66a571:{NFSU2_TR(0x66a571);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66a574:L66a574:{c.instructions+=19;NFSU2_TR(0x66a574);
__builtin_memmove((R+28),(R+28),4);
}
B66a576:{NFSU2_TR(0x66a576);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a577:{NFSU2_TR(0x66a577);
__builtin_memmove((R+20),(R+16),4);
}
B66a579:{NFSU2_TR(0x66a579);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a57a:{NFSU2_TR(0x66a57a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a57b:{NFSU2_TR(0x66a57b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a57e:{NFSU2_TR(0x66a57e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a57f:{NFSU2_TR(0x66a57f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a580:{NFSU2_TR(0x66a580);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66a583:{NFSU2_TR(0x66a583);
__builtin_memmove((R+12),(R+4),4);
}
B66a585:{NFSU2_TR(0x66a585);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66a587:{NFSU2_TR(0x66a587);
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
B66a589:{NFSU2_TR(0x66a589);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a58a:{NFSU2_TR(0x66a58a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66a58d:{NFSU2_TR(0x66a58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66a594:{NFSU2_TR(0x66a594);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a597:{NFSU2_TR(0x66a597);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a59a:{NFSU2_TR(0x66a59a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a59d:{NFSU2_TR(0x66a59d);
if(r1(R+518)){{goto L66a5bd;}}
}
B66a59f:L66a59f:{c.instructions+=3;NFSU2_TR(0x66a59f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a5a1:{NFSU2_TR(0x66a5a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a5a2:{NFSU2_TR(0x66a5a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a5a5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a5a5:L66a5a5:{c.instructions+=4;NFSU2_TR(0x66a5a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a5a7:{NFSU2_TR(0x66a5a7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66a5a8:{NFSU2_TR(0x66a5a8);
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
B66a5aa:{NFSU2_TR(0x66a5aa);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66a5bd;}}
}
B66a5ac:L66a5ac:{c.instructions+=4;NFSU2_TR(0x66a5ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a5af:{NFSU2_TR(0x66a5af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a5b1:{NFSU2_TR(0x66a5b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a5b2:{NFSU2_TR(0x66a5b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a5b5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a5b5:L66a5b5:{c.instructions+=3;NFSU2_TR(0x66a5b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a5b7:{NFSU2_TR(0x66a5b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66a5ba:{NFSU2_TR(0x66a5ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a5bd:L66a5bd:{c.instructions+=4;NFSU2_TR(0x66a5bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a5c0:{NFSU2_TR(0x66a5c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B66a5c2:{NFSU2_TR(0x66a5c2);
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
B66a5c4:{NFSU2_TR(0x66a5c4);
if(r1(R+518)){{goto L66a5e4;}}
}
B66a5c6:L66a5c6:{c.instructions+=3;NFSU2_TR(0x66a5c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a5c8:{NFSU2_TR(0x66a5c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a5c9:{NFSU2_TR(0x66a5c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a5ccull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a5cc:L66a5cc:{c.instructions+=4;NFSU2_TR(0x66a5cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a5ce:{NFSU2_TR(0x66a5ce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66a5cf:{NFSU2_TR(0x66a5cf);
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
B66a5d1:{NFSU2_TR(0x66a5d1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66a5e4;}}
}
B66a5d3:L66a5d3:{c.instructions+=4;NFSU2_TR(0x66a5d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a5d6:{NFSU2_TR(0x66a5d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a5d8:{NFSU2_TR(0x66a5d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a5d9:{NFSU2_TR(0x66a5d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a5dcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a5dc:L66a5dc:{c.instructions+=3;NFSU2_TR(0x66a5dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a5de:{NFSU2_TR(0x66a5de);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66a5e1:{NFSU2_TR(0x66a5e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a5e4:L66a5e4:{c.instructions+=4;NFSU2_TR(0x66a5e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a5e7:{NFSU2_TR(0x66a5e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B66a5e9:{NFSU2_TR(0x66a5e9);
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
B66a5eb:{NFSU2_TR(0x66a5eb);
if(r1(R+518)){{goto L66a676;}}
}
B66a5f1:L66a5f1:{c.instructions+=3;NFSU2_TR(0x66a5f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a5f3:{NFSU2_TR(0x66a5f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a5f4:{NFSU2_TR(0x66a5f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a5f7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a5f7:L66a5f7:{c.instructions+=2;NFSU2_TR(0x66a5f7);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+10)));
w4(U+14,u32(u32(r4(R+0))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66a5f9:{NFSU2_TR(0x66a5f9);
if(r1(R+512)){{goto L66a676;}}
}
B66a5fb:L66a5fb:{c.instructions+=9;NFSU2_TR(0x66a5fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66a5ff:{NFSU2_TR(0x66a5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66a605:{NFSU2_TR(0x66a605);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a608:{NFSU2_TR(0x66a608);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a60b:{NFSU2_TR(0x66a60b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66a60e:{NFSU2_TR(0x66a60e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B66a610:{NFSU2_TR(0x66a610);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B66a614:{NFSU2_TR(0x66a614);
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
B66a616:{NFSU2_TR(0x66a616);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66a6a5;}}
}
B66a61c:L66a61c:{c.instructions+=4;NFSU2_TR(0x66a61c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B66a620:{NFSU2_TR(0x66a620);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66a623:{NFSU2_TR(0x66a623);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B66a627:{NFSU2_TR(0x66a627);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66a693;}}
}
B66a629:L66a629:{c.instructions+=2;NFSU2_TR(0x66a629);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66a62c:{NFSU2_TR(0x66a62c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66a67f;}}
}
B66a62e:L66a62e:{c.instructions+=2;NFSU2_TR(0x66a62e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B66a631:{NFSU2_TR(0x66a631);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66a6a5;}}
}
B66a633:L66a633:{c.instructions+=14;NFSU2_TR(0x66a633);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66a636:{NFSU2_TR(0x66a636);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a639:{NFSU2_TR(0x66a639);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66a63b:{NFSU2_TR(0x66a63b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B66a63d:{NFSU2_TR(0x66a63d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a640:{NFSU2_TR(0x66a640);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a642:{NFSU2_TR(0x66a642);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66a645:{NFSU2_TR(0x66a645);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a646:{NFSU2_TR(0x66a646);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66a649:{NFSU2_TR(0x66a649);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a64c:{NFSU2_TR(0x66a64c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a64d:{NFSU2_TR(0x66a64d);
__builtin_memmove((R+4),(R+12),4);
}
B66a64f:{NFSU2_TR(0x66a64f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a652:{NFSU2_TR(0x66a652);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a657ull));
TAIL_STATIC(0x66548bu,665);
}
B66a657:L66a657:{c.instructions+=3;NFSU2_TR(0x66a657);
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
B66a659:{NFSU2_TR(0x66a659);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a65c:{NFSU2_TR(0x66a65c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66a6a5;}}
}
B66a65e:L66a65e:{c.instructions+=6;NFSU2_TR(0x66a65e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B66a661:{NFSU2_TR(0x66a661);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a662:{NFSU2_TR(0x66a662);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66a665:{NFSU2_TR(0x66a665);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a666:{NFSU2_TR(0x66a666);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a669:{NFSU2_TR(0x66a669);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a66eull));
TAIL_STATIC(0x65bf18u,65b);
}
B66a66e:L66a66e:{c.instructions+=2;NFSU2_TR(0x66a66e);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
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
B66a674:{NFSU2_TR(0x66a674);
{goto L66a6a5;}
}
B66a676:L66a676:{c.instructions+=2;NFSU2_TR(0x66a676);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66a67d:{NFSU2_TR(0x66a67d);
{goto L66a6a5;}
}
B66a67f:L66a67f:{c.instructions+=4;NFSU2_TR(0x66a67f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66a681:{NFSU2_TR(0x66a681);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66a682:{NFSU2_TR(0x66a682);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66a684:{NFSU2_TR(0x66a684);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66a688;}}
}
B66a686:L66a686:{c.instructions+=1;NFSU2_TR(0x66a686);
__builtin_memmove((R+0),(R+8),4);
}
B66a688:L66a688:{c.instructions+=3;NFSU2_TR(0x66a688);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66a68b:{NFSU2_TR(0x66a68b);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
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
B66a691:{NFSU2_TR(0x66a691);
{goto L66a6a5;}
}
B66a693:L66a693:{c.instructions+=4;NFSU2_TR(0x66a693);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66a695:{NFSU2_TR(0x66a695);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66a696:{NFSU2_TR(0x66a696);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66a698:{NFSU2_TR(0x66a698);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66a69c;}}
}
B66a69a:L66a69a:{c.instructions+=1;NFSU2_TR(0x66a69a);
__builtin_memmove((R+0),(R+8),4);
}
B66a69c:L66a69c:{c.instructions+=2;NFSU2_TR(0x66a69c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66a69f:{NFSU2_TR(0x66a69f);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
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
B66a6a5:L66a6a5:{c.instructions+=6;NFSU2_TR(0x66a6a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a6a8:{NFSU2_TR(0x66a6a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66a6a9:{NFSU2_TR(0x66a6a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66a6aa:{NFSU2_TR(0x66a6aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66a6ab:{NFSU2_TR(0x66a6ab);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66a6ac:{NFSU2_TR(0x66a6ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66a6af:L66a6af:{c.instructions+=14;NFSU2_TR(0x66a6af);
__builtin_memmove((R+28),(R+28),4);
}
B66a6b1:{NFSU2_TR(0x66a6b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a6b2:{NFSU2_TR(0x66a6b2);
__builtin_memmove((R+20),(R+16),4);
}
B66a6b4:{NFSU2_TR(0x66a6b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B66a6b7:{NFSU2_TR(0x66a6b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66a6bb:{NFSU2_TR(0x66a6bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a6bc:{NFSU2_TR(0x66a6bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66a6bf:{NFSU2_TR(0x66a6bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a6c0:{NFSU2_TR(0x66a6c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66a6c3:{NFSU2_TR(0x66a6c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a6c4:{NFSU2_TR(0x66a6c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66a6c7:{NFSU2_TR(0x66a6c7);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66a6c9:{NFSU2_TR(0x66a6c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a6cc:{NFSU2_TR(0x66a6cc);
if(r1(R+518)){{goto L66a6e9;}}
}
B66a6ce:L66a6ce:{c.instructions+=3;NFSU2_TR(0x66a6ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a6d0:{NFSU2_TR(0x66a6d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a6d1:{NFSU2_TR(0x66a6d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a6d4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a6d4:L66a6d4:{c.instructions+=4;NFSU2_TR(0x66a6d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a6d6:{NFSU2_TR(0x66a6d6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66a6d7:{NFSU2_TR(0x66a6d7);
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
B66a6d9:{NFSU2_TR(0x66a6d9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66a6e9;}}
}
B66a6db:L66a6db:{c.instructions+=3;NFSU2_TR(0x66a6db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a6dd:{NFSU2_TR(0x66a6dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a6de:{NFSU2_TR(0x66a6de);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a6e1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a6e1:L66a6e1:{c.instructions+=3;NFSU2_TR(0x66a6e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a6e3:{NFSU2_TR(0x66a6e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66a6e6:{NFSU2_TR(0x66a6e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a6e9:L66a6e9:{c.instructions+=3;NFSU2_TR(0x66a6e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B66a6eb:{NFSU2_TR(0x66a6eb);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66a6ed:{NFSU2_TR(0x66a6ed);
if(r1(R+518)){{goto L66a70a;}}
}
B66a6ef:L66a6ef:{c.instructions+=3;NFSU2_TR(0x66a6ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a6f1:{NFSU2_TR(0x66a6f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a6f2:{NFSU2_TR(0x66a6f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a6f5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a6f5:L66a6f5:{c.instructions+=4;NFSU2_TR(0x66a6f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a6f7:{NFSU2_TR(0x66a6f7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66a6f8:{NFSU2_TR(0x66a6f8);
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
B66a6fa:{NFSU2_TR(0x66a6fa);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66a70a;}}
}
B66a6fc:L66a6fc:{c.instructions+=3;NFSU2_TR(0x66a6fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a6fe:{NFSU2_TR(0x66a6fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a6ff:{NFSU2_TR(0x66a6ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a702ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a702:L66a702:{c.instructions+=3;NFSU2_TR(0x66a702);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a704:{NFSU2_TR(0x66a704);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66a707:{NFSU2_TR(0x66a707);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a70a:L66a70a:{c.instructions+=3;NFSU2_TR(0x66a70a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B66a70c:{NFSU2_TR(0x66a70c);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66a70e:{NFSU2_TR(0x66a70e);
if(r1(R+518)){{goto L66a72b;}}
}
B66a710:L66a710:{c.instructions+=3;NFSU2_TR(0x66a710);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a712:{NFSU2_TR(0x66a712);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a713:{NFSU2_TR(0x66a713);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a716ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a716:L66a716:{c.instructions+=4;NFSU2_TR(0x66a716);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a718:{NFSU2_TR(0x66a718);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66a719:{NFSU2_TR(0x66a719);
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
B66a71b:{NFSU2_TR(0x66a71b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66a72b;}}
}
B66a71d:L66a71d:{c.instructions+=3;NFSU2_TR(0x66a71d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a71f:{NFSU2_TR(0x66a71f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a720:{NFSU2_TR(0x66a720);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a723ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a723:L66a723:{c.instructions+=3;NFSU2_TR(0x66a723);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66a725:{NFSU2_TR(0x66a725);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66a728:{NFSU2_TR(0x66a728);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a72b:L66a72b:{c.instructions+=3;NFSU2_TR(0x66a72b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B66a72d:{NFSU2_TR(0x66a72d);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66a72f:{NFSU2_TR(0x66a72f);
if(r1(R+518)){{goto L66a73b;}}
}
B66a731:L66a731:{c.instructions+=3;NFSU2_TR(0x66a731);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66a733:{NFSU2_TR(0x66a733);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a734:{NFSU2_TR(0x66a734);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a737ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66a737:L66a737:{c.instructions+=2;NFSU2_TR(0x66a737);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+0))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+10)));
w4(U+14,u32(u32(r4(R+0))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66a739:{NFSU2_TR(0x66a739);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L66a747;}}
}
B66a73b:L66a73b:{c.instructions+=2;NFSU2_TR(0x66a73b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66a742:{NFSU2_TR(0x66a742);
{goto L66a829;}
}
B66a747:L66a747:{c.instructions+=3;NFSU2_TR(0x66a747);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a74a:{NFSU2_TR(0x66a74a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a74d:{NFSU2_TR(0x66a74d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a752ull));
TAIL_STATIC(0x65bc5eu,65b);
}
B66a752:L66a752:{c.instructions+=4;NFSU2_TR(0x66a752);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66a754:{NFSU2_TR(0x66a754);
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
B66a756:{NFSU2_TR(0x66a756);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a759:{NFSU2_TR(0x66a759);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66a829;}}
}
B66a75f:L66a75f:{c.instructions+=4;NFSU2_TR(0x66a75f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66a762:{NFSU2_TR(0x66a762);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a765:{NFSU2_TR(0x66a765);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a768:{NFSU2_TR(0x66a768);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66a7ce;}}
}
B66a76a:L66a76a:{c.instructions+=2;NFSU2_TR(0x66a76a);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a76c:{NFSU2_TR(0x66a76c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a771ull));
TAIL_STATIC(0x575620u,575);
}
B66a771:L66a771:{c.instructions+=3;NFSU2_TR(0x66a771);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66a773:{NFSU2_TR(0x66a773);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66a774:{NFSU2_TR(0x66a774);
if(r1(R+518)){{goto L66a782;}}
}
B66a776:L66a776:{c.instructions+=2;NFSU2_TR(0x66a776);
__builtin_memmove((R+4),(R+0),4);
}
B66a778:{NFSU2_TR(0x66a778);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a77dull));
TAIL_STATIC(0x664ecfu,664);
}
B66a77d:L66a77d:{c.instructions+=2;NFSU2_TR(0x66a77d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a780:{NFSU2_TR(0x66a780);
{goto L66a786;}
}
B66a782:L66a782:{c.instructions+=1;NFSU2_TR(0x66a782);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66a786:L66a786:{c.instructions+=2;NFSU2_TR(0x66a786);
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
B66a78a:{NFSU2_TR(0x66a78a);
if(r1(R+518)){{goto L66a833;}}
}
B66a790:L66a790:{c.instructions+=5;NFSU2_TR(0x66a790);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a793:{NFSU2_TR(0x66a793);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a794:{NFSU2_TR(0x66a794);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a795:{NFSU2_TR(0x66a795);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a798:{NFSU2_TR(0x66a798);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a79dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a574u);}goto L66a574;}
}
B66a79d:L66a79d:{c.instructions+=3;NFSU2_TR(0x66a79d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66a79f:{NFSU2_TR(0x66a79f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a7a2:{NFSU2_TR(0x66a7a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66a81b;}}
}
B66a7a4:L66a7a4:{c.instructions+=3;NFSU2_TR(0x66a7a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a7a7:{NFSU2_TR(0x66a7a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66a7a9:{NFSU2_TR(0x66a7a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66a7b3;}}
}
B66a7ab:L66a7ab:{c.instructions+=3;NFSU2_TR(0x66a7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a7ae:{NFSU2_TR(0x66a7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a7b1:{NFSU2_TR(0x66a7b1);
{goto L66a7b9;}
}
B66a7b3:L66a7b3:{c.instructions+=2;NFSU2_TR(0x66a7b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a7b6:{NFSU2_TR(0x66a7b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a7b9:L66a7b9:{c.instructions+=7;NFSU2_TR(0x66a7b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a7bc:{NFSU2_TR(0x66a7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66a7c0:{NFSU2_TR(0x66a7c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66a7c3:{NFSU2_TR(0x66a7c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a7c6:{NFSU2_TR(0x66a7c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a7c9:{NFSU2_TR(0x66a7c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66a7cc:{NFSU2_TR(0x66a7cc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a76au);}goto L66a76a;}}
}
B66a7ce:L66a7ce:{c.instructions+=6;NFSU2_TR(0x66a7ce);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66a7d2:{NFSU2_TR(0x66a7d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a7d5:{NFSU2_TR(0x66a7d5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66a7d8:{NFSU2_TR(0x66a7d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a7db:{NFSU2_TR(0x66a7db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B66a7de:{NFSU2_TR(0x66a7de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a7e3ull));
TAIL_STATIC(0x664fb1u,664);
}
B66a7e3:L66a7e3:{c.instructions+=3;NFSU2_TR(0x66a7e3);
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
B66a7e5:{NFSU2_TR(0x66a7e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a7e8:{NFSU2_TR(0x66a7e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66a829;}}
}
B66a7ea:L66a7ea:{c.instructions+=3;NFSU2_TR(0x66a7ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66a7ee:{NFSU2_TR(0x66a7ee);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B66a7f2:{NFSU2_TR(0x66a7f2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66a829;}}
}
B66a7f4:L66a7f4:{c.instructions+=8;NFSU2_TR(0x66a7f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a7f7:{NFSU2_TR(0x66a7f7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66a7f9:{NFSU2_TR(0x66a7f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66a7fd:{NFSU2_TR(0x66a7fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a7fe:{NFSU2_TR(0x66a7fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a7ff:{NFSU2_TR(0x66a7ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a802:{NFSU2_TR(0x66a802);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a803:{NFSU2_TR(0x66a803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a808ull));
TAIL_STATIC(0x66164du,661);
}
B66a808:L66a808:{c.instructions+=3;NFSU2_TR(0x66a808);
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
B66a80a:{NFSU2_TR(0x66a80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a80d:{NFSU2_TR(0x66a80d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66a829;}}
}
B66a80f:L66a80f:{c.instructions+=4;NFSU2_TR(0x66a80f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66a812:{NFSU2_TR(0x66a812);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66a816:{NFSU2_TR(0x66a816);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66a819:{NFSU2_TR(0x66a819);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a7f4u);}goto L66a7f4;}}
}
B66a81b:L66a81b:{c.instructions+=3;NFSU2_TR(0x66a81b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a81e:{NFSU2_TR(0x66a81e);
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
B66a820:{NFSU2_TR(0x66a820);
if(r1(R+518)){{goto L66a829;}}
}
B66a822:L66a822:{c.instructions+=2;NFSU2_TR(0x66a822);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a824:{NFSU2_TR(0x66a824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a829ull));
TAIL_STATIC(0x664f42u,664);
}
B66a829:L66a829:{c.instructions+=6;NFSU2_TR(0x66a829);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a82c:{NFSU2_TR(0x66a82c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66a82d:{NFSU2_TR(0x66a82d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66a82e:{NFSU2_TR(0x66a82e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66a82f:{NFSU2_TR(0x66a82f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66a830:{NFSU2_TR(0x66a830);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66a833:L66a833:{c.instructions+=2;NFSU2_TR(0x66a833);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B66a83a:{NFSU2_TR(0x66a83a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a829u);}goto L66a829;}
}
B66a83c:L66a83c:{c.instructions+=11;NFSU2_TR(0x66a83c);
__builtin_memmove((R+28),(R+28),4);
}
B66a83e:{NFSU2_TR(0x66a83e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a83f:{NFSU2_TR(0x66a83f);
__builtin_memmove((R+20),(R+16),4);
}
B66a841:{NFSU2_TR(0x66a841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B66a844:{NFSU2_TR(0x66a844);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a847:{NFSU2_TR(0x66a847);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a848:{NFSU2_TR(0x66a848);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a849:{NFSU2_TR(0x66a849);
__builtin_memmove((R+24),(R+4),4);
}
B66a84b:{NFSU2_TR(0x66a84b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a84c:{NFSU2_TR(0x66a84c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a84f:{NFSU2_TR(0x66a84f);
{goto L66a9ba;}
}
B66a854:L66a854:{c.instructions+=8;NFSU2_TR(0x66a854);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a857:{NFSU2_TR(0x66a857);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66a859:{NFSU2_TR(0x66a859);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a85a:{NFSU2_TR(0x66a85a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66a85b:{NFSU2_TR(0x66a85b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a85c:{NFSU2_TR(0x66a85c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a85d:{NFSU2_TR(0x66a85d);
__builtin_memmove((R+4),(R+24),4);
}
B66a85f:{NFSU2_TR(0x66a85f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a864ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66a864:L66a864:{c.instructions+=3;NFSU2_TR(0x66a864);
__builtin_memmove((R+12),(R+0),4);
}
B66a866:{NFSU2_TR(0x66a866);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66a868:{NFSU2_TR(0x66a868);
if(r1(R+518)){{goto L66a963;}}
}
B66a86e:L66a86e:{c.instructions+=2;NFSU2_TR(0x66a86e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66a871:{NFSU2_TR(0x66a871);
if(r1(R+518)){{goto L66a9df;}}
}
B66a877:L66a877:{c.instructions+=3;NFSU2_TR(0x66a877);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a87a:{NFSU2_TR(0x66a87a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66a87e:{NFSU2_TR(0x66a87e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66a963;}}
}
B66a884:L66a884:{c.instructions+=2;NFSU2_TR(0x66a884);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66a888:{NFSU2_TR(0x66a888);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66a893;}}
}
B66a88a:L66a88a:{c.instructions+=2;NFSU2_TR(0x66a88a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66a88d:{NFSU2_TR(0x66a88d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66a963;}}
}
B66a893:L66a893:{c.instructions+=4;NFSU2_TR(0x66a893);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66a896:{NFSU2_TR(0x66a896);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a899:{NFSU2_TR(0x66a899);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a89c:{NFSU2_TR(0x66a89c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66a8af;}}
}
B66a89e:L66a89e:{c.instructions+=4;NFSU2_TR(0x66a89e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a89f:{NFSU2_TR(0x66a89f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a8a0:{NFSU2_TR(0x66a8a0);
__builtin_memmove((R+4),(R+24),4);
}
B66a8a2:{NFSU2_TR(0x66a8a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a8a7ull));
TAIL_STATIC(0x661c3eu,661);
}
B66a8a7:L66a8a7:{c.instructions+=2;NFSU2_TR(0x66a8a7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66a8a9:{NFSU2_TR(0x66a8a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66a963;}}
}
B66a8af:L66a8af:{c.instructions+=1;NFSU2_TR(0x66a8af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66a8b3:L66a8b3:{c.instructions+=2;NFSU2_TR(0x66a8b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B66a8b6:{NFSU2_TR(0x66a8b6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L66a963;}}
}
B66a8bc:L66a8bc:{c.instructions+=10;NFSU2_TR(0x66a8bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a8bf:{NFSU2_TR(0x66a8bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a8c2:{NFSU2_TR(0x66a8c2);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B66a8c6:{NFSU2_TR(0x66a8c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66a8cc:{NFSU2_TR(0x66a8cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a8cf:{NFSU2_TR(0x66a8cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66a8d2:{NFSU2_TR(0x66a8d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66a8d5:{NFSU2_TR(0x66a8d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66a8d7:{NFSU2_TR(0x66a8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a8da:{NFSU2_TR(0x66a8da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66a8e1;}}
}
B66a8dc:L66a8dc:{c.instructions+=2;NFSU2_TR(0x66a8dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a8df:{NFSU2_TR(0x66a8df);
{goto L66a8e7;}
}
B66a8e1:L66a8e1:{c.instructions+=2;NFSU2_TR(0x66a8e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a8e4:{NFSU2_TR(0x66a8e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a8e7:L66a8e7:{c.instructions+=3;NFSU2_TR(0x66a8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a8ea:{NFSU2_TR(0x66a8ea);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B66a8ee:{NFSU2_TR(0x66a8ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66a8f4;}}
}
B66a8f0:L66a8f0:{c.instructions+=2;NFSU2_TR(0x66a8f0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66a8f2:{NFSU2_TR(0x66a8f2);
{goto L66a907;}
}
B66a8f4:L66a8f4:{c.instructions+=2;NFSU2_TR(0x66a8f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66a8f6:{NFSU2_TR(0x66a8f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66a8fd;}}
}
B66a8f8:L66a8f8:{c.instructions+=2;NFSU2_TR(0x66a8f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66a8fb:{NFSU2_TR(0x66a8fb);
{goto L66a903;}
}
B66a8fd:L66a8fd:{c.instructions+=2;NFSU2_TR(0x66a8fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a900:{NFSU2_TR(0x66a900);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66a903:L66a903:{c.instructions+=1;NFSU2_TR(0x66a903);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B66a907:L66a907:{c.instructions+=4;NFSU2_TR(0x66a907);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66a90a:{NFSU2_TR(0x66a90a);
__builtin_memmove((R+0),(R+24),4);
}
B66a90c:{NFSU2_TR(0x66a90c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B66a90e:{NFSU2_TR(0x66a90e);
{goto L66a918;}
}
B66a910:L66a910:{c.instructions+=2;NFSU2_TR(0x66a910);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66a912:{NFSU2_TR(0x66a912);
if(r1(R+518)){{goto L66a91c;}}
}
B66a914:L66a914:{c.instructions+=3;NFSU2_TR(0x66a914);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66a915:{NFSU2_TR(0x66a915);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B66a917:{NFSU2_TR(0x66a917);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66a918:L66a918:{c.instructions+=2;NFSU2_TR(0x66a918);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B66a91a:{NFSU2_TR(0x66a91a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a910u);}goto L66a910;}}
}
B66a91c:L66a91c:{c.instructions+=4;NFSU2_TR(0x66a91c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B66a91e:{NFSU2_TR(0x66a91e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B66a920:{NFSU2_TR(0x66a920);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66a922:{NFSU2_TR(0x66a922);
if(r1(R+518)){{goto L66a9e3;}}
}
B66a928:L66a928:{c.instructions+=2;NFSU2_TR(0x66a928);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66a92a:{NFSU2_TR(0x66a92a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66a93c;}}
}
B66a92c:L66a92c:{c.instructions+=2;NFSU2_TR(0x66a92c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66a92e:{NFSU2_TR(0x66a92e);
if(r1(R+518)){{goto L66a9a8;}}
}
B66a930:L66a930:{c.instructions+=2;NFSU2_TR(0x66a930);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66a932:{NFSU2_TR(0x66a932);
if(r1(R+518)){{goto L66a9ee;}}
}
B66a938:L66a938:{c.instructions+=2;NFSU2_TR(0x66a938);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5bull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66a93a:{NFSU2_TR(0x66a93a);
if(r1(R+518)){{goto L66a949;}}
}
B66a93c:L66a93c:{c.instructions+=4;NFSU2_TR(0x66a93c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66a93f:{NFSU2_TR(0x66a93f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66a940:{NFSU2_TR(0x66a940);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x28ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66a944:{NFSU2_TR(0x66a944);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a8b3u);}goto L66a8b3;}
}
B66a949:L66a949:{c.instructions+=4;NFSU2_TR(0x66a949);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66a94a:{NFSU2_TR(0x66a94a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B66a94c:{NFSU2_TR(0x66a94c);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B66a94e:{NFSU2_TR(0x66a94e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66a963;}}
}
B66a950:L66a950:{c.instructions+=2;NFSU2_TR(0x66a950);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x39ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66a952:{NFSU2_TR(0x66a952);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L66a963;}}
}
B66a954:L66a954:{c.instructions+=2;NFSU2_TR(0x66a954);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a955:{NFSU2_TR(0x66a955);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a95aull));
TAIL_STATIC(0x75d65bu,75d);
}
B66a95a:L66a95a:{c.instructions+=4;NFSU2_TR(0x66a95a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66a95b:{NFSU2_TR(0x66a95b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a95e:{NFSU2_TR(0x66a95e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66a961:{NFSU2_TR(0x66a961);
if(r1(R+512)){{goto L66a972;}}
}
B66a963:L66a963:{c.instructions+=1;NFSU2_TR(0x66a963);
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
B66a965:L66a965:{c.instructions+=5;NFSU2_TR(0x66a965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66a966:{NFSU2_TR(0x66a966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66a967:{NFSU2_TR(0x66a967);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66a968:{NFSU2_TR(0x66a968);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66a969:{NFSU2_TR(0x66a969);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66a96c:L66a96c:{c.instructions+=2;NFSU2_TR(0x66a96c);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B66a96f:{NFSU2_TR(0x66a96f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L66a979;}}
}
B66a971:L66a971:{c.instructions+=1;NFSU2_TR(0x66a971);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66a972:L66a972:{c.instructions+=3;NFSU2_TR(0x66a972);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B66a974:{NFSU2_TR(0x66a974);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B66a977:{NFSU2_TR(0x66a977);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a96cu);}goto L66a96c;}}
}
B66a979:L66a979:{c.instructions+=2;NFSU2_TR(0x66a979);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x5dull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B66a97c:{NFSU2_TR(0x66a97c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a963u);}goto L66a963;}}
}
B66a97e:L66a97e:{c.instructions+=10;NFSU2_TR(0x66a97e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a981:{NFSU2_TR(0x66a981);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a984:{NFSU2_TR(0x66a984);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a985:{NFSU2_TR(0x66a985);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66a988:{NFSU2_TR(0x66a988);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66a98b:{NFSU2_TR(0x66a98b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a98e:{NFSU2_TR(0x66a98e);
w4(R+0,u32(~u32(r4(R+0))));
}
B66a990:{NFSU2_TR(0x66a990);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a991:{NFSU2_TR(0x66a991);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66a992:{NFSU2_TR(0x66a992);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a997ull));
TAIL_STATIC(0x65c123u,65c);
}
B66a997:L66a997:{c.instructions+=2;NFSU2_TR(0x66a997);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66a999:{NFSU2_TR(0x66a999);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a963u);}goto L66a963;}}
}
B66a99b:L66a99b:{c.instructions+=3;NFSU2_TR(0x66a99b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B66a99d:{NFSU2_TR(0x66a99d);
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
B66a99f:{NFSU2_TR(0x66a99f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a965u);}goto L66a965;}}
}
B66a9a1:L66a9a1:{c.instructions+=2;NFSU2_TR(0x66a9a1);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B66a9a4:{NFSU2_TR(0x66a9a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a963u);}goto L66a963;}}
}
B66a9a6:L66a9a6:{c.instructions+=1;NFSU2_TR(0x66a9a6);
{goto L66a9b3;}
}
B66a9a8:L66a9a8:{c.instructions+=4;NFSU2_TR(0x66a9a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a9ab:{NFSU2_TR(0x66a9ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66a9ae:{NFSU2_TR(0x66a9ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66a9b1:{NFSU2_TR(0x66a9b1);
w4(R+0,u32(~u32(r4(R+0))));
}
B66a9b3:L66a9b3:{c.instructions+=3;NFSU2_TR(0x66a9b3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66a9b4:{NFSU2_TR(0x66a9b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66a9b7:{NFSU2_TR(0x66a9b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66a9ba:L66a9ba:{c.instructions+=2;NFSU2_TR(0x66a9ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66a9bc:{NFSU2_TR(0x66a9bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a854u);}goto L66a854;}}
}
B66a9c2:L66a9c2:{c.instructions+=2;NFSU2_TR(0x66a9c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66a9c5:{NFSU2_TR(0x66a9c5);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a963u);}goto L66a963;}}
}
B66a9c7:L66a9c7:{c.instructions+=7;NFSU2_TR(0x66a9c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a9c8:{NFSU2_TR(0x66a9c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66a9cb:{NFSU2_TR(0x66a9cb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66a9cc:{NFSU2_TR(0x66a9cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a9cd:{NFSU2_TR(0x66a9cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a9d0:{NFSU2_TR(0x66a9d0);
__builtin_memmove((R+4),(R+24),4);
}
B66a9d2:{NFSU2_TR(0x66a9d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66a9d7ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66a9d7:L66a9d7:{c.instructions+=2;NFSU2_TR(0x66a9d7);
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
B66a9d9:{NFSU2_TR(0x66a9d9);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a963u);}goto L66a963;}}
}
B66a9db:L66a9db:{c.instructions+=2;NFSU2_TR(0x66a9db);
w4(R+0,u32(~u32(r4(R+0))));
}
B66a9dd:{NFSU2_TR(0x66a9dd);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a965u);}goto L66a965;}
}
B66a9df:L66a9df:{c.instructions+=2;NFSU2_TR(0x66a9df);
__builtin_memmove((R+0),(R+12),4);
}
B66a9e1:{NFSU2_TR(0x66a9e1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a9dbu);}goto L66a9db;}
}
B66a9e3:L66a9e3:{c.instructions+=4;NFSU2_TR(0x66a9e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a9e6:{NFSU2_TR(0x66a9e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66a9e9:{NFSU2_TR(0x66a9e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66a9ec:{NFSU2_TR(0x66a9ec);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a9dbu);}goto L66a9db;}
}
B66a9ee:L66a9ee:{c.instructions+=10;NFSU2_TR(0x66a9ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a9f1:{NFSU2_TR(0x66a9f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66a9f4:{NFSU2_TR(0x66a9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66a9f7:{NFSU2_TR(0x66a9f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66a9fa:{NFSU2_TR(0x66a9fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66a9fd:{NFSU2_TR(0x66a9fd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B66a9fe:{NFSU2_TR(0x66a9fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66a9ff:{NFSU2_TR(0x66a9ff);
w4(R+0,u32(~u32(r4(R+0))));
}
B66aa01:{NFSU2_TR(0x66aa01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aa02:{NFSU2_TR(0x66aa02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66aa07ull));
TAIL_STATIC(0x665a15u,665);
}
B66aa07:L66aa07:{c.instructions+=1;NFSU2_TR(0x66aa07);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a965u);}goto L66a965;}
}
B66aa0c:L66aa0c:{c.instructions+=5;NFSU2_TR(0x66aa0c);
__builtin_memmove((R+28),(R+28),4);
}
B66aa0e:{NFSU2_TR(0x66aa0e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aa0f:{NFSU2_TR(0x66aa0f);
__builtin_memmove((R+20),(R+16),4);
}
B66aa11:{NFSU2_TR(0x66aa11);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66aa15:{NFSU2_TR(0x66aa15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66aa1b;}}
}
B66aa17:L66aa17:{c.instructions+=2;NFSU2_TR(0x66aa17);
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
B66aa19:{NFSU2_TR(0x66aa19);
{goto L66aa2b;}
}
B66aa1b:L66aa1b:{c.instructions+=5;NFSU2_TR(0x66aa1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66aa1e:{NFSU2_TR(0x66aa1e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aa20:{NFSU2_TR(0x66aa20);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66aa23:{NFSU2_TR(0x66aa23);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66aa26:{NFSU2_TR(0x66aa26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66aa2bull));
TAIL_STATIC(0x665a15u,665);
}
B66aa2b:L66aa2b:{c.instructions+=2;NFSU2_TR(0x66aa2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66aa2c:{NFSU2_TR(0x66aa2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66aa2f:L66aa2f:{c.instructions+=17;NFSU2_TR(0x66aa2f);
__builtin_memmove((R+28),(R+28),4);
}
B66aa31:{NFSU2_TR(0x66aa31);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aa32:{NFSU2_TR(0x66aa32);
__builtin_memmove((R+20),(R+16),4);
}
B66aa34:{NFSU2_TR(0x66aa34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B66aa37:{NFSU2_TR(0x66aa37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66aa3b:{NFSU2_TR(0x66aa3b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aa3c:{NFSU2_TR(0x66aa3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66aa3f:{NFSU2_TR(0x66aa3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aa40:{NFSU2_TR(0x66aa40);
__builtin_memmove((R+24),(R+12),4);
}
B66aa42:{NFSU2_TR(0x66aa42);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B66aa45:{NFSU2_TR(0x66aa45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aa46:{NFSU2_TR(0x66aa46);
__builtin_memmove((R+28),(R+4),4);
}
B66aa48:{NFSU2_TR(0x66aa48);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B66aa4b:{NFSU2_TR(0x66aa4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66aa4e:{NFSU2_TR(0x66aa4e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66aa52:{NFSU2_TR(0x66aa52);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B66aa56:{NFSU2_TR(0x66aa56);
if(r1(R+518)){{goto L66aabb;}}
}
B66aa58:L66aa58:{c.instructions+=5;NFSU2_TR(0x66aa58);
w4(R+0,u32(r2(R+0)));
}
B66aa5b:{NFSU2_TR(0x66aa5b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66aa5e:{NFSU2_TR(0x66aa5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66aa61:{NFSU2_TR(0x66aa61);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66aa64:{NFSU2_TR(0x66aa64);
if(r1(R+518)){{goto L66aabb;}}
}
B66aa66:L66aa66:{c.instructions+=2;NFSU2_TR(0x66aa66);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xa000000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66aa6d:{NFSU2_TR(0x66aa6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66aabb;}}
}
B66aa6f:L66aa6f:{c.instructions+=7;NFSU2_TR(0x66aa6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66aa72:{NFSU2_TR(0x66aa72);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B66aa74:{NFSU2_TR(0x66aa74);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aa76:{NFSU2_TR(0x66aa76);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B66aa78:{NFSU2_TR(0x66aa78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aa79:{NFSU2_TR(0x66aa79);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aa7a:{NFSU2_TR(0x66aa7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66aa7full));
TAIL_STATIC(0x65ae25u,65a);
}
B66aa7f:L66aa7f:{c.instructions+=3;NFSU2_TR(0x66aa7f);
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
B66aa81:{NFSU2_TR(0x66aa81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66aa84:{NFSU2_TR(0x66aa84);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66ac0d;}}
}
B66aa8a:L66aa8a:{c.instructions+=3;NFSU2_TR(0x66aa8a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aa8b:{NFSU2_TR(0x66aa8b);
__builtin_memmove((R+4),(R+28),4);
}
B66aa8d:{NFSU2_TR(0x66aa8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66aa92ull));
TAIL_STATIC(0x666df7u,666);
}
B66aa92:L66aa92:{c.instructions+=3;NFSU2_TR(0x66aa92);
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
B66aa94:{NFSU2_TR(0x66aa94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66aa97:{NFSU2_TR(0x66aa97);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66ac0d;}}
}
B66aa9d:L66aa9d:{c.instructions+=8;NFSU2_TR(0x66aa9d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66aa9f:{NFSU2_TR(0x66aa9f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66aaa2:{NFSU2_TR(0x66aaa2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aaa4:{NFSU2_TR(0x66aaa4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B66aaa7:{NFSU2_TR(0x66aaa7);
__builtin_memmove((R+4),(R+28),4);
}
B66aaa9:{NFSU2_TR(0x66aaa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aaaa:{NFSU2_TR(0x66aaaa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aaab:{NFSU2_TR(0x66aaab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66aab0ull));
TAIL_STATIC(0x65ae25u,65a);
}
B66aab0:L66aab0:{c.instructions+=3;NFSU2_TR(0x66aab0);
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
B66aab2:{NFSU2_TR(0x66aab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66aab5:{NFSU2_TR(0x66aab5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66ac0d;}}
}
B66aabb:L66aabb:{c.instructions+=3;NFSU2_TR(0x66aabb);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66aabf:{NFSU2_TR(0x66aabf);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B66aac3:{NFSU2_TR(0x66aac3);
if(r1(R+518)){{goto L66ab2a;}}
}
B66aac5:L66aac5:{c.instructions+=5;NFSU2_TR(0x66aac5);
w4(R+0,u32(r2(R+0)));
}
B66aac8:{NFSU2_TR(0x66aac8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66aacb:{NFSU2_TR(0x66aacb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66aace:{NFSU2_TR(0x66aace);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66aad1:{NFSU2_TR(0x66aad1);
if(r1(R+518)){{goto L66ab2a;}}
}
B66aad3:L66aad3:{c.instructions+=2;NFSU2_TR(0x66aad3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xb000000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66aada:{NFSU2_TR(0x66aada);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66ab2a;}}
}
B66aadc:L66aadc:{c.instructions+=8;NFSU2_TR(0x66aadc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66aadf:{NFSU2_TR(0x66aadf);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B66aae1:{NFSU2_TR(0x66aae1);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aae3:{NFSU2_TR(0x66aae3);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B66aae5:{NFSU2_TR(0x66aae5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aae6:{NFSU2_TR(0x66aae6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aae7:{NFSU2_TR(0x66aae7);
__builtin_memmove((R+4),(R+28),4);
}
B66aae9:{NFSU2_TR(0x66aae9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66aaeeull));
TAIL_STATIC(0x65ae25u,65a);
}
B66aaee:L66aaee:{c.instructions+=3;NFSU2_TR(0x66aaee);
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
B66aaf0:{NFSU2_TR(0x66aaf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66aaf3:{NFSU2_TR(0x66aaf3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66ac0d;}}
}
B66aaf9:L66aaf9:{c.instructions+=3;NFSU2_TR(0x66aaf9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aafa:{NFSU2_TR(0x66aafa);
__builtin_memmove((R+4),(R+28),4);
}
B66aafc:{NFSU2_TR(0x66aafc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ab01ull));
TAIL_STATIC(0x667d51u,667);
}
B66ab01:L66ab01:{c.instructions+=3;NFSU2_TR(0x66ab01);
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
B66ab03:{NFSU2_TR(0x66ab03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ab06:{NFSU2_TR(0x66ab06);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66ac0d;}}
}
B66ab0c:L66ab0c:{c.instructions+=8;NFSU2_TR(0x66ab0c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66ab0e:{NFSU2_TR(0x66ab0e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ab11:{NFSU2_TR(0x66ab11);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ab13:{NFSU2_TR(0x66ab13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B66ab16:{NFSU2_TR(0x66ab16);
__builtin_memmove((R+4),(R+28),4);
}
B66ab18:{NFSU2_TR(0x66ab18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ab19:{NFSU2_TR(0x66ab19);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ab1a:{NFSU2_TR(0x66ab1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ab1full));
TAIL_STATIC(0x65ae25u,65a);
}
B66ab1f:L66ab1f:{c.instructions+=3;NFSU2_TR(0x66ab1f);
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
B66ab21:{NFSU2_TR(0x66ab21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ab24:{NFSU2_TR(0x66ab24);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66ac0d;}}
}
B66ab2a:L66ab2a:{c.instructions+=6;NFSU2_TR(0x66ab2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ab2d:{NFSU2_TR(0x66ab2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+0))));
}
B66ab2f:{NFSU2_TR(0x66ab2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ab33:{NFSU2_TR(0x66ab33);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
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
B66ab38:{NFSU2_TR(0x66ab38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ab3b:{NFSU2_TR(0x66ab3b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ac0d;}}
}
B66ab41:L66ab41:{c.instructions+=1;NFSU2_TR(0x66ab41);
{goto L66ab46;}
}
B66ab43:L66ab43:{c.instructions+=1;NFSU2_TR(0x66ab43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ab46:L66ab46:{c.instructions+=9;NFSU2_TR(0x66ab46);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B66ab4a:{NFSU2_TR(0x66ab4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66ab4d:{NFSU2_TR(0x66ab4d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+28,u32(r2(U+0)));
}
B66ab50:{NFSU2_TR(0x66ab50);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B66ab53:{NFSU2_TR(0x66ab53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B66ab56:{NFSU2_TR(0x66ab56);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66ab59:{NFSU2_TR(0x66ab59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+0))));
}
B66ab5b:{NFSU2_TR(0x66ab5b);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B66ab5f:{NFSU2_TR(0x66ab5f);
if(r1(R+518)){{goto L66abf3;}}
}
B66ab65:L66ab65:{c.instructions+=5;NFSU2_TR(0x66ab65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ab68:{NFSU2_TR(0x66ab68);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ab6b:{NFSU2_TR(0x66ab6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66ab6d:{NFSU2_TR(0x66ab6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ab70:{NFSU2_TR(0x66ab70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66ab79;}}
}
B66ab72:L66ab72:{c.instructions+=1;NFSU2_TR(0x66ab72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66ab79:L66ab79:{c.instructions+=2;NFSU2_TR(0x66ab79);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66ab7c:{NFSU2_TR(0x66ab7c);
if(r1(R+518)){{goto L66abc7;}}
}
B66ab7e:L66ab7e:{c.instructions+=7;NFSU2_TR(0x66ab7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ab81:{NFSU2_TR(0x66ab81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66ab83:{NFSU2_TR(0x66ab83);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B66ab86:{NFSU2_TR(0x66ab86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ab89:{NFSU2_TR(0x66ab89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ab8a:{NFSU2_TR(0x66ab8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66ab8d:{NFSU2_TR(0x66ab8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ab92ull));
TAIL_STATIC(0x663a32u,663);
}
B66ab92:L66ab92:{c.instructions+=3;NFSU2_TR(0x66ab92);
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
B66ab94:{NFSU2_TR(0x66ab94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ab97:{NFSU2_TR(0x66ab97);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66ac0d;}}
}
B66ab99:L66ab99:{c.instructions+=4;NFSU2_TR(0x66ab99);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66ab9c:{NFSU2_TR(0x66ab9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66ab9e:{NFSU2_TR(0x66ab9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ab9f:{NFSU2_TR(0x66ab9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66aba2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66aba2:L66aba2:{c.instructions+=5;NFSU2_TR(0x66aba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66aba5:{NFSU2_TR(0x66aba5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66aba7:{NFSU2_TR(0x66aba7);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B66abaa:{NFSU2_TR(0x66abaa);
{u32 ea_=u32(u32(8003160u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B66abb0:{NFSU2_TR(0x66abb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66abb5ull));
TAIL_STATIC(0x75dd28u,75d);
}
B66abb5:L66abb5:{c.instructions+=2;NFSU2_TR(0x66abb5);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66abb9:{NFSU2_TR(0x66abb9);
if(r1(R+518)){{goto L66abc7;}}
}
B66abbb:L66abbb:{c.instructions+=3;NFSU2_TR(0x66abbb);
w4(R+4,u32(r2(R+0)));
}
B66abbe:{NFSU2_TR(0x66abbe);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66abc1:{NFSU2_TR(0x66abc1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ac06;}}
}
B66abc3:L66abc3:{c.instructions+=1;NFSU2_TR(0x66abc3);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66abc7:L66abc7:{c.instructions+=4;NFSU2_TR(0x66abc7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66abc9:{NFSU2_TR(0x66abc9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66abcb:{NFSU2_TR(0x66abcb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66abce:{NFSU2_TR(0x66abce);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66abf3;}}
}
B66abd0:L66abd0:{c.instructions+=6;NFSU2_TR(0x66abd0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+4,u32(r2(U+0)));
}
B66abd3:{NFSU2_TR(0x66abd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66abd6:{NFSU2_TR(0x66abd6);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B66abda:{NFSU2_TR(0x66abda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66abdd:{NFSU2_TR(0x66abdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66abde:{NFSU2_TR(0x66abde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66abe3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66aa2fu);}goto L66aa2f;}
}
B66abe3:L66abe3:{c.instructions+=3;NFSU2_TR(0x66abe3);
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
B66abe5:{NFSU2_TR(0x66abe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66abe8:{NFSU2_TR(0x66abe8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66ac0d;}}
}
B66abea:L66abea:{c.instructions+=4;NFSU2_TR(0x66abea);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66abeb:{NFSU2_TR(0x66abeb);
w4(R+0,u32(r2(R+28)));
}
B66abee:{NFSU2_TR(0x66abee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66abf1:{NFSU2_TR(0x66abf1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66abd0u);}goto L66abd0;}}
}
B66abf3:L66abf3:{c.instructions+=4;NFSU2_TR(0x66abf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66abf6:{NFSU2_TR(0x66abf6);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66abfa:{NFSU2_TR(0x66abfa);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(R+0))<(r2(U+10))));
w1(R+523,sborrow<u16>(r2(R+0),r2(U+10)));
w2(U+12,u16(u32(r2(R+0))-u32(r2(U+10))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66abfe:{NFSU2_TR(0x66abfe);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ab43u);}goto L66ab43;}}
}
B66ac04:L66ac04:{c.instructions+=1;NFSU2_TR(0x66ac04);
{goto L66ac0d;}
}
B66ac06:L66ac06:{c.instructions+=1;NFSU2_TR(0x66ac06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66ac0d:L66ac0d:{c.instructions+=6;NFSU2_TR(0x66ac0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ac10:{NFSU2_TR(0x66ac10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66ac11:{NFSU2_TR(0x66ac11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66ac12:{NFSU2_TR(0x66ac12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66ac13:{NFSU2_TR(0x66ac13);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66ac14:{NFSU2_TR(0x66ac14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66ac17:L66ac17:{c.instructions+=10;NFSU2_TR(0x66ac17);
__builtin_memmove((R+28),(R+28),4);
}
B66ac19:{NFSU2_TR(0x66ac19);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ac1a:{NFSU2_TR(0x66ac1a);
__builtin_memmove((R+20),(R+16),4);
}
B66ac1c:{NFSU2_TR(0x66ac1c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ac1d:{NFSU2_TR(0x66ac1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66ac20:{NFSU2_TR(0x66ac20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ac27:{NFSU2_TR(0x66ac27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ac28:{NFSU2_TR(0x66ac28);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66ac2a:{NFSU2_TR(0x66ac2a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ac30:{NFSU2_TR(0x66ac30);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ac9a;}}
}
B66ac32:L66ac32:{c.instructions+=12;NFSU2_TR(0x66ac32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ac38:{NFSU2_TR(0x66ac38);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66ac3b:{NFSU2_TR(0x66ac3b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(r2(U+0)));
}
B66ac3e:{NFSU2_TR(0x66ac3e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66ac42:{NFSU2_TR(0x66ac42);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66ac45:{NFSU2_TR(0x66ac45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B66ac48:{NFSU2_TR(0x66ac48);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66ac4b:{NFSU2_TR(0x66ac4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66ac4e:{NFSU2_TR(0x66ac4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffdull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ac52:{NFSU2_TR(0x66ac52);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(u16(0x0ull))));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66ac57:{NFSU2_TR(0x66ac57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66ac5a:{NFSU2_TR(0x66ac5a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ac91;}}
}
B66ac5c:L66ac5c:{c.instructions+=2;NFSU2_TR(0x66ac5c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66ac5f:{NFSU2_TR(0x66ac5f);
if(r1(R+518)){{goto L66ac91;}}
}
B66ac61:L66ac61:{c.instructions+=2;NFSU2_TR(0x66ac61);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B66ac64:{NFSU2_TR(0x66ac64);
if(r1(R+518)){{goto L66ac71;}}
}
B66ac66:L66ac66:{c.instructions+=4;NFSU2_TR(0x66ac66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ac67:{NFSU2_TR(0x66ac67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ac68:{NFSU2_TR(0x66ac68);
__builtin_memmove((R+4),(R+24),4);
}
B66ac6a:{NFSU2_TR(0x66ac6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ac6full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a25fu);}goto L66a25f;}
}
B66ac6f:L66ac6f:{c.instructions+=1;NFSU2_TR(0x66ac6f);
{goto L66ac91;}
}
B66ac71:L66ac71:{c.instructions+=10;NFSU2_TR(0x66ac71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ac77:{NFSU2_TR(0x66ac77);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66ac7a:{NFSU2_TR(0x66ac7a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66ac7c:{NFSU2_TR(0x66ac7c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B66ac80:{NFSU2_TR(0x66ac80);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B66ac83:{NFSU2_TR(0x66ac83);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ac88:{NFSU2_TR(0x66ac88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ac89:{NFSU2_TR(0x66ac89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ac8a:{NFSU2_TR(0x66ac8a);
__builtin_memmove((R+4),(R+24),4);
}
B66ac8c:{NFSU2_TR(0x66ac8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ac91ull));
TAIL_STATIC(0x669286u,669);
}
B66ac91:L66ac91:{c.instructions+=3;NFSU2_TR(0x66ac91);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66ac92:{NFSU2_TR(0x66ac92);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B66ac98:{NFSU2_TR(0x66ac98);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ac32u);}goto L66ac32;}}
}
B66ac9a:L66ac9a:{c.instructions+=2;NFSU2_TR(0x66ac9a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B66aca1:{NFSU2_TR(0x66aca1);
if(r1(R+518)){{goto L66acbc;}}
}
B66aca3:L66aca3:{c.instructions+=3;NFSU2_TR(0x66aca3);
u8 U[4];
w4(U+0,u32(0x30000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aca8:{NFSU2_TR(0x66aca8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66acae:{NFSU2_TR(0x66acae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66acb3ull));
TAIL_STATIC(0x75db6au,75d);
}
B66acb3:L66acb3:{c.instructions+=3;NFSU2_TR(0x66acb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffeull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66acba:{NFSU2_TR(0x66acba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66acbb:{NFSU2_TR(0x66acbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66acbc:L66acbc:{c.instructions+=7;NFSU2_TR(0x66acbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66acc3:{NFSU2_TR(0x66acc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffffbull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66acca:{NFSU2_TR(0x66acca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66accb:{NFSU2_TR(0x66accb);
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
B66accd:{NFSU2_TR(0x66accd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66acce:{NFSU2_TR(0x66acce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66accf:{NFSU2_TR(0x66accf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66acd2:L66acd2:{c.instructions+=8;NFSU2_TR(0x66acd2);
__builtin_memmove((R+28),(R+28),4);
}
B66acd4:{NFSU2_TR(0x66acd4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66acd5:{NFSU2_TR(0x66acd5);
__builtin_memmove((R+20),(R+16),4);
}
B66acd7:{NFSU2_TR(0x66acd7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66acd8:{NFSU2_TR(0x66acd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66acdb:{NFSU2_TR(0x66acdb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66acdf:{NFSU2_TR(0x66acdf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ace0:{NFSU2_TR(0x66ace0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66acee;}}
}
B66ace2:L66ace2:{c.instructions+=2;NFSU2_TR(0x66ace2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66ace9:{NFSU2_TR(0x66ace9);
{goto L66adc3;}
}
B66acee:L66acee:{c.instructions+=8;NFSU2_TR(0x66acee);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66acf2:{NFSU2_TR(0x66acf2);
w4(R+28,u32(r2(R+0)));
}
B66acf5:{NFSU2_TR(0x66acf5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B66acfb:{NFSU2_TR(0x66acfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B66ad01:{NFSU2_TR(0x66ad01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ad02:{NFSU2_TR(0x66ad02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66ad05:{NFSU2_TR(0x66ad05);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ad08:{NFSU2_TR(0x66ad08);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66ad16;}}
}
B66ad0a:L66ad0a:{c.instructions+=2;NFSU2_TR(0x66ad0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66ad11:{NFSU2_TR(0x66ad11);
{goto L66adc2;}
}
B66ad16:L66ad16:{c.instructions+=3;NFSU2_TR(0x66ad16);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B66ad1a:{NFSU2_TR(0x66ad1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(R+12))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B66ad1d:{NFSU2_TR(0x66ad1d);
if(r1(R+518)){{goto L66ad82;}}
}
B66ad1f:L66ad1f:{c.instructions+=2;NFSU2_TR(0x66ad1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B66ad24:{NFSU2_TR(0x66ad24);
if(r1(R+518)){{goto L66ad50;}}
}
B66ad26:L66ad26:{c.instructions+=13;NFSU2_TR(0x66ad26);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66ad28:{NFSU2_TR(0x66ad28);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B66ad2c:{NFSU2_TR(0x66ad2c);
w4(R+0,u32(r2(R+4)));
}
B66ad2f:{NFSU2_TR(0x66ad2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ad32:{NFSU2_TR(0x66ad32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B66ad35:{NFSU2_TR(0x66ad35);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66ad38:{NFSU2_TR(0x66ad38);
u8 U[14];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B66ad3d:{NFSU2_TR(0x66ad3d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B66ad3e:{NFSU2_TR(0x66ad3e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ad3f:{NFSU2_TR(0x66ad3f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ad41:{NFSU2_TR(0x66ad41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ad42:{NFSU2_TR(0x66ad42);
__builtin_memmove((R+4),(R+24),4);
}
B66ad44:{NFSU2_TR(0x66ad44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ad49ull));
TAIL_STATIC(0x65ae25u,65a);
}
B66ad49:L66ad49:{c.instructions+=3;NFSU2_TR(0x66ad49);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66ad4b:{NFSU2_TR(0x66ad4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ad4e:{NFSU2_TR(0x66ad4e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66adc2;}}
}
B66ad50:L66ad50:{c.instructions+=15;NFSU2_TR(0x66ad50);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66ad54:{NFSU2_TR(0x66ad54);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x42ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+0,u16(u32(r2(R+0))-u32(r2(U+4))));
}
B66ad58:{NFSU2_TR(0x66ad58);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66ad5c:{NFSU2_TR(0x66ad5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ad5f:{NFSU2_TR(0x66ad5f);
w1(R+512,u8((r2(R+0))!=(u16(0x0ull))));
w2(R+0,u16(0-u32(r2(R+0))));
}
B66ad62:{NFSU2_TR(0x66ad62);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B66ad64:{NFSU2_TR(0x66ad64);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66ad65:{NFSU2_TR(0x66ad65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ad66:{NFSU2_TR(0x66ad66);
w4(R+0,u32(r2(R+12)));
}
B66ad69:{NFSU2_TR(0x66ad69);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66ad6c:{NFSU2_TR(0x66ad6c);
u8 U[14];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B66ad71:{NFSU2_TR(0x66ad71);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ad73:{NFSU2_TR(0x66ad73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ad74:{NFSU2_TR(0x66ad74);
__builtin_memmove((R+4),(R+24),4);
}
B66ad76:{NFSU2_TR(0x66ad76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ad7bull));
TAIL_STATIC(0x65ae25u,65a);
}
B66ad7b:L66ad7b:{c.instructions+=3;NFSU2_TR(0x66ad7b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66ad7d:{NFSU2_TR(0x66ad7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ad80:{NFSU2_TR(0x66ad80);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66adc2;}}
}
B66ad82:L66ad82:{c.instructions+=7;NFSU2_TR(0x66ad82);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B66ad85:{NFSU2_TR(0x66ad85);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B66ad88:{NFSU2_TR(0x66ad88);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x7full))));
s1(u32(r4(U+0)),r1(U+4));
}
B66ad8f:{NFSU2_TR(0x66ad8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ad95:{NFSU2_TR(0x66ad95);
w4(R+28,u32(0x100ull));
}
B66ad9a:{NFSU2_TR(0x66ad9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66ad9c:{NFSU2_TR(0x66ad9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ad0au);}goto L66ad0a;}}
}
B66ada2:L66ada2:{c.instructions+=6;NFSU2_TR(0x66ada2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66ada4:{NFSU2_TR(0x66ada4);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66ada8:{NFSU2_TR(0x66ada8);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66adad:{NFSU2_TR(0x66adad);
__builtin_memmove((R+4),(R+24),4);
}
B66adaf:{NFSU2_TR(0x66adaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66adb0:{NFSU2_TR(0x66adb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66adb5ull));
TAIL_STATIC(0x6691a1u,669);
}
B66adb5:L66adb5:{c.instructions+=3;NFSU2_TR(0x66adb5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66adb7:{NFSU2_TR(0x66adb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66adba:{NFSU2_TR(0x66adba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66adc2;}}
}
B66adbc:L66adbc:{c.instructions+=1;NFSU2_TR(0x66adbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B66adc2:L66adc2:{c.instructions+=1;NFSU2_TR(0x66adc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66adc3:L66adc3:{c.instructions+=3;NFSU2_TR(0x66adc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66adc9:{NFSU2_TR(0x66adc9);
u8 U[5];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(U+4,u8(u32(r1(U+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B66adcc:{NFSU2_TR(0x66adcc);
if(r1(R+518)){{goto L66ade3;}}
}
B66adce:L66adce:{c.instructions+=3;NFSU2_TR(0x66adce);
u8 U[4];
w4(U+0,u32(0x30000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66add3:{NFSU2_TR(0x66add3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66add9:{NFSU2_TR(0x66add9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66addeull));
TAIL_STATIC(0x75db6au,75d);
}
B66adde:L66adde:{c.instructions+=3;NFSU2_TR(0x66adde);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffeull))));
s4(u32(r4(R+28)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66ade1:{NFSU2_TR(0x66ade1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66ade2:{NFSU2_TR(0x66ade2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66ade3:L66ade3:{c.instructions+=5;NFSU2_TR(0x66ade3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ade6:{NFSU2_TR(0x66ade6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66ade7:{NFSU2_TR(0x66ade7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66ade8:{NFSU2_TR(0x66ade8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66ade9:{NFSU2_TR(0x66ade9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66adec:L66adec:{c.instructions+=11;NFSU2_TR(0x66adec);
__builtin_memmove((R+28),(R+28),4);
}
B66adee:{NFSU2_TR(0x66adee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66adef:{NFSU2_TR(0x66adef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66adf0:{NFSU2_TR(0x66adf0);
__builtin_memmove((R+24),(R+4),4);
}
B66adf2:{NFSU2_TR(0x66adf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((R+12),(U+0),4);
}
B66adf8:{NFSU2_TR(0x66adf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66adfa:{NFSU2_TR(0x66adfa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66adfb:{NFSU2_TR(0x66adfb);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66adfd:{NFSU2_TR(0x66adfd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66adff:{NFSU2_TR(0x66adff);
u8 U[4];
w4(U+0,u32(0x7b6fe0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B66ae05:{NFSU2_TR(0x66ae05);
if(r1(R+518)){{goto L66ae10;}}
}
B66ae07:L66ae07:{c.instructions+=2;NFSU2_TR(0x66ae07);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ae09:{NFSU2_TR(0x66ae09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ae0eull));
TAIL_STATIC(0x65b6a8u,65b);
}
B66ae0e:L66ae0e:{c.instructions+=1;NFSU2_TR(0x66ae0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66ae10:L66ae10:{c.instructions+=2;NFSU2_TR(0x66ae10);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ae16:{NFSU2_TR(0x66ae16);
if(r1(R+518)){{goto L66ae48;}}
}
B66ae18:L66ae18:{c.instructions+=3;NFSU2_TR(0x66ae18);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66ae1a:{NFSU2_TR(0x66ae1a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ae20:{NFSU2_TR(0x66ae20);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ae48;}}
}
B66ae22:L66ae22:{c.instructions+=4;NFSU2_TR(0x66ae22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ae28:{NFSU2_TR(0x66ae28);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66ae2b:{NFSU2_TR(0x66ae2b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ae2d:{NFSU2_TR(0x66ae2d);
if(r1(R+518)){{goto L66ae3f;}}
}
B66ae2f:L66ae2f:{c.instructions+=2;NFSU2_TR(0x66ae2f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ae31:{NFSU2_TR(0x66ae31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ae36ull));
TAIL_STATIC(0x66519eu,665);
}
B66ae36:L66ae36:{c.instructions+=2;NFSU2_TR(0x66ae36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ae3c:{NFSU2_TR(0x66ae3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66ae3f:L66ae3f:{c.instructions+=3;NFSU2_TR(0x66ae3f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B66ae40:{NFSU2_TR(0x66ae40);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B66ae46:{NFSU2_TR(0x66ae46);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ae22u);}goto L66ae22;}}
}
B66ae48:L66ae48:{c.instructions+=2;NFSU2_TR(0x66ae48);
__builtin_memmove((R+4),(R+24),4);
}
B66ae4a:{NFSU2_TR(0x66ae4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ae4full));
TAIL_STATIC(0x65b7f0u,65b);
}
B66ae4f:L66ae4f:{c.instructions+=2;NFSU2_TR(0x66ae4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66ae55:{NFSU2_TR(0x66ae55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ae5aull));
TAIL_STATIC(0x575630u,575);
}
B66ae5a:L66ae5a:{c.instructions+=4;NFSU2_TR(0x66ae5a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66ae5c:{NFSU2_TR(0x66ae5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ae62:{NFSU2_TR(0x66ae62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66ae63:{NFSU2_TR(0x66ae63);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66ae8b;}}
}
B66ae65:L66ae65:{c.instructions+=4;NFSU2_TR(0x66ae65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ae6b:{NFSU2_TR(0x66ae6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66ae6e:{NFSU2_TR(0x66ae6e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ae70:{NFSU2_TR(0x66ae70);
if(r1(R+518)){{goto L66ae82;}}
}
B66ae72:L66ae72:{c.instructions+=2;NFSU2_TR(0x66ae72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ae73:{NFSU2_TR(0x66ae73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ae78ull));
TAIL_STATIC(0x575630u,575);
}
B66ae78:L66ae78:{c.instructions+=3;NFSU2_TR(0x66ae78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ae7e:{NFSU2_TR(0x66ae7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66ae7f:{NFSU2_TR(0x66ae7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66ae82:L66ae82:{c.instructions+=3;NFSU2_TR(0x66ae82);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B66ae83:{NFSU2_TR(0x66ae83);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B66ae89:{NFSU2_TR(0x66ae89);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66ae65u);}goto L66ae65;}}
}
B66ae8b:L66ae8b:{c.instructions+=4;NFSU2_TR(0x66ae8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+12),(U+0),4);
}
B66ae91:{NFSU2_TR(0x66ae91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66ae93:{NFSU2_TR(0x66ae93);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66ae95:{NFSU2_TR(0x66ae95);
if(r1(R+518)){{goto L66aea0;}}
}
B66ae97:L66ae97:{c.instructions+=2;NFSU2_TR(0x66ae97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ae98:{NFSU2_TR(0x66ae98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ae9dull));
TAIL_STATIC(0x575630u,575);
}
B66ae9d:L66ae9d:{c.instructions+=2;NFSU2_TR(0x66ae9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66ae9e:{NFSU2_TR(0x66ae9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66aea0:L66aea0:{c.instructions+=3;NFSU2_TR(0x66aea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66aea6:{NFSU2_TR(0x66aea6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66aea8:{NFSU2_TR(0x66aea8);
if(r1(R+518)){{goto L66aeb7;}}
}
B66aeaa:L66aeaa:{c.instructions+=2;NFSU2_TR(0x66aeaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aeab:{NFSU2_TR(0x66aeab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66aeb0ull));
TAIL_STATIC(0x575630u,575);
}
B66aeb0:L66aeb0:{c.instructions+=2;NFSU2_TR(0x66aeb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66aeb1:{NFSU2_TR(0x66aeb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66aeb7:L66aeb7:{c.instructions+=3;NFSU2_TR(0x66aeb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66aeba:{NFSU2_TR(0x66aeba);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66aebc:{NFSU2_TR(0x66aebc);
if(r1(R+518)){{goto L66aec8;}}
}
B66aebe:L66aebe:{c.instructions+=2;NFSU2_TR(0x66aebe);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aec0:{NFSU2_TR(0x66aec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66aec5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a4d5u);}goto L66a4d5;}
}
B66aec5:L66aec5:{c.instructions+=1;NFSU2_TR(0x66aec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66aec8:L66aec8:{c.instructions+=4;NFSU2_TR(0x66aec8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66aece:{NFSU2_TR(0x66aece);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66aed0:{NFSU2_TR(0x66aed0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66aed2:{NFSU2_TR(0x66aed2);
if(r1(R+518)){{goto L66aedd;}}
}
B66aed4:L66aed4:{c.instructions+=2;NFSU2_TR(0x66aed4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aed5:{NFSU2_TR(0x66aed5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66aedaull));
TAIL_STATIC(0x575630u,575);
}
B66aeda:L66aeda:{c.instructions+=2;NFSU2_TR(0x66aeda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66aedb:{NFSU2_TR(0x66aedb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66aedd:L66aedd:{c.instructions+=4;NFSU2_TR(0x66aedd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((R+12),(U+0),4);
}
B66aee3:{NFSU2_TR(0x66aee3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66aee5:{NFSU2_TR(0x66aee5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66aee7:{NFSU2_TR(0x66aee7);
if(r1(R+518)){{goto L66aef2;}}
}
B66aee9:L66aee9:{c.instructions+=2;NFSU2_TR(0x66aee9);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66aeeb:{NFSU2_TR(0x66aeeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66aef0ull));
TAIL_STATIC(0x6651bfu,665);
}
B66aef0:L66aef0:{c.instructions+=1;NFSU2_TR(0x66aef0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66aef2:L66aef2:{c.instructions+=4;NFSU2_TR(0x66aef2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66aef8:{NFSU2_TR(0x66aef8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66aefa:{NFSU2_TR(0x66aefa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66aefc:{NFSU2_TR(0x66aefc);
if(r1(R+518)){{goto L66af07;}}
}
B66aefe:L66aefe:{c.instructions+=2;NFSU2_TR(0x66aefe);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66af00:{NFSU2_TR(0x66af00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66af05ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66a523u);}goto L66a523;}
}
B66af05:L66af05:{c.instructions+=1;NFSU2_TR(0x66af05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66af07:L66af07:{c.instructions+=3;NFSU2_TR(0x66af07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66af0a:{NFSU2_TR(0x66af0a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66af0c:{NFSU2_TR(0x66af0c);
if(r1(R+518)){{goto L66af18;}}
}
B66af0e:L66af0e:{c.instructions+=2;NFSU2_TR(0x66af0e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66af10:{NFSU2_TR(0x66af10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66af15ull));
TAIL_STATIC(0x661453u,661);
}
B66af15:L66af15:{c.instructions+=1;NFSU2_TR(0x66af15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66af18:L66af18:{c.instructions+=3;NFSU2_TR(0x66af18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66af1b:{NFSU2_TR(0x66af1b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66af1d:{NFSU2_TR(0x66af1d);
if(r1(R+518)){{goto L66af29;}}
}
B66af1f:L66af1f:{c.instructions+=2;NFSU2_TR(0x66af1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66af20:{NFSU2_TR(0x66af20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66af25ull));
TAIL_STATIC(0x575630u,575);
}
B66af25:L66af25:{c.instructions+=2;NFSU2_TR(0x66af25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66af26:{NFSU2_TR(0x66af26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66af29:L66af29:{c.instructions+=4;NFSU2_TR(0x66af29);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66af2f:{NFSU2_TR(0x66af2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66af31:{NFSU2_TR(0x66af31);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66af33:{NFSU2_TR(0x66af33);
if(r1(R+518)){{goto L66af3e;}}
}
B66af35:L66af35:{c.instructions+=2;NFSU2_TR(0x66af35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66af36:{NFSU2_TR(0x66af36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66af3bull));
TAIL_STATIC(0x575630u,575);
}
B66af3b:L66af3b:{c.instructions+=2;NFSU2_TR(0x66af3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66af3c:{NFSU2_TR(0x66af3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66af3e:L66af3e:{c.instructions+=4;NFSU2_TR(0x66af3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((R+12),(U+0),4);
}
B66af44:{NFSU2_TR(0x66af44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66af46:{NFSU2_TR(0x66af46);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66af48:{NFSU2_TR(0x66af48);
if(r1(R+518)){{goto L66af53;}}
}
B66af4a:L66af4a:{c.instructions+=2;NFSU2_TR(0x66af4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66af4b:{NFSU2_TR(0x66af4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66af50ull));
TAIL_STATIC(0x575630u,575);
}
B66af50:L66af50:{c.instructions+=2;NFSU2_TR(0x66af50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66af51:{NFSU2_TR(0x66af51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66af53:L66af53:{c.instructions+=4;NFSU2_TR(0x66af53);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66af59:{NFSU2_TR(0x66af59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66af5b:{NFSU2_TR(0x66af5b);
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
B66af5d:{NFSU2_TR(0x66af5d);
if(r1(R+518)){{goto L66af67;}}
}
B66af5f:L66af5f:{c.instructions+=3;NFSU2_TR(0x66af5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66af61:{NFSU2_TR(0x66af61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66af62:{NFSU2_TR(0x66af62);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66af65ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66af65:L66af65:{c.instructions+=1;NFSU2_TR(0x66af65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66af67:L66af67:{c.instructions+=4;NFSU2_TR(0x66af67);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66af6d:{NFSU2_TR(0x66af6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66af6f:{NFSU2_TR(0x66af6f);
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
B66af71:{NFSU2_TR(0x66af71);
if(r1(R+518)){{goto L66af7b;}}
}
B66af73:L66af73:{c.instructions+=3;NFSU2_TR(0x66af73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66af75:{NFSU2_TR(0x66af75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66af76:{NFSU2_TR(0x66af76);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66af79ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66af79:L66af79:{c.instructions+=1;NFSU2_TR(0x66af79);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B66af7b:L66af7b:{c.instructions+=3;NFSU2_TR(0x66af7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66af7e:{NFSU2_TR(0x66af7e);
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
B66af80:{NFSU2_TR(0x66af80);
if(r1(R+518)){{goto L66af8b;}}
}
B66af82:L66af82:{c.instructions+=3;NFSU2_TR(0x66af82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66af84:{NFSU2_TR(0x66af84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66af85:{NFSU2_TR(0x66af85);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66af88ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66af88:L66af88:{c.instructions+=1;NFSU2_TR(0x66af88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66af8b:L66af8b:{c.instructions+=3;NFSU2_TR(0x66af8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66af8e:{NFSU2_TR(0x66af8e);
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
B66af90:{NFSU2_TR(0x66af90);
if(r1(R+518)){{goto L66af9b;}}
}
B66af92:L66af92:{c.instructions+=3;NFSU2_TR(0x66af92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66af94:{NFSU2_TR(0x66af94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66af95:{NFSU2_TR(0x66af95);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66af98ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66af98:L66af98:{c.instructions+=1;NFSU2_TR(0x66af98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66af9b:L66af9b:{c.instructions+=2;NFSU2_TR(0x66af9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66afa1:{NFSU2_TR(0x66afa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66afa6ull));
TAIL_STATIC(0x575630u,575);
}
B66afa6:L66afa6:{c.instructions+=3;NFSU2_TR(0x66afa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66afa7:{NFSU2_TR(0x66afa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66afad:{NFSU2_TR(0x66afad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66afb2ull));
TAIL_STATIC(0x663fcfu,663);
}
B66afb2:L66afb2:{c.instructions+=2;NFSU2_TR(0x66afb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66afb5:{NFSU2_TR(0x66afb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66afbaull));
TAIL_STATIC(0x664efau,664);
}
B66afba:L66afba:{c.instructions+=5;NFSU2_TR(0x66afba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66afbb:{NFSU2_TR(0x66afbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66afbe:{NFSU2_TR(0x66afbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66afbf:{NFSU2_TR(0x66afbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66afc0:{NFSU2_TR(0x66afc0);
TAIL_STATIC(0x65e4ffu,65e);
}
B66afc5:L66afc5:{c.instructions+=6;NFSU2_TR(0x66afc5);
__builtin_memmove((R+28),(R+28),4);
}
B66afc7:{NFSU2_TR(0x66afc7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66afc8:{NFSU2_TR(0x66afc8);
__builtin_memmove((R+20),(R+16),4);
}
B66afca:{NFSU2_TR(0x66afca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66afcb:{NFSU2_TR(0x66afcb);
__builtin_memmove((R+24),(R+4),4);
}
B66afcd:{NFSU2_TR(0x66afcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66afd2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66adecu);}goto L66adec;}
}
B66afd2:L66afd2:{c.instructions+=2;NFSU2_TR(0x66afd2);
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
B66afd6:{NFSU2_TR(0x66afd6);
if(r1(R+518)){{goto L66afdf;}}
}
B66afd8:L66afd8:{c.instructions+=2;NFSU2_TR(0x66afd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66afd9:{NFSU2_TR(0x66afd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66afdeull));
TAIL_STATIC(0x575630u,575);
}
B66afde:L66afde:{c.instructions+=1;NFSU2_TR(0x66afde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66afdf:L66afdf:{c.instructions+=4;NFSU2_TR(0x66afdf);
__builtin_memmove((R+0),(R+24),4);
}
B66afe1:{NFSU2_TR(0x66afe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66afe2:{NFSU2_TR(0x66afe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66afe3:{NFSU2_TR(0x66afe3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66afe6:L66afe6:{c.instructions+=9;NFSU2_TR(0x66afe6);
__builtin_memmove((R+28),(R+28),4);
}
B66afe8:{NFSU2_TR(0x66afe8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66afe9:{NFSU2_TR(0x66afe9);
__builtin_memmove((R+20),(R+16),4);
}
B66afeb:{NFSU2_TR(0x66afeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B66afee:{NFSU2_TR(0x66afee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66afef:{NFSU2_TR(0x66afef);
__builtin_memmove((R+12),(R+4),4);
}
B66aff1:{NFSU2_TR(0x66aff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66aff7:{NFSU2_TR(0x66aff7);
u8 U[32];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xacull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B66affe:{NFSU2_TR(0x66affe);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x119ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x8ull))));
s1(u32(r4(U+0)),r1(U+4));
TAIL_STATIC(0x66b005u,66b);
}
XIT:NFSU2_TR_EXIT(0x66a,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
