#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_499(u8* __restrict R,Cpu& c);
u32 body_49a(u8* __restrict R,Cpu& c);
u32 body_4b5(u8* __restrict R,Cpu& c);
u32 body_4b6(u8* __restrict R,Cpu& c);
u32 body_4b8(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4d0(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_588(u8* __restrict R,Cpu& c);
u32 body_58a(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4cf,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4cf,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4cf(u8* __restrict R,Cpu& c);
u32 page_4cf(Cpu& c){return body_4cf(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4cf(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4cf001:goto L4cf001;
case 0x4cf002:c.instructions+=2;goto B4cf002;
case 0x4cf007:c.instructions+=1;goto B4cf007;
case 0x4cf00c:goto L4cf00c;
case 0x4cf00e:c.instructions+=1;goto B4cf00e;
case 0x4cf014:goto L4cf014;
case 0x4cf019:c.instructions+=2;goto B4cf019;
case 0x4cf020:c.instructions+=1;goto B4cf020;
case 0x4cf025:goto L4cf025;
case 0x4cf02c:c.instructions+=3;goto B4cf02c;
case 0x4cf02d:c.instructions+=2;goto B4cf02d;
case 0x4cf02e:c.instructions+=1;goto B4cf02e;
case 0x4cf031:goto L4cf031;
case 0x4cf036:c.instructions+=4;goto B4cf036;
case 0x4cf038:c.instructions+=3;goto B4cf038;
case 0x4cf039:c.instructions+=2;goto B4cf039;
case 0x4cf03c:c.instructions+=1;goto B4cf03c;
case 0x4cf03e:goto L4cf03e;
case 0x4cf044:c.instructions+=2;goto B4cf044;
case 0x4cf046:c.instructions+=1;goto B4cf046;
case 0x4cf048:goto L4cf048;
case 0x4cf049:c.instructions+=3;goto B4cf049;
case 0x4cf04e:c.instructions+=2;goto B4cf04e;
case 0x4cf04f:c.instructions+=1;goto B4cf04f;
case 0x4cf054:goto L4cf054;
case 0x4cf059:c.instructions+=2;goto B4cf059;
case 0x4cf05a:c.instructions+=1;goto B4cf05a;
case 0x4cf05f:goto L4cf05f;
case 0x4cf062:c.instructions+=1;goto B4cf062;
case 0x4cf064:goto L4cf064;
case 0x4cf069:c.instructions+=1;goto B4cf069;
case 0x4cf06e:goto L4cf06e;
case 0x4cf06f:c.instructions+=2;goto B4cf06f;
case 0x4cf070:c.instructions+=1;goto B4cf070;
case 0x4cf075:goto L4cf075;
case 0x4cf076:c.instructions+=1;goto B4cf076;
case 0x4cf07b:goto L4cf07b;
case 0x4cf07e:goto L4cf07e;
case 0x4cf083:c.instructions+=2;goto B4cf083;
case 0x4cf085:c.instructions+=1;goto B4cf085;
case 0x4cf087:goto L4cf087;
case 0x4cf08d:c.instructions+=2;goto B4cf08d;
case 0x4cf08f:c.instructions+=1;goto B4cf08f;
case 0x4cf091:goto L4cf091;
case 0x4cf092:c.instructions+=3;goto B4cf092;
case 0x4cf097:c.instructions+=2;goto B4cf097;
case 0x4cf098:c.instructions+=1;goto B4cf098;
case 0x4cf09d:goto L4cf09d;
case 0x4cf0a2:c.instructions+=2;goto B4cf0a2;
case 0x4cf0a3:c.instructions+=1;goto B4cf0a3;
case 0x4cf0a8:goto L4cf0a8;
case 0x4cf0ab:c.instructions+=1;goto B4cf0ab;
case 0x4cf0ad:goto L4cf0ad;
case 0x4cf0b2:c.instructions+=1;goto B4cf0b2;
case 0x4cf0b7:goto L4cf0b7;
case 0x4cf0b8:c.instructions+=2;goto B4cf0b8;
case 0x4cf0b9:c.instructions+=1;goto B4cf0b9;
case 0x4cf0be:goto L4cf0be;
case 0x4cf0bf:c.instructions+=1;goto B4cf0bf;
case 0x4cf0c4:goto L4cf0c4;
case 0x4cf0c7:goto L4cf0c7;
case 0x4cf0cd:c.instructions+=3;goto B4cf0cd;
case 0x4cf0cf:c.instructions+=2;goto B4cf0cf;
case 0x4cf0d0:c.instructions+=1;goto B4cf0d0;
case 0x4cf0d6:goto L4cf0d6;
case 0x4cf0db:c.instructions+=1;goto B4cf0db;
case 0x4cf0e0:goto L4cf0e0;
case 0x4cf0e3:c.instructions+=2;goto B4cf0e3;
case 0x4cf0e5:c.instructions+=1;goto B4cf0e5;
case 0x4cf0e7:goto L4cf0e7;
case 0x4cf0ed:c.instructions+=2;goto B4cf0ed;
case 0x4cf0f0:c.instructions+=1;goto B4cf0f0;
case 0x4cf0f2:goto L4cf0f2;
case 0x4cf0f8:c.instructions+=2;goto B4cf0f8;
case 0x4cf0fa:c.instructions+=1;goto B4cf0fa;
case 0x4cf0fc:goto L4cf0fc;
case 0x4cf102:c.instructions+=2;goto B4cf102;
case 0x4cf103:c.instructions+=1;goto B4cf103;
case 0x4cf108:goto L4cf108;
case 0x4cf109:c.instructions+=1;goto B4cf109;
case 0x4cf10e:goto L4cf10e;
case 0x4cf10f:c.instructions+=2;goto B4cf10f;
case 0x4cf114:c.instructions+=1;goto B4cf114;
case 0x4cf119:goto L4cf119;
case 0x4cf11b:c.instructions+=1;goto B4cf11b;
case 0x4cf11d:goto L4cf11d;
case 0x4cf122:c.instructions+=2;goto B4cf122;
case 0x4cf129:c.instructions+=1;goto B4cf129;
case 0x4cf12e:goto L4cf12e;
case 0x4cf130:c.instructions+=4;goto B4cf130;
case 0x4cf137:c.instructions+=3;goto B4cf137;
case 0x4cf13e:c.instructions+=2;goto B4cf13e;
case 0x4cf148:c.instructions+=1;goto B4cf148;
case 0x4cf14d:goto L4cf14d;
case 0x4cf14e:c.instructions+=2;goto B4cf14e;
case 0x4cf14f:c.instructions+=1;goto B4cf14f;
case 0x4cf152:goto L4cf152;
case 0x4cf153:c.instructions+=1;goto B4cf153;
case 0x4cf159:goto L4cf159;
case 0x4cf15b:c.instructions+=1;goto B4cf15b;
case 0x4cf160:goto L4cf160;
case 0x4cf161:c.instructions+=2;goto B4cf161;
case 0x4cf162:c.instructions+=1;goto B4cf162;
case 0x4cf170:goto L4cf170;
case 0x4cf171:c.instructions+=9;goto B4cf171;
case 0x4cf173:c.instructions+=8;goto B4cf173;
case 0x4cf174:c.instructions+=7;goto B4cf174;
case 0x4cf175:c.instructions+=6;goto B4cf175;
case 0x4cf177:c.instructions+=5;goto B4cf177;
case 0x4cf17a:c.instructions+=4;goto B4cf17a;
case 0x4cf17c:c.instructions+=3;goto B4cf17c;
case 0x4cf17d:c.instructions+=2;goto B4cf17d;
case 0x4cf180:c.instructions+=1;goto B4cf180;
case 0x4cf186:goto L4cf186;
case 0x4cf18c:c.instructions+=1;goto B4cf18c;
case 0x4cf192:goto L4cf192;
case 0x4cf197:c.instructions+=3;goto B4cf197;
case 0x4cf199:c.instructions+=2;goto B4cf199;
case 0x4cf1a0:c.instructions+=1;goto B4cf1a0;
case 0x4cf1a2:goto L4cf1a2;
case 0x4cf1a9:goto L4cf1a9;
case 0x4cf1ab:c.instructions+=1;goto B4cf1ab;
case 0x4cf1b1:goto L4cf1b1;
case 0x4cf1b7:c.instructions+=2;goto B4cf1b7;
case 0x4cf1b9:c.instructions+=1;goto B4cf1b9;
case 0x4cf1bf:goto L4cf1bf;
case 0x4cf1c5:c.instructions+=2;goto B4cf1c5;
case 0x4cf1c7:c.instructions+=1;goto B4cf1c7;
case 0x4cf1c9:goto L4cf1c9;
case 0x4cf1cf:c.instructions+=2;goto B4cf1cf;
case 0x4cf1d0:c.instructions+=1;goto B4cf1d0;
case 0x4cf1d5:goto L4cf1d5;
case 0x4cf1d8:c.instructions+=2;goto B4cf1d8;
case 0x4cf1da:c.instructions+=1;goto B4cf1da;
case 0x4cf1dc:goto L4cf1dc;
case 0x4cf1de:c.instructions+=2;goto B4cf1de;
case 0x4cf1e0:c.instructions+=1;goto B4cf1e0;
case 0x4cf1e5:goto L4cf1e5;
case 0x4cf1e6:c.instructions+=5;goto B4cf1e6;
case 0x4cf1ed:c.instructions+=4;goto B4cf1ed;
case 0x4cf1ee:c.instructions+=3;goto B4cf1ee;
case 0x4cf1f0:c.instructions+=2;goto B4cf1f0;
case 0x4cf1f1:c.instructions+=1;goto B4cf1f1;
case 0x4cf1f4:goto L4cf1f4;
case 0x4cf1fa:c.instructions+=2;goto B4cf1fa;
case 0x4cf1fc:c.instructions+=1;goto B4cf1fc;
case 0x4cf1fe:goto L4cf1fe;
case 0x4cf204:c.instructions+=2;goto B4cf204;
case 0x4cf205:c.instructions+=1;goto B4cf205;
case 0x4cf20a:goto L4cf20a;
case 0x4cf20d:c.instructions+=2;goto B4cf20d;
case 0x4cf20f:c.instructions+=1;goto B4cf20f;
case 0x4cf211:goto L4cf211;
case 0x4cf213:c.instructions+=2;goto B4cf213;
case 0x4cf215:c.instructions+=1;goto B4cf215;
case 0x4cf21a:goto L4cf21a;
case 0x4cf21b:c.instructions+=5;goto B4cf21b;
case 0x4cf222:c.instructions+=4;goto B4cf222;
case 0x4cf223:c.instructions+=3;goto B4cf223;
case 0x4cf225:c.instructions+=2;goto B4cf225;
case 0x4cf226:c.instructions+=1;goto B4cf226;
case 0x4cf229:goto L4cf229;
case 0x4cf22f:c.instructions+=2;goto B4cf22f;
case 0x4cf231:c.instructions+=1;goto B4cf231;
case 0x4cf233:goto L4cf233;
case 0x4cf239:c.instructions+=2;goto B4cf239;
case 0x4cf23a:c.instructions+=1;goto B4cf23a;
case 0x4cf23f:goto L4cf23f;
case 0x4cf242:c.instructions+=2;goto B4cf242;
case 0x4cf244:c.instructions+=1;goto B4cf244;
case 0x4cf246:goto L4cf246;
case 0x4cf248:c.instructions+=2;goto B4cf248;
case 0x4cf24a:c.instructions+=1;goto B4cf24a;
case 0x4cf24f:goto L4cf24f;
case 0x4cf250:c.instructions+=5;goto B4cf250;
case 0x4cf257:c.instructions+=4;goto B4cf257;
case 0x4cf258:c.instructions+=3;goto B4cf258;
case 0x4cf25a:c.instructions+=2;goto B4cf25a;
case 0x4cf25b:c.instructions+=1;goto B4cf25b;
case 0x4cf25e:goto L4cf25e;
case 0x4cf261:c.instructions+=8;goto B4cf261;
case 0x4cf264:c.instructions+=7;goto B4cf264;
case 0x4cf267:c.instructions+=6;goto B4cf267;
case 0x4cf268:c.instructions+=5;goto B4cf268;
case 0x4cf269:c.instructions+=4;goto B4cf269;
case 0x4cf26a:c.instructions+=3;goto B4cf26a;
case 0x4cf26f:c.instructions+=2;goto B4cf26f;
case 0x4cf271:c.instructions+=1;goto B4cf271;
case 0x4cf274:goto L4cf274;
case 0x4cf275:c.instructions+=5;goto B4cf275;
case 0x4cf27c:c.instructions+=4;goto B4cf27c;
case 0x4cf27d:c.instructions+=3;goto B4cf27d;
case 0x4cf27f:c.instructions+=2;goto B4cf27f;
case 0x4cf280:c.instructions+=1;goto B4cf280;
case 0x4cf283:goto L4cf283;
case 0x4cf286:c.instructions+=5;goto B4cf286;
case 0x4cf287:c.instructions+=4;goto B4cf287;
case 0x4cf28a:c.instructions+=3;goto B4cf28a;
case 0x4cf28b:c.instructions+=2;goto B4cf28b;
case 0x4cf292:c.instructions+=1;goto B4cf292;
case 0x4cf297:goto L4cf297;
case 0x4cf29d:c.instructions+=3;goto B4cf29d;
case 0x4cf2a0:c.instructions+=2;goto B4cf2a0;
case 0x4cf2a2:c.instructions+=1;goto B4cf2a2;
case 0x4cf2a4:goto L4cf2a4;
case 0x4cf2aa:c.instructions+=6;goto B4cf2aa;
case 0x4cf2ad:c.instructions+=5;goto B4cf2ad;
case 0x4cf2b0:c.instructions+=4;goto B4cf2b0;
case 0x4cf2b1:c.instructions+=3;goto B4cf2b1;
case 0x4cf2b2:c.instructions+=2;goto B4cf2b2;
case 0x4cf2b3:c.instructions+=1;goto B4cf2b3;
case 0x4cf2b8:goto L4cf2b8;
case 0x4cf2bb:c.instructions+=2;goto B4cf2bb;
case 0x4cf2bd:c.instructions+=1;goto B4cf2bd;
case 0x4cf2bf:goto L4cf2bf;
case 0x4cf2c1:c.instructions+=2;goto B4cf2c1;
case 0x4cf2c3:c.instructions+=1;goto B4cf2c3;
case 0x4cf2c8:goto L4cf2c8;
case 0x4cf2ca:goto L4cf2ca;
case 0x4cf2d0:c.instructions+=2;goto B4cf2d0;
case 0x4cf2d2:c.instructions+=1;goto B4cf2d2;
case 0x4cf2d4:goto L4cf2d4;
case 0x4cf2da:c.instructions+=6;goto B4cf2da;
case 0x4cf2dd:c.instructions+=5;goto B4cf2dd;
case 0x4cf2e0:c.instructions+=4;goto B4cf2e0;
case 0x4cf2e1:c.instructions+=3;goto B4cf2e1;
case 0x4cf2e2:c.instructions+=2;goto B4cf2e2;
case 0x4cf2e3:c.instructions+=1;goto B4cf2e3;
case 0x4cf2e8:goto L4cf2e8;
case 0x4cf2eb:c.instructions+=2;goto B4cf2eb;
case 0x4cf2ed:c.instructions+=1;goto B4cf2ed;
case 0x4cf2ef:goto L4cf2ef;
case 0x4cf2f1:c.instructions+=2;goto B4cf2f1;
case 0x4cf2f3:c.instructions+=1;goto B4cf2f3;
case 0x4cf2f8:goto L4cf2f8;
case 0x4cf2fa:goto L4cf2fa;
case 0x4cf300:c.instructions+=2;goto B4cf300;
case 0x4cf302:c.instructions+=1;goto B4cf302;
case 0x4cf304:goto L4cf304;
case 0x4cf30a:c.instructions+=6;goto B4cf30a;
case 0x4cf30d:c.instructions+=5;goto B4cf30d;
case 0x4cf310:c.instructions+=4;goto B4cf310;
case 0x4cf311:c.instructions+=3;goto B4cf311;
case 0x4cf312:c.instructions+=2;goto B4cf312;
case 0x4cf313:c.instructions+=1;goto B4cf313;
case 0x4cf318:goto L4cf318;
case 0x4cf31b:c.instructions+=2;goto B4cf31b;
case 0x4cf31d:c.instructions+=1;goto B4cf31d;
case 0x4cf31f:goto L4cf31f;
case 0x4cf321:c.instructions+=2;goto B4cf321;
case 0x4cf323:c.instructions+=1;goto B4cf323;
case 0x4cf328:goto L4cf328;
case 0x4cf32a:goto L4cf32a;
case 0x4cf32c:c.instructions+=1;goto B4cf32c;
case 0x4cf331:goto L4cf331;
case 0x4cf334:c.instructions+=8;goto B4cf334;
case 0x4cf337:c.instructions+=7;goto B4cf337;
case 0x4cf33a:c.instructions+=6;goto B4cf33a;
case 0x4cf33b:c.instructions+=5;goto B4cf33b;
case 0x4cf33c:c.instructions+=4;goto B4cf33c;
case 0x4cf33d:c.instructions+=3;goto B4cf33d;
case 0x4cf342:c.instructions+=2;goto B4cf342;
case 0x4cf344:c.instructions+=1;goto B4cf344;
case 0x4cf347:goto L4cf347;
case 0x4cf348:c.instructions+=4;goto B4cf348;
case 0x4cf349:c.instructions+=3;goto B4cf349;
case 0x4cf34b:c.instructions+=2;goto B4cf34b;
case 0x4cf34c:c.instructions+=1;goto B4cf34c;
case 0x4cf34f:goto L4cf34f;
case 0x4cf352:c.instructions+=8;goto B4cf352;
case 0x4cf355:c.instructions+=7;goto B4cf355;
case 0x4cf356:c.instructions+=6;goto B4cf356;
case 0x4cf359:c.instructions+=5;goto B4cf359;
case 0x4cf35a:c.instructions+=4;goto B4cf35a;
case 0x4cf35b:c.instructions+=3;goto B4cf35b;
case 0x4cf35c:c.instructions+=2;goto B4cf35c;
case 0x4cf35e:c.instructions+=1;goto B4cf35e;
case 0x4cf360:goto L4cf360;
case 0x4cf366:c.instructions+=1;goto B4cf366;
case 0x4cf368:goto L4cf368;
case 0x4cf36e:c.instructions+=1;goto B4cf36e;
case 0x4cf370:goto L4cf370;
case 0x4cf376:c.instructions+=1;goto B4cf376;
case 0x4cf37c:goto L4cf37c;
case 0x4cf37d:c.instructions+=5;goto B4cf37d;
case 0x4cf384:c.instructions+=4;goto B4cf384;
case 0x4cf385:c.instructions+=3;goto B4cf385;
case 0x4cf387:c.instructions+=2;goto B4cf387;
case 0x4cf388:c.instructions+=1;goto B4cf388;
case 0x4cf38b:goto L4cf38b;
case 0x4cf38e:c.instructions+=2;goto B4cf38e;
case 0x4cf390:c.instructions+=1;goto B4cf390;
case 0x4cf396:goto L4cf396;
case 0x4cf397:c.instructions+=3;goto B4cf397;
case 0x4cf399:c.instructions+=2;goto B4cf399;
case 0x4cf39c:c.instructions+=1;goto B4cf39c;
case 0x4cf3a2:goto L4cf3a2;
case 0x4cf3a5:c.instructions+=2;goto B4cf3a5;
case 0x4cf3a6:c.instructions+=1;goto B4cf3a6;
case 0x4cf3ab:goto L4cf3ab;
case 0x4cf3b1:c.instructions+=3;goto B4cf3b1;
case 0x4cf3b4:c.instructions+=2;goto B4cf3b4;
case 0x4cf3b6:c.instructions+=1;goto B4cf3b6;
case 0x4cf3bb:goto L4cf3bb;
case 0x4cf3bc:c.instructions+=4;goto B4cf3bc;
case 0x4cf3bd:c.instructions+=3;goto B4cf3bd;
case 0x4cf3bf:c.instructions+=2;goto B4cf3bf;
case 0x4cf3c0:c.instructions+=1;goto B4cf3c0;
case 0x4cf3c3:goto L4cf3c3;
case 0x4cf3c6:c.instructions+=5;goto B4cf3c6;
case 0x4cf3c9:c.instructions+=4;goto B4cf3c9;
case 0x4cf3cb:c.instructions+=3;goto B4cf3cb;
case 0x4cf3cc:c.instructions+=2;goto B4cf3cc;
case 0x4cf3cd:c.instructions+=1;goto B4cf3cd;
case 0x4cf3d2:goto L4cf3d2;
case 0x4cf3d5:c.instructions+=5;goto B4cf3d5;
case 0x4cf3d8:c.instructions+=4;goto B4cf3d8;
case 0x4cf3da:c.instructions+=3;goto B4cf3da;
case 0x4cf3db:c.instructions+=2;goto B4cf3db;
case 0x4cf3dc:c.instructions+=1;goto B4cf3dc;
case 0x4cf3e1:goto L4cf3e1;
case 0x4cf3e4:c.instructions+=5;goto B4cf3e4;
case 0x4cf3e7:c.instructions+=4;goto B4cf3e7;
case 0x4cf3e9:c.instructions+=3;goto B4cf3e9;
case 0x4cf3ea:c.instructions+=2;goto B4cf3ea;
case 0x4cf3eb:c.instructions+=1;goto B4cf3eb;
case 0x4cf3f0:goto L4cf3f0;
case 0x4cf3f3:c.instructions+=5;goto B4cf3f3;
case 0x4cf3f6:c.instructions+=4;goto B4cf3f6;
case 0x4cf3f8:c.instructions+=3;goto B4cf3f8;
case 0x4cf3f9:c.instructions+=2;goto B4cf3f9;
case 0x4cf3fa:c.instructions+=1;goto B4cf3fa;
case 0x4cf3ff:goto L4cf3ff;
case 0x4cf402:c.instructions+=5;goto B4cf402;
case 0x4cf406:c.instructions+=4;goto B4cf406;
case 0x4cf409:c.instructions+=3;goto B4cf409;
case 0x4cf40a:c.instructions+=2;goto B4cf40a;
case 0x4cf40b:c.instructions+=1;goto B4cf40b;
case 0x4cf410:goto L4cf410;
case 0x4cf413:c.instructions+=7;goto B4cf413;
case 0x4cf417:c.instructions+=6;goto B4cf417;
case 0x4cf41a:c.instructions+=5;goto B4cf41a;
case 0x4cf41c:c.instructions+=4;goto B4cf41c;
case 0x4cf421:c.instructions+=3;goto B4cf421;
case 0x4cf422:c.instructions+=2;goto B4cf422;
case 0x4cf423:c.instructions+=1;goto B4cf423;
case 0x4cf428:goto L4cf428;
case 0x4cf42b:c.instructions+=8;goto B4cf42b;
case 0x4cf42f:c.instructions+=7;goto B4cf42f;
case 0x4cf432:c.instructions+=6;goto B4cf432;
case 0x4cf435:c.instructions+=5;goto B4cf435;
case 0x4cf437:c.instructions+=4;goto B4cf437;
case 0x4cf43c:c.instructions+=3;goto B4cf43c;
case 0x4cf43d:c.instructions+=2;goto B4cf43d;
case 0x4cf43e:c.instructions+=1;goto B4cf43e;
case 0x4cf443:goto L4cf443;
case 0x4cf446:c.instructions+=3;goto B4cf446;
case 0x4cf44b:c.instructions+=2;goto B4cf44b;
case 0x4cf452:c.instructions+=1;goto B4cf452;
case 0x4cf457:goto L4cf457;
case 0x4cf458:c.instructions+=4;goto B4cf458;
case 0x4cf459:c.instructions+=3;goto B4cf459;
case 0x4cf45b:c.instructions+=2;goto B4cf45b;
case 0x4cf45c:c.instructions+=1;goto B4cf45c;
case 0x4cf460:goto L4cf460;
case 0x4cf461:c.instructions+=7;goto B4cf461;
case 0x4cf463:c.instructions+=6;goto B4cf463;
case 0x4cf466:c.instructions+=5;goto B4cf466;
case 0x4cf469:c.instructions+=4;goto B4cf469;
case 0x4cf46a:c.instructions+=3;goto B4cf46a;
case 0x4cf46c:c.instructions+=2;goto B4cf46c;
case 0x4cf46d:c.instructions+=1;goto B4cf46d;
case 0x4cf472:goto L4cf472;
case 0x4cf478:c.instructions+=4;goto B4cf478;
case 0x4cf47b:c.instructions+=3;goto B4cf47b;
case 0x4cf47c:c.instructions+=2;goto B4cf47c;
case 0x4cf47d:c.instructions+=1;goto B4cf47d;
case 0x4cf482:goto L4cf482;
case 0x4cf483:c.instructions+=1;goto B4cf483;
case 0x4cf488:goto L4cf488;
case 0x4cf48e:c.instructions+=4;goto B4cf48e;
case 0x4cf491:c.instructions+=3;goto B4cf491;
case 0x4cf492:c.instructions+=2;goto B4cf492;
case 0x4cf493:c.instructions+=1;goto B4cf493;
case 0x4cf498:goto L4cf498;
case 0x4cf499:c.instructions+=1;goto B4cf499;
case 0x4cf49e:goto L4cf49e;
case 0x4cf4a0:c.instructions+=7;goto B4cf4a0;
case 0x4cf4a6:c.instructions+=6;goto B4cf4a6;
case 0x4cf4ac:c.instructions+=5;goto B4cf4ac;
case 0x4cf4b2:c.instructions+=4;goto B4cf4b2;
case 0x4cf4b5:c.instructions+=3;goto B4cf4b5;
case 0x4cf4b6:c.instructions+=2;goto B4cf4b6;
case 0x4cf4b7:c.instructions+=1;goto B4cf4b7;
case 0x4cf4bc:goto L4cf4bc;
case 0x4cf4bd:c.instructions+=1;goto B4cf4bd;
case 0x4cf4c2:goto L4cf4c2;
case 0x4cf4c8:c.instructions+=6;goto B4cf4c8;
case 0x4cf4cb:c.instructions+=5;goto B4cf4cb;
case 0x4cf4ce:c.instructions+=4;goto B4cf4ce;
case 0x4cf4d3:c.instructions+=3;goto B4cf4d3;
case 0x4cf4d4:c.instructions+=2;goto B4cf4d4;
case 0x4cf4d5:c.instructions+=1;goto B4cf4d5;
case 0x4cf4da:goto L4cf4da;
case 0x4cf4dd:c.instructions+=2;goto B4cf4dd;
case 0x4cf4de:c.instructions+=1;goto B4cf4de;
case 0x4cf4e3:goto L4cf4e3;
case 0x4cf4e9:c.instructions+=4;goto B4cf4e9;
case 0x4cf4ec:c.instructions+=3;goto B4cf4ec;
case 0x4cf4ed:c.instructions+=2;goto B4cf4ed;
case 0x4cf4ee:c.instructions+=1;goto B4cf4ee;
case 0x4cf4f3:goto L4cf4f3;
case 0x4cf4f4:c.instructions+=1;goto B4cf4f4;
case 0x4cf4f9:goto L4cf4f9;
case 0x4cf503:c.instructions+=6;goto B4cf503;
case 0x4cf506:c.instructions+=5;goto B4cf506;
case 0x4cf50d:c.instructions+=4;goto B4cf50d;
case 0x4cf513:c.instructions+=3;goto B4cf513;
case 0x4cf514:c.instructions+=2;goto B4cf514;
case 0x4cf515:c.instructions+=1;goto B4cf515;
case 0x4cf51a:goto L4cf51a;
case 0x4cf51b:c.instructions+=1;goto B4cf51b;
case 0x4cf520:goto L4cf520;
case 0x4cf526:c.instructions+=6;goto B4cf526;
case 0x4cf529:c.instructions+=5;goto B4cf529;
case 0x4cf52c:c.instructions+=4;goto B4cf52c;
case 0x4cf531:c.instructions+=3;goto B4cf531;
case 0x4cf532:c.instructions+=2;goto B4cf532;
case 0x4cf533:c.instructions+=1;goto B4cf533;
case 0x4cf538:goto L4cf538;
case 0x4cf53b:c.instructions+=2;goto B4cf53b;
case 0x4cf53c:c.instructions+=1;goto B4cf53c;
case 0x4cf541:goto L4cf541;
case 0x4cf547:c.instructions+=4;goto B4cf547;
case 0x4cf54a:c.instructions+=3;goto B4cf54a;
case 0x4cf54b:c.instructions+=2;goto B4cf54b;
case 0x4cf54c:c.instructions+=1;goto B4cf54c;
case 0x4cf551:goto L4cf551;
case 0x4cf552:c.instructions+=1;goto B4cf552;
case 0x4cf557:goto L4cf557;
case 0x4cf561:c.instructions+=5;goto B4cf561;
case 0x4cf564:c.instructions+=4;goto B4cf564;
case 0x4cf569:c.instructions+=3;goto B4cf569;
case 0x4cf56a:c.instructions+=2;goto B4cf56a;
case 0x4cf571:c.instructions+=1;goto B4cf571;
case 0x4cf576:goto L4cf576;
case 0x4cf577:c.instructions+=1;goto B4cf577;
case 0x4cf57c:goto L4cf57c;
case 0x4cf57f:c.instructions+=2;goto B4cf57f;
case 0x4cf581:c.instructions+=1;goto B4cf581;
case 0x4cf586:goto L4cf586;
case 0x4cf58b:c.instructions+=2;goto B4cf58b;
case 0x4cf592:c.instructions+=1;goto B4cf592;
case 0x4cf597:goto L4cf597;
case 0x4cf599:c.instructions+=1;goto B4cf599;
case 0x4cf59e:goto L4cf59e;
case 0x4cf5a1:c.instructions+=5;goto B4cf5a1;
case 0x4cf5a3:c.instructions+=4;goto B4cf5a3;
case 0x4cf5a8:c.instructions+=3;goto B4cf5a8;
case 0x4cf5ad:c.instructions+=2;goto B4cf5ad;
case 0x4cf5ae:c.instructions+=1;goto B4cf5ae;
case 0x4cf5b3:goto L4cf5b3;
case 0x4cf5b6:c.instructions+=2;goto B4cf5b6;
case 0x4cf5b7:c.instructions+=1;goto B4cf5b7;
case 0x4cf5c0:goto L4cf5c0;
case 0x4cf5c2:c.instructions+=7;goto B4cf5c2;
case 0x4cf5c7:c.instructions+=6;goto B4cf5c7;
case 0x4cf5cd:c.instructions+=5;goto B4cf5cd;
case 0x4cf5ce:c.instructions+=4;goto B4cf5ce;
case 0x4cf5d5:c.instructions+=3;goto B4cf5d5;
case 0x4cf5d6:c.instructions+=2;goto B4cf5d6;
case 0x4cf5d8:c.instructions+=1;goto B4cf5d8;
case 0x4cf5dd:goto L4cf5dd;
case 0x4cf5e0:c.instructions+=4;goto B4cf5e0;
case 0x4cf5e4:c.instructions+=3;goto B4cf5e4;
case 0x4cf5e6:c.instructions+=2;goto B4cf5e6;
case 0x4cf5ee:c.instructions+=1;goto B4cf5ee;
case 0x4cf5f0:goto L4cf5f0;
case 0x4cf5f4:c.instructions+=3;goto B4cf5f4;
case 0x4cf5f5:c.instructions+=2;goto B4cf5f5;
case 0x4cf5f7:c.instructions+=1;goto B4cf5f7;
case 0x4cf5fc:goto L4cf5fc;
case 0x4cf600:c.instructions+=3;goto B4cf600;
case 0x4cf607:c.instructions+=2;goto B4cf607;
case 0x4cf60a:c.instructions+=1;goto B4cf60a;
case 0x4cf60b:goto L4cf60b;
case 0x4cf60f:c.instructions+=4;goto B4cf60f;
case 0x4cf611:c.instructions+=3;goto B4cf611;
case 0x4cf618:c.instructions+=2;goto B4cf618;
case 0x4cf61b:c.instructions+=1;goto B4cf61b;
case 0x4cf620:goto L4cf620;
case 0x4cf621:c.instructions+=2;goto B4cf621;
case 0x4cf623:c.instructions+=1;goto B4cf623;
case 0x4cf628:goto L4cf628;
case 0x4cf62d:c.instructions+=1;goto B4cf62d;
case 0x4cf62f:goto L4cf62f;
case 0x4cf630:c.instructions+=1;goto B4cf630;
case 0x4cf635:goto L4cf635;
case 0x4cf638:goto L4cf638;
case 0x4cf63a:c.instructions+=2;goto B4cf63a;
case 0x4cf63b:c.instructions+=1;goto B4cf63b;
case 0x4cf640:goto L4cf640;
case 0x4cf647:c.instructions+=2;goto B4cf647;
case 0x4cf64d:c.instructions+=1;goto B4cf64d;
case 0x4cf650:goto L4cf650;
case 0x4cf656:c.instructions+=1;goto B4cf656;
case 0x4cf660:goto L4cf660;
case 0x4cf662:c.instructions+=11;goto B4cf662;
case 0x4cf667:c.instructions+=10;goto B4cf667;
case 0x4cf66d:c.instructions+=9;goto B4cf66d;
case 0x4cf66e:c.instructions+=8;goto B4cf66e;
case 0x4cf675:c.instructions+=7;goto B4cf675;
case 0x4cf676:c.instructions+=6;goto B4cf676;
case 0x4cf67a:c.instructions+=5;goto B4cf67a;
case 0x4cf67b:c.instructions+=4;goto B4cf67b;
case 0x4cf67d:c.instructions+=3;goto B4cf67d;
case 0x4cf67e:c.instructions+=2;goto B4cf67e;
case 0x4cf682:c.instructions+=1;goto B4cf682;
case 0x4cf687:goto L4cf687;
case 0x4cf689:c.instructions+=4;goto B4cf689;
case 0x4cf691:c.instructions+=3;goto B4cf691;
case 0x4cf697:c.instructions+=2;goto B4cf697;
case 0x4cf6a1:c.instructions+=1;goto B4cf6a1;
case 0x4cf6a6:goto L4cf6a6;
case 0x4cf6a9:c.instructions+=4;goto B4cf6a9;
case 0x4cf6ae:c.instructions+=3;goto B4cf6ae;
case 0x4cf6b3:c.instructions+=2;goto B4cf6b3;
case 0x4cf6b4:c.instructions+=1;goto B4cf6b4;
case 0x4cf6b9:goto L4cf6b9;
case 0x4cf6bc:c.instructions+=2;goto B4cf6bc;
case 0x4cf6bd:c.instructions+=1;goto B4cf6bd;
case 0x4cf6c2:goto L4cf6c2;
case 0x4cf6c5:c.instructions+=5;goto B4cf6c5;
case 0x4cf6c7:c.instructions+=4;goto B4cf6c7;
case 0x4cf6c9:c.instructions+=3;goto B4cf6c9;
case 0x4cf6cb:c.instructions+=2;goto B4cf6cb;
case 0x4cf6ce:c.instructions+=1;goto B4cf6ce;
case 0x4cf6d3:goto L4cf6d3;
case 0x4cf6d5:c.instructions+=2;goto B4cf6d5;
case 0x4cf6d7:c.instructions+=1;goto B4cf6d7;
case 0x4cf6dc:goto L4cf6dc;
case 0x4cf6e3:c.instructions+=1;goto B4cf6e3;
case 0x4cf6e5:goto L4cf6e5;
case 0x4cf6e8:c.instructions+=6;goto B4cf6e8;
case 0x4cf6eb:c.instructions+=5;goto B4cf6eb;
case 0x4cf6ec:c.instructions+=4;goto B4cf6ec;
case 0x4cf6f2:c.instructions+=3;goto B4cf6f2;
case 0x4cf6f8:c.instructions+=2;goto B4cf6f8;
case 0x4cf6f9:c.instructions+=1;goto B4cf6f9;
case 0x4cf6fe:goto L4cf6fe;
case 0x4cf702:c.instructions+=5;goto B4cf702;
case 0x4cf704:c.instructions+=4;goto B4cf704;
case 0x4cf705:c.instructions+=3;goto B4cf705;
case 0x4cf70c:c.instructions+=2;goto B4cf70c;
case 0x4cf70f:c.instructions+=1;goto B4cf70f;
case 0x4cf720:goto L4cf720;
case 0x4cf721:c.instructions+=2;goto B4cf721;
case 0x4cf723:c.instructions+=1;goto B4cf723;
case 0x4cf728:goto L4cf728;
case 0x4cf72d:c.instructions+=1;goto B4cf72d;
case 0x4cf72f:goto L4cf72f;
case 0x4cf730:c.instructions+=1;goto B4cf730;
case 0x4cf735:goto L4cf735;
case 0x4cf738:goto L4cf738;
case 0x4cf73a:c.instructions+=2;goto B4cf73a;
case 0x4cf73b:c.instructions+=1;goto B4cf73b;
case 0x4cf740:goto L4cf740;
case 0x4cf746:c.instructions+=1;goto B4cf746;
case 0x4cf750:goto L4cf750;
case 0x4cf752:c.instructions+=14;goto B4cf752;
case 0x4cf757:c.instructions+=13;goto B4cf757;
case 0x4cf75d:c.instructions+=12;goto B4cf75d;
case 0x4cf75e:c.instructions+=11;goto B4cf75e;
case 0x4cf765:c.instructions+=10;goto B4cf765;
case 0x4cf766:c.instructions+=9;goto B4cf766;
case 0x4cf76a:c.instructions+=8;goto B4cf76a;
case 0x4cf76b:c.instructions+=7;goto B4cf76b;
case 0x4cf76c:c.instructions+=6;goto B4cf76c;
case 0x4cf76d:c.instructions+=5;goto B4cf76d;
case 0x4cf76e:c.instructions+=4;goto B4cf76e;
case 0x4cf770:c.instructions+=3;goto B4cf770;
case 0x4cf771:c.instructions+=2;goto B4cf771;
case 0x4cf775:c.instructions+=1;goto B4cf775;
case 0x4cf77a:goto L4cf77a;
case 0x4cf77c:c.instructions+=12;goto B4cf77c;
case 0x4cf781:c.instructions+=11;goto B4cf781;
case 0x4cf787:c.instructions+=10;goto B4cf787;
case 0x4cf78d:c.instructions+=9;goto B4cf78d;
case 0x4cf793:c.instructions+=8;goto B4cf793;
case 0x4cf799:c.instructions+=7;goto B4cf799;
case 0x4cf79f:c.instructions+=6;goto B4cf79f;
case 0x4cf7a5:c.instructions+=5;goto B4cf7a5;
case 0x4cf7a9:c.instructions+=4;goto B4cf7a9;
case 0x4cf7af:c.instructions+=3;goto B4cf7af;
case 0x4cf7b5:c.instructions+=2;goto B4cf7b5;
case 0x4cf7b9:c.instructions+=1;goto B4cf7b9;
case 0x4cf7bb:goto L4cf7bb;
case 0x4cf7be:c.instructions+=4;goto B4cf7be;
case 0x4cf7c3:c.instructions+=3;goto B4cf7c3;
case 0x4cf7c4:c.instructions+=2;goto B4cf7c4;
case 0x4cf7cb:c.instructions+=1;goto B4cf7cb;
case 0x4cf7d0:goto L4cf7d0;
case 0x4cf7d1:c.instructions+=1;goto B4cf7d1;
case 0x4cf7d6:goto L4cf7d6;
case 0x4cf7d9:c.instructions+=5;goto B4cf7d9;
case 0x4cf7db:c.instructions+=4;goto B4cf7db;
case 0x4cf7e0:c.instructions+=3;goto B4cf7e0;
case 0x4cf7e5:c.instructions+=2;goto B4cf7e5;
case 0x4cf7e6:c.instructions+=1;goto B4cf7e6;
case 0x4cf7eb:goto L4cf7eb;
case 0x4cf7ee:c.instructions+=5;goto B4cf7ee;
case 0x4cf7f1:c.instructions+=4;goto B4cf7f1;
case 0x4cf7f6:c.instructions+=3;goto B4cf7f6;
case 0x4cf7fb:c.instructions+=2;goto B4cf7fb;
case 0x4cf7fc:c.instructions+=1;goto B4cf7fc;
case 0x4cf801:goto L4cf801;
case 0x4cf804:c.instructions+=2;goto B4cf804;
case 0x4cf805:c.instructions+=1;goto B4cf805;
case 0x4cf80a:goto L4cf80a;
case 0x4cf80d:c.instructions+=1;goto B4cf80d;
case 0x4cf80f:goto L4cf80f;
case 0x4cf816:goto L4cf816;
case 0x4cf819:c.instructions+=2;goto B4cf819;
case 0x4cf81e:c.instructions+=1;goto B4cf81e;
case 0x4cf823:goto L4cf823;
case 0x4cf824:c.instructions+=2;goto B4cf824;
case 0x4cf825:c.instructions+=1;goto B4cf825;
case 0x4cf82a:goto L4cf82a;
case 0x4cf82c:c.instructions+=4;goto B4cf82c;
case 0x4cf831:c.instructions+=3;goto B4cf831;
case 0x4cf834:c.instructions+=2;goto B4cf834;
case 0x4cf836:c.instructions+=1;goto B4cf836;
case 0x4cf83c:goto L4cf83c;
case 0x4cf843:goto L4cf843;
case 0x4cf846:c.instructions+=4;goto B4cf846;
case 0x4cf84b:c.instructions+=3;goto B4cf84b;
case 0x4cf850:c.instructions+=2;goto B4cf850;
case 0x4cf851:c.instructions+=1;goto B4cf851;
case 0x4cf856:goto L4cf856;
case 0x4cf859:c.instructions+=2;goto B4cf859;
case 0x4cf85a:c.instructions+=1;goto B4cf85a;
case 0x4cf85f:goto L4cf85f;
case 0x4cf864:goto L4cf864;
case 0x4cf867:c.instructions+=4;goto B4cf867;
case 0x4cf86c:c.instructions+=3;goto B4cf86c;
case 0x4cf871:c.instructions+=2;goto B4cf871;
case 0x4cf872:c.instructions+=1;goto B4cf872;
case 0x4cf877:goto L4cf877;
case 0x4cf87a:c.instructions+=2;goto B4cf87a;
case 0x4cf87b:c.instructions+=1;goto B4cf87b;
case 0x4cf880:goto L4cf880;
case 0x4cf885:goto L4cf885;
case 0x4cf888:c.instructions+=4;goto B4cf888;
case 0x4cf88d:c.instructions+=3;goto B4cf88d;
case 0x4cf892:c.instructions+=2;goto B4cf892;
case 0x4cf893:c.instructions+=1;goto B4cf893;
case 0x4cf898:goto L4cf898;
case 0x4cf89b:c.instructions+=2;goto B4cf89b;
case 0x4cf89c:c.instructions+=1;goto B4cf89c;
case 0x4cf8a1:goto L4cf8a1;
case 0x4cf8a2:c.instructions+=1;goto B4cf8a2;
case 0x4cf8a7:goto L4cf8a7;
case 0x4cf8aa:c.instructions+=1;goto B4cf8aa;
case 0x4cf8af:goto L4cf8af;
case 0x4cf8b4:c.instructions+=2;goto B4cf8b4;
case 0x4cf8b6:c.instructions+=1;goto B4cf8b6;
case 0x4cf8b8:goto L4cf8b8;
case 0x4cf8bd:c.instructions+=1;goto B4cf8bd;
case 0x4cf8c3:goto L4cf8c3;
case 0x4cf8c6:c.instructions+=5;goto B4cf8c6;
case 0x4cf8cb:c.instructions+=4;goto B4cf8cb;
case 0x4cf8d0:c.instructions+=3;goto B4cf8d0;
case 0x4cf8d1:c.instructions+=2;goto B4cf8d1;
case 0x4cf8d8:c.instructions+=1;goto B4cf8d8;
case 0x4cf8dd:goto L4cf8dd;
case 0x4cf8e0:c.instructions+=1;goto B4cf8e0;
case 0x4cf8e5:goto L4cf8e5;
case 0x4cf8e8:c.instructions+=4;goto B4cf8e8;
case 0x4cf8ed:c.instructions+=3;goto B4cf8ed;
case 0x4cf8f2:c.instructions+=2;goto B4cf8f2;
case 0x4cf8f3:c.instructions+=1;goto B4cf8f3;
case 0x4cf8f8:goto L4cf8f8;
case 0x4cf8fb:c.instructions+=2;goto B4cf8fb;
case 0x4cf8fc:c.instructions+=1;goto B4cf8fc;
case 0x4cf901:goto L4cf901;
case 0x4cf907:c.instructions+=7;goto B4cf907;
case 0x4cf909:c.instructions+=6;goto B4cf909;
case 0x4cf90b:c.instructions+=5;goto B4cf90b;
case 0x4cf90e:c.instructions+=4;goto B4cf90e;
case 0x4cf913:c.instructions+=3;goto B4cf913;
case 0x4cf914:c.instructions+=2;goto B4cf914;
case 0x4cf915:c.instructions+=1;goto B4cf915;
case 0x4cf91a:goto L4cf91a;
case 0x4cf91f:c.instructions+=3;goto B4cf91f;
case 0x4cf922:c.instructions+=2;goto B4cf922;
case 0x4cf924:c.instructions+=1;goto B4cf924;
case 0x4cf926:goto L4cf926;
case 0x4cf92b:c.instructions+=1;goto B4cf92b;
case 0x4cf92d:goto L4cf92d;
case 0x4cf934:c.instructions+=1;goto B4cf934;
case 0x4cf936:goto L4cf936;
case 0x4cf939:c.instructions+=5;goto B4cf939;
case 0x4cf93e:c.instructions+=4;goto B4cf93e;
case 0x4cf943:c.instructions+=3;goto B4cf943;
case 0x4cf944:c.instructions+=2;goto B4cf944;
case 0x4cf94b:c.instructions+=1;goto B4cf94b;
case 0x4cf950:goto L4cf950;
case 0x4cf953:goto L4cf953;
case 0x4cf959:c.instructions+=1;goto B4cf959;
case 0x4cf95f:goto L4cf95f;
case 0x4cf962:c.instructions+=4;goto B4cf962;
case 0x4cf967:c.instructions+=3;goto B4cf967;
case 0x4cf96c:c.instructions+=2;goto B4cf96c;
case 0x4cf96d:c.instructions+=1;goto B4cf96d;
case 0x4cf972:goto L4cf972;
case 0x4cf975:c.instructions+=1;goto B4cf975;
case 0x4cf97a:goto L4cf97a;
case 0x4cf97d:c.instructions+=4;goto B4cf97d;
case 0x4cf982:c.instructions+=3;goto B4cf982;
case 0x4cf987:c.instructions+=2;goto B4cf987;
case 0x4cf988:c.instructions+=1;goto B4cf988;
case 0x4cf98d:goto L4cf98d;
case 0x4cf990:c.instructions+=2;goto B4cf990;
case 0x4cf991:c.instructions+=1;goto B4cf991;
case 0x4cf996:goto L4cf996;
case 0x4cf99c:c.instructions+=9;goto B4cf99c;
case 0x4cf99e:c.instructions+=8;goto B4cf99e;
case 0x4cf9a1:c.instructions+=7;goto B4cf9a1;
case 0x4cf9a3:c.instructions+=6;goto B4cf9a3;
case 0x4cf9a6:c.instructions+=5;goto B4cf9a6;
case 0x4cf9a7:c.instructions+=4;goto B4cf9a7;
case 0x4cf9ac:c.instructions+=3;goto B4cf9ac;
case 0x4cf9b1:c.instructions+=2;goto B4cf9b1;
case 0x4cf9b4:c.instructions+=1;goto B4cf9b4;
case 0x4cf9b6:goto L4cf9b6;
case 0x4cf9b9:c.instructions+=4;goto B4cf9b9;
case 0x4cf9be:c.instructions+=3;goto B4cf9be;
case 0x4cf9c3:c.instructions+=2;goto B4cf9c3;
case 0x4cf9c4:c.instructions+=1;goto B4cf9c4;
case 0x4cf9c9:goto L4cf9c9;
case 0x4cf9cc:c.instructions+=2;goto B4cf9cc;
case 0x4cf9cd:c.instructions+=1;goto B4cf9cd;
case 0x4cf9d2:goto L4cf9d2;
case 0x4cf9d9:c.instructions+=1;goto B4cf9d9;
case 0x4cf9db:goto L4cf9db;
case 0x4cf9de:c.instructions+=4;goto B4cf9de;
case 0x4cf9e3:c.instructions+=3;goto B4cf9e3;
case 0x4cf9e8:c.instructions+=2;goto B4cf9e8;
case 0x4cf9e9:c.instructions+=1;goto B4cf9e9;
case 0x4cf9ee:goto L4cf9ee;
case 0x4cf9f1:c.instructions+=2;goto B4cf9f1;
case 0x4cf9f2:c.instructions+=1;goto B4cf9f2;
case 0x4cf9f7:goto L4cf9f7;
case 0x4cf9fe:goto L4cf9fe;
case 0x4cfa01:goto L4cfa01;
case 0x4cfa03:c.instructions+=1;goto B4cfa03;
case 0x4cfa08:goto L4cfa08;
case 0x4cfa0e:c.instructions+=1;goto B4cfa0e;
case 0x4cfa10:goto L4cfa10;
case 0x4cfa13:c.instructions+=4;goto B4cfa13;
case 0x4cfa18:c.instructions+=3;goto B4cfa18;
case 0x4cfa1d:c.instructions+=2;goto B4cfa1d;
case 0x4cfa1e:c.instructions+=1;goto B4cfa1e;
case 0x4cfa23:goto L4cfa23;
case 0x4cfa26:c.instructions+=2;goto B4cfa26;
case 0x4cfa27:c.instructions+=1;goto B4cfa27;
case 0x4cfa2c:goto L4cfa2c;
case 0x4cfa2f:c.instructions+=3;goto B4cfa2f;
case 0x4cfa34:c.instructions+=2;goto B4cfa34;
case 0x4cfa35:c.instructions+=1;goto B4cfa35;
case 0x4cfa3a:goto L4cfa3a;
case 0x4cfa3b:c.instructions+=1;goto B4cfa3b;
case 0x4cfa40:goto L4cfa40;
case 0x4cfa43:c.instructions+=2;goto B4cfa43;
case 0x4cfa48:c.instructions+=1;goto B4cfa48;
case 0x4cfa4d:goto L4cfa4d;
case 0x4cfa4e:c.instructions+=2;goto B4cfa4e;
case 0x4cfa4f:c.instructions+=1;goto B4cfa4f;
case 0x4cfa54:goto L4cfa54;
case 0x4cfa55:c.instructions+=1;goto B4cfa55;
case 0x4cfa5a:goto L4cfa5a;
case 0x4cfa5f:c.instructions+=3;goto B4cfa5f;
case 0x4cfa62:c.instructions+=2;goto B4cfa62;
case 0x4cfa64:c.instructions+=1;goto B4cfa64;
case 0x4cfa66:goto L4cfa66;
case 0x4cfa69:c.instructions+=6;goto B4cfa69;
case 0x4cfa6c:c.instructions+=5;goto B4cfa6c;
case 0x4cfa6d:c.instructions+=4;goto B4cfa6d;
case 0x4cfa73:c.instructions+=3;goto B4cfa73;
case 0x4cfa79:c.instructions+=2;goto B4cfa79;
case 0x4cfa7a:c.instructions+=1;goto B4cfa7a;
case 0x4cfa7f:goto L4cfa7f;
case 0x4cfa83:c.instructions+=8;goto B4cfa83;
case 0x4cfa84:c.instructions+=7;goto B4cfa84;
case 0x4cfa86:c.instructions+=6;goto B4cfa86;
case 0x4cfa87:c.instructions+=5;goto B4cfa87;
case 0x4cfa88:c.instructions+=4;goto B4cfa88;
case 0x4cfa89:c.instructions+=3;goto B4cfa89;
case 0x4cfa90:c.instructions+=2;goto B4cfa90;
case 0x4cfa93:c.instructions+=1;goto B4cfa93;
case 0x4cfac0:goto L4cfac0;
case 0x4cfac6:c.instructions+=2;goto B4cfac6;
case 0x4cfac8:c.instructions+=1;goto B4cfac8;
case 0x4cfaca:goto L4cfaca;
case 0x4cfad1:c.instructions+=1;goto B4cfad1;
case 0x4cfad3:goto L4cfad3;
case 0x4cfad5:c.instructions+=1;goto B4cfad5;
case 0x4cfada:goto L4cfada;
case 0x4cfadd:goto L4cfadd;
case 0x4cfadf:c.instructions+=1;goto B4cfadf;
case 0x4cfaf0:goto L4cfaf0;
case 0x4cfaf1:c.instructions+=2;goto B4cfaf1;
case 0x4cfaf3:c.instructions+=1;goto B4cfaf3;
case 0x4cfaf8:goto L4cfaf8;
case 0x4cfafd:c.instructions+=1;goto B4cfafd;
case 0x4cfaff:goto L4cfaff;
case 0x4cfb00:c.instructions+=1;goto B4cfb00;
case 0x4cfb05:goto L4cfb05;
case 0x4cfb08:goto L4cfb08;
case 0x4cfb0a:c.instructions+=2;goto B4cfb0a;
case 0x4cfb0b:c.instructions+=1;goto B4cfb0b;
case 0x4cfb10:goto L4cfb10;
case 0x4cfb16:c.instructions+=1;goto B4cfb16;
case 0x4cfb20:goto L4cfb20;
case 0x4cfb22:c.instructions+=7;goto B4cfb22;
case 0x4cfb27:c.instructions+=6;goto B4cfb27;
case 0x4cfb2d:c.instructions+=5;goto B4cfb2d;
case 0x4cfb2e:c.instructions+=4;goto B4cfb2e;
case 0x4cfb35:c.instructions+=3;goto B4cfb35;
case 0x4cfb36:c.instructions+=2;goto B4cfb36;
case 0x4cfb38:c.instructions+=1;goto B4cfb38;
case 0x4cfb3d:goto L4cfb3d;
case 0x4cfb40:c.instructions+=4;goto B4cfb40;
case 0x4cfb44:c.instructions+=3;goto B4cfb44;
case 0x4cfb46:c.instructions+=2;goto B4cfb46;
case 0x4cfb4e:c.instructions+=1;goto B4cfb4e;
case 0x4cfb50:goto L4cfb50;
case 0x4cfb54:c.instructions+=3;goto B4cfb54;
case 0x4cfb55:c.instructions+=2;goto B4cfb55;
case 0x4cfb57:c.instructions+=1;goto B4cfb57;
case 0x4cfb5c:goto L4cfb5c;
case 0x4cfb60:c.instructions+=3;goto B4cfb60;
case 0x4cfb67:c.instructions+=2;goto B4cfb67;
case 0x4cfb6a:c.instructions+=1;goto B4cfb6a;
case 0x4cfb6b:goto L4cfb6b;
case 0x4cfb6f:c.instructions+=4;goto B4cfb6f;
case 0x4cfb71:c.instructions+=3;goto B4cfb71;
case 0x4cfb78:c.instructions+=2;goto B4cfb78;
case 0x4cfb7b:c.instructions+=1;goto B4cfb7b;
case 0x4cfb80:goto L4cfb80;
case 0x4cfb81:c.instructions+=2;goto B4cfb81;
case 0x4cfb83:c.instructions+=1;goto B4cfb83;
case 0x4cfb88:goto L4cfb88;
case 0x4cfb8d:c.instructions+=1;goto B4cfb8d;
case 0x4cfb8f:goto L4cfb8f;
case 0x4cfb90:c.instructions+=1;goto B4cfb90;
case 0x4cfb95:goto L4cfb95;
case 0x4cfb98:goto L4cfb98;
case 0x4cfb9a:c.instructions+=2;goto B4cfb9a;
case 0x4cfb9b:c.instructions+=1;goto B4cfb9b;
case 0x4cfba0:goto L4cfba0;
case 0x4cfba2:c.instructions+=12;goto B4cfba2;
case 0x4cfba7:c.instructions+=11;goto B4cfba7;
case 0x4cfbad:c.instructions+=10;goto B4cfbad;
case 0x4cfbae:c.instructions+=9;goto B4cfbae;
case 0x4cfbb5:c.instructions+=8;goto B4cfbb5;
case 0x4cfbb6:c.instructions+=7;goto B4cfbb6;
case 0x4cfbba:c.instructions+=6;goto B4cfbba;
case 0x4cfbbb:c.instructions+=5;goto B4cfbbb;
case 0x4cfbbc:c.instructions+=4;goto B4cfbbc;
case 0x4cfbbe:c.instructions+=3;goto B4cfbbe;
case 0x4cfbbf:c.instructions+=2;goto B4cfbbf;
case 0x4cfbc3:c.instructions+=1;goto B4cfbc3;
case 0x4cfbc8:goto L4cfbc8;
case 0x4cfbcb:c.instructions+=12;goto B4cfbcb;
case 0x4cfbd1:c.instructions+=11;goto B4cfbd1;
case 0x4cfbdb:c.instructions+=10;goto B4cfbdb;
case 0x4cfbe5:c.instructions+=9;goto B4cfbe5;
case 0x4cfbeb:c.instructions+=8;goto B4cfbeb;
case 0x4cfbed:c.instructions+=7;goto B4cfbed;
case 0x4cfbef:c.instructions+=6;goto B4cfbef;
case 0x4cfbf2:c.instructions+=5;goto B4cfbf2;
case 0x4cfbfa:c.instructions+=4;goto B4cfbfa;
case 0x4cfbff:c.instructions+=3;goto B4cfbff;
case 0x4cfc00:c.instructions+=2;goto B4cfc00;
case 0x4cfc05:c.instructions+=1;goto B4cfc05;
case 0x4cfc0a:goto L4cfc0a;
case 0x4cfc0b:c.instructions+=2;goto B4cfc0b;
case 0x4cfc0c:c.instructions+=1;goto B4cfc0c;
case 0x4cfc11:goto L4cfc11;
case 0x4cfc14:c.instructions+=2;goto B4cfc14;
case 0x4cfc15:c.instructions+=1;goto B4cfc15;
case 0x4cfc1a:goto L4cfc1a;
case 0x4cfc1f:c.instructions+=4;goto B4cfc1f;
case 0x4cfc22:c.instructions+=3;goto B4cfc22;
case 0x4cfc24:c.instructions+=2;goto B4cfc24;
case 0x4cfc2a:c.instructions+=1;goto B4cfc2a;
case 0x4cfc2f:goto L4cfc2f;
case 0x4cfc31:c.instructions+=4;goto B4cfc31;
case 0x4cfc33:c.instructions+=3;goto B4cfc33;
case 0x4cfc34:c.instructions+=2;goto B4cfc34;
case 0x4cfc37:c.instructions+=1;goto B4cfc37;
case 0x4cfc3c:goto L4cfc3c;
case 0x4cfc3e:c.instructions+=2;goto B4cfc3e;
case 0x4cfc40:c.instructions+=1;goto B4cfc40;
case 0x4cfc45:goto L4cfc45;
case 0x4cfc4b:c.instructions+=1;goto B4cfc4b;
case 0x4cfc4d:goto L4cfc4d;
case 0x4cfc50:c.instructions+=6;goto B4cfc50;
case 0x4cfc53:c.instructions+=5;goto B4cfc53;
case 0x4cfc54:c.instructions+=4;goto B4cfc54;
case 0x4cfc5a:c.instructions+=3;goto B4cfc5a;
case 0x4cfc60:c.instructions+=2;goto B4cfc60;
case 0x4cfc61:c.instructions+=1;goto B4cfc61;
case 0x4cfc66:goto L4cfc66;
case 0x4cfc6a:c.instructions+=6;goto B4cfc6a;
case 0x4cfc6b:c.instructions+=5;goto B4cfc6b;
case 0x4cfc6d:c.instructions+=4;goto B4cfc6d;
case 0x4cfc6e:c.instructions+=3;goto B4cfc6e;
case 0x4cfc75:c.instructions+=2;goto B4cfc75;
case 0x4cfc78:c.instructions+=1;goto B4cfc78;
case 0x4cfc80:goto L4cfc80;
case 0x4cfc81:c.instructions+=2;goto B4cfc81;
case 0x4cfc83:c.instructions+=1;goto B4cfc83;
case 0x4cfc88:goto L4cfc88;
case 0x4cfc8d:c.instructions+=1;goto B4cfc8d;
case 0x4cfc8f:goto L4cfc8f;
case 0x4cfc90:c.instructions+=1;goto B4cfc90;
case 0x4cfc95:goto L4cfc95;
case 0x4cfc98:goto L4cfc98;
case 0x4cfc9a:c.instructions+=2;goto B4cfc9a;
case 0x4cfc9b:c.instructions+=1;goto B4cfc9b;
case 0x4cfca0:goto L4cfca0;
case 0x4cfca6:c.instructions+=1;goto B4cfca6;
case 0x4cfcb0:goto L4cfcb0;
case 0x4cfcb1:c.instructions+=14;goto B4cfcb1;
case 0x4cfcb3:c.instructions+=13;goto B4cfcb3;
case 0x4cfcb6:c.instructions+=12;goto B4cfcb6;
case 0x4cfcbc:c.instructions+=11;goto B4cfcbc;
case 0x4cfcbf:c.instructions+=10;goto B4cfcbf;
case 0x4cfcc0:c.instructions+=9;goto B4cfcc0;
case 0x4cfcc3:c.instructions+=8;goto B4cfcc3;
case 0x4cfcc6:c.instructions+=7;goto B4cfcc6;
case 0x4cfcca:c.instructions+=6;goto B4cfcca;
case 0x4cfcce:c.instructions+=5;goto B4cfcce;
case 0x4cfcd2:c.instructions+=4;goto B4cfcd2;
case 0x4cfcd7:c.instructions+=3;goto B4cfcd7;
case 0x4cfcd9:c.instructions+=2;goto B4cfcd9;
case 0x4cfcda:c.instructions+=1;goto B4cfcda;
case 0x4cfcdc:goto L4cfcdc;
case 0x4cfce2:c.instructions+=3;goto B4cfce2;
case 0x4cfce3:c.instructions+=2;goto B4cfce3;
case 0x4cfce8:c.instructions+=1;goto B4cfce8;
case 0x4cfced:goto L4cfced;
case 0x4cfcf0:c.instructions+=2;goto B4cfcf0;
case 0x4cfcf2:c.instructions+=1;goto B4cfcf2;
case 0x4cfcf4:goto L4cfcf4;
case 0x4cfcf6:c.instructions+=3;goto B4cfcf6;
case 0x4cfcfb:c.instructions+=2;goto B4cfcfb;
case 0x4cfd00:c.instructions+=1;goto B4cfd00;
case 0x4cfd04:goto L4cfd04;
case 0x4cfd06:goto L4cfd06;
case 0x4cfd08:c.instructions+=7;goto B4cfd08;
case 0x4cfd09:c.instructions+=6;goto B4cfd09;
case 0x4cfd0c:c.instructions+=5;goto B4cfd0c;
case 0x4cfd0d:c.instructions+=4;goto B4cfd0d;
case 0x4cfd0e:c.instructions+=3;goto B4cfd0e;
case 0x4cfd12:c.instructions+=2;goto B4cfd12;
case 0x4cfd13:c.instructions+=1;goto B4cfd13;
case 0x4cfd18:goto L4cfd18;
case 0x4cfd1b:c.instructions+=4;goto B4cfd1b;
case 0x4cfd1f:c.instructions+=3;goto B4cfd1f;
case 0x4cfd20:c.instructions+=2;goto B4cfd20;
case 0x4cfd22:c.instructions+=1;goto B4cfd22;
case 0x4cfd27:goto L4cfd27;
case 0x4cfd2b:c.instructions+=5;goto B4cfd2b;
case 0x4cfd2c:c.instructions+=4;goto B4cfd2c;
case 0x4cfd2d:c.instructions+=3;goto B4cfd2d;
case 0x4cfd2f:c.instructions+=2;goto B4cfd2f;
case 0x4cfd30:c.instructions+=1;goto B4cfd30;
case 0x4cfd31:goto L4cfd31;
case 0x4cfd33:c.instructions+=2;goto B4cfd33;
case 0x4cfd35:c.instructions+=1;goto B4cfd35;
case 0x4cfd37:goto L4cfd37;
case 0x4cfd38:c.instructions+=1;goto B4cfd38;
case 0x4cfd3d:goto L4cfd3d;
case 0x4cfd40:c.instructions+=1;goto B4cfd40;
case 0x4cfd46:goto L4cfd46;
case 0x4cfd4b:c.instructions+=1;goto B4cfd4b;
case 0x4cfd50:goto L4cfd50;
case 0x4cfd53:c.instructions+=7;goto B4cfd53;
case 0x4cfd56:c.instructions+=6;goto B4cfd56;
case 0x4cfd57:c.instructions+=5;goto B4cfd57;
case 0x4cfd5c:c.instructions+=4;goto B4cfd5c;
case 0x4cfd61:c.instructions+=3;goto B4cfd61;
case 0x4cfd66:c.instructions+=2;goto B4cfd66;
case 0x4cfd67:c.instructions+=1;goto B4cfd67;
case 0x4cfd6c:goto L4cfd6c;
case 0x4cfd6f:c.instructions+=7;goto B4cfd6f;
case 0x4cfd70:c.instructions+=6;goto B4cfd70;
case 0x4cfd72:c.instructions+=5;goto B4cfd72;
case 0x4cfd76:c.instructions+=4;goto B4cfd76;
case 0x4cfd77:c.instructions+=3;goto B4cfd77;
case 0x4cfd79:c.instructions+=2;goto B4cfd79;
case 0x4cfd7a:c.instructions+=1;goto B4cfd7a;
case 0x4cfd80:goto L4cfd80;
case 0x4cfd84:c.instructions+=10;goto B4cfd84;
case 0x4cfd85:c.instructions+=9;goto B4cfd85;
case 0x4cfd87:c.instructions+=8;goto B4cfd87;
case 0x4cfd8b:c.instructions+=7;goto B4cfd8b;
case 0x4cfd8e:c.instructions+=6;goto B4cfd8e;
case 0x4cfd92:c.instructions+=5;goto B4cfd92;
case 0x4cfd96:c.instructions+=4;goto B4cfd96;
case 0x4cfd99:c.instructions+=3;goto B4cfd99;
case 0x4cfd9e:c.instructions+=2;goto B4cfd9e;
case 0x4cfda0:c.instructions+=1;goto B4cfda0;
case 0x4cfda2:goto L4cfda2;
case 0x4cfda8:c.instructions+=3;goto B4cfda8;
case 0x4cfda9:c.instructions+=2;goto B4cfda9;
case 0x4cfdae:c.instructions+=1;goto B4cfdae;
case 0x4cfdb3:goto L4cfdb3;
case 0x4cfdb7:c.instructions+=1;goto B4cfdb7;
case 0x4cfdb9:goto L4cfdb9;
case 0x4cfdbb:c.instructions+=2;goto B4cfdbb;
case 0x4cfdbd:c.instructions+=1;goto B4cfdbd;
case 0x4cfdbf:goto L4cfdbf;
case 0x4cfdc0:c.instructions+=1;goto B4cfdc0;
case 0x4cfdc5:goto L4cfdc5;
case 0x4cfdc8:c.instructions+=1;goto B4cfdc8;
case 0x4cfdce:goto L4cfdce;
case 0x4cfdd3:c.instructions+=1;goto B4cfdd3;
case 0x4cfdd8:goto L4cfdd8;
case 0x4cfddb:c.instructions+=7;goto B4cfddb;
case 0x4cfdde:c.instructions+=6;goto B4cfdde;
case 0x4cfddf:c.instructions+=5;goto B4cfddf;
case 0x4cfde4:c.instructions+=4;goto B4cfde4;
case 0x4cfde9:c.instructions+=3;goto B4cfde9;
case 0x4cfdee:c.instructions+=2;goto B4cfdee;
case 0x4cfdef:c.instructions+=1;goto B4cfdef;
case 0x4cfdf4:goto L4cfdf4;
case 0x4cfdf7:c.instructions+=1;goto B4cfdf7;
case 0x4cfdf9:goto L4cfdf9;
case 0x4cfdfd:c.instructions+=2;goto B4cfdfd;
case 0x4cfdfe:c.instructions+=1;goto B4cfdfe;
case 0x4cfe10:goto L4cfe10;
case 0x4cfe11:c.instructions+=6;goto B4cfe11;
case 0x4cfe13:c.instructions+=5;goto B4cfe13;
case 0x4cfe17:c.instructions+=4;goto B4cfe17;
case 0x4cfe1b:c.instructions+=3;goto B4cfe1b;
case 0x4cfe20:c.instructions+=2;goto B4cfe20;
case 0x4cfe22:c.instructions+=1;goto B4cfe22;
case 0x4cfe24:goto L4cfe24;
case 0x4cfe29:c.instructions+=3;goto B4cfe29;
case 0x4cfe2a:c.instructions+=2;goto B4cfe2a;
case 0x4cfe2f:c.instructions+=1;goto B4cfe2f;
case 0x4cfe34:goto L4cfe34;
case 0x4cfe37:c.instructions+=2;goto B4cfe37;
case 0x4cfe39:c.instructions+=1;goto B4cfe39;
case 0x4cfe3b:goto L4cfe3b;
case 0x4cfe3d:c.instructions+=2;goto B4cfe3d;
case 0x4cfe3f:c.instructions+=1;goto B4cfe3f;
case 0x4cfe41:goto L4cfe41;
case 0x4cfe42:c.instructions+=1;goto B4cfe42;
case 0x4cfe47:goto L4cfe47;
case 0x4cfe4a:c.instructions+=1;goto B4cfe4a;
case 0x4cfe50:goto L4cfe50;
case 0x4cfe55:c.instructions+=1;goto B4cfe55;
case 0x4cfe5a:goto L4cfe5a;
case 0x4cfe5d:c.instructions+=7;goto B4cfe5d;
case 0x4cfe60:c.instructions+=6;goto B4cfe60;
case 0x4cfe61:c.instructions+=5;goto B4cfe61;
case 0x4cfe66:c.instructions+=4;goto B4cfe66;
case 0x4cfe6b:c.instructions+=3;goto B4cfe6b;
case 0x4cfe70:c.instructions+=2;goto B4cfe70;
case 0x4cfe71:c.instructions+=1;goto B4cfe71;
case 0x4cfe76:goto L4cfe76;
case 0x4cfe79:c.instructions+=1;goto B4cfe79;
case 0x4cfe7b:goto L4cfe7b;
case 0x4cfe7f:c.instructions+=2;goto B4cfe7f;
case 0x4cfe80:c.instructions+=1;goto B4cfe80;
case 0x4cfe90:goto L4cfe90;
case 0x4cfe91:c.instructions+=4;goto B4cfe91;
case 0x4cfe93:c.instructions+=3;goto B4cfe93;
case 0x4cfe95:c.instructions+=2;goto B4cfe95;
case 0x4cfe97:c.instructions+=1;goto B4cfe97;
case 0x4cfe99:goto L4cfe99;
case 0x4cfe9a:c.instructions+=1;goto B4cfe9a;
case 0x4cfe9f:goto L4cfe9f;
case 0x4cfea2:c.instructions+=1;goto B4cfea2;
case 0x4cfea8:goto L4cfea8;
case 0x4cfeab:c.instructions+=10;goto B4cfeab;
case 0x4cfeae:c.instructions+=9;goto B4cfeae;
case 0x4cfeb3:c.instructions+=8;goto B4cfeb3;
case 0x4cfeb5:c.instructions+=7;goto B4cfeb5;
case 0x4cfeba:c.instructions+=6;goto B4cfeba;
case 0x4cfebf:c.instructions+=5;goto B4cfebf;
case 0x4cfec4:c.instructions+=4;goto B4cfec4;
case 0x4cfec9:c.instructions+=3;goto B4cfec9;
case 0x4cfece:c.instructions+=2;goto B4cfece;
case 0x4cfecf:c.instructions+=1;goto B4cfecf;
case 0x4cfed4:goto L4cfed4;
case 0x4cfed7:c.instructions+=3;goto B4cfed7;
case 0x4cfed9:c.instructions+=2;goto B4cfed9;
case 0x4cfeda:c.instructions+=1;goto B4cfeda;
case 0x4cfee0:goto L4cfee0;
case 0x4cfee1:c.instructions+=16;goto B4cfee1;
case 0x4cfee3:c.instructions+=15;goto B4cfee3;
case 0x4cfee6:c.instructions+=14;goto B4cfee6;
case 0x4cfee8:c.instructions+=13;goto B4cfee8;
case 0x4cfeed:c.instructions+=12;goto B4cfeed;
case 0x4cfef3:c.instructions+=11;goto B4cfef3;
case 0x4cfef4:c.instructions+=10;goto B4cfef4;
case 0x4cfefb:c.instructions+=9;goto B4cfefb;
case 0x4cff01:c.instructions+=8;goto B4cff01;
case 0x4cff06:c.instructions+=7;goto B4cff06;
case 0x4cff08:c.instructions+=6;goto B4cff08;
case 0x4cff09:c.instructions+=5;goto B4cff09;
case 0x4cff0a:c.instructions+=4;goto B4cff0a;
case 0x4cff0b:c.instructions+=3;goto B4cff0b;
case 0x4cff11:c.instructions+=2;goto B4cff11;
case 0x4cff13:c.instructions+=1;goto B4cff13;
case 0x4cff15:goto L4cff15;
case 0x4cff1a:c.instructions+=3;goto B4cff1a;
case 0x4cff1b:c.instructions+=2;goto B4cff1b;
case 0x4cff20:c.instructions+=1;goto B4cff20;
case 0x4cff25:goto L4cff25;
case 0x4cff2a:c.instructions+=8;goto B4cff2a;
case 0x4cff31:c.instructions+=7;goto B4cff31;
case 0x4cff38:c.instructions+=6;goto B4cff38;
case 0x4cff39:c.instructions+=5;goto B4cff39;
case 0x4cff3a:c.instructions+=4;goto B4cff3a;
case 0x4cff3b:c.instructions+=3;goto B4cff3b;
case 0x4cff3d:c.instructions+=2;goto B4cff3d;
case 0x4cff3e:c.instructions+=1;goto B4cff3e;
case 0x4cff41:goto L4cff41;
case 0x4cff44:c.instructions+=1;goto B4cff44;
case 0x4cff4a:goto L4cff4a;
case 0x4cff4d:c.instructions+=2;goto B4cff4d;
case 0x4cff4f:c.instructions+=1;goto B4cff4f;
case 0x4cff55:goto L4cff55;
case 0x4cff58:c.instructions+=2;goto B4cff58;
case 0x4cff5b:c.instructions+=1;goto B4cff5b;
case 0x4cff61:goto L4cff61;
case 0x4cff64:c.instructions+=1;goto B4cff64;
case 0x4cff6a:goto L4cff6a;
case 0x4cff6f:goto L4cff6f;
case 0x4cff71:c.instructions+=1;goto B4cff71;
case 0x4cff77:goto L4cff77;
case 0x4cff7a:c.instructions+=1;goto B4cff7a;
case 0x4cff80:goto L4cff80;
case 0x4cff83:c.instructions+=2;goto B4cff83;
case 0x4cff86:c.instructions+=1;goto B4cff86;
case 0x4cff8c:goto L4cff8c;
case 0x4cff93:goto L4cff93;
case 0x4cff95:c.instructions+=2;goto B4cff95;
case 0x4cff9a:c.instructions+=1;goto B4cff9a;
case 0x4cff9f:goto L4cff9f;
case 0x4cffa1:c.instructions+=8;goto B4cffa1;
case 0x4cffa8:c.instructions+=7;goto B4cffa8;
case 0x4cffaf:c.instructions+=6;goto B4cffaf;
case 0x4cffb0:c.instructions+=5;goto B4cffb0;
case 0x4cffb1:c.instructions+=4;goto B4cffb1;
case 0x4cffb2:c.instructions+=3;goto B4cffb2;
case 0x4cffb4:c.instructions+=2;goto B4cffb4;
case 0x4cffb5:c.instructions+=1;goto B4cffb5;
case 0x4cffb8:goto L4cffb8;
case 0x4cffbd:goto L4cffbd;
case 0x4cffbf:c.instructions+=1;goto B4cffbf;
case 0x4cffc5:goto L4cffc5;
case 0x4cffca:goto L4cffca;
case 0x4cffcc:c.instructions+=4;goto B4cffcc;
case 0x4cffce:c.instructions+=3;goto B4cffce;
case 0x4cffd3:c.instructions+=2;goto B4cffd3;
case 0x4cffd5:c.instructions+=1;goto B4cffd5;
case 0x4cffda:goto L4cffda;
case 0x4cffdf:c.instructions+=1;goto B4cffdf;
case 0x4cffe4:goto L4cffe4;
case 0x4cffe5:c.instructions+=6;goto B4cffe5;
case 0x4cffef:c.instructions+=5;goto B4cffef;
case 0x4cfff2:c.instructions+=4;goto B4cfff2;
case 0x4cfff7:c.instructions+=3;goto B4cfff7;
case 0x4cfff8:c.instructions+=2;goto B4cfff8;
case 0x4cfffa:c.instructions+=1;goto B4cfffa;
case 0x4cffff:goto L4cffff;
default:missing_instruction(c.pc);}
B4cf001:L4cf001:{c.instructions+=3;NFSU2_TR(0x4cf001);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf002:{NFSU2_TR(0x4cf002);
w4(R+4,u32(0x832dacull));
}
B4cf007:{NFSU2_TR(0x4cf007);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf00cull));
TAIL_STATIC(0x5ce510u,5ce);
}
B4cf00c:L4cf00c:{c.instructions+=2;NFSU2_TR(0x4cf00c);
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
B4cf00e:{NFSU2_TR(0x4cf00e);
if(r1(R+518)){{goto L4cf160;}}
}
B4cf014:L4cf014:{c.instructions+=3;NFSU2_TR(0x4cf014);
w4(R+4,u32(0x832dacull));
}
B4cf019:{NFSU2_TR(0x4cf019);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cf020:{NFSU2_TR(0x4cf020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf025ull));
TAIL_STATIC(0x488b50u,488);
}
B4cf025:L4cf025:{c.instructions+=4;NFSU2_TR(0x4cf025);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x99ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cf02c:{NFSU2_TR(0x4cf02c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cf02d:{NFSU2_TR(0x4cf02d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cf02e:{NFSU2_TR(0x4cf02e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf031:L4cf031:{c.instructions+=5;NFSU2_TR(0x4cf031);
__builtin_memmove((R+0),gp(0x836508),4);
}
B4cf036:{NFSU2_TR(0x4cf036);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cf038:{NFSU2_TR(0x4cf038);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf039:{NFSU2_TR(0x4cf039);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4cf03c:{NFSU2_TR(0x4cf03c);
if(r1(R+518)){{goto L4cf064;}}
}
B4cf03e:L4cf03e:{c.instructions+=3;NFSU2_TR(0x4cf03e);
__builtin_memmove((R+4),gp(0x836500),4);
}
B4cf044:{NFSU2_TR(0x4cf044);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cf046:{NFSU2_TR(0x4cf046);
if(r1(R+518)){{goto L4cf064;}}
}
B4cf048:L4cf048:{c.instructions+=4;NFSU2_TR(0x4cf048);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf049:{NFSU2_TR(0x4cf049);
u8 U[4];
w4(U+0,u32(0x791898ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf04e:{NFSU2_TR(0x4cf04e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf04f:{NFSU2_TR(0x4cf04f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf054ull));
TAIL_STATIC(0x495400u,495);
}
B4cf054:L4cf054:{c.instructions+=3;NFSU2_TR(0x4cf054);
u8 U[4];
w4(U+0,u32(0x791898ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf059:{NFSU2_TR(0x4cf059);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf05a:{NFSU2_TR(0x4cf05a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf05full));
TAIL_STATIC(0x495500u,495);
}
B4cf05f:L4cf05f:{c.instructions+=2;NFSU2_TR(0x4cf05f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4cf062:{NFSU2_TR(0x4cf062);
{goto L4cf07e;}
}
B4cf064:L4cf064:{c.instructions+=2;NFSU2_TR(0x4cf064);
u8 U[4];
w4(U+0,u32(0x791898ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf069:{NFSU2_TR(0x4cf069);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf06eull));
TAIL_STATIC(0x505450u,505);
}
B4cf06e:L4cf06e:{c.instructions+=3;NFSU2_TR(0x4cf06e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf06f:{NFSU2_TR(0x4cf06f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf070:{NFSU2_TR(0x4cf070);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf075ull));
TAIL_STATIC(0x5379c0u,537);
}
B4cf075:L4cf075:{c.instructions+=2;NFSU2_TR(0x4cf075);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf076:{NFSU2_TR(0x4cf076);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf07bull));
TAIL_STATIC(0x50ca00u,50c);
}
B4cf07b:L4cf07b:{c.instructions+=1;NFSU2_TR(0x4cf07b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cf07e:L4cf07e:{c.instructions+=3;NFSU2_TR(0x4cf07e);
__builtin_memmove((R+0),gp(0x836510),4);
}
B4cf083:{NFSU2_TR(0x4cf083);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cf085:{NFSU2_TR(0x4cf085);
if(r1(R+518)){{goto L4cf0ad;}}
}
B4cf087:L4cf087:{c.instructions+=3;NFSU2_TR(0x4cf087);
__builtin_memmove((R+4),gp(0x836500),4);
}
B4cf08d:{NFSU2_TR(0x4cf08d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cf08f:{NFSU2_TR(0x4cf08f);
if(r1(R+518)){{goto L4cf0ad;}}
}
B4cf091:L4cf091:{c.instructions+=4;NFSU2_TR(0x4cf091);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf092:{NFSU2_TR(0x4cf092);
u8 U[4];
w4(U+0,u32(0x791888ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf097:{NFSU2_TR(0x4cf097);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf098:{NFSU2_TR(0x4cf098);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf09dull));
TAIL_STATIC(0x495400u,495);
}
B4cf09d:L4cf09d:{c.instructions+=3;NFSU2_TR(0x4cf09d);
u8 U[4];
w4(U+0,u32(0x791888ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf0a2:{NFSU2_TR(0x4cf0a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf0a3:{NFSU2_TR(0x4cf0a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf0a8ull));
TAIL_STATIC(0x495500u,495);
}
B4cf0a8:L4cf0a8:{c.instructions+=2;NFSU2_TR(0x4cf0a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4cf0ab:{NFSU2_TR(0x4cf0ab);
{goto L4cf0c7;}
}
B4cf0ad:L4cf0ad:{c.instructions+=2;NFSU2_TR(0x4cf0ad);
u8 U[4];
w4(U+0,u32(0x791888ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf0b2:{NFSU2_TR(0x4cf0b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf0b7ull));
TAIL_STATIC(0x505450u,505);
}
B4cf0b7:L4cf0b7:{c.instructions+=3;NFSU2_TR(0x4cf0b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf0b8:{NFSU2_TR(0x4cf0b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf0b9:{NFSU2_TR(0x4cf0b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf0beull));
TAIL_STATIC(0x5379c0u,537);
}
B4cf0be:L4cf0be:{c.instructions+=2;NFSU2_TR(0x4cf0be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf0bf:{NFSU2_TR(0x4cf0bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf0c4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4cf0c4:L4cf0c4:{c.instructions+=1;NFSU2_TR(0x4cf0c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cf0c7:L4cf0c7:{c.instructions+=4;NFSU2_TR(0x4cf0c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf0cd:{NFSU2_TR(0x4cf0cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cf0cf:{NFSU2_TR(0x4cf0cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cf0d0:{NFSU2_TR(0x4cf0d0);
if(r1(R+518)){{goto L4cf159;}}
}
B4cf0d6:L4cf0d6:{c.instructions+=2;NFSU2_TR(0x4cf0d6);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf0db:{NFSU2_TR(0x4cf0db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf0e0ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4cf0e0:L4cf0e0:{c.instructions+=3;NFSU2_TR(0x4cf0e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cf0e3:{NFSU2_TR(0x4cf0e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cf0e5:{NFSU2_TR(0x4cf0e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cf159;}}
}
B4cf0e7:L4cf0e7:{c.instructions+=3;NFSU2_TR(0x4cf0e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf0ed:{NFSU2_TR(0x4cf0ed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cf0f0:{NFSU2_TR(0x4cf0f0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4cf152;}}
}
B4cf0f2:L4cf0f2:{c.instructions+=3;NFSU2_TR(0x4cf0f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cf0f8:{NFSU2_TR(0x4cf0f8);
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
B4cf0fa:{NFSU2_TR(0x4cf0fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cf159;}}
}
B4cf0fc:L4cf0fc:{c.instructions+=3;NFSU2_TR(0x4cf0fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf102:{NFSU2_TR(0x4cf102);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf103:{NFSU2_TR(0x4cf103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf108ull));
TAIL_STATIC(0x510ae0u,510);
}
B4cf108:L4cf108:{c.instructions+=2;NFSU2_TR(0x4cf108);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf109:{NFSU2_TR(0x4cf109);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf10eull));
TAIL_STATIC(0x510ad0u,510);
}
B4cf10e:L4cf10e:{c.instructions+=3;NFSU2_TR(0x4cf10e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf10f:{NFSU2_TR(0x4cf10f);
w4(R+4,u32(0x832dacull));
}
B4cf114:{NFSU2_TR(0x4cf114);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf119ull));
TAIL_STATIC(0x5ce510u,5ce);
}
B4cf119:L4cf119:{c.instructions+=2;NFSU2_TR(0x4cf119);
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
B4cf11b:{NFSU2_TR(0x4cf11b);
if(r1(R+518)){{goto L4cf159;}}
}
B4cf11d:L4cf11d:{c.instructions+=3;NFSU2_TR(0x4cf11d);
w4(R+4,u32(0x832dacull));
}
B4cf122:{NFSU2_TR(0x4cf122);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cf129:{NFSU2_TR(0x4cf129);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf12eull));
TAIL_STATIC(0x488b50u,488);
}
B4cf12e:L4cf12e:{c.instructions+=5;NFSU2_TR(0x4cf12e);
__builtin_memmove((R+4),(R+24),4);
}
B4cf130:{NFSU2_TR(0x4cf130);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x99ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cf137:{NFSU2_TR(0x4cf137);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9aull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cf13e:{NFSU2_TR(0x4cf13e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cf148:{NFSU2_TR(0x4cf148);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf14dull));
TAIL_STATIC(0x4b59d0u,4b5);
}
B4cf14d:L4cf14d:{c.instructions+=3;NFSU2_TR(0x4cf14d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cf14e:{NFSU2_TR(0x4cf14e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cf14f:{NFSU2_TR(0x4cf14f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf152:L4cf152:{c.instructions+=2;NFSU2_TR(0x4cf152);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4cf153:{NFSU2_TR(0x4cf153);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cf159:L4cf159:{c.instructions+=2;NFSU2_TR(0x4cf159);
__builtin_memmove((R+4),(R+24),4);
}
B4cf15b:{NFSU2_TR(0x4cf15b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf160ull));
TAIL_STATIC(0x4b59d0u,4b5);
}
B4cf160:L4cf160:{c.instructions+=3;NFSU2_TR(0x4cf160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cf161:{NFSU2_TR(0x4cf161);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cf162:{NFSU2_TR(0x4cf162);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf170:L4cf170:{c.instructions+=10;NFSU2_TR(0x4cf170);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf171:{NFSU2_TR(0x4cf171);
__builtin_memmove((R+20),(R+16),4);
}
B4cf173:{NFSU2_TR(0x4cf173);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf174:{NFSU2_TR(0x4cf174);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf175:{NFSU2_TR(0x4cf175);
__builtin_memmove((R+24),(R+4),4);
}
B4cf177:{NFSU2_TR(0x4cf177);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf17a:{NFSU2_TR(0x4cf17a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cf17c:{NFSU2_TR(0x4cf17c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf17d:{NFSU2_TR(0x4cf17d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4cf180:{NFSU2_TR(0x4cf180);
if(r1(R+518)){{goto L4cf360;}}
}
B4cf186:L4cf186:{c.instructions+=2;NFSU2_TR(0x4cf186);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x9803f6e2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9803f6e2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9803f6e2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cf18c:{NFSU2_TR(0x4cf18c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cf34f;}}
}
B4cf192:L4cf192:{c.instructions+=4;NFSU2_TR(0x4cf192);
__builtin_memmove((R+0),gp(0x8763f0),1);
}
B4cf197:{NFSU2_TR(0x4cf197);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cf199:{NFSU2_TR(0x4cf199);
w4(R+0,u32(m1(0x8763f2)));
}
B4cf1a0:{NFSU2_TR(0x4cf1a0);
if(r1(R+518)){{goto L4cf1a9;}}
}
B4cf1a2:L4cf1a2:{c.instructions+=1;NFSU2_TR(0x4cf1a2);
w4(R+0,u32(m1(0x8763f5)));
}
B4cf1a9:L4cf1a9:{c.instructions+=2;NFSU2_TR(0x4cf1a9);
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
B4cf1ab:{NFSU2_TR(0x4cf1ab);
if(r1(R+518)){{goto L4cf283;}}
}
B4cf1b1:L4cf1b1:{c.instructions+=3;NFSU2_TR(0x4cf1b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cf1b7:{NFSU2_TR(0x4cf1b7);
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
B4cf1b9:{NFSU2_TR(0x4cf1b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cf274;}}
}
B4cf1bf:L4cf1bf:{c.instructions+=3;NFSU2_TR(0x4cf1bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cf1c5:{NFSU2_TR(0x4cf1c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cf1c7:{NFSU2_TR(0x4cf1c7);
if(r1(R+518)){{goto L4cf1f4;}}
}
B4cf1c9:L4cf1c9:{c.instructions+=3;NFSU2_TR(0x4cf1c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf1cf:{NFSU2_TR(0x4cf1cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf1d0:{NFSU2_TR(0x4cf1d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf1d5ull));
TAIL_STATIC(0x52d100u,52d);
}
B4cf1d5:L4cf1d5:{c.instructions+=3;NFSU2_TR(0x4cf1d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cf1d8:{NFSU2_TR(0x4cf1d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cf1da:{NFSU2_TR(0x4cf1da);
if(r1(R+518)){{goto L4cf1f4;}}
}
B4cf1dc:L4cf1dc:{c.instructions+=3;NFSU2_TR(0x4cf1dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf1de:{NFSU2_TR(0x4cf1de);
__builtin_memmove((R+4),(R+24),4);
}
B4cf1e0:{NFSU2_TR(0x4cf1e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf1e5ull));
TAIL_STATIC(0x49a1c0u,49a);
}
B4cf1e5:L4cf1e5:{c.instructions+=6;NFSU2_TR(0x4cf1e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cf1e6:{NFSU2_TR(0x4cf1e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cf1ed:{NFSU2_TR(0x4cf1ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cf1ee:{NFSU2_TR(0x4cf1ee);
__builtin_memmove((R+16),(R+20),4);
}
B4cf1f0:{NFSU2_TR(0x4cf1f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cf1f1:{NFSU2_TR(0x4cf1f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf1f4:L4cf1f4:{c.instructions+=3;NFSU2_TR(0x4cf1f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cf1fa:{NFSU2_TR(0x4cf1fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cf1fc:{NFSU2_TR(0x4cf1fc);
if(r1(R+518)){{goto L4cf229;}}
}
B4cf1fe:L4cf1fe:{c.instructions+=3;NFSU2_TR(0x4cf1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf204:{NFSU2_TR(0x4cf204);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf205:{NFSU2_TR(0x4cf205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf20aull));
TAIL_STATIC(0x52d100u,52d);
}
B4cf20a:L4cf20a:{c.instructions+=3;NFSU2_TR(0x4cf20a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cf20d:{NFSU2_TR(0x4cf20d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cf20f:{NFSU2_TR(0x4cf20f);
if(r1(R+518)){{goto L4cf229;}}
}
B4cf211:L4cf211:{c.instructions+=3;NFSU2_TR(0x4cf211);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf213:{NFSU2_TR(0x4cf213);
__builtin_memmove((R+4),(R+24),4);
}
B4cf215:{NFSU2_TR(0x4cf215);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf21aull));
TAIL_STATIC(0x49a1c0u,49a);
}
B4cf21a:L4cf21a:{c.instructions+=6;NFSU2_TR(0x4cf21a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cf21b:{NFSU2_TR(0x4cf21b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cf222:{NFSU2_TR(0x4cf222);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cf223:{NFSU2_TR(0x4cf223);
__builtin_memmove((R+16),(R+20),4);
}
B4cf225:{NFSU2_TR(0x4cf225);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cf226:{NFSU2_TR(0x4cf226);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf229:L4cf229:{c.instructions+=3;NFSU2_TR(0x4cf229);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cf22f:{NFSU2_TR(0x4cf22f);
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
B4cf231:{NFSU2_TR(0x4cf231);
if(r1(R+518)){{goto L4cf25e;}}
}
B4cf233:L4cf233:{c.instructions+=3;NFSU2_TR(0x4cf233);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf239:{NFSU2_TR(0x4cf239);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf23a:{NFSU2_TR(0x4cf23a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf23full));
TAIL_STATIC(0x52d100u,52d);
}
B4cf23f:L4cf23f:{c.instructions+=3;NFSU2_TR(0x4cf23f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cf242:{NFSU2_TR(0x4cf242);
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
B4cf244:{NFSU2_TR(0x4cf244);
if(r1(R+518)){{goto L4cf25e;}}
}
B4cf246:L4cf246:{c.instructions+=3;NFSU2_TR(0x4cf246);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf248:{NFSU2_TR(0x4cf248);
__builtin_memmove((R+4),(R+24),4);
}
B4cf24a:{NFSU2_TR(0x4cf24a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf24full));
TAIL_STATIC(0x49a1c0u,49a);
}
B4cf24f:L4cf24f:{c.instructions+=6;NFSU2_TR(0x4cf24f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cf250:{NFSU2_TR(0x4cf250);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cf257:{NFSU2_TR(0x4cf257);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cf258:{NFSU2_TR(0x4cf258);
__builtin_memmove((R+16),(R+20),4);
}
B4cf25a:{NFSU2_TR(0x4cf25a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cf25b:{NFSU2_TR(0x4cf25b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf25e:L4cf25e:{c.instructions+=9;NFSU2_TR(0x4cf25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf261:{NFSU2_TR(0x4cf261);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf264:{NFSU2_TR(0x4cf264);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf267:{NFSU2_TR(0x4cf267);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf268:{NFSU2_TR(0x4cf268);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf269:{NFSU2_TR(0x4cf269);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf26a:{NFSU2_TR(0x4cf26a);
u8 U[4];
w4(U+0,u32(0x9803f6e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf26f:{NFSU2_TR(0x4cf26f);
__builtin_memmove((R+4),(R+24),4);
}
B4cf271:{NFSU2_TR(0x4cf271);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf274ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cf274:L4cf274:{c.instructions+=6;NFSU2_TR(0x4cf274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cf275:{NFSU2_TR(0x4cf275);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cf27c:{NFSU2_TR(0x4cf27c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cf27d:{NFSU2_TR(0x4cf27d);
__builtin_memmove((R+16),(R+20),4);
}
B4cf27f:{NFSU2_TR(0x4cf27f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cf280:{NFSU2_TR(0x4cf280);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf283:L4cf283:{c.instructions+=6;NFSU2_TR(0x4cf283);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cf286:{NFSU2_TR(0x4cf286);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf287:{NFSU2_TR(0x4cf287);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cf28a:{NFSU2_TR(0x4cf28a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf28b:{NFSU2_TR(0x4cf28b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cf292:{NFSU2_TR(0x4cf292);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf297ull));
TAIL_STATIC(0x50cd70u,50c);
}
B4cf297:L4cf297:{c.instructions+=4;NFSU2_TR(0x4cf297);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cf29d:{NFSU2_TR(0x4cf29d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cf2a0:{NFSU2_TR(0x4cf2a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cf2a2:{NFSU2_TR(0x4cf2a2);
if(r1(R+518)){{goto L4cf2ca;}}
}
B4cf2a4:L4cf2a4:{c.instructions+=7;NFSU2_TR(0x4cf2a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf2aa:{NFSU2_TR(0x4cf2aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf2ad:{NFSU2_TR(0x4cf2ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf2b0:{NFSU2_TR(0x4cf2b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf2b1:{NFSU2_TR(0x4cf2b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf2b2:{NFSU2_TR(0x4cf2b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf2b3:{NFSU2_TR(0x4cf2b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf2b8ull));
TAIL_STATIC(0x52d020u,52d);
}
B4cf2b8:L4cf2b8:{c.instructions+=3;NFSU2_TR(0x4cf2b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cf2bb:{NFSU2_TR(0x4cf2bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cf2bd:{NFSU2_TR(0x4cf2bd);
if(r1(R+518)){{goto L4cf2ca;}}
}
B4cf2bf:L4cf2bf:{c.instructions+=3;NFSU2_TR(0x4cf2bf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf2c1:{NFSU2_TR(0x4cf2c1);
__builtin_memmove((R+4),(R+24),4);
}
B4cf2c3:{NFSU2_TR(0x4cf2c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf2c8ull));
TAIL_STATIC(0x49a110u,49a);
}
B4cf2c8:L4cf2c8:{c.instructions+=1;NFSU2_TR(0x4cf2c8);
{goto L4cf331;}
}
B4cf2ca:L4cf2ca:{c.instructions+=3;NFSU2_TR(0x4cf2ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cf2d0:{NFSU2_TR(0x4cf2d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cf2d2:{NFSU2_TR(0x4cf2d2);
if(r1(R+518)){{goto L4cf2fa;}}
}
B4cf2d4:L4cf2d4:{c.instructions+=7;NFSU2_TR(0x4cf2d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf2da:{NFSU2_TR(0x4cf2da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf2dd:{NFSU2_TR(0x4cf2dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf2e0:{NFSU2_TR(0x4cf2e0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf2e1:{NFSU2_TR(0x4cf2e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf2e2:{NFSU2_TR(0x4cf2e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf2e3:{NFSU2_TR(0x4cf2e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf2e8ull));
TAIL_STATIC(0x52d020u,52d);
}
B4cf2e8:L4cf2e8:{c.instructions+=3;NFSU2_TR(0x4cf2e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cf2eb:{NFSU2_TR(0x4cf2eb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cf2ed:{NFSU2_TR(0x4cf2ed);
if(r1(R+518)){{goto L4cf2fa;}}
}
B4cf2ef:L4cf2ef:{c.instructions+=3;NFSU2_TR(0x4cf2ef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf2f1:{NFSU2_TR(0x4cf2f1);
__builtin_memmove((R+4),(R+24),4);
}
B4cf2f3:{NFSU2_TR(0x4cf2f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf2f8ull));
TAIL_STATIC(0x49a110u,49a);
}
B4cf2f8:L4cf2f8:{c.instructions+=1;NFSU2_TR(0x4cf2f8);
{goto L4cf331;}
}
B4cf2fa:L4cf2fa:{c.instructions+=3;NFSU2_TR(0x4cf2fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cf300:{NFSU2_TR(0x4cf300);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cf302:{NFSU2_TR(0x4cf302);
if(r1(R+518)){{goto L4cf32a;}}
}
B4cf304:L4cf304:{c.instructions+=7;NFSU2_TR(0x4cf304);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf30a:{NFSU2_TR(0x4cf30a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf30d:{NFSU2_TR(0x4cf30d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf310:{NFSU2_TR(0x4cf310);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf311:{NFSU2_TR(0x4cf311);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf312:{NFSU2_TR(0x4cf312);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf313:{NFSU2_TR(0x4cf313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf318ull));
TAIL_STATIC(0x52d020u,52d);
}
B4cf318:L4cf318:{c.instructions+=3;NFSU2_TR(0x4cf318);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cf31b:{NFSU2_TR(0x4cf31b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cf31d:{NFSU2_TR(0x4cf31d);
if(r1(R+518)){{goto L4cf32a;}}
}
B4cf31f:L4cf31f:{c.instructions+=3;NFSU2_TR(0x4cf31f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf321:{NFSU2_TR(0x4cf321);
__builtin_memmove((R+4),(R+24),4);
}
B4cf323:{NFSU2_TR(0x4cf323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf328ull));
TAIL_STATIC(0x49a110u,49a);
}
B4cf328:L4cf328:{c.instructions+=1;NFSU2_TR(0x4cf328);
{goto L4cf331;}
}
B4cf32a:L4cf32a:{c.instructions+=2;NFSU2_TR(0x4cf32a);
__builtin_memmove((R+4),(R+24),4);
}
B4cf32c:{NFSU2_TR(0x4cf32c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf331ull));
TAIL_STATIC(0x49a170u,49a);
}
B4cf331:L4cf331:{c.instructions+=9;NFSU2_TR(0x4cf331);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf334:{NFSU2_TR(0x4cf334);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf337:{NFSU2_TR(0x4cf337);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf33a:{NFSU2_TR(0x4cf33a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf33b:{NFSU2_TR(0x4cf33b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf33c:{NFSU2_TR(0x4cf33c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf33d:{NFSU2_TR(0x4cf33d);
u8 U[4];
w4(U+0,u32(0x9803f6e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf342:{NFSU2_TR(0x4cf342);
__builtin_memmove((R+4),(R+24),4);
}
B4cf344:{NFSU2_TR(0x4cf344);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf347ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cf347:L4cf347:{c.instructions+=5;NFSU2_TR(0x4cf347);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cf348:{NFSU2_TR(0x4cf348);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cf349:{NFSU2_TR(0x4cf349);
__builtin_memmove((R+16),(R+20),4);
}
B4cf34b:{NFSU2_TR(0x4cf34b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cf34c:{NFSU2_TR(0x4cf34c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf34f:L4cf34f:{c.instructions+=9;NFSU2_TR(0x4cf34f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf352:{NFSU2_TR(0x4cf352);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf355:{NFSU2_TR(0x4cf355);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf356:{NFSU2_TR(0x4cf356);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf359:{NFSU2_TR(0x4cf359);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf35a:{NFSU2_TR(0x4cf35a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf35b:{NFSU2_TR(0x4cf35b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf35c:{NFSU2_TR(0x4cf35c);
__builtin_memmove((R+4),(R+24),4);
}
B4cf35e:{NFSU2_TR(0x4cf35e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf360ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4cf360:L4cf360:{c.instructions+=2;NFSU2_TR(0x4cf360);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cf366:{NFSU2_TR(0x4cf366);
if(r1(R+518)){{goto L4cf3c3;}}
}
B4cf368:L4cf368:{c.instructions+=2;NFSU2_TR(0x4cf368);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cf36e:{NFSU2_TR(0x4cf36e);
if(r1(R+518)){{goto L4cf38b;}}
}
B4cf370:L4cf370:{c.instructions+=2;NFSU2_TR(0x4cf370);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cf376:{NFSU2_TR(0x4cf376);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cf457;}}
}
B4cf37c:L4cf37c:{c.instructions+=6;NFSU2_TR(0x4cf37c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cf37d:{NFSU2_TR(0x4cf37d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cf384:{NFSU2_TR(0x4cf384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cf385:{NFSU2_TR(0x4cf385);
__builtin_memmove((R+16),(R+20),4);
}
B4cf387:{NFSU2_TR(0x4cf387);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cf388:{NFSU2_TR(0x4cf388);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf38b:L4cf38b:{c.instructions+=3;NFSU2_TR(0x4cf38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf38e:{NFSU2_TR(0x4cf38e);
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
B4cf390:{NFSU2_TR(0x4cf390);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4cf457;}}
}
B4cf396:L4cf396:{c.instructions+=4;NFSU2_TR(0x4cf396);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4cf397:{NFSU2_TR(0x4cf397);
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
B4cf399:{NFSU2_TR(0x4cf399);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cf39c:{NFSU2_TR(0x4cf39c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cf457;}}
}
B4cf3a2:L4cf3a2:{c.instructions+=3;NFSU2_TR(0x4cf3a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf3a5:{NFSU2_TR(0x4cf3a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf3a6:{NFSU2_TR(0x4cf3a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf3abull));
TAIL_STATIC(0x5379a0u,537);
}
B4cf3ab:L4cf3ab:{c.instructions+=4;NFSU2_TR(0x4cf3ab);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4cf3b1:{NFSU2_TR(0x4cf3b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cf3b4:{NFSU2_TR(0x4cf3b4);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf3b6:{NFSU2_TR(0x4cf3b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf3bbull));
TAIL_STATIC(0x5f4240u,5f4);
}
B4cf3bb:L4cf3bb:{c.instructions+=5;NFSU2_TR(0x4cf3bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cf3bc:{NFSU2_TR(0x4cf3bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cf3bd:{NFSU2_TR(0x4cf3bd);
__builtin_memmove((R+16),(R+20),4);
}
B4cf3bf:{NFSU2_TR(0x4cf3bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cf3c0:{NFSU2_TR(0x4cf3c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf3c3:L4cf3c3:{c.instructions+=6;NFSU2_TR(0x4cf3c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf3c6:{NFSU2_TR(0x4cf3c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf3c9:{NFSU2_TR(0x4cf3c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf3cb:{NFSU2_TR(0x4cf3cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf3cc:{NFSU2_TR(0x4cf3cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf3cd:{NFSU2_TR(0x4cf3cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf3d2ull));
TAIL_STATIC(0x51cda0u,51c);
}
B4cf3d2:L4cf3d2:{c.instructions+=6;NFSU2_TR(0x4cf3d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf3d5:{NFSU2_TR(0x4cf3d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf3d8:{NFSU2_TR(0x4cf3d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf3da:{NFSU2_TR(0x4cf3da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf3db:{NFSU2_TR(0x4cf3db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf3dc:{NFSU2_TR(0x4cf3dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf3e1ull));
TAIL_STATIC(0x51cda0u,51c);
}
B4cf3e1:L4cf3e1:{c.instructions+=6;NFSU2_TR(0x4cf3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf3e4:{NFSU2_TR(0x4cf3e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf3e7:{NFSU2_TR(0x4cf3e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf3e9:{NFSU2_TR(0x4cf3e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf3ea:{NFSU2_TR(0x4cf3ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf3eb:{NFSU2_TR(0x4cf3eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf3f0ull));
TAIL_STATIC(0x51cda0u,51c);
}
B4cf3f0:L4cf3f0:{c.instructions+=6;NFSU2_TR(0x4cf3f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf3f3:{NFSU2_TR(0x4cf3f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf3f6:{NFSU2_TR(0x4cf3f6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf3f8:{NFSU2_TR(0x4cf3f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf3f9:{NFSU2_TR(0x4cf3f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf3fa:{NFSU2_TR(0x4cf3fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf3ffull));
TAIL_STATIC(0x51cda0u,51c);
}
B4cf3ff:L4cf3ff:{c.instructions+=6;NFSU2_TR(0x4cf3ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf402:{NFSU2_TR(0x4cf402);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4cf406:{NFSU2_TR(0x4cf406);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf409:{NFSU2_TR(0x4cf409);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf40a:{NFSU2_TR(0x4cf40a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf40b:{NFSU2_TR(0x4cf40b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf410ull));
TAIL_STATIC(0x52cea0u,52c);
}
B4cf410:L4cf410:{c.instructions+=8;NFSU2_TR(0x4cf410);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf413:{NFSU2_TR(0x4cf413);
u8 U[16];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4cf417:{NFSU2_TR(0x4cf417);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf41a:{NFSU2_TR(0x4cf41a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf41c:{NFSU2_TR(0x4cf41c);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf421:{NFSU2_TR(0x4cf421);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf422:{NFSU2_TR(0x4cf422);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf423:{NFSU2_TR(0x4cf423);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf428ull));
TAIL_STATIC(0x537c00u,537);
}
B4cf428:L4cf428:{c.instructions+=9;NFSU2_TR(0x4cf428);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf42b:{NFSU2_TR(0x4cf42b);
u8 U[16];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B4cf42f:{NFSU2_TR(0x4cf42f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf432:{NFSU2_TR(0x4cf432);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B4cf435:{NFSU2_TR(0x4cf435);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf437:{NFSU2_TR(0x4cf437);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf43c:{NFSU2_TR(0x4cf43c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf43d:{NFSU2_TR(0x4cf43d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf43e:{NFSU2_TR(0x4cf43e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf443ull));
TAIL_STATIC(0x537c00u,537);
}
B4cf443:L4cf443:{c.instructions+=4;NFSU2_TR(0x4cf443);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cf446:{NFSU2_TR(0x4cf446);
w4(R+4,u32(0x8635bcull));
}
B4cf44b:{NFSU2_TR(0x4cf44b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x4cea70ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cf452:{NFSU2_TR(0x4cf452);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf457ull));
TAIL_STATIC(0x525850u,525);
}
B4cf457:L4cf457:{c.instructions+=5;NFSU2_TR(0x4cf457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cf458:{NFSU2_TR(0x4cf458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cf459:{NFSU2_TR(0x4cf459);
__builtin_memmove((R+16),(R+20),4);
}
B4cf45b:{NFSU2_TR(0x4cf45b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cf45c:{NFSU2_TR(0x4cf45c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf460:L4cf460:{c.instructions+=8;NFSU2_TR(0x4cf460);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf461:{NFSU2_TR(0x4cf461);
__builtin_memmove((R+24),(R+4),4);
}
B4cf463:{NFSU2_TR(0x4cf463);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf466:{NFSU2_TR(0x4cf466);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf469:{NFSU2_TR(0x4cf469);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf46a:{NFSU2_TR(0x4cf46a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf46c:{NFSU2_TR(0x4cf46c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf46d:{NFSU2_TR(0x4cf46d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf472ull));
TAIL_STATIC(0x50d150u,50d);
}
B4cf472:L4cf472:{c.instructions+=5;NFSU2_TR(0x4cf472);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf478:{NFSU2_TR(0x4cf478);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf47b:{NFSU2_TR(0x4cf47b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf47c:{NFSU2_TR(0x4cf47c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf47d:{NFSU2_TR(0x4cf47d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf482ull));
TAIL_STATIC(0x5379c0u,537);
}
B4cf482:L4cf482:{c.instructions+=2;NFSU2_TR(0x4cf482);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf483:{NFSU2_TR(0x4cf483);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf488ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4cf488:L4cf488:{c.instructions+=5;NFSU2_TR(0x4cf488);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf48e:{NFSU2_TR(0x4cf48e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf491:{NFSU2_TR(0x4cf491);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf492:{NFSU2_TR(0x4cf492);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf493:{NFSU2_TR(0x4cf493);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf498ull));
TAIL_STATIC(0x5379c0u,537);
}
B4cf498:L4cf498:{c.instructions+=2;NFSU2_TR(0x4cf498);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf499:{NFSU2_TR(0x4cf499);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf49eull));
TAIL_STATIC(0x50ca00u,50c);
}
B4cf49e:L4cf49e:{c.instructions+=8;NFSU2_TR(0x4cf49e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cf4a0:{NFSU2_TR(0x4cf4a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cf4a6:{NFSU2_TR(0x4cf4a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4cf4ac:{NFSU2_TR(0x4cf4ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf4b2:{NFSU2_TR(0x4cf4b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf4b5:{NFSU2_TR(0x4cf4b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf4b6:{NFSU2_TR(0x4cf4b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf4b7:{NFSU2_TR(0x4cf4b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf4bcull));
TAIL_STATIC(0x5379c0u,537);
}
B4cf4bc:L4cf4bc:{c.instructions+=2;NFSU2_TR(0x4cf4bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf4bd:{NFSU2_TR(0x4cf4bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf4c2ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4cf4c2:L4cf4c2:{c.instructions+=7;NFSU2_TR(0x4cf4c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf4c8:{NFSU2_TR(0x4cf4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf4cb:{NFSU2_TR(0x4cf4cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4cf4ce:{NFSU2_TR(0x4cf4ce);
u8 U[4];
w4(U+0,u32(0x1335f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf4d3:{NFSU2_TR(0x4cf4d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf4d4:{NFSU2_TR(0x4cf4d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf4d5:{NFSU2_TR(0x4cf4d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf4daull));
TAIL_STATIC(0x537a10u,537);
}
B4cf4da:L4cf4da:{c.instructions+=3;NFSU2_TR(0x4cf4da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cf4dd:{NFSU2_TR(0x4cf4dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf4de:{NFSU2_TR(0x4cf4de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf4e3ull));
TAIL_STATIC(0x50c900u,50c);
}
B4cf4e3:L4cf4e3:{c.instructions+=5;NFSU2_TR(0x4cf4e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf4e9:{NFSU2_TR(0x4cf4e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf4ec:{NFSU2_TR(0x4cf4ec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf4ed:{NFSU2_TR(0x4cf4ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf4ee:{NFSU2_TR(0x4cf4ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf4f3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4cf4f3:L4cf4f3:{c.instructions+=2;NFSU2_TR(0x4cf4f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf4f4:{NFSU2_TR(0x4cf4f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf4f9ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4cf4f9:L4cf4f9:{c.instructions+=7;NFSU2_TR(0x4cf4f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
w4(U+4,u32(0x911ab364ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cf503:{NFSU2_TR(0x4cf503);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf506:{NFSU2_TR(0x4cf506);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd5ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cf50d:{NFSU2_TR(0x4cf50d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf513:{NFSU2_TR(0x4cf513);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf514:{NFSU2_TR(0x4cf514);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf515:{NFSU2_TR(0x4cf515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf51aull));
TAIL_STATIC(0x5379c0u,537);
}
B4cf51a:L4cf51a:{c.instructions+=2;NFSU2_TR(0x4cf51a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf51b:{NFSU2_TR(0x4cf51b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf520ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4cf520:L4cf520:{c.instructions+=7;NFSU2_TR(0x4cf520);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf526:{NFSU2_TR(0x4cf526);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf529:{NFSU2_TR(0x4cf529);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4cf52c:{NFSU2_TR(0x4cf52c);
u8 U[4];
w4(U+0,u32(0x4f876b6full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf531:{NFSU2_TR(0x4cf531);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf532:{NFSU2_TR(0x4cf532);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf533:{NFSU2_TR(0x4cf533);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf538ull));
TAIL_STATIC(0x537a10u,537);
}
B4cf538:L4cf538:{c.instructions+=3;NFSU2_TR(0x4cf538);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cf53b:{NFSU2_TR(0x4cf53b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf53c:{NFSU2_TR(0x4cf53c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf541ull));
TAIL_STATIC(0x50c900u,50c);
}
B4cf541:L4cf541:{c.instructions+=5;NFSU2_TR(0x4cf541);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf547:{NFSU2_TR(0x4cf547);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf54a:{NFSU2_TR(0x4cf54a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf54b:{NFSU2_TR(0x4cf54b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf54c:{NFSU2_TR(0x4cf54c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf551ull));
TAIL_STATIC(0x5379c0u,537);
}
B4cf551:L4cf551:{c.instructions+=2;NFSU2_TR(0x4cf551);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf552:{NFSU2_TR(0x4cf552);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf557ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4cf557:L4cf557:{c.instructions+=6;NFSU2_TR(0x4cf557);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
w4(U+4,u32(0x406415e3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cf561:{NFSU2_TR(0x4cf561);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf564:{NFSU2_TR(0x4cf564);
u8 U[4];
w4(U+0,u32(0xf9f1f5d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf569:{NFSU2_TR(0x4cf569);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf56a:{NFSU2_TR(0x4cf56a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cf571:{NFSU2_TR(0x4cf571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf576ull));
TAIL_STATIC(0x5379c0u,537);
}
B4cf576:L4cf576:{c.instructions+=2;NFSU2_TR(0x4cf576);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf577:{NFSU2_TR(0x4cf577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf57cull));
TAIL_STATIC(0x50ca00u,50c);
}
B4cf57c:L4cf57c:{c.instructions+=3;NFSU2_TR(0x4cf57c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4cf57f:{NFSU2_TR(0x4cf57f);
__builtin_memmove((R+4),(R+24),4);
}
B4cf581:{NFSU2_TR(0x4cf581);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf586ull));
TAIL_STATIC(0x49a1f0u,49a);
}
B4cf586:L4cf586:{c.instructions+=3;NFSU2_TR(0x4cf586);
w4(R+4,u32(0x85ef50ull));
}
B4cf58b:{NFSU2_TR(0x4cf58b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w4(U+4,u32(0x4cedc0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cf592:{NFSU2_TR(0x4cf592);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf597ull));
TAIL_STATIC(0x501250u,501);
}
B4cf597:L4cf597:{c.instructions+=2;NFSU2_TR(0x4cf597);
__builtin_memmove((R+4),(R+24),4);
}
B4cf599:{NFSU2_TR(0x4cf599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf59eull));
TAIL_STATIC(0x499e60u,499);
}
B4cf59e:L4cf59e:{c.instructions+=6;NFSU2_TR(0x4cf59e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf5a1:{NFSU2_TR(0x4cf5a1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf5a3:{NFSU2_TR(0x4cf5a3);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf5a8:{NFSU2_TR(0x4cf5a8);
u8 U[4];
w4(U+0,u32(0x2253bd97ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf5ad:{NFSU2_TR(0x4cf5ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf5ae:{NFSU2_TR(0x4cf5ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf5b3ull));
TAIL_STATIC(0x537c00u,537);
}
B4cf5b3:L4cf5b3:{c.instructions+=3;NFSU2_TR(0x4cf5b3);
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
B4cf5b6:{NFSU2_TR(0x4cf5b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cf5b7:{NFSU2_TR(0x4cf5b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf5c0:L4cf5c0:{c.instructions+=8;NFSU2_TR(0x4cf5c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf5c2:{NFSU2_TR(0x4cf5c2);
u8 U[4];
w4(U+0,u32(0x774534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf5c7:{NFSU2_TR(0x4cf5c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf5cd:{NFSU2_TR(0x4cf5cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf5ce:{NFSU2_TR(0x4cf5ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cf5d5:{NFSU2_TR(0x4cf5d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf5d6:{NFSU2_TR(0x4cf5d6);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf5d8:{NFSU2_TR(0x4cf5d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf5ddull));
TAIL_STATIC(0x575620u,575);
}
B4cf5dd:L4cf5dd:{c.instructions+=5;NFSU2_TR(0x4cf5dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cf5e0:{NFSU2_TR(0x4cf5e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4cf5e4:{NFSU2_TR(0x4cf5e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cf5e6:{NFSU2_TR(0x4cf5e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cf5ee:{NFSU2_TR(0x4cf5ee);
if(r1(R+518)){{goto L4cf60b;}}
}
B4cf5f0:L4cf5f0:{c.instructions+=4;NFSU2_TR(0x4cf5f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf5f4:{NFSU2_TR(0x4cf5f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf5f5:{NFSU2_TR(0x4cf5f5);
__builtin_memmove((R+4),(R+0),4);
}
B4cf5f7:{NFSU2_TR(0x4cf5f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf5fcull));
TAIL_STATIC(0x4b5ed0u,4b5);
}
B4cf5fc:L4cf5fc:{c.instructions+=4;NFSU2_TR(0x4cf5fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf600:{NFSU2_TR(0x4cf600);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cf607:{NFSU2_TR(0x4cf607);
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
B4cf60a:{NFSU2_TR(0x4cf60a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf60b:L4cf60b:{c.instructions+=5;NFSU2_TR(0x4cf60b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf60f:{NFSU2_TR(0x4cf60f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cf611:{NFSU2_TR(0x4cf611);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cf618:{NFSU2_TR(0x4cf618);
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
B4cf61b:{NFSU2_TR(0x4cf61b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf620:L4cf620:{c.instructions+=3;NFSU2_TR(0x4cf620);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf621:{NFSU2_TR(0x4cf621);
__builtin_memmove((R+24),(R+4),4);
}
B4cf623:{NFSU2_TR(0x4cf623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf628ull));
{goto L4cf640;}
}
B4cf628:L4cf628:{c.instructions+=2;NFSU2_TR(0x4cf628);
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
B4cf62d:{NFSU2_TR(0x4cf62d);
if(r1(R+518)){{goto L4cf638;}}
}
B4cf62f:L4cf62f:{c.instructions+=2;NFSU2_TR(0x4cf62f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf630:{NFSU2_TR(0x4cf630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf635ull));
TAIL_STATIC(0x575630u,575);
}
B4cf635:L4cf635:{c.instructions+=1;NFSU2_TR(0x4cf635);
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
B4cf638:L4cf638:{c.instructions+=3;NFSU2_TR(0x4cf638);
__builtin_memmove((R+0),(R+24),4);
}
B4cf63a:{NFSU2_TR(0x4cf63a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cf63b:{NFSU2_TR(0x4cf63b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf640:L4cf640:{c.instructions+=3;NFSU2_TR(0x4cf640);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
w4(U+4,u32(0x78f544ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cf647:{NFSU2_TR(0x4cf647);
u8 U[4];
w4(U+0,u32(0x790b98ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4cf64d:{NFSU2_TR(0x4cf64d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf650:L4cf650:{c.instructions+=2;NFSU2_TR(0x4cf650);
u8 U[4];
w4(U+0,u32(0x790b98ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4cf656:{NFSU2_TR(0x4cf656);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf660:L4cf660:{c.instructions+=12;NFSU2_TR(0x4cf660);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf662:{NFSU2_TR(0x4cf662);
u8 U[4];
w4(U+0,u32(0x776e28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf667:{NFSU2_TR(0x4cf667);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf66d:{NFSU2_TR(0x4cf66d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf66e:{NFSU2_TR(0x4cf66e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cf675:{NFSU2_TR(0x4cf675);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf676:{NFSU2_TR(0x4cf676);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf67a:{NFSU2_TR(0x4cf67a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf67b:{NFSU2_TR(0x4cf67b);
__builtin_memmove((R+24),(R+4),4);
}
B4cf67d:{NFSU2_TR(0x4cf67d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf67e:{NFSU2_TR(0x4cf67e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cf682:{NFSU2_TR(0x4cf682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf687ull));
TAIL_STATIC(0x552780u,552);
}
B4cf687:L4cf687:{c.instructions+=5;NFSU2_TR(0x4cf687);
__builtin_memmove((R+4),(R+24),4);
}
B4cf689:{NFSU2_TR(0x4cf689);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cf691:{NFSU2_TR(0x4cf691);
u8 U[4];
w4(U+0,u32(0x795e00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4cf697:{NFSU2_TR(0x4cf697);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cf6a1:{NFSU2_TR(0x4cf6a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf6a6ull));
TAIL_STATIC(0x4b6510u,4b6);
}
B4cf6a6:L4cf6a6:{c.instructions+=5;NFSU2_TR(0x4cf6a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf6a9:{NFSU2_TR(0x4cf6a9);
u8 U[4];
w4(U+0,u32(0x381fe1e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf6ae:{NFSU2_TR(0x4cf6ae);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf6b3:{NFSU2_TR(0x4cf6b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf6b4:{NFSU2_TR(0x4cf6b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf6b9ull));
TAIL_STATIC(0x537a10u,537);
}
B4cf6b9:L4cf6b9:{c.instructions+=3;NFSU2_TR(0x4cf6b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cf6bc:{NFSU2_TR(0x4cf6bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf6bd:{NFSU2_TR(0x4cf6bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf6c2ull));
TAIL_STATIC(0x50c900u,50c);
}
B4cf6c2:L4cf6c2:{c.instructions+=6;NFSU2_TR(0x4cf6c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cf6c5:{NFSU2_TR(0x4cf6c5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf6c7:{NFSU2_TR(0x4cf6c7);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf6c9:{NFSU2_TR(0x4cf6c9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf6cb:{NFSU2_TR(0x4cf6cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cf6ce:{NFSU2_TR(0x4cf6ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf6d3ull));
TAIL_STATIC(0x538080u,538);
}
B4cf6d3:L4cf6d3:{c.instructions+=3;NFSU2_TR(0x4cf6d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf6d5:{NFSU2_TR(0x4cf6d5);
__builtin_memmove((R+4),(R+24),4);
}
B4cf6d7:{NFSU2_TR(0x4cf6d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf6dcull));
TAIL_STATIC(0x539650u,539);
}
B4cf6dc:L4cf6dc:{c.instructions+=2;NFSU2_TR(0x4cf6dc);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cf6e3:{NFSU2_TR(0x4cf6e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cf6fe;}}
}
B4cf6e5:L4cf6e5:{c.instructions+=7;NFSU2_TR(0x4cf6e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf6e8:{NFSU2_TR(0x4cf6e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf6eb:{NFSU2_TR(0x4cf6eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf6ec:{NFSU2_TR(0x4cf6ec);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4cf6f2:{NFSU2_TR(0x4cf6f2);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x4000ull))));
}
B4cf6f8:{NFSU2_TR(0x4cf6f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf6f9:{NFSU2_TR(0x4cf6f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf6feull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4cf6fe:L4cf6fe:{c.instructions+=6;NFSU2_TR(0x4cf6fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf702:{NFSU2_TR(0x4cf702);
__builtin_memmove((R+0),(R+24),4);
}
B4cf704:{NFSU2_TR(0x4cf704);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cf705:{NFSU2_TR(0x4cf705);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cf70c:{NFSU2_TR(0x4cf70c);
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
B4cf70f:{NFSU2_TR(0x4cf70f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf720:L4cf720:{c.instructions+=3;NFSU2_TR(0x4cf720);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf721:{NFSU2_TR(0x4cf721);
__builtin_memmove((R+24),(R+4),4);
}
B4cf723:{NFSU2_TR(0x4cf723);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf728ull));
{goto L4cf740;}
}
B4cf728:L4cf728:{c.instructions+=2;NFSU2_TR(0x4cf728);
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
B4cf72d:{NFSU2_TR(0x4cf72d);
if(r1(R+518)){{goto L4cf738;}}
}
B4cf72f:L4cf72f:{c.instructions+=2;NFSU2_TR(0x4cf72f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf730:{NFSU2_TR(0x4cf730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf735ull));
TAIL_STATIC(0x575630u,575);
}
B4cf735:L4cf735:{c.instructions+=1;NFSU2_TR(0x4cf735);
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
B4cf738:L4cf738:{c.instructions+=3;NFSU2_TR(0x4cf738);
__builtin_memmove((R+0),(R+24),4);
}
B4cf73a:{NFSU2_TR(0x4cf73a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cf73b:{NFSU2_TR(0x4cf73b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cf740:L4cf740:{c.instructions+=2;NFSU2_TR(0x4cf740);
u8 U[4];
w4(U+0,u32(0x795e00ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4cf746:{NFSU2_TR(0x4cf746);
TAIL_STATIC(0x4cbc30u,4cb);
}
B4cf750:L4cf750:{c.instructions+=15;NFSU2_TR(0x4cf750);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf752:{NFSU2_TR(0x4cf752);
u8 U[4];
w4(U+0,u32(0x776e28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf757:{NFSU2_TR(0x4cf757);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf75d:{NFSU2_TR(0x4cf75d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf75e:{NFSU2_TR(0x4cf75e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cf765:{NFSU2_TR(0x4cf765);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf766:{NFSU2_TR(0x4cf766);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf76a:{NFSU2_TR(0x4cf76a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf76b:{NFSU2_TR(0x4cf76b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf76c:{NFSU2_TR(0x4cf76c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf76d:{NFSU2_TR(0x4cf76d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf76e:{NFSU2_TR(0x4cf76e);
__builtin_memmove((R+24),(R+4),4);
}
B4cf770:{NFSU2_TR(0x4cf770);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf771:{NFSU2_TR(0x4cf771);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cf775:{NFSU2_TR(0x4cf775);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf77aull));
TAIL_STATIC(0x552780u,552);
}
B4cf77a:L4cf77a:{c.instructions+=13;NFSU2_TR(0x4cf77a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4cf77c:{NFSU2_TR(0x4cf77c);
w4(R+20,u32(0x8ull));
}
B4cf781:{NFSU2_TR(0x4cf781);
u8 U[4];
w4(U+0,u32(0x795e28ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4cf787:{NFSU2_TR(0x4cf787);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4cf78d:{NFSU2_TR(0x4cf78d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4cf793:{NFSU2_TR(0x4cf793);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14eull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4cf799:{NFSU2_TR(0x4cf799);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cf79f:{NFSU2_TR(0x4cf79f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cf7a5:{NFSU2_TR(0x4cf7a5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cf7a9:{NFSU2_TR(0x4cf7a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cf7af:{NFSU2_TR(0x4cf7af);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cf7b5:{NFSU2_TR(0x4cf7b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cf7b9:{NFSU2_TR(0x4cf7b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cf80f;}}
}
B4cf7bb:L4cf7bb:{c.instructions+=5;NFSU2_TR(0x4cf7bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf7be:{NFSU2_TR(0x4cf7be);
u8 U[4];
w4(U+0,u32(0xeb406fecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf7c3:{NFSU2_TR(0x4cf7c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf7c4:{NFSU2_TR(0x4cf7c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xda850671ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cf7cb:{NFSU2_TR(0x4cf7cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf7d0ull));
TAIL_STATIC(0x5379c0u,537);
}
B4cf7d0:L4cf7d0:{c.instructions+=2;NFSU2_TR(0x4cf7d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf7d1:{NFSU2_TR(0x4cf7d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf7d6ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4cf7d6:L4cf7d6:{c.instructions+=6;NFSU2_TR(0x4cf7d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf7d9:{NFSU2_TR(0x4cf7d9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf7db:{NFSU2_TR(0x4cf7db);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf7e0:{NFSU2_TR(0x4cf7e0);
u8 U[4];
w4(U+0,u32(0x2bac0ceeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf7e5:{NFSU2_TR(0x4cf7e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf7e6:{NFSU2_TR(0x4cf7e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf7ebull));
TAIL_STATIC(0x537c00u,537);
}
B4cf7eb:L4cf7eb:{c.instructions+=6;NFSU2_TR(0x4cf7eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf7ee:{NFSU2_TR(0x4cf7ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4cf7f1:{NFSU2_TR(0x4cf7f1);
u8 U[4];
w4(U+0,u32(0xb0fcf98eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf7f6:{NFSU2_TR(0x4cf7f6);
u8 U[4];
w4(U+0,u32(0xc90dc4abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf7fb:{NFSU2_TR(0x4cf7fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf7fc:{NFSU2_TR(0x4cf7fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf801ull));
TAIL_STATIC(0x537a10u,537);
}
B4cf801:L4cf801:{c.instructions+=3;NFSU2_TR(0x4cf801);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cf804:{NFSU2_TR(0x4cf804);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf805:{NFSU2_TR(0x4cf805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf80aull));
TAIL_STATIC(0x50c900u,50c);
}
B4cf80a:L4cf80a:{c.instructions+=2;NFSU2_TR(0x4cf80a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cf80d:{NFSU2_TR(0x4cf80d);
{goto L4cf816;}
}
B4cf80f:L4cf80f:{c.instructions+=1;NFSU2_TR(0x4cf80f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xed586157ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cf816:L4cf816:{c.instructions+=3;NFSU2_TR(0x4cf816);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4cf819:{NFSU2_TR(0x4cf819);
u8 U[4];
w4(U+0,u32(0x793fc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf81e:{NFSU2_TR(0x4cf81e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf823ull));
TAIL_STATIC(0x505450u,505);
}
B4cf823:L4cf823:{c.instructions+=3;NFSU2_TR(0x4cf823);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf824:{NFSU2_TR(0x4cf824);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf825:{NFSU2_TR(0x4cf825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf82aull));
TAIL_STATIC(0x537a10u,537);
}
B4cf82a:L4cf82a:{c.instructions+=5;NFSU2_TR(0x4cf82a);
__builtin_memmove((R+28),(R+0),4);
}
B4cf82c:{NFSU2_TR(0x4cf82c);
__builtin_memmove((R+0),gp(0x83aa04),4);
}
B4cf831:{NFSU2_TR(0x4cf831);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cf834:{NFSU2_TR(0x4cf834);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B4cf836:{NFSU2_TR(0x4cf836);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4cfa01;}}
}
B4cf83c:L4cf83c:{c.instructions+=1;NFSU2_TR(0x4cf83c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4cfa98ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cf843:L4cf843:{c.instructions+=5;NFSU2_TR(0x4cf843);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf846:{NFSU2_TR(0x4cf846);
u8 U[4];
w4(U+0,u32(0xe76cd783ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf84b:{NFSU2_TR(0x4cf84b);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf850:{NFSU2_TR(0x4cf850);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf851:{NFSU2_TR(0x4cf851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf856ull));
TAIL_STATIC(0x537a10u,537);
}
B4cf856:L4cf856:{c.instructions+=3;NFSU2_TR(0x4cf856);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cf859:{NFSU2_TR(0x4cf859);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf85a:{NFSU2_TR(0x4cf85a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf85full));
TAIL_STATIC(0x50c900u,50c);
}
B4cf85f:L4cf85f:{c.instructions+=1;NFSU2_TR(0x4cf85f);
{goto L4cf9fe;}
}
B4cf864:L4cf864:{c.instructions+=5;NFSU2_TR(0x4cf864);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf867:{NFSU2_TR(0x4cf867);
u8 U[4];
w4(U+0,u32(0x4204d527ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf86c:{NFSU2_TR(0x4cf86c);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf871:{NFSU2_TR(0x4cf871);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf872:{NFSU2_TR(0x4cf872);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf877ull));
TAIL_STATIC(0x537a10u,537);
}
B4cf877:L4cf877:{c.instructions+=3;NFSU2_TR(0x4cf877);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cf87a:{NFSU2_TR(0x4cf87a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf87b:{NFSU2_TR(0x4cf87b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf880ull));
TAIL_STATIC(0x50c900u,50c);
}
B4cf880:L4cf880:{c.instructions+=1;NFSU2_TR(0x4cf880);
{goto L4cf9fe;}
}
B4cf885:L4cf885:{c.instructions+=5;NFSU2_TR(0x4cf885);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf888:{NFSU2_TR(0x4cf888);
u8 U[4];
w4(U+0,u32(0xd0cf6ee1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf88d:{NFSU2_TR(0x4cf88d);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf892:{NFSU2_TR(0x4cf892);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf893:{NFSU2_TR(0x4cf893);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf898ull));
TAIL_STATIC(0x537a10u,537);
}
B4cf898:L4cf898:{c.instructions+=3;NFSU2_TR(0x4cf898);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cf89b:{NFSU2_TR(0x4cf89b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf89c:{NFSU2_TR(0x4cf89c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf8a1ull));
TAIL_STATIC(0x50c900u,50c);
}
B4cf8a1:L4cf8a1:{c.instructions+=2;NFSU2_TR(0x4cf8a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf8a2:{NFSU2_TR(0x4cf8a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf8a7ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4cf8a7:L4cf8a7:{c.instructions+=2;NFSU2_TR(0x4cf8a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cf8aa:{NFSU2_TR(0x4cf8aa);
{goto L4cfa01;}
}
B4cf8af:L4cf8af:{c.instructions+=3;NFSU2_TR(0x4cf8af);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4cf8b4:{NFSU2_TR(0x4cf8b4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cf8b6:{NFSU2_TR(0x4cf8b6);
if(r1(R+518)){{goto L4cf8c3;}}
}
B4cf8b8:L4cf8b8:{c.instructions+=2;NFSU2_TR(0x4cf8b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cf8bd:{NFSU2_TR(0x4cf8bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cfa01;}}
}
B4cf8c3:L4cf8c3:{c.instructions+=6;NFSU2_TR(0x4cf8c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf8c6:{NFSU2_TR(0x4cf8c6);
u8 U[4];
w4(U+0,u32(0x7909a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf8cb:{NFSU2_TR(0x4cf8cb);
u8 U[4];
w4(U+0,u32(0x793fc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf8d0:{NFSU2_TR(0x4cf8d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf8d1:{NFSU2_TR(0x4cf8d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xd5f3f0e0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cf8d8:{NFSU2_TR(0x4cf8d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf8ddull));
TAIL_STATIC(0x542600u,542);
}
B4cf8dd:L4cf8dd:{c.instructions+=2;NFSU2_TR(0x4cf8dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cf8e0:{NFSU2_TR(0x4cf8e0);
{goto L4cfa01;}
}
B4cf8e5:L4cf8e5:{c.instructions+=5;NFSU2_TR(0x4cf8e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf8e8:{NFSU2_TR(0x4cf8e8);
u8 U[4];
w4(U+0,u32(0xf760eabeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf8ed:{NFSU2_TR(0x4cf8ed);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf8f2:{NFSU2_TR(0x4cf8f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf8f3:{NFSU2_TR(0x4cf8f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf8f8ull));
TAIL_STATIC(0x537a10u,537);
}
B4cf8f8:L4cf8f8:{c.instructions+=3;NFSU2_TR(0x4cf8f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cf8fb:{NFSU2_TR(0x4cf8fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf8fc:{NFSU2_TR(0x4cf8fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf901ull));
TAIL_STATIC(0x50c900u,50c);
}
B4cf901:L4cf901:{c.instructions+=8;NFSU2_TR(0x4cf901);
__builtin_memmove((R+4),gp(0x836364),4);
}
B4cf907:{NFSU2_TR(0x4cf907);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cf909:{NFSU2_TR(0x4cf909);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cf90b:{NFSU2_TR(0x4cf90b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4cf90e:{NFSU2_TR(0x4cf90e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd87133bcull))));
}
B4cf913:{NFSU2_TR(0x4cf913);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf914:{NFSU2_TR(0x4cf914);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf915:{NFSU2_TR(0x4cf915);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf91aull));
TAIL_STATIC(0x50c900u,50c);
}
B4cf91a:L4cf91a:{c.instructions+=4;NFSU2_TR(0x4cf91a);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4cf91f:{NFSU2_TR(0x4cf91f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4cf922:{NFSU2_TR(0x4cf922);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cf924:{NFSU2_TR(0x4cf924);
if(r1(R+518)){{goto L4cf936;}}
}
B4cf926:L4cf926:{c.instructions+=2;NFSU2_TR(0x4cf926);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cf92b:{NFSU2_TR(0x4cf92b);
if(r1(R+518)){{goto L4cf936;}}
}
B4cf92d:L4cf92d:{c.instructions+=2;NFSU2_TR(0x4cf92d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xf35b6d7full));
s4(u32(r4(U+0)),r4(U+4));
}
B4cf934:{NFSU2_TR(0x4cf934);
{goto L4cf953;}
}
B4cf936:L4cf936:{c.instructions+=6;NFSU2_TR(0x4cf936);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cf939:{NFSU2_TR(0x4cf939);
u8 U[4];
w4(U+0,u32(0x7909a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf93e:{NFSU2_TR(0x4cf93e);
u8 U[4];
w4(U+0,u32(0x793fc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf943:{NFSU2_TR(0x4cf943);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf944:{NFSU2_TR(0x4cf944);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xf35b6d7full));
s4(u32(r4(U+0)),r4(U+4));
}
B4cf94b:{NFSU2_TR(0x4cf94b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf950ull));
TAIL_STATIC(0x542600u,542);
}
B4cf950:L4cf950:{c.instructions+=1;NFSU2_TR(0x4cf950);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cf953:L4cf953:{c.instructions+=2;NFSU2_TR(0x4cf953);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cf959:{NFSU2_TR(0x4cf959);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cfa01;}}
}
B4cf95f:L4cf95f:{c.instructions+=5;NFSU2_TR(0x4cf95f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cf962:{NFSU2_TR(0x4cf962);
u8 U[4];
w4(U+0,u32(0xb0fcf98eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf967:{NFSU2_TR(0x4cf967);
u8 U[4];
w4(U+0,u32(0xc90dc4abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf96c:{NFSU2_TR(0x4cf96c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf96d:{NFSU2_TR(0x4cf96d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf972ull));
TAIL_STATIC(0x495460u,495);
}
B4cf972:L4cf972:{c.instructions+=2;NFSU2_TR(0x4cf972);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cf975:{NFSU2_TR(0x4cf975);
{goto L4cfa01;}
}
B4cf97a:L4cf97a:{c.instructions+=5;NFSU2_TR(0x4cf97a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf97d:{NFSU2_TR(0x4cf97d);
u8 U[4];
w4(U+0,u32(0xdcfb6b36ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf982:{NFSU2_TR(0x4cf982);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf987:{NFSU2_TR(0x4cf987);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf988:{NFSU2_TR(0x4cf988);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf98dull));
TAIL_STATIC(0x537a10u,537);
}
B4cf98d:L4cf98d:{c.instructions+=3;NFSU2_TR(0x4cf98d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cf990:{NFSU2_TR(0x4cf990);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf991:{NFSU2_TR(0x4cf991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf996ull));
TAIL_STATIC(0x50c900u,50c);
}
B4cf996:L4cf996:{c.instructions+=10;NFSU2_TR(0x4cf996);
__builtin_memmove((R+12),gp(0x850078),4);
}
B4cf99c:{NFSU2_TR(0x4cf99c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cf99e:{NFSU2_TR(0x4cf99e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cf9a1:{NFSU2_TR(0x4cf9a1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cf9a3:{NFSU2_TR(0x4cf9a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4cf9a6:{NFSU2_TR(0x4cf9a6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4cf9a7:{NFSU2_TR(0x4cf9a7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf5538e5aull))));
}
B4cf9ac:{NFSU2_TR(0x4cf9ac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd8f5edf7ull))));
}
B4cf9b1:{NFSU2_TR(0x4cf9b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cf9b4:{NFSU2_TR(0x4cf9b4);
{goto L4cfa01;}
}
B4cf9b6:L4cf9b6:{c.instructions+=5;NFSU2_TR(0x4cf9b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf9b9:{NFSU2_TR(0x4cf9b9);
u8 U[4];
w4(U+0,u32(0xd10d7477ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf9be:{NFSU2_TR(0x4cf9be);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf9c3:{NFSU2_TR(0x4cf9c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf9c4:{NFSU2_TR(0x4cf9c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf9c9ull));
TAIL_STATIC(0x537a10u,537);
}
B4cf9c9:L4cf9c9:{c.instructions+=3;NFSU2_TR(0x4cf9c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cf9cc:{NFSU2_TR(0x4cf9cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf9cd:{NFSU2_TR(0x4cf9cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf9d2ull));
TAIL_STATIC(0x50c900u,50c);
}
B4cf9d2:L4cf9d2:{c.instructions+=2;NFSU2_TR(0x4cf9d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xb5b3ab78ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cf9d9:{NFSU2_TR(0x4cf9d9);
{goto L4cf9fe;}
}
B4cf9db:L4cf9db:{c.instructions+=5;NFSU2_TR(0x4cf9db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cf9de:{NFSU2_TR(0x4cf9de);
u8 U[4];
w4(U+0,u32(0x905101full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf9e3:{NFSU2_TR(0x4cf9e3);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf9e8:{NFSU2_TR(0x4cf9e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf9e9:{NFSU2_TR(0x4cf9e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf9eeull));
TAIL_STATIC(0x537a10u,537);
}
B4cf9ee:L4cf9ee:{c.instructions+=3;NFSU2_TR(0x4cf9ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cf9f1:{NFSU2_TR(0x4cf9f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cf9f2:{NFSU2_TR(0x4cf9f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cf9f7ull));
TAIL_STATIC(0x50c900u,50c);
}
B4cf9f7:L4cf9f7:{c.instructions+=1;NFSU2_TR(0x4cf9f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x844feb00ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cf9fe:L4cf9fe:{c.instructions+=1;NFSU2_TR(0x4cf9fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cfa01:L4cfa01:{c.instructions+=2;NFSU2_TR(0x4cfa01);
__builtin_memmove((R+4),(R+24),4);
}
B4cfa03:{NFSU2_TR(0x4cfa03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfa08ull));
TAIL_STATIC(0x4b8470u,4b8);
}
B4cfa08:L4cfa08:{c.instructions+=2;NFSU2_TR(0x4cfa08);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cfa0e:{NFSU2_TR(0x4cfa0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cfa7f;}}
}
B4cfa10:L4cfa10:{c.instructions+=5;NFSU2_TR(0x4cfa10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cfa13:{NFSU2_TR(0x4cfa13);
u8 U[4];
w4(U+0,u32(0xb0fcf98eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfa18:{NFSU2_TR(0x4cfa18);
u8 U[4];
w4(U+0,u32(0xc90dc4abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfa1d:{NFSU2_TR(0x4cfa1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfa1e:{NFSU2_TR(0x4cfa1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfa23ull));
TAIL_STATIC(0x537a10u,537);
}
B4cfa23:L4cfa23:{c.instructions+=3;NFSU2_TR(0x4cfa23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cfa26:{NFSU2_TR(0x4cfa26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfa27:{NFSU2_TR(0x4cfa27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfa2cull));
TAIL_STATIC(0x50c900u,50c);
}
B4cfa2c:L4cfa2c:{c.instructions+=4;NFSU2_TR(0x4cfa2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cfa2f:{NFSU2_TR(0x4cfa2f);
u8 U[4];
w4(U+0,u32(0xc90dc4abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfa34:{NFSU2_TR(0x4cfa34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfa35:{NFSU2_TR(0x4cfa35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfa3aull));
TAIL_STATIC(0x5379c0u,537);
}
B4cfa3a:L4cfa3a:{c.instructions+=2;NFSU2_TR(0x4cfa3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfa3b:{NFSU2_TR(0x4cfa3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfa40ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4cfa40:L4cfa40:{c.instructions+=3;NFSU2_TR(0x4cfa40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4cfa43:{NFSU2_TR(0x4cfa43);
u8 U[4];
w4(U+0,u32(0x795e14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfa48:{NFSU2_TR(0x4cfa48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfa4dull));
TAIL_STATIC(0x505450u,505);
}
B4cfa4d:L4cfa4d:{c.instructions+=3;NFSU2_TR(0x4cfa4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfa4e:{NFSU2_TR(0x4cfa4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfa4f:{NFSU2_TR(0x4cfa4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfa54ull));
TAIL_STATIC(0x5379c0u,537);
}
B4cfa54:L4cfa54:{c.instructions+=2;NFSU2_TR(0x4cfa54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfa55:{NFSU2_TR(0x4cfa55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfa5aull));
TAIL_STATIC(0x50ca50u,50c);
}
B4cfa5a:L4cfa5a:{c.instructions+=4;NFSU2_TR(0x4cfa5a);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4cfa5f:{NFSU2_TR(0x4cfa5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4cfa62:{NFSU2_TR(0x4cfa62);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cfa64:{NFSU2_TR(0x4cfa64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cfa7f;}}
}
B4cfa66:L4cfa66:{c.instructions+=7;NFSU2_TR(0x4cfa66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cfa69:{NFSU2_TR(0x4cfa69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cfa6c:{NFSU2_TR(0x4cfa6c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfa6d:{NFSU2_TR(0x4cfa6d);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4cfa73:{NFSU2_TR(0x4cfa73);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x4000ull))));
}
B4cfa79:{NFSU2_TR(0x4cfa79);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfa7a:{NFSU2_TR(0x4cfa7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfa7full));
TAIL_STATIC(0x54e6e0u,54e);
}
B4cfa7f:L4cfa7f:{c.instructions+=9;NFSU2_TR(0x4cfa7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cfa83:{NFSU2_TR(0x4cfa83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cfa84:{NFSU2_TR(0x4cfa84);
__builtin_memmove((R+0),(R+24),4);
}
B4cfa86:{NFSU2_TR(0x4cfa86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cfa87:{NFSU2_TR(0x4cfa87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cfa88:{NFSU2_TR(0x4cfa88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cfa89:{NFSU2_TR(0x4cfa89);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cfa90:{NFSU2_TR(0x4cfa90);
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
B4cfa93:{NFSU2_TR(0x4cfa93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cfac0:L4cfac0:{c.instructions+=3;NFSU2_TR(0x4cfac0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cfac6:{NFSU2_TR(0x4cfac6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cfac8:{NFSU2_TR(0x4cfac8);
if(r1(R+518)){{goto L4cfadd;}}
}
B4cfaca:L4cfaca:{c.instructions+=2;NFSU2_TR(0x4cfaca);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cfad1:{NFSU2_TR(0x4cfad1);
if(r1(R+518)){{goto L4cfadd;}}
}
B4cfad3:L4cfad3:{c.instructions+=2;NFSU2_TR(0x4cfad3);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfad5:{NFSU2_TR(0x4cfad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfadaull));
TAIL_STATIC(0x50d180u,50d);
}
B4cfada:L4cfada:{c.instructions+=1;NFSU2_TR(0x4cfada);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cfadd:L4cfadd:{c.instructions+=2;NFSU2_TR(0x4cfadd);
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
B4cfadf:{NFSU2_TR(0x4cfadf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cfaf0:L4cfaf0:{c.instructions+=3;NFSU2_TR(0x4cfaf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfaf1:{NFSU2_TR(0x4cfaf1);
__builtin_memmove((R+24),(R+4),4);
}
B4cfaf3:{NFSU2_TR(0x4cfaf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfaf8ull));
{goto L4cfb10;}
}
B4cfaf8:L4cfaf8:{c.instructions+=2;NFSU2_TR(0x4cfaf8);
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
B4cfafd:{NFSU2_TR(0x4cfafd);
if(r1(R+518)){{goto L4cfb08;}}
}
B4cfaff:L4cfaff:{c.instructions+=2;NFSU2_TR(0x4cfaff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfb00:{NFSU2_TR(0x4cfb00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfb05ull));
TAIL_STATIC(0x575630u,575);
}
B4cfb05:L4cfb05:{c.instructions+=1;NFSU2_TR(0x4cfb05);
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
B4cfb08:L4cfb08:{c.instructions+=3;NFSU2_TR(0x4cfb08);
__builtin_memmove((R+0),(R+24),4);
}
B4cfb0a:{NFSU2_TR(0x4cfb0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cfb0b:{NFSU2_TR(0x4cfb0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cfb10:L4cfb10:{c.instructions+=2;NFSU2_TR(0x4cfb10);
u8 U[4];
w4(U+0,u32(0x795e28ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4cfb16:{NFSU2_TR(0x4cfb16);
TAIL_STATIC(0x4cbc30u,4cb);
}
B4cfb20:L4cfb20:{c.instructions+=8;NFSU2_TR(0x4cfb20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfb22:{NFSU2_TR(0x4cfb22);
u8 U[4];
w4(U+0,u32(0x774554ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfb27:{NFSU2_TR(0x4cfb27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cfb2d:{NFSU2_TR(0x4cfb2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfb2e:{NFSU2_TR(0x4cfb2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cfb35:{NFSU2_TR(0x4cfb35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfb36:{NFSU2_TR(0x4cfb36);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfb38:{NFSU2_TR(0x4cfb38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfb3dull));
TAIL_STATIC(0x575620u,575);
}
B4cfb3d:L4cfb3d:{c.instructions+=5;NFSU2_TR(0x4cfb3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cfb40:{NFSU2_TR(0x4cfb40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4cfb44:{NFSU2_TR(0x4cfb44);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cfb46:{NFSU2_TR(0x4cfb46);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cfb4e:{NFSU2_TR(0x4cfb4e);
if(r1(R+518)){{goto L4cfb6b;}}
}
B4cfb50:L4cfb50:{c.instructions+=4;NFSU2_TR(0x4cfb50);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cfb54:{NFSU2_TR(0x4cfb54);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfb55:{NFSU2_TR(0x4cfb55);
__builtin_memmove((R+4),(R+0),4);
}
B4cfb57:{NFSU2_TR(0x4cfb57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfb5cull));
TAIL_STATIC(0x4b8620u,4b8);
}
B4cfb5c:L4cfb5c:{c.instructions+=4;NFSU2_TR(0x4cfb5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cfb60:{NFSU2_TR(0x4cfb60);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cfb67:{NFSU2_TR(0x4cfb67);
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
B4cfb6a:{NFSU2_TR(0x4cfb6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cfb6b:L4cfb6b:{c.instructions+=5;NFSU2_TR(0x4cfb6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cfb6f:{NFSU2_TR(0x4cfb6f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cfb71:{NFSU2_TR(0x4cfb71);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cfb78:{NFSU2_TR(0x4cfb78);
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
B4cfb7b:{NFSU2_TR(0x4cfb7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cfb80:L4cfb80:{c.instructions+=3;NFSU2_TR(0x4cfb80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfb81:{NFSU2_TR(0x4cfb81);
__builtin_memmove((R+24),(R+4),4);
}
B4cfb83:{NFSU2_TR(0x4cfb83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfb88ull));
TAIL_STATIC(0x4b86b0u,4b8);
}
B4cfb88:L4cfb88:{c.instructions+=2;NFSU2_TR(0x4cfb88);
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
B4cfb8d:{NFSU2_TR(0x4cfb8d);
if(r1(R+518)){{goto L4cfb98;}}
}
B4cfb8f:L4cfb8f:{c.instructions+=2;NFSU2_TR(0x4cfb8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfb90:{NFSU2_TR(0x4cfb90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfb95ull));
TAIL_STATIC(0x575630u,575);
}
B4cfb95:L4cfb95:{c.instructions+=1;NFSU2_TR(0x4cfb95);
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
B4cfb98:L4cfb98:{c.instructions+=3;NFSU2_TR(0x4cfb98);
__builtin_memmove((R+0),(R+24),4);
}
B4cfb9a:{NFSU2_TR(0x4cfb9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cfb9b:{NFSU2_TR(0x4cfb9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cfba0:L4cfba0:{c.instructions+=13;NFSU2_TR(0x4cfba0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfba2:{NFSU2_TR(0x4cfba2);
u8 U[4];
w4(U+0,u32(0x776e28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfba7:{NFSU2_TR(0x4cfba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cfbad:{NFSU2_TR(0x4cfbad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfbae:{NFSU2_TR(0x4cfbae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cfbb5:{NFSU2_TR(0x4cfbb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfbb6:{NFSU2_TR(0x4cfbb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cfbba:{NFSU2_TR(0x4cfbba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfbbb:{NFSU2_TR(0x4cfbbb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfbbc:{NFSU2_TR(0x4cfbbc);
__builtin_memmove((R+24),(R+4),4);
}
B4cfbbe:{NFSU2_TR(0x4cfbbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfbbf:{NFSU2_TR(0x4cfbbf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cfbc3:{NFSU2_TR(0x4cfbc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfbc8ull));
TAIL_STATIC(0x552780u,552);
}
B4cfbc8:L4cfbc8:{c.instructions+=13;NFSU2_TR(0x4cfbc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4cfbcb:{NFSU2_TR(0x4cfbcb);
u8 U[4];
w4(U+0,u32(0x795e4cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4cfbd1:{NFSU2_TR(0x4cfbd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cfbdb:{NFSU2_TR(0x4cfbdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cfbe5:{NFSU2_TR(0x4cfbe5);
__builtin_memmove((R+4),gp(0x836364),4);
}
B4cfbeb:{NFSU2_TR(0x4cfbeb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cfbed:{NFSU2_TR(0x4cfbed);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cfbef:{NFSU2_TR(0x4cfbef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4cfbf2:{NFSU2_TR(0x4cfbf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cfbfa:{NFSU2_TR(0x4cfbfa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xd87133bcull))));
}
B4cfbff:{NFSU2_TR(0x4cfbff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfc00:{NFSU2_TR(0x4cfc00);
u8 U[4];
w4(U+0,u32(0x793fc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfc05:{NFSU2_TR(0x4cfc05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfc0aull));
TAIL_STATIC(0x505450u,505);
}
B4cfc0a:L4cfc0a:{c.instructions+=3;NFSU2_TR(0x4cfc0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfc0b:{NFSU2_TR(0x4cfc0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfc0c:{NFSU2_TR(0x4cfc0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfc11ull));
TAIL_STATIC(0x537a10u,537);
}
B4cfc11:L4cfc11:{c.instructions+=3;NFSU2_TR(0x4cfc11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cfc14:{NFSU2_TR(0x4cfc14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfc15:{NFSU2_TR(0x4cfc15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfc1aull));
TAIL_STATIC(0x50c900u,50c);
}
B4cfc1a:L4cfc1a:{c.instructions+=5;NFSU2_TR(0x4cfc1a);
w4(R+28,u32(0x8ull));
}
B4cfc1f:{NFSU2_TR(0x4cfc1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cfc22:{NFSU2_TR(0x4cfc22);
__builtin_memmove((R+4),(R+24),4);
}
B4cfc24:{NFSU2_TR(0x4cfc24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cfc2a:{NFSU2_TR(0x4cfc2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfc2full));
TAIL_STATIC(0x4b8a10u,4b8);
}
B4cfc2f:L4cfc2f:{c.instructions+=5;NFSU2_TR(0x4cfc2f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfc31:{NFSU2_TR(0x4cfc31);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfc33:{NFSU2_TR(0x4cfc33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfc34:{NFSU2_TR(0x4cfc34);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4cfc37:{NFSU2_TR(0x4cfc37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfc3cull));
TAIL_STATIC(0x538080u,538);
}
B4cfc3c:L4cfc3c:{c.instructions+=3;NFSU2_TR(0x4cfc3c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfc3e:{NFSU2_TR(0x4cfc3e);
__builtin_memmove((R+4),(R+24),4);
}
B4cfc40:{NFSU2_TR(0x4cfc40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfc45ull));
TAIL_STATIC(0x539650u,539);
}
B4cfc45:L4cfc45:{c.instructions+=2;NFSU2_TR(0x4cfc45);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cfc4b:{NFSU2_TR(0x4cfc4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cfc66;}}
}
B4cfc4d:L4cfc4d:{c.instructions+=7;NFSU2_TR(0x4cfc4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cfc50:{NFSU2_TR(0x4cfc50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cfc53:{NFSU2_TR(0x4cfc53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfc54:{NFSU2_TR(0x4cfc54);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4cfc5a:{NFSU2_TR(0x4cfc5a);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x4000ull))));
}
B4cfc60:{NFSU2_TR(0x4cfc60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfc61:{NFSU2_TR(0x4cfc61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfc66ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4cfc66:L4cfc66:{c.instructions+=7;NFSU2_TR(0x4cfc66);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cfc6a:{NFSU2_TR(0x4cfc6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cfc6b:{NFSU2_TR(0x4cfc6b);
__builtin_memmove((R+0),(R+24),4);
}
B4cfc6d:{NFSU2_TR(0x4cfc6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cfc6e:{NFSU2_TR(0x4cfc6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cfc75:{NFSU2_TR(0x4cfc75);
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
B4cfc78:{NFSU2_TR(0x4cfc78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cfc80:L4cfc80:{c.instructions+=3;NFSU2_TR(0x4cfc80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfc81:{NFSU2_TR(0x4cfc81);
__builtin_memmove((R+24),(R+4),4);
}
B4cfc83:{NFSU2_TR(0x4cfc83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfc88ull));
{goto L4cfca0;}
}
B4cfc88:L4cfc88:{c.instructions+=2;NFSU2_TR(0x4cfc88);
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
B4cfc8d:{NFSU2_TR(0x4cfc8d);
if(r1(R+518)){{goto L4cfc98;}}
}
B4cfc8f:L4cfc8f:{c.instructions+=2;NFSU2_TR(0x4cfc8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfc90:{NFSU2_TR(0x4cfc90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfc95ull));
TAIL_STATIC(0x575630u,575);
}
B4cfc95:L4cfc95:{c.instructions+=1;NFSU2_TR(0x4cfc95);
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
B4cfc98:L4cfc98:{c.instructions+=3;NFSU2_TR(0x4cfc98);
__builtin_memmove((R+0),(R+24),4);
}
B4cfc9a:{NFSU2_TR(0x4cfc9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cfc9b:{NFSU2_TR(0x4cfc9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cfca0:L4cfca0:{c.instructions+=2;NFSU2_TR(0x4cfca0);
u8 U[4];
w4(U+0,u32(0x795e4cull));
s4(u32(r4(R+4)),r4(U+0));
}
B4cfca6:{NFSU2_TR(0x4cfca6);
TAIL_STATIC(0x4cbc30u,4cb);
}
B4cfcb0:L4cfcb0:{c.instructions+=15;NFSU2_TR(0x4cfcb0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfcb1:{NFSU2_TR(0x4cfcb1);
__builtin_memmove((R+20),(R+16),4);
}
B4cfcb3:{NFSU2_TR(0x4cfcb3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4cfcb6:{NFSU2_TR(0x4cfcb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B4cfcbc:{NFSU2_TR(0x4cfcbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cfcbf:{NFSU2_TR(0x4cfcbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfcc0:{NFSU2_TR(0x4cfcc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4cfcc3:{NFSU2_TR(0x4cfcc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cfcc6:{NFSU2_TR(0x4cfcc6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cfcca:{NFSU2_TR(0x4cfcca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cfcce:{NFSU2_TR(0x4cfcce);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cfcd2:{NFSU2_TR(0x4cfcd2);
__builtin_memmove((R+0),gp(0x8500cc),1);
}
B4cfcd7:{NFSU2_TR(0x4cfcd7);
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
B4cfcd9:{NFSU2_TR(0x4cfcd9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfcda:{NFSU2_TR(0x4cfcda);
if(r1(R+518)){{goto L4cfced;}}
}
B4cfcdc:L4cfcdc:{c.instructions+=4;NFSU2_TR(0x4cfcdc);
__builtin_memmove((R+4),gp(0x8500d4),4);
}
B4cfce2:{NFSU2_TR(0x4cfce2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfce3:{NFSU2_TR(0x4cfce3);
w4(R+4,u32(0x850080ull));
}
B4cfce8:{NFSU2_TR(0x4cfce8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfcedull));
TAIL_STATIC(0x5031b0u,503);
}
B4cfced:L4cfced:{c.instructions+=3;NFSU2_TR(0x4cfced);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cfcf0:{NFSU2_TR(0x4cfcf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cfcf2:{NFSU2_TR(0x4cfcf2);
if(r1(R+518)){{goto L4cfd31;}}
}
B4cfcf4:L4cfcf4:{c.instructions+=4;NFSU2_TR(0x4cfcf4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cfcf6:{NFSU2_TR(0x4cfcf6);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cfcfb:{NFSU2_TR(0x4cfcfb);
w4(R+4,u32(0x3full));
}
B4cfd00:{NFSU2_TR(0x4cfd00);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4cfd04:L4cfd04:{c.instructions+=1;NFSU2_TR(0x4cfd04);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4cfd06;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cfd04u);}goto L4cfd04;}
}
B4cfd06:L4cfd06:{c.instructions+=8;NFSU2_TR(0x4cfd06);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4cfd08:{NFSU2_TR(0x4cfd08);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4cfd09:{NFSU2_TR(0x4cfd09);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cfd0c:{NFSU2_TR(0x4cfd0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfd0d:{NFSU2_TR(0x4cfd0d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfd0e:{NFSU2_TR(0x4cfd0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4cfd12:{NFSU2_TR(0x4cfd12);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfd13:{NFSU2_TR(0x4cfd13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfd18ull));
TAIL_STATIC(0x43fbc0u,43f);
}
B4cfd18:L4cfd18:{c.instructions+=5;NFSU2_TR(0x4cfd18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cfd1b:{NFSU2_TR(0x4cfd1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4cfd1f:{NFSU2_TR(0x4cfd1f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfd20:{NFSU2_TR(0x4cfd20);
__builtin_memmove((R+4),(R+24),4);
}
B4cfd22:{NFSU2_TR(0x4cfd22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfd27ull));
TAIL_STATIC(0x4b8ee0u,4b8);
}
B4cfd27:L4cfd27:{c.instructions+=6;NFSU2_TR(0x4cfd27);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cfd2b:{NFSU2_TR(0x4cfd2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cfd2c:{NFSU2_TR(0x4cfd2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cfd2d:{NFSU2_TR(0x4cfd2d);
__builtin_memmove((R+16),(R+20),4);
}
B4cfd2f:{NFSU2_TR(0x4cfd2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cfd30:{NFSU2_TR(0x4cfd30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cfd31:L4cfd31:{c.instructions+=3;NFSU2_TR(0x4cfd31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cfd33:{NFSU2_TR(0x4cfd33);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cfd35:{NFSU2_TR(0x4cfd35);
if(r1(R+518)){{goto L4cfd46;}}
}
B4cfd37:L4cfd37:{c.instructions+=2;NFSU2_TR(0x4cfd37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfd38:{NFSU2_TR(0x4cfd38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfd3dull));
TAIL_STATIC(0x540a60u,540);
}
B4cfd3d:L4cfd3d:{c.instructions+=2;NFSU2_TR(0x4cfd3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cfd40:{NFSU2_TR(0x4cfd40);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4cfd46:L4cfd46:{c.instructions+=2;NFSU2_TR(0x4cfd46);
u8 U[4];
w4(U+0,u32(0x23e142ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfd4b:{NFSU2_TR(0x4cfd4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfd50ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4cfd50:L4cfd50:{c.instructions+=8;NFSU2_TR(0x4cfd50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cfd53:{NFSU2_TR(0x4cfd53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cfd56:{NFSU2_TR(0x4cfd56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfd57:{NFSU2_TR(0x4cfd57);
u8 U[4];
w4(U+0,u32(0xca4c311bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfd5c:{NFSU2_TR(0x4cfd5c);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfd61:{NFSU2_TR(0x4cfd61);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfd66:{NFSU2_TR(0x4cfd66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfd67:{NFSU2_TR(0x4cfd67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfd6cull));
TAIL_STATIC(0x5585e0u,558);
}
B4cfd6c:L4cfd6c:{c.instructions+=8;NFSU2_TR(0x4cfd6c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cfd6f:{NFSU2_TR(0x4cfd6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cfd70:{NFSU2_TR(0x4cfd70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4cfd72:{NFSU2_TR(0x4cfd72);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cfd76:{NFSU2_TR(0x4cfd76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cfd77:{NFSU2_TR(0x4cfd77);
__builtin_memmove((R+16),(R+20),4);
}
B4cfd79:{NFSU2_TR(0x4cfd79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cfd7a:{NFSU2_TR(0x4cfd7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cfd80:L4cfd80:{c.instructions+=11;NFSU2_TR(0x4cfd80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cfd84:{NFSU2_TR(0x4cfd84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfd85:{NFSU2_TR(0x4cfd85);
__builtin_memmove((R+24),(R+4),4);
}
B4cfd87:{NFSU2_TR(0x4cfd87);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4cfd8b:{NFSU2_TR(0x4cfd8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cfd8e:{NFSU2_TR(0x4cfd8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cfd92:{NFSU2_TR(0x4cfd92);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cfd96:{NFSU2_TR(0x4cfd96);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4cfd99:{NFSU2_TR(0x4cfd99);
__builtin_memmove((R+0),gp(0x8500cc),1);
}
B4cfd9e:{NFSU2_TR(0x4cfd9e);
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
B4cfda0:{NFSU2_TR(0x4cfda0);
if(r1(R+518)){{goto L4cfdb3;}}
}
B4cfda2:L4cfda2:{c.instructions+=4;NFSU2_TR(0x4cfda2);
__builtin_memmove((R+8),gp(0x8500d4),4);
}
B4cfda8:{NFSU2_TR(0x4cfda8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfda9:{NFSU2_TR(0x4cfda9);
w4(R+4,u32(0x850080ull));
}
B4cfdae:{NFSU2_TR(0x4cfdae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfdb3ull));
TAIL_STATIC(0x5031b0u,503);
}
B4cfdb3:L4cfdb3:{c.instructions+=2;NFSU2_TR(0x4cfdb3);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4cfdb7:{NFSU2_TR(0x4cfdb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cfdf9;}}
}
B4cfdb9:L4cfdb9:{c.instructions+=3;NFSU2_TR(0x4cfdb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cfdbb:{NFSU2_TR(0x4cfdbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cfdbd:{NFSU2_TR(0x4cfdbd);
if(r1(R+518)){{goto L4cfdce;}}
}
B4cfdbf:L4cfdbf:{c.instructions+=2;NFSU2_TR(0x4cfdbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfdc0:{NFSU2_TR(0x4cfdc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfdc5ull));
TAIL_STATIC(0x540a60u,540);
}
B4cfdc5:L4cfdc5:{c.instructions+=2;NFSU2_TR(0x4cfdc5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cfdc8:{NFSU2_TR(0x4cfdc8);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4cfdce:L4cfdce:{c.instructions+=2;NFSU2_TR(0x4cfdce);
u8 U[4];
w4(U+0,u32(0x23e142ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfdd3:{NFSU2_TR(0x4cfdd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfdd8ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4cfdd8:L4cfdd8:{c.instructions+=8;NFSU2_TR(0x4cfdd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cfddb:{NFSU2_TR(0x4cfddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cfdde:{NFSU2_TR(0x4cfdde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfddf:{NFSU2_TR(0x4cfddf);
u8 U[4];
w4(U+0,u32(0xca4c311bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfde4:{NFSU2_TR(0x4cfde4);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfde9:{NFSU2_TR(0x4cfde9);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfdee:{NFSU2_TR(0x4cfdee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfdef:{NFSU2_TR(0x4cfdef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfdf4ull));
TAIL_STATIC(0x5585e0u,558);
}
B4cfdf4:L4cfdf4:{c.instructions+=2;NFSU2_TR(0x4cfdf4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cfdf7:{NFSU2_TR(0x4cfdf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4cfdf9:L4cfdf9:{c.instructions+=3;NFSU2_TR(0x4cfdf9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cfdfd:{NFSU2_TR(0x4cfdfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cfdfe:{NFSU2_TR(0x4cfdfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cfe10:L4cfe10:{c.instructions+=7;NFSU2_TR(0x4cfe10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfe11:{NFSU2_TR(0x4cfe11);
__builtin_memmove((R+24),(R+4),4);
}
B4cfe13:{NFSU2_TR(0x4cfe13);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cfe17:{NFSU2_TR(0x4cfe17);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cfe1b:{NFSU2_TR(0x4cfe1b);
__builtin_memmove((R+0),gp(0x8500cc),1);
}
B4cfe20:{NFSU2_TR(0x4cfe20);
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
B4cfe22:{NFSU2_TR(0x4cfe22);
if(r1(R+518)){{goto L4cfe34;}}
}
B4cfe24:L4cfe24:{c.instructions+=4;NFSU2_TR(0x4cfe24);
__builtin_memmove((R+0),gp(0x8500d4),4);
}
B4cfe29:{NFSU2_TR(0x4cfe29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfe2a:{NFSU2_TR(0x4cfe2a);
w4(R+4,u32(0x850080ull));
}
B4cfe2f:{NFSU2_TR(0x4cfe2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfe34ull));
TAIL_STATIC(0x5031b0u,503);
}
B4cfe34:L4cfe34:{c.instructions+=3;NFSU2_TR(0x4cfe34);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4cfe37:{NFSU2_TR(0x4cfe37);
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
B4cfe39:{NFSU2_TR(0x4cfe39);
if(r1(R+518)){{goto L4cfe7b;}}
}
B4cfe3b:L4cfe3b:{c.instructions+=3;NFSU2_TR(0x4cfe3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cfe3d:{NFSU2_TR(0x4cfe3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cfe3f:{NFSU2_TR(0x4cfe3f);
if(r1(R+518)){{goto L4cfe50;}}
}
B4cfe41:L4cfe41:{c.instructions+=2;NFSU2_TR(0x4cfe41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfe42:{NFSU2_TR(0x4cfe42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfe47ull));
TAIL_STATIC(0x540a60u,540);
}
B4cfe47:L4cfe47:{c.instructions+=2;NFSU2_TR(0x4cfe47);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cfe4a:{NFSU2_TR(0x4cfe4a);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4cfe50:L4cfe50:{c.instructions+=2;NFSU2_TR(0x4cfe50);
u8 U[4];
w4(U+0,u32(0x23e142ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfe55:{NFSU2_TR(0x4cfe55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfe5aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4cfe5a:L4cfe5a:{c.instructions+=8;NFSU2_TR(0x4cfe5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cfe5d:{NFSU2_TR(0x4cfe5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cfe60:{NFSU2_TR(0x4cfe60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfe61:{NFSU2_TR(0x4cfe61);
u8 U[4];
w4(U+0,u32(0xca4c311bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfe66:{NFSU2_TR(0x4cfe66);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfe6b:{NFSU2_TR(0x4cfe6b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfe70:{NFSU2_TR(0x4cfe70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfe71:{NFSU2_TR(0x4cfe71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfe76ull));
TAIL_STATIC(0x5585e0u,558);
}
B4cfe76:L4cfe76:{c.instructions+=2;NFSU2_TR(0x4cfe76);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cfe79:{NFSU2_TR(0x4cfe79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4cfe7b:L4cfe7b:{c.instructions+=3;NFSU2_TR(0x4cfe7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4cfe7f:{NFSU2_TR(0x4cfe7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cfe80:{NFSU2_TR(0x4cfe80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cfe90:L4cfe90:{c.instructions+=5;NFSU2_TR(0x4cfe90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfe91:{NFSU2_TR(0x4cfe91);
__builtin_memmove((R+24),(R+4),4);
}
B4cfe93:{NFSU2_TR(0x4cfe93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cfe95:{NFSU2_TR(0x4cfe95);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cfe97:{NFSU2_TR(0x4cfe97);
if(r1(R+518)){{goto L4cfea8;}}
}
B4cfe99:L4cfe99:{c.instructions+=2;NFSU2_TR(0x4cfe99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfe9a:{NFSU2_TR(0x4cfe9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfe9full));
TAIL_STATIC(0x540a60u,540);
}
B4cfe9f:L4cfe9f:{c.instructions+=2;NFSU2_TR(0x4cfe9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4cfea2:{NFSU2_TR(0x4cfea2);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4cfea8:L4cfea8:{c.instructions+=11;NFSU2_TR(0x4cfea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cfeab:{NFSU2_TR(0x4cfeab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cfeae:{NFSU2_TR(0x4cfeae);
u8 U[4];
w4(U+0,u32(0x82159a60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfeb3:{NFSU2_TR(0x4cfeb3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfeb5:{NFSU2_TR(0x4cfeb5);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfeba:{NFSU2_TR(0x4cfeba);
u8 U[4];
w4(U+0,u32(0x73c044ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfebf:{NFSU2_TR(0x4cfebf);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfec4:{NFSU2_TR(0x4cfec4);
u8 U[4];
w4(U+0,u32(0x39df715ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfec9:{NFSU2_TR(0x4cfec9);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfece:{NFSU2_TR(0x4cfece);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfecf:{NFSU2_TR(0x4cfecf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cfed4ull));
TAIL_STATIC(0x558860u,558);
}
B4cfed4:L4cfed4:{c.instructions+=4;NFSU2_TR(0x4cfed4);
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
B4cfed7:{NFSU2_TR(0x4cfed7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4cfed9:{NFSU2_TR(0x4cfed9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cfeda:{NFSU2_TR(0x4cfeda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cfee0:L4cfee0:{c.instructions+=17;NFSU2_TR(0x4cfee0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfee1:{NFSU2_TR(0x4cfee1);
__builtin_memmove((R+20),(R+16),4);
}
B4cfee3:{NFSU2_TR(0x4cfee3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B4cfee6:{NFSU2_TR(0x4cfee6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfee8:{NFSU2_TR(0x4cfee8);
u8 U[4];
w4(U+0,u32(0x77456bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfeed:{NFSU2_TR(0x4cfeed);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cfef3:{NFSU2_TR(0x4cfef3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfef4:{NFSU2_TR(0x4cfef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cfefb:{NFSU2_TR(0x4cfefb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1d0ull))));
}
B4cff01:{NFSU2_TR(0x4cff01);
__builtin_memmove((R+0),gp(0x8500cc),1);
}
B4cff06:{NFSU2_TR(0x4cff06);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4cff08:{NFSU2_TR(0x4cff08);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cff09:{NFSU2_TR(0x4cff09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cff0a:{NFSU2_TR(0x4cff0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cff0b:{NFSU2_TR(0x4cff0b);
__builtin_memmove((R+28),gp(0x8500d0),4);
}
B4cff11:{NFSU2_TR(0x4cff11);
__builtin_memmove((R+24),(R+4),4);
}
B4cff13:{NFSU2_TR(0x4cff13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cff41;}}
}
B4cff15:L4cff15:{c.instructions+=4;NFSU2_TR(0x4cff15);
__builtin_memmove((R+0),gp(0x8500d4),4);
}
B4cff1a:{NFSU2_TR(0x4cff1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cff1b:{NFSU2_TR(0x4cff1b);
w4(R+4,u32(0x850080ull));
}
B4cff20:{NFSU2_TR(0x4cff20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cff25ull));
TAIL_STATIC(0x5031b0u,503);
}
B4cff25:L4cff25:{c.instructions+=9;NFSU2_TR(0x4cff25);
w4(R+0,u32(0xfffffffeull));
}
B4cff2a:{NFSU2_TR(0x4cff2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cff31:{NFSU2_TR(0x4cff31);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cff38:{NFSU2_TR(0x4cff38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cff39:{NFSU2_TR(0x4cff39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cff3a:{NFSU2_TR(0x4cff3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cff3b:{NFSU2_TR(0x4cff3b);
__builtin_memmove((R+16),(R+20),4);
}
B4cff3d:{NFSU2_TR(0x4cff3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cff3e:{NFSU2_TR(0x4cff3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cff41:L4cff41:{c.instructions+=2;NFSU2_TR(0x4cff41);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4cff44:{NFSU2_TR(0x4cff44);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4d0309u,4d0);}
}
B4cff4a:L4cff4a:{c.instructions+=3;NFSU2_TR(0x4cff4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cff4d:{NFSU2_TR(0x4cff4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cff4f:{NFSU2_TR(0x4cff4f);
if(r1(R+518)){TAIL_STATIC(0x4d0309u,4d0);}
}
B4cff55:L4cff55:{c.instructions+=3;NFSU2_TR(0x4cff55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4cff58:{NFSU2_TR(0x4cff58);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cff5b:{NFSU2_TR(0x4cff5b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4d0309u,4d0);}
}
B4cff61:L4cff61:{c.instructions+=2;NFSU2_TR(0x4cff61);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x11ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cff64:{NFSU2_TR(0x4cff64);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x4d0309u,4d0);}
}
B4cff6a:L4cff6a:{c.instructions+=1;NFSU2_TR(0x4cff6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cff6full));
TAIL_STATIC(0x742db0u,742);
}
B4cff6f:L4cff6f:{c.instructions+=2;NFSU2_TR(0x4cff6f);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B4cff71:{NFSU2_TR(0x4cff71);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4d02edu,4d0);}
}
B4cff77:L4cff77:{c.instructions+=2;NFSU2_TR(0x4cff77);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x11ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x11ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x11ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cff7a:{NFSU2_TR(0x4cff7a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4d02edu,4d0);}
}
B4cff80:L4cff80:{c.instructions+=3;NFSU2_TR(0x4cff80);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B4cff83:{NFSU2_TR(0x4cff83);
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
B4cff86:{NFSU2_TR(0x4cff86);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4d02d4u,4d0);}
}
B4cff8c:L4cff8c:{c.instructions+=1;NFSU2_TR(0x4cff8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4d0324ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4cff93:L4cff93:{c.instructions+=3;NFSU2_TR(0x4cff93);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cff95:{NFSU2_TR(0x4cff95);
w4(R+4,u32(0x850080ull));
}
B4cff9a:{NFSU2_TR(0x4cff9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cff9full));
TAIL_STATIC(0x5031b0u,503);
}
B4cff9f:L4cff9f:{c.instructions+=9;NFSU2_TR(0x4cff9f);
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
B4cffa1:{NFSU2_TR(0x4cffa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cffa8:{NFSU2_TR(0x4cffa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cffaf:{NFSU2_TR(0x4cffaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cffb0:{NFSU2_TR(0x4cffb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cffb1:{NFSU2_TR(0x4cffb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cffb2:{NFSU2_TR(0x4cffb2);
__builtin_memmove((R+16),(R+20),4);
}
B4cffb4:{NFSU2_TR(0x4cffb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4cffb5:{NFSU2_TR(0x4cffb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cffb8:L4cffb8:{c.instructions+=1;NFSU2_TR(0x4cffb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cffbdull));
TAIL_STATIC(0x591030u,591);
}
B4cffbd:L4cffbd:{c.instructions+=2;NFSU2_TR(0x4cffbd);
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
B4cffbf:{NFSU2_TR(0x4cffbf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x4d030cu,4d0);}
}
B4cffc5:L4cffc5:{c.instructions+=1;NFSU2_TR(0x4cffc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cffcaull));
TAIL_STATIC(0x58a0e0u,58a);
}
B4cffca:L4cffca:{c.instructions+=5;NFSU2_TR(0x4cffca);
__builtin_memmove((R+28),(R+0),4);
}
B4cffcc:{NFSU2_TR(0x4cffcc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cffce:{NFSU2_TR(0x4cffce);
u8 U[4];
w4(U+0,u32(0x4bc1a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cffd3:{NFSU2_TR(0x4cffd3);
__builtin_memmove((R+4),(R+28),4);
}
B4cffd5:{NFSU2_TR(0x4cffd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cffdaull));
TAIL_STATIC(0x582360u,582);
}
B4cffda:L4cffda:{c.instructions+=2;NFSU2_TR(0x4cffda);
w4(R+4,u32(0x89cf48ull));
}
B4cffdf:{NFSU2_TR(0x4cffdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cffe4ull));
TAIL_STATIC(0x5f0150u,5f0);
}
B4cffe4:L4cffe4:{c.instructions+=7;NFSU2_TR(0x4cffe4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cffe5:{NFSU2_TR(0x4cffe5);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cffef:{NFSU2_TR(0x4cffef);
__builtin_memmove((R+4),(R+518),1);
}
B4cfff2:{NFSU2_TR(0x4cfff2);
u8 U[4];
w4(U+0,u32(0x4b9090ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfff7:{NFSU2_TR(0x4cfff7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cfff8:{NFSU2_TR(0x4cfff8);
__builtin_memmove((R+4),(R+28),4);
}
B4cfffa:{NFSU2_TR(0x4cfffa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cffffull));
TAIL_STATIC(0x588630u,588);
}
B4cffff:L4cffff:{c.instructions+=1;NFSU2_TR(0x4cffff);
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
TAIL_STATIC(0x4d0001u,4d0);
}
XIT:NFSU2_TR_EXIT(0x4cf,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
