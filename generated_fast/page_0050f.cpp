#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_4a5(u8* __restrict R,Cpu& c);
u32 body_4c1(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5a7(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_639(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x50f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x50f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_50f(u8* __restrict R,Cpu& c);
u32 page_50f(Cpu& c){return body_50f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_50f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x50f000:goto L50f000;
case 0x50f005:c.instructions+=2;goto B50f005;
case 0x50f007:c.instructions+=1;goto B50f007;
case 0x50f00c:goto L50f00c;
case 0x50f00f:c.instructions+=1;goto B50f00f;
case 0x50f011:goto L50f011;
case 0x50f012:c.instructions+=2;goto B50f012;
case 0x50f015:c.instructions+=1;goto B50f015;
case 0x50f017:goto L50f017;
case 0x50f018:c.instructions+=2;goto B50f018;
case 0x50f01a:c.instructions+=1;goto B50f01a;
case 0x50f01f:goto L50f01f;
case 0x50f020:c.instructions+=3;goto B50f020;
case 0x50f021:c.instructions+=2;goto B50f021;
case 0x50f022:c.instructions+=1;goto B50f022;
case 0x50f025:goto L50f025;
case 0x50f02a:c.instructions+=1;goto B50f02a;
case 0x50f030:goto L50f030;
case 0x50f031:c.instructions+=2;goto B50f031;
case 0x50f033:c.instructions+=1;goto B50f033;
case 0x50f038:goto L50f038;
case 0x50f03a:c.instructions+=1;goto B50f03a;
case 0x50f03c:goto L50f03c;
case 0x50f03d:c.instructions+=2;goto B50f03d;
case 0x50f040:c.instructions+=1;goto B50f040;
case 0x50f042:goto L50f042;
case 0x50f043:c.instructions+=2;goto B50f043;
case 0x50f045:c.instructions+=1;goto B50f045;
case 0x50f04a:goto L50f04a;
case 0x50f04b:c.instructions+=3;goto B50f04b;
case 0x50f04c:c.instructions+=2;goto B50f04c;
case 0x50f04d:c.instructions+=1;goto B50f04d;
case 0x50f050:goto L50f050;
case 0x50f051:c.instructions+=2;goto B50f051;
case 0x50f053:c.instructions+=1;goto B50f053;
case 0x50f058:goto L50f058;
case 0x50f059:c.instructions+=3;goto B50f059;
case 0x50f05a:c.instructions+=2;goto B50f05a;
case 0x50f05b:c.instructions+=1;goto B50f05b;
case 0x50f060:goto L50f060;
case 0x50f064:c.instructions+=3;goto B50f064;
case 0x50f067:c.instructions+=2;goto B50f067;
case 0x50f06a:c.instructions+=1;goto B50f06a;
case 0x50f06c:goto L50f06c;
case 0x50f073:goto L50f073;
case 0x50f078:c.instructions+=1;goto B50f078;
case 0x50f07b:goto L50f07b;
case 0x50f080:c.instructions+=1;goto B50f080;
case 0x50f083:goto L50f083;
case 0x50f088:c.instructions+=1;goto B50f088;
case 0x50f08b:goto L50f08b;
case 0x50f090:goto L50f090;
case 0x50f0b0:goto L50f0b0;
case 0x50f0b4:c.instructions+=3;goto B50f0b4;
case 0x50f0b5:c.instructions+=2;goto B50f0b5;
case 0x50f0bb:c.instructions+=1;goto B50f0bb;
case 0x50f0c0:goto L50f0c0;
case 0x50f0c2:c.instructions+=2;goto B50f0c2;
case 0x50f0c5:c.instructions+=1;goto B50f0c5;
case 0x50f0d0:goto L50f0d0;
case 0x50f0d5:c.instructions+=2;goto B50f0d5;
case 0x50f0d8:c.instructions+=1;goto B50f0d8;
case 0x50f0da:goto L50f0da;
case 0x50f0e0:c.instructions+=5;goto B50f0e0;
case 0x50f0e2:c.instructions+=4;goto B50f0e2;
case 0x50f0e5:c.instructions+=3;goto B50f0e5;
case 0x50f0e8:c.instructions+=2;goto B50f0e8;
case 0x50f0ef:c.instructions+=1;goto B50f0ef;
case 0x50f0f0:goto L50f0f0;
case 0x50f0f3:c.instructions+=1;goto B50f0f3;
case 0x50f0f5:goto L50f0f5;
case 0x50f0fb:c.instructions+=3;goto B50f0fb;
case 0x50f0fe:c.instructions+=2;goto B50f0fe;
case 0x50f103:c.instructions+=1;goto B50f103;
case 0x50f105:goto L50f105;
case 0x50f10c:goto L50f10c;
case 0x50f111:c.instructions+=1;goto B50f111;
case 0x50f112:goto L50f112;
case 0x50f117:c.instructions+=1;goto B50f117;
case 0x50f118:goto L50f118;
case 0x50f11d:c.instructions+=1;goto B50f11d;
case 0x50f11e:goto L50f11e;
case 0x50f123:c.instructions+=1;goto B50f123;
case 0x50f124:goto L50f124;
case 0x50f129:c.instructions+=1;goto B50f129;
case 0x50f12a:goto L50f12a;
case 0x50f12f:c.instructions+=1;goto B50f12f;
case 0x50f130:goto L50f130;
case 0x50f135:goto L50f135;
case 0x50f150:goto L50f150;
case 0x50f154:c.instructions+=3;goto B50f154;
case 0x50f155:c.instructions+=2;goto B50f155;
case 0x50f15b:c.instructions+=1;goto B50f15b;
case 0x50f160:goto L50f160;
case 0x50f162:c.instructions+=1;goto B50f162;
case 0x50f164:goto L50f164;
case 0x50f167:c.instructions+=5;goto B50f167;
case 0x50f169:c.instructions+=4;goto B50f169;
case 0x50f16b:c.instructions+=3;goto B50f16b;
case 0x50f16d:c.instructions+=2;goto B50f16d;
case 0x50f16e:c.instructions+=1;goto B50f16e;
case 0x50f171:goto L50f171;
case 0x50f176:c.instructions+=1;goto B50f176;
case 0x50f180:goto L50f180;
case 0x50f181:c.instructions+=5;goto B50f181;
case 0x50f182:c.instructions+=4;goto B50f182;
case 0x50f188:c.instructions+=3;goto B50f188;
case 0x50f18a:c.instructions+=2;goto B50f18a;
case 0x50f18c:c.instructions+=1;goto B50f18c;
case 0x50f191:goto L50f191;
case 0x50f193:c.instructions+=3;goto B50f193;
case 0x50f195:c.instructions+=2;goto B50f195;
case 0x50f197:c.instructions+=1;goto B50f197;
case 0x50f19c:goto L50f19c;
case 0x50f19e:c.instructions+=3;goto B50f19e;
case 0x50f1a0:c.instructions+=2;goto B50f1a0;
case 0x50f1a2:c.instructions+=1;goto B50f1a2;
case 0x50f1a7:goto L50f1a7;
case 0x50f1a8:c.instructions+=3;goto B50f1a8;
case 0x50f1aa:c.instructions+=2;goto B50f1aa;
case 0x50f1ab:c.instructions+=1;goto B50f1ab;
case 0x50f1b0:goto L50f1b0;
case 0x50f1b4:c.instructions+=3;goto B50f1b4;
case 0x50f1b5:c.instructions+=2;goto B50f1b5;
case 0x50f1bb:c.instructions+=1;goto B50f1bb;
case 0x50f1c0:goto L50f1c0;
case 0x50f1c4:c.instructions+=5;goto B50f1c4;
case 0x50f1c6:c.instructions+=4;goto B50f1c6;
case 0x50f1c8:c.instructions+=3;goto B50f1c8;
case 0x50f1cb:c.instructions+=2;goto B50f1cb;
case 0x50f1cd:c.instructions+=1;goto B50f1cd;
case 0x50f1d0:goto L50f1d0;
case 0x50f1d5:c.instructions+=1;goto B50f1d5;
case 0x50f1e0:goto L50f1e0;
case 0x50f1e4:c.instructions+=2;goto B50f1e4;
case 0x50f1e7:c.instructions+=1;goto B50f1e7;
case 0x50f1e9:goto L50f1e9;
case 0x50f1f0:goto L50f1f0;
case 0x50f1f5:c.instructions+=1;goto B50f1f5;
case 0x50f1f8:goto L50f1f8;
case 0x50f1fd:c.instructions+=1;goto B50f1fd;
case 0x50f200:goto L50f200;
case 0x50f205:c.instructions+=1;goto B50f205;
case 0x50f208:goto L50f208;
case 0x50f20d:c.instructions+=1;goto B50f20d;
case 0x50f210:goto L50f210;
case 0x50f215:c.instructions+=1;goto B50f215;
case 0x50f218:goto L50f218;
case 0x50f21d:c.instructions+=1;goto B50f21d;
case 0x50f220:goto L50f220;
case 0x50f225:c.instructions+=1;goto B50f225;
case 0x50f228:goto L50f228;
case 0x50f22d:c.instructions+=1;goto B50f22d;
case 0x50f230:goto L50f230;
case 0x50f235:c.instructions+=1;goto B50f235;
case 0x50f238:goto L50f238;
case 0x50f23a:c.instructions+=1;goto B50f23a;
case 0x50f270:goto L50f270;
case 0x50f276:c.instructions+=2;goto B50f276;
case 0x50f278:c.instructions+=1;goto B50f278;
case 0x50f27a:goto L50f27a;
case 0x50f27d:c.instructions+=2;goto B50f27d;
case 0x50f27f:c.instructions+=1;goto B50f27f;
case 0x50f281:goto L50f281;
case 0x50f284:c.instructions+=1;goto B50f284;
case 0x50f285:goto L50f285;
case 0x50f287:c.instructions+=1;goto B50f287;
case 0x50f290:goto L50f290;
case 0x50f291:c.instructions+=4;goto B50f291;
case 0x50f293:c.instructions+=3;goto B50f293;
case 0x50f296:c.instructions+=2;goto B50f296;
case 0x50f298:c.instructions+=1;goto B50f298;
case 0x50f29a:goto L50f29a;
case 0x50f29d:c.instructions+=2;goto B50f29d;
case 0x50f2a2:c.instructions+=1;goto B50f2a2;
case 0x50f2a4:goto L50f2a4;
case 0x50f2a7:c.instructions+=1;goto B50f2a7;
case 0x50f2a9:goto L50f2a9;
case 0x50f2af:c.instructions+=2;goto B50f2af;
case 0x50f2b1:c.instructions+=1;goto B50f2b1;
case 0x50f2b4:goto L50f2b4;
case 0x50f2b5:c.instructions+=1;goto B50f2b5;
case 0x50f2ba:goto L50f2ba;
case 0x50f2bd:c.instructions+=2;goto B50f2bd;
case 0x50f2bf:c.instructions+=1;goto B50f2bf;
case 0x50f2c1:goto L50f2c1;
case 0x50f2c4:c.instructions+=4;goto B50f2c4;
case 0x50f2c9:c.instructions+=3;goto B50f2c9;
case 0x50f2ca:c.instructions+=2;goto B50f2ca;
case 0x50f2cc:c.instructions+=1;goto B50f2cc;
case 0x50f2d1:goto L50f2d1;
case 0x50f2d4:c.instructions+=2;goto B50f2d4;
case 0x50f2d5:c.instructions+=1;goto B50f2d5;
case 0x50f2d8:goto L50f2d8;
case 0x50f2de:c.instructions+=2;goto B50f2de;
case 0x50f2e0:c.instructions+=1;goto B50f2e0;
case 0x50f2e3:goto L50f2e3;
case 0x50f2e4:c.instructions+=1;goto B50f2e4;
case 0x50f2e9:goto L50f2e9;
case 0x50f2ec:c.instructions+=2;goto B50f2ec;
case 0x50f2ee:c.instructions+=1;goto B50f2ee;
case 0x50f2f0:goto L50f2f0;
case 0x50f2f3:c.instructions+=4;goto B50f2f3;
case 0x50f2f8:c.instructions+=3;goto B50f2f8;
case 0x50f2f9:c.instructions+=2;goto B50f2f9;
case 0x50f2fb:c.instructions+=1;goto B50f2fb;
case 0x50f300:goto L50f300;
case 0x50f303:goto L50f303;
case 0x50f304:c.instructions+=1;goto B50f304;
case 0x50f310:goto L50f310;
case 0x50f317:c.instructions+=4;goto B50f317;
case 0x50f318:c.instructions+=3;goto B50f318;
case 0x50f319:c.instructions+=2;goto B50f319;
case 0x50f31b:c.instructions+=1;goto B50f31b;
case 0x50f31d:goto L50f31d;
case 0x50f31e:c.instructions+=3;goto B50f31e;
case 0x50f320:c.instructions+=2;goto B50f320;
case 0x50f321:c.instructions+=1;goto B50f321;
case 0x50f322:goto L50f322;
case 0x50f325:c.instructions+=3;goto B50f325;
case 0x50f327:c.instructions+=2;goto B50f327;
case 0x50f32c:c.instructions+=1;goto B50f32c;
case 0x50f32e:goto L50f32e;
case 0x50f331:goto L50f331;
case 0x50f334:c.instructions+=3;goto B50f334;
case 0x50f337:c.instructions+=2;goto B50f337;
case 0x50f338:c.instructions+=1;goto B50f338;
case 0x50f33e:goto L50f33e;
case 0x50f345:goto L50f345;
case 0x50f346:c.instructions+=4;goto B50f346;
case 0x50f347:c.instructions+=3;goto B50f347;
case 0x50f349:c.instructions+=2;goto B50f349;
case 0x50f34a:c.instructions+=1;goto B50f34a;
case 0x50f34b:goto L50f34b;
case 0x50f350:c.instructions+=1;goto B50f350;
case 0x50f352:goto L50f352;
case 0x50f357:c.instructions+=1;goto B50f357;
case 0x50f359:goto L50f359;
case 0x50f35e:c.instructions+=1;goto B50f35e;
case 0x50f360:goto L50f360;
case 0x50f365:c.instructions+=1;goto B50f365;
case 0x50f367:goto L50f367;
case 0x50f368:c.instructions+=4;goto B50f368;
case 0x50f369:c.instructions+=3;goto B50f369;
case 0x50f36e:c.instructions+=2;goto B50f36e;
case 0x50f36f:c.instructions+=1;goto B50f36f;
case 0x50f374:goto L50f374;
case 0x50f375:c.instructions+=4;goto B50f375;
case 0x50f376:c.instructions+=3;goto B50f376;
case 0x50f37b:c.instructions+=2;goto B50f37b;
case 0x50f37c:c.instructions+=1;goto B50f37c;
case 0x50f381:goto L50f381;
case 0x50f386:goto L50f386;
case 0x50f387:c.instructions+=2;goto B50f387;
case 0x50f38c:c.instructions+=1;goto B50f38c;
case 0x50f391:goto L50f391;
case 0x50f393:c.instructions+=2;goto B50f393;
case 0x50f395:c.instructions+=1;goto B50f395;
case 0x50f397:goto L50f397;
case 0x50f39b:c.instructions+=1;goto B50f39b;
case 0x50f39d:goto L50f39d;
case 0x50f3a0:c.instructions+=1;goto B50f3a0;
case 0x50f3a2:goto L50f3a2;
case 0x50f3a5:c.instructions+=1;goto B50f3a5;
case 0x50f3a7:goto L50f3a7;
case 0x50f3aa:c.instructions+=1;goto B50f3aa;
case 0x50f3ac:goto L50f3ac;
case 0x50f3ae:c.instructions+=3;goto B50f3ae;
case 0x50f3b3:c.instructions+=2;goto B50f3b3;
case 0x50f3b5:c.instructions+=1;goto B50f3b5;
case 0x50f3ba:goto L50f3ba;
case 0x50f3bc:c.instructions+=1;goto B50f3bc;
case 0x50f3be:goto L50f3be;
case 0x50f3bf:c.instructions+=3;goto B50f3bf;
case 0x50f3c4:c.instructions+=2;goto B50f3c4;
case 0x50f3c6:c.instructions+=1;goto B50f3c6;
case 0x50f3cb:goto L50f3cb;
case 0x50f3cd:c.instructions+=1;goto B50f3cd;
case 0x50f3cf:goto L50f3cf;
case 0x50f3d2:c.instructions+=2;goto B50f3d2;
case 0x50f3d4:c.instructions+=1;goto B50f3d4;
case 0x50f3da:goto L50f3da;
case 0x50f3de:c.instructions+=1;goto B50f3de;
case 0x50f3e4:goto L50f3e4;
case 0x50f3e9:c.instructions+=2;goto B50f3e9;
case 0x50f3eb:c.instructions+=1;goto B50f3eb;
case 0x50f3f0:goto L50f3f0;
case 0x50f3f1:c.instructions+=5;goto B50f3f1;
case 0x50f3f3:c.instructions+=4;goto B50f3f3;
case 0x50f3f4:c.instructions+=3;goto B50f3f4;
case 0x50f3f7:c.instructions+=2;goto B50f3f7;
case 0x50f3f8:c.instructions+=1;goto B50f3f8;
case 0x50f3f9:goto L50f3f9;
case 0x50f3fa:c.instructions+=4;goto B50f3fa;
case 0x50f3fb:c.instructions+=3;goto B50f3fb;
case 0x50f3fd:c.instructions+=2;goto B50f3fd;
case 0x50f3fe:c.instructions+=1;goto B50f3fe;
case 0x50f440:goto L50f440;
case 0x50f441:c.instructions+=4;goto B50f441;
case 0x50f443:c.instructions+=3;goto B50f443;
case 0x50f446:c.instructions+=2;goto B50f446;
case 0x50f449:c.instructions+=1;goto B50f449;
case 0x50f44f:goto L50f44f;
case 0x50f452:c.instructions+=1;goto B50f452;
case 0x50f458:goto L50f458;
case 0x50f45b:c.instructions+=2;goto B50f45b;
case 0x50f45e:c.instructions+=1;goto B50f45e;
case 0x50f464:goto L50f464;
case 0x50f467:c.instructions+=1;goto B50f467;
case 0x50f46d:goto L50f46d;
case 0x50f470:c.instructions+=2;goto B50f470;
case 0x50f473:c.instructions+=1;goto B50f473;
case 0x50f479:goto L50f479;
case 0x50f480:goto L50f480;
case 0x50f481:c.instructions+=2;goto B50f481;
case 0x50f484:c.instructions+=1;goto B50f484;
case 0x50f48a:goto L50f48a;
case 0x50f491:goto L50f491;
case 0x50f496:c.instructions+=2;goto B50f496;
case 0x50f497:c.instructions+=1;goto B50f497;
case 0x50f49a:goto L50f49a;
case 0x50f49f:c.instructions+=2;goto B50f49f;
case 0x50f4a0:c.instructions+=1;goto B50f4a0;
case 0x50f4a3:goto L50f4a3;
case 0x50f4a8:c.instructions+=2;goto B50f4a8;
case 0x50f4a9:c.instructions+=1;goto B50f4a9;
case 0x50f4ac:goto L50f4ac;
case 0x50f4b1:c.instructions+=2;goto B50f4b1;
case 0x50f4b2:c.instructions+=1;goto B50f4b2;
case 0x50f4b5:goto L50f4b5;
case 0x50f4b6:c.instructions+=2;goto B50f4b6;
case 0x50f4b9:c.instructions+=1;goto B50f4b9;
case 0x50f4bf:goto L50f4bf;
case 0x50f4c6:goto L50f4c6;
case 0x50f4cb:c.instructions+=2;goto B50f4cb;
case 0x50f4cc:c.instructions+=1;goto B50f4cc;
case 0x50f4cf:goto L50f4cf;
case 0x50f4d4:c.instructions+=2;goto B50f4d4;
case 0x50f4d5:c.instructions+=1;goto B50f4d5;
case 0x50f4d8:goto L50f4d8;
case 0x50f4dd:c.instructions+=2;goto B50f4dd;
case 0x50f4de:c.instructions+=1;goto B50f4de;
case 0x50f4e1:goto L50f4e1;
case 0x50f4e6:c.instructions+=2;goto B50f4e6;
case 0x50f4e7:c.instructions+=1;goto B50f4e7;
case 0x50f4ea:goto L50f4ea;
case 0x50f4eb:c.instructions+=2;goto B50f4eb;
case 0x50f4ee:c.instructions+=1;goto B50f4ee;
case 0x50f4f0:goto L50f4f0;
case 0x50f4f7:goto L50f4f7;
case 0x50f4fc:c.instructions+=2;goto B50f4fc;
case 0x50f4fd:c.instructions+=1;goto B50f4fd;
case 0x50f500:goto L50f500;
case 0x50f505:c.instructions+=2;goto B50f505;
case 0x50f506:c.instructions+=1;goto B50f506;
case 0x50f509:goto L50f509;
case 0x50f50e:c.instructions+=2;goto B50f50e;
case 0x50f50f:c.instructions+=1;goto B50f50f;
case 0x50f512:goto L50f512;
case 0x50f517:c.instructions+=2;goto B50f517;
case 0x50f518:c.instructions+=1;goto B50f518;
case 0x50f51b:goto L50f51b;
case 0x50f51c:c.instructions+=2;goto B50f51c;
case 0x50f51f:c.instructions+=1;goto B50f51f;
case 0x50f521:goto L50f521;
case 0x50f528:goto L50f528;
case 0x50f52d:c.instructions+=2;goto B50f52d;
case 0x50f52e:c.instructions+=1;goto B50f52e;
case 0x50f531:goto L50f531;
case 0x50f536:c.instructions+=2;goto B50f536;
case 0x50f537:c.instructions+=1;goto B50f537;
case 0x50f53a:goto L50f53a;
case 0x50f53f:c.instructions+=2;goto B50f53f;
case 0x50f540:c.instructions+=1;goto B50f540;
case 0x50f543:goto L50f543;
case 0x50f548:c.instructions+=2;goto B50f548;
case 0x50f549:c.instructions+=1;goto B50f549;
case 0x50f54c:goto L50f54c;
case 0x50f551:c.instructions+=2;goto B50f551;
case 0x50f552:c.instructions+=1;goto B50f552;
case 0x50f5b0:goto L50f5b0;
case 0x50f5b4:c.instructions+=3;goto B50f5b4;
case 0x50f5b7:c.instructions+=2;goto B50f5b7;
case 0x50f5ba:c.instructions+=1;goto B50f5ba;
case 0x50f5bc:goto L50f5bc;
case 0x50f5c3:c.instructions+=1;goto B50f5c3;
case 0x50f5ca:goto L50f5ca;
case 0x50f5cf:c.instructions+=1;goto B50f5cf;
case 0x50f5d2:goto L50f5d2;
case 0x50f5d7:c.instructions+=1;goto B50f5d7;
case 0x50f5da:goto L50f5da;
case 0x50f5df:c.instructions+=1;goto B50f5df;
case 0x50f5e2:goto L50f5e2;
case 0x50f5e7:c.instructions+=1;goto B50f5e7;
case 0x50f5ea:goto L50f5ea;
case 0x50f5ef:c.instructions+=1;goto B50f5ef;
case 0x50f5f2:goto L50f5f2;
case 0x50f5f7:c.instructions+=1;goto B50f5f7;
case 0x50f5fa:goto L50f5fa;
case 0x50f5fc:c.instructions+=1;goto B50f5fc;
case 0x50f640:goto L50f640;
case 0x50f644:c.instructions+=2;goto B50f644;
case 0x50f647:c.instructions+=1;goto B50f647;
case 0x50f649:goto L50f649;
case 0x50f64d:goto L50f64d;
case 0x50f650:goto L50f650;
case 0x50f651:c.instructions+=3;goto B50f651;
case 0x50f656:c.instructions+=2;goto B50f656;
case 0x50f65b:c.instructions+=1;goto B50f65b;
case 0x50f660:goto L50f660;
case 0x50f662:c.instructions+=3;goto B50f662;
case 0x50f667:c.instructions+=2;goto B50f667;
case 0x50f669:c.instructions+=1;goto B50f669;
case 0x50f66e:goto L50f66e;
case 0x50f673:c.instructions+=3;goto B50f673;
case 0x50f678:c.instructions+=2;goto B50f678;
case 0x50f67d:c.instructions+=1;goto B50f67d;
case 0x50f682:goto L50f682;
case 0x50f684:c.instructions+=5;goto B50f684;
case 0x50f686:c.instructions+=4;goto B50f686;
case 0x50f68b:c.instructions+=3;goto B50f68b;
case 0x50f68d:c.instructions+=2;goto B50f68d;
case 0x50f693:c.instructions+=1;goto B50f693;
case 0x50f698:goto L50f698;
case 0x50f69a:c.instructions+=4;goto B50f69a;
case 0x50f69f:c.instructions+=3;goto B50f69f;
case 0x50f6a1:c.instructions+=2;goto B50f6a1;
case 0x50f6a6:c.instructions+=1;goto B50f6a6;
case 0x50f6ab:goto L50f6ab;
case 0x50f6ad:c.instructions+=4;goto B50f6ad;
case 0x50f6b2:c.instructions+=3;goto B50f6b2;
case 0x50f6b4:c.instructions+=2;goto B50f6b4;
case 0x50f6b9:c.instructions+=1;goto B50f6b9;
case 0x50f6be:goto L50f6be;
case 0x50f6c3:c.instructions+=3;goto B50f6c3;
case 0x50f6c8:c.instructions+=2;goto B50f6c8;
case 0x50f6cd:c.instructions+=1;goto B50f6cd;
case 0x50f6d2:goto L50f6d2;
case 0x50f6d4:c.instructions+=5;goto B50f6d4;
case 0x50f6d6:c.instructions+=4;goto B50f6d6;
case 0x50f6db:c.instructions+=3;goto B50f6db;
case 0x50f6dd:c.instructions+=2;goto B50f6dd;
case 0x50f6e3:c.instructions+=1;goto B50f6e3;
case 0x50f6e8:goto L50f6e8;
case 0x50f6ea:c.instructions+=4;goto B50f6ea;
case 0x50f6ef:c.instructions+=3;goto B50f6ef;
case 0x50f6f1:c.instructions+=2;goto B50f6f1;
case 0x50f6f6:c.instructions+=1;goto B50f6f6;
case 0x50f6fb:goto L50f6fb;
case 0x50f6fd:c.instructions+=4;goto B50f6fd;
case 0x50f702:c.instructions+=3;goto B50f702;
case 0x50f704:c.instructions+=2;goto B50f704;
case 0x50f709:c.instructions+=1;goto B50f709;
case 0x50f70e:goto L50f70e;
case 0x50f713:c.instructions+=3;goto B50f713;
case 0x50f718:c.instructions+=2;goto B50f718;
case 0x50f71d:c.instructions+=1;goto B50f71d;
case 0x50f722:goto L50f722;
case 0x50f724:c.instructions+=5;goto B50f724;
case 0x50f726:c.instructions+=4;goto B50f726;
case 0x50f72b:c.instructions+=3;goto B50f72b;
case 0x50f72d:c.instructions+=2;goto B50f72d;
case 0x50f733:c.instructions+=1;goto B50f733;
case 0x50f738:goto L50f738;
case 0x50f73a:c.instructions+=4;goto B50f73a;
case 0x50f73f:c.instructions+=3;goto B50f73f;
case 0x50f741:c.instructions+=2;goto B50f741;
case 0x50f746:c.instructions+=1;goto B50f746;
case 0x50f74b:goto L50f74b;
case 0x50f74d:c.instructions+=4;goto B50f74d;
case 0x50f752:c.instructions+=3;goto B50f752;
case 0x50f754:c.instructions+=2;goto B50f754;
case 0x50f759:c.instructions+=1;goto B50f759;
case 0x50f75e:goto L50f75e;
case 0x50f763:c.instructions+=2;goto B50f763;
case 0x50f764:c.instructions+=1;goto B50f764;
case 0x50f770:goto L50f770;
case 0x50f774:c.instructions+=8;goto B50f774;
case 0x50f775:c.instructions+=7;goto B50f775;
case 0x50f776:c.instructions+=6;goto B50f776;
case 0x50f779:c.instructions+=5;goto B50f779;
case 0x50f77a:c.instructions+=4;goto B50f77a;
case 0x50f77c:c.instructions+=3;goto B50f77c;
case 0x50f781:c.instructions+=2;goto B50f781;
case 0x50f783:c.instructions+=1;goto B50f783;
case 0x50f788:goto L50f788;
case 0x50f78a:c.instructions+=4;goto B50f78a;
case 0x50f78f:c.instructions+=3;goto B50f78f;
case 0x50f791:c.instructions+=2;goto B50f791;
case 0x50f793:c.instructions+=1;goto B50f793;
case 0x50f798:goto L50f798;
case 0x50f79a:c.instructions+=4;goto B50f79a;
case 0x50f79f:c.instructions+=3;goto B50f79f;
case 0x50f7a1:c.instructions+=2;goto B50f7a1;
case 0x50f7a3:c.instructions+=1;goto B50f7a3;
case 0x50f7a8:goto L50f7a8;
case 0x50f7ac:c.instructions+=11;goto B50f7ac;
case 0x50f7ae:c.instructions+=10;goto B50f7ae;
case 0x50f7b0:c.instructions+=9;goto B50f7b0;
case 0x50f7b3:c.instructions+=8;goto B50f7b3;
case 0x50f7b6:c.instructions+=7;goto B50f7b6;
case 0x50f7bb:c.instructions+=6;goto B50f7bb;
case 0x50f7bc:c.instructions+=5;goto B50f7bc;
case 0x50f7bf:c.instructions+=4;goto B50f7bf;
case 0x50f7c0:c.instructions+=3;goto B50f7c0;
case 0x50f7c2:c.instructions+=2;goto B50f7c2;
case 0x50f7c3:c.instructions+=1;goto B50f7c3;
case 0x50f7d0:goto L50f7d0;
case 0x50f7d6:c.instructions+=1;goto B50f7d6;
case 0x50f7e0:goto L50f7e0;
case 0x50f7e1:c.instructions+=5;goto B50f7e1;
case 0x50f7e5:c.instructions+=4;goto B50f7e5;
case 0x50f7e6:c.instructions+=3;goto B50f7e6;
case 0x50f7e7:c.instructions+=2;goto B50f7e7;
case 0x50f7e9:c.instructions+=1;goto B50f7e9;
case 0x50f7ee:goto L50f7ee;
case 0x50f7f1:c.instructions+=4;goto B50f7f1;
case 0x50f7f7:c.instructions+=3;goto B50f7f7;
case 0x50f7f8:c.instructions+=2;goto B50f7f8;
case 0x50f7f9:c.instructions+=1;goto B50f7f9;
case 0x50f800:goto L50f800;
case 0x50f801:c.instructions+=4;goto B50f801;
case 0x50f803:c.instructions+=3;goto B50f803;
case 0x50f805:c.instructions+=2;goto B50f805;
case 0x50f80c:c.instructions+=1;goto B50f80c;
case 0x50f811:goto L50f811;
case 0x50f815:c.instructions+=7;goto B50f815;
case 0x50f819:c.instructions+=6;goto B50f819;
case 0x50f81c:c.instructions+=5;goto B50f81c;
case 0x50f81e:c.instructions+=4;goto B50f81e;
case 0x50f825:c.instructions+=3;goto B50f825;
case 0x50f827:c.instructions+=2;goto B50f827;
case 0x50f82d:c.instructions+=1;goto B50f82d;
case 0x50f833:goto L50f833;
case 0x50f834:c.instructions+=3;goto B50f834;
case 0x50f835:c.instructions+=2;goto B50f835;
case 0x50f837:c.instructions+=1;goto B50f837;
case 0x50f838:goto L50f838;
case 0x50f83a:c.instructions+=7;goto B50f83a;
case 0x50f83c:c.instructions+=6;goto B50f83c;
case 0x50f83f:c.instructions+=5;goto B50f83f;
case 0x50f842:c.instructions+=4;goto B50f842;
case 0x50f844:c.instructions+=3;goto B50f844;
case 0x50f84b:c.instructions+=2;goto B50f84b;
case 0x50f852:c.instructions+=1;goto B50f852;
case 0x50f857:goto L50f857;
case 0x50f859:goto L50f859;
case 0x50f85a:c.instructions+=1;goto B50f85a;
case 0x50f85c:goto L50f85c;
case 0x50f862:c.instructions+=2;goto B50f862;
case 0x50f868:c.instructions+=1;goto B50f868;
case 0x50f86d:goto L50f86d;
case 0x50f86f:goto L50f86f;
case 0x50f870:goto L50f870;
case 0x50f872:c.instructions+=5;goto B50f872;
case 0x50f875:c.instructions+=4;goto B50f875;
case 0x50f87c:c.instructions+=3;goto B50f87c;
case 0x50f883:c.instructions+=2;goto B50f883;
case 0x50f888:c.instructions+=1;goto B50f888;
case 0x50f88a:goto L50f88a;
case 0x50f88c:goto L50f88c;
case 0x50f88f:c.instructions+=3;goto B50f88f;
case 0x50f891:c.instructions+=2;goto B50f891;
case 0x50f892:c.instructions+=1;goto B50f892;
case 0x50f894:goto L50f894;
case 0x50f89a:c.instructions+=2;goto B50f89a;
case 0x50f89f:c.instructions+=1;goto B50f89f;
case 0x50f8a1:goto L50f8a1;
case 0x50f8a3:goto L50f8a3;
case 0x50f8a4:goto L50f8a4;
case 0x50f8a6:c.instructions+=5;goto B50f8a6;
case 0x50f8a9:c.instructions+=4;goto B50f8a9;
case 0x50f8b0:c.instructions+=3;goto B50f8b0;
case 0x50f8b7:c.instructions+=2;goto B50f8b7;
case 0x50f8bc:c.instructions+=1;goto B50f8bc;
case 0x50f8be:goto L50f8be;
case 0x50f8c0:goto L50f8c0;
case 0x50f8c3:c.instructions+=3;goto B50f8c3;
case 0x50f8c5:c.instructions+=2;goto B50f8c5;
case 0x50f8c6:c.instructions+=1;goto B50f8c6;
case 0x50f8c8:goto L50f8c8;
case 0x50f8ce:c.instructions+=2;goto B50f8ce;
case 0x50f8d3:c.instructions+=1;goto B50f8d3;
case 0x50f8d5:goto L50f8d5;
case 0x50f8d7:goto L50f8d7;
case 0x50f8d8:goto L50f8d8;
case 0x50f8da:c.instructions+=5;goto B50f8da;
case 0x50f8dd:c.instructions+=4;goto B50f8dd;
case 0x50f8e4:c.instructions+=3;goto B50f8e4;
case 0x50f8eb:c.instructions+=2;goto B50f8eb;
case 0x50f8f0:c.instructions+=1;goto B50f8f0;
case 0x50f8f2:goto L50f8f2;
case 0x50f8f4:goto L50f8f4;
case 0x50f8f7:c.instructions+=3;goto B50f8f7;
case 0x50f8f9:c.instructions+=2;goto B50f8f9;
case 0x50f8fa:c.instructions+=1;goto B50f8fa;
case 0x50f8fc:goto L50f8fc;
case 0x50f902:c.instructions+=2;goto B50f902;
case 0x50f907:c.instructions+=1;goto B50f907;
case 0x50f909:goto L50f909;
case 0x50f90b:goto L50f90b;
case 0x50f90c:goto L50f90c;
case 0x50f90e:c.instructions+=5;goto B50f90e;
case 0x50f911:c.instructions+=4;goto B50f911;
case 0x50f918:c.instructions+=3;goto B50f918;
case 0x50f91f:c.instructions+=2;goto B50f91f;
case 0x50f924:c.instructions+=1;goto B50f924;
case 0x50f926:goto L50f926;
case 0x50f928:goto L50f928;
case 0x50f92b:c.instructions+=3;goto B50f92b;
case 0x50f92d:c.instructions+=2;goto B50f92d;
case 0x50f92e:c.instructions+=1;goto B50f92e;
case 0x50f930:goto L50f930;
case 0x50f936:c.instructions+=2;goto B50f936;
case 0x50f93b:c.instructions+=1;goto B50f93b;
case 0x50f93d:goto L50f93d;
case 0x50f93f:goto L50f93f;
case 0x50f940:goto L50f940;
case 0x50f943:c.instructions+=2;goto B50f943;
case 0x50f946:c.instructions+=1;goto B50f946;
case 0x50f94c:goto L50f94c;
case 0x50f94e:c.instructions+=7;goto B50f94e;
case 0x50f950:c.instructions+=6;goto B50f950;
case 0x50f952:c.instructions+=5;goto B50f952;
case 0x50f955:c.instructions+=4;goto B50f955;
case 0x50f956:c.instructions+=3;goto B50f956;
case 0x50f95c:c.instructions+=2;goto B50f95c;
case 0x50f95d:c.instructions+=1;goto B50f95d;
case 0x50f960:goto L50f960;
case 0x50f961:c.instructions+=2;goto B50f961;
case 0x50f962:c.instructions+=1;goto B50f962;
case 0x50f963:goto L50f963;
case 0x50f964:c.instructions+=1;goto B50f964;
case 0x50f970:goto L50f970;
case 0x50f971:c.instructions+=9;goto B50f971;
case 0x50f973:c.instructions+=8;goto B50f973;
case 0x50f974:c.instructions+=7;goto B50f974;
case 0x50f976:c.instructions+=6;goto B50f976;
case 0x50f977:c.instructions+=5;goto B50f977;
case 0x50f979:c.instructions+=4;goto B50f979;
case 0x50f97f:c.instructions+=3;goto B50f97f;
case 0x50f985:c.instructions+=2;goto B50f985;
case 0x50f98f:c.instructions+=1;goto B50f98f;
case 0x50f994:goto L50f994;
case 0x50f997:c.instructions+=6;goto B50f997;
case 0x50f99d:c.instructions+=5;goto B50f99d;
case 0x50f9a3:c.instructions+=4;goto B50f9a3;
case 0x50f9a9:c.instructions+=3;goto B50f9a9;
case 0x50f9aa:c.instructions+=2;goto B50f9aa;
case 0x50f9ab:c.instructions+=1;goto B50f9ab;
case 0x50f9b0:goto L50f9b0;
case 0x50f9b1:c.instructions+=4;goto B50f9b1;
case 0x50f9b3:c.instructions+=3;goto B50f9b3;
case 0x50f9b9:c.instructions+=2;goto B50f9b9;
case 0x50f9bb:c.instructions+=1;goto B50f9bb;
case 0x50f9bd:goto L50f9bd;
case 0x50f9be:c.instructions+=3;goto B50f9be;
case 0x50f9c2:c.instructions+=2;goto B50f9c2;
case 0x50f9c3:c.instructions+=1;goto B50f9c3;
case 0x50f9c8:goto L50f9c8;
case 0x50f9cb:c.instructions+=2;goto B50f9cb;
case 0x50f9cc:c.instructions+=1;goto B50f9cc;
case 0x50f9ce:goto L50f9ce;
case 0x50f9d4:c.instructions+=2;goto B50f9d4;
case 0x50f9d6:c.instructions+=1;goto B50f9d6;
case 0x50f9db:goto L50f9db;
case 0x50f9dc:c.instructions+=1;goto B50f9dc;
case 0x50f9e0:goto L50f9e0;
case 0x50f9e1:c.instructions+=7;goto B50f9e1;
case 0x50f9e2:c.instructions+=6;goto B50f9e2;
case 0x50f9e3:c.instructions+=5;goto B50f9e3;
case 0x50f9e5:c.instructions+=4;goto B50f9e5;
case 0x50f9e6:c.instructions+=3;goto B50f9e6;
case 0x50f9ec:c.instructions+=2;goto B50f9ec;
case 0x50f9f2:c.instructions+=1;goto B50f9f2;
case 0x50f9f7:goto L50f9f7;
case 0x50f9fa:c.instructions+=6;goto B50f9fa;
case 0x50f9fd:c.instructions+=5;goto B50f9fd;
case 0x50f9ff:c.instructions+=4;goto B50f9ff;
case 0x50fa02:c.instructions+=3;goto B50fa02;
case 0x50fa05:c.instructions+=2;goto B50fa05;
case 0x50fa08:c.instructions+=1;goto B50fa08;
case 0x50fa0d:goto L50fa0d;
case 0x50fa10:c.instructions+=4;goto B50fa10;
case 0x50fa12:c.instructions+=3;goto B50fa12;
case 0x50fa17:c.instructions+=2;goto B50fa17;
case 0x50fa1a:c.instructions+=1;goto B50fa1a;
case 0x50fa1b:goto L50fa1b;
case 0x50fa1d:goto L50fa1d;
case 0x50fa1f:goto L50fa1f;
case 0x50fa20:c.instructions+=4;goto B50fa20;
case 0x50fa21:c.instructions+=3;goto B50fa21;
case 0x50fa22:c.instructions+=2;goto B50fa22;
case 0x50fa23:c.instructions+=1;goto B50fa23;
case 0x50fa30:goto L50fa30;
case 0x50fa32:c.instructions+=56;goto B50fa32;
case 0x50fa36:c.instructions+=55;goto B50fa36;
case 0x50fa38:c.instructions+=54;goto B50fa38;
case 0x50fa3a:c.instructions+=53;goto B50fa3a;
case 0x50fa3d:c.instructions+=52;goto B50fa3d;
case 0x50fa40:c.instructions+=51;goto B50fa40;
case 0x50fa43:c.instructions+=50;goto B50fa43;
case 0x50fa46:c.instructions+=49;goto B50fa46;
case 0x50fa49:c.instructions+=48;goto B50fa49;
case 0x50fa4c:c.instructions+=47;goto B50fa4c;
case 0x50fa4f:c.instructions+=46;goto B50fa4f;
case 0x50fa52:c.instructions+=45;goto B50fa52;
case 0x50fa55:c.instructions+=44;goto B50fa55;
case 0x50fa58:c.instructions+=43;goto B50fa58;
case 0x50fa5b:c.instructions+=42;goto B50fa5b;
case 0x50fa5e:c.instructions+=41;goto B50fa5e;
case 0x50fa61:c.instructions+=40;goto B50fa61;
case 0x50fa64:c.instructions+=39;goto B50fa64;
case 0x50fa67:c.instructions+=38;goto B50fa67;
case 0x50fa6a:c.instructions+=37;goto B50fa6a;
case 0x50fa6d:c.instructions+=36;goto B50fa6d;
case 0x50fa70:c.instructions+=35;goto B50fa70;
case 0x50fa73:c.instructions+=34;goto B50fa73;
case 0x50fa76:c.instructions+=33;goto B50fa76;
case 0x50fa79:c.instructions+=32;goto B50fa79;
case 0x50fa7c:c.instructions+=31;goto B50fa7c;
case 0x50fa7f:c.instructions+=30;goto B50fa7f;
case 0x50fa82:c.instructions+=29;goto B50fa82;
case 0x50fa85:c.instructions+=28;goto B50fa85;
case 0x50fa88:c.instructions+=27;goto B50fa88;
case 0x50fa8b:c.instructions+=26;goto B50fa8b;
case 0x50fa8e:c.instructions+=25;goto B50fa8e;
case 0x50fa91:c.instructions+=24;goto B50fa91;
case 0x50fa94:c.instructions+=23;goto B50fa94;
case 0x50fa97:c.instructions+=22;goto B50fa97;
case 0x50fa9a:c.instructions+=21;goto B50fa9a;
case 0x50fa9d:c.instructions+=20;goto B50fa9d;
case 0x50faa0:c.instructions+=19;goto B50faa0;
case 0x50faa3:c.instructions+=18;goto B50faa3;
case 0x50faa6:c.instructions+=17;goto B50faa6;
case 0x50faa9:c.instructions+=16;goto B50faa9;
case 0x50faac:c.instructions+=15;goto B50faac;
case 0x50faaf:c.instructions+=14;goto B50faaf;
case 0x50fab2:c.instructions+=13;goto B50fab2;
case 0x50fab5:c.instructions+=12;goto B50fab5;
case 0x50fab8:c.instructions+=11;goto B50fab8;
case 0x50fabb:c.instructions+=10;goto B50fabb;
case 0x50fabe:c.instructions+=9;goto B50fabe;
case 0x50fac1:c.instructions+=8;goto B50fac1;
case 0x50fac4:c.instructions+=7;goto B50fac4;
case 0x50fac7:c.instructions+=6;goto B50fac7;
case 0x50faca:c.instructions+=5;goto B50faca;
case 0x50facd:c.instructions+=4;goto B50facd;
case 0x50fad0:c.instructions+=3;goto B50fad0;
case 0x50fad3:c.instructions+=2;goto B50fad3;
case 0x50fad6:c.instructions+=1;goto B50fad6;
case 0x50fae0:goto L50fae0;
case 0x50fae2:c.instructions+=3;goto B50fae2;
case 0x50fae4:c.instructions+=2;goto B50fae4;
case 0x50fae6:c.instructions+=1;goto B50fae6;
case 0x50faec:goto L50faec;
case 0x50faf2:c.instructions+=2;goto B50faf2;
case 0x50faf4:c.instructions+=1;goto B50faf4;
case 0x50fafa:goto L50fafa;
case 0x50fb02:c.instructions+=1;goto B50fb02;
case 0x50fb08:goto L50fb08;
case 0x50fb09:c.instructions+=5;goto B50fb09;
case 0x50fb0f:c.instructions+=4;goto B50fb0f;
case 0x50fb10:c.instructions+=3;goto B50fb10;
case 0x50fb16:c.instructions+=2;goto B50fb16;
case 0x50fb1b:c.instructions+=1;goto B50fb1b;
case 0x50fb1d:goto L50fb1d;
case 0x50fb1f:goto L50fb1f;
case 0x50fb20:c.instructions+=3;goto B50fb20;
case 0x50fb26:c.instructions+=2;goto B50fb26;
case 0x50fb28:c.instructions+=1;goto B50fb28;
case 0x50fb2a:goto L50fb2a;
case 0x50fb30:c.instructions+=3;goto B50fb30;
case 0x50fb33:c.instructions+=2;goto B50fb33;
case 0x50fb38:c.instructions+=1;goto B50fb38;
case 0x50fb3a:goto L50fb3a;
case 0x50fb3c:goto L50fb3c;
case 0x50fb3d:goto L50fb3d;
case 0x50fb3f:c.instructions+=5;goto B50fb3f;
case 0x50fb42:c.instructions+=4;goto B50fb42;
case 0x50fb48:c.instructions+=3;goto B50fb48;
case 0x50fb4e:c.instructions+=2;goto B50fb4e;
case 0x50fb53:c.instructions+=1;goto B50fb53;
case 0x50fb55:goto L50fb55;
case 0x50fb57:goto L50fb57;
case 0x50fb58:c.instructions+=2;goto B50fb58;
case 0x50fb5f:c.instructions+=1;goto B50fb5f;
case 0x50fb61:goto L50fb61;
case 0x50fb67:c.instructions+=3;goto B50fb67;
case 0x50fb6a:c.instructions+=2;goto B50fb6a;
case 0x50fb6f:c.instructions+=1;goto B50fb6f;
case 0x50fb71:goto L50fb71;
case 0x50fb73:goto L50fb73;
case 0x50fb74:goto L50fb74;
case 0x50fb76:c.instructions+=5;goto B50fb76;
case 0x50fb79:c.instructions+=4;goto B50fb79;
case 0x50fb7f:c.instructions+=3;goto B50fb7f;
case 0x50fb85:c.instructions+=2;goto B50fb85;
case 0x50fb8a:c.instructions+=1;goto B50fb8a;
case 0x50fb8c:goto L50fb8c;
case 0x50fb8e:goto L50fb8e;
case 0x50fb8f:c.instructions+=2;goto B50fb8f;
case 0x50fb96:c.instructions+=1;goto B50fb96;
case 0x50fb98:goto L50fb98;
case 0x50fb9e:c.instructions+=3;goto B50fb9e;
case 0x50fba1:c.instructions+=2;goto B50fba1;
case 0x50fba6:c.instructions+=1;goto B50fba6;
case 0x50fba8:goto L50fba8;
case 0x50fbaa:goto L50fbaa;
case 0x50fbab:goto L50fbab;
case 0x50fbad:c.instructions+=5;goto B50fbad;
case 0x50fbb0:c.instructions+=4;goto B50fbb0;
case 0x50fbb6:c.instructions+=3;goto B50fbb6;
case 0x50fbbc:c.instructions+=2;goto B50fbbc;
case 0x50fbc1:c.instructions+=1;goto B50fbc1;
case 0x50fbc3:goto L50fbc3;
case 0x50fbc5:goto L50fbc5;
case 0x50fbc6:c.instructions+=2;goto B50fbc6;
case 0x50fbcd:c.instructions+=1;goto B50fbcd;
case 0x50fbcf:goto L50fbcf;
case 0x50fbd5:c.instructions+=3;goto B50fbd5;
case 0x50fbd8:c.instructions+=2;goto B50fbd8;
case 0x50fbdd:c.instructions+=1;goto B50fbdd;
case 0x50fbdf:goto L50fbdf;
case 0x50fbe1:goto L50fbe1;
case 0x50fbe2:goto L50fbe2;
case 0x50fbe4:c.instructions+=5;goto B50fbe4;
case 0x50fbe7:c.instructions+=4;goto B50fbe7;
case 0x50fbed:c.instructions+=3;goto B50fbed;
case 0x50fbf3:c.instructions+=2;goto B50fbf3;
case 0x50fbf8:c.instructions+=1;goto B50fbf8;
case 0x50fbfa:goto L50fbfa;
case 0x50fbfc:goto L50fbfc;
case 0x50fbfd:c.instructions+=2;goto B50fbfd;
case 0x50fc04:c.instructions+=1;goto B50fc04;
case 0x50fc06:goto L50fc06;
case 0x50fc0c:c.instructions+=4;goto B50fc0c;
case 0x50fc0f:c.instructions+=3;goto B50fc0f;
case 0x50fc14:c.instructions+=2;goto B50fc14;
case 0x50fc16:c.instructions+=1;goto B50fc16;
case 0x50fc18:goto L50fc18;
case 0x50fc1a:goto L50fc1a;
case 0x50fc1b:goto L50fc1b;
case 0x50fc1c:c.instructions+=1;goto B50fc1c;
case 0x50fc1d:goto L50fc1d;
case 0x50fc20:goto L50fc20;
case 0x50fc23:c.instructions+=1;goto B50fc23;
case 0x50fc25:goto L50fc25;
case 0x50fc2b:c.instructions+=2;goto B50fc2b;
case 0x50fc2d:c.instructions+=1;goto B50fc2d;
case 0x50fc2f:goto L50fc2f;
case 0x50fc33:c.instructions+=2;goto B50fc33;
case 0x50fc38:c.instructions+=1;goto B50fc38;
case 0x50fc3a:goto L50fc3a;
case 0x50fc3d:c.instructions+=5;goto B50fc3d;
case 0x50fc3e:c.instructions+=4;goto B50fc3e;
case 0x50fc3f:c.instructions+=3;goto B50fc3f;
case 0x50fc46:c.instructions+=2;goto B50fc46;
case 0x50fc49:c.instructions+=1;goto B50fc49;
case 0x50fc4e:goto L50fc4e;
case 0x50fc50:goto L50fc50;
case 0x50fc51:c.instructions+=2;goto B50fc51;
case 0x50fc52:c.instructions+=1;goto B50fc52;
case 0x50fc53:goto L50fc53;
case 0x50fc60:goto L50fc60;
case 0x50fc63:c.instructions+=1;goto B50fc63;
case 0x50fc65:goto L50fc65;
case 0x50fc6b:c.instructions+=2;goto B50fc6b;
case 0x50fc6d:c.instructions+=1;goto B50fc6d;
case 0x50fc6f:goto L50fc6f;
case 0x50fc73:c.instructions+=2;goto B50fc73;
case 0x50fc78:c.instructions+=1;goto B50fc78;
case 0x50fc7a:goto L50fc7a;
case 0x50fc7d:c.instructions+=5;goto B50fc7d;
case 0x50fc7e:c.instructions+=4;goto B50fc7e;
case 0x50fc7f:c.instructions+=3;goto B50fc7f;
case 0x50fc86:c.instructions+=2;goto B50fc86;
case 0x50fc89:c.instructions+=1;goto B50fc89;
case 0x50fc8e:goto L50fc8e;
case 0x50fc90:goto L50fc90;
case 0x50fc91:c.instructions+=2;goto B50fc91;
case 0x50fc92:c.instructions+=1;goto B50fc92;
case 0x50fc93:goto L50fc93;
case 0x50fca0:goto L50fca0;
case 0x50fca3:c.instructions+=7;goto B50fca3;
case 0x50fca4:c.instructions+=6;goto B50fca4;
case 0x50fca5:c.instructions+=5;goto B50fca5;
case 0x50fca7:c.instructions+=4;goto B50fca7;
case 0x50fca8:c.instructions+=3;goto B50fca8;
case 0x50fcaa:c.instructions+=2;goto B50fcaa;
case 0x50fcac:c.instructions+=1;goto B50fcac;
case 0x50fcae:goto L50fcae;
case 0x50fcb4:c.instructions+=2;goto B50fcb4;
case 0x50fcb6:c.instructions+=1;goto B50fcb6;
case 0x50fcb8:goto L50fcb8;
case 0x50fcbc:c.instructions+=2;goto B50fcbc;
case 0x50fcc2:c.instructions+=1;goto B50fcc2;
case 0x50fcc4:goto L50fcc4;
case 0x50fcc8:c.instructions+=1;goto B50fcc8;
case 0x50fccd:goto L50fccd;
case 0x50fcd0:c.instructions+=4;goto B50fcd0;
case 0x50fcd6:c.instructions+=3;goto B50fcd6;
case 0x50fcdd:c.instructions+=2;goto B50fcdd;
case 0x50fce2:c.instructions+=1;goto B50fce2;
case 0x50fce6:goto L50fce6;
case 0x50fce8:goto L50fce8;
case 0x50fceb:c.instructions+=4;goto B50fceb;
case 0x50fcec:c.instructions+=3;goto B50fcec;
case 0x50fcf0:c.instructions+=2;goto B50fcf0;
case 0x50fcf1:c.instructions+=1;goto B50fcf1;
case 0x50fcf6:goto L50fcf6;
case 0x50fcf8:c.instructions+=7;goto B50fcf8;
case 0x50fcf9:c.instructions+=6;goto B50fcf9;
case 0x50fcfa:c.instructions+=5;goto B50fcfa;
case 0x50fcfb:c.instructions+=4;goto B50fcfb;
case 0x50fcfd:c.instructions+=3;goto B50fcfd;
case 0x50fcfe:c.instructions+=2;goto B50fcfe;
case 0x50fd01:c.instructions+=1;goto B50fd01;
case 0x50fd04:goto L50fd04;
case 0x50fd05:c.instructions+=5;goto B50fd05;
case 0x50fd06:c.instructions+=4;goto B50fd06;
case 0x50fd08:c.instructions+=3;goto B50fd08;
case 0x50fd09:c.instructions+=2;goto B50fd09;
case 0x50fd0c:c.instructions+=1;goto B50fd0c;
case 0x50fd10:goto L50fd10;
case 0x50fd13:c.instructions+=8;goto B50fd13;
case 0x50fd14:c.instructions+=7;goto B50fd14;
case 0x50fd15:c.instructions+=6;goto B50fd15;
case 0x50fd16:c.instructions+=5;goto B50fd16;
case 0x50fd18:c.instructions+=4;goto B50fd18;
case 0x50fd1e:c.instructions+=3;goto B50fd1e;
case 0x50fd1f:c.instructions+=2;goto B50fd1f;
case 0x50fd20:c.instructions+=1;goto B50fd20;
case 0x50fd25:goto L50fd25;
case 0x50fd27:c.instructions+=4;goto B50fd27;
case 0x50fd2b:c.instructions+=3;goto B50fd2b;
case 0x50fd2f:c.instructions+=2;goto B50fd2f;
case 0x50fd32:c.instructions+=1;goto B50fd32;
case 0x50fd37:goto L50fd37;
case 0x50fd3d:c.instructions+=3;goto B50fd3d;
case 0x50fd43:c.instructions+=2;goto B50fd43;
case 0x50fd4b:c.instructions+=1;goto B50fd4b;
case 0x50fd50:goto L50fd50;
case 0x50fd55:c.instructions+=2;goto B50fd55;
case 0x50fd57:c.instructions+=1;goto B50fd57;
case 0x50fd5b:goto L50fd5b;
case 0x50fd5d:goto L50fd5d;
case 0x50fd5e:c.instructions+=3;goto B50fd5e;
case 0x50fd62:c.instructions+=2;goto B50fd62;
case 0x50fd63:c.instructions+=1;goto B50fd63;
case 0x50fd68:goto L50fd68;
case 0x50fd6c:c.instructions+=11;goto B50fd6c;
case 0x50fd6e:c.instructions+=10;goto B50fd6e;
case 0x50fd70:c.instructions+=9;goto B50fd70;
case 0x50fd72:c.instructions+=8;goto B50fd72;
case 0x50fd74:c.instructions+=7;goto B50fd74;
case 0x50fd78:c.instructions+=6;goto B50fd78;
case 0x50fd7b:c.instructions+=5;goto B50fd7b;
case 0x50fd7e:c.instructions+=4;goto B50fd7e;
case 0x50fd7f:c.instructions+=3;goto B50fd7f;
case 0x50fd83:c.instructions+=2;goto B50fd83;
case 0x50fd87:c.instructions+=1;goto B50fd87;
case 0x50fd89:goto L50fd89;
case 0x50fd8a:c.instructions+=6;goto B50fd8a;
case 0x50fd8b:c.instructions+=5;goto B50fd8b;
case 0x50fd8c:c.instructions+=4;goto B50fd8c;
case 0x50fd8e:c.instructions+=3;goto B50fd8e;
case 0x50fd8f:c.instructions+=2;goto B50fd8f;
case 0x50fd92:c.instructions+=1;goto B50fd92;
case 0x50fda0:goto L50fda0;
case 0x50fda1:c.instructions+=6;goto B50fda1;
case 0x50fda3:c.instructions+=5;goto B50fda3;
case 0x50fda9:c.instructions+=4;goto B50fda9;
case 0x50fdaa:c.instructions+=3;goto B50fdaa;
case 0x50fdad:c.instructions+=2;goto B50fdad;
case 0x50fdb3:c.instructions+=1;goto B50fdb3;
case 0x50fdb8:goto L50fdb8;
case 0x50fdba:goto L50fdba;
case 0x50fdbc:c.instructions+=6;goto B50fdbc;
case 0x50fdbe:c.instructions+=5;goto B50fdbe;
case 0x50fdc0:c.instructions+=4;goto B50fdc0;
case 0x50fdc2:c.instructions+=3;goto B50fdc2;
case 0x50fdc5:c.instructions+=2;goto B50fdc5;
case 0x50fdc6:c.instructions+=1;goto B50fdc6;
case 0x50fdcb:goto L50fdcb;
case 0x50fdcc:c.instructions+=2;goto B50fdcc;
case 0x50fdcd:c.instructions+=1;goto B50fdcd;
case 0x50fdd0:goto L50fdd0;
case 0x50fdd6:c.instructions+=4;goto B50fdd6;
case 0x50fddd:c.instructions+=3;goto B50fddd;
case 0x50fde0:c.instructions+=2;goto B50fde0;
case 0x50fde2:c.instructions+=1;goto B50fde2;
case 0x50fde7:goto L50fde7;
case 0x50fdf0:goto L50fdf0;
case 0x50fdf1:c.instructions+=6;goto B50fdf1;
case 0x50fdf3:c.instructions+=5;goto B50fdf3;
case 0x50fdf4:c.instructions+=4;goto B50fdf4;
case 0x50fdfa:c.instructions+=3;goto B50fdfa;
case 0x50fdfc:c.instructions+=2;goto B50fdfc;
case 0x50fdfe:c.instructions+=1;goto B50fdfe;
case 0x50fe03:goto L50fe03;
case 0x50fe09:c.instructions+=2;goto B50fe09;
case 0x50fe0b:c.instructions+=1;goto B50fe0b;
case 0x50fe0d:goto L50fe0d;
case 0x50fe10:c.instructions+=1;goto B50fe10;
case 0x50fe15:goto L50fe15;
case 0x50fe17:goto L50fe17;
case 0x50fe18:goto L50fe18;
case 0x50fe19:c.instructions+=2;goto B50fe19;
case 0x50fe1a:c.instructions+=1;goto B50fe1a;
case 0x50fe20:goto L50fe20;
case 0x50fe25:c.instructions+=2;goto B50fe25;
case 0x50fe27:c.instructions+=1;goto B50fe27;
case 0x50fe29:goto L50fe29;
case 0x50fe2e:c.instructions+=11;goto B50fe2e;
case 0x50fe2f:c.instructions+=10;goto B50fe2f;
case 0x50fe36:c.instructions+=9;goto B50fe36;
case 0x50fe39:c.instructions+=8;goto B50fe39;
case 0x50fe3a:c.instructions+=7;goto B50fe3a;
case 0x50fe3d:c.instructions+=6;goto B50fe3d;
case 0x50fe43:c.instructions+=5;goto B50fe43;
case 0x50fe45:c.instructions+=4;goto B50fe45;
case 0x50fe47:c.instructions+=3;goto B50fe47;
case 0x50fe48:c.instructions+=2;goto B50fe48;
case 0x50fe49:c.instructions+=1;goto B50fe49;
case 0x50fe4c:goto L50fe4c;
case 0x50fe52:c.instructions+=7;goto B50fe52;
case 0x50fe58:c.instructions+=6;goto B50fe58;
case 0x50fe5a:c.instructions+=5;goto B50fe5a;
case 0x50fe5b:c.instructions+=4;goto B50fe5b;
case 0x50fe61:c.instructions+=3;goto B50fe61;
case 0x50fe66:c.instructions+=2;goto B50fe66;
case 0x50fe67:c.instructions+=1;goto B50fe67;
case 0x50fe6a:goto L50fe6a;
case 0x50fe70:c.instructions+=3;goto B50fe70;
case 0x50fe72:c.instructions+=2;goto B50fe72;
case 0x50fe78:c.instructions+=1;goto B50fe78;
case 0x50fe7d:goto L50fe7d;
case 0x50fe83:c.instructions+=6;goto B50fe83;
case 0x50fe85:c.instructions+=5;goto B50fe85;
case 0x50fe86:c.instructions+=4;goto B50fe86;
case 0x50fe87:c.instructions+=3;goto B50fe87;
case 0x50fe89:c.instructions+=2;goto B50fe89;
case 0x50fe8b:c.instructions+=1;goto B50fe8b;
case 0x50fe8e:goto L50fe8e;
case 0x50fe90:goto L50fe90;
case 0x50fe94:c.instructions+=2;goto B50fe94;
case 0x50fe97:c.instructions+=1;goto B50fe97;
case 0x50fe9d:goto L50fe9d;
case 0x50fea4:goto L50fea4;
case 0x50fea9:c.instructions+=1;goto B50fea9;
case 0x50feaa:goto L50feaa;
case 0x50feaf:c.instructions+=1;goto B50feaf;
case 0x50feb0:goto L50feb0;
case 0x50feb5:c.instructions+=1;goto B50feb5;
case 0x50feb6:goto L50feb6;
case 0x50febb:c.instructions+=1;goto B50febb;
case 0x50febc:goto L50febc;
case 0x50fec1:c.instructions+=1;goto B50fec1;
case 0x50fec2:goto L50fec2;
case 0x50fec7:c.instructions+=1;goto B50fec7;
case 0x50fec8:goto L50fec8;
case 0x50fecd:c.instructions+=1;goto B50fecd;
case 0x50fece:goto L50fece;
case 0x50fed3:c.instructions+=1;goto B50fed3;
case 0x50fed4:goto L50fed4;
case 0x50fed9:c.instructions+=1;goto B50fed9;
case 0x50feda:goto L50feda;
case 0x50fedf:c.instructions+=1;goto B50fedf;
case 0x50fee0:goto L50fee0;
case 0x50fee5:c.instructions+=1;goto B50fee5;
case 0x50fee6:goto L50fee6;
case 0x50feeb:c.instructions+=1;goto B50feeb;
case 0x50feec:goto L50feec;
case 0x50fef1:c.instructions+=1;goto B50fef1;
case 0x50fef2:goto L50fef2;
case 0x50fef7:c.instructions+=1;goto B50fef7;
case 0x50fef8:goto L50fef8;
case 0x50fefd:c.instructions+=1;goto B50fefd;
case 0x50fefe:goto L50fefe;
case 0x50ff03:c.instructions+=1;goto B50ff03;
case 0x50ff04:goto L50ff04;
case 0x50ff09:c.instructions+=1;goto B50ff09;
case 0x50ff0a:goto L50ff0a;
case 0x50ff0f:c.instructions+=1;goto B50ff0f;
case 0x50ff10:goto L50ff10;
case 0x50ff15:c.instructions+=1;goto B50ff15;
case 0x50ff16:goto L50ff16;
case 0x50ff1b:c.instructions+=1;goto B50ff1b;
case 0x50ff1c:goto L50ff1c;
case 0x50ff21:c.instructions+=1;goto B50ff21;
case 0x50ff22:goto L50ff22;
case 0x50ff27:c.instructions+=1;goto B50ff27;
case 0x50ff28:goto L50ff28;
case 0x50ff2d:c.instructions+=1;goto B50ff2d;
case 0x50ff2e:goto L50ff2e;
case 0x50ff33:c.instructions+=1;goto B50ff33;
case 0x50ff34:goto L50ff34;
case 0x50ff39:c.instructions+=1;goto B50ff39;
case 0x50ff3a:goto L50ff3a;
case 0x50ff3c:c.instructions+=1;goto B50ff3c;
case 0x50ffb0:goto L50ffb0;
case 0x50ffb4:c.instructions+=3;goto B50ffb4;
case 0x50ffb7:c.instructions+=2;goto B50ffb7;
case 0x50ffba:c.instructions+=1;goto B50ffba;
case 0x50ffbc:goto L50ffbc;
case 0x50ffc3:c.instructions+=1;goto B50ffc3;
case 0x50ffca:goto L50ffca;
case 0x50ffce:c.instructions+=6;goto B50ffce;
case 0x50ffcf:c.instructions+=5;goto B50ffcf;
case 0x50ffd1:c.instructions+=4;goto B50ffd1;
case 0x50ffd3:c.instructions+=3;goto B50ffd3;
case 0x50ffd8:c.instructions+=2;goto B50ffd8;
case 0x50ffdd:c.instructions+=1;goto B50ffdd;
case 0x50ffde:goto L50ffde;
case 0x50ffe2:c.instructions+=6;goto B50ffe2;
case 0x50ffe3:c.instructions+=5;goto B50ffe3;
case 0x50ffe5:c.instructions+=4;goto B50ffe5;
case 0x50ffe7:c.instructions+=3;goto B50ffe7;
case 0x50ffec:c.instructions+=2;goto B50ffec;
case 0x50fff1:c.instructions+=1;goto B50fff1;
case 0x50fff2:goto L50fff2;
case 0x50fff6:c.instructions+=4;goto B50fff6;
case 0x50fff7:c.instructions+=3;goto B50fff7;
case 0x50fff9:c.instructions+=2;goto B50fff9;
case 0x50fffb:c.instructions+=1;goto B50fffb;
default:missing_instruction(c.pc);}
B50f000:L50f000:{c.instructions+=3;NFSU2_TR(0x50f000);
u8 U[4];
w4(U+0,u32(0x564b8cb6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f005:{NFSU2_TR(0x50f005);
__builtin_memmove((R+4),(R+0),4);
}
B50f007:{NFSU2_TR(0x50f007);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f00cull));
TAIL_STATIC(0x61b500u,61b);
}
B50f00c:L50f00c:{c.instructions+=2;NFSU2_TR(0x50f00c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50f00f:{NFSU2_TR(0x50f00f);
if(r1(R+518)){{goto L50f025;}}
}
B50f011:L50f011:{c.instructions+=3;NFSU2_TR(0x50f011);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B50f012:{NFSU2_TR(0x50f012);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50f015:{NFSU2_TR(0x50f015);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x50eff2u,50e);}
}
B50f017:L50f017:{c.instructions+=3;NFSU2_TR(0x50f017);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f018:{NFSU2_TR(0x50f018);
__builtin_memmove((R+4),(R+28),4);
}
B50f01a:{NFSU2_TR(0x50f01a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f01full));
TAIL_STATIC(0x6102f0u,610);
}
B50f01f:L50f01f:{c.instructions+=4;NFSU2_TR(0x50f01f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50f020:{NFSU2_TR(0x50f020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f021:{NFSU2_TR(0x50f021);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50f022:{NFSU2_TR(0x50f022);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f025:L50f025:{c.instructions+=2;NFSU2_TR(0x50f025);
w4(R+24,u32(0x40ull));
}
B50f02a:{NFSU2_TR(0x50f02a);
__builtin_memmove((R+12),(R+12),4);
}
B50f030:L50f030:{c.instructions+=3;NFSU2_TR(0x50f030);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f031:{NFSU2_TR(0x50f031);
__builtin_memmove((R+4),(R+28),4);
}
B50f033:{NFSU2_TR(0x50f033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f038ull));
TAIL_STATIC(0x6102f0u,610);
}
B50f038:L50f038:{c.instructions+=2;NFSU2_TR(0x50f038);
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
B50f03a:{NFSU2_TR(0x50f03a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50f050;}}
}
B50f03c:L50f03c:{c.instructions+=3;NFSU2_TR(0x50f03c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B50f03d:{NFSU2_TR(0x50f03d);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50f040:{NFSU2_TR(0x50f040);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50f030u);}goto L50f030;}}
}
B50f042:L50f042:{c.instructions+=3;NFSU2_TR(0x50f042);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f043:{NFSU2_TR(0x50f043);
__builtin_memmove((R+4),(R+28),4);
}
B50f045:{NFSU2_TR(0x50f045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f04aull));
TAIL_STATIC(0x6102f0u,610);
}
B50f04a:L50f04a:{c.instructions+=4;NFSU2_TR(0x50f04a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50f04b:{NFSU2_TR(0x50f04b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f04c:{NFSU2_TR(0x50f04c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50f04d:{NFSU2_TR(0x50f04d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f050:L50f050:{c.instructions+=3;NFSU2_TR(0x50f050);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f051:{NFSU2_TR(0x50f051);
__builtin_memmove((R+4),(R+28),4);
}
B50f053:{NFSU2_TR(0x50f053);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f058ull));
TAIL_STATIC(0x6102f0u,610);
}
B50f058:L50f058:{c.instructions+=4;NFSU2_TR(0x50f058);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50f059:{NFSU2_TR(0x50f059);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f05a:{NFSU2_TR(0x50f05a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50f05b:{NFSU2_TR(0x50f05b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f060:L50f060:{c.instructions+=4;NFSU2_TR(0x50f060);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f064:{NFSU2_TR(0x50f064);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffc9ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50f067:{NFSU2_TR(0x50f067);
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
B50f06a:{NFSU2_TR(0x50f06a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50f090;}}
}
B50f06c:L50f06c:{c.instructions+=1;NFSU2_TR(0x50f06c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50f094ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50f073:L50f073:{c.instructions+=2;NFSU2_TR(0x50f073);
w4(R+0,u32(0x3bull));
}
B50f078:{NFSU2_TR(0x50f078);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f07b:L50f07b:{c.instructions+=2;NFSU2_TR(0x50f07b);
w4(R+0,u32(0x3cull));
}
B50f080:{NFSU2_TR(0x50f080);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f083:L50f083:{c.instructions+=2;NFSU2_TR(0x50f083);
w4(R+0,u32(0x3dull));
}
B50f088:{NFSU2_TR(0x50f088);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f08b:L50f08b:{c.instructions+=1;NFSU2_TR(0x50f08b);
w4(R+0,u32(0x3eull));
}
B50f090:L50f090:{c.instructions+=1;NFSU2_TR(0x50f090);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f0b0:L50f0b0:{c.instructions+=4;NFSU2_TR(0x50f0b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f0b4:{NFSU2_TR(0x50f0b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f0b5:{NFSU2_TR(0x50f0b5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x940ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x940ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x940ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50f0bb:{NFSU2_TR(0x50f0bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f0c0ull));
TAIL_STATIC(0x6102f0u,610);
}
B50f0c0:L50f0c0:{c.instructions+=3;NFSU2_TR(0x50f0c0);
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
B50f0c2:{NFSU2_TR(0x50f0c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B50f0c5:{NFSU2_TR(0x50f0c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f0d0:L50f0d0:{c.instructions+=3;NFSU2_TR(0x50f0d0);
__builtin_memmove((R+0),gp(0x850078),4);
}
B50f0d5:{NFSU2_TR(0x50f0d5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50f0d8:{NFSU2_TR(0x50f0d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50f0f0;}}
}
B50f0da:L50f0da:{c.instructions+=6;NFSU2_TR(0x50f0da);
__builtin_memmove((R+4),gp(0x83898c),4);
}
B50f0e0:{NFSU2_TR(0x50f0e0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50f0e2:{NFSU2_TR(0x50f0e2);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B50f0e5:{NFSU2_TR(0x50f0e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B50f0e8:{NFSU2_TR(0x50f0e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x2ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B50f0ef:{NFSU2_TR(0x50f0ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f0f0:L50f0f0:{c.instructions+=2;NFSU2_TR(0x50f0f0);
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
B50f0f3:{NFSU2_TR(0x50f0f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50f130;}}
}
B50f0f5:L50f0f5:{c.instructions+=4;NFSU2_TR(0x50f0f5);
__builtin_memmove((R+4),gp(0x850088),4);
}
B50f0fb:{NFSU2_TR(0x50f0fb);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B50f0fe:{NFSU2_TR(0x50f0fe);
w4(R+0,u32(0x1f8ull));
}
B50f103:{NFSU2_TR(0x50f103);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50f135;}}
}
B50f105:L50f105:{c.instructions+=1;NFSU2_TR(0x50f105);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50f138ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50f10c:L50f10c:{c.instructions+=2;NFSU2_TR(0x50f10c);
w4(R+0,u32(0x20ull));
}
B50f111:{NFSU2_TR(0x50f111);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f112:L50f112:{c.instructions+=2;NFSU2_TR(0x50f112);
w4(R+0,u32(0x40ull));
}
B50f117:{NFSU2_TR(0x50f117);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f118:L50f118:{c.instructions+=2;NFSU2_TR(0x50f118);
w4(R+0,u32(0x8ull));
}
B50f11d:{NFSU2_TR(0x50f11d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f11e:L50f11e:{c.instructions+=2;NFSU2_TR(0x50f11e);
w4(R+0,u32(0x10ull));
}
B50f123:{NFSU2_TR(0x50f123);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f124:L50f124:{c.instructions+=2;NFSU2_TR(0x50f124);
w4(R+0,u32(0x100ull));
}
B50f129:{NFSU2_TR(0x50f129);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f12a:L50f12a:{c.instructions+=2;NFSU2_TR(0x50f12a);
w4(R+0,u32(0x80ull));
}
B50f12f:{NFSU2_TR(0x50f12f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f130:L50f130:{c.instructions+=1;NFSU2_TR(0x50f130);
w4(R+0,u32(0x1ull));
}
B50f135:L50f135:{c.instructions+=1;NFSU2_TR(0x50f135);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f150:L50f150:{c.instructions+=4;NFSU2_TR(0x50f150);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f154:{NFSU2_TR(0x50f154);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f155:{NFSU2_TR(0x50f155);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x940ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x940ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x940ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50f15b:{NFSU2_TR(0x50f15b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f160ull));
TAIL_STATIC(0x6102f0u,610);
}
B50f160:L50f160:{c.instructions+=2;NFSU2_TR(0x50f160);
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
B50f162:{NFSU2_TR(0x50f162);
if(r1(R+518)){{goto L50f171;}}
}
B50f164:L50f164:{c.instructions+=6;NFSU2_TR(0x50f164);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50f167:{NFSU2_TR(0x50f167);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xe0ull))));
}
B50f169:{NFSU2_TR(0x50f169);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B50f16b:{NFSU2_TR(0x50f16b);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B50f16d:{NFSU2_TR(0x50f16d);
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
B50f16e:{NFSU2_TR(0x50f16e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f171:L50f171:{c.instructions+=2;NFSU2_TR(0x50f171);
w4(R+0,u32(0x1ull));
}
B50f176:{NFSU2_TR(0x50f176);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f180:L50f180:{c.instructions+=6;NFSU2_TR(0x50f180);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f181:{NFSU2_TR(0x50f181);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f182:{NFSU2_TR(0x50f182);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f188:{NFSU2_TR(0x50f188);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f18a:{NFSU2_TR(0x50f18a);
__builtin_memmove((R+4),(R+24),4);
}
B50f18c:{NFSU2_TR(0x50f18c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f191ull));
TAIL_STATIC(0x599610u,599);
}
B50f191:L50f191:{c.instructions+=4;NFSU2_TR(0x50f191);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f193:{NFSU2_TR(0x50f193);
__builtin_memmove((R+4),(R+24),4);
}
B50f195:{NFSU2_TR(0x50f195);
__builtin_memmove((R+12),(R+0),1);
}
B50f197:{NFSU2_TR(0x50f197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f19cull));
TAIL_STATIC(0x599610u,599);
}
B50f19c:L50f19c:{c.instructions+=4;NFSU2_TR(0x50f19c);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f19e:{NFSU2_TR(0x50f19e);
__builtin_memmove((R+4),(R+24),4);
}
B50f1a0:{NFSU2_TR(0x50f1a0);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B50f1a2:{NFSU2_TR(0x50f1a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f1a7ull));
TAIL_STATIC(0x599610u,599);
}
B50f1a7:L50f1a7:{c.instructions+=4;NFSU2_TR(0x50f1a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f1a8:{NFSU2_TR(0x50f1a8);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50f1aa:{NFSU2_TR(0x50f1aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50f1ab:{NFSU2_TR(0x50f1ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f1b0:L50f1b0:{c.instructions+=4;NFSU2_TR(0x50f1b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f1b4:{NFSU2_TR(0x50f1b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f1b5:{NFSU2_TR(0x50f1b5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x940ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x940ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x940ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50f1bb:{NFSU2_TR(0x50f1bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f1c0ull));
TAIL_STATIC(0x6102f0u,610);
}
B50f1c0:L50f1c0:{c.instructions+=6;NFSU2_TR(0x50f1c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50f1c4:{NFSU2_TR(0x50f1c4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B50f1c6:{NFSU2_TR(0x50f1c6);
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
B50f1c8:{NFSU2_TR(0x50f1c8);
__builtin_memmove((R+4),(R+518),1);
}
B50f1cb:{NFSU2_TR(0x50f1cb);
__builtin_memmove((R+0),(R+4),1);
}
B50f1cd:{NFSU2_TR(0x50f1cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f1d0:L50f1d0:{c.instructions+=2;NFSU2_TR(0x50f1d0);
__builtin_memmove((R+0),gp(0x839bc1),1);
}
B50f1d5:{NFSU2_TR(0x50f1d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f1e0:L50f1e0:{c.instructions+=3;NFSU2_TR(0x50f1e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f1e4:{NFSU2_TR(0x50f1e4);
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
B50f1e7:{NFSU2_TR(0x50f1e7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50f238;}}
}
B50f1e9:L50f1e9:{c.instructions+=1;NFSU2_TR(0x50f1e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50f240ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50f1f0:L50f1f0:{c.instructions+=2;NFSU2_TR(0x50f1f0);
w4(R+0,u32(0x758d5e3cull));
}
B50f1f5:{NFSU2_TR(0x50f1f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f1f8:L50f1f8:{c.instructions+=2;NFSU2_TR(0x50f1f8);
w4(R+0,u32(0x73ad2f72ull));
}
B50f1fd:{NFSU2_TR(0x50f1fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f200:L50f200:{c.instructions+=2;NFSU2_TR(0x50f200);
w4(R+0,u32(0xa7886f38ull));
}
B50f205:{NFSU2_TR(0x50f205);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f208:L50f208:{c.instructions+=2;NFSU2_TR(0x50f208);
w4(R+0,u32(0x26eea5eull));
}
B50f20d:{NFSU2_TR(0x50f20d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f210:L50f210:{c.instructions+=2;NFSU2_TR(0x50f210);
w4(R+0,u32(0xabd0ff14ull));
}
B50f215:{NFSU2_TR(0x50f215);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f218:L50f218:{c.instructions+=2;NFSU2_TR(0x50f218);
w4(R+0,u32(0x9c34c75full));
}
B50f21d:{NFSU2_TR(0x50f21d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f220:L50f220:{c.instructions+=2;NFSU2_TR(0x50f220);
w4(R+0,u32(0xaa8959adull));
}
B50f225:{NFSU2_TR(0x50f225);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f228:L50f228:{c.instructions+=2;NFSU2_TR(0x50f228);
w4(R+0,u32(0xa7884765ull));
}
B50f22d:{NFSU2_TR(0x50f22d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f230:L50f230:{c.instructions+=2;NFSU2_TR(0x50f230);
w4(R+0,u32(0xabca6aefull));
}
B50f235:{NFSU2_TR(0x50f235);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f238:L50f238:{c.instructions+=2;NFSU2_TR(0x50f238);
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
B50f23a:{NFSU2_TR(0x50f23a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f270:L50f270:{c.instructions+=3;NFSU2_TR(0x50f270);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1e5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50f276:{NFSU2_TR(0x50f276);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50f278:{NFSU2_TR(0x50f278);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50f285;}}
}
B50f27a:L50f27a:{c.instructions+=3;NFSU2_TR(0x50f27a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f27d:{NFSU2_TR(0x50f27d);
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
B50f27f:{NFSU2_TR(0x50f27f);
if(r1(R+518)){{goto L50f285;}}
}
B50f281:L50f281:{c.instructions+=2;NFSU2_TR(0x50f281);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f284:{NFSU2_TR(0x50f284);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f285:L50f285:{c.instructions+=2;NFSU2_TR(0x50f285);
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
B50f287:{NFSU2_TR(0x50f287);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f290:L50f290:{c.instructions+=5;NFSU2_TR(0x50f290);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f291:{NFSU2_TR(0x50f291);
__builtin_memmove((R+20),(R+16),4);
}
B50f293:{NFSU2_TR(0x50f293);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f296:{NFSU2_TR(0x50f296);
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
B50f298:{NFSU2_TR(0x50f298);
if(r1(R+518)){{goto L50f303;}}
}
B50f29a:L50f29a:{c.instructions+=3;NFSU2_TR(0x50f29a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f29d:{NFSU2_TR(0x50f29d);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x9bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9bull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x9bull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50f2a2:{NFSU2_TR(0x50f2a2);
if(r1(R+518)){{goto L50f2d8;}}
}
B50f2a4:L50f2a4:{c.instructions+=2;NFSU2_TR(0x50f2a4);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50f2a7:{NFSU2_TR(0x50f2a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50f303;}}
}
B50f2a9:L50f2a9:{c.instructions+=3;NFSU2_TR(0x50f2a9);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B50f2af:{NFSU2_TR(0x50f2af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B50f2b1:{NFSU2_TR(0x50f2b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f2b4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50f2b4:L50f2b4:{c.instructions+=2;NFSU2_TR(0x50f2b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f2b5:{NFSU2_TR(0x50f2b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f2baull));
TAIL_STATIC(0x4a5b10u,4a5);
}
B50f2ba:L50f2ba:{c.instructions+=3;NFSU2_TR(0x50f2ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50f2bd:{NFSU2_TR(0x50f2bd);
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
B50f2bf:{NFSU2_TR(0x50f2bf);
if(r1(R+518)){{goto L50f303;}}
}
B50f2c1:L50f2c1:{c.instructions+=5;NFSU2_TR(0x50f2c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50f2c4:{NFSU2_TR(0x50f2c4);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f2c9:{NFSU2_TR(0x50f2c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f2ca:{NFSU2_TR(0x50f2ca);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f2cc:{NFSU2_TR(0x50f2cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f2d1ull));
TAIL_STATIC(0x4c1860u,4c1);
}
B50f2d1:L50f2d1:{c.instructions+=3;NFSU2_TR(0x50f2d1);
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
B50f2d4:{NFSU2_TR(0x50f2d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f2d5:{NFSU2_TR(0x50f2d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f2d8:L50f2d8:{c.instructions+=3;NFSU2_TR(0x50f2d8);
__builtin_memmove((R+4),gp(0x8389ac),4);
}
B50f2de:{NFSU2_TR(0x50f2de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B50f2e0:{NFSU2_TR(0x50f2e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f2e3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50f2e3:L50f2e3:{c.instructions+=2;NFSU2_TR(0x50f2e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f2e4:{NFSU2_TR(0x50f2e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f2e9ull));
TAIL_STATIC(0x4a5b10u,4a5);
}
B50f2e9:L50f2e9:{c.instructions+=3;NFSU2_TR(0x50f2e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50f2ec:{NFSU2_TR(0x50f2ec);
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
B50f2ee:{NFSU2_TR(0x50f2ee);
if(r1(R+518)){{goto L50f303;}}
}
B50f2f0:L50f2f0:{c.instructions+=5;NFSU2_TR(0x50f2f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f2f3:{NFSU2_TR(0x50f2f3);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f2f8:{NFSU2_TR(0x50f2f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f2f9:{NFSU2_TR(0x50f2f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f2fb:{NFSU2_TR(0x50f2fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f300ull));
TAIL_STATIC(0x4c1860u,4c1);
}
B50f300:L50f300:{c.instructions+=1;NFSU2_TR(0x50f300);
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
B50f303:L50f303:{c.instructions+=2;NFSU2_TR(0x50f303);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f304:{NFSU2_TR(0x50f304);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f310:L50f310:{c.instructions+=5;NFSU2_TR(0x50f310);
u8 U[14];
__builtin_memmove((U+6),gp(0x8389a0),4);
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
B50f317:{NFSU2_TR(0x50f317);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f318:{NFSU2_TR(0x50f318);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f319:{NFSU2_TR(0x50f319);
__builtin_memmove((R+12),(R+4),4);
}
B50f31b:{NFSU2_TR(0x50f31b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50f322;}}
}
B50f31d:L50f31d:{c.instructions+=4;NFSU2_TR(0x50f31d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50f31e:{NFSU2_TR(0x50f31e);
w1(R+0,u8(0x1ull));
}
B50f320:{NFSU2_TR(0x50f320);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50f321:{NFSU2_TR(0x50f321);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f322:L50f322:{c.instructions+=4;NFSU2_TR(0x50f322);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f325:{NFSU2_TR(0x50f325);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50f327:{NFSU2_TR(0x50f327);
w4(R+4,u32(0xa9ull));
}
B50f32c:{NFSU2_TR(0x50f32c);
if(r1(R+518)){{goto L50f331;}}
}
B50f32e:L50f32e:{c.instructions+=1;NFSU2_TR(0x50f32e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50f331:L50f331:{c.instructions+=4;NFSU2_TR(0x50f331);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffc1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B50f334:{NFSU2_TR(0x50f334);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50f337:{NFSU2_TR(0x50f337);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f338:{NFSU2_TR(0x50f338);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50f3f9;}}
}
B50f33e:L50f33e:{c.instructions+=1;NFSU2_TR(0x50f33e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50f400ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50f345:L50f345:{c.instructions+=5;NFSU2_TR(0x50f345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f346:{NFSU2_TR(0x50f346);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50f347:{NFSU2_TR(0x50f347);
w1(R+0,u8(0x1ull));
}
B50f349:{NFSU2_TR(0x50f349);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50f34a:{NFSU2_TR(0x50f34a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f34b:L50f34b:{c.instructions+=2;NFSU2_TR(0x50f34b);
w4(R+24,u32(0xcull));
}
B50f350:{NFSU2_TR(0x50f350);
{goto L50f386;}
}
B50f352:L50f352:{c.instructions+=2;NFSU2_TR(0x50f352);
w4(R+24,u32(0x7ull));
}
B50f357:{NFSU2_TR(0x50f357);
{goto L50f386;}
}
B50f359:L50f359:{c.instructions+=2;NFSU2_TR(0x50f359);
w4(R+24,u32(0x20ull));
}
B50f35e:{NFSU2_TR(0x50f35e);
{goto L50f386;}
}
B50f360:L50f360:{c.instructions+=2;NFSU2_TR(0x50f360);
w4(R+24,u32(0x1dull));
}
B50f365:{NFSU2_TR(0x50f365);
{goto L50f386;}
}
B50f367:L50f367:{c.instructions+=5;NFSU2_TR(0x50f367);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f368:{NFSU2_TR(0x50f368);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50f369:{NFSU2_TR(0x50f369);
w4(R+4,u32(0x838980ull));
}
B50f36e:{NFSU2_TR(0x50f36e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50f36f:{NFSU2_TR(0x50f36f);
TAIL_STATIC(0x50ed90u,50e);
}
B50f374:L50f374:{c.instructions+=5;NFSU2_TR(0x50f374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f375:{NFSU2_TR(0x50f375);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50f376:{NFSU2_TR(0x50f376);
w4(R+4,u32(0x838980ull));
}
B50f37b:{NFSU2_TR(0x50f37b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50f37c:{NFSU2_TR(0x50f37c);
TAIL_STATIC(0x50edc0u,50e);
}
B50f381:L50f381:{c.instructions+=1;NFSU2_TR(0x50f381);
w4(R+24,u32(0x10ull));
}
B50f386:L50f386:{c.instructions+=3;NFSU2_TR(0x50f386);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f387:{NFSU2_TR(0x50f387);
w4(R+4,u32(0x8392c0ull));
}
B50f38c:{NFSU2_TR(0x50f38c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f391ull));
TAIL_STATIC(0x6102f0u,610);
}
B50f391:L50f391:{c.instructions+=3;NFSU2_TR(0x50f391);
__builtin_memmove((R+28),(R+0),4);
}
B50f393:{NFSU2_TR(0x50f393);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50f395:{NFSU2_TR(0x50f395);
if(r1(R+518)){{goto L50f3f9;}}
}
B50f397:L50f397:{c.instructions+=2;NFSU2_TR(0x50f397);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xe0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B50f39b:{NFSU2_TR(0x50f39b);
if(r1(R+518)){{goto L50f3f9;}}
}
B50f39d:L50f39d:{c.instructions+=2;NFSU2_TR(0x50f39d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50f3a0:{NFSU2_TR(0x50f3a0);
if(r1(R+518)){{goto L50f3ac;}}
}
B50f3a2:L50f3a2:{c.instructions+=2;NFSU2_TR(0x50f3a2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50f3a5:{NFSU2_TR(0x50f3a5);
if(r1(R+518)){{goto L50f3ac;}}
}
B50f3a7:L50f3a7:{c.instructions+=2;NFSU2_TR(0x50f3a7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50f3aa:{NFSU2_TR(0x50f3aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50f3cf;}}
}
B50f3ac:L50f3ac:{c.instructions+=4;NFSU2_TR(0x50f3ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f3ae:{NFSU2_TR(0x50f3ae);
u8 U[4];
w4(U+0,u32(0x721aff7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f3b3:{NFSU2_TR(0x50f3b3);
__builtin_memmove((R+4),(R+28),4);
}
B50f3b5:{NFSU2_TR(0x50f3b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f3baull));
TAIL_STATIC(0x61b500u,61b);
}
B50f3ba:L50f3ba:{c.instructions+=2;NFSU2_TR(0x50f3ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50f3bc:{NFSU2_TR(0x50f3bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50f3f9;}}
}
B50f3be:L50f3be:{c.instructions+=4;NFSU2_TR(0x50f3be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f3bf:{NFSU2_TR(0x50f3bf);
u8 U[4];
w4(U+0,u32(0x6509ec92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f3c4:{NFSU2_TR(0x50f3c4);
__builtin_memmove((R+4),(R+28),4);
}
B50f3c6:{NFSU2_TR(0x50f3c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f3cbull));
TAIL_STATIC(0x61b500u,61b);
}
B50f3cb:L50f3cb:{c.instructions+=2;NFSU2_TR(0x50f3cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50f3cd:{NFSU2_TR(0x50f3cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50f3f9;}}
}
B50f3cf:L50f3cf:{c.instructions+=3;NFSU2_TR(0x50f3cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f3d2:{NFSU2_TR(0x50f3d2);
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
B50f3d4:{NFSU2_TR(0x50f3d4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50f345u);}goto L50f345;}}
}
B50f3da:L50f3da:{c.instructions+=2;NFSU2_TR(0x50f3da);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4aull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4aull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4aull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B50f3de:{NFSU2_TR(0x50f3de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50f345u);}goto L50f345;}}
}
B50f3e4:L50f3e4:{c.instructions+=3;NFSU2_TR(0x50f3e4);
u8 U[4];
w4(U+0,u32(0x931ff82eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f3e9:{NFSU2_TR(0x50f3e9);
__builtin_memmove((R+4),(R+28),4);
}
B50f3eb:{NFSU2_TR(0x50f3eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f3f0ull));
TAIL_STATIC(0x61b4e0u,61b);
}
B50f3f0:L50f3f0:{c.instructions+=6;NFSU2_TR(0x50f3f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f3f1:{NFSU2_TR(0x50f3f1);
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
B50f3f3:{NFSU2_TR(0x50f3f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50f3f4:{NFSU2_TR(0x50f3f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B50f3f7:{NFSU2_TR(0x50f3f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50f3f8:{NFSU2_TR(0x50f3f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f3f9:L50f3f9:{c.instructions+=5;NFSU2_TR(0x50f3f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f3fa:{NFSU2_TR(0x50f3fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50f3fb:{NFSU2_TR(0x50f3fb);
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
B50f3fd:{NFSU2_TR(0x50f3fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50f3fe:{NFSU2_TR(0x50f3fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f440:L50f440:{c.instructions+=5;NFSU2_TR(0x50f440);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f441:{NFSU2_TR(0x50f441);
__builtin_memmove((R+20),(R+16),4);
}
B50f443:{NFSU2_TR(0x50f443);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50f446:{NFSU2_TR(0x50f446);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50f449:{NFSU2_TR(0x50f449);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50f54c;}}
}
B50f44f:L50f44f:{c.instructions+=2;NFSU2_TR(0x50f44f);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x43ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x43ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50f452:{NFSU2_TR(0x50f452);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50f54c;}}
}
B50f458:L50f458:{c.instructions+=3;NFSU2_TR(0x50f458);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f45b:{NFSU2_TR(0x50f45b);
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
B50f45e:{NFSU2_TR(0x50f45e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L50f54c;}}
}
B50f464:L50f464:{c.instructions+=2;NFSU2_TR(0x50f464);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50f467:{NFSU2_TR(0x50f467);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L50f54c;}}
}
B50f46d:L50f46d:{c.instructions+=3;NFSU2_TR(0x50f46d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xffffffc0ull))));
}
B50f470:{NFSU2_TR(0x50f470);
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
B50f473:{NFSU2_TR(0x50f473);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50f54c;}}
}
B50f479:L50f479:{c.instructions+=1;NFSU2_TR(0x50f479);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50f558ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50f480:L50f480:{c.instructions+=3;NFSU2_TR(0x50f480);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B50f481:{NFSU2_TR(0x50f481);
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
B50f484:{NFSU2_TR(0x50f484);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50f54c;}}
}
B50f48a:L50f48a:{c.instructions+=1;NFSU2_TR(0x50f48a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50f568ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50f491:L50f491:{c.instructions+=3;NFSU2_TR(0x50f491);
w4(R+0,u32(0x4dull));
}
B50f496:{NFSU2_TR(0x50f496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f497:{NFSU2_TR(0x50f497);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f49a:L50f49a:{c.instructions+=3;NFSU2_TR(0x50f49a);
w4(R+0,u32(0x4eull));
}
B50f49f:{NFSU2_TR(0x50f49f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f4a0:{NFSU2_TR(0x50f4a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f4a3:L50f4a3:{c.instructions+=3;NFSU2_TR(0x50f4a3);
w4(R+0,u32(0x4full));
}
B50f4a8:{NFSU2_TR(0x50f4a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f4a9:{NFSU2_TR(0x50f4a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f4ac:L50f4ac:{c.instructions+=3;NFSU2_TR(0x50f4ac);
w4(R+0,u32(0x50ull));
}
B50f4b1:{NFSU2_TR(0x50f4b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f4b2:{NFSU2_TR(0x50f4b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f4b5:L50f4b5:{c.instructions+=3;NFSU2_TR(0x50f4b5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B50f4b6:{NFSU2_TR(0x50f4b6);
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
B50f4b9:{NFSU2_TR(0x50f4b9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50f54c;}}
}
B50f4bf:L50f4bf:{c.instructions+=1;NFSU2_TR(0x50f4bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50f578ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50f4c6:L50f4c6:{c.instructions+=3;NFSU2_TR(0x50f4c6);
w4(R+0,u32(0x51ull));
}
B50f4cb:{NFSU2_TR(0x50f4cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f4cc:{NFSU2_TR(0x50f4cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f4cf:L50f4cf:{c.instructions+=3;NFSU2_TR(0x50f4cf);
w4(R+0,u32(0x52ull));
}
B50f4d4:{NFSU2_TR(0x50f4d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f4d5:{NFSU2_TR(0x50f4d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f4d8:L50f4d8:{c.instructions+=3;NFSU2_TR(0x50f4d8);
w4(R+0,u32(0x53ull));
}
B50f4dd:{NFSU2_TR(0x50f4dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f4de:{NFSU2_TR(0x50f4de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f4e1:L50f4e1:{c.instructions+=3;NFSU2_TR(0x50f4e1);
w4(R+0,u32(0x54ull));
}
B50f4e6:{NFSU2_TR(0x50f4e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f4e7:{NFSU2_TR(0x50f4e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f4ea:L50f4ea:{c.instructions+=3;NFSU2_TR(0x50f4ea);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B50f4eb:{NFSU2_TR(0x50f4eb);
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
B50f4ee:{NFSU2_TR(0x50f4ee);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50f54c;}}
}
B50f4f0:L50f4f0:{c.instructions+=1;NFSU2_TR(0x50f4f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50f588ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50f4f7:L50f4f7:{c.instructions+=3;NFSU2_TR(0x50f4f7);
w4(R+0,u32(0x55ull));
}
B50f4fc:{NFSU2_TR(0x50f4fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f4fd:{NFSU2_TR(0x50f4fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f500:L50f500:{c.instructions+=3;NFSU2_TR(0x50f500);
w4(R+0,u32(0x56ull));
}
B50f505:{NFSU2_TR(0x50f505);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f506:{NFSU2_TR(0x50f506);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f509:L50f509:{c.instructions+=3;NFSU2_TR(0x50f509);
w4(R+0,u32(0x57ull));
}
B50f50e:{NFSU2_TR(0x50f50e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f50f:{NFSU2_TR(0x50f50f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f512:L50f512:{c.instructions+=3;NFSU2_TR(0x50f512);
w4(R+0,u32(0x58ull));
}
B50f517:{NFSU2_TR(0x50f517);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f518:{NFSU2_TR(0x50f518);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f51b:L50f51b:{c.instructions+=3;NFSU2_TR(0x50f51b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B50f51c:{NFSU2_TR(0x50f51c);
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
B50f51f:{NFSU2_TR(0x50f51f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50f54c;}}
}
B50f521:L50f521:{c.instructions+=1;NFSU2_TR(0x50f521);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50f598ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50f528:L50f528:{c.instructions+=3;NFSU2_TR(0x50f528);
w4(R+0,u32(0x59ull));
}
B50f52d:{NFSU2_TR(0x50f52d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f52e:{NFSU2_TR(0x50f52e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f531:L50f531:{c.instructions+=3;NFSU2_TR(0x50f531);
w4(R+0,u32(0x5aull));
}
B50f536:{NFSU2_TR(0x50f536);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f537:{NFSU2_TR(0x50f537);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f53a:L50f53a:{c.instructions+=3;NFSU2_TR(0x50f53a);
w4(R+0,u32(0x5bull));
}
B50f53f:{NFSU2_TR(0x50f53f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f540:{NFSU2_TR(0x50f540);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f543:L50f543:{c.instructions+=3;NFSU2_TR(0x50f543);
w4(R+0,u32(0x5cull));
}
B50f548:{NFSU2_TR(0x50f548);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f549:{NFSU2_TR(0x50f549);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f54c:L50f54c:{c.instructions+=3;NFSU2_TR(0x50f54c);
w4(R+0,u32(0xa9ull));
}
B50f551:{NFSU2_TR(0x50f551);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f552:{NFSU2_TR(0x50f552);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f5b0:L50f5b0:{c.instructions+=4;NFSU2_TR(0x50f5b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f5b4:{NFSU2_TR(0x50f5b4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffc1ull))));
}
B50f5b7:{NFSU2_TR(0x50f5b7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50f5ba:{NFSU2_TR(0x50f5ba);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50f5fa;}}
}
B50f5bc:L50f5bc:{c.instructions+=2;NFSU2_TR(0x50f5bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50f61cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B50f5c3:{NFSU2_TR(0x50f5c3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50f600ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50f5ca:L50f5ca:{c.instructions+=2;NFSU2_TR(0x50f5ca);
w4(R+0,u32(0x2daab07ull));
}
B50f5cf:{NFSU2_TR(0x50f5cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f5d2:L50f5d2:{c.instructions+=2;NFSU2_TR(0x50f5d2);
w4(R+0,u32(0x16bdceull));
}
B50f5d7:{NFSU2_TR(0x50f5d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f5da:L50f5da:{c.instructions+=2;NFSU2_TR(0x50f5da);
w4(R+0,u32(0xd6640dffull));
}
B50f5df:{NFSU2_TR(0x50f5df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f5e2:L50f5e2:{c.instructions+=2;NFSU2_TR(0x50f5e2);
w4(R+0,u32(0x66350f0ull));
}
B50f5e7:{NFSU2_TR(0x50f5e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f5ea:L50f5ea:{c.instructions+=2;NFSU2_TR(0x50f5ea);
w4(R+0,u32(0xda27ull));
}
B50f5ef:{NFSU2_TR(0x50f5ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f5f2:L50f5f2:{c.instructions+=2;NFSU2_TR(0x50f5f2);
w4(R+0,u32(0x3e871f1ull));
}
B50f5f7:{NFSU2_TR(0x50f5f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f5fa:L50f5fa:{c.instructions+=2;NFSU2_TR(0x50f5fa);
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
B50f5fc:{NFSU2_TR(0x50f5fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f640:L50f640:{c.instructions+=3;NFSU2_TR(0x50f640);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f644:{NFSU2_TR(0x50f644);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
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
B50f647:{NFSU2_TR(0x50f647);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50f64d;}}
}
B50f649:L50f649:{c.instructions+=1;NFSU2_TR(0x50f649);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50f64d:L50f64d:{c.instructions+=1;NFSU2_TR(0x50f64d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f650:L50f650:{c.instructions+=4;NFSU2_TR(0x50f650);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f651:{NFSU2_TR(0x50f651);
u8 U[4];
w4(U+0,u32(0xa3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f656:{NFSU2_TR(0x50f656);
w4(R+4,u32(0x8392c0ull));
}
B50f65b:{NFSU2_TR(0x50f65b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f660ull));
TAIL_STATIC(0x6102f0u,610);
}
B50f660:L50f660:{c.instructions+=4;NFSU2_TR(0x50f660);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f662:{NFSU2_TR(0x50f662);
u8 U[4];
w4(U+0,u32(0x311151f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f667:{NFSU2_TR(0x50f667);
__builtin_memmove((R+4),(R+0),4);
}
B50f669:{NFSU2_TR(0x50f669);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f66eull));
TAIL_STATIC(0x61b500u,61b);
}
B50f66e:L50f66e:{c.instructions+=4;NFSU2_TR(0x50f66e);
u8 U[4];
w4(U+0,u32(0xa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f673:{NFSU2_TR(0x50f673);
w4(R+4,u32(0x8392c0ull));
}
B50f678:{NFSU2_TR(0x50f678);
__builtin_memmove(gp(0x839bf0),(R+0),4);
}
B50f67d:{NFSU2_TR(0x50f67d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f682ull));
TAIL_STATIC(0x6102f0u,610);
}
B50f682:L50f682:{c.instructions+=6;NFSU2_TR(0x50f682);
__builtin_memmove((R+24),(R+0),4);
}
B50f684:{NFSU2_TR(0x50f684);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f686:{NFSU2_TR(0x50f686);
u8 U[4];
w4(U+0,u32(0xd99aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f68b:{NFSU2_TR(0x50f68b);
__builtin_memmove((R+4),(R+24),4);
}
B50f68d:{NFSU2_TR(0x50f68d);
__builtin_memmove(gp(0x839c24),(R+24),4);
}
B50f693:{NFSU2_TR(0x50f693);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f698ull));
TAIL_STATIC(0x61b500u,61b);
}
B50f698:L50f698:{c.instructions+=5;NFSU2_TR(0x50f698);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f69a:{NFSU2_TR(0x50f69a);
u8 U[4];
w4(U+0,u32(0x136707ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f69f:{NFSU2_TR(0x50f69f);
__builtin_memmove((R+4),(R+24),4);
}
B50f6a1:{NFSU2_TR(0x50f6a1);
__builtin_memmove(gp(0x839bfc),(R+0),4);
}
B50f6a6:{NFSU2_TR(0x50f6a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f6abull));
TAIL_STATIC(0x61b500u,61b);
}
B50f6ab:L50f6ab:{c.instructions+=5;NFSU2_TR(0x50f6ab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f6ad:{NFSU2_TR(0x50f6ad);
u8 U[4];
w4(U+0,u32(0x2ddc8f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f6b2:{NFSU2_TR(0x50f6b2);
__builtin_memmove((R+4),(R+24),4);
}
B50f6b4:{NFSU2_TR(0x50f6b4);
__builtin_memmove(gp(0x839bf4),(R+0),4);
}
B50f6b9:{NFSU2_TR(0x50f6b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f6beull));
TAIL_STATIC(0x61b500u,61b);
}
B50f6be:L50f6be:{c.instructions+=4;NFSU2_TR(0x50f6be);
u8 U[4];
w4(U+0,u32(0xa6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f6c3:{NFSU2_TR(0x50f6c3);
w4(R+4,u32(0x8392c0ull));
}
B50f6c8:{NFSU2_TR(0x50f6c8);
__builtin_memmove(gp(0x839bf8),(R+0),4);
}
B50f6cd:{NFSU2_TR(0x50f6cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f6d2ull));
TAIL_STATIC(0x6102f0u,610);
}
B50f6d2:L50f6d2:{c.instructions+=6;NFSU2_TR(0x50f6d2);
__builtin_memmove((R+24),(R+0),4);
}
B50f6d4:{NFSU2_TR(0x50f6d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f6d6:{NFSU2_TR(0x50f6d6);
u8 U[4];
w4(U+0,u32(0xd99aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f6db:{NFSU2_TR(0x50f6db);
__builtin_memmove((R+4),(R+24),4);
}
B50f6dd:{NFSU2_TR(0x50f6dd);
__builtin_memmove(gp(0x839c28),(R+24),4);
}
B50f6e3:{NFSU2_TR(0x50f6e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f6e8ull));
TAIL_STATIC(0x61b500u,61b);
}
B50f6e8:L50f6e8:{c.instructions+=5;NFSU2_TR(0x50f6e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f6ea:{NFSU2_TR(0x50f6ea);
u8 U[4];
w4(U+0,u32(0x136707ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f6ef:{NFSU2_TR(0x50f6ef);
__builtin_memmove((R+4),(R+24),4);
}
B50f6f1:{NFSU2_TR(0x50f6f1);
__builtin_memmove(gp(0x839c0c),(R+0),4);
}
B50f6f6:{NFSU2_TR(0x50f6f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f6fbull));
TAIL_STATIC(0x61b500u,61b);
}
B50f6fb:L50f6fb:{c.instructions+=5;NFSU2_TR(0x50f6fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f6fd:{NFSU2_TR(0x50f6fd);
u8 U[4];
w4(U+0,u32(0x2ddc8f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f702:{NFSU2_TR(0x50f702);
__builtin_memmove((R+4),(R+24),4);
}
B50f704:{NFSU2_TR(0x50f704);
__builtin_memmove(gp(0x839c04),(R+0),4);
}
B50f709:{NFSU2_TR(0x50f709);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f70eull));
TAIL_STATIC(0x61b500u,61b);
}
B50f70e:L50f70e:{c.instructions+=4;NFSU2_TR(0x50f70e);
u8 U[4];
w4(U+0,u32(0xa5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f713:{NFSU2_TR(0x50f713);
w4(R+4,u32(0x8392c0ull));
}
B50f718:{NFSU2_TR(0x50f718);
__builtin_memmove(gp(0x839c08),(R+0),4);
}
B50f71d:{NFSU2_TR(0x50f71d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f722ull));
TAIL_STATIC(0x6102f0u,610);
}
B50f722:L50f722:{c.instructions+=6;NFSU2_TR(0x50f722);
__builtin_memmove((R+24),(R+0),4);
}
B50f724:{NFSU2_TR(0x50f724);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f726:{NFSU2_TR(0x50f726);
u8 U[4];
w4(U+0,u32(0xd99aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f72b:{NFSU2_TR(0x50f72b);
__builtin_memmove((R+4),(R+24),4);
}
B50f72d:{NFSU2_TR(0x50f72d);
__builtin_memmove(gp(0x839c2c),(R+24),4);
}
B50f733:{NFSU2_TR(0x50f733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f738ull));
TAIL_STATIC(0x61b500u,61b);
}
B50f738:L50f738:{c.instructions+=5;NFSU2_TR(0x50f738);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f73a:{NFSU2_TR(0x50f73a);
u8 U[4];
w4(U+0,u32(0x136707ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f73f:{NFSU2_TR(0x50f73f);
__builtin_memmove((R+4),(R+24),4);
}
B50f741:{NFSU2_TR(0x50f741);
__builtin_memmove(gp(0x839c1c),(R+0),4);
}
B50f746:{NFSU2_TR(0x50f746);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f74bull));
TAIL_STATIC(0x61b500u,61b);
}
B50f74b:L50f74b:{c.instructions+=5;NFSU2_TR(0x50f74b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f74d:{NFSU2_TR(0x50f74d);
u8 U[4];
w4(U+0,u32(0x2ddc8f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f752:{NFSU2_TR(0x50f752);
__builtin_memmove((R+4),(R+24),4);
}
B50f754:{NFSU2_TR(0x50f754);
__builtin_memmove(gp(0x839c14),(R+0),4);
}
B50f759:{NFSU2_TR(0x50f759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f75eull));
TAIL_STATIC(0x61b500u,61b);
}
B50f75e:L50f75e:{c.instructions+=3;NFSU2_TR(0x50f75e);
__builtin_memmove(gp(0x839c18),(R+0),4);
}
B50f763:{NFSU2_TR(0x50f763);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f764:{NFSU2_TR(0x50f764);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f770:L50f770:{c.instructions+=9;NFSU2_TR(0x50f770);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f774:{NFSU2_TR(0x50f774);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f775:{NFSU2_TR(0x50f775);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f776:{NFSU2_TR(0x50f776);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50f779:{NFSU2_TR(0x50f779);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f77a:{NFSU2_TR(0x50f77a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f77c:{NFSU2_TR(0x50f77c);
u8 U[4];
w4(U+0,u32(0xd99aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f781:{NFSU2_TR(0x50f781);
__builtin_memmove((R+4),(R+24),4);
}
B50f783:{NFSU2_TR(0x50f783);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f788ull));
TAIL_STATIC(0x61b500u,61b);
}
B50f788:L50f788:{c.instructions+=5;NFSU2_TR(0x50f788);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f78a:{NFSU2_TR(0x50f78a);
u8 U[4];
w4(U+0,u32(0x136707ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f78f:{NFSU2_TR(0x50f78f);
__builtin_memmove((R+4),(R+24),4);
}
B50f791:{NFSU2_TR(0x50f791);
__builtin_memmove((R+28),(R+0),4);
}
B50f793:{NFSU2_TR(0x50f793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f798ull));
TAIL_STATIC(0x61b500u,61b);
}
B50f798:L50f798:{c.instructions+=5;NFSU2_TR(0x50f798);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f79a:{NFSU2_TR(0x50f79a);
u8 U[4];
w4(U+0,u32(0x2ddc8f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f79f:{NFSU2_TR(0x50f79f);
__builtin_memmove((R+4),(R+24),4);
}
B50f7a1:{NFSU2_TR(0x50f7a1);
__builtin_memmove((R+12),(R+0),4);
}
B50f7a3:{NFSU2_TR(0x50f7a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f7a8ull));
TAIL_STATIC(0x61b500u,61b);
}
B50f7a8:L50f7a8:{c.instructions+=12;NFSU2_TR(0x50f7a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50f7ac:{NFSU2_TR(0x50f7ac);
__builtin_memmove((R+24),(R+8),4);
}
B50f7ae:{NFSU2_TR(0x50f7ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B50f7b0:{NFSU2_TR(0x50f7b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50f7b3:{NFSU2_TR(0x50f7b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50f7b6:{NFSU2_TR(0x50f7b6);
w4(R+4,u32(0xffull));
}
B50f7bb:{NFSU2_TR(0x50f7bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50f7bc:{NFSU2_TR(0x50f7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50f7bf:{NFSU2_TR(0x50f7bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f7c0:{NFSU2_TR(0x50f7c0);
__builtin_memmove((R+0),(R+8),4);
}
B50f7c2:{NFSU2_TR(0x50f7c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50f7c3:{NFSU2_TR(0x50f7c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f7d0:L50f7d0:{c.instructions+=2;NFSU2_TR(0x50f7d0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x394ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x394ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x394ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50f7d6:{NFSU2_TR(0x50f7d6);
TAIL_STATIC(0x4022c0u,402);
}
B50f7e0:L50f7e0:{c.instructions+=6;NFSU2_TR(0x50f7e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f7e1:{NFSU2_TR(0x50f7e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50f7e5:{NFSU2_TR(0x50f7e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f7e6:{NFSU2_TR(0x50f7e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f7e7:{NFSU2_TR(0x50f7e7);
__builtin_memmove((R+24),(R+4),4);
}
B50f7e9:{NFSU2_TR(0x50f7e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f7eeull));
TAIL_STATIC(0x5b7ed0u,5b7);
}
B50f7ee:L50f7ee:{c.instructions+=5;NFSU2_TR(0x50f7ee);
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
B50f7f1:{NFSU2_TR(0x50f7f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50f7f7:{NFSU2_TR(0x50f7f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f7f8:{NFSU2_TR(0x50f7f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50f7f9:{NFSU2_TR(0x50f7f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f800:L50f800:{c.instructions+=5;NFSU2_TR(0x50f800);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f801:{NFSU2_TR(0x50f801);
__builtin_memmove((R+12),(R+4),4);
}
B50f803:{NFSU2_TR(0x50f803);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f805:{NFSU2_TR(0x50f805);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa15ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50f80c:{NFSU2_TR(0x50f80c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f811ull));
TAIL_STATIC(0x5b7ed0u,5b7);
}
B50f811:L50f811:{c.instructions+=8;NFSU2_TR(0x50f811);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f815:{NFSU2_TR(0x50f815);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50f819:{NFSU2_TR(0x50f819);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50f81c:{NFSU2_TR(0x50f81c);
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
B50f81e:{NFSU2_TR(0x50f81e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb64ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50f825:{NFSU2_TR(0x50f825);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B50f827:{NFSU2_TR(0x50f827);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50f82d:{NFSU2_TR(0x50f82d);
if(r1(R+518)){{goto L50f963;}}
}
B50f833:L50f833:{c.instructions+=4;NFSU2_TR(0x50f833);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f834:{NFSU2_TR(0x50f834);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f835:{NFSU2_TR(0x50f835);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B50f837:{NFSU2_TR(0x50f837);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f838:L50f838:{c.instructions+=8;NFSU2_TR(0x50f838);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B50f83a:{NFSU2_TR(0x50f83a);
__builtin_memmove((R+0),(R+8),4);
}
B50f83c:{NFSU2_TR(0x50f83c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x29ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B50f83f:{NFSU2_TR(0x50f83f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B50f842:{NFSU2_TR(0x50f842);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50f844:{NFSU2_TR(0x50f844);
u8 U[12];
w4(U+0,u32(u32(u32(0x348ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B50f84b:{NFSU2_TR(0x50f84b);
u8 U[12];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B50f852:{NFSU2_TR(0x50f852);
w4(R+4,u32(0xaull));
}
B50f857:L50f857:{c.instructions+=1;NFSU2_TR(0x50f857);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50f859;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50f857u);}goto L50f857;}
}
B50f859:L50f859:{c.instructions+=2;NFSU2_TR(0x50f859);
u8 U[34];
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
}
B50f85a:{NFSU2_TR(0x50f85a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50f870;}}
}
B50f85c:L50f85c:{c.instructions+=3;NFSU2_TR(0x50f85c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x904ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f862:{NFSU2_TR(0x50f862);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9d1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50f868:{NFSU2_TR(0x50f868);
w4(R+4,u32(0xaull));
}
B50f86d:L50f86d:{c.instructions+=1;NFSU2_TR(0x50f86d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50f86f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50f86du);}goto L50f86d;}
}
B50f86f:L50f86f:{c.instructions+=1;NFSU2_TR(0x50f86f);
u8 U[34];
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
}
B50f870:L50f870:{c.instructions+=6;NFSU2_TR(0x50f870);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B50f872:{NFSU2_TR(0x50f872);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B50f875:{NFSU2_TR(0x50f875);
u8 U[12];
w4(U+0,u32(u32(u32(0x371ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B50f87c:{NFSU2_TR(0x50f87c);
u8 U[12];
w4(U+0,u32(u32(u32(0x92dull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B50f883:{NFSU2_TR(0x50f883);
w4(R+4,u32(0xaull));
}
B50f888:{NFSU2_TR(0x50f888);
__builtin_memmove((R+28),(R+20),4);
}
B50f88a:L50f88a:{c.instructions+=1;NFSU2_TR(0x50f88a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50f88c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50f88au);}goto L50f88a;}
}
B50f88c:L50f88c:{c.instructions+=4;NFSU2_TR(0x50f88c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50f88f:{NFSU2_TR(0x50f88f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50f891:{NFSU2_TR(0x50f891);
u8 U[34];
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
}
B50f892:{NFSU2_TR(0x50f892);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50f8a4;}}
}
B50f894:L50f894:{c.instructions+=3;NFSU2_TR(0x50f894);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9d1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50f89a:{NFSU2_TR(0x50f89a);
w4(R+4,u32(0xaull));
}
B50f89f:{NFSU2_TR(0x50f89f);
__builtin_memmove((R+24),(R+20),4);
}
B50f8a1:L50f8a1:{c.instructions+=1;NFSU2_TR(0x50f8a1);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50f8a3;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50f8a1u);}goto L50f8a1;}
}
B50f8a3:L50f8a3:{c.instructions+=1;NFSU2_TR(0x50f8a3);
u8 U[34];
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
}
B50f8a4:L50f8a4:{c.instructions+=6;NFSU2_TR(0x50f8a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B50f8a6:{NFSU2_TR(0x50f8a6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B50f8a9:{NFSU2_TR(0x50f8a9);
u8 U[12];
w4(U+0,u32(u32(u32(0x39aull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B50f8b0:{NFSU2_TR(0x50f8b0);
u8 U[12];
w4(U+0,u32(u32(u32(0x956ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B50f8b7:{NFSU2_TR(0x50f8b7);
w4(R+4,u32(0xaull));
}
B50f8bc:{NFSU2_TR(0x50f8bc);
__builtin_memmove((R+28),(R+20),4);
}
B50f8be:L50f8be:{c.instructions+=1;NFSU2_TR(0x50f8be);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50f8c0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50f8beu);}goto L50f8be;}
}
B50f8c0:L50f8c0:{c.instructions+=4;NFSU2_TR(0x50f8c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50f8c3:{NFSU2_TR(0x50f8c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50f8c5:{NFSU2_TR(0x50f8c5);
u8 U[34];
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
}
B50f8c6:{NFSU2_TR(0x50f8c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50f8d8;}}
}
B50f8c8:L50f8c8:{c.instructions+=3;NFSU2_TR(0x50f8c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9d1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50f8ce:{NFSU2_TR(0x50f8ce);
w4(R+4,u32(0xaull));
}
B50f8d3:{NFSU2_TR(0x50f8d3);
__builtin_memmove((R+24),(R+20),4);
}
B50f8d5:L50f8d5:{c.instructions+=1;NFSU2_TR(0x50f8d5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50f8d7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50f8d5u);}goto L50f8d5;}
}
B50f8d7:L50f8d7:{c.instructions+=1;NFSU2_TR(0x50f8d7);
u8 U[34];
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
}
B50f8d8:L50f8d8:{c.instructions+=6;NFSU2_TR(0x50f8d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B50f8da:{NFSU2_TR(0x50f8da);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B50f8dd:{NFSU2_TR(0x50f8dd);
u8 U[12];
w4(U+0,u32(u32(u32(0x3c3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B50f8e4:{NFSU2_TR(0x50f8e4);
u8 U[12];
w4(U+0,u32(u32(u32(0x97full))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B50f8eb:{NFSU2_TR(0x50f8eb);
w4(R+4,u32(0xaull));
}
B50f8f0:{NFSU2_TR(0x50f8f0);
__builtin_memmove((R+28),(R+20),4);
}
B50f8f2:L50f8f2:{c.instructions+=1;NFSU2_TR(0x50f8f2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50f8f4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50f8f2u);}goto L50f8f2;}
}
B50f8f4:L50f8f4:{c.instructions+=4;NFSU2_TR(0x50f8f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50f8f7:{NFSU2_TR(0x50f8f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50f8f9:{NFSU2_TR(0x50f8f9);
u8 U[34];
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
}
B50f8fa:{NFSU2_TR(0x50f8fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50f90c;}}
}
B50f8fc:L50f8fc:{c.instructions+=3;NFSU2_TR(0x50f8fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9d1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50f902:{NFSU2_TR(0x50f902);
w4(R+4,u32(0xaull));
}
B50f907:{NFSU2_TR(0x50f907);
__builtin_memmove((R+24),(R+20),4);
}
B50f909:L50f909:{c.instructions+=1;NFSU2_TR(0x50f909);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50f90b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50f909u);}goto L50f909;}
}
B50f90b:L50f90b:{c.instructions+=1;NFSU2_TR(0x50f90b);
u8 U[34];
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
}
B50f90c:L50f90c:{c.instructions+=6;NFSU2_TR(0x50f90c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B50f90e:{NFSU2_TR(0x50f90e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B50f911:{NFSU2_TR(0x50f911);
u8 U[12];
w4(U+0,u32(u32(u32(0x9a8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B50f918:{NFSU2_TR(0x50f918);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ecull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B50f91f:{NFSU2_TR(0x50f91f);
w4(R+4,u32(0xaull));
}
B50f924:{NFSU2_TR(0x50f924);
__builtin_memmove((R+28),(R+20),4);
}
B50f926:L50f926:{c.instructions+=1;NFSU2_TR(0x50f926);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50f928;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50f926u);}goto L50f926;}
}
B50f928:L50f928:{c.instructions+=4;NFSU2_TR(0x50f928);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B50f92b:{NFSU2_TR(0x50f92b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50f92d:{NFSU2_TR(0x50f92d);
u8 U[34];
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
}
B50f92e:{NFSU2_TR(0x50f92e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50f940;}}
}
B50f930:L50f930:{c.instructions+=3;NFSU2_TR(0x50f930);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9d1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50f936:{NFSU2_TR(0x50f936);
w4(R+4,u32(0xaull));
}
B50f93b:{NFSU2_TR(0x50f93b);
__builtin_memmove((R+24),(R+20),4);
}
B50f93d:L50f93d:{c.instructions+=1;NFSU2_TR(0x50f93d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50f93f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50f93du);}goto L50f93d;}
}
B50f93f:L50f93f:{c.instructions+=1;NFSU2_TR(0x50f93f);
u8 U[34];
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
}
B50f940:L50f940:{c.instructions+=3;NFSU2_TR(0x50f940);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x5ull))));
}
B50f943:{NFSU2_TR(0x50f943);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B50f946:{NFSU2_TR(0x50f946);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50f838u);}goto L50f838;}}
}
B50f94c:L50f94c:{c.instructions+=8;NFSU2_TR(0x50f94c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B50f94e:{NFSU2_TR(0x50f94e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B50f950:{NFSU2_TR(0x50f950);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f952:{NFSU2_TR(0x50f952);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B50f955:{NFSU2_TR(0x50f955);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f956:{NFSU2_TR(0x50f956);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa0cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50f95c:{NFSU2_TR(0x50f95c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f95d:{NFSU2_TR(0x50f95d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f960ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50f960:L50f960:{c.instructions+=3;NFSU2_TR(0x50f960);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50f961:{NFSU2_TR(0x50f961);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f962:{NFSU2_TR(0x50f962);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50f963:L50f963:{c.instructions+=2;NFSU2_TR(0x50f963);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50f964:{NFSU2_TR(0x50f964);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f970:L50f970:{c.instructions+=10;NFSU2_TR(0x50f970);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f971:{NFSU2_TR(0x50f971);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50f973:{NFSU2_TR(0x50f973);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f974:{NFSU2_TR(0x50f974);
__builtin_memmove((R+24),(R+4),4);
}
B50f976:{NFSU2_TR(0x50f976);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f977:{NFSU2_TR(0x50f977);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B50f979:{NFSU2_TR(0x50f979);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50f97f:{NFSU2_TR(0x50f97f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50f985:{NFSU2_TR(0x50f985);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9fcull))));
w4(U+4,u32(0xffull));
s4(u32(r4(U+0)),r4(U+4));
}
B50f98f:{NFSU2_TR(0x50f98f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f994ull));
TAIL_STATIC(0x5b7ed0u,5b7);
}
B50f994:L50f994:{c.instructions+=7;NFSU2_TR(0x50f994);
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
B50f997:{NFSU2_TR(0x50f997);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50f99d:{NFSU2_TR(0x50f99d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa15ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50f9a3:{NFSU2_TR(0x50f9a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa14ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50f9a9:{NFSU2_TR(0x50f9a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f9aa:{NFSU2_TR(0x50f9aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50f9ab:{NFSU2_TR(0x50f9ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f9b0:L50f9b0:{c.instructions+=5;NFSU2_TR(0x50f9b0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f9b1:{NFSU2_TR(0x50f9b1);
__builtin_memmove((R+28),(R+4),4);
}
B50f9b3:{NFSU2_TR(0x50f9b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50f9b9:{NFSU2_TR(0x50f9b9);
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
B50f9bb:{NFSU2_TR(0x50f9bb);
if(r1(R+518)){{goto L50f9db;}}
}
B50f9bd:L50f9bd:{c.instructions+=4;NFSU2_TR(0x50f9bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f9be:{NFSU2_TR(0x50f9be);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50f9c2:{NFSU2_TR(0x50f9c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f9c3:{NFSU2_TR(0x50f9c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f9c8ull));
TAIL_STATIC(0x59b150u,59b);
}
B50f9c8:L50f9c8:{c.instructions+=3;NFSU2_TR(0x50f9c8);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B50f9cb:{NFSU2_TR(0x50f9cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f9cc:{NFSU2_TR(0x50f9cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50f9db;}}
}
B50f9ce:L50f9ce:{c.instructions+=3;NFSU2_TR(0x50f9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50f9d4:{NFSU2_TR(0x50f9d4);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f9d6:{NFSU2_TR(0x50f9d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50f9dbull));
TAIL_STATIC(0x59b150u,59b);
}
B50f9db:L50f9db:{c.instructions+=2;NFSU2_TR(0x50f9db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50f9dc:{NFSU2_TR(0x50f9dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50f9e0:L50f9e0:{c.instructions+=8;NFSU2_TR(0x50f9e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f9e1:{NFSU2_TR(0x50f9e1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f9e2:{NFSU2_TR(0x50f9e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f9e3:{NFSU2_TR(0x50f9e3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B50f9e5:{NFSU2_TR(0x50f9e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50f9e6:{NFSU2_TR(0x50f9e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50f9ec:{NFSU2_TR(0x50f9ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa78ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50f9f2:{NFSU2_TR(0x50f9f2);
w4(R+20,u32(0x3ull));
}
B50f9f7:L50f9f7:{c.instructions+=7;NFSU2_TR(0x50f9f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50f9fa:{NFSU2_TR(0x50f9fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50f9fd:{NFSU2_TR(0x50f9fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B50f9ff:{NFSU2_TR(0x50f9ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa02:{NFSU2_TR(0x50fa02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa05:{NFSU2_TR(0x50fa05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa08:{NFSU2_TR(0x50fa08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50fa0dull));
TAIL_STATIC(0x5ede10u,5ed);
}
B50fa0d:L50fa0d:{c.instructions+=5;NFSU2_TR(0x50fa0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50fa10:{NFSU2_TR(0x50fa10);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50fa12:{NFSU2_TR(0x50fa12);
w4(R+4,u32(0x9ull));
}
B50fa17:{NFSU2_TR(0x50fa17);
w1(R+512,carry<u32>(r4(R+24),u32(0x6cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6cull))));
}
B50fa1a:{NFSU2_TR(0x50fa1a);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+20),u32(0x1ull)));
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50fa1b:L50fa1b:{c.instructions+=1;NFSU2_TR(0x50fa1b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50fa1d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fa1bu);}goto L50fa1b;}
}
B50fa1d:L50fa1d:{c.instructions+=1;NFSU2_TR(0x50fa1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50f9f7u);}goto L50f9f7;}}
}
B50fa1f:L50fa1f:{c.instructions+=5;NFSU2_TR(0x50fa1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50fa20:{NFSU2_TR(0x50fa20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50fa21:{NFSU2_TR(0x50fa21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50fa22:{NFSU2_TR(0x50fa22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50fa23:{NFSU2_TR(0x50fa23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fa30:L50fa30:{c.instructions+=57;NFSU2_TR(0x50fa30);
__builtin_memmove((R+0),(R+4),4);
}
B50fa32:{NFSU2_TR(0x50fa32);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50fa36:{NFSU2_TR(0x50fa36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B50fa38:{NFSU2_TR(0x50fa38);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B50fa3a:{NFSU2_TR(0x50fa3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fa3d:{NFSU2_TR(0x50fa3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa40:{NFSU2_TR(0x50fa40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fa43:{NFSU2_TR(0x50fa43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa46:{NFSU2_TR(0x50fa46);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fa49:{NFSU2_TR(0x50fa49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa4c:{NFSU2_TR(0x50fa4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fa4f:{NFSU2_TR(0x50fa4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa52:{NFSU2_TR(0x50fa52);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fa55:{NFSU2_TR(0x50fa55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa58:{NFSU2_TR(0x50fa58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fa5b:{NFSU2_TR(0x50fa5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa5e:{NFSU2_TR(0x50fa5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fa61:{NFSU2_TR(0x50fa61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa64:{NFSU2_TR(0x50fa64);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fa67:{NFSU2_TR(0x50fa67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa6a:{NFSU2_TR(0x50fa6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fa6d:{NFSU2_TR(0x50fa6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa70:{NFSU2_TR(0x50fa70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fa73:{NFSU2_TR(0x50fa73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa76:{NFSU2_TR(0x50fa76);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fa79:{NFSU2_TR(0x50fa79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa7c:{NFSU2_TR(0x50fa7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fa7f:{NFSU2_TR(0x50fa7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa82:{NFSU2_TR(0x50fa82);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fa85:{NFSU2_TR(0x50fa85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa88:{NFSU2_TR(0x50fa88);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fa8b:{NFSU2_TR(0x50fa8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa8e:{NFSU2_TR(0x50fa8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fa91:{NFSU2_TR(0x50fa91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa94:{NFSU2_TR(0x50fa94);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fa97:{NFSU2_TR(0x50fa97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fa9a:{NFSU2_TR(0x50fa9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fa9d:{NFSU2_TR(0x50fa9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50faa0:{NFSU2_TR(0x50faa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50faa3:{NFSU2_TR(0x50faa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50faa6:{NFSU2_TR(0x50faa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50faa9:{NFSU2_TR(0x50faa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50faac:{NFSU2_TR(0x50faac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50faaf:{NFSU2_TR(0x50faaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fab2:{NFSU2_TR(0x50fab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fab5:{NFSU2_TR(0x50fab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fab8:{NFSU2_TR(0x50fab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fabb:{NFSU2_TR(0x50fabb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fabe:{NFSU2_TR(0x50fabe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fac1:{NFSU2_TR(0x50fac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fac4:{NFSU2_TR(0x50fac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fac7:{NFSU2_TR(0x50fac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50faca:{NFSU2_TR(0x50faca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50facd:{NFSU2_TR(0x50facd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fad0:{NFSU2_TR(0x50fad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50fad3:{NFSU2_TR(0x50fad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fad6:{NFSU2_TR(0x50fad6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fae0:L50fae0:{c.instructions+=4;NFSU2_TR(0x50fae0);
__builtin_memmove((R+0),(R+4),4);
}
B50fae2:{NFSU2_TR(0x50fae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B50fae4:{NFSU2_TR(0x50fae4);
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
B50fae6:{NFSU2_TR(0x50fae6);
if(r1(R+518)){{goto L50fc1d;}}
}
B50faec:L50faec:{c.instructions+=3;NFSU2_TR(0x50faec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50faf2:{NFSU2_TR(0x50faf2);
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
B50faf4:{NFSU2_TR(0x50faf4);
if(r1(R+518)){{goto L50fc1d;}}
}
B50fafa:L50fafa:{c.instructions+=2;NFSU2_TR(0x50fafa);
u8 U[22];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B50fb02:{NFSU2_TR(0x50fb02);
if(r1(R+518)){{goto L50fc1d;}}
}
B50fb08:L50fb08:{c.instructions+=6;NFSU2_TR(0x50fb08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fb09:{NFSU2_TR(0x50fb09);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x360ull))));
__builtin_memmove((R+8),(U+0),4);
}
B50fb0f:{NFSU2_TR(0x50fb0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fb10:{NFSU2_TR(0x50fb10);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x904ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50fb16:{NFSU2_TR(0x50fb16);
w4(R+4,u32(0xaull));
}
B50fb1b:{NFSU2_TR(0x50fb1b);
__builtin_memmove((R+28),(R+8),4);
}
B50fb1d:L50fb1d:{c.instructions+=1;NFSU2_TR(0x50fb1d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50fb1f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fb1du);}goto L50fb1d;}
}
B50fb1f:L50fb1f:{c.instructions+=4;NFSU2_TR(0x50fb1f);
u8 U[34];
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
}
B50fb20:{NFSU2_TR(0x50fb20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50fb26:{NFSU2_TR(0x50fb26);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50fb28:{NFSU2_TR(0x50fb28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50fb3d;}}
}
B50fb2a:L50fb2a:{c.instructions+=4;NFSU2_TR(0x50fb2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50fb30:{NFSU2_TR(0x50fb30);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B50fb33:{NFSU2_TR(0x50fb33);
w4(R+4,u32(0xaull));
}
B50fb38:{NFSU2_TR(0x50fb38);
__builtin_memmove((R+28),(R+8),4);
}
B50fb3a:L50fb3a:{c.instructions+=1;NFSU2_TR(0x50fb3a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50fb3c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fb3au);}goto L50fb3a;}
}
B50fb3c:L50fb3c:{c.instructions+=1;NFSU2_TR(0x50fb3c);
u8 U[34];
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
}
B50fb3d:L50fb3d:{c.instructions+=6;NFSU2_TR(0x50fb3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B50fb3f:{NFSU2_TR(0x50fb3f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B50fb42:{NFSU2_TR(0x50fb42);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x371ull))));
__builtin_memmove((R+8),(U+0),4);
}
B50fb48:{NFSU2_TR(0x50fb48);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x92dull))));
__builtin_memmove((R+24),(U+0),4);
}
B50fb4e:{NFSU2_TR(0x50fb4e);
w4(R+4,u32(0xaull));
}
B50fb53:{NFSU2_TR(0x50fb53);
__builtin_memmove((R+28),(R+8),4);
}
B50fb55:L50fb55:{c.instructions+=1;NFSU2_TR(0x50fb55);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50fb57;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fb55u);}goto L50fb55;}
}
B50fb57:L50fb57:{c.instructions+=3;NFSU2_TR(0x50fb57);
u8 U[34];
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
}
B50fb58:{NFSU2_TR(0x50fb58);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B50fb5f:{NFSU2_TR(0x50fb5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50fb74;}}
}
B50fb61:L50fb61:{c.instructions+=4;NFSU2_TR(0x50fb61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50fb67:{NFSU2_TR(0x50fb67);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B50fb6a:{NFSU2_TR(0x50fb6a);
w4(R+4,u32(0xaull));
}
B50fb6f:{NFSU2_TR(0x50fb6f);
__builtin_memmove((R+28),(R+8),4);
}
B50fb71:L50fb71:{c.instructions+=1;NFSU2_TR(0x50fb71);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50fb73;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fb71u);}goto L50fb71;}
}
B50fb73:L50fb73:{c.instructions+=1;NFSU2_TR(0x50fb73);
u8 U[34];
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
}
B50fb74:L50fb74:{c.instructions+=6;NFSU2_TR(0x50fb74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B50fb76:{NFSU2_TR(0x50fb76);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B50fb79:{NFSU2_TR(0x50fb79);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x39aull))));
__builtin_memmove((R+8),(U+0),4);
}
B50fb7f:{NFSU2_TR(0x50fb7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x956ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50fb85:{NFSU2_TR(0x50fb85);
w4(R+4,u32(0xaull));
}
B50fb8a:{NFSU2_TR(0x50fb8a);
__builtin_memmove((R+28),(R+8),4);
}
B50fb8c:L50fb8c:{c.instructions+=1;NFSU2_TR(0x50fb8c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50fb8e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fb8cu);}goto L50fb8c;}
}
B50fb8e:L50fb8e:{c.instructions+=3;NFSU2_TR(0x50fb8e);
u8 U[34];
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
}
B50fb8f:{NFSU2_TR(0x50fb8f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B50fb96:{NFSU2_TR(0x50fb96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50fbab;}}
}
B50fb98:L50fb98:{c.instructions+=4;NFSU2_TR(0x50fb98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50fb9e:{NFSU2_TR(0x50fb9e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B50fba1:{NFSU2_TR(0x50fba1);
w4(R+4,u32(0xaull));
}
B50fba6:{NFSU2_TR(0x50fba6);
__builtin_memmove((R+28),(R+8),4);
}
B50fba8:L50fba8:{c.instructions+=1;NFSU2_TR(0x50fba8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50fbaa;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fba8u);}goto L50fba8;}
}
B50fbaa:L50fbaa:{c.instructions+=1;NFSU2_TR(0x50fbaa);
u8 U[34];
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
}
B50fbab:L50fbab:{c.instructions+=6;NFSU2_TR(0x50fbab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B50fbad:{NFSU2_TR(0x50fbad);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B50fbb0:{NFSU2_TR(0x50fbb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3c3ull))));
__builtin_memmove((R+8),(U+0),4);
}
B50fbb6:{NFSU2_TR(0x50fbb6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x97full))));
__builtin_memmove((R+24),(U+0),4);
}
B50fbbc:{NFSU2_TR(0x50fbbc);
w4(R+4,u32(0xaull));
}
B50fbc1:{NFSU2_TR(0x50fbc1);
__builtin_memmove((R+28),(R+8),4);
}
B50fbc3:L50fbc3:{c.instructions+=1;NFSU2_TR(0x50fbc3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50fbc5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fbc3u);}goto L50fbc3;}
}
B50fbc5:L50fbc5:{c.instructions+=3;NFSU2_TR(0x50fbc5);
u8 U[34];
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
}
B50fbc6:{NFSU2_TR(0x50fbc6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B50fbcd:{NFSU2_TR(0x50fbcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50fbe2;}}
}
B50fbcf:L50fbcf:{c.instructions+=4;NFSU2_TR(0x50fbcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50fbd5:{NFSU2_TR(0x50fbd5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B50fbd8:{NFSU2_TR(0x50fbd8);
w4(R+4,u32(0xaull));
}
B50fbdd:{NFSU2_TR(0x50fbdd);
__builtin_memmove((R+28),(R+8),4);
}
B50fbdf:L50fbdf:{c.instructions+=1;NFSU2_TR(0x50fbdf);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50fbe1;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fbdfu);}goto L50fbdf;}
}
B50fbe1:L50fbe1:{c.instructions+=1;NFSU2_TR(0x50fbe1);
u8 U[34];
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
}
B50fbe2:L50fbe2:{c.instructions+=6;NFSU2_TR(0x50fbe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B50fbe4:{NFSU2_TR(0x50fbe4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B50fbe7:{NFSU2_TR(0x50fbe7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ecull))));
__builtin_memmove((R+8),(U+0),4);
}
B50fbed:{NFSU2_TR(0x50fbed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9a8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50fbf3:{NFSU2_TR(0x50fbf3);
w4(R+4,u32(0xaull));
}
B50fbf8:{NFSU2_TR(0x50fbf8);
__builtin_memmove((R+28),(R+8),4);
}
B50fbfa:L50fbfa:{c.instructions+=1;NFSU2_TR(0x50fbfa);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50fbfc;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fbfau);}goto L50fbfa;}
}
B50fbfc:L50fbfc:{c.instructions+=3;NFSU2_TR(0x50fbfc);
u8 U[34];
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
}
B50fbfd:{NFSU2_TR(0x50fbfd);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9fcull))));
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
B50fc04:{NFSU2_TR(0x50fc04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50fc1b;}}
}
B50fc06:L50fc06:{c.instructions+=5;NFSU2_TR(0x50fc06);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50fc0c:{NFSU2_TR(0x50fc0c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x14ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50fc0f:{NFSU2_TR(0x50fc0f);
w4(R+4,u32(0xaull));
}
B50fc14:{NFSU2_TR(0x50fc14);
__builtin_memmove((R+24),(R+0),4);
}
B50fc16:{NFSU2_TR(0x50fc16);
__builtin_memmove((R+28),(R+8),4);
}
B50fc18:L50fc18:{c.instructions+=1;NFSU2_TR(0x50fc18);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50fc1a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fc18u);}goto L50fc18;}
}
B50fc1a:L50fc1a:{c.instructions+=1;NFSU2_TR(0x50fc1a);
u8 U[34];
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
}
B50fc1b:L50fc1b:{c.instructions+=2;NFSU2_TR(0x50fc1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50fc1c:{NFSU2_TR(0x50fc1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50fc1d:L50fc1d:{c.instructions+=1;NFSU2_TR(0x50fc1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fc20:L50fc20:{c.instructions+=2;NFSU2_TR(0x50fc20);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
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
B50fc23:{NFSU2_TR(0x50fc23);
if(r1(R+518)){{goto L50fc53;}}
}
B50fc25:L50fc25:{c.instructions+=3;NFSU2_TR(0x50fc25);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fc2b:{NFSU2_TR(0x50fc2b);
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
B50fc2d:{NFSU2_TR(0x50fc2d);
if(r1(R+518)){{goto L50fc53;}}
}
B50fc2f:L50fc2f:{c.instructions+=3;NFSU2_TR(0x50fc2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50fc33:{NFSU2_TR(0x50fc33);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50fc38:{NFSU2_TR(0x50fc38);
if(r1(R+518)){{goto L50fc53;}}
}
B50fc3a:L50fc3a:{c.instructions+=6;NFSU2_TR(0x50fc3a);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x29ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B50fc3d:{NFSU2_TR(0x50fc3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fc3e:{NFSU2_TR(0x50fc3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fc3f:{NFSU2_TR(0x50fc3f);
u8 U[12];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B50fc46:{NFSU2_TR(0x50fc46);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50fc49:{NFSU2_TR(0x50fc49);
w4(R+4,u32(0xaull));
}
B50fc4e:L50fc4e:{c.instructions+=1;NFSU2_TR(0x50fc4e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50fc50;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fc4eu);}goto L50fc4e;}
}
B50fc50:L50fc50:{c.instructions+=3;NFSU2_TR(0x50fc50);
u8 U[34];
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
}
B50fc51:{NFSU2_TR(0x50fc51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50fc52:{NFSU2_TR(0x50fc52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50fc53:L50fc53:{c.instructions+=1;NFSU2_TR(0x50fc53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fc60:L50fc60:{c.instructions+=2;NFSU2_TR(0x50fc60);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
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
B50fc63:{NFSU2_TR(0x50fc63);
if(r1(R+518)){{goto L50fc93;}}
}
B50fc65:L50fc65:{c.instructions+=3;NFSU2_TR(0x50fc65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50fc6b:{NFSU2_TR(0x50fc6b);
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
B50fc6d:{NFSU2_TR(0x50fc6d);
if(r1(R+518)){{goto L50fc93;}}
}
B50fc6f:L50fc6f:{c.instructions+=3;NFSU2_TR(0x50fc6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50fc73:{NFSU2_TR(0x50fc73);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50fc78:{NFSU2_TR(0x50fc78);
if(r1(R+518)){{goto L50fc93;}}
}
B50fc7a:L50fc7a:{c.instructions+=6;NFSU2_TR(0x50fc7a);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x29ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B50fc7d:{NFSU2_TR(0x50fc7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fc7e:{NFSU2_TR(0x50fc7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fc7f:{NFSU2_TR(0x50fc7f);
u8 U[12];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B50fc86:{NFSU2_TR(0x50fc86);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50fc89:{NFSU2_TR(0x50fc89);
w4(R+4,u32(0xaull));
}
B50fc8e:L50fc8e:{c.instructions+=1;NFSU2_TR(0x50fc8e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50fc90;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fc8eu);}goto L50fc8e;}
}
B50fc90:L50fc90:{c.instructions+=3;NFSU2_TR(0x50fc90);
u8 U[34];
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
}
B50fc91:{NFSU2_TR(0x50fc91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50fc92:{NFSU2_TR(0x50fc92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50fc93:L50fc93:{c.instructions+=1;NFSU2_TR(0x50fc93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fca0:L50fca0:{c.instructions+=8;NFSU2_TR(0x50fca0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B50fca3:{NFSU2_TR(0x50fca3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fca4:{NFSU2_TR(0x50fca4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fca5:{NFSU2_TR(0x50fca5);
__builtin_memmove((R+12),(R+4),4);
}
B50fca7:{NFSU2_TR(0x50fca7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fca8:{NFSU2_TR(0x50fca8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B50fcaa:{NFSU2_TR(0x50fcaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50fcac:{NFSU2_TR(0x50fcac);
if(r1(R+518)){{goto L50fd04;}}
}
B50fcae:L50fcae:{c.instructions+=3;NFSU2_TR(0x50fcae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50fcb4:{NFSU2_TR(0x50fcb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50fcb6:{NFSU2_TR(0x50fcb6);
if(r1(R+518)){{goto L50fd04;}}
}
B50fcb8:L50fcb8:{c.instructions+=3;NFSU2_TR(0x50fcb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50fcbc:{NFSU2_TR(0x50fcbc);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50fcc2:{NFSU2_TR(0x50fcc2);
if(r1(R+518)){{goto L50fd04;}}
}
B50fcc4:L50fcc4:{c.instructions+=2;NFSU2_TR(0x50fcc4);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50fcc8:{NFSU2_TR(0x50fcc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50fccdull));
TAIL_STATIC(0x5a7930u,5a7);
}
B50fccd:L50fccd:{c.instructions+=5;NFSU2_TR(0x50fccd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x29ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B50fcd0:{NFSU2_TR(0x50fcd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50fcd6:{NFSU2_TR(0x50fcd6);
u8 U[12];
w4(U+0,u32(u32(u32(0x360ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B50fcdd:{NFSU2_TR(0x50fcdd);
w4(R+4,u32(0xaull));
}
B50fce2:{NFSU2_TR(0x50fce2);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B50fce6:L50fce6:{c.instructions+=1;NFSU2_TR(0x50fce6);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50fce8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fce6u);}goto L50fce6;}
}
B50fce8:L50fce8:{c.instructions+=5;NFSU2_TR(0x50fce8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B50fceb:{NFSU2_TR(0x50fceb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fcec:{NFSU2_TR(0x50fcec);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50fcf0:{NFSU2_TR(0x50fcf0);
u8 U[34];
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
}
B50fcf1:{NFSU2_TR(0x50fcf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50fcf6ull));
TAIL_STATIC(0x59ae90u,59a);
}
B50fcf6:L50fcf6:{c.instructions+=8;NFSU2_TR(0x50fcf6);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B50fcf8:{NFSU2_TR(0x50fcf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50fcf9:{NFSU2_TR(0x50fcf9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50fcfa:{NFSU2_TR(0x50fcfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50fcfb:{NFSU2_TR(0x50fcfb);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B50fcfd:{NFSU2_TR(0x50fcfd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50fcfe:{NFSU2_TR(0x50fcfe);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50fd01:{NFSU2_TR(0x50fd01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fd04:L50fd04:{c.instructions+=6;NFSU2_TR(0x50fd04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50fd05:{NFSU2_TR(0x50fd05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50fd06:{NFSU2_TR(0x50fd06);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B50fd08:{NFSU2_TR(0x50fd08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50fd09:{NFSU2_TR(0x50fd09);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50fd0c:{NFSU2_TR(0x50fd0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fd10:L50fd10:{c.instructions+=9;NFSU2_TR(0x50fd10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B50fd13:{NFSU2_TR(0x50fd13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fd14:{NFSU2_TR(0x50fd14);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fd15:{NFSU2_TR(0x50fd15);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fd16:{NFSU2_TR(0x50fd16);
__builtin_memmove((R+24),(R+4),4);
}
B50fd18:{NFSU2_TR(0x50fd18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50fd1e:{NFSU2_TR(0x50fd1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fd1f:{NFSU2_TR(0x50fd1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fd20:{NFSU2_TR(0x50fd20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50fd25ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fca0u);}goto L50fca0;}
}
B50fd25:L50fd25:{c.instructions+=5;NFSU2_TR(0x50fd25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B50fd27:{NFSU2_TR(0x50fd27);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50fd2b:{NFSU2_TR(0x50fd2b);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50fd2f:{NFSU2_TR(0x50fd2f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x18ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50fd32:{NFSU2_TR(0x50fd32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50fd37ull));
TAIL_STATIC(0x5a7930u,5a7);
}
B50fd37:L50fd37:{c.instructions+=4;NFSU2_TR(0x50fd37);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x904ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50fd3d:{NFSU2_TR(0x50fd3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x348ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50fd43:{NFSU2_TR(0x50fd43);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50fd4b:{NFSU2_TR(0x50fd4b);
{goto L50fd50;}
}
B50fd50:L50fd50:{c.instructions+=3;NFSU2_TR(0x50fd50);
w4(R+4,u32(0xaull));
}
B50fd55:{NFSU2_TR(0x50fd55);
__builtin_memmove((R+24),(R+20),4);
}
B50fd57:{NFSU2_TR(0x50fd57);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B50fd5b:L50fd5b:{c.instructions+=1;NFSU2_TR(0x50fd5b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50fd5d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fd5bu);}goto L50fd5b;}
}
B50fd5d:L50fd5d:{c.instructions+=4;NFSU2_TR(0x50fd5d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fd5e:{NFSU2_TR(0x50fd5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50fd62:{NFSU2_TR(0x50fd62);
u8 U[34];
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
}
B50fd63:{NFSU2_TR(0x50fd63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50fd68ull));
TAIL_STATIC(0x59ae90u,59a);
}
B50fd68:L50fd68:{c.instructions+=12;NFSU2_TR(0x50fd68);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B50fd6c:{NFSU2_TR(0x50fd6c);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B50fd6e:{NFSU2_TR(0x50fd6e);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B50fd70:{NFSU2_TR(0x50fd70);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B50fd72:{NFSU2_TR(0x50fd72);
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+0))));
}
B50fd74:{NFSU2_TR(0x50fd74);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50fd78:{NFSU2_TR(0x50fd78);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x29ull))));
}
B50fd7b:{NFSU2_TR(0x50fd7b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x29ull))));
}
B50fd7e:{NFSU2_TR(0x50fd7e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B50fd7f:{NFSU2_TR(0x50fd7f);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50fd83:{NFSU2_TR(0x50fd83);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fd87:{NFSU2_TR(0x50fd87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fd50u);}goto L50fd50;}}
}
B50fd89:L50fd89:{c.instructions+=7;NFSU2_TR(0x50fd89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50fd8a:{NFSU2_TR(0x50fd8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50fd8b:{NFSU2_TR(0x50fd8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50fd8c:{NFSU2_TR(0x50fd8c);
__builtin_memmove((R+0),(R+4),1);
}
B50fd8e:{NFSU2_TR(0x50fd8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50fd8f:{NFSU2_TR(0x50fd8f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50fd92:{NFSU2_TR(0x50fd92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fda0:L50fda0:{c.instructions+=7;NFSU2_TR(0x50fda0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fda1:{NFSU2_TR(0x50fda1);
__builtin_memmove((R+0),(R+4),4);
}
B50fda3:{NFSU2_TR(0x50fda3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50fda9:{NFSU2_TR(0x50fda9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fdaa:{NFSU2_TR(0x50fdaa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B50fdad:{NFSU2_TR(0x50fdad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3a8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50fdb3:{NFSU2_TR(0x50fdb3);
w4(R+4,u32(0xaull));
}
B50fdb8:L50fdb8:{c.instructions+=1;NFSU2_TR(0x50fdb8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50fdba;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fdb8u);}goto L50fdb8;}
}
B50fdba:L50fdba:{c.instructions+=7;NFSU2_TR(0x50fdba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fdbc:{NFSU2_TR(0x50fdbc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fdbe:{NFSU2_TR(0x50fdbe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fdc0:{NFSU2_TR(0x50fdc0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fdc2:{NFSU2_TR(0x50fdc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50fdc5:{NFSU2_TR(0x50fdc5);
u8 U[34];
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
}
B50fdc6:{NFSU2_TR(0x50fdc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50fdcbull));
TAIL_STATIC(0x639ce0u,639);
}
B50fdcb:L50fdcb:{c.instructions+=3;NFSU2_TR(0x50fdcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50fdcc:{NFSU2_TR(0x50fdcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50fdcd:{NFSU2_TR(0x50fdcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fdd0:L50fdd0:{c.instructions+=5;NFSU2_TR(0x50fdd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50fdd6:{NFSU2_TR(0x50fdd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B50fddd:{NFSU2_TR(0x50fddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50fde0:{NFSU2_TR(0x50fde0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fde2:{NFSU2_TR(0x50fde2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50fde7ull));
TAIL_STATIC(0x5f6c20u,5f6);
}
B50fde7:L50fde7:{c.instructions+=1;NFSU2_TR(0x50fde7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fdf0:L50fdf0:{c.instructions+=7;NFSU2_TR(0x50fdf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fdf1:{NFSU2_TR(0x50fdf1);
__builtin_memmove((R+24),(R+4),4);
}
B50fdf3:{NFSU2_TR(0x50fdf3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fdf4:{NFSU2_TR(0x50fdf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9d1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50fdfa:{NFSU2_TR(0x50fdfa);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fdfc:{NFSU2_TR(0x50fdfc);
__builtin_memmove((R+4),(R+28),4);
}
B50fdfe:{NFSU2_TR(0x50fdfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50fe03ull));
TAIL_STATIC(0x59afe0u,59a);
}
B50fe03:L50fe03:{c.instructions+=3;NFSU2_TR(0x50fe03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x900ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50fe09:{NFSU2_TR(0x50fe09);
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
B50fe0b:{NFSU2_TR(0x50fe0b);
if(r1(R+518)){{goto L50fe18;}}
}
B50fe0d:L50fe0d:{c.instructions+=2;NFSU2_TR(0x50fe0d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x14ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50fe10:{NFSU2_TR(0x50fe10);
w4(R+4,u32(0xaull));
}
B50fe15:L50fe15:{c.instructions+=1;NFSU2_TR(0x50fe15);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50fe17;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50fe15u);}goto L50fe15;}
}
B50fe17:L50fe17:{c.instructions+=1;NFSU2_TR(0x50fe17);
u8 U[34];
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
}
B50fe18:L50fe18:{c.instructions+=3;NFSU2_TR(0x50fe18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50fe19:{NFSU2_TR(0x50fe19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50fe1a:{NFSU2_TR(0x50fe1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fe20:L50fe20:{c.instructions+=3;NFSU2_TR(0x50fe20);
__builtin_memmove((R+0),gp(0x83a540),4);
}
B50fe25:{NFSU2_TR(0x50fe25);
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
B50fe27:{NFSU2_TR(0x50fe27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50fe8e;}}
}
B50fe29:L50fe29:{c.instructions+=12;NFSU2_TR(0x50fe29);
__builtin_memmove((R+0),gp(0x83a64c),4);
}
B50fe2e:{NFSU2_TR(0x50fe2e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fe2f:{NFSU2_TR(0x50fe2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B50fe36:{NFSU2_TR(0x50fe36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50fe39:{NFSU2_TR(0x50fe39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fe3a:{NFSU2_TR(0x50fe3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50fe3d:{NFSU2_TR(0x50fe3d);
__builtin_memmove((R+4),gp(0x839c40),4);
}
B50fe43:{NFSU2_TR(0x50fe43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B50fe45:{NFSU2_TR(0x50fe45);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fe47:{NFSU2_TR(0x50fe47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fe48:{NFSU2_TR(0x50fe48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fe49:{NFSU2_TR(0x50fe49);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50fe4cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50fe4c:L50fe4c:{c.instructions+=8;NFSU2_TR(0x50fe4c);
__builtin_memmove((R+8),gp(0x83a63c),4);
}
B50fe52:{NFSU2_TR(0x50fe52);
__builtin_memmove((R+4),gp(0x839c40),4);
}
B50fe58:{NFSU2_TR(0x50fe58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B50fe5a:{NFSU2_TR(0x50fe5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fe5b:{NFSU2_TR(0x50fe5b);
__builtin_memmove((R+8),gp(0x83a64c),4);
}
B50fe61:{NFSU2_TR(0x50fe61);
u8 U[4];
w4(U+0,u32(0x839c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fe66:{NFSU2_TR(0x50fe66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50fe67:{NFSU2_TR(0x50fe67);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50fe6aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50fe6a:L50fe6a:{c.instructions+=4;NFSU2_TR(0x50fe6a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x384ull))));
}
B50fe70:{NFSU2_TR(0x50fe70);
__builtin_memmove((R+4),(R+24),4);
}
B50fe72:{NFSU2_TR(0x50fe72);
__builtin_memmove(gp(0x83a540),(R+28),4);
}
B50fe78:{NFSU2_TR(0x50fe78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50fe7dull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B50fe7d:L50fe7d:{c.instructions+=7;NFSU2_TR(0x50fe7d);
__builtin_memmove((R+4),gp(0x83a540),4);
}
B50fe83:{NFSU2_TR(0x50fe83);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B50fe85:{NFSU2_TR(0x50fe85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50fe86:{NFSU2_TR(0x50fe86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50fe87:{NFSU2_TR(0x50fe87);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B50fe89:{NFSU2_TR(0x50fe89);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50fe8b:{NFSU2_TR(0x50fe8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50fe8e:L50fe8e:{c.instructions+=1;NFSU2_TR(0x50fe8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fe90:L50fe90:{c.instructions+=3;NFSU2_TR(0x50fe90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50fe94:{NFSU2_TR(0x50fe94);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50fe97:{NFSU2_TR(0x50fe97);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50ff3a;}}
}
B50fe9d:L50fe9d:{c.instructions+=1;NFSU2_TR(0x50fe9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50ff40ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50fea4:L50fea4:{c.instructions+=2;NFSU2_TR(0x50fea4);
w4(R+0,u32(0xfe22b6a2ull));
}
B50fea9:{NFSU2_TR(0x50fea9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50feaa:L50feaa:{c.instructions+=2;NFSU2_TR(0x50feaa);
w4(R+0,u32(0xefdb2567ull));
}
B50feaf:{NFSU2_TR(0x50feaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50feb0:L50feb0:{c.instructions+=2;NFSU2_TR(0x50feb0);
w4(R+0,u32(0xb6d444b4ull));
}
B50feb5:{NFSU2_TR(0x50feb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50feb6:L50feb6:{c.instructions+=2;NFSU2_TR(0x50feb6);
w4(R+0,u32(0x93b7d1a3ull));
}
B50febb:{NFSU2_TR(0x50febb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50febc:L50febc:{c.instructions+=2;NFSU2_TR(0x50febc);
w4(R+0,u32(0x87c86448ull));
}
B50fec1:{NFSU2_TR(0x50fec1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fec2:L50fec2:{c.instructions+=2;NFSU2_TR(0x50fec2);
w4(R+0,u32(0xff0cbfd5ull));
}
B50fec7:{NFSU2_TR(0x50fec7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fec8:L50fec8:{c.instructions+=2;NFSU2_TR(0x50fec8);
w4(R+0,u32(0xb161ec3ull));
}
B50fecd:{NFSU2_TR(0x50fecd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fece:L50fece:{c.instructions+=2;NFSU2_TR(0x50fece);
w4(R+0,u32(0x534e99e4ull));
}
B50fed3:{NFSU2_TR(0x50fed3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fed4:L50fed4:{c.instructions+=2;NFSU2_TR(0x50fed4);
w4(R+0,u32(0x2430e6beull));
}
B50fed9:{NFSU2_TR(0x50fed9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50feda:L50feda:{c.instructions+=2;NFSU2_TR(0x50feda);
w4(R+0,u32(0x6a71e798ull));
}
B50fedf:{NFSU2_TR(0x50fedf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fee0:L50fee0:{c.instructions+=2;NFSU2_TR(0x50fee0);
w4(R+0,u32(0x7d822b64ull));
}
B50fee5:{NFSU2_TR(0x50fee5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fee6:L50fee6:{c.instructions+=2;NFSU2_TR(0x50fee6);
w4(R+0,u32(0x7d822b65ull));
}
B50feeb:{NFSU2_TR(0x50feeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50feec:L50feec:{c.instructions+=2;NFSU2_TR(0x50feec);
w4(R+0,u32(0x7d822b66ull));
}
B50fef1:{NFSU2_TR(0x50fef1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fef2:L50fef2:{c.instructions+=2;NFSU2_TR(0x50fef2);
w4(R+0,u32(0x7d822b67ull));
}
B50fef7:{NFSU2_TR(0x50fef7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fef8:L50fef8:{c.instructions+=2;NFSU2_TR(0x50fef8);
w4(R+0,u32(0x7d822b68ull));
}
B50fefd:{NFSU2_TR(0x50fefd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fefe:L50fefe:{c.instructions+=2;NFSU2_TR(0x50fefe);
w4(R+0,u32(0x7d822b69ull));
}
B50ff03:{NFSU2_TR(0x50ff03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ff04:L50ff04:{c.instructions+=2;NFSU2_TR(0x50ff04);
w4(R+0,u32(0x55c60293ull));
}
B50ff09:{NFSU2_TR(0x50ff09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ff0a:L50ff0a:{c.instructions+=2;NFSU2_TR(0x50ff0a);
w4(R+0,u32(0xfbbdd223ull));
}
B50ff0f:{NFSU2_TR(0x50ff0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ff10:L50ff10:{c.instructions+=2;NFSU2_TR(0x50ff10);
w4(R+0,u32(0x2308f06cull));
}
B50ff15:{NFSU2_TR(0x50ff15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ff16:L50ff16:{c.instructions+=2;NFSU2_TR(0x50ff16);
w4(R+0,u32(0x3988faefull));
}
B50ff1b:{NFSU2_TR(0x50ff1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ff1c:L50ff1c:{c.instructions+=2;NFSU2_TR(0x50ff1c);
w4(R+0,u32(0xe4eebd70ull));
}
B50ff21:{NFSU2_TR(0x50ff21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ff22:L50ff22:{c.instructions+=2;NFSU2_TR(0x50ff22);
w4(R+0,u32(0xd99fc2e4ull));
}
B50ff27:{NFSU2_TR(0x50ff27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ff28:L50ff28:{c.instructions+=2;NFSU2_TR(0x50ff28);
w4(R+0,u32(0x21d83e05ull));
}
B50ff2d:{NFSU2_TR(0x50ff2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ff2e:L50ff2e:{c.instructions+=2;NFSU2_TR(0x50ff2e);
w4(R+0,u32(0xc8b8fbf1ull));
}
B50ff33:{NFSU2_TR(0x50ff33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ff34:L50ff34:{c.instructions+=2;NFSU2_TR(0x50ff34);
w4(R+0,u32(0xfe82fde0ull));
}
B50ff39:{NFSU2_TR(0x50ff39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ff3a:L50ff3a:{c.instructions+=2;NFSU2_TR(0x50ff3a);
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
B50ff3c:{NFSU2_TR(0x50ff3c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ffb0:L50ffb0:{c.instructions+=4;NFSU2_TR(0x50ffb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ffb4:{NFSU2_TR(0x50ffb4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
}
B50ffb7:{NFSU2_TR(0x50ffb7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x15ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x15ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ffba:{NFSU2_TR(0x50ffba);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x510006u,510);}
}
B50ffbc:L50ffbc:{c.instructions+=2;NFSU2_TR(0x50ffbc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x51001cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B50ffc3:{NFSU2_TR(0x50ffc3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x51000cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50ffca:L50ffca:{c.instructions+=7;NFSU2_TR(0x50ffca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ffce:{NFSU2_TR(0x50ffce);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B50ffcf:{NFSU2_TR(0x50ffcf);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B50ffd1:{NFSU2_TR(0x50ffd1);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B50ffd3:{NFSU2_TR(0x50ffd3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x513709e0ull))));
}
B50ffd8:{NFSU2_TR(0x50ffd8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x5b81d613ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x5b81d613ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5b81d613ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ffdd:{NFSU2_TR(0x50ffdd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ffde:L50ffde:{c.instructions+=7;NFSU2_TR(0x50ffde);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ffe2:{NFSU2_TR(0x50ffe2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B50ffe3:{NFSU2_TR(0x50ffe3);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B50ffe5:{NFSU2_TR(0x50ffe5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B50ffe7:{NFSU2_TR(0x50ffe7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x5638af2ull))));
}
B50ffec:{NFSU2_TR(0x50ffec);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x5e1f61eeull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x5e1f61eeull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5e1f61eeull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50fff1:{NFSU2_TR(0x50fff1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50fff2:L50fff2:{c.instructions+=5;NFSU2_TR(0x50fff2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50fff6:{NFSU2_TR(0x50fff6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B50fff7:{NFSU2_TR(0x50fff7);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B50fff9:{NFSU2_TR(0x50fff9);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B50fffb:{NFSU2_TR(0x50fffb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xb9ad1f4cull))));
TAIL_STATIC(0x510000u,510);
}
XIT:NFSU2_TR_EXIT(0x50f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
