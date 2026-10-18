#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_45e(u8* __restrict R,Cpu& c);
u32 body_464(u8* __restrict R,Cpu& c);
u32 body_465(u8* __restrict R,Cpu& c);
u32 body_476(u8* __restrict R,Cpu& c);
u32 body_477(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_47b(u8* __restrict R,Cpu& c);
u32 body_47e(u8* __restrict R,Cpu& c);
u32 body_480(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f7(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x47f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x47f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_47f(u8* __restrict R,Cpu& c);
u32 page_47f(Cpu& c){return body_47f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_47f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x47f002:goto L47f002;
case 0x47f004:goto L47f004;
case 0x47f00a:c.instructions+=1;goto B47f00a;
case 0x47f00c:goto L47f00c;
case 0x47f012:c.instructions+=2;goto B47f012;
case 0x47f015:c.instructions+=1;goto B47f015;
case 0x47f01b:goto L47f01b;
case 0x47f01e:c.instructions+=2;goto B47f01e;
case 0x47f024:c.instructions+=1;goto B47f024;
case 0x47f02a:goto L47f02a;
case 0x47f02d:c.instructions+=2;goto B47f02d;
case 0x47f033:c.instructions+=1;goto B47f033;
case 0x47f035:goto L47f035;
case 0x47f03b:c.instructions+=1;goto B47f03b;
case 0x47f03d:goto L47f03d;
case 0x47f044:c.instructions+=1;goto B47f044;
case 0x47f046:goto L47f046;
case 0x47f04c:c.instructions+=1;goto B47f04c;
case 0x47f04e:goto L47f04e;
case 0x47f054:c.instructions+=2;goto B47f054;
case 0x47f057:c.instructions+=1;goto B47f057;
case 0x47f05d:goto L47f05d;
case 0x47f060:c.instructions+=2;goto B47f060;
case 0x47f066:c.instructions+=1;goto B47f066;
case 0x47f06c:goto L47f06c;
case 0x47f06f:c.instructions+=2;goto B47f06f;
case 0x47f075:c.instructions+=1;goto B47f075;
case 0x47f077:goto L47f077;
case 0x47f07d:c.instructions+=1;goto B47f07d;
case 0x47f07f:goto L47f07f;
case 0x47f086:c.instructions+=1;goto B47f086;
case 0x47f088:goto L47f088;
case 0x47f08e:c.instructions+=1;goto B47f08e;
case 0x47f090:goto L47f090;
case 0x47f096:c.instructions+=2;goto B47f096;
case 0x47f099:c.instructions+=1;goto B47f099;
case 0x47f09f:goto L47f09f;
case 0x47f0a2:c.instructions+=2;goto B47f0a2;
case 0x47f0a8:c.instructions+=1;goto B47f0a8;
case 0x47f0ae:goto L47f0ae;
case 0x47f0b1:c.instructions+=2;goto B47f0b1;
case 0x47f0b7:c.instructions+=1;goto B47f0b7;
case 0x47f0b9:goto L47f0b9;
case 0x47f0bf:c.instructions+=1;goto B47f0bf;
case 0x47f0c1:goto L47f0c1;
case 0x47f0c8:c.instructions+=6;goto B47f0c8;
case 0x47f0c9:c.instructions+=5;goto B47f0c9;
case 0x47f0ca:c.instructions+=4;goto B47f0ca;
case 0x47f0cb:c.instructions+=3;goto B47f0cb;
case 0x47f0cd:c.instructions+=2;goto B47f0cd;
case 0x47f0ce:c.instructions+=1;goto B47f0ce;
case 0x47f0d1:goto L47f0d1;
case 0x47f0d7:c.instructions+=1;goto B47f0d7;
case 0x47f0d9:goto L47f0d9;
case 0x47f0df:c.instructions+=2;goto B47f0df;
case 0x47f0e2:c.instructions+=1;goto B47f0e2;
case 0x47f0e8:goto L47f0e8;
case 0x47f0eb:c.instructions+=8;goto B47f0eb;
case 0x47f0f1:c.instructions+=7;goto B47f0f1;
case 0x47f0f7:c.instructions+=6;goto B47f0f7;
case 0x47f0f8:c.instructions+=5;goto B47f0f8;
case 0x47f0f9:c.instructions+=4;goto B47f0f9;
case 0x47f0fa:c.instructions+=3;goto B47f0fa;
case 0x47f0fc:c.instructions+=2;goto B47f0fc;
case 0x47f0fd:c.instructions+=1;goto B47f0fd;
case 0x47f100:goto L47f100;
case 0x47f103:c.instructions+=9;goto B47f103;
case 0x47f104:c.instructions+=8;goto B47f104;
case 0x47f105:c.instructions+=7;goto B47f105;
case 0x47f107:c.instructions+=6;goto B47f107;
case 0x47f10d:c.instructions+=5;goto B47f10d;
case 0x47f10f:c.instructions+=4;goto B47f10f;
case 0x47f111:c.instructions+=3;goto B47f111;
case 0x47f114:c.instructions+=2;goto B47f114;
case 0x47f117:c.instructions+=1;goto B47f117;
case 0x47f119:goto L47f119;
case 0x47f11b:c.instructions+=4;goto B47f11b;
case 0x47f11c:c.instructions+=3;goto B47f11c;
case 0x47f120:c.instructions+=2;goto B47f120;
case 0x47f124:c.instructions+=1;goto B47f124;
case 0x47f127:goto L47f127;
case 0x47f129:c.instructions+=4;goto B47f129;
case 0x47f12a:c.instructions+=3;goto B47f12a;
case 0x47f12c:c.instructions+=2;goto B47f12c;
case 0x47f130:c.instructions+=1;goto B47f130;
case 0x47f133:goto L47f133;
case 0x47f137:c.instructions+=4;goto B47f137;
case 0x47f13c:c.instructions+=3;goto B47f13c;
case 0x47f13f:c.instructions+=2;goto B47f13f;
case 0x47f147:c.instructions+=1;goto B47f147;
case 0x47f149:goto L47f149;
case 0x47f14c:c.instructions+=1;goto B47f14c;
case 0x47f14e:goto L47f14e;
case 0x47f151:c.instructions+=5;goto B47f151;
case 0x47f157:c.instructions+=4;goto B47f157;
case 0x47f15a:c.instructions+=3;goto B47f15a;
case 0x47f15c:c.instructions+=2;goto B47f15c;
case 0x47f15f:c.instructions+=1;goto B47f15f;
case 0x47f161:goto L47f161;
case 0x47f165:goto L47f165;
case 0x47f16b:c.instructions+=3;goto B47f16b;
case 0x47f16f:c.instructions+=2;goto B47f16f;
case 0x47f170:c.instructions+=1;goto B47f170;
case 0x47f175:goto L47f175;
case 0x47f17b:c.instructions+=2;goto B47f17b;
case 0x47f17e:c.instructions+=1;goto B47f17e;
case 0x47f180:goto L47f180;
case 0x47f182:c.instructions+=1;goto B47f182;
case 0x47f184:goto L47f184;
case 0x47f186:c.instructions+=2;goto B47f186;
case 0x47f188:c.instructions+=1;goto B47f188;
case 0x47f18a:goto L47f18a;
case 0x47f190:goto L47f190;
case 0x47f196:c.instructions+=1;goto B47f196;
case 0x47f198:goto L47f198;
case 0x47f19a:c.instructions+=5;goto B47f19a;
case 0x47f19c:c.instructions+=4;goto B47f19c;
case 0x47f19e:c.instructions+=3;goto B47f19e;
case 0x47f1a2:c.instructions+=2;goto B47f1a2;
case 0x47f1a6:c.instructions+=1;goto B47f1a6;
case 0x47f1a9:goto L47f1a9;
case 0x47f1ab:c.instructions+=4;goto B47f1ab;
case 0x47f1ad:c.instructions+=3;goto B47f1ad;
case 0x47f1af:c.instructions+=2;goto B47f1af;
case 0x47f1b3:c.instructions+=1;goto B47f1b3;
case 0x47f1b6:goto L47f1b6;
case 0x47f1ba:c.instructions+=4;goto B47f1ba;
case 0x47f1bf:c.instructions+=3;goto B47f1bf;
case 0x47f1c2:c.instructions+=2;goto B47f1c2;
case 0x47f1ca:c.instructions+=1;goto B47f1ca;
case 0x47f1cc:goto L47f1cc;
case 0x47f1cf:c.instructions+=1;goto B47f1cf;
case 0x47f1d1:goto L47f1d1;
case 0x47f1d4:c.instructions+=5;goto B47f1d4;
case 0x47f1da:c.instructions+=4;goto B47f1da;
case 0x47f1dd:c.instructions+=3;goto B47f1dd;
case 0x47f1df:c.instructions+=2;goto B47f1df;
case 0x47f1e2:c.instructions+=1;goto B47f1e2;
case 0x47f1e4:goto L47f1e4;
case 0x47f1e8:goto L47f1e8;
case 0x47f1ee:c.instructions+=3;goto B47f1ee;
case 0x47f1f2:c.instructions+=2;goto B47f1f2;
case 0x47f1f3:c.instructions+=1;goto B47f1f3;
case 0x47f1f8:goto L47f1f8;
case 0x47f1fe:c.instructions+=2;goto B47f1fe;
case 0x47f201:c.instructions+=1;goto B47f201;
case 0x47f203:goto L47f203;
case 0x47f205:c.instructions+=1;goto B47f205;
case 0x47f207:goto L47f207;
case 0x47f209:c.instructions+=2;goto B47f209;
case 0x47f20b:c.instructions+=1;goto B47f20b;
case 0x47f20d:goto L47f20d;
case 0x47f213:goto L47f213;
case 0x47f219:c.instructions+=1;goto B47f219;
case 0x47f21f:goto L47f21f;
case 0x47f221:c.instructions+=5;goto B47f221;
case 0x47f222:c.instructions+=4;goto B47f222;
case 0x47f224:c.instructions+=3;goto B47f224;
case 0x47f228:c.instructions+=2;goto B47f228;
case 0x47f22c:c.instructions+=1;goto B47f22c;
case 0x47f22f:goto L47f22f;
case 0x47f231:c.instructions+=4;goto B47f231;
case 0x47f232:c.instructions+=3;goto B47f232;
case 0x47f234:c.instructions+=2;goto B47f234;
case 0x47f238:c.instructions+=1;goto B47f238;
case 0x47f23b:goto L47f23b;
case 0x47f23f:c.instructions+=4;goto B47f23f;
case 0x47f244:c.instructions+=3;goto B47f244;
case 0x47f247:c.instructions+=2;goto B47f247;
case 0x47f24f:c.instructions+=1;goto B47f24f;
case 0x47f251:goto L47f251;
case 0x47f254:c.instructions+=1;goto B47f254;
case 0x47f256:goto L47f256;
case 0x47f259:c.instructions+=5;goto B47f259;
case 0x47f25f:c.instructions+=4;goto B47f25f;
case 0x47f262:c.instructions+=3;goto B47f262;
case 0x47f264:c.instructions+=2;goto B47f264;
case 0x47f267:c.instructions+=1;goto B47f267;
case 0x47f269:goto L47f269;
case 0x47f26d:goto L47f26d;
case 0x47f273:c.instructions+=3;goto B47f273;
case 0x47f277:c.instructions+=2;goto B47f277;
case 0x47f278:c.instructions+=1;goto B47f278;
case 0x47f27d:goto L47f27d;
case 0x47f283:c.instructions+=2;goto B47f283;
case 0x47f286:c.instructions+=1;goto B47f286;
case 0x47f288:goto L47f288;
case 0x47f28e:c.instructions+=2;goto B47f28e;
case 0x47f291:c.instructions+=1;goto B47f291;
case 0x47f293:goto L47f293;
case 0x47f295:c.instructions+=1;goto B47f295;
case 0x47f297:goto L47f297;
case 0x47f299:c.instructions+=2;goto B47f299;
case 0x47f29b:c.instructions+=1;goto B47f29b;
case 0x47f29d:goto L47f29d;
case 0x47f2a3:goto L47f2a3;
case 0x47f2a4:c.instructions+=3;goto B47f2a4;
case 0x47f2a5:c.instructions+=2;goto B47f2a5;
case 0x47f2a8:c.instructions+=1;goto B47f2a8;
case 0x47f2b0:goto L47f2b0;
case 0x47f2b5:c.instructions+=2;goto B47f2b5;
case 0x47f2b6:c.instructions+=1;goto B47f2b6;
case 0x47f2bb:goto L47f2bb;
case 0x47f2be:c.instructions+=2;goto B47f2be;
case 0x47f2c3:c.instructions+=1;goto B47f2c3;
case 0x47f2c5:goto L47f2c5;
case 0x47f2cb:c.instructions+=5;goto B47f2cb;
case 0x47f2ce:c.instructions+=4;goto B47f2ce;
case 0x47f2d4:c.instructions+=3;goto B47f2d4;
case 0x47f2d5:c.instructions+=2;goto B47f2d5;
case 0x47f2da:c.instructions+=1;goto B47f2da;
case 0x47f2df:goto L47f2df;
case 0x47f2e2:c.instructions+=2;goto B47f2e2;
case 0x47f2e4:c.instructions+=1;goto B47f2e4;
case 0x47f2e6:goto L47f2e6;
case 0x47f2e8:c.instructions+=1;goto B47f2e8;
case 0x47f2ed:goto L47f2ed;
case 0x47f2ef:c.instructions+=1;goto B47f2ef;
case 0x47f2f0:goto L47f2f0;
case 0x47f2f5:c.instructions+=2;goto B47f2f5;
case 0x47f2f6:c.instructions+=1;goto B47f2f6;
case 0x47f2fb:goto L47f2fb;
case 0x47f2fe:c.instructions+=2;goto B47f2fe;
case 0x47f303:c.instructions+=1;goto B47f303;
case 0x47f305:goto L47f305;
case 0x47f30b:c.instructions+=5;goto B47f30b;
case 0x47f30e:c.instructions+=4;goto B47f30e;
case 0x47f314:c.instructions+=3;goto B47f314;
case 0x47f315:c.instructions+=2;goto B47f315;
case 0x47f31a:c.instructions+=1;goto B47f31a;
case 0x47f31f:goto L47f31f;
case 0x47f322:c.instructions+=2;goto B47f322;
case 0x47f324:c.instructions+=1;goto B47f324;
case 0x47f326:goto L47f326;
case 0x47f328:c.instructions+=1;goto B47f328;
case 0x47f32d:goto L47f32d;
case 0x47f32f:c.instructions+=1;goto B47f32f;
case 0x47f330:goto L47f330;
case 0x47f331:c.instructions+=2;goto B47f331;
case 0x47f333:c.instructions+=1;goto B47f333;
case 0x47f338:goto L47f338;
case 0x47f33d:c.instructions+=1;goto B47f33d;
case 0x47f33f:goto L47f33f;
case 0x47f340:c.instructions+=1;goto B47f340;
case 0x47f345:goto L47f345;
case 0x47f348:goto L47f348;
case 0x47f34a:c.instructions+=2;goto B47f34a;
case 0x47f34b:c.instructions+=1;goto B47f34b;
case 0x47f350:goto L47f350;
case 0x47f355:c.instructions+=2;goto B47f355;
case 0x47f356:c.instructions+=1;goto B47f356;
case 0x47f35b:goto L47f35b;
case 0x47f35e:c.instructions+=2;goto B47f35e;
case 0x47f363:c.instructions+=1;goto B47f363;
case 0x47f365:goto L47f365;
case 0x47f36b:c.instructions+=5;goto B47f36b;
case 0x47f36e:c.instructions+=4;goto B47f36e;
case 0x47f374:c.instructions+=3;goto B47f374;
case 0x47f375:c.instructions+=2;goto B47f375;
case 0x47f37a:c.instructions+=1;goto B47f37a;
case 0x47f37f:goto L47f37f;
case 0x47f382:c.instructions+=2;goto B47f382;
case 0x47f384:c.instructions+=1;goto B47f384;
case 0x47f386:goto L47f386;
case 0x47f388:c.instructions+=1;goto B47f388;
case 0x47f38d:goto L47f38d;
case 0x47f38f:c.instructions+=1;goto B47f38f;
case 0x47f390:goto L47f390;
case 0x47f391:c.instructions+=2;goto B47f391;
case 0x47f393:c.instructions+=1;goto B47f393;
case 0x47f398:goto L47f398;
case 0x47f39d:c.instructions+=1;goto B47f39d;
case 0x47f39f:goto L47f39f;
case 0x47f3a0:c.instructions+=1;goto B47f3a0;
case 0x47f3a5:goto L47f3a5;
case 0x47f3a8:goto L47f3a8;
case 0x47f3aa:c.instructions+=2;goto B47f3aa;
case 0x47f3ab:c.instructions+=1;goto B47f3ab;
case 0x47f3b0:goto L47f3b0;
case 0x47f3b5:c.instructions+=2;goto B47f3b5;
case 0x47f3b6:c.instructions+=1;goto B47f3b6;
case 0x47f3bb:goto L47f3bb;
case 0x47f3be:c.instructions+=2;goto B47f3be;
case 0x47f3c3:c.instructions+=1;goto B47f3c3;
case 0x47f3c5:goto L47f3c5;
case 0x47f3cb:c.instructions+=5;goto B47f3cb;
case 0x47f3ce:c.instructions+=4;goto B47f3ce;
case 0x47f3d4:c.instructions+=3;goto B47f3d4;
case 0x47f3d5:c.instructions+=2;goto B47f3d5;
case 0x47f3da:c.instructions+=1;goto B47f3da;
case 0x47f3df:goto L47f3df;
case 0x47f3e2:c.instructions+=2;goto B47f3e2;
case 0x47f3e4:c.instructions+=1;goto B47f3e4;
case 0x47f3e6:goto L47f3e6;
case 0x47f3e8:c.instructions+=1;goto B47f3e8;
case 0x47f3ed:goto L47f3ed;
case 0x47f3ef:c.instructions+=1;goto B47f3ef;
case 0x47f3f0:goto L47f3f0;
case 0x47f3f1:c.instructions+=2;goto B47f3f1;
case 0x47f3f3:c.instructions+=1;goto B47f3f3;
case 0x47f3f8:goto L47f3f8;
case 0x47f3fd:c.instructions+=1;goto B47f3fd;
case 0x47f3ff:goto L47f3ff;
case 0x47f400:c.instructions+=1;goto B47f400;
case 0x47f405:goto L47f405;
case 0x47f408:goto L47f408;
case 0x47f40a:c.instructions+=2;goto B47f40a;
case 0x47f40b:c.instructions+=1;goto B47f40b;
case 0x47f410:goto L47f410;
case 0x47f411:c.instructions+=2;goto B47f411;
case 0x47f413:c.instructions+=1;goto B47f413;
case 0x47f418:goto L47f418;
case 0x47f41a:c.instructions+=10;goto B47f41a;
case 0x47f420:c.instructions+=9;goto B47f420;
case 0x47f426:c.instructions+=8;goto B47f426;
case 0x47f42c:c.instructions+=7;goto B47f42c;
case 0x47f432:c.instructions+=6;goto B47f432;
case 0x47f438:c.instructions+=5;goto B47f438;
case 0x47f43c:c.instructions+=4;goto B47f43c;
case 0x47f442:c.instructions+=3;goto B47f442;
case 0x47f444:c.instructions+=2;goto B47f444;
case 0x47f445:c.instructions+=1;goto B47f445;
case 0x47f450:goto L47f450;
case 0x47f451:c.instructions+=2;goto B47f451;
case 0x47f453:c.instructions+=1;goto B47f453;
case 0x47f458:goto L47f458;
case 0x47f45d:c.instructions+=1;goto B47f45d;
case 0x47f45f:goto L47f45f;
case 0x47f460:c.instructions+=1;goto B47f460;
case 0x47f465:goto L47f465;
case 0x47f468:goto L47f468;
case 0x47f46a:c.instructions+=2;goto B47f46a;
case 0x47f46b:c.instructions+=1;goto B47f46b;
case 0x47f470:goto L47f470;
case 0x47f476:c.instructions+=1;goto B47f476;
case 0x47f480:goto L47f480;
case 0x47f485:c.instructions+=2;goto B47f485;
case 0x47f486:c.instructions+=1;goto B47f486;
case 0x47f48b:goto L47f48b;
case 0x47f48e:c.instructions+=2;goto B47f48e;
case 0x47f493:c.instructions+=1;goto B47f493;
case 0x47f495:goto L47f495;
case 0x47f49b:c.instructions+=5;goto B47f49b;
case 0x47f49e:c.instructions+=4;goto B47f49e;
case 0x47f4a4:c.instructions+=3;goto B47f4a4;
case 0x47f4a5:c.instructions+=2;goto B47f4a5;
case 0x47f4aa:c.instructions+=1;goto B47f4aa;
case 0x47f4af:goto L47f4af;
case 0x47f4b2:c.instructions+=2;goto B47f4b2;
case 0x47f4b4:c.instructions+=1;goto B47f4b4;
case 0x47f4b6:goto L47f4b6;
case 0x47f4b8:c.instructions+=1;goto B47f4b8;
case 0x47f4bd:goto L47f4bd;
case 0x47f4bf:c.instructions+=1;goto B47f4bf;
case 0x47f4c0:goto L47f4c0;
case 0x47f4c1:c.instructions+=2;goto B47f4c1;
case 0x47f4c3:c.instructions+=1;goto B47f4c3;
case 0x47f4c8:goto L47f4c8;
case 0x47f4cd:c.instructions+=1;goto B47f4cd;
case 0x47f4cf:goto L47f4cf;
case 0x47f4d0:c.instructions+=1;goto B47f4d0;
case 0x47f4d5:goto L47f4d5;
case 0x47f4d8:goto L47f4d8;
case 0x47f4da:c.instructions+=2;goto B47f4da;
case 0x47f4db:c.instructions+=1;goto B47f4db;
case 0x47f4e0:goto L47f4e0;
case 0x47f4e5:c.instructions+=2;goto B47f4e5;
case 0x47f4e6:c.instructions+=1;goto B47f4e6;
case 0x47f4eb:goto L47f4eb;
case 0x47f4ee:c.instructions+=2;goto B47f4ee;
case 0x47f4f3:c.instructions+=1;goto B47f4f3;
case 0x47f4f5:goto L47f4f5;
case 0x47f4fb:c.instructions+=5;goto B47f4fb;
case 0x47f4fe:c.instructions+=4;goto B47f4fe;
case 0x47f504:c.instructions+=3;goto B47f504;
case 0x47f505:c.instructions+=2;goto B47f505;
case 0x47f50a:c.instructions+=1;goto B47f50a;
case 0x47f50f:goto L47f50f;
case 0x47f512:c.instructions+=2;goto B47f512;
case 0x47f514:c.instructions+=1;goto B47f514;
case 0x47f516:goto L47f516;
case 0x47f518:c.instructions+=1;goto B47f518;
case 0x47f51d:goto L47f51d;
case 0x47f51f:c.instructions+=1;goto B47f51f;
case 0x47f520:goto L47f520;
case 0x47f525:c.instructions+=2;goto B47f525;
case 0x47f526:c.instructions+=1;goto B47f526;
case 0x47f52b:goto L47f52b;
case 0x47f52e:c.instructions+=2;goto B47f52e;
case 0x47f533:c.instructions+=1;goto B47f533;
case 0x47f535:goto L47f535;
case 0x47f53b:c.instructions+=5;goto B47f53b;
case 0x47f53e:c.instructions+=4;goto B47f53e;
case 0x47f544:c.instructions+=3;goto B47f544;
case 0x47f545:c.instructions+=2;goto B47f545;
case 0x47f54a:c.instructions+=1;goto B47f54a;
case 0x47f54f:goto L47f54f;
case 0x47f552:c.instructions+=2;goto B47f552;
case 0x47f554:c.instructions+=1;goto B47f554;
case 0x47f556:goto L47f556;
case 0x47f558:c.instructions+=1;goto B47f558;
case 0x47f55d:goto L47f55d;
case 0x47f55f:c.instructions+=1;goto B47f55f;
case 0x47f560:goto L47f560;
case 0x47f561:c.instructions+=2;goto B47f561;
case 0x47f563:c.instructions+=1;goto B47f563;
case 0x47f568:goto L47f568;
case 0x47f56d:c.instructions+=1;goto B47f56d;
case 0x47f56f:goto L47f56f;
case 0x47f570:c.instructions+=1;goto B47f570;
case 0x47f575:goto L47f575;
case 0x47f578:goto L47f578;
case 0x47f57a:c.instructions+=2;goto B47f57a;
case 0x47f57b:c.instructions+=1;goto B47f57b;
case 0x47f580:goto L47f580;
case 0x47f582:c.instructions+=17;goto B47f582;
case 0x47f584:c.instructions+=16;goto B47f584;
case 0x47f587:c.instructions+=15;goto B47f587;
case 0x47f58a:c.instructions+=14;goto B47f58a;
case 0x47f58d:c.instructions+=13;goto B47f58d;
case 0x47f590:c.instructions+=12;goto B47f590;
case 0x47f593:c.instructions+=11;goto B47f593;
case 0x47f596:c.instructions+=10;goto B47f596;
case 0x47f599:c.instructions+=9;goto B47f599;
case 0x47f59c:c.instructions+=8;goto B47f59c;
case 0x47f59f:c.instructions+=7;goto B47f59f;
case 0x47f5a2:c.instructions+=6;goto B47f5a2;
case 0x47f5a5:c.instructions+=5;goto B47f5a5;
case 0x47f5a8:c.instructions+=4;goto B47f5a8;
case 0x47f5ab:c.instructions+=3;goto B47f5ab;
case 0x47f5b1:c.instructions+=2;goto B47f5b1;
case 0x47f5b8:c.instructions+=1;goto B47f5b8;
case 0x47f5c0:goto L47f5c0;
case 0x47f5c2:c.instructions+=18;goto B47f5c2;
case 0x47f5c4:c.instructions+=17;goto B47f5c4;
case 0x47f5c7:c.instructions+=16;goto B47f5c7;
case 0x47f5ca:c.instructions+=15;goto B47f5ca;
case 0x47f5cd:c.instructions+=14;goto B47f5cd;
case 0x47f5d0:c.instructions+=13;goto B47f5d0;
case 0x47f5d3:c.instructions+=12;goto B47f5d3;
case 0x47f5d6:c.instructions+=11;goto B47f5d6;
case 0x47f5d9:c.instructions+=10;goto B47f5d9;
case 0x47f5dc:c.instructions+=9;goto B47f5dc;
case 0x47f5df:c.instructions+=8;goto B47f5df;
case 0x47f5e2:c.instructions+=7;goto B47f5e2;
case 0x47f5e5:c.instructions+=6;goto B47f5e5;
case 0x47f5e8:c.instructions+=5;goto B47f5e8;
case 0x47f5eb:c.instructions+=4;goto B47f5eb;
case 0x47f5ee:c.instructions+=3;goto B47f5ee;
case 0x47f5f4:c.instructions+=2;goto B47f5f4;
case 0x47f5f7:c.instructions+=1;goto B47f5f7;
case 0x47f600:goto L47f600;
case 0x47f605:c.instructions+=2;goto B47f605;
case 0x47f606:c.instructions+=1;goto B47f606;
case 0x47f60b:goto L47f60b;
case 0x47f60e:c.instructions+=2;goto B47f60e;
case 0x47f613:c.instructions+=1;goto B47f613;
case 0x47f615:goto L47f615;
case 0x47f61b:c.instructions+=5;goto B47f61b;
case 0x47f61e:c.instructions+=4;goto B47f61e;
case 0x47f624:c.instructions+=3;goto B47f624;
case 0x47f625:c.instructions+=2;goto B47f625;
case 0x47f627:c.instructions+=1;goto B47f627;
case 0x47f62c:goto L47f62c;
case 0x47f62f:c.instructions+=2;goto B47f62f;
case 0x47f631:c.instructions+=1;goto B47f631;
case 0x47f633:goto L47f633;
case 0x47f635:c.instructions+=1;goto B47f635;
case 0x47f63a:goto L47f63a;
case 0x47f63c:c.instructions+=1;goto B47f63c;
case 0x47f640:goto L47f640;
case 0x47f641:c.instructions+=2;goto B47f641;
case 0x47f643:c.instructions+=1;goto B47f643;
case 0x47f648:goto L47f648;
case 0x47f64d:c.instructions+=1;goto B47f64d;
case 0x47f64f:goto L47f64f;
case 0x47f650:c.instructions+=1;goto B47f650;
case 0x47f655:goto L47f655;
case 0x47f658:goto L47f658;
case 0x47f65a:c.instructions+=2;goto B47f65a;
case 0x47f65b:c.instructions+=1;goto B47f65b;
case 0x47f660:goto L47f660;
case 0x47f661:c.instructions+=4;goto B47f661;
case 0x47f662:c.instructions+=3;goto B47f662;
case 0x47f663:c.instructions+=2;goto B47f663;
case 0x47f665:c.instructions+=1;goto B47f665;
case 0x47f667:goto L47f667;
case 0x47f669:c.instructions+=4;goto B47f669;
case 0x47f66e:c.instructions+=3;goto B47f66e;
case 0x47f670:c.instructions+=2;goto B47f670;
case 0x47f673:c.instructions+=1;goto B47f673;
case 0x47f675:goto L47f675;
case 0x47f678:c.instructions+=4;goto B47f678;
case 0x47f679:c.instructions+=3;goto B47f679;
case 0x47f67a:c.instructions+=2;goto B47f67a;
case 0x47f67d:c.instructions+=1;goto B47f67d;
case 0x47f682:goto L47f682;
case 0x47f684:c.instructions+=2;goto B47f684;
case 0x47f686:c.instructions+=1;goto B47f686;
case 0x47f688:goto L47f688;
case 0x47f68a:c.instructions+=3;goto B47f68a;
case 0x47f68b:c.instructions+=2;goto B47f68b;
case 0x47f68d:c.instructions+=1;goto B47f68d;
case 0x47f690:goto L47f690;
case 0x47f693:c.instructions+=5;goto B47f693;
case 0x47f696:c.instructions+=4;goto B47f696;
case 0x47f697:c.instructions+=3;goto B47f697;
case 0x47f699:c.instructions+=2;goto B47f699;
case 0x47f69c:c.instructions+=1;goto B47f69c;
case 0x47f69e:goto L47f69e;
case 0x47f6a1:c.instructions+=1;goto B47f6a1;
case 0x47f6a3:goto L47f6a3;
case 0x47f6a6:c.instructions+=2;goto B47f6a6;
case 0x47f6a8:c.instructions+=1;goto B47f6a8;
case 0x47f6aa:goto L47f6aa;
case 0x47f6b0:goto L47f6b0;
case 0x47f6b3:c.instructions+=3;goto B47f6b3;
case 0x47f6b6:c.instructions+=2;goto B47f6b6;
case 0x47f6b8:c.instructions+=1;goto B47f6b8;
case 0x47f6ba:goto L47f6ba;
case 0x47f6bd:goto L47f6bd;
case 0x47f6be:c.instructions+=2;goto B47f6be;
case 0x47f6c1:c.instructions+=1;goto B47f6c1;
case 0x47f6c3:goto L47f6c3;
case 0x47f6c4:c.instructions+=3;goto B47f6c4;
case 0x47f6c5:c.instructions+=2;goto B47f6c5;
case 0x47f6c6:c.instructions+=1;goto B47f6c6;
case 0x47f6d0:goto L47f6d0;
case 0x47f6d1:c.instructions+=6;goto B47f6d1;
case 0x47f6d2:c.instructions+=5;goto B47f6d2;
case 0x47f6d3:c.instructions+=4;goto B47f6d3;
case 0x47f6d7:c.instructions+=3;goto B47f6d7;
case 0x47f6d9:c.instructions+=2;goto B47f6d9;
case 0x47f6db:c.instructions+=1;goto B47f6db;
case 0x47f6e0:goto L47f6e0;
case 0x47f6e5:c.instructions+=4;goto B47f6e5;
case 0x47f6e7:c.instructions+=3;goto B47f6e7;
case 0x47f6e9:c.instructions+=2;goto B47f6e9;
case 0x47f6eb:c.instructions+=1;goto B47f6eb;
case 0x47f6ed:goto L47f6ed;
case 0x47f6ee:c.instructions+=2;goto B47f6ee;
case 0x47f6f0:c.instructions+=1;goto B47f6f0;
case 0x47f6f5:goto L47f6f5;
case 0x47f6f6:c.instructions+=2;goto B47f6f6;
case 0x47f6f9:c.instructions+=1;goto B47f6f9;
case 0x47f6fb:goto L47f6fb;
case 0x47f6fc:c.instructions+=3;goto B47f6fc;
case 0x47f6fd:c.instructions+=2;goto B47f6fd;
case 0x47f6fe:c.instructions+=1;goto B47f6fe;
case 0x47f710:goto L47f710;
case 0x47f711:c.instructions+=7;goto B47f711;
case 0x47f713:c.instructions+=6;goto B47f713;
case 0x47f714:c.instructions+=5;goto B47f714;
case 0x47f717:c.instructions+=4;goto B47f717;
case 0x47f719:c.instructions+=3;goto B47f719;
case 0x47f71a:c.instructions+=2;goto B47f71a;
case 0x47f721:c.instructions+=1;goto B47f721;
case 0x47f723:goto L47f723;
case 0x47f725:c.instructions+=4;goto B47f725;
case 0x47f727:c.instructions+=3;goto B47f727;
case 0x47f728:c.instructions+=2;goto B47f728;
case 0x47f72a:c.instructions+=1;goto B47f72a;
case 0x47f72d:goto L47f72d;
case 0x47f730:c.instructions+=1;goto B47f730;
case 0x47f732:goto L47f732;
case 0x47f734:c.instructions+=3;goto B47f734;
case 0x47f735:c.instructions+=2;goto B47f735;
case 0x47f737:c.instructions+=1;goto B47f737;
case 0x47f73a:goto L47f73a;
case 0x47f73b:c.instructions+=2;goto B47f73b;
case 0x47f73d:c.instructions+=1;goto B47f73d;
case 0x47f742:goto L47f742;
case 0x47f744:c.instructions+=3;goto B47f744;
case 0x47f745:c.instructions+=2;goto B47f745;
case 0x47f747:c.instructions+=1;goto B47f747;
case 0x47f74a:goto L47f74a;
case 0x47f74c:c.instructions+=4;goto B47f74c;
case 0x47f74d:c.instructions+=3;goto B47f74d;
case 0x47f74e:c.instructions+=2;goto B47f74e;
case 0x47f750:c.instructions+=1;goto B47f750;
case 0x47f753:goto L47f753;
case 0x47f756:c.instructions+=1;goto B47f756;
case 0x47f758:goto L47f758;
case 0x47f75b:c.instructions+=2;goto B47f75b;
case 0x47f75d:c.instructions+=1;goto B47f75d;
case 0x47f75f:goto L47f75f;
case 0x47f762:c.instructions+=2;goto B47f762;
case 0x47f764:c.instructions+=1;goto B47f764;
case 0x47f766:goto L47f766;
case 0x47f768:c.instructions+=4;goto B47f768;
case 0x47f76a:c.instructions+=3;goto B47f76a;
case 0x47f76b:c.instructions+=2;goto B47f76b;
case 0x47f76d:c.instructions+=1;goto B47f76d;
case 0x47f770:goto L47f770;
case 0x47f773:c.instructions+=1;goto B47f773;
case 0x47f775:goto L47f775;
case 0x47f777:c.instructions+=3;goto B47f777;
case 0x47f778:c.instructions+=2;goto B47f778;
case 0x47f77a:c.instructions+=1;goto B47f77a;
case 0x47f77d:goto L47f77d;
case 0x47f77e:c.instructions+=2;goto B47f77e;
case 0x47f780:c.instructions+=1;goto B47f780;
case 0x47f785:goto L47f785;
case 0x47f787:c.instructions+=3;goto B47f787;
case 0x47f788:c.instructions+=2;goto B47f788;
case 0x47f78a:c.instructions+=1;goto B47f78a;
case 0x47f78d:goto L47f78d;
case 0x47f78f:c.instructions+=4;goto B47f78f;
case 0x47f790:c.instructions+=3;goto B47f790;
case 0x47f791:c.instructions+=2;goto B47f791;
case 0x47f793:c.instructions+=1;goto B47f793;
case 0x47f796:goto L47f796;
case 0x47f799:c.instructions+=1;goto B47f799;
case 0x47f79b:goto L47f79b;
case 0x47f79e:c.instructions+=2;goto B47f79e;
case 0x47f7a0:c.instructions+=1;goto B47f7a0;
case 0x47f7a2:goto L47f7a2;
case 0x47f7a3:c.instructions+=4;goto B47f7a3;
case 0x47f7a4:c.instructions+=3;goto B47f7a4;
case 0x47f7a6:c.instructions+=2;goto B47f7a6;
case 0x47f7a7:c.instructions+=1;goto B47f7a7;
case 0x47f7b0:goto L47f7b0;
case 0x47f7b5:c.instructions+=2;goto B47f7b5;
case 0x47f7b6:c.instructions+=1;goto B47f7b6;
case 0x47f7bb:goto L47f7bb;
case 0x47f7be:c.instructions+=2;goto B47f7be;
case 0x47f7c3:c.instructions+=1;goto B47f7c3;
case 0x47f7c5:goto L47f7c5;
case 0x47f7cb:c.instructions+=5;goto B47f7cb;
case 0x47f7ce:c.instructions+=4;goto B47f7ce;
case 0x47f7d4:c.instructions+=3;goto B47f7d4;
case 0x47f7d5:c.instructions+=2;goto B47f7d5;
case 0x47f7d7:c.instructions+=1;goto B47f7d7;
case 0x47f7dc:goto L47f7dc;
case 0x47f7df:c.instructions+=2;goto B47f7df;
case 0x47f7e1:c.instructions+=1;goto B47f7e1;
case 0x47f7e3:goto L47f7e3;
case 0x47f7e5:c.instructions+=1;goto B47f7e5;
case 0x47f7ea:goto L47f7ea;
case 0x47f7ec:c.instructions+=1;goto B47f7ec;
case 0x47f7f0:goto L47f7f0;
case 0x47f7f5:c.instructions+=2;goto B47f7f5;
case 0x47f7f6:c.instructions+=1;goto B47f7f6;
case 0x47f7fb:goto L47f7fb;
case 0x47f7fe:c.instructions+=2;goto B47f7fe;
case 0x47f803:c.instructions+=1;goto B47f803;
case 0x47f805:goto L47f805;
case 0x47f80b:c.instructions+=5;goto B47f80b;
case 0x47f80e:c.instructions+=4;goto B47f80e;
case 0x47f814:c.instructions+=3;goto B47f814;
case 0x47f815:c.instructions+=2;goto B47f815;
case 0x47f817:c.instructions+=1;goto B47f817;
case 0x47f81c:goto L47f81c;
case 0x47f81f:c.instructions+=2;goto B47f81f;
case 0x47f821:c.instructions+=1;goto B47f821;
case 0x47f823:goto L47f823;
case 0x47f825:c.instructions+=1;goto B47f825;
case 0x47f82a:goto L47f82a;
case 0x47f82c:c.instructions+=1;goto B47f82c;
case 0x47f830:goto L47f830;
case 0x47f835:c.instructions+=2;goto B47f835;
case 0x47f83a:c.instructions+=1;goto B47f83a;
case 0x47f83f:goto L47f83f;
case 0x47f844:c.instructions+=2;goto B47f844;
case 0x47f849:c.instructions+=1;goto B47f849;
case 0x47f84e:goto L47f84e;
case 0x47f853:c.instructions+=2;goto B47f853;
case 0x47f858:c.instructions+=1;goto B47f858;
case 0x47f85d:goto L47f85d;
case 0x47f862:c.instructions+=2;goto B47f862;
case 0x47f867:c.instructions+=1;goto B47f867;
case 0x47f86c:goto L47f86c;
case 0x47f871:c.instructions+=2;goto B47f871;
case 0x47f876:c.instructions+=1;goto B47f876;
case 0x47f87b:goto L47f87b;
case 0x47f880:c.instructions+=2;goto B47f880;
case 0x47f885:c.instructions+=1;goto B47f885;
case 0x47f88a:goto L47f88a;
case 0x47f88f:c.instructions+=2;goto B47f88f;
case 0x47f894:c.instructions+=1;goto B47f894;
case 0x47f899:goto L47f899;
case 0x47f89e:c.instructions+=2;goto B47f89e;
case 0x47f8a3:c.instructions+=1;goto B47f8a3;
case 0x47f8a8:goto L47f8a8;
case 0x47f8ad:c.instructions+=2;goto B47f8ad;
case 0x47f8b2:c.instructions+=1;goto B47f8b2;
case 0x47f8b7:goto L47f8b7;
case 0x47f8bc:c.instructions+=2;goto B47f8bc;
case 0x47f8c1:c.instructions+=1;goto B47f8c1;
case 0x47f8c6:goto L47f8c6;
case 0x47f8cb:c.instructions+=2;goto B47f8cb;
case 0x47f8d0:c.instructions+=1;goto B47f8d0;
case 0x47f8d5:goto L47f8d5;
case 0x47f8da:c.instructions+=2;goto B47f8da;
case 0x47f8df:c.instructions+=1;goto B47f8df;
case 0x47f8e4:goto L47f8e4;
case 0x47f8e9:c.instructions+=2;goto B47f8e9;
case 0x47f8ee:c.instructions+=1;goto B47f8ee;
case 0x47f8f3:goto L47f8f3;
case 0x47f8f8:c.instructions+=2;goto B47f8f8;
case 0x47f8fd:c.instructions+=1;goto B47f8fd;
case 0x47f902:goto L47f902;
case 0x47f907:c.instructions+=2;goto B47f907;
case 0x47f90c:c.instructions+=1;goto B47f90c;
case 0x47f911:goto L47f911;
case 0x47f916:c.instructions+=2;goto B47f916;
case 0x47f91b:c.instructions+=1;goto B47f91b;
case 0x47f920:goto L47f920;
case 0x47f925:c.instructions+=2;goto B47f925;
case 0x47f92a:c.instructions+=1;goto B47f92a;
case 0x47f92f:goto L47f92f;
case 0x47f934:c.instructions+=2;goto B47f934;
case 0x47f939:c.instructions+=1;goto B47f939;
case 0x47f93e:goto L47f93e;
case 0x47f943:c.instructions+=2;goto B47f943;
case 0x47f948:c.instructions+=1;goto B47f948;
case 0x47f94d:goto L47f94d;
case 0x47f952:c.instructions+=2;goto B47f952;
case 0x47f957:c.instructions+=1;goto B47f957;
case 0x47f95c:goto L47f95c;
case 0x47f961:c.instructions+=2;goto B47f961;
case 0x47f966:c.instructions+=1;goto B47f966;
case 0x47f96b:goto L47f96b;
case 0x47f970:c.instructions+=2;goto B47f970;
case 0x47f975:c.instructions+=1;goto B47f975;
case 0x47f97a:goto L47f97a;
case 0x47f97f:c.instructions+=2;goto B47f97f;
case 0x47f984:c.instructions+=1;goto B47f984;
case 0x47f989:goto L47f989;
case 0x47f98e:c.instructions+=2;goto B47f98e;
case 0x47f993:c.instructions+=1;goto B47f993;
case 0x47f998:goto L47f998;
case 0x47f99d:c.instructions+=2;goto B47f99d;
case 0x47f9a2:c.instructions+=1;goto B47f9a2;
case 0x47f9a7:goto L47f9a7;
case 0x47f9ac:c.instructions+=2;goto B47f9ac;
case 0x47f9b1:c.instructions+=1;goto B47f9b1;
case 0x47f9b6:goto L47f9b6;
case 0x47f9bb:c.instructions+=2;goto B47f9bb;
case 0x47f9c0:c.instructions+=1;goto B47f9c0;
case 0x47f9c5:goto L47f9c5;
case 0x47f9ca:c.instructions+=2;goto B47f9ca;
case 0x47f9cf:c.instructions+=1;goto B47f9cf;
case 0x47f9d4:goto L47f9d4;
case 0x47f9d9:c.instructions+=2;goto B47f9d9;
case 0x47f9de:c.instructions+=1;goto B47f9de;
case 0x47f9e3:goto L47f9e3;
case 0x47f9e8:c.instructions+=2;goto B47f9e8;
case 0x47f9ed:c.instructions+=1;goto B47f9ed;
case 0x47f9f2:goto L47f9f2;
case 0x47f9f7:c.instructions+=2;goto B47f9f7;
case 0x47f9fc:c.instructions+=1;goto B47f9fc;
case 0x47fa01:goto L47fa01;
case 0x47fa06:c.instructions+=2;goto B47fa06;
case 0x47fa0b:c.instructions+=1;goto B47fa0b;
case 0x47fa10:goto L47fa10;
case 0x47fa15:c.instructions+=2;goto B47fa15;
case 0x47fa1a:c.instructions+=1;goto B47fa1a;
case 0x47fa1f:goto L47fa1f;
case 0x47fa24:c.instructions+=2;goto B47fa24;
case 0x47fa29:c.instructions+=1;goto B47fa29;
case 0x47fa2e:goto L47fa2e;
case 0x47fa33:c.instructions+=2;goto B47fa33;
case 0x47fa38:c.instructions+=1;goto B47fa38;
case 0x47fa3d:goto L47fa3d;
case 0x47fa42:c.instructions+=2;goto B47fa42;
case 0x47fa47:c.instructions+=1;goto B47fa47;
case 0x47fa4c:goto L47fa4c;
case 0x47fa51:c.instructions+=2;goto B47fa51;
case 0x47fa56:c.instructions+=1;goto B47fa56;
case 0x47fa5b:goto L47fa5b;
case 0x47fa60:c.instructions+=2;goto B47fa60;
case 0x47fa65:c.instructions+=1;goto B47fa65;
case 0x47fa6a:goto L47fa6a;
case 0x47fa6f:c.instructions+=2;goto B47fa6f;
case 0x47fa74:c.instructions+=1;goto B47fa74;
case 0x47fa79:goto L47fa79;
case 0x47fa7e:c.instructions+=2;goto B47fa7e;
case 0x47fa83:c.instructions+=1;goto B47fa83;
case 0x47fa88:goto L47fa88;
case 0x47fa8d:c.instructions+=2;goto B47fa8d;
case 0x47fa92:c.instructions+=1;goto B47fa92;
case 0x47fa97:goto L47fa97;
case 0x47fa9c:c.instructions+=2;goto B47fa9c;
case 0x47faa1:c.instructions+=1;goto B47faa1;
case 0x47faa6:goto L47faa6;
case 0x47faab:c.instructions+=2;goto B47faab;
case 0x47fab0:c.instructions+=1;goto B47fab0;
case 0x47fab5:goto L47fab5;
case 0x47faba:c.instructions+=2;goto B47faba;
case 0x47fabf:c.instructions+=1;goto B47fabf;
case 0x47fac4:goto L47fac4;
case 0x47fac9:c.instructions+=2;goto B47fac9;
case 0x47face:c.instructions+=1;goto B47face;
case 0x47fad3:goto L47fad3;
case 0x47fad8:c.instructions+=2;goto B47fad8;
case 0x47fadd:c.instructions+=1;goto B47fadd;
case 0x47fae2:goto L47fae2;
case 0x47fae7:c.instructions+=2;goto B47fae7;
case 0x47faec:c.instructions+=1;goto B47faec;
case 0x47faf1:goto L47faf1;
case 0x47faf6:c.instructions+=2;goto B47faf6;
case 0x47fafb:c.instructions+=1;goto B47fafb;
case 0x47fb00:goto L47fb00;
case 0x47fb05:c.instructions+=2;goto B47fb05;
case 0x47fb0a:c.instructions+=1;goto B47fb0a;
case 0x47fb0f:goto L47fb0f;
case 0x47fb14:c.instructions+=2;goto B47fb14;
case 0x47fb19:c.instructions+=1;goto B47fb19;
case 0x47fb1e:goto L47fb1e;
case 0x47fb23:c.instructions+=2;goto B47fb23;
case 0x47fb28:c.instructions+=1;goto B47fb28;
case 0x47fb2d:goto L47fb2d;
case 0x47fb32:c.instructions+=2;goto B47fb32;
case 0x47fb37:c.instructions+=1;goto B47fb37;
case 0x47fb3c:goto L47fb3c;
case 0x47fb41:c.instructions+=2;goto B47fb41;
case 0x47fb46:c.instructions+=1;goto B47fb46;
case 0x47fb4b:goto L47fb4b;
case 0x47fb50:c.instructions+=2;goto B47fb50;
case 0x47fb55:c.instructions+=1;goto B47fb55;
case 0x47fb5a:goto L47fb5a;
case 0x47fb5f:c.instructions+=2;goto B47fb5f;
case 0x47fb64:c.instructions+=1;goto B47fb64;
case 0x47fb69:goto L47fb69;
case 0x47fb6e:c.instructions+=2;goto B47fb6e;
case 0x47fb73:c.instructions+=1;goto B47fb73;
case 0x47fb78:goto L47fb78;
case 0x47fb80:goto L47fb80;
case 0x47fb85:c.instructions+=2;goto B47fb85;
case 0x47fb8a:c.instructions+=1;goto B47fb8a;
case 0x47fb8f:goto L47fb8f;
case 0x47fb94:c.instructions+=2;goto B47fb94;
case 0x47fb99:c.instructions+=1;goto B47fb99;
case 0x47fb9e:goto L47fb9e;
case 0x47fba3:c.instructions+=2;goto B47fba3;
case 0x47fba8:c.instructions+=1;goto B47fba8;
case 0x47fbad:goto L47fbad;
case 0x47fbb2:c.instructions+=2;goto B47fbb2;
case 0x47fbb7:c.instructions+=1;goto B47fbb7;
case 0x47fbbc:goto L47fbbc;
case 0x47fbc1:c.instructions+=2;goto B47fbc1;
case 0x47fbc6:c.instructions+=1;goto B47fbc6;
case 0x47fbcb:goto L47fbcb;
case 0x47fbd0:c.instructions+=2;goto B47fbd0;
case 0x47fbd5:c.instructions+=1;goto B47fbd5;
case 0x47fbda:goto L47fbda;
case 0x47fbdf:c.instructions+=2;goto B47fbdf;
case 0x47fbe4:c.instructions+=1;goto B47fbe4;
case 0x47fbe9:goto L47fbe9;
case 0x47fbee:c.instructions+=2;goto B47fbee;
case 0x47fbf3:c.instructions+=1;goto B47fbf3;
case 0x47fbf8:goto L47fbf8;
case 0x47fbfd:c.instructions+=2;goto B47fbfd;
case 0x47fc02:c.instructions+=1;goto B47fc02;
case 0x47fc07:goto L47fc07;
case 0x47fc10:goto L47fc10;
case 0x47fc15:c.instructions+=2;goto B47fc15;
case 0x47fc16:c.instructions+=1;goto B47fc16;
case 0x47fc1b:goto L47fc1b;
case 0x47fc1e:c.instructions+=2;goto B47fc1e;
case 0x47fc23:c.instructions+=1;goto B47fc23;
case 0x47fc25:goto L47fc25;
case 0x47fc2b:c.instructions+=5;goto B47fc2b;
case 0x47fc2e:c.instructions+=4;goto B47fc2e;
case 0x47fc34:c.instructions+=3;goto B47fc34;
case 0x47fc35:c.instructions+=2;goto B47fc35;
case 0x47fc37:c.instructions+=1;goto B47fc37;
case 0x47fc3c:goto L47fc3c;
case 0x47fc3f:c.instructions+=2;goto B47fc3f;
case 0x47fc41:c.instructions+=1;goto B47fc41;
case 0x47fc43:goto L47fc43;
case 0x47fc45:c.instructions+=1;goto B47fc45;
case 0x47fc4a:goto L47fc4a;
case 0x47fc4c:c.instructions+=1;goto B47fc4c;
case 0x47fc50:goto L47fc50;
case 0x47fc53:c.instructions+=10;goto B47fc53;
case 0x47fc57:c.instructions+=9;goto B47fc57;
case 0x47fc58:c.instructions+=8;goto B47fc58;
case 0x47fc59:c.instructions+=7;goto B47fc59;
case 0x47fc5b:c.instructions+=6;goto B47fc5b;
case 0x47fc5d:c.instructions+=5;goto B47fc5d;
case 0x47fc5f:c.instructions+=4;goto B47fc5f;
case 0x47fc63:c.instructions+=3;goto B47fc63;
case 0x47fc67:c.instructions+=2;goto B47fc67;
case 0x47fc6b:c.instructions+=1;goto B47fc6b;
case 0x47fc71:goto L47fc71;
case 0x47fc72:c.instructions+=5;goto B47fc72;
case 0x47fc73:c.instructions+=4;goto B47fc73;
case 0x47fc75:c.instructions+=3;goto B47fc75;
case 0x47fc7c:c.instructions+=2;goto B47fc7c;
case 0x47fc80:c.instructions+=1;goto B47fc80;
case 0x47fc86:goto L47fc86;
case 0x47fc89:c.instructions+=1;goto B47fc89;
case 0x47fc8e:goto L47fc8e;
case 0x47fc92:c.instructions+=5;goto B47fc92;
case 0x47fc95:c.instructions+=4;goto B47fc95;
case 0x47fc97:c.instructions+=3;goto B47fc97;
case 0x47fc9c:c.instructions+=2;goto B47fc9c;
case 0x47fc9e:c.instructions+=1;goto B47fc9e;
case 0x47fca0:goto L47fca0;
case 0x47fca3:c.instructions+=5;goto B47fca3;
case 0x47fca9:c.instructions+=4;goto B47fca9;
case 0x47fcac:c.instructions+=3;goto B47fcac;
case 0x47fcae:c.instructions+=2;goto B47fcae;
case 0x47fcb0:c.instructions+=1;goto B47fcb0;
case 0x47fcb2:goto L47fcb2;
case 0x47fcb5:c.instructions+=2;goto B47fcb5;
case 0x47fcb7:c.instructions+=1;goto B47fcb7;
case 0x47fcb9:goto L47fcb9;
case 0x47fcbc:c.instructions+=1;goto B47fcbc;
case 0x47fcbe:goto L47fcbe;
case 0x47fcc3:c.instructions+=2;goto B47fcc3;
case 0x47fcc5:c.instructions+=1;goto B47fcc5;
case 0x47fcc7:goto L47fcc7;
case 0x47fcc9:c.instructions+=1;goto B47fcc9;
case 0x47fcce:goto L47fcce;
case 0x47fcd0:goto L47fcd0;
case 0x47fcd7:c.instructions+=4;goto B47fcd7;
case 0x47fcda:c.instructions+=3;goto B47fcda;
case 0x47fcdd:c.instructions+=2;goto B47fcdd;
case 0x47fce1:c.instructions+=1;goto B47fce1;
case 0x47fce3:goto L47fce3;
case 0x47fce9:goto L47fce9;
case 0x47fcec:c.instructions+=3;goto B47fcec;
case 0x47fcee:c.instructions+=2;goto B47fcee;
case 0x47fcf2:c.instructions+=1;goto B47fcf2;
case 0x47fcf4:goto L47fcf4;
case 0x47fcf7:c.instructions+=1;goto B47fcf7;
case 0x47fcf9:goto L47fcf9;
case 0x47fcff:c.instructions+=5;goto B47fcff;
case 0x47fd03:c.instructions+=4;goto B47fd03;
case 0x47fd07:c.instructions+=3;goto B47fd07;
case 0x47fd09:c.instructions+=2;goto B47fd09;
case 0x47fd0b:c.instructions+=1;goto B47fd0b;
case 0x47fd0d:goto L47fd0d;
case 0x47fd10:c.instructions+=5;goto B47fd10;
case 0x47fd14:c.instructions+=4;goto B47fd14;
case 0x47fd18:c.instructions+=3;goto B47fd18;
case 0x47fd1a:c.instructions+=2;goto B47fd1a;
case 0x47fd1c:c.instructions+=1;goto B47fd1c;
case 0x47fd1e:goto L47fd1e;
case 0x47fd23:goto L47fd23;
case 0x47fd26:c.instructions+=1;goto B47fd26;
case 0x47fd2b:goto L47fd2b;
case 0x47fd2d:c.instructions+=2;goto B47fd2d;
case 0x47fd2f:c.instructions+=1;goto B47fd2f;
case 0x47fd35:goto L47fd35;
case 0x47fd38:c.instructions+=2;goto B47fd38;
case 0x47fd3c:c.instructions+=1;goto B47fd3c;
case 0x47fd42:goto L47fd42;
case 0x47fd46:c.instructions+=1;goto B47fd46;
case 0x47fd48:goto L47fd48;
case 0x47fd4c:c.instructions+=1;goto B47fd4c;
case 0x47fd50:goto L47fd50;
case 0x47fd53:c.instructions+=5;goto B47fd53;
case 0x47fd57:c.instructions+=4;goto B47fd57;
case 0x47fd5b:c.instructions+=3;goto B47fd5b;
case 0x47fd5d:c.instructions+=2;goto B47fd5d;
case 0x47fd5f:c.instructions+=1;goto B47fd5f;
case 0x47fd65:goto L47fd65;
case 0x47fd69:c.instructions+=3;goto B47fd69;
case 0x47fd6b:c.instructions+=2;goto B47fd6b;
case 0x47fd6e:c.instructions+=1;goto B47fd6e;
case 0x47fd70:goto L47fd70;
case 0x47fd72:c.instructions+=1;goto B47fd72;
case 0x47fd74:goto L47fd74;
case 0x47fd76:c.instructions+=1;goto B47fd76;
case 0x47fd78:goto L47fd78;
case 0x47fd7a:c.instructions+=1;goto B47fd7a;
case 0x47fd80:goto L47fd80;
case 0x47fd82:c.instructions+=1;goto B47fd82;
case 0x47fd88:goto L47fd88;
case 0x47fd8d:goto L47fd8d;
case 0x47fd8f:c.instructions+=1;goto B47fd8f;
case 0x47fd91:goto L47fd91;
case 0x47fd93:c.instructions+=1;goto B47fd93;
case 0x47fd95:goto L47fd95;
case 0x47fd98:c.instructions+=5;goto B47fd98;
case 0x47fd9b:c.instructions+=4;goto B47fd9b;
case 0x47fd9d:c.instructions+=3;goto B47fd9d;
case 0x47fda1:c.instructions+=2;goto B47fda1;
case 0x47fda3:c.instructions+=1;goto B47fda3;
case 0x47fda9:goto L47fda9;
case 0x47fdb0:goto L47fdb0;
case 0x47fdb3:c.instructions+=1;goto B47fdb3;
case 0x47fdb5:goto L47fdb5;
case 0x47fdb9:c.instructions+=2;goto B47fdb9;
case 0x47fdbc:c.instructions+=1;goto B47fdbc;
case 0x47fdbe:goto L47fdbe;
case 0x47fdc1:c.instructions+=5;goto B47fdc1;
case 0x47fdc3:c.instructions+=4;goto B47fdc3;
case 0x47fdc8:c.instructions+=3;goto B47fdc8;
case 0x47fdce:c.instructions+=2;goto B47fdce;
case 0x47fdd0:c.instructions+=1;goto B47fdd0;
case 0x47fdd2:goto L47fdd2;
case 0x47fdd6:c.instructions+=3;goto B47fdd6;
case 0x47fdd9:c.instructions+=2;goto B47fdd9;
case 0x47fddb:c.instructions+=1;goto B47fddb;
case 0x47fde0:goto L47fde0;
case 0x47fde3:c.instructions+=4;goto B47fde3;
case 0x47fde5:c.instructions+=3;goto B47fde5;
case 0x47fde7:c.instructions+=2;goto B47fde7;
case 0x47fdea:c.instructions+=1;goto B47fdea;
case 0x47fdef:goto L47fdef;
case 0x47fdf3:c.instructions+=2;goto B47fdf3;
case 0x47fdf4:c.instructions+=1;goto B47fdf4;
case 0x47fdf9:goto L47fdf9;
case 0x47fdfd:c.instructions+=4;goto B47fdfd;
case 0x47fe01:c.instructions+=3;goto B47fe01;
case 0x47fe04:c.instructions+=2;goto B47fe04;
case 0x47fe0a:c.instructions+=1;goto B47fe0a;
case 0x47fe0d:goto L47fe0d;
case 0x47fe0f:c.instructions+=1;goto B47fe0f;
case 0x47fe13:goto L47fe13;
case 0x47fe15:c.instructions+=1;goto B47fe15;
case 0x47fe17:goto L47fe17;
case 0x47fe19:goto L47fe19;
case 0x47fe1b:c.instructions+=1;goto B47fe1b;
case 0x47fe1d:goto L47fe1d;
case 0x47fe1f:c.instructions+=1;goto B47fe1f;
case 0x47fe21:goto L47fe21;
case 0x47fe22:c.instructions+=1;goto B47fe22;
case 0x47fe27:goto L47fe27;
case 0x47fe28:c.instructions+=2;goto B47fe28;
case 0x47fe29:c.instructions+=1;goto B47fe29;
case 0x47fe2e:goto L47fe2e;
case 0x47fe31:c.instructions+=3;goto B47fe31;
case 0x47fe34:c.instructions+=2;goto B47fe34;
case 0x47fe36:c.instructions+=1;goto B47fe36;
case 0x47fe38:goto L47fe38;
case 0x47fe3a:c.instructions+=2;goto B47fe3a;
case 0x47fe3d:c.instructions+=1;goto B47fe3d;
case 0x47fe3f:goto L47fe3f;
case 0x47fe41:c.instructions+=1;goto B47fe41;
case 0x47fe43:goto L47fe43;
case 0x47fe45:goto L47fe45;
case 0x47fe47:c.instructions+=1;goto B47fe47;
case 0x47fe49:goto L47fe49;
case 0x47fe4b:c.instructions+=1;goto B47fe4b;
case 0x47fe4d:goto L47fe4d;
case 0x47fe51:c.instructions+=9;goto B47fe51;
case 0x47fe55:c.instructions+=8;goto B47fe55;
case 0x47fe59:c.instructions+=7;goto B47fe59;
case 0x47fe5c:c.instructions+=6;goto B47fe5c;
case 0x47fe5d:c.instructions+=5;goto B47fe5d;
case 0x47fe60:c.instructions+=4;goto B47fe60;
case 0x47fe62:c.instructions+=3;goto B47fe62;
case 0x47fe66:c.instructions+=2;goto B47fe66;
case 0x47fe6a:c.instructions+=1;goto B47fe6a;
case 0x47fe70:goto L47fe70;
case 0x47fe71:c.instructions+=1;goto B47fe71;
case 0x47fe72:goto L47fe72;
case 0x47fe73:c.instructions+=3;goto B47fe73;
case 0x47fe74:c.instructions+=2;goto B47fe74;
case 0x47fe77:c.instructions+=1;goto B47fe77;
case 0x47fe80:goto L47fe80;
case 0x47fe81:c.instructions+=7;goto B47fe81;
case 0x47fe82:c.instructions+=6;goto B47fe82;
case 0x47fe83:c.instructions+=5;goto B47fe83;
case 0x47fe87:c.instructions+=4;goto B47fe87;
case 0x47fe89:c.instructions+=3;goto B47fe89;
case 0x47fe8b:c.instructions+=2;goto B47fe8b;
case 0x47fe8f:c.instructions+=1;goto B47fe8f;
case 0x47fe95:goto L47fe95;
case 0x47fe96:c.instructions+=3;goto B47fe96;
case 0x47fe98:c.instructions+=2;goto B47fe98;
case 0x47fe9e:c.instructions+=1;goto B47fe9e;
case 0x47fea4:goto L47fea4;
case 0x47fea7:c.instructions+=2;goto B47fea7;
case 0x47fea9:c.instructions+=1;goto B47fea9;
case 0x47feaf:goto L47feaf;
case 0x47feb0:goto L47feb0;
case 0x47feb3:c.instructions+=2;goto B47feb3;
case 0x47feb6:c.instructions+=1;goto B47feb6;
case 0x47feb8:goto L47feb8;
case 0x47febb:c.instructions+=1;goto B47febb;
case 0x47febd:goto L47febd;
case 0x47febf:c.instructions+=3;goto B47febf;
case 0x47fec0:c.instructions+=2;goto B47fec0;
case 0x47fec1:c.instructions+=1;goto B47fec1;
case 0x47fec6:goto L47fec6;
case 0x47fec9:c.instructions+=2;goto B47fec9;
case 0x47fecc:c.instructions+=1;goto B47fecc;
case 0x47fece:goto L47fece;
case 0x47fed1:c.instructions+=2;goto B47fed1;
case 0x47fed4:c.instructions+=1;goto B47fed4;
case 0x47fed6:goto L47fed6;
case 0x47fed9:c.instructions+=3;goto B47fed9;
case 0x47fedc:c.instructions+=2;goto B47fedc;
case 0x47fedf:c.instructions+=1;goto B47fedf;
case 0x47fee1:goto L47fee1;
case 0x47fee4:c.instructions+=1;goto B47fee4;
case 0x47fee6:goto L47fee6;
case 0x47fee9:c.instructions+=1;goto B47fee9;
case 0x47feec:goto L47feec;
case 0x47feef:c.instructions+=2;goto B47feef;
case 0x47fef2:c.instructions+=1;goto B47fef2;
case 0x47fef4:goto L47fef4;
case 0x47fef7:c.instructions+=1;goto B47fef7;
case 0x47fef9:goto L47fef9;
case 0x47fefc:c.instructions+=1;goto B47fefc;
case 0x47feff:goto L47feff;
case 0x47ff02:c.instructions+=1;goto B47ff02;
case 0x47ff04:goto L47ff04;
case 0x47ff07:c.instructions+=2;goto B47ff07;
case 0x47ff09:c.instructions+=1;goto B47ff09;
case 0x47ff0b:goto L47ff0b;
case 0x47ff0e:c.instructions+=2;goto B47ff0e;
case 0x47ff11:c.instructions+=1;goto B47ff11;
case 0x47ff13:goto L47ff13;
case 0x47ff16:goto L47ff16;
case 0x47ff19:c.instructions+=6;goto B47ff19;
case 0x47ff1c:c.instructions+=5;goto B47ff1c;
case 0x47ff1f:c.instructions+=4;goto B47ff1f;
case 0x47ff22:c.instructions+=3;goto B47ff22;
case 0x47ff25:c.instructions+=2;goto B47ff25;
case 0x47ff28:c.instructions+=1;goto B47ff28;
case 0x47ff2a:goto L47ff2a;
case 0x47ff2d:c.instructions+=5;goto B47ff2d;
case 0x47ff34:c.instructions+=4;goto B47ff34;
case 0x47ff37:c.instructions+=3;goto B47ff37;
case 0x47ff39:c.instructions+=2;goto B47ff39;
case 0x47ff3b:c.instructions+=1;goto B47ff3b;
case 0x47ff3d:goto L47ff3d;
case 0x47ff3f:c.instructions+=1;goto B47ff3f;
case 0x47ff40:goto L47ff40;
case 0x47ff43:c.instructions+=6;goto B47ff43;
case 0x47ff47:c.instructions+=5;goto B47ff47;
case 0x47ff4a:c.instructions+=4;goto B47ff4a;
case 0x47ff4b:c.instructions+=3;goto B47ff4b;
case 0x47ff4e:c.instructions+=2;goto B47ff4e;
case 0x47ff50:c.instructions+=1;goto B47ff50;
case 0x47ff52:goto L47ff52;
case 0x47ff55:c.instructions+=5;goto B47ff55;
case 0x47ff58:c.instructions+=4;goto B47ff58;
case 0x47ff59:c.instructions+=3;goto B47ff59;
case 0x47ff5b:c.instructions+=2;goto B47ff5b;
case 0x47ff5f:c.instructions+=1;goto B47ff5f;
case 0x47ff64:goto L47ff64;
case 0x47ff67:c.instructions+=6;goto B47ff67;
case 0x47ff6b:c.instructions+=5;goto B47ff6b;
case 0x47ff6d:c.instructions+=4;goto B47ff6d;
case 0x47ff6f:c.instructions+=3;goto B47ff6f;
case 0x47ff71:c.instructions+=2;goto B47ff71;
case 0x47ff74:c.instructions+=1;goto B47ff74;
case 0x47ff79:goto L47ff79;
case 0x47ff7c:c.instructions+=3;goto B47ff7c;
case 0x47ff7e:c.instructions+=2;goto B47ff7e;
case 0x47ff7f:c.instructions+=1;goto B47ff7f;
case 0x47ff81:goto L47ff81;
case 0x47ff83:c.instructions+=1;goto B47ff83;
case 0x47ff85:goto L47ff85;
case 0x47ff88:c.instructions+=4;goto B47ff88;
case 0x47ff8d:c.instructions+=3;goto B47ff8d;
case 0x47ff8f:c.instructions+=2;goto B47ff8f;
case 0x47ff92:c.instructions+=1;goto B47ff92;
case 0x47ff94:goto L47ff94;
case 0x47ff97:c.instructions+=4;goto B47ff97;
case 0x47ff9d:c.instructions+=3;goto B47ff9d;
case 0x47ff9e:c.instructions+=2;goto B47ff9e;
case 0x47ff9f:c.instructions+=1;goto B47ff9f;
case 0x47ffa4:goto L47ffa4;
case 0x47ffa7:goto L47ffa7;
case 0x47ffaa:c.instructions+=2;goto B47ffaa;
case 0x47ffad:c.instructions+=1;goto B47ffad;
case 0x47ffaf:goto L47ffaf;
case 0x47ffb0:goto L47ffb0;
case 0x47ffb3:c.instructions+=1;goto B47ffb3;
case 0x47ffb5:goto L47ffb5;
case 0x47ffb8:c.instructions+=1;goto B47ffb8;
case 0x47ffba:goto L47ffba;
case 0x47ffbd:c.instructions+=5;goto B47ffbd;
case 0x47ffc3:c.instructions+=4;goto B47ffc3;
case 0x47ffc9:c.instructions+=3;goto B47ffc9;
case 0x47ffcc:c.instructions+=2;goto B47ffcc;
case 0x47ffd0:c.instructions+=1;goto B47ffd0;
case 0x47ffd2:goto L47ffd2;
case 0x47ffd5:c.instructions+=1;goto B47ffd5;
case 0x47ffd7:goto L47ffd7;
case 0x47ffdb:c.instructions+=1;goto B47ffdb;
case 0x47ffdd:goto L47ffdd;
case 0x47ffe0:c.instructions+=1;goto B47ffe0;
case 0x47ffe2:goto L47ffe2;
case 0x47ffe5:c.instructions+=8;goto B47ffe5;
case 0x47ffe8:c.instructions+=7;goto B47ffe8;
case 0x47ffeb:c.instructions+=6;goto B47ffeb;
case 0x47fff2:c.instructions+=5;goto B47fff2;
case 0x47fff3:c.instructions+=4;goto B47fff3;
case 0x47fff4:c.instructions+=3;goto B47fff4;
case 0x47fff5:c.instructions+=2;goto B47fff5;
case 0x47fff6:c.instructions+=1;goto B47fff6;
case 0x47fff7:goto L47fff7;
case 0x47fffa:c.instructions+=2;goto B47fffa;
case 0x47fffd:c.instructions+=1;goto B47fffd;
default:missing_instruction(c.pc);}
B47f002:L47f002:{c.instructions+=1;NFSU2_TR(0x47f002);
{goto L47f02a;}
}
B47f004:L47f004:{c.instructions+=2;NFSU2_TR(0x47f004);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f00a:{NFSU2_TR(0x47f00a);
if(r1(R+518)){{goto L47f01b;}}
}
B47f00c:L47f00c:{c.instructions+=3;NFSU2_TR(0x47f00c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47f012:{NFSU2_TR(0x47f012);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47f015:{NFSU2_TR(0x47f015);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47f01b:L47f01b:{c.instructions+=3;NFSU2_TR(0x47f01b);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47f01e:{NFSU2_TR(0x47f01e);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47f024:{NFSU2_TR(0x47f024);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47f02a:L47f02a:{c.instructions+=3;NFSU2_TR(0x47f02a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47f02d:{NFSU2_TR(0x47f02d);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x392ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f033:{NFSU2_TR(0x47f033);
if(r1(R+518)){{goto L47f046;}}
}
B47f035:L47f035:{c.instructions+=2;NFSU2_TR(0x47f035);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x393ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f03b:{NFSU2_TR(0x47f03b);
if(r1(R+518)){{goto L47f046;}}
}
B47f03d:L47f03d:{c.instructions+=2;NFSU2_TR(0x47f03d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47f044:{NFSU2_TR(0x47f044);
{goto L47f06c;}
}
B47f046:L47f046:{c.instructions+=2;NFSU2_TR(0x47f046);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f04c:{NFSU2_TR(0x47f04c);
if(r1(R+518)){{goto L47f05d;}}
}
B47f04e:L47f04e:{c.instructions+=3;NFSU2_TR(0x47f04e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47f054:{NFSU2_TR(0x47f054);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47f057:{NFSU2_TR(0x47f057);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47f05d:L47f05d:{c.instructions+=3;NFSU2_TR(0x47f05d);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47f060:{NFSU2_TR(0x47f060);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47f066:{NFSU2_TR(0x47f066);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47f06c:L47f06c:{c.instructions+=3;NFSU2_TR(0x47f06c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47f06f:{NFSU2_TR(0x47f06f);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x391ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f075:{NFSU2_TR(0x47f075);
if(r1(R+518)){{goto L47f088;}}
}
B47f077:L47f077:{c.instructions+=2;NFSU2_TR(0x47f077);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x392ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f07d:{NFSU2_TR(0x47f07d);
if(r1(R+518)){{goto L47f088;}}
}
B47f07f:L47f07f:{c.instructions+=2;NFSU2_TR(0x47f07f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47f086:{NFSU2_TR(0x47f086);
{goto L47f0ae;}
}
B47f088:L47f088:{c.instructions+=2;NFSU2_TR(0x47f088);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f08e:{NFSU2_TR(0x47f08e);
if(r1(R+518)){{goto L47f09f;}}
}
B47f090:L47f090:{c.instructions+=3;NFSU2_TR(0x47f090);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47f096:{NFSU2_TR(0x47f096);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47f099:{NFSU2_TR(0x47f099);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47f09f:L47f09f:{c.instructions+=3;NFSU2_TR(0x47f09f);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47f0a2:{NFSU2_TR(0x47f0a2);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47f0a8:{NFSU2_TR(0x47f0a8);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47f0ae:L47f0ae:{c.instructions+=3;NFSU2_TR(0x47f0ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47f0b1:{NFSU2_TR(0x47f0b1);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x390ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f0b7:{NFSU2_TR(0x47f0b7);
if(r1(R+518)){{goto L47f0d1;}}
}
B47f0b9:L47f0b9:{c.instructions+=2;NFSU2_TR(0x47f0b9);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x393ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B47f0bf:{NFSU2_TR(0x47f0bf);
if(r1(R+518)){{goto L47f0d1;}}
}
B47f0c1:L47f0c1:{c.instructions+=7;NFSU2_TR(0x47f0c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47f0c8:{NFSU2_TR(0x47f0c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47f0c9:{NFSU2_TR(0x47f0c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47f0ca:{NFSU2_TR(0x47f0ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47f0cb:{NFSU2_TR(0x47f0cb);
__builtin_memmove((R+16),(R+20),4);
}
B47f0cd:{NFSU2_TR(0x47f0cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47f0ce:{NFSU2_TR(0x47f0ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f0d1:L47f0d1:{c.instructions+=2;NFSU2_TR(0x47f0d1);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B47f0d7:{NFSU2_TR(0x47f0d7);
if(r1(R+518)){{goto L47f0e8;}}
}
B47f0d9:L47f0d9:{c.instructions+=3;NFSU2_TR(0x47f0d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47f0df:{NFSU2_TR(0x47f0df);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47f0e2:{NFSU2_TR(0x47f0e2);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47f0e8:L47f0e8:{c.instructions+=9;NFSU2_TR(0x47f0e8);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47f0eb:{NFSU2_TR(0x47f0eb);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47f0f1:{NFSU2_TR(0x47f0f1);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47f0f7:{NFSU2_TR(0x47f0f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47f0f8:{NFSU2_TR(0x47f0f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47f0f9:{NFSU2_TR(0x47f0f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47f0fa:{NFSU2_TR(0x47f0fa);
__builtin_memmove((R+16),(R+20),4);
}
B47f0fc:{NFSU2_TR(0x47f0fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47f0fd:{NFSU2_TR(0x47f0fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f100:L47f100:{c.instructions+=10;NFSU2_TR(0x47f100);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B47f103:{NFSU2_TR(0x47f103);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f104:{NFSU2_TR(0x47f104);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f105:{NFSU2_TR(0x47f105);
__builtin_memmove((R+24),(R+4),4);
}
B47f107:{NFSU2_TR(0x47f107);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47f10d:{NFSU2_TR(0x47f10d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47f10f:{NFSU2_TR(0x47f10f);
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
B47f111:{NFSU2_TR(0x47f111);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f114:{NFSU2_TR(0x47f114);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f117:{NFSU2_TR(0x47f117);
if(r1(R+518)){{goto L47f190;}}
}
B47f119:L47f119:{c.instructions+=5;NFSU2_TR(0x47f119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47f11b:{NFSU2_TR(0x47f11b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f11c:{NFSU2_TR(0x47f11c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f120:{NFSU2_TR(0x47f120);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f124:{NFSU2_TR(0x47f124);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f127ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47f127:L47f127:{c.instructions+=5;NFSU2_TR(0x47f127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47f129:{NFSU2_TR(0x47f129);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f12a:{NFSU2_TR(0x47f12a);
__builtin_memmove((R+4),(R+24),4);
}
B47f12c:{NFSU2_TR(0x47f12c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f130:{NFSU2_TR(0x47f130);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f133ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47f133:L47f133:{c.instructions+=5;NFSU2_TR(0x47f133);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f137:{NFSU2_TR(0x47f137);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B47f13c:{NFSU2_TR(0x47f13c);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f13f:{NFSU2_TR(0x47f13f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47f147:{NFSU2_TR(0x47f147);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47f161;}}
}
B47f149:L47f149:{c.instructions+=2;NFSU2_TR(0x47f149);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f14c:{NFSU2_TR(0x47f14c);
if(r1(R+518)){{goto L47f165;}}
}
B47f14e:L47f14e:{c.instructions+=6;NFSU2_TR(0x47f14e);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47f151:{NFSU2_TR(0x47f151);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47f157:{NFSU2_TR(0x47f157);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47f15a:{NFSU2_TR(0x47f15a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47f15c:{NFSU2_TR(0x47f15c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47f15f:{NFSU2_TR(0x47f15f);
if(r1(R+514)){{goto L47f165;}}
}
B47f161:L47f161:{c.instructions+=1;NFSU2_TR(0x47f161);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f165:L47f165:{c.instructions+=4;NFSU2_TR(0x47f165);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47f16b:{NFSU2_TR(0x47f16b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47f16f:{NFSU2_TR(0x47f16f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f170:{NFSU2_TR(0x47f170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f175ull));
TAIL_STATIC(0x47bb30u,47b);
}
B47f175:L47f175:{c.instructions+=3;NFSU2_TR(0x47f175);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47f17b:{NFSU2_TR(0x47f17b);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f17e:{NFSU2_TR(0x47f17e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47f190;}}
}
B47f180:L47f180:{c.instructions+=2;NFSU2_TR(0x47f180);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47f182:{NFSU2_TR(0x47f182);
if(r1(R+518)){{goto L47f18a;}}
}
B47f184:L47f184:{c.instructions+=3;NFSU2_TR(0x47f184);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47f186:{NFSU2_TR(0x47f186);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f188:{NFSU2_TR(0x47f188);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f18aull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B47f18a:L47f18a:{c.instructions+=1;NFSU2_TR(0x47f18a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f190:L47f190:{c.instructions+=2;NFSU2_TR(0x47f190);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B47f196:{NFSU2_TR(0x47f196);
if(r1(R+518)){{goto L47f213;}}
}
B47f198:L47f198:{c.instructions+=6;NFSU2_TR(0x47f198);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47f19a:{NFSU2_TR(0x47f19a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f19c:{NFSU2_TR(0x47f19c);
__builtin_memmove((R+4),(R+24),4);
}
B47f19e:{NFSU2_TR(0x47f19e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f1a2:{NFSU2_TR(0x47f1a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f1a6:{NFSU2_TR(0x47f1a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f1a9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47f1a9:L47f1a9:{c.instructions+=5;NFSU2_TR(0x47f1a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47f1ab:{NFSU2_TR(0x47f1ab);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f1ad:{NFSU2_TR(0x47f1ad);
__builtin_memmove((R+4),(R+24),4);
}
B47f1af:{NFSU2_TR(0x47f1af);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f1b3:{NFSU2_TR(0x47f1b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f1b6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47f1b6:L47f1b6:{c.instructions+=5;NFSU2_TR(0x47f1b6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f1ba:{NFSU2_TR(0x47f1ba);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B47f1bf:{NFSU2_TR(0x47f1bf);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f1c2:{NFSU2_TR(0x47f1c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47f1ca:{NFSU2_TR(0x47f1ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47f1e4;}}
}
B47f1cc:L47f1cc:{c.instructions+=2;NFSU2_TR(0x47f1cc);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f1cf:{NFSU2_TR(0x47f1cf);
if(r1(R+518)){{goto L47f1e8;}}
}
B47f1d1:L47f1d1:{c.instructions+=6;NFSU2_TR(0x47f1d1);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47f1d4:{NFSU2_TR(0x47f1d4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47f1da:{NFSU2_TR(0x47f1da);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47f1dd:{NFSU2_TR(0x47f1dd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47f1df:{NFSU2_TR(0x47f1df);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47f1e2:{NFSU2_TR(0x47f1e2);
if(r1(R+514)){{goto L47f1e8;}}
}
B47f1e4:L47f1e4:{c.instructions+=1;NFSU2_TR(0x47f1e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f1e8:L47f1e8:{c.instructions+=4;NFSU2_TR(0x47f1e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47f1ee:{NFSU2_TR(0x47f1ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47f1f2:{NFSU2_TR(0x47f1f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f1f3:{NFSU2_TR(0x47f1f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f1f8ull));
TAIL_STATIC(0x47bb30u,47b);
}
B47f1f8:L47f1f8:{c.instructions+=3;NFSU2_TR(0x47f1f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47f1fe:{NFSU2_TR(0x47f1fe);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f201:{NFSU2_TR(0x47f201);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47f213;}}
}
B47f203:L47f203:{c.instructions+=2;NFSU2_TR(0x47f203);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47f205:{NFSU2_TR(0x47f205);
if(r1(R+518)){{goto L47f20d;}}
}
B47f207:L47f207:{c.instructions+=3;NFSU2_TR(0x47f207);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47f209:{NFSU2_TR(0x47f209);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f20b:{NFSU2_TR(0x47f20b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f20dull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B47f20d:L47f20d:{c.instructions+=1;NFSU2_TR(0x47f20d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f213:L47f213:{c.instructions+=2;NFSU2_TR(0x47f213);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B47f219:{NFSU2_TR(0x47f219);
if(r1(R+518)){{goto L47f2a3;}}
}
B47f21f:L47f21f:{c.instructions+=6;NFSU2_TR(0x47f21f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47f221:{NFSU2_TR(0x47f221);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f222:{NFSU2_TR(0x47f222);
__builtin_memmove((R+4),(R+24),4);
}
B47f224:{NFSU2_TR(0x47f224);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f228:{NFSU2_TR(0x47f228);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f22c:{NFSU2_TR(0x47f22c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f22full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47f22f:L47f22f:{c.instructions+=5;NFSU2_TR(0x47f22f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47f231:{NFSU2_TR(0x47f231);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f232:{NFSU2_TR(0x47f232);
__builtin_memmove((R+4),(R+24),4);
}
B47f234:{NFSU2_TR(0x47f234);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f238:{NFSU2_TR(0x47f238);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f23bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47f23b:L47f23b:{c.instructions+=5;NFSU2_TR(0x47f23b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f23f:{NFSU2_TR(0x47f23f);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B47f244:{NFSU2_TR(0x47f244);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f247:{NFSU2_TR(0x47f247);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47f24f:{NFSU2_TR(0x47f24f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47f269;}}
}
B47f251:L47f251:{c.instructions+=2;NFSU2_TR(0x47f251);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f254:{NFSU2_TR(0x47f254);
if(r1(R+518)){{goto L47f26d;}}
}
B47f256:L47f256:{c.instructions+=6;NFSU2_TR(0x47f256);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47f259:{NFSU2_TR(0x47f259);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47f25f:{NFSU2_TR(0x47f25f);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47f262:{NFSU2_TR(0x47f262);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47f264:{NFSU2_TR(0x47f264);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47f267:{NFSU2_TR(0x47f267);
if(r1(R+514)){{goto L47f26d;}}
}
B47f269:L47f269:{c.instructions+=1;NFSU2_TR(0x47f269);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f26d:L47f26d:{c.instructions+=4;NFSU2_TR(0x47f26d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47f273:{NFSU2_TR(0x47f273);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47f277:{NFSU2_TR(0x47f277);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f278:{NFSU2_TR(0x47f278);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f27dull));
TAIL_STATIC(0x47bb30u,47b);
}
B47f27d:L47f27d:{c.instructions+=3;NFSU2_TR(0x47f27d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47f283:{NFSU2_TR(0x47f283);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f286:{NFSU2_TR(0x47f286);
if(r1(R+518)){{goto L47f293;}}
}
B47f288:L47f288:{c.instructions+=3;NFSU2_TR(0x47f288);
__builtin_memmove((R+8),gp(0x82b884),4);
}
B47f28e:{NFSU2_TR(0x47f28e);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47f291:{NFSU2_TR(0x47f291);
if(r1(R+518)){{goto L47f2a3;}}
}
B47f293:L47f293:{c.instructions+=2;NFSU2_TR(0x47f293);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47f295:{NFSU2_TR(0x47f295);
if(r1(R+518)){{goto L47f29d;}}
}
B47f297:L47f297:{c.instructions+=3;NFSU2_TR(0x47f297);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47f299:{NFSU2_TR(0x47f299);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f29b:{NFSU2_TR(0x47f29b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f29dull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B47f29d:L47f29d:{c.instructions+=1;NFSU2_TR(0x47f29d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f2a3:L47f2a3:{c.instructions+=4;NFSU2_TR(0x47f2a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47f2a4:{NFSU2_TR(0x47f2a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47f2a5:{NFSU2_TR(0x47f2a5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47f2a8:{NFSU2_TR(0x47f2a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f2b0:L47f2b0:{c.instructions+=3;NFSU2_TR(0x47f2b0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47f2b5:{NFSU2_TR(0x47f2b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f2b6:{NFSU2_TR(0x47f2b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f2bbull));
TAIL_STATIC(0x43e910u,43e);
}
B47f2bb:L47f2bb:{c.instructions+=3;NFSU2_TR(0x47f2bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47f2be:{NFSU2_TR(0x47f2be);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4e0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4e0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47f2c3:{NFSU2_TR(0x47f2c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47f2ed;}}
}
B47f2c5:L47f2c5:{c.instructions+=6;NFSU2_TR(0x47f2c5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47f2cb:{NFSU2_TR(0x47f2cb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47f2ce:{NFSU2_TR(0x47f2ce);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47f2d4:{NFSU2_TR(0x47f2d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f2d5:{NFSU2_TR(0x47f2d5);
u8 U[4];
w4(U+0,u32(0xe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f2da:{NFSU2_TR(0x47f2da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f2dfull));
TAIL_STATIC(0x440820u,440);
}
B47f2df:L47f2df:{c.instructions+=3;NFSU2_TR(0x47f2df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47f2e2:{NFSU2_TR(0x47f2e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f2e4:{NFSU2_TR(0x47f2e4);
if(r1(R+518)){{goto L47f2ed;}}
}
B47f2e6:L47f2e6:{c.instructions+=2;NFSU2_TR(0x47f2e6);
__builtin_memmove((R+4),(R+0),4);
}
B47f2e8:{NFSU2_TR(0x47f2e8);
TAIL_STATIC(0x47e980u,47e);
}
B47f2ed:L47f2ed:{c.instructions+=2;NFSU2_TR(0x47f2ed);
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
B47f2ef:{NFSU2_TR(0x47f2ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f2f0:L47f2f0:{c.instructions+=3;NFSU2_TR(0x47f2f0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47f2f5:{NFSU2_TR(0x47f2f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f2f6:{NFSU2_TR(0x47f2f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f2fbull));
TAIL_STATIC(0x43e910u,43e);
}
B47f2fb:L47f2fb:{c.instructions+=3;NFSU2_TR(0x47f2fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47f2fe:{NFSU2_TR(0x47f2fe);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4e0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4e0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47f303:{NFSU2_TR(0x47f303);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47f32d;}}
}
B47f305:L47f305:{c.instructions+=6;NFSU2_TR(0x47f305);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47f30b:{NFSU2_TR(0x47f30b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47f30e:{NFSU2_TR(0x47f30e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47f314:{NFSU2_TR(0x47f314);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f315:{NFSU2_TR(0x47f315);
u8 U[4];
w4(U+0,u32(0xe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f31a:{NFSU2_TR(0x47f31a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f31full));
TAIL_STATIC(0x440820u,440);
}
B47f31f:L47f31f:{c.instructions+=3;NFSU2_TR(0x47f31f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47f322:{NFSU2_TR(0x47f322);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f324:{NFSU2_TR(0x47f324);
if(r1(R+518)){{goto L47f32d;}}
}
B47f326:L47f326:{c.instructions+=2;NFSU2_TR(0x47f326);
__builtin_memmove((R+4),(R+0),4);
}
B47f328:{NFSU2_TR(0x47f328);
TAIL_STATIC(0x476090u,476);
}
B47f32d:L47f32d:{c.instructions+=2;NFSU2_TR(0x47f32d);
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
B47f32f:{NFSU2_TR(0x47f32f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f330:L47f330:{c.instructions+=3;NFSU2_TR(0x47f330);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f331:{NFSU2_TR(0x47f331);
__builtin_memmove((R+24),(R+4),4);
}
B47f333:{NFSU2_TR(0x47f333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f338ull));
TAIL_STATIC(0x4760e0u,476);
}
B47f338:L47f338:{c.instructions+=2;NFSU2_TR(0x47f338);
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
B47f33d:{NFSU2_TR(0x47f33d);
if(r1(R+518)){{goto L47f348;}}
}
B47f33f:L47f33f:{c.instructions+=2;NFSU2_TR(0x47f33f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f340:{NFSU2_TR(0x47f340);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f345ull));
TAIL_STATIC(0x440540u,440);
}
B47f345:L47f345:{c.instructions+=1;NFSU2_TR(0x47f345);
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
B47f348:L47f348:{c.instructions+=3;NFSU2_TR(0x47f348);
__builtin_memmove((R+0),(R+24),4);
}
B47f34a:{NFSU2_TR(0x47f34a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47f34b:{NFSU2_TR(0x47f34b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f350:L47f350:{c.instructions+=3;NFSU2_TR(0x47f350);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47f355:{NFSU2_TR(0x47f355);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f356:{NFSU2_TR(0x47f356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f35bull));
TAIL_STATIC(0x43e910u,43e);
}
B47f35b:L47f35b:{c.instructions+=3;NFSU2_TR(0x47f35b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47f35e:{NFSU2_TR(0x47f35e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4e0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4e0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47f363:{NFSU2_TR(0x47f363);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47f38d;}}
}
B47f365:L47f365:{c.instructions+=6;NFSU2_TR(0x47f365);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47f36b:{NFSU2_TR(0x47f36b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47f36e:{NFSU2_TR(0x47f36e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47f374:{NFSU2_TR(0x47f374);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f375:{NFSU2_TR(0x47f375);
u8 U[4];
w4(U+0,u32(0xe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f37a:{NFSU2_TR(0x47f37a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f37full));
TAIL_STATIC(0x440820u,440);
}
B47f37f:L47f37f:{c.instructions+=3;NFSU2_TR(0x47f37f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47f382:{NFSU2_TR(0x47f382);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f384:{NFSU2_TR(0x47f384);
if(r1(R+518)){{goto L47f38d;}}
}
B47f386:L47f386:{c.instructions+=2;NFSU2_TR(0x47f386);
__builtin_memmove((R+4),(R+0),4);
}
B47f388:{NFSU2_TR(0x47f388);
TAIL_STATIC(0x4761a0u,476);
}
B47f38d:L47f38d:{c.instructions+=2;NFSU2_TR(0x47f38d);
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
B47f38f:{NFSU2_TR(0x47f38f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f390:L47f390:{c.instructions+=3;NFSU2_TR(0x47f390);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f391:{NFSU2_TR(0x47f391);
__builtin_memmove((R+24),(R+4),4);
}
B47f393:{NFSU2_TR(0x47f393);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f398ull));
TAIL_STATIC(0x4761f0u,476);
}
B47f398:L47f398:{c.instructions+=2;NFSU2_TR(0x47f398);
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
B47f39d:{NFSU2_TR(0x47f39d);
if(r1(R+518)){{goto L47f3a8;}}
}
B47f39f:L47f39f:{c.instructions+=2;NFSU2_TR(0x47f39f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f3a0:{NFSU2_TR(0x47f3a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f3a5ull));
TAIL_STATIC(0x440540u,440);
}
B47f3a5:L47f3a5:{c.instructions+=1;NFSU2_TR(0x47f3a5);
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
B47f3a8:L47f3a8:{c.instructions+=3;NFSU2_TR(0x47f3a8);
__builtin_memmove((R+0),(R+24),4);
}
B47f3aa:{NFSU2_TR(0x47f3aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47f3ab:{NFSU2_TR(0x47f3ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f3b0:L47f3b0:{c.instructions+=3;NFSU2_TR(0x47f3b0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47f3b5:{NFSU2_TR(0x47f3b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f3b6:{NFSU2_TR(0x47f3b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f3bbull));
TAIL_STATIC(0x43e910u,43e);
}
B47f3bb:L47f3bb:{c.instructions+=3;NFSU2_TR(0x47f3bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47f3be:{NFSU2_TR(0x47f3be);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4b4ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4b4ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47f3c3:{NFSU2_TR(0x47f3c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47f3ed;}}
}
B47f3c5:L47f3c5:{c.instructions+=6;NFSU2_TR(0x47f3c5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47f3cb:{NFSU2_TR(0x47f3cb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47f3ce:{NFSU2_TR(0x47f3ce);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47f3d4:{NFSU2_TR(0x47f3d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f3d5:{NFSU2_TR(0x47f3d5);
u8 U[4];
w4(U+0,u32(0xb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f3da:{NFSU2_TR(0x47f3da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f3dfull));
TAIL_STATIC(0x440820u,440);
}
B47f3df:L47f3df:{c.instructions+=3;NFSU2_TR(0x47f3df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47f3e2:{NFSU2_TR(0x47f3e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f3e4:{NFSU2_TR(0x47f3e4);
if(r1(R+518)){{goto L47f3ed;}}
}
B47f3e6:L47f3e6:{c.instructions+=2;NFSU2_TR(0x47f3e6);
__builtin_memmove((R+4),(R+0),4);
}
B47f3e8:{NFSU2_TR(0x47f3e8);
TAIL_STATIC(0x4762c0u,476);
}
B47f3ed:L47f3ed:{c.instructions+=2;NFSU2_TR(0x47f3ed);
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
B47f3ef:{NFSU2_TR(0x47f3ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f3f0:L47f3f0:{c.instructions+=3;NFSU2_TR(0x47f3f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f3f1:{NFSU2_TR(0x47f3f1);
__builtin_memmove((R+24),(R+4),4);
}
B47f3f3:{NFSU2_TR(0x47f3f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f3f8ull));
TAIL_STATIC(0x476300u,476);
}
B47f3f8:L47f3f8:{c.instructions+=2;NFSU2_TR(0x47f3f8);
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
B47f3fd:{NFSU2_TR(0x47f3fd);
if(r1(R+518)){{goto L47f408;}}
}
B47f3ff:L47f3ff:{c.instructions+=2;NFSU2_TR(0x47f3ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f400:{NFSU2_TR(0x47f400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f405ull));
TAIL_STATIC(0x440540u,440);
}
B47f405:L47f405:{c.instructions+=1;NFSU2_TR(0x47f405);
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
B47f408:L47f408:{c.instructions+=3;NFSU2_TR(0x47f408);
__builtin_memmove((R+0),(R+24),4);
}
B47f40a:{NFSU2_TR(0x47f40a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47f40b:{NFSU2_TR(0x47f40b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f410:L47f410:{c.instructions+=3;NFSU2_TR(0x47f410);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f411:{NFSU2_TR(0x47f411);
__builtin_memmove((R+24),(R+4),4);
}
B47f413:{NFSU2_TR(0x47f413);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f418ull));
TAIL_STATIC(0x45e350u,45e);
}
B47f418:L47f418:{c.instructions+=11;NFSU2_TR(0x47f418);
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
B47f41a:{NFSU2_TR(0x47f41a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47f420:{NFSU2_TR(0x47f420);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f426:{NFSU2_TR(0x47f426);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f42c:{NFSU2_TR(0x47f42c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f432:{NFSU2_TR(0x47f432);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f438:{NFSU2_TR(0x47f438);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47f43c:{NFSU2_TR(0x47f43c);
u8 U[4];
w4(U+0,u32(0x78bc80ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47f442:{NFSU2_TR(0x47f442);
__builtin_memmove((R+0),(R+24),4);
}
B47f444:{NFSU2_TR(0x47f444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47f445:{NFSU2_TR(0x47f445);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f450:L47f450:{c.instructions+=3;NFSU2_TR(0x47f450);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f451:{NFSU2_TR(0x47f451);
__builtin_memmove((R+24),(R+4),4);
}
B47f453:{NFSU2_TR(0x47f453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f458ull));
{goto L47f470;}
}
B47f458:L47f458:{c.instructions+=2;NFSU2_TR(0x47f458);
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
B47f45d:{NFSU2_TR(0x47f45d);
if(r1(R+518)){{goto L47f468;}}
}
B47f45f:L47f45f:{c.instructions+=2;NFSU2_TR(0x47f45f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f460:{NFSU2_TR(0x47f460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f465ull));
TAIL_STATIC(0x440540u,440);
}
B47f465:L47f465:{c.instructions+=1;NFSU2_TR(0x47f465);
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
B47f468:L47f468:{c.instructions+=3;NFSU2_TR(0x47f468);
__builtin_memmove((R+0),(R+24),4);
}
B47f46a:{NFSU2_TR(0x47f46a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47f46b:{NFSU2_TR(0x47f46b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f470:L47f470:{c.instructions+=2;NFSU2_TR(0x47f470);
u8 U[4];
w4(U+0,u32(0x78bc80ull));
s4(u32(r4(R+4)),r4(U+0));
}
B47f476:{NFSU2_TR(0x47f476);
TAIL_STATIC(0x4764f0u,476);
}
B47f480:L47f480:{c.instructions+=3;NFSU2_TR(0x47f480);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47f485:{NFSU2_TR(0x47f485);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f486:{NFSU2_TR(0x47f486);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f48bull));
TAIL_STATIC(0x43e910u,43e);
}
B47f48b:L47f48b:{c.instructions+=3;NFSU2_TR(0x47f48b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47f48e:{NFSU2_TR(0x47f48e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4bcull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4bcull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47f493:{NFSU2_TR(0x47f493);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47f4bd;}}
}
B47f495:L47f495:{c.instructions+=6;NFSU2_TR(0x47f495);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47f49b:{NFSU2_TR(0x47f49b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47f49e:{NFSU2_TR(0x47f49e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47f4a4:{NFSU2_TR(0x47f4a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f4a5:{NFSU2_TR(0x47f4a5);
u8 U[4];
w4(U+0,u32(0xbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f4aa:{NFSU2_TR(0x47f4aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f4afull));
TAIL_STATIC(0x440820u,440);
}
B47f4af:L47f4af:{c.instructions+=3;NFSU2_TR(0x47f4af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47f4b2:{NFSU2_TR(0x47f4b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f4b4:{NFSU2_TR(0x47f4b4);
if(r1(R+518)){{goto L47f4bd;}}
}
B47f4b6:L47f4b6:{c.instructions+=2;NFSU2_TR(0x47f4b6);
__builtin_memmove((R+4),(R+0),4);
}
B47f4b8:{NFSU2_TR(0x47f4b8);
TAIL_STATIC(0x4764b0u,476);
}
B47f4bd:L47f4bd:{c.instructions+=2;NFSU2_TR(0x47f4bd);
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
B47f4bf:{NFSU2_TR(0x47f4bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f4c0:L47f4c0:{c.instructions+=3;NFSU2_TR(0x47f4c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f4c1:{NFSU2_TR(0x47f4c1);
__builtin_memmove((R+24),(R+4),4);
}
B47f4c3:{NFSU2_TR(0x47f4c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f4c8ull));
TAIL_STATIC(0x4764f0u,476);
}
B47f4c8:L47f4c8:{c.instructions+=2;NFSU2_TR(0x47f4c8);
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
B47f4cd:{NFSU2_TR(0x47f4cd);
if(r1(R+518)){{goto L47f4d8;}}
}
B47f4cf:L47f4cf:{c.instructions+=2;NFSU2_TR(0x47f4cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f4d0:{NFSU2_TR(0x47f4d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f4d5ull));
TAIL_STATIC(0x440540u,440);
}
B47f4d5:L47f4d5:{c.instructions+=1;NFSU2_TR(0x47f4d5);
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
B47f4d8:L47f4d8:{c.instructions+=3;NFSU2_TR(0x47f4d8);
__builtin_memmove((R+0),(R+24),4);
}
B47f4da:{NFSU2_TR(0x47f4da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47f4db:{NFSU2_TR(0x47f4db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f4e0:L47f4e0:{c.instructions+=3;NFSU2_TR(0x47f4e0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47f4e5:{NFSU2_TR(0x47f4e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f4e6:{NFSU2_TR(0x47f4e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f4ebull));
TAIL_STATIC(0x43e910u,43e);
}
B47f4eb:L47f4eb:{c.instructions+=3;NFSU2_TR(0x47f4eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47f4ee:{NFSU2_TR(0x47f4ee);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4bcull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4bcull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47f4f3:{NFSU2_TR(0x47f4f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47f51d;}}
}
B47f4f5:L47f4f5:{c.instructions+=6;NFSU2_TR(0x47f4f5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47f4fb:{NFSU2_TR(0x47f4fb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47f4fe:{NFSU2_TR(0x47f4fe);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47f504:{NFSU2_TR(0x47f504);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f505:{NFSU2_TR(0x47f505);
u8 U[4];
w4(U+0,u32(0xbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f50a:{NFSU2_TR(0x47f50a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f50full));
TAIL_STATIC(0x440820u,440);
}
B47f50f:L47f50f:{c.instructions+=3;NFSU2_TR(0x47f50f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47f512:{NFSU2_TR(0x47f512);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f514:{NFSU2_TR(0x47f514);
if(r1(R+518)){{goto L47f51d;}}
}
B47f516:L47f516:{c.instructions+=2;NFSU2_TR(0x47f516);
__builtin_memmove((R+4),(R+0),4);
}
B47f518:{NFSU2_TR(0x47f518);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47f410u);}goto L47f410;}
}
B47f51d:L47f51d:{c.instructions+=2;NFSU2_TR(0x47f51d);
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
B47f51f:{NFSU2_TR(0x47f51f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f520:L47f520:{c.instructions+=3;NFSU2_TR(0x47f520);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47f525:{NFSU2_TR(0x47f525);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f526:{NFSU2_TR(0x47f526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f52bull));
TAIL_STATIC(0x43e910u,43e);
}
B47f52b:L47f52b:{c.instructions+=3;NFSU2_TR(0x47f52b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47f52e:{NFSU2_TR(0x47f52e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4b8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4b8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47f533:{NFSU2_TR(0x47f533);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47f55d;}}
}
B47f535:L47f535:{c.instructions+=6;NFSU2_TR(0x47f535);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47f53b:{NFSU2_TR(0x47f53b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47f53e:{NFSU2_TR(0x47f53e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47f544:{NFSU2_TR(0x47f544);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f545:{NFSU2_TR(0x47f545);
u8 U[4];
w4(U+0,u32(0xb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f54a:{NFSU2_TR(0x47f54a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f54full));
TAIL_STATIC(0x440820u,440);
}
B47f54f:L47f54f:{c.instructions+=3;NFSU2_TR(0x47f54f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47f552:{NFSU2_TR(0x47f552);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f554:{NFSU2_TR(0x47f554);
if(r1(R+518)){{goto L47f55d;}}
}
B47f556:L47f556:{c.instructions+=2;NFSU2_TR(0x47f556);
__builtin_memmove((R+4),(R+0),4);
}
B47f558:{NFSU2_TR(0x47f558);
TAIL_STATIC(0x4766c0u,476);
}
B47f55d:L47f55d:{c.instructions+=2;NFSU2_TR(0x47f55d);
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
B47f55f:{NFSU2_TR(0x47f55f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f560:L47f560:{c.instructions+=3;NFSU2_TR(0x47f560);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f561:{NFSU2_TR(0x47f561);
__builtin_memmove((R+24),(R+4),4);
}
B47f563:{NFSU2_TR(0x47f563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f568ull));
TAIL_STATIC(0x476700u,476);
}
B47f568:L47f568:{c.instructions+=2;NFSU2_TR(0x47f568);
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
B47f56d:{NFSU2_TR(0x47f56d);
if(r1(R+518)){{goto L47f578;}}
}
B47f56f:L47f56f:{c.instructions+=2;NFSU2_TR(0x47f56f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f570:{NFSU2_TR(0x47f570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f575ull));
TAIL_STATIC(0x440540u,440);
}
B47f575:L47f575:{c.instructions+=1;NFSU2_TR(0x47f575);
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
B47f578:L47f578:{c.instructions+=3;NFSU2_TR(0x47f578);
__builtin_memmove((R+0),(R+24),4);
}
B47f57a:{NFSU2_TR(0x47f57a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47f57b:{NFSU2_TR(0x47f57b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f580:L47f580:{c.instructions+=18;NFSU2_TR(0x47f580);
__builtin_memmove((R+0),(R+4),4);
}
B47f582:{NFSU2_TR(0x47f582);
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
B47f584:{NFSU2_TR(0x47f584);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f587:{NFSU2_TR(0x47f587);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f58a:{NFSU2_TR(0x47f58a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f58d:{NFSU2_TR(0x47f58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f590:{NFSU2_TR(0x47f590);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f593:{NFSU2_TR(0x47f593);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f596:{NFSU2_TR(0x47f596);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f599:{NFSU2_TR(0x47f599);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f59c:{NFSU2_TR(0x47f59c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f59f:{NFSU2_TR(0x47f59f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f5a2:{NFSU2_TR(0x47f5a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f5a5:{NFSU2_TR(0x47f5a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f5a8:{NFSU2_TR(0x47f5a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47f5ab:{NFSU2_TR(0x47f5ab);
u8 U[4];
w4(U+0,u32(0x78bcc4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B47f5b1:{NFSU2_TR(0x47f5b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47f5b8:{NFSU2_TR(0x47f5b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f5c0:L47f5c0:{c.instructions+=19;NFSU2_TR(0x47f5c0);
__builtin_memmove((R+0),(R+4),4);
}
B47f5c2:{NFSU2_TR(0x47f5c2);
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
B47f5c4:{NFSU2_TR(0x47f5c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f5c7:{NFSU2_TR(0x47f5c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f5ca:{NFSU2_TR(0x47f5ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f5cd:{NFSU2_TR(0x47f5cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f5d0:{NFSU2_TR(0x47f5d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f5d3:{NFSU2_TR(0x47f5d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f5d6:{NFSU2_TR(0x47f5d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f5d9:{NFSU2_TR(0x47f5d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f5dc:{NFSU2_TR(0x47f5dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f5df:{NFSU2_TR(0x47f5df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f5e2:{NFSU2_TR(0x47f5e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f5e5:{NFSU2_TR(0x47f5e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f5e8:{NFSU2_TR(0x47f5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f5eb:{NFSU2_TR(0x47f5eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47f5ee:{NFSU2_TR(0x47f5ee);
u8 U[4];
w4(U+0,u32(0x78bcf4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B47f5f4:{NFSU2_TR(0x47f5f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f5f7:{NFSU2_TR(0x47f5f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f600:L47f600:{c.instructions+=3;NFSU2_TR(0x47f600);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47f605:{NFSU2_TR(0x47f605);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f606:{NFSU2_TR(0x47f606);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f60bull));
TAIL_STATIC(0x43e910u,43e);
}
B47f60b:L47f60b:{c.instructions+=3;NFSU2_TR(0x47f60b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47f60e:{NFSU2_TR(0x47f60e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x448ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x448ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47f613:{NFSU2_TR(0x47f613);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47f63a;}}
}
B47f615:L47f615:{c.instructions+=6;NFSU2_TR(0x47f615);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47f61b:{NFSU2_TR(0x47f61b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47f61e:{NFSU2_TR(0x47f61e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47f624:{NFSU2_TR(0x47f624);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f625:{NFSU2_TR(0x47f625);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f627:{NFSU2_TR(0x47f627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f62cull));
TAIL_STATIC(0x440820u,440);
}
B47f62c:L47f62c:{c.instructions+=3;NFSU2_TR(0x47f62c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47f62f:{NFSU2_TR(0x47f62f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f631:{NFSU2_TR(0x47f631);
if(r1(R+518)){{goto L47f63a;}}
}
B47f633:L47f633:{c.instructions+=2;NFSU2_TR(0x47f633);
__builtin_memmove((R+4),(R+0),4);
}
B47f635:{NFSU2_TR(0x47f635);
TAIL_STATIC(0x479170u,479);
}
B47f63a:L47f63a:{c.instructions+=2;NFSU2_TR(0x47f63a);
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
B47f63c:{NFSU2_TR(0x47f63c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f640:L47f640:{c.instructions+=3;NFSU2_TR(0x47f640);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f641:{NFSU2_TR(0x47f641);
__builtin_memmove((R+24),(R+4),4);
}
B47f643:{NFSU2_TR(0x47f643);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f648ull));
TAIL_STATIC(0x477060u,477);
}
B47f648:L47f648:{c.instructions+=2;NFSU2_TR(0x47f648);
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
B47f64d:{NFSU2_TR(0x47f64d);
if(r1(R+518)){{goto L47f658;}}
}
B47f64f:L47f64f:{c.instructions+=2;NFSU2_TR(0x47f64f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f650:{NFSU2_TR(0x47f650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f655ull));
TAIL_STATIC(0x440540u,440);
}
B47f655:L47f655:{c.instructions+=1;NFSU2_TR(0x47f655);
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
B47f658:L47f658:{c.instructions+=3;NFSU2_TR(0x47f658);
__builtin_memmove((R+0),(R+24),4);
}
B47f65a:{NFSU2_TR(0x47f65a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47f65b:{NFSU2_TR(0x47f65b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f660:L47f660:{c.instructions+=5;NFSU2_TR(0x47f660);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f661:{NFSU2_TR(0x47f661);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f662:{NFSU2_TR(0x47f662);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f663:{NFSU2_TR(0x47f663);
__builtin_memmove((R+24),(R+4),4);
}
B47f665:{NFSU2_TR(0x47f665);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47f667:L47f667:{c.instructions+=5;NFSU2_TR(0x47f667);
__builtin_memmove((R+4),(R+12),4);
}
B47f669:{NFSU2_TR(0x47f669);
w4(R+0,u32(0x1ull));
}
B47f66e:{NFSU2_TR(0x47f66e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B47f670:{NFSU2_TR(0x47f670);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B47f673:{NFSU2_TR(0x47f673);
if(r1(R+518)){{goto L47f6bd;}}
}
B47f675:L47f675:{c.instructions+=5;NFSU2_TR(0x47f675);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47f678:{NFSU2_TR(0x47f678);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f679:{NFSU2_TR(0x47f679);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f67a:{NFSU2_TR(0x47f67a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47f67d:{NFSU2_TR(0x47f67d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f682ull));
TAIL_STATIC(0x476790u,476);
}
B47f682:L47f682:{c.instructions+=3;NFSU2_TR(0x47f682);
__builtin_memmove((R+28),(R+0),4);
}
B47f684:{NFSU2_TR(0x47f684);
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
B47f686:{NFSU2_TR(0x47f686);
if(r1(R+518)){{goto L47f6bd;}}
}
B47f688:L47f688:{c.instructions+=4;NFSU2_TR(0x47f688);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47f68a:{NFSU2_TR(0x47f68a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f68b:{NFSU2_TR(0x47f68b);
__builtin_memmove((R+4),(R+28),4);
}
B47f68d:{NFSU2_TR(0x47f68d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f690ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47f690:L47f690:{c.instructions+=6;NFSU2_TR(0x47f690);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47f693:{NFSU2_TR(0x47f693);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47f696:{NFSU2_TR(0x47f696);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B47f697:{NFSU2_TR(0x47f697);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f699:{NFSU2_TR(0x47f699);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f69c:{NFSU2_TR(0x47f69c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47f6a3;}}
}
B47f69e:L47f69e:{c.instructions+=2;NFSU2_TR(0x47f69e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f6a1:{NFSU2_TR(0x47f6a1);
{goto L47f6bd;}
}
B47f6a3:L47f6a3:{c.instructions+=3;NFSU2_TR(0x47f6a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47f6a6:{NFSU2_TR(0x47f6a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f6a8:{NFSU2_TR(0x47f6a8);
if(r1(R+518)){{goto L47f6ba;}}
}
B47f6aa:L47f6aa:{c.instructions+=1;NFSU2_TR(0x47f6aa);
__builtin_memmove((R+12),(R+12),4);
}
B47f6b0:L47f6b0:{c.instructions+=4;NFSU2_TR(0x47f6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47f6b3:{NFSU2_TR(0x47f6b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47f6b6:{NFSU2_TR(0x47f6b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f6b8:{NFSU2_TR(0x47f6b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47f6b0u);}goto L47f6b0;}}
}
B47f6ba:L47f6ba:{c.instructions+=1;NFSU2_TR(0x47f6ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47f6bd:L47f6bd:{c.instructions+=3;NFSU2_TR(0x47f6bd);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B47f6be:{NFSU2_TR(0x47f6be);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47f6c1:{NFSU2_TR(0x47f6c1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47f667u);}goto L47f667;}}
}
B47f6c3:L47f6c3:{c.instructions+=4;NFSU2_TR(0x47f6c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47f6c4:{NFSU2_TR(0x47f6c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47f6c5:{NFSU2_TR(0x47f6c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47f6c6:{NFSU2_TR(0x47f6c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f6d0:L47f6d0:{c.instructions+=7;NFSU2_TR(0x47f6d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f6d1:{NFSU2_TR(0x47f6d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f6d2:{NFSU2_TR(0x47f6d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f6d3:{NFSU2_TR(0x47f6d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47f6d7:{NFSU2_TR(0x47f6d7);
__builtin_memmove((R+12),(R+4),4);
}
B47f6d9:{NFSU2_TR(0x47f6d9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B47f6db:{NFSU2_TR(0x47f6db);
{goto L47f6e0;}
}
B47f6e0:L47f6e0:{c.instructions+=5;NFSU2_TR(0x47f6e0);
w4(R+0,u32(0x1ull));
}
B47f6e5:{NFSU2_TR(0x47f6e5);
__builtin_memmove((R+4),(R+24),4);
}
B47f6e7:{NFSU2_TR(0x47f6e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B47f6e9:{NFSU2_TR(0x47f6e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f6eb:{NFSU2_TR(0x47f6eb);
if(r1(R+518)){{goto L47f6f5;}}
}
B47f6ed:L47f6ed:{c.instructions+=3;NFSU2_TR(0x47f6ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f6ee:{NFSU2_TR(0x47f6ee);
__builtin_memmove((R+4),(R+12),4);
}
B47f6f0:{NFSU2_TR(0x47f6f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f6f5ull));
TAIL_STATIC(0x476f80u,476);
}
B47f6f5:L47f6f5:{c.instructions+=3;NFSU2_TR(0x47f6f5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B47f6f6:{NFSU2_TR(0x47f6f6);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47f6f9:{NFSU2_TR(0x47f6f9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47f6e0u);}goto L47f6e0;}}
}
B47f6fb:L47f6fb:{c.instructions+=4;NFSU2_TR(0x47f6fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47f6fc:{NFSU2_TR(0x47f6fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47f6fd:{NFSU2_TR(0x47f6fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47f6fe:{NFSU2_TR(0x47f6fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f710:L47f710:{c.instructions+=8;NFSU2_TR(0x47f710);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f711:{NFSU2_TR(0x47f711);
__builtin_memmove((R+12),(R+4),4);
}
B47f713:{NFSU2_TR(0x47f713);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f714:{NFSU2_TR(0x47f714);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47f717:{NFSU2_TR(0x47f717);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f719:{NFSU2_TR(0x47f719);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f71a:{NFSU2_TR(0x47f71a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47f721:{NFSU2_TR(0x47f721);
if(r1(R+518)){{goto L47f75f;}}
}
B47f723:L47f723:{c.instructions+=5;NFSU2_TR(0x47f723);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47f725:{NFSU2_TR(0x47f725);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47f727:{NFSU2_TR(0x47f727);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f728:{NFSU2_TR(0x47f728);
__builtin_memmove((R+4),(R+24),4);
}
B47f72a:{NFSU2_TR(0x47f72a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f72dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47f72d:L47f72d:{c.instructions+=2;NFSU2_TR(0x47f72d);
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
B47f730:{NFSU2_TR(0x47f730);
if(r1(R+518)){{goto L47f758;}}
}
B47f732:L47f732:{c.instructions+=4;NFSU2_TR(0x47f732);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47f734:{NFSU2_TR(0x47f734);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f735:{NFSU2_TR(0x47f735);
__builtin_memmove((R+4),(R+24),4);
}
B47f737:{NFSU2_TR(0x47f737);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f73aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47f73a:L47f73a:{c.instructions+=3;NFSU2_TR(0x47f73a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f73b:{NFSU2_TR(0x47f73b);
__builtin_memmove((R+4),(R+12),4);
}
B47f73d:{NFSU2_TR(0x47f73d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f742ull));
TAIL_STATIC(0x476f80u,476);
}
B47f742:L47f742:{c.instructions+=4;NFSU2_TR(0x47f742);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47f744:{NFSU2_TR(0x47f744);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f745:{NFSU2_TR(0x47f745);
__builtin_memmove((R+4),(R+24),4);
}
B47f747:{NFSU2_TR(0x47f747);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f74aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47f74a:L47f74a:{c.instructions+=5;NFSU2_TR(0x47f74a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47f74c:{NFSU2_TR(0x47f74c);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47f74d:{NFSU2_TR(0x47f74d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f74e:{NFSU2_TR(0x47f74e);
__builtin_memmove((R+4),(R+24),4);
}
B47f750:{NFSU2_TR(0x47f750);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f753ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47f753:L47f753:{c.instructions+=2;NFSU2_TR(0x47f753);
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
B47f756:{NFSU2_TR(0x47f756);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47f732u);}goto L47f732;}}
}
B47f758:L47f758:{c.instructions+=3;NFSU2_TR(0x47f758);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47f75b:{NFSU2_TR(0x47f75b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f75d:{NFSU2_TR(0x47f75d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47f723u);}goto L47f723;}}
}
B47f75f:L47f75f:{c.instructions+=3;NFSU2_TR(0x47f75f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47f762:{NFSU2_TR(0x47f762);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f764:{NFSU2_TR(0x47f764);
if(r1(R+518)){{goto L47f7a2;}}
}
B47f766:L47f766:{c.instructions+=5;NFSU2_TR(0x47f766);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47f768:{NFSU2_TR(0x47f768);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47f76a:{NFSU2_TR(0x47f76a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f76b:{NFSU2_TR(0x47f76b);
__builtin_memmove((R+4),(R+24),4);
}
B47f76d:{NFSU2_TR(0x47f76d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f770ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47f770:L47f770:{c.instructions+=2;NFSU2_TR(0x47f770);
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
B47f773:{NFSU2_TR(0x47f773);
if(r1(R+518)){{goto L47f79b;}}
}
B47f775:L47f775:{c.instructions+=4;NFSU2_TR(0x47f775);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47f777:{NFSU2_TR(0x47f777);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f778:{NFSU2_TR(0x47f778);
__builtin_memmove((R+4),(R+24),4);
}
B47f77a:{NFSU2_TR(0x47f77a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f77dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47f77d:L47f77d:{c.instructions+=3;NFSU2_TR(0x47f77d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f77e:{NFSU2_TR(0x47f77e);
__builtin_memmove((R+4),(R+12),4);
}
B47f780:{NFSU2_TR(0x47f780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f785ull));
TAIL_STATIC(0x476f80u,476);
}
B47f785:L47f785:{c.instructions+=4;NFSU2_TR(0x47f785);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47f787:{NFSU2_TR(0x47f787);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f788:{NFSU2_TR(0x47f788);
__builtin_memmove((R+4),(R+24),4);
}
B47f78a:{NFSU2_TR(0x47f78a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f78dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47f78d:L47f78d:{c.instructions+=5;NFSU2_TR(0x47f78d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47f78f:{NFSU2_TR(0x47f78f);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47f790:{NFSU2_TR(0x47f790);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f791:{NFSU2_TR(0x47f791);
__builtin_memmove((R+4),(R+24),4);
}
B47f793:{NFSU2_TR(0x47f793);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f796ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47f796:L47f796:{c.instructions+=2;NFSU2_TR(0x47f796);
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
B47f799:{NFSU2_TR(0x47f799);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47f775u);}goto L47f775;}}
}
B47f79b:L47f79b:{c.instructions+=3;NFSU2_TR(0x47f79b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47f79e:{NFSU2_TR(0x47f79e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f7a0:{NFSU2_TR(0x47f7a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47f766u);}goto L47f766;}}
}
B47f7a2:L47f7a2:{c.instructions+=5;NFSU2_TR(0x47f7a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47f7a3:{NFSU2_TR(0x47f7a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47f7a4:{NFSU2_TR(0x47f7a4);
__builtin_memmove((R+4),(R+12),4);
}
B47f7a6:{NFSU2_TR(0x47f7a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47f7a7:{NFSU2_TR(0x47f7a7);
TAIL_STATIC(0x464a10u,464);
}
B47f7b0:L47f7b0:{c.instructions+=3;NFSU2_TR(0x47f7b0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47f7b5:{NFSU2_TR(0x47f7b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f7b6:{NFSU2_TR(0x47f7b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f7bbull));
TAIL_STATIC(0x43e910u,43e);
}
B47f7bb:L47f7bb:{c.instructions+=3;NFSU2_TR(0x47f7bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47f7be:{NFSU2_TR(0x47f7be);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x448ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x448ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47f7c3:{NFSU2_TR(0x47f7c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47f7ea;}}
}
B47f7c5:L47f7c5:{c.instructions+=6;NFSU2_TR(0x47f7c5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47f7cb:{NFSU2_TR(0x47f7cb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47f7ce:{NFSU2_TR(0x47f7ce);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47f7d4:{NFSU2_TR(0x47f7d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f7d5:{NFSU2_TR(0x47f7d5);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f7d7:{NFSU2_TR(0x47f7d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f7dcull));
TAIL_STATIC(0x440820u,440);
}
B47f7dc:L47f7dc:{c.instructions+=3;NFSU2_TR(0x47f7dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47f7df:{NFSU2_TR(0x47f7df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f7e1:{NFSU2_TR(0x47f7e1);
if(r1(R+518)){{goto L47f7ea;}}
}
B47f7e3:L47f7e3:{c.instructions+=2;NFSU2_TR(0x47f7e3);
__builtin_memmove((R+4),(R+0),4);
}
B47f7e5:{NFSU2_TR(0x47f7e5);
TAIL_STATIC(0x476ff0u,476);
}
B47f7ea:L47f7ea:{c.instructions+=2;NFSU2_TR(0x47f7ea);
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
B47f7ec:{NFSU2_TR(0x47f7ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f7f0:L47f7f0:{c.instructions+=3;NFSU2_TR(0x47f7f0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47f7f5:{NFSU2_TR(0x47f7f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f7f6:{NFSU2_TR(0x47f7f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f7fbull));
TAIL_STATIC(0x43e910u,43e);
}
B47f7fb:L47f7fb:{c.instructions+=3;NFSU2_TR(0x47f7fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47f7fe:{NFSU2_TR(0x47f7fe);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x43cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x43cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47f803:{NFSU2_TR(0x47f803);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47f82a;}}
}
B47f805:L47f805:{c.instructions+=6;NFSU2_TR(0x47f805);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47f80b:{NFSU2_TR(0x47f80b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47f80e:{NFSU2_TR(0x47f80e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47f814:{NFSU2_TR(0x47f814);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f815:{NFSU2_TR(0x47f815);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f817:{NFSU2_TR(0x47f817);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f81cull));
TAIL_STATIC(0x440820u,440);
}
B47f81c:L47f81c:{c.instructions+=3;NFSU2_TR(0x47f81c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47f81f:{NFSU2_TR(0x47f81f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47f821:{NFSU2_TR(0x47f821);
if(r1(R+518)){{goto L47f82a;}}
}
B47f823:L47f823:{c.instructions+=2;NFSU2_TR(0x47f823);
__builtin_memmove((R+4),(R+0),4);
}
B47f825:{NFSU2_TR(0x47f825);
TAIL_STATIC(0x477030u,477);
}
B47f82a:L47f82a:{c.instructions+=2;NFSU2_TR(0x47f82a);
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
B47f82c:{NFSU2_TR(0x47f82c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47f830:L47f830:{c.instructions+=3;NFSU2_TR(0x47f830);
u8 U[4];
w4(U+0,u32(0x7ed454ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f835:{NFSU2_TR(0x47f835);
w4(R+4,u32(0x82bebcull));
}
B47f83a:{NFSU2_TR(0x47f83a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f83full));
TAIL_STATIC(0x479130u,479);
}
B47f83f:L47f83f:{c.instructions+=3;NFSU2_TR(0x47f83f);
u8 U[4];
w4(U+0,u32(0x7ed444ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f844:{NFSU2_TR(0x47f844);
w4(R+4,u32(0x82bebcull));
}
B47f849:{NFSU2_TR(0x47f849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f84eull));
TAIL_STATIC(0x479130u,479);
}
B47f84e:L47f84e:{c.instructions+=3;NFSU2_TR(0x47f84e);
u8 U[4];
w4(U+0,u32(0x7ed430ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f853:{NFSU2_TR(0x47f853);
w4(R+4,u32(0x82bebcull));
}
B47f858:{NFSU2_TR(0x47f858);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f85dull));
TAIL_STATIC(0x479130u,479);
}
B47f85d:L47f85d:{c.instructions+=3;NFSU2_TR(0x47f85d);
u8 U[4];
w4(U+0,u32(0x7ed3dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f862:{NFSU2_TR(0x47f862);
w4(R+4,u32(0x82bebcull));
}
B47f867:{NFSU2_TR(0x47f867);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f86cull));
TAIL_STATIC(0x479130u,479);
}
B47f86c:L47f86c:{c.instructions+=3;NFSU2_TR(0x47f86c);
u8 U[4];
w4(U+0,u32(0x7ed394ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f871:{NFSU2_TR(0x47f871);
w4(R+4,u32(0x82bebcull));
}
B47f876:{NFSU2_TR(0x47f876);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f87bull));
TAIL_STATIC(0x479130u,479);
}
B47f87b:L47f87b:{c.instructions+=3;NFSU2_TR(0x47f87b);
u8 U[4];
w4(U+0,u32(0x7ed3a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f880:{NFSU2_TR(0x47f880);
w4(R+4,u32(0x82bebcull));
}
B47f885:{NFSU2_TR(0x47f885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f88aull));
TAIL_STATIC(0x479130u,479);
}
B47f88a:L47f88a:{c.instructions+=3;NFSU2_TR(0x47f88a);
u8 U[4];
w4(U+0,u32(0x7ed3b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f88f:{NFSU2_TR(0x47f88f);
w4(R+4,u32(0x82bebcull));
}
B47f894:{NFSU2_TR(0x47f894);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f899ull));
TAIL_STATIC(0x479130u,479);
}
B47f899:L47f899:{c.instructions+=3;NFSU2_TR(0x47f899);
u8 U[4];
w4(U+0,u32(0x7ed3c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f89e:{NFSU2_TR(0x47f89e);
w4(R+4,u32(0x82bebcull));
}
B47f8a3:{NFSU2_TR(0x47f8a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f8a8ull));
TAIL_STATIC(0x479130u,479);
}
B47f8a8:L47f8a8:{c.instructions+=3;NFSU2_TR(0x47f8a8);
u8 U[4];
w4(U+0,u32(0x7ed410ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f8ad:{NFSU2_TR(0x47f8ad);
w4(R+4,u32(0x82bebcull));
}
B47f8b2:{NFSU2_TR(0x47f8b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f8b7ull));
TAIL_STATIC(0x479130u,479);
}
B47f8b7:L47f8b7:{c.instructions+=3;NFSU2_TR(0x47f8b7);
u8 U[4];
w4(U+0,u32(0x7ed420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f8bc:{NFSU2_TR(0x47f8bc);
w4(R+4,u32(0x82bebcull));
}
B47f8c1:{NFSU2_TR(0x47f8c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f8c6ull));
TAIL_STATIC(0x479130u,479);
}
B47f8c6:L47f8c6:{c.instructions+=3;NFSU2_TR(0x47f8c6);
u8 U[4];
w4(U+0,u32(0x7ed464ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f8cb:{NFSU2_TR(0x47f8cb);
w4(R+4,u32(0x82bebcull));
}
B47f8d0:{NFSU2_TR(0x47f8d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f8d5ull));
TAIL_STATIC(0x479130u,479);
}
B47f8d5:L47f8d5:{c.instructions+=3;NFSU2_TR(0x47f8d5);
u8 U[4];
w4(U+0,u32(0x7ed474ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f8da:{NFSU2_TR(0x47f8da);
w4(R+4,u32(0x82bebcull));
}
B47f8df:{NFSU2_TR(0x47f8df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f8e4ull));
TAIL_STATIC(0x479130u,479);
}
B47f8e4:L47f8e4:{c.instructions+=3;NFSU2_TR(0x47f8e4);
u8 U[4];
w4(U+0,u32(0x7ed484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f8e9:{NFSU2_TR(0x47f8e9);
w4(R+4,u32(0x82bebcull));
}
B47f8ee:{NFSU2_TR(0x47f8ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f8f3ull));
TAIL_STATIC(0x479130u,479);
}
B47f8f3:L47f8f3:{c.instructions+=3;NFSU2_TR(0x47f8f3);
u8 U[4];
w4(U+0,u32(0x7ed4c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f8f8:{NFSU2_TR(0x47f8f8);
w4(R+4,u32(0x82bebcull));
}
B47f8fd:{NFSU2_TR(0x47f8fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f902ull));
TAIL_STATIC(0x479130u,479);
}
B47f902:L47f902:{c.instructions+=3;NFSU2_TR(0x47f902);
u8 U[4];
w4(U+0,u32(0x7ed4d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f907:{NFSU2_TR(0x47f907);
w4(R+4,u32(0x82bebcull));
}
B47f90c:{NFSU2_TR(0x47f90c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f911ull));
TAIL_STATIC(0x479130u,479);
}
B47f911:L47f911:{c.instructions+=3;NFSU2_TR(0x47f911);
u8 U[4];
w4(U+0,u32(0x7ed4a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f916:{NFSU2_TR(0x47f916);
w4(R+4,u32(0x82bebcull));
}
B47f91b:{NFSU2_TR(0x47f91b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f920ull));
TAIL_STATIC(0x479130u,479);
}
B47f920:L47f920:{c.instructions+=3;NFSU2_TR(0x47f920);
u8 U[4];
w4(U+0,u32(0x7ed568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f925:{NFSU2_TR(0x47f925);
w4(R+4,u32(0x82bebcull));
}
B47f92a:{NFSU2_TR(0x47f92a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f92full));
TAIL_STATIC(0x479130u,479);
}
B47f92f:L47f92f:{c.instructions+=3;NFSU2_TR(0x47f92f);
u8 U[4];
w4(U+0,u32(0x7ed5c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f934:{NFSU2_TR(0x47f934);
w4(R+4,u32(0x82bebcull));
}
B47f939:{NFSU2_TR(0x47f939);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f93eull));
TAIL_STATIC(0x479130u,479);
}
B47f93e:L47f93e:{c.instructions+=3;NFSU2_TR(0x47f93e);
u8 U[4];
w4(U+0,u32(0x7ed63cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f943:{NFSU2_TR(0x47f943);
w4(R+4,u32(0x82bebcull));
}
B47f948:{NFSU2_TR(0x47f948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f94dull));
TAIL_STATIC(0x479130u,479);
}
B47f94d:L47f94d:{c.instructions+=3;NFSU2_TR(0x47f94d);
u8 U[4];
w4(U+0,u32(0x7ed380ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f952:{NFSU2_TR(0x47f952);
w4(R+4,u32(0x82bebcull));
}
B47f957:{NFSU2_TR(0x47f957);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f95cull));
TAIL_STATIC(0x479130u,479);
}
B47f95c:L47f95c:{c.instructions+=3;NFSU2_TR(0x47f95c);
u8 U[4];
w4(U+0,u32(0x7ed4b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f961:{NFSU2_TR(0x47f961);
w4(R+4,u32(0x82bebcull));
}
B47f966:{NFSU2_TR(0x47f966);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f96bull));
TAIL_STATIC(0x479130u,479);
}
B47f96b:L47f96b:{c.instructions+=3;NFSU2_TR(0x47f96b);
u8 U[4];
w4(U+0,u32(0x7ed4e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f970:{NFSU2_TR(0x47f970);
w4(R+4,u32(0x82bebcull));
}
B47f975:{NFSU2_TR(0x47f975);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f97aull));
TAIL_STATIC(0x479130u,479);
}
B47f97a:L47f97a:{c.instructions+=3;NFSU2_TR(0x47f97a);
u8 U[4];
w4(U+0,u32(0x7ed504ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f97f:{NFSU2_TR(0x47f97f);
w4(R+4,u32(0x82bebcull));
}
B47f984:{NFSU2_TR(0x47f984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f989ull));
TAIL_STATIC(0x479130u,479);
}
B47f989:L47f989:{c.instructions+=3;NFSU2_TR(0x47f989);
u8 U[4];
w4(U+0,u32(0x7ed514ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f98e:{NFSU2_TR(0x47f98e);
w4(R+4,u32(0x82bebcull));
}
B47f993:{NFSU2_TR(0x47f993);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f998ull));
TAIL_STATIC(0x479130u,479);
}
B47f998:L47f998:{c.instructions+=3;NFSU2_TR(0x47f998);
u8 U[4];
w4(U+0,u32(0x7ed524ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f99d:{NFSU2_TR(0x47f99d);
w4(R+4,u32(0x82bebcull));
}
B47f9a2:{NFSU2_TR(0x47f9a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f9a7ull));
TAIL_STATIC(0x479130u,479);
}
B47f9a7:L47f9a7:{c.instructions+=3;NFSU2_TR(0x47f9a7);
u8 U[4];
w4(U+0,u32(0x7ed544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f9ac:{NFSU2_TR(0x47f9ac);
w4(R+4,u32(0x82bebcull));
}
B47f9b1:{NFSU2_TR(0x47f9b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f9b6ull));
TAIL_STATIC(0x479130u,479);
}
B47f9b6:L47f9b6:{c.instructions+=3;NFSU2_TR(0x47f9b6);
u8 U[4];
w4(U+0,u32(0x7ed554ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f9bb:{NFSU2_TR(0x47f9bb);
w4(R+4,u32(0x82bebcull));
}
B47f9c0:{NFSU2_TR(0x47f9c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f9c5ull));
TAIL_STATIC(0x479130u,479);
}
B47f9c5:L47f9c5:{c.instructions+=3;NFSU2_TR(0x47f9c5);
u8 U[4];
w4(U+0,u32(0x7ed64cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f9ca:{NFSU2_TR(0x47f9ca);
w4(R+4,u32(0x82bebcull));
}
B47f9cf:{NFSU2_TR(0x47f9cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f9d4ull));
TAIL_STATIC(0x479130u,479);
}
B47f9d4:L47f9d4:{c.instructions+=3;NFSU2_TR(0x47f9d4);
u8 U[4];
w4(U+0,u32(0x7ed578ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f9d9:{NFSU2_TR(0x47f9d9);
w4(R+4,u32(0x82bebcull));
}
B47f9de:{NFSU2_TR(0x47f9de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f9e3ull));
TAIL_STATIC(0x479130u,479);
}
B47f9e3:L47f9e3:{c.instructions+=3;NFSU2_TR(0x47f9e3);
u8 U[4];
w4(U+0,u32(0x7ed588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f9e8:{NFSU2_TR(0x47f9e8);
w4(R+4,u32(0x82bebcull));
}
B47f9ed:{NFSU2_TR(0x47f9ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47f9f2ull));
TAIL_STATIC(0x479130u,479);
}
B47f9f2:L47f9f2:{c.instructions+=3;NFSU2_TR(0x47f9f2);
u8 U[4];
w4(U+0,u32(0x7ed5a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47f9f7:{NFSU2_TR(0x47f9f7);
w4(R+4,u32(0x82bebcull));
}
B47f9fc:{NFSU2_TR(0x47f9fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fa01ull));
TAIL_STATIC(0x479130u,479);
}
B47fa01:L47fa01:{c.instructions+=3;NFSU2_TR(0x47fa01);
u8 U[4];
w4(U+0,u32(0x7ed66cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fa06:{NFSU2_TR(0x47fa06);
w4(R+4,u32(0x82bebcull));
}
B47fa0b:{NFSU2_TR(0x47fa0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fa10ull));
TAIL_STATIC(0x479130u,479);
}
B47fa10:L47fa10:{c.instructions+=3;NFSU2_TR(0x47fa10);
u8 U[4];
w4(U+0,u32(0x7ed2d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fa15:{NFSU2_TR(0x47fa15);
w4(R+4,u32(0x82c6a4ull));
}
B47fa1a:{NFSU2_TR(0x47fa1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fa1full));
TAIL_STATIC(0x479130u,479);
}
B47fa1f:L47fa1f:{c.instructions+=3;NFSU2_TR(0x47fa1f);
u8 U[4];
w4(U+0,u32(0x7ed2c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fa24:{NFSU2_TR(0x47fa24);
w4(R+4,u32(0x82c6a4ull));
}
B47fa29:{NFSU2_TR(0x47fa29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fa2eull));
TAIL_STATIC(0x479130u,479);
}
B47fa2e:L47fa2e:{c.instructions+=3;NFSU2_TR(0x47fa2e);
u8 U[4];
w4(U+0,u32(0x7ed2e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fa33:{NFSU2_TR(0x47fa33);
w4(R+4,u32(0x82c6a4ull));
}
B47fa38:{NFSU2_TR(0x47fa38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fa3dull));
TAIL_STATIC(0x479130u,479);
}
B47fa3d:L47fa3d:{c.instructions+=3;NFSU2_TR(0x47fa3d);
u8 U[4];
w4(U+0,u32(0x7ed2f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fa42:{NFSU2_TR(0x47fa42);
w4(R+4,u32(0x82c6a4ull));
}
B47fa47:{NFSU2_TR(0x47fa47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fa4cull));
TAIL_STATIC(0x479130u,479);
}
B47fa4c:L47fa4c:{c.instructions+=3;NFSU2_TR(0x47fa4c);
u8 U[4];
w4(U+0,u32(0x7ed304ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fa51:{NFSU2_TR(0x47fa51);
w4(R+4,u32(0x82c6a4ull));
}
B47fa56:{NFSU2_TR(0x47fa56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fa5bull));
TAIL_STATIC(0x479130u,479);
}
B47fa5b:L47fa5b:{c.instructions+=3;NFSU2_TR(0x47fa5b);
u8 U[4];
w4(U+0,u32(0x7ed2b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fa60:{NFSU2_TR(0x47fa60);
w4(R+4,u32(0x82c6a4ull));
}
B47fa65:{NFSU2_TR(0x47fa65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fa6aull));
TAIL_STATIC(0x479130u,479);
}
B47fa6a:L47fa6a:{c.instructions+=3;NFSU2_TR(0x47fa6a);
u8 U[4];
w4(U+0,u32(0x7ed2a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fa6f:{NFSU2_TR(0x47fa6f);
w4(R+4,u32(0x82c6a4ull));
}
B47fa74:{NFSU2_TR(0x47fa74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fa79ull));
TAIL_STATIC(0x479130u,479);
}
B47fa79:L47fa79:{c.instructions+=3;NFSU2_TR(0x47fa79);
u8 U[4];
w4(U+0,u32(0x7ed244ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fa7e:{NFSU2_TR(0x47fa7e);
w4(R+4,u32(0x82c6a4ull));
}
B47fa83:{NFSU2_TR(0x47fa83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fa88ull));
TAIL_STATIC(0x479130u,479);
}
B47fa88:L47fa88:{c.instructions+=3;NFSU2_TR(0x47fa88);
u8 U[4];
w4(U+0,u32(0x7ed254ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fa8d:{NFSU2_TR(0x47fa8d);
w4(R+4,u32(0x82c6a4ull));
}
B47fa92:{NFSU2_TR(0x47fa92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fa97ull));
TAIL_STATIC(0x479130u,479);
}
B47fa97:L47fa97:{c.instructions+=3;NFSU2_TR(0x47fa97);
u8 U[4];
w4(U+0,u32(0x7ed314ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fa9c:{NFSU2_TR(0x47fa9c);
w4(R+4,u32(0x82c6a4ull));
}
B47faa1:{NFSU2_TR(0x47faa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47faa6ull));
TAIL_STATIC(0x479130u,479);
}
B47faa6:L47faa6:{c.instructions+=3;NFSU2_TR(0x47faa6);
u8 U[4];
w4(U+0,u32(0x7ed334ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47faab:{NFSU2_TR(0x47faab);
w4(R+4,u32(0x82c6a4ull));
}
B47fab0:{NFSU2_TR(0x47fab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fab5ull));
TAIL_STATIC(0x479130u,479);
}
B47fab5:L47fab5:{c.instructions+=3;NFSU2_TR(0x47fab5);
u8 U[4];
w4(U+0,u32(0x7ed368ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47faba:{NFSU2_TR(0x47faba);
w4(R+4,u32(0x82c6a4ull));
}
B47fabf:{NFSU2_TR(0x47fabf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fac4ull));
TAIL_STATIC(0x479130u,479);
}
B47fac4:L47fac4:{c.instructions+=3;NFSU2_TR(0x47fac4);
u8 U[4];
w4(U+0,u32(0x7ed348ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fac9:{NFSU2_TR(0x47fac9);
w4(R+4,u32(0x82c6a4ull));
}
B47face:{NFSU2_TR(0x47face);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fad3ull));
TAIL_STATIC(0x479130u,479);
}
B47fad3:L47fad3:{c.instructions+=3;NFSU2_TR(0x47fad3);
u8 U[4];
w4(U+0,u32(0x7ed358ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fad8:{NFSU2_TR(0x47fad8);
w4(R+4,u32(0x82c6a4ull));
}
B47fadd:{NFSU2_TR(0x47fadd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fae2ull));
TAIL_STATIC(0x479130u,479);
}
B47fae2:L47fae2:{c.instructions+=3;NFSU2_TR(0x47fae2);
u8 U[4];
w4(U+0,u32(0x7ed494ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fae7:{NFSU2_TR(0x47fae7);
w4(R+4,u32(0x82c6a4ull));
}
B47faec:{NFSU2_TR(0x47faec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47faf1ull));
TAIL_STATIC(0x479130u,479);
}
B47faf1:L47faf1:{c.instructions+=3;NFSU2_TR(0x47faf1);
u8 U[4];
w4(U+0,u32(0x7ed324ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47faf6:{NFSU2_TR(0x47faf6);
w4(R+4,u32(0x82c6a4ull));
}
B47fafb:{NFSU2_TR(0x47fafb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fb00ull));
TAIL_STATIC(0x479130u,479);
}
B47fb00:L47fb00:{c.instructions+=3;NFSU2_TR(0x47fb00);
u8 U[4];
w4(U+0,u32(0x7ed27cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fb05:{NFSU2_TR(0x47fb05);
w4(R+4,u32(0x82c6a4ull));
}
B47fb0a:{NFSU2_TR(0x47fb0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fb0full));
TAIL_STATIC(0x479130u,479);
}
B47fb0f:L47fb0f:{c.instructions+=3;NFSU2_TR(0x47fb0f);
u8 U[4];
w4(U+0,u32(0x7ed28cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fb14:{NFSU2_TR(0x47fb14);
w4(R+4,u32(0x82c6a4ull));
}
B47fb19:{NFSU2_TR(0x47fb19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fb1eull));
TAIL_STATIC(0x479130u,479);
}
B47fb1e:L47fb1e:{c.instructions+=3;NFSU2_TR(0x47fb1e);
u8 U[4];
w4(U+0,u32(0x7ed534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fb23:{NFSU2_TR(0x47fb23);
w4(R+4,u32(0x82c6a4ull));
}
B47fb28:{NFSU2_TR(0x47fb28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fb2dull));
TAIL_STATIC(0x479130u,479);
}
B47fb2d:L47fb2d:{c.instructions+=3;NFSU2_TR(0x47fb2d);
u8 U[4];
w4(U+0,u32(0x7ed3f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fb32:{NFSU2_TR(0x47fb32);
w4(R+4,u32(0x82c6a4ull));
}
B47fb37:{NFSU2_TR(0x47fb37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fb3cull));
TAIL_STATIC(0x479130u,479);
}
B47fb3c:L47fb3c:{c.instructions+=3;NFSU2_TR(0x47fb3c);
u8 U[4];
w4(U+0,u32(0x7ed400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fb41:{NFSU2_TR(0x47fb41);
w4(R+4,u32(0x82c6a4ull));
}
B47fb46:{NFSU2_TR(0x47fb46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fb4bull));
TAIL_STATIC(0x479130u,479);
}
B47fb4b:L47fb4b:{c.instructions+=3;NFSU2_TR(0x47fb4b);
u8 U[4];
w4(U+0,u32(0x7ed598ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fb50:{NFSU2_TR(0x47fb50);
w4(R+4,u32(0x82c6a4ull));
}
B47fb55:{NFSU2_TR(0x47fb55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fb5aull));
TAIL_STATIC(0x479130u,479);
}
B47fb5a:L47fb5a:{c.instructions+=3;NFSU2_TR(0x47fb5a);
u8 U[4];
w4(U+0,u32(0x7ed5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fb5f:{NFSU2_TR(0x47fb5f);
w4(R+4,u32(0x82c6a4ull));
}
B47fb64:{NFSU2_TR(0x47fb64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fb69ull));
TAIL_STATIC(0x479130u,479);
}
B47fb69:L47fb69:{c.instructions+=3;NFSU2_TR(0x47fb69);
u8 U[4];
w4(U+0,u32(0x7ed65cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fb6e:{NFSU2_TR(0x47fb6e);
w4(R+4,u32(0x82c6a4ull));
}
B47fb73:{NFSU2_TR(0x47fb73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fb78ull));
TAIL_STATIC(0x479130u,479);
}
B47fb78:L47fb78:{c.instructions+=1;NFSU2_TR(0x47fb78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47fb80:L47fb80:{c.instructions+=3;NFSU2_TR(0x47fb80);
u8 U[4];
w4(U+0,u32(0x7ecb38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fb85:{NFSU2_TR(0x47fb85);
w4(R+4,u32(0x82bec4ull));
}
B47fb8a:{NFSU2_TR(0x47fb8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fb8full));
TAIL_STATIC(0x479130u,479);
}
B47fb8f:L47fb8f:{c.instructions+=3;NFSU2_TR(0x47fb8f);
u8 U[4];
w4(U+0,u32(0x7ecb58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fb94:{NFSU2_TR(0x47fb94);
w4(R+4,u32(0x82bec4ull));
}
B47fb99:{NFSU2_TR(0x47fb99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fb9eull));
TAIL_STATIC(0x479130u,479);
}
B47fb9e:L47fb9e:{c.instructions+=3;NFSU2_TR(0x47fb9e);
u8 U[4];
w4(U+0,u32(0x7ecb68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fba3:{NFSU2_TR(0x47fba3);
w4(R+4,u32(0x82bec4ull));
}
B47fba8:{NFSU2_TR(0x47fba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fbadull));
TAIL_STATIC(0x479130u,479);
}
B47fbad:L47fbad:{c.instructions+=3;NFSU2_TR(0x47fbad);
u8 U[4];
w4(U+0,u32(0x7ed8c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fbb2:{NFSU2_TR(0x47fbb2);
w4(R+4,u32(0x82bec4ull));
}
B47fbb7:{NFSU2_TR(0x47fbb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fbbcull));
TAIL_STATIC(0x479130u,479);
}
B47fbbc:L47fbbc:{c.instructions+=3;NFSU2_TR(0x47fbbc);
u8 U[4];
w4(U+0,u32(0x7ed8d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fbc1:{NFSU2_TR(0x47fbc1);
w4(R+4,u32(0x82bec4ull));
}
B47fbc6:{NFSU2_TR(0x47fbc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fbcbull));
TAIL_STATIC(0x479130u,479);
}
B47fbcb:L47fbcb:{c.instructions+=3;NFSU2_TR(0x47fbcb);
u8 U[4];
w4(U+0,u32(0x7ed8e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fbd0:{NFSU2_TR(0x47fbd0);
w4(R+4,u32(0x82bec4ull));
}
B47fbd5:{NFSU2_TR(0x47fbd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fbdaull));
TAIL_STATIC(0x479130u,479);
}
B47fbda:L47fbda:{c.instructions+=3;NFSU2_TR(0x47fbda);
u8 U[4];
w4(U+0,u32(0x7ed67cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fbdf:{NFSU2_TR(0x47fbdf);
w4(R+4,u32(0x82bec4ull));
}
B47fbe4:{NFSU2_TR(0x47fbe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fbe9ull));
TAIL_STATIC(0x479130u,479);
}
B47fbe9:L47fbe9:{c.instructions+=3;NFSU2_TR(0x47fbe9);
u8 U[4];
w4(U+0,u32(0x7ed784ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fbee:{NFSU2_TR(0x47fbee);
w4(R+4,u32(0x82bec4ull));
}
B47fbf3:{NFSU2_TR(0x47fbf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fbf8ull));
TAIL_STATIC(0x479130u,479);
}
B47fbf8:L47fbf8:{c.instructions+=3;NFSU2_TR(0x47fbf8);
u8 U[4];
w4(U+0,u32(0x7ed8b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fbfd:{NFSU2_TR(0x47fbfd);
w4(R+4,u32(0x82bec4ull));
}
B47fc02:{NFSU2_TR(0x47fc02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fc07ull));
TAIL_STATIC(0x479130u,479);
}
B47fc07:L47fc07:{c.instructions+=1;NFSU2_TR(0x47fc07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47fc10:L47fc10:{c.instructions+=3;NFSU2_TR(0x47fc10);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47fc15:{NFSU2_TR(0x47fc15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fc16:{NFSU2_TR(0x47fc16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fc1bull));
TAIL_STATIC(0x43e910u,43e);
}
B47fc1b:L47fc1b:{c.instructions+=3;NFSU2_TR(0x47fc1b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47fc1e:{NFSU2_TR(0x47fc1e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x470ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x470ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47fc23:{NFSU2_TR(0x47fc23);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47fc4a;}}
}
B47fc25:L47fc25:{c.instructions+=6;NFSU2_TR(0x47fc25);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47fc2b:{NFSU2_TR(0x47fc2b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47fc2e:{NFSU2_TR(0x47fc2e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47fc34:{NFSU2_TR(0x47fc34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fc35:{NFSU2_TR(0x47fc35);
u8 U[4];
w4(U+0,u32(0x70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fc37:{NFSU2_TR(0x47fc37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fc3cull));
TAIL_STATIC(0x440820u,440);
}
B47fc3c:L47fc3c:{c.instructions+=3;NFSU2_TR(0x47fc3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47fc3f:{NFSU2_TR(0x47fc3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47fc41:{NFSU2_TR(0x47fc41);
if(r1(R+518)){{goto L47fc4a;}}
}
B47fc43:L47fc43:{c.instructions+=2;NFSU2_TR(0x47fc43);
__builtin_memmove((R+4),(R+0),4);
}
B47fc45:{NFSU2_TR(0x47fc45);
TAIL_STATIC(0x4770b0u,477);
}
B47fc4a:L47fc4a:{c.instructions+=2;NFSU2_TR(0x47fc4a);
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
B47fc4c:{NFSU2_TR(0x47fc4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47fc50:L47fc50:{c.instructions+=11;NFSU2_TR(0x47fc50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B47fc53:{NFSU2_TR(0x47fc53);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47fc57:{NFSU2_TR(0x47fc57);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fc58:{NFSU2_TR(0x47fc58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fc59:{NFSU2_TR(0x47fc59);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B47fc5b:{NFSU2_TR(0x47fc5b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B47fc5d:{NFSU2_TR(0x47fc5d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47fc5f:{NFSU2_TR(0x47fc5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fc63:{NFSU2_TR(0x47fc63);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fc67:{NFSU2_TR(0x47fc67);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fc6b:{NFSU2_TR(0x47fc6b);
if(r1(R+518)){{goto L47fe72;}}
}
B47fc71:L47fc71:{c.instructions+=6;NFSU2_TR(0x47fc71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fc72:{NFSU2_TR(0x47fc72);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fc73:{NFSU2_TR(0x47fc73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B47fc75:{NFSU2_TR(0x47fc75);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4d525453ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B47fc7c:{NFSU2_TR(0x47fc7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fc80:{NFSU2_TR(0x47fc80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47fe70;}}
}
B47fc86:L47fc86:{c.instructions+=2;NFSU2_TR(0x47fc86);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47fc89:{NFSU2_TR(0x47fc89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fc8eull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B47fc8e:L47fc8e:{c.instructions+=6;NFSU2_TR(0x47fc8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47fc92:{NFSU2_TR(0x47fc92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47fc95:{NFSU2_TR(0x47fc95);
__builtin_memmove((R+0),(R+4),4);
}
B47fc97:{NFSU2_TR(0x47fc97);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B47fc9c:{NFSU2_TR(0x47fc9c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47fc9e:{NFSU2_TR(0x47fc9e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47fd1e;}}
}
B47fca0:L47fca0:{c.instructions+=6;NFSU2_TR(0x47fca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B47fca3:{NFSU2_TR(0x47fca3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x128ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B47fca9:{NFSU2_TR(0x47fca9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B47fcac:{NFSU2_TR(0x47fcac);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B47fcae:{NFSU2_TR(0x47fcae);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47fcb0:{NFSU2_TR(0x47fcb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47fd1e;}}
}
B47fcb2:L47fcb2:{c.instructions+=3;NFSU2_TR(0x47fcb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47fcb5:{NFSU2_TR(0x47fcb5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47fcb7:{NFSU2_TR(0x47fcb7);
if(r1(R+518)){{goto L47fd1e;}}
}
B47fcb9:L47fcb9:{c.instructions+=2;NFSU2_TR(0x47fcb9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47fcbc:{NFSU2_TR(0x47fcbc);
if(r1(R+518)){{goto L47fd1e;}}
}
B47fcbe:L47fcbe:{c.instructions+=3;NFSU2_TR(0x47fcbe);
w4(R+12,u32(0x1ull));
}
B47fcc3:{NFSU2_TR(0x47fcc3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47fcc5:{NFSU2_TR(0x47fcc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47fcd0;}}
}
B47fcc7:L47fcc7:{c.instructions+=2;NFSU2_TR(0x47fcc7);
__builtin_memmove((R+4),(R+20),4);
}
B47fcc9:{NFSU2_TR(0x47fcc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fcceull));
TAIL_STATIC(0x464f60u,464);
}
B47fcce:L47fcce:{c.instructions+=1;NFSU2_TR(0x47fcce);
{goto L47fd23;}
}
B47fcd0:L47fcd0:{c.instructions+=5;NFSU2_TR(0x47fcd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47fcd7:{NFSU2_TR(0x47fcd7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47fcda:{NFSU2_TR(0x47fcda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47fcdd:{NFSU2_TR(0x47fcdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fce1:{NFSU2_TR(0x47fce1);
if(r1(R+518)){{goto L47fce9;}}
}
B47fce3:L47fce3:{c.instructions+=1;NFSU2_TR(0x47fce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47fce9:L47fce9:{c.instructions+=4;NFSU2_TR(0x47fce9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47fcec:{NFSU2_TR(0x47fcec);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47fcee:{NFSU2_TR(0x47fcee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fcf2:{NFSU2_TR(0x47fcf2);
if(r1(R+518)){{goto L47fd0d;}}
}
B47fcf4:L47fcf4:{c.instructions+=2;NFSU2_TR(0x47fcf4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47fcf7:{NFSU2_TR(0x47fcf7);
if(r1(R+518)){{goto L47fd0d;}}
}
B47fcf9:L47fcf9:{c.instructions+=6;NFSU2_TR(0x47fcf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47fcff:{NFSU2_TR(0x47fcff);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47fd03:{NFSU2_TR(0x47fd03);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fd07:{NFSU2_TR(0x47fd07);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47fd09:{NFSU2_TR(0x47fd09);
__builtin_memmove((R+28),(R+8),4);
}
B47fd0b:{NFSU2_TR(0x47fd0b);
{goto L47fd23;}
}
B47fd0d:L47fd0d:{c.instructions+=6;NFSU2_TR(0x47fd0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47fd10:{NFSU2_TR(0x47fd10);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47fd14:{NFSU2_TR(0x47fd14);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fd18:{NFSU2_TR(0x47fd18);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47fd1a:{NFSU2_TR(0x47fd1a);
__builtin_memmove((R+28),(R+0),4);
}
B47fd1c:{NFSU2_TR(0x47fd1c);
{goto L47fd23;}
}
B47fd1e:L47fd1e:{c.instructions+=1;NFSU2_TR(0x47fd1e);
w4(R+12,u32(0x1ull));
}
B47fd23:L47fd23:{c.instructions+=2;NFSU2_TR(0x47fd23);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47fd26:{NFSU2_TR(0x47fd26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fd2bull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B47fd2b:L47fd2b:{c.instructions+=3;NFSU2_TR(0x47fd2b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47fd2d:{NFSU2_TR(0x47fd2d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47fd2f:{NFSU2_TR(0x47fd2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47fe70;}}
}
B47fd35:L47fd35:{c.instructions+=3;NFSU2_TR(0x47fd35);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47fd38:{NFSU2_TR(0x47fd38);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fd3c:{NFSU2_TR(0x47fd3c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47fe70;}}
}
B47fd42:L47fd42:{c.instructions+=2;NFSU2_TR(0x47fd42);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fd46:{NFSU2_TR(0x47fd46);
{goto L47fd50;}
}
B47fd48:L47fd48:{c.instructions+=2;NFSU2_TR(0x47fd48);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B47fd4c:{NFSU2_TR(0x47fd4c);
__builtin_memmove((R+16),(R+16),4);
}
B47fd50:L47fd50:{c.instructions+=6;NFSU2_TR(0x47fd50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B47fd53:{NFSU2_TR(0x47fd53);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47fd57:{NFSU2_TR(0x47fd57);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B47fd5b:{NFSU2_TR(0x47fd5b);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+4))));
}
B47fd5d:{NFSU2_TR(0x47fd5d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47fd5f:{NFSU2_TR(0x47fd5f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47fe4d;}}
}
B47fd65:L47fd65:{c.instructions+=4;NFSU2_TR(0x47fd65);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47fd69:{NFSU2_TR(0x47fd69);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47fd6b:{NFSU2_TR(0x47fd6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47fd6e:{NFSU2_TR(0x47fd6e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L47fd8d;}}
}
B47fd70:L47fd70:{c.instructions+=2;NFSU2_TR(0x47fd70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B47fd72:{NFSU2_TR(0x47fd72);
if(r1(R+512)){{goto L47fd78;}}
}
B47fd74:L47fd74:{c.instructions+=2;NFSU2_TR(0x47fd74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B47fd76:{NFSU2_TR(0x47fd76);
if(r1(R+512)){{goto L47fd95;}}
}
B47fd78:L47fd78:{c.instructions+=2;NFSU2_TR(0x47fd78);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47fd7a:{NFSU2_TR(0x47fd7a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L47fe19;}}
}
B47fd80:L47fd80:{c.instructions+=2;NFSU2_TR(0x47fd80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B47fd82:{NFSU2_TR(0x47fd82);
if(r1(R+512)){{goto L47fe4d;}}
}
B47fd88:L47fd88:{c.instructions+=1;NFSU2_TR(0x47fd88);
{goto L47fe49;}
}
B47fd8d:L47fd8d:{c.instructions+=2;NFSU2_TR(0x47fd8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B47fd8f:{NFSU2_TR(0x47fd8f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L47fd95;}}
}
B47fd91:L47fd91:{c.instructions+=2;NFSU2_TR(0x47fd91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B47fd93:{NFSU2_TR(0x47fd93);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47fd78u);}goto L47fd78;}}
}
B47fd95:L47fd95:{c.instructions+=6;NFSU2_TR(0x47fd95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47fd98:{NFSU2_TR(0x47fd98);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B47fd9b:{NFSU2_TR(0x47fd9b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47fd9d:{NFSU2_TR(0x47fd9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fda1:{NFSU2_TR(0x47fda1);
__builtin_memmove((R+12),(R+24),4);
}
B47fda3:{NFSU2_TR(0x47fda3);
if(r1(R+518)){{goto L47fe4d;}}
}
B47fda9:L47fda9:{c.instructions+=1;NFSU2_TR(0x47fda9);
__builtin_memmove((R+16),(R+16),4);
}
B47fdb0:L47fdb0:{c.instructions+=2;NFSU2_TR(0x47fdb0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B47fdb3:{NFSU2_TR(0x47fdb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47fdbe;}}
}
B47fdb5:L47fdb5:{c.instructions+=3;NFSU2_TR(0x47fdb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47fdb9:{NFSU2_TR(0x47fdb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B47fdbc:{NFSU2_TR(0x47fdbc);
{goto L47fe13;}
}
B47fdbe:L47fdbe:{c.instructions+=6;NFSU2_TR(0x47fdbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47fdc1:{NFSU2_TR(0x47fdc1);
__builtin_memmove((R+28),(R+0),4);
}
B47fdc3:{NFSU2_TR(0x47fdc3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff000000ull))));
}
B47fdc8:{NFSU2_TR(0x47fdc8);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffffffull))));
}
B47fdce:{NFSU2_TR(0x47fdce);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47fdd0:{NFSU2_TR(0x47fdd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47fe0d;}}
}
B47fdd2:L47fdd2:{c.instructions+=4;NFSU2_TR(0x47fdd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47fdd6:{NFSU2_TR(0x47fdd6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B47fdd9:{NFSU2_TR(0x47fdd9);
__builtin_memmove((R+4),(R+24),4);
}
B47fddb:{NFSU2_TR(0x47fddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fde0ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B47fde0:L47fde0:{c.instructions+=5;NFSU2_TR(0x47fde0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47fde3:{NFSU2_TR(0x47fde3);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B47fde5:{NFSU2_TR(0x47fde5);
__builtin_memmove((R+4),(R+24),4);
}
B47fde7:{NFSU2_TR(0x47fde7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fdea:{NFSU2_TR(0x47fdea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fdefull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B47fdef:L47fdef:{c.instructions+=3;NFSU2_TR(0x47fdef);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47fdf3:{NFSU2_TR(0x47fdf3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fdf4:{NFSU2_TR(0x47fdf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fdf9ull));
TAIL_STATIC(0x464e50u,464);
}
B47fdf9:L47fdf9:{c.instructions+=5;NFSU2_TR(0x47fdf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47fdfd:{NFSU2_TR(0x47fdfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47fe01:{NFSU2_TR(0x47fe01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47fe04:{NFSU2_TR(0x47fe04);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
s4(u32(r4(R+12)),r4(U+0));
}
B47fe0a:{NFSU2_TR(0x47fe0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fe0d:L47fe0d:{c.instructions+=2;NFSU2_TR(0x47fe0d);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B47fe0f:{NFSU2_TR(0x47fe0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47fe13:L47fe13:{c.instructions+=2;NFSU2_TR(0x47fe13);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47fe15:{NFSU2_TR(0x47fe15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47fdb0u);}goto L47fdb0;}}
}
B47fe17:L47fe17:{c.instructions+=1;NFSU2_TR(0x47fe17);
{goto L47fe4d;}
}
B47fe19:L47fe19:{c.instructions+=2;NFSU2_TR(0x47fe19);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B47fe1b:{NFSU2_TR(0x47fe1b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L47fe21;}}
}
B47fe1d:L47fe1d:{c.instructions+=2;NFSU2_TR(0x47fe1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B47fe1f:{NFSU2_TR(0x47fe1f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L47fe4d;}}
}
B47fe21:L47fe21:{c.instructions+=2;NFSU2_TR(0x47fe21);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fe22:{NFSU2_TR(0x47fe22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fe27ull));
TAIL_STATIC(0x465600u,465);
}
B47fe27:L47fe27:{c.instructions+=3;NFSU2_TR(0x47fe27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fe28:{NFSU2_TR(0x47fe28);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fe29:{NFSU2_TR(0x47fe29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fe2eull));
TAIL_STATIC(0x477760u,477);
}
B47fe2e:L47fe2e:{c.instructions+=4;NFSU2_TR(0x47fe2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47fe31:{NFSU2_TR(0x47fe31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B47fe34:{NFSU2_TR(0x47fe34);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47fe36:{NFSU2_TR(0x47fe36);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47fe4d;}}
}
B47fe38:L47fe38:{c.instructions+=3;NFSU2_TR(0x47fe38);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47fe3a:{NFSU2_TR(0x47fe3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47fe3d:{NFSU2_TR(0x47fe3d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L47fe45;}}
}
B47fe3f:L47fe3f:{c.instructions+=2;NFSU2_TR(0x47fe3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B47fe41:{NFSU2_TR(0x47fe41);
if(r1(R+512)){{goto L47fe4d;}}
}
B47fe43:L47fe43:{c.instructions+=1;NFSU2_TR(0x47fe43);
{goto L47fe49;}
}
B47fe45:L47fe45:{c.instructions+=2;NFSU2_TR(0x47fe45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B47fe47:{NFSU2_TR(0x47fe47);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47fe21u);}goto L47fe21;}}
}
B47fe49:L47fe49:{c.instructions+=2;NFSU2_TR(0x47fe49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B47fe4b:{NFSU2_TR(0x47fe4b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47fe21u);}goto L47fe21;}}
}
B47fe4d:L47fe4d:{c.instructions+=10;NFSU2_TR(0x47fe4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47fe51:{NFSU2_TR(0x47fe51);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B47fe55:{NFSU2_TR(0x47fe55);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47fe59:{NFSU2_TR(0x47fe59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47fe5c:{NFSU2_TR(0x47fe5c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B47fe5d:{NFSU2_TR(0x47fe5d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B47fe60:{NFSU2_TR(0x47fe60);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47fe62:{NFSU2_TR(0x47fe62);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fe66:{NFSU2_TR(0x47fe66);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fe6a:{NFSU2_TR(0x47fe6a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47fd48u);}goto L47fd48;}}
}
B47fe70:L47fe70:{c.instructions+=2;NFSU2_TR(0x47fe70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47fe71:{NFSU2_TR(0x47fe71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47fe72:L47fe72:{c.instructions+=4;NFSU2_TR(0x47fe72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47fe73:{NFSU2_TR(0x47fe73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47fe74:{NFSU2_TR(0x47fe74);
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
B47fe77:{NFSU2_TR(0x47fe77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47fe80:L47fe80:{c.instructions+=8;NFSU2_TR(0x47fe80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fe81:{NFSU2_TR(0x47fe81);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fe82:{NFSU2_TR(0x47fe82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fe83:{NFSU2_TR(0x47fe83);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47fe87:{NFSU2_TR(0x47fe87);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47fe89:{NFSU2_TR(0x47fe89);
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
B47fe8b:{NFSU2_TR(0x47fe8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fe8f:{NFSU2_TR(0x47fe8f);
if(r1(R+518)){TAIL_STATIC(0x480029u,480);}
}
B47fe95:L47fe95:{c.instructions+=4;NFSU2_TR(0x47fe95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fe96:{NFSU2_TR(0x47fe96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B47fe98:{NFSU2_TR(0x47fe98);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4d525453ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4d525453ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4d525453ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B47fe9e:{NFSU2_TR(0x47fe9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x480028u,480);}
}
B47fea4:L47fea4:{c.instructions+=3;NFSU2_TR(0x47fea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47fea7:{NFSU2_TR(0x47fea7);
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
B47fea9:{NFSU2_TR(0x47fea9);
if(r1(R+518)){TAIL_STATIC(0x480028u,480);}
}
B47feaf:L47feaf:{c.instructions+=1;NFSU2_TR(0x47feaf);
}
B47feb0:L47feb0:{c.instructions+=3;NFSU2_TR(0x47feb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47feb3:{NFSU2_TR(0x47feb3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47feb6:{NFSU2_TR(0x47feb6);
if(r1(R+518)){{goto L47febd;}}
}
B47feb8:L47feb8:{c.instructions+=2;NFSU2_TR(0x47feb8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47febb:{NFSU2_TR(0x47febb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47fece;}}
}
B47febd:L47febd:{c.instructions+=4;NFSU2_TR(0x47febd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47febf:{NFSU2_TR(0x47febf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fec0:{NFSU2_TR(0x47fec0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47fec1:{NFSU2_TR(0x47fec1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47fec6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47fc50u);}goto L47fc50;}
}
B47fec6:L47fec6:{c.instructions+=3;NFSU2_TR(0x47fec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47fec9:{NFSU2_TR(0x47fec9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47fecc:{NFSU2_TR(0x47fecc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47feb0u);}goto L47feb0;}
}
B47fece:L47fece:{c.instructions+=3;NFSU2_TR(0x47fece);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47fed1:{NFSU2_TR(0x47fed1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47fed4:{NFSU2_TR(0x47fed4);
if(r1(R+518)){{goto L47ff2a;}}
}
B47fed6:L47fed6:{c.instructions+=4;NFSU2_TR(0x47fed6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47fed9:{NFSU2_TR(0x47fed9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47fedc:{NFSU2_TR(0x47fedc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47fedf:{NFSU2_TR(0x47fedf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47fee6;}}
}
B47fee1:L47fee1:{c.instructions+=2;NFSU2_TR(0x47fee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fee4:{NFSU2_TR(0x47fee4);
{goto L47feec;}
}
B47fee6:L47fee6:{c.instructions+=2;NFSU2_TR(0x47fee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47fee9:{NFSU2_TR(0x47fee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47feec:L47feec:{c.instructions+=3;NFSU2_TR(0x47feec);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47feef:{NFSU2_TR(0x47feef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47fef2:{NFSU2_TR(0x47fef2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47fef9;}}
}
B47fef4:L47fef4:{c.instructions+=2;NFSU2_TR(0x47fef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47fef7:{NFSU2_TR(0x47fef7);
{goto L47feff;}
}
B47fef9:L47fef9:{c.instructions+=2;NFSU2_TR(0x47fef9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47fefc:{NFSU2_TR(0x47fefc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47feff:L47feff:{c.instructions+=2;NFSU2_TR(0x47feff);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47ff02:{NFSU2_TR(0x47ff02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ff16;}}
}
B47ff04:L47ff04:{c.instructions+=3;NFSU2_TR(0x47ff04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ff07:{NFSU2_TR(0x47ff07);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47ff09:{NFSU2_TR(0x47ff09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ff13;}}
}
B47ff0b:L47ff0b:{c.instructions+=3;NFSU2_TR(0x47ff0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47ff0e:{NFSU2_TR(0x47ff0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ff11:{NFSU2_TR(0x47ff11);
{goto L47ff16;}
}
B47ff13:L47ff13:{c.instructions+=1;NFSU2_TR(0x47ff13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ff16:L47ff16:{c.instructions+=7;NFSU2_TR(0x47ff16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ff19:{NFSU2_TR(0x47ff19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ff1c:{NFSU2_TR(0x47ff1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ff1f:{NFSU2_TR(0x47ff1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ff22:{NFSU2_TR(0x47ff22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47ff25:{NFSU2_TR(0x47ff25);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47ff28:{NFSU2_TR(0x47ff28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47fed6u);}goto L47fed6;}}
}
B47ff2a:L47ff2a:{c.instructions+=6;NFSU2_TR(0x47ff2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ff2d:{NFSU2_TR(0x47ff2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47ff34:{NFSU2_TR(0x47ff34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ff37:{NFSU2_TR(0x47ff37);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47ff39:{NFSU2_TR(0x47ff39);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47ff3b:{NFSU2_TR(0x47ff3b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47ff52;}}
}
B47ff3d:L47ff3d:{c.instructions+=2;NFSU2_TR(0x47ff3d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B47ff3f:{NFSU2_TR(0x47ff3f);
}
B47ff40:L47ff40:{c.instructions+=7;NFSU2_TR(0x47ff40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47ff43:{NFSU2_TR(0x47ff43);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B47ff47:{NFSU2_TR(0x47ff47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47ff4a:{NFSU2_TR(0x47ff4a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B47ff4b:{NFSU2_TR(0x47ff4b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B47ff4e:{NFSU2_TR(0x47ff4e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47ff50:{NFSU2_TR(0x47ff50);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47ff40u);}goto L47ff40;}}
}
B47ff52:L47ff52:{c.instructions+=6;NFSU2_TR(0x47ff52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ff55:{NFSU2_TR(0x47ff55);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47ff58:{NFSU2_TR(0x47ff58);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ff59:{NFSU2_TR(0x47ff59);
__builtin_memmove((R+4),(R+12),4);
}
B47ff5b:{NFSU2_TR(0x47ff5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ff5f:{NFSU2_TR(0x47ff5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ff64ull));
TAIL_STATIC(0x6f55ddu,6f5);
}
B47ff64:L47ff64:{c.instructions+=7;NFSU2_TR(0x47ff64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B47ff67:{NFSU2_TR(0x47ff67);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47ff6b:{NFSU2_TR(0x47ff6b);
__builtin_memmove((R+28),(R+20),4);
}
B47ff6d:{NFSU2_TR(0x47ff6d);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B47ff6f:{NFSU2_TR(0x47ff6f);
__builtin_memmove((R+4),(R+12),4);
}
B47ff71:{NFSU2_TR(0x47ff71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ff74:{NFSU2_TR(0x47ff74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ff79ull));
TAIL_STATIC(0x6f55e8u,6f5);
}
B47ff79:L47ff79:{c.instructions+=4;NFSU2_TR(0x47ff79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ff7c:{NFSU2_TR(0x47ff7c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47ff7e:{NFSU2_TR(0x47ff7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47ff7f:{NFSU2_TR(0x47ff7f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47ffa7;}}
}
B47ff81:L47ff81:{c.instructions+=2;NFSU2_TR(0x47ff81);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47ff83:{NFSU2_TR(0x47ff83);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47ffa7;}}
}
B47ff85:L47ff85:{c.instructions+=5;NFSU2_TR(0x47ff85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ff88:{NFSU2_TR(0x47ff88);
w4(R+0,u32(0x1ull));
}
B47ff8d:{NFSU2_TR(0x47ff8d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47ff8f:{NFSU2_TR(0x47ff8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ff92:{NFSU2_TR(0x47ff92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ffa7;}}
}
B47ff94:L47ff94:{c.instructions+=5;NFSU2_TR(0x47ff94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ff97:{NFSU2_TR(0x47ff97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47ff9d:{NFSU2_TR(0x47ff9d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ff9e:{NFSU2_TR(0x47ff9e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ff9f:{NFSU2_TR(0x47ff9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ffa4ull));
TAIL_STATIC(0x6f7745u,6f7);
}
B47ffa4:L47ffa4:{c.instructions+=1;NFSU2_TR(0x47ffa4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47ffa7:L47ffa7:{c.instructions+=3;NFSU2_TR(0x47ffa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ffaa:{NFSU2_TR(0x47ffaa);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47ffad:{NFSU2_TR(0x47ffad);
if(r1(R+518)){{goto L47ffd7;}}
}
B47ffaf:L47ffaf:{c.instructions+=1;NFSU2_TR(0x47ffaf);
}
B47ffb0:L47ffb0:{c.instructions+=2;NFSU2_TR(0x47ffb0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B47ffb3:{NFSU2_TR(0x47ffb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ffba;}}
}
B47ffb5:L47ffb5:{c.instructions+=2;NFSU2_TR(0x47ffb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ffb8:{NFSU2_TR(0x47ffb8);
{goto L47ffd2;}
}
B47ffba:L47ffba:{c.instructions+=6;NFSU2_TR(0x47ffba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ffbd:{NFSU2_TR(0x47ffbd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffffull))));
}
B47ffc3:{NFSU2_TR(0x47ffc3);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
s4(u32(r4(R+0)),r4(U+0));
}
B47ffc9:{NFSU2_TR(0x47ffc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ffcc:{NFSU2_TR(0x47ffcc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ffd0:{NFSU2_TR(0x47ffd0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B47ffd2:L47ffd2:{c.instructions+=2;NFSU2_TR(0x47ffd2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47ffd5:{NFSU2_TR(0x47ffd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47ffb0u);}goto L47ffb0;}}
}
B47ffd7:L47ffd7:{c.instructions+=2;NFSU2_TR(0x47ffd7);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B47ffdb:{NFSU2_TR(0x47ffdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x480028u,480);}
}
B47ffdd:L47ffdd:{c.instructions+=2;NFSU2_TR(0x47ffdd);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
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
B47ffe0:{NFSU2_TR(0x47ffe0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47fff7;}}
}
B47ffe2:L47ffe2:{c.instructions+=9;NFSU2_TR(0x47ffe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ffe5:{NFSU2_TR(0x47ffe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ffe8:{NFSU2_TR(0x47ffe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ffeb:{NFSU2_TR(0x47ffeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47fff2:{NFSU2_TR(0x47fff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47fff3:{NFSU2_TR(0x47fff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47fff4:{NFSU2_TR(0x47fff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47fff5:{NFSU2_TR(0x47fff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47fff6:{NFSU2_TR(0x47fff6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47fff7:L47fff7:{c.instructions+=3;NFSU2_TR(0x47fff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47fffa:{NFSU2_TR(0x47fffa);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3full))));
}
B47fffd:{NFSU2_TR(0x47fffd);
w4(R+0,u32(0x40ull));
TAIL_STATIC(0x480002u,480);
}
XIT:NFSU2_TR_EXIT(0x47f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
