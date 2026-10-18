#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_741(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_74b(u8* __restrict R,Cpu& c);
u32 body_74c(u8* __restrict R,Cpu& c);
u32 body_754(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x74d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x74d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_74d(u8* __restrict R,Cpu& c);
u32 page_74d(Cpu& c){return body_74d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_74d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x74d006:goto L74d006;
case 0x74d00c:c.instructions+=5;goto B74d00c;
case 0x74d00e:c.instructions+=4;goto B74d00e;
case 0x74d00f:c.instructions+=3;goto B74d00f;
case 0x74d010:c.instructions+=2;goto B74d010;
case 0x74d011:c.instructions+=1;goto B74d011;
case 0x74d020:goto L74d020;
case 0x74d024:c.instructions+=2;goto B74d024;
case 0x74d029:c.instructions+=1;goto B74d029;
case 0x74d030:goto L74d030;
case 0x74d034:c.instructions+=9;goto B74d034;
case 0x74d035:c.instructions+=8;goto B74d035;
case 0x74d036:c.instructions+=7;goto B74d036;
case 0x74d037:c.instructions+=6;goto B74d037;
case 0x74d03b:c.instructions+=5;goto B74d03b;
case 0x74d03c:c.instructions+=4;goto B74d03c;
case 0x74d042:c.instructions+=3;goto B74d042;
case 0x74d044:c.instructions+=2;goto B74d044;
case 0x74d045:c.instructions+=1;goto B74d045;
case 0x74d04a:goto L74d04a;
case 0x74d04e:c.instructions+=5;goto B74d04e;
case 0x74d052:c.instructions+=4;goto B74d052;
case 0x74d055:c.instructions+=3;goto B74d055;
case 0x74d05b:c.instructions+=2;goto B74d05b;
case 0x74d05d:c.instructions+=1;goto B74d05d;
case 0x74d063:goto L74d063;
case 0x74d067:c.instructions+=1;goto B74d067;
case 0x74d069:goto L74d069;
case 0x74d06e:c.instructions+=1;goto B74d06e;
case 0x74d070:goto L74d070;
case 0x74d075:c.instructions+=10;goto B74d075;
case 0x74d07a:c.instructions+=9;goto B74d07a;
case 0x74d07d:c.instructions+=8;goto B74d07d;
case 0x74d080:c.instructions+=7;goto B74d080;
case 0x74d084:c.instructions+=6;goto B74d084;
case 0x74d08a:c.instructions+=5;goto B74d08a;
case 0x74d08c:c.instructions+=4;goto B74d08c;
case 0x74d090:c.instructions+=3;goto B74d090;
case 0x74d091:c.instructions+=2;goto B74d091;
case 0x74d094:c.instructions+=1;goto B74d094;
case 0x74d096:goto L74d096;
case 0x74d09a:c.instructions+=9;goto B74d09a;
case 0x74d0a0:c.instructions+=8;goto B74d0a0;
case 0x74d0a4:c.instructions+=7;goto B74d0a4;
case 0x74d0aa:c.instructions+=6;goto B74d0aa;
case 0x74d0ad:c.instructions+=5;goto B74d0ad;
case 0x74d0ae:c.instructions+=4;goto B74d0ae;
case 0x74d0af:c.instructions+=3;goto B74d0af;
case 0x74d0b1:c.instructions+=2;goto B74d0b1;
case 0x74d0b2:c.instructions+=1;goto B74d0b2;
case 0x74d0c0:goto L74d0c0;
case 0x74d0c3:c.instructions+=7;goto B74d0c3;
case 0x74d0c4:c.instructions+=6;goto B74d0c4;
case 0x74d0c5:c.instructions+=5;goto B74d0c5;
case 0x74d0c9:c.instructions+=4;goto B74d0c9;
case 0x74d0cf:c.instructions+=3;goto B74d0cf;
case 0x74d0d1:c.instructions+=2;goto B74d0d1;
case 0x74d0d3:c.instructions+=1;goto B74d0d3;
case 0x74d0d9:goto L74d0d9;
case 0x74d0df:c.instructions+=2;goto B74d0df;
case 0x74d0e0:c.instructions+=1;goto B74d0e0;
case 0x74d0e5:goto L74d0e5;
case 0x74d0e8:c.instructions+=2;goto B74d0e8;
case 0x74d0ea:c.instructions+=1;goto B74d0ea;
case 0x74d0ec:goto L74d0ec;
case 0x74d0ed:c.instructions+=1;goto B74d0ed;
case 0x74d0f0:goto L74d0f0;
case 0x74d0f6:c.instructions+=3;goto B74d0f6;
case 0x74d0f7:c.instructions+=2;goto B74d0f7;
case 0x74d0f8:c.instructions+=1;goto B74d0f8;
case 0x74d0fd:goto L74d0fd;
case 0x74d0ff:c.instructions+=4;goto B74d0ff;
case 0x74d105:c.instructions+=3;goto B74d105;
case 0x74d108:c.instructions+=2;goto B74d108;
case 0x74d10a:c.instructions+=1;goto B74d10a;
case 0x74d10c:goto L74d10c;
case 0x74d112:c.instructions+=4;goto B74d112;
case 0x74d113:c.instructions+=3;goto B74d113;
case 0x74d114:c.instructions+=2;goto B74d114;
case 0x74d115:c.instructions+=1;goto B74d115;
case 0x74d117:goto L74d117;
case 0x74d11a:goto L74d11a;
case 0x74d11b:c.instructions+=1;goto B74d11b;
case 0x74d11e:goto L74d11e;
case 0x74d124:c.instructions+=2;goto B74d124;
case 0x74d125:c.instructions+=1;goto B74d125;
case 0x74d12a:goto L74d12a;
case 0x74d12d:c.instructions+=2;goto B74d12d;
case 0x74d12f:c.instructions+=1;goto B74d12f;
case 0x74d131:goto L74d131;
case 0x74d132:goto L74d132;
case 0x74d138:c.instructions+=2;goto B74d138;
case 0x74d13a:c.instructions+=1;goto B74d13a;
case 0x74d13c:goto L74d13c;
case 0x74d142:c.instructions+=10;goto B74d142;
case 0x74d148:c.instructions+=9;goto B74d148;
case 0x74d14c:c.instructions+=8;goto B74d14c;
case 0x74d14d:c.instructions+=7;goto B74d14d;
case 0x74d151:c.instructions+=6;goto B74d151;
case 0x74d152:c.instructions+=5;goto B74d152;
case 0x74d153:c.instructions+=4;goto B74d153;
case 0x74d15b:c.instructions+=3;goto B74d15b;
case 0x74d15f:c.instructions+=2;goto B74d15f;
case 0x74d163:c.instructions+=1;goto B74d163;
case 0x74d165:goto L74d165;
case 0x74d168:goto L74d168;
case 0x74d16e:c.instructions+=2;goto B74d16e;
case 0x74d16f:c.instructions+=1;goto B74d16f;
case 0x74d174:goto L74d174;
case 0x74d17a:c.instructions+=3;goto B74d17a;
case 0x74d17b:c.instructions+=2;goto B74d17b;
case 0x74d181:c.instructions+=1;goto B74d181;
case 0x74d186:goto L74d186;
case 0x74d189:c.instructions+=3;goto B74d189;
case 0x74d18f:c.instructions+=2;goto B74d18f;
case 0x74d195:c.instructions+=1;goto B74d195;
case 0x74d19b:goto L74d19b;
case 0x74d19c:c.instructions+=3;goto B74d19c;
case 0x74d19d:c.instructions+=2;goto B74d19d;
case 0x74d1a0:c.instructions+=1;goto B74d1a0;
case 0x74d1b0:goto L74d1b0;
case 0x74d1b6:c.instructions+=9;goto B74d1b6;
case 0x74d1bb:c.instructions+=8;goto B74d1bb;
case 0x74d1bc:c.instructions+=7;goto B74d1bc;
case 0x74d1bd:c.instructions+=6;goto B74d1bd;
case 0x74d1c4:c.instructions+=5;goto B74d1c4;
case 0x74d1cb:c.instructions+=4;goto B74d1cb;
case 0x74d1d1:c.instructions+=3;goto B74d1d1;
case 0x74d1d3:c.instructions+=2;goto B74d1d3;
case 0x74d1d5:c.instructions+=1;goto B74d1d5;
case 0x74d1db:goto L74d1db;
case 0x74d1e2:c.instructions+=6;goto B74d1e2;
case 0x74d1e9:c.instructions+=5;goto B74d1e9;
case 0x74d1ea:c.instructions+=4;goto B74d1ea;
case 0x74d1eb:c.instructions+=3;goto B74d1eb;
case 0x74d1f1:c.instructions+=2;goto B74d1f1;
case 0x74d1f7:c.instructions+=1;goto B74d1f7;
case 0x74d1fc:goto L74d1fc;
case 0x74d202:c.instructions+=7;goto B74d202;
case 0x74d203:c.instructions+=6;goto B74d203;
case 0x74d208:c.instructions+=5;goto B74d208;
case 0x74d20c:c.instructions+=4;goto B74d20c;
case 0x74d211:c.instructions+=3;goto B74d211;
case 0x74d212:c.instructions+=2;goto B74d212;
case 0x74d216:c.instructions+=1;goto B74d216;
case 0x74d21b:goto L74d21b;
case 0x74d21d:c.instructions+=5;goto B74d21d;
case 0x74d222:c.instructions+=4;goto B74d222;
case 0x74d226:c.instructions+=3;goto B74d226;
case 0x74d22b:c.instructions+=2;goto B74d22b;
case 0x74d22c:c.instructions+=1;goto B74d22c;
case 0x74d231:goto L74d231;
case 0x74d234:c.instructions+=7;goto B74d234;
case 0x74d236:c.instructions+=6;goto B74d236;
case 0x74d23a:c.instructions+=5;goto B74d23a;
case 0x74d23b:c.instructions+=4;goto B74d23b;
case 0x74d23c:c.instructions+=3;goto B74d23c;
case 0x74d241:c.instructions+=2;goto B74d241;
case 0x74d242:c.instructions+=1;goto B74d242;
case 0x74d247:goto L74d247;
case 0x74d248:c.instructions+=7;goto B74d248;
case 0x74d24d:c.instructions+=6;goto B74d24d;
case 0x74d251:c.instructions+=5;goto B74d251;
case 0x74d256:c.instructions+=4;goto B74d256;
case 0x74d257:c.instructions+=3;goto B74d257;
case 0x74d25d:c.instructions+=2;goto B74d25d;
case 0x74d261:c.instructions+=1;goto B74d261;
case 0x74d266:goto L74d266;
case 0x74d269:c.instructions+=6;goto B74d269;
case 0x74d26e:c.instructions+=5;goto B74d26e;
case 0x74d273:c.instructions+=4;goto B74d273;
case 0x74d277:c.instructions+=3;goto B74d277;
case 0x74d27c:c.instructions+=2;goto B74d27c;
case 0x74d27d:c.instructions+=1;goto B74d27d;
case 0x74d282:goto L74d282;
case 0x74d287:c.instructions+=5;goto B74d287;
case 0x74d28c:c.instructions+=4;goto B74d28c;
case 0x74d290:c.instructions+=3;goto B74d290;
case 0x74d295:c.instructions+=2;goto B74d295;
case 0x74d296:c.instructions+=1;goto B74d296;
case 0x74d29b:goto L74d29b;
case 0x74d2a0:c.instructions+=5;goto B74d2a0;
case 0x74d2a5:c.instructions+=4;goto B74d2a5;
case 0x74d2a9:c.instructions+=3;goto B74d2a9;
case 0x74d2ae:c.instructions+=2;goto B74d2ae;
case 0x74d2af:c.instructions+=1;goto B74d2af;
case 0x74d2b4:goto L74d2b4;
case 0x74d2b6:c.instructions+=5;goto B74d2b6;
case 0x74d2bb:c.instructions+=4;goto B74d2bb;
case 0x74d2bf:c.instructions+=3;goto B74d2bf;
case 0x74d2c4:c.instructions+=2;goto B74d2c4;
case 0x74d2c5:c.instructions+=1;goto B74d2c5;
case 0x74d2ca:goto L74d2ca;
case 0x74d2cd:c.instructions+=8;goto B74d2cd;
case 0x74d2d0:c.instructions+=7;goto B74d2d0;
case 0x74d2d2:c.instructions+=6;goto B74d2d2;
case 0x74d2d6:c.instructions+=5;goto B74d2d6;
case 0x74d2d7:c.instructions+=4;goto B74d2d7;
case 0x74d2d8:c.instructions+=3;goto B74d2d8;
case 0x74d2dd:c.instructions+=2;goto B74d2dd;
case 0x74d2de:c.instructions+=1;goto B74d2de;
case 0x74d2e3:goto L74d2e3;
case 0x74d2e4:c.instructions+=6;goto B74d2e4;
case 0x74d2e9:c.instructions+=5;goto B74d2e9;
case 0x74d2ed:c.instructions+=4;goto B74d2ed;
case 0x74d2f2:c.instructions+=3;goto B74d2f2;
case 0x74d2f3:c.instructions+=2;goto B74d2f3;
case 0x74d2f7:c.instructions+=1;goto B74d2f7;
case 0x74d2fc:goto L74d2fc;
case 0x74d301:c.instructions+=5;goto B74d301;
case 0x74d306:c.instructions+=4;goto B74d306;
case 0x74d30b:c.instructions+=3;goto B74d30b;
case 0x74d30f:c.instructions+=2;goto B74d30f;
case 0x74d310:c.instructions+=1;goto B74d310;
case 0x74d315:goto L74d315;
case 0x74d31a:c.instructions+=5;goto B74d31a;
case 0x74d31f:c.instructions+=4;goto B74d31f;
case 0x74d323:c.instructions+=3;goto B74d323;
case 0x74d328:c.instructions+=2;goto B74d328;
case 0x74d329:c.instructions+=1;goto B74d329;
case 0x74d32e:goto L74d32e;
case 0x74d331:c.instructions+=6;goto B74d331;
case 0x74d336:c.instructions+=5;goto B74d336;
case 0x74d33b:c.instructions+=4;goto B74d33b;
case 0x74d33f:c.instructions+=3;goto B74d33f;
case 0x74d344:c.instructions+=2;goto B74d344;
case 0x74d345:c.instructions+=1;goto B74d345;
case 0x74d34a:goto L74d34a;
case 0x74d34c:c.instructions+=5;goto B74d34c;
case 0x74d351:c.instructions+=4;goto B74d351;
case 0x74d355:c.instructions+=3;goto B74d355;
case 0x74d35a:c.instructions+=2;goto B74d35a;
case 0x74d35b:c.instructions+=1;goto B74d35b;
case 0x74d360:goto L74d360;
case 0x74d363:c.instructions+=7;goto B74d363;
case 0x74d365:c.instructions+=6;goto B74d365;
case 0x74d369:c.instructions+=5;goto B74d369;
case 0x74d36a:c.instructions+=4;goto B74d36a;
case 0x74d36b:c.instructions+=3;goto B74d36b;
case 0x74d370:c.instructions+=2;goto B74d370;
case 0x74d371:c.instructions+=1;goto B74d371;
case 0x74d376:goto L74d376;
case 0x74d37c:c.instructions+=3;goto B74d37c;
case 0x74d37e:c.instructions+=2;goto B74d37e;
case 0x74d37f:c.instructions+=1;goto B74d37f;
case 0x74d384:goto L74d384;
case 0x74d387:c.instructions+=1;goto B74d387;
case 0x74d388:goto L74d388;
case 0x74d38e:c.instructions+=4;goto B74d38e;
case 0x74d395:c.instructions+=3;goto B74d395;
case 0x74d396:c.instructions+=2;goto B74d396;
case 0x74d397:c.instructions+=1;goto B74d397;
case 0x74d39c:goto L74d39c;
case 0x74d3a2:c.instructions+=1;goto B74d3a2;
case 0x74d3b0:goto L74d3b0;
case 0x74d3b4:c.instructions+=2;goto B74d3b4;
case 0x74d3ba:c.instructions+=1;goto B74d3ba;
case 0x74d3c0:goto L74d3c0;
case 0x74d3c1:c.instructions+=3;goto B74d3c1;
case 0x74d3c5:c.instructions+=2;goto B74d3c5;
case 0x74d3c7:c.instructions+=1;goto B74d3c7;
case 0x74d3c9:goto L74d3c9;
case 0x74d3cc:c.instructions+=1;goto B74d3cc;
case 0x74d3ce:goto L74d3ce;
case 0x74d3d0:c.instructions+=2;goto B74d3d0;
case 0x74d3d1:c.instructions+=1;goto B74d3d1;
case 0x74d3d6:goto L74d3d6;
case 0x74d3d9:c.instructions+=2;goto B74d3d9;
case 0x74d3db:c.instructions+=1;goto B74d3db;
case 0x74d3dd:goto L74d3dd;
case 0x74d3df:c.instructions+=2;goto B74d3df;
case 0x74d3e0:c.instructions+=1;goto B74d3e0;
case 0x74d3e5:goto L74d3e5;
case 0x74d3e8:c.instructions+=2;goto B74d3e8;
case 0x74d3ea:c.instructions+=1;goto B74d3ea;
case 0x74d3ec:goto L74d3ec;
case 0x74d3f0:c.instructions+=3;goto B74d3f0;
case 0x74d3f3:c.instructions+=2;goto B74d3f3;
case 0x74d3f5:c.instructions+=1;goto B74d3f5;
case 0x74d3f7:goto L74d3f7;
case 0x74d3f9:c.instructions+=2;goto B74d3f9;
case 0x74d3fa:c.instructions+=1;goto B74d3fa;
case 0x74d3ff:goto L74d3ff;
case 0x74d402:c.instructions+=2;goto B74d402;
case 0x74d404:c.instructions+=1;goto B74d404;
case 0x74d406:goto L74d406;
case 0x74d408:c.instructions+=2;goto B74d408;
case 0x74d409:c.instructions+=1;goto B74d409;
case 0x74d40a:goto L74d40a;
case 0x74d40f:c.instructions+=2;goto B74d40f;
case 0x74d410:c.instructions+=1;goto B74d410;
case 0x74d420:goto L74d420;
case 0x74d426:c.instructions+=7;goto B74d426;
case 0x74d42b:c.instructions+=6;goto B74d42b;
case 0x74d42c:c.instructions+=5;goto B74d42c;
case 0x74d433:c.instructions+=4;goto B74d433;
case 0x74d435:c.instructions+=3;goto B74d435;
case 0x74d43c:c.instructions+=2;goto B74d43c;
case 0x74d43d:c.instructions+=1;goto B74d43d;
case 0x74d443:goto L74d443;
case 0x74d449:c.instructions+=2;goto B74d449;
case 0x74d44b:c.instructions+=1;goto B74d44b;
case 0x74d451:goto L74d451;
case 0x74d458:c.instructions+=3;goto B74d458;
case 0x74d459:c.instructions+=2;goto B74d459;
case 0x74d45a:c.instructions+=1;goto B74d45a;
case 0x74d45f:goto L74d45f;
case 0x74d462:c.instructions+=2;goto B74d462;
case 0x74d464:c.instructions+=1;goto B74d464;
case 0x74d46a:goto L74d46a;
case 0x74d471:c.instructions+=8;goto B74d471;
case 0x74d478:c.instructions+=7;goto B74d478;
case 0x74d479:c.instructions+=6;goto B74d479;
case 0x74d47a:c.instructions+=5;goto B74d47a;
case 0x74d47b:c.instructions+=4;goto B74d47b;
case 0x74d482:c.instructions+=3;goto B74d482;
case 0x74d483:c.instructions+=2;goto B74d483;
case 0x74d485:c.instructions+=1;goto B74d485;
case 0x74d48a:goto L74d48a;
case 0x74d48b:c.instructions+=3;goto B74d48b;
case 0x74d48c:c.instructions+=2;goto B74d48c;
case 0x74d48e:c.instructions+=1;goto B74d48e;
case 0x74d493:goto L74d493;
case 0x74d495:c.instructions+=3;goto B74d495;
case 0x74d498:c.instructions+=2;goto B74d498;
case 0x74d49a:c.instructions+=1;goto B74d49a;
case 0x74d4a0:goto L74d4a0;
case 0x74d4a6:c.instructions+=7;goto B74d4a6;
case 0x74d4a7:c.instructions+=6;goto B74d4a7;
case 0x74d4ac:c.instructions+=5;goto B74d4ac;
case 0x74d4b0:c.instructions+=4;goto B74d4b0;
case 0x74d4b5:c.instructions+=3;goto B74d4b5;
case 0x74d4b6:c.instructions+=2;goto B74d4b6;
case 0x74d4bb:c.instructions+=1;goto B74d4bb;
case 0x74d4c0:goto L74d4c0;
case 0x74d4c1:c.instructions+=5;goto B74d4c1;
case 0x74d4c6:c.instructions+=4;goto B74d4c6;
case 0x74d4ca:c.instructions+=3;goto B74d4ca;
case 0x74d4cf:c.instructions+=2;goto B74d4cf;
case 0x74d4d0:c.instructions+=1;goto B74d4d0;
case 0x74d4d5:goto L74d4d5;
case 0x74d4db:c.instructions+=3;goto B74d4db;
case 0x74d4de:c.instructions+=2;goto B74d4de;
case 0x74d4e3:c.instructions+=1;goto B74d4e3;
case 0x74d4e5:goto L74d4e5;
case 0x74d4e6:c.instructions+=5;goto B74d4e6;
case 0x74d4eb:c.instructions+=4;goto B74d4eb;
case 0x74d4ef:c.instructions+=3;goto B74d4ef;
case 0x74d4f4:c.instructions+=2;goto B74d4f4;
case 0x74d4f5:c.instructions+=1;goto B74d4f5;
case 0x74d4fa:goto L74d4fa;
case 0x74d500:c.instructions+=4;goto B74d500;
case 0x74d503:c.instructions+=3;goto B74d503;
case 0x74d508:c.instructions+=2;goto B74d508;
case 0x74d50e:c.instructions+=1;goto B74d50e;
case 0x74d514:goto L74d514;
case 0x74d51b:c.instructions+=1;goto B74d51b;
case 0x74d51d:goto L74d51d;
case 0x74d522:c.instructions+=5;goto B74d522;
case 0x74d527:c.instructions+=4;goto B74d527;
case 0x74d52b:c.instructions+=3;goto B74d52b;
case 0x74d530:c.instructions+=2;goto B74d530;
case 0x74d531:c.instructions+=1;goto B74d531;
case 0x74d536:goto L74d536;
case 0x74d53b:c.instructions+=5;goto B74d53b;
case 0x74d540:c.instructions+=4;goto B74d540;
case 0x74d544:c.instructions+=3;goto B74d544;
case 0x74d549:c.instructions+=2;goto B74d549;
case 0x74d54a:c.instructions+=1;goto B74d54a;
case 0x74d54f:goto L74d54f;
case 0x74d552:c.instructions+=7;goto B74d552;
case 0x74d554:c.instructions+=6;goto B74d554;
case 0x74d558:c.instructions+=5;goto B74d558;
case 0x74d559:c.instructions+=4;goto B74d559;
case 0x74d55b:c.instructions+=3;goto B74d55b;
case 0x74d560:c.instructions+=2;goto B74d560;
case 0x74d561:c.instructions+=1;goto B74d561;
case 0x74d566:goto L74d566;
case 0x74d569:goto L74d569;
case 0x74d56f:c.instructions+=2;goto B74d56f;
case 0x74d572:c.instructions+=1;goto B74d572;
case 0x74d574:goto L74d574;
case 0x74d579:c.instructions+=5;goto B74d579;
case 0x74d57e:c.instructions+=4;goto B74d57e;
case 0x74d582:c.instructions+=3;goto B74d582;
case 0x74d587:c.instructions+=2;goto B74d587;
case 0x74d588:c.instructions+=1;goto B74d588;
case 0x74d58d:goto L74d58d;
case 0x74d590:c.instructions+=7;goto B74d590;
case 0x74d592:c.instructions+=6;goto B74d592;
case 0x74d596:c.instructions+=5;goto B74d596;
case 0x74d597:c.instructions+=4;goto B74d597;
case 0x74d599:c.instructions+=3;goto B74d599;
case 0x74d59e:c.instructions+=2;goto B74d59e;
case 0x74d59f:c.instructions+=1;goto B74d59f;
case 0x74d5a4:goto L74d5a4;
case 0x74d5a7:goto L74d5a7;
case 0x74d5b1:c.instructions+=1;goto B74d5b1;
case 0x74d5b3:goto L74d5b3;
case 0x74d5b8:c.instructions+=5;goto B74d5b8;
case 0x74d5bd:c.instructions+=4;goto B74d5bd;
case 0x74d5c1:c.instructions+=3;goto B74d5c1;
case 0x74d5c6:c.instructions+=2;goto B74d5c6;
case 0x74d5c7:c.instructions+=1;goto B74d5c7;
case 0x74d5cc:goto L74d5cc;
case 0x74d5cf:c.instructions+=7;goto B74d5cf;
case 0x74d5d1:c.instructions+=6;goto B74d5d1;
case 0x74d5d5:c.instructions+=5;goto B74d5d5;
case 0x74d5d6:c.instructions+=4;goto B74d5d6;
case 0x74d5d8:c.instructions+=3;goto B74d5d8;
case 0x74d5dd:c.instructions+=2;goto B74d5dd;
case 0x74d5de:c.instructions+=1;goto B74d5de;
case 0x74d5e3:goto L74d5e3;
case 0x74d5e6:goto L74d5e6;
case 0x74d5f0:c.instructions+=1;goto B74d5f0;
case 0x74d5f2:goto L74d5f2;
case 0x74d5f5:c.instructions+=7;goto B74d5f5;
case 0x74d5f7:c.instructions+=6;goto B74d5f7;
case 0x74d5fb:c.instructions+=5;goto B74d5fb;
case 0x74d5fc:c.instructions+=4;goto B74d5fc;
case 0x74d5fe:c.instructions+=3;goto B74d5fe;
case 0x74d603:c.instructions+=2;goto B74d603;
case 0x74d604:c.instructions+=1;goto B74d604;
case 0x74d609:goto L74d609;
case 0x74d60c:goto L74d60c;
case 0x74d60d:c.instructions+=6;goto B74d60d;
case 0x74d60e:c.instructions+=5;goto B74d60e;
case 0x74d60f:c.instructions+=4;goto B74d60f;
case 0x74d611:c.instructions+=3;goto B74d611;
case 0x74d612:c.instructions+=2;goto B74d612;
case 0x74d619:c.instructions+=1;goto B74d619;
case 0x74d61e:goto L74d61e;
case 0x74d624:c.instructions+=1;goto B74d624;
case 0x74d625:goto L74d625;
case 0x74d62c:c.instructions+=4;goto B74d62c;
case 0x74d62d:c.instructions+=3;goto B74d62d;
case 0x74d632:c.instructions+=2;goto B74d632;
case 0x74d633:c.instructions+=1;goto B74d633;
case 0x74d638:goto L74d638;
case 0x74d63e:c.instructions+=1;goto B74d63e;
case 0x74d640:goto L74d640;
case 0x74d644:c.instructions+=3;goto B74d644;
case 0x74d64e:c.instructions+=2;goto B74d64e;
case 0x74d652:c.instructions+=1;goto B74d652;
case 0x74d660:goto L74d660;
case 0x74d666:c.instructions+=8;goto B74d666;
case 0x74d66b:c.instructions+=7;goto B74d66b;
case 0x74d66c:c.instructions+=6;goto B74d66c;
case 0x74d673:c.instructions+=5;goto B74d673;
case 0x74d675:c.instructions+=4;goto B74d675;
case 0x74d67c:c.instructions+=3;goto B74d67c;
case 0x74d67d:c.instructions+=2;goto B74d67d;
case 0x74d685:c.instructions+=1;goto B74d685;
case 0x74d68b:goto L74d68b;
case 0x74d692:c.instructions+=3;goto B74d692;
case 0x74d698:c.instructions+=2;goto B74d698;
case 0x74d69a:c.instructions+=1;goto B74d69a;
case 0x74d6a0:goto L74d6a0;
case 0x74d6a1:c.instructions+=2;goto B74d6a1;
case 0x74d6a2:c.instructions+=1;goto B74d6a2;
case 0x74d6a7:goto L74d6a7;
case 0x74d6aa:c.instructions+=2;goto B74d6aa;
case 0x74d6ac:c.instructions+=1;goto B74d6ac;
case 0x74d6ae:goto L74d6ae;
case 0x74d6af:c.instructions+=4;goto B74d6af;
case 0x74d6b4:c.instructions+=3;goto B74d6b4;
case 0x74d6b5:c.instructions+=2;goto B74d6b5;
case 0x74d6bc:c.instructions+=1;goto B74d6bc;
case 0x74d6c1:goto L74d6c1;
case 0x74d6c7:c.instructions+=1;goto B74d6c7;
case 0x74d6c8:goto L74d6c8;
case 0x74d6cf:c.instructions+=8;goto B74d6cf;
case 0x74d6d6:c.instructions+=7;goto B74d6d6;
case 0x74d6d7:c.instructions+=6;goto B74d6d7;
case 0x74d6d8:c.instructions+=5;goto B74d6d8;
case 0x74d6d9:c.instructions+=4;goto B74d6d9;
case 0x74d6e0:c.instructions+=3;goto B74d6e0;
case 0x74d6e1:c.instructions+=2;goto B74d6e1;
case 0x74d6e6:c.instructions+=1;goto B74d6e6;
case 0x74d6eb:goto L74d6eb;
case 0x74d6f1:c.instructions+=5;goto B74d6f1;
case 0x74d6f2:c.instructions+=4;goto B74d6f2;
case 0x74d6f3:c.instructions+=3;goto B74d6f3;
case 0x74d6f4:c.instructions+=2;goto B74d6f4;
case 0x74d6f6:c.instructions+=1;goto B74d6f6;
case 0x74d6fb:goto L74d6fb;
case 0x74d6fd:c.instructions+=3;goto B74d6fd;
case 0x74d700:c.instructions+=2;goto B74d700;
case 0x74d702:c.instructions+=1;goto B74d702;
case 0x74d708:goto L74d708;
case 0x74d70b:c.instructions+=1;goto B74d70b;
case 0x74d711:goto L74d711;
case 0x74d712:c.instructions+=6;goto B74d712;
case 0x74d717:c.instructions+=5;goto B74d717;
case 0x74d71b:c.instructions+=4;goto B74d71b;
case 0x74d720:c.instructions+=3;goto B74d720;
case 0x74d721:c.instructions+=2;goto B74d721;
case 0x74d726:c.instructions+=1;goto B74d726;
case 0x74d72b:goto L74d72b;
case 0x74d731:c.instructions+=6;goto B74d731;
case 0x74d732:c.instructions+=5;goto B74d732;
case 0x74d737:c.instructions+=4;goto B74d737;
case 0x74d73b:c.instructions+=3;goto B74d73b;
case 0x74d740:c.instructions+=2;goto B74d740;
case 0x74d741:c.instructions+=1;goto B74d741;
case 0x74d746:goto L74d746;
case 0x74d74b:c.instructions+=5;goto B74d74b;
case 0x74d750:c.instructions+=4;goto B74d750;
case 0x74d754:c.instructions+=3;goto B74d754;
case 0x74d759:c.instructions+=2;goto B74d759;
case 0x74d75a:c.instructions+=1;goto B74d75a;
case 0x74d75f:goto L74d75f;
case 0x74d764:c.instructions+=5;goto B74d764;
case 0x74d769:c.instructions+=4;goto B74d769;
case 0x74d76d:c.instructions+=3;goto B74d76d;
case 0x74d772:c.instructions+=2;goto B74d772;
case 0x74d773:c.instructions+=1;goto B74d773;
case 0x74d778:goto L74d778;
case 0x74d77b:c.instructions+=6;goto B74d77b;
case 0x74d77c:c.instructions+=5;goto B74d77c;
case 0x74d781:c.instructions+=4;goto B74d781;
case 0x74d785:c.instructions+=3;goto B74d785;
case 0x74d78a:c.instructions+=2;goto B74d78a;
case 0x74d78b:c.instructions+=1;goto B74d78b;
case 0x74d790:goto L74d790;
case 0x74d793:c.instructions+=7;goto B74d793;
case 0x74d795:c.instructions+=6;goto B74d795;
case 0x74d799:c.instructions+=5;goto B74d799;
case 0x74d79a:c.instructions+=4;goto B74d79a;
case 0x74d79c:c.instructions+=3;goto B74d79c;
case 0x74d7a1:c.instructions+=2;goto B74d7a1;
case 0x74d7a2:c.instructions+=1;goto B74d7a2;
case 0x74d7a7:goto L74d7a7;
case 0x74d7a9:c.instructions+=5;goto B74d7a9;
case 0x74d7ae:c.instructions+=4;goto B74d7ae;
case 0x74d7b2:c.instructions+=3;goto B74d7b2;
case 0x74d7b7:c.instructions+=2;goto B74d7b7;
case 0x74d7b8:c.instructions+=1;goto B74d7b8;
case 0x74d7bd:goto L74d7bd;
case 0x74d7c0:c.instructions+=7;goto B74d7c0;
case 0x74d7c2:c.instructions+=6;goto B74d7c2;
case 0x74d7c6:c.instructions+=5;goto B74d7c6;
case 0x74d7c7:c.instructions+=4;goto B74d7c7;
case 0x74d7c9:c.instructions+=3;goto B74d7c9;
case 0x74d7ce:c.instructions+=2;goto B74d7ce;
case 0x74d7cf:c.instructions+=1;goto B74d7cf;
case 0x74d7d4:goto L74d7d4;
case 0x74d7d7:goto L74d7d7;
case 0x74d7da:c.instructions+=1;goto B74d7da;
case 0x74d7e0:goto L74d7e0;
case 0x74d7e1:c.instructions+=6;goto B74d7e1;
case 0x74d7e6:c.instructions+=5;goto B74d7e6;
case 0x74d7ea:c.instructions+=4;goto B74d7ea;
case 0x74d7ef:c.instructions+=3;goto B74d7ef;
case 0x74d7f0:c.instructions+=2;goto B74d7f0;
case 0x74d7f5:c.instructions+=1;goto B74d7f5;
case 0x74d7fa:goto L74d7fa;
case 0x74d800:c.instructions+=6;goto B74d800;
case 0x74d801:c.instructions+=5;goto B74d801;
case 0x74d806:c.instructions+=4;goto B74d806;
case 0x74d80a:c.instructions+=3;goto B74d80a;
case 0x74d80f:c.instructions+=2;goto B74d80f;
case 0x74d810:c.instructions+=1;goto B74d810;
case 0x74d815:goto L74d815;
case 0x74d81a:c.instructions+=5;goto B74d81a;
case 0x74d81f:c.instructions+=4;goto B74d81f;
case 0x74d823:c.instructions+=3;goto B74d823;
case 0x74d828:c.instructions+=2;goto B74d828;
case 0x74d829:c.instructions+=1;goto B74d829;
case 0x74d82e:goto L74d82e;
case 0x74d82f:c.instructions+=5;goto B74d82f;
case 0x74d834:c.instructions+=4;goto B74d834;
case 0x74d838:c.instructions+=3;goto B74d838;
case 0x74d83d:c.instructions+=2;goto B74d83d;
case 0x74d83e:c.instructions+=1;goto B74d83e;
case 0x74d843:goto L74d843;
case 0x74d846:c.instructions+=8;goto B74d846;
case 0x74d849:c.instructions+=7;goto B74d849;
case 0x74d84b:c.instructions+=6;goto B74d84b;
case 0x74d84f:c.instructions+=5;goto B74d84f;
case 0x74d850:c.instructions+=4;goto B74d850;
case 0x74d852:c.instructions+=3;goto B74d852;
case 0x74d857:c.instructions+=2;goto B74d857;
case 0x74d858:c.instructions+=1;goto B74d858;
case 0x74d85d:goto L74d85d;
case 0x74d860:goto L74d860;
case 0x74d866:c.instructions+=1;goto B74d866;
case 0x74d868:goto L74d868;
case 0x74d86e:c.instructions+=7;goto B74d86e;
case 0x74d86f:c.instructions+=6;goto B74d86f;
case 0x74d874:c.instructions+=5;goto B74d874;
case 0x74d878:c.instructions+=4;goto B74d878;
case 0x74d87d:c.instructions+=3;goto B74d87d;
case 0x74d87e:c.instructions+=2;goto B74d87e;
case 0x74d883:c.instructions+=1;goto B74d883;
case 0x74d888:goto L74d888;
case 0x74d889:c.instructions+=5;goto B74d889;
case 0x74d88e:c.instructions+=4;goto B74d88e;
case 0x74d892:c.instructions+=3;goto B74d892;
case 0x74d897:c.instructions+=2;goto B74d897;
case 0x74d898:c.instructions+=1;goto B74d898;
case 0x74d89d:goto L74d89d;
case 0x74d8a0:c.instructions+=7;goto B74d8a0;
case 0x74d8a2:c.instructions+=6;goto B74d8a2;
case 0x74d8a6:c.instructions+=5;goto B74d8a6;
case 0x74d8a7:c.instructions+=4;goto B74d8a7;
case 0x74d8a9:c.instructions+=3;goto B74d8a9;
case 0x74d8ae:c.instructions+=2;goto B74d8ae;
case 0x74d8af:c.instructions+=1;goto B74d8af;
case 0x74d8b4:goto L74d8b4;
case 0x74d8b7:goto L74d8b7;
case 0x74d8bf:goto L74d8bf;
case 0x74d8c0:c.instructions+=1;goto B74d8c0;
case 0x74d8c1:goto L74d8c1;
case 0x74d8c8:c.instructions+=4;goto B74d8c8;
case 0x74d8cc:c.instructions+=3;goto B74d8cc;
case 0x74d8cd:c.instructions+=2;goto B74d8cd;
case 0x74d8ce:c.instructions+=1;goto B74d8ce;
case 0x74d8d3:goto L74d8d3;
case 0x74d8d9:c.instructions+=1;goto B74d8d9;
case 0x74d8e0:goto L74d8e0;
case 0x74d8e1:c.instructions+=6;goto B74d8e1;
case 0x74d8e2:c.instructions+=5;goto B74d8e2;
case 0x74d8e6:c.instructions+=4;goto B74d8e6;
case 0x74d8ec:c.instructions+=3;goto B74d8ec;
case 0x74d8ee:c.instructions+=2;goto B74d8ee;
case 0x74d8f0:c.instructions+=1;goto B74d8f0;
case 0x74d8f2:goto L74d8f2;
case 0x74d8f6:c.instructions+=2;goto B74d8f6;
case 0x74d8f8:c.instructions+=1;goto B74d8f8;
case 0x74d8fa:goto L74d8fa;
case 0x74d8fb:c.instructions+=2;goto B74d8fb;
case 0x74d8fc:c.instructions+=1;goto B74d8fc;
case 0x74d901:goto L74d901;
case 0x74d904:c.instructions+=2;goto B74d904;
case 0x74d906:c.instructions+=1;goto B74d906;
case 0x74d908:goto L74d908;
case 0x74d909:c.instructions+=3;goto B74d909;
case 0x74d90f:c.instructions+=2;goto B74d90f;
case 0x74d910:c.instructions+=1;goto B74d910;
case 0x74d915:goto L74d915;
case 0x74d918:c.instructions+=3;goto B74d918;
case 0x74d919:c.instructions+=2;goto B74d919;
case 0x74d91a:c.instructions+=1;goto B74d91a;
case 0x74d91b:goto L74d91b;
case 0x74d91c:c.instructions+=3;goto B74d91c;
case 0x74d91e:c.instructions+=2;goto B74d91e;
case 0x74d91f:c.instructions+=1;goto B74d91f;
case 0x74d920:goto L74d920;
case 0x74d926:c.instructions+=6;goto B74d926;
case 0x74d92b:c.instructions+=5;goto B74d92b;
case 0x74d92c:c.instructions+=4;goto B74d92c;
case 0x74d933:c.instructions+=3;goto B74d933;
case 0x74d93a:c.instructions+=2;goto B74d93a;
case 0x74d93d:c.instructions+=1;goto B74d93d;
case 0x74d93f:goto L74d93f;
case 0x74d944:c.instructions+=3;goto B74d944;
case 0x74d945:c.instructions+=2;goto B74d945;
case 0x74d94c:c.instructions+=1;goto B74d94c;
case 0x74d951:goto L74d951;
case 0x74d957:c.instructions+=1;goto B74d957;
case 0x74d958:goto L74d958;
case 0x74d959:c.instructions+=5;goto B74d959;
case 0x74d960:c.instructions+=4;goto B74d960;
case 0x74d961:c.instructions+=3;goto B74d961;
case 0x74d963:c.instructions+=2;goto B74d963;
case 0x74d968:c.instructions+=1;goto B74d968;
case 0x74d96e:goto L74d96e;
case 0x74d970:goto L74d970;
case 0x74d977:c.instructions+=8;goto B74d977;
case 0x74d979:c.instructions+=7;goto B74d979;
case 0x74d97a:c.instructions+=6;goto B74d97a;
case 0x74d981:c.instructions+=5;goto B74d981;
case 0x74d982:c.instructions+=4;goto B74d982;
case 0x74d989:c.instructions+=3;goto B74d989;
case 0x74d98a:c.instructions+=2;goto B74d98a;
case 0x74d98f:c.instructions+=1;goto B74d98f;
case 0x74d994:goto L74d994;
case 0x74d995:c.instructions+=6;goto B74d995;
case 0x74d99a:c.instructions+=5;goto B74d99a;
case 0x74d99e:c.instructions+=4;goto B74d99e;
case 0x74d9a3:c.instructions+=3;goto B74d9a3;
case 0x74d9a4:c.instructions+=2;goto B74d9a4;
case 0x74d9a9:c.instructions+=1;goto B74d9a9;
case 0x74d9ae:goto L74d9ae;
case 0x74d9b4:c.instructions+=6;goto B74d9b4;
case 0x74d9b5:c.instructions+=5;goto B74d9b5;
case 0x74d9ba:c.instructions+=4;goto B74d9ba;
case 0x74d9be:c.instructions+=3;goto B74d9be;
case 0x74d9c3:c.instructions+=2;goto B74d9c3;
case 0x74d9c4:c.instructions+=1;goto B74d9c4;
case 0x74d9c9:goto L74d9c9;
case 0x74d9ca:c.instructions+=5;goto B74d9ca;
case 0x74d9cf:c.instructions+=4;goto B74d9cf;
case 0x74d9d3:c.instructions+=3;goto B74d9d3;
case 0x74d9d8:c.instructions+=2;goto B74d9d8;
case 0x74d9d9:c.instructions+=1;goto B74d9d9;
case 0x74d9de:goto L74d9de;
case 0x74d9e0:c.instructions+=5;goto B74d9e0;
case 0x74d9e5:c.instructions+=4;goto B74d9e5;
case 0x74d9e9:c.instructions+=3;goto B74d9e9;
case 0x74d9ee:c.instructions+=2;goto B74d9ee;
case 0x74d9ef:c.instructions+=1;goto B74d9ef;
case 0x74d9f4:goto L74d9f4;
case 0x74d9f7:c.instructions+=9;goto B74d9f7;
case 0x74d9fa:c.instructions+=8;goto B74d9fa;
case 0x74d9fc:c.instructions+=7;goto B74d9fc;
case 0x74da00:c.instructions+=6;goto B74da00;
case 0x74da01:c.instructions+=5;goto B74da01;
case 0x74da03:c.instructions+=4;goto B74da03;
case 0x74da08:c.instructions+=3;goto B74da08;
case 0x74da09:c.instructions+=2;goto B74da09;
case 0x74da13:c.instructions+=1;goto B74da13;
case 0x74da18:goto L74da18;
case 0x74da1f:c.instructions+=6;goto B74da1f;
case 0x74da22:c.instructions+=5;goto B74da22;
case 0x74da23:c.instructions+=4;goto B74da23;
case 0x74da24:c.instructions+=3;goto B74da24;
case 0x74da26:c.instructions+=2;goto B74da26;
case 0x74da27:c.instructions+=1;goto B74da27;
case 0x74da2c:goto L74da2c;
case 0x74da32:c.instructions+=1;goto B74da32;
case 0x74da40:goto L74da40;
case 0x74da44:c.instructions+=3;goto B74da44;
case 0x74da46:c.instructions+=2;goto B74da46;
case 0x74da49:c.instructions+=1;goto B74da49;
case 0x74da4b:goto L74da4b;
case 0x74da4f:c.instructions+=4;goto B74da4f;
case 0x74da52:c.instructions+=3;goto B74da52;
case 0x74da59:c.instructions+=2;goto B74da59;
case 0x74da5c:c.instructions+=1;goto B74da5c;
case 0x74da5e:goto L74da5e;
case 0x74da60:goto L74da60;
case 0x74da70:goto L74da70;
case 0x74da74:c.instructions+=5;goto B74da74;
case 0x74da76:c.instructions+=4;goto B74da76;
case 0x74da7c:c.instructions+=3;goto B74da7c;
case 0x74da82:c.instructions+=2;goto B74da82;
case 0x74da88:c.instructions+=1;goto B74da88;
case 0x74da90:goto L74da90;
case 0x74da94:c.instructions+=3;goto B74da94;
case 0x74da9a:c.instructions+=2;goto B74da9a;
case 0x74da9c:c.instructions+=1;goto B74da9c;
case 0x74da9e:goto L74da9e;
case 0x74daa2:c.instructions+=5;goto B74daa2;
case 0x74daa3:c.instructions+=4;goto B74daa3;
case 0x74daa8:c.instructions+=3;goto B74daa8;
case 0x74daad:c.instructions+=2;goto B74daad;
case 0x74daae:c.instructions+=1;goto B74daae;
case 0x74dab3:goto L74dab3;
case 0x74dab6:goto L74dab6;
case 0x74dac0:goto L74dac0;
case 0x74dac4:c.instructions+=2;goto B74dac4;
case 0x74dac7:c.instructions+=1;goto B74dac7;
case 0x74dac9:goto L74dac9;
case 0x74dacc:c.instructions+=2;goto B74dacc;
case 0x74dace:c.instructions+=1;goto B74dace;
case 0x74dad0:goto L74dad0;
case 0x74dad3:c.instructions+=2;goto B74dad3;
case 0x74dad5:c.instructions+=1;goto B74dad5;
case 0x74dad7:goto L74dad7;
case 0x74dadb:c.instructions+=2;goto B74dadb;
case 0x74dade:c.instructions+=1;goto B74dade;
case 0x74dae0:goto L74dae0;
case 0x74dae1:c.instructions+=6;goto B74dae1;
case 0x74dae2:c.instructions+=5;goto B74dae2;
case 0x74dae6:c.instructions+=4;goto B74dae6;
case 0x74daeb:c.instructions+=3;goto B74daeb;
case 0x74daf0:c.instructions+=2;goto B74daf0;
case 0x74daf1:c.instructions+=1;goto B74daf1;
case 0x74daf6:goto L74daf6;
case 0x74daf9:goto L74daf9;
case 0x74db00:goto L74db00;
case 0x74db04:c.instructions+=3;goto B74db04;
case 0x74db08:c.instructions+=2;goto B74db08;
case 0x74db0e:c.instructions+=1;goto B74db0e;
case 0x74db10:goto L74db10;
case 0x74db14:c.instructions+=2;goto B74db14;
case 0x74db1e:c.instructions+=1;goto B74db1e;
case 0x74db20:goto L74db20;
case 0x74db21:c.instructions+=7;goto B74db21;
case 0x74db22:c.instructions+=6;goto B74db22;
case 0x74db23:c.instructions+=5;goto B74db23;
case 0x74db27:c.instructions+=4;goto B74db27;
case 0x74db2a:c.instructions+=3;goto B74db2a;
case 0x74db2b:c.instructions+=2;goto B74db2b;
case 0x74db2c:c.instructions+=1;goto B74db2c;
case 0x74db31:goto L74db31;
case 0x74db35:c.instructions+=4;goto B74db35;
case 0x74db38:c.instructions+=3;goto B74db38;
case 0x74db3a:c.instructions+=2;goto B74db3a;
case 0x74db3e:c.instructions+=1;goto B74db3e;
case 0x74db40:goto L74db40;
case 0x74db43:c.instructions+=1;goto B74db43;
case 0x74db45:goto L74db45;
case 0x74db4c:c.instructions+=1;goto B74db4c;
case 0x74db4e:goto L74db4e;
case 0x74db54:goto L74db54;
case 0x74db58:c.instructions+=7;goto B74db58;
case 0x74db59:c.instructions+=6;goto B74db59;
case 0x74db5e:c.instructions+=5;goto B74db5e;
case 0x74db64:c.instructions+=4;goto B74db64;
case 0x74db69:c.instructions+=3;goto B74db69;
case 0x74db6a:c.instructions+=2;goto B74db6a;
case 0x74db6d:c.instructions+=1;goto B74db6d;
case 0x74db72:goto L74db72;
case 0x74db73:c.instructions+=4;goto B74db73;
case 0x74db78:c.instructions+=3;goto B74db78;
case 0x74db7d:c.instructions+=2;goto B74db7d;
case 0x74db7e:c.instructions+=1;goto B74db7e;
case 0x74db83:goto L74db83;
case 0x74db89:c.instructions+=4;goto B74db89;
case 0x74db8c:c.instructions+=3;goto B74db8c;
case 0x74db8e:c.instructions+=2;goto B74db8e;
case 0x74db92:c.instructions+=1;goto B74db92;
case 0x74db94:goto L74db94;
case 0x74db98:c.instructions+=2;goto B74db98;
case 0x74db9b:c.instructions+=1;goto B74db9b;
case 0x74dba1:goto L74dba1;
case 0x74dba7:c.instructions+=1;goto B74dba7;
case 0x74dba9:goto L74dba9;
case 0x74dbaf:c.instructions+=1;goto B74dbaf;
case 0x74dbb5:goto L74dbb5;
case 0x74dbbb:c.instructions+=1;goto B74dbbb;
case 0x74dbbd:goto L74dbbd;
case 0x74dbc2:goto L74dbc2;
case 0x74dbc3:c.instructions+=5;goto B74dbc3;
case 0x74dbc4:c.instructions+=4;goto B74dbc4;
case 0x74dbc5:c.instructions+=3;goto B74dbc5;
case 0x74dbc7:c.instructions+=2;goto B74dbc7;
case 0x74dbc8:c.instructions+=1;goto B74dbc8;
case 0x74dbd0:goto L74dbd0;
case 0x74dbd4:c.instructions+=11;goto B74dbd4;
case 0x74dbd8:c.instructions+=10;goto B74dbd8;
case 0x74dbdc:c.instructions+=9;goto B74dbdc;
case 0x74dbdd:c.instructions+=8;goto B74dbdd;
case 0x74dbe1:c.instructions+=7;goto B74dbe1;
case 0x74dbe2:c.instructions+=6;goto B74dbe2;
case 0x74dbe6:c.instructions+=5;goto B74dbe6;
case 0x74dbe7:c.instructions+=4;goto B74dbe7;
case 0x74dbe8:c.instructions+=3;goto B74dbe8;
case 0x74dbed:c.instructions+=2;goto B74dbed;
case 0x74dbee:c.instructions+=1;goto B74dbee;
case 0x74dbf3:goto L74dbf3;
case 0x74dbf6:c.instructions+=1;goto B74dbf6;
case 0x74dc00:goto L74dc00;
case 0x74dc01:c.instructions+=7;goto B74dc01;
case 0x74dc05:c.instructions+=6;goto B74dc05;
case 0x74dc0a:c.instructions+=5;goto B74dc0a;
case 0x74dc0c:c.instructions+=4;goto B74dc0c;
case 0x74dc0e:c.instructions+=3;goto B74dc0e;
case 0x74dc13:c.instructions+=2;goto B74dc13;
case 0x74dc14:c.instructions+=1;goto B74dc14;
case 0x74dc19:goto L74dc19;
case 0x74dc1c:c.instructions+=2;goto B74dc1c;
case 0x74dc1d:c.instructions+=1;goto B74dc1d;
case 0x74dc22:goto L74dc22;
case 0x74dc25:c.instructions+=2;goto B74dc25;
case 0x74dc2a:c.instructions+=1;goto B74dc2a;
case 0x74dc2c:goto L74dc2c;
case 0x74dc31:c.instructions+=5;goto B74dc31;
case 0x74dc33:c.instructions+=4;goto B74dc33;
case 0x74dc35:c.instructions+=3;goto B74dc35;
case 0x74dc3a:c.instructions+=2;goto B74dc3a;
case 0x74dc3b:c.instructions+=1;goto B74dc3b;
case 0x74dc40:goto L74dc40;
case 0x74dc43:c.instructions+=2;goto B74dc43;
case 0x74dc44:c.instructions+=1;goto B74dc44;
case 0x74dc49:goto L74dc49;
case 0x74dc4c:c.instructions+=2;goto B74dc4c;
case 0x74dc4e:c.instructions+=1;goto B74dc4e;
case 0x74dc50:goto L74dc50;
case 0x74dc55:c.instructions+=2;goto B74dc55;
case 0x74dc56:c.instructions+=1;goto B74dc56;
case 0x74dc57:goto L74dc57;
case 0x74dc5b:c.instructions+=9;goto B74dc5b;
case 0x74dc5f:c.instructions+=8;goto B74dc5f;
case 0x74dc60:c.instructions+=7;goto B74dc60;
case 0x74dc64:c.instructions+=6;goto B74dc64;
case 0x74dc65:c.instructions+=5;goto B74dc65;
case 0x74dc66:c.instructions+=4;goto B74dc66;
case 0x74dc6a:c.instructions+=3;goto B74dc6a;
case 0x74dc6b:c.instructions+=2;goto B74dc6b;
case 0x74dc70:c.instructions+=1;goto B74dc70;
case 0x74dc75:goto L74dc75;
case 0x74dc78:c.instructions+=6;goto B74dc78;
case 0x74dc7a:c.instructions+=5;goto B74dc7a;
case 0x74dc7b:c.instructions+=4;goto B74dc7b;
case 0x74dc7d:c.instructions+=3;goto B74dc7d;
case 0x74dc82:c.instructions+=2;goto B74dc82;
case 0x74dc83:c.instructions+=1;goto B74dc83;
case 0x74dc88:goto L74dc88;
case 0x74dc8b:c.instructions+=5;goto B74dc8b;
case 0x74dc8c:c.instructions+=4;goto B74dc8c;
case 0x74dc8d:c.instructions+=3;goto B74dc8d;
case 0x74dc8f:c.instructions+=2;goto B74dc8f;
case 0x74dc90:c.instructions+=1;goto B74dc90;
case 0x74dca0:goto L74dca0;
case 0x74dca4:c.instructions+=5;goto B74dca4;
case 0x74dca8:c.instructions+=4;goto B74dca8;
case 0x74dcac:c.instructions+=3;goto B74dcac;
case 0x74dcb2:c.instructions+=2;goto B74dcb2;
case 0x74dcb8:c.instructions+=1;goto B74dcb8;
case 0x74dcc0:goto L74dcc0;
case 0x74dcc4:c.instructions+=5;goto B74dcc4;
case 0x74dcc8:c.instructions+=4;goto B74dcc8;
case 0x74dccc:c.instructions+=3;goto B74dccc;
case 0x74dcd2:c.instructions+=2;goto B74dcd2;
case 0x74dcd8:c.instructions+=1;goto B74dcd8;
case 0x74dce0:goto L74dce0;
case 0x74dce4:c.instructions+=5;goto B74dce4;
case 0x74dce8:c.instructions+=4;goto B74dce8;
case 0x74dcec:c.instructions+=3;goto B74dcec;
case 0x74dcf2:c.instructions+=2;goto B74dcf2;
case 0x74dcf8:c.instructions+=1;goto B74dcf8;
case 0x74dd00:goto L74dd00;
case 0x74dd01:c.instructions+=12;goto B74dd01;
case 0x74dd05:c.instructions+=11;goto B74dd05;
case 0x74dd0c:c.instructions+=10;goto B74dd0c;
case 0x74dd0d:c.instructions+=9;goto B74dd0d;
case 0x74dd0e:c.instructions+=8;goto B74dd0e;
case 0x74dd0f:c.instructions+=7;goto B74dd0f;
case 0x74dd13:c.instructions+=6;goto B74dd13;
case 0x74dd15:c.instructions+=5;goto B74dd15;
case 0x74dd18:c.instructions+=4;goto B74dd18;
case 0x74dd19:c.instructions+=3;goto B74dd19;
case 0x74dd1e:c.instructions+=2;goto B74dd1e;
case 0x74dd22:c.instructions+=1;goto B74dd22;
case 0x74dd24:goto L74dd24;
case 0x74dd28:c.instructions+=6;goto B74dd28;
case 0x74dd2c:c.instructions+=5;goto B74dd2c;
case 0x74dd2d:c.instructions+=4;goto B74dd2d;
case 0x74dd2e:c.instructions+=3;goto B74dd2e;
case 0x74dd32:c.instructions+=2;goto B74dd32;
case 0x74dd37:c.instructions+=1;goto B74dd37;
case 0x74dd3c:goto L74dd3c;
case 0x74dd3f:c.instructions+=1;goto B74dd3f;
case 0x74dd41:goto L74dd41;
case 0x74dd45:c.instructions+=6;goto B74dd45;
case 0x74dd49:c.instructions+=5;goto B74dd49;
case 0x74dd4d:c.instructions+=4;goto B74dd4d;
case 0x74dd4e:c.instructions+=3;goto B74dd4e;
case 0x74dd4f:c.instructions+=2;goto B74dd4f;
case 0x74dd54:c.instructions+=1;goto B74dd54;
case 0x74dd59:goto L74dd59;
case 0x74dd5d:c.instructions+=3;goto B74dd5d;
case 0x74dd60:c.instructions+=2;goto B74dd60;
case 0x74dd63:c.instructions+=1;goto B74dd63;
case 0x74dd69:goto L74dd69;
case 0x74dd6d:c.instructions+=1;goto B74dd6d;
case 0x74dd74:goto L74dd74;
case 0x74dd79:c.instructions+=1;goto B74dd79;
case 0x74dd7b:goto L74dd7b;
case 0x74dd80:goto L74dd80;
case 0x74dd84:c.instructions+=8;goto B74dd84;
case 0x74dd88:c.instructions+=7;goto B74dd88;
case 0x74dd89:c.instructions+=6;goto B74dd89;
case 0x74dd8a:c.instructions+=5;goto B74dd8a;
case 0x74dd8b:c.instructions+=4;goto B74dd8b;
case 0x74dd8c:c.instructions+=3;goto B74dd8c;
case 0x74dd8d:c.instructions+=2;goto B74dd8d;
case 0x74dd8e:c.instructions+=1;goto B74dd8e;
case 0x74dd93:goto L74dd93;
case 0x74dd95:c.instructions+=3;goto B74dd95;
case 0x74dd98:c.instructions+=2;goto B74dd98;
case 0x74dd9a:c.instructions+=1;goto B74dd9a;
case 0x74dd9c:goto L74dd9c;
case 0x74dda0:c.instructions+=1;goto B74dda0;
case 0x74dda7:goto L74dda7;
case 0x74ddac:c.instructions+=3;goto B74ddac;
case 0x74ddad:c.instructions+=2;goto B74ddad;
case 0x74ddae:c.instructions+=1;goto B74ddae;
case 0x74ddb3:goto L74ddb3;
case 0x74ddb6:c.instructions+=7;goto B74ddb6;
case 0x74ddb7:c.instructions+=6;goto B74ddb7;
case 0x74ddb8:c.instructions+=5;goto B74ddb8;
case 0x74ddb9:c.instructions+=4;goto B74ddb9;
case 0x74ddbb:c.instructions+=3;goto B74ddbb;
case 0x74ddbc:c.instructions+=2;goto B74ddbc;
case 0x74ddbd:c.instructions+=1;goto B74ddbd;
case 0x74ddbe:goto L74ddbe;
case 0x74ddc4:c.instructions+=2;goto B74ddc4;
case 0x74ddc9:c.instructions+=1;goto B74ddc9;
case 0x74ddcb:goto L74ddcb;
case 0x74ddd0:c.instructions+=9;goto B74ddd0;
case 0x74ddd3:c.instructions+=8;goto B74ddd3;
case 0x74ddd9:c.instructions+=7;goto B74ddd9;
case 0x74ddda:c.instructions+=6;goto B74ddda;
case 0x74dddb:c.instructions+=5;goto B74dddb;
case 0x74dddc:c.instructions+=4;goto B74dddc;
case 0x74ddde:c.instructions+=3;goto B74ddde;
case 0x74dddf:c.instructions+=2;goto B74dddf;
case 0x74dde0:c.instructions+=1;goto B74dde0;
case 0x74dde1:goto L74dde1;
case 0x74dde7:c.instructions+=2;goto B74dde7;
case 0x74ddec:c.instructions+=1;goto B74ddec;
case 0x74ddee:goto L74ddee;
case 0x74ddf3:c.instructions+=9;goto B74ddf3;
case 0x74ddf8:c.instructions+=8;goto B74ddf8;
case 0x74ddfe:c.instructions+=7;goto B74ddfe;
case 0x74ddff:c.instructions+=6;goto B74ddff;
case 0x74de00:c.instructions+=5;goto B74de00;
case 0x74de01:c.instructions+=4;goto B74de01;
case 0x74de03:c.instructions+=3;goto B74de03;
case 0x74de04:c.instructions+=2;goto B74de04;
case 0x74de05:c.instructions+=1;goto B74de05;
case 0x74de06:goto L74de06;
case 0x74de0b:c.instructions+=3;goto B74de0b;
case 0x74de0c:c.instructions+=2;goto B74de0c;
case 0x74de0d:c.instructions+=1;goto B74de0d;
case 0x74de12:goto L74de12;
case 0x74de15:goto L74de15;
case 0x74de16:c.instructions+=6;goto B74de16;
case 0x74de17:c.instructions+=5;goto B74de17;
case 0x74de18:c.instructions+=4;goto B74de18;
case 0x74de1a:c.instructions+=3;goto B74de1a;
case 0x74de1b:c.instructions+=2;goto B74de1b;
case 0x74de1c:c.instructions+=1;goto B74de1c;
case 0x74de1d:goto L74de1d;
case 0x74de1e:c.instructions+=6;goto B74de1e;
case 0x74de1f:c.instructions+=5;goto B74de1f;
case 0x74de20:c.instructions+=4;goto B74de20;
case 0x74de25:c.instructions+=3;goto B74de25;
case 0x74de26:c.instructions+=2;goto B74de26;
case 0x74de27:c.instructions+=1;goto B74de27;
case 0x74de50:goto L74de50;
case 0x74de56:c.instructions+=10;goto B74de56;
case 0x74de5b:c.instructions+=9;goto B74de5b;
case 0x74de62:c.instructions+=8;goto B74de62;
case 0x74de69:c.instructions+=7;goto B74de69;
case 0x74de6c:c.instructions+=6;goto B74de6c;
case 0x74de73:c.instructions+=5;goto B74de73;
case 0x74de74:c.instructions+=4;goto B74de74;
case 0x74de75:c.instructions+=3;goto B74de75;
case 0x74de7a:c.instructions+=2;goto B74de7a;
case 0x74de7e:c.instructions+=1;goto B74de7e;
case 0x74de84:goto L74de84;
case 0x74de8b:goto L74de8b;
case 0x74de92:c.instructions+=1;goto B74de92;
case 0x74de94:goto L74de94;
case 0x74de9b:c.instructions+=3;goto B74de9b;
case 0x74dea1:c.instructions+=2;goto B74dea1;
case 0x74dea4:c.instructions+=1;goto B74dea4;
case 0x74dea6:goto L74dea6;
case 0x74dead:c.instructions+=3;goto B74dead;
case 0x74deaf:c.instructions+=2;goto B74deaf;
case 0x74deb4:c.instructions+=1;goto B74deb4;
case 0x74deb6:goto L74deb6;
case 0x74debc:c.instructions+=1;goto B74debc;
case 0x74dec1:goto L74dec1;
case 0x74dec7:goto L74dec7;
case 0x74dece:c.instructions+=9;goto B74dece;
case 0x74ded5:c.instructions+=8;goto B74ded5;
case 0x74ded6:c.instructions+=7;goto B74ded6;
case 0x74dedd:c.instructions+=6;goto B74dedd;
case 0x74dede:c.instructions+=5;goto B74dede;
case 0x74dedf:c.instructions+=4;goto B74dedf;
case 0x74dee0:c.instructions+=3;goto B74dee0;
case 0x74dee7:c.instructions+=2;goto B74dee7;
case 0x74deec:c.instructions+=1;goto B74deec;
case 0x74def1:goto L74def1;
case 0x74def4:c.instructions+=3;goto B74def4;
case 0x74defa:c.instructions+=2;goto B74defa;
case 0x74defc:c.instructions+=1;goto B74defc;
case 0x74defe:goto L74defe;
case 0x74df02:c.instructions+=7;goto B74df02;
case 0x74df03:c.instructions+=6;goto B74df03;
case 0x74df05:c.instructions+=5;goto B74df05;
case 0x74df06:c.instructions+=4;goto B74df06;
case 0x74df07:c.instructions+=3;goto B74df07;
case 0x74df08:c.instructions+=2;goto B74df08;
case 0x74df09:c.instructions+=1;goto B74df09;
case 0x74df0e:goto L74df0e;
case 0x74df11:c.instructions+=6;goto B74df11;
case 0x74df12:c.instructions+=5;goto B74df12;
case 0x74df13:c.instructions+=4;goto B74df13;
case 0x74df14:c.instructions+=3;goto B74df14;
case 0x74df15:c.instructions+=2;goto B74df15;
case 0x74df1c:c.instructions+=1;goto B74df1c;
case 0x74df21:goto L74df21;
case 0x74df27:c.instructions+=1;goto B74df27;
case 0x74df28:goto L74df28;
case 0x74df2a:c.instructions+=2;goto B74df2a;
case 0x74df2f:c.instructions+=1;goto B74df2f;
case 0x74df31:goto L74df31;
case 0x74df32:c.instructions+=5;goto B74df32;
case 0x74df37:c.instructions+=4;goto B74df37;
case 0x74df3b:c.instructions+=3;goto B74df3b;
case 0x74df40:c.instructions+=2;goto B74df40;
case 0x74df41:c.instructions+=1;goto B74df41;
case 0x74df46:goto L74df46;
case 0x74df49:goto L74df49;
case 0x74df4f:c.instructions+=6;goto B74df4f;
case 0x74df50:c.instructions+=5;goto B74df50;
case 0x74df55:c.instructions+=4;goto B74df55;
case 0x74df59:c.instructions+=3;goto B74df59;
case 0x74df5e:c.instructions+=2;goto B74df5e;
case 0x74df5f:c.instructions+=1;goto B74df5f;
case 0x74df64:goto L74df64;
case 0x74df65:c.instructions+=5;goto B74df65;
case 0x74df6a:c.instructions+=4;goto B74df6a;
case 0x74df6e:c.instructions+=3;goto B74df6e;
case 0x74df73:c.instructions+=2;goto B74df73;
case 0x74df74:c.instructions+=1;goto B74df74;
case 0x74df79:goto L74df79;
case 0x74df7f:c.instructions+=6;goto B74df7f;
case 0x74df80:c.instructions+=5;goto B74df80;
case 0x74df85:c.instructions+=4;goto B74df85;
case 0x74df89:c.instructions+=3;goto B74df89;
case 0x74df8e:c.instructions+=2;goto B74df8e;
case 0x74df8f:c.instructions+=1;goto B74df8f;
case 0x74df94:goto L74df94;
case 0x74df9b:c.instructions+=6;goto B74df9b;
case 0x74df9c:c.instructions+=5;goto B74df9c;
case 0x74dfa1:c.instructions+=4;goto B74dfa1;
case 0x74dfa5:c.instructions+=3;goto B74dfa5;
case 0x74dfaa:c.instructions+=2;goto B74dfaa;
case 0x74dfab:c.instructions+=1;goto B74dfab;
case 0x74dfb0:goto L74dfb0;
case 0x74dfb3:c.instructions+=8;goto B74dfb3;
case 0x74dfb6:c.instructions+=7;goto B74dfb6;
case 0x74dfb8:c.instructions+=6;goto B74dfb8;
case 0x74dfbc:c.instructions+=5;goto B74dfbc;
case 0x74dfbd:c.instructions+=4;goto B74dfbd;
case 0x74dfbf:c.instructions+=3;goto B74dfbf;
case 0x74dfc4:c.instructions+=2;goto B74dfc4;
case 0x74dfc5:c.instructions+=1;goto B74dfc5;
case 0x74dfca:goto L74dfca;
case 0x74dfcd:c.instructions+=7;goto B74dfcd;
case 0x74dfce:c.instructions+=6;goto B74dfce;
case 0x74dfcf:c.instructions+=5;goto B74dfcf;
case 0x74dfd0:c.instructions+=4;goto B74dfd0;
case 0x74dfd2:c.instructions+=3;goto B74dfd2;
case 0x74dfd3:c.instructions+=2;goto B74dfd3;
case 0x74dfda:c.instructions+=1;goto B74dfda;
case 0x74dfdf:goto L74dfdf;
case 0x74dfe5:c.instructions+=1;goto B74dfe5;
case 0x74dfe6:goto L74dfe6;
case 0x74dfed:c.instructions+=4;goto B74dfed;
case 0x74dfee:c.instructions+=3;goto B74dfee;
case 0x74dff3:c.instructions+=2;goto B74dff3;
case 0x74dff4:c.instructions+=1;goto B74dff4;
case 0x74dff9:goto L74dff9;
case 0x74dfff:c.instructions+=1;goto B74dfff;
default:missing_instruction(c.pc);}
B74d006:L74d006:{c.instructions+=6;NFSU2_TR(0x74d006);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d00c:{NFSU2_TR(0x74d00c);
__builtin_memmove((R+0),(R+24),4);
}
B74d00e:{NFSU2_TR(0x74d00e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74d00f:{NFSU2_TR(0x74d00f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74d010:{NFSU2_TR(0x74d010);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74d011:{NFSU2_TR(0x74d011);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74d020:L74d020:{c.instructions+=3;NFSU2_TR(0x74d020);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d024:{NFSU2_TR(0x74d024);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x128ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x128ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74d029:{NFSU2_TR(0x74d029);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74d030:L74d030:{c.instructions+=10;NFSU2_TR(0x74d030);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d034:{NFSU2_TR(0x74d034);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d035:{NFSU2_TR(0x74d035);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d036:{NFSU2_TR(0x74d036);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d037:{NFSU2_TR(0x74d037);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74d03b:{NFSU2_TR(0x74d03b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d03c:{NFSU2_TR(0x74d03c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4e8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74d042:{NFSU2_TR(0x74d042);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d044:{NFSU2_TR(0x74d044);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d045:{NFSU2_TR(0x74d045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d04aull));
TAIL_STATIC(0x741650u,741);
}
B74d04a:L74d04a:{c.instructions+=6;NFSU2_TR(0x74d04a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74d04e:{NFSU2_TR(0x74d04e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74d052:{NFSU2_TR(0x74d052);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74d055:{NFSU2_TR(0x74d055);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1b0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d05b:{NFSU2_TR(0x74d05b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74d05d:{NFSU2_TR(0x74d05d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x52cull))));
__builtin_memmove((R+8),(U+0),4);
}
B74d063:L74d063:{c.instructions+=2;NFSU2_TR(0x74d063);
u8 U[11];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(R+523,sborrow<u8>(r1(U+9),u8(0x61ull)));
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+10))<s8(u8(0x0ull))));
}
B74d067:{NFSU2_TR(0x74d067);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74d096;}}
}
B74d069:L74d069:{c.instructions+=2;NFSU2_TR(0x74d069);
u8 U[15];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(R+523,sborrow<u8>(r1(U+13),u8(0x61ull)));
w1(U+14,u8(u32(r1(U+13))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+14))<s8(u8(0x0ull))));
}
B74d06e:{NFSU2_TR(0x74d06e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74d096;}}
}
B74d070:L74d070:{c.instructions+=11;NFSU2_TR(0x74d070);
u8 U[2];
w2(U+0,u16(0x0ull));
s2(u32(r4(R+8)),r2(U+0));
}
B74d075:{NFSU2_TR(0x74d075);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w2(R+4,u16(s16(s8(r1(U+8)))));
}
B74d07a:{NFSU2_TR(0x74d07a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B74d07d:{NFSU2_TR(0x74d07d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B74d080:{NFSU2_TR(0x74d080);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B74d084:{NFSU2_TR(0x74d084);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w2(R+20,u16(s16(s8(r1(U+12)))));
}
B74d08a:{NFSU2_TR(0x74d08a);
w4(R+20,u32(u32(r4(R+20))|u32(r4(R+4))));
}
B74d08c:{NFSU2_TR(0x74d08c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+20),2);
s2(u32(r4(U+0)),r2(U+4));
}
B74d090:{NFSU2_TR(0x74d090);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B74d091:{NFSU2_TR(0x74d091);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74d094:{NFSU2_TR(0x74d094);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74d063u);}goto L74d063;}}
}
B74d096:L74d096:{c.instructions+=10;NFSU2_TR(0x74d096);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d09a:{NFSU2_TR(0x74d09a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x528ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d0a0:{NFSU2_TR(0x74d0a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d0a4:{NFSU2_TR(0x74d0a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d0aa:{NFSU2_TR(0x74d0aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d0ad:{NFSU2_TR(0x74d0ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74d0ae:{NFSU2_TR(0x74d0ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74d0af:{NFSU2_TR(0x74d0af);
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
B74d0b1:{NFSU2_TR(0x74d0b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74d0b2:{NFSU2_TR(0x74d0b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74d0c0:L74d0c0:{c.instructions+=8;NFSU2_TR(0x74d0c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B74d0c3:{NFSU2_TR(0x74d0c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d0c4:{NFSU2_TR(0x74d0c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d0c5:{NFSU2_TR(0x74d0c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74d0c9:{NFSU2_TR(0x74d0c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d0cf:{NFSU2_TR(0x74d0cf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B74d0d1:{NFSU2_TR(0x74d0d1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74d0d3:{NFSU2_TR(0x74d0d3);
if(r1(R+518)){{goto L74d19b;}}
}
B74d0d9:L74d0d9:{c.instructions+=3;NFSU2_TR(0x74d0d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d0df:{NFSU2_TR(0x74d0df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d0e0:{NFSU2_TR(0x74d0e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d0e5ull));
TAIL_STATIC(0x754e10u,754);
}
B74d0e5:L74d0e5:{c.instructions+=3;NFSU2_TR(0x74d0e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74d0e8:{NFSU2_TR(0x74d0e8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74d0ea:{NFSU2_TR(0x74d0ea);
if(r1(R+518)){{goto L74d132;}}
}
B74d0ec:L74d0ec:{c.instructions+=2;NFSU2_TR(0x74d0ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d0ed:{NFSU2_TR(0x74d0ed);
__builtin_memmove((R+4),(R+4),4);
}
B74d0f0:L74d0f0:{c.instructions+=4;NFSU2_TR(0x74d0f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d0f6:{NFSU2_TR(0x74d0f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d0f7:{NFSU2_TR(0x74d0f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d0f8:{NFSU2_TR(0x74d0f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d0fdull));
TAIL_STATIC(0x73d890u,73d);
}
B74d0fd:L74d0fd:{c.instructions+=5;NFSU2_TR(0x74d0fd);
__builtin_memmove((R+28),(R+0),4);
}
B74d0ff:{NFSU2_TR(0x74d0ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d105:{NFSU2_TR(0x74d105);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74d108:{NFSU2_TR(0x74d108);
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
B74d10a:{NFSU2_TR(0x74d10a);
if(r1(R+518)){{goto L74d11a;}}
}
B74d10c:L74d10c:{c.instructions+=5;NFSU2_TR(0x74d10c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74d112:{NFSU2_TR(0x74d112);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d113:{NFSU2_TR(0x74d113);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d114:{NFSU2_TR(0x74d114);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d115:{NFSU2_TR(0x74d115);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d117ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74d117:L74d117:{c.instructions+=1;NFSU2_TR(0x74d117);
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
B74d11a:L74d11a:{c.instructions+=2;NFSU2_TR(0x74d11a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d11b:{NFSU2_TR(0x74d11b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d11eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74d11e:L74d11e:{c.instructions+=3;NFSU2_TR(0x74d11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d124:{NFSU2_TR(0x74d124);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d125:{NFSU2_TR(0x74d125);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d12aull));
TAIL_STATIC(0x754e10u,754);
}
B74d12a:L74d12a:{c.instructions+=3;NFSU2_TR(0x74d12a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74d12d:{NFSU2_TR(0x74d12d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74d12f:{NFSU2_TR(0x74d12f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74d0f0u);}goto L74d0f0;}}
}
B74d131:L74d131:{c.instructions+=1;NFSU2_TR(0x74d131);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74d132:L74d132:{c.instructions+=3;NFSU2_TR(0x74d132);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d138:{NFSU2_TR(0x74d138);
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
B74d13a:{NFSU2_TR(0x74d13a);
if(r1(R+518)){{goto L74d168;}}
}
B74d13c:L74d13c:{c.instructions+=11;NFSU2_TR(0x74d13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d142:{NFSU2_TR(0x74d142);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74d148:{NFSU2_TR(0x74d148);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d14c:{NFSU2_TR(0x74d14c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d14d:{NFSU2_TR(0x74d14d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74d151:{NFSU2_TR(0x74d151);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d152:{NFSU2_TR(0x74d152);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d153:{NFSU2_TR(0x74d153);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x726f7374ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74d15b:{NFSU2_TR(0x74d15b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d15f:{NFSU2_TR(0x74d15f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d163:{NFSU2_TR(0x74d163);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d165ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B74d165:L74d165:{c.instructions+=1;NFSU2_TR(0x74d165);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B74d168:L74d168:{c.instructions+=3;NFSU2_TR(0x74d168);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74d16e:{NFSU2_TR(0x74d16e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d16f:{NFSU2_TR(0x74d16f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d174ull));
TAIL_STATIC(0x754d70u,754);
}
B74d174:L74d174:{c.instructions+=4;NFSU2_TR(0x74d174);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d17a:{NFSU2_TR(0x74d17a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d17b:{NFSU2_TR(0x74d17b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d181:{NFSU2_TR(0x74d181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d186ull));
TAIL_STATIC(0x73d710u,73d);
}
B74d186:L74d186:{c.instructions+=4;NFSU2_TR(0x74d186);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74d189:{NFSU2_TR(0x74d189);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d18f:{NFSU2_TR(0x74d18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8d8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d195:{NFSU2_TR(0x74d195);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8dcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d19b:L74d19b:{c.instructions+=4;NFSU2_TR(0x74d19b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74d19c:{NFSU2_TR(0x74d19c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74d19d:{NFSU2_TR(0x74d19d);
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
B74d1a0:{NFSU2_TR(0x74d1a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74d1b0:L74d1b0:{c.instructions+=10;NFSU2_TR(0x74d1b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B74d1b6:{NFSU2_TR(0x74d1b6);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74d1bb:{NFSU2_TR(0x74d1bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d1bc:{NFSU2_TR(0x74d1bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d1bd:{NFSU2_TR(0x74d1bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74d1c4:{NFSU2_TR(0x74d1c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d1cb:{NFSU2_TR(0x74d1cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d1d1:{NFSU2_TR(0x74d1d1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B74d1d3:{NFSU2_TR(0x74d1d3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74d1d5:{NFSU2_TR(0x74d1d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74d388;}}
}
B74d1db:L74d1db:{c.instructions+=7;NFSU2_TR(0x74d1db);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d1e2:{NFSU2_TR(0x74d1e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d1e9:{NFSU2_TR(0x74d1e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d1ea:{NFSU2_TR(0x74d1ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d1eb:{NFSU2_TR(0x74d1eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d1f1:{NFSU2_TR(0x74d1f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8d8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d1f7:{NFSU2_TR(0x74d1f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d1fcull));
TAIL_STATIC(0x74bc80u,74b);
}
B74d1fc:L74d1fc:{c.instructions+=8;NFSU2_TR(0x74d1fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6b4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74d202:{NFSU2_TR(0x74d202);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d203:{NFSU2_TR(0x74d203);
u8 U[4];
w4(U+0,u32(0x7d2f6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d208:{NFSU2_TR(0x74d208);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74d20c:{NFSU2_TR(0x74d20c);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d211:{NFSU2_TR(0x74d211);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d212:{NFSU2_TR(0x74d212);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74d216:{NFSU2_TR(0x74d216);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d21bull));
TAIL_STATIC(0x741a50u,741);
}
B74d21b:L74d21b:{c.instructions+=6;NFSU2_TR(0x74d21b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d21d:{NFSU2_TR(0x74d21d);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d222:{NFSU2_TR(0x74d222);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74d226:{NFSU2_TR(0x74d226);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d22b:{NFSU2_TR(0x74d22b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d22c:{NFSU2_TR(0x74d22c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d231ull));
TAIL_STATIC(0x741690u,741);
}
B74d231:L74d231:{c.instructions+=8;NFSU2_TR(0x74d231);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74d234:{NFSU2_TR(0x74d234);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d236:{NFSU2_TR(0x74d236);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74d23a:{NFSU2_TR(0x74d23a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d23b:{NFSU2_TR(0x74d23b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d23c:{NFSU2_TR(0x74d23c);
u8 U[4];
w4(U+0,u32(0x45504754ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d241:{NFSU2_TR(0x74d241);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d242:{NFSU2_TR(0x74d242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d247ull));
TAIL_STATIC(0x7549f0u,754);
}
B74d247:L74d247:{c.instructions+=8;NFSU2_TR(0x74d247);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d248:{NFSU2_TR(0x74d248);
u8 U[4];
w4(U+0,u32(0x7d2f6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d24d:{NFSU2_TR(0x74d24d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74d251:{NFSU2_TR(0x74d251);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d256:{NFSU2_TR(0x74d256);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d257:{NFSU2_TR(0x74d257);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd04ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d25d:{NFSU2_TR(0x74d25d);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74d261:{NFSU2_TR(0x74d261);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d266ull));
TAIL_STATIC(0x741a50u,741);
}
B74d266:L74d266:{c.instructions+=7;NFSU2_TR(0x74d266);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B74d269:{NFSU2_TR(0x74d269);
u8 U[4];
w4(U+0,u32(0x7a0bb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d26e:{NFSU2_TR(0x74d26e);
u8 U[4];
w4(U+0,u32(0x7d2f7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d273:{NFSU2_TR(0x74d273);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74d277:{NFSU2_TR(0x74d277);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d27c:{NFSU2_TR(0x74d27c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d27d:{NFSU2_TR(0x74d27d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d282ull));
TAIL_STATIC(0x741a50u,741);
}
B74d282:L74d282:{c.instructions+=6;NFSU2_TR(0x74d282);
u8 U[4];
w4(U+0,u32(0x7c34dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d287:{NFSU2_TR(0x74d287);
u8 U[4];
w4(U+0,u32(0x7d2f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d28c:{NFSU2_TR(0x74d28c);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74d290:{NFSU2_TR(0x74d290);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d295:{NFSU2_TR(0x74d295);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d296:{NFSU2_TR(0x74d296);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d29bull));
TAIL_STATIC(0x741a50u,741);
}
B74d29b:L74d29b:{c.instructions+=6;NFSU2_TR(0x74d29b);
u8 U[4];
w4(U+0,u32(0x7c34dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d2a0:{NFSU2_TR(0x74d2a0);
u8 U[4];
w4(U+0,u32(0x7d2f74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d2a5:{NFSU2_TR(0x74d2a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74d2a9:{NFSU2_TR(0x74d2a9);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d2ae:{NFSU2_TR(0x74d2ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d2af:{NFSU2_TR(0x74d2af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d2b4ull));
TAIL_STATIC(0x741a50u,741);
}
B74d2b4:L74d2b4:{c.instructions+=6;NFSU2_TR(0x74d2b4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d2b6:{NFSU2_TR(0x74d2b6);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d2bb:{NFSU2_TR(0x74d2bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74d2bf:{NFSU2_TR(0x74d2bf);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d2c4:{NFSU2_TR(0x74d2c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d2c5:{NFSU2_TR(0x74d2c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d2caull));
TAIL_STATIC(0x741690u,741);
}
B74d2ca:L74d2ca:{c.instructions+=9;NFSU2_TR(0x74d2ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d2cd:{NFSU2_TR(0x74d2cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B74d2d0:{NFSU2_TR(0x74d2d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d2d2:{NFSU2_TR(0x74d2d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74d2d6:{NFSU2_TR(0x74d2d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d2d7:{NFSU2_TR(0x74d2d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d2d8:{NFSU2_TR(0x74d2d8);
u8 U[4];
w4(U+0,u32(0x52474554ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d2dd:{NFSU2_TR(0x74d2dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d2de:{NFSU2_TR(0x74d2de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d2e3ull));
TAIL_STATIC(0x7549f0u,754);
}
B74d2e3:L74d2e3:{c.instructions+=7;NFSU2_TR(0x74d2e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d2e4:{NFSU2_TR(0x74d2e4);
u8 U[4];
w4(U+0,u32(0x7d2f6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d2e9:{NFSU2_TR(0x74d2e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74d2ed:{NFSU2_TR(0x74d2ed);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d2f2:{NFSU2_TR(0x74d2f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d2f3:{NFSU2_TR(0x74d2f3);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74d2f7:{NFSU2_TR(0x74d2f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d2fcull));
TAIL_STATIC(0x741a50u,741);
}
B74d2fc:L74d2fc:{c.instructions+=6;NFSU2_TR(0x74d2fc);
u8 U[4];
w4(U+0,u32(0x7b3b88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d301:{NFSU2_TR(0x74d301);
u8 U[4];
w4(U+0,u32(0x7d2f7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d306:{NFSU2_TR(0x74d306);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d30b:{NFSU2_TR(0x74d30b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74d30f:{NFSU2_TR(0x74d30f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d310:{NFSU2_TR(0x74d310);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d315ull));
TAIL_STATIC(0x741a50u,741);
}
B74d315:L74d315:{c.instructions+=6;NFSU2_TR(0x74d315);
u8 U[4];
w4(U+0,u32(0x7c34dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d31a:{NFSU2_TR(0x74d31a);
u8 U[4];
w4(U+0,u32(0x7d2f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d31f:{NFSU2_TR(0x74d31f);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74d323:{NFSU2_TR(0x74d323);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d328:{NFSU2_TR(0x74d328);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d329:{NFSU2_TR(0x74d329);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d32eull));
TAIL_STATIC(0x741a50u,741);
}
B74d32e:L74d32e:{c.instructions+=7;NFSU2_TR(0x74d32e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B74d331:{NFSU2_TR(0x74d331);
u8 U[4];
w4(U+0,u32(0x7c34dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d336:{NFSU2_TR(0x74d336);
u8 U[4];
w4(U+0,u32(0x7d2f74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d33b:{NFSU2_TR(0x74d33b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74d33f:{NFSU2_TR(0x74d33f);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d344:{NFSU2_TR(0x74d344);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d345:{NFSU2_TR(0x74d345);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d34aull));
TAIL_STATIC(0x741a50u,741);
}
B74d34a:L74d34a:{c.instructions+=6;NFSU2_TR(0x74d34a);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d34c:{NFSU2_TR(0x74d34c);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d351:{NFSU2_TR(0x74d351);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74d355:{NFSU2_TR(0x74d355);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d35a:{NFSU2_TR(0x74d35a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d35b:{NFSU2_TR(0x74d35b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d360ull));
TAIL_STATIC(0x741690u,741);
}
B74d360:L74d360:{c.instructions+=8;NFSU2_TR(0x74d360);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d363:{NFSU2_TR(0x74d363);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d365:{NFSU2_TR(0x74d365);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74d369:{NFSU2_TR(0x74d369);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d36a:{NFSU2_TR(0x74d36a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d36b:{NFSU2_TR(0x74d36b);
u8 U[4];
w4(U+0,u32(0x52474554ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d370:{NFSU2_TR(0x74d370);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d371:{NFSU2_TR(0x74d371);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d376ull));
TAIL_STATIC(0x7549f0u,754);
}
B74d376:L74d376:{c.instructions+=4;NFSU2_TR(0x74d376);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74d37c:{NFSU2_TR(0x74d37c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d37e:{NFSU2_TR(0x74d37e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d37f:{NFSU2_TR(0x74d37f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d384ull));
TAIL_STATIC(0x73d990u,73d);
}
B74d384:L74d384:{c.instructions+=2;NFSU2_TR(0x74d384);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3cull))));
}
B74d387:{NFSU2_TR(0x74d387);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74d388:L74d388:{c.instructions+=5;NFSU2_TR(0x74d388);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d38e:{NFSU2_TR(0x74d38e);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d395:{NFSU2_TR(0x74d395);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74d396:{NFSU2_TR(0x74d396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74d397:{NFSU2_TR(0x74d397);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d39cull));
TAIL_STATIC(0x76115eu,761);
}
B74d39c:L74d39c:{c.instructions+=2;NFSU2_TR(0x74d39c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74d3a2:{NFSU2_TR(0x74d3a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74d3b0:L74d3b0:{c.instructions+=3;NFSU2_TR(0x74d3b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d3b4:{NFSU2_TR(0x74d3b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d3ba:{NFSU2_TR(0x74d3ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74d3c0:L74d3c0:{c.instructions+=4;NFSU2_TR(0x74d3c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d3c1:{NFSU2_TR(0x74d3c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74d3c5:{NFSU2_TR(0x74d3c5);
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
B74d3c7:{NFSU2_TR(0x74d3c7);
if(r1(R+518)){{goto L74d40a;}}
}
B74d3c9:L74d3c9:{c.instructions+=2;NFSU2_TR(0x74d3c9);
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
B74d3cc:{NFSU2_TR(0x74d3cc);
if(r1(R+518)){{goto L74d40a;}}
}
B74d3ce:L74d3ce:{c.instructions+=3;NFSU2_TR(0x74d3ce);
u8 U[4];
w4(U+0,u32(0x2full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d3d0:{NFSU2_TR(0x74d3d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d3d1:{NFSU2_TR(0x74d3d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d3d6ull));
TAIL_STATIC(0x75cf10u,75c);
}
B74d3d6:L74d3d6:{c.instructions+=3;NFSU2_TR(0x74d3d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74d3d9:{NFSU2_TR(0x74d3d9);
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
B74d3db:{NFSU2_TR(0x74d3db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74d40a;}}
}
B74d3dd:L74d3dd:{c.instructions+=3;NFSU2_TR(0x74d3dd);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d3df:{NFSU2_TR(0x74d3df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d3e0:{NFSU2_TR(0x74d3e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d3e5ull));
TAIL_STATIC(0x75cf10u,75c);
}
B74d3e5:L74d3e5:{c.instructions+=3;NFSU2_TR(0x74d3e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74d3e8:{NFSU2_TR(0x74d3e8);
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
B74d3ea:{NFSU2_TR(0x74d3ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74d40a;}}
}
B74d3ec:L74d3ec:{c.instructions+=4;NFSU2_TR(0x74d3ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d3f0:{NFSU2_TR(0x74d3f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d3f3:{NFSU2_TR(0x74d3f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74d3f5:{NFSU2_TR(0x74d3f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74d406;}}
}
B74d3f7:L74d3f7:{c.instructions+=3;NFSU2_TR(0x74d3f7);
u8 U[4];
w4(U+0,u32(0x2eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d3f9:{NFSU2_TR(0x74d3f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d3fa:{NFSU2_TR(0x74d3fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d3ffull));
TAIL_STATIC(0x75cf10u,75c);
}
B74d3ff:L74d3ff:{c.instructions+=3;NFSU2_TR(0x74d3ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74d402:{NFSU2_TR(0x74d402);
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
B74d404:{NFSU2_TR(0x74d404);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74d40a;}}
}
B74d406:L74d406:{c.instructions+=3;NFSU2_TR(0x74d406);
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
B74d408:{NFSU2_TR(0x74d408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74d409:{NFSU2_TR(0x74d409);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74d40a:L74d40a:{c.instructions+=3;NFSU2_TR(0x74d40a);
w4(R+0,u32(0xfffffffdull));
}
B74d40f:{NFSU2_TR(0x74d40f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74d410:{NFSU2_TR(0x74d410);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74d420:L74d420:{c.instructions+=8;NFSU2_TR(0x74d420);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B74d426:{NFSU2_TR(0x74d426);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74d42b:{NFSU2_TR(0x74d42b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d42c:{NFSU2_TR(0x74d42c);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74d433:{NFSU2_TR(0x74d433);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74d435:{NFSU2_TR(0x74d435);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d43c:{NFSU2_TR(0x74d43c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d43d:{NFSU2_TR(0x74d43d);
if(r1(R+518)){{goto L74d625;}}
}
B74d443:L74d443:{c.instructions+=3;NFSU2_TR(0x74d443);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d449:{NFSU2_TR(0x74d449);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74d44b:{NFSU2_TR(0x74d44b);
if(r1(R+518)){{goto L74d625;}}
}
B74d451:L74d451:{c.instructions+=4;NFSU2_TR(0x74d451);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74d458:{NFSU2_TR(0x74d458);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d459:{NFSU2_TR(0x74d459);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d45a:{NFSU2_TR(0x74d45a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d45full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74d3c0u);}goto L74d3c0;}
}
B74d45f:L74d45f:{c.instructions+=3;NFSU2_TR(0x74d45f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74d462:{NFSU2_TR(0x74d462);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74d464:{NFSU2_TR(0x74d464);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74d625;}}
}
B74d46a:L74d46a:{c.instructions+=9;NFSU2_TR(0x74d46a);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d471:{NFSU2_TR(0x74d471);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d478:{NFSU2_TR(0x74d478);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d479:{NFSU2_TR(0x74d479);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d47a:{NFSU2_TR(0x74d47a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d47b:{NFSU2_TR(0x74d47b);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d482:{NFSU2_TR(0x74d482);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d483:{NFSU2_TR(0x74d483);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B74d485:{NFSU2_TR(0x74d485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d48aull));
TAIL_STATIC(0x74c5d0u,74c);
}
B74d48a:L74d48a:{c.instructions+=4;NFSU2_TR(0x74d48a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d48b:{NFSU2_TR(0x74d48b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d48c:{NFSU2_TR(0x74d48c);
__builtin_memmove((R+20),(R+0),4);
}
B74d48e:{NFSU2_TR(0x74d48e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d493ull));
TAIL_STATIC(0x74cce0u,74c);
}
B74d493:L74d493:{c.instructions+=4;NFSU2_TR(0x74d493);
__builtin_memmove((R+28),(R+0),4);
}
B74d495:{NFSU2_TR(0x74d495);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74d498:{NFSU2_TR(0x74d498);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74d49a:{NFSU2_TR(0x74d49a);
if(r1(R+518)){{goto L74d60c;}}
}
B74d4a0:L74d4a0:{c.instructions+=8;NFSU2_TR(0x74d4a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6b4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B74d4a6:{NFSU2_TR(0x74d4a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d4a7:{NFSU2_TR(0x74d4a7);
u8 U[4];
w4(U+0,u32(0x7d2f6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d4ac:{NFSU2_TR(0x74d4ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74d4b0:{NFSU2_TR(0x74d4b0);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d4b5:{NFSU2_TR(0x74d4b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d4b6:{NFSU2_TR(0x74d4b6);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74d4bb:{NFSU2_TR(0x74d4bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d4c0ull));
TAIL_STATIC(0x741a50u,741);
}
B74d4c0:L74d4c0:{c.instructions+=6;NFSU2_TR(0x74d4c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d4c1:{NFSU2_TR(0x74d4c1);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d4c6:{NFSU2_TR(0x74d4c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74d4ca:{NFSU2_TR(0x74d4ca);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d4cf:{NFSU2_TR(0x74d4cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d4d0:{NFSU2_TR(0x74d4d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d4d5ull));
TAIL_STATIC(0x741a50u,741);
}
B74d4d5:L74d4d5:{c.instructions+=4;NFSU2_TR(0x74d4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d4db:{NFSU2_TR(0x74d4db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B74d4de:{NFSU2_TR(0x74d4de);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x80204ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74d4e3:{NFSU2_TR(0x74d4e3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74d514;}}
}
B74d4e5:L74d4e5:{c.instructions+=6;NFSU2_TR(0x74d4e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d4e6:{NFSU2_TR(0x74d4e6);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d4eb:{NFSU2_TR(0x74d4eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74d4ef:{NFSU2_TR(0x74d4ef);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d4f4:{NFSU2_TR(0x74d4f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d4f5:{NFSU2_TR(0x74d4f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d4faull));
TAIL_STATIC(0x741690u,741);
}
B74d4fa:L74d4fa:{c.instructions+=5;NFSU2_TR(0x74d4fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d500:{NFSU2_TR(0x74d500);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74d503:{NFSU2_TR(0x74d503);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000ull))));
}
B74d508:{NFSU2_TR(0x74d508);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d50e:{NFSU2_TR(0x74d50e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d514:L74d514:{c.instructions+=2;NFSU2_TR(0x74d514);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B74d51b:{NFSU2_TR(0x74d51b);
if(r1(R+518)){{goto L74d569;}}
}
B74d51d:L74d51d:{c.instructions+=6;NFSU2_TR(0x74d51d);
u8 U[4];
w4(U+0,u32(0x7a0bb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d522:{NFSU2_TR(0x74d522);
u8 U[4];
w4(U+0,u32(0x7d2f7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d527:{NFSU2_TR(0x74d527);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74d52b:{NFSU2_TR(0x74d52b);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d530:{NFSU2_TR(0x74d530);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d531:{NFSU2_TR(0x74d531);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d536ull));
TAIL_STATIC(0x741a50u,741);
}
B74d536:L74d536:{c.instructions+=6;NFSU2_TR(0x74d536);
u8 U[4];
w4(U+0,u32(0x7c34dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d53b:{NFSU2_TR(0x74d53b);
u8 U[4];
w4(U+0,u32(0x7d2f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d540:{NFSU2_TR(0x74d540);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74d544:{NFSU2_TR(0x74d544);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d549:{NFSU2_TR(0x74d549);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d54a:{NFSU2_TR(0x74d54a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d54full));
TAIL_STATIC(0x741a50u,741);
}
B74d54f:L74d54f:{c.instructions+=8;NFSU2_TR(0x74d54f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d552:{NFSU2_TR(0x74d552);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d554:{NFSU2_TR(0x74d554);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74d558:{NFSU2_TR(0x74d558);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d559:{NFSU2_TR(0x74d559);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d55b:{NFSU2_TR(0x74d55b);
u8 U[4];
w4(U+0,u32(0x52414444ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d560:{NFSU2_TR(0x74d560);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d561:{NFSU2_TR(0x74d561);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d566ull));
TAIL_STATIC(0x7549f0u,754);
}
B74d566:L74d566:{c.instructions+=1;NFSU2_TR(0x74d566);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B74d569:L74d569:{c.instructions+=3;NFSU2_TR(0x74d569);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d56f:{NFSU2_TR(0x74d56f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74d572:{NFSU2_TR(0x74d572);
if(r1(R+518)){{goto L74d5a7;}}
}
B74d574:L74d574:{c.instructions+=6;NFSU2_TR(0x74d574);
u8 U[4];
w4(U+0,u32(0x7b3b88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d579:{NFSU2_TR(0x74d579);
u8 U[4];
w4(U+0,u32(0x7d2f7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d57e:{NFSU2_TR(0x74d57e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74d582:{NFSU2_TR(0x74d582);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d587:{NFSU2_TR(0x74d587);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d588:{NFSU2_TR(0x74d588);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d58dull));
TAIL_STATIC(0x741a50u,741);
}
B74d58d:L74d58d:{c.instructions+=8;NFSU2_TR(0x74d58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d590:{NFSU2_TR(0x74d590);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d592:{NFSU2_TR(0x74d592);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74d596:{NFSU2_TR(0x74d596);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d597:{NFSU2_TR(0x74d597);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d599:{NFSU2_TR(0x74d599);
u8 U[4];
w4(U+0,u32(0x52414444ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d59e:{NFSU2_TR(0x74d59e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d59f:{NFSU2_TR(0x74d59f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d5a4ull));
TAIL_STATIC(0x7549f0u,754);
}
B74d5a4:L74d5a4:{c.instructions+=1;NFSU2_TR(0x74d5a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B74d5a7:L74d5a7:{c.instructions+=2;NFSU2_TR(0x74d5a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B74d5b1:{NFSU2_TR(0x74d5b1);
if(r1(R+518)){{goto L74d5e6;}}
}
B74d5b3:L74d5b3:{c.instructions+=6;NFSU2_TR(0x74d5b3);
u8 U[4];
w4(U+0,u32(0x7c34dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d5b8:{NFSU2_TR(0x74d5b8);
u8 U[4];
w4(U+0,u32(0x7d2f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d5bd:{NFSU2_TR(0x74d5bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74d5c1:{NFSU2_TR(0x74d5c1);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d5c6:{NFSU2_TR(0x74d5c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d5c7:{NFSU2_TR(0x74d5c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d5ccull));
TAIL_STATIC(0x741a50u,741);
}
B74d5cc:L74d5cc:{c.instructions+=8;NFSU2_TR(0x74d5cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d5cf:{NFSU2_TR(0x74d5cf);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d5d1:{NFSU2_TR(0x74d5d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74d5d5:{NFSU2_TR(0x74d5d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d5d6:{NFSU2_TR(0x74d5d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d5d8:{NFSU2_TR(0x74d5d8);
u8 U[4];
w4(U+0,u32(0x5241444dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d5dd:{NFSU2_TR(0x74d5dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d5de:{NFSU2_TR(0x74d5de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d5e3ull));
TAIL_STATIC(0x7549f0u,754);
}
B74d5e3:L74d5e3:{c.instructions+=1;NFSU2_TR(0x74d5e3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B74d5e6:L74d5e6:{c.instructions+=2;NFSU2_TR(0x74d5e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x800000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B74d5f0:{NFSU2_TR(0x74d5f0);
if(r1(R+518)){{goto L74d60c;}}
}
B74d5f2:L74d5f2:{c.instructions+=8;NFSU2_TR(0x74d5f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74d5f5:{NFSU2_TR(0x74d5f5);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d5f7:{NFSU2_TR(0x74d5f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74d5fb:{NFSU2_TR(0x74d5fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d5fc:{NFSU2_TR(0x74d5fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d5fe:{NFSU2_TR(0x74d5fe);
u8 U[4];
w4(U+0,u32(0x50414444ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d603:{NFSU2_TR(0x74d603);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d604:{NFSU2_TR(0x74d604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d609ull));
TAIL_STATIC(0x7549f0u,754);
}
B74d609:L74d609:{c.instructions+=1;NFSU2_TR(0x74d609);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74d60c:L74d60c:{c.instructions+=7;NFSU2_TR(0x74d60c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74d60d:{NFSU2_TR(0x74d60d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74d60e:{NFSU2_TR(0x74d60e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74d60f:{NFSU2_TR(0x74d60f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74d611:{NFSU2_TR(0x74d611);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74d612:{NFSU2_TR(0x74d612);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d619:{NFSU2_TR(0x74d619);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d61eull));
TAIL_STATIC(0x76115eu,761);
}
B74d61e:L74d61e:{c.instructions+=2;NFSU2_TR(0x74d61e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74d624:{NFSU2_TR(0x74d624);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74d625:L74d625:{c.instructions+=5;NFSU2_TR(0x74d625);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d62c:{NFSU2_TR(0x74d62c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74d62d:{NFSU2_TR(0x74d62d);
w4(R+0,u32(0xfffffffdull));
}
B74d632:{NFSU2_TR(0x74d632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74d633:{NFSU2_TR(0x74d633);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d638ull));
TAIL_STATIC(0x76115eu,761);
}
B74d638:L74d638:{c.instructions+=2;NFSU2_TR(0x74d638);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74d63e:{NFSU2_TR(0x74d63e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74d640:L74d640:{c.instructions+=4;NFSU2_TR(0x74d640);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d644:{NFSU2_TR(0x74d644);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x80000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B74d64e:{NFSU2_TR(0x74d64e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d652:{NFSU2_TR(0x74d652);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74d420u);}goto L74d420;}
}
B74d660:L74d660:{c.instructions+=9;NFSU2_TR(0x74d660);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x108ull))));
}
B74d666:{NFSU2_TR(0x74d666);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74d66b:{NFSU2_TR(0x74d66b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d66c:{NFSU2_TR(0x74d66c);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74d673:{NFSU2_TR(0x74d673);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74d675:{NFSU2_TR(0x74d675);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d67c:{NFSU2_TR(0x74d67c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d67d:{NFSU2_TR(0x74d67d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0xfffffffeull));
s4(u32(r4(U+0)),r4(U+4));
}
B74d685:{NFSU2_TR(0x74d685);
if(r1(R+518)){{goto L74d8c1;}}
}
B74d68b:L74d68b:{c.instructions+=4;NFSU2_TR(0x74d68b);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74d692:{NFSU2_TR(0x74d692);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d698:{NFSU2_TR(0x74d698);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74d69a:{NFSU2_TR(0x74d69a);
if(r1(R+518)){{goto L74d8c1;}}
}
B74d6a0:L74d6a0:{c.instructions+=3;NFSU2_TR(0x74d6a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d6a1:{NFSU2_TR(0x74d6a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d6a2:{NFSU2_TR(0x74d6a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d6a7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74d3c0u);}goto L74d3c0;}
}
B74d6a7:L74d6a7:{c.instructions+=3;NFSU2_TR(0x74d6a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74d6aa:{NFSU2_TR(0x74d6aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74d6ac:{NFSU2_TR(0x74d6ac);
if(r1(R+518)){{goto L74d6c8;}}
}
B74d6ae:L74d6ae:{c.instructions+=5;NFSU2_TR(0x74d6ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74d6af:{NFSU2_TR(0x74d6af);
w4(R+0,u32(0xfffffffdull));
}
B74d6b4:{NFSU2_TR(0x74d6b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74d6b5:{NFSU2_TR(0x74d6b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d6bc:{NFSU2_TR(0x74d6bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d6c1ull));
TAIL_STATIC(0x76115eu,761);
}
B74d6c1:L74d6c1:{c.instructions+=2;NFSU2_TR(0x74d6c1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x108ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x108ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x108ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74d6c7:{NFSU2_TR(0x74d6c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74d6c8:L74d6c8:{c.instructions+=9;NFSU2_TR(0x74d6c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d6cf:{NFSU2_TR(0x74d6cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d6d6:{NFSU2_TR(0x74d6d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d6d7:{NFSU2_TR(0x74d6d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d6d8:{NFSU2_TR(0x74d6d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d6d9:{NFSU2_TR(0x74d6d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x130ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d6e0:{NFSU2_TR(0x74d6e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d6e1:{NFSU2_TR(0x74d6e1);
w4(R+28,u32(0x1ull));
}
B74d6e6:{NFSU2_TR(0x74d6e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d6ebull));
TAIL_STATIC(0x74c5d0u,74c);
}
B74d6eb:L74d6eb:{c.instructions+=6;NFSU2_TR(0x74d6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74d6f1:{NFSU2_TR(0x74d6f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d6f2:{NFSU2_TR(0x74d6f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d6f3:{NFSU2_TR(0x74d6f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d6f4:{NFSU2_TR(0x74d6f4);
__builtin_memmove((R+28),(R+0),4);
}
B74d6f6:{NFSU2_TR(0x74d6f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d6fbull));
TAIL_STATIC(0x74cd70u,74c);
}
B74d6fb:L74d6fb:{c.instructions+=4;NFSU2_TR(0x74d6fb);
__builtin_memmove((R+12),(R+0),4);
}
B74d6fd:{NFSU2_TR(0x74d6fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74d700:{NFSU2_TR(0x74d700);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74d702:{NFSU2_TR(0x74d702);
if(r1(R+518)){{goto L74d8bf;}}
}
B74d708:L74d708:{c.instructions+=2;NFSU2_TR(0x74d708);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74d70b:{NFSU2_TR(0x74d70b);
if(r1(R+518)){{goto L74d7d7;}}
}
B74d711:L74d711:{c.instructions+=7;NFSU2_TR(0x74d711);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d712:{NFSU2_TR(0x74d712);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d717:{NFSU2_TR(0x74d717);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74d71b:{NFSU2_TR(0x74d71b);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d720:{NFSU2_TR(0x74d720);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d721:{NFSU2_TR(0x74d721);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74d726:{NFSU2_TR(0x74d726);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d72bull));
TAIL_STATIC(0x741690u,741);
}
B74d72b:L74d72b:{c.instructions+=7;NFSU2_TR(0x74d72b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6b4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74d731:{NFSU2_TR(0x74d731);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d732:{NFSU2_TR(0x74d732);
u8 U[4];
w4(U+0,u32(0x7d2f6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d737:{NFSU2_TR(0x74d737);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74d73b:{NFSU2_TR(0x74d73b);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d740:{NFSU2_TR(0x74d740);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d741:{NFSU2_TR(0x74d741);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d746ull));
TAIL_STATIC(0x741a50u,741);
}
B74d746:L74d746:{c.instructions+=6;NFSU2_TR(0x74d746);
u8 U[4];
w4(U+0,u32(0x7a0bb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d74b:{NFSU2_TR(0x74d74b);
u8 U[4];
w4(U+0,u32(0x7d2f7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d750:{NFSU2_TR(0x74d750);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74d754:{NFSU2_TR(0x74d754);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d759:{NFSU2_TR(0x74d759);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d75a:{NFSU2_TR(0x74d75a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d75full));
TAIL_STATIC(0x741a50u,741);
}
B74d75f:L74d75f:{c.instructions+=6;NFSU2_TR(0x74d75f);
u8 U[4];
w4(U+0,u32(0x7c34dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d764:{NFSU2_TR(0x74d764);
u8 U[4];
w4(U+0,u32(0x7d2f5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d769:{NFSU2_TR(0x74d769);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74d76d:{NFSU2_TR(0x74d76d);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d772:{NFSU2_TR(0x74d772);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d773:{NFSU2_TR(0x74d773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d778ull));
TAIL_STATIC(0x741a50u,741);
}
B74d778:L74d778:{c.instructions+=7;NFSU2_TR(0x74d778);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B74d77b:{NFSU2_TR(0x74d77b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d77c:{NFSU2_TR(0x74d77c);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d781:{NFSU2_TR(0x74d781);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74d785:{NFSU2_TR(0x74d785);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d78a:{NFSU2_TR(0x74d78a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d78b:{NFSU2_TR(0x74d78b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d790ull));
TAIL_STATIC(0x741a50u,741);
}
B74d790:L74d790:{c.instructions+=8;NFSU2_TR(0x74d790);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d793:{NFSU2_TR(0x74d793);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d795:{NFSU2_TR(0x74d795);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74d799:{NFSU2_TR(0x74d799);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d79a:{NFSU2_TR(0x74d79a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d79c:{NFSU2_TR(0x74d79c);
u8 U[4];
w4(U+0,u32(0x5244454dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d7a1:{NFSU2_TR(0x74d7a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d7a2:{NFSU2_TR(0x74d7a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d7a7ull));
TAIL_STATIC(0x7549f0u,754);
}
B74d7a7:L74d7a7:{c.instructions+=6;NFSU2_TR(0x74d7a7);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d7a9:{NFSU2_TR(0x74d7a9);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d7ae:{NFSU2_TR(0x74d7ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74d7b2:{NFSU2_TR(0x74d7b2);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d7b7:{NFSU2_TR(0x74d7b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d7b8:{NFSU2_TR(0x74d7b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d7bdull));
TAIL_STATIC(0x741690u,741);
}
B74d7bd:L74d7bd:{c.instructions+=8;NFSU2_TR(0x74d7bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d7c0:{NFSU2_TR(0x74d7c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d7c2:{NFSU2_TR(0x74d7c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74d7c6:{NFSU2_TR(0x74d7c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d7c7:{NFSU2_TR(0x74d7c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d7c9:{NFSU2_TR(0x74d7c9);
u8 U[4];
w4(U+0,u32(0x5244454cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d7ce:{NFSU2_TR(0x74d7ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d7cf:{NFSU2_TR(0x74d7cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d7d4ull));
TAIL_STATIC(0x7549f0u,754);
}
B74d7d4:L74d7d4:{c.instructions+=1;NFSU2_TR(0x74d7d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B74d7d7:L74d7d7:{c.instructions+=2;NFSU2_TR(0x74d7d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+13))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B74d7da:{NFSU2_TR(0x74d7da);
if(r1(R+518)){{goto L74d860;}}
}
B74d7e0:L74d7e0:{c.instructions+=7;NFSU2_TR(0x74d7e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d7e1:{NFSU2_TR(0x74d7e1);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d7e6:{NFSU2_TR(0x74d7e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74d7ea:{NFSU2_TR(0x74d7ea);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d7ef:{NFSU2_TR(0x74d7ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d7f0:{NFSU2_TR(0x74d7f0);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74d7f5:{NFSU2_TR(0x74d7f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d7faull));
TAIL_STATIC(0x741690u,741);
}
B74d7fa:L74d7fa:{c.instructions+=7;NFSU2_TR(0x74d7fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6b4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74d800:{NFSU2_TR(0x74d800);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d801:{NFSU2_TR(0x74d801);
u8 U[4];
w4(U+0,u32(0x7d2f6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d806:{NFSU2_TR(0x74d806);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74d80a:{NFSU2_TR(0x74d80a);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d80f:{NFSU2_TR(0x74d80f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d810:{NFSU2_TR(0x74d810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d815ull));
TAIL_STATIC(0x741a50u,741);
}
B74d815:L74d815:{c.instructions+=6;NFSU2_TR(0x74d815);
u8 U[4];
w4(U+0,u32(0x7b3b88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d81a:{NFSU2_TR(0x74d81a);
u8 U[4];
w4(U+0,u32(0x7d2f7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d81f:{NFSU2_TR(0x74d81f);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74d823:{NFSU2_TR(0x74d823);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d828:{NFSU2_TR(0x74d828);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d829:{NFSU2_TR(0x74d829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d82eull));
TAIL_STATIC(0x741a50u,741);
}
B74d82e:L74d82e:{c.instructions+=6;NFSU2_TR(0x74d82e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d82f:{NFSU2_TR(0x74d82f);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d834:{NFSU2_TR(0x74d834);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74d838:{NFSU2_TR(0x74d838);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d83d:{NFSU2_TR(0x74d83d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d83e:{NFSU2_TR(0x74d83e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d843ull));
TAIL_STATIC(0x741a50u,741);
}
B74d843:L74d843:{c.instructions+=9;NFSU2_TR(0x74d843);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74d846:{NFSU2_TR(0x74d846);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B74d849:{NFSU2_TR(0x74d849);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d84b:{NFSU2_TR(0x74d84b);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74d84f:{NFSU2_TR(0x74d84f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d850:{NFSU2_TR(0x74d850);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d852:{NFSU2_TR(0x74d852);
u8 U[4];
w4(U+0,u32(0x5244454cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d857:{NFSU2_TR(0x74d857);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d858:{NFSU2_TR(0x74d858);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d85dull));
TAIL_STATIC(0x7549f0u,754);
}
B74d85d:L74d85d:{c.instructions+=1;NFSU2_TR(0x74d85d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74d860:L74d860:{c.instructions+=2;NFSU2_TR(0x74d860);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(u32(0x800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74d866:{NFSU2_TR(0x74d866);
if(r1(R+518)){{goto L74d8b7;}}
}
B74d868:L74d868:{c.instructions+=8;NFSU2_TR(0x74d868);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6b4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74d86e:{NFSU2_TR(0x74d86e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d86f:{NFSU2_TR(0x74d86f);
u8 U[4];
w4(U+0,u32(0x7d2f6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d874:{NFSU2_TR(0x74d874);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74d878:{NFSU2_TR(0x74d878);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d87d:{NFSU2_TR(0x74d87d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d87e:{NFSU2_TR(0x74d87e);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74d883:{NFSU2_TR(0x74d883);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d888ull));
TAIL_STATIC(0x741a50u,741);
}
B74d888:L74d888:{c.instructions+=6;NFSU2_TR(0x74d888);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d889:{NFSU2_TR(0x74d889);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d88e:{NFSU2_TR(0x74d88e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74d892:{NFSU2_TR(0x74d892);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d897:{NFSU2_TR(0x74d897);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d898:{NFSU2_TR(0x74d898);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d89dull));
TAIL_STATIC(0x741a50u,741);
}
B74d89d:L74d89d:{c.instructions+=8;NFSU2_TR(0x74d89d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d8a0:{NFSU2_TR(0x74d8a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d8a2:{NFSU2_TR(0x74d8a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74d8a6:{NFSU2_TR(0x74d8a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d8a7:{NFSU2_TR(0x74d8a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d8a9:{NFSU2_TR(0x74d8a9);
u8 U[4];
w4(U+0,u32(0x5044454cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d8ae:{NFSU2_TR(0x74d8ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d8af:{NFSU2_TR(0x74d8af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d8b4ull));
TAIL_STATIC(0x7549f0u,754);
}
B74d8b4:L74d8b4:{c.instructions+=1;NFSU2_TR(0x74d8b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B74d8b7:L74d8b7:{c.instructions+=1;NFSU2_TR(0x74d8b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74d8bf:L74d8bf:{c.instructions+=2;NFSU2_TR(0x74d8bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74d8c0:{NFSU2_TR(0x74d8c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74d8c1:L74d8c1:{c.instructions+=5;NFSU2_TR(0x74d8c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d8c8:{NFSU2_TR(0x74d8c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d8cc:{NFSU2_TR(0x74d8cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74d8cd:{NFSU2_TR(0x74d8cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74d8ce:{NFSU2_TR(0x74d8ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d8d3ull));
TAIL_STATIC(0x76115eu,761);
}
B74d8d3:L74d8d3:{c.instructions+=2;NFSU2_TR(0x74d8d3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x108ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x108ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x108ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74d8d9:{NFSU2_TR(0x74d8d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74d8e0:L74d8e0:{c.instructions+=7;NFSU2_TR(0x74d8e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d8e1:{NFSU2_TR(0x74d8e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d8e2:{NFSU2_TR(0x74d8e2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74d8e6:{NFSU2_TR(0x74d8e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d8ec:{NFSU2_TR(0x74d8ec);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B74d8ee:{NFSU2_TR(0x74d8ee);
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
B74d8f0:{NFSU2_TR(0x74d8f0);
if(r1(R+518)){{goto L74d91b;}}
}
B74d8f2:L74d8f2:{c.instructions+=3;NFSU2_TR(0x74d8f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d8f6:{NFSU2_TR(0x74d8f6);
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
B74d8f8:{NFSU2_TR(0x74d8f8);
if(r1(R+518)){{goto L74d91b;}}
}
B74d8fa:L74d8fa:{c.instructions+=3;NFSU2_TR(0x74d8fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d8fb:{NFSU2_TR(0x74d8fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d8fc:{NFSU2_TR(0x74d8fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d901ull));
TAIL_STATIC(0x754f70u,754);
}
B74d901:L74d901:{c.instructions+=3;NFSU2_TR(0x74d901);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74d904:{NFSU2_TR(0x74d904);
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
B74d906:{NFSU2_TR(0x74d906);
if(r1(R+518)){{goto L74d91b;}}
}
B74d908:L74d908:{c.instructions+=4;NFSU2_TR(0x74d908);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d909:{NFSU2_TR(0x74d909);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d90f:{NFSU2_TR(0x74d90f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d910:{NFSU2_TR(0x74d910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d915ull));
TAIL_STATIC(0x73d810u,73d);
}
B74d915:L74d915:{c.instructions+=4;NFSU2_TR(0x74d915);
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
B74d918:{NFSU2_TR(0x74d918);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74d919:{NFSU2_TR(0x74d919);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74d91a:{NFSU2_TR(0x74d91a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74d91b:L74d91b:{c.instructions+=4;NFSU2_TR(0x74d91b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74d91c:{NFSU2_TR(0x74d91c);
__builtin_memmove((R+0),(R+24),4);
}
B74d91e:{NFSU2_TR(0x74d91e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74d91f:{NFSU2_TR(0x74d91f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74d920:L74d920:{c.instructions+=7;NFSU2_TR(0x74d920);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B74d926:{NFSU2_TR(0x74d926);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74d92b:{NFSU2_TR(0x74d92b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d92c:{NFSU2_TR(0x74d92c);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74d933:{NFSU2_TR(0x74d933);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74d93a:{NFSU2_TR(0x74d93a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B74d93d:{NFSU2_TR(0x74d93d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74d958;}}
}
B74d93f:L74d93f:{c.instructions+=4;NFSU2_TR(0x74d93f);
w4(R+0,u32(0xfffffffdull));
}
B74d944:{NFSU2_TR(0x74d944);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74d945:{NFSU2_TR(0x74d945);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d94c:{NFSU2_TR(0x74d94c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d951ull));
TAIL_STATIC(0x76115eu,761);
}
B74d951:L74d951:{c.instructions+=2;NFSU2_TR(0x74d951);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74d957:{NFSU2_TR(0x74d957);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74d958:L74d958:{c.instructions+=6;NFSU2_TR(0x74d958);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d959:{NFSU2_TR(0x74d959);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74d960:{NFSU2_TR(0x74d960);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d961:{NFSU2_TR(0x74d961);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74d963:{NFSU2_TR(0x74d963);
w4(R+4,u32(0xccull));
}
B74d968:{NFSU2_TR(0x74d968);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9d0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74d96e:L74d96e:{c.instructions+=1;NFSU2_TR(0x74d96e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L74d970;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x74d96eu);}goto L74d96e;}
}
B74d970:L74d970:{c.instructions+=9;NFSU2_TR(0x74d970);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74d977:{NFSU2_TR(0x74d977);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B74d979:{NFSU2_TR(0x74d979);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B74d97a:{NFSU2_TR(0x74d97a);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d981:{NFSU2_TR(0x74d981);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d982:{NFSU2_TR(0x74d982);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74d989:{NFSU2_TR(0x74d989);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d98a:{NFSU2_TR(0x74d98a);
w4(R+28,u32(0x3ull));
}
B74d98f:{NFSU2_TR(0x74d98f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d994ull));
TAIL_STATIC(0x74c5d0u,74c);
}
B74d994:L74d994:{c.instructions+=7;NFSU2_TR(0x74d994);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d995:{NFSU2_TR(0x74d995);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d99a:{NFSU2_TR(0x74d99a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74d99e:{NFSU2_TR(0x74d99e);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d9a3:{NFSU2_TR(0x74d9a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d9a4:{NFSU2_TR(0x74d9a4);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74d9a9:{NFSU2_TR(0x74d9a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d9aeull));
TAIL_STATIC(0x741690u,741);
}
B74d9ae:L74d9ae:{c.instructions+=7;NFSU2_TR(0x74d9ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6b4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74d9b4:{NFSU2_TR(0x74d9b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d9b5:{NFSU2_TR(0x74d9b5);
u8 U[4];
w4(U+0,u32(0x7d2f10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d9ba:{NFSU2_TR(0x74d9ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74d9be:{NFSU2_TR(0x74d9be);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d9c3:{NFSU2_TR(0x74d9c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d9c4:{NFSU2_TR(0x74d9c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d9c9ull));
TAIL_STATIC(0x741a50u,741);
}
B74d9c9:L74d9c9:{c.instructions+=6;NFSU2_TR(0x74d9c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d9ca:{NFSU2_TR(0x74d9ca);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d9cf:{NFSU2_TR(0x74d9cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74d9d3:{NFSU2_TR(0x74d9d3);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d9d8:{NFSU2_TR(0x74d9d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d9d9:{NFSU2_TR(0x74d9d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d9deull));
TAIL_STATIC(0x741a50u,741);
}
B74d9de:L74d9de:{c.instructions+=6;NFSU2_TR(0x74d9de);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d9e0:{NFSU2_TR(0x74d9e0);
u8 U[4];
w4(U+0,u32(0x7d2f84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d9e5:{NFSU2_TR(0x74d9e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74d9e9:{NFSU2_TR(0x74d9e9);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d9ee:{NFSU2_TR(0x74d9ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d9ef:{NFSU2_TR(0x74d9ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74d9f4ull));
TAIL_STATIC(0x741690u,741);
}
B74d9f4:L74d9f4:{c.instructions+=10;NFSU2_TR(0x74d9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74d9f7:{NFSU2_TR(0x74d9f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B74d9fa:{NFSU2_TR(0x74d9fa);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74d9fc:{NFSU2_TR(0x74d9fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74da00:{NFSU2_TR(0x74da00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74da01:{NFSU2_TR(0x74da01);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74da03:{NFSU2_TR(0x74da03);
u8 U[4];
w4(U+0,u32(0x55534348ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74da08:{NFSU2_TR(0x74da08);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74da09:{NFSU2_TR(0x74da09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ccull))));
w4(U+4,u32(0x270full));
s4(u32(r4(U+0)),r4(U+4));
}
B74da13:{NFSU2_TR(0x74da13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74da18ull));
TAIL_STATIC(0x7549f0u,754);
}
B74da18:L74da18:{c.instructions+=7;NFSU2_TR(0x74da18);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74da1f:{NFSU2_TR(0x74da1f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74da22:{NFSU2_TR(0x74da22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74da23:{NFSU2_TR(0x74da23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74da24:{NFSU2_TR(0x74da24);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74da26:{NFSU2_TR(0x74da26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74da27:{NFSU2_TR(0x74da27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74da2cull));
TAIL_STATIC(0x76115eu,761);
}
B74da2c:L74da2c:{c.instructions+=2;NFSU2_TR(0x74da2c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74da32:{NFSU2_TR(0x74da32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74da40:L74da40:{c.instructions+=4;NFSU2_TR(0x74da40);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74da44:{NFSU2_TR(0x74da44);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74da46:{NFSU2_TR(0x74da46);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74da49:{NFSU2_TR(0x74da49);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74da60;}}
}
B74da4b:L74da4b:{c.instructions+=5;NFSU2_TR(0x74da4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74da4f:{NFSU2_TR(0x74da4f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x27ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B74da52:{NFSU2_TR(0x74da52);
u8 U[12];
w4(U+0,u32(u32(u32(0x9d0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B74da59:{NFSU2_TR(0x74da59);
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
B74da5c:{NFSU2_TR(0x74da5c);
if(r1(R+518)){{goto L74da60;}}
}
B74da5e:L74da5e:{c.instructions+=1;NFSU2_TR(0x74da5e);
__builtin_memmove((R+0),(R+4),4);
}
B74da60:L74da60:{c.instructions+=1;NFSU2_TR(0x74da60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74da70:L74da70:{c.instructions+=6;NFSU2_TR(0x74da70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74da74:{NFSU2_TR(0x74da74);
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
B74da76:{NFSU2_TR(0x74da76);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74da7c:{NFSU2_TR(0x74da7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2d4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B74da82:{NFSU2_TR(0x74da82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4dcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74da88:{NFSU2_TR(0x74da88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74da90:L74da90:{c.instructions+=4;NFSU2_TR(0x74da90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74da94:{NFSU2_TR(0x74da94);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74da9a:{NFSU2_TR(0x74da9a);
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
B74da9c:{NFSU2_TR(0x74da9c);
if(r1(R+518)){{goto L74dab6;}}
}
B74da9e:L74da9e:{c.instructions+=6;NFSU2_TR(0x74da9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74daa2:{NFSU2_TR(0x74daa2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74daa3:{NFSU2_TR(0x74daa3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1d4ull))));
}
B74daa8:{NFSU2_TR(0x74daa8);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74daad:{NFSU2_TR(0x74daad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74daae:{NFSU2_TR(0x74daae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74dab3ull));
TAIL_STATIC(0x741650u,741);
}
B74dab3:L74dab3:{c.instructions+=1;NFSU2_TR(0x74dab3);
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
B74dab6:L74dab6:{c.instructions+=1;NFSU2_TR(0x74dab6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74dac0:L74dac0:{c.instructions+=3;NFSU2_TR(0x74dac0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74dac4:{NFSU2_TR(0x74dac4);
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
B74dac7:{NFSU2_TR(0x74dac7);
if(r1(R+518)){{goto L74daf9;}}
}
B74dac9:L74dac9:{c.instructions+=3;NFSU2_TR(0x74dac9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74dacc:{NFSU2_TR(0x74dacc);
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
B74dace:{NFSU2_TR(0x74dace);
if(r1(R+518)){{goto L74daf9;}}
}
B74dad0:L74dad0:{c.instructions+=3;NFSU2_TR(0x74dad0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B74dad3:{NFSU2_TR(0x74dad3);
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
B74dad5:{NFSU2_TR(0x74dad5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74daf9;}}
}
B74dad7:L74dad7:{c.instructions+=3;NFSU2_TR(0x74dad7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74dadb:{NFSU2_TR(0x74dadb);
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
B74dade:{NFSU2_TR(0x74dade);
if(r1(R+518)){{goto L74daf9;}}
}
B74dae0:L74dae0:{c.instructions+=7;NFSU2_TR(0x74dae0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dae1:{NFSU2_TR(0x74dae1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dae2:{NFSU2_TR(0x74dae2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74dae6:{NFSU2_TR(0x74dae6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2d4ull))));
}
B74daeb:{NFSU2_TR(0x74daeb);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74daf0:{NFSU2_TR(0x74daf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74daf1:{NFSU2_TR(0x74daf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74daf6ull));
TAIL_STATIC(0x741a50u,741);
}
B74daf6:L74daf6:{c.instructions+=1;NFSU2_TR(0x74daf6);
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
B74daf9:L74daf9:{c.instructions+=1;NFSU2_TR(0x74daf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74db00:L74db00:{c.instructions+=4;NFSU2_TR(0x74db00);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74db04:{NFSU2_TR(0x74db04);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74db08:{NFSU2_TR(0x74db08);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74db0e:{NFSU2_TR(0x74db0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74db10:L74db10:{c.instructions+=3;NFSU2_TR(0x74db10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74db14:{NFSU2_TR(0x74db14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4d8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B74db1e:{NFSU2_TR(0x74db1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74db20:L74db20:{c.instructions+=8;NFSU2_TR(0x74db20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74db21:{NFSU2_TR(0x74db21);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74db22:{NFSU2_TR(0x74db22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74db23:{NFSU2_TR(0x74db23);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74db27:{NFSU2_TR(0x74db27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74db2a:{NFSU2_TR(0x74db2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74db2b:{NFSU2_TR(0x74db2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74db2c:{NFSU2_TR(0x74db2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74db31ull));
TAIL_STATIC(0x754c40u,754);
}
B74db31:L74db31:{c.instructions+=5;NFSU2_TR(0x74db31);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B74db35:{NFSU2_TR(0x74db35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B74db38:{NFSU2_TR(0x74db38);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B74db3a:{NFSU2_TR(0x74db3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74db3e:{NFSU2_TR(0x74db3e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L74db4e;}}
}
B74db40:L74db40:{c.instructions+=2;NFSU2_TR(0x74db40);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B74db43:{NFSU2_TR(0x74db43);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L74db4e;}}
}
B74db45:L74db45:{c.instructions+=2;NFSU2_TR(0x74db45);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819be4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B74db4c:{NFSU2_TR(0x74db4c);
{goto L74db54;}
}
B74db4e:L74db4e:{c.instructions+=1;NFSU2_TR(0x74db4e);
__builtin_memmove((R+12),gp(0x819be4),4);
}
B74db54:L74db54:{c.instructions+=8;NFSU2_TR(0x74db54);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74db58:{NFSU2_TR(0x74db58);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74db59:{NFSU2_TR(0x74db59);
u8 U[4];
w4(U+0,u32(0x7d2f10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74db5e:{NFSU2_TR(0x74db5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x454ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74db64:{NFSU2_TR(0x74db64);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74db69:{NFSU2_TR(0x74db69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74db6a:{NFSU2_TR(0x74db6a);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B74db6d:{NFSU2_TR(0x74db6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74db72ull));
TAIL_STATIC(0x741a50u,741);
}
B74db72:L74db72:{c.instructions+=5;NFSU2_TR(0x74db72);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74db73:{NFSU2_TR(0x74db73);
u8 U[4];
w4(U+0,u32(0x78f614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74db78:{NFSU2_TR(0x74db78);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74db7d:{NFSU2_TR(0x74db7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74db7e:{NFSU2_TR(0x74db7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74db83ull));
TAIL_STATIC(0x741a50u,741);
}
B74db83:L74db83:{c.instructions+=5;NFSU2_TR(0x74db83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74db89:{NFSU2_TR(0x74db89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B74db8c:{NFSU2_TR(0x74db8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74db8e:{NFSU2_TR(0x74db8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74db92:{NFSU2_TR(0x74db92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74dba1;}}
}
B74db94:L74db94:{c.instructions+=3;NFSU2_TR(0x74db94);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74db98:{NFSU2_TR(0x74db98);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B74db9b:{NFSU2_TR(0x74db9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74dba1:L74dba1:{c.instructions+=2;NFSU2_TR(0x74dba1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B74dba7:{NFSU2_TR(0x74dba7);
if(r1(R+518)){{goto L74dbb5;}}
}
B74dba9:L74dba9:{c.instructions+=2;NFSU2_TR(0x74dba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74dbaf:{NFSU2_TR(0x74dbaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74dbb5:L74dbb5:{c.instructions+=2;NFSU2_TR(0x74dbb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B74dbbb:{NFSU2_TR(0x74dbbb);
if(r1(R+512)){{goto L74dbc2;}}
}
B74dbbd:L74dbbd:{c.instructions+=1;NFSU2_TR(0x74dbbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74dbc2ull));
TAIL_STATIC(0x74c440u,74c);
}
B74dbc2:L74dbc2:{c.instructions+=6;NFSU2_TR(0x74dbc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74dbc3:{NFSU2_TR(0x74dbc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74dbc4:{NFSU2_TR(0x74dbc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74dbc5:{NFSU2_TR(0x74dbc5);
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
B74dbc7:{NFSU2_TR(0x74dbc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74dbc8:{NFSU2_TR(0x74dbc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74dbd0:L74dbd0:{c.instructions+=12;NFSU2_TR(0x74dbd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74dbd4:{NFSU2_TR(0x74dbd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74dbd8:{NFSU2_TR(0x74dbd8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74dbdc:{NFSU2_TR(0x74dbdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dbdd:{NFSU2_TR(0x74dbdd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74dbe1:{NFSU2_TR(0x74dbe1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dbe2:{NFSU2_TR(0x74dbe2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74dbe6:{NFSU2_TR(0x74dbe6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dbe7:{NFSU2_TR(0x74dbe7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dbe8:{NFSU2_TR(0x74dbe8);
u8 U[4];
w4(U+0,u32(0x53454e44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dbed:{NFSU2_TR(0x74dbed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dbee:{NFSU2_TR(0x74dbee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74dbf3ull));
TAIL_STATIC(0x74caf0u,74c);
}
B74dbf3:L74dbf3:{c.instructions+=2;NFSU2_TR(0x74dbf3);
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
B74dbf6:{NFSU2_TR(0x74dbf6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74dc00:L74dc00:{c.instructions+=8;NFSU2_TR(0x74dc00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc01:{NFSU2_TR(0x74dc01);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74dc05:{NFSU2_TR(0x74dc05);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc0a:{NFSU2_TR(0x74dc0a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc0c:{NFSU2_TR(0x74dc0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc0e:{NFSU2_TR(0x74dc0e);
u8 U[4];
w4(U+0,u32(0x796344ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc13:{NFSU2_TR(0x74dc13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc14:{NFSU2_TR(0x74dc14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74dc19ull));
TAIL_STATIC(0x7414a0u,741);
}
B74dc19:L74dc19:{c.instructions+=3;NFSU2_TR(0x74dc19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74dc1c:{NFSU2_TR(0x74dc1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc1d:{NFSU2_TR(0x74dc1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74dc22ull));
TAIL_STATIC(0x742360u,742);
}
B74dc22:L74dc22:{c.instructions+=3;NFSU2_TR(0x74dc22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74dc25:{NFSU2_TR(0x74dc25);
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
B74dc2a:{NFSU2_TR(0x74dc2a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L74dc50;}}
}
B74dc2c:L74dc2c:{c.instructions+=6;NFSU2_TR(0x74dc2c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc31:{NFSU2_TR(0x74dc31);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc33:{NFSU2_TR(0x74dc33);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc35:{NFSU2_TR(0x74dc35);
u8 U[4];
w4(U+0,u32(0x7d2f54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc3a:{NFSU2_TR(0x74dc3a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc3b:{NFSU2_TR(0x74dc3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74dc40ull));
TAIL_STATIC(0x7414a0u,741);
}
B74dc40:L74dc40:{c.instructions+=3;NFSU2_TR(0x74dc40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74dc43:{NFSU2_TR(0x74dc43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc44:{NFSU2_TR(0x74dc44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74dc49ull));
TAIL_STATIC(0x742360u,742);
}
B74dc49:L74dc49:{c.instructions+=3;NFSU2_TR(0x74dc49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74dc4c:{NFSU2_TR(0x74dc4c);
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
B74dc4e:{NFSU2_TR(0x74dc4e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L74dc57;}}
}
B74dc50:L74dc50:{c.instructions+=3;NFSU2_TR(0x74dc50);
w4(R+0,u32(0xfffffffdull));
}
B74dc55:{NFSU2_TR(0x74dc55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74dc56:{NFSU2_TR(0x74dc56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74dc57:L74dc57:{c.instructions+=10;NFSU2_TR(0x74dc57);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74dc5b:{NFSU2_TR(0x74dc5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74dc5f:{NFSU2_TR(0x74dc5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc60:{NFSU2_TR(0x74dc60);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74dc64:{NFSU2_TR(0x74dc64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc65:{NFSU2_TR(0x74dc65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc66:{NFSU2_TR(0x74dc66);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74dc6a:{NFSU2_TR(0x74dc6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc6b:{NFSU2_TR(0x74dc6b);
w4(R+28,u32(0x4ull));
}
B74dc70:{NFSU2_TR(0x74dc70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74dc75ull));
TAIL_STATIC(0x74c5d0u,74c);
}
B74dc75:L74dc75:{c.instructions+=7;NFSU2_TR(0x74dc75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74dc78:{NFSU2_TR(0x74dc78);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc7a:{NFSU2_TR(0x74dc7a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc7b:{NFSU2_TR(0x74dc7b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc7d:{NFSU2_TR(0x74dc7d);
u8 U[4];
w4(U+0,u32(0x42524443ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc82:{NFSU2_TR(0x74dc82);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dc83:{NFSU2_TR(0x74dc83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74dc88ull));
TAIL_STATIC(0x7549f0u,754);
}
B74dc88:L74dc88:{c.instructions+=6;NFSU2_TR(0x74dc88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B74dc8b:{NFSU2_TR(0x74dc8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74dc8c:{NFSU2_TR(0x74dc8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74dc8d:{NFSU2_TR(0x74dc8d);
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
B74dc8f:{NFSU2_TR(0x74dc8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74dc90:{NFSU2_TR(0x74dc90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74dca0:L74dca0:{c.instructions+=6;NFSU2_TR(0x74dca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74dca4:{NFSU2_TR(0x74dca4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74dca8:{NFSU2_TR(0x74dca8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74dcac:{NFSU2_TR(0x74dcac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8d4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74dcb2:{NFSU2_TR(0x74dcb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8d0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74dcb8:{NFSU2_TR(0x74dcb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74dcc0:L74dcc0:{c.instructions+=6;NFSU2_TR(0x74dcc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74dcc4:{NFSU2_TR(0x74dcc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74dcc8:{NFSU2_TR(0x74dcc8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74dccc:{NFSU2_TR(0x74dccc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8f4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74dcd2:{NFSU2_TR(0x74dcd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8f8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74dcd8:{NFSU2_TR(0x74dcd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74dce0:L74dce0:{c.instructions+=6;NFSU2_TR(0x74dce0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74dce4:{NFSU2_TR(0x74dce4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74dce8:{NFSU2_TR(0x74dce8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74dcec:{NFSU2_TR(0x74dcec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74dcf2:{NFSU2_TR(0x74dcf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8f0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74dcf8:{NFSU2_TR(0x74dcf8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74dd00:L74dd00:{c.instructions+=13;NFSU2_TR(0x74dd00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dd01:{NFSU2_TR(0x74dd01);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74dd05:{NFSU2_TR(0x74dd05);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819bfcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B74dd0c:{NFSU2_TR(0x74dd0c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dd0d:{NFSU2_TR(0x74dd0d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dd0e:{NFSU2_TR(0x74dd0e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dd0f:{NFSU2_TR(0x74dd0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74dd13:{NFSU2_TR(0x74dd13);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B74dd15:{NFSU2_TR(0x74dd15);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74dd18:{NFSU2_TR(0x74dd18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dd19:{NFSU2_TR(0x74dd19);
w4(R+20,u32(0x52525350ull));
}
B74dd1e:{NFSU2_TR(0x74dd1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74dd22:{NFSU2_TR(0x74dd22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74dd41;}}
}
B74dd24:L74dd24:{c.instructions+=7;NFSU2_TR(0x74dd24);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74dd28:{NFSU2_TR(0x74dd28);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74dd2c:{NFSU2_TR(0x74dd2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dd2d:{NFSU2_TR(0x74dd2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dd2e:{NFSU2_TR(0x74dd2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74dd32:{NFSU2_TR(0x74dd32);
w4(R+28,u32(0x1ull));
}
B74dd37:{NFSU2_TR(0x74dd37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74dd3cull));
TAIL_STATIC(0x74c5d0u,74c);
}
B74dd3c:L74dd3c:{c.instructions+=2;NFSU2_TR(0x74dd3c);
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
B74dd3f:{NFSU2_TR(0x74dd3f);
{goto L74dd69;}
}
B74dd41:L74dd41:{c.instructions+=7;NFSU2_TR(0x74dd41);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74dd45:{NFSU2_TR(0x74dd45);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74dd49:{NFSU2_TR(0x74dd49);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74dd4d:{NFSU2_TR(0x74dd4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dd4e:{NFSU2_TR(0x74dd4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dd4f:{NFSU2_TR(0x74dd4f);
w4(R+28,u32(0x6ull));
}
B74dd54:{NFSU2_TR(0x74dd54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74dd59ull));
TAIL_STATIC(0x74c5d0u,74c);
}
B74dd59:L74dd59:{c.instructions+=4;NFSU2_TR(0x74dd59);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74dd5d:{NFSU2_TR(0x74dd5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74dd60:{NFSU2_TR(0x74dd60);
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
B74dd63:{NFSU2_TR(0x74dd63);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L74de1d;}}
}
B74dd69:L74dd69:{c.instructions+=2;NFSU2_TR(0x74dd69);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74dd6d:{NFSU2_TR(0x74dd6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x74de28ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74dd74:L74dd74:{c.instructions+=2;NFSU2_TR(0x74dd74);
w4(R+12,u32(0x1ull));
}
B74dd79:{NFSU2_TR(0x74dd79);
{goto L74dd80;}
}
B74dd7b:L74dd7b:{c.instructions+=1;NFSU2_TR(0x74dd7b);
w4(R+20,u32(0x5244454dull));
}
B74dd80:L74dd80:{c.instructions+=9;NFSU2_TR(0x74dd80);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74dd84:{NFSU2_TR(0x74dd84);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B74dd88:{NFSU2_TR(0x74dd88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dd89:{NFSU2_TR(0x74dd89);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dd8a:{NFSU2_TR(0x74dd8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dd8b:{NFSU2_TR(0x74dd8b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dd8c:{NFSU2_TR(0x74dd8c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dd8d:{NFSU2_TR(0x74dd8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dd8e:{NFSU2_TR(0x74dd8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74dd93ull));
TAIL_STATIC(0x74cbb0u,74c);
}
B74dd93:L74dd93:{c.instructions+=4;NFSU2_TR(0x74dd93);
__builtin_memmove((R+12),(R+0),4);
}
B74dd95:{NFSU2_TR(0x74dd95);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74dd98:{NFSU2_TR(0x74dd98);
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
B74dd9a:{NFSU2_TR(0x74dd9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L74de15;}}
}
B74dd9c:L74dd9c:{c.instructions+=2;NFSU2_TR(0x74dd9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74dda0:{NFSU2_TR(0x74dda0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x74de38ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74dda7:L74dda7:{c.instructions+=4;NFSU2_TR(0x74dda7);
u8 U[4];
w4(U+0,u32(0x40000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ddac:{NFSU2_TR(0x74ddac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ddad:{NFSU2_TR(0x74ddad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ddae:{NFSU2_TR(0x74ddae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74ddb3ull));
TAIL_STATIC(0x74cd70u,74c);
}
B74ddb3:L74ddb3:{c.instructions+=8;NFSU2_TR(0x74ddb3);
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
B74ddb6:{NFSU2_TR(0x74ddb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74ddb7:{NFSU2_TR(0x74ddb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74ddb8:{NFSU2_TR(0x74ddb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74ddb9:{NFSU2_TR(0x74ddb9);
__builtin_memmove((R+0),(R+12),4);
}
B74ddbb:{NFSU2_TR(0x74ddbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74ddbc:{NFSU2_TR(0x74ddbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74ddbd:{NFSU2_TR(0x74ddbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74ddbe:L74ddbe:{c.instructions+=3;NFSU2_TR(0x74ddbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ddc4:{NFSU2_TR(0x74ddc4);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x40000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74ddc9:{NFSU2_TR(0x74ddc9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74de15;}}
}
B74ddcb:L74ddcb:{c.instructions+=10;NFSU2_TR(0x74ddcb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff3ffffull))));
}
B74ddd0:{NFSU2_TR(0x74ddd0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74ddd3:{NFSU2_TR(0x74ddd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ddd9:{NFSU2_TR(0x74ddd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74ddda:{NFSU2_TR(0x74ddda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74dddb:{NFSU2_TR(0x74dddb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74dddc:{NFSU2_TR(0x74dddc);
__builtin_memmove((R+0),(R+12),4);
}
B74ddde:{NFSU2_TR(0x74ddde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74dddf:{NFSU2_TR(0x74dddf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74dde0:{NFSU2_TR(0x74dde0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74dde1:L74dde1:{c.instructions+=3;NFSU2_TR(0x74dde1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74dde7:{NFSU2_TR(0x74dde7);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x40000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74ddec:{NFSU2_TR(0x74ddec);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L74de15;}}
}
B74ddee:L74ddee:{c.instructions+=10;NFSU2_TR(0x74ddee);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffbffffull))));
}
B74ddf3:{NFSU2_TR(0x74ddf3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74ddf8:{NFSU2_TR(0x74ddf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74ddfe:{NFSU2_TR(0x74ddfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74ddff:{NFSU2_TR(0x74ddff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74de00:{NFSU2_TR(0x74de00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74de01:{NFSU2_TR(0x74de01);
__builtin_memmove((R+0),(R+12),4);
}
B74de03:{NFSU2_TR(0x74de03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74de04:{NFSU2_TR(0x74de04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74de05:{NFSU2_TR(0x74de05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74de06:L74de06:{c.instructions+=4;NFSU2_TR(0x74de06);
u8 U[4];
w4(U+0,u32(0x80000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74de0b:{NFSU2_TR(0x74de0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74de0c:{NFSU2_TR(0x74de0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74de0d:{NFSU2_TR(0x74de0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74de12ull));
TAIL_STATIC(0x74cd70u,74c);
}
B74de12:L74de12:{c.instructions+=1;NFSU2_TR(0x74de12);
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
B74de15:L74de15:{c.instructions+=7;NFSU2_TR(0x74de15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74de16:{NFSU2_TR(0x74de16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74de17:{NFSU2_TR(0x74de17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74de18:{NFSU2_TR(0x74de18);
__builtin_memmove((R+0),(R+12),4);
}
B74de1a:{NFSU2_TR(0x74de1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74de1b:{NFSU2_TR(0x74de1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74de1c:{NFSU2_TR(0x74de1c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74de1d:L74de1d:{c.instructions+=7;NFSU2_TR(0x74de1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74de1e:{NFSU2_TR(0x74de1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74de1f:{NFSU2_TR(0x74de1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74de20:{NFSU2_TR(0x74de20);
w4(R+0,u32(0xfffffffdull));
}
B74de25:{NFSU2_TR(0x74de25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74de26:{NFSU2_TR(0x74de26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B74de27:{NFSU2_TR(0x74de27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74de50:L74de50:{c.instructions+=11;NFSU2_TR(0x74de50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B74de56:{NFSU2_TR(0x74de56);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B74de5b:{NFSU2_TR(0x74de5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74de62:{NFSU2_TR(0x74de62);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74de69:{NFSU2_TR(0x74de69);
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
B74de6c:{NFSU2_TR(0x74de6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x819bfcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B74de73:{NFSU2_TR(0x74de73);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74de74:{NFSU2_TR(0x74de74);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74de75:{NFSU2_TR(0x74de75);
w4(R+20,u32(0x47525350ull));
}
B74de7a:{NFSU2_TR(0x74de7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74de7e:{NFSU2_TR(0x74de7e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L74dfe6;}}
}
B74de84:L74de84:{c.instructions+=1;NFSU2_TR(0x74de84);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x74e000ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B74de8b:L74de8b:{c.instructions+=2;NFSU2_TR(0x74de8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74de92:{NFSU2_TR(0x74de92);
{goto L74deb6;}
}
B74de94:L74de94:{c.instructions+=4;NFSU2_TR(0x74de94);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74de9b:{NFSU2_TR(0x74de9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74dea1:{NFSU2_TR(0x74dea1);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8ull))));
}
B74dea4:{NFSU2_TR(0x74dea4);
{goto L74dec1;}
}
B74dea6:L74dea6:{c.instructions+=4;NFSU2_TR(0x74dea6);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B74dead:{NFSU2_TR(0x74dead);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74deaf:{NFSU2_TR(0x74deaf);
w4(R+20,u32(0x4752564bull));
}
B74deb4:{NFSU2_TR(0x74deb4);
if(r1(R+518)){{goto L74dec7;}}
}
B74deb6:L74deb6:{c.instructions+=2;NFSU2_TR(0x74deb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74debc:{NFSU2_TR(0x74debc);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfbbd73f7ull))));
}
B74dec1:L74dec1:{c.instructions+=1;NFSU2_TR(0x74dec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B74dec7:L74dec7:{c.instructions+=10;NFSU2_TR(0x74dec7);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74dece:{NFSU2_TR(0x74dece);
u8 U[8];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74ded5:{NFSU2_TR(0x74ded5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74ded6:{NFSU2_TR(0x74ded6);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B74dedd:{NFSU2_TR(0x74dedd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dede:{NFSU2_TR(0x74dede);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dedf:{NFSU2_TR(0x74dedf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dee0:{NFSU2_TR(0x74dee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x134ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B74dee7:{NFSU2_TR(0x74dee7);
w4(R+28,u32(0x7ull));
}
B74deec:{NFSU2_TR(0x74deec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74def1ull));
TAIL_STATIC(0x74c5d0u,74c);
}
B74def1:L74def1:{c.instructions+=4;NFSU2_TR(0x74def1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B74def4:{NFSU2_TR(0x74def4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4752564bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B74defa:{NFSU2_TR(0x74defa);
__builtin_memmove((R+28),(R+0),4);
}
B74defc:{NFSU2_TR(0x74defc);
if(r1(R+518)){{goto L74df28;}}
}
B74defe:L74defe:{c.instructions+=8;NFSU2_TR(0x74defe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74df02:{NFSU2_TR(0x74df02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df03:{NFSU2_TR(0x74df03);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df05:{NFSU2_TR(0x74df05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df06:{NFSU2_TR(0x74df06);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df07:{NFSU2_TR(0x74df07);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df08:{NFSU2_TR(0x74df08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df09:{NFSU2_TR(0x74df09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74df0eull));
TAIL_STATIC(0x74cbb0u,74c);
}
B74df0e:L74df0e:{c.instructions+=7;NFSU2_TR(0x74df0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B74df11:{NFSU2_TR(0x74df11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74df12:{NFSU2_TR(0x74df12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74df13:{NFSU2_TR(0x74df13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74df14:{NFSU2_TR(0x74df14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74df15:{NFSU2_TR(0x74df15);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74df1c:{NFSU2_TR(0x74df1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74df21ull));
TAIL_STATIC(0x76115eu,761);
}
B74df21:L74df21:{c.instructions+=2;NFSU2_TR(0x74df21);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74df27:{NFSU2_TR(0x74df27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74df28:L74df28:{c.instructions+=3;NFSU2_TR(0x74df28);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B74df2a:{NFSU2_TR(0x74df2a);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B74df2f:{NFSU2_TR(0x74df2f);
if(r1(R+518)){{goto L74df49;}}
}
B74df31:L74df31:{c.instructions+=6;NFSU2_TR(0x74df31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df32:{NFSU2_TR(0x74df32);
u8 U[4];
w4(U+0,u32(0x7a10d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df37:{NFSU2_TR(0x74df37);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74df3b:{NFSU2_TR(0x74df3b);
u8 U[4];
w4(U+0,u32(0xfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df40:{NFSU2_TR(0x74df40);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df41:{NFSU2_TR(0x74df41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74df46ull));
TAIL_STATIC(0x741a50u,741);
}
B74df46:L74df46:{c.instructions+=1;NFSU2_TR(0x74df46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B74df49:L74df49:{c.instructions+=7;NFSU2_TR(0x74df49);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74df4f:{NFSU2_TR(0x74df4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df50:{NFSU2_TR(0x74df50);
u8 U[4];
w4(U+0,u32(0x7d2f10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df55:{NFSU2_TR(0x74df55);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74df59:{NFSU2_TR(0x74df59);
u8 U[4];
w4(U+0,u32(0xfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df5e:{NFSU2_TR(0x74df5e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df5f:{NFSU2_TR(0x74df5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74df64ull));
TAIL_STATIC(0x741a50u,741);
}
B74df64:L74df64:{c.instructions+=6;NFSU2_TR(0x74df64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df65:{NFSU2_TR(0x74df65);
u8 U[4];
w4(U+0,u32(0x7d2d64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df6a:{NFSU2_TR(0x74df6a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B74df6e:{NFSU2_TR(0x74df6e);
u8 U[4];
w4(U+0,u32(0xfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df73:{NFSU2_TR(0x74df73);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df74:{NFSU2_TR(0x74df74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74df79ull));
TAIL_STATIC(0x741690u,741);
}
B74df79:L74df79:{c.instructions+=7;NFSU2_TR(0x74df79);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd08ull))));
__builtin_memmove((R+0),(U+0),4);
}
B74df7f:{NFSU2_TR(0x74df7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df80:{NFSU2_TR(0x74df80);
u8 U[4];
w4(U+0,u32(0x7d2f2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df85:{NFSU2_TR(0x74df85);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74df89:{NFSU2_TR(0x74df89);
u8 U[4];
w4(U+0,u32(0xfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df8e:{NFSU2_TR(0x74df8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df8f:{NFSU2_TR(0x74df8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74df94ull));
TAIL_STATIC(0x741a50u,741);
}
B74df94:L74df94:{c.instructions+=7;NFSU2_TR(0x74df94);
u8 U[8];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74df9b:{NFSU2_TR(0x74df9b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74df9c:{NFSU2_TR(0x74df9c);
u8 U[4];
w4(U+0,u32(0x7d2910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dfa1:{NFSU2_TR(0x74dfa1);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B74dfa5:{NFSU2_TR(0x74dfa5);
u8 U[4];
w4(U+0,u32(0xfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dfaa:{NFSU2_TR(0x74dfaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dfab:{NFSU2_TR(0x74dfab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74dfb0ull));
TAIL_STATIC(0x741690u,741);
}
B74dfb0:L74dfb0:{c.instructions+=9;NFSU2_TR(0x74dfb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B74dfb3:{NFSU2_TR(0x74dfb3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B74dfb6:{NFSU2_TR(0x74dfb6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dfb8:{NFSU2_TR(0x74dfb8);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B74dfbc:{NFSU2_TR(0x74dfbc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dfbd:{NFSU2_TR(0x74dfbd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dfbf:{NFSU2_TR(0x74dfbf);
u8 U[4];
w4(U+0,u32(0x4752564bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dfc4:{NFSU2_TR(0x74dfc4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B74dfc5:{NFSU2_TR(0x74dfc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74dfcaull));
TAIL_STATIC(0x7549f0u,754);
}
B74dfca:L74dfca:{c.instructions+=8;NFSU2_TR(0x74dfca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B74dfcd:{NFSU2_TR(0x74dfcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B74dfce:{NFSU2_TR(0x74dfce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B74dfcf:{NFSU2_TR(0x74dfcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74dfd0:{NFSU2_TR(0x74dfd0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B74dfd2:{NFSU2_TR(0x74dfd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74dfd3:{NFSU2_TR(0x74dfd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74dfda:{NFSU2_TR(0x74dfda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74dfdfull));
TAIL_STATIC(0x76115eu,761);
}
B74dfdf:L74dfdf:{c.instructions+=2;NFSU2_TR(0x74dfdf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74dfe5:{NFSU2_TR(0x74dfe5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B74dfe6:L74dfe6:{c.instructions+=5;NFSU2_TR(0x74dfe6);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B74dfed:{NFSU2_TR(0x74dfed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B74dfee:{NFSU2_TR(0x74dfee);
w4(R+0,u32(0xfffffffdull));
}
B74dff3:{NFSU2_TR(0x74dff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B74dff4:{NFSU2_TR(0x74dff4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x74dff9ull));
TAIL_STATIC(0x76115eu,761);
}
B74dff9:L74dff9:{c.instructions+=2;NFSU2_TR(0x74dff9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x104ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B74dfff:{NFSU2_TR(0x74dfff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x74d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
