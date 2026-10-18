#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_520(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x52f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x52f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_52f(u8* __restrict R,Cpu& c);
u32 page_52f(Cpu& c){return body_52f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_52f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x52f000:goto L52f000;
case 0x52f003:c.instructions+=2;goto B52f003;
case 0x52f004:c.instructions+=1;goto B52f004;
case 0x52f006:goto L52f006;
case 0x52f00b:c.instructions+=5;goto B52f00b;
case 0x52f00e:c.instructions+=4;goto B52f00e;
case 0x52f011:c.instructions+=3;goto B52f011;
case 0x52f019:c.instructions+=2;goto B52f019;
case 0x52f021:c.instructions+=1;goto B52f021;
case 0x52f027:goto L52f027;
case 0x52f028:c.instructions+=1;goto B52f028;
case 0x52f02a:goto L52f02a;
case 0x52f02b:c.instructions+=1;goto B52f02b;
case 0x52f031:goto L52f031;
case 0x52f034:c.instructions+=3;goto B52f034;
case 0x52f036:c.instructions+=2;goto B52f036;
case 0x52f039:c.instructions+=1;goto B52f039;
case 0x52f03b:goto L52f03b;
case 0x52f03f:c.instructions+=5;goto B52f03f;
case 0x52f040:c.instructions+=4;goto B52f040;
case 0x52f044:c.instructions+=3;goto B52f044;
case 0x52f045:c.instructions+=2;goto B52f045;
case 0x52f046:c.instructions+=1;goto B52f046;
case 0x52f04b:goto L52f04b;
case 0x52f04e:c.instructions+=5;goto B52f04e;
case 0x52f054:c.instructions+=4;goto B52f054;
case 0x52f057:c.instructions+=3;goto B52f057;
case 0x52f05b:c.instructions+=2;goto B52f05b;
case 0x52f05f:c.instructions+=1;goto B52f05f;
case 0x52f064:goto L52f064;
case 0x52f068:c.instructions+=5;goto B52f068;
case 0x52f069:c.instructions+=4;goto B52f069;
case 0x52f06d:c.instructions+=3;goto B52f06d;
case 0x52f06e:c.instructions+=2;goto B52f06e;
case 0x52f06f:c.instructions+=1;goto B52f06f;
case 0x52f074:goto L52f074;
case 0x52f077:c.instructions+=5;goto B52f077;
case 0x52f07d:c.instructions+=4;goto B52f07d;
case 0x52f080:c.instructions+=3;goto B52f080;
case 0x52f084:c.instructions+=2;goto B52f084;
case 0x52f088:c.instructions+=1;goto B52f088;
case 0x52f08d:goto L52f08d;
case 0x52f090:c.instructions+=3;goto B52f090;
case 0x52f092:c.instructions+=2;goto B52f092;
case 0x52f095:c.instructions+=1;goto B52f095;
case 0x52f097:goto L52f097;
case 0x52f09b:c.instructions+=5;goto B52f09b;
case 0x52f09c:c.instructions+=4;goto B52f09c;
case 0x52f0a0:c.instructions+=3;goto B52f0a0;
case 0x52f0a1:c.instructions+=2;goto B52f0a1;
case 0x52f0a2:c.instructions+=1;goto B52f0a2;
case 0x52f0a7:goto L52f0a7;
case 0x52f0aa:c.instructions+=6;goto B52f0aa;
case 0x52f0b0:c.instructions+=5;goto B52f0b0;
case 0x52f0b3:c.instructions+=4;goto B52f0b3;
case 0x52f0b9:c.instructions+=3;goto B52f0b9;
case 0x52f0bd:c.instructions+=2;goto B52f0bd;
case 0x52f0c1:c.instructions+=1;goto B52f0c1;
case 0x52f0c3:goto L52f0c3;
case 0x52f0c7:c.instructions+=5;goto B52f0c7;
case 0x52f0c8:c.instructions+=4;goto B52f0c8;
case 0x52f0cc:c.instructions+=3;goto B52f0cc;
case 0x52f0cd:c.instructions+=2;goto B52f0cd;
case 0x52f0ce:c.instructions+=1;goto B52f0ce;
case 0x52f0d3:goto L52f0d3;
case 0x52f0d6:c.instructions+=6;goto B52f0d6;
case 0x52f0dc:c.instructions+=5;goto B52f0dc;
case 0x52f0df:c.instructions+=4;goto B52f0df;
case 0x52f0e5:c.instructions+=3;goto B52f0e5;
case 0x52f0e9:c.instructions+=2;goto B52f0e9;
case 0x52f0ed:c.instructions+=1;goto B52f0ed;
case 0x52f0ef:goto L52f0ef;
case 0x52f0f2:c.instructions+=3;goto B52f0f2;
case 0x52f0f4:c.instructions+=2;goto B52f0f4;
case 0x52f0f8:c.instructions+=1;goto B52f0f8;
case 0x52f0fa:goto L52f0fa;
case 0x52f0fd:c.instructions+=5;goto B52f0fd;
case 0x52f101:c.instructions+=4;goto B52f101;
case 0x52f102:c.instructions+=3;goto B52f102;
case 0x52f103:c.instructions+=2;goto B52f103;
case 0x52f104:c.instructions+=1;goto B52f104;
case 0x52f109:goto L52f109;
case 0x52f10d:c.instructions+=2;goto B52f10d;
case 0x52f111:c.instructions+=1;goto B52f111;
case 0x52f113:goto L52f113;
case 0x52f116:c.instructions+=5;goto B52f116;
case 0x52f117:c.instructions+=4;goto B52f117;
case 0x52f11b:c.instructions+=3;goto B52f11b;
case 0x52f11c:c.instructions+=2;goto B52f11c;
case 0x52f11d:c.instructions+=1;goto B52f11d;
case 0x52f122:goto L52f122;
case 0x52f126:c.instructions+=1;goto B52f126;
case 0x52f12a:goto L52f12a;
case 0x52f12d:goto L52f12d;
case 0x52f130:c.instructions+=2;goto B52f130;
case 0x52f132:c.instructions+=1;goto B52f132;
case 0x52f138:goto L52f138;
case 0x52f13b:c.instructions+=3;goto B52f13b;
case 0x52f13d:c.instructions+=2;goto B52f13d;
case 0x52f13e:c.instructions+=1;goto B52f13e;
case 0x52f144:goto L52f144;
case 0x52f147:c.instructions+=8;goto B52f147;
case 0x52f14a:c.instructions+=7;goto B52f14a;
case 0x52f150:c.instructions+=6;goto B52f150;
case 0x52f153:c.instructions+=5;goto B52f153;
case 0x52f156:c.instructions+=4;goto B52f156;
case 0x52f157:c.instructions+=3;goto B52f157;
case 0x52f158:c.instructions+=2;goto B52f158;
case 0x52f159:c.instructions+=1;goto B52f159;
case 0x52f15e:goto L52f15e;
case 0x52f162:c.instructions+=7;goto B52f162;
case 0x52f165:c.instructions+=6;goto B52f165;
case 0x52f168:c.instructions+=5;goto B52f168;
case 0x52f16c:c.instructions+=4;goto B52f16c;
case 0x52f16f:c.instructions+=3;goto B52f16f;
case 0x52f171:c.instructions+=2;goto B52f171;
case 0x52f174:c.instructions+=1;goto B52f174;
case 0x52f176:goto L52f176;
case 0x52f179:c.instructions+=3;goto B52f179;
case 0x52f17a:c.instructions+=2;goto B52f17a;
case 0x52f17d:c.instructions+=1;goto B52f17d;
case 0x52f17f:goto L52f17f;
case 0x52f182:c.instructions+=1;goto B52f182;
case 0x52f184:goto L52f184;
case 0x52f187:c.instructions+=1;goto B52f187;
case 0x52f189:goto L52f189;
case 0x52f18c:c.instructions+=2;goto B52f18c;
case 0x52f18e:c.instructions+=1;goto B52f18e;
case 0x52f191:goto L52f191;
case 0x52f194:c.instructions+=5;goto B52f194;
case 0x52f197:c.instructions+=4;goto B52f197;
case 0x52f19a:c.instructions+=3;goto B52f19a;
case 0x52f19c:c.instructions+=2;goto B52f19c;
case 0x52f19f:c.instructions+=1;goto B52f19f;
case 0x52f1a1:goto L52f1a1;
case 0x52f1a3:c.instructions+=1;goto B52f1a3;
case 0x52f1a5:goto L52f1a5;
case 0x52f1a8:c.instructions+=6;goto B52f1a8;
case 0x52f1ac:c.instructions+=5;goto B52f1ac;
case 0x52f1ad:c.instructions+=4;goto B52f1ad;
case 0x52f1b1:c.instructions+=3;goto B52f1b1;
case 0x52f1b2:c.instructions+=2;goto B52f1b2;
case 0x52f1b3:c.instructions+=1;goto B52f1b3;
case 0x52f1b8:goto L52f1b8;
case 0x52f1bc:c.instructions+=4;goto B52f1bc;
case 0x52f1c0:c.instructions+=3;goto B52f1c0;
case 0x52f1c1:c.instructions+=2;goto B52f1c1;
case 0x52f1c2:c.instructions+=1;goto B52f1c2;
case 0x52f1c7:goto L52f1c7;
case 0x52f1ca:c.instructions+=8;goto B52f1ca;
case 0x52f1cd:c.instructions+=7;goto B52f1cd;
case 0x52f1d3:c.instructions+=6;goto B52f1d3;
case 0x52f1d6:c.instructions+=5;goto B52f1d6;
case 0x52f1d9:c.instructions+=4;goto B52f1d9;
case 0x52f1da:c.instructions+=3;goto B52f1da;
case 0x52f1db:c.instructions+=2;goto B52f1db;
case 0x52f1dc:c.instructions+=1;goto B52f1dc;
case 0x52f1e1:goto L52f1e1;
case 0x52f1e5:c.instructions+=7;goto B52f1e5;
case 0x52f1e8:c.instructions+=6;goto B52f1e8;
case 0x52f1eb:c.instructions+=5;goto B52f1eb;
case 0x52f1ef:c.instructions+=4;goto B52f1ef;
case 0x52f1f2:c.instructions+=3;goto B52f1f2;
case 0x52f1f4:c.instructions+=2;goto B52f1f4;
case 0x52f1f7:c.instructions+=1;goto B52f1f7;
case 0x52f1f9:goto L52f1f9;
case 0x52f1fc:c.instructions+=3;goto B52f1fc;
case 0x52f1fd:c.instructions+=2;goto B52f1fd;
case 0x52f200:c.instructions+=1;goto B52f200;
case 0x52f202:goto L52f202;
case 0x52f205:c.instructions+=1;goto B52f205;
case 0x52f207:goto L52f207;
case 0x52f20a:c.instructions+=1;goto B52f20a;
case 0x52f20c:goto L52f20c;
case 0x52f20f:c.instructions+=2;goto B52f20f;
case 0x52f211:c.instructions+=1;goto B52f211;
case 0x52f214:goto L52f214;
case 0x52f217:c.instructions+=5;goto B52f217;
case 0x52f21a:c.instructions+=4;goto B52f21a;
case 0x52f21d:c.instructions+=3;goto B52f21d;
case 0x52f21f:c.instructions+=2;goto B52f21f;
case 0x52f222:c.instructions+=1;goto B52f222;
case 0x52f224:goto L52f224;
case 0x52f226:c.instructions+=1;goto B52f226;
case 0x52f228:goto L52f228;
case 0x52f22b:c.instructions+=6;goto B52f22b;
case 0x52f22f:c.instructions+=5;goto B52f22f;
case 0x52f230:c.instructions+=4;goto B52f230;
case 0x52f234:c.instructions+=3;goto B52f234;
case 0x52f235:c.instructions+=2;goto B52f235;
case 0x52f236:c.instructions+=1;goto B52f236;
case 0x52f23b:goto L52f23b;
case 0x52f23f:c.instructions+=4;goto B52f23f;
case 0x52f243:c.instructions+=3;goto B52f243;
case 0x52f244:c.instructions+=2;goto B52f244;
case 0x52f245:c.instructions+=1;goto B52f245;
case 0x52f24a:goto L52f24a;
case 0x52f24d:c.instructions+=1;goto B52f24d;
case 0x52f253:goto L52f253;
case 0x52f256:c.instructions+=6;goto B52f256;
case 0x52f259:c.instructions+=5;goto B52f259;
case 0x52f25b:c.instructions+=4;goto B52f25b;
case 0x52f261:c.instructions+=3;goto B52f261;
case 0x52f264:c.instructions+=2;goto B52f264;
case 0x52f26a:c.instructions+=1;goto B52f26a;
case 0x52f26c:goto L52f26c;
case 0x52f26f:c.instructions+=3;goto B52f26f;
case 0x52f270:c.instructions+=2;goto B52f270;
case 0x52f273:c.instructions+=1;goto B52f273;
case 0x52f275:goto L52f275;
case 0x52f278:c.instructions+=1;goto B52f278;
case 0x52f27a:goto L52f27a;
case 0x52f27d:c.instructions+=1;goto B52f27d;
case 0x52f27f:goto L52f27f;
case 0x52f282:c.instructions+=2;goto B52f282;
case 0x52f284:c.instructions+=1;goto B52f284;
case 0x52f287:goto L52f287;
case 0x52f28a:c.instructions+=5;goto B52f28a;
case 0x52f28d:c.instructions+=4;goto B52f28d;
case 0x52f290:c.instructions+=3;goto B52f290;
case 0x52f292:c.instructions+=2;goto B52f292;
case 0x52f295:c.instructions+=1;goto B52f295;
case 0x52f297:goto L52f297;
case 0x52f299:c.instructions+=1;goto B52f299;
case 0x52f29b:goto L52f29b;
case 0x52f29e:c.instructions+=3;goto B52f29e;
case 0x52f2a0:c.instructions+=2;goto B52f2a0;
case 0x52f2a3:c.instructions+=1;goto B52f2a3;
case 0x52f2a5:goto L52f2a5;
case 0x52f2a9:c.instructions+=5;goto B52f2a9;
case 0x52f2aa:c.instructions+=4;goto B52f2aa;
case 0x52f2ae:c.instructions+=3;goto B52f2ae;
case 0x52f2af:c.instructions+=2;goto B52f2af;
case 0x52f2b0:c.instructions+=1;goto B52f2b0;
case 0x52f2b5:goto L52f2b5;
case 0x52f2b9:c.instructions+=4;goto B52f2b9;
case 0x52f2bd:c.instructions+=3;goto B52f2bd;
case 0x52f2be:c.instructions+=2;goto B52f2be;
case 0x52f2bf:c.instructions+=1;goto B52f2bf;
case 0x52f2c1:goto L52f2c1;
case 0x52f2c5:c.instructions+=5;goto B52f2c5;
case 0x52f2c6:c.instructions+=4;goto B52f2c6;
case 0x52f2ca:c.instructions+=3;goto B52f2ca;
case 0x52f2cb:c.instructions+=2;goto B52f2cb;
case 0x52f2cc:c.instructions+=1;goto B52f2cc;
case 0x52f2d1:goto L52f2d1;
case 0x52f2d5:c.instructions+=3;goto B52f2d5;
case 0x52f2d9:c.instructions+=2;goto B52f2d9;
case 0x52f2da:c.instructions+=1;goto B52f2da;
case 0x52f2db:goto L52f2db;
case 0x52f2dc:c.instructions+=1;goto B52f2dc;
case 0x52f2e1:goto L52f2e1;
case 0x52f2e4:goto L52f2e4;
case 0x52f2e7:c.instructions+=2;goto B52f2e7;
case 0x52f2e9:c.instructions+=1;goto B52f2e9;
case 0x52f2ef:goto L52f2ef;
case 0x52f2f2:c.instructions+=4;goto B52f2f2;
case 0x52f2f6:c.instructions+=3;goto B52f2f6;
case 0x52f2f8:c.instructions+=2;goto B52f2f8;
case 0x52f2f9:c.instructions+=1;goto B52f2f9;
case 0x52f2fb:goto L52f2fb;
case 0x52f2fe:c.instructions+=6;goto B52f2fe;
case 0x52f301:c.instructions+=5;goto B52f301;
case 0x52f304:c.instructions+=4;goto B52f304;
case 0x52f307:c.instructions+=3;goto B52f307;
case 0x52f308:c.instructions+=2;goto B52f308;
case 0x52f309:c.instructions+=1;goto B52f309;
case 0x52f30b:goto L52f30b;
case 0x52f30e:c.instructions+=5;goto B52f30e;
case 0x52f311:c.instructions+=4;goto B52f311;
case 0x52f314:c.instructions+=3;goto B52f314;
case 0x52f317:c.instructions+=2;goto B52f317;
case 0x52f318:c.instructions+=1;goto B52f318;
case 0x52f319:goto L52f319;
case 0x52f31a:c.instructions+=1;goto B52f31a;
case 0x52f31f:goto L52f31f;
case 0x52f322:c.instructions+=8;goto B52f322;
case 0x52f324:c.instructions+=7;goto B52f324;
case 0x52f327:c.instructions+=6;goto B52f327;
case 0x52f32a:c.instructions+=5;goto B52f32a;
case 0x52f330:c.instructions+=4;goto B52f330;
case 0x52f332:c.instructions+=3;goto B52f332;
case 0x52f336:c.instructions+=2;goto B52f336;
case 0x52f33a:c.instructions+=1;goto B52f33a;
case 0x52f33c:goto L52f33c;
case 0x52f342:goto L52f342;
case 0x52f345:c.instructions+=2;goto B52f345;
case 0x52f347:c.instructions+=1;goto B52f347;
case 0x52f349:goto L52f349;
case 0x52f34b:c.instructions+=1;goto B52f34b;
case 0x52f351:goto L52f351;
case 0x52f353:c.instructions+=3;goto B52f353;
case 0x52f355:c.instructions+=2;goto B52f355;
case 0x52f357:c.instructions+=1;goto B52f357;
case 0x52f35c:goto L52f35c;
case 0x52f35e:c.instructions+=6;goto B52f35e;
case 0x52f361:c.instructions+=5;goto B52f361;
case 0x52f363:c.instructions+=4;goto B52f363;
case 0x52f364:c.instructions+=3;goto B52f364;
case 0x52f367:c.instructions+=2;goto B52f367;
case 0x52f368:c.instructions+=1;goto B52f368;
case 0x52f36d:goto L52f36d;
case 0x52f370:goto L52f370;
case 0x52f373:c.instructions+=2;goto B52f373;
case 0x52f375:c.instructions+=1;goto B52f375;
case 0x52f37b:goto L52f37b;
case 0x52f37e:c.instructions+=1;goto B52f37e;
case 0x52f383:goto L52f383;
case 0x52f384:c.instructions+=5;goto B52f384;
case 0x52f385:c.instructions+=4;goto B52f385;
case 0x52f386:c.instructions+=3;goto B52f386;
case 0x52f387:c.instructions+=2;goto B52f387;
case 0x52f38a:c.instructions+=1;goto B52f38a;
case 0x52f390:goto L52f390;
case 0x52f391:c.instructions+=6;goto B52f391;
case 0x52f393:c.instructions+=5;goto B52f393;
case 0x52f396:c.instructions+=4;goto B52f396;
case 0x52f397:c.instructions+=3;goto B52f397;
case 0x52f39a:c.instructions+=2;goto B52f39a;
case 0x52f39c:c.instructions+=1;goto B52f39c;
case 0x52f3a2:goto L52f3a2;
case 0x52f3a4:c.instructions+=2;goto B52f3a4;
case 0x52f3a5:c.instructions+=1;goto B52f3a5;
case 0x52f3a7:goto L52f3a7;
case 0x52f3aa:c.instructions+=1;goto B52f3aa;
case 0x52f3ac:goto L52f3ac;
case 0x52f3ae:c.instructions+=1;goto B52f3ae;
case 0x52f3b0:goto L52f3b0;
case 0x52f3b2:c.instructions+=1;goto B52f3b2;
case 0x52f3b4:goto L52f3b4;
case 0x52f3b7:c.instructions+=1;goto B52f3b7;
case 0x52f3b9:goto L52f3b9;
case 0x52f3bb:goto L52f3bb;
case 0x52f3bd:c.instructions+=1;goto B52f3bd;
case 0x52f3bf:goto L52f3bf;
case 0x52f3c2:c.instructions+=4;goto B52f3c2;
case 0x52f3c5:c.instructions+=3;goto B52f3c5;
case 0x52f3c7:c.instructions+=2;goto B52f3c7;
case 0x52f3ca:c.instructions+=1;goto B52f3ca;
case 0x52f3cc:goto L52f3cc;
case 0x52f3cf:c.instructions+=3;goto B52f3cf;
case 0x52f3d0:c.instructions+=2;goto B52f3d0;
case 0x52f3d3:c.instructions+=1;goto B52f3d3;
case 0x52f3d5:goto L52f3d5;
case 0x52f3d8:c.instructions+=1;goto B52f3d8;
case 0x52f3da:goto L52f3da;
case 0x52f3dd:c.instructions+=1;goto B52f3dd;
case 0x52f3df:goto L52f3df;
case 0x52f3e2:c.instructions+=2;goto B52f3e2;
case 0x52f3e4:c.instructions+=1;goto B52f3e4;
case 0x52f3e7:goto L52f3e7;
case 0x52f3ea:c.instructions+=5;goto B52f3ea;
case 0x52f3ed:c.instructions+=4;goto B52f3ed;
case 0x52f3f0:c.instructions+=3;goto B52f3f0;
case 0x52f3f6:c.instructions+=2;goto B52f3f6;
case 0x52f3f9:c.instructions+=1;goto B52f3f9;
case 0x52f3fb:goto L52f3fb;
case 0x52f3fd:c.instructions+=1;goto B52f3fd;
case 0x52f3ff:goto L52f3ff;
case 0x52f402:c.instructions+=4;goto B52f402;
case 0x52f405:c.instructions+=3;goto B52f405;
case 0x52f406:c.instructions+=2;goto B52f406;
case 0x52f407:c.instructions+=1;goto B52f407;
case 0x52f40c:goto L52f40c;
case 0x52f40f:c.instructions+=4;goto B52f40f;
case 0x52f414:c.instructions+=3;goto B52f414;
case 0x52f419:c.instructions+=2;goto B52f419;
case 0x52f41a:c.instructions+=1;goto B52f41a;
case 0x52f41f:goto L52f41f;
case 0x52f422:c.instructions+=3;goto B52f422;
case 0x52f425:c.instructions+=2;goto B52f425;
case 0x52f427:c.instructions+=1;goto B52f427;
case 0x52f429:goto L52f429;
case 0x52f42c:c.instructions+=1;goto B52f42c;
case 0x52f42e:goto L52f42e;
case 0x52f430:c.instructions+=3;goto B52f430;
case 0x52f432:c.instructions+=2;goto B52f432;
case 0x52f433:c.instructions+=1;goto B52f433;
case 0x52f435:goto L52f435;
case 0x52f437:c.instructions+=6;goto B52f437;
case 0x52f43a:c.instructions+=5;goto B52f43a;
case 0x52f43c:c.instructions+=4;goto B52f43c;
case 0x52f43f:c.instructions+=3;goto B52f43f;
case 0x52f442:c.instructions+=2;goto B52f442;
case 0x52f444:c.instructions+=1;goto B52f444;
case 0x52f446:goto L52f446;
case 0x52f448:c.instructions+=2;goto B52f448;
case 0x52f44a:c.instructions+=1;goto B52f44a;
case 0x52f44c:goto L52f44c;
case 0x52f44e:c.instructions+=2;goto B52f44e;
case 0x52f450:c.instructions+=1;goto B52f450;
case 0x52f452:goto L52f452;
case 0x52f459:goto L52f459;
case 0x52f45a:c.instructions+=2;goto B52f45a;
case 0x52f45b:c.instructions+=1;goto B52f45b;
case 0x52f460:goto L52f460;
case 0x52f464:c.instructions+=5;goto B52f464;
case 0x52f465:c.instructions+=4;goto B52f465;
case 0x52f467:c.instructions+=3;goto B52f467;
case 0x52f468:c.instructions+=2;goto B52f468;
case 0x52f46b:c.instructions+=1;goto B52f46b;
case 0x52f470:goto L52f470;
case 0x52f472:c.instructions+=1;goto B52f472;
case 0x52f478:goto L52f478;
case 0x52f47b:c.instructions+=2;goto B52f47b;
case 0x52f47d:c.instructions+=1;goto B52f47d;
case 0x52f483:goto L52f483;
case 0x52f486:c.instructions+=2;goto B52f486;
case 0x52f488:c.instructions+=1;goto B52f488;
case 0x52f48a:goto L52f48a;
case 0x52f48d:c.instructions+=2;goto B52f48d;
case 0x52f48f:c.instructions+=1;goto B52f48f;
case 0x52f491:goto L52f491;
case 0x52f494:c.instructions+=2;goto B52f494;
case 0x52f496:c.instructions+=1;goto B52f496;
case 0x52f498:goto L52f498;
case 0x52f49e:c.instructions+=11;goto B52f49e;
case 0x52f4a5:c.instructions+=10;goto B52f4a5;
case 0x52f4a8:c.instructions+=9;goto B52f4a8;
case 0x52f4ae:c.instructions+=8;goto B52f4ae;
case 0x52f4b2:c.instructions+=7;goto B52f4b2;
case 0x52f4b8:c.instructions+=6;goto B52f4b8;
case 0x52f4bb:c.instructions+=5;goto B52f4bb;
case 0x52f4be:c.instructions+=4;goto B52f4be;
case 0x52f4c1:c.instructions+=3;goto B52f4c1;
case 0x52f4c7:c.instructions+=2;goto B52f4c7;
case 0x52f4c9:c.instructions+=1;goto B52f4c9;
case 0x52f4cb:goto L52f4cb;
case 0x52f4cd:c.instructions+=1;goto B52f4cd;
case 0x52f4cf:goto L52f4cf;
case 0x52f4d2:c.instructions+=4;goto B52f4d2;
case 0x52f4d5:c.instructions+=3;goto B52f4d5;
case 0x52f4d6:c.instructions+=2;goto B52f4d6;
case 0x52f4d7:c.instructions+=1;goto B52f4d7;
case 0x52f4dc:goto L52f4dc;
case 0x52f4df:c.instructions+=11;goto B52f4df;
case 0x52f4e4:c.instructions+=10;goto B52f4e4;
case 0x52f4ea:c.instructions+=9;goto B52f4ea;
case 0x52f4ed:c.instructions+=8;goto B52f4ed;
case 0x52f4f0:c.instructions+=7;goto B52f4f0;
case 0x52f4f6:c.instructions+=6;goto B52f4f6;
case 0x52f4fa:c.instructions+=5;goto B52f4fa;
case 0x52f4fc:c.instructions+=4;goto B52f4fc;
case 0x52f502:c.instructions+=3;goto B52f502;
case 0x52f505:c.instructions+=2;goto B52f505;
case 0x52f506:c.instructions+=1;goto B52f506;
case 0x52f509:goto L52f509;
case 0x52f50b:c.instructions+=2;goto B52f50b;
case 0x52f50c:c.instructions+=1;goto B52f50c;
case 0x52f510:goto L52f510;
case 0x52f511:c.instructions+=5;goto B52f511;
case 0x52f513:c.instructions+=4;goto B52f513;
case 0x52f517:c.instructions+=3;goto B52f517;
case 0x52f51a:c.instructions+=2;goto B52f51a;
case 0x52f51c:c.instructions+=1;goto B52f51c;
case 0x52f51e:goto L52f51e;
case 0x52f521:c.instructions+=2;goto B52f521;
case 0x52f523:c.instructions+=1;goto B52f523;
case 0x52f525:goto L52f525;
case 0x52f527:c.instructions+=2;goto B52f527;
case 0x52f528:c.instructions+=1;goto B52f528;
case 0x52f52b:goto L52f52b;
case 0x52f52e:c.instructions+=12;goto B52f52e;
case 0x52f534:c.instructions+=11;goto B52f534;
case 0x52f53b:c.instructions+=10;goto B52f53b;
case 0x52f53e:c.instructions+=9;goto B52f53e;
case 0x52f544:c.instructions+=8;goto B52f544;
case 0x52f548:c.instructions+=7;goto B52f548;
case 0x52f54e:c.instructions+=6;goto B52f54e;
case 0x52f551:c.instructions+=5;goto B52f551;
case 0x52f554:c.instructions+=4;goto B52f554;
case 0x52f557:c.instructions+=3;goto B52f557;
case 0x52f55d:c.instructions+=2;goto B52f55d;
case 0x52f55f:c.instructions+=1;goto B52f55f;
case 0x52f561:goto L52f561;
case 0x52f563:c.instructions+=1;goto B52f563;
case 0x52f565:goto L52f565;
case 0x52f568:c.instructions+=4;goto B52f568;
case 0x52f56b:c.instructions+=3;goto B52f56b;
case 0x52f56c:c.instructions+=2;goto B52f56c;
case 0x52f56d:c.instructions+=1;goto B52f56d;
case 0x52f572:goto L52f572;
case 0x52f575:c.instructions+=11;goto B52f575;
case 0x52f57a:c.instructions+=10;goto B52f57a;
case 0x52f580:c.instructions+=9;goto B52f580;
case 0x52f583:c.instructions+=8;goto B52f583;
case 0x52f586:c.instructions+=7;goto B52f586;
case 0x52f58c:c.instructions+=6;goto B52f58c;
case 0x52f590:c.instructions+=5;goto B52f590;
case 0x52f592:c.instructions+=4;goto B52f592;
case 0x52f598:c.instructions+=3;goto B52f598;
case 0x52f59b:c.instructions+=2;goto B52f59b;
case 0x52f59c:c.instructions+=1;goto B52f59c;
case 0x52f5a0:goto L52f5a0;
case 0x52f5a3:c.instructions+=8;goto B52f5a3;
case 0x52f5a4:c.instructions+=7;goto B52f5a4;
case 0x52f5a5:c.instructions+=6;goto B52f5a5;
case 0x52f5a7:c.instructions+=5;goto B52f5a7;
case 0x52f5aa:c.instructions+=4;goto B52f5aa;
case 0x52f5ac:c.instructions+=3;goto B52f5ac;
case 0x52f5ad:c.instructions+=2;goto B52f5ad;
case 0x52f5b0:c.instructions+=1;goto B52f5b0;
case 0x52f5b2:goto L52f5b2;
case 0x52f5b5:c.instructions+=1;goto B52f5b5;
case 0x52f5b7:goto L52f5b7;
case 0x52f5b9:c.instructions+=1;goto B52f5b9;
case 0x52f5c0:goto L52f5c0;
case 0x52f5c2:c.instructions+=1;goto B52f5c2;
case 0x52f5c4:goto L52f5c4;
case 0x52f5c7:c.instructions+=1;goto B52f5c7;
case 0x52f5c9:goto L52f5c9;
case 0x52f5cb:goto L52f5cb;
case 0x52f5cd:c.instructions+=1;goto B52f5cd;
case 0x52f5d3:goto L52f5d3;
case 0x52f5d9:c.instructions+=8;goto B52f5d9;
case 0x52f5dc:c.instructions+=7;goto B52f5dc;
case 0x52f5de:c.instructions+=6;goto B52f5de;
case 0x52f5e4:c.instructions+=5;goto B52f5e4;
case 0x52f5e8:c.instructions+=4;goto B52f5e8;
case 0x52f5ee:c.instructions+=3;goto B52f5ee;
case 0x52f5f4:c.instructions+=2;goto B52f5f4;
case 0x52f5f8:c.instructions+=1;goto B52f5f8;
case 0x52f5fa:goto L52f5fa;
case 0x52f5fe:c.instructions+=3;goto B52f5fe;
case 0x52f5ff:c.instructions+=2;goto B52f5ff;
case 0x52f600:c.instructions+=1;goto B52f600;
case 0x52f605:goto L52f605;
case 0x52f608:c.instructions+=2;goto B52f608;
case 0x52f60a:c.instructions+=1;goto B52f60a;
case 0x52f60c:goto L52f60c;
case 0x52f610:c.instructions+=4;goto B52f610;
case 0x52f614:c.instructions+=3;goto B52f614;
case 0x52f616:c.instructions+=2;goto B52f616;
case 0x52f619:c.instructions+=1;goto B52f619;
case 0x52f61b:goto L52f61b;
case 0x52f61f:c.instructions+=4;goto B52f61f;
case 0x52f623:c.instructions+=3;goto B52f623;
case 0x52f625:c.instructions+=2;goto B52f625;
case 0x52f628:c.instructions+=1;goto B52f628;
case 0x52f62a:goto L52f62a;
case 0x52f62e:c.instructions+=4;goto B52f62e;
case 0x52f632:c.instructions+=3;goto B52f632;
case 0x52f634:c.instructions+=2;goto B52f634;
case 0x52f637:c.instructions+=1;goto B52f637;
case 0x52f639:goto L52f639;
case 0x52f63d:c.instructions+=4;goto B52f63d;
case 0x52f641:c.instructions+=3;goto B52f641;
case 0x52f643:c.instructions+=2;goto B52f643;
case 0x52f646:c.instructions+=1;goto B52f646;
case 0x52f648:goto L52f648;
case 0x52f64b:c.instructions+=2;goto B52f64b;
case 0x52f64d:c.instructions+=1;goto B52f64d;
case 0x52f653:goto L52f653;
case 0x52f656:c.instructions+=1;goto B52f656;
case 0x52f65b:goto L52f65b;
case 0x52f65e:c.instructions+=1;goto B52f65e;
case 0x52f660:goto L52f660;
case 0x52f662:c.instructions+=3;goto B52f662;
case 0x52f663:c.instructions+=2;goto B52f663;
case 0x52f665:c.instructions+=1;goto B52f665;
case 0x52f668:goto L52f668;
case 0x52f669:c.instructions+=6;goto B52f669;
case 0x52f66b:c.instructions+=5;goto B52f66b;
case 0x52f66c:c.instructions+=4;goto B52f66c;
case 0x52f66f:c.instructions+=3;goto B52f66f;
case 0x52f670:c.instructions+=2;goto B52f670;
case 0x52f673:c.instructions+=1;goto B52f673;
case 0x52f674:goto L52f674;
case 0x52f675:c.instructions+=5;goto B52f675;
case 0x52f676:c.instructions+=4;goto B52f676;
case 0x52f678:c.instructions+=3;goto B52f678;
case 0x52f679:c.instructions+=2;goto B52f679;
case 0x52f67c:c.instructions+=1;goto B52f67c;
case 0x52f680:goto L52f680;
case 0x52f681:c.instructions+=5;goto B52f681;
case 0x52f682:c.instructions+=4;goto B52f682;
case 0x52f683:c.instructions+=3;goto B52f683;
case 0x52f685:c.instructions+=2;goto B52f685;
case 0x52f688:c.instructions+=1;goto B52f688;
case 0x52f689:goto L52f689;
case 0x52f68b:c.instructions+=1;goto B52f68b;
case 0x52f68d:goto L52f68d;
case 0x52f690:c.instructions+=1;goto B52f690;
case 0x52f692:goto L52f692;
case 0x52f694:goto L52f694;
case 0x52f697:c.instructions+=2;goto B52f697;
case 0x52f699:c.instructions+=1;goto B52f699;
case 0x52f69b:goto L52f69b;
case 0x52f69e:c.instructions+=1;goto B52f69e;
case 0x52f6a0:goto L52f6a0;
case 0x52f6a2:goto L52f6a2;
case 0x52f6a4:c.instructions+=1;goto B52f6a4;
case 0x52f6a6:goto L52f6a6;
case 0x52f6a9:c.instructions+=5;goto B52f6a9;
case 0x52f6af:c.instructions+=4;goto B52f6af;
case 0x52f6b1:c.instructions+=3;goto B52f6b1;
case 0x52f6b4:c.instructions+=2;goto B52f6b4;
case 0x52f6b7:c.instructions+=1;goto B52f6b7;
case 0x52f6b9:goto L52f6b9;
case 0x52f6ba:c.instructions+=2;goto B52f6ba;
case 0x52f6bf:c.instructions+=1;goto B52f6bf;
case 0x52f6c4:goto L52f6c4;
case 0x52f6c6:c.instructions+=1;goto B52f6c6;
case 0x52f6c8:goto L52f6c8;
case 0x52f6cb:c.instructions+=2;goto B52f6cb;
case 0x52f6cd:c.instructions+=1;goto B52f6cd;
case 0x52f6cf:goto L52f6cf;
case 0x52f6d5:c.instructions+=3;goto B52f6d5;
case 0x52f6d7:c.instructions+=2;goto B52f6d7;
case 0x52f6d9:c.instructions+=1;goto B52f6d9;
case 0x52f6db:goto L52f6db;
case 0x52f6e1:goto L52f6e1;
case 0x52f6e3:c.instructions+=2;goto B52f6e3;
case 0x52f6e6:c.instructions+=1;goto B52f6e6;
case 0x52f6e8:goto L52f6e8;
case 0x52f6ea:goto L52f6ea;
case 0x52f6ed:c.instructions+=2;goto B52f6ed;
case 0x52f6ee:c.instructions+=1;goto B52f6ee;
case 0x52f6f0:goto L52f6f0;
case 0x52f6f2:c.instructions+=1;goto B52f6f2;
case 0x52f6f4:goto L52f6f4;
case 0x52f6fb:goto L52f6fb;
case 0x52f6fe:c.instructions+=1;goto B52f6fe;
case 0x52f700:goto L52f700;
case 0x52f704:c.instructions+=3;goto B52f704;
case 0x52f707:c.instructions+=2;goto B52f707;
case 0x52f709:c.instructions+=1;goto B52f709;
case 0x52f70b:goto L52f70b;
case 0x52f70e:c.instructions+=2;goto B52f70e;
case 0x52f710:c.instructions+=1;goto B52f710;
case 0x52f712:goto L52f712;
case 0x52f713:c.instructions+=5;goto B52f713;
case 0x52f714:c.instructions+=4;goto B52f714;
case 0x52f715:c.instructions+=3;goto B52f715;
case 0x52f717:c.instructions+=2;goto B52f717;
case 0x52f718:c.instructions+=1;goto B52f718;
case 0x52f71b:goto L52f71b;
case 0x52f71e:c.instructions+=6;goto B52f71e;
case 0x52f721:c.instructions+=5;goto B52f721;
case 0x52f724:c.instructions+=4;goto B52f724;
case 0x52f727:c.instructions+=3;goto B52f727;
case 0x52f72d:c.instructions+=2;goto B52f72d;
case 0x52f72f:c.instructions+=1;goto B52f72f;
case 0x52f731:goto L52f731;
case 0x52f732:c.instructions+=2;goto B52f732;
case 0x52f737:c.instructions+=1;goto B52f737;
case 0x52f73c:goto L52f73c;
case 0x52f73e:c.instructions+=1;goto B52f73e;
case 0x52f740:goto L52f740;
case 0x52f743:c.instructions+=2;goto B52f743;
case 0x52f745:c.instructions+=1;goto B52f745;
case 0x52f747:goto L52f747;
case 0x52f74d:c.instructions+=3;goto B52f74d;
case 0x52f74f:c.instructions+=2;goto B52f74f;
case 0x52f751:c.instructions+=1;goto B52f751;
case 0x52f753:goto L52f753;
case 0x52f759:c.instructions+=1;goto B52f759;
case 0x52f760:goto L52f760;
case 0x52f762:c.instructions+=2;goto B52f762;
case 0x52f765:c.instructions+=1;goto B52f765;
case 0x52f767:goto L52f767;
case 0x52f769:goto L52f769;
case 0x52f76c:c.instructions+=2;goto B52f76c;
case 0x52f76d:c.instructions+=1;goto B52f76d;
case 0x52f76f:goto L52f76f;
case 0x52f771:c.instructions+=1;goto B52f771;
case 0x52f773:goto L52f773;
case 0x52f77a:goto L52f77a;
case 0x52f780:c.instructions+=4;goto B52f780;
case 0x52f782:c.instructions+=3;goto B52f782;
case 0x52f785:c.instructions+=2;goto B52f785;
case 0x52f788:c.instructions+=1;goto B52f788;
case 0x52f78a:goto L52f78a;
case 0x52f78c:c.instructions+=1;goto B52f78c;
case 0x52f78e:goto L52f78e;
case 0x52f791:c.instructions+=4;goto B52f791;
case 0x52f794:c.instructions+=3;goto B52f794;
case 0x52f795:c.instructions+=2;goto B52f795;
case 0x52f796:c.instructions+=1;goto B52f796;
case 0x52f79b:goto L52f79b;
case 0x52f79c:c.instructions+=2;goto B52f79c;
case 0x52f79e:c.instructions+=1;goto B52f79e;
case 0x52f7a3:goto L52f7a3;
case 0x52f7a4:c.instructions+=6;goto B52f7a4;
case 0x52f7a5:c.instructions+=5;goto B52f7a5;
case 0x52f7ab:c.instructions+=4;goto B52f7ab;
case 0x52f7ac:c.instructions+=3;goto B52f7ac;
case 0x52f7ae:c.instructions+=2;goto B52f7ae;
case 0x52f7af:c.instructions+=1;goto B52f7af;
case 0x52f7c0:goto L52f7c0;
case 0x52f7c1:c.instructions+=5;goto B52f7c1;
case 0x52f7c2:c.instructions+=4;goto B52f7c2;
case 0x52f7c3:c.instructions+=3;goto B52f7c3;
case 0x52f7c5:c.instructions+=2;goto B52f7c5;
case 0x52f7c8:c.instructions+=1;goto B52f7c8;
case 0x52f7c9:goto L52f7c9;
case 0x52f7cb:c.instructions+=1;goto B52f7cb;
case 0x52f7cd:goto L52f7cd;
case 0x52f7d0:c.instructions+=1;goto B52f7d0;
case 0x52f7d2:goto L52f7d2;
case 0x52f7d4:goto L52f7d4;
case 0x52f7d7:c.instructions+=2;goto B52f7d7;
case 0x52f7d9:c.instructions+=1;goto B52f7d9;
case 0x52f7db:goto L52f7db;
case 0x52f7de:c.instructions+=1;goto B52f7de;
case 0x52f7e0:goto L52f7e0;
case 0x52f7e2:goto L52f7e2;
case 0x52f7e4:c.instructions+=1;goto B52f7e4;
case 0x52f7e6:goto L52f7e6;
case 0x52f7e9:c.instructions+=5;goto B52f7e9;
case 0x52f7ef:c.instructions+=4;goto B52f7ef;
case 0x52f7f1:c.instructions+=3;goto B52f7f1;
case 0x52f7f4:c.instructions+=2;goto B52f7f4;
case 0x52f7f7:c.instructions+=1;goto B52f7f7;
case 0x52f7f9:goto L52f7f9;
case 0x52f7fa:c.instructions+=2;goto B52f7fa;
case 0x52f7ff:c.instructions+=1;goto B52f7ff;
case 0x52f804:goto L52f804;
case 0x52f806:c.instructions+=1;goto B52f806;
case 0x52f808:goto L52f808;
case 0x52f80b:c.instructions+=2;goto B52f80b;
case 0x52f80d:c.instructions+=1;goto B52f80d;
case 0x52f80f:goto L52f80f;
case 0x52f815:c.instructions+=3;goto B52f815;
case 0x52f817:c.instructions+=2;goto B52f817;
case 0x52f819:c.instructions+=1;goto B52f819;
case 0x52f81b:goto L52f81b;
case 0x52f821:goto L52f821;
case 0x52f823:c.instructions+=2;goto B52f823;
case 0x52f826:c.instructions+=1;goto B52f826;
case 0x52f828:goto L52f828;
case 0x52f82a:goto L52f82a;
case 0x52f82d:c.instructions+=2;goto B52f82d;
case 0x52f82e:c.instructions+=1;goto B52f82e;
case 0x52f830:goto L52f830;
case 0x52f832:c.instructions+=1;goto B52f832;
case 0x52f834:goto L52f834;
case 0x52f83b:goto L52f83b;
case 0x52f83e:c.instructions+=1;goto B52f83e;
case 0x52f840:goto L52f840;
case 0x52f844:c.instructions+=2;goto B52f844;
case 0x52f845:c.instructions+=1;goto B52f845;
case 0x52f84a:goto L52f84a;
case 0x52f84c:c.instructions+=1;goto B52f84c;
case 0x52f84e:goto L52f84e;
case 0x52f851:c.instructions+=2;goto B52f851;
case 0x52f853:c.instructions+=1;goto B52f853;
case 0x52f855:goto L52f855;
case 0x52f858:c.instructions+=1;goto B52f858;
case 0x52f85a:goto L52f85a;
case 0x52f85d:c.instructions+=2;goto B52f85d;
case 0x52f85f:c.instructions+=1;goto B52f85f;
case 0x52f861:goto L52f861;
case 0x52f864:c.instructions+=2;goto B52f864;
case 0x52f866:c.instructions+=1;goto B52f866;
case 0x52f868:goto L52f868;
case 0x52f86b:c.instructions+=3;goto B52f86b;
case 0x52f871:c.instructions+=2;goto B52f871;
case 0x52f873:c.instructions+=1;goto B52f873;
case 0x52f875:goto L52f875;
case 0x52f878:c.instructions+=6;goto B52f878;
case 0x52f87b:c.instructions+=5;goto B52f87b;
case 0x52f87e:c.instructions+=4;goto B52f87e;
case 0x52f880:c.instructions+=3;goto B52f880;
case 0x52f881:c.instructions+=2;goto B52f881;
case 0x52f882:c.instructions+=1;goto B52f882;
case 0x52f887:goto L52f887;
case 0x52f88d:goto L52f88d;
case 0x52f88f:c.instructions+=3;goto B52f88f;
case 0x52f892:c.instructions+=2;goto B52f892;
case 0x52f895:c.instructions+=1;goto B52f895;
case 0x52f897:goto L52f897;
case 0x52f899:c.instructions+=1;goto B52f899;
case 0x52f89b:goto L52f89b;
case 0x52f89e:c.instructions+=4;goto B52f89e;
case 0x52f8a1:c.instructions+=3;goto B52f8a1;
case 0x52f8a2:c.instructions+=2;goto B52f8a2;
case 0x52f8a3:c.instructions+=1;goto B52f8a3;
case 0x52f8a8:goto L52f8a8;
case 0x52f8a9:c.instructions+=6;goto B52f8a9;
case 0x52f8af:c.instructions+=5;goto B52f8af;
case 0x52f8b0:c.instructions+=4;goto B52f8b0;
case 0x52f8b1:c.instructions+=3;goto B52f8b1;
case 0x52f8b3:c.instructions+=2;goto B52f8b3;
case 0x52f8b4:c.instructions+=1;goto B52f8b4;
case 0x52f8b7:goto L52f8b7;
case 0x52f8b8:c.instructions+=5;goto B52f8b8;
case 0x52f8b9:c.instructions+=4;goto B52f8b9;
case 0x52f8ba:c.instructions+=3;goto B52f8ba;
case 0x52f8bc:c.instructions+=2;goto B52f8bc;
case 0x52f8bd:c.instructions+=1;goto B52f8bd;
case 0x52f8c0:goto L52f8c0;
case 0x52f8c3:c.instructions+=6;goto B52f8c3;
case 0x52f8c4:c.instructions+=5;goto B52f8c4;
case 0x52f8c8:c.instructions+=4;goto B52f8c8;
case 0x52f8ca:c.instructions+=3;goto B52f8ca;
case 0x52f8cb:c.instructions+=2;goto B52f8cb;
case 0x52f8cd:c.instructions+=1;goto B52f8cd;
case 0x52f8d3:goto L52f8d3;
case 0x52f8d9:c.instructions+=8;goto B52f8d9;
case 0x52f8da:c.instructions+=7;goto B52f8da;
case 0x52f8dd:c.instructions+=6;goto B52f8dd;
case 0x52f8e3:c.instructions+=5;goto B52f8e3;
case 0x52f8e7:c.instructions+=4;goto B52f8e7;
case 0x52f8eb:c.instructions+=3;goto B52f8eb;
case 0x52f8ec:c.instructions+=2;goto B52f8ec;
case 0x52f8ed:c.instructions+=1;goto B52f8ed;
case 0x52f8f2:goto L52f8f2;
case 0x52f8f5:c.instructions+=4;goto B52f8f5;
case 0x52f8f8:c.instructions+=3;goto B52f8f8;
case 0x52f8fb:c.instructions+=2;goto B52f8fb;
case 0x52f8fd:c.instructions+=1;goto B52f8fd;
case 0x52f8ff:goto L52f8ff;
case 0x52f902:c.instructions+=3;goto B52f902;
case 0x52f903:c.instructions+=2;goto B52f903;
case 0x52f906:c.instructions+=1;goto B52f906;
case 0x52f908:goto L52f908;
case 0x52f90b:c.instructions+=1;goto B52f90b;
case 0x52f90d:goto L52f90d;
case 0x52f910:c.instructions+=1;goto B52f910;
case 0x52f912:goto L52f912;
case 0x52f915:c.instructions+=2;goto B52f915;
case 0x52f917:c.instructions+=1;goto B52f917;
case 0x52f91a:goto L52f91a;
case 0x52f91d:c.instructions+=5;goto B52f91d;
case 0x52f920:c.instructions+=4;goto B52f920;
case 0x52f923:c.instructions+=3;goto B52f923;
case 0x52f929:c.instructions+=2;goto B52f929;
case 0x52f92c:c.instructions+=1;goto B52f92c;
case 0x52f92e:goto L52f92e;
case 0x52f930:c.instructions+=1;goto B52f930;
case 0x52f932:goto L52f932;
case 0x52f938:c.instructions+=5;goto B52f938;
case 0x52f93b:c.instructions+=4;goto B52f93b;
case 0x52f93c:c.instructions+=3;goto B52f93c;
case 0x52f93d:c.instructions+=2;goto B52f93d;
case 0x52f93e:c.instructions+=1;goto B52f93e;
case 0x52f943:goto L52f943;
case 0x52f949:c.instructions+=4;goto B52f949;
case 0x52f94c:c.instructions+=3;goto B52f94c;
case 0x52f94f:c.instructions+=2;goto B52f94f;
case 0x52f957:c.instructions+=1;goto B52f957;
case 0x52f959:goto L52f959;
case 0x52f95a:c.instructions+=1;goto B52f95a;
case 0x52f95c:goto L52f95c;
case 0x52f95d:c.instructions+=1;goto B52f95d;
case 0x52f95f:goto L52f95f;
case 0x52f962:c.instructions+=6;goto B52f962;
case 0x52f966:c.instructions+=5;goto B52f966;
case 0x52f967:c.instructions+=4;goto B52f967;
case 0x52f96b:c.instructions+=3;goto B52f96b;
case 0x52f96c:c.instructions+=2;goto B52f96c;
case 0x52f96d:c.instructions+=1;goto B52f96d;
case 0x52f972:goto L52f972;
case 0x52f975:c.instructions+=5;goto B52f975;
case 0x52f97b:c.instructions+=4;goto B52f97b;
case 0x52f97e:c.instructions+=3;goto B52f97e;
case 0x52f982:c.instructions+=2;goto B52f982;
case 0x52f986:c.instructions+=1;goto B52f986;
case 0x52f988:goto L52f988;
case 0x52f98b:c.instructions+=6;goto B52f98b;
case 0x52f98f:c.instructions+=5;goto B52f98f;
case 0x52f990:c.instructions+=4;goto B52f990;
case 0x52f994:c.instructions+=3;goto B52f994;
case 0x52f995:c.instructions+=2;goto B52f995;
case 0x52f996:c.instructions+=1;goto B52f996;
case 0x52f99b:goto L52f99b;
case 0x52f99e:c.instructions+=6;goto B52f99e;
case 0x52f9a4:c.instructions+=5;goto B52f9a4;
case 0x52f9a7:c.instructions+=4;goto B52f9a7;
case 0x52f9ad:c.instructions+=3;goto B52f9ad;
case 0x52f9b1:c.instructions+=2;goto B52f9b1;
case 0x52f9b5:c.instructions+=1;goto B52f9b5;
case 0x52f9b7:goto L52f9b7;
case 0x52f9ba:c.instructions+=6;goto B52f9ba;
case 0x52f9be:c.instructions+=5;goto B52f9be;
case 0x52f9bf:c.instructions+=4;goto B52f9bf;
case 0x52f9c3:c.instructions+=3;goto B52f9c3;
case 0x52f9c4:c.instructions+=2;goto B52f9c4;
case 0x52f9c5:c.instructions+=1;goto B52f9c5;
case 0x52f9ca:goto L52f9ca;
case 0x52f9ce:c.instructions+=1;goto B52f9ce;
case 0x52f9d2:goto L52f9d2;
case 0x52f9d5:goto L52f9d5;
case 0x52f9d8:c.instructions+=1;goto B52f9d8;
case 0x52f9da:goto L52f9da;
case 0x52f9dd:c.instructions+=10;goto B52f9dd;
case 0x52f9e0:c.instructions+=9;goto B52f9e0;
case 0x52f9e6:c.instructions+=8;goto B52f9e6;
case 0x52f9e7:c.instructions+=7;goto B52f9e7;
case 0x52f9ea:c.instructions+=6;goto B52f9ea;
case 0x52f9ee:c.instructions+=5;goto B52f9ee;
case 0x52f9f1:c.instructions+=4;goto B52f9f1;
case 0x52f9f7:c.instructions+=3;goto B52f9f7;
case 0x52f9fa:c.instructions+=2;goto B52f9fa;
case 0x52f9fb:c.instructions+=1;goto B52f9fb;
case 0x52fa00:goto L52fa00;
case 0x52fa03:c.instructions+=6;goto B52fa03;
case 0x52fa07:c.instructions+=5;goto B52fa07;
case 0x52fa08:c.instructions+=4;goto B52fa08;
case 0x52fa0c:c.instructions+=3;goto B52fa0c;
case 0x52fa0d:c.instructions+=2;goto B52fa0d;
case 0x52fa0e:c.instructions+=1;goto B52fa0e;
case 0x52fa13:goto L52fa13;
case 0x52fa17:c.instructions+=5;goto B52fa17;
case 0x52fa1b:c.instructions+=4;goto B52fa1b;
case 0x52fa1c:c.instructions+=3;goto B52fa1c;
case 0x52fa1d:c.instructions+=2;goto B52fa1d;
case 0x52fa1e:c.instructions+=1;goto B52fa1e;
case 0x52fa23:goto L52fa23;
case 0x52fa26:c.instructions+=1;goto B52fa26;
case 0x52fa27:goto L52fa27;
case 0x52fa2d:c.instructions+=2;goto B52fa2d;
case 0x52fa2f:c.instructions+=1;goto B52fa2f;
case 0x52fa31:goto L52fa31;
case 0x52fa34:c.instructions+=9;goto B52fa34;
case 0x52fa3a:c.instructions+=8;goto B52fa3a;
case 0x52fa40:c.instructions+=7;goto B52fa40;
case 0x52fa46:c.instructions+=6;goto B52fa46;
case 0x52fa47:c.instructions+=5;goto B52fa47;
case 0x52fa4a:c.instructions+=4;goto B52fa4a;
case 0x52fa4b:c.instructions+=3;goto B52fa4b;
case 0x52fa4c:c.instructions+=2;goto B52fa4c;
case 0x52fa4d:c.instructions+=1;goto B52fa4d;
case 0x52fa52:goto L52fa52;
case 0x52fa55:c.instructions+=4;goto B52fa55;
case 0x52fa58:c.instructions+=3;goto B52fa58;
case 0x52fa59:c.instructions+=2;goto B52fa59;
case 0x52fa5b:c.instructions+=1;goto B52fa5b;
case 0x52fa60:goto L52fa60;
case 0x52fa61:goto L52fa61;
case 0x52fa62:c.instructions+=3;goto B52fa62;
case 0x52fa63:c.instructions+=2;goto B52fa63;
case 0x52fa66:c.instructions+=1;goto B52fa66;
case 0x52fa70:goto L52fa70;
case 0x52fa74:c.instructions+=5;goto B52fa74;
case 0x52fa77:c.instructions+=4;goto B52fa77;
case 0x52fa78:c.instructions+=3;goto B52fa78;
case 0x52fa79:c.instructions+=2;goto B52fa79;
case 0x52fa7b:c.instructions+=1;goto B52fa7b;
case 0x52fa7d:goto L52fa7d;
case 0x52fa80:c.instructions+=1;goto B52fa80;
case 0x52fa82:goto L52fa82;
case 0x52fa85:c.instructions+=1;goto B52fa85;
case 0x52fa87:goto L52fa87;
case 0x52fa8a:c.instructions+=1;goto B52fa8a;
case 0x52fa90:goto L52fa90;
case 0x52fa93:c.instructions+=2;goto B52fa93;
case 0x52fa95:c.instructions+=1;goto B52fa95;
case 0x52fa9a:goto L52fa9a;
case 0x52fa9c:c.instructions+=1;goto B52fa9c;
case 0x52faa1:goto L52faa1;
case 0x52faa6:goto L52faa6;
case 0x52faac:c.instructions+=2;goto B52faac;
case 0x52faae:c.instructions+=1;goto B52faae;
case 0x52fab0:goto L52fab0;
case 0x52fab5:c.instructions+=1;goto B52fab5;
case 0x52faba:goto L52faba;
case 0x52fabd:c.instructions+=2;goto B52fabd;
case 0x52fabf:c.instructions+=1;goto B52fabf;
case 0x52fac1:goto L52fac1;
case 0x52fac4:c.instructions+=2;goto B52fac4;
case 0x52fac6:c.instructions+=1;goto B52fac6;
case 0x52fac8:goto L52fac8;
case 0x52facb:c.instructions+=1;goto B52facb;
case 0x52facd:goto L52facd;
case 0x52fad0:c.instructions+=2;goto B52fad0;
case 0x52fad3:c.instructions+=1;goto B52fad3;
case 0x52fad5:goto L52fad5;
case 0x52fadb:c.instructions+=4;goto B52fadb;
case 0x52fadd:c.instructions+=3;goto B52fadd;
case 0x52fae2:c.instructions+=2;goto B52fae2;
case 0x52fae3:c.instructions+=1;goto B52fae3;
case 0x52fae8:goto L52fae8;
case 0x52faeb:goto L52faeb;
case 0x52faf1:c.instructions+=2;goto B52faf1;
case 0x52faf3:c.instructions+=1;goto B52faf3;
case 0x52faf5:goto L52faf5;
case 0x52fafa:c.instructions+=1;goto B52fafa;
case 0x52faff:goto L52faff;
case 0x52fb02:c.instructions+=2;goto B52fb02;
case 0x52fb04:c.instructions+=1;goto B52fb04;
case 0x52fb06:goto L52fb06;
case 0x52fb09:c.instructions+=2;goto B52fb09;
case 0x52fb0b:c.instructions+=1;goto B52fb0b;
case 0x52fb0d:goto L52fb0d;
case 0x52fb10:c.instructions+=1;goto B52fb10;
case 0x52fb12:goto L52fb12;
case 0x52fb15:c.instructions+=2;goto B52fb15;
case 0x52fb18:c.instructions+=1;goto B52fb18;
case 0x52fb1a:goto L52fb1a;
case 0x52fb20:c.instructions+=4;goto B52fb20;
case 0x52fb22:c.instructions+=3;goto B52fb22;
case 0x52fb27:c.instructions+=2;goto B52fb27;
case 0x52fb28:c.instructions+=1;goto B52fb28;
case 0x52fb2d:goto L52fb2d;
case 0x52fb30:goto L52fb30;
case 0x52fb33:c.instructions+=2;goto B52fb33;
case 0x52fb35:c.instructions+=1;goto B52fb35;
case 0x52fb37:goto L52fb37;
case 0x52fb3a:c.instructions+=1;goto B52fb3a;
case 0x52fb3c:goto L52fb3c;
case 0x52fb3e:goto L52fb3e;
case 0x52fb41:c.instructions+=2;goto B52fb41;
case 0x52fb43:c.instructions+=1;goto B52fb43;
case 0x52fb45:goto L52fb45;
case 0x52fb4b:c.instructions+=2;goto B52fb4b;
case 0x52fb4c:c.instructions+=1;goto B52fb4c;
case 0x52fb51:goto L52fb51;
case 0x52fb54:c.instructions+=3;goto B52fb54;
case 0x52fb55:c.instructions+=2;goto B52fb55;
case 0x52fb56:c.instructions+=1;goto B52fb56;
case 0x52fb59:goto L52fb59;
case 0x52fb5c:c.instructions+=2;goto B52fb5c;
case 0x52fb5e:c.instructions+=1;goto B52fb5e;
case 0x52fb60:goto L52fb60;
case 0x52fb63:c.instructions+=1;goto B52fb63;
case 0x52fb65:goto L52fb65;
case 0x52fb67:goto L52fb67;
case 0x52fb69:c.instructions+=1;goto B52fb69;
case 0x52fb6b:goto L52fb6b;
case 0x52fb71:c.instructions+=2;goto B52fb71;
case 0x52fb72:c.instructions+=1;goto B52fb72;
case 0x52fb77:goto L52fb77;
case 0x52fb7a:c.instructions+=3;goto B52fb7a;
case 0x52fb7b:c.instructions+=2;goto B52fb7b;
case 0x52fb7c:c.instructions+=1;goto B52fb7c;
case 0x52fb7f:goto L52fb7f;
case 0x52fb85:c.instructions+=2;goto B52fb85;
case 0x52fb86:c.instructions+=1;goto B52fb86;
case 0x52fb8b:goto L52fb8b;
case 0x52fb91:c.instructions+=2;goto B52fb91;
case 0x52fb92:c.instructions+=1;goto B52fb92;
case 0x52fb97:goto L52fb97;
case 0x52fb9a:c.instructions+=3;goto B52fb9a;
case 0x52fb9b:c.instructions+=2;goto B52fb9b;
case 0x52fb9c:c.instructions+=1;goto B52fb9c;
case 0x52fba0:goto L52fba0;
case 0x52fba1:c.instructions+=4;goto B52fba1;
case 0x52fba3:c.instructions+=3;goto B52fba3;
case 0x52fba9:c.instructions+=2;goto B52fba9;
case 0x52fbab:c.instructions+=1;goto B52fbab;
case 0x52fbad:goto L52fbad;
case 0x52fbb0:c.instructions+=3;goto B52fbb0;
case 0x52fbb1:c.instructions+=2;goto B52fbb1;
case 0x52fbb5:c.instructions+=1;goto B52fbb5;
case 0x52fbba:goto L52fbba;
case 0x52fbbd:c.instructions+=10;goto B52fbbd;
case 0x52fbc0:c.instructions+=9;goto B52fbc0;
case 0x52fbc1:c.instructions+=8;goto B52fbc1;
case 0x52fbc2:c.instructions+=7;goto B52fbc2;
case 0x52fbc3:c.instructions+=6;goto B52fbc3;
case 0x52fbc6:c.instructions+=5;goto B52fbc6;
case 0x52fbc9:c.instructions+=4;goto B52fbc9;
case 0x52fbcc:c.instructions+=3;goto B52fbcc;
case 0x52fbcd:c.instructions+=2;goto B52fbcd;
case 0x52fbd2:c.instructions+=1;goto B52fbd2;
case 0x52fbd7:goto L52fbd7;
case 0x52fbda:c.instructions+=1;goto B52fbda;
case 0x52fbe1:goto L52fbe1;
case 0x52fbe2:c.instructions+=1;goto B52fbe2;
case 0x52fbf0:goto L52fbf0;
case 0x52fbf1:c.instructions+=5;goto B52fbf1;
case 0x52fbf3:c.instructions+=4;goto B52fbf3;
case 0x52fbf6:c.instructions+=3;goto B52fbf6;
case 0x52fbf7:c.instructions+=2;goto B52fbf7;
case 0x52fbfb:c.instructions+=1;goto B52fbfb;
case 0x52fc00:goto L52fc00;
case 0x52fc03:c.instructions+=8;goto B52fc03;
case 0x52fc05:c.instructions+=7;goto B52fc05;
case 0x52fc08:c.instructions+=6;goto B52fc08;
case 0x52fc0a:c.instructions+=5;goto B52fc0a;
case 0x52fc0b:c.instructions+=4;goto B52fc0b;
case 0x52fc0c:c.instructions+=3;goto B52fc0c;
case 0x52fc0d:c.instructions+=2;goto B52fc0d;
case 0x52fc12:c.instructions+=1;goto B52fc12;
case 0x52fc17:goto L52fc17;
case 0x52fc1a:c.instructions+=5;goto B52fc1a;
case 0x52fc21:c.instructions+=4;goto B52fc21;
case 0x52fc28:c.instructions+=3;goto B52fc28;
case 0x52fc2f:c.instructions+=2;goto B52fc2f;
case 0x52fc30:c.instructions+=1;goto B52fc30;
case 0x52fc40:goto L52fc40;
case 0x52fc43:c.instructions+=12;goto B52fc43;
case 0x52fc49:c.instructions+=11;goto B52fc49;
case 0x52fc4e:c.instructions+=10;goto B52fc4e;
case 0x52fc4f:c.instructions+=9;goto B52fc4f;
case 0x52fc51:c.instructions+=8;goto B52fc51;
case 0x52fc57:c.instructions+=7;goto B52fc57;
case 0x52fc5e:c.instructions+=6;goto B52fc5e;
case 0x52fc62:c.instructions+=5;goto B52fc62;
case 0x52fc64:c.instructions+=4;goto B52fc64;
case 0x52fc6a:c.instructions+=3;goto B52fc6a;
case 0x52fc70:c.instructions+=2;goto B52fc70;
case 0x52fc74:c.instructions+=1;goto B52fc74;
case 0x52fc76:goto L52fc76;
case 0x52fc7d:goto L52fc7d;
case 0x52fc7f:c.instructions+=1;goto B52fc7f;
case 0x52fc81:goto L52fc81;
case 0x52fc84:c.instructions+=2;goto B52fc84;
case 0x52fc86:c.instructions+=1;goto B52fc86;
case 0x52fc8c:goto L52fc8c;
case 0x52fc8f:c.instructions+=2;goto B52fc8f;
case 0x52fc91:c.instructions+=1;goto B52fc91;
case 0x52fc97:goto L52fc97;
case 0x52fc9b:c.instructions+=7;goto B52fc9b;
case 0x52fc9d:c.instructions+=6;goto B52fc9d;
case 0x52fc9e:c.instructions+=5;goto B52fc9e;
case 0x52fca2:c.instructions+=4;goto B52fca2;
case 0x52fca3:c.instructions+=3;goto B52fca3;
case 0x52fca6:c.instructions+=2;goto B52fca6;
case 0x52fca7:c.instructions+=1;goto B52fca7;
case 0x52fcaa:goto L52fcaa;
case 0x52fcab:c.instructions+=2;goto B52fcab;
case 0x52fcae:c.instructions+=1;goto B52fcae;
case 0x52fcaf:goto L52fcaf;
case 0x52fcb4:c.instructions+=2;goto B52fcb4;
case 0x52fcb6:c.instructions+=1;goto B52fcb6;
case 0x52fcb8:goto L52fcb8;
case 0x52fcbd:c.instructions+=2;goto B52fcbd;
case 0x52fcbf:c.instructions+=1;goto B52fcbf;
case 0x52fcc1:goto L52fcc1;
case 0x52fcc6:c.instructions+=2;goto B52fcc6;
case 0x52fcc8:c.instructions+=1;goto B52fcc8;
case 0x52fcca:goto L52fcca;
case 0x52fccb:c.instructions+=7;goto B52fccb;
case 0x52fccf:c.instructions+=6;goto B52fccf;
case 0x52fcd0:c.instructions+=5;goto B52fcd0;
case 0x52fcd4:c.instructions+=4;goto B52fcd4;
case 0x52fcd5:c.instructions+=3;goto B52fcd5;
case 0x52fcd6:c.instructions+=2;goto B52fcd6;
case 0x52fcd8:c.instructions+=1;goto B52fcd8;
case 0x52fcdd:goto L52fcdd;
case 0x52fcdf:c.instructions+=1;goto B52fcdf;
case 0x52fce1:goto L52fce1;
case 0x52fce4:c.instructions+=1;goto B52fce4;
case 0x52fce6:goto L52fce6;
case 0x52fce9:c.instructions+=2;goto B52fce9;
case 0x52fceb:c.instructions+=1;goto B52fceb;
case 0x52fced:goto L52fced;
case 0x52fcee:c.instructions+=2;goto B52fcee;
case 0x52fcf0:c.instructions+=1;goto B52fcf0;
case 0x52fcf5:goto L52fcf5;
case 0x52fcf6:c.instructions+=4;goto B52fcf6;
case 0x52fcf7:c.instructions+=3;goto B52fcf7;
case 0x52fcf8:c.instructions+=2;goto B52fcf8;
case 0x52fcfb:c.instructions+=1;goto B52fcfb;
case 0x52fcfc:goto L52fcfc;
case 0x52fcff:c.instructions+=4;goto B52fcff;
case 0x52fd00:c.instructions+=3;goto B52fd00;
case 0x52fd01:c.instructions+=2;goto B52fd01;
case 0x52fd02:c.instructions+=1;goto B52fd02;
case 0x52fd07:goto L52fd07;
case 0x52fd0a:c.instructions+=2;goto B52fd0a;
case 0x52fd0c:c.instructions+=1;goto B52fd0c;
case 0x52fd0e:goto L52fd0e;
case 0x52fd11:c.instructions+=2;goto B52fd11;
case 0x52fd13:c.instructions+=1;goto B52fd13;
case 0x52fd15:goto L52fd15;
case 0x52fd17:c.instructions+=1;goto B52fd17;
case 0x52fd1a:goto L52fd1a;
case 0x52fd21:goto L52fd21;
case 0x52fd24:c.instructions+=4;goto B52fd24;
case 0x52fd27:c.instructions+=3;goto B52fd27;
case 0x52fd28:c.instructions+=2;goto B52fd28;
case 0x52fd29:c.instructions+=1;goto B52fd29;
case 0x52fd2e:goto L52fd2e;
case 0x52fd31:goto L52fd31;
case 0x52fd32:c.instructions+=1;goto B52fd32;
case 0x52fd33:goto L52fd33;
case 0x52fd34:c.instructions+=2;goto B52fd34;
case 0x52fd37:c.instructions+=1;goto B52fd37;
case 0x52fd40:goto L52fd40;
case 0x52fd41:c.instructions+=7;goto B52fd41;
case 0x52fd42:c.instructions+=6;goto B52fd42;
case 0x52fd44:c.instructions+=5;goto B52fd44;
case 0x52fd47:c.instructions+=4;goto B52fd47;
case 0x52fd49:c.instructions+=3;goto B52fd49;
case 0x52fd4a:c.instructions+=2;goto B52fd4a;
case 0x52fd4d:c.instructions+=1;goto B52fd4d;
case 0x52fd4f:goto L52fd4f;
case 0x52fd52:c.instructions+=1;goto B52fd52;
case 0x52fd54:goto L52fd54;
case 0x52fd56:goto L52fd56;
case 0x52fd58:c.instructions+=1;goto B52fd58;
case 0x52fd5a:goto L52fd5a;
case 0x52fd5d:c.instructions+=1;goto B52fd5d;
case 0x52fd5f:goto L52fd5f;
case 0x52fd61:goto L52fd61;
case 0x52fd63:c.instructions+=1;goto B52fd63;
case 0x52fd65:goto L52fd65;
case 0x52fd67:c.instructions+=2;goto B52fd67;
case 0x52fd69:c.instructions+=1;goto B52fd69;
case 0x52fd6c:goto L52fd6c;
case 0x52fd6e:c.instructions+=2;goto B52fd6e;
case 0x52fd70:c.instructions+=1;goto B52fd70;
case 0x52fd73:goto L52fd73;
case 0x52fd76:c.instructions+=2;goto B52fd76;
case 0x52fd78:c.instructions+=1;goto B52fd78;
case 0x52fd7a:goto L52fd7a;
case 0x52fd7d:c.instructions+=1;goto B52fd7d;
case 0x52fd7f:goto L52fd7f;
case 0x52fd81:c.instructions+=1;goto B52fd81;
case 0x52fd83:goto L52fd83;
case 0x52fd85:c.instructions+=7;goto B52fd85;
case 0x52fd87:c.instructions+=6;goto B52fd87;
case 0x52fd8a:c.instructions+=5;goto B52fd8a;
case 0x52fd8c:c.instructions+=4;goto B52fd8c;
case 0x52fd8f:c.instructions+=3;goto B52fd8f;
case 0x52fd92:c.instructions+=2;goto B52fd92;
case 0x52fd94:c.instructions+=1;goto B52fd94;
case 0x52fd96:goto L52fd96;
case 0x52fd98:c.instructions+=2;goto B52fd98;
case 0x52fd9a:c.instructions+=1;goto B52fd9a;
case 0x52fd9c:goto L52fd9c;
case 0x52fd9e:c.instructions+=1;goto B52fd9e;
case 0x52fda0:goto L52fda0;
case 0x52fda1:c.instructions+=4;goto B52fda1;
case 0x52fda2:c.instructions+=3;goto B52fda2;
case 0x52fda4:c.instructions+=2;goto B52fda4;
case 0x52fda5:c.instructions+=1;goto B52fda5;
case 0x52fdb0:goto L52fdb0;
case 0x52fdb3:c.instructions+=9;goto B52fdb3;
case 0x52fdb4:c.instructions+=8;goto B52fdb4;
case 0x52fdb5:c.instructions+=7;goto B52fdb5;
case 0x52fdb6:c.instructions+=6;goto B52fdb6;
case 0x52fdb7:c.instructions+=5;goto B52fdb7;
case 0x52fdb9:c.instructions+=4;goto B52fdb9;
case 0x52fdbc:c.instructions+=3;goto B52fdbc;
case 0x52fdbd:c.instructions+=2;goto B52fdbd;
case 0x52fdc2:c.instructions+=1;goto B52fdc2;
case 0x52fdc7:goto L52fdc7;
case 0x52fdcd:c.instructions+=6;goto B52fdcd;
case 0x52fdd0:c.instructions+=5;goto B52fdd0;
case 0x52fdd4:c.instructions+=4;goto B52fdd4;
case 0x52fdd7:c.instructions+=3;goto B52fdd7;
case 0x52fdd9:c.instructions+=2;goto B52fdd9;
case 0x52fddd:c.instructions+=1;goto B52fddd;
case 0x52fddf:goto L52fddf;
case 0x52fde2:c.instructions+=1;goto B52fde2;
case 0x52fde4:goto L52fde4;
case 0x52fde6:goto L52fde6;
case 0x52fde8:c.instructions+=1;goto B52fde8;
case 0x52fdea:goto L52fdea;
case 0x52fded:c.instructions+=1;goto B52fded;
case 0x52fdef:goto L52fdef;
case 0x52fdf1:goto L52fdf1;
case 0x52fdf3:c.instructions+=1;goto B52fdf3;
case 0x52fdf5:goto L52fdf5;
case 0x52fdf9:c.instructions+=2;goto B52fdf9;
case 0x52fdfb:c.instructions+=1;goto B52fdfb;
case 0x52fdfd:goto L52fdfd;
case 0x52fe03:c.instructions+=3;goto B52fe03;
case 0x52fe05:c.instructions+=2;goto B52fe05;
case 0x52fe07:c.instructions+=1;goto B52fe07;
case 0x52fe09:goto L52fe09;
case 0x52fe0b:c.instructions+=2;goto B52fe0b;
case 0x52fe0d:c.instructions+=1;goto B52fe0d;
case 0x52fe10:goto L52fe10;
case 0x52fe14:c.instructions+=4;goto B52fe14;
case 0x52fe16:c.instructions+=3;goto B52fe16;
case 0x52fe17:c.instructions+=2;goto B52fe17;
case 0x52fe19:c.instructions+=1;goto B52fe19;
case 0x52fe1c:goto L52fe1c;
case 0x52fe1e:c.instructions+=2;goto B52fe1e;
case 0x52fe20:c.instructions+=1;goto B52fe20;
case 0x52fe23:goto L52fe23;
case 0x52fe27:c.instructions+=3;goto B52fe27;
case 0x52fe2d:c.instructions+=2;goto B52fe2d;
case 0x52fe31:c.instructions+=1;goto B52fe31;
case 0x52fe33:goto L52fe33;
case 0x52fe35:c.instructions+=3;goto B52fe35;
case 0x52fe3a:c.instructions+=2;goto B52fe3a;
case 0x52fe3c:c.instructions+=1;goto B52fe3c;
case 0x52fe3f:goto L52fe3f;
case 0x52fe41:c.instructions+=2;goto B52fe41;
case 0x52fe43:c.instructions+=1;goto B52fe43;
case 0x52fe46:goto L52fe46;
case 0x52fe49:c.instructions+=3;goto B52fe49;
case 0x52fe4a:c.instructions+=2;goto B52fe4a;
case 0x52fe4c:c.instructions+=1;goto B52fe4c;
case 0x52fe4e:goto L52fe4e;
case 0x52fe51:c.instructions+=1;goto B52fe51;
case 0x52fe53:goto L52fe53;
case 0x52fe54:c.instructions+=5;goto B52fe54;
case 0x52fe55:c.instructions+=4;goto B52fe55;
case 0x52fe56:c.instructions+=3;goto B52fe56;
case 0x52fe57:c.instructions+=2;goto B52fe57;
case 0x52fe5a:c.instructions+=1;goto B52fe5a;
case 0x52fe60:goto L52fe60;
case 0x52fe61:c.instructions+=5;goto B52fe61;
case 0x52fe63:c.instructions+=4;goto B52fe63;
case 0x52fe66:c.instructions+=3;goto B52fe66;
case 0x52fe69:c.instructions+=2;goto B52fe69;
case 0x52fe6b:c.instructions+=1;goto B52fe6b;
case 0x52fe6d:goto L52fe6d;
case 0x52fe6f:c.instructions+=2;goto B52fe6f;
case 0x52fe71:c.instructions+=1;goto B52fe71;
case 0x52fe73:goto L52fe73;
case 0x52fe76:c.instructions+=1;goto B52fe76;
case 0x52fe78:goto L52fe78;
case 0x52fe7a:goto L52fe7a;
case 0x52fe7d:c.instructions+=6;goto B52fe7d;
case 0x52fe80:c.instructions+=5;goto B52fe80;
case 0x52fe83:c.instructions+=4;goto B52fe83;
case 0x52fe8a:c.instructions+=3;goto B52fe8a;
case 0x52fe8c:c.instructions+=2;goto B52fe8c;
case 0x52fe8d:c.instructions+=1;goto B52fe8d;
case 0x52fe90:goto L52fe90;
case 0x52fe92:c.instructions+=2;goto B52fe92;
case 0x52fe93:c.instructions+=1;goto B52fe93;
case 0x52fe98:goto L52fe98;
case 0x52fe99:c.instructions+=1;goto B52fe99;
case 0x52fea0:goto L52fea0;
case 0x52fea1:c.instructions+=5;goto B52fea1;
case 0x52fea3:c.instructions+=4;goto B52fea3;
case 0x52fea6:c.instructions+=3;goto B52fea6;
case 0x52fea9:c.instructions+=2;goto B52fea9;
case 0x52feab:c.instructions+=1;goto B52feab;
case 0x52feb1:goto L52feb1;
case 0x52feb2:c.instructions+=3;goto B52feb2;
case 0x52feb5:c.instructions+=2;goto B52feb5;
case 0x52feb7:c.instructions+=1;goto B52feb7;
case 0x52feb9:goto L52feb9;
case 0x52febc:c.instructions+=2;goto B52febc;
case 0x52febe:c.instructions+=1;goto B52febe;
case 0x52fec0:goto L52fec0;
case 0x52fec1:c.instructions+=3;goto B52fec1;
case 0x52fec3:c.instructions+=2;goto B52fec3;
case 0x52fec4:c.instructions+=1;goto B52fec4;
case 0x52fec9:goto L52fec9;
case 0x52feca:c.instructions+=6;goto B52feca;
case 0x52fed0:c.instructions+=5;goto B52fed0;
case 0x52fed1:c.instructions+=4;goto B52fed1;
case 0x52fed7:c.instructions+=3;goto B52fed7;
case 0x52feda:c.instructions+=2;goto B52feda;
case 0x52fedc:c.instructions+=1;goto B52fedc;
case 0x52fede:goto L52fede;
case 0x52fedf:c.instructions+=2;goto B52fedf;
case 0x52fee1:c.instructions+=1;goto B52fee1;
case 0x52fee6:goto L52fee6;
case 0x52fee8:c.instructions+=3;goto B52fee8;
case 0x52feea:c.instructions+=2;goto B52feea;
case 0x52feec:c.instructions+=1;goto B52feec;
case 0x52feee:goto L52feee;
case 0x52fef0:c.instructions+=2;goto B52fef0;
case 0x52fef3:c.instructions+=1;goto B52fef3;
case 0x52fef8:goto L52fef8;
case 0x52fef9:c.instructions+=5;goto B52fef9;
case 0x52fefa:c.instructions+=4;goto B52fefa;
case 0x52fefb:c.instructions+=3;goto B52fefb;
case 0x52ff02:c.instructions+=2;goto B52ff02;
case 0x52ff03:c.instructions+=1;goto B52ff03;
case 0x52ff04:goto L52ff04;
case 0x52ff06:c.instructions+=8;goto B52ff06;
case 0x52ff07:c.instructions+=7;goto B52ff07;
case 0x52ff0c:c.instructions+=6;goto B52ff0c;
case 0x52ff0f:c.instructions+=5;goto B52ff0f;
case 0x52ff12:c.instructions+=4;goto B52ff12;
case 0x52ff13:c.instructions+=3;goto B52ff13;
case 0x52ff15:c.instructions+=2;goto B52ff15;
case 0x52ff16:c.instructions+=1;goto B52ff16;
case 0x52ff1b:goto L52ff1b;
case 0x52ff1d:c.instructions+=1;goto B52ff1d;
case 0x52ff1f:goto L52ff1f;
case 0x52ff22:c.instructions+=1;goto B52ff22;
case 0x52ff24:goto L52ff24;
case 0x52ff26:goto L52ff26;
case 0x52ff28:c.instructions+=2;goto B52ff28;
case 0x52ff2b:c.instructions+=1;goto B52ff2b;
case 0x52ff30:goto L52ff30;
case 0x52ff31:c.instructions+=3;goto B52ff31;
case 0x52ff32:c.instructions+=2;goto B52ff32;
case 0x52ff39:c.instructions+=1;goto B52ff39;
case 0x52ff3a:goto L52ff3a;
case 0x52ff3b:c.instructions+=1;goto B52ff3b;
case 0x52ff40:goto L52ff40;
case 0x52ff41:c.instructions+=2;goto B52ff41;
case 0x52ff43:c.instructions+=1;goto B52ff43;
case 0x52ff48:goto L52ff48;
case 0x52ff4d:c.instructions+=1;goto B52ff4d;
case 0x52ff4f:goto L52ff4f;
case 0x52ff50:c.instructions+=1;goto B52ff50;
case 0x52ff55:goto L52ff55;
case 0x52ff58:goto L52ff58;
case 0x52ff5a:c.instructions+=2;goto B52ff5a;
case 0x52ff5b:c.instructions+=1;goto B52ff5b;
case 0x52ff60:goto L52ff60;
case 0x52ff61:c.instructions+=10;goto B52ff61;
case 0x52ff63:c.instructions+=9;goto B52ff63;
case 0x52ff64:c.instructions+=8;goto B52ff64;
case 0x52ff65:c.instructions+=7;goto B52ff65;
case 0x52ff66:c.instructions+=6;goto B52ff66;
case 0x52ff67:c.instructions+=5;goto B52ff67;
case 0x52ff6a:c.instructions+=4;goto B52ff6a;
case 0x52ff6c:c.instructions+=3;goto B52ff6c;
case 0x52ff72:c.instructions+=2;goto B52ff72;
case 0x52ff75:c.instructions+=1;goto B52ff75;
case 0x52ff77:goto L52ff77;
case 0x52ff79:goto L52ff79;
case 0x52ff7c:c.instructions+=1;goto B52ff7c;
case 0x52ff7e:goto L52ff7e;
case 0x52ff81:c.instructions+=1;goto B52ff81;
case 0x52ff83:goto L52ff83;
case 0x52ff89:c.instructions+=1;goto B52ff89;
case 0x52ff8b:goto L52ff8b;
case 0x52ff90:c.instructions+=1;goto B52ff90;
case 0x52ff92:goto L52ff92;
case 0x52ff97:c.instructions+=1;goto B52ff97;
case 0x52ff99:goto L52ff99;
case 0x52ff9e:c.instructions+=1;goto B52ff9e;
case 0x52ffa0:goto L52ffa0;
case 0x52ffa5:c.instructions+=1;goto B52ffa5;
case 0x52ffa7:goto L52ffa7;
case 0x52ffa9:c.instructions+=2;goto B52ffa9;
case 0x52ffae:c.instructions+=1;goto B52ffae;
case 0x52ffb0:goto L52ffb0;
case 0x52ffb1:c.instructions+=1;goto B52ffb1;
case 0x52ffb3:goto L52ffb3;
case 0x52ffb4:c.instructions+=1;goto B52ffb4;
case 0x52ffb6:goto L52ffb6;
case 0x52ffbb:c.instructions+=1;goto B52ffbb;
case 0x52ffbd:goto L52ffbd;
case 0x52ffc2:c.instructions+=1;goto B52ffc2;
case 0x52ffc4:goto L52ffc4;
case 0x52ffc9:goto L52ffc9;
case 0x52ffcf:c.instructions+=5;goto B52ffcf;
case 0x52ffd1:c.instructions+=4;goto B52ffd1;
case 0x52ffd3:c.instructions+=3;goto B52ffd3;
case 0x52ffd5:c.instructions+=2;goto B52ffd5;
case 0x52ffd6:c.instructions+=1;goto B52ffd6;
case 0x52ffd9:goto L52ffd9;
case 0x52ffda:c.instructions+=2;goto B52ffda;
case 0x52ffdf:c.instructions+=1;goto B52ffdf;
case 0x52ffe4:goto L52ffe4;
case 0x52ffea:c.instructions+=2;goto B52ffea;
case 0x52ffed:c.instructions+=1;goto B52ffed;
case 0x52ffef:goto L52ffef;
case 0x52fff5:c.instructions+=2;goto B52fff5;
case 0x52fff7:c.instructions+=1;goto B52fff7;
case 0x52fff9:goto L52fff9;
case 0x52fffb:c.instructions+=1;goto B52fffb;
default:missing_instruction(c.pc);}
B52f000:L52f000:{c.instructions+=3;NFSU2_TR(0x52f000);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52f003:{NFSU2_TR(0x52f003);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B52f004:{NFSU2_TR(0x52f004);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x52eff7u,52e);}
}
B52f006:L52f006:{c.instructions+=6;NFSU2_TR(0x52f006);
w4(R+20,u32(0x400000ull));
}
B52f00b:{NFSU2_TR(0x52f00b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f00e:{NFSU2_TR(0x52f00e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52f011:{NFSU2_TR(0x52f011);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f4ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B52f019:{NFSU2_TR(0x52f019);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52f021:{NFSU2_TR(0x52f021);
if(r1(R+518)){{goto L52f0ef;}}
}
B52f027:L52f027:{c.instructions+=2;NFSU2_TR(0x52f027);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52f028:{NFSU2_TR(0x52f028);
if(r1(R+518)){{goto L52f08d;}}
}
B52f02a:L52f02a:{c.instructions+=2;NFSU2_TR(0x52f02a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52f02b:{NFSU2_TR(0x52f02b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52f12d;}}
}
B52f031:L52f031:{c.instructions+=4;NFSU2_TR(0x52f031);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52f034:{NFSU2_TR(0x52f034);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f036:{NFSU2_TR(0x52f036);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f039:{NFSU2_TR(0x52f039);
if(r1(R+518)){{goto L52f064;}}
}
B52f03b:L52f03b:{c.instructions+=6;NFSU2_TR(0x52f03b);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52f03f:{NFSU2_TR(0x52f03f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f040:{NFSU2_TR(0x52f040);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52f044:{NFSU2_TR(0x52f044);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f045:{NFSU2_TR(0x52f045);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f046:{NFSU2_TR(0x52f046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f04bull));
TAIL_STATIC(0x51d070u,51d);
}
B52f04b:L52f04b:{c.instructions+=6;NFSU2_TR(0x52f04b);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f04e:{NFSU2_TR(0x52f04e);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f054:{NFSU2_TR(0x52f054);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52f057:{NFSU2_TR(0x52f057);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52f05b:{NFSU2_TR(0x52f05b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f05f:{NFSU2_TR(0x52f05f);
{goto L52f12a;}
}
B52f064:L52f064:{c.instructions+=6;NFSU2_TR(0x52f064);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52f068:{NFSU2_TR(0x52f068);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f069:{NFSU2_TR(0x52f069);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52f06d:{NFSU2_TR(0x52f06d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f06e:{NFSU2_TR(0x52f06e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f06f:{NFSU2_TR(0x52f06f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f074ull));
TAIL_STATIC(0x51d070u,51d);
}
B52f074:L52f074:{c.instructions+=6;NFSU2_TR(0x52f074);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f077:{NFSU2_TR(0x52f077);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f07d:{NFSU2_TR(0x52f07d);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52f080:{NFSU2_TR(0x52f080);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52f084:{NFSU2_TR(0x52f084);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f088:{NFSU2_TR(0x52f088);
{goto L52f12a;}
}
B52f08d:L52f08d:{c.instructions+=4;NFSU2_TR(0x52f08d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52f090:{NFSU2_TR(0x52f090);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f092:{NFSU2_TR(0x52f092);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f095:{NFSU2_TR(0x52f095);
if(r1(R+518)){{goto L52f0c3;}}
}
B52f097:L52f097:{c.instructions+=6;NFSU2_TR(0x52f097);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52f09b:{NFSU2_TR(0x52f09b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f09c:{NFSU2_TR(0x52f09c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52f0a0:{NFSU2_TR(0x52f0a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f0a1:{NFSU2_TR(0x52f0a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f0a2:{NFSU2_TR(0x52f0a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f0a7ull));
TAIL_STATIC(0x51d070u,51d);
}
B52f0a7:L52f0a7:{c.instructions+=7;NFSU2_TR(0x52f0a7);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f0aa:{NFSU2_TR(0x52f0aa);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f0b0:{NFSU2_TR(0x52f0b0);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52f0b3:{NFSU2_TR(0x52f0b3);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f0b9:{NFSU2_TR(0x52f0b9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52f0bd:{NFSU2_TR(0x52f0bd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f0c1:{NFSU2_TR(0x52f0c1);
{goto L52f12a;}
}
B52f0c3:L52f0c3:{c.instructions+=6;NFSU2_TR(0x52f0c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52f0c7:{NFSU2_TR(0x52f0c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f0c8:{NFSU2_TR(0x52f0c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52f0cc:{NFSU2_TR(0x52f0cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f0cd:{NFSU2_TR(0x52f0cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f0ce:{NFSU2_TR(0x52f0ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f0d3ull));
TAIL_STATIC(0x51d070u,51d);
}
B52f0d3:L52f0d3:{c.instructions+=7;NFSU2_TR(0x52f0d3);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f0d6:{NFSU2_TR(0x52f0d6);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f0dc:{NFSU2_TR(0x52f0dc);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52f0df:{NFSU2_TR(0x52f0df);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f0e5:{NFSU2_TR(0x52f0e5);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52f0e9:{NFSU2_TR(0x52f0e9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f0ed:{NFSU2_TR(0x52f0ed);
{goto L52f12a;}
}
B52f0ef:L52f0ef:{c.instructions+=4;NFSU2_TR(0x52f0ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52f0f2:{NFSU2_TR(0x52f0f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f0f4:{NFSU2_TR(0x52f0f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52f0f8:{NFSU2_TR(0x52f0f8);
if(r1(R+518)){{goto L52f113;}}
}
B52f0fa:L52f0fa:{c.instructions+=6;NFSU2_TR(0x52f0fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f0fd:{NFSU2_TR(0x52f0fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52f101:{NFSU2_TR(0x52f101);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f102:{NFSU2_TR(0x52f102);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f103:{NFSU2_TR(0x52f103);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f104:{NFSU2_TR(0x52f104);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f109ull));
TAIL_STATIC(0x51d070u,51d);
}
B52f109:L52f109:{c.instructions+=3;NFSU2_TR(0x52f109);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f10d:{NFSU2_TR(0x52f10d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f111:{NFSU2_TR(0x52f111);
{goto L52f12a;}
}
B52f113:L52f113:{c.instructions+=6;NFSU2_TR(0x52f113);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f116:{NFSU2_TR(0x52f116);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f117:{NFSU2_TR(0x52f117);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52f11b:{NFSU2_TR(0x52f11b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f11c:{NFSU2_TR(0x52f11c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f11d:{NFSU2_TR(0x52f11d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f122ull));
TAIL_STATIC(0x51d070u,51d);
}
B52f122:L52f122:{c.instructions+=2;NFSU2_TR(0x52f122);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f126:{NFSU2_TR(0x52f126);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f12a:L52f12a:{c.instructions+=1;NFSU2_TR(0x52f12a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52f12d:L52f12d:{c.instructions+=3;NFSU2_TR(0x52f12d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52f130:{NFSU2_TR(0x52f130);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f132:{NFSU2_TR(0x52f132);
if(r1(R+518)){{goto L52f24a;}}
}
B52f138:L52f138:{c.instructions+=4;NFSU2_TR(0x52f138);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52f13b:{NFSU2_TR(0x52f13b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f13d:{NFSU2_TR(0x52f13d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f13e:{NFSU2_TR(0x52f13e);
if(r1(R+518)){{goto L52f1c7;}}
}
B52f144:L52f144:{c.instructions+=9;NFSU2_TR(0x52f144);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f147:{NFSU2_TR(0x52f147);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f14a:{NFSU2_TR(0x52f14a);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f150:{NFSU2_TR(0x52f150);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f153:{NFSU2_TR(0x52f153);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f156:{NFSU2_TR(0x52f156);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f157:{NFSU2_TR(0x52f157);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f158:{NFSU2_TR(0x52f158);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f159:{NFSU2_TR(0x52f159);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f15eull));
TAIL_STATIC(0x50d8d0u,50d);
}
B52f15e:L52f15e:{c.instructions+=8;NFSU2_TR(0x52f15e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B52f162:{NFSU2_TR(0x52f162);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f165:{NFSU2_TR(0x52f165);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f168:{NFSU2_TR(0x52f168);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f16c:{NFSU2_TR(0x52f16c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B52f16f:{NFSU2_TR(0x52f16f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f171:{NFSU2_TR(0x52f171);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f174:{NFSU2_TR(0x52f174);
if(r1(R+518)){{goto L52f1a1;}}
}
B52f176:L52f176:{c.instructions+=4;NFSU2_TR(0x52f176);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f179:{NFSU2_TR(0x52f179);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52f17a:{NFSU2_TR(0x52f17a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f17d:{NFSU2_TR(0x52f17d);
if(r1(R+518)){{goto L52f189;}}
}
B52f17f:L52f17f:{c.instructions+=2;NFSU2_TR(0x52f17f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52f182:{NFSU2_TR(0x52f182);
if(r1(R+518)){{goto L52f189;}}
}
B52f184:L52f184:{c.instructions+=2;NFSU2_TR(0x52f184);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52f187:{NFSU2_TR(0x52f187);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52f191;}}
}
B52f189:L52f189:{c.instructions+=3;NFSU2_TR(0x52f189);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B52f18c:{NFSU2_TR(0x52f18c);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B52f18e:{NFSU2_TR(0x52f18e);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f191:L52f191:{c.instructions+=6;NFSU2_TR(0x52f191);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f194:{NFSU2_TR(0x52f194);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f197:{NFSU2_TR(0x52f197);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f19a:{NFSU2_TR(0x52f19a);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+20))));
}
B52f19c:{NFSU2_TR(0x52f19c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f19f:{NFSU2_TR(0x52f19f);
{goto L52f1a5;}
}
B52f1a1:L52f1a1:{c.instructions+=2;NFSU2_TR(0x52f1a1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52f1a3:{NFSU2_TR(0x52f1a3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52f1a5:L52f1a5:{c.instructions+=7;NFSU2_TR(0x52f1a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52f1a8:{NFSU2_TR(0x52f1a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52f1ac:{NFSU2_TR(0x52f1ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f1ad:{NFSU2_TR(0x52f1ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52f1b1:{NFSU2_TR(0x52f1b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f1b2:{NFSU2_TR(0x52f1b2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f1b3:{NFSU2_TR(0x52f1b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f1b8ull));
TAIL_STATIC(0x51d070u,51d);
}
B52f1b8:L52f1b8:{c.instructions+=5;NFSU2_TR(0x52f1b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f1bc:{NFSU2_TR(0x52f1bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f1c0:{NFSU2_TR(0x52f1c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f1c1:{NFSU2_TR(0x52f1c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f1c2:{NFSU2_TR(0x52f1c2);
{goto L52f2db;}
}
B52f1c7:L52f1c7:{c.instructions+=9;NFSU2_TR(0x52f1c7);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f1ca:{NFSU2_TR(0x52f1ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f1cd:{NFSU2_TR(0x52f1cd);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f1d3:{NFSU2_TR(0x52f1d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f1d6:{NFSU2_TR(0x52f1d6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f1d9:{NFSU2_TR(0x52f1d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f1da:{NFSU2_TR(0x52f1da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f1db:{NFSU2_TR(0x52f1db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f1dc:{NFSU2_TR(0x52f1dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f1e1ull));
TAIL_STATIC(0x50d8d0u,50d);
}
B52f1e1:L52f1e1:{c.instructions+=8;NFSU2_TR(0x52f1e1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B52f1e5:{NFSU2_TR(0x52f1e5);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f1e8:{NFSU2_TR(0x52f1e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f1eb:{NFSU2_TR(0x52f1eb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f1ef:{NFSU2_TR(0x52f1ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B52f1f2:{NFSU2_TR(0x52f1f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f1f4:{NFSU2_TR(0x52f1f4);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f1f7:{NFSU2_TR(0x52f1f7);
if(r1(R+518)){{goto L52f224;}}
}
B52f1f9:L52f1f9:{c.instructions+=4;NFSU2_TR(0x52f1f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f1fc:{NFSU2_TR(0x52f1fc);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52f1fd:{NFSU2_TR(0x52f1fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f200:{NFSU2_TR(0x52f200);
if(r1(R+518)){{goto L52f20c;}}
}
B52f202:L52f202:{c.instructions+=2;NFSU2_TR(0x52f202);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52f205:{NFSU2_TR(0x52f205);
if(r1(R+518)){{goto L52f20c;}}
}
B52f207:L52f207:{c.instructions+=2;NFSU2_TR(0x52f207);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52f20a:{NFSU2_TR(0x52f20a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52f214;}}
}
B52f20c:L52f20c:{c.instructions+=3;NFSU2_TR(0x52f20c);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B52f20f:{NFSU2_TR(0x52f20f);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B52f211:{NFSU2_TR(0x52f211);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f214:L52f214:{c.instructions+=6;NFSU2_TR(0x52f214);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f217:{NFSU2_TR(0x52f217);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f21a:{NFSU2_TR(0x52f21a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f21d:{NFSU2_TR(0x52f21d);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+20))));
}
B52f21f:{NFSU2_TR(0x52f21f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f222:{NFSU2_TR(0x52f222);
{goto L52f228;}
}
B52f224:L52f224:{c.instructions+=2;NFSU2_TR(0x52f224);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52f226:{NFSU2_TR(0x52f226);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52f228:L52f228:{c.instructions+=7;NFSU2_TR(0x52f228);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52f22b:{NFSU2_TR(0x52f22b);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52f22f:{NFSU2_TR(0x52f22f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f230:{NFSU2_TR(0x52f230);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52f234:{NFSU2_TR(0x52f234);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f235:{NFSU2_TR(0x52f235);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f236:{NFSU2_TR(0x52f236);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f23bull));
TAIL_STATIC(0x51d070u,51d);
}
B52f23b:L52f23b:{c.instructions+=5;NFSU2_TR(0x52f23b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f23f:{NFSU2_TR(0x52f23f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f243:{NFSU2_TR(0x52f243);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f244:{NFSU2_TR(0x52f244);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f245:{NFSU2_TR(0x52f245);
{goto L52f2db;}
}
B52f24a:L52f24a:{c.instructions+=2;NFSU2_TR(0x52f24a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52f24d:{NFSU2_TR(0x52f24d);
if(r1(R+518)){{goto L52f2e4;}}
}
B52f253:L52f253:{c.instructions+=7;NFSU2_TR(0x52f253);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f256:{NFSU2_TR(0x52f256);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f259:{NFSU2_TR(0x52f259);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f25b:{NFSU2_TR(0x52f25b);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f261:{NFSU2_TR(0x52f261);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f264:{NFSU2_TR(0x52f264);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f26a:{NFSU2_TR(0x52f26a);
if(r1(R+518)){{goto L52f297;}}
}
B52f26c:L52f26c:{c.instructions+=4;NFSU2_TR(0x52f26c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f26f:{NFSU2_TR(0x52f26f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52f270:{NFSU2_TR(0x52f270);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f273:{NFSU2_TR(0x52f273);
if(r1(R+518)){{goto L52f27f;}}
}
B52f275:L52f275:{c.instructions+=2;NFSU2_TR(0x52f275);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52f278:{NFSU2_TR(0x52f278);
if(r1(R+518)){{goto L52f27f;}}
}
B52f27a:L52f27a:{c.instructions+=2;NFSU2_TR(0x52f27a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52f27d:{NFSU2_TR(0x52f27d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52f287;}}
}
B52f27f:L52f27f:{c.instructions+=3;NFSU2_TR(0x52f27f);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B52f282:{NFSU2_TR(0x52f282);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B52f284:{NFSU2_TR(0x52f284);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f287:L52f287:{c.instructions+=6;NFSU2_TR(0x52f287);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f28a:{NFSU2_TR(0x52f28a);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f28d:{NFSU2_TR(0x52f28d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f290:{NFSU2_TR(0x52f290);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+20))));
}
B52f292:{NFSU2_TR(0x52f292);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f295:{NFSU2_TR(0x52f295);
{goto L52f29b;}
}
B52f297:L52f297:{c.instructions+=2;NFSU2_TR(0x52f297);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52f299:{NFSU2_TR(0x52f299);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52f29b:L52f29b:{c.instructions+=4;NFSU2_TR(0x52f29b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52f29e:{NFSU2_TR(0x52f29e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f2a0:{NFSU2_TR(0x52f2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52f2a3:{NFSU2_TR(0x52f2a3);
if(r1(R+518)){{goto L52f2c1;}}
}
B52f2a5:L52f2a5:{c.instructions+=6;NFSU2_TR(0x52f2a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52f2a9:{NFSU2_TR(0x52f2a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f2aa:{NFSU2_TR(0x52f2aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52f2ae:{NFSU2_TR(0x52f2ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f2af:{NFSU2_TR(0x52f2af);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f2b0:{NFSU2_TR(0x52f2b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f2b5ull));
TAIL_STATIC(0x51d070u,51d);
}
B52f2b5:L52f2b5:{c.instructions+=5;NFSU2_TR(0x52f2b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f2b9:{NFSU2_TR(0x52f2b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f2bd:{NFSU2_TR(0x52f2bd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f2be:{NFSU2_TR(0x52f2be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f2bf:{NFSU2_TR(0x52f2bf);
{goto L52f2db;}
}
B52f2c1:L52f2c1:{c.instructions+=6;NFSU2_TR(0x52f2c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52f2c5:{NFSU2_TR(0x52f2c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f2c6:{NFSU2_TR(0x52f2c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52f2ca:{NFSU2_TR(0x52f2ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f2cb:{NFSU2_TR(0x52f2cb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f2cc:{NFSU2_TR(0x52f2cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f2d1ull));
TAIL_STATIC(0x51d070u,51d);
}
B52f2d1:L52f2d1:{c.instructions+=4;NFSU2_TR(0x52f2d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f2d5:{NFSU2_TR(0x52f2d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f2d9:{NFSU2_TR(0x52f2d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f2da:{NFSU2_TR(0x52f2da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f2db:L52f2db:{c.instructions+=2;NFSU2_TR(0x52f2db);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f2dc:{NFSU2_TR(0x52f2dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f2e1ull));
TAIL_STATIC(0x51d380u,51d);
}
B52f2e1:L52f2e1:{c.instructions+=1;NFSU2_TR(0x52f2e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B52f2e4:L52f2e4:{c.instructions+=3;NFSU2_TR(0x52f2e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52f2e7:{NFSU2_TR(0x52f2e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f2e9:{NFSU2_TR(0x52f2e9);
if(r1(R+518)){{goto L52f370;}}
}
B52f2ef:L52f2ef:{c.instructions+=5;NFSU2_TR(0x52f2ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52f2f2:{NFSU2_TR(0x52f2f2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f2f6:{NFSU2_TR(0x52f2f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f2f8:{NFSU2_TR(0x52f2f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f2f9:{NFSU2_TR(0x52f2f9);
if(r1(R+518)){{goto L52f30b;}}
}
B52f2fb:L52f2fb:{c.instructions+=7;NFSU2_TR(0x52f2fb);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f2fe:{NFSU2_TR(0x52f2fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f301:{NFSU2_TR(0x52f301);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f304:{NFSU2_TR(0x52f304);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f307:{NFSU2_TR(0x52f307);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f308:{NFSU2_TR(0x52f308);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f309:{NFSU2_TR(0x52f309);
{goto L52f319;}
}
B52f30b:L52f30b:{c.instructions+=6;NFSU2_TR(0x52f30b);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f30e:{NFSU2_TR(0x52f30e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f311:{NFSU2_TR(0x52f311);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f314:{NFSU2_TR(0x52f314);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f317:{NFSU2_TR(0x52f317);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f318:{NFSU2_TR(0x52f318);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f319:L52f319:{c.instructions+=2;NFSU2_TR(0x52f319);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f31a:{NFSU2_TR(0x52f31a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f31full));
TAIL_STATIC(0x50d8d0u,50d);
}
B52f31f:L52f31f:{c.instructions+=9;NFSU2_TR(0x52f31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f322:{NFSU2_TR(0x52f322);
__builtin_memmove((R+20),(R+0),4);
}
B52f324:{NFSU2_TR(0x52f324);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B52f327:{NFSU2_TR(0x52f327);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B52f32a:{NFSU2_TR(0x52f32a);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xffffffull))));
}
B52f330:{NFSU2_TR(0x52f330);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B52f332:{NFSU2_TR(0x52f332);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f336:{NFSU2_TR(0x52f336);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52f33a:{NFSU2_TR(0x52f33a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L52f342;}}
}
B52f33c:L52f33c:{c.instructions+=1;NFSU2_TR(0x52f33c);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52f342:L52f342:{c.instructions+=3;NFSU2_TR(0x52f342);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52f345:{NFSU2_TR(0x52f345);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f347:{NFSU2_TR(0x52f347);
if(r1(R+518)){{goto L52f351;}}
}
B52f349:L52f349:{c.instructions+=2;NFSU2_TR(0x52f349);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52f34b:{NFSU2_TR(0x52f34b);
{u32 ea_=u32(u32(7906324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f351:L52f351:{c.instructions+=4;NFSU2_TR(0x52f351);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B52f353:{NFSU2_TR(0x52f353);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B52f355:{NFSU2_TR(0x52f355);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B52f357:{NFSU2_TR(0x52f357);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f35cull));
TAIL_STATIC(0x75bed4u,75b);
}
B52f35c:L52f35c:{c.instructions+=7;NFSU2_TR(0x52f35c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52f35e:{NFSU2_TR(0x52f35e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B52f361:{NFSU2_TR(0x52f361);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+20))));
}
B52f363:{NFSU2_TR(0x52f363);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f364:{NFSU2_TR(0x52f364);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f367:{NFSU2_TR(0x52f367);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f368:{NFSU2_TR(0x52f368);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f36dull));
TAIL_STATIC(0x51d7f0u,51d);
}
B52f36d:L52f36d:{c.instructions+=1;NFSU2_TR(0x52f36d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52f370:L52f370:{c.instructions+=3;NFSU2_TR(0x52f370);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52f373:{NFSU2_TR(0x52f373);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f375:{NFSU2_TR(0x52f375);
if(r1(R+518)){TAIL_STATIC(0x52eeb5u,52e);}
}
B52f37b:L52f37b:{c.instructions+=2;NFSU2_TR(0x52f37b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B52f37e:{NFSU2_TR(0x52f37e);
TAIL_STATIC(0x52eeb7u,52e);
}
B52f383:L52f383:{c.instructions+=6;NFSU2_TR(0x52f383);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52f384:{NFSU2_TR(0x52f384);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52f385:{NFSU2_TR(0x52f385);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52f386:{NFSU2_TR(0x52f386);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52f387:{NFSU2_TR(0x52f387);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52f38a:{NFSU2_TR(0x52f38a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52f390:L52f390:{c.instructions+=7;NFSU2_TR(0x52f390);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f391:{NFSU2_TR(0x52f391);
__builtin_memmove((R+20),(R+4),4);
}
B52f393:{NFSU2_TR(0x52f393);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f396:{NFSU2_TR(0x52f396);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f397:{NFSU2_TR(0x52f397);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52f39a:{NFSU2_TR(0x52f39a);
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
B52f39c:{NFSU2_TR(0x52f39c);
if(r1(R+518)){{goto L52f459;}}
}
B52f3a2:L52f3a2:{c.instructions+=3;NFSU2_TR(0x52f3a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f3a4:{NFSU2_TR(0x52f3a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f3a5:{NFSU2_TR(0x52f3a5);
if(r1(R+518)){{goto L52f3ac;}}
}
B52f3a7:L52f3a7:{c.instructions+=2;NFSU2_TR(0x52f3a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B52f3aa:{NFSU2_TR(0x52f3aa);
{goto L52f3b0;}
}
B52f3ac:L52f3ac:{c.instructions+=2;NFSU2_TR(0x52f3ac);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52f3ae:{NFSU2_TR(0x52f3ae);
__builtin_memmove((R+28),(R+28),4);
}
B52f3b0:L52f3b0:{c.instructions+=2;NFSU2_TR(0x52f3b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f3b2:{NFSU2_TR(0x52f3b2);
if(r1(R+518)){{goto L52f3b9;}}
}
B52f3b4:L52f3b4:{c.instructions+=2;NFSU2_TR(0x52f3b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B52f3b7:{NFSU2_TR(0x52f3b7);
{goto L52f3bb;}
}
B52f3b9:L52f3b9:{c.instructions+=1;NFSU2_TR(0x52f3b9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52f3bb:L52f3bb:{c.instructions+=2;NFSU2_TR(0x52f3bb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52f3bd:{NFSU2_TR(0x52f3bd);
if(r1(R+518)){{goto L52f42e;}}
}
B52f3bf:L52f3bf:{c.instructions+=5;NFSU2_TR(0x52f3bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f3c2:{NFSU2_TR(0x52f3c2);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f3c5:{NFSU2_TR(0x52f3c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f3c7:{NFSU2_TR(0x52f3c7);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f3ca:{NFSU2_TR(0x52f3ca);
if(r1(R+518)){{goto L52f3fb;}}
}
B52f3cc:L52f3cc:{c.instructions+=4;NFSU2_TR(0x52f3cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f3cf:{NFSU2_TR(0x52f3cf);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52f3d0:{NFSU2_TR(0x52f3d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f3d3:{NFSU2_TR(0x52f3d3);
if(r1(R+518)){{goto L52f3df;}}
}
B52f3d5:L52f3d5:{c.instructions+=2;NFSU2_TR(0x52f3d5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52f3d8:{NFSU2_TR(0x52f3d8);
if(r1(R+518)){{goto L52f3df;}}
}
B52f3da:L52f3da:{c.instructions+=2;NFSU2_TR(0x52f3da);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52f3dd:{NFSU2_TR(0x52f3dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52f3e7;}}
}
B52f3df:L52f3df:{c.instructions+=3;NFSU2_TR(0x52f3df);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B52f3e2:{NFSU2_TR(0x52f3e2);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B52f3e4:{NFSU2_TR(0x52f3e4);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f3e7:L52f3e7:{c.instructions+=6;NFSU2_TR(0x52f3e7);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f3ea:{NFSU2_TR(0x52f3ea);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f3ed:{NFSU2_TR(0x52f3ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f3f0:{NFSU2_TR(0x52f3f0);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
}
B52f3f6:{NFSU2_TR(0x52f3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f3f9:{NFSU2_TR(0x52f3f9);
{goto L52f3ff;}
}
B52f3fb:L52f3fb:{c.instructions+=2;NFSU2_TR(0x52f3fb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52f3fd:{NFSU2_TR(0x52f3fd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52f3ff:L52f3ff:{c.instructions+=5;NFSU2_TR(0x52f3ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f402:{NFSU2_TR(0x52f402);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f405:{NFSU2_TR(0x52f405);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f406:{NFSU2_TR(0x52f406);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f407:{NFSU2_TR(0x52f407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f40cull));
TAIL_STATIC(0x51d7f0u,51d);
}
B52f40c:L52f40c:{c.instructions+=5;NFSU2_TR(0x52f40c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f40f:{NFSU2_TR(0x52f40f);
u8 U[4];
w4(U+0,u32(0x45d9c800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f414:{NFSU2_TR(0x52f414);
u8 U[4];
w4(U+0,u32(0x45d9c800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f419:{NFSU2_TR(0x52f419);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f41a:{NFSU2_TR(0x52f41a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f41full));
TAIL_STATIC(0x51d380u,51d);
}
B52f41f:L52f41f:{c.instructions+=4;NFSU2_TR(0x52f41f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52f422:{NFSU2_TR(0x52f422);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B52f425:{NFSU2_TR(0x52f425);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f427:{NFSU2_TR(0x52f427);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52f3acu);}goto L52f3ac;}}
}
B52f429:L52f429:{c.instructions+=2;NFSU2_TR(0x52f429);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B52f42c:{NFSU2_TR(0x52f42c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52f3b0u);}goto L52f3b0;}
}
B52f42e:L52f42e:{c.instructions+=4;NFSU2_TR(0x52f42e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52f430:{NFSU2_TR(0x52f430);
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
B52f432:{NFSU2_TR(0x52f432);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52f433:{NFSU2_TR(0x52f433);
if(r1(R+518)){{goto L52f452;}}
}
B52f435:L52f435:{c.instructions+=7;NFSU2_TR(0x52f435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B52f437:{NFSU2_TR(0x52f437);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f43a:{NFSU2_TR(0x52f43a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B52f43c:{NFSU2_TR(0x52f43c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f43f:{NFSU2_TR(0x52f43f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B52f442:{NFSU2_TR(0x52f442);
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
B52f444:{NFSU2_TR(0x52f444);
if(r1(R+518)){{goto L52f44c;}}
}
B52f446:L52f446:{c.instructions+=3;NFSU2_TR(0x52f446);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52f448:{NFSU2_TR(0x52f448);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f44a:{NFSU2_TR(0x52f44a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f44cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B52f44c:L52f44c:{c.instructions+=3;NFSU2_TR(0x52f44c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52f44e:{NFSU2_TR(0x52f44e);
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
B52f450:{NFSU2_TR(0x52f450);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52f435u);}goto L52f435;}}
}
B52f452:L52f452:{c.instructions+=1;NFSU2_TR(0x52f452);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52f459:L52f459:{c.instructions+=3;NFSU2_TR(0x52f459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52f45a:{NFSU2_TR(0x52f45a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52f45b:{NFSU2_TR(0x52f45b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52f460:L52f460:{c.instructions+=6;NFSU2_TR(0x52f460);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f464:{NFSU2_TR(0x52f464);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f465:{NFSU2_TR(0x52f465);
__builtin_memmove((R+24),(R+4),4);
}
B52f467:{NFSU2_TR(0x52f467);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f468:{NFSU2_TR(0x52f468);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52f46b:{NFSU2_TR(0x52f46b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f470ull));
TAIL_STATIC(0x43be60u,43b);
}
B52f470:L52f470:{c.instructions+=2;NFSU2_TR(0x52f470);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f472:{NFSU2_TR(0x52f472);
if(r1(R+518)){{goto L52f509;}}
}
B52f478:L52f478:{c.instructions+=3;NFSU2_TR(0x52f478);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B52f47b:{NFSU2_TR(0x52f47b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f47d:{NFSU2_TR(0x52f47d);
if(r1(R+518)){{goto L52f509;}}
}
B52f483:L52f483:{c.instructions+=3;NFSU2_TR(0x52f483);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f486:{NFSU2_TR(0x52f486);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52f488:{NFSU2_TR(0x52f488);
if(r1(R+518)){{goto L52f509;}}
}
B52f48a:L52f48a:{c.instructions+=3;NFSU2_TR(0x52f48a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B52f48d:{NFSU2_TR(0x52f48d);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f48f:{NFSU2_TR(0x52f48f);
if(r1(R+518)){{goto L52f498;}}
}
B52f491:L52f491:{c.instructions+=3;NFSU2_TR(0x52f491);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B52f494:{NFSU2_TR(0x52f494);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f496:{NFSU2_TR(0x52f496);
if(r1(R+518)){{goto L52f509;}}
}
B52f498:L52f498:{c.instructions+=12;NFSU2_TR(0x52f498);
__builtin_memmove((R+8),gp(0x799374),4);
}
B52f49e:{NFSU2_TR(0x52f49e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52f4a5:{NFSU2_TR(0x52f4a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f4a8:{NFSU2_TR(0x52f4a8);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52f4ae:{NFSU2_TR(0x52f4ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52f4b2:{NFSU2_TR(0x52f4b2);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f4b8:{NFSU2_TR(0x52f4b8);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f4bb:{NFSU2_TR(0x52f4bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f4be:{NFSU2_TR(0x52f4be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f4c1:{NFSU2_TR(0x52f4c1);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B52f4c7:{NFSU2_TR(0x52f4c7);
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
B52f4c9:{NFSU2_TR(0x52f4c9);
if(r1(R+518)){{goto L52f4dc;}}
}
B52f4cb:L52f4cb:{c.instructions+=2;NFSU2_TR(0x52f4cb);
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
B52f4cd:{NFSU2_TR(0x52f4cd);
if(r1(R+518)){{goto L52f4dc;}}
}
B52f4cf:L52f4cf:{c.instructions+=5;NFSU2_TR(0x52f4cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f4d2:{NFSU2_TR(0x52f4d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f4d5:{NFSU2_TR(0x52f4d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f4d6:{NFSU2_TR(0x52f4d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f4d7:{NFSU2_TR(0x52f4d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f4dcull));
TAIL_STATIC(0x52ce40u,52c);
}
B52f4dc:L52f4dc:{c.instructions+=12;NFSU2_TR(0x52f4dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52f4df:{NFSU2_TR(0x52f4df);
__builtin_memmove((R+0),gp(0x799378),4);
}
B52f4e4:{NFSU2_TR(0x52f4e4);
__builtin_memmove((R+4),gp(0x799374),4);
}
B52f4ea:{NFSU2_TR(0x52f4ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f4ed:{NFSU2_TR(0x52f4ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f4f0:{NFSU2_TR(0x52f4f0);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52f4f6:{NFSU2_TR(0x52f4f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52f4fa:{NFSU2_TR(0x52f4fa);
w1(R+0,u8(0x1ull));
}
B52f4fc:{NFSU2_TR(0x52f4fc);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f502:{NFSU2_TR(0x52f502);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f505:{NFSU2_TR(0x52f505);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52f506:{NFSU2_TR(0x52f506);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52f509:L52f509:{c.instructions+=3;NFSU2_TR(0x52f509);
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
B52f50b:{NFSU2_TR(0x52f50b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52f50c:{NFSU2_TR(0x52f50c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52f510:L52f510:{c.instructions+=6;NFSU2_TR(0x52f510);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f511:{NFSU2_TR(0x52f511);
__builtin_memmove((R+24),(R+4),4);
}
B52f513:{NFSU2_TR(0x52f513);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f517:{NFSU2_TR(0x52f517);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52f51a:{NFSU2_TR(0x52f51a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f51c:{NFSU2_TR(0x52f51c);
if(r1(R+518)){{goto L52f52b;}}
}
B52f51e:L52f51e:{c.instructions+=3;NFSU2_TR(0x52f51e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52f521:{NFSU2_TR(0x52f521);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f523:{NFSU2_TR(0x52f523);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52f52b;}}
}
B52f525:L52f525:{c.instructions+=3;NFSU2_TR(0x52f525);
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
B52f527:{NFSU2_TR(0x52f527);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52f528:{NFSU2_TR(0x52f528);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52f52b:L52f52b:{c.instructions+=13;NFSU2_TR(0x52f52b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f52e:{NFSU2_TR(0x52f52e);
__builtin_memmove((R+8),gp(0x799374),4);
}
B52f534:{NFSU2_TR(0x52f534);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52f53b:{NFSU2_TR(0x52f53b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f53e:{NFSU2_TR(0x52f53e);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52f544:{NFSU2_TR(0x52f544);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52f548:{NFSU2_TR(0x52f548);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f54e:{NFSU2_TR(0x52f54e);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f551:{NFSU2_TR(0x52f551);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f554:{NFSU2_TR(0x52f554);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f557:{NFSU2_TR(0x52f557);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B52f55d:{NFSU2_TR(0x52f55d);
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
B52f55f:{NFSU2_TR(0x52f55f);
if(r1(R+518)){{goto L52f572;}}
}
B52f561:L52f561:{c.instructions+=2;NFSU2_TR(0x52f561);
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
B52f563:{NFSU2_TR(0x52f563);
if(r1(R+518)){{goto L52f572;}}
}
B52f565:L52f565:{c.instructions+=5;NFSU2_TR(0x52f565);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f568:{NFSU2_TR(0x52f568);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f56b:{NFSU2_TR(0x52f56b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f56c:{NFSU2_TR(0x52f56c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f56d:{NFSU2_TR(0x52f56d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f572ull));
TAIL_STATIC(0x52ce40u,52c);
}
B52f572:L52f572:{c.instructions+=12;NFSU2_TR(0x52f572);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52f575:{NFSU2_TR(0x52f575);
__builtin_memmove((R+0),gp(0x799378),4);
}
B52f57a:{NFSU2_TR(0x52f57a);
__builtin_memmove((R+4),gp(0x799374),4);
}
B52f580:{NFSU2_TR(0x52f580);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f583:{NFSU2_TR(0x52f583);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f586:{NFSU2_TR(0x52f586);
{u32 ea_=u32(u32(8802732u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52f58c:{NFSU2_TR(0x52f58c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52f590:{NFSU2_TR(0x52f590);
w1(R+0,u8(0x1ull));
}
B52f592:{NFSU2_TR(0x52f592);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f598:{NFSU2_TR(0x52f598);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f59b:{NFSU2_TR(0x52f59b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52f59c:{NFSU2_TR(0x52f59c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52f5a0:L52f5a0:{c.instructions+=9;NFSU2_TR(0x52f5a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B52f5a3:{NFSU2_TR(0x52f5a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f5a4:{NFSU2_TR(0x52f5a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f5a5:{NFSU2_TR(0x52f5a5);
__builtin_memmove((R+12),(R+4),4);
}
B52f5a7:{NFSU2_TR(0x52f5a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f5aa:{NFSU2_TR(0x52f5aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f5ac:{NFSU2_TR(0x52f5ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f5ad:{NFSU2_TR(0x52f5ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52f5b0:{NFSU2_TR(0x52f5b0);
if(r1(R+518)){{goto L52f5b7;}}
}
B52f5b2:L52f5b2:{c.instructions+=2;NFSU2_TR(0x52f5b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B52f5b5:{NFSU2_TR(0x52f5b5);
{goto L52f5c0;}
}
B52f5b7:L52f5b7:{c.instructions+=2;NFSU2_TR(0x52f5b7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52f5b9:{NFSU2_TR(0x52f5b9);
__builtin_memmove((R+16),(R+16),4);
}
B52f5c0:L52f5c0:{c.instructions+=2;NFSU2_TR(0x52f5c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f5c2:{NFSU2_TR(0x52f5c2);
if(r1(R+518)){{goto L52f5c9;}}
}
B52f5c4:L52f5c4:{c.instructions+=2;NFSU2_TR(0x52f5c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B52f5c7:{NFSU2_TR(0x52f5c7);
{goto L52f5cb;}
}
B52f5c9:L52f5c9:{c.instructions+=1;NFSU2_TR(0x52f5c9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52f5cb:L52f5cb:{c.instructions+=2;NFSU2_TR(0x52f5cb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52f5cd:{NFSU2_TR(0x52f5cd);
if(r1(R+518)){{goto L52f674;}}
}
B52f5d3:L52f5d3:{c.instructions+=9;NFSU2_TR(0x52f5d3);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52f5d9:{NFSU2_TR(0x52f5d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f5dc:{NFSU2_TR(0x52f5dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f5de:{NFSU2_TR(0x52f5de);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52f5e4:{NFSU2_TR(0x52f5e4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f5e8:{NFSU2_TR(0x52f5e8);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52f5ee:{NFSU2_TR(0x52f5ee);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52f5f4:{NFSU2_TR(0x52f5f4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f5f8:{NFSU2_TR(0x52f5f8);
if(r1(R+518)){{goto L52f648;}}
}
B52f5fa:L52f5fa:{c.instructions+=4;NFSU2_TR(0x52f5fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52f5fe:{NFSU2_TR(0x52f5fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f5ff:{NFSU2_TR(0x52f5ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f600:{NFSU2_TR(0x52f600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f605ull));
TAIL_STATIC(0x51d9f0u,51d);
}
B52f605:L52f605:{c.instructions+=3;NFSU2_TR(0x52f605);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52f608:{NFSU2_TR(0x52f608);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f60a:{NFSU2_TR(0x52f60a);
if(r1(R+518)){{goto L52f648;}}
}
B52f60c:L52f60c:{c.instructions+=5;NFSU2_TR(0x52f60c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f610:{NFSU2_TR(0x52f610);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52f614:{NFSU2_TR(0x52f614);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52f616:{NFSU2_TR(0x52f616);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f619:{NFSU2_TR(0x52f619);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52f648;}}
}
B52f61b:L52f61b:{c.instructions+=5;NFSU2_TR(0x52f61b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f61f:{NFSU2_TR(0x52f61f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52f623:{NFSU2_TR(0x52f623);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52f625:{NFSU2_TR(0x52f625);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52f628:{NFSU2_TR(0x52f628);
if(r1(R+514)){{goto L52f648;}}
}
B52f62a:L52f62a:{c.instructions+=5;NFSU2_TR(0x52f62a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f62e:{NFSU2_TR(0x52f62e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52f632:{NFSU2_TR(0x52f632);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52f634:{NFSU2_TR(0x52f634);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f637:{NFSU2_TR(0x52f637);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52f648;}}
}
B52f639:L52f639:{c.instructions+=5;NFSU2_TR(0x52f639);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f63d:{NFSU2_TR(0x52f63d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52f641:{NFSU2_TR(0x52f641);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52f643:{NFSU2_TR(0x52f643);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B52f646:{NFSU2_TR(0x52f646);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L52f65b;}}
}
B52f648:L52f648:{c.instructions+=3;NFSU2_TR(0x52f648);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52f64b:{NFSU2_TR(0x52f64b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f64d:{NFSU2_TR(0x52f64d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52f5b7u);}goto L52f5b7;}}
}
B52f653:L52f653:{c.instructions+=2;NFSU2_TR(0x52f653);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B52f656:{NFSU2_TR(0x52f656);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52f5c0u);}goto L52f5c0;}
}
B52f65b:L52f65b:{c.instructions+=2;NFSU2_TR(0x52f65b);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
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
B52f65e:{NFSU2_TR(0x52f65e);
if(r1(R+518)){{goto L52f674;}}
}
B52f660:L52f660:{c.instructions+=4;NFSU2_TR(0x52f660);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52f662:{NFSU2_TR(0x52f662);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f663:{NFSU2_TR(0x52f663);
__builtin_memmove((R+4),(R+12),4);
}
B52f665:{NFSU2_TR(0x52f665);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f668ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52f668:L52f668:{c.instructions+=7;NFSU2_TR(0x52f668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52f669:{NFSU2_TR(0x52f669);
w1(R+0,u8(0x1ull));
}
B52f66b:{NFSU2_TR(0x52f66b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52f66c:{NFSU2_TR(0x52f66c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2eull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52f66f:{NFSU2_TR(0x52f66f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52f670:{NFSU2_TR(0x52f670);
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
B52f673:{NFSU2_TR(0x52f673);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52f674:L52f674:{c.instructions+=6;NFSU2_TR(0x52f674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52f675:{NFSU2_TR(0x52f675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52f676:{NFSU2_TR(0x52f676);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B52f678:{NFSU2_TR(0x52f678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52f679:{NFSU2_TR(0x52f679);
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
B52f67c:{NFSU2_TR(0x52f67c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52f680:L52f680:{c.instructions+=6;NFSU2_TR(0x52f680);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f681:{NFSU2_TR(0x52f681);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f682:{NFSU2_TR(0x52f682);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f683:{NFSU2_TR(0x52f683);
__builtin_memmove((R+20),(R+4),4);
}
B52f685:{NFSU2_TR(0x52f685);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f688:{NFSU2_TR(0x52f688);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f689:L52f689:{c.instructions+=2;NFSU2_TR(0x52f689);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f68b:{NFSU2_TR(0x52f68b);
if(r1(R+518)){{goto L52f692;}}
}
B52f68d:L52f68d:{c.instructions+=2;NFSU2_TR(0x52f68d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B52f690:{NFSU2_TR(0x52f690);
{goto L52f694;}
}
B52f692:L52f692:{c.instructions+=1;NFSU2_TR(0x52f692);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B52f694:L52f694:{c.instructions+=3;NFSU2_TR(0x52f694);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B52f697:{NFSU2_TR(0x52f697);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f699:{NFSU2_TR(0x52f699);
if(r1(R+518)){{goto L52f6a0;}}
}
B52f69b:L52f69b:{c.instructions+=2;NFSU2_TR(0x52f69b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B52f69e:{NFSU2_TR(0x52f69e);
{goto L52f6a2;}
}
B52f6a0:L52f6a0:{c.instructions+=1;NFSU2_TR(0x52f6a0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52f6a2:L52f6a2:{c.instructions+=2;NFSU2_TR(0x52f6a2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52f6a4:{NFSU2_TR(0x52f6a4);
if(r1(R+518)){{goto L52f700;}}
}
B52f6a6:L52f6a6:{c.instructions+=6;NFSU2_TR(0x52f6a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f6a9:{NFSU2_TR(0x52f6a9);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B52f6af:{NFSU2_TR(0x52f6af);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f6b1:{NFSU2_TR(0x52f6b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52f6b4:{NFSU2_TR(0x52f6b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f6b7:{NFSU2_TR(0x52f6b7);
if(r1(R+518)){{goto L52f6fb;}}
}
B52f6b9:L52f6b9:{c.instructions+=3;NFSU2_TR(0x52f6b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f6ba:{NFSU2_TR(0x52f6ba);
w4(R+4,u32(0x8637b0ull));
}
B52f6bf:{NFSU2_TR(0x52f6bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f6c4ull));
TAIL_STATIC(0x51bb70u,51b);
}
B52f6c4:L52f6c4:{c.instructions+=2;NFSU2_TR(0x52f6c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f6c6:{NFSU2_TR(0x52f6c6);
if(r1(R+518)){{goto L52f6fb;}}
}
B52f6c8:L52f6c8:{c.instructions+=3;NFSU2_TR(0x52f6c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f6cb:{NFSU2_TR(0x52f6cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f6cd:{NFSU2_TR(0x52f6cd);
if(r1(R+518)){{goto L52f6fb;}}
}
B52f6cf:L52f6cf:{c.instructions+=4;NFSU2_TR(0x52f6cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f6d5:{NFSU2_TR(0x52f6d5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52f6d7:{NFSU2_TR(0x52f6d7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f6d9:{NFSU2_TR(0x52f6d9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L52f6fb;}}
}
B52f6db:L52f6db:{c.instructions+=1;NFSU2_TR(0x52f6db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f6e1:L52f6e1:{c.instructions+=3;NFSU2_TR(0x52f6e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52f6e3:{NFSU2_TR(0x52f6e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52f6e6:{NFSU2_TR(0x52f6e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52f6ea;}}
}
B52f6e8:L52f6e8:{c.instructions+=1;NFSU2_TR(0x52f6e8);
__builtin_memmove((R+24),(R+0),4);
}
B52f6ea:L52f6ea:{c.instructions+=3;NFSU2_TR(0x52f6ea);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B52f6ed:{NFSU2_TR(0x52f6ed);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B52f6ee:{NFSU2_TR(0x52f6ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52f6e1u);}goto L52f6e1;}}
}
B52f6f0:L52f6f0:{c.instructions+=2;NFSU2_TR(0x52f6f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f6f2:{NFSU2_TR(0x52f6f2);
if(r1(R+518)){{goto L52f6fb;}}
}
B52f6f4:L52f6f4:{c.instructions+=1;NFSU2_TR(0x52f6f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4000000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B52f6fb:L52f6fb:{c.instructions+=2;NFSU2_TR(0x52f6fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f6fe:{NFSU2_TR(0x52f6fe);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52f689u);}goto L52f689;}
}
B52f700:L52f700:{c.instructions+=4;NFSU2_TR(0x52f700);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52f704:{NFSU2_TR(0x52f704);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52f707:{NFSU2_TR(0x52f707);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f709:{NFSU2_TR(0x52f709);
if(r1(R+518)){{goto L52f71b;}}
}
B52f70b:L52f70b:{c.instructions+=3;NFSU2_TR(0x52f70b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52f70e:{NFSU2_TR(0x52f70e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f710:{NFSU2_TR(0x52f710);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52f71b;}}
}
B52f712:L52f712:{c.instructions+=6;NFSU2_TR(0x52f712);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52f713:{NFSU2_TR(0x52f713);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52f714:{NFSU2_TR(0x52f714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52f715:{NFSU2_TR(0x52f715);
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
B52f717:{NFSU2_TR(0x52f717);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52f718:{NFSU2_TR(0x52f718);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52f71b:L52f71b:{c.instructions+=7;NFSU2_TR(0x52f71b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f71e:{NFSU2_TR(0x52f71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f721:{NFSU2_TR(0x52f721);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f724:{NFSU2_TR(0x52f724);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52f727:{NFSU2_TR(0x52f727);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B52f72d:{NFSU2_TR(0x52f72d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f72f:{NFSU2_TR(0x52f72f);
if(r1(R+518)){{goto L52f77a;}}
}
B52f731:L52f731:{c.instructions+=3;NFSU2_TR(0x52f731);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f732:{NFSU2_TR(0x52f732);
w4(R+4,u32(0x8637b0ull));
}
B52f737:{NFSU2_TR(0x52f737);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f73cull));
TAIL_STATIC(0x51bb70u,51b);
}
B52f73c:L52f73c:{c.instructions+=2;NFSU2_TR(0x52f73c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f73e:{NFSU2_TR(0x52f73e);
if(r1(R+518)){{goto L52f77a;}}
}
B52f740:L52f740:{c.instructions+=3;NFSU2_TR(0x52f740);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f743:{NFSU2_TR(0x52f743);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f745:{NFSU2_TR(0x52f745);
if(r1(R+518)){{goto L52f77a;}}
}
B52f747:L52f747:{c.instructions+=4;NFSU2_TR(0x52f747);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f74d:{NFSU2_TR(0x52f74d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52f74f:{NFSU2_TR(0x52f74f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f751:{NFSU2_TR(0x52f751);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L52f77a;}}
}
B52f753:L52f753:{c.instructions+=2;NFSU2_TR(0x52f753);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f759:{NFSU2_TR(0x52f759);
__builtin_memmove((R+16),(R+16),4);
}
B52f760:L52f760:{c.instructions+=3;NFSU2_TR(0x52f760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52f762:{NFSU2_TR(0x52f762);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52f765:{NFSU2_TR(0x52f765);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52f769;}}
}
B52f767:L52f767:{c.instructions+=1;NFSU2_TR(0x52f767);
__builtin_memmove((R+24),(R+0),4);
}
B52f769:L52f769:{c.instructions+=3;NFSU2_TR(0x52f769);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B52f76c:{NFSU2_TR(0x52f76c);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B52f76d:{NFSU2_TR(0x52f76d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52f760u);}goto L52f760;}}
}
B52f76f:L52f76f:{c.instructions+=2;NFSU2_TR(0x52f76f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f771:{NFSU2_TR(0x52f771);
if(r1(R+518)){{goto L52f77a;}}
}
B52f773:L52f773:{c.instructions+=1;NFSU2_TR(0x52f773);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfbffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B52f77a:L52f77a:{c.instructions+=5;NFSU2_TR(0x52f77a);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B52f780:{NFSU2_TR(0x52f780);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f782:{NFSU2_TR(0x52f782);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f785:{NFSU2_TR(0x52f785);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f788:{NFSU2_TR(0x52f788);
if(r1(R+518)){{goto L52f79b;}}
}
B52f78a:L52f78a:{c.instructions+=2;NFSU2_TR(0x52f78a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f78c:{NFSU2_TR(0x52f78c);
if(r1(R+518)){{goto L52f79b;}}
}
B52f78e:L52f78e:{c.instructions+=5;NFSU2_TR(0x52f78e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f791:{NFSU2_TR(0x52f791);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f794:{NFSU2_TR(0x52f794);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f795:{NFSU2_TR(0x52f795);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f796:{NFSU2_TR(0x52f796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f79bull));
TAIL_STATIC(0x52ce40u,52c);
}
B52f79b:L52f79b:{c.instructions+=3;NFSU2_TR(0x52f79b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f79c:{NFSU2_TR(0x52f79c);
__builtin_memmove((R+4),(R+20),4);
}
B52f79e:{NFSU2_TR(0x52f79e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f7a3ull));
TAIL_STATIC(0x51f820u,51f);
}
B52f7a3:L52f7a3:{c.instructions+=7;NFSU2_TR(0x52f7a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52f7a4:{NFSU2_TR(0x52f7a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52f7a5:{NFSU2_TR(0x52f7a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f7ab:{NFSU2_TR(0x52f7ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52f7ac:{NFSU2_TR(0x52f7ac);
w1(R+0,u8(0x1ull));
}
B52f7ae:{NFSU2_TR(0x52f7ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52f7af:{NFSU2_TR(0x52f7af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52f7c0:L52f7c0:{c.instructions+=6;NFSU2_TR(0x52f7c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f7c1:{NFSU2_TR(0x52f7c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f7c2:{NFSU2_TR(0x52f7c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f7c3:{NFSU2_TR(0x52f7c3);
__builtin_memmove((R+20),(R+4),4);
}
B52f7c5:{NFSU2_TR(0x52f7c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f7c8:{NFSU2_TR(0x52f7c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f7c9:L52f7c9:{c.instructions+=2;NFSU2_TR(0x52f7c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f7cb:{NFSU2_TR(0x52f7cb);
if(r1(R+518)){{goto L52f7d2;}}
}
B52f7cd:L52f7cd:{c.instructions+=2;NFSU2_TR(0x52f7cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+12),(U+0),4);
}
B52f7d0:{NFSU2_TR(0x52f7d0);
{goto L52f7d4;}
}
B52f7d2:L52f7d2:{c.instructions+=1;NFSU2_TR(0x52f7d2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B52f7d4:L52f7d4:{c.instructions+=3;NFSU2_TR(0x52f7d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52f7d7:{NFSU2_TR(0x52f7d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f7d9:{NFSU2_TR(0x52f7d9);
if(r1(R+518)){{goto L52f7e0;}}
}
B52f7db:L52f7db:{c.instructions+=2;NFSU2_TR(0x52f7db);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B52f7de:{NFSU2_TR(0x52f7de);
{goto L52f7e2;}
}
B52f7e0:L52f7e0:{c.instructions+=1;NFSU2_TR(0x52f7e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52f7e2:L52f7e2:{c.instructions+=2;NFSU2_TR(0x52f7e2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52f7e4:{NFSU2_TR(0x52f7e4);
if(r1(R+518)){{goto L52f840;}}
}
B52f7e6:L52f7e6:{c.instructions+=6;NFSU2_TR(0x52f7e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f7e9:{NFSU2_TR(0x52f7e9);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B52f7ef:{NFSU2_TR(0x52f7ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f7f1:{NFSU2_TR(0x52f7f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52f7f4:{NFSU2_TR(0x52f7f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f7f7:{NFSU2_TR(0x52f7f7);
if(r1(R+518)){{goto L52f83b;}}
}
B52f7f9:L52f7f9:{c.instructions+=3;NFSU2_TR(0x52f7f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f7fa:{NFSU2_TR(0x52f7fa);
w4(R+4,u32(0x8637b0ull));
}
B52f7ff:{NFSU2_TR(0x52f7ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f804ull));
TAIL_STATIC(0x51bb70u,51b);
}
B52f804:L52f804:{c.instructions+=2;NFSU2_TR(0x52f804);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f806:{NFSU2_TR(0x52f806);
if(r1(R+518)){{goto L52f83b;}}
}
B52f808:L52f808:{c.instructions+=3;NFSU2_TR(0x52f808);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f80b:{NFSU2_TR(0x52f80b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f80d:{NFSU2_TR(0x52f80d);
if(r1(R+518)){{goto L52f83b;}}
}
B52f80f:L52f80f:{c.instructions+=4;NFSU2_TR(0x52f80f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f815:{NFSU2_TR(0x52f815);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52f817:{NFSU2_TR(0x52f817);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f819:{NFSU2_TR(0x52f819);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L52f83b;}}
}
B52f81b:L52f81b:{c.instructions+=1;NFSU2_TR(0x52f81b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f821:L52f821:{c.instructions+=3;NFSU2_TR(0x52f821);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52f823:{NFSU2_TR(0x52f823);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52f826:{NFSU2_TR(0x52f826);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52f82a;}}
}
B52f828:L52f828:{c.instructions+=1;NFSU2_TR(0x52f828);
__builtin_memmove((R+24),(R+0),4);
}
B52f82a:L52f82a:{c.instructions+=3;NFSU2_TR(0x52f82a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B52f82d:{NFSU2_TR(0x52f82d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B52f82e:{NFSU2_TR(0x52f82e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52f821u);}goto L52f821;}}
}
B52f830:L52f830:{c.instructions+=2;NFSU2_TR(0x52f830);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f832:{NFSU2_TR(0x52f832);
if(r1(R+518)){{goto L52f83b;}}
}
B52f834:L52f834:{c.instructions+=1;NFSU2_TR(0x52f834);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4000000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B52f83b:L52f83b:{c.instructions+=2;NFSU2_TR(0x52f83b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f83e:{NFSU2_TR(0x52f83e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52f7c9u);}goto L52f7c9;}
}
B52f840:L52f840:{c.instructions+=3;NFSU2_TR(0x52f840);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52f844:{NFSU2_TR(0x52f844);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f845:{NFSU2_TR(0x52f845);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f84aull));
TAIL_STATIC(0x43be60u,43b);
}
B52f84a:L52f84a:{c.instructions+=2;NFSU2_TR(0x52f84a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f84c:{NFSU2_TR(0x52f84c);
if(r1(R+518)){{goto L52f8b7;}}
}
B52f84e:L52f84e:{c.instructions+=3;NFSU2_TR(0x52f84e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B52f851:{NFSU2_TR(0x52f851);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f853:{NFSU2_TR(0x52f853);
if(r1(R+518)){{goto L52f8b7;}}
}
B52f855:L52f855:{c.instructions+=2;NFSU2_TR(0x52f855);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52f858:{NFSU2_TR(0x52f858);
if(r1(R+518)){{goto L52f8b7;}}
}
B52f85a:L52f85a:{c.instructions+=3;NFSU2_TR(0x52f85a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B52f85d:{NFSU2_TR(0x52f85d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f85f:{NFSU2_TR(0x52f85f);
if(r1(R+518)){{goto L52f868;}}
}
B52f861:L52f861:{c.instructions+=3;NFSU2_TR(0x52f861);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B52f864:{NFSU2_TR(0x52f864);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52f866:{NFSU2_TR(0x52f866);
if(r1(R+518)){{goto L52f8b7;}}
}
B52f868:L52f868:{c.instructions+=4;NFSU2_TR(0x52f868);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f86b:{NFSU2_TR(0x52f86b);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B52f871:{NFSU2_TR(0x52f871);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f873:{NFSU2_TR(0x52f873);
if(r1(R+518)){{goto L52f88d;}}
}
B52f875:L52f875:{c.instructions+=7;NFSU2_TR(0x52f875);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f878:{NFSU2_TR(0x52f878);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f87b:{NFSU2_TR(0x52f87b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f87e:{NFSU2_TR(0x52f87e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f880:{NFSU2_TR(0x52f880);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f881:{NFSU2_TR(0x52f881);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f882:{NFSU2_TR(0x52f882);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f887ull));
TAIL_STATIC(0x51cc60u,51c);
}
B52f887:L52f887:{c.instructions+=1;NFSU2_TR(0x52f887);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B52f88d:L52f88d:{c.instructions+=4;NFSU2_TR(0x52f88d);
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
B52f88f:{NFSU2_TR(0x52f88f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f892:{NFSU2_TR(0x52f892);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f895:{NFSU2_TR(0x52f895);
if(r1(R+518)){{goto L52f8a8;}}
}
B52f897:L52f897:{c.instructions+=2;NFSU2_TR(0x52f897);
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
B52f899:{NFSU2_TR(0x52f899);
if(r1(R+518)){{goto L52f8a8;}}
}
B52f89b:L52f89b:{c.instructions+=5;NFSU2_TR(0x52f89b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f89e:{NFSU2_TR(0x52f89e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f8a1:{NFSU2_TR(0x52f8a1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f8a2:{NFSU2_TR(0x52f8a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f8a3:{NFSU2_TR(0x52f8a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f8a8ull));
TAIL_STATIC(0x52ce40u,52c);
}
B52f8a8:L52f8a8:{c.instructions+=7;NFSU2_TR(0x52f8a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52f8a9:{NFSU2_TR(0x52f8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f8af:{NFSU2_TR(0x52f8af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52f8b0:{NFSU2_TR(0x52f8b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52f8b1:{NFSU2_TR(0x52f8b1);
w1(R+0,u8(0x1ull));
}
B52f8b3:{NFSU2_TR(0x52f8b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52f8b4:{NFSU2_TR(0x52f8b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52f8b7:L52f8b7:{c.instructions+=6;NFSU2_TR(0x52f8b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52f8b8:{NFSU2_TR(0x52f8b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52f8b9:{NFSU2_TR(0x52f8b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52f8ba:{NFSU2_TR(0x52f8ba);
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
B52f8bc:{NFSU2_TR(0x52f8bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52f8bd:{NFSU2_TR(0x52f8bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52f8c0:L52f8c0:{c.instructions+=7;NFSU2_TR(0x52f8c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B52f8c3:{NFSU2_TR(0x52f8c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f8c4:{NFSU2_TR(0x52f8c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52f8c8:{NFSU2_TR(0x52f8c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f8ca:{NFSU2_TR(0x52f8ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f8cb:{NFSU2_TR(0x52f8cb);
__builtin_memmove((R+28),(R+4),4);
}
B52f8cd:{NFSU2_TR(0x52f8cd);
if(r1(R+518)){{goto L52fa61;}}
}
B52f8d3:L52f8d3:{c.instructions+=9;NFSU2_TR(0x52f8d3);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f8d9:{NFSU2_TR(0x52f8d9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f8da:{NFSU2_TR(0x52f8da);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52f8dd:{NFSU2_TR(0x52f8dd);
{u32 ea_=u32(r4(R+28)+u32(212u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52f8e3:{NFSU2_TR(0x52f8e3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f8e7:{NFSU2_TR(0x52f8e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52f8eb:{NFSU2_TR(0x52f8eb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f8ec:{NFSU2_TR(0x52f8ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f8ed:{NFSU2_TR(0x52f8ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f8f2ull));
TAIL_STATIC(0x50d9c0u,50d);
}
B52f8f2:L52f8f2:{c.instructions+=5;NFSU2_TR(0x52f8f2);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f8f5:{NFSU2_TR(0x52f8f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f8f8:{NFSU2_TR(0x52f8f8);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f8fb:{NFSU2_TR(0x52f8fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52f8fd:{NFSU2_TR(0x52f8fd);
if(r1(R+518)){{goto L52f92e;}}
}
B52f8ff:L52f8ff:{c.instructions+=4;NFSU2_TR(0x52f8ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f902:{NFSU2_TR(0x52f902);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52f903:{NFSU2_TR(0x52f903);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f906:{NFSU2_TR(0x52f906);
if(r1(R+518)){{goto L52f912;}}
}
B52f908:L52f908:{c.instructions+=2;NFSU2_TR(0x52f908);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52f90b:{NFSU2_TR(0x52f90b);
if(r1(R+518)){{goto L52f912;}}
}
B52f90d:L52f90d:{c.instructions+=2;NFSU2_TR(0x52f90d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B52f910:{NFSU2_TR(0x52f910);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52f91a;}}
}
B52f912:L52f912:{c.instructions+=3;NFSU2_TR(0x52f912);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B52f915:{NFSU2_TR(0x52f915);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B52f917:{NFSU2_TR(0x52f917);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f91a:L52f91a:{c.instructions+=6;NFSU2_TR(0x52f91a);
{u32 ea_=u32(r4(R+8)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f91d:{NFSU2_TR(0x52f91d);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f920:{NFSU2_TR(0x52f920);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f923:{NFSU2_TR(0x52f923);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
}
B52f929:{NFSU2_TR(0x52f929);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f92c:{NFSU2_TR(0x52f92c);
{goto L52f932;}
}
B52f92e:L52f92e:{c.instructions+=2;NFSU2_TR(0x52f92e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52f930:{NFSU2_TR(0x52f930);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52f932:L52f932:{c.instructions+=6;NFSU2_TR(0x52f932);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f938:{NFSU2_TR(0x52f938);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f93b:{NFSU2_TR(0x52f93b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f93c:{NFSU2_TR(0x52f93c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f93d:{NFSU2_TR(0x52f93d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f93e:{NFSU2_TR(0x52f93e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f943ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B52f943:L52f943:{c.instructions+=5;NFSU2_TR(0x52f943);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f949:{NFSU2_TR(0x52f949);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52f94c:{NFSU2_TR(0x52f94c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52f94f:{NFSU2_TR(0x52f94f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52f957:{NFSU2_TR(0x52f957);
if(r1(R+518)){{goto L52f9b7;}}
}
B52f959:L52f959:{c.instructions+=2;NFSU2_TR(0x52f959);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52f95a:{NFSU2_TR(0x52f95a);
if(r1(R+518)){{goto L52f988;}}
}
B52f95c:L52f95c:{c.instructions+=2;NFSU2_TR(0x52f95c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B52f95d:{NFSU2_TR(0x52f95d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52f9d5;}}
}
B52f95f:L52f95f:{c.instructions+=7;NFSU2_TR(0x52f95f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f962:{NFSU2_TR(0x52f962);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52f966:{NFSU2_TR(0x52f966);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f967:{NFSU2_TR(0x52f967);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52f96b:{NFSU2_TR(0x52f96b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f96c:{NFSU2_TR(0x52f96c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f96d:{NFSU2_TR(0x52f96d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f972ull));
TAIL_STATIC(0x51d070u,51d);
}
B52f972:L52f972:{c.instructions+=6;NFSU2_TR(0x52f972);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f975:{NFSU2_TR(0x52f975);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f97b:{NFSU2_TR(0x52f97b);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52f97e:{NFSU2_TR(0x52f97e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52f982:{NFSU2_TR(0x52f982);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f986:{NFSU2_TR(0x52f986);
{goto L52f9d2;}
}
B52f988:L52f988:{c.instructions+=7;NFSU2_TR(0x52f988);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f98b:{NFSU2_TR(0x52f98b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52f98f:{NFSU2_TR(0x52f98f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f990:{NFSU2_TR(0x52f990);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52f994:{NFSU2_TR(0x52f994);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f995:{NFSU2_TR(0x52f995);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f996:{NFSU2_TR(0x52f996);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f99bull));
TAIL_STATIC(0x51d070u,51d);
}
B52f99b:L52f99b:{c.instructions+=7;NFSU2_TR(0x52f99b);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f99e:{NFSU2_TR(0x52f99e);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f9a4:{NFSU2_TR(0x52f9a4);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B52f9a7:{NFSU2_TR(0x52f9a7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f9ad:{NFSU2_TR(0x52f9ad);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52f9b1:{NFSU2_TR(0x52f9b1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f9b5:{NFSU2_TR(0x52f9b5);
{goto L52f9d2;}
}
B52f9b7:L52f9b7:{c.instructions+=7;NFSU2_TR(0x52f9b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52f9ba:{NFSU2_TR(0x52f9ba);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52f9be:{NFSU2_TR(0x52f9be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f9bf:{NFSU2_TR(0x52f9bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52f9c3:{NFSU2_TR(0x52f9c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f9c4:{NFSU2_TR(0x52f9c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f9c5:{NFSU2_TR(0x52f9c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52f9caull));
TAIL_STATIC(0x51d070u,51d);
}
B52f9ca:L52f9ca:{c.instructions+=2;NFSU2_TR(0x52f9ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52f9ce:{NFSU2_TR(0x52f9ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52f9d2:L52f9d2:{c.instructions+=1;NFSU2_TR(0x52f9d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52f9d5:L52f9d5:{c.instructions+=2;NFSU2_TR(0x52f9d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52f9d8:{NFSU2_TR(0x52f9d8);
if(r1(R+518)){{goto L52fa27;}}
}
B52f9da:L52f9da:{c.instructions+=11;NFSU2_TR(0x52f9da);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f9dd:{NFSU2_TR(0x52f9dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52f9e0:{NFSU2_TR(0x52f9e0);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f9e6:{NFSU2_TR(0x52f9e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f9e7:{NFSU2_TR(0x52f9e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B52f9ea:{NFSU2_TR(0x52f9ea);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f9ee:{NFSU2_TR(0x52f9ee);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52f9f1:{NFSU2_TR(0x52f9f1);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52f9f7:{NFSU2_TR(0x52f9f7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52f9fa:{NFSU2_TR(0x52f9fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52f9fb:{NFSU2_TR(0x52f9fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fa00ull));
TAIL_STATIC(0x50cb00u,50c);
}
B52fa00:L52fa00:{c.instructions+=7;NFSU2_TR(0x52fa00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52fa03:{NFSU2_TR(0x52fa03);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52fa07:{NFSU2_TR(0x52fa07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fa08:{NFSU2_TR(0x52fa08);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B52fa0c:{NFSU2_TR(0x52fa0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fa0d:{NFSU2_TR(0x52fa0d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fa0e:{NFSU2_TR(0x52fa0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fa13ull));
TAIL_STATIC(0x51d070u,51d);
}
B52fa13:L52fa13:{c.instructions+=6;NFSU2_TR(0x52fa13);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fa17:{NFSU2_TR(0x52fa17);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52fa1b:{NFSU2_TR(0x52fa1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fa1c:{NFSU2_TR(0x52fa1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fa1d:{NFSU2_TR(0x52fa1d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fa1e:{NFSU2_TR(0x52fa1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fa23ull));
TAIL_STATIC(0x51d380u,51d);
}
B52fa23:L52fa23:{c.instructions+=2;NFSU2_TR(0x52fa23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B52fa26:{NFSU2_TR(0x52fa26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52fa27:L52fa27:{c.instructions+=3;NFSU2_TR(0x52fa27);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52fa2d:{NFSU2_TR(0x52fa2d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52fa2f:{NFSU2_TR(0x52fa2f);
if(r1(R+518)){{goto L52fa60;}}
}
B52fa31:L52fa31:{c.instructions+=10;NFSU2_TR(0x52fa31);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52fa34:{NFSU2_TR(0x52fa34);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52fa3a:{NFSU2_TR(0x52fa3a);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52fa40:{NFSU2_TR(0x52fa40);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fa46:{NFSU2_TR(0x52fa46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fa47:{NFSU2_TR(0x52fa47);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52fa4a:{NFSU2_TR(0x52fa4a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fa4b:{NFSU2_TR(0x52fa4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fa4c:{NFSU2_TR(0x52fa4c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fa4d:{NFSU2_TR(0x52fa4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fa52ull));
TAIL_STATIC(0x50d8d0u,50d);
}
B52fa52:L52fa52:{c.instructions+=5;NFSU2_TR(0x52fa52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52fa55:{NFSU2_TR(0x52fa55);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52fa58:{NFSU2_TR(0x52fa58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fa59:{NFSU2_TR(0x52fa59);
__builtin_memmove((R+4),(R+28),4);
}
B52fa5b:{NFSU2_TR(0x52fa5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fa60ull));
TAIL_STATIC(0x51fd60u,51f);
}
B52fa60:L52fa60:{c.instructions+=1;NFSU2_TR(0x52fa60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52fa61:L52fa61:{c.instructions+=4;NFSU2_TR(0x52fa61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52fa62:{NFSU2_TR(0x52fa62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52fa63:{NFSU2_TR(0x52fa63);
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
B52fa66:{NFSU2_TR(0x52fa66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52fa70:L52fa70:{c.instructions+=6;NFSU2_TR(0x52fa70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fa74:{NFSU2_TR(0x52fa74);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52fa77:{NFSU2_TR(0x52fa77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fa78:{NFSU2_TR(0x52fa78);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fa79:{NFSU2_TR(0x52fa79);
__builtin_memmove((R+24),(R+4),4);
}
B52fa7b:{NFSU2_TR(0x52fa7b);
if(r1(R+518)){{goto L52faa6;}}
}
B52fa7d:L52fa7d:{c.instructions+=2;NFSU2_TR(0x52fa7d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52fa80:{NFSU2_TR(0x52fa80);
if(r1(R+518)){{goto L52faa6;}}
}
B52fa82:L52fa82:{c.instructions+=2;NFSU2_TR(0x52fa82);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52fa85:{NFSU2_TR(0x52fa85);
if(r1(R+518)){{goto L52fa90;}}
}
B52fa87:L52fa87:{c.instructions+=2;NFSU2_TR(0x52fa87);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52fa8a:{NFSU2_TR(0x52fa8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52fb30;}}
}
B52fa90:L52fa90:{c.instructions+=3;NFSU2_TR(0x52fa90);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52fa93:{NFSU2_TR(0x52fa93);
__builtin_memmove((R+4),(R+28),4);
}
B52fa95:{NFSU2_TR(0x52fa95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fa9aull));
TAIL_STATIC(0x527660u,527);
}
B52fa9a:L52fa9a:{c.instructions+=2;NFSU2_TR(0x52fa9a);
__builtin_memmove((R+4),(R+28),4);
}
B52fa9c:{NFSU2_TR(0x52fa9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52faa1ull));
TAIL_STATIC(0x495810u,495);
}
B52faa1:L52faa1:{c.instructions+=1;NFSU2_TR(0x52faa1);
{goto L52fb30;}
}
B52faa6:L52faa6:{c.instructions+=3;NFSU2_TR(0x52faa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52faac:{NFSU2_TR(0x52faac);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52faae:{NFSU2_TR(0x52faae);
if(r1(R+518)){{goto L52faeb;}}
}
B52fab0:L52fab0:{c.instructions+=2;NFSU2_TR(0x52fab0);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fab5:{NFSU2_TR(0x52fab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fabaull));
TAIL_STATIC(0x50b9c0u,50b);
}
B52faba:L52faba:{c.instructions+=3;NFSU2_TR(0x52faba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52fabd:{NFSU2_TR(0x52fabd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fabf:{NFSU2_TR(0x52fabf);
if(r1(R+518)){{goto L52fad5;}}
}
B52fac1:L52fac1:{c.instructions+=3;NFSU2_TR(0x52fac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52fac4:{NFSU2_TR(0x52fac4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fac6:{NFSU2_TR(0x52fac6);
if(r1(R+518)){{goto L52fad5;}}
}
B52fac8:L52fac8:{c.instructions+=2;NFSU2_TR(0x52fac8);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52facb:{NFSU2_TR(0x52facb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52fad5;}}
}
B52facd:L52facd:{c.instructions+=3;NFSU2_TR(0x52facd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fad0:{NFSU2_TR(0x52fad0);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52fad3:{NFSU2_TR(0x52fad3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52faeb;}}
}
B52fad5:L52fad5:{c.instructions+=5;NFSU2_TR(0x52fad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52fadb:{NFSU2_TR(0x52fadb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fadd:{NFSU2_TR(0x52fadd);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fae2:{NFSU2_TR(0x52fae2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fae3:{NFSU2_TR(0x52fae3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fae8ull));
TAIL_STATIC(0x51cf70u,51c);
}
B52fae8:L52fae8:{c.instructions+=1;NFSU2_TR(0x52fae8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52faeb:L52faeb:{c.instructions+=3;NFSU2_TR(0x52faeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52faf1:{NFSU2_TR(0x52faf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52faf3:{NFSU2_TR(0x52faf3);
if(r1(R+518)){{goto L52fb30;}}
}
B52faf5:L52faf5:{c.instructions+=2;NFSU2_TR(0x52faf5);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fafa:{NFSU2_TR(0x52fafa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52faffull));
TAIL_STATIC(0x50b9c0u,50b);
}
B52faff:L52faff:{c.instructions+=3;NFSU2_TR(0x52faff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52fb02:{NFSU2_TR(0x52fb02);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fb04:{NFSU2_TR(0x52fb04);
if(r1(R+518)){{goto L52fb1a;}}
}
B52fb06:L52fb06:{c.instructions+=3;NFSU2_TR(0x52fb06);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52fb09:{NFSU2_TR(0x52fb09);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fb0b:{NFSU2_TR(0x52fb0b);
if(r1(R+518)){{goto L52fb1a;}}
}
B52fb0d:L52fb0d:{c.instructions+=2;NFSU2_TR(0x52fb0d);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52fb10:{NFSU2_TR(0x52fb10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52fb1a;}}
}
B52fb12:L52fb12:{c.instructions+=3;NFSU2_TR(0x52fb12);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52fb15:{NFSU2_TR(0x52fb15);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52fb18:{NFSU2_TR(0x52fb18);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52fb30;}}
}
B52fb1a:L52fb1a:{c.instructions+=5;NFSU2_TR(0x52fb1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fb20:{NFSU2_TR(0x52fb20);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fb22:{NFSU2_TR(0x52fb22);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fb27:{NFSU2_TR(0x52fb27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fb28:{NFSU2_TR(0x52fb28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fb2dull));
TAIL_STATIC(0x51cf70u,51c);
}
B52fb2d:L52fb2d:{c.instructions+=1;NFSU2_TR(0x52fb2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52fb30:L52fb30:{c.instructions+=3;NFSU2_TR(0x52fb30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fb33:{NFSU2_TR(0x52fb33);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fb35:{NFSU2_TR(0x52fb35);
if(r1(R+518)){{goto L52fb3c;}}
}
B52fb37:L52fb37:{c.instructions+=2;NFSU2_TR(0x52fb37);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B52fb3a:{NFSU2_TR(0x52fb3a);
{goto L52fb3e;}
}
B52fb3c:L52fb3c:{c.instructions+=1;NFSU2_TR(0x52fb3c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52fb3e:L52fb3e:{c.instructions+=3;NFSU2_TR(0x52fb3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52fb41:{NFSU2_TR(0x52fb41);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52fb43:{NFSU2_TR(0x52fb43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52fb59;}}
}
B52fb45:L52fb45:{c.instructions+=3;NFSU2_TR(0x52fb45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52fb4b:{NFSU2_TR(0x52fb4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fb4c:{NFSU2_TR(0x52fb4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fb51ull));
TAIL_STATIC(0x50ca00u,50c);
}
B52fb51:L52fb51:{c.instructions+=4;NFSU2_TR(0x52fb51);
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
B52fb54:{NFSU2_TR(0x52fb54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52fb55:{NFSU2_TR(0x52fb55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52fb56:{NFSU2_TR(0x52fb56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52fb59:L52fb59:{c.instructions+=3;NFSU2_TR(0x52fb59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fb5c:{NFSU2_TR(0x52fb5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fb5e:{NFSU2_TR(0x52fb5e);
if(r1(R+518)){{goto L52fb65;}}
}
B52fb60:L52fb60:{c.instructions+=2;NFSU2_TR(0x52fb60);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B52fb63:{NFSU2_TR(0x52fb63);
{goto L52fb67;}
}
B52fb65:L52fb65:{c.instructions+=1;NFSU2_TR(0x52fb65);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52fb67:L52fb67:{c.instructions+=2;NFSU2_TR(0x52fb67);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52fb69:{NFSU2_TR(0x52fb69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52fb7f;}}
}
B52fb6b:L52fb6b:{c.instructions+=3;NFSU2_TR(0x52fb6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52fb71:{NFSU2_TR(0x52fb71);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fb72:{NFSU2_TR(0x52fb72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fb77ull));
TAIL_STATIC(0x50ca00u,50c);
}
B52fb77:L52fb77:{c.instructions+=4;NFSU2_TR(0x52fb77);
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
B52fb7a:{NFSU2_TR(0x52fb7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52fb7b:{NFSU2_TR(0x52fb7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52fb7c:{NFSU2_TR(0x52fb7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52fb7f:L52fb7f:{c.instructions+=3;NFSU2_TR(0x52fb7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fb85:{NFSU2_TR(0x52fb85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fb86:{NFSU2_TR(0x52fb86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fb8bull));
TAIL_STATIC(0x50ca50u,50c);
}
B52fb8b:L52fb8b:{c.instructions+=3;NFSU2_TR(0x52fb8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52fb91:{NFSU2_TR(0x52fb91);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fb92:{NFSU2_TR(0x52fb92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fb97ull));
TAIL_STATIC(0x50ca50u,50c);
}
B52fb97:L52fb97:{c.instructions+=4;NFSU2_TR(0x52fb97);
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
B52fb9a:{NFSU2_TR(0x52fb9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52fb9b:{NFSU2_TR(0x52fb9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52fb9c:{NFSU2_TR(0x52fb9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52fba0:L52fba0:{c.instructions+=5;NFSU2_TR(0x52fba0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fba1:{NFSU2_TR(0x52fba1);
__builtin_memmove((R+24),(R+4),4);
}
B52fba3:{NFSU2_TR(0x52fba3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52fba9:{NFSU2_TR(0x52fba9);
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
B52fbab:{NFSU2_TR(0x52fbab);
if(r1(R+518)){{goto L52fbe1;}}
}
B52fbad:L52fbad:{c.instructions+=4;NFSU2_TR(0x52fbad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fbb0:{NFSU2_TR(0x52fbb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fbb1:{NFSU2_TR(0x52fbb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52fbb5:{NFSU2_TR(0x52fbb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fbbaull));
TAIL_STATIC(0x52cef0u,52c);
}
B52fbba:L52fbba:{c.instructions+=11;NFSU2_TR(0x52fbba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52fbbd:{NFSU2_TR(0x52fbbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52fbc0:{NFSU2_TR(0x52fbc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fbc1:{NFSU2_TR(0x52fbc1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fbc2:{NFSU2_TR(0x52fbc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fbc3:{NFSU2_TR(0x52fbc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52fbc6:{NFSU2_TR(0x52fbc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52fbc9:{NFSU2_TR(0x52fbc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fbcc:{NFSU2_TR(0x52fbcc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fbcd:{NFSU2_TR(0x52fbcd);
u8 U[4];
w4(U+0,u32(0x79b958ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fbd2:{NFSU2_TR(0x52fbd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fbd7ull));
TAIL_STATIC(0x50d510u,50d);
}
B52fbd7:L52fbd7:{c.instructions+=2;NFSU2_TR(0x52fbd7);
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
B52fbda:{NFSU2_TR(0x52fbda);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52fbe1:L52fbe1:{c.instructions+=2;NFSU2_TR(0x52fbe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52fbe2:{NFSU2_TR(0x52fbe2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52fbf0:L52fbf0:{c.instructions+=6;NFSU2_TR(0x52fbf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fbf1:{NFSU2_TR(0x52fbf1);
__builtin_memmove((R+24),(R+4),4);
}
B52fbf3:{NFSU2_TR(0x52fbf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fbf6:{NFSU2_TR(0x52fbf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fbf7:{NFSU2_TR(0x52fbf7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52fbfb:{NFSU2_TR(0x52fbfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fc00ull));
TAIL_STATIC(0x52cef0u,52c);
}
B52fc00:L52fc00:{c.instructions+=9;NFSU2_TR(0x52fc00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52fc03:{NFSU2_TR(0x52fc03);
__builtin_memmove((R+4),(R+0),4);
}
B52fc05:{NFSU2_TR(0x52fc05);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fc08:{NFSU2_TR(0x52fc08);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fc0a:{NFSU2_TR(0x52fc0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fc0b:{NFSU2_TR(0x52fc0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fc0c:{NFSU2_TR(0x52fc0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fc0d:{NFSU2_TR(0x52fc0d);
u8 U[4];
w4(U+0,u32(0x79b998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fc12:{NFSU2_TR(0x52fc12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fc17ull));
TAIL_STATIC(0x50d510u,50d);
}
B52fc17:L52fc17:{c.instructions+=6;NFSU2_TR(0x52fc17);
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
B52fc1a:{NFSU2_TR(0x52fc1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52fc21:{NFSU2_TR(0x52fc21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52fc28:{NFSU2_TR(0x52fc28);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52fc2f:{NFSU2_TR(0x52fc2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52fc30:{NFSU2_TR(0x52fc30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52fc40:L52fc40:{c.instructions+=13;NFSU2_TR(0x52fc40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B52fc43:{NFSU2_TR(0x52fc43);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52fc49:{NFSU2_TR(0x52fc49);
__builtin_memmove((R+0),gp(0x8763f0),1);
}
B52fc4e:{NFSU2_TR(0x52fc4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fc4f:{NFSU2_TR(0x52fc4f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52fc51:{NFSU2_TR(0x52fc51);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52fc57:{NFSU2_TR(0x52fc57);
w4(R+0,u32(m1(0x8763f2)));
}
B52fc5e:{NFSU2_TR(0x52fc5e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52fc62:{NFSU2_TR(0x52fc62);
__builtin_memmove((R+24),(R+4),4);
}
B52fc64:{NFSU2_TR(0x52fc64);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52fc6a:{NFSU2_TR(0x52fc6a);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B52fc70:{NFSU2_TR(0x52fc70);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52fc74:{NFSU2_TR(0x52fc74);
if(r1(R+518)){{goto L52fc7d;}}
}
B52fc76:L52fc76:{c.instructions+=1;NFSU2_TR(0x52fc76);
w4(R+0,u32(m1(0x8763f5)));
}
B52fc7d:L52fc7d:{c.instructions+=2;NFSU2_TR(0x52fc7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fc7f:{NFSU2_TR(0x52fc7f);
if(r1(R+518)){{goto L52fcaf;}}
}
B52fc81:L52fc81:{c.instructions+=3;NFSU2_TR(0x52fc81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52fc84:{NFSU2_TR(0x52fc84);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fc86:{NFSU2_TR(0x52fc86);
if(r1(R+518)){{goto L52fd33;}}
}
B52fc8c:L52fc8c:{c.instructions+=3;NFSU2_TR(0x52fc8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52fc8f:{NFSU2_TR(0x52fc8f);
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
B52fc91:{NFSU2_TR(0x52fc91);
if(r1(R+518)){{goto L52fd33;}}
}
B52fc97:L52fc97:{c.instructions+=8;NFSU2_TR(0x52fc97);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52fc9b:{NFSU2_TR(0x52fc9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52fc9d:{NFSU2_TR(0x52fc9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fc9e:{NFSU2_TR(0x52fc9e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52fca2:{NFSU2_TR(0x52fca2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fca3:{NFSU2_TR(0x52fca3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52fca6:{NFSU2_TR(0x52fca6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fca7:{NFSU2_TR(0x52fca7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fcaaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52fcaa:L52fcaa:{c.instructions+=3;NFSU2_TR(0x52fcaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52fcab:{NFSU2_TR(0x52fcab);
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
B52fcae:{NFSU2_TR(0x52fcae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52fcaf:L52fcaf:{c.instructions+=3;NFSU2_TR(0x52fcaf);
__builtin_memmove((R+0),gp(0x8763ec),4);
}
B52fcb4:{NFSU2_TR(0x52fcb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fcb6:{NFSU2_TR(0x52fcb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52fd33;}}
}
B52fcb8:L52fcb8:{c.instructions+=3;NFSU2_TR(0x52fcb8);
__builtin_memmove((R+0),gp(0x8763e4),4);
}
B52fcbd:{NFSU2_TR(0x52fcbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fcbf:{NFSU2_TR(0x52fcbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52fcca;}}
}
B52fcc1:L52fcc1:{c.instructions+=3;NFSU2_TR(0x52fcc1);
__builtin_memmove((R+0),gp(0x8763e8),4);
}
B52fcc6:{NFSU2_TR(0x52fcc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fcc8:{NFSU2_TR(0x52fcc8);
if(r1(R+518)){{goto L52fd33;}}
}
B52fcca:L52fcca:{c.instructions+=8;NFSU2_TR(0x52fcca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fccb:{NFSU2_TR(0x52fccb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52fccf:{NFSU2_TR(0x52fccf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fcd0:{NFSU2_TR(0x52fcd0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52fcd4:{NFSU2_TR(0x52fcd4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fcd5:{NFSU2_TR(0x52fcd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fcd6:{NFSU2_TR(0x52fcd6);
__builtin_memmove((R+4),(R+24),4);
}
B52fcd8:{NFSU2_TR(0x52fcd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fcddull));
TAIL_STATIC(0x51fea0u,51f);
}
B52fcdd:L52fcdd:{c.instructions+=2;NFSU2_TR(0x52fcdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fcdf:{NFSU2_TR(0x52fcdf);
if(r1(R+518)){{goto L52fcfc;}}
}
B52fce1:L52fce1:{c.instructions+=2;NFSU2_TR(0x52fce1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B52fce4:{NFSU2_TR(0x52fce4);
if(r1(R+518)){{goto L52fd31;}}
}
B52fce6:L52fce6:{c.instructions+=3;NFSU2_TR(0x52fce6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B52fce9:{NFSU2_TR(0x52fce9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52fceb:{NFSU2_TR(0x52fceb);
if(r1(R+518)){{goto L52fd31;}}
}
B52fced:L52fced:{c.instructions+=3;NFSU2_TR(0x52fced);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fcee:{NFSU2_TR(0x52fcee);
__builtin_memmove((R+4),(R+24),4);
}
B52fcf0:{NFSU2_TR(0x52fcf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fcf5ull));
TAIL_STATIC(0x50db10u,50d);
}
B52fcf5:L52fcf5:{c.instructions+=5;NFSU2_TR(0x52fcf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52fcf6:{NFSU2_TR(0x52fcf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52fcf7:{NFSU2_TR(0x52fcf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52fcf8:{NFSU2_TR(0x52fcf8);
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
B52fcfb:{NFSU2_TR(0x52fcfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52fcfc:L52fcfc:{c.instructions+=5;NFSU2_TR(0x52fcfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fcff:{NFSU2_TR(0x52fcff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fd00:{NFSU2_TR(0x52fd00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fd01:{NFSU2_TR(0x52fd01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fd02:{NFSU2_TR(0x52fd02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fd07ull));
TAIL_STATIC(0x52d020u,52d);
}
B52fd07:L52fd07:{c.instructions+=3;NFSU2_TR(0x52fd07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B52fd0a:{NFSU2_TR(0x52fd0a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52fd0c:{NFSU2_TR(0x52fd0c);
if(r1(R+518)){{goto L52fd31;}}
}
B52fd0e:L52fd0e:{c.instructions+=3;NFSU2_TR(0x52fd0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52fd11:{NFSU2_TR(0x52fd11);
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
B52fd13:{NFSU2_TR(0x52fd13);
if(r1(R+518)){{goto L52fd21;}}
}
B52fd15:L52fd15:{c.instructions+=2;NFSU2_TR(0x52fd15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52fd17:{NFSU2_TR(0x52fd17);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fd1aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52fd1a:L52fd1a:{c.instructions+=1;NFSU2_TR(0x52fd1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52fd21:L52fd21:{c.instructions+=5;NFSU2_TR(0x52fd21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fd24:{NFSU2_TR(0x52fd24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52fd27:{NFSU2_TR(0x52fd27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fd28:{NFSU2_TR(0x52fd28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fd29:{NFSU2_TR(0x52fd29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fd2eull));
TAIL_STATIC(0x52cec0u,52c);
}
B52fd2e:L52fd2e:{c.instructions+=1;NFSU2_TR(0x52fd2e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52fd31:L52fd31:{c.instructions+=2;NFSU2_TR(0x52fd31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52fd32:{NFSU2_TR(0x52fd32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52fd33:L52fd33:{c.instructions+=3;NFSU2_TR(0x52fd33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52fd34:{NFSU2_TR(0x52fd34);
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
B52fd37:{NFSU2_TR(0x52fd37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52fd40:L52fd40:{c.instructions+=8;NFSU2_TR(0x52fd40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fd41:{NFSU2_TR(0x52fd41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fd42:{NFSU2_TR(0x52fd42);
__builtin_memmove((R+12),(R+4),4);
}
B52fd44:{NFSU2_TR(0x52fd44);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fd47:{NFSU2_TR(0x52fd47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fd49:{NFSU2_TR(0x52fd49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fd4a:{NFSU2_TR(0x52fd4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B52fd4d:{NFSU2_TR(0x52fd4d);
if(r1(R+518)){{goto L52fd54;}}
}
B52fd4f:L52fd4f:{c.instructions+=2;NFSU2_TR(0x52fd4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B52fd52:{NFSU2_TR(0x52fd52);
{goto L52fd56;}
}
B52fd54:L52fd54:{c.instructions+=1;NFSU2_TR(0x52fd54);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52fd56:L52fd56:{c.instructions+=2;NFSU2_TR(0x52fd56);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fd58:{NFSU2_TR(0x52fd58);
if(r1(R+518)){{goto L52fd5f;}}
}
B52fd5a:L52fd5a:{c.instructions+=2;NFSU2_TR(0x52fd5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B52fd5d:{NFSU2_TR(0x52fd5d);
{goto L52fd61;}
}
B52fd5f:L52fd5f:{c.instructions+=1;NFSU2_TR(0x52fd5f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52fd61:L52fd61:{c.instructions+=2;NFSU2_TR(0x52fd61);
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
B52fd63:{NFSU2_TR(0x52fd63);
if(r1(R+518)){{goto L52fd7f;}}
}
B52fd65:L52fd65:{c.instructions+=3;NFSU2_TR(0x52fd65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52fd67:{NFSU2_TR(0x52fd67);
__builtin_memmove((R+4),(R+24),4);
}
B52fd69:{NFSU2_TR(0x52fd69);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fd6cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52fd6c:L52fd6c:{c.instructions+=3;NFSU2_TR(0x52fd6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52fd6e:{NFSU2_TR(0x52fd6e);
__builtin_memmove((R+4),(R+24),4);
}
B52fd70:{NFSU2_TR(0x52fd70);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fd73ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52fd73:L52fd73:{c.instructions+=3;NFSU2_TR(0x52fd73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52fd76:{NFSU2_TR(0x52fd76);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fd78:{NFSU2_TR(0x52fd78);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52fd54u);}goto L52fd54;}}
}
B52fd7a:L52fd7a:{c.instructions+=2;NFSU2_TR(0x52fd7a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B52fd7d:{NFSU2_TR(0x52fd7d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52fd56u);}goto L52fd56;}
}
B52fd7f:L52fd7f:{c.instructions+=2;NFSU2_TR(0x52fd7f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B52fd81:{NFSU2_TR(0x52fd81);
if(r1(R+518)){{goto L52fda0;}}
}
B52fd83:L52fd83:{c.instructions+=8;NFSU2_TR(0x52fd83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52fd85:{NFSU2_TR(0x52fd85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B52fd87:{NFSU2_TR(0x52fd87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52fd8a:{NFSU2_TR(0x52fd8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B52fd8c:{NFSU2_TR(0x52fd8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52fd8f:{NFSU2_TR(0x52fd8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B52fd92:{NFSU2_TR(0x52fd92);
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
B52fd94:{NFSU2_TR(0x52fd94);
if(r1(R+518)){{goto L52fd9c;}}
}
B52fd96:L52fd96:{c.instructions+=3;NFSU2_TR(0x52fd96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52fd98:{NFSU2_TR(0x52fd98);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fd9a:{NFSU2_TR(0x52fd9a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fd9cull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B52fd9c:L52fd9c:{c.instructions+=2;NFSU2_TR(0x52fd9c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B52fd9e:{NFSU2_TR(0x52fd9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52fd83u);}goto L52fd83;}}
}
B52fda0:L52fda0:{c.instructions+=5;NFSU2_TR(0x52fda0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52fda1:{NFSU2_TR(0x52fda1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52fda2:{NFSU2_TR(0x52fda2);
__builtin_memmove((R+4),(R+12),4);
}
B52fda4:{NFSU2_TR(0x52fda4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52fda5:{NFSU2_TR(0x52fda5);
TAIL_STATIC(0x51ff80u,51f);
}
B52fdb0:L52fdb0:{c.instructions+=10;NFSU2_TR(0x52fdb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B52fdb3:{NFSU2_TR(0x52fdb3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fdb4:{NFSU2_TR(0x52fdb4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fdb5:{NFSU2_TR(0x52fdb5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fdb6:{NFSU2_TR(0x52fdb6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fdb7:{NFSU2_TR(0x52fdb7);
__builtin_memmove((R+28),(R+4),4);
}
B52fdb9:{NFSU2_TR(0x52fdb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fdbc:{NFSU2_TR(0x52fdbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fdbd:{NFSU2_TR(0x52fdbd);
w4(R+12,u32(0x1ull));
}
B52fdc2:{NFSU2_TR(0x52fdc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fdc7ull));
TAIL_STATIC(0x520020u,520);
}
B52fdc7:L52fdc7:{c.instructions+=7;NFSU2_TR(0x52fdc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52fdcd:{NFSU2_TR(0x52fdcd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+20),(U+0),4);
}
B52fdd0:{NFSU2_TR(0x52fdd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52fdd4:{NFSU2_TR(0x52fdd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52fdd7:{NFSU2_TR(0x52fdd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fdd9:{NFSU2_TR(0x52fdd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52fddd:{NFSU2_TR(0x52fddd);
if(r1(R+518)){{goto L52fde4;}}
}
B52fddf:L52fddf:{c.instructions+=2;NFSU2_TR(0x52fddf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B52fde2:{NFSU2_TR(0x52fde2);
{goto L52fde6;}
}
B52fde4:L52fde4:{c.instructions+=1;NFSU2_TR(0x52fde4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52fde6:L52fde6:{c.instructions+=2;NFSU2_TR(0x52fde6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fde8:{NFSU2_TR(0x52fde8);
if(r1(R+518)){{goto L52fdef;}}
}
B52fdea:L52fdea:{c.instructions+=2;NFSU2_TR(0x52fdea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B52fded:{NFSU2_TR(0x52fded);
{goto L52fdf1;}
}
B52fdef:L52fdef:{c.instructions+=1;NFSU2_TR(0x52fdef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52fdf1:L52fdf1:{c.instructions+=2;NFSU2_TR(0x52fdf1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52fdf3:{NFSU2_TR(0x52fdf3);
if(r1(R+518)){{goto L52fe53;}}
}
B52fdf5:L52fdf5:{c.instructions+=3;NFSU2_TR(0x52fdf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fdf9:{NFSU2_TR(0x52fdf9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52fdfb:{NFSU2_TR(0x52fdfb);
if(r1(R+512)){{goto L52fe33;}}
}
B52fdfd:L52fdfd:{c.instructions+=4;NFSU2_TR(0x52fdfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52fe03:{NFSU2_TR(0x52fe03);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B52fe05:{NFSU2_TR(0x52fe05);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52fe07:{NFSU2_TR(0x52fe07);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L52fe33;}}
}
B52fe09:L52fe09:{c.instructions+=3;NFSU2_TR(0x52fe09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52fe0b:{NFSU2_TR(0x52fe0b);
__builtin_memmove((R+4),(R+24),4);
}
B52fe0d:{NFSU2_TR(0x52fe0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fe10ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52fe10:L52fe10:{c.instructions+=5;NFSU2_TR(0x52fe10);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52fe14:{NFSU2_TR(0x52fe14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52fe16:{NFSU2_TR(0x52fe16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fe17:{NFSU2_TR(0x52fe17);
__builtin_memmove((R+4),(R+24),4);
}
B52fe19:{NFSU2_TR(0x52fe19);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fe1cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52fe1c:L52fe1c:{c.instructions+=3;NFSU2_TR(0x52fe1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52fe1e:{NFSU2_TR(0x52fe1e);
__builtin_memmove((R+4),(R+24),4);
}
B52fe20:{NFSU2_TR(0x52fe20);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fe23ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52fe23:L52fe23:{c.instructions+=4;NFSU2_TR(0x52fe23);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52fe27:{NFSU2_TR(0x52fe27);
{u32 ea_=u32(r4(R+28)+u32(264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52fe2d:{NFSU2_TR(0x52fe2d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52fe31:{NFSU2_TR(0x52fe31);
{goto L52fe46;}
}
B52fe33:L52fe33:{c.instructions+=4;NFSU2_TR(0x52fe33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52fe35:{NFSU2_TR(0x52fe35);
u8 U[4];
w4(U+0,u32(0x45d9c800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fe3a:{NFSU2_TR(0x52fe3a);
__builtin_memmove((R+4),(R+24),4);
}
B52fe3c:{NFSU2_TR(0x52fe3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fe3full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52fe3f:L52fe3f:{c.instructions+=3;NFSU2_TR(0x52fe3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52fe41:{NFSU2_TR(0x52fe41);
__builtin_memmove((R+4),(R+24),4);
}
B52fe43:{NFSU2_TR(0x52fe43);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fe46ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52fe46:L52fe46:{c.instructions+=4;NFSU2_TR(0x52fe46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52fe49:{NFSU2_TR(0x52fe49);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B52fe4a:{NFSU2_TR(0x52fe4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52fe4c:{NFSU2_TR(0x52fe4c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52fde4u);}goto L52fde4;}}
}
B52fe4e:L52fe4e:{c.instructions+=2;NFSU2_TR(0x52fe4e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B52fe51:{NFSU2_TR(0x52fe51);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52fde6u);}goto L52fde6;}
}
B52fe53:L52fe53:{c.instructions+=6;NFSU2_TR(0x52fe53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52fe54:{NFSU2_TR(0x52fe54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52fe55:{NFSU2_TR(0x52fe55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52fe56:{NFSU2_TR(0x52fe56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52fe57:{NFSU2_TR(0x52fe57);
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
B52fe5a:{NFSU2_TR(0x52fe5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52fe60:L52fe60:{c.instructions+=6;NFSU2_TR(0x52fe60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fe61:{NFSU2_TR(0x52fe61);
__builtin_memmove((R+24),(R+4),4);
}
B52fe63:{NFSU2_TR(0x52fe63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52fe66:{NFSU2_TR(0x52fe66);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B52fe69:{NFSU2_TR(0x52fe69);
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
B52fe6b:{NFSU2_TR(0x52fe6b);
if(r1(R+518)){{goto L52fe98;}}
}
B52fe6d:L52fe6d:{c.instructions+=3;NFSU2_TR(0x52fe6d);
__builtin_memmove((R+0),(R+4),4);
}
B52fe6f:{NFSU2_TR(0x52fe6f);
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
B52fe71:{NFSU2_TR(0x52fe71);
if(r1(R+518)){{goto L52fe78;}}
}
B52fe73:L52fe73:{c.instructions+=2;NFSU2_TR(0x52fe73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B52fe76:{NFSU2_TR(0x52fe76);
{goto L52fe7a;}
}
B52fe78:L52fe78:{c.instructions+=1;NFSU2_TR(0x52fe78);
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
B52fe7a:L52fe7a:{c.instructions+=7;NFSU2_TR(0x52fe7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52fe7d:{NFSU2_TR(0x52fe7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52fe80:{NFSU2_TR(0x52fe80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52fe83:{NFSU2_TR(0x52fe83);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x147ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52fe8a:{NFSU2_TR(0x52fe8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52fe8c:{NFSU2_TR(0x52fe8c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fe8d:{NFSU2_TR(0x52fe8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fe90ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52fe90:L52fe90:{c.instructions+=3;NFSU2_TR(0x52fe90);
__builtin_memmove((R+4),(R+24),4);
}
B52fe92:{NFSU2_TR(0x52fe92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52fe93:{NFSU2_TR(0x52fe93);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52fdb0u);}goto L52fdb0;}
}
B52fe98:L52fe98:{c.instructions+=2;NFSU2_TR(0x52fe98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52fe99:{NFSU2_TR(0x52fe99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52fea0:L52fea0:{c.instructions+=6;NFSU2_TR(0x52fea0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fea1:{NFSU2_TR(0x52fea1);
__builtin_memmove((R+28),(R+4),4);
}
B52fea3:{NFSU2_TR(0x52fea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52fea6:{NFSU2_TR(0x52fea6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B52fea9:{NFSU2_TR(0x52fea9);
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
B52feab:{NFSU2_TR(0x52feab);
if(r1(R+518)){{goto L52ff3a;}}
}
B52feb1:L52feb1:{c.instructions+=4;NFSU2_TR(0x52feb1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52feb2:{NFSU2_TR(0x52feb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52feb5:{NFSU2_TR(0x52feb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52feb7:{NFSU2_TR(0x52feb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52fec9;}}
}
B52feb9:L52feb9:{c.instructions+=3;NFSU2_TR(0x52feb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52febc:{NFSU2_TR(0x52febc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52febe:{NFSU2_TR(0x52febe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52fec9;}}
}
B52fec0:L52fec0:{c.instructions+=4;NFSU2_TR(0x52fec0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52fec1:{NFSU2_TR(0x52fec1);
__builtin_memmove((R+4),(R+28),4);
}
B52fec3:{NFSU2_TR(0x52fec3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52fec4:{NFSU2_TR(0x52fec4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52fe60u);}goto L52fe60;}
}
B52fec9:L52fec9:{c.instructions+=7;NFSU2_TR(0x52fec9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52feca:{NFSU2_TR(0x52feca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52fed0:{NFSU2_TR(0x52fed0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fed1:{NFSU2_TR(0x52fed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52fed7:{NFSU2_TR(0x52fed7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B52feda:{NFSU2_TR(0x52feda);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52fedc:{NFSU2_TR(0x52fedc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L52ff04;}}
}
B52fede:L52fede:{c.instructions+=3;NFSU2_TR(0x52fede);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52fedf:{NFSU2_TR(0x52fedf);
__builtin_memmove((R+4),(R+28),4);
}
B52fee1:{NFSU2_TR(0x52fee1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fee6ull));
TAIL_STATIC(0x520020u,520);
}
B52fee6:L52fee6:{c.instructions+=4;NFSU2_TR(0x52fee6);
__builtin_memmove((R+4),(R+24),4);
}
B52fee8:{NFSU2_TR(0x52fee8);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B52feea:{NFSU2_TR(0x52feea);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52feec:{NFSU2_TR(0x52feec);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52ff04;}}
}
B52feee:L52feee:{c.instructions+=3;NFSU2_TR(0x52feee);
__builtin_memmove((R+4),(R+28),4);
}
B52fef0:{NFSU2_TR(0x52fef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52fef3:{NFSU2_TR(0x52fef3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52fef8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52fdb0u);}goto L52fdb0;}
}
B52fef8:L52fef8:{c.instructions+=6;NFSU2_TR(0x52fef8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52fef9:{NFSU2_TR(0x52fef9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52fefa:{NFSU2_TR(0x52fefa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52fefb:{NFSU2_TR(0x52fefb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x147ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52ff02:{NFSU2_TR(0x52ff02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52ff03:{NFSU2_TR(0x52ff03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52ff04:L52ff04:{c.instructions+=9;NFSU2_TR(0x52ff04);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B52ff06:{NFSU2_TR(0x52ff06);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
}
B52ff07:{NFSU2_TR(0x52ff07);
w4(R+0,u32(0x0ull));
}
B52ff0c:{NFSU2_TR(0x52ff0c);
__builtin_memmove((R+0),(R+519),1);
}
B52ff0f:{NFSU2_TR(0x52ff0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B52ff12:{NFSU2_TR(0x52ff12);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B52ff13:{NFSU2_TR(0x52ff13);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B52ff15:{NFSU2_TR(0x52ff15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ff16:{NFSU2_TR(0x52ff16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ff1bull));
TAIL_STATIC(0x43be60u,43b);
}
B52ff1b:L52ff1b:{c.instructions+=2;NFSU2_TR(0x52ff1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52ff1d:{NFSU2_TR(0x52ff1d);
if(r1(R+518)){{goto L52ff24;}}
}
B52ff1f:L52ff1f:{c.instructions+=2;NFSU2_TR(0x52ff1f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B52ff22:{NFSU2_TR(0x52ff22);
{goto L52ff26;}
}
B52ff24:L52ff24:{c.instructions+=1;NFSU2_TR(0x52ff24);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52ff26:L52ff26:{c.instructions+=3;NFSU2_TR(0x52ff26);
__builtin_memmove((R+4),(R+28),4);
}
B52ff28:{NFSU2_TR(0x52ff28);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ff2b:{NFSU2_TR(0x52ff2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ff30ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52fdb0u);}goto L52fdb0;}
}
B52ff30:L52ff30:{c.instructions+=4;NFSU2_TR(0x52ff30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ff31:{NFSU2_TR(0x52ff31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52ff32:{NFSU2_TR(0x52ff32);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x147ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B52ff39:{NFSU2_TR(0x52ff39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52ff3a:L52ff3a:{c.instructions+=2;NFSU2_TR(0x52ff3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52ff3b:{NFSU2_TR(0x52ff3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52ff40:L52ff40:{c.instructions+=3;NFSU2_TR(0x52ff40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ff41:{NFSU2_TR(0x52ff41);
__builtin_memmove((R+24),(R+4),4);
}
B52ff43:{NFSU2_TR(0x52ff43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ff48ull));
TAIL_STATIC(0x5203b0u,520);
}
B52ff48:L52ff48:{c.instructions+=2;NFSU2_TR(0x52ff48);
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
B52ff4d:{NFSU2_TR(0x52ff4d);
if(r1(R+518)){{goto L52ff58;}}
}
B52ff4f:L52ff4f:{c.instructions+=2;NFSU2_TR(0x52ff4f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ff50:{NFSU2_TR(0x52ff50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ff55ull));
TAIL_STATIC(0x575630u,575);
}
B52ff55:L52ff55:{c.instructions+=1;NFSU2_TR(0x52ff55);
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
B52ff58:L52ff58:{c.instructions+=3;NFSU2_TR(0x52ff58);
__builtin_memmove((R+0),(R+24),4);
}
B52ff5a:{NFSU2_TR(0x52ff5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52ff5b:{NFSU2_TR(0x52ff5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52ff60:L52ff60:{c.instructions+=11;NFSU2_TR(0x52ff60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ff61:{NFSU2_TR(0x52ff61);
__builtin_memmove((R+20),(R+16),4);
}
B52ff63:{NFSU2_TR(0x52ff63);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ff64:{NFSU2_TR(0x52ff64);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ff65:{NFSU2_TR(0x52ff65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ff66:{NFSU2_TR(0x52ff66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ff67:{NFSU2_TR(0x52ff67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52ff6a:{NFSU2_TR(0x52ff6a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52ff6c:{NFSU2_TR(0x52ff6c);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x10002ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10002ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10002ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52ff72:{NFSU2_TR(0x52ff72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52ff75:{NFSU2_TR(0x52ff75);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L52ffa7;}}
}
B52ff77:L52ff77:{c.instructions+=1;NFSU2_TR(0x52ff77);
if(r1(R+518)){{goto L52ffa0;}}
}
B52ff79:L52ff79:{c.instructions+=2;NFSU2_TR(0x52ff79);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x69ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x69ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x69ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52ff7c:{NFSU2_TR(0x52ff7c);
if(r1(R+518)){{goto L52ff99;}}
}
B52ff7e:L52ff7e:{c.instructions+=2;NFSU2_TR(0x52ff7e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x71ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x71ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x71ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52ff81:{NFSU2_TR(0x52ff81);
if(r1(R+518)){{goto L52ff92;}}
}
B52ff83:L52ff83:{c.instructions+=2;NFSU2_TR(0x52ff83);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x10001ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10001ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10001ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52ff89:{NFSU2_TR(0x52ff89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52ffc9;}}
}
B52ff8b:L52ff8b:{c.instructions+=2;NFSU2_TR(0x52ff8b);
w4(R+24,u32(0x37ull));
}
B52ff90:{NFSU2_TR(0x52ff90);
{goto L52ffc9;}
}
B52ff92:L52ff92:{c.instructions+=2;NFSU2_TR(0x52ff92);
w4(R+24,u32(0x36ull));
}
B52ff97:{NFSU2_TR(0x52ff97);
{goto L52ffc9;}
}
B52ff99:L52ff99:{c.instructions+=2;NFSU2_TR(0x52ff99);
w4(R+24,u32(0x35ull));
}
B52ff9e:{NFSU2_TR(0x52ff9e);
{goto L52ffc9;}
}
B52ffa0:L52ffa0:{c.instructions+=2;NFSU2_TR(0x52ffa0);
w4(R+24,u32(0x38ull));
}
B52ffa5:{NFSU2_TR(0x52ffa5);
{goto L52ffc9;}
}
B52ffa7:L52ffa7:{c.instructions+=3;NFSU2_TR(0x52ffa7);
__builtin_memmove((R+0),(R+28),4);
}
B52ffa9:{NFSU2_TR(0x52ffa9);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x10003ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10003ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x10003ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52ffae:{NFSU2_TR(0x52ffae);
if(r1(R+518)){{goto L52ffc4;}}
}
B52ffb0:L52ffb0:{c.instructions+=2;NFSU2_TR(0x52ffb0);
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
B52ffb1:{NFSU2_TR(0x52ffb1);
if(r1(R+518)){{goto L52ffbd;}}
}
B52ffb3:L52ffb3:{c.instructions+=2;NFSU2_TR(0x52ffb3);
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
B52ffb4:{NFSU2_TR(0x52ffb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52ffc9;}}
}
B52ffb6:L52ffb6:{c.instructions+=2;NFSU2_TR(0x52ffb6);
w4(R+24,u32(0x34ull));
}
B52ffbb:{NFSU2_TR(0x52ffbb);
{goto L52ffc9;}
}
B52ffbd:L52ffbd:{c.instructions+=2;NFSU2_TR(0x52ffbd);
w4(R+24,u32(0x3aull));
}
B52ffc2:{NFSU2_TR(0x52ffc2);
{goto L52ffc9;}
}
B52ffc4:L52ffc4:{c.instructions+=1;NFSU2_TR(0x52ffc4);
w4(R+24,u32(0x39ull));
}
B52ffc9:L52ffc9:{c.instructions+=6;NFSU2_TR(0x52ffc9);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B52ffcf:{NFSU2_TR(0x52ffcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B52ffd1:{NFSU2_TR(0x52ffd1);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ffd3:{NFSU2_TR(0x52ffd3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ffd5:{NFSU2_TR(0x52ffd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ffd6:{NFSU2_TR(0x52ffd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ffd9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B52ffd9:L52ffd9:{c.instructions+=3;NFSU2_TR(0x52ffd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52ffda:{NFSU2_TR(0x52ffda);
w4(R+4,u32(0x8a2b68ull));
}
B52ffdf:{NFSU2_TR(0x52ffdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52ffe4ull));
TAIL_STATIC(0x61ba30u,61b);
}
B52ffe4:L52ffe4:{c.instructions+=3;NFSU2_TR(0x52ffe4);
__builtin_memmove((R+4),gp(0x850078),4);
}
B52ffea:{NFSU2_TR(0x52ffea);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52ffed:{NFSU2_TR(0x52ffed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x530011u,530);}
}
B52ffef:L52ffef:{c.instructions+=3;NFSU2_TR(0x52ffef);
__builtin_memmove((R+4),gp(0x838464),1);
}
B52fff5:{NFSU2_TR(0x52fff5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52fff7:{NFSU2_TR(0x52fff7);
if(r1(R+518)){TAIL_STATIC(0x530000u,530);}
}
B52fff9:L52fff9:{c.instructions+=2;NFSU2_TR(0x52fff9);
w1(R+12,u8(0x1ull));
}
B52fffb:{NFSU2_TR(0x52fffb);
TAIL_STATIC(0x5300dbu,530);
}
XIT:NFSU2_TR_EXIT(0x52f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
