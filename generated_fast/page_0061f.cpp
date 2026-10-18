#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_433(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_481(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5a7(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_613(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_615(u8* __restrict R,Cpu& c);
u32 body_61e(u8* __restrict R,Cpu& c);
u32 body_620(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x61f,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x61f,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_61f(u8* __restrict R,Cpu& c);
u32 page_61f(Cpu& c){return body_61f(c.regs.data(),c);}
__attribute__((noinline)) u32 body_61f(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x61f002:goto L61f002;
case 0x61f004:goto L61f004;
case 0x61f008:c.instructions+=5;goto B61f008;
case 0x61f00e:c.instructions+=4;goto B61f00e;
case 0x61f011:c.instructions+=3;goto B61f011;
case 0x61f017:c.instructions+=2;goto B61f017;
case 0x61f01a:c.instructions+=1;goto B61f01a;
case 0x61f01d:goto L61f01d;
case 0x61f01f:c.instructions+=4;goto B61f01f;
case 0x61f025:c.instructions+=3;goto B61f025;
case 0x61f027:c.instructions+=2;goto B61f027;
case 0x61f02a:c.instructions+=1;goto B61f02a;
case 0x61f02c:goto L61f02c;
case 0x61f02e:c.instructions+=10;goto B61f02e;
case 0x61f031:c.instructions+=9;goto B61f031;
case 0x61f034:c.instructions+=8;goto B61f034;
case 0x61f038:c.instructions+=7;goto B61f038;
case 0x61f03c:c.instructions+=6;goto B61f03c;
case 0x61f040:c.instructions+=5;goto B61f040;
case 0x61f041:c.instructions+=4;goto B61f041;
case 0x61f045:c.instructions+=3;goto B61f045;
case 0x61f046:c.instructions+=2;goto B61f046;
case 0x61f04a:c.instructions+=1;goto B61f04a;
case 0x61f04f:goto L61f04f;
case 0x61f053:c.instructions+=9;goto B61f053;
case 0x61f057:c.instructions+=8;goto B61f057;
case 0x61f05b:c.instructions+=7;goto B61f05b;
case 0x61f05e:c.instructions+=6;goto B61f05e;
case 0x61f064:c.instructions+=5;goto B61f064;
case 0x61f068:c.instructions+=4;goto B61f068;
case 0x61f06e:c.instructions+=3;goto B61f06e;
case 0x61f070:c.instructions+=2;goto B61f070;
case 0x61f073:c.instructions+=1;goto B61f073;
case 0x61f075:goto L61f075;
case 0x61f079:c.instructions+=1;goto B61f079;
case 0x61f07b:goto L61f07b;
case 0x61f07f:goto L61f07f;
case 0x61f083:goto L61f083;
case 0x61f089:c.instructions+=2;goto B61f089;
case 0x61f08b:c.instructions+=1;goto B61f08b;
case 0x61f08d:goto L61f08d;
case 0x61f093:c.instructions+=7;goto B61f093;
case 0x61f097:c.instructions+=6;goto B61f097;
case 0x61f09a:c.instructions+=5;goto B61f09a;
case 0x61f09d:c.instructions+=4;goto B61f09d;
case 0x61f0a3:c.instructions+=3;goto B61f0a3;
case 0x61f0a5:c.instructions+=2;goto B61f0a5;
case 0x61f0a8:c.instructions+=1;goto B61f0a8;
case 0x61f0aa:goto L61f0aa;
case 0x61f0b0:c.instructions+=2;goto B61f0b0;
case 0x61f0b2:c.instructions+=1;goto B61f0b2;
case 0x61f0b4:goto L61f0b4;
case 0x61f0ba:c.instructions+=7;goto B61f0ba;
case 0x61f0be:c.instructions+=6;goto B61f0be;
case 0x61f0c1:c.instructions+=5;goto B61f0c1;
case 0x61f0c4:c.instructions+=4;goto B61f0c4;
case 0x61f0ca:c.instructions+=3;goto B61f0ca;
case 0x61f0cc:c.instructions+=2;goto B61f0cc;
case 0x61f0cf:c.instructions+=1;goto B61f0cf;
case 0x61f0d1:goto L61f0d1;
case 0x61f0d5:c.instructions+=5;goto B61f0d5;
case 0x61f0dc:c.instructions+=4;goto B61f0dc;
case 0x61f0de:c.instructions+=3;goto B61f0de;
case 0x61f0e2:c.instructions+=2;goto B61f0e2;
case 0x61f0e8:c.instructions+=1;goto B61f0e8;
case 0x61f0ec:goto L61f0ec;
case 0x61f0f0:c.instructions+=8;goto B61f0f0;
case 0x61f0f6:c.instructions+=7;goto B61f0f6;
case 0x61f0f7:c.instructions+=6;goto B61f0f7;
case 0x61f0fa:c.instructions+=5;goto B61f0fa;
case 0x61f0fd:c.instructions+=4;goto B61f0fd;
case 0x61f0ff:c.instructions+=3;goto B61f0ff;
case 0x61f103:c.instructions+=2;goto B61f103;
case 0x61f107:c.instructions+=1;goto B61f107;
case 0x61f10d:goto L61f10d;
case 0x61f10e:c.instructions+=5;goto B61f10e;
case 0x61f10f:c.instructions+=4;goto B61f10f;
case 0x61f110:c.instructions+=3;goto B61f110;
case 0x61f112:c.instructions+=2;goto B61f112;
case 0x61f113:c.instructions+=1;goto B61f113;
case 0x61f120:goto L61f120;
case 0x61f125:c.instructions+=5;goto B61f125;
case 0x61f128:c.instructions+=4;goto B61f128;
case 0x61f12b:c.instructions+=3;goto B61f12b;
case 0x61f12c:c.instructions+=2;goto B61f12c;
case 0x61f12e:c.instructions+=1;goto B61f12e;
case 0x61f134:goto L61f134;
case 0x61f139:c.instructions+=3;goto B61f139;
case 0x61f13e:c.instructions+=2;goto B61f13e;
case 0x61f142:c.instructions+=1;goto B61f142;
case 0x61f147:goto L61f147;
case 0x61f149:c.instructions+=1;goto B61f149;
case 0x61f14f:goto L61f14f;
case 0x61f155:c.instructions+=3;goto B61f155;
case 0x61f15b:c.instructions+=2;goto B61f15b;
case 0x61f15d:c.instructions+=1;goto B61f15d;
case 0x61f15f:goto L61f15f;
case 0x61f165:goto L61f165;
case 0x61f16b:c.instructions+=4;goto B61f16b;
case 0x61f16f:c.instructions+=3;goto B61f16f;
case 0x61f171:c.instructions+=2;goto B61f171;
case 0x61f177:c.instructions+=1;goto B61f177;
case 0x61f179:goto L61f179;
case 0x61f17f:goto L61f17f;
case 0x61f185:c.instructions+=4;goto B61f185;
case 0x61f189:c.instructions+=3;goto B61f189;
case 0x61f18b:c.instructions+=2;goto B61f18b;
case 0x61f191:c.instructions+=1;goto B61f191;
case 0x61f193:goto L61f193;
case 0x61f199:goto L61f199;
case 0x61f19f:c.instructions+=10;goto B61f19f;
case 0x61f1a3:c.instructions+=9;goto B61f1a3;
case 0x61f1a9:c.instructions+=8;goto B61f1a9;
case 0x61f1ab:c.instructions+=7;goto B61f1ab;
case 0x61f1ad:c.instructions+=6;goto B61f1ad;
case 0x61f1b1:c.instructions+=5;goto B61f1b1;
case 0x61f1b9:c.instructions+=4;goto B61f1b9;
case 0x61f1c1:c.instructions+=3;goto B61f1c1;
case 0x61f1c5:c.instructions+=2;goto B61f1c5;
case 0x61f1c8:c.instructions+=1;goto B61f1c8;
case 0x61f1c9:goto L61f1c9;
case 0x61f1cb:c.instructions+=1;goto B61f1cb;
case 0x61f1d0:goto L61f1d0;
case 0x61f1d5:c.instructions+=2;goto B61f1d5;
case 0x61f1d7:c.instructions+=1;goto B61f1d7;
case 0x61f1dc:goto L61f1dc;
case 0x61f1dd:c.instructions+=2;goto B61f1dd;
case 0x61f1e0:c.instructions+=1;goto B61f1e0;
case 0x61f1e1:goto L61f1e1;
case 0x61f1e5:c.instructions+=5;goto B61f1e5;
case 0x61f1e7:c.instructions+=4;goto B61f1e7;
case 0x61f1ed:c.instructions+=3;goto B61f1ed;
case 0x61f1ef:c.instructions+=2;goto B61f1ef;
case 0x61f1f2:c.instructions+=1;goto B61f1f2;
case 0x61f1f8:goto L61f1f8;
case 0x61f1fe:c.instructions+=3;goto B61f1fe;
case 0x61f1ff:c.instructions+=2;goto B61f1ff;
case 0x61f201:c.instructions+=1;goto B61f201;
case 0x61f206:goto L61f206;
case 0x61f20c:c.instructions+=7;goto B61f20c;
case 0x61f210:c.instructions+=6;goto B61f210;
case 0x61f216:c.instructions+=5;goto B61f216;
case 0x61f21c:c.instructions+=4;goto B61f21c;
case 0x61f222:c.instructions+=3;goto B61f222;
case 0x61f224:c.instructions+=2;goto B61f224;
case 0x61f227:c.instructions+=1;goto B61f227;
case 0x61f229:goto L61f229;
case 0x61f233:goto L61f233;
case 0x61f239:c.instructions+=4;goto B61f239;
case 0x61f23f:c.instructions+=3;goto B61f23f;
case 0x61f244:c.instructions+=2;goto B61f244;
case 0x61f246:c.instructions+=1;goto B61f246;
case 0x61f248:goto L61f248;
case 0x61f252:c.instructions+=5;goto B61f252;
case 0x61f257:c.instructions+=4;goto B61f257;
case 0x61f25d:c.instructions+=3;goto B61f25d;
case 0x61f25e:c.instructions+=2;goto B61f25e;
case 0x61f261:c.instructions+=1;goto B61f261;
case 0x61f262:goto L61f262;
case 0x61f267:c.instructions+=2;goto B61f267;
case 0x61f269:c.instructions+=1;goto B61f269;
case 0x61f26b:goto L61f26b;
case 0x61f271:c.instructions+=2;goto B61f271;
case 0x61f277:c.instructions+=1;goto B61f277;
case 0x61f279:goto L61f279;
case 0x61f280:c.instructions+=1;goto B61f280;
case 0x61f286:goto L61f286;
case 0x61f28c:c.instructions+=4;goto B61f28c;
case 0x61f292:c.instructions+=3;goto B61f292;
case 0x61f294:c.instructions+=2;goto B61f294;
case 0x61f297:c.instructions+=1;goto B61f297;
case 0x61f299:goto L61f299;
case 0x61f29f:c.instructions+=1;goto B61f29f;
case 0x61f2a1:goto L61f2a1;
case 0x61f2a7:goto L61f2a7;
case 0x61f2ad:goto L61f2ad;
case 0x61f2b3:c.instructions+=6;goto B61f2b3;
case 0x61f2b9:c.instructions+=5;goto B61f2b9;
case 0x61f2bf:c.instructions+=4;goto B61f2bf;
case 0x61f2c5:c.instructions+=3;goto B61f2c5;
case 0x61f2c7:c.instructions+=2;goto B61f2c7;
case 0x61f2ca:c.instructions+=1;goto B61f2ca;
case 0x61f2cc:goto L61f2cc;
case 0x61f2d2:c.instructions+=1;goto B61f2d2;
case 0x61f2d4:goto L61f2d4;
case 0x61f2da:goto L61f2da;
case 0x61f2e0:c.instructions+=4;goto B61f2e0;
case 0x61f2e6:c.instructions+=3;goto B61f2e6;
case 0x61f2eb:c.instructions+=2;goto B61f2eb;
case 0x61f2ed:c.instructions+=1;goto B61f2ed;
case 0x61f2ef:goto L61f2ef;
case 0x61f2f5:c.instructions+=8;goto B61f2f5;
case 0x61f2f9:c.instructions+=7;goto B61f2f9;
case 0x61f2fa:c.instructions+=6;goto B61f2fa;
case 0x61f2fe:c.instructions+=5;goto B61f2fe;
case 0x61f2ff:c.instructions+=4;goto B61f2ff;
case 0x61f300:c.instructions+=3;goto B61f300;
case 0x61f308:c.instructions+=2;goto B61f308;
case 0x61f310:c.instructions+=1;goto B61f310;
case 0x61f315:goto L61f315;
case 0x61f319:c.instructions+=4;goto B61f319;
case 0x61f31d:c.instructions+=3;goto B61f31d;
case 0x61f31e:c.instructions+=2;goto B61f31e;
case 0x61f31f:c.instructions+=1;goto B61f31f;
case 0x61f324:goto L61f324;
case 0x61f32a:c.instructions+=2;goto B61f32a;
case 0x61f32d:c.instructions+=1;goto B61f32d;
case 0x61f332:goto L61f332;
case 0x61f335:c.instructions+=1;goto B61f335;
case 0x61f337:goto L61f337;
case 0x61f33d:c.instructions+=2;goto B61f33d;
case 0x61f343:c.instructions+=1;goto B61f343;
case 0x61f349:goto L61f349;
case 0x61f34f:c.instructions+=12;goto B61f34f;
case 0x61f355:c.instructions+=11;goto B61f355;
case 0x61f35b:c.instructions+=10;goto B61f35b;
case 0x61f35f:c.instructions+=9;goto B61f35f;
case 0x61f365:c.instructions+=8;goto B61f365;
case 0x61f367:c.instructions+=7;goto B61f367;
case 0x61f36d:c.instructions+=6;goto B61f36d;
case 0x61f373:c.instructions+=5;goto B61f373;
case 0x61f379:c.instructions+=4;goto B61f379;
case 0x61f37f:c.instructions+=3;goto B61f37f;
case 0x61f381:c.instructions+=2;goto B61f381;
case 0x61f384:c.instructions+=1;goto B61f384;
case 0x61f386:goto L61f386;
case 0x61f38c:c.instructions+=3;goto B61f38c;
case 0x61f38e:c.instructions+=2;goto B61f38e;
case 0x61f391:c.instructions+=1;goto B61f391;
case 0x61f393:goto L61f393;
case 0x61f39d:c.instructions+=1;goto B61f39d;
case 0x61f39f:goto L61f39f;
case 0x61f3a1:goto L61f3a1;
case 0x61f3a7:c.instructions+=4;goto B61f3a7;
case 0x61f3ad:c.instructions+=3;goto B61f3ad;
case 0x61f3af:c.instructions+=2;goto B61f3af;
case 0x61f3b2:c.instructions+=1;goto B61f3b2;
case 0x61f3b4:goto L61f3b4;
case 0x61f3be:goto L61f3be;
case 0x61f3c4:c.instructions+=3;goto B61f3c4;
case 0x61f3c5:c.instructions+=2;goto B61f3c5;
case 0x61f3c7:c.instructions+=1;goto B61f3c7;
case 0x61f3cc:goto L61f3cc;
case 0x61f3ce:c.instructions+=2;goto B61f3ce;
case 0x61f3d8:c.instructions+=1;goto B61f3d8;
case 0x61f3dd:goto L61f3dd;
case 0x61f3e3:c.instructions+=3;goto B61f3e3;
case 0x61f3e9:c.instructions+=2;goto B61f3e9;
case 0x61f3eb:c.instructions+=1;goto B61f3eb;
case 0x61f3ed:goto L61f3ed;
case 0x61f3f3:goto L61f3f3;
case 0x61f3f9:c.instructions+=4;goto B61f3f9;
case 0x61f3fd:c.instructions+=3;goto B61f3fd;
case 0x61f3ff:c.instructions+=2;goto B61f3ff;
case 0x61f405:c.instructions+=1;goto B61f405;
case 0x61f407:goto L61f407;
case 0x61f40d:goto L61f40d;
case 0x61f413:c.instructions+=4;goto B61f413;
case 0x61f417:c.instructions+=3;goto B61f417;
case 0x61f419:c.instructions+=2;goto B61f419;
case 0x61f41f:c.instructions+=1;goto B61f41f;
case 0x61f421:goto L61f421;
case 0x61f427:goto L61f427;
case 0x61f42d:c.instructions+=11;goto B61f42d;
case 0x61f431:c.instructions+=10;goto B61f431;
case 0x61f437:c.instructions+=9;goto B61f437;
case 0x61f439:c.instructions+=8;goto B61f439;
case 0x61f43b:c.instructions+=7;goto B61f43b;
case 0x61f43f:c.instructions+=6;goto B61f43f;
case 0x61f447:c.instructions+=5;goto B61f447;
case 0x61f44f:c.instructions+=4;goto B61f44f;
case 0x61f453:c.instructions+=3;goto B61f453;
case 0x61f456:c.instructions+=2;goto B61f456;
case 0x61f457:c.instructions+=1;goto B61f457;
case 0x61f45c:goto L61f45c;
case 0x61f466:goto L61f466;
case 0x61f467:c.instructions+=2;goto B61f467;
case 0x61f46a:c.instructions+=1;goto B61f46a;
case 0x61f470:goto L61f470;
case 0x61f471:c.instructions+=3;goto B61f471;
case 0x61f473:c.instructions+=2;goto B61f473;
case 0x61f475:c.instructions+=1;goto B61f475;
case 0x61f477:goto L61f477;
case 0x61f479:c.instructions+=4;goto B61f479;
case 0x61f47b:c.instructions+=3;goto B61f47b;
case 0x61f47d:c.instructions+=2;goto B61f47d;
case 0x61f480:c.instructions+=1;goto B61f480;
case 0x61f482:goto L61f482;
case 0x61f485:goto L61f485;
case 0x61f48b:c.instructions+=3;goto B61f48b;
case 0x61f48c:c.instructions+=2;goto B61f48c;
case 0x61f48d:c.instructions+=1;goto B61f48d;
case 0x61f492:goto L61f492;
case 0x61f494:c.instructions+=3;goto B61f494;
case 0x61f497:c.instructions+=2;goto B61f497;
case 0x61f499:c.instructions+=1;goto B61f499;
case 0x61f49b:goto L61f49b;
case 0x61f49c:c.instructions+=1;goto B61f49c;
case 0x61f4a0:goto L61f4a0;
case 0x61f4a2:c.instructions+=3;goto B61f4a2;
case 0x61f4a8:c.instructions+=2;goto B61f4a8;
case 0x61f4aa:c.instructions+=1;goto B61f4aa;
case 0x61f4ac:goto L61f4ac;
case 0x61f4ae:c.instructions+=7;goto B61f4ae;
case 0x61f4af:c.instructions+=6;goto B61f4af;
case 0x61f4b2:c.instructions+=5;goto B61f4b2;
case 0x61f4b4:c.instructions+=4;goto B61f4b4;
case 0x61f4b7:c.instructions+=3;goto B61f4b7;
case 0x61f4c1:c.instructions+=2;goto B61f4c1;
case 0x61f4c2:c.instructions+=1;goto B61f4c2;
case 0x61f4c7:goto L61f4c7;
case 0x61f4d0:goto L61f4d0;
case 0x61f4d1:c.instructions+=3;goto B61f4d1;
case 0x61f4d3:c.instructions+=2;goto B61f4d3;
case 0x61f4d9:c.instructions+=1;goto B61f4d9;
case 0x61f4db:goto L61f4db;
case 0x61f4e1:c.instructions+=2;goto B61f4e1;
case 0x61f4e3:c.instructions+=1;goto B61f4e3;
case 0x61f4e5:goto L61f4e5;
case 0x61f4e7:c.instructions+=5;goto B61f4e7;
case 0x61f4ea:c.instructions+=4;goto B61f4ea;
case 0x61f4ec:c.instructions+=3;goto B61f4ec;
case 0x61f4ef:c.instructions+=2;goto B61f4ef;
case 0x61f4f9:c.instructions+=1;goto B61f4f9;
case 0x61f4fe:goto L61f4fe;
case 0x61f503:c.instructions+=4;goto B61f503;
case 0x61f505:c.instructions+=3;goto B61f505;
case 0x61f50b:c.instructions+=2;goto B61f50b;
case 0x61f50e:c.instructions+=1;goto B61f50e;
case 0x61f514:goto L61f514;
case 0x61f515:c.instructions+=1;goto B61f515;
case 0x61f520:goto L61f520;
case 0x61f521:c.instructions+=9;goto B61f521;
case 0x61f523:c.instructions+=8;goto B61f523;
case 0x61f526:c.instructions+=7;goto B61f526;
case 0x61f529:c.instructions+=6;goto B61f529;
case 0x61f52a:c.instructions+=5;goto B61f52a;
case 0x61f52b:c.instructions+=4;goto B61f52b;
case 0x61f52d:c.instructions+=3;goto B61f52d;
case 0x61f533:c.instructions+=2;goto B61f533;
case 0x61f535:c.instructions+=1;goto B61f535;
case 0x61f537:goto L61f537;
case 0x61f53d:c.instructions+=2;goto B61f53d;
case 0x61f53f:c.instructions+=1;goto B61f53f;
case 0x61f541:goto L61f541;
case 0x61f543:c.instructions+=1;goto B61f543;
case 0x61f548:goto L61f548;
case 0x61f54b:c.instructions+=4;goto B61f54b;
case 0x61f54f:c.instructions+=3;goto B61f54f;
case 0x61f550:c.instructions+=2;goto B61f550;
case 0x61f551:c.instructions+=1;goto B61f551;
case 0x61f556:goto L61f556;
case 0x61f559:c.instructions+=6;goto B61f559;
case 0x61f55a:c.instructions+=5;goto B61f55a;
case 0x61f55e:c.instructions+=4;goto B61f55e;
case 0x61f55f:c.instructions+=3;goto B61f55f;
case 0x61f562:c.instructions+=2;goto B61f562;
case 0x61f563:c.instructions+=1;goto B61f563;
case 0x61f568:goto L61f568;
case 0x61f56b:c.instructions+=1;goto B61f56b;
case 0x61f56d:goto L61f56d;
case 0x61f570:c.instructions+=4;goto B61f570;
case 0x61f571:c.instructions+=3;goto B61f571;
case 0x61f574:c.instructions+=2;goto B61f574;
case 0x61f575:c.instructions+=1;goto B61f575;
case 0x61f57a:goto L61f57a;
case 0x61f57d:goto L61f57d;
case 0x61f583:c.instructions+=2;goto B61f583;
case 0x61f585:c.instructions+=1;goto B61f585;
case 0x61f587:goto L61f587;
case 0x61f589:c.instructions+=1;goto B61f589;
case 0x61f58e:goto L61f58e;
case 0x61f58f:c.instructions+=4;goto B61f58f;
case 0x61f590:c.instructions+=3;goto B61f590;
case 0x61f592:c.instructions+=2;goto B61f592;
case 0x61f593:c.instructions+=1;goto B61f593;
case 0x61f5a0:goto L61f5a0;
case 0x61f5a1:c.instructions+=3;goto B61f5a1;
case 0x61f5a5:c.instructions+=2;goto B61f5a5;
case 0x61f5ab:c.instructions+=1;goto B61f5ab;
case 0x61f5ad:goto L61f5ad;
case 0x61f5b3:c.instructions+=2;goto B61f5b3;
case 0x61f5b5:c.instructions+=1;goto B61f5b5;
case 0x61f5b7:goto L61f5b7;
case 0x61f5b9:c.instructions+=5;goto B61f5b9;
case 0x61f5bc:c.instructions+=4;goto B61f5bc;
case 0x61f5be:c.instructions+=3;goto B61f5be;
case 0x61f5c1:c.instructions+=2;goto B61f5c1;
case 0x61f5cb:c.instructions+=1;goto B61f5cb;
case 0x61f5d0:goto L61f5d0;
case 0x61f5d5:c.instructions+=4;goto B61f5d5;
case 0x61f5d7:c.instructions+=3;goto B61f5d7;
case 0x61f5dd:c.instructions+=2;goto B61f5dd;
case 0x61f5e0:c.instructions+=1;goto B61f5e0;
case 0x61f5e6:goto L61f5e6;
case 0x61f5e7:c.instructions+=1;goto B61f5e7;
case 0x61f5f0:goto L61f5f0;
case 0x61f5f2:c.instructions+=21;goto B61f5f2;
case 0x61f5f7:c.instructions+=20;goto B61f5f7;
case 0x61f5fd:c.instructions+=19;goto B61f5fd;
case 0x61f5fe:c.instructions+=18;goto B61f5fe;
case 0x61f605:c.instructions+=17;goto B61f605;
case 0x61f606:c.instructions+=16;goto B61f606;
case 0x61f607:c.instructions+=15;goto B61f607;
case 0x61f609:c.instructions+=14;goto B61f609;
case 0x61f60e:c.instructions+=13;goto B61f60e;
case 0x61f60f:c.instructions+=12;goto B61f60f;
case 0x61f612:c.instructions+=11;goto B61f612;
case 0x61f613:c.instructions+=10;goto B61f613;
case 0x61f619:c.instructions+=9;goto B61f619;
case 0x61f61f:c.instructions+=8;goto B61f61f;
case 0x61f625:c.instructions+=7;goto B61f625;
case 0x61f62b:c.instructions+=6;goto B61f62b;
case 0x61f62d:c.instructions+=5;goto B61f62d;
case 0x61f62e:c.instructions+=4;goto B61f62e;
case 0x61f632:c.instructions+=3;goto B61f632;
case 0x61f63c:c.instructions+=2;goto B61f63c;
case 0x61f642:c.instructions+=1;goto B61f642;
case 0x61f644:goto L61f644;
case 0x61f647:c.instructions+=4;goto B61f647;
case 0x61f64b:c.instructions+=3;goto B61f64b;
case 0x61f64c:c.instructions+=2;goto B61f64c;
case 0x61f64f:c.instructions+=1;goto B61f64f;
case 0x61f651:goto L61f651;
case 0x61f654:c.instructions+=2;goto B61f654;
case 0x61f656:c.instructions+=1;goto B61f656;
case 0x61f65b:goto L61f65b;
case 0x61f65d:goto L61f65d;
case 0x61f663:c.instructions+=1;goto B61f663;
case 0x61f668:goto L61f668;
case 0x61f66e:c.instructions+=8;goto B61f66e;
case 0x61f674:c.instructions+=7;goto B61f674;
case 0x61f67e:c.instructions+=6;goto B61f67e;
case 0x61f688:c.instructions+=5;goto B61f688;
case 0x61f692:c.instructions+=4;goto B61f692;
case 0x61f698:c.instructions+=3;goto B61f698;
case 0x61f69d:c.instructions+=2;goto B61f69d;
case 0x61f69f:c.instructions+=1;goto B61f69f;
case 0x61f6a4:goto L61f6a4;
case 0x61f6a6:goto L61f6a6;
case 0x61f6aa:c.instructions+=6;goto B61f6aa;
case 0x61f6b0:c.instructions+=5;goto B61f6b0;
case 0x61f6b4:c.instructions+=4;goto B61f6b4;
case 0x61f6b6:c.instructions+=3;goto B61f6b6;
case 0x61f6bb:c.instructions+=2;goto B61f6bb;
case 0x61f6bd:c.instructions+=1;goto B61f6bd;
case 0x61f6c2:goto L61f6c2;
case 0x61f6c4:goto L61f6c4;
case 0x61f6c5:c.instructions+=2;goto B61f6c5;
case 0x61f6c7:c.instructions+=1;goto B61f6c7;
case 0x61f6cc:goto L61f6cc;
case 0x61f6d2:c.instructions+=6;goto B61f6d2;
case 0x61f6d3:c.instructions+=5;goto B61f6d3;
case 0x61f6d5:c.instructions+=4;goto B61f6d5;
case 0x61f6d6:c.instructions+=3;goto B61f6d6;
case 0x61f6d7:c.instructions+=2;goto B61f6d7;
case 0x61f6dd:c.instructions+=1;goto B61f6dd;
case 0x61f6e2:goto L61f6e2;
case 0x61f6e6:c.instructions+=8;goto B61f6e6;
case 0x61f6e7:c.instructions+=7;goto B61f6e7;
case 0x61f6e8:c.instructions+=6;goto B61f6e8;
case 0x61f6e9:c.instructions+=5;goto B61f6e9;
case 0x61f6eb:c.instructions+=4;goto B61f6eb;
case 0x61f6ec:c.instructions+=3;goto B61f6ec;
case 0x61f6f3:c.instructions+=2;goto B61f6f3;
case 0x61f6f6:c.instructions+=1;goto B61f6f6;
case 0x61f700:goto L61f700;
case 0x61f704:c.instructions+=5;goto B61f704;
case 0x61f708:c.instructions+=4;goto B61f708;
case 0x61f709:c.instructions+=3;goto B61f709;
case 0x61f70a:c.instructions+=2;goto B61f70a;
case 0x61f70b:c.instructions+=1;goto B61f70b;
case 0x61f70d:goto L61f70d;
case 0x61f713:c.instructions+=7;goto B61f713;
case 0x61f716:c.instructions+=6;goto B61f716;
case 0x61f719:c.instructions+=5;goto B61f719;
case 0x61f71d:c.instructions+=4;goto B61f71d;
case 0x61f720:c.instructions+=3;goto B61f720;
case 0x61f722:c.instructions+=2;goto B61f722;
case 0x61f724:c.instructions+=1;goto B61f724;
case 0x61f726:goto L61f726;
case 0x61f729:c.instructions+=2;goto B61f729;
case 0x61f72c:c.instructions+=1;goto B61f72c;
case 0x61f730:goto L61f730;
case 0x61f733:c.instructions+=4;goto B61f733;
case 0x61f736:c.instructions+=3;goto B61f736;
case 0x61f73c:c.instructions+=2;goto B61f73c;
case 0x61f73f:c.instructions+=1;goto B61f73f;
case 0x61f741:goto L61f741;
case 0x61f742:c.instructions+=3;goto B61f742;
case 0x61f745:c.instructions+=2;goto B61f745;
case 0x61f747:c.instructions+=1;goto B61f747;
case 0x61f749:goto L61f749;
case 0x61f74a:c.instructions+=4;goto B61f74a;
case 0x61f74b:c.instructions+=3;goto B61f74b;
case 0x61f74d:c.instructions+=2;goto B61f74d;
case 0x61f74e:c.instructions+=1;goto B61f74e;
case 0x61f74f:goto L61f74f;
case 0x61f751:c.instructions+=1;goto B61f751;
case 0x61f753:goto L61f753;
case 0x61f756:c.instructions+=4;goto B61f756;
case 0x61f757:c.instructions+=3;goto B61f757;
case 0x61f758:c.instructions+=2;goto B61f758;
case 0x61f759:c.instructions+=1;goto B61f759;
case 0x61f760:goto L61f760;
case 0x61f761:c.instructions+=8;goto B61f761;
case 0x61f765:c.instructions+=7;goto B61f765;
case 0x61f766:c.instructions+=6;goto B61f766;
case 0x61f767:c.instructions+=5;goto B61f767;
case 0x61f76c:c.instructions+=4;goto B61f76c;
case 0x61f76e:c.instructions+=3;goto B61f76e;
case 0x61f770:c.instructions+=2;goto B61f770;
case 0x61f772:c.instructions+=1;goto B61f772;
case 0x61f777:goto L61f777;
case 0x61f77a:c.instructions+=3;goto B61f77a;
case 0x61f77c:c.instructions+=2;goto B61f77c;
case 0x61f781:c.instructions+=1;goto B61f781;
case 0x61f783:goto L61f783;
case 0x61f787:c.instructions+=4;goto B61f787;
case 0x61f788:c.instructions+=3;goto B61f788;
case 0x61f78a:c.instructions+=2;goto B61f78a;
case 0x61f78c:c.instructions+=1;goto B61f78c;
case 0x61f791:goto L61f791;
case 0x61f794:c.instructions+=2;goto B61f794;
case 0x61f796:c.instructions+=1;goto B61f796;
case 0x61f798:goto L61f798;
case 0x61f79d:c.instructions+=1;goto B61f79d;
case 0x61f7a4:goto L61f7a4;
case 0x61f7a7:c.instructions+=2;goto B61f7a7;
case 0x61f7a9:c.instructions+=1;goto B61f7a9;
case 0x61f7ab:goto L61f7ab;
case 0x61f7ad:c.instructions+=3;goto B61f7ad;
case 0x61f7b0:c.instructions+=2;goto B61f7b0;
case 0x61f7b2:c.instructions+=1;goto B61f7b2;
case 0x61f7b5:goto L61f7b5;
case 0x61f7b7:c.instructions+=2;goto B61f7b7;
case 0x61f7ba:c.instructions+=1;goto B61f7ba;
case 0x61f7bc:goto L61f7bc;
case 0x61f7bf:c.instructions+=7;goto B61f7bf;
case 0x61f7c2:c.instructions+=6;goto B61f7c2;
case 0x61f7c4:c.instructions+=5;goto B61f7c4;
case 0x61f7c7:c.instructions+=4;goto B61f7c7;
case 0x61f7ca:c.instructions+=3;goto B61f7ca;
case 0x61f7cc:c.instructions+=2;goto B61f7cc;
case 0x61f7ce:c.instructions+=1;goto B61f7ce;
case 0x61f7d3:goto L61f7d3;
case 0x61f7d4:c.instructions+=3;goto B61f7d4;
case 0x61f7d5:c.instructions+=2;goto B61f7d5;
case 0x61f7d6:c.instructions+=1;goto B61f7d6;
case 0x61f7d9:goto L61f7d9;
case 0x61f7dc:c.instructions+=2;goto B61f7dc;
case 0x61f7de:c.instructions+=1;goto B61f7de;
case 0x61f7e0:goto L61f7e0;
case 0x61f7e3:c.instructions+=1;goto B61f7e3;
case 0x61f7e7:goto L61f7e7;
case 0x61f7eb:c.instructions+=3;goto B61f7eb;
case 0x61f7ec:c.instructions+=2;goto B61f7ec;
case 0x61f7ee:c.instructions+=1;goto B61f7ee;
case 0x61f7f3:goto L61f7f3;
case 0x61f7f6:c.instructions+=2;goto B61f7f6;
case 0x61f7f8:c.instructions+=1;goto B61f7f8;
case 0x61f7fa:goto L61f7fa;
case 0x61f7ff:c.instructions+=2;goto B61f7ff;
case 0x61f806:c.instructions+=1;goto B61f806;
case 0x61f809:goto L61f809;
case 0x61f80b:c.instructions+=1;goto B61f80b;
case 0x61f810:goto L61f810;
case 0x61f811:c.instructions+=3;goto B61f811;
case 0x61f812:c.instructions+=2;goto B61f812;
case 0x61f813:c.instructions+=1;goto B61f813;
case 0x61f820:goto L61f820;
case 0x61f821:c.instructions+=10;goto B61f821;
case 0x61f822:c.instructions+=9;goto B61f822;
case 0x61f826:c.instructions+=8;goto B61f826;
case 0x61f827:c.instructions+=7;goto B61f827;
case 0x61f828:c.instructions+=6;goto B61f828;
case 0x61f829:c.instructions+=5;goto B61f829;
case 0x61f82d:c.instructions+=4;goto B61f82d;
case 0x61f82f:c.instructions+=3;goto B61f82f;
case 0x61f831:c.instructions+=2;goto B61f831;
case 0x61f836:c.instructions+=1;goto B61f836;
case 0x61f83c:goto L61f83c;
case 0x61f840:c.instructions+=4;goto B61f840;
case 0x61f842:c.instructions+=3;goto B61f842;
case 0x61f847:c.instructions+=2;goto B61f847;
case 0x61f84d:c.instructions+=1;goto B61f84d;
case 0x61f84f:goto L61f84f;
case 0x61f852:c.instructions+=1;goto B61f852;
case 0x61f854:goto L61f854;
case 0x61f856:c.instructions+=1;goto B61f856;
case 0x61f85b:goto L61f85b;
case 0x61f85e:c.instructions+=1;goto B61f85e;
case 0x61f860:goto L61f860;
case 0x61f862:c.instructions+=1;goto B61f862;
case 0x61f864:goto L61f864;
case 0x61f867:c.instructions+=1;goto B61f867;
case 0x61f869:goto L61f869;
case 0x61f86b:c.instructions+=1;goto B61f86b;
case 0x61f870:goto L61f870;
case 0x61f873:c.instructions+=1;goto B61f873;
case 0x61f875:goto L61f875;
case 0x61f877:goto L61f877;
case 0x61f87a:c.instructions+=1;goto B61f87a;
case 0x61f87f:goto L61f87f;
case 0x61f882:c.instructions+=3;goto B61f882;
case 0x61f888:c.instructions+=2;goto B61f888;
case 0x61f88a:c.instructions+=1;goto B61f88a;
case 0x61f890:goto L61f890;
case 0x61f893:c.instructions+=3;goto B61f893;
case 0x61f896:c.instructions+=2;goto B61f896;
case 0x61f899:c.instructions+=1;goto B61f899;
case 0x61f89f:goto L61f89f;
case 0x61f8a4:c.instructions+=1;goto B61f8a4;
case 0x61f8a9:goto L61f8a9;
case 0x61f8ac:c.instructions+=4;goto B61f8ac;
case 0x61f8ae:c.instructions+=3;goto B61f8ae;
case 0x61f8af:c.instructions+=2;goto B61f8af;
case 0x61f8b1:c.instructions+=1;goto B61f8b1;
case 0x61f8b6:goto L61f8b6;
case 0x61f8b8:c.instructions+=1;goto B61f8b8;
case 0x61f8ba:goto L61f8ba;
case 0x61f8bd:c.instructions+=3;goto B61f8bd;
case 0x61f8bf:c.instructions+=2;goto B61f8bf;
case 0x61f8c4:c.instructions+=1;goto B61f8c4;
case 0x61f8c6:goto L61f8c6;
case 0x61f8cb:goto L61f8cb;
case 0x61f8ce:c.instructions+=8;goto B61f8ce;
case 0x61f8d2:c.instructions+=7;goto B61f8d2;
case 0x61f8d8:c.instructions+=6;goto B61f8d8;
case 0x61f8db:c.instructions+=5;goto B61f8db;
case 0x61f8dc:c.instructions+=4;goto B61f8dc;
case 0x61f8df:c.instructions+=3;goto B61f8df;
case 0x61f8e4:c.instructions+=2;goto B61f8e4;
case 0x61f8e6:c.instructions+=1;goto B61f8e6;
case 0x61f8eb:goto L61f8eb;
case 0x61f8ee:c.instructions+=2;goto B61f8ee;
case 0x61f8f0:c.instructions+=1;goto B61f8f0;
case 0x61f8f2:goto L61f8f2;
case 0x61f8f5:c.instructions+=8;goto B61f8f5;
case 0x61f8f9:c.instructions+=7;goto B61f8f9;
case 0x61f8ff:c.instructions+=6;goto B61f8ff;
case 0x61f902:c.instructions+=5;goto B61f902;
case 0x61f903:c.instructions+=4;goto B61f903;
case 0x61f906:c.instructions+=3;goto B61f906;
case 0x61f90b:c.instructions+=2;goto B61f90b;
case 0x61f90d:c.instructions+=1;goto B61f90d;
case 0x61f912:goto L61f912;
case 0x61f915:c.instructions+=2;goto B61f915;
case 0x61f917:c.instructions+=1;goto B61f917;
case 0x61f919:goto L61f919;
case 0x61f91d:c.instructions+=2;goto B61f91d;
case 0x61f922:c.instructions+=1;goto B61f922;
case 0x61f924:goto L61f924;
case 0x61f928:c.instructions+=2;goto B61f928;
case 0x61f92d:c.instructions+=1;goto B61f92d;
case 0x61f92f:goto L61f92f;
case 0x61f931:c.instructions+=1;goto B61f931;
case 0x61f933:goto L61f933;
case 0x61f936:c.instructions+=1;goto B61f936;
case 0x61f93c:goto L61f93c;
case 0x61f93f:c.instructions+=1;goto B61f93f;
case 0x61f945:goto L61f945;
case 0x61f948:c.instructions+=1;goto B61f948;
case 0x61f94a:goto L61f94a;
case 0x61f94e:c.instructions+=4;goto B61f94e;
case 0x61f950:c.instructions+=3;goto B61f950;
case 0x61f955:c.instructions+=2;goto B61f955;
case 0x61f95b:c.instructions+=1;goto B61f95b;
case 0x61f95d:goto L61f95d;
case 0x61f95f:c.instructions+=1;goto B61f95f;
case 0x61f961:goto L61f961;
case 0x61f963:goto L61f963;
case 0x61f968:goto L61f968;
case 0x61f96b:goto L61f96b;
case 0x61f96f:c.instructions+=2;goto B61f96f;
case 0x61f971:c.instructions+=1;goto B61f971;
case 0x61f973:goto L61f973;
case 0x61f979:c.instructions+=2;goto B61f979;
case 0x61f97b:c.instructions+=1;goto B61f97b;
case 0x61f97d:goto L61f97d;
case 0x61f981:c.instructions+=10;goto B61f981;
case 0x61f985:c.instructions+=9;goto B61f985;
case 0x61f986:c.instructions+=8;goto B61f986;
case 0x61f989:c.instructions+=7;goto B61f989;
case 0x61f98f:c.instructions+=6;goto B61f98f;
case 0x61f990:c.instructions+=5;goto B61f990;
case 0x61f991:c.instructions+=4;goto B61f991;
case 0x61f993:c.instructions+=3;goto B61f993;
case 0x61f994:c.instructions+=2;goto B61f994;
case 0x61f995:c.instructions+=1;goto B61f995;
case 0x61f99a:goto L61f99a;
case 0x61f99d:c.instructions+=6;goto B61f99d;
case 0x61f99e:c.instructions+=5;goto B61f99e;
case 0x61f99f:c.instructions+=4;goto B61f99f;
case 0x61f9a0:c.instructions+=3;goto B61f9a0;
case 0x61f9a1:c.instructions+=2;goto B61f9a1;
case 0x61f9a2:c.instructions+=1;goto B61f9a2;
case 0x61f9a3:goto L61f9a3;
case 0x61f9a6:c.instructions+=2;goto B61f9a6;
case 0x61f9a8:c.instructions+=1;goto B61f9a8;
case 0x61f9ad:goto L61f9ad;
case 0x61f9af:goto L61f9af;
case 0x61f9b2:c.instructions+=1;goto B61f9b2;
case 0x61f9b4:goto L61f9b4;
case 0x61f9b6:c.instructions+=1;goto B61f9b6;
case 0x61f9bb:goto L61f9bb;
case 0x61f9be:c.instructions+=1;goto B61f9be;
case 0x61f9c0:goto L61f9c0;
case 0x61f9c2:goto L61f9c2;
case 0x61f9c5:c.instructions+=1;goto B61f9c5;
case 0x61f9ca:goto L61f9ca;
case 0x61f9d0:c.instructions+=2;goto B61f9d0;
case 0x61f9d2:c.instructions+=1;goto B61f9d2;
case 0x61f9d4:goto L61f9d4;
case 0x61f9d8:c.instructions+=10;goto B61f9d8;
case 0x61f9dc:c.instructions+=9;goto B61f9dc;
case 0x61f9df:c.instructions+=8;goto B61f9df;
case 0x61f9e0:c.instructions+=7;goto B61f9e0;
case 0x61f9e6:c.instructions+=6;goto B61f9e6;
case 0x61f9e7:c.instructions+=5;goto B61f9e7;
case 0x61f9e8:c.instructions+=4;goto B61f9e8;
case 0x61f9ea:c.instructions+=3;goto B61f9ea;
case 0x61f9eb:c.instructions+=2;goto B61f9eb;
case 0x61f9ec:c.instructions+=1;goto B61f9ec;
case 0x61f9f1:goto L61f9f1;
case 0x61f9f4:goto L61f9f4;
case 0x61f9f5:c.instructions+=5;goto B61f9f5;
case 0x61f9f6:c.instructions+=4;goto B61f9f6;
case 0x61f9f7:c.instructions+=3;goto B61f9f7;
case 0x61f9f8:c.instructions+=2;goto B61f9f8;
case 0x61f9f9:c.instructions+=1;goto B61f9f9;
case 0x61f9fa:goto L61f9fa;
case 0x61f9fd:c.instructions+=3;goto B61f9fd;
case 0x61fa03:c.instructions+=2;goto B61fa03;
case 0x61fa05:c.instructions+=1;goto B61fa05;
case 0x61fa0b:goto L61fa0b;
case 0x61fa10:c.instructions+=1;goto B61fa10;
case 0x61fa15:goto L61fa15;
case 0x61fa18:c.instructions+=4;goto B61fa18;
case 0x61fa1a:c.instructions+=3;goto B61fa1a;
case 0x61fa1b:c.instructions+=2;goto B61fa1b;
case 0x61fa1d:c.instructions+=1;goto B61fa1d;
case 0x61fa22:goto L61fa22;
case 0x61fa24:c.instructions+=1;goto B61fa24;
case 0x61fa2a:goto L61fa2a;
case 0x61fa2d:c.instructions+=3;goto B61fa2d;
case 0x61fa32:c.instructions+=2;goto B61fa32;
case 0x61fa34:c.instructions+=1;goto B61fa34;
case 0x61fa36:goto L61fa36;
case 0x61fa39:c.instructions+=1;goto B61fa39;
case 0x61fa3b:goto L61fa3b;
case 0x61fa3f:c.instructions+=4;goto B61fa3f;
case 0x61fa41:c.instructions+=3;goto B61fa41;
case 0x61fa46:c.instructions+=2;goto B61fa46;
case 0x61fa4c:c.instructions+=1;goto B61fa4c;
case 0x61fa4e:goto L61fa4e;
case 0x61fa50:c.instructions+=1;goto B61fa50;
case 0x61fa52:goto L61fa52;
case 0x61fa54:c.instructions+=1;goto B61fa54;
case 0x61fa59:goto L61fa59;
case 0x61fa5c:c.instructions+=1;goto B61fa5c;
case 0x61fa5e:goto L61fa5e;
case 0x61fa5f:c.instructions+=1;goto B61fa5f;
case 0x61fa61:goto L61fa61;
case 0x61fa63:c.instructions+=1;goto B61fa63;
case 0x61fa65:goto L61fa65;
case 0x61fa67:c.instructions+=1;goto B61fa67;
case 0x61fa6c:goto L61fa6c;
case 0x61fa6f:c.instructions+=1;goto B61fa6f;
case 0x61fa71:goto L61fa71;
case 0x61fa73:goto L61fa73;
case 0x61fa76:c.instructions+=1;goto B61fa76;
case 0x61fa7b:goto L61fa7b;
case 0x61fa7e:c.instructions+=3;goto B61fa7e;
case 0x61fa84:c.instructions+=2;goto B61fa84;
case 0x61fa86:c.instructions+=1;goto B61fa86;
case 0x61fa8c:goto L61fa8c;
case 0x61fa90:c.instructions+=4;goto B61fa90;
case 0x61fa92:c.instructions+=3;goto B61fa92;
case 0x61fa95:c.instructions+=2;goto B61fa95;
case 0x61fa97:c.instructions+=1;goto B61fa97;
case 0x61fa9d:goto L61fa9d;
case 0x61faa0:c.instructions+=1;goto B61faa0;
case 0x61faa6:goto L61faa6;
case 0x61faa9:c.instructions+=1;goto B61faa9;
case 0x61faae:goto L61faae;
case 0x61fab1:c.instructions+=1;goto B61fab1;
case 0x61fab7:goto L61fab7;
case 0x61fabb:c.instructions+=4;goto B61fabb;
case 0x61fabd:c.instructions+=3;goto B61fabd;
case 0x61fac2:c.instructions+=2;goto B61fac2;
case 0x61fac8:c.instructions+=1;goto B61fac8;
case 0x61faca:goto L61faca;
case 0x61facd:c.instructions+=1;goto B61facd;
case 0x61facf:goto L61facf;
case 0x61fad1:c.instructions+=1;goto B61fad1;
case 0x61fad6:goto L61fad6;
case 0x61fad9:c.instructions+=2;goto B61fad9;
case 0x61fadb:c.instructions+=1;goto B61fadb;
case 0x61fae0:goto L61fae0;
case 0x61fae5:goto L61fae5;
case 0x61fae8:c.instructions+=1;goto B61fae8;
case 0x61faea:goto L61faea;
case 0x61faec:c.instructions+=1;goto B61faec;
case 0x61faf1:goto L61faf1;
case 0x61faf4:c.instructions+=1;goto B61faf4;
case 0x61faf9:goto L61faf9;
case 0x61fafb:c.instructions+=1;goto B61fafb;
case 0x61fb00:goto L61fb00;
case 0x61fb01:c.instructions+=4;goto B61fb01;
case 0x61fb07:c.instructions+=3;goto B61fb07;
case 0x61fb09:c.instructions+=2;goto B61fb09;
case 0x61fb0d:c.instructions+=1;goto B61fb0d;
case 0x61fb13:goto L61fb13;
case 0x61fb17:c.instructions+=4;goto B61fb17;
case 0x61fb1d:c.instructions+=3;goto B61fb1d;
case 0x61fb1f:c.instructions+=2;goto B61fb1f;
case 0x61fb22:c.instructions+=1;goto B61fb22;
case 0x61fb24:goto L61fb24;
case 0x61fb25:c.instructions+=3;goto B61fb25;
case 0x61fb29:c.instructions+=2;goto B61fb29;
case 0x61fb2b:c.instructions+=1;goto B61fb2b;
case 0x61fb2d:goto L61fb2d;
case 0x61fb33:c.instructions+=2;goto B61fb33;
case 0x61fb35:c.instructions+=1;goto B61fb35;
case 0x61fb37:goto L61fb37;
case 0x61fb38:c.instructions+=6;goto B61fb38;
case 0x61fb39:c.instructions+=5;goto B61fb39;
case 0x61fb3d:c.instructions+=4;goto B61fb3d;
case 0x61fb3f:c.instructions+=3;goto B61fb3f;
case 0x61fb42:c.instructions+=2;goto B61fb42;
case 0x61fb43:c.instructions+=1;goto B61fb43;
case 0x61fb45:goto L61fb45;
case 0x61fb48:c.instructions+=1;goto B61fb48;
case 0x61fb4a:goto L61fb4a;
case 0x61fb4d:c.instructions+=1;goto B61fb4d;
case 0x61fb4f:goto L61fb4f;
case 0x61fb52:c.instructions+=1;goto B61fb52;
case 0x61fb54:goto L61fb54;
case 0x61fb56:c.instructions+=3;goto B61fb56;
case 0x61fb59:c.instructions+=2;goto B61fb59;
case 0x61fb5b:c.instructions+=1;goto B61fb5b;
case 0x61fb5d:goto L61fb5d;
case 0x61fb60:c.instructions+=1;goto B61fb60;
case 0x61fb62:goto L61fb62;
case 0x61fb65:c.instructions+=2;goto B61fb65;
case 0x61fb6b:c.instructions+=1;goto B61fb6b;
case 0x61fb6d:goto L61fb6d;
case 0x61fb70:c.instructions+=1;goto B61fb70;
case 0x61fb76:goto L61fb76;
case 0x61fb7a:c.instructions+=3;goto B61fb7a;
case 0x61fb7d:c.instructions+=2;goto B61fb7d;
case 0x61fb7f:c.instructions+=1;goto B61fb7f;
case 0x61fb81:goto L61fb81;
case 0x61fb83:goto L61fb83;
case 0x61fb84:c.instructions+=9;goto B61fb84;
case 0x61fb88:c.instructions+=8;goto B61fb88;
case 0x61fb89:c.instructions+=7;goto B61fb89;
case 0x61fb8a:c.instructions+=6;goto B61fb8a;
case 0x61fb8b:c.instructions+=5;goto B61fb8b;
case 0x61fb8f:c.instructions+=4;goto B61fb8f;
case 0x61fb90:c.instructions+=3;goto B61fb90;
case 0x61fb91:c.instructions+=2;goto B61fb91;
case 0x61fb92:c.instructions+=1;goto B61fb92;
case 0x61fb97:goto L61fb97;
case 0x61fb98:c.instructions+=2;goto B61fb98;
case 0x61fb99:c.instructions+=1;goto B61fb99;
case 0x61fb9a:goto L61fb9a;
case 0x61fb9b:goto L61fb9b;
case 0x61fb9c:c.instructions+=1;goto B61fb9c;
case 0x61fba0:goto L61fba0;
case 0x61fba1:c.instructions+=9;goto B61fba1;
case 0x61fba3:c.instructions+=8;goto B61fba3;
case 0x61fba6:c.instructions+=7;goto B61fba6;
case 0x61fba9:c.instructions+=6;goto B61fba9;
case 0x61fbaa:c.instructions+=5;goto B61fbaa;
case 0x61fbab:c.instructions+=4;goto B61fbab;
case 0x61fbae:c.instructions+=3;goto B61fbae;
case 0x61fbb0:c.instructions+=2;goto B61fbb0;
case 0x61fbb1:c.instructions+=1;goto B61fbb1;
case 0x61fbb3:goto L61fbb3;
case 0x61fbb6:c.instructions+=4;goto B61fbb6;
case 0x61fbb9:c.instructions+=3;goto B61fbb9;
case 0x61fbbb:c.instructions+=2;goto B61fbbb;
case 0x61fbbe:c.instructions+=1;goto B61fbbe;
case 0x61fbc0:goto L61fbc0;
case 0x61fbc3:c.instructions+=1;goto B61fbc3;
case 0x61fbc5:goto L61fbc5;
case 0x61fbc8:c.instructions+=1;goto B61fbc8;
case 0x61fbca:goto L61fbca;
case 0x61fbcd:c.instructions+=1;goto B61fbcd;
case 0x61fbcf:goto L61fbcf;
case 0x61fbd1:c.instructions+=1;goto B61fbd1;
case 0x61fbd4:goto L61fbd4;
case 0x61fbd8:c.instructions+=14;goto B61fbd8;
case 0x61fbd9:c.instructions+=13;goto B61fbd9;
case 0x61fbdf:c.instructions+=12;goto B61fbdf;
case 0x61fbe0:c.instructions+=11;goto B61fbe0;
case 0x61fbe6:c.instructions+=10;goto B61fbe6;
case 0x61fbe7:c.instructions+=9;goto B61fbe7;
case 0x61fbe8:c.instructions+=8;goto B61fbe8;
case 0x61fbe9:c.instructions+=7;goto B61fbe9;
case 0x61fbee:c.instructions+=6;goto B61fbee;
case 0x61fbef:c.instructions+=5;goto B61fbef;
case 0x61fbf1:c.instructions+=4;goto B61fbf1;
case 0x61fbf9:c.instructions+=3;goto B61fbf9;
case 0x61fc01:c.instructions+=2;goto B61fc01;
case 0x61fc09:c.instructions+=1;goto B61fc09;
case 0x61fc0e:goto L61fc0e;
case 0x61fc0f:c.instructions+=5;goto B61fc0f;
case 0x61fc10:c.instructions+=4;goto B61fc10;
case 0x61fc11:c.instructions+=3;goto B61fc11;
case 0x61fc13:c.instructions+=2;goto B61fc13;
case 0x61fc14:c.instructions+=1;goto B61fc14;
case 0x61fc20:goto L61fc20;
case 0x61fc23:c.instructions+=4;goto B61fc23;
case 0x61fc24:c.instructions+=3;goto B61fc24;
case 0x61fc28:c.instructions+=2;goto B61fc28;
case 0x61fc2a:c.instructions+=1;goto B61fc2a;
case 0x61fc30:goto L61fc30;
case 0x61fc35:c.instructions+=1;goto B61fc35;
case 0x61fc3a:goto L61fc3a;
case 0x61fc3d:c.instructions+=4;goto B61fc3d;
case 0x61fc3f:c.instructions+=3;goto B61fc3f;
case 0x61fc40:c.instructions+=2;goto B61fc40;
case 0x61fc42:c.instructions+=1;goto B61fc42;
case 0x61fc47:goto L61fc47;
case 0x61fc49:c.instructions+=1;goto B61fc49;
case 0x61fc4b:goto L61fc4b;
case 0x61fc4e:c.instructions+=1;goto B61fc4e;
case 0x61fc50:goto L61fc50;
case 0x61fc52:goto L61fc52;
case 0x61fc57:c.instructions+=3;goto B61fc57;
case 0x61fc5c:c.instructions+=2;goto B61fc5c;
case 0x61fc60:c.instructions+=1;goto B61fc60;
case 0x61fc65:goto L61fc65;
case 0x61fc68:c.instructions+=4;goto B61fc68;
case 0x61fc6a:c.instructions+=3;goto B61fc6a;
case 0x61fc6b:c.instructions+=2;goto B61fc6b;
case 0x61fc6d:c.instructions+=1;goto B61fc6d;
case 0x61fc72:goto L61fc72;
case 0x61fc74:c.instructions+=1;goto B61fc74;
case 0x61fc76:goto L61fc76;
case 0x61fc79:c.instructions+=1;goto B61fc79;
case 0x61fc7b:goto L61fc7b;
case 0x61fc7d:goto L61fc7d;
case 0x61fc82:c.instructions+=3;goto B61fc82;
case 0x61fc87:c.instructions+=2;goto B61fc87;
case 0x61fc8b:c.instructions+=1;goto B61fc8b;
case 0x61fc90:goto L61fc90;
case 0x61fc93:c.instructions+=4;goto B61fc93;
case 0x61fc95:c.instructions+=3;goto B61fc95;
case 0x61fc96:c.instructions+=2;goto B61fc96;
case 0x61fc98:c.instructions+=1;goto B61fc98;
case 0x61fc9d:goto L61fc9d;
case 0x61fc9f:c.instructions+=1;goto B61fc9f;
case 0x61fca1:goto L61fca1;
case 0x61fca4:c.instructions+=1;goto B61fca4;
case 0x61fca6:goto L61fca6;
case 0x61fca8:goto L61fca8;
case 0x61fcad:c.instructions+=3;goto B61fcad;
case 0x61fcb2:c.instructions+=2;goto B61fcb2;
case 0x61fcb6:c.instructions+=1;goto B61fcb6;
case 0x61fcbb:goto L61fcbb;
case 0x61fcbe:c.instructions+=4;goto B61fcbe;
case 0x61fcc0:c.instructions+=3;goto B61fcc0;
case 0x61fcc1:c.instructions+=2;goto B61fcc1;
case 0x61fcc3:c.instructions+=1;goto B61fcc3;
case 0x61fcc8:goto L61fcc8;
case 0x61fcca:c.instructions+=1;goto B61fcca;
case 0x61fccc:goto L61fccc;
case 0x61fccf:c.instructions+=1;goto B61fccf;
case 0x61fcd1:goto L61fcd1;
case 0x61fcd3:goto L61fcd3;
case 0x61fcd8:c.instructions+=3;goto B61fcd8;
case 0x61fcdd:c.instructions+=2;goto B61fcdd;
case 0x61fce1:c.instructions+=1;goto B61fce1;
case 0x61fce6:goto L61fce6;
case 0x61fce9:c.instructions+=4;goto B61fce9;
case 0x61fceb:c.instructions+=3;goto B61fceb;
case 0x61fcec:c.instructions+=2;goto B61fcec;
case 0x61fcee:c.instructions+=1;goto B61fcee;
case 0x61fcf3:goto L61fcf3;
case 0x61fcf5:c.instructions+=1;goto B61fcf5;
case 0x61fcf7:goto L61fcf7;
case 0x61fcfa:c.instructions+=1;goto B61fcfa;
case 0x61fcfc:goto L61fcfc;
case 0x61fcfe:goto L61fcfe;
case 0x61fd03:c.instructions+=3;goto B61fd03;
case 0x61fd08:c.instructions+=2;goto B61fd08;
case 0x61fd0c:c.instructions+=1;goto B61fd0c;
case 0x61fd11:goto L61fd11;
case 0x61fd14:c.instructions+=4;goto B61fd14;
case 0x61fd16:c.instructions+=3;goto B61fd16;
case 0x61fd17:c.instructions+=2;goto B61fd17;
case 0x61fd19:c.instructions+=1;goto B61fd19;
case 0x61fd1e:goto L61fd1e;
case 0x61fd20:c.instructions+=1;goto B61fd20;
case 0x61fd22:goto L61fd22;
case 0x61fd25:c.instructions+=1;goto B61fd25;
case 0x61fd27:goto L61fd27;
case 0x61fd29:goto L61fd29;
case 0x61fd2a:c.instructions+=4;goto B61fd2a;
case 0x61fd2f:c.instructions+=3;goto B61fd2f;
case 0x61fd34:c.instructions+=2;goto B61fd34;
case 0x61fd38:c.instructions+=1;goto B61fd38;
case 0x61fd3d:goto L61fd3d;
case 0x61fd40:c.instructions+=4;goto B61fd40;
case 0x61fd42:c.instructions+=3;goto B61fd42;
case 0x61fd43:c.instructions+=2;goto B61fd43;
case 0x61fd45:c.instructions+=1;goto B61fd45;
case 0x61fd4a:goto L61fd4a;
case 0x61fd4c:c.instructions+=1;goto B61fd4c;
case 0x61fd4e:goto L61fd4e;
case 0x61fd51:c.instructions+=1;goto B61fd51;
case 0x61fd53:goto L61fd53;
case 0x61fd55:goto L61fd55;
case 0x61fd5a:c.instructions+=2;goto B61fd5a;
case 0x61fd60:c.instructions+=1;goto B61fd60;
case 0x61fd65:goto L61fd65;
case 0x61fd68:c.instructions+=4;goto B61fd68;
case 0x61fd6a:c.instructions+=3;goto B61fd6a;
case 0x61fd6b:c.instructions+=2;goto B61fd6b;
case 0x61fd6d:c.instructions+=1;goto B61fd6d;
case 0x61fd72:goto L61fd72;
case 0x61fd74:c.instructions+=1;goto B61fd74;
case 0x61fd76:goto L61fd76;
case 0x61fd79:c.instructions+=2;goto B61fd79;
case 0x61fd7d:c.instructions+=1;goto B61fd7d;
case 0x61fd7f:goto L61fd7f;
case 0x61fd87:goto L61fd87;
case 0x61fd8b:c.instructions+=26;goto B61fd8b;
case 0x61fd8f:c.instructions+=25;goto B61fd8f;
case 0x61fd93:c.instructions+=24;goto B61fd93;
case 0x61fd96:c.instructions+=23;goto B61fd96;
case 0x61fd9a:c.instructions+=22;goto B61fd9a;
case 0x61fd9d:c.instructions+=21;goto B61fd9d;
case 0x61fda1:c.instructions+=20;goto B61fda1;
case 0x61fda4:c.instructions+=19;goto B61fda4;
case 0x61fda8:c.instructions+=18;goto B61fda8;
case 0x61fdaa:c.instructions+=17;goto B61fdaa;
case 0x61fdae:c.instructions+=16;goto B61fdae;
case 0x61fdb0:c.instructions+=15;goto B61fdb0;
case 0x61fdb4:c.instructions+=14;goto B61fdb4;
case 0x61fdb6:c.instructions+=13;goto B61fdb6;
case 0x61fdba:c.instructions+=12;goto B61fdba;
case 0x61fdbc:c.instructions+=11;goto B61fdbc;
case 0x61fdc0:c.instructions+=10;goto B61fdc0;
case 0x61fdc3:c.instructions+=9;goto B61fdc3;
case 0x61fdc7:c.instructions+=8;goto B61fdc7;
case 0x61fdcb:c.instructions+=7;goto B61fdcb;
case 0x61fdce:c.instructions+=6;goto B61fdce;
case 0x61fdd0:c.instructions+=5;goto B61fdd0;
case 0x61fdd1:c.instructions+=4;goto B61fdd1;
case 0x61fdd4:c.instructions+=3;goto B61fdd4;
case 0x61fdd5:c.instructions+=2;goto B61fdd5;
case 0x61fdd8:c.instructions+=1;goto B61fdd8;
case 0x61fddb:goto L61fddb;
case 0x61fddf:c.instructions+=12;goto B61fddf;
case 0x61fde2:c.instructions+=11;goto B61fde2;
case 0x61fde6:c.instructions+=10;goto B61fde6;
case 0x61fdea:c.instructions+=9;goto B61fdea;
case 0x61fdee:c.instructions+=8;goto B61fdee;
case 0x61fdf2:c.instructions+=7;goto B61fdf2;
case 0x61fdf5:c.instructions+=6;goto B61fdf5;
case 0x61fdf9:c.instructions+=5;goto B61fdf9;
case 0x61fdfd:c.instructions+=4;goto B61fdfd;
case 0x61fe01:c.instructions+=3;goto B61fe01;
case 0x61fe02:c.instructions+=2;goto B61fe02;
case 0x61fe05:c.instructions+=1;goto B61fe05;
case 0x61fe10:goto L61fe10;
case 0x61fe13:c.instructions+=8;goto B61fe13;
case 0x61fe15:c.instructions+=7;goto B61fe15;
case 0x61fe18:c.instructions+=6;goto B61fe18;
case 0x61fe19:c.instructions+=5;goto B61fe19;
case 0x61fe1b:c.instructions+=4;goto B61fe1b;
case 0x61fe1d:c.instructions+=3;goto B61fe1d;
case 0x61fe1e:c.instructions+=2;goto B61fe1e;
case 0x61fe22:c.instructions+=1;goto B61fe22;
case 0x61fe24:goto L61fe24;
case 0x61fe29:c.instructions+=2;goto B61fe29;
case 0x61fe2b:c.instructions+=1;goto B61fe2b;
case 0x61fe31:goto L61fe31;
case 0x61fe33:goto L61fe33;
case 0x61fe34:c.instructions+=3;goto B61fe34;
case 0x61fe35:c.instructions+=2;goto B61fe35;
case 0x61fe38:c.instructions+=1;goto B61fe38;
case 0x61fe39:goto L61fe39;
case 0x61fe3c:c.instructions+=2;goto B61fe3c;
case 0x61fe3e:c.instructions+=1;goto B61fe3e;
case 0x61fe40:goto L61fe40;
case 0x61fe46:c.instructions+=2;goto B61fe46;
case 0x61fe4a:c.instructions+=1;goto B61fe4a;
case 0x61fe4c:goto L61fe4c;
case 0x61fe50:c.instructions+=1;goto B61fe50;
case 0x61fe52:goto L61fe52;
case 0x61fe54:c.instructions+=1;goto B61fe54;
case 0x61fe56:goto L61fe56;
case 0x61fe5c:c.instructions+=1;goto B61fe5c;
case 0x61fe5e:goto L61fe5e;
case 0x61fe60:goto L61fe60;
case 0x61fe62:c.instructions+=3;goto B61fe62;
case 0x61fe63:c.instructions+=2;goto B61fe63;
case 0x61fe64:c.instructions+=1;goto B61fe64;
case 0x61fe66:goto L61fe66;
case 0x61fe69:c.instructions+=5;goto B61fe69;
case 0x61fe6c:c.instructions+=4;goto B61fe6c;
case 0x61fe6f:c.instructions+=3;goto B61fe6f;
case 0x61fe73:c.instructions+=2;goto B61fe73;
case 0x61fe75:c.instructions+=1;goto B61fe75;
case 0x61fe77:goto L61fe77;
case 0x61fe7b:goto L61fe7b;
case 0x61fe7d:c.instructions+=1;goto B61fe7d;
case 0x61fe7f:goto L61fe7f;
case 0x61fe82:c.instructions+=4;goto B61fe82;
case 0x61fe85:c.instructions+=3;goto B61fe85;
case 0x61fe88:c.instructions+=2;goto B61fe88;
case 0x61fe8c:c.instructions+=1;goto B61fe8c;
case 0x61fe8e:goto L61fe8e;
case 0x61fe92:goto L61fe92;
case 0x61fe97:c.instructions+=5;goto B61fe97;
case 0x61fe9b:c.instructions+=4;goto B61fe9b;
case 0x61fea0:c.instructions+=3;goto B61fea0;
case 0x61fea6:c.instructions+=2;goto B61fea6;
case 0x61feac:c.instructions+=1;goto B61feac;
case 0x61feb0:goto L61feb0;
case 0x61feb3:c.instructions+=9;goto B61feb3;
case 0x61feb7:c.instructions+=8;goto B61feb7;
case 0x61feb9:c.instructions+=7;goto B61feb9;
case 0x61febb:c.instructions+=6;goto B61febb;
case 0x61febd:c.instructions+=5;goto B61febd;
case 0x61fec0:c.instructions+=4;goto B61fec0;
case 0x61fec3:c.instructions+=3;goto B61fec3;
case 0x61fec5:c.instructions+=2;goto B61fec5;
case 0x61fec7:c.instructions+=1;goto B61fec7;
case 0x61fec9:goto L61fec9;
case 0x61fece:c.instructions+=1;goto B61fece;
case 0x61fed3:goto L61fed3;
case 0x61fed7:c.instructions+=4;goto B61fed7;
case 0x61feda:c.instructions+=3;goto B61feda;
case 0x61fedc:c.instructions+=2;goto B61fedc;
case 0x61fedd:c.instructions+=1;goto B61fedd;
case 0x61fee2:goto L61fee2;
case 0x61fee4:c.instructions+=1;goto B61fee4;
case 0x61fee6:goto L61fee6;
case 0x61fee9:c.instructions+=1;goto B61fee9;
case 0x61feeb:goto L61feeb;
case 0x61fef1:goto L61fef1;
case 0x61fef5:c.instructions+=3;goto B61fef5;
case 0x61fef8:c.instructions+=2;goto B61fef8;
case 0x61fefc:c.instructions+=1;goto B61fefc;
case 0x61feff:goto L61feff;
case 0x61ff05:c.instructions+=2;goto B61ff05;
case 0x61ff09:c.instructions+=1;goto B61ff09;
case 0x61ff0b:goto L61ff0b;
case 0x61ff0f:goto L61ff0f;
case 0x61ff11:c.instructions+=1;goto B61ff11;
case 0x61ff13:goto L61ff13;
case 0x61ff16:c.instructions+=1;goto B61ff16;
case 0x61ff18:goto L61ff18;
case 0x61ff1c:goto L61ff1c;
case 0x61ff1f:c.instructions+=5;goto B61ff1f;
case 0x61ff22:c.instructions+=4;goto B61ff22;
case 0x61ff25:c.instructions+=3;goto B61ff25;
case 0x61ff28:c.instructions+=2;goto B61ff28;
case 0x61ff2e:c.instructions+=1;goto B61ff2e;
case 0x61ff30:goto L61ff30;
case 0x61ff31:c.instructions+=5;goto B61ff31;
case 0x61ff32:c.instructions+=4;goto B61ff32;
case 0x61ff33:c.instructions+=3;goto B61ff33;
case 0x61ff34:c.instructions+=2;goto B61ff34;
case 0x61ff37:c.instructions+=1;goto B61ff37;
case 0x61ff40:goto L61ff40;
case 0x61ff46:c.instructions+=8;goto B61ff46;
case 0x61ff47:c.instructions+=7;goto B61ff47;
case 0x61ff48:c.instructions+=6;goto B61ff48;
case 0x61ff49:c.instructions+=5;goto B61ff49;
case 0x61ff4a:c.instructions+=4;goto B61ff4a;
case 0x61ff4c:c.instructions+=3;goto B61ff4c;
case 0x61ff51:c.instructions+=2;goto B61ff51;
case 0x61ff55:c.instructions+=1;goto B61ff55;
case 0x61ff5a:goto L61ff5a;
case 0x61ff5d:c.instructions+=9;goto B61ff5d;
case 0x61ff5f:c.instructions+=8;goto B61ff5f;
case 0x61ff64:c.instructions+=7;goto B61ff64;
case 0x61ff6a:c.instructions+=6;goto B61ff6a;
case 0x61ff6d:c.instructions+=5;goto B61ff6d;
case 0x61ff70:c.instructions+=4;goto B61ff70;
case 0x61ff73:c.instructions+=3;goto B61ff73;
case 0x61ff76:c.instructions+=2;goto B61ff76;
case 0x61ff78:c.instructions+=1;goto B61ff78;
case 0x61ff7a:goto L61ff7a;
case 0x61ff7c:c.instructions+=1;goto B61ff7c;
case 0x61ff7f:goto L61ff7f;
case 0x61ff81:c.instructions+=3;goto B61ff81;
case 0x61ff84:c.instructions+=2;goto B61ff84;
case 0x61ff87:c.instructions+=1;goto B61ff87;
case 0x61ff89:goto L61ff89;
case 0x61ff8c:c.instructions+=1;goto B61ff8c;
case 0x61ff8f:goto L61ff8f;
case 0x61ff92:c.instructions+=3;goto B61ff92;
case 0x61ff95:c.instructions+=2;goto B61ff95;
case 0x61ff98:c.instructions+=1;goto B61ff98;
case 0x61ff9a:goto L61ff9a;
case 0x61ff9d:c.instructions+=1;goto B61ff9d;
case 0x61ffa0:goto L61ffa0;
case 0x61ffa3:c.instructions+=3;goto B61ffa3;
case 0x61ffa6:c.instructions+=2;goto B61ffa6;
case 0x61ffa9:c.instructions+=1;goto B61ffa9;
case 0x61ffab:goto L61ffab;
case 0x61ffae:c.instructions+=1;goto B61ffae;
case 0x61ffb1:goto L61ffb1;
case 0x61ffb4:c.instructions+=3;goto B61ffb4;
case 0x61ffb7:c.instructions+=2;goto B61ffb7;
case 0x61ffba:c.instructions+=1;goto B61ffba;
case 0x61ffbc:goto L61ffbc;
case 0x61ffbf:c.instructions+=1;goto B61ffbf;
case 0x61ffc2:goto L61ffc2;
case 0x61ffc5:c.instructions+=3;goto B61ffc5;
case 0x61ffc8:c.instructions+=2;goto B61ffc8;
case 0x61ffcb:c.instructions+=1;goto B61ffcb;
case 0x61ffcd:goto L61ffcd;
case 0x61ffd0:c.instructions+=1;goto B61ffd0;
case 0x61ffd3:goto L61ffd3;
case 0x61ffd6:c.instructions+=3;goto B61ffd6;
case 0x61ffd9:c.instructions+=2;goto B61ffd9;
case 0x61ffdc:c.instructions+=1;goto B61ffdc;
case 0x61ffde:goto L61ffde;
case 0x61ffe1:c.instructions+=1;goto B61ffe1;
case 0x61ffe4:goto L61ffe4;
case 0x61ffe7:c.instructions+=3;goto B61ffe7;
case 0x61ffea:c.instructions+=2;goto B61ffea;
case 0x61ffed:c.instructions+=1;goto B61ffed;
case 0x61ffef:goto L61ffef;
case 0x61fff2:c.instructions+=1;goto B61fff2;
case 0x61fff5:goto L61fff5;
case 0x61fff8:c.instructions+=2;goto B61fff8;
case 0x61fffb:c.instructions+=1;goto B61fffb;
default:missing_instruction(c.pc);}
B61f002:L61f002:{c.instructions+=1;NFSU2_TR(0x61f002);
if(r1(R+514)){{goto L61f01d;}}
}
B61f004:L61f004:{c.instructions+=6;NFSU2_TR(0x61f004);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f008:{NFSU2_TR(0x61f008);
{u32 ea_=u32(u32(8403376u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61f00e:{NFSU2_TR(0x61f00e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61f011:{NFSU2_TR(0x61f011);
{u32 ea_=u32(u32(8403376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f017:{NFSU2_TR(0x61f017);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61f01a:{NFSU2_TR(0x61f01a);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61f01d:L61f01d:{c.instructions+=5;NFSU2_TR(0x61f01d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f01f:{NFSU2_TR(0x61f01f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61f025:{NFSU2_TR(0x61f025);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61f027:{NFSU2_TR(0x61f027);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61f02a:{NFSU2_TR(0x61f02a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f07b;}}
}
B61f02c:L61f02c:{c.instructions+=11;NFSU2_TR(0x61f02c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61f02e:{NFSU2_TR(0x61f02e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f031:{NFSU2_TR(0x61f031);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f034:{NFSU2_TR(0x61f034);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f038:{NFSU2_TR(0x61f038);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61f03c:{NFSU2_TR(0x61f03c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f040:{NFSU2_TR(0x61f040);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f041:{NFSU2_TR(0x61f041);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61f045:{NFSU2_TR(0x61f045);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f046:{NFSU2_TR(0x61f046);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f04a:{NFSU2_TR(0x61f04a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f04full));
TAIL_STATIC(0x43cf10u,43c);
}
B61f04f:L61f04f:{c.instructions+=10;NFSU2_TR(0x61f04f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f053:{NFSU2_TR(0x61f053);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61f057:{NFSU2_TR(0x61f057);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61f05b:{NFSU2_TR(0x61f05b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61f05e:{NFSU2_TR(0x61f05e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61f064:{NFSU2_TR(0x61f064);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61f068:{NFSU2_TR(0x61f068);
{u32 ea_=u32(u32(8403568u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61f06e:{NFSU2_TR(0x61f06e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61f070:{NFSU2_TR(0x61f070);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61f073:{NFSU2_TR(0x61f073);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f07f;}}
}
B61f075:L61f075:{c.instructions+=2;NFSU2_TR(0x61f075);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x27ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61f079:{NFSU2_TR(0x61f079);
{goto L61f083;}
}
B61f07b:L61f07b:{c.instructions+=1;NFSU2_TR(0x61f07b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61f07f:L61f07f:{c.instructions+=1;NFSU2_TR(0x61f07f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x27ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61f083:L61f083:{c.instructions+=3;NFSU2_TR(0x61f083);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f089:{NFSU2_TR(0x61f089);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61f08b:{NFSU2_TR(0x61f08b);
if(r1(R+518)){{goto L61f0aa;}}
}
B61f08d:L61f08d:{c.instructions+=8;NFSU2_TR(0x61f08d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f093:{NFSU2_TR(0x61f093);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B61f097:{NFSU2_TR(0x61f097);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61f09a:{NFSU2_TR(0x61f09a);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f09d:{NFSU2_TR(0x61f09d);
{u32 ea_=u32(u32(8021968u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61f0a3:{NFSU2_TR(0x61f0a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61f0a5:{NFSU2_TR(0x61f0a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61f0a8:{NFSU2_TR(0x61f0a8);
if(r1(R+518)){{goto L61f0d1;}}
}
B61f0aa:L61f0aa:{c.instructions+=3;NFSU2_TR(0x61f0aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f0b0:{NFSU2_TR(0x61f0b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61f0b2:{NFSU2_TR(0x61f0b2);
if(r1(R+518)){{goto L61f0ec;}}
}
B61f0b4:L61f0b4:{c.instructions+=8;NFSU2_TR(0x61f0b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f0ba:{NFSU2_TR(0x61f0ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B61f0be:{NFSU2_TR(0x61f0be);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61f0c1:{NFSU2_TR(0x61f0c1);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f0c4:{NFSU2_TR(0x61f0c4);
{u32 ea_=u32(u32(8021968u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61f0ca:{NFSU2_TR(0x61f0ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61f0cc:{NFSU2_TR(0x61f0cc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B61f0cf:{NFSU2_TR(0x61f0cf);
if(r1(R+514)){{goto L61f0ec;}}
}
B61f0d1:L61f0d1:{c.instructions+=6;NFSU2_TR(0x61f0d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x25ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B61f0d5:{NFSU2_TR(0x61f0d5);
u8 U[12];
w4(U+0,u32(u32(u32(0x4d04ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B61f0dc:{NFSU2_TR(0x61f0dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B61f0de:{NFSU2_TR(0x61f0de);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x25ull))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61f0e2:{NFSU2_TR(0x61f0e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B61f0e8:{NFSU2_TR(0x61f0e8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61f0ec:L61f0ec:{c.instructions+=9;NFSU2_TR(0x61f0ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f0f0:{NFSU2_TR(0x61f0f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f0f6:{NFSU2_TR(0x61f0f6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61f0f7:{NFSU2_TR(0x61f0f7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B61f0fa:{NFSU2_TR(0x61f0fa);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B61f0fd:{NFSU2_TR(0x61f0fd);
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
B61f0ff:{NFSU2_TR(0x61f0ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f103:{NFSU2_TR(0x61f103);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f107:{NFSU2_TR(0x61f107);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x61ed83u,61e);}
}
B61f10d:L61f10d:{c.instructions+=6;NFSU2_TR(0x61f10d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61f10e:{NFSU2_TR(0x61f10e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61f10f:{NFSU2_TR(0x61f10f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61f110:{NFSU2_TR(0x61f110);
__builtin_memmove((R+16),(R+20),4);
}
B61f112:{NFSU2_TR(0x61f112);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61f113:{NFSU2_TR(0x61f113);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61f120:L61f120:{c.instructions+=6;NFSU2_TR(0x61f120);
__builtin_memmove((R+0),gp(0x8654a4),4);
}
B61f125:{NFSU2_TR(0x61f125);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B61f128:{NFSU2_TR(0x61f128);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61f12b:{NFSU2_TR(0x61f12b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f12c:{NFSU2_TR(0x61f12c);
__builtin_memmove((R+24),(R+4),4);
}
B61f12e:{NFSU2_TR(0x61f12e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f466;}}
}
B61f134:L61f134:{c.instructions+=4;NFSU2_TR(0x61f134);
__builtin_memmove((R+0),gp(0x865154),4);
}
B61f139:{NFSU2_TR(0x61f139);
w4(R+4,u32(0x865480ull));
}
B61f13e:{NFSU2_TR(0x61f13e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f142:{NFSU2_TR(0x61f142);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f147ull));
TAIL_STATIC(0x571250u,571);
}
B61f147:L61f147:{c.instructions+=2;NFSU2_TR(0x61f147);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61f149:{NFSU2_TR(0x61f149);
if(r1(R+518)){{goto L61f1e1;}}
}
B61f14f:L61f14f:{c.instructions+=4;NFSU2_TR(0x61f14f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4edcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f155:{NFSU2_TR(0x61f155);
{u32 ea_=u32(r4(R+24)+u32(20188u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61f15b:{NFSU2_TR(0x61f15b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B61f15d:{NFSU2_TR(0x61f15d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61f165;}}
}
B61f15f:L61f15f:{c.instructions+=1;NFSU2_TR(0x61f15f);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61f165:L61f165:{c.instructions+=5;NFSU2_TR(0x61f165);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61f16b:{NFSU2_TR(0x61f16b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61f16f:{NFSU2_TR(0x61f16f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B61f171:{NFSU2_TR(0x61f171);
{u32 ea_=u32(r4(R+24)+u32(20192u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61f177:{NFSU2_TR(0x61f177);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61f17f;}}
}
B61f179:L61f179:{c.instructions+=1;NFSU2_TR(0x61f179);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61f17f:L61f17f:{c.instructions+=5;NFSU2_TR(0x61f17f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ee4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f185:{NFSU2_TR(0x61f185);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61f189:{NFSU2_TR(0x61f189);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B61f18b:{NFSU2_TR(0x61f18b);
{u32 ea_=u32(r4(R+24)+u32(20196u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61f191:{NFSU2_TR(0x61f191);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61f199;}}
}
B61f193:L61f193:{c.instructions+=1;NFSU2_TR(0x61f193);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61f199:L61f199:{c.instructions+=11;NFSU2_TR(0x61f199);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f19f:{NFSU2_TR(0x61f19f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61f1a3:{NFSU2_TR(0x61f1a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f1a9:{NFSU2_TR(0x61f1a9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f1ab:{NFSU2_TR(0x61f1ab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f1ad:{NFSU2_TR(0x61f1ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61f1b1:{NFSU2_TR(0x61f1b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x43000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f1b9:{NFSU2_TR(0x61f1b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f1c1:{NFSU2_TR(0x61f1c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f1c5:{NFSU2_TR(0x61f1c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f1c8:{NFSU2_TR(0x61f1c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f1c9:L61f1c9:{c.instructions+=2;NFSU2_TR(0x61f1c9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f1cb:{NFSU2_TR(0x61f1cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f1d0ull));
TAIL_STATIC(0x5d75e0u,5d7);
}
B61f1d0:L61f1d0:{c.instructions+=3;NFSU2_TR(0x61f1d0);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f1d5:{NFSU2_TR(0x61f1d5);
__builtin_memmove((R+4),(R+24),4);
}
B61f1d7:{NFSU2_TR(0x61f1d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f1dcull));
TAIL_STATIC(0x613a70u,613);
}
B61f1dc:L61f1dc:{c.instructions+=3;NFSU2_TR(0x61f1dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61f1dd:{NFSU2_TR(0x61f1dd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x64ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61f1e0:{NFSU2_TR(0x61f1e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61f1e1:L61f1e1:{c.instructions+=6;NFSU2_TR(0x61f1e1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f1e5:{NFSU2_TR(0x61f1e5);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B61f1e7:{NFSU2_TR(0x61f1e7);
{u32 ea_=u32(u32(8030004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61f1ed:{NFSU2_TR(0x61f1ed);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61f1ef:{NFSU2_TR(0x61f1ef);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B61f1f2:{NFSU2_TR(0x61f1f2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L61f466;}}
}
B61f1f8:L61f1f8:{c.instructions+=4;NFSU2_TR(0x61f1f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f1fe:{NFSU2_TR(0x61f1fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f1ff:{NFSU2_TR(0x61f1ff);
__builtin_memmove((R+4),(R+24),4);
}
B61f201:{NFSU2_TR(0x61f201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f206ull));
TAIL_STATIC(0x6140f0u,614);
}
B61f206:L61f206:{c.instructions+=8;NFSU2_TR(0x61f206);
{u32 ea_=u32(u32(8403580u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f20c:{NFSU2_TR(0x61f20c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61f210:{NFSU2_TR(0x61f210);
{u32 ea_=u32(u32(9051472u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61f216:{NFSU2_TR(0x61f216);
{u32 ea_=u32(u32(9051472u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61f21c:{NFSU2_TR(0x61f21c);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61f222:{NFSU2_TR(0x61f222);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61f224:{NFSU2_TR(0x61f224);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61f227:{NFSU2_TR(0x61f227);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f233;}}
}
B61f229:L61f229:{c.instructions+=1;NFSU2_TR(0x61f229);
s4(0x8a1d50,u32(0x0ull));
}
B61f233:L61f233:{c.instructions+=5;NFSU2_TR(0x61f233);
__builtin_memmove((R+8),gp(0x803acc),4);
}
B61f239:{NFSU2_TR(0x61f239);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f23f:{NFSU2_TR(0x61f23f);
__builtin_memmove((R+0),gp(0x7faa50),4);
}
B61f244:{NFSU2_TR(0x61f244);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61f246:{NFSU2_TR(0x61f246);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f262;}}
}
B61f248:L61f248:{c.instructions+=6;NFSU2_TR(0x61f248);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f252:{NFSU2_TR(0x61f252);
__builtin_memmove((R+0),gp(0x803ac8),4);
}
B61f257:{NFSU2_TR(0x61f257);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x509cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f25d:{NFSU2_TR(0x61f25d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61f25e:{NFSU2_TR(0x61f25e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x64ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61f261:{NFSU2_TR(0x61f261);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61f262:L61f262:{c.instructions+=3;NFSU2_TR(0x61f262);
__builtin_memmove((R+0),gp(0x8a1d38),4);
}
B61f267:{NFSU2_TR(0x61f267);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61f269:{NFSU2_TR(0x61f269);
if(r1(R+518)){{goto L61f279;}}
}
B61f26b:L61f26b:{c.instructions+=3;NFSU2_TR(0x61f26b);
__builtin_memmove((R+4),gp(0x803ac8),4);
}
B61f271:{NFSU2_TR(0x61f271);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x509cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f277:{NFSU2_TR(0x61f277);
{goto L61f2ad;}
}
B61f279:L61f279:{c.instructions+=2;NFSU2_TR(0x61f279);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61f280:{NFSU2_TR(0x61f280);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f45c;}}
}
B61f286:L61f286:{c.instructions+=5;NFSU2_TR(0x61f286);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f28c:{NFSU2_TR(0x61f28c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61f292:{NFSU2_TR(0x61f292);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61f294:{NFSU2_TR(0x61f294);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B61f297:{NFSU2_TR(0x61f297);
if(r1(R+514)){{goto L61f2a1;}}
}
B61f299:L61f299:{c.instructions+=2;NFSU2_TR(0x61f299);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f29f:{NFSU2_TR(0x61f29f);
{goto L61f2a7;}
}
B61f2a1:L61f2a1:{c.instructions+=1;NFSU2_TR(0x61f2a1);
{u32 ea_=u32(u32(8403656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f2a7:L61f2a7:{c.instructions+=1;NFSU2_TR(0x61f2a7);
{u32 ea_=u32(r4(R+24)+u32(20632u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61f2ad:L61f2ad:{c.instructions+=7;NFSU2_TR(0x61f2ad);
{u32 ea_=u32(r4(R+24)+u32(20632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f2b3:{NFSU2_TR(0x61f2b3);
{u32 ea_=u32(r4(R+24)+u32(20636u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61f2b9:{NFSU2_TR(0x61f2b9);
{u32 ea_=u32(r4(R+24)+u32(20632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f2bf:{NFSU2_TR(0x61f2bf);
{u32 ea_=u32(r4(R+24)+u32(20636u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61f2c5:{NFSU2_TR(0x61f2c5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61f2c7:{NFSU2_TR(0x61f2c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61f2ca:{NFSU2_TR(0x61f2ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f2d4;}}
}
B61f2cc:L61f2cc:{c.instructions+=2;NFSU2_TR(0x61f2cc);
{u32 ea_=u32(u32(8021952u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61f2d2:{NFSU2_TR(0x61f2d2);
{goto L61f2da;}
}
B61f2d4:L61f2d4:{c.instructions+=1;NFSU2_TR(0x61f2d4);
{u32 ea_=u32(u32(8021956u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61f2da:L61f2da:{c.instructions+=5;NFSU2_TR(0x61f2da);
{u32 ea_=u32(r4(R+24)+u32(20636u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61f2e0:{NFSU2_TR(0x61f2e0);
{u32 ea_=u32(r4(R+24)+u32(20636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61f2e6:{NFSU2_TR(0x61f2e6);
__builtin_memmove((R+0),gp(0x8a1f34),4);
}
B61f2eb:{NFSU2_TR(0x61f2eb);
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
B61f2ed:{NFSU2_TR(0x61f2ed);
if(r1(R+518)){{goto L61f349;}}
}
B61f2ef:L61f2ef:{c.instructions+=9;NFSU2_TR(0x61f2ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f2f5:{NFSU2_TR(0x61f2f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61f2f9:{NFSU2_TR(0x61f2f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f2fa:{NFSU2_TR(0x61f2fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61f2fe:{NFSU2_TR(0x61f2fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f2ff:{NFSU2_TR(0x61f2ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f300:{NFSU2_TR(0x61f300);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f308:{NFSU2_TR(0x61f308);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f310:{NFSU2_TR(0x61f310);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f315ull));
TAIL_STATIC(0x5f0c50u,5f0);
}
B61f315:L61f315:{c.instructions+=5;NFSU2_TR(0x61f315);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61f319:{NFSU2_TR(0x61f319);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f31d:{NFSU2_TR(0x61f31d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f31e:{NFSU2_TR(0x61f31e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f31f:{NFSU2_TR(0x61f31f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f324ull));
TAIL_STATIC(0x61e380u,61e);
}
B61f324:L61f324:{c.instructions+=3;NFSU2_TR(0x61f324);
{u32 ea_=u32(r4(R+24)+u32(20628u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61f32a:{NFSU2_TR(0x61f32a);
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
B61f32d:{NFSU2_TR(0x61f32d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f332ull));
TAIL_STATIC(0x5b98a0u,5b9);
}
B61f332:L61f332:{c.instructions+=2;NFSU2_TR(0x61f332);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61f335:{NFSU2_TR(0x61f335);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L61f349;}}
}
B61f337:L61f337:{c.instructions+=3;NFSU2_TR(0x61f337);
{u32 ea_=u32(r4(R+24)+u32(20628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f33d:{NFSU2_TR(0x61f33d);
{u32 ea_=u32(u32(7897444u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61f343:{NFSU2_TR(0x61f343);
{u32 ea_=u32(r4(R+24)+u32(20628u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61f349:L61f349:{c.instructions+=13;NFSU2_TR(0x61f349);
{u32 ea_=u32(r4(R+24)+u32(20628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f34f:{NFSU2_TR(0x61f34f);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61f355:{NFSU2_TR(0x61f355);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f35b:{NFSU2_TR(0x61f35b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B61f35f:{NFSU2_TR(0x61f35f);
{u32 ea_=u32(u32(8403472u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61f365:{NFSU2_TR(0x61f365);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B61f367:{NFSU2_TR(0x61f367);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61f36d:{NFSU2_TR(0x61f36d);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61f373:{NFSU2_TR(0x61f373);
{u32 ea_=u32(r4(R+24)+u32(20628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f379:{NFSU2_TR(0x61f379);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61f37f:{NFSU2_TR(0x61f37f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61f381:{NFSU2_TR(0x61f381);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B61f384:{NFSU2_TR(0x61f384);
if(r1(R+514)){{goto L61f39f;}}
}
B61f386:L61f386:{c.instructions+=4;NFSU2_TR(0x61f386);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61f38c:{NFSU2_TR(0x61f38c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61f38e:{NFSU2_TR(0x61f38e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B61f391:{NFSU2_TR(0x61f391);
if(r1(R+514)){{goto L61f3a1;}}
}
B61f393:L61f393:{c.instructions+=2;NFSU2_TR(0x61f393);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f39d:{NFSU2_TR(0x61f39d);
{goto L61f3a1;}
}
B61f39f:L61f39f:{c.instructions+=1;NFSU2_TR(0x61f39f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61f3a1:L61f3a1:{c.instructions+=5;NFSU2_TR(0x61f3a1);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61f3a7:{NFSU2_TR(0x61f3a7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61f3ad:{NFSU2_TR(0x61f3ad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61f3af:{NFSU2_TR(0x61f3af);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61f3b2:{NFSU2_TR(0x61f3b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f3be;}}
}
B61f3b4:L61f3b4:{c.instructions+=1;NFSU2_TR(0x61f3b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f3be:L61f3be:{c.instructions+=4;NFSU2_TR(0x61f3be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f3c4:{NFSU2_TR(0x61f3c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f3c5:{NFSU2_TR(0x61f3c5);
__builtin_memmove((R+4),(R+24),4);
}
B61f3c7:{NFSU2_TR(0x61f3c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f3ccull));
TAIL_STATIC(0x6139b0u,613);
}
B61f3cc:L61f3cc:{c.instructions+=3;NFSU2_TR(0x61f3cc);
__builtin_memmove((R+4),(R+24),4);
}
B61f3ce:{NFSU2_TR(0x61f3ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50d4ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f3d8:{NFSU2_TR(0x61f3d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f3ddull));
TAIL_STATIC(0x61e700u,61e);
}
B61f3dd:L61f3dd:{c.instructions+=4;NFSU2_TR(0x61f3dd);
{u32 ea_=u32(r4(R+24)+u32(20188u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61f3e3:{NFSU2_TR(0x61f3e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4edcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61f3e9:{NFSU2_TR(0x61f3e9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B61f3eb:{NFSU2_TR(0x61f3eb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61f3f3;}}
}
B61f3ed:L61f3ed:{c.instructions+=1;NFSU2_TR(0x61f3ed);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61f3f3:L61f3f3:{c.instructions+=5;NFSU2_TR(0x61f3f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f3f9:{NFSU2_TR(0x61f3f9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61f3fd:{NFSU2_TR(0x61f3fd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B61f3ff:{NFSU2_TR(0x61f3ff);
{u32 ea_=u32(r4(R+24)+u32(20192u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61f405:{NFSU2_TR(0x61f405);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61f40d;}}
}
B61f407:L61f407:{c.instructions+=1;NFSU2_TR(0x61f407);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61f40d:L61f40d:{c.instructions+=5;NFSU2_TR(0x61f40d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ee4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f413:{NFSU2_TR(0x61f413);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61f417:{NFSU2_TR(0x61f417);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B61f419:{NFSU2_TR(0x61f419);
{u32 ea_=u32(r4(R+24)+u32(20196u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61f41f:{NFSU2_TR(0x61f41f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61f427;}}
}
B61f421:L61f421:{c.instructions+=1;NFSU2_TR(0x61f421);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61f427:L61f427:{c.instructions+=12;NFSU2_TR(0x61f427);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61f42d:{NFSU2_TR(0x61f42d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61f431:{NFSU2_TR(0x61f431);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f437:{NFSU2_TR(0x61f437);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f439:{NFSU2_TR(0x61f439);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f43b:{NFSU2_TR(0x61f43b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61f43f:{NFSU2_TR(0x61f43f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x43000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f447:{NFSU2_TR(0x61f447);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f44f:{NFSU2_TR(0x61f44f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f453:{NFSU2_TR(0x61f453);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f456:{NFSU2_TR(0x61f456);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f457:{NFSU2_TR(0x61f457);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f1c9u);}goto L61f1c9;}
}
B61f45c:L61f45c:{c.instructions+=1;NFSU2_TR(0x61f45c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5098ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f466:L61f466:{c.instructions+=3;NFSU2_TR(0x61f466);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61f467:{NFSU2_TR(0x61f467);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x64ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61f46a:{NFSU2_TR(0x61f46a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61f470:L61f470:{c.instructions+=4;NFSU2_TR(0x61f470);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f471:{NFSU2_TR(0x61f471);
__builtin_memmove((R+24),(R+4),4);
}
B61f473:{NFSU2_TR(0x61f473);
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
B61f475:{NFSU2_TR(0x61f475);
if(r1(R+518)){{goto L61f49b;}}
}
B61f477:L61f477:{c.instructions+=5;NFSU2_TR(0x61f477);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61f479:{NFSU2_TR(0x61f479);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B61f47b:{NFSU2_TR(0x61f47b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B61f47d:{NFSU2_TR(0x61f47d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61f480:{NFSU2_TR(0x61f480);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f485;}}
}
B61f482:L61f482:{c.instructions+=1;NFSU2_TR(0x61f482);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f485:L61f485:{c.instructions+=4;NFSU2_TR(0x61f485);
__builtin_memmove((R+8),gp(0x8a1c1c),4);
}
B61f48b:{NFSU2_TR(0x61f48b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f48c:{NFSU2_TR(0x61f48c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f48d:{NFSU2_TR(0x61f48d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f492ull));
TAIL_STATIC(0x43f920u,43f);
}
B61f492:L61f492:{c.instructions+=4;NFSU2_TR(0x61f492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61f494:{NFSU2_TR(0x61f494);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61f497:{NFSU2_TR(0x61f497);
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
B61f499:{NFSU2_TR(0x61f499);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f477u);}goto L61f477;}}
}
B61f49b:L61f49b:{c.instructions+=2;NFSU2_TR(0x61f49b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61f49c:{NFSU2_TR(0x61f49c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61f4a0:L61f4a0:{c.instructions+=4;NFSU2_TR(0x61f4a0);
__builtin_memmove((R+0),(R+4),4);
}
B61f4a2:{NFSU2_TR(0x61f4a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f4a8:{NFSU2_TR(0x61f4a8);
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
B61f4aa:{NFSU2_TR(0x61f4aa);
if(r1(R+518)){{goto L61f4c7;}}
}
B61f4ac:L61f4ac:{c.instructions+=8;NFSU2_TR(0x61f4ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61f4ae:{NFSU2_TR(0x61f4ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f4af:{NFSU2_TR(0x61f4af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61f4b2:{NFSU2_TR(0x61f4b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B61f4b4:{NFSU2_TR(0x61f4b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f4b7:{NFSU2_TR(0x61f4b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f4c1:{NFSU2_TR(0x61f4c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61f4c2:{NFSU2_TR(0x61f4c2);
{goto L61f4d0;}
}
B61f4c7:L61f4c7:{c.instructions+=1;NFSU2_TR(0x61f4c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61f4d0:L61f4d0:{c.instructions+=4;NFSU2_TR(0x61f4d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f4d1:{NFSU2_TR(0x61f4d1);
__builtin_memmove((R+24),(R+4),4);
}
B61f4d3:{NFSU2_TR(0x61f4d3);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
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
B61f4d9:{NFSU2_TR(0x61f4d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f514;}}
}
B61f4db:L61f4db:{c.instructions+=3;NFSU2_TR(0x61f4db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f4e1:{NFSU2_TR(0x61f4e1);
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
B61f4e3:{NFSU2_TR(0x61f4e3);
if(r1(R+518)){{goto L61f4fe;}}
}
B61f4e5:L61f4e5:{c.instructions+=6;NFSU2_TR(0x61f4e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61f4e7:{NFSU2_TR(0x61f4e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61f4ea:{NFSU2_TR(0x61f4ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B61f4ec:{NFSU2_TR(0x61f4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f4ef:{NFSU2_TR(0x61f4ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f4f9:{NFSU2_TR(0x61f4f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f4feull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f4d0u);}goto L61f4d0;}
}
B61f4fe:L61f4fe:{c.instructions+=5;NFSU2_TR(0x61f4fe);
__builtin_memmove((R+0),gp(0x8a2b54),4);
}
B61f503:{NFSU2_TR(0x61f503);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B61f505:{NFSU2_TR(0x61f505);
__builtin_memmove(gp(0x8a2b54),(R+24),4);
}
B61f50b:{NFSU2_TR(0x61f50b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f50e:{NFSU2_TR(0x61f50e);
u8 U[4];
w4(U+0,u32(0x8a2b50ull));
s4(u32(r4(R+24)),r4(U+0));
}
B61f514:L61f514:{c.instructions+=2;NFSU2_TR(0x61f514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61f515:{NFSU2_TR(0x61f515);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61f520:L61f520:{c.instructions+=10;NFSU2_TR(0x61f520);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f521:{NFSU2_TR(0x61f521);
__builtin_memmove((R+20),(R+16),4);
}
B61f523:{NFSU2_TR(0x61f523);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B61f526:{NFSU2_TR(0x61f526);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B61f529:{NFSU2_TR(0x61f529);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f52a:{NFSU2_TR(0x61f52a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f52b:{NFSU2_TR(0x61f52b);
__builtin_memmove((R+28),(R+4),4);
}
B61f52d:{NFSU2_TR(0x61f52d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61f533:{NFSU2_TR(0x61f533);
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
B61f535:{NFSU2_TR(0x61f535);
if(r1(R+518)){{goto L61f56d;}}
}
B61f537:L61f537:{c.instructions+=3;NFSU2_TR(0x61f537);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f53d:{NFSU2_TR(0x61f53d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61f53f:{NFSU2_TR(0x61f53f);
if(r1(R+518)){{goto L61f548;}}
}
B61f541:L61f541:{c.instructions+=2;NFSU2_TR(0x61f541);
__builtin_memmove((R+4),(R+24),4);
}
B61f543:{NFSU2_TR(0x61f543);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f548ull));
TAIL_STATIC(0x60bb10u,60b);
}
B61f548:L61f548:{c.instructions+=5;NFSU2_TR(0x61f548);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B61f54b:{NFSU2_TR(0x61f54b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61f54f:{NFSU2_TR(0x61f54f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f550:{NFSU2_TR(0x61f550);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f551:{NFSU2_TR(0x61f551);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f556ull));
TAIL_STATIC(0x43c7c0u,43c);
}
B61f556:L61f556:{c.instructions+=7;NFSU2_TR(0x61f556);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f559:{NFSU2_TR(0x61f559);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f55a:{NFSU2_TR(0x61f55a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61f55e:{NFSU2_TR(0x61f55e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f55f:{NFSU2_TR(0x61f55f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61f562:{NFSU2_TR(0x61f562);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f563:{NFSU2_TR(0x61f563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f568ull));
TAIL_STATIC(0x43c990u,43c);
}
B61f568:L61f568:{c.instructions+=2;NFSU2_TR(0x61f568);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B61f56b:{NFSU2_TR(0x61f56b);
{goto L61f57d;}
}
B61f56d:L61f56d:{c.instructions+=5;NFSU2_TR(0x61f56d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f570:{NFSU2_TR(0x61f570);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f571:{NFSU2_TR(0x61f571);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+8),(U+0),4);
}
B61f574:{NFSU2_TR(0x61f574);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f575:{NFSU2_TR(0x61f575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f57aull));
TAIL_STATIC(0x4012b0u,401);
}
B61f57a:L61f57a:{c.instructions+=1;NFSU2_TR(0x61f57a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61f57d:L61f57d:{c.instructions+=3;NFSU2_TR(0x61f57d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f583:{NFSU2_TR(0x61f583);
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
B61f585:{NFSU2_TR(0x61f585);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f58e;}}
}
B61f587:L61f587:{c.instructions+=2;NFSU2_TR(0x61f587);
__builtin_memmove((R+4),(R+28),4);
}
B61f589:{NFSU2_TR(0x61f589);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f58eull));
TAIL_STATIC(0x6147e0u,614);
}
B61f58e:L61f58e:{c.instructions+=5;NFSU2_TR(0x61f58e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61f58f:{NFSU2_TR(0x61f58f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61f590:{NFSU2_TR(0x61f590);
__builtin_memmove((R+16),(R+20),4);
}
B61f592:{NFSU2_TR(0x61f592);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61f593:{NFSU2_TR(0x61f593);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61f5a0:L61f5a0:{c.instructions+=4;NFSU2_TR(0x61f5a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f5a1:{NFSU2_TR(0x61f5a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61f5a5:{NFSU2_TR(0x61f5a5);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
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
B61f5ab:{NFSU2_TR(0x61f5ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f5e6;}}
}
B61f5ad:L61f5ad:{c.instructions+=3;NFSU2_TR(0x61f5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f5b3:{NFSU2_TR(0x61f5b3);
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
B61f5b5:{NFSU2_TR(0x61f5b5);
if(r1(R+518)){{goto L61f5d0;}}
}
B61f5b7:L61f5b7:{c.instructions+=6;NFSU2_TR(0x61f5b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61f5b9:{NFSU2_TR(0x61f5b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61f5bc:{NFSU2_TR(0x61f5bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B61f5be:{NFSU2_TR(0x61f5be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f5c1:{NFSU2_TR(0x61f5c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f5cb:{NFSU2_TR(0x61f5cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f5d0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f4d0u);}goto L61f4d0;}
}
B61f5d0:L61f5d0:{c.instructions+=5;NFSU2_TR(0x61f5d0);
__builtin_memmove((R+0),gp(0x8a2b54),4);
}
B61f5d5:{NFSU2_TR(0x61f5d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B61f5d7:{NFSU2_TR(0x61f5d7);
__builtin_memmove(gp(0x8a2b54),(R+24),4);
}
B61f5dd:{NFSU2_TR(0x61f5dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f5e0:{NFSU2_TR(0x61f5e0);
u8 U[4];
w4(U+0,u32(0x8a2b50ull));
s4(u32(r4(R+24)),r4(U+0));
}
B61f5e6:L61f5e6:{c.instructions+=2;NFSU2_TR(0x61f5e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61f5e7:{NFSU2_TR(0x61f5e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61f5f0:L61f5f0:{c.instructions+=22;NFSU2_TR(0x61f5f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f5f2:{NFSU2_TR(0x61f5f2);
u8 U[4];
w4(U+0,u32(0x77a1beull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f5f7:{NFSU2_TR(0x61f5f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f5fd:{NFSU2_TR(0x61f5fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f5fe:{NFSU2_TR(0x61f5fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f605:{NFSU2_TR(0x61f605);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f606:{NFSU2_TR(0x61f606);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f607:{NFSU2_TR(0x61f607);
__builtin_memmove((R+12),(R+4),4);
}
B61f609:{NFSU2_TR(0x61f609);
w4(R+0,u32(0x3f800000ull));
}
B61f60e:{NFSU2_TR(0x61f60e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f60f:{NFSU2_TR(0x61f60f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61f612:{NFSU2_TR(0x61f612);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f613:{NFSU2_TR(0x61f613);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f619:{NFSU2_TR(0x61f619);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f61f:{NFSU2_TR(0x61f61f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f625:{NFSU2_TR(0x61f625);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f62b:{NFSU2_TR(0x61f62b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B61f62d:{NFSU2_TR(0x61f62d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f62e:{NFSU2_TR(0x61f62e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f632:{NFSU2_TR(0x61f632);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x110ull))));
w4(U+4,u32(0x3dcccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f63c:{NFSU2_TR(0x61f63c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61f642:{NFSU2_TR(0x61f642);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61f644:L61f644:{c.instructions+=5;NFSU2_TR(0x61f644);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B61f647:{NFSU2_TR(0x61f647);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61f64b:{NFSU2_TR(0x61f64b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61f64c:{NFSU2_TR(0x61f64c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61f64f:{NFSU2_TR(0x61f64f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f644u);}goto L61f644;}}
}
B61f651:L61f651:{c.instructions+=3;NFSU2_TR(0x61f651);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61f654:{NFSU2_TR(0x61f654);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61f656:{NFSU2_TR(0x61f656);
w4(R+4,u32(0x11ull));
}
B61f65b:L61f65b:{c.instructions+=1;NFSU2_TR(0x61f65b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L61f65d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f65bu);}goto L61f65b;}
}
B61f65d:L61f65d:{c.instructions+=2;NFSU2_TR(0x61f65d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x374ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61f663:{NFSU2_TR(0x61f663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f668ull));
TAIL_STATIC(0x5a7970u,5a7);
}
B61f668:L61f668:{c.instructions+=9;NFSU2_TR(0x61f668);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x45cull))));
__builtin_memmove((R+8),(U+0),4);
}
B61f66e:{NFSU2_TR(0x61f66e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f674:{NFSU2_TR(0x61f674);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x100ull))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f67e:{NFSU2_TR(0x61f67e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x108ull))));
w4(U+4,u32(0x425e38e4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f688:{NFSU2_TR(0x61f688);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10cull))));
w4(U+4,u32(0x3f9126e9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61f692:{NFSU2_TR(0x61f692);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f698:{NFSU2_TR(0x61f698);
w4(R+0,u32(0x40800000ull));
}
B61f69d:{NFSU2_TR(0x61f69d);
__builtin_memmove((R+28),(R+8),4);
}
B61f69f:{NFSU2_TR(0x61f69f);
w4(R+4,u32(0x3full));
}
B61f6a4:L61f6a4:{c.instructions+=1;NFSU2_TR(0x61f6a4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L61f6a6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f6a4u);}goto L61f6a4;}
}
B61f6a6:L61f6a6:{c.instructions+=7;NFSU2_TR(0x61f6a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f6aa:{NFSU2_TR(0x61f6aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f6b0:{NFSU2_TR(0x61f6b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f6b4:{NFSU2_TR(0x61f6b4);
__builtin_memmove((R+24),(R+0),4);
}
B61f6b6:{NFSU2_TR(0x61f6b6);
w4(R+4,u32(0x15cull));
}
B61f6bb:{NFSU2_TR(0x61f6bb);
__builtin_memmove((R+28),(R+12),4);
}
B61f6bd:{NFSU2_TR(0x61f6bd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x45cull))));
}
B61f6c2:L61f6c2:{c.instructions+=1;NFSU2_TR(0x61f6c2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L61f6c4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f6c2u);}goto L61f6c2;}
}
B61f6c4:L61f6c4:{c.instructions+=3;NFSU2_TR(0x61f6c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f6c5:{NFSU2_TR(0x61f6c5);
__builtin_memmove((R+4),(R+8),4);
}
B61f6c7:{NFSU2_TR(0x61f6c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f6ccull));
TAIL_STATIC(0x4133d0u,413);
}
B61f6cc:L61f6cc:{c.instructions+=7;NFSU2_TR(0x61f6cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2e0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61f6d2:{NFSU2_TR(0x61f6d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f6d3:{NFSU2_TR(0x61f6d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61f6d5:{NFSU2_TR(0x61f6d5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f6d6:{NFSU2_TR(0x61f6d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f6d7:{NFSU2_TR(0x61f6d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x374ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61f6dd:{NFSU2_TR(0x61f6dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f6e2ull));
TAIL_STATIC(0x59b060u,59b);
}
B61f6e2:L61f6e2:{c.instructions+=9;NFSU2_TR(0x61f6e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f6e6:{NFSU2_TR(0x61f6e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61f6e7:{NFSU2_TR(0x61f6e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61f6e8:{NFSU2_TR(0x61f6e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61f6e9:{NFSU2_TR(0x61f6e9);
__builtin_memmove((R+0),(R+12),4);
}
B61f6eb:{NFSU2_TR(0x61f6eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61f6ec:{NFSU2_TR(0x61f6ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f6f3:{NFSU2_TR(0x61f6f3);
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
B61f6f6:{NFSU2_TR(0x61f6f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61f700:L61f700:{c.instructions+=6;NFSU2_TR(0x61f700);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B61f704:{NFSU2_TR(0x61f704);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B61f708:{NFSU2_TR(0x61f708);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f709:{NFSU2_TR(0x61f709);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f70a:{NFSU2_TR(0x61f70a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f70b:{NFSU2_TR(0x61f70b);
if(r1(R+518)){{goto L61f749;}}
}
B61f70d:L61f70d:{c.instructions+=8;NFSU2_TR(0x61f70d);
__builtin_memmove((R+4),gp(0x8a1cc8),4);
}
B61f713:{NFSU2_TR(0x61f713);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61f716:{NFSU2_TR(0x61f716);
w4(R+0,u32(r2(R+0)));
}
B61f719:{NFSU2_TR(0x61f719);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+24,u32(s32(s16(r2(U+8)))));
}
B61f71d:{NFSU2_TR(0x61f71d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B61f720:{NFSU2_TR(0x61f720);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B61f722:{NFSU2_TR(0x61f722);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61f724:{NFSU2_TR(0x61f724);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61f749;}}
}
B61f726:L61f726:{c.instructions+=3;NFSU2_TR(0x61f726);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61f729:{NFSU2_TR(0x61f729);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61f72c:{NFSU2_TR(0x61f72c);
__builtin_memmove((R+16),(R+16),4);
}
B61f730:L61f730:{c.instructions+=5;NFSU2_TR(0x61f730);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B61f733:{NFSU2_TR(0x61f733);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B61f736:{NFSU2_TR(0x61f736);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ba02c05ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61f73c:{NFSU2_TR(0x61f73c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B61f73f:{NFSU2_TR(0x61f73f);
if(r1(R+518)){{goto L61f74f;}}
}
B61f741:L61f741:{c.instructions+=4;NFSU2_TR(0x61f741);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B61f742:{NFSU2_TR(0x61f742);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B61f745:{NFSU2_TR(0x61f745);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61f747:{NFSU2_TR(0x61f747);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f730u);}goto L61f730;}}
}
B61f749:L61f749:{c.instructions+=5;NFSU2_TR(0x61f749);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61f74a:{NFSU2_TR(0x61f74a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61f74b:{NFSU2_TR(0x61f74b);
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
B61f74d:{NFSU2_TR(0x61f74d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61f74e:{NFSU2_TR(0x61f74e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61f74f:L61f74f:{c.instructions+=2;NFSU2_TR(0x61f74f);
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
B61f751:{NFSU2_TR(0x61f751);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f749u);}goto L61f749;}}
}
B61f753:L61f753:{c.instructions+=5;NFSU2_TR(0x61f753);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f756:{NFSU2_TR(0x61f756);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61f757:{NFSU2_TR(0x61f757);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61f758:{NFSU2_TR(0x61f758);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61f759:{NFSU2_TR(0x61f759);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61f760:L61f760:{c.instructions+=9;NFSU2_TR(0x61f760);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f761:{NFSU2_TR(0x61f761);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61f765:{NFSU2_TR(0x61f765);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f766:{NFSU2_TR(0x61f766);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f767:{NFSU2_TR(0x61f767);
u8 U[4];
w4(U+0,u32(0x7a8738ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f76c:{NFSU2_TR(0x61f76c);
__builtin_memmove((R+24),(R+4),4);
}
B61f76e:{NFSU2_TR(0x61f76e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f770:{NFSU2_TR(0x61f770);
__builtin_memmove((R+4),(R+20),4);
}
B61f772:{NFSU2_TR(0x61f772);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f777ull));
TAIL_STATIC(0x578ce0u,578);
}
B61f777:L61f777:{c.instructions+=4;NFSU2_TR(0x61f777);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61f77a:{NFSU2_TR(0x61f77a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61f77c:{NFSU2_TR(0x61f77c);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61f781:{NFSU2_TR(0x61f781);
if(r1(R+518)){{goto L61f7d9;}}
}
B61f783:L61f783:{c.instructions+=5;NFSU2_TR(0x61f783);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61f787:{NFSU2_TR(0x61f787);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f788:{NFSU2_TR(0x61f788);
__builtin_memmove((R+4),(R+20),4);
}
B61f78a:{NFSU2_TR(0x61f78a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B61f78c:{NFSU2_TR(0x61f78c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f791ull));
TAIL_STATIC(0x5716c0u,571);
}
B61f791:L61f791:{c.instructions+=3;NFSU2_TR(0x61f791);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61f794:{NFSU2_TR(0x61f794);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61f796:{NFSU2_TR(0x61f796);
if(r1(R+518)){{goto L61f7a4;}}
}
B61f798:L61f798:{c.instructions+=2;NFSU2_TR(0x61f798);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B61f79d:{NFSU2_TR(0x61f79d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B61f7a4:L61f7a4:{c.instructions+=3;NFSU2_TR(0x61f7a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f7a7:{NFSU2_TR(0x61f7a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61f7a9:{NFSU2_TR(0x61f7a9);
if(r1(R+518)){{goto L61f7b5;}}
}
B61f7ab:L61f7ab:{c.instructions+=4;NFSU2_TR(0x61f7ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61f7ad:{NFSU2_TR(0x61f7ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f7b0:{NFSU2_TR(0x61f7b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B61f7b2:{NFSU2_TR(0x61f7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f7b5:L61f7b5:{c.instructions+=3;NFSU2_TR(0x61f7b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61f7b7:{NFSU2_TR(0x61f7b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f7ba:{NFSU2_TR(0x61f7ba);
if(r1(R+518)){{goto L61f809;}}
}
B61f7bc:L61f7bc:{c.instructions+=8;NFSU2_TR(0x61f7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f7bf:{NFSU2_TR(0x61f7bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61f7c2:{NFSU2_TR(0x61f7c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B61f7c4:{NFSU2_TR(0x61f7c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f7c7:{NFSU2_TR(0x61f7c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f7ca:{NFSU2_TR(0x61f7ca);
__builtin_memmove((R+4),(R+20),4);
}
B61f7cc:{NFSU2_TR(0x61f7cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B61f7ce:{NFSU2_TR(0x61f7ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f7d3ull));
TAIL_STATIC(0x578d90u,578);
}
B61f7d3:L61f7d3:{c.instructions+=4;NFSU2_TR(0x61f7d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61f7d4:{NFSU2_TR(0x61f7d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61f7d5:{NFSU2_TR(0x61f7d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61f7d6:{NFSU2_TR(0x61f7d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61f7d9:L61f7d9:{c.instructions+=3;NFSU2_TR(0x61f7d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f7dc:{NFSU2_TR(0x61f7dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61f7de:{NFSU2_TR(0x61f7de);
if(r1(R+518)){{goto L61f7e7;}}
}
B61f7e0:L61f7e0:{c.instructions+=2;NFSU2_TR(0x61f7e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B61f7e3:{NFSU2_TR(0x61f7e3);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61f7e7:L61f7e7:{c.instructions+=4;NFSU2_TR(0x61f7e7);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61f7eb:{NFSU2_TR(0x61f7eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f7ec:{NFSU2_TR(0x61f7ec);
__builtin_memmove((R+4),(R+20),4);
}
B61f7ee:{NFSU2_TR(0x61f7ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f7f3ull));
TAIL_STATIC(0x5716c0u,571);
}
B61f7f3:L61f7f3:{c.instructions+=3;NFSU2_TR(0x61f7f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61f7f6:{NFSU2_TR(0x61f7f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61f7f8:{NFSU2_TR(0x61f7f8);
if(r1(R+518)){{goto L61f809;}}
}
B61f7fa:L61f7fa:{c.instructions+=3;NFSU2_TR(0x61f7fa);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B61f7ff:{NFSU2_TR(0x61f7ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e970ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B61f806:{NFSU2_TR(0x61f806);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61f809:L61f809:{c.instructions+=2;NFSU2_TR(0x61f809);
__builtin_memmove((R+4),(R+20),4);
}
B61f80b:{NFSU2_TR(0x61f80b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f810ull));
TAIL_STATIC(0x578d90u,578);
}
B61f810:L61f810:{c.instructions+=4;NFSU2_TR(0x61f810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61f811:{NFSU2_TR(0x61f811);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61f812:{NFSU2_TR(0x61f812);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61f813:{NFSU2_TR(0x61f813);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61f820:L61f820:{c.instructions+=11;NFSU2_TR(0x61f820);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f821:{NFSU2_TR(0x61f821);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f822:{NFSU2_TR(0x61f822);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61f826:{NFSU2_TR(0x61f826);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f827:{NFSU2_TR(0x61f827);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f828:{NFSU2_TR(0x61f828);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f829:{NFSU2_TR(0x61f829);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61f82d:{NFSU2_TR(0x61f82d);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B61f82f:{NFSU2_TR(0x61f82f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61f831:{NFSU2_TR(0x61f831);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61f836:{NFSU2_TR(0x61f836);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f933;}}
}
B61f83c:L61f83c:{c.instructions+=5;NFSU2_TR(0x61f83c);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61f840:{NFSU2_TR(0x61f840);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61f842:{NFSU2_TR(0x61f842);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B61f847:{NFSU2_TR(0x61f847);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f84d:{NFSU2_TR(0x61f84d);
if(r1(R+518)){{goto L61f864;}}
}
B61f84f:L61f84f:{c.instructions+=2;NFSU2_TR(0x61f84f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61f852:{NFSU2_TR(0x61f852);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f860;}}
}
B61f854:L61f854:{c.instructions+=2;NFSU2_TR(0x61f854);
u8 U[4];
w4(U+0,u32(0x51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f856:{NFSU2_TR(0x61f856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f85bull));
TAIL_STATIC(0x50d180u,50d);
}
B61f85b:L61f85b:{c.instructions+=2;NFSU2_TR(0x61f85b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61f85e:{NFSU2_TR(0x61f85e);
{goto L61f87f;}
}
B61f860:L61f860:{c.instructions+=2;NFSU2_TR(0x61f860);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f862:{NFSU2_TR(0x61f862);
{goto L61f877;}
}
B61f864:L61f864:{c.instructions+=2;NFSU2_TR(0x61f864);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61f867:{NFSU2_TR(0x61f867);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f875;}}
}
B61f869:L61f869:{c.instructions+=2;NFSU2_TR(0x61f869);
u8 U[4];
w4(U+0,u32(0x4dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f86b:{NFSU2_TR(0x61f86b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f870ull));
TAIL_STATIC(0x50d180u,50d);
}
B61f870:L61f870:{c.instructions+=2;NFSU2_TR(0x61f870);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61f873:{NFSU2_TR(0x61f873);
{goto L61f87f;}
}
B61f875:L61f875:{c.instructions+=1;NFSU2_TR(0x61f875);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f877:L61f877:{c.instructions+=2;NFSU2_TR(0x61f877);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f87a:{NFSU2_TR(0x61f87a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f87full));
TAIL_STATIC(0x481500u,481);
}
B61f87f:L61f87f:{c.instructions+=4;NFSU2_TR(0x61f87f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f882:{NFSU2_TR(0x61f882);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61f888:{NFSU2_TR(0x61f888);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61f88a:{NFSU2_TR(0x61f88a);
if(r1(R+518)){{goto L61f92f;}}
}
B61f890:L61f890:{c.instructions+=4;NFSU2_TR(0x61f890);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B61f893:{NFSU2_TR(0x61f893);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1full))));
}
B61f896:{NFSU2_TR(0x61f896);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B61f899:{NFSU2_TR(0x61f899);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f92f;}}
}
B61f89f:L61f89f:{c.instructions+=2;NFSU2_TR(0x61f89f);
u8 U[4];
w4(U+0,u32(0x7a8780ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f8a4:{NFSU2_TR(0x61f8a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f8a9ull));
TAIL_STATIC(0x43db50u,43d);
}
B61f8a9:L61f8a9:{c.instructions+=5;NFSU2_TR(0x61f8a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61f8ac:{NFSU2_TR(0x61f8ac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f8ae:{NFSU2_TR(0x61f8ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f8af:{NFSU2_TR(0x61f8af);
__builtin_memmove((R+4),(R+24),4);
}
B61f8b1:{NFSU2_TR(0x61f8b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f8b6ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61f8b6:L61f8b6:{c.instructions+=2;NFSU2_TR(0x61f8b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61f8b8:{NFSU2_TR(0x61f8b8);
if(r1(R+518)){{goto L61f8c6;}}
}
B61f8ba:L61f8ba:{c.instructions+=4;NFSU2_TR(0x61f8ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f8bd:{NFSU2_TR(0x61f8bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61f8bf:{NFSU2_TR(0x61f8bf);
w4(R+20,u32(0x4ull));
}
B61f8c4:{NFSU2_TR(0x61f8c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f8cb;}}
}
B61f8c6:L61f8c6:{c.instructions+=1;NFSU2_TR(0x61f8c6);
w4(R+20,u32(0x2ull));
}
B61f8cb:L61f8cb:{c.instructions+=9;NFSU2_TR(0x61f8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f8ce:{NFSU2_TR(0x61f8ce);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B61f8d2:{NFSU2_TR(0x61f8d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f8d8:{NFSU2_TR(0x61f8d8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+8,u32(r2(U+0)));
}
B61f8db:{NFSU2_TR(0x61f8db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f8dc:{NFSU2_TR(0x61f8dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B61f8df:{NFSU2_TR(0x61f8df);
u8 U[4];
w4(U+0,u32(0x7a8770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f8e4:{NFSU2_TR(0x61f8e4);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+8))));
}
B61f8e6:{NFSU2_TR(0x61f8e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f8ebull));
TAIL_STATIC(0x43db80u,43d);
}
B61f8eb:L61f8eb:{c.instructions+=3;NFSU2_TR(0x61f8eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61f8ee:{NFSU2_TR(0x61f8ee);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61f8f0:{NFSU2_TR(0x61f8f0);
if(r1(R+518)){{goto L61f924;}}
}
B61f8f2:L61f8f2:{c.instructions+=9;NFSU2_TR(0x61f8f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f8f5:{NFSU2_TR(0x61f8f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B61f8f9:{NFSU2_TR(0x61f8f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f8ff:{NFSU2_TR(0x61f8ff);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+8,u32(r2(U+0)));
}
B61f902:{NFSU2_TR(0x61f902);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f903:{NFSU2_TR(0x61f903);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B61f906:{NFSU2_TR(0x61f906);
u8 U[4];
w4(U+0,u32(0x7a875cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f90b:{NFSU2_TR(0x61f90b);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+8))));
}
B61f90d:{NFSU2_TR(0x61f90d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f912ull));
TAIL_STATIC(0x43db80u,43d);
}
B61f912:L61f912:{c.instructions+=3;NFSU2_TR(0x61f912);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61f915:{NFSU2_TR(0x61f915);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61f917:{NFSU2_TR(0x61f917);
if(r1(R+518)){{goto L61f924;}}
}
B61f919:L61f919:{c.instructions+=3;NFSU2_TR(0x61f919);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61f91d:{NFSU2_TR(0x61f91d);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61f922:{NFSU2_TR(0x61f922);
{goto L61f96b;}
}
B61f924:L61f924:{c.instructions+=3;NFSU2_TR(0x61f924);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61f928:{NFSU2_TR(0x61f928);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61f92d:{NFSU2_TR(0x61f92d);
{goto L61f96b;}
}
B61f92f:L61f92f:{c.instructions+=2;NFSU2_TR(0x61f92f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B61f931:{NFSU2_TR(0x61f931);
{goto L61f96b;}
}
B61f933:L61f933:{c.instructions+=2;NFSU2_TR(0x61f933);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61f936:{NFSU2_TR(0x61f936);
if(r1(R+518)){{goto L61f9fa;}}
}
B61f93c:L61f93c:{c.instructions+=2;NFSU2_TR(0x61f93c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61f93f:{NFSU2_TR(0x61f93f);
if(r1(R+518)){{goto L61f9fa;}}
}
B61f945:L61f945:{c.instructions+=2;NFSU2_TR(0x61f945);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61f948:{NFSU2_TR(0x61f948);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f96b;}}
}
B61f94a:L61f94a:{c.instructions+=5;NFSU2_TR(0x61f94a);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61f94e:{NFSU2_TR(0x61f94e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61f950:{NFSU2_TR(0x61f950);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B61f955:{NFSU2_TR(0x61f955);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f95b:{NFSU2_TR(0x61f95b);
if(r1(R+518)){{goto L61f9af;}}
}
B61f95d:L61f95d:{c.instructions+=2;NFSU2_TR(0x61f95d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61f95f:{NFSU2_TR(0x61f95f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f9a3;}}
}
B61f961:L61f961:{c.instructions+=1;NFSU2_TR(0x61f961);
u8 U[4];
w4(U+0,u32(0x53ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f963:L61f963:{c.instructions+=1;NFSU2_TR(0x61f963);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f968ull));
TAIL_STATIC(0x50d180u,50d);
}
B61f968:L61f968:{c.instructions+=1;NFSU2_TR(0x61f968);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61f96b:L61f96b:{c.instructions+=3;NFSU2_TR(0x61f96b);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61f96f:{NFSU2_TR(0x61f96f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61f971:{NFSU2_TR(0x61f971);
if(r1(R+518)){{goto L61f9ca;}}
}
B61f973:L61f973:{c.instructions+=3;NFSU2_TR(0x61f973);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f979:{NFSU2_TR(0x61f979);
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
B61f97b:{NFSU2_TR(0x61f97b);
if(r1(R+518)){{goto L61f9f4;}}
}
B61f97d:L61f97d:{c.instructions+=11;NFSU2_TR(0x61f97d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61f981:{NFSU2_TR(0x61f981);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f985:{NFSU2_TR(0x61f985);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f986:{NFSU2_TR(0x61f986);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61f989:{NFSU2_TR(0x61f989);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f98f:{NFSU2_TR(0x61f98f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f990:{NFSU2_TR(0x61f990);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f991:{NFSU2_TR(0x61f991);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f993:{NFSU2_TR(0x61f993);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f994:{NFSU2_TR(0x61f994);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f995:{NFSU2_TR(0x61f995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f99aull));
TAIL_STATIC(0x433e20u,433);
}
B61f99a:L61f99a:{c.instructions+=7;NFSU2_TR(0x61f99a);
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
B61f99d:{NFSU2_TR(0x61f99d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61f99e:{NFSU2_TR(0x61f99e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61f99f:{NFSU2_TR(0x61f99f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61f9a0:{NFSU2_TR(0x61f9a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61f9a1:{NFSU2_TR(0x61f9a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61f9a2:{NFSU2_TR(0x61f9a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61f9a3:L61f9a3:{c.instructions+=3;NFSU2_TR(0x61f9a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f9a6:{NFSU2_TR(0x61f9a6);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f9a8:{NFSU2_TR(0x61f9a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f9adull));
TAIL_STATIC(0x481500u,481);
}
B61f9ad:L61f9ad:{c.instructions+=1;NFSU2_TR(0x61f9ad);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f96bu);}goto L61f96b;}
}
B61f9af:L61f9af:{c.instructions+=2;NFSU2_TR(0x61f9af);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61f9b2:{NFSU2_TR(0x61f9b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61f9c0;}}
}
B61f9b4:L61f9b4:{c.instructions+=2;NFSU2_TR(0x61f9b4);
u8 U[4];
w4(U+0,u32(0x52ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f9b6:{NFSU2_TR(0x61f9b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f9bbull));
TAIL_STATIC(0x50d180u,50d);
}
B61f9bb:L61f9bb:{c.instructions+=2;NFSU2_TR(0x61f9bb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61f9be:{NFSU2_TR(0x61f9be);
{goto L61f9ca;}
}
B61f9c0:L61f9c0:{c.instructions+=1;NFSU2_TR(0x61f9c0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f9c2:L61f9c2:{c.instructions+=2;NFSU2_TR(0x61f9c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f9c5:{NFSU2_TR(0x61f9c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f9caull));
TAIL_STATIC(0x481500u,481);
}
B61f9ca:L61f9ca:{c.instructions+=3;NFSU2_TR(0x61f9ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2d44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f9d0:{NFSU2_TR(0x61f9d0);
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
B61f9d2:{NFSU2_TR(0x61f9d2);
if(r1(R+518)){{goto L61f9f4;}}
}
B61f9d4:L61f9d4:{c.instructions+=11;NFSU2_TR(0x61f9d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f9d8:{NFSU2_TR(0x61f9d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61f9dc:{NFSU2_TR(0x61f9dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61f9df:{NFSU2_TR(0x61f9df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f9e0:{NFSU2_TR(0x61f9e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61f9e6:{NFSU2_TR(0x61f9e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f9e7:{NFSU2_TR(0x61f9e7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f9e8:{NFSU2_TR(0x61f9e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f9ea:{NFSU2_TR(0x61f9ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f9eb:{NFSU2_TR(0x61f9eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61f9ec:{NFSU2_TR(0x61f9ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61f9f1ull));
TAIL_STATIC(0x433e20u,433);
}
B61f9f1:L61f9f1:{c.instructions+=1;NFSU2_TR(0x61f9f1);
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
B61f9f4:L61f9f4:{c.instructions+=6;NFSU2_TR(0x61f9f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61f9f5:{NFSU2_TR(0x61f9f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61f9f6:{NFSU2_TR(0x61f9f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61f9f7:{NFSU2_TR(0x61f9f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61f9f8:{NFSU2_TR(0x61f9f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61f9f9:{NFSU2_TR(0x61f9f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61f9fa:L61f9fa:{c.instructions+=4;NFSU2_TR(0x61f9fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61f9fd:{NFSU2_TR(0x61f9fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x810ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61fa03:{NFSU2_TR(0x61fa03);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61fa05:{NFSU2_TR(0x61fa05);
if(r1(R+518)){{goto L61faae;}}
}
B61fa0b:L61fa0b:{c.instructions+=2;NFSU2_TR(0x61fa0b);
u8 U[4];
w4(U+0,u32(0x7a8750ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fa10:{NFSU2_TR(0x61fa10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fa15ull));
TAIL_STATIC(0x43db50u,43d);
}
B61fa15:L61fa15:{c.instructions+=5;NFSU2_TR(0x61fa15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61fa18:{NFSU2_TR(0x61fa18);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fa1a:{NFSU2_TR(0x61fa1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fa1b:{NFSU2_TR(0x61fa1b);
__builtin_memmove((R+4),(R+24),4);
}
B61fa1d:{NFSU2_TR(0x61fa1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fa22ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61fa22:L61fa22:{c.instructions+=2;NFSU2_TR(0x61fa22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61fa24:{NFSU2_TR(0x61fa24);
if(r1(R+518)){{goto L61faae;}}
}
B61fa2a:L61fa2a:{c.instructions+=4;NFSU2_TR(0x61fa2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61fa2d:{NFSU2_TR(0x61fa2d);
w4(R+4,u32(0x1ull));
}
B61fa32:{NFSU2_TR(0x61fa32);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fa34:{NFSU2_TR(0x61fa34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61faae;}}
}
B61fa36:L61fa36:{c.instructions+=2;NFSU2_TR(0x61fa36);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fa39:{NFSU2_TR(0x61fa39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61fa7b;}}
}
B61fa3b:L61fa3b:{c.instructions+=5;NFSU2_TR(0x61fa3b);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61fa3f:{NFSU2_TR(0x61fa3f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61fa41:{NFSU2_TR(0x61fa41);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B61fa46:{NFSU2_TR(0x61fa46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61fa4c:{NFSU2_TR(0x61fa4c);
if(r1(R+518)){{goto L61fa61;}}
}
B61fa4e:L61fa4e:{c.instructions+=2;NFSU2_TR(0x61fa4e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fa50:{NFSU2_TR(0x61fa50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61fa5e;}}
}
B61fa52:L61fa52:{c.instructions+=2;NFSU2_TR(0x61fa52);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fa54:{NFSU2_TR(0x61fa54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fa59ull));
TAIL_STATIC(0x50d180u,50d);
}
B61fa59:L61fa59:{c.instructions+=2;NFSU2_TR(0x61fa59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61fa5c:{NFSU2_TR(0x61fa5c);
{goto L61fa7b;}
}
B61fa5e:L61fa5e:{c.instructions+=2;NFSU2_TR(0x61fa5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fa5f:{NFSU2_TR(0x61fa5f);
{goto L61fa73;}
}
B61fa61:L61fa61:{c.instructions+=2;NFSU2_TR(0x61fa61);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fa63:{NFSU2_TR(0x61fa63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61fa71;}}
}
B61fa65:L61fa65:{c.instructions+=2;NFSU2_TR(0x61fa65);
u8 U[4];
w4(U+0,u32(0x4full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fa67:{NFSU2_TR(0x61fa67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fa6cull));
TAIL_STATIC(0x50d180u,50d);
}
B61fa6c:L61fa6c:{c.instructions+=2;NFSU2_TR(0x61fa6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61fa6f:{NFSU2_TR(0x61fa6f);
{goto L61fa7b;}
}
B61fa71:L61fa71:{c.instructions+=1;NFSU2_TR(0x61fa71);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fa73:L61fa73:{c.instructions+=2;NFSU2_TR(0x61fa73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61fa76:{NFSU2_TR(0x61fa76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fa7bull));
TAIL_STATIC(0x481500u,481);
}
B61fa7b:L61fa7b:{c.instructions+=4;NFSU2_TR(0x61fa7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fa7e:{NFSU2_TR(0x61fa7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fa84:{NFSU2_TR(0x61fa84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61fa86:{NFSU2_TR(0x61fa86);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f96bu);}goto L61f96b;}}
}
B61fa8c:L61fa8c:{c.instructions+=5;NFSU2_TR(0x61fa8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B61fa90:{NFSU2_TR(0x61fa90);
__builtin_memmove((R+4),(R+0),1);
}
B61fa92:{NFSU2_TR(0x61fa92);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B61fa95:{NFSU2_TR(0x61fa95);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61fa97:{NFSU2_TR(0x61fa97);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f96bu);}goto L61f96b;}}
}
B61fa9d:L61fa9d:{c.instructions+=2;NFSU2_TR(0x61fa9d);
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B61faa0:{NFSU2_TR(0x61faa0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f96bu);}goto L61f96b;}}
}
B61faa6:L61faa6:{c.instructions+=2;NFSU2_TR(0x61faa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61faa9:{NFSU2_TR(0x61faa9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f96bu);}goto L61f96b;}
}
B61faae:L61faae:{c.instructions+=2;NFSU2_TR(0x61faae);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fab1:{NFSU2_TR(0x61fab1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f96bu);}goto L61f96b;}}
}
B61fab7:L61fab7:{c.instructions+=5;NFSU2_TR(0x61fab7);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61fabb:{NFSU2_TR(0x61fabb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61fabd:{NFSU2_TR(0x61fabd);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B61fac2:{NFSU2_TR(0x61fac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61fac8:{NFSU2_TR(0x61fac8);
if(r1(R+518)){{goto L61fae5;}}
}
B61faca:L61faca:{c.instructions+=2;NFSU2_TR(0x61faca);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61facd:{NFSU2_TR(0x61facd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61fad6;}}
}
B61facf:L61facf:{c.instructions+=2;NFSU2_TR(0x61facf);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fad1:{NFSU2_TR(0x61fad1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f963u);}goto L61f963;}
}
B61fad6:L61fad6:{c.instructions+=3;NFSU2_TR(0x61fad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61fad9:{NFSU2_TR(0x61fad9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fadb:{NFSU2_TR(0x61fadb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fae0ull));
TAIL_STATIC(0x481500u,481);
}
B61fae0:L61fae0:{c.instructions+=1;NFSU2_TR(0x61fae0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f96bu);}goto L61f96b;}
}
B61fae5:L61fae5:{c.instructions+=2;NFSU2_TR(0x61fae5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fae8:{NFSU2_TR(0x61fae8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61faf9;}}
}
B61faea:L61faea:{c.instructions+=2;NFSU2_TR(0x61faea);
u8 U[4];
w4(U+0,u32(0x4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61faec:{NFSU2_TR(0x61faec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61faf1ull));
TAIL_STATIC(0x50d180u,50d);
}
B61faf1:L61faf1:{c.instructions+=2;NFSU2_TR(0x61faf1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61faf4:{NFSU2_TR(0x61faf4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f9cau);}goto L61f9ca;}
}
B61faf9:L61faf9:{c.instructions+=2;NFSU2_TR(0x61faf9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fafb:{NFSU2_TR(0x61fafb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61f9c2u);}goto L61f9c2;}
}
B61fb00:L61fb00:{c.instructions+=5;NFSU2_TR(0x61fb00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fb01:{NFSU2_TR(0x61fb01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fb07:{NFSU2_TR(0x61fb07);
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
B61fb09:{NFSU2_TR(0x61fb09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B61fb0d:{NFSU2_TR(0x61fb0d);
if(r1(R+518)){{goto L61fb9b;}}
}
B61fb13:L61fb13:{c.instructions+=5;NFSU2_TR(0x61fb13);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61fb17:{NFSU2_TR(0x61fb17);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61fb1d:{NFSU2_TR(0x61fb1d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61fb1f:{NFSU2_TR(0x61fb1f);
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
B61fb22:{NFSU2_TR(0x61fb22);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L61fb9b;}}
}
B61fb24:L61fb24:{c.instructions+=4;NFSU2_TR(0x61fb24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fb25:{NFSU2_TR(0x61fb25);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61fb29:{NFSU2_TR(0x61fb29);
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
B61fb2b:{NFSU2_TR(0x61fb2b);
if(r1(R+518)){{goto L61fb9a;}}
}
B61fb2d:L61fb2d:{c.instructions+=3;NFSU2_TR(0x61fb2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fb33:{NFSU2_TR(0x61fb33);
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
B61fb35:{NFSU2_TR(0x61fb35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61fb9a;}}
}
B61fb37:L61fb37:{c.instructions+=7;NFSU2_TR(0x61fb37);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fb38:{NFSU2_TR(0x61fb38);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fb39:{NFSU2_TR(0x61fb39);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61fb3d:{NFSU2_TR(0x61fb3d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61fb3f:{NFSU2_TR(0x61fb3f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fb42:{NFSU2_TR(0x61fb42);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fb43:{NFSU2_TR(0x61fb43);
if(r1(R+518)){{goto L61fb54;}}
}
B61fb45:L61fb45:{c.instructions+=2;NFSU2_TR(0x61fb45);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fb48:{NFSU2_TR(0x61fb48);
if(r1(R+518)){{goto L61fb54;}}
}
B61fb4a:L61fb4a:{c.instructions+=2;NFSU2_TR(0x61fb4a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fb4d:{NFSU2_TR(0x61fb4d);
if(r1(R+518)){{goto L61fb54;}}
}
B61fb4f:L61fb4f:{c.instructions+=2;NFSU2_TR(0x61fb4f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fb52:{NFSU2_TR(0x61fb52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61fb6d;}}
}
B61fb54:L61fb54:{c.instructions+=4;NFSU2_TR(0x61fb54);
__builtin_memmove((R+0),(R+20),4);
}
B61fb56:{NFSU2_TR(0x61fb56);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B61fb59:{NFSU2_TR(0x61fb59);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61fb5b:{NFSU2_TR(0x61fb5b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61fb6d;}}
}
B61fb5d:L61fb5d:{c.instructions+=2;NFSU2_TR(0x61fb5d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fb60:{NFSU2_TR(0x61fb60);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L61fb6d;}}
}
B61fb62:L61fb62:{c.instructions+=3;NFSU2_TR(0x61fb62);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B61fb65:{NFSU2_TR(0x61fb65);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61fb6b:{NFSU2_TR(0x61fb6b);
{goto L61fb76;}
}
B61fb6d:L61fb6d:{c.instructions+=2;NFSU2_TR(0x61fb6d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((R+8),(U+0),4);
}
B61fb70:{NFSU2_TR(0x61fb70);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61fb76:L61fb76:{c.instructions+=4;NFSU2_TR(0x61fb76);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61fb7a:{NFSU2_TR(0x61fb7a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x70ull))));
}
B61fb7d:{NFSU2_TR(0x61fb7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61fb7f:{NFSU2_TR(0x61fb7f);
if(r1(R+518)){{goto L61fb83;}}
}
B61fb81:L61fb81:{c.instructions+=1;NFSU2_TR(0x61fb81);
__builtin_memmove((R+4),(R+12),4);
}
B61fb83:L61fb83:{c.instructions+=10;NFSU2_TR(0x61fb83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fb84:{NFSU2_TR(0x61fb84);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61fb88:{NFSU2_TR(0x61fb88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fb89:{NFSU2_TR(0x61fb89);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fb8a:{NFSU2_TR(0x61fb8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fb8b:{NFSU2_TR(0x61fb8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fb8f:{NFSU2_TR(0x61fb8f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fb90:{NFSU2_TR(0x61fb90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fb91:{NFSU2_TR(0x61fb91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fb92:{NFSU2_TR(0x61fb92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fb97ull));
TAIL_STATIC(0x615cc0u,615);
}
B61fb97:L61fb97:{c.instructions+=3;NFSU2_TR(0x61fb97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61fb98:{NFSU2_TR(0x61fb98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61fb99:{NFSU2_TR(0x61fb99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61fb9a:L61fb9a:{c.instructions+=1;NFSU2_TR(0x61fb9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61fb9b:L61fb9b:{c.instructions+=2;NFSU2_TR(0x61fb9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61fb9c:{NFSU2_TR(0x61fb9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61fba0:L61fba0:{c.instructions+=10;NFSU2_TR(0x61fba0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fba1:{NFSU2_TR(0x61fba1);
__builtin_memmove((R+20),(R+16),4);
}
B61fba3:{NFSU2_TR(0x61fba3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B61fba6:{NFSU2_TR(0x61fba6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B61fba9:{NFSU2_TR(0x61fba9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fbaa:{NFSU2_TR(0x61fbaa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fbab:{NFSU2_TR(0x61fbab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61fbae:{NFSU2_TR(0x61fbae);
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
B61fbb0:{NFSU2_TR(0x61fbb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fbb1:{NFSU2_TR(0x61fbb1);
if(r1(R+518)){{goto L61fc0e;}}
}
B61fbb3:L61fbb3:{c.instructions+=5;NFSU2_TR(0x61fbb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61fbb6:{NFSU2_TR(0x61fbb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61fbb9:{NFSU2_TR(0x61fbb9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61fbbb:{NFSU2_TR(0x61fbbb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fbbe:{NFSU2_TR(0x61fbbe);
if(r1(R+518)){{goto L61fbcf;}}
}
B61fbc0:L61fbc0:{c.instructions+=2;NFSU2_TR(0x61fbc0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fbc3:{NFSU2_TR(0x61fbc3);
if(r1(R+518)){{goto L61fbcf;}}
}
B61fbc5:L61fbc5:{c.instructions+=2;NFSU2_TR(0x61fbc5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fbc8:{NFSU2_TR(0x61fbc8);
if(r1(R+518)){{goto L61fbcf;}}
}
B61fbca:L61fbca:{c.instructions+=2;NFSU2_TR(0x61fbca);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fbcd:{NFSU2_TR(0x61fbcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61fbd4;}}
}
B61fbcf:L61fbcf:{c.instructions+=2;NFSU2_TR(0x61fbcf);
__builtin_memmove((R+0),(R+28),4);
}
B61fbd1:{NFSU2_TR(0x61fbd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B61fbd4:L61fbd4:{c.instructions+=15;NFSU2_TR(0x61fbd4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B61fbd8:{NFSU2_TR(0x61fbd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fbd9:{NFSU2_TR(0x61fbd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x920ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61fbdf:{NFSU2_TR(0x61fbdf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fbe0:{NFSU2_TR(0x61fbe0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x910ull))));
}
B61fbe6:{NFSU2_TR(0x61fbe6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fbe7:{NFSU2_TR(0x61fbe7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fbe8:{NFSU2_TR(0x61fbe8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fbe9:{NFSU2_TR(0x61fbe9);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fbee:{NFSU2_TR(0x61fbee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fbef:{NFSU2_TR(0x61fbef);
__builtin_memmove((R+4),(R+24),4);
}
B61fbf1:{NFSU2_TR(0x61fbf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61fbf9:{NFSU2_TR(0x61fbf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61fc01:{NFSU2_TR(0x61fc01);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61fc09:{NFSU2_TR(0x61fc09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fc0eull));
TAIL_STATIC(0x615cc0u,615);
}
B61fc0e:L61fc0e:{c.instructions+=6;NFSU2_TR(0x61fc0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61fc0f:{NFSU2_TR(0x61fc0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61fc10:{NFSU2_TR(0x61fc10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61fc11:{NFSU2_TR(0x61fc11);
__builtin_memmove((R+16),(R+20),4);
}
B61fc13:{NFSU2_TR(0x61fc13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61fc14:{NFSU2_TR(0x61fc14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61fc20:L61fc20:{c.instructions+=5;NFSU2_TR(0x61fc20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B61fc23:{NFSU2_TR(0x61fc23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fc24:{NFSU2_TR(0x61fc24);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61fc28:{NFSU2_TR(0x61fc28);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61fc2a:{NFSU2_TR(0x61fc2a);
if(r1(R+518)){{goto L61fddb;}}
}
B61fc30:L61fc30:{c.instructions+=2;NFSU2_TR(0x61fc30);
u8 U[4];
w4(U+0,u32(0x798534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fc35:{NFSU2_TR(0x61fc35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fc3aull));
TAIL_STATIC(0x43db50u,43d);
}
B61fc3a:L61fc3a:{c.instructions+=5;NFSU2_TR(0x61fc3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61fc3d:{NFSU2_TR(0x61fc3d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fc3f:{NFSU2_TR(0x61fc3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fc40:{NFSU2_TR(0x61fc40);
__builtin_memmove((R+4),(R+24),4);
}
B61fc42:{NFSU2_TR(0x61fc42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fc47ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61fc47:L61fc47:{c.instructions+=2;NFSU2_TR(0x61fc47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61fc49:{NFSU2_TR(0x61fc49);
if(r1(R+518)){{goto L61fc50;}}
}
B61fc4b:L61fc4b:{c.instructions+=2;NFSU2_TR(0x61fc4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fc4e:{NFSU2_TR(0x61fc4e);
{goto L61fc52;}
}
B61fc50:L61fc50:{c.instructions+=1;NFSU2_TR(0x61fc50);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61fc52:L61fc52:{c.instructions+=4;NFSU2_TR(0x61fc52);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B61fc57:{NFSU2_TR(0x61fc57);
u8 U[4];
w4(U+0,u32(0x798524ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fc5c:{NFSU2_TR(0x61fc5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fc60:{NFSU2_TR(0x61fc60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fc65ull));
TAIL_STATIC(0x43db50u,43d);
}
B61fc65:L61fc65:{c.instructions+=5;NFSU2_TR(0x61fc65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61fc68:{NFSU2_TR(0x61fc68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fc6a:{NFSU2_TR(0x61fc6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fc6b:{NFSU2_TR(0x61fc6b);
__builtin_memmove((R+4),(R+24),4);
}
B61fc6d:{NFSU2_TR(0x61fc6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fc72ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61fc72:L61fc72:{c.instructions+=2;NFSU2_TR(0x61fc72);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61fc74:{NFSU2_TR(0x61fc74);
if(r1(R+518)){{goto L61fc7b;}}
}
B61fc76:L61fc76:{c.instructions+=2;NFSU2_TR(0x61fc76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fc79:{NFSU2_TR(0x61fc79);
{goto L61fc7d;}
}
B61fc7b:L61fc7b:{c.instructions+=1;NFSU2_TR(0x61fc7b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61fc7d:L61fc7d:{c.instructions+=4;NFSU2_TR(0x61fc7d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B61fc82:{NFSU2_TR(0x61fc82);
u8 U[4];
w4(U+0,u32(0x79852cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fc87:{NFSU2_TR(0x61fc87);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fc8b:{NFSU2_TR(0x61fc8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fc90ull));
TAIL_STATIC(0x43db50u,43d);
}
B61fc90:L61fc90:{c.instructions+=5;NFSU2_TR(0x61fc90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61fc93:{NFSU2_TR(0x61fc93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fc95:{NFSU2_TR(0x61fc95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fc96:{NFSU2_TR(0x61fc96);
__builtin_memmove((R+4),(R+24),4);
}
B61fc98:{NFSU2_TR(0x61fc98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fc9dull));
TAIL_STATIC(0x60fef0u,60f);
}
B61fc9d:L61fc9d:{c.instructions+=2;NFSU2_TR(0x61fc9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61fc9f:{NFSU2_TR(0x61fc9f);
if(r1(R+518)){{goto L61fca6;}}
}
B61fca1:L61fca1:{c.instructions+=2;NFSU2_TR(0x61fca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fca4:{NFSU2_TR(0x61fca4);
{goto L61fca8;}
}
B61fca6:L61fca6:{c.instructions+=1;NFSU2_TR(0x61fca6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61fca8:L61fca8:{c.instructions+=4;NFSU2_TR(0x61fca8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B61fcad:{NFSU2_TR(0x61fcad);
u8 U[4];
w4(U+0,u32(0x7a87acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fcb2:{NFSU2_TR(0x61fcb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fcb6:{NFSU2_TR(0x61fcb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fcbbull));
TAIL_STATIC(0x43db50u,43d);
}
B61fcbb:L61fcbb:{c.instructions+=5;NFSU2_TR(0x61fcbb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61fcbe:{NFSU2_TR(0x61fcbe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fcc0:{NFSU2_TR(0x61fcc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fcc1:{NFSU2_TR(0x61fcc1);
__builtin_memmove((R+4),(R+24),4);
}
B61fcc3:{NFSU2_TR(0x61fcc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fcc8ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61fcc8:L61fcc8:{c.instructions+=2;NFSU2_TR(0x61fcc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61fcca:{NFSU2_TR(0x61fcca);
if(r1(R+518)){{goto L61fcd1;}}
}
B61fccc:L61fccc:{c.instructions+=2;NFSU2_TR(0x61fccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fccf:{NFSU2_TR(0x61fccf);
{goto L61fcd3;}
}
B61fcd1:L61fcd1:{c.instructions+=1;NFSU2_TR(0x61fcd1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61fcd3:L61fcd3:{c.instructions+=4;NFSU2_TR(0x61fcd3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B61fcd8:{NFSU2_TR(0x61fcd8);
u8 U[4];
w4(U+0,u32(0x7a87a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fcdd:{NFSU2_TR(0x61fcdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fce1:{NFSU2_TR(0x61fce1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fce6ull));
TAIL_STATIC(0x43db50u,43d);
}
B61fce6:L61fce6:{c.instructions+=5;NFSU2_TR(0x61fce6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61fce9:{NFSU2_TR(0x61fce9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fceb:{NFSU2_TR(0x61fceb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fcec:{NFSU2_TR(0x61fcec);
__builtin_memmove((R+4),(R+24),4);
}
B61fcee:{NFSU2_TR(0x61fcee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fcf3ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61fcf3:L61fcf3:{c.instructions+=2;NFSU2_TR(0x61fcf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61fcf5:{NFSU2_TR(0x61fcf5);
if(r1(R+518)){{goto L61fcfc;}}
}
B61fcf7:L61fcf7:{c.instructions+=2;NFSU2_TR(0x61fcf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fcfa:{NFSU2_TR(0x61fcfa);
{goto L61fcfe;}
}
B61fcfc:L61fcfc:{c.instructions+=1;NFSU2_TR(0x61fcfc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61fcfe:L61fcfe:{c.instructions+=4;NFSU2_TR(0x61fcfe);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B61fd03:{NFSU2_TR(0x61fd03);
u8 U[4];
w4(U+0,u32(0x7a879cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fd08:{NFSU2_TR(0x61fd08);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fd0c:{NFSU2_TR(0x61fd0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fd11ull));
TAIL_STATIC(0x43db50u,43d);
}
B61fd11:L61fd11:{c.instructions+=5;NFSU2_TR(0x61fd11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61fd14:{NFSU2_TR(0x61fd14);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fd16:{NFSU2_TR(0x61fd16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fd17:{NFSU2_TR(0x61fd17);
__builtin_memmove((R+4),(R+24),4);
}
B61fd19:{NFSU2_TR(0x61fd19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fd1eull));
TAIL_STATIC(0x60fef0u,60f);
}
B61fd1e:L61fd1e:{c.instructions+=2;NFSU2_TR(0x61fd1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61fd20:{NFSU2_TR(0x61fd20);
if(r1(R+518)){{goto L61fd27;}}
}
B61fd22:L61fd22:{c.instructions+=2;NFSU2_TR(0x61fd22);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fd25:{NFSU2_TR(0x61fd25);
{goto L61fd29;}
}
B61fd27:L61fd27:{c.instructions+=1;NFSU2_TR(0x61fd27);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61fd29:L61fd29:{c.instructions+=5;NFSU2_TR(0x61fd29);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fd2a:{NFSU2_TR(0x61fd2a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B61fd2f:{NFSU2_TR(0x61fd2f);
u8 U[4];
w4(U+0,u32(0x7a8794ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fd34:{NFSU2_TR(0x61fd34);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fd38:{NFSU2_TR(0x61fd38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fd3dull));
TAIL_STATIC(0x43db50u,43d);
}
B61fd3d:L61fd3d:{c.instructions+=5;NFSU2_TR(0x61fd3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61fd40:{NFSU2_TR(0x61fd40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fd42:{NFSU2_TR(0x61fd42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fd43:{NFSU2_TR(0x61fd43);
__builtin_memmove((R+4),(R+24),4);
}
B61fd45:{NFSU2_TR(0x61fd45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fd4aull));
TAIL_STATIC(0x60fef0u,60f);
}
B61fd4a:L61fd4a:{c.instructions+=2;NFSU2_TR(0x61fd4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61fd4c:{NFSU2_TR(0x61fd4c);
if(r1(R+518)){{goto L61fd53;}}
}
B61fd4e:L61fd4e:{c.instructions+=2;NFSU2_TR(0x61fd4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61fd51:{NFSU2_TR(0x61fd51);
{goto L61fd55;}
}
B61fd53:L61fd53:{c.instructions+=1;NFSU2_TR(0x61fd53);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B61fd55:L61fd55:{c.instructions+=3;NFSU2_TR(0x61fd55);
u8 U[4];
w4(U+0,u32(0x7a878cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fd5a:{NFSU2_TR(0x61fd5a);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xffull))));
}
B61fd60:{NFSU2_TR(0x61fd60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fd65ull));
TAIL_STATIC(0x43db50u,43d);
}
B61fd65:L61fd65:{c.instructions+=5;NFSU2_TR(0x61fd65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61fd68:{NFSU2_TR(0x61fd68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fd6a:{NFSU2_TR(0x61fd6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fd6b:{NFSU2_TR(0x61fd6b);
__builtin_memmove((R+4),(R+24),4);
}
B61fd6d:{NFSU2_TR(0x61fd6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fd72ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61fd72:L61fd72:{c.instructions+=2;NFSU2_TR(0x61fd72);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61fd74:{NFSU2_TR(0x61fd74);
if(r1(R+518)){{goto L61fd7f;}}
}
B61fd76:L61fd76:{c.instructions+=3;NFSU2_TR(0x61fd76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fd79:{NFSU2_TR(0x61fd79);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fd7d:{NFSU2_TR(0x61fd7d);
{goto L61fd87;}
}
B61fd7f:L61fd7f:{c.instructions+=1;NFSU2_TR(0x61fd7f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61fd87:L61fd87:{c.instructions+=27;NFSU2_TR(0x61fd87);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fd8b:{NFSU2_TR(0x61fd8b);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B61fd8f:{NFSU2_TR(0x61fd8f);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B61fd93:{NFSU2_TR(0x61fd93);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61fd96:{NFSU2_TR(0x61fd96);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B61fd9a:{NFSU2_TR(0x61fd9a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61fd9d:{NFSU2_TR(0x61fd9d);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B61fda1:{NFSU2_TR(0x61fda1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61fda4:{NFSU2_TR(0x61fda4);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B61fda8:{NFSU2_TR(0x61fda8);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B61fdaa:{NFSU2_TR(0x61fdaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fdae:{NFSU2_TR(0x61fdae);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B61fdb0:{NFSU2_TR(0x61fdb0);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B61fdb4:{NFSU2_TR(0x61fdb4);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B61fdb6:{NFSU2_TR(0x61fdb6);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B61fdba:{NFSU2_TR(0x61fdba);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B61fdbc:{NFSU2_TR(0x61fdbc);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B61fdc0:{NFSU2_TR(0x61fdc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61fdc3:{NFSU2_TR(0x61fdc3);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+12,u8(u32(r1(R+12))-u32(r1(U+4))));
}
B61fdc7:{NFSU2_TR(0x61fdc7);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B61fdcb:{NFSU2_TR(0x61fdcb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61fdce:{NFSU2_TR(0x61fdce);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B61fdd0:{NFSU2_TR(0x61fdd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61fdd1:{NFSU2_TR(0x61fdd1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61fdd4:{NFSU2_TR(0x61fdd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61fdd5:{NFSU2_TR(0x61fdd5);
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
B61fdd8:{NFSU2_TR(0x61fdd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61fddb:L61fddb:{c.instructions+=13;NFSU2_TR(0x61fddb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fddf:{NFSU2_TR(0x61fddf);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B61fde2:{NFSU2_TR(0x61fde2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61fde6:{NFSU2_TR(0x61fde6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61fdea:{NFSU2_TR(0x61fdea);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61fdee:{NFSU2_TR(0x61fdee);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fdf2:{NFSU2_TR(0x61fdf2);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B61fdf5:{NFSU2_TR(0x61fdf5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61fdf9:{NFSU2_TR(0x61fdf9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61fdfd:{NFSU2_TR(0x61fdfd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61fe01:{NFSU2_TR(0x61fe01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61fe02:{NFSU2_TR(0x61fe02);
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
B61fe05:{NFSU2_TR(0x61fe05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61fe10:L61fe10:{c.instructions+=9;NFSU2_TR(0x61fe10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B61fe13:{NFSU2_TR(0x61fe13);
__builtin_memmove((R+8),(R+4),4);
}
B61fe15:{NFSU2_TR(0x61fe15);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fe18:{NFSU2_TR(0x61fe18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fe19:{NFSU2_TR(0x61fe19);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B61fe1b:{NFSU2_TR(0x61fe1b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fe1d:{NFSU2_TR(0x61fe1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fe1e:{NFSU2_TR(0x61fe1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fe22:{NFSU2_TR(0x61fe22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61fe39;}}
}
B61fe24:L61fe24:{c.instructions+=3;NFSU2_TR(0x61fe24);
w4(R+4,u32(0x8ull));
}
B61fe29:{NFSU2_TR(0x61fe29);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61fe2b:{NFSU2_TR(0x61fe2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x400ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61fe31:L61fe31:{c.instructions+=1;NFSU2_TR(0x61fe31);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L61fe33;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61fe31u);}goto L61fe31;}
}
B61fe33:L61fe33:{c.instructions+=4;NFSU2_TR(0x61fe33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61fe34:{NFSU2_TR(0x61fe34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61fe35:{NFSU2_TR(0x61fe35);
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
B61fe38:{NFSU2_TR(0x61fe38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61fe39:L61fe39:{c.instructions+=3;NFSU2_TR(0x61fe39);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fe3c:{NFSU2_TR(0x61fe3c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fe3e:{NFSU2_TR(0x61fe3e);
if(r1(R+518)){{goto L61fe4c;}}
}
B61fe40:L61fe40:{c.instructions+=3;NFSU2_TR(0x61fe40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x604ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61fe46:{NFSU2_TR(0x61fe46);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fe4a:{NFSU2_TR(0x61fe4a);
{goto L61fe52;}
}
B61fe4c:L61fe4c:{c.instructions+=2;NFSU2_TR(0x61fe4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fe50:{NFSU2_TR(0x61fe50);
__builtin_memmove((R+4),(R+24),4);
}
B61fe52:L61fe52:{c.instructions+=2;NFSU2_TR(0x61fe52);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fe54:{NFSU2_TR(0x61fe54);
if(r1(R+518)){{goto L61fe5e;}}
}
B61fe56:L61fe56:{c.instructions+=2;NFSU2_TR(0x61fe56);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x608ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61fe5c:{NFSU2_TR(0x61fe5c);
{goto L61fe60;}
}
B61fe5e:L61fe5e:{c.instructions+=1;NFSU2_TR(0x61fe5e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61fe60:L61fe60:{c.instructions+=4;NFSU2_TR(0x61fe60);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fe62:{NFSU2_TR(0x61fe62);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fe63:{NFSU2_TR(0x61fe63);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fe64:{NFSU2_TR(0x61fe64);
if(r1(R+518)){{goto L61fe77;}}
}
B61fe66:L61fe66:{c.instructions+=6;NFSU2_TR(0x61fe66);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B61fe69:{NFSU2_TR(0x61fe69);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+12,shr<u8>(r1(R+12),u64(r4(U+0))));
}
B61fe6c:{NFSU2_TR(0x61fe6c);
w4(R+24,u32(s32(s8(r1(R+12)))));
}
B61fe6f:{NFSU2_TR(0x61fe6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fe73:{NFSU2_TR(0x61fe73);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B61fe75:{NFSU2_TR(0x61fe75);
{goto L61fe7b;}
}
B61fe77:L61fe77:{c.instructions+=1;NFSU2_TR(0x61fe77);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fe7b:L61fe7b:{c.instructions+=2;NFSU2_TR(0x61fe7b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61fe7d:{NFSU2_TR(0x61fe7d);
if(r1(R+518)){{goto L61fe8e;}}
}
B61fe7f:L61fe7f:{c.instructions+=5;NFSU2_TR(0x61fe7f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61fe82:{NFSU2_TR(0x61fe82);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B61fe85:{NFSU2_TR(0x61fe85);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B61fe88:{NFSU2_TR(0x61fe88);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fe8c:{NFSU2_TR(0x61fe8c);
{goto L61fe92;}
}
B61fe8e:L61fe8e:{c.instructions+=1;NFSU2_TR(0x61fe8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fe92:L61fe92:{c.instructions+=6;NFSU2_TR(0x61fe92);
__builtin_memmove((R+0),gp(0x8026c4),4);
}
B61fe97:{NFSU2_TR(0x61fe97);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fe9b:{NFSU2_TR(0x61fe9b);
w4(R+28,u32(0x120ull));
}
B61fea0:{NFSU2_TR(0x61fea0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x420ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61fea6:{NFSU2_TR(0x61fea6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x404ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61feac:{NFSU2_TR(0x61feac);
__builtin_memmove((R+16),(R+16),4);
}
B61feb0:L61feb0:{c.instructions+=10;NFSU2_TR(0x61feb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61feb3:{NFSU2_TR(0x61feb3);
{u32 ea_=u32(r4(R+28)+r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61feb7:{NFSU2_TR(0x61feb7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B61feb9:{NFSU2_TR(0x61feb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61febb:{NFSU2_TR(0x61febb);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B61febd:{NFSU2_TR(0x61febd);
{u32 ea_=u32(r4(R+12)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61fec0:{NFSU2_TR(0x61fec0);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61fec3:{NFSU2_TR(0x61fec3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B61fec5:{NFSU2_TR(0x61fec5);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61fec7:{NFSU2_TR(0x61fec7);
if(r1(R+518)){{goto L61feff;}}
}
B61fec9:L61fec9:{c.instructions+=2;NFSU2_TR(0x61fec9);
u8 U[4];
w4(U+0,u32(0x7a87b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fece:{NFSU2_TR(0x61fece);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fed3ull));
TAIL_STATIC(0x43db50u,43d);
}
B61fed3:L61fed3:{c.instructions+=5;NFSU2_TR(0x61fed3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61fed7:{NFSU2_TR(0x61fed7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61feda:{NFSU2_TR(0x61feda);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fedc:{NFSU2_TR(0x61fedc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61fedd:{NFSU2_TR(0x61fedd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61fee2ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61fee2:L61fee2:{c.instructions+=2;NFSU2_TR(0x61fee2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61fee4:{NFSU2_TR(0x61fee4);
if(r1(R+518)){{goto L61feeb;}}
}
B61fee6:L61fee6:{c.instructions+=2;NFSU2_TR(0x61fee6);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61fee9:{NFSU2_TR(0x61fee9);
{goto L61fef1;}
}
B61feeb:L61feeb:{c.instructions+=1;NFSU2_TR(0x61feeb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61fef1:L61fef1:{c.instructions+=4;NFSU2_TR(0x61fef1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61fef5:{NFSU2_TR(0x61fef5);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61fef8:{NFSU2_TR(0x61fef8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61fefc:{NFSU2_TR(0x61fefc);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61feff:L61feff:{c.instructions+=3;NFSU2_TR(0x61feff);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x180ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x180ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61ff05:{NFSU2_TR(0x61ff05);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ff09:{NFSU2_TR(0x61ff09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L61ff0f;}}
}
B61ff0b:L61ff0b:{c.instructions+=1;NFSU2_TR(0x61ff0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ff0f:L61ff0f:{c.instructions+=2;NFSU2_TR(0x61ff0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61ff11:{NFSU2_TR(0x61ff11);
if(r1(R+518)){{goto L61ff18;}}
}
B61ff13:L61ff13:{c.instructions+=2;NFSU2_TR(0x61ff13);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ff16:{NFSU2_TR(0x61ff16);
{goto L61ff1c;}
}
B61ff18:L61ff18:{c.instructions+=1;NFSU2_TR(0x61ff18);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ff1c:L61ff1c:{c.instructions+=6;NFSU2_TR(0x61ff1c);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ff1f:{NFSU2_TR(0x61ff1f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x30ull))));
}
B61ff22:{NFSU2_TR(0x61ff22);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B61ff25:{NFSU2_TR(0x61ff25);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B61ff28:{NFSU2_TR(0x61ff28);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1e0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1e0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61ff2e:{NFSU2_TR(0x61ff2e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61feb0u);}goto L61feb0;}}
}
B61ff30:L61ff30:{c.instructions+=6;NFSU2_TR(0x61ff30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61ff31:{NFSU2_TR(0x61ff31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61ff32:{NFSU2_TR(0x61ff32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61ff33:{NFSU2_TR(0x61ff33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61ff34:{NFSU2_TR(0x61ff34);
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
B61ff37:{NFSU2_TR(0x61ff37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61ff40:L61ff40:{c.instructions+=9;NFSU2_TR(0x61ff40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xccull))));
}
B61ff46:{NFSU2_TR(0x61ff46);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ff47:{NFSU2_TR(0x61ff47);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ff48:{NFSU2_TR(0x61ff48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ff49:{NFSU2_TR(0x61ff49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ff4a:{NFSU2_TR(0x61ff4a);
__builtin_memmove((R+12),(R+4),4);
}
B61ff4c:{NFSU2_TR(0x61ff4c);
u8 U[4];
w4(U+0,u32(0x7a45f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ff51:{NFSU2_TR(0x61ff51);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ff55:{NFSU2_TR(0x61ff55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ff5aull));
TAIL_STATIC(0x43db50u,43d);
}
B61ff5a:L61ff5a:{c.instructions+=10;NFSU2_TR(0x61ff5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61ff5d:{NFSU2_TR(0x61ff5d);
__builtin_memmove((R+24),(R+0),4);
}
B61ff5f:{NFSU2_TR(0x61ff5f);
w4(R+4,u32(0x8a435cull));
}
B61ff64:{NFSU2_TR(0x61ff64);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x91cull))));
__builtin_memmove((R+0),(U+0),4);
}
B61ff6a:{NFSU2_TR(0x61ff6a);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B61ff6d:{NFSU2_TR(0x61ff6d);
__builtin_memmove((R+4),(R+4),4);
}
B61ff70:{NFSU2_TR(0x61ff70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ff73:{NFSU2_TR(0x61ff73);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ff76:{NFSU2_TR(0x61ff76);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B61ff78:{NFSU2_TR(0x61ff78);
if(r1(R+518)){{goto L61ff7f;}}
}
B61ff7a:L61ff7a:{c.instructions+=2;NFSU2_TR(0x61ff7a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B61ff7c:{NFSU2_TR(0x61ff7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ff7f:L61ff7f:{c.instructions+=4;NFSU2_TR(0x61ff7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61ff81:{NFSU2_TR(0x61ff81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ff84:{NFSU2_TR(0x61ff84);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61ff87:{NFSU2_TR(0x61ff87);
if(r1(R+518)){{goto L61ff8f;}}
}
B61ff89:L61ff89:{c.instructions+=2;NFSU2_TR(0x61ff89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ff8c:{NFSU2_TR(0x61ff8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ff8f:L61ff8f:{c.instructions+=4;NFSU2_TR(0x61ff8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ff92:{NFSU2_TR(0x61ff92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ff95:{NFSU2_TR(0x61ff95);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61ff98:{NFSU2_TR(0x61ff98);
if(r1(R+518)){{goto L61ffa0;}}
}
B61ff9a:L61ff9a:{c.instructions+=2;NFSU2_TR(0x61ff9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ff9d:{NFSU2_TR(0x61ff9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ffa0:L61ffa0:{c.instructions+=4;NFSU2_TR(0x61ffa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ffa3:{NFSU2_TR(0x61ffa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ffa6:{NFSU2_TR(0x61ffa6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61ffa9:{NFSU2_TR(0x61ffa9);
if(r1(R+518)){{goto L61ffb1;}}
}
B61ffab:L61ffab:{c.instructions+=2;NFSU2_TR(0x61ffab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ffae:{NFSU2_TR(0x61ffae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ffb1:L61ffb1:{c.instructions+=4;NFSU2_TR(0x61ffb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ffb4:{NFSU2_TR(0x61ffb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ffb7:{NFSU2_TR(0x61ffb7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61ffba:{NFSU2_TR(0x61ffba);
if(r1(R+518)){{goto L61ffc2;}}
}
B61ffbc:L61ffbc:{c.instructions+=2;NFSU2_TR(0x61ffbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ffbf:{NFSU2_TR(0x61ffbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ffc2:L61ffc2:{c.instructions+=4;NFSU2_TR(0x61ffc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ffc5:{NFSU2_TR(0x61ffc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ffc8:{NFSU2_TR(0x61ffc8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61ffcb:{NFSU2_TR(0x61ffcb);
if(r1(R+518)){{goto L61ffd3;}}
}
B61ffcd:L61ffcd:{c.instructions+=2;NFSU2_TR(0x61ffcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ffd0:{NFSU2_TR(0x61ffd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ffd3:L61ffd3:{c.instructions+=4;NFSU2_TR(0x61ffd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ffd6:{NFSU2_TR(0x61ffd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ffd9:{NFSU2_TR(0x61ffd9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61ffdc:{NFSU2_TR(0x61ffdc);
if(r1(R+518)){{goto L61ffe4;}}
}
B61ffde:L61ffde:{c.instructions+=2;NFSU2_TR(0x61ffde);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ffe1:{NFSU2_TR(0x61ffe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ffe4:L61ffe4:{c.instructions+=4;NFSU2_TR(0x61ffe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ffe7:{NFSU2_TR(0x61ffe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ffea:{NFSU2_TR(0x61ffea);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61ffed:{NFSU2_TR(0x61ffed);
if(r1(R+518)){{goto L61fff5;}}
}
B61ffef:L61ffef:{c.instructions+=2;NFSU2_TR(0x61ffef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fff2:{NFSU2_TR(0x61fff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fff5:L61fff5:{c.instructions+=3;NFSU2_TR(0x61fff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61fff8:{NFSU2_TR(0x61fff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61fffb:{NFSU2_TR(0x61fffb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
TAIL_STATIC(0x620001u,620);
}
XIT:NFSU2_TR_EXIT(0x61f,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
