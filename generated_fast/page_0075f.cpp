#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_763(u8* __restrict R,Cpu& c);
u32 body_765(u8* __restrict R,Cpu& c);
u32 body_766(u8* __restrict R,Cpu& c);
u32 body_767(u8* __restrict R,Cpu& c);
u32 body_76a(u8* __restrict R,Cpu& c);
u32 body_76b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x75f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x75f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_75f(u8* __restrict R,Cpu& c);
u32 page_75f(Cpu& c){return body_75f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_75f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x75f001:goto L75f001;
case 0x75f004:c.instructions+=1;goto B75f004;
case 0x75f006:goto L75f006;
case 0x75f00b:c.instructions+=1;goto B75f00b;
case 0x75f00d:goto L75f00d;
case 0x75f012:c.instructions+=1;goto B75f012;
case 0x75f014:goto L75f014;
case 0x75f015:c.instructions+=4;goto B75f015;
case 0x75f018:c.instructions+=3;goto B75f018;
case 0x75f01a:c.instructions+=2;goto B75f01a;
case 0x75f01b:c.instructions+=1;goto B75f01b;
case 0x75f020:goto L75f020;
case 0x75f023:c.instructions+=2;goto B75f023;
case 0x75f024:c.instructions+=1;goto B75f024;
case 0x75f029:goto L75f029;
case 0x75f02a:c.instructions+=6;goto B75f02a;
case 0x75f02b:c.instructions+=5;goto B75f02b;
case 0x75f02c:c.instructions+=4;goto B75f02c;
case 0x75f02d:c.instructions+=3;goto B75f02d;
case 0x75f02f:c.instructions+=2;goto B75f02f;
case 0x75f030:c.instructions+=1;goto B75f030;
case 0x75f031:goto L75f031;
case 0x75f032:c.instructions+=7;goto B75f032;
case 0x75f036:c.instructions+=6;goto B75f036;
case 0x75f038:c.instructions+=5;goto B75f038;
case 0x75f03b:c.instructions+=4;goto B75f03b;
case 0x75f03c:c.instructions+=3;goto B75f03c;
case 0x75f03f:c.instructions+=2;goto B75f03f;
case 0x75f040:c.instructions+=1;goto B75f040;
case 0x75f045:goto L75f045;
case 0x75f048:c.instructions+=2;goto B75f048;
case 0x75f049:c.instructions+=1;goto B75f049;
case 0x75f04c:goto L75f04c;
case 0x75f04d:c.instructions+=8;goto B75f04d;
case 0x75f04f:c.instructions+=7;goto B75f04f;
case 0x75f050:c.instructions+=6;goto B75f050;
case 0x75f051:c.instructions+=5;goto B75f051;
case 0x75f054:c.instructions+=4;goto B75f054;
case 0x75f055:c.instructions+=3;goto B75f055;
case 0x75f058:c.instructions+=2;goto B75f058;
case 0x75f05c:c.instructions+=1;goto B75f05c;
case 0x75f062:goto L75f062;
case 0x75f066:c.instructions+=1;goto B75f066;
case 0x75f068:goto L75f068;
case 0x75f06b:c.instructions+=1;goto B75f06b;
case 0x75f071:goto L75f071;
case 0x75f077:c.instructions+=1;goto B75f077;
case 0x75f079:goto L75f079;
case 0x75f07d:c.instructions+=1;goto B75f07d;
case 0x75f07f:goto L75f07f;
case 0x75f081:c.instructions+=3;goto B75f081;
case 0x75f082:c.instructions+=2;goto B75f082;
case 0x75f083:c.instructions+=1;goto B75f083;
case 0x75f088:goto L75f088;
case 0x75f08b:c.instructions+=1;goto B75f08b;
case 0x75f08d:goto L75f08d;
case 0x75f090:c.instructions+=2;goto B75f090;
case 0x75f094:c.instructions+=1;goto B75f094;
case 0x75f097:goto L75f097;
case 0x75f099:c.instructions+=1;goto B75f099;
case 0x75f09b:goto L75f09b;
case 0x75f09e:c.instructions+=5;goto B75f09e;
case 0x75f0a0:c.instructions+=4;goto B75f0a0;
case 0x75f0a3:c.instructions+=3;goto B75f0a3;
case 0x75f0a6:c.instructions+=2;goto B75f0a6;
case 0x75f0ab:c.instructions+=1;goto B75f0ab;
case 0x75f0ad:goto L75f0ad;
case 0x75f0b1:c.instructions+=5;goto B75f0b1;
case 0x75f0b3:c.instructions+=4;goto B75f0b3;
case 0x75f0b6:c.instructions+=3;goto B75f0b6;
case 0x75f0b9:c.instructions+=2;goto B75f0b9;
case 0x75f0ba:c.instructions+=1;goto B75f0ba;
case 0x75f0bc:goto L75f0bc;
case 0x75f0c0:c.instructions+=3;goto B75f0c0;
case 0x75f0c2:c.instructions+=2;goto B75f0c2;
case 0x75f0c5:c.instructions+=1;goto B75f0c5;
case 0x75f0c6:goto L75f0c6;
case 0x75f0c8:c.instructions+=10;goto B75f0c8;
case 0x75f0cb:c.instructions+=9;goto B75f0cb;
case 0x75f0ce:c.instructions+=8;goto B75f0ce;
case 0x75f0d0:c.instructions+=7;goto B75f0d0;
case 0x75f0d1:c.instructions+=6;goto B75f0d1;
case 0x75f0d2:c.instructions+=5;goto B75f0d2;
case 0x75f0d5:c.instructions+=4;goto B75f0d5;
case 0x75f0d6:c.instructions+=3;goto B75f0d6;
case 0x75f0db:c.instructions+=2;goto B75f0db;
case 0x75f0de:c.instructions+=1;goto B75f0de;
case 0x75f0e3:goto L75f0e3;
case 0x75f0e6:c.instructions+=2;goto B75f0e6;
case 0x75f0e8:c.instructions+=1;goto B75f0e8;
case 0x75f0ea:goto L75f0ea;
case 0x75f0ed:c.instructions+=1;goto B75f0ed;
case 0x75f0ef:goto L75f0ef;
case 0x75f0f3:c.instructions+=1;goto B75f0f3;
case 0x75f0f5:goto L75f0f5;
case 0x75f0f9:c.instructions+=4;goto B75f0f9;
case 0x75f0fb:c.instructions+=3;goto B75f0fb;
case 0x75f0fe:c.instructions+=2;goto B75f0fe;
case 0x75f100:c.instructions+=1;goto B75f100;
case 0x75f102:goto L75f102;
case 0x75f105:c.instructions+=1;goto B75f105;
case 0x75f107:goto L75f107;
case 0x75f10a:c.instructions+=2;goto B75f10a;
case 0x75f10d:c.instructions+=1;goto B75f10d;
case 0x75f10f:goto L75f10f;
case 0x75f111:goto L75f111;
case 0x75f112:c.instructions+=3;goto B75f112;
case 0x75f113:c.instructions+=2;goto B75f113;
case 0x75f114:c.instructions+=1;goto B75f114;
case 0x75f115:goto L75f115;
case 0x75f11a:goto L75f11a;
case 0x75f11d:c.instructions+=2;goto B75f11d;
case 0x75f123:c.instructions+=1;goto B75f123;
case 0x75f125:goto L75f125;
case 0x75f12a:goto L75f12a;
case 0x75f12e:c.instructions+=2;goto B75f12e;
case 0x75f12f:c.instructions+=1;goto B75f12f;
case 0x75f134:goto L75f134;
case 0x75f135:c.instructions+=2;goto B75f135;
case 0x75f136:c.instructions+=1;goto B75f136;
case 0x75f140:goto L75f140;
case 0x75f144:c.instructions+=7;goto B75f144;
case 0x75f145:c.instructions+=6;goto B75f145;
case 0x75f146:c.instructions+=5;goto B75f146;
case 0x75f147:c.instructions+=4;goto B75f147;
case 0x75f149:c.instructions+=3;goto B75f149;
case 0x75f14d:c.instructions+=2;goto B75f14d;
case 0x75f14f:c.instructions+=1;goto B75f14f;
case 0x75f151:goto L75f151;
case 0x75f154:c.instructions+=2;goto B75f154;
case 0x75f156:c.instructions+=1;goto B75f156;
case 0x75f158:goto L75f158;
case 0x75f15a:c.instructions+=5;goto B75f15a;
case 0x75f15e:c.instructions+=4;goto B75f15e;
case 0x75f160:c.instructions+=3;goto B75f160;
case 0x75f163:c.instructions+=2;goto B75f163;
case 0x75f165:c.instructions+=1;goto B75f165;
case 0x75f167:goto L75f167;
case 0x75f169:c.instructions+=1;goto B75f169;
case 0x75f16b:goto L75f16b;
case 0x75f16d:c.instructions+=1;goto B75f16d;
case 0x75f170:goto L75f170;
case 0x75f172:c.instructions+=1;goto B75f172;
case 0x75f174:goto L75f174;
case 0x75f176:c.instructions+=1;goto B75f176;
case 0x75f178:goto L75f178;
case 0x75f179:c.instructions+=4;goto B75f179;
case 0x75f17a:c.instructions+=3;goto B75f17a;
case 0x75f17b:c.instructions+=2;goto B75f17b;
case 0x75f17d:c.instructions+=1;goto B75f17d;
case 0x75f17e:goto L75f17e;
case 0x75f180:c.instructions+=3;goto B75f180;
case 0x75f183:c.instructions+=2;goto B75f183;
case 0x75f185:c.instructions+=1;goto B75f185;
case 0x75f187:goto L75f187;
case 0x75f18a:goto L75f18a;
case 0x75f18d:c.instructions+=2;goto B75f18d;
case 0x75f18f:c.instructions+=1;goto B75f18f;
case 0x75f191:goto L75f191;
case 0x75f193:c.instructions+=3;goto B75f193;
case 0x75f196:c.instructions+=2;goto B75f196;
case 0x75f198:c.instructions+=1;goto B75f198;
case 0x75f19a:goto L75f19a;
case 0x75f19d:c.instructions+=2;goto B75f19d;
case 0x75f19f:c.instructions+=1;goto B75f19f;
case 0x75f1a1:goto L75f1a1;
case 0x75f1a4:c.instructions+=3;goto B75f1a4;
case 0x75f1a7:c.instructions+=2;goto B75f1a7;
case 0x75f1a9:c.instructions+=1;goto B75f1a9;
case 0x75f1ab:goto L75f1ab;
case 0x75f1ad:goto L75f1ad;
case 0x75f1af:c.instructions+=5;goto B75f1af;
case 0x75f1b0:c.instructions+=4;goto B75f1b0;
case 0x75f1b1:c.instructions+=3;goto B75f1b1;
case 0x75f1b2:c.instructions+=2;goto B75f1b2;
case 0x75f1b4:c.instructions+=1;goto B75f1b4;
case 0x75f1b9:goto L75f1b9;
case 0x75f1bc:c.instructions+=4;goto B75f1bc;
case 0x75f1bd:c.instructions+=3;goto B75f1bd;
case 0x75f1be:c.instructions+=2;goto B75f1be;
case 0x75f1bf:c.instructions+=1;goto B75f1bf;
case 0x75f1c0:goto L75f1c0;
case 0x75f1c2:c.instructions+=4;goto B75f1c2;
case 0x75f1c3:c.instructions+=3;goto B75f1c3;
case 0x75f1c4:c.instructions+=2;goto B75f1c4;
case 0x75f1c5:c.instructions+=1;goto B75f1c5;
case 0x75f1d0:goto L75f1d0;
case 0x75f1d1:c.instructions+=6;goto B75f1d1;
case 0x75f1d3:c.instructions+=5;goto B75f1d3;
case 0x75f1d4:c.instructions+=4;goto B75f1d4;
case 0x75f1d5:c.instructions+=3;goto B75f1d5;
case 0x75f1d6:c.instructions+=2;goto B75f1d6;
case 0x75f1d9:c.instructions+=1;goto B75f1d9;
case 0x75f1db:goto L75f1db;
case 0x75f1dd:c.instructions+=3;goto B75f1dd;
case 0x75f1e0:c.instructions+=2;goto B75f1e0;
case 0x75f1e2:c.instructions+=1;goto B75f1e2;
case 0x75f1e4:goto L75f1e4;
case 0x75f1e6:goto L75f1e6;
case 0x75f1e8:c.instructions+=3;goto B75f1e8;
case 0x75f1ea:c.instructions+=2;goto B75f1ea;
case 0x75f1ec:c.instructions+=1;goto B75f1ec;
case 0x75f1ef:goto L75f1ef;
case 0x75f1f1:goto L75f1f1;
case 0x75f1f4:c.instructions+=3;goto B75f1f4;
case 0x75f1f6:c.instructions+=2;goto B75f1f6;
case 0x75f1f9:c.instructions+=1;goto B75f1f9;
case 0x75f1fb:goto L75f1fb;
case 0x75f1fd:goto L75f1fd;
case 0x75f200:goto L75f200;
case 0x75f202:goto L75f202;
case 0x75f204:c.instructions+=5;goto B75f204;
case 0x75f205:c.instructions+=4;goto B75f205;
case 0x75f206:c.instructions+=3;goto B75f206;
case 0x75f207:c.instructions+=2;goto B75f207;
case 0x75f208:c.instructions+=1;goto B75f208;
case 0x75f209:goto L75f209;
case 0x75f20b:c.instructions+=2;goto B75f20b;
case 0x75f210:c.instructions+=1;goto B75f210;
case 0x75f215:goto L75f215;
case 0x75f218:c.instructions+=3;goto B75f218;
case 0x75f21b:c.instructions+=2;goto B75f21b;
case 0x75f21c:c.instructions+=1;goto B75f21c;
case 0x75f221:goto L75f221;
case 0x75f222:c.instructions+=3;goto B75f222;
case 0x75f226:c.instructions+=2;goto B75f226;
case 0x75f227:c.instructions+=1;goto B75f227;
case 0x75f22c:goto L75f22c;
case 0x75f22f:c.instructions+=4;goto B75f22f;
case 0x75f232:c.instructions+=3;goto B75f232;
case 0x75f235:c.instructions+=2;goto B75f235;
case 0x75f236:c.instructions+=1;goto B75f236;
case 0x75f23b:goto L75f23b;
case 0x75f23e:c.instructions+=3;goto B75f23e;
case 0x75f23f:c.instructions+=2;goto B75f23f;
case 0x75f242:c.instructions+=1;goto B75f242;
case 0x75f247:goto L75f247;
case 0x75f24a:c.instructions+=2;goto B75f24a;
case 0x75f24e:c.instructions+=1;goto B75f24e;
case 0x75f253:goto L75f253;
case 0x75f256:c.instructions+=1;goto B75f256;
case 0x75f25b:goto L75f25b;
case 0x75f25c:goto L75f25c;
case 0x75f25f:c.instructions+=1;goto B75f25f;
case 0x75f264:goto L75f264;
case 0x75f265:c.instructions+=1;goto B75f265;
case 0x75f266:goto L75f266;
case 0x75f26b:c.instructions+=5;goto B75f26b;
case 0x75f26d:c.instructions+=4;goto B75f26d;
case 0x75f26e:c.instructions+=3;goto B75f26e;
case 0x75f270:c.instructions+=2;goto B75f270;
case 0x75f271:c.instructions+=1;goto B75f271;
case 0x75f273:goto L75f273;
case 0x75f278:c.instructions+=1;goto B75f278;
case 0x75f27a:goto L75f27a;
case 0x75f27c:c.instructions+=1;goto B75f27c;
case 0x75f27e:goto L75f27e;
case 0x75f280:goto L75f280;
case 0x75f285:goto L75f285;
case 0x75f287:c.instructions+=2;goto B75f287;
case 0x75f288:c.instructions+=1;goto B75f288;
case 0x75f28d:goto L75f28d;
case 0x75f28f:c.instructions+=4;goto B75f28f;
case 0x75f290:c.instructions+=3;goto B75f290;
case 0x75f291:c.instructions+=2;goto B75f291;
case 0x75f296:c.instructions+=1;goto B75f296;
case 0x75f298:goto L75f298;
case 0x75f29a:c.instructions+=3;goto B75f29a;
case 0x75f29b:c.instructions+=2;goto B75f29b;
case 0x75f2a1:c.instructions+=1;goto B75f2a1;
case 0x75f2a6:goto L75f2a6;
case 0x75f2a8:c.instructions+=4;goto B75f2a8;
case 0x75f2a9:c.instructions+=3;goto B75f2a9;
case 0x75f2aa:c.instructions+=2;goto B75f2aa;
case 0x75f2af:c.instructions+=1;goto B75f2af;
case 0x75f2b1:goto L75f2b1;
case 0x75f2b3:c.instructions+=3;goto B75f2b3;
case 0x75f2b4:c.instructions+=2;goto B75f2b4;
case 0x75f2b5:c.instructions+=1;goto B75f2b5;
case 0x75f2b6:goto L75f2b6;
case 0x75f2b8:c.instructions+=2;goto B75f2b8;
case 0x75f2bd:c.instructions+=1;goto B75f2bd;
case 0x75f2bf:goto L75f2bf;
case 0x75f2c4:goto L75f2c4;
case 0x75f2c7:c.instructions+=4;goto B75f2c7;
case 0x75f2ca:c.instructions+=3;goto B75f2ca;
case 0x75f2cd:c.instructions+=2;goto B75f2cd;
case 0x75f2d3:c.instructions+=1;goto B75f2d3;
case 0x75f2d5:goto L75f2d5;
case 0x75f2d7:c.instructions+=1;goto B75f2d7;
case 0x75f2dc:goto L75f2dc;
case 0x75f2de:c.instructions+=8;goto B75f2de;
case 0x75f2e0:c.instructions+=7;goto B75f2e0;
case 0x75f2e3:c.instructions+=6;goto B75f2e3;
case 0x75f2e6:c.instructions+=5;goto B75f2e6;
case 0x75f2ed:c.instructions+=4;goto B75f2ed;
case 0x75f2f0:c.instructions+=3;goto B75f2f0;
case 0x75f2f3:c.instructions+=2;goto B75f2f3;
case 0x75f2f6:c.instructions+=1;goto B75f2f6;
case 0x75f2f8:goto L75f2f8;
case 0x75f2fa:c.instructions+=1;goto B75f2fa;
case 0x75f2fc:goto L75f2fc;
case 0x75f2ff:goto L75f2ff;
case 0x75f302:c.instructions+=3;goto B75f302;
case 0x75f303:c.instructions+=2;goto B75f303;
case 0x75f309:c.instructions+=1;goto B75f309;
case 0x75f30b:goto L75f30b;
case 0x75f30d:c.instructions+=2;goto B75f30d;
case 0x75f30e:c.instructions+=1;goto B75f30e;
case 0x75f30f:goto L75f30f;
case 0x75f314:goto L75f314;
case 0x75f31b:c.instructions+=1;goto B75f31b;
case 0x75f31d:goto L75f31d;
case 0x75f322:goto L75f322;
case 0x75f323:goto L75f323;
case 0x75f327:c.instructions+=3;goto B75f327;
case 0x75f32c:c.instructions+=2;goto B75f32c;
case 0x75f32e:c.instructions+=1;goto B75f32e;
case 0x75f330:goto L75f330;
case 0x75f335:c.instructions+=1;goto B75f335;
case 0x75f337:goto L75f337;
case 0x75f339:c.instructions+=4;goto B75f339;
case 0x75f33c:c.instructions+=3;goto B75f33c;
case 0x75f33f:c.instructions+=2;goto B75f33f;
case 0x75f340:c.instructions+=1;goto B75f340;
case 0x75f345:goto L75f345;
case 0x75f346:c.instructions+=1;goto B75f346;
case 0x75f347:goto L75f347;
case 0x75f34a:c.instructions+=2;goto B75f34a;
case 0x75f34b:c.instructions+=1;goto B75f34b;
case 0x75f351:goto L75f351;
case 0x75f352:goto L75f352;
case 0x75f356:c.instructions+=2;goto B75f356;
case 0x75f359:c.instructions+=1;goto B75f359;
case 0x75f35b:goto L75f35b;
case 0x75f35e:c.instructions+=2;goto B75f35e;
case 0x75f35f:c.instructions+=1;goto B75f35f;
case 0x75f364:goto L75f364;
case 0x75f365:c.instructions+=1;goto B75f365;
case 0x75f366:goto L75f366;
case 0x75f36a:c.instructions+=3;goto B75f36a;
case 0x75f36d:c.instructions+=2;goto B75f36d;
case 0x75f36e:c.instructions+=1;goto B75f36e;
case 0x75f374:goto L75f374;
case 0x75f375:goto L75f375;
case 0x75f379:c.instructions+=3;goto B75f379;
case 0x75f37e:c.instructions+=2;goto B75f37e;
case 0x75f380:c.instructions+=1;goto B75f380;
case 0x75f382:goto L75f382;
case 0x75f387:c.instructions+=1;goto B75f387;
case 0x75f389:goto L75f389;
case 0x75f38b:c.instructions+=4;goto B75f38b;
case 0x75f38e:c.instructions+=3;goto B75f38e;
case 0x75f391:c.instructions+=2;goto B75f391;
case 0x75f392:c.instructions+=1;goto B75f392;
case 0x75f397:goto L75f397;
case 0x75f398:c.instructions+=1;goto B75f398;
case 0x75f399:goto L75f399;
case 0x75f39c:c.instructions+=2;goto B75f39c;
case 0x75f39d:c.instructions+=1;goto B75f39d;
case 0x75f3a3:goto L75f3a3;
case 0x75f3a4:goto L75f3a4;
case 0x75f3a8:c.instructions+=2;goto B75f3a8;
case 0x75f3ab:c.instructions+=1;goto B75f3ab;
case 0x75f3ad:goto L75f3ad;
case 0x75f3b0:c.instructions+=2;goto B75f3b0;
case 0x75f3b1:c.instructions+=1;goto B75f3b1;
case 0x75f3b6:goto L75f3b6;
case 0x75f3b7:c.instructions+=1;goto B75f3b7;
case 0x75f3b8:goto L75f3b8;
case 0x75f3bc:c.instructions+=3;goto B75f3bc;
case 0x75f3bf:c.instructions+=2;goto B75f3bf;
case 0x75f3c0:c.instructions+=1;goto B75f3c0;
case 0x75f3c6:goto L75f3c6;
case 0x75f3c7:goto L75f3c7;
case 0x75f3c9:c.instructions+=2;goto B75f3c9;
case 0x75f3ce:c.instructions+=1;goto B75f3ce;
case 0x75f3d3:goto L75f3d3;
case 0x75f3d8:c.instructions+=3;goto B75f3d8;
case 0x75f3d9:c.instructions+=2;goto B75f3d9;
case 0x75f3db:c.instructions+=1;goto B75f3db;
case 0x75f3e0:goto L75f3e0;
case 0x75f3e1:c.instructions+=4;goto B75f3e1;
case 0x75f3e2:c.instructions+=3;goto B75f3e2;
case 0x75f3e6:c.instructions+=2;goto B75f3e6;
case 0x75f3e7:c.instructions+=1;goto B75f3e7;
case 0x75f3ec:goto L75f3ec;
case 0x75f3ef:c.instructions+=5;goto B75f3ef;
case 0x75f3f2:c.instructions+=4;goto B75f3f2;
case 0x75f3f3:c.instructions+=3;goto B75f3f3;
case 0x75f3f6:c.instructions+=2;goto B75f3f6;
case 0x75f3f7:c.instructions+=1;goto B75f3f7;
case 0x75f3fc:goto L75f3fc;
case 0x75f3ff:c.instructions+=3;goto B75f3ff;
case 0x75f400:c.instructions+=2;goto B75f400;
case 0x75f403:c.instructions+=1;goto B75f403;
case 0x75f408:goto L75f408;
case 0x75f40b:c.instructions+=2;goto B75f40b;
case 0x75f40f:c.instructions+=1;goto B75f40f;
case 0x75f414:goto L75f414;
case 0x75f417:c.instructions+=1;goto B75f417;
case 0x75f41c:goto L75f41c;
case 0x75f422:goto L75f422;
case 0x75f423:c.instructions+=2;goto B75f423;
case 0x75f425:c.instructions+=1;goto B75f425;
case 0x75f42a:goto L75f42a;
case 0x75f42b:c.instructions+=2;goto B75f42b;
case 0x75f42c:c.instructions+=1;goto B75f42c;
case 0x75f42d:goto L75f42d;
case 0x75f42e:c.instructions+=8;goto B75f42e;
case 0x75f42f:c.instructions+=7;goto B75f42f;
case 0x75f433:c.instructions+=6;goto B75f433;
case 0x75f436:c.instructions+=5;goto B75f436;
case 0x75f438:c.instructions+=4;goto B75f438;
case 0x75f43b:c.instructions+=3;goto B75f43b;
case 0x75f43d:c.instructions+=2;goto B75f43d;
case 0x75f440:c.instructions+=1;goto B75f440;
case 0x75f442:goto L75f442;
case 0x75f446:c.instructions+=1;goto B75f446;
case 0x75f448:goto L75f448;
case 0x75f44b:c.instructions+=5;goto B75f44b;
case 0x75f44c:c.instructions+=4;goto B75f44c;
case 0x75f44e:c.instructions+=3;goto B75f44e;
case 0x75f450:c.instructions+=2;goto B75f450;
case 0x75f452:c.instructions+=1;goto B75f452;
case 0x75f454:goto L75f454;
case 0x75f455:c.instructions+=3;goto B75f455;
case 0x75f456:c.instructions+=2;goto B75f456;
case 0x75f459:c.instructions+=1;goto B75f459;
case 0x75f45e:goto L75f45e;
case 0x75f461:c.instructions+=2;goto B75f461;
case 0x75f463:c.instructions+=1;goto B75f463;
case 0x75f465:goto L75f465;
case 0x75f468:c.instructions+=2;goto B75f468;
case 0x75f46a:c.instructions+=1;goto B75f46a;
case 0x75f46c:goto L75f46c;
case 0x75f46f:c.instructions+=2;goto B75f46f;
case 0x75f472:c.instructions+=1;goto B75f472;
case 0x75f474:goto L75f474;
case 0x75f478:c.instructions+=1;goto B75f478;
case 0x75f47b:goto L75f47b;
case 0x75f47c:goto L75f47c;
case 0x75f47f:c.instructions+=6;goto B75f47f;
case 0x75f483:c.instructions+=5;goto B75f483;
case 0x75f485:c.instructions+=4;goto B75f485;
case 0x75f486:c.instructions+=3;goto B75f486;
case 0x75f488:c.instructions+=2;goto B75f488;
case 0x75f489:c.instructions+=1;goto B75f489;
case 0x75f48a:goto L75f48a;
case 0x75f48b:c.instructions+=3;goto B75f48b;
case 0x75f48f:c.instructions+=2;goto B75f48f;
case 0x75f490:c.instructions+=1;goto B75f490;
case 0x75f495:goto L75f495;
case 0x75f497:c.instructions+=2;goto B75f497;
case 0x75f498:c.instructions+=1;goto B75f498;
case 0x75f49a:goto L75f49a;
case 0x75f49d:c.instructions+=2;goto B75f49d;
case 0x75f49e:c.instructions+=1;goto B75f49e;
case 0x75f49f:goto L75f49f;
case 0x75f4a3:c.instructions+=1;goto B75f4a3;
case 0x75f4a5:goto L75f4a5;
case 0x75f4a8:c.instructions+=1;goto B75f4a8;
case 0x75f4ad:goto L75f4ad;
case 0x75f4ae:c.instructions+=4;goto B75f4ae;
case 0x75f4b0:c.instructions+=3;goto B75f4b0;
case 0x75f4b2:c.instructions+=2;goto B75f4b2;
case 0x75f4b3:c.instructions+=1;goto B75f4b3;
case 0x75f4b4:goto L75f4b4;
case 0x75f4b6:c.instructions+=2;goto B75f4b6;
case 0x75f4b7:c.instructions+=1;goto B75f4b7;
case 0x75f4b8:goto L75f4b8;
case 0x75f4ba:c.instructions+=2;goto B75f4ba;
case 0x75f4bf:c.instructions+=1;goto B75f4bf;
case 0x75f4c4:goto L75f4c4;
case 0x75f4c6:c.instructions+=4;goto B75f4c6;
case 0x75f4c9:c.instructions+=3;goto B75f4c9;
case 0x75f4cc:c.instructions+=2;goto B75f4cc;
case 0x75f4ce:c.instructions+=1;goto B75f4ce;
case 0x75f4d3:goto L75f4d3;
case 0x75f4d4:c.instructions+=2;goto B75f4d4;
case 0x75f4d7:c.instructions+=1;goto B75f4d7;
case 0x75f4d9:goto L75f4d9;
case 0x75f4dc:c.instructions+=2;goto B75f4dc;
case 0x75f4e2:c.instructions+=1;goto B75f4e2;
case 0x75f4e8:goto L75f4e8;
case 0x75f4ed:c.instructions+=3;goto B75f4ed;
case 0x75f4f0:c.instructions+=2;goto B75f4f0;
case 0x75f4f2:c.instructions+=1;goto B75f4f2;
case 0x75f4f4:goto L75f4f4;
case 0x75f4f8:c.instructions+=1;goto B75f4f8;
case 0x75f4fa:goto L75f4fa;
case 0x75f4fb:c.instructions+=2;goto B75f4fb;
case 0x75f4fc:c.instructions+=1;goto B75f4fc;
case 0x75f501:goto L75f501;
case 0x75f502:c.instructions+=9;goto B75f502;
case 0x75f503:c.instructions+=8;goto B75f503;
case 0x75f505:c.instructions+=7;goto B75f505;
case 0x75f506:c.instructions+=6;goto B75f506;
case 0x75f509:c.instructions+=5;goto B75f509;
case 0x75f50e:c.instructions+=4;goto B75f50e;
case 0x75f511:c.instructions+=3;goto B75f511;
case 0x75f514:c.instructions+=2;goto B75f514;
case 0x75f517:c.instructions+=1;goto B75f517;
case 0x75f519:goto L75f519;
case 0x75f51c:c.instructions+=1;goto B75f51c;
case 0x75f51e:goto L75f51e;
case 0x75f51f:c.instructions+=1;goto B75f51f;
case 0x75f524:goto L75f524;
case 0x75f525:c.instructions+=2;goto B75f525;
case 0x75f528:c.instructions+=1;goto B75f528;
case 0x75f52a:goto L75f52a;
case 0x75f52d:c.instructions+=1;goto B75f52d;
case 0x75f52f:goto L75f52f;
case 0x75f532:c.instructions+=1;goto B75f532;
case 0x75f534:goto L75f534;
case 0x75f537:c.instructions+=1;goto B75f537;
case 0x75f539:goto L75f539;
case 0x75f53a:c.instructions+=1;goto B75f53a;
case 0x75f53f:goto L75f53f;
case 0x75f540:c.instructions+=2;goto B75f540;
case 0x75f543:c.instructions+=1;goto B75f543;
case 0x75f545:goto L75f545;
case 0x75f548:goto L75f548;
case 0x75f54b:c.instructions+=1;goto B75f54b;
case 0x75f550:goto L75f550;
case 0x75f551:c.instructions+=1;goto B75f551;
case 0x75f553:goto L75f553;
case 0x75f555:c.instructions+=1;goto B75f555;
case 0x75f558:goto L75f558;
case 0x75f55d:c.instructions+=3;goto B75f55d;
case 0x75f560:c.instructions+=2;goto B75f560;
case 0x75f561:c.instructions+=1;goto B75f561;
case 0x75f566:goto L75f566;
case 0x75f567:c.instructions+=2;goto B75f567;
case 0x75f568:c.instructions+=1;goto B75f568;
case 0x75f569:goto L75f569;
case 0x75f56d:c.instructions+=1;goto B75f56d;
case 0x75f572:goto L75f572;
case 0x75f576:c.instructions+=2;goto B75f576;
case 0x75f579:c.instructions+=1;goto B75f579;
case 0x75f57b:goto L75f57b;
case 0x75f57e:goto L75f57e;
case 0x75f583:goto L75f583;
case 0x75f584:goto L75f584;
case 0x75f586:c.instructions+=1;goto B75f586;
case 0x75f58b:goto L75f58b;
case 0x75f58c:c.instructions+=1;goto B75f58c;
case 0x75f58d:goto L75f58d;
case 0x75f58f:c.instructions+=2;goto B75f58f;
case 0x75f594:c.instructions+=1;goto B75f594;
case 0x75f599:goto L75f599;
case 0x75f59b:c.instructions+=2;goto B75f59b;
case 0x75f59e:c.instructions+=1;goto B75f59e;
case 0x75f5a0:goto L75f5a0;
case 0x75f5a1:c.instructions+=1;goto B75f5a1;
case 0x75f5a6:goto L75f5a6;
case 0x75f5a7:c.instructions+=1;goto B75f5a7;
case 0x75f5a9:goto L75f5a9;
case 0x75f5ac:c.instructions+=1;goto B75f5ac;
case 0x75f5b1:goto L75f5b1;
case 0x75f5b2:c.instructions+=3;goto B75f5b2;
case 0x75f5b5:c.instructions+=2;goto B75f5b5;
case 0x75f5b8:c.instructions+=1;goto B75f5b8;
case 0x75f5bd:goto L75f5bd;
case 0x75f5be:c.instructions+=3;goto B75f5be;
case 0x75f5c1:c.instructions+=2;goto B75f5c1;
case 0x75f5c5:c.instructions+=1;goto B75f5c5;
case 0x75f5ca:goto L75f5ca;
case 0x75f5cd:goto L75f5cd;
case 0x75f5d2:goto L75f5d2;
case 0x75f5d3:goto L75f5d3;
case 0x75f5d6:c.instructions+=1;goto B75f5d6;
case 0x75f5db:goto L75f5db;
case 0x75f5dc:c.instructions+=1;goto B75f5dc;
case 0x75f5dd:goto L75f5dd;
case 0x75f5df:c.instructions+=1;goto B75f5df;
case 0x75f5e4:goto L75f5e4;
case 0x75f5e5:c.instructions+=1;goto B75f5e5;
case 0x75f5e6:goto L75f5e6;
case 0x75f5eb:c.instructions+=2;goto B75f5eb;
case 0x75f5ed:c.instructions+=1;goto B75f5ed;
case 0x75f5ef:goto L75f5ef;
case 0x75f5f1:goto L75f5f1;
case 0x75f5f2:c.instructions+=1;goto B75f5f2;
case 0x75f5f7:goto L75f5f7;
case 0x75f5f9:c.instructions+=2;goto B75f5f9;
case 0x75f5fb:c.instructions+=1;goto B75f5fb;
case 0x75f5fd:goto L75f5fd;
case 0x75f5ff:c.instructions+=1;goto B75f5ff;
case 0x75f604:goto L75f604;
case 0x75f605:goto L75f605;
case 0x75f606:c.instructions+=1;goto B75f606;
case 0x75f60b:goto L75f60b;
case 0x75f60c:c.instructions+=2;goto B75f60c;
case 0x75f610:c.instructions+=1;goto B75f610;
case 0x75f617:goto L75f617;
case 0x75f619:c.instructions+=2;goto B75f619;
case 0x75f61e:c.instructions+=1;goto B75f61e;
case 0x75f623:goto L75f623;
case 0x75f629:c.instructions+=1;goto B75f629;
case 0x75f62f:goto L75f62f;
case 0x75f631:c.instructions+=2;goto B75f631;
case 0x75f633:c.instructions+=1;goto B75f633;
case 0x75f635:goto L75f635;
case 0x75f638:c.instructions+=3;goto B75f638;
case 0x75f639:c.instructions+=2;goto B75f639;
case 0x75f63f:c.instructions+=1;goto B75f63f;
case 0x75f645:goto L75f645;
case 0x75f647:c.instructions+=1;goto B75f647;
case 0x75f649:goto L75f649;
case 0x75f64b:c.instructions+=1;goto B75f64b;
case 0x75f650:goto L75f650;
case 0x75f651:goto L75f651;
case 0x75f657:goto L75f657;
case 0x75f659:c.instructions+=1;goto B75f659;
case 0x75f65b:goto L75f65b;
case 0x75f65e:c.instructions+=6;goto B75f65e;
case 0x75f661:c.instructions+=5;goto B75f661;
case 0x75f664:c.instructions+=4;goto B75f664;
case 0x75f667:c.instructions+=3;goto B75f667;
case 0x75f66a:c.instructions+=2;goto B75f66a;
case 0x75f66b:c.instructions+=1;goto B75f66b;
case 0x75f670:goto L75f670;
case 0x75f671:goto L75f671;
case 0x75f676:c.instructions+=2;goto B75f676;
case 0x75f678:c.instructions+=1;goto B75f678;
case 0x75f67a:goto L75f67a;
case 0x75f67c:goto L75f67c;
case 0x75f680:c.instructions+=2;goto B75f680;
case 0x75f683:c.instructions+=1;goto B75f683;
case 0x75f686:goto L75f686;
case 0x75f687:c.instructions+=1;goto B75f687;
case 0x75f68c:goto L75f68c;
case 0x75f68d:c.instructions+=3;goto B75f68d;
case 0x75f691:c.instructions+=2;goto B75f691;
case 0x75f693:c.instructions+=1;goto B75f693;
case 0x75f698:goto L75f698;
case 0x75f69b:goto L75f69b;
case 0x75f69e:c.instructions+=6;goto B75f69e;
case 0x75f6a0:c.instructions+=5;goto B75f6a0;
case 0x75f6a2:c.instructions+=4;goto B75f6a2;
case 0x75f6a5:c.instructions+=3;goto B75f6a5;
case 0x75f6a6:c.instructions+=2;goto B75f6a6;
case 0x75f6a7:c.instructions+=1;goto B75f6a7;
case 0x75f6ac:goto L75f6ac;
case 0x75f6ad:c.instructions+=2;goto B75f6ad;
case 0x75f6ae:c.instructions+=1;goto B75f6ae;
case 0x75f6af:goto L75f6af;
case 0x75f6b2:c.instructions+=2;goto B75f6b2;
case 0x75f6b5:c.instructions+=1;goto B75f6b5;
case 0x75f6bb:goto L75f6bb;
case 0x75f6bc:c.instructions+=7;goto B75f6bc;
case 0x75f6be:c.instructions+=6;goto B75f6be;
case 0x75f6bf:c.instructions+=5;goto B75f6bf;
case 0x75f6c0:c.instructions+=4;goto B75f6c0;
case 0x75f6c3:c.instructions+=3;goto B75f6c3;
case 0x75f6c5:c.instructions+=2;goto B75f6c5;
case 0x75f6c7:c.instructions+=1;goto B75f6c7;
case 0x75f6c9:goto L75f6c9;
case 0x75f6ce:goto L75f6ce;
case 0x75f6d4:c.instructions+=2;goto B75f6d4;
case 0x75f6d6:c.instructions+=1;goto B75f6d6;
case 0x75f6d8:goto L75f6d8;
case 0x75f6d9:c.instructions+=3;goto B75f6d9;
case 0x75f6de:c.instructions+=2;goto B75f6de;
case 0x75f6e0:c.instructions+=1;goto B75f6e0;
case 0x75f6e5:goto L75f6e5;
case 0x75f6e7:c.instructions+=4;goto B75f6e7;
case 0x75f6e9:c.instructions+=3;goto B75f6e9;
case 0x75f6ea:c.instructions+=2;goto B75f6ea;
case 0x75f6eb:c.instructions+=1;goto B75f6eb;
case 0x75f6ed:goto L75f6ed;
case 0x75f6ee:c.instructions+=1;goto B75f6ee;
case 0x75f6f3:goto L75f6f3;
case 0x75f6f6:c.instructions+=7;goto B75f6f6;
case 0x75f6fa:c.instructions+=6;goto B75f6fa;
case 0x75f6fd:c.instructions+=5;goto B75f6fd;
case 0x75f700:c.instructions+=4;goto B75f700;
case 0x75f702:c.instructions+=3;goto B75f702;
case 0x75f703:c.instructions+=2;goto B75f703;
case 0x75f706:c.instructions+=1;goto B75f706;
case 0x75f708:goto L75f708;
case 0x75f70b:goto L75f70b;
case 0x75f70c:c.instructions+=6;goto B75f70c;
case 0x75f70f:c.instructions+=5;goto B75f70f;
case 0x75f710:c.instructions+=4;goto B75f710;
case 0x75f715:c.instructions+=3;goto B75f715;
case 0x75f718:c.instructions+=2;goto B75f718;
case 0x75f71b:c.instructions+=1;goto B75f71b;
case 0x75f721:goto L75f721;
case 0x75f723:c.instructions+=1;goto B75f723;
case 0x75f725:goto L75f725;
case 0x75f72b:goto L75f72b;
case 0x75f72d:goto L75f72d;
case 0x75f72e:c.instructions+=1;goto B75f72e;
case 0x75f733:goto L75f733;
case 0x75f735:c.instructions+=2;goto B75f735;
case 0x75f736:c.instructions+=1;goto B75f736;
case 0x75f738:goto L75f738;
case 0x75f739:c.instructions+=1;goto B75f739;
case 0x75f73e:goto L75f73e;
case 0x75f73f:goto L75f73f;
case 0x75f741:goto L75f741;
case 0x75f742:goto L75f742;
case 0x75f743:c.instructions+=3;goto B75f743;
case 0x75f744:c.instructions+=2;goto B75f744;
case 0x75f745:c.instructions+=1;goto B75f745;
case 0x75f750:goto L75f750;
case 0x75f751:c.instructions+=4;goto B75f751;
case 0x75f752:c.instructions+=3;goto B75f752;
case 0x75f756:c.instructions+=2;goto B75f756;
case 0x75f758:c.instructions+=1;goto B75f758;
case 0x75f75a:goto L75f75a;
case 0x75f75e:c.instructions+=8;goto B75f75e;
case 0x75f762:c.instructions+=7;goto B75f762;
case 0x75f764:c.instructions+=6;goto B75f764;
case 0x75f766:c.instructions+=5;goto B75f766;
case 0x75f768:c.instructions+=4;goto B75f768;
case 0x75f76c:c.instructions+=3;goto B75f76c;
case 0x75f76e:c.instructions+=2;goto B75f76e;
case 0x75f770:c.instructions+=1;goto B75f770;
case 0x75f772:goto L75f772;
case 0x75f774:c.instructions+=3;goto B75f774;
case 0x75f778:c.instructions+=2;goto B75f778;
case 0x75f77c:c.instructions+=1;goto B75f77c;
case 0x75f780:goto L75f780;
case 0x75f782:c.instructions+=5;goto B75f782;
case 0x75f784:c.instructions+=4;goto B75f784;
case 0x75f786:c.instructions+=3;goto B75f786;
case 0x75f788:c.instructions+=2;goto B75f788;
case 0x75f78a:c.instructions+=1;goto B75f78a;
case 0x75f78c:goto L75f78c;
case 0x75f78e:c.instructions+=7;goto B75f78e;
case 0x75f790:c.instructions+=6;goto B75f790;
case 0x75f794:c.instructions+=5;goto B75f794;
case 0x75f796:c.instructions+=4;goto B75f796;
case 0x75f79a:c.instructions+=3;goto B75f79a;
case 0x75f79c:c.instructions+=2;goto B75f79c;
case 0x75f79e:c.instructions+=1;goto B75f79e;
case 0x75f7a0:goto L75f7a0;
case 0x75f7a4:c.instructions+=1;goto B75f7a4;
case 0x75f7a6:goto L75f7a6;
case 0x75f7a8:goto L75f7a8;
case 0x75f7ac:c.instructions+=1;goto B75f7ac;
case 0x75f7ae:goto L75f7ae;
case 0x75f7af:goto L75f7af;
case 0x75f7b1:c.instructions+=1;goto B75f7b1;
case 0x75f7b3:goto L75f7b3;
case 0x75f7b4:c.instructions+=2;goto B75f7b4;
case 0x75f7b5:c.instructions+=1;goto B75f7b5;
case 0x75f7b8:goto L75f7b8;
case 0x75f7b9:c.instructions+=12;goto B75f7b9;
case 0x75f7bb:c.instructions+=11;goto B75f7bb;
case 0x75f7be:c.instructions+=10;goto B75f7be;
case 0x75f7c1:c.instructions+=9;goto B75f7c1;
case 0x75f7c2:c.instructions+=8;goto B75f7c2;
case 0x75f7c3:c.instructions+=7;goto B75f7c3;
case 0x75f7c4:c.instructions+=6;goto B75f7c4;
case 0x75f7c7:c.instructions+=5;goto B75f7c7;
case 0x75f7cb:c.instructions+=4;goto B75f7cb;
case 0x75f7cd:c.instructions+=3;goto B75f7cd;
case 0x75f7cf:c.instructions+=2;goto B75f7cf;
case 0x75f7d2:c.instructions+=1;goto B75f7d2;
case 0x75f7d4:goto L75f7d4;
case 0x75f7d6:c.instructions+=2;goto B75f7d6;
case 0x75f7d8:c.instructions+=1;goto B75f7d8;
case 0x75f7da:goto L75f7da;
case 0x75f7dd:c.instructions+=3;goto B75f7dd;
case 0x75f7e1:c.instructions+=2;goto B75f7e1;
case 0x75f7e3:c.instructions+=1;goto B75f7e3;
case 0x75f7e5:goto L75f7e5;
case 0x75f7e8:goto L75f7e8;
case 0x75f7ec:c.instructions+=5;goto B75f7ec;
case 0x75f7ef:c.instructions+=4;goto B75f7ef;
case 0x75f7f1:c.instructions+=3;goto B75f7f1;
case 0x75f7f2:c.instructions+=2;goto B75f7f2;
case 0x75f7f5:c.instructions+=1;goto B75f7f5;
case 0x75f7f8:goto L75f7f8;
case 0x75f7fa:c.instructions+=3;goto B75f7fa;
case 0x75f7fb:c.instructions+=2;goto B75f7fb;
case 0x75f7fc:c.instructions+=1;goto B75f7fc;
case 0x75f7fe:goto L75f7fe;
case 0x75f800:goto L75f800;
case 0x75f803:c.instructions+=3;goto B75f803;
case 0x75f807:c.instructions+=2;goto B75f807;
case 0x75f809:c.instructions+=1;goto B75f809;
case 0x75f80b:goto L75f80b;
case 0x75f80e:c.instructions+=1;goto B75f80e;
case 0x75f810:goto L75f810;
case 0x75f813:c.instructions+=2;goto B75f813;
case 0x75f815:c.instructions+=1;goto B75f815;
case 0x75f818:goto L75f818;
case 0x75f81a:goto L75f81a;
case 0x75f81d:c.instructions+=1;goto B75f81d;
case 0x75f81f:goto L75f81f;
case 0x75f821:goto L75f821;
case 0x75f822:c.instructions+=4;goto B75f822;
case 0x75f823:c.instructions+=3;goto B75f823;
case 0x75f824:c.instructions+=2;goto B75f824;
case 0x75f825:c.instructions+=1;goto B75f825;
case 0x75f826:goto L75f826;
case 0x75f828:c.instructions+=1;goto B75f828;
case 0x75f82a:goto L75f82a;
case 0x75f82c:c.instructions+=1;goto B75f82c;
case 0x75f82e:goto L75f82e;
case 0x75f831:c.instructions+=2;goto B75f831;
case 0x75f834:c.instructions+=1;goto B75f834;
case 0x75f837:goto L75f837;
case 0x75f839:c.instructions+=6;goto B75f839;
case 0x75f83b:c.instructions+=5;goto B75f83b;
case 0x75f83c:c.instructions+=4;goto B75f83c;
case 0x75f83e:c.instructions+=3;goto B75f83e;
case 0x75f841:c.instructions+=2;goto B75f841;
case 0x75f842:c.instructions+=1;goto B75f842;
case 0x75f844:goto L75f844;
case 0x75f845:c.instructions+=10;goto B75f845;
case 0x75f847:c.instructions+=9;goto B75f847;
case 0x75f84a:c.instructions+=8;goto B75f84a;
case 0x75f84f:c.instructions+=7;goto B75f84f;
case 0x75f852:c.instructions+=6;goto B75f852;
case 0x75f853:c.instructions+=5;goto B75f853;
case 0x75f854:c.instructions+=4;goto B75f854;
case 0x75f857:c.instructions+=3;goto B75f857;
case 0x75f858:c.instructions+=2;goto B75f858;
case 0x75f85b:c.instructions+=1;goto B75f85b;
case 0x75f860:goto L75f860;
case 0x75f862:c.instructions+=5;goto B75f862;
case 0x75f863:c.instructions+=4;goto B75f863;
case 0x75f866:c.instructions+=3;goto B75f866;
case 0x75f868:c.instructions+=2;goto B75f868;
case 0x75f86b:c.instructions+=1;goto B75f86b;
case 0x75f86d:goto L75f86d;
case 0x75f86f:goto L75f86f;
case 0x75f870:goto L75f870;
case 0x75f872:c.instructions+=11;goto B75f872;
case 0x75f875:c.instructions+=10;goto B75f875;
case 0x75f877:c.instructions+=9;goto B75f877;
case 0x75f879:c.instructions+=8;goto B75f879;
case 0x75f87b:c.instructions+=7;goto B75f87b;
case 0x75f87d:c.instructions+=6;goto B75f87d;
case 0x75f880:c.instructions+=5;goto B75f880;
case 0x75f884:c.instructions+=4;goto B75f884;
case 0x75f886:c.instructions+=3;goto B75f886;
case 0x75f887:c.instructions+=2;goto B75f887;
case 0x75f889:c.instructions+=1;goto B75f889;
case 0x75f88b:goto L75f88b;
case 0x75f88e:c.instructions+=2;goto B75f88e;
case 0x75f890:c.instructions+=1;goto B75f890;
case 0x75f892:goto L75f892;
case 0x75f895:c.instructions+=2;goto B75f895;
case 0x75f898:c.instructions+=1;goto B75f898;
case 0x75f89a:goto L75f89a;
case 0x75f89c:c.instructions+=1;goto B75f89c;
case 0x75f89e:goto L75f89e;
case 0x75f89f:goto L75f89f;
case 0x75f8a1:c.instructions+=10;goto B75f8a1;
case 0x75f8a4:c.instructions+=9;goto B75f8a4;
case 0x75f8a6:c.instructions+=8;goto B75f8a6;
case 0x75f8a8:c.instructions+=7;goto B75f8a8;
case 0x75f8aa:c.instructions+=6;goto B75f8aa;
case 0x75f8ab:c.instructions+=5;goto B75f8ab;
case 0x75f8ad:c.instructions+=4;goto B75f8ad;
case 0x75f8b0:c.instructions+=3;goto B75f8b0;
case 0x75f8b4:c.instructions+=2;goto B75f8b4;
case 0x75f8b6:c.instructions+=1;goto B75f8b6;
case 0x75f8b8:goto L75f8b8;
case 0x75f8ba:c.instructions+=1;goto B75f8ba;
case 0x75f8bc:goto L75f8bc;
case 0x75f8bf:c.instructions+=9;goto B75f8bf;
case 0x75f8c1:c.instructions+=8;goto B75f8c1;
case 0x75f8c3:c.instructions+=7;goto B75f8c3;
case 0x75f8c5:c.instructions+=6;goto B75f8c5;
case 0x75f8c6:c.instructions+=5;goto B75f8c6;
case 0x75f8c8:c.instructions+=4;goto B75f8c8;
case 0x75f8cb:c.instructions+=3;goto B75f8cb;
case 0x75f8cf:c.instructions+=2;goto B75f8cf;
case 0x75f8d1:c.instructions+=1;goto B75f8d1;
case 0x75f8d3:goto L75f8d3;
case 0x75f8d4:goto L75f8d4;
case 0x75f8d7:c.instructions+=1;goto B75f8d7;
case 0x75f8d9:goto L75f8d9;
case 0x75f8db:goto L75f8db;
case 0x75f8de:c.instructions+=1;goto B75f8de;
case 0x75f8df:goto L75f8df;
case 0x75f8e2:c.instructions+=12;goto B75f8e2;
case 0x75f8e5:c.instructions+=11;goto B75f8e5;
case 0x75f8e8:c.instructions+=10;goto B75f8e8;
case 0x75f8ea:c.instructions+=9;goto B75f8ea;
case 0x75f8ec:c.instructions+=8;goto B75f8ec;
case 0x75f8ee:c.instructions+=7;goto B75f8ee;
case 0x75f8f0:c.instructions+=6;goto B75f8f0;
case 0x75f8f3:c.instructions+=5;goto B75f8f3;
case 0x75f8f4:c.instructions+=4;goto B75f8f4;
case 0x75f8f6:c.instructions+=3;goto B75f8f6;
case 0x75f8f7:c.instructions+=2;goto B75f8f7;
case 0x75f8f8:c.instructions+=1;goto B75f8f8;
case 0x75f8fd:goto L75f8fd;
case 0x75f8fe:c.instructions+=1;goto B75f8fe;
case 0x75f8ff:goto L75f8ff;
case 0x75f900:c.instructions+=15;goto B75f900;
case 0x75f902:c.instructions+=14;goto B75f902;
case 0x75f905:c.instructions+=13;goto B75f905;
case 0x75f908:c.instructions+=12;goto B75f908;
case 0x75f90b:c.instructions+=11;goto B75f90b;
case 0x75f90e:c.instructions+=10;goto B75f90e;
case 0x75f911:c.instructions+=9;goto B75f911;
case 0x75f912:c.instructions+=8;goto B75f912;
case 0x75f915:c.instructions+=7;goto B75f915;
case 0x75f917:c.instructions+=6;goto B75f917;
case 0x75f91a:c.instructions+=5;goto B75f91a;
case 0x75f91d:c.instructions+=4;goto B75f91d;
case 0x75f920:c.instructions+=3;goto B75f920;
case 0x75f921:c.instructions+=2;goto B75f921;
case 0x75f928:c.instructions+=1;goto B75f928;
case 0x75f92d:goto L75f92d;
case 0x75f930:c.instructions+=3;goto B75f930;
case 0x75f933:c.instructions+=2;goto B75f933;
case 0x75f935:c.instructions+=1;goto B75f935;
case 0x75f937:goto L75f937;
case 0x75f93a:c.instructions+=3;goto B75f93a;
case 0x75f93d:c.instructions+=2;goto B75f93d;
case 0x75f940:c.instructions+=1;goto B75f940;
case 0x75f942:goto L75f942;
case 0x75f945:c.instructions+=3;goto B75f945;
case 0x75f946:c.instructions+=2;goto B75f946;
case 0x75f948:c.instructions+=1;goto B75f948;
case 0x75f94d:goto L75f94d;
case 0x75f94e:c.instructions+=1;goto B75f94e;
case 0x75f94f:goto L75f94f;
case 0x75f952:c.instructions+=1;goto B75f952;
case 0x75f954:goto L75f954;
case 0x75f957:c.instructions+=2;goto B75f957;
case 0x75f95a:c.instructions+=1;goto B75f95a;
case 0x75f95c:goto L75f95c;
case 0x75f95f:c.instructions+=3;goto B75f95f;
case 0x75f960:c.instructions+=2;goto B75f960;
case 0x75f962:c.instructions+=1;goto B75f962;
case 0x75f967:goto L75f967;
case 0x75f968:c.instructions+=1;goto B75f968;
case 0x75f969:goto L75f969;
case 0x75f96b:c.instructions+=3;goto B75f96b;
case 0x75f96c:c.instructions+=2;goto B75f96c;
case 0x75f96d:c.instructions+=1;goto B75f96d;
case 0x75f96e:goto L75f96e;
case 0x75f975:c.instructions+=3;goto B75f975;
case 0x75f976:c.instructions+=2;goto B75f976;
case 0x75f97c:c.instructions+=1;goto B75f97c;
case 0x75f97e:goto L75f97e;
case 0x75f980:c.instructions+=2;goto B75f980;
case 0x75f981:c.instructions+=1;goto B75f981;
case 0x75f982:goto L75f982;
case 0x75f984:c.instructions+=3;goto B75f984;
case 0x75f985:c.instructions+=2;goto B75f985;
case 0x75f986:c.instructions+=1;goto B75f986;
case 0x75f988:goto L75f988;
case 0x75f98e:c.instructions+=1;goto B75f98e;
case 0x75f990:goto L75f990;
case 0x75f995:goto L75f995;
case 0x75f997:c.instructions+=1;goto B75f997;
case 0x75f999:goto L75f999;
case 0x75f99f:c.instructions+=2;goto B75f99f;
case 0x75f9a1:c.instructions+=1;goto B75f9a1;
case 0x75f9a3:goto L75f9a3;
case 0x75f9a7:c.instructions+=2;goto B75f9a7;
case 0x75f9a9:c.instructions+=1;goto B75f9a9;
case 0x75f9ab:goto L75f9ab;
case 0x75f9ac:c.instructions+=1;goto B75f9ac;
case 0x75f9b1:goto L75f9b1;
case 0x75f9b2:c.instructions+=2;goto B75f9b2;
case 0x75f9b4:c.instructions+=1;goto B75f9b4;
case 0x75f9b6:goto L75f9b6;
case 0x75f9b7:c.instructions+=1;goto B75f9b7;
case 0x75f9bc:goto L75f9bc;
case 0x75f9be:c.instructions+=2;goto B75f9be;
case 0x75f9bf:c.instructions+=1;goto B75f9bf;
case 0x75f9c1:goto L75f9c1;
case 0x75f9c3:c.instructions+=2;goto B75f9c3;
case 0x75f9c7:c.instructions+=1;goto B75f9c7;
case 0x75f9c9:goto L75f9c9;
case 0x75f9ca:c.instructions+=3;goto B75f9ca;
case 0x75f9cb:c.instructions+=2;goto B75f9cb;
case 0x75f9cc:c.instructions+=1;goto B75f9cc;
case 0x75f9d1:goto L75f9d1;
case 0x75f9d4:c.instructions+=2;goto B75f9d4;
case 0x75f9d6:c.instructions+=1;goto B75f9d6;
case 0x75f9d8:goto L75f9d8;
case 0x75f9db:goto L75f9db;
case 0x75f9dd:c.instructions+=2;goto B75f9dd;
case 0x75f9df:c.instructions+=1;goto B75f9df;
case 0x75f9e1:goto L75f9e1;
case 0x75f9e3:goto L75f9e3;
case 0x75f9e4:c.instructions+=3;goto B75f9e4;
case 0x75f9e5:c.instructions+=2;goto B75f9e5;
case 0x75f9e6:c.instructions+=1;goto B75f9e6;
case 0x75f9e7:goto L75f9e7;
case 0x75f9e9:c.instructions+=2;goto B75f9e9;
case 0x75f9ed:c.instructions+=1;goto B75f9ed;
case 0x75f9ef:goto L75f9ef;
case 0x75f9f1:c.instructions+=2;goto B75f9f1;
case 0x75f9f6:c.instructions+=1;goto B75f9f6;
case 0x75f9fb:goto L75f9fb;
case 0x75f9fd:c.instructions+=1;goto B75f9fd;
case 0x75fa02:goto L75fa02;
case 0x75fa03:c.instructions+=3;goto B75fa03;
case 0x75fa07:c.instructions+=2;goto B75fa07;
case 0x75fa0a:c.instructions+=1;goto B75fa0a;
case 0x75fa0f:goto L75fa0f;
case 0x75fa10:c.instructions+=3;goto B75fa10;
case 0x75fa13:c.instructions+=2;goto B75fa13;
case 0x75fa17:c.instructions+=1;goto B75fa17;
case 0x75fa1c:goto L75fa1c;
case 0x75fa1f:c.instructions+=1;goto B75fa1f;
case 0x75fa24:goto L75fa24;
case 0x75fa25:goto L75fa25;
case 0x75fa27:c.instructions+=1;goto B75fa27;
case 0x75fa2c:goto L75fa2c;
case 0x75fa2d:c.instructions+=1;goto B75fa2d;
case 0x75fa2e:goto L75fa2e;
case 0x75fa2f:c.instructions+=5;goto B75fa2f;
case 0x75fa31:c.instructions+=4;goto B75fa31;
case 0x75fa32:c.instructions+=3;goto B75fa32;
case 0x75fa35:c.instructions+=2;goto B75fa35;
case 0x75fa38:c.instructions+=1;goto B75fa38;
case 0x75fa3a:goto L75fa3a;
case 0x75fa3c:c.instructions+=1;goto B75fa3c;
case 0x75fa41:goto L75fa41;
case 0x75fa46:goto L75fa46;
case 0x75fa48:c.instructions+=2;goto B75fa48;
case 0x75fa4d:c.instructions+=1;goto B75fa4d;
case 0x75fa4f:goto L75fa4f;
case 0x75fa54:c.instructions+=1;goto B75fa54;
case 0x75fa56:goto L75fa56;
case 0x75fa5c:c.instructions+=4;goto B75fa5c;
case 0x75fa5f:c.instructions+=3;goto B75fa5f;
case 0x75fa62:c.instructions+=2;goto B75fa62;
case 0x75fa63:c.instructions+=1;goto B75fa63;
case 0x75fa68:goto L75fa68;
case 0x75fa6f:c.instructions+=3;goto B75fa6f;
case 0x75fa70:c.instructions+=2;goto B75fa70;
case 0x75fa72:c.instructions+=1;goto B75fa72;
case 0x75fa78:goto L75fa78;
case 0x75fa79:c.instructions+=1;goto B75fa79;
case 0x75fa7e:goto L75fa7e;
case 0x75fa80:c.instructions+=2;goto B75fa80;
case 0x75fa81:c.instructions+=1;goto B75fa81;
case 0x75fa87:goto L75fa87;
case 0x75fa8c:c.instructions+=4;goto B75fa8c;
case 0x75fa8f:c.instructions+=3;goto B75fa8f;
case 0x75fa92:c.instructions+=2;goto B75fa92;
case 0x75fa93:c.instructions+=1;goto B75fa93;
case 0x75fa98:goto L75fa98;
case 0x75fa9a:c.instructions+=3;goto B75fa9a;
case 0x75fa9b:c.instructions+=2;goto B75fa9b;
case 0x75faa2:c.instructions+=1;goto B75faa2;
case 0x75faa7:goto L75faa7;
case 0x75faa8:c.instructions+=1;goto B75faa8;
case 0x75faad:goto L75faad;
case 0x75fab4:c.instructions+=3;goto B75fab4;
case 0x75fab5:c.instructions+=2;goto B75fab5;
case 0x75fab7:c.instructions+=1;goto B75fab7;
case 0x75fab9:goto L75fab9;
case 0x75faba:c.instructions+=1;goto B75faba;
case 0x75fabf:goto L75fabf;
case 0x75fac1:c.instructions+=2;goto B75fac1;
case 0x75fac2:c.instructions+=1;goto B75fac2;
case 0x75fac4:goto L75fac4;
case 0x75fac6:c.instructions+=6;goto B75fac6;
case 0x75facc:c.instructions+=5;goto B75facc;
case 0x75fad2:c.instructions+=4;goto B75fad2;
case 0x75fad5:c.instructions+=3;goto B75fad5;
case 0x75fadc:c.instructions+=2;goto B75fadc;
case 0x75fadf:c.instructions+=1;goto B75fadf;
case 0x75fae1:goto L75fae1;
case 0x75fae3:c.instructions+=2;goto B75fae3;
case 0x75fae9:c.instructions+=1;goto B75fae9;
case 0x75faec:goto L75faec;
case 0x75faed:c.instructions+=8;goto B75faed;
case 0x75faef:c.instructions+=7;goto B75faef;
case 0x75faf0:c.instructions+=6;goto B75faf0;
case 0x75faf1:c.instructions+=5;goto B75faf1;
case 0x75faf3:c.instructions+=4;goto B75faf3;
case 0x75faf5:c.instructions+=3;goto B75faf5;
case 0x75faf7:c.instructions+=2;goto B75faf7;
case 0x75faf9:c.instructions+=1;goto B75faf9;
case 0x75fafb:goto L75fafb;
case 0x75fafd:c.instructions+=2;goto B75fafd;
case 0x75faff:c.instructions+=1;goto B75faff;
case 0x75fb02:goto L75fb02;
case 0x75fb05:c.instructions+=11;goto B75fb05;
case 0x75fb06:c.instructions+=10;goto B75fb06;
case 0x75fb08:c.instructions+=9;goto B75fb08;
case 0x75fb0a:c.instructions+=8;goto B75fb0a;
case 0x75fb0d:c.instructions+=7;goto B75fb0d;
case 0x75fb10:c.instructions+=6;goto B75fb10;
case 0x75fb11:c.instructions+=5;goto B75fb11;
case 0x75fb13:c.instructions+=4;goto B75fb13;
case 0x75fb14:c.instructions+=3;goto B75fb14;
case 0x75fb16:c.instructions+=2;goto B75fb16;
case 0x75fb19:c.instructions+=1;goto B75fb19;
case 0x75fb1b:goto L75fb1b;
case 0x75fb1e:c.instructions+=2;goto B75fb1e;
case 0x75fb21:c.instructions+=1;goto B75fb21;
case 0x75fb24:goto L75fb24;
case 0x75fb27:c.instructions+=11;goto B75fb27;
case 0x75fb28:c.instructions+=10;goto B75fb28;
case 0x75fb2a:c.instructions+=9;goto B75fb2a;
case 0x75fb2c:c.instructions+=8;goto B75fb2c;
case 0x75fb2d:c.instructions+=7;goto B75fb2d;
case 0x75fb30:c.instructions+=6;goto B75fb30;
case 0x75fb33:c.instructions+=5;goto B75fb33;
case 0x75fb34:c.instructions+=4;goto B75fb34;
case 0x75fb36:c.instructions+=3;goto B75fb36;
case 0x75fb38:c.instructions+=2;goto B75fb38;
case 0x75fb3b:c.instructions+=1;goto B75fb3b;
case 0x75fb3d:goto L75fb3d;
case 0x75fb3f:c.instructions+=2;goto B75fb3f;
case 0x75fb42:c.instructions+=1;goto B75fb42;
case 0x75fb45:goto L75fb45;
case 0x75fb48:c.instructions+=8;goto B75fb48;
case 0x75fb4a:c.instructions+=7;goto B75fb4a;
case 0x75fb4b:c.instructions+=6;goto B75fb4b;
case 0x75fb4c:c.instructions+=5;goto B75fb4c;
case 0x75fb4e:c.instructions+=4;goto B75fb4e;
case 0x75fb50:c.instructions+=3;goto B75fb50;
case 0x75fb52:c.instructions+=2;goto B75fb52;
case 0x75fb55:c.instructions+=1;goto B75fb55;
case 0x75fb57:goto L75fb57;
case 0x75fb5a:c.instructions+=8;goto B75fb5a;
case 0x75fb5c:c.instructions+=7;goto B75fb5c;
case 0x75fb5d:c.instructions+=6;goto B75fb5d;
case 0x75fb5f:c.instructions+=5;goto B75fb5f;
case 0x75fb60:c.instructions+=4;goto B75fb60;
case 0x75fb62:c.instructions+=3;goto B75fb62;
case 0x75fb65:c.instructions+=2;goto B75fb65;
case 0x75fb68:c.instructions+=1;goto B75fb68;
case 0x75fb6b:goto L75fb6b;
case 0x75fb6e:c.instructions+=1;goto B75fb6e;
case 0x75fb71:goto L75fb71;
case 0x75fb73:goto L75fb73;
case 0x75fb74:c.instructions+=2;goto B75fb74;
case 0x75fb75:c.instructions+=1;goto B75fb75;
case 0x75fb76:goto L75fb76;
case 0x75fb78:goto L75fb78;
case 0x75fb7b:c.instructions+=11;goto B75fb7b;
case 0x75fb7f:c.instructions+=10;goto B75fb7f;
case 0x75fb80:c.instructions+=9;goto B75fb80;
case 0x75fb82:c.instructions+=8;goto B75fb82;
case 0x75fb83:c.instructions+=7;goto B75fb83;
case 0x75fb85:c.instructions+=6;goto B75fb85;
case 0x75fb88:c.instructions+=5;goto B75fb88;
case 0x75fb8b:c.instructions+=4;goto B75fb8b;
case 0x75fb8e:c.instructions+=3;goto B75fb8e;
case 0x75fb91:c.instructions+=2;goto B75fb91;
case 0x75fb93:c.instructions+=1;goto B75fb93;
case 0x75fb95:goto L75fb95;
case 0x75fb98:c.instructions+=5;goto B75fb98;
case 0x75fb9b:c.instructions+=4;goto B75fb9b;
case 0x75fb9e:c.instructions+=3;goto B75fb9e;
case 0x75fba5:c.instructions+=2;goto B75fba5;
case 0x75fbac:c.instructions+=1;goto B75fbac;
case 0x75fbae:goto L75fbae;
case 0x75fbb2:c.instructions+=1;goto B75fbb2;
case 0x75fbb8:goto L75fbb8;
case 0x75fbba:c.instructions+=1;goto B75fbba;
case 0x75fbbc:goto L75fbbc;
case 0x75fbc1:goto L75fbc1;
case 0x75fbc7:c.instructions+=2;goto B75fbc7;
case 0x75fbca:c.instructions+=1;goto B75fbca;
case 0x75fbcb:goto L75fbcb;
case 0x75fbcd:c.instructions+=1;goto B75fbcd;
case 0x75fbce:goto L75fbce;
case 0x75fbcf:c.instructions+=5;goto B75fbcf;
case 0x75fbd1:c.instructions+=4;goto B75fbd1;
case 0x75fbd4:c.instructions+=3;goto B75fbd4;
case 0x75fbd7:c.instructions+=2;goto B75fbd7;
case 0x75fbda:c.instructions+=1;goto B75fbda;
case 0x75fbdc:goto L75fbdc;
case 0x75fbe0:c.instructions+=1;goto B75fbe0;
case 0x75fbe2:goto L75fbe2;
case 0x75fbe5:c.instructions+=3;goto B75fbe5;
case 0x75fbe6:c.instructions+=2;goto B75fbe6;
case 0x75fbe7:c.instructions+=1;goto B75fbe7;
case 0x75fbed:goto L75fbed;
case 0x75fbef:c.instructions+=1;goto B75fbef;
case 0x75fbf1:goto L75fbf1;
case 0x75fbf4:c.instructions+=4;goto B75fbf4;
case 0x75fbf5:c.instructions+=3;goto B75fbf5;
case 0x75fbf8:c.instructions+=2;goto B75fbf8;
case 0x75fbf9:c.instructions+=1;goto B75fbf9;
case 0x75fbff:goto L75fbff;
case 0x75fc01:c.instructions+=1;goto B75fc01;
case 0x75fc03:goto L75fc03;
case 0x75fc07:c.instructions+=13;goto B75fc07;
case 0x75fc09:c.instructions+=12;goto B75fc09;
case 0x75fc0a:c.instructions+=11;goto B75fc0a;
case 0x75fc0e:c.instructions+=10;goto B75fc0e;
case 0x75fc0f:c.instructions+=9;goto B75fc0f;
case 0x75fc13:c.instructions+=8;goto B75fc13;
case 0x75fc14:c.instructions+=7;goto B75fc14;
case 0x75fc18:c.instructions+=6;goto B75fc18;
case 0x75fc19:c.instructions+=5;goto B75fc19;
case 0x75fc1d:c.instructions+=4;goto B75fc1d;
case 0x75fc1e:c.instructions+=3;goto B75fc1e;
case 0x75fc22:c.instructions+=2;goto B75fc22;
case 0x75fc23:c.instructions+=1;goto B75fc23;
case 0x75fc28:goto L75fc28;
case 0x75fc2b:c.instructions+=2;goto B75fc2b;
case 0x75fc2c:c.instructions+=1;goto B75fc2c;
case 0x75fc2d:goto L75fc2d;
case 0x75fc30:c.instructions+=2;goto B75fc30;
case 0x75fc31:c.instructions+=1;goto B75fc31;
case 0x75fc32:goto L75fc32;
case 0x75fc33:c.instructions+=11;goto B75fc33;
case 0x75fc35:c.instructions+=10;goto B75fc35;
case 0x75fc3b:c.instructions+=9;goto B75fc3b;
case 0x75fc40:c.instructions+=8;goto B75fc40;
case 0x75fc43:c.instructions+=7;goto B75fc43;
case 0x75fc44:c.instructions+=6;goto B75fc44;
case 0x75fc47:c.instructions+=5;goto B75fc47;
case 0x75fc48:c.instructions+=4;goto B75fc48;
case 0x75fc4e:c.instructions+=3;goto B75fc4e;
case 0x75fc4f:c.instructions+=2;goto B75fc4f;
case 0x75fc52:c.instructions+=1;goto B75fc52;
case 0x75fc58:goto L75fc58;
case 0x75fc5a:c.instructions+=2;goto B75fc5a;
case 0x75fc5d:c.instructions+=1;goto B75fc5d;
case 0x75fc5f:goto L75fc5f;
case 0x75fc65:goto L75fc65;
case 0x75fc67:c.instructions+=3;goto B75fc67;
case 0x75fc68:c.instructions+=2;goto B75fc68;
case 0x75fc6a:c.instructions+=1;goto B75fc6a;
case 0x75fc6c:goto L75fc6c;
case 0x75fc6f:c.instructions+=1;goto B75fc6f;
case 0x75fc71:goto L75fc71;
case 0x75fc74:c.instructions+=1;goto B75fc74;
case 0x75fc76:goto L75fc76;
case 0x75fc79:c.instructions+=1;goto B75fc79;
case 0x75fc7b:goto L75fc7b;
case 0x75fc80:goto L75fc80;
case 0x75fc86:goto L75fc86;
case 0x75fc89:c.instructions+=1;goto B75fc89;
case 0x75fc8b:goto L75fc8b;
case 0x75fc90:goto L75fc90;
case 0x75fc96:c.instructions+=1;goto B75fc96;
case 0x75fc98:goto L75fc98;
case 0x75fc9d:goto L75fc9d;
case 0x75fc9f:c.instructions+=1;goto B75fc9f;
case 0x75fca1:goto L75fca1;
case 0x75fca7:c.instructions+=9;goto B75fca7;
case 0x75fcaa:c.instructions+=8;goto B75fcaa;
case 0x75fcaf:c.instructions+=7;goto B75fcaf;
case 0x75fcb1:c.instructions+=6;goto B75fcb1;
case 0x75fcb3:c.instructions+=5;goto B75fcb3;
case 0x75fcb9:c.instructions+=4;goto B75fcb9;
case 0x75fcbb:c.instructions+=3;goto B75fcbb;
case 0x75fcc1:c.instructions+=2;goto B75fcc1;
case 0x75fcc2:c.instructions+=1;goto B75fcc2;
case 0x75fcc7:goto L75fcc7;
case 0x75fcca:c.instructions+=3;goto B75fcca;
case 0x75fcd0:c.instructions+=2;goto B75fcd0;
case 0x75fcd1:c.instructions+=1;goto B75fcd1;
case 0x75fcd6:goto L75fcd6;
case 0x75fcd9:c.instructions+=3;goto B75fcd9;
case 0x75fcdf:c.instructions+=2;goto B75fcdf;
case 0x75fce0:c.instructions+=1;goto B75fce0;
case 0x75fce5:goto L75fce5;
case 0x75fce8:c.instructions+=7;goto B75fce8;
case 0x75fcee:c.instructions+=6;goto B75fcee;
case 0x75fcf1:c.instructions+=5;goto B75fcf1;
case 0x75fcf7:c.instructions+=4;goto B75fcf7;
case 0x75fcf8:c.instructions+=3;goto B75fcf8;
case 0x75fcfb:c.instructions+=2;goto B75fcfb;
case 0x75fcfc:c.instructions+=1;goto B75fcfc;
case 0x75fd01:goto L75fd01;
case 0x75fd04:c.instructions+=1;goto B75fd04;
case 0x75fd06:goto L75fd06;
case 0x75fd09:c.instructions+=4;goto B75fd09;
case 0x75fd0c:c.instructions+=3;goto B75fd0c;
case 0x75fd0d:c.instructions+=2;goto B75fd0d;
case 0x75fd0e:c.instructions+=1;goto B75fd0e;
case 0x75fd13:goto L75fd13;
case 0x75fd14:c.instructions+=1;goto B75fd14;
case 0x75fd15:goto L75fd15;
case 0x75fd16:c.instructions+=10;goto B75fd16;
case 0x75fd18:c.instructions+=9;goto B75fd18;
case 0x75fd1e:c.instructions+=8;goto B75fd1e;
case 0x75fd23:c.instructions+=7;goto B75fd23;
case 0x75fd26:c.instructions+=6;goto B75fd26;
case 0x75fd27:c.instructions+=5;goto B75fd27;
case 0x75fd2a:c.instructions+=4;goto B75fd2a;
case 0x75fd30:c.instructions+=3;goto B75fd30;
case 0x75fd31:c.instructions+=2;goto B75fd31;
case 0x75fd34:c.instructions+=1;goto B75fd34;
case 0x75fd3a:goto L75fd3a;
case 0x75fd3c:c.instructions+=1;goto B75fd3c;
case 0x75fd3e:goto L75fd3e;
case 0x75fd44:goto L75fd44;
case 0x75fd46:c.instructions+=3;goto B75fd46;
case 0x75fd47:c.instructions+=2;goto B75fd47;
case 0x75fd49:c.instructions+=1;goto B75fd49;
case 0x75fd4b:goto L75fd4b;
case 0x75fd4e:c.instructions+=1;goto B75fd4e;
case 0x75fd50:goto L75fd50;
case 0x75fd53:c.instructions+=1;goto B75fd53;
case 0x75fd55:goto L75fd55;
case 0x75fd58:c.instructions+=1;goto B75fd58;
case 0x75fd5a:goto L75fd5a;
case 0x75fd5f:goto L75fd5f;
case 0x75fd65:goto L75fd65;
case 0x75fd68:c.instructions+=1;goto B75fd68;
case 0x75fd6a:goto L75fd6a;
case 0x75fd6f:goto L75fd6f;
case 0x75fd75:c.instructions+=1;goto B75fd75;
case 0x75fd77:goto L75fd77;
case 0x75fd7c:goto L75fd7c;
case 0x75fd7e:c.instructions+=1;goto B75fd7e;
case 0x75fd80:goto L75fd80;
case 0x75fd86:c.instructions+=9;goto B75fd86;
case 0x75fd89:c.instructions+=8;goto B75fd89;
case 0x75fd8e:c.instructions+=7;goto B75fd8e;
case 0x75fd90:c.instructions+=6;goto B75fd90;
case 0x75fd92:c.instructions+=5;goto B75fd92;
case 0x75fd98:c.instructions+=4;goto B75fd98;
case 0x75fd9a:c.instructions+=3;goto B75fd9a;
case 0x75fda0:c.instructions+=2;goto B75fda0;
case 0x75fda1:c.instructions+=1;goto B75fda1;
case 0x75fda6:goto L75fda6;
case 0x75fda9:c.instructions+=3;goto B75fda9;
case 0x75fdaf:c.instructions+=2;goto B75fdaf;
case 0x75fdb0:c.instructions+=1;goto B75fdb0;
case 0x75fdb5:goto L75fdb5;
case 0x75fdb8:c.instructions+=3;goto B75fdb8;
case 0x75fdbe:c.instructions+=2;goto B75fdbe;
case 0x75fdbf:c.instructions+=1;goto B75fdbf;
case 0x75fdc4:goto L75fdc4;
case 0x75fdc7:c.instructions+=7;goto B75fdc7;
case 0x75fdcd:c.instructions+=6;goto B75fdcd;
case 0x75fdd0:c.instructions+=5;goto B75fdd0;
case 0x75fdd6:c.instructions+=4;goto B75fdd6;
case 0x75fdd7:c.instructions+=3;goto B75fdd7;
case 0x75fdda:c.instructions+=2;goto B75fdda;
case 0x75fddb:c.instructions+=1;goto B75fddb;
case 0x75fde0:goto L75fde0;
case 0x75fde3:c.instructions+=1;goto B75fde3;
case 0x75fde5:goto L75fde5;
case 0x75fde8:c.instructions+=3;goto B75fde8;
case 0x75fdeb:c.instructions+=2;goto B75fdeb;
case 0x75fdec:c.instructions+=1;goto B75fdec;
case 0x75fdf1:goto L75fdf1;
case 0x75fdf2:c.instructions+=1;goto B75fdf2;
case 0x75fdf3:goto L75fdf3;
case 0x75fdf5:c.instructions+=2;goto B75fdf5;
case 0x75fdf9:c.instructions+=1;goto B75fdf9;
case 0x75fdff:goto L75fdff;
case 0x75fe01:c.instructions+=1;goto B75fe01;
case 0x75fe03:goto L75fe03;
case 0x75fe09:goto L75fe09;
case 0x75fe0b:goto L75fe0b;
case 0x75fe0d:goto L75fe0d;
case 0x75fe0f:c.instructions+=1;goto B75fe0f;
case 0x75fe11:goto L75fe11;
case 0x75fe12:c.instructions+=1;goto B75fe12;
case 0x75fe17:goto L75fe17;
case 0x75fe18:c.instructions+=2;goto B75fe18;
case 0x75fe1b:c.instructions+=1;goto B75fe1b;
case 0x75fe1c:goto L75fe1c;
case 0x75fe1e:c.instructions+=1;goto B75fe1e;
case 0x75fe1f:goto L75fe1f;
case 0x75fe20:c.instructions+=4;goto B75fe20;
case 0x75fe22:c.instructions+=3;goto B75fe22;
case 0x75fe25:c.instructions+=2;goto B75fe25;
case 0x75fe27:c.instructions+=1;goto B75fe27;
case 0x75fe29:goto L75fe29;
case 0x75fe2b:c.instructions+=1;goto B75fe2b;
case 0x75fe2d:goto L75fe2d;
case 0x75fe30:c.instructions+=1;goto B75fe30;
case 0x75fe32:goto L75fe32;
case 0x75fe34:c.instructions+=3;goto B75fe34;
case 0x75fe35:c.instructions+=2;goto B75fe35;
case 0x75fe36:c.instructions+=1;goto B75fe36;
case 0x75fe37:goto L75fe37;
case 0x75fe39:c.instructions+=5;goto B75fe39;
case 0x75fe3d:c.instructions+=4;goto B75fe3d;
case 0x75fe40:c.instructions+=3;goto B75fe40;
case 0x75fe43:c.instructions+=2;goto B75fe43;
case 0x75fe47:c.instructions+=1;goto B75fe47;
case 0x75fe4b:goto L75fe4b;
case 0x75fe4e:c.instructions+=9;goto B75fe4e;
case 0x75fe4f:c.instructions+=8;goto B75fe4f;
case 0x75fe52:c.instructions+=7;goto B75fe52;
case 0x75fe53:c.instructions+=6;goto B75fe53;
case 0x75fe56:c.instructions+=5;goto B75fe56;
case 0x75fe57:c.instructions+=4;goto B75fe57;
case 0x75fe5a:c.instructions+=3;goto B75fe5a;
case 0x75fe5b:c.instructions+=2;goto B75fe5b;
case 0x75fe5c:c.instructions+=1;goto B75fe5c;
case 0x75fe62:goto L75fe62;
case 0x75fe64:c.instructions+=1;goto B75fe64;
case 0x75fe66:goto L75fe66;
case 0x75fe67:c.instructions+=1;goto B75fe67;
case 0x75fe6d:goto L75fe6d;
case 0x75fe6f:c.instructions+=2;goto B75fe6f;
case 0x75fe70:c.instructions+=1;goto B75fe70;
case 0x75fe71:goto L75fe71;
case 0x75fe72:c.instructions+=11;goto B75fe72;
case 0x75fe74:c.instructions+=10;goto B75fe74;
case 0x75fe7a:c.instructions+=9;goto B75fe7a;
case 0x75fe7f:c.instructions+=8;goto B75fe7f;
case 0x75fe82:c.instructions+=7;goto B75fe82;
case 0x75fe83:c.instructions+=6;goto B75fe83;
case 0x75fe86:c.instructions+=5;goto B75fe86;
case 0x75fe8c:c.instructions+=4;goto B75fe8c;
case 0x75fe8d:c.instructions+=3;goto B75fe8d;
case 0x75fe92:c.instructions+=2;goto B75fe92;
case 0x75fe94:c.instructions+=1;goto B75fe94;
case 0x75fe9a:goto L75fe9a;
case 0x75fe9c:c.instructions+=1;goto B75fe9c;
case 0x75fe9e:goto L75fe9e;
case 0x75fea5:c.instructions+=1;goto B75fea5;
case 0x75fea7:goto L75fea7;
case 0x75feae:c.instructions+=2;goto B75feae;
case 0x75feaf:c.instructions+=1;goto B75feaf;
case 0x75feb4:goto L75feb4;
case 0x75feb6:c.instructions+=2;goto B75feb6;
case 0x75feb7:c.instructions+=1;goto B75feb7;
case 0x75feba:goto L75feba;
case 0x75febd:c.instructions+=4;goto B75febd;
case 0x75fec0:c.instructions+=3;goto B75fec0;
case 0x75fec2:c.instructions+=2;goto B75fec2;
case 0x75fec3:c.instructions+=1;goto B75fec3;
case 0x75fec8:goto L75fec8;
case 0x75fec9:c.instructions+=1;goto B75fec9;
case 0x75feca:goto L75feca;
case 0x75fecb:c.instructions+=6;goto B75fecb;
case 0x75fecd:c.instructions+=5;goto B75fecd;
case 0x75fece:c.instructions+=4;goto B75fece;
case 0x75fed1:c.instructions+=3;goto B75fed1;
case 0x75fed3:c.instructions+=2;goto B75fed3;
case 0x75fed4:c.instructions+=1;goto B75fed4;
case 0x75feda:goto L75feda;
case 0x75fedd:c.instructions+=1;goto B75fedd;
case 0x75fee3:goto L75fee3;
case 0x75fee6:c.instructions+=2;goto B75fee6;
case 0x75fee8:c.instructions+=1;goto B75fee8;
case 0x75feea:goto L75feea;
case 0x75feef:c.instructions+=1;goto B75feef;
case 0x75fef4:goto L75fef4;
case 0x75fef6:c.instructions+=3;goto B75fef6;
case 0x75fef8:c.instructions+=2;goto B75fef8;
case 0x75fef9:c.instructions+=1;goto B75fef9;
case 0x75fefb:goto L75fefb;
case 0x75ff00:goto L75ff00;
case 0x75ff06:c.instructions+=1;goto B75ff06;
case 0x75ff08:goto L75ff08;
case 0x75ff0f:goto L75ff0f;
case 0x75ff12:c.instructions+=5;goto B75ff12;
case 0x75ff13:c.instructions+=4;goto B75ff13;
case 0x75ff14:c.instructions+=3;goto B75ff14;
case 0x75ff17:c.instructions+=2;goto B75ff17;
case 0x75ff18:c.instructions+=1;goto B75ff18;
case 0x75ff1e:goto L75ff1e;
case 0x75ff21:c.instructions+=1;goto B75ff21;
case 0x75ff23:goto L75ff23;
case 0x75ff27:c.instructions+=1;goto B75ff27;
case 0x75ff29:goto L75ff29;
case 0x75ff2a:c.instructions+=1;goto B75ff2a;
case 0x75ff2f:goto L75ff2f;
case 0x75ff30:goto L75ff30;
case 0x75ff35:goto L75ff35;
case 0x75ff3b:goto L75ff3b;
case 0x75ff3d:c.instructions+=1;goto B75ff3d;
case 0x75ff3f:goto L75ff3f;
case 0x75ff41:c.instructions+=1;goto B75ff41;
case 0x75ff43:goto L75ff43;
case 0x75ff46:c.instructions+=1;goto B75ff46;
case 0x75ff48:goto L75ff48;
case 0x75ff49:c.instructions+=1;goto B75ff49;
case 0x75ff4e:goto L75ff4e;
case 0x75ff4f:goto L75ff4f;
case 0x75ff55:goto L75ff55;
case 0x75ff56:c.instructions+=1;goto B75ff56;
case 0x75ff5b:goto L75ff5b;
case 0x75ff5d:c.instructions+=1;goto B75ff5d;
case 0x75ff5f:goto L75ff5f;
case 0x75ff61:c.instructions+=1;goto B75ff61;
case 0x75ff63:goto L75ff63;
case 0x75ff66:c.instructions+=2;goto B75ff66;
case 0x75ff69:c.instructions+=1;goto B75ff69;
case 0x75ff6e:goto L75ff6e;
case 0x75ff6f:goto L75ff6f;
case 0x75ff70:goto L75ff70;
case 0x75ff71:c.instructions+=3;goto B75ff71;
case 0x75ff72:c.instructions+=2;goto B75ff72;
case 0x75ff73:c.instructions+=1;goto B75ff73;
case 0x75ff74:goto L75ff74;
case 0x75ff75:c.instructions+=4;goto B75ff75;
case 0x75ff79:c.instructions+=3;goto B75ff79;
case 0x75ff7a:c.instructions+=2;goto B75ff7a;
case 0x75ff7b:c.instructions+=1;goto B75ff7b;
case 0x75ff80:goto L75ff80;
case 0x75ff83:c.instructions+=2;goto B75ff83;
case 0x75ff84:c.instructions+=1;goto B75ff84;
case 0x75ff86:goto L75ff86;
case 0x75ff89:c.instructions+=1;goto B75ff89;
case 0x75ff8b:goto L75ff8b;
case 0x75ff8e:c.instructions+=1;goto B75ff8e;
case 0x75ff90:goto L75ff90;
case 0x75ff92:c.instructions+=1;goto B75ff92;
case 0x75ff97:goto L75ff97;
case 0x75ff99:c.instructions+=2;goto B75ff99;
case 0x75ff9b:c.instructions+=1;goto B75ff9b;
case 0x75ffa0:goto L75ffa0;
case 0x75ffa2:c.instructions+=3;goto B75ffa2;
case 0x75ffa3:c.instructions+=2;goto B75ffa3;
case 0x75ffa4:c.instructions+=1;goto B75ffa4;
case 0x75ffa6:goto L75ffa6;
case 0x75ffa7:c.instructions+=1;goto B75ffa7;
case 0x75ffac:goto L75ffac;
case 0x75ffad:c.instructions+=2;goto B75ffad;
case 0x75ffae:c.instructions+=1;goto B75ffae;
case 0x75ffb4:goto L75ffb4;
case 0x75ffb6:c.instructions+=1;goto B75ffb6;
case 0x75ffb8:goto L75ffb8;
case 0x75ffbe:goto L75ffbe;
case 0x75ffc0:c.instructions+=1;goto B75ffc0;
case 0x75ffc2:goto L75ffc2;
case 0x75ffc4:goto L75ffc4;
case 0x75ffc5:c.instructions+=1;goto B75ffc5;
case 0x75ffca:goto L75ffca;
case 0x75ffcc:c.instructions+=8;goto B75ffcc;
case 0x75ffcf:c.instructions+=7;goto B75ffcf;
case 0x75ffd6:c.instructions+=6;goto B75ffd6;
case 0x75ffd9:c.instructions+=5;goto B75ffd9;
case 0x75ffda:c.instructions+=4;goto B75ffda;
case 0x75ffdd:c.instructions+=3;goto B75ffdd;
case 0x75ffe2:c.instructions+=2;goto B75ffe2;
case 0x75ffe4:c.instructions+=1;goto B75ffe4;
case 0x75ffe6:goto L75ffe6;
case 0x75ffe7:c.instructions+=1;goto B75ffe7;
case 0x75ffec:goto L75ffec;
case 0x75ffed:c.instructions+=2;goto B75ffed;
case 0x75fff0:c.instructions+=1;goto B75fff0;
case 0x75fff2:goto L75fff2;
case 0x75fff4:goto L75fff4;
case 0x75fff5:c.instructions+=2;goto B75fff5;
case 0x75fff6:c.instructions+=1;goto B75fff6;
case 0x75fff7:goto L75fff7;
case 0x75fff9:c.instructions+=2;goto B75fff9;
case 0x75fffe:c.instructions+=1;goto B75fffe;
default:missing_instruction(c.pc);}
B75f001:L75f001:{c.instructions+=2;NFSU2_TR(0x75f001);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B75f004:{NFSU2_TR(0x75f004);
TAIL_STATIC(0x75efa7u,75e);
}
B75f006:L75f006:{c.instructions+=2;NFSU2_TR(0x75f006);
w4(R+0,u32(0x0ull));
}
B75f00b:{NFSU2_TR(0x75f00b);
{goto L75f029;}
}
B75f00d:L75f00d:{c.instructions+=2;NFSU2_TR(0x75f00d);
w4(R+0,u32(0x1ull));
}
B75f012:{NFSU2_TR(0x75f012);
{goto L75f029;}
}
B75f014:L75f014:{c.instructions+=5;NFSU2_TR(0x75f014);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f015:{NFSU2_TR(0x75f015);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75f018:{NFSU2_TR(0x75f018);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f01a:{NFSU2_TR(0x75f01a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f01b:{NFSU2_TR(0x75f01b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f020ull));
TAIL_STATIC(0x75c2eeu,75c);
}
B75f020:L75f020:{c.instructions+=3;NFSU2_TR(0x75f020);
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
B75f023:{NFSU2_TR(0x75f023);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75f024:{NFSU2_TR(0x75f024);
w4(R+0,u32(0x1ull));
}
B75f029:L75f029:{c.instructions+=7;NFSU2_TR(0x75f029);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75f02a:{NFSU2_TR(0x75f02a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75f02b:{NFSU2_TR(0x75f02b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f02c:{NFSU2_TR(0x75f02c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75f02d:{NFSU2_TR(0x75f02d);
__builtin_memmove((R+16),(R+20),4);
}
B75f02f:{NFSU2_TR(0x75f02f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75f030:{NFSU2_TR(0x75f030);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f031:L75f031:{c.instructions+=8;NFSU2_TR(0x75f031);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f032:{NFSU2_TR(0x75f032);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75f036:{NFSU2_TR(0x75f036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+20),(U+0),4);
}
B75f038:{NFSU2_TR(0x75f038);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f03b:{NFSU2_TR(0x75f03b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f03c:{NFSU2_TR(0x75f03c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f03f:{NFSU2_TR(0x75f03f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f040:{NFSU2_TR(0x75f040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f045ull));
TAIL_STATIC(0x75c2eeu,75c);
}
B75f045:L75f045:{c.instructions+=3;NFSU2_TR(0x75f045);
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
B75f048:{NFSU2_TR(0x75f048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75f049:{NFSU2_TR(0x75f049);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f04c:L75f04c:{c.instructions+=9;NFSU2_TR(0x75f04c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f04d:{NFSU2_TR(0x75f04d);
__builtin_memmove((R+20),(R+16),4);
}
B75f04f:{NFSU2_TR(0x75f04f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f050:{NFSU2_TR(0x75f050);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f051:{NFSU2_TR(0x75f051);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75f054:{NFSU2_TR(0x75f054);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f055:{NFSU2_TR(0x75f055);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75f058:{NFSU2_TR(0x75f058);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75f05c:{NFSU2_TR(0x75f05c);
if(r1(R+518)){{goto L75f102;}}
}
B75f062:L75f062:{c.instructions+=2;NFSU2_TR(0x75f062);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75f066:{NFSU2_TR(0x75f066);
if(r1(R+518)){{goto L75f071;}}
}
B75f068:L75f068:{c.instructions+=2;NFSU2_TR(0x75f068);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x7full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75f06b:{NFSU2_TR(0x75f06b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75f102;}}
}
B75f071:L75f071:{c.instructions+=2;NFSU2_TR(0x75f071);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x100ull))));
}
B75f077:{NFSU2_TR(0x75f077);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75f09b;}}
}
B75f079:L75f079:{c.instructions+=2;NFSU2_TR(0x75f079);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75f07d:{NFSU2_TR(0x75f07d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75f08d;}}
}
B75f07f:L75f07f:{c.instructions+=4;NFSU2_TR(0x75f07f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f081:{NFSU2_TR(0x75f081);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f082:{NFSU2_TR(0x75f082);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f083:{NFSU2_TR(0x75f083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f088ull));
TAIL_STATIC(0x766361u,766);
}
B75f088:L75f088:{c.instructions+=2;NFSU2_TR(0x75f088);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75f08b:{NFSU2_TR(0x75f08b);
{goto L75f097;}
}
B75f08d:L75f08d:{c.instructions+=3;NFSU2_TR(0x75f08d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f090:{NFSU2_TR(0x75f090);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B75f094:{NFSU2_TR(0x75f094);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x2ull))));
}
B75f097:L75f097:{c.instructions+=2;NFSU2_TR(0x75f097);
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
B75f099:{NFSU2_TR(0x75f099);
if(r1(R+518)){{goto L75f10f;}}
}
B75f09b:L75f09b:{c.instructions+=6;NFSU2_TR(0x75f09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75f09e:{NFSU2_TR(0x75f09e);
__builtin_memmove((R+0),(R+12),4);
}
B75f0a0:{NFSU2_TR(0x75f0a0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B75f0a3:{NFSU2_TR(0x75f0a3);
w4(R+4,u32(r1(R+0)));
}
B75f0a6:{NFSU2_TR(0x75f0a6);
u8 U[14];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
}
B75f0ab:{NFSU2_TR(0x75f0ab);
if(r1(R+518)){{goto L75f0bc;}}
}
B75f0ad:L75f0ad:{c.instructions+=6;NFSU2_TR(0x75f0ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B75f0b1:{NFSU2_TR(0x75f0b1);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f0b3:{NFSU2_TR(0x75f0b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75f0b6:{NFSU2_TR(0x75f0b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75f0b9:{NFSU2_TR(0x75f0b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75f0ba:{NFSU2_TR(0x75f0ba);
{goto L75f0c6;}
}
B75f0bc:L75f0bc:{c.instructions+=4;NFSU2_TR(0x75f0bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B75f0c0:{NFSU2_TR(0x75f0c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75f0c2:{NFSU2_TR(0x75f0c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75f0c5:{NFSU2_TR(0x75f0c5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75f0c6:L75f0c6:{c.instructions+=11;NFSU2_TR(0x75f0c6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f0c8:{NFSU2_TR(0x75f0c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f0cb:{NFSU2_TR(0x75f0cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f0ce:{NFSU2_TR(0x75f0ce);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f0d0:{NFSU2_TR(0x75f0d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f0d1:{NFSU2_TR(0x75f0d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f0d2:{NFSU2_TR(0x75f0d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75f0d5:{NFSU2_TR(0x75f0d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f0d6:{NFSU2_TR(0x75f0d6);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f0db:{NFSU2_TR(0x75f0db);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f0de:{NFSU2_TR(0x75f0de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f0e3ull));
TAIL_STATIC(0x767819u,767);
}
B75f0e3:L75f0e3:{c.instructions+=3;NFSU2_TR(0x75f0e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B75f0e6:{NFSU2_TR(0x75f0e6);
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
B75f0e8:{NFSU2_TR(0x75f0e8);
if(r1(R+518)){{goto L75f10f;}}
}
B75f0ea:L75f0ea:{c.instructions+=2;NFSU2_TR(0x75f0ea);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B75f0ed:{NFSU2_TR(0x75f0ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f0f5;}}
}
B75f0ef:L75f0ef:{c.instructions+=2;NFSU2_TR(0x75f0ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B75f0f3:{NFSU2_TR(0x75f0f3);
{goto L75f111;}
}
B75f0f5:L75f0f5:{c.instructions+=5;NFSU2_TR(0x75f0f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B75f0f9:{NFSU2_TR(0x75f0f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75f0fb:{NFSU2_TR(0x75f0fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+1),(U+4),1);
}
B75f0fe:{NFSU2_TR(0x75f0fe);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75f100:{NFSU2_TR(0x75f100);
{goto L75f111;}
}
B75f102:L75f102:{c.instructions+=2;NFSU2_TR(0x75f102);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x61ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x61ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75f105:{NFSU2_TR(0x75f105);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75f10f;}}
}
B75f107:L75f107:{c.instructions+=3;NFSU2_TR(0x75f107);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x7aull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7aull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7aull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75f10a:{NFSU2_TR(0x75f10a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75f10d:{NFSU2_TR(0x75f10d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75f111;}}
}
B75f10f:L75f10f:{c.instructions+=1;NFSU2_TR(0x75f10f);
__builtin_memmove((R+0),(R+12),4);
}
B75f111:L75f111:{c.instructions+=4;NFSU2_TR(0x75f111);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f112:{NFSU2_TR(0x75f112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75f113:{NFSU2_TR(0x75f113);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75f114:{NFSU2_TR(0x75f114);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f115:L75f115:{c.instructions+=1;NFSU2_TR(0x75f115);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f11aull));
TAIL_STATIC(0x761e3cu,761);
}
B75f11a:L75f11a:{c.instructions+=3;NFSU2_TR(0x75f11a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f11d:{NFSU2_TR(0x75f11d);
u8 U[8];
__builtin_memmove((U+0),gp(0x819d24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75f123:{NFSU2_TR(0x75f123);
if(r1(R+518)){{goto L75f12a;}}
}
B75f125:L75f125:{c.instructions+=1;NFSU2_TR(0x75f125);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f12aull));
TAIL_STATIC(0x75e3d3u,75e);
}
B75f12a:L75f12a:{c.instructions+=3;NFSU2_TR(0x75f12a);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f12e:{NFSU2_TR(0x75f12e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f12f:{NFSU2_TR(0x75f12f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f134ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f04cu);}goto L75f04c;}
}
B75f134:L75f134:{c.instructions+=3;NFSU2_TR(0x75f134);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f135:{NFSU2_TR(0x75f135);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f136:{NFSU2_TR(0x75f136);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f140:L75f140:{c.instructions+=8;NFSU2_TR(0x75f140);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75f144:{NFSU2_TR(0x75f144);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f145:{NFSU2_TR(0x75f145);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f146:{NFSU2_TR(0x75f146);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f147:{NFSU2_TR(0x75f147);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B75f149:{NFSU2_TR(0x75f149);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75f14d:{NFSU2_TR(0x75f14d);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75f14f:{NFSU2_TR(0x75f14f);
if(r1(R+518)){{goto L75f1c0;}}
}
B75f151:L75f151:{c.instructions+=3;NFSU2_TR(0x75f151);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+9),(U+4),1);
}
B75f154:{NFSU2_TR(0x75f154);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(r1(R+9))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75f156:{NFSU2_TR(0x75f156);
if(r1(R+518)){{goto L75f1ad;}}
}
B75f158:L75f158:{c.instructions+=6;NFSU2_TR(0x75f158);
__builtin_memmove((R+24),(R+28),4);
}
B75f15a:{NFSU2_TR(0x75f15a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75f15e:{NFSU2_TR(0x75f15e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B75f160:{NFSU2_TR(0x75f160);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75f163:{NFSU2_TR(0x75f163);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+8))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75f165:{NFSU2_TR(0x75f165);
if(r1(R+518)){{goto L75f17e;}}
}
B75f167:L75f167:{c.instructions+=2;NFSU2_TR(0x75f167);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75f169:{NFSU2_TR(0x75f169);
if(r1(R+518)){{goto L75f178;}}
}
B75f16b:L75f16b:{c.instructions+=2;NFSU2_TR(0x75f16b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B75f16d:{NFSU2_TR(0x75f16d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75f170:L75f170:{c.instructions+=2;NFSU2_TR(0x75f170);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+8))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75f172:{NFSU2_TR(0x75f172);
if(r1(R+518)){{goto L75f17e;}}
}
B75f174:L75f174:{c.instructions+=2;NFSU2_TR(0x75f174);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75f176:{NFSU2_TR(0x75f176);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f16bu);}goto L75f16b;}}
}
B75f178:L75f178:{c.instructions+=5;NFSU2_TR(0x75f178);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f179:{NFSU2_TR(0x75f179);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75f17a:{NFSU2_TR(0x75f17a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75f17b:{NFSU2_TR(0x75f17b);
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
B75f17d:{NFSU2_TR(0x75f17d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f17e:L75f17e:{c.instructions+=4;NFSU2_TR(0x75f17e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B75f180:{NFSU2_TR(0x75f180);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75f183:{NFSU2_TR(0x75f183);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+9))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75f185:{NFSU2_TR(0x75f185);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f170u);}goto L75f170;}}
}
B75f187:L75f187:{c.instructions+=1;NFSU2_TR(0x75f187);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B75f18a:L75f18a:{c.instructions+=3;NFSU2_TR(0x75f18a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+1),(U+4),1);
}
B75f18d:{NFSU2_TR(0x75f18d);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(r1(R+1))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75f18f:{NFSU2_TR(0x75f18f);
if(r1(R+518)){{goto L75f1b9;}}
}
B75f191:L75f191:{c.instructions+=4;NFSU2_TR(0x75f191);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B75f193:{NFSU2_TR(0x75f193);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B75f196:{NFSU2_TR(0x75f196);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+1))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75f198:{NFSU2_TR(0x75f198);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f158u);}goto L75f158;}}
}
B75f19a:L75f19a:{c.instructions+=3;NFSU2_TR(0x75f19a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75f19d:{NFSU2_TR(0x75f19d);
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
B75f19f:{NFSU2_TR(0x75f19f);
if(r1(R+518)){{goto L75f1b9;}}
}
B75f1a1:L75f1a1:{c.instructions+=4;NFSU2_TR(0x75f1a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+1),(U+4),1);
}
B75f1a4:{NFSU2_TR(0x75f1a4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B75f1a7:{NFSU2_TR(0x75f1a7);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+1))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75f1a9:{NFSU2_TR(0x75f1a9);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f18au);}goto L75f18a;}}
}
B75f1ab:L75f1ab:{c.instructions+=1;NFSU2_TR(0x75f1ab);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f158u);}goto L75f158;}
}
B75f1ad:L75f1ad:{c.instructions+=6;NFSU2_TR(0x75f1ad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75f1af:{NFSU2_TR(0x75f1af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f1b0:{NFSU2_TR(0x75f1b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75f1b1:{NFSU2_TR(0x75f1b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75f1b2:{NFSU2_TR(0x75f1b2);
__builtin_memmove((R+0),(R+8),1);
}
B75f1b4:{NFSU2_TR(0x75f1b4);
TAIL_STATIC(0x75cf16u,75c);
}
B75f1b9:L75f1b9:{c.instructions+=5;NFSU2_TR(0x75f1b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B75f1bc:{NFSU2_TR(0x75f1bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f1bd:{NFSU2_TR(0x75f1bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75f1be:{NFSU2_TR(0x75f1be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75f1bf:{NFSU2_TR(0x75f1bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f1c0:L75f1c0:{c.instructions+=5;NFSU2_TR(0x75f1c0);
__builtin_memmove((R+0),(R+28),4);
}
B75f1c2:{NFSU2_TR(0x75f1c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f1c3:{NFSU2_TR(0x75f1c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75f1c4:{NFSU2_TR(0x75f1c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75f1c5:{NFSU2_TR(0x75f1c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f1d0:L75f1d0:{c.instructions+=7;NFSU2_TR(0x75f1d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f1d1:{NFSU2_TR(0x75f1d1);
__builtin_memmove((R+20),(R+16),4);
}
B75f1d3:{NFSU2_TR(0x75f1d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f1d4:{NFSU2_TR(0x75f1d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f1d5:{NFSU2_TR(0x75f1d5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f1d6:{NFSU2_TR(0x75f1d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75f1d9:{NFSU2_TR(0x75f1d9);
u8 U[1];
w1(U+0,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+0)){{goto L75f202;}}
}
B75f1db:L75f1db:{c.instructions+=4;NFSU2_TR(0x75f1db);
__builtin_memmove((R+12),(R+4),4);
}
B75f1dd:{NFSU2_TR(0x75f1dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75f1e0:{NFSU2_TR(0x75f1e0);
__builtin_memmove((R+24),(R+28),4);
}
B75f1e2:{NFSU2_TR(0x75f1e2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B75f1e4:L75f1e4:{c.instructions+=1;NFSU2_TR(0x75f1e4);
u8 U[23];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L75f1e6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
w1(R+512,u8((r1(R+0))<(r1(U+16))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
w1(R+523,sborrow<u8>(r1(R+0),r1(U+16)));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
w1(U+22,u8(u32(r1(R+0))-u32(r1(U+16))));
w1(R+519,u8(s8(r1(U+22))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+22))==(u8(0x0ull))));
w1(U+19,u8(u32(r1(U+22))&u32(u8(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r1(U+19)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
w1(U+18,u8(!(r1(R+518))));
if(r1(U+18)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f1e4u);}goto L75f1e4;}}
}
B75f1e6:L75f1e6:{c.instructions+=4;NFSU2_TR(0x75f1e6);
w4(R+4,u32(0-u32(r4(R+4))));
}
B75f1e8:{NFSU2_TR(0x75f1e8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B75f1ea:{NFSU2_TR(0x75f1ea);
__builtin_memmove((R+28),(R+24),4);
}
B75f1ec:{NFSU2_TR(0x75f1ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75f1ef:L75f1ef:{c.instructions+=1;NFSU2_TR(0x75f1ef);
u8 U[41];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L75f1f1;}}
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
__builtin_memmove((U+33),gp(u32(r4(U+17))),1);
__builtin_memmove((U+38),(U+33),1);
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+39),(U+16),1);
w1(R+512,u8((r1(U+39))<(r1(U+38))));
w1(R+523,sborrow<u8>(r1(U+39),r1(U+38)));
w1(U+40,u8(u32(r1(U+39))-u32(r1(U+38))));
w1(R+519,u8(s8(r1(U+40))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+40))==(u8(0x0ull))));
w1(U+35,u8(u32(r1(U+40))&u32(u8(0xffull))));
w1(U+36,u8(__builtin_popcountll(u64(r1(U+35)))));
w1(U+37,u8(u32(r1(U+36))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+37))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f1efu);}goto L75f1ef;}}
}
B75f1f1:L75f1f1:{c.instructions+=4;NFSU2_TR(0x75f1f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75f1f4:{NFSU2_TR(0x75f1f4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B75f1f6:{NFSU2_TR(0x75f1f6);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+8))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+8)));
w1(U+9,u8(u32(r1(R+0))-u32(r1(U+8))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B75f1f9:{NFSU2_TR(0x75f1f9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L75f200;}}
}
B75f1fb:L75f1fb:{c.instructions+=1;NFSU2_TR(0x75f1fb);
if(r1(R+518)){{goto L75f202;}}
}
B75f1fd:L75f1fd:{c.instructions+=1;NFSU2_TR(0x75f1fd);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x2ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75f200:L75f200:{c.instructions+=1;NFSU2_TR(0x75f200);
w4(R+4,u32(~u32(r4(R+4))));
}
B75f202:L75f202:{c.instructions+=6;NFSU2_TR(0x75f202);
__builtin_memmove((R+0),(R+4),4);
}
B75f204:{NFSU2_TR(0x75f204);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75f205:{NFSU2_TR(0x75f205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f206:{NFSU2_TR(0x75f206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75f207:{NFSU2_TR(0x75f207);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75f208:{NFSU2_TR(0x75f208);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f209:L75f209:{c.instructions+=3;NFSU2_TR(0x75f209);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f20b:{NFSU2_TR(0x75f20b);
u8 U[4];
w4(U+0,u32(0x7d3d28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f210:{NFSU2_TR(0x75f210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f215ull));
TAIL_STATIC(0x760da0u,760);
}
B75f215:L75f215:{c.instructions+=4;NFSU2_TR(0x75f215);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75f218:{NFSU2_TR(0x75f218);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f21b:{NFSU2_TR(0x75f21b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f21c:{NFSU2_TR(0x75f21c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f221ull));
{goto L75f323;}
}
B75f221:L75f221:{c.instructions+=4;NFSU2_TR(0x75f221);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f222:{NFSU2_TR(0x75f222);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75f226:{NFSU2_TR(0x75f226);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f227:{NFSU2_TR(0x75f227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f22cull));
TAIL_STATIC(0x765f75u,765);
}
B75f22c:L75f22c:{c.instructions+=5;NFSU2_TR(0x75f22c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f22f:{NFSU2_TR(0x75f22f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f232:{NFSU2_TR(0x75f232);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f235:{NFSU2_TR(0x75f235);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f236:{NFSU2_TR(0x75f236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f23bull));
TAIL_STATIC(0x763f07u,763);
}
B75f23b:L75f23b:{c.instructions+=4;NFSU2_TR(0x75f23b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f23e:{NFSU2_TR(0x75f23e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f23f:{NFSU2_TR(0x75f23f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f242:{NFSU2_TR(0x75f242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f247ull));
TAIL_STATIC(0x765ffdu,765);
}
B75f247:L75f247:{c.instructions+=3;NFSU2_TR(0x75f247);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B75f24a:{NFSU2_TR(0x75f24a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75f24e:{NFSU2_TR(0x75f24e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f253ull));
{goto L75f25c;}
}
B75f253:L75f253:{c.instructions+=2;NFSU2_TR(0x75f253);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f256:{NFSU2_TR(0x75f256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f25bull));
TAIL_STATIC(0x760ddbu,760);
}
B75f25b:L75f25b:{c.instructions+=1;NFSU2_TR(0x75f25b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f25c:L75f25c:{c.instructions+=2;NFSU2_TR(0x75f25c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f25f:{NFSU2_TR(0x75f25f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f264ull));
{goto L75f375;}
}
B75f264:L75f264:{c.instructions+=2;NFSU2_TR(0x75f264);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f265:{NFSU2_TR(0x75f265);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f266:L75f266:{c.instructions+=6;NFSU2_TR(0x75f266);
__builtin_memmove((R+0),gp(0x8bb5e0),4);
}
B75f26b:{NFSU2_TR(0x75f26b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75f26d:{NFSU2_TR(0x75f26d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f26e:{NFSU2_TR(0x75f26e);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f270:{NFSU2_TR(0x75f270);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f271:{NFSU2_TR(0x75f271);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f27a;}}
}
B75f273:L75f273:{c.instructions+=2;NFSU2_TR(0x75f273);
w4(R+0,u32(0x200ull));
}
B75f278:{NFSU2_TR(0x75f278);
{goto L75f280;}
}
B75f27a:L75f27a:{c.instructions+=2;NFSU2_TR(0x75f27a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75f27c:{NFSU2_TR(0x75f27c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75f285;}}
}
B75f27e:L75f27e:{c.instructions+=1;NFSU2_TR(0x75f27e);
__builtin_memmove((R+0),(R+24),4);
}
B75f280:L75f280:{c.instructions+=1;NFSU2_TR(0x75f280);
__builtin_memmove(gp(0x8bb5e0),(R+0),4);
}
B75f285:L75f285:{c.instructions+=3;NFSU2_TR(0x75f285);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f287:{NFSU2_TR(0x75f287);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f288:{NFSU2_TR(0x75f288);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f28dull));
TAIL_STATIC(0x76ace0u,76a);
}
B75f28d:L75f28d:{c.instructions+=5;NFSU2_TR(0x75f28d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75f28f:{NFSU2_TR(0x75f28f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f290:{NFSU2_TR(0x75f290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f291:{NFSU2_TR(0x75f291);
__builtin_memmove(gp(0x8ba5c0),(R+0),4);
}
B75f296:{NFSU2_TR(0x75f296);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f2b6;}}
}
B75f298:L75f298:{c.instructions+=4;NFSU2_TR(0x75f298);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f29a:{NFSU2_TR(0x75f29a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f29b:{NFSU2_TR(0x75f29b);
__builtin_memmove(gp(0x8bb5e0),(R+24),4);
}
B75f2a1:{NFSU2_TR(0x75f2a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f2a6ull));
TAIL_STATIC(0x76ace0u,76a);
}
B75f2a6:L75f2a6:{c.instructions+=5;NFSU2_TR(0x75f2a6);
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
B75f2a8:{NFSU2_TR(0x75f2a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f2a9:{NFSU2_TR(0x75f2a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f2aa:{NFSU2_TR(0x75f2aa);
__builtin_memmove(gp(0x8ba5c0),(R+0),4);
}
B75f2af:{NFSU2_TR(0x75f2af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f2b6;}}
}
B75f2b1:L75f2b1:{c.instructions+=4;NFSU2_TR(0x75f2b1);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f2b3:{NFSU2_TR(0x75f2b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75f2b4:{NFSU2_TR(0x75f2b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f2b5:{NFSU2_TR(0x75f2b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f2b6:L75f2b6:{c.instructions+=3;NFSU2_TR(0x75f2b6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B75f2b8:{NFSU2_TR(0x75f2b8);
w4(R+4,u32(0x819f10ull));
}
B75f2bd:{NFSU2_TR(0x75f2bd);
{goto L75f2c4;}
}
B75f2bf:L75f2bf:{c.instructions+=1;NFSU2_TR(0x75f2bf);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B75f2c4:L75f2c4:{c.instructions+=5;NFSU2_TR(0x75f2c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B75f2c7:{NFSU2_TR(0x75f2c7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B75f2ca:{NFSU2_TR(0x75f2ca);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B75f2cd:{NFSU2_TR(0x75f2cd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x81a190ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x81a190ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75f2d3:{NFSU2_TR(0x75f2d3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f2bfu);}goto L75f2bf;}}
}
B75f2d5:L75f2d5:{c.instructions+=2;NFSU2_TR(0x75f2d5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B75f2d7:{NFSU2_TR(0x75f2d7);
w4(R+8,u32(0x819f20ull));
}
B75f2dc:L75f2dc:{c.instructions+=9;NFSU2_TR(0x75f2dc);
__builtin_memmove((R+24),(R+4),4);
}
B75f2de:{NFSU2_TR(0x75f2de);
__builtin_memmove((R+0),(R+4),4);
}
B75f2e0:{NFSU2_TR(0x75f2e0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B75f2e3:{NFSU2_TR(0x75f2e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B75f2e6:{NFSU2_TR(0x75f2e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B75f2ed:{NFSU2_TR(0x75f2ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75f2f0:{NFSU2_TR(0x75f2f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B75f2f3:{NFSU2_TR(0x75f2f3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75f2f6:{NFSU2_TR(0x75f2f6);
if(r1(R+518)){{goto L75f2fc;}}
}
B75f2f8:L75f2f8:{c.instructions+=2;NFSU2_TR(0x75f2f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75f2fa:{NFSU2_TR(0x75f2fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f2ff;}}
}
B75f2fc:L75f2fc:{c.instructions+=1;NFSU2_TR(0x75f2fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+8)),r4(U+0));
}
B75f2ff:L75f2ff:{c.instructions+=4;NFSU2_TR(0x75f2ff);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B75f302:{NFSU2_TR(0x75f302);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B75f303:{NFSU2_TR(0x75f303);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x819f80ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x819f80ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75f309:{NFSU2_TR(0x75f309);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f2dcu);}goto L75f2dc;}}
}
B75f30b:L75f30b:{c.instructions+=3;NFSU2_TR(0x75f30b);
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
B75f30d:{NFSU2_TR(0x75f30d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f30e:{NFSU2_TR(0x75f30e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f30f:L75f30f:{c.instructions+=1;NFSU2_TR(0x75f30f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f314ull));
{goto L75f5dd;}
}
B75f314:L75f314:{c.instructions+=2;NFSU2_TR(0x75f314);
u8 U[5];
__builtin_memmove((U+3),gp(0x8b8468),1);
w1(R+512,u8((r1(U+3))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x0ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75f31b:{NFSU2_TR(0x75f31b);
if(r1(R+518)){{goto L75f322;}}
}
B75f31d:L75f31d:{c.instructions+=1;NFSU2_TR(0x75f31d);
TAIL_STATIC(0x76ad9bu,76a);
}
B75f322:L75f322:{c.instructions+=1;NFSU2_TR(0x75f322);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f323:L75f323:{c.instructions+=4;NFSU2_TR(0x75f323);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f327:{NFSU2_TR(0x75f327);
w4(R+4,u32(0x819f10ull));
}
B75f32c:{NFSU2_TR(0x75f32c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B75f32e:{NFSU2_TR(0x75f32e);
if(r1(R+512)){{goto L75f347;}}
}
B75f330:L75f330:{c.instructions+=2;NFSU2_TR(0x75f330);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x81a170ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x81a170ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75f335:{NFSU2_TR(0x75f335);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L75f347;}}
}
B75f337:L75f337:{c.instructions+=5;NFSU2_TR(0x75f337);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B75f339:{NFSU2_TR(0x75f339);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B75f33c:{NFSU2_TR(0x75f33c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B75f33f:{NFSU2_TR(0x75f33f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f340:{NFSU2_TR(0x75f340);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f345ull));
TAIL_STATIC(0x7631f1u,763);
}
B75f345:L75f345:{c.instructions+=2;NFSU2_TR(0x75f345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f346:{NFSU2_TR(0x75f346);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f347:L75f347:{c.instructions+=3;NFSU2_TR(0x75f347);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x20ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75f34a:{NFSU2_TR(0x75f34a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f34b:{NFSU2_TR(0x75f34b);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f351ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75f351:L75f351:{c.instructions+=1;NFSU2_TR(0x75f351);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f352:L75f352:{c.instructions+=3;NFSU2_TR(0x75f352);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f356:{NFSU2_TR(0x75f356);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x14ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75f359:{NFSU2_TR(0x75f359);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75f366;}}
}
B75f35b:L75f35b:{c.instructions+=3;NFSU2_TR(0x75f35b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B75f35e:{NFSU2_TR(0x75f35e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f35f:{NFSU2_TR(0x75f35f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f364ull));
TAIL_STATIC(0x7631f1u,763);
}
B75f364:L75f364:{c.instructions+=2;NFSU2_TR(0x75f364);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f365:{NFSU2_TR(0x75f365);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f366:L75f366:{c.instructions+=4;NFSU2_TR(0x75f366);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f36a:{NFSU2_TR(0x75f36a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x20ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75f36d:{NFSU2_TR(0x75f36d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f36e:{NFSU2_TR(0x75f36e);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f374ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75f374:L75f374:{c.instructions+=1;NFSU2_TR(0x75f374);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f375:L75f375:{c.instructions+=4;NFSU2_TR(0x75f375);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f379:{NFSU2_TR(0x75f379);
w4(R+4,u32(0x819f10ull));
}
B75f37e:{NFSU2_TR(0x75f37e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B75f380:{NFSU2_TR(0x75f380);
if(r1(R+512)){{goto L75f399;}}
}
B75f382:L75f382:{c.instructions+=2;NFSU2_TR(0x75f382);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x81a170ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x81a170ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75f387:{NFSU2_TR(0x75f387);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L75f399;}}
}
B75f389:L75f389:{c.instructions+=5;NFSU2_TR(0x75f389);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B75f38b:{NFSU2_TR(0x75f38b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B75f38e:{NFSU2_TR(0x75f38e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75f391:{NFSU2_TR(0x75f391);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f392:{NFSU2_TR(0x75f392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f397ull));
TAIL_STATIC(0x76315du,763);
}
B75f397:L75f397:{c.instructions+=2;NFSU2_TR(0x75f397);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f398:{NFSU2_TR(0x75f398);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f399:L75f399:{c.instructions+=3;NFSU2_TR(0x75f399);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x20ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75f39c:{NFSU2_TR(0x75f39c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f39d:{NFSU2_TR(0x75f39d);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f3a3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75f3a3:L75f3a3:{c.instructions+=1;NFSU2_TR(0x75f3a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f3a4:L75f3a4:{c.instructions+=3;NFSU2_TR(0x75f3a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f3a8:{NFSU2_TR(0x75f3a8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x14ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75f3ab:{NFSU2_TR(0x75f3ab);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75f3b8;}}
}
B75f3ad:L75f3ad:{c.instructions+=3;NFSU2_TR(0x75f3ad);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75f3b0:{NFSU2_TR(0x75f3b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f3b1:{NFSU2_TR(0x75f3b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f3b6ull));
TAIL_STATIC(0x76315du,763);
}
B75f3b6:L75f3b6:{c.instructions+=2;NFSU2_TR(0x75f3b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f3b7:{NFSU2_TR(0x75f3b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f3b8:L75f3b8:{c.instructions+=4;NFSU2_TR(0x75f3b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f3bc:{NFSU2_TR(0x75f3bc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x20ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75f3bf:{NFSU2_TR(0x75f3bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f3c0:{NFSU2_TR(0x75f3c0);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f3c6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75f3c6:L75f3c6:{c.instructions+=1;NFSU2_TR(0x75f3c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f3c7:L75f3c7:{c.instructions+=3;NFSU2_TR(0x75f3c7);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f3c9:{NFSU2_TR(0x75f3c9);
u8 U[4];
w4(U+0,u32(0x7d3d88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f3ce:{NFSU2_TR(0x75f3ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f3d3ull));
TAIL_STATIC(0x760da0u,760);
}
B75f3d3:L75f3d3:{c.instructions+=4;NFSU2_TR(0x75f3d3);
w4(R+24,u32(0x819f30ull));
}
B75f3d8:{NFSU2_TR(0x75f3d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f3d9:{NFSU2_TR(0x75f3d9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f3db:{NFSU2_TR(0x75f3db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f3e0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f352u);}goto L75f352;}
}
B75f3e0:L75f3e0:{c.instructions+=5;NFSU2_TR(0x75f3e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f3e1:{NFSU2_TR(0x75f3e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f3e2:{NFSU2_TR(0x75f3e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75f3e6:{NFSU2_TR(0x75f3e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f3e7:{NFSU2_TR(0x75f3e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f3ecull));
TAIL_STATIC(0x765f75u,765);
}
B75f3ec:L75f3ec:{c.instructions+=6;NFSU2_TR(0x75f3ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f3ef:{NFSU2_TR(0x75f3ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B75f3f2:{NFSU2_TR(0x75f3f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f3f3:{NFSU2_TR(0x75f3f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f3f6:{NFSU2_TR(0x75f3f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f3f7:{NFSU2_TR(0x75f3f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f3fcull));
TAIL_STATIC(0x763f07u,763);
}
B75f3fc:L75f3fc:{c.instructions+=4;NFSU2_TR(0x75f3fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f3ff:{NFSU2_TR(0x75f3ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f400:{NFSU2_TR(0x75f400);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f403:{NFSU2_TR(0x75f403);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f408ull));
TAIL_STATIC(0x765ffdu,765);
}
B75f408:L75f408:{c.instructions+=3;NFSU2_TR(0x75f408);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B75f40b:{NFSU2_TR(0x75f40b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75f40f:{NFSU2_TR(0x75f40f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f414ull));
{goto L75f422;}
}
B75f414:L75f414:{c.instructions+=2;NFSU2_TR(0x75f414);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f417:{NFSU2_TR(0x75f417);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f41cull));
TAIL_STATIC(0x760ddbu,760);
}
B75f41c:L75f41c:{c.instructions+=1;NFSU2_TR(0x75f41c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f422:L75f422:{c.instructions+=3;NFSU2_TR(0x75f422);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f423:{NFSU2_TR(0x75f423);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f425:{NFSU2_TR(0x75f425);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f42aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f3a4u);}goto L75f3a4;}
}
B75f42a:L75f42a:{c.instructions+=3;NFSU2_TR(0x75f42a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f42b:{NFSU2_TR(0x75f42b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f42c:{NFSU2_TR(0x75f42c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f42d:L75f42d:{c.instructions+=9;NFSU2_TR(0x75f42d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f42e:{NFSU2_TR(0x75f42e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f42f:{NFSU2_TR(0x75f42f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75f433:{NFSU2_TR(0x75f433);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f436:{NFSU2_TR(0x75f436);
__builtin_memmove((R+4),(R+0),4);
}
B75f438:{NFSU2_TR(0x75f438);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x3ull))));
}
B75f43b:{NFSU2_TR(0x75f43b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B75f43d:{NFSU2_TR(0x75f43d);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B75f440:{NFSU2_TR(0x75f440);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f47c;}}
}
B75f442:L75f442:{c.instructions+=2;NFSU2_TR(0x75f442);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(u16(0x108ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B75f446:{NFSU2_TR(0x75f446);
if(r1(R+518)){{goto L75f47c;}}
}
B75f448:L75f448:{c.instructions+=6;NFSU2_TR(0x75f448);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f44b:{NFSU2_TR(0x75f44b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f44c:{NFSU2_TR(0x75f44c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B75f44e:{NFSU2_TR(0x75f44e);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B75f450:{NFSU2_TR(0x75f450);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75f452:{NFSU2_TR(0x75f452);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75f47b;}}
}
B75f454:L75f454:{c.instructions+=4;NFSU2_TR(0x75f454);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f455:{NFSU2_TR(0x75f455);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f456:{NFSU2_TR(0x75f456);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f459:{NFSU2_TR(0x75f459);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f45eull));
TAIL_STATIC(0x760237u,760);
}
B75f45e:L75f45e:{c.instructions+=3;NFSU2_TR(0x75f45e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75f461:{NFSU2_TR(0x75f461);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75f463:{NFSU2_TR(0x75f463);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f474;}}
}
B75f465:L75f465:{c.instructions+=3;NFSU2_TR(0x75f465);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f468:{NFSU2_TR(0x75f468);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B75f46a:{NFSU2_TR(0x75f46a);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L75f47b;}}
}
B75f46c:L75f46c:{c.instructions+=3;NFSU2_TR(0x75f46c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffdull))));
}
B75f46f:{NFSU2_TR(0x75f46f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f472:{NFSU2_TR(0x75f472);
{goto L75f47b;}
}
B75f474:L75f474:{c.instructions+=2;NFSU2_TR(0x75f474);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x20ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75f478:{NFSU2_TR(0x75f478);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B75f47b:L75f47b:{c.instructions+=1;NFSU2_TR(0x75f47b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75f47c:L75f47c:{c.instructions+=7;NFSU2_TR(0x75f47c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f47f:{NFSU2_TR(0x75f47f);
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
B75f483:{NFSU2_TR(0x75f483);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B75f485:{NFSU2_TR(0x75f485);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f486:{NFSU2_TR(0x75f486);
__builtin_memmove((R+0),(R+12),4);
}
B75f488:{NFSU2_TR(0x75f488);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75f489:{NFSU2_TR(0x75f489);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f48a:L75f48a:{c.instructions+=4;NFSU2_TR(0x75f48a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f48b:{NFSU2_TR(0x75f48b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75f48f:{NFSU2_TR(0x75f48f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f490:{NFSU2_TR(0x75f490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f495ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f42du);}goto L75f42d;}
}
B75f495:L75f495:{c.instructions+=3;NFSU2_TR(0x75f495);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75f497:{NFSU2_TR(0x75f497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f498:{NFSU2_TR(0x75f498);
if(r1(R+518)){{goto L75f49f;}}
}
B75f49a:L75f49a:{c.instructions+=3;NFSU2_TR(0x75f49a);
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
B75f49d:{NFSU2_TR(0x75f49d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f49e:{NFSU2_TR(0x75f49e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f49f:L75f49f:{c.instructions+=2;NFSU2_TR(0x75f49f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B75f4a3:{NFSU2_TR(0x75f4a3);
if(r1(R+518)){{goto L75f4b4;}}
}
B75f4a5:L75f4a5:{c.instructions+=2;NFSU2_TR(0x75f4a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f4a8:{NFSU2_TR(0x75f4a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f4adull));
TAIL_STATIC(0x76b0e5u,76b);
}
B75f4ad:L75f4ad:{c.instructions+=5;NFSU2_TR(0x75f4ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f4ae:{NFSU2_TR(0x75f4ae);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B75f4b0:{NFSU2_TR(0x75f4b0);
u8 U[16];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w1(U+9,sborrow<u32>(r4(U+4),r4(U+0)));
w1(R+523,u8(((r1(R+523))!=0)!=((r1(U+9))!=0)));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+10,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r4(U+10)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B75f4b2:{NFSU2_TR(0x75f4b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f4b3:{NFSU2_TR(0x75f4b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f4b4:L75f4b4:{c.instructions+=3;NFSU2_TR(0x75f4b4);
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
B75f4b6:{NFSU2_TR(0x75f4b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f4b7:{NFSU2_TR(0x75f4b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f4b8:L75f4b8:{c.instructions+=3;NFSU2_TR(0x75f4b8);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f4ba:{NFSU2_TR(0x75f4ba);
u8 U[4];
w4(U+0,u32(0x7d3d98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f4bf:{NFSU2_TR(0x75f4bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f4c4ull));
TAIL_STATIC(0x760da0u,760);
}
B75f4c4:L75f4c4:{c.instructions+=5;NFSU2_TR(0x75f4c4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B75f4c6:{NFSU2_TR(0x75f4c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f4c9:{NFSU2_TR(0x75f4c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f4cc:{NFSU2_TR(0x75f4cc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f4ce:{NFSU2_TR(0x75f4ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f4d3ull));
TAIL_STATIC(0x7631f1u,763);
}
B75f4d3:L75f4d3:{c.instructions+=3;NFSU2_TR(0x75f4d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f4d4:{NFSU2_TR(0x75f4d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f4d7:{NFSU2_TR(0x75f4d7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B75f4d9:L75f4d9:{c.instructions+=3;NFSU2_TR(0x75f4d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f4dc:{NFSU2_TR(0x75f4dc);
u8 U[8];
__builtin_memmove((U+0),gp(0x8bb5e0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75f4e2:{NFSU2_TR(0x75f4e2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75f569;}}
}
B75f4e8:L75f4e8:{c.instructions+=4;NFSU2_TR(0x75f4e8);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B75f4ed:{NFSU2_TR(0x75f4ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B75f4f0:{NFSU2_TR(0x75f4f0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75f4f2:{NFSU2_TR(0x75f4f2);
if(r1(R+518)){{goto L75f550;}}
}
B75f4f4:L75f4f4:{c.instructions+=2;NFSU2_TR(0x75f4f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x83ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B75f4f8:{NFSU2_TR(0x75f4f8);
if(r1(R+518)){{goto L75f550;}}
}
B75f4fa:L75f4fa:{c.instructions+=3;NFSU2_TR(0x75f4fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f4fb:{NFSU2_TR(0x75f4fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f4fc:{NFSU2_TR(0x75f4fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f501ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f352u);}goto L75f352;}
}
B75f501:L75f501:{c.instructions+=10;NFSU2_TR(0x75f501);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f502:{NFSU2_TR(0x75f502);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f503:{NFSU2_TR(0x75f503);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B75f505:{NFSU2_TR(0x75f505);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B75f506:{NFSU2_TR(0x75f506);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f509:{NFSU2_TR(0x75f509);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B75f50e:{NFSU2_TR(0x75f50e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B75f511:{NFSU2_TR(0x75f511);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75f514:{NFSU2_TR(0x75f514);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x83ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75f517:{NFSU2_TR(0x75f517);
if(r1(R+518)){{goto L75f548;}}
}
B75f519:L75f519:{c.instructions+=2;NFSU2_TR(0x75f519);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75f51c:{NFSU2_TR(0x75f51c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f52f;}}
}
B75f51e:L75f51e:{c.instructions+=2;NFSU2_TR(0x75f51e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f51f:{NFSU2_TR(0x75f51f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f524ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f48au);}goto L75f48a;}
}
B75f524:L75f524:{c.instructions+=3;NFSU2_TR(0x75f524);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f525:{NFSU2_TR(0x75f525);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75f528:{NFSU2_TR(0x75f528);
if(r1(R+518)){{goto L75f548;}}
}
B75f52a:L75f52a:{c.instructions+=2;NFSU2_TR(0x75f52a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75f52d:{NFSU2_TR(0x75f52d);
{goto L75f548;}
}
B75f52f:L75f52f:{c.instructions+=2;NFSU2_TR(0x75f52f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75f532:{NFSU2_TR(0x75f532);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f548;}}
}
B75f534:L75f534:{c.instructions+=2;NFSU2_TR(0x75f534);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75f537:{NFSU2_TR(0x75f537);
if(r1(R+518)){{goto L75f548;}}
}
B75f539:L75f539:{c.instructions+=2;NFSU2_TR(0x75f539);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f53a:{NFSU2_TR(0x75f53a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f53full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f48au);}goto L75f48a;}
}
B75f53f:L75f53f:{c.instructions+=3;NFSU2_TR(0x75f53f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f540:{NFSU2_TR(0x75f540);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75f543:{NFSU2_TR(0x75f543);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f548;}}
}
B75f545:L75f545:{c.instructions+=1;NFSU2_TR(0x75f545);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B75f548:L75f548:{c.instructions+=2;NFSU2_TR(0x75f548);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f54b:{NFSU2_TR(0x75f54b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f550ull));
{goto L75f558;}
}
B75f550:L75f550:{c.instructions+=2;NFSU2_TR(0x75f550);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75f551:{NFSU2_TR(0x75f551);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f4d9u);}goto L75f4d9;}
}
B75f553:L75f553:{c.instructions+=2;NFSU2_TR(0x75f553);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B75f555:{NFSU2_TR(0x75f555);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75f558:L75f558:{c.instructions+=4;NFSU2_TR(0x75f558);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B75f55d:{NFSU2_TR(0x75f55d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B75f560:{NFSU2_TR(0x75f560);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f561:{NFSU2_TR(0x75f561);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f566ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f3a4u);}goto L75f3a4;}
}
B75f566:L75f566:{c.instructions+=3;NFSU2_TR(0x75f566);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f567:{NFSU2_TR(0x75f567);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f568:{NFSU2_TR(0x75f568);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f569:L75f569:{c.instructions+=2;NFSU2_TR(0x75f569);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B75f56d:{NFSU2_TR(0x75f56d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f572ull));
{goto L75f584;}
}
B75f572:L75f572:{c.instructions+=3;NFSU2_TR(0x75f572);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B75f576:{NFSU2_TR(0x75f576);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f579:{NFSU2_TR(0x75f579);
if(r1(R+518)){{goto L75f57e;}}
}
B75f57b:L75f57b:{c.instructions+=1;NFSU2_TR(0x75f57b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f57e:L75f57e:{c.instructions+=1;NFSU2_TR(0x75f57e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f583ull));
TAIL_STATIC(0x760ddbu,760);
}
B75f583:L75f583:{c.instructions+=1;NFSU2_TR(0x75f583);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f584:L75f584:{c.instructions+=2;NFSU2_TR(0x75f584);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f586:{NFSU2_TR(0x75f586);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f58bull));
TAIL_STATIC(0x76315du,763);
}
B75f58b:L75f58b:{c.instructions+=2;NFSU2_TR(0x75f58b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f58c:{NFSU2_TR(0x75f58c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f58d:L75f58d:{c.instructions+=3;NFSU2_TR(0x75f58d);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f58f:{NFSU2_TR(0x75f58f);
u8 U[4];
w4(U+0,u32(0x7d3db0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f594:{NFSU2_TR(0x75f594);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f599ull));
TAIL_STATIC(0x760da0u,760);
}
B75f599:L75f599:{c.instructions+=3;NFSU2_TR(0x75f599);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B75f59b:{NFSU2_TR(0x75f59b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75f59e:{NFSU2_TR(0x75f59e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f5a9;}}
}
B75f5a0:L75f5a0:{c.instructions+=2;NFSU2_TR(0x75f5a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f5a1:{NFSU2_TR(0x75f5a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f5a6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f4b8u);}goto L75f4b8;}
}
B75f5a6:L75f5a6:{c.instructions+=2;NFSU2_TR(0x75f5a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f5a7:{NFSU2_TR(0x75f5a7);
{goto L75f5cd;}
}
B75f5a9:L75f5a9:{c.instructions+=2;NFSU2_TR(0x75f5a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f5ac:{NFSU2_TR(0x75f5ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f5b1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f323u);}goto L75f323;}
}
B75f5b1:L75f5b1:{c.instructions+=4;NFSU2_TR(0x75f5b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f5b2:{NFSU2_TR(0x75f5b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f5b5:{NFSU2_TR(0x75f5b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f5b8:{NFSU2_TR(0x75f5b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f5bdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f48au);}goto L75f48a;}
}
B75f5bd:L75f5bd:{c.instructions+=4;NFSU2_TR(0x75f5bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f5be:{NFSU2_TR(0x75f5be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f5c1:{NFSU2_TR(0x75f5c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75f5c5:{NFSU2_TR(0x75f5c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f5caull));
{goto L75f5d3;}
}
B75f5ca:L75f5ca:{c.instructions+=1;NFSU2_TR(0x75f5ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f5cd:L75f5cd:{c.instructions+=1;NFSU2_TR(0x75f5cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f5d2ull));
TAIL_STATIC(0x760ddbu,760);
}
B75f5d2:L75f5d2:{c.instructions+=1;NFSU2_TR(0x75f5d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f5d3:L75f5d3:{c.instructions+=2;NFSU2_TR(0x75f5d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f5d6:{NFSU2_TR(0x75f5d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f5dbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f375u);}goto L75f375;}
}
B75f5db:L75f5db:{c.instructions+=2;NFSU2_TR(0x75f5db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f5dc:{NFSU2_TR(0x75f5dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f5dd:L75f5dd:{c.instructions+=2;NFSU2_TR(0x75f5dd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f5df:{NFSU2_TR(0x75f5df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f5e4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f4b8u);}goto L75f4b8;}
}
B75f5e4:L75f5e4:{c.instructions+=2;NFSU2_TR(0x75f5e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f5e5:{NFSU2_TR(0x75f5e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f5e6:L75f5e6:{c.instructions+=3;NFSU2_TR(0x75f5e6);
__builtin_memmove((R+0),gp(0x819c6c),4);
}
B75f5eb:{NFSU2_TR(0x75f5eb);
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
B75f5ed:{NFSU2_TR(0x75f5ed);
if(r1(R+518)){{goto L75f5f1;}}
}
B75f5ef:L75f5ef:{c.instructions+=1;NFSU2_TR(0x75f5ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f5f1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75f5f1:L75f5f1:{c.instructions+=2;NFSU2_TR(0x75f5f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f5f2:{NFSU2_TR(0x75f5f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f5f7ull));
TAIL_STATIC(0x761e3cu,761);
}
B75f5f7:L75f5f7:{c.instructions+=3;NFSU2_TR(0x75f5f7);
__builtin_memmove((R+24),(R+0),4);
}
B75f5f9:{NFSU2_TR(0x75f5f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75f5fb:{NFSU2_TR(0x75f5fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f605;}}
}
B75f5fd:L75f5fd:{c.instructions+=2;NFSU2_TR(0x75f5fd);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f5ff:{NFSU2_TR(0x75f5ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f604ull));
TAIL_STATIC(0x75bc7eu,75b);
}
B75f604:L75f604:{c.instructions+=1;NFSU2_TR(0x75f604);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f605:L75f605:{c.instructions+=2;NFSU2_TR(0x75f605);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f606:{NFSU2_TR(0x75f606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f60bull));
TAIL_STATIC(0x761eadu,761);
}
B75f60b:L75f60b:{c.instructions+=3;NFSU2_TR(0x75f60b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f60c:{NFSU2_TR(0x75f60c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f610:{NFSU2_TR(0x75f610);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832a8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f616ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75f617:L75f617:{c.instructions+=3;NFSU2_TR(0x75f617);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f619:{NFSU2_TR(0x75f619);
u8 U[4];
w4(U+0,u32(0x7d3dc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f61e:{NFSU2_TR(0x75f61e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f623ull));
TAIL_STATIC(0x760da0u,760);
}
B75f623:L75f623:{c.instructions+=2;NFSU2_TR(0x75f623);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a314),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f629:{NFSU2_TR(0x75f629);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832b0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f62full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75f62f:L75f62f:{c.instructions+=3;NFSU2_TR(0x75f62f);
__builtin_memmove((R+24),(R+0),4);
}
B75f631:{NFSU2_TR(0x75f631);
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
B75f633:{NFSU2_TR(0x75f633);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f65b;}}
}
B75f635:L75f635:{c.instructions+=4;NFSU2_TR(0x75f635);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75f638:{NFSU2_TR(0x75f638);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f639:{NFSU2_TR(0x75f639);
u8 U[4];
__builtin_memmove((U+0),gp(0x81a314),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f63f:{NFSU2_TR(0x75f63f);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832ac),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f645ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75f645:L75f645:{c.instructions+=2;NFSU2_TR(0x75f645);
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
B75f647:{NFSU2_TR(0x75f647);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f651;}}
}
B75f649:L75f649:{c.instructions+=2;NFSU2_TR(0x75f649);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f64b:{NFSU2_TR(0x75f64b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f650ull));
TAIL_STATIC(0x75bc7eu,75b);
}
B75f650:L75f650:{c.instructions+=1;NFSU2_TR(0x75f650);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f651:L75f651:{c.instructions+=1;NFSU2_TR(0x75f651);
u8 U[4];
__builtin_memmove((U+0),gp(0x783200),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f657ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75f657:L75f657:{c.instructions+=2;NFSU2_TR(0x75f657);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B75f659:{NFSU2_TR(0x75f659);
{goto L75f671;}
}
B75f65b:L75f65b:{c.instructions+=7;NFSU2_TR(0x75f65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f65e:{NFSU2_TR(0x75f65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75f661:{NFSU2_TR(0x75f661);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f664:{NFSU2_TR(0x75f664);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75f667:{NFSU2_TR(0x75f667);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f66a:{NFSU2_TR(0x75f66a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f66b:{NFSU2_TR(0x75f66b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f670ull));
TAIL_STATIC(0x75c6dau,75c);
}
B75f670:L75f670:{c.instructions+=1;NFSU2_TR(0x75f670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f671:L75f671:{c.instructions+=3;NFSU2_TR(0x75f671);
__builtin_memmove((R+0),gp(0x819c68),4);
}
B75f676:{NFSU2_TR(0x75f676);
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
B75f678:{NFSU2_TR(0x75f678);
if(r1(R+518)){{goto L75f67c;}}
}
B75f67a:L75f67a:{c.instructions+=1;NFSU2_TR(0x75f67a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f67cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75f67c:L75f67c:{c.instructions+=3;NFSU2_TR(0x75f67c);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B75f680:{NFSU2_TR(0x75f680);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f683:{NFSU2_TR(0x75f683);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f686ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75f686:L75f686:{c.instructions+=2;NFSU2_TR(0x75f686);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f687:{NFSU2_TR(0x75f687);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f68cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f5e6u);}goto L75f5e6;}
}
B75f68c:L75f68c:{c.instructions+=4;NFSU2_TR(0x75f68c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f68d:{NFSU2_TR(0x75f68d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75f691:{NFSU2_TR(0x75f691);
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
B75f693:{NFSU2_TR(0x75f693);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f698ull));
TAIL_STATIC(0x760ddbu,760);
}
B75f698:L75f698:{c.instructions+=1;NFSU2_TR(0x75f698);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f69b:L75f69b:{c.instructions+=7;NFSU2_TR(0x75f69b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f69e:{NFSU2_TR(0x75f69e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B75f6a0:{NFSU2_TR(0x75f6a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B75f6a2:{NFSU2_TR(0x75f6a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f6a5:{NFSU2_TR(0x75f6a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f6a6:{NFSU2_TR(0x75f6a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f6a7:{NFSU2_TR(0x75f6a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f6acull));
TAIL_STATIC(0x76162au,761);
}
B75f6ac:L75f6ac:{c.instructions+=3;NFSU2_TR(0x75f6ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f6ad:{NFSU2_TR(0x75f6ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f6ae:{NFSU2_TR(0x75f6ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f6af:L75f6af:{c.instructions+=3;NFSU2_TR(0x75f6af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B75f6b2:{NFSU2_TR(0x75f6b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f6b5:{NFSU2_TR(0x75f6b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f6baull));
TAIL_STATIC(0x75d5a4u,75d);
}
B75f6bb:L75f6bb:{c.instructions+=8;NFSU2_TR(0x75f6bb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f6bc:{NFSU2_TR(0x75f6bc);
__builtin_memmove((R+20),(R+16),4);
}
B75f6be:{NFSU2_TR(0x75f6be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f6bf:{NFSU2_TR(0x75f6bf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f6c0:{NFSU2_TR(0x75f6c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75f6c3:{NFSU2_TR(0x75f6c3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B75f6c5:{NFSU2_TR(0x75f6c5);
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
B75f6c7:{NFSU2_TR(0x75f6c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f6d8;}}
}
B75f6c9:L75f6c9:{c.instructions+=1;NFSU2_TR(0x75f6c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f6ceull));
TAIL_STATIC(0x7661bau,766);
}
B75f6ce:L75f6ce:{c.instructions+=3;NFSU2_TR(0x75f6ce);
u8 U[4];
w4(U+0,u32(0x16ull));
s4(u32(r4(R+0)),r4(U+0));
}
B75f6d4:{NFSU2_TR(0x75f6d4);
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
B75f6d6:{NFSU2_TR(0x75f6d6);
{goto L75f742;}
}
B75f6d8:L75f6d8:{c.instructions+=4;NFSU2_TR(0x75f6d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f6d9:{NFSU2_TR(0x75f6d9);
u8 U[4];
w4(U+0,u32(0x88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f6de:{NFSU2_TR(0x75f6de);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f6e0:{NFSU2_TR(0x75f6e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f6e5ull));
TAIL_STATIC(0x76ace0u,76a);
}
B75f6e5:L75f6e5:{c.instructions+=5;NFSU2_TR(0x75f6e5);
__builtin_memmove((R+24),(R+0),4);
}
B75f6e7:{NFSU2_TR(0x75f6e7);
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
B75f6e9:{NFSU2_TR(0x75f6e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f6ea:{NFSU2_TR(0x75f6ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f6eb:{NFSU2_TR(0x75f6eb);
if(r1(R+518)){{goto L75f72d;}}
}
B75f6ed:L75f6ed:{c.instructions+=2;NFSU2_TR(0x75f6ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f6ee:{NFSU2_TR(0x75f6ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f6f3ull));
TAIL_STATIC(0x761e29u,761);
}
B75f6f3:L75f6f3:{c.instructions+=8;NFSU2_TR(0x75f6f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f6f6:{NFSU2_TR(0x75f6f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75f6fa:{NFSU2_TR(0x75f6fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f6fd:{NFSU2_TR(0x75f6fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f700:{NFSU2_TR(0x75f700);
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
B75f702:{NFSU2_TR(0x75f702);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f703:{NFSU2_TR(0x75f703);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f706:{NFSU2_TR(0x75f706);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f70b;}}
}
B75f708:L75f708:{c.instructions+=1;NFSU2_TR(0x75f708);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75f70b:L75f70b:{c.instructions+=7;NFSU2_TR(0x75f70b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f70c:{NFSU2_TR(0x75f70c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f70f:{NFSU2_TR(0x75f70f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f710:{NFSU2_TR(0x75f710);
u8 U[4];
w4(U+0,u32(0x75f617ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f715:{NFSU2_TR(0x75f715);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f718:{NFSU2_TR(0x75f718);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f71b:{NFSU2_TR(0x75f71b);
u8 U[4];
__builtin_memmove((U+0),gp(0x783248),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f721ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75f721:L75f721:{c.instructions+=2;NFSU2_TR(0x75f721);
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
B75f723:{NFSU2_TR(0x75f723);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f741;}}
}
B75f725:L75f725:{c.instructions+=1;NFSU2_TR(0x75f725);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f72bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75f72b:L75f72b:{c.instructions+=1;NFSU2_TR(0x75f72b);
__builtin_memmove((R+12),(R+0),4);
}
B75f72d:L75f72d:{c.instructions+=2;NFSU2_TR(0x75f72d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f72e:{NFSU2_TR(0x75f72e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f733ull));
TAIL_STATIC(0x75c6dau,75c);
}
B75f733:L75f733:{c.instructions+=3;NFSU2_TR(0x75f733);
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
B75f735:{NFSU2_TR(0x75f735);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f736:{NFSU2_TR(0x75f736);
if(r1(R+518)){{goto L75f73f;}}
}
B75f738:L75f738:{c.instructions+=2;NFSU2_TR(0x75f738);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f739:{NFSU2_TR(0x75f739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f73eull));
TAIL_STATIC(0x7661ccu,766);
}
B75f73e:L75f73e:{c.instructions+=1;NFSU2_TR(0x75f73e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f73f:L75f73f:{c.instructions+=1;NFSU2_TR(0x75f73f);
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
B75f741:L75f741:{c.instructions+=1;NFSU2_TR(0x75f741);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f742:L75f742:{c.instructions+=4;NFSU2_TR(0x75f742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75f743:{NFSU2_TR(0x75f743);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75f744:{NFSU2_TR(0x75f744);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75f745:{NFSU2_TR(0x75f745);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f750:L75f750:{c.instructions+=5;NFSU2_TR(0x75f750);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f751:{NFSU2_TR(0x75f751);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f752:{NFSU2_TR(0x75f752);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f756:{NFSU2_TR(0x75f756);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+0))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B75f758:{NFSU2_TR(0x75f758);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f772;}}
}
B75f75a:L75f75a:{c.instructions+=9;NFSU2_TR(0x75f75a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75f75e:{NFSU2_TR(0x75f75e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f762:{NFSU2_TR(0x75f762);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75f764:{NFSU2_TR(0x75f764);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75f764);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75f764);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B75f766:{NFSU2_TR(0x75f766);
__builtin_memmove((R+12),(R+0),4);
}
B75f768:{NFSU2_TR(0x75f768);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f76c:{NFSU2_TR(0x75f76c);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75f76c);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75f76c);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B75f76e:{NFSU2_TR(0x75f76e);
__builtin_memmove((R+8),(R+12),4);
}
B75f770:{NFSU2_TR(0x75f770);
{goto L75f7b3;}
}
B75f772:L75f772:{c.instructions+=4;NFSU2_TR(0x75f772);
__builtin_memmove((R+4),(R+0),4);
}
B75f774:{NFSU2_TR(0x75f774);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75f778:{NFSU2_TR(0x75f778);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75f77c:{NFSU2_TR(0x75f77c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f780:L75f780:{c.instructions+=6;NFSU2_TR(0x75f780);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+0))!=(u32(0x0ull))));
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B75f782:{NFSU2_TR(0x75f782);
u8 U[50];
w1(U+0,u8(u32(u8(0x1ull))&u32(u8(0x1full))));
w8(U+1,u64(r1(R+512)));
w8(U+9,shl<u64>(r8(U+1),u64(u32(0x20ull))));
w8(U+17,u64(r4(R+12)));
w8(U+25,u64(u64(r8(U+9))|u64(r8(U+17))));
w8(U+33,shr<u64>(r8(U+25),u64(r1(U+0))));
w1(U+41,u8(u32(u8(0x21ull))-u32(r1(U+0))));
w8(U+42,shl<u64>(r8(U+25),u64(r1(U+41))));
w8(U+25,u64(u64(r8(U+33))|u64(r8(U+42))));
w4(R+12,u32(r8(U+25)));
}
B75f784:{NFSU2_TR(0x75f784);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+0))!=(u32(0x0ull))));
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B75f786:{NFSU2_TR(0x75f786);
u8 U[50];
w1(U+0,u8(u32(u8(0x1ull))&u32(u8(0x1full))));
w8(U+1,u64(r1(R+512)));
w8(U+9,shl<u64>(r8(U+1),u64(u32(0x20ull))));
w8(U+17,u64(r4(R+0)));
w8(U+25,u64(u64(r8(U+9))|u64(r8(U+17))));
w8(U+33,shr<u64>(r8(U+25),u64(r1(U+0))));
w1(U+41,u8(u32(u8(0x21ull))-u32(r1(U+0))));
w8(U+42,shl<u64>(r8(U+25),u64(r1(U+41))));
w8(U+25,u64(u64(r8(U+33))|u64(r8(U+42))));
w4(R+0,u32(r8(U+25)));
}
B75f788:{NFSU2_TR(0x75f788);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+4))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B75f78a:{NFSU2_TR(0x75f78a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f780u);}goto L75f780;}}
}
B75f78c:L75f78c:{c.instructions+=8;NFSU2_TR(0x75f78c);
u8 U[56];
w8(U+0,u64(r4(R+12)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75f78c);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75f78c);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B75f78e:{NFSU2_TR(0x75f78e);
__builtin_memmove((R+24),(R+0),4);
}
B75f790:{NFSU2_TR(0x75f790);
u8 U[32];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w8(U+8,u64(r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(r4(U+4)));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(u64(r8(U+24))>>32));
w4(R+0,u32(r8(U+24)));
}
B75f794:{NFSU2_TR(0x75f794);
__builtin_memmove((R+4),(R+0),4);
}
B75f796:{NFSU2_TR(0x75f796);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f79a:{NFSU2_TR(0x75f79a);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+24)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B75f79c:{NFSU2_TR(0x75f79c);
w1(R+512,carry<u32>(r4(R+8),r4(R+4)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B75f79e:{NFSU2_TR(0x75f79e);
if(r1(R+512)){{goto L75f7ae;}}
}
B75f7a0:L75f7a0:{c.instructions+=2;NFSU2_TR(0x75f7a0);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75f7a4:{NFSU2_TR(0x75f7a4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L75f7ae;}}
}
B75f7a6:L75f7a6:{c.instructions+=1;NFSU2_TR(0x75f7a6);
if(r1(R+512)){{goto L75f7af;}}
}
B75f7a8:L75f7a8:{c.instructions+=2;NFSU2_TR(0x75f7a8);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75f7ac:{NFSU2_TR(0x75f7ac);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75f7af;}}
}
B75f7ae:L75f7ae:{c.instructions+=1;NFSU2_TR(0x75f7ae);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B75f7af:L75f7af:{c.instructions+=2;NFSU2_TR(0x75f7af);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75f7b1:{NFSU2_TR(0x75f7b1);
__builtin_memmove((R+0),(R+24),4);
}
B75f7b3:L75f7b3:{c.instructions+=3;NFSU2_TR(0x75f7b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f7b4:{NFSU2_TR(0x75f7b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75f7b5:{NFSU2_TR(0x75f7b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f7b8:L75f7b8:{c.instructions+=13;NFSU2_TR(0x75f7b8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f7b9:{NFSU2_TR(0x75f7b9);
__builtin_memmove((R+20),(R+16),4);
}
B75f7bb:{NFSU2_TR(0x75f7bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f7be:{NFSU2_TR(0x75f7be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75f7c1:{NFSU2_TR(0x75f7c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f7c2:{NFSU2_TR(0x75f7c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f7c3:{NFSU2_TR(0x75f7c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f7c4:{NFSU2_TR(0x75f7c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B75f7c7:{NFSU2_TR(0x75f7c7);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B75f7cb:{NFSU2_TR(0x75f7cb);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B75f7cd:{NFSU2_TR(0x75f7cd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75f7cf:{NFSU2_TR(0x75f7cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f7d2:{NFSU2_TR(0x75f7d2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L75f81f;}}
}
B75f7d4:L75f7d4:{c.instructions+=3;NFSU2_TR(0x75f7d4);
__builtin_memmove((R+12),(R+0),4);
}
B75f7d6:{NFSU2_TR(0x75f7d6);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B75f7d8:{NFSU2_TR(0x75f7d8);
if(r1(R+518)){{goto L75f82a;}}
}
B75f7da:L75f7da:{c.instructions+=4;NFSU2_TR(0x75f7da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f7dd:{NFSU2_TR(0x75f7dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75f7e1:{NFSU2_TR(0x75f7e1);
__builtin_memmove((R+0),(R+12),4);
}
B75f7e3:{NFSU2_TR(0x75f7e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f7e8;}}
}
B75f7e5:L75f7e5:{c.instructions+=1;NFSU2_TR(0x75f7e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B75f7e8:L75f7e8:{c.instructions+=6;NFSU2_TR(0x75f7e8);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B75f7ec:{NFSU2_TR(0x75f7ec);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75f7ef:{NFSU2_TR(0x75f7ef);
__builtin_memmove((R+24),(R+0),4);
}
B75f7f1:{NFSU2_TR(0x75f7f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f7f2:{NFSU2_TR(0x75f7f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f7f5:{NFSU2_TR(0x75f7f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f7f8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75f7f8:L75f7f8:{c.instructions+=4;NFSU2_TR(0x75f7f8);
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
B75f7fa:{NFSU2_TR(0x75f7fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f7fb:{NFSU2_TR(0x75f7fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f7fc:{NFSU2_TR(0x75f7fc);
if(r1(R+518)){{goto L75f826;}}
}
B75f7fe:L75f7fe:{c.instructions+=1;NFSU2_TR(0x75f7fe);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75f810;}}
}
B75f800:L75f800:{c.instructions+=4;NFSU2_TR(0x75f800);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))-u32(r4(U+4))));
}
B75f803:{NFSU2_TR(0x75f803);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75f807:{NFSU2_TR(0x75f807);
__builtin_memmove((R+28),(R+24),4);
}
B75f809:{NFSU2_TR(0x75f809);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f818;}}
}
B75f80b:L75f80b:{c.instructions+=2;NFSU2_TR(0x75f80b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B75f80e:{NFSU2_TR(0x75f80e);
{goto L75f81a;}
}
B75f810:L75f810:{c.instructions+=3;NFSU2_TR(0x75f810);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f813:{NFSU2_TR(0x75f813);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B75f815:{NFSU2_TR(0x75f815);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f818:L75f818:{c.instructions+=1;NFSU2_TR(0x75f818);
__builtin_memmove((R+0),(R+12),4);
}
B75f81a:L75f81a:{c.instructions+=2;NFSU2_TR(0x75f81a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75f81d:{NFSU2_TR(0x75f81d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f7d4u);}goto L75f7d4;}}
}
B75f81f:L75f81f:{c.instructions+=1;NFSU2_TR(0x75f81f);
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
B75f821:L75f821:{c.instructions+=5;NFSU2_TR(0x75f821);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75f822:{NFSU2_TR(0x75f822);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f823:{NFSU2_TR(0x75f823);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75f824:{NFSU2_TR(0x75f824);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75f825:{NFSU2_TR(0x75f825);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f826:L75f826:{c.instructions+=2;NFSU2_TR(0x75f826);
__builtin_memmove((R+0),(R+24),4);
}
B75f828:{NFSU2_TR(0x75f828);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f821u);}goto L75f821;}
}
B75f82a:L75f82a:{c.instructions+=2;NFSU2_TR(0x75f82a);
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
B75f82c:{NFSU2_TR(0x75f82c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f81fu);}goto L75f81f;}}
}
B75f82e:L75f82e:{c.instructions+=3;NFSU2_TR(0x75f82e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f831:{NFSU2_TR(0x75f831);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f834:{NFSU2_TR(0x75f834);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f837ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75f837:L75f837:{c.instructions+=7;NFSU2_TR(0x75f837);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B75f839:{NFSU2_TR(0x75f839);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B75f83b:{NFSU2_TR(0x75f83b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f83c:{NFSU2_TR(0x75f83c);
w4(R+0,u32(~u32(r4(R+0))));
}
B75f83e:{NFSU2_TR(0x75f83e);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75f841:{NFSU2_TR(0x75f841);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f842:{NFSU2_TR(0x75f842);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f821u);}goto L75f821;}
}
B75f844:L75f844:{c.instructions+=11;NFSU2_TR(0x75f844);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f845:{NFSU2_TR(0x75f845);
__builtin_memmove((R+20),(R+16),4);
}
B75f847:{NFSU2_TR(0x75f847);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B75f84a:{NFSU2_TR(0x75f84a);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75f84f:{NFSU2_TR(0x75f84f);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75f852:{NFSU2_TR(0x75f852);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f853:{NFSU2_TR(0x75f853);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f854:{NFSU2_TR(0x75f854);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75f857:{NFSU2_TR(0x75f857);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f858:{NFSU2_TR(0x75f858);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f85b:{NFSU2_TR(0x75f85b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f860ull));
TAIL_STATIC(0x761e3cu,761);
}
B75f860:L75f860:{c.instructions+=6;NFSU2_TR(0x75f860);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f862:{NFSU2_TR(0x75f862);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f863:{NFSU2_TR(0x75f863);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f866:{NFSU2_TR(0x75f866);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75f868:{NFSU2_TR(0x75f868);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B75f86b:{NFSU2_TR(0x75f86b);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f86d:L75f86d:{c.instructions+=1;NFSU2_TR(0x75f86d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L75f86f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f86du);}goto L75f86d;}
}
B75f86f:L75f86f:{c.instructions+=1;NFSU2_TR(0x75f86f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75f870:L75f870:{c.instructions+=12;NFSU2_TR(0x75f870);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B75f872:{NFSU2_TR(0x75f872);
w4(R+4,u32(r1(R+8)));
}
B75f875:{NFSU2_TR(0x75f875);
__builtin_memmove((R+0),(R+4),4);
}
B75f877:{NFSU2_TR(0x75f877);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B75f879:{NFSU2_TR(0x75f879);
w1(R+12,u8(0x1ull));
}
B75f87b:{NFSU2_TR(0x75f87b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+12,shl<u8>(r1(R+12),u64(r1(U+0))));
}
B75f87d:{NFSU2_TR(0x75f87d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B75f880:{NFSU2_TR(0x75f880);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B75f884:{NFSU2_TR(0x75f884);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))|u32(r1(R+12))));
s1(u32(r4(R+0)),r1(U+0));
}
B75f886:{NFSU2_TR(0x75f886);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75f887:{NFSU2_TR(0x75f887);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75f889:{NFSU2_TR(0x75f889);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f870u);}goto L75f870;}}
}
B75f88b:L75f88b:{c.instructions+=3;NFSU2_TR(0x75f88b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75f88e:{NFSU2_TR(0x75f88e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75f890:{NFSU2_TR(0x75f890);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f89f;}}
}
B75f892:L75f892:{c.instructions+=3;NFSU2_TR(0x75f892);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f895:{NFSU2_TR(0x75f895);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75f898:{NFSU2_TR(0x75f898);
{goto L75f89f;}
}
B75f89a:L75f89a:{c.instructions+=2;NFSU2_TR(0x75f89a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75f89c:{NFSU2_TR(0x75f89c);
if(r1(R+518)){{goto L75f8b8;}}
}
B75f89e:L75f89e:{c.instructions+=1;NFSU2_TR(0x75f89e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B75f89f:L75f89f:{c.instructions+=11;NFSU2_TR(0x75f89f);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B75f8a1:{NFSU2_TR(0x75f8a1);
w4(R+24,u32(r1(R+0)));
}
B75f8a4:{NFSU2_TR(0x75f8a4);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B75f8a6:{NFSU2_TR(0x75f8a6);
__builtin_memmove((R+4),(R+24),4);
}
B75f8a8:{NFSU2_TR(0x75f8a8);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B75f8aa:{NFSU2_TR(0x75f8aa);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B75f8ab:{NFSU2_TR(0x75f8ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B75f8ad:{NFSU2_TR(0x75f8ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75f8b0:{NFSU2_TR(0x75f8b0);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B75f8b4:{NFSU2_TR(0x75f8b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75f8b6:{NFSU2_TR(0x75f8b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f89au);}goto L75f89a;}}
}
B75f8b8:L75f8b8:{c.instructions+=2;NFSU2_TR(0x75f8b8);
__builtin_memmove((R+12),(R+8),4);
}
B75f8ba:{NFSU2_TR(0x75f8ba);
{goto L75f8d4;}
}
B75f8bc:L75f8bc:{c.instructions+=10;NFSU2_TR(0x75f8bc);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+24,u32(r1(U+0)));
}
B75f8bf:{NFSU2_TR(0x75f8bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75f8c1:{NFSU2_TR(0x75f8c1);
__builtin_memmove((R+4),(R+24),4);
}
B75f8c3:{NFSU2_TR(0x75f8c3);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+28))));
}
B75f8c5:{NFSU2_TR(0x75f8c5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75f8c6:{NFSU2_TR(0x75f8c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B75f8c8:{NFSU2_TR(0x75f8c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B75f8cb:{NFSU2_TR(0x75f8cb);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B75f8cf:{NFSU2_TR(0x75f8cf);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75f8d1:{NFSU2_TR(0x75f8d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f8db;}}
}
B75f8d3:L75f8d3:{c.instructions+=1;NFSU2_TR(0x75f8d3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B75f8d4:L75f8d4:{c.instructions+=2;NFSU2_TR(0x75f8d4);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B75f8d7:{NFSU2_TR(0x75f8d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f8bcu);}goto L75f8bc;}}
}
B75f8d9:L75f8d9:{c.instructions+=1;NFSU2_TR(0x75f8d9);
{goto L75f8df;}
}
B75f8db:L75f8db:{c.instructions+=2;NFSU2_TR(0x75f8db);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+0,u8(u32(r1(U+0))&u32(u8(0x0ull))));
s1(u32(r4(R+8)),r1(U+0));
}
B75f8de:{NFSU2_TR(0x75f8de);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B75f8df:L75f8df:{c.instructions+=13;NFSU2_TR(0x75f8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f8e2:{NFSU2_TR(0x75f8e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75f8e5:{NFSU2_TR(0x75f8e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f8e8:{NFSU2_TR(0x75f8e8);
__builtin_memmove((R+0),(R+12),4);
}
B75f8ea:{NFSU2_TR(0x75f8ea);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B75f8ec:{NFSU2_TR(0x75f8ec);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B75f8ee:{NFSU2_TR(0x75f8ee);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B75f8f0:{NFSU2_TR(0x75f8f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B75f8f3:{NFSU2_TR(0x75f8f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75f8f4:{NFSU2_TR(0x75f8f4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B75f8f6:{NFSU2_TR(0x75f8f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f8f7:{NFSU2_TR(0x75f8f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75f8f8:{NFSU2_TR(0x75f8f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f8fdull));
TAIL_STATIC(0x76115eu,761);
}
B75f8fd:L75f8fd:{c.instructions+=2;NFSU2_TR(0x75f8fd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75f8fe:{NFSU2_TR(0x75f8fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f8ff:L75f8ff:{c.instructions+=16;NFSU2_TR(0x75f8ff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f900:{NFSU2_TR(0x75f900);
__builtin_memmove((R+20),(R+16),4);
}
B75f902:{NFSU2_TR(0x75f902);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B75f905:{NFSU2_TR(0x75f905);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f908:{NFSU2_TR(0x75f908);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f90b:{NFSU2_TR(0x75f90b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f90e:{NFSU2_TR(0x75f90e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f911:{NFSU2_TR(0x75f911);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f912:{NFSU2_TR(0x75f912);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f915:{NFSU2_TR(0x75f915);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B75f917:{NFSU2_TR(0x75f917);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75f91a:{NFSU2_TR(0x75f91a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75f91d:{NFSU2_TR(0x75f91d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75f920:{NFSU2_TR(0x75f920);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f921:{NFSU2_TR(0x75f921);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x42ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75f928:{NFSU2_TR(0x75f928);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f92dull));
TAIL_STATIC(0x76b228u,76b);
}
B75f92d:L75f92d:{c.instructions+=4;NFSU2_TR(0x75f92d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75f930:{NFSU2_TR(0x75f930);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75f933:{NFSU2_TR(0x75f933);
__builtin_memmove((R+24),(R+0),4);
}
B75f935:{NFSU2_TR(0x75f935);
if(r1(R+519)){{goto L75f942;}}
}
B75f937:L75f937:{c.instructions+=4;NFSU2_TR(0x75f937);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f93a:{NFSU2_TR(0x75f93a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))&u32(u8(0x0ull))));
s1(u32(r4(R+0)),r1(U+0));
}
B75f93d:{NFSU2_TR(0x75f93d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75f940:{NFSU2_TR(0x75f940);
{goto L75f94f;}
}
B75f942:L75f942:{c.instructions+=4;NFSU2_TR(0x75f942);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75f945:{NFSU2_TR(0x75f945);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f946:{NFSU2_TR(0x75f946);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f948:{NFSU2_TR(0x75f948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f94dull));
TAIL_STATIC(0x763d60u,763);
}
B75f94d:L75f94d:{c.instructions+=2;NFSU2_TR(0x75f94d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f94e:{NFSU2_TR(0x75f94e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f94f:L75f94f:{c.instructions+=2;NFSU2_TR(0x75f94f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75f952:{NFSU2_TR(0x75f952);
if(r1(R+519)){{goto L75f95c;}}
}
B75f954:L75f954:{c.instructions+=3;NFSU2_TR(0x75f954);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75f957:{NFSU2_TR(0x75f957);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))&u32(u8(0x0ull))));
s1(u32(r4(R+0)),r1(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B75f95a:{NFSU2_TR(0x75f95a);
{goto L75f969;}
}
B75f95c:L75f95c:{c.instructions+=4;NFSU2_TR(0x75f95c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75f95f:{NFSU2_TR(0x75f95f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f960:{NFSU2_TR(0x75f960);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f962:{NFSU2_TR(0x75f962);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f967ull));
TAIL_STATIC(0x763d60u,763);
}
B75f967:L75f967:{c.instructions+=2;NFSU2_TR(0x75f967);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f968:{NFSU2_TR(0x75f968);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f969:L75f969:{c.instructions+=4;NFSU2_TR(0x75f969);
__builtin_memmove((R+0),(R+24),4);
}
B75f96b:{NFSU2_TR(0x75f96b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f96c:{NFSU2_TR(0x75f96c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75f96d:{NFSU2_TR(0x75f96d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f96e:L75f96e:{c.instructions+=4;NFSU2_TR(0x75f96e);
u8 U[8];
__builtin_memmove((U+0),gp(0x8bb5e4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75f975:{NFSU2_TR(0x75f975);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f976:{NFSU2_TR(0x75f976);
__builtin_memmove((R+24),gp(0x8b8450),4);
}
B75f97c:{NFSU2_TR(0x75f97c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f982;}}
}
B75f97e:L75f97e:{c.instructions+=3;NFSU2_TR(0x75f97e);
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
B75f980:{NFSU2_TR(0x75f980);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f981:{NFSU2_TR(0x75f981);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f982:L75f982:{c.instructions+=4;NFSU2_TR(0x75f982);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75f984:{NFSU2_TR(0x75f984);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f985:{NFSU2_TR(0x75f985);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f986:{NFSU2_TR(0x75f986);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f9a3;}}
}
B75f988:L75f988:{c.instructions+=2;NFSU2_TR(0x75f988);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8458),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75f98e:{NFSU2_TR(0x75f98e);
if(r1(R+518)){{goto L75f9e1;}}
}
B75f990:L75f990:{c.instructions+=1;NFSU2_TR(0x75f990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f995ull));
TAIL_STATIC(0x76ba46u,76b);
}
B75f995:L75f995:{c.instructions+=2;NFSU2_TR(0x75f995);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75f997:{NFSU2_TR(0x75f997);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f9e1;}}
}
B75f999:L75f999:{c.instructions+=3;NFSU2_TR(0x75f999);
__builtin_memmove((R+24),gp(0x8b8450),4);
}
B75f99f:{NFSU2_TR(0x75f99f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75f9a1:{NFSU2_TR(0x75f9a1);
if(r1(R+518)){{goto L75f9e1;}}
}
B75f9a3:L75f9a3:{c.instructions+=3;NFSU2_TR(0x75f9a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75f9a7:{NFSU2_TR(0x75f9a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75f9a9:{NFSU2_TR(0x75f9a9);
if(r1(R+518)){{goto L75f9e1;}}
}
B75f9ab:L75f9ab:{c.instructions+=2;NFSU2_TR(0x75f9ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f9ac:{NFSU2_TR(0x75f9ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f9b1ull));
TAIL_STATIC(0x766bc0u,766);
}
B75f9b1:L75f9b1:{c.instructions+=3;NFSU2_TR(0x75f9b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f9b2:{NFSU2_TR(0x75f9b2);
__builtin_memmove((R+28),(R+0),4);
}
B75f9b4:{NFSU2_TR(0x75f9b4);
{goto L75f9db;}
}
B75f9b6:L75f9b6:{c.instructions+=2;NFSU2_TR(0x75f9b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f9b7:{NFSU2_TR(0x75f9b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f9bcull));
TAIL_STATIC(0x766bc0u,766);
}
B75f9bc:L75f9bc:{c.instructions+=3;NFSU2_TR(0x75f9bc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75f9be:{NFSU2_TR(0x75f9be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75f9bf:{NFSU2_TR(0x75f9bf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75f9d8;}}
}
B75f9c1:L75f9c1:{c.instructions+=3;NFSU2_TR(0x75f9c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75f9c3:{NFSU2_TR(0x75f9c3);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+12),(U+8),1);
w1(R+512,u8((r1(U+12))<(u8(0x3dull))));
w1(R+523,sborrow<u8>(r1(U+12),u8(0x3dull)));
w1(U+13,u8(u32(r1(U+12))-u32(u8(0x3dull))));
w1(R+519,u8(s8(r1(U+13))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
w1(U+9,u8(u32(r1(U+13))&u32(u8(0xffull))));
w1(U+10,u8(__builtin_popcountll(u64(r1(U+9)))));
w1(U+11,u8(u32(r1(U+10))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+11))==(u8(0x0ull))));
}
B75f9c7:{NFSU2_TR(0x75f9c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75f9d8;}}
}
B75f9c9:L75f9c9:{c.instructions+=4;NFSU2_TR(0x75f9c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f9ca:{NFSU2_TR(0x75f9ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f9cb:{NFSU2_TR(0x75f9cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f9cc:{NFSU2_TR(0x75f9cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f9d1ull));
TAIL_STATIC(0x76b9f8u,76b);
}
B75f9d1:L75f9d1:{c.instructions+=3;NFSU2_TR(0x75f9d1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75f9d4:{NFSU2_TR(0x75f9d4);
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
B75f9d6:{NFSU2_TR(0x75f9d6);
if(r1(R+518)){{goto L75f9e7;}}
}
B75f9d8:L75f9d8:{c.instructions+=1;NFSU2_TR(0x75f9d8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B75f9db:L75f9db:{c.instructions+=3;NFSU2_TR(0x75f9db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75f9dd:{NFSU2_TR(0x75f9dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75f9df:{NFSU2_TR(0x75f9df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f9b6u);}goto L75f9b6;}}
}
B75f9e1:L75f9e1:{c.instructions+=1;NFSU2_TR(0x75f9e1);
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
B75f9e3:L75f9e3:{c.instructions+=4;NFSU2_TR(0x75f9e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75f9e4:{NFSU2_TR(0x75f9e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75f9e5:{NFSU2_TR(0x75f9e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75f9e6:{NFSU2_TR(0x75f9e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75f9e7:L75f9e7:{c.instructions+=3;NFSU2_TR(0x75f9e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75f9e9:{NFSU2_TR(0x75f9e9);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B75f9ed:{NFSU2_TR(0x75f9ed);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f9e3u);}goto L75f9e3;}
}
B75f9ef:L75f9ef:{c.instructions+=3;NFSU2_TR(0x75f9ef);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f9f1:{NFSU2_TR(0x75f9f1);
u8 U[4];
w4(U+0,u32(0x7d3dd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f9f6:{NFSU2_TR(0x75f9f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75f9fbull));
TAIL_STATIC(0x760da0u,760);
}
B75f9fb:L75f9fb:{c.instructions+=2;NFSU2_TR(0x75f9fb);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75f9fd:{NFSU2_TR(0x75f9fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fa02ull));
TAIL_STATIC(0x7631f1u,763);
}
B75fa02:L75fa02:{c.instructions+=4;NFSU2_TR(0x75fa02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75fa03:{NFSU2_TR(0x75fa03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75fa07:{NFSU2_TR(0x75fa07);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75fa0a:{NFSU2_TR(0x75fa0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fa0full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f96eu);}goto L75f96e;}
}
B75fa0f:L75fa0f:{c.instructions+=4;NFSU2_TR(0x75fa0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75fa10:{NFSU2_TR(0x75fa10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fa13:{NFSU2_TR(0x75fa13);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B75fa17:{NFSU2_TR(0x75fa17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fa1cull));
{goto L75fa25;}
}
B75fa1c:L75fa1c:{c.instructions+=2;NFSU2_TR(0x75fa1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fa1f:{NFSU2_TR(0x75fa1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fa24ull));
TAIL_STATIC(0x760ddbu,760);
}
B75fa24:L75fa24:{c.instructions+=1;NFSU2_TR(0x75fa24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75fa25:L75fa25:{c.instructions+=2;NFSU2_TR(0x75fa25);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fa27:{NFSU2_TR(0x75fa27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fa2cull));
TAIL_STATIC(0x76315du,763);
}
B75fa2c:L75fa2c:{c.instructions+=2;NFSU2_TR(0x75fa2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75fa2d:{NFSU2_TR(0x75fa2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75fa2e:L75fa2e:{c.instructions+=6;NFSU2_TR(0x75fa2e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fa2f:{NFSU2_TR(0x75fa2f);
__builtin_memmove((R+20),(R+16),4);
}
B75fa31:{NFSU2_TR(0x75fa31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fa32:{NFSU2_TR(0x75fa32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75fa35:{NFSU2_TR(0x75fa35);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x0ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B75fa38:{NFSU2_TR(0x75fa38);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75fa41;}}
}
B75fa3a:L75fa3a:{c.instructions+=2;NFSU2_TR(0x75fa3a);
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
B75fa3c:{NFSU2_TR(0x75fa3c);
{goto L75fb73;}
}
B75fa41:L75fa41:{c.instructions+=1;NFSU2_TR(0x75fa41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fa46ull));
TAIL_STATIC(0x76698cu,766);
}
B75fa46:L75fa46:{c.instructions+=3;NFSU2_TR(0x75fa46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75fa48:{NFSU2_TR(0x75fa48);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3f480ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3f480ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75fa4d:{NFSU2_TR(0x75fa4d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75faa7;}}
}
B75fa4f:L75fa4f:{c.instructions+=2;NFSU2_TR(0x75fa4f);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7ffc0b7full)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7ffc0b7full))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B75fa54:{NFSU2_TR(0x75fa54);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75faa7;}}
}
B75fa56:L75fa56:{c.instructions+=5;NFSU2_TR(0x75fa56);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x81a760))));
}
B75fa5c:{NFSU2_TR(0x75fa5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fa5f:{NFSU2_TR(0x75fa5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75fa62:{NFSU2_TR(0x75fa62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fa63:{NFSU2_TR(0x75fa63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fa68ull));
TAIL_STATIC(0x761373u,761);
}
B75fa68:L75fa68:{c.instructions+=4;NFSU2_TR(0x75fa68);
u8 U[14];
__builtin_memmove((U+6),gp(0x81a764),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75fa6f:{NFSU2_TR(0x75fa6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75fa70:{NFSU2_TR(0x75fa70);
__builtin_memmove((R+24),(R+0),4);
}
B75fa72:{NFSU2_TR(0x75fa72);
if(r1(R+518)){{goto L75fb71;}}
}
B75fa78:L75fa78:{c.instructions+=2;NFSU2_TR(0x75fa78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fa79:{NFSU2_TR(0x75fa79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fa7eull));
TAIL_STATIC(0x7669bau,766);
}
B75fa7e:L75fa7e:{c.instructions+=3;NFSU2_TR(0x75fa7e);
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
B75fa80:{NFSU2_TR(0x75fa80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75fa81:{NFSU2_TR(0x75fa81);
if(r1(R+518)){{goto L75fb71;}}
}
B75fa87:L75fa87:{c.instructions+=5;NFSU2_TR(0x75fa87);
__builtin_memmove((R+0),gp(0x81a768),4);
}
B75fa8c:{NFSU2_TR(0x75fa8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B75fa8f:{NFSU2_TR(0x75fa8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75fa92:{NFSU2_TR(0x75fa92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fa93:{NFSU2_TR(0x75fa93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fa98ull));
TAIL_STATIC(0x761373u,761);
}
B75fa98:L75fa98:{c.instructions+=4;NFSU2_TR(0x75fa98);
__builtin_memmove((R+24),(R+0),4);
}
B75fa9a:{NFSU2_TR(0x75fa9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75fa9b:{NFSU2_TR(0x75fa9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75faa2:{NFSU2_TR(0x75faa2);
{goto L75fb71;}
}
B75faa7:L75faa7:{c.instructions+=2;NFSU2_TR(0x75faa7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75faa8:{NFSU2_TR(0x75faa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75faadull));
TAIL_STATIC(0x761373u,761);
}
B75faad:L75faad:{c.instructions+=4;NFSU2_TR(0x75faad);
u8 U[8];
__builtin_memmove((U+0),gp(0x81a764),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75fab4:{NFSU2_TR(0x75fab4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75fab5:{NFSU2_TR(0x75fab5);
__builtin_memmove((R+24),(R+0),4);
}
B75fab7:{NFSU2_TR(0x75fab7);
if(r1(R+518)){{goto L75fae1;}}
}
B75fab9:L75fab9:{c.instructions+=2;NFSU2_TR(0x75fab9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75faba:{NFSU2_TR(0x75faba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fabfull));
TAIL_STATIC(0x7669bau,766);
}
B75fabf:L75fabf:{c.instructions+=3;NFSU2_TR(0x75fabf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75fac1:{NFSU2_TR(0x75fac1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75fac2:{NFSU2_TR(0x75fac2);
if(r1(R+518)){{goto L75fae1;}}
}
B75fac4:L75fac4:{c.instructions+=7;NFSU2_TR(0x75fac4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75fac6:{NFSU2_TR(0x75fac6);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x81a768))));
}
B75facc:{NFSU2_TR(0x75facc);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x81a760))));
}
B75fad2:{NFSU2_TR(0x75fad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fad5:{NFSU2_TR(0x75fad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75fadc:{NFSU2_TR(0x75fadc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fadf:{NFSU2_TR(0x75fadf);
{goto L75faec;}
}
B75fae1:L75fae1:{c.instructions+=3;NFSU2_TR(0x75fae1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75fae3:{NFSU2_TR(0x75fae3);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x81a760))));
}
B75fae9:{NFSU2_TR(0x75fae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75faec:L75faec:{c.instructions+=9;NFSU2_TR(0x75faec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75faed:{NFSU2_TR(0x75faed);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75faef:{NFSU2_TR(0x75faef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75faf0:{NFSU2_TR(0x75faf0);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75faf1:{NFSU2_TR(0x75faf1);
__builtin_memmove((R+12),(R+4),4);
}
B75faf3:{NFSU2_TR(0x75faf3);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75faf3);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75faf3);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B75faf5:{NFSU2_TR(0x75faf5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B75faf7:{NFSU2_TR(0x75faf7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B75faf9:{NFSU2_TR(0x75faf9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75fb02;}}
}
B75fafb:L75fafb:{c.instructions+=3;NFSU2_TR(0x75fafb);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B75fafd:{NFSU2_TR(0x75fafd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B75faff:{NFSU2_TR(0x75faff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B75fb02:L75fb02:{c.instructions+=12;NFSU2_TR(0x75fb02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fb05:{NFSU2_TR(0x75fb05);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75fb06:{NFSU2_TR(0x75fb06);
__builtin_memmove((R+12),(R+4),4);
}
B75fb08:{NFSU2_TR(0x75fb08);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75fb08);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75fb08);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B75fb0a:{NFSU2_TR(0x75fb0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B75fb0d:{NFSU2_TR(0x75fb0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fb10:{NFSU2_TR(0x75fb10);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75fb11:{NFSU2_TR(0x75fb11);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75fb11);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75fb11);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B75fb13:{NFSU2_TR(0x75fb13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75fb14:{NFSU2_TR(0x75fb14);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B75fb16:{NFSU2_TR(0x75fb16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fb19:{NFSU2_TR(0x75fb19);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75fb24;}}
}
B75fb1b:L75fb1b:{c.instructions+=3;NFSU2_TR(0x75fb1b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3cull))));
}
B75fb1e:{NFSU2_TR(0x75fb1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fb21:{NFSU2_TR(0x75fb21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B75fb24:L75fb24:{c.instructions+=12;NFSU2_TR(0x75fb24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fb27:{NFSU2_TR(0x75fb27);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75fb28:{NFSU2_TR(0x75fb28);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75fb28);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75fb28);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B75fb2a:{NFSU2_TR(0x75fb2a);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fb2c:{NFSU2_TR(0x75fb2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75fb2d:{NFSU2_TR(0x75fb2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B75fb30:{NFSU2_TR(0x75fb30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fb33:{NFSU2_TR(0x75fb33);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75fb34:{NFSU2_TR(0x75fb34);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75fb34);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75fb34);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B75fb36:{NFSU2_TR(0x75fb36);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B75fb38:{NFSU2_TR(0x75fb38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fb3b:{NFSU2_TR(0x75fb3b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75fb45;}}
}
B75fb3d:L75fb3d:{c.instructions+=3;NFSU2_TR(0x75fb3d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B75fb3f:{NFSU2_TR(0x75fb3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fb42:{NFSU2_TR(0x75fb42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B75fb45:L75fb45:{c.instructions+=9;NFSU2_TR(0x75fb45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fb48:{NFSU2_TR(0x75fb48);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fb4a:{NFSU2_TR(0x75fb4a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75fb4b:{NFSU2_TR(0x75fb4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75fb4c:{NFSU2_TR(0x75fb4c);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75fb4c);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75fb4c);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B75fb4e:{NFSU2_TR(0x75fb4e);
__builtin_memmove((R+4),(R+0),4);
}
B75fb50:{NFSU2_TR(0x75fb50);
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
B75fb52:{NFSU2_TR(0x75fb52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fb55:{NFSU2_TR(0x75fb55);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75fb76;}}
}
B75fb57:L75fb57:{c.instructions+=9;NFSU2_TR(0x75fb57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fb5a:{NFSU2_TR(0x75fb5a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B75fb5c:{NFSU2_TR(0x75fb5c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75fb5d:{NFSU2_TR(0x75fb5d);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fb5f:{NFSU2_TR(0x75fb5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75fb60:{NFSU2_TR(0x75fb60);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75fb60);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75fb60);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B75fb62:{NFSU2_TR(0x75fb62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fb65:{NFSU2_TR(0x75fb65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fb68:{NFSU2_TR(0x75fb68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B75fb6b:L75fb6b:{c.instructions+=2;NFSU2_TR(0x75fb6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fb6e:{NFSU2_TR(0x75fb6e);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
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
B75fb71:L75fb71:{c.instructions+=1;NFSU2_TR(0x75fb71);
__builtin_memmove((R+0),(R+24),4);
}
B75fb73:L75fb73:{c.instructions+=3;NFSU2_TR(0x75fb73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75fb74:{NFSU2_TR(0x75fb74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75fb75:{NFSU2_TR(0x75fb75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75fb76:L75fb76:{c.instructions+=1;NFSU2_TR(0x75fb76);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75fb71u);}goto L75fb71;}}
}
B75fb78:L75fb78:{c.instructions+=12;NFSU2_TR(0x75fb78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fb7b:{NFSU2_TR(0x75fb7b);
u8 U[12];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B75fb7f:{NFSU2_TR(0x75fb7f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75fb80:{NFSU2_TR(0x75fb80);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fb82:{NFSU2_TR(0x75fb82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75fb83:{NFSU2_TR(0x75fb83);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75fb83);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75fb83);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B75fb85:{NFSU2_TR(0x75fb85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fb88:{NFSU2_TR(0x75fb88);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fb8b:{NFSU2_TR(0x75fb8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B75fb8e:{NFSU2_TR(0x75fb8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fb91:{NFSU2_TR(0x75fb91);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75fb93:{NFSU2_TR(0x75fb93);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75fb6bu);}goto L75fb6b;}}
}
B75fb95:L75fb95:{c.instructions+=6;NFSU2_TR(0x75fb95);
w1(R+512,carry<u32>(r4(R+0),u32(0x1full)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B75fb98:{NFSU2_TR(0x75fb98);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
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
B75fb9b:{NFSU2_TR(0x75fb9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fb9e:{NFSU2_TR(0x75fb9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x16cull));
s4(u32(r4(U+0)),r4(U+4));
}
B75fba5:{NFSU2_TR(0x75fba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B75fbac:{NFSU2_TR(0x75fbac);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75fb71u);}goto L75fb71;}
}
B75fbae:L75fbae:{c.instructions+=2;NFSU2_TR(0x75fbae);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75fbb2:{NFSU2_TR(0x75fbb2);
u8 U[4];
__builtin_memmove((U+0),gp(0x783120),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fbb8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75fbb8:L75fbb8:{c.instructions+=2;NFSU2_TR(0x75fbb8);
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
B75fbba:{NFSU2_TR(0x75fbba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75fbcb;}}
}
B75fbbc:L75fbbc:{c.instructions+=1;NFSU2_TR(0x75fbbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fbc1ull));
TAIL_STATIC(0x7661bau,766);
}
B75fbc1:L75fbc1:{c.instructions+=3;NFSU2_TR(0x75fbc1);
u8 U[4];
w4(U+0,u32(0x16ull));
s4(u32(r4(R+0)),r4(U+0));
}
B75fbc7:{NFSU2_TR(0x75fbc7);
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
B75fbca:{NFSU2_TR(0x75fbca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75fbcb:L75fbcb:{c.instructions+=2;NFSU2_TR(0x75fbcb);
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
B75fbcd:{NFSU2_TR(0x75fbcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75fbce:L75fbce:{c.instructions+=6;NFSU2_TR(0x75fbce);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fbcf:{NFSU2_TR(0x75fbcf);
__builtin_memmove((R+20),(R+16),4);
}
B75fbd1:{NFSU2_TR(0x75fbd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B75fbd4:{NFSU2_TR(0x75fbd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fbd7:{NFSU2_TR(0x75fbd7);
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
B75fbda:{NFSU2_TR(0x75fbda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75fbe2;}}
}
B75fbdc:L75fbdc:{c.instructions+=2;NFSU2_TR(0x75fbdc);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B75fbe0:{NFSU2_TR(0x75fbe0);
if(r1(R+518)){{goto L75fc2d;}}
}
B75fbe2:L75fbe2:{c.instructions+=4;NFSU2_TR(0x75fbe2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75fbe5:{NFSU2_TR(0x75fbe5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fbe6:{NFSU2_TR(0x75fbe6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fbe7:{NFSU2_TR(0x75fbe7);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832b8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fbedull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75fbed:L75fbed:{c.instructions+=2;NFSU2_TR(0x75fbed);
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
B75fbef:{NFSU2_TR(0x75fbef);
if(r1(R+518)){{goto L75fc2d;}}
}
B75fbf1:L75fbf1:{c.instructions+=5;NFSU2_TR(0x75fbf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75fbf4:{NFSU2_TR(0x75fbf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fbf5:{NFSU2_TR(0x75fbf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75fbf8:{NFSU2_TR(0x75fbf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fbf9:{NFSU2_TR(0x75fbf9);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832b4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fbffull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75fbff:L75fbff:{c.instructions+=2;NFSU2_TR(0x75fbff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75fc01:{NFSU2_TR(0x75fc01);
if(r1(R+518)){{goto L75fc2d;}}
}
B75fc03:L75fc03:{c.instructions+=14;NFSU2_TR(0x75fc03);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B75fc07:{NFSU2_TR(0x75fc07);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fc09:{NFSU2_TR(0x75fc09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fc0a:{NFSU2_TR(0x75fc0a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B75fc0e:{NFSU2_TR(0x75fc0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fc0f:{NFSU2_TR(0x75fc0f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B75fc13:{NFSU2_TR(0x75fc13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fc14:{NFSU2_TR(0x75fc14);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B75fc18:{NFSU2_TR(0x75fc18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fc19:{NFSU2_TR(0x75fc19);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffeaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B75fc1d:{NFSU2_TR(0x75fc1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fc1e:{NFSU2_TR(0x75fc1e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B75fc22:{NFSU2_TR(0x75fc22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fc23:{NFSU2_TR(0x75fc23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fc28ull));
TAIL_STATIC(0x76bab1u,76b);
}
B75fc28:L75fc28:{c.instructions+=3;NFSU2_TR(0x75fc28);
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
B75fc2b:{NFSU2_TR(0x75fc2b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75fc2c:{NFSU2_TR(0x75fc2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75fc2d:L75fc2d:{c.instructions+=3;NFSU2_TR(0x75fc2d);
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
B75fc30:{NFSU2_TR(0x75fc30);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75fc31:{NFSU2_TR(0x75fc31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75fc32:L75fc32:{c.instructions+=12;NFSU2_TR(0x75fc32);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fc33:{NFSU2_TR(0x75fc33);
__builtin_memmove((R+20),(R+16),4);
}
B75fc35:{NFSU2_TR(0x75fc35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x144ull))));
}
B75fc3b:{NFSU2_TR(0x75fc3b);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75fc40:{NFSU2_TR(0x75fc40);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75fc43:{NFSU2_TR(0x75fc43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fc44:{NFSU2_TR(0x75fc44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fc47:{NFSU2_TR(0x75fc47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fc48:{NFSU2_TR(0x75fc48);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffebcull))));
__builtin_memmove((R+0),(U+0),4);
}
B75fc4e:{NFSU2_TR(0x75fc4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fc4f:{NFSU2_TR(0x75fc4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75fc52:{NFSU2_TR(0x75fc52);
u8 U[4];
__builtin_memmove((U+0),gp(0x783128),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fc58ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75fc58:L75fc58:{c.instructions+=3;NFSU2_TR(0x75fc58);
__builtin_memmove((R+28),(R+0),4);
}
B75fc5a:{NFSU2_TR(0x75fc5a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B75fc5d:{NFSU2_TR(0x75fc5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75fca1;}}
}
B75fc5f:L75fc5f:{c.instructions+=1;NFSU2_TR(0x75fc5f);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fc65ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75fc65:L75fc65:{c.instructions+=4;NFSU2_TR(0x75fc65);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fc67:{NFSU2_TR(0x75fc67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75fc68:{NFSU2_TR(0x75fc68);
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
B75fc6a:{NFSU2_TR(0x75fc6a);
if(r1(R+512)){{goto L75fc7b;}}
}
B75fc6c:L75fc6c:{c.instructions+=2;NFSU2_TR(0x75fc6c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B75fc6f:{NFSU2_TR(0x75fc6f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75fc98;}}
}
B75fc71:L75fc71:{c.instructions+=2;NFSU2_TR(0x75fc71);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75fc74:{NFSU2_TR(0x75fc74);
if(r1(R+518)){{goto L75fc8b;}}
}
B75fc76:L75fc76:{c.instructions+=2;NFSU2_TR(0x75fc76);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x12ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x12ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75fc79:{NFSU2_TR(0x75fc79);
if(r1(R+518)){{goto L75fc98;}}
}
B75fc7b:L75fc7b:{c.instructions+=1;NFSU2_TR(0x75fc7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fc80ull));
TAIL_STATIC(0x7661bau,766);
}
B75fc80:L75fc80:{c.instructions+=1;NFSU2_TR(0x75fc80);
u8 U[4];
w4(U+0,u32(0x16ull));
s4(u32(r4(R+0)),r4(U+0));
}
B75fc86:L75fc86:{c.instructions+=2;NFSU2_TR(0x75fc86);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B75fc89:{NFSU2_TR(0x75fc89);
{goto L75fd06;}
}
B75fc8b:L75fc8b:{c.instructions+=1;NFSU2_TR(0x75fc8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fc90ull));
TAIL_STATIC(0x7661bau,766);
}
B75fc90:L75fc90:{c.instructions+=2;NFSU2_TR(0x75fc90);
u8 U[4];
w4(U+0,u32(0xcull));
s4(u32(r4(R+0)),r4(U+0));
}
B75fc96:{NFSU2_TR(0x75fc96);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75fc86u);}goto L75fc86;}
}
B75fc98:L75fc98:{c.instructions+=1;NFSU2_TR(0x75fc98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fc9dull));
TAIL_STATIC(0x7661bau,766);
}
B75fc9d:L75fc9d:{c.instructions+=2;NFSU2_TR(0x75fc9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B75fc9f:{NFSU2_TR(0x75fc9f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75fc86u);}goto L75fc86;}
}
B75fca1:L75fca1:{c.instructions+=10;NFSU2_TR(0x75fca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffebcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fca7:{NFSU2_TR(0x75fca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75fcaa:{NFSU2_TR(0x75fcaa);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x80ull))));
}
B75fcaf:{NFSU2_TR(0x75fcaf);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B75fcb1:{NFSU2_TR(0x75fcb1);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B75fcb3:{NFSU2_TR(0x75fcb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffebcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B75fcb9:{NFSU2_TR(0x75fcb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B75fcbb:{NFSU2_TR(0x75fcbb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75fcc1:{NFSU2_TR(0x75fcc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fcc2:{NFSU2_TR(0x75fcc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fcc7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75fbceu);}goto L75fbce;}
}
B75fcc7:L75fcc7:{c.instructions+=4;NFSU2_TR(0x75fcc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fcca:{NFSU2_TR(0x75fcca);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75fcd0:{NFSU2_TR(0x75fcd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fcd1:{NFSU2_TR(0x75fcd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fcd6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75fbceu);}goto L75fbce;}
}
B75fcd6:L75fcd6:{c.instructions+=4;NFSU2_TR(0x75fcd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fcd9:{NFSU2_TR(0x75fcd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75fcdf:{NFSU2_TR(0x75fcdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fce0:{NFSU2_TR(0x75fce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fce5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75fbceu);}goto L75fbce;}
}
B75fce5:L75fce5:{c.instructions+=8;NFSU2_TR(0x75fce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fce8:{NFSU2_TR(0x75fce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffedcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fcee:{NFSU2_TR(0x75fcee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fcf1:{NFSU2_TR(0x75fcf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75fcf7:{NFSU2_TR(0x75fcf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fcf8:{NFSU2_TR(0x75fcf8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B75fcfb:{NFSU2_TR(0x75fcfb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fcfc:{NFSU2_TR(0x75fcfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fd01ull));
TAIL_STATIC(0x766ac0u,766);
}
B75fd01:L75fd01:{c.instructions+=2;NFSU2_TR(0x75fd01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B75fd04:{NFSU2_TR(0x75fd04);
__builtin_memmove((R+0),(R+28),4);
}
B75fd06:L75fd06:{c.instructions+=5;NFSU2_TR(0x75fd06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75fd09:{NFSU2_TR(0x75fd09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B75fd0c:{NFSU2_TR(0x75fd0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75fd0d:{NFSU2_TR(0x75fd0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75fd0e:{NFSU2_TR(0x75fd0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fd13ull));
TAIL_STATIC(0x76115eu,761);
}
B75fd13:L75fd13:{c.instructions+=2;NFSU2_TR(0x75fd13);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75fd14:{NFSU2_TR(0x75fd14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75fd15:L75fd15:{c.instructions+=11;NFSU2_TR(0x75fd15);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fd16:{NFSU2_TR(0x75fd16);
__builtin_memmove((R+20),(R+16),4);
}
B75fd18:{NFSU2_TR(0x75fd18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x144ull))));
}
B75fd1e:{NFSU2_TR(0x75fd1e);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75fd23:{NFSU2_TR(0x75fd23);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75fd26:{NFSU2_TR(0x75fd26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fd27:{NFSU2_TR(0x75fd27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fd2a:{NFSU2_TR(0x75fd2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffebcull))));
__builtin_memmove((R+0),(U+0),4);
}
B75fd30:{NFSU2_TR(0x75fd30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fd31:{NFSU2_TR(0x75fd31);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75fd34:{NFSU2_TR(0x75fd34);
u8 U[4];
__builtin_memmove((U+0),gp(0x783124),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fd3aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75fd3a:L75fd3a:{c.instructions+=2;NFSU2_TR(0x75fd3a);
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
B75fd3c:{NFSU2_TR(0x75fd3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75fd80;}}
}
B75fd3e:L75fd3e:{c.instructions+=1;NFSU2_TR(0x75fd3e);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fd44ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75fd44:L75fd44:{c.instructions+=4;NFSU2_TR(0x75fd44);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fd46:{NFSU2_TR(0x75fd46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75fd47:{NFSU2_TR(0x75fd47);
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
B75fd49:{NFSU2_TR(0x75fd49);
if(r1(R+512)){{goto L75fd5a;}}
}
B75fd4b:L75fd4b:{c.instructions+=2;NFSU2_TR(0x75fd4b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B75fd4e:{NFSU2_TR(0x75fd4e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75fd77;}}
}
B75fd50:L75fd50:{c.instructions+=2;NFSU2_TR(0x75fd50);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75fd53:{NFSU2_TR(0x75fd53);
if(r1(R+518)){{goto L75fd6a;}}
}
B75fd55:L75fd55:{c.instructions+=2;NFSU2_TR(0x75fd55);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x12ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x12ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75fd58:{NFSU2_TR(0x75fd58);
if(r1(R+518)){{goto L75fd77;}}
}
B75fd5a:L75fd5a:{c.instructions+=1;NFSU2_TR(0x75fd5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fd5full));
TAIL_STATIC(0x7661bau,766);
}
B75fd5f:L75fd5f:{c.instructions+=1;NFSU2_TR(0x75fd5f);
u8 U[4];
w4(U+0,u32(0x16ull));
s4(u32(r4(R+0)),r4(U+0));
}
B75fd65:L75fd65:{c.instructions+=2;NFSU2_TR(0x75fd65);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B75fd68:{NFSU2_TR(0x75fd68);
{goto L75fde5;}
}
B75fd6a:L75fd6a:{c.instructions+=1;NFSU2_TR(0x75fd6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fd6full));
TAIL_STATIC(0x7661bau,766);
}
B75fd6f:L75fd6f:{c.instructions+=2;NFSU2_TR(0x75fd6f);
u8 U[4];
w4(U+0,u32(0xcull));
s4(u32(r4(R+0)),r4(U+0));
}
B75fd75:{NFSU2_TR(0x75fd75);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75fd65u);}goto L75fd65;}
}
B75fd77:L75fd77:{c.instructions+=1;NFSU2_TR(0x75fd77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fd7cull));
TAIL_STATIC(0x7661bau,766);
}
B75fd7c:L75fd7c:{c.instructions+=2;NFSU2_TR(0x75fd7c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B75fd7e:{NFSU2_TR(0x75fd7e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75fd65u);}goto L75fd65;}
}
B75fd80:L75fd80:{c.instructions+=10;NFSU2_TR(0x75fd80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffebcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fd86:{NFSU2_TR(0x75fd86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75fd89:{NFSU2_TR(0x75fd89);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x80ull))));
}
B75fd8e:{NFSU2_TR(0x75fd8e);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B75fd90:{NFSU2_TR(0x75fd90);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B75fd92:{NFSU2_TR(0x75fd92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffebcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B75fd98:{NFSU2_TR(0x75fd98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B75fd9a:{NFSU2_TR(0x75fd9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75fda0:{NFSU2_TR(0x75fda0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fda1:{NFSU2_TR(0x75fda1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fda6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75fbceu);}goto L75fbce;}
}
B75fda6:L75fda6:{c.instructions+=4;NFSU2_TR(0x75fda6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fda9:{NFSU2_TR(0x75fda9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75fdaf:{NFSU2_TR(0x75fdaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fdb0:{NFSU2_TR(0x75fdb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fdb5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75fbceu);}goto L75fbce;}
}
B75fdb5:L75fdb5:{c.instructions+=4;NFSU2_TR(0x75fdb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fdb8:{NFSU2_TR(0x75fdb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75fdbe:{NFSU2_TR(0x75fdbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fdbf:{NFSU2_TR(0x75fdbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fdc4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75fbceu);}goto L75fbce;}
}
B75fdc4:L75fdc4:{c.instructions+=8;NFSU2_TR(0x75fdc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fdc7:{NFSU2_TR(0x75fdc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffedcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fdcd:{NFSU2_TR(0x75fdcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fdd0:{NFSU2_TR(0x75fdd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75fdd6:{NFSU2_TR(0x75fdd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fdd7:{NFSU2_TR(0x75fdd7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B75fdda:{NFSU2_TR(0x75fdda);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fddb:{NFSU2_TR(0x75fddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fde0ull));
TAIL_STATIC(0x766ac0u,766);
}
B75fde0:L75fde0:{c.instructions+=2;NFSU2_TR(0x75fde0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B75fde3:{NFSU2_TR(0x75fde3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75fde5:L75fde5:{c.instructions+=4;NFSU2_TR(0x75fde5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75fde8:{NFSU2_TR(0x75fde8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B75fdeb:{NFSU2_TR(0x75fdeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75fdec:{NFSU2_TR(0x75fdec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fdf1ull));
TAIL_STATIC(0x76115eu,761);
}
B75fdf1:L75fdf1:{c.instructions+=2;NFSU2_TR(0x75fdf1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75fdf2:{NFSU2_TR(0x75fdf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75fdf3:L75fdf3:{c.instructions+=3;NFSU2_TR(0x75fdf3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fdf5:{NFSU2_TR(0x75fdf5);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75fdf9:{NFSU2_TR(0x75fdf9);
u8 U[4];
__builtin_memmove((U+0),gp(0x78312c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fdffull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75fdff:L75fdff:{c.instructions+=2;NFSU2_TR(0x75fdff);
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
B75fe01:{NFSU2_TR(0x75fe01);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75fe0b;}}
}
B75fe03:L75fe03:{c.instructions+=1;NFSU2_TR(0x75fe03);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fe09ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75fe09:L75fe09:{c.instructions+=1;NFSU2_TR(0x75fe09);
{goto L75fe0d;}
}
B75fe0b:L75fe0b:{c.instructions+=1;NFSU2_TR(0x75fe0b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75fe0d:L75fe0d:{c.instructions+=2;NFSU2_TR(0x75fe0d);
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
B75fe0f:{NFSU2_TR(0x75fe0f);
if(r1(R+518)){{goto L75fe1c;}}
}
B75fe11:L75fe11:{c.instructions+=2;NFSU2_TR(0x75fe11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fe12:{NFSU2_TR(0x75fe12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fe17ull));
TAIL_STATIC(0x7661ccu,766);
}
B75fe17:L75fe17:{c.instructions+=3;NFSU2_TR(0x75fe17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75fe18:{NFSU2_TR(0x75fe18);
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
B75fe1b:{NFSU2_TR(0x75fe1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75fe1c:L75fe1c:{c.instructions+=2;NFSU2_TR(0x75fe1c);
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
B75fe1e:{NFSU2_TR(0x75fe1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75fe1f:L75fe1f:{c.instructions+=5;NFSU2_TR(0x75fe1f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fe20:{NFSU2_TR(0x75fe20);
__builtin_memmove((R+20),(R+16),4);
}
B75fe22:{NFSU2_TR(0x75fe22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fe25:{NFSU2_TR(0x75fe25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75fe27:{NFSU2_TR(0x75fe27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75fe2d;}}
}
B75fe29:L75fe29:{c.instructions+=2;NFSU2_TR(0x75fe29);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B75fe2b:{NFSU2_TR(0x75fe2b);
{goto L75fe4b;}
}
B75fe2d:L75fe2d:{c.instructions+=2;NFSU2_TR(0x75fe2d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1aull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1aull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1aull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75fe30:{NFSU2_TR(0x75fe30);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75fe37;}}
}
B75fe32:L75fe32:{c.instructions+=4;NFSU2_TR(0x75fe32);
u8 U[4];
w4(U+0,u32(0x57ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fe34:{NFSU2_TR(0x75fe34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75fe35:{NFSU2_TR(0x75fe35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75fe36:{NFSU2_TR(0x75fe36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75fe37:L75fe37:{c.instructions+=6;NFSU2_TR(0x75fe37);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
}
B75fe39:{NFSU2_TR(0x75fe39);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B75fe3d:{NFSU2_TR(0x75fe3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75fe40:{NFSU2_TR(0x75fe40);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75fe43:{NFSU2_TR(0x75fe43);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9ull))));
w1(U+4,u8(0x3aull));
s1(u32(r4(U+0)),r1(U+4));
}
B75fe47:{NFSU2_TR(0x75fe47);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
w1(U+4,u8(0x5cull));
s1(u32(r4(U+0)),r1(U+4));
}
B75fe4b:L75fe4b:{c.instructions+=10;NFSU2_TR(0x75fe4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75fe4e:{NFSU2_TR(0x75fe4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fe4f:{NFSU2_TR(0x75fe4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B75fe52:{NFSU2_TR(0x75fe52);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fe53:{NFSU2_TR(0x75fe53);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B75fe56:{NFSU2_TR(0x75fe56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fe57:{NFSU2_TR(0x75fe57);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75fe5a:{NFSU2_TR(0x75fe5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fe5b:{NFSU2_TR(0x75fe5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fe5c:{NFSU2_TR(0x75fe5c);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832bc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fe62ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75fe62:L75fe62:{c.instructions+=2;NFSU2_TR(0x75fe62);
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
B75fe64:{NFSU2_TR(0x75fe64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75fe6d;}}
}
B75fe66:L75fe66:{c.instructions+=2;NFSU2_TR(0x75fe66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75fe67:{NFSU2_TR(0x75fe67);
{u32 t_=u32(m4(0x783114));TAIL_DYNAMIC(t_);}
}
B75fe6d:L75fe6d:{c.instructions+=3;NFSU2_TR(0x75fe6d);
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
B75fe6f:{NFSU2_TR(0x75fe6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75fe70:{NFSU2_TR(0x75fe70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75fe71:L75fe71:{c.instructions+=12;NFSU2_TR(0x75fe71);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fe72:{NFSU2_TR(0x75fe72);
__builtin_memmove((R+20),(R+16),4);
}
B75fe74:{NFSU2_TR(0x75fe74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x108ull))));
}
B75fe7a:{NFSU2_TR(0x75fe7a);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75fe7f:{NFSU2_TR(0x75fe7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B75fe82:{NFSU2_TR(0x75fe82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fe83:{NFSU2_TR(0x75fe83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75fe86:{NFSU2_TR(0x75fe86);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75fe8c:{NFSU2_TR(0x75fe8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fe8d:{NFSU2_TR(0x75fe8d);
u8 U[4];
w4(U+0,u32(0x104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fe92:{NFSU2_TR(0x75fe92);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75fe94:{NFSU2_TR(0x75fe94);
u8 U[4];
__builtin_memmove((U+0),gp(0x783220),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fe9aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75fe9a:L75fe9a:{c.instructions+=2;NFSU2_TR(0x75fe9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75fe9c:{NFSU2_TR(0x75fe9c);
if(r1(R+518)){{goto L75feba;}}
}
B75fe9e:L75fe9e:{c.instructions+=2;NFSU2_TR(0x75fe9e);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x3aull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x3aull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x3aull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B75fea5:{NFSU2_TR(0x75fea5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75feba;}}
}
B75fea7:L75fea7:{c.instructions+=3;NFSU2_TR(0x75fea7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B75feae:{NFSU2_TR(0x75feae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75feaf:{NFSU2_TR(0x75feaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75feb4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75f115u);}goto L75f115;}
}
B75feb4:L75feb4:{c.instructions+=3;NFSU2_TR(0x75feb4);
__builtin_memmove((R+24),(R+0),4);
}
B75feb6:{NFSU2_TR(0x75feb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75feb7:{NFSU2_TR(0x75feb7);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x40ull))));
}
B75feba:L75feba:{c.instructions+=5;NFSU2_TR(0x75feba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75febd:{NFSU2_TR(0x75febd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B75fec0:{NFSU2_TR(0x75fec0);
__builtin_memmove((R+0),(R+24),4);
}
B75fec2:{NFSU2_TR(0x75fec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75fec3:{NFSU2_TR(0x75fec3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fec8ull));
TAIL_STATIC(0x76115eu,761);
}
B75fec8:L75fec8:{c.instructions+=2;NFSU2_TR(0x75fec8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75fec9:{NFSU2_TR(0x75fec9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75feca:L75feca:{c.instructions+=7;NFSU2_TR(0x75feca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fecb:{NFSU2_TR(0x75fecb);
__builtin_memmove((R+20),(R+16),4);
}
B75fecd:{NFSU2_TR(0x75fecd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fece:{NFSU2_TR(0x75fece);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75fed1:{NFSU2_TR(0x75fed1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75fed3:{NFSU2_TR(0x75fed3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fed4:{NFSU2_TR(0x75fed4);
if(r1(R+518)){{goto L75ff63;}}
}
B75feda:L75feda:{c.instructions+=2;NFSU2_TR(0x75feda);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B75fedd:{NFSU2_TR(0x75fedd);
if(r1(R+518)){{goto L75ff63;}}
}
B75fee3:L75fee3:{c.instructions+=3;NFSU2_TR(0x75fee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75fee6:{NFSU2_TR(0x75fee6);
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
B75fee8:{NFSU2_TR(0x75fee8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75ff0f;}}
}
B75feea:L75feea:{c.instructions+=2;NFSU2_TR(0x75feea);
u8 U[4];
w4(U+0,u32(0x104ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75feef:{NFSU2_TR(0x75feef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75fef4ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B75fef4:L75fef4:{c.instructions+=4;NFSU2_TR(0x75fef4);
__builtin_memmove((R+28),(R+0),4);
}
B75fef6:{NFSU2_TR(0x75fef6);
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
B75fef8:{NFSU2_TR(0x75fef8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75fef9:{NFSU2_TR(0x75fef9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75ff08;}}
}
B75fefb:L75fefb:{c.instructions+=1;NFSU2_TR(0x75fefb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ff00ull));
TAIL_STATIC(0x7661bau,766);
}
B75ff00:L75ff00:{c.instructions+=2;NFSU2_TR(0x75ff00);
u8 U[4];
w4(U+0,u32(0xcull));
s4(u32(r4(R+0)),r4(U+0));
}
B75ff06:{NFSU2_TR(0x75ff06);
{goto L75ff3b;}
}
B75ff08:L75ff08:{c.instructions+=1;NFSU2_TR(0x75ff08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0x104ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75ff0f:L75ff0f:{c.instructions+=6;NFSU2_TR(0x75ff0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B75ff12:{NFSU2_TR(0x75ff12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ff13:{NFSU2_TR(0x75ff13);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ff14:{NFSU2_TR(0x75ff14);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75ff17:{NFSU2_TR(0x75ff17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ff18:{NFSU2_TR(0x75ff18);
u8 U[4];
__builtin_memmove((U+0),gp(0x7831c0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ff1eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75ff1e:L75ff1e:{c.instructions+=2;NFSU2_TR(0x75ff1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B75ff21:{NFSU2_TR(0x75ff21);
if(r1(R+512)){{goto L75ff3f;}}
}
B75ff23:L75ff23:{c.instructions+=2;NFSU2_TR(0x75ff23);
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
B75ff27:{NFSU2_TR(0x75ff27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75ff30;}}
}
B75ff29:L75ff29:{c.instructions+=2;NFSU2_TR(0x75ff29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ff2a:{NFSU2_TR(0x75ff2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ff2full));
TAIL_STATIC(0x75c6dau,75c);
}
B75ff2f:L75ff2f:{c.instructions+=1;NFSU2_TR(0x75ff2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75ff30:L75ff30:{c.instructions+=1;NFSU2_TR(0x75ff30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ff35ull));
TAIL_STATIC(0x7661bau,766);
}
B75ff35:L75ff35:{c.instructions+=1;NFSU2_TR(0x75ff35);
u8 U[4];
w4(U+0,u32(0x22ull));
s4(u32(r4(R+0)),r4(U+0));
}
B75ff3b:L75ff3b:{c.instructions+=2;NFSU2_TR(0x75ff3b);
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
B75ff3d:{NFSU2_TR(0x75ff3d);
{goto L75ff70;}
}
B75ff3f:L75ff3f:{c.instructions+=2;NFSU2_TR(0x75ff3f);
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
B75ff41:{NFSU2_TR(0x75ff41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75ff5f;}}
}
B75ff43:L75ff43:{c.instructions+=2;NFSU2_TR(0x75ff43);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75ff46:{NFSU2_TR(0x75ff46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75ff4f;}}
}
B75ff48:L75ff48:{c.instructions+=2;NFSU2_TR(0x75ff48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ff49:{NFSU2_TR(0x75ff49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ff4eull));
TAIL_STATIC(0x75c6dau,75c);
}
B75ff4e:L75ff4e:{c.instructions+=1;NFSU2_TR(0x75ff4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75ff4f:L75ff4f:{c.instructions+=1;NFSU2_TR(0x75ff4f);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ff55ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75ff55:L75ff55:{c.instructions+=2;NFSU2_TR(0x75ff55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ff56:{NFSU2_TR(0x75ff56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ff5bull));
TAIL_STATIC(0x7661ccu,766);
}
B75ff5b:L75ff5b:{c.instructions+=2;NFSU2_TR(0x75ff5b);
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
B75ff5d:{NFSU2_TR(0x75ff5d);
{goto L75ff6f;}
}
B75ff5f:L75ff5f:{c.instructions+=2;NFSU2_TR(0x75ff5f);
__builtin_memmove((R+0),(R+28),4);
}
B75ff61:{NFSU2_TR(0x75ff61);
{goto L75ff70;}
}
B75ff63:L75ff63:{c.instructions+=3;NFSU2_TR(0x75ff63);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75ff66:{NFSU2_TR(0x75ff66);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75ff69:{NFSU2_TR(0x75ff69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ff6eull));
TAIL_STATIC(0x76bce4u,76b);
}
B75ff6e:L75ff6e:{c.instructions+=1;NFSU2_TR(0x75ff6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75ff6f:L75ff6f:{c.instructions+=1;NFSU2_TR(0x75ff6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75ff70:L75ff70:{c.instructions+=4;NFSU2_TR(0x75ff70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75ff71:{NFSU2_TR(0x75ff71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75ff72:{NFSU2_TR(0x75ff72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75ff73:{NFSU2_TR(0x75ff73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75ff74:L75ff74:{c.instructions+=5;NFSU2_TR(0x75ff74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ff75:{NFSU2_TR(0x75ff75);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75ff79:{NFSU2_TR(0x75ff79);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ff7a:{NFSU2_TR(0x75ff7a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ff7b:{NFSU2_TR(0x75ff7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ff80ull));
TAIL_STATIC(0x76be25u,76b);
}
B75ff80:L75ff80:{c.instructions+=3;NFSU2_TR(0x75ff80);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75ff83:{NFSU2_TR(0x75ff83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75ff84:{NFSU2_TR(0x75ff84);
if(r1(R+518)){{goto L75ffc2;}}
}
B75ff86:L75ff86:{c.instructions+=2;NFSU2_TR(0x75ff86);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75ff89:{NFSU2_TR(0x75ff89);
if(r1(R+518)){{goto L75ff90;}}
}
B75ff8b:L75ff8b:{c.instructions+=2;NFSU2_TR(0x75ff8b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75ff8e:{NFSU2_TR(0x75ff8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75ffa6;}}
}
B75ff90:L75ff90:{c.instructions+=2;NFSU2_TR(0x75ff90);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ff92:{NFSU2_TR(0x75ff92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ff97ull));
TAIL_STATIC(0x76be25u,76b);
}
B75ff97:L75ff97:{c.instructions+=3;NFSU2_TR(0x75ff97);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ff99:{NFSU2_TR(0x75ff99);
__builtin_memmove((R+28),(R+0),4);
}
B75ff9b:{NFSU2_TR(0x75ff9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ffa0ull));
TAIL_STATIC(0x76be25u,76b);
}
B75ffa0:L75ffa0:{c.instructions+=4;NFSU2_TR(0x75ffa0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75ffa2:{NFSU2_TR(0x75ffa2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75ffa3:{NFSU2_TR(0x75ffa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75ffa4:{NFSU2_TR(0x75ffa4);
if(r1(R+518)){{goto L75ffc2;}}
}
B75ffa6:L75ffa6:{c.instructions+=2;NFSU2_TR(0x75ffa6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ffa7:{NFSU2_TR(0x75ffa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ffacull));
TAIL_STATIC(0x76be25u,76b);
}
B75ffac:L75ffac:{c.instructions+=3;NFSU2_TR(0x75ffac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75ffad:{NFSU2_TR(0x75ffad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ffae:{NFSU2_TR(0x75ffae);
u8 U[4];
__builtin_memmove((U+0),gp(0x783144),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ffb4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75ffb4:L75ffb4:{c.instructions+=2;NFSU2_TR(0x75ffb4);
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
B75ffb6:{NFSU2_TR(0x75ffb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75ffc2;}}
}
B75ffb8:L75ffb8:{c.instructions+=1;NFSU2_TR(0x75ffb8);
u8 U[4];
__builtin_memmove((U+0),gp(0x783114),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ffbeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75ffbe:L75ffbe:{c.instructions+=2;NFSU2_TR(0x75ffbe);
__builtin_memmove((R+28),(R+0),4);
}
B75ffc0:{NFSU2_TR(0x75ffc0);
{goto L75ffc4;}
}
B75ffc2:L75ffc2:{c.instructions+=1;NFSU2_TR(0x75ffc2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B75ffc4:L75ffc4:{c.instructions+=2;NFSU2_TR(0x75ffc4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ffc5:{NFSU2_TR(0x75ffc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ffcaull));
TAIL_STATIC(0x76bda6u,76b);
}
B75ffca:L75ffca:{c.instructions+=9;NFSU2_TR(0x75ffca);
__builtin_memmove((R+0),(R+24),4);
}
B75ffcc:{NFSU2_TR(0x75ffcc);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B75ffcf:{NFSU2_TR(0x75ffcf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8ba4c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B75ffd6:{NFSU2_TR(0x75ffd6);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1full))));
}
B75ffd9:{NFSU2_TR(0x75ffd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75ffda:{NFSU2_TR(0x75ffda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B75ffdd:{NFSU2_TR(0x75ffdd);
u8 U[13];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))&u32(u8(0x0ull))));
s1(u32(r4(U+8)),r1(U+12));
}
B75ffe2:{NFSU2_TR(0x75ffe2);
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
B75ffe4:{NFSU2_TR(0x75ffe4);
if(r1(R+518)){{goto L75fff2;}}
}
B75ffe6:L75ffe6:{c.instructions+=2;NFSU2_TR(0x75ffe6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ffe7:{NFSU2_TR(0x75ffe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ffecull));
TAIL_STATIC(0x7661ccu,766);
}
B75ffec:L75ffec:{c.instructions+=3;NFSU2_TR(0x75ffec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75ffed:{NFSU2_TR(0x75ffed);
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
B75fff0:{NFSU2_TR(0x75fff0);
{goto L75fff4;}
}
B75fff2:L75fff2:{c.instructions+=1;NFSU2_TR(0x75fff2);
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
B75fff4:L75fff4:{c.instructions+=3;NFSU2_TR(0x75fff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75fff5:{NFSU2_TR(0x75fff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75fff6:{NFSU2_TR(0x75fff6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75fff7:L75fff7:{c.instructions+=3;NFSU2_TR(0x75fff7);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fff9:{NFSU2_TR(0x75fff9);
u8 U[4];
w4(U+0,u32(0x7d3de0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75fffe:{NFSU2_TR(0x75fffe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x760003ull));
TAIL_STATIC(0x760da0u,760);
}
XIT:NFSU2_TR_EXIT(0x75f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
