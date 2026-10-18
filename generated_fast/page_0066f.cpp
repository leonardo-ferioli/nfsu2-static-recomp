#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_65b(u8* __restrict R,Cpu& c);
u32 body_65c(u8* __restrict R,Cpu& c);
u32 body_65e(u8* __restrict R,Cpu& c);
u32 body_660(u8* __restrict R,Cpu& c);
u32 body_661(u8* __restrict R,Cpu& c);
u32 body_665(u8* __restrict R,Cpu& c);
u32 body_666(u8* __restrict R,Cpu& c);
u32 body_66b(u8* __restrict R,Cpu& c);
u32 body_66e(u8* __restrict R,Cpu& c);
u32 body_670(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x66f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x66f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_66f(u8* __restrict R,Cpu& c);
u32 page_66f(Cpu& c){return body_66f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_66f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x66f001:goto L66f001;
case 0x66f004:c.instructions+=1;goto B66f004;
case 0x66f006:goto L66f006;
case 0x66f00b:goto L66f00b;
case 0x66f00d:c.instructions+=2;goto B66f00d;
case 0x66f010:c.instructions+=1;goto B66f010;
case 0x66f016:goto L66f016;
case 0x66f019:goto L66f019;
case 0x66f01d:c.instructions+=1;goto B66f01d;
case 0x66f023:goto L66f023;
case 0x66f027:c.instructions+=2;goto B66f027;
case 0x66f029:c.instructions+=1;goto B66f029;
case 0x66f02b:goto L66f02b;
case 0x66f02f:c.instructions+=2;goto B66f02f;
case 0x66f033:c.instructions+=1;goto B66f033;
case 0x66f035:goto L66f035;
case 0x66f038:c.instructions+=1;goto B66f038;
case 0x66f03b:goto L66f03b;
case 0x66f03f:c.instructions+=1;goto B66f03f;
case 0x66f041:goto L66f041;
case 0x66f043:c.instructions+=1;goto B66f043;
case 0x66f048:goto L66f048;
case 0x66f04b:c.instructions+=12;goto B66f04b;
case 0x66f04e:c.instructions+=11;goto B66f04e;
case 0x66f051:c.instructions+=10;goto B66f051;
case 0x66f054:c.instructions+=9;goto B66f054;
case 0x66f057:c.instructions+=8;goto B66f057;
case 0x66f05a:c.instructions+=7;goto B66f05a;
case 0x66f05d:c.instructions+=6;goto B66f05d;
case 0x66f05f:c.instructions+=5;goto B66f05f;
case 0x66f062:c.instructions+=4;goto B66f062;
case 0x66f064:c.instructions+=3;goto B66f064;
case 0x66f067:c.instructions+=2;goto B66f067;
case 0x66f06a:c.instructions+=1;goto B66f06a;
case 0x66f06c:goto L66f06c;
case 0x66f06f:c.instructions+=2;goto B66f06f;
case 0x66f072:c.instructions+=1;goto B66f072;
case 0x66f074:goto L66f074;
case 0x66f078:c.instructions+=7;goto B66f078;
case 0x66f07a:c.instructions+=6;goto B66f07a;
case 0x66f07e:c.instructions+=5;goto B66f07e;
case 0x66f081:c.instructions+=4;goto B66f081;
case 0x66f084:c.instructions+=3;goto B66f084;
case 0x66f087:c.instructions+=2;goto B66f087;
case 0x66f08a:c.instructions+=1;goto B66f08a;
case 0x66f08c:goto L66f08c;
case 0x66f091:goto L66f091;
case 0x66f093:c.instructions+=2;goto B66f093;
case 0x66f096:c.instructions+=1;goto B66f096;
case 0x66f09c:goto L66f09c;
case 0x66f09f:goto L66f09f;
case 0x66f0a3:c.instructions+=1;goto B66f0a3;
case 0x66f0a9:goto L66f0a9;
case 0x66f0ad:c.instructions+=2;goto B66f0ad;
case 0x66f0af:c.instructions+=1;goto B66f0af;
case 0x66f0b1:goto L66f0b1;
case 0x66f0b3:c.instructions+=2;goto B66f0b3;
case 0x66f0b6:c.instructions+=1;goto B66f0b6;
case 0x66f0b8:goto L66f0b8;
case 0x66f0bb:c.instructions+=2;goto B66f0bb;
case 0x66f0be:c.instructions+=1;goto B66f0be;
case 0x66f0c1:goto L66f0c1;
case 0x66f0c5:c.instructions+=1;goto B66f0c5;
case 0x66f0c7:goto L66f0c7;
case 0x66f0ca:c.instructions+=6;goto B66f0ca;
case 0x66f0cc:c.instructions+=5;goto B66f0cc;
case 0x66f0d2:c.instructions+=4;goto B66f0d2;
case 0x66f0d4:c.instructions+=3;goto B66f0d4;
case 0x66f0d6:c.instructions+=2;goto B66f0d6;
case 0x66f0d9:c.instructions+=1;goto B66f0d9;
case 0x66f0db:goto L66f0db;
case 0x66f0dd:c.instructions+=2;goto B66f0dd;
case 0x66f0de:c.instructions+=1;goto B66f0de;
case 0x66f0e0:goto L66f0e0;
case 0x66f0e2:goto L66f0e2;
case 0x66f0e5:c.instructions+=10;goto B66f0e5;
case 0x66f0e8:c.instructions+=9;goto B66f0e8;
case 0x66f0eb:c.instructions+=8;goto B66f0eb;
case 0x66f0ee:c.instructions+=7;goto B66f0ee;
case 0x66f0f1:c.instructions+=6;goto B66f0f1;
case 0x66f0f3:c.instructions+=5;goto B66f0f3;
case 0x66f0f6:c.instructions+=4;goto B66f0f6;
case 0x66f0f9:c.instructions+=3;goto B66f0f9;
case 0x66f0fa:c.instructions+=2;goto B66f0fa;
case 0x66f0fd:c.instructions+=1;goto B66f0fd;
case 0x66f0ff:goto L66f0ff;
case 0x66f102:c.instructions+=2;goto B66f102;
case 0x66f105:c.instructions+=1;goto B66f105;
case 0x66f107:goto L66f107;
case 0x66f10b:c.instructions+=7;goto B66f10b;
case 0x66f10d:c.instructions+=6;goto B66f10d;
case 0x66f111:c.instructions+=5;goto B66f111;
case 0x66f114:c.instructions+=4;goto B66f114;
case 0x66f117:c.instructions+=3;goto B66f117;
case 0x66f11a:c.instructions+=2;goto B66f11a;
case 0x66f11d:c.instructions+=1;goto B66f11d;
case 0x66f11f:goto L66f11f;
case 0x66f124:goto L66f124;
case 0x66f127:c.instructions+=3;goto B66f127;
case 0x66f129:c.instructions+=2;goto B66f129;
case 0x66f12c:c.instructions+=1;goto B66f12c;
case 0x66f12e:goto L66f12e;
case 0x66f132:c.instructions+=1;goto B66f132;
case 0x66f134:goto L66f134;
case 0x66f137:goto L66f137;
case 0x66f13a:c.instructions+=5;goto B66f13a;
case 0x66f13c:c.instructions+=4;goto B66f13c;
case 0x66f13d:c.instructions+=3;goto B66f13d;
case 0x66f140:c.instructions+=2;goto B66f140;
case 0x66f142:c.instructions+=1;goto B66f142;
case 0x66f148:goto L66f148;
case 0x66f149:c.instructions+=1;goto B66f149;
case 0x66f14b:goto L66f14b;
case 0x66f14c:c.instructions+=1;goto B66f14c;
case 0x66f152:goto L66f152;
case 0x66f154:c.instructions+=2;goto B66f154;
case 0x66f157:c.instructions+=1;goto B66f157;
case 0x66f15d:goto L66f15d;
case 0x66f160:goto L66f160;
case 0x66f162:c.instructions+=2;goto B66f162;
case 0x66f165:c.instructions+=1;goto B66f165;
case 0x66f16b:goto L66f16b;
case 0x66f16d:c.instructions+=1;goto B66f16d;
case 0x66f16f:goto L66f16f;
case 0x66f173:c.instructions+=1;goto B66f173;
case 0x66f175:goto L66f175;
case 0x66f177:c.instructions+=7;goto B66f177;
case 0x66f17a:c.instructions+=6;goto B66f17a;
case 0x66f17d:c.instructions+=5;goto B66f17d;
case 0x66f17f:c.instructions+=4;goto B66f17f;
case 0x66f182:c.instructions+=3;goto B66f182;
case 0x66f183:c.instructions+=2;goto B66f183;
case 0x66f185:c.instructions+=1;goto B66f185;
case 0x66f187:goto L66f187;
case 0x66f189:c.instructions+=6;goto B66f189;
case 0x66f18a:c.instructions+=5;goto B66f18a;
case 0x66f18c:c.instructions+=4;goto B66f18c;
case 0x66f18d:c.instructions+=3;goto B66f18d;
case 0x66f190:c.instructions+=2;goto B66f190;
case 0x66f193:c.instructions+=1;goto B66f193;
case 0x66f195:goto L66f195;
case 0x66f19a:goto L66f19a;
case 0x66f19e:c.instructions+=2;goto B66f19e;
case 0x66f1a2:c.instructions+=1;goto B66f1a2;
case 0x66f1a8:goto L66f1a8;
case 0x66f1aa:c.instructions+=2;goto B66f1aa;
case 0x66f1ad:c.instructions+=1;goto B66f1ad;
case 0x66f1b3:goto L66f1b3;
case 0x66f1b5:c.instructions+=1;goto B66f1b5;
case 0x66f1b7:goto L66f1b7;
case 0x66f1bb:c.instructions+=1;goto B66f1bb;
case 0x66f1bd:goto L66f1bd;
case 0x66f1c0:c.instructions+=2;goto B66f1c0;
case 0x66f1c2:c.instructions+=1;goto B66f1c2;
case 0x66f1c7:goto L66f1c7;
case 0x66f1cb:c.instructions+=6;goto B66f1cb;
case 0x66f1ce:c.instructions+=5;goto B66f1ce;
case 0x66f1d0:c.instructions+=4;goto B66f1d0;
case 0x66f1d3:c.instructions+=3;goto B66f1d3;
case 0x66f1d4:c.instructions+=2;goto B66f1d4;
case 0x66f1d6:c.instructions+=1;goto B66f1d6;
case 0x66f1d8:goto L66f1d8;
case 0x66f1da:c.instructions+=7;goto B66f1da;
case 0x66f1db:c.instructions+=6;goto B66f1db;
case 0x66f1dd:c.instructions+=5;goto B66f1dd;
case 0x66f1e0:c.instructions+=4;goto B66f1e0;
case 0x66f1e3:c.instructions+=3;goto B66f1e3;
case 0x66f1e6:c.instructions+=2;goto B66f1e6;
case 0x66f1e9:c.instructions+=1;goto B66f1e9;
case 0x66f1eb:goto L66f1eb;
case 0x66f1ed:goto L66f1ed;
case 0x66f1ef:c.instructions+=2;goto B66f1ef;
case 0x66f1f2:c.instructions+=1;goto B66f1f2;
case 0x66f1f4:goto L66f1f4;
case 0x66f1f7:goto L66f1f7;
case 0x66f1f9:c.instructions+=2;goto B66f1f9;
case 0x66f1fc:c.instructions+=1;goto B66f1fc;
case 0x66f1fe:goto L66f1fe;
case 0x66f200:c.instructions+=1;goto B66f200;
case 0x66f202:goto L66f202;
case 0x66f206:c.instructions+=1;goto B66f206;
case 0x66f208:goto L66f208;
case 0x66f20a:c.instructions+=5;goto B66f20a;
case 0x66f210:c.instructions+=4;goto B66f210;
case 0x66f212:c.instructions+=3;goto B66f212;
case 0x66f214:c.instructions+=2;goto B66f214;
case 0x66f217:c.instructions+=1;goto B66f217;
case 0x66f219:goto L66f219;
case 0x66f21b:c.instructions+=2;goto B66f21b;
case 0x66f21c:c.instructions+=1;goto B66f21c;
case 0x66f21e:goto L66f21e;
case 0x66f220:goto L66f220;
case 0x66f223:c.instructions+=6;goto B66f223;
case 0x66f226:c.instructions+=5;goto B66f226;
case 0x66f228:c.instructions+=4;goto B66f228;
case 0x66f22b:c.instructions+=3;goto B66f22b;
case 0x66f22c:c.instructions+=2;goto B66f22c;
case 0x66f22e:c.instructions+=1;goto B66f22e;
case 0x66f230:goto L66f230;
case 0x66f232:c.instructions+=6;goto B66f232;
case 0x66f233:c.instructions+=5;goto B66f233;
case 0x66f235:c.instructions+=4;goto B66f235;
case 0x66f236:c.instructions+=3;goto B66f236;
case 0x66f239:c.instructions+=2;goto B66f239;
case 0x66f23c:c.instructions+=1;goto B66f23c;
case 0x66f23e:goto L66f23e;
case 0x66f241:c.instructions+=2;goto B66f241;
case 0x66f244:c.instructions+=1;goto B66f244;
case 0x66f249:goto L66f249;
case 0x66f24e:goto L66f24e;
case 0x66f250:c.instructions+=6;goto B66f250;
case 0x66f251:c.instructions+=5;goto B66f251;
case 0x66f253:c.instructions+=4;goto B66f253;
case 0x66f256:c.instructions+=3;goto B66f256;
case 0x66f25a:c.instructions+=2;goto B66f25a;
case 0x66f25e:c.instructions+=1;goto B66f25e;
case 0x66f260:goto L66f260;
case 0x66f264:c.instructions+=1;goto B66f264;
case 0x66f266:goto L66f266;
case 0x66f26d:c.instructions+=1;goto B66f26d;
case 0x66f26f:goto L66f26f;
case 0x66f272:c.instructions+=7;goto B66f272;
case 0x66f273:c.instructions+=6;goto B66f273;
case 0x66f275:c.instructions+=5;goto B66f275;
case 0x66f277:c.instructions+=4;goto B66f277;
case 0x66f278:c.instructions+=3;goto B66f278;
case 0x66f279:c.instructions+=2;goto B66f279;
case 0x66f27c:c.instructions+=1;goto B66f27c;
case 0x66f281:goto L66f281;
case 0x66f283:c.instructions+=1;goto B66f283;
case 0x66f285:goto L66f285;
case 0x66f28c:c.instructions+=1;goto B66f28c;
case 0x66f28e:goto L66f28e;
case 0x66f291:c.instructions+=5;goto B66f291;
case 0x66f294:c.instructions+=4;goto B66f294;
case 0x66f296:c.instructions+=3;goto B66f296;
case 0x66f297:c.instructions+=2;goto B66f297;
case 0x66f298:c.instructions+=1;goto B66f298;
case 0x66f29a:goto L66f29a;
case 0x66f29c:c.instructions+=1;goto B66f29c;
case 0x66f2a2:goto L66f2a2;
case 0x66f2a5:c.instructions+=1;goto B66f2a5;
case 0x66f2a7:goto L66f2a7;
case 0x66f2aa:c.instructions+=1;goto B66f2aa;
case 0x66f2b0:goto L66f2b0;
case 0x66f2b7:goto L66f2b7;
case 0x66f2b8:c.instructions+=1;goto B66f2b8;
case 0x66f2b9:goto L66f2b9;
case 0x66f2ba:goto L66f2ba;
case 0x66f2bd:c.instructions+=2;goto B66f2bd;
case 0x66f2be:c.instructions+=1;goto B66f2be;
case 0x66f2c1:goto L66f2c1;
case 0x66f2c4:c.instructions+=2;goto B66f2c4;
case 0x66f2c6:c.instructions+=1;goto B66f2c6;
case 0x66f2c8:goto L66f2c8;
case 0x66f2cc:c.instructions+=1;goto B66f2cc;
case 0x66f2ce:goto L66f2ce;
case 0x66f2d0:goto L66f2d0;
case 0x66f2d3:c.instructions+=7;goto B66f2d3;
case 0x66f2d6:c.instructions+=6;goto B66f2d6;
case 0x66f2d8:c.instructions+=5;goto B66f2d8;
case 0x66f2d9:c.instructions+=4;goto B66f2d9;
case 0x66f2db:c.instructions+=3;goto B66f2db;
case 0x66f2de:c.instructions+=2;goto B66f2de;
case 0x66f2e1:c.instructions+=1;goto B66f2e1;
case 0x66f2e7:goto L66f2e7;
case 0x66f2e8:c.instructions+=1;goto B66f2e8;
case 0x66f2ea:goto L66f2ea;
case 0x66f2eb:c.instructions+=1;goto B66f2eb;
case 0x66f2ed:goto L66f2ed;
case 0x66f2f4:c.instructions+=1;goto B66f2f4;
case 0x66f2f6:goto L66f2f6;
case 0x66f2f8:c.instructions+=1;goto B66f2f8;
case 0x66f2fa:goto L66f2fa;
case 0x66f2fc:c.instructions+=3;goto B66f2fc;
case 0x66f2ff:c.instructions+=2;goto B66f2ff;
case 0x66f302:c.instructions+=1;goto B66f302;
case 0x66f305:goto L66f305;
case 0x66f307:c.instructions+=1;goto B66f307;
case 0x66f309:goto L66f309;
case 0x66f30c:c.instructions+=4;goto B66f30c;
case 0x66f30f:c.instructions+=3;goto B66f30f;
case 0x66f312:c.instructions+=2;goto B66f312;
case 0x66f315:c.instructions+=1;goto B66f315;
case 0x66f318:goto L66f318;
case 0x66f31a:c.instructions+=1;goto B66f31a;
case 0x66f31c:goto L66f31c;
case 0x66f31f:c.instructions+=4;goto B66f31f;
case 0x66f322:c.instructions+=3;goto B66f322;
case 0x66f324:c.instructions+=2;goto B66f324;
case 0x66f327:c.instructions+=1;goto B66f327;
case 0x66f32a:goto L66f32a;
case 0x66f32c:c.instructions+=5;goto B66f32c;
case 0x66f32e:c.instructions+=4;goto B66f32e;
case 0x66f331:c.instructions+=3;goto B66f331;
case 0x66f333:c.instructions+=2;goto B66f333;
case 0x66f336:c.instructions+=1;goto B66f336;
case 0x66f338:goto L66f338;
case 0x66f33b:goto L66f33b;
case 0x66f33f:c.instructions+=3;goto B66f33f;
case 0x66f343:c.instructions+=2;goto B66f343;
case 0x66f346:c.instructions+=1;goto B66f346;
case 0x66f348:goto L66f348;
case 0x66f34c:c.instructions+=3;goto B66f34c;
case 0x66f34f:c.instructions+=2;goto B66f34f;
case 0x66f352:c.instructions+=1;goto B66f352;
case 0x66f354:goto L66f354;
case 0x66f359:goto L66f359;
case 0x66f35b:c.instructions+=1;goto B66f35b;
case 0x66f361:goto L66f361;
case 0x66f363:c.instructions+=3;goto B66f363;
case 0x66f366:c.instructions+=2;goto B66f366;
case 0x66f369:c.instructions+=1;goto B66f369;
case 0x66f36c:goto L66f36c;
case 0x66f36e:c.instructions+=1;goto B66f36e;
case 0x66f370:goto L66f370;
case 0x66f373:c.instructions+=4;goto B66f373;
case 0x66f376:c.instructions+=3;goto B66f376;
case 0x66f379:c.instructions+=2;goto B66f379;
case 0x66f37c:c.instructions+=1;goto B66f37c;
case 0x66f37f:goto L66f37f;
case 0x66f381:c.instructions+=1;goto B66f381;
case 0x66f383:goto L66f383;
case 0x66f386:c.instructions+=3;goto B66f386;
case 0x66f389:c.instructions+=2;goto B66f389;
case 0x66f38b:c.instructions+=1;goto B66f38b;
case 0x66f38e:goto L66f38e;
case 0x66f390:c.instructions+=5;goto B66f390;
case 0x66f393:c.instructions+=4;goto B66f393;
case 0x66f395:c.instructions+=3;goto B66f395;
case 0x66f397:c.instructions+=2;goto B66f397;
case 0x66f398:c.instructions+=1;goto B66f398;
case 0x66f39a:goto L66f39a;
case 0x66f39d:goto L66f39d;
case 0x66f3a1:c.instructions+=3;goto B66f3a1;
case 0x66f3a5:c.instructions+=2;goto B66f3a5;
case 0x66f3a8:c.instructions+=1;goto B66f3a8;
case 0x66f3aa:goto L66f3aa;
case 0x66f3ae:c.instructions+=3;goto B66f3ae;
case 0x66f3b1:c.instructions+=2;goto B66f3b1;
case 0x66f3b4:c.instructions+=1;goto B66f3b4;
case 0x66f3b6:goto L66f3b6;
case 0x66f3bb:goto L66f3bb;
case 0x66f3bd:c.instructions+=1;goto B66f3bd;
case 0x66f3c3:goto L66f3c3;
case 0x66f3c5:c.instructions+=3;goto B66f3c5;
case 0x66f3c8:c.instructions+=2;goto B66f3c8;
case 0x66f3cb:c.instructions+=1;goto B66f3cb;
case 0x66f3ce:goto L66f3ce;
case 0x66f3d0:c.instructions+=1;goto B66f3d0;
case 0x66f3d2:goto L66f3d2;
case 0x66f3d5:c.instructions+=4;goto B66f3d5;
case 0x66f3d8:c.instructions+=3;goto B66f3d8;
case 0x66f3db:c.instructions+=2;goto B66f3db;
case 0x66f3de:c.instructions+=1;goto B66f3de;
case 0x66f3e1:goto L66f3e1;
case 0x66f3e3:c.instructions+=1;goto B66f3e3;
case 0x66f3e5:goto L66f3e5;
case 0x66f3e8:c.instructions+=4;goto B66f3e8;
case 0x66f3eb:c.instructions+=3;goto B66f3eb;
case 0x66f3ed:c.instructions+=2;goto B66f3ed;
case 0x66f3f0:c.instructions+=1;goto B66f3f0;
case 0x66f3f3:goto L66f3f3;
case 0x66f3f5:c.instructions+=9;goto B66f3f5;
case 0x66f3f7:c.instructions+=8;goto B66f3f7;
case 0x66f3fa:c.instructions+=7;goto B66f3fa;
case 0x66f3fd:c.instructions+=6;goto B66f3fd;
case 0x66f400:c.instructions+=5;goto B66f400;
case 0x66f403:c.instructions+=4;goto B66f403;
case 0x66f405:c.instructions+=3;goto B66f405;
case 0x66f407:c.instructions+=2;goto B66f407;
case 0x66f40a:c.instructions+=1;goto B66f40a;
case 0x66f40c:goto L66f40c;
case 0x66f40f:goto L66f40f;
case 0x66f413:c.instructions+=3;goto B66f413;
case 0x66f417:c.instructions+=2;goto B66f417;
case 0x66f41a:c.instructions+=1;goto B66f41a;
case 0x66f41c:goto L66f41c;
case 0x66f420:c.instructions+=3;goto B66f420;
case 0x66f423:c.instructions+=2;goto B66f423;
case 0x66f426:c.instructions+=1;goto B66f426;
case 0x66f428:goto L66f428;
case 0x66f42d:goto L66f42d;
case 0x66f430:c.instructions+=2;goto B66f430;
case 0x66f432:c.instructions+=1;goto B66f432;
case 0x66f434:goto L66f434;
case 0x66f438:c.instructions+=1;goto B66f438;
case 0x66f43a:goto L66f43a;
case 0x66f43c:goto L66f43c;
case 0x66f43f:c.instructions+=4;goto B66f43f;
case 0x66f441:c.instructions+=3;goto B66f441;
case 0x66f442:c.instructions+=2;goto B66f442;
case 0x66f444:c.instructions+=1;goto B66f444;
case 0x66f446:goto L66f446;
case 0x66f447:c.instructions+=1;goto B66f447;
case 0x66f449:goto L66f449;
case 0x66f44a:c.instructions+=1;goto B66f44a;
case 0x66f450:goto L66f450;
case 0x66f452:c.instructions+=1;goto B66f452;
case 0x66f458:goto L66f458;
case 0x66f45b:c.instructions+=5;goto B66f45b;
case 0x66f45d:c.instructions+=4;goto B66f45d;
case 0x66f45e:c.instructions+=3;goto B66f45e;
case 0x66f460:c.instructions+=2;goto B66f460;
case 0x66f463:c.instructions+=1;goto B66f463;
case 0x66f466:goto L66f466;
case 0x66f468:c.instructions+=1;goto B66f468;
case 0x66f46a:goto L66f46a;
case 0x66f46c:goto L66f46c;
case 0x66f46e:c.instructions+=5;goto B66f46e;
case 0x66f470:c.instructions+=4;goto B66f470;
case 0x66f473:c.instructions+=3;goto B66f473;
case 0x66f476:c.instructions+=2;goto B66f476;
case 0x66f477:c.instructions+=1;goto B66f477;
case 0x66f479:goto L66f479;
case 0x66f47b:c.instructions+=2;goto B66f47b;
case 0x66f47e:c.instructions+=1;goto B66f47e;
case 0x66f480:goto L66f480;
case 0x66f485:goto L66f485;
case 0x66f487:c.instructions+=1;goto B66f487;
case 0x66f48d:goto L66f48d;
case 0x66f490:c.instructions+=4;goto B66f490;
case 0x66f492:c.instructions+=3;goto B66f492;
case 0x66f493:c.instructions+=2;goto B66f493;
case 0x66f495:c.instructions+=1;goto B66f495;
case 0x66f498:goto L66f498;
case 0x66f49a:c.instructions+=1;goto B66f49a;
case 0x66f49c:goto L66f49c;
case 0x66f49e:goto L66f49e;
case 0x66f4a0:c.instructions+=5;goto B66f4a0;
case 0x66f4a3:c.instructions+=4;goto B66f4a3;
case 0x66f4a5:c.instructions+=3;goto B66f4a5;
case 0x66f4a8:c.instructions+=2;goto B66f4a8;
case 0x66f4a9:c.instructions+=1;goto B66f4a9;
case 0x66f4ab:goto L66f4ab;
case 0x66f4ad:c.instructions+=2;goto B66f4ad;
case 0x66f4ae:c.instructions+=1;goto B66f4ae;
case 0x66f4b0:goto L66f4b0;
case 0x66f4b5:goto L66f4b5;
case 0x66f4b7:c.instructions+=1;goto B66f4b7;
case 0x66f4bd:goto L66f4bd;
case 0x66f4bf:c.instructions+=3;goto B66f4bf;
case 0x66f4c0:c.instructions+=2;goto B66f4c0;
case 0x66f4c2:c.instructions+=1;goto B66f4c2;
case 0x66f4c5:goto L66f4c5;
case 0x66f4c7:c.instructions+=1;goto B66f4c7;
case 0x66f4c9:goto L66f4c9;
case 0x66f4cb:goto L66f4cb;
case 0x66f4cd:c.instructions+=10;goto B66f4cd;
case 0x66f4cf:c.instructions+=9;goto B66f4cf;
case 0x66f4d2:c.instructions+=8;goto B66f4d2;
case 0x66f4d5:c.instructions+=7;goto B66f4d5;
case 0x66f4d8:c.instructions+=6;goto B66f4d8;
case 0x66f4db:c.instructions+=5;goto B66f4db;
case 0x66f4de:c.instructions+=4;goto B66f4de;
case 0x66f4e2:c.instructions+=3;goto B66f4e2;
case 0x66f4e3:c.instructions+=2;goto B66f4e3;
case 0x66f4e5:c.instructions+=1;goto B66f4e5;
case 0x66f4e7:goto L66f4e7;
case 0x66f4e9:c.instructions+=2;goto B66f4e9;
case 0x66f4ea:c.instructions+=1;goto B66f4ea;
case 0x66f4ec:goto L66f4ec;
case 0x66f4f1:goto L66f4f1;
case 0x66f4f3:c.instructions+=11;goto B66f4f3;
case 0x66f4f4:c.instructions+=10;goto B66f4f4;
case 0x66f4f6:c.instructions+=9;goto B66f4f6;
case 0x66f4f7:c.instructions+=8;goto B66f4f7;
case 0x66f4fb:c.instructions+=7;goto B66f4fb;
case 0x66f4fc:c.instructions+=6;goto B66f4fc;
case 0x66f4ff:c.instructions+=5;goto B66f4ff;
case 0x66f500:c.instructions+=4;goto B66f500;
case 0x66f502:c.instructions+=3;goto B66f502;
case 0x66f503:c.instructions+=2;goto B66f503;
case 0x66f505:c.instructions+=1;goto B66f505;
case 0x66f507:goto L66f507;
case 0x66f509:c.instructions+=1;goto B66f509;
case 0x66f50b:goto L66f50b;
case 0x66f50e:c.instructions+=15;goto B66f50e;
case 0x66f514:c.instructions+=14;goto B66f514;
case 0x66f516:c.instructions+=13;goto B66f516;
case 0x66f51a:c.instructions+=12;goto B66f51a;
case 0x66f51c:c.instructions+=11;goto B66f51c;
case 0x66f522:c.instructions+=10;goto B66f522;
case 0x66f524:c.instructions+=9;goto B66f524;
case 0x66f528:c.instructions+=8;goto B66f528;
case 0x66f52a:c.instructions+=7;goto B66f52a;
case 0x66f52b:c.instructions+=6;goto B66f52b;
case 0x66f52e:c.instructions+=5;goto B66f52e;
case 0x66f530:c.instructions+=4;goto B66f530;
case 0x66f531:c.instructions+=3;goto B66f531;
case 0x66f532:c.instructions+=2;goto B66f532;
case 0x66f535:c.instructions+=1;goto B66f535;
case 0x66f53a:goto L66f53a;
case 0x66f53c:c.instructions+=2;goto B66f53c;
case 0x66f53e:c.instructions+=1;goto B66f53e;
case 0x66f544:goto L66f544;
case 0x66f547:c.instructions+=2;goto B66f547;
case 0x66f54b:c.instructions+=1;goto B66f54b;
case 0x66f54d:goto L66f54d;
case 0x66f551:c.instructions+=1;goto B66f551;
case 0x66f557:goto L66f557;
case 0x66f55a:c.instructions+=2;goto B66f55a;
case 0x66f55e:c.instructions+=1;goto B66f55e;
case 0x66f560:goto L66f560;
case 0x66f563:c.instructions+=5;goto B66f563;
case 0x66f564:c.instructions+=4;goto B66f564;
case 0x66f567:c.instructions+=3;goto B66f567;
case 0x66f569:c.instructions+=2;goto B66f569;
case 0x66f56a:c.instructions+=1;goto B66f56a;
case 0x66f56f:goto L66f56f;
case 0x66f572:c.instructions+=1;goto B66f572;
case 0x66f577:goto L66f577;
case 0x66f57a:c.instructions+=2;goto B66f57a;
case 0x66f57c:c.instructions+=1;goto B66f57c;
case 0x66f582:goto L66f582;
case 0x66f585:c.instructions+=1;goto B66f585;
case 0x66f58b:goto L66f58b;
case 0x66f58e:c.instructions+=1;goto B66f58e;
case 0x66f590:goto L66f590;
case 0x66f593:c.instructions+=1;goto B66f593;
case 0x66f595:goto L66f595;
case 0x66f597:c.instructions+=2;goto B66f597;
case 0x66f598:c.instructions+=1;goto B66f598;
case 0x66f59a:goto L66f59a;
case 0x66f59b:c.instructions+=1;goto B66f59b;
case 0x66f59d:goto L66f59d;
case 0x66f59e:c.instructions+=1;goto B66f59e;
case 0x66f5a0:goto L66f5a0;
case 0x66f5a2:c.instructions+=6;goto B66f5a2;
case 0x66f5a5:c.instructions+=5;goto B66f5a5;
case 0x66f5a7:c.instructions+=4;goto B66f5a7;
case 0x66f5a9:c.instructions+=3;goto B66f5a9;
case 0x66f5ab:c.instructions+=2;goto B66f5ab;
case 0x66f5ae:c.instructions+=1;goto B66f5ae;
case 0x66f5b0:goto L66f5b0;
case 0x66f5b3:c.instructions+=2;goto B66f5b3;
case 0x66f5b5:c.instructions+=1;goto B66f5b5;
case 0x66f5b7:goto L66f5b7;
case 0x66f5ba:c.instructions+=2;goto B66f5ba;
case 0x66f5bc:c.instructions+=1;goto B66f5bc;
case 0x66f5c1:goto L66f5c1;
case 0x66f5c3:c.instructions+=1;goto B66f5c3;
case 0x66f5c5:goto L66f5c5;
case 0x66f5c7:c.instructions+=1;goto B66f5c7;
case 0x66f5c9:goto L66f5c9;
case 0x66f5cc:c.instructions+=5;goto B66f5cc;
case 0x66f5d2:c.instructions+=4;goto B66f5d2;
case 0x66f5d4:c.instructions+=3;goto B66f5d4;
case 0x66f5d6:c.instructions+=2;goto B66f5d6;
case 0x66f5d9:c.instructions+=1;goto B66f5d9;
case 0x66f5db:goto L66f5db;
case 0x66f5dd:c.instructions+=1;goto B66f5dd;
case 0x66f5df:goto L66f5df;
case 0x66f5e1:goto L66f5e1;
case 0x66f5e3:c.instructions+=2;goto B66f5e3;
case 0x66f5e5:c.instructions+=1;goto B66f5e5;
case 0x66f5e7:goto L66f5e7;
case 0x66f5ea:c.instructions+=5;goto B66f5ea;
case 0x66f5f0:c.instructions+=4;goto B66f5f0;
case 0x66f5f2:c.instructions+=3;goto B66f5f2;
case 0x66f5f4:c.instructions+=2;goto B66f5f4;
case 0x66f5f7:c.instructions+=1;goto B66f5f7;
case 0x66f5f9:goto L66f5f9;
case 0x66f5fb:goto L66f5fb;
case 0x66f5fd:goto L66f5fd;
case 0x66f600:c.instructions+=2;goto B66f600;
case 0x66f601:c.instructions+=1;goto B66f601;
case 0x66f606:goto L66f606;
case 0x66f60b:goto L66f60b;
case 0x66f612:goto L66f612;
case 0x66f615:c.instructions+=4;goto B66f615;
case 0x66f616:c.instructions+=3;goto B66f616;
case 0x66f617:c.instructions+=2;goto B66f617;
case 0x66f618:c.instructions+=1;goto B66f618;
case 0x66f61b:goto L66f61b;
case 0x66f61d:c.instructions+=8;goto B66f61d;
case 0x66f61e:c.instructions+=7;goto B66f61e;
case 0x66f620:c.instructions+=6;goto B66f620;
case 0x66f621:c.instructions+=5;goto B66f621;
case 0x66f624:c.instructions+=4;goto B66f624;
case 0x66f625:c.instructions+=3;goto B66f625;
case 0x66f627:c.instructions+=2;goto B66f627;
case 0x66f629:c.instructions+=1;goto B66f629;
case 0x66f62b:goto L66f62b;
case 0x66f62e:c.instructions+=4;goto B66f62e;
case 0x66f62f:c.instructions+=3;goto B66f62f;
case 0x66f631:c.instructions+=2;goto B66f631;
case 0x66f634:c.instructions+=1;goto B66f634;
case 0x66f639:goto L66f639;
case 0x66f63b:c.instructions+=1;goto B66f63b;
case 0x66f63d:goto L66f63d;
case 0x66f640:c.instructions+=2;goto B66f640;
case 0x66f643:c.instructions+=1;goto B66f643;
case 0x66f645:goto L66f645;
case 0x66f649:c.instructions+=1;goto B66f649;
case 0x66f64b:goto L66f64b;
case 0x66f64e:c.instructions+=2;goto B66f64e;
case 0x66f650:c.instructions+=1;goto B66f650;
case 0x66f652:goto L66f652;
case 0x66f655:c.instructions+=1;goto B66f655;
case 0x66f657:goto L66f657;
case 0x66f65b:c.instructions+=1;goto B66f65b;
case 0x66f65d:goto L66f65d;
case 0x66f661:c.instructions+=1;goto B66f661;
case 0x66f663:goto L66f663;
case 0x66f665:c.instructions+=2;goto B66f665;
case 0x66f666:c.instructions+=1;goto B66f666;
case 0x66f668:goto L66f668;
case 0x66f669:c.instructions+=1;goto B66f669;
case 0x66f66b:goto L66f66b;
case 0x66f66c:c.instructions+=1;goto B66f66c;
case 0x66f66e:goto L66f66e;
case 0x66f670:c.instructions+=3;goto B66f670;
case 0x66f672:c.instructions+=2;goto B66f672;
case 0x66f674:c.instructions+=1;goto B66f674;
case 0x66f676:goto L66f676;
case 0x66f678:c.instructions+=1;goto B66f678;
case 0x66f67a:goto L66f67a;
case 0x66f67c:c.instructions+=1;goto B66f67c;
case 0x66f67e:goto L66f67e;
case 0x66f680:c.instructions+=6;goto B66f680;
case 0x66f682:c.instructions+=5;goto B66f682;
case 0x66f684:c.instructions+=4;goto B66f684;
case 0x66f687:c.instructions+=3;goto B66f687;
case 0x66f68a:c.instructions+=2;goto B66f68a;
case 0x66f68d:c.instructions+=1;goto B66f68d;
case 0x66f68f:goto L66f68f;
case 0x66f694:goto L66f694;
case 0x66f696:c.instructions+=4;goto B66f696;
case 0x66f697:c.instructions+=3;goto B66f697;
case 0x66f698:c.instructions+=2;goto B66f698;
case 0x66f699:c.instructions+=1;goto B66f699;
case 0x66f69c:goto L66f69c;
case 0x66f69e:c.instructions+=9;goto B66f69e;
case 0x66f69f:c.instructions+=8;goto B66f69f;
case 0x66f6a1:c.instructions+=7;goto B66f6a1;
case 0x66f6a4:c.instructions+=6;goto B66f6a4;
case 0x66f6a8:c.instructions+=5;goto B66f6a8;
case 0x66f6a9:c.instructions+=4;goto B66f6a9;
case 0x66f6aa:c.instructions+=3;goto B66f6aa;
case 0x66f6ab:c.instructions+=2;goto B66f6ab;
case 0x66f6ad:c.instructions+=1;goto B66f6ad;
case 0x66f6b3:goto L66f6b3;
case 0x66f6b6:c.instructions+=2;goto B66f6b6;
case 0x66f6b8:c.instructions+=1;goto B66f6b8;
case 0x66f6be:goto L66f6be;
case 0x66f6c0:c.instructions+=1;goto B66f6c0;
case 0x66f6c5:goto L66f6c5;
case 0x66f6c7:c.instructions+=3;goto B66f6c7;
case 0x66f6c8:c.instructions+=2;goto B66f6c8;
case 0x66f6ce:c.instructions+=1;goto B66f6ce;
case 0x66f6d0:goto L66f6d0;
case 0x66f6d5:c.instructions+=1;goto B66f6d5;
case 0x66f6da:goto L66f6da;
case 0x66f6dc:c.instructions+=1;goto B66f6dc;
case 0x66f6e1:goto L66f6e1;
case 0x66f6e3:c.instructions+=1;goto B66f6e3;
case 0x66f6e9:goto L66f6e9;
case 0x66f6ef:c.instructions+=3;goto B66f6ef;
case 0x66f6f1:c.instructions+=2;goto B66f6f1;
case 0x66f6f3:c.instructions+=1;goto B66f6f3;
case 0x66f6f4:goto L66f6f4;
case 0x66f6f6:goto L66f6f6;
case 0x66f6f9:c.instructions+=3;goto B66f6f9;
case 0x66f6fb:c.instructions+=2;goto B66f6fb;
case 0x66f6fe:c.instructions+=1;goto B66f6fe;
case 0x66f700:goto L66f700;
case 0x66f702:c.instructions+=2;goto B66f702;
case 0x66f703:c.instructions+=1;goto B66f703;
case 0x66f706:goto L66f706;
case 0x66f709:c.instructions+=2;goto B66f709;
case 0x66f70c:c.instructions+=1;goto B66f70c;
case 0x66f711:goto L66f711;
case 0x66f714:c.instructions+=3;goto B66f714;
case 0x66f716:c.instructions+=2;goto B66f716;
case 0x66f717:c.instructions+=1;goto B66f717;
case 0x66f71a:goto L66f71a;
case 0x66f71d:c.instructions+=5;goto B66f71d;
case 0x66f71f:c.instructions+=4;goto B66f71f;
case 0x66f722:c.instructions+=3;goto B66f722;
case 0x66f724:c.instructions+=2;goto B66f724;
case 0x66f725:c.instructions+=1;goto B66f725;
case 0x66f728:goto L66f728;
case 0x66f72b:c.instructions+=3;goto B66f72b;
case 0x66f72c:c.instructions+=2;goto B66f72c;
case 0x66f72e:c.instructions+=1;goto B66f72e;
case 0x66f730:goto L66f730;
case 0x66f732:c.instructions+=4;goto B66f732;
case 0x66f735:c.instructions+=3;goto B66f735;
case 0x66f737:c.instructions+=2;goto B66f737;
case 0x66f738:c.instructions+=1;goto B66f738;
case 0x66f73b:goto L66f73b;
case 0x66f73e:c.instructions+=2;goto B66f73e;
case 0x66f741:c.instructions+=1;goto B66f741;
case 0x66f744:goto L66f744;
case 0x66f747:c.instructions+=5;goto B66f747;
case 0x66f748:c.instructions+=4;goto B66f748;
case 0x66f74a:c.instructions+=3;goto B66f74a;
case 0x66f74c:c.instructions+=2;goto B66f74c;
case 0x66f74d:c.instructions+=1;goto B66f74d;
case 0x66f750:goto L66f750;
case 0x66f752:c.instructions+=3;goto B66f752;
case 0x66f753:c.instructions+=2;goto B66f753;
case 0x66f755:c.instructions+=1;goto B66f755;
case 0x66f757:goto L66f757;
case 0x66f759:c.instructions+=2;goto B66f759;
case 0x66f75a:c.instructions+=1;goto B66f75a;
case 0x66f75d:goto L66f75d;
case 0x66f75f:c.instructions+=2;goto B66f75f;
case 0x66f762:c.instructions+=1;goto B66f762;
case 0x66f765:goto L66f765;
case 0x66f767:c.instructions+=2;goto B66f767;
case 0x66f76e:c.instructions+=1;goto B66f76e;
case 0x66f774:goto L66f774;
case 0x66f776:c.instructions+=2;goto B66f776;
case 0x66f777:c.instructions+=1;goto B66f777;
case 0x66f77a:goto L66f77a;
case 0x66f77c:c.instructions+=1;goto B66f77c;
case 0x66f782:goto L66f782;
case 0x66f785:c.instructions+=2;goto B66f785;
case 0x66f787:c.instructions+=1;goto B66f787;
case 0x66f789:goto L66f789;
case 0x66f78a:c.instructions+=1;goto B66f78a;
case 0x66f78f:goto L66f78f;
case 0x66f793:c.instructions+=1;goto B66f793;
case 0x66f794:goto L66f794;
case 0x66f797:c.instructions+=1;goto B66f797;
case 0x66f79c:goto L66f79c;
case 0x66f79e:c.instructions+=3;goto B66f79e;
case 0x66f79f:c.instructions+=2;goto B66f79f;
case 0x66f7a2:c.instructions+=1;goto B66f7a2;
case 0x66f7a8:goto L66f7a8;
case 0x66f7ac:c.instructions+=1;goto B66f7ac;
case 0x66f7ae:goto L66f7ae;
case 0x66f7b1:c.instructions+=4;goto B66f7b1;
case 0x66f7b4:c.instructions+=3;goto B66f7b4;
case 0x66f7b6:c.instructions+=2;goto B66f7b6;
case 0x66f7b7:c.instructions+=1;goto B66f7b7;
case 0x66f7ba:goto L66f7ba;
case 0x66f7bd:c.instructions+=10;goto B66f7bd;
case 0x66f7c0:c.instructions+=9;goto B66f7c0;
case 0x66f7c3:c.instructions+=8;goto B66f7c3;
case 0x66f7c5:c.instructions+=7;goto B66f7c5;
case 0x66f7c7:c.instructions+=6;goto B66f7c7;
case 0x66f7c9:c.instructions+=5;goto B66f7c9;
case 0x66f7cc:c.instructions+=4;goto B66f7cc;
case 0x66f7ce:c.instructions+=3;goto B66f7ce;
case 0x66f7d0:c.instructions+=2;goto B66f7d0;
case 0x66f7d2:c.instructions+=1;goto B66f7d2;
case 0x66f7d4:goto L66f7d4;
case 0x66f7d7:c.instructions+=3;goto B66f7d7;
case 0x66f7d9:c.instructions+=2;goto B66f7d9;
case 0x66f7da:c.instructions+=1;goto B66f7da;
case 0x66f7dd:goto L66f7dd;
case 0x66f7e0:c.instructions+=6;goto B66f7e0;
case 0x66f7e2:c.instructions+=5;goto B66f7e2;
case 0x66f7e5:c.instructions+=4;goto B66f7e5;
case 0x66f7e8:c.instructions+=3;goto B66f7e8;
case 0x66f7eb:c.instructions+=2;goto B66f7eb;
case 0x66f7ed:c.instructions+=1;goto B66f7ed;
case 0x66f7f0:goto L66f7f0;
case 0x66f7f2:goto L66f7f2;
case 0x66f7f4:c.instructions+=1;goto B66f7f4;
case 0x66f7f7:goto L66f7f7;
case 0x66f7f9:goto L66f7f9;
case 0x66f7fc:c.instructions+=1;goto B66f7fc;
case 0x66f7ff:goto L66f7ff;
case 0x66f802:c.instructions+=8;goto B66f802;
case 0x66f804:c.instructions+=7;goto B66f804;
case 0x66f807:c.instructions+=6;goto B66f807;
case 0x66f809:c.instructions+=5;goto B66f809;
case 0x66f80b:c.instructions+=4;goto B66f80b;
case 0x66f80d:c.instructions+=3;goto B66f80d;
case 0x66f810:c.instructions+=2;goto B66f810;
case 0x66f812:c.instructions+=1;goto B66f812;
case 0x66f814:goto L66f814;
case 0x66f816:c.instructions+=2;goto B66f816;
case 0x66f817:c.instructions+=1;goto B66f817;
case 0x66f81a:goto L66f81a;
case 0x66f81c:c.instructions+=3;goto B66f81c;
case 0x66f81d:c.instructions+=2;goto B66f81d;
case 0x66f81f:c.instructions+=1;goto B66f81f;
case 0x66f821:goto L66f821;
case 0x66f823:c.instructions+=2;goto B66f823;
case 0x66f824:c.instructions+=1;goto B66f824;
case 0x66f827:goto L66f827;
case 0x66f829:c.instructions+=2;goto B66f829;
case 0x66f82c:c.instructions+=1;goto B66f82c;
case 0x66f832:goto L66f832;
case 0x66f834:c.instructions+=3;goto B66f834;
case 0x66f836:c.instructions+=2;goto B66f836;
case 0x66f837:c.instructions+=1;goto B66f837;
case 0x66f83a:goto L66f83a;
case 0x66f83c:c.instructions+=3;goto B66f83c;
case 0x66f83d:c.instructions+=2;goto B66f83d;
case 0x66f83f:c.instructions+=1;goto B66f83f;
case 0x66f841:goto L66f841;
case 0x66f843:c.instructions+=2;goto B66f843;
case 0x66f844:c.instructions+=1;goto B66f844;
case 0x66f847:goto L66f847;
case 0x66f849:c.instructions+=2;goto B66f849;
case 0x66f84c:c.instructions+=1;goto B66f84c;
case 0x66f852:goto L66f852;
case 0x66f854:c.instructions+=3;goto B66f854;
case 0x66f856:c.instructions+=2;goto B66f856;
case 0x66f857:c.instructions+=1;goto B66f857;
case 0x66f85a:goto L66f85a;
case 0x66f85c:c.instructions+=3;goto B66f85c;
case 0x66f85d:c.instructions+=2;goto B66f85d;
case 0x66f85f:c.instructions+=1;goto B66f85f;
case 0x66f861:goto L66f861;
case 0x66f863:c.instructions+=2;goto B66f863;
case 0x66f864:c.instructions+=1;goto B66f864;
case 0x66f867:goto L66f867;
case 0x66f869:c.instructions+=2;goto B66f869;
case 0x66f86c:c.instructions+=1;goto B66f86c;
case 0x66f86f:goto L66f86f;
case 0x66f871:c.instructions+=3;goto B66f871;
case 0x66f873:c.instructions+=2;goto B66f873;
case 0x66f874:c.instructions+=1;goto B66f874;
case 0x66f877:goto L66f877;
case 0x66f879:c.instructions+=3;goto B66f879;
case 0x66f87a:c.instructions+=2;goto B66f87a;
case 0x66f87c:c.instructions+=1;goto B66f87c;
case 0x66f87e:goto L66f87e;
case 0x66f880:c.instructions+=2;goto B66f880;
case 0x66f881:c.instructions+=1;goto B66f881;
case 0x66f884:goto L66f884;
case 0x66f886:c.instructions+=2;goto B66f886;
case 0x66f889:c.instructions+=1;goto B66f889;
case 0x66f88c:goto L66f88c;
case 0x66f88e:c.instructions+=3;goto B66f88e;
case 0x66f890:c.instructions+=2;goto B66f890;
case 0x66f891:c.instructions+=1;goto B66f891;
case 0x66f894:goto L66f894;
case 0x66f896:c.instructions+=1;goto B66f896;
case 0x66f89c:goto L66f89c;
case 0x66f8a0:c.instructions+=1;goto B66f8a0;
case 0x66f8a6:goto L66f8a6;
case 0x66f8a9:c.instructions+=2;goto B66f8a9;
case 0x66f8ac:c.instructions+=1;goto B66f8ac;
case 0x66f8b2:goto L66f8b2;
case 0x66f8b5:c.instructions+=3;goto B66f8b5;
case 0x66f8b7:c.instructions+=2;goto B66f8b7;
case 0x66f8ba:c.instructions+=1;goto B66f8ba;
case 0x66f8bc:goto L66f8bc;
case 0x66f8bf:c.instructions+=3;goto B66f8bf;
case 0x66f8c2:c.instructions+=2;goto B66f8c2;
case 0x66f8c3:c.instructions+=1;goto B66f8c3;
case 0x66f8c8:goto L66f8c8;
case 0x66f8ca:c.instructions+=2;goto B66f8ca;
case 0x66f8cb:c.instructions+=1;goto B66f8cb;
case 0x66f8cd:goto L66f8cd;
case 0x66f8d0:c.instructions+=8;goto B66f8d0;
case 0x66f8d5:c.instructions+=7;goto B66f8d5;
case 0x66f8d6:c.instructions+=6;goto B66f8d6;
case 0x66f8d8:c.instructions+=5;goto B66f8d8;
case 0x66f8db:c.instructions+=4;goto B66f8db;
case 0x66f8dd:c.instructions+=3;goto B66f8dd;
case 0x66f8de:c.instructions+=2;goto B66f8de;
case 0x66f8e1:c.instructions+=1;goto B66f8e1;
case 0x66f8e6:goto L66f8e6;
case 0x66f8e9:c.instructions+=1;goto B66f8e9;
case 0x66f8eb:goto L66f8eb;
case 0x66f8ed:goto L66f8ed;
case 0x66f8ef:c.instructions+=2;goto B66f8ef;
case 0x66f8f2:c.instructions+=1;goto B66f8f2;
case 0x66f8f8:goto L66f8f8;
case 0x66f8fe:c.instructions+=4;goto B66f8fe;
case 0x66f903:c.instructions+=3;goto B66f903;
case 0x66f905:c.instructions+=2;goto B66f905;
case 0x66f908:c.instructions+=1;goto B66f908;
case 0x66f90a:goto L66f90a;
case 0x66f90d:c.instructions+=4;goto B66f90d;
case 0x66f910:c.instructions+=3;goto B66f910;
case 0x66f913:c.instructions+=2;goto B66f913;
case 0x66f914:c.instructions+=1;goto B66f914;
case 0x66f919:goto L66f919;
case 0x66f91b:c.instructions+=2;goto B66f91b;
case 0x66f91c:c.instructions+=1;goto B66f91c;
case 0x66f91e:goto L66f91e;
case 0x66f921:c.instructions+=8;goto B66f921;
case 0x66f926:c.instructions+=7;goto B66f926;
case 0x66f927:c.instructions+=6;goto B66f927;
case 0x66f929:c.instructions+=5;goto B66f929;
case 0x66f92c:c.instructions+=4;goto B66f92c;
case 0x66f92e:c.instructions+=3;goto B66f92e;
case 0x66f92f:c.instructions+=2;goto B66f92f;
case 0x66f932:c.instructions+=1;goto B66f932;
case 0x66f937:goto L66f937;
case 0x66f93a:c.instructions+=1;goto B66f93a;
case 0x66f93c:goto L66f93c;
case 0x66f93e:goto L66f93e;
case 0x66f940:c.instructions+=2;goto B66f940;
case 0x66f946:c.instructions+=1;goto B66f946;
case 0x66f94c:goto L66f94c;
case 0x66f952:c.instructions+=3;goto B66f952;
case 0x66f954:c.instructions+=2;goto B66f954;
case 0x66f957:c.instructions+=1;goto B66f957;
case 0x66f95d:goto L66f95d;
case 0x66f963:c.instructions+=3;goto B66f963;
case 0x66f966:c.instructions+=2;goto B66f966;
case 0x66f967:c.instructions+=1;goto B66f967;
case 0x66f96c:goto L66f96c;
case 0x66f96e:c.instructions+=2;goto B66f96e;
case 0x66f96f:c.instructions+=1;goto B66f96f;
case 0x66f971:goto L66f971;
case 0x66f974:c.instructions+=8;goto B66f974;
case 0x66f979:c.instructions+=7;goto B66f979;
case 0x66f97a:c.instructions+=6;goto B66f97a;
case 0x66f97c:c.instructions+=5;goto B66f97c;
case 0x66f97f:c.instructions+=4;goto B66f97f;
case 0x66f984:c.instructions+=3;goto B66f984;
case 0x66f985:c.instructions+=2;goto B66f985;
case 0x66f988:c.instructions+=1;goto B66f988;
case 0x66f98d:goto L66f98d;
case 0x66f990:c.instructions+=1;goto B66f990;
case 0x66f992:goto L66f992;
case 0x66f994:goto L66f994;
case 0x66f996:c.instructions+=2;goto B66f996;
case 0x66f99c:c.instructions+=1;goto B66f99c;
case 0x66f9a2:goto L66f9a2;
case 0x66f9a5:c.instructions+=3;goto B66f9a5;
case 0x66f9a7:c.instructions+=2;goto B66f9a7;
case 0x66f9aa:c.instructions+=1;goto B66f9aa;
case 0x66f9ac:goto L66f9ac;
case 0x66f9af:c.instructions+=3;goto B66f9af;
case 0x66f9b6:c.instructions+=2;goto B66f9b6;
case 0x66f9b7:c.instructions+=1;goto B66f9b7;
case 0x66f9bc:goto L66f9bc;
case 0x66f9be:c.instructions+=2;goto B66f9be;
case 0x66f9bf:c.instructions+=1;goto B66f9bf;
case 0x66f9c1:goto L66f9c1;
case 0x66f9c4:c.instructions+=8;goto B66f9c4;
case 0x66f9c9:c.instructions+=7;goto B66f9c9;
case 0x66f9ca:c.instructions+=6;goto B66f9ca;
case 0x66f9cc:c.instructions+=5;goto B66f9cc;
case 0x66f9cf:c.instructions+=4;goto B66f9cf;
case 0x66f9d1:c.instructions+=3;goto B66f9d1;
case 0x66f9d2:c.instructions+=2;goto B66f9d2;
case 0x66f9d5:c.instructions+=1;goto B66f9d5;
case 0x66f9da:goto L66f9da;
case 0x66f9dd:c.instructions+=1;goto B66f9dd;
case 0x66f9df:goto L66f9df;
case 0x66f9e1:goto L66f9e1;
case 0x66f9e3:c.instructions+=2;goto B66f9e3;
case 0x66f9e6:c.instructions+=1;goto B66f9e6;
case 0x66f9ec:goto L66f9ec;
case 0x66f9ee:c.instructions+=2;goto B66f9ee;
case 0x66f9ef:c.instructions+=1;goto B66f9ef;
case 0x66f9f2:goto L66f9f2;
case 0x66f9f4:c.instructions+=1;goto B66f9f4;
case 0x66f9fa:goto L66f9fa;
case 0x66f9fc:c.instructions+=4;goto B66f9fc;
case 0x66fa02:c.instructions+=3;goto B66fa02;
case 0x66fa0c:c.instructions+=2;goto B66fa0c;
case 0x66fa0f:c.instructions+=1;goto B66fa0f;
case 0x66fa11:goto L66fa11;
case 0x66fa14:c.instructions+=7;goto B66fa14;
case 0x66fa15:c.instructions+=6;goto B66fa15;
case 0x66fa18:c.instructions+=5;goto B66fa18;
case 0x66fa1e:c.instructions+=4;goto B66fa1e;
case 0x66fa1f:c.instructions+=3;goto B66fa1f;
case 0x66fa20:c.instructions+=2;goto B66fa20;
case 0x66fa22:c.instructions+=1;goto B66fa22;
case 0x66fa27:goto L66fa27;
case 0x66fa29:c.instructions+=1;goto B66fa29;
case 0x66fa2f:goto L66fa2f;
case 0x66fa32:c.instructions+=3;goto B66fa32;
case 0x66fa36:c.instructions+=2;goto B66fa36;
case 0x66fa3c:c.instructions+=1;goto B66fa3c;
case 0x66fa3e:goto L66fa3e;
case 0x66fa40:c.instructions+=3;goto B66fa40;
case 0x66fa46:c.instructions+=2;goto B66fa46;
case 0x66fa49:c.instructions+=1;goto B66fa49;
case 0x66fa4b:goto L66fa4b;
case 0x66fa51:c.instructions+=10;goto B66fa51;
case 0x66fa57:c.instructions+=9;goto B66fa57;
case 0x66fa5b:c.instructions+=8;goto B66fa5b;
case 0x66fa60:c.instructions+=7;goto B66fa60;
case 0x66fa66:c.instructions+=6;goto B66fa66;
case 0x66fa67:c.instructions+=5;goto B66fa67;
case 0x66fa69:c.instructions+=4;goto B66fa69;
case 0x66fa6a:c.instructions+=3;goto B66fa6a;
case 0x66fa6b:c.instructions+=2;goto B66fa6b;
case 0x66fa6d:c.instructions+=1;goto B66fa6d;
case 0x66fa72:goto L66fa72;
case 0x66fa74:c.instructions+=1;goto B66fa74;
case 0x66fa7a:goto L66fa7a;
case 0x66fa7d:c.instructions+=3;goto B66fa7d;
case 0x66fa81:c.instructions+=2;goto B66fa81;
case 0x66fa87:c.instructions+=1;goto B66fa87;
case 0x66fa89:goto L66fa89;
case 0x66fa8f:c.instructions+=7;goto B66fa8f;
case 0x66fa92:c.instructions+=6;goto B66fa92;
case 0x66fa98:c.instructions+=5;goto B66fa98;
case 0x66fa9e:c.instructions+=4;goto B66fa9e;
case 0x66faa2:c.instructions+=3;goto B66faa2;
case 0x66faa3:c.instructions+=2;goto B66faa3;
case 0x66faa6:c.instructions+=1;goto B66faa6;
case 0x66faab:goto L66faab;
case 0x66faad:c.instructions+=3;goto B66faad;
case 0x66faae:c.instructions+=2;goto B66faae;
case 0x66fab1:c.instructions+=1;goto B66fab1;
case 0x66fab7:goto L66fab7;
case 0x66faba:c.instructions+=5;goto B66faba;
case 0x66fabd:c.instructions+=4;goto B66fabd;
case 0x66fabf:c.instructions+=3;goto B66fabf;
case 0x66fac1:c.instructions+=2;goto B66fac1;
case 0x66fac4:c.instructions+=1;goto B66fac4;
case 0x66fac6:goto L66fac6;
case 0x66fac8:goto L66fac8;
case 0x66faca:c.instructions+=1;goto B66faca;
case 0x66facd:goto L66facd;
case 0x66facf:goto L66facf;
case 0x66fad2:c.instructions+=6;goto B66fad2;
case 0x66fad5:c.instructions+=5;goto B66fad5;
case 0x66fad7:c.instructions+=4;goto B66fad7;
case 0x66fad9:c.instructions+=3;goto B66fad9;
case 0x66fadc:c.instructions+=2;goto B66fadc;
case 0x66fade:c.instructions+=1;goto B66fade;
case 0x66fae1:goto L66fae1;
case 0x66fae3:goto L66fae3;
case 0x66fae5:c.instructions+=1;goto B66fae5;
case 0x66fae8:goto L66fae8;
case 0x66faea:goto L66faea;
case 0x66faed:c.instructions+=14;goto B66faed;
case 0x66faf3:c.instructions+=13;goto B66faf3;
case 0x66faf5:c.instructions+=12;goto B66faf5;
case 0x66faf8:c.instructions+=11;goto B66faf8;
case 0x66fafa:c.instructions+=10;goto B66fafa;
case 0x66fafd:c.instructions+=9;goto B66fafd;
case 0x66faff:c.instructions+=8;goto B66faff;
case 0x66fb02:c.instructions+=7;goto B66fb02;
case 0x66fb08:c.instructions+=6;goto B66fb08;
case 0x66fb0a:c.instructions+=5;goto B66fb0a;
case 0x66fb0d:c.instructions+=4;goto B66fb0d;
case 0x66fb10:c.instructions+=3;goto B66fb10;
case 0x66fb12:c.instructions+=2;goto B66fb12;
case 0x66fb15:c.instructions+=1;goto B66fb15;
case 0x66fb17:goto L66fb17;
case 0x66fb18:c.instructions+=1;goto B66fb18;
case 0x66fb1d:goto L66fb1d;
case 0x66fb21:c.instructions+=1;goto B66fb21;
case 0x66fb22:goto L66fb22;
case 0x66fb25:c.instructions+=5;goto B66fb25;
case 0x66fb28:c.instructions+=4;goto B66fb28;
case 0x66fb2e:c.instructions+=3;goto B66fb2e;
case 0x66fb31:c.instructions+=2;goto B66fb31;
case 0x66fb32:c.instructions+=1;goto B66fb32;
case 0x66fb37:goto L66fb37;
case 0x66fb39:c.instructions+=3;goto B66fb39;
case 0x66fb3a:c.instructions+=2;goto B66fb3a;
case 0x66fb40:c.instructions+=1;goto B66fb40;
case 0x66fb46:goto L66fb46;
case 0x66fb4a:c.instructions+=5;goto B66fb4a;
case 0x66fb4d:c.instructions+=4;goto B66fb4d;
case 0x66fb4f:c.instructions+=3;goto B66fb4f;
case 0x66fb56:c.instructions+=2;goto B66fb56;
case 0x66fb5d:c.instructions+=1;goto B66fb5d;
case 0x66fb63:goto L66fb63;
case 0x66fb67:c.instructions+=2;goto B66fb67;
case 0x66fb6d:c.instructions+=1;goto B66fb6d;
case 0x66fb73:goto L66fb73;
case 0x66fb77:c.instructions+=12;goto B66fb77;
case 0x66fb7d:c.instructions+=11;goto B66fb7d;
case 0x66fb80:c.instructions+=10;goto B66fb80;
case 0x66fb83:c.instructions+=9;goto B66fb83;
case 0x66fb85:c.instructions+=8;goto B66fb85;
case 0x66fb88:c.instructions+=7;goto B66fb88;
case 0x66fb8e:c.instructions+=6;goto B66fb8e;
case 0x66fb91:c.instructions+=5;goto B66fb91;
case 0x66fb94:c.instructions+=4;goto B66fb94;
case 0x66fb9a:c.instructions+=3;goto B66fb9a;
case 0x66fb9d:c.instructions+=2;goto B66fb9d;
case 0x66fba1:c.instructions+=1;goto B66fba1;
case 0x66fba3:goto L66fba3;
case 0x66fba6:c.instructions+=1;goto B66fba6;
case 0x66fba8:goto L66fba8;
case 0x66fbab:c.instructions+=1;goto B66fbab;
case 0x66fbae:goto L66fbae;
case 0x66fbb1:c.instructions+=7;goto B66fbb1;
case 0x66fbb3:c.instructions+=6;goto B66fbb3;
case 0x66fbb6:c.instructions+=5;goto B66fbb6;
case 0x66fbb9:c.instructions+=4;goto B66fbb9;
case 0x66fbbc:c.instructions+=3;goto B66fbbc;
case 0x66fbbf:c.instructions+=2;goto B66fbbf;
case 0x66fbc3:c.instructions+=1;goto B66fbc3;
case 0x66fbc5:goto L66fbc5;
case 0x66fbc8:c.instructions+=1;goto B66fbc8;
case 0x66fbca:goto L66fbca;
case 0x66fbcd:c.instructions+=1;goto B66fbcd;
case 0x66fbd0:goto L66fbd0;
case 0x66fbd3:c.instructions+=18;goto B66fbd3;
case 0x66fbd6:c.instructions+=17;goto B66fbd6;
case 0x66fbd7:c.instructions+=16;goto B66fbd7;
case 0x66fbd9:c.instructions+=15;goto B66fbd9;
case 0x66fbdc:c.instructions+=14;goto B66fbdc;
case 0x66fbdf:c.instructions+=13;goto B66fbdf;
case 0x66fbe2:c.instructions+=12;goto B66fbe2;
case 0x66fbe5:c.instructions+=11;goto B66fbe5;
case 0x66fbe8:c.instructions+=10;goto B66fbe8;
case 0x66fbec:c.instructions+=9;goto B66fbec;
case 0x66fbf0:c.instructions+=8;goto B66fbf0;
case 0x66fbf3:c.instructions+=7;goto B66fbf3;
case 0x66fbf4:c.instructions+=6;goto B66fbf4;
case 0x66fbf7:c.instructions+=5;goto B66fbf7;
case 0x66fbf9:c.instructions+=4;goto B66fbf9;
case 0x66fbfa:c.instructions+=3;goto B66fbfa;
case 0x66fbfc:c.instructions+=2;goto B66fbfc;
case 0x66fc00:c.instructions+=1;goto B66fc00;
case 0x66fc05:goto L66fc05;
case 0x66fc07:c.instructions+=1;goto B66fc07;
case 0x66fc0d:goto L66fc0d;
case 0x66fc10:c.instructions+=4;goto B66fc10;
case 0x66fc16:c.instructions+=3;goto B66fc16;
case 0x66fc19:c.instructions+=2;goto B66fc19;
case 0x66fc1c:c.instructions+=1;goto B66fc1c;
case 0x66fc1e:goto L66fc1e;
case 0x66fc21:c.instructions+=1;goto B66fc21;
case 0x66fc23:goto L66fc23;
case 0x66fc26:c.instructions+=1;goto B66fc26;
case 0x66fc29:goto L66fc29;
case 0x66fc2c:c.instructions+=6;goto B66fc2c;
case 0x66fc2d:c.instructions+=5;goto B66fc2d;
case 0x66fc30:c.instructions+=4;goto B66fc30;
case 0x66fc31:c.instructions+=3;goto B66fc31;
case 0x66fc32:c.instructions+=2;goto B66fc32;
case 0x66fc34:c.instructions+=1;goto B66fc34;
case 0x66fc39:goto L66fc39;
case 0x66fc3c:c.instructions+=6;goto B66fc3c;
case 0x66fc3f:c.instructions+=5;goto B66fc3f;
case 0x66fc42:c.instructions+=4;goto B66fc42;
case 0x66fc48:c.instructions+=3;goto B66fc48;
case 0x66fc4b:c.instructions+=2;goto B66fc4b;
case 0x66fc4e:c.instructions+=1;goto B66fc4e;
case 0x66fc50:goto L66fc50;
case 0x66fc53:c.instructions+=1;goto B66fc53;
case 0x66fc55:goto L66fc55;
case 0x66fc58:c.instructions+=1;goto B66fc58;
case 0x66fc5b:goto L66fc5b;
case 0x66fc5e:c.instructions+=7;goto B66fc5e;
case 0x66fc60:c.instructions+=6;goto B66fc60;
case 0x66fc63:c.instructions+=5;goto B66fc63;
case 0x66fc66:c.instructions+=4;goto B66fc66;
case 0x66fc69:c.instructions+=3;goto B66fc69;
case 0x66fc6b:c.instructions+=2;goto B66fc6b;
case 0x66fc6e:c.instructions+=1;goto B66fc6e;
case 0x66fc70:goto L66fc70;
case 0x66fc77:goto L66fc77;
case 0x66fc7a:c.instructions+=9;goto B66fc7a;
case 0x66fc7d:c.instructions+=8;goto B66fc7d;
case 0x66fc7e:c.instructions+=7;goto B66fc7e;
case 0x66fc81:c.instructions+=6;goto B66fc81;
case 0x66fc82:c.instructions+=5;goto B66fc82;
case 0x66fc85:c.instructions+=4;goto B66fc85;
case 0x66fc86:c.instructions+=3;goto B66fc86;
case 0x66fc87:c.instructions+=2;goto B66fc87;
case 0x66fc89:c.instructions+=1;goto B66fc89;
case 0x66fc8e:goto L66fc8e;
case 0x66fc90:c.instructions+=1;goto B66fc90;
case 0x66fc96:goto L66fc96;
case 0x66fc99:c.instructions+=10;goto B66fc99;
case 0x66fc9c:c.instructions+=9;goto B66fc9c;
case 0x66fc9f:c.instructions+=8;goto B66fc9f;
case 0x66fca1:c.instructions+=7;goto B66fca1;
case 0x66fca4:c.instructions+=6;goto B66fca4;
case 0x66fca7:c.instructions+=5;goto B66fca7;
case 0x66fcaa:c.instructions+=4;goto B66fcaa;
case 0x66fcb0:c.instructions+=3;goto B66fcb0;
case 0x66fcb4:c.instructions+=2;goto B66fcb4;
case 0x66fcb6:c.instructions+=1;goto B66fcb6;
case 0x66fcbc:goto L66fcbc;
case 0x66fcc0:c.instructions+=2;goto B66fcc0;
case 0x66fcc6:c.instructions+=1;goto B66fcc6;
case 0x66fccc:goto L66fccc;
case 0x66fcd2:c.instructions+=6;goto B66fcd2;
case 0x66fcd5:c.instructions+=5;goto B66fcd5;
case 0x66fcd8:c.instructions+=4;goto B66fcd8;
case 0x66fcde:c.instructions+=3;goto B66fcde;
case 0x66fce1:c.instructions+=2;goto B66fce1;
case 0x66fce5:c.instructions+=1;goto B66fce5;
case 0x66fce7:goto L66fce7;
case 0x66fcea:c.instructions+=1;goto B66fcea;
case 0x66fcec:goto L66fcec;
case 0x66fcef:c.instructions+=1;goto B66fcef;
case 0x66fcf2:goto L66fcf2;
case 0x66fcf5:c.instructions+=8;goto B66fcf5;
case 0x66fcf8:c.instructions+=7;goto B66fcf8;
case 0x66fcfb:c.instructions+=6;goto B66fcfb;
case 0x66fcfe:c.instructions+=5;goto B66fcfe;
case 0x66fd01:c.instructions+=4;goto B66fd01;
case 0x66fd04:c.instructions+=3;goto B66fd04;
case 0x66fd07:c.instructions+=2;goto B66fd07;
case 0x66fd0b:c.instructions+=1;goto B66fd0b;
case 0x66fd0d:goto L66fd0d;
case 0x66fd10:c.instructions+=1;goto B66fd10;
case 0x66fd12:goto L66fd12;
case 0x66fd15:c.instructions+=1;goto B66fd15;
case 0x66fd18:goto L66fd18;
case 0x66fd1b:c.instructions+=16;goto B66fd1b;
case 0x66fd1e:c.instructions+=15;goto B66fd1e;
case 0x66fd20:c.instructions+=14;goto B66fd20;
case 0x66fd23:c.instructions+=13;goto B66fd23;
case 0x66fd26:c.instructions+=12;goto B66fd26;
case 0x66fd29:c.instructions+=11;goto B66fd29;
case 0x66fd2c:c.instructions+=10;goto B66fd2c;
case 0x66fd2f:c.instructions+=9;goto B66fd2f;
case 0x66fd32:c.instructions+=8;goto B66fd32;
case 0x66fd33:c.instructions+=7;goto B66fd33;
case 0x66fd36:c.instructions+=6;goto B66fd36;
case 0x66fd37:c.instructions+=5;goto B66fd37;
case 0x66fd3a:c.instructions+=4;goto B66fd3a;
case 0x66fd3b:c.instructions+=3;goto B66fd3b;
case 0x66fd3c:c.instructions+=2;goto B66fd3c;
case 0x66fd3e:c.instructions+=1;goto B66fd3e;
case 0x66fd43:goto L66fd43;
case 0x66fd45:c.instructions+=1;goto B66fd45;
case 0x66fd4b:goto L66fd4b;
case 0x66fd4e:c.instructions+=15;goto B66fd4e;
case 0x66fd51:c.instructions+=14;goto B66fd51;
case 0x66fd52:c.instructions+=13;goto B66fd52;
case 0x66fd54:c.instructions+=12;goto B66fd54;
case 0x66fd57:c.instructions+=11;goto B66fd57;
case 0x66fd5a:c.instructions+=10;goto B66fd5a;
case 0x66fd5c:c.instructions+=9;goto B66fd5c;
case 0x66fd5f:c.instructions+=8;goto B66fd5f;
case 0x66fd63:c.instructions+=7;goto B66fd63;
case 0x66fd68:c.instructions+=6;goto B66fd68;
case 0x66fd6c:c.instructions+=5;goto B66fd6c;
case 0x66fd6f:c.instructions+=4;goto B66fd6f;
case 0x66fd70:c.instructions+=3;goto B66fd70;
case 0x66fd73:c.instructions+=2;goto B66fd73;
case 0x66fd74:c.instructions+=1;goto B66fd74;
case 0x66fd79:goto L66fd79;
case 0x66fd7b:c.instructions+=1;goto B66fd7b;
case 0x66fd81:goto L66fd81;
case 0x66fd84:c.instructions+=4;goto B66fd84;
case 0x66fd8a:c.instructions+=3;goto B66fd8a;
case 0x66fd8d:c.instructions+=2;goto B66fd8d;
case 0x66fd91:c.instructions+=1;goto B66fd91;
case 0x66fd93:goto L66fd93;
case 0x66fd96:c.instructions+=1;goto B66fd96;
case 0x66fd98:goto L66fd98;
case 0x66fd9b:c.instructions+=1;goto B66fd9b;
case 0x66fd9e:goto L66fd9e;
case 0x66fda1:c.instructions+=6;goto B66fda1;
case 0x66fda2:c.instructions+=5;goto B66fda2;
case 0x66fda5:c.instructions+=4;goto B66fda5;
case 0x66fda6:c.instructions+=3;goto B66fda6;
case 0x66fda7:c.instructions+=2;goto B66fda7;
case 0x66fda9:c.instructions+=1;goto B66fda9;
case 0x66fdae:goto L66fdae;
case 0x66fdb1:c.instructions+=4;goto B66fdb1;
case 0x66fdb4:c.instructions+=3;goto B66fdb4;
case 0x66fdb7:c.instructions+=2;goto B66fdb7;
case 0x66fdb9:c.instructions+=1;goto B66fdb9;
case 0x66fdbf:goto L66fdbf;
case 0x66fdc2:c.instructions+=3;goto B66fdc2;
case 0x66fdc6:c.instructions+=2;goto B66fdc6;
case 0x66fdcc:c.instructions+=1;goto B66fdcc;
case 0x66fdd2:goto L66fdd2;
case 0x66fdd4:c.instructions+=3;goto B66fdd4;
case 0x66fdda:c.instructions+=2;goto B66fdda;
case 0x66fddd:c.instructions+=1;goto B66fddd;
case 0x66fde3:goto L66fde3;
case 0x66fde9:c.instructions+=4;goto B66fde9;
case 0x66fdef:c.instructions+=3;goto B66fdef;
case 0x66fdf2:c.instructions+=2;goto B66fdf2;
case 0x66fdf5:c.instructions+=1;goto B66fdf5;
case 0x66fdfa:goto L66fdfa;
case 0x66fdfe:c.instructions+=2;goto B66fdfe;
case 0x66fe04:c.instructions+=1;goto B66fe04;
case 0x66fe0a:goto L66fe0a;
case 0x66fe10:c.instructions+=6;goto B66fe10;
case 0x66fe13:c.instructions+=5;goto B66fe13;
case 0x66fe16:c.instructions+=4;goto B66fe16;
case 0x66fe1c:c.instructions+=3;goto B66fe1c;
case 0x66fe1f:c.instructions+=2;goto B66fe1f;
case 0x66fe23:c.instructions+=1;goto B66fe23;
case 0x66fe25:goto L66fe25;
case 0x66fe28:c.instructions+=1;goto B66fe28;
case 0x66fe2a:goto L66fe2a;
case 0x66fe2d:c.instructions+=1;goto B66fe2d;
case 0x66fe30:goto L66fe30;
case 0x66fe33:c.instructions+=8;goto B66fe33;
case 0x66fe36:c.instructions+=7;goto B66fe36;
case 0x66fe39:c.instructions+=6;goto B66fe39;
case 0x66fe3c:c.instructions+=5;goto B66fe3c;
case 0x66fe3f:c.instructions+=4;goto B66fe3f;
case 0x66fe42:c.instructions+=3;goto B66fe42;
case 0x66fe45:c.instructions+=2;goto B66fe45;
case 0x66fe49:c.instructions+=1;goto B66fe49;
case 0x66fe4b:goto L66fe4b;
case 0x66fe4e:c.instructions+=1;goto B66fe4e;
case 0x66fe50:goto L66fe50;
case 0x66fe53:c.instructions+=1;goto B66fe53;
case 0x66fe56:goto L66fe56;
case 0x66fe59:c.instructions+=16;goto B66fe59;
case 0x66fe5c:c.instructions+=15;goto B66fe5c;
case 0x66fe5e:c.instructions+=14;goto B66fe5e;
case 0x66fe61:c.instructions+=13;goto B66fe61;
case 0x66fe64:c.instructions+=12;goto B66fe64;
case 0x66fe67:c.instructions+=11;goto B66fe67;
case 0x66fe6a:c.instructions+=10;goto B66fe6a;
case 0x66fe6d:c.instructions+=9;goto B66fe6d;
case 0x66fe70:c.instructions+=8;goto B66fe70;
case 0x66fe71:c.instructions+=7;goto B66fe71;
case 0x66fe74:c.instructions+=6;goto B66fe74;
case 0x66fe75:c.instructions+=5;goto B66fe75;
case 0x66fe78:c.instructions+=4;goto B66fe78;
case 0x66fe79:c.instructions+=3;goto B66fe79;
case 0x66fe7a:c.instructions+=2;goto B66fe7a;
case 0x66fe7c:c.instructions+=1;goto B66fe7c;
case 0x66fe81:goto L66fe81;
case 0x66fe83:c.instructions+=1;goto B66fe83;
case 0x66fe89:goto L66fe89;
case 0x66fe8c:c.instructions+=15;goto B66fe8c;
case 0x66fe8f:c.instructions+=14;goto B66fe8f;
case 0x66fe90:c.instructions+=13;goto B66fe90;
case 0x66fe92:c.instructions+=12;goto B66fe92;
case 0x66fe95:c.instructions+=11;goto B66fe95;
case 0x66fe98:c.instructions+=10;goto B66fe98;
case 0x66fe9a:c.instructions+=9;goto B66fe9a;
case 0x66fe9d:c.instructions+=8;goto B66fe9d;
case 0x66fea1:c.instructions+=7;goto B66fea1;
case 0x66fea6:c.instructions+=6;goto B66fea6;
case 0x66feaa:c.instructions+=5;goto B66feaa;
case 0x66fead:c.instructions+=4;goto B66fead;
case 0x66feae:c.instructions+=3;goto B66feae;
case 0x66feb1:c.instructions+=2;goto B66feb1;
case 0x66feb2:c.instructions+=1;goto B66feb2;
case 0x66feb7:goto L66feb7;
case 0x66feb9:c.instructions+=1;goto B66feb9;
case 0x66febf:goto L66febf;
case 0x66fec2:c.instructions+=4;goto B66fec2;
case 0x66fec8:c.instructions+=3;goto B66fec8;
case 0x66fecb:c.instructions+=2;goto B66fecb;
case 0x66fecf:c.instructions+=1;goto B66fecf;
case 0x66fed1:goto L66fed1;
case 0x66fed4:c.instructions+=1;goto B66fed4;
case 0x66fed6:goto L66fed6;
case 0x66fed9:c.instructions+=1;goto B66fed9;
case 0x66fedc:goto L66fedc;
case 0x66fedf:c.instructions+=6;goto B66fedf;
case 0x66fee0:c.instructions+=5;goto B66fee0;
case 0x66fee3:c.instructions+=4;goto B66fee3;
case 0x66fee4:c.instructions+=3;goto B66fee4;
case 0x66fee5:c.instructions+=2;goto B66fee5;
case 0x66fee7:c.instructions+=1;goto B66fee7;
case 0x66feec:goto L66feec;
case 0x66feef:c.instructions+=2;goto B66feef;
case 0x66fef2:c.instructions+=1;goto B66fef2;
case 0x66fef5:goto L66fef5;
case 0x66fef7:c.instructions+=1;goto B66fef7;
case 0x66fefd:goto L66fefd;
case 0x66ff00:c.instructions+=3;goto B66ff00;
case 0x66ff04:c.instructions+=2;goto B66ff04;
case 0x66ff08:c.instructions+=1;goto B66ff08;
case 0x66ff0e:goto L66ff0e;
case 0x66ff12:c.instructions+=5;goto B66ff12;
case 0x66ff15:c.instructions+=4;goto B66ff15;
case 0x66ff18:c.instructions+=3;goto B66ff18;
case 0x66ff1b:c.instructions+=2;goto B66ff1b;
case 0x66ff1f:c.instructions+=1;goto B66ff1f;
case 0x66ff24:goto L66ff24;
case 0x66ff28:c.instructions+=2;goto B66ff28;
case 0x66ff2e:c.instructions+=1;goto B66ff2e;
case 0x66ff34:goto L66ff34;
case 0x66ff3a:c.instructions+=6;goto B66ff3a;
case 0x66ff3d:c.instructions+=5;goto B66ff3d;
case 0x66ff40:c.instructions+=4;goto B66ff40;
case 0x66ff46:c.instructions+=3;goto B66ff46;
case 0x66ff49:c.instructions+=2;goto B66ff49;
case 0x66ff4d:c.instructions+=1;goto B66ff4d;
case 0x66ff4f:goto L66ff4f;
case 0x66ff52:c.instructions+=1;goto B66ff52;
case 0x66ff54:goto L66ff54;
case 0x66ff57:c.instructions+=1;goto B66ff57;
case 0x66ff5a:goto L66ff5a;
case 0x66ff5d:c.instructions+=8;goto B66ff5d;
case 0x66ff60:c.instructions+=7;goto B66ff60;
case 0x66ff63:c.instructions+=6;goto B66ff63;
case 0x66ff66:c.instructions+=5;goto B66ff66;
case 0x66ff69:c.instructions+=4;goto B66ff69;
case 0x66ff6c:c.instructions+=3;goto B66ff6c;
case 0x66ff6f:c.instructions+=2;goto B66ff6f;
case 0x66ff73:c.instructions+=1;goto B66ff73;
case 0x66ff75:goto L66ff75;
case 0x66ff78:c.instructions+=1;goto B66ff78;
case 0x66ff7a:goto L66ff7a;
case 0x66ff7d:c.instructions+=1;goto B66ff7d;
case 0x66ff80:goto L66ff80;
case 0x66ff83:c.instructions+=16;goto B66ff83;
case 0x66ff86:c.instructions+=15;goto B66ff86;
case 0x66ff88:c.instructions+=14;goto B66ff88;
case 0x66ff8b:c.instructions+=13;goto B66ff8b;
case 0x66ff8e:c.instructions+=12;goto B66ff8e;
case 0x66ff91:c.instructions+=11;goto B66ff91;
case 0x66ff94:c.instructions+=10;goto B66ff94;
case 0x66ff97:c.instructions+=9;goto B66ff97;
case 0x66ff9a:c.instructions+=8;goto B66ff9a;
case 0x66ff9b:c.instructions+=7;goto B66ff9b;
case 0x66ff9e:c.instructions+=6;goto B66ff9e;
case 0x66ff9f:c.instructions+=5;goto B66ff9f;
case 0x66ffa2:c.instructions+=4;goto B66ffa2;
case 0x66ffa3:c.instructions+=3;goto B66ffa3;
case 0x66ffa4:c.instructions+=2;goto B66ffa4;
case 0x66ffa6:c.instructions+=1;goto B66ffa6;
case 0x66ffab:goto L66ffab;
case 0x66ffad:c.instructions+=1;goto B66ffad;
case 0x66ffb3:goto L66ffb3;
case 0x66ffb6:c.instructions+=15;goto B66ffb6;
case 0x66ffb9:c.instructions+=14;goto B66ffb9;
case 0x66ffba:c.instructions+=13;goto B66ffba;
case 0x66ffbc:c.instructions+=12;goto B66ffbc;
case 0x66ffbf:c.instructions+=11;goto B66ffbf;
case 0x66ffc2:c.instructions+=10;goto B66ffc2;
case 0x66ffc4:c.instructions+=9;goto B66ffc4;
case 0x66ffc7:c.instructions+=8;goto B66ffc7;
case 0x66ffcb:c.instructions+=7;goto B66ffcb;
case 0x66ffd0:c.instructions+=6;goto B66ffd0;
case 0x66ffd4:c.instructions+=5;goto B66ffd4;
case 0x66ffd7:c.instructions+=4;goto B66ffd7;
case 0x66ffd8:c.instructions+=3;goto B66ffd8;
case 0x66ffdb:c.instructions+=2;goto B66ffdb;
case 0x66ffdc:c.instructions+=1;goto B66ffdc;
case 0x66ffe1:goto L66ffe1;
case 0x66ffe3:c.instructions+=1;goto B66ffe3;
case 0x66ffe9:goto L66ffe9;
case 0x66ffec:c.instructions+=4;goto B66ffec;
case 0x66fff2:c.instructions+=3;goto B66fff2;
case 0x66fff5:c.instructions+=2;goto B66fff5;
case 0x66fff9:c.instructions+=1;goto B66fff9;
case 0x66fffb:goto L66fffb;
case 0x66fffe:c.instructions+=1;goto B66fffe;
default:missing_instruction(c.pc);}
B66f001:L66f001:{c.instructions+=2;NFSU2_TR(0x66f001);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66f004:{NFSU2_TR(0x66f004);
if(r1(R+512)){TAIL_STATIC(0x66efa3u,66e);}
}
B66f006:L66f006:{c.instructions+=1;NFSU2_TR(0x66f006);
{goto L66f23e;}
}
B66f00b:L66f00b:{c.instructions+=3;NFSU2_TR(0x66f00b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66f00d:{NFSU2_TR(0x66f00d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f010:{NFSU2_TR(0x66f010);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f23e;}}
}
B66f016:L66f016:{c.instructions+=1;NFSU2_TR(0x66f016);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66f019:L66f019:{c.instructions+=2;NFSU2_TR(0x66f019);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f01d:{NFSU2_TR(0x66f01d);
if(r1(R+518)){{goto L66f23e;}}
}
B66f023:L66f023:{c.instructions+=3;NFSU2_TR(0x66f023);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f027:{NFSU2_TR(0x66f027);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f029:{NFSU2_TR(0x66f029);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f074;}}
}
B66f02b:L66f02b:{c.instructions+=3;NFSU2_TR(0x66f02b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f02f:{NFSU2_TR(0x66f02f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f033:{NFSU2_TR(0x66f033);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f06c;}}
}
B66f035:L66f035:{c.instructions+=2;NFSU2_TR(0x66f035);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f038:{NFSU2_TR(0x66f038);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B66f03b:L66f03b:{c.instructions+=2;NFSU2_TR(0x66f03b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f03f:{NFSU2_TR(0x66f03f);
if(r1(R+518)){{goto L66f06c;}}
}
B66f041:L66f041:{c.instructions+=2;NFSU2_TR(0x66f041);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66f043:{NFSU2_TR(0x66f043);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f048ull));
TAIL_STATIC(0x75dd28u,75d);
}
B66f048:L66f048:{c.instructions+=13;NFSU2_TR(0x66f048);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f04b:{NFSU2_TR(0x66f04b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66f04e:{NFSU2_TR(0x66f04e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f051:{NFSU2_TR(0x66f051);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f054:{NFSU2_TR(0x66f054);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66f057:{NFSU2_TR(0x66f057);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66f05a:{NFSU2_TR(0x66f05a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66f05d:{NFSU2_TR(0x66f05d);
__builtin_memmove((R+0),(R+12),4);
}
B66f05f:{NFSU2_TR(0x66f05f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66f062:{NFSU2_TR(0x66f062);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B66f064:{NFSU2_TR(0x66f064);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f067:{NFSU2_TR(0x66f067);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66f06a:{NFSU2_TR(0x66f06a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f03bu);}goto L66f03b;}}
}
B66f06c:L66f06c:{c.instructions+=3;NFSU2_TR(0x66f06c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f06f:{NFSU2_TR(0x66f06f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B66f072:{NFSU2_TR(0x66f072);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f02bu);}goto L66f02b;}}
}
B66f074:L66f074:{c.instructions+=8;NFSU2_TR(0x66f074);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f078:{NFSU2_TR(0x66f078);
__builtin_memmove((R+0),(R+12),4);
}
B66f07a:{NFSU2_TR(0x66f07a);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B66f07e:{NFSU2_TR(0x66f07e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f081:{NFSU2_TR(0x66f081);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B66f084:{NFSU2_TR(0x66f084);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f087:{NFSU2_TR(0x66f087);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66f08a:{NFSU2_TR(0x66f08a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f019u);}goto L66f019;}}
}
B66f08c:L66f08c:{c.instructions+=1;NFSU2_TR(0x66f08c);
{goto L66f23e;}
}
B66f091:L66f091:{c.instructions+=3;NFSU2_TR(0x66f091);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66f093:{NFSU2_TR(0x66f093);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f096:{NFSU2_TR(0x66f096);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f23e;}}
}
B66f09c:L66f09c:{c.instructions+=1;NFSU2_TR(0x66f09c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f09f:L66f09f:{c.instructions+=2;NFSU2_TR(0x66f09f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f0a3:{NFSU2_TR(0x66f0a3);
if(r1(R+518)){{goto L66f23e;}}
}
B66f0a9:L66f0a9:{c.instructions+=3;NFSU2_TR(0x66f0a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f0ad:{NFSU2_TR(0x66f0ad);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f0af:{NFSU2_TR(0x66f0af);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f107;}}
}
B66f0b1:L66f0b1:{c.instructions+=3;NFSU2_TR(0x66f0b1);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66f0b3:{NFSU2_TR(0x66f0b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f0b6:{NFSU2_TR(0x66f0b6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f0ff;}}
}
B66f0b8:L66f0b8:{c.instructions+=3;NFSU2_TR(0x66f0b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f0bb:{NFSU2_TR(0x66f0bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66f0be:{NFSU2_TR(0x66f0be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f0c1:L66f0c1:{c.instructions+=2;NFSU2_TR(0x66f0c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f0c5:{NFSU2_TR(0x66f0c5);
if(r1(R+518)){{goto L66f0ff;}}
}
B66f0c7:L66f0c7:{c.instructions+=7;NFSU2_TR(0x66f0c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f0ca:{NFSU2_TR(0x66f0ca);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66f0cc:{NFSU2_TR(0x66f0cc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66f0d2:{NFSU2_TR(0x66f0d2);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B66f0d4:{NFSU2_TR(0x66f0d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66f0d6:{NFSU2_TR(0x66f0d6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66f0d9:{NFSU2_TR(0x66f0d9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L66f0e0;}}
}
B66f0db:L66f0db:{c.instructions+=3;NFSU2_TR(0x66f0db);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66f0dd:{NFSU2_TR(0x66f0dd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66f0de:{NFSU2_TR(0x66f0de);
{goto L66f0e2;}
}
B66f0e0:L66f0e0:{c.instructions+=1;NFSU2_TR(0x66f0e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66f0e2:L66f0e2:{c.instructions+=11;NFSU2_TR(0x66f0e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66f0e5:{NFSU2_TR(0x66f0e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66f0e8:{NFSU2_TR(0x66f0e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f0eb:{NFSU2_TR(0x66f0eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B66f0ee:{NFSU2_TR(0x66f0ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66f0f1:{NFSU2_TR(0x66f0f1);
__builtin_memmove((R+0),(R+12),4);
}
B66f0f3:{NFSU2_TR(0x66f0f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66f0f6:{NFSU2_TR(0x66f0f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f0f9:{NFSU2_TR(0x66f0f9);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B66f0fa:{NFSU2_TR(0x66f0fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B66f0fd:{NFSU2_TR(0x66f0fd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f0c1u);}goto L66f0c1;}}
}
B66f0ff:L66f0ff:{c.instructions+=3;NFSU2_TR(0x66f0ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f102:{NFSU2_TR(0x66f102);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B66f105:{NFSU2_TR(0x66f105);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f0b1u);}goto L66f0b1;}}
}
B66f107:L66f107:{c.instructions+=8;NFSU2_TR(0x66f107);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f10b:{NFSU2_TR(0x66f10b);
__builtin_memmove((R+0),(R+12),4);
}
B66f10d:{NFSU2_TR(0x66f10d);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B66f111:{NFSU2_TR(0x66f111);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f114:{NFSU2_TR(0x66f114);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B66f117:{NFSU2_TR(0x66f117);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f11a:{NFSU2_TR(0x66f11a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66f11d:{NFSU2_TR(0x66f11d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f09fu);}goto L66f09f;}}
}
B66f11f:L66f11f:{c.instructions+=1;NFSU2_TR(0x66f11f);
{goto L66f23e;}
}
B66f124:L66f124:{c.instructions+=4;NFSU2_TR(0x66f124);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66f127:{NFSU2_TR(0x66f127);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f129:{NFSU2_TR(0x66f129);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f12c:{NFSU2_TR(0x66f12c);
if(r1(R+518)){{goto L66f134;}}
}
B66f12e:L66f12e:{c.instructions+=2;NFSU2_TR(0x66f12e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffffffffull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f132:{NFSU2_TR(0x66f132);
if(r1(R+518)){{goto L66f137;}}
}
B66f134:L66f134:{c.instructions+=1;NFSU2_TR(0x66f134);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f137:L66f137:{c.instructions+=6;NFSU2_TR(0x66f137);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66f13a:{NFSU2_TR(0x66f13a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f13c:{NFSU2_TR(0x66f13c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66f13d:{NFSU2_TR(0x66f13d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f140:{NFSU2_TR(0x66f140);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B66f142:{NFSU2_TR(0x66f142);
if(r1(R+518)){{goto L66f1ed;}}
}
B66f148:L66f148:{c.instructions+=2;NFSU2_TR(0x66f148);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66f149:{NFSU2_TR(0x66f149);
if(r1(R+518)){{goto L66f19a;}}
}
B66f14b:L66f14b:{c.instructions+=2;NFSU2_TR(0x66f14b);
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
B66f14c:{NFSU2_TR(0x66f14c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x66ef4au,66e);}
}
B66f152:L66f152:{c.instructions+=3;NFSU2_TR(0x66f152);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B66f154:{NFSU2_TR(0x66f154);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f157:{NFSU2_TR(0x66f157);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f23e;}}
}
B66f15d:L66f15d:{c.instructions+=1;NFSU2_TR(0x66f15d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f160:L66f160:{c.instructions+=3;NFSU2_TR(0x66f160);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66f162:{NFSU2_TR(0x66f162);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f165:{NFSU2_TR(0x66f165);
if(r1(R+518)){{goto L66f23e;}}
}
B66f16b:L66f16b:{c.instructions+=2;NFSU2_TR(0x66f16b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66f16d:{NFSU2_TR(0x66f16d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f187;}}
}
B66f16f:L66f16f:{c.instructions+=2;NFSU2_TR(0x66f16f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f173:{NFSU2_TR(0x66f173);
if(r1(R+518)){{goto L66f187;}}
}
B66f175:L66f175:{c.instructions+=8;NFSU2_TR(0x66f175);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B66f177:{NFSU2_TR(0x66f177);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B66f17a:{NFSU2_TR(0x66f17a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f17d:{NFSU2_TR(0x66f17d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B66f17f:{NFSU2_TR(0x66f17f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B66f182:{NFSU2_TR(0x66f182);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66f183:{NFSU2_TR(0x66f183);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B66f185:{NFSU2_TR(0x66f185);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f16fu);}goto L66f16f;}}
}
B66f187:L66f187:{c.instructions+=7;NFSU2_TR(0x66f187);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f189:{NFSU2_TR(0x66f189);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66f18a:{NFSU2_TR(0x66f18a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B66f18c:{NFSU2_TR(0x66f18c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B66f18d:{NFSU2_TR(0x66f18d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B66f190:{NFSU2_TR(0x66f190);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B66f193:{NFSU2_TR(0x66f193);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f160u);}goto L66f160;}}
}
B66f195:L66f195:{c.instructions+=1;NFSU2_TR(0x66f195);
{goto L66f23e;}
}
B66f19a:L66f19a:{c.instructions+=3;NFSU2_TR(0x66f19a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f19e:{NFSU2_TR(0x66f19e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f1a2:{NFSU2_TR(0x66f1a2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f23e;}}
}
B66f1a8:L66f1a8:{c.instructions+=3;NFSU2_TR(0x66f1a8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66f1aa:{NFSU2_TR(0x66f1aa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f1ad:{NFSU2_TR(0x66f1ad);
if(r1(R+518)){{goto L66f23e;}}
}
B66f1b3:L66f1b3:{c.instructions+=2;NFSU2_TR(0x66f1b3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66f1b5:{NFSU2_TR(0x66f1b5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f1d8;}}
}
B66f1b7:L66f1b7:{c.instructions+=2;NFSU2_TR(0x66f1b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f1bb:{NFSU2_TR(0x66f1bb);
if(r1(R+518)){{goto L66f1d8;}}
}
B66f1bd:L66f1bd:{c.instructions+=3;NFSU2_TR(0x66f1bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f1c0:{NFSU2_TR(0x66f1c0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66f1c2:{NFSU2_TR(0x66f1c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f1c7ull));
TAIL_STATIC(0x75dd28u,75d);
}
B66f1c7:L66f1c7:{c.instructions+=7;NFSU2_TR(0x66f1c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f1cb:{NFSU2_TR(0x66f1cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f1ce:{NFSU2_TR(0x66f1ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B66f1d0:{NFSU2_TR(0x66f1d0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B66f1d3:{NFSU2_TR(0x66f1d3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66f1d4:{NFSU2_TR(0x66f1d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B66f1d6:{NFSU2_TR(0x66f1d6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f1b7u);}goto L66f1b7;}}
}
B66f1d8:L66f1d8:{c.instructions+=8;NFSU2_TR(0x66f1d8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f1da:{NFSU2_TR(0x66f1da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66f1db:{NFSU2_TR(0x66f1db);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B66f1dd:{NFSU2_TR(0x66f1dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f1e0:{NFSU2_TR(0x66f1e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B66f1e3:{NFSU2_TR(0x66f1e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f1e6:{NFSU2_TR(0x66f1e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66f1e9:{NFSU2_TR(0x66f1e9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f1a8u);}goto L66f1a8;}}
}
B66f1eb:L66f1eb:{c.instructions+=1;NFSU2_TR(0x66f1eb);
{goto L66f23e;}
}
B66f1ed:L66f1ed:{c.instructions+=3;NFSU2_TR(0x66f1ed);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66f1ef:{NFSU2_TR(0x66f1ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f1f2:{NFSU2_TR(0x66f1f2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f23e;}}
}
B66f1f4:L66f1f4:{c.instructions+=1;NFSU2_TR(0x66f1f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66f1f7:L66f1f7:{c.instructions+=3;NFSU2_TR(0x66f1f7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66f1f9:{NFSU2_TR(0x66f1f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f1fc:{NFSU2_TR(0x66f1fc);
if(r1(R+518)){{goto L66f23e;}}
}
B66f1fe:L66f1fe:{c.instructions+=2;NFSU2_TR(0x66f1fe);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66f200:{NFSU2_TR(0x66f200);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f230;}}
}
B66f202:L66f202:{c.instructions+=2;NFSU2_TR(0x66f202);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f206:{NFSU2_TR(0x66f206);
if(r1(R+518)){{goto L66f230;}}
}
B66f208:L66f208:{c.instructions+=6;NFSU2_TR(0x66f208);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66f20a:{NFSU2_TR(0x66f20a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66f210:{NFSU2_TR(0x66f210);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B66f212:{NFSU2_TR(0x66f212);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66f214:{NFSU2_TR(0x66f214);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66f217:{NFSU2_TR(0x66f217);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L66f21e;}}
}
B66f219:L66f219:{c.instructions+=3;NFSU2_TR(0x66f219);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66f21b:{NFSU2_TR(0x66f21b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B66f21c:{NFSU2_TR(0x66f21c);
{goto L66f220;}
}
B66f21e:L66f21e:{c.instructions+=1;NFSU2_TR(0x66f21e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66f220:L66f220:{c.instructions+=7;NFSU2_TR(0x66f220);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B66f223:{NFSU2_TR(0x66f223);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f226:{NFSU2_TR(0x66f226);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B66f228:{NFSU2_TR(0x66f228);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B66f22b:{NFSU2_TR(0x66f22b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66f22c:{NFSU2_TR(0x66f22c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B66f22e:{NFSU2_TR(0x66f22e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f202u);}goto L66f202;}}
}
B66f230:L66f230:{c.instructions+=7;NFSU2_TR(0x66f230);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f232:{NFSU2_TR(0x66f232);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66f233:{NFSU2_TR(0x66f233);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B66f235:{NFSU2_TR(0x66f235);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66f236:{NFSU2_TR(0x66f236);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B66f239:{NFSU2_TR(0x66f239);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B66f23c:{NFSU2_TR(0x66f23c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f1f7u);}goto L66f1f7;}}
}
B66f23e:L66f23e:{c.instructions+=3;NFSU2_TR(0x66f23e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66f241:{NFSU2_TR(0x66f241);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f244:{NFSU2_TR(0x66f244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f249ull));
TAIL_STATIC(0x66055cu,660);
}
B66f249:L66f249:{c.instructions+=1;NFSU2_TR(0x66f249);
TAIL_STATIC(0x66ef4fu,66e);
}
B66f24e:L66f24e:{c.instructions+=7;NFSU2_TR(0x66f24e);
__builtin_memmove((R+28),(R+28),4);
}
B66f250:{NFSU2_TR(0x66f250);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f251:{NFSU2_TR(0x66f251);
__builtin_memmove((R+20),(R+16),4);
}
B66f253:{NFSU2_TR(0x66f253);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B66f256:{NFSU2_TR(0x66f256);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f25a:{NFSU2_TR(0x66f25a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B66f25e:{NFSU2_TR(0x66f25e);
if(r1(R+518)){{goto L66f2ba;}}
}
B66f260:L66f260:{c.instructions+=2;NFSU2_TR(0x66f260);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
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
B66f264:{NFSU2_TR(0x66f264);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66f26f;}}
}
B66f266:L66f266:{c.instructions+=2;NFSU2_TR(0x66f266);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66f26d:{NFSU2_TR(0x66f26d);
{goto L66f2ba;}
}
B66f26f:L66f26f:{c.instructions+=8;NFSU2_TR(0x66f26f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f272:{NFSU2_TR(0x66f272);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f273:{NFSU2_TR(0x66f273);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f275:{NFSU2_TR(0x66f275);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66f277:{NFSU2_TR(0x66f277);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66f278:{NFSU2_TR(0x66f278);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f279:{NFSU2_TR(0x66f279);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66f27c:{NFSU2_TR(0x66f27c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f281ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66f281:L66f281:{c.instructions+=2;NFSU2_TR(0x66f281);
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
B66f283:{NFSU2_TR(0x66f283);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66f28e;}}
}
B66f285:L66f285:{c.instructions+=2;NFSU2_TR(0x66f285);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66f28c:{NFSU2_TR(0x66f28c);
{goto L66f2b9;}
}
B66f28e:L66f28e:{c.instructions+=6;NFSU2_TR(0x66f28e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f291:{NFSU2_TR(0x66f291);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66f294:{NFSU2_TR(0x66f294);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66f296:{NFSU2_TR(0x66f296);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f297:{NFSU2_TR(0x66f297);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f298:{NFSU2_TR(0x66f298);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66f2b0;}}
}
B66f29a:L66f29a:{c.instructions+=2;NFSU2_TR(0x66f29a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66f29c:{NFSU2_TR(0x66f29c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L66f42d;}}
}
B66f2a2:L66f2a2:{c.instructions+=2;NFSU2_TR(0x66f2a2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66f2a5:{NFSU2_TR(0x66f2a5);
if(r1(R+518)){{goto L66f2c1;}}
}
B66f2a7:L66f2a7:{c.instructions+=2;NFSU2_TR(0x66f2a7);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B66f2aa:{NFSU2_TR(0x66f2aa);
if(r1(R+518)){{goto L66f42d;}}
}
B66f2b0:L66f2b0:{c.instructions+=1;NFSU2_TR(0x66f2b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66f2b7:L66f2b7:{c.instructions+=2;NFSU2_TR(0x66f2b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66f2b8:{NFSU2_TR(0x66f2b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B66f2b9:L66f2b9:{c.instructions+=1;NFSU2_TR(0x66f2b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66f2ba:L66f2ba:{c.instructions+=3;NFSU2_TR(0x66f2ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f2bd:{NFSU2_TR(0x66f2bd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66f2be:{NFSU2_TR(0x66f2be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66f2c1:L66f2c1:{c.instructions+=3;NFSU2_TR(0x66f2c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66f2c4:{NFSU2_TR(0x66f2c4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f2c6:{NFSU2_TR(0x66f2c6);
if(r1(R+518)){{goto L66f2ce;}}
}
B66f2c8:L66f2c8:{c.instructions+=2;NFSU2_TR(0x66f2c8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffffffffull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f2cc:{NFSU2_TR(0x66f2cc);
if(r1(R+518)){{goto L66f2d0;}}
}
B66f2ce:L66f2ce:{c.instructions+=1;NFSU2_TR(0x66f2ce);
__builtin_memmove((R+24),(R+28),4);
}
B66f2d0:L66f2d0:{c.instructions+=8;NFSU2_TR(0x66f2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66f2d3:{NFSU2_TR(0x66f2d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66f2d6:{NFSU2_TR(0x66f2d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f2d8:{NFSU2_TR(0x66f2d8);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66f2d9:{NFSU2_TR(0x66f2d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f2db:{NFSU2_TR(0x66f2db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f2de:{NFSU2_TR(0x66f2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f2e1:{NFSU2_TR(0x66f2e1);
if(r1(R+518)){{goto L66f3bb;}}
}
B66f2e7:L66f2e7:{c.instructions+=2;NFSU2_TR(0x66f2e7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66f2e8:{NFSU2_TR(0x66f2e8);
if(r1(R+518)){{goto L66f359;}}
}
B66f2ea:L66f2ea:{c.instructions+=2;NFSU2_TR(0x66f2ea);
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
B66f2eb:{NFSU2_TR(0x66f2eb);
if(r1(R+518)){{goto L66f2f6;}}
}
B66f2ed:L66f2ed:{c.instructions+=2;NFSU2_TR(0x66f2ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66f2f4:{NFSU2_TR(0x66f2f4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f2b7u);}goto L66f2b7;}
}
B66f2f6:L66f2f6:{c.instructions+=2;NFSU2_TR(0x66f2f6);
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
B66f2f8:{NFSU2_TR(0x66f2f8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f2b7u);}goto L66f2b7;}}
}
B66f2fa:L66f2fa:{c.instructions+=4;NFSU2_TR(0x66f2fa);
__builtin_memmove((R+4),(R+8),4);
}
B66f2fc:{NFSU2_TR(0x66f2fc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66f2ff:{NFSU2_TR(0x66f2ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66f302:{NFSU2_TR(0x66f302);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f305:L66f305:{c.instructions+=2;NFSU2_TR(0x66f305);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f307:{NFSU2_TR(0x66f307);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f348;}}
}
B66f309:L66f309:{c.instructions+=5;NFSU2_TR(0x66f309);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f30c:{NFSU2_TR(0x66f30c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f30f:{NFSU2_TR(0x66f30f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f312:{NFSU2_TR(0x66f312);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f315:{NFSU2_TR(0x66f315);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f318:L66f318:{c.instructions+=2;NFSU2_TR(0x66f318);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f31a:{NFSU2_TR(0x66f31a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f33b;}}
}
B66f31c:L66f31c:{c.instructions+=5;NFSU2_TR(0x66f31c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66f31f:{NFSU2_TR(0x66f31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66f322:{NFSU2_TR(0x66f322);
__builtin_memmove((R+0),(R+8),4);
}
B66f324:{NFSU2_TR(0x66f324);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66f327:{NFSU2_TR(0x66f327);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f32a:L66f32a:{c.instructions+=6;NFSU2_TR(0x66f32a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B66f32c:{NFSU2_TR(0x66f32c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66f32e:{NFSU2_TR(0x66f32e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B66f331:{NFSU2_TR(0x66f331);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B66f333:{NFSU2_TR(0x66f333);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66f336:{NFSU2_TR(0x66f336);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f32au);}goto L66f32a;}}
}
B66f338:L66f338:{c.instructions+=1;NFSU2_TR(0x66f338);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66f33b:L66f33b:{c.instructions+=4;NFSU2_TR(0x66f33b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f33f:{NFSU2_TR(0x66f33f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f343:{NFSU2_TR(0x66f343);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66f346:{NFSU2_TR(0x66f346);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f318u);}goto L66f318;}}
}
B66f348:L66f348:{c.instructions+=4;NFSU2_TR(0x66f348);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f34c:{NFSU2_TR(0x66f34c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f34f:{NFSU2_TR(0x66f34f);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
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
B66f352:{NFSU2_TR(0x66f352);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f305u);}goto L66f305;}}
}
B66f354:L66f354:{c.instructions+=1;NFSU2_TR(0x66f354);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f2b7u);}goto L66f2b7;}
}
B66f359:L66f359:{c.instructions+=2;NFSU2_TR(0x66f359);
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
B66f35b:{NFSU2_TR(0x66f35b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f2b7u);}goto L66f2b7;}}
}
B66f361:L66f361:{c.instructions+=4;NFSU2_TR(0x66f361);
__builtin_memmove((R+4),(R+8),4);
}
B66f363:{NFSU2_TR(0x66f363);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66f366:{NFSU2_TR(0x66f366);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66f369:{NFSU2_TR(0x66f369);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f36c:L66f36c:{c.instructions+=2;NFSU2_TR(0x66f36c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f36e:{NFSU2_TR(0x66f36e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f3aa;}}
}
B66f370:L66f370:{c.instructions+=5;NFSU2_TR(0x66f370);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f373:{NFSU2_TR(0x66f373);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f376:{NFSU2_TR(0x66f376);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f379:{NFSU2_TR(0x66f379);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f37c:{NFSU2_TR(0x66f37c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f37f:L66f37f:{c.instructions+=2;NFSU2_TR(0x66f37f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f381:{NFSU2_TR(0x66f381);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f39d;}}
}
B66f383:L66f383:{c.instructions+=4;NFSU2_TR(0x66f383);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66f386:{NFSU2_TR(0x66f386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66f389:{NFSU2_TR(0x66f389);
__builtin_memmove((R+0),(R+8),4);
}
B66f38b:{NFSU2_TR(0x66f38b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66f38e:L66f38e:{c.instructions+=6;NFSU2_TR(0x66f38e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66f390:{NFSU2_TR(0x66f390);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B66f393:{NFSU2_TR(0x66f393);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66f395:{NFSU2_TR(0x66f395);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B66f397:{NFSU2_TR(0x66f397);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B66f398:{NFSU2_TR(0x66f398);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f38eu);}goto L66f38e;}}
}
B66f39a:L66f39a:{c.instructions+=1;NFSU2_TR(0x66f39a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66f39d:L66f39d:{c.instructions+=4;NFSU2_TR(0x66f39d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f3a1:{NFSU2_TR(0x66f3a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f3a5:{NFSU2_TR(0x66f3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66f3a8:{NFSU2_TR(0x66f3a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f37fu);}goto L66f37f;}}
}
B66f3aa:L66f3aa:{c.instructions+=4;NFSU2_TR(0x66f3aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f3ae:{NFSU2_TR(0x66f3ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f3b1:{NFSU2_TR(0x66f3b1);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
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
B66f3b4:{NFSU2_TR(0x66f3b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f36cu);}goto L66f36c;}}
}
B66f3b6:L66f3b6:{c.instructions+=1;NFSU2_TR(0x66f3b6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f2b7u);}goto L66f2b7;}
}
B66f3bb:L66f3bb:{c.instructions+=2;NFSU2_TR(0x66f3bb);
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
B66f3bd:{NFSU2_TR(0x66f3bd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f2b7u);}goto L66f2b7;}}
}
B66f3c3:L66f3c3:{c.instructions+=4;NFSU2_TR(0x66f3c3);
__builtin_memmove((R+4),(R+8),4);
}
B66f3c5:{NFSU2_TR(0x66f3c5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B66f3c8:{NFSU2_TR(0x66f3c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66f3cb:{NFSU2_TR(0x66f3cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f3ce:L66f3ce:{c.instructions+=2;NFSU2_TR(0x66f3ce);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f3d0:{NFSU2_TR(0x66f3d0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f41c;}}
}
B66f3d2:L66f3d2:{c.instructions+=5;NFSU2_TR(0x66f3d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f3d5:{NFSU2_TR(0x66f3d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f3d8:{NFSU2_TR(0x66f3d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f3db:{NFSU2_TR(0x66f3db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f3de:{NFSU2_TR(0x66f3de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f3e1:L66f3e1:{c.instructions+=2;NFSU2_TR(0x66f3e1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f3e3:{NFSU2_TR(0x66f3e3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f40f;}}
}
B66f3e5:L66f3e5:{c.instructions+=5;NFSU2_TR(0x66f3e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66f3e8:{NFSU2_TR(0x66f3e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66f3eb:{NFSU2_TR(0x66f3eb);
__builtin_memmove((R+0),(R+8),4);
}
B66f3ed:{NFSU2_TR(0x66f3ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66f3f0:{NFSU2_TR(0x66f3f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f3f3:L66f3f3:{c.instructions+=10;NFSU2_TR(0x66f3f3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66f3f5:{NFSU2_TR(0x66f3f5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66f3f7:{NFSU2_TR(0x66f3f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B66f3fa:{NFSU2_TR(0x66f3fa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B66f3fd:{NFSU2_TR(0x66f3fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f400:{NFSU2_TR(0x66f400);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66f403:{NFSU2_TR(0x66f403);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66f405:{NFSU2_TR(0x66f405);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B66f407:{NFSU2_TR(0x66f407);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66f40a:{NFSU2_TR(0x66f40a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f3f3u);}goto L66f3f3;}}
}
B66f40c:L66f40c:{c.instructions+=1;NFSU2_TR(0x66f40c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66f40f:L66f40f:{c.instructions+=4;NFSU2_TR(0x66f40f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f413:{NFSU2_TR(0x66f413);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f417:{NFSU2_TR(0x66f417);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66f41a:{NFSU2_TR(0x66f41a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f3e1u);}goto L66f3e1;}}
}
B66f41c:L66f41c:{c.instructions+=4;NFSU2_TR(0x66f41c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x40ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f420:{NFSU2_TR(0x66f420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f423:{NFSU2_TR(0x66f423);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
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
B66f426:{NFSU2_TR(0x66f426);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f3ceu);}goto L66f3ce;}}
}
B66f428:L66f428:{c.instructions+=1;NFSU2_TR(0x66f428);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f2b7u);}goto L66f2b7;}
}
B66f42d:L66f42d:{c.instructions+=3;NFSU2_TR(0x66f42d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66f430:{NFSU2_TR(0x66f430);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f432:{NFSU2_TR(0x66f432);
if(r1(R+518)){{goto L66f43a;}}
}
B66f434:L66f434:{c.instructions+=2;NFSU2_TR(0x66f434);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0xffffffffull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f438:{NFSU2_TR(0x66f438);
if(r1(R+518)){{goto L66f43c;}}
}
B66f43a:L66f43a:{c.instructions+=1;NFSU2_TR(0x66f43a);
__builtin_memmove((R+8),(R+28),4);
}
B66f43c:L66f43c:{c.instructions+=5;NFSU2_TR(0x66f43c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66f43f:{NFSU2_TR(0x66f43f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f441:{NFSU2_TR(0x66f441);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66f442:{NFSU2_TR(0x66f442);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f444:{NFSU2_TR(0x66f444);
if(r1(R+518)){{goto L66f4b5;}}
}
B66f446:L66f446:{c.instructions+=2;NFSU2_TR(0x66f446);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66f447:{NFSU2_TR(0x66f447);
if(r1(R+518)){{goto L66f485;}}
}
B66f449:L66f449:{c.instructions+=2;NFSU2_TR(0x66f449);
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
B66f44a:{NFSU2_TR(0x66f44a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f2b0u);}goto L66f2b0;}}
}
B66f450:L66f450:{c.instructions+=2;NFSU2_TR(0x66f450);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66f452:{NFSU2_TR(0x66f452);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f2b7u);}goto L66f2b7;}}
}
B66f458:L66f458:{c.instructions+=6;NFSU2_TR(0x66f458);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66f45b:{NFSU2_TR(0x66f45b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f45d:{NFSU2_TR(0x66f45d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66f45e:{NFSU2_TR(0x66f45e);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B66f460:{NFSU2_TR(0x66f460);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66f463:{NFSU2_TR(0x66f463);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f466:L66f466:{c.instructions+=2;NFSU2_TR(0x66f466);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f468:{NFSU2_TR(0x66f468);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f479;}}
}
B66f46a:L66f46a:{c.instructions+=1;NFSU2_TR(0x66f46a);
__builtin_memmove((R+12),(R+24),4);
}
B66f46c:L66f46c:{c.instructions+=6;NFSU2_TR(0x66f46c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66f46e:{NFSU2_TR(0x66f46e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66f470:{NFSU2_TR(0x66f470);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B66f473:{NFSU2_TR(0x66f473);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66f476:{NFSU2_TR(0x66f476);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B66f477:{NFSU2_TR(0x66f477);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f46cu);}goto L66f46c;}}
}
B66f479:L66f479:{c.instructions+=3;NFSU2_TR(0x66f479);
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B66f47b:{NFSU2_TR(0x66f47b);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B66f47e:{NFSU2_TR(0x66f47e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f466u);}goto L66f466;}}
}
B66f480:L66f480:{c.instructions+=1;NFSU2_TR(0x66f480);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f2b7u);}goto L66f2b7;}
}
B66f485:L66f485:{c.instructions+=2;NFSU2_TR(0x66f485);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66f487:{NFSU2_TR(0x66f487);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f2b7u);}goto L66f2b7;}}
}
B66f48d:L66f48d:{c.instructions+=5;NFSU2_TR(0x66f48d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66f490:{NFSU2_TR(0x66f490);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f492:{NFSU2_TR(0x66f492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66f493:{NFSU2_TR(0x66f493);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B66f495:{NFSU2_TR(0x66f495);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66f498:L66f498:{c.instructions+=2;NFSU2_TR(0x66f498);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f49a:{NFSU2_TR(0x66f49a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f4ab;}}
}
B66f49c:L66f49c:{c.instructions+=1;NFSU2_TR(0x66f49c);
__builtin_memmove((R+12),(R+24),4);
}
B66f49e:L66f49e:{c.instructions+=6;NFSU2_TR(0x66f49e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66f4a0:{NFSU2_TR(0x66f4a0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66f4a3:{NFSU2_TR(0x66f4a3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66f4a5:{NFSU2_TR(0x66f4a5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B66f4a8:{NFSU2_TR(0x66f4a8);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B66f4a9:{NFSU2_TR(0x66f4a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f49eu);}goto L66f49e;}}
}
B66f4ab:L66f4ab:{c.instructions+=3;NFSU2_TR(0x66f4ab);
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B66f4ad:{NFSU2_TR(0x66f4ad);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66f4ae:{NFSU2_TR(0x66f4ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f498u);}goto L66f498;}}
}
B66f4b0:L66f4b0:{c.instructions+=1;NFSU2_TR(0x66f4b0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f2b7u);}goto L66f2b7;}
}
B66f4b5:L66f4b5:{c.instructions+=2;NFSU2_TR(0x66f4b5);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66f4b7:{NFSU2_TR(0x66f4b7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f2b7u);}goto L66f2b7;}}
}
B66f4bd:L66f4bd:{c.instructions+=4;NFSU2_TR(0x66f4bd);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f4bf:{NFSU2_TR(0x66f4bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66f4c0:{NFSU2_TR(0x66f4c0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B66f4c2:{NFSU2_TR(0x66f4c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B66f4c5:L66f4c5:{c.instructions+=2;NFSU2_TR(0x66f4c5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f4c7:{NFSU2_TR(0x66f4c7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f4e7;}}
}
B66f4c9:L66f4c9:{c.instructions+=1;NFSU2_TR(0x66f4c9);
__builtin_memmove((R+28),(R+24),4);
}
B66f4cb:L66f4cb:{c.instructions+=11;NFSU2_TR(0x66f4cb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B66f4cd:{NFSU2_TR(0x66f4cd);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B66f4cf:{NFSU2_TR(0x66f4cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B66f4d2:{NFSU2_TR(0x66f4d2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66f4d5:{NFSU2_TR(0x66f4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f4d8:{NFSU2_TR(0x66f4d8);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66f4db:{NFSU2_TR(0x66f4db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B66f4de:{NFSU2_TR(0x66f4de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f4e2:{NFSU2_TR(0x66f4e2);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B66f4e3:{NFSU2_TR(0x66f4e3);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66f4e5:{NFSU2_TR(0x66f4e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f4cbu);}goto L66f4cb;}}
}
B66f4e7:L66f4e7:{c.instructions+=3;NFSU2_TR(0x66f4e7);
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B66f4e9:{NFSU2_TR(0x66f4e9);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B66f4ea:{NFSU2_TR(0x66f4ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f4c5u);}goto L66f4c5;}}
}
B66f4ec:L66f4ec:{c.instructions+=1;NFSU2_TR(0x66f4ec);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f2b7u);}goto L66f2b7;}
}
B66f4f1:L66f4f1:{c.instructions+=12;NFSU2_TR(0x66f4f1);
__builtin_memmove((R+28),(R+28),4);
}
B66f4f3:{NFSU2_TR(0x66f4f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f4f4:{NFSU2_TR(0x66f4f4);
__builtin_memmove((R+20),(R+16),4);
}
B66f4f6:{NFSU2_TR(0x66f4f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f4f7:{NFSU2_TR(0x66f4f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f4fb:{NFSU2_TR(0x66f4fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f4fc:{NFSU2_TR(0x66f4fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66f4ff:{NFSU2_TR(0x66f4ff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f500:{NFSU2_TR(0x66f500);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66f502:{NFSU2_TR(0x66f502);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B66f503:{NFSU2_TR(0x66f503);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B66f505:{NFSU2_TR(0x66f505);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L66f50b;}}
}
B66f507:L66f507:{c.instructions+=2;NFSU2_TR(0x66f507);
w4(R+24,u32(~u32(r4(R+24))));
}
B66f509:{NFSU2_TR(0x66f509);
{goto L66f544;}
}
B66f50b:L66f50b:{c.instructions+=16;NFSU2_TR(0x66f50b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f50e:{NFSU2_TR(0x66f50e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66f514:{NFSU2_TR(0x66f514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66f516:{NFSU2_TR(0x66f516);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f51a:{NFSU2_TR(0x66f51a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66f51c:{NFSU2_TR(0x66f51c);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+8)),r4(U+0));
}
B66f522:{NFSU2_TR(0x66f522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66f524:{NFSU2_TR(0x66f524);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f528:{NFSU2_TR(0x66f528);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B66f52a:{NFSU2_TR(0x66f52a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f52b:{NFSU2_TR(0x66f52b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f52e:{NFSU2_TR(0x66f52e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f530:{NFSU2_TR(0x66f530);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f531:{NFSU2_TR(0x66f531);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f532:{NFSU2_TR(0x66f532);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f535:{NFSU2_TR(0x66f535);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f53aull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66f53a:L66f53a:{c.instructions+=3;NFSU2_TR(0x66f53a);
__builtin_memmove((R+24),(R+0),4);
}
B66f53c:{NFSU2_TR(0x66f53c);
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
B66f53e:{NFSU2_TR(0x66f53e);
if(r1(R+518)){{goto L66f60b;}}
}
B66f544:L66f544:{c.instructions+=3;NFSU2_TR(0x66f544);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f547:{NFSU2_TR(0x66f547);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f54b:{NFSU2_TR(0x66f54b);
if(r1(R+518)){{goto L66f557;}}
}
B66f54d:L66f54d:{c.instructions+=2;NFSU2_TR(0x66f54d);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B66f551:{NFSU2_TR(0x66f551);
if(r1(R+518)){{goto L66f60b;}}
}
B66f557:L66f557:{c.instructions+=3;NFSU2_TR(0x66f557);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f55a:{NFSU2_TR(0x66f55a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f55e:{NFSU2_TR(0x66f55e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66f577;}}
}
B66f560:L66f560:{c.instructions+=6;NFSU2_TR(0x66f560);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66f563:{NFSU2_TR(0x66f563);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f564:{NFSU2_TR(0x66f564);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66f567:{NFSU2_TR(0x66f567);
w4(R+24,u32(~u32(r4(R+24))));
}
B66f569:{NFSU2_TR(0x66f569);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f56a:{NFSU2_TR(0x66f56a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f56full));
TAIL_STATIC(0x666157u,666);
}
B66f56f:L66f56f:{c.instructions+=2;NFSU2_TR(0x66f56f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f572:{NFSU2_TR(0x66f572);
{goto L66f612;}
}
B66f577:L66f577:{c.instructions+=3;NFSU2_TR(0x66f577);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f57a:{NFSU2_TR(0x66f57a);
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
B66f57c:{NFSU2_TR(0x66f57c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66f60b;}}
}
B66f582:L66f582:{c.instructions+=2;NFSU2_TR(0x66f582);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B66f585:{NFSU2_TR(0x66f585);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L66f60b;}}
}
B66f58b:L66f58b:{c.instructions+=2;NFSU2_TR(0x66f58b);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
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
B66f58e:{NFSU2_TR(0x66f58e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66f60b;}}
}
B66f590:L66f590:{c.instructions+=2;NFSU2_TR(0x66f590);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
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
B66f593:{NFSU2_TR(0x66f593);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66f60b;}}
}
B66f595:L66f595:{c.instructions+=3;NFSU2_TR(0x66f595);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f597:{NFSU2_TR(0x66f597);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66f598:{NFSU2_TR(0x66f598);
if(r1(R+518)){{goto L66f5c9;}}
}
B66f59a:L66f59a:{c.instructions+=2;NFSU2_TR(0x66f59a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B66f59b:{NFSU2_TR(0x66f59b);
if(r1(R+518)){{goto L66f5b7;}}
}
B66f59d:L66f59d:{c.instructions+=2;NFSU2_TR(0x66f59d);
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
B66f59e:{NFSU2_TR(0x66f59e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66f60b;}}
}
B66f5a0:L66f5a0:{c.instructions+=7;NFSU2_TR(0x66f5a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f5a2:{NFSU2_TR(0x66f5a2);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66f5a5:{NFSU2_TR(0x66f5a5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66f5a7:{NFSU2_TR(0x66f5a7);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B66f5a9:{NFSU2_TR(0x66f5a9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66f5ab:{NFSU2_TR(0x66f5ab);
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
B66f5ae:{NFSU2_TR(0x66f5ae);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L66f612;}}
}
B66f5b0:L66f5b0:{c.instructions+=3;NFSU2_TR(0x66f5b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f5b3:{NFSU2_TR(0x66f5b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66f5b5:{NFSU2_TR(0x66f5b5);
{goto L66f5fd;}
}
B66f5b7:L66f5b7:{c.instructions+=3;NFSU2_TR(0x66f5b7);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66f5ba:{NFSU2_TR(0x66f5ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B66f5bc:{NFSU2_TR(0x66f5bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f5c1ull));
TAIL_STATIC(0x75dd28u,75d);
}
B66f5c1:L66f5c1:{c.instructions+=2;NFSU2_TR(0x66f5c1);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+0)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66f5c3:{NFSU2_TR(0x66f5c3);
if(r1(R+518)){{goto L66f612;}}
}
B66f5c5:L66f5c5:{c.instructions+=2;NFSU2_TR(0x66f5c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66f5c7:{NFSU2_TR(0x66f5c7);
{goto L66f5fd;}
}
B66f5c9:L66f5c9:{c.instructions+=6;NFSU2_TR(0x66f5c9);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66f5cc:{NFSU2_TR(0x66f5cc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66f5d2:{NFSU2_TR(0x66f5d2);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B66f5d4:{NFSU2_TR(0x66f5d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66f5d6:{NFSU2_TR(0x66f5d6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66f5d9:{NFSU2_TR(0x66f5d9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L66f5df;}}
}
B66f5db:L66f5db:{c.instructions+=2;NFSU2_TR(0x66f5db);
__builtin_memmove((R+0),(R+28),4);
}
B66f5dd:{NFSU2_TR(0x66f5dd);
{goto L66f5e1;}
}
B66f5df:L66f5df:{c.instructions+=1;NFSU2_TR(0x66f5df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66f5e1:L66f5e1:{c.instructions+=3;NFSU2_TR(0x66f5e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f5e3:{NFSU2_TR(0x66f5e3);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+0)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66f5e5:{NFSU2_TR(0x66f5e5);
if(r1(R+518)){{goto L66f612;}}
}
B66f5e7:L66f5e7:{c.instructions+=6;NFSU2_TR(0x66f5e7);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66f5ea:{NFSU2_TR(0x66f5ea);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B66f5f0:{NFSU2_TR(0x66f5f0);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B66f5f2:{NFSU2_TR(0x66f5f2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B66f5f4:{NFSU2_TR(0x66f5f4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B66f5f7:{NFSU2_TR(0x66f5f7);
if(r1(R+514)){{goto L66f5fb;}}
}
B66f5f9:L66f5f9:{c.instructions+=1;NFSU2_TR(0x66f5f9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66f5fb:L66f5fb:{c.instructions+=1;NFSU2_TR(0x66f5fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B66f5fd:L66f5fd:{c.instructions+=3;NFSU2_TR(0x66f5fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f600:{NFSU2_TR(0x66f600);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f601:{NFSU2_TR(0x66f601);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f606ull));
TAIL_STATIC(0x66055cu,660);
}
B66f606:L66f606:{c.instructions+=1;NFSU2_TR(0x66f606);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f56fu);}goto L66f56f;}
}
B66f60b:L66f60b:{c.instructions+=1;NFSU2_TR(0x66f60b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8876086cull));
s4(u32(r4(U+0)),r4(U+4));
}
B66f612:L66f612:{c.instructions+=5;NFSU2_TR(0x66f612);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f615:{NFSU2_TR(0x66f615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66f616:{NFSU2_TR(0x66f616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66f617:{NFSU2_TR(0x66f617);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B66f618:{NFSU2_TR(0x66f618);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66f61b:L66f61b:{c.instructions+=9;NFSU2_TR(0x66f61b);
__builtin_memmove((R+28),(R+28),4);
}
B66f61d:{NFSU2_TR(0x66f61d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f61e:{NFSU2_TR(0x66f61e);
__builtin_memmove((R+20),(R+16),4);
}
B66f620:{NFSU2_TR(0x66f620);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f621:{NFSU2_TR(0x66f621);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66f624:{NFSU2_TR(0x66f624);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f625:{NFSU2_TR(0x66f625);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B66f627:{NFSU2_TR(0x66f627);
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
B66f629:{NFSU2_TR(0x66f629);
if(r1(R+518)){{goto L66f68f;}}
}
B66f62b:L66f62b:{c.instructions+=5;NFSU2_TR(0x66f62b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f62e:{NFSU2_TR(0x66f62e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f62f:{NFSU2_TR(0x66f62f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f631:{NFSU2_TR(0x66f631);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66f634:{NFSU2_TR(0x66f634);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f639ull));
TAIL_STATIC(0x66bbeeu,66b);
}
B66f639:L66f639:{c.instructions+=2;NFSU2_TR(0x66f639);
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
B66f63b:{NFSU2_TR(0x66f63b);
if(r1(R+518)){{goto L66f68f;}}
}
B66f63d:L66f63d:{c.instructions+=3;NFSU2_TR(0x66f63d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f640:{NFSU2_TR(0x66f640);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66f643:{NFSU2_TR(0x66f643);
if(r1(R+518)){{goto L66f64b;}}
}
B66f645:L66f645:{c.instructions+=2;NFSU2_TR(0x66f645);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
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
B66f649:{NFSU2_TR(0x66f649);
if(r1(R+518)){{goto L66f68f;}}
}
B66f64b:L66f64b:{c.instructions+=3;NFSU2_TR(0x66f64b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66f64e:{NFSU2_TR(0x66f64e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B66f650:{NFSU2_TR(0x66f650);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L66f68f;}}
}
B66f652:L66f652:{c.instructions+=2;NFSU2_TR(0x66f652);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B66f655:{NFSU2_TR(0x66f655);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L66f68f;}}
}
B66f657:L66f657:{c.instructions+=2;NFSU2_TR(0x66f657);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66f65b:{NFSU2_TR(0x66f65b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66f68f;}}
}
B66f65d:L66f65d:{c.instructions+=2;NFSU2_TR(0x66f65d);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66f661:{NFSU2_TR(0x66f661);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66f68f;}}
}
B66f663:L66f663:{c.instructions+=3;NFSU2_TR(0x66f663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f665:{NFSU2_TR(0x66f665);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B66f666:{NFSU2_TR(0x66f666);
if(r1(R+518)){{goto L66f67e;}}
}
B66f668:L66f668:{c.instructions+=2;NFSU2_TR(0x66f668);
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
B66f669:{NFSU2_TR(0x66f669);
if(r1(R+518)){{goto L66f676;}}
}
B66f66b:L66f66b:{c.instructions+=2;NFSU2_TR(0x66f66b);
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
B66f66c:{NFSU2_TR(0x66f66c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66f68f;}}
}
B66f66e:L66f66e:{c.instructions+=4;NFSU2_TR(0x66f66e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f670:{NFSU2_TR(0x66f670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f672:{NFSU2_TR(0x66f672);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B66f674:{NFSU2_TR(0x66f674);
{goto L66f694;}
}
B66f676:L66f676:{c.instructions+=2;NFSU2_TR(0x66f676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f678:{NFSU2_TR(0x66f678);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66f67a:L66f67a:{c.instructions+=2;NFSU2_TR(0x66f67a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B66f67c:{NFSU2_TR(0x66f67c);
{goto L66f694;}
}
B66f67e:L66f67e:{c.instructions+=7;NFSU2_TR(0x66f67e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f680:{NFSU2_TR(0x66f680);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B66f682:{NFSU2_TR(0x66f682);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66f684:{NFSU2_TR(0x66f684);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B66f687:{NFSU2_TR(0x66f687);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f68a:{NFSU2_TR(0x66f68a);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B66f68d:{NFSU2_TR(0x66f68d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f67au);}goto L66f67a;}
}
B66f68f:L66f68f:{c.instructions+=1;NFSU2_TR(0x66f68f);
w4(R+28,u32(0x8876086cull));
}
B66f694:L66f694:{c.instructions+=5;NFSU2_TR(0x66f694);
__builtin_memmove((R+0),(R+28),4);
}
B66f696:{NFSU2_TR(0x66f696);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B66f697:{NFSU2_TR(0x66f697);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B66f698:{NFSU2_TR(0x66f698);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B66f699:{NFSU2_TR(0x66f699);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B66f69c:L66f69c:{c.instructions+=10;NFSU2_TR(0x66f69c);
__builtin_memmove((R+28),(R+28),4);
}
B66f69e:{NFSU2_TR(0x66f69e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f69f:{NFSU2_TR(0x66f69f);
__builtin_memmove((R+20),(R+16),4);
}
B66f6a1:{NFSU2_TR(0x66f6a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B66f6a4:{NFSU2_TR(0x66f6a4);
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
B66f6a8:{NFSU2_TR(0x66f6a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f6a9:{NFSU2_TR(0x66f6a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f6aa:{NFSU2_TR(0x66f6aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f6ab:{NFSU2_TR(0x66f6ab);
__builtin_memmove((R+12),(R+4),4);
}
B66f6ad:{NFSU2_TR(0x66f6ad);
if(r1(R+518)){TAIL_STATIC(0x670633u,670);}
}
B66f6b3:L66f6b3:{c.instructions+=3;NFSU2_TR(0x66f6b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66f6b6:{NFSU2_TR(0x66f6b6);
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
B66f6b8:{NFSU2_TR(0x66f6b8);
if(r1(R+518)){TAIL_STATIC(0x670633u,670);}
}
B66f6be:L66f6be:{c.instructions+=2;NFSU2_TR(0x66f6be);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f6c0:{NFSU2_TR(0x66f6c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f6c5ull));
TAIL_STATIC(0x575620u,575);
}
B66f6c5:L66f6c5:{c.instructions+=4;NFSU2_TR(0x66f6c5);
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
B66f6c7:{NFSU2_TR(0x66f6c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66f6c8:{NFSU2_TR(0x66f6c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f6ce:{NFSU2_TR(0x66f6ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66f6da;}}
}
B66f6d0:L66f6d0:{c.instructions+=2;NFSU2_TR(0x66f6d0);
w4(R+0,u32(0x8007000eull));
}
B66f6d5:{NFSU2_TR(0x66f6d5);
TAIL_STATIC(0x670638u,670);
}
B66f6da:L66f6da:{c.instructions+=2;NFSU2_TR(0x66f6da);
__builtin_memmove((R+4),(R+12),4);
}
B66f6dc:{NFSU2_TR(0x66f6dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f6e1ull));
TAIL_STATIC(0x65b92du,65b);
}
B66f6e1:L66f6e1:{c.instructions+=2;NFSU2_TR(0x66f6e1);
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
B66f6e3:{NFSU2_TR(0x66f6e3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x670638u,670);}
}
B66f6e9:L66f6e9:{c.instructions+=4;NFSU2_TR(0x66f6e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66f6ef:{NFSU2_TR(0x66f6ef);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f6f1:{NFSU2_TR(0x66f6f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66f6f3:{NFSU2_TR(0x66f6f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66f6f4:L66f6f4:{c.instructions+=1;NFSU2_TR(0x66f6f4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L66f6f6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f6f4u);}goto L66f6f4;}
}
B66f6f6:L66f6f6:{c.instructions+=4;NFSU2_TR(0x66f6f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f6f9:{NFSU2_TR(0x66f6f9);
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
B66f6fb:{NFSU2_TR(0x66f6fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f6fe:{NFSU2_TR(0x66f6fe);
if(r1(R+518)){{goto L66f706;}}
}
B66f700:L66f700:{c.instructions+=3;NFSU2_TR(0x66f700);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f702:{NFSU2_TR(0x66f702);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f703:{NFSU2_TR(0x66f703);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f706ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f706:L66f706:{c.instructions+=3;NFSU2_TR(0x66f706);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66f709:{NFSU2_TR(0x66f709);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66f70c:{NFSU2_TR(0x66f70c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f711ull));
TAIL_STATIC(0x65e591u,65e);
}
B66f711:L66f711:{c.instructions+=4;NFSU2_TR(0x66f711);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f714:{NFSU2_TR(0x66f714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f716:{NFSU2_TR(0x66f716);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f717:{NFSU2_TR(0x66f717);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f71aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f71a:L66f71a:{c.instructions+=6;NFSU2_TR(0x66f71a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66f71d:{NFSU2_TR(0x66f71d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f71f:{NFSU2_TR(0x66f71f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f722:{NFSU2_TR(0x66f722);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f724:{NFSU2_TR(0x66f724);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f725:{NFSU2_TR(0x66f725);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f728ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f728:L66f728:{c.instructions+=4;NFSU2_TR(0x66f728);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f72b:{NFSU2_TR(0x66f72b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66f72c:{NFSU2_TR(0x66f72c);
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
B66f72e:{NFSU2_TR(0x66f72e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66f744;}}
}
B66f730:L66f730:{c.instructions+=5;NFSU2_TR(0x66f730);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f732:{NFSU2_TR(0x66f732);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f735:{NFSU2_TR(0x66f735);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f737:{NFSU2_TR(0x66f737);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f738:{NFSU2_TR(0x66f738);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f73bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f73b:L66f73b:{c.instructions+=3;NFSU2_TR(0x66f73b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f73e:{NFSU2_TR(0x66f73e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66f741:{NFSU2_TR(0x66f741);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f744:L66f744:{c.instructions+=6;NFSU2_TR(0x66f744);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f747:{NFSU2_TR(0x66f747);
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
B66f748:{NFSU2_TR(0x66f748);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66f74a:{NFSU2_TR(0x66f74a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f74c:{NFSU2_TR(0x66f74c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f74d:{NFSU2_TR(0x66f74d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f750ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f750:L66f750:{c.instructions+=4;NFSU2_TR(0x66f750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f752:{NFSU2_TR(0x66f752);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66f753:{NFSU2_TR(0x66f753);
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
B66f755:{NFSU2_TR(0x66f755);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66f765;}}
}
B66f757:L66f757:{c.instructions+=3;NFSU2_TR(0x66f757);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f759:{NFSU2_TR(0x66f759);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f75a:{NFSU2_TR(0x66f75a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f75dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f75d:L66f75d:{c.instructions+=3;NFSU2_TR(0x66f75d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f75f:{NFSU2_TR(0x66f75f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66f762:{NFSU2_TR(0x66f762);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f765:L66f765:{c.instructions+=3;NFSU2_TR(0x66f765);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B66f767:{NFSU2_TR(0x66f767);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xfeff0901ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xfeff0901ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xfeff0901ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B66f76e:{NFSU2_TR(0x66f76e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6703e0u,670);}
}
B66f774:L66f774:{c.instructions+=3;NFSU2_TR(0x66f774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f776:{NFSU2_TR(0x66f776);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f777:{NFSU2_TR(0x66f777);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f77aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f77a:L66f77a:{c.instructions+=2;NFSU2_TR(0x66f77a);
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
B66f77c:{NFSU2_TR(0x66f77c);
if(r1(R+512)){TAIL_STATIC(0x6703e0u,670);}
}
B66f782:L66f782:{c.instructions+=3;NFSU2_TR(0x66f782);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f785:{NFSU2_TR(0x66f785);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f787:{NFSU2_TR(0x66f787);
if(r1(R+518)){{goto L66f794;}}
}
B66f789:L66f789:{c.instructions+=2;NFSU2_TR(0x66f789);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f78a:{NFSU2_TR(0x66f78a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f78full));
TAIL_STATIC(0x575630u,575);
}
B66f78f:L66f78f:{c.instructions+=2;NFSU2_TR(0x66f78f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66f793:{NFSU2_TR(0x66f793);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66f794:L66f794:{c.instructions+=2;NFSU2_TR(0x66f794);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B66f797:{NFSU2_TR(0x66f797);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f79cull));
TAIL_STATIC(0x575620u,575);
}
B66f79c:L66f79c:{c.instructions+=4;NFSU2_TR(0x66f79c);
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
B66f79e:{NFSU2_TR(0x66f79e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66f79f:{NFSU2_TR(0x66f79f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f7a2:{NFSU2_TR(0x66f7a2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f6d0u);}goto L66f6d0;}}
}
B66f7a8:L66f7a8:{c.instructions+=2;NFSU2_TR(0x66f7a8);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
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
B66f7ac:{NFSU2_TR(0x66f7ac);
if(r1(R+518)){{goto L66f814;}}
}
B66f7ae:L66f7ae:{c.instructions+=5;NFSU2_TR(0x66f7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f7b1:{NFSU2_TR(0x66f7b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f7b4:{NFSU2_TR(0x66f7b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f7b6:{NFSU2_TR(0x66f7b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f7b7:{NFSU2_TR(0x66f7b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f7baull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f7ba:L66f7ba:{c.instructions+=11;NFSU2_TR(0x66f7ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f7bd:{NFSU2_TR(0x66f7bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66f7c0:{NFSU2_TR(0x66f7c0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66f7c3:{NFSU2_TR(0x66f7c3);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B66f7c5:{NFSU2_TR(0x66f7c5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B66f7c7:{NFSU2_TR(0x66f7c7);
w4(R+4,u32(0-u32(r4(R+4))));
}
B66f7c9:{NFSU2_TR(0x66f7c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B66f7cc:{NFSU2_TR(0x66f7cc);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B66f7ce:{NFSU2_TR(0x66f7ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+0))));
}
B66f7d0:{NFSU2_TR(0x66f7d0);
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
B66f7d2:{NFSU2_TR(0x66f7d2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66f7ff;}}
}
B66f7d4:L66f7d4:{c.instructions+=4;NFSU2_TR(0x66f7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f7d7:{NFSU2_TR(0x66f7d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f7d9:{NFSU2_TR(0x66f7d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f7da:{NFSU2_TR(0x66f7da);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f7ddull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f7dd:L66f7dd:{c.instructions+=7;NFSU2_TR(0x66f7dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f7e0:{NFSU2_TR(0x66f7e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f7e2:{NFSU2_TR(0x66f7e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66f7e5:{NFSU2_TR(0x66f7e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B66f7e8:{NFSU2_TR(0x66f7e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f7eb:{NFSU2_TR(0x66f7eb);
__builtin_memmove((R+0),(R+4),4);
}
B66f7ed:{NFSU2_TR(0x66f7ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66f7f0:L66f7f0:{c.instructions+=1;NFSU2_TR(0x66f7f0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66f7f2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f7f0u);}goto L66f7f0;}
}
B66f7f2:L66f7f2:{c.instructions+=2;NFSU2_TR(0x66f7f2);
__builtin_memmove((R+4),(R+0),4);
}
B66f7f4:{NFSU2_TR(0x66f7f4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66f7f7:L66f7f7:{c.instructions+=1;NFSU2_TR(0x66f7f7);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L66f7f9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f7f7u);}goto L66f7f7;}
}
B66f7f9:L66f7f9:{c.instructions+=2;NFSU2_TR(0x66f7f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66f7fc:{NFSU2_TR(0x66f7fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66f7ff:L66f7ff:{c.instructions+=9;NFSU2_TR(0x66f7ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f802:{NFSU2_TR(0x66f802);
__builtin_memmove((R+4),(R+0),4);
}
B66f804:{NFSU2_TR(0x66f804);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66f807:{NFSU2_TR(0x66f807);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B66f809:{NFSU2_TR(0x66f809);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B66f80b:{NFSU2_TR(0x66f80b);
w4(R+4,u32(0-u32(r4(R+4))));
}
B66f80d:{NFSU2_TR(0x66f80d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B66f810:{NFSU2_TR(0x66f810);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66f812:{NFSU2_TR(0x66f812);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+512,carry<u32>(r4(U+0),r4(R+4)));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+523,scarry<u32>(r4(U+0),r4(R+4)));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
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
B66f814:L66f814:{c.instructions+=3;NFSU2_TR(0x66f814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f816:{NFSU2_TR(0x66f816);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f817:{NFSU2_TR(0x66f817);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f81aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f81a:L66f81a:{c.instructions+=4;NFSU2_TR(0x66f81a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f81c:{NFSU2_TR(0x66f81c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66f81d:{NFSU2_TR(0x66f81d);
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
B66f81f:{NFSU2_TR(0x66f81f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66f832;}}
}
B66f821:L66f821:{c.instructions+=3;NFSU2_TR(0x66f821);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f823:{NFSU2_TR(0x66f823);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f824:{NFSU2_TR(0x66f824);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f827ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f827:L66f827:{c.instructions+=3;NFSU2_TR(0x66f827);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f829:{NFSU2_TR(0x66f829);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66f82c:{NFSU2_TR(0x66f82c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f832:L66f832:{c.instructions+=4;NFSU2_TR(0x66f832);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
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
B66f834:{NFSU2_TR(0x66f834);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f836:{NFSU2_TR(0x66f836);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f837:{NFSU2_TR(0x66f837);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f83aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f83a:L66f83a:{c.instructions+=4;NFSU2_TR(0x66f83a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f83c:{NFSU2_TR(0x66f83c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66f83d:{NFSU2_TR(0x66f83d);
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
B66f83f:{NFSU2_TR(0x66f83f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66f852;}}
}
B66f841:L66f841:{c.instructions+=3;NFSU2_TR(0x66f841);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f843:{NFSU2_TR(0x66f843);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f844:{NFSU2_TR(0x66f844);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f847ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f847:L66f847:{c.instructions+=3;NFSU2_TR(0x66f847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f849:{NFSU2_TR(0x66f849);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66f84c:{NFSU2_TR(0x66f84c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f852:L66f852:{c.instructions+=4;NFSU2_TR(0x66f852);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
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
B66f854:{NFSU2_TR(0x66f854);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f856:{NFSU2_TR(0x66f856);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f857:{NFSU2_TR(0x66f857);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f85aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f85a:L66f85a:{c.instructions+=4;NFSU2_TR(0x66f85a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f85c:{NFSU2_TR(0x66f85c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66f85d:{NFSU2_TR(0x66f85d);
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
B66f85f:{NFSU2_TR(0x66f85f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66f86f;}}
}
B66f861:L66f861:{c.instructions+=3;NFSU2_TR(0x66f861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f863:{NFSU2_TR(0x66f863);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f864:{NFSU2_TR(0x66f864);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f867ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f867:L66f867:{c.instructions+=3;NFSU2_TR(0x66f867);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f869:{NFSU2_TR(0x66f869);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66f86c:{NFSU2_TR(0x66f86c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f86f:L66f86f:{c.instructions+=4;NFSU2_TR(0x66f86f);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
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
B66f871:{NFSU2_TR(0x66f871);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f873:{NFSU2_TR(0x66f873);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f874:{NFSU2_TR(0x66f874);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f877ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f877:L66f877:{c.instructions+=4;NFSU2_TR(0x66f877);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f879:{NFSU2_TR(0x66f879);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B66f87a:{NFSU2_TR(0x66f87a);
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
B66f87c:{NFSU2_TR(0x66f87c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L66f88c;}}
}
B66f87e:L66f87e:{c.instructions+=3;NFSU2_TR(0x66f87e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f880:{NFSU2_TR(0x66f880);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f881:{NFSU2_TR(0x66f881);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f884ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f884:L66f884:{c.instructions+=3;NFSU2_TR(0x66f884);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B66f886:{NFSU2_TR(0x66f886);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66f889:{NFSU2_TR(0x66f889);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f88c:L66f88c:{c.instructions+=4;NFSU2_TR(0x66f88c);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1ull)));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
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
B66f88e:{NFSU2_TR(0x66f88e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f890:{NFSU2_TR(0x66f890);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f891:{NFSU2_TR(0x66f891);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f894ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f894:L66f894:{c.instructions+=2;NFSU2_TR(0x66f894);
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
B66f896:{NFSU2_TR(0x66f896);
if(r1(R+512)){TAIL_STATIC(0x6703e0u,670);}
}
B66f89c:L66f89c:{c.instructions+=2;NFSU2_TR(0x66f89c);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
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
B66f8a0:{NFSU2_TR(0x66f8a0);
if(r1(R+512)){TAIL_STATIC(0x6703e0u,670);}
}
B66f8a6:L66f8a6:{c.instructions+=3;NFSU2_TR(0x66f8a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f8a9:{NFSU2_TR(0x66f8a9);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B66f8ac:{NFSU2_TR(0x66f8ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6703e0u,670);}
}
B66f8b2:L66f8b2:{c.instructions+=4;NFSU2_TR(0x66f8b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f8b5:{NFSU2_TR(0x66f8b5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f8b7:{NFSU2_TR(0x66f8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f8ba:{NFSU2_TR(0x66f8ba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f8f8;}}
}
B66f8bc:L66f8bc:{c.instructions+=4;NFSU2_TR(0x66f8bc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x64ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66f8bf:{NFSU2_TR(0x66f8bf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66f8c2:{NFSU2_TR(0x66f8c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f8c3:{NFSU2_TR(0x66f8c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f8c8ull));
TAIL_STATIC(0x575620u,575);
}
B66f8c8:L66f8c8:{c.instructions+=3;NFSU2_TR(0x66f8c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f8ca:{NFSU2_TR(0x66f8ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66f8cb:{NFSU2_TR(0x66f8cb);
if(r1(R+518)){{goto L66f8eb;}}
}
B66f8cd:L66f8cd:{c.instructions+=9;NFSU2_TR(0x66f8cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f8d0:{NFSU2_TR(0x66f8d0);
u8 U[4];
w4(U+0,u32(0x65b6c9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f8d5:{NFSU2_TR(0x66f8d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f8d6:{NFSU2_TR(0x66f8d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66f8d8:{NFSU2_TR(0x66f8d8);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66f8db:{NFSU2_TR(0x66f8db);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f8dd:{NFSU2_TR(0x66f8dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f8de:{NFSU2_TR(0x66f8de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f8e1:{NFSU2_TR(0x66f8e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f8e6ull));
TAIL_STATIC(0x401650u,401);
}
B66f8e6:L66f8e6:{c.instructions+=2;NFSU2_TR(0x66f8e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f8e9:{NFSU2_TR(0x66f8e9);
{goto L66f8ed;}
}
B66f8eb:L66f8eb:{c.instructions+=1;NFSU2_TR(0x66f8eb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66f8ed:L66f8ed:{c.instructions+=3;NFSU2_TR(0x66f8ed);
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
B66f8ef:{NFSU2_TR(0x66f8ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f8f2:{NFSU2_TR(0x66f8f2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f6d0u);}goto L66f6d0;}}
}
B66f8f8:L66f8f8:{c.instructions+=5;NFSU2_TR(0x66f8f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f8fe:{NFSU2_TR(0x66f8fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66f903:{NFSU2_TR(0x66f903);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f905:{NFSU2_TR(0x66f905);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f908:{NFSU2_TR(0x66f908);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f94c;}}
}
B66f90a:L66f90a:{c.instructions+=5;NFSU2_TR(0x66f90a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66f90d:{NFSU2_TR(0x66f90d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66f910:{NFSU2_TR(0x66f910);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66f913:{NFSU2_TR(0x66f913);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f914:{NFSU2_TR(0x66f914);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f919ull));
TAIL_STATIC(0x575620u,575);
}
B66f919:L66f919:{c.instructions+=3;NFSU2_TR(0x66f919);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f91b:{NFSU2_TR(0x66f91b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66f91c:{NFSU2_TR(0x66f91c);
if(r1(R+518)){{goto L66f93c;}}
}
B66f91e:L66f91e:{c.instructions+=9;NFSU2_TR(0x66f91e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f921:{NFSU2_TR(0x66f921);
u8 U[4];
w4(U+0,u32(0x664ecfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f926:{NFSU2_TR(0x66f926);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f927:{NFSU2_TR(0x66f927);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66f929:{NFSU2_TR(0x66f929);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66f92c:{NFSU2_TR(0x66f92c);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f92e:{NFSU2_TR(0x66f92e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f92f:{NFSU2_TR(0x66f92f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f932:{NFSU2_TR(0x66f932);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f937ull));
TAIL_STATIC(0x401650u,401);
}
B66f937:L66f937:{c.instructions+=2;NFSU2_TR(0x66f937);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f93a:{NFSU2_TR(0x66f93a);
{goto L66f93e;}
}
B66f93c:L66f93c:{c.instructions+=1;NFSU2_TR(0x66f93c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66f93e:L66f93e:{c.instructions+=3;NFSU2_TR(0x66f93e);
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
B66f940:{NFSU2_TR(0x66f940);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f946:{NFSU2_TR(0x66f946);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f6d0u);}goto L66f6d0;}}
}
B66f94c:L66f94c:{c.instructions+=4;NFSU2_TR(0x66f94c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f952:{NFSU2_TR(0x66f952);
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
B66f954:{NFSU2_TR(0x66f954);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f957:{NFSU2_TR(0x66f957);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6703e0u,670);}
}
B66f95d:L66f95d:{c.instructions+=4;NFSU2_TR(0x66f95d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66f963:{NFSU2_TR(0x66f963);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66f966:{NFSU2_TR(0x66f966);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f967:{NFSU2_TR(0x66f967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f96cull));
TAIL_STATIC(0x575620u,575);
}
B66f96c:L66f96c:{c.instructions+=3;NFSU2_TR(0x66f96c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f96e:{NFSU2_TR(0x66f96e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66f96f:{NFSU2_TR(0x66f96f);
if(r1(R+518)){{goto L66f992;}}
}
B66f971:L66f971:{c.instructions+=9;NFSU2_TR(0x66f971);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f974:{NFSU2_TR(0x66f974);
u8 U[4];
w4(U+0,u32(0x663f6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f979:{NFSU2_TR(0x66f979);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f97a:{NFSU2_TR(0x66f97a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66f97c:{NFSU2_TR(0x66f97c);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66f97f:{NFSU2_TR(0x66f97f);
u8 U[4];
w4(U+0,u32(0xb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f984:{NFSU2_TR(0x66f984);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f985:{NFSU2_TR(0x66f985);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f988:{NFSU2_TR(0x66f988);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f98dull));
TAIL_STATIC(0x401650u,401);
}
B66f98d:L66f98d:{c.instructions+=2;NFSU2_TR(0x66f98d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f990:{NFSU2_TR(0x66f990);
{goto L66f994;}
}
B66f992:L66f992:{c.instructions+=1;NFSU2_TR(0x66f992);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66f994:L66f994:{c.instructions+=3;NFSU2_TR(0x66f994);
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
B66f996:{NFSU2_TR(0x66f996);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f99c:{NFSU2_TR(0x66f99c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f6d0u);}goto L66f6d0;}}
}
B66f9a2:L66f9a2:{c.instructions+=4;NFSU2_TR(0x66f9a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f9a5:{NFSU2_TR(0x66f9a5);
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
B66f9a7:{NFSU2_TR(0x66f9a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f9aa:{NFSU2_TR(0x66f9aa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66f9ec;}}
}
B66f9ac:L66f9ac:{c.instructions+=4;NFSU2_TR(0x66f9ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66f9af:{NFSU2_TR(0x66f9af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66f9b6:{NFSU2_TR(0x66f9b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f9b7:{NFSU2_TR(0x66f9b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f9bcull));
TAIL_STATIC(0x575620u,575);
}
B66f9bc:L66f9bc:{c.instructions+=3;NFSU2_TR(0x66f9bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66f9be:{NFSU2_TR(0x66f9be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66f9bf:{NFSU2_TR(0x66f9bf);
if(r1(R+518)){{goto L66f9df;}}
}
B66f9c1:L66f9c1:{c.instructions+=9;NFSU2_TR(0x66f9c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66f9c4:{NFSU2_TR(0x66f9c4);
u8 U[4];
w4(U+0,u32(0x65b78dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f9c9:{NFSU2_TR(0x66f9c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f9ca:{NFSU2_TR(0x66f9ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66f9cc:{NFSU2_TR(0x66f9cc);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B66f9cf:{NFSU2_TR(0x66f9cf);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f9d1:{NFSU2_TR(0x66f9d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f9d2:{NFSU2_TR(0x66f9d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f9d5:{NFSU2_TR(0x66f9d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f9daull));
TAIL_STATIC(0x401650u,401);
}
B66f9da:L66f9da:{c.instructions+=2;NFSU2_TR(0x66f9da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66f9dd:{NFSU2_TR(0x66f9dd);
{goto L66f9e1;}
}
B66f9df:L66f9df:{c.instructions+=1;NFSU2_TR(0x66f9df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66f9e1:L66f9e1:{c.instructions+=3;NFSU2_TR(0x66f9e1);
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
B66f9e3:{NFSU2_TR(0x66f9e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66f9e6:{NFSU2_TR(0x66f9e6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f6d0u);}goto L66f6d0;}}
}
B66f9ec:L66f9ec:{c.instructions+=3;NFSU2_TR(0x66f9ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B66f9ee:{NFSU2_TR(0x66f9ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66f9ef:{NFSU2_TR(0x66f9ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66f9f2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B66f9f2:L66f9f2:{c.instructions+=2;NFSU2_TR(0x66f9f2);
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
B66f9f4:{NFSU2_TR(0x66f9f4);
if(r1(R+512)){TAIL_STATIC(0x6703e0u,670);}
}
B66f9fa:L66f9fa:{c.instructions+=5;NFSU2_TR(0x66f9fa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66f9fc:{NFSU2_TR(0x66f9fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66fa02:{NFSU2_TR(0x66fa02);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66fa0c:{NFSU2_TR(0x66fa0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fa0f:{NFSU2_TR(0x66fa0f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66fa3e;}}
}
B66fa11:L66fa11:{c.instructions+=8;NFSU2_TR(0x66fa11);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66fa14:{NFSU2_TR(0x66fa14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fa15:{NFSU2_TR(0x66fa15);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66fa18:{NFSU2_TR(0x66fa18);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66fa1e:{NFSU2_TR(0x66fa1e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fa1f:{NFSU2_TR(0x66fa1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fa20:{NFSU2_TR(0x66fa20);
__builtin_memmove((R+4),(R+12),4);
}
B66fa22:{NFSU2_TR(0x66fa22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66fa27ull));
TAIL_STATIC(0x66b420u,66b);
}
B66fa27:L66fa27:{c.instructions+=2;NFSU2_TR(0x66fa27);
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
B66fa29:{NFSU2_TR(0x66fa29);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x670638u,670);}
}
B66fa2f:L66fa2f:{c.instructions+=4;NFSU2_TR(0x66fa2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66fa32:{NFSU2_TR(0x66fa32);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66fa36:{NFSU2_TR(0x66fa36);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66fa3c:{NFSU2_TR(0x66fa3c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66fa11u);}goto L66fa11;}}
}
B66fa3e:L66fa3e:{c.instructions+=4;NFSU2_TR(0x66fa3e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66fa40:{NFSU2_TR(0x66fa40);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66fa46:{NFSU2_TR(0x66fa46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fa49:{NFSU2_TR(0x66fa49);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66fa89;}}
}
B66fa4b:L66fa4b:{c.instructions+=11;NFSU2_TR(0x66fa4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fa51:{NFSU2_TR(0x66fa51);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66fa57:{NFSU2_TR(0x66fa57);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B66fa5b:{NFSU2_TR(0x66fa5b);
u8 U[14];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B66fa60:{NFSU2_TR(0x66fa60);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fa66:{NFSU2_TR(0x66fa66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fa67:{NFSU2_TR(0x66fa67);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66fa69:{NFSU2_TR(0x66fa69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fa6a:{NFSU2_TR(0x66fa6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fa6b:{NFSU2_TR(0x66fa6b);
__builtin_memmove((R+4),(R+12),4);
}
B66fa6d:{NFSU2_TR(0x66fa6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66fa72ull));
TAIL_STATIC(0x66b60du,66b);
}
B66fa72:L66fa72:{c.instructions+=2;NFSU2_TR(0x66fa72);
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
B66fa74:{NFSU2_TR(0x66fa74);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x670638u,670);}
}
B66fa7a:L66fa7a:{c.instructions+=4;NFSU2_TR(0x66fa7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66fa7d:{NFSU2_TR(0x66fa7d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66fa81:{NFSU2_TR(0x66fa81);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66fa87:{NFSU2_TR(0x66fa87);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66fa4bu);}goto L66fa4b;}}
}
B66fa89:L66fa89:{c.instructions+=8;NFSU2_TR(0x66fa89);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fa8f:{NFSU2_TR(0x66fa8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66fa92:{NFSU2_TR(0x66fa92);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fa98:{NFSU2_TR(0x66fa98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66fa9e:{NFSU2_TR(0x66fa9e);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B66faa2:{NFSU2_TR(0x66faa2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66faa3:{NFSU2_TR(0x66faa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66faa6:{NFSU2_TR(0x66faa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66faabull));
TAIL_STATIC(0x575620u,575);
}
B66faab:L66faab:{c.instructions+=4;NFSU2_TR(0x66faab);
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
B66faad:{NFSU2_TR(0x66faad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66faae:{NFSU2_TR(0x66faae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fab1:{NFSU2_TR(0x66fab1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f6d0u);}goto L66f6d0;}}
}
B66fab7:L66fab7:{c.instructions+=6;NFSU2_TR(0x66fab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66faba:{NFSU2_TR(0x66faba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66fabd:{NFSU2_TR(0x66fabd);
__builtin_memmove((R+8),(R+0),4);
}
B66fabf:{NFSU2_TR(0x66fabf);
__builtin_memmove((R+0),(R+4),4);
}
B66fac1:{NFSU2_TR(0x66fac1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66fac4:{NFSU2_TR(0x66fac4);
__builtin_memmove((R+28),(R+8),4);
}
B66fac6:L66fac6:{c.instructions+=1;NFSU2_TR(0x66fac6);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L66fac8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66fac6u);}goto L66fac6;}
}
B66fac8:L66fac8:{c.instructions+=2;NFSU2_TR(0x66fac8);
__builtin_memmove((R+4),(R+0),4);
}
B66faca:{NFSU2_TR(0x66faca);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66facd:L66facd:{c.instructions+=1;NFSU2_TR(0x66facd);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L66facf;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66facdu);}goto L66facd;}
}
B66facf:L66facf:{c.instructions+=7;NFSU2_TR(0x66facf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66fad2:{NFSU2_TR(0x66fad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fad5:{NFSU2_TR(0x66fad5);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B66fad7:{NFSU2_TR(0x66fad7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66fad9:{NFSU2_TR(0x66fad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B66fadc:{NFSU2_TR(0x66fadc);
__builtin_memmove((R+24),(R+4),4);
}
B66fade:{NFSU2_TR(0x66fade);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B66fae1:L66fae1:{c.instructions+=1;NFSU2_TR(0x66fae1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L66fae3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66fae1u);}goto L66fae1;}
}
B66fae3:L66fae3:{c.instructions+=2;NFSU2_TR(0x66fae3);
__builtin_memmove((R+4),(R+24),4);
}
B66fae5:{NFSU2_TR(0x66fae5);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B66fae8:L66fae8:{c.instructions+=1;NFSU2_TR(0x66fae8);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L66faea;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66fae8u);}goto L66fae8;}
}
B66faea:L66faea:{c.instructions+=15;NFSU2_TR(0x66faea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66faed:{NFSU2_TR(0x66faed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66faf3:{NFSU2_TR(0x66faf3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B66faf5:{NFSU2_TR(0x66faf5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
}
B66faf8:{NFSU2_TR(0x66faf8);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B66fafa:{NFSU2_TR(0x66fafa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B66fafd:{NFSU2_TR(0x66fafd);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B66faff:{NFSU2_TR(0x66faff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fb02:{NFSU2_TR(0x66fb02);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fb08:{NFSU2_TR(0x66fb08);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B66fb0a:{NFSU2_TR(0x66fb0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fb0d:{NFSU2_TR(0x66fb0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fb10:{NFSU2_TR(0x66fb10);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66fb12:{NFSU2_TR(0x66fb12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fb15:{NFSU2_TR(0x66fb15);
if(r1(R+518)){{goto L66fb22;}}
}
B66fb17:L66fb17:{c.instructions+=2;NFSU2_TR(0x66fb17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fb18:{NFSU2_TR(0x66fb18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66fb1dull));
TAIL_STATIC(0x575630u,575);
}
B66fb1d:L66fb1d:{c.instructions+=2;NFSU2_TR(0x66fb1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66fb21:{NFSU2_TR(0x66fb21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66fb22:L66fb22:{c.instructions+=6;NFSU2_TR(0x66fb22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fb25:{NFSU2_TR(0x66fb25);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fb28:{NFSU2_TR(0x66fb28);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fb2e:{NFSU2_TR(0x66fb2e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66fb31:{NFSU2_TR(0x66fb31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fb32:{NFSU2_TR(0x66fb32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66fb37ull));
TAIL_STATIC(0x575620u,575);
}
B66fb37:L66fb37:{c.instructions+=4;NFSU2_TR(0x66fb37);
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
B66fb39:{NFSU2_TR(0x66fb39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66fb3a:{NFSU2_TR(0x66fb3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fb40:{NFSU2_TR(0x66fb40);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66f6d0u);}goto L66f6d0;}}
}
B66fb46:L66fb46:{c.instructions+=6;NFSU2_TR(0x66fb46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66fb4a:{NFSU2_TR(0x66fb4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66fb4d:{NFSU2_TR(0x66fb4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B66fb4f:{NFSU2_TR(0x66fb4f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66fb56:{NFSU2_TR(0x66fb56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66fb5d:{NFSU2_TR(0x66fb5d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L66fdd2;}}
}
B66fb63:L66fb63:{c.instructions+=3;NFSU2_TR(0x66fb63);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B66fb67:{NFSU2_TR(0x66fb67);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B66fb6d:{NFSU2_TR(0x66fb6d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L66fdd2;}}
}
B66fb73:L66fb73:{c.instructions+=13;NFSU2_TR(0x66fb73);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66fb77:{NFSU2_TR(0x66fb77);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66fb7d:{NFSU2_TR(0x66fb7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B66fb80:{NFSU2_TR(0x66fb80);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B66fb83:{NFSU2_TR(0x66fb83);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B66fb85:{NFSU2_TR(0x66fb85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fb88:{NFSU2_TR(0x66fb88);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fb8e:{NFSU2_TR(0x66fb8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66fb91:{NFSU2_TR(0x66fb91);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fb94:{NFSU2_TR(0x66fb94);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fb9a:{NFSU2_TR(0x66fb9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66fb9d:{NFSU2_TR(0x66fb9d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66fba1:{NFSU2_TR(0x66fba1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66fba8;}}
}
B66fba3:L66fba3:{c.instructions+=2;NFSU2_TR(0x66fba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66fba6:{NFSU2_TR(0x66fba6);
{goto L66fbae;}
}
B66fba8:L66fba8:{c.instructions+=2;NFSU2_TR(0x66fba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66fbab:{NFSU2_TR(0x66fbab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66fbae:L66fbae:{c.instructions+=8;NFSU2_TR(0x66fbae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fbb1:{NFSU2_TR(0x66fbb1);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B66fbb3:{NFSU2_TR(0x66fbb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B66fbb6:{NFSU2_TR(0x66fbb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fbb9:{NFSU2_TR(0x66fbb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fbbc:{NFSU2_TR(0x66fbbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66fbbf:{NFSU2_TR(0x66fbbf);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66fbc3:{NFSU2_TR(0x66fbc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66fbca;}}
}
B66fbc5:L66fbc5:{c.instructions+=2;NFSU2_TR(0x66fbc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fbc8:{NFSU2_TR(0x66fbc8);
{goto L66fbd0;}
}
B66fbca:L66fbca:{c.instructions+=2;NFSU2_TR(0x66fbca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fbcd:{NFSU2_TR(0x66fbcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fbd0:L66fbd0:{c.instructions+=19;NFSU2_TR(0x66fbd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B66fbd3:{NFSU2_TR(0x66fbd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B66fbd6:{NFSU2_TR(0x66fbd6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fbd7:{NFSU2_TR(0x66fbd7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B66fbd9:{NFSU2_TR(0x66fbd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fbdc:{NFSU2_TR(0x66fbdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fbdf:{NFSU2_TR(0x66fbdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fbe2:{NFSU2_TR(0x66fbe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fbe5:{NFSU2_TR(0x66fbe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fbe8:{NFSU2_TR(0x66fbe8);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66fbec:{NFSU2_TR(0x66fbec);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66fbf0:{NFSU2_TR(0x66fbf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B66fbf3:{NFSU2_TR(0x66fbf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fbf4:{NFSU2_TR(0x66fbf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B66fbf7:{NFSU2_TR(0x66fbf7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B66fbf9:{NFSU2_TR(0x66fbf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fbfa:{NFSU2_TR(0x66fbfa);
__builtin_memmove((R+4),(R+12),4);
}
B66fbfc:{NFSU2_TR(0x66fbfc);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x46ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66fc00:{NFSU2_TR(0x66fc00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66fc05ull));
TAIL_STATIC(0x66548bu,665);
}
B66fc05:L66fc05:{c.instructions+=2;NFSU2_TR(0x66fc05);
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
B66fc07:{NFSU2_TR(0x66fc07);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x670638u,670);}
}
B66fc0d:L66fc0d:{c.instructions+=5;NFSU2_TR(0x66fc0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fc10:{NFSU2_TR(0x66fc10);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fc16:{NFSU2_TR(0x66fc16);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66fc19:{NFSU2_TR(0x66fc19);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66fc1c:{NFSU2_TR(0x66fc1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66fc23;}}
}
B66fc1e:L66fc1e:{c.instructions+=2;NFSU2_TR(0x66fc1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fc21:{NFSU2_TR(0x66fc21);
{goto L66fc29;}
}
B66fc23:L66fc23:{c.instructions+=2;NFSU2_TR(0x66fc23);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fc26:{NFSU2_TR(0x66fc26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fc29:L66fc29:{c.instructions+=7;NFSU2_TR(0x66fc29);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66fc2c:{NFSU2_TR(0x66fc2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fc2d:{NFSU2_TR(0x66fc2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66fc30:{NFSU2_TR(0x66fc30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fc31:{NFSU2_TR(0x66fc31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fc32:{NFSU2_TR(0x66fc32);
__builtin_memmove((R+4),(R+12),4);
}
B66fc34:{NFSU2_TR(0x66fc34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66fc39ull));
TAIL_STATIC(0x65c033u,65c);
}
B66fc39:L66fc39:{c.instructions+=7;NFSU2_TR(0x66fc39);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fc3c:{NFSU2_TR(0x66fc3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fc3f:{NFSU2_TR(0x66fc3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fc42:{NFSU2_TR(0x66fc42);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fc48:{NFSU2_TR(0x66fc48);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66fc4b:{NFSU2_TR(0x66fc4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66fc4e:{NFSU2_TR(0x66fc4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66fc55;}}
}
B66fc50:L66fc50:{c.instructions+=2;NFSU2_TR(0x66fc50);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fc53:{NFSU2_TR(0x66fc53);
{goto L66fc5b;}
}
B66fc55:L66fc55:{c.instructions+=2;NFSU2_TR(0x66fc55);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fc58:{NFSU2_TR(0x66fc58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fc5b:L66fc5b:{c.instructions+=8;NFSU2_TR(0x66fc5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fc5e:{NFSU2_TR(0x66fc5e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B66fc60:{NFSU2_TR(0x66fc60);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66fc63:{NFSU2_TR(0x66fc63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fc66:{NFSU2_TR(0x66fc66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fc69:{NFSU2_TR(0x66fc69);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66fc6b:{NFSU2_TR(0x66fc6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fc6e:{NFSU2_TR(0x66fc6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66fc77;}}
}
B66fc70:L66fc70:{c.instructions+=1;NFSU2_TR(0x66fc70);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B66fc77:L66fc77:{c.instructions+=10;NFSU2_TR(0x66fc77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66fc7a:{NFSU2_TR(0x66fc7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66fc7d:{NFSU2_TR(0x66fc7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fc7e:{NFSU2_TR(0x66fc7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66fc81:{NFSU2_TR(0x66fc81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fc82:{NFSU2_TR(0x66fc82);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66fc85:{NFSU2_TR(0x66fc85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fc86:{NFSU2_TR(0x66fc86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fc87:{NFSU2_TR(0x66fc87);
__builtin_memmove((R+4),(R+12),4);
}
B66fc89:{NFSU2_TR(0x66fc89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66fc8eull));
TAIL_STATIC(0x6614a1u,661);
}
B66fc8e:L66fc8e:{c.instructions+=2;NFSU2_TR(0x66fc8e);
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
B66fc90:{NFSU2_TR(0x66fc90);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x670638u,670);}
}
B66fc96:L66fc96:{c.instructions+=11;NFSU2_TR(0x66fc96);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fc99:{NFSU2_TR(0x66fc99);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66fc9c:{NFSU2_TR(0x66fc9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fc9f:{NFSU2_TR(0x66fc9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66fca1:{NFSU2_TR(0x66fca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fca4:{NFSU2_TR(0x66fca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66fca7:{NFSU2_TR(0x66fca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fcaa:{NFSU2_TR(0x66fcaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fcb0:{NFSU2_TR(0x66fcb0);
u8 U[16];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B66fcb4:{NFSU2_TR(0x66fcb4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B66fcb6:{NFSU2_TR(0x66fcb6);
if(r1(R+518)){{goto L66fdbf;}}
}
B66fcbc:L66fcbc:{c.instructions+=3;NFSU2_TR(0x66fcbc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B66fcc0:{NFSU2_TR(0x66fcc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B66fcc6:{NFSU2_TR(0x66fcc6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L66fdbf;}}
}
B66fccc:L66fccc:{c.instructions+=7;NFSU2_TR(0x66fccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fcd2:{NFSU2_TR(0x66fcd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66fcd5:{NFSU2_TR(0x66fcd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fcd8:{NFSU2_TR(0x66fcd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fcde:{NFSU2_TR(0x66fcde);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66fce1:{NFSU2_TR(0x66fce1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66fce5:{NFSU2_TR(0x66fce5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66fcec;}}
}
B66fce7:L66fce7:{c.instructions+=2;NFSU2_TR(0x66fce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66fcea:{NFSU2_TR(0x66fcea);
{goto L66fcf2;}
}
B66fcec:L66fcec:{c.instructions+=2;NFSU2_TR(0x66fcec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66fcef:{NFSU2_TR(0x66fcef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66fcf2:L66fcf2:{c.instructions+=9;NFSU2_TR(0x66fcf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fcf5:{NFSU2_TR(0x66fcf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66fcf8:{NFSU2_TR(0x66fcf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B66fcfb:{NFSU2_TR(0x66fcfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B66fcfe:{NFSU2_TR(0x66fcfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fd01:{NFSU2_TR(0x66fd01);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fd04:{NFSU2_TR(0x66fd04);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66fd07:{NFSU2_TR(0x66fd07);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66fd0b:{NFSU2_TR(0x66fd0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66fd12;}}
}
B66fd0d:L66fd0d:{c.instructions+=2;NFSU2_TR(0x66fd0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fd10:{NFSU2_TR(0x66fd10);
{goto L66fd18;}
}
B66fd12:L66fd12:{c.instructions+=2;NFSU2_TR(0x66fd12);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fd15:{NFSU2_TR(0x66fd15);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fd18:L66fd18:{c.instructions+=17;NFSU2_TR(0x66fd18);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66fd1b:{NFSU2_TR(0x66fd1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B66fd1e:{NFSU2_TR(0x66fd1e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B66fd20:{NFSU2_TR(0x66fd20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fd23:{NFSU2_TR(0x66fd23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fd26:{NFSU2_TR(0x66fd26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fd29:{NFSU2_TR(0x66fd29);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fd2c:{NFSU2_TR(0x66fd2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fd2f:{NFSU2_TR(0x66fd2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66fd32:{NFSU2_TR(0x66fd32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fd33:{NFSU2_TR(0x66fd33);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66fd36:{NFSU2_TR(0x66fd36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fd37:{NFSU2_TR(0x66fd37);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66fd3a:{NFSU2_TR(0x66fd3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fd3b:{NFSU2_TR(0x66fd3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fd3c:{NFSU2_TR(0x66fd3c);
__builtin_memmove((R+4),(R+12),4);
}
B66fd3e:{NFSU2_TR(0x66fd3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66fd43ull));
TAIL_STATIC(0x6614a1u,661);
}
B66fd43:L66fd43:{c.instructions+=2;NFSU2_TR(0x66fd43);
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
B66fd45:{NFSU2_TR(0x66fd45);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x670638u,670);}
}
B66fd4b:L66fd4b:{c.instructions+=16;NFSU2_TR(0x66fd4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fd4e:{NFSU2_TR(0x66fd4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66fd51:{NFSU2_TR(0x66fd51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fd52:{NFSU2_TR(0x66fd52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66fd54:{NFSU2_TR(0x66fd54);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fd57:{NFSU2_TR(0x66fd57);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66fd5a:{NFSU2_TR(0x66fd5a);
__builtin_memmove((R+4),(R+12),4);
}
B66fd5c:{NFSU2_TR(0x66fd5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fd5f:{NFSU2_TR(0x66fd5f);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66fd63:{NFSU2_TR(0x66fd63);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66fd68:{NFSU2_TR(0x66fd68);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66fd6c:{NFSU2_TR(0x66fd6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B66fd6f:{NFSU2_TR(0x66fd6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fd70:{NFSU2_TR(0x66fd70);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B66fd73:{NFSU2_TR(0x66fd73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fd74:{NFSU2_TR(0x66fd74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66fd79ull));
TAIL_STATIC(0x66548bu,665);
}
B66fd79:L66fd79:{c.instructions+=2;NFSU2_TR(0x66fd79);
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
B66fd7b:{NFSU2_TR(0x66fd7b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x670638u,670);}
}
B66fd81:L66fd81:{c.instructions+=5;NFSU2_TR(0x66fd81);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fd84:{NFSU2_TR(0x66fd84);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fd8a:{NFSU2_TR(0x66fd8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66fd8d:{NFSU2_TR(0x66fd8d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66fd91:{NFSU2_TR(0x66fd91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66fd98;}}
}
B66fd93:L66fd93:{c.instructions+=2;NFSU2_TR(0x66fd93);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fd96:{NFSU2_TR(0x66fd96);
{goto L66fd9e;}
}
B66fd98:L66fd98:{c.instructions+=2;NFSU2_TR(0x66fd98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fd9b:{NFSU2_TR(0x66fd9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fd9e:L66fd9e:{c.instructions+=7;NFSU2_TR(0x66fd9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66fda1:{NFSU2_TR(0x66fda1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fda2:{NFSU2_TR(0x66fda2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B66fda5:{NFSU2_TR(0x66fda5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fda6:{NFSU2_TR(0x66fda6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fda7:{NFSU2_TR(0x66fda7);
__builtin_memmove((R+4),(R+12),4);
}
B66fda9:{NFSU2_TR(0x66fda9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66fdaeull));
TAIL_STATIC(0x65c033u,65c);
}
B66fdae:L66fdae:{c.instructions+=5;NFSU2_TR(0x66fdae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66fdb1:{NFSU2_TR(0x66fdb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fdb4:{NFSU2_TR(0x66fdb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66fdb7:{NFSU2_TR(0x66fdb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66fdb9:{NFSU2_TR(0x66fdb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66fcbcu);}goto L66fcbc;}}
}
B66fdbf:L66fdbf:{c.instructions+=4;NFSU2_TR(0x66fdbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66fdc2:{NFSU2_TR(0x66fdc2);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B66fdc6:{NFSU2_TR(0x66fdc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B66fdcc:{NFSU2_TR(0x66fdcc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66fb63u);}goto L66fb63;}}
}
B66fdd2:L66fdd2:{c.instructions+=4;NFSU2_TR(0x66fdd2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B66fdd4:{NFSU2_TR(0x66fdd4);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66fdda:{NFSU2_TR(0x66fdda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fddd:{NFSU2_TR(0x66fddd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x670050u,670);}
}
B66fde3:L66fde3:{c.instructions+=5;NFSU2_TR(0x66fde3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb4ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B66fde9:{NFSU2_TR(0x66fde9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66fdef:{NFSU2_TR(0x66fdef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66fdf2:{NFSU2_TR(0x66fdf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fdf5:{NFSU2_TR(0x66fdf5);
{goto L66fef5;}
}
B66fdfa:L66fdfa:{c.instructions+=3;NFSU2_TR(0x66fdfa);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B66fdfe:{NFSU2_TR(0x66fdfe);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B66fe04:{NFSU2_TR(0x66fe04);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L66fefd;}}
}
B66fe0a:L66fe0a:{c.instructions+=7;NFSU2_TR(0x66fe0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fe10:{NFSU2_TR(0x66fe10);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66fe13:{NFSU2_TR(0x66fe13);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fe16:{NFSU2_TR(0x66fe16);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fe1c:{NFSU2_TR(0x66fe1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66fe1f:{NFSU2_TR(0x66fe1f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66fe23:{NFSU2_TR(0x66fe23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66fe2a;}}
}
B66fe25:L66fe25:{c.instructions+=2;NFSU2_TR(0x66fe25);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66fe28:{NFSU2_TR(0x66fe28);
{goto L66fe30;}
}
B66fe2a:L66fe2a:{c.instructions+=2;NFSU2_TR(0x66fe2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66fe2d:{NFSU2_TR(0x66fe2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66fe30:L66fe30:{c.instructions+=9;NFSU2_TR(0x66fe30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fe33:{NFSU2_TR(0x66fe33);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66fe36:{NFSU2_TR(0x66fe36);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B66fe39:{NFSU2_TR(0x66fe39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B66fe3c:{NFSU2_TR(0x66fe3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fe3f:{NFSU2_TR(0x66fe3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fe42:{NFSU2_TR(0x66fe42);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66fe45:{NFSU2_TR(0x66fe45);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66fe49:{NFSU2_TR(0x66fe49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66fe50;}}
}
B66fe4b:L66fe4b:{c.instructions+=2;NFSU2_TR(0x66fe4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fe4e:{NFSU2_TR(0x66fe4e);
{goto L66fe56;}
}
B66fe50:L66fe50:{c.instructions+=2;NFSU2_TR(0x66fe50);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fe53:{NFSU2_TR(0x66fe53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fe56:L66fe56:{c.instructions+=17;NFSU2_TR(0x66fe56);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66fe59:{NFSU2_TR(0x66fe59);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B66fe5c:{NFSU2_TR(0x66fe5c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B66fe5e:{NFSU2_TR(0x66fe5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fe61:{NFSU2_TR(0x66fe61);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fe64:{NFSU2_TR(0x66fe64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fe67:{NFSU2_TR(0x66fe67);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fe6a:{NFSU2_TR(0x66fe6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fe6d:{NFSU2_TR(0x66fe6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66fe70:{NFSU2_TR(0x66fe70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fe71:{NFSU2_TR(0x66fe71);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66fe74:{NFSU2_TR(0x66fe74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fe75:{NFSU2_TR(0x66fe75);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66fe78:{NFSU2_TR(0x66fe78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fe79:{NFSU2_TR(0x66fe79);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fe7a:{NFSU2_TR(0x66fe7a);
__builtin_memmove((R+4),(R+12),4);
}
B66fe7c:{NFSU2_TR(0x66fe7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66fe81ull));
TAIL_STATIC(0x6614a1u,661);
}
B66fe81:L66fe81:{c.instructions+=2;NFSU2_TR(0x66fe81);
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
B66fe83:{NFSU2_TR(0x66fe83);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x670638u,670);}
}
B66fe89:L66fe89:{c.instructions+=16;NFSU2_TR(0x66fe89);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fe8c:{NFSU2_TR(0x66fe8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66fe8f:{NFSU2_TR(0x66fe8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fe90:{NFSU2_TR(0x66fe90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66fe92:{NFSU2_TR(0x66fe92);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fe95:{NFSU2_TR(0x66fe95);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66fe98:{NFSU2_TR(0x66fe98);
__builtin_memmove((R+4),(R+12),4);
}
B66fe9a:{NFSU2_TR(0x66fe9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fe9d:{NFSU2_TR(0x66fe9d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66fea1:{NFSU2_TR(0x66fea1);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66fea6:{NFSU2_TR(0x66fea6);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66feaa:{NFSU2_TR(0x66feaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66fead:{NFSU2_TR(0x66fead);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66feae:{NFSU2_TR(0x66feae);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66feb1:{NFSU2_TR(0x66feb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66feb2:{NFSU2_TR(0x66feb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66feb7ull));
TAIL_STATIC(0x66548bu,665);
}
B66feb7:L66feb7:{c.instructions+=2;NFSU2_TR(0x66feb7);
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
B66feb9:{NFSU2_TR(0x66feb9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x670638u,670);}
}
B66febf:L66febf:{c.instructions+=5;NFSU2_TR(0x66febf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fec2:{NFSU2_TR(0x66fec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fec8:{NFSU2_TR(0x66fec8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66fecb:{NFSU2_TR(0x66fecb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66fecf:{NFSU2_TR(0x66fecf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66fed6;}}
}
B66fed1:L66fed1:{c.instructions+=2;NFSU2_TR(0x66fed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fed4:{NFSU2_TR(0x66fed4);
{goto L66fedc;}
}
B66fed6:L66fed6:{c.instructions+=2;NFSU2_TR(0x66fed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fed9:{NFSU2_TR(0x66fed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fedc:L66fedc:{c.instructions+=7;NFSU2_TR(0x66fedc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B66fedf:{NFSU2_TR(0x66fedf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fee0:{NFSU2_TR(0x66fee0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B66fee3:{NFSU2_TR(0x66fee3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fee4:{NFSU2_TR(0x66fee4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66fee5:{NFSU2_TR(0x66fee5);
__builtin_memmove((R+4),(R+12),4);
}
B66fee7:{NFSU2_TR(0x66fee7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66feecull));
TAIL_STATIC(0x65c033u,65c);
}
B66feec:L66feec:{c.instructions+=3;NFSU2_TR(0x66feec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66feef:{NFSU2_TR(0x66feef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66fef2:{NFSU2_TR(0x66fef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B66fef5:L66fef5:{c.instructions+=2;NFSU2_TR(0x66fef5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B66fef7:{NFSU2_TR(0x66fef7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x66fdfau);}goto L66fdfa;}}
}
B66fefd:L66fefd:{c.instructions+=4;NFSU2_TR(0x66fefd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ff00:{NFSU2_TR(0x66ff00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ff04:{NFSU2_TR(0x66ff04);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ff08:{NFSU2_TR(0x66ff08);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67003du,670);}
}
B66ff0e:L66ff0e:{c.instructions+=6;NFSU2_TR(0x66ff0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B66ff12:{NFSU2_TR(0x66ff12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ff15:{NFSU2_TR(0x66ff15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ff18:{NFSU2_TR(0x66ff18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ff1b:{NFSU2_TR(0x66ff1b);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B66ff1f:{NFSU2_TR(0x66ff1f);
TAIL_STATIC(0x67001fu,670);
}
B66ff24:L66ff24:{c.instructions+=3;NFSU2_TR(0x66ff24);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B66ff28:{NFSU2_TR(0x66ff28);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B66ff2e:{NFSU2_TR(0x66ff2e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x670027u,670);}
}
B66ff34:L66ff34:{c.instructions+=7;NFSU2_TR(0x66ff34);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ff3a:{NFSU2_TR(0x66ff3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B66ff3d:{NFSU2_TR(0x66ff3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ff40:{NFSU2_TR(0x66ff40);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ff46:{NFSU2_TR(0x66ff46);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B66ff49:{NFSU2_TR(0x66ff49);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ff4d:{NFSU2_TR(0x66ff4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66ff54;}}
}
B66ff4f:L66ff4f:{c.instructions+=2;NFSU2_TR(0x66ff4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66ff52:{NFSU2_TR(0x66ff52);
{goto L66ff5a;}
}
B66ff54:L66ff54:{c.instructions+=2;NFSU2_TR(0x66ff54);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66ff57:{NFSU2_TR(0x66ff57);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66ff5a:L66ff5a:{c.instructions+=9;NFSU2_TR(0x66ff5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ff5d:{NFSU2_TR(0x66ff5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B66ff60:{NFSU2_TR(0x66ff60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B66ff63:{NFSU2_TR(0x66ff63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B66ff66:{NFSU2_TR(0x66ff66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ff69:{NFSU2_TR(0x66ff69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ff6c:{NFSU2_TR(0x66ff6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66ff6f:{NFSU2_TR(0x66ff6f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66ff73:{NFSU2_TR(0x66ff73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L66ff7a;}}
}
B66ff75:L66ff75:{c.instructions+=2;NFSU2_TR(0x66ff75);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ff78:{NFSU2_TR(0x66ff78);
{goto L66ff80;}
}
B66ff7a:L66ff7a:{c.instructions+=2;NFSU2_TR(0x66ff7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ff7d:{NFSU2_TR(0x66ff7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66ff80:L66ff80:{c.instructions+=17;NFSU2_TR(0x66ff80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ff83:{NFSU2_TR(0x66ff83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66ff86:{NFSU2_TR(0x66ff86);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B66ff88:{NFSU2_TR(0x66ff88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ff8b:{NFSU2_TR(0x66ff8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ff8e:{NFSU2_TR(0x66ff8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ff91:{NFSU2_TR(0x66ff91);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ff94:{NFSU2_TR(0x66ff94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ff97:{NFSU2_TR(0x66ff97);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66ff9a:{NFSU2_TR(0x66ff9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ff9b:{NFSU2_TR(0x66ff9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66ff9e:{NFSU2_TR(0x66ff9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ff9f:{NFSU2_TR(0x66ff9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66ffa2:{NFSU2_TR(0x66ffa2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ffa3:{NFSU2_TR(0x66ffa3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ffa4:{NFSU2_TR(0x66ffa4);
__builtin_memmove((R+4),(R+12),4);
}
B66ffa6:{NFSU2_TR(0x66ffa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ffabull));
TAIL_STATIC(0x6614a1u,661);
}
B66ffab:L66ffab:{c.instructions+=2;NFSU2_TR(0x66ffab);
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
B66ffad:{NFSU2_TR(0x66ffad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x670638u,670);}
}
B66ffb3:L66ffb3:{c.instructions+=16;NFSU2_TR(0x66ffb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ffb6:{NFSU2_TR(0x66ffb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66ffb9:{NFSU2_TR(0x66ffb9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ffba:{NFSU2_TR(0x66ffba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B66ffbc:{NFSU2_TR(0x66ffbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ffbf:{NFSU2_TR(0x66ffbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B66ffc2:{NFSU2_TR(0x66ffc2);
__builtin_memmove((R+4),(R+12),4);
}
B66ffc4:{NFSU2_TR(0x66ffc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B66ffc7:{NFSU2_TR(0x66ffc7);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B66ffcb:{NFSU2_TR(0x66ffcb);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0x0ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B66ffd0:{NFSU2_TR(0x66ffd0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B66ffd4:{NFSU2_TR(0x66ffd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66ffd7:{NFSU2_TR(0x66ffd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ffd8:{NFSU2_TR(0x66ffd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B66ffdb:{NFSU2_TR(0x66ffdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B66ffdc:{NFSU2_TR(0x66ffdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x66ffe1ull));
TAIL_STATIC(0x66548bu,665);
}
B66ffe1:L66ffe1:{c.instructions+=2;NFSU2_TR(0x66ffe1);
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
B66ffe3:{NFSU2_TR(0x66ffe3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x670638u,670);}
}
B66ffe9:L66ffe9:{c.instructions+=5;NFSU2_TR(0x66ffe9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66ffec:{NFSU2_TR(0x66ffec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B66fff2:{NFSU2_TR(0x66fff2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B66fff5:{NFSU2_TR(0x66fff5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B66fff9:{NFSU2_TR(0x66fff9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x670000u,670);}
}
B66fffb:L66fffb:{c.instructions+=2;NFSU2_TR(0x66fffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B66fffe:{NFSU2_TR(0x66fffe);
TAIL_STATIC(0x670006u,670);
}
XIT:NFSU2_TR_EXIT(0x66f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
