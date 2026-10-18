#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_497(u8* __restrict R,Cpu& c);
u32 body_498(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4b1(u8* __restrict R,Cpu& c);
u32 body_4b2(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4cd(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4cc,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4cc,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4cc(u8* __restrict R,Cpu& c);
u32 page_4cc(Cpu& c){return body_4cc(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4cc(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4cc001:goto L4cc001;
case 0x4cc003:goto L4cc003;
case 0x4cc005:goto L4cc005;
case 0x4cc008:c.instructions+=9;goto B4cc008;
case 0x4cc00b:c.instructions+=8;goto B4cc00b;
case 0x4cc00d:c.instructions+=7;goto B4cc00d;
case 0x4cc010:c.instructions+=6;goto B4cc010;
case 0x4cc012:c.instructions+=5;goto B4cc012;
case 0x4cc018:c.instructions+=4;goto B4cc018;
case 0x4cc019:c.instructions+=3;goto B4cc019;
case 0x4cc01b:c.instructions+=2;goto B4cc01b;
case 0x4cc01e:c.instructions+=1;goto B4cc01e;
case 0x4cc023:goto L4cc023;
case 0x4cc028:c.instructions+=3;goto B4cc028;
case 0x4cc029:c.instructions+=2;goto B4cc029;
case 0x4cc02e:c.instructions+=1;goto B4cc02e;
case 0x4cc033:goto L4cc033;
case 0x4cc035:c.instructions+=1;goto B4cc035;
case 0x4cc037:goto L4cc037;
case 0x4cc039:c.instructions+=1;goto B4cc039;
case 0x4cc03e:goto L4cc03e;
case 0x4cc041:c.instructions+=2;goto B4cc041;
case 0x4cc043:c.instructions+=1;goto B4cc043;
case 0x4cc045:goto L4cc045;
case 0x4cc048:c.instructions+=6;goto B4cc048;
case 0x4cc04e:c.instructions+=5;goto B4cc04e;
case 0x4cc050:c.instructions+=4;goto B4cc050;
case 0x4cc053:c.instructions+=3;goto B4cc053;
case 0x4cc057:c.instructions+=2;goto B4cc057;
case 0x4cc059:c.instructions+=1;goto B4cc059;
case 0x4cc05b:goto L4cc05b;
case 0x4cc05d:goto L4cc05d;
case 0x4cc05e:c.instructions+=2;goto B4cc05e;
case 0x4cc063:c.instructions+=1;goto B4cc063;
case 0x4cc068:goto L4cc068;
case 0x4cc06b:c.instructions+=5;goto B4cc06b;
case 0x4cc06c:c.instructions+=4;goto B4cc06c;
case 0x4cc070:c.instructions+=3;goto B4cc070;
case 0x4cc072:c.instructions+=2;goto B4cc072;
case 0x4cc073:c.instructions+=1;goto B4cc073;
case 0x4cc078:goto L4cc078;
case 0x4cc07b:c.instructions+=6;goto B4cc07b;
case 0x4cc07d:c.instructions+=5;goto B4cc07d;
case 0x4cc07f:c.instructions+=4;goto B4cc07f;
case 0x4cc083:c.instructions+=3;goto B4cc083;
case 0x4cc084:c.instructions+=2;goto B4cc084;
case 0x4cc086:c.instructions+=1;goto B4cc086;
case 0x4cc08b:goto L4cc08b;
case 0x4cc08c:c.instructions+=2;goto B4cc08c;
case 0x4cc08e:c.instructions+=1;goto B4cc08e;
case 0x4cc093:goto L4cc093;
case 0x4cc094:c.instructions+=3;goto B4cc094;
case 0x4cc095:c.instructions+=2;goto B4cc095;
case 0x4cc09a:c.instructions+=1;goto B4cc09a;
case 0x4cc09f:goto L4cc09f;
case 0x4cc0a1:c.instructions+=1;goto B4cc0a1;
case 0x4cc0a3:goto L4cc0a3;
case 0x4cc0a7:goto L4cc0a7;
case 0x4cc0a9:c.instructions+=2;goto B4cc0a9;
case 0x4cc0ab:c.instructions+=1;goto B4cc0ab;
case 0x4cc0b0:goto L4cc0b0;
case 0x4cc0b2:c.instructions+=1;goto B4cc0b2;
case 0x4cc0b7:goto L4cc0b7;
case 0x4cc0b8:c.instructions+=4;goto B4cc0b8;
case 0x4cc0b9:c.instructions+=3;goto B4cc0b9;
case 0x4cc0ba:c.instructions+=2;goto B4cc0ba;
case 0x4cc0bd:c.instructions+=1;goto B4cc0bd;
case 0x4cc0c0:goto L4cc0c0;
case 0x4cc0c2:c.instructions+=11;goto B4cc0c2;
case 0x4cc0c7:c.instructions+=10;goto B4cc0c7;
case 0x4cc0cd:c.instructions+=9;goto B4cc0cd;
case 0x4cc0ce:c.instructions+=8;goto B4cc0ce;
case 0x4cc0d5:c.instructions+=7;goto B4cc0d5;
case 0x4cc0d6:c.instructions+=6;goto B4cc0d6;
case 0x4cc0d7:c.instructions+=5;goto B4cc0d7;
case 0x4cc0d9:c.instructions+=4;goto B4cc0d9;
case 0x4cc0dd:c.instructions+=3;goto B4cc0dd;
case 0x4cc0e3:c.instructions+=2;goto B4cc0e3;
case 0x4cc0eb:c.instructions+=1;goto B4cc0eb;
case 0x4cc0f0:goto L4cc0f0;
case 0x4cc0f6:c.instructions+=2;goto B4cc0f6;
case 0x4cc0fb:c.instructions+=1;goto B4cc0fb;
case 0x4cc100:goto L4cc100;
case 0x4cc106:c.instructions+=2;goto B4cc106;
case 0x4cc10b:c.instructions+=1;goto B4cc10b;
case 0x4cc110:goto L4cc110;
case 0x4cc116:c.instructions+=2;goto B4cc116;
case 0x4cc11b:c.instructions+=1;goto B4cc11b;
case 0x4cc120:goto L4cc120;
case 0x4cc122:c.instructions+=2;goto B4cc122;
case 0x4cc12a:c.instructions+=1;goto B4cc12a;
case 0x4cc12f:goto L4cc12f;
case 0x4cc133:c.instructions+=4;goto B4cc133;
case 0x4cc134:c.instructions+=3;goto B4cc134;
case 0x4cc13b:c.instructions+=2;goto B4cc13b;
case 0x4cc13e:c.instructions+=1;goto B4cc13e;
case 0x4cc140:goto L4cc140;
case 0x4cc144:c.instructions+=8;goto B4cc144;
case 0x4cc146:c.instructions+=7;goto B4cc146;
case 0x4cc147:c.instructions+=6;goto B4cc147;
case 0x4cc148:c.instructions+=5;goto B4cc148;
case 0x4cc14a:c.instructions+=4;goto B4cc14a;
case 0x4cc150:c.instructions+=3;goto B4cc150;
case 0x4cc151:c.instructions+=2;goto B4cc151;
case 0x4cc157:c.instructions+=1;goto B4cc157;
case 0x4cc159:goto L4cc159;
case 0x4cc15c:c.instructions+=2;goto B4cc15c;
case 0x4cc15e:c.instructions+=1;goto B4cc15e;
case 0x4cc160:goto L4cc160;
case 0x4cc163:c.instructions+=1;goto B4cc163;
case 0x4cc165:goto L4cc165;
case 0x4cc167:goto L4cc167;
case 0x4cc16a:c.instructions+=1;goto B4cc16a;
case 0x4cc170:goto L4cc170;
case 0x4cc172:c.instructions+=2;goto B4cc172;
case 0x4cc174:c.instructions+=1;goto B4cc174;
case 0x4cc179:goto L4cc179;
case 0x4cc17c:c.instructions+=4;goto B4cc17c;
case 0x4cc17e:c.instructions+=3;goto B4cc17e;
case 0x4cc180:c.instructions+=2;goto B4cc180;
case 0x4cc181:c.instructions+=1;goto B4cc181;
case 0x4cc183:goto L4cc183;
case 0x4cc186:c.instructions+=2;goto B4cc186;
case 0x4cc188:c.instructions+=1;goto B4cc188;
case 0x4cc18a:goto L4cc18a;
case 0x4cc18d:c.instructions+=1;goto B4cc18d;
case 0x4cc18f:goto L4cc18f;
case 0x4cc191:goto L4cc191;
case 0x4cc194:c.instructions+=1;goto B4cc194;
case 0x4cc19a:goto L4cc19a;
case 0x4cc19c:c.instructions+=2;goto B4cc19c;
case 0x4cc19e:c.instructions+=1;goto B4cc19e;
case 0x4cc1a3:goto L4cc1a3;
case 0x4cc1a6:c.instructions+=3;goto B4cc1a6;
case 0x4cc1a8:c.instructions+=2;goto B4cc1a8;
case 0x4cc1aa:c.instructions+=1;goto B4cc1aa;
case 0x4cc1ab:goto L4cc1ab;
case 0x4cc1b0:goto L4cc1b0;
case 0x4cc1b6:c.instructions+=3;goto B4cc1b6;
case 0x4cc1b9:c.instructions+=2;goto B4cc1b9;
case 0x4cc1bb:c.instructions+=1;goto B4cc1bb;
case 0x4cc1bd:goto L4cc1bd;
case 0x4cc1bf:c.instructions+=1;goto B4cc1bf;
case 0x4cc1c1:goto L4cc1c1;
case 0x4cc1c4:c.instructions+=7;goto B4cc1c4;
case 0x4cc1c6:c.instructions+=6;goto B4cc1c6;
case 0x4cc1c9:c.instructions+=5;goto B4cc1c9;
case 0x4cc1ca:c.instructions+=4;goto B4cc1ca;
case 0x4cc1cd:c.instructions+=3;goto B4cc1cd;
case 0x4cc1ce:c.instructions+=2;goto B4cc1ce;
case 0x4cc1d0:c.instructions+=1;goto B4cc1d0;
case 0x4cc1d3:goto L4cc1d3;
case 0x4cc1d9:c.instructions+=1;goto B4cc1d9;
case 0x4cc1df:goto L4cc1df;
case 0x4cc1e1:c.instructions+=1;goto B4cc1e1;
case 0x4cc1e6:goto L4cc1e6;
case 0x4cc1e8:c.instructions+=1;goto B4cc1e8;
case 0x4cc1ed:goto L4cc1ed;
case 0x4cc1f3:c.instructions+=4;goto B4cc1f3;
case 0x4cc1f6:c.instructions+=3;goto B4cc1f6;
case 0x4cc1f9:c.instructions+=2;goto B4cc1f9;
case 0x4cc1fb:c.instructions+=1;goto B4cc1fb;
case 0x4cc1fd:goto L4cc1fd;
case 0x4cc200:c.instructions+=5;goto B4cc200;
case 0x4cc203:c.instructions+=4;goto B4cc203;
case 0x4cc209:c.instructions+=3;goto B4cc209;
case 0x4cc20a:c.instructions+=2;goto B4cc20a;
case 0x4cc20b:c.instructions+=1;goto B4cc20b;
case 0x4cc210:goto L4cc210;
case 0x4cc211:c.instructions+=3;goto B4cc211;
case 0x4cc212:c.instructions+=2;goto B4cc212;
case 0x4cc213:c.instructions+=1;goto B4cc213;
case 0x4cc216:goto L4cc216;
case 0x4cc219:c.instructions+=6;goto B4cc219;
case 0x4cc21c:c.instructions+=5;goto B4cc21c;
case 0x4cc21d:c.instructions+=4;goto B4cc21d;
case 0x4cc223:c.instructions+=3;goto B4cc223;
case 0x4cc229:c.instructions+=2;goto B4cc229;
case 0x4cc22a:c.instructions+=1;goto B4cc22a;
case 0x4cc22f:goto L4cc22f;
case 0x4cc230:c.instructions+=3;goto B4cc230;
case 0x4cc231:c.instructions+=2;goto B4cc231;
case 0x4cc232:c.instructions+=1;goto B4cc232;
case 0x4cc240:goto L4cc240;
case 0x4cc250:goto L4cc250;
case 0x4cc256:c.instructions+=5;goto B4cc256;
case 0x4cc257:c.instructions+=4;goto B4cc257;
case 0x4cc258:c.instructions+=3;goto B4cc258;
case 0x4cc25a:c.instructions+=2;goto B4cc25a;
case 0x4cc25c:c.instructions+=1;goto B4cc25c;
case 0x4cc261:goto L4cc261;
case 0x4cc264:c.instructions+=2;goto B4cc264;
case 0x4cc266:c.instructions+=1;goto B4cc266;
case 0x4cc268:goto L4cc268;
case 0x4cc26b:c.instructions+=6;goto B4cc26b;
case 0x4cc26d:c.instructions+=5;goto B4cc26d;
case 0x4cc270:c.instructions+=4;goto B4cc270;
case 0x4cc274:c.instructions+=3;goto B4cc274;
case 0x4cc27a:c.instructions+=2;goto B4cc27a;
case 0x4cc27c:c.instructions+=1;goto B4cc27c;
case 0x4cc27e:goto L4cc27e;
case 0x4cc280:goto L4cc280;
case 0x4cc287:c.instructions+=6;goto B4cc287;
case 0x4cc28e:c.instructions+=5;goto B4cc28e;
case 0x4cc28f:c.instructions+=4;goto B4cc28f;
case 0x4cc290:c.instructions+=3;goto B4cc290;
case 0x4cc291:c.instructions+=2;goto B4cc291;
case 0x4cc293:c.instructions+=1;goto B4cc293;
case 0x4cc298:goto L4cc298;
case 0x4cc29f:c.instructions+=6;goto B4cc29f;
case 0x4cc2a0:c.instructions+=5;goto B4cc2a0;
case 0x4cc2a5:c.instructions+=4;goto B4cc2a5;
case 0x4cc2a9:c.instructions+=3;goto B4cc2a9;
case 0x4cc2ae:c.instructions+=2;goto B4cc2ae;
case 0x4cc2af:c.instructions+=1;goto B4cc2af;
case 0x4cc2b4:goto L4cc2b4;
case 0x4cc2b7:c.instructions+=6;goto B4cc2b7;
case 0x4cc2b9:c.instructions+=5;goto B4cc2b9;
case 0x4cc2bb:c.instructions+=4;goto B4cc2bb;
case 0x4cc2bf:c.instructions+=3;goto B4cc2bf;
case 0x4cc2c0:c.instructions+=2;goto B4cc2c0;
case 0x4cc2c2:c.instructions+=1;goto B4cc2c2;
case 0x4cc2c7:goto L4cc2c7;
case 0x4cc2c8:c.instructions+=2;goto B4cc2c8;
case 0x4cc2cb:c.instructions+=1;goto B4cc2cb;
case 0x4cc2d0:goto L4cc2d0;
case 0x4cc2d1:c.instructions+=3;goto B4cc2d1;
case 0x4cc2d2:c.instructions+=2;goto B4cc2d2;
case 0x4cc2d8:c.instructions+=1;goto B4cc2d8;
case 0x4cc2e0:goto L4cc2e0;
case 0x4cc2e6:c.instructions+=5;goto B4cc2e6;
case 0x4cc2e7:c.instructions+=4;goto B4cc2e7;
case 0x4cc2e8:c.instructions+=3;goto B4cc2e8;
case 0x4cc2ea:c.instructions+=2;goto B4cc2ea;
case 0x4cc2ec:c.instructions+=1;goto B4cc2ec;
case 0x4cc2f1:goto L4cc2f1;
case 0x4cc2f4:c.instructions+=2;goto B4cc2f4;
case 0x4cc2f6:c.instructions+=1;goto B4cc2f6;
case 0x4cc2f8:goto L4cc2f8;
case 0x4cc2fb:c.instructions+=6;goto B4cc2fb;
case 0x4cc2fd:c.instructions+=5;goto B4cc2fd;
case 0x4cc300:c.instructions+=4;goto B4cc300;
case 0x4cc304:c.instructions+=3;goto B4cc304;
case 0x4cc30a:c.instructions+=2;goto B4cc30a;
case 0x4cc30c:c.instructions+=1;goto B4cc30c;
case 0x4cc30e:goto L4cc30e;
case 0x4cc310:goto L4cc310;
case 0x4cc317:c.instructions+=6;goto B4cc317;
case 0x4cc31e:c.instructions+=5;goto B4cc31e;
case 0x4cc31f:c.instructions+=4;goto B4cc31f;
case 0x4cc320:c.instructions+=3;goto B4cc320;
case 0x4cc321:c.instructions+=2;goto B4cc321;
case 0x4cc323:c.instructions+=1;goto B4cc323;
case 0x4cc328:goto L4cc328;
case 0x4cc32f:c.instructions+=8;goto B4cc32f;
case 0x4cc336:c.instructions+=7;goto B4cc336;
case 0x4cc337:c.instructions+=6;goto B4cc337;
case 0x4cc338:c.instructions+=5;goto B4cc338;
case 0x4cc33d:c.instructions+=4;goto B4cc33d;
case 0x4cc341:c.instructions+=3;goto B4cc341;
case 0x4cc346:c.instructions+=2;goto B4cc346;
case 0x4cc347:c.instructions+=1;goto B4cc347;
case 0x4cc34c:goto L4cc34c;
case 0x4cc34f:c.instructions+=6;goto B4cc34f;
case 0x4cc351:c.instructions+=5;goto B4cc351;
case 0x4cc353:c.instructions+=4;goto B4cc353;
case 0x4cc357:c.instructions+=3;goto B4cc357;
case 0x4cc358:c.instructions+=2;goto B4cc358;
case 0x4cc35a:c.instructions+=1;goto B4cc35a;
case 0x4cc35f:goto L4cc35f;
case 0x4cc360:c.instructions+=2;goto B4cc360;
case 0x4cc363:c.instructions+=1;goto B4cc363;
case 0x4cc368:goto L4cc368;
case 0x4cc369:c.instructions+=3;goto B4cc369;
case 0x4cc36a:c.instructions+=2;goto B4cc36a;
case 0x4cc370:c.instructions+=1;goto B4cc370;
case 0x4cc380:goto L4cc380;
case 0x4cc386:c.instructions+=5;goto B4cc386;
case 0x4cc387:c.instructions+=4;goto B4cc387;
case 0x4cc388:c.instructions+=3;goto B4cc388;
case 0x4cc38a:c.instructions+=2;goto B4cc38a;
case 0x4cc38c:c.instructions+=1;goto B4cc38c;
case 0x4cc391:goto L4cc391;
case 0x4cc394:c.instructions+=2;goto B4cc394;
case 0x4cc396:c.instructions+=1;goto B4cc396;
case 0x4cc398:goto L4cc398;
case 0x4cc39b:c.instructions+=6;goto B4cc39b;
case 0x4cc39d:c.instructions+=5;goto B4cc39d;
case 0x4cc3a0:c.instructions+=4;goto B4cc3a0;
case 0x4cc3a4:c.instructions+=3;goto B4cc3a4;
case 0x4cc3aa:c.instructions+=2;goto B4cc3aa;
case 0x4cc3ac:c.instructions+=1;goto B4cc3ac;
case 0x4cc3ae:goto L4cc3ae;
case 0x4cc3b0:goto L4cc3b0;
case 0x4cc3b7:c.instructions+=5;goto B4cc3b7;
case 0x4cc3b9:c.instructions+=4;goto B4cc3b9;
case 0x4cc3bb:c.instructions+=3;goto B4cc3bb;
case 0x4cc3bc:c.instructions+=2;goto B4cc3bc;
case 0x4cc3be:c.instructions+=1;goto B4cc3be;
case 0x4cc3c3:goto L4cc3c3;
case 0x4cc3ca:c.instructions+=7;goto B4cc3ca;
case 0x4cc3cd:c.instructions+=6;goto B4cc3cd;
case 0x4cc3d0:c.instructions+=5;goto B4cc3d0;
case 0x4cc3d5:c.instructions+=4;goto B4cc3d5;
case 0x4cc3d9:c.instructions+=3;goto B4cc3d9;
case 0x4cc3de:c.instructions+=2;goto B4cc3de;
case 0x4cc3df:c.instructions+=1;goto B4cc3df;
case 0x4cc3e4:goto L4cc3e4;
case 0x4cc3e7:c.instructions+=6;goto B4cc3e7;
case 0x4cc3e9:c.instructions+=5;goto B4cc3e9;
case 0x4cc3eb:c.instructions+=4;goto B4cc3eb;
case 0x4cc3ef:c.instructions+=3;goto B4cc3ef;
case 0x4cc3f0:c.instructions+=2;goto B4cc3f0;
case 0x4cc3f2:c.instructions+=1;goto B4cc3f2;
case 0x4cc3f7:goto L4cc3f7;
case 0x4cc3f8:c.instructions+=2;goto B4cc3f8;
case 0x4cc3fb:c.instructions+=1;goto B4cc3fb;
case 0x4cc400:goto L4cc400;
case 0x4cc401:c.instructions+=3;goto B4cc401;
case 0x4cc402:c.instructions+=2;goto B4cc402;
case 0x4cc408:c.instructions+=1;goto B4cc408;
case 0x4cc410:goto L4cc410;
case 0x4cc416:c.instructions+=5;goto B4cc416;
case 0x4cc417:c.instructions+=4;goto B4cc417;
case 0x4cc418:c.instructions+=3;goto B4cc418;
case 0x4cc41a:c.instructions+=2;goto B4cc41a;
case 0x4cc41c:c.instructions+=1;goto B4cc41c;
case 0x4cc421:goto L4cc421;
case 0x4cc424:c.instructions+=2;goto B4cc424;
case 0x4cc426:c.instructions+=1;goto B4cc426;
case 0x4cc428:goto L4cc428;
case 0x4cc42b:c.instructions+=6;goto B4cc42b;
case 0x4cc42d:c.instructions+=5;goto B4cc42d;
case 0x4cc430:c.instructions+=4;goto B4cc430;
case 0x4cc434:c.instructions+=3;goto B4cc434;
case 0x4cc43a:c.instructions+=2;goto B4cc43a;
case 0x4cc43c:c.instructions+=1;goto B4cc43c;
case 0x4cc43e:goto L4cc43e;
case 0x4cc440:goto L4cc440;
case 0x4cc447:c.instructions+=6;goto B4cc447;
case 0x4cc44e:c.instructions+=5;goto B4cc44e;
case 0x4cc44f:c.instructions+=4;goto B4cc44f;
case 0x4cc450:c.instructions+=3;goto B4cc450;
case 0x4cc451:c.instructions+=2;goto B4cc451;
case 0x4cc453:c.instructions+=1;goto B4cc453;
case 0x4cc458:goto L4cc458;
case 0x4cc45f:c.instructions+=7;goto B4cc45f;
case 0x4cc462:c.instructions+=6;goto B4cc462;
case 0x4cc465:c.instructions+=5;goto B4cc465;
case 0x4cc46a:c.instructions+=4;goto B4cc46a;
case 0x4cc46e:c.instructions+=3;goto B4cc46e;
case 0x4cc473:c.instructions+=2;goto B4cc473;
case 0x4cc474:c.instructions+=1;goto B4cc474;
case 0x4cc479:goto L4cc479;
case 0x4cc47c:c.instructions+=6;goto B4cc47c;
case 0x4cc47e:c.instructions+=5;goto B4cc47e;
case 0x4cc480:c.instructions+=4;goto B4cc480;
case 0x4cc484:c.instructions+=3;goto B4cc484;
case 0x4cc485:c.instructions+=2;goto B4cc485;
case 0x4cc487:c.instructions+=1;goto B4cc487;
case 0x4cc48c:goto L4cc48c;
case 0x4cc48d:c.instructions+=2;goto B4cc48d;
case 0x4cc490:c.instructions+=1;goto B4cc490;
case 0x4cc495:goto L4cc495;
case 0x4cc496:c.instructions+=3;goto B4cc496;
case 0x4cc497:c.instructions+=2;goto B4cc497;
case 0x4cc49d:c.instructions+=1;goto B4cc49d;
case 0x4cc4a0:goto L4cc4a0;
case 0x4cc4a6:c.instructions+=5;goto B4cc4a6;
case 0x4cc4a7:c.instructions+=4;goto B4cc4a7;
case 0x4cc4a8:c.instructions+=3;goto B4cc4a8;
case 0x4cc4aa:c.instructions+=2;goto B4cc4aa;
case 0x4cc4ac:c.instructions+=1;goto B4cc4ac;
case 0x4cc4b1:goto L4cc4b1;
case 0x4cc4b4:c.instructions+=2;goto B4cc4b4;
case 0x4cc4b6:c.instructions+=1;goto B4cc4b6;
case 0x4cc4b8:goto L4cc4b8;
case 0x4cc4bb:c.instructions+=6;goto B4cc4bb;
case 0x4cc4bd:c.instructions+=5;goto B4cc4bd;
case 0x4cc4c0:c.instructions+=4;goto B4cc4c0;
case 0x4cc4c4:c.instructions+=3;goto B4cc4c4;
case 0x4cc4ca:c.instructions+=2;goto B4cc4ca;
case 0x4cc4cc:c.instructions+=1;goto B4cc4cc;
case 0x4cc4ce:goto L4cc4ce;
case 0x4cc4d0:goto L4cc4d0;
case 0x4cc4d7:c.instructions+=2;goto B4cc4d7;
case 0x4cc4d8:c.instructions+=1;goto B4cc4d8;
case 0x4cc4dd:goto L4cc4dd;
case 0x4cc4de:c.instructions+=4;goto B4cc4de;
case 0x4cc4e2:c.instructions+=3;goto B4cc4e2;
case 0x4cc4e7:c.instructions+=2;goto B4cc4e7;
case 0x4cc4e8:c.instructions+=1;goto B4cc4e8;
case 0x4cc4ed:goto L4cc4ed;
case 0x4cc4f0:c.instructions+=6;goto B4cc4f0;
case 0x4cc4f2:c.instructions+=5;goto B4cc4f2;
case 0x4cc4f4:c.instructions+=4;goto B4cc4f4;
case 0x4cc4f8:c.instructions+=3;goto B4cc4f8;
case 0x4cc4f9:c.instructions+=2;goto B4cc4f9;
case 0x4cc4fb:c.instructions+=1;goto B4cc4fb;
case 0x4cc500:goto L4cc500;
case 0x4cc502:c.instructions+=4;goto B4cc502;
case 0x4cc504:c.instructions+=3;goto B4cc504;
case 0x4cc509:c.instructions+=2;goto B4cc509;
case 0x4cc50b:c.instructions+=1;goto B4cc50b;
case 0x4cc510:goto L4cc510;
case 0x4cc511:c.instructions+=2;goto B4cc511;
case 0x4cc514:c.instructions+=1;goto B4cc514;
case 0x4cc519:goto L4cc519;
case 0x4cc51a:c.instructions+=3;goto B4cc51a;
case 0x4cc51b:c.instructions+=2;goto B4cc51b;
case 0x4cc521:c.instructions+=1;goto B4cc521;
case 0x4cc530:goto L4cc530;
case 0x4cc532:c.instructions+=11;goto B4cc532;
case 0x4cc537:c.instructions+=10;goto B4cc537;
case 0x4cc53d:c.instructions+=9;goto B4cc53d;
case 0x4cc53e:c.instructions+=8;goto B4cc53e;
case 0x4cc545:c.instructions+=7;goto B4cc545;
case 0x4cc546:c.instructions+=6;goto B4cc546;
case 0x4cc547:c.instructions+=5;goto B4cc547;
case 0x4cc549:c.instructions+=4;goto B4cc549;
case 0x4cc54d:c.instructions+=3;goto B4cc54d;
case 0x4cc553:c.instructions+=2;goto B4cc553;
case 0x4cc55b:c.instructions+=1;goto B4cc55b;
case 0x4cc560:goto L4cc560;
case 0x4cc561:c.instructions+=1;goto B4cc561;
case 0x4cc566:goto L4cc566;
case 0x4cc569:c.instructions+=2;goto B4cc569;
case 0x4cc56b:c.instructions+=1;goto B4cc56b;
case 0x4cc56d:goto L4cc56d;
case 0x4cc572:goto L4cc572;
case 0x4cc573:c.instructions+=1;goto B4cc573;
case 0x4cc578:goto L4cc578;
case 0x4cc57b:goto L4cc57b;
case 0x4cc582:c.instructions+=3;goto B4cc582;
case 0x4cc589:c.instructions+=2;goto B4cc589;
case 0x4cc58a:c.instructions+=1;goto B4cc58a;
case 0x4cc58f:goto L4cc58f;
case 0x4cc592:c.instructions+=3;goto B4cc592;
case 0x4cc595:c.instructions+=2;goto B4cc595;
case 0x4cc59a:c.instructions+=1;goto B4cc59a;
case 0x4cc59f:goto L4cc59f;
case 0x4cc5a1:c.instructions+=2;goto B4cc5a1;
case 0x4cc5a9:c.instructions+=1;goto B4cc5a9;
case 0x4cc5ae:goto L4cc5ae;
case 0x4cc5b2:c.instructions+=4;goto B4cc5b2;
case 0x4cc5b3:c.instructions+=3;goto B4cc5b3;
case 0x4cc5ba:c.instructions+=2;goto B4cc5ba;
case 0x4cc5bd:c.instructions+=1;goto B4cc5bd;
case 0x4cc5c0:goto L4cc5c0;
case 0x4cc5c3:c.instructions+=7;goto B4cc5c3;
case 0x4cc5c4:c.instructions+=6;goto B4cc5c4;
case 0x4cc5c5:c.instructions+=5;goto B4cc5c5;
case 0x4cc5c6:c.instructions+=4;goto B4cc5c6;
case 0x4cc5c8:c.instructions+=3;goto B4cc5c8;
case 0x4cc5ca:c.instructions+=2;goto B4cc5ca;
case 0x4cc5ce:c.instructions+=1;goto B4cc5ce;
case 0x4cc5d3:goto L4cc5d3;
case 0x4cc5d5:c.instructions+=3;goto B4cc5d5;
case 0x4cc5d8:c.instructions+=2;goto B4cc5d8;
case 0x4cc5da:c.instructions+=1;goto B4cc5da;
case 0x4cc5dc:goto L4cc5dc;
case 0x4cc5df:c.instructions+=12;goto B4cc5df;
case 0x4cc5e5:c.instructions+=11;goto B4cc5e5;
case 0x4cc5e7:c.instructions+=10;goto B4cc5e7;
case 0x4cc5ea:c.instructions+=9;goto B4cc5ea;
case 0x4cc5ed:c.instructions+=8;goto B4cc5ed;
case 0x4cc5f0:c.instructions+=7;goto B4cc5f0;
case 0x4cc5f3:c.instructions+=6;goto B4cc5f3;
case 0x4cc5f6:c.instructions+=5;goto B4cc5f6;
case 0x4cc5f9:c.instructions+=4;goto B4cc5f9;
case 0x4cc5fd:c.instructions+=3;goto B4cc5fd;
case 0x4cc604:c.instructions+=2;goto B4cc604;
case 0x4cc60b:c.instructions+=1;goto B4cc60b;
case 0x4cc60d:goto L4cc60d;
case 0x4cc610:c.instructions+=3;goto B4cc610;
case 0x4cc615:c.instructions+=2;goto B4cc615;
case 0x4cc616:c.instructions+=1;goto B4cc616;
case 0x4cc61b:goto L4cc61b;
case 0x4cc61d:c.instructions+=2;goto B4cc61d;
case 0x4cc61f:c.instructions+=1;goto B4cc61f;
case 0x4cc624:goto L4cc624;
case 0x4cc627:c.instructions+=2;goto B4cc627;
case 0x4cc629:c.instructions+=1;goto B4cc629;
case 0x4cc62b:goto L4cc62b;
case 0x4cc631:c.instructions+=3;goto B4cc631;
case 0x4cc634:c.instructions+=2;goto B4cc634;
case 0x4cc637:c.instructions+=1;goto B4cc637;
case 0x4cc639:goto L4cc639;
case 0x4cc63b:goto L4cc63b;
case 0x4cc63e:c.instructions+=9;goto B4cc63e;
case 0x4cc641:c.instructions+=8;goto B4cc641;
case 0x4cc643:c.instructions+=7;goto B4cc643;
case 0x4cc646:c.instructions+=6;goto B4cc646;
case 0x4cc648:c.instructions+=5;goto B4cc648;
case 0x4cc64b:c.instructions+=4;goto B4cc64b;
case 0x4cc64c:c.instructions+=3;goto B4cc64c;
case 0x4cc64e:c.instructions+=2;goto B4cc64e;
case 0x4cc651:c.instructions+=1;goto B4cc651;
case 0x4cc656:goto L4cc656;
case 0x4cc658:c.instructions+=1;goto B4cc658;
case 0x4cc65d:goto L4cc65d;
case 0x4cc660:c.instructions+=2;goto B4cc660;
case 0x4cc662:c.instructions+=1;goto B4cc662;
case 0x4cc664:goto L4cc664;
case 0x4cc667:c.instructions+=6;goto B4cc667;
case 0x4cc66d:c.instructions+=5;goto B4cc66d;
case 0x4cc66f:c.instructions+=4;goto B4cc66f;
case 0x4cc672:c.instructions+=3;goto B4cc672;
case 0x4cc676:c.instructions+=2;goto B4cc676;
case 0x4cc678:c.instructions+=1;goto B4cc678;
case 0x4cc67a:goto L4cc67a;
case 0x4cc67c:goto L4cc67c;
case 0x4cc681:c.instructions+=1;goto B4cc681;
case 0x4cc686:goto L4cc686;
case 0x4cc687:c.instructions+=4;goto B4cc687;
case 0x4cc68b:c.instructions+=3;goto B4cc68b;
case 0x4cc68d:c.instructions+=2;goto B4cc68d;
case 0x4cc68e:c.instructions+=1;goto B4cc68e;
case 0x4cc693:goto L4cc693;
case 0x4cc696:c.instructions+=6;goto B4cc696;
case 0x4cc698:c.instructions+=5;goto B4cc698;
case 0x4cc69a:c.instructions+=4;goto B4cc69a;
case 0x4cc69e:c.instructions+=3;goto B4cc69e;
case 0x4cc69f:c.instructions+=2;goto B4cc69f;
case 0x4cc6a1:c.instructions+=1;goto B4cc6a1;
case 0x4cc6a6:goto L4cc6a6;
case 0x4cc6a7:c.instructions+=2;goto B4cc6a7;
case 0x4cc6a9:c.instructions+=1;goto B4cc6a9;
case 0x4cc6ae:goto L4cc6ae;
case 0x4cc6b4:c.instructions+=2;goto B4cc6b4;
case 0x4cc6b7:c.instructions+=1;goto B4cc6b7;
case 0x4cc6bd:goto L4cc6bd;
case 0x4cc6bf:c.instructions+=1;goto B4cc6bf;
case 0x4cc6c4:goto L4cc6c4;
case 0x4cc6c7:c.instructions+=2;goto B4cc6c7;
case 0x4cc6c9:c.instructions+=1;goto B4cc6c9;
case 0x4cc6cb:goto L4cc6cb;
case 0x4cc6ce:c.instructions+=6;goto B4cc6ce;
case 0x4cc6d4:c.instructions+=5;goto B4cc6d4;
case 0x4cc6d6:c.instructions+=4;goto B4cc6d6;
case 0x4cc6d9:c.instructions+=3;goto B4cc6d9;
case 0x4cc6dd:c.instructions+=2;goto B4cc6dd;
case 0x4cc6df:c.instructions+=1;goto B4cc6df;
case 0x4cc6e1:goto L4cc6e1;
case 0x4cc6e3:goto L4cc6e3;
case 0x4cc6e5:c.instructions+=1;goto B4cc6e5;
case 0x4cc6e7:goto L4cc6e7;
case 0x4cc6ec:c.instructions+=1;goto B4cc6ec;
case 0x4cc6f1:goto L4cc6f1;
case 0x4cc6f2:c.instructions+=4;goto B4cc6f2;
case 0x4cc6f6:c.instructions+=3;goto B4cc6f6;
case 0x4cc6f8:c.instructions+=2;goto B4cc6f8;
case 0x4cc6f9:c.instructions+=1;goto B4cc6f9;
case 0x4cc6fe:goto L4cc6fe;
case 0x4cc701:c.instructions+=1;goto B4cc701;
case 0x4cc703:goto L4cc703;
case 0x4cc709:c.instructions+=2;goto B4cc709;
case 0x4cc70a:c.instructions+=1;goto B4cc70a;
case 0x4cc70f:goto L4cc70f;
case 0x4cc712:c.instructions+=4;goto B4cc712;
case 0x4cc713:c.instructions+=3;goto B4cc713;
case 0x4cc714:c.instructions+=2;goto B4cc714;
case 0x4cc719:c.instructions+=1;goto B4cc719;
case 0x4cc71e:goto L4cc71e;
case 0x4cc721:c.instructions+=5;goto B4cc721;
case 0x4cc722:c.instructions+=4;goto B4cc722;
case 0x4cc726:c.instructions+=3;goto B4cc726;
case 0x4cc728:c.instructions+=2;goto B4cc728;
case 0x4cc729:c.instructions+=1;goto B4cc729;
case 0x4cc72e:goto L4cc72e;
case 0x4cc731:goto L4cc731;
case 0x4cc733:c.instructions+=5;goto B4cc733;
case 0x4cc735:c.instructions+=4;goto B4cc735;
case 0x4cc739:c.instructions+=3;goto B4cc739;
case 0x4cc73a:c.instructions+=2;goto B4cc73a;
case 0x4cc73c:c.instructions+=1;goto B4cc73c;
case 0x4cc741:goto L4cc741;
case 0x4cc742:c.instructions+=2;goto B4cc742;
case 0x4cc744:c.instructions+=1;goto B4cc744;
case 0x4cc749:goto L4cc749;
case 0x4cc74b:c.instructions+=1;goto B4cc74b;
case 0x4cc750:goto L4cc750;
case 0x4cc753:c.instructions+=2;goto B4cc753;
case 0x4cc755:c.instructions+=1;goto B4cc755;
case 0x4cc757:goto L4cc757;
case 0x4cc75a:c.instructions+=6;goto B4cc75a;
case 0x4cc760:c.instructions+=5;goto B4cc760;
case 0x4cc762:c.instructions+=4;goto B4cc762;
case 0x4cc765:c.instructions+=3;goto B4cc765;
case 0x4cc769:c.instructions+=2;goto B4cc769;
case 0x4cc76b:c.instructions+=1;goto B4cc76b;
case 0x4cc76d:goto L4cc76d;
case 0x4cc76f:goto L4cc76f;
case 0x4cc774:c.instructions+=1;goto B4cc774;
case 0x4cc779:goto L4cc779;
case 0x4cc77a:c.instructions+=4;goto B4cc77a;
case 0x4cc77e:c.instructions+=3;goto B4cc77e;
case 0x4cc780:c.instructions+=2;goto B4cc780;
case 0x4cc781:c.instructions+=1;goto B4cc781;
case 0x4cc786:goto L4cc786;
case 0x4cc789:c.instructions+=6;goto B4cc789;
case 0x4cc78b:c.instructions+=5;goto B4cc78b;
case 0x4cc78d:c.instructions+=4;goto B4cc78d;
case 0x4cc791:c.instructions+=3;goto B4cc791;
case 0x4cc792:c.instructions+=2;goto B4cc792;
case 0x4cc794:c.instructions+=1;goto B4cc794;
case 0x4cc799:goto L4cc799;
case 0x4cc79a:c.instructions+=2;goto B4cc79a;
case 0x4cc79c:c.instructions+=1;goto B4cc79c;
case 0x4cc7a1:goto L4cc7a1;
case 0x4cc7a3:c.instructions+=2;goto B4cc7a3;
case 0x4cc7a5:c.instructions+=1;goto B4cc7a5;
case 0x4cc7aa:goto L4cc7aa;
case 0x4cc7ae:c.instructions+=1;goto B4cc7ae;
case 0x4cc7b3:goto L4cc7b3;
case 0x4cc7b4:c.instructions+=4;goto B4cc7b4;
case 0x4cc7b5:c.instructions+=3;goto B4cc7b5;
case 0x4cc7b6:c.instructions+=2;goto B4cc7b6;
case 0x4cc7b9:c.instructions+=1;goto B4cc7b9;
case 0x4cc7c0:goto L4cc7c0;
case 0x4cc7c2:c.instructions+=18;goto B4cc7c2;
case 0x4cc7c7:c.instructions+=17;goto B4cc7c7;
case 0x4cc7cd:c.instructions+=16;goto B4cc7cd;
case 0x4cc7ce:c.instructions+=15;goto B4cc7ce;
case 0x4cc7d5:c.instructions+=14;goto B4cc7d5;
case 0x4cc7db:c.instructions+=13;goto B4cc7db;
case 0x4cc7dc:c.instructions+=12;goto B4cc7dc;
case 0x4cc7de:c.instructions+=11;goto B4cc7de;
case 0x4cc7e1:c.instructions+=10;goto B4cc7e1;
case 0x4cc7e3:c.instructions+=9;goto B4cc7e3;
case 0x4cc7e6:c.instructions+=8;goto B4cc7e6;
case 0x4cc7ea:c.instructions+=7;goto B4cc7ea;
case 0x4cc7ee:c.instructions+=6;goto B4cc7ee;
case 0x4cc7f5:c.instructions+=5;goto B4cc7f5;
case 0x4cc7f7:c.instructions+=4;goto B4cc7f7;
case 0x4cc802:c.instructions+=3;goto B4cc802;
case 0x4cc808:c.instructions+=2;goto B4cc808;
case 0x4cc80b:c.instructions+=1;goto B4cc80b;
case 0x4cc80d:goto L4cc80d;
case 0x4cc812:c.instructions+=4;goto B4cc812;
case 0x4cc816:c.instructions+=3;goto B4cc816;
case 0x4cc817:c.instructions+=2;goto B4cc817;
case 0x4cc818:c.instructions+=1;goto B4cc818;
case 0x4cc81d:goto L4cc81d;
case 0x4cc820:c.instructions+=5;goto B4cc820;
case 0x4cc822:c.instructions+=4;goto B4cc822;
case 0x4cc824:c.instructions+=3;goto B4cc824;
case 0x4cc828:c.instructions+=2;goto B4cc828;
case 0x4cc829:c.instructions+=1;goto B4cc829;
case 0x4cc82b:goto L4cc82b;
case 0x4cc82d:c.instructions+=2;goto B4cc82d;
case 0x4cc82f:c.instructions+=1;goto B4cc82f;
case 0x4cc834:goto L4cc834;
case 0x4cc836:c.instructions+=1;goto B4cc836;
case 0x4cc83b:goto L4cc83b;
case 0x4cc842:c.instructions+=5;goto B4cc842;
case 0x4cc844:c.instructions+=4;goto B4cc844;
case 0x4cc845:c.instructions+=3;goto B4cc845;
case 0x4cc84c:c.instructions+=2;goto B4cc84c;
case 0x4cc852:c.instructions+=1;goto B4cc852;
case 0x4cc860:goto L4cc860;
case 0x4cc862:c.instructions+=12;goto B4cc862;
case 0x4cc867:c.instructions+=11;goto B4cc867;
case 0x4cc86d:c.instructions+=10;goto B4cc86d;
case 0x4cc86e:c.instructions+=9;goto B4cc86e;
case 0x4cc875:c.instructions+=8;goto B4cc875;
case 0x4cc876:c.instructions+=7;goto B4cc876;
case 0x4cc877:c.instructions+=6;goto B4cc877;
case 0x4cc879:c.instructions+=5;goto B4cc879;
case 0x4cc87a:c.instructions+=4;goto B4cc87a;
case 0x4cc87e:c.instructions+=3;goto B4cc87e;
case 0x4cc884:c.instructions+=2;goto B4cc884;
case 0x4cc88c:c.instructions+=1;goto B4cc88c;
case 0x4cc891:goto L4cc891;
case 0x4cc892:c.instructions+=1;goto B4cc892;
case 0x4cc897:goto L4cc897;
case 0x4cc89a:c.instructions+=2;goto B4cc89a;
case 0x4cc89c:c.instructions+=1;goto B4cc89c;
case 0x4cc89e:goto L4cc89e;
case 0x4cc8a3:goto L4cc8a3;
case 0x4cc8a4:c.instructions+=1;goto B4cc8a4;
case 0x4cc8a9:goto L4cc8a9;
case 0x4cc8ac:goto L4cc8ac;
case 0x4cc8af:c.instructions+=2;goto B4cc8af;
case 0x4cc8b1:c.instructions+=1;goto B4cc8b1;
case 0x4cc8b6:goto L4cc8b6;
case 0x4cc8bc:c.instructions+=2;goto B4cc8bc;
case 0x4cc8c1:c.instructions+=1;goto B4cc8c1;
case 0x4cc8c6:goto L4cc8c6;
case 0x4cc8c8:c.instructions+=2;goto B4cc8c8;
case 0x4cc8cd:c.instructions+=1;goto B4cc8cd;
case 0x4cc8d2:goto L4cc8d2;
case 0x4cc8d4:c.instructions+=2;goto B4cc8d4;
case 0x4cc8dc:c.instructions+=1;goto B4cc8dc;
case 0x4cc8e1:goto L4cc8e1;
case 0x4cc8e5:c.instructions+=5;goto B4cc8e5;
case 0x4cc8e6:c.instructions+=4;goto B4cc8e6;
case 0x4cc8e7:c.instructions+=3;goto B4cc8e7;
case 0x4cc8ee:c.instructions+=2;goto B4cc8ee;
case 0x4cc8f1:c.instructions+=1;goto B4cc8f1;
case 0x4cc900:goto L4cc900;
case 0x4cc906:c.instructions+=13;goto B4cc906;
case 0x4cc908:c.instructions+=12;goto B4cc908;
case 0x4cc90d:c.instructions+=11;goto B4cc90d;
case 0x4cc90e:c.instructions+=10;goto B4cc90e;
case 0x4cc915:c.instructions+=9;goto B4cc915;
case 0x4cc918:c.instructions+=8;goto B4cc918;
case 0x4cc919:c.instructions+=7;goto B4cc919;
case 0x4cc91b:c.instructions+=6;goto B4cc91b;
case 0x4cc921:c.instructions+=5;goto B4cc921;
case 0x4cc924:c.instructions+=4;goto B4cc924;
case 0x4cc927:c.instructions+=3;goto B4cc927;
case 0x4cc92a:c.instructions+=2;goto B4cc92a;
case 0x4cc92c:c.instructions+=1;goto B4cc92c;
case 0x4cc92e:goto L4cc92e;
case 0x4cc933:c.instructions+=1;goto B4cc933;
case 0x4cc935:goto L4cc935;
case 0x4cc93a:goto L4cc93a;
case 0x4cc93f:c.instructions+=2;goto B4cc93f;
case 0x4cc940:c.instructions+=1;goto B4cc940;
case 0x4cc945:goto L4cc945;
case 0x4cc94b:c.instructions+=6;goto B4cc94b;
case 0x4cc94e:c.instructions+=5;goto B4cc94e;
case 0x4cc951:c.instructions+=4;goto B4cc951;
case 0x4cc954:c.instructions+=3;goto B4cc954;
case 0x4cc957:c.instructions+=2;goto B4cc957;
case 0x4cc959:c.instructions+=1;goto B4cc959;
case 0x4cc95b:goto L4cc95b;
case 0x4cc960:c.instructions+=1;goto B4cc960;
case 0x4cc962:goto L4cc962;
case 0x4cc967:goto L4cc967;
case 0x4cc96c:c.instructions+=2;goto B4cc96c;
case 0x4cc96d:c.instructions+=1;goto B4cc96d;
case 0x4cc972:goto L4cc972;
case 0x4cc975:c.instructions+=4;goto B4cc975;
case 0x4cc976:c.instructions+=3;goto B4cc976;
case 0x4cc977:c.instructions+=2;goto B4cc977;
case 0x4cc97a:c.instructions+=1;goto B4cc97a;
case 0x4cc97f:goto L4cc97f;
case 0x4cc985:c.instructions+=6;goto B4cc985;
case 0x4cc986:c.instructions+=5;goto B4cc986;
case 0x4cc988:c.instructions+=4;goto B4cc988;
case 0x4cc990:c.instructions+=3;goto B4cc990;
case 0x4cc995:c.instructions+=2;goto B4cc995;
case 0x4cc999:c.instructions+=1;goto B4cc999;
case 0x4cc99f:goto L4cc99f;
case 0x4cc9a0:goto L4cc9a0;
case 0x4cc9a1:c.instructions+=2;goto B4cc9a1;
case 0x4cc9a6:c.instructions+=1;goto B4cc9a6;
case 0x4cc9ab:goto L4cc9ab;
case 0x4cc9ad:c.instructions+=2;goto B4cc9ad;
case 0x4cc9b1:c.instructions+=1;goto B4cc9b1;
case 0x4cc9b3:goto L4cc9b3;
case 0x4cc9b6:c.instructions+=3;goto B4cc9b6;
case 0x4cc9b8:c.instructions+=2;goto B4cc9b8;
case 0x4cc9be:c.instructions+=1;goto B4cc9be;
case 0x4cc9c0:goto L4cc9c0;
case 0x4cc9c2:c.instructions+=4;goto B4cc9c2;
case 0x4cc9c6:c.instructions+=3;goto B4cc9c6;
case 0x4cc9c9:c.instructions+=2;goto B4cc9c9;
case 0x4cc9cb:c.instructions+=1;goto B4cc9cb;
case 0x4cc9cd:goto L4cc9cd;
case 0x4cc9d1:goto L4cc9d1;
case 0x4cc9d3:goto L4cc9d3;
case 0x4cc9d5:c.instructions+=1;goto B4cc9d5;
case 0x4cc9da:goto L4cc9da;
case 0x4cc9dd:c.instructions+=5;goto B4cc9dd;
case 0x4cc9e1:c.instructions+=4;goto B4cc9e1;
case 0x4cc9e3:c.instructions+=3;goto B4cc9e3;
case 0x4cc9e5:c.instructions+=2;goto B4cc9e5;
case 0x4cc9e9:c.instructions+=1;goto B4cc9e9;
case 0x4cc9eb:goto L4cc9eb;
case 0x4cc9ec:c.instructions+=2;goto B4cc9ec;
case 0x4cc9ee:c.instructions+=1;goto B4cc9ee;
case 0x4cc9f3:goto L4cc9f3;
case 0x4cc9f5:goto L4cc9f5;
case 0x4cc9f6:c.instructions+=3;goto B4cc9f6;
case 0x4cc9f9:c.instructions+=2;goto B4cc9f9;
case 0x4cca01:c.instructions+=1;goto B4cca01;
case 0x4cca06:goto L4cca06;
case 0x4cca07:c.instructions+=2;goto B4cca07;
case 0x4cca0a:c.instructions+=1;goto B4cca0a;
case 0x4cca0f:goto L4cca0f;
case 0x4cca15:c.instructions+=1;goto B4cca15;
case 0x4cca17:goto L4cca17;
case 0x4cca1b:goto L4cca1b;
case 0x4cca1f:c.instructions+=1;goto B4cca1f;
case 0x4cca24:goto L4cca24;
case 0x4cca25:c.instructions+=2;goto B4cca25;
case 0x4cca29:c.instructions+=1;goto B4cca29;
case 0x4cca2f:goto L4cca2f;
case 0x4cca32:c.instructions+=3;goto B4cca32;
case 0x4cca34:c.instructions+=2;goto B4cca34;
case 0x4cca37:c.instructions+=1;goto B4cca37;
case 0x4cca39:goto L4cca39;
case 0x4cca3c:c.instructions+=3;goto B4cca3c;
case 0x4cca41:c.instructions+=2;goto B4cca41;
case 0x4cca42:c.instructions+=1;goto B4cca42;
case 0x4cca47:goto L4cca47;
case 0x4cca49:c.instructions+=2;goto B4cca49;
case 0x4cca4b:c.instructions+=1;goto B4cca4b;
case 0x4cca50:goto L4cca50;
case 0x4cca54:c.instructions+=2;goto B4cca54;
case 0x4cca56:c.instructions+=1;goto B4cca56;
case 0x4cca58:goto L4cca58;
case 0x4cca59:c.instructions+=2;goto B4cca59;
case 0x4cca5b:c.instructions+=1;goto B4cca5b;
case 0x4cca60:goto L4cca60;
case 0x4cca61:c.instructions+=3;goto B4cca61;
case 0x4cca62:c.instructions+=2;goto B4cca62;
case 0x4cca64:c.instructions+=1;goto B4cca64;
case 0x4cca69:goto L4cca69;
case 0x4cca6c:c.instructions+=2;goto B4cca6c;
case 0x4cca6e:c.instructions+=1;goto B4cca6e;
case 0x4cca70:goto L4cca70;
case 0x4cca73:c.instructions+=3;goto B4cca73;
case 0x4cca78:c.instructions+=2;goto B4cca78;
case 0x4cca79:c.instructions+=1;goto B4cca79;
case 0x4cca7e:goto L4cca7e;
case 0x4cca80:c.instructions+=2;goto B4cca80;
case 0x4cca82:c.instructions+=1;goto B4cca82;
case 0x4cca87:goto L4cca87;
case 0x4cca89:c.instructions+=1;goto B4cca89;
case 0x4cca8e:goto L4cca8e;
case 0x4cca92:c.instructions+=5;goto B4cca92;
case 0x4cca94:c.instructions+=4;goto B4cca94;
case 0x4cca95:c.instructions+=3;goto B4cca95;
case 0x4cca96:c.instructions+=2;goto B4cca96;
case 0x4cca98:c.instructions+=1;goto B4cca98;
case 0x4cca9a:goto L4cca9a;
case 0x4cca9d:c.instructions+=4;goto B4cca9d;
case 0x4ccaa2:c.instructions+=3;goto B4ccaa2;
case 0x4ccaa7:c.instructions+=2;goto B4ccaa7;
case 0x4ccaa8:c.instructions+=1;goto B4ccaa8;
case 0x4ccaad:goto L4ccaad;
case 0x4ccab0:c.instructions+=5;goto B4ccab0;
case 0x4ccab2:c.instructions+=4;goto B4ccab2;
case 0x4ccab7:c.instructions+=3;goto B4ccab7;
case 0x4ccabc:c.instructions+=2;goto B4ccabc;
case 0x4ccabd:c.instructions+=1;goto B4ccabd;
case 0x4ccabf:goto L4ccabf;
case 0x4ccac2:c.instructions+=4;goto B4ccac2;
case 0x4ccac7:c.instructions+=3;goto B4ccac7;
case 0x4ccacc:c.instructions+=2;goto B4ccacc;
case 0x4ccacd:c.instructions+=1;goto B4ccacd;
case 0x4ccad2:goto L4ccad2;
case 0x4ccad5:c.instructions+=4;goto B4ccad5;
case 0x4ccad7:c.instructions+=3;goto B4ccad7;
case 0x4ccadc:c.instructions+=2;goto B4ccadc;
case 0x4ccae1:c.instructions+=1;goto B4ccae1;
case 0x4ccae2:goto L4ccae2;
case 0x4ccae7:goto L4ccae7;
case 0x4ccaea:c.instructions+=2;goto B4ccaea;
case 0x4ccaec:c.instructions+=1;goto B4ccaec;
case 0x4ccaf1:goto L4ccaf1;
case 0x4ccaf5:c.instructions+=4;goto B4ccaf5;
case 0x4ccaf6:c.instructions+=3;goto B4ccaf6;
case 0x4ccafd:c.instructions+=2;goto B4ccafd;
case 0x4ccb00:c.instructions+=1;goto B4ccb00;
case 0x4ccb10:goto L4ccb10;
case 0x4ccb11:c.instructions+=5;goto B4ccb11;
case 0x4ccb13:c.instructions+=4;goto B4ccb13;
case 0x4ccb16:c.instructions+=3;goto B4ccb16;
case 0x4ccb19:c.instructions+=2;goto B4ccb19;
case 0x4ccb1b:c.instructions+=1;goto B4ccb1b;
case 0x4ccb1d:goto L4ccb1d;
case 0x4ccb20:c.instructions+=2;goto B4ccb20;
case 0x4ccb22:c.instructions+=1;goto B4ccb22;
case 0x4ccb24:goto L4ccb24;
case 0x4ccb27:c.instructions+=2;goto B4ccb27;
case 0x4ccb29:c.instructions+=1;goto B4ccb29;
case 0x4ccb2b:goto L4ccb2b;
case 0x4ccb2c:c.instructions+=2;goto B4ccb2c;
case 0x4ccb31:c.instructions+=1;goto B4ccb31;
case 0x4ccb36:goto L4ccb36;
case 0x4ccb38:c.instructions+=2;goto B4ccb38;
case 0x4ccb39:c.instructions+=1;goto B4ccb39;
case 0x4ccb3e:goto L4ccb3e;
case 0x4ccb3f:c.instructions+=1;goto B4ccb3f;
case 0x4ccb40:goto L4ccb40;
case 0x4ccb41:c.instructions+=5;goto B4ccb41;
case 0x4ccb43:c.instructions+=4;goto B4ccb43;
case 0x4ccb46:c.instructions+=3;goto B4ccb46;
case 0x4ccb49:c.instructions+=2;goto B4ccb49;
case 0x4ccb4b:c.instructions+=1;goto B4ccb4b;
case 0x4ccb51:goto L4ccb51;
case 0x4ccb52:c.instructions+=3;goto B4ccb52;
case 0x4ccb55:c.instructions+=2;goto B4ccb55;
case 0x4ccb57:c.instructions+=1;goto B4ccb57;
case 0x4ccb5d:goto L4ccb5d;
case 0x4ccb60:c.instructions+=2;goto B4ccb60;
case 0x4ccb62:c.instructions+=1;goto B4ccb62;
case 0x4ccb68:goto L4ccb68;
case 0x4ccb6c:c.instructions+=2;goto B4ccb6c;
case 0x4ccb6f:c.instructions+=1;goto B4ccb6f;
case 0x4ccb71:goto L4ccb71;
case 0x4ccb74:c.instructions+=3;goto B4ccb74;
case 0x4ccb76:c.instructions+=2;goto B4ccb76;
case 0x4ccb79:c.instructions+=1;goto B4ccb79;
case 0x4ccb7b:goto L4ccb7b;
case 0x4ccb7e:c.instructions+=1;goto B4ccb7e;
case 0x4ccb80:goto L4ccb80;
case 0x4ccb82:goto L4ccb82;
case 0x4ccb85:c.instructions+=1;goto B4ccb85;
case 0x4ccb87:goto L4ccb87;
case 0x4ccb8a:c.instructions+=4;goto B4ccb8a;
case 0x4ccb8c:c.instructions+=3;goto B4ccb8c;
case 0x4ccb8e:c.instructions+=2;goto B4ccb8e;
case 0x4ccb8f:c.instructions+=1;goto B4ccb8f;
case 0x4ccb94:goto L4ccb94;
case 0x4ccb97:c.instructions+=2;goto B4ccb97;
case 0x4ccb99:c.instructions+=1;goto B4ccb99;
case 0x4ccb9e:goto L4ccb9e;
case 0x4ccba0:c.instructions+=1;goto B4ccba0;
case 0x4ccba5:goto L4ccba5;
case 0x4ccba7:c.instructions+=1;goto B4ccba7;
case 0x4ccbac:goto L4ccbac;
case 0x4ccbad:c.instructions+=2;goto B4ccbad;
case 0x4ccbae:c.instructions+=1;goto B4ccbae;
case 0x4ccbb1:goto L4ccbb1;
case 0x4ccbb4:c.instructions+=1;goto B4ccbb4;
case 0x4ccbb6:goto L4ccbb6;
case 0x4ccbb7:c.instructions+=3;goto B4ccbb7;
case 0x4ccbba:c.instructions+=2;goto B4ccbba;
case 0x4ccbbc:c.instructions+=1;goto B4ccbbc;
case 0x4ccbc1:goto L4ccbc1;
case 0x4ccbc3:c.instructions+=1;goto B4ccbc3;
case 0x4ccbc5:goto L4ccbc5;
case 0x4ccbc8:c.instructions+=2;goto B4ccbc8;
case 0x4ccbca:c.instructions+=1;goto B4ccbca;
case 0x4ccbcc:goto L4ccbcc;
case 0x4ccbcf:c.instructions+=1;goto B4ccbcf;
case 0x4ccbd1:goto L4ccbd1;
case 0x4ccbd3:goto L4ccbd3;
case 0x4ccbd6:c.instructions+=2;goto B4ccbd6;
case 0x4ccbd8:c.instructions+=1;goto B4ccbd8;
case 0x4ccbda:goto L4ccbda;
case 0x4ccbdd:c.instructions+=4;goto B4ccbdd;
case 0x4ccbdf:c.instructions+=3;goto B4ccbdf;
case 0x4ccbe1:c.instructions+=2;goto B4ccbe1;
case 0x4ccbe2:c.instructions+=1;goto B4ccbe2;
case 0x4ccbe7:goto L4ccbe7;
case 0x4ccbea:goto L4ccbea;
case 0x4ccbec:c.instructions+=1;goto B4ccbec;
case 0x4ccbf1:goto L4ccbf1;
case 0x4ccbf3:c.instructions+=1;goto B4ccbf3;
case 0x4ccbf8:goto L4ccbf8;
case 0x4ccbf9:goto L4ccbf9;
case 0x4ccbfb:c.instructions+=1;goto B4ccbfb;
case 0x4ccc00:goto L4ccc00;
case 0x4ccc01:goto L4ccc01;
case 0x4ccc02:c.instructions+=1;goto B4ccc02;
case 0x4ccc10:goto L4ccc10;
case 0x4ccc14:c.instructions+=5;goto B4ccc14;
case 0x4ccc19:c.instructions+=4;goto B4ccc19;
case 0x4ccc1a:c.instructions+=3;goto B4ccc1a;
case 0x4ccc1b:c.instructions+=2;goto B4ccc1b;
case 0x4ccc1d:c.instructions+=1;goto B4ccc1d;
case 0x4ccc23:goto L4ccc23;
case 0x4ccc29:goto L4ccc29;
case 0x4ccc2e:c.instructions+=1;goto B4ccc2e;
case 0x4ccc30:goto L4ccc30;
case 0x4ccc32:goto L4ccc32;
case 0x4ccc37:c.instructions+=1;goto B4ccc37;
case 0x4ccc39:goto L4ccc39;
case 0x4ccc3e:c.instructions+=1;goto B4ccc3e;
case 0x4ccc44:goto L4ccc44;
case 0x4ccc49:c.instructions+=1;goto B4ccc49;
case 0x4ccc4f:goto L4ccc4f;
case 0x4ccc56:c.instructions+=3;goto B4ccc56;
case 0x4ccc57:c.instructions+=2;goto B4ccc57;
case 0x4ccc58:c.instructions+=1;goto B4ccc58;
case 0x4ccc5b:goto L4ccc5b;
case 0x4ccc5d:c.instructions+=2;goto B4ccc5d;
case 0x4ccc64:c.instructions+=1;goto B4ccc64;
case 0x4ccc69:goto L4ccc69;
case 0x4ccc6c:c.instructions+=2;goto B4ccc6c;
case 0x4ccc6e:c.instructions+=1;goto B4ccc6e;
case 0x4ccc74:goto L4ccc74;
case 0x4ccc7e:c.instructions+=3;goto B4ccc7e;
case 0x4ccc7f:c.instructions+=2;goto B4ccc7f;
case 0x4ccc80:c.instructions+=1;goto B4ccc80;
case 0x4ccc83:goto L4ccc83;
case 0x4ccc85:c.instructions+=1;goto B4ccc85;
case 0x4ccc8a:goto L4ccc8a;
case 0x4ccc8d:c.instructions+=2;goto B4ccc8d;
case 0x4ccc8f:c.instructions+=1;goto B4ccc8f;
case 0x4ccc94:goto L4ccc94;
case 0x4ccc96:c.instructions+=1;goto B4ccc96;
case 0x4ccc9b:goto L4ccc9b;
case 0x4ccc9c:c.instructions+=2;goto B4ccc9c;
case 0x4ccc9d:c.instructions+=1;goto B4ccc9d;
case 0x4ccca0:goto L4ccca0;
case 0x4ccca5:c.instructions+=1;goto B4ccca5;
case 0x4ccca7:goto L4ccca7;
case 0x4cccac:c.instructions+=1;goto B4cccac;
case 0x4cccb2:goto L4cccb2;
case 0x4cccb7:c.instructions+=1;goto B4cccb7;
case 0x4cccbd:goto L4cccbd;
case 0x4cccbf:c.instructions+=2;goto B4cccbf;
case 0x4cccc1:c.instructions+=1;goto B4cccc1;
case 0x4cccc6:goto L4cccc6;
case 0x4cccc7:c.instructions+=2;goto B4cccc7;
case 0x4cccc8:c.instructions+=1;goto B4cccc8;
case 0x4ccccb:goto L4ccccb;
case 0x4cccce:c.instructions+=2;goto B4cccce;
case 0x4cccd4:c.instructions+=1;goto B4cccd4;
case 0x4cccda:goto L4cccda;
case 0x4ccce4:c.instructions+=3;goto B4ccce4;
case 0x4ccce5:c.instructions+=2;goto B4ccce5;
case 0x4ccce6:c.instructions+=1;goto B4ccce6;
case 0x4ccce9:goto L4ccce9;
case 0x4cccec:c.instructions+=2;goto B4cccec;
case 0x4cccf2:c.instructions+=1;goto B4cccf2;
case 0x4cccf8:goto L4cccf8;
case 0x4cccfb:c.instructions+=6;goto B4cccfb;
case 0x4cccfe:c.instructions+=5;goto B4cccfe;
case 0x4cccff:c.instructions+=4;goto B4cccff;
case 0x4ccd01:c.instructions+=3;goto B4ccd01;
case 0x4ccd02:c.instructions+=2;goto B4ccd02;
case 0x4ccd0c:c.instructions+=1;goto B4ccd0c;
case 0x4ccd11:goto L4ccd11;
case 0x4ccd14:c.instructions+=3;goto B4ccd14;
case 0x4ccd15:c.instructions+=2;goto B4ccd15;
case 0x4ccd16:c.instructions+=1;goto B4ccd16;
case 0x4ccd19:goto L4ccd19;
case 0x4ccd1e:c.instructions+=1;goto B4ccd1e;
case 0x4ccd24:goto L4ccd24;
case 0x4ccd2a:goto L4ccd2a;
case 0x4ccd2f:c.instructions+=1;goto B4ccd2f;
case 0x4ccd31:goto L4ccd31;
case 0x4ccd36:c.instructions+=1;goto B4ccd36;
case 0x4ccd38:goto L4ccd38;
case 0x4ccd3d:c.instructions+=1;goto B4ccd3d;
case 0x4ccd43:goto L4ccd43;
case 0x4ccd49:c.instructions+=2;goto B4ccd49;
case 0x4ccd4b:c.instructions+=1;goto B4ccd4b;
case 0x4ccd51:goto L4ccd51;
case 0x4ccd54:c.instructions+=4;goto B4ccd54;
case 0x4ccd55:c.instructions+=3;goto B4ccd55;
case 0x4ccd58:c.instructions+=2;goto B4ccd58;
case 0x4ccd5b:c.instructions+=1;goto B4ccd5b;
case 0x4ccd60:goto L4ccd60;
case 0x4ccd63:c.instructions+=2;goto B4ccd63;
case 0x4ccd64:c.instructions+=1;goto B4ccd64;
case 0x4ccd66:goto L4ccd66;
case 0x4ccd69:c.instructions+=1;goto B4ccd69;
case 0x4ccd6f:goto L4ccd6f;
case 0x4ccd71:c.instructions+=1;goto B4ccd71;
case 0x4ccd76:goto L4ccd76;
case 0x4ccd78:c.instructions+=1;goto B4ccd78;
case 0x4ccd7d:goto L4ccd7d;
case 0x4ccd7e:c.instructions+=2;goto B4ccd7e;
case 0x4ccd7f:c.instructions+=1;goto B4ccd7f;
case 0x4ccd82:goto L4ccd82;
case 0x4ccd85:c.instructions+=2;goto B4ccd85;
case 0x4ccd8b:c.instructions+=1;goto B4ccd8b;
case 0x4ccd91:goto L4ccd91;
case 0x4ccd93:c.instructions+=2;goto B4ccd93;
case 0x4ccd95:c.instructions+=1;goto B4ccd95;
case 0x4ccd9a:goto L4ccd9a;
case 0x4ccd9c:c.instructions+=1;goto B4ccd9c;
case 0x4ccda1:goto L4ccda1;
case 0x4ccda2:c.instructions+=2;goto B4ccda2;
case 0x4ccda3:c.instructions+=1;goto B4ccda3;
case 0x4ccda6:goto L4ccda6;
case 0x4ccda8:c.instructions+=2;goto B4ccda8;
case 0x4ccdaa:c.instructions+=1;goto B4ccdaa;
case 0x4ccdaf:goto L4ccdaf;
case 0x4ccdb0:c.instructions+=2;goto B4ccdb0;
case 0x4ccdb1:c.instructions+=1;goto B4ccdb1;
case 0x4ccdb4:goto L4ccdb4;
case 0x4ccdb9:c.instructions+=1;goto B4ccdb9;
case 0x4ccdbf:goto L4ccdbf;
case 0x4ccdc4:c.instructions+=1;goto B4ccdc4;
case 0x4ccdc6:goto L4ccdc6;
case 0x4ccdcb:c.instructions+=1;goto B4ccdcb;
case 0x4ccdd1:goto L4ccdd1;
case 0x4ccdd4:c.instructions+=2;goto B4ccdd4;
case 0x4ccdda:c.instructions+=1;goto B4ccdda;
case 0x4ccde0:goto L4ccde0;
case 0x4ccde6:c.instructions+=3;goto B4ccde6;
case 0x4ccde8:c.instructions+=2;goto B4ccde8;
case 0x4ccdee:c.instructions+=1;goto B4ccdee;
case 0x4ccdf0:goto L4ccdf0;
case 0x4ccdf3:c.instructions+=1;goto B4ccdf3;
case 0x4ccdf5:goto L4ccdf5;
case 0x4ccdf7:goto L4ccdf7;
case 0x4ccdfa:c.instructions+=1;goto B4ccdfa;
case 0x4ccdfc:goto L4ccdfc;
case 0x4cce01:goto L4cce01;
case 0x4cce04:c.instructions+=4;goto B4cce04;
case 0x4cce06:c.instructions+=3;goto B4cce06;
case 0x4cce08:c.instructions+=2;goto B4cce08;
case 0x4cce09:c.instructions+=1;goto B4cce09;
case 0x4cce0e:goto L4cce0e;
case 0x4cce11:goto L4cce11;
case 0x4cce13:c.instructions+=1;goto B4cce13;
case 0x4cce18:goto L4cce18;
case 0x4cce19:c.instructions+=2;goto B4cce19;
case 0x4cce1a:c.instructions+=1;goto B4cce1a;
case 0x4cce1d:goto L4cce1d;
case 0x4cce23:c.instructions+=2;goto B4cce23;
case 0x4cce24:c.instructions+=1;goto B4cce24;
case 0x4cce26:goto L4cce26;
case 0x4cce27:c.instructions+=1;goto B4cce27;
case 0x4cce29:goto L4cce29;
case 0x4cce2a:c.instructions+=1;goto B4cce2a;
case 0x4cce30:goto L4cce30;
case 0x4cce32:c.instructions+=2;goto B4cce32;
case 0x4cce3c:c.instructions+=1;goto B4cce3c;
case 0x4cce41:goto L4cce41;
case 0x4cce42:c.instructions+=2;goto B4cce42;
case 0x4cce43:c.instructions+=1;goto B4cce43;
case 0x4cce46:goto L4cce46;
case 0x4cce48:c.instructions+=2;goto B4cce48;
case 0x4cce52:c.instructions+=1;goto B4cce52;
case 0x4cce57:goto L4cce57;
case 0x4cce58:c.instructions+=2;goto B4cce58;
case 0x4cce59:c.instructions+=1;goto B4cce59;
case 0x4cce5c:goto L4cce5c;
case 0x4cce5f:c.instructions+=2;goto B4cce5f;
case 0x4cce65:c.instructions+=1;goto B4cce65;
case 0x4cce67:goto L4cce67;
case 0x4cce6a:c.instructions+=3;goto B4cce6a;
case 0x4cce6d:c.instructions+=2;goto B4cce6d;
case 0x4cce6f:c.instructions+=1;goto B4cce6f;
case 0x4cce71:goto L4cce71;
case 0x4cce74:c.instructions+=2;goto B4cce74;
case 0x4cce76:c.instructions+=1;goto B4cce76;
case 0x4cce78:goto L4cce78;
case 0x4cce7b:c.instructions+=2;goto B4cce7b;
case 0x4cce7d:c.instructions+=1;goto B4cce7d;
case 0x4cce7f:goto L4cce7f;
case 0x4cce82:c.instructions+=11;goto B4cce82;
case 0x4cce87:c.instructions+=10;goto B4cce87;
case 0x4cce89:c.instructions+=9;goto B4cce89;
case 0x4cce8e:c.instructions+=8;goto B4cce8e;
case 0x4cce93:c.instructions+=7;goto B4cce93;
case 0x4cce98:c.instructions+=6;goto B4cce98;
case 0x4cce9d:c.instructions+=5;goto B4cce9d;
case 0x4ccea2:c.instructions+=4;goto B4ccea2;
case 0x4ccea7:c.instructions+=3;goto B4ccea7;
case 0x4ccea8:c.instructions+=2;goto B4ccea8;
case 0x4cceaf:c.instructions+=1;goto B4cceaf;
case 0x4cceb4:goto L4cceb4;
case 0x4cceb7:c.instructions+=5;goto B4cceb7;
case 0x4cceba:c.instructions+=4;goto B4cceba;
case 0x4ccebb:c.instructions+=3;goto B4ccebb;
case 0x4ccebd:c.instructions+=2;goto B4ccebd;
case 0x4ccebe:c.instructions+=1;goto B4ccebe;
case 0x4ccec3:goto L4ccec3;
case 0x4ccec6:goto L4ccec6;
case 0x4ccec7:c.instructions+=2;goto B4ccec7;
case 0x4ccec8:c.instructions+=1;goto B4ccec8;
case 0x4cced0:goto L4cced0;
case 0x4cced2:c.instructions+=7;goto B4cced2;
case 0x4cced7:c.instructions+=6;goto B4cced7;
case 0x4ccedd:c.instructions+=5;goto B4ccedd;
case 0x4ccede:c.instructions+=4;goto B4ccede;
case 0x4ccee5:c.instructions+=3;goto B4ccee5;
case 0x4ccee6:c.instructions+=2;goto B4ccee6;
case 0x4ccee8:c.instructions+=1;goto B4ccee8;
case 0x4cceed:goto L4cceed;
case 0x4ccef0:c.instructions+=4;goto B4ccef0;
case 0x4ccef4:c.instructions+=3;goto B4ccef4;
case 0x4ccef6:c.instructions+=2;goto B4ccef6;
case 0x4ccefe:c.instructions+=1;goto B4ccefe;
case 0x4ccf00:goto L4ccf00;
case 0x4ccf04:c.instructions+=3;goto B4ccf04;
case 0x4ccf05:c.instructions+=2;goto B4ccf05;
case 0x4ccf07:c.instructions+=1;goto B4ccf07;
case 0x4ccf0c:goto L4ccf0c;
case 0x4ccf10:c.instructions+=3;goto B4ccf10;
case 0x4ccf17:c.instructions+=2;goto B4ccf17;
case 0x4ccf1a:c.instructions+=1;goto B4ccf1a;
case 0x4ccf1b:goto L4ccf1b;
case 0x4ccf1f:c.instructions+=4;goto B4ccf1f;
case 0x4ccf21:c.instructions+=3;goto B4ccf21;
case 0x4ccf28:c.instructions+=2;goto B4ccf28;
case 0x4ccf2b:c.instructions+=1;goto B4ccf2b;
case 0x4ccf30:goto L4ccf30;
case 0x4ccf31:c.instructions+=5;goto B4ccf31;
case 0x4ccf32:c.instructions+=4;goto B4ccf32;
case 0x4ccf36:c.instructions+=3;goto B4ccf36;
case 0x4ccf37:c.instructions+=2;goto B4ccf37;
case 0x4ccf39:c.instructions+=1;goto B4ccf39;
case 0x4ccf3e:goto L4ccf3e;
case 0x4ccf40:c.instructions+=5;goto B4ccf40;
case 0x4ccf43:c.instructions+=4;goto B4ccf43;
case 0x4ccf47:c.instructions+=3;goto B4ccf47;
case 0x4ccf48:c.instructions+=2;goto B4ccf48;
case 0x4ccf49:c.instructions+=1;goto B4ccf49;
case 0x4ccf4e:goto L4ccf4e;
case 0x4ccf51:c.instructions+=3;goto B4ccf51;
case 0x4ccf52:c.instructions+=2;goto B4ccf52;
case 0x4ccf53:c.instructions+=1;goto B4ccf53;
case 0x4ccf60:goto L4ccf60;
case 0x4ccf66:c.instructions+=10;goto B4ccf66;
case 0x4ccf68:c.instructions+=9;goto B4ccf68;
case 0x4ccf6d:c.instructions+=8;goto B4ccf6d;
case 0x4ccf6e:c.instructions+=7;goto B4ccf6e;
case 0x4ccf73:c.instructions+=6;goto B4ccf73;
case 0x4ccf7a:c.instructions+=5;goto B4ccf7a;
case 0x4ccf7d:c.instructions+=4;goto B4ccf7d;
case 0x4ccf80:c.instructions+=3;goto B4ccf80;
case 0x4ccf81:c.instructions+=2;goto B4ccf81;
case 0x4ccf83:c.instructions+=1;goto B4ccf83;
case 0x4ccf89:goto L4ccf89;
case 0x4ccf8e:c.instructions+=1;goto B4ccf8e;
case 0x4ccf94:goto L4ccf94;
case 0x4ccf97:c.instructions+=1;goto B4ccf97;
case 0x4ccf99:goto L4ccf99;
case 0x4ccf9e:c.instructions+=1;goto B4ccf9e;
case 0x4ccfa3:goto L4ccfa3;
case 0x4ccfa6:c.instructions+=2;goto B4ccfa6;
case 0x4ccfa8:c.instructions+=1;goto B4ccfa8;
case 0x4ccfaa:goto L4ccfaa;
case 0x4ccfaf:c.instructions+=1;goto B4ccfaf;
case 0x4ccfb4:goto L4ccfb4;
case 0x4ccfb8:goto L4ccfb8;
case 0x4ccfb9:c.instructions+=3;goto B4ccfb9;
case 0x4ccfba:c.instructions+=2;goto B4ccfba;
case 0x4ccfbf:c.instructions+=1;goto B4ccfbf;
case 0x4ccfc4:goto L4ccfc4;
case 0x4ccfc7:c.instructions+=2;goto B4ccfc7;
case 0x4ccfc8:c.instructions+=1;goto B4ccfc8;
case 0x4ccfcd:goto L4ccfcd;
case 0x4ccfd3:c.instructions+=4;goto B4ccfd3;
case 0x4ccfd6:c.instructions+=3;goto B4ccfd6;
case 0x4ccfd9:c.instructions+=2;goto B4ccfd9;
case 0x4ccfdc:c.instructions+=1;goto B4ccfdc;
case 0x4ccfde:goto L4ccfde;
case 0x4ccfe0:c.instructions+=1;goto B4ccfe0;
case 0x4ccfe5:goto L4ccfe5;
case 0x4ccfe8:c.instructions+=4;goto B4ccfe8;
case 0x4ccfec:c.instructions+=3;goto B4ccfec;
case 0x4ccfee:c.instructions+=2;goto B4ccfee;
case 0x4ccff6:c.instructions+=1;goto B4ccff6;
case 0x4ccff8:goto L4ccff8;
case 0x4ccffa:c.instructions+=1;goto B4ccffa;
default:missing_instruction(c.pc);}
B4cc001:L4cc001:{c.instructions+=1;NFSU2_TR(0x4cc001);
{goto L4cc005;}
}
B4cc003:L4cc003:{c.instructions+=1;NFSU2_TR(0x4cc003);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cc005:L4cc005:{c.instructions+=10;NFSU2_TR(0x4cc005);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cc008:{NFSU2_TR(0x4cc008);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc00b:{NFSU2_TR(0x4cc00b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4cc00d:{NFSU2_TR(0x4cc00d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc010:{NFSU2_TR(0x4cc010);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4cc012:{NFSU2_TR(0x4cc012);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cc018:{NFSU2_TR(0x4cc018);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc019:{NFSU2_TR(0x4cc019);
__builtin_memmove((R+4),(R+12),4);
}
B4cc01b:{NFSU2_TR(0x4cc01b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc01e:{NFSU2_TR(0x4cc01e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc023ull));
TAIL_STATIC(0x52e770u,52e);
}
B4cc023:L4cc023:{c.instructions+=4;NFSU2_TR(0x4cc023);
w4(R+28,u32(0x1ull));
}
B4cc028:{NFSU2_TR(0x4cc028);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc029:{NFSU2_TR(0x4cc029);
w4(R+4,u32(0x85ad40ull));
}
B4cc02e:{NFSU2_TR(0x4cc02e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc033ull));
TAIL_STATIC(0x500c00u,500);
}
B4cc033:L4cc033:{c.instructions+=2;NFSU2_TR(0x4cc033);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cc035:{NFSU2_TR(0x4cc035);
if(r1(R+518)){{goto L4cc0a7;}}
}
B4cc037:L4cc037:{c.instructions+=2;NFSU2_TR(0x4cc037);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc039:{NFSU2_TR(0x4cc039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc03eull));
TAIL_STATIC(0x575620u,575);
}
B4cc03e:L4cc03e:{c.instructions+=3;NFSU2_TR(0x4cc03e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc041:{NFSU2_TR(0x4cc041);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cc043:{NFSU2_TR(0x4cc043);
if(r1(R+518)){{goto L4cc05b;}}
}
B4cc045:L4cc045:{c.instructions+=7;NFSU2_TR(0x4cc045);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc048:{NFSU2_TR(0x4cc048);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4cc04e:{NFSU2_TR(0x4cc04e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4cc050:{NFSU2_TR(0x4cc050);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc053:{NFSU2_TR(0x4cc053);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc057:{NFSU2_TR(0x4cc057);
__builtin_memmove((R+24),(R+0),4);
}
B4cc059:{NFSU2_TR(0x4cc059);
{goto L4cc05d;}
}
B4cc05b:L4cc05b:{c.instructions+=1;NFSU2_TR(0x4cc05b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4cc05d:L4cc05d:{c.instructions+=3;NFSU2_TR(0x4cc05d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc05e:{NFSU2_TR(0x4cc05e);
u8 U[4];
w4(U+0,u32(0xa96b270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc063:{NFSU2_TR(0x4cc063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc068ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4cc068:L4cc068:{c.instructions+=6;NFSU2_TR(0x4cc068);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc06b:{NFSU2_TR(0x4cc06b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc06c:{NFSU2_TR(0x4cc06c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4cc070:{NFSU2_TR(0x4cc070);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc072:{NFSU2_TR(0x4cc072);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc073:{NFSU2_TR(0x4cc073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc078ull));
TAIL_STATIC(0x50c960u,50c);
}
B4cc078:L4cc078:{c.instructions+=7;NFSU2_TR(0x4cc078);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cc07b:{NFSU2_TR(0x4cc07b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc07d:{NFSU2_TR(0x4cc07d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc07f:{NFSU2_TR(0x4cc07f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4cc083:{NFSU2_TR(0x4cc083);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc084:{NFSU2_TR(0x4cc084);
__builtin_memmove((R+4),(R+24),4);
}
B4cc086:{NFSU2_TR(0x4cc086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc08bull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4cc08b:L4cc08b:{c.instructions+=3;NFSU2_TR(0x4cc08b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc08c:{NFSU2_TR(0x4cc08c);
__builtin_memmove((R+4),(R+12),4);
}
B4cc08e:{NFSU2_TR(0x4cc08e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc093ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4cc093:L4cc093:{c.instructions+=4;NFSU2_TR(0x4cc093);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4cc094:{NFSU2_TR(0x4cc094);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc095:{NFSU2_TR(0x4cc095);
w4(R+4,u32(0x85ad40ull));
}
B4cc09a:{NFSU2_TR(0x4cc09a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc09full));
TAIL_STATIC(0x500c00u,500);
}
B4cc09f:L4cc09f:{c.instructions+=2;NFSU2_TR(0x4cc09f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cc0a1:{NFSU2_TR(0x4cc0a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cc037u);}goto L4cc037;}}
}
B4cc0a3:L4cc0a3:{c.instructions+=1;NFSU2_TR(0x4cc0a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4cc0a7:L4cc0a7:{c.instructions+=3;NFSU2_TR(0x4cc0a7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc0a9:{NFSU2_TR(0x4cc0a9);
__builtin_memmove((R+4),(R+12),4);
}
B4cc0ab:{NFSU2_TR(0x4cc0ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc0b0ull));
TAIL_STATIC(0x538500u,538);
}
B4cc0b0:L4cc0b0:{c.instructions+=2;NFSU2_TR(0x4cc0b0);
__builtin_memmove((R+4),(R+24),4);
}
B4cc0b2:{NFSU2_TR(0x4cc0b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc0b7ull));
TAIL_STATIC(0x4b1590u,4b1);
}
B4cc0b7:L4cc0b7:{c.instructions+=5;NFSU2_TR(0x4cc0b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cc0b8:{NFSU2_TR(0x4cc0b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cc0b9:{NFSU2_TR(0x4cc0b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cc0ba:{NFSU2_TR(0x4cc0ba);
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
B4cc0bd:{NFSU2_TR(0x4cc0bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cc0c0:L4cc0c0:{c.instructions+=12;NFSU2_TR(0x4cc0c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc0c2:{NFSU2_TR(0x4cc0c2);
u8 U[4];
w4(U+0,u32(0x7763e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc0c7:{NFSU2_TR(0x4cc0c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc0cd:{NFSU2_TR(0x4cc0cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc0ce:{NFSU2_TR(0x4cc0ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc0d5:{NFSU2_TR(0x4cc0d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc0d6:{NFSU2_TR(0x4cc0d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc0d7:{NFSU2_TR(0x4cc0d7);
__builtin_memmove((R+24),(R+4),4);
}
B4cc0d9:{NFSU2_TR(0x4cc0d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc0dd:{NFSU2_TR(0x4cc0dd);
u8 U[4];
w4(U+0,u32(0x795d10ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4cc0e3:{NFSU2_TR(0x4cc0e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cc0eb:{NFSU2_TR(0x4cc0eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc0f0ull));
TAIL_STATIC(0x4b1520u,4b1);
}
B4cc0f0:L4cc0f0:{c.instructions+=3;NFSU2_TR(0x4cc0f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc0f6:{NFSU2_TR(0x4cc0f6);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc0fb:{NFSU2_TR(0x4cc0fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc100ull));
TAIL_STATIC(0x4985a0u,498);
}
B4cc100:L4cc100:{c.instructions+=3;NFSU2_TR(0x4cc100);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc106:{NFSU2_TR(0x4cc106);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc10b:{NFSU2_TR(0x4cc10b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc110ull));
TAIL_STATIC(0x52ea90u,52e);
}
B4cc110:L4cc110:{c.instructions+=3;NFSU2_TR(0x4cc110);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc116:{NFSU2_TR(0x4cc116);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc11b:{NFSU2_TR(0x4cc11b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc120ull));
TAIL_STATIC(0x4cbba0u,4cb);
}
B4cc120:L4cc120:{c.instructions+=3;NFSU2_TR(0x4cc120);
__builtin_memmove((R+4),(R+24),4);
}
B4cc122:{NFSU2_TR(0x4cc122);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cc12a:{NFSU2_TR(0x4cc12a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc12full));
TAIL_STATIC(0x510d40u,510);
}
B4cc12f:L4cc12f:{c.instructions+=5;NFSU2_TR(0x4cc12f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cc133:{NFSU2_TR(0x4cc133);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cc134:{NFSU2_TR(0x4cc134);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc13b:{NFSU2_TR(0x4cc13b);
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
B4cc13e:{NFSU2_TR(0x4cc13e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cc140:L4cc140:{c.instructions+=9;NFSU2_TR(0x4cc140);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cc144:{NFSU2_TR(0x4cc144);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cc146:{NFSU2_TR(0x4cc146);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc147:{NFSU2_TR(0x4cc147);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc148:{NFSU2_TR(0x4cc148);
__builtin_memmove((R+24),(R+4),4);
}
B4cc14a:{NFSU2_TR(0x4cc14a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4cc150:{NFSU2_TR(0x4cc150);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc151:{NFSU2_TR(0x4cc151);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cc157:{NFSU2_TR(0x4cc157);
if(r1(R+518)){{goto L4cc183;}}
}
B4cc159:L4cc159:{c.instructions+=3;NFSU2_TR(0x4cc159);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc15c:{NFSU2_TR(0x4cc15c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cc15e:{NFSU2_TR(0x4cc15e);
if(r1(R+518)){{goto L4cc165;}}
}
B4cc160:L4cc160:{c.instructions+=2;NFSU2_TR(0x4cc160);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4cc163:{NFSU2_TR(0x4cc163);
{goto L4cc167;}
}
B4cc165:L4cc165:{c.instructions+=1;NFSU2_TR(0x4cc165);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cc167:L4cc167:{c.instructions+=2;NFSU2_TR(0x4cc167);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
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
B4cc16a:{NFSU2_TR(0x4cc16a);
if(r1(R+518)){{goto L4cc22f;}}
}
B4cc170:L4cc170:{c.instructions+=3;NFSU2_TR(0x4cc170);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc172:{NFSU2_TR(0x4cc172);
__builtin_memmove((R+4),(R+28),4);
}
B4cc174:{NFSU2_TR(0x4cc174);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc179ull));
TAIL_STATIC(0x5437c0u,543);
}
B4cc179:L4cc179:{c.instructions+=5;NFSU2_TR(0x4cc179);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc17c:{NFSU2_TR(0x4cc17c);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc17e:{NFSU2_TR(0x4cc17e);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc180:{NFSU2_TR(0x4cc180);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc181:{NFSU2_TR(0x4cc181);
{goto L4cc1ab;}
}
B4cc183:L4cc183:{c.instructions+=3;NFSU2_TR(0x4cc183);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc186:{NFSU2_TR(0x4cc186);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cc188:{NFSU2_TR(0x4cc188);
if(r1(R+518)){{goto L4cc18f;}}
}
B4cc18a:L4cc18a:{c.instructions+=2;NFSU2_TR(0x4cc18a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4cc18d:{NFSU2_TR(0x4cc18d);
{goto L4cc191;}
}
B4cc18f:L4cc18f:{c.instructions+=1;NFSU2_TR(0x4cc18f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cc191:L4cc191:{c.instructions+=2;NFSU2_TR(0x4cc191);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
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
B4cc194:{NFSU2_TR(0x4cc194);
if(r1(R+518)){{goto L4cc22f;}}
}
B4cc19a:L4cc19a:{c.instructions+=3;NFSU2_TR(0x4cc19a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc19c:{NFSU2_TR(0x4cc19c);
__builtin_memmove((R+4),(R+28),4);
}
B4cc19e:{NFSU2_TR(0x4cc19e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc1a3ull));
TAIL_STATIC(0x5437c0u,543);
}
B4cc1a3:L4cc1a3:{c.instructions+=4;NFSU2_TR(0x4cc1a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cc1a6:{NFSU2_TR(0x4cc1a6);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc1a8:{NFSU2_TR(0x4cc1a8);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc1aa:{NFSU2_TR(0x4cc1aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc1ab:L4cc1ab:{c.instructions+=1;NFSU2_TR(0x4cc1ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc1b0ull));
TAIL_STATIC(0x50d150u,50d);
}
B4cc1b0:L4cc1b0:{c.instructions+=4;NFSU2_TR(0x4cc1b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc1b6:{NFSU2_TR(0x4cc1b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cc1b9:{NFSU2_TR(0x4cc1b9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cc1bb:{NFSU2_TR(0x4cc1bb);
if(r1(R+518)){{goto L4cc1df;}}
}
B4cc1bd:L4cc1bd:{c.instructions+=2;NFSU2_TR(0x4cc1bd);
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
B4cc1bf:{NFSU2_TR(0x4cc1bf);
if(r1(R+518)){{goto L4cc1d3;}}
}
B4cc1c1:L4cc1c1:{c.instructions+=8;NFSU2_TR(0x4cc1c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc1c4:{NFSU2_TR(0x4cc1c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4cc1c6:{NFSU2_TR(0x4cc1c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc1c9:{NFSU2_TR(0x4cc1c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc1ca:{NFSU2_TR(0x4cc1ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc1cd:{NFSU2_TR(0x4cc1cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc1ce:{NFSU2_TR(0x4cc1ce);
__builtin_memmove((R+4),(R+0),4);
}
B4cc1d0:{NFSU2_TR(0x4cc1d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc1d3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cc1d3:L4cc1d3:{c.instructions+=2;NFSU2_TR(0x4cc1d3);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B4cc1d9:{NFSU2_TR(0x4cc1d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc1df:L4cc1df:{c.instructions+=2;NFSU2_TR(0x4cc1df);
__builtin_memmove((R+4),(R+28),4);
}
B4cc1e1:{NFSU2_TR(0x4cc1e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc1e6ull));
TAIL_STATIC(0x538760u,538);
}
B4cc1e6:L4cc1e6:{c.instructions+=2;NFSU2_TR(0x4cc1e6);
__builtin_memmove((R+4),(R+24),4);
}
B4cc1e8:{NFSU2_TR(0x4cc1e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc1edull));
TAIL_STATIC(0x4b1590u,4b1);
}
B4cc1ed:L4cc1ed:{c.instructions+=5;NFSU2_TR(0x4cc1ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc1f3:{NFSU2_TR(0x4cc1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cc1f6:{NFSU2_TR(0x4cc1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc1f9:{NFSU2_TR(0x4cc1f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cc1fb:{NFSU2_TR(0x4cc1fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cc216;}}
}
B4cc1fd:L4cc1fd:{c.instructions+=6;NFSU2_TR(0x4cc1fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cc200:{NFSU2_TR(0x4cc200);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc203:{NFSU2_TR(0x4cc203);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4cc209:{NFSU2_TR(0x4cc209);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc20a:{NFSU2_TR(0x4cc20a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc20b:{NFSU2_TR(0x4cc20b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc210ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4cc210:L4cc210:{c.instructions+=4;NFSU2_TR(0x4cc210);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cc211:{NFSU2_TR(0x4cc211);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cc212:{NFSU2_TR(0x4cc212);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cc213:{NFSU2_TR(0x4cc213);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cc216:L4cc216:{c.instructions+=7;NFSU2_TR(0x4cc216);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cc219:{NFSU2_TR(0x4cc219);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cc21c:{NFSU2_TR(0x4cc21c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc21d:{NFSU2_TR(0x4cc21d);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4cc223:{NFSU2_TR(0x4cc223);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x2000000ull))));
}
B4cc229:{NFSU2_TR(0x4cc229);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc22a:{NFSU2_TR(0x4cc22a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc22full));
TAIL_STATIC(0x54e6e0u,54e);
}
B4cc22f:L4cc22f:{c.instructions+=4;NFSU2_TR(0x4cc22f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cc230:{NFSU2_TR(0x4cc230);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cc231:{NFSU2_TR(0x4cc231);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cc232:{NFSU2_TR(0x4cc232);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cc240:L4cc240:{c.instructions+=1;NFSU2_TR(0x4cc240);
TAIL_STATIC(0x4cbba0u,4cb);
}
B4cc250:L4cc250:{c.instructions+=6;NFSU2_TR(0x4cc250);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B4cc256:{NFSU2_TR(0x4cc256);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc257:{NFSU2_TR(0x4cc257);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc258:{NFSU2_TR(0x4cc258);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc25a:{NFSU2_TR(0x4cc25a);
__builtin_memmove((R+28),(R+4),4);
}
B4cc25c:{NFSU2_TR(0x4cc25c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc261ull));
TAIL_STATIC(0x575620u,575);
}
B4cc261:L4cc261:{c.instructions+=3;NFSU2_TR(0x4cc261);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc264:{NFSU2_TR(0x4cc264);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cc266:{NFSU2_TR(0x4cc266);
if(r1(R+518)){{goto L4cc27e;}}
}
B4cc268:L4cc268:{c.instructions+=7;NFSU2_TR(0x4cc268);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc26b:{NFSU2_TR(0x4cc26b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4cc26d:{NFSU2_TR(0x4cc26d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc270:{NFSU2_TR(0x4cc270);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc274:{NFSU2_TR(0x4cc274);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4cc27a:{NFSU2_TR(0x4cc27a);
__builtin_memmove((R+24),(R+0),4);
}
B4cc27c:{NFSU2_TR(0x4cc27c);
{goto L4cc280;}
}
B4cc27e:L4cc27e:{c.instructions+=1;NFSU2_TR(0x4cc27e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4cc280:L4cc280:{c.instructions+=7;NFSU2_TR(0x4cc280);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc287:{NFSU2_TR(0x4cc287);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cc28e:{NFSU2_TR(0x4cc28e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc28f:{NFSU2_TR(0x4cc28f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc290:{NFSU2_TR(0x4cc290);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc291:{NFSU2_TR(0x4cc291);
__builtin_memmove((R+4),(R+28),4);
}
B4cc293:{NFSU2_TR(0x4cc293);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc298ull));
TAIL_STATIC(0x4b1ae0u,4b1);
}
B4cc298:L4cc298:{c.instructions+=7;NFSU2_TR(0x4cc298);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cc29f:{NFSU2_TR(0x4cc29f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc2a0:{NFSU2_TR(0x4cc2a0);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc2a5:{NFSU2_TR(0x4cc2a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4cc2a9:{NFSU2_TR(0x4cc2a9);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc2ae:{NFSU2_TR(0x4cc2ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc2af:{NFSU2_TR(0x4cc2af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc2b4ull));
TAIL_STATIC(0x50c960u,50c);
}
B4cc2b4:L4cc2b4:{c.instructions+=7;NFSU2_TR(0x4cc2b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cc2b7:{NFSU2_TR(0x4cc2b7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc2b9:{NFSU2_TR(0x4cc2b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc2bb:{NFSU2_TR(0x4cc2bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc2bf:{NFSU2_TR(0x4cc2bf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc2c0:{NFSU2_TR(0x4cc2c0);
__builtin_memmove((R+4),(R+24),4);
}
B4cc2c2:{NFSU2_TR(0x4cc2c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc2c7ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4cc2c7:L4cc2c7:{c.instructions+=3;NFSU2_TR(0x4cc2c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc2c8:{NFSU2_TR(0x4cc2c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc2cb:{NFSU2_TR(0x4cc2cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc2d0ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4cc2d0:L4cc2d0:{c.instructions+=4;NFSU2_TR(0x4cc2d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cc2d1:{NFSU2_TR(0x4cc2d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cc2d2:{NFSU2_TR(0x4cc2d2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cc2d8:{NFSU2_TR(0x4cc2d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cc2e0:L4cc2e0:{c.instructions+=6;NFSU2_TR(0x4cc2e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B4cc2e6:{NFSU2_TR(0x4cc2e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc2e7:{NFSU2_TR(0x4cc2e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc2e8:{NFSU2_TR(0x4cc2e8);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc2ea:{NFSU2_TR(0x4cc2ea);
__builtin_memmove((R+28),(R+4),4);
}
B4cc2ec:{NFSU2_TR(0x4cc2ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc2f1ull));
TAIL_STATIC(0x575620u,575);
}
B4cc2f1:L4cc2f1:{c.instructions+=3;NFSU2_TR(0x4cc2f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc2f4:{NFSU2_TR(0x4cc2f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cc2f6:{NFSU2_TR(0x4cc2f6);
if(r1(R+518)){{goto L4cc30e;}}
}
B4cc2f8:L4cc2f8:{c.instructions+=7;NFSU2_TR(0x4cc2f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc2fb:{NFSU2_TR(0x4cc2fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4cc2fd:{NFSU2_TR(0x4cc2fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc300:{NFSU2_TR(0x4cc300);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc304:{NFSU2_TR(0x4cc304);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4cc30a:{NFSU2_TR(0x4cc30a);
__builtin_memmove((R+24),(R+0),4);
}
B4cc30c:{NFSU2_TR(0x4cc30c);
{goto L4cc310;}
}
B4cc30e:L4cc30e:{c.instructions+=1;NFSU2_TR(0x4cc30e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4cc310:L4cc310:{c.instructions+=7;NFSU2_TR(0x4cc310);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc317:{NFSU2_TR(0x4cc317);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cc31e:{NFSU2_TR(0x4cc31e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc31f:{NFSU2_TR(0x4cc31f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc320:{NFSU2_TR(0x4cc320);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc321:{NFSU2_TR(0x4cc321);
__builtin_memmove((R+4),(R+28),4);
}
B4cc323:{NFSU2_TR(0x4cc323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc328ull));
TAIL_STATIC(0x4b1ae0u,4b1);
}
B4cc328:L4cc328:{c.instructions+=9;NFSU2_TR(0x4cc328);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cc32f:{NFSU2_TR(0x4cc32f);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc336:{NFSU2_TR(0x4cc336);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc337:{NFSU2_TR(0x4cc337);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc338:{NFSU2_TR(0x4cc338);
u8 U[4];
w4(U+0,u32(0x78f770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc33d:{NFSU2_TR(0x4cc33d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc341:{NFSU2_TR(0x4cc341);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc346:{NFSU2_TR(0x4cc346);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc347:{NFSU2_TR(0x4cc347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc34cull));
TAIL_STATIC(0x50c960u,50c);
}
B4cc34c:L4cc34c:{c.instructions+=7;NFSU2_TR(0x4cc34c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4cc34f:{NFSU2_TR(0x4cc34f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc351:{NFSU2_TR(0x4cc351);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc353:{NFSU2_TR(0x4cc353);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4cc357:{NFSU2_TR(0x4cc357);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc358:{NFSU2_TR(0x4cc358);
__builtin_memmove((R+4),(R+24),4);
}
B4cc35a:{NFSU2_TR(0x4cc35a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc35full));
TAIL_STATIC(0x4aea60u,4ae);
}
B4cc35f:L4cc35f:{c.instructions+=3;NFSU2_TR(0x4cc35f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc360:{NFSU2_TR(0x4cc360);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc363:{NFSU2_TR(0x4cc363);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc368ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4cc368:L4cc368:{c.instructions+=4;NFSU2_TR(0x4cc368);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cc369:{NFSU2_TR(0x4cc369);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cc36a:{NFSU2_TR(0x4cc36a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cc370:{NFSU2_TR(0x4cc370);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cc380:L4cc380:{c.instructions+=6;NFSU2_TR(0x4cc380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B4cc386:{NFSU2_TR(0x4cc386);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc387:{NFSU2_TR(0x4cc387);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc388:{NFSU2_TR(0x4cc388);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc38a:{NFSU2_TR(0x4cc38a);
__builtin_memmove((R+28),(R+4),4);
}
B4cc38c:{NFSU2_TR(0x4cc38c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc391ull));
TAIL_STATIC(0x575620u,575);
}
B4cc391:L4cc391:{c.instructions+=3;NFSU2_TR(0x4cc391);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc394:{NFSU2_TR(0x4cc394);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cc396:{NFSU2_TR(0x4cc396);
if(r1(R+518)){{goto L4cc3ae;}}
}
B4cc398:L4cc398:{c.instructions+=7;NFSU2_TR(0x4cc398);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc39b:{NFSU2_TR(0x4cc39b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4cc39d:{NFSU2_TR(0x4cc39d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc3a0:{NFSU2_TR(0x4cc3a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc3a4:{NFSU2_TR(0x4cc3a4);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4cc3aa:{NFSU2_TR(0x4cc3aa);
__builtin_memmove((R+24),(R+0),4);
}
B4cc3ac:{NFSU2_TR(0x4cc3ac);
{goto L4cc3b0;}
}
B4cc3ae:L4cc3ae:{c.instructions+=1;NFSU2_TR(0x4cc3ae);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4cc3b0:L4cc3b0:{c.instructions+=6;NFSU2_TR(0x4cc3b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc3b7:{NFSU2_TR(0x4cc3b7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc3b9:{NFSU2_TR(0x4cc3b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc3bb:{NFSU2_TR(0x4cc3bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc3bc:{NFSU2_TR(0x4cc3bc);
__builtin_memmove((R+4),(R+24),4);
}
B4cc3be:{NFSU2_TR(0x4cc3be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc3c3ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4cc3c3:L4cc3c3:{c.instructions+=8;NFSU2_TR(0x4cc3c3);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cc3ca:{NFSU2_TR(0x4cc3ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4cc3cd:{NFSU2_TR(0x4cc3cd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4cc3d0:{NFSU2_TR(0x4cc3d0);
u8 U[4];
w4(U+0,u32(0x795d28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc3d5:{NFSU2_TR(0x4cc3d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc3d9:{NFSU2_TR(0x4cc3d9);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc3de:{NFSU2_TR(0x4cc3de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc3df:{NFSU2_TR(0x4cc3df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc3e4ull));
TAIL_STATIC(0x50c960u,50c);
}
B4cc3e4:L4cc3e4:{c.instructions+=7;NFSU2_TR(0x4cc3e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4cc3e7:{NFSU2_TR(0x4cc3e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc3e9:{NFSU2_TR(0x4cc3e9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc3eb:{NFSU2_TR(0x4cc3eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4cc3ef:{NFSU2_TR(0x4cc3ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc3f0:{NFSU2_TR(0x4cc3f0);
__builtin_memmove((R+4),(R+24),4);
}
B4cc3f2:{NFSU2_TR(0x4cc3f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc3f7ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4cc3f7:L4cc3f7:{c.instructions+=3;NFSU2_TR(0x4cc3f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc3f8:{NFSU2_TR(0x4cc3f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc3fb:{NFSU2_TR(0x4cc3fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc400ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4cc400:L4cc400:{c.instructions+=4;NFSU2_TR(0x4cc400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cc401:{NFSU2_TR(0x4cc401);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cc402:{NFSU2_TR(0x4cc402);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cc408:{NFSU2_TR(0x4cc408);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cc410:L4cc410:{c.instructions+=6;NFSU2_TR(0x4cc410);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B4cc416:{NFSU2_TR(0x4cc416);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc417:{NFSU2_TR(0x4cc417);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc418:{NFSU2_TR(0x4cc418);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc41a:{NFSU2_TR(0x4cc41a);
__builtin_memmove((R+28),(R+4),4);
}
B4cc41c:{NFSU2_TR(0x4cc41c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc421ull));
TAIL_STATIC(0x575620u,575);
}
B4cc421:L4cc421:{c.instructions+=3;NFSU2_TR(0x4cc421);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc424:{NFSU2_TR(0x4cc424);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cc426:{NFSU2_TR(0x4cc426);
if(r1(R+518)){{goto L4cc43e;}}
}
B4cc428:L4cc428:{c.instructions+=7;NFSU2_TR(0x4cc428);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc42b:{NFSU2_TR(0x4cc42b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4cc42d:{NFSU2_TR(0x4cc42d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc430:{NFSU2_TR(0x4cc430);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc434:{NFSU2_TR(0x4cc434);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4cc43a:{NFSU2_TR(0x4cc43a);
__builtin_memmove((R+24),(R+0),4);
}
B4cc43c:{NFSU2_TR(0x4cc43c);
{goto L4cc440;}
}
B4cc43e:L4cc43e:{c.instructions+=1;NFSU2_TR(0x4cc43e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4cc440:L4cc440:{c.instructions+=7;NFSU2_TR(0x4cc440);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc447:{NFSU2_TR(0x4cc447);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cc44e:{NFSU2_TR(0x4cc44e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc44f:{NFSU2_TR(0x4cc44f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc450:{NFSU2_TR(0x4cc450);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc451:{NFSU2_TR(0x4cc451);
__builtin_memmove((R+4),(R+28),4);
}
B4cc453:{NFSU2_TR(0x4cc453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc458ull));
TAIL_STATIC(0x4b1ae0u,4b1);
}
B4cc458:L4cc458:{c.instructions+=8;NFSU2_TR(0x4cc458);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cc45f:{NFSU2_TR(0x4cc45f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4cc462:{NFSU2_TR(0x4cc462);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4cc465:{NFSU2_TR(0x4cc465);
u8 U[4];
w4(U+0,u32(0x795d28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc46a:{NFSU2_TR(0x4cc46a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4cc46e:{NFSU2_TR(0x4cc46e);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc473:{NFSU2_TR(0x4cc473);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc474:{NFSU2_TR(0x4cc474);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc479ull));
TAIL_STATIC(0x50c960u,50c);
}
B4cc479:L4cc479:{c.instructions+=7;NFSU2_TR(0x4cc479);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4cc47c:{NFSU2_TR(0x4cc47c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc47e:{NFSU2_TR(0x4cc47e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc480:{NFSU2_TR(0x4cc480);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4cc484:{NFSU2_TR(0x4cc484);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc485:{NFSU2_TR(0x4cc485);
__builtin_memmove((R+4),(R+24),4);
}
B4cc487:{NFSU2_TR(0x4cc487);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc48cull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4cc48c:L4cc48c:{c.instructions+=3;NFSU2_TR(0x4cc48c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc48d:{NFSU2_TR(0x4cc48d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc490:{NFSU2_TR(0x4cc490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc495ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4cc495:L4cc495:{c.instructions+=4;NFSU2_TR(0x4cc495);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cc496:{NFSU2_TR(0x4cc496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cc497:{NFSU2_TR(0x4cc497);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cc49d:{NFSU2_TR(0x4cc49d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cc4a0:L4cc4a0:{c.instructions+=6;NFSU2_TR(0x4cc4a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B4cc4a6:{NFSU2_TR(0x4cc4a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc4a7:{NFSU2_TR(0x4cc4a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc4a8:{NFSU2_TR(0x4cc4a8);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc4aa:{NFSU2_TR(0x4cc4aa);
__builtin_memmove((R+28),(R+4),4);
}
B4cc4ac:{NFSU2_TR(0x4cc4ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc4b1ull));
TAIL_STATIC(0x575620u,575);
}
B4cc4b1:L4cc4b1:{c.instructions+=3;NFSU2_TR(0x4cc4b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc4b4:{NFSU2_TR(0x4cc4b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cc4b6:{NFSU2_TR(0x4cc4b6);
if(r1(R+518)){{goto L4cc4ce;}}
}
B4cc4b8:L4cc4b8:{c.instructions+=7;NFSU2_TR(0x4cc4b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc4bb:{NFSU2_TR(0x4cc4bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4cc4bd:{NFSU2_TR(0x4cc4bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc4c0:{NFSU2_TR(0x4cc4c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc4c4:{NFSU2_TR(0x4cc4c4);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4cc4ca:{NFSU2_TR(0x4cc4ca);
__builtin_memmove((R+24),(R+0),4);
}
B4cc4cc:{NFSU2_TR(0x4cc4cc);
{goto L4cc4d0;}
}
B4cc4ce:L4cc4ce:{c.instructions+=1;NFSU2_TR(0x4cc4ce);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4cc4d0:L4cc4d0:{c.instructions+=3;NFSU2_TR(0x4cc4d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc4d7:{NFSU2_TR(0x4cc4d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc4d8:{NFSU2_TR(0x4cc4d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc4ddull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4cc4dd:L4cc4dd:{c.instructions+=5;NFSU2_TR(0x4cc4dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc4de:{NFSU2_TR(0x4cc4de);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc4e2:{NFSU2_TR(0x4cc4e2);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc4e7:{NFSU2_TR(0x4cc4e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc4e8:{NFSU2_TR(0x4cc4e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc4edull));
TAIL_STATIC(0x50c960u,50c);
}
B4cc4ed:L4cc4ed:{c.instructions+=7;NFSU2_TR(0x4cc4ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cc4f0:{NFSU2_TR(0x4cc4f0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc4f2:{NFSU2_TR(0x4cc4f2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc4f4:{NFSU2_TR(0x4cc4f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4cc4f8:{NFSU2_TR(0x4cc4f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc4f9:{NFSU2_TR(0x4cc4f9);
__builtin_memmove((R+4),(R+24),4);
}
B4cc4fb:{NFSU2_TR(0x4cc4fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc500ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4cc500:L4cc500:{c.instructions+=5;NFSU2_TR(0x4cc500);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc502:{NFSU2_TR(0x4cc502);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc504:{NFSU2_TR(0x4cc504);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc509:{NFSU2_TR(0x4cc509);
__builtin_memmove((R+4),(R+24),4);
}
B4cc50b:{NFSU2_TR(0x4cc50b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc510ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4cc510:L4cc510:{c.instructions+=3;NFSU2_TR(0x4cc510);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc511:{NFSU2_TR(0x4cc511);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc514:{NFSU2_TR(0x4cc514);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc519ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4cc519:L4cc519:{c.instructions+=4;NFSU2_TR(0x4cc519);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cc51a:{NFSU2_TR(0x4cc51a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cc51b:{NFSU2_TR(0x4cc51b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x80ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cc521:{NFSU2_TR(0x4cc521);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cc530:L4cc530:{c.instructions+=12;NFSU2_TR(0x4cc530);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc532:{NFSU2_TR(0x4cc532);
u8 U[4];
w4(U+0,u32(0x7748b3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc537:{NFSU2_TR(0x4cc537);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc53d:{NFSU2_TR(0x4cc53d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc53e:{NFSU2_TR(0x4cc53e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc545:{NFSU2_TR(0x4cc545);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc546:{NFSU2_TR(0x4cc546);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc547:{NFSU2_TR(0x4cc547);
__builtin_memmove((R+24),(R+4),4);
}
B4cc549:{NFSU2_TR(0x4cc549);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc54d:{NFSU2_TR(0x4cc54d);
u8 U[4];
w4(U+0,u32(0x795d38ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4cc553:{NFSU2_TR(0x4cc553);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cc55b:{NFSU2_TR(0x4cc55b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc560ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4cc560:L4cc560:{c.instructions+=2;NFSU2_TR(0x4cc560);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc561:{NFSU2_TR(0x4cc561);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc566ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4cc566:L4cc566:{c.instructions+=3;NFSU2_TR(0x4cc566);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc569:{NFSU2_TR(0x4cc569);
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
B4cc56b:{NFSU2_TR(0x4cc56b);
if(r1(R+518)){{goto L4cc57b;}}
}
B4cc56d:L4cc56d:{c.instructions+=1;NFSU2_TR(0x4cc56d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc572ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4cc572:L4cc572:{c.instructions+=2;NFSU2_TR(0x4cc572);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc573:{NFSU2_TR(0x4cc573);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc578ull));
TAIL_STATIC(0x5379a0u,537);
}
B4cc578:L4cc578:{c.instructions+=1;NFSU2_TR(0x4cc578);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc57b:L4cc57b:{c.instructions+=4;NFSU2_TR(0x4cc57b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4cc582:{NFSU2_TR(0x4cc582);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f4428ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4cc589:{NFSU2_TR(0x4cc589);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc58a:{NFSU2_TR(0x4cc58a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc58full));
TAIL_STATIC(0x5379a0u,537);
}
B4cc58f:L4cc58f:{c.instructions+=4;NFSU2_TR(0x4cc58f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc592:{NFSU2_TR(0x4cc592);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc595:{NFSU2_TR(0x4cc595);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc59a:{NFSU2_TR(0x4cc59a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc59full));
TAIL_STATIC(0x4cbba0u,4cb);
}
B4cc59f:L4cc59f:{c.instructions+=3;NFSU2_TR(0x4cc59f);
__builtin_memmove((R+4),(R+24),4);
}
B4cc5a1:{NFSU2_TR(0x4cc5a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cc5a9:{NFSU2_TR(0x4cc5a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc5aeull));
TAIL_STATIC(0x510d40u,510);
}
B4cc5ae:L4cc5ae:{c.instructions+=5;NFSU2_TR(0x4cc5ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cc5b2:{NFSU2_TR(0x4cc5b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cc5b3:{NFSU2_TR(0x4cc5b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc5ba:{NFSU2_TR(0x4cc5ba);
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
B4cc5bd:{NFSU2_TR(0x4cc5bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cc5c0:L4cc5c0:{c.instructions+=8;NFSU2_TR(0x4cc5c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B4cc5c3:{NFSU2_TR(0x4cc5c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc5c4:{NFSU2_TR(0x4cc5c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc5c5:{NFSU2_TR(0x4cc5c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc5c6:{NFSU2_TR(0x4cc5c6);
__builtin_memmove((R+24),(R+4),4);
}
B4cc5c8:{NFSU2_TR(0x4cc5c8);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc5ca:{NFSU2_TR(0x4cc5ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc5ce:{NFSU2_TR(0x4cc5ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc5d3ull));
TAIL_STATIC(0x575620u,575);
}
B4cc5d3:L4cc5d3:{c.instructions+=4;NFSU2_TR(0x4cc5d3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cc5d5:{NFSU2_TR(0x4cc5d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc5d8:{NFSU2_TR(0x4cc5d8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cc5da:{NFSU2_TR(0x4cc5da);
if(r1(R+518)){{goto L4cc60d;}}
}
B4cc5dc:L4cc5dc:{c.instructions+=13;NFSU2_TR(0x4cc5dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc5df:{NFSU2_TR(0x4cc5df);
u8 U[4];
w4(U+0,u32(0x79b9d4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4cc5e5:{NFSU2_TR(0x4cc5e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4cc5e7:{NFSU2_TR(0x4cc5e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc5ea:{NFSU2_TR(0x4cc5ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc5ed:{NFSU2_TR(0x4cc5ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc5f0:{NFSU2_TR(0x4cc5f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc5f3:{NFSU2_TR(0x4cc5f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc5f6:{NFSU2_TR(0x4cc5f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc5f9:{NFSU2_TR(0x4cc5f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc5fd:{NFSU2_TR(0x4cc5fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
w4(U+4,u32(0x78f228ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cc604:{NFSU2_TR(0x4cc604);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
w4(U+4,u32(0x78f21cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cc60b:{NFSU2_TR(0x4cc60b);
__builtin_memmove((R+28),(R+0),4);
}
B4cc60d:L4cc60d:{c.instructions+=4;NFSU2_TR(0x4cc60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc610:{NFSU2_TR(0x4cc610);
u8 U[4];
w4(U+0,u32(0x3223a234ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc615:{NFSU2_TR(0x4cc615);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc616:{NFSU2_TR(0x4cc616);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc61bull));
TAIL_STATIC(0x537a10u,537);
}
B4cc61b:L4cc61b:{c.instructions+=3;NFSU2_TR(0x4cc61b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc61d:{NFSU2_TR(0x4cc61d);
__builtin_memmove((R+12),(R+0),4);
}
B4cc61f:{NFSU2_TR(0x4cc61f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc624ull));
TAIL_STATIC(0x575620u,575);
}
B4cc624:L4cc624:{c.instructions+=3;NFSU2_TR(0x4cc624);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cc627:{NFSU2_TR(0x4cc627);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cc629:{NFSU2_TR(0x4cc629);
if(r1(R+518)){{goto L4cc639;}}
}
B4cc62b:L4cc62b:{c.instructions+=4;NFSU2_TR(0x4cc62b);
u8 U[4];
w4(U+0,u32(0x790c2cull));
s4(u32(r4(R+0)),r4(U+0));
}
B4cc631:{NFSU2_TR(0x4cc631);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc634:{NFSU2_TR(0x4cc634);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4cc637:{NFSU2_TR(0x4cc637);
{goto L4cc63b;}
}
B4cc639:L4cc639:{c.instructions+=1;NFSU2_TR(0x4cc639);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cc63b:L4cc63b:{c.instructions+=10;NFSU2_TR(0x4cc63b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cc63e:{NFSU2_TR(0x4cc63e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc641:{NFSU2_TR(0x4cc641);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4cc643:{NFSU2_TR(0x4cc643);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc646:{NFSU2_TR(0x4cc646);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4cc648:{NFSU2_TR(0x4cc648);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4cull))));
}
B4cc64b:{NFSU2_TR(0x4cc64b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc64c:{NFSU2_TR(0x4cc64c);
__builtin_memmove((R+4),(R+24),4);
}
B4cc64e:{NFSU2_TR(0x4cc64e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc651:{NFSU2_TR(0x4cc651);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc656ull));
TAIL_STATIC(0x52e770u,52e);
}
B4cc656:L4cc656:{c.instructions+=2;NFSU2_TR(0x4cc656);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc658:{NFSU2_TR(0x4cc658);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc65dull));
TAIL_STATIC(0x575620u,575);
}
B4cc65d:L4cc65d:{c.instructions+=3;NFSU2_TR(0x4cc65d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc660:{NFSU2_TR(0x4cc660);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cc662:{NFSU2_TR(0x4cc662);
if(r1(R+518)){{goto L4cc67a;}}
}
B4cc664:L4cc664:{c.instructions+=7;NFSU2_TR(0x4cc664);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc667:{NFSU2_TR(0x4cc667);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4cc66d:{NFSU2_TR(0x4cc66d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4cc66f:{NFSU2_TR(0x4cc66f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc672:{NFSU2_TR(0x4cc672);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc676:{NFSU2_TR(0x4cc676);
__builtin_memmove((R+28),(R+0),4);
}
B4cc678:{NFSU2_TR(0x4cc678);
{goto L4cc67c;}
}
B4cc67a:L4cc67a:{c.instructions+=1;NFSU2_TR(0x4cc67a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cc67c:L4cc67c:{c.instructions+=2;NFSU2_TR(0x4cc67c);
u8 U[4];
w4(U+0,u32(0xa3532050ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc681:{NFSU2_TR(0x4cc681);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc686ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4cc686:L4cc686:{c.instructions+=5;NFSU2_TR(0x4cc686);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc687:{NFSU2_TR(0x4cc687);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4cc68b:{NFSU2_TR(0x4cc68b);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc68d:{NFSU2_TR(0x4cc68d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc68e:{NFSU2_TR(0x4cc68e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc693ull));
TAIL_STATIC(0x50c960u,50c);
}
B4cc693:L4cc693:{c.instructions+=7;NFSU2_TR(0x4cc693);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cc696:{NFSU2_TR(0x4cc696);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc698:{NFSU2_TR(0x4cc698);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc69a:{NFSU2_TR(0x4cc69a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc69e:{NFSU2_TR(0x4cc69e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc69f:{NFSU2_TR(0x4cc69f);
__builtin_memmove((R+4),(R+28),4);
}
B4cc6a1:{NFSU2_TR(0x4cc6a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc6a6ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4cc6a6:L4cc6a6:{c.instructions+=3;NFSU2_TR(0x4cc6a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc6a7:{NFSU2_TR(0x4cc6a7);
__builtin_memmove((R+4),(R+24),4);
}
B4cc6a9:{NFSU2_TR(0x4cc6a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc6aeull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4cc6ae:L4cc6ae:{c.instructions+=3;NFSU2_TR(0x4cc6ae);
__builtin_memmove((R+12),gp(0x862838),4);
}
B4cc6b4:{NFSU2_TR(0x4cc6b4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x6ull))));
}
B4cc6b7:{NFSU2_TR(0x4cc6b7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L4cc7aa;}}
}
B4cc6bd:L4cc6bd:{c.instructions+=2;NFSU2_TR(0x4cc6bd);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc6bf:{NFSU2_TR(0x4cc6bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc6c4ull));
TAIL_STATIC(0x575620u,575);
}
B4cc6c4:L4cc6c4:{c.instructions+=3;NFSU2_TR(0x4cc6c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc6c7:{NFSU2_TR(0x4cc6c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cc6c9:{NFSU2_TR(0x4cc6c9);
if(r1(R+518)){{goto L4cc6e1;}}
}
B4cc6cb:L4cc6cb:{c.instructions+=7;NFSU2_TR(0x4cc6cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc6ce:{NFSU2_TR(0x4cc6ce);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4cc6d4:{NFSU2_TR(0x4cc6d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4cc6d6:{NFSU2_TR(0x4cc6d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc6d9:{NFSU2_TR(0x4cc6d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc6dd:{NFSU2_TR(0x4cc6dd);
__builtin_memmove((R+28),(R+0),4);
}
B4cc6df:{NFSU2_TR(0x4cc6df);
{goto L4cc6e3;}
}
B4cc6e1:L4cc6e1:{c.instructions+=1;NFSU2_TR(0x4cc6e1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cc6e3:L4cc6e3:{c.instructions+=2;NFSU2_TR(0x4cc6e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cc6e5:{NFSU2_TR(0x4cc6e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cc703;}}
}
B4cc6e7:L4cc6e7:{c.instructions+=2;NFSU2_TR(0x4cc6e7);
u8 U[4];
w4(U+0,u32(0xd56afe23ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc6ec:{NFSU2_TR(0x4cc6ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc6f1ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4cc6f1:L4cc6f1:{c.instructions+=5;NFSU2_TR(0x4cc6f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc6f2:{NFSU2_TR(0x4cc6f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4cc6f6:{NFSU2_TR(0x4cc6f6);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc6f8:{NFSU2_TR(0x4cc6f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc6f9:{NFSU2_TR(0x4cc6f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc6feull));
TAIL_STATIC(0x50c960u,50c);
}
B4cc6fe:L4cc6fe:{c.instructions+=2;NFSU2_TR(0x4cc6fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cc701:{NFSU2_TR(0x4cc701);
{goto L4cc731;}
}
B4cc703:L4cc703:{c.instructions+=3;NFSU2_TR(0x4cc703);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc08af0b2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cc709:{NFSU2_TR(0x4cc709);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc70a:{NFSU2_TR(0x4cc70a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc70full));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4cc70f:L4cc70f:{c.instructions+=5;NFSU2_TR(0x4cc70f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc712:{NFSU2_TR(0x4cc712);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc713:{NFSU2_TR(0x4cc713);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc714:{NFSU2_TR(0x4cc714);
u8 U[4];
w4(U+0,u32(0x94d3715bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc719:{NFSU2_TR(0x4cc719);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc71eull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4cc71e:L4cc71e:{c.instructions+=6;NFSU2_TR(0x4cc71e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc721:{NFSU2_TR(0x4cc721);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc722:{NFSU2_TR(0x4cc722);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc726:{NFSU2_TR(0x4cc726);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc728:{NFSU2_TR(0x4cc728);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc729:{NFSU2_TR(0x4cc729);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc72eull));
TAIL_STATIC(0x50c960u,50c);
}
B4cc72e:L4cc72e:{c.instructions+=1;NFSU2_TR(0x4cc72e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4cc731:L4cc731:{c.instructions+=6;NFSU2_TR(0x4cc731);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc733:{NFSU2_TR(0x4cc733);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc735:{NFSU2_TR(0x4cc735);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4cc739:{NFSU2_TR(0x4cc739);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc73a:{NFSU2_TR(0x4cc73a);
__builtin_memmove((R+4),(R+28),4);
}
B4cc73c:{NFSU2_TR(0x4cc73c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc741ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4cc741:L4cc741:{c.instructions+=3;NFSU2_TR(0x4cc741);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc742:{NFSU2_TR(0x4cc742);
__builtin_memmove((R+4),(R+24),4);
}
B4cc744:{NFSU2_TR(0x4cc744);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc749ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4cc749:L4cc749:{c.instructions+=2;NFSU2_TR(0x4cc749);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc74b:{NFSU2_TR(0x4cc74b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc750ull));
TAIL_STATIC(0x575620u,575);
}
B4cc750:L4cc750:{c.instructions+=3;NFSU2_TR(0x4cc750);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc753:{NFSU2_TR(0x4cc753);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cc755:{NFSU2_TR(0x4cc755);
if(r1(R+518)){{goto L4cc76d;}}
}
B4cc757:L4cc757:{c.instructions+=7;NFSU2_TR(0x4cc757);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc75a:{NFSU2_TR(0x4cc75a);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4cc760:{NFSU2_TR(0x4cc760);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4cc762:{NFSU2_TR(0x4cc762);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc765:{NFSU2_TR(0x4cc765);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc769:{NFSU2_TR(0x4cc769);
__builtin_memmove((R+28),(R+0),4);
}
B4cc76b:{NFSU2_TR(0x4cc76b);
{goto L4cc76f;}
}
B4cc76d:L4cc76d:{c.instructions+=1;NFSU2_TR(0x4cc76d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4cc76f:L4cc76f:{c.instructions+=2;NFSU2_TR(0x4cc76f);
u8 U[4];
w4(U+0,u32(0x74e499b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc774:{NFSU2_TR(0x4cc774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc779ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4cc779:L4cc779:{c.instructions+=5;NFSU2_TR(0x4cc779);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc77a:{NFSU2_TR(0x4cc77a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4cc77e:{NFSU2_TR(0x4cc77e);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc780:{NFSU2_TR(0x4cc780);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc781:{NFSU2_TR(0x4cc781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc786ull));
TAIL_STATIC(0x50c960u,50c);
}
B4cc786:L4cc786:{c.instructions+=7;NFSU2_TR(0x4cc786);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cc789:{NFSU2_TR(0x4cc789);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc78b:{NFSU2_TR(0x4cc78b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc78d:{NFSU2_TR(0x4cc78d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc791:{NFSU2_TR(0x4cc791);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc792:{NFSU2_TR(0x4cc792);
__builtin_memmove((R+4),(R+28),4);
}
B4cc794:{NFSU2_TR(0x4cc794);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc799ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4cc799:L4cc799:{c.instructions+=3;NFSU2_TR(0x4cc799);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc79a:{NFSU2_TR(0x4cc79a);
__builtin_memmove((R+4),(R+24),4);
}
B4cc79c:{NFSU2_TR(0x4cc79c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc7a1ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4cc7a1:L4cc7a1:{c.instructions+=3;NFSU2_TR(0x4cc7a1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc7a3:{NFSU2_TR(0x4cc7a3);
__builtin_memmove((R+4),(R+24),4);
}
B4cc7a5:{NFSU2_TR(0x4cc7a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc7aaull));
TAIL_STATIC(0x538500u,538);
}
B4cc7aa:L4cc7aa:{c.instructions+=2;NFSU2_TR(0x4cc7aa);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cc7ae:{NFSU2_TR(0x4cc7ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc7b3ull));
TAIL_STATIC(0x4b1df0u,4b1);
}
B4cc7b3:L4cc7b3:{c.instructions+=5;NFSU2_TR(0x4cc7b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cc7b4:{NFSU2_TR(0x4cc7b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cc7b5:{NFSU2_TR(0x4cc7b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cc7b6:{NFSU2_TR(0x4cc7b6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cc7b9:{NFSU2_TR(0x4cc7b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cc7c0:L4cc7c0:{c.instructions+=19;NFSU2_TR(0x4cc7c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc7c2:{NFSU2_TR(0x4cc7c2);
u8 U[4];
w4(U+0,u32(0x7741bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc7c7:{NFSU2_TR(0x4cc7c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc7cd:{NFSU2_TR(0x4cc7cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc7ce:{NFSU2_TR(0x4cc7ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc7d5:{NFSU2_TR(0x4cc7d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B4cc7db:{NFSU2_TR(0x4cc7db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc7dc:{NFSU2_TR(0x4cc7dc);
__builtin_memmove((R+24),(R+4),4);
}
B4cc7de:{NFSU2_TR(0x4cc7de);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cc7e1:{NFSU2_TR(0x4cc7e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4cc7e3:{NFSU2_TR(0x4cc7e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc7e6:{NFSU2_TR(0x4cc7e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc7ea:{NFSU2_TR(0x4cc7ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc7ee:{NFSU2_TR(0x4cc7ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc7f5:{NFSU2_TR(0x4cc7f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cc7f7:{NFSU2_TR(0x4cc7f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cc802:{NFSU2_TR(0x4cc802);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4cc808:{NFSU2_TR(0x4cc808);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc80b:{NFSU2_TR(0x4cc80b);
if(r1(R+518)){{goto L4cc82b;}}
}
B4cc80d:L4cc80d:{c.instructions+=5;NFSU2_TR(0x4cc80d);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc812:{NFSU2_TR(0x4cc812);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc816:{NFSU2_TR(0x4cc816);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc817:{NFSU2_TR(0x4cc817);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc818:{NFSU2_TR(0x4cc818);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc81dull));
TAIL_STATIC(0x497760u,497);
}
B4cc81d:L4cc81d:{c.instructions+=6;NFSU2_TR(0x4cc81d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cc820:{NFSU2_TR(0x4cc820);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc822:{NFSU2_TR(0x4cc822);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc824:{NFSU2_TR(0x4cc824);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4cc828:{NFSU2_TR(0x4cc828);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc829:{NFSU2_TR(0x4cc829);
{goto L4cc834;}
}
B4cc82b:L4cc82b:{c.instructions+=3;NFSU2_TR(0x4cc82b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc82d:{NFSU2_TR(0x4cc82d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc82f:{NFSU2_TR(0x4cc82f);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc834:L4cc834:{c.instructions+=2;NFSU2_TR(0x4cc834);
__builtin_memmove((R+4),(R+24),4);
}
B4cc836:{NFSU2_TR(0x4cc836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc83bull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4cc83b:L4cc83b:{c.instructions+=6;NFSU2_TR(0x4cc83b);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cc842:{NFSU2_TR(0x4cc842);
__builtin_memmove((R+0),(R+24),4);
}
B4cc844:{NFSU2_TR(0x4cc844);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cc845:{NFSU2_TR(0x4cc845);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc84c:{NFSU2_TR(0x4cc84c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x110ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x110ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x110ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cc852:{NFSU2_TR(0x4cc852);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cc860:L4cc860:{c.instructions+=13;NFSU2_TR(0x4cc860);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc862:{NFSU2_TR(0x4cc862);
u8 U[4];
w4(U+0,u32(0x7741f1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc867:{NFSU2_TR(0x4cc867);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc86d:{NFSU2_TR(0x4cc86d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc86e:{NFSU2_TR(0x4cc86e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc875:{NFSU2_TR(0x4cc875);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc876:{NFSU2_TR(0x4cc876);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc877:{NFSU2_TR(0x4cc877);
__builtin_memmove((R+24),(R+4),4);
}
B4cc879:{NFSU2_TR(0x4cc879);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc87a:{NFSU2_TR(0x4cc87a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc87e:{NFSU2_TR(0x4cc87e);
u8 U[4];
w4(U+0,u32(0x795d48ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4cc884:{NFSU2_TR(0x4cc884);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cc88c:{NFSU2_TR(0x4cc88c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc891ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4cc891:L4cc891:{c.instructions+=2;NFSU2_TR(0x4cc891);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc892:{NFSU2_TR(0x4cc892);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc897ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4cc897:L4cc897:{c.instructions+=3;NFSU2_TR(0x4cc897);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc89a:{NFSU2_TR(0x4cc89a);
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
B4cc89c:{NFSU2_TR(0x4cc89c);
if(r1(R+518)){{goto L4cc8ac;}}
}
B4cc89e:L4cc89e:{c.instructions+=1;NFSU2_TR(0x4cc89e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc8a3ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4cc8a3:L4cc8a3:{c.instructions+=2;NFSU2_TR(0x4cc8a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc8a4:{NFSU2_TR(0x4cc8a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc8a9ull));
TAIL_STATIC(0x5379a0u,537);
}
B4cc8a9:L4cc8a9:{c.instructions+=1;NFSU2_TR(0x4cc8a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc8ac:L4cc8ac:{c.instructions+=3;NFSU2_TR(0x4cc8ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cc8af:{NFSU2_TR(0x4cc8af);
__builtin_memmove((R+4),(R+28),4);
}
B4cc8b1:{NFSU2_TR(0x4cc8b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc8b6ull));
TAIL_STATIC(0x51f4e0u,51f);
}
B4cc8b6:L4cc8b6:{c.instructions+=3;NFSU2_TR(0x4cc8b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc8bc:{NFSU2_TR(0x4cc8bc);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc8c1:{NFSU2_TR(0x4cc8c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc8c6ull));
TAIL_STATIC(0x4cbba0u,4cb);
}
B4cc8c6:L4cc8c6:{c.instructions+=3;NFSU2_TR(0x4cc8c6);
__builtin_memmove((R+4),(R+28),4);
}
B4cc8c8:{NFSU2_TR(0x4cc8c8);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc8cd:{NFSU2_TR(0x4cc8cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc8d2ull));
TAIL_STATIC(0x4cbba0u,4cb);
}
B4cc8d2:L4cc8d2:{c.instructions+=3;NFSU2_TR(0x4cc8d2);
__builtin_memmove((R+4),(R+24),4);
}
B4cc8d4:{NFSU2_TR(0x4cc8d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cc8dc:{NFSU2_TR(0x4cc8dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc8e1ull));
TAIL_STATIC(0x510d40u,510);
}
B4cc8e1:L4cc8e1:{c.instructions+=6;NFSU2_TR(0x4cc8e1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cc8e5:{NFSU2_TR(0x4cc8e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cc8e6:{NFSU2_TR(0x4cc8e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cc8e7:{NFSU2_TR(0x4cc8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc8ee:{NFSU2_TR(0x4cc8ee);
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
B4cc8f1:{NFSU2_TR(0x4cc8f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cc900:L4cc900:{c.instructions+=14;NFSU2_TR(0x4cc900);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc906:{NFSU2_TR(0x4cc906);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc908:{NFSU2_TR(0x4cc908);
u8 U[4];
w4(U+0,u32(0x774214ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc90d:{NFSU2_TR(0x4cc90d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc90e:{NFSU2_TR(0x4cc90e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc915:{NFSU2_TR(0x4cc915);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4cc918:{NFSU2_TR(0x4cc918);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc919:{NFSU2_TR(0x4cc919);
__builtin_memmove((R+24),(R+4),4);
}
B4cc91b:{NFSU2_TR(0x4cc91b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc921:{NFSU2_TR(0x4cc921);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc924:{NFSU2_TR(0x4cc924);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cc927:{NFSU2_TR(0x4cc927);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc92a:{NFSU2_TR(0x4cc92a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc92c:{NFSU2_TR(0x4cc92c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cc935;}}
}
B4cc92e:L4cc92e:{c.instructions+=2;NFSU2_TR(0x4cc92e);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc933:{NFSU2_TR(0x4cc933);
{goto L4cc93a;}
}
B4cc935:L4cc935:{c.instructions+=1;NFSU2_TR(0x4cc935);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc93a:L4cc93a:{c.instructions+=3;NFSU2_TR(0x4cc93a);
u8 U[4];
w4(U+0,u32(0x54049a3dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc93f:{NFSU2_TR(0x4cc93f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc940:{NFSU2_TR(0x4cc940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc945ull));
TAIL_STATIC(0x537c00u,537);
}
B4cc945:L4cc945:{c.instructions+=7;NFSU2_TR(0x4cc945);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc94b:{NFSU2_TR(0x4cc94b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cc94e:{NFSU2_TR(0x4cc94e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc951:{NFSU2_TR(0x4cc951);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cc954:{NFSU2_TR(0x4cc954);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cc957:{NFSU2_TR(0x4cc957);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc959:{NFSU2_TR(0x4cc959);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cc962;}}
}
B4cc95b:L4cc95b:{c.instructions+=2;NFSU2_TR(0x4cc95b);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc960:{NFSU2_TR(0x4cc960);
{goto L4cc967;}
}
B4cc962:L4cc962:{c.instructions+=1;NFSU2_TR(0x4cc962);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc967:L4cc967:{c.instructions+=3;NFSU2_TR(0x4cc967);
u8 U[4];
w4(U+0,u32(0xd506a970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc96c:{NFSU2_TR(0x4cc96c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc96d:{NFSU2_TR(0x4cc96d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc972ull));
TAIL_STATIC(0x537c00u,537);
}
B4cc972:L4cc972:{c.instructions+=5;NFSU2_TR(0x4cc972);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cc975:{NFSU2_TR(0x4cc975);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc976:{NFSU2_TR(0x4cc976);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc977:{NFSU2_TR(0x4cc977);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc97a:{NFSU2_TR(0x4cc97a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc97full));
TAIL_STATIC(0x51f4e0u,51f);
}
B4cc97f:L4cc97f:{c.instructions+=7;NFSU2_TR(0x4cc97f);
__builtin_memmove((R+12),gp(0x861e60),4);
}
B4cc985:{NFSU2_TR(0x4cc985);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B4cc986:{NFSU2_TR(0x4cc986);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4cc988:{NFSU2_TR(0x4cc988);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cc990:{NFSU2_TR(0x4cc990);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cc995:{NFSU2_TR(0x4cc995);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc999:{NFSU2_TR(0x4cc999);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4cca2f;}}
}
B4cc99f:L4cc99f:{c.instructions+=1;NFSU2_TR(0x4cc99f);
}
B4cc9a0:L4cc9a0:{c.instructions+=3;NFSU2_TR(0x4cc9a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc9a1:{NFSU2_TR(0x4cc9a1);
w4(R+4,u32(0x860a60ull));
}
B4cc9a6:{NFSU2_TR(0x4cc9a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc9abull));
TAIL_STATIC(0x5014a0u,501);
}
B4cc9ab:L4cc9ab:{c.instructions+=3;NFSU2_TR(0x4cc9ab);
__builtin_memmove((R+28),(R+0),4);
}
B4cc9ad:{NFSU2_TR(0x4cc9ad);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4cc9b1:{NFSU2_TR(0x4cc9b1);
if(r1(R+518)){{goto L4cca24;}}
}
B4cc9b3:L4cc9b3:{c.instructions+=4;NFSU2_TR(0x4cc9b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cc9b6:{NFSU2_TR(0x4cc9b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cc9b8:{NFSU2_TR(0x4cc9b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc9be:{NFSU2_TR(0x4cc9be);
if(r1(R+518)){{goto L4cc9cd;}}
}
B4cc9c0:L4cc9c0:{c.instructions+=5;NFSU2_TR(0x4cc9c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4cc9c2:{NFSU2_TR(0x4cc9c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4cc9c6:{NFSU2_TR(0x4cc9c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cc9c9:{NFSU2_TR(0x4cc9c9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cc9cb:{NFSU2_TR(0x4cc9cb);
{goto L4cc9d1;}
}
B4cc9cd:L4cc9cd:{c.instructions+=1;NFSU2_TR(0x4cc9cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4cc9d1:L4cc9d1:{c.instructions+=1;NFSU2_TR(0x4cc9d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cca24;}}
}
B4cc9d3:L4cc9d3:{c.instructions+=2;NFSU2_TR(0x4cc9d3);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc9d5:{NFSU2_TR(0x4cc9d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc9daull));
TAIL_STATIC(0x575620u,575);
}
B4cc9da:L4cc9da:{c.instructions+=6;NFSU2_TR(0x4cc9da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cc9dd:{NFSU2_TR(0x4cc9dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc9e1:{NFSU2_TR(0x4cc9e1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4cc9e3:{NFSU2_TR(0x4cc9e3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cc9e5:{NFSU2_TR(0x4cc9e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cc9e9:{NFSU2_TR(0x4cc9e9);
if(r1(R+518)){{goto L4cc9f5;}}
}
B4cc9eb:L4cc9eb:{c.instructions+=3;NFSU2_TR(0x4cc9eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc9ec:{NFSU2_TR(0x4cc9ec);
__builtin_memmove((R+4),(R+0),4);
}
B4cc9ee:{NFSU2_TR(0x4cc9ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cc9f3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cc7c0u);}goto L4cc7c0;}
}
B4cc9f3:L4cc9f3:{c.instructions+=1;NFSU2_TR(0x4cc9f3);
__builtin_memmove((R+12),(R+0),4);
}
B4cc9f5:L4cc9f5:{c.instructions+=4;NFSU2_TR(0x4cc9f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cc9f6:{NFSU2_TR(0x4cc9f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cc9f9:{NFSU2_TR(0x4cc9f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cca01:{NFSU2_TR(0x4cca01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cca06ull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4cca06:L4cca06:{c.instructions+=3;NFSU2_TR(0x4cca06);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cca07:{NFSU2_TR(0x4cca07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cca0a:{NFSU2_TR(0x4cca0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cca0full));
TAIL_STATIC(0x52ea50u,52e);
}
B4cca0f:L4cca0f:{c.instructions+=2;NFSU2_TR(0x4cca0f);
u8 U[8];
__builtin_memmove((U+0),gp(0x836334),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cca15:{NFSU2_TR(0x4cca15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cca1b;}}
}
B4cca17:L4cca17:{c.instructions+=1;NFSU2_TR(0x4cca17);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cca1b:L4cca1b:{c.instructions+=2;NFSU2_TR(0x4cca1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4cca1f:{NFSU2_TR(0x4cca1f);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cca24:L4cca24:{c.instructions+=3;NFSU2_TR(0x4cca24);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B4cca25:{NFSU2_TR(0x4cca25);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cca29:{NFSU2_TR(0x4cca29);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cc9a0u);}goto L4cc9a0;}}
}
B4cca2f:L4cca2f:{c.instructions+=4;NFSU2_TR(0x4cca2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cca32:{NFSU2_TR(0x4cca32);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cca34:{NFSU2_TR(0x4cca34);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cca37:{NFSU2_TR(0x4cca37);
if(r1(R+518)){{goto L4cca47;}}
}
B4cca39:L4cca39:{c.instructions+=4;NFSU2_TR(0x4cca39);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cca3c:{NFSU2_TR(0x4cca3c);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cca41:{NFSU2_TR(0x4cca41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cca42:{NFSU2_TR(0x4cca42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cca47ull));
TAIL_STATIC(0x51ee80u,51e);
}
B4cca47:L4cca47:{c.instructions+=3;NFSU2_TR(0x4cca47);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cca49:{NFSU2_TR(0x4cca49);
__builtin_memmove((R+4),(R+28),4);
}
B4cca4b:{NFSU2_TR(0x4cca4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cca50ull));
TAIL_STATIC(0x543470u,543);
}
B4cca50:L4cca50:{c.instructions+=3;NFSU2_TR(0x4cca50);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cca54:{NFSU2_TR(0x4cca54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cca56:{NFSU2_TR(0x4cca56);
if(r1(R+518)){{goto L4cca69;}}
}
B4cca58:L4cca58:{c.instructions+=3;NFSU2_TR(0x4cca58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cca59:{NFSU2_TR(0x4cca59);
__builtin_memmove((R+4),(R+28),4);
}
B4cca5b:{NFSU2_TR(0x4cca5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cca60ull));
TAIL_STATIC(0x51f440u,51f);
}
B4cca60:L4cca60:{c.instructions+=4;NFSU2_TR(0x4cca60);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4cca61:{NFSU2_TR(0x4cca61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cca62:{NFSU2_TR(0x4cca62);
__builtin_memmove((R+4),(R+28),4);
}
B4cca64:{NFSU2_TR(0x4cca64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cca69ull));
TAIL_STATIC(0x54edd0u,54e);
}
B4cca69:L4cca69:{c.instructions+=3;NFSU2_TR(0x4cca69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cca6c:{NFSU2_TR(0x4cca6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cca6e:{NFSU2_TR(0x4cca6e);
if(r1(R+518)){{goto L4cca7e;}}
}
B4cca70:L4cca70:{c.instructions+=4;NFSU2_TR(0x4cca70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cca73:{NFSU2_TR(0x4cca73);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cca78:{NFSU2_TR(0x4cca78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cca79:{NFSU2_TR(0x4cca79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cca7eull));
TAIL_STATIC(0x51ee80u,51e);
}
B4cca7e:L4cca7e:{c.instructions+=3;NFSU2_TR(0x4cca7e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cca80:{NFSU2_TR(0x4cca80);
__builtin_memmove((R+4),(R+28),4);
}
B4cca82:{NFSU2_TR(0x4cca82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cca87ull));
TAIL_STATIC(0x538500u,538);
}
B4cca87:L4cca87:{c.instructions+=2;NFSU2_TR(0x4cca87);
__builtin_memmove((R+4),(R+24),4);
}
B4cca89:{NFSU2_TR(0x4cca89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cca8eull));
TAIL_STATIC(0x4b2040u,4b2);
}
B4cca8e:L4cca8e:{c.instructions+=6;NFSU2_TR(0x4cca8e);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cca92:{NFSU2_TR(0x4cca92);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cca94:{NFSU2_TR(0x4cca94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cca95:{NFSU2_TR(0x4cca95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cca96:{NFSU2_TR(0x4cca96);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cca98:{NFSU2_TR(0x4cca98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ccabf;}}
}
B4cca9a:L4cca9a:{c.instructions+=5;NFSU2_TR(0x4cca9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cca9d:{NFSU2_TR(0x4cca9d);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccaa2:{NFSU2_TR(0x4ccaa2);
u8 U[4];
w4(U+0,u32(0x31cf7ec2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccaa7:{NFSU2_TR(0x4ccaa7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccaa8:{NFSU2_TR(0x4ccaa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccaadull));
TAIL_STATIC(0x537c00u,537);
}
B4ccaad:L4ccaad:{c.instructions+=6;NFSU2_TR(0x4ccaad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ccab0:{NFSU2_TR(0x4ccab0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccab2:{NFSU2_TR(0x4ccab2);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccab7:{NFSU2_TR(0x4ccab7);
u8 U[4];
w4(U+0,u32(0x7d8c9ee7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccabc:{NFSU2_TR(0x4ccabc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccabd:{NFSU2_TR(0x4ccabd);
{goto L4ccae2;}
}
B4ccabf:L4ccabf:{c.instructions+=5;NFSU2_TR(0x4ccabf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ccac2:{NFSU2_TR(0x4ccac2);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccac7:{NFSU2_TR(0x4ccac7);
u8 U[4];
w4(U+0,u32(0x31cf7ec2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccacc:{NFSU2_TR(0x4ccacc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccacd:{NFSU2_TR(0x4ccacd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccad2ull));
TAIL_STATIC(0x537c00u,537);
}
B4ccad2:L4ccad2:{c.instructions+=5;NFSU2_TR(0x4ccad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ccad5:{NFSU2_TR(0x4ccad5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccad7:{NFSU2_TR(0x4ccad7);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccadc:{NFSU2_TR(0x4ccadc);
u8 U[4];
w4(U+0,u32(0x7d8c9ee7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccae1:{NFSU2_TR(0x4ccae1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccae2:L4ccae2:{c.instructions+=1;NFSU2_TR(0x4ccae2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccae7ull));
TAIL_STATIC(0x537c00u,537);
}
B4ccae7:L4ccae7:{c.instructions+=3;NFSU2_TR(0x4ccae7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4ccaea:{NFSU2_TR(0x4ccaea);
__builtin_memmove((R+4),(R+24),4);
}
B4ccaec:{NFSU2_TR(0x4ccaec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccaf1ull));
TAIL_STATIC(0x4b2190u,4b2);
}
B4ccaf1:L4ccaf1:{c.instructions+=5;NFSU2_TR(0x4ccaf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ccaf5:{NFSU2_TR(0x4ccaf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ccaf6:{NFSU2_TR(0x4ccaf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ccafd:{NFSU2_TR(0x4ccafd);
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
B4ccb00:{NFSU2_TR(0x4ccb00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ccb10:L4ccb10:{c.instructions+=6;NFSU2_TR(0x4ccb10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccb11:{NFSU2_TR(0x4ccb11);
__builtin_memmove((R+24),(R+4),4);
}
B4ccb13:{NFSU2_TR(0x4ccb13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ccb16:{NFSU2_TR(0x4ccb16);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ccb19:{NFSU2_TR(0x4ccb19);
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
B4ccb1b:{NFSU2_TR(0x4ccb1b);
if(r1(R+518)){{goto L4ccb3e;}}
}
B4ccb1d:L4ccb1d:{c.instructions+=3;NFSU2_TR(0x4ccb1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ccb20:{NFSU2_TR(0x4ccb20);
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
B4ccb22:{NFSU2_TR(0x4ccb22);
if(r1(R+518)){{goto L4ccb3e;}}
}
B4ccb24:L4ccb24:{c.instructions+=3;NFSU2_TR(0x4ccb24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ccb27:{NFSU2_TR(0x4ccb27);
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
B4ccb29:{NFSU2_TR(0x4ccb29);
if(r1(R+518)){{goto L4ccb3e;}}
}
B4ccb2b:L4ccb2b:{c.instructions+=3;NFSU2_TR(0x4ccb2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccb2c:{NFSU2_TR(0x4ccb2c);
w4(R+4,u32(0x860a60ull));
}
B4ccb31:{NFSU2_TR(0x4ccb31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccb36ull));
TAIL_STATIC(0x5014c0u,501);
}
B4ccb36:L4ccb36:{c.instructions+=3;NFSU2_TR(0x4ccb36);
__builtin_memmove((R+4),(R+24),4);
}
B4ccb38:{NFSU2_TR(0x4ccb38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ccb39:{NFSU2_TR(0x4ccb39);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cc900u);}goto L4cc900;}
}
B4ccb3e:L4ccb3e:{c.instructions+=2;NFSU2_TR(0x4ccb3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ccb3f:{NFSU2_TR(0x4ccb3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ccb40:L4ccb40:{c.instructions+=6;NFSU2_TR(0x4ccb40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccb41:{NFSU2_TR(0x4ccb41);
__builtin_memmove((R+24),(R+4),4);
}
B4ccb43:{NFSU2_TR(0x4ccb43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ccb46:{NFSU2_TR(0x4ccb46);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ccb49:{NFSU2_TR(0x4ccb49);
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
B4ccb4b:{NFSU2_TR(0x4ccb4b);
if(r1(R+518)){{goto L4ccc01;}}
}
B4ccb51:L4ccb51:{c.instructions+=4;NFSU2_TR(0x4ccb51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccb52:{NFSU2_TR(0x4ccb52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ccb55:{NFSU2_TR(0x4ccb55);
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
B4ccb57:{NFSU2_TR(0x4ccb57);
if(r1(R+518)){{goto L4ccc00;}}
}
B4ccb5d:L4ccb5d:{c.instructions+=3;NFSU2_TR(0x4ccb5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ccb60:{NFSU2_TR(0x4ccb60);
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
B4ccb62:{NFSU2_TR(0x4ccb62);
if(r1(R+518)){{goto L4ccc00;}}
}
B4ccb68:L4ccb68:{c.instructions+=3;NFSU2_TR(0x4ccb68);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ccb6c:{NFSU2_TR(0x4ccb6c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ccb6f:{NFSU2_TR(0x4ccb6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ccbb1;}}
}
B4ccb71:L4ccb71:{c.instructions+=4;NFSU2_TR(0x4ccb71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ccb74:{NFSU2_TR(0x4ccb74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ccb76:{NFSU2_TR(0x4ccb76);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ccb79:{NFSU2_TR(0x4ccb79);
if(r1(R+518)){{goto L4ccb80;}}
}
B4ccb7b:L4ccb7b:{c.instructions+=2;NFSU2_TR(0x4ccb7b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4ccb7e:{NFSU2_TR(0x4ccb7e);
{goto L4ccb82;}
}
B4ccb80:L4ccb80:{c.instructions+=1;NFSU2_TR(0x4ccb80);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ccb82:L4ccb82:{c.instructions+=2;NFSU2_TR(0x4ccb82);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ccb85:{NFSU2_TR(0x4ccb85);
if(r1(R+518)){{goto L4ccbf9;}}
}
B4ccb87:L4ccb87:{c.instructions+=5;NFSU2_TR(0x4ccb87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ccb8a:{NFSU2_TR(0x4ccb8a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccb8c:{NFSU2_TR(0x4ccb8c);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccb8e:{NFSU2_TR(0x4ccb8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccb8f:{NFSU2_TR(0x4ccb8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccb94ull));
TAIL_STATIC(0x50d150u,50d);
}
B4ccb94:L4ccb94:{c.instructions+=3;NFSU2_TR(0x4ccb94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ccb97:{NFSU2_TR(0x4ccb97);
__builtin_memmove((R+4),(R+28),4);
}
B4ccb99:{NFSU2_TR(0x4ccb99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccb9eull));
TAIL_STATIC(0x54eb60u,54e);
}
B4ccb9e:L4ccb9e:{c.instructions+=2;NFSU2_TR(0x4ccb9e);
__builtin_memmove((R+4),(R+24),4);
}
B4ccba0:{NFSU2_TR(0x4ccba0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccba5ull));
TAIL_STATIC(0x4b2040u,4b2);
}
B4ccba5:L4ccba5:{c.instructions+=2;NFSU2_TR(0x4ccba5);
__builtin_memmove((R+4),(R+24),4);
}
B4ccba7:{NFSU2_TR(0x4ccba7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccbacull));
TAIL_STATIC(0x4b2190u,4b2);
}
B4ccbac:L4ccbac:{c.instructions+=3;NFSU2_TR(0x4ccbac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ccbad:{NFSU2_TR(0x4ccbad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ccbae:{NFSU2_TR(0x4ccbae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ccbb1:L4ccbb1:{c.instructions+=2;NFSU2_TR(0x4ccbb1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ccbb4:{NFSU2_TR(0x4ccbb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ccbf9;}}
}
B4ccbb6:L4ccbb6:{c.instructions+=4;NFSU2_TR(0x4ccbb6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccbb7:{NFSU2_TR(0x4ccbb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ccbba:{NFSU2_TR(0x4ccbba);
__builtin_memmove((R+4),(R+12),4);
}
B4ccbbc:{NFSU2_TR(0x4ccbbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccbc1ull));
TAIL_STATIC(0x4aeb20u,4ae);
}
B4ccbc1:L4ccbc1:{c.instructions+=2;NFSU2_TR(0x4ccbc1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ccbc3:{NFSU2_TR(0x4ccbc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ccbf8;}}
}
B4ccbc5:L4ccbc5:{c.instructions+=3;NFSU2_TR(0x4ccbc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ccbc8:{NFSU2_TR(0x4ccbc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ccbca:{NFSU2_TR(0x4ccbca);
if(r1(R+518)){{goto L4ccbd1;}}
}
B4ccbcc:L4ccbcc:{c.instructions+=2;NFSU2_TR(0x4ccbcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4ccbcf:{NFSU2_TR(0x4ccbcf);
{goto L4ccbd3;}
}
B4ccbd1:L4ccbd1:{c.instructions+=1;NFSU2_TR(0x4ccbd1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ccbd3:L4ccbd3:{c.instructions+=3;NFSU2_TR(0x4ccbd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ccbd6:{NFSU2_TR(0x4ccbd6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ccbd8:{NFSU2_TR(0x4ccbd8);
if(r1(R+518)){{goto L4ccbea;}}
}
B4ccbda:L4ccbda:{c.instructions+=5;NFSU2_TR(0x4ccbda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ccbdd:{NFSU2_TR(0x4ccbdd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccbdf:{NFSU2_TR(0x4ccbdf);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccbe1:{NFSU2_TR(0x4ccbe1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccbe2:{NFSU2_TR(0x4ccbe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccbe7ull));
TAIL_STATIC(0x50d150u,50d);
}
B4ccbe7:L4ccbe7:{c.instructions+=1;NFSU2_TR(0x4ccbe7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ccbea:L4ccbea:{c.instructions+=2;NFSU2_TR(0x4ccbea);
__builtin_memmove((R+4),(R+12),4);
}
B4ccbec:{NFSU2_TR(0x4ccbec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccbf1ull));
TAIL_STATIC(0x54eb40u,54e);
}
B4ccbf1:L4ccbf1:{c.instructions+=2;NFSU2_TR(0x4ccbf1);
__builtin_memmove((R+4),(R+24),4);
}
B4ccbf3:{NFSU2_TR(0x4ccbf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccbf8ull));
TAIL_STATIC(0x4b2040u,4b2);
}
B4ccbf8:L4ccbf8:{c.instructions+=1;NFSU2_TR(0x4ccbf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ccbf9:L4ccbf9:{c.instructions+=2;NFSU2_TR(0x4ccbf9);
__builtin_memmove((R+4),(R+24),4);
}
B4ccbfb:{NFSU2_TR(0x4ccbfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccc00ull));
TAIL_STATIC(0x4b2190u,4b2);
}
B4ccc00:L4ccc00:{c.instructions+=1;NFSU2_TR(0x4ccc00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ccc01:L4ccc01:{c.instructions+=2;NFSU2_TR(0x4ccc01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ccc02:{NFSU2_TR(0x4ccc02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ccc10:L4ccc10:{c.instructions+=6;NFSU2_TR(0x4ccc10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ccc14:{NFSU2_TR(0x4ccc14);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ccc19:{NFSU2_TR(0x4ccc19);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccc1a:{NFSU2_TR(0x4ccc1a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccc1b:{NFSU2_TR(0x4ccc1b);
__builtin_memmove((R+24),(R+4),4);
}
B4ccc1d:{NFSU2_TR(0x4ccc1d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4ccd19;}}
}
B4ccc23:L4ccc23:{c.instructions+=1;NFSU2_TR(0x4ccc23);
if(r1(R+518)){{goto L4ccce9;}}
}
B4ccc29:L4ccc29:{c.instructions+=2;NFSU2_TR(0x4ccc29);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ccc2e:{NFSU2_TR(0x4ccc2e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4ccca0;}}
}
B4ccc30:L4ccc30:{c.instructions+=1;NFSU2_TR(0x4ccc30);
if(r1(R+518)){{goto L4ccc83;}}
}
B4ccc32:L4ccc32:{c.instructions+=2;NFSU2_TR(0x4ccc32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1f23c75ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ccc37:{NFSU2_TR(0x4ccc37);
if(r1(R+518)){{goto L4ccc5b;}}
}
B4ccc39:L4ccc39:{c.instructions+=2;NFSU2_TR(0x4ccc39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ccc3e:{NFSU2_TR(0x4ccc3e);
if(r1(R+518)){{goto L4ccccb;}}
}
B4ccc44:L4ccc44:{c.instructions+=2;NFSU2_TR(0x4ccc44);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x34dc1bcfull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x34dc1bcfull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x34dc1bcfull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ccc49:{NFSU2_TR(0x4ccc49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ccec6;}}
}
B4ccc4f:L4ccc4f:{c.instructions+=4;NFSU2_TR(0x4ccc4f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ccc56:{NFSU2_TR(0x4ccc56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ccc57:{NFSU2_TR(0x4ccc57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ccc58:{NFSU2_TR(0x4ccc58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ccc5b:L4ccc5b:{c.instructions+=3;NFSU2_TR(0x4ccc5b);
__builtin_memmove((R+4),(R+24),4);
}
B4ccc5d:{NFSU2_TR(0x4ccc5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ccc64:{NFSU2_TR(0x4ccc64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccc69ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ccb10u);}goto L4ccb10;}
}
B4ccc69:L4ccc69:{c.instructions+=3;NFSU2_TR(0x4ccc69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ccc6c:{NFSU2_TR(0x4ccc6c);
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
B4ccc6e:{NFSU2_TR(0x4ccc6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ccec6;}}
}
B4ccc74:L4ccc74:{c.instructions+=4;NFSU2_TR(0x4ccc74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ccc7e:{NFSU2_TR(0x4ccc7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ccc7f:{NFSU2_TR(0x4ccc7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ccc80:{NFSU2_TR(0x4ccc80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ccc83:L4ccc83:{c.instructions+=2;NFSU2_TR(0x4ccc83);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccc85:{NFSU2_TR(0x4ccc85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccc8aull));
TAIL_STATIC(0x50d180u,50d);
}
B4ccc8a:L4ccc8a:{c.instructions+=3;NFSU2_TR(0x4ccc8a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ccc8d:{NFSU2_TR(0x4ccc8d);
__builtin_memmove((R+4),(R+24),4);
}
B4ccc8f:{NFSU2_TR(0x4ccc8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccc94ull));
TAIL_STATIC(0x4b2040u,4b2);
}
B4ccc94:L4ccc94:{c.instructions+=2;NFSU2_TR(0x4ccc94);
__builtin_memmove((R+4),(R+24),4);
}
B4ccc96:{NFSU2_TR(0x4ccc96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccc9bull));
TAIL_STATIC(0x4b2190u,4b2);
}
B4ccc9b:L4ccc9b:{c.instructions+=3;NFSU2_TR(0x4ccc9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ccc9c:{NFSU2_TR(0x4ccc9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ccc9d:{NFSU2_TR(0x4ccc9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ccca0:L4ccca0:{c.instructions+=2;NFSU2_TR(0x4ccca0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ccca5:{NFSU2_TR(0x4ccca5);
if(r1(R+518)){{goto L4ccccb;}}
}
B4ccca7:L4ccca7:{c.instructions+=2;NFSU2_TR(0x4ccca7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5073ef13ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cccac:{NFSU2_TR(0x4cccac);
if(r1(R+518)){{goto L4ccd82;}}
}
B4cccb2:L4cccb2:{c.instructions+=2;NFSU2_TR(0x4cccb2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x72619778ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cccb7:{NFSU2_TR(0x4cccb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ccec6;}}
}
B4cccbd:L4cccbd:{c.instructions+=3;NFSU2_TR(0x4cccbd);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cccbf:{NFSU2_TR(0x4cccbf);
__builtin_memmove((R+4),(R+24),4);
}
B4cccc1:{NFSU2_TR(0x4cccc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cccc6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ccb40u);}goto L4ccb40;}
}
B4cccc6:L4cccc6:{c.instructions+=3;NFSU2_TR(0x4cccc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cccc7:{NFSU2_TR(0x4cccc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cccc8:{NFSU2_TR(0x4cccc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ccccb:L4ccccb:{c.instructions+=3;NFSU2_TR(0x4ccccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cccce:{NFSU2_TR(0x4cccce);
u8 U[14];
__builtin_memmove((U+6),gp(0x8651ac),4);
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
B4cccd4:{NFSU2_TR(0x4cccd4);
if(r1(R+518)){{goto L4ccec6;}}
}
B4cccda:L4cccda:{c.instructions+=4;NFSU2_TR(0x4cccda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ccce4:{NFSU2_TR(0x4ccce4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ccce5:{NFSU2_TR(0x4ccce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ccce6:{NFSU2_TR(0x4ccce6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ccce9:L4ccce9:{c.instructions+=3;NFSU2_TR(0x4ccce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cccec:{NFSU2_TR(0x4cccec);
u8 U[14];
__builtin_memmove((U+6),gp(0x8651ac),4);
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
B4cccf2:{NFSU2_TR(0x4cccf2);
if(r1(R+518)){{goto L4ccec6;}}
}
B4cccf8:L4cccf8:{c.instructions+=7;NFSU2_TR(0x4cccf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cccfb:{NFSU2_TR(0x4cccfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cccfe:{NFSU2_TR(0x4cccfe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cccff:{NFSU2_TR(0x4cccff);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccd01:{NFSU2_TR(0x4ccd01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccd02:{NFSU2_TR(0x4ccd02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ccd0c:{NFSU2_TR(0x4ccd0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccd11ull));
TAIL_STATIC(0x50d150u,50d);
}
B4ccd11:L4ccd11:{c.instructions+=4;NFSU2_TR(0x4ccd11);
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
B4ccd14:{NFSU2_TR(0x4ccd14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ccd15:{NFSU2_TR(0x4ccd15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ccd16:{NFSU2_TR(0x4ccd16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ccd19:L4ccd19:{c.instructions+=2;NFSU2_TR(0x4ccd19);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ccd1e:{NFSU2_TR(0x4ccd1e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4ccdb4;}}
}
B4ccd24:L4ccd24:{c.instructions+=1;NFSU2_TR(0x4ccd24);
if(r1(R+518)){{goto L4ccdd1;}}
}
B4ccd2a:L4ccd2a:{c.instructions+=2;NFSU2_TR(0x4ccd2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ccd2f:{NFSU2_TR(0x4ccd2f);
if(r1(R+518)){{goto L4ccda6;}}
}
B4ccd31:L4ccd31:{c.instructions+=2;NFSU2_TR(0x4ccd31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ccd36:{NFSU2_TR(0x4ccd36);
if(r1(R+518)){{goto L4ccd82;}}
}
B4ccd38:L4ccd38:{c.instructions+=2;NFSU2_TR(0x4ccd38);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9803f6e2ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ccd3d:{NFSU2_TR(0x4ccd3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ccec6;}}
}
B4ccd43:L4ccd43:{c.instructions+=3;NFSU2_TR(0x4ccd43);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ccd49:{NFSU2_TR(0x4ccd49);
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
B4ccd4b:{NFSU2_TR(0x4ccd4b);
if(r1(R+518)){{goto L4ccec6;}}
}
B4ccd51:L4ccd51:{c.instructions+=5;NFSU2_TR(0x4ccd51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ccd54:{NFSU2_TR(0x4ccd54);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccd55:{NFSU2_TR(0x4ccd55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ccd58:{NFSU2_TR(0x4ccd58);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ccd5b:{NFSU2_TR(0x4ccd5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccd60ull));
TAIL_STATIC(0x54eb80u,54e);
}
B4ccd60:L4ccd60:{c.instructions+=3;NFSU2_TR(0x4ccd60);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ccd63:{NFSU2_TR(0x4ccd63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ccd64:{NFSU2_TR(0x4ccd64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ccd6f;}}
}
B4ccd66:L4ccd66:{c.instructions+=2;NFSU2_TR(0x4ccd66);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+14)));
w4(U+18,u32(u32(r4(R+12))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4ccd69:{NFSU2_TR(0x4ccd69);
if(r1(R+518)){{goto L4ccec6;}}
}
B4ccd6f:L4ccd6f:{c.instructions+=2;NFSU2_TR(0x4ccd6f);
__builtin_memmove((R+4),(R+24),4);
}
B4ccd71:{NFSU2_TR(0x4ccd71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccd76ull));
TAIL_STATIC(0x4b2190u,4b2);
}
B4ccd76:L4ccd76:{c.instructions+=2;NFSU2_TR(0x4ccd76);
__builtin_memmove((R+4),(R+24),4);
}
B4ccd78:{NFSU2_TR(0x4ccd78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccd7dull));
TAIL_STATIC(0x4b2040u,4b2);
}
B4ccd7d:L4ccd7d:{c.instructions+=3;NFSU2_TR(0x4ccd7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ccd7e:{NFSU2_TR(0x4ccd7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ccd7f:{NFSU2_TR(0x4ccd7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ccd82:L4ccd82:{c.instructions+=3;NFSU2_TR(0x4ccd82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ccd85:{NFSU2_TR(0x4ccd85);
u8 U[14];
__builtin_memmove((U+6),gp(0x8651ac),4);
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
B4ccd8b:{NFSU2_TR(0x4ccd8b);
if(r1(R+518)){{goto L4ccec6;}}
}
B4ccd91:L4ccd91:{c.instructions+=3;NFSU2_TR(0x4ccd91);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccd93:{NFSU2_TR(0x4ccd93);
__builtin_memmove((R+4),(R+24),4);
}
B4ccd95:{NFSU2_TR(0x4ccd95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccd9aull));
TAIL_STATIC(0x4b2110u,4b2);
}
B4ccd9a:L4ccd9a:{c.instructions+=2;NFSU2_TR(0x4ccd9a);
__builtin_memmove((R+4),(R+24),4);
}
B4ccd9c:{NFSU2_TR(0x4ccd9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccda1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cc900u);}goto L4cc900;}
}
B4ccda1:L4ccda1:{c.instructions+=3;NFSU2_TR(0x4ccda1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ccda2:{NFSU2_TR(0x4ccda2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ccda3:{NFSU2_TR(0x4ccda3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ccda6:L4ccda6:{c.instructions+=3;NFSU2_TR(0x4ccda6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccda8:{NFSU2_TR(0x4ccda8);
__builtin_memmove((R+4),(R+24),4);
}
B4ccdaa:{NFSU2_TR(0x4ccdaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccdafull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ccb40u);}goto L4ccb40;}
}
B4ccdaf:L4ccdaf:{c.instructions+=3;NFSU2_TR(0x4ccdaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ccdb0:{NFSU2_TR(0x4ccdb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ccdb1:{NFSU2_TR(0x4ccdb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ccdb4:L4ccdb4:{c.instructions+=2;NFSU2_TR(0x4ccdb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc519bfc0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ccdb9:{NFSU2_TR(0x4ccdb9);
if(r1(R+518)){{goto L4cce5c;}}
}
B4ccdbf:L4ccdbf:{c.instructions+=2;NFSU2_TR(0x4ccdbf);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ccdc4:{NFSU2_TR(0x4ccdc4);
if(r1(R+518)){{goto L4cce1d;}}
}
B4ccdc6:L4ccdc6:{c.instructions+=2;NFSU2_TR(0x4ccdc6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd9feec59ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd9feec59ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd9feec59ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ccdcb:{NFSU2_TR(0x4ccdcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ccec6;}}
}
B4ccdd1:L4ccdd1:{c.instructions+=3;NFSU2_TR(0x4ccdd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ccdd4:{NFSU2_TR(0x4ccdd4);
u8 U[14];
__builtin_memmove((U+6),gp(0x8651ac),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ccdda:{NFSU2_TR(0x4ccdda);
if(r1(R+518)){{goto L4ccec6;}}
}
B4ccde0:L4ccde0:{c.instructions+=4;NFSU2_TR(0x4ccde0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ccde6:{NFSU2_TR(0x4ccde6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ccde8:{NFSU2_TR(0x4ccde8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ccdee:{NFSU2_TR(0x4ccdee);
if(r1(R+518)){{goto L4ccdf5;}}
}
B4ccdf0:L4ccdf0:{c.instructions+=2;NFSU2_TR(0x4ccdf0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B4ccdf3:{NFSU2_TR(0x4ccdf3);
{goto L4ccdf7;}
}
B4ccdf5:L4ccdf5:{c.instructions+=1;NFSU2_TR(0x4ccdf5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ccdf7:L4ccdf7:{c.instructions+=2;NFSU2_TR(0x4ccdf7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4ccdfa:{NFSU2_TR(0x4ccdfa);
if(r1(R+518)){{goto L4cce11;}}
}
B4ccdfc:L4ccdfc:{c.instructions+=1;NFSU2_TR(0x4ccdfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cce01ull));
TAIL_STATIC(0x54eb40u,54e);
}
B4cce01:L4cce01:{c.instructions+=5;NFSU2_TR(0x4cce01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cce04:{NFSU2_TR(0x4cce04);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cce06:{NFSU2_TR(0x4cce06);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cce08:{NFSU2_TR(0x4cce08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cce09:{NFSU2_TR(0x4cce09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cce0eull));
TAIL_STATIC(0x50d150u,50d);
}
B4cce0e:L4cce0e:{c.instructions+=1;NFSU2_TR(0x4cce0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cce11:L4cce11:{c.instructions+=2;NFSU2_TR(0x4cce11);
__builtin_memmove((R+4),(R+24),4);
}
B4cce13:{NFSU2_TR(0x4cce13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cce18ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cc900u);}goto L4cc900;}
}
B4cce18:L4cce18:{c.instructions+=3;NFSU2_TR(0x4cce18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cce19:{NFSU2_TR(0x4cce19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cce1a:{NFSU2_TR(0x4cce1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cce1d:L4cce1d:{c.instructions+=3;NFSU2_TR(0x4cce1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cce23:{NFSU2_TR(0x4cce23);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4cce24:{NFSU2_TR(0x4cce24);
if(r1(R+518)){{goto L4cce30;}}
}
B4cce26:L4cce26:{c.instructions+=2;NFSU2_TR(0x4cce26);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4cce27:{NFSU2_TR(0x4cce27);
if(r1(R+518)){{goto L4cce46;}}
}
B4cce29:L4cce29:{c.instructions+=2;NFSU2_TR(0x4cce29);
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
B4cce2a:{NFSU2_TR(0x4cce2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ccec6;}}
}
B4cce30:L4cce30:{c.instructions+=3;NFSU2_TR(0x4cce30);
__builtin_memmove((R+4),(R+24),4);
}
B4cce32:{NFSU2_TR(0x4cce32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cce3c:{NFSU2_TR(0x4cce3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cce41ull));
TAIL_STATIC(0x4977c0u,497);
}
B4cce41:L4cce41:{c.instructions+=3;NFSU2_TR(0x4cce41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cce42:{NFSU2_TR(0x4cce42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cce43:{NFSU2_TR(0x4cce43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cce46:L4cce46:{c.instructions+=3;NFSU2_TR(0x4cce46);
__builtin_memmove((R+4),(R+24),4);
}
B4cce48:{NFSU2_TR(0x4cce48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cce52:{NFSU2_TR(0x4cce52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cce57ull));
TAIL_STATIC(0x497810u,497);
}
B4cce57:L4cce57:{c.instructions+=3;NFSU2_TR(0x4cce57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cce58:{NFSU2_TR(0x4cce58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cce59:{NFSU2_TR(0x4cce59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cce5c:L4cce5c:{c.instructions+=3;NFSU2_TR(0x4cce5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cce5f:{NFSU2_TR(0x4cce5f);
u8 U[14];
__builtin_memmove((U+6),gp(0x8651ac),4);
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
B4cce65:{NFSU2_TR(0x4cce65);
if(r1(R+518)){{goto L4ccec6;}}
}
B4cce67:L4cce67:{c.instructions+=4;NFSU2_TR(0x4cce67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cce6a:{NFSU2_TR(0x4cce6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cce6d:{NFSU2_TR(0x4cce6d);
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
B4cce6f:{NFSU2_TR(0x4cce6f);
if(r1(R+518)){{goto L4ccec6;}}
}
B4cce71:L4cce71:{c.instructions+=3;NFSU2_TR(0x4cce71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cce74:{NFSU2_TR(0x4cce74);
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
B4cce76:{NFSU2_TR(0x4cce76);
if(r1(R+518)){{goto L4ccec6;}}
}
B4cce78:L4cce78:{c.instructions+=3;NFSU2_TR(0x4cce78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cce7b:{NFSU2_TR(0x4cce7b);
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
B4cce7d:{NFSU2_TR(0x4cce7d);
if(r1(R+518)){{goto L4ccec6;}}
}
B4cce7f:L4cce7f:{c.instructions+=12;NFSU2_TR(0x4cce7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cce82:{NFSU2_TR(0x4cce82);
u8 U[4];
w4(U+0,u32(0xf0a6e6b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cce87:{NFSU2_TR(0x4cce87);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cce89:{NFSU2_TR(0x4cce89);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cce8e:{NFSU2_TR(0x4cce8e);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cce93:{NFSU2_TR(0x4cce93);
u8 U[4];
w4(U+0,u32(0x1f23c75ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cce98:{NFSU2_TR(0x4cce98);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cce9d:{NFSU2_TR(0x4cce9d);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccea2:{NFSU2_TR(0x4ccea2);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccea7:{NFSU2_TR(0x4ccea7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccea8:{NFSU2_TR(0x4ccea8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cceaf:{NFSU2_TR(0x4cceaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cceb4ull));
TAIL_STATIC(0x558790u,558);
}
B4cceb4:L4cceb4:{c.instructions+=6;NFSU2_TR(0x4cceb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cceb7:{NFSU2_TR(0x4cceb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cceba:{NFSU2_TR(0x4cceba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccebb:{NFSU2_TR(0x4ccebb);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccebd:{NFSU2_TR(0x4ccebd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccebe:{NFSU2_TR(0x4ccebe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccec3ull));
TAIL_STATIC(0x50d150u,50d);
}
B4ccec3:L4ccec3:{c.instructions+=1;NFSU2_TR(0x4ccec3);
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
B4ccec6:L4ccec6:{c.instructions+=3;NFSU2_TR(0x4ccec6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ccec7:{NFSU2_TR(0x4ccec7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ccec8:{NFSU2_TR(0x4ccec8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cced0:L4cced0:{c.instructions+=8;NFSU2_TR(0x4cced0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cced2:{NFSU2_TR(0x4cced2);
u8 U[4];
w4(U+0,u32(0x774234ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cced7:{NFSU2_TR(0x4cced7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ccedd:{NFSU2_TR(0x4ccedd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccede:{NFSU2_TR(0x4ccede);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ccee5:{NFSU2_TR(0x4ccee5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccee6:{NFSU2_TR(0x4ccee6);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccee8:{NFSU2_TR(0x4ccee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cceedull));
TAIL_STATIC(0x575620u,575);
}
B4cceed:L4cceed:{c.instructions+=5;NFSU2_TR(0x4cceed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ccef0:{NFSU2_TR(0x4ccef0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4ccef4:{NFSU2_TR(0x4ccef4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ccef6:{NFSU2_TR(0x4ccef6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ccefe:{NFSU2_TR(0x4ccefe);
if(r1(R+518)){{goto L4ccf1b;}}
}
B4ccf00:L4ccf00:{c.instructions+=4;NFSU2_TR(0x4ccf00);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ccf04:{NFSU2_TR(0x4ccf04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccf05:{NFSU2_TR(0x4ccf05);
__builtin_memmove((R+4),(R+0),4);
}
B4ccf07:{NFSU2_TR(0x4ccf07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccf0cull));
TAIL_STATIC(0x4b2890u,4b2);
}
B4ccf0c:L4ccf0c:{c.instructions+=4;NFSU2_TR(0x4ccf0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ccf10:{NFSU2_TR(0x4ccf10);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ccf17:{NFSU2_TR(0x4ccf17);
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
B4ccf1a:{NFSU2_TR(0x4ccf1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ccf1b:L4ccf1b:{c.instructions+=5;NFSU2_TR(0x4ccf1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ccf1f:{NFSU2_TR(0x4ccf1f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ccf21:{NFSU2_TR(0x4ccf21);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ccf28:{NFSU2_TR(0x4ccf28);
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
B4ccf2b:{NFSU2_TR(0x4ccf2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ccf30:L4ccf30:{c.instructions+=6;NFSU2_TR(0x4ccf30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccf31:{NFSU2_TR(0x4ccf31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccf32:{NFSU2_TR(0x4ccf32);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ccf36:{NFSU2_TR(0x4ccf36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccf37:{NFSU2_TR(0x4ccf37);
__builtin_memmove((R+24),(R+4),4);
}
B4ccf39:{NFSU2_TR(0x4ccf39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccf3eull));
TAIL_STATIC(0x4b2960u,4b2);
}
B4ccf3e:L4ccf3e:{c.instructions+=6;NFSU2_TR(0x4ccf3e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccf40:{NFSU2_TR(0x4ccf40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ccf43:{NFSU2_TR(0x4ccf43);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ccf47:{NFSU2_TR(0x4ccf47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccf48:{NFSU2_TR(0x4ccf48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccf49:{NFSU2_TR(0x4ccf49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccf4eull));
TAIL_STATIC(0x537980u,537);
}
B4ccf4e:L4ccf4e:{c.instructions+=4;NFSU2_TR(0x4ccf4e);
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
B4ccf51:{NFSU2_TR(0x4ccf51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ccf52:{NFSU2_TR(0x4ccf52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ccf53:{NFSU2_TR(0x4ccf53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ccf60:L4ccf60:{c.instructions+=11;NFSU2_TR(0x4ccf60);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ccf66:{NFSU2_TR(0x4ccf66);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccf68:{NFSU2_TR(0x4ccf68);
u8 U[4];
w4(U+0,u32(0x7742e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccf6d:{NFSU2_TR(0x4ccf6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccf6e:{NFSU2_TR(0x4ccf6e);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4ccf73:{NFSU2_TR(0x4ccf73);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ccf7a:{NFSU2_TR(0x4ccf7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4ccf7d:{NFSU2_TR(0x4ccf7d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ccf80:{NFSU2_TR(0x4ccf80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccf81:{NFSU2_TR(0x4ccf81);
__builtin_memmove((R+24),(R+4),4);
}
B4ccf83:{NFSU2_TR(0x4ccf83);
if(r1(R+518)){TAIL_STATIC(0x4cd2abu,4cd);}
}
B4ccf89:L4ccf89:{c.instructions+=2;NFSU2_TR(0x4ccf89);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ccf8e:{NFSU2_TR(0x4ccf8e);
if(r1(R+518)){TAIL_STATIC(0x4cd2abu,4cd);}
}
B4ccf94:L4ccf94:{c.instructions+=2;NFSU2_TR(0x4ccf94);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ccf97:{NFSU2_TR(0x4ccf97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ccfb8;}}
}
B4ccf99:L4ccf99:{c.instructions+=2;NFSU2_TR(0x4ccf99);
w4(R+4,u32(0x83aab4ull));
}
B4ccf9e:{NFSU2_TR(0x4ccf9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccfa3ull));
TAIL_STATIC(0x502910u,502);
}
B4ccfa3:L4ccfa3:{c.instructions+=3;NFSU2_TR(0x4ccfa3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ccfa6:{NFSU2_TR(0x4ccfa6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ccfa8:{NFSU2_TR(0x4ccfa8);
if(r1(R+518)){{goto L4ccfb8;}}
}
B4ccfaa:L4ccfaa:{c.instructions+=2;NFSU2_TR(0x4ccfaa);
w4(R+4,u32(0x83aab4ull));
}
B4ccfaf:{NFSU2_TR(0x4ccfaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccfb4ull));
TAIL_STATIC(0x502910u,502);
}
B4ccfb4:L4ccfb4:{c.instructions+=1;NFSU2_TR(0x4ccfb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ccfb8:L4ccfb8:{c.instructions+=4;NFSU2_TR(0x4ccfb8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccfb9:{NFSU2_TR(0x4ccfb9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccfba:{NFSU2_TR(0x4ccfba);
w4(R+4,u32(0x83aab4ull));
}
B4ccfbf:{NFSU2_TR(0x4ccfbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccfc4ull));
TAIL_STATIC(0x502910u,502);
}
B4ccfc4:L4ccfc4:{c.instructions+=3;NFSU2_TR(0x4ccfc4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(r2(U+0)));
}
B4ccfc7:{NFSU2_TR(0x4ccfc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccfc8:{NFSU2_TR(0x4ccfc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccfcdull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B4ccfcd:L4ccfcd:{c.instructions+=5;NFSU2_TR(0x4ccfcd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ccfd3:{NFSU2_TR(0x4ccfd3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ccfd6:{NFSU2_TR(0x4ccfd6);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B4ccfd9:{NFSU2_TR(0x4ccfd9);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4ccfdc:{NFSU2_TR(0x4ccfdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4cd02fu,4cd);}
}
B4ccfde:L4ccfde:{c.instructions+=2;NFSU2_TR(0x4ccfde);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccfe0:{NFSU2_TR(0x4ccfe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ccfe5ull));
TAIL_STATIC(0x575620u,575);
}
B4ccfe5:L4ccfe5:{c.instructions+=5;NFSU2_TR(0x4ccfe5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ccfe8:{NFSU2_TR(0x4ccfe8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ccfec:{NFSU2_TR(0x4ccfec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ccfee:{NFSU2_TR(0x4ccfee);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ccff6:{NFSU2_TR(0x4ccff6);
if(r1(R+518)){TAIL_STATIC(0x4cd01fu,4cd);}
}
B4ccff8:L4ccff8:{c.instructions+=2;NFSU2_TR(0x4ccff8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ccffa:{NFSU2_TR(0x4ccffa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
TAIL_STATIC(0x4cd000u,4cd);
}
XIT:NFSU2_TR_EXIT(0x4cc,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
