#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x43d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x43d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 page_43d(Cpu& c){return body_43d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_43d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x43d001:goto L43d001;
case 0x43d004:c.instructions+=1;goto B43d004;
case 0x43d010:goto L43d010;
case 0x43d014:c.instructions+=24;goto B43d014;
case 0x43d017:c.instructions+=23;goto B43d017;
case 0x43d01a:c.instructions+=22;goto B43d01a;
case 0x43d01d:c.instructions+=21;goto B43d01d;
case 0x43d01f:c.instructions+=20;goto B43d01f;
case 0x43d021:c.instructions+=19;goto B43d021;
case 0x43d023:c.instructions+=18;goto B43d023;
case 0x43d025:c.instructions+=17;goto B43d025;
case 0x43d027:c.instructions+=16;goto B43d027;
case 0x43d029:c.instructions+=15;goto B43d029;
case 0x43d02b:c.instructions+=14;goto B43d02b;
case 0x43d02d:c.instructions+=13;goto B43d02d;
case 0x43d02f:c.instructions+=12;goto B43d02f;
case 0x43d031:c.instructions+=11;goto B43d031;
case 0x43d033:c.instructions+=10;goto B43d033;
case 0x43d035:c.instructions+=9;goto B43d035;
case 0x43d037:c.instructions+=8;goto B43d037;
case 0x43d039:c.instructions+=7;goto B43d039;
case 0x43d03b:c.instructions+=6;goto B43d03b;
case 0x43d03d:c.instructions+=5;goto B43d03d;
case 0x43d03f:c.instructions+=4;goto B43d03f;
case 0x43d045:c.instructions+=3;goto B43d045;
case 0x43d047:c.instructions+=2;goto B43d047;
case 0x43d04a:c.instructions+=1;goto B43d04a;
case 0x43d04c:goto L43d04c;
case 0x43d052:c.instructions+=14;goto B43d052;
case 0x43d055:c.instructions+=13;goto B43d055;
case 0x43d059:c.instructions+=12;goto B43d059;
case 0x43d05d:c.instructions+=11;goto B43d05d;
case 0x43d060:c.instructions+=10;goto B43d060;
case 0x43d062:c.instructions+=9;goto B43d062;
case 0x43d064:c.instructions+=8;goto B43d064;
case 0x43d066:c.instructions+=7;goto B43d066;
case 0x43d068:c.instructions+=6;goto B43d068;
case 0x43d06b:c.instructions+=5;goto B43d06b;
case 0x43d06f:c.instructions+=4;goto B43d06f;
case 0x43d071:c.instructions+=3;goto B43d071;
case 0x43d074:c.instructions+=2;goto B43d074;
case 0x43d076:c.instructions+=1;goto B43d076;
case 0x43d077:goto L43d077;
case 0x43d07b:c.instructions+=6;goto B43d07b;
case 0x43d07d:c.instructions+=5;goto B43d07d;
case 0x43d07f:c.instructions+=4;goto B43d07f;
case 0x43d085:c.instructions+=3;goto B43d085;
case 0x43d088:c.instructions+=2;goto B43d088;
case 0x43d08b:c.instructions+=1;goto B43d08b;
case 0x43d090:goto L43d090;
case 0x43d094:c.instructions+=11;goto B43d094;
case 0x43d098:c.instructions+=10;goto B43d098;
case 0x43d09b:c.instructions+=9;goto B43d09b;
case 0x43d09f:c.instructions+=8;goto B43d09f;
case 0x43d0a2:c.instructions+=7;goto B43d0a2;
case 0x43d0a6:c.instructions+=6;goto B43d0a6;
case 0x43d0a8:c.instructions+=5;goto B43d0a8;
case 0x43d0ac:c.instructions+=4;goto B43d0ac;
case 0x43d0ae:c.instructions+=3;goto B43d0ae;
case 0x43d0b0:c.instructions+=2;goto B43d0b0;
case 0x43d0b3:c.instructions+=1;goto B43d0b3;
case 0x43d0c0:goto L43d0c0;
case 0x43d0c4:c.instructions+=16;goto B43d0c4;
case 0x43d0c8:c.instructions+=15;goto B43d0c8;
case 0x43d0cb:c.instructions+=14;goto B43d0cb;
case 0x43d0cf:c.instructions+=13;goto B43d0cf;
case 0x43d0d2:c.instructions+=12;goto B43d0d2;
case 0x43d0d6:c.instructions+=11;goto B43d0d6;
case 0x43d0d9:c.instructions+=10;goto B43d0d9;
case 0x43d0dc:c.instructions+=9;goto B43d0dc;
case 0x43d0e0:c.instructions+=8;goto B43d0e0;
case 0x43d0e2:c.instructions+=7;goto B43d0e2;
case 0x43d0e6:c.instructions+=6;goto B43d0e6;
case 0x43d0e8:c.instructions+=5;goto B43d0e8;
case 0x43d0ea:c.instructions+=4;goto B43d0ea;
case 0x43d0ec:c.instructions+=3;goto B43d0ec;
case 0x43d0ef:c.instructions+=2;goto B43d0ef;
case 0x43d0f2:c.instructions+=1;goto B43d0f2;
case 0x43d100:goto L43d100;
case 0x43d104:c.instructions+=22;goto B43d104;
case 0x43d108:c.instructions+=21;goto B43d108;
case 0x43d10b:c.instructions+=20;goto B43d10b;
case 0x43d10f:c.instructions+=19;goto B43d10f;
case 0x43d112:c.instructions+=18;goto B43d112;
case 0x43d116:c.instructions+=17;goto B43d116;
case 0x43d119:c.instructions+=16;goto B43d119;
case 0x43d11c:c.instructions+=15;goto B43d11c;
case 0x43d120:c.instructions+=14;goto B43d120;
case 0x43d123:c.instructions+=13;goto B43d123;
case 0x43d126:c.instructions+=12;goto B43d126;
case 0x43d12a:c.instructions+=11;goto B43d12a;
case 0x43d12e:c.instructions+=10;goto B43d12e;
case 0x43d130:c.instructions+=9;goto B43d130;
case 0x43d134:c.instructions+=8;goto B43d134;
case 0x43d136:c.instructions+=7;goto B43d136;
case 0x43d13a:c.instructions+=6;goto B43d13a;
case 0x43d13d:c.instructions+=5;goto B43d13d;
case 0x43d13f:c.instructions+=4;goto B43d13f;
case 0x43d141:c.instructions+=3;goto B43d141;
case 0x43d144:c.instructions+=2;goto B43d144;
case 0x43d147:c.instructions+=1;goto B43d147;
case 0x43d150:goto L43d150;
case 0x43d154:c.instructions+=8;goto B43d154;
case 0x43d156:c.instructions+=7;goto B43d156;
case 0x43d15a:c.instructions+=6;goto B43d15a;
case 0x43d15c:c.instructions+=5;goto B43d15c;
case 0x43d15e:c.instructions+=4;goto B43d15e;
case 0x43d162:c.instructions+=3;goto B43d162;
case 0x43d164:c.instructions+=2;goto B43d164;
case 0x43d167:c.instructions+=1;goto B43d167;
case 0x43d169:goto L43d169;
case 0x43d16c:c.instructions+=6;goto B43d16c;
case 0x43d16f:c.instructions+=5;goto B43d16f;
case 0x43d171:c.instructions+=4;goto B43d171;
case 0x43d175:c.instructions+=3;goto B43d175;
case 0x43d177:c.instructions+=2;goto B43d177;
case 0x43d17a:c.instructions+=1;goto B43d17a;
case 0x43d17c:goto L43d17c;
case 0x43d17e:c.instructions+=1;goto B43d17e;
case 0x43d17f:goto L43d17f;
case 0x43d184:c.instructions+=1;goto B43d184;
case 0x43d190:goto L43d190;
case 0x43d194:c.instructions+=8;goto B43d194;
case 0x43d196:c.instructions+=7;goto B43d196;
case 0x43d19a:c.instructions+=6;goto B43d19a;
case 0x43d19c:c.instructions+=5;goto B43d19c;
case 0x43d19e:c.instructions+=4;goto B43d19e;
case 0x43d1a2:c.instructions+=3;goto B43d1a2;
case 0x43d1a4:c.instructions+=2;goto B43d1a4;
case 0x43d1a7:c.instructions+=1;goto B43d1a7;
case 0x43d1a9:goto L43d1a9;
case 0x43d1ac:c.instructions+=6;goto B43d1ac;
case 0x43d1af:c.instructions+=5;goto B43d1af;
case 0x43d1b1:c.instructions+=4;goto B43d1b1;
case 0x43d1b5:c.instructions+=3;goto B43d1b5;
case 0x43d1b7:c.instructions+=2;goto B43d1b7;
case 0x43d1ba:c.instructions+=1;goto B43d1ba;
case 0x43d1bc:goto L43d1bc;
case 0x43d1bf:c.instructions+=6;goto B43d1bf;
case 0x43d1c2:c.instructions+=5;goto B43d1c2;
case 0x43d1c4:c.instructions+=4;goto B43d1c4;
case 0x43d1c8:c.instructions+=3;goto B43d1c8;
case 0x43d1ca:c.instructions+=2;goto B43d1ca;
case 0x43d1cd:c.instructions+=1;goto B43d1cd;
case 0x43d1cf:goto L43d1cf;
case 0x43d1d1:c.instructions+=1;goto B43d1d1;
case 0x43d1d2:goto L43d1d2;
case 0x43d1d7:c.instructions+=1;goto B43d1d7;
case 0x43d1e0:goto L43d1e0;
case 0x43d1e4:c.instructions+=22;goto B43d1e4;
case 0x43d1e8:c.instructions+=21;goto B43d1e8;
case 0x43d1ea:c.instructions+=20;goto B43d1ea;
case 0x43d1ed:c.instructions+=19;goto B43d1ed;
case 0x43d1f0:c.instructions+=18;goto B43d1f0;
case 0x43d1f2:c.instructions+=17;goto B43d1f2;
case 0x43d1f4:c.instructions+=16;goto B43d1f4;
case 0x43d1f7:c.instructions+=15;goto B43d1f7;
case 0x43d1f9:c.instructions+=14;goto B43d1f9;
case 0x43d1fc:c.instructions+=13;goto B43d1fc;
case 0x43d1fe:c.instructions+=12;goto B43d1fe;
case 0x43d200:c.instructions+=11;goto B43d200;
case 0x43d203:c.instructions+=10;goto B43d203;
case 0x43d206:c.instructions+=9;goto B43d206;
case 0x43d209:c.instructions+=8;goto B43d209;
case 0x43d20c:c.instructions+=7;goto B43d20c;
case 0x43d210:c.instructions+=6;goto B43d210;
case 0x43d212:c.instructions+=5;goto B43d212;
case 0x43d214:c.instructions+=4;goto B43d214;
case 0x43d216:c.instructions+=3;goto B43d216;
case 0x43d219:c.instructions+=2;goto B43d219;
case 0x43d21c:c.instructions+=1;goto B43d21c;
case 0x43d220:goto L43d220;
case 0x43d224:c.instructions+=6;goto B43d224;
case 0x43d22a:c.instructions+=5;goto B43d22a;
case 0x43d231:c.instructions+=4;goto B43d231;
case 0x43d235:c.instructions+=3;goto B43d235;
case 0x43d23b:c.instructions+=2;goto B43d23b;
case 0x43d242:c.instructions+=1;goto B43d242;
case 0x43d250:goto L43d250;
case 0x43d254:c.instructions+=11;goto B43d254;
case 0x43d256:c.instructions+=10;goto B43d256;
case 0x43d259:c.instructions+=9;goto B43d259;
case 0x43d25d:c.instructions+=8;goto B43d25d;
case 0x43d25f:c.instructions+=7;goto B43d25f;
case 0x43d261:c.instructions+=6;goto B43d261;
case 0x43d264:c.instructions+=5;goto B43d264;
case 0x43d268:c.instructions+=4;goto B43d268;
case 0x43d26a:c.instructions+=3;goto B43d26a;
case 0x43d26c:c.instructions+=2;goto B43d26c;
case 0x43d26f:c.instructions+=1;goto B43d26f;
case 0x43d270:goto L43d270;
case 0x43d274:c.instructions+=9;goto B43d274;
case 0x43d276:c.instructions+=8;goto B43d276;
case 0x43d277:c.instructions+=7;goto B43d277;
case 0x43d27b:c.instructions+=6;goto B43d27b;
case 0x43d27d:c.instructions+=5;goto B43d27d;
case 0x43d281:c.instructions+=4;goto B43d281;
case 0x43d283:c.instructions+=3;goto B43d283;
case 0x43d285:c.instructions+=2;goto B43d285;
case 0x43d288:c.instructions+=1;goto B43d288;
case 0x43d28a:goto L43d28a;
case 0x43d28c:c.instructions+=1;goto B43d28c;
case 0x43d290:goto L43d290;
case 0x43d293:c.instructions+=6;goto B43d293;
case 0x43d296:c.instructions+=5;goto B43d296;
case 0x43d29a:c.instructions+=4;goto B43d29a;
case 0x43d29c:c.instructions+=3;goto B43d29c;
case 0x43d29e:c.instructions+=2;goto B43d29e;
case 0x43d2a1:c.instructions+=1;goto B43d2a1;
case 0x43d2a3:goto L43d2a3;
case 0x43d2a5:c.instructions+=1;goto B43d2a5;
case 0x43d2a9:goto L43d2a9;
case 0x43d2ab:c.instructions+=7;goto B43d2ab;
case 0x43d2af:c.instructions+=6;goto B43d2af;
case 0x43d2b1:c.instructions+=5;goto B43d2b1;
case 0x43d2b5:c.instructions+=4;goto B43d2b5;
case 0x43d2b7:c.instructions+=3;goto B43d2b7;
case 0x43d2b9:c.instructions+=2;goto B43d2b9;
case 0x43d2bc:c.instructions+=1;goto B43d2bc;
case 0x43d2be:goto L43d2be;
case 0x43d2c0:c.instructions+=1;goto B43d2c0;
case 0x43d2c4:goto L43d2c4;
case 0x43d2c7:c.instructions+=6;goto B43d2c7;
case 0x43d2ca:c.instructions+=5;goto B43d2ca;
case 0x43d2ce:c.instructions+=4;goto B43d2ce;
case 0x43d2d0:c.instructions+=3;goto B43d2d0;
case 0x43d2d2:c.instructions+=2;goto B43d2d2;
case 0x43d2d5:c.instructions+=1;goto B43d2d5;
case 0x43d2d7:goto L43d2d7;
case 0x43d2d9:c.instructions+=1;goto B43d2d9;
case 0x43d2dd:goto L43d2dd;
case 0x43d2df:c.instructions+=7;goto B43d2df;
case 0x43d2e1:c.instructions+=6;goto B43d2e1;
case 0x43d2e3:c.instructions+=5;goto B43d2e3;
case 0x43d2e6:c.instructions+=4;goto B43d2e6;
case 0x43d2e7:c.instructions+=3;goto B43d2e7;
case 0x43d2e9:c.instructions+=2;goto B43d2e9;
case 0x43d2ec:c.instructions+=1;goto B43d2ec;
case 0x43d2f0:goto L43d2f0;
case 0x43d2f4:c.instructions+=10;goto B43d2f4;
case 0x43d2f6:c.instructions+=9;goto B43d2f6;
case 0x43d2f7:c.instructions+=8;goto B43d2f7;
case 0x43d2fb:c.instructions+=7;goto B43d2fb;
case 0x43d2ff:c.instructions+=6;goto B43d2ff;
case 0x43d301:c.instructions+=5;goto B43d301;
case 0x43d305:c.instructions+=4;goto B43d305;
case 0x43d307:c.instructions+=3;goto B43d307;
case 0x43d309:c.instructions+=2;goto B43d309;
case 0x43d30c:c.instructions+=1;goto B43d30c;
case 0x43d30e:goto L43d30e;
case 0x43d310:c.instructions+=1;goto B43d310;
case 0x43d314:goto L43d314;
case 0x43d317:c.instructions+=7;goto B43d317;
case 0x43d31b:c.instructions+=6;goto B43d31b;
case 0x43d31e:c.instructions+=5;goto B43d31e;
case 0x43d322:c.instructions+=4;goto B43d322;
case 0x43d324:c.instructions+=3;goto B43d324;
case 0x43d326:c.instructions+=2;goto B43d326;
case 0x43d329:c.instructions+=1;goto B43d329;
case 0x43d32b:goto L43d32b;
case 0x43d32d:c.instructions+=1;goto B43d32d;
case 0x43d331:goto L43d331;
case 0x43d335:c.instructions+=8;goto B43d335;
case 0x43d339:c.instructions+=7;goto B43d339;
case 0x43d33b:c.instructions+=6;goto B43d33b;
case 0x43d33d:c.instructions+=5;goto B43d33d;
case 0x43d341:c.instructions+=4;goto B43d341;
case 0x43d343:c.instructions+=3;goto B43d343;
case 0x43d345:c.instructions+=2;goto B43d345;
case 0x43d348:c.instructions+=1;goto B43d348;
case 0x43d34a:goto L43d34a;
case 0x43d34c:c.instructions+=1;goto B43d34c;
case 0x43d350:goto L43d350;
case 0x43d354:c.instructions+=7;goto B43d354;
case 0x43d357:c.instructions+=6;goto B43d357;
case 0x43d35a:c.instructions+=5;goto B43d35a;
case 0x43d35e:c.instructions+=4;goto B43d35e;
case 0x43d360:c.instructions+=3;goto B43d360;
case 0x43d362:c.instructions+=2;goto B43d362;
case 0x43d365:c.instructions+=1;goto B43d365;
case 0x43d367:goto L43d367;
case 0x43d369:c.instructions+=1;goto B43d369;
case 0x43d36d:goto L43d36d;
case 0x43d36f:c.instructions+=7;goto B43d36f;
case 0x43d371:c.instructions+=6;goto B43d371;
case 0x43d373:c.instructions+=5;goto B43d373;
case 0x43d376:c.instructions+=4;goto B43d376;
case 0x43d377:c.instructions+=3;goto B43d377;
case 0x43d379:c.instructions+=2;goto B43d379;
case 0x43d37c:c.instructions+=1;goto B43d37c;
case 0x43d380:goto L43d380;
case 0x43d384:c.instructions+=8;goto B43d384;
case 0x43d386:c.instructions+=7;goto B43d386;
case 0x43d38a:c.instructions+=6;goto B43d38a;
case 0x43d38c:c.instructions+=5;goto B43d38c;
case 0x43d390:c.instructions+=4;goto B43d390;
case 0x43d392:c.instructions+=3;goto B43d392;
case 0x43d394:c.instructions+=2;goto B43d394;
case 0x43d397:c.instructions+=1;goto B43d397;
case 0x43d399:goto L43d399;
case 0x43d39b:c.instructions+=1;goto B43d39b;
case 0x43d39f:goto L43d39f;
case 0x43d3a2:c.instructions+=6;goto B43d3a2;
case 0x43d3a5:c.instructions+=5;goto B43d3a5;
case 0x43d3a9:c.instructions+=4;goto B43d3a9;
case 0x43d3ab:c.instructions+=3;goto B43d3ab;
case 0x43d3ad:c.instructions+=2;goto B43d3ad;
case 0x43d3b0:c.instructions+=1;goto B43d3b0;
case 0x43d3b2:goto L43d3b2;
case 0x43d3b4:c.instructions+=1;goto B43d3b4;
case 0x43d3b8:goto L43d3b8;
case 0x43d3bc:c.instructions+=9;goto B43d3bc;
case 0x43d3bd:c.instructions+=8;goto B43d3bd;
case 0x43d3c1:c.instructions+=7;goto B43d3c1;
case 0x43d3c3:c.instructions+=6;goto B43d3c3;
case 0x43d3c5:c.instructions+=5;goto B43d3c5;
case 0x43d3c9:c.instructions+=4;goto B43d3c9;
case 0x43d3cb:c.instructions+=3;goto B43d3cb;
case 0x43d3cd:c.instructions+=2;goto B43d3cd;
case 0x43d3d0:c.instructions+=1;goto B43d3d0;
case 0x43d3d2:goto L43d3d2;
case 0x43d3d4:c.instructions+=1;goto B43d3d4;
case 0x43d3d8:goto L43d3d8;
case 0x43d3db:c.instructions+=7;goto B43d3db;
case 0x43d3dc:c.instructions+=6;goto B43d3dc;
case 0x43d3df:c.instructions+=5;goto B43d3df;
case 0x43d3e3:c.instructions+=4;goto B43d3e3;
case 0x43d3e5:c.instructions+=3;goto B43d3e5;
case 0x43d3e7:c.instructions+=2;goto B43d3e7;
case 0x43d3ea:c.instructions+=1;goto B43d3ea;
case 0x43d3ec:goto L43d3ec;
case 0x43d3ee:c.instructions+=1;goto B43d3ee;
case 0x43d3f2:goto L43d3f2;
case 0x43d3f4:c.instructions+=6;goto B43d3f4;
case 0x43d3f6:c.instructions+=5;goto B43d3f6;
case 0x43d3f8:c.instructions+=4;goto B43d3f8;
case 0x43d3fb:c.instructions+=3;goto B43d3fb;
case 0x43d3fd:c.instructions+=2;goto B43d3fd;
case 0x43d400:c.instructions+=1;goto B43d400;
case 0x43d410:goto L43d410;
case 0x43d414:c.instructions+=8;goto B43d414;
case 0x43d415:c.instructions+=7;goto B43d415;
case 0x43d419:c.instructions+=6;goto B43d419;
case 0x43d41b:c.instructions+=5;goto B43d41b;
case 0x43d41f:c.instructions+=4;goto B43d41f;
case 0x43d421:c.instructions+=3;goto B43d421;
case 0x43d423:c.instructions+=2;goto B43d423;
case 0x43d426:c.instructions+=1;goto B43d426;
case 0x43d428:goto L43d428;
case 0x43d42c:c.instructions+=6;goto B43d42c;
case 0x43d430:c.instructions+=5;goto B43d430;
case 0x43d432:c.instructions+=4;goto B43d432;
case 0x43d434:c.instructions+=3;goto B43d434;
case 0x43d436:c.instructions+=2;goto B43d436;
case 0x43d439:c.instructions+=1;goto B43d439;
case 0x43d43b:goto L43d43b;
case 0x43d43e:c.instructions+=5;goto B43d43e;
case 0x43d442:c.instructions+=4;goto B43d442;
case 0x43d445:c.instructions+=3;goto B43d445;
case 0x43d447:c.instructions+=2;goto B43d447;
case 0x43d44a:c.instructions+=1;goto B43d44a;
case 0x43d44c:goto L43d44c;
case 0x43d450:c.instructions+=5;goto B43d450;
case 0x43d453:c.instructions+=4;goto B43d453;
case 0x43d456:c.instructions+=3;goto B43d456;
case 0x43d458:c.instructions+=2;goto B43d458;
case 0x43d45b:c.instructions+=1;goto B43d45b;
case 0x43d45d:goto L43d45d;
case 0x43d462:c.instructions+=2;goto B43d462;
case 0x43d463:c.instructions+=1;goto B43d463;
case 0x43d464:goto L43d464;
case 0x43d466:c.instructions+=2;goto B43d466;
case 0x43d467:c.instructions+=1;goto B43d467;
case 0x43d470:goto L43d470;
case 0x43d471:c.instructions+=8;goto B43d471;
case 0x43d475:c.instructions+=7;goto B43d475;
case 0x43d477:c.instructions+=6;goto B43d477;
case 0x43d478:c.instructions+=5;goto B43d478;
case 0x43d47c:c.instructions+=4;goto B43d47c;
case 0x43d47e:c.instructions+=3;goto B43d47e;
case 0x43d480:c.instructions+=2;goto B43d480;
case 0x43d483:c.instructions+=1;goto B43d483;
case 0x43d485:goto L43d485;
case 0x43d489:c.instructions+=6;goto B43d489;
case 0x43d48b:c.instructions+=5;goto B43d48b;
case 0x43d48f:c.instructions+=4;goto B43d48f;
case 0x43d491:c.instructions+=3;goto B43d491;
case 0x43d493:c.instructions+=2;goto B43d493;
case 0x43d496:c.instructions+=1;goto B43d496;
case 0x43d498:goto L43d498;
case 0x43d49b:c.instructions+=4;goto B43d49b;
case 0x43d49e:c.instructions+=3;goto B43d49e;
case 0x43d4a0:c.instructions+=2;goto B43d4a0;
case 0x43d4a3:c.instructions+=1;goto B43d4a3;
case 0x43d4a5:goto L43d4a5;
case 0x43d4a8:c.instructions+=4;goto B43d4a8;
case 0x43d4ab:c.instructions+=3;goto B43d4ab;
case 0x43d4ad:c.instructions+=2;goto B43d4ad;
case 0x43d4b0:c.instructions+=1;goto B43d4b0;
case 0x43d4b2:goto L43d4b2;
case 0x43d4b3:c.instructions+=3;goto B43d4b3;
case 0x43d4b8:c.instructions+=2;goto B43d4b8;
case 0x43d4b9:c.instructions+=1;goto B43d4b9;
case 0x43d4ba:goto L43d4ba;
case 0x43d4bb:c.instructions+=3;goto B43d4bb;
case 0x43d4bd:c.instructions+=2;goto B43d4bd;
case 0x43d4be:c.instructions+=1;goto B43d4be;
case 0x43d4c0:goto L43d4c0;
case 0x43d4c1:c.instructions+=8;goto B43d4c1;
case 0x43d4c5:c.instructions+=7;goto B43d4c5;
case 0x43d4c7:c.instructions+=6;goto B43d4c7;
case 0x43d4c8:c.instructions+=5;goto B43d4c8;
case 0x43d4cc:c.instructions+=4;goto B43d4cc;
case 0x43d4ce:c.instructions+=3;goto B43d4ce;
case 0x43d4d0:c.instructions+=2;goto B43d4d0;
case 0x43d4d3:c.instructions+=1;goto B43d4d3;
case 0x43d4d5:goto L43d4d5;
case 0x43d4d9:c.instructions+=6;goto B43d4d9;
case 0x43d4db:c.instructions+=5;goto B43d4db;
case 0x43d4df:c.instructions+=4;goto B43d4df;
case 0x43d4e1:c.instructions+=3;goto B43d4e1;
case 0x43d4e3:c.instructions+=2;goto B43d4e3;
case 0x43d4e6:c.instructions+=1;goto B43d4e6;
case 0x43d4e8:goto L43d4e8;
case 0x43d4eb:c.instructions+=4;goto B43d4eb;
case 0x43d4ee:c.instructions+=3;goto B43d4ee;
case 0x43d4f0:c.instructions+=2;goto B43d4f0;
case 0x43d4f3:c.instructions+=1;goto B43d4f3;
case 0x43d4f5:goto L43d4f5;
case 0x43d4f8:c.instructions+=4;goto B43d4f8;
case 0x43d4fb:c.instructions+=3;goto B43d4fb;
case 0x43d4fd:c.instructions+=2;goto B43d4fd;
case 0x43d500:c.instructions+=1;goto B43d500;
case 0x43d502:goto L43d502;
case 0x43d503:c.instructions+=3;goto B43d503;
case 0x43d508:c.instructions+=2;goto B43d508;
case 0x43d509:c.instructions+=1;goto B43d509;
case 0x43d50a:goto L43d50a;
case 0x43d50b:c.instructions+=3;goto B43d50b;
case 0x43d50d:c.instructions+=2;goto B43d50d;
case 0x43d50e:c.instructions+=1;goto B43d50e;
case 0x43d510:goto L43d510;
case 0x43d514:c.instructions+=10;goto B43d514;
case 0x43d519:c.instructions+=9;goto B43d519;
case 0x43d51b:c.instructions+=8;goto B43d51b;
case 0x43d51e:c.instructions+=7;goto B43d51e;
case 0x43d521:c.instructions+=6;goto B43d521;
case 0x43d525:c.instructions+=5;goto B43d525;
case 0x43d52a:c.instructions+=4;goto B43d52a;
case 0x43d52c:c.instructions+=3;goto B43d52c;
case 0x43d52f:c.instructions+=2;goto B43d52f;
case 0x43d532:c.instructions+=1;goto B43d532;
case 0x43d540:goto L43d540;
case 0x43d544:c.instructions+=15;goto B43d544;
case 0x43d546:c.instructions+=14;goto B43d546;
case 0x43d549:c.instructions+=13;goto B43d549;
case 0x43d54c:c.instructions+=12;goto B43d54c;
case 0x43d550:c.instructions+=11;goto B43d550;
case 0x43d552:c.instructions+=10;goto B43d552;
case 0x43d554:c.instructions+=9;goto B43d554;
case 0x43d556:c.instructions+=8;goto B43d556;
case 0x43d559:c.instructions+=7;goto B43d559;
case 0x43d55c:c.instructions+=6;goto B43d55c;
case 0x43d560:c.instructions+=5;goto B43d560;
case 0x43d562:c.instructions+=4;goto B43d562;
case 0x43d564:c.instructions+=3;goto B43d564;
case 0x43d567:c.instructions+=2;goto B43d567;
case 0x43d56a:c.instructions+=1;goto B43d56a;
case 0x43d570:goto L43d570;
case 0x43d571:c.instructions+=12;goto B43d571;
case 0x43d575:c.instructions+=11;goto B43d575;
case 0x43d578:c.instructions+=10;goto B43d578;
case 0x43d57a:c.instructions+=9;goto B43d57a;
case 0x43d57d:c.instructions+=8;goto B43d57d;
case 0x43d57f:c.instructions+=7;goto B43d57f;
case 0x43d583:c.instructions+=6;goto B43d583;
case 0x43d587:c.instructions+=5;goto B43d587;
case 0x43d589:c.instructions+=4;goto B43d589;
case 0x43d58d:c.instructions+=3;goto B43d58d;
case 0x43d58f:c.instructions+=2;goto B43d58f;
case 0x43d592:c.instructions+=1;goto B43d592;
case 0x43d594:goto L43d594;
case 0x43d596:goto L43d596;
case 0x43d59a:c.instructions+=4;goto B43d59a;
case 0x43d59d:c.instructions+=3;goto B43d59d;
case 0x43d59f:c.instructions+=2;goto B43d59f;
case 0x43d5a2:c.instructions+=1;goto B43d5a2;
case 0x43d5a4:goto L43d5a4;
case 0x43d5a8:c.instructions+=1;goto B43d5a8;
case 0x43d5ab:goto L43d5ab;
case 0x43d5af:c.instructions+=4;goto B43d5af;
case 0x43d5b2:c.instructions+=3;goto B43d5b2;
case 0x43d5b4:c.instructions+=2;goto B43d5b4;
case 0x43d5b7:c.instructions+=1;goto B43d5b7;
case 0x43d5b9:goto L43d5b9;
case 0x43d5bd:c.instructions+=1;goto B43d5bd;
case 0x43d5c0:goto L43d5c0;
case 0x43d5c4:c.instructions+=5;goto B43d5c4;
case 0x43d5c6:c.instructions+=4;goto B43d5c6;
case 0x43d5c8:c.instructions+=3;goto B43d5c8;
case 0x43d5ca:c.instructions+=2;goto B43d5ca;
case 0x43d5cd:c.instructions+=1;goto B43d5cd;
case 0x43d5cf:goto L43d5cf;
case 0x43d5d1:c.instructions+=1;goto B43d5d1;
case 0x43d5d3:goto L43d5d3;
case 0x43d5d5:goto L43d5d5;
case 0x43d5d9:c.instructions+=4;goto B43d5d9;
case 0x43d5dc:c.instructions+=3;goto B43d5dc;
case 0x43d5de:c.instructions+=2;goto B43d5de;
case 0x43d5e1:c.instructions+=1;goto B43d5e1;
case 0x43d5e3:goto L43d5e3;
case 0x43d5e7:c.instructions+=1;goto B43d5e7;
case 0x43d5ea:goto L43d5ea;
case 0x43d5ee:c.instructions+=4;goto B43d5ee;
case 0x43d5f1:c.instructions+=3;goto B43d5f1;
case 0x43d5f3:c.instructions+=2;goto B43d5f3;
case 0x43d5f6:c.instructions+=1;goto B43d5f6;
case 0x43d5f8:goto L43d5f8;
case 0x43d5fc:c.instructions+=1;goto B43d5fc;
case 0x43d5ff:goto L43d5ff;
case 0x43d600:c.instructions+=1;goto B43d600;
case 0x43d610:goto L43d610;
case 0x43d613:c.instructions+=24;goto B43d613;
case 0x43d617:c.instructions+=23;goto B43d617;
case 0x43d619:c.instructions+=22;goto B43d619;
case 0x43d61d:c.instructions+=21;goto B43d61d;
case 0x43d621:c.instructions+=20;goto B43d621;
case 0x43d624:c.instructions+=19;goto B43d624;
case 0x43d628:c.instructions+=18;goto B43d628;
case 0x43d62c:c.instructions+=17;goto B43d62c;
case 0x43d62f:c.instructions+=16;goto B43d62f;
case 0x43d633:c.instructions+=15;goto B43d633;
case 0x43d637:c.instructions+=14;goto B43d637;
case 0x43d63b:c.instructions+=13;goto B43d63b;
case 0x43d63d:c.instructions+=12;goto B43d63d;
case 0x43d641:c.instructions+=11;goto B43d641;
case 0x43d645:c.instructions+=10;goto B43d645;
case 0x43d648:c.instructions+=9;goto B43d648;
case 0x43d64c:c.instructions+=8;goto B43d64c;
case 0x43d650:c.instructions+=7;goto B43d650;
case 0x43d653:c.instructions+=6;goto B43d653;
case 0x43d657:c.instructions+=5;goto B43d657;
case 0x43d659:c.instructions+=4;goto B43d659;
case 0x43d65b:c.instructions+=3;goto B43d65b;
case 0x43d65d:c.instructions+=2;goto B43d65d;
case 0x43d660:c.instructions+=1;goto B43d660;
case 0x43d662:goto L43d662;
case 0x43d664:c.instructions+=1;goto B43d664;
case 0x43d666:goto L43d666;
case 0x43d668:goto L43d668;
case 0x43d66c:c.instructions+=4;goto B43d66c;
case 0x43d66f:c.instructions+=3;goto B43d66f;
case 0x43d671:c.instructions+=2;goto B43d671;
case 0x43d674:c.instructions+=1;goto B43d674;
case 0x43d676:goto L43d676;
case 0x43d67a:c.instructions+=1;goto B43d67a;
case 0x43d67d:goto L43d67d;
case 0x43d681:c.instructions+=4;goto B43d681;
case 0x43d684:c.instructions+=3;goto B43d684;
case 0x43d686:c.instructions+=2;goto B43d686;
case 0x43d689:c.instructions+=1;goto B43d689;
case 0x43d68b:goto L43d68b;
case 0x43d68f:c.instructions+=1;goto B43d68f;
case 0x43d692:goto L43d692;
case 0x43d696:c.instructions+=5;goto B43d696;
case 0x43d69a:c.instructions+=4;goto B43d69a;
case 0x43d69c:c.instructions+=3;goto B43d69c;
case 0x43d69e:c.instructions+=2;goto B43d69e;
case 0x43d6a1:c.instructions+=1;goto B43d6a1;
case 0x43d6a3:goto L43d6a3;
case 0x43d6a7:c.instructions+=1;goto B43d6a7;
case 0x43d6a9:goto L43d6a9;
case 0x43d6ad:c.instructions+=4;goto B43d6ad;
case 0x43d6b0:c.instructions+=3;goto B43d6b0;
case 0x43d6b2:c.instructions+=2;goto B43d6b2;
case 0x43d6b5:c.instructions+=1;goto B43d6b5;
case 0x43d6b7:goto L43d6b7;
case 0x43d6bb:c.instructions+=1;goto B43d6bb;
case 0x43d6be:goto L43d6be;
case 0x43d6c2:c.instructions+=4;goto B43d6c2;
case 0x43d6c5:c.instructions+=3;goto B43d6c5;
case 0x43d6c7:c.instructions+=2;goto B43d6c7;
case 0x43d6ca:c.instructions+=1;goto B43d6ca;
case 0x43d6cc:goto L43d6cc;
case 0x43d6d0:c.instructions+=1;goto B43d6d0;
case 0x43d6d3:goto L43d6d3;
case 0x43d6d6:c.instructions+=1;goto B43d6d6;
case 0x43d6e0:goto L43d6e0;
case 0x43d6e3:c.instructions+=19;goto B43d6e3;
case 0x43d6e7:c.instructions+=18;goto B43d6e7;
case 0x43d6ea:c.instructions+=17;goto B43d6ea;
case 0x43d6ec:c.instructions+=16;goto B43d6ec;
case 0x43d6ef:c.instructions+=15;goto B43d6ef;
case 0x43d6f1:c.instructions+=14;goto B43d6f1;
case 0x43d6f5:c.instructions+=13;goto B43d6f5;
case 0x43d6f9:c.instructions+=12;goto B43d6f9;
case 0x43d6fb:c.instructions+=11;goto B43d6fb;
case 0x43d6ff:c.instructions+=10;goto B43d6ff;
case 0x43d703:c.instructions+=9;goto B43d703;
case 0x43d705:c.instructions+=8;goto B43d705;
case 0x43d709:c.instructions+=7;goto B43d709;
case 0x43d70c:c.instructions+=6;goto B43d70c;
case 0x43d70f:c.instructions+=5;goto B43d70f;
case 0x43d713:c.instructions+=4;goto B43d713;
case 0x43d715:c.instructions+=3;goto B43d715;
case 0x43d719:c.instructions+=2;goto B43d719;
case 0x43d71c:c.instructions+=1;goto B43d71c;
case 0x43d71e:goto L43d71e;
case 0x43d720:c.instructions+=1;goto B43d720;
case 0x43d722:goto L43d722;
case 0x43d724:goto L43d724;
case 0x43d728:c.instructions+=4;goto B43d728;
case 0x43d72b:c.instructions+=3;goto B43d72b;
case 0x43d72d:c.instructions+=2;goto B43d72d;
case 0x43d730:c.instructions+=1;goto B43d730;
case 0x43d732:goto L43d732;
case 0x43d736:c.instructions+=1;goto B43d736;
case 0x43d739:goto L43d739;
case 0x43d73d:c.instructions+=4;goto B43d73d;
case 0x43d740:c.instructions+=3;goto B43d740;
case 0x43d742:c.instructions+=2;goto B43d742;
case 0x43d745:c.instructions+=1;goto B43d745;
case 0x43d747:goto L43d747;
case 0x43d74b:c.instructions+=1;goto B43d74b;
case 0x43d74e:goto L43d74e;
case 0x43d752:c.instructions+=5;goto B43d752;
case 0x43d756:c.instructions+=4;goto B43d756;
case 0x43d758:c.instructions+=3;goto B43d758;
case 0x43d75a:c.instructions+=2;goto B43d75a;
case 0x43d75d:c.instructions+=1;goto B43d75d;
case 0x43d75f:goto L43d75f;
case 0x43d763:c.instructions+=1;goto B43d763;
case 0x43d765:goto L43d765;
case 0x43d769:c.instructions+=4;goto B43d769;
case 0x43d76c:c.instructions+=3;goto B43d76c;
case 0x43d76e:c.instructions+=2;goto B43d76e;
case 0x43d771:c.instructions+=1;goto B43d771;
case 0x43d773:goto L43d773;
case 0x43d777:c.instructions+=1;goto B43d777;
case 0x43d77a:goto L43d77a;
case 0x43d77e:c.instructions+=4;goto B43d77e;
case 0x43d781:c.instructions+=3;goto B43d781;
case 0x43d783:c.instructions+=2;goto B43d783;
case 0x43d786:c.instructions+=1;goto B43d786;
case 0x43d788:goto L43d788;
case 0x43d78c:c.instructions+=1;goto B43d78c;
case 0x43d78f:goto L43d78f;
case 0x43d792:c.instructions+=1;goto B43d792;
case 0x43d7a0:goto L43d7a0;
case 0x43d7a4:c.instructions+=8;goto B43d7a4;
case 0x43d7a5:c.instructions+=7;goto B43d7a5;
case 0x43d7a9:c.instructions+=6;goto B43d7a9;
case 0x43d7ab:c.instructions+=5;goto B43d7ab;
case 0x43d7af:c.instructions+=4;goto B43d7af;
case 0x43d7b1:c.instructions+=3;goto B43d7b1;
case 0x43d7b3:c.instructions+=2;goto B43d7b3;
case 0x43d7b6:c.instructions+=1;goto B43d7b6;
case 0x43d7b8:goto L43d7b8;
case 0x43d7bc:c.instructions+=6;goto B43d7bc;
case 0x43d7c0:c.instructions+=5;goto B43d7c0;
case 0x43d7c2:c.instructions+=4;goto B43d7c2;
case 0x43d7c4:c.instructions+=3;goto B43d7c4;
case 0x43d7c6:c.instructions+=2;goto B43d7c6;
case 0x43d7c9:c.instructions+=1;goto B43d7c9;
case 0x43d7cb:goto L43d7cb;
case 0x43d7ce:c.instructions+=5;goto B43d7ce;
case 0x43d7d2:c.instructions+=4;goto B43d7d2;
case 0x43d7d5:c.instructions+=3;goto B43d7d5;
case 0x43d7d7:c.instructions+=2;goto B43d7d7;
case 0x43d7da:c.instructions+=1;goto B43d7da;
case 0x43d7dc:goto L43d7dc;
case 0x43d7e0:c.instructions+=5;goto B43d7e0;
case 0x43d7e3:c.instructions+=4;goto B43d7e3;
case 0x43d7e6:c.instructions+=3;goto B43d7e6;
case 0x43d7e8:c.instructions+=2;goto B43d7e8;
case 0x43d7eb:c.instructions+=1;goto B43d7eb;
case 0x43d7ed:goto L43d7ed;
case 0x43d7f0:c.instructions+=5;goto B43d7f0;
case 0x43d7f4:c.instructions+=4;goto B43d7f4;
case 0x43d7f7:c.instructions+=3;goto B43d7f7;
case 0x43d7f9:c.instructions+=2;goto B43d7f9;
case 0x43d7fc:c.instructions+=1;goto B43d7fc;
case 0x43d7fe:goto L43d7fe;
case 0x43d802:c.instructions+=5;goto B43d802;
case 0x43d805:c.instructions+=4;goto B43d805;
case 0x43d808:c.instructions+=3;goto B43d808;
case 0x43d80a:c.instructions+=2;goto B43d80a;
case 0x43d80d:c.instructions+=1;goto B43d80d;
case 0x43d80f:goto L43d80f;
case 0x43d814:c.instructions+=2;goto B43d814;
case 0x43d815:c.instructions+=1;goto B43d815;
case 0x43d816:goto L43d816;
case 0x43d818:c.instructions+=2;goto B43d818;
case 0x43d819:c.instructions+=1;goto B43d819;
case 0x43d820:goto L43d820;
case 0x43d821:c.instructions+=8;goto B43d821;
case 0x43d825:c.instructions+=7;goto B43d825;
case 0x43d827:c.instructions+=6;goto B43d827;
case 0x43d828:c.instructions+=5;goto B43d828;
case 0x43d82c:c.instructions+=4;goto B43d82c;
case 0x43d82e:c.instructions+=3;goto B43d82e;
case 0x43d830:c.instructions+=2;goto B43d830;
case 0x43d833:c.instructions+=1;goto B43d833;
case 0x43d835:goto L43d835;
case 0x43d839:c.instructions+=6;goto B43d839;
case 0x43d83b:c.instructions+=5;goto B43d83b;
case 0x43d83f:c.instructions+=4;goto B43d83f;
case 0x43d841:c.instructions+=3;goto B43d841;
case 0x43d843:c.instructions+=2;goto B43d843;
case 0x43d846:c.instructions+=1;goto B43d846;
case 0x43d848:goto L43d848;
case 0x43d84b:c.instructions+=4;goto B43d84b;
case 0x43d84e:c.instructions+=3;goto B43d84e;
case 0x43d850:c.instructions+=2;goto B43d850;
case 0x43d853:c.instructions+=1;goto B43d853;
case 0x43d855:goto L43d855;
case 0x43d858:c.instructions+=4;goto B43d858;
case 0x43d85b:c.instructions+=3;goto B43d85b;
case 0x43d85d:c.instructions+=2;goto B43d85d;
case 0x43d860:c.instructions+=1;goto B43d860;
case 0x43d862:goto L43d862;
case 0x43d865:c.instructions+=4;goto B43d865;
case 0x43d868:c.instructions+=3;goto B43d868;
case 0x43d86a:c.instructions+=2;goto B43d86a;
case 0x43d86d:c.instructions+=1;goto B43d86d;
case 0x43d86f:goto L43d86f;
case 0x43d872:c.instructions+=4;goto B43d872;
case 0x43d875:c.instructions+=3;goto B43d875;
case 0x43d877:c.instructions+=2;goto B43d877;
case 0x43d87a:c.instructions+=1;goto B43d87a;
case 0x43d87c:goto L43d87c;
case 0x43d87d:c.instructions+=3;goto B43d87d;
case 0x43d882:c.instructions+=2;goto B43d882;
case 0x43d883:c.instructions+=1;goto B43d883;
case 0x43d884:goto L43d884;
case 0x43d885:c.instructions+=3;goto B43d885;
case 0x43d887:c.instructions+=2;goto B43d887;
case 0x43d888:c.instructions+=1;goto B43d888;
case 0x43d890:goto L43d890;
case 0x43d893:c.instructions+=17;goto B43d893;
case 0x43d897:c.instructions+=16;goto B43d897;
case 0x43d899:c.instructions+=15;goto B43d899;
case 0x43d89c:c.instructions+=14;goto B43d89c;
case 0x43d89d:c.instructions+=13;goto B43d89d;
case 0x43d8a1:c.instructions+=12;goto B43d8a1;
case 0x43d8a2:c.instructions+=11;goto B43d8a2;
case 0x43d8a6:c.instructions+=10;goto B43d8a6;
case 0x43d8a7:c.instructions+=9;goto B43d8a7;
case 0x43d8a9:c.instructions+=8;goto B43d8a9;
case 0x43d8ac:c.instructions+=7;goto B43d8ac;
case 0x43d8ad:c.instructions+=6;goto B43d8ad;
case 0x43d8b1:c.instructions+=5;goto B43d8b1;
case 0x43d8b5:c.instructions+=4;goto B43d8b5;
case 0x43d8ba:c.instructions+=3;goto B43d8ba;
case 0x43d8bd:c.instructions+=2;goto B43d8bd;
case 0x43d8c1:c.instructions+=1;goto B43d8c1;
case 0x43d8c7:goto L43d8c7;
case 0x43d8ce:c.instructions+=5;goto B43d8ce;
case 0x43d8d3:c.instructions+=4;goto B43d8d3;
case 0x43d8d5:c.instructions+=3;goto B43d8d5;
case 0x43d8da:c.instructions+=2;goto B43d8da;
case 0x43d8dd:c.instructions+=1;goto B43d8dd;
case 0x43d8e1:goto L43d8e1;
case 0x43d8e3:c.instructions+=4;goto B43d8e3;
case 0x43d8e7:c.instructions+=3;goto B43d8e7;
case 0x43d8e9:c.instructions+=2;goto B43d8e9;
case 0x43d8ec:c.instructions+=1;goto B43d8ec;
case 0x43d8ee:goto L43d8ee;
case 0x43d8f2:c.instructions+=5;goto B43d8f2;
case 0x43d8f6:c.instructions+=4;goto B43d8f6;
case 0x43d8f8:c.instructions+=3;goto B43d8f8;
case 0x43d8fa:c.instructions+=2;goto B43d8fa;
case 0x43d8fd:c.instructions+=1;goto B43d8fd;
case 0x43d8ff:goto L43d8ff;
case 0x43d903:c.instructions+=5;goto B43d903;
case 0x43d907:c.instructions+=4;goto B43d907;
case 0x43d90b:c.instructions+=3;goto B43d90b;
case 0x43d90d:c.instructions+=2;goto B43d90d;
case 0x43d910:c.instructions+=1;goto B43d910;
case 0x43d912:goto L43d912;
case 0x43d916:c.instructions+=4;goto B43d916;
case 0x43d918:c.instructions+=3;goto B43d918;
case 0x43d91a:c.instructions+=2;goto B43d91a;
case 0x43d91d:c.instructions+=1;goto B43d91d;
case 0x43d91f:goto L43d91f;
case 0x43d923:c.instructions+=12;goto B43d923;
case 0x43d925:c.instructions+=11;goto B43d925;
case 0x43d928:c.instructions+=10;goto B43d928;
case 0x43d92b:c.instructions+=9;goto B43d92b;
case 0x43d92d:c.instructions+=8;goto B43d92d;
case 0x43d92f:c.instructions+=7;goto B43d92f;
case 0x43d931:c.instructions+=6;goto B43d931;
case 0x43d933:c.instructions+=5;goto B43d933;
case 0x43d936:c.instructions+=4;goto B43d936;
case 0x43d93a:c.instructions+=3;goto B43d93a;
case 0x43d93c:c.instructions+=2;goto B43d93c;
case 0x43d93f:c.instructions+=1;goto B43d93f;
case 0x43d941:goto L43d941;
case 0x43d945:c.instructions+=3;goto B43d945;
case 0x43d947:c.instructions+=2;goto B43d947;
case 0x43d94a:c.instructions+=1;goto B43d94a;
case 0x43d94e:goto L43d94e;
case 0x43d951:c.instructions+=4;goto B43d951;
case 0x43d955:c.instructions+=3;goto B43d955;
case 0x43d957:c.instructions+=2;goto B43d957;
case 0x43d95a:c.instructions+=1;goto B43d95a;
case 0x43d95c:goto L43d95c;
case 0x43d960:c.instructions+=4;goto B43d960;
case 0x43d962:c.instructions+=3;goto B43d962;
case 0x43d964:c.instructions+=2;goto B43d964;
case 0x43d967:c.instructions+=1;goto B43d967;
case 0x43d969:goto L43d969;
case 0x43d96b:goto L43d96b;
case 0x43d96d:c.instructions+=4;goto B43d96d;
case 0x43d971:c.instructions+=3;goto B43d971;
case 0x43d973:c.instructions+=2;goto B43d973;
case 0x43d976:c.instructions+=1;goto B43d976;
case 0x43d978:goto L43d978;
case 0x43d97c:c.instructions+=4;goto B43d97c;
case 0x43d97f:c.instructions+=3;goto B43d97f;
case 0x43d981:c.instructions+=2;goto B43d981;
case 0x43d984:c.instructions+=1;goto B43d984;
case 0x43d986:goto L43d986;
case 0x43d989:c.instructions+=12;goto B43d989;
case 0x43d98c:c.instructions+=11;goto B43d98c;
case 0x43d990:c.instructions+=10;goto B43d990;
case 0x43d993:c.instructions+=9;goto B43d993;
case 0x43d995:c.instructions+=8;goto B43d995;
case 0x43d997:c.instructions+=7;goto B43d997;
case 0x43d99a:c.instructions+=6;goto B43d99a;
case 0x43d99c:c.instructions+=5;goto B43d99c;
case 0x43d99f:c.instructions+=4;goto B43d99f;
case 0x43d9a3:c.instructions+=3;goto B43d9a3;
case 0x43d9a5:c.instructions+=2;goto B43d9a5;
case 0x43d9a8:c.instructions+=1;goto B43d9a8;
case 0x43d9aa:goto L43d9aa;
case 0x43d9ae:c.instructions+=3;goto B43d9ae;
case 0x43d9b0:c.instructions+=2;goto B43d9b0;
case 0x43d9b3:c.instructions+=1;goto B43d9b3;
case 0x43d9b7:goto L43d9b7;
case 0x43d9ba:c.instructions+=4;goto B43d9ba;
case 0x43d9be:c.instructions+=3;goto B43d9be;
case 0x43d9c0:c.instructions+=2;goto B43d9c0;
case 0x43d9c3:c.instructions+=1;goto B43d9c3;
case 0x43d9c5:goto L43d9c5;
case 0x43d9c9:c.instructions+=4;goto B43d9c9;
case 0x43d9cc:c.instructions+=3;goto B43d9cc;
case 0x43d9ce:c.instructions+=2;goto B43d9ce;
case 0x43d9d1:c.instructions+=1;goto B43d9d1;
case 0x43d9d3:goto L43d9d3;
case 0x43d9d6:c.instructions+=4;goto B43d9d6;
case 0x43d9da:c.instructions+=3;goto B43d9da;
case 0x43d9dc:c.instructions+=2;goto B43d9dc;
case 0x43d9df:c.instructions+=1;goto B43d9df;
case 0x43d9e1:goto L43d9e1;
case 0x43d9e5:c.instructions+=4;goto B43d9e5;
case 0x43d9e8:c.instructions+=3;goto B43d9e8;
case 0x43d9ea:c.instructions+=2;goto B43d9ea;
case 0x43d9ed:c.instructions+=1;goto B43d9ed;
case 0x43d9ef:goto L43d9ef;
case 0x43d9f2:c.instructions+=12;goto B43d9f2;
case 0x43d9f5:c.instructions+=11;goto B43d9f5;
case 0x43d9f9:c.instructions+=10;goto B43d9f9;
case 0x43d9fc:c.instructions+=9;goto B43d9fc;
case 0x43d9fe:c.instructions+=8;goto B43d9fe;
case 0x43da01:c.instructions+=7;goto B43da01;
case 0x43da04:c.instructions+=6;goto B43da04;
case 0x43da06:c.instructions+=5;goto B43da06;
case 0x43da09:c.instructions+=4;goto B43da09;
case 0x43da0d:c.instructions+=3;goto B43da0d;
case 0x43da0f:c.instructions+=2;goto B43da0f;
case 0x43da12:c.instructions+=1;goto B43da12;
case 0x43da14:goto L43da14;
case 0x43da18:c.instructions+=3;goto B43da18;
case 0x43da1a:c.instructions+=2;goto B43da1a;
case 0x43da1d:c.instructions+=1;goto B43da1d;
case 0x43da21:goto L43da21;
case 0x43da24:c.instructions+=4;goto B43da24;
case 0x43da28:c.instructions+=3;goto B43da28;
case 0x43da2a:c.instructions+=2;goto B43da2a;
case 0x43da2d:c.instructions+=1;goto B43da2d;
case 0x43da2f:goto L43da2f;
case 0x43da33:c.instructions+=4;goto B43da33;
case 0x43da36:c.instructions+=3;goto B43da36;
case 0x43da38:c.instructions+=2;goto B43da38;
case 0x43da3b:c.instructions+=1;goto B43da3b;
case 0x43da3d:goto L43da3d;
case 0x43da40:c.instructions+=4;goto B43da40;
case 0x43da44:c.instructions+=3;goto B43da44;
case 0x43da46:c.instructions+=2;goto B43da46;
case 0x43da49:c.instructions+=1;goto B43da49;
case 0x43da4b:goto L43da4b;
case 0x43da4f:c.instructions+=4;goto B43da4f;
case 0x43da52:c.instructions+=3;goto B43da52;
case 0x43da54:c.instructions+=2;goto B43da54;
case 0x43da57:c.instructions+=1;goto B43da57;
case 0x43da59:goto L43da59;
case 0x43da5c:c.instructions+=12;goto B43da5c;
case 0x43da5f:c.instructions+=11;goto B43da5f;
case 0x43da63:c.instructions+=10;goto B43da63;
case 0x43da66:c.instructions+=9;goto B43da66;
case 0x43da68:c.instructions+=8;goto B43da68;
case 0x43da6b:c.instructions+=7;goto B43da6b;
case 0x43da6e:c.instructions+=6;goto B43da6e;
case 0x43da70:c.instructions+=5;goto B43da70;
case 0x43da73:c.instructions+=4;goto B43da73;
case 0x43da77:c.instructions+=3;goto B43da77;
case 0x43da79:c.instructions+=2;goto B43da79;
case 0x43da7c:c.instructions+=1;goto B43da7c;
case 0x43da7e:goto L43da7e;
case 0x43da82:c.instructions+=3;goto B43da82;
case 0x43da84:c.instructions+=2;goto B43da84;
case 0x43da87:c.instructions+=1;goto B43da87;
case 0x43da8b:goto L43da8b;
case 0x43da8f:c.instructions+=9;goto B43da8f;
case 0x43da93:c.instructions+=8;goto B43da93;
case 0x43da95:c.instructions+=7;goto B43da95;
case 0x43da97:c.instructions+=6;goto B43da97;
case 0x43da9a:c.instructions+=5;goto B43da9a;
case 0x43da9d:c.instructions+=4;goto B43da9d;
case 0x43daa0:c.instructions+=3;goto B43daa0;
case 0x43daa2:c.instructions+=2;goto B43daa2;
case 0x43daa6:c.instructions+=1;goto B43daa6;
case 0x43daac:goto L43daac;
case 0x43daae:c.instructions+=1;goto B43daae;
case 0x43dab4:goto L43dab4;
case 0x43dab9:c.instructions+=4;goto B43dab9;
case 0x43dabb:c.instructions+=3;goto B43dabb;
case 0x43dac2:c.instructions+=2;goto B43dac2;
case 0x43dac6:c.instructions+=1;goto B43dac6;
case 0x43dac8:goto L43dac8;
case 0x43daca:c.instructions+=4;goto B43daca;
case 0x43dace:c.instructions+=3;goto B43dace;
case 0x43dad0:c.instructions+=2;goto B43dad0;
case 0x43dad3:c.instructions+=1;goto B43dad3;
case 0x43dad5:goto L43dad5;
case 0x43dad9:c.instructions+=5;goto B43dad9;
case 0x43dadd:c.instructions+=4;goto B43dadd;
case 0x43dadf:c.instructions+=3;goto B43dadf;
case 0x43dae1:c.instructions+=2;goto B43dae1;
case 0x43dae4:c.instructions+=1;goto B43dae4;
case 0x43dae6:goto L43dae6;
case 0x43daea:c.instructions+=5;goto B43daea;
case 0x43daee:c.instructions+=4;goto B43daee;
case 0x43daf2:c.instructions+=3;goto B43daf2;
case 0x43daf4:c.instructions+=2;goto B43daf4;
case 0x43daf7:c.instructions+=1;goto B43daf7;
case 0x43daf9:goto L43daf9;
case 0x43dafd:c.instructions+=4;goto B43dafd;
case 0x43daff:c.instructions+=3;goto B43daff;
case 0x43db01:c.instructions+=2;goto B43db01;
case 0x43db04:c.instructions+=1;goto B43db04;
case 0x43db06:goto L43db06;
case 0x43db09:c.instructions+=12;goto B43db09;
case 0x43db0c:c.instructions+=11;goto B43db0c;
case 0x43db10:c.instructions+=10;goto B43db10;
case 0x43db12:c.instructions+=9;goto B43db12;
case 0x43db14:c.instructions+=8;goto B43db14;
case 0x43db16:c.instructions+=7;goto B43db16;
case 0x43db18:c.instructions+=6;goto B43db18;
case 0x43db1a:c.instructions+=5;goto B43db1a;
case 0x43db1d:c.instructions+=4;goto B43db1d;
case 0x43db21:c.instructions+=3;goto B43db21;
case 0x43db23:c.instructions+=2;goto B43db23;
case 0x43db26:c.instructions+=1;goto B43db26;
case 0x43db28:goto L43db28;
case 0x43db2c:c.instructions+=3;goto B43db2c;
case 0x43db2e:c.instructions+=2;goto B43db2e;
case 0x43db31:c.instructions+=1;goto B43db31;
case 0x43db35:goto L43db35;
case 0x43db38:c.instructions+=3;goto B43db38;
case 0x43db3b:c.instructions+=2;goto B43db3b;
case 0x43db3c:c.instructions+=1;goto B43db3c;
case 0x43db3e:goto L43db3e;
case 0x43db42:c.instructions+=6;goto B43db42;
case 0x43db43:c.instructions+=5;goto B43db43;
case 0x43db44:c.instructions+=4;goto B43db44;
case 0x43db45:c.instructions+=3;goto B43db45;
case 0x43db46:c.instructions+=2;goto B43db46;
case 0x43db49:c.instructions+=1;goto B43db49;
case 0x43db50:goto L43db50;
case 0x43db54:c.instructions+=4;goto B43db54;
case 0x43db56:c.instructions+=3;goto B43db56;
case 0x43db59:c.instructions+=2;goto B43db59;
case 0x43db5b:c.instructions+=1;goto B43db5b;
case 0x43db5d:goto L43db5d;
case 0x43db60:goto L43db60;
case 0x43db63:c.instructions+=6;goto B43db63;
case 0x43db66:c.instructions+=5;goto B43db66;
case 0x43db68:c.instructions+=4;goto B43db68;
case 0x43db6b:c.instructions+=3;goto B43db6b;
case 0x43db6c:c.instructions+=2;goto B43db6c;
case 0x43db6e:c.instructions+=1;goto B43db6e;
case 0x43db70:goto L43db70;
case 0x43db80:goto L43db80;
case 0x43db84:c.instructions+=4;goto B43db84;
case 0x43db86:c.instructions+=3;goto B43db86;
case 0x43db88:c.instructions+=2;goto B43db88;
case 0x43db8c:c.instructions+=1;goto B43db8c;
case 0x43db8e:goto L43db8e;
case 0x43db90:goto L43db90;
case 0x43db93:c.instructions+=6;goto B43db93;
case 0x43db96:c.instructions+=5;goto B43db96;
case 0x43db98:c.instructions+=4;goto B43db98;
case 0x43db9b:c.instructions+=3;goto B43db9b;
case 0x43db9c:c.instructions+=2;goto B43db9c;
case 0x43db9e:c.instructions+=1;goto B43db9e;
case 0x43dba0:goto L43dba0;
case 0x43dbb0:goto L43dbb0;
case 0x43dbb4:c.instructions+=3;goto B43dbb4;
case 0x43dbb6:c.instructions+=2;goto B43dbb6;
case 0x43dbb8:c.instructions+=1;goto B43dbb8;
case 0x43dbba:goto L43dbba;
case 0x43dbbd:c.instructions+=1;goto B43dbbd;
case 0x43dbbf:goto L43dbbf;
case 0x43dbc0:goto L43dbc0;
case 0x43dbc4:c.instructions+=3;goto B43dbc4;
case 0x43dbc5:c.instructions+=2;goto B43dbc5;
case 0x43dbc7:c.instructions+=1;goto B43dbc7;
case 0x43dbc9:goto L43dbc9;
case 0x43dbd0:goto L43dbd0;
case 0x43dbd4:c.instructions+=6;goto B43dbd4;
case 0x43dbd5:c.instructions+=5;goto B43dbd5;
case 0x43dbd9:c.instructions+=4;goto B43dbd9;
case 0x43dbdb:c.instructions+=3;goto B43dbdb;
case 0x43dbdd:c.instructions+=2;goto B43dbdd;
case 0x43dbdf:c.instructions+=1;goto B43dbdf;
case 0x43dbe1:goto L43dbe1;
case 0x43dbe3:c.instructions+=1;goto B43dbe3;
case 0x43dbe5:goto L43dbe5;
case 0x43dbe9:c.instructions+=4;goto B43dbe9;
case 0x43dbea:c.instructions+=3;goto B43dbea;
case 0x43dbec:c.instructions+=2;goto B43dbec;
case 0x43dbee:c.instructions+=1;goto B43dbee;
case 0x43dbf0:goto L43dbf0;
case 0x43dbf1:c.instructions+=1;goto B43dbf1;
case 0x43dc00:goto L43dc00;
case 0x43dc04:c.instructions+=4;goto B43dc04;
case 0x43dc05:c.instructions+=3;goto B43dc05;
case 0x43dc09:c.instructions+=2;goto B43dc09;
case 0x43dc0b:c.instructions+=1;goto B43dc0b;
case 0x43dc0d:goto L43dc0d;
case 0x43dc0e:c.instructions+=3;goto B43dc0e;
case 0x43dc12:c.instructions+=2;goto B43dc12;
case 0x43dc14:c.instructions+=1;goto B43dc14;
case 0x43dc16:goto L43dc16;
case 0x43dc19:c.instructions+=4;goto B43dc19;
case 0x43dc1a:c.instructions+=3;goto B43dc1a;
case 0x43dc1c:c.instructions+=2;goto B43dc1c;
case 0x43dc1e:c.instructions+=1;goto B43dc1e;
case 0x43dc20:goto L43dc20;
case 0x43dc21:c.instructions+=2;goto B43dc21;
case 0x43dc23:c.instructions+=1;goto B43dc23;
case 0x43dc25:goto L43dc25;
case 0x43dc26:goto L43dc26;
case 0x43dc27:c.instructions+=1;goto B43dc27;
case 0x43dc30:goto L43dc30;
case 0x43dc34:c.instructions+=3;goto B43dc34;
case 0x43dc35:c.instructions+=2;goto B43dc35;
case 0x43dc39:c.instructions+=1;goto B43dc39;
case 0x43dc40:goto L43dc40;
case 0x43dc42:c.instructions+=5;goto B43dc42;
case 0x43dc44:c.instructions+=4;goto B43dc44;
case 0x43dc45:c.instructions+=3;goto B43dc45;
case 0x43dc46:c.instructions+=2;goto B43dc46;
case 0x43dc48:c.instructions+=1;goto B43dc48;
case 0x43dc4a:goto L43dc4a;
case 0x43dc4c:c.instructions+=1;goto B43dc4c;
case 0x43dc4e:goto L43dc4e;
case 0x43dc50:c.instructions+=1;goto B43dc50;
case 0x43dc52:goto L43dc52;
case 0x43dc55:c.instructions+=4;goto B43dc55;
case 0x43dc58:c.instructions+=3;goto B43dc58;
case 0x43dc5a:c.instructions+=2;goto B43dc5a;
case 0x43dc5b:c.instructions+=1;goto B43dc5b;
case 0x43dc60:goto L43dc60;
case 0x43dc64:c.instructions+=5;goto B43dc64;
case 0x43dc65:c.instructions+=4;goto B43dc65;
case 0x43dc69:c.instructions+=3;goto B43dc69;
case 0x43dc6a:c.instructions+=2;goto B43dc6a;
case 0x43dc6e:c.instructions+=1;goto B43dc6e;
case 0x43dc70:goto L43dc70;
case 0x43dc72:c.instructions+=3;goto B43dc72;
case 0x43dc73:c.instructions+=2;goto B43dc73;
case 0x43dc75:c.instructions+=1;goto B43dc75;
case 0x43dc77:goto L43dc77;
case 0x43dc79:c.instructions+=2;goto B43dc79;
case 0x43dc7b:c.instructions+=1;goto B43dc7b;
case 0x43dc7d:goto L43dc7d;
case 0x43dc7f:c.instructions+=2;goto B43dc7f;
case 0x43dc81:c.instructions+=1;goto B43dc81;
case 0x43dc83:goto L43dc83;
case 0x43dc84:c.instructions+=3;goto B43dc84;
case 0x43dc85:c.instructions+=2;goto B43dc85;
case 0x43dc87:c.instructions+=1;goto B43dc87;
case 0x43dc89:goto L43dc89;
case 0x43dc8b:c.instructions+=1;goto B43dc8b;
case 0x43dc8d:goto L43dc8d;
case 0x43dc90:c.instructions+=1;goto B43dc90;
case 0x43dc92:goto L43dc92;
case 0x43dc93:c.instructions+=3;goto B43dc93;
case 0x43dc98:c.instructions+=2;goto B43dc98;
case 0x43dc99:c.instructions+=1;goto B43dc99;
case 0x43dc9a:goto L43dc9a;
case 0x43dc9d:c.instructions+=1;goto B43dc9d;
case 0x43dc9f:goto L43dc9f;
case 0x43dca0:c.instructions+=3;goto B43dca0;
case 0x43dca5:c.instructions+=2;goto B43dca5;
case 0x43dca6:c.instructions+=1;goto B43dca6;
case 0x43dca7:goto L43dca7;
case 0x43dcab:c.instructions+=5;goto B43dcab;
case 0x43dcaf:c.instructions+=4;goto B43dcaf;
case 0x43dcb0:c.instructions+=3;goto B43dcb0;
case 0x43dcb2:c.instructions+=2;goto B43dcb2;
case 0x43dcb3:c.instructions+=1;goto B43dcb3;
case 0x43dcb4:goto L43dcb4;
case 0x43dcb5:c.instructions+=3;goto B43dcb5;
case 0x43dcb7:c.instructions+=2;goto B43dcb7;
case 0x43dcb8:c.instructions+=1;goto B43dcb8;
case 0x43dcc0:goto L43dcc0;
case 0x43dcc4:c.instructions+=3;goto B43dcc4;
case 0x43dcc5:c.instructions+=2;goto B43dcc5;
case 0x43dcc9:c.instructions+=1;goto B43dcc9;
case 0x43dcd0:goto L43dcd0;
case 0x43dcd2:c.instructions+=2;goto B43dcd2;
case 0x43dcd5:c.instructions+=1;goto B43dcd5;
case 0x43dcd7:goto L43dcd7;
case 0x43dcda:c.instructions+=1;goto B43dcda;
case 0x43dcdc:goto L43dcdc;
case 0x43dcdf:goto L43dcdf;
case 0x43dce1:c.instructions+=3;goto B43dce1;
case 0x43dce2:c.instructions+=2;goto B43dce2;
case 0x43dce4:c.instructions+=1;goto B43dce4;
case 0x43dce6:goto L43dce6;
case 0x43dce8:c.instructions+=1;goto B43dce8;
case 0x43dcea:goto L43dcea;
case 0x43dcec:goto L43dcec;
case 0x43dced:c.instructions+=2;goto B43dced;
case 0x43dcef:c.instructions+=1;goto B43dcef;
case 0x43dcf1:goto L43dcf1;
case 0x43dcf3:c.instructions+=1;goto B43dcf3;
case 0x43dcf5:goto L43dcf5;
case 0x43dcf7:c.instructions+=1;goto B43dcf7;
case 0x43dcf9:goto L43dcf9;
case 0x43dcfc:c.instructions+=4;goto B43dcfc;
case 0x43dcff:c.instructions+=3;goto B43dcff;
case 0x43dd01:c.instructions+=2;goto B43dd01;
case 0x43dd02:c.instructions+=1;goto B43dd02;
case 0x43dd10:goto L43dd10;
case 0x43dd14:c.instructions+=5;goto B43dd14;
case 0x43dd15:c.instructions+=4;goto B43dd15;
case 0x43dd19:c.instructions+=3;goto B43dd19;
case 0x43dd1a:c.instructions+=2;goto B43dd1a;
case 0x43dd1e:c.instructions+=1;goto B43dd1e;
case 0x43dd20:goto L43dd20;
case 0x43dd22:c.instructions+=3;goto B43dd22;
case 0x43dd23:c.instructions+=2;goto B43dd23;
case 0x43dd25:c.instructions+=1;goto B43dd25;
case 0x43dd27:goto L43dd27;
case 0x43dd29:c.instructions+=2;goto B43dd29;
case 0x43dd2b:c.instructions+=1;goto B43dd2b;
case 0x43dd2d:goto L43dd2d;
case 0x43dd2f:c.instructions+=2;goto B43dd2f;
case 0x43dd31:c.instructions+=1;goto B43dd31;
case 0x43dd33:goto L43dd33;
case 0x43dd36:c.instructions+=1;goto B43dd36;
case 0x43dd38:goto L43dd38;
case 0x43dd3b:c.instructions+=1;goto B43dd3b;
case 0x43dd3d:goto L43dd3d;
case 0x43dd40:goto L43dd40;
case 0x43dd42:c.instructions+=1;goto B43dd42;
case 0x43dd44:goto L43dd44;
case 0x43dd46:c.instructions+=1;goto B43dd46;
case 0x43dd48:goto L43dd48;
case 0x43dd4a:goto L43dd4a;
case 0x43dd4b:c.instructions+=3;goto B43dd4b;
case 0x43dd4c:c.instructions+=2;goto B43dd4c;
case 0x43dd4e:c.instructions+=1;goto B43dd4e;
case 0x43dd50:goto L43dd50;
case 0x43dd52:c.instructions+=1;goto B43dd52;
case 0x43dd54:goto L43dd54;
case 0x43dd57:c.instructions+=1;goto B43dd57;
case 0x43dd59:goto L43dd59;
case 0x43dd5a:c.instructions+=3;goto B43dd5a;
case 0x43dd5f:c.instructions+=2;goto B43dd5f;
case 0x43dd60:c.instructions+=1;goto B43dd60;
case 0x43dd61:goto L43dd61;
case 0x43dd64:c.instructions+=1;goto B43dd64;
case 0x43dd66:goto L43dd66;
case 0x43dd67:c.instructions+=3;goto B43dd67;
case 0x43dd6c:c.instructions+=2;goto B43dd6c;
case 0x43dd6d:c.instructions+=1;goto B43dd6d;
case 0x43dd6e:goto L43dd6e;
case 0x43dd71:c.instructions+=2;goto B43dd71;
case 0x43dd74:c.instructions+=1;goto B43dd74;
case 0x43dd76:goto L43dd76;
case 0x43dd79:c.instructions+=1;goto B43dd79;
case 0x43dd7b:goto L43dd7b;
case 0x43dd7e:goto L43dd7e;
case 0x43dd81:c.instructions+=2;goto B43dd81;
case 0x43dd83:c.instructions+=1;goto B43dd83;
case 0x43dd85:goto L43dd85;
case 0x43dd87:c.instructions+=1;goto B43dd87;
case 0x43dd89:goto L43dd89;
case 0x43dd8b:goto L43dd8b;
case 0x43dd8e:c.instructions+=5;goto B43dd8e;
case 0x43dd91:c.instructions+=4;goto B43dd91;
case 0x43dd92:c.instructions+=3;goto B43dd92;
case 0x43dd94:c.instructions+=2;goto B43dd94;
case 0x43dd95:c.instructions+=1;goto B43dd95;
case 0x43dd96:goto L43dd96;
case 0x43dd97:c.instructions+=3;goto B43dd97;
case 0x43dd99:c.instructions+=2;goto B43dd99;
case 0x43dd9a:c.instructions+=1;goto B43dd9a;
case 0x43dda0:goto L43dda0;
case 0x43dda4:c.instructions+=6;goto B43dda4;
case 0x43dda6:c.instructions+=5;goto B43dda6;
case 0x43ddaa:c.instructions+=4;goto B43ddaa;
case 0x43ddab:c.instructions+=3;goto B43ddab;
case 0x43ddad:c.instructions+=2;goto B43ddad;
case 0x43ddaf:c.instructions+=1;goto B43ddaf;
case 0x43ddb1:goto L43ddb1;
case 0x43ddb2:c.instructions+=2;goto B43ddb2;
case 0x43ddb4:c.instructions+=1;goto B43ddb4;
case 0x43ddb6:goto L43ddb6;
case 0x43ddb9:c.instructions+=5;goto B43ddb9;
case 0x43ddbc:c.instructions+=4;goto B43ddbc;
case 0x43ddbd:c.instructions+=3;goto B43ddbd;
case 0x43ddbe:c.instructions+=2;goto B43ddbe;
case 0x43ddc0:c.instructions+=1;goto B43ddc0;
case 0x43ddc2:goto L43ddc2;
case 0x43ddc3:goto L43ddc3;
case 0x43ddc7:c.instructions+=3;goto B43ddc7;
case 0x43ddc9:c.instructions+=2;goto B43ddc9;
case 0x43ddcb:c.instructions+=1;goto B43ddcb;
case 0x43ddcd:goto L43ddcd;
case 0x43ddd0:goto L43ddd0;
case 0x43ddd3:c.instructions+=5;goto B43ddd3;
case 0x43ddd6:c.instructions+=4;goto B43ddd6;
case 0x43ddd7:c.instructions+=3;goto B43ddd7;
case 0x43ddd8:c.instructions+=2;goto B43ddd8;
case 0x43ddda:c.instructions+=1;goto B43ddda;
case 0x43dddc:goto L43dddc;
case 0x43dde0:c.instructions+=2;goto B43dde0;
case 0x43dde1:c.instructions+=1;goto B43dde1;
case 0x43ddf0:goto L43ddf0;
case 0x43ddf4:c.instructions+=3;goto B43ddf4;
case 0x43ddf6:c.instructions+=2;goto B43ddf6;
case 0x43ddf7:c.instructions+=1;goto B43ddf7;
case 0x43ddf9:goto L43ddf9;
case 0x43ddfd:c.instructions+=1;goto B43ddfd;
case 0x43de00:goto L43de00;
case 0x43de02:c.instructions+=3;goto B43de02;
case 0x43de05:c.instructions+=2;goto B43de05;
case 0x43de07:c.instructions+=1;goto B43de07;
case 0x43de09:goto L43de09;
case 0x43de0a:c.instructions+=2;goto B43de0a;
case 0x43de0c:c.instructions+=1;goto B43de0c;
case 0x43de0e:goto L43de0e;
case 0x43de10:goto L43de10;
case 0x43de11:c.instructions+=1;goto B43de11;
case 0x43de20:goto L43de20;
case 0x43de24:c.instructions+=2;goto B43de24;
case 0x43de27:c.instructions+=1;goto B43de27;
case 0x43de29:goto L43de29;
case 0x43de30:goto L43de30;
case 0x43de32:c.instructions+=2;goto B43de32;
case 0x43de35:c.instructions+=1;goto B43de35;
case 0x43de37:goto L43de37;
case 0x43de3a:c.instructions+=1;goto B43de3a;
case 0x43de3c:goto L43de3c;
case 0x43de3f:goto L43de3f;
case 0x43de41:c.instructions+=4;goto B43de41;
case 0x43de44:c.instructions+=3;goto B43de44;
case 0x43de45:c.instructions+=2;goto B43de45;
case 0x43de47:c.instructions+=1;goto B43de47;
case 0x43de49:goto L43de49;
case 0x43de50:goto L43de50;
case 0x43de54:c.instructions+=3;goto B43de54;
case 0x43de56:c.instructions+=2;goto B43de56;
case 0x43de58:c.instructions+=1;goto B43de58;
case 0x43de5a:goto L43de5a;
case 0x43de5e:c.instructions+=1;goto B43de5e;
case 0x43de60:goto L43de60;
case 0x43de63:c.instructions+=4;goto B43de63;
case 0x43de66:c.instructions+=3;goto B43de66;
case 0x43de68:c.instructions+=2;goto B43de68;
case 0x43de6a:c.instructions+=1;goto B43de6a;
case 0x43de6c:goto L43de6c;
case 0x43de70:goto L43de70;
case 0x43de73:c.instructions+=1;goto B43de73;
case 0x43de75:goto L43de75;
case 0x43de78:c.instructions+=1;goto B43de78;
case 0x43de7a:goto L43de7a;
case 0x43de7d:c.instructions+=2;goto B43de7d;
case 0x43de80:c.instructions+=1;goto B43de80;
case 0x43de82:goto L43de82;
case 0x43de85:c.instructions+=1;goto B43de85;
case 0x43de87:goto L43de87;
case 0x43de8a:c.instructions+=1;goto B43de8a;
case 0x43de8c:goto L43de8c;
case 0x43de8f:goto L43de8f;
case 0x43de92:c.instructions+=1;goto B43de92;
case 0x43de94:goto L43de94;
case 0x43de97:c.instructions+=1;goto B43de97;
case 0x43de99:goto L43de99;
case 0x43de9c:c.instructions+=1;goto B43de9c;
case 0x43de9f:goto L43de9f;
case 0x43dea2:c.instructions+=5;goto B43dea2;
case 0x43dea4:c.instructions+=4;goto B43dea4;
case 0x43dea7:c.instructions+=3;goto B43dea7;
case 0x43dea8:c.instructions+=2;goto B43dea8;
case 0x43deaa:c.instructions+=1;goto B43deaa;
case 0x43deac:goto L43deac;
case 0x43dead:goto L43dead;
case 0x43deae:c.instructions+=3;goto B43deae;
case 0x43deb0:c.instructions+=2;goto B43deb0;
case 0x43deb2:c.instructions+=1;goto B43deb2;
case 0x43deb4:goto L43deb4;
case 0x43deb6:c.instructions+=1;goto B43deb6;
case 0x43deb8:goto L43deb8;
case 0x43deba:c.instructions+=1;goto B43deba;
case 0x43debc:goto L43debc;
case 0x43debd:goto L43debd;
case 0x43debf:c.instructions+=3;goto B43debf;
case 0x43dec1:c.instructions+=2;goto B43dec1;
case 0x43dec3:c.instructions+=1;goto B43dec3;
case 0x43dec5:goto L43dec5;
case 0x43dec8:c.instructions+=1;goto B43dec8;
case 0x43deca:goto L43deca;
case 0x43decd:c.instructions+=1;goto B43decd;
case 0x43decf:goto L43decf;
case 0x43ded2:c.instructions+=6;goto B43ded2;
case 0x43ded5:c.instructions+=5;goto B43ded5;
case 0x43ded6:c.instructions+=4;goto B43ded6;
case 0x43deda:c.instructions+=3;goto B43deda;
case 0x43dedc:c.instructions+=2;goto B43dedc;
case 0x43dede:c.instructions+=1;goto B43dede;
case 0x43dee0:goto L43dee0;
case 0x43dee2:c.instructions+=2;goto B43dee2;
case 0x43dee3:c.instructions+=1;goto B43dee3;
case 0x43dee5:goto L43dee5;
case 0x43dee7:goto L43dee7;
case 0x43def0:goto L43def0;
case 0x43def4:c.instructions+=5;goto B43def4;
case 0x43def6:c.instructions+=4;goto B43def6;
case 0x43def7:c.instructions+=3;goto B43def7;
case 0x43def9:c.instructions+=2;goto B43def9;
case 0x43defb:c.instructions+=1;goto B43defb;
case 0x43defd:goto L43defd;
case 0x43deff:c.instructions+=1;goto B43deff;
case 0x43df01:goto L43df01;
case 0x43df03:c.instructions+=1;goto B43df03;
case 0x43df05:goto L43df05;
case 0x43df06:goto L43df06;
case 0x43df0c:c.instructions+=1;goto B43df0c;
case 0x43df10:goto L43df10;
case 0x43df12:c.instructions+=2;goto B43df12;
case 0x43df14:c.instructions+=1;goto B43df14;
case 0x43df16:goto L43df16;
case 0x43df18:c.instructions+=1;goto B43df18;
case 0x43df1a:goto L43df1a;
case 0x43df1d:c.instructions+=8;goto B43df1d;
case 0x43df20:c.instructions+=7;goto B43df20;
case 0x43df24:c.instructions+=6;goto B43df24;
case 0x43df25:c.instructions+=5;goto B43df25;
case 0x43df29:c.instructions+=4;goto B43df29;
case 0x43df2b:c.instructions+=3;goto B43df2b;
case 0x43df31:c.instructions+=2;goto B43df31;
case 0x43df33:c.instructions+=1;goto B43df33;
case 0x43df35:goto L43df35;
case 0x43df38:c.instructions+=1;goto B43df38;
case 0x43df3a:goto L43df3a;
case 0x43df40:c.instructions+=2;goto B43df40;
case 0x43df44:c.instructions+=1;goto B43df44;
case 0x43df4a:goto L43df4a;
case 0x43df4d:c.instructions+=3;goto B43df4d;
case 0x43df4e:c.instructions+=2;goto B43df4e;
case 0x43df50:c.instructions+=1;goto B43df50;
case 0x43df52:goto L43df52;
case 0x43df54:c.instructions+=1;goto B43df54;
case 0x43df56:goto L43df56;
case 0x43df5c:c.instructions+=7;goto B43df5c;
case 0x43df5f:c.instructions+=6;goto B43df5f;
case 0x43df62:c.instructions+=5;goto B43df62;
case 0x43df66:c.instructions+=4;goto B43df66;
case 0x43df6a:c.instructions+=3;goto B43df6a;
case 0x43df6c:c.instructions+=2;goto B43df6c;
case 0x43df6e:c.instructions+=1;goto B43df6e;
case 0x43df70:goto L43df70;
case 0x43df72:c.instructions+=6;goto B43df72;
case 0x43df76:c.instructions+=5;goto B43df76;
case 0x43df78:c.instructions+=4;goto B43df78;
case 0x43df7e:c.instructions+=3;goto B43df7e;
case 0x43df80:c.instructions+=2;goto B43df80;
case 0x43df83:c.instructions+=1;goto B43df83;
case 0x43df85:goto L43df85;
case 0x43df89:c.instructions+=4;goto B43df89;
case 0x43df8b:c.instructions+=3;goto B43df8b;
case 0x43df8c:c.instructions+=2;goto B43df8c;
case 0x43df90:c.instructions+=1;goto B43df90;
case 0x43df94:goto L43df94;
case 0x43df96:goto L43df96;
case 0x43df98:c.instructions+=2;goto B43df98;
case 0x43df9a:c.instructions+=1;goto B43df9a;
case 0x43df9c:goto L43df9c;
case 0x43df9e:c.instructions+=1;goto B43df9e;
case 0x43dfa0:goto L43dfa0;
case 0x43dfa1:c.instructions+=2;goto B43dfa1;
case 0x43dfa2:c.instructions+=1;goto B43dfa2;
case 0x43dfa7:goto L43dfa7;
case 0x43dfad:c.instructions+=3;goto B43dfad;
case 0x43dfb0:c.instructions+=2;goto B43dfb0;
case 0x43dfb2:c.instructions+=1;goto B43dfb2;
case 0x43dfb4:goto L43dfb4;
case 0x43dfb5:c.instructions+=2;goto B43dfb5;
case 0x43dfbb:c.instructions+=1;goto B43dfbb;
case 0x43dfbd:goto L43dfbd;
case 0x43dfbf:goto L43dfbf;
case 0x43dfc1:goto L43dfc1;
case 0x43dfc3:goto L43dfc3;
case 0x43dfc4:c.instructions+=2;goto B43dfc4;
case 0x43dfca:c.instructions+=1;goto B43dfca;
case 0x43dfcc:goto L43dfcc;
case 0x43dfce:goto L43dfce;
case 0x43dfd0:c.instructions+=2;goto B43dfd0;
case 0x43dfd1:c.instructions+=1;goto B43dfd1;
case 0x43dfd3:goto L43dfd3;
case 0x43dfd5:goto L43dfd5;
case 0x43dfe0:goto L43dfe0;
case 0x43dfe4:c.instructions+=3;goto B43dfe4;
case 0x43dfe6:c.instructions+=2;goto B43dfe6;
case 0x43dfe8:c.instructions+=1;goto B43dfe8;
case 0x43dfea:goto L43dfea;
case 0x43dfed:c.instructions+=1;goto B43dfed;
case 0x43dfef:goto L43dfef;
case 0x43dff0:goto L43dff0;
case 0x43dff1:c.instructions+=2;goto B43dff1;
case 0x43dff6:c.instructions+=1;goto B43dff6;
case 0x43dff8:goto L43dff8;
default:missing_instruction(c.pc);}
B43d001:L43d001:{c.instructions+=2;NFSU2_TR(0x43d001);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d004:{NFSU2_TR(0x43d004);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d010:L43d010:{c.instructions+=25;NFSU2_TR(0x43d010);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d014:{NFSU2_TR(0x43d014);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d017:{NFSU2_TR(0x43d017);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d01a:{NFSU2_TR(0x43d01a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d01d:{NFSU2_TR(0x43d01d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d01f:{NFSU2_TR(0x43d01f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43d021:{NFSU2_TR(0x43d021);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43d023:{NFSU2_TR(0x43d023);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B43d025:{NFSU2_TR(0x43d025);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B43d027:{NFSU2_TR(0x43d027);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43d029:{NFSU2_TR(0x43d029);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B43d02b:{NFSU2_TR(0x43d02b);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B43d02d:{NFSU2_TR(0x43d02d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43d02f:{NFSU2_TR(0x43d02f);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B43d031:{NFSU2_TR(0x43d031);
__asm__ volatile(".byte 0xd8,0xcd":::"memory");
}
B43d033:{NFSU2_TR(0x43d033);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43d035:{NFSU2_TR(0x43d035);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B43d037:{NFSU2_TR(0x43d037);
__asm__ volatile(".byte 0xdd,0xdc":::"memory");
}
B43d039:{NFSU2_TR(0x43d039);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d03b:{NFSU2_TR(0x43d03b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d03d:{NFSU2_TR(0x43d03d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d03f:{NFSU2_TR(0x43d03f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B43d045:{NFSU2_TR(0x43d045);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d047:{NFSU2_TR(0x43d047);
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
B43d04a:{NFSU2_TR(0x43d04a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43d077;}}
}
B43d04c:L43d04c:{c.instructions+=15;NFSU2_TR(0x43d04c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B43d052:{NFSU2_TR(0x43d052);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d055:{NFSU2_TR(0x43d055);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d059:{NFSU2_TR(0x43d059);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d05d:{NFSU2_TR(0x43d05d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d060:{NFSU2_TR(0x43d060);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43d062:{NFSU2_TR(0x43d062);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43d064:{NFSU2_TR(0x43d064);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d066:{NFSU2_TR(0x43d066);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43d068:{NFSU2_TR(0x43d068);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d06b:{NFSU2_TR(0x43d06b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d06f:{NFSU2_TR(0x43d06f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43d071:{NFSU2_TR(0x43d071);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d074:{NFSU2_TR(0x43d074);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d076:{NFSU2_TR(0x43d076);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d077:L43d077:{c.instructions+=7;NFSU2_TR(0x43d077);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d07b:{NFSU2_TR(0x43d07b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d07d:{NFSU2_TR(0x43d07d);
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
B43d07f:{NFSU2_TR(0x43d07f);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
s4(u32(r4(R+0)),r4(U+0));
}
B43d085:{NFSU2_TR(0x43d085);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d088:{NFSU2_TR(0x43d088);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d08b:{NFSU2_TR(0x43d08b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d090:L43d090:{c.instructions+=12;NFSU2_TR(0x43d090);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d094:{NFSU2_TR(0x43d094);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d098:{NFSU2_TR(0x43d098);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43d09b:{NFSU2_TR(0x43d09b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d09f:{NFSU2_TR(0x43d09f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d0a2:{NFSU2_TR(0x43d0a2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d0a6:{NFSU2_TR(0x43d0a6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43d0a8:{NFSU2_TR(0x43d0a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d0ac:{NFSU2_TR(0x43d0ac);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d0ae:{NFSU2_TR(0x43d0ae);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d0b0:{NFSU2_TR(0x43d0b0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d0b3:{NFSU2_TR(0x43d0b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d0c0:L43d0c0:{c.instructions+=17;NFSU2_TR(0x43d0c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d0c4:{NFSU2_TR(0x43d0c4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d0c8:{NFSU2_TR(0x43d0c8);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43d0cb:{NFSU2_TR(0x43d0cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d0cf:{NFSU2_TR(0x43d0cf);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d0d2:{NFSU2_TR(0x43d0d2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d0d6:{NFSU2_TR(0x43d0d6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43d0d9:{NFSU2_TR(0x43d0d9);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d0dc:{NFSU2_TR(0x43d0dc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d0e0:{NFSU2_TR(0x43d0e0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43d0e2:{NFSU2_TR(0x43d0e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d0e6:{NFSU2_TR(0x43d0e6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d0e8:{NFSU2_TR(0x43d0e8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d0ea:{NFSU2_TR(0x43d0ea);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43d0ec:{NFSU2_TR(0x43d0ec);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d0ef:{NFSU2_TR(0x43d0ef);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d0f2:{NFSU2_TR(0x43d0f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d100:L43d100:{c.instructions+=23;NFSU2_TR(0x43d100);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d104:{NFSU2_TR(0x43d104);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d108:{NFSU2_TR(0x43d108);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43d10b:{NFSU2_TR(0x43d10b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d10f:{NFSU2_TR(0x43d10f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d112:{NFSU2_TR(0x43d112);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d116:{NFSU2_TR(0x43d116);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43d119:{NFSU2_TR(0x43d119);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d11c:{NFSU2_TR(0x43d11c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d120:{NFSU2_TR(0x43d120);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43d123:{NFSU2_TR(0x43d123);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d126:{NFSU2_TR(0x43d126);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d12a:{NFSU2_TR(0x43d12a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d12e:{NFSU2_TR(0x43d12e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43d130:{NFSU2_TR(0x43d130);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d134:{NFSU2_TR(0x43d134);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d136:{NFSU2_TR(0x43d136);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d13a:{NFSU2_TR(0x43d13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d13d:{NFSU2_TR(0x43d13d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d13f:{NFSU2_TR(0x43d13f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43d141:{NFSU2_TR(0x43d141);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d144:{NFSU2_TR(0x43d144);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d147:{NFSU2_TR(0x43d147);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d150:L43d150:{c.instructions+=9;NFSU2_TR(0x43d150);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d154:{NFSU2_TR(0x43d154);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d156:{NFSU2_TR(0x43d156);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d15a:{NFSU2_TR(0x43d15a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d15c:{NFSU2_TR(0x43d15c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B43d15e:{NFSU2_TR(0x43d15e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d162:{NFSU2_TR(0x43d162);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d164:{NFSU2_TR(0x43d164);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d167:{NFSU2_TR(0x43d167);
if(r1(R+518)){{goto L43d17c;}}
}
B43d169:L43d169:{c.instructions+=7;NFSU2_TR(0x43d169);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d16c:{NFSU2_TR(0x43d16c);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d16f:{NFSU2_TR(0x43d16f);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B43d171:{NFSU2_TR(0x43d171);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d175:{NFSU2_TR(0x43d175);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d177:{NFSU2_TR(0x43d177);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d17a:{NFSU2_TR(0x43d17a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d17f;}}
}
B43d17c:L43d17c:{c.instructions+=2;NFSU2_TR(0x43d17c);
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
B43d17e:{NFSU2_TR(0x43d17e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d17f:L43d17f:{c.instructions+=2;NFSU2_TR(0x43d17f);
w4(R+0,u32(0x1ull));
}
B43d184:{NFSU2_TR(0x43d184);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d190:L43d190:{c.instructions+=9;NFSU2_TR(0x43d190);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d194:{NFSU2_TR(0x43d194);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d196:{NFSU2_TR(0x43d196);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d19a:{NFSU2_TR(0x43d19a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d19c:{NFSU2_TR(0x43d19c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B43d19e:{NFSU2_TR(0x43d19e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d1a2:{NFSU2_TR(0x43d1a2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d1a4:{NFSU2_TR(0x43d1a4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d1a7:{NFSU2_TR(0x43d1a7);
if(r1(R+518)){{goto L43d1cf;}}
}
B43d1a9:L43d1a9:{c.instructions+=7;NFSU2_TR(0x43d1a9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d1ac:{NFSU2_TR(0x43d1ac);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d1af:{NFSU2_TR(0x43d1af);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B43d1b1:{NFSU2_TR(0x43d1b1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d1b5:{NFSU2_TR(0x43d1b5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d1b7:{NFSU2_TR(0x43d1b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d1ba:{NFSU2_TR(0x43d1ba);
if(r1(R+518)){{goto L43d1cf;}}
}
B43d1bc:L43d1bc:{c.instructions+=7;NFSU2_TR(0x43d1bc);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d1bf:{NFSU2_TR(0x43d1bf);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d1c2:{NFSU2_TR(0x43d1c2);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B43d1c4:{NFSU2_TR(0x43d1c4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d1c8:{NFSU2_TR(0x43d1c8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d1ca:{NFSU2_TR(0x43d1ca);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d1cd:{NFSU2_TR(0x43d1cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d1d2;}}
}
B43d1cf:L43d1cf:{c.instructions+=2;NFSU2_TR(0x43d1cf);
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
B43d1d1:{NFSU2_TR(0x43d1d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d1d2:L43d1d2:{c.instructions+=2;NFSU2_TR(0x43d1d2);
w4(R+0,u32(0x1ull));
}
B43d1d7:{NFSU2_TR(0x43d1d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d1e0:L43d1e0:{c.instructions+=23;NFSU2_TR(0x43d1e0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d1e4:{NFSU2_TR(0x43d1e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d1e8:{NFSU2_TR(0x43d1e8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d1ea:{NFSU2_TR(0x43d1ea);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43d1ed:{NFSU2_TR(0x43d1ed);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d1f0:{NFSU2_TR(0x43d1f0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43d1f2:{NFSU2_TR(0x43d1f2);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43d1f4:{NFSU2_TR(0x43d1f4);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d1f7:{NFSU2_TR(0x43d1f7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43d1f9:{NFSU2_TR(0x43d1f9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d1fc:{NFSU2_TR(0x43d1fc);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43d1fe:{NFSU2_TR(0x43d1fe);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43d200:{NFSU2_TR(0x43d200);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d203:{NFSU2_TR(0x43d203);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43d206:{NFSU2_TR(0x43d206);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d209:{NFSU2_TR(0x43d209);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43d20c:{NFSU2_TR(0x43d20c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d210:{NFSU2_TR(0x43d210);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B43d212:{NFSU2_TR(0x43d212);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d214:{NFSU2_TR(0x43d214);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43d216:{NFSU2_TR(0x43d216);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d219:{NFSU2_TR(0x43d219);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d21c:{NFSU2_TR(0x43d21c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d220:L43d220:{c.instructions+=7;NFSU2_TR(0x43d220);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d224:{NFSU2_TR(0x43d224);
u8 U[4];
w4(U+0,u32(0x7f7fffffull));
s4(u32(r4(R+0)),r4(U+0));
}
B43d22a:{NFSU2_TR(0x43d22a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x7f7fffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B43d231:{NFSU2_TR(0x43d231);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d235:{NFSU2_TR(0x43d235);
u8 U[4];
w4(U+0,u32(0xff7fffffull));
s4(u32(r4(R+0)),r4(U+0));
}
B43d23b:{NFSU2_TR(0x43d23b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0xff7fffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B43d242:{NFSU2_TR(0x43d242);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d250:L43d250:{c.instructions+=12;NFSU2_TR(0x43d250);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d254:{NFSU2_TR(0x43d254);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d256:{NFSU2_TR(0x43d256);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d259:{NFSU2_TR(0x43d259);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d25d:{NFSU2_TR(0x43d25d);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43d25f:{NFSU2_TR(0x43d25f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d261:{NFSU2_TR(0x43d261);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43d264:{NFSU2_TR(0x43d264);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d268:{NFSU2_TR(0x43d268);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43d26a:{NFSU2_TR(0x43d26a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d26c:{NFSU2_TR(0x43d26c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d26f:{NFSU2_TR(0x43d26f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d270:L43d270:{c.instructions+=10;NFSU2_TR(0x43d270);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d274:{NFSU2_TR(0x43d274);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d276:{NFSU2_TR(0x43d276);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43d277:{NFSU2_TR(0x43d277);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43d27b:{NFSU2_TR(0x43d27b);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d27d:{NFSU2_TR(0x43d27d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43d281:{NFSU2_TR(0x43d281);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B43d283:{NFSU2_TR(0x43d283);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d285:{NFSU2_TR(0x43d285);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d288:{NFSU2_TR(0x43d288);
if(r1(R+514)){{goto L43d290;}}
}
B43d28a:L43d28a:{c.instructions+=2;NFSU2_TR(0x43d28a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d28c:{NFSU2_TR(0x43d28c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d290:L43d290:{c.instructions+=7;NFSU2_TR(0x43d290);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d293:{NFSU2_TR(0x43d293);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d296:{NFSU2_TR(0x43d296);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43d29a:{NFSU2_TR(0x43d29a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B43d29c:{NFSU2_TR(0x43d29c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d29e:{NFSU2_TR(0x43d29e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d2a1:{NFSU2_TR(0x43d2a1);
if(r1(R+514)){{goto L43d2a9;}}
}
B43d2a3:L43d2a3:{c.instructions+=2;NFSU2_TR(0x43d2a3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d2a5:{NFSU2_TR(0x43d2a5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d2a9:L43d2a9:{c.instructions+=8;NFSU2_TR(0x43d2a9);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d2ab:{NFSU2_TR(0x43d2ab);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d2af:{NFSU2_TR(0x43d2af);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d2b1:{NFSU2_TR(0x43d2b1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43d2b5:{NFSU2_TR(0x43d2b5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B43d2b7:{NFSU2_TR(0x43d2b7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d2b9:{NFSU2_TR(0x43d2b9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d2bc:{NFSU2_TR(0x43d2bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d2c4;}}
}
B43d2be:L43d2be:{c.instructions+=2;NFSU2_TR(0x43d2be);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d2c0:{NFSU2_TR(0x43d2c0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d2c4:L43d2c4:{c.instructions+=7;NFSU2_TR(0x43d2c4);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d2c7:{NFSU2_TR(0x43d2c7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d2ca:{NFSU2_TR(0x43d2ca);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43d2ce:{NFSU2_TR(0x43d2ce);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B43d2d0:{NFSU2_TR(0x43d2d0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d2d2:{NFSU2_TR(0x43d2d2);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d2d5:{NFSU2_TR(0x43d2d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d2dd;}}
}
B43d2d7:L43d2d7:{c.instructions+=2;NFSU2_TR(0x43d2d7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d2d9:{NFSU2_TR(0x43d2d9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d2dd:L43d2dd:{c.instructions+=8;NFSU2_TR(0x43d2dd);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B43d2df:{NFSU2_TR(0x43d2df);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d2e1:{NFSU2_TR(0x43d2e1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43d2e3:{NFSU2_TR(0x43d2e3);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d2e6:{NFSU2_TR(0x43d2e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43d2e7:{NFSU2_TR(0x43d2e7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d2e9:{NFSU2_TR(0x43d2e9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d2ec:{NFSU2_TR(0x43d2ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d2f0:L43d2f0:{c.instructions+=11;NFSU2_TR(0x43d2f0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d2f4:{NFSU2_TR(0x43d2f4);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d2f6:{NFSU2_TR(0x43d2f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43d2f7:{NFSU2_TR(0x43d2f7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d2fb:{NFSU2_TR(0x43d2fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43d2ff:{NFSU2_TR(0x43d2ff);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d301:{NFSU2_TR(0x43d301);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43d305:{NFSU2_TR(0x43d305);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B43d307:{NFSU2_TR(0x43d307);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d309:{NFSU2_TR(0x43d309);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d30c:{NFSU2_TR(0x43d30c);
if(r1(R+514)){{goto L43d314;}}
}
B43d30e:L43d30e:{c.instructions+=2;NFSU2_TR(0x43d30e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d310:{NFSU2_TR(0x43d310);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d314:L43d314:{c.instructions+=8;NFSU2_TR(0x43d314);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d317:{NFSU2_TR(0x43d317);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d31b:{NFSU2_TR(0x43d31b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d31e:{NFSU2_TR(0x43d31e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43d322:{NFSU2_TR(0x43d322);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B43d324:{NFSU2_TR(0x43d324);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d326:{NFSU2_TR(0x43d326);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d329:{NFSU2_TR(0x43d329);
if(r1(R+514)){{goto L43d331;}}
}
B43d32b:L43d32b:{c.instructions+=2;NFSU2_TR(0x43d32b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d32d:{NFSU2_TR(0x43d32d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d331:L43d331:{c.instructions+=9;NFSU2_TR(0x43d331);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d335:{NFSU2_TR(0x43d335);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d339:{NFSU2_TR(0x43d339);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d33b:{NFSU2_TR(0x43d33b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d33d:{NFSU2_TR(0x43d33d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43d341:{NFSU2_TR(0x43d341);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B43d343:{NFSU2_TR(0x43d343);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d345:{NFSU2_TR(0x43d345);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d348:{NFSU2_TR(0x43d348);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d350;}}
}
B43d34a:L43d34a:{c.instructions+=2;NFSU2_TR(0x43d34a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d34c:{NFSU2_TR(0x43d34c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d350:L43d350:{c.instructions+=8;NFSU2_TR(0x43d350);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d354:{NFSU2_TR(0x43d354);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d357:{NFSU2_TR(0x43d357);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d35a:{NFSU2_TR(0x43d35a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43d35e:{NFSU2_TR(0x43d35e);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B43d360:{NFSU2_TR(0x43d360);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d362:{NFSU2_TR(0x43d362);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d365:{NFSU2_TR(0x43d365);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d36d;}}
}
B43d367:L43d367:{c.instructions+=2;NFSU2_TR(0x43d367);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d369:{NFSU2_TR(0x43d369);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d36d:L43d36d:{c.instructions+=8;NFSU2_TR(0x43d36d);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B43d36f:{NFSU2_TR(0x43d36f);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d371:{NFSU2_TR(0x43d371);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43d373:{NFSU2_TR(0x43d373);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d376:{NFSU2_TR(0x43d376);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43d377:{NFSU2_TR(0x43d377);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d379:{NFSU2_TR(0x43d379);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d37c:{NFSU2_TR(0x43d37c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d380:L43d380:{c.instructions+=9;NFSU2_TR(0x43d380);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d384:{NFSU2_TR(0x43d384);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d386:{NFSU2_TR(0x43d386);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d38a:{NFSU2_TR(0x43d38a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d38c:{NFSU2_TR(0x43d38c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43d390:{NFSU2_TR(0x43d390);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B43d392:{NFSU2_TR(0x43d392);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d394:{NFSU2_TR(0x43d394);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d397:{NFSU2_TR(0x43d397);
if(r1(R+514)){{goto L43d39f;}}
}
B43d399:L43d399:{c.instructions+=2;NFSU2_TR(0x43d399);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d39b:{NFSU2_TR(0x43d39b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d39f:L43d39f:{c.instructions+=7;NFSU2_TR(0x43d39f);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d3a2:{NFSU2_TR(0x43d3a2);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d3a5:{NFSU2_TR(0x43d3a5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43d3a9:{NFSU2_TR(0x43d3a9);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B43d3ab:{NFSU2_TR(0x43d3ab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d3ad:{NFSU2_TR(0x43d3ad);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d3b0:{NFSU2_TR(0x43d3b0);
if(r1(R+514)){{goto L43d3b8;}}
}
B43d3b2:L43d3b2:{c.instructions+=2;NFSU2_TR(0x43d3b2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d3b4:{NFSU2_TR(0x43d3b4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d3b8:L43d3b8:{c.instructions+=10;NFSU2_TR(0x43d3b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d3bc:{NFSU2_TR(0x43d3bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43d3bd:{NFSU2_TR(0x43d3bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43d3c1:{NFSU2_TR(0x43d3c1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d3c3:{NFSU2_TR(0x43d3c3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d3c5:{NFSU2_TR(0x43d3c5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43d3c9:{NFSU2_TR(0x43d3c9);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B43d3cb:{NFSU2_TR(0x43d3cb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d3cd:{NFSU2_TR(0x43d3cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d3d0:{NFSU2_TR(0x43d3d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d3d8;}}
}
B43d3d2:L43d3d2:{c.instructions+=2;NFSU2_TR(0x43d3d2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d3d4:{NFSU2_TR(0x43d3d4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d3d8:L43d3d8:{c.instructions+=8;NFSU2_TR(0x43d3d8);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d3db:{NFSU2_TR(0x43d3db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43d3dc:{NFSU2_TR(0x43d3dc);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d3df:{NFSU2_TR(0x43d3df);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43d3e3:{NFSU2_TR(0x43d3e3);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B43d3e5:{NFSU2_TR(0x43d3e5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d3e7:{NFSU2_TR(0x43d3e7);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d3ea:{NFSU2_TR(0x43d3ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d3f2;}}
}
B43d3ec:L43d3ec:{c.instructions+=2;NFSU2_TR(0x43d3ec);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d3ee:{NFSU2_TR(0x43d3ee);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d3f2:L43d3f2:{c.instructions+=7;NFSU2_TR(0x43d3f2);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B43d3f4:{NFSU2_TR(0x43d3f4);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d3f6:{NFSU2_TR(0x43d3f6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43d3f8:{NFSU2_TR(0x43d3f8);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d3fb:{NFSU2_TR(0x43d3fb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d3fd:{NFSU2_TR(0x43d3fd);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d400:{NFSU2_TR(0x43d400);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d410:L43d410:{c.instructions+=9;NFSU2_TR(0x43d410);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d414:{NFSU2_TR(0x43d414);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43d415:{NFSU2_TR(0x43d415);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43d419:{NFSU2_TR(0x43d419);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d41b:{NFSU2_TR(0x43d41b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d41f:{NFSU2_TR(0x43d41f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d421:{NFSU2_TR(0x43d421);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d423:{NFSU2_TR(0x43d423);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d426:{NFSU2_TR(0x43d426);
if(r1(R+518)){{goto L43d464;}}
}
B43d428:L43d428:{c.instructions+=7;NFSU2_TR(0x43d428);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d42c:{NFSU2_TR(0x43d42c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d430:{NFSU2_TR(0x43d430);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d432:{NFSU2_TR(0x43d432);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d434:{NFSU2_TR(0x43d434);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d436:{NFSU2_TR(0x43d436);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d439:{NFSU2_TR(0x43d439);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43d464;}}
}
B43d43b:L43d43b:{c.instructions+=6;NFSU2_TR(0x43d43b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d43e:{NFSU2_TR(0x43d43e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d442:{NFSU2_TR(0x43d442);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d445:{NFSU2_TR(0x43d445);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d447:{NFSU2_TR(0x43d447);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d44a:{NFSU2_TR(0x43d44a);
if(r1(R+518)){{goto L43d464;}}
}
B43d44c:L43d44c:{c.instructions+=6;NFSU2_TR(0x43d44c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d450:{NFSU2_TR(0x43d450);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d453:{NFSU2_TR(0x43d453);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d456:{NFSU2_TR(0x43d456);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d458:{NFSU2_TR(0x43d458);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d45b:{NFSU2_TR(0x43d45b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43d464;}}
}
B43d45d:L43d45d:{c.instructions+=3;NFSU2_TR(0x43d45d);
w4(R+0,u32(0x1ull));
}
B43d462:{NFSU2_TR(0x43d462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43d463:{NFSU2_TR(0x43d463);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d464:L43d464:{c.instructions+=3;NFSU2_TR(0x43d464);
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
B43d466:{NFSU2_TR(0x43d466);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43d467:{NFSU2_TR(0x43d467);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d470:L43d470:{c.instructions+=9;NFSU2_TR(0x43d470);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43d471:{NFSU2_TR(0x43d471);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43d475:{NFSU2_TR(0x43d475);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d477:{NFSU2_TR(0x43d477);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43d478:{NFSU2_TR(0x43d478);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43d47c:{NFSU2_TR(0x43d47c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d47e:{NFSU2_TR(0x43d47e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d480:{NFSU2_TR(0x43d480);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d483:{NFSU2_TR(0x43d483);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d4ba;}}
}
B43d485:L43d485:{c.instructions+=7;NFSU2_TR(0x43d485);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d489:{NFSU2_TR(0x43d489);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d48b:{NFSU2_TR(0x43d48b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d48f:{NFSU2_TR(0x43d48f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d491:{NFSU2_TR(0x43d491);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d493:{NFSU2_TR(0x43d493);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d496:{NFSU2_TR(0x43d496);
if(r1(R+514)){{goto L43d4ba;}}
}
B43d498:L43d498:{c.instructions+=5;NFSU2_TR(0x43d498);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d49b:{NFSU2_TR(0x43d49b);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d49e:{NFSU2_TR(0x43d49e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d4a0:{NFSU2_TR(0x43d4a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d4a3:{NFSU2_TR(0x43d4a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d4ba;}}
}
B43d4a5:L43d4a5:{c.instructions+=5;NFSU2_TR(0x43d4a5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d4a8:{NFSU2_TR(0x43d4a8);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d4ab:{NFSU2_TR(0x43d4ab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d4ad:{NFSU2_TR(0x43d4ad);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d4b0:{NFSU2_TR(0x43d4b0);
if(r1(R+514)){{goto L43d4ba;}}
}
B43d4b2:L43d4b2:{c.instructions+=4;NFSU2_TR(0x43d4b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43d4b3:{NFSU2_TR(0x43d4b3);
w4(R+0,u32(0x1ull));
}
B43d4b8:{NFSU2_TR(0x43d4b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43d4b9:{NFSU2_TR(0x43d4b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d4ba:L43d4ba:{c.instructions+=4;NFSU2_TR(0x43d4ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43d4bb:{NFSU2_TR(0x43d4bb);
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
B43d4bd:{NFSU2_TR(0x43d4bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43d4be:{NFSU2_TR(0x43d4be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d4c0:L43d4c0:{c.instructions+=9;NFSU2_TR(0x43d4c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43d4c1:{NFSU2_TR(0x43d4c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43d4c5:{NFSU2_TR(0x43d4c5);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d4c7:{NFSU2_TR(0x43d4c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43d4c8:{NFSU2_TR(0x43d4c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43d4cc:{NFSU2_TR(0x43d4cc);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d4ce:{NFSU2_TR(0x43d4ce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d4d0:{NFSU2_TR(0x43d4d0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d4d3:{NFSU2_TR(0x43d4d3);
if(r1(R+514)){{goto L43d50a;}}
}
B43d4d5:L43d4d5:{c.instructions+=7;NFSU2_TR(0x43d4d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d4d9:{NFSU2_TR(0x43d4d9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d4db:{NFSU2_TR(0x43d4db);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d4df:{NFSU2_TR(0x43d4df);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d4e1:{NFSU2_TR(0x43d4e1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d4e3:{NFSU2_TR(0x43d4e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d4e6:{NFSU2_TR(0x43d4e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d50a;}}
}
B43d4e8:L43d4e8:{c.instructions+=5;NFSU2_TR(0x43d4e8);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d4eb:{NFSU2_TR(0x43d4eb);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d4ee:{NFSU2_TR(0x43d4ee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d4f0:{NFSU2_TR(0x43d4f0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d4f3:{NFSU2_TR(0x43d4f3);
if(r1(R+514)){{goto L43d50a;}}
}
B43d4f5:L43d4f5:{c.instructions+=5;NFSU2_TR(0x43d4f5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d4f8:{NFSU2_TR(0x43d4f8);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d4fb:{NFSU2_TR(0x43d4fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d4fd:{NFSU2_TR(0x43d4fd);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d500:{NFSU2_TR(0x43d500);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d50a;}}
}
B43d502:L43d502:{c.instructions+=4;NFSU2_TR(0x43d502);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43d503:{NFSU2_TR(0x43d503);
w4(R+0,u32(0x1ull));
}
B43d508:{NFSU2_TR(0x43d508);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43d509:{NFSU2_TR(0x43d509);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d50a:L43d50a:{c.instructions+=4;NFSU2_TR(0x43d50a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43d50b:{NFSU2_TR(0x43d50b);
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
B43d50d:{NFSU2_TR(0x43d50d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43d50e:{NFSU2_TR(0x43d50e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d510:L43d510:{c.instructions+=11;NFSU2_TR(0x43d510);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d514:{NFSU2_TR(0x43d514);
w4(R+4,u32(0x7f7fffffull));
}
B43d519:{NFSU2_TR(0x43d519);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43d51b:{NFSU2_TR(0x43d51b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d51e:{NFSU2_TR(0x43d51e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d521:{NFSU2_TR(0x43d521);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d525:{NFSU2_TR(0x43d525);
w4(R+4,u32(0xff7fffffull));
}
B43d52a:{NFSU2_TR(0x43d52a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B43d52c:{NFSU2_TR(0x43d52c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d52f:{NFSU2_TR(0x43d52f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d532:{NFSU2_TR(0x43d532);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d540:L43d540:{c.instructions+=16;NFSU2_TR(0x43d540);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d544:{NFSU2_TR(0x43d544);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d546:{NFSU2_TR(0x43d546);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d549:{NFSU2_TR(0x43d549);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d54c:{NFSU2_TR(0x43d54c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d550:{NFSU2_TR(0x43d550);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B43d552:{NFSU2_TR(0x43d552);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d554:{NFSU2_TR(0x43d554);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B43d556:{NFSU2_TR(0x43d556);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d559:{NFSU2_TR(0x43d559);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43d55c:{NFSU2_TR(0x43d55c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d560:{NFSU2_TR(0x43d560);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B43d562:{NFSU2_TR(0x43d562);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d564:{NFSU2_TR(0x43d564);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d567:{NFSU2_TR(0x43d567);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d56a:{NFSU2_TR(0x43d56a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d570:L43d570:{c.instructions+=13;NFSU2_TR(0x43d570);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43d571:{NFSU2_TR(0x43d571);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d575:{NFSU2_TR(0x43d575);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d578:{NFSU2_TR(0x43d578);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d57a:{NFSU2_TR(0x43d57a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d57d:{NFSU2_TR(0x43d57d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43d57f:{NFSU2_TR(0x43d57f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d583:{NFSU2_TR(0x43d583);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d587:{NFSU2_TR(0x43d587);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d589:{NFSU2_TR(0x43d589);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B43d58d:{NFSU2_TR(0x43d58d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d58f:{NFSU2_TR(0x43d58f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d592:{NFSU2_TR(0x43d592);
if(r1(R+514)){{goto L43d596;}}
}
B43d594:L43d594:{c.instructions+=1;NFSU2_TR(0x43d594);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43d596:L43d596:{c.instructions+=5;NFSU2_TR(0x43d596);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d59a:{NFSU2_TR(0x43d59a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d59d:{NFSU2_TR(0x43d59d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d59f:{NFSU2_TR(0x43d59f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d5a2:{NFSU2_TR(0x43d5a2);
if(r1(R+514)){{goto L43d5ab;}}
}
B43d5a4:L43d5a4:{c.instructions+=2;NFSU2_TR(0x43d5a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d5a8:{NFSU2_TR(0x43d5a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d5ab:L43d5ab:{c.instructions+=5;NFSU2_TR(0x43d5ab);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d5af:{NFSU2_TR(0x43d5af);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d5b2:{NFSU2_TR(0x43d5b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d5b4:{NFSU2_TR(0x43d5b4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d5b7:{NFSU2_TR(0x43d5b7);
if(r1(R+514)){{goto L43d5c0;}}
}
B43d5b9:L43d5b9:{c.instructions+=2;NFSU2_TR(0x43d5b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43d5bd:{NFSU2_TR(0x43d5bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d5c0:L43d5c0:{c.instructions+=6;NFSU2_TR(0x43d5c0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d5c4:{NFSU2_TR(0x43d5c4);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43d5c6:{NFSU2_TR(0x43d5c6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d5c8:{NFSU2_TR(0x43d5c8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d5ca:{NFSU2_TR(0x43d5ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d5cd:{NFSU2_TR(0x43d5cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d5d3;}}
}
B43d5cf:L43d5cf:{c.instructions+=2;NFSU2_TR(0x43d5cf);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d5d1:{NFSU2_TR(0x43d5d1);
{goto L43d5d5;}
}
B43d5d3:L43d5d3:{c.instructions+=1;NFSU2_TR(0x43d5d3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d5d5:L43d5d5:{c.instructions+=5;NFSU2_TR(0x43d5d5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d5d9:{NFSU2_TR(0x43d5d9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d5dc:{NFSU2_TR(0x43d5dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d5de:{NFSU2_TR(0x43d5de);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d5e1:{NFSU2_TR(0x43d5e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d5ea;}}
}
B43d5e3:L43d5e3:{c.instructions+=2;NFSU2_TR(0x43d5e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d5e7:{NFSU2_TR(0x43d5e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d5ea:L43d5ea:{c.instructions+=5;NFSU2_TR(0x43d5ea);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d5ee:{NFSU2_TR(0x43d5ee);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d5f1:{NFSU2_TR(0x43d5f1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d5f3:{NFSU2_TR(0x43d5f3);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d5f6:{NFSU2_TR(0x43d5f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d5ff;}}
}
B43d5f8:L43d5f8:{c.instructions+=2;NFSU2_TR(0x43d5f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43d5fc:{NFSU2_TR(0x43d5fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d5ff:L43d5ff:{c.instructions+=2;NFSU2_TR(0x43d5ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43d600:{NFSU2_TR(0x43d600);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d610:L43d610:{c.instructions+=25;NFSU2_TR(0x43d610);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B43d613:{NFSU2_TR(0x43d613);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d617:{NFSU2_TR(0x43d617);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d619:{NFSU2_TR(0x43d619);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d61d:{NFSU2_TR(0x43d61d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d621:{NFSU2_TR(0x43d621);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d624:{NFSU2_TR(0x43d624);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d628:{NFSU2_TR(0x43d628);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d62c:{NFSU2_TR(0x43d62c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d62f:{NFSU2_TR(0x43d62f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d633:{NFSU2_TR(0x43d633);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d637:{NFSU2_TR(0x43d637);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d63b:{NFSU2_TR(0x43d63b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d63d:{NFSU2_TR(0x43d63d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d641:{NFSU2_TR(0x43d641);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d645:{NFSU2_TR(0x43d645);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d648:{NFSU2_TR(0x43d648);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d64c:{NFSU2_TR(0x43d64c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d650:{NFSU2_TR(0x43d650);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d653:{NFSU2_TR(0x43d653);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d657:{NFSU2_TR(0x43d657);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43d659:{NFSU2_TR(0x43d659);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d65b:{NFSU2_TR(0x43d65b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d65d:{NFSU2_TR(0x43d65d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d660:{NFSU2_TR(0x43d660);
if(r1(R+514)){{goto L43d666;}}
}
B43d662:L43d662:{c.instructions+=2;NFSU2_TR(0x43d662);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d664:{NFSU2_TR(0x43d664);
{goto L43d668;}
}
B43d666:L43d666:{c.instructions+=1;NFSU2_TR(0x43d666);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d668:L43d668:{c.instructions+=5;NFSU2_TR(0x43d668);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d66c:{NFSU2_TR(0x43d66c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d66f:{NFSU2_TR(0x43d66f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d671:{NFSU2_TR(0x43d671);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d674:{NFSU2_TR(0x43d674);
if(r1(R+514)){{goto L43d67d;}}
}
B43d676:L43d676:{c.instructions+=2;NFSU2_TR(0x43d676);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d67a:{NFSU2_TR(0x43d67a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d67d:L43d67d:{c.instructions+=5;NFSU2_TR(0x43d67d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d681:{NFSU2_TR(0x43d681);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d684:{NFSU2_TR(0x43d684);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d686:{NFSU2_TR(0x43d686);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d689:{NFSU2_TR(0x43d689);
if(r1(R+514)){{goto L43d692;}}
}
B43d68b:L43d68b:{c.instructions+=2;NFSU2_TR(0x43d68b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B43d68f:{NFSU2_TR(0x43d68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d692:L43d692:{c.instructions+=6;NFSU2_TR(0x43d692);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d696:{NFSU2_TR(0x43d696);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d69a:{NFSU2_TR(0x43d69a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d69c:{NFSU2_TR(0x43d69c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d69e:{NFSU2_TR(0x43d69e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d6a1:{NFSU2_TR(0x43d6a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d6a9;}}
}
B43d6a3:L43d6a3:{c.instructions+=2;NFSU2_TR(0x43d6a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d6a7:{NFSU2_TR(0x43d6a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43d6a9:L43d6a9:{c.instructions+=5;NFSU2_TR(0x43d6a9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d6ad:{NFSU2_TR(0x43d6ad);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d6b0:{NFSU2_TR(0x43d6b0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d6b2:{NFSU2_TR(0x43d6b2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d6b5:{NFSU2_TR(0x43d6b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d6be;}}
}
B43d6b7:L43d6b7:{c.instructions+=2;NFSU2_TR(0x43d6b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d6bb:{NFSU2_TR(0x43d6bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d6be:L43d6be:{c.instructions+=5;NFSU2_TR(0x43d6be);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d6c2:{NFSU2_TR(0x43d6c2);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d6c5:{NFSU2_TR(0x43d6c5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d6c7:{NFSU2_TR(0x43d6c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d6ca:{NFSU2_TR(0x43d6ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d6d3;}}
}
B43d6cc:L43d6cc:{c.instructions+=2;NFSU2_TR(0x43d6cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d6d0:{NFSU2_TR(0x43d6d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d6d3:L43d6d3:{c.instructions+=2;NFSU2_TR(0x43d6d3);
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
B43d6d6:{NFSU2_TR(0x43d6d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d6e0:L43d6e0:{c.instructions+=20;NFSU2_TR(0x43d6e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B43d6e3:{NFSU2_TR(0x43d6e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d6e7:{NFSU2_TR(0x43d6e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d6ea:{NFSU2_TR(0x43d6ea);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d6ec:{NFSU2_TR(0x43d6ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d6ef:{NFSU2_TR(0x43d6ef);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B43d6f1:{NFSU2_TR(0x43d6f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d6f5:{NFSU2_TR(0x43d6f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d6f9:{NFSU2_TR(0x43d6f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43d6fb:{NFSU2_TR(0x43d6fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d6ff:{NFSU2_TR(0x43d6ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d703:{NFSU2_TR(0x43d703);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d705:{NFSU2_TR(0x43d705);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B43d709:{NFSU2_TR(0x43d709);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d70c:{NFSU2_TR(0x43d70c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d70f:{NFSU2_TR(0x43d70f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d713:{NFSU2_TR(0x43d713);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d715:{NFSU2_TR(0x43d715);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d719:{NFSU2_TR(0x43d719);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d71c:{NFSU2_TR(0x43d71c);
if(r1(R+514)){{goto L43d722;}}
}
B43d71e:L43d71e:{c.instructions+=2;NFSU2_TR(0x43d71e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B43d720:{NFSU2_TR(0x43d720);
{goto L43d724;}
}
B43d722:L43d722:{c.instructions+=1;NFSU2_TR(0x43d722);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43d724:L43d724:{c.instructions+=5;NFSU2_TR(0x43d724);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d728:{NFSU2_TR(0x43d728);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d72b:{NFSU2_TR(0x43d72b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d72d:{NFSU2_TR(0x43d72d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d730:{NFSU2_TR(0x43d730);
if(r1(R+514)){{goto L43d739;}}
}
B43d732:L43d732:{c.instructions+=2;NFSU2_TR(0x43d732);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d736:{NFSU2_TR(0x43d736);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d739:L43d739:{c.instructions+=5;NFSU2_TR(0x43d739);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d73d:{NFSU2_TR(0x43d73d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d740:{NFSU2_TR(0x43d740);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d742:{NFSU2_TR(0x43d742);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d745:{NFSU2_TR(0x43d745);
if(r1(R+514)){{goto L43d74e;}}
}
B43d747:L43d747:{c.instructions+=2;NFSU2_TR(0x43d747);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B43d74b:{NFSU2_TR(0x43d74b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d74e:L43d74e:{c.instructions+=6;NFSU2_TR(0x43d74e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d752:{NFSU2_TR(0x43d752);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d756:{NFSU2_TR(0x43d756);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d758:{NFSU2_TR(0x43d758);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d75a:{NFSU2_TR(0x43d75a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d75d:{NFSU2_TR(0x43d75d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d765;}}
}
B43d75f:L43d75f:{c.instructions+=2;NFSU2_TR(0x43d75f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d763:{NFSU2_TR(0x43d763);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B43d765:L43d765:{c.instructions+=5;NFSU2_TR(0x43d765);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d769:{NFSU2_TR(0x43d769);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d76c:{NFSU2_TR(0x43d76c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d76e:{NFSU2_TR(0x43d76e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d771:{NFSU2_TR(0x43d771);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d77a;}}
}
B43d773:L43d773:{c.instructions+=2;NFSU2_TR(0x43d773);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d777:{NFSU2_TR(0x43d777);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d77a:L43d77a:{c.instructions+=5;NFSU2_TR(0x43d77a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d77e:{NFSU2_TR(0x43d77e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d781:{NFSU2_TR(0x43d781);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d783:{NFSU2_TR(0x43d783);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d786:{NFSU2_TR(0x43d786);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d78f;}}
}
B43d788:L43d788:{c.instructions+=2;NFSU2_TR(0x43d788);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d78c:{NFSU2_TR(0x43d78c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d78f:L43d78f:{c.instructions+=2;NFSU2_TR(0x43d78f);
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
B43d792:{NFSU2_TR(0x43d792);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d7a0:L43d7a0:{c.instructions+=9;NFSU2_TR(0x43d7a0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d7a4:{NFSU2_TR(0x43d7a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43d7a5:{NFSU2_TR(0x43d7a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43d7a9:{NFSU2_TR(0x43d7a9);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d7ab:{NFSU2_TR(0x43d7ab);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d7af:{NFSU2_TR(0x43d7af);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d7b1:{NFSU2_TR(0x43d7b1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d7b3:{NFSU2_TR(0x43d7b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d7b6:{NFSU2_TR(0x43d7b6);
if(r1(R+518)){{goto L43d816;}}
}
B43d7b8:L43d7b8:{c.instructions+=7;NFSU2_TR(0x43d7b8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d7bc:{NFSU2_TR(0x43d7bc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d7c0:{NFSU2_TR(0x43d7c0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d7c2:{NFSU2_TR(0x43d7c2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d7c4:{NFSU2_TR(0x43d7c4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d7c6:{NFSU2_TR(0x43d7c6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d7c9:{NFSU2_TR(0x43d7c9);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43d816;}}
}
B43d7cb:L43d7cb:{c.instructions+=6;NFSU2_TR(0x43d7cb);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d7ce:{NFSU2_TR(0x43d7ce);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d7d2:{NFSU2_TR(0x43d7d2);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d7d5:{NFSU2_TR(0x43d7d5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d7d7:{NFSU2_TR(0x43d7d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d7da:{NFSU2_TR(0x43d7da);
if(r1(R+518)){{goto L43d816;}}
}
B43d7dc:L43d7dc:{c.instructions+=6;NFSU2_TR(0x43d7dc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d7e0:{NFSU2_TR(0x43d7e0);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d7e3:{NFSU2_TR(0x43d7e3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d7e6:{NFSU2_TR(0x43d7e6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d7e8:{NFSU2_TR(0x43d7e8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d7eb:{NFSU2_TR(0x43d7eb);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43d816;}}
}
B43d7ed:L43d7ed:{c.instructions+=6;NFSU2_TR(0x43d7ed);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d7f0:{NFSU2_TR(0x43d7f0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d7f4:{NFSU2_TR(0x43d7f4);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d7f7:{NFSU2_TR(0x43d7f7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d7f9:{NFSU2_TR(0x43d7f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d7fc:{NFSU2_TR(0x43d7fc);
if(r1(R+518)){{goto L43d816;}}
}
B43d7fe:L43d7fe:{c.instructions+=6;NFSU2_TR(0x43d7fe);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d802:{NFSU2_TR(0x43d802);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d805:{NFSU2_TR(0x43d805);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d808:{NFSU2_TR(0x43d808);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d80a:{NFSU2_TR(0x43d80a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d80d:{NFSU2_TR(0x43d80d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43d816;}}
}
B43d80f:L43d80f:{c.instructions+=3;NFSU2_TR(0x43d80f);
w4(R+0,u32(0x1ull));
}
B43d814:{NFSU2_TR(0x43d814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43d815:{NFSU2_TR(0x43d815);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d816:L43d816:{c.instructions+=3;NFSU2_TR(0x43d816);
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
B43d818:{NFSU2_TR(0x43d818);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43d819:{NFSU2_TR(0x43d819);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d820:L43d820:{c.instructions+=9;NFSU2_TR(0x43d820);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43d821:{NFSU2_TR(0x43d821);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43d825:{NFSU2_TR(0x43d825);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d827:{NFSU2_TR(0x43d827);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43d828:{NFSU2_TR(0x43d828);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43d82c:{NFSU2_TR(0x43d82c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d82e:{NFSU2_TR(0x43d82e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d830:{NFSU2_TR(0x43d830);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d833:{NFSU2_TR(0x43d833);
if(r1(R+514)){{goto L43d884;}}
}
B43d835:L43d835:{c.instructions+=7;NFSU2_TR(0x43d835);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43d839:{NFSU2_TR(0x43d839);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d83b:{NFSU2_TR(0x43d83b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d83f:{NFSU2_TR(0x43d83f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d841:{NFSU2_TR(0x43d841);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d843:{NFSU2_TR(0x43d843);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d846:{NFSU2_TR(0x43d846);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d884;}}
}
B43d848:L43d848:{c.instructions+=5;NFSU2_TR(0x43d848);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d84b:{NFSU2_TR(0x43d84b);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d84e:{NFSU2_TR(0x43d84e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d850:{NFSU2_TR(0x43d850);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d853:{NFSU2_TR(0x43d853);
if(r1(R+514)){{goto L43d884;}}
}
B43d855:L43d855:{c.instructions+=5;NFSU2_TR(0x43d855);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d858:{NFSU2_TR(0x43d858);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d85b:{NFSU2_TR(0x43d85b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d85d:{NFSU2_TR(0x43d85d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d860:{NFSU2_TR(0x43d860);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d884;}}
}
B43d862:L43d862:{c.instructions+=5;NFSU2_TR(0x43d862);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d865:{NFSU2_TR(0x43d865);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d868:{NFSU2_TR(0x43d868);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d86a:{NFSU2_TR(0x43d86a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d86d:{NFSU2_TR(0x43d86d);
if(r1(R+514)){{goto L43d884;}}
}
B43d86f:L43d86f:{c.instructions+=5;NFSU2_TR(0x43d86f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d872:{NFSU2_TR(0x43d872);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d875:{NFSU2_TR(0x43d875);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d877:{NFSU2_TR(0x43d877);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d87a:{NFSU2_TR(0x43d87a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d884;}}
}
B43d87c:L43d87c:{c.instructions+=4;NFSU2_TR(0x43d87c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43d87d:{NFSU2_TR(0x43d87d);
w4(R+0,u32(0x1ull));
}
B43d882:{NFSU2_TR(0x43d882);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43d883:{NFSU2_TR(0x43d883);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d884:L43d884:{c.instructions+=4;NFSU2_TR(0x43d884);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43d885:{NFSU2_TR(0x43d885);
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
B43d887:{NFSU2_TR(0x43d887);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43d888:{NFSU2_TR(0x43d888);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43d890:L43d890:{c.instructions+=18;NFSU2_TR(0x43d890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B43d893:{NFSU2_TR(0x43d893);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43d897:{NFSU2_TR(0x43d897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B43d899:{NFSU2_TR(0x43d899);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43d89c:{NFSU2_TR(0x43d89c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43d89d:{NFSU2_TR(0x43d89d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B43d8a1:{NFSU2_TR(0x43d8a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43d8a2:{NFSU2_TR(0x43d8a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B43d8a6:{NFSU2_TR(0x43d8a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43d8a7:{NFSU2_TR(0x43d8a7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43d8a9:{NFSU2_TR(0x43d8a9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43d8ac:{NFSU2_TR(0x43d8ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43d8ad:{NFSU2_TR(0x43d8ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d8b1:{NFSU2_TR(0x43d8b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d8b5:{NFSU2_TR(0x43d8b5);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B43d8ba:{NFSU2_TR(0x43d8ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B43d8bd:{NFSU2_TR(0x43d8bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d8c1:{NFSU2_TR(0x43d8c1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43daac;}}
}
B43d8c7:L43d8c7:{c.instructions+=6;NFSU2_TR(0x43d8c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B43d8ce:{NFSU2_TR(0x43d8ce);
w4(R+0,u32(0x14ull));
}
B43d8d3:{NFSU2_TR(0x43d8d3);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B43d8d5:{NFSU2_TR(0x43d8d5);
w4(R+28,u32(0x3ull));
}
B43d8da:{NFSU2_TR(0x43d8da);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B43d8dd:{NFSU2_TR(0x43d8dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43d8e1:L43d8e1:{c.instructions+=5;NFSU2_TR(0x43d8e1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d8e3:{NFSU2_TR(0x43d8e3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d8e7:{NFSU2_TR(0x43d8e7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d8e9:{NFSU2_TR(0x43d8e9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d8ec:{NFSU2_TR(0x43d8ec);
if(r1(R+514)){{goto L43d8ff;}}
}
B43d8ee:L43d8ee:{c.instructions+=6;NFSU2_TR(0x43d8ee);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d8f2:{NFSU2_TR(0x43d8f2);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B43d8f6:{NFSU2_TR(0x43d8f6);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d8f8:{NFSU2_TR(0x43d8f8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d8fa:{NFSU2_TR(0x43d8fa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d8fd:{NFSU2_TR(0x43d8fd);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43d91f;}}
}
B43d8ff:L43d8ff:{c.instructions+=6;NFSU2_TR(0x43d8ff);
{u32 ea_=u32(r4(R+20)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d903:{NFSU2_TR(0x43d903);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B43d907:{NFSU2_TR(0x43d907);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d90b:{NFSU2_TR(0x43d90b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d90d:{NFSU2_TR(0x43d90d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d910:{NFSU2_TR(0x43d910);
if(r1(R+514)){{goto L43d94e;}}
}
B43d912:L43d912:{c.instructions+=5;NFSU2_TR(0x43d912);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d916:{NFSU2_TR(0x43d916);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d918:{NFSU2_TR(0x43d918);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d91a:{NFSU2_TR(0x43d91a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d91d:{NFSU2_TR(0x43d91d);
if(r1(R+514)){{goto L43d94e;}}
}
B43d91f:L43d91f:{c.instructions+=13;NFSU2_TR(0x43d91f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d923:{NFSU2_TR(0x43d923);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d925:{NFSU2_TR(0x43d925);
{u32 ea_=u32(r4(R+20)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d928:{NFSU2_TR(0x43d928);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d92b:{NFSU2_TR(0x43d92b);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B43d92d:{NFSU2_TR(0x43d92d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d92f:{NFSU2_TR(0x43d92f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d931:{NFSU2_TR(0x43d931);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B43d933:{NFSU2_TR(0x43d933);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d936:{NFSU2_TR(0x43d936);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d93a:{NFSU2_TR(0x43d93a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d93c:{NFSU2_TR(0x43d93c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d93f:{NFSU2_TR(0x43d93f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d94e;}}
}
B43d941:L43d941:{c.instructions+=4;NFSU2_TR(0x43d941);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43d945:{NFSU2_TR(0x43d945);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d947:{NFSU2_TR(0x43d947);
__builtin_memmove((R+0),(R+518),1);
}
B43d94a:{NFSU2_TR(0x43d94a);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43d94e:L43d94e:{c.instructions+=5;NFSU2_TR(0x43d94e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d951:{NFSU2_TR(0x43d951);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d955:{NFSU2_TR(0x43d955);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d957:{NFSU2_TR(0x43d957);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d95a:{NFSU2_TR(0x43d95a);
if(r1(R+514)){{goto L43d96b;}}
}
B43d95c:L43d95c:{c.instructions+=5;NFSU2_TR(0x43d95c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d960:{NFSU2_TR(0x43d960);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d962:{NFSU2_TR(0x43d962);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d964:{NFSU2_TR(0x43d964);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d967:{NFSU2_TR(0x43d967);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43d986;}}
}
B43d969:L43d969:{c.instructions+=1;NFSU2_TR(0x43d969);
{goto L43d978;}
}
B43d96b:L43d96b:{c.instructions+=5;NFSU2_TR(0x43d96b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d96d:{NFSU2_TR(0x43d96d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d971:{NFSU2_TR(0x43d971);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d973:{NFSU2_TR(0x43d973);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d976:{NFSU2_TR(0x43d976);
if(r1(R+514)){{goto L43d9b7;}}
}
B43d978:L43d978:{c.instructions+=5;NFSU2_TR(0x43d978);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d97c:{NFSU2_TR(0x43d97c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d97f:{NFSU2_TR(0x43d97f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d981:{NFSU2_TR(0x43d981);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d984:{NFSU2_TR(0x43d984);
if(r1(R+514)){{goto L43d9b7;}}
}
B43d986:L43d986:{c.instructions+=13;NFSU2_TR(0x43d986);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d989:{NFSU2_TR(0x43d989);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d98c:{NFSU2_TR(0x43d98c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d990:{NFSU2_TR(0x43d990);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d993:{NFSU2_TR(0x43d993);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B43d995:{NFSU2_TR(0x43d995);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d997:{NFSU2_TR(0x43d997);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d99a:{NFSU2_TR(0x43d99a);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B43d99c:{NFSU2_TR(0x43d99c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43d99f:{NFSU2_TR(0x43d99f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d9a3:{NFSU2_TR(0x43d9a3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d9a5:{NFSU2_TR(0x43d9a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d9a8:{NFSU2_TR(0x43d9a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43d9b7;}}
}
B43d9aa:L43d9aa:{c.instructions+=4;NFSU2_TR(0x43d9aa);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43d9ae:{NFSU2_TR(0x43d9ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43d9b0:{NFSU2_TR(0x43d9b0);
__builtin_memmove((R+8),(R+518),1);
}
B43d9b3:{NFSU2_TR(0x43d9b3);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43d9b7:L43d9b7:{c.instructions+=5;NFSU2_TR(0x43d9b7);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d9ba:{NFSU2_TR(0x43d9ba);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d9be:{NFSU2_TR(0x43d9be);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d9c0:{NFSU2_TR(0x43d9c0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d9c3:{NFSU2_TR(0x43d9c3);
if(r1(R+514)){{goto L43d9d3;}}
}
B43d9c5:L43d9c5:{c.instructions+=5;NFSU2_TR(0x43d9c5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d9c9:{NFSU2_TR(0x43d9c9);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d9cc:{NFSU2_TR(0x43d9cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d9ce:{NFSU2_TR(0x43d9ce);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d9d1:{NFSU2_TR(0x43d9d1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43d9ef;}}
}
B43d9d3:L43d9d3:{c.instructions+=5;NFSU2_TR(0x43d9d3);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d9d6:{NFSU2_TR(0x43d9d6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d9da:{NFSU2_TR(0x43d9da);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d9dc:{NFSU2_TR(0x43d9dc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d9df:{NFSU2_TR(0x43d9df);
if(r1(R+514)){{goto L43da21;}}
}
B43d9e1:L43d9e1:{c.instructions+=5;NFSU2_TR(0x43d9e1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d9e5:{NFSU2_TR(0x43d9e5);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43d9e8:{NFSU2_TR(0x43d9e8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43d9ea:{NFSU2_TR(0x43d9ea);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43d9ed:{NFSU2_TR(0x43d9ed);
if(r1(R+514)){{goto L43da21;}}
}
B43d9ef:L43d9ef:{c.instructions+=13;NFSU2_TR(0x43d9ef);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d9f2:{NFSU2_TR(0x43d9f2);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d9f5:{NFSU2_TR(0x43d9f5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43d9f9:{NFSU2_TR(0x43d9f9);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43d9fc:{NFSU2_TR(0x43d9fc);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B43d9fe:{NFSU2_TR(0x43d9fe);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43da01:{NFSU2_TR(0x43da01);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43da04:{NFSU2_TR(0x43da04);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B43da06:{NFSU2_TR(0x43da06);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43da09:{NFSU2_TR(0x43da09);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43da0d:{NFSU2_TR(0x43da0d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43da0f:{NFSU2_TR(0x43da0f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43da12:{NFSU2_TR(0x43da12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43da21;}}
}
B43da14:L43da14:{c.instructions+=4;NFSU2_TR(0x43da14);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43da18:{NFSU2_TR(0x43da18);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43da1a:{NFSU2_TR(0x43da1a);
__builtin_memmove((R+0),(R+518),1);
}
B43da1d:{NFSU2_TR(0x43da1d);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43da21:L43da21:{c.instructions+=5;NFSU2_TR(0x43da21);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43da24:{NFSU2_TR(0x43da24);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43da28:{NFSU2_TR(0x43da28);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43da2a:{NFSU2_TR(0x43da2a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43da2d:{NFSU2_TR(0x43da2d);
if(r1(R+514)){{goto L43da3d;}}
}
B43da2f:L43da2f:{c.instructions+=5;NFSU2_TR(0x43da2f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43da33:{NFSU2_TR(0x43da33);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43da36:{NFSU2_TR(0x43da36);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43da38:{NFSU2_TR(0x43da38);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43da3b:{NFSU2_TR(0x43da3b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43da59;}}
}
B43da3d:L43da3d:{c.instructions+=5;NFSU2_TR(0x43da3d);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43da40:{NFSU2_TR(0x43da40);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43da44:{NFSU2_TR(0x43da44);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43da46:{NFSU2_TR(0x43da46);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43da49:{NFSU2_TR(0x43da49);
if(r1(R+514)){{goto L43da8b;}}
}
B43da4b:L43da4b:{c.instructions+=5;NFSU2_TR(0x43da4b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43da4f:{NFSU2_TR(0x43da4f);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43da52:{NFSU2_TR(0x43da52);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43da54:{NFSU2_TR(0x43da54);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43da57:{NFSU2_TR(0x43da57);
if(r1(R+514)){{goto L43da8b;}}
}
B43da59:L43da59:{c.instructions+=13;NFSU2_TR(0x43da59);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43da5c:{NFSU2_TR(0x43da5c);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43da5f:{NFSU2_TR(0x43da5f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43da63:{NFSU2_TR(0x43da63);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43da66:{NFSU2_TR(0x43da66);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B43da68:{NFSU2_TR(0x43da68);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43da6b:{NFSU2_TR(0x43da6b);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43da6e:{NFSU2_TR(0x43da6e);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B43da70:{NFSU2_TR(0x43da70);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43da73:{NFSU2_TR(0x43da73);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43da77:{NFSU2_TR(0x43da77);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43da79:{NFSU2_TR(0x43da79);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43da7c:{NFSU2_TR(0x43da7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43da8b;}}
}
B43da7e:L43da7e:{c.instructions+=4;NFSU2_TR(0x43da7e);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43da82:{NFSU2_TR(0x43da82);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43da84:{NFSU2_TR(0x43da84);
__builtin_memmove((R+8),(R+518),1);
}
B43da87:{NFSU2_TR(0x43da87);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43da8b:L43da8b:{c.instructions+=10;NFSU2_TR(0x43da8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43da8f:{NFSU2_TR(0x43da8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43da93:{NFSU2_TR(0x43da93);
__builtin_memmove((R+0),(R+28),4);
}
B43da95:{NFSU2_TR(0x43da95);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B43da97:{NFSU2_TR(0x43da97);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B43da9a:{NFSU2_TR(0x43da9a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B43da9d:{NFSU2_TR(0x43da9d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B43daa0:{NFSU2_TR(0x43daa0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43daa2:{NFSU2_TR(0x43daa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43daa6:{NFSU2_TR(0x43daa6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43d8e1u);}goto L43d8e1;}}
}
B43daac:L43daac:{c.instructions+=2;NFSU2_TR(0x43daac);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B43daae:{NFSU2_TR(0x43daae);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43db3e;}}
}
B43dab4:L43dab4:{c.instructions+=5;NFSU2_TR(0x43dab4);
w4(R+28,u32(0xfffffffcull));
}
B43dab9:{NFSU2_TR(0x43dab9);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+20))));
}
B43dabb:{NFSU2_TR(0x43dabb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B43dac2:{NFSU2_TR(0x43dac2);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B43dac6:{NFSU2_TR(0x43dac6);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B43dac8:L43dac8:{c.instructions+=5;NFSU2_TR(0x43dac8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43daca:{NFSU2_TR(0x43daca);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43dace:{NFSU2_TR(0x43dace);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43dad0:{NFSU2_TR(0x43dad0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43dad3:{NFSU2_TR(0x43dad3);
if(r1(R+514)){{goto L43dae6;}}
}
B43dad5:L43dad5:{c.instructions+=6;NFSU2_TR(0x43dad5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43dad9:{NFSU2_TR(0x43dad9);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B43dadd:{NFSU2_TR(0x43dadd);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43dadf:{NFSU2_TR(0x43dadf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43dae1:{NFSU2_TR(0x43dae1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43dae4:{NFSU2_TR(0x43dae4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43db06;}}
}
B43dae6:L43dae6:{c.instructions+=6;NFSU2_TR(0x43dae6);
{u32 ea_=u32(r4(R+20)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43daea:{NFSU2_TR(0x43daea);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B43daee:{NFSU2_TR(0x43daee);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43daf2:{NFSU2_TR(0x43daf2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43daf4:{NFSU2_TR(0x43daf4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43daf7:{NFSU2_TR(0x43daf7);
if(r1(R+514)){{goto L43db35;}}
}
B43daf9:L43daf9:{c.instructions+=5;NFSU2_TR(0x43daf9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43dafd:{NFSU2_TR(0x43dafd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43daff:{NFSU2_TR(0x43daff);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43db01:{NFSU2_TR(0x43db01);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43db04:{NFSU2_TR(0x43db04);
if(r1(R+514)){{goto L43db35;}}
}
B43db06:L43db06:{c.instructions+=13;NFSU2_TR(0x43db06);
{u32 ea_=u32(r4(R+20)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43db09:{NFSU2_TR(0x43db09);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43db0c:{NFSU2_TR(0x43db0c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43db10:{NFSU2_TR(0x43db10);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43db12:{NFSU2_TR(0x43db12);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B43db14:{NFSU2_TR(0x43db14);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43db16:{NFSU2_TR(0x43db16);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B43db18:{NFSU2_TR(0x43db18);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B43db1a:{NFSU2_TR(0x43db1a);
{u32 ea_=u32(r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B43db1d:{NFSU2_TR(0x43db1d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B43db21:{NFSU2_TR(0x43db21);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43db23:{NFSU2_TR(0x43db23);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43db26:{NFSU2_TR(0x43db26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43db35;}}
}
B43db28:L43db28:{c.instructions+=4;NFSU2_TR(0x43db28);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43db2c:{NFSU2_TR(0x43db2c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43db2e:{NFSU2_TR(0x43db2e);
__builtin_memmove((R+0),(R+518),1);
}
B43db31:{NFSU2_TR(0x43db31);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B43db35:L43db35:{c.instructions+=4;NFSU2_TR(0x43db35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B43db38:{NFSU2_TR(0x43db38);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B43db3b:{NFSU2_TR(0x43db3b);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B43db3c:{NFSU2_TR(0x43db3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43dac8u);}goto L43dac8;}}
}
B43db3e:L43db3e:{c.instructions+=7;NFSU2_TR(0x43db3e);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43db42:{NFSU2_TR(0x43db42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43db43:{NFSU2_TR(0x43db43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43db44:{NFSU2_TR(0x43db44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B43db45:{NFSU2_TR(0x43db45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43db46:{NFSU2_TR(0x43db46);
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
B43db49:{NFSU2_TR(0x43db49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43db50:L43db50:{c.instructions+=5;NFSU2_TR(0x43db50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43db54:{NFSU2_TR(0x43db54);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B43db56:{NFSU2_TR(0x43db56);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B43db59:{NFSU2_TR(0x43db59);
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
B43db5b:{NFSU2_TR(0x43db5b);
if(r1(R+518)){{goto L43db70;}}
}
B43db5d:L43db5d:{c.instructions+=1;NFSU2_TR(0x43db5d);
__builtin_memmove((R+4),(R+4),4);
}
B43db60:L43db60:{c.instructions+=7;NFSU2_TR(0x43db60);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B43db63:{NFSU2_TR(0x43db63);
w4(R+4,u32(r1(R+4)));
}
B43db66:{NFSU2_TR(0x43db66);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B43db68:{NFSU2_TR(0x43db68);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B43db6b:{NFSU2_TR(0x43db6b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43db6c:{NFSU2_TR(0x43db6c);
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
B43db6e:{NFSU2_TR(0x43db6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43db60u);}goto L43db60;}}
}
B43db70:L43db70:{c.instructions+=1;NFSU2_TR(0x43db70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43db80:L43db80:{c.instructions+=5;NFSU2_TR(0x43db80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43db84:{NFSU2_TR(0x43db84);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B43db86:{NFSU2_TR(0x43db86);
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
B43db88:{NFSU2_TR(0x43db88);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43db8c:{NFSU2_TR(0x43db8c);
if(r1(R+518)){{goto L43dba0;}}
}
B43db8e:L43db8e:{c.instructions+=1;NFSU2_TR(0x43db8e);
__builtin_memmove((R+28),(R+28),4);
}
B43db90:L43db90:{c.instructions+=7;NFSU2_TR(0x43db90);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B43db93:{NFSU2_TR(0x43db93);
w4(R+4,u32(r1(R+4)));
}
B43db96:{NFSU2_TR(0x43db96);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B43db98:{NFSU2_TR(0x43db98);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B43db9b:{NFSU2_TR(0x43db9b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43db9c:{NFSU2_TR(0x43db9c);
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
B43db9e:{NFSU2_TR(0x43db9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43db90u);}goto L43db90;}}
}
B43dba0:L43dba0:{c.instructions+=1;NFSU2_TR(0x43dba0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43dbb0:L43dbb0:{c.instructions+=4;NFSU2_TR(0x43dbb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43dbb4:{NFSU2_TR(0x43dbb4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43dbb6:{NFSU2_TR(0x43dbb6);
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
B43dbb8:{NFSU2_TR(0x43dbb8);
if(r1(R+518)){{goto L43dbc9;}}
}
B43dbba:L43dbba:{c.instructions+=2;NFSU2_TR(0x43dbba);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B43dbbd:{NFSU2_TR(0x43dbbd);
if(r1(R+518)){{goto L43dbc9;}}
}
B43dbbf:L43dbbf:{c.instructions+=1;NFSU2_TR(0x43dbbf);
}
B43dbc0:L43dbc0:{c.instructions+=4;NFSU2_TR(0x43dbc0);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B43dbc4:{NFSU2_TR(0x43dbc4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43dbc5:{NFSU2_TR(0x43dbc5);
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
B43dbc7:{NFSU2_TR(0x43dbc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43dbc0u);}goto L43dbc0;}}
}
B43dbc9:L43dbc9:{c.instructions+=1;NFSU2_TR(0x43dbc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43dbd0:L43dbd0:{c.instructions+=7;NFSU2_TR(0x43dbd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43dbd4:{NFSU2_TR(0x43dbd4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43dbd5:{NFSU2_TR(0x43dbd5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43dbd9:{NFSU2_TR(0x43dbd9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B43dbdb:{NFSU2_TR(0x43dbdb);
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
B43dbdd:{NFSU2_TR(0x43dbdd);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B43dbdf:{NFSU2_TR(0x43dbdf);
if(r1(R+518)){{goto L43dbf0;}}
}
B43dbe1:L43dbe1:{c.instructions+=2;NFSU2_TR(0x43dbe1);
__builtin_memmove((R+4),(R+0),4);
}
B43dbe3:{NFSU2_TR(0x43dbe3);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B43dbe5:L43dbe5:{c.instructions+=5;NFSU2_TR(0x43dbe5);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B43dbe9:{NFSU2_TR(0x43dbe9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43dbea:{NFSU2_TR(0x43dbea);
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
B43dbec:{NFSU2_TR(0x43dbec);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B43dbee:{NFSU2_TR(0x43dbee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43dbe5u);}goto L43dbe5;}}
}
B43dbf0:L43dbf0:{c.instructions+=2;NFSU2_TR(0x43dbf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43dbf1:{NFSU2_TR(0x43dbf1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43dc00:L43dc00:{c.instructions+=5;NFSU2_TR(0x43dc00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43dc04:{NFSU2_TR(0x43dc04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43dc05:{NFSU2_TR(0x43dc05);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43dc09:{NFSU2_TR(0x43dc09);
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
B43dc0b:{NFSU2_TR(0x43dc0b);
if(r1(R+518)){{goto L43dc26;}}
}
B43dc0d:L43dc0d:{c.instructions+=4;NFSU2_TR(0x43dc0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43dc0e:{NFSU2_TR(0x43dc0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43dc12:{NFSU2_TR(0x43dc12);
__builtin_memmove((R+8),(R+0),4);
}
B43dc14:{NFSU2_TR(0x43dc14);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B43dc16:L43dc16:{c.instructions+=5;NFSU2_TR(0x43dc16);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+4),(U+8),1);
}
B43dc19:{NFSU2_TR(0x43dc19);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B43dc1a:{NFSU2_TR(0x43dc1a);
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
B43dc1c:{NFSU2_TR(0x43dc1c);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+8)),r1(U+0));
}
B43dc1e:{NFSU2_TR(0x43dc1e);
if(r1(R+518)){{goto L43dc25;}}
}
B43dc20:L43dc20:{c.instructions+=3;NFSU2_TR(0x43dc20);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43dc21:{NFSU2_TR(0x43dc21);
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
B43dc23:{NFSU2_TR(0x43dc23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43dc16u);}goto L43dc16;}}
}
B43dc25:L43dc25:{c.instructions+=1;NFSU2_TR(0x43dc25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43dc26:L43dc26:{c.instructions+=2;NFSU2_TR(0x43dc26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43dc27:{NFSU2_TR(0x43dc27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43dc30:L43dc30:{c.instructions+=4;NFSU2_TR(0x43dc30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43dc34:{NFSU2_TR(0x43dc34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43dc35:{NFSU2_TR(0x43dc35);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43dc39:{NFSU2_TR(0x43dc39);
__builtin_memmove((R+16),(R+16),4);
}
B43dc40:L43dc40:{c.instructions+=6;NFSU2_TR(0x43dc40);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B43dc42:{NFSU2_TR(0x43dc42);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B43dc44:{NFSU2_TR(0x43dc44);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43dc45:{NFSU2_TR(0x43dc45);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43dc46:{NFSU2_TR(0x43dc46);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43dc48:{NFSU2_TR(0x43dc48);
if(r1(R+518)){{goto L43dc52;}}
}
B43dc4a:L43dc4a:{c.instructions+=2;NFSU2_TR(0x43dc4a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43dc4c:{NFSU2_TR(0x43dc4c);
if(r1(R+518)){{goto L43dc52;}}
}
B43dc4e:L43dc4e:{c.instructions+=2;NFSU2_TR(0x43dc4e);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43dc50:{NFSU2_TR(0x43dc50);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43dc40u);}goto L43dc40;}}
}
B43dc52:L43dc52:{c.instructions+=5;NFSU2_TR(0x43dc52);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B43dc55:{NFSU2_TR(0x43dc55);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B43dc58:{NFSU2_TR(0x43dc58);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43dc5a:{NFSU2_TR(0x43dc5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43dc5b:{NFSU2_TR(0x43dc5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43dc60:L43dc60:{c.instructions+=6;NFSU2_TR(0x43dc60);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43dc64:{NFSU2_TR(0x43dc64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43dc65:{NFSU2_TR(0x43dc65);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43dc69:{NFSU2_TR(0x43dc69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43dc6a:{NFSU2_TR(0x43dc6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43dc6e:{NFSU2_TR(0x43dc6e);
__builtin_memmove((R+28),(R+28),4);
}
B43dc70:L43dc70:{c.instructions+=4;NFSU2_TR(0x43dc70);
__builtin_memmove((R+0),(R+28),4);
}
B43dc72:{NFSU2_TR(0x43dc72);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B43dc73:{NFSU2_TR(0x43dc73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43dc75:{NFSU2_TR(0x43dc75);
if(r1(R+518)){{goto L43dc89;}}
}
B43dc77:L43dc77:{c.instructions+=3;NFSU2_TR(0x43dc77);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B43dc79:{NFSU2_TR(0x43dc79);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43dc7b:{NFSU2_TR(0x43dc7b);
if(r1(R+518)){{goto L43dc89;}}
}
B43dc7d:L43dc7d:{c.instructions+=3;NFSU2_TR(0x43dc7d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B43dc7f:{NFSU2_TR(0x43dc7f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43dc81:{NFSU2_TR(0x43dc81);
if(r1(R+518)){{goto L43dc89;}}
}
B43dc83:L43dc83:{c.instructions+=4;NFSU2_TR(0x43dc83);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43dc84:{NFSU2_TR(0x43dc84);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43dc85:{NFSU2_TR(0x43dc85);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43dc87:{NFSU2_TR(0x43dc87);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43dc70u);}goto L43dc70;}}
}
B43dc89:L43dc89:{c.instructions+=2;NFSU2_TR(0x43dc89);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43dc8b:{NFSU2_TR(0x43dc8b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43dcb4;}}
}
B43dc8d:L43dc8d:{c.instructions+=2;NFSU2_TR(0x43dc8d);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B43dc90:{NFSU2_TR(0x43dc90);
if(r1(R+518)){{goto L43dc9a;}}
}
B43dc92:L43dc92:{c.instructions+=4;NFSU2_TR(0x43dc92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43dc93:{NFSU2_TR(0x43dc93);
w4(R+0,u32(0x1ull));
}
B43dc98:{NFSU2_TR(0x43dc98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43dc99:{NFSU2_TR(0x43dc99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43dc9a:L43dc9a:{c.instructions+=2;NFSU2_TR(0x43dc9a);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B43dc9d:{NFSU2_TR(0x43dc9d);
if(r1(R+518)){{goto L43dca7;}}
}
B43dc9f:L43dc9f:{c.instructions+=4;NFSU2_TR(0x43dc9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43dca0:{NFSU2_TR(0x43dca0);
w4(R+0,u32(0xffffffffull));
}
B43dca5:{NFSU2_TR(0x43dca5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43dca6:{NFSU2_TR(0x43dca6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43dca7:L43dca7:{c.instructions+=6;NFSU2_TR(0x43dca7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B43dcab:{NFSU2_TR(0x43dcab);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B43dcaf:{NFSU2_TR(0x43dcaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43dcb0:{NFSU2_TR(0x43dcb0);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43dcb2:{NFSU2_TR(0x43dcb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43dcb3:{NFSU2_TR(0x43dcb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43dcb4:L43dcb4:{c.instructions+=4;NFSU2_TR(0x43dcb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43dcb5:{NFSU2_TR(0x43dcb5);
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
B43dcb7:{NFSU2_TR(0x43dcb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43dcb8:{NFSU2_TR(0x43dcb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43dcc0:L43dcc0:{c.instructions+=4;NFSU2_TR(0x43dcc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43dcc4:{NFSU2_TR(0x43dcc4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43dcc5:{NFSU2_TR(0x43dcc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43dcc9:{NFSU2_TR(0x43dcc9);
__builtin_memmove((R+16),(R+16),4);
}
B43dcd0:L43dcd0:{c.instructions+=3;NFSU2_TR(0x43dcd0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+4),(U+0),1);
}
B43dcd2:{NFSU2_TR(0x43dcd2);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B43dcd5:{NFSU2_TR(0x43dcd5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43dcdf;}}
}
B43dcd7:L43dcd7:{c.instructions+=2;NFSU2_TR(0x43dcd7);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43dcda:{NFSU2_TR(0x43dcda);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43dcdf;}}
}
B43dcdc:L43dcdc:{c.instructions+=1;NFSU2_TR(0x43dcdc);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x5full))));
}
B43dcdf:L43dcdf:{c.instructions+=4;NFSU2_TR(0x43dcdf);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B43dce1:{NFSU2_TR(0x43dce1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43dce2:{NFSU2_TR(0x43dce2);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B43dce4:{NFSU2_TR(0x43dce4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43dcec;}}
}
B43dce6:L43dce6:{c.instructions+=2;NFSU2_TR(0x43dce6);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43dce8:{NFSU2_TR(0x43dce8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43dcec;}}
}
B43dcea:L43dcea:{c.instructions+=1;NFSU2_TR(0x43dcea);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x5full))));
}
B43dcec:L43dcec:{c.instructions+=3;NFSU2_TR(0x43dcec);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43dced:{NFSU2_TR(0x43dced);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43dcef:{NFSU2_TR(0x43dcef);
if(r1(R+518)){{goto L43dcf9;}}
}
B43dcf1:L43dcf1:{c.instructions+=2;NFSU2_TR(0x43dcf1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43dcf3:{NFSU2_TR(0x43dcf3);
if(r1(R+518)){{goto L43dcf9;}}
}
B43dcf5:L43dcf5:{c.instructions+=2;NFSU2_TR(0x43dcf5);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43dcf7:{NFSU2_TR(0x43dcf7);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43dcd0u);}goto L43dcd0;}}
}
B43dcf9:L43dcf9:{c.instructions+=5;NFSU2_TR(0x43dcf9);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B43dcfc:{NFSU2_TR(0x43dcfc);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B43dcff:{NFSU2_TR(0x43dcff);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43dd01:{NFSU2_TR(0x43dd01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43dd02:{NFSU2_TR(0x43dd02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43dd10:L43dd10:{c.instructions+=6;NFSU2_TR(0x43dd10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43dd14:{NFSU2_TR(0x43dd14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43dd15:{NFSU2_TR(0x43dd15);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B43dd19:{NFSU2_TR(0x43dd19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43dd1a:{NFSU2_TR(0x43dd1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B43dd1e:{NFSU2_TR(0x43dd1e);
__builtin_memmove((R+28),(R+28),4);
}
B43dd20:L43dd20:{c.instructions+=4;NFSU2_TR(0x43dd20);
__builtin_memmove((R+0),(R+28),4);
}
B43dd22:{NFSU2_TR(0x43dd22);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B43dd23:{NFSU2_TR(0x43dd23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43dd25:{NFSU2_TR(0x43dd25);
if(r1(R+518)){{goto L43dd50;}}
}
B43dd27:L43dd27:{c.instructions+=3;NFSU2_TR(0x43dd27);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B43dd29:{NFSU2_TR(0x43dd29);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43dd2b:{NFSU2_TR(0x43dd2b);
if(r1(R+518)){{goto L43dd50;}}
}
B43dd2d:L43dd2d:{c.instructions+=3;NFSU2_TR(0x43dd2d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B43dd2f:{NFSU2_TR(0x43dd2f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43dd31:{NFSU2_TR(0x43dd31);
if(r1(R+518)){{goto L43dd50;}}
}
B43dd33:L43dd33:{c.instructions+=2;NFSU2_TR(0x43dd33);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B43dd36:{NFSU2_TR(0x43dd36);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43dd40;}}
}
B43dd38:L43dd38:{c.instructions+=2;NFSU2_TR(0x43dd38);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43dd3b:{NFSU2_TR(0x43dd3b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43dd40;}}
}
B43dd3d:L43dd3d:{c.instructions+=1;NFSU2_TR(0x43dd3d);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x5full))));
}
B43dd40:L43dd40:{c.instructions+=2;NFSU2_TR(0x43dd40);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B43dd42:{NFSU2_TR(0x43dd42);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43dd4a;}}
}
B43dd44:L43dd44:{c.instructions+=2;NFSU2_TR(0x43dd44);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43dd46:{NFSU2_TR(0x43dd46);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43dd4a;}}
}
B43dd48:L43dd48:{c.instructions+=1;NFSU2_TR(0x43dd48);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x5full))));
}
B43dd4a:L43dd4a:{c.instructions+=4;NFSU2_TR(0x43dd4a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43dd4b:{NFSU2_TR(0x43dd4b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43dd4c:{NFSU2_TR(0x43dd4c);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43dd4e:{NFSU2_TR(0x43dd4e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43dd20u);}goto L43dd20;}}
}
B43dd50:L43dd50:{c.instructions+=2;NFSU2_TR(0x43dd50);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B43dd52:{NFSU2_TR(0x43dd52);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43dd96;}}
}
B43dd54:L43dd54:{c.instructions+=2;NFSU2_TR(0x43dd54);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B43dd57:{NFSU2_TR(0x43dd57);
if(r1(R+518)){{goto L43dd61;}}
}
B43dd59:L43dd59:{c.instructions+=4;NFSU2_TR(0x43dd59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43dd5a:{NFSU2_TR(0x43dd5a);
w4(R+0,u32(0x1ull));
}
B43dd5f:{NFSU2_TR(0x43dd5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43dd60:{NFSU2_TR(0x43dd60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43dd61:L43dd61:{c.instructions+=2;NFSU2_TR(0x43dd61);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B43dd64:{NFSU2_TR(0x43dd64);
if(r1(R+518)){{goto L43dd6e;}}
}
B43dd66:L43dd66:{c.instructions+=4;NFSU2_TR(0x43dd66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43dd67:{NFSU2_TR(0x43dd67);
w4(R+0,u32(0xffffffffull));
}
B43dd6c:{NFSU2_TR(0x43dd6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43dd6d:{NFSU2_TR(0x43dd6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43dd6e:L43dd6e:{c.instructions+=3;NFSU2_TR(0x43dd6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B43dd71:{NFSU2_TR(0x43dd71);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B43dd74:{NFSU2_TR(0x43dd74);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43dd7e;}}
}
B43dd76:L43dd76:{c.instructions+=2;NFSU2_TR(0x43dd76);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43dd79:{NFSU2_TR(0x43dd79);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43dd7e;}}
}
B43dd7b:L43dd7b:{c.instructions+=1;NFSU2_TR(0x43dd7b);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x5full))));
}
B43dd7e:L43dd7e:{c.instructions+=3;NFSU2_TR(0x43dd7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43dd81:{NFSU2_TR(0x43dd81);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B43dd83:{NFSU2_TR(0x43dd83);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43dd8b;}}
}
B43dd85:L43dd85:{c.instructions+=2;NFSU2_TR(0x43dd85);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43dd87:{NFSU2_TR(0x43dd87);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43dd8b;}}
}
B43dd89:L43dd89:{c.instructions+=1;NFSU2_TR(0x43dd89);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x5full))));
}
B43dd8b:L43dd8b:{c.instructions+=6;NFSU2_TR(0x43dd8b);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B43dd8e:{NFSU2_TR(0x43dd8e);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B43dd91:{NFSU2_TR(0x43dd91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43dd92:{NFSU2_TR(0x43dd92);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43dd94:{NFSU2_TR(0x43dd94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43dd95:{NFSU2_TR(0x43dd95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43dd96:L43dd96:{c.instructions+=4;NFSU2_TR(0x43dd96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43dd97:{NFSU2_TR(0x43dd97);
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
B43dd99:{NFSU2_TR(0x43dd99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43dd9a:{NFSU2_TR(0x43dd9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43dda0:L43dda0:{c.instructions+=7;NFSU2_TR(0x43dda0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43dda4:{NFSU2_TR(0x43dda4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B43dda6:{NFSU2_TR(0x43dda6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ddaa:{NFSU2_TR(0x43ddaa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ddab:{NFSU2_TR(0x43ddab);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B43ddad:{NFSU2_TR(0x43ddad);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ddaf:{NFSU2_TR(0x43ddaf);
if(r1(R+518)){{goto L43ddc3;}}
}
B43ddb1:L43ddb1:{c.instructions+=3;NFSU2_TR(0x43ddb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ddb2:{NFSU2_TR(0x43ddb2);
__builtin_memmove((R+28),(R+0),4);
}
B43ddb4:{NFSU2_TR(0x43ddb4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B43ddb6:L43ddb6:{c.instructions+=6;NFSU2_TR(0x43ddb6);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B43ddb9:{NFSU2_TR(0x43ddb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B43ddbc:{NFSU2_TR(0x43ddbc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43ddbd:{NFSU2_TR(0x43ddbd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43ddbe:{NFSU2_TR(0x43ddbe);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43ddc0:{NFSU2_TR(0x43ddc0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43ddb6u);}goto L43ddb6;}}
}
B43ddc2:L43ddc2:{c.instructions+=1;NFSU2_TR(0x43ddc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B43ddc3:L43ddc3:{c.instructions+=4;NFSU2_TR(0x43ddc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43ddc7:{NFSU2_TR(0x43ddc7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B43ddc9:{NFSU2_TR(0x43ddc9);
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
B43ddcb:{NFSU2_TR(0x43ddcb);
if(r1(R+518)){{goto L43dddc;}}
}
B43ddcd:L43ddcd:{c.instructions+=1;NFSU2_TR(0x43ddcd);
__builtin_memmove((R+4),(R+4),4);
}
B43ddd0:L43ddd0:{c.instructions+=6;NFSU2_TR(0x43ddd0);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B43ddd3:{NFSU2_TR(0x43ddd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B43ddd6:{NFSU2_TR(0x43ddd6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B43ddd7:{NFSU2_TR(0x43ddd7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43ddd8:{NFSU2_TR(0x43ddd8);
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
B43ddda:{NFSU2_TR(0x43ddda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43ddd0u);}goto L43ddd0;}}
}
B43dddc:L43dddc:{c.instructions+=3;NFSU2_TR(0x43dddc);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B43dde0:{NFSU2_TR(0x43dde0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43dde1:{NFSU2_TR(0x43dde1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43ddf0:L43ddf0:{c.instructions+=4;NFSU2_TR(0x43ddf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43ddf4:{NFSU2_TR(0x43ddf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43ddf6:{NFSU2_TR(0x43ddf6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43ddf7:{NFSU2_TR(0x43ddf7);
if(r1(R+518)){{goto L43de0e;}}
}
B43ddf9:L43ddf9:{c.instructions+=2;NFSU2_TR(0x43ddf9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43ddfd:{NFSU2_TR(0x43ddfd);
__builtin_memmove((R+4),(R+4),4);
}
B43de00:L43de00:{c.instructions+=4;NFSU2_TR(0x43de00);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B43de02:{NFSU2_TR(0x43de02);
w4(R+24,u32(s32(s8(r1(R+4)))));
}
B43de05:{NFSU2_TR(0x43de05);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B43de07:{NFSU2_TR(0x43de07);
if(r1(R+518)){{goto L43de10;}}
}
B43de09:L43de09:{c.instructions+=3;NFSU2_TR(0x43de09);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43de0a:{NFSU2_TR(0x43de0a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43de0c:{NFSU2_TR(0x43de0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43de00u);}goto L43de00;}}
}
B43de0e:L43de0e:{c.instructions+=1;NFSU2_TR(0x43de0e);
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
B43de10:L43de10:{c.instructions+=2;NFSU2_TR(0x43de10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B43de11:{NFSU2_TR(0x43de11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43de20:L43de20:{c.instructions+=3;NFSU2_TR(0x43de20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43de24:{NFSU2_TR(0x43de24);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(u8(0x0ull))));
w1(R+523,sborrow<u8>(r1(U+4),u8(0x0ull)));
w1(U+5,u8(u32(r1(U+4))-u32(u8(0x0ull))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B43de27:{NFSU2_TR(0x43de27);
if(r1(R+518)){{goto L43de49;}}
}
B43de29:L43de29:{c.instructions+=1;NFSU2_TR(0x43de29);
__builtin_memmove((R+16),(R+16),4);
}
B43de30:L43de30:{c.instructions+=3;NFSU2_TR(0x43de30);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B43de32:{NFSU2_TR(0x43de32);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B43de35:{NFSU2_TR(0x43de35);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43de3f;}}
}
B43de37:L43de37:{c.instructions+=2;NFSU2_TR(0x43de37);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43de3a:{NFSU2_TR(0x43de3a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43de3f;}}
}
B43de3c:L43de3c:{c.instructions+=1;NFSU2_TR(0x43de3c);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x5full))));
}
B43de3f:L43de3f:{c.instructions+=5;NFSU2_TR(0x43de3f);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B43de41:{NFSU2_TR(0x43de41);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B43de44:{NFSU2_TR(0x43de44);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43de45:{NFSU2_TR(0x43de45);
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
B43de47:{NFSU2_TR(0x43de47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43de30u);}goto L43de30;}}
}
B43de49:L43de49:{c.instructions+=1;NFSU2_TR(0x43de49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43de50:L43de50:{c.instructions+=4;NFSU2_TR(0x43de50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B43de54:{NFSU2_TR(0x43de54);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B43de56:{NFSU2_TR(0x43de56);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43de58:{NFSU2_TR(0x43de58);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43dead;}}
}
B43de5a:L43de5a:{c.instructions+=2;NFSU2_TR(0x43de5a);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x78ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B43de5e:{NFSU2_TR(0x43de5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43dead;}}
}
B43de60:L43de60:{c.instructions+=5;NFSU2_TR(0x43de60);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B43de63:{NFSU2_TR(0x43de63);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B43de66:{NFSU2_TR(0x43de66);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43de68:{NFSU2_TR(0x43de68);
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
B43de6a:{NFSU2_TR(0x43de6a);
if(r1(R+518)){{goto L43dee7;}}
}
B43de6c:L43de6c:{c.instructions+=1;NFSU2_TR(0x43de6c);
__builtin_memmove((R+16),(R+16),4);
}
B43de70:L43de70:{c.instructions+=2;NFSU2_TR(0x43de70);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B43de73:{NFSU2_TR(0x43de73);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43de82;}}
}
B43de75:L43de75:{c.instructions+=2;NFSU2_TR(0x43de75);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43de78:{NFSU2_TR(0x43de78);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43de82;}}
}
B43de7a:L43de7a:{c.instructions+=3;NFSU2_TR(0x43de7a);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B43de7d:{NFSU2_TR(0x43de7d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x30ull))));
}
B43de80:{NFSU2_TR(0x43de80);
{goto L43de9f;}
}
B43de82:L43de82:{c.instructions+=2;NFSU2_TR(0x43de82);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x61ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B43de85:{NFSU2_TR(0x43de85);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43de8f;}}
}
B43de87:L43de87:{c.instructions+=2;NFSU2_TR(0x43de87);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x7aull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43de8a:{NFSU2_TR(0x43de8a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43de8f;}}
}
B43de8c:L43de8c:{c.instructions+=1;NFSU2_TR(0x43de8c);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x5full))));
}
B43de8f:L43de8f:{c.instructions+=2;NFSU2_TR(0x43de8f);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x41ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x41ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43de92:{NFSU2_TR(0x43de92);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43dee7;}}
}
B43de94:L43de94:{c.instructions+=2;NFSU2_TR(0x43de94);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x46ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x46ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x46ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43de97:{NFSU2_TR(0x43de97);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43dee7;}}
}
B43de99:L43de99:{c.instructions+=2;NFSU2_TR(0x43de99);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B43de9c:{NFSU2_TR(0x43de9c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x37ull))));
}
B43de9f:L43de9f:{c.instructions+=6;NFSU2_TR(0x43de9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B43dea2:{NFSU2_TR(0x43dea2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B43dea4:{NFSU2_TR(0x43dea4);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B43dea7:{NFSU2_TR(0x43dea7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43dea8:{NFSU2_TR(0x43dea8);
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
B43deaa:{NFSU2_TR(0x43deaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43de70u);}goto L43de70;}}
}
B43deac:L43deac:{c.instructions+=1;NFSU2_TR(0x43deac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43dead:L43dead:{c.instructions+=4;NFSU2_TR(0x43dead);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43deae:{NFSU2_TR(0x43deae);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B43deb0:{NFSU2_TR(0x43deb0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2dull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43deb2:{NFSU2_TR(0x43deb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43deb8;}}
}
B43deb4:L43deb4:{c.instructions+=2;NFSU2_TR(0x43deb4);
w1(R+12,u8(0x1ull));
}
B43deb6:{NFSU2_TR(0x43deb6);
{goto L43debc;}
}
B43deb8:L43deb8:{c.instructions+=2;NFSU2_TR(0x43deb8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2bull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43deba:{NFSU2_TR(0x43deba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43debd;}}
}
B43debc:L43debc:{c.instructions+=1;NFSU2_TR(0x43debc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43debd:L43debd:{c.instructions+=4;NFSU2_TR(0x43debd);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B43debf:{NFSU2_TR(0x43debf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43dec1:{NFSU2_TR(0x43dec1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43dec3:{NFSU2_TR(0x43dec3);
if(r1(R+518)){{goto L43dee0;}}
}
B43dec5:L43dec5:{c.instructions+=2;NFSU2_TR(0x43dec5);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B43dec8:{NFSU2_TR(0x43dec8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43dee0;}}
}
B43deca:L43deca:{c.instructions+=2;NFSU2_TR(0x43deca);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B43decd:{NFSU2_TR(0x43decd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43dee0;}}
}
B43decf:L43decf:{c.instructions+=7;NFSU2_TR(0x43decf);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B43ded2:{NFSU2_TR(0x43ded2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B43ded5:{NFSU2_TR(0x43ded5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B43ded6:{NFSU2_TR(0x43ded6);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B43deda:{NFSU2_TR(0x43deda);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B43dedc:{NFSU2_TR(0x43dedc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43dede:{NFSU2_TR(0x43dede);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43dec5u);}goto L43dec5;}}
}
B43dee0:L43dee0:{c.instructions+=3;NFSU2_TR(0x43dee0);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43dee2:{NFSU2_TR(0x43dee2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43dee3:{NFSU2_TR(0x43dee3);
if(r1(R+518)){{goto L43dee7;}}
}
B43dee5:L43dee5:{c.instructions+=1;NFSU2_TR(0x43dee5);
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
B43dee7:L43dee7:{c.instructions+=1;NFSU2_TR(0x43dee7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43def0:L43def0:{c.instructions+=6;NFSU2_TR(0x43def0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43def4:{NFSU2_TR(0x43def4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B43def6:{NFSU2_TR(0x43def6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43def7:{NFSU2_TR(0x43def7);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B43def9:{NFSU2_TR(0x43def9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2dull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43defb:{NFSU2_TR(0x43defb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43df01;}}
}
B43defd:L43defd:{c.instructions+=2;NFSU2_TR(0x43defd);
w1(R+12,u8(0x1ull));
}
B43deff:{NFSU2_TR(0x43deff);
{goto L43df05;}
}
B43df01:L43df01:{c.instructions+=2;NFSU2_TR(0x43df01);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2bull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43df03:{NFSU2_TR(0x43df03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43df06;}}
}
B43df05:L43df05:{c.instructions+=1;NFSU2_TR(0x43df05);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43df06:L43df06:{c.instructions+=2;NFSU2_TR(0x43df06);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43df0c:{NFSU2_TR(0x43df0c);
__builtin_memmove((R+16),(R+16),4);
}
B43df10:L43df10:{c.instructions+=3;NFSU2_TR(0x43df10);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B43df12:{NFSU2_TR(0x43df12);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B43df14:{NFSU2_TR(0x43df14);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43df35;}}
}
B43df16:L43df16:{c.instructions+=2;NFSU2_TR(0x43df16);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43df18:{NFSU2_TR(0x43df18);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43df35;}}
}
B43df1a:L43df1a:{c.instructions+=9;NFSU2_TR(0x43df1a);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B43df1d:{NFSU2_TR(0x43df1d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x30ull))));
}
B43df20:{NFSU2_TR(0x43df20);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43df24:{NFSU2_TR(0x43df24);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43df25:{NFSU2_TR(0x43df25);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B43df29:{NFSU2_TR(0x43df29);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43df2b:{NFSU2_TR(0x43df2b);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43df31:{NFSU2_TR(0x43df31);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43df33:{NFSU2_TR(0x43df33);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43df10u);}goto L43df10;}
}
B43df35:L43df35:{c.instructions+=2;NFSU2_TR(0x43df35);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B43df38:{NFSU2_TR(0x43df38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43df96;}}
}
B43df3a:L43df3a:{c.instructions+=3;NFSU2_TR(0x43df3a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43df40:{NFSU2_TR(0x43df40);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43df44:{NFSU2_TR(0x43df44);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43df4a:L43df4a:{c.instructions+=4;NFSU2_TR(0x43df4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B43df4d:{NFSU2_TR(0x43df4d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43df4e:{NFSU2_TR(0x43df4e);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B43df50:{NFSU2_TR(0x43df50);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L43df70;}}
}
B43df52:L43df52:{c.instructions+=2;NFSU2_TR(0x43df52);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43df54:{NFSU2_TR(0x43df54);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L43df70;}}
}
B43df56:L43df56:{c.instructions+=8;NFSU2_TR(0x43df56);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43df5c:{NFSU2_TR(0x43df5c);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B43df5f:{NFSU2_TR(0x43df5f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x30ull))));
}
B43df62:{NFSU2_TR(0x43df62);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43df66:{NFSU2_TR(0x43df66);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B43df6a:{NFSU2_TR(0x43df6a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B43df6c:{NFSU2_TR(0x43df6c);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B43df6e:{NFSU2_TR(0x43df6e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43df4au);}goto L43df4a;}
}
B43df70:L43df70:{c.instructions+=7;NFSU2_TR(0x43df70);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B43df72:{NFSU2_TR(0x43df72);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B43df76:{NFSU2_TR(0x43df76);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B43df78:{NFSU2_TR(0x43df78);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B43df7e:{NFSU2_TR(0x43df7e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B43df80:{NFSU2_TR(0x43df80);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43df83:{NFSU2_TR(0x43df83);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L43df94;}}
}
B43df85:L43df85:{c.instructions+=5;NFSU2_TR(0x43df85);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B43df89:{NFSU2_TR(0x43df89);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B43df8b:{NFSU2_TR(0x43df8b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43df8c:{NFSU2_TR(0x43df8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B43df90:{NFSU2_TR(0x43df90);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43df94:L43df94:{c.instructions+=1;NFSU2_TR(0x43df94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B43df96:L43df96:{c.instructions+=3;NFSU2_TR(0x43df96);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B43df98:{NFSU2_TR(0x43df98);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x65ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43df9a:{NFSU2_TR(0x43df9a);
if(r1(R+518)){{goto L43dfa0;}}
}
B43df9c:L43df9c:{c.instructions+=2;NFSU2_TR(0x43df9c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x45ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B43df9e:{NFSU2_TR(0x43df9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L43dfce;}}
}
B43dfa0:L43dfa0:{c.instructions+=3;NFSU2_TR(0x43dfa0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B43dfa1:{NFSU2_TR(0x43dfa1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B43dfa2:{NFSU2_TR(0x43dfa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x43dfa7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43de50u);}goto L43de50;}
}
B43dfa7:L43dfa7:{c.instructions+=4;NFSU2_TR(0x43dfa7);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B43dfad:{NFSU2_TR(0x43dfad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B43dfb0:{NFSU2_TR(0x43dfb0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B43dfb2:{NFSU2_TR(0x43dfb2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L43dfbf;}}
}
B43dfb4:L43dfb4:{c.instructions+=3;NFSU2_TR(0x43dfb4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43dfb5:{NFSU2_TR(0x43dfb5);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43dfbb:{NFSU2_TR(0x43dfbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43dfb4u);}goto L43dfb4;}}
}
B43dfbd:L43dfbd:{c.instructions+=1;NFSU2_TR(0x43dfbd);
{goto L43dfcc;}
}
B43dfbf:L43dfbf:{c.instructions+=1;NFSU2_TR(0x43dfbf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L43dfcc;}}
}
B43dfc1:L43dfc1:{c.instructions+=1;NFSU2_TR(0x43dfc1);
w4(R+0,u32(0-u32(r4(R+0))));
}
B43dfc3:L43dfc3:{c.instructions+=3;NFSU2_TR(0x43dfc3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B43dfc4:{NFSU2_TR(0x43dfc4);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B43dfca:{NFSU2_TR(0x43dfca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43dfc3u);}goto L43dfc3;}}
}
B43dfcc:L43dfcc:{c.instructions+=1;NFSU2_TR(0x43dfcc);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B43dfce:L43dfce:{c.instructions+=3;NFSU2_TR(0x43dfce);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B43dfd0:{NFSU2_TR(0x43dfd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B43dfd1:{NFSU2_TR(0x43dfd1);
if(r1(R+518)){{goto L43dfd5;}}
}
B43dfd3:L43dfd3:{c.instructions+=1;NFSU2_TR(0x43dfd3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B43dfd5:L43dfd5:{c.instructions+=1;NFSU2_TR(0x43dfd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B43dfe0:L43dfe0:{c.instructions+=4;NFSU2_TR(0x43dfe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B43dfe4:{NFSU2_TR(0x43dfe4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B43dfe6:{NFSU2_TR(0x43dfe6);
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
B43dfe8:{NFSU2_TR(0x43dfe8);
if(r1(R+518)){{goto L43dff8;}}
}
B43dfea:L43dfea:{c.instructions+=2;NFSU2_TR(0x43dfea);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+6),(U+0),2);
w1(R+512,u8((r2(U+6))<(r2(R+0))));
w1(R+523,sborrow<u16>(r2(U+6),r2(R+0)));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
w2(U+2,u16(u32(r2(U+8))&u32(u16(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r2(U+2)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B43dfed:{NFSU2_TR(0x43dfed);
if(r1(R+518)){{goto L43dff8;}}
}
B43dfef:L43dfef:{c.instructions+=1;NFSU2_TR(0x43dfef);
}
B43dff0:L43dff0:{c.instructions+=3;NFSU2_TR(0x43dff0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B43dff1:{NFSU2_TR(0x43dff1);
u8 U[18];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+14),(U+8),2);
w1(R+512,u8((r2(U+14))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+14),u16(0x0ull)));
w2(U+16,u16(u32(r2(U+14))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+16))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
w2(U+10,u16(u32(r2(U+16))&u32(u16(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r2(U+10)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B43dff6:{NFSU2_TR(0x43dff6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x43dff0u);}goto L43dff0;}}
}
B43dff8:L43dff8:{c.instructions+=1;NFSU2_TR(0x43dff8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x43d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
