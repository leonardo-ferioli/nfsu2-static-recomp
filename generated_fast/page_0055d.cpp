#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4c2(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_521(u8* __restrict R,Cpu& c);
u32 body_522(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52d(u8* __restrict R,Cpu& c);
u32 body_530(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_53b(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_548(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55a(u8* __restrict R,Cpu& c);
u32 body_55b(u8* __restrict R,Cpu& c);
u32 body_55c(u8* __restrict R,Cpu& c);
u32 body_55e(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x55d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x55d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_55d(u8* __restrict R,Cpu& c);
u32 page_55d(Cpu& c){return body_55d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_55d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x55d002:goto L55d002;
case 0x55d003:c.instructions+=2;goto B55d003;
case 0x55d006:c.instructions+=1;goto B55d006;
case 0x55d008:goto L55d008;
case 0x55d00d:c.instructions+=5;goto B55d00d;
case 0x55d013:c.instructions+=4;goto B55d013;
case 0x55d014:c.instructions+=3;goto B55d014;
case 0x55d015:c.instructions+=2;goto B55d015;
case 0x55d01a:c.instructions+=1;goto B55d01a;
case 0x55d01f:goto L55d01f;
case 0x55d021:c.instructions+=3;goto B55d021;
case 0x55d023:c.instructions+=2;goto B55d023;
case 0x55d028:c.instructions+=1;goto B55d028;
case 0x55d02d:goto L55d02d;
case 0x55d030:c.instructions+=4;goto B55d030;
case 0x55d035:c.instructions+=3;goto B55d035;
case 0x55d03a:c.instructions+=2;goto B55d03a;
case 0x55d03f:c.instructions+=1;goto B55d03f;
case 0x55d044:goto L55d044;
case 0x55d04a:c.instructions+=3;goto B55d04a;
case 0x55d050:c.instructions+=2;goto B55d050;
case 0x55d052:c.instructions+=1;goto B55d052;
case 0x55d054:goto L55d054;
case 0x55d057:c.instructions+=5;goto B55d057;
case 0x55d05a:c.instructions+=4;goto B55d05a;
case 0x55d05b:c.instructions+=3;goto B55d05b;
case 0x55d05c:c.instructions+=2;goto B55d05c;
case 0x55d061:c.instructions+=1;goto B55d061;
case 0x55d066:goto L55d066;
case 0x55d068:c.instructions+=3;goto B55d068;
case 0x55d06a:c.instructions+=2;goto B55d06a;
case 0x55d06f:c.instructions+=1;goto B55d06f;
case 0x55d074:goto L55d074;
case 0x55d077:c.instructions+=4;goto B55d077;
case 0x55d07c:c.instructions+=3;goto B55d07c;
case 0x55d081:c.instructions+=2;goto B55d081;
case 0x55d086:c.instructions+=1;goto B55d086;
case 0x55d08b:goto L55d08b;
case 0x55d08d:c.instructions+=2;goto B55d08d;
case 0x55d08f:c.instructions+=1;goto B55d08f;
case 0x55d091:goto L55d091;
case 0x55d093:goto L55d093;
case 0x55d096:c.instructions+=4;goto B55d096;
case 0x55d099:c.instructions+=3;goto B55d099;
case 0x55d09a:c.instructions+=2;goto B55d09a;
case 0x55d09c:c.instructions+=1;goto B55d09c;
case 0x55d0a1:goto L55d0a1;
case 0x55d0a7:goto L55d0a7;
case 0x55d0aa:c.instructions+=5;goto B55d0aa;
case 0x55d0ad:c.instructions+=4;goto B55d0ad;
case 0x55d0ae:c.instructions+=3;goto B55d0ae;
case 0x55d0af:c.instructions+=2;goto B55d0af;
case 0x55d0b5:c.instructions+=1;goto B55d0b5;
case 0x55d0ba:goto L55d0ba;
case 0x55d0bb:c.instructions+=4;goto B55d0bb;
case 0x55d0bc:c.instructions+=3;goto B55d0bc;
case 0x55d0bd:c.instructions+=2;goto B55d0bd;
case 0x55d0be:c.instructions+=1;goto B55d0be;
case 0x55d0d0:goto L55d0d0;
case 0x55d0d1:c.instructions+=7;goto B55d0d1;
case 0x55d0d3:c.instructions+=6;goto B55d0d3;
case 0x55d0d4:c.instructions+=5;goto B55d0d4;
case 0x55d0d6:c.instructions+=4;goto B55d0d6;
case 0x55d0d9:c.instructions+=3;goto B55d0d9;
case 0x55d0df:c.instructions+=2;goto B55d0df;
case 0x55d0e5:c.instructions+=1;goto B55d0e5;
case 0x55d0eb:goto L55d0eb;
case 0x55d0f0:c.instructions+=1;goto B55d0f0;
case 0x55d0f6:goto L55d0f6;
case 0x55d0fb:c.instructions+=1;goto B55d0fb;
case 0x55d101:goto L55d101;
case 0x55d106:c.instructions+=1;goto B55d106;
case 0x55d108:goto L55d108;
case 0x55d112:goto L55d112;
case 0x55d118:c.instructions+=1;goto B55d118;
case 0x55d11e:goto L55d11e;
case 0x55d124:c.instructions+=4;goto B55d124;
case 0x55d126:c.instructions+=3;goto B55d126;
case 0x55d127:c.instructions+=2;goto B55d127;
case 0x55d12c:c.instructions+=1;goto B55d12c;
case 0x55d12e:goto L55d12e;
case 0x55d131:c.instructions+=2;goto B55d131;
case 0x55d133:c.instructions+=1;goto B55d133;
case 0x55d135:goto L55d135;
case 0x55d136:c.instructions+=3;goto B55d136;
case 0x55d13b:c.instructions+=2;goto B55d13b;
case 0x55d13c:c.instructions+=1;goto B55d13c;
case 0x55d141:goto L55d141;
case 0x55d144:goto L55d144;
case 0x55d146:c.instructions+=1;goto B55d146;
case 0x55d14b:goto L55d14b;
case 0x55d151:c.instructions+=4;goto B55d151;
case 0x55d157:c.instructions+=3;goto B55d157;
case 0x55d159:c.instructions+=2;goto B55d159;
case 0x55d15e:c.instructions+=1;goto B55d15e;
case 0x55d164:goto L55d164;
case 0x55d167:c.instructions+=2;goto B55d167;
case 0x55d168:c.instructions+=1;goto B55d168;
case 0x55d16d:goto L55d16d;
case 0x55d170:c.instructions+=5;goto B55d170;
case 0x55d171:c.instructions+=4;goto B55d171;
case 0x55d176:c.instructions+=3;goto B55d176;
case 0x55d17b:c.instructions+=2;goto B55d17b;
case 0x55d17c:c.instructions+=1;goto B55d17c;
case 0x55d181:goto L55d181;
case 0x55d184:c.instructions+=5;goto B55d184;
case 0x55d185:c.instructions+=4;goto B55d185;
case 0x55d18a:c.instructions+=3;goto B55d18a;
case 0x55d18f:c.instructions+=2;goto B55d18f;
case 0x55d190:c.instructions+=1;goto B55d190;
case 0x55d195:goto L55d195;
case 0x55d19a:c.instructions+=3;goto B55d19a;
case 0x55d19d:c.instructions+=2;goto B55d19d;
case 0x55d19f:c.instructions+=1;goto B55d19f;
case 0x55d1a1:goto L55d1a1;
case 0x55d1a4:c.instructions+=3;goto B55d1a4;
case 0x55d1a9:c.instructions+=2;goto B55d1a9;
case 0x55d1aa:c.instructions+=1;goto B55d1aa;
case 0x55d1af:goto L55d1af;
case 0x55d1b2:goto L55d1b2;
case 0x55d1b8:c.instructions+=2;goto B55d1b8;
case 0x55d1ba:c.instructions+=1;goto B55d1ba;
case 0x55d1c0:goto L55d1c0;
case 0x55d1c3:c.instructions+=2;goto B55d1c3;
case 0x55d1c5:c.instructions+=1;goto B55d1c5;
case 0x55d1cb:goto L55d1cb;
case 0x55d1ce:c.instructions+=5;goto B55d1ce;
case 0x55d1d1:c.instructions+=4;goto B55d1d1;
case 0x55d1d2:c.instructions+=3;goto B55d1d2;
case 0x55d1d3:c.instructions+=2;goto B55d1d3;
case 0x55d1d8:c.instructions+=1;goto B55d1d8;
case 0x55d1dd:goto L55d1dd;
case 0x55d1e3:c.instructions+=3;goto B55d1e3;
case 0x55d1e6:c.instructions+=2;goto B55d1e6;
case 0x55d1e8:c.instructions+=1;goto B55d1e8;
case 0x55d1ea:goto L55d1ea;
case 0x55d1eb:c.instructions+=3;goto B55d1eb;
case 0x55d1f0:c.instructions+=2;goto B55d1f0;
case 0x55d1f1:c.instructions+=1;goto B55d1f1;
case 0x55d1f6:goto L55d1f6;
case 0x55d1f9:goto L55d1f9;
case 0x55d1ff:c.instructions+=8;goto B55d1ff;
case 0x55d202:c.instructions+=7;goto B55d202;
case 0x55d205:c.instructions+=6;goto B55d205;
case 0x55d208:c.instructions+=5;goto B55d208;
case 0x55d20b:c.instructions+=4;goto B55d20b;
case 0x55d20c:c.instructions+=3;goto B55d20c;
case 0x55d20d:c.instructions+=2;goto B55d20d;
case 0x55d212:c.instructions+=1;goto B55d212;
case 0x55d217:goto L55d217;
case 0x55d218:c.instructions+=4;goto B55d218;
case 0x55d21d:c.instructions+=3;goto B55d21d;
case 0x55d222:c.instructions+=2;goto B55d222;
case 0x55d223:c.instructions+=1;goto B55d223;
case 0x55d228:goto L55d228;
case 0x55d22a:c.instructions+=3;goto B55d22a;
case 0x55d22d:c.instructions+=2;goto B55d22d;
case 0x55d22f:c.instructions+=1;goto B55d22f;
case 0x55d232:goto L55d232;
case 0x55d233:c.instructions+=3;goto B55d233;
case 0x55d234:c.instructions+=2;goto B55d234;
case 0x55d235:c.instructions+=1;goto B55d235;
case 0x55d238:goto L55d238;
case 0x55d242:c.instructions+=1;goto B55d242;
case 0x55d247:goto L55d247;
case 0x55d24d:c.instructions+=1;goto B55d24d;
case 0x55d253:goto L55d253;
case 0x55d258:c.instructions+=1;goto B55d258;
case 0x55d25e:goto L55d25e;
case 0x55d263:c.instructions+=1;goto B55d263;
case 0x55d265:goto L55d265;
case 0x55d26a:c.instructions+=1;goto B55d26a;
case 0x55d270:goto L55d270;
case 0x55d27a:c.instructions+=1;goto B55d27a;
case 0x55d27f:goto L55d27f;
case 0x55d282:c.instructions+=2;goto B55d282;
case 0x55d283:c.instructions+=1;goto B55d283;
case 0x55d288:goto L55d288;
case 0x55d28b:c.instructions+=5;goto B55d28b;
case 0x55d28c:c.instructions+=4;goto B55d28c;
case 0x55d291:c.instructions+=3;goto B55d291;
case 0x55d296:c.instructions+=2;goto B55d296;
case 0x55d297:c.instructions+=1;goto B55d297;
case 0x55d29c:goto L55d29c;
case 0x55d2a1:c.instructions+=3;goto B55d2a1;
case 0x55d2a4:c.instructions+=2;goto B55d2a4;
case 0x55d2a6:c.instructions+=1;goto B55d2a6;
case 0x55d2a8:goto L55d2a8;
case 0x55d2ab:c.instructions+=3;goto B55d2ab;
case 0x55d2b0:c.instructions+=2;goto B55d2b0;
case 0x55d2b1:c.instructions+=1;goto B55d2b1;
case 0x55d2b6:goto L55d2b6;
case 0x55d2b9:goto L55d2b9;
case 0x55d2bb:c.instructions+=2;goto B55d2bb;
case 0x55d2bd:c.instructions+=1;goto B55d2bd;
case 0x55d2c0:goto L55d2c0;
case 0x55d2c1:goto L55d2c1;
case 0x55d2c2:c.instructions+=2;goto B55d2c2;
case 0x55d2c3:c.instructions+=1;goto B55d2c3;
case 0x55d2d0:goto L55d2d0;
case 0x55d2d1:c.instructions+=7;goto B55d2d1;
case 0x55d2d3:c.instructions+=6;goto B55d2d3;
case 0x55d2d4:c.instructions+=5;goto B55d2d4;
case 0x55d2d6:c.instructions+=4;goto B55d2d6;
case 0x55d2dc:c.instructions+=3;goto B55d2dc;
case 0x55d2e2:c.instructions+=2;goto B55d2e2;
case 0x55d2e4:c.instructions+=1;goto B55d2e4;
case 0x55d2ea:goto L55d2ea;
case 0x55d2ed:c.instructions+=4;goto B55d2ed;
case 0x55d2f2:c.instructions+=3;goto B55d2f2;
case 0x55d2f3:c.instructions+=2;goto B55d2f3;
case 0x55d2f9:c.instructions+=1;goto B55d2f9;
case 0x55d2fb:goto L55d2fb;
case 0x55d300:c.instructions+=1;goto B55d300;
case 0x55d302:goto L55d302;
case 0x55d307:c.instructions+=1;goto B55d307;
case 0x55d309:goto L55d309;
case 0x55d30e:c.instructions+=1;goto B55d30e;
case 0x55d310:goto L55d310;
case 0x55d311:c.instructions+=2;goto B55d311;
case 0x55d313:c.instructions+=1;goto B55d313;
case 0x55d318:goto L55d318;
case 0x55d31a:goto L55d31a;
case 0x55d31b:c.instructions+=2;goto B55d31b;
case 0x55d31d:c.instructions+=1;goto B55d31d;
case 0x55d322:goto L55d322;
case 0x55d328:c.instructions+=2;goto B55d328;
case 0x55d32a:c.instructions+=1;goto B55d32a;
case 0x55d330:goto L55d330;
case 0x55d332:c.instructions+=1;goto B55d332;
case 0x55d338:goto L55d338;
case 0x55d33b:c.instructions+=2;goto B55d33b;
case 0x55d33d:c.instructions+=1;goto B55d33d;
case 0x55d343:goto L55d343;
case 0x55d346:c.instructions+=2;goto B55d346;
case 0x55d348:c.instructions+=1;goto B55d348;
case 0x55d34a:goto L55d34a;
case 0x55d34c:c.instructions+=3;goto B55d34c;
case 0x55d351:c.instructions+=2;goto B55d351;
case 0x55d352:c.instructions+=1;goto B55d352;
case 0x55d357:goto L55d357;
case 0x55d35a:goto L55d35a;
case 0x55d360:c.instructions+=3;goto B55d360;
case 0x55d363:c.instructions+=2;goto B55d363;
case 0x55d365:c.instructions+=1;goto B55d365;
case 0x55d367:goto L55d367;
case 0x55d369:c.instructions+=3;goto B55d369;
case 0x55d36e:c.instructions+=2;goto B55d36e;
case 0x55d36f:c.instructions+=1;goto B55d36f;
case 0x55d374:goto L55d374;
case 0x55d377:goto L55d377;
case 0x55d37d:c.instructions+=7;goto B55d37d;
case 0x55d380:c.instructions+=6;goto B55d380;
case 0x55d383:c.instructions+=5;goto B55d383;
case 0x55d386:c.instructions+=4;goto B55d386;
case 0x55d387:c.instructions+=3;goto B55d387;
case 0x55d388:c.instructions+=2;goto B55d388;
case 0x55d38d:c.instructions+=1;goto B55d38d;
case 0x55d392:goto L55d392;
case 0x55d398:c.instructions+=1;goto B55d398;
case 0x55d39d:goto L55d39d;
case 0x55d3a3:c.instructions+=4;goto B55d3a3;
case 0x55d3a4:c.instructions+=3;goto B55d3a4;
case 0x55d3aa:c.instructions+=2;goto B55d3aa;
case 0x55d3ad:c.instructions+=1;goto B55d3ad;
case 0x55d3b2:goto L55d3b2;
case 0x55d3b8:c.instructions+=5;goto B55d3b8;
case 0x55d3b9:c.instructions+=4;goto B55d3b9;
case 0x55d3bf:c.instructions+=3;goto B55d3bf;
case 0x55d3c2:c.instructions+=2;goto B55d3c2;
case 0x55d3c3:c.instructions+=1;goto B55d3c3;
case 0x55d3c8:goto L55d3c8;
case 0x55d3ce:c.instructions+=9;goto B55d3ce;
case 0x55d3d1:c.instructions+=8;goto B55d3d1;
case 0x55d3d4:c.instructions+=7;goto B55d3d4;
case 0x55d3d7:c.instructions+=6;goto B55d3d7;
case 0x55d3da:c.instructions+=5;goto B55d3da;
case 0x55d3db:c.instructions+=4;goto B55d3db;
case 0x55d3de:c.instructions+=3;goto B55d3de;
case 0x55d3df:c.instructions+=2;goto B55d3df;
case 0x55d3e4:c.instructions+=1;goto B55d3e4;
case 0x55d3e9:goto L55d3e9;
case 0x55d3ea:c.instructions+=4;goto B55d3ea;
case 0x55d3ef:c.instructions+=3;goto B55d3ef;
case 0x55d3f4:c.instructions+=2;goto B55d3f4;
case 0x55d3f5:c.instructions+=1;goto B55d3f5;
case 0x55d3fa:goto L55d3fa;
case 0x55d3fd:goto L55d3fd;
case 0x55d3fe:goto L55d3fe;
case 0x55d3ff:c.instructions+=2;goto B55d3ff;
case 0x55d400:c.instructions+=1;goto B55d400;
case 0x55d410:goto L55d410;
case 0x55d413:c.instructions+=12;goto B55d413;
case 0x55d419:c.instructions+=11;goto B55d419;
case 0x55d41e:c.instructions+=10;goto B55d41e;
case 0x55d41f:c.instructions+=9;goto B55d41f;
case 0x55d421:c.instructions+=8;goto B55d421;
case 0x55d427:c.instructions+=7;goto B55d427;
case 0x55d42e:c.instructions+=6;goto B55d42e;
case 0x55d432:c.instructions+=5;goto B55d432;
case 0x55d434:c.instructions+=4;goto B55d434;
case 0x55d43a:c.instructions+=3;goto B55d43a;
case 0x55d440:c.instructions+=2;goto B55d440;
case 0x55d444:c.instructions+=1;goto B55d444;
case 0x55d446:goto L55d446;
case 0x55d44d:goto L55d44d;
case 0x55d44f:c.instructions+=1;goto B55d44f;
case 0x55d455:goto L55d455;
case 0x55d45b:c.instructions+=2;goto B55d45b;
case 0x55d45d:c.instructions+=1;goto B55d45d;
case 0x55d463:goto L55d463;
case 0x55d466:c.instructions+=9;goto B55d466;
case 0x55d46a:c.instructions+=8;goto B55d46a;
case 0x55d470:c.instructions+=7;goto B55d470;
case 0x55d471:c.instructions+=6;goto B55d471;
case 0x55d474:c.instructions+=5;goto B55d474;
case 0x55d478:c.instructions+=4;goto B55d478;
case 0x55d47c:c.instructions+=3;goto B55d47c;
case 0x55d482:c.instructions+=2;goto B55d482;
case 0x55d485:c.instructions+=1;goto B55d485;
case 0x55d48a:goto L55d48a;
case 0x55d48d:c.instructions+=2;goto B55d48d;
case 0x55d48f:c.instructions+=1;goto B55d48f;
case 0x55d491:goto L55d491;
case 0x55d494:c.instructions+=3;goto B55d494;
case 0x55d49b:c.instructions+=2;goto B55d49b;
case 0x55d49e:c.instructions+=1;goto B55d49e;
case 0x55d4a0:goto L55d4a0;
case 0x55d4a6:c.instructions+=2;goto B55d4a6;
case 0x55d4a7:c.instructions+=1;goto B55d4a7;
case 0x55d4ac:goto L55d4ac;
case 0x55d4af:c.instructions+=10;goto B55d4af;
case 0x55d4b4:c.instructions+=9;goto B55d4b4;
case 0x55d4b6:c.instructions+=8;goto B55d4b6;
case 0x55d4bb:c.instructions+=7;goto B55d4bb;
case 0x55d4c0:c.instructions+=6;goto B55d4c0;
case 0x55d4c5:c.instructions+=5;goto B55d4c5;
case 0x55d4ca:c.instructions+=4;goto B55d4ca;
case 0x55d4cf:c.instructions+=3;goto B55d4cf;
case 0x55d4d4:c.instructions+=2;goto B55d4d4;
case 0x55d4d5:c.instructions+=1;goto B55d4d5;
case 0x55d4da:goto L55d4da;
case 0x55d4dd:c.instructions+=3;goto B55d4dd;
case 0x55d4df:c.instructions+=2;goto B55d4df;
case 0x55d4e9:c.instructions+=1;goto B55d4e9;
case 0x55d4ee:goto L55d4ee;
case 0x55d4f4:c.instructions+=2;goto B55d4f4;
case 0x55d4f6:c.instructions+=1;goto B55d4f6;
case 0x55d4fc:goto L55d4fc;
case 0x55d502:c.instructions+=2;goto B55d502;
case 0x55d503:c.instructions+=1;goto B55d503;
case 0x55d508:goto L55d508;
case 0x55d50b:c.instructions+=2;goto B55d50b;
case 0x55d50d:c.instructions+=1;goto B55d50d;
case 0x55d50f:goto L55d50f;
case 0x55d514:c.instructions+=2;goto B55d514;
case 0x55d516:c.instructions+=1;goto B55d516;
case 0x55d51b:goto L55d51b;
case 0x55d521:c.instructions+=4;goto B55d521;
case 0x55d523:c.instructions+=3;goto B55d523;
case 0x55d528:c.instructions+=2;goto B55d528;
case 0x55d529:c.instructions+=1;goto B55d529;
case 0x55d52e:goto L55d52e;
case 0x55d535:c.instructions+=3;goto B55d535;
case 0x55d538:c.instructions+=2;goto B55d538;
case 0x55d53b:c.instructions+=1;goto B55d53b;
case 0x55d541:goto L55d541;
case 0x55d547:c.instructions+=2;goto B55d547;
case 0x55d548:c.instructions+=1;goto B55d548;
case 0x55d54d:goto L55d54d;
case 0x55d54e:c.instructions+=2;goto B55d54e;
case 0x55d551:c.instructions+=1;goto B55d551;
case 0x55d552:goto L55d552;
case 0x55d558:c.instructions+=2;goto B55d558;
case 0x55d559:c.instructions+=1;goto B55d559;
case 0x55d55e:goto L55d55e;
case 0x55d561:c.instructions+=2;goto B55d561;
case 0x55d563:c.instructions+=1;goto B55d563;
case 0x55d569:goto L55d569;
case 0x55d56e:c.instructions+=2;goto B55d56e;
case 0x55d570:c.instructions+=1;goto B55d570;
case 0x55d575:goto L55d575;
case 0x55d57b:c.instructions+=4;goto B55d57b;
case 0x55d57d:c.instructions+=3;goto B55d57d;
case 0x55d582:c.instructions+=2;goto B55d582;
case 0x55d583:c.instructions+=1;goto B55d583;
case 0x55d588:goto L55d588;
case 0x55d58b:c.instructions+=4;goto B55d58b;
case 0x55d58d:c.instructions+=3;goto B55d58d;
case 0x55d58f:c.instructions+=2;goto B55d58f;
case 0x55d590:c.instructions+=1;goto B55d590;
case 0x55d595:goto L55d595;
case 0x55d598:c.instructions+=3;goto B55d598;
case 0x55d599:c.instructions+=2;goto B55d599;
case 0x55d59c:c.instructions+=1;goto B55d59c;
case 0x55d59d:goto L55d59d;
case 0x55d5a2:c.instructions+=2;goto B55d5a2;
case 0x55d5a4:c.instructions+=1;goto B55d5a4;
case 0x55d5a6:goto L55d5a6;
case 0x55d5ab:c.instructions+=2;goto B55d5ab;
case 0x55d5ad:c.instructions+=1;goto B55d5ad;
case 0x55d5b3:goto L55d5b3;
case 0x55d5b7:c.instructions+=9;goto B55d5b7;
case 0x55d5b8:c.instructions+=8;goto B55d5b8;
case 0x55d5be:c.instructions+=7;goto B55d5be;
case 0x55d5c1:c.instructions+=6;goto B55d5c1;
case 0x55d5c3:c.instructions+=5;goto B55d5c3;
case 0x55d5c7:c.instructions+=4;goto B55d5c7;
case 0x55d5cb:c.instructions+=3;goto B55d5cb;
case 0x55d5d1:c.instructions+=2;goto B55d5d1;
case 0x55d5d4:c.instructions+=1;goto B55d5d4;
case 0x55d5d9:goto L55d5d9;
case 0x55d5db:c.instructions+=2;goto B55d5db;
case 0x55d5dd:c.instructions+=1;goto B55d5dd;
case 0x55d5df:goto L55d5df;
case 0x55d5e5:c.instructions+=2;goto B55d5e5;
case 0x55d5e7:c.instructions+=1;goto B55d5e7;
case 0x55d5e9:goto L55d5e9;
case 0x55d5ec:c.instructions+=2;goto B55d5ec;
case 0x55d5ee:c.instructions+=1;goto B55d5ee;
case 0x55d5f0:goto L55d5f0;
case 0x55d5f5:goto L55d5f5;
case 0x55d5f7:c.instructions+=1;goto B55d5f7;
case 0x55d5fc:goto L55d5fc;
case 0x55d5ff:c.instructions+=7;goto B55d5ff;
case 0x55d605:c.instructions+=6;goto B55d605;
case 0x55d608:c.instructions+=5;goto B55d608;
case 0x55d60b:c.instructions+=4;goto B55d60b;
case 0x55d60c:c.instructions+=3;goto B55d60c;
case 0x55d60d:c.instructions+=2;goto B55d60d;
case 0x55d612:c.instructions+=1;goto B55d612;
case 0x55d617:goto L55d617;
case 0x55d61d:c.instructions+=1;goto B55d61d;
case 0x55d622:goto L55d622;
case 0x55d628:c.instructions+=4;goto B55d628;
case 0x55d629:c.instructions+=3;goto B55d629;
case 0x55d62f:c.instructions+=2;goto B55d62f;
case 0x55d632:c.instructions+=1;goto B55d632;
case 0x55d637:goto L55d637;
case 0x55d63d:c.instructions+=5;goto B55d63d;
case 0x55d643:c.instructions+=4;goto B55d643;
case 0x55d644:c.instructions+=3;goto B55d644;
case 0x55d647:c.instructions+=2;goto B55d647;
case 0x55d648:c.instructions+=1;goto B55d648;
case 0x55d64d:goto L55d64d;
case 0x55d650:goto L55d650;
case 0x55d651:goto L55d651;
case 0x55d652:c.instructions+=2;goto B55d652;
case 0x55d655:c.instructions+=1;goto B55d655;
case 0x55d660:goto L55d660;
case 0x55d661:c.instructions+=8;goto B55d661;
case 0x55d663:c.instructions+=7;goto B55d663;
case 0x55d664:c.instructions+=6;goto B55d664;
case 0x55d665:c.instructions+=5;goto B55d665;
case 0x55d667:c.instructions+=4;goto B55d667;
case 0x55d66a:c.instructions+=3;goto B55d66a;
case 0x55d66d:c.instructions+=2;goto B55d66d;
case 0x55d66f:c.instructions+=1;goto B55d66f;
case 0x55d675:goto L55d675;
case 0x55d678:c.instructions+=6;goto B55d678;
case 0x55d679:c.instructions+=5;goto B55d679;
case 0x55d67c:c.instructions+=4;goto B55d67c;
case 0x55d67f:c.instructions+=3;goto B55d67f;
case 0x55d680:c.instructions+=2;goto B55d680;
case 0x55d683:c.instructions+=1;goto B55d683;
case 0x55d685:goto L55d685;
case 0x55d688:c.instructions+=3;goto B55d688;
case 0x55d68a:c.instructions+=2;goto B55d68a;
case 0x55d68d:c.instructions+=1;goto B55d68d;
case 0x55d68f:goto L55d68f;
case 0x55d692:c.instructions+=1;goto B55d692;
case 0x55d694:goto L55d694;
case 0x55d696:goto L55d696;
case 0x55d699:c.instructions+=1;goto B55d699;
case 0x55d69b:goto L55d69b;
case 0x55d69e:c.instructions+=3;goto B55d69e;
case 0x55d6a5:c.instructions+=2;goto B55d6a5;
case 0x55d6a8:c.instructions+=1;goto B55d6a8;
case 0x55d6aa:goto L55d6aa;
case 0x55d6b0:c.instructions+=2;goto B55d6b0;
case 0x55d6b1:c.instructions+=1;goto B55d6b1;
case 0x55d6b6:goto L55d6b6;
case 0x55d6b8:c.instructions+=1;goto B55d6b8;
case 0x55d6bd:goto L55d6bd;
case 0x55d6bf:goto L55d6bf;
case 0x55d6c2:c.instructions+=1;goto B55d6c2;
case 0x55d6c4:goto L55d6c4;
case 0x55d6c7:c.instructions+=2;goto B55d6c7;
case 0x55d6c9:c.instructions+=1;goto B55d6c9;
case 0x55d6ce:goto L55d6ce;
case 0x55d6d0:c.instructions+=1;goto B55d6d0;
case 0x55d6d2:goto L55d6d2;
case 0x55d6d5:c.instructions+=5;goto B55d6d5;
case 0x55d6d8:c.instructions+=4;goto B55d6d8;
case 0x55d6d9:c.instructions+=3;goto B55d6d9;
case 0x55d6db:c.instructions+=2;goto B55d6db;
case 0x55d6dc:c.instructions+=1;goto B55d6dc;
case 0x55d6e1:goto L55d6e1;
case 0x55d6e4:goto L55d6e4;
case 0x55d6e6:c.instructions+=1;goto B55d6e6;
case 0x55d6eb:goto L55d6eb;
case 0x55d6ee:c.instructions+=2;goto B55d6ee;
case 0x55d6f1:c.instructions+=1;goto B55d6f1;
case 0x55d6f7:goto L55d6f7;
case 0x55d6fa:c.instructions+=10;goto B55d6fa;
case 0x55d700:c.instructions+=9;goto B55d700;
case 0x55d703:c.instructions+=8;goto B55d703;
case 0x55d706:c.instructions+=7;goto B55d706;
case 0x55d709:c.instructions+=6;goto B55d709;
case 0x55d70f:c.instructions+=5;goto B55d70f;
case 0x55d712:c.instructions+=4;goto B55d712;
case 0x55d713:c.instructions+=3;goto B55d713;
case 0x55d714:c.instructions+=2;goto B55d714;
case 0x55d719:c.instructions+=1;goto B55d719;
case 0x55d71e:goto L55d71e;
case 0x55d724:c.instructions+=6;goto B55d724;
case 0x55d727:c.instructions+=5;goto B55d727;
case 0x55d729:c.instructions+=4;goto B55d729;
case 0x55d72b:c.instructions+=3;goto B55d72b;
case 0x55d72d:c.instructions+=2;goto B55d72d;
case 0x55d72e:c.instructions+=1;goto B55d72e;
case 0x55d733:goto L55d733;
case 0x55d736:c.instructions+=2;goto B55d736;
case 0x55d739:c.instructions+=1;goto B55d739;
case 0x55d73b:goto L55d73b;
case 0x55d741:c.instructions+=2;goto B55d741;
case 0x55d743:c.instructions+=1;goto B55d743;
case 0x55d748:goto L55d748;
case 0x55d74a:c.instructions+=1;goto B55d74a;
case 0x55d74f:goto L55d74f;
case 0x55d751:goto L55d751;
case 0x55d754:c.instructions+=1;goto B55d754;
case 0x55d756:goto L55d756;
case 0x55d75c:c.instructions+=2;goto B55d75c;
case 0x55d75e:c.instructions+=1;goto B55d75e;
case 0x55d763:goto L55d763;
case 0x55d765:c.instructions+=1;goto B55d765;
case 0x55d76a:goto L55d76a;
case 0x55d76c:c.instructions+=1;goto B55d76c;
case 0x55d771:goto L55d771;
case 0x55d774:c.instructions+=3;goto B55d774;
case 0x55d776:c.instructions+=2;goto B55d776;
case 0x55d779:c.instructions+=1;goto B55d779;
case 0x55d77b:goto L55d77b;
case 0x55d77e:c.instructions+=1;goto B55d77e;
case 0x55d780:goto L55d780;
case 0x55d782:goto L55d782;
case 0x55d785:c.instructions+=1;goto B55d785;
case 0x55d787:goto L55d787;
case 0x55d78d:c.instructions+=2;goto B55d78d;
case 0x55d78e:c.instructions+=1;goto B55d78e;
case 0x55d793:goto L55d793;
case 0x55d796:c.instructions+=6;goto B55d796;
case 0x55d797:c.instructions+=5;goto B55d797;
case 0x55d798:c.instructions+=4;goto B55d798;
case 0x55d799:c.instructions+=3;goto B55d799;
case 0x55d79b:c.instructions+=2;goto B55d79b;
case 0x55d79c:c.instructions+=1;goto B55d79c;
case 0x55d79f:goto L55d79f;
case 0x55d7a4:goto L55d7a4;
case 0x55d7a6:c.instructions+=1;goto B55d7a6;
case 0x55d7a8:goto L55d7a8;
case 0x55d7ae:c.instructions+=2;goto B55d7ae;
case 0x55d7af:c.instructions+=1;goto B55d7af;
case 0x55d7b4:goto L55d7b4;
case 0x55d7b7:c.instructions+=6;goto B55d7b7;
case 0x55d7b8:c.instructions+=5;goto B55d7b8;
case 0x55d7b9:c.instructions+=4;goto B55d7b9;
case 0x55d7ba:c.instructions+=3;goto B55d7ba;
case 0x55d7bc:c.instructions+=2;goto B55d7bc;
case 0x55d7bd:c.instructions+=1;goto B55d7bd;
case 0x55d7c0:goto L55d7c0;
case 0x55d7c6:c.instructions+=2;goto B55d7c6;
case 0x55d7c7:c.instructions+=1;goto B55d7c7;
case 0x55d7cc:goto L55d7cc;
case 0x55d7d2:c.instructions+=2;goto B55d7d2;
case 0x55d7d3:c.instructions+=1;goto B55d7d3;
case 0x55d7d8:goto L55d7d8;
case 0x55d7db:goto L55d7db;
case 0x55d7dc:c.instructions+=1;goto B55d7dc;
case 0x55d7dd:goto L55d7dd;
case 0x55d7de:c.instructions+=3;goto B55d7de;
case 0x55d7e0:c.instructions+=2;goto B55d7e0;
case 0x55d7e1:c.instructions+=1;goto B55d7e1;
case 0x55d7f0:goto L55d7f0;
case 0x55d7f2:c.instructions+=7;goto B55d7f2;
case 0x55d7f7:c.instructions+=6;goto B55d7f7;
case 0x55d7fd:c.instructions+=5;goto B55d7fd;
case 0x55d7fe:c.instructions+=4;goto B55d7fe;
case 0x55d805:c.instructions+=3;goto B55d805;
case 0x55d806:c.instructions+=2;goto B55d806;
case 0x55d80b:c.instructions+=1;goto B55d80b;
case 0x55d810:goto L55d810;
case 0x55d813:c.instructions+=4;goto B55d813;
case 0x55d817:c.instructions+=3;goto B55d817;
case 0x55d819:c.instructions+=2;goto B55d819;
case 0x55d821:c.instructions+=1;goto B55d821;
case 0x55d823:goto L55d823;
case 0x55d827:c.instructions+=3;goto B55d827;
case 0x55d828:c.instructions+=2;goto B55d828;
case 0x55d82a:c.instructions+=1;goto B55d82a;
case 0x55d82f:goto L55d82f;
case 0x55d833:c.instructions+=3;goto B55d833;
case 0x55d83a:c.instructions+=2;goto B55d83a;
case 0x55d83d:c.instructions+=1;goto B55d83d;
case 0x55d83e:goto L55d83e;
case 0x55d842:c.instructions+=4;goto B55d842;
case 0x55d844:c.instructions+=3;goto B55d844;
case 0x55d84b:c.instructions+=2;goto B55d84b;
case 0x55d84e:c.instructions+=1;goto B55d84e;
case 0x55d850:goto L55d850;
case 0x55d852:c.instructions+=7;goto B55d852;
case 0x55d857:c.instructions+=6;goto B55d857;
case 0x55d85d:c.instructions+=5;goto B55d85d;
case 0x55d85e:c.instructions+=4;goto B55d85e;
case 0x55d865:c.instructions+=3;goto B55d865;
case 0x55d866:c.instructions+=2;goto B55d866;
case 0x55d86b:c.instructions+=1;goto B55d86b;
case 0x55d870:goto L55d870;
case 0x55d873:c.instructions+=4;goto B55d873;
case 0x55d877:c.instructions+=3;goto B55d877;
case 0x55d879:c.instructions+=2;goto B55d879;
case 0x55d881:c.instructions+=1;goto B55d881;
case 0x55d883:goto L55d883;
case 0x55d887:c.instructions+=3;goto B55d887;
case 0x55d888:c.instructions+=2;goto B55d888;
case 0x55d88a:c.instructions+=1;goto B55d88a;
case 0x55d88f:goto L55d88f;
case 0x55d893:c.instructions+=3;goto B55d893;
case 0x55d89a:c.instructions+=2;goto B55d89a;
case 0x55d89d:c.instructions+=1;goto B55d89d;
case 0x55d89e:goto L55d89e;
case 0x55d8a2:c.instructions+=4;goto B55d8a2;
case 0x55d8a4:c.instructions+=3;goto B55d8a4;
case 0x55d8ab:c.instructions+=2;goto B55d8ab;
case 0x55d8ae:c.instructions+=1;goto B55d8ae;
case 0x55d8b0:goto L55d8b0;
case 0x55d8b2:c.instructions+=7;goto B55d8b2;
case 0x55d8b7:c.instructions+=6;goto B55d8b7;
case 0x55d8bd:c.instructions+=5;goto B55d8bd;
case 0x55d8be:c.instructions+=4;goto B55d8be;
case 0x55d8c5:c.instructions+=3;goto B55d8c5;
case 0x55d8c6:c.instructions+=2;goto B55d8c6;
case 0x55d8cb:c.instructions+=1;goto B55d8cb;
case 0x55d8d0:goto L55d8d0;
case 0x55d8d3:c.instructions+=4;goto B55d8d3;
case 0x55d8d7:c.instructions+=3;goto B55d8d7;
case 0x55d8d9:c.instructions+=2;goto B55d8d9;
case 0x55d8e1:c.instructions+=1;goto B55d8e1;
case 0x55d8e3:goto L55d8e3;
case 0x55d8e7:c.instructions+=3;goto B55d8e7;
case 0x55d8e8:c.instructions+=2;goto B55d8e8;
case 0x55d8ea:c.instructions+=1;goto B55d8ea;
case 0x55d8ef:goto L55d8ef;
case 0x55d8f3:c.instructions+=3;goto B55d8f3;
case 0x55d8fa:c.instructions+=2;goto B55d8fa;
case 0x55d8fd:c.instructions+=1;goto B55d8fd;
case 0x55d8fe:goto L55d8fe;
case 0x55d902:c.instructions+=4;goto B55d902;
case 0x55d904:c.instructions+=3;goto B55d904;
case 0x55d90b:c.instructions+=2;goto B55d90b;
case 0x55d90e:c.instructions+=1;goto B55d90e;
case 0x55d910:goto L55d910;
case 0x55d911:c.instructions+=8;goto B55d911;
case 0x55d913:c.instructions+=7;goto B55d913;
case 0x55d914:c.instructions+=6;goto B55d914;
case 0x55d916:c.instructions+=5;goto B55d916;
case 0x55d91c:c.instructions+=4;goto B55d91c;
case 0x55d922:c.instructions+=3;goto B55d922;
case 0x55d923:c.instructions+=2;goto B55d923;
case 0x55d926:c.instructions+=1;goto B55d926;
case 0x55d928:goto L55d928;
case 0x55d92b:c.instructions+=8;goto B55d92b;
case 0x55d92e:c.instructions+=7;goto B55d92e;
case 0x55d931:c.instructions+=6;goto B55d931;
case 0x55d932:c.instructions+=5;goto B55d932;
case 0x55d933:c.instructions+=4;goto B55d933;
case 0x55d934:c.instructions+=3;goto B55d934;
case 0x55d935:c.instructions+=2;goto B55d935;
case 0x55d937:c.instructions+=1;goto B55d937;
case 0x55d93c:goto L55d93c;
case 0x55d942:c.instructions+=1;goto B55d942;
case 0x55d948:goto L55d948;
case 0x55d94e:goto L55d94e;
case 0x55d954:c.instructions+=1;goto B55d954;
case 0x55d956:goto L55d956;
case 0x55d95c:c.instructions+=1;goto B55d95c;
case 0x55d95e:goto L55d95e;
case 0x55d964:c.instructions+=1;goto B55d964;
case 0x55d96a:goto L55d96a;
case 0x55d96f:c.instructions+=2;goto B55d96f;
case 0x55d976:c.instructions+=1;goto B55d976;
case 0x55d97b:goto L55d97b;
case 0x55d980:goto L55d980;
case 0x55d983:c.instructions+=5;goto B55d983;
case 0x55d986:c.instructions+=4;goto B55d986;
case 0x55d98c:c.instructions+=3;goto B55d98c;
case 0x55d98d:c.instructions+=2;goto B55d98d;
case 0x55d98e:c.instructions+=1;goto B55d98e;
case 0x55d993:goto L55d993;
case 0x55d994:c.instructions+=3;goto B55d994;
case 0x55d995:c.instructions+=2;goto B55d995;
case 0x55d996:c.instructions+=1;goto B55d996;
case 0x55d999:goto L55d999;
case 0x55d99c:c.instructions+=3;goto B55d99c;
case 0x55d99f:c.instructions+=2;goto B55d99f;
case 0x55d9a1:c.instructions+=1;goto B55d9a1;
case 0x55d9a7:goto L55d9a7;
case 0x55d9aa:c.instructions+=6;goto B55d9aa;
case 0x55d9b0:c.instructions+=5;goto B55d9b0;
case 0x55d9b3:c.instructions+=4;goto B55d9b3;
case 0x55d9b6:c.instructions+=3;goto B55d9b6;
case 0x55d9b7:c.instructions+=2;goto B55d9b7;
case 0x55d9bc:c.instructions+=1;goto B55d9bc;
case 0x55d9c1:goto L55d9c1;
case 0x55d9c4:c.instructions+=3;goto B55d9c4;
case 0x55d9c6:c.instructions+=2;goto B55d9c6;
case 0x55d9c7:c.instructions+=1;goto B55d9c7;
case 0x55d9cc:goto L55d9cc;
case 0x55d9cf:c.instructions+=5;goto B55d9cf;
case 0x55d9d2:c.instructions+=4;goto B55d9d2;
case 0x55d9d5:c.instructions+=3;goto B55d9d5;
case 0x55d9d6:c.instructions+=2;goto B55d9d6;
case 0x55d9d8:c.instructions+=1;goto B55d9d8;
case 0x55d9dd:goto L55d9dd;
case 0x55d9de:c.instructions+=3;goto B55d9de;
case 0x55d9df:c.instructions+=2;goto B55d9df;
case 0x55d9e0:c.instructions+=1;goto B55d9e0;
case 0x55d9e3:goto L55d9e3;
case 0x55d9e9:c.instructions+=2;goto B55d9e9;
case 0x55d9ef:c.instructions+=1;goto B55d9ef;
case 0x55d9f5:goto L55d9f5;
case 0x55d9fa:c.instructions+=2;goto B55d9fa;
case 0x55d9fc:c.instructions+=1;goto B55d9fc;
case 0x55da02:goto L55da02;
case 0x55da08:c.instructions+=5;goto B55da08;
case 0x55da0f:c.instructions+=4;goto B55da0f;
case 0x55da12:c.instructions+=3;goto B55da12;
case 0x55da14:c.instructions+=2;goto B55da14;
case 0x55da1b:c.instructions+=1;goto B55da1b;
case 0x55da20:goto L55da20;
case 0x55da23:c.instructions+=5;goto B55da23;
case 0x55da25:c.instructions+=4;goto B55da25;
case 0x55da2a:c.instructions+=3;goto B55da2a;
case 0x55da2f:c.instructions+=2;goto B55da2f;
case 0x55da30:c.instructions+=1;goto B55da30;
case 0x55da35:goto L55da35;
case 0x55da3a:c.instructions+=1;goto B55da3a;
case 0x55da3f:goto L55da3f;
case 0x55da42:c.instructions+=2;goto B55da42;
case 0x55da44:c.instructions+=1;goto B55da44;
case 0x55da4a:goto L55da4a;
case 0x55da4f:c.instructions+=1;goto B55da4f;
case 0x55da54:goto L55da54;
case 0x55da57:c.instructions+=4;goto B55da57;
case 0x55da58:c.instructions+=3;goto B55da58;
case 0x55da59:c.instructions+=2;goto B55da59;
case 0x55da5a:c.instructions+=1;goto B55da5a;
case 0x55da5d:goto L55da5d;
case 0x55da63:c.instructions+=1;goto B55da63;
case 0x55da69:goto L55da69;
case 0x55da6f:c.instructions+=1;goto B55da6f;
case 0x55da75:goto L55da75;
case 0x55da7a:c.instructions+=2;goto B55da7a;
case 0x55da7c:c.instructions+=1;goto B55da7c;
case 0x55da7e:goto L55da7e;
case 0x55da83:c.instructions+=1;goto B55da83;
case 0x55da88:goto L55da88;
case 0x55da8b:c.instructions+=2;goto B55da8b;
case 0x55da8d:c.instructions+=1;goto B55da8d;
case 0x55da8f:goto L55da8f;
case 0x55da94:c.instructions+=1;goto B55da94;
case 0x55da99:goto L55da99;
case 0x55da9c:goto L55da9c;
case 0x55daa2:c.instructions+=2;goto B55daa2;
case 0x55daa4:c.instructions+=1;goto B55daa4;
case 0x55daa9:goto L55daa9;
case 0x55daaa:c.instructions+=3;goto B55daaa;
case 0x55daab:c.instructions+=2;goto B55daab;
case 0x55daac:c.instructions+=1;goto B55daac;
case 0x55daaf:goto L55daaf;
case 0x55dab2:c.instructions+=2;goto B55dab2;
case 0x55dab3:c.instructions+=1;goto B55dab3;
case 0x55dab8:goto L55dab8;
case 0x55dab9:c.instructions+=1;goto B55dab9;
case 0x55dabe:goto L55dabe;
case 0x55dac1:c.instructions+=2;goto B55dac1;
case 0x55dac3:c.instructions+=1;goto B55dac3;
case 0x55dac5:goto L55dac5;
case 0x55dacc:goto L55dacc;
case 0x55dad2:c.instructions+=3;goto B55dad2;
case 0x55dad4:c.instructions+=2;goto B55dad4;
case 0x55dade:c.instructions+=1;goto B55dade;
case 0x55dae0:goto L55dae0;
case 0x55dae5:c.instructions+=5;goto B55dae5;
case 0x55dae8:c.instructions+=4;goto B55dae8;
case 0x55daea:c.instructions+=3;goto B55daea;
case 0x55daeb:c.instructions+=2;goto B55daeb;
case 0x55daec:c.instructions+=1;goto B55daec;
case 0x55daf1:goto L55daf1;
case 0x55daf2:c.instructions+=3;goto B55daf2;
case 0x55daf3:c.instructions+=2;goto B55daf3;
case 0x55daf4:c.instructions+=1;goto B55daf4;
case 0x55daf7:goto L55daf7;
case 0x55dafd:c.instructions+=1;goto B55dafd;
case 0x55db02:goto L55db02;
case 0x55db03:c.instructions+=3;goto B55db03;
case 0x55db04:c.instructions+=2;goto B55db04;
case 0x55db05:c.instructions+=1;goto B55db05;
case 0x55db10:goto L55db10;
case 0x55db12:c.instructions+=7;goto B55db12;
case 0x55db17:c.instructions+=6;goto B55db17;
case 0x55db1d:c.instructions+=5;goto B55db1d;
case 0x55db1e:c.instructions+=4;goto B55db1e;
case 0x55db25:c.instructions+=3;goto B55db25;
case 0x55db26:c.instructions+=2;goto B55db26;
case 0x55db2b:c.instructions+=1;goto B55db2b;
case 0x55db30:goto L55db30;
case 0x55db33:c.instructions+=4;goto B55db33;
case 0x55db37:c.instructions+=3;goto B55db37;
case 0x55db39:c.instructions+=2;goto B55db39;
case 0x55db41:c.instructions+=1;goto B55db41;
case 0x55db43:goto L55db43;
case 0x55db47:c.instructions+=3;goto B55db47;
case 0x55db48:c.instructions+=2;goto B55db48;
case 0x55db4a:c.instructions+=1;goto B55db4a;
case 0x55db4f:goto L55db4f;
case 0x55db53:c.instructions+=3;goto B55db53;
case 0x55db5a:c.instructions+=2;goto B55db5a;
case 0x55db5d:c.instructions+=1;goto B55db5d;
case 0x55db5e:goto L55db5e;
case 0x55db62:c.instructions+=4;goto B55db62;
case 0x55db64:c.instructions+=3;goto B55db64;
case 0x55db6b:c.instructions+=2;goto B55db6b;
case 0x55db6e:c.instructions+=1;goto B55db6e;
case 0x55db70:goto L55db70;
case 0x55db72:c.instructions+=7;goto B55db72;
case 0x55db77:c.instructions+=6;goto B55db77;
case 0x55db7d:c.instructions+=5;goto B55db7d;
case 0x55db7e:c.instructions+=4;goto B55db7e;
case 0x55db85:c.instructions+=3;goto B55db85;
case 0x55db86:c.instructions+=2;goto B55db86;
case 0x55db88:c.instructions+=1;goto B55db88;
case 0x55db8d:goto L55db8d;
case 0x55db90:c.instructions+=4;goto B55db90;
case 0x55db94:c.instructions+=3;goto B55db94;
case 0x55db96:c.instructions+=2;goto B55db96;
case 0x55db9e:c.instructions+=1;goto B55db9e;
case 0x55dba0:goto L55dba0;
case 0x55dba4:c.instructions+=3;goto B55dba4;
case 0x55dba5:c.instructions+=2;goto B55dba5;
case 0x55dba7:c.instructions+=1;goto B55dba7;
case 0x55dbac:goto L55dbac;
case 0x55dbb0:c.instructions+=3;goto B55dbb0;
case 0x55dbb7:c.instructions+=2;goto B55dbb7;
case 0x55dbba:c.instructions+=1;goto B55dbba;
case 0x55dbbb:goto L55dbbb;
case 0x55dbbf:c.instructions+=4;goto B55dbbf;
case 0x55dbc1:c.instructions+=3;goto B55dbc1;
case 0x55dbc8:c.instructions+=2;goto B55dbc8;
case 0x55dbcb:c.instructions+=1;goto B55dbcb;
case 0x55dbd0:goto L55dbd0;
case 0x55dbd5:c.instructions+=3;goto B55dbd5;
case 0x55dbd7:c.instructions+=2;goto B55dbd7;
case 0x55dbd8:c.instructions+=1;goto B55dbd8;
case 0x55dbda:goto L55dbda;
case 0x55dbdf:c.instructions+=2;goto B55dbdf;
case 0x55dbe1:c.instructions+=1;goto B55dbe1;
case 0x55dbe3:goto L55dbe3;
case 0x55dbe7:c.instructions+=3;goto B55dbe7;
case 0x55dbe8:c.instructions+=2;goto B55dbe8;
case 0x55dbed:c.instructions+=1;goto B55dbed;
case 0x55dbf2:goto L55dbf2;
case 0x55dbf4:goto L55dbf4;
case 0x55dbf8:c.instructions+=3;goto B55dbf8;
case 0x55dbf9:c.instructions+=2;goto B55dbf9;
case 0x55dbfe:c.instructions+=1;goto B55dbfe;
case 0x55dc03:goto L55dc03;
case 0x55dc08:c.instructions+=2;goto B55dc08;
case 0x55dc0a:c.instructions+=1;goto B55dc0a;
case 0x55dc0c:goto L55dc0c;
case 0x55dc0d:c.instructions+=2;goto B55dc0d;
case 0x55dc12:c.instructions+=1;goto B55dc12;
case 0x55dc17:goto L55dc17;
case 0x55dc18:c.instructions+=1;goto B55dc18;
case 0x55dc20:goto L55dc20;
case 0x55dc24:c.instructions+=2;goto B55dc24;
case 0x55dc25:c.instructions+=1;goto B55dc25;
case 0x55dc2a:goto L55dc2a;
case 0x55dc2c:c.instructions+=1;goto B55dc2c;
case 0x55dc2e:goto L55dc2e;
case 0x55dc31:c.instructions+=2;goto B55dc31;
case 0x55dc33:c.instructions+=1;goto B55dc33;
case 0x55dc35:goto L55dc35;
case 0x55dc38:c.instructions+=2;goto B55dc38;
case 0x55dc3a:c.instructions+=1;goto B55dc3a;
case 0x55dc3c:goto L55dc3c;
case 0x55dc3d:c.instructions+=6;goto B55dc3d;
case 0x55dc41:c.instructions+=5;goto B55dc41;
case 0x55dc43:c.instructions+=4;goto B55dc43;
case 0x55dc45:c.instructions+=3;goto B55dc45;
case 0x55dc46:c.instructions+=2;goto B55dc46;
case 0x55dc48:c.instructions+=1;goto B55dc48;
case 0x55dc4d:goto L55dc4d;
case 0x55dc50:goto L55dc50;
case 0x55dc53:c.instructions+=5;goto B55dc53;
case 0x55dc59:c.instructions+=4;goto B55dc59;
case 0x55dc5a:c.instructions+=3;goto B55dc5a;
case 0x55dc5d:c.instructions+=2;goto B55dc5d;
case 0x55dc5e:c.instructions+=1;goto B55dc5e;
case 0x55dc60:goto L55dc60;
case 0x55dc62:c.instructions+=1;goto B55dc62;
case 0x55dc64:goto L55dc64;
case 0x55dc67:c.instructions+=1;goto B55dc67;
case 0x55dc69:goto L55dc69;
case 0x55dc6b:c.instructions+=1;goto B55dc6b;
case 0x55dc70:goto L55dc70;
case 0x55dc72:c.instructions+=1;goto B55dc72;
case 0x55dc74:goto L55dc74;
case 0x55dc77:c.instructions+=1;goto B55dc77;
case 0x55dc79:goto L55dc79;
case 0x55dc7b:goto L55dc7b;
case 0x55dc7d:c.instructions+=1;goto B55dc7d;
case 0x55dc7f:goto L55dc7f;
case 0x55dc82:c.instructions+=2;goto B55dc82;
case 0x55dc84:c.instructions+=1;goto B55dc84;
case 0x55dc86:goto L55dc86;
case 0x55dc89:c.instructions+=1;goto B55dc89;
case 0x55dc8b:goto L55dc8b;
case 0x55dc8f:c.instructions+=1;goto B55dc8f;
case 0x55dc90:goto L55dc90;
case 0x55dc93:c.instructions+=1;goto B55dc93;
case 0x55dc95:goto L55dc95;
case 0x55dc97:c.instructions+=2;goto B55dc97;
case 0x55dc99:c.instructions+=1;goto B55dc99;
case 0x55dc9b:goto L55dc9b;
case 0x55dc9c:c.instructions+=4;goto B55dc9c;
case 0x55dca3:c.instructions+=3;goto B55dca3;
case 0x55dca4:c.instructions+=2;goto B55dca4;
case 0x55dcab:c.instructions+=1;goto B55dcab;
case 0x55dcb0:goto L55dcb0;
case 0x55dcb4:c.instructions+=3;goto B55dcb4;
case 0x55dcb7:c.instructions+=2;goto B55dcb7;
case 0x55dcb9:c.instructions+=1;goto B55dcb9;
case 0x55dcbb:goto L55dcbb;
case 0x55dcbe:c.instructions+=2;goto B55dcbe;
case 0x55dcc0:c.instructions+=1;goto B55dcc0;
case 0x55dcc2:goto L55dcc2;
case 0x55dcc3:c.instructions+=4;goto B55dcc3;
case 0x55dcc4:c.instructions+=3;goto B55dcc4;
case 0x55dcc6:c.instructions+=2;goto B55dcc6;
case 0x55dcc7:c.instructions+=1;goto B55dcc7;
case 0x55dccc:goto L55dccc;
case 0x55dccd:c.instructions+=2;goto B55dccd;
case 0x55dccf:c.instructions+=1;goto B55dccf;
case 0x55dcd1:goto L55dcd1;
case 0x55dcd2:c.instructions+=1;goto B55dcd2;
case 0x55dcd3:goto L55dcd3;
case 0x55dcd4:c.instructions+=3;goto B55dcd4;
case 0x55dcd5:c.instructions+=2;goto B55dcd5;
case 0x55dcdb:c.instructions+=1;goto B55dcdb;
case 0x55dce0:goto L55dce0;
case 0x55dce3:c.instructions+=7;goto B55dce3;
case 0x55dce5:c.instructions+=6;goto B55dce5;
case 0x55dce6:c.instructions+=5;goto B55dce6;
case 0x55dce7:c.instructions+=4;goto B55dce7;
case 0x55dcea:c.instructions+=3;goto B55dcea;
case 0x55dceb:c.instructions+=2;goto B55dceb;
case 0x55dcec:c.instructions+=1;goto B55dcec;
case 0x55dcee:goto L55dcee;
case 0x55dcf1:c.instructions+=1;goto B55dcf1;
case 0x55dcf3:goto L55dcf3;
case 0x55dcf5:goto L55dcf5;
case 0x55dcf9:c.instructions+=2;goto B55dcf9;
case 0x55dcfd:c.instructions+=1;goto B55dcfd;
case 0x55dd00:goto L55dd00;
case 0x55dd02:c.instructions+=1;goto B55dd02;
case 0x55dd04:goto L55dd04;
case 0x55dd07:c.instructions+=1;goto B55dd07;
case 0x55dd09:goto L55dd09;
case 0x55dd0b:goto L55dd0b;
case 0x55dd0d:c.instructions+=1;goto B55dd0d;
case 0x55dd0f:goto L55dd0f;
case 0x55dd12:c.instructions+=2;goto B55dd12;
case 0x55dd14:c.instructions+=1;goto B55dd14;
case 0x55dd16:goto L55dd16;
case 0x55dd18:c.instructions+=1;goto B55dd18;
case 0x55dd1a:goto L55dd1a;
case 0x55dd1d:c.instructions+=2;goto B55dd1d;
case 0x55dd1f:c.instructions+=1;goto B55dd1f;
case 0x55dd21:goto L55dd21;
case 0x55dd25:c.instructions+=6;goto B55dd25;
case 0x55dd29:c.instructions+=5;goto B55dd29;
case 0x55dd2a:c.instructions+=4;goto B55dd2a;
case 0x55dd2b:c.instructions+=3;goto B55dd2b;
case 0x55dd2c:c.instructions+=2;goto B55dd2c;
case 0x55dd2d:c.instructions+=1;goto B55dd2d;
case 0x55dd32:goto L55dd32;
case 0x55dd35:c.instructions+=2;goto B55dd35;
case 0x55dd37:c.instructions+=1;goto B55dd37;
case 0x55dd39:goto L55dd39;
case 0x55dd3c:c.instructions+=1;goto B55dd3c;
case 0x55dd3e:goto L55dd3e;
case 0x55dd40:c.instructions+=1;goto B55dd40;
case 0x55dd42:goto L55dd42;
case 0x55dd43:c.instructions+=4;goto B55dd43;
case 0x55dd44:c.instructions+=3;goto B55dd44;
case 0x55dd45:c.instructions+=2;goto B55dd45;
case 0x55dd46:c.instructions+=1;goto B55dd46;
case 0x55dd50:goto L55dd50;
case 0x55dd54:c.instructions+=2;goto B55dd54;
case 0x55dd59:c.instructions+=1;goto B55dd59;
case 0x55dd5b:goto L55dd5b;
case 0x55dd60:c.instructions+=1;goto B55dd60;
case 0x55dd62:goto L55dd62;
case 0x55dd66:c.instructions+=2;goto B55dd66;
case 0x55dd6b:c.instructions+=1;goto B55dd6b;
case 0x55dd70:goto L55dd70;
case 0x55dd75:c.instructions+=1;goto B55dd75;
case 0x55dd7a:goto L55dd7a;
case 0x55dd7d:c.instructions+=3;goto B55dd7d;
case 0x55dd81:c.instructions+=2;goto B55dd81;
case 0x55dd84:c.instructions+=1;goto B55dd84;
case 0x55dd87:goto L55dd87;
case 0x55dd8c:c.instructions+=1;goto B55dd8c;
case 0x55dd91:goto L55dd91;
case 0x55dd94:c.instructions+=3;goto B55dd94;
case 0x55dd98:c.instructions+=2;goto B55dd98;
case 0x55dd9b:c.instructions+=1;goto B55dd9b;
case 0x55dda0:goto L55dda0;
case 0x55dda4:c.instructions+=3;goto B55dda4;
case 0x55dda5:c.instructions+=2;goto B55dda5;
case 0x55ddaa:c.instructions+=1;goto B55ddaa;
case 0x55ddaf:goto L55ddaf;
case 0x55ddb1:c.instructions+=1;goto B55ddb1;
case 0x55ddb3:goto L55ddb3;
case 0x55ddb6:c.instructions+=2;goto B55ddb6;
case 0x55ddb8:c.instructions+=1;goto B55ddb8;
case 0x55ddba:goto L55ddba;
case 0x55ddbd:c.instructions+=2;goto B55ddbd;
case 0x55ddbf:c.instructions+=1;goto B55ddbf;
case 0x55ddc1:goto L55ddc1;
case 0x55ddc2:c.instructions+=6;goto B55ddc2;
case 0x55ddc6:c.instructions+=5;goto B55ddc6;
case 0x55ddc8:c.instructions+=4;goto B55ddc8;
case 0x55ddca:c.instructions+=3;goto B55ddca;
case 0x55ddcb:c.instructions+=2;goto B55ddcb;
case 0x55ddcd:c.instructions+=1;goto B55ddcd;
case 0x55ddd2:goto L55ddd2;
case 0x55dde0:goto L55dde0;
case 0x55dde4:c.instructions+=5;goto B55dde4;
case 0x55dde8:c.instructions+=4;goto B55dde8;
case 0x55dde9:c.instructions+=3;goto B55dde9;
case 0x55ddea:c.instructions+=2;goto B55ddea;
case 0x55ddef:c.instructions+=1;goto B55ddef;
case 0x55ddf4:goto L55ddf4;
case 0x55de00:goto L55de00;
case 0x55de01:c.instructions+=4;goto B55de01;
case 0x55de03:c.instructions+=3;goto B55de03;
case 0x55de06:c.instructions+=2;goto B55de06;
case 0x55de08:c.instructions+=1;goto B55de08;
case 0x55de0e:goto L55de0e;
case 0x55de11:c.instructions+=5;goto B55de11;
case 0x55de12:c.instructions+=4;goto B55de12;
case 0x55de15:c.instructions+=3;goto B55de15;
case 0x55de17:c.instructions+=2;goto B55de17;
case 0x55de18:c.instructions+=1;goto B55de18;
case 0x55de1e:goto L55de1e;
case 0x55de21:c.instructions+=2;goto B55de21;
case 0x55de23:c.instructions+=1;goto B55de23;
case 0x55de29:goto L55de29;
case 0x55de2b:c.instructions+=2;goto B55de2b;
case 0x55de2d:c.instructions+=1;goto B55de2d;
case 0x55de2f:goto L55de2f;
case 0x55de32:c.instructions+=1;goto B55de32;
case 0x55de34:goto L55de34;
case 0x55de36:goto L55de36;
case 0x55de38:c.instructions+=1;goto B55de38;
case 0x55de3a:goto L55de3a;
case 0x55de3d:c.instructions+=1;goto B55de3d;
case 0x55de3f:goto L55de3f;
case 0x55de41:goto L55de41;
case 0x55de43:c.instructions+=1;goto B55de43;
case 0x55de49:goto L55de49;
case 0x55de4c:c.instructions+=2;goto B55de4c;
case 0x55de4e:c.instructions+=1;goto B55de4e;
case 0x55de50:goto L55de50;
case 0x55de53:c.instructions+=2;goto B55de53;
case 0x55de54:c.instructions+=1;goto B55de54;
case 0x55de59:goto L55de59;
case 0x55de5c:c.instructions+=2;goto B55de5c;
case 0x55de5e:c.instructions+=1;goto B55de5e;
case 0x55de60:goto L55de60;
case 0x55de63:c.instructions+=2;goto B55de63;
case 0x55de65:c.instructions+=1;goto B55de65;
case 0x55de67:goto L55de67;
case 0x55de6a:c.instructions+=1;goto B55de6a;
case 0x55de6c:goto L55de6c;
case 0x55de6f:c.instructions+=2;goto B55de6f;
case 0x55de70:c.instructions+=1;goto B55de70;
case 0x55de75:goto L55de75;
case 0x55de78:c.instructions+=2;goto B55de78;
case 0x55de7a:c.instructions+=1;goto B55de7a;
case 0x55de7c:goto L55de7c;
case 0x55de7f:c.instructions+=3;goto B55de7f;
case 0x55de80:c.instructions+=2;goto B55de80;
case 0x55de83:c.instructions+=1;goto B55de83;
case 0x55de88:goto L55de88;
case 0x55de8b:goto L55de8b;
case 0x55de8e:c.instructions+=2;goto B55de8e;
case 0x55de90:c.instructions+=1;goto B55de90;
case 0x55de92:goto L55de92;
case 0x55de98:c.instructions+=2;goto B55de98;
case 0x55de9a:c.instructions+=1;goto B55de9a;
case 0x55de9f:goto L55de9f;
case 0x55dea2:c.instructions+=10;goto B55dea2;
case 0x55dea7:c.instructions+=9;goto B55dea7;
case 0x55dea9:c.instructions+=8;goto B55dea9;
case 0x55deae:c.instructions+=7;goto B55deae;
case 0x55deb3:c.instructions+=6;goto B55deb3;
case 0x55deb8:c.instructions+=5;goto B55deb8;
case 0x55debd:c.instructions+=4;goto B55debd;
case 0x55dec2:c.instructions+=3;goto B55dec2;
case 0x55dec7:c.instructions+=2;goto B55dec7;
case 0x55dec8:c.instructions+=1;goto B55dec8;
case 0x55decd:goto L55decd;
case 0x55ded3:c.instructions+=6;goto B55ded3;
case 0x55ded6:c.instructions+=5;goto B55ded6;
case 0x55ded7:c.instructions+=4;goto B55ded7;
case 0x55ded8:c.instructions+=3;goto B55ded8;
case 0x55dedb:c.instructions+=2;goto B55dedb;
case 0x55dedc:c.instructions+=1;goto B55dedc;
case 0x55dedd:goto L55dedd;
case 0x55dedf:c.instructions+=1;goto B55dedf;
case 0x55dee1:goto L55dee1;
case 0x55dee4:c.instructions+=10;goto B55dee4;
case 0x55dee9:c.instructions+=9;goto B55dee9;
case 0x55deeb:c.instructions+=8;goto B55deeb;
case 0x55def0:c.instructions+=7;goto B55def0;
case 0x55def5:c.instructions+=6;goto B55def5;
case 0x55defa:c.instructions+=5;goto B55defa;
case 0x55deff:c.instructions+=4;goto B55deff;
case 0x55df04:c.instructions+=3;goto B55df04;
case 0x55df09:c.instructions+=2;goto B55df09;
case 0x55df0a:c.instructions+=1;goto B55df0a;
case 0x55df0f:goto L55df0f;
case 0x55df15:c.instructions+=6;goto B55df15;
case 0x55df18:c.instructions+=5;goto B55df18;
case 0x55df19:c.instructions+=4;goto B55df19;
case 0x55df1a:c.instructions+=3;goto B55df1a;
case 0x55df1d:c.instructions+=2;goto B55df1d;
case 0x55df1e:c.instructions+=1;goto B55df1e;
case 0x55df1f:goto L55df1f;
case 0x55df20:c.instructions+=2;goto B55df20;
case 0x55df22:c.instructions+=1;goto B55df22;
case 0x55df27:goto L55df27;
case 0x55df2c:c.instructions+=1;goto B55df2c;
case 0x55df2e:goto L55df2e;
case 0x55df31:c.instructions+=3;goto B55df31;
case 0x55df32:c.instructions+=2;goto B55df32;
case 0x55df33:c.instructions+=1;goto B55df33;
case 0x55df35:goto L55df35;
case 0x55df38:c.instructions+=2;goto B55df38;
case 0x55df39:c.instructions+=1;goto B55df39;
case 0x55df3e:goto L55df3e;
case 0x55df41:c.instructions+=2;goto B55df41;
case 0x55df43:c.instructions+=1;goto B55df43;
case 0x55df45:goto L55df45;
case 0x55df48:c.instructions+=2;goto B55df48;
case 0x55df49:c.instructions+=1;goto B55df49;
case 0x55df4e:goto L55df4e;
case 0x55df51:c.instructions+=4;goto B55df51;
case 0x55df54:c.instructions+=3;goto B55df54;
case 0x55df55:c.instructions+=2;goto B55df55;
case 0x55df56:c.instructions+=1;goto B55df56;
case 0x55df5b:goto L55df5b;
case 0x55df5e:c.instructions+=4;goto B55df5e;
case 0x55df5f:c.instructions+=3;goto B55df5f;
case 0x55df61:c.instructions+=2;goto B55df61;
case 0x55df66:c.instructions+=1;goto B55df66;
case 0x55df6b:goto L55df6b;
case 0x55df71:c.instructions+=6;goto B55df71;
case 0x55df74:c.instructions+=5;goto B55df74;
case 0x55df75:c.instructions+=4;goto B55df75;
case 0x55df76:c.instructions+=3;goto B55df76;
case 0x55df79:c.instructions+=2;goto B55df79;
case 0x55df7a:c.instructions+=1;goto B55df7a;
case 0x55df7b:goto L55df7b;
case 0x55df7e:c.instructions+=2;goto B55df7e;
case 0x55df7f:c.instructions+=1;goto B55df7f;
case 0x55df84:goto L55df84;
case 0x55df89:goto L55df89;
case 0x55df8f:c.instructions+=2;goto B55df8f;
case 0x55df92:c.instructions+=1;goto B55df92;
case 0x55df95:goto L55df95;
case 0x55df96:c.instructions+=1;goto B55df96;
case 0x55df97:goto L55df97;
case 0x55df98:c.instructions+=1;goto B55df98;
case 0x55dfa0:goto L55dfa0;
case 0x55dfa4:c.instructions+=4;goto B55dfa4;
case 0x55dfa9:c.instructions+=3;goto B55dfa9;
case 0x55dfaa:c.instructions+=2;goto B55dfaa;
case 0x55dfac:c.instructions+=1;goto B55dfac;
case 0x55dfb2:goto L55dfb2;
case 0x55dfb8:goto L55dfb8;
case 0x55dfbd:c.instructions+=1;goto B55dfbd;
case 0x55dfbf:goto L55dfbf;
case 0x55dfc4:c.instructions+=1;goto B55dfc4;
case 0x55dfca:goto L55dfca;
case 0x55dfcf:c.instructions+=2;goto B55dfcf;
case 0x55dfd2:c.instructions+=1;goto B55dfd2;
case 0x55dfd4:goto L55dfd4;
case 0x55dfd7:c.instructions+=1;goto B55dfd7;
case 0x55dfdd:goto L55dfdd;
case 0x55dfe2:c.instructions+=1;goto B55dfe2;
case 0x55dfe7:goto L55dfe7;
case 0x55dfe9:c.instructions+=1;goto B55dfe9;
case 0x55dfeb:goto L55dfeb;
case 0x55dff0:c.instructions+=1;goto B55dff0;
case 0x55dff5:goto L55dff5;
case 0x55dff7:c.instructions+=1;goto B55dff7;
case 0x55dffd:goto L55dffd;
default:missing_instruction(c.pc);}
B55d002:L55d002:{c.instructions+=3;NFSU2_TR(0x55d002);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B55d003:{NFSU2_TR(0x55d003);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x43ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d006:{NFSU2_TR(0x55d006);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x55cfd0u,55c);}
}
B55d008:L55d008:{c.instructions+=6;NFSU2_TR(0x55d008);
__builtin_memmove((R+0),gp(0x839bb8),4);
}
B55d00d:{NFSU2_TR(0x55d00d);
__builtin_memmove((R+4),gp(0x8389a8),4);
}
B55d013:{NFSU2_TR(0x55d013);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d014:{NFSU2_TR(0x55d014);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d015:{NFSU2_TR(0x55d015);
w4(R+4,u32(0x8389d0ull));
}
B55d01a:{NFSU2_TR(0x55d01a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d01full));
TAIL_STATIC(0x631d20u,631);
}
B55d01f:L55d01f:{c.instructions+=4;NFSU2_TR(0x55d01f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d021:{NFSU2_TR(0x55d021);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d023:{NFSU2_TR(0x55d023);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d028:{NFSU2_TR(0x55d028);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d02dull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55d02d:L55d02d:{c.instructions+=5;NFSU2_TR(0x55d02d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55d030:{NFSU2_TR(0x55d030);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d035:{NFSU2_TR(0x55d035);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d03a:{NFSU2_TR(0x55d03a);
w4(R+4,u32(0x8637d0ull));
}
B55d03f:{NFSU2_TR(0x55d03f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d044ull));
TAIL_STATIC(0x55b1a0u,55b);
}
B55d044:L55d044:{c.instructions+=4;NFSU2_TR(0x55d044);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55d04a:{NFSU2_TR(0x55d04a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x160ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55d050:{NFSU2_TR(0x55d050);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d052:{NFSU2_TR(0x55d052);
if(r1(R+518)){{goto L55d0a7;}}
}
B55d054:L55d054:{c.instructions+=6;NFSU2_TR(0x55d054);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d057:{NFSU2_TR(0x55d057);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d05a:{NFSU2_TR(0x55d05a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d05b:{NFSU2_TR(0x55d05b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d05c:{NFSU2_TR(0x55d05c);
w4(R+4,u32(0x8389d0ull));
}
B55d061:{NFSU2_TR(0x55d061);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d066ull));
TAIL_STATIC(0x631d20u,631);
}
B55d066:L55d066:{c.instructions+=4;NFSU2_TR(0x55d066);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d068:{NFSU2_TR(0x55d068);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d06a:{NFSU2_TR(0x55d06a);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d06f:{NFSU2_TR(0x55d06f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d074ull));
TAIL_STATIC(0x4d8ec0u,4d8);
}
B55d074:L55d074:{c.instructions+=5;NFSU2_TR(0x55d074);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55d077:{NFSU2_TR(0x55d077);
u8 U[4];
w4(U+0,u32(0x8389d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d07c:{NFSU2_TR(0x55d07c);
u8 U[4];
w4(U+0,u32(0x8392c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d081:{NFSU2_TR(0x55d081);
w4(R+4,u32(0x8637d0ull));
}
B55d086:{NFSU2_TR(0x55d086);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d08bull));
TAIL_STATIC(0x55b1a0u,55b);
}
B55d08b:L55d08b:{c.instructions+=3;NFSU2_TR(0x55d08b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B55d08d:{NFSU2_TR(0x55d08d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d08f:{NFSU2_TR(0x55d08f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55d054u);}goto L55d054;}}
}
B55d091:L55d091:{c.instructions+=1;NFSU2_TR(0x55d091);
{goto L55d0a7;}
}
B55d093:L55d093:{c.instructions+=5;NFSU2_TR(0x55d093);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d096:{NFSU2_TR(0x55d096);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d099:{NFSU2_TR(0x55d099);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d09a:{NFSU2_TR(0x55d09a);
__builtin_memmove((R+4),(R+12),4);
}
B55d09c:{NFSU2_TR(0x55d09c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d0a1ull));
TAIL_STATIC(0x50f5b0u,50f);
}
B55d0a1:L55d0a1:{c.instructions+=1;NFSU2_TR(0x55d0a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x174ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55d0a7:L55d0a7:{c.instructions+=6;NFSU2_TR(0x55d0a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d0aa:{NFSU2_TR(0x55d0aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d0ad:{NFSU2_TR(0x55d0ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d0ae:{NFSU2_TR(0x55d0ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d0af:{NFSU2_TR(0x55d0af);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B55d0b5:{NFSU2_TR(0x55d0b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d0baull));
TAIL_STATIC(0x54e6e0u,54e);
}
B55d0ba:L55d0ba:{c.instructions+=5;NFSU2_TR(0x55d0ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55d0bb:{NFSU2_TR(0x55d0bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55d0bc:{NFSU2_TR(0x55d0bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55d0bd:{NFSU2_TR(0x55d0bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55d0be:{NFSU2_TR(0x55d0be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d0d0:L55d0d0:{c.instructions+=8;NFSU2_TR(0x55d0d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d0d1:{NFSU2_TR(0x55d0d1);
__builtin_memmove((R+20),(R+16),4);
}
B55d0d3:{NFSU2_TR(0x55d0d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d0d4:{NFSU2_TR(0x55d0d4);
__builtin_memmove((R+24),(R+4),4);
}
B55d0d6:{NFSU2_TR(0x55d0d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d0d9:{NFSU2_TR(0x55d0d9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5073ef13ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d0df:{NFSU2_TR(0x55d0df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d0e5:{NFSU2_TR(0x55d0e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55d247;}}
}
B55d0eb:L55d0eb:{c.instructions+=2;NFSU2_TR(0x55d0eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2daab07ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d0f0:{NFSU2_TR(0x55d0f0);
if(r1(R+518)){{goto L55d238;}}
}
B55d0f6:L55d0f6:{c.instructions+=2;NFSU2_TR(0x55d0f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3437a52ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d0fb:{NFSU2_TR(0x55d0fb);
if(r1(R+518)){{goto L55d270;}}
}
B55d101:L55d101:{c.instructions+=2;NFSU2_TR(0x55d101);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3797533ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d106:{NFSU2_TR(0x55d106);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55d112;}}
}
B55d108:L55d108:{c.instructions+=1;NFSU2_TR(0x55d108);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
w4(U+4,u32(0x3437a52ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55d112:L55d112:{c.instructions+=2;NFSU2_TR(0x55d112);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
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
B55d118:{NFSU2_TR(0x55d118);
if(r1(R+518)){{goto L55d2c1;}}
}
B55d11e:L55d11e:{c.instructions+=5;NFSU2_TR(0x55d11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d124:{NFSU2_TR(0x55d124);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d126:{NFSU2_TR(0x55d126);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d127:{NFSU2_TR(0x55d127);
w4(R+28,u32(0x1ull));
}
B55d12c:{NFSU2_TR(0x55d12c);
if(r1(R+518)){{goto L55d144;}}
}
B55d12e:L55d12e:{c.instructions+=3;NFSU2_TR(0x55d12e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d131:{NFSU2_TR(0x55d131);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d133:{NFSU2_TR(0x55d133);
if(r1(R+518)){{goto L55d144;}}
}
B55d135:L55d135:{c.instructions+=4;NFSU2_TR(0x55d135);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d136:{NFSU2_TR(0x55d136);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d13b:{NFSU2_TR(0x55d13b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d13c:{NFSU2_TR(0x55d13c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d141ull));
TAIL_STATIC(0x51cf70u,51c);
}
B55d141:L55d141:{c.instructions+=1;NFSU2_TR(0x55d141);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55d144:L55d144:{c.instructions+=2;NFSU2_TR(0x55d144);
__builtin_memmove((R+4),(R+24),4);
}
B55d146:{NFSU2_TR(0x55d146);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d14bull));
TAIL_STATIC(0x548630u,548);
}
B55d14b:L55d14b:{c.instructions+=5;NFSU2_TR(0x55d14b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d151:{NFSU2_TR(0x55d151);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((R+0),(U+0),4);
}
B55d157:{NFSU2_TR(0x55d157);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d159:{NFSU2_TR(0x55d159);
u8 U[4];
w4(U+0,u32(0x9ba6d658ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d15e:{NFSU2_TR(0x55d15e);
if(r1(R+518)){{goto L55d27f;}}
}
B55d164:L55d164:{c.instructions+=3;NFSU2_TR(0x55d164);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d167:{NFSU2_TR(0x55d167);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d168:{NFSU2_TR(0x55d168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d16dull));
TAIL_STATIC(0x495520u,495);
}
B55d16d:L55d16d:{c.instructions+=6;NFSU2_TR(0x55d16d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d170:{NFSU2_TR(0x55d170);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d171:{NFSU2_TR(0x55d171);
u8 U[4];
w4(U+0,u32(0x790534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d176:{NFSU2_TR(0x55d176);
u8 U[4];
w4(U+0,u32(0x9ba6d658ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d17b:{NFSU2_TR(0x55d17b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d17c:{NFSU2_TR(0x55d17c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d181ull));
TAIL_STATIC(0x537c00u,537);
}
B55d181:L55d181:{c.instructions+=6;NFSU2_TR(0x55d181);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d184:{NFSU2_TR(0x55d184);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d185:{NFSU2_TR(0x55d185);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d18a:{NFSU2_TR(0x55d18a);
u8 U[4];
w4(U+0,u32(0x23a43844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d18f:{NFSU2_TR(0x55d18f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d190:{NFSU2_TR(0x55d190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d195ull));
TAIL_STATIC(0x537c00u,537);
}
B55d195:L55d195:{c.instructions+=4;NFSU2_TR(0x55d195);
__builtin_memmove((R+0),gp(0x850078),4);
}
B55d19a:{NFSU2_TR(0x55d19a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B55d19d:{NFSU2_TR(0x55d19d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d19f:{NFSU2_TR(0x55d19f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55d1b2;}}
}
B55d1a1:L55d1a1:{c.instructions+=4;NFSU2_TR(0x55d1a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d1a4:{NFSU2_TR(0x55d1a4);
u8 U[4];
w4(U+0,u32(0x13c45eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d1a9:{NFSU2_TR(0x55d1a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d1aa:{NFSU2_TR(0x55d1aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d1afull));
TAIL_STATIC(0x495520u,495);
}
B55d1af:L55d1af:{c.instructions+=1;NFSU2_TR(0x55d1af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55d1b2:L55d1b2:{c.instructions+=3;NFSU2_TR(0x55d1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d1b8:{NFSU2_TR(0x55d1b8);
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
B55d1ba:{NFSU2_TR(0x55d1ba);
if(r1(R+518)){{goto L55d2b9;}}
}
B55d1c0:L55d1c0:{c.instructions+=3;NFSU2_TR(0x55d1c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d1c3:{NFSU2_TR(0x55d1c3);
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
B55d1c5:{NFSU2_TR(0x55d1c5);
if(r1(R+518)){{goto L55d2b9;}}
}
B55d1cb:L55d1cb:{c.instructions+=6;NFSU2_TR(0x55d1cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d1ce:{NFSU2_TR(0x55d1ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d1d1:{NFSU2_TR(0x55d1d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d1d2:{NFSU2_TR(0x55d1d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d1d3:{NFSU2_TR(0x55d1d3);
w4(R+4,u32(0x838980ull));
}
B55d1d8:{NFSU2_TR(0x55d1d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d1ddull));
TAIL_STATIC(0x55c1f0u,55c);
}
B55d1dd:L55d1dd:{c.instructions+=4;NFSU2_TR(0x55d1dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d1e3:{NFSU2_TR(0x55d1e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d1e6:{NFSU2_TR(0x55d1e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d1e8:{NFSU2_TR(0x55d1e8);
if(r1(R+518)){{goto L55d1f9;}}
}
B55d1ea:L55d1ea:{c.instructions+=4;NFSU2_TR(0x55d1ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d1eb:{NFSU2_TR(0x55d1eb);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d1f0:{NFSU2_TR(0x55d1f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d1f1:{NFSU2_TR(0x55d1f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d1f6ull));
TAIL_STATIC(0x51cf70u,51c);
}
B55d1f6:L55d1f6:{c.instructions+=1;NFSU2_TR(0x55d1f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55d1f9:L55d1f9:{c.instructions+=9;NFSU2_TR(0x55d1f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d1ff:{NFSU2_TR(0x55d1ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d202:{NFSU2_TR(0x55d202);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d205:{NFSU2_TR(0x55d205);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d208:{NFSU2_TR(0x55d208);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55d20b:{NFSU2_TR(0x55d20b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d20c:{NFSU2_TR(0x55d20c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d20d:{NFSU2_TR(0x55d20d);
w4(R+4,u32(0x85ad40ull));
}
B55d212:{NFSU2_TR(0x55d212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d217ull));
TAIL_STATIC(0x514280u,514);
}
B55d217:L55d217:{c.instructions+=5;NFSU2_TR(0x55d217);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d218:{NFSU2_TR(0x55d218);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d21d:{NFSU2_TR(0x55d21d);
u8 U[4];
w4(U+0,u32(0x79d6acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d222:{NFSU2_TR(0x55d222);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d223:{NFSU2_TR(0x55d223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d228ull));
TAIL_STATIC(0x542600u,542);
}
B55d228:L55d228:{c.instructions+=4;NFSU2_TR(0x55d228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55d22a:{NFSU2_TR(0x55d22a);
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
B55d22d:{NFSU2_TR(0x55d22d);
__builtin_memmove((R+4),(R+24),4);
}
B55d22f:{NFSU2_TR(0x55d22f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d232ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55d232:L55d232:{c.instructions+=4;NFSU2_TR(0x55d232);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55d233:{NFSU2_TR(0x55d233);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55d234:{NFSU2_TR(0x55d234);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55d235:{NFSU2_TR(0x55d235);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d238:L55d238:{c.instructions+=2;NFSU2_TR(0x55d238);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
w4(U+4,u32(0x3797533ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55d242:{NFSU2_TR(0x55d242);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55d112u);}goto L55d112;}
}
B55d247:L55d247:{c.instructions+=2;NFSU2_TR(0x55d247);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd9feec59ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d24d:{NFSU2_TR(0x55d24d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55d112u);}goto L55d112;}}
}
B55d253:L55d253:{c.instructions+=2;NFSU2_TR(0x55d253);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2daab07ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d258:{NFSU2_TR(0x55d258);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55d108u);}goto L55d108;}}
}
B55d25e:L55d25e:{c.instructions+=2;NFSU2_TR(0x55d25e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3437a52ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d263:{NFSU2_TR(0x55d263);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55d238u);}goto L55d238;}}
}
B55d265:L55d265:{c.instructions+=2;NFSU2_TR(0x55d265);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3797533ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d26a:{NFSU2_TR(0x55d26a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55d112u);}goto L55d112;}}
}
B55d270:L55d270:{c.instructions+=2;NFSU2_TR(0x55d270);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
w4(U+4,u32(0x2daab07ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55d27a:{NFSU2_TR(0x55d27a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55d112u);}goto L55d112;}
}
B55d27f:L55d27f:{c.instructions+=3;NFSU2_TR(0x55d27f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d282:{NFSU2_TR(0x55d282);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d283:{NFSU2_TR(0x55d283);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d288ull));
TAIL_STATIC(0x4954e0u,495);
}
B55d288:L55d288:{c.instructions+=6;NFSU2_TR(0x55d288);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d28b:{NFSU2_TR(0x55d28b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d28c:{NFSU2_TR(0x55d28c);
u8 U[4];
w4(U+0,u32(0x78f614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d291:{NFSU2_TR(0x55d291);
u8 U[4];
w4(U+0,u32(0x23a43844ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d296:{NFSU2_TR(0x55d296);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d297:{NFSU2_TR(0x55d297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d29cull));
TAIL_STATIC(0x537c00u,537);
}
B55d29c:L55d29c:{c.instructions+=4;NFSU2_TR(0x55d29c);
__builtin_memmove((R+0),gp(0x850078),4);
}
B55d2a1:{NFSU2_TR(0x55d2a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B55d2a4:{NFSU2_TR(0x55d2a4);
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
B55d2a6:{NFSU2_TR(0x55d2a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55d2b9;}}
}
B55d2a8:L55d2a8:{c.instructions+=4;NFSU2_TR(0x55d2a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d2ab:{NFSU2_TR(0x55d2ab);
u8 U[4];
w4(U+0,u32(0x13c45eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d2b0:{NFSU2_TR(0x55d2b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d2b1:{NFSU2_TR(0x55d2b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d2b6ull));
TAIL_STATIC(0x4954e0u,495);
}
B55d2b6:L55d2b6:{c.instructions+=1;NFSU2_TR(0x55d2b6);
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
B55d2b9:L55d2b9:{c.instructions+=3;NFSU2_TR(0x55d2b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B55d2bb:{NFSU2_TR(0x55d2bb);
__builtin_memmove((R+4),(R+24),4);
}
B55d2bd:{NFSU2_TR(0x55d2bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d2c0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B55d2c0:L55d2c0:{c.instructions+=1;NFSU2_TR(0x55d2c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55d2c1:L55d2c1:{c.instructions+=3;NFSU2_TR(0x55d2c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55d2c2:{NFSU2_TR(0x55d2c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55d2c3:{NFSU2_TR(0x55d2c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d2d0:L55d2d0:{c.instructions+=8;NFSU2_TR(0x55d2d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d2d1:{NFSU2_TR(0x55d2d1);
__builtin_memmove((R+20),(R+16),4);
}
B55d2d3:{NFSU2_TR(0x55d2d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d2d4:{NFSU2_TR(0x55d2d4);
__builtin_memmove((R+24),(R+4),4);
}
B55d2d6:{NFSU2_TR(0x55d2d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d2dc:{NFSU2_TR(0x55d2dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((R+0),(U+0),4);
}
B55d2e2:{NFSU2_TR(0x55d2e2);
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
B55d2e4:{NFSU2_TR(0x55d2e4);
if(r1(R+518)){{goto L55d3fe;}}
}
B55d2ea:L55d2ea:{c.instructions+=5;NFSU2_TR(0x55d2ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d2ed:{NFSU2_TR(0x55d2ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d2f2:{NFSU2_TR(0x55d2f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d2f3:{NFSU2_TR(0x55d2f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55d2f9:{NFSU2_TR(0x55d2f9);
if(r1(R+518)){{goto L55d31a;}}
}
B55d2fb:L55d2fb:{c.instructions+=2;NFSU2_TR(0x55d2fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d300:{NFSU2_TR(0x55d300);
if(r1(R+518)){{goto L55d31a;}}
}
B55d302:L55d302:{c.instructions+=2;NFSU2_TR(0x55d302);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d307:{NFSU2_TR(0x55d307);
if(r1(R+518)){{goto L55d310;}}
}
B55d309:L55d309:{c.instructions+=2;NFSU2_TR(0x55d309);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d30e:{NFSU2_TR(0x55d30e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55d322;}}
}
B55d310:L55d310:{c.instructions+=3;NFSU2_TR(0x55d310);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d311:{NFSU2_TR(0x55d311);
__builtin_memmove((R+4),(R+24),4);
}
B55d313:{NFSU2_TR(0x55d313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d318ull));
TAIL_STATIC(0x522340u,522);
}
B55d318:L55d318:{c.instructions+=1;NFSU2_TR(0x55d318);
{goto L55d322;}
}
B55d31a:L55d31a:{c.instructions+=3;NFSU2_TR(0x55d31a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d31b:{NFSU2_TR(0x55d31b);
__builtin_memmove((R+4),(R+24),4);
}
B55d31d:{NFSU2_TR(0x55d31d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d322ull));
TAIL_STATIC(0x522240u,522);
}
B55d322:L55d322:{c.instructions+=3;NFSU2_TR(0x55d322);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d328:{NFSU2_TR(0x55d328);
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
B55d32a:{NFSU2_TR(0x55d32a);
if(r1(R+518)){{goto L55d3fd;}}
}
B55d330:L55d330:{c.instructions+=2;NFSU2_TR(0x55d330);
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
B55d332:{NFSU2_TR(0x55d332);
if(r1(R+518)){{goto L55d3fd;}}
}
B55d338:L55d338:{c.instructions+=3;NFSU2_TR(0x55d338);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d33b:{NFSU2_TR(0x55d33b);
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
B55d33d:{NFSU2_TR(0x55d33d);
if(r1(R+518)){{goto L55d3fd;}}
}
B55d343:L55d343:{c.instructions+=3;NFSU2_TR(0x55d343);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d346:{NFSU2_TR(0x55d346);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d348:{NFSU2_TR(0x55d348);
if(r1(R+518)){{goto L55d35a;}}
}
B55d34a:L55d34a:{c.instructions+=4;NFSU2_TR(0x55d34a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d34c:{NFSU2_TR(0x55d34c);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d351:{NFSU2_TR(0x55d351);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d352:{NFSU2_TR(0x55d352);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d357ull));
TAIL_STATIC(0x51cf70u,51c);
}
B55d357:L55d357:{c.instructions+=1;NFSU2_TR(0x55d357);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55d35a:L55d35a:{c.instructions+=4;NFSU2_TR(0x55d35a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d360:{NFSU2_TR(0x55d360);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d363:{NFSU2_TR(0x55d363);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d365:{NFSU2_TR(0x55d365);
if(r1(R+518)){{goto L55d377;}}
}
B55d367:L55d367:{c.instructions+=4;NFSU2_TR(0x55d367);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d369:{NFSU2_TR(0x55d369);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d36e:{NFSU2_TR(0x55d36e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d36f:{NFSU2_TR(0x55d36f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d374ull));
TAIL_STATIC(0x51cf70u,51c);
}
B55d374:L55d374:{c.instructions+=1;NFSU2_TR(0x55d374);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55d377:L55d377:{c.instructions+=8;NFSU2_TR(0x55d377);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d37d:{NFSU2_TR(0x55d37d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d380:{NFSU2_TR(0x55d380);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d383:{NFSU2_TR(0x55d383);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d386:{NFSU2_TR(0x55d386);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d387:{NFSU2_TR(0x55d387);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d388:{NFSU2_TR(0x55d388);
w4(R+4,u32(0x838980ull));
}
B55d38d:{NFSU2_TR(0x55d38d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d392ull));
TAIL_STATIC(0x55c1f0u,55c);
}
B55d392:L55d392:{c.instructions+=2;NFSU2_TR(0x55d392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d398:{NFSU2_TR(0x55d398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d39dull));
TAIL_STATIC(0x5306c0u,530);
}
B55d39d:L55d39d:{c.instructions+=5;NFSU2_TR(0x55d39d);
{u32 ea_=u32(r4(R+24)+u32(388u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B55d3a3:{NFSU2_TR(0x55d3a3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d3a4:{NFSU2_TR(0x55d3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d3aa:{NFSU2_TR(0x55d3aa);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B55d3ad:{NFSU2_TR(0x55d3ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d3b2ull));
TAIL_STATIC(0x5306a0u,530);
}
B55d3b2:L55d3b2:{c.instructions+=6;NFSU2_TR(0x55d3b2);
{u32 ea_=u32(r4(R+24)+u32(384u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B55d3b8:{NFSU2_TR(0x55d3b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d3b9:{NFSU2_TR(0x55d3b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d3bf:{NFSU2_TR(0x55d3bf);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B55d3c2:{NFSU2_TR(0x55d3c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d3c3:{NFSU2_TR(0x55d3c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d3c8ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B55d3c8:L55d3c8:{c.instructions+=10;NFSU2_TR(0x55d3c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d3ce:{NFSU2_TR(0x55d3ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d3d1:{NFSU2_TR(0x55d3d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d3d4:{NFSU2_TR(0x55d3d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55d3d7:{NFSU2_TR(0x55d3d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55d3da:{NFSU2_TR(0x55d3da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d3db:{NFSU2_TR(0x55d3db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d3de:{NFSU2_TR(0x55d3de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d3df:{NFSU2_TR(0x55d3df);
w4(R+4,u32(0x85ad40ull));
}
B55d3e4:{NFSU2_TR(0x55d3e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d3e9ull));
TAIL_STATIC(0x514280u,514);
}
B55d3e9:L55d3e9:{c.instructions+=5;NFSU2_TR(0x55d3e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d3ea:{NFSU2_TR(0x55d3ea);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d3ef:{NFSU2_TR(0x55d3ef);
u8 U[4];
w4(U+0,u32(0x79d6acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d3f4:{NFSU2_TR(0x55d3f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d3f5:{NFSU2_TR(0x55d3f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d3faull));
TAIL_STATIC(0x542600u,542);
}
B55d3fa:L55d3fa:{c.instructions+=1;NFSU2_TR(0x55d3fa);
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
B55d3fd:L55d3fd:{c.instructions+=1;NFSU2_TR(0x55d3fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55d3fe:L55d3fe:{c.instructions+=3;NFSU2_TR(0x55d3fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55d3ff:{NFSU2_TR(0x55d3ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55d400:{NFSU2_TR(0x55d400);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d410:L55d410:{c.instructions+=13;NFSU2_TR(0x55d410);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B55d413:{NFSU2_TR(0x55d413);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B55d419:{NFSU2_TR(0x55d419);
__builtin_memmove((R+0),gp(0x8763f0),1);
}
B55d41e:{NFSU2_TR(0x55d41e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d41f:{NFSU2_TR(0x55d41f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55d421:{NFSU2_TR(0x55d421);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B55d427:{NFSU2_TR(0x55d427);
w4(R+0,u32(m1(0x8763f2)));
}
B55d42e:{NFSU2_TR(0x55d42e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B55d432:{NFSU2_TR(0x55d432);
__builtin_memmove((R+24),(R+4),4);
}
B55d434:{NFSU2_TR(0x55d434);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B55d43a:{NFSU2_TR(0x55d43a);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B55d440:{NFSU2_TR(0x55d440);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B55d444:{NFSU2_TR(0x55d444);
if(r1(R+518)){{goto L55d44d;}}
}
B55d446:L55d446:{c.instructions+=1;NFSU2_TR(0x55d446);
w4(R+0,u32(m1(0x8763f5)));
}
B55d44d:L55d44d:{c.instructions+=2;NFSU2_TR(0x55d44d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d44f:{NFSU2_TR(0x55d44f);
if(r1(R+518)){{goto L55d59d;}}
}
B55d455:L55d455:{c.instructions+=3;NFSU2_TR(0x55d455);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d45b:{NFSU2_TR(0x55d45b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d45d:{NFSU2_TR(0x55d45d);
if(r1(R+518)){{goto L55d4ee;}}
}
B55d463:L55d463:{c.instructions+=10;NFSU2_TR(0x55d463);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d466:{NFSU2_TR(0x55d466);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B55d46a:{NFSU2_TR(0x55d46a);
{u32 ea_=u32(r4(R+24)+u32(388u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B55d470:{NFSU2_TR(0x55d470);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d471:{NFSU2_TR(0x55d471);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B55d474:{NFSU2_TR(0x55d474);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B55d478:{NFSU2_TR(0x55d478);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B55d47c:{NFSU2_TR(0x55d47c);
{u32 ea_=u32(r4(R+24)+u32(384u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B55d482:{NFSU2_TR(0x55d482);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B55d485:{NFSU2_TR(0x55d485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d48aull));
TAIL_STATIC(0x52d020u,52d);
}
B55d48a:L55d48a:{c.instructions+=3;NFSU2_TR(0x55d48a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55d48d:{NFSU2_TR(0x55d48d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55d48f:{NFSU2_TR(0x55d48f);
if(r1(R+518)){{goto L55d4ee;}}
}
B55d491:L55d491:{c.instructions+=4;NFSU2_TR(0x55d491);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d494:{NFSU2_TR(0x55d494);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8380b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B55d49b:{NFSU2_TR(0x55d49b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d49e:{NFSU2_TR(0x55d49e);
if(r1(R+518)){{goto L55d4ac;}}
}
B55d4a0:L55d4a0:{c.instructions+=3;NFSU2_TR(0x55d4a0);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B55d4a6:{NFSU2_TR(0x55d4a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d4a7:{NFSU2_TR(0x55d4a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d4acull));
TAIL_STATIC(0x458520u,458);
}
B55d4ac:L55d4ac:{c.instructions+=11;NFSU2_TR(0x55d4ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d4af:{NFSU2_TR(0x55d4af);
u8 U[4];
w4(U+0,u32(0xc4c5d271ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d4b4:{NFSU2_TR(0x55d4b4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d4b6:{NFSU2_TR(0x55d4b6);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d4bb:{NFSU2_TR(0x55d4bb);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d4c0:{NFSU2_TR(0x55d4c0);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d4c5:{NFSU2_TR(0x55d4c5);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d4ca:{NFSU2_TR(0x55d4ca);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d4cf:{NFSU2_TR(0x55d4cf);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d4d4:{NFSU2_TR(0x55d4d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d4d5:{NFSU2_TR(0x55d4d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d4daull));
TAIL_STATIC(0x558790u,558);
}
B55d4da:L55d4da:{c.instructions+=4;NFSU2_TR(0x55d4da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B55d4dd:{NFSU2_TR(0x55d4dd);
__builtin_memmove((R+4),(R+24),4);
}
B55d4df:{NFSU2_TR(0x55d4df);
s4(0x838970,u32(0x34dc1bcfull));
}
B55d4e9:{NFSU2_TR(0x55d4e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d4eeull));
TAIL_STATIC(0x53bd20u,53b);
}
B55d4ee:L55d4ee:{c.instructions+=3;NFSU2_TR(0x55d4ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55d4f4:{NFSU2_TR(0x55d4f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55d4f6:{NFSU2_TR(0x55d4f6);
if(r1(R+518)){{goto L55d651;}}
}
B55d4fc:L55d4fc:{c.instructions+=3;NFSU2_TR(0x55d4fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d502:{NFSU2_TR(0x55d502);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d503:{NFSU2_TR(0x55d503);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d508ull));
TAIL_STATIC(0x52d100u,52d);
}
B55d508:L55d508:{c.instructions+=3;NFSU2_TR(0x55d508);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55d50b:{NFSU2_TR(0x55d50b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55d50d:{NFSU2_TR(0x55d50d);
if(r1(R+518)){{goto L55d552;}}
}
B55d50f:L55d50f:{c.instructions+=3;NFSU2_TR(0x55d50f);
u8 U[4];
w4(U+0,u32(0x5073ef13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d514:{NFSU2_TR(0x55d514);
__builtin_memmove((R+4),(R+24),4);
}
B55d516:{NFSU2_TR(0x55d516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d51bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55d0d0u);}goto L55d0d0;}
}
B55d51b:L55d51b:{c.instructions+=5;NFSU2_TR(0x55d51b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d521:{NFSU2_TR(0x55d521);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d523:{NFSU2_TR(0x55d523);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d528:{NFSU2_TR(0x55d528);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d529:{NFSU2_TR(0x55d529);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d52eull));
TAIL_STATIC(0x51cf70u,51c);
}
B55d52e:L55d52e:{c.instructions+=4;NFSU2_TR(0x55d52e);
w4(R+0,u32(s32(s8(m1(0x838057)))));
}
B55d535:{NFSU2_TR(0x55d535);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55d538:{NFSU2_TR(0x55d538);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d53b:{NFSU2_TR(0x55d53b);
if(r1(R+518)){{goto L55d651;}}
}
B55d541:L55d541:{c.instructions+=3;NFSU2_TR(0x55d541);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B55d547:{NFSU2_TR(0x55d547);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d548:{NFSU2_TR(0x55d548);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d54dull));
TAIL_STATIC(0x458520u,458);
}
B55d54d:L55d54d:{c.instructions+=3;NFSU2_TR(0x55d54d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55d54e:{NFSU2_TR(0x55d54e);
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
B55d551:{NFSU2_TR(0x55d551);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d552:L55d552:{c.instructions+=3;NFSU2_TR(0x55d552);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d558:{NFSU2_TR(0x55d558);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d559:{NFSU2_TR(0x55d559);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d55eull));
TAIL_STATIC(0x52d100u,52d);
}
B55d55e:L55d55e:{c.instructions+=3;NFSU2_TR(0x55d55e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55d561:{NFSU2_TR(0x55d561);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55d563:{NFSU2_TR(0x55d563);
if(r1(R+518)){{goto L55d651;}}
}
B55d569:L55d569:{c.instructions+=3;NFSU2_TR(0x55d569);
u8 U[4];
w4(U+0,u32(0xd9feec59ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d56e:{NFSU2_TR(0x55d56e);
__builtin_memmove((R+4),(R+24),4);
}
B55d570:{NFSU2_TR(0x55d570);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d575ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55d0d0u);}goto L55d0d0;}
}
B55d575:L55d575:{c.instructions+=5;NFSU2_TR(0x55d575);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d57b:{NFSU2_TR(0x55d57b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d57d:{NFSU2_TR(0x55d57d);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d582:{NFSU2_TR(0x55d582);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d583:{NFSU2_TR(0x55d583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d588ull));
TAIL_STATIC(0x51cf70u,51c);
}
B55d588:L55d588:{c.instructions+=5;NFSU2_TR(0x55d588);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d58b:{NFSU2_TR(0x55d58b);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d58d:{NFSU2_TR(0x55d58d);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d58f:{NFSU2_TR(0x55d58f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d590:{NFSU2_TR(0x55d590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d595ull));
TAIL_STATIC(0x50d150u,50d);
}
B55d595:L55d595:{c.instructions+=4;NFSU2_TR(0x55d595);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B55d598:{NFSU2_TR(0x55d598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55d599:{NFSU2_TR(0x55d599);
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
B55d59c:{NFSU2_TR(0x55d59c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d59d:L55d59d:{c.instructions+=3;NFSU2_TR(0x55d59d);
__builtin_memmove((R+0),gp(0x8763e4),4);
}
B55d5a2:{NFSU2_TR(0x55d5a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d5a4:{NFSU2_TR(0x55d5a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55d5b3;}}
}
B55d5a6:L55d5a6:{c.instructions+=3;NFSU2_TR(0x55d5a6);
__builtin_memmove((R+0),gp(0x8763e8),4);
}
B55d5ab:{NFSU2_TR(0x55d5ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d5ad:{NFSU2_TR(0x55d5ad);
if(r1(R+518)){{goto L55d651;}}
}
B55d5b3:L55d5b3:{c.instructions+=10;NFSU2_TR(0x55d5b3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B55d5b7:{NFSU2_TR(0x55d5b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d5b8:{NFSU2_TR(0x55d5b8);
{u32 ea_=u32(r4(R+24)+u32(388u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B55d5be:{NFSU2_TR(0x55d5be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B55d5c1:{NFSU2_TR(0x55d5c1);
__builtin_memmove((R+4),(R+24),4);
}
B55d5c3:{NFSU2_TR(0x55d5c3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B55d5c7:{NFSU2_TR(0x55d5c7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B55d5cb:{NFSU2_TR(0x55d5cb);
{u32 ea_=u32(r4(R+24)+u32(384u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B55d5d1:{NFSU2_TR(0x55d5d1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B55d5d4:{NFSU2_TR(0x55d5d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d5d9ull));
TAIL_STATIC(0x5308b0u,530);
}
B55d5d9:L55d5d9:{c.instructions+=3;NFSU2_TR(0x55d5d9);
__builtin_memmove((R+28),(R+0),4);
}
B55d5db:{NFSU2_TR(0x55d5db);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d5dd:{NFSU2_TR(0x55d5dd);
if(r1(R+518)){{goto L55d650;}}
}
B55d5df:L55d5df:{c.instructions+=3;NFSU2_TR(0x55d5df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d5e5:{NFSU2_TR(0x55d5e5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d5e7:{NFSU2_TR(0x55d5e7);
if(r1(R+518)){{goto L55d650;}}
}
B55d5e9:L55d5e9:{c.instructions+=3;NFSU2_TR(0x55d5e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d5ec:{NFSU2_TR(0x55d5ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d5ee:{NFSU2_TR(0x55d5ee);
if(r1(R+518)){{goto L55d650;}}
}
B55d5f0:L55d5f0:{c.instructions+=1;NFSU2_TR(0x55d5f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d5f5ull));
TAIL_STATIC(0x521fd0u,521);
}
B55d5f5:L55d5f5:{c.instructions+=2;NFSU2_TR(0x55d5f5);
__builtin_memmove((R+4),(R+28),4);
}
B55d5f7:{NFSU2_TR(0x55d5f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d5fcull));
TAIL_STATIC(0x521fb0u,521);
}
B55d5fc:L55d5fc:{c.instructions+=8;NFSU2_TR(0x55d5fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d5ff:{NFSU2_TR(0x55d5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55d605:{NFSU2_TR(0x55d605);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d608:{NFSU2_TR(0x55d608);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d60b:{NFSU2_TR(0x55d60b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d60c:{NFSU2_TR(0x55d60c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d60d:{NFSU2_TR(0x55d60d);
w4(R+4,u32(0x838980ull));
}
B55d612:{NFSU2_TR(0x55d612);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d617ull));
TAIL_STATIC(0x55c1f0u,55c);
}
B55d617:L55d617:{c.instructions+=2;NFSU2_TR(0x55d617);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d61d:{NFSU2_TR(0x55d61d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d622ull));
TAIL_STATIC(0x5306c0u,530);
}
B55d622:L55d622:{c.instructions+=5;NFSU2_TR(0x55d622);
{u32 ea_=u32(r4(R+24)+u32(388u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B55d628:{NFSU2_TR(0x55d628);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d629:{NFSU2_TR(0x55d629);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d62f:{NFSU2_TR(0x55d62f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B55d632:{NFSU2_TR(0x55d632);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d637ull));
TAIL_STATIC(0x5306a0u,530);
}
B55d637:L55d637:{c.instructions+=6;NFSU2_TR(0x55d637);
{u32 ea_=u32(r4(R+24)+u32(384u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B55d63d:{NFSU2_TR(0x55d63d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d643:{NFSU2_TR(0x55d643);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d644:{NFSU2_TR(0x55d644);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B55d647:{NFSU2_TR(0x55d647);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d648:{NFSU2_TR(0x55d648);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d64dull));
TAIL_STATIC(0x51d4d0u,51d);
}
B55d64d:L55d64d:{c.instructions+=1;NFSU2_TR(0x55d64d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55d650:L55d650:{c.instructions+=1;NFSU2_TR(0x55d650);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55d651:L55d651:{c.instructions+=3;NFSU2_TR(0x55d651);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55d652:{NFSU2_TR(0x55d652);
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
B55d655:{NFSU2_TR(0x55d655);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d660:L55d660:{c.instructions+=9;NFSU2_TR(0x55d660);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d661:{NFSU2_TR(0x55d661);
__builtin_memmove((R+20),(R+16),4);
}
B55d663:{NFSU2_TR(0x55d663);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d664:{NFSU2_TR(0x55d664);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d665:{NFSU2_TR(0x55d665);
__builtin_memmove((R+24),(R+4),4);
}
B55d667:{NFSU2_TR(0x55d667);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d66a:{NFSU2_TR(0x55d66a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+0),(U+0),4);
}
B55d66d:{NFSU2_TR(0x55d66d);
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
B55d66f:{NFSU2_TR(0x55d66f);
if(r1(R+518)){{goto L55d7dd;}}
}
B55d675:L55d675:{c.instructions+=7;NFSU2_TR(0x55d675);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d678:{NFSU2_TR(0x55d678);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d679:{NFSU2_TR(0x55d679);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55d67c:{NFSU2_TR(0x55d67c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d67f:{NFSU2_TR(0x55d67f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d680:{NFSU2_TR(0x55d680);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55d683:{NFSU2_TR(0x55d683);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55d6bf;}}
}
B55d685:L55d685:{c.instructions+=4;NFSU2_TR(0x55d685);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d688:{NFSU2_TR(0x55d688);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d68a:{NFSU2_TR(0x55d68a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55d68d:{NFSU2_TR(0x55d68d);
if(r1(R+518)){{goto L55d694;}}
}
B55d68f:L55d68f:{c.instructions+=2;NFSU2_TR(0x55d68f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B55d692:{NFSU2_TR(0x55d692);
{goto L55d696;}
}
B55d694:L55d694:{c.instructions+=1;NFSU2_TR(0x55d694);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55d696:L55d696:{c.instructions+=2;NFSU2_TR(0x55d696);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B55d699:{NFSU2_TR(0x55d699);
if(r1(R+518)){{goto L55d6b6;}}
}
B55d69b:L55d69b:{c.instructions+=4;NFSU2_TR(0x55d69b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d69e:{NFSU2_TR(0x55d69e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x838082ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B55d6a5:{NFSU2_TR(0x55d6a5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d6a8:{NFSU2_TR(0x55d6a8);
if(r1(R+518)){{goto L55d6b6;}}
}
B55d6aa:L55d6aa:{c.instructions+=3;NFSU2_TR(0x55d6aa);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B55d6b0:{NFSU2_TR(0x55d6b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d6b1:{NFSU2_TR(0x55d6b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d6b6ull));
TAIL_STATIC(0x458520u,458);
}
B55d6b6:L55d6b6:{c.instructions+=2;NFSU2_TR(0x55d6b6);
__builtin_memmove((R+4),(R+28),4);
}
B55d6b8:{NFSU2_TR(0x55d6b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d6bdull));
TAIL_STATIC(0x495900u,495);
}
B55d6bd:L55d6bd:{c.instructions+=1;NFSU2_TR(0x55d6bd);
{goto L55d6eb;}
}
B55d6bf:L55d6bf:{c.instructions+=2;NFSU2_TR(0x55d6bf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d6c2:{NFSU2_TR(0x55d6c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55d6eb;}}
}
B55d6c4:L55d6c4:{c.instructions+=3;NFSU2_TR(0x55d6c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55d6c7:{NFSU2_TR(0x55d6c7);
__builtin_memmove((R+4),(R+28),4);
}
B55d6c9:{NFSU2_TR(0x55d6c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d6ceull));
TAIL_STATIC(0x4aebc0u,4ae);
}
B55d6ce:L55d6ce:{c.instructions+=2;NFSU2_TR(0x55d6ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55d6d0:{NFSU2_TR(0x55d6d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55d6e4;}}
}
B55d6d2:L55d6d2:{c.instructions+=6;NFSU2_TR(0x55d6d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d6d5:{NFSU2_TR(0x55d6d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d6d8:{NFSU2_TR(0x55d6d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d6d9:{NFSU2_TR(0x55d6d9);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d6db:{NFSU2_TR(0x55d6db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d6dc:{NFSU2_TR(0x55d6dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d6e1ull));
TAIL_STATIC(0x50d150u,50d);
}
B55d6e1:L55d6e1:{c.instructions+=1;NFSU2_TR(0x55d6e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B55d6e4:L55d6e4:{c.instructions+=2;NFSU2_TR(0x55d6e4);
__builtin_memmove((R+4),(R+28),4);
}
B55d6e6:{NFSU2_TR(0x55d6e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d6ebull));
TAIL_STATIC(0x4958f0u,495);
}
B55d6eb:L55d6eb:{c.instructions+=3;NFSU2_TR(0x55d6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d6ee:{NFSU2_TR(0x55d6ee);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B55d6f1:{NFSU2_TR(0x55d6f1);
if(r1(R+518)){{goto L55d7db;}}
}
B55d6f7:L55d6f7:{c.instructions+=11;NFSU2_TR(0x55d6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d6fa:{NFSU2_TR(0x55d6fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d700:{NFSU2_TR(0x55d700);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55d703:{NFSU2_TR(0x55d703);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d706:{NFSU2_TR(0x55d706);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d709:{NFSU2_TR(0x55d709);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d70f:{NFSU2_TR(0x55d70f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d712:{NFSU2_TR(0x55d712);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d713:{NFSU2_TR(0x55d713);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d714:{NFSU2_TR(0x55d714);
w4(R+4,u32(0x838980ull));
}
B55d719:{NFSU2_TR(0x55d719);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d71eull));
TAIL_STATIC(0x55c170u,55c);
}
B55d71e:L55d71e:{c.instructions+=7;NFSU2_TR(0x55d71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d724:{NFSU2_TR(0x55d724);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d727:{NFSU2_TR(0x55d727);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d729:{NFSU2_TR(0x55d729);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d72b:{NFSU2_TR(0x55d72b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d72d:{NFSU2_TR(0x55d72d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d72e:{NFSU2_TR(0x55d72e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d733ull));
TAIL_STATIC(0x4c2100u,4c2);
}
B55d733:L55d733:{c.instructions+=3;NFSU2_TR(0x55d733);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B55d736:{NFSU2_TR(0x55d736);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d739:{NFSU2_TR(0x55d739);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55d751;}}
}
B55d73b:L55d73b:{c.instructions+=3;NFSU2_TR(0x55d73b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55d741:{NFSU2_TR(0x55d741);
__builtin_memmove((R+4),(R+28),4);
}
B55d743:{NFSU2_TR(0x55d743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d748ull));
TAIL_STATIC(0x527610u,527);
}
B55d748:L55d748:{c.instructions+=2;NFSU2_TR(0x55d748);
__builtin_memmove((R+4),(R+28),4);
}
B55d74a:{NFSU2_TR(0x55d74a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d74full));
TAIL_STATIC(0x495850u,495);
}
B55d74f:L55d74f:{c.instructions+=1;NFSU2_TR(0x55d74f);
{goto L55d76a;}
}
B55d751:L55d751:{c.instructions+=2;NFSU2_TR(0x55d751);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d754:{NFSU2_TR(0x55d754);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55d76a;}}
}
B55d756:L55d756:{c.instructions+=3;NFSU2_TR(0x55d756);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55d75c:{NFSU2_TR(0x55d75c);
__builtin_memmove((R+4),(R+28),4);
}
B55d75e:{NFSU2_TR(0x55d75e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d763ull));
TAIL_STATIC(0x527660u,527);
}
B55d763:L55d763:{c.instructions+=2;NFSU2_TR(0x55d763);
__builtin_memmove((R+4),(R+28),4);
}
B55d765:{NFSU2_TR(0x55d765);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d76aull));
TAIL_STATIC(0x495810u,495);
}
B55d76a:L55d76a:{c.instructions+=2;NFSU2_TR(0x55d76a);
__builtin_memmove((R+4),(R+24),4);
}
B55d76c:{NFSU2_TR(0x55d76c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d771ull));
TAIL_STATIC(0x548d20u,548);
}
B55d771:L55d771:{c.instructions+=4;NFSU2_TR(0x55d771);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d774:{NFSU2_TR(0x55d774);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d776:{NFSU2_TR(0x55d776);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B55d779:{NFSU2_TR(0x55d779);
if(r1(R+518)){{goto L55d780;}}
}
B55d77b:L55d77b:{c.instructions+=2;NFSU2_TR(0x55d77b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B55d77e:{NFSU2_TR(0x55d77e);
{goto L55d782;}
}
B55d780:L55d780:{c.instructions+=1;NFSU2_TR(0x55d780);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55d782:L55d782:{c.instructions+=2;NFSU2_TR(0x55d782);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B55d785:{NFSU2_TR(0x55d785);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55d79f;}}
}
B55d787:L55d787:{c.instructions+=3;NFSU2_TR(0x55d787);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d78d:{NFSU2_TR(0x55d78d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d78e:{NFSU2_TR(0x55d78e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d793ull));
TAIL_STATIC(0x50ca00u,50c);
}
B55d793:L55d793:{c.instructions+=7;NFSU2_TR(0x55d793);
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
B55d796:{NFSU2_TR(0x55d796);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55d797:{NFSU2_TR(0x55d797);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55d798:{NFSU2_TR(0x55d798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55d799:{NFSU2_TR(0x55d799);
__builtin_memmove((R+16),(R+20),4);
}
B55d79b:{NFSU2_TR(0x55d79b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55d79c:{NFSU2_TR(0x55d79c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d79f:L55d79f:{c.instructions+=1;NFSU2_TR(0x55d79f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d7a4ull));
TAIL_STATIC(0x4aebc0u,4ae);
}
B55d7a4:L55d7a4:{c.instructions+=2;NFSU2_TR(0x55d7a4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55d7a6:{NFSU2_TR(0x55d7a6);
if(r1(R+518)){{goto L55d7c0;}}
}
B55d7a8:L55d7a8:{c.instructions+=3;NFSU2_TR(0x55d7a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d7ae:{NFSU2_TR(0x55d7ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d7af:{NFSU2_TR(0x55d7af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d7b4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B55d7b4:L55d7b4:{c.instructions+=7;NFSU2_TR(0x55d7b4);
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
B55d7b7:{NFSU2_TR(0x55d7b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55d7b8:{NFSU2_TR(0x55d7b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55d7b9:{NFSU2_TR(0x55d7b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55d7ba:{NFSU2_TR(0x55d7ba);
__builtin_memmove((R+16),(R+20),4);
}
B55d7bc:{NFSU2_TR(0x55d7bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55d7bd:{NFSU2_TR(0x55d7bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d7c0:L55d7c0:{c.instructions+=3;NFSU2_TR(0x55d7c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d7c6:{NFSU2_TR(0x55d7c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d7c7:{NFSU2_TR(0x55d7c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d7ccull));
TAIL_STATIC(0x50ca50u,50c);
}
B55d7cc:L55d7cc:{c.instructions+=3;NFSU2_TR(0x55d7cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d7d2:{NFSU2_TR(0x55d7d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d7d3:{NFSU2_TR(0x55d7d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d7d8ull));
TAIL_STATIC(0x50ca50u,50c);
}
B55d7d8:L55d7d8:{c.instructions+=1;NFSU2_TR(0x55d7d8);
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
B55d7db:L55d7db:{c.instructions+=2;NFSU2_TR(0x55d7db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55d7dc:{NFSU2_TR(0x55d7dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55d7dd:L55d7dd:{c.instructions+=4;NFSU2_TR(0x55d7dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55d7de:{NFSU2_TR(0x55d7de);
__builtin_memmove((R+16),(R+20),4);
}
B55d7e0:{NFSU2_TR(0x55d7e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55d7e1:{NFSU2_TR(0x55d7e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d7f0:L55d7f0:{c.instructions+=8;NFSU2_TR(0x55d7f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d7f2:{NFSU2_TR(0x55d7f2);
u8 U[4];
w4(U+0,u32(0x7783b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d7f7:{NFSU2_TR(0x55d7f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d7fd:{NFSU2_TR(0x55d7fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d7fe:{NFSU2_TR(0x55d7fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55d805:{NFSU2_TR(0x55d805);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d806:{NFSU2_TR(0x55d806);
u8 U[4];
w4(U+0,u32(0x158ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d80b:{NFSU2_TR(0x55d80b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d810ull));
TAIL_STATIC(0x575620u,575);
}
B55d810:L55d810:{c.instructions+=5;NFSU2_TR(0x55d810);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55d813:{NFSU2_TR(0x55d813);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B55d817:{NFSU2_TR(0x55d817);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d819:{NFSU2_TR(0x55d819);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55d821:{NFSU2_TR(0x55d821);
if(r1(R+518)){{goto L55d83e;}}
}
B55d823:L55d823:{c.instructions+=4;NFSU2_TR(0x55d823);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d827:{NFSU2_TR(0x55d827);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d828:{NFSU2_TR(0x55d828);
__builtin_memmove((R+4),(R+0),4);
}
B55d82a:{NFSU2_TR(0x55d82a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d82full));
TAIL_STATIC(0x55a460u,55a);
}
B55d82f:L55d82f:{c.instructions+=4;NFSU2_TR(0x55d82f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d833:{NFSU2_TR(0x55d833);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55d83a:{NFSU2_TR(0x55d83a);
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
B55d83d:{NFSU2_TR(0x55d83d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d83e:L55d83e:{c.instructions+=5;NFSU2_TR(0x55d83e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d842:{NFSU2_TR(0x55d842);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55d844:{NFSU2_TR(0x55d844);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55d84b:{NFSU2_TR(0x55d84b);
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
B55d84e:{NFSU2_TR(0x55d84e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d850:L55d850:{c.instructions+=8;NFSU2_TR(0x55d850);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d852:{NFSU2_TR(0x55d852);
u8 U[4];
w4(U+0,u32(0x7783d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d857:{NFSU2_TR(0x55d857);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d85d:{NFSU2_TR(0x55d85d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d85e:{NFSU2_TR(0x55d85e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55d865:{NFSU2_TR(0x55d865);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d866:{NFSU2_TR(0x55d866);
u8 U[4];
w4(U+0,u32(0x158ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d86b:{NFSU2_TR(0x55d86b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d870ull));
TAIL_STATIC(0x575620u,575);
}
B55d870:L55d870:{c.instructions+=5;NFSU2_TR(0x55d870);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55d873:{NFSU2_TR(0x55d873);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B55d877:{NFSU2_TR(0x55d877);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d879:{NFSU2_TR(0x55d879);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55d881:{NFSU2_TR(0x55d881);
if(r1(R+518)){{goto L55d89e;}}
}
B55d883:L55d883:{c.instructions+=4;NFSU2_TR(0x55d883);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d887:{NFSU2_TR(0x55d887);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d888:{NFSU2_TR(0x55d888);
__builtin_memmove((R+4),(R+0),4);
}
B55d88a:{NFSU2_TR(0x55d88a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d88full));
TAIL_STATIC(0x55a620u,55a);
}
B55d88f:L55d88f:{c.instructions+=4;NFSU2_TR(0x55d88f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d893:{NFSU2_TR(0x55d893);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55d89a:{NFSU2_TR(0x55d89a);
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
B55d89d:{NFSU2_TR(0x55d89d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d89e:L55d89e:{c.instructions+=5;NFSU2_TR(0x55d89e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d8a2:{NFSU2_TR(0x55d8a2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55d8a4:{NFSU2_TR(0x55d8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55d8ab:{NFSU2_TR(0x55d8ab);
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
B55d8ae:{NFSU2_TR(0x55d8ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d8b0:L55d8b0:{c.instructions+=8;NFSU2_TR(0x55d8b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d8b2:{NFSU2_TR(0x55d8b2);
u8 U[4];
w4(U+0,u32(0x7783f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d8b7:{NFSU2_TR(0x55d8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d8bd:{NFSU2_TR(0x55d8bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d8be:{NFSU2_TR(0x55d8be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55d8c5:{NFSU2_TR(0x55d8c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d8c6:{NFSU2_TR(0x55d8c6);
u8 U[4];
w4(U+0,u32(0x158ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d8cb:{NFSU2_TR(0x55d8cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d8d0ull));
TAIL_STATIC(0x575620u,575);
}
B55d8d0:L55d8d0:{c.instructions+=5;NFSU2_TR(0x55d8d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55d8d3:{NFSU2_TR(0x55d8d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B55d8d7:{NFSU2_TR(0x55d8d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55d8d9:{NFSU2_TR(0x55d8d9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55d8e1:{NFSU2_TR(0x55d8e1);
if(r1(R+518)){{goto L55d8fe;}}
}
B55d8e3:L55d8e3:{c.instructions+=4;NFSU2_TR(0x55d8e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d8e7:{NFSU2_TR(0x55d8e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d8e8:{NFSU2_TR(0x55d8e8);
__builtin_memmove((R+4),(R+0),4);
}
B55d8ea:{NFSU2_TR(0x55d8ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d8efull));
TAIL_STATIC(0x55aa40u,55a);
}
B55d8ef:L55d8ef:{c.instructions+=4;NFSU2_TR(0x55d8ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d8f3:{NFSU2_TR(0x55d8f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55d8fa:{NFSU2_TR(0x55d8fa);
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
B55d8fd:{NFSU2_TR(0x55d8fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d8fe:L55d8fe:{c.instructions+=5;NFSU2_TR(0x55d8fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d902:{NFSU2_TR(0x55d902);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55d904:{NFSU2_TR(0x55d904);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55d90b:{NFSU2_TR(0x55d90b);
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
B55d90e:{NFSU2_TR(0x55d90e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d910:L55d910:{c.instructions+=9;NFSU2_TR(0x55d910);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d911:{NFSU2_TR(0x55d911);
__builtin_memmove((R+20),(R+16),4);
}
B55d913:{NFSU2_TR(0x55d913);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d914:{NFSU2_TR(0x55d914);
__builtin_memmove((R+24),(R+4),4);
}
B55d916:{NFSU2_TR(0x55d916);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d91c:{NFSU2_TR(0x55d91c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8651ac),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d922:{NFSU2_TR(0x55d922);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d923:{NFSU2_TR(0x55d923);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55d926:{NFSU2_TR(0x55d926);
if(r1(R+518)){{goto L55d93c;}}
}
B55d928:L55d928:{c.instructions+=9;NFSU2_TR(0x55d928);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d92b:{NFSU2_TR(0x55d92b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d92e:{NFSU2_TR(0x55d92e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d931:{NFSU2_TR(0x55d931);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d932:{NFSU2_TR(0x55d932);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d933:{NFSU2_TR(0x55d933);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d934:{NFSU2_TR(0x55d934);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d935:{NFSU2_TR(0x55d935);
__builtin_memmove((R+4),(R+24),4);
}
B55d937:{NFSU2_TR(0x55d937);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d93cull));
TAIL_STATIC(0x543d40u,543);
}
B55d93c:L55d93c:{c.instructions+=2;NFSU2_TR(0x55d93c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0xb5af2461ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5af2461ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d942:{NFSU2_TR(0x55d942);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L55da5d;}}
}
B55d948:L55d948:{c.instructions+=1;NFSU2_TR(0x55d948);
if(r1(R+518)){{goto L55d9e3;}}
}
B55d94e:L55d94e:{c.instructions+=2;NFSU2_TR(0x55d94e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d954:{NFSU2_TR(0x55d954);
if(r1(R+518)){{goto L55d999;}}
}
B55d956:L55d956:{c.instructions+=2;NFSU2_TR(0x55d956);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x731bf236ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55d95c:{NFSU2_TR(0x55d95c);
if(r1(R+518)){{goto L55d980;}}
}
B55d95e:L55d95e:{c.instructions+=2;NFSU2_TR(0x55d95e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x911ab364ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55d964:{NFSU2_TR(0x55d964);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55db02;}}
}
B55d96a:L55d96a:{c.instructions+=3;NFSU2_TR(0x55d96a);
w4(R+4,u32(0x839c40ull));
}
B55d96f:{NFSU2_TR(0x55d96f);
s1(0x864618,u8(0x0ull));
}
B55d976:{NFSU2_TR(0x55d976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d97bull));
TAIL_STATIC(0x50fdd0u,50f);
}
B55d97b:L55d97b:{c.instructions+=1;NFSU2_TR(0x55d97b);
{goto L55da20;}
}
B55d980:L55d980:{c.instructions+=6;NFSU2_TR(0x55d980);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d983:{NFSU2_TR(0x55d983);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d986:{NFSU2_TR(0x55d986);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B55d98c:{NFSU2_TR(0x55d98c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d98d:{NFSU2_TR(0x55d98d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d98e:{NFSU2_TR(0x55d98e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d993ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B55d993:L55d993:{c.instructions+=4;NFSU2_TR(0x55d993);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55d994:{NFSU2_TR(0x55d994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55d995:{NFSU2_TR(0x55d995);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55d996:{NFSU2_TR(0x55d996);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d999:L55d999:{c.instructions+=4;NFSU2_TR(0x55d999);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d99c:{NFSU2_TR(0x55d99c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B55d99f:{NFSU2_TR(0x55d99f);
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
B55d9a1:{NFSU2_TR(0x55d9a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55db02;}}
}
B55d9a7:L55d9a7:{c.instructions+=7;NFSU2_TR(0x55d9a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d9aa:{NFSU2_TR(0x55d9aa);
__builtin_memmove(gp(0x83a648),(R+4),4);
}
B55d9b0:{NFSU2_TR(0x55d9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d9b3:{NFSU2_TR(0x55d9b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d9b6:{NFSU2_TR(0x55d9b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d9b7:{NFSU2_TR(0x55d9b7);
w4(R+4,u32(0x8635bcull));
}
B55d9bc:{NFSU2_TR(0x55d9bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d9c1ull));
TAIL_STATIC(0x525100u,525);
}
B55d9c1:L55d9c1:{c.instructions+=4;NFSU2_TR(0x55d9c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55d9c4:{NFSU2_TR(0x55d9c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d9c6:{NFSU2_TR(0x55d9c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d9c7:{NFSU2_TR(0x55d9c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d9ccull));
TAIL_STATIC(0x537950u,537);
}
B55d9cc:L55d9cc:{c.instructions+=6;NFSU2_TR(0x55d9cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55d9cf:{NFSU2_TR(0x55d9cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55d9d2:{NFSU2_TR(0x55d9d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55d9d5:{NFSU2_TR(0x55d9d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55d9d6:{NFSU2_TR(0x55d9d6);
__builtin_memmove((R+4),(R+24),4);
}
B55d9d8:{NFSU2_TR(0x55d9d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55d9ddull));
TAIL_STATIC(0x55ab80u,55a);
}
B55d9dd:L55d9dd:{c.instructions+=4;NFSU2_TR(0x55d9dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55d9de:{NFSU2_TR(0x55d9de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55d9df:{NFSU2_TR(0x55d9df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55d9e0:{NFSU2_TR(0x55d9e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55d9e3:L55d9e3:{c.instructions+=3;NFSU2_TR(0x55d9e3);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B55d9e9:{NFSU2_TR(0x55d9e9);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B55d9ef:{NFSU2_TR(0x55d9ef);
if(r1(R+518)){{goto L55db02;}}
}
B55d9f5:L55d9f5:{c.instructions+=3;NFSU2_TR(0x55d9f5);
__builtin_memmove((R+0),gp(0x83a7a4),1);
}
B55d9fa:{NFSU2_TR(0x55d9fa);
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
B55d9fc:{NFSU2_TR(0x55d9fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55db02;}}
}
B55da02:L55da02:{c.instructions+=6;NFSU2_TR(0x55da02);
__builtin_memmove((R+8),gp(0x83a64c),4);
}
B55da08:{NFSU2_TR(0x55da08);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B55da0f:{NFSU2_TR(0x55da0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55da12:{NFSU2_TR(0x55da12);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55da14:{NFSU2_TR(0x55da14);
s1(0x864618,u8(0x1ull));
}
B55da1b:{NFSU2_TR(0x55da1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55da20ull));
TAIL_STATIC(0x5f6c20u,5f6);
}
B55da20:L55da20:{c.instructions+=6;NFSU2_TR(0x55da20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55da23:{NFSU2_TR(0x55da23);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55da25:{NFSU2_TR(0x55da25);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55da2a:{NFSU2_TR(0x55da2a);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55da2f:{NFSU2_TR(0x55da2f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55da30:{NFSU2_TR(0x55da30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55da35ull));
TAIL_STATIC(0x537c60u,537);
}
B55da35:L55da35:{c.instructions+=2;NFSU2_TR(0x55da35);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55da3a:{NFSU2_TR(0x55da3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55da3full));
TAIL_STATIC(0x52cf60u,52c);
}
B55da3f:L55da3f:{c.instructions+=3;NFSU2_TR(0x55da3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B55da42:{NFSU2_TR(0x55da42);
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
B55da44:{NFSU2_TR(0x55da44);
if(r1(R+518)){{goto L55db02;}}
}
B55da4a:L55da4a:{c.instructions+=2;NFSU2_TR(0x55da4a);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55da4f:{NFSU2_TR(0x55da4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55da54ull));
TAIL_STATIC(0x5379a0u,537);
}
B55da54:L55da54:{c.instructions+=5;NFSU2_TR(0x55da54);
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
B55da57:{NFSU2_TR(0x55da57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55da58:{NFSU2_TR(0x55da58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55da59:{NFSU2_TR(0x55da59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55da5a:{NFSU2_TR(0x55da5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55da5d:L55da5d:{c.instructions+=2;NFSU2_TR(0x55da5d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55da63:{NFSU2_TR(0x55da63);
if(r1(R+518)){{goto L55daf7;}}
}
B55da69:L55da69:{c.instructions+=2;NFSU2_TR(0x55da69);
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
B55da6f:{NFSU2_TR(0x55da6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55db02;}}
}
B55da75:L55da75:{c.instructions+=3;NFSU2_TR(0x55da75);
__builtin_memmove((R+0),gp(0x864618),1);
}
B55da7a:{NFSU2_TR(0x55da7a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55da7c:{NFSU2_TR(0x55da7c);
if(r1(R+518)){{goto L55daaf;}}
}
B55da7e:L55da7e:{c.instructions+=2;NFSU2_TR(0x55da7e);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55da83:{NFSU2_TR(0x55da83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55da88ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55da88:L55da88:{c.instructions+=3;NFSU2_TR(0x55da88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55da8b:{NFSU2_TR(0x55da8b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55da8d:{NFSU2_TR(0x55da8d);
if(r1(R+518)){{goto L55da9c;}}
}
B55da8f:L55da8f:{c.instructions+=2;NFSU2_TR(0x55da8f);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55da94:{NFSU2_TR(0x55da94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55da99ull));
TAIL_STATIC(0x5379a0u,537);
}
B55da99:L55da99:{c.instructions+=1;NFSU2_TR(0x55da99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55da9c:L55da9c:{c.instructions+=3;NFSU2_TR(0x55da9c);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B55daa2:{NFSU2_TR(0x55daa2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55daa4:{NFSU2_TR(0x55daa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55daa9ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B55daa9:L55daa9:{c.instructions+=4;NFSU2_TR(0x55daa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55daaa:{NFSU2_TR(0x55daaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55daab:{NFSU2_TR(0x55daab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55daac:{NFSU2_TR(0x55daac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55daaf:L55daaf:{c.instructions+=3;NFSU2_TR(0x55daaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55dab2:{NFSU2_TR(0x55dab2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dab3:{NFSU2_TR(0x55dab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55dab8ull));
TAIL_STATIC(0x505450u,505);
}
B55dab8:L55dab8:{c.instructions+=2;NFSU2_TR(0x55dab8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dab9:{NFSU2_TR(0x55dab9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55dabeull));
TAIL_STATIC(0x50b840u,50b);
}
B55dabe:L55dabe:{c.instructions+=3;NFSU2_TR(0x55dabe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B55dac1:{NFSU2_TR(0x55dac1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55dac3:{NFSU2_TR(0x55dac3);
if(r1(R+518)){{goto L55dacc;}}
}
B55dac5:L55dac5:{c.instructions+=1;NFSU2_TR(0x55dac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55dacc:L55dacc:{c.instructions+=4;NFSU2_TR(0x55dacc);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55dad2:{NFSU2_TR(0x55dad2);
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
B55dad4:{NFSU2_TR(0x55dad4);
s4(0x83a648,u32(0x0ull));
}
B55dade:{NFSU2_TR(0x55dade);
if(r1(R+518)){{goto L55db02;}}
}
B55dae0:L55dae0:{c.instructions+=6;NFSU2_TR(0x55dae0);
__builtin_memmove((R+0),gp(0x7fa21c),4);
}
B55dae5:{NFSU2_TR(0x55dae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55dae8:{NFSU2_TR(0x55dae8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55daea:{NFSU2_TR(0x55daea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55daeb:{NFSU2_TR(0x55daeb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55daec:{NFSU2_TR(0x55daec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55daf1ull));
TAIL_STATIC(0x5377a0u,537);
}
B55daf1:L55daf1:{c.instructions+=4;NFSU2_TR(0x55daf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55daf2:{NFSU2_TR(0x55daf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55daf3:{NFSU2_TR(0x55daf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55daf4:{NFSU2_TR(0x55daf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55daf7:L55daf7:{c.instructions+=2;NFSU2_TR(0x55daf7);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B55dafd:{NFSU2_TR(0x55dafd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55db02ull));
TAIL_STATIC(0x52cdd0u,52c);
}
B55db02:L55db02:{c.instructions+=4;NFSU2_TR(0x55db02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55db03:{NFSU2_TR(0x55db03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55db04:{NFSU2_TR(0x55db04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55db05:{NFSU2_TR(0x55db05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55db10:L55db10:{c.instructions+=8;NFSU2_TR(0x55db10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55db12:{NFSU2_TR(0x55db12);
u8 U[4];
w4(U+0,u32(0x778414ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55db17:{NFSU2_TR(0x55db17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55db1d:{NFSU2_TR(0x55db1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55db1e:{NFSU2_TR(0x55db1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55db25:{NFSU2_TR(0x55db25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55db26:{NFSU2_TR(0x55db26);
u8 U[4];
w4(U+0,u32(0x154ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55db2b:{NFSU2_TR(0x55db2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55db30ull));
TAIL_STATIC(0x575620u,575);
}
B55db30:L55db30:{c.instructions+=5;NFSU2_TR(0x55db30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55db33:{NFSU2_TR(0x55db33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B55db37:{NFSU2_TR(0x55db37);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55db39:{NFSU2_TR(0x55db39);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55db41:{NFSU2_TR(0x55db41);
if(r1(R+518)){{goto L55db5e;}}
}
B55db43:L55db43:{c.instructions+=4;NFSU2_TR(0x55db43);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55db47:{NFSU2_TR(0x55db47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55db48:{NFSU2_TR(0x55db48);
__builtin_memmove((R+4),(R+0),4);
}
B55db4a:{NFSU2_TR(0x55db4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55db4full));
TAIL_STATIC(0x55ac10u,55a);
}
B55db4f:L55db4f:{c.instructions+=4;NFSU2_TR(0x55db4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55db53:{NFSU2_TR(0x55db53);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55db5a:{NFSU2_TR(0x55db5a);
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
B55db5d:{NFSU2_TR(0x55db5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55db5e:L55db5e:{c.instructions+=5;NFSU2_TR(0x55db5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55db62:{NFSU2_TR(0x55db62);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55db64:{NFSU2_TR(0x55db64);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55db6b:{NFSU2_TR(0x55db6b);
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
B55db6e:{NFSU2_TR(0x55db6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55db70:L55db70:{c.instructions+=8;NFSU2_TR(0x55db70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55db72:{NFSU2_TR(0x55db72);
u8 U[4];
w4(U+0,u32(0x778434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55db77:{NFSU2_TR(0x55db77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55db7d:{NFSU2_TR(0x55db7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55db7e:{NFSU2_TR(0x55db7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55db85:{NFSU2_TR(0x55db85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55db86:{NFSU2_TR(0x55db86);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55db88:{NFSU2_TR(0x55db88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55db8dull));
TAIL_STATIC(0x575620u,575);
}
B55db8d:L55db8d:{c.instructions+=5;NFSU2_TR(0x55db8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55db90:{NFSU2_TR(0x55db90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B55db94:{NFSU2_TR(0x55db94);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55db96:{NFSU2_TR(0x55db96);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B55db9e:{NFSU2_TR(0x55db9e);
if(r1(R+518)){{goto L55dbbb;}}
}
B55dba0:L55dba0:{c.instructions+=4;NFSU2_TR(0x55dba0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55dba4:{NFSU2_TR(0x55dba4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dba5:{NFSU2_TR(0x55dba5);
__builtin_memmove((R+4),(R+0),4);
}
B55dba7:{NFSU2_TR(0x55dba7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55dbacull));
TAIL_STATIC(0x55ad70u,55a);
}
B55dbac:L55dbac:{c.instructions+=4;NFSU2_TR(0x55dbac);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55dbb0:{NFSU2_TR(0x55dbb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55dbb7:{NFSU2_TR(0x55dbb7);
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
B55dbba:{NFSU2_TR(0x55dbba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55dbbb:L55dbbb:{c.instructions+=5;NFSU2_TR(0x55dbbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55dbbf:{NFSU2_TR(0x55dbbf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55dbc1:{NFSU2_TR(0x55dbc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55dbc8:{NFSU2_TR(0x55dbc8);
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
B55dbcb:{NFSU2_TR(0x55dbcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55dbd0:L55dbd0:{c.instructions+=4;NFSU2_TR(0x55dbd0);
__builtin_memmove((R+0),gp(0x83a9c0),1);
}
B55dbd5:{NFSU2_TR(0x55dbd5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55dbd7:{NFSU2_TR(0x55dbd7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dbd8:{NFSU2_TR(0x55dbd8);
if(r1(R+518)){{goto L55dbf4;}}
}
B55dbda:L55dbda:{c.instructions+=3;NFSU2_TR(0x55dbda);
__builtin_memmove((R+0),gp(0x83a9c4),4);
}
B55dbdf:{NFSU2_TR(0x55dbdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55dbe1:{NFSU2_TR(0x55dbe1);
if(r1(R+518)){{goto L55dbf4;}}
}
B55dbe3:L55dbe3:{c.instructions+=4;NFSU2_TR(0x55dbe3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55dbe7:{NFSU2_TR(0x55dbe7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dbe8:{NFSU2_TR(0x55dbe8);
w4(R+4,u32(0x83a7b0ull));
}
B55dbed:{NFSU2_TR(0x55dbed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55dbf2ull));
TAIL_STATIC(0x551270u,551);
}
B55dbf2:L55dbf2:{c.instructions+=1;NFSU2_TR(0x55dbf2);
{goto L55dc03;}
}
B55dbf4:L55dbf4:{c.instructions+=4;NFSU2_TR(0x55dbf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55dbf8:{NFSU2_TR(0x55dbf8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dbf9:{NFSU2_TR(0x55dbf9);
w4(R+4,u32(0x83a7b0ull));
}
B55dbfe:{NFSU2_TR(0x55dbfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55dc03ull));
TAIL_STATIC(0x558b70u,558);
}
B55dc03:L55dc03:{c.instructions+=3;NFSU2_TR(0x55dc03);
__builtin_memmove((R+0),gp(0x865934),1);
}
B55dc08:{NFSU2_TR(0x55dc08);
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
B55dc0a:{NFSU2_TR(0x55dc0a);
if(r1(R+518)){{goto L55dc17;}}
}
B55dc0c:L55dc0c:{c.instructions+=3;NFSU2_TR(0x55dc0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dc0d:{NFSU2_TR(0x55dc0d);
w4(R+4,u32(0x865930ull));
}
B55dc12:{NFSU2_TR(0x55dc12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55dc17ull));
TAIL_STATIC(0x57b8b0u,57b);
}
B55dc17:L55dc17:{c.instructions+=2;NFSU2_TR(0x55dc17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55dc18:{NFSU2_TR(0x55dc18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55dc20:L55dc20:{c.instructions+=3;NFSU2_TR(0x55dc20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55dc24:{NFSU2_TR(0x55dc24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dc25:{NFSU2_TR(0x55dc25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55dc2aull));
TAIL_STATIC(0x51bb70u,51b);
}
B55dc2a:L55dc2a:{c.instructions+=2;NFSU2_TR(0x55dc2a);
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
B55dc2c:{NFSU2_TR(0x55dc2c);
if(r1(R+518)){{goto L55dc4d;}}
}
B55dc2e:L55dc2e:{c.instructions+=3;NFSU2_TR(0x55dc2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55dc31:{NFSU2_TR(0x55dc31);
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
B55dc33:{NFSU2_TR(0x55dc33);
if(r1(R+518)){{goto L55dc4d;}}
}
B55dc35:L55dc35:{c.instructions+=3;NFSU2_TR(0x55dc35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55dc38:{NFSU2_TR(0x55dc38);
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
B55dc3a:{NFSU2_TR(0x55dc3a);
if(r1(R+518)){{goto L55dc4d;}}
}
B55dc3c:L55dc3c:{c.instructions+=7;NFSU2_TR(0x55dc3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dc3d:{NFSU2_TR(0x55dc3d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55dc41:{NFSU2_TR(0x55dc41);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dc43:{NFSU2_TR(0x55dc43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dc45:{NFSU2_TR(0x55dc45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dc46:{NFSU2_TR(0x55dc46);
__builtin_memmove((R+4),(R+0),4);
}
B55dc48:{NFSU2_TR(0x55dc48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55dc4dull));
TAIL_STATIC(0x55b5c0u,55b);
}
B55dc4d:L55dc4d:{c.instructions+=1;NFSU2_TR(0x55dc4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55dc50:L55dc50:{c.instructions+=6;NFSU2_TR(0x55dc50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55dc53:{NFSU2_TR(0x55dc53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B55dc59:{NFSU2_TR(0x55dc59);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dc5a:{NFSU2_TR(0x55dc5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B55dc5d:{NFSU2_TR(0x55dc5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dc5e:{NFSU2_TR(0x55dc5e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B55dc60:L55dc60:{c.instructions+=2;NFSU2_TR(0x55dc60);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55dc62:{NFSU2_TR(0x55dc62);
if(r1(R+518)){{goto L55dc69;}}
}
B55dc64:L55dc64:{c.instructions+=2;NFSU2_TR(0x55dc64);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B55dc67:{NFSU2_TR(0x55dc67);
{goto L55dc70;}
}
B55dc69:L55dc69:{c.instructions+=2;NFSU2_TR(0x55dc69);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55dc6b:{NFSU2_TR(0x55dc6b);
{goto L55dc70;}
}
B55dc70:L55dc70:{c.instructions+=2;NFSU2_TR(0x55dc70);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55dc72:{NFSU2_TR(0x55dc72);
if(r1(R+518)){{goto L55dc79;}}
}
B55dc74:L55dc74:{c.instructions+=2;NFSU2_TR(0x55dc74);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B55dc77:{NFSU2_TR(0x55dc77);
{goto L55dc7b;}
}
B55dc79:L55dc79:{c.instructions+=1;NFSU2_TR(0x55dc79);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B55dc7b:L55dc7b:{c.instructions+=2;NFSU2_TR(0x55dc7b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55dc7d:{NFSU2_TR(0x55dc7d);
if(r1(R+518)){{goto L55dc95;}}
}
B55dc7f:L55dc7f:{c.instructions+=3;NFSU2_TR(0x55dc7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55dc82:{NFSU2_TR(0x55dc82);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55dc84:{NFSU2_TR(0x55dc84);
if(r1(R+518)){{goto L55dc90;}}
}
B55dc86:L55dc86:{c.instructions+=2;NFSU2_TR(0x55dc86);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B55dc89:{NFSU2_TR(0x55dc89);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L55dc90;}}
}
B55dc8b:L55dc8b:{c.instructions+=2;NFSU2_TR(0x55dc8b);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B55dc8f:{NFSU2_TR(0x55dc8f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B55dc90:L55dc90:{c.instructions+=2;NFSU2_TR(0x55dc90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55dc93:{NFSU2_TR(0x55dc93);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55dc60u);}goto L55dc60;}
}
B55dc95:L55dc95:{c.instructions+=3;NFSU2_TR(0x55dc95);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B55dc97:{NFSU2_TR(0x55dc97);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55dc99:{NFSU2_TR(0x55dc99);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L55dcd3;}}
}
B55dc9b:L55dc9b:{c.instructions+=5;NFSU2_TR(0x55dc9b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dc9c:{NFSU2_TR(0x55dc9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B55dca3:{NFSU2_TR(0x55dca3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dca4:{NFSU2_TR(0x55dca4);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55dcab:{NFSU2_TR(0x55dcab);
{goto L55dcb0;}
}
B55dcb0:L55dcb0:{c.instructions+=4;NFSU2_TR(0x55dcb0);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B55dcb4:{NFSU2_TR(0x55dcb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55dcb7:{NFSU2_TR(0x55dcb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55dcb9:{NFSU2_TR(0x55dcb9);
if(r1(R+518)){{goto L55dccc;}}
}
B55dcbb:L55dcbb:{c.instructions+=3;NFSU2_TR(0x55dcbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55dcbe:{NFSU2_TR(0x55dcbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55dcc0:{NFSU2_TR(0x55dcc0);
if(r1(R+518)){{goto L55dccc;}}
}
B55dcc2:L55dcc2:{c.instructions+=5;NFSU2_TR(0x55dcc2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dcc3:{NFSU2_TR(0x55dcc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dcc4:{NFSU2_TR(0x55dcc4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dcc6:{NFSU2_TR(0x55dcc6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dcc7:{NFSU2_TR(0x55dcc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55dcccull));
TAIL_STATIC(0x55b5c0u,55b);
}
B55dccc:L55dccc:{c.instructions+=3;NFSU2_TR(0x55dccc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B55dccd:{NFSU2_TR(0x55dccd);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B55dccf:{NFSU2_TR(0x55dccf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55dcb0u);}goto L55dcb0;}}
}
B55dcd1:L55dcd1:{c.instructions+=2;NFSU2_TR(0x55dcd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55dcd2:{NFSU2_TR(0x55dcd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55dcd3:L55dcd3:{c.instructions+=4;NFSU2_TR(0x55dcd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55dcd4:{NFSU2_TR(0x55dcd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55dcd5:{NFSU2_TR(0x55dcd5);
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
B55dcdb:{NFSU2_TR(0x55dcdb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55dce0:L55dce0:{c.instructions+=8;NFSU2_TR(0x55dce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55dce3:{NFSU2_TR(0x55dce3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55dce5:{NFSU2_TR(0x55dce5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dce6:{NFSU2_TR(0x55dce6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dce7:{NFSU2_TR(0x55dce7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55dcea:{NFSU2_TR(0x55dcea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dceb:{NFSU2_TR(0x55dceb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dcec:{NFSU2_TR(0x55dcec);
if(r1(R+518)){{goto L55dcf3;}}
}
B55dcee:L55dcee:{c.instructions+=2;NFSU2_TR(0x55dcee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B55dcf1:{NFSU2_TR(0x55dcf1);
{goto L55dcf5;}
}
B55dcf3:L55dcf3:{c.instructions+=1;NFSU2_TR(0x55dcf3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B55dcf5:L55dcf5:{c.instructions+=3;NFSU2_TR(0x55dcf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B55dcf9:{NFSU2_TR(0x55dcf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B55dcfd:{NFSU2_TR(0x55dcfd);
__builtin_memmove((R+4),(R+4),4);
}
B55dd00:L55dd00:{c.instructions+=2;NFSU2_TR(0x55dd00);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55dd02:{NFSU2_TR(0x55dd02);
if(r1(R+518)){{goto L55dd09;}}
}
B55dd04:L55dd04:{c.instructions+=2;NFSU2_TR(0x55dd04);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B55dd07:{NFSU2_TR(0x55dd07);
{goto L55dd0b;}
}
B55dd09:L55dd09:{c.instructions+=1;NFSU2_TR(0x55dd09);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55dd0b:L55dd0b:{c.instructions+=2;NFSU2_TR(0x55dd0b);
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
B55dd0d:{NFSU2_TR(0x55dd0d);
if(r1(R+518)){{goto L55dd42;}}
}
B55dd0f:L55dd0f:{c.instructions+=3;NFSU2_TR(0x55dd0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55dd12:{NFSU2_TR(0x55dd12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55dd14:{NFSU2_TR(0x55dd14);
if(r1(R+518)){{goto L55dd32;}}
}
B55dd16:L55dd16:{c.instructions+=2;NFSU2_TR(0x55dd16);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B55dd18:{NFSU2_TR(0x55dd18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55dd32;}}
}
B55dd1a:L55dd1a:{c.instructions+=3;NFSU2_TR(0x55dd1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55dd1d:{NFSU2_TR(0x55dd1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55dd1f:{NFSU2_TR(0x55dd1f);
if(r1(R+518)){{goto L55dd32;}}
}
B55dd21:L55dd21:{c.instructions+=7;NFSU2_TR(0x55dd21);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55dd25:{NFSU2_TR(0x55dd25);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55dd29:{NFSU2_TR(0x55dd29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dd2a:{NFSU2_TR(0x55dd2a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dd2b:{NFSU2_TR(0x55dd2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dd2c:{NFSU2_TR(0x55dd2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dd2d:{NFSU2_TR(0x55dd2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55dd32ull));
TAIL_STATIC(0x55b5c0u,55b);
}
B55dd32:L55dd32:{c.instructions+=3;NFSU2_TR(0x55dd32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55dd35:{NFSU2_TR(0x55dd35);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55dd37:{NFSU2_TR(0x55dd37);
if(r1(R+518)){{goto L55dd3e;}}
}
B55dd39:L55dd39:{c.instructions+=2;NFSU2_TR(0x55dd39);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B55dd3c:{NFSU2_TR(0x55dd3c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55dd00u);}goto L55dd00;}
}
B55dd3e:L55dd3e:{c.instructions+=2;NFSU2_TR(0x55dd3e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B55dd40:{NFSU2_TR(0x55dd40);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55dd00u);}goto L55dd00;}
}
B55dd42:L55dd42:{c.instructions+=5;NFSU2_TR(0x55dd42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55dd43:{NFSU2_TR(0x55dd43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55dd44:{NFSU2_TR(0x55dd44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B55dd45:{NFSU2_TR(0x55dd45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55dd46:{NFSU2_TR(0x55dd46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55dd50:L55dd50:{c.instructions+=3;NFSU2_TR(0x55dd50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55dd54:{NFSU2_TR(0x55dd54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5922615ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55dd59:{NFSU2_TR(0x55dd59);
if(r1(R+518)){{goto L55dd87;}}
}
B55dd5b:L55dd5b:{c.instructions+=2;NFSU2_TR(0x55dd5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7e4d1288ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55dd60:{NFSU2_TR(0x55dd60);
if(r1(R+518)){{goto L55dd70;}}
}
B55dd62:L55dd62:{c.instructions+=3;NFSU2_TR(0x55dd62);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55dd66:{NFSU2_TR(0x55dd66);
w4(R+4,u32(0x8637b0ull));
}
B55dd6b:{NFSU2_TR(0x55dd6b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55dce0u);}goto L55dce0;}
}
B55dd70:L55dd70:{c.instructions+=2;NFSU2_TR(0x55dd70);
u8 U[4];
w4(U+0,u32(0x79d72cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dd75:{NFSU2_TR(0x55dd75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55dd7aull));
TAIL_STATIC(0x50d510u,50d);
}
B55dd7a:L55dd7a:{c.instructions+=4;NFSU2_TR(0x55dd7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55dd7d:{NFSU2_TR(0x55dd7d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55dd81:{NFSU2_TR(0x55dd81);
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
B55dd84:{NFSU2_TR(0x55dd84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55dd87:L55dd87:{c.instructions+=2;NFSU2_TR(0x55dd87);
u8 U[4];
w4(U+0,u32(0x79d718ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dd8c:{NFSU2_TR(0x55dd8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55dd91ull));
TAIL_STATIC(0x50d510u,50d);
}
B55dd91:L55dd91:{c.instructions+=4;NFSU2_TR(0x55dd91);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55dd94:{NFSU2_TR(0x55dd94);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B55dd98:{NFSU2_TR(0x55dd98);
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
B55dd9b:{NFSU2_TR(0x55dd9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55dda0:L55dda0:{c.instructions+=4;NFSU2_TR(0x55dda0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55dda4:{NFSU2_TR(0x55dda4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dda5:{NFSU2_TR(0x55dda5);
w4(R+4,u32(0x8637b0ull));
}
B55ddaa:{NFSU2_TR(0x55ddaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ddafull));
TAIL_STATIC(0x51bb70u,51b);
}
B55ddaf:L55ddaf:{c.instructions+=2;NFSU2_TR(0x55ddaf);
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
B55ddb1:{NFSU2_TR(0x55ddb1);
if(r1(R+518)){{goto L55ddd2;}}
}
B55ddb3:L55ddb3:{c.instructions+=3;NFSU2_TR(0x55ddb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ddb6:{NFSU2_TR(0x55ddb6);
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
B55ddb8:{NFSU2_TR(0x55ddb8);
if(r1(R+518)){{goto L55ddd2;}}
}
B55ddba:L55ddba:{c.instructions+=3;NFSU2_TR(0x55ddba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55ddbd:{NFSU2_TR(0x55ddbd);
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
B55ddbf:{NFSU2_TR(0x55ddbf);
if(r1(R+518)){{goto L55ddd2;}}
}
B55ddc1:L55ddc1:{c.instructions+=7;NFSU2_TR(0x55ddc1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ddc2:{NFSU2_TR(0x55ddc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55ddc6:{NFSU2_TR(0x55ddc6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ddc8:{NFSU2_TR(0x55ddc8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ddca:{NFSU2_TR(0x55ddca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ddcb:{NFSU2_TR(0x55ddcb);
__builtin_memmove((R+4),(R+0),4);
}
B55ddcd:{NFSU2_TR(0x55ddcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ddd2ull));
TAIL_STATIC(0x55b5c0u,55b);
}
B55ddd2:L55ddd2:{c.instructions+=1;NFSU2_TR(0x55ddd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55dde0:L55dde0:{c.instructions+=6;NFSU2_TR(0x55dde0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55dde4:{NFSU2_TR(0x55dde4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55dde8:{NFSU2_TR(0x55dde8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dde9:{NFSU2_TR(0x55dde9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55ddea:{NFSU2_TR(0x55ddea);
w4(R+4,u32(0x8637b0ull));
}
B55ddef:{NFSU2_TR(0x55ddef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55ddf4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55dc50u);}goto L55dc50;}
}
B55ddf4:L55ddf4:{c.instructions+=1;NFSU2_TR(0x55ddf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55de00:L55de00:{c.instructions+=5;NFSU2_TR(0x55de00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55de01:{NFSU2_TR(0x55de01);
__builtin_memmove((R+28),(R+4),4);
}
B55de03:{NFSU2_TR(0x55de03);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55de06:{NFSU2_TR(0x55de06);
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
B55de08:{NFSU2_TR(0x55de08);
if(r1(R+518)){{goto L55df97;}}
}
B55de0e:L55de0e:{c.instructions+=6;NFSU2_TR(0x55de0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55de11:{NFSU2_TR(0x55de11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55de12:{NFSU2_TR(0x55de12);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+12),(U+0),4);
}
B55de15:{NFSU2_TR(0x55de15);
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
B55de17:{NFSU2_TR(0x55de17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55de18:{NFSU2_TR(0x55de18);
if(r1(R+518)){{goto L55df95;}}
}
B55de1e:L55de1e:{c.instructions+=3;NFSU2_TR(0x55de1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55de21:{NFSU2_TR(0x55de21);
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
B55de23:{NFSU2_TR(0x55de23);
if(r1(R+518)){{goto L55df95;}}
}
B55de29:L55de29:{c.instructions+=3;NFSU2_TR(0x55de29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B55de2b:{NFSU2_TR(0x55de2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55de2d:{NFSU2_TR(0x55de2d);
if(r1(R+518)){{goto L55de34;}}
}
B55de2f:L55de2f:{c.instructions+=2;NFSU2_TR(0x55de2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B55de32:{NFSU2_TR(0x55de32);
{goto L55de36;}
}
B55de34:L55de34:{c.instructions+=1;NFSU2_TR(0x55de34);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B55de36:L55de36:{c.instructions+=2;NFSU2_TR(0x55de36);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55de38:{NFSU2_TR(0x55de38);
if(r1(R+518)){{goto L55de3f;}}
}
B55de3a:L55de3a:{c.instructions+=2;NFSU2_TR(0x55de3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B55de3d:{NFSU2_TR(0x55de3d);
{goto L55de41;}
}
B55de3f:L55de3f:{c.instructions+=1;NFSU2_TR(0x55de3f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B55de41:L55de41:{c.instructions+=2;NFSU2_TR(0x55de41);
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
B55de43:{NFSU2_TR(0x55de43);
if(r1(R+518)){{goto L55df95;}}
}
B55de49:L55de49:{c.instructions+=3;NFSU2_TR(0x55de49);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B55de4c:{NFSU2_TR(0x55de4c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55de4e:{NFSU2_TR(0x55de4e);
if(r1(R+518)){{goto L55de60;}}
}
B55de50:L55de50:{c.instructions+=3;NFSU2_TR(0x55de50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55de53:{NFSU2_TR(0x55de53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55de54:{NFSU2_TR(0x55de54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55de59ull));
TAIL_STATIC(0x52d100u,52d);
}
B55de59:L55de59:{c.instructions+=3;NFSU2_TR(0x55de59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55de5c:{NFSU2_TR(0x55de5c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55de5e:{NFSU2_TR(0x55de5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55de6c;}}
}
B55de60:L55de60:{c.instructions+=3;NFSU2_TR(0x55de60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B55de63:{NFSU2_TR(0x55de63);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55de65:{NFSU2_TR(0x55de65);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55de34u);}goto L55de34;}}
}
B55de67:L55de67:{c.instructions+=2;NFSU2_TR(0x55de67);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
}
B55de6a:{NFSU2_TR(0x55de6a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55de36u);}goto L55de36;}
}
B55de6c:L55de6c:{c.instructions+=3;NFSU2_TR(0x55de6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55de6f:{NFSU2_TR(0x55de6f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55de70:{NFSU2_TR(0x55de70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55de75ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55de75:L55de75:{c.instructions+=3;NFSU2_TR(0x55de75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55de78:{NFSU2_TR(0x55de78);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55de7a:{NFSU2_TR(0x55de7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55de8b;}}
}
B55de7c:L55de7c:{c.instructions+=4;NFSU2_TR(0x55de7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55de7f:{NFSU2_TR(0x55de7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55de80:{NFSU2_TR(0x55de80);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55de83:{NFSU2_TR(0x55de83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55de88ull));
TAIL_STATIC(0x52cf60u,52c);
}
B55de88:L55de88:{c.instructions+=1;NFSU2_TR(0x55de88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55de8b:L55de8b:{c.instructions+=3;NFSU2_TR(0x55de8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55de8e:{NFSU2_TR(0x55de8e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55de90:{NFSU2_TR(0x55de90);
if(r1(R+518)){{goto L55dedd;}}
}
B55de92:L55de92:{c.instructions+=3;NFSU2_TR(0x55de92);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B55de98:{NFSU2_TR(0x55de98);
u8 U[4];
w4(U+0,u32(0x4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55de9a:{NFSU2_TR(0x55de9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55de9full));
TAIL_STATIC(0x458520u,458);
}
B55de9f:L55de9f:{c.instructions+=11;NFSU2_TR(0x55de9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55dea2:{NFSU2_TR(0x55dea2);
u8 U[4];
w4(U+0,u32(0xd5d46fdfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dea7:{NFSU2_TR(0x55dea7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dea9:{NFSU2_TR(0x55dea9);
u8 U[4];
w4(U+0,u32(0x42ca53fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55deae:{NFSU2_TR(0x55deae);
u8 U[4];
w4(U+0,u32(0x42ca53fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55deb3:{NFSU2_TR(0x55deb3);
u8 U[4];
w4(U+0,u32(0x58c27533ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55deb8:{NFSU2_TR(0x55deb8);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55debd:{NFSU2_TR(0x55debd);
u8 U[4];
w4(U+0,u32(0x545c5292ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dec2:{NFSU2_TR(0x55dec2);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dec7:{NFSU2_TR(0x55dec7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dec8:{NFSU2_TR(0x55dec8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55decdull));
TAIL_STATIC(0x558790u,558);
}
B55decd:L55decd:{c.instructions+=7;NFSU2_TR(0x55decd);
__builtin_memmove((R+8),gp(0x8651ac),4);
}
B55ded3:{NFSU2_TR(0x55ded3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55ded6:{NFSU2_TR(0x55ded6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55ded7:{NFSU2_TR(0x55ded7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55ded8:{NFSU2_TR(0x55ded8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55dedb:{NFSU2_TR(0x55dedb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55dedc:{NFSU2_TR(0x55dedc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55dedd:L55dedd:{c.instructions+=2;NFSU2_TR(0x55dedd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B55dedf:{NFSU2_TR(0x55dedf);
if(r1(R+518)){{goto L55df1f;}}
}
B55dee1:L55dee1:{c.instructions+=11;NFSU2_TR(0x55dee1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55dee4:{NFSU2_TR(0x55dee4);
u8 U[4];
w4(U+0,u32(0x9de6b485ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dee9:{NFSU2_TR(0x55dee9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55deeb:{NFSU2_TR(0x55deeb);
u8 U[4];
w4(U+0,u32(0x42ca53fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55def0:{NFSU2_TR(0x55def0);
u8 U[4];
w4(U+0,u32(0x42ca53fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55def5:{NFSU2_TR(0x55def5);
u8 U[4];
w4(U+0,u32(0x919b1dd9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55defa:{NFSU2_TR(0x55defa);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55deff:{NFSU2_TR(0x55deff);
u8 U[4];
w4(U+0,u32(0x1c101778ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55df04:{NFSU2_TR(0x55df04);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55df09:{NFSU2_TR(0x55df09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55df0a:{NFSU2_TR(0x55df0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55df0full));
TAIL_STATIC(0x558790u,558);
}
B55df0f:L55df0f:{c.instructions+=7;NFSU2_TR(0x55df0f);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B55df15:{NFSU2_TR(0x55df15);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55df18:{NFSU2_TR(0x55df18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55df19:{NFSU2_TR(0x55df19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55df1a:{NFSU2_TR(0x55df1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55df1d:{NFSU2_TR(0x55df1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55df1e:{NFSU2_TR(0x55df1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55df1f:L55df1f:{c.instructions+=3;NFSU2_TR(0x55df1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55df20:{NFSU2_TR(0x55df20);
__builtin_memmove((R+4),(R+28),4);
}
B55df22:{NFSU2_TR(0x55df22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55df27ull));
TAIL_STATIC(0x52d170u,52d);
}
B55df27:L55df27:{c.instructions+=2;NFSU2_TR(0x55df27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55df2c:{NFSU2_TR(0x55df2c);
if(r1(R+518)){{goto L55df35;}}
}
B55df2e:L55df2e:{c.instructions+=4;NFSU2_TR(0x55df2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55df31:{NFSU2_TR(0x55df31);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55df32:{NFSU2_TR(0x55df32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55df33:{NFSU2_TR(0x55df33);
{goto L55df84;}
}
B55df35:L55df35:{c.instructions+=3;NFSU2_TR(0x55df35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55df38:{NFSU2_TR(0x55df38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55df39:{NFSU2_TR(0x55df39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55df3eull));
TAIL_STATIC(0x51cd60u,51c);
}
B55df3e:L55df3e:{c.instructions+=3;NFSU2_TR(0x55df3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55df41:{NFSU2_TR(0x55df41);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55df43:{NFSU2_TR(0x55df43);
if(r1(R+518)){{goto L55df7b;}}
}
B55df45:L55df45:{c.instructions+=3;NFSU2_TR(0x55df45);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B55df48:{NFSU2_TR(0x55df48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55df49:{NFSU2_TR(0x55df49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55df4eull));
TAIL_STATIC(0x52cef0u,52c);
}
B55df4e:L55df4e:{c.instructions+=5;NFSU2_TR(0x55df4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B55df51:{NFSU2_TR(0x55df51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55df54:{NFSU2_TR(0x55df54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55df55:{NFSU2_TR(0x55df55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55df56:{NFSU2_TR(0x55df56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55df5bull));
TAIL_STATIC(0x51cd60u,51c);
}
B55df5b:L55df5b:{c.instructions+=5;NFSU2_TR(0x55df5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B55df5e:{NFSU2_TR(0x55df5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55df5f:{NFSU2_TR(0x55df5f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55df61:{NFSU2_TR(0x55df61);
u8 U[4];
w4(U+0,u32(0xc407210ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55df66:{NFSU2_TR(0x55df66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55df6bull));
TAIL_STATIC(0x51cdc0u,51c);
}
B55df6b:L55df6b:{c.instructions+=7;NFSU2_TR(0x55df6b);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B55df71:{NFSU2_TR(0x55df71);
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
B55df74:{NFSU2_TR(0x55df74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55df75:{NFSU2_TR(0x55df75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55df76:{NFSU2_TR(0x55df76);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55df79:{NFSU2_TR(0x55df79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55df7a:{NFSU2_TR(0x55df7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55df7b:L55df7b:{c.instructions+=3;NFSU2_TR(0x55df7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55df7e:{NFSU2_TR(0x55df7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55df7f:{NFSU2_TR(0x55df7f);
u8 U[4];
w4(U+0,u32(0x406415e3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55df84:L55df84:{c.instructions+=1;NFSU2_TR(0x55df84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55df89ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x55dda0u);}goto L55dda0;}
}
B55df89:L55df89:{c.instructions+=3;NFSU2_TR(0x55df89);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B55df8f:{NFSU2_TR(0x55df8f);
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
B55df92:{NFSU2_TR(0x55df92);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B55df95:L55df95:{c.instructions+=2;NFSU2_TR(0x55df95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B55df96:{NFSU2_TR(0x55df96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B55df97:L55df97:{c.instructions+=2;NFSU2_TR(0x55df97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B55df98:{NFSU2_TR(0x55df98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B55dfa0:L55dfa0:{c.instructions+=5;NFSU2_TR(0x55dfa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B55dfa4:{NFSU2_TR(0x55dfa4);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9803f6e2ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55dfa9:{NFSU2_TR(0x55dfa9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B55dfaa:{NFSU2_TR(0x55dfaa);
__builtin_memmove((R+24),(R+4),4);
}
B55dfac:{NFSU2_TR(0x55dfac);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x55e0a1u,55e);}
}
B55dfb2:L55dfb2:{c.instructions+=1;NFSU2_TR(0x55dfb2);
if(r1(R+518)){TAIL_STATIC(0x55e072u,55e);}
}
B55dfb8:L55dfb8:{c.instructions+=2;NFSU2_TR(0x55dfb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x58c27533ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B55dfbd:{NFSU2_TR(0x55dfbd);
if(r1(R+518)){TAIL_STATIC(0x55e00bu,55e);}
}
B55dfbf:L55dfbf:{c.instructions+=2;NFSU2_TR(0x55dfbf);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x919b1dd9ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x919b1dd9ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x919b1dd9ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55dfc4:{NFSU2_TR(0x55dfc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x55e115u,55e);}
}
B55dfca:L55dfca:{c.instructions+=3;NFSU2_TR(0x55dfca);
__builtin_memmove((R+0),gp(0x8654a4),4);
}
B55dfcf:{NFSU2_TR(0x55dfcf);
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
B55dfd2:{NFSU2_TR(0x55dfd2);
if(r1(R+518)){{goto L55dffd;}}
}
B55dfd4:L55dfd4:{c.instructions+=2;NFSU2_TR(0x55dfd4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B55dfd7:{NFSU2_TR(0x55dfd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x55e115u,55e);}
}
B55dfdd:L55dfdd:{c.instructions+=2;NFSU2_TR(0x55dfdd);
w4(R+4,u32(0x865480ull));
}
B55dfe2:{NFSU2_TR(0x55dfe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55dfe7ull));
TAIL_STATIC(0x571250u,571);
}
B55dfe7:L55dfe7:{c.instructions+=2;NFSU2_TR(0x55dfe7);
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
B55dfe9:{NFSU2_TR(0x55dfe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L55dffd;}}
}
B55dfeb:L55dfeb:{c.instructions+=2;NFSU2_TR(0x55dfeb);
w4(R+4,u32(0x865480ull));
}
B55dff0:{NFSU2_TR(0x55dff0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x55dff5ull));
TAIL_STATIC(0x571280u,571);
}
B55dff5:L55dff5:{c.instructions+=2;NFSU2_TR(0x55dff5);
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
B55dff7:{NFSU2_TR(0x55dff7);
if(r1(R+518)){TAIL_STATIC(0x55e115u,55e);}
}
B55dffd:L55dffd:{c.instructions+=1;NFSU2_TR(0x55dffd);
s4(0x864f4c,u32(0x1ull));
TAIL_STATIC(0x55e007u,55e);
}
XIT:NFSU2_TR_EXIT(0x55d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
