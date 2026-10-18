#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_520(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x51f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x51f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_51f(u8* __restrict R,Cpu& c);
u32 page_51f(Cpu& c){return body_51f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_51f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x51f001:goto L51f001;
case 0x51f009:c.instructions+=3;goto B51f009;
case 0x51f011:c.instructions+=2;goto B51f011;
case 0x51f019:c.instructions+=1;goto B51f019;
case 0x51f021:goto L51f021;
case 0x51f023:c.instructions+=1;goto B51f023;
case 0x51f025:goto L51f025;
case 0x51f028:c.instructions+=1;goto B51f028;
case 0x51f02a:goto L51f02a;
case 0x51f02c:c.instructions+=1;goto B51f02c;
case 0x51f030:goto L51f030;
case 0x51f032:c.instructions+=1;goto B51f032;
case 0x51f034:goto L51f034;
case 0x51f037:c.instructions+=1;goto B51f037;
case 0x51f039:goto L51f039;
case 0x51f03b:goto L51f03b;
case 0x51f03d:c.instructions+=1;goto B51f03d;
case 0x51f043:goto L51f043;
case 0x51f046:c.instructions+=4;goto B51f046;
case 0x51f04a:c.instructions+=3;goto B51f04a;
case 0x51f04b:c.instructions+=2;goto B51f04b;
case 0x51f04c:c.instructions+=1;goto B51f04c;
case 0x51f051:goto L51f051;
case 0x51f054:c.instructions+=2;goto B51f054;
case 0x51f056:c.instructions+=1;goto B51f056;
case 0x51f05c:goto L51f05c;
case 0x51f05e:c.instructions+=1;goto B51f05e;
case 0x51f060:goto L51f060;
case 0x51f064:c.instructions+=10;goto B51f064;
case 0x51f068:c.instructions+=9;goto B51f068;
case 0x51f06c:c.instructions+=8;goto B51f06c;
case 0x51f070:c.instructions+=7;goto B51f070;
case 0x51f074:c.instructions+=6;goto B51f074;
case 0x51f078:c.instructions+=5;goto B51f078;
case 0x51f07b:c.instructions+=4;goto B51f07b;
case 0x51f07d:c.instructions+=3;goto B51f07d;
case 0x51f081:c.instructions+=2;goto B51f081;
case 0x51f085:c.instructions+=1;goto B51f085;
case 0x51f087:goto L51f087;
case 0x51f08b:c.instructions+=4;goto B51f08b;
case 0x51f08f:c.instructions+=3;goto B51f08f;
case 0x51f091:c.instructions+=2;goto B51f091;
case 0x51f094:c.instructions+=1;goto B51f094;
case 0x51f096:goto L51f096;
case 0x51f09a:c.instructions+=1;goto B51f09a;
case 0x51f09e:goto L51f09e;
case 0x51f0a2:c.instructions+=4;goto B51f0a2;
case 0x51f0a6:c.instructions+=3;goto B51f0a6;
case 0x51f0a8:c.instructions+=2;goto B51f0a8;
case 0x51f0ab:c.instructions+=1;goto B51f0ab;
case 0x51f0ad:goto L51f0ad;
case 0x51f0b1:c.instructions+=1;goto B51f0b1;
case 0x51f0b5:goto L51f0b5;
case 0x51f0b9:c.instructions+=4;goto B51f0b9;
case 0x51f0bd:c.instructions+=3;goto B51f0bd;
case 0x51f0bf:c.instructions+=2;goto B51f0bf;
case 0x51f0c2:c.instructions+=1;goto B51f0c2;
case 0x51f0c4:goto L51f0c4;
case 0x51f0c8:c.instructions+=1;goto B51f0c8;
case 0x51f0cc:goto L51f0cc;
case 0x51f0d0:c.instructions+=4;goto B51f0d0;
case 0x51f0d4:c.instructions+=3;goto B51f0d4;
case 0x51f0d6:c.instructions+=2;goto B51f0d6;
case 0x51f0d9:c.instructions+=1;goto B51f0d9;
case 0x51f0db:goto L51f0db;
case 0x51f0df:c.instructions+=1;goto B51f0df;
case 0x51f0e3:goto L51f0e3;
case 0x51f0e6:c.instructions+=1;goto B51f0e6;
case 0x51f0eb:goto L51f0eb;
case 0x51f0ee:c.instructions+=2;goto B51f0ee;
case 0x51f0f0:c.instructions+=1;goto B51f0f0;
case 0x51f0f6:goto L51f0f6;
case 0x51f0fa:c.instructions+=3;goto B51f0fa;
case 0x51f0fb:c.instructions+=2;goto B51f0fb;
case 0x51f0fc:c.instructions+=1;goto B51f0fc;
case 0x51f101:goto L51f101;
case 0x51f104:c.instructions+=2;goto B51f104;
case 0x51f106:c.instructions+=1;goto B51f106;
case 0x51f10c:goto L51f10c;
case 0x51f10e:c.instructions+=1;goto B51f10e;
case 0x51f110:goto L51f110;
case 0x51f114:c.instructions+=8;goto B51f114;
case 0x51f118:c.instructions+=7;goto B51f118;
case 0x51f11c:c.instructions+=6;goto B51f11c;
case 0x51f120:c.instructions+=5;goto B51f120;
case 0x51f124:c.instructions+=4;goto B51f124;
case 0x51f128:c.instructions+=3;goto B51f128;
case 0x51f12c:c.instructions+=2;goto B51f12c;
case 0x51f130:c.instructions+=1;goto B51f130;
case 0x51f132:goto L51f132;
case 0x51f136:c.instructions+=4;goto B51f136;
case 0x51f13a:c.instructions+=3;goto B51f13a;
case 0x51f13c:c.instructions+=2;goto B51f13c;
case 0x51f13f:c.instructions+=1;goto B51f13f;
case 0x51f141:goto L51f141;
case 0x51f145:c.instructions+=1;goto B51f145;
case 0x51f149:goto L51f149;
case 0x51f14d:c.instructions+=4;goto B51f14d;
case 0x51f151:c.instructions+=3;goto B51f151;
case 0x51f153:c.instructions+=2;goto B51f153;
case 0x51f156:c.instructions+=1;goto B51f156;
case 0x51f158:goto L51f158;
case 0x51f15c:c.instructions+=1;goto B51f15c;
case 0x51f160:goto L51f160;
case 0x51f164:c.instructions+=4;goto B51f164;
case 0x51f168:c.instructions+=3;goto B51f168;
case 0x51f16a:c.instructions+=2;goto B51f16a;
case 0x51f16d:c.instructions+=1;goto B51f16d;
case 0x51f16f:goto L51f16f;
case 0x51f173:c.instructions+=1;goto B51f173;
case 0x51f177:goto L51f177;
case 0x51f17b:c.instructions+=4;goto B51f17b;
case 0x51f17f:c.instructions+=3;goto B51f17f;
case 0x51f181:c.instructions+=2;goto B51f181;
case 0x51f184:c.instructions+=1;goto B51f184;
case 0x51f186:goto L51f186;
case 0x51f18a:c.instructions+=1;goto B51f18a;
case 0x51f18e:goto L51f18e;
case 0x51f192:c.instructions+=17;goto B51f192;
case 0x51f196:c.instructions+=16;goto B51f196;
case 0x51f19a:c.instructions+=15;goto B51f19a;
case 0x51f19e:c.instructions+=14;goto B51f19e;
case 0x51f19f:c.instructions+=13;goto B51f19f;
case 0x51f1a0:c.instructions+=12;goto B51f1a0;
case 0x51f1a2:c.instructions+=11;goto B51f1a2;
case 0x51f1a5:c.instructions+=10;goto B51f1a5;
case 0x51f1a8:c.instructions+=9;goto B51f1a8;
case 0x51f1ac:c.instructions+=8;goto B51f1ac;
case 0x51f1af:c.instructions+=7;goto B51f1af;
case 0x51f1b3:c.instructions+=6;goto B51f1b3;
case 0x51f1b5:c.instructions+=5;goto B51f1b5;
case 0x51f1b8:c.instructions+=4;goto B51f1b8;
case 0x51f1b9:c.instructions+=3;goto B51f1b9;
case 0x51f1ba:c.instructions+=2;goto B51f1ba;
case 0x51f1bd:c.instructions+=1;goto B51f1bd;
case 0x51f1c0:goto L51f1c0;
case 0x51f1c1:c.instructions+=6;goto B51f1c1;
case 0x51f1c2:c.instructions+=5;goto B51f1c2;
case 0x51f1c4:c.instructions+=4;goto B51f1c4;
case 0x51f1c7:c.instructions+=3;goto B51f1c7;
case 0x51f1ca:c.instructions+=2;goto B51f1ca;
case 0x51f1cc:c.instructions+=1;goto B51f1cc;
case 0x51f1ce:goto L51f1ce;
case 0x51f1d0:c.instructions+=1;goto B51f1d0;
case 0x51f1d2:goto L51f1d2;
case 0x51f1d5:c.instructions+=1;goto B51f1d5;
case 0x51f1d7:goto L51f1d7;
case 0x51f1d9:c.instructions+=1;goto B51f1d9;
case 0x51f1e0:goto L51f1e0;
case 0x51f1e2:c.instructions+=1;goto B51f1e2;
case 0x51f1e4:goto L51f1e4;
case 0x51f1e7:c.instructions+=1;goto B51f1e7;
case 0x51f1e9:goto L51f1e9;
case 0x51f1eb:goto L51f1eb;
case 0x51f1ed:c.instructions+=1;goto B51f1ed;
case 0x51f1ef:goto L51f1ef;
case 0x51f1f2:c.instructions+=2;goto B51f1f2;
case 0x51f1f3:c.instructions+=1;goto B51f1f3;
case 0x51f1f8:goto L51f1f8;
case 0x51f1fb:c.instructions+=3;goto B51f1fb;
case 0x51f1fe:c.instructions+=2;goto B51f1fe;
case 0x51f200:c.instructions+=1;goto B51f200;
case 0x51f202:goto L51f202;
case 0x51f205:c.instructions+=1;goto B51f205;
case 0x51f207:goto L51f207;
case 0x51f20a:c.instructions+=2;goto B51f20a;
case 0x51f20b:c.instructions+=1;goto B51f20b;
case 0x51f210:goto L51f210;
case 0x51f213:goto L51f213;
case 0x51f214:c.instructions+=2;goto B51f214;
case 0x51f215:c.instructions+=1;goto B51f215;
case 0x51f220:goto L51f220;
case 0x51f221:c.instructions+=6;goto B51f221;
case 0x51f224:c.instructions+=5;goto B51f224;
case 0x51f225:c.instructions+=4;goto B51f225;
case 0x51f228:c.instructions+=3;goto B51f228;
case 0x51f22a:c.instructions+=2;goto B51f22a;
case 0x51f22e:c.instructions+=1;goto B51f22e;
case 0x51f234:goto L51f234;
case 0x51f235:c.instructions+=1;goto B51f235;
case 0x51f236:goto L51f236;
case 0x51f238:c.instructions+=1;goto B51f238;
case 0x51f23a:goto L51f23a;
case 0x51f23d:c.instructions+=1;goto B51f23d;
case 0x51f23f:goto L51f23f;
case 0x51f241:goto L51f241;
case 0x51f243:c.instructions+=1;goto B51f243;
case 0x51f245:goto L51f245;
case 0x51f248:c.instructions+=1;goto B51f248;
case 0x51f24a:goto L51f24a;
case 0x51f24c:goto L51f24c;
case 0x51f24e:c.instructions+=1;goto B51f24e;
case 0x51f250:goto L51f250;
case 0x51f253:c.instructions+=2;goto B51f253;
case 0x51f255:c.instructions+=1;goto B51f255;
case 0x51f257:goto L51f257;
case 0x51f25d:c.instructions+=2;goto B51f25d;
case 0x51f25f:c.instructions+=1;goto B51f25f;
case 0x51f261:goto L51f261;
case 0x51f265:c.instructions+=1;goto B51f265;
case 0x51f267:goto L51f267;
case 0x51f26e:goto L51f26e;
case 0x51f272:c.instructions+=1;goto B51f272;
case 0x51f274:goto L51f274;
case 0x51f277:c.instructions+=3;goto B51f277;
case 0x51f27a:c.instructions+=2;goto B51f27a;
case 0x51f27c:c.instructions+=1;goto B51f27c;
case 0x51f27e:goto L51f27e;
case 0x51f280:goto L51f280;
case 0x51f281:c.instructions+=1;goto B51f281;
case 0x51f286:goto L51f286;
case 0x51f289:c.instructions+=3;goto B51f289;
case 0x51f28c:c.instructions+=2;goto B51f28c;
case 0x51f28d:c.instructions+=1;goto B51f28d;
case 0x51f28f:goto L51f28f;
case 0x51f292:c.instructions+=1;goto B51f292;
case 0x51f294:goto L51f294;
case 0x51f298:c.instructions+=3;goto B51f298;
case 0x51f29b:c.instructions+=2;goto B51f29b;
case 0x51f29d:c.instructions+=1;goto B51f29d;
case 0x51f29f:goto L51f29f;
case 0x51f2a5:c.instructions+=2;goto B51f2a5;
case 0x51f2a7:c.instructions+=1;goto B51f2a7;
case 0x51f2a9:goto L51f2a9;
case 0x51f2ad:c.instructions+=1;goto B51f2ad;
case 0x51f2af:goto L51f2af;
case 0x51f2b6:goto L51f2b6;
case 0x51f2ba:c.instructions+=1;goto B51f2ba;
case 0x51f2bc:goto L51f2bc;
case 0x51f2bf:c.instructions+=3;goto B51f2bf;
case 0x51f2c2:c.instructions+=2;goto B51f2c2;
case 0x51f2c4:c.instructions+=1;goto B51f2c4;
case 0x51f2c6:goto L51f2c6;
case 0x51f2c8:goto L51f2c8;
case 0x51f2c9:c.instructions+=1;goto B51f2c9;
case 0x51f2ce:goto L51f2ce;
case 0x51f2d1:c.instructions+=3;goto B51f2d1;
case 0x51f2d4:c.instructions+=2;goto B51f2d4;
case 0x51f2d5:c.instructions+=1;goto B51f2d5;
case 0x51f2d7:goto L51f2d7;
case 0x51f2d8:c.instructions+=1;goto B51f2d8;
case 0x51f2d9:goto L51f2d9;
case 0x51f2da:c.instructions+=2;goto B51f2da;
case 0x51f2db:c.instructions+=1;goto B51f2db;
case 0x51f2e0:goto L51f2e0;
case 0x51f2e4:c.instructions+=2;goto B51f2e4;
case 0x51f2e6:c.instructions+=1;goto B51f2e6;
case 0x51f2e8:goto L51f2e8;
case 0x51f2eb:c.instructions+=1;goto B51f2eb;
case 0x51f2ed:goto L51f2ed;
case 0x51f2ef:goto L51f2ef;
case 0x51f2f0:c.instructions+=13;goto B51f2f0;
case 0x51f2f3:c.instructions+=12;goto B51f2f3;
case 0x51f2f5:c.instructions+=11;goto B51f2f5;
case 0x51f2f8:c.instructions+=10;goto B51f2f8;
case 0x51f2fb:c.instructions+=9;goto B51f2fb;
case 0x51f2fe:c.instructions+=8;goto B51f2fe;
case 0x51f300:c.instructions+=7;goto B51f300;
case 0x51f303:c.instructions+=6;goto B51f303;
case 0x51f306:c.instructions+=5;goto B51f306;
case 0x51f307:c.instructions+=4;goto B51f307;
case 0x51f309:c.instructions+=3;goto B51f309;
case 0x51f30c:c.instructions+=2;goto B51f30c;
case 0x51f30d:c.instructions+=1;goto B51f30d;
case 0x51f30f:goto L51f30f;
case 0x51f311:c.instructions+=2;goto B51f311;
case 0x51f313:c.instructions+=1;goto B51f313;
case 0x51f315:goto L51f315;
case 0x51f318:c.instructions+=1;goto B51f318;
case 0x51f31a:goto L51f31a;
case 0x51f31c:goto L51f31c;
case 0x51f31f:c.instructions+=1;goto B51f31f;
case 0x51f326:goto L51f326;
case 0x51f329:c.instructions+=2;goto B51f329;
case 0x51f32b:c.instructions+=1;goto B51f32b;
case 0x51f32d:goto L51f32d;
case 0x51f32f:c.instructions+=2;goto B51f32f;
case 0x51f331:c.instructions+=1;goto B51f331;
case 0x51f333:goto L51f333;
case 0x51f336:c.instructions+=2;goto B51f336;
case 0x51f339:c.instructions+=1;goto B51f339;
case 0x51f33c:goto L51f33c;
case 0x51f33e:c.instructions+=1;goto B51f33e;
case 0x51f341:goto L51f341;
case 0x51f350:goto L51f350;
case 0x51f353:c.instructions+=6;goto B51f353;
case 0x51f354:c.instructions+=5;goto B51f354;
case 0x51f355:c.instructions+=4;goto B51f355;
case 0x51f356:c.instructions+=3;goto B51f356;
case 0x51f359:c.instructions+=2;goto B51f359;
case 0x51f35b:c.instructions+=1;goto B51f35b;
case 0x51f35d:goto L51f35d;
case 0x51f35f:c.instructions+=1;goto B51f35f;
case 0x51f361:goto L51f361;
case 0x51f364:c.instructions+=1;goto B51f364;
case 0x51f366:goto L51f366;
case 0x51f368:goto L51f368;
case 0x51f36c:c.instructions+=1;goto B51f36c;
case 0x51f370:goto L51f370;
case 0x51f372:c.instructions+=1;goto B51f372;
case 0x51f374:goto L51f374;
case 0x51f377:c.instructions+=1;goto B51f377;
case 0x51f379:goto L51f379;
case 0x51f37b:goto L51f37b;
case 0x51f37d:c.instructions+=1;goto B51f37d;
case 0x51f37f:goto L51f37f;
case 0x51f380:c.instructions+=2;goto B51f380;
case 0x51f382:c.instructions+=1;goto B51f382;
case 0x51f387:goto L51f387;
case 0x51f389:c.instructions+=1;goto B51f389;
case 0x51f38b:goto L51f38b;
case 0x51f38e:c.instructions+=2;goto B51f38e;
case 0x51f390:c.instructions+=1;goto B51f390;
case 0x51f392:goto L51f392;
case 0x51f395:c.instructions+=1;goto B51f395;
case 0x51f397:goto L51f397;
case 0x51f399:c.instructions+=1;goto B51f399;
case 0x51f39b:goto L51f39b;
case 0x51f39c:c.instructions+=4;goto B51f39c;
case 0x51f39e:c.instructions+=3;goto B51f39e;
case 0x51f39f:c.instructions+=2;goto B51f39f;
case 0x51f3a0:c.instructions+=1;goto B51f3a0;
case 0x51f3a3:goto L51f3a3;
case 0x51f3a4:c.instructions+=4;goto B51f3a4;
case 0x51f3a5:c.instructions+=3;goto B51f3a5;
case 0x51f3a7:c.instructions+=2;goto B51f3a7;
case 0x51f3a8:c.instructions+=1;goto B51f3a8;
case 0x51f3b0:goto L51f3b0;
case 0x51f3b1:c.instructions+=7;goto B51f3b1;
case 0x51f3b4:c.instructions+=6;goto B51f3b4;
case 0x51f3b5:c.instructions+=5;goto B51f3b5;
case 0x51f3b8:c.instructions+=4;goto B51f3b8;
case 0x51f3bd:c.instructions+=3;goto B51f3bd;
case 0x51f3c4:c.instructions+=2;goto B51f3c4;
case 0x51f3cb:c.instructions+=1;goto B51f3cb;
case 0x51f3d2:goto L51f3d2;
case 0x51f3d4:c.instructions+=1;goto B51f3d4;
case 0x51f3d6:goto L51f3d6;
case 0x51f3d9:c.instructions+=1;goto B51f3d9;
case 0x51f3db:goto L51f3db;
case 0x51f3dd:c.instructions+=1;goto B51f3dd;
case 0x51f3e0:goto L51f3e0;
case 0x51f3e2:c.instructions+=1;goto B51f3e2;
case 0x51f3e4:goto L51f3e4;
case 0x51f3e7:c.instructions+=1;goto B51f3e7;
case 0x51f3e9:goto L51f3e9;
case 0x51f3eb:goto L51f3eb;
case 0x51f3ed:c.instructions+=1;goto B51f3ed;
case 0x51f3ef:goto L51f3ef;
case 0x51f3f2:c.instructions+=2;goto B51f3f2;
case 0x51f3f5:c.instructions+=1;goto B51f3f5;
case 0x51f3f7:goto L51f3f7;
case 0x51f3fa:c.instructions+=1;goto B51f3fa;
case 0x51f3fd:goto L51f3fd;
case 0x51f3ff:c.instructions+=1;goto B51f3ff;
case 0x51f401:goto L51f401;
case 0x51f404:c.instructions+=1;goto B51f404;
case 0x51f406:goto L51f406;
case 0x51f408:goto L51f408;
case 0x51f40a:c.instructions+=1;goto B51f40a;
case 0x51f40c:goto L51f40c;
case 0x51f40f:c.instructions+=1;goto B51f40f;
case 0x51f411:goto L51f411;
case 0x51f413:goto L51f413;
case 0x51f415:c.instructions+=1;goto B51f415;
case 0x51f417:goto L51f417;
case 0x51f41a:c.instructions+=3;goto B51f41a;
case 0x51f41e:c.instructions+=2;goto B51f41e;
case 0x51f420:c.instructions+=1;goto B51f420;
case 0x51f422:goto L51f422;
case 0x51f425:c.instructions+=1;goto B51f425;
case 0x51f427:goto L51f427;
case 0x51f42a:c.instructions+=2;goto B51f42a;
case 0x51f42d:c.instructions+=1;goto B51f42d;
case 0x51f42f:goto L51f42f;
case 0x51f432:c.instructions+=2;goto B51f432;
case 0x51f437:c.instructions+=1;goto B51f437;
case 0x51f439:goto L51f439;
case 0x51f43a:c.instructions+=2;goto B51f43a;
case 0x51f43b:c.instructions+=1;goto B51f43b;
case 0x51f440:goto L51f440;
case 0x51f441:c.instructions+=6;goto B51f441;
case 0x51f444:c.instructions+=5;goto B51f444;
case 0x51f446:c.instructions+=4;goto B51f446;
case 0x51f448:c.instructions+=3;goto B51f448;
case 0x51f449:c.instructions+=2;goto B51f449;
case 0x51f44e:c.instructions+=1;goto B51f44e;
case 0x51f450:goto L51f450;
case 0x51f453:c.instructions+=1;goto B51f453;
case 0x51f455:goto L51f455;
case 0x51f457:goto L51f457;
case 0x51f45b:c.instructions+=1;goto B51f45b;
case 0x51f460:goto L51f460;
case 0x51f462:c.instructions+=1;goto B51f462;
case 0x51f464:goto L51f464;
case 0x51f467:c.instructions+=1;goto B51f467;
case 0x51f469:goto L51f469;
case 0x51f46b:goto L51f46b;
case 0x51f46d:c.instructions+=1;goto B51f46d;
case 0x51f46f:goto L51f46f;
case 0x51f471:c.instructions+=1;goto B51f471;
case 0x51f473:goto L51f473;
case 0x51f476:c.instructions+=3;goto B51f476;
case 0x51f477:c.instructions+=2;goto B51f477;
case 0x51f479:c.instructions+=1;goto B51f479;
case 0x51f47b:goto L51f47b;
case 0x51f47e:c.instructions+=1;goto B51f47e;
case 0x51f480:goto L51f480;
case 0x51f482:c.instructions+=1;goto B51f482;
case 0x51f484:goto L51f484;
case 0x51f486:goto L51f486;
case 0x51f487:c.instructions+=2;goto B51f487;
case 0x51f488:c.instructions+=1;goto B51f488;
case 0x51f490:goto L51f490;
case 0x51f491:c.instructions+=6;goto B51f491;
case 0x51f494:c.instructions+=5;goto B51f494;
case 0x51f496:c.instructions+=4;goto B51f496;
case 0x51f498:c.instructions+=3;goto B51f498;
case 0x51f499:c.instructions+=2;goto B51f499;
case 0x51f49e:c.instructions+=1;goto B51f49e;
case 0x51f4a0:goto L51f4a0;
case 0x51f4a3:c.instructions+=1;goto B51f4a3;
case 0x51f4a5:goto L51f4a5;
case 0x51f4a7:goto L51f4a7;
case 0x51f4ab:c.instructions+=1;goto B51f4ab;
case 0x51f4b0:goto L51f4b0;
case 0x51f4b2:c.instructions+=1;goto B51f4b2;
case 0x51f4b4:goto L51f4b4;
case 0x51f4b7:c.instructions+=1;goto B51f4b7;
case 0x51f4b9:goto L51f4b9;
case 0x51f4bb:goto L51f4bb;
case 0x51f4bd:c.instructions+=1;goto B51f4bd;
case 0x51f4bf:goto L51f4bf;
case 0x51f4c1:c.instructions+=1;goto B51f4c1;
case 0x51f4c3:goto L51f4c3;
case 0x51f4c6:c.instructions+=3;goto B51f4c6;
case 0x51f4c7:c.instructions+=2;goto B51f4c7;
case 0x51f4c9:c.instructions+=1;goto B51f4c9;
case 0x51f4cb:goto L51f4cb;
case 0x51f4ce:c.instructions+=1;goto B51f4ce;
case 0x51f4d0:goto L51f4d0;
case 0x51f4d2:c.instructions+=1;goto B51f4d2;
case 0x51f4d4:goto L51f4d4;
case 0x51f4d6:goto L51f4d6;
case 0x51f4d7:c.instructions+=2;goto B51f4d7;
case 0x51f4d8:c.instructions+=1;goto B51f4d8;
case 0x51f4e0:goto L51f4e0;
case 0x51f4e1:c.instructions+=6;goto B51f4e1;
case 0x51f4e2:c.instructions+=5;goto B51f4e2;
case 0x51f4e4:c.instructions+=4;goto B51f4e4;
case 0x51f4e7:c.instructions+=3;goto B51f4e7;
case 0x51f4ea:c.instructions+=2;goto B51f4ea;
case 0x51f4ec:c.instructions+=1;goto B51f4ec;
case 0x51f4ee:goto L51f4ee;
case 0x51f4f0:goto L51f4f0;
case 0x51f4f2:c.instructions+=7;goto B51f4f2;
case 0x51f4f4:c.instructions+=6;goto B51f4f4;
case 0x51f4f7:c.instructions+=5;goto B51f4f7;
case 0x51f4f9:c.instructions+=4;goto B51f4f9;
case 0x51f4fc:c.instructions+=3;goto B51f4fc;
case 0x51f4ff:c.instructions+=2;goto B51f4ff;
case 0x51f501:c.instructions+=1;goto B51f501;
case 0x51f503:goto L51f503;
case 0x51f505:c.instructions+=2;goto B51f505;
case 0x51f507:c.instructions+=1;goto B51f507;
case 0x51f509:goto L51f509;
case 0x51f50b:c.instructions+=1;goto B51f50b;
case 0x51f50d:goto L51f50d;
case 0x51f514:c.instructions+=5;goto B51f514;
case 0x51f51b:c.instructions+=4;goto B51f51b;
case 0x51f522:c.instructions+=3;goto B51f522;
case 0x51f523:c.instructions+=2;goto B51f523;
case 0x51f524:c.instructions+=1;goto B51f524;
case 0x51f530:goto L51f530;
case 0x51f533:c.instructions+=3;goto B51f533;
case 0x51f536:c.instructions+=2;goto B51f536;
case 0x51f538:c.instructions+=1;goto B51f538;
case 0x51f53a:goto L51f53a;
case 0x51f53d:c.instructions+=2;goto B51f53d;
case 0x51f53f:c.instructions+=1;goto B51f53f;
case 0x51f541:goto L51f541;
case 0x51f544:c.instructions+=2;goto B51f544;
case 0x51f546:c.instructions+=1;goto B51f546;
case 0x51f548:goto L51f548;
case 0x51f54b:c.instructions+=2;goto B51f54b;
case 0x51f54e:c.instructions+=1;goto B51f54e;
case 0x51f54f:goto L51f54f;
case 0x51f551:c.instructions+=2;goto B51f551;
case 0x51f556:c.instructions+=1;goto B51f556;
case 0x51f557:goto L51f557;
case 0x51f559:c.instructions+=1;goto B51f559;
case 0x51f560:goto L51f560;
case 0x51f563:c.instructions+=3;goto B51f563;
case 0x51f566:c.instructions+=2;goto B51f566;
case 0x51f568:c.instructions+=1;goto B51f568;
case 0x51f56e:goto L51f56e;
case 0x51f571:c.instructions+=4;goto B51f571;
case 0x51f573:c.instructions+=3;goto B51f573;
case 0x51f574:c.instructions+=2;goto B51f574;
case 0x51f577:c.instructions+=1;goto B51f577;
case 0x51f579:goto L51f579;
case 0x51f57c:c.instructions+=1;goto B51f57c;
case 0x51f57e:goto L51f57e;
case 0x51f580:goto L51f580;
case 0x51f583:c.instructions+=7;goto B51f583;
case 0x51f586:c.instructions+=6;goto B51f586;
case 0x51f58a:c.instructions+=5;goto B51f58a;
case 0x51f590:c.instructions+=4;goto B51f590;
case 0x51f594:c.instructions+=3;goto B51f594;
case 0x51f598:c.instructions+=2;goto B51f598;
case 0x51f59e:c.instructions+=1;goto B51f59e;
case 0x51f5a0:goto L51f5a0;
case 0x51f5a2:c.instructions+=1;goto B51f5a2;
case 0x51f5a4:goto L51f5a4;
case 0x51f5a7:c.instructions+=1;goto B51f5a7;
case 0x51f5a9:goto L51f5a9;
case 0x51f5ab:goto L51f5ab;
case 0x51f5ad:c.instructions+=1;goto B51f5ad;
case 0x51f5af:goto L51f5af;
case 0x51f5b2:c.instructions+=9;goto B51f5b2;
case 0x51f5b5:c.instructions+=8;goto B51f5b5;
case 0x51f5b8:c.instructions+=7;goto B51f5b8;
case 0x51f5bc:c.instructions+=6;goto B51f5bc;
case 0x51f5bf:c.instructions+=5;goto B51f5bf;
case 0x51f5c3:c.instructions+=4;goto B51f5c3;
case 0x51f5c5:c.instructions+=3;goto B51f5c5;
case 0x51f5c7:c.instructions+=2;goto B51f5c7;
case 0x51f5ca:c.instructions+=1;goto B51f5ca;
case 0x51f5cc:goto L51f5cc;
case 0x51f5ce:c.instructions+=1;goto B51f5ce;
case 0x51f5d2:goto L51f5d2;
case 0x51f5d4:c.instructions+=5;goto B51f5d4;
case 0x51f5d8:c.instructions+=4;goto B51f5d8;
case 0x51f5da:c.instructions+=3;goto B51f5da;
case 0x51f5dc:c.instructions+=2;goto B51f5dc;
case 0x51f5df:c.instructions+=1;goto B51f5df;
case 0x51f5e1:goto L51f5e1;
case 0x51f5e5:c.instructions+=1;goto B51f5e5;
case 0x51f5e7:goto L51f5e7;
case 0x51f5e9:goto L51f5e9;
case 0x51f5ed:c.instructions+=4;goto B51f5ed;
case 0x51f5ef:c.instructions+=3;goto B51f5ef;
case 0x51f5f1:c.instructions+=2;goto B51f5f1;
case 0x51f5f4:c.instructions+=1;goto B51f5f4;
case 0x51f5f6:goto L51f5f6;
case 0x51f5fa:goto L51f5fa;
case 0x51f5fe:c.instructions+=7;goto B51f5fe;
case 0x51f600:c.instructions+=6;goto B51f600;
case 0x51f604:c.instructions+=5;goto B51f604;
case 0x51f606:c.instructions+=4;goto B51f606;
case 0x51f60a:c.instructions+=3;goto B51f60a;
case 0x51f60c:c.instructions+=2;goto B51f60c;
case 0x51f60f:c.instructions+=1;goto B51f60f;
case 0x51f611:goto L51f611;
case 0x51f613:c.instructions+=1;goto B51f613;
case 0x51f617:goto L51f617;
case 0x51f61a:c.instructions+=2;goto B51f61a;
case 0x51f61c:c.instructions+=1;goto B51f61c;
case 0x51f61e:goto L51f61e;
case 0x51f621:c.instructions+=1;goto B51f621;
case 0x51f626:goto L51f626;
case 0x51f628:c.instructions+=1;goto B51f628;
case 0x51f62d:goto L51f62d;
case 0x51f631:c.instructions+=11;goto B51f631;
case 0x51f635:c.instructions+=10;goto B51f635;
case 0x51f639:c.instructions+=9;goto B51f639;
case 0x51f63f:c.instructions+=8;goto B51f63f;
case 0x51f641:c.instructions+=7;goto B51f641;
case 0x51f647:c.instructions+=6;goto B51f647;
case 0x51f64d:c.instructions+=5;goto B51f64d;
case 0x51f651:c.instructions+=4;goto B51f651;
case 0x51f652:c.instructions+=3;goto B51f652;
case 0x51f656:c.instructions+=2;goto B51f656;
case 0x51f658:c.instructions+=1;goto B51f658;
case 0x51f65e:goto L51f65e;
case 0x51f661:c.instructions+=1;goto B51f661;
case 0x51f670:goto L51f670;
case 0x51f674:c.instructions+=23;goto B51f674;
case 0x51f676:c.instructions+=22;goto B51f676;
case 0x51f67a:c.instructions+=21;goto B51f67a;
case 0x51f67d:c.instructions+=20;goto B51f67d;
case 0x51f681:c.instructions+=19;goto B51f681;
case 0x51f684:c.instructions+=18;goto B51f684;
case 0x51f686:c.instructions+=17;goto B51f686;
case 0x51f689:c.instructions+=16;goto B51f689;
case 0x51f68e:c.instructions+=15;goto B51f68e;
case 0x51f691:c.instructions+=14;goto B51f691;
case 0x51f694:c.instructions+=13;goto B51f694;
case 0x51f697:c.instructions+=12;goto B51f697;
case 0x51f69a:c.instructions+=11;goto B51f69a;
case 0x51f69e:c.instructions+=10;goto B51f69e;
case 0x51f6a1:c.instructions+=9;goto B51f6a1;
case 0x51f6a4:c.instructions+=8;goto B51f6a4;
case 0x51f6aa:c.instructions+=7;goto B51f6aa;
case 0x51f6ad:c.instructions+=6;goto B51f6ad;
case 0x51f6b0:c.instructions+=5;goto B51f6b0;
case 0x51f6b3:c.instructions+=4;goto B51f6b3;
case 0x51f6b6:c.instructions+=3;goto B51f6b6;
case 0x51f6ba:c.instructions+=2;goto B51f6ba;
case 0x51f6bd:c.instructions+=1;goto B51f6bd;
case 0x51f6c0:goto L51f6c0;
case 0x51f6c3:c.instructions+=5;goto B51f6c3;
case 0x51f6c5:c.instructions+=4;goto B51f6c5;
case 0x51f6c6:c.instructions+=3;goto B51f6c6;
case 0x51f6c7:c.instructions+=2;goto B51f6c7;
case 0x51f6ca:c.instructions+=1;goto B51f6ca;
case 0x51f6cc:goto L51f6cc;
case 0x51f6cf:c.instructions+=1;goto B51f6cf;
case 0x51f6d1:goto L51f6d1;
case 0x51f6d3:goto L51f6d3;
case 0x51f6d5:c.instructions+=1;goto B51f6d5;
case 0x51f6d7:goto L51f6d7;
case 0x51f6da:c.instructions+=1;goto B51f6da;
case 0x51f6dc:goto L51f6dc;
case 0x51f6de:goto L51f6de;
case 0x51f6e0:c.instructions+=1;goto B51f6e0;
case 0x51f6e2:goto L51f6e2;
case 0x51f6e5:c.instructions+=4;goto B51f6e5;
case 0x51f6e8:c.instructions+=3;goto B51f6e8;
case 0x51f6ea:c.instructions+=2;goto B51f6ea;
case 0x51f6ed:c.instructions+=1;goto B51f6ed;
case 0x51f6ef:goto L51f6ef;
case 0x51f6f2:c.instructions+=3;goto B51f6f2;
case 0x51f6f3:c.instructions+=2;goto B51f6f3;
case 0x51f6f6:c.instructions+=1;goto B51f6f6;
case 0x51f6f8:goto L51f6f8;
case 0x51f6fb:c.instructions+=1;goto B51f6fb;
case 0x51f6fd:goto L51f6fd;
case 0x51f700:c.instructions+=1;goto B51f700;
case 0x51f702:goto L51f702;
case 0x51f705:c.instructions+=2;goto B51f705;
case 0x51f707:c.instructions+=1;goto B51f707;
case 0x51f70a:goto L51f70a;
case 0x51f70d:c.instructions+=5;goto B51f70d;
case 0x51f710:c.instructions+=4;goto B51f710;
case 0x51f713:c.instructions+=3;goto B51f713;
case 0x51f719:c.instructions+=2;goto B51f719;
case 0x51f71c:c.instructions+=1;goto B51f71c;
case 0x51f71e:goto L51f71e;
case 0x51f720:c.instructions+=1;goto B51f720;
case 0x51f722:goto L51f722;
case 0x51f725:c.instructions+=4;goto B51f725;
case 0x51f728:c.instructions+=3;goto B51f728;
case 0x51f729:c.instructions+=2;goto B51f729;
case 0x51f72a:c.instructions+=1;goto B51f72a;
case 0x51f72f:goto L51f72f;
case 0x51f732:c.instructions+=3;goto B51f732;
case 0x51f735:c.instructions+=2;goto B51f735;
case 0x51f737:c.instructions+=1;goto B51f737;
case 0x51f739:goto L51f739;
case 0x51f73c:c.instructions+=1;goto B51f73c;
case 0x51f73e:goto L51f73e;
case 0x51f73f:c.instructions+=2;goto B51f73f;
case 0x51f740:c.instructions+=1;goto B51f740;
case 0x51f750:goto L51f750;
case 0x51f753:c.instructions+=5;goto B51f753;
case 0x51f755:c.instructions+=4;goto B51f755;
case 0x51f756:c.instructions+=3;goto B51f756;
case 0x51f757:c.instructions+=2;goto B51f757;
case 0x51f75a:c.instructions+=1;goto B51f75a;
case 0x51f75c:goto L51f75c;
case 0x51f75f:c.instructions+=1;goto B51f75f;
case 0x51f761:goto L51f761;
case 0x51f763:goto L51f763;
case 0x51f765:c.instructions+=1;goto B51f765;
case 0x51f767:goto L51f767;
case 0x51f76a:c.instructions+=1;goto B51f76a;
case 0x51f76c:goto L51f76c;
case 0x51f76e:goto L51f76e;
case 0x51f770:c.instructions+=1;goto B51f770;
case 0x51f772:goto L51f772;
case 0x51f775:c.instructions+=4;goto B51f775;
case 0x51f777:c.instructions+=3;goto B51f777;
case 0x51f77c:c.instructions+=2;goto B51f77c;
case 0x51f77d:c.instructions+=1;goto B51f77d;
case 0x51f782:goto L51f782;
case 0x51f785:c.instructions+=3;goto B51f785;
case 0x51f788:c.instructions+=2;goto B51f788;
case 0x51f78a:c.instructions+=1;goto B51f78a;
case 0x51f78c:goto L51f78c;
case 0x51f78f:c.instructions+=1;goto B51f78f;
case 0x51f791:goto L51f791;
case 0x51f792:c.instructions+=2;goto B51f792;
case 0x51f793:c.instructions+=1;goto B51f793;
case 0x51f7a0:goto L51f7a0;
case 0x51f7a3:c.instructions+=3;goto B51f7a3;
case 0x51f7a5:c.instructions+=2;goto B51f7a5;
case 0x51f7a8:c.instructions+=1;goto B51f7a8;
case 0x51f7aa:goto L51f7aa;
case 0x51f7ad:c.instructions+=1;goto B51f7ad;
case 0x51f7af:goto L51f7af;
case 0x51f7b1:goto L51f7b1;
case 0x51f7b2:c.instructions+=1;goto B51f7b2;
case 0x51f7b6:goto L51f7b6;
case 0x51f7b8:c.instructions+=1;goto B51f7b8;
case 0x51f7ba:goto L51f7ba;
case 0x51f7bd:c.instructions+=1;goto B51f7bd;
case 0x51f7bf:goto L51f7bf;
case 0x51f7c1:goto L51f7c1;
case 0x51f7c3:c.instructions+=1;goto B51f7c3;
case 0x51f7c5:goto L51f7c5;
case 0x51f7c8:c.instructions+=1;goto B51f7c8;
case 0x51f7ca:goto L51f7ca;
case 0x51f7cd:c.instructions+=2;goto B51f7cd;
case 0x51f7cf:c.instructions+=1;goto B51f7cf;
case 0x51f7d1:goto L51f7d1;
case 0x51f7d4:c.instructions+=1;goto B51f7d4;
case 0x51f7d6:goto L51f7d6;
case 0x51f7d8:c.instructions+=1;goto B51f7d8;
case 0x51f7da:goto L51f7da;
case 0x51f7dc:goto L51f7dc;
case 0x51f7dd:c.instructions+=1;goto B51f7dd;
case 0x51f7e0:goto L51f7e0;
case 0x51f7e3:c.instructions+=4;goto B51f7e3;
case 0x51f7e4:c.instructions+=3;goto B51f7e4;
case 0x51f7e5:c.instructions+=2;goto B51f7e5;
case 0x51f7e8:c.instructions+=1;goto B51f7e8;
case 0x51f7ed:goto L51f7ed;
case 0x51f7ef:c.instructions+=1;goto B51f7ef;
case 0x51f7f1:goto L51f7f1;
case 0x51f7f4:c.instructions+=1;goto B51f7f4;
case 0x51f7f6:goto L51f7f6;
case 0x51f7f8:goto L51f7f8;
case 0x51f7fa:c.instructions+=1;goto B51f7fa;
case 0x51f7fc:goto L51f7fc;
case 0x51f7ff:c.instructions+=1;goto B51f7ff;
case 0x51f801:goto L51f801;
case 0x51f803:goto L51f803;
case 0x51f805:c.instructions+=1;goto B51f805;
case 0x51f807:goto L51f807;
case 0x51f80a:c.instructions+=1;goto B51f80a;
case 0x51f80c:goto L51f80c;
case 0x51f80f:c.instructions+=2;goto B51f80f;
case 0x51f810:c.instructions+=1;goto B51f810;
case 0x51f812:goto L51f812;
case 0x51f814:goto L51f814;
case 0x51f815:c.instructions+=2;goto B51f815;
case 0x51f816:c.instructions+=1;goto B51f816;
case 0x51f820:goto L51f820;
case 0x51f821:c.instructions+=3;goto B51f821;
case 0x51f825:c.instructions+=2;goto B51f825;
case 0x51f827:c.instructions+=1;goto B51f827;
case 0x51f829:goto L51f829;
case 0x51f82c:c.instructions+=2;goto B51f82c;
case 0x51f82d:c.instructions+=1;goto B51f82d;
case 0x51f830:goto L51f830;
case 0x51f831:c.instructions+=3;goto B51f831;
case 0x51f834:c.instructions+=2;goto B51f834;
case 0x51f836:c.instructions+=1;goto B51f836;
case 0x51f83b:goto L51f83b;
case 0x51f83d:c.instructions+=1;goto B51f83d;
case 0x51f83f:goto L51f83f;
case 0x51f842:c.instructions+=1;goto B51f842;
case 0x51f844:goto L51f844;
case 0x51f846:goto L51f846;
case 0x51f848:c.instructions+=1;goto B51f848;
case 0x51f84a:goto L51f84a;
case 0x51f84d:c.instructions+=1;goto B51f84d;
case 0x51f84f:goto L51f84f;
case 0x51f851:goto L51f851;
case 0x51f853:c.instructions+=1;goto B51f853;
case 0x51f855:goto L51f855;
case 0x51f857:c.instructions+=1;goto B51f857;
case 0x51f859:goto L51f859;
case 0x51f85c:c.instructions+=2;goto B51f85c;
case 0x51f85d:c.instructions+=1;goto B51f85d;
case 0x51f85f:goto L51f85f;
case 0x51f862:goto L51f862;
case 0x51f863:c.instructions+=2;goto B51f863;
case 0x51f864:c.instructions+=1;goto B51f864;
case 0x51f870:goto L51f870;
case 0x51f873:c.instructions+=8;goto B51f873;
case 0x51f874:c.instructions+=7;goto B51f874;
case 0x51f875:c.instructions+=6;goto B51f875;
case 0x51f876:c.instructions+=5;goto B51f876;
case 0x51f878:c.instructions+=4;goto B51f878;
case 0x51f87b:c.instructions+=3;goto B51f87b;
case 0x51f87d:c.instructions+=2;goto B51f87d;
case 0x51f87f:c.instructions+=1;goto B51f87f;
case 0x51f884:goto L51f884;
case 0x51f888:c.instructions+=5;goto B51f888;
case 0x51f88c:c.instructions+=4;goto B51f88c;
case 0x51f88e:c.instructions+=3;goto B51f88e;
case 0x51f890:c.instructions+=2;goto B51f890;
case 0x51f894:c.instructions+=1;goto B51f894;
case 0x51f896:goto L51f896;
case 0x51f899:c.instructions+=1;goto B51f899;
case 0x51f89b:goto L51f89b;
case 0x51f89d:goto L51f89d;
case 0x51f89f:c.instructions+=5;goto B51f89f;
case 0x51f8a2:c.instructions+=4;goto B51f8a2;
case 0x51f8a5:c.instructions+=3;goto B51f8a5;
case 0x51f8a8:c.instructions+=2;goto B51f8a8;
case 0x51f8ac:c.instructions+=1;goto B51f8ac;
case 0x51f8ae:goto L51f8ae;
case 0x51f8b1:c.instructions+=1;goto B51f8b1;
case 0x51f8b3:goto L51f8b3;
case 0x51f8b5:goto L51f8b5;
case 0x51f8b8:c.instructions+=12;goto B51f8b8;
case 0x51f8bb:c.instructions+=11;goto B51f8bb;
case 0x51f8be:c.instructions+=10;goto B51f8be;
case 0x51f8c2:c.instructions+=9;goto B51f8c2;
case 0x51f8c3:c.instructions+=8;goto B51f8c3;
case 0x51f8c7:c.instructions+=7;goto B51f8c7;
case 0x51f8cb:c.instructions+=6;goto B51f8cb;
case 0x51f8ce:c.instructions+=5;goto B51f8ce;
case 0x51f8cf:c.instructions+=4;goto B51f8cf;
case 0x51f8d0:c.instructions+=3;goto B51f8d0;
case 0x51f8d8:c.instructions+=2;goto B51f8d8;
case 0x51f8e0:c.instructions+=1;goto B51f8e0;
case 0x51f8e5:goto L51f8e5;
case 0x51f8e9:c.instructions+=20;goto B51f8e9;
case 0x51f8ef:c.instructions+=19;goto B51f8ef;
case 0x51f8f1:c.instructions+=18;goto B51f8f1;
case 0x51f8f4:c.instructions+=17;goto B51f8f4;
case 0x51f8f6:c.instructions+=16;goto B51f8f6;
case 0x51f8f9:c.instructions+=15;goto B51f8f9;
case 0x51f8fd:c.instructions+=14;goto B51f8fd;
case 0x51f901:c.instructions+=13;goto B51f901;
case 0x51f903:c.instructions+=12;goto B51f903;
case 0x51f909:c.instructions+=11;goto B51f909;
case 0x51f90d:c.instructions+=10;goto B51f90d;
case 0x51f911:c.instructions+=9;goto B51f911;
case 0x51f915:c.instructions+=8;goto B51f915;
case 0x51f919:c.instructions+=7;goto B51f919;
case 0x51f921:c.instructions+=6;goto B51f921;
case 0x51f923:c.instructions+=5;goto B51f923;
case 0x51f929:c.instructions+=4;goto B51f929;
case 0x51f92d:c.instructions+=3;goto B51f92d;
case 0x51f931:c.instructions+=2;goto B51f931;
case 0x51f933:c.instructions+=1;goto B51f933;
case 0x51f935:goto L51f935;
case 0x51f938:c.instructions+=1;goto B51f938;
case 0x51f93a:goto L51f93a;
case 0x51f93c:c.instructions+=1;goto B51f93c;
case 0x51f940:goto L51f940;
case 0x51f942:c.instructions+=1;goto B51f942;
case 0x51f944:goto L51f944;
case 0x51f947:c.instructions+=1;goto B51f947;
case 0x51f949:goto L51f949;
case 0x51f94b:goto L51f94b;
case 0x51f94d:c.instructions+=1;goto B51f94d;
case 0x51f953:goto L51f953;
case 0x51f956:c.instructions+=4;goto B51f956;
case 0x51f95a:c.instructions+=3;goto B51f95a;
case 0x51f95d:c.instructions+=2;goto B51f95d;
case 0x51f95f:c.instructions+=1;goto B51f95f;
case 0x51f961:goto L51f961;
case 0x51f967:c.instructions+=10;goto B51f967;
case 0x51f96a:c.instructions+=9;goto B51f96a;
case 0x51f96e:c.instructions+=8;goto B51f96e;
case 0x51f972:c.instructions+=7;goto B51f972;
case 0x51f976:c.instructions+=6;goto B51f976;
case 0x51f979:c.instructions+=5;goto B51f979;
case 0x51f97d:c.instructions+=4;goto B51f97d;
case 0x51f981:c.instructions+=3;goto B51f981;
case 0x51f984:c.instructions+=2;goto B51f984;
case 0x51f985:c.instructions+=1;goto B51f985;
case 0x51f987:goto L51f987;
case 0x51f98a:c.instructions+=9;goto B51f98a;
case 0x51f98d:c.instructions+=8;goto B51f98d;
case 0x51f991:c.instructions+=7;goto B51f991;
case 0x51f995:c.instructions+=6;goto B51f995;
case 0x51f999:c.instructions+=5;goto B51f999;
case 0x51f99d:c.instructions+=4;goto B51f99d;
case 0x51f9a3:c.instructions+=3;goto B51f9a3;
case 0x51f9a7:c.instructions+=2;goto B51f9a7;
case 0x51f9aa:c.instructions+=1;goto B51f9aa;
case 0x51f9ab:goto L51f9ab;
case 0x51f9b0:goto L51f9b0;
case 0x51f9b4:c.instructions+=6;goto B51f9b4;
case 0x51f9ba:c.instructions+=5;goto B51f9ba;
case 0x51f9bd:c.instructions+=4;goto B51f9bd;
case 0x51f9c0:c.instructions+=3;goto B51f9c0;
case 0x51f9c2:c.instructions+=2;goto B51f9c2;
case 0x51f9c6:c.instructions+=1;goto B51f9c6;
case 0x51f9cc:goto L51f9cc;
case 0x51f9cf:c.instructions+=1;goto B51f9cf;
case 0x51f9d4:goto L51f9d4;
case 0x51f9d7:c.instructions+=4;goto B51f9d7;
case 0x51f9d9:c.instructions+=3;goto B51f9d9;
case 0x51f9da:c.instructions+=2;goto B51f9da;
case 0x51f9dc:c.instructions+=1;goto B51f9dc;
case 0x51f9df:goto L51f9df;
case 0x51f9e0:c.instructions+=4;goto B51f9e0;
case 0x51f9e1:c.instructions+=3;goto B51f9e1;
case 0x51f9e2:c.instructions+=2;goto B51f9e2;
case 0x51f9e5:c.instructions+=1;goto B51f9e5;
case 0x51f9f0:goto L51f9f0;
case 0x51f9f1:c.instructions+=8;goto B51f9f1;
case 0x51f9f5:c.instructions+=7;goto B51f9f5;
case 0x51f9f8:c.instructions+=6;goto B51f9f8;
case 0x51f9f9:c.instructions+=5;goto B51f9f9;
case 0x51f9fb:c.instructions+=4;goto B51f9fb;
case 0x51f9fc:c.instructions+=3;goto B51f9fc;
case 0x51f9ff:c.instructions+=2;goto B51f9ff;
case 0x51fa01:c.instructions+=1;goto B51fa01;
case 0x51fa03:goto L51fa03;
case 0x51fa06:c.instructions+=2;goto B51fa06;
case 0x51fa08:c.instructions+=1;goto B51fa08;
case 0x51fa0a:goto L51fa0a;
case 0x51fa0d:c.instructions+=1;goto B51fa0d;
case 0x51fa0f:goto L51fa0f;
case 0x51fa11:goto L51fa11;
case 0x51fa13:c.instructions+=1;goto B51fa13;
case 0x51fa15:goto L51fa15;
case 0x51fa18:c.instructions+=2;goto B51fa18;
case 0x51fa1a:c.instructions+=1;goto B51fa1a;
case 0x51fa1c:goto L51fa1c;
case 0x51fa1f:c.instructions+=1;goto B51fa1f;
case 0x51fa21:goto L51fa21;
case 0x51fa23:goto L51fa23;
case 0x51fa26:c.instructions+=2;goto B51fa26;
case 0x51fa28:c.instructions+=1;goto B51fa28;
case 0x51fa2a:goto L51fa2a;
case 0x51fa2d:c.instructions+=2;goto B51fa2d;
case 0x51fa2f:c.instructions+=1;goto B51fa2f;
case 0x51fa31:goto L51fa31;
case 0x51fa33:c.instructions+=1;goto B51fa33;
case 0x51fa35:goto L51fa35;
case 0x51fa38:c.instructions+=1;goto B51fa38;
case 0x51fa3a:goto L51fa3a;
case 0x51fa3c:goto L51fa3c;
case 0x51fa3e:c.instructions+=1;goto B51fa3e;
case 0x51fa40:goto L51fa40;
case 0x51fa42:goto L51fa42;
case 0x51fa45:c.instructions+=1;goto B51fa45;
case 0x51fa47:goto L51fa47;
case 0x51fa4a:c.instructions+=2;goto B51fa4a;
case 0x51fa4c:c.instructions+=1;goto B51fa4c;
case 0x51fa4e:goto L51fa4e;
case 0x51fa51:c.instructions+=1;goto B51fa51;
case 0x51fa53:goto L51fa53;
case 0x51fa55:goto L51fa55;
case 0x51fa57:c.instructions+=1;goto B51fa57;
case 0x51fa59:goto L51fa59;
case 0x51fa60:goto L51fa60;
case 0x51fa63:c.instructions+=2;goto B51fa63;
case 0x51fa65:c.instructions+=1;goto B51fa65;
case 0x51fa67:goto L51fa67;
case 0x51fa6a:c.instructions+=1;goto B51fa6a;
case 0x51fa6c:goto L51fa6c;
case 0x51fa6e:goto L51fa6e;
case 0x51fa71:c.instructions+=2;goto B51fa71;
case 0x51fa73:c.instructions+=1;goto B51fa73;
case 0x51fa75:goto L51fa75;
case 0x51fa78:c.instructions+=2;goto B51fa78;
case 0x51fa7a:c.instructions+=1;goto B51fa7a;
case 0x51fa7c:goto L51fa7c;
case 0x51fa7e:c.instructions+=1;goto B51fa7e;
case 0x51fa80:goto L51fa80;
case 0x51fa83:c.instructions+=1;goto B51fa83;
case 0x51fa85:goto L51fa85;
case 0x51fa87:goto L51fa87;
case 0x51fa89:c.instructions+=1;goto B51fa89;
case 0x51fa8b:goto L51fa8b;
case 0x51fa8e:c.instructions+=2;goto B51fa8e;
case 0x51fa90:c.instructions+=1;goto B51fa90;
case 0x51fa92:goto L51fa92;
case 0x51fa95:c.instructions+=2;goto B51fa95;
case 0x51fa97:c.instructions+=1;goto B51fa97;
case 0x51fa99:goto L51fa99;
case 0x51fa9b:c.instructions+=1;goto B51fa9b;
case 0x51fa9d:goto L51fa9d;
case 0x51fa9f:c.instructions+=3;goto B51fa9f;
case 0x51faa0:c.instructions+=2;goto B51faa0;
case 0x51faa2:c.instructions+=1;goto B51faa2;
case 0x51faa5:goto L51faa5;
case 0x51faa9:c.instructions+=1;goto B51faa9;
case 0x51faac:goto L51faac;
case 0x51faad:c.instructions+=3;goto B51faad;
case 0x51faae:c.instructions+=2;goto B51faae;
case 0x51faaf:c.instructions+=1;goto B51faaf;
case 0x51fac0:goto L51fac0;
case 0x51fac1:c.instructions+=8;goto B51fac1;
case 0x51fac5:c.instructions+=7;goto B51fac5;
case 0x51fac8:c.instructions+=6;goto B51fac8;
case 0x51fac9:c.instructions+=5;goto B51fac9;
case 0x51facb:c.instructions+=4;goto B51facb;
case 0x51facc:c.instructions+=3;goto B51facc;
case 0x51facf:c.instructions+=2;goto B51facf;
case 0x51fad1:c.instructions+=1;goto B51fad1;
case 0x51fad3:goto L51fad3;
case 0x51fad6:goto L51fad6;
case 0x51fad8:c.instructions+=1;goto B51fad8;
case 0x51fada:goto L51fada;
case 0x51fadd:c.instructions+=1;goto B51fadd;
case 0x51fadf:goto L51fadf;
case 0x51fae1:goto L51fae1;
case 0x51fae3:c.instructions+=1;goto B51fae3;
case 0x51fae5:goto L51fae5;
case 0x51fae8:c.instructions+=1;goto B51fae8;
case 0x51faea:goto L51faea;
case 0x51faed:goto L51faed;
case 0x51faef:c.instructions+=1;goto B51faef;
case 0x51faf1:goto L51faf1;
case 0x51faf4:c.instructions+=1;goto B51faf4;
case 0x51faf6:goto L51faf6;
case 0x51faf8:goto L51faf8;
case 0x51fafb:c.instructions+=2;goto B51fafb;
case 0x51fafd:c.instructions+=1;goto B51fafd;
case 0x51faff:goto L51faff;
case 0x51fb02:c.instructions+=2;goto B51fb02;
case 0x51fb04:c.instructions+=1;goto B51fb04;
case 0x51fb06:goto L51fb06;
case 0x51fb08:goto L51fb08;
case 0x51fb0b:c.instructions+=1;goto B51fb0b;
case 0x51fb0d:goto L51fb0d;
case 0x51fb10:goto L51fb10;
case 0x51fb12:c.instructions+=1;goto B51fb12;
case 0x51fb14:goto L51fb14;
case 0x51fb17:c.instructions+=1;goto B51fb17;
case 0x51fb19:goto L51fb19;
case 0x51fb1b:goto L51fb1b;
case 0x51fb1d:c.instructions+=1;goto B51fb1d;
case 0x51fb1f:goto L51fb1f;
case 0x51fb22:c.instructions+=1;goto B51fb22;
case 0x51fb24:goto L51fb24;
case 0x51fb27:goto L51fb27;
case 0x51fb29:c.instructions+=1;goto B51fb29;
case 0x51fb2b:goto L51fb2b;
case 0x51fb2e:c.instructions+=1;goto B51fb2e;
case 0x51fb30:goto L51fb30;
case 0x51fb32:goto L51fb32;
case 0x51fb35:c.instructions+=2;goto B51fb35;
case 0x51fb37:c.instructions+=1;goto B51fb37;
case 0x51fb39:goto L51fb39;
case 0x51fb3c:c.instructions+=2;goto B51fb3c;
case 0x51fb3e:c.instructions+=1;goto B51fb3e;
case 0x51fb40:goto L51fb40;
case 0x51fb43:c.instructions+=2;goto B51fb43;
case 0x51fb45:c.instructions+=1;goto B51fb45;
case 0x51fb47:goto L51fb47;
case 0x51fb4a:c.instructions+=2;goto B51fb4a;
case 0x51fb4c:c.instructions+=1;goto B51fb4c;
case 0x51fb4e:goto L51fb4e;
case 0x51fb50:c.instructions+=1;goto B51fb50;
case 0x51fb52:goto L51fb52;
case 0x51fb54:c.instructions+=3;goto B51fb54;
case 0x51fb55:c.instructions+=2;goto B51fb55;
case 0x51fb57:c.instructions+=1;goto B51fb57;
case 0x51fb5a:goto L51fb5a;
case 0x51fb5e:c.instructions+=1;goto B51fb5e;
case 0x51fb61:goto L51fb61;
case 0x51fb62:c.instructions+=3;goto B51fb62;
case 0x51fb63:c.instructions+=2;goto B51fb63;
case 0x51fb64:c.instructions+=1;goto B51fb64;
case 0x51fb70:goto L51fb70;
case 0x51fb71:c.instructions+=11;goto B51fb71;
case 0x51fb75:c.instructions+=10;goto B51fb75;
case 0x51fb76:c.instructions+=9;goto B51fb76;
case 0x51fb7a:c.instructions+=8;goto B51fb7a;
case 0x51fb7e:c.instructions+=7;goto B51fb7e;
case 0x51fb85:c.instructions+=6;goto B51fb85;
case 0x51fb8b:c.instructions+=5;goto B51fb8b;
case 0x51fb8e:c.instructions+=4;goto B51fb8e;
case 0x51fb90:c.instructions+=3;goto B51fb90;
case 0x51fb91:c.instructions+=2;goto B51fb91;
case 0x51fb92:c.instructions+=1;goto B51fb92;
case 0x51fb94:goto L51fb94;
case 0x51fb97:c.instructions+=1;goto B51fb97;
case 0x51fb99:goto L51fb99;
case 0x51fb9b:c.instructions+=1;goto B51fb9b;
case 0x51fba0:goto L51fba0;
case 0x51fba3:c.instructions+=2;goto B51fba3;
case 0x51fba5:c.instructions+=1;goto B51fba5;
case 0x51fba7:goto L51fba7;
case 0x51fbaa:c.instructions+=1;goto B51fbaa;
case 0x51fbac:goto L51fbac;
case 0x51fbae:goto L51fbae;
case 0x51fbb0:c.instructions+=1;goto B51fbb0;
case 0x51fbb6:goto L51fbb6;
case 0x51fbb9:c.instructions+=3;goto B51fbb9;
case 0x51fbbf:c.instructions+=2;goto B51fbbf;
case 0x51fbc1:c.instructions+=1;goto B51fbc1;
case 0x51fbc7:goto L51fbc7;
case 0x51fbc9:c.instructions+=14;goto B51fbc9;
case 0x51fbcc:c.instructions+=13;goto B51fbcc;
case 0x51fbcf:c.instructions+=12;goto B51fbcf;
case 0x51fbd3:c.instructions+=11;goto B51fbd3;
case 0x51fbd9:c.instructions+=10;goto B51fbd9;
case 0x51fbdf:c.instructions+=9;goto B51fbdf;
case 0x51fbe2:c.instructions+=8;goto B51fbe2;
case 0x51fbe5:c.instructions+=7;goto B51fbe5;
case 0x51fbe9:c.instructions+=6;goto B51fbe9;
case 0x51fbec:c.instructions+=5;goto B51fbec;
case 0x51fbf0:c.instructions+=4;goto B51fbf0;
case 0x51fbf6:c.instructions+=3;goto B51fbf6;
case 0x51fbf8:c.instructions+=2;goto B51fbf8;
case 0x51fbfb:c.instructions+=1;goto B51fbfb;
case 0x51fbfd:goto L51fbfd;
case 0x51fc00:c.instructions+=3;goto B51fc00;
case 0x51fc02:c.instructions+=2;goto B51fc02;
case 0x51fc05:c.instructions+=1;goto B51fc05;
case 0x51fc07:goto L51fc07;
case 0x51fc0b:c.instructions+=4;goto B51fc0b;
case 0x51fc11:c.instructions+=3;goto B51fc11;
case 0x51fc13:c.instructions+=2;goto B51fc13;
case 0x51fc16:c.instructions+=1;goto B51fc16;
case 0x51fc18:goto L51fc18;
case 0x51fc1b:c.instructions+=3;goto B51fc1b;
case 0x51fc1d:c.instructions+=2;goto B51fc1d;
case 0x51fc20:c.instructions+=1;goto B51fc20;
case 0x51fc22:goto L51fc22;
case 0x51fc25:c.instructions+=6;goto B51fc25;
case 0x51fc27:c.instructions+=5;goto B51fc27;
case 0x51fc29:c.instructions+=4;goto B51fc29;
case 0x51fc2c:c.instructions+=3;goto B51fc2c;
case 0x51fc2e:c.instructions+=2;goto B51fc2e;
case 0x51fc31:c.instructions+=1;goto B51fc31;
case 0x51fc33:goto L51fc33;
case 0x51fc36:c.instructions+=3;goto B51fc36;
case 0x51fc37:c.instructions+=2;goto B51fc37;
case 0x51fc3a:c.instructions+=1;goto B51fc3a;
case 0x51fc3c:goto L51fc3c;
case 0x51fc3f:c.instructions+=1;goto B51fc3f;
case 0x51fc41:goto L51fc41;
case 0x51fc44:c.instructions+=1;goto B51fc44;
case 0x51fc46:goto L51fc46;
case 0x51fc49:c.instructions+=2;goto B51fc49;
case 0x51fc4b:c.instructions+=1;goto B51fc4b;
case 0x51fc4e:goto L51fc4e;
case 0x51fc51:c.instructions+=6;goto B51fc51;
case 0x51fc54:c.instructions+=5;goto B51fc54;
case 0x51fc57:c.instructions+=4;goto B51fc57;
case 0x51fc5d:c.instructions+=3;goto B51fc5d;
case 0x51fc60:c.instructions+=2;goto B51fc60;
case 0x51fc64:c.instructions+=1;goto B51fc64;
case 0x51fc66:goto L51fc66;
case 0x51fc68:c.instructions+=3;goto B51fc68;
case 0x51fc6c:c.instructions+=2;goto B51fc6c;
case 0x51fc6e:c.instructions+=1;goto B51fc6e;
case 0x51fc70:goto L51fc70;
case 0x51fc73:c.instructions+=6;goto B51fc73;
case 0x51fc76:c.instructions+=5;goto B51fc76;
case 0x51fc78:c.instructions+=4;goto B51fc78;
case 0x51fc7b:c.instructions+=3;goto B51fc7b;
case 0x51fc7e:c.instructions+=2;goto B51fc7e;
case 0x51fc81:c.instructions+=1;goto B51fc81;
case 0x51fc83:goto L51fc83;
case 0x51fc86:c.instructions+=3;goto B51fc86;
case 0x51fc87:c.instructions+=2;goto B51fc87;
case 0x51fc8a:c.instructions+=1;goto B51fc8a;
case 0x51fc8c:goto L51fc8c;
case 0x51fc8f:c.instructions+=1;goto B51fc8f;
case 0x51fc91:goto L51fc91;
case 0x51fc94:c.instructions+=1;goto B51fc94;
case 0x51fc96:goto L51fc96;
case 0x51fc99:c.instructions+=2;goto B51fc99;
case 0x51fc9b:c.instructions+=1;goto B51fc9b;
case 0x51fc9e:goto L51fc9e;
case 0x51fca1:c.instructions+=5;goto B51fca1;
case 0x51fca4:c.instructions+=4;goto B51fca4;
case 0x51fca7:c.instructions+=3;goto B51fca7;
case 0x51fcad:c.instructions+=2;goto B51fcad;
case 0x51fcb0:c.instructions+=1;goto B51fcb0;
case 0x51fcb2:goto L51fcb2;
case 0x51fcb4:c.instructions+=1;goto B51fcb4;
case 0x51fcb6:goto L51fcb6;
case 0x51fcb9:c.instructions+=1;goto B51fcb9;
case 0x51fcbd:goto L51fcbd;
case 0x51fcbf:c.instructions+=9;goto B51fcbf;
case 0x51fcc2:c.instructions+=8;goto B51fcc2;
case 0x51fcc5:c.instructions+=7;goto B51fcc5;
case 0x51fcc8:c.instructions+=6;goto B51fcc8;
case 0x51fccb:c.instructions+=5;goto B51fccb;
case 0x51fccd:c.instructions+=4;goto B51fccd;
case 0x51fccf:c.instructions+=3;goto B51fccf;
case 0x51fcd2:c.instructions+=2;goto B51fcd2;
case 0x51fcd4:c.instructions+=1;goto B51fcd4;
case 0x51fcd6:goto L51fcd6;
case 0x51fcd9:c.instructions+=1;goto B51fcd9;
case 0x51fcdb:goto L51fcdb;
case 0x51fcdd:goto L51fcdd;
case 0x51fcdf:c.instructions+=1;goto B51fcdf;
case 0x51fce1:goto L51fce1;
case 0x51fce4:c.instructions+=5;goto B51fce4;
case 0x51fce7:c.instructions+=4;goto B51fce7;
case 0x51fcea:c.instructions+=3;goto B51fcea;
case 0x51fced:c.instructions+=2;goto B51fced;
case 0x51fcef:c.instructions+=1;goto B51fcef;
case 0x51fcf1:goto L51fcf1;
case 0x51fcf4:c.instructions+=2;goto B51fcf4;
case 0x51fcf6:c.instructions+=1;goto B51fcf6;
case 0x51fcfc:goto L51fcfc;
case 0x51fcff:c.instructions+=1;goto B51fcff;
case 0x51fd04:goto L51fd04;
case 0x51fd05:c.instructions+=4;goto B51fd05;
case 0x51fd06:c.instructions+=3;goto B51fd06;
case 0x51fd07:c.instructions+=2;goto B51fd07;
case 0x51fd08:c.instructions+=1;goto B51fd08;
case 0x51fd10:goto L51fd10;
case 0x51fd13:c.instructions+=6;goto B51fd13;
case 0x51fd15:c.instructions+=5;goto B51fd15;
case 0x51fd16:c.instructions+=4;goto B51fd16;
case 0x51fd17:c.instructions+=3;goto B51fd17;
case 0x51fd1a:c.instructions+=2;goto B51fd1a;
case 0x51fd21:c.instructions+=1;goto B51fd21;
case 0x51fd23:goto L51fd23;
case 0x51fd26:c.instructions+=1;goto B51fd26;
case 0x51fd28:goto L51fd28;
case 0x51fd2a:c.instructions+=1;goto B51fd2a;
case 0x51fd30:goto L51fd30;
case 0x51fd32:c.instructions+=1;goto B51fd32;
case 0x51fd34:goto L51fd34;
case 0x51fd37:c.instructions+=1;goto B51fd37;
case 0x51fd39:goto L51fd39;
case 0x51fd3b:goto L51fd3b;
case 0x51fd3d:c.instructions+=1;goto B51fd3d;
case 0x51fd3f:goto L51fd3f;
case 0x51fd42:c.instructions+=4;goto B51fd42;
case 0x51fd45:c.instructions+=3;goto B51fd45;
case 0x51fd46:c.instructions+=2;goto B51fd46;
case 0x51fd47:c.instructions+=1;goto B51fd47;
case 0x51fd4c:goto L51fd4c;
case 0x51fd4f:c.instructions+=3;goto B51fd4f;
case 0x51fd52:c.instructions+=2;goto B51fd52;
case 0x51fd54:c.instructions+=1;goto B51fd54;
case 0x51fd56:goto L51fd56;
case 0x51fd59:c.instructions+=1;goto B51fd59;
case 0x51fd5b:goto L51fd5b;
case 0x51fd5c:c.instructions+=2;goto B51fd5c;
case 0x51fd5d:c.instructions+=1;goto B51fd5d;
case 0x51fd60:goto L51fd60;
case 0x51fd61:c.instructions+=5;goto B51fd61;
case 0x51fd65:c.instructions+=4;goto B51fd65;
case 0x51fd67:c.instructions+=3;goto B51fd67;
case 0x51fd68:c.instructions+=2;goto B51fd68;
case 0x51fd6a:c.instructions+=1;goto B51fd6a;
case 0x51fd6c:goto L51fd6c;
case 0x51fd6d:c.instructions+=3;goto B51fd6d;
case 0x51fd70:c.instructions+=2;goto B51fd70;
case 0x51fd72:c.instructions+=1;goto B51fd72;
case 0x51fd74:goto L51fd74;
case 0x51fd77:c.instructions+=2;goto B51fd77;
case 0x51fd79:c.instructions+=1;goto B51fd79;
case 0x51fd7b:goto L51fd7b;
case 0x51fd7c:c.instructions+=2;goto B51fd7c;
case 0x51fd7d:c.instructions+=1;goto B51fd7d;
case 0x51fd82:goto L51fd82;
case 0x51fd84:c.instructions+=8;goto B51fd84;
case 0x51fd88:c.instructions+=7;goto B51fd88;
case 0x51fd8c:c.instructions+=6;goto B51fd8c;
case 0x51fd8f:c.instructions+=5;goto B51fd8f;
case 0x51fd92:c.instructions+=4;goto B51fd92;
case 0x51fd96:c.instructions+=3;goto B51fd96;
case 0x51fd9c:c.instructions+=2;goto B51fd9c;
case 0x51fd9e:c.instructions+=1;goto B51fd9e;
case 0x51fda0:goto L51fda0;
case 0x51fda3:c.instructions+=2;goto B51fda3;
case 0x51fda5:c.instructions+=1;goto B51fda5;
case 0x51fda7:goto L51fda7;
case 0x51fda9:c.instructions+=1;goto B51fda9;
case 0x51fdaf:goto L51fdaf;
case 0x51fdb3:c.instructions+=1;goto B51fdb3;
case 0x51fdb8:goto L51fdb8;
case 0x51fdbb:c.instructions+=4;goto B51fdbb;
case 0x51fdbd:c.instructions+=3;goto B51fdbd;
case 0x51fdbe:c.instructions+=2;goto B51fdbe;
case 0x51fdbf:c.instructions+=1;goto B51fdbf;
case 0x51fdc4:goto L51fdc4;
case 0x51fdc7:c.instructions+=1;goto B51fdc7;
case 0x51fdc8:goto L51fdc8;
case 0x51fdc9:goto L51fdc9;
case 0x51fdca:c.instructions+=2;goto B51fdca;
case 0x51fdcb:c.instructions+=1;goto B51fdcb;
case 0x51fdd0:goto L51fdd0;
case 0x51fdd4:c.instructions+=4;goto B51fdd4;
case 0x51fdd7:c.instructions+=3;goto B51fdd7;
case 0x51fdd8:c.instructions+=2;goto B51fdd8;
case 0x51fdda:c.instructions+=1;goto B51fdda;
case 0x51fddc:goto L51fddc;
case 0x51fddd:c.instructions+=5;goto B51fddd;
case 0x51fde0:c.instructions+=4;goto B51fde0;
case 0x51fde4:c.instructions+=3;goto B51fde4;
case 0x51fde9:c.instructions+=2;goto B51fde9;
case 0x51fdea:c.instructions+=1;goto B51fdea;
case 0x51fdef:goto L51fdef;
case 0x51fdf2:c.instructions+=6;goto B51fdf2;
case 0x51fdf5:c.instructions+=5;goto B51fdf5;
case 0x51fdf6:c.instructions+=4;goto B51fdf6;
case 0x51fdf8:c.instructions+=3;goto B51fdf8;
case 0x51fdfb:c.instructions+=2;goto B51fdfb;
case 0x51fdfe:c.instructions+=1;goto B51fdfe;
case 0x51fe00:goto L51fe00;
case 0x51fe07:goto L51fe07;
case 0x51fe0a:c.instructions+=5;goto B51fe0a;
case 0x51fe0e:c.instructions+=4;goto B51fe0e;
case 0x51fe10:c.instructions+=3;goto B51fe10;
case 0x51fe15:c.instructions+=2;goto B51fe15;
case 0x51fe16:c.instructions+=1;goto B51fe16;
case 0x51fe1b:goto L51fe1b;
case 0x51fe1e:c.instructions+=2;goto B51fe1e;
case 0x51fe1f:c.instructions+=1;goto B51fe1f;
case 0x51fe22:goto L51fe22;
case 0x51fe25:c.instructions+=1;goto B51fe25;
case 0x51fe27:goto L51fe27;
case 0x51fe2a:c.instructions+=5;goto B51fe2a;
case 0x51fe2e:c.instructions+=4;goto B51fe2e;
case 0x51fe30:c.instructions+=3;goto B51fe30;
case 0x51fe35:c.instructions+=2;goto B51fe35;
case 0x51fe36:c.instructions+=1;goto B51fe36;
case 0x51fe3b:goto L51fe3b;
case 0x51fe3e:c.instructions+=4;goto B51fe3e;
case 0x51fe41:c.instructions+=3;goto B51fe41;
case 0x51fe42:c.instructions+=2;goto B51fe42;
case 0x51fe45:c.instructions+=1;goto B51fe45;
case 0x51fe47:goto L51fe47;
case 0x51fe4e:goto L51fe4e;
case 0x51fe51:c.instructions+=5;goto B51fe51;
case 0x51fe55:c.instructions+=4;goto B51fe55;
case 0x51fe57:c.instructions+=3;goto B51fe57;
case 0x51fe5c:c.instructions+=2;goto B51fe5c;
case 0x51fe5d:c.instructions+=1;goto B51fe5d;
case 0x51fe62:goto L51fe62;
case 0x51fe65:goto L51fe65;
case 0x51fe66:c.instructions+=1;goto B51fe66;
case 0x51fe70:goto L51fe70;
case 0x51fe74:c.instructions+=2;goto B51fe74;
case 0x51fe76:c.instructions+=1;goto B51fe76;
case 0x51fe78:goto L51fe78;
case 0x51fe79:c.instructions+=3;goto B51fe79;
case 0x51fe7a:c.instructions+=2;goto B51fe7a;
case 0x51fe7d:c.instructions+=1;goto B51fe7d;
case 0x51fe82:goto L51fe82;
case 0x51fe84:c.instructions+=1;goto B51fe84;
case 0x51fe86:goto L51fe86;
case 0x51fe89:c.instructions+=1;goto B51fe89;
case 0x51fe8c:goto L51fe8c;
case 0x51fe8e:c.instructions+=1;goto B51fe8e;
case 0x51fea0:goto L51fea0;
case 0x51fea1:c.instructions+=10;goto B51fea1;
case 0x51fea3:c.instructions+=9;goto B51fea3;
case 0x51fea6:c.instructions+=8;goto B51fea6;
case 0x51fea9:c.instructions+=7;goto B51fea9;
case 0x51feac:c.instructions+=6;goto B51feac;
case 0x51feae:c.instructions+=5;goto B51feae;
case 0x51feaf:c.instructions+=4;goto B51feaf;
case 0x51feb0:c.instructions+=3;goto B51feb0;
case 0x51feb3:c.instructions+=2;goto B51feb3;
case 0x51feb4:c.instructions+=1;goto B51feb4;
case 0x51feb6:goto L51feb6;
case 0x51feb9:c.instructions+=1;goto B51feb9;
case 0x51febb:goto L51febb;
case 0x51febd:goto L51febd;
case 0x51fec0:c.instructions+=1;goto B51fec0;
case 0x51fec3:goto L51fec3;
case 0x51fec5:c.instructions+=1;goto B51fec5;
case 0x51fec7:goto L51fec7;
case 0x51feca:c.instructions+=1;goto B51feca;
case 0x51fecc:goto L51fecc;
case 0x51fece:goto L51fece;
case 0x51fed0:c.instructions+=1;goto B51fed0;
case 0x51fed2:goto L51fed2;
case 0x51fed5:c.instructions+=2;goto B51fed5;
case 0x51fed7:c.instructions+=1;goto B51fed7;
case 0x51fed9:goto L51fed9;
case 0x51fedc:c.instructions+=14;goto B51fedc;
case 0x51fedf:c.instructions+=13;goto B51fedf;
case 0x51fee3:c.instructions+=12;goto B51fee3;
case 0x51fee6:c.instructions+=11;goto B51fee6;
case 0x51feea:c.instructions+=10;goto B51feea;
case 0x51feed:c.instructions+=9;goto B51feed;
case 0x51fef1:c.instructions+=8;goto B51fef1;
case 0x51fef5:c.instructions+=7;goto B51fef5;
case 0x51fef6:c.instructions+=6;goto B51fef6;
case 0x51fefa:c.instructions+=5;goto B51fefa;
case 0x51fefe:c.instructions+=4;goto B51fefe;
case 0x51feff:c.instructions+=3;goto B51feff;
case 0x51ff00:c.instructions+=2;goto B51ff00;
case 0x51ff01:c.instructions+=1;goto B51ff01;
case 0x51ff06:goto L51ff06;
case 0x51ff09:c.instructions+=2;goto B51ff09;
case 0x51ff0b:c.instructions+=1;goto B51ff0b;
case 0x51ff0d:goto L51ff0d;
case 0x51ff10:c.instructions+=2;goto B51ff10;
case 0x51ff12:c.instructions+=1;goto B51ff12;
case 0x51ff14:goto L51ff14;
case 0x51ff17:c.instructions+=1;goto B51ff17;
case 0x51ff19:goto L51ff19;
case 0x51ff1b:c.instructions+=1;goto B51ff1b;
case 0x51ff1d:goto L51ff1d;
case 0x51ff1f:c.instructions+=6;goto B51ff1f;
case 0x51ff20:c.instructions+=5;goto B51ff20;
case 0x51ff21:c.instructions+=4;goto B51ff21;
case 0x51ff22:c.instructions+=3;goto B51ff22;
case 0x51ff24:c.instructions+=2;goto B51ff24;
case 0x51ff25:c.instructions+=1;goto B51ff25;
case 0x51ff28:goto L51ff28;
case 0x51ff29:c.instructions+=6;goto B51ff29;
case 0x51ff2a:c.instructions+=5;goto B51ff2a;
case 0x51ff2c:c.instructions+=4;goto B51ff2c;
case 0x51ff2d:c.instructions+=3;goto B51ff2d;
case 0x51ff2f:c.instructions+=2;goto B51ff2f;
case 0x51ff30:c.instructions+=1;goto B51ff30;
case 0x51ff40:goto L51ff40;
case 0x51ff43:c.instructions+=5;goto B51ff43;
case 0x51ff45:c.instructions+=4;goto B51ff45;
case 0x51ff46:c.instructions+=3;goto B51ff46;
case 0x51ff47:c.instructions+=2;goto B51ff47;
case 0x51ff4a:c.instructions+=1;goto B51ff4a;
case 0x51ff4c:goto L51ff4c;
case 0x51ff4f:c.instructions+=1;goto B51ff4f;
case 0x51ff51:goto L51ff51;
case 0x51ff53:goto L51ff53;
case 0x51ff55:c.instructions+=1;goto B51ff55;
case 0x51ff57:goto L51ff57;
case 0x51ff5a:c.instructions+=1;goto B51ff5a;
case 0x51ff5c:goto L51ff5c;
case 0x51ff5e:goto L51ff5e;
case 0x51ff60:c.instructions+=1;goto B51ff60;
case 0x51ff62:goto L51ff62;
case 0x51ff64:c.instructions+=2;goto B51ff64;
case 0x51ff66:c.instructions+=1;goto B51ff66;
case 0x51ff69:goto L51ff69;
case 0x51ff6c:c.instructions+=2;goto B51ff6c;
case 0x51ff6e:c.instructions+=1;goto B51ff6e;
case 0x51ff70:goto L51ff70;
case 0x51ff73:c.instructions+=1;goto B51ff73;
case 0x51ff75:goto L51ff75;
case 0x51ff76:c.instructions+=2;goto B51ff76;
case 0x51ff77:c.instructions+=1;goto B51ff77;
case 0x51ff80:goto L51ff80;
case 0x51ff81:c.instructions+=11;goto B51ff81;
case 0x51ff82:c.instructions+=10;goto B51ff82;
case 0x51ff83:c.instructions+=9;goto B51ff83;
case 0x51ff85:c.instructions+=8;goto B51ff85;
case 0x51ff88:c.instructions+=7;goto B51ff88;
case 0x51ff89:c.instructions+=6;goto B51ff89;
case 0x51ff8f:c.instructions+=5;goto B51ff8f;
case 0x51ff90:c.instructions+=4;goto B51ff90;
case 0x51ff96:c.instructions+=3;goto B51ff96;
case 0x51ff97:c.instructions+=2;goto B51ff97;
case 0x51ff98:c.instructions+=1;goto B51ff98;
case 0x51ff9d:goto L51ff9d;
case 0x51ffa0:c.instructions+=10;goto B51ffa0;
case 0x51ffa2:c.instructions+=9;goto B51ffa2;
case 0x51ffa8:c.instructions+=8;goto B51ffa8;
case 0x51ffae:c.instructions+=7;goto B51ffae;
case 0x51ffaf:c.instructions+=6;goto B51ffaf;
case 0x51ffb5:c.instructions+=5;goto B51ffb5;
case 0x51ffb8:c.instructions+=4;goto B51ffb8;
case 0x51ffbe:c.instructions+=3;goto B51ffbe;
case 0x51ffbf:c.instructions+=2;goto B51ffbf;
case 0x51ffc0:c.instructions+=1;goto B51ffc0;
case 0x51ffc5:goto L51ffc5;
case 0x51ffc8:c.instructions+=6;goto B51ffc8;
case 0x51ffce:c.instructions+=5;goto B51ffce;
case 0x51ffcf:c.instructions+=4;goto B51ffcf;
case 0x51ffd5:c.instructions+=3;goto B51ffd5;
case 0x51ffd6:c.instructions+=2;goto B51ffd6;
case 0x51ffd7:c.instructions+=1;goto B51ffd7;
case 0x51ffdc:goto L51ffdc;
case 0x51ffdf:c.instructions+=6;goto B51ffdf;
case 0x51ffe5:c.instructions+=5;goto B51ffe5;
case 0x51ffe6:c.instructions+=4;goto B51ffe6;
case 0x51ffec:c.instructions+=3;goto B51ffec;
case 0x51ffed:c.instructions+=2;goto B51ffed;
case 0x51ffee:c.instructions+=1;goto B51ffee;
case 0x51fff3:goto L51fff3;
case 0x51fff9:c.instructions+=3;goto B51fff9;
case 0x51fffb:c.instructions+=2;goto B51fffb;
case 0x51fffe:c.instructions+=1;goto B51fffe;
default:missing_instruction(c.pc);}
B51f001:L51f001:{c.instructions+=4;NFSU2_TR(0x51f001);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51f009:{NFSU2_TR(0x51f009);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51f011:{NFSU2_TR(0x51f011);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51f019:{NFSU2_TR(0x51f019);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51f021:L51f021:{c.instructions+=2;NFSU2_TR(0x51f021);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f023:{NFSU2_TR(0x51f023);
if(r1(R+518)){{goto L51f02a;}}
}
B51f025:L51f025:{c.instructions+=2;NFSU2_TR(0x51f025);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f028:{NFSU2_TR(0x51f028);
{goto L51f030;}
}
B51f02a:L51f02a:{c.instructions+=2;NFSU2_TR(0x51f02a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51f02c:{NFSU2_TR(0x51f02c);
__builtin_memmove((R+16),(R+16),4);
}
B51f030:L51f030:{c.instructions+=2;NFSU2_TR(0x51f030);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f032:{NFSU2_TR(0x51f032);
if(r1(R+518)){{goto L51f039;}}
}
B51f034:L51f034:{c.instructions+=2;NFSU2_TR(0x51f034);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B51f037:{NFSU2_TR(0x51f037);
{goto L51f03b;}
}
B51f039:L51f039:{c.instructions+=1;NFSU2_TR(0x51f039);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51f03b:L51f03b:{c.instructions+=2;NFSU2_TR(0x51f03b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51f03d:{NFSU2_TR(0x51f03d);
if(r1(R+518)){{goto L51f0eb;}}
}
B51f043:L51f043:{c.instructions+=5;NFSU2_TR(0x51f043);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f046:{NFSU2_TR(0x51f046);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51f04a:{NFSU2_TR(0x51f04a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f04b:{NFSU2_TR(0x51f04b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f04c:{NFSU2_TR(0x51f04c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51f051ull));
TAIL_STATIC(0x51d9f0u,51d);
}
B51f051:L51f051:{c.instructions+=3;NFSU2_TR(0x51f051);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51f054:{NFSU2_TR(0x51f054);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51f056:{NFSU2_TR(0x51f056);
if(r1(R+518)){{goto L51f0e3;}}
}
B51f05c:L51f05c:{c.instructions+=2;NFSU2_TR(0x51f05c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51f05e:{NFSU2_TR(0x51f05e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51f087;}}
}
B51f060:L51f060:{c.instructions+=11;NFSU2_TR(0x51f060);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f064:{NFSU2_TR(0x51f064);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f068:{NFSU2_TR(0x51f068);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f06c:{NFSU2_TR(0x51f06c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f070:{NFSU2_TR(0x51f070);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f074:{NFSU2_TR(0x51f074);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f078:{NFSU2_TR(0x51f078);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f07b:{NFSU2_TR(0x51f07b);
w1(R+12,u8(0x1ull));
}
B51f07d:{NFSU2_TR(0x51f07d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f081:{NFSU2_TR(0x51f081);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f085:{NFSU2_TR(0x51f085);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f021u);}goto L51f021;}
}
B51f087:L51f087:{c.instructions+=5;NFSU2_TR(0x51f087);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f08b:{NFSU2_TR(0x51f08b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51f08f:{NFSU2_TR(0x51f08f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51f091:{NFSU2_TR(0x51f091);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51f094:{NFSU2_TR(0x51f094);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L51f09e;}}
}
B51f096:L51f096:{c.instructions+=2;NFSU2_TR(0x51f096);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f09a:{NFSU2_TR(0x51f09a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f09e:L51f09e:{c.instructions+=5;NFSU2_TR(0x51f09e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f0a2:{NFSU2_TR(0x51f0a2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51f0a6:{NFSU2_TR(0x51f0a6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51f0a8:{NFSU2_TR(0x51f0a8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51f0ab:{NFSU2_TR(0x51f0ab);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L51f0b5;}}
}
B51f0ad:L51f0ad:{c.instructions+=2;NFSU2_TR(0x51f0ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f0b1:{NFSU2_TR(0x51f0b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f0b5:L51f0b5:{c.instructions+=5;NFSU2_TR(0x51f0b5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f0b9:{NFSU2_TR(0x51f0b9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51f0bd:{NFSU2_TR(0x51f0bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51f0bf:{NFSU2_TR(0x51f0bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51f0c2:{NFSU2_TR(0x51f0c2);
if(r1(R+518)){{goto L51f0cc;}}
}
B51f0c4:L51f0c4:{c.instructions+=2;NFSU2_TR(0x51f0c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f0c8:{NFSU2_TR(0x51f0c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f0cc:L51f0cc:{c.instructions+=5;NFSU2_TR(0x51f0cc);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f0d0:{NFSU2_TR(0x51f0d0);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51f0d4:{NFSU2_TR(0x51f0d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51f0d6:{NFSU2_TR(0x51f0d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51f0d9:{NFSU2_TR(0x51f0d9);
if(r1(R+518)){{goto L51f0e3;}}
}
B51f0db:L51f0db:{c.instructions+=2;NFSU2_TR(0x51f0db);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f0df:{NFSU2_TR(0x51f0df);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f0e3:L51f0e3:{c.instructions+=2;NFSU2_TR(0x51f0e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f0e6:{NFSU2_TR(0x51f0e6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f021u);}goto L51f021;}
}
B51f0eb:L51f0eb:{c.instructions+=3;NFSU2_TR(0x51f0eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f0ee:{NFSU2_TR(0x51f0ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f0f0:{NFSU2_TR(0x51f0f0);
if(r1(R+518)){{goto L51f18e;}}
}
B51f0f6:L51f0f6:{c.instructions+=4;NFSU2_TR(0x51f0f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B51f0fa:{NFSU2_TR(0x51f0fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f0fb:{NFSU2_TR(0x51f0fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f0fc:{NFSU2_TR(0x51f0fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51f101ull));
TAIL_STATIC(0x51d9f0u,51d);
}
B51f101:L51f101:{c.instructions+=3;NFSU2_TR(0x51f101);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51f104:{NFSU2_TR(0x51f104);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51f106:{NFSU2_TR(0x51f106);
if(r1(R+518)){{goto L51f18e;}}
}
B51f10c:L51f10c:{c.instructions+=2;NFSU2_TR(0x51f10c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51f10e:{NFSU2_TR(0x51f10e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51f132;}}
}
B51f110:L51f110:{c.instructions+=9;NFSU2_TR(0x51f110);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f114:{NFSU2_TR(0x51f114);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f118:{NFSU2_TR(0x51f118);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f11c:{NFSU2_TR(0x51f11c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f120:{NFSU2_TR(0x51f120);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f124:{NFSU2_TR(0x51f124);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f128:{NFSU2_TR(0x51f128);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f12c:{NFSU2_TR(0x51f12c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f130:{NFSU2_TR(0x51f130);
{goto L51f18e;}
}
B51f132:L51f132:{c.instructions+=5;NFSU2_TR(0x51f132);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f136:{NFSU2_TR(0x51f136);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51f13a:{NFSU2_TR(0x51f13a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51f13c:{NFSU2_TR(0x51f13c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51f13f:{NFSU2_TR(0x51f13f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L51f149;}}
}
B51f141:L51f141:{c.instructions+=2;NFSU2_TR(0x51f141);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f145:{NFSU2_TR(0x51f145);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f149:L51f149:{c.instructions+=5;NFSU2_TR(0x51f149);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f14d:{NFSU2_TR(0x51f14d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51f151:{NFSU2_TR(0x51f151);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51f153:{NFSU2_TR(0x51f153);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51f156:{NFSU2_TR(0x51f156);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L51f160;}}
}
B51f158:L51f158:{c.instructions+=2;NFSU2_TR(0x51f158);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f15c:{NFSU2_TR(0x51f15c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f160:L51f160:{c.instructions+=5;NFSU2_TR(0x51f160);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f164:{NFSU2_TR(0x51f164);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51f168:{NFSU2_TR(0x51f168);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51f16a:{NFSU2_TR(0x51f16a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51f16d:{NFSU2_TR(0x51f16d);
if(r1(R+518)){{goto L51f177;}}
}
B51f16f:L51f16f:{c.instructions+=2;NFSU2_TR(0x51f16f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f173:{NFSU2_TR(0x51f173);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f177:L51f177:{c.instructions+=5;NFSU2_TR(0x51f177);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f17b:{NFSU2_TR(0x51f17b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51f17f:{NFSU2_TR(0x51f17f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51f181:{NFSU2_TR(0x51f181);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51f184:{NFSU2_TR(0x51f184);
if(r1(R+518)){{goto L51f18e;}}
}
B51f186:L51f186:{c.instructions+=2;NFSU2_TR(0x51f186);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f18a:{NFSU2_TR(0x51f18a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f18e:L51f18e:{c.instructions+=18;NFSU2_TR(0x51f18e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f192:{NFSU2_TR(0x51f192);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f196:{NFSU2_TR(0x51f196);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B51f19a:{NFSU2_TR(0x51f19a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f19e:{NFSU2_TR(0x51f19e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f19f:{NFSU2_TR(0x51f19f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f1a0:{NFSU2_TR(0x51f1a0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B51f1a2:{NFSU2_TR(0x51f1a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f1a5:{NFSU2_TR(0x51f1a5);
{u32 ea_=u32(r4(R+20)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f1a8:{NFSU2_TR(0x51f1a8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f1ac:{NFSU2_TR(0x51f1ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f1af:{NFSU2_TR(0x51f1af);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B51f1b3:{NFSU2_TR(0x51f1b3);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B51f1b5:{NFSU2_TR(0x51f1b5);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f1b8:{NFSU2_TR(0x51f1b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51f1b9:{NFSU2_TR(0x51f1b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51f1ba:{NFSU2_TR(0x51f1ba);
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
B51f1bd:{NFSU2_TR(0x51f1bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f1c0:L51f1c0:{c.instructions+=7;NFSU2_TR(0x51f1c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f1c1:{NFSU2_TR(0x51f1c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f1c2:{NFSU2_TR(0x51f1c2);
__builtin_memmove((R+28),(R+4),4);
}
B51f1c4:{NFSU2_TR(0x51f1c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f1c7:{NFSU2_TR(0x51f1c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f1ca:{NFSU2_TR(0x51f1ca);
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
B51f1cc:{NFSU2_TR(0x51f1cc);
if(r1(R+518)){{goto L51f213;}}
}
B51f1ce:L51f1ce:{c.instructions+=2;NFSU2_TR(0x51f1ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f1d0:{NFSU2_TR(0x51f1d0);
if(r1(R+518)){{goto L51f1d7;}}
}
B51f1d2:L51f1d2:{c.instructions+=2;NFSU2_TR(0x51f1d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B51f1d5:{NFSU2_TR(0x51f1d5);
{goto L51f1e0;}
}
B51f1d7:L51f1d7:{c.instructions+=2;NFSU2_TR(0x51f1d7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51f1d9:{NFSU2_TR(0x51f1d9);
__builtin_memmove((R+16),(R+16),4);
}
B51f1e0:L51f1e0:{c.instructions+=2;NFSU2_TR(0x51f1e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f1e2:{NFSU2_TR(0x51f1e2);
if(r1(R+518)){{goto L51f1e9;}}
}
B51f1e4:L51f1e4:{c.instructions+=2;NFSU2_TR(0x51f1e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B51f1e7:{NFSU2_TR(0x51f1e7);
{goto L51f1eb;}
}
B51f1e9:L51f1e9:{c.instructions+=1;NFSU2_TR(0x51f1e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51f1eb:L51f1eb:{c.instructions+=2;NFSU2_TR(0x51f1eb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51f1ed:{NFSU2_TR(0x51f1ed);
if(r1(R+518)){{goto L51f207;}}
}
B51f1ef:L51f1ef:{c.instructions+=3;NFSU2_TR(0x51f1ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f1f2:{NFSU2_TR(0x51f1f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f1f3:{NFSU2_TR(0x51f1f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51f1f8ull));
TAIL_STATIC(0x50ca50u,50c);
}
B51f1f8:L51f1f8:{c.instructions+=4;NFSU2_TR(0x51f1f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f1fb:{NFSU2_TR(0x51f1fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51f1fe:{NFSU2_TR(0x51f1fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f200:{NFSU2_TR(0x51f200);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f1d7u);}goto L51f1d7;}}
}
B51f202:L51f202:{c.instructions+=2;NFSU2_TR(0x51f202);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
}
B51f205:{NFSU2_TR(0x51f205);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f1e0u);}goto L51f1e0;}
}
B51f207:L51f207:{c.instructions+=3;NFSU2_TR(0x51f207);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f20a:{NFSU2_TR(0x51f20a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f20b:{NFSU2_TR(0x51f20b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51f210ull));
TAIL_STATIC(0x50ca50u,50c);
}
B51f210:L51f210:{c.instructions+=1;NFSU2_TR(0x51f210);
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
B51f213:L51f213:{c.instructions+=3;NFSU2_TR(0x51f213);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f214:{NFSU2_TR(0x51f214);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f215:{NFSU2_TR(0x51f215);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f220:L51f220:{c.instructions+=7;NFSU2_TR(0x51f220);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f221:{NFSU2_TR(0x51f221);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f224:{NFSU2_TR(0x51f224);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f225:{NFSU2_TR(0x51f225);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+20),(U+0),4);
}
B51f228:{NFSU2_TR(0x51f228);
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
B51f22a:{NFSU2_TR(0x51f22a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f22e:{NFSU2_TR(0x51f22e);
if(r1(R+518)){{goto L51f2d9;}}
}
B51f234:L51f234:{c.instructions+=2;NFSU2_TR(0x51f234);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f235:{NFSU2_TR(0x51f235);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f236:L51f236:{c.instructions+=2;NFSU2_TR(0x51f236);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f238:{NFSU2_TR(0x51f238);
if(r1(R+518)){{goto L51f23f;}}
}
B51f23a:L51f23a:{c.instructions+=2;NFSU2_TR(0x51f23a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f23d:{NFSU2_TR(0x51f23d);
{goto L51f241;}
}
B51f23f:L51f23f:{c.instructions+=1;NFSU2_TR(0x51f23f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B51f241:L51f241:{c.instructions+=2;NFSU2_TR(0x51f241);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f243:{NFSU2_TR(0x51f243);
if(r1(R+518)){{goto L51f24a;}}
}
B51f245:L51f245:{c.instructions+=2;NFSU2_TR(0x51f245);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B51f248:{NFSU2_TR(0x51f248);
{goto L51f24c;}
}
B51f24a:L51f24a:{c.instructions+=1;NFSU2_TR(0x51f24a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51f24c:L51f24c:{c.instructions+=2;NFSU2_TR(0x51f24c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51f24e:{NFSU2_TR(0x51f24e);
if(r1(R+518)){{goto L51f294;}}
}
B51f250:L51f250:{c.instructions+=3;NFSU2_TR(0x51f250);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f253:{NFSU2_TR(0x51f253);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f255:{NFSU2_TR(0x51f255);
if(r1(R+518)){{goto L51f28f;}}
}
B51f257:L51f257:{c.instructions+=3;NFSU2_TR(0x51f257);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B51f25d:{NFSU2_TR(0x51f25d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f25f:{NFSU2_TR(0x51f25f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51f267;}}
}
B51f261:L51f261:{c.instructions+=2;NFSU2_TR(0x51f261);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B51f265:{NFSU2_TR(0x51f265);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51f26e;}}
}
B51f267:L51f267:{c.instructions+=1;NFSU2_TR(0x51f267);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B51f26e:L51f26e:{c.instructions+=2;NFSU2_TR(0x51f26e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51f272:{NFSU2_TR(0x51f272);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51f28f;}}
}
B51f274:L51f274:{c.instructions+=4;NFSU2_TR(0x51f274);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f277:{NFSU2_TR(0x51f277);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f27a:{NFSU2_TR(0x51f27a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f27c:{NFSU2_TR(0x51f27c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L51f28f;}}
}
B51f27e:L51f27e:{c.instructions+=1;NFSU2_TR(0x51f27e);
__builtin_memmove((R+24),(R+0),4);
}
B51f280:L51f280:{c.instructions+=2;NFSU2_TR(0x51f280);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f281:{NFSU2_TR(0x51f281);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51f286ull));
TAIL_STATIC(0x50ca00u,50c);
}
B51f286:L51f286:{c.instructions+=4;NFSU2_TR(0x51f286);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f289:{NFSU2_TR(0x51f289);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51f28c:{NFSU2_TR(0x51f28c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B51f28d:{NFSU2_TR(0x51f28d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f280u);}goto L51f280;}}
}
B51f28f:L51f28f:{c.instructions+=2;NFSU2_TR(0x51f28f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f292:{NFSU2_TR(0x51f292);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f236u);}goto L51f236;}
}
B51f294:L51f294:{c.instructions+=4;NFSU2_TR(0x51f294);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f298:{NFSU2_TR(0x51f298);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f29b:{NFSU2_TR(0x51f29b);
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
B51f29d:{NFSU2_TR(0x51f29d);
if(r1(R+518)){{goto L51f2d7;}}
}
B51f29f:L51f29f:{c.instructions+=3;NFSU2_TR(0x51f29f);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B51f2a5:{NFSU2_TR(0x51f2a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f2a7:{NFSU2_TR(0x51f2a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51f2af;}}
}
B51f2a9:L51f2a9:{c.instructions+=2;NFSU2_TR(0x51f2a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B51f2ad:{NFSU2_TR(0x51f2ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51f2b6;}}
}
B51f2af:L51f2af:{c.instructions+=1;NFSU2_TR(0x51f2af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B51f2b6:L51f2b6:{c.instructions+=2;NFSU2_TR(0x51f2b6);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B51f2ba:{NFSU2_TR(0x51f2ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51f2d7;}}
}
B51f2bc:L51f2bc:{c.instructions+=4;NFSU2_TR(0x51f2bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f2bf:{NFSU2_TR(0x51f2bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f2c2:{NFSU2_TR(0x51f2c2);
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
B51f2c4:{NFSU2_TR(0x51f2c4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L51f2d7;}}
}
B51f2c6:L51f2c6:{c.instructions+=1;NFSU2_TR(0x51f2c6);
__builtin_memmove((R+24),(R+0),4);
}
B51f2c8:L51f2c8:{c.instructions+=2;NFSU2_TR(0x51f2c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f2c9:{NFSU2_TR(0x51f2c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51f2ceull));
TAIL_STATIC(0x50ca00u,50c);
}
B51f2ce:L51f2ce:{c.instructions+=4;NFSU2_TR(0x51f2ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f2d1:{NFSU2_TR(0x51f2d1);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51f2d4:{NFSU2_TR(0x51f2d4);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51f2d5:{NFSU2_TR(0x51f2d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f2c8u);}goto L51f2c8;}}
}
B51f2d7:L51f2d7:{c.instructions+=2;NFSU2_TR(0x51f2d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f2d8:{NFSU2_TR(0x51f2d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f2d9:L51f2d9:{c.instructions+=3;NFSU2_TR(0x51f2d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51f2da:{NFSU2_TR(0x51f2da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51f2db:{NFSU2_TR(0x51f2db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f2e0:L51f2e0:{c.instructions+=3;NFSU2_TR(0x51f2e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f2e4:{NFSU2_TR(0x51f2e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f2e6:{NFSU2_TR(0x51f2e6);
if(r1(R+518)){{goto L51f2ed;}}
}
B51f2e8:L51f2e8:{c.instructions+=2;NFSU2_TR(0x51f2e8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B51f2eb:{NFSU2_TR(0x51f2eb);
{goto L51f2ef;}
}
B51f2ed:L51f2ed:{c.instructions+=1;NFSU2_TR(0x51f2ed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51f2ef:L51f2ef:{c.instructions+=14;NFSU2_TR(0x51f2ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f2f0:{NFSU2_TR(0x51f2f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51f2f3:{NFSU2_TR(0x51f2f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B51f2f5:{NFSU2_TR(0x51f2f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B51f2f8:{NFSU2_TR(0x51f2f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f2fb:{NFSU2_TR(0x51f2fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f2fe:{NFSU2_TR(0x51f2fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B51f300:{NFSU2_TR(0x51f300);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51f303:{NFSU2_TR(0x51f303);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f306:{NFSU2_TR(0x51f306);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B51f307:{NFSU2_TR(0x51f307);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f309:{NFSU2_TR(0x51f309);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f30c:{NFSU2_TR(0x51f30c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f30d:{NFSU2_TR(0x51f30d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51f326;}}
}
B51f30f:L51f30f:{c.instructions+=3;NFSU2_TR(0x51f30f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51f311:{NFSU2_TR(0x51f311);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f313:{NFSU2_TR(0x51f313);
if(r1(R+518)){{goto L51f31a;}}
}
B51f315:L51f315:{c.instructions+=2;NFSU2_TR(0x51f315);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B51f318:{NFSU2_TR(0x51f318);
{goto L51f31c;}
}
B51f31a:L51f31a:{c.instructions+=1;NFSU2_TR(0x51f31a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51f31c:L51f31c:{c.instructions+=2;NFSU2_TR(0x51f31c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f31f:{NFSU2_TR(0x51f31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51f326:L51f326:{c.instructions+=3;NFSU2_TR(0x51f326);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f329:{NFSU2_TR(0x51f329);
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
B51f32b:{NFSU2_TR(0x51f32b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51f341;}}
}
B51f32d:L51f32d:{c.instructions+=3;NFSU2_TR(0x51f32d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51f32f:{NFSU2_TR(0x51f32f);
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
B51f331:{NFSU2_TR(0x51f331);
if(r1(R+518)){{goto L51f33c;}}
}
B51f333:L51f333:{c.instructions+=3;NFSU2_TR(0x51f333);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B51f336:{NFSU2_TR(0x51f336);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f339:{NFSU2_TR(0x51f339);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f33c:L51f33c:{c.instructions+=2;NFSU2_TR(0x51f33c);
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
B51f33e:{NFSU2_TR(0x51f33e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f341:L51f341:{c.instructions+=1;NFSU2_TR(0x51f341);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f350:L51f350:{c.instructions+=7;NFSU2_TR(0x51f350);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f353:{NFSU2_TR(0x51f353);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f354:{NFSU2_TR(0x51f354);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f355:{NFSU2_TR(0x51f355);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f356:{NFSU2_TR(0x51f356);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f359:{NFSU2_TR(0x51f359);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51f35b:{NFSU2_TR(0x51f35b);
if(r1(R+518)){{goto L51f3a3;}}
}
B51f35d:L51f35d:{c.instructions+=2;NFSU2_TR(0x51f35d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f35f:{NFSU2_TR(0x51f35f);
if(r1(R+518)){{goto L51f366;}}
}
B51f361:L51f361:{c.instructions+=2;NFSU2_TR(0x51f361);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f364:{NFSU2_TR(0x51f364);
{goto L51f368;}
}
B51f366:L51f366:{c.instructions+=1;NFSU2_TR(0x51f366);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51f368:L51f368:{c.instructions+=2;NFSU2_TR(0x51f368);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51f36c:{NFSU2_TR(0x51f36c);
__builtin_memmove((R+16),(R+16),4);
}
B51f370:L51f370:{c.instructions+=2;NFSU2_TR(0x51f370);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f372:{NFSU2_TR(0x51f372);
if(r1(R+518)){{goto L51f379;}}
}
B51f374:L51f374:{c.instructions+=2;NFSU2_TR(0x51f374);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B51f377:{NFSU2_TR(0x51f377);
{goto L51f37b;}
}
B51f379:L51f379:{c.instructions+=1;NFSU2_TR(0x51f379);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51f37b:L51f37b:{c.instructions+=2;NFSU2_TR(0x51f37b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51f37d:{NFSU2_TR(0x51f37d);
if(r1(R+518)){{goto L51f3a3;}}
}
B51f37f:L51f37f:{c.instructions+=3;NFSU2_TR(0x51f37f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f380:{NFSU2_TR(0x51f380);
__builtin_memmove((R+4),(R+24),4);
}
B51f382:{NFSU2_TR(0x51f382);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51f387ull));
TAIL_STATIC(0x51ee20u,51e);
}
B51f387:L51f387:{c.instructions+=2;NFSU2_TR(0x51f387);
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
B51f389:{NFSU2_TR(0x51f389);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51f39b;}}
}
B51f38b:L51f38b:{c.instructions+=3;NFSU2_TR(0x51f38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51f38e:{NFSU2_TR(0x51f38e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f390:{NFSU2_TR(0x51f390);
if(r1(R+518)){{goto L51f397;}}
}
B51f392:L51f392:{c.instructions+=2;NFSU2_TR(0x51f392);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B51f395:{NFSU2_TR(0x51f395);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f370u);}goto L51f370;}
}
B51f397:L51f397:{c.instructions+=2;NFSU2_TR(0x51f397);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51f399:{NFSU2_TR(0x51f399);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f370u);}goto L51f370;}
}
B51f39b:L51f39b:{c.instructions+=5;NFSU2_TR(0x51f39b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f39c:{NFSU2_TR(0x51f39c);
__builtin_memmove((R+0),(R+24),4);
}
B51f39e:{NFSU2_TR(0x51f39e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f39f:{NFSU2_TR(0x51f39f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51f3a0:{NFSU2_TR(0x51f3a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f3a3:L51f3a3:{c.instructions+=5;NFSU2_TR(0x51f3a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f3a4:{NFSU2_TR(0x51f3a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f3a5:{NFSU2_TR(0x51f3a5);
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
B51f3a7:{NFSU2_TR(0x51f3a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51f3a8:{NFSU2_TR(0x51f3a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f3b0:L51f3b0:{c.instructions+=8;NFSU2_TR(0x51f3b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f3b1:{NFSU2_TR(0x51f3b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f3b4:{NFSU2_TR(0x51f3b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f3b5:{NFSU2_TR(0x51f3b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f3b8:{NFSU2_TR(0x51f3b8);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51f3bd:{NFSU2_TR(0x51f3bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51f3c4:{NFSU2_TR(0x51f3c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51f3cb:{NFSU2_TR(0x51f3cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51f3d2:L51f3d2:{c.instructions+=2;NFSU2_TR(0x51f3d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f3d4:{NFSU2_TR(0x51f3d4);
if(r1(R+518)){{goto L51f3db;}}
}
B51f3d6:L51f3d6:{c.instructions+=2;NFSU2_TR(0x51f3d6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B51f3d9:{NFSU2_TR(0x51f3d9);
{goto L51f3e0;}
}
B51f3db:L51f3db:{c.instructions+=2;NFSU2_TR(0x51f3db);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51f3dd:{NFSU2_TR(0x51f3dd);
__builtin_memmove((R+4),(R+4),4);
}
B51f3e0:L51f3e0:{c.instructions+=2;NFSU2_TR(0x51f3e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f3e2:{NFSU2_TR(0x51f3e2);
if(r1(R+518)){{goto L51f3e9;}}
}
B51f3e4:L51f3e4:{c.instructions+=2;NFSU2_TR(0x51f3e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B51f3e7:{NFSU2_TR(0x51f3e7);
{goto L51f3eb;}
}
B51f3e9:L51f3e9:{c.instructions+=1;NFSU2_TR(0x51f3e9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51f3eb:L51f3eb:{c.instructions+=2;NFSU2_TR(0x51f3eb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51f3ed:{NFSU2_TR(0x51f3ed);
if(r1(R+518)){{goto L51f3f7;}}
}
B51f3ef:L51f3ef:{c.instructions+=3;NFSU2_TR(0x51f3ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B51f3f2:{NFSU2_TR(0x51f3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f3f5:{NFSU2_TR(0x51f3f5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f3d2u);}goto L51f3d2;}
}
B51f3f7:L51f3f7:{c.instructions+=2;NFSU2_TR(0x51f3f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f3fa:{NFSU2_TR(0x51f3fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f3fd:L51f3fd:{c.instructions+=2;NFSU2_TR(0x51f3fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f3ff:{NFSU2_TR(0x51f3ff);
if(r1(R+518)){{goto L51f406;}}
}
B51f401:L51f401:{c.instructions+=2;NFSU2_TR(0x51f401);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B51f404:{NFSU2_TR(0x51f404);
{goto L51f408;}
}
B51f406:L51f406:{c.instructions+=1;NFSU2_TR(0x51f406);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51f408:L51f408:{c.instructions+=2;NFSU2_TR(0x51f408);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f40a:{NFSU2_TR(0x51f40a);
if(r1(R+518)){{goto L51f411;}}
}
B51f40c:L51f40c:{c.instructions+=2;NFSU2_TR(0x51f40c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B51f40f:{NFSU2_TR(0x51f40f);
{goto L51f413;}
}
B51f411:L51f411:{c.instructions+=1;NFSU2_TR(0x51f411);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51f413:L51f413:{c.instructions+=2;NFSU2_TR(0x51f413);
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
B51f415:{NFSU2_TR(0x51f415);
if(r1(R+518)){{goto L51f439;}}
}
B51f417:L51f417:{c.instructions+=4;NFSU2_TR(0x51f417);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B51f41a:{NFSU2_TR(0x51f41a);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B51f41e:{NFSU2_TR(0x51f41e);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51f420:{NFSU2_TR(0x51f420);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51f42f;}}
}
B51f422:L51f422:{c.instructions+=2;NFSU2_TR(0x51f422);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51f425:{NFSU2_TR(0x51f425);
if(r1(R+518)){{goto L51f42f;}}
}
B51f427:L51f427:{c.instructions+=3;NFSU2_TR(0x51f427);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B51f42a:{NFSU2_TR(0x51f42a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f42d:{NFSU2_TR(0x51f42d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f3fdu);}goto L51f3fd;}
}
B51f42f:L51f42f:{c.instructions+=3;NFSU2_TR(0x51f42f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f432:{NFSU2_TR(0x51f432);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51f437:{NFSU2_TR(0x51f437);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f3fdu);}goto L51f3fd;}
}
B51f439:L51f439:{c.instructions+=3;NFSU2_TR(0x51f439);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f43a:{NFSU2_TR(0x51f43a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51f43b:{NFSU2_TR(0x51f43b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f440:L51f440:{c.instructions+=7;NFSU2_TR(0x51f440);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f441:{NFSU2_TR(0x51f441);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f444:{NFSU2_TR(0x51f444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51f446:{NFSU2_TR(0x51f446);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f448:{NFSU2_TR(0x51f448);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f449:{NFSU2_TR(0x51f449);
w4(R+0,u32(0x1ull));
}
B51f44e:{NFSU2_TR(0x51f44e);
if(r1(R+518)){{goto L51f455;}}
}
B51f450:L51f450:{c.instructions+=2;NFSU2_TR(0x51f450);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B51f453:{NFSU2_TR(0x51f453);
{goto L51f457;}
}
B51f455:L51f455:{c.instructions+=1;NFSU2_TR(0x51f455);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51f457:L51f457:{c.instructions+=2;NFSU2_TR(0x51f457);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51f45b:{NFSU2_TR(0x51f45b);
{goto L51f460;}
}
B51f460:L51f460:{c.instructions+=2;NFSU2_TR(0x51f460);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f462:{NFSU2_TR(0x51f462);
if(r1(R+518)){{goto L51f469;}}
}
B51f464:L51f464:{c.instructions+=2;NFSU2_TR(0x51f464);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B51f467:{NFSU2_TR(0x51f467);
{goto L51f46b;}
}
B51f469:L51f469:{c.instructions+=1;NFSU2_TR(0x51f469);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51f46b:L51f46b:{c.instructions+=2;NFSU2_TR(0x51f46b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51f46d:{NFSU2_TR(0x51f46d);
if(r1(R+518)){{goto L51f484;}}
}
B51f46f:L51f46f:{c.instructions+=2;NFSU2_TR(0x51f46f);
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
B51f471:{NFSU2_TR(0x51f471);
if(r1(R+518)){{goto L51f486;}}
}
B51f473:L51f473:{c.instructions+=4;NFSU2_TR(0x51f473);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f476:{NFSU2_TR(0x51f476);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51f477:{NFSU2_TR(0x51f477);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f479:{NFSU2_TR(0x51f479);
if(r1(R+518)){{goto L51f480;}}
}
B51f47b:L51f47b:{c.instructions+=2;NFSU2_TR(0x51f47b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B51f47e:{NFSU2_TR(0x51f47e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f460u);}goto L51f460;}
}
B51f480:L51f480:{c.instructions+=2;NFSU2_TR(0x51f480);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51f482:{NFSU2_TR(0x51f482);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f460u);}goto L51f460;}
}
B51f484:L51f484:{c.instructions+=1;NFSU2_TR(0x51f484);
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
B51f486:L51f486:{c.instructions+=3;NFSU2_TR(0x51f486);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f487:{NFSU2_TR(0x51f487);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f488:{NFSU2_TR(0x51f488);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f490:L51f490:{c.instructions+=7;NFSU2_TR(0x51f490);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f491:{NFSU2_TR(0x51f491);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f494:{NFSU2_TR(0x51f494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51f496:{NFSU2_TR(0x51f496);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f498:{NFSU2_TR(0x51f498);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f499:{NFSU2_TR(0x51f499);
w4(R+0,u32(0x1ull));
}
B51f49e:{NFSU2_TR(0x51f49e);
if(r1(R+518)){{goto L51f4a5;}}
}
B51f4a0:L51f4a0:{c.instructions+=2;NFSU2_TR(0x51f4a0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B51f4a3:{NFSU2_TR(0x51f4a3);
{goto L51f4a7;}
}
B51f4a5:L51f4a5:{c.instructions+=1;NFSU2_TR(0x51f4a5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51f4a7:L51f4a7:{c.instructions+=2;NFSU2_TR(0x51f4a7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51f4ab:{NFSU2_TR(0x51f4ab);
{goto L51f4b0;}
}
B51f4b0:L51f4b0:{c.instructions+=2;NFSU2_TR(0x51f4b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f4b2:{NFSU2_TR(0x51f4b2);
if(r1(R+518)){{goto L51f4b9;}}
}
B51f4b4:L51f4b4:{c.instructions+=2;NFSU2_TR(0x51f4b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B51f4b7:{NFSU2_TR(0x51f4b7);
{goto L51f4bb;}
}
B51f4b9:L51f4b9:{c.instructions+=1;NFSU2_TR(0x51f4b9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51f4bb:L51f4bb:{c.instructions+=2;NFSU2_TR(0x51f4bb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51f4bd:{NFSU2_TR(0x51f4bd);
if(r1(R+518)){{goto L51f4d4;}}
}
B51f4bf:L51f4bf:{c.instructions+=2;NFSU2_TR(0x51f4bf);
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
B51f4c1:{NFSU2_TR(0x51f4c1);
if(r1(R+518)){{goto L51f4d6;}}
}
B51f4c3:L51f4c3:{c.instructions+=4;NFSU2_TR(0x51f4c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f4c6:{NFSU2_TR(0x51f4c6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51f4c7:{NFSU2_TR(0x51f4c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f4c9:{NFSU2_TR(0x51f4c9);
if(r1(R+518)){{goto L51f4d0;}}
}
B51f4cb:L51f4cb:{c.instructions+=2;NFSU2_TR(0x51f4cb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B51f4ce:{NFSU2_TR(0x51f4ce);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f4b0u);}goto L51f4b0;}
}
B51f4d0:L51f4d0:{c.instructions+=2;NFSU2_TR(0x51f4d0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51f4d2:{NFSU2_TR(0x51f4d2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f4b0u);}goto L51f4b0;}
}
B51f4d4:L51f4d4:{c.instructions+=1;NFSU2_TR(0x51f4d4);
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
B51f4d6:L51f4d6:{c.instructions+=3;NFSU2_TR(0x51f4d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f4d7:{NFSU2_TR(0x51f4d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f4d8:{NFSU2_TR(0x51f4d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f4e0:L51f4e0:{c.instructions+=7;NFSU2_TR(0x51f4e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f4e1:{NFSU2_TR(0x51f4e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f4e2:{NFSU2_TR(0x51f4e2);
__builtin_memmove((R+28),(R+4),4);
}
B51f4e4:{NFSU2_TR(0x51f4e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f4e7:{NFSU2_TR(0x51f4e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f4ea:{NFSU2_TR(0x51f4ea);
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
B51f4ec:{NFSU2_TR(0x51f4ec);
if(r1(R+518)){{goto L51f50d;}}
}
B51f4ee:L51f4ee:{c.instructions+=1;NFSU2_TR(0x51f4ee);
__builtin_memmove((R+28),(R+28),4);
}
B51f4f0:L51f4f0:{c.instructions+=8;NFSU2_TR(0x51f4f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51f4f2:{NFSU2_TR(0x51f4f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51f4f4:{NFSU2_TR(0x51f4f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f4f7:{NFSU2_TR(0x51f4f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B51f4f9:{NFSU2_TR(0x51f4f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f4fc:{NFSU2_TR(0x51f4fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B51f4ff:{NFSU2_TR(0x51f4ff);
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
B51f501:{NFSU2_TR(0x51f501);
if(r1(R+518)){{goto L51f509;}}
}
B51f503:L51f503:{c.instructions+=3;NFSU2_TR(0x51f503);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51f505:{NFSU2_TR(0x51f505);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f507:{NFSU2_TR(0x51f507);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51f509ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B51f509:L51f509:{c.instructions+=2;NFSU2_TR(0x51f509);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B51f50b:{NFSU2_TR(0x51f50b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f4f0u);}goto L51f4f0;}}
}
B51f50d:L51f50d:{c.instructions+=6;NFSU2_TR(0x51f50d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51f514:{NFSU2_TR(0x51f514);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51f51b:{NFSU2_TR(0x51f51b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51f522:{NFSU2_TR(0x51f522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f523:{NFSU2_TR(0x51f523);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f524:{NFSU2_TR(0x51f524);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f530:L51f530:{c.instructions+=4;NFSU2_TR(0x51f530);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f533:{NFSU2_TR(0x51f533);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B51f536:{NFSU2_TR(0x51f536);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51f538:{NFSU2_TR(0x51f538);
if(r1(R+518)){{goto L51f557;}}
}
B51f53a:L51f53a:{c.instructions+=3;NFSU2_TR(0x51f53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f53d:{NFSU2_TR(0x51f53d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f53f:{NFSU2_TR(0x51f53f);
if(r1(R+518)){{goto L51f557;}}
}
B51f541:L51f541:{c.instructions+=3;NFSU2_TR(0x51f541);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f544:{NFSU2_TR(0x51f544);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f546:{NFSU2_TR(0x51f546);
if(r1(R+518)){{goto L51f54f;}}
}
B51f548:L51f548:{c.instructions+=3;NFSU2_TR(0x51f548);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B51f54b:{NFSU2_TR(0x51f54b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51f54e:{NFSU2_TR(0x51f54e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f54f:L51f54f:{c.instructions+=3;NFSU2_TR(0x51f54f);
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
B51f551:{NFSU2_TR(0x51f551);
w4(R+0,u32(0xcull));
}
B51f556:{NFSU2_TR(0x51f556);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f557:L51f557:{c.instructions+=2;NFSU2_TR(0x51f557);
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
B51f559:{NFSU2_TR(0x51f559);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f560:L51f560:{c.instructions+=4;NFSU2_TR(0x51f560);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f563:{NFSU2_TR(0x51f563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B51f566:{NFSU2_TR(0x51f566);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f568:{NFSU2_TR(0x51f568);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51f65e;}}
}
B51f56e:L51f56e:{c.instructions+=5;NFSU2_TR(0x51f56e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f571:{NFSU2_TR(0x51f571);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f573:{NFSU2_TR(0x51f573);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f574:{NFSU2_TR(0x51f574);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f577:{NFSU2_TR(0x51f577);
if(r1(R+518)){{goto L51f57e;}}
}
B51f579:L51f579:{c.instructions+=2;NFSU2_TR(0x51f579);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B51f57c:{NFSU2_TR(0x51f57c);
{goto L51f580;}
}
B51f57e:L51f57e:{c.instructions+=1;NFSU2_TR(0x51f57e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51f580:L51f580:{c.instructions+=8;NFSU2_TR(0x51f580);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f583:{NFSU2_TR(0x51f583);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f586:{NFSU2_TR(0x51f586);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51f58a:{NFSU2_TR(0x51f58a);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51f590:{NFSU2_TR(0x51f590);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f594:{NFSU2_TR(0x51f594);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51f598:{NFSU2_TR(0x51f598);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51f59e:{NFSU2_TR(0x51f59e);
__builtin_memmove((R+28),(R+28),4);
}
B51f5a0:L51f5a0:{c.instructions+=2;NFSU2_TR(0x51f5a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f5a2:{NFSU2_TR(0x51f5a2);
if(r1(R+518)){{goto L51f5a9;}}
}
B51f5a4:L51f5a4:{c.instructions+=2;NFSU2_TR(0x51f5a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B51f5a7:{NFSU2_TR(0x51f5a7);
{goto L51f5ab;}
}
B51f5a9:L51f5a9:{c.instructions+=1;NFSU2_TR(0x51f5a9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51f5ab:L51f5ab:{c.instructions+=2;NFSU2_TR(0x51f5ab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51f5ad:{NFSU2_TR(0x51f5ad);
if(r1(R+518)){{goto L51f62d;}}
}
B51f5af:L51f5af:{c.instructions+=10;NFSU2_TR(0x51f5af);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f5b2:{NFSU2_TR(0x51f5b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f5b5:{NFSU2_TR(0x51f5b5);
{u32 ea_=u32(r4(R+8)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f5b8:{NFSU2_TR(0x51f5b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f5bc:{NFSU2_TR(0x51f5bc);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f5bf:{NFSU2_TR(0x51f5bf);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f5c3:{NFSU2_TR(0x51f5c3);
__asm__ volatile(".byte 0xd8,0xda":::"memory");
}
B51f5c5:{NFSU2_TR(0x51f5c5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51f5c7:{NFSU2_TR(0x51f5c7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51f5ca:{NFSU2_TR(0x51f5ca);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L51f5d2;}}
}
B51f5cc:L51f5cc:{c.instructions+=2;NFSU2_TR(0x51f5cc);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B51f5ce:{NFSU2_TR(0x51f5ce);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f5d2:L51f5d2:{c.instructions+=6;NFSU2_TR(0x51f5d2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51f5d4:{NFSU2_TR(0x51f5d4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f5d8:{NFSU2_TR(0x51f5d8);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B51f5da:{NFSU2_TR(0x51f5da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51f5dc:{NFSU2_TR(0x51f5dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51f5df:{NFSU2_TR(0x51f5df);
if(r1(R+518)){{goto L51f5e7;}}
}
B51f5e1:L51f5e1:{c.instructions+=2;NFSU2_TR(0x51f5e1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f5e5:{NFSU2_TR(0x51f5e5);
{goto L51f5e9;}
}
B51f5e7:L51f5e7:{c.instructions+=1;NFSU2_TR(0x51f5e7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51f5e9:L51f5e9:{c.instructions+=5;NFSU2_TR(0x51f5e9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f5ed:{NFSU2_TR(0x51f5ed);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B51f5ef:{NFSU2_TR(0x51f5ef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51f5f1:{NFSU2_TR(0x51f5f1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51f5f4:{NFSU2_TR(0x51f5f4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L51f5fa;}}
}
B51f5f6:L51f5f6:{c.instructions+=1;NFSU2_TR(0x51f5f6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51f5fa:L51f5fa:{c.instructions+=8;NFSU2_TR(0x51f5fa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f5fe:{NFSU2_TR(0x51f5fe);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B51f600:{NFSU2_TR(0x51f600);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f604:{NFSU2_TR(0x51f604);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51f606:{NFSU2_TR(0x51f606);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B51f60a:{NFSU2_TR(0x51f60a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51f60c:{NFSU2_TR(0x51f60c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51f60f:{NFSU2_TR(0x51f60f);
if(r1(R+518)){{goto L51f617;}}
}
B51f611:L51f611:{c.instructions+=2;NFSU2_TR(0x51f611);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51f613:{NFSU2_TR(0x51f613);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f617:L51f617:{c.instructions+=3;NFSU2_TR(0x51f617);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f61a:{NFSU2_TR(0x51f61a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f61c:{NFSU2_TR(0x51f61c);
if(r1(R+518)){{goto L51f626;}}
}
B51f61e:L51f61e:{c.instructions+=2;NFSU2_TR(0x51f61e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
}
B51f621:{NFSU2_TR(0x51f621);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f5a0u);}goto L51f5a0;}
}
B51f626:L51f626:{c.instructions+=2;NFSU2_TR(0x51f626);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51f628:{NFSU2_TR(0x51f628);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f5a0u);}goto L51f5a0;}
}
B51f62d:L51f62d:{c.instructions+=12;NFSU2_TR(0x51f62d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B51f631:{NFSU2_TR(0x51f631);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f635:{NFSU2_TR(0x51f635);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f639:{NFSU2_TR(0x51f639);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f63f:{NFSU2_TR(0x51f63f);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B51f641:{NFSU2_TR(0x51f641);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f647:{NFSU2_TR(0x51f647);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f64d:{NFSU2_TR(0x51f64d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f651:{NFSU2_TR(0x51f651);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f652:{NFSU2_TR(0x51f652);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B51f656:{NFSU2_TR(0x51f656);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B51f658:{NFSU2_TR(0x51f658);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f65e:L51f65e:{c.instructions+=2;NFSU2_TR(0x51f65e);
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
B51f661:{NFSU2_TR(0x51f661);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f670:L51f670:{c.instructions+=24;NFSU2_TR(0x51f670);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f674:{NFSU2_TR(0x51f674);
__builtin_memmove((R+0),(R+4),4);
}
B51f676:{NFSU2_TR(0x51f676);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f67a:{NFSU2_TR(0x51f67a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f67d:{NFSU2_TR(0x51f67d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f681:{NFSU2_TR(0x51f681);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f684:{NFSU2_TR(0x51f684);
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
B51f686:{NFSU2_TR(0x51f686);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f689:{NFSU2_TR(0x51f689);
w4(R+8,u32(0x3f800000ull));
}
B51f68e:{NFSU2_TR(0x51f68e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f691:{NFSU2_TR(0x51f691);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f694:{NFSU2_TR(0x51f694);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f697:{NFSU2_TR(0x51f697);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51f69a:{NFSU2_TR(0x51f69a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51f69e:{NFSU2_TR(0x51f69e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51f6a1:{NFSU2_TR(0x51f6a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51f6a4:{NFSU2_TR(0x51f6a4);
u8 U[4];
w4(U+0,u32(0x79b4d8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B51f6aa:{NFSU2_TR(0x51f6aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f6ad:{NFSU2_TR(0x51f6ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f6b0:{NFSU2_TR(0x51f6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f6b3:{NFSU2_TR(0x51f6b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f6b6:{NFSU2_TR(0x51f6b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51f6ba:{NFSU2_TR(0x51f6ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51f6bd:{NFSU2_TR(0x51f6bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f6c0:L51f6c0:{c.instructions+=6;NFSU2_TR(0x51f6c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f6c3:{NFSU2_TR(0x51f6c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f6c5:{NFSU2_TR(0x51f6c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f6c6:{NFSU2_TR(0x51f6c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f6c7:{NFSU2_TR(0x51f6c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f6ca:{NFSU2_TR(0x51f6ca);
if(r1(R+518)){{goto L51f6d1;}}
}
B51f6cc:L51f6cc:{c.instructions+=2;NFSU2_TR(0x51f6cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f6cf:{NFSU2_TR(0x51f6cf);
{goto L51f6d3;}
}
B51f6d1:L51f6d1:{c.instructions+=1;NFSU2_TR(0x51f6d1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51f6d3:L51f6d3:{c.instructions+=2;NFSU2_TR(0x51f6d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f6d5:{NFSU2_TR(0x51f6d5);
if(r1(R+518)){{goto L51f6dc;}}
}
B51f6d7:L51f6d7:{c.instructions+=2;NFSU2_TR(0x51f6d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B51f6da:{NFSU2_TR(0x51f6da);
{goto L51f6de;}
}
B51f6dc:L51f6dc:{c.instructions+=1;NFSU2_TR(0x51f6dc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51f6de:L51f6de:{c.instructions+=2;NFSU2_TR(0x51f6de);
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
B51f6e0:{NFSU2_TR(0x51f6e0);
if(r1(R+518)){{goto L51f73e;}}
}
B51f6e2:L51f6e2:{c.instructions+=5;NFSU2_TR(0x51f6e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f6e5:{NFSU2_TR(0x51f6e5);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f6e8:{NFSU2_TR(0x51f6e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f6ea:{NFSU2_TR(0x51f6ea);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f6ed:{NFSU2_TR(0x51f6ed);
if(r1(R+518)){{goto L51f71e;}}
}
B51f6ef:L51f6ef:{c.instructions+=4;NFSU2_TR(0x51f6ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f6f2:{NFSU2_TR(0x51f6f2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B51f6f3:{NFSU2_TR(0x51f6f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f6f6:{NFSU2_TR(0x51f6f6);
if(r1(R+518)){{goto L51f702;}}
}
B51f6f8:L51f6f8:{c.instructions+=2;NFSU2_TR(0x51f6f8);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B51f6fb:{NFSU2_TR(0x51f6fb);
if(r1(R+518)){{goto L51f702;}}
}
B51f6fd:L51f6fd:{c.instructions+=2;NFSU2_TR(0x51f6fd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B51f700:{NFSU2_TR(0x51f700);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51f70a;}}
}
B51f702:L51f702:{c.instructions+=3;NFSU2_TR(0x51f702);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51f705:{NFSU2_TR(0x51f705);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B51f707:{NFSU2_TR(0x51f707);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f70a:L51f70a:{c.instructions+=6;NFSU2_TR(0x51f70a);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f70d:{NFSU2_TR(0x51f70d);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f710:{NFSU2_TR(0x51f710);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f713:{NFSU2_TR(0x51f713);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
}
B51f719:{NFSU2_TR(0x51f719);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f71c:{NFSU2_TR(0x51f71c);
{goto L51f722;}
}
B51f71e:L51f71e:{c.instructions+=2;NFSU2_TR(0x51f71e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51f720:{NFSU2_TR(0x51f720);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51f722:L51f722:{c.instructions+=5;NFSU2_TR(0x51f722);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f725:{NFSU2_TR(0x51f725);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f728:{NFSU2_TR(0x51f728);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f729:{NFSU2_TR(0x51f729);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f72a:{NFSU2_TR(0x51f72a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51f72full));
TAIL_STATIC(0x51d7f0u,51d);
}
B51f72f:L51f72f:{c.instructions+=4;NFSU2_TR(0x51f72f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51f732:{NFSU2_TR(0x51f732);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51f735:{NFSU2_TR(0x51f735);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f737:{NFSU2_TR(0x51f737);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f6d1u);}goto L51f6d1;}}
}
B51f739:L51f739:{c.instructions+=2;NFSU2_TR(0x51f739);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B51f73c:{NFSU2_TR(0x51f73c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f6d3u);}goto L51f6d3;}
}
B51f73e:L51f73e:{c.instructions+=3;NFSU2_TR(0x51f73e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f73f:{NFSU2_TR(0x51f73f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f740:{NFSU2_TR(0x51f740);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f750:L51f750:{c.instructions+=6;NFSU2_TR(0x51f750);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f753:{NFSU2_TR(0x51f753);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f755:{NFSU2_TR(0x51f755);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f756:{NFSU2_TR(0x51f756);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f757:{NFSU2_TR(0x51f757);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f75a:{NFSU2_TR(0x51f75a);
if(r1(R+518)){{goto L51f761;}}
}
B51f75c:L51f75c:{c.instructions+=2;NFSU2_TR(0x51f75c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f75f:{NFSU2_TR(0x51f75f);
{goto L51f763;}
}
B51f761:L51f761:{c.instructions+=1;NFSU2_TR(0x51f761);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51f763:L51f763:{c.instructions+=2;NFSU2_TR(0x51f763);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f765:{NFSU2_TR(0x51f765);
if(r1(R+518)){{goto L51f76c;}}
}
B51f767:L51f767:{c.instructions+=2;NFSU2_TR(0x51f767);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B51f76a:{NFSU2_TR(0x51f76a);
{goto L51f76e;}
}
B51f76c:L51f76c:{c.instructions+=1;NFSU2_TR(0x51f76c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51f76e:L51f76e:{c.instructions+=2;NFSU2_TR(0x51f76e);
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
B51f770:{NFSU2_TR(0x51f770);
if(r1(R+518)){{goto L51f791;}}
}
B51f772:L51f772:{c.instructions+=5;NFSU2_TR(0x51f772);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f775:{NFSU2_TR(0x51f775);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f777:{NFSU2_TR(0x51f777);
u8 U[4];
w4(U+0,u32(0x45d9c800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f77c:{NFSU2_TR(0x51f77c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f77d:{NFSU2_TR(0x51f77d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51f782ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B51f782:L51f782:{c.instructions+=4;NFSU2_TR(0x51f782);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51f785:{NFSU2_TR(0x51f785);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B51f788:{NFSU2_TR(0x51f788);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f78a:{NFSU2_TR(0x51f78a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f761u);}goto L51f761;}}
}
B51f78c:L51f78c:{c.instructions+=2;NFSU2_TR(0x51f78c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B51f78f:{NFSU2_TR(0x51f78f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f763u);}goto L51f763;}
}
B51f791:L51f791:{c.instructions+=3;NFSU2_TR(0x51f791);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f792:{NFSU2_TR(0x51f792);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f793:{NFSU2_TR(0x51f793);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f7a0:L51f7a0:{c.instructions+=4;NFSU2_TR(0x51f7a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f7a3:{NFSU2_TR(0x51f7a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f7a5:{NFSU2_TR(0x51f7a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B51f7a8:{NFSU2_TR(0x51f7a8);
if(r1(R+518)){{goto L51f7af;}}
}
B51f7aa:L51f7aa:{c.instructions+=2;NFSU2_TR(0x51f7aa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B51f7ad:{NFSU2_TR(0x51f7ad);
{goto L51f7b1;}
}
B51f7af:L51f7af:{c.instructions+=1;NFSU2_TR(0x51f7af);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51f7b1:L51f7b1:{c.instructions+=2;NFSU2_TR(0x51f7b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f7b2:{NFSU2_TR(0x51f7b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51f7b6:L51f7b6:{c.instructions+=2;NFSU2_TR(0x51f7b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f7b8:{NFSU2_TR(0x51f7b8);
if(r1(R+518)){{goto L51f7bf;}}
}
B51f7ba:L51f7ba:{c.instructions+=2;NFSU2_TR(0x51f7ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B51f7bd:{NFSU2_TR(0x51f7bd);
{goto L51f7c1;}
}
B51f7bf:L51f7bf:{c.instructions+=1;NFSU2_TR(0x51f7bf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51f7c1:L51f7c1:{c.instructions+=2;NFSU2_TR(0x51f7c1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51f7c3:{NFSU2_TR(0x51f7c3);
if(r1(R+518)){{goto L51f7da;}}
}
B51f7c5:L51f7c5:{c.instructions+=2;NFSU2_TR(0x51f7c5);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B51f7c8:{NFSU2_TR(0x51f7c8);
if(r1(R+518)){{goto L51f7dc;}}
}
B51f7ca:L51f7ca:{c.instructions+=3;NFSU2_TR(0x51f7ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f7cd:{NFSU2_TR(0x51f7cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f7cf:{NFSU2_TR(0x51f7cf);
if(r1(R+518)){{goto L51f7d6;}}
}
B51f7d1:L51f7d1:{c.instructions+=2;NFSU2_TR(0x51f7d1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B51f7d4:{NFSU2_TR(0x51f7d4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f7b6u);}goto L51f7b6;}
}
B51f7d6:L51f7d6:{c.instructions+=2;NFSU2_TR(0x51f7d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51f7d8:{NFSU2_TR(0x51f7d8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f7b6u);}goto L51f7b6;}
}
B51f7da:L51f7da:{c.instructions+=1;NFSU2_TR(0x51f7da);
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
B51f7dc:L51f7dc:{c.instructions+=2;NFSU2_TR(0x51f7dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f7dd:{NFSU2_TR(0x51f7dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f7e0:L51f7e0:{c.instructions+=5;NFSU2_TR(0x51f7e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f7e3:{NFSU2_TR(0x51f7e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f7e4:{NFSU2_TR(0x51f7e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f7e5:{NFSU2_TR(0x51f7e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f7e8:{NFSU2_TR(0x51f7e8);
w4(R+0,u32(0x1ull));
}
B51f7ed:L51f7ed:{c.instructions+=2;NFSU2_TR(0x51f7ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f7ef:{NFSU2_TR(0x51f7ef);
if(r1(R+518)){{goto L51f7f6;}}
}
B51f7f1:L51f7f1:{c.instructions+=2;NFSU2_TR(0x51f7f1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
}
B51f7f4:{NFSU2_TR(0x51f7f4);
{goto L51f7f8;}
}
B51f7f6:L51f7f6:{c.instructions+=1;NFSU2_TR(0x51f7f6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51f7f8:L51f7f8:{c.instructions+=2;NFSU2_TR(0x51f7f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f7fa:{NFSU2_TR(0x51f7fa);
if(r1(R+518)){{goto L51f801;}}
}
B51f7fc:L51f7fc:{c.instructions+=2;NFSU2_TR(0x51f7fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f7ff:{NFSU2_TR(0x51f7ff);
{goto L51f803;}
}
B51f801:L51f801:{c.instructions+=1;NFSU2_TR(0x51f801);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51f803:L51f803:{c.instructions+=2;NFSU2_TR(0x51f803);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51f805:{NFSU2_TR(0x51f805);
if(r1(R+518)){{goto L51f812;}}
}
B51f807:L51f807:{c.instructions+=2;NFSU2_TR(0x51f807);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B51f80a:{NFSU2_TR(0x51f80a);
if(r1(R+518)){{goto L51f814;}}
}
B51f80c:L51f80c:{c.instructions+=3;NFSU2_TR(0x51f80c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f80f:{NFSU2_TR(0x51f80f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51f810:{NFSU2_TR(0x51f810);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f7edu);}goto L51f7ed;}
}
B51f812:L51f812:{c.instructions+=1;NFSU2_TR(0x51f812);
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
B51f814:L51f814:{c.instructions+=3;NFSU2_TR(0x51f814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f815:{NFSU2_TR(0x51f815);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f816:{NFSU2_TR(0x51f816);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f820:L51f820:{c.instructions+=4;NFSU2_TR(0x51f820);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f821:{NFSU2_TR(0x51f821);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51f825:{NFSU2_TR(0x51f825);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f827:{NFSU2_TR(0x51f827);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51f830;}}
}
B51f829:L51f829:{c.instructions+=3;NFSU2_TR(0x51f829);
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
B51f82c:{NFSU2_TR(0x51f82c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f82d:{NFSU2_TR(0x51f82d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f830:L51f830:{c.instructions+=4;NFSU2_TR(0x51f830);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f831:{NFSU2_TR(0x51f831);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f834:{NFSU2_TR(0x51f834);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51f836:{NFSU2_TR(0x51f836);
w4(R+0,u32(0x1ull));
}
B51f83b:L51f83b:{c.instructions+=2;NFSU2_TR(0x51f83b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f83d:{NFSU2_TR(0x51f83d);
if(r1(R+518)){{goto L51f844;}}
}
B51f83f:L51f83f:{c.instructions+=2;NFSU2_TR(0x51f83f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B51f842:{NFSU2_TR(0x51f842);
{goto L51f846;}
}
B51f844:L51f844:{c.instructions+=1;NFSU2_TR(0x51f844);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51f846:L51f846:{c.instructions+=2;NFSU2_TR(0x51f846);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f848:{NFSU2_TR(0x51f848);
if(r1(R+518)){{goto L51f84f;}}
}
B51f84a:L51f84a:{c.instructions+=2;NFSU2_TR(0x51f84a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B51f84d:{NFSU2_TR(0x51f84d);
{goto L51f851;}
}
B51f84f:L51f84f:{c.instructions+=1;NFSU2_TR(0x51f84f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51f851:L51f851:{c.instructions+=2;NFSU2_TR(0x51f851);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51f853:{NFSU2_TR(0x51f853);
if(r1(R+518)){{goto L51f85f;}}
}
B51f855:L51f855:{c.instructions+=2;NFSU2_TR(0x51f855);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B51f857:{NFSU2_TR(0x51f857);
if(r1(R+518)){{goto L51f862;}}
}
B51f859:L51f859:{c.instructions+=3;NFSU2_TR(0x51f859);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f85c:{NFSU2_TR(0x51f85c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51f85d:{NFSU2_TR(0x51f85d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f83bu);}goto L51f83b;}
}
B51f85f:L51f85f:{c.instructions+=1;NFSU2_TR(0x51f85f);
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
B51f862:L51f862:{c.instructions+=3;NFSU2_TR(0x51f862);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f863:{NFSU2_TR(0x51f863);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f864:{NFSU2_TR(0x51f864);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f870:L51f870:{c.instructions+=9;NFSU2_TR(0x51f870);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B51f873:{NFSU2_TR(0x51f873);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f874:{NFSU2_TR(0x51f874);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f875:{NFSU2_TR(0x51f875);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f876:{NFSU2_TR(0x51f876);
__builtin_memmove((R+28),(R+4),4);
}
B51f878:{NFSU2_TR(0x51f878);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51f87b:{NFSU2_TR(0x51f87b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f87d:{NFSU2_TR(0x51f87d);
__builtin_memmove((R+4),(R+12),4);
}
B51f87f:{NFSU2_TR(0x51f87f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51f884ull));
TAIL_STATIC(0x43be80u,43b);
}
B51f884:L51f884:{c.instructions+=6;NFSU2_TR(0x51f884);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f888:{NFSU2_TR(0x51f888);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51f88c:{NFSU2_TR(0x51f88c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51f88e:{NFSU2_TR(0x51f88e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f890:{NFSU2_TR(0x51f890);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f894:{NFSU2_TR(0x51f894);
if(r1(R+518)){{goto L51f89b;}}
}
B51f896:L51f896:{c.instructions+=2;NFSU2_TR(0x51f896);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B51f899:{NFSU2_TR(0x51f899);
{goto L51f89d;}
}
B51f89b:L51f89b:{c.instructions+=1;NFSU2_TR(0x51f89b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51f89d:L51f89d:{c.instructions+=6;NFSU2_TR(0x51f89d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f89f:{NFSU2_TR(0x51f89f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f8a2:{NFSU2_TR(0x51f8a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f8a5:{NFSU2_TR(0x51f8a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f8a8:{NFSU2_TR(0x51f8a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f8ac:{NFSU2_TR(0x51f8ac);
if(r1(R+518)){{goto L51f8b3;}}
}
B51f8ae:L51f8ae:{c.instructions+=2;NFSU2_TR(0x51f8ae);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B51f8b1:{NFSU2_TR(0x51f8b1);
{goto L51f8b5;}
}
B51f8b3:L51f8b3:{c.instructions+=1;NFSU2_TR(0x51f8b3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51f8b5:L51f8b5:{c.instructions+=13;NFSU2_TR(0x51f8b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f8b8:{NFSU2_TR(0x51f8b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f8bb:{NFSU2_TR(0x51f8bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f8be:{NFSU2_TR(0x51f8be);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51f8c2:{NFSU2_TR(0x51f8c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f8c3:{NFSU2_TR(0x51f8c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51f8c7:{NFSU2_TR(0x51f8c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51f8cb:{NFSU2_TR(0x51f8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51f8ce:{NFSU2_TR(0x51f8ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f8cf:{NFSU2_TR(0x51f8cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f8d0:{NFSU2_TR(0x51f8d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51f8d8:{NFSU2_TR(0x51f8d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51f8e0:{NFSU2_TR(0x51f8e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51f8e5ull));
TAIL_STATIC(0x51d620u,51d);
}
B51f8e5:L51f8e5:{c.instructions+=21;NFSU2_TR(0x51f8e5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f8e9:{NFSU2_TR(0x51f8e9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B51f8ef:{NFSU2_TR(0x51f8ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51f8f1:{NFSU2_TR(0x51f8f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B51f8f4:{NFSU2_TR(0x51f8f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f8f6:{NFSU2_TR(0x51f8f6);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51f8f9:{NFSU2_TR(0x51f8f9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f8fd:{NFSU2_TR(0x51f8fd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51f901:{NFSU2_TR(0x51f901);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B51f903:{NFSU2_TR(0x51f903);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51f909:{NFSU2_TR(0x51f909);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B51f90d:{NFSU2_TR(0x51f90d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f911:{NFSU2_TR(0x51f911);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f915:{NFSU2_TR(0x51f915);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51f919:{NFSU2_TR(0x51f919);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51f921:{NFSU2_TR(0x51f921);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B51f923:{NFSU2_TR(0x51f923);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51f929:{NFSU2_TR(0x51f929);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B51f92d:{NFSU2_TR(0x51f92d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f931:{NFSU2_TR(0x51f931);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51f933:{NFSU2_TR(0x51f933);
if(r1(R+518)){{goto L51f93a;}}
}
B51f935:L51f935:{c.instructions+=2;NFSU2_TR(0x51f935);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f938:{NFSU2_TR(0x51f938);
{goto L51f940;}
}
B51f93a:L51f93a:{c.instructions+=2;NFSU2_TR(0x51f93a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51f93c:{NFSU2_TR(0x51f93c);
__builtin_memmove((R+16),(R+16),4);
}
B51f940:L51f940:{c.instructions+=2;NFSU2_TR(0x51f940);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f942:{NFSU2_TR(0x51f942);
if(r1(R+518)){{goto L51f949;}}
}
B51f944:L51f944:{c.instructions+=2;NFSU2_TR(0x51f944);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B51f947:{NFSU2_TR(0x51f947);
{goto L51f94b;}
}
B51f949:L51f949:{c.instructions+=1;NFSU2_TR(0x51f949);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51f94b:L51f94b:{c.instructions+=2;NFSU2_TR(0x51f94b);
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
B51f94d:{NFSU2_TR(0x51f94d);
if(r1(R+518)){{goto L51f9d4;}}
}
B51f953:L51f953:{c.instructions+=5;NFSU2_TR(0x51f953);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B51f956:{NFSU2_TR(0x51f956);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f95a:{NFSU2_TR(0x51f95a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B51f95d:{NFSU2_TR(0x51f95d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51f95f:{NFSU2_TR(0x51f95f);
if(r1(R+518)){{goto L51f987;}}
}
B51f961:L51f961:{c.instructions+=11;NFSU2_TR(0x51f961);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51f967:{NFSU2_TR(0x51f967);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51f96a:{NFSU2_TR(0x51f96a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B51f96e:{NFSU2_TR(0x51f96e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f972:{NFSU2_TR(0x51f972);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f976:{NFSU2_TR(0x51f976);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51f979:{NFSU2_TR(0x51f979);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51f97d:{NFSU2_TR(0x51f97d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51f981:{NFSU2_TR(0x51f981);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f984:{NFSU2_TR(0x51f984);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f985:{NFSU2_TR(0x51f985);
{goto L51f9ab;}
}
B51f987:L51f987:{c.instructions+=10;NFSU2_TR(0x51f987);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51f98a:{NFSU2_TR(0x51f98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f98d:{NFSU2_TR(0x51f98d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51f991:{NFSU2_TR(0x51f991);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51f995:{NFSU2_TR(0x51f995);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f999:{NFSU2_TR(0x51f999);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f99d:{NFSU2_TR(0x51f99d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51f9a3:{NFSU2_TR(0x51f9a3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B51f9a7:{NFSU2_TR(0x51f9a7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f9aa:{NFSU2_TR(0x51f9aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f9ab:L51f9ab:{c.instructions+=1;NFSU2_TR(0x51f9ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51f9b0ull));
TAIL_STATIC(0x51d380u,51d);
}
B51f9b0:L51f9b0:{c.instructions+=7;NFSU2_TR(0x51f9b0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51f9b4:{NFSU2_TR(0x51f9b4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51f9ba:{NFSU2_TR(0x51f9ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51f9bd:{NFSU2_TR(0x51f9bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B51f9c0:{NFSU2_TR(0x51f9c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51f9c2:{NFSU2_TR(0x51f9c2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51f9c6:{NFSU2_TR(0x51f9c6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f93au);}goto L51f93a;}}
}
B51f9cc:L51f9cc:{c.instructions+=2;NFSU2_TR(0x51f9cc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B51f9cf:{NFSU2_TR(0x51f9cf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51f940u);}goto L51f940;}
}
B51f9d4:L51f9d4:{c.instructions+=5;NFSU2_TR(0x51f9d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51f9d7:{NFSU2_TR(0x51f9d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51f9d9:{NFSU2_TR(0x51f9d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f9da:{NFSU2_TR(0x51f9da);
__builtin_memmove((R+4),(R+28),4);
}
B51f9dc:{NFSU2_TR(0x51f9dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51f9dfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51f9df:L51f9df:{c.instructions+=5;NFSU2_TR(0x51f9df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51f9e0:{NFSU2_TR(0x51f9e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51f9e1:{NFSU2_TR(0x51f9e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51f9e2:{NFSU2_TR(0x51f9e2);
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
B51f9e5:{NFSU2_TR(0x51f9e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51f9f0:L51f9f0:{c.instructions+=9;NFSU2_TR(0x51f9f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f9f1:{NFSU2_TR(0x51f9f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51f9f5:{NFSU2_TR(0x51f9f5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51f9f8:{NFSU2_TR(0x51f9f8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f9f9:{NFSU2_TR(0x51f9f9);
__builtin_memmove((R+24),(R+4),4);
}
B51f9fb:{NFSU2_TR(0x51f9fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51f9fc:{NFSU2_TR(0x51f9fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51f9ff:{NFSU2_TR(0x51f9ff);
__builtin_memmove((R+0),(R+28),4);
}
B51fa01:{NFSU2_TR(0x51fa01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51fa42;}}
}
B51fa03:L51fa03:{c.instructions+=3;NFSU2_TR(0x51fa03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51fa06:{NFSU2_TR(0x51fa06);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fa08:{NFSU2_TR(0x51fa08);
if(r1(R+518)){{goto L51fa0f;}}
}
B51fa0a:L51fa0a:{c.instructions+=2;NFSU2_TR(0x51fa0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B51fa0d:{NFSU2_TR(0x51fa0d);
{goto L51fa11;}
}
B51fa0f:L51fa0f:{c.instructions+=1;NFSU2_TR(0x51fa0f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51fa11:L51fa11:{c.instructions+=2;NFSU2_TR(0x51fa11);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51fa13:{NFSU2_TR(0x51fa13);
if(r1(R+518)){{goto L51fa8b;}}
}
B51fa15:L51fa15:{c.instructions+=3;NFSU2_TR(0x51fa15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fa18:{NFSU2_TR(0x51fa18);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fa1a:{NFSU2_TR(0x51fa1a);
if(r1(R+518)){{goto L51fa21;}}
}
B51fa1c:L51fa1c:{c.instructions+=2;NFSU2_TR(0x51fa1c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B51fa1f:{NFSU2_TR(0x51fa1f);
{goto L51fa23;}
}
B51fa21:L51fa21:{c.instructions+=1;NFSU2_TR(0x51fa21);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51fa23:L51fa23:{c.instructions+=3;NFSU2_TR(0x51fa23);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51fa26:{NFSU2_TR(0x51fa26);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51fa28:{NFSU2_TR(0x51fa28);
if(r1(R+518)){{goto L51fa99;}}
}
B51fa2a:L51fa2a:{c.instructions+=3;NFSU2_TR(0x51fa2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51fa2d:{NFSU2_TR(0x51fa2d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51fa2f:{NFSU2_TR(0x51fa2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51fa8b;}}
}
B51fa31:L51fa31:{c.instructions+=2;NFSU2_TR(0x51fa31);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fa33:{NFSU2_TR(0x51fa33);
if(r1(R+518)){{goto L51fa3a;}}
}
B51fa35:L51fa35:{c.instructions+=2;NFSU2_TR(0x51fa35);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B51fa38:{NFSU2_TR(0x51fa38);
{goto L51fa3c;}
}
B51fa3a:L51fa3a:{c.instructions+=1;NFSU2_TR(0x51fa3a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51fa3c:L51fa3c:{c.instructions+=2;NFSU2_TR(0x51fa3c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51fa3e:{NFSU2_TR(0x51fa3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51fa15u);}goto L51fa15;}}
}
B51fa40:L51fa40:{c.instructions+=1;NFSU2_TR(0x51fa40);
{goto L51fa8b;}
}
B51fa42:L51fa42:{c.instructions+=2;NFSU2_TR(0x51fa42);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51fa45:{NFSU2_TR(0x51fa45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51fa8b;}}
}
B51fa47:L51fa47:{c.instructions+=3;NFSU2_TR(0x51fa47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51fa4a:{NFSU2_TR(0x51fa4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fa4c:{NFSU2_TR(0x51fa4c);
if(r1(R+518)){{goto L51fa53;}}
}
B51fa4e:L51fa4e:{c.instructions+=2;NFSU2_TR(0x51fa4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B51fa51:{NFSU2_TR(0x51fa51);
{goto L51fa55;}
}
B51fa53:L51fa53:{c.instructions+=1;NFSU2_TR(0x51fa53);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51fa55:L51fa55:{c.instructions+=2;NFSU2_TR(0x51fa55);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51fa57:{NFSU2_TR(0x51fa57);
if(r1(R+518)){{goto L51fa8b;}}
}
B51fa59:L51fa59:{c.instructions+=1;NFSU2_TR(0x51fa59);
__builtin_memmove((R+16),(R+16),4);
}
B51fa60:L51fa60:{c.instructions+=3;NFSU2_TR(0x51fa60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fa63:{NFSU2_TR(0x51fa63);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fa65:{NFSU2_TR(0x51fa65);
if(r1(R+518)){{goto L51fa6c;}}
}
B51fa67:L51fa67:{c.instructions+=2;NFSU2_TR(0x51fa67);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B51fa6a:{NFSU2_TR(0x51fa6a);
{goto L51fa6e;}
}
B51fa6c:L51fa6c:{c.instructions+=1;NFSU2_TR(0x51fa6c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51fa6e:L51fa6e:{c.instructions+=3;NFSU2_TR(0x51fa6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51fa71:{NFSU2_TR(0x51fa71);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51fa73:{NFSU2_TR(0x51fa73);
if(r1(R+518)){{goto L51fa99;}}
}
B51fa75:L51fa75:{c.instructions+=3;NFSU2_TR(0x51fa75);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51fa78:{NFSU2_TR(0x51fa78);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51fa7a:{NFSU2_TR(0x51fa7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51fa8b;}}
}
B51fa7c:L51fa7c:{c.instructions+=2;NFSU2_TR(0x51fa7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fa7e:{NFSU2_TR(0x51fa7e);
if(r1(R+518)){{goto L51fa85;}}
}
B51fa80:L51fa80:{c.instructions+=2;NFSU2_TR(0x51fa80);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B51fa83:{NFSU2_TR(0x51fa83);
{goto L51fa87;}
}
B51fa85:L51fa85:{c.instructions+=1;NFSU2_TR(0x51fa85);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51fa87:L51fa87:{c.instructions+=2;NFSU2_TR(0x51fa87);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51fa89:{NFSU2_TR(0x51fa89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51fa60u);}goto L51fa60;}}
}
B51fa8b:L51fa8b:{c.instructions+=3;NFSU2_TR(0x51fa8b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51fa8e:{NFSU2_TR(0x51fa8e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51fa90:{NFSU2_TR(0x51fa90);
if(r1(R+518)){{goto L51fa99;}}
}
B51fa92:L51fa92:{c.instructions+=3;NFSU2_TR(0x51fa92);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51fa95:{NFSU2_TR(0x51fa95);
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
B51fa97:{NFSU2_TR(0x51fa97);
if(r1(R+518)){{goto L51faac;}}
}
B51fa99:L51fa99:{c.instructions+=2;NFSU2_TR(0x51fa99);
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
B51fa9b:{NFSU2_TR(0x51fa9b);
if(r1(R+518)){{goto L51faac;}}
}
B51fa9d:L51fa9d:{c.instructions+=4;NFSU2_TR(0x51fa9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51fa9f:{NFSU2_TR(0x51fa9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51faa0:{NFSU2_TR(0x51faa0);
__builtin_memmove((R+4),(R+24),4);
}
B51faa2:{NFSU2_TR(0x51faa2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51faa5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51faa5:L51faa5:{c.instructions+=2;NFSU2_TR(0x51faa5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51faa9:{NFSU2_TR(0x51faa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51faac:L51faac:{c.instructions+=4;NFSU2_TR(0x51faac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51faad:{NFSU2_TR(0x51faad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51faae:{NFSU2_TR(0x51faae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51faaf:{NFSU2_TR(0x51faaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51fac0:L51fac0:{c.instructions+=9;NFSU2_TR(0x51fac0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fac1:{NFSU2_TR(0x51fac1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51fac5:{NFSU2_TR(0x51fac5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51fac8:{NFSU2_TR(0x51fac8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fac9:{NFSU2_TR(0x51fac9);
__builtin_memmove((R+24),(R+4),4);
}
B51facb:{NFSU2_TR(0x51facb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51facc:{NFSU2_TR(0x51facc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51facf:{NFSU2_TR(0x51facf);
__builtin_memmove((R+0),(R+28),4);
}
B51fad1:{NFSU2_TR(0x51fad1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51fb08;}}
}
B51fad3:L51fad3:{c.instructions+=1;NFSU2_TR(0x51fad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51fad6:L51fad6:{c.instructions+=2;NFSU2_TR(0x51fad6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fad8:{NFSU2_TR(0x51fad8);
if(r1(R+518)){{goto L51fadf;}}
}
B51fada:L51fada:{c.instructions+=2;NFSU2_TR(0x51fada);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B51fadd:{NFSU2_TR(0x51fadd);
{goto L51fae1;}
}
B51fadf:L51fadf:{c.instructions+=1;NFSU2_TR(0x51fadf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51fae1:L51fae1:{c.instructions+=2;NFSU2_TR(0x51fae1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51fae3:{NFSU2_TR(0x51fae3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51faea;}}
}
B51fae5:L51fae5:{c.instructions+=2;NFSU2_TR(0x51fae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fae8:{NFSU2_TR(0x51fae8);
{goto L51faed;}
}
B51faea:L51faea:{c.instructions+=1;NFSU2_TR(0x51faea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51faed:L51faed:{c.instructions+=2;NFSU2_TR(0x51faed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51faef:{NFSU2_TR(0x51faef);
if(r1(R+518)){{goto L51faf6;}}
}
B51faf1:L51faf1:{c.instructions+=2;NFSU2_TR(0x51faf1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B51faf4:{NFSU2_TR(0x51faf4);
{goto L51faf8;}
}
B51faf6:L51faf6:{c.instructions+=1;NFSU2_TR(0x51faf6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51faf8:L51faf8:{c.instructions+=3;NFSU2_TR(0x51faf8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51fafb:{NFSU2_TR(0x51fafb);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51fafd:{NFSU2_TR(0x51fafd);
if(r1(R+518)){{goto L51fb4e;}}
}
B51faff:L51faff:{c.instructions+=3;NFSU2_TR(0x51faff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51fb02:{NFSU2_TR(0x51fb02);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51fb04:{NFSU2_TR(0x51fb04);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51fad6u);}goto L51fad6;}}
}
B51fb06:L51fb06:{c.instructions+=1;NFSU2_TR(0x51fb06);
{goto L51fb40;}
}
B51fb08:L51fb08:{c.instructions+=2;NFSU2_TR(0x51fb08);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51fb0b:{NFSU2_TR(0x51fb0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51fb40;}}
}
B51fb0d:L51fb0d:{c.instructions+=1;NFSU2_TR(0x51fb0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51fb10:L51fb10:{c.instructions+=2;NFSU2_TR(0x51fb10);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fb12:{NFSU2_TR(0x51fb12);
if(r1(R+518)){{goto L51fb19;}}
}
B51fb14:L51fb14:{c.instructions+=2;NFSU2_TR(0x51fb14);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B51fb17:{NFSU2_TR(0x51fb17);
{goto L51fb1b;}
}
B51fb19:L51fb19:{c.instructions+=1;NFSU2_TR(0x51fb19);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51fb1b:L51fb1b:{c.instructions+=2;NFSU2_TR(0x51fb1b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51fb1d:{NFSU2_TR(0x51fb1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51fb24;}}
}
B51fb1f:L51fb1f:{c.instructions+=2;NFSU2_TR(0x51fb1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fb22:{NFSU2_TR(0x51fb22);
{goto L51fb27;}
}
B51fb24:L51fb24:{c.instructions+=1;NFSU2_TR(0x51fb24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fb27:L51fb27:{c.instructions+=2;NFSU2_TR(0x51fb27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fb29:{NFSU2_TR(0x51fb29);
if(r1(R+518)){{goto L51fb30;}}
}
B51fb2b:L51fb2b:{c.instructions+=2;NFSU2_TR(0x51fb2b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B51fb2e:{NFSU2_TR(0x51fb2e);
{goto L51fb32;}
}
B51fb30:L51fb30:{c.instructions+=1;NFSU2_TR(0x51fb30);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51fb32:L51fb32:{c.instructions+=3;NFSU2_TR(0x51fb32);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51fb35:{NFSU2_TR(0x51fb35);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51fb37:{NFSU2_TR(0x51fb37);
if(r1(R+518)){{goto L51fb4e;}}
}
B51fb39:L51fb39:{c.instructions+=3;NFSU2_TR(0x51fb39);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51fb3c:{NFSU2_TR(0x51fb3c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51fb3e:{NFSU2_TR(0x51fb3e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51fb10u);}goto L51fb10;}}
}
B51fb40:L51fb40:{c.instructions+=3;NFSU2_TR(0x51fb40);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51fb43:{NFSU2_TR(0x51fb43);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51fb45:{NFSU2_TR(0x51fb45);
if(r1(R+518)){{goto L51fb4e;}}
}
B51fb47:L51fb47:{c.instructions+=3;NFSU2_TR(0x51fb47);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51fb4a:{NFSU2_TR(0x51fb4a);
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
B51fb4c:{NFSU2_TR(0x51fb4c);
if(r1(R+518)){{goto L51fb61;}}
}
B51fb4e:L51fb4e:{c.instructions+=2;NFSU2_TR(0x51fb4e);
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
B51fb50:{NFSU2_TR(0x51fb50);
if(r1(R+518)){{goto L51fb61;}}
}
B51fb52:L51fb52:{c.instructions+=4;NFSU2_TR(0x51fb52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51fb54:{NFSU2_TR(0x51fb54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fb55:{NFSU2_TR(0x51fb55);
__builtin_memmove((R+4),(R+24),4);
}
B51fb57:{NFSU2_TR(0x51fb57);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51fb5aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51fb5a:L51fb5a:{c.instructions+=2;NFSU2_TR(0x51fb5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51fb5e:{NFSU2_TR(0x51fb5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51fb61:L51fb61:{c.instructions+=4;NFSU2_TR(0x51fb61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51fb62:{NFSU2_TR(0x51fb62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51fb63:{NFSU2_TR(0x51fb63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51fb64:{NFSU2_TR(0x51fb64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51fb70:L51fb70:{c.instructions+=12;NFSU2_TR(0x51fb70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fb71:{NFSU2_TR(0x51fb71);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51fb75:{NFSU2_TR(0x51fb75);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fb76:{NFSU2_TR(0x51fb76);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B51fb7a:{NFSU2_TR(0x51fb7a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2eull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51fb7e:{NFSU2_TR(0x51fb7e);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+20)),r4(U+0));
}
B51fb85:{NFSU2_TR(0x51fb85);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+12)),r4(U+0));
}
B51fb8b:{NFSU2_TR(0x51fb8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fb8e:{NFSU2_TR(0x51fb8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fb90:{NFSU2_TR(0x51fb90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fb91:{NFSU2_TR(0x51fb91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fb92:{NFSU2_TR(0x51fb92);
if(r1(R+518)){{goto L51fb99;}}
}
B51fb94:L51fb94:{c.instructions+=2;NFSU2_TR(0x51fb94);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B51fb97:{NFSU2_TR(0x51fb97);
{goto L51fba0;}
}
B51fb99:L51fb99:{c.instructions+=2;NFSU2_TR(0x51fb99);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51fb9b:{NFSU2_TR(0x51fb9b);
{goto L51fba0;}
}
B51fba0:L51fba0:{c.instructions+=3;NFSU2_TR(0x51fba0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B51fba3:{NFSU2_TR(0x51fba3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fba5:{NFSU2_TR(0x51fba5);
if(r1(R+518)){{goto L51fbac;}}
}
B51fba7:L51fba7:{c.instructions+=2;NFSU2_TR(0x51fba7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B51fbaa:{NFSU2_TR(0x51fbaa);
{goto L51fbae;}
}
B51fbac:L51fbac:{c.instructions+=1;NFSU2_TR(0x51fbac);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51fbae:L51fbae:{c.instructions+=2;NFSU2_TR(0x51fbae);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B51fbb0:{NFSU2_TR(0x51fbb0);
if(r1(R+518)){{goto L51fd04;}}
}
B51fbb6:L51fbb6:{c.instructions+=4;NFSU2_TR(0x51fbb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B51fbb9:{NFSU2_TR(0x51fbb9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51fbbf:{NFSU2_TR(0x51fbbf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51fbc1:{NFSU2_TR(0x51fbc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51fcbd;}}
}
B51fbc7:L51fbc7:{c.instructions+=15;NFSU2_TR(0x51fbc7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51fbc9:{NFSU2_TR(0x51fbc9);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51fbcc:{NFSU2_TR(0x51fbcc);
{u32 ea_=u32(r4(R+8)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B51fbcf:{NFSU2_TR(0x51fbcf);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51fbd3:{NFSU2_TR(0x51fbd3);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51fbd9:{NFSU2_TR(0x51fbd9);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51fbdf:{NFSU2_TR(0x51fbdf);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B51fbe2:{NFSU2_TR(0x51fbe2);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B51fbe5:{NFSU2_TR(0x51fbe5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51fbe9:{NFSU2_TR(0x51fbe9);
{u32 ea_=u32(r4(R+8)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51fbec:{NFSU2_TR(0x51fbec);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51fbf0:{NFSU2_TR(0x51fbf0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51fbf6:{NFSU2_TR(0x51fbf6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51fbf8:{NFSU2_TR(0x51fbf8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51fbfb:{NFSU2_TR(0x51fbfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51fc07;}}
}
B51fbfd:L51fbfd:{c.instructions+=4;NFSU2_TR(0x51fbfd);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B51fc00:{NFSU2_TR(0x51fc00);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51fc02:{NFSU2_TR(0x51fc02);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51fc05:{NFSU2_TR(0x51fc05);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L51fc22;}}
}
B51fc07:L51fc07:{c.instructions+=5;NFSU2_TR(0x51fc07);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51fc0b:{NFSU2_TR(0x51fc0b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51fc11:{NFSU2_TR(0x51fc11);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51fc13:{NFSU2_TR(0x51fc13);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51fc16:{NFSU2_TR(0x51fc16);
if(r1(R+514)){{goto L51fc70;}}
}
B51fc18:L51fc18:{c.instructions+=4;NFSU2_TR(0x51fc18);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B51fc1b:{NFSU2_TR(0x51fc1b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51fc1d:{NFSU2_TR(0x51fc1d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51fc20:{NFSU2_TR(0x51fc20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51fc70;}}
}
B51fc22:L51fc22:{c.instructions+=7;NFSU2_TR(0x51fc22);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fc25:{NFSU2_TR(0x51fc25);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B51fc27:{NFSU2_TR(0x51fc27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fc29:{NFSU2_TR(0x51fc29);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51fc2c:{NFSU2_TR(0x51fc2c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B51fc2e:{NFSU2_TR(0x51fc2e);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51fc31:{NFSU2_TR(0x51fc31);
if(r1(R+518)){{goto L51fc66;}}
}
B51fc33:L51fc33:{c.instructions+=4;NFSU2_TR(0x51fc33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51fc36:{NFSU2_TR(0x51fc36);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B51fc37:{NFSU2_TR(0x51fc37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51fc3a:{NFSU2_TR(0x51fc3a);
if(r1(R+518)){{goto L51fc46;}}
}
B51fc3c:L51fc3c:{c.instructions+=2;NFSU2_TR(0x51fc3c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B51fc3f:{NFSU2_TR(0x51fc3f);
if(r1(R+518)){{goto L51fc46;}}
}
B51fc41:L51fc41:{c.instructions+=2;NFSU2_TR(0x51fc41);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B51fc44:{NFSU2_TR(0x51fc44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51fc4e;}}
}
B51fc46:L51fc46:{c.instructions+=3;NFSU2_TR(0x51fc46);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51fc49:{NFSU2_TR(0x51fc49);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B51fc4b:{NFSU2_TR(0x51fc4b);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51fc4e:L51fc4e:{c.instructions+=7;NFSU2_TR(0x51fc4e);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51fc51:{NFSU2_TR(0x51fc51);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51fc54:{NFSU2_TR(0x51fc54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51fc57:{NFSU2_TR(0x51fc57);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x400000ull))));
}
B51fc5d:{NFSU2_TR(0x51fc5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51fc60:{NFSU2_TR(0x51fc60);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51fc64:{NFSU2_TR(0x51fc64);
{goto L51fcbd;}
}
B51fc66:L51fc66:{c.instructions+=4;NFSU2_TR(0x51fc66);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51fc68:{NFSU2_TR(0x51fc68);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51fc6c:{NFSU2_TR(0x51fc6c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51fc6e:{NFSU2_TR(0x51fc6e);
{goto L51fcbd;}
}
B51fc70:L51fc70:{c.instructions+=7;NFSU2_TR(0x51fc70);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51fc73:{NFSU2_TR(0x51fc73);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fc76:{NFSU2_TR(0x51fc76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fc78:{NFSU2_TR(0x51fc78);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51fc7b:{NFSU2_TR(0x51fc7b);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51fc7e:{NFSU2_TR(0x51fc7e);
{u32 ea_=u32(r4(R+8)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51fc81:{NFSU2_TR(0x51fc81);
if(r1(R+518)){{goto L51fcb2;}}
}
B51fc83:L51fc83:{c.instructions+=4;NFSU2_TR(0x51fc83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51fc86:{NFSU2_TR(0x51fc86);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B51fc87:{NFSU2_TR(0x51fc87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51fc8a:{NFSU2_TR(0x51fc8a);
if(r1(R+518)){{goto L51fc96;}}
}
B51fc8c:L51fc8c:{c.instructions+=2;NFSU2_TR(0x51fc8c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B51fc8f:{NFSU2_TR(0x51fc8f);
if(r1(R+518)){{goto L51fc96;}}
}
B51fc91:L51fc91:{c.instructions+=2;NFSU2_TR(0x51fc91);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B51fc94:{NFSU2_TR(0x51fc94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51fc9e;}}
}
B51fc96:L51fc96:{c.instructions+=3;NFSU2_TR(0x51fc96);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51fc99:{NFSU2_TR(0x51fc99);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B51fc9b:{NFSU2_TR(0x51fc9b);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51fc9e:L51fc9e:{c.instructions+=6;NFSU2_TR(0x51fc9e);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51fca1:{NFSU2_TR(0x51fca1);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51fca4:{NFSU2_TR(0x51fca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51fca7:{NFSU2_TR(0x51fca7);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x400000ull))));
}
B51fcad:{NFSU2_TR(0x51fcad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51fcb0:{NFSU2_TR(0x51fcb0);
{goto L51fcb6;}
}
B51fcb2:L51fcb2:{c.instructions+=2;NFSU2_TR(0x51fcb2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51fcb4:{NFSU2_TR(0x51fcb4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51fcb6:L51fcb6:{c.instructions+=2;NFSU2_TR(0x51fcb6);
{u32 ea_=u32(r4(R+8)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51fcb9:{NFSU2_TR(0x51fcb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51fcbd:L51fcbd:{c.instructions+=10;NFSU2_TR(0x51fcbd);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B51fcbf:{NFSU2_TR(0x51fcbf);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51fcc2:{NFSU2_TR(0x51fcc2);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51fcc5:{NFSU2_TR(0x51fcc5);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51fcc8:{NFSU2_TR(0x51fcc8);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51fccb:{NFSU2_TR(0x51fccb);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51fccd:{NFSU2_TR(0x51fccd);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51fccf:{NFSU2_TR(0x51fccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fcd2:{NFSU2_TR(0x51fcd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fcd4:{NFSU2_TR(0x51fcd4);
if(r1(R+518)){{goto L51fcdb;}}
}
B51fcd6:L51fcd6:{c.instructions+=2;NFSU2_TR(0x51fcd6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B51fcd9:{NFSU2_TR(0x51fcd9);
{goto L51fcdd;}
}
B51fcdb:L51fcdb:{c.instructions+=1;NFSU2_TR(0x51fcdb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51fcdd:L51fcdd:{c.instructions+=2;NFSU2_TR(0x51fcdd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51fcdf:{NFSU2_TR(0x51fcdf);
if(r1(R+518)){{goto L51fcf1;}}
}
B51fce1:L51fce1:{c.instructions+=6;NFSU2_TR(0x51fce1);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51fce4:{NFSU2_TR(0x51fce4);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51fce7:{NFSU2_TR(0x51fce7);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51fcea:{NFSU2_TR(0x51fcea);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51fced:{NFSU2_TR(0x51fced);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51fcef:{NFSU2_TR(0x51fcef);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51fcf1:L51fcf1:{c.instructions+=3;NFSU2_TR(0x51fcf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51fcf4:{NFSU2_TR(0x51fcf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fcf6:{NFSU2_TR(0x51fcf6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51fb99u);}goto L51fb99;}}
}
B51fcfc:L51fcfc:{c.instructions+=2;NFSU2_TR(0x51fcfc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
}
B51fcff:{NFSU2_TR(0x51fcff);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51fba0u);}goto L51fba0;}
}
B51fd04:L51fd04:{c.instructions+=5;NFSU2_TR(0x51fd04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51fd05:{NFSU2_TR(0x51fd05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51fd06:{NFSU2_TR(0x51fd06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51fd07:{NFSU2_TR(0x51fd07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51fd08:{NFSU2_TR(0x51fd08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51fd10:L51fd10:{c.instructions+=7;NFSU2_TR(0x51fd10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fd13:{NFSU2_TR(0x51fd13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fd15:{NFSU2_TR(0x51fd15);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fd16:{NFSU2_TR(0x51fd16);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fd17:{NFSU2_TR(0x51fd17);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51fd1a:{NFSU2_TR(0x51fd1a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B51fd21:{NFSU2_TR(0x51fd21);
if(r1(R+518)){{goto L51fd28;}}
}
B51fd23:L51fd23:{c.instructions+=2;NFSU2_TR(0x51fd23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B51fd26:{NFSU2_TR(0x51fd26);
{goto L51fd30;}
}
B51fd28:L51fd28:{c.instructions+=2;NFSU2_TR(0x51fd28);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51fd2a:{NFSU2_TR(0x51fd2a);
__builtin_memmove((R+12),(R+12),4);
}
B51fd30:L51fd30:{c.instructions+=2;NFSU2_TR(0x51fd30);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fd32:{NFSU2_TR(0x51fd32);
if(r1(R+518)){{goto L51fd39;}}
}
B51fd34:L51fd34:{c.instructions+=2;NFSU2_TR(0x51fd34);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B51fd37:{NFSU2_TR(0x51fd37);
{goto L51fd3b;}
}
B51fd39:L51fd39:{c.instructions+=1;NFSU2_TR(0x51fd39);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51fd3b:L51fd3b:{c.instructions+=2;NFSU2_TR(0x51fd3b);
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
B51fd3d:{NFSU2_TR(0x51fd3d);
if(r1(R+518)){{goto L51fd5b;}}
}
B51fd3f:L51fd3f:{c.instructions+=5;NFSU2_TR(0x51fd3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fd42:{NFSU2_TR(0x51fd42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51fd45:{NFSU2_TR(0x51fd45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fd46:{NFSU2_TR(0x51fd46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fd47:{NFSU2_TR(0x51fd47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51fd4cull));
TAIL_STATIC(0x51d7f0u,51d);
}
B51fd4c:L51fd4c:{c.instructions+=4;NFSU2_TR(0x51fd4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51fd4f:{NFSU2_TR(0x51fd4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51fd52:{NFSU2_TR(0x51fd52);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fd54:{NFSU2_TR(0x51fd54);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51fd28u);}goto L51fd28;}}
}
B51fd56:L51fd56:{c.instructions+=2;NFSU2_TR(0x51fd56);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B51fd59:{NFSU2_TR(0x51fd59);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51fd30u);}goto L51fd30;}
}
B51fd5b:L51fd5b:{c.instructions+=3;NFSU2_TR(0x51fd5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51fd5c:{NFSU2_TR(0x51fd5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51fd5d:{NFSU2_TR(0x51fd5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51fd60:L51fd60:{c.instructions+=6;NFSU2_TR(0x51fd60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fd61:{NFSU2_TR(0x51fd61);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51fd65:{NFSU2_TR(0x51fd65);
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
B51fd67:{NFSU2_TR(0x51fd67);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fd68:{NFSU2_TR(0x51fd68);
__builtin_memmove((R+20),(R+4),4);
}
B51fd6a:{NFSU2_TR(0x51fd6a);
if(r1(R+518)){{goto L51fdc9;}}
}
B51fd6c:L51fd6c:{c.instructions+=4;NFSU2_TR(0x51fd6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fd6d:{NFSU2_TR(0x51fd6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51fd70:{NFSU2_TR(0x51fd70);
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
B51fd72:{NFSU2_TR(0x51fd72);
if(r1(R+518)){{goto L51fdc8;}}
}
B51fd74:L51fd74:{c.instructions+=3;NFSU2_TR(0x51fd74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fd77:{NFSU2_TR(0x51fd77);
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
B51fd79:{NFSU2_TR(0x51fd79);
if(r1(R+518)){{goto L51fdc8;}}
}
B51fd7b:L51fd7b:{c.instructions+=3;NFSU2_TR(0x51fd7b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fd7c:{NFSU2_TR(0x51fd7c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fd7d:{NFSU2_TR(0x51fd7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51fd82ull));
TAIL_STATIC(0x495570u,495);
}
B51fd82:L51fd82:{c.instructions+=9;NFSU2_TR(0x51fd82);
__builtin_memmove((R+24),(R+0),4);
}
B51fd84:{NFSU2_TR(0x51fd84);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B51fd88:{NFSU2_TR(0x51fd88);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51fd8c:{NFSU2_TR(0x51fd8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B51fd8f:{NFSU2_TR(0x51fd8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51fd92:{NFSU2_TR(0x51fd92);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B51fd96:{NFSU2_TR(0x51fd96);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffffull))));
}
B51fd9c:{NFSU2_TR(0x51fd9c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51fd9e:{NFSU2_TR(0x51fd9e);
if(r1(R+518)){{goto L51fdaf;}}
}
B51fda0:L51fda0:{c.instructions+=3;NFSU2_TR(0x51fda0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B51fda3:{NFSU2_TR(0x51fda3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51fda5:{NFSU2_TR(0x51fda5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51fdaf;}}
}
B51fda7:L51fda7:{c.instructions+=2;NFSU2_TR(0x51fda7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51fda9:{NFSU2_TR(0x51fda9);
{u32 ea_=u32(u32(7906692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51fdaf:L51fdaf:{c.instructions+=2;NFSU2_TR(0x51fdaf);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51fdb3:{NFSU2_TR(0x51fdb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51fdb8ull));
TAIL_STATIC(0x75bed4u,75b);
}
B51fdb8:L51fdb8:{c.instructions+=5;NFSU2_TR(0x51fdb8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B51fdbb:{NFSU2_TR(0x51fdbb);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
}
B51fdbd:{NFSU2_TR(0x51fdbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fdbe:{NFSU2_TR(0x51fdbe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fdbf:{NFSU2_TR(0x51fdbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51fdc4ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B51fdc4:L51fdc4:{c.instructions+=2;NFSU2_TR(0x51fdc4);
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
B51fdc7:{NFSU2_TR(0x51fdc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51fdc8:L51fdc8:{c.instructions+=1;NFSU2_TR(0x51fdc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51fdc9:L51fdc9:{c.instructions+=3;NFSU2_TR(0x51fdc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51fdca:{NFSU2_TR(0x51fdca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51fdcb:{NFSU2_TR(0x51fdcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51fdd0:L51fdd0:{c.instructions+=5;NFSU2_TR(0x51fdd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fdd4:{NFSU2_TR(0x51fdd4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51fdd7:{NFSU2_TR(0x51fdd7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fdd8:{NFSU2_TR(0x51fdd8);
__builtin_memmove((R+24),(R+4),4);
}
B51fdda:{NFSU2_TR(0x51fdda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51fe22;}}
}
B51fddc:L51fddc:{c.instructions+=6;NFSU2_TR(0x51fddc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fddd:{NFSU2_TR(0x51fddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fde0:{NFSU2_TR(0x51fde0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B51fde4:{NFSU2_TR(0x51fde4);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fde9:{NFSU2_TR(0x51fde9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fdea:{NFSU2_TR(0x51fdea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51fdefull));
TAIL_STATIC(0x51cf70u,51c);
}
B51fdef:L51fdef:{c.instructions+=7;NFSU2_TR(0x51fdef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51fdf2:{NFSU2_TR(0x51fdf2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B51fdf5:{NFSU2_TR(0x51fdf5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B51fdf6:{NFSU2_TR(0x51fdf6);
__builtin_memmove((R+0),(R+4),4);
}
B51fdf8:{NFSU2_TR(0x51fdf8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51fdfb:{NFSU2_TR(0x51fdfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51fdfe:{NFSU2_TR(0x51fdfe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L51fe07;}}
}
B51fe00:L51fe00:{c.instructions+=1;NFSU2_TR(0x51fe00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51fe07:L51fe07:{c.instructions+=6;NFSU2_TR(0x51fe07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51fe0a:{NFSU2_TR(0x51fe0a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B51fe0e:{NFSU2_TR(0x51fe0e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fe10:{NFSU2_TR(0x51fe10);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fe15:{NFSU2_TR(0x51fe15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fe16:{NFSU2_TR(0x51fe16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51fe1bull));
TAIL_STATIC(0x51cf70u,51c);
}
B51fe1b:L51fe1b:{c.instructions+=3;NFSU2_TR(0x51fe1b);
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
B51fe1e:{NFSU2_TR(0x51fe1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51fe1f:{NFSU2_TR(0x51fe1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51fe22:L51fe22:{c.instructions+=2;NFSU2_TR(0x51fe22);
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
B51fe25:{NFSU2_TR(0x51fe25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51fe65;}}
}
B51fe27:L51fe27:{c.instructions+=6;NFSU2_TR(0x51fe27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51fe2a:{NFSU2_TR(0x51fe2a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B51fe2e:{NFSU2_TR(0x51fe2e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fe30:{NFSU2_TR(0x51fe30);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fe35:{NFSU2_TR(0x51fe35);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fe36:{NFSU2_TR(0x51fe36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51fe3bull));
TAIL_STATIC(0x51cf70u,51c);
}
B51fe3b:L51fe3b:{c.instructions+=5;NFSU2_TR(0x51fe3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fe3e:{NFSU2_TR(0x51fe3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B51fe41:{NFSU2_TR(0x51fe41);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B51fe42:{NFSU2_TR(0x51fe42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51fe45:{NFSU2_TR(0x51fe45);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L51fe4e;}}
}
B51fe47:L51fe47:{c.instructions+=1;NFSU2_TR(0x51fe47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51fe4e:L51fe4e:{c.instructions+=6;NFSU2_TR(0x51fe4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fe51:{NFSU2_TR(0x51fe51);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B51fe55:{NFSU2_TR(0x51fe55);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fe57:{NFSU2_TR(0x51fe57);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fe5c:{NFSU2_TR(0x51fe5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fe5d:{NFSU2_TR(0x51fe5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51fe62ull));
TAIL_STATIC(0x51cf70u,51c);
}
B51fe62:L51fe62:{c.instructions+=1;NFSU2_TR(0x51fe62);
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
B51fe65:L51fe65:{c.instructions+=2;NFSU2_TR(0x51fe65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51fe66:{NFSU2_TR(0x51fe66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51fe70:L51fe70:{c.instructions+=3;NFSU2_TR(0x51fe70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fe74:{NFSU2_TR(0x51fe74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fe76:{NFSU2_TR(0x51fe76);
if(r1(R+518)){{goto L51fe8c;}}
}
B51fe78:L51fe78:{c.instructions+=4;NFSU2_TR(0x51fe78);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B51fe79:{NFSU2_TR(0x51fe79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fe7a:{NFSU2_TR(0x51fe7a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B51fe7d:{NFSU2_TR(0x51fe7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51fe82ull));
TAIL_STATIC(0x43be60u,43b);
}
B51fe82:L51fe82:{c.instructions+=2;NFSU2_TR(0x51fe82);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fe84:{NFSU2_TR(0x51fe84);
if(r1(R+518)){{goto L51fe8c;}}
}
B51fe86:L51fe86:{c.instructions+=2;NFSU2_TR(0x51fe86);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffffcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffffcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51fe89:{NFSU2_TR(0x51fe89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51fe8c:L51fe8c:{c.instructions+=2;NFSU2_TR(0x51fe8c);
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
B51fe8e:{NFSU2_TR(0x51fe8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51fea0:L51fea0:{c.instructions+=11;NFSU2_TR(0x51fea0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fea1:{NFSU2_TR(0x51fea1);
__builtin_memmove((R+20),(R+16),4);
}
B51fea3:{NFSU2_TR(0x51fea3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B51fea6:{NFSU2_TR(0x51fea6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B51fea9:{NFSU2_TR(0x51fea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51feac:{NFSU2_TR(0x51feac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51feae:{NFSU2_TR(0x51feae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51feaf:{NFSU2_TR(0x51feaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51feb0:{NFSU2_TR(0x51feb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B51feb3:{NFSU2_TR(0x51feb3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51feb4:{NFSU2_TR(0x51feb4);
if(r1(R+518)){{goto L51febb;}}
}
B51feb6:L51feb6:{c.instructions+=2;NFSU2_TR(0x51feb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B51feb9:{NFSU2_TR(0x51feb9);
{goto L51febd;}
}
B51febb:L51febb:{c.instructions+=1;NFSU2_TR(0x51febb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51febd:L51febd:{c.instructions+=2;NFSU2_TR(0x51febd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51fec0:{NFSU2_TR(0x51fec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51fec3:L51fec3:{c.instructions+=2;NFSU2_TR(0x51fec3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51fec5:{NFSU2_TR(0x51fec5);
if(r1(R+518)){{goto L51fecc;}}
}
B51fec7:L51fec7:{c.instructions+=2;NFSU2_TR(0x51fec7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B51feca:{NFSU2_TR(0x51feca);
{goto L51fece;}
}
B51fecc:L51fecc:{c.instructions+=1;NFSU2_TR(0x51fecc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51fece:L51fece:{c.instructions+=2;NFSU2_TR(0x51fece);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B51fed0:{NFSU2_TR(0x51fed0);
if(r1(R+518)){{goto L51ff28;}}
}
B51fed2:L51fed2:{c.instructions+=3;NFSU2_TR(0x51fed2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x29ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B51fed5:{NFSU2_TR(0x51fed5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51fed7:{NFSU2_TR(0x51fed7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51ff0d;}}
}
B51fed9:L51fed9:{c.instructions+=15;NFSU2_TR(0x51fed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fedc:{NFSU2_TR(0x51fedc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51fedf:{NFSU2_TR(0x51fedf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51fee3:{NFSU2_TR(0x51fee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51fee6:{NFSU2_TR(0x51fee6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51feea:{NFSU2_TR(0x51feea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51feed:{NFSU2_TR(0x51feed);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51fef1:{NFSU2_TR(0x51fef1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51fef5:{NFSU2_TR(0x51fef5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51fef6:{NFSU2_TR(0x51fef6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51fefa:{NFSU2_TR(0x51fefa);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B51fefe:{NFSU2_TR(0x51fefe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51feff:{NFSU2_TR(0x51feff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ff00:{NFSU2_TR(0x51ff00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ff01:{NFSU2_TR(0x51ff01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ff06ull));
TAIL_STATIC(0x50cd00u,50c);
}
B51ff06:L51ff06:{c.instructions+=3;NFSU2_TR(0x51ff06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B51ff09:{NFSU2_TR(0x51ff09);
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
B51ff0b:{NFSU2_TR(0x51ff0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51ff1d;}}
}
B51ff0d:L51ff0d:{c.instructions+=3;NFSU2_TR(0x51ff0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51ff10:{NFSU2_TR(0x51ff10);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51ff12:{NFSU2_TR(0x51ff12);
if(r1(R+518)){{goto L51ff19;}}
}
B51ff14:L51ff14:{c.instructions+=2;NFSU2_TR(0x51ff14);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
}
B51ff17:{NFSU2_TR(0x51ff17);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51fec3u);}goto L51fec3;}
}
B51ff19:L51ff19:{c.instructions+=2;NFSU2_TR(0x51ff19);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B51ff1b:{NFSU2_TR(0x51ff1b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51fec3u);}goto L51fec3;}
}
B51ff1d:L51ff1d:{c.instructions+=7;NFSU2_TR(0x51ff1d);
__builtin_memmove((R+0),(R+8),4);
}
B51ff1f:{NFSU2_TR(0x51ff1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ff20:{NFSU2_TR(0x51ff20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ff21:{NFSU2_TR(0x51ff21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51ff22:{NFSU2_TR(0x51ff22);
__builtin_memmove((R+16),(R+20),4);
}
B51ff24:{NFSU2_TR(0x51ff24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51ff25:{NFSU2_TR(0x51ff25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ff28:L51ff28:{c.instructions+=7;NFSU2_TR(0x51ff28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ff29:{NFSU2_TR(0x51ff29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ff2a:{NFSU2_TR(0x51ff2a);
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
B51ff2c:{NFSU2_TR(0x51ff2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51ff2d:{NFSU2_TR(0x51ff2d);
__builtin_memmove((R+16),(R+20),4);
}
B51ff2f:{NFSU2_TR(0x51ff2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51ff30:{NFSU2_TR(0x51ff30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ff40:L51ff40:{c.instructions+=6;NFSU2_TR(0x51ff40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ff43:{NFSU2_TR(0x51ff43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51ff45:{NFSU2_TR(0x51ff45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ff46:{NFSU2_TR(0x51ff46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ff47:{NFSU2_TR(0x51ff47);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ff4a:{NFSU2_TR(0x51ff4a);
if(r1(R+518)){{goto L51ff51;}}
}
B51ff4c:L51ff4c:{c.instructions+=2;NFSU2_TR(0x51ff4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ff4f:{NFSU2_TR(0x51ff4f);
{goto L51ff53;}
}
B51ff51:L51ff51:{c.instructions+=1;NFSU2_TR(0x51ff51);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B51ff53:L51ff53:{c.instructions+=2;NFSU2_TR(0x51ff53);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51ff55:{NFSU2_TR(0x51ff55);
if(r1(R+518)){{goto L51ff5c;}}
}
B51ff57:L51ff57:{c.instructions+=2;NFSU2_TR(0x51ff57);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B51ff5a:{NFSU2_TR(0x51ff5a);
{goto L51ff5e;}
}
B51ff5c:L51ff5c:{c.instructions+=1;NFSU2_TR(0x51ff5c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51ff5e:L51ff5e:{c.instructions+=2;NFSU2_TR(0x51ff5e);
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
B51ff60:{NFSU2_TR(0x51ff60);
if(r1(R+518)){{goto L51ff75;}}
}
B51ff62:L51ff62:{c.instructions+=3;NFSU2_TR(0x51ff62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51ff64:{NFSU2_TR(0x51ff64);
__builtin_memmove((R+4),(R+24),4);
}
B51ff66:{NFSU2_TR(0x51ff66);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ff69ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51ff69:L51ff69:{c.instructions+=3;NFSU2_TR(0x51ff69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51ff6c:{NFSU2_TR(0x51ff6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51ff6e:{NFSU2_TR(0x51ff6e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51ff51u);}goto L51ff51;}}
}
B51ff70:L51ff70:{c.instructions+=2;NFSU2_TR(0x51ff70);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B51ff73:{NFSU2_TR(0x51ff73);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51ff53u);}goto L51ff53;}
}
B51ff75:L51ff75:{c.instructions+=3;NFSU2_TR(0x51ff75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ff76:{NFSU2_TR(0x51ff76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ff77:{NFSU2_TR(0x51ff77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51ff80:L51ff80:{c.instructions+=12;NFSU2_TR(0x51ff80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ff81:{NFSU2_TR(0x51ff81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ff82:{NFSU2_TR(0x51ff82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ff83:{NFSU2_TR(0x51ff83);
__builtin_memmove((R+24),(R+4),4);
}
B51ff85:{NFSU2_TR(0x51ff85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ff88:{NFSU2_TR(0x51ff88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ff89:{NFSU2_TR(0x51ff89);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B51ff8f:{NFSU2_TR(0x51ff8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ff90:{NFSU2_TR(0x51ff90);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ff96:{NFSU2_TR(0x51ff96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ff97:{NFSU2_TR(0x51ff97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ff98:{NFSU2_TR(0x51ff98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ff9dull));
TAIL_STATIC(0x51d070u,51d);
}
B51ff9d:L51ff9d:{c.instructions+=11;NFSU2_TR(0x51ff9d);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51ffa0:{NFSU2_TR(0x51ffa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51ffa2:{NFSU2_TR(0x51ffa2);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51ffa8:{NFSU2_TR(0x51ffa8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+0),(U+0),4);
}
B51ffae:{NFSU2_TR(0x51ffae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ffaf:{NFSU2_TR(0x51ffaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ffb5:{NFSU2_TR(0x51ffb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51ffb8:{NFSU2_TR(0x51ffb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+12),(U+0),4);
}
B51ffbe:{NFSU2_TR(0x51ffbe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ffbf:{NFSU2_TR(0x51ffbf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ffc0:{NFSU2_TR(0x51ffc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ffc5ull));
TAIL_STATIC(0x51d070u,51d);
}
B51ffc5:L51ffc5:{c.instructions+=7;NFSU2_TR(0x51ffc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ffc8:{NFSU2_TR(0x51ffc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51ffce:{NFSU2_TR(0x51ffce);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ffcf:{NFSU2_TR(0x51ffcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B51ffd5:{NFSU2_TR(0x51ffd5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ffd6:{NFSU2_TR(0x51ffd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ffd7:{NFSU2_TR(0x51ffd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ffdcull));
TAIL_STATIC(0x51d730u,51d);
}
B51ffdc:L51ffdc:{c.instructions+=7;NFSU2_TR(0x51ffdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51ffdf:{NFSU2_TR(0x51ffdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51ffe5:{NFSU2_TR(0x51ffe5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ffe6:{NFSU2_TR(0x51ffe6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B51ffec:{NFSU2_TR(0x51ffec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ffed:{NFSU2_TR(0x51ffed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ffee:{NFSU2_TR(0x51ffee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51fff3ull));
TAIL_STATIC(0x51d730u,51d);
}
B51fff3:L51fff3:{c.instructions+=4;NFSU2_TR(0x51fff3);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51fff9:{NFSU2_TR(0x51fff9);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51fffb:{NFSU2_TR(0x51fffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51fffe:{NFSU2_TR(0x51fffe);
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
TAIL_STATIC(0x520001u,520);
}
XIT:NFSU2_TR_EXIT(0x51f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
