#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_674(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_677(u8* __restrict R,Cpu& c);
u32 body_678(u8* __restrict R,Cpu& c);
u32 body_67a(u8* __restrict R,Cpu& c);
u32 body_67b(u8* __restrict R,Cpu& c);
u32 body_67c(u8* __restrict R,Cpu& c);
u32 body_67f(u8* __restrict R,Cpu& c);
u32 body_680(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x67e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x67e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_67e(u8* __restrict R,Cpu& c);
u32 page_67e(Cpu& c){return body_67e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_67e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x67e002:goto L67e002;
case 0x67e007:goto L67e007;
case 0x67e009:c.instructions+=2;goto B67e009;
case 0x67e00b:c.instructions+=1;goto B67e00b;
case 0x67e011:goto L67e011;
case 0x67e013:c.instructions+=7;goto B67e013;
case 0x67e019:c.instructions+=6;goto B67e019;
case 0x67e01b:c.instructions+=5;goto B67e01b;
case 0x67e021:c.instructions+=4;goto B67e021;
case 0x67e027:c.instructions+=3;goto B67e027;
case 0x67e02a:c.instructions+=2;goto B67e02a;
case 0x67e02d:c.instructions+=1;goto B67e02d;
case 0x67e032:goto L67e032;
case 0x67e034:c.instructions+=2;goto B67e034;
case 0x67e036:c.instructions+=1;goto B67e036;
case 0x67e03c:goto L67e03c;
case 0x67e03f:c.instructions+=9;goto B67e03f;
case 0x67e041:c.instructions+=8;goto B67e041;
case 0x67e047:c.instructions+=7;goto B67e047;
case 0x67e04c:c.instructions+=6;goto B67e04c;
case 0x67e052:c.instructions+=5;goto B67e052;
case 0x67e054:c.instructions+=4;goto B67e054;
case 0x67e05a:c.instructions+=3;goto B67e05a;
case 0x67e05b:c.instructions+=2;goto B67e05b;
case 0x67e05e:c.instructions+=1;goto B67e05e;
case 0x67e063:goto L67e063;
case 0x67e065:c.instructions+=2;goto B67e065;
case 0x67e067:c.instructions+=1;goto B67e067;
case 0x67e06d:goto L67e06d;
case 0x67e06f:c.instructions+=7;goto B67e06f;
case 0x67e075:c.instructions+=6;goto B67e075;
case 0x67e077:c.instructions+=5;goto B67e077;
case 0x67e07d:c.instructions+=4;goto B67e07d;
case 0x67e080:c.instructions+=3;goto B67e080;
case 0x67e083:c.instructions+=2;goto B67e083;
case 0x67e086:c.instructions+=1;goto B67e086;
case 0x67e08b:goto L67e08b;
case 0x67e08d:c.instructions+=2;goto B67e08d;
case 0x67e08f:c.instructions+=1;goto B67e08f;
case 0x67e095:goto L67e095;
case 0x67e098:c.instructions+=1;goto B67e098;
case 0x67e09e:goto L67e09e;
case 0x67e0a1:c.instructions+=3;goto B67e0a1;
case 0x67e0a3:c.instructions+=2;goto B67e0a3;
case 0x67e0a6:c.instructions+=1;goto B67e0a6;
case 0x67e0ab:goto L67e0ab;
case 0x67e0ad:c.instructions+=2;goto B67e0ad;
case 0x67e0af:c.instructions+=1;goto B67e0af;
case 0x67e0b5:goto L67e0b5;
case 0x67e0b8:c.instructions+=3;goto B67e0b8;
case 0x67e0ba:c.instructions+=2;goto B67e0ba;
case 0x67e0bd:c.instructions+=1;goto B67e0bd;
case 0x67e0c2:goto L67e0c2;
case 0x67e0c4:c.instructions+=2;goto B67e0c4;
case 0x67e0c6:c.instructions+=1;goto B67e0c6;
case 0x67e0cc:goto L67e0cc;
case 0x67e0ce:c.instructions+=7;goto B67e0ce;
case 0x67e0cf:c.instructions+=6;goto B67e0cf;
case 0x67e0d2:c.instructions+=5;goto B67e0d2;
case 0x67e0d4:c.instructions+=4;goto B67e0d4;
case 0x67e0d7:c.instructions+=3;goto B67e0d7;
case 0x67e0da:c.instructions+=2;goto B67e0da;
case 0x67e0dd:c.instructions+=1;goto B67e0dd;
case 0x67e0e2:goto L67e0e2;
case 0x67e0e4:c.instructions+=2;goto B67e0e4;
case 0x67e0e6:c.instructions+=1;goto B67e0e6;
case 0x67e0ec:goto L67e0ec;
case 0x67e0ee:c.instructions+=2;goto B67e0ee;
case 0x67e0f1:c.instructions+=1;goto B67e0f1;
case 0x67e0f6:goto L67e0f6;
case 0x67e0f8:c.instructions+=2;goto B67e0f8;
case 0x67e0fb:c.instructions+=1;goto B67e0fb;
case 0x67e101:goto L67e101;
case 0x67e104:c.instructions+=1;goto B67e104;
case 0x67e10a:goto L67e10a;
case 0x67e10d:c.instructions+=1;goto B67e10d;
case 0x67e113:goto L67e113;
case 0x67e116:c.instructions+=2;goto B67e116;
case 0x67e118:c.instructions+=1;goto B67e118;
case 0x67e11d:goto L67e11d;
case 0x67e11f:c.instructions+=2;goto B67e11f;
case 0x67e121:c.instructions+=1;goto B67e121;
case 0x67e127:goto L67e127;
case 0x67e129:c.instructions+=2;goto B67e129;
case 0x67e12c:c.instructions+=1;goto B67e12c;
case 0x67e12e:goto L67e12e;
case 0x67e131:c.instructions+=5;goto B67e131;
case 0x67e133:c.instructions+=4;goto B67e133;
case 0x67e136:c.instructions+=3;goto B67e136;
case 0x67e137:c.instructions+=2;goto B67e137;
case 0x67e13a:c.instructions+=1;goto B67e13a;
case 0x67e13c:goto L67e13c;
case 0x67e13f:c.instructions+=3;goto B67e13f;
case 0x67e141:c.instructions+=2;goto B67e141;
case 0x67e144:c.instructions+=1;goto B67e144;
case 0x67e149:goto L67e149;
case 0x67e14b:c.instructions+=2;goto B67e14b;
case 0x67e14d:c.instructions+=1;goto B67e14d;
case 0x67e153:goto L67e153;
case 0x67e154:c.instructions+=3;goto B67e154;
case 0x67e157:c.instructions+=2;goto B67e157;
case 0x67e158:c.instructions+=1;goto B67e158;
case 0x67e15d:goto L67e15d;
case 0x67e15f:c.instructions+=2;goto B67e15f;
case 0x67e162:c.instructions+=1;goto B67e162;
case 0x67e168:goto L67e168;
case 0x67e16b:c.instructions+=1;goto B67e16b;
case 0x67e171:goto L67e171;
case 0x67e174:c.instructions+=1;goto B67e174;
case 0x67e17a:goto L67e17a;
case 0x67e17d:c.instructions+=2;goto B67e17d;
case 0x67e17f:c.instructions+=1;goto B67e17f;
case 0x67e184:goto L67e184;
case 0x67e186:c.instructions+=2;goto B67e186;
case 0x67e188:c.instructions+=1;goto B67e188;
case 0x67e18e:goto L67e18e;
case 0x67e190:c.instructions+=2;goto B67e190;
case 0x67e193:c.instructions+=1;goto B67e193;
case 0x67e199:goto L67e199;
case 0x67e19c:c.instructions+=5;goto B67e19c;
case 0x67e19e:c.instructions+=4;goto B67e19e;
case 0x67e1a1:c.instructions+=3;goto B67e1a1;
case 0x67e1a2:c.instructions+=2;goto B67e1a2;
case 0x67e1a5:c.instructions+=1;goto B67e1a5;
case 0x67e1a7:goto L67e1a7;
case 0x67e1ac:goto L67e1ac;
case 0x67e1af:c.instructions+=3;goto B67e1af;
case 0x67e1b1:c.instructions+=2;goto B67e1b1;
case 0x67e1b3:c.instructions+=1;goto B67e1b3;
case 0x67e1b9:goto L67e1b9;
case 0x67e1bc:c.instructions+=1;goto B67e1bc;
case 0x67e1c2:goto L67e1c2;
case 0x67e1c5:c.instructions+=1;goto B67e1c5;
case 0x67e1cb:goto L67e1cb;
case 0x67e1ce:c.instructions+=3;goto B67e1ce;
case 0x67e1d0:c.instructions+=2;goto B67e1d0;
case 0x67e1d3:c.instructions+=1;goto B67e1d3;
case 0x67e1d9:goto L67e1d9;
case 0x67e1dd:c.instructions+=1;goto B67e1dd;
case 0x67e1e3:goto L67e1e3;
case 0x67e1e7:c.instructions+=1;goto B67e1e7;
case 0x67e1e9:goto L67e1e9;
case 0x67e1ef:c.instructions+=3;goto B67e1ef;
case 0x67e1f2:c.instructions+=2;goto B67e1f2;
case 0x67e1f3:c.instructions+=1;goto B67e1f3;
case 0x67e1f5:goto L67e1f5;
case 0x67e1f8:c.instructions+=7;goto B67e1f8;
case 0x67e1fd:c.instructions+=6;goto B67e1fd;
case 0x67e200:c.instructions+=5;goto B67e200;
case 0x67e206:c.instructions+=4;goto B67e206;
case 0x67e209:c.instructions+=3;goto B67e209;
case 0x67e20c:c.instructions+=2;goto B67e20c;
case 0x67e20e:c.instructions+=1;goto B67e20e;
case 0x67e213:goto L67e213;
case 0x67e219:c.instructions+=3;goto B67e219;
case 0x67e21f:c.instructions+=2;goto B67e21f;
case 0x67e222:c.instructions+=1;goto B67e222;
case 0x67e223:goto L67e223;
case 0x67e225:c.instructions+=1;goto B67e225;
case 0x67e22a:goto L67e22a;
case 0x67e22c:c.instructions+=2;goto B67e22c;
case 0x67e22e:c.instructions+=1;goto B67e22e;
case 0x67e234:goto L67e234;
case 0x67e237:c.instructions+=9;goto B67e237;
case 0x67e23a:c.instructions+=8;goto B67e23a;
case 0x67e23d:c.instructions+=7;goto B67e23d;
case 0x67e240:c.instructions+=6;goto B67e240;
case 0x67e243:c.instructions+=5;goto B67e243;
case 0x67e246:c.instructions+=4;goto B67e246;
case 0x67e248:c.instructions+=3;goto B67e248;
case 0x67e24b:c.instructions+=2;goto B67e24b;
case 0x67e24e:c.instructions+=1;goto B67e24e;
case 0x67e254:goto L67e254;
case 0x67e258:c.instructions+=1;goto B67e258;
case 0x67e25e:goto L67e25e;
case 0x67e262:c.instructions+=1;goto B67e262;
case 0x67e264:goto L67e264;
case 0x67e26a:c.instructions+=4;goto B67e26a;
case 0x67e26c:c.instructions+=3;goto B67e26c;
case 0x67e26f:c.instructions+=2;goto B67e26f;
case 0x67e270:c.instructions+=1;goto B67e270;
case 0x67e275:goto L67e275;
case 0x67e277:c.instructions+=2;goto B67e277;
case 0x67e279:c.instructions+=1;goto B67e279;
case 0x67e27f:goto L67e27f;
case 0x67e282:c.instructions+=3;goto B67e282;
case 0x67e285:c.instructions+=2;goto B67e285;
case 0x67e288:c.instructions+=1;goto B67e288;
case 0x67e28a:goto L67e28a;
case 0x67e28d:c.instructions+=7;goto B67e28d;
case 0x67e292:c.instructions+=6;goto B67e292;
case 0x67e295:c.instructions+=5;goto B67e295;
case 0x67e29b:c.instructions+=4;goto B67e29b;
case 0x67e29e:c.instructions+=3;goto B67e29e;
case 0x67e2a1:c.instructions+=2;goto B67e2a1;
case 0x67e2a3:c.instructions+=1;goto B67e2a3;
case 0x67e2a8:goto L67e2a8;
case 0x67e2ae:c.instructions+=5;goto B67e2ae;
case 0x67e2b4:c.instructions+=4;goto B67e2b4;
case 0x67e2b7:c.instructions+=3;goto B67e2b7;
case 0x67e2b9:c.instructions+=2;goto B67e2b9;
case 0x67e2ba:c.instructions+=1;goto B67e2ba;
case 0x67e2bf:goto L67e2bf;
case 0x67e2c1:c.instructions+=2;goto B67e2c1;
case 0x67e2c3:c.instructions+=1;goto B67e2c3;
case 0x67e2c9:goto L67e2c9;
case 0x67e2cc:c.instructions+=2;goto B67e2cc;
case 0x67e2cf:c.instructions+=1;goto B67e2cf;
case 0x67e2d2:goto L67e2d2;
case 0x67e2d5:c.instructions+=4;goto B67e2d5;
case 0x67e2d7:c.instructions+=3;goto B67e2d7;
case 0x67e2da:c.instructions+=2;goto B67e2da;
case 0x67e2dd:c.instructions+=1;goto B67e2dd;
case 0x67e2e3:goto L67e2e3;
case 0x67e2e6:c.instructions+=3;goto B67e2e6;
case 0x67e2ea:c.instructions+=2;goto B67e2ea;
case 0x67e2ed:c.instructions+=1;goto B67e2ed;
case 0x67e2f3:goto L67e2f3;
case 0x67e2f6:c.instructions+=7;goto B67e2f6;
case 0x67e2f9:c.instructions+=6;goto B67e2f9;
case 0x67e2fc:c.instructions+=5;goto B67e2fc;
case 0x67e2fd:c.instructions+=4;goto B67e2fd;
case 0x67e300:c.instructions+=3;goto B67e300;
case 0x67e302:c.instructions+=2;goto B67e302;
case 0x67e305:c.instructions+=1;goto B67e305;
case 0x67e30a:goto L67e30a;
case 0x67e30c:c.instructions+=2;goto B67e30c;
case 0x67e30e:c.instructions+=1;goto B67e30e;
case 0x67e314:goto L67e314;
case 0x67e317:c.instructions+=2;goto B67e317;
case 0x67e318:c.instructions+=1;goto B67e318;
case 0x67e31d:goto L67e31d;
case 0x67e31f:c.instructions+=1;goto B67e31f;
case 0x67e325:goto L67e325;
case 0x67e327:c.instructions+=2;goto B67e327;
case 0x67e329:c.instructions+=1;goto B67e329;
case 0x67e32c:goto L67e32c;
case 0x67e330:c.instructions+=4;goto B67e330;
case 0x67e331:c.instructions+=3;goto B67e331;
case 0x67e333:c.instructions+=2;goto B67e333;
case 0x67e336:c.instructions+=1;goto B67e336;
case 0x67e338:goto L67e338;
case 0x67e33b:c.instructions+=2;goto B67e33b;
case 0x67e33e:c.instructions+=1;goto B67e33e;
case 0x67e344:goto L67e344;
case 0x67e347:c.instructions+=1;goto B67e347;
case 0x67e34a:goto L67e34a;
case 0x67e34d:c.instructions+=2;goto B67e34d;
case 0x67e350:c.instructions+=1;goto B67e350;
case 0x67e356:goto L67e356;
case 0x67e359:c.instructions+=1;goto B67e359;
case 0x67e35b:goto L67e35b;
case 0x67e35e:c.instructions+=16;goto B67e35e;
case 0x67e361:c.instructions+=15;goto B67e361;
case 0x67e364:c.instructions+=14;goto B67e364;
case 0x67e366:c.instructions+=13;goto B67e366;
case 0x67e36a:c.instructions+=12;goto B67e36a;
case 0x67e36d:c.instructions+=11;goto B67e36d;
case 0x67e370:c.instructions+=10;goto B67e370;
case 0x67e373:c.instructions+=9;goto B67e373;
case 0x67e376:c.instructions+=8;goto B67e376;
case 0x67e379:c.instructions+=7;goto B67e379;
case 0x67e37c:c.instructions+=6;goto B67e37c;
case 0x67e37f:c.instructions+=5;goto B67e37f;
case 0x67e382:c.instructions+=4;goto B67e382;
case 0x67e385:c.instructions+=3;goto B67e385;
case 0x67e388:c.instructions+=2;goto B67e388;
case 0x67e38b:c.instructions+=1;goto B67e38b;
case 0x67e38d:goto L67e38d;
case 0x67e38f:c.instructions+=8;goto B67e38f;
case 0x67e392:c.instructions+=7;goto B67e392;
case 0x67e395:c.instructions+=6;goto B67e395;
case 0x67e398:c.instructions+=5;goto B67e398;
case 0x67e39a:c.instructions+=4;goto B67e39a;
case 0x67e39c:c.instructions+=3;goto B67e39c;
case 0x67e39f:c.instructions+=2;goto B67e39f;
case 0x67e3a2:c.instructions+=1;goto B67e3a2;
case 0x67e3a4:goto L67e3a4;
case 0x67e3a7:c.instructions+=3;goto B67e3a7;
case 0x67e3a9:c.instructions+=2;goto B67e3a9;
case 0x67e3ac:c.instructions+=1;goto B67e3ac;
case 0x67e3b1:goto L67e3b1;
case 0x67e3b3:c.instructions+=2;goto B67e3b3;
case 0x67e3b5:c.instructions+=1;goto B67e3b5;
case 0x67e3bb:goto L67e3bb;
case 0x67e3be:c.instructions+=11;goto B67e3be;
case 0x67e3bf:c.instructions+=10;goto B67e3bf;
case 0x67e3c2:c.instructions+=9;goto B67e3c2;
case 0x67e3c7:c.instructions+=8;goto B67e3c7;
case 0x67e3ca:c.instructions+=7;goto B67e3ca;
case 0x67e3cd:c.instructions+=6;goto B67e3cd;
case 0x67e3d0:c.instructions+=5;goto B67e3d0;
case 0x67e3d5:c.instructions+=4;goto B67e3d5;
case 0x67e3d6:c.instructions+=3;goto B67e3d6;
case 0x67e3d9:c.instructions+=2;goto B67e3d9;
case 0x67e3db:c.instructions+=1;goto B67e3db;
case 0x67e3e0:goto L67e3e0;
case 0x67e3e2:c.instructions+=2;goto B67e3e2;
case 0x67e3e4:c.instructions+=1;goto B67e3e4;
case 0x67e3ea:goto L67e3ea;
case 0x67e3ed:c.instructions+=1;goto B67e3ed;
case 0x67e3ef:goto L67e3ef;
case 0x67e3f2:c.instructions+=1;goto B67e3f2;
case 0x67e3f4:goto L67e3f4;
case 0x67e3f7:c.instructions+=3;goto B67e3f7;
case 0x67e3f9:c.instructions+=2;goto B67e3f9;
case 0x67e3fc:c.instructions+=1;goto B67e3fc;
case 0x67e401:goto L67e401;
case 0x67e403:c.instructions+=2;goto B67e403;
case 0x67e405:c.instructions+=1;goto B67e405;
case 0x67e40b:goto L67e40b;
case 0x67e40e:c.instructions+=9;goto B67e40e;
case 0x67e40f:c.instructions+=8;goto B67e40f;
case 0x67e412:c.instructions+=7;goto B67e412;
case 0x67e417:c.instructions+=6;goto B67e417;
case 0x67e41a:c.instructions+=5;goto B67e41a;
case 0x67e41c:c.instructions+=4;goto B67e41c;
case 0x67e41f:c.instructions+=3;goto B67e41f;
case 0x67e420:c.instructions+=2;goto B67e420;
case 0x67e423:c.instructions+=1;goto B67e423;
case 0x67e428:goto L67e428;
case 0x67e42a:c.instructions+=2;goto B67e42a;
case 0x67e42c:c.instructions+=1;goto B67e42c;
case 0x67e432:goto L67e432;
case 0x67e435:goto L67e435;
case 0x67e438:c.instructions+=4;goto B67e438;
case 0x67e43b:c.instructions+=3;goto B67e43b;
case 0x67e43e:c.instructions+=2;goto B67e43e;
case 0x67e440:c.instructions+=1;goto B67e440;
case 0x67e443:goto L67e443;
case 0x67e445:goto L67e445;
case 0x67e447:c.instructions+=3;goto B67e447;
case 0x67e44a:c.instructions+=2;goto B67e44a;
case 0x67e44d:c.instructions+=1;goto B67e44d;
case 0x67e450:goto L67e450;
case 0x67e452:goto L67e452;
case 0x67e454:c.instructions+=2;goto B67e454;
case 0x67e457:c.instructions+=1;goto B67e457;
case 0x67e45d:goto L67e45d;
case 0x67e45f:c.instructions+=2;goto B67e45f;
case 0x67e462:c.instructions+=1;goto B67e462;
case 0x67e464:goto L67e464;
case 0x67e467:c.instructions+=2;goto B67e467;
case 0x67e46a:c.instructions+=1;goto B67e46a;
case 0x67e46d:goto L67e46d;
case 0x67e470:c.instructions+=6;goto B67e470;
case 0x67e473:c.instructions+=5;goto B67e473;
case 0x67e475:c.instructions+=4;goto B67e475;
case 0x67e476:c.instructions+=3;goto B67e476;
case 0x67e478:c.instructions+=2;goto B67e478;
case 0x67e47b:c.instructions+=1;goto B67e47b;
case 0x67e47d:goto L67e47d;
case 0x67e480:c.instructions+=4;goto B67e480;
case 0x67e483:c.instructions+=3;goto B67e483;
case 0x67e487:c.instructions+=2;goto B67e487;
case 0x67e48a:c.instructions+=1;goto B67e48a;
case 0x67e490:goto L67e490;
case 0x67e495:goto L67e495;
case 0x67e498:c.instructions+=6;goto B67e498;
case 0x67e49b:c.instructions+=5;goto B67e49b;
case 0x67e49c:c.instructions+=4;goto B67e49c;
case 0x67e49f:c.instructions+=3;goto B67e49f;
case 0x67e4a2:c.instructions+=2;goto B67e4a2;
case 0x67e4a5:c.instructions+=1;goto B67e4a5;
case 0x67e4aa:goto L67e4aa;
case 0x67e4ac:c.instructions+=2;goto B67e4ac;
case 0x67e4ae:c.instructions+=1;goto B67e4ae;
case 0x67e4b4:goto L67e4b4;
case 0x67e4ba:c.instructions+=1;goto B67e4ba;
case 0x67e4bf:goto L67e4bf;
case 0x67e4c1:c.instructions+=2;goto B67e4c1;
case 0x67e4c4:c.instructions+=1;goto B67e4c4;
case 0x67e4ca:goto L67e4ca;
case 0x67e4cd:c.instructions+=2;goto B67e4cd;
case 0x67e4cf:c.instructions+=1;goto B67e4cf;
case 0x67e4d1:goto L67e4d1;
case 0x67e4d4:c.instructions+=6;goto B67e4d4;
case 0x67e4d7:c.instructions+=5;goto B67e4d7;
case 0x67e4da:c.instructions+=4;goto B67e4da;
case 0x67e4dc:c.instructions+=3;goto B67e4dc;
case 0x67e4df:c.instructions+=2;goto B67e4df;
case 0x67e4e2:c.instructions+=1;goto B67e4e2;
case 0x67e4e4:goto L67e4e4;
case 0x67e4e7:goto L67e4e7;
case 0x67e4e9:c.instructions+=1;goto B67e4e9;
case 0x67e4eb:goto L67e4eb;
case 0x67e4ee:c.instructions+=3;goto B67e4ee;
case 0x67e4f1:c.instructions+=2;goto B67e4f1;
case 0x67e4f4:c.instructions+=1;goto B67e4f4;
case 0x67e4f7:goto L67e4f7;
case 0x67e4f9:c.instructions+=5;goto B67e4f9;
case 0x67e4fb:c.instructions+=4;goto B67e4fb;
case 0x67e4fe:c.instructions+=3;goto B67e4fe;
case 0x67e500:c.instructions+=2;goto B67e500;
case 0x67e503:c.instructions+=1;goto B67e503;
case 0x67e505:goto L67e505;
case 0x67e508:goto L67e508;
case 0x67e50c:c.instructions+=5;goto B67e50c;
case 0x67e50e:c.instructions+=4;goto B67e50e;
case 0x67e511:c.instructions+=3;goto B67e511;
case 0x67e514:c.instructions+=2;goto B67e514;
case 0x67e517:c.instructions+=1;goto B67e517;
case 0x67e519:goto L67e519;
case 0x67e51c:c.instructions+=3;goto B67e51c;
case 0x67e51e:c.instructions+=2;goto B67e51e;
case 0x67e521:c.instructions+=1;goto B67e521;
case 0x67e526:goto L67e526;
case 0x67e528:c.instructions+=2;goto B67e528;
case 0x67e52a:c.instructions+=1;goto B67e52a;
case 0x67e530:goto L67e530;
case 0x67e533:c.instructions+=2;goto B67e533;
case 0x67e536:c.instructions+=1;goto B67e536;
case 0x67e53c:goto L67e53c;
case 0x67e53f:c.instructions+=3;goto B67e53f;
case 0x67e542:c.instructions+=2;goto B67e542;
case 0x67e545:c.instructions+=1;goto B67e545;
case 0x67e548:goto L67e548;
case 0x67e54b:c.instructions+=2;goto B67e54b;
case 0x67e54e:c.instructions+=1;goto B67e54e;
case 0x67e550:goto L67e550;
case 0x67e553:c.instructions+=7;goto B67e553;
case 0x67e558:c.instructions+=6;goto B67e558;
case 0x67e55d:c.instructions+=5;goto B67e55d;
case 0x67e560:c.instructions+=4;goto B67e560;
case 0x67e563:c.instructions+=3;goto B67e563;
case 0x67e566:c.instructions+=2;goto B67e566;
case 0x67e569:c.instructions+=1;goto B67e569;
case 0x67e56c:goto L67e56c;
case 0x67e56d:c.instructions+=7;goto B67e56d;
case 0x67e570:c.instructions+=6;goto B67e570;
case 0x67e572:c.instructions+=5;goto B67e572;
case 0x67e575:c.instructions+=4;goto B67e575;
case 0x67e578:c.instructions+=3;goto B67e578;
case 0x67e57b:c.instructions+=2;goto B67e57b;
case 0x67e57e:c.instructions+=1;goto B67e57e;
case 0x67e583:goto L67e583;
case 0x67e585:c.instructions+=2;goto B67e585;
case 0x67e587:c.instructions+=1;goto B67e587;
case 0x67e58d:goto L67e58d;
case 0x67e590:c.instructions+=7;goto B67e590;
case 0x67e593:c.instructions+=6;goto B67e593;
case 0x67e597:c.instructions+=5;goto B67e597;
case 0x67e59a:c.instructions+=4;goto B67e59a;
case 0x67e59d:c.instructions+=3;goto B67e59d;
case 0x67e5a0:c.instructions+=2;goto B67e5a0;
case 0x67e5a3:c.instructions+=1;goto B67e5a3;
case 0x67e5a5:goto L67e5a5;
case 0x67e5a8:c.instructions+=9;goto B67e5a8;
case 0x67e5ab:c.instructions+=8;goto B67e5ab;
case 0x67e5ae:c.instructions+=7;goto B67e5ae;
case 0x67e5b1:c.instructions+=6;goto B67e5b1;
case 0x67e5b4:c.instructions+=5;goto B67e5b4;
case 0x67e5b7:c.instructions+=4;goto B67e5b7;
case 0x67e5ba:c.instructions+=3;goto B67e5ba;
case 0x67e5bd:c.instructions+=2;goto B67e5bd;
case 0x67e5c0:c.instructions+=1;goto B67e5c0;
case 0x67e5c2:goto L67e5c2;
case 0x67e5c7:goto L67e5c7;
case 0x67e5ca:c.instructions+=2;goto B67e5ca;
case 0x67e5cb:c.instructions+=1;goto B67e5cb;
case 0x67e5d0:goto L67e5d0;
case 0x67e5d2:c.instructions+=1;goto B67e5d2;
case 0x67e5d8:goto L67e5d8;
case 0x67e5db:c.instructions+=2;goto B67e5db;
case 0x67e5dd:c.instructions+=1;goto B67e5dd;
case 0x67e5e0:goto L67e5e0;
case 0x67e5e4:c.instructions+=4;goto B67e5e4;
case 0x67e5e5:c.instructions+=3;goto B67e5e5;
case 0x67e5e7:c.instructions+=2;goto B67e5e7;
case 0x67e5ea:c.instructions+=1;goto B67e5ea;
case 0x67e5ec:goto L67e5ec;
case 0x67e5ef:c.instructions+=2;goto B67e5ef;
case 0x67e5f2:c.instructions+=1;goto B67e5f2;
case 0x67e5f8:goto L67e5f8;
case 0x67e5fb:c.instructions+=2;goto B67e5fb;
case 0x67e5fe:c.instructions+=1;goto B67e5fe;
case 0x67e601:goto L67e601;
case 0x67e604:c.instructions+=2;goto B67e604;
case 0x67e607:c.instructions+=1;goto B67e607;
case 0x67e60d:goto L67e60d;
case 0x67e610:c.instructions+=1;goto B67e610;
case 0x67e612:goto L67e612;
case 0x67e615:c.instructions+=14;goto B67e615;
case 0x67e618:c.instructions+=13;goto B67e618;
case 0x67e61b:c.instructions+=12;goto B67e61b;
case 0x67e61e:c.instructions+=11;goto B67e61e;
case 0x67e620:c.instructions+=10;goto B67e620;
case 0x67e623:c.instructions+=9;goto B67e623;
case 0x67e626:c.instructions+=8;goto B67e626;
case 0x67e629:c.instructions+=7;goto B67e629;
case 0x67e62c:c.instructions+=6;goto B67e62c;
case 0x67e62f:c.instructions+=5;goto B67e62f;
case 0x67e632:c.instructions+=4;goto B67e632;
case 0x67e635:c.instructions+=3;goto B67e635;
case 0x67e638:c.instructions+=2;goto B67e638;
case 0x67e63a:c.instructions+=1;goto B67e63a;
case 0x67e63d:goto L67e63d;
case 0x67e640:c.instructions+=8;goto B67e640;
case 0x67e642:c.instructions+=7;goto B67e642;
case 0x67e645:c.instructions+=6;goto B67e645;
case 0x67e647:c.instructions+=5;goto B67e647;
case 0x67e649:c.instructions+=4;goto B67e649;
case 0x67e64c:c.instructions+=3;goto B67e64c;
case 0x67e64f:c.instructions+=2;goto B67e64f;
case 0x67e652:c.instructions+=1;goto B67e652;
case 0x67e654:goto L67e654;
case 0x67e657:c.instructions+=3;goto B67e657;
case 0x67e659:c.instructions+=2;goto B67e659;
case 0x67e65c:c.instructions+=1;goto B67e65c;
case 0x67e661:goto L67e661;
case 0x67e663:c.instructions+=2;goto B67e663;
case 0x67e665:c.instructions+=1;goto B67e665;
case 0x67e66b:goto L67e66b;
case 0x67e66e:c.instructions+=11;goto B67e66e;
case 0x67e66f:c.instructions+=10;goto B67e66f;
case 0x67e672:c.instructions+=9;goto B67e672;
case 0x67e677:c.instructions+=8;goto B67e677;
case 0x67e67a:c.instructions+=7;goto B67e67a;
case 0x67e67d:c.instructions+=6;goto B67e67d;
case 0x67e680:c.instructions+=5;goto B67e680;
case 0x67e685:c.instructions+=4;goto B67e685;
case 0x67e686:c.instructions+=3;goto B67e686;
case 0x67e689:c.instructions+=2;goto B67e689;
case 0x67e68b:c.instructions+=1;goto B67e68b;
case 0x67e690:goto L67e690;
case 0x67e692:c.instructions+=2;goto B67e692;
case 0x67e694:c.instructions+=1;goto B67e694;
case 0x67e69a:goto L67e69a;
case 0x67e69d:c.instructions+=1;goto B67e69d;
case 0x67e69f:goto L67e69f;
case 0x67e6a2:c.instructions+=1;goto B67e6a2;
case 0x67e6a4:goto L67e6a4;
case 0x67e6a7:c.instructions+=3;goto B67e6a7;
case 0x67e6a9:c.instructions+=2;goto B67e6a9;
case 0x67e6ac:c.instructions+=1;goto B67e6ac;
case 0x67e6b1:goto L67e6b1;
case 0x67e6b3:c.instructions+=2;goto B67e6b3;
case 0x67e6b5:c.instructions+=1;goto B67e6b5;
case 0x67e6bb:goto L67e6bb;
case 0x67e6be:c.instructions+=9;goto B67e6be;
case 0x67e6bf:c.instructions+=8;goto B67e6bf;
case 0x67e6c2:c.instructions+=7;goto B67e6c2;
case 0x67e6c7:c.instructions+=6;goto B67e6c7;
case 0x67e6ca:c.instructions+=5;goto B67e6ca;
case 0x67e6cc:c.instructions+=4;goto B67e6cc;
case 0x67e6cf:c.instructions+=3;goto B67e6cf;
case 0x67e6d0:c.instructions+=2;goto B67e6d0;
case 0x67e6d3:c.instructions+=1;goto B67e6d3;
case 0x67e6d8:goto L67e6d8;
case 0x67e6da:c.instructions+=2;goto B67e6da;
case 0x67e6dc:c.instructions+=1;goto B67e6dc;
case 0x67e6e2:goto L67e6e2;
case 0x67e6e5:goto L67e6e5;
case 0x67e6e8:c.instructions+=4;goto B67e6e8;
case 0x67e6eb:c.instructions+=3;goto B67e6eb;
case 0x67e6ee:c.instructions+=2;goto B67e6ee;
case 0x67e6f0:c.instructions+=1;goto B67e6f0;
case 0x67e6f3:goto L67e6f3;
case 0x67e6f5:goto L67e6f5;
case 0x67e6f7:c.instructions+=3;goto B67e6f7;
case 0x67e6fa:c.instructions+=2;goto B67e6fa;
case 0x67e6fd:c.instructions+=1;goto B67e6fd;
case 0x67e700:goto L67e700;
case 0x67e702:goto L67e702;
case 0x67e704:c.instructions+=2;goto B67e704;
case 0x67e707:c.instructions+=1;goto B67e707;
case 0x67e70d:goto L67e70d;
case 0x67e710:c.instructions+=3;goto B67e710;
case 0x67e712:c.instructions+=2;goto B67e712;
case 0x67e714:c.instructions+=1;goto B67e714;
case 0x67e716:goto L67e716;
case 0x67e719:goto L67e719;
case 0x67e71c:c.instructions+=6;goto B67e71c;
case 0x67e71f:c.instructions+=5;goto B67e71f;
case 0x67e721:c.instructions+=4;goto B67e721;
case 0x67e722:c.instructions+=3;goto B67e722;
case 0x67e725:c.instructions+=2;goto B67e725;
case 0x67e727:c.instructions+=1;goto B67e727;
case 0x67e729:goto L67e729;
case 0x67e72c:c.instructions+=8;goto B67e72c;
case 0x67e72f:c.instructions+=7;goto B67e72f;
case 0x67e732:c.instructions+=6;goto B67e732;
case 0x67e734:c.instructions+=5;goto B67e734;
case 0x67e737:c.instructions+=4;goto B67e737;
case 0x67e73a:c.instructions+=3;goto B67e73a;
case 0x67e73d:c.instructions+=2;goto B67e73d;
case 0x67e740:c.instructions+=1;goto B67e740;
case 0x67e746:goto L67e746;
case 0x67e74b:goto L67e74b;
case 0x67e74d:c.instructions+=2;goto B67e74d;
case 0x67e750:c.instructions+=1;goto B67e750;
case 0x67e756:goto L67e756;
case 0x67e759:c.instructions+=1;goto B67e759;
case 0x67e75f:goto L67e75f;
case 0x67e761:c.instructions+=3;goto B67e761;
case 0x67e764:c.instructions+=2;goto B67e764;
case 0x67e766:c.instructions+=1;goto B67e766;
case 0x67e76b:goto L67e76b;
case 0x67e76d:c.instructions+=2;goto B67e76d;
case 0x67e76f:c.instructions+=1;goto B67e76f;
case 0x67e775:goto L67e775;
case 0x67e77b:c.instructions+=5;goto B67e77b;
case 0x67e77d:c.instructions+=4;goto B67e77d;
case 0x67e782:c.instructions+=3;goto B67e782;
case 0x67e783:c.instructions+=2;goto B67e783;
case 0x67e788:c.instructions+=1;goto B67e788;
case 0x67e78d:goto L67e78d;
case 0x67e78f:c.instructions+=2;goto B67e78f;
case 0x67e792:c.instructions+=1;goto B67e792;
case 0x67e798:goto L67e798;
case 0x67e79b:c.instructions+=1;goto B67e79b;
case 0x67e7a1:goto L67e7a1;
case 0x67e7a5:c.instructions+=2;goto B67e7a5;
case 0x67e7a7:c.instructions+=1;goto B67e7a7;
case 0x67e7ad:goto L67e7ad;
case 0x67e7af:c.instructions+=1;goto B67e7af;
case 0x67e7b4:goto L67e7b4;
case 0x67e7b6:c.instructions+=1;goto B67e7b6;
case 0x67e7bc:goto L67e7bc;
case 0x67e7bf:c.instructions+=2;goto B67e7bf;
case 0x67e7c1:c.instructions+=1;goto B67e7c1;
case 0x67e7c3:goto L67e7c3;
case 0x67e7c6:c.instructions+=5;goto B67e7c6;
case 0x67e7ca:c.instructions+=4;goto B67e7ca;
case 0x67e7ce:c.instructions+=3;goto B67e7ce;
case 0x67e7cf:c.instructions+=2;goto B67e7cf;
case 0x67e7d2:c.instructions+=1;goto B67e7d2;
case 0x67e7d4:goto L67e7d4;
case 0x67e7d6:c.instructions+=3;goto B67e7d6;
case 0x67e7d9:c.instructions+=2;goto B67e7d9;
case 0x67e7db:c.instructions+=1;goto B67e7db;
case 0x67e7e0:goto L67e7e0;
case 0x67e7e2:c.instructions+=2;goto B67e7e2;
case 0x67e7e4:c.instructions+=1;goto B67e7e4;
case 0x67e7ea:goto L67e7ea;
case 0x67e7ec:c.instructions+=3;goto B67e7ec;
case 0x67e7ef:c.instructions+=2;goto B67e7ef;
case 0x67e7f1:c.instructions+=1;goto B67e7f1;
case 0x67e7f6:goto L67e7f6;
case 0x67e7f8:c.instructions+=2;goto B67e7f8;
case 0x67e7fa:c.instructions+=1;goto B67e7fa;
case 0x67e800:goto L67e800;
case 0x67e802:c.instructions+=3;goto B67e802;
case 0x67e805:c.instructions+=2;goto B67e805;
case 0x67e807:c.instructions+=1;goto B67e807;
case 0x67e80c:goto L67e80c;
case 0x67e80e:c.instructions+=2;goto B67e80e;
case 0x67e810:c.instructions+=1;goto B67e810;
case 0x67e816:goto L67e816;
case 0x67e818:c.instructions+=3;goto B67e818;
case 0x67e81b:c.instructions+=2;goto B67e81b;
case 0x67e81d:c.instructions+=1;goto B67e81d;
case 0x67e822:goto L67e822;
case 0x67e824:c.instructions+=2;goto B67e824;
case 0x67e826:c.instructions+=1;goto B67e826;
case 0x67e82c:goto L67e82c;
case 0x67e82e:c.instructions+=3;goto B67e82e;
case 0x67e831:c.instructions+=2;goto B67e831;
case 0x67e833:c.instructions+=1;goto B67e833;
case 0x67e838:goto L67e838;
case 0x67e83a:c.instructions+=2;goto B67e83a;
case 0x67e83c:c.instructions+=1;goto B67e83c;
case 0x67e842:goto L67e842;
case 0x67e843:c.instructions+=7;goto B67e843;
case 0x67e844:c.instructions+=6;goto B67e844;
case 0x67e847:c.instructions+=5;goto B67e847;
case 0x67e849:c.instructions+=4;goto B67e849;
case 0x67e84c:c.instructions+=3;goto B67e84c;
case 0x67e851:c.instructions+=2;goto B67e851;
case 0x67e854:c.instructions+=1;goto B67e854;
case 0x67e859:goto L67e859;
case 0x67e85b:c.instructions+=2;goto B67e85b;
case 0x67e85d:c.instructions+=1;goto B67e85d;
case 0x67e863:goto L67e863;
case 0x67e865:c.instructions+=7;goto B67e865;
case 0x67e868:c.instructions+=6;goto B67e868;
case 0x67e86a:c.instructions+=5;goto B67e86a;
case 0x67e86d:c.instructions+=4;goto B67e86d;
case 0x67e870:c.instructions+=3;goto B67e870;
case 0x67e875:c.instructions+=2;goto B67e875;
case 0x67e878:c.instructions+=1;goto B67e878;
case 0x67e87d:goto L67e87d;
case 0x67e87f:c.instructions+=2;goto B67e87f;
case 0x67e881:c.instructions+=1;goto B67e881;
case 0x67e887:goto L67e887;
case 0x67e889:c.instructions+=7;goto B67e889;
case 0x67e88c:c.instructions+=6;goto B67e88c;
case 0x67e88e:c.instructions+=5;goto B67e88e;
case 0x67e891:c.instructions+=4;goto B67e891;
case 0x67e894:c.instructions+=3;goto B67e894;
case 0x67e899:c.instructions+=2;goto B67e899;
case 0x67e89c:c.instructions+=1;goto B67e89c;
case 0x67e8a1:goto L67e8a1;
case 0x67e8a3:c.instructions+=2;goto B67e8a3;
case 0x67e8a5:c.instructions+=1;goto B67e8a5;
case 0x67e8ab:goto L67e8ab;
case 0x67e8ad:c.instructions+=7;goto B67e8ad;
case 0x67e8ae:c.instructions+=6;goto B67e8ae;
case 0x67e8b1:c.instructions+=5;goto B67e8b1;
case 0x67e8b3:c.instructions+=4;goto B67e8b3;
case 0x67e8b6:c.instructions+=3;goto B67e8b6;
case 0x67e8bb:c.instructions+=2;goto B67e8bb;
case 0x67e8be:c.instructions+=1;goto B67e8be;
case 0x67e8c3:goto L67e8c3;
case 0x67e8c5:c.instructions+=2;goto B67e8c5;
case 0x67e8c7:c.instructions+=1;goto B67e8c7;
case 0x67e8cd:goto L67e8cd;
case 0x67e8cf:c.instructions+=3;goto B67e8cf;
case 0x67e8d2:c.instructions+=2;goto B67e8d2;
case 0x67e8d5:c.instructions+=1;goto B67e8d5;
case 0x67e8da:goto L67e8da;
case 0x67e8dc:c.instructions+=3;goto B67e8dc;
case 0x67e8df:c.instructions+=2;goto B67e8df;
case 0x67e8e0:c.instructions+=1;goto B67e8e0;
case 0x67e8e5:goto L67e8e5;
case 0x67e8e7:c.instructions+=2;goto B67e8e7;
case 0x67e8e9:c.instructions+=1;goto B67e8e9;
case 0x67e8ef:goto L67e8ef;
case 0x67e8f1:c.instructions+=4;goto B67e8f1;
case 0x67e8f4:c.instructions+=3;goto B67e8f4;
case 0x67e8f5:c.instructions+=2;goto B67e8f5;
case 0x67e8f7:c.instructions+=1;goto B67e8f7;
case 0x67e8fc:goto L67e8fc;
case 0x67e8fe:c.instructions+=2;goto B67e8fe;
case 0x67e900:c.instructions+=1;goto B67e900;
case 0x67e906:goto L67e906;
case 0x67e909:c.instructions+=12;goto B67e909;
case 0x67e90b:c.instructions+=11;goto B67e90b;
case 0x67e90e:c.instructions+=10;goto B67e90e;
case 0x67e913:c.instructions+=9;goto B67e913;
case 0x67e916:c.instructions+=8;goto B67e916;
case 0x67e919:c.instructions+=7;goto B67e919;
case 0x67e91a:c.instructions+=6;goto B67e91a;
case 0x67e91d:c.instructions+=5;goto B67e91d;
case 0x67e922:c.instructions+=4;goto B67e922;
case 0x67e923:c.instructions+=3;goto B67e923;
case 0x67e926:c.instructions+=2;goto B67e926;
case 0x67e928:c.instructions+=1;goto B67e928;
case 0x67e92d:goto L67e92d;
case 0x67e92f:c.instructions+=2;goto B67e92f;
case 0x67e931:c.instructions+=1;goto B67e931;
case 0x67e937:goto L67e937;
case 0x67e939:c.instructions+=9;goto B67e939;
case 0x67e93a:c.instructions+=8;goto B67e93a;
case 0x67e93d:c.instructions+=7;goto B67e93d;
case 0x67e93e:c.instructions+=6;goto B67e93e;
case 0x67e941:c.instructions+=5;goto B67e941;
case 0x67e942:c.instructions+=4;goto B67e942;
case 0x67e947:c.instructions+=3;goto B67e947;
case 0x67e94a:c.instructions+=2;goto B67e94a;
case 0x67e94c:c.instructions+=1;goto B67e94c;
case 0x67e951:goto L67e951;
case 0x67e953:c.instructions+=2;goto B67e953;
case 0x67e955:c.instructions+=1;goto B67e955;
case 0x67e95b:goto L67e95b;
case 0x67e95e:c.instructions+=2;goto B67e95e;
case 0x67e960:c.instructions+=1;goto B67e960;
case 0x67e965:goto L67e965;
case 0x67e967:c.instructions+=2;goto B67e967;
case 0x67e969:c.instructions+=1;goto B67e969;
case 0x67e96f:goto L67e96f;
case 0x67e971:c.instructions+=2;goto B67e971;
case 0x67e974:c.instructions+=1;goto B67e974;
case 0x67e976:goto L67e976;
case 0x67e979:c.instructions+=4;goto B67e979;
case 0x67e97c:c.instructions+=3;goto B67e97c;
case 0x67e97d:c.instructions+=2;goto B67e97d;
case 0x67e980:c.instructions+=1;goto B67e980;
case 0x67e982:goto L67e982;
case 0x67e985:c.instructions+=3;goto B67e985;
case 0x67e987:c.instructions+=2;goto B67e987;
case 0x67e98a:c.instructions+=1;goto B67e98a;
case 0x67e98f:goto L67e98f;
case 0x67e991:c.instructions+=2;goto B67e991;
case 0x67e993:c.instructions+=1;goto B67e993;
case 0x67e999:goto L67e999;
case 0x67e99a:c.instructions+=2;goto B67e99a;
case 0x67e99b:c.instructions+=1;goto B67e99b;
case 0x67e9a0:goto L67e9a0;
case 0x67e9a2:c.instructions+=2;goto B67e9a2;
case 0x67e9a5:c.instructions+=1;goto B67e9a5;
case 0x67e9ab:goto L67e9ab;
case 0x67e9ae:c.instructions+=1;goto B67e9ae;
case 0x67e9b4:goto L67e9b4;
case 0x67e9b7:c.instructions+=1;goto B67e9b7;
case 0x67e9bd:goto L67e9bd;
case 0x67e9c0:c.instructions+=6;goto B67e9c0;
case 0x67e9c2:c.instructions+=5;goto B67e9c2;
case 0x67e9c5:c.instructions+=4;goto B67e9c5;
case 0x67e9c8:c.instructions+=3;goto B67e9c8;
case 0x67e9cb:c.instructions+=2;goto B67e9cb;
case 0x67e9ce:c.instructions+=1;goto B67e9ce;
case 0x67e9d3:goto L67e9d3;
case 0x67e9d8:goto L67e9d8;
case 0x67e9da:c.instructions+=2;goto B67e9da;
case 0x67e9dd:c.instructions+=1;goto B67e9dd;
case 0x67e9e3:goto L67e9e3;
case 0x67e9e6:c.instructions+=1;goto B67e9e6;
case 0x67e9ec:goto L67e9ec;
case 0x67e9f2:c.instructions+=8;goto B67e9f2;
case 0x67e9f5:c.instructions+=7;goto B67e9f5;
case 0x67e9f6:c.instructions+=6;goto B67e9f6;
case 0x67e9f7:c.instructions+=5;goto B67e9f7;
case 0x67e9fa:c.instructions+=4;goto B67e9fa;
case 0x67e9fb:c.instructions+=3;goto B67e9fb;
case 0x67e9fc:c.instructions+=2;goto B67e9fc;
case 0x67e9ff:c.instructions+=1;goto B67e9ff;
case 0x67ea04:goto L67ea04;
case 0x67ea07:c.instructions+=3;goto B67ea07;
case 0x67ea09:c.instructions+=2;goto B67ea09;
case 0x67ea0b:c.instructions+=1;goto B67ea0b;
case 0x67ea10:goto L67ea10;
case 0x67ea12:c.instructions+=2;goto B67ea12;
case 0x67ea14:c.instructions+=1;goto B67ea14;
case 0x67ea1a:goto L67ea1a;
case 0x67ea1d:c.instructions+=1;goto B67ea1d;
case 0x67ea1f:goto L67ea1f;
case 0x67ea22:c.instructions+=2;goto B67ea22;
case 0x67ea24:c.instructions+=1;goto B67ea24;
case 0x67ea26:goto L67ea26;
case 0x67ea28:goto L67ea28;
case 0x67ea2a:goto L67ea2a;
case 0x67ea2d:c.instructions+=3;goto B67ea2d;
case 0x67ea2f:c.instructions+=2;goto B67ea2f;
case 0x67ea32:c.instructions+=1;goto B67ea32;
case 0x67ea37:goto L67ea37;
case 0x67ea39:c.instructions+=2;goto B67ea39;
case 0x67ea3b:c.instructions+=1;goto B67ea3b;
case 0x67ea41:goto L67ea41;
case 0x67ea42:c.instructions+=2;goto B67ea42;
case 0x67ea43:c.instructions+=1;goto B67ea43;
case 0x67ea46:goto L67ea46;
case 0x67ea49:c.instructions+=2;goto B67ea49;
case 0x67ea4e:c.instructions+=1;goto B67ea4e;
case 0x67ea53:goto L67ea53;
case 0x67ea55:c.instructions+=2;goto B67ea55;
case 0x67ea58:c.instructions+=1;goto B67ea58;
case 0x67ea5e:goto L67ea5e;
case 0x67ea61:c.instructions+=1;goto B67ea61;
case 0x67ea67:goto L67ea67;
case 0x67ea6a:c.instructions+=1;goto B67ea6a;
case 0x67ea70:goto L67ea70;
case 0x67ea72:c.instructions+=4;goto B67ea72;
case 0x67ea75:c.instructions+=3;goto B67ea75;
case 0x67ea76:c.instructions+=2;goto B67ea76;
case 0x67ea78:c.instructions+=1;goto B67ea78;
case 0x67ea7d:goto L67ea7d;
case 0x67ea7f:c.instructions+=2;goto B67ea7f;
case 0x67ea81:c.instructions+=1;goto B67ea81;
case 0x67ea87:goto L67ea87;
case 0x67ea89:c.instructions+=4;goto B67ea89;
case 0x67ea8c:c.instructions+=3;goto B67ea8c;
case 0x67ea8d:c.instructions+=2;goto B67ea8d;
case 0x67ea8f:c.instructions+=1;goto B67ea8f;
case 0x67ea94:goto L67ea94;
case 0x67ea96:c.instructions+=2;goto B67ea96;
case 0x67ea98:c.instructions+=1;goto B67ea98;
case 0x67ea9e:goto L67ea9e;
case 0x67eaa0:c.instructions+=4;goto B67eaa0;
case 0x67eaa3:c.instructions+=3;goto B67eaa3;
case 0x67eaa4:c.instructions+=2;goto B67eaa4;
case 0x67eaa6:c.instructions+=1;goto B67eaa6;
case 0x67eaab:goto L67eaab;
case 0x67eaad:c.instructions+=2;goto B67eaad;
case 0x67eaaf:c.instructions+=1;goto B67eaaf;
case 0x67eab5:goto L67eab5;
case 0x67eab8:c.instructions+=12;goto B67eab8;
case 0x67eab9:c.instructions+=11;goto B67eab9;
case 0x67eabc:c.instructions+=10;goto B67eabc;
case 0x67eac1:c.instructions+=9;goto B67eac1;
case 0x67eac4:c.instructions+=8;goto B67eac4;
case 0x67eac7:c.instructions+=7;goto B67eac7;
case 0x67eac8:c.instructions+=6;goto B67eac8;
case 0x67eacb:c.instructions+=5;goto B67eacb;
case 0x67ead0:c.instructions+=4;goto B67ead0;
case 0x67ead1:c.instructions+=3;goto B67ead1;
case 0x67ead4:c.instructions+=2;goto B67ead4;
case 0x67ead6:c.instructions+=1;goto B67ead6;
case 0x67eadb:goto L67eadb;
case 0x67eadd:c.instructions+=2;goto B67eadd;
case 0x67eadf:c.instructions+=1;goto B67eadf;
case 0x67eae5:goto L67eae5;
case 0x67eae6:c.instructions+=9;goto B67eae6;
case 0x67eae9:c.instructions+=8;goto B67eae9;
case 0x67eaea:c.instructions+=7;goto B67eaea;
case 0x67eaeb:c.instructions+=6;goto B67eaeb;
case 0x67eaee:c.instructions+=5;goto B67eaee;
case 0x67eaef:c.instructions+=4;goto B67eaef;
case 0x67eaf4:c.instructions+=3;goto B67eaf4;
case 0x67eaf7:c.instructions+=2;goto B67eaf7;
case 0x67eaf9:c.instructions+=1;goto B67eaf9;
case 0x67eafe:goto L67eafe;
case 0x67eb00:c.instructions+=2;goto B67eb00;
case 0x67eb02:c.instructions+=1;goto B67eb02;
case 0x67eb08:goto L67eb08;
case 0x67eb09:c.instructions+=9;goto B67eb09;
case 0x67eb0a:c.instructions+=8;goto B67eb0a;
case 0x67eb0d:c.instructions+=7;goto B67eb0d;
case 0x67eb0e:c.instructions+=6;goto B67eb0e;
case 0x67eb11:c.instructions+=5;goto B67eb11;
case 0x67eb12:c.instructions+=4;goto B67eb12;
case 0x67eb17:c.instructions+=3;goto B67eb17;
case 0x67eb1a:c.instructions+=2;goto B67eb1a;
case 0x67eb1c:c.instructions+=1;goto B67eb1c;
case 0x67eb21:goto L67eb21;
case 0x67eb23:c.instructions+=2;goto B67eb23;
case 0x67eb25:c.instructions+=1;goto B67eb25;
case 0x67eb2b:goto L67eb2b;
case 0x67eb2e:c.instructions+=4;goto B67eb2e;
case 0x67eb30:c.instructions+=3;goto B67eb30;
case 0x67eb31:c.instructions+=2;goto B67eb31;
case 0x67eb33:c.instructions+=1;goto B67eb33;
case 0x67eb38:goto L67eb38;
case 0x67eb3a:c.instructions+=1;goto B67eb3a;
case 0x67eb40:goto L67eb40;
case 0x67eb43:c.instructions+=3;goto B67eb43;
case 0x67eb45:c.instructions+=2;goto B67eb45;
case 0x67eb47:c.instructions+=1;goto B67eb47;
case 0x67eb4a:goto L67eb4a;
case 0x67eb4e:c.instructions+=4;goto B67eb4e;
case 0x67eb4f:c.instructions+=3;goto B67eb4f;
case 0x67eb51:c.instructions+=2;goto B67eb51;
case 0x67eb54:c.instructions+=1;goto B67eb54;
case 0x67eb56:goto L67eb56;
case 0x67eb59:c.instructions+=3;goto B67eb59;
case 0x67eb5b:c.instructions+=2;goto B67eb5b;
case 0x67eb5d:c.instructions+=1;goto B67eb5d;
case 0x67eb5f:goto L67eb5f;
case 0x67eb62:c.instructions+=4;goto B67eb62;
case 0x67eb65:c.instructions+=3;goto B67eb65;
case 0x67eb66:c.instructions+=2;goto B67eb66;
case 0x67eb68:c.instructions+=1;goto B67eb68;
case 0x67eb6a:goto L67eb6a;
case 0x67eb6d:c.instructions+=3;goto B67eb6d;
case 0x67eb6f:c.instructions+=2;goto B67eb6f;
case 0x67eb72:c.instructions+=1;goto B67eb72;
case 0x67eb77:goto L67eb77;
case 0x67eb79:c.instructions+=2;goto B67eb79;
case 0x67eb7b:c.instructions+=1;goto B67eb7b;
case 0x67eb81:goto L67eb81;
case 0x67eb84:c.instructions+=3;goto B67eb84;
case 0x67eb86:c.instructions+=2;goto B67eb86;
case 0x67eb89:c.instructions+=1;goto B67eb89;
case 0x67eb8e:goto L67eb8e;
case 0x67eb90:c.instructions+=2;goto B67eb90;
case 0x67eb92:c.instructions+=1;goto B67eb92;
case 0x67eb98:goto L67eb98;
case 0x67eb9b:c.instructions+=9;goto B67eb9b;
case 0x67eb9c:c.instructions+=8;goto B67eb9c;
case 0x67eb9d:c.instructions+=7;goto B67eb9d;
case 0x67eba0:c.instructions+=6;goto B67eba0;
case 0x67eba5:c.instructions+=5;goto B67eba5;
case 0x67eba8:c.instructions+=4;goto B67eba8;
case 0x67ebaa:c.instructions+=3;goto B67ebaa;
case 0x67ebab:c.instructions+=2;goto B67ebab;
case 0x67ebae:c.instructions+=1;goto B67ebae;
case 0x67ebb3:goto L67ebb3;
case 0x67ebb5:c.instructions+=2;goto B67ebb5;
case 0x67ebb7:c.instructions+=1;goto B67ebb7;
case 0x67ebbd:goto L67ebbd;
case 0x67ebbe:c.instructions+=3;goto B67ebbe;
case 0x67ebc1:c.instructions+=2;goto B67ebc1;
case 0x67ebc4:c.instructions+=1;goto B67ebc4;
case 0x67ebc9:goto L67ebc9;
case 0x67ebcb:c.instructions+=2;goto B67ebcb;
case 0x67ebce:c.instructions+=1;goto B67ebce;
case 0x67ebd4:goto L67ebd4;
case 0x67ebd7:c.instructions+=1;goto B67ebd7;
case 0x67ebdd:goto L67ebdd;
case 0x67ebe0:c.instructions+=1;goto B67ebe0;
case 0x67ebe6:goto L67ebe6;
case 0x67ebe9:c.instructions+=1;goto B67ebe9;
case 0x67ebef:goto L67ebef;
case 0x67ebf1:c.instructions+=4;goto B67ebf1;
case 0x67ebf4:c.instructions+=3;goto B67ebf4;
case 0x67ebf5:c.instructions+=2;goto B67ebf5;
case 0x67ebf7:c.instructions+=1;goto B67ebf7;
case 0x67ebfc:goto L67ebfc;
case 0x67ebfe:c.instructions+=2;goto B67ebfe;
case 0x67ec00:c.instructions+=1;goto B67ec00;
case 0x67ec06:goto L67ec06;
case 0x67ec08:c.instructions+=4;goto B67ec08;
case 0x67ec0b:c.instructions+=3;goto B67ec0b;
case 0x67ec0c:c.instructions+=2;goto B67ec0c;
case 0x67ec0e:c.instructions+=1;goto B67ec0e;
case 0x67ec13:goto L67ec13;
case 0x67ec15:c.instructions+=2;goto B67ec15;
case 0x67ec17:c.instructions+=1;goto B67ec17;
case 0x67ec1d:goto L67ec1d;
case 0x67ec1f:c.instructions+=4;goto B67ec1f;
case 0x67ec25:c.instructions+=3;goto B67ec25;
case 0x67ec26:c.instructions+=2;goto B67ec26;
case 0x67ec28:c.instructions+=1;goto B67ec28;
case 0x67ec2d:goto L67ec2d;
case 0x67ec2f:c.instructions+=2;goto B67ec2f;
case 0x67ec31:c.instructions+=1;goto B67ec31;
case 0x67ec37:goto L67ec37;
case 0x67ec39:c.instructions+=4;goto B67ec39;
case 0x67ec3c:c.instructions+=3;goto B67ec3c;
case 0x67ec3d:c.instructions+=2;goto B67ec3d;
case 0x67ec3f:c.instructions+=1;goto B67ec3f;
case 0x67ec44:goto L67ec44;
case 0x67ec46:c.instructions+=2;goto B67ec46;
case 0x67ec48:c.instructions+=1;goto B67ec48;
case 0x67ec4e:goto L67ec4e;
case 0x67ec50:c.instructions+=4;goto B67ec50;
case 0x67ec53:c.instructions+=3;goto B67ec53;
case 0x67ec54:c.instructions+=2;goto B67ec54;
case 0x67ec56:c.instructions+=1;goto B67ec56;
case 0x67ec5b:goto L67ec5b;
case 0x67ec5d:c.instructions+=2;goto B67ec5d;
case 0x67ec5f:c.instructions+=1;goto B67ec5f;
case 0x67ec65:goto L67ec65;
case 0x67ec67:c.instructions+=4;goto B67ec67;
case 0x67ec6d:c.instructions+=3;goto B67ec6d;
case 0x67ec6e:c.instructions+=2;goto B67ec6e;
case 0x67ec70:c.instructions+=1;goto B67ec70;
case 0x67ec75:goto L67ec75;
case 0x67ec77:c.instructions+=2;goto B67ec77;
case 0x67ec79:c.instructions+=1;goto B67ec79;
case 0x67ec7f:goto L67ec7f;
case 0x67ec81:c.instructions+=4;goto B67ec81;
case 0x67ec87:c.instructions+=3;goto B67ec87;
case 0x67ec88:c.instructions+=2;goto B67ec88;
case 0x67ec8a:c.instructions+=1;goto B67ec8a;
case 0x67ec8f:goto L67ec8f;
case 0x67ec91:c.instructions+=2;goto B67ec91;
case 0x67ec93:c.instructions+=1;goto B67ec93;
case 0x67ec99:goto L67ec99;
case 0x67ec9b:c.instructions+=4;goto B67ec9b;
case 0x67ec9e:c.instructions+=3;goto B67ec9e;
case 0x67ec9f:c.instructions+=2;goto B67ec9f;
case 0x67eca1:c.instructions+=1;goto B67eca1;
case 0x67eca6:goto L67eca6;
case 0x67eca8:c.instructions+=2;goto B67eca8;
case 0x67ecaa:c.instructions+=1;goto B67ecaa;
case 0x67ecb0:goto L67ecb0;
case 0x67ecb2:c.instructions+=4;goto B67ecb2;
case 0x67ecb5:c.instructions+=3;goto B67ecb5;
case 0x67ecb6:c.instructions+=2;goto B67ecb6;
case 0x67ecb8:c.instructions+=1;goto B67ecb8;
case 0x67ecbd:goto L67ecbd;
case 0x67ecbf:c.instructions+=2;goto B67ecbf;
case 0x67ecc1:c.instructions+=1;goto B67ecc1;
case 0x67ecc7:goto L67ecc7;
case 0x67ecc9:c.instructions+=4;goto B67ecc9;
case 0x67eccf:c.instructions+=3;goto B67eccf;
case 0x67ecd0:c.instructions+=2;goto B67ecd0;
case 0x67ecd2:c.instructions+=1;goto B67ecd2;
case 0x67ecd7:goto L67ecd7;
case 0x67ecd9:c.instructions+=2;goto B67ecd9;
case 0x67ecdb:c.instructions+=1;goto B67ecdb;
case 0x67ece1:goto L67ece1;
case 0x67ece3:c.instructions+=4;goto B67ece3;
case 0x67ece6:c.instructions+=3;goto B67ece6;
case 0x67ece7:c.instructions+=2;goto B67ece7;
case 0x67ece9:c.instructions+=1;goto B67ece9;
case 0x67ecee:goto L67ecee;
case 0x67ecf0:c.instructions+=2;goto B67ecf0;
case 0x67ecf2:c.instructions+=1;goto B67ecf2;
case 0x67ecf8:goto L67ecf8;
case 0x67ecfa:c.instructions+=4;goto B67ecfa;
case 0x67ecfd:c.instructions+=3;goto B67ecfd;
case 0x67ecfe:c.instructions+=2;goto B67ecfe;
case 0x67ed00:c.instructions+=1;goto B67ed00;
case 0x67ed05:goto L67ed05;
case 0x67ed07:c.instructions+=2;goto B67ed07;
case 0x67ed09:c.instructions+=1;goto B67ed09;
case 0x67ed0f:goto L67ed0f;
case 0x67ed11:c.instructions+=4;goto B67ed11;
case 0x67ed14:c.instructions+=3;goto B67ed14;
case 0x67ed15:c.instructions+=2;goto B67ed15;
case 0x67ed17:c.instructions+=1;goto B67ed17;
case 0x67ed1c:goto L67ed1c;
case 0x67ed1e:c.instructions+=2;goto B67ed1e;
case 0x67ed20:c.instructions+=1;goto B67ed20;
case 0x67ed26:goto L67ed26;
case 0x67ed28:c.instructions+=4;goto B67ed28;
case 0x67ed2b:c.instructions+=3;goto B67ed2b;
case 0x67ed2c:c.instructions+=2;goto B67ed2c;
case 0x67ed2e:c.instructions+=1;goto B67ed2e;
case 0x67ed33:goto L67ed33;
case 0x67ed35:c.instructions+=2;goto B67ed35;
case 0x67ed37:c.instructions+=1;goto B67ed37;
case 0x67ed3d:goto L67ed3d;
case 0x67ed3f:c.instructions+=4;goto B67ed3f;
case 0x67ed42:c.instructions+=3;goto B67ed42;
case 0x67ed43:c.instructions+=2;goto B67ed43;
case 0x67ed45:c.instructions+=1;goto B67ed45;
case 0x67ed4a:goto L67ed4a;
case 0x67ed4c:c.instructions+=2;goto B67ed4c;
case 0x67ed4e:c.instructions+=1;goto B67ed4e;
case 0x67ed54:goto L67ed54;
case 0x67ed57:c.instructions+=12;goto B67ed57;
case 0x67ed58:c.instructions+=11;goto B67ed58;
case 0x67ed5b:c.instructions+=10;goto B67ed5b;
case 0x67ed60:c.instructions+=9;goto B67ed60;
case 0x67ed63:c.instructions+=8;goto B67ed63;
case 0x67ed66:c.instructions+=7;goto B67ed66;
case 0x67ed67:c.instructions+=6;goto B67ed67;
case 0x67ed6a:c.instructions+=5;goto B67ed6a;
case 0x67ed6f:c.instructions+=4;goto B67ed6f;
case 0x67ed70:c.instructions+=3;goto B67ed70;
case 0x67ed73:c.instructions+=2;goto B67ed73;
case 0x67ed75:c.instructions+=1;goto B67ed75;
case 0x67ed7a:goto L67ed7a;
case 0x67ed7c:c.instructions+=2;goto B67ed7c;
case 0x67ed7e:c.instructions+=1;goto B67ed7e;
case 0x67ed84:goto L67ed84;
case 0x67ed86:c.instructions+=9;goto B67ed86;
case 0x67ed89:c.instructions+=8;goto B67ed89;
case 0x67ed8a:c.instructions+=7;goto B67ed8a;
case 0x67ed8b:c.instructions+=6;goto B67ed8b;
case 0x67ed8e:c.instructions+=5;goto B67ed8e;
case 0x67ed8f:c.instructions+=4;goto B67ed8f;
case 0x67ed94:c.instructions+=3;goto B67ed94;
case 0x67ed97:c.instructions+=2;goto B67ed97;
case 0x67ed99:c.instructions+=1;goto B67ed99;
case 0x67ed9e:goto L67ed9e;
case 0x67eda0:c.instructions+=2;goto B67eda0;
case 0x67eda2:c.instructions+=1;goto B67eda2;
case 0x67eda8:goto L67eda8;
case 0x67edaa:c.instructions+=8;goto B67edaa;
case 0x67edad:c.instructions+=7;goto B67edad;
case 0x67edb3:c.instructions+=6;goto B67edb3;
case 0x67edb6:c.instructions+=5;goto B67edb6;
case 0x67edb8:c.instructions+=4;goto B67edb8;
case 0x67edb9:c.instructions+=3;goto B67edb9;
case 0x67edbe:c.instructions+=2;goto B67edbe;
case 0x67edc1:c.instructions+=1;goto B67edc1;
case 0x67edc6:goto L67edc6;
case 0x67edc8:c.instructions+=2;goto B67edc8;
case 0x67edca:c.instructions+=1;goto B67edca;
case 0x67edd0:goto L67edd0;
case 0x67edd2:c.instructions+=9;goto B67edd2;
case 0x67edd3:c.instructions+=8;goto B67edd3;
case 0x67edd6:c.instructions+=7;goto B67edd6;
case 0x67edd7:c.instructions+=6;goto B67edd7;
case 0x67edda:c.instructions+=5;goto B67edda;
case 0x67eddb:c.instructions+=4;goto B67eddb;
case 0x67ede0:c.instructions+=3;goto B67ede0;
case 0x67ede3:c.instructions+=2;goto B67ede3;
case 0x67ede5:c.instructions+=1;goto B67ede5;
case 0x67edea:goto L67edea;
case 0x67edec:c.instructions+=2;goto B67edec;
case 0x67edee:c.instructions+=1;goto B67edee;
case 0x67edf4:goto L67edf4;
case 0x67edf5:c.instructions+=10;goto B67edf5;
case 0x67edf8:c.instructions+=9;goto B67edf8;
case 0x67edf9:c.instructions+=8;goto B67edf9;
case 0x67edfc:c.instructions+=7;goto B67edfc;
case 0x67edfd:c.instructions+=6;goto B67edfd;
case 0x67ee00:c.instructions+=5;goto B67ee00;
case 0x67ee01:c.instructions+=4;goto B67ee01;
case 0x67ee06:c.instructions+=3;goto B67ee06;
case 0x67ee09:c.instructions+=2;goto B67ee09;
case 0x67ee0b:c.instructions+=1;goto B67ee0b;
case 0x67ee10:goto L67ee10;
case 0x67ee12:c.instructions+=2;goto B67ee12;
case 0x67ee14:c.instructions+=1;goto B67ee14;
case 0x67ee1a:goto L67ee1a;
case 0x67ee1b:c.instructions+=10;goto B67ee1b;
case 0x67ee1e:c.instructions+=9;goto B67ee1e;
case 0x67ee1f:c.instructions+=8;goto B67ee1f;
case 0x67ee25:c.instructions+=7;goto B67ee25;
case 0x67ee26:c.instructions+=6;goto B67ee26;
case 0x67ee2c:c.instructions+=5;goto B67ee2c;
case 0x67ee2d:c.instructions+=4;goto B67ee2d;
case 0x67ee32:c.instructions+=3;goto B67ee32;
case 0x67ee35:c.instructions+=2;goto B67ee35;
case 0x67ee37:c.instructions+=1;goto B67ee37;
case 0x67ee3c:goto L67ee3c;
case 0x67ee3e:c.instructions+=2;goto B67ee3e;
case 0x67ee40:c.instructions+=1;goto B67ee40;
case 0x67ee46:goto L67ee46;
case 0x67ee47:c.instructions+=9;goto B67ee47;
case 0x67ee48:c.instructions+=8;goto B67ee48;
case 0x67ee4e:c.instructions+=7;goto B67ee4e;
case 0x67ee4f:c.instructions+=6;goto B67ee4f;
case 0x67ee55:c.instructions+=5;goto B67ee55;
case 0x67ee56:c.instructions+=4;goto B67ee56;
case 0x67ee5b:c.instructions+=3;goto B67ee5b;
case 0x67ee5e:c.instructions+=2;goto B67ee5e;
case 0x67ee60:c.instructions+=1;goto B67ee60;
case 0x67ee65:goto L67ee65;
case 0x67ee67:c.instructions+=2;goto B67ee67;
case 0x67ee69:c.instructions+=1;goto B67ee69;
case 0x67ee6f:goto L67ee6f;
case 0x67ee70:c.instructions+=10;goto B67ee70;
case 0x67ee76:c.instructions+=9;goto B67ee76;
case 0x67ee77:c.instructions+=8;goto B67ee77;
case 0x67ee7a:c.instructions+=7;goto B67ee7a;
case 0x67ee7b:c.instructions+=6;goto B67ee7b;
case 0x67ee7e:c.instructions+=5;goto B67ee7e;
case 0x67ee7f:c.instructions+=4;goto B67ee7f;
case 0x67ee84:c.instructions+=3;goto B67ee84;
case 0x67ee87:c.instructions+=2;goto B67ee87;
case 0x67ee89:c.instructions+=1;goto B67ee89;
case 0x67ee8e:goto L67ee8e;
case 0x67ee90:c.instructions+=2;goto B67ee90;
case 0x67ee92:c.instructions+=1;goto B67ee92;
case 0x67ee98:goto L67ee98;
case 0x67ee9a:c.instructions+=10;goto B67ee9a;
case 0x67ee9d:c.instructions+=9;goto B67ee9d;
case 0x67ee9e:c.instructions+=8;goto B67ee9e;
case 0x67eea1:c.instructions+=7;goto B67eea1;
case 0x67eea2:c.instructions+=6;goto B67eea2;
case 0x67eea5:c.instructions+=5;goto B67eea5;
case 0x67eea6:c.instructions+=4;goto B67eea6;
case 0x67eeab:c.instructions+=3;goto B67eeab;
case 0x67eeae:c.instructions+=2;goto B67eeae;
case 0x67eeb0:c.instructions+=1;goto B67eeb0;
case 0x67eeb5:goto L67eeb5;
case 0x67eeb7:c.instructions+=2;goto B67eeb7;
case 0x67eeb9:c.instructions+=1;goto B67eeb9;
case 0x67eebf:goto L67eebf;
case 0x67eec1:c.instructions+=10;goto B67eec1;
case 0x67eec4:c.instructions+=9;goto B67eec4;
case 0x67eec5:c.instructions+=8;goto B67eec5;
case 0x67eec8:c.instructions+=7;goto B67eec8;
case 0x67eec9:c.instructions+=6;goto B67eec9;
case 0x67eecf:c.instructions+=5;goto B67eecf;
case 0x67eed0:c.instructions+=4;goto B67eed0;
case 0x67eed5:c.instructions+=3;goto B67eed5;
case 0x67eed8:c.instructions+=2;goto B67eed8;
case 0x67eeda:c.instructions+=1;goto B67eeda;
case 0x67eedf:goto L67eedf;
case 0x67eee1:c.instructions+=2;goto B67eee1;
case 0x67eee3:c.instructions+=1;goto B67eee3;
case 0x67eee9:goto L67eee9;
case 0x67eeea:c.instructions+=9;goto B67eeea;
case 0x67eeed:c.instructions+=8;goto B67eeed;
case 0x67eeee:c.instructions+=7;goto B67eeee;
case 0x67eef1:c.instructions+=6;goto B67eef1;
case 0x67eef4:c.instructions+=5;goto B67eef4;
case 0x67eef5:c.instructions+=4;goto B67eef5;
case 0x67eefa:c.instructions+=3;goto B67eefa;
case 0x67eefd:c.instructions+=2;goto B67eefd;
case 0x67eeff:c.instructions+=1;goto B67eeff;
case 0x67ef04:goto L67ef04;
case 0x67ef06:c.instructions+=2;goto B67ef06;
case 0x67ef08:c.instructions+=1;goto B67ef08;
case 0x67ef0e:goto L67ef0e;
case 0x67ef0f:c.instructions+=10;goto B67ef0f;
case 0x67ef12:c.instructions+=9;goto B67ef12;
case 0x67ef13:c.instructions+=8;goto B67ef13;
case 0x67ef16:c.instructions+=7;goto B67ef16;
case 0x67ef17:c.instructions+=6;goto B67ef17;
case 0x67ef1a:c.instructions+=5;goto B67ef1a;
case 0x67ef1b:c.instructions+=4;goto B67ef1b;
case 0x67ef20:c.instructions+=3;goto B67ef20;
case 0x67ef23:c.instructions+=2;goto B67ef23;
case 0x67ef25:c.instructions+=1;goto B67ef25;
case 0x67ef2a:goto L67ef2a;
case 0x67ef2c:c.instructions+=2;goto B67ef2c;
case 0x67ef2e:c.instructions+=1;goto B67ef2e;
case 0x67ef34:goto L67ef34;
case 0x67ef36:c.instructions+=9;goto B67ef36;
case 0x67ef37:c.instructions+=8;goto B67ef37;
case 0x67ef3d:c.instructions+=7;goto B67ef3d;
case 0x67ef3e:c.instructions+=6;goto B67ef3e;
case 0x67ef41:c.instructions+=5;goto B67ef41;
case 0x67ef42:c.instructions+=4;goto B67ef42;
case 0x67ef47:c.instructions+=3;goto B67ef47;
case 0x67ef4a:c.instructions+=2;goto B67ef4a;
case 0x67ef4c:c.instructions+=1;goto B67ef4c;
case 0x67ef51:goto L67ef51;
case 0x67ef53:c.instructions+=2;goto B67ef53;
case 0x67ef55:c.instructions+=1;goto B67ef55;
case 0x67ef5b:goto L67ef5b;
case 0x67ef5d:c.instructions+=9;goto B67ef5d;
case 0x67ef5e:c.instructions+=8;goto B67ef5e;
case 0x67ef61:c.instructions+=7;goto B67ef61;
case 0x67ef62:c.instructions+=6;goto B67ef62;
case 0x67ef65:c.instructions+=5;goto B67ef65;
case 0x67ef66:c.instructions+=4;goto B67ef66;
case 0x67ef6b:c.instructions+=3;goto B67ef6b;
case 0x67ef6e:c.instructions+=2;goto B67ef6e;
case 0x67ef70:c.instructions+=1;goto B67ef70;
case 0x67ef75:goto L67ef75;
case 0x67ef77:c.instructions+=2;goto B67ef77;
case 0x67ef79:c.instructions+=1;goto B67ef79;
case 0x67ef7f:goto L67ef7f;
case 0x67ef80:c.instructions+=10;goto B67ef80;
case 0x67ef83:c.instructions+=9;goto B67ef83;
case 0x67ef84:c.instructions+=8;goto B67ef84;
case 0x67ef87:c.instructions+=7;goto B67ef87;
case 0x67ef88:c.instructions+=6;goto B67ef88;
case 0x67ef8b:c.instructions+=5;goto B67ef8b;
case 0x67ef8c:c.instructions+=4;goto B67ef8c;
case 0x67ef91:c.instructions+=3;goto B67ef91;
case 0x67ef94:c.instructions+=2;goto B67ef94;
case 0x67ef96:c.instructions+=1;goto B67ef96;
case 0x67ef9b:goto L67ef9b;
case 0x67ef9d:c.instructions+=2;goto B67ef9d;
case 0x67ef9f:c.instructions+=1;goto B67ef9f;
case 0x67efa5:goto L67efa5;
case 0x67efa8:c.instructions+=4;goto B67efa8;
case 0x67efab:c.instructions+=3;goto B67efab;
case 0x67efac:c.instructions+=2;goto B67efac;
case 0x67efae:c.instructions+=1;goto B67efae;
case 0x67efb3:goto L67efb3;
case 0x67efb5:c.instructions+=1;goto B67efb5;
case 0x67efbb:goto L67efbb;
case 0x67efbd:c.instructions+=2;goto B67efbd;
case 0x67efbf:c.instructions+=1;goto B67efbf;
case 0x67efc2:goto L67efc2;
case 0x67efc6:c.instructions+=4;goto B67efc6;
case 0x67efc7:c.instructions+=3;goto B67efc7;
case 0x67efc9:c.instructions+=2;goto B67efc9;
case 0x67efcc:c.instructions+=1;goto B67efcc;
case 0x67efce:goto L67efce;
case 0x67efd0:c.instructions+=2;goto B67efd0;
case 0x67efd3:c.instructions+=1;goto B67efd3;
case 0x67efd5:goto L67efd5;
case 0x67efd8:c.instructions+=1;goto B67efd8;
case 0x67efda:goto L67efda;
case 0x67efdd:c.instructions+=6;goto B67efdd;
case 0x67efe0:c.instructions+=5;goto B67efe0;
case 0x67efe3:c.instructions+=4;goto B67efe3;
case 0x67efe5:c.instructions+=3;goto B67efe5;
case 0x67efe8:c.instructions+=2;goto B67efe8;
case 0x67efe9:c.instructions+=1;goto B67efe9;
case 0x67efeb:goto L67efeb;
case 0x67efee:c.instructions+=3;goto B67efee;
case 0x67eff0:c.instructions+=2;goto B67eff0;
case 0x67eff3:c.instructions+=1;goto B67eff3;
case 0x67eff8:goto L67eff8;
case 0x67effa:c.instructions+=2;goto B67effa;
case 0x67effc:c.instructions+=1;goto B67effc;
default:missing_instruction(c.pc);}
B67e002:L67e002:{c.instructions+=1;NFSU2_TR(0x67e002);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e007ull));
TAIL_STATIC(0x6758ceu,675);
}
B67e007:L67e007:{c.instructions+=3;NFSU2_TR(0x67e007);
__builtin_memmove((R+24),(R+0),4);
}
B67e009:{NFSU2_TR(0x67e009);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e00b:{NFSU2_TR(0x67e00b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e011:L67e011:{c.instructions+=8;NFSU2_TR(0x67e011);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e013:{NFSU2_TR(0x67e013);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e019:{NFSU2_TR(0x67e019);
__builtin_memmove((R+4),(R+12),4);
}
B67e01b:{NFSU2_TR(0x67e01b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e021:{NFSU2_TR(0x67e021);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e027:{NFSU2_TR(0x67e027);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e02a:{NFSU2_TR(0x67e02a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e02d:{NFSU2_TR(0x67e02d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e032ull));
TAIL_STATIC(0x6758ceu,675);
}
B67e032:L67e032:{c.instructions+=3;NFSU2_TR(0x67e032);
__builtin_memmove((R+24),(R+0),4);
}
B67e034:{NFSU2_TR(0x67e034);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e036:{NFSU2_TR(0x67e036);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e03c:L67e03c:{c.instructions+=10;NFSU2_TR(0x67e03c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e03f:{NFSU2_TR(0x67e03f);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e041:{NFSU2_TR(0x67e041);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e047:{NFSU2_TR(0x67e047);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B67e04c:{NFSU2_TR(0x67e04c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e052:{NFSU2_TR(0x67e052);
__builtin_memmove((R+4),(R+12),4);
}
B67e054:{NFSU2_TR(0x67e054);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e05a:{NFSU2_TR(0x67e05a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e05b:{NFSU2_TR(0x67e05b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e05e:{NFSU2_TR(0x67e05e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e063ull));
TAIL_STATIC(0x6758ceu,675);
}
B67e063:L67e063:{c.instructions+=3;NFSU2_TR(0x67e063);
__builtin_memmove((R+24),(R+0),4);
}
B67e065:{NFSU2_TR(0x67e065);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e067:{NFSU2_TR(0x67e067);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e06d:L67e06d:{c.instructions+=8;NFSU2_TR(0x67e06d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e06f:{NFSU2_TR(0x67e06f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e075:{NFSU2_TR(0x67e075);
__builtin_memmove((R+4),(R+12),4);
}
B67e077:{NFSU2_TR(0x67e077);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e07d:{NFSU2_TR(0x67e07d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e080:{NFSU2_TR(0x67e080);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e083:{NFSU2_TR(0x67e083);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e086:{NFSU2_TR(0x67e086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e08bull));
TAIL_STATIC(0x6758ceu,675);
}
B67e08b:L67e08b:{c.instructions+=3;NFSU2_TR(0x67e08b);
__builtin_memmove((R+24),(R+0),4);
}
B67e08d:{NFSU2_TR(0x67e08d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e08f:{NFSU2_TR(0x67e08f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e095:L67e095:{c.instructions+=2;NFSU2_TR(0x67e095);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e098:{NFSU2_TR(0x67e098);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67e09e:L67e09e:{c.instructions+=4;NFSU2_TR(0x67e09e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e0a1:{NFSU2_TR(0x67e0a1);
__builtin_memmove((R+4),(R+12),4);
}
B67e0a3:{NFSU2_TR(0x67e0a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e0a6:{NFSU2_TR(0x67e0a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e0abull));
TAIL_STATIC(0x673b2cu,673);
}
B67e0ab:L67e0ab:{c.instructions+=3;NFSU2_TR(0x67e0ab);
__builtin_memmove((R+24),(R+0),4);
}
B67e0ad:{NFSU2_TR(0x67e0ad);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e0af:{NFSU2_TR(0x67e0af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e0b5:L67e0b5:{c.instructions+=4;NFSU2_TR(0x67e0b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e0b8:{NFSU2_TR(0x67e0b8);
__builtin_memmove((R+4),(R+12),4);
}
B67e0ba:{NFSU2_TR(0x67e0ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e0bd:{NFSU2_TR(0x67e0bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e0c2ull));
TAIL_STATIC(0x673b2cu,673);
}
B67e0c2:L67e0c2:{c.instructions+=3;NFSU2_TR(0x67e0c2);
__builtin_memmove((R+24),(R+0),4);
}
B67e0c4:{NFSU2_TR(0x67e0c4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e0c6:{NFSU2_TR(0x67e0c6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e0cc:L67e0cc:{c.instructions+=8;NFSU2_TR(0x67e0cc);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e0ce:{NFSU2_TR(0x67e0ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e0cf:{NFSU2_TR(0x67e0cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e0d2:{NFSU2_TR(0x67e0d2);
__builtin_memmove((R+4),(R+12),4);
}
B67e0d4:{NFSU2_TR(0x67e0d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e0d7:{NFSU2_TR(0x67e0d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e0da:{NFSU2_TR(0x67e0da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e0dd:{NFSU2_TR(0x67e0dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e0e2ull));
TAIL_STATIC(0x6758ceu,675);
}
B67e0e2:L67e0e2:{c.instructions+=3;NFSU2_TR(0x67e0e2);
__builtin_memmove((R+24),(R+0),4);
}
B67e0e4:{NFSU2_TR(0x67e0e4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e0e6:{NFSU2_TR(0x67e0e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e0ec:L67e0ec:{c.instructions+=3;NFSU2_TR(0x67e0ec);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e0ee:{NFSU2_TR(0x67e0ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e0f1:{NFSU2_TR(0x67e0f1);
TAIL_STATIC(0x67c905u,67c);
}
B67e0f6:L67e0f6:{c.instructions+=3;NFSU2_TR(0x67e0f6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67e0f8:{NFSU2_TR(0x67e0f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e0fb:{NFSU2_TR(0x67e0fb);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67e101:L67e101:{c.instructions+=2;NFSU2_TR(0x67e101);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e104:{NFSU2_TR(0x67e104);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67e10a:L67e10a:{c.instructions+=2;NFSU2_TR(0x67e10a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e10d:{NFSU2_TR(0x67e10d);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67e113:L67e113:{c.instructions+=3;NFSU2_TR(0x67e113);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e116:{NFSU2_TR(0x67e116);
__builtin_memmove((R+4),(R+12),4);
}
B67e118:{NFSU2_TR(0x67e118);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e11dull));
TAIL_STATIC(0x673a0fu,673);
}
B67e11d:L67e11d:{c.instructions+=3;NFSU2_TR(0x67e11d);
__builtin_memmove((R+8),(R+0),4);
}
B67e11f:{NFSU2_TR(0x67e11f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67e121:{NFSU2_TR(0x67e121);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67e127:L67e127:{c.instructions+=3;NFSU2_TR(0x67e127);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67e129:{NFSU2_TR(0x67e129);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e12c:{NFSU2_TR(0x67e12c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67e13c;}}
}
B67e12e:L67e12e:{c.instructions+=6;NFSU2_TR(0x67e12e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67e131:{NFSU2_TR(0x67e131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B67e133:{NFSU2_TR(0x67e133);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67e136:{NFSU2_TR(0x67e136);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B67e137:{NFSU2_TR(0x67e137);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67e13a:{NFSU2_TR(0x67e13a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e12eu);}goto L67e12e;}}
}
B67e13c:L67e13c:{c.instructions+=4;NFSU2_TR(0x67e13c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e13f:{NFSU2_TR(0x67e13f);
__builtin_memmove((R+4),(R+12),4);
}
B67e141:{NFSU2_TR(0x67e141);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e144:{NFSU2_TR(0x67e144);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e149ull));
TAIL_STATIC(0x673b2cu,673);
}
B67e149:L67e149:{c.instructions+=3;NFSU2_TR(0x67e149);
__builtin_memmove((R+24),(R+0),4);
}
B67e14b:{NFSU2_TR(0x67e14b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e14d:{NFSU2_TR(0x67e14d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e153:L67e153:{c.instructions+=4;NFSU2_TR(0x67e153);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e154:{NFSU2_TR(0x67e154);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e157:{NFSU2_TR(0x67e157);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e158:{NFSU2_TR(0x67e158);
{goto L67ea46;}
}
B67e15d:L67e15d:{c.instructions+=3;NFSU2_TR(0x67e15d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67e15f:{NFSU2_TR(0x67e15f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e162:{NFSU2_TR(0x67e162);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67e168:L67e168:{c.instructions+=2;NFSU2_TR(0x67e168);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e16b:{NFSU2_TR(0x67e16b);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67e171:L67e171:{c.instructions+=2;NFSU2_TR(0x67e171);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e174:{NFSU2_TR(0x67e174);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67e17a:L67e17a:{c.instructions+=3;NFSU2_TR(0x67e17a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e17d:{NFSU2_TR(0x67e17d);
__builtin_memmove((R+4),(R+12),4);
}
B67e17f:{NFSU2_TR(0x67e17f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e184ull));
TAIL_STATIC(0x673a0fu,673);
}
B67e184:L67e184:{c.instructions+=3;NFSU2_TR(0x67e184);
__builtin_memmove((R+8),(R+0),4);
}
B67e186:{NFSU2_TR(0x67e186);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67e188:{NFSU2_TR(0x67e188);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67e18e:L67e18e:{c.instructions+=3;NFSU2_TR(0x67e18e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67e190:{NFSU2_TR(0x67e190);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e193:{NFSU2_TR(0x67e193);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67ea2a;}}
}
B67e199:L67e199:{c.instructions+=6;NFSU2_TR(0x67e199);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67e19c:{NFSU2_TR(0x67e19c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B67e19e:{NFSU2_TR(0x67e19e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67e1a1:{NFSU2_TR(0x67e1a1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B67e1a2:{NFSU2_TR(0x67e1a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67e1a5:{NFSU2_TR(0x67e1a5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e199u);}goto L67e199;}}
}
B67e1a7:L67e1a7:{c.instructions+=1;NFSU2_TR(0x67e1a7);
{goto L67ea2a;}
}
B67e1ac:L67e1ac:{c.instructions+=4;NFSU2_TR(0x67e1ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e1af:{NFSU2_TR(0x67e1af);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67e1b1:{NFSU2_TR(0x67e1b1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67e1b3:{NFSU2_TR(0x67e1b3);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67e1b9:L67e1b9:{c.instructions+=2;NFSU2_TR(0x67e1b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e1bc:{NFSU2_TR(0x67e1bc);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67e1c2:L67e1c2:{c.instructions+=2;NFSU2_TR(0x67e1c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e1c5:{NFSU2_TR(0x67e1c5);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67e1cb:L67e1cb:{c.instructions+=4;NFSU2_TR(0x67e1cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e1ce:{NFSU2_TR(0x67e1ce);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67e1d0:{NFSU2_TR(0x67e1d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e1d3:{NFSU2_TR(0x67e1d3);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67e1d9:L67e1d9:{c.instructions+=2;NFSU2_TR(0x67e1d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e1dd:{NFSU2_TR(0x67e1dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6808fdu,680);}
}
B67e1e3:L67e1e3:{c.instructions+=2;NFSU2_TR(0x67e1e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e1e7:{NFSU2_TR(0x67e1e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67e1f5;}}
}
B67e1e9:L67e1e9:{c.instructions+=4;NFSU2_TR(0x67e1e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e1ef:{NFSU2_TR(0x67e1ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e1f2:{NFSU2_TR(0x67e1f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e1f3:{NFSU2_TR(0x67e1f3);
{goto L67e223;}
}
B67e1f5:L67e1f5:{c.instructions+=8;NFSU2_TR(0x67e1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e1f8:{NFSU2_TR(0x67e1f8);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e1fd:{NFSU2_TR(0x67e1fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e200:{NFSU2_TR(0x67e200);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeccull))));
__builtin_memmove((R+4),(U+0),4);
}
B67e206:{NFSU2_TR(0x67e206);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e209:{NFSU2_TR(0x67e209);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e20c:{NFSU2_TR(0x67e20c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e20e:{NFSU2_TR(0x67e20e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e213ull));
TAIL_STATIC(0x672a51u,672);
}
B67e213:L67e213:{c.instructions+=4;NFSU2_TR(0x67e213);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e219:{NFSU2_TR(0x67e219);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeccull))));
__builtin_memmove((R+0),(U+0),4);
}
B67e21f:{NFSU2_TR(0x67e21f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e222:{NFSU2_TR(0x67e222);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e223:L67e223:{c.instructions+=2;NFSU2_TR(0x67e223);
__builtin_memmove((R+4),(R+12),4);
}
B67e225:{NFSU2_TR(0x67e225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e22aull));
TAIL_STATIC(0x678640u,678);
}
B67e22a:L67e22a:{c.instructions+=3;NFSU2_TR(0x67e22a);
__builtin_memmove((R+24),(R+0),4);
}
B67e22c:{NFSU2_TR(0x67e22c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e22e:{NFSU2_TR(0x67e22e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e234:L67e234:{c.instructions+=10;NFSU2_TR(0x67e234);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e237:{NFSU2_TR(0x67e237);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67e23a:{NFSU2_TR(0x67e23a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e23d:{NFSU2_TR(0x67e23d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e240:{NFSU2_TR(0x67e240);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e243:{NFSU2_TR(0x67e243);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e246:{NFSU2_TR(0x67e246);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67e248:{NFSU2_TR(0x67e248);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e24b:{NFSU2_TR(0x67e24b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e24e:{NFSU2_TR(0x67e24e);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67e254:L67e254:{c.instructions+=2;NFSU2_TR(0x67e254);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e258:{NFSU2_TR(0x67e258);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6808fdu,680);}
}
B67e25e:L67e25e:{c.instructions+=2;NFSU2_TR(0x67e25e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e262:{NFSU2_TR(0x67e262);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67e28a;}}
}
B67e264:L67e264:{c.instructions+=5;NFSU2_TR(0x67e264);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e26a:{NFSU2_TR(0x67e26a);
__builtin_memmove((R+4),(R+12),4);
}
B67e26c:{NFSU2_TR(0x67e26c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e26f:{NFSU2_TR(0x67e26f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e270:{NFSU2_TR(0x67e270);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e275ull));
TAIL_STATIC(0x678640u,678);
}
B67e275:L67e275:{c.instructions+=3;NFSU2_TR(0x67e275);
__builtin_memmove((R+24),(R+0),4);
}
B67e277:{NFSU2_TR(0x67e277);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e279:{NFSU2_TR(0x67e279);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e27f:L67e27f:{c.instructions+=4;NFSU2_TR(0x67e27f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e282:{NFSU2_TR(0x67e282);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67e285:{NFSU2_TR(0x67e285);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e288:{NFSU2_TR(0x67e288);
{goto L67e2d2;}
}
B67e28a:L67e28a:{c.instructions+=8;NFSU2_TR(0x67e28a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e28d:{NFSU2_TR(0x67e28d);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e292:{NFSU2_TR(0x67e292);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e295:{NFSU2_TR(0x67e295);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67e29b:{NFSU2_TR(0x67e29b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e29e:{NFSU2_TR(0x67e29e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e2a1:{NFSU2_TR(0x67e2a1);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e2a3:{NFSU2_TR(0x67e2a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e2a8ull));
TAIL_STATIC(0x672a51u,672);
}
B67e2a8:L67e2a8:{c.instructions+=6;NFSU2_TR(0x67e2a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e2ae:{NFSU2_TR(0x67e2ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67e2b4:{NFSU2_TR(0x67e2b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e2b7:{NFSU2_TR(0x67e2b7);
__builtin_memmove((R+4),(R+12),4);
}
B67e2b9:{NFSU2_TR(0x67e2b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e2ba:{NFSU2_TR(0x67e2ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e2bfull));
TAIL_STATIC(0x678640u,678);
}
B67e2bf:L67e2bf:{c.instructions+=3;NFSU2_TR(0x67e2bf);
__builtin_memmove((R+24),(R+0),4);
}
B67e2c1:{NFSU2_TR(0x67e2c1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e2c3:{NFSU2_TR(0x67e2c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e2c9:L67e2c9:{c.instructions+=3;NFSU2_TR(0x67e2c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e2cc:{NFSU2_TR(0x67e2cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67e2cf:{NFSU2_TR(0x67e2cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e2d2:L67e2d2:{c.instructions+=5;NFSU2_TR(0x67e2d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e2d5:{NFSU2_TR(0x67e2d5);
__builtin_memmove((R+0),(R+4),4);
}
B67e2d7:{NFSU2_TR(0x67e2d7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e2da:{NFSU2_TR(0x67e2da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e2dd:{NFSU2_TR(0x67e2dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6808fdu,680);}
}
B67e2e3:L67e2e3:{c.instructions+=4;NFSU2_TR(0x67e2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e2e6:{NFSU2_TR(0x67e2e6);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B67e2ea:{NFSU2_TR(0x67e2ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e2ed:{NFSU2_TR(0x67e2ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6808fdu,680);}
}
B67e2f3:L67e2f3:{c.instructions+=8;NFSU2_TR(0x67e2f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e2f6:{NFSU2_TR(0x67e2f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67e2f9:{NFSU2_TR(0x67e2f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e2fc:{NFSU2_TR(0x67e2fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e2fd:{NFSU2_TR(0x67e2fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e300:{NFSU2_TR(0x67e300);
__builtin_memmove((R+4),(R+12),4);
}
B67e302:{NFSU2_TR(0x67e302);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e305:{NFSU2_TR(0x67e305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e30aull));
TAIL_STATIC(0x674b9fu,674);
}
B67e30a:L67e30a:{c.instructions+=3;NFSU2_TR(0x67e30a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67e30c:{NFSU2_TR(0x67e30c);
__builtin_memmove((R+4),(R+12),4);
}
B67e30e:{NFSU2_TR(0x67e30e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67e495;}}
}
B67e314:L67e314:{c.instructions+=3;NFSU2_TR(0x67e314);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67e317:{NFSU2_TR(0x67e317);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e318:{NFSU2_TR(0x67e318);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e31dull));
TAIL_STATIC(0x673a0fu,673);
}
B67e31d:L67e31d:{c.instructions+=2;NFSU2_TR(0x67e31d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67e31f:{NFSU2_TR(0x67e31f);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67e325:L67e325:{c.instructions+=3;NFSU2_TR(0x67e325);
__builtin_memmove((R+8),(R+24),4);
}
B67e327:{NFSU2_TR(0x67e327);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67e329:{NFSU2_TR(0x67e329);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67e32c:L67e32c:{c.instructions+=5;NFSU2_TR(0x67e32c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67e330:{NFSU2_TR(0x67e330);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67e331:{NFSU2_TR(0x67e331);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B67e333:{NFSU2_TR(0x67e333);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x5ull))));
}
B67e336:{NFSU2_TR(0x67e336);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e32cu);}goto L67e32c;}}
}
B67e338:L67e338:{c.instructions+=3;NFSU2_TR(0x67e338);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e33b:{NFSU2_TR(0x67e33b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e33e:{NFSU2_TR(0x67e33e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67af18u,67a);}
}
B67e344:L67e344:{c.instructions+=2;NFSU2_TR(0x67e344);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e347:{NFSU2_TR(0x67e347);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e34a:L67e34a:{c.instructions+=3;NFSU2_TR(0x67e34a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e34d:{NFSU2_TR(0x67e34d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e350:{NFSU2_TR(0x67e350);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67e45d;}}
}
B67e356:L67e356:{c.instructions+=2;NFSU2_TR(0x67e356);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e359:{NFSU2_TR(0x67e359);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67e3a4;}}
}
B67e35b:L67e35b:{c.instructions+=17;NFSU2_TR(0x67e35b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e35e:{NFSU2_TR(0x67e35e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67e361:{NFSU2_TR(0x67e361);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67e364:{NFSU2_TR(0x67e364);
__builtin_memmove((R+4),(R+0),4);
}
B67e366:{NFSU2_TR(0x67e366);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B67e36a:{NFSU2_TR(0x67e36a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B67e36d:{NFSU2_TR(0x67e36d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e370:{NFSU2_TR(0x67e370);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B67e373:{NFSU2_TR(0x67e373);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67e376:{NFSU2_TR(0x67e376);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67e379:{NFSU2_TR(0x67e379);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e37c:{NFSU2_TR(0x67e37c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67e37f:{NFSU2_TR(0x67e37f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67e382:{NFSU2_TR(0x67e382);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67e385:{NFSU2_TR(0x67e385);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e388:{NFSU2_TR(0x67e388);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67e38b:{NFSU2_TR(0x67e38b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B67e38d:L67e38d:{c.instructions+=9;NFSU2_TR(0x67e38d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B67e38f:{NFSU2_TR(0x67e38f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B67e392:{NFSU2_TR(0x67e392);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67e395:{NFSU2_TR(0x67e395);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67e398:{NFSU2_TR(0x67e398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B67e39a:{NFSU2_TR(0x67e39a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B67e39c:{NFSU2_TR(0x67e39c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B67e39f:{NFSU2_TR(0x67e39f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67e3a2:{NFSU2_TR(0x67e3a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e38du);}goto L67e38d;}}
}
B67e3a4:L67e3a4:{c.instructions+=4;NFSU2_TR(0x67e3a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e3a7:{NFSU2_TR(0x67e3a7);
__builtin_memmove((R+4),(R+12),4);
}
B67e3a9:{NFSU2_TR(0x67e3a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e3ac:{NFSU2_TR(0x67e3ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e3b1ull));
TAIL_STATIC(0x673b2cu,673);
}
B67e3b1:L67e3b1:{c.instructions+=3;NFSU2_TR(0x67e3b1);
__builtin_memmove((R+24),(R+0),4);
}
B67e3b3:{NFSU2_TR(0x67e3b3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e3b5:{NFSU2_TR(0x67e3b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e3bb:L67e3bb:{c.instructions+=12;NFSU2_TR(0x67e3bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e3be:{NFSU2_TR(0x67e3be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e3bf:{NFSU2_TR(0x67e3bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e3c2:{NFSU2_TR(0x67e3c2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67e3c7:{NFSU2_TR(0x67e3c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e3ca:{NFSU2_TR(0x67e3ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e3cd:{NFSU2_TR(0x67e3cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e3d0:{NFSU2_TR(0x67e3d0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B67e3d5:{NFSU2_TR(0x67e3d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e3d6:{NFSU2_TR(0x67e3d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e3d9:{NFSU2_TR(0x67e3d9);
__builtin_memmove((R+4),(R+12),4);
}
B67e3db:{NFSU2_TR(0x67e3db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e3e0ull));
TAIL_STATIC(0x6758ceu,675);
}
B67e3e0:L67e3e0:{c.instructions+=3;NFSU2_TR(0x67e3e0);
__builtin_memmove((R+24),(R+0),4);
}
B67e3e2:{NFSU2_TR(0x67e3e2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e3e4:{NFSU2_TR(0x67e3e4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e3ea:L67e3ea:{c.instructions+=2;NFSU2_TR(0x67e3ea);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e3ed:{NFSU2_TR(0x67e3ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67e3f4;}}
}
B67e3ef:L67e3ef:{c.instructions+=2;NFSU2_TR(0x67e3ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67e3f2:{NFSU2_TR(0x67e3f2);
{goto L67e435;}
}
B67e3f4:L67e3f4:{c.instructions+=4;NFSU2_TR(0x67e3f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e3f7:{NFSU2_TR(0x67e3f7);
__builtin_memmove((R+4),(R+12),4);
}
B67e3f9:{NFSU2_TR(0x67e3f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e3fc:{NFSU2_TR(0x67e3fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e401ull));
TAIL_STATIC(0x673b2cu,673);
}
B67e401:L67e401:{c.instructions+=3;NFSU2_TR(0x67e401);
__builtin_memmove((R+24),(R+0),4);
}
B67e403:{NFSU2_TR(0x67e403);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e405:{NFSU2_TR(0x67e405);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e40b:L67e40b:{c.instructions+=10;NFSU2_TR(0x67e40b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e40e:{NFSU2_TR(0x67e40e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e40f:{NFSU2_TR(0x67e40f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e412:{NFSU2_TR(0x67e412);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B67e417:{NFSU2_TR(0x67e417);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e41a:{NFSU2_TR(0x67e41a);
__builtin_memmove((R+4),(R+12),4);
}
B67e41c:{NFSU2_TR(0x67e41c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e41f:{NFSU2_TR(0x67e41f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e420:{NFSU2_TR(0x67e420);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e423:{NFSU2_TR(0x67e423);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e428ull));
TAIL_STATIC(0x6758ceu,675);
}
B67e428:L67e428:{c.instructions+=3;NFSU2_TR(0x67e428);
__builtin_memmove((R+24),(R+0),4);
}
B67e42a:{NFSU2_TR(0x67e42a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e42c:{NFSU2_TR(0x67e42c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e432:L67e432:{c.instructions+=1;NFSU2_TR(0x67e432);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67e435:L67e435:{c.instructions+=5;NFSU2_TR(0x67e435);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67e438:{NFSU2_TR(0x67e438);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67e43b:{NFSU2_TR(0x67e43b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B67e43e:{NFSU2_TR(0x67e43e);
__builtin_memmove((R+0),(R+4),4);
}
B67e440:{NFSU2_TR(0x67e440);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B67e443:L67e443:{c.instructions+=1;NFSU2_TR(0x67e443);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L67e445;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e443u);}goto L67e443;}
}
B67e445:L67e445:{c.instructions+=4;NFSU2_TR(0x67e445);
__builtin_memmove((R+4),(R+0),4);
}
B67e447:{NFSU2_TR(0x67e447);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B67e44a:{NFSU2_TR(0x67e44a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67e44d:{NFSU2_TR(0x67e44d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e450:L67e450:{c.instructions+=1;NFSU2_TR(0x67e450);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L67e452;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e450u);}goto L67e450;}
}
B67e452:L67e452:{c.instructions+=3;NFSU2_TR(0x67e452);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67e454:{NFSU2_TR(0x67e454);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67e457:{NFSU2_TR(0x67e457);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e356u);}goto L67e356;}}
}
B67e45d:L67e45d:{c.instructions+=3;NFSU2_TR(0x67e45d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67e45f:{NFSU2_TR(0x67e45f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e462:{NFSU2_TR(0x67e462);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67e47d;}}
}
B67e464:L67e464:{c.instructions+=3;NFSU2_TR(0x67e464);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67e467:{NFSU2_TR(0x67e467);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67e46a:{NFSU2_TR(0x67e46a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67e46d:L67e46d:{c.instructions+=7;NFSU2_TR(0x67e46d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67e470:{NFSU2_TR(0x67e470);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B67e473:{NFSU2_TR(0x67e473);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B67e475:{NFSU2_TR(0x67e475);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B67e476:{NFSU2_TR(0x67e476);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B67e478:{NFSU2_TR(0x67e478);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67e47b:{NFSU2_TR(0x67e47b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e46du);}goto L67e46d;}}
}
B67e47d:L67e47d:{c.instructions+=5;NFSU2_TR(0x67e47d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67e480:{NFSU2_TR(0x67e480);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e483:{NFSU2_TR(0x67e483);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67e487:{NFSU2_TR(0x67e487);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67e48a:{NFSU2_TR(0x67e48a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e34au);}goto L67e34a;}}
}
B67e490:L67e490:{c.instructions+=1;NFSU2_TR(0x67e490);
TAIL_STATIC(0x67af18u,67a);
}
B67e495:L67e495:{c.instructions+=7;NFSU2_TR(0x67e495);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67e498:{NFSU2_TR(0x67e498);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e49b:{NFSU2_TR(0x67e49b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e49c:{NFSU2_TR(0x67e49c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e49f:{NFSU2_TR(0x67e49f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e4a2:{NFSU2_TR(0x67e4a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e4a5:{NFSU2_TR(0x67e4a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e4aaull));
TAIL_STATIC(0x674d33u,674);
}
B67e4aa:L67e4aa:{c.instructions+=3;NFSU2_TR(0x67e4aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B67e4ac:{NFSU2_TR(0x67e4ac);
__builtin_memmove((R+4),(R+12),4);
}
B67e4ae:{NFSU2_TR(0x67e4ae);
if(r1(R+518)){{goto L67e5c7;}}
}
B67e4b4:L67e4b4:{c.instructions+=2;NFSU2_TR(0x67e4b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e4ba:{NFSU2_TR(0x67e4ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e4bfull));
TAIL_STATIC(0x673a0fu,673);
}
B67e4bf:L67e4bf:{c.instructions+=3;NFSU2_TR(0x67e4bf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67e4c1:{NFSU2_TR(0x67e4c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e4c4:{NFSU2_TR(0x67e4c4);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67e4ca:L67e4ca:{c.instructions+=3;NFSU2_TR(0x67e4ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e4cd:{NFSU2_TR(0x67e4cd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67e4cf:{NFSU2_TR(0x67e4cf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67e519;}}
}
B67e4d1:L67e4d1:{c.instructions+=7;NFSU2_TR(0x67e4d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67e4d4:{NFSU2_TR(0x67e4d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e4d7:{NFSU2_TR(0x67e4d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67e4da:{NFSU2_TR(0x67e4da);
__builtin_memmove((R+8),(R+24),4);
}
B67e4dc:{NFSU2_TR(0x67e4dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e4df:{NFSU2_TR(0x67e4df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e4e2:{NFSU2_TR(0x67e4e2);
{goto L67e4e7;}
}
B67e4e4:L67e4e4:{c.instructions+=1;NFSU2_TR(0x67e4e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e4e7:L67e4e7:{c.instructions+=2;NFSU2_TR(0x67e4e7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67e4e9:{NFSU2_TR(0x67e4e9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67e508;}}
}
B67e4eb:L67e4eb:{c.instructions+=4;NFSU2_TR(0x67e4eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67e4ee:{NFSU2_TR(0x67e4ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67e4f1:{NFSU2_TR(0x67e4f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67e4f4:{NFSU2_TR(0x67e4f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e4f7:L67e4f7:{c.instructions+=6;NFSU2_TR(0x67e4f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B67e4f9:{NFSU2_TR(0x67e4f9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B67e4fb:{NFSU2_TR(0x67e4fb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B67e4fe:{NFSU2_TR(0x67e4fe);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B67e500:{NFSU2_TR(0x67e500);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67e503:{NFSU2_TR(0x67e503);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e4f7u);}goto L67e4f7;}}
}
B67e505:L67e505:{c.instructions+=1;NFSU2_TR(0x67e505);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67e508:L67e508:{c.instructions+=6;NFSU2_TR(0x67e508);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67e50c:{NFSU2_TR(0x67e50c);
__builtin_memmove((R+0),(R+8),4);
}
B67e50e:{NFSU2_TR(0x67e50e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67e511:{NFSU2_TR(0x67e511);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B67e514:{NFSU2_TR(0x67e514);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67e517:{NFSU2_TR(0x67e517);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e4e4u);}goto L67e4e4;}}
}
B67e519:L67e519:{c.instructions+=4;NFSU2_TR(0x67e519);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e51c:{NFSU2_TR(0x67e51c);
__builtin_memmove((R+4),(R+12),4);
}
B67e51e:{NFSU2_TR(0x67e51e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e521:{NFSU2_TR(0x67e521);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e526ull));
TAIL_STATIC(0x673b2cu,673);
}
B67e526:L67e526:{c.instructions+=3;NFSU2_TR(0x67e526);
__builtin_memmove((R+24),(R+0),4);
}
B67e528:{NFSU2_TR(0x67e528);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e52a:{NFSU2_TR(0x67e52a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e530:L67e530:{c.instructions+=3;NFSU2_TR(0x67e530);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e533:{NFSU2_TR(0x67e533);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e536:{NFSU2_TR(0x67e536);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67af18u,67a);}
}
B67e53c:L67e53c:{c.instructions+=4;NFSU2_TR(0x67e53c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e53f:{NFSU2_TR(0x67e53f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e542:{NFSU2_TR(0x67e542);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e545:{NFSU2_TR(0x67e545);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e548:L67e548:{c.instructions+=3;NFSU2_TR(0x67e548);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e54b:{NFSU2_TR(0x67e54b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e54e:{NFSU2_TR(0x67e54e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67e5a5;}}
}
B67e550:L67e550:{c.instructions+=8;NFSU2_TR(0x67e550);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e553:{NFSU2_TR(0x67e553);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67e558:{NFSU2_TR(0x67e558);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x50000000ull))));
}
B67e55d:{NFSU2_TR(0x67e55d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e560:{NFSU2_TR(0x67e560);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e563:{NFSU2_TR(0x67e563);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e566:{NFSU2_TR(0x67e566);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e569:{NFSU2_TR(0x67e569);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e56c:L67e56c:{c.instructions+=8;NFSU2_TR(0x67e56c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e56d:{NFSU2_TR(0x67e56d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e570:{NFSU2_TR(0x67e570);
__builtin_memmove((R+4),(R+12),4);
}
B67e572:{NFSU2_TR(0x67e572);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e575:{NFSU2_TR(0x67e575);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e578:{NFSU2_TR(0x67e578);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e57b:{NFSU2_TR(0x67e57b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e57e:{NFSU2_TR(0x67e57e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e583ull));
TAIL_STATIC(0x6758ceu,675);
}
B67e583:L67e583:{c.instructions+=3;NFSU2_TR(0x67e583);
__builtin_memmove((R+24),(R+0),4);
}
B67e585:{NFSU2_TR(0x67e585);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e587:{NFSU2_TR(0x67e587);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e58d:L67e58d:{c.instructions+=8;NFSU2_TR(0x67e58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e590:{NFSU2_TR(0x67e590);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67e593:{NFSU2_TR(0x67e593);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67e597:{NFSU2_TR(0x67e597);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67e59a:{NFSU2_TR(0x67e59a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B67e59d:{NFSU2_TR(0x67e59d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e5a0:{NFSU2_TR(0x67e5a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67e5a3:{NFSU2_TR(0x67e5a3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e56cu);}goto L67e56c;}}
}
B67e5a5:L67e5a5:{c.instructions+=10;NFSU2_TR(0x67e5a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e5a8:{NFSU2_TR(0x67e5a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67e5ab:{NFSU2_TR(0x67e5ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67e5ae:{NFSU2_TR(0x67e5ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B67e5b1:{NFSU2_TR(0x67e5b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e5b4:{NFSU2_TR(0x67e5b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67e5b7:{NFSU2_TR(0x67e5b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B67e5ba:{NFSU2_TR(0x67e5ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e5bd:{NFSU2_TR(0x67e5bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67e5c0:{NFSU2_TR(0x67e5c0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e548u);}goto L67e548;}}
}
B67e5c2:L67e5c2:{c.instructions+=1;NFSU2_TR(0x67e5c2);
TAIL_STATIC(0x67af18u,67a);
}
B67e5c7:L67e5c7:{c.instructions+=3;NFSU2_TR(0x67e5c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67e5ca:{NFSU2_TR(0x67e5ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e5cb:{NFSU2_TR(0x67e5cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e5d0ull));
TAIL_STATIC(0x673a0fu,673);
}
B67e5d0:L67e5d0:{c.instructions+=2;NFSU2_TR(0x67e5d0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67e5d2:{NFSU2_TR(0x67e5d2);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67e5d8:L67e5d8:{c.instructions+=3;NFSU2_TR(0x67e5d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67e5db:{NFSU2_TR(0x67e5db);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67e5dd:{NFSU2_TR(0x67e5dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67e5e0:L67e5e0:{c.instructions+=5;NFSU2_TR(0x67e5e0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67e5e4:{NFSU2_TR(0x67e5e4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67e5e5:{NFSU2_TR(0x67e5e5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B67e5e7:{NFSU2_TR(0x67e5e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x5ull))));
}
B67e5ea:{NFSU2_TR(0x67e5ea);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e5e0u);}goto L67e5e0;}}
}
B67e5ec:L67e5ec:{c.instructions+=3;NFSU2_TR(0x67e5ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e5ef:{NFSU2_TR(0x67e5ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e5f2:{NFSU2_TR(0x67e5f2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x67af18u,67a);}
}
B67e5f8:L67e5f8:{c.instructions+=3;NFSU2_TR(0x67e5f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e5fb:{NFSU2_TR(0x67e5fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e5fe:{NFSU2_TR(0x67e5fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e601:L67e601:{c.instructions+=3;NFSU2_TR(0x67e601);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e604:{NFSU2_TR(0x67e604);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e607:{NFSU2_TR(0x67e607);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67e70d;}}
}
B67e60d:L67e60d:{c.instructions+=2;NFSU2_TR(0x67e60d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e610:{NFSU2_TR(0x67e610);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67e654;}}
}
B67e612:L67e612:{c.instructions+=15;NFSU2_TR(0x67e612);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e615:{NFSU2_TR(0x67e615);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67e618:{NFSU2_TR(0x67e618);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67e61b:{NFSU2_TR(0x67e61b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67e61e:{NFSU2_TR(0x67e61e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B67e620:{NFSU2_TR(0x67e620);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B67e623:{NFSU2_TR(0x67e623);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67e626:{NFSU2_TR(0x67e626);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B67e629:{NFSU2_TR(0x67e629);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e62c:{NFSU2_TR(0x67e62c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67e62f:{NFSU2_TR(0x67e62f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67e632:{NFSU2_TR(0x67e632);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e635:{NFSU2_TR(0x67e635);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67e638:{NFSU2_TR(0x67e638);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B67e63a:{NFSU2_TR(0x67e63a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e63d:L67e63d:{c.instructions+=9;NFSU2_TR(0x67e63d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67e640:{NFSU2_TR(0x67e640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B67e642:{NFSU2_TR(0x67e642);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67e645:{NFSU2_TR(0x67e645);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B67e647:{NFSU2_TR(0x67e647);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B67e649:{NFSU2_TR(0x67e649);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B67e64c:{NFSU2_TR(0x67e64c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B67e64f:{NFSU2_TR(0x67e64f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67e652:{NFSU2_TR(0x67e652);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e63du);}goto L67e63d;}}
}
B67e654:L67e654:{c.instructions+=4;NFSU2_TR(0x67e654);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e657:{NFSU2_TR(0x67e657);
__builtin_memmove((R+4),(R+12),4);
}
B67e659:{NFSU2_TR(0x67e659);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e65c:{NFSU2_TR(0x67e65c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e661ull));
TAIL_STATIC(0x673b2cu,673);
}
B67e661:L67e661:{c.instructions+=3;NFSU2_TR(0x67e661);
__builtin_memmove((R+24),(R+0),4);
}
B67e663:{NFSU2_TR(0x67e663);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e665:{NFSU2_TR(0x67e665);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e66b:L67e66b:{c.instructions+=12;NFSU2_TR(0x67e66b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e66e:{NFSU2_TR(0x67e66e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e66f:{NFSU2_TR(0x67e66f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e672:{NFSU2_TR(0x67e672);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67e677:{NFSU2_TR(0x67e677);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e67a:{NFSU2_TR(0x67e67a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e67d:{NFSU2_TR(0x67e67d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e680:{NFSU2_TR(0x67e680);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B67e685:{NFSU2_TR(0x67e685);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e686:{NFSU2_TR(0x67e686);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e689:{NFSU2_TR(0x67e689);
__builtin_memmove((R+4),(R+12),4);
}
B67e68b:{NFSU2_TR(0x67e68b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e690ull));
TAIL_STATIC(0x6758ceu,675);
}
B67e690:L67e690:{c.instructions+=3;NFSU2_TR(0x67e690);
__builtin_memmove((R+24),(R+0),4);
}
B67e692:{NFSU2_TR(0x67e692);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e694:{NFSU2_TR(0x67e694);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e69a:L67e69a:{c.instructions+=2;NFSU2_TR(0x67e69a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e69d:{NFSU2_TR(0x67e69d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67e6a4;}}
}
B67e69f:L67e69f:{c.instructions+=2;NFSU2_TR(0x67e69f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67e6a2:{NFSU2_TR(0x67e6a2);
{goto L67e6e5;}
}
B67e6a4:L67e6a4:{c.instructions+=4;NFSU2_TR(0x67e6a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e6a7:{NFSU2_TR(0x67e6a7);
__builtin_memmove((R+4),(R+12),4);
}
B67e6a9:{NFSU2_TR(0x67e6a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e6ac:{NFSU2_TR(0x67e6ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e6b1ull));
TAIL_STATIC(0x673b2cu,673);
}
B67e6b1:L67e6b1:{c.instructions+=3;NFSU2_TR(0x67e6b1);
__builtin_memmove((R+24),(R+0),4);
}
B67e6b3:{NFSU2_TR(0x67e6b3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e6b5:{NFSU2_TR(0x67e6b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e6bb:L67e6bb:{c.instructions+=10;NFSU2_TR(0x67e6bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e6be:{NFSU2_TR(0x67e6be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e6bf:{NFSU2_TR(0x67e6bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e6c2:{NFSU2_TR(0x67e6c2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
}
B67e6c7:{NFSU2_TR(0x67e6c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e6ca:{NFSU2_TR(0x67e6ca);
__builtin_memmove((R+4),(R+12),4);
}
B67e6cc:{NFSU2_TR(0x67e6cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e6cf:{NFSU2_TR(0x67e6cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e6d0:{NFSU2_TR(0x67e6d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e6d3:{NFSU2_TR(0x67e6d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e6d8ull));
TAIL_STATIC(0x6758ceu,675);
}
B67e6d8:L67e6d8:{c.instructions+=3;NFSU2_TR(0x67e6d8);
__builtin_memmove((R+24),(R+0),4);
}
B67e6da:{NFSU2_TR(0x67e6da);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e6dc:{NFSU2_TR(0x67e6dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e6e2:L67e6e2:{c.instructions+=1;NFSU2_TR(0x67e6e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67e6e5:L67e6e5:{c.instructions+=5;NFSU2_TR(0x67e6e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67e6e8:{NFSU2_TR(0x67e6e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B67e6eb:{NFSU2_TR(0x67e6eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B67e6ee:{NFSU2_TR(0x67e6ee);
__builtin_memmove((R+0),(R+4),4);
}
B67e6f0:{NFSU2_TR(0x67e6f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B67e6f3:L67e6f3:{c.instructions+=1;NFSU2_TR(0x67e6f3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L67e6f5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e6f3u);}goto L67e6f3;}
}
B67e6f5:L67e6f5:{c.instructions+=4;NFSU2_TR(0x67e6f5);
__builtin_memmove((R+4),(R+0),4);
}
B67e6f7:{NFSU2_TR(0x67e6f7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B67e6fa:{NFSU2_TR(0x67e6fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67e6fd:{NFSU2_TR(0x67e6fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e700:L67e700:{c.instructions+=1;NFSU2_TR(0x67e700);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L67e702;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e700u);}goto L67e700;}
}
B67e702:L67e702:{c.instructions+=3;NFSU2_TR(0x67e702);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67e704:{NFSU2_TR(0x67e704);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67e707:{NFSU2_TR(0x67e707);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e60du);}goto L67e60d;}}
}
B67e70d:L67e70d:{c.instructions+=4;NFSU2_TR(0x67e70d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67e710:{NFSU2_TR(0x67e710);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67e712:{NFSU2_TR(0x67e712);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67e714:{NFSU2_TR(0x67e714);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67e729;}}
}
B67e716:L67e716:{c.instructions+=1;NFSU2_TR(0x67e716);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67e719:L67e719:{c.instructions+=7;NFSU2_TR(0x67e719);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67e71c:{NFSU2_TR(0x67e71c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B67e71f:{NFSU2_TR(0x67e71f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B67e721:{NFSU2_TR(0x67e721);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B67e722:{NFSU2_TR(0x67e722);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B67e725:{NFSU2_TR(0x67e725);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B67e727:{NFSU2_TR(0x67e727);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e719u);}goto L67e719;}}
}
B67e729:L67e729:{c.instructions+=9;NFSU2_TR(0x67e729);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e72c:{NFSU2_TR(0x67e72c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B67e72f:{NFSU2_TR(0x67e72f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B67e732:{NFSU2_TR(0x67e732);
__builtin_memmove((R+0),(R+8),4);
}
B67e734:{NFSU2_TR(0x67e734);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B67e737:{NFSU2_TR(0x67e737);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B67e73a:{NFSU2_TR(0x67e73a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e73d:{NFSU2_TR(0x67e73d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67e740:{NFSU2_TR(0x67e740);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e601u);}goto L67e601;}}
}
B67e746:L67e746:{c.instructions+=1;NFSU2_TR(0x67e746);
TAIL_STATIC(0x67af18u,67a);
}
B67e74b:L67e74b:{c.instructions+=3;NFSU2_TR(0x67e74b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67e74d:{NFSU2_TR(0x67e74d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e750:{NFSU2_TR(0x67e750);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67e756:L67e756:{c.instructions+=2;NFSU2_TR(0x67e756);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e759:{NFSU2_TR(0x67e759);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67e75f:L67e75f:{c.instructions+=4;NFSU2_TR(0x67e75f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e761:{NFSU2_TR(0x67e761);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e764:{NFSU2_TR(0x67e764);
__builtin_memmove((R+4),(R+12),4);
}
B67e766:{NFSU2_TR(0x67e766);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e76bull));
TAIL_STATIC(0x673b2cu,673);
}
B67e76b:L67e76b:{c.instructions+=3;NFSU2_TR(0x67e76b);
__builtin_memmove((R+24),(R+0),4);
}
B67e76d:{NFSU2_TR(0x67e76d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e76f:{NFSU2_TR(0x67e76f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e775:L67e775:{c.instructions+=6;NFSU2_TR(0x67e775);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e77b:{NFSU2_TR(0x67e77b);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e77d:{NFSU2_TR(0x67e77d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67e782:{NFSU2_TR(0x67e782);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e783:{NFSU2_TR(0x67e783);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x50200000ull))));
}
B67e788:{NFSU2_TR(0x67e788);
TAIL_STATIC(0x67aefdu,67a);
}
B67e78d:L67e78d:{c.instructions+=3;NFSU2_TR(0x67e78d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67e78f:{NFSU2_TR(0x67e78f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e792:{NFSU2_TR(0x67e792);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67e798:L67e798:{c.instructions+=2;NFSU2_TR(0x67e798);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e79b:{NFSU2_TR(0x67e79b);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67e7a1:L67e7a1:{c.instructions+=3;NFSU2_TR(0x67e7a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e7a5:{NFSU2_TR(0x67e7a5);
__builtin_memmove((R+4),(R+12),4);
}
B67e7a7:{NFSU2_TR(0x67e7a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L67e8da;}}
}
B67e7ad:L67e7ad:{c.instructions+=2;NFSU2_TR(0x67e7ad);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e7af:{NFSU2_TR(0x67e7af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e7b4ull));
TAIL_STATIC(0x673a0fu,673);
}
B67e7b4:L67e7b4:{c.instructions+=2;NFSU2_TR(0x67e7b4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67e7b6:{NFSU2_TR(0x67e7b6);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67e7bc:L67e7bc:{c.instructions+=3;NFSU2_TR(0x67e7bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+8),(U+0),4);
}
B67e7bf:{NFSU2_TR(0x67e7bf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67e7c1:{NFSU2_TR(0x67e7c1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B67e7c3:L67e7c3:{c.instructions+=6;NFSU2_TR(0x67e7c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B67e7c6:{NFSU2_TR(0x67e7c6);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B67e7ca:{NFSU2_TR(0x67e7ca);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67e7ce:{NFSU2_TR(0x67e7ce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67e7cf:{NFSU2_TR(0x67e7cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B67e7d2:{NFSU2_TR(0x67e7d2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e7c3u);}goto L67e7c3;}}
}
B67e7d4:L67e7d4:{c.instructions+=4;NFSU2_TR(0x67e7d4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e7d6:{NFSU2_TR(0x67e7d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e7d9:{NFSU2_TR(0x67e7d9);
__builtin_memmove((R+4),(R+12),4);
}
B67e7db:{NFSU2_TR(0x67e7db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e7e0ull));
TAIL_STATIC(0x673b2cu,673);
}
B67e7e0:L67e7e0:{c.instructions+=3;NFSU2_TR(0x67e7e0);
__builtin_memmove((R+24),(R+0),4);
}
B67e7e2:{NFSU2_TR(0x67e7e2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e7e4:{NFSU2_TR(0x67e7e4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e7ea:L67e7ea:{c.instructions+=4;NFSU2_TR(0x67e7ea);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e7ec:{NFSU2_TR(0x67e7ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e7ef:{NFSU2_TR(0x67e7ef);
__builtin_memmove((R+4),(R+12),4);
}
B67e7f1:{NFSU2_TR(0x67e7f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e7f6ull));
TAIL_STATIC(0x673b2cu,673);
}
B67e7f6:L67e7f6:{c.instructions+=3;NFSU2_TR(0x67e7f6);
__builtin_memmove((R+24),(R+0),4);
}
B67e7f8:{NFSU2_TR(0x67e7f8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e7fa:{NFSU2_TR(0x67e7fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e800:L67e800:{c.instructions+=4;NFSU2_TR(0x67e800);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e802:{NFSU2_TR(0x67e802);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e805:{NFSU2_TR(0x67e805);
__builtin_memmove((R+4),(R+12),4);
}
B67e807:{NFSU2_TR(0x67e807);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e80cull));
TAIL_STATIC(0x673b2cu,673);
}
B67e80c:L67e80c:{c.instructions+=3;NFSU2_TR(0x67e80c);
__builtin_memmove((R+24),(R+0),4);
}
B67e80e:{NFSU2_TR(0x67e80e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e810:{NFSU2_TR(0x67e810);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e816:L67e816:{c.instructions+=4;NFSU2_TR(0x67e816);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e818:{NFSU2_TR(0x67e818);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e81b:{NFSU2_TR(0x67e81b);
__builtin_memmove((R+4),(R+12),4);
}
B67e81d:{NFSU2_TR(0x67e81d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e822ull));
TAIL_STATIC(0x673b2cu,673);
}
B67e822:L67e822:{c.instructions+=3;NFSU2_TR(0x67e822);
__builtin_memmove((R+24),(R+0),4);
}
B67e824:{NFSU2_TR(0x67e824);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e826:{NFSU2_TR(0x67e826);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e82c:L67e82c:{c.instructions+=4;NFSU2_TR(0x67e82c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e82e:{NFSU2_TR(0x67e82e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e831:{NFSU2_TR(0x67e831);
__builtin_memmove((R+4),(R+12),4);
}
B67e833:{NFSU2_TR(0x67e833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e838ull));
TAIL_STATIC(0x673b2cu,673);
}
B67e838:L67e838:{c.instructions+=3;NFSU2_TR(0x67e838);
__builtin_memmove((R+24),(R+0),4);
}
B67e83a:{NFSU2_TR(0x67e83a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e83c:{NFSU2_TR(0x67e83c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e842:L67e842:{c.instructions+=8;NFSU2_TR(0x67e842);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e843:{NFSU2_TR(0x67e843);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e844:{NFSU2_TR(0x67e844);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e847:{NFSU2_TR(0x67e847);
__builtin_memmove((R+4),(R+12),4);
}
B67e849:{NFSU2_TR(0x67e849);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e84c:{NFSU2_TR(0x67e84c);
u8 U[4];
w4(U+0,u32(0x10100001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e851:{NFSU2_TR(0x67e851);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e854:{NFSU2_TR(0x67e854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e859ull));
TAIL_STATIC(0x6758ceu,675);
}
B67e859:L67e859:{c.instructions+=3;NFSU2_TR(0x67e859);
__builtin_memmove((R+24),(R+0),4);
}
B67e85b:{NFSU2_TR(0x67e85b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e85d:{NFSU2_TR(0x67e85d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e863:L67e863:{c.instructions+=8;NFSU2_TR(0x67e863);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e865:{NFSU2_TR(0x67e865);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e868:{NFSU2_TR(0x67e868);
__builtin_memmove((R+4),(R+12),4);
}
B67e86a:{NFSU2_TR(0x67e86a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e86d:{NFSU2_TR(0x67e86d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e870:{NFSU2_TR(0x67e870);
u8 U[4];
w4(U+0,u32(0x20200001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e875:{NFSU2_TR(0x67e875);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e878:{NFSU2_TR(0x67e878);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e87dull));
TAIL_STATIC(0x6758ceu,675);
}
B67e87d:L67e87d:{c.instructions+=3;NFSU2_TR(0x67e87d);
__builtin_memmove((R+24),(R+0),4);
}
B67e87f:{NFSU2_TR(0x67e87f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e881:{NFSU2_TR(0x67e881);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e887:L67e887:{c.instructions+=8;NFSU2_TR(0x67e887);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e889:{NFSU2_TR(0x67e889);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e88c:{NFSU2_TR(0x67e88c);
__builtin_memmove((R+4),(R+12),4);
}
B67e88e:{NFSU2_TR(0x67e88e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e891:{NFSU2_TR(0x67e891);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e894:{NFSU2_TR(0x67e894);
u8 U[4];
w4(U+0,u32(0x20200001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e899:{NFSU2_TR(0x67e899);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e89c:{NFSU2_TR(0x67e89c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e8a1ull));
TAIL_STATIC(0x6758ceu,675);
}
B67e8a1:L67e8a1:{c.instructions+=3;NFSU2_TR(0x67e8a1);
__builtin_memmove((R+24),(R+0),4);
}
B67e8a3:{NFSU2_TR(0x67e8a3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e8a5:{NFSU2_TR(0x67e8a5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e8ab:L67e8ab:{c.instructions+=8;NFSU2_TR(0x67e8ab);
u8 U[4];
w4(U+0,u32(0x1aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e8ad:{NFSU2_TR(0x67e8ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e8ae:{NFSU2_TR(0x67e8ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e8b1:{NFSU2_TR(0x67e8b1);
__builtin_memmove((R+4),(R+12),4);
}
B67e8b3:{NFSU2_TR(0x67e8b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e8b6:{NFSU2_TR(0x67e8b6);
u8 U[4];
w4(U+0,u32(0x10100001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e8bb:{NFSU2_TR(0x67e8bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e8be:{NFSU2_TR(0x67e8be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e8c3ull));
TAIL_STATIC(0x6758ceu,675);
}
B67e8c3:L67e8c3:{c.instructions+=3;NFSU2_TR(0x67e8c3);
__builtin_memmove((R+24),(R+0),4);
}
B67e8c5:{NFSU2_TR(0x67e8c5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e8c7:{NFSU2_TR(0x67e8c7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e8cd:L67e8cd:{c.instructions+=4;NFSU2_TR(0x67e8cd);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e8cf:{NFSU2_TR(0x67e8cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e8d2:{NFSU2_TR(0x67e8d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e8d5:{NFSU2_TR(0x67e8d5);
TAIL_STATIC(0x67bba0u,67b);
}
B67e8da:L67e8da:{c.instructions+=4;NFSU2_TR(0x67e8da);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e8dc:{NFSU2_TR(0x67e8dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67e8df:{NFSU2_TR(0x67e8df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e8e0:{NFSU2_TR(0x67e8e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e8e5ull));
TAIL_STATIC(0x673b2cu,673);
}
B67e8e5:L67e8e5:{c.instructions+=3;NFSU2_TR(0x67e8e5);
__builtin_memmove((R+24),(R+0),4);
}
B67e8e7:{NFSU2_TR(0x67e8e7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e8e9:{NFSU2_TR(0x67e8e9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e8ef:L67e8ef:{c.instructions+=5;NFSU2_TR(0x67e8ef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e8f1:{NFSU2_TR(0x67e8f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67e8f4:{NFSU2_TR(0x67e8f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e8f5:{NFSU2_TR(0x67e8f5);
__builtin_memmove((R+4),(R+12),4);
}
B67e8f7:{NFSU2_TR(0x67e8f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e8fcull));
TAIL_STATIC(0x673b2cu,673);
}
B67e8fc:L67e8fc:{c.instructions+=3;NFSU2_TR(0x67e8fc);
__builtin_memmove((R+24),(R+0),4);
}
B67e8fe:{NFSU2_TR(0x67e8fe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e900:{NFSU2_TR(0x67e900);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e906:L67e906:{c.instructions+=13;NFSU2_TR(0x67e906);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67e909:{NFSU2_TR(0x67e909);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e90b:{NFSU2_TR(0x67e90b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e90e:{NFSU2_TR(0x67e90e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67e913:{NFSU2_TR(0x67e913);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e916:{NFSU2_TR(0x67e916);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B67e919:{NFSU2_TR(0x67e919);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e91a:{NFSU2_TR(0x67e91a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67e91d:{NFSU2_TR(0x67e91d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x50000000ull))));
}
B67e922:{NFSU2_TR(0x67e922);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e923:{NFSU2_TR(0x67e923);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e926:{NFSU2_TR(0x67e926);
__builtin_memmove((R+4),(R+12),4);
}
B67e928:{NFSU2_TR(0x67e928);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e92dull));
TAIL_STATIC(0x6758ceu,675);
}
B67e92d:L67e92d:{c.instructions+=3;NFSU2_TR(0x67e92d);
__builtin_memmove((R+24),(R+0),4);
}
B67e92f:{NFSU2_TR(0x67e92f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e931:{NFSU2_TR(0x67e931);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e937:L67e937:{c.instructions+=10;NFSU2_TR(0x67e937);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e939:{NFSU2_TR(0x67e939);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e93a:{NFSU2_TR(0x67e93a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67e93d:{NFSU2_TR(0x67e93d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e93e:{NFSU2_TR(0x67e93e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67e941:{NFSU2_TR(0x67e941);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e942:{NFSU2_TR(0x67e942);
u8 U[4];
w4(U+0,u32(0x10700001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e947:{NFSU2_TR(0x67e947);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e94a:{NFSU2_TR(0x67e94a);
__builtin_memmove((R+4),(R+12),4);
}
B67e94c:{NFSU2_TR(0x67e94c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e951ull));
TAIL_STATIC(0x6758ceu,675);
}
B67e951:L67e951:{c.instructions+=3;NFSU2_TR(0x67e951);
__builtin_memmove((R+24),(R+0),4);
}
B67e953:{NFSU2_TR(0x67e953);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e955:{NFSU2_TR(0x67e955);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e95b:L67e95b:{c.instructions+=3;NFSU2_TR(0x67e95b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e95e:{NFSU2_TR(0x67e95e);
__builtin_memmove((R+4),(R+12),4);
}
B67e960:{NFSU2_TR(0x67e960);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e965ull));
TAIL_STATIC(0x673a0fu,673);
}
B67e965:L67e965:{c.instructions+=3;NFSU2_TR(0x67e965);
__builtin_memmove((R+8),(R+0),4);
}
B67e967:{NFSU2_TR(0x67e967);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67e969:{NFSU2_TR(0x67e969);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67e96f:L67e96f:{c.instructions+=3;NFSU2_TR(0x67e96f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67e971:{NFSU2_TR(0x67e971);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e974:{NFSU2_TR(0x67e974);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67e982;}}
}
B67e976:L67e976:{c.instructions+=5;NFSU2_TR(0x67e976);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67e979:{NFSU2_TR(0x67e979);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67e97c:{NFSU2_TR(0x67e97c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B67e97d:{NFSU2_TR(0x67e97d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B67e980:{NFSU2_TR(0x67e980);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67e976u);}goto L67e976;}}
}
B67e982:L67e982:{c.instructions+=4;NFSU2_TR(0x67e982);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e985:{NFSU2_TR(0x67e985);
__builtin_memmove((R+4),(R+12),4);
}
B67e987:{NFSU2_TR(0x67e987);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e98a:{NFSU2_TR(0x67e98a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e98full));
TAIL_STATIC(0x673b2cu,673);
}
B67e98f:L67e98f:{c.instructions+=3;NFSU2_TR(0x67e98f);
__builtin_memmove((R+24),(R+0),4);
}
B67e991:{NFSU2_TR(0x67e991);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67e993:{NFSU2_TR(0x67e993);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67e999:L67e999:{c.instructions+=3;NFSU2_TR(0x67e999);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e99a:{NFSU2_TR(0x67e99a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e99b:{NFSU2_TR(0x67e99b);
TAIL_STATIC(0x67cf35u,67c);
}
B67e9a0:L67e9a0:{c.instructions+=3;NFSU2_TR(0x67e9a0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67e9a2:{NFSU2_TR(0x67e9a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e9a5:{NFSU2_TR(0x67e9a5);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67e9ab:L67e9ab:{c.instructions+=2;NFSU2_TR(0x67e9ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e9ae:{NFSU2_TR(0x67e9ae);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67e9b4:L67e9b4:{c.instructions+=2;NFSU2_TR(0x67e9b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e9b7:{NFSU2_TR(0x67e9b7);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67e9bd:L67e9bd:{c.instructions+=7;NFSU2_TR(0x67e9bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e9c0:{NFSU2_TR(0x67e9c0);
__builtin_memmove((R+4),(R+12),4);
}
B67e9c2:{NFSU2_TR(0x67e9c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e9c5:{NFSU2_TR(0x67e9c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e9c8:{NFSU2_TR(0x67e9c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e9cb:{NFSU2_TR(0x67e9cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e9ce:{NFSU2_TR(0x67e9ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67e9d3ull));
TAIL_STATIC(0x677d89u,677);
}
B67e9d3:L67e9d3:{c.instructions+=1;NFSU2_TR(0x67e9d3);
TAIL_STATIC(0x67af0eu,67a);
}
B67e9d8:L67e9d8:{c.instructions+=3;NFSU2_TR(0x67e9d8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67e9da:{NFSU2_TR(0x67e9da);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e9dd:{NFSU2_TR(0x67e9dd);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67e9e3:L67e9e3:{c.instructions+=2;NFSU2_TR(0x67e9e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67e9e6:{NFSU2_TR(0x67e9e6);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67e9ec:L67e9ec:{c.instructions+=9;NFSU2_TR(0x67e9ec);
{u32 ea_=u32(u32(8077576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B67e9f2:{NFSU2_TR(0x67e9f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67e9f5:{NFSU2_TR(0x67e9f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e9f6:{NFSU2_TR(0x67e9f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e9f7:{NFSU2_TR(0x67e9f7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B67e9fa:{NFSU2_TR(0x67e9fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e9fb:{NFSU2_TR(0x67e9fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67e9fc:{NFSU2_TR(0x67e9fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67e9ff:{NFSU2_TR(0x67e9ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ea04ull));
TAIL_STATIC(0x699c39u,699);
}
B67ea04:L67ea04:{c.instructions+=4;NFSU2_TR(0x67ea04);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ea07:{NFSU2_TR(0x67ea07);
__builtin_memmove((R+4),(R+12),4);
}
B67ea09:{NFSU2_TR(0x67ea09);
__builtin_memmove((R+24),(R+0),4);
}
B67ea0b:{NFSU2_TR(0x67ea0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ea10ull));
TAIL_STATIC(0x673a0fu,673);
}
B67ea10:L67ea10:{c.instructions+=3;NFSU2_TR(0x67ea10);
__builtin_memmove((R+8),(R+0),4);
}
B67ea12:{NFSU2_TR(0x67ea12);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67ea14:{NFSU2_TR(0x67ea14);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67ea1a:L67ea1a:{c.instructions+=2;NFSU2_TR(0x67ea1a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ea1d:{NFSU2_TR(0x67ea1d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67ea2a;}}
}
B67ea1f:L67ea1f:{c.instructions+=3;NFSU2_TR(0x67ea1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67ea22:{NFSU2_TR(0x67ea22);
__builtin_memmove((R+0),(R+24),4);
}
B67ea24:{NFSU2_TR(0x67ea24);
__builtin_memmove((R+28),(R+8),4);
}
B67ea26:L67ea26:{c.instructions+=1;NFSU2_TR(0x67ea26);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L67ea28;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67ea26u);}goto L67ea26;}
}
B67ea28:L67ea28:{c.instructions+=1;NFSU2_TR(0x67ea28);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67ea2a:L67ea2a:{c.instructions+=4;NFSU2_TR(0x67ea2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ea2d:{NFSU2_TR(0x67ea2d);
__builtin_memmove((R+4),(R+12),4);
}
B67ea2f:{NFSU2_TR(0x67ea2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ea32:{NFSU2_TR(0x67ea32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ea37ull));
TAIL_STATIC(0x673b2cu,673);
}
B67ea37:L67ea37:{c.instructions+=3;NFSU2_TR(0x67ea37);
__builtin_memmove((R+24),(R+0),4);
}
B67ea39:{NFSU2_TR(0x67ea39);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ea3b:{NFSU2_TR(0x67ea3b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ea41:L67ea41:{c.instructions+=3;NFSU2_TR(0x67ea41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ea42:{NFSU2_TR(0x67ea42);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ea43:{NFSU2_TR(0x67ea43);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ea46:L67ea46:{c.instructions+=3;NFSU2_TR(0x67ea46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ea49:{NFSU2_TR(0x67ea49);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67ea4e:{NFSU2_TR(0x67ea4e);
TAIL_STATIC(0x67fc25u,67f);
}
B67ea53:L67ea53:{c.instructions+=3;NFSU2_TR(0x67ea53);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67ea55:{NFSU2_TR(0x67ea55);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ea58:{NFSU2_TR(0x67ea58);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67ea5e:L67ea5e:{c.instructions+=2;NFSU2_TR(0x67ea5e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ea61:{NFSU2_TR(0x67ea61);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67ea67:L67ea67:{c.instructions+=2;NFSU2_TR(0x67ea67);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ea6a:{NFSU2_TR(0x67ea6a);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67ea70:L67ea70:{c.instructions+=5;NFSU2_TR(0x67ea70);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ea72:{NFSU2_TR(0x67ea72);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ea75:{NFSU2_TR(0x67ea75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ea76:{NFSU2_TR(0x67ea76);
__builtin_memmove((R+4),(R+12),4);
}
B67ea78:{NFSU2_TR(0x67ea78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ea7dull));
TAIL_STATIC(0x673b2cu,673);
}
B67ea7d:L67ea7d:{c.instructions+=3;NFSU2_TR(0x67ea7d);
__builtin_memmove((R+24),(R+0),4);
}
B67ea7f:{NFSU2_TR(0x67ea7f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ea81:{NFSU2_TR(0x67ea81);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ea87:L67ea87:{c.instructions+=5;NFSU2_TR(0x67ea87);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ea89:{NFSU2_TR(0x67ea89);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ea8c:{NFSU2_TR(0x67ea8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ea8d:{NFSU2_TR(0x67ea8d);
__builtin_memmove((R+4),(R+12),4);
}
B67ea8f:{NFSU2_TR(0x67ea8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ea94ull));
TAIL_STATIC(0x673b2cu,673);
}
B67ea94:L67ea94:{c.instructions+=3;NFSU2_TR(0x67ea94);
__builtin_memmove((R+24),(R+0),4);
}
B67ea96:{NFSU2_TR(0x67ea96);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ea98:{NFSU2_TR(0x67ea98);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ea9e:L67ea9e:{c.instructions+=5;NFSU2_TR(0x67ea9e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eaa0:{NFSU2_TR(0x67eaa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67eaa3:{NFSU2_TR(0x67eaa3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eaa4:{NFSU2_TR(0x67eaa4);
__builtin_memmove((R+4),(R+12),4);
}
B67eaa6:{NFSU2_TR(0x67eaa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67eaabull));
TAIL_STATIC(0x673b2cu,673);
}
B67eaab:L67eaab:{c.instructions+=3;NFSU2_TR(0x67eaab);
__builtin_memmove((R+24),(R+0),4);
}
B67eaad:{NFSU2_TR(0x67eaad);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67eaaf:{NFSU2_TR(0x67eaaf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67eab5:L67eab5:{c.instructions+=13;NFSU2_TR(0x67eab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67eab8:{NFSU2_TR(0x67eab8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eab9:{NFSU2_TR(0x67eab9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67eabc:{NFSU2_TR(0x67eabc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67eac1:{NFSU2_TR(0x67eac1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67eac4:{NFSU2_TR(0x67eac4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B67eac7:{NFSU2_TR(0x67eac7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eac8:{NFSU2_TR(0x67eac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67eacb:{NFSU2_TR(0x67eacb);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x50000000ull))));
}
B67ead0:{NFSU2_TR(0x67ead0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ead1:{NFSU2_TR(0x67ead1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ead4:{NFSU2_TR(0x67ead4);
__builtin_memmove((R+4),(R+12),4);
}
B67ead6:{NFSU2_TR(0x67ead6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67eadbull));
TAIL_STATIC(0x6758ceu,675);
}
B67eadb:L67eadb:{c.instructions+=3;NFSU2_TR(0x67eadb);
__builtin_memmove((R+24),(R+0),4);
}
B67eadd:{NFSU2_TR(0x67eadd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67eadf:{NFSU2_TR(0x67eadf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67eae5:L67eae5:{c.instructions+=10;NFSU2_TR(0x67eae5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eae6:{NFSU2_TR(0x67eae6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67eae9:{NFSU2_TR(0x67eae9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eaea:{NFSU2_TR(0x67eaea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eaeb:{NFSU2_TR(0x67eaeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67eaee:{NFSU2_TR(0x67eaee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eaef:{NFSU2_TR(0x67eaef);
u8 U[4];
w4(U+0,u32(0x20400001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eaf4:{NFSU2_TR(0x67eaf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67eaf7:{NFSU2_TR(0x67eaf7);
__builtin_memmove((R+4),(R+12),4);
}
B67eaf9:{NFSU2_TR(0x67eaf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67eafeull));
TAIL_STATIC(0x6758ceu,675);
}
B67eafe:L67eafe:{c.instructions+=3;NFSU2_TR(0x67eafe);
__builtin_memmove((R+24),(R+0),4);
}
B67eb00:{NFSU2_TR(0x67eb00);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67eb02:{NFSU2_TR(0x67eb02);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67eb08:L67eb08:{c.instructions+=10;NFSU2_TR(0x67eb08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eb09:{NFSU2_TR(0x67eb09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eb0a:{NFSU2_TR(0x67eb0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67eb0d:{NFSU2_TR(0x67eb0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eb0e:{NFSU2_TR(0x67eb0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67eb11:{NFSU2_TR(0x67eb11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eb12:{NFSU2_TR(0x67eb12);
u8 U[4];
w4(U+0,u32(0x10100001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eb17:{NFSU2_TR(0x67eb17);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67eb1a:{NFSU2_TR(0x67eb1a);
__builtin_memmove((R+4),(R+12),4);
}
B67eb1c:{NFSU2_TR(0x67eb1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67eb21ull));
TAIL_STATIC(0x6758ceu,675);
}
B67eb21:L67eb21:{c.instructions+=3;NFSU2_TR(0x67eb21);
__builtin_memmove((R+24),(R+0),4);
}
B67eb23:{NFSU2_TR(0x67eb23);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67eb25:{NFSU2_TR(0x67eb25);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67eb2b:L67eb2b:{c.instructions+=5;NFSU2_TR(0x67eb2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67eb2e:{NFSU2_TR(0x67eb2e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B67eb30:{NFSU2_TR(0x67eb30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eb31:{NFSU2_TR(0x67eb31);
__builtin_memmove((R+4),(R+12),4);
}
B67eb33:{NFSU2_TR(0x67eb33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67eb38ull));
TAIL_STATIC(0x673a0fu,673);
}
B67eb38:L67eb38:{c.instructions+=2;NFSU2_TR(0x67eb38);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67eb3a:{NFSU2_TR(0x67eb3a);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67eb40:L67eb40:{c.instructions+=4;NFSU2_TR(0x67eb40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67eb43:{NFSU2_TR(0x67eb43);
__builtin_memmove((R+8),(R+24),4);
}
B67eb45:{NFSU2_TR(0x67eb45);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67eb47:{NFSU2_TR(0x67eb47);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67eb4a:L67eb4a:{c.instructions+=5;NFSU2_TR(0x67eb4a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67eb4e:{NFSU2_TR(0x67eb4e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67eb4f:{NFSU2_TR(0x67eb4f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B67eb51:{NFSU2_TR(0x67eb51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B67eb54:{NFSU2_TR(0x67eb54);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67eb4au);}goto L67eb4a;}}
}
B67eb56:L67eb56:{c.instructions+=4;NFSU2_TR(0x67eb56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67eb59:{NFSU2_TR(0x67eb59);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B67eb5b:{NFSU2_TR(0x67eb5b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67eb5d:{NFSU2_TR(0x67eb5d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67eb6a;}}
}
B67eb5f:L67eb5f:{c.instructions+=5;NFSU2_TR(0x67eb5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67eb62:{NFSU2_TR(0x67eb62);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67eb65:{NFSU2_TR(0x67eb65);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B67eb66:{NFSU2_TR(0x67eb66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B67eb68:{NFSU2_TR(0x67eb68);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67eb5fu);}goto L67eb5f;}}
}
B67eb6a:L67eb6a:{c.instructions+=4;NFSU2_TR(0x67eb6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67eb6d:{NFSU2_TR(0x67eb6d);
__builtin_memmove((R+4),(R+12),4);
}
B67eb6f:{NFSU2_TR(0x67eb6f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67eb72:{NFSU2_TR(0x67eb72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67eb77ull));
TAIL_STATIC(0x673b2cu,673);
}
B67eb77:L67eb77:{c.instructions+=3;NFSU2_TR(0x67eb77);
__builtin_memmove((R+24),(R+0),4);
}
B67eb79:{NFSU2_TR(0x67eb79);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67eb7b:{NFSU2_TR(0x67eb7b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67eb81:L67eb81:{c.instructions+=4;NFSU2_TR(0x67eb81);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67eb84:{NFSU2_TR(0x67eb84);
__builtin_memmove((R+4),(R+12),4);
}
B67eb86:{NFSU2_TR(0x67eb86);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67eb89:{NFSU2_TR(0x67eb89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67eb8eull));
TAIL_STATIC(0x673b2cu,673);
}
B67eb8e:L67eb8e:{c.instructions+=3;NFSU2_TR(0x67eb8e);
__builtin_memmove((R+24),(R+0),4);
}
B67eb90:{NFSU2_TR(0x67eb90);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67eb92:{NFSU2_TR(0x67eb92);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67eb98:L67eb98:{c.instructions+=10;NFSU2_TR(0x67eb98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67eb9b:{NFSU2_TR(0x67eb9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eb9c:{NFSU2_TR(0x67eb9c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eb9d:{NFSU2_TR(0x67eb9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67eba0:{NFSU2_TR(0x67eba0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20500000ull))));
}
B67eba5:{NFSU2_TR(0x67eba5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67eba8:{NFSU2_TR(0x67eba8);
__builtin_memmove((R+4),(R+12),4);
}
B67ebaa:{NFSU2_TR(0x67ebaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ebab:{NFSU2_TR(0x67ebab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ebae:{NFSU2_TR(0x67ebae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ebb3ull));
TAIL_STATIC(0x6758ceu,675);
}
B67ebb3:L67ebb3:{c.instructions+=3;NFSU2_TR(0x67ebb3);
__builtin_memmove((R+24),(R+0),4);
}
B67ebb5:{NFSU2_TR(0x67ebb5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ebb7:{NFSU2_TR(0x67ebb7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ebbd:L67ebbd:{c.instructions+=4;NFSU2_TR(0x67ebbd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ebbe:{NFSU2_TR(0x67ebbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ebc1:{NFSU2_TR(0x67ebc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ebc4:{NFSU2_TR(0x67ebc4);
TAIL_STATIC(0x67b599u,67b);
}
B67ebc9:L67ebc9:{c.instructions+=3;NFSU2_TR(0x67ebc9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B67ebcb:{NFSU2_TR(0x67ebcb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ebce:{NFSU2_TR(0x67ebce);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67ebd4:L67ebd4:{c.instructions+=2;NFSU2_TR(0x67ebd4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ebd7:{NFSU2_TR(0x67ebd7);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67ebdd:L67ebdd:{c.instructions+=2;NFSU2_TR(0x67ebdd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ebe0:{NFSU2_TR(0x67ebe0);
if(r1(R+518)){TAIL_STATIC(0x6808fdu,680);}
}
B67ebe6:L67ebe6:{c.instructions+=2;NFSU2_TR(0x67ebe6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B67ebe9:{NFSU2_TR(0x67ebe9);
if(r1(R+518)){TAIL_STATIC(0x67af18u,67a);}
}
B67ebef:L67ebef:{c.instructions+=5;NFSU2_TR(0x67ebef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ebf1:{NFSU2_TR(0x67ebf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ebf4:{NFSU2_TR(0x67ebf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ebf5:{NFSU2_TR(0x67ebf5);
__builtin_memmove((R+4),(R+12),4);
}
B67ebf7:{NFSU2_TR(0x67ebf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ebfcull));
TAIL_STATIC(0x673b2cu,673);
}
B67ebfc:L67ebfc:{c.instructions+=3;NFSU2_TR(0x67ebfc);
__builtin_memmove((R+24),(R+0),4);
}
B67ebfe:{NFSU2_TR(0x67ebfe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ec00:{NFSU2_TR(0x67ec00);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ec06:L67ec06:{c.instructions+=5;NFSU2_TR(0x67ec06);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ec08:{NFSU2_TR(0x67ec08);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ec0b:{NFSU2_TR(0x67ec0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ec0c:{NFSU2_TR(0x67ec0c);
__builtin_memmove((R+4),(R+12),4);
}
B67ec0e:{NFSU2_TR(0x67ec0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ec13ull));
TAIL_STATIC(0x673b2cu,673);
}
B67ec13:L67ec13:{c.instructions+=3;NFSU2_TR(0x67ec13);
__builtin_memmove((R+24),(R+0),4);
}
B67ec15:{NFSU2_TR(0x67ec15);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ec17:{NFSU2_TR(0x67ec17);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ec1d:L67ec1d:{c.instructions+=5;NFSU2_TR(0x67ec1d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ec1f:{NFSU2_TR(0x67ec1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ec25:{NFSU2_TR(0x67ec25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ec26:{NFSU2_TR(0x67ec26);
__builtin_memmove((R+4),(R+12),4);
}
B67ec28:{NFSU2_TR(0x67ec28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ec2dull));
TAIL_STATIC(0x673b2cu,673);
}
B67ec2d:L67ec2d:{c.instructions+=3;NFSU2_TR(0x67ec2d);
__builtin_memmove((R+24),(R+0),4);
}
B67ec2f:{NFSU2_TR(0x67ec2f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ec31:{NFSU2_TR(0x67ec31);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ec37:L67ec37:{c.instructions+=5;NFSU2_TR(0x67ec37);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ec39:{NFSU2_TR(0x67ec39);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ec3c:{NFSU2_TR(0x67ec3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ec3d:{NFSU2_TR(0x67ec3d);
__builtin_memmove((R+4),(R+12),4);
}
B67ec3f:{NFSU2_TR(0x67ec3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ec44ull));
TAIL_STATIC(0x673b2cu,673);
}
B67ec44:L67ec44:{c.instructions+=3;NFSU2_TR(0x67ec44);
__builtin_memmove((R+24),(R+0),4);
}
B67ec46:{NFSU2_TR(0x67ec46);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ec48:{NFSU2_TR(0x67ec48);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ec4e:L67ec4e:{c.instructions+=5;NFSU2_TR(0x67ec4e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ec50:{NFSU2_TR(0x67ec50);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ec53:{NFSU2_TR(0x67ec53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ec54:{NFSU2_TR(0x67ec54);
__builtin_memmove((R+4),(R+12),4);
}
B67ec56:{NFSU2_TR(0x67ec56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ec5bull));
TAIL_STATIC(0x673b2cu,673);
}
B67ec5b:L67ec5b:{c.instructions+=3;NFSU2_TR(0x67ec5b);
__builtin_memmove((R+24),(R+0),4);
}
B67ec5d:{NFSU2_TR(0x67ec5d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ec5f:{NFSU2_TR(0x67ec5f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ec65:L67ec65:{c.instructions+=5;NFSU2_TR(0x67ec65);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ec67:{NFSU2_TR(0x67ec67);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ec6d:{NFSU2_TR(0x67ec6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ec6e:{NFSU2_TR(0x67ec6e);
__builtin_memmove((R+4),(R+12),4);
}
B67ec70:{NFSU2_TR(0x67ec70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ec75ull));
TAIL_STATIC(0x673b2cu,673);
}
B67ec75:L67ec75:{c.instructions+=3;NFSU2_TR(0x67ec75);
__builtin_memmove((R+24),(R+0),4);
}
B67ec77:{NFSU2_TR(0x67ec77);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ec79:{NFSU2_TR(0x67ec79);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ec7f:L67ec7f:{c.instructions+=5;NFSU2_TR(0x67ec7f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ec81:{NFSU2_TR(0x67ec81);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ec87:{NFSU2_TR(0x67ec87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ec88:{NFSU2_TR(0x67ec88);
__builtin_memmove((R+4),(R+12),4);
}
B67ec8a:{NFSU2_TR(0x67ec8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ec8full));
TAIL_STATIC(0x673b2cu,673);
}
B67ec8f:L67ec8f:{c.instructions+=3;NFSU2_TR(0x67ec8f);
__builtin_memmove((R+24),(R+0),4);
}
B67ec91:{NFSU2_TR(0x67ec91);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ec93:{NFSU2_TR(0x67ec93);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ec99:L67ec99:{c.instructions+=5;NFSU2_TR(0x67ec99);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ec9b:{NFSU2_TR(0x67ec9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ec9e:{NFSU2_TR(0x67ec9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ec9f:{NFSU2_TR(0x67ec9f);
__builtin_memmove((R+4),(R+12),4);
}
B67eca1:{NFSU2_TR(0x67eca1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67eca6ull));
TAIL_STATIC(0x673b2cu,673);
}
B67eca6:L67eca6:{c.instructions+=3;NFSU2_TR(0x67eca6);
__builtin_memmove((R+24),(R+0),4);
}
B67eca8:{NFSU2_TR(0x67eca8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ecaa:{NFSU2_TR(0x67ecaa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ecb0:L67ecb0:{c.instructions+=5;NFSU2_TR(0x67ecb0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ecb2:{NFSU2_TR(0x67ecb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ecb5:{NFSU2_TR(0x67ecb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ecb6:{NFSU2_TR(0x67ecb6);
__builtin_memmove((R+4),(R+12),4);
}
B67ecb8:{NFSU2_TR(0x67ecb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ecbdull));
TAIL_STATIC(0x673b2cu,673);
}
B67ecbd:L67ecbd:{c.instructions+=3;NFSU2_TR(0x67ecbd);
__builtin_memmove((R+24),(R+0),4);
}
B67ecbf:{NFSU2_TR(0x67ecbf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ecc1:{NFSU2_TR(0x67ecc1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ecc7:L67ecc7:{c.instructions+=5;NFSU2_TR(0x67ecc7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ecc9:{NFSU2_TR(0x67ecc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67eccf:{NFSU2_TR(0x67eccf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ecd0:{NFSU2_TR(0x67ecd0);
__builtin_memmove((R+4),(R+12),4);
}
B67ecd2:{NFSU2_TR(0x67ecd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ecd7ull));
TAIL_STATIC(0x673b2cu,673);
}
B67ecd7:L67ecd7:{c.instructions+=3;NFSU2_TR(0x67ecd7);
__builtin_memmove((R+24),(R+0),4);
}
B67ecd9:{NFSU2_TR(0x67ecd9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ecdb:{NFSU2_TR(0x67ecdb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ece1:L67ece1:{c.instructions+=5;NFSU2_TR(0x67ece1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ece3:{NFSU2_TR(0x67ece3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ece6:{NFSU2_TR(0x67ece6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ece7:{NFSU2_TR(0x67ece7);
__builtin_memmove((R+4),(R+12),4);
}
B67ece9:{NFSU2_TR(0x67ece9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67eceeull));
TAIL_STATIC(0x673b2cu,673);
}
B67ecee:L67ecee:{c.instructions+=3;NFSU2_TR(0x67ecee);
__builtin_memmove((R+24),(R+0),4);
}
B67ecf0:{NFSU2_TR(0x67ecf0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ecf2:{NFSU2_TR(0x67ecf2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ecf8:L67ecf8:{c.instructions+=5;NFSU2_TR(0x67ecf8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ecfa:{NFSU2_TR(0x67ecfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ecfd:{NFSU2_TR(0x67ecfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ecfe:{NFSU2_TR(0x67ecfe);
__builtin_memmove((R+4),(R+12),4);
}
B67ed00:{NFSU2_TR(0x67ed00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ed05ull));
TAIL_STATIC(0x673b2cu,673);
}
B67ed05:L67ed05:{c.instructions+=3;NFSU2_TR(0x67ed05);
__builtin_memmove((R+24),(R+0),4);
}
B67ed07:{NFSU2_TR(0x67ed07);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ed09:{NFSU2_TR(0x67ed09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ed0f:L67ed0f:{c.instructions+=5;NFSU2_TR(0x67ed0f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ed11:{NFSU2_TR(0x67ed11);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ed14:{NFSU2_TR(0x67ed14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ed15:{NFSU2_TR(0x67ed15);
__builtin_memmove((R+4),(R+12),4);
}
B67ed17:{NFSU2_TR(0x67ed17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ed1cull));
TAIL_STATIC(0x673b2cu,673);
}
B67ed1c:L67ed1c:{c.instructions+=3;NFSU2_TR(0x67ed1c);
__builtin_memmove((R+24),(R+0),4);
}
B67ed1e:{NFSU2_TR(0x67ed1e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ed20:{NFSU2_TR(0x67ed20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ed26:L67ed26:{c.instructions+=5;NFSU2_TR(0x67ed26);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ed28:{NFSU2_TR(0x67ed28);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ed2b:{NFSU2_TR(0x67ed2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ed2c:{NFSU2_TR(0x67ed2c);
__builtin_memmove((R+4),(R+12),4);
}
B67ed2e:{NFSU2_TR(0x67ed2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ed33ull));
TAIL_STATIC(0x673b2cu,673);
}
B67ed33:L67ed33:{c.instructions+=3;NFSU2_TR(0x67ed33);
__builtin_memmove((R+24),(R+0),4);
}
B67ed35:{NFSU2_TR(0x67ed35);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ed37:{NFSU2_TR(0x67ed37);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ed3d:L67ed3d:{c.instructions+=5;NFSU2_TR(0x67ed3d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ed3f:{NFSU2_TR(0x67ed3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ed42:{NFSU2_TR(0x67ed42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ed43:{NFSU2_TR(0x67ed43);
__builtin_memmove((R+4),(R+12),4);
}
B67ed45:{NFSU2_TR(0x67ed45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ed4aull));
TAIL_STATIC(0x673b2cu,673);
}
B67ed4a:L67ed4a:{c.instructions+=3;NFSU2_TR(0x67ed4a);
__builtin_memmove((R+24),(R+0),4);
}
B67ed4c:{NFSU2_TR(0x67ed4c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ed4e:{NFSU2_TR(0x67ed4e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ed54:L67ed54:{c.instructions+=13;NFSU2_TR(0x67ed54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67ed57:{NFSU2_TR(0x67ed57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ed58:{NFSU2_TR(0x67ed58);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ed5b:{NFSU2_TR(0x67ed5b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B67ed60:{NFSU2_TR(0x67ed60);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ed63:{NFSU2_TR(0x67ed63);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B67ed66:{NFSU2_TR(0x67ed66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ed67:{NFSU2_TR(0x67ed67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B67ed6a:{NFSU2_TR(0x67ed6a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x50000000ull))));
}
B67ed6f:{NFSU2_TR(0x67ed6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ed70:{NFSU2_TR(0x67ed70);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ed73:{NFSU2_TR(0x67ed73);
__builtin_memmove((R+4),(R+12),4);
}
B67ed75:{NFSU2_TR(0x67ed75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ed7aull));
TAIL_STATIC(0x6758ceu,675);
}
B67ed7a:L67ed7a:{c.instructions+=3;NFSU2_TR(0x67ed7a);
__builtin_memmove((R+24),(R+0),4);
}
B67ed7c:{NFSU2_TR(0x67ed7c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ed7e:{NFSU2_TR(0x67ed7e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ed84:L67ed84:{c.instructions+=10;NFSU2_TR(0x67ed84);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ed86:{NFSU2_TR(0x67ed86);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ed89:{NFSU2_TR(0x67ed89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ed8a:{NFSU2_TR(0x67ed8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ed8b:{NFSU2_TR(0x67ed8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ed8e:{NFSU2_TR(0x67ed8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ed8f:{NFSU2_TR(0x67ed8f);
u8 U[4];
w4(U+0,u32(0x20500001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ed94:{NFSU2_TR(0x67ed94);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ed97:{NFSU2_TR(0x67ed97);
__builtin_memmove((R+4),(R+12),4);
}
B67ed99:{NFSU2_TR(0x67ed99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ed9eull));
TAIL_STATIC(0x6758ceu,675);
}
B67ed9e:L67ed9e:{c.instructions+=3;NFSU2_TR(0x67ed9e);
__builtin_memmove((R+24),(R+0),4);
}
B67eda0:{NFSU2_TR(0x67eda0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67eda2:{NFSU2_TR(0x67eda2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67eda8:L67eda8:{c.instructions+=9;NFSU2_TR(0x67eda8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67edaa:{NFSU2_TR(0x67edaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67edad:{NFSU2_TR(0x67edad);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67edb3:{NFSU2_TR(0x67edb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67edb6:{NFSU2_TR(0x67edb6);
__builtin_memmove((R+4),(R+12),4);
}
B67edb8:{NFSU2_TR(0x67edb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67edb9:{NFSU2_TR(0x67edb9);
u8 U[4];
w4(U+0,u32(0x20500001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67edbe:{NFSU2_TR(0x67edbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67edc1:{NFSU2_TR(0x67edc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67edc6ull));
TAIL_STATIC(0x6758ceu,675);
}
B67edc6:L67edc6:{c.instructions+=3;NFSU2_TR(0x67edc6);
__builtin_memmove((R+24),(R+0),4);
}
B67edc8:{NFSU2_TR(0x67edc8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67edca:{NFSU2_TR(0x67edca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67edd0:L67edd0:{c.instructions+=10;NFSU2_TR(0x67edd0);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67edd2:{NFSU2_TR(0x67edd2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67edd3:{NFSU2_TR(0x67edd3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67edd6:{NFSU2_TR(0x67edd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67edd7:{NFSU2_TR(0x67edd7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B67edda:{NFSU2_TR(0x67edda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eddb:{NFSU2_TR(0x67eddb);
u8 U[4];
w4(U+0,u32(0x10100001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ede0:{NFSU2_TR(0x67ede0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ede3:{NFSU2_TR(0x67ede3);
__builtin_memmove((R+4),(R+12),4);
}
B67ede5:{NFSU2_TR(0x67ede5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67edeaull));
TAIL_STATIC(0x6758ceu,675);
}
B67edea:L67edea:{c.instructions+=3;NFSU2_TR(0x67edea);
__builtin_memmove((R+24),(R+0),4);
}
B67edec:{NFSU2_TR(0x67edec);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67edee:{NFSU2_TR(0x67edee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67edf4:L67edf4:{c.instructions+=11;NFSU2_TR(0x67edf4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67edf5:{NFSU2_TR(0x67edf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+4),(U+0),4);
}
B67edf8:{NFSU2_TR(0x67edf8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67edf9:{NFSU2_TR(0x67edf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67edfc:{NFSU2_TR(0x67edfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67edfd:{NFSU2_TR(0x67edfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ee00:{NFSU2_TR(0x67ee00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee01:{NFSU2_TR(0x67ee01);
u8 U[4];
w4(U+0,u32(0x20400001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee06:{NFSU2_TR(0x67ee06);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ee09:{NFSU2_TR(0x67ee09);
__builtin_memmove((R+4),(R+12),4);
}
B67ee0b:{NFSU2_TR(0x67ee0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ee10ull));
TAIL_STATIC(0x6758ceu,675);
}
B67ee10:L67ee10:{c.instructions+=3;NFSU2_TR(0x67ee10);
__builtin_memmove((R+24),(R+0),4);
}
B67ee12:{NFSU2_TR(0x67ee12);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ee14:{NFSU2_TR(0x67ee14);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ee1a:L67ee1a:{c.instructions+=11;NFSU2_TR(0x67ee1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee1b:{NFSU2_TR(0x67ee1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ee1e:{NFSU2_TR(0x67ee1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee1f:{NFSU2_TR(0x67ee1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ee25:{NFSU2_TR(0x67ee25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee26:{NFSU2_TR(0x67ee26);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ee2c:{NFSU2_TR(0x67ee2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee2d:{NFSU2_TR(0x67ee2d);
u8 U[4];
w4(U+0,u32(0x20500001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee32:{NFSU2_TR(0x67ee32);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ee35:{NFSU2_TR(0x67ee35);
__builtin_memmove((R+4),(R+12),4);
}
B67ee37:{NFSU2_TR(0x67ee37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ee3cull));
TAIL_STATIC(0x6758ceu,675);
}
B67ee3c:L67ee3c:{c.instructions+=3;NFSU2_TR(0x67ee3c);
__builtin_memmove((R+24),(R+0),4);
}
B67ee3e:{NFSU2_TR(0x67ee3e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ee40:{NFSU2_TR(0x67ee40);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ee46:L67ee46:{c.instructions+=10;NFSU2_TR(0x67ee46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee47:{NFSU2_TR(0x67ee47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee48:{NFSU2_TR(0x67ee48);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ee4e:{NFSU2_TR(0x67ee4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee4f:{NFSU2_TR(0x67ee4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ee55:{NFSU2_TR(0x67ee55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee56:{NFSU2_TR(0x67ee56);
u8 U[4];
w4(U+0,u32(0x10100001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee5b:{NFSU2_TR(0x67ee5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ee5e:{NFSU2_TR(0x67ee5e);
__builtin_memmove((R+4),(R+12),4);
}
B67ee60:{NFSU2_TR(0x67ee60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ee65ull));
TAIL_STATIC(0x6758ceu,675);
}
B67ee65:L67ee65:{c.instructions+=3;NFSU2_TR(0x67ee65);
__builtin_memmove((R+24),(R+0),4);
}
B67ee67:{NFSU2_TR(0x67ee67);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ee69:{NFSU2_TR(0x67ee69);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ee6f:L67ee6f:{c.instructions+=11;NFSU2_TR(0x67ee6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee70:{NFSU2_TR(0x67ee70);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ee76:{NFSU2_TR(0x67ee76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee77:{NFSU2_TR(0x67ee77);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ee7a:{NFSU2_TR(0x67ee7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee7b:{NFSU2_TR(0x67ee7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ee7e:{NFSU2_TR(0x67ee7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee7f:{NFSU2_TR(0x67ee7f);
u8 U[4];
w4(U+0,u32(0x20400001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee84:{NFSU2_TR(0x67ee84);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ee87:{NFSU2_TR(0x67ee87);
__builtin_memmove((R+4),(R+12),4);
}
B67ee89:{NFSU2_TR(0x67ee89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ee8eull));
TAIL_STATIC(0x6758ceu,675);
}
B67ee8e:L67ee8e:{c.instructions+=3;NFSU2_TR(0x67ee8e);
__builtin_memmove((R+24),(R+0),4);
}
B67ee90:{NFSU2_TR(0x67ee90);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ee92:{NFSU2_TR(0x67ee92);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ee98:L67ee98:{c.instructions+=11;NFSU2_TR(0x67ee98);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee9a:{NFSU2_TR(0x67ee9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ee9d:{NFSU2_TR(0x67ee9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ee9e:{NFSU2_TR(0x67ee9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67eea1:{NFSU2_TR(0x67eea1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eea2:{NFSU2_TR(0x67eea2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67eea5:{NFSU2_TR(0x67eea5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eea6:{NFSU2_TR(0x67eea6);
u8 U[4];
w4(U+0,u32(0x20300001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eeab:{NFSU2_TR(0x67eeab);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67eeae:{NFSU2_TR(0x67eeae);
__builtin_memmove((R+4),(R+12),4);
}
B67eeb0:{NFSU2_TR(0x67eeb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67eeb5ull));
TAIL_STATIC(0x6758ceu,675);
}
B67eeb5:L67eeb5:{c.instructions+=3;NFSU2_TR(0x67eeb5);
__builtin_memmove((R+24),(R+0),4);
}
B67eeb7:{NFSU2_TR(0x67eeb7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67eeb9:{NFSU2_TR(0x67eeb9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67eebf:L67eebf:{c.instructions+=11;NFSU2_TR(0x67eebf);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eec1:{NFSU2_TR(0x67eec1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67eec4:{NFSU2_TR(0x67eec4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eec5:{NFSU2_TR(0x67eec5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B67eec8:{NFSU2_TR(0x67eec8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eec9:{NFSU2_TR(0x67eec9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67eecf:{NFSU2_TR(0x67eecf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eed0:{NFSU2_TR(0x67eed0);
u8 U[4];
w4(U+0,u32(0x20500001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eed5:{NFSU2_TR(0x67eed5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67eed8:{NFSU2_TR(0x67eed8);
__builtin_memmove((R+4),(R+12),4);
}
B67eeda:{NFSU2_TR(0x67eeda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67eedfull));
TAIL_STATIC(0x6758ceu,675);
}
B67eedf:L67eedf:{c.instructions+=3;NFSU2_TR(0x67eedf);
__builtin_memmove((R+24),(R+0),4);
}
B67eee1:{NFSU2_TR(0x67eee1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67eee3:{NFSU2_TR(0x67eee3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67eee9:L67eee9:{c.instructions+=10;NFSU2_TR(0x67eee9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eeea:{NFSU2_TR(0x67eeea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67eeed:{NFSU2_TR(0x67eeed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eeee:{NFSU2_TR(0x67eeee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67eef1:{NFSU2_TR(0x67eef1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67eef4:{NFSU2_TR(0x67eef4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eef5:{NFSU2_TR(0x67eef5);
u8 U[4];
w4(U+0,u32(0x20500001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67eefa:{NFSU2_TR(0x67eefa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67eefd:{NFSU2_TR(0x67eefd);
__builtin_memmove((R+4),(R+12),4);
}
B67eeff:{NFSU2_TR(0x67eeff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ef04ull));
TAIL_STATIC(0x6758ceu,675);
}
B67ef04:L67ef04:{c.instructions+=3;NFSU2_TR(0x67ef04);
__builtin_memmove((R+24),(R+0),4);
}
B67ef06:{NFSU2_TR(0x67ef06);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ef08:{NFSU2_TR(0x67ef08);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ef0e:L67ef0e:{c.instructions+=11;NFSU2_TR(0x67ef0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef0f:{NFSU2_TR(0x67ef0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ef12:{NFSU2_TR(0x67ef12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef13:{NFSU2_TR(0x67ef13);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ef16:{NFSU2_TR(0x67ef16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef17:{NFSU2_TR(0x67ef17);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ef1a:{NFSU2_TR(0x67ef1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef1b:{NFSU2_TR(0x67ef1b);
u8 U[4];
w4(U+0,u32(0x20500001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef20:{NFSU2_TR(0x67ef20);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ef23:{NFSU2_TR(0x67ef23);
__builtin_memmove((R+4),(R+12),4);
}
B67ef25:{NFSU2_TR(0x67ef25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ef2aull));
TAIL_STATIC(0x6758ceu,675);
}
B67ef2a:L67ef2a:{c.instructions+=3;NFSU2_TR(0x67ef2a);
__builtin_memmove((R+24),(R+0),4);
}
B67ef2c:{NFSU2_TR(0x67ef2c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ef2e:{NFSU2_TR(0x67ef2e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ef34:L67ef34:{c.instructions+=10;NFSU2_TR(0x67ef34);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef36:{NFSU2_TR(0x67ef36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef37:{NFSU2_TR(0x67ef37);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff34ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ef3d:{NFSU2_TR(0x67ef3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef3e:{NFSU2_TR(0x67ef3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ef41:{NFSU2_TR(0x67ef41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef42:{NFSU2_TR(0x67ef42);
u8 U[4];
w4(U+0,u32(0x10700001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef47:{NFSU2_TR(0x67ef47);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ef4a:{NFSU2_TR(0x67ef4a);
__builtin_memmove((R+4),(R+12),4);
}
B67ef4c:{NFSU2_TR(0x67ef4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ef51ull));
TAIL_STATIC(0x6758ceu,675);
}
B67ef51:L67ef51:{c.instructions+=3;NFSU2_TR(0x67ef51);
__builtin_memmove((R+24),(R+0),4);
}
B67ef53:{NFSU2_TR(0x67ef53);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ef55:{NFSU2_TR(0x67ef55);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ef5b:L67ef5b:{c.instructions+=10;NFSU2_TR(0x67ef5b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef5d:{NFSU2_TR(0x67ef5d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef5e:{NFSU2_TR(0x67ef5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff84ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ef61:{NFSU2_TR(0x67ef61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef62:{NFSU2_TR(0x67ef62);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ef65:{NFSU2_TR(0x67ef65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef66:{NFSU2_TR(0x67ef66);
u8 U[4];
w4(U+0,u32(0x10300001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef6b:{NFSU2_TR(0x67ef6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ef6e:{NFSU2_TR(0x67ef6e);
__builtin_memmove((R+4),(R+12),4);
}
B67ef70:{NFSU2_TR(0x67ef70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ef75ull));
TAIL_STATIC(0x6758ceu,675);
}
B67ef75:L67ef75:{c.instructions+=3;NFSU2_TR(0x67ef75);
__builtin_memmove((R+24),(R+0),4);
}
B67ef77:{NFSU2_TR(0x67ef77);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ef79:{NFSU2_TR(0x67ef79);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67ef7f:L67ef7f:{c.instructions+=11;NFSU2_TR(0x67ef7f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef80:{NFSU2_TR(0x67ef80);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ef83:{NFSU2_TR(0x67ef83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef84:{NFSU2_TR(0x67ef84);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ef87:{NFSU2_TR(0x67ef87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef88:{NFSU2_TR(0x67ef88);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B67ef8b:{NFSU2_TR(0x67ef8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef8c:{NFSU2_TR(0x67ef8c);
u8 U[4];
w4(U+0,u32(0x20400001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67ef91:{NFSU2_TR(0x67ef91);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67ef94:{NFSU2_TR(0x67ef94);
__builtin_memmove((R+4),(R+12),4);
}
B67ef96:{NFSU2_TR(0x67ef96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67ef9bull));
TAIL_STATIC(0x6758ceu,675);
}
B67ef9b:L67ef9b:{c.instructions+=3;NFSU2_TR(0x67ef9b);
__builtin_memmove((R+24),(R+0),4);
}
B67ef9d:{NFSU2_TR(0x67ef9d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67ef9f:{NFSU2_TR(0x67ef9f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
}
B67efa5:L67efa5:{c.instructions+=5;NFSU2_TR(0x67efa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B67efa8:{NFSU2_TR(0x67efa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B67efab:{NFSU2_TR(0x67efab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B67efac:{NFSU2_TR(0x67efac);
__builtin_memmove((R+4),(R+12),4);
}
B67efae:{NFSU2_TR(0x67efae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67efb3ull));
TAIL_STATIC(0x673a0fu,673);
}
B67efb3:L67efb3:{c.instructions+=2;NFSU2_TR(0x67efb3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67efb5:{NFSU2_TR(0x67efb5);
if(r1(R+518)){TAIL_STATIC(0x67fc7cu,67f);}
}
B67efbb:L67efbb:{c.instructions+=3;NFSU2_TR(0x67efbb);
__builtin_memmove((R+8),(R+24),4);
}
B67efbd:{NFSU2_TR(0x67efbd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B67efbf:{NFSU2_TR(0x67efbf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B67efc2:L67efc2:{c.instructions+=5;NFSU2_TR(0x67efc2);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd8ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B67efc6:{NFSU2_TR(0x67efc6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B67efc7:{NFSU2_TR(0x67efc7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B67efc9:{NFSU2_TR(0x67efc9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x5ull))));
}
B67efcc:{NFSU2_TR(0x67efcc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67efc2u);}goto L67efc2;}}
}
B67efce:L67efce:{c.instructions+=3;NFSU2_TR(0x67efce);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B67efd0:{NFSU2_TR(0x67efd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B67efd3:{NFSU2_TR(0x67efd3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L67efeb;}}
}
B67efd5:L67efd5:{c.instructions+=2;NFSU2_TR(0x67efd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B67efd8:{NFSU2_TR(0x67efd8);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B67efda:L67efda:{c.instructions+=7;NFSU2_TR(0x67efda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67efdd:{NFSU2_TR(0x67efdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B67efe0:{NFSU2_TR(0x67efe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B67efe3:{NFSU2_TR(0x67efe3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B67efe5:{NFSU2_TR(0x67efe5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B67efe8:{NFSU2_TR(0x67efe8);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B67efe9:{NFSU2_TR(0x67efe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x67efdau);}goto L67efda;}}
}
B67efeb:L67efeb:{c.instructions+=4;NFSU2_TR(0x67efeb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67efee:{NFSU2_TR(0x67efee);
__builtin_memmove((R+4),(R+12),4);
}
B67eff0:{NFSU2_TR(0x67eff0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B67eff3:{NFSU2_TR(0x67eff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x67eff8ull));
TAIL_STATIC(0x673b2cu,673);
}
B67eff8:L67eff8:{c.instructions+=3;NFSU2_TR(0x67eff8);
__builtin_memmove((R+24),(R+0),4);
}
B67effa:{NFSU2_TR(0x67effa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B67effc:{NFSU2_TR(0x67effc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x680902u,680);}
TAIL_STATIC(0x67f002u,67f);
}
XIT:NFSU2_TR_EXIT(0x67e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
