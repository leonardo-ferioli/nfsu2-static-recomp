#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48c(u8* __restrict R,Cpu& c);
u32 body_48e(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x48d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x48d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_48d(u8* __restrict R,Cpu& c);
u32 page_48d(Cpu& c){return body_48d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_48d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x48d003:goto L48d003;
case 0x48d005:c.instructions+=7;goto B48d005;
case 0x48d008:c.instructions+=6;goto B48d008;
case 0x48d009:c.instructions+=5;goto B48d009;
case 0x48d00b:c.instructions+=4;goto B48d00b;
case 0x48d00d:c.instructions+=3;goto B48d00d;
case 0x48d00f:c.instructions+=2;goto B48d00f;
case 0x48d012:c.instructions+=1;goto B48d012;
case 0x48d018:goto L48d018;
case 0x48d01c:c.instructions+=7;goto B48d01c;
case 0x48d01d:c.instructions+=6;goto B48d01d;
case 0x48d020:c.instructions+=5;goto B48d020;
case 0x48d021:c.instructions+=4;goto B48d021;
case 0x48d025:c.instructions+=3;goto B48d025;
case 0x48d02a:c.instructions+=2;goto B48d02a;
case 0x48d02b:c.instructions+=1;goto B48d02b;
case 0x48d030:goto L48d030;
case 0x48d037:c.instructions+=9;goto B48d037;
case 0x48d03a:c.instructions+=8;goto B48d03a;
case 0x48d03d:c.instructions+=7;goto B48d03d;
case 0x48d03f:c.instructions+=6;goto B48d03f;
case 0x48d042:c.instructions+=5;goto B48d042;
case 0x48d044:c.instructions+=4;goto B48d044;
case 0x48d046:c.instructions+=3;goto B48d046;
case 0x48d04a:c.instructions+=2;goto B48d04a;
case 0x48d052:c.instructions+=1;goto B48d052;
case 0x48d054:goto L48d054;
case 0x48d055:c.instructions+=1;goto B48d055;
case 0x48d05a:goto L48d05a;
case 0x48d05d:c.instructions+=2;goto B48d05d;
case 0x48d05f:c.instructions+=1;goto B48d05f;
case 0x48d061:goto L48d061;
case 0x48d065:c.instructions+=3;goto B48d065;
case 0x48d068:c.instructions+=2;goto B48d068;
case 0x48d06d:c.instructions+=1;goto B48d06d;
case 0x48d071:goto L48d071;
case 0x48d075:c.instructions+=3;goto B48d075;
case 0x48d076:c.instructions+=2;goto B48d076;
case 0x48d077:c.instructions+=1;goto B48d077;
case 0x48d07c:goto L48d07c;
case 0x48d07f:c.instructions+=10;goto B48d07f;
case 0x48d082:c.instructions+=9;goto B48d082;
case 0x48d084:c.instructions+=8;goto B48d084;
case 0x48d086:c.instructions+=7;goto B48d086;
case 0x48d087:c.instructions+=6;goto B48d087;
case 0x48d08a:c.instructions+=5;goto B48d08a;
case 0x48d08c:c.instructions+=4;goto B48d08c;
case 0x48d08e:c.instructions+=3;goto B48d08e;
case 0x48d08f:c.instructions+=2;goto B48d08f;
case 0x48d090:c.instructions+=1;goto B48d090;
case 0x48d095:goto L48d095;
case 0x48d096:c.instructions+=1;goto B48d096;
case 0x48d09b:goto L48d09b;
case 0x48d09f:c.instructions+=1;goto B48d09f;
case 0x48d0a2:goto L48d0a2;
case 0x48d0a3:c.instructions+=3;goto B48d0a3;
case 0x48d0a4:c.instructions+=2;goto B48d0a4;
case 0x48d0a5:c.instructions+=1;goto B48d0a5;
case 0x48d0a8:goto L48d0a8;
case 0x48d0af:c.instructions+=3;goto B48d0af;
case 0x48d0b2:c.instructions+=2;goto B48d0b2;
case 0x48d0b4:c.instructions+=1;goto B48d0b4;
case 0x48d0b6:goto L48d0b6;
case 0x48d0bc:goto L48d0bc;
case 0x48d0c0:c.instructions+=2;goto B48d0c0;
case 0x48d0c5:c.instructions+=1;goto B48d0c5;
case 0x48d0c7:goto L48d0c7;
case 0x48d0ca:c.instructions+=2;goto B48d0ca;
case 0x48d0cc:c.instructions+=1;goto B48d0cc;
case 0x48d0ce:goto L48d0ce;
case 0x48d0d1:c.instructions+=2;goto B48d0d1;
case 0x48d0d2:c.instructions+=1;goto B48d0d2;
case 0x48d0d4:goto L48d0d4;
case 0x48d0d7:goto L48d0d7;
case 0x48d0d9:c.instructions+=5;goto B48d0d9;
case 0x48d0dc:c.instructions+=4;goto B48d0dc;
case 0x48d0df:c.instructions+=3;goto B48d0df;
case 0x48d0e3:c.instructions+=2;goto B48d0e3;
case 0x48d0e6:c.instructions+=1;goto B48d0e6;
case 0x48d0e9:goto L48d0e9;
case 0x48d0ea:c.instructions+=5;goto B48d0ea;
case 0x48d0eb:c.instructions+=4;goto B48d0eb;
case 0x48d0ec:c.instructions+=3;goto B48d0ec;
case 0x48d0ed:c.instructions+=2;goto B48d0ed;
case 0x48d0f3:c.instructions+=1;goto B48d0f3;
case 0x48d100:goto L48d100;
case 0x48d106:c.instructions+=7;goto B48d106;
case 0x48d107:c.instructions+=6;goto B48d107;
case 0x48d10e:c.instructions+=5;goto B48d10e;
case 0x48d110:c.instructions+=4;goto B48d110;
case 0x48d111:c.instructions+=3;goto B48d111;
case 0x48d113:c.instructions+=2;goto B48d113;
case 0x48d117:c.instructions+=1;goto B48d117;
case 0x48d11d:goto L48d11d;
case 0x48d11e:c.instructions+=4;goto B48d11e;
case 0x48d125:c.instructions+=3;goto B48d125;
case 0x48d127:c.instructions+=2;goto B48d127;
case 0x48d128:c.instructions+=1;goto B48d128;
case 0x48d12e:goto L48d12e;
case 0x48d135:c.instructions+=2;goto B48d135;
case 0x48d137:c.instructions+=1;goto B48d137;
case 0x48d13d:goto L48d13d;
case 0x48d13f:c.instructions+=4;goto B48d13f;
case 0x48d141:c.instructions+=3;goto B48d141;
case 0x48d145:c.instructions+=2;goto B48d145;
case 0x48d148:c.instructions+=1;goto B48d148;
case 0x48d14a:goto L48d14a;
case 0x48d14b:c.instructions+=7;goto B48d14b;
case 0x48d14f:c.instructions+=6;goto B48d14f;
case 0x48d150:c.instructions+=5;goto B48d150;
case 0x48d151:c.instructions+=4;goto B48d151;
case 0x48d152:c.instructions+=3;goto B48d152;
case 0x48d153:c.instructions+=2;goto B48d153;
case 0x48d159:c.instructions+=1;goto B48d159;
case 0x48d15c:goto L48d15c;
case 0x48d15f:c.instructions+=2;goto B48d15f;
case 0x48d161:c.instructions+=1;goto B48d161;
case 0x48d163:goto L48d163;
case 0x48d165:c.instructions+=3;goto B48d165;
case 0x48d168:c.instructions+=2;goto B48d168;
case 0x48d16e:c.instructions+=1;goto B48d16e;
case 0x48d173:goto L48d173;
case 0x48d175:c.instructions+=13;goto B48d175;
case 0x48d177:c.instructions+=12;goto B48d177;
case 0x48d179:c.instructions+=11;goto B48d179;
case 0x48d17b:c.instructions+=10;goto B48d17b;
case 0x48d17d:c.instructions+=9;goto B48d17d;
case 0x48d180:c.instructions+=8;goto B48d180;
case 0x48d181:c.instructions+=7;goto B48d181;
case 0x48d182:c.instructions+=6;goto B48d182;
case 0x48d185:c.instructions+=5;goto B48d185;
case 0x48d186:c.instructions+=4;goto B48d186;
case 0x48d18a:c.instructions+=3;goto B48d18a;
case 0x48d18f:c.instructions+=2;goto B48d18f;
case 0x48d190:c.instructions+=1;goto B48d190;
case 0x48d195:goto L48d195;
case 0x48d197:c.instructions+=9;goto B48d197;
case 0x48d19a:c.instructions+=8;goto B48d19a;
case 0x48d19e:c.instructions+=7;goto B48d19e;
case 0x48d1a1:c.instructions+=6;goto B48d1a1;
case 0x48d1a4:c.instructions+=5;goto B48d1a4;
case 0x48d1a6:c.instructions+=4;goto B48d1a6;
case 0x48d1a9:c.instructions+=3;goto B48d1a9;
case 0x48d1b1:c.instructions+=2;goto B48d1b1;
case 0x48d1b5:c.instructions+=1;goto B48d1b5;
case 0x48d1b7:goto L48d1b7;
case 0x48d1bf:c.instructions+=1;goto B48d1bf;
case 0x48d1c1:goto L48d1c1;
case 0x48d1c3:c.instructions+=1;goto B48d1c3;
case 0x48d1c5:goto L48d1c5;
case 0x48d1c6:c.instructions+=1;goto B48d1c6;
case 0x48d1cb:goto L48d1cb;
case 0x48d1ce:c.instructions+=2;goto B48d1ce;
case 0x48d1d0:c.instructions+=1;goto B48d1d0;
case 0x48d1d2:goto L48d1d2;
case 0x48d1d6:c.instructions+=3;goto B48d1d6;
case 0x48d1d9:c.instructions+=2;goto B48d1d9;
case 0x48d1de:c.instructions+=1;goto B48d1de;
case 0x48d1e2:goto L48d1e2;
case 0x48d1e6:c.instructions+=3;goto B48d1e6;
case 0x48d1e7:c.instructions+=2;goto B48d1e7;
case 0x48d1e8:c.instructions+=1;goto B48d1e8;
case 0x48d1ed:goto L48d1ed;
case 0x48d1f1:c.instructions+=24;goto B48d1f1;
case 0x48d1f4:c.instructions+=23;goto B48d1f4;
case 0x48d1fa:c.instructions+=22;goto B48d1fa;
case 0x48d1fe:c.instructions+=21;goto B48d1fe;
case 0x48d201:c.instructions+=20;goto B48d201;
case 0x48d204:c.instructions+=19;goto B48d204;
case 0x48d207:c.instructions+=18;goto B48d207;
case 0x48d208:c.instructions+=17;goto B48d208;
case 0x48d209:c.instructions+=16;goto B48d209;
case 0x48d20b:c.instructions+=15;goto B48d20b;
case 0x48d210:c.instructions+=14;goto B48d210;
case 0x48d211:c.instructions+=13;goto B48d211;
case 0x48d214:c.instructions+=12;goto B48d214;
case 0x48d218:c.instructions+=11;goto B48d218;
case 0x48d21a:c.instructions+=10;goto B48d21a;
case 0x48d21b:c.instructions+=9;goto B48d21b;
case 0x48d21e:c.instructions+=8;goto B48d21e;
case 0x48d21f:c.instructions+=7;goto B48d21f;
case 0x48d222:c.instructions+=6;goto B48d222;
case 0x48d223:c.instructions+=5;goto B48d223;
case 0x48d225:c.instructions+=4;goto B48d225;
case 0x48d227:c.instructions+=3;goto B48d227;
case 0x48d229:c.instructions+=2;goto B48d229;
case 0x48d22a:c.instructions+=1;goto B48d22a;
case 0x48d22f:goto L48d22f;
case 0x48d232:goto L48d232;
case 0x48d234:c.instructions+=2;goto B48d234;
case 0x48d235:c.instructions+=1;goto B48d235;
case 0x48d23a:goto L48d23a;
case 0x48d23b:c.instructions+=1;goto B48d23b;
case 0x48d23c:goto L48d23c;
case 0x48d23d:c.instructions+=3;goto B48d23d;
case 0x48d23e:c.instructions+=2;goto B48d23e;
case 0x48d244:c.instructions+=1;goto B48d244;
case 0x48d250:goto L48d250;
case 0x48d251:c.instructions+=5;goto B48d251;
case 0x48d252:c.instructions+=4;goto B48d252;
case 0x48d256:c.instructions+=3;goto B48d256;
case 0x48d258:c.instructions+=2;goto B48d258;
case 0x48d25a:c.instructions+=1;goto B48d25a;
case 0x48d25c:goto L48d25c;
case 0x48d25d:c.instructions+=3;goto B48d25d;
case 0x48d261:c.instructions+=2;goto B48d261;
case 0x48d263:c.instructions+=1;goto B48d263;
case 0x48d265:goto L48d265;
case 0x48d266:c.instructions+=1;goto B48d266;
case 0x48d26b:goto L48d26b;
case 0x48d26d:c.instructions+=2;goto B48d26d;
case 0x48d26f:c.instructions+=1;goto B48d26f;
case 0x48d271:goto L48d271;
case 0x48d277:c.instructions+=2;goto B48d277;
case 0x48d279:c.instructions+=1;goto B48d279;
case 0x48d27b:goto L48d27b;
case 0x48d281:c.instructions+=2;goto B48d281;
case 0x48d283:c.instructions+=1;goto B48d283;
case 0x48d285:goto L48d285;
case 0x48d28b:c.instructions+=6;goto B48d28b;
case 0x48d28d:c.instructions+=5;goto B48d28d;
case 0x48d28f:c.instructions+=4;goto B48d28f;
case 0x48d290:c.instructions+=3;goto B48d290;
case 0x48d291:c.instructions+=2;goto B48d291;
case 0x48d292:c.instructions+=1;goto B48d292;
case 0x48d297:goto L48d297;
case 0x48d299:c.instructions+=3;goto B48d299;
case 0x48d29c:c.instructions+=2;goto B48d29c;
case 0x48d29e:c.instructions+=1;goto B48d29e;
case 0x48d2a0:goto L48d2a0;
case 0x48d2a4:c.instructions+=2;goto B48d2a4;
case 0x48d2a9:c.instructions+=1;goto B48d2a9;
case 0x48d2ab:goto L48d2ab;
case 0x48d2b0:goto L48d2b0;
case 0x48d2b3:c.instructions+=2;goto B48d2b3;
case 0x48d2b5:c.instructions+=1;goto B48d2b5;
case 0x48d2b7:goto L48d2b7;
case 0x48d2b9:c.instructions+=5;goto B48d2b9;
case 0x48d2ba:c.instructions+=4;goto B48d2ba;
case 0x48d2bd:c.instructions+=3;goto B48d2bd;
case 0x48d2be:c.instructions+=2;goto B48d2be;
case 0x48d2bf:c.instructions+=1;goto B48d2bf;
case 0x48d2c2:goto L48d2c2;
case 0x48d2c3:c.instructions+=3;goto B48d2c3;
case 0x48d2c4:c.instructions+=2;goto B48d2c4;
case 0x48d2c6:c.instructions+=1;goto B48d2c6;
case 0x48d2cb:goto L48d2cb;
case 0x48d2cc:goto L48d2cc;
case 0x48d2cd:c.instructions+=2;goto B48d2cd;
case 0x48d2ce:c.instructions+=1;goto B48d2ce;
case 0x48d2e0:goto L48d2e0;
case 0x48d2e4:c.instructions+=6;goto B48d2e4;
case 0x48d2e5:c.instructions+=5;goto B48d2e5;
case 0x48d2e7:c.instructions+=4;goto B48d2e7;
case 0x48d2e9:c.instructions+=3;goto B48d2e9;
case 0x48d2ea:c.instructions+=2;goto B48d2ea;
case 0x48d2ec:c.instructions+=1;goto B48d2ec;
case 0x48d2ee:goto L48d2ee;
case 0x48d2ef:c.instructions+=1;goto B48d2ef;
case 0x48d2f0:goto L48d2f0;
case 0x48d2f4:c.instructions+=3;goto B48d2f4;
case 0x48d2f7:c.instructions+=2;goto B48d2f7;
case 0x48d2f9:c.instructions+=1;goto B48d2f9;
case 0x48d2fb:goto L48d2fb;
case 0x48d2fc:c.instructions+=2;goto B48d2fc;
case 0x48d2fe:c.instructions+=1;goto B48d2fe;
case 0x48d303:goto L48d303;
case 0x48d305:c.instructions+=2;goto B48d305;
case 0x48d307:c.instructions+=1;goto B48d307;
case 0x48d309:goto L48d309;
case 0x48d30f:c.instructions+=2;goto B48d30f;
case 0x48d311:c.instructions+=1;goto B48d311;
case 0x48d313:goto L48d313;
case 0x48d319:c.instructions+=2;goto B48d319;
case 0x48d31b:c.instructions+=1;goto B48d31b;
case 0x48d31d:goto L48d31d;
case 0x48d323:c.instructions+=6;goto B48d323;
case 0x48d325:c.instructions+=5;goto B48d325;
case 0x48d327:c.instructions+=4;goto B48d327;
case 0x48d328:c.instructions+=3;goto B48d328;
case 0x48d329:c.instructions+=2;goto B48d329;
case 0x48d32a:c.instructions+=1;goto B48d32a;
case 0x48d32f:goto L48d32f;
case 0x48d331:c.instructions+=3;goto B48d331;
case 0x48d334:c.instructions+=2;goto B48d334;
case 0x48d336:c.instructions+=1;goto B48d336;
case 0x48d338:goto L48d338;
case 0x48d33c:c.instructions+=2;goto B48d33c;
case 0x48d341:c.instructions+=1;goto B48d341;
case 0x48d343:goto L48d343;
case 0x48d348:goto L48d348;
case 0x48d34b:c.instructions+=2;goto B48d34b;
case 0x48d34d:c.instructions+=1;goto B48d34d;
case 0x48d34f:goto L48d34f;
case 0x48d351:c.instructions+=2;goto B48d351;
case 0x48d354:c.instructions+=1;goto B48d354;
case 0x48d356:goto L48d356;
case 0x48d357:c.instructions+=3;goto B48d357;
case 0x48d358:c.instructions+=2;goto B48d358;
case 0x48d35a:c.instructions+=1;goto B48d35a;
case 0x48d35f:goto L48d35f;
case 0x48d363:c.instructions+=3;goto B48d363;
case 0x48d364:c.instructions+=2;goto B48d364;
case 0x48d366:c.instructions+=1;goto B48d366;
case 0x48d368:goto L48d368;
case 0x48d369:c.instructions+=1;goto B48d369;
case 0x48d36a:goto L48d36a;
case 0x48d36b:c.instructions+=2;goto B48d36b;
case 0x48d36c:c.instructions+=1;goto B48d36c;
case 0x48d370:goto L48d370;
case 0x48d374:c.instructions+=5;goto B48d374;
case 0x48d375:c.instructions+=4;goto B48d375;
case 0x48d376:c.instructions+=3;goto B48d376;
case 0x48d377:c.instructions+=2;goto B48d377;
case 0x48d379:c.instructions+=1;goto B48d379;
case 0x48d37e:goto L48d37e;
case 0x48d380:c.instructions+=2;goto B48d380;
case 0x48d382:c.instructions+=1;goto B48d382;
case 0x48d384:goto L48d384;
case 0x48d38a:c.instructions+=4;goto B48d38a;
case 0x48d38c:c.instructions+=3;goto B48d38c;
case 0x48d38d:c.instructions+=2;goto B48d38d;
case 0x48d393:c.instructions+=1;goto B48d393;
case 0x48d395:goto L48d395;
case 0x48d396:c.instructions+=1;goto B48d396;
case 0x48d398:goto L48d398;
case 0x48d39b:c.instructions+=2;goto B48d39b;
case 0x48d39d:c.instructions+=1;goto B48d39d;
case 0x48d39f:goto L48d39f;
case 0x48d3a1:c.instructions+=5;goto B48d3a1;
case 0x48d3a2:c.instructions+=4;goto B48d3a2;
case 0x48d3a3:c.instructions+=3;goto B48d3a3;
case 0x48d3a5:c.instructions+=2;goto B48d3a5;
case 0x48d3ab:c.instructions+=1;goto B48d3ab;
case 0x48d3b0:goto L48d3b0;
case 0x48d3b3:c.instructions+=2;goto B48d3b3;
case 0x48d3b4:c.instructions+=1;goto B48d3b4;
case 0x48d3b6:goto L48d3b6;
case 0x48d3b7:goto L48d3b7;
case 0x48d3b8:goto L48d3b8;
case 0x48d3b9:c.instructions+=2;goto B48d3b9;
case 0x48d3ba:c.instructions+=1;goto B48d3ba;
case 0x48d3c0:goto L48d3c0;
case 0x48d3c1:c.instructions+=6;goto B48d3c1;
case 0x48d3c2:c.instructions+=5;goto B48d3c2;
case 0x48d3c5:c.instructions+=4;goto B48d3c5;
case 0x48d3c6:c.instructions+=3;goto B48d3c6;
case 0x48d3c9:c.instructions+=2;goto B48d3c9;
case 0x48d3cb:c.instructions+=1;goto B48d3cb;
case 0x48d3cd:goto L48d3cd;
case 0x48d3d1:goto L48d3d1;
case 0x48d3d3:c.instructions+=1;goto B48d3d3;
case 0x48d3d5:goto L48d3d5;
case 0x48d3d8:c.instructions+=3;goto B48d3d8;
case 0x48d3d9:c.instructions+=2;goto B48d3d9;
case 0x48d3da:c.instructions+=1;goto B48d3da;
case 0x48d3df:goto L48d3df;
case 0x48d3e2:c.instructions+=2;goto B48d3e2;
case 0x48d3e4:c.instructions+=1;goto B48d3e4;
case 0x48d3e6:goto L48d3e6;
case 0x48d3ec:c.instructions+=2;goto B48d3ec;
case 0x48d3ee:c.instructions+=1;goto B48d3ee;
case 0x48d3f0:goto L48d3f0;
case 0x48d3f6:c.instructions+=2;goto B48d3f6;
case 0x48d3f8:c.instructions+=1;goto B48d3f8;
case 0x48d3fa:goto L48d3fa;
case 0x48d3fc:c.instructions+=2;goto B48d3fc;
case 0x48d3fe:c.instructions+=1;goto B48d3fe;
case 0x48d400:goto L48d400;
case 0x48d401:c.instructions+=4;goto B48d401;
case 0x48d402:c.instructions+=3;goto B48d402;
case 0x48d404:c.instructions+=2;goto B48d404;
case 0x48d405:c.instructions+=1;goto B48d405;
case 0x48d408:goto L48d408;
case 0x48d409:c.instructions+=4;goto B48d409;
case 0x48d40a:c.instructions+=3;goto B48d40a;
case 0x48d40f:c.instructions+=2;goto B48d40f;
case 0x48d410:c.instructions+=1;goto B48d410;
case 0x48d420:goto L48d420;
case 0x48d426:c.instructions+=10;goto B48d426;
case 0x48d427:c.instructions+=9;goto B48d427;
case 0x48d428:c.instructions+=8;goto B48d428;
case 0x48d42a:c.instructions+=7;goto B48d42a;
case 0x48d42b:c.instructions+=6;goto B48d42b;
case 0x48d42d:c.instructions+=5;goto B48d42d;
case 0x48d42e:c.instructions+=4;goto B48d42e;
case 0x48d432:c.instructions+=3;goto B48d432;
case 0x48d436:c.instructions+=2;goto B48d436;
case 0x48d43a:c.instructions+=1;goto B48d43a;
case 0x48d440:goto L48d440;
case 0x48d447:c.instructions+=4;goto B48d447;
case 0x48d449:c.instructions+=3;goto B48d449;
case 0x48d44b:c.instructions+=2;goto B48d44b;
case 0x48d44f:c.instructions+=1;goto B48d44f;
case 0x48d455:goto L48d455;
case 0x48d45c:c.instructions+=4;goto B48d45c;
case 0x48d45f:c.instructions+=3;goto B48d45f;
case 0x48d460:c.instructions+=2;goto B48d460;
case 0x48d462:c.instructions+=1;goto B48d462;
case 0x48d467:goto L48d467;
case 0x48d469:c.instructions+=2;goto B48d469;
case 0x48d46b:c.instructions+=1;goto B48d46b;
case 0x48d471:goto L48d471;
case 0x48d476:c.instructions+=1;goto B48d476;
case 0x48d47c:goto L48d47c;
case 0x48d480:c.instructions+=1;goto B48d480;
case 0x48d486:goto L48d486;
case 0x48d487:c.instructions+=2;goto B48d487;
case 0x48d489:c.instructions+=1;goto B48d489;
case 0x48d48e:goto L48d48e;
case 0x48d490:c.instructions+=5;goto B48d490;
case 0x48d494:c.instructions+=4;goto B48d494;
case 0x48d496:c.instructions+=3;goto B48d496;
case 0x48d498:c.instructions+=2;goto B48d498;
case 0x48d49a:c.instructions+=1;goto B48d49a;
case 0x48d49c:goto L48d49c;
case 0x48d4a0:goto L48d4a0;
case 0x48d4a3:c.instructions+=6;goto B48d4a3;
case 0x48d4a6:c.instructions+=5;goto B48d4a6;
case 0x48d4a8:c.instructions+=4;goto B48d4a8;
case 0x48d4ac:c.instructions+=3;goto B48d4ac;
case 0x48d4ad:c.instructions+=2;goto B48d4ad;
case 0x48d4af:c.instructions+=1;goto B48d4af;
case 0x48d4b1:goto L48d4b1;
case 0x48d4b3:c.instructions+=1;goto B48d4b3;
case 0x48d4b9:goto L48d4b9;
case 0x48d4bd:c.instructions+=2;goto B48d4bd;
case 0x48d4bf:c.instructions+=1;goto B48d4bf;
case 0x48d4c5:goto L48d4c5;
case 0x48d4c8:c.instructions+=14;goto B48d4c8;
case 0x48d4cb:c.instructions+=13;goto B48d4cb;
case 0x48d4cd:c.instructions+=12;goto B48d4cd;
case 0x48d4cf:c.instructions+=11;goto B48d4cf;
case 0x48d4d2:c.instructions+=10;goto B48d4d2;
case 0x48d4d5:c.instructions+=9;goto B48d4d5;
case 0x48d4d8:c.instructions+=8;goto B48d4d8;
case 0x48d4d9:c.instructions+=7;goto B48d4d9;
case 0x48d4da:c.instructions+=6;goto B48d4da;
case 0x48d4dd:c.instructions+=5;goto B48d4dd;
case 0x48d4de:c.instructions+=4;goto B48d4de;
case 0x48d4e2:c.instructions+=3;goto B48d4e2;
case 0x48d4e7:c.instructions+=2;goto B48d4e7;
case 0x48d4e8:c.instructions+=1;goto B48d4e8;
case 0x48d4ed:goto L48d4ed;
case 0x48d4f1:c.instructions+=9;goto B48d4f1;
case 0x48d4f4:c.instructions+=8;goto B48d4f4;
case 0x48d4f6:c.instructions+=7;goto B48d4f6;
case 0x48d4f9:c.instructions+=6;goto B48d4f9;
case 0x48d4fc:c.instructions+=5;goto B48d4fc;
case 0x48d4fe:c.instructions+=4;goto B48d4fe;
case 0x48d500:c.instructions+=3;goto B48d500;
case 0x48d507:c.instructions+=2;goto B48d507;
case 0x48d50c:c.instructions+=1;goto B48d50c;
case 0x48d50e:goto L48d50e;
case 0x48d513:c.instructions+=1;goto B48d513;
case 0x48d515:goto L48d515;
case 0x48d517:c.instructions+=1;goto B48d517;
case 0x48d519:goto L48d519;
case 0x48d51b:c.instructions+=2;goto B48d51b;
case 0x48d51e:c.instructions+=1;goto B48d51e;
case 0x48d524:goto L48d524;
case 0x48d525:c.instructions+=1;goto B48d525;
case 0x48d52a:goto L48d52a;
case 0x48d52d:c.instructions+=2;goto B48d52d;
case 0x48d52f:c.instructions+=1;goto B48d52f;
case 0x48d531:goto L48d531;
case 0x48d532:c.instructions+=2;goto B48d532;
case 0x48d533:c.instructions+=1;goto B48d533;
case 0x48d538:goto L48d538;
case 0x48d53b:c.instructions+=2;goto B48d53b;
case 0x48d53e:c.instructions+=1;goto B48d53e;
case 0x48d543:goto L48d543;
case 0x48d547:c.instructions+=1;goto B48d547;
case 0x48d54c:goto L48d54c;
case 0x48d54f:c.instructions+=1;goto B48d54f;
case 0x48d555:goto L48d555;
case 0x48d559:c.instructions+=1;goto B48d559;
case 0x48d55f:goto L48d55f;
case 0x48d560:c.instructions+=6;goto B48d560;
case 0x48d563:c.instructions+=5;goto B48d563;
case 0x48d564:c.instructions+=4;goto B48d564;
case 0x48d56b:c.instructions+=3;goto B48d56b;
case 0x48d570:c.instructions+=2;goto B48d570;
case 0x48d571:c.instructions+=1;goto B48d571;
case 0x48d576:goto L48d576;
case 0x48d57a:c.instructions+=8;goto B48d57a;
case 0x48d57c:c.instructions+=7;goto B48d57c;
case 0x48d57f:c.instructions+=6;goto B48d57f;
case 0x48d586:c.instructions+=5;goto B48d586;
case 0x48d589:c.instructions+=4;goto B48d589;
case 0x48d58b:c.instructions+=3;goto B48d58b;
case 0x48d58d:c.instructions+=2;goto B48d58d;
case 0x48d592:c.instructions+=1;goto B48d592;
case 0x48d594:goto L48d594;
case 0x48d596:c.instructions+=2;goto B48d596;
case 0x48d599:c.instructions+=1;goto B48d599;
case 0x48d59f:goto L48d59f;
case 0x48d5a2:c.instructions+=3;goto B48d5a2;
case 0x48d5a3:c.instructions+=2;goto B48d5a3;
case 0x48d5aa:c.instructions+=1;goto B48d5aa;
case 0x48d5af:goto L48d5af;
case 0x48d5b2:c.instructions+=2;goto B48d5b2;
case 0x48d5b4:c.instructions+=1;goto B48d5b4;
case 0x48d5b6:goto L48d5b6;
case 0x48d5b7:c.instructions+=2;goto B48d5b7;
case 0x48d5b8:c.instructions+=1;goto B48d5b8;
case 0x48d5bd:goto L48d5bd;
case 0x48d5c0:c.instructions+=2;goto B48d5c0;
case 0x48d5c3:c.instructions+=1;goto B48d5c3;
case 0x48d5c5:goto L48d5c5;
case 0x48d5c9:goto L48d5c9;
case 0x48d5cb:c.instructions+=1;goto B48d5cb;
case 0x48d5cd:goto L48d5cd;
case 0x48d5ce:c.instructions+=1;goto B48d5ce;
case 0x48d5d3:goto L48d5d3;
case 0x48d5d5:goto L48d5d5;
case 0x48d5d8:c.instructions+=1;goto B48d5d8;
case 0x48d5da:goto L48d5da;
case 0x48d5dd:c.instructions+=2;goto B48d5dd;
case 0x48d5df:c.instructions+=1;goto B48d5df;
case 0x48d5e1:goto L48d5e1;
case 0x48d5e2:c.instructions+=1;goto B48d5e2;
case 0x48d5e7:goto L48d5e7;
case 0x48d5ee:goto L48d5ee;
case 0x48d5f1:goto L48d5f1;
case 0x48d5f5:c.instructions+=6;goto B48d5f5;
case 0x48d5fc:c.instructions+=5;goto B48d5fc;
case 0x48d600:c.instructions+=4;goto B48d600;
case 0x48d601:c.instructions+=3;goto B48d601;
case 0x48d603:c.instructions+=2;goto B48d603;
case 0x48d607:c.instructions+=1;goto B48d607;
case 0x48d60d:goto L48d60d;
case 0x48d611:c.instructions+=4;goto B48d611;
case 0x48d612:c.instructions+=3;goto B48d612;
case 0x48d615:c.instructions+=2;goto B48d615;
case 0x48d619:c.instructions+=1;goto B48d619;
case 0x48d61f:goto L48d61f;
case 0x48d623:c.instructions+=6;goto B48d623;
case 0x48d624:c.instructions+=5;goto B48d624;
case 0x48d625:c.instructions+=4;goto B48d625;
case 0x48d626:c.instructions+=3;goto B48d626;
case 0x48d627:c.instructions+=2;goto B48d627;
case 0x48d62d:c.instructions+=1;goto B48d62d;
case 0x48d630:goto L48d630;
case 0x48d636:c.instructions+=6;goto B48d636;
case 0x48d637:c.instructions+=5;goto B48d637;
case 0x48d63e:c.instructions+=4;goto B48d63e;
case 0x48d63f:c.instructions+=3;goto B48d63f;
case 0x48d641:c.instructions+=2;goto B48d641;
case 0x48d646:c.instructions+=1;goto B48d646;
case 0x48d64a:goto L48d64a;
case 0x48d64c:goto L48d64c;
case 0x48d652:c.instructions+=11;goto B48d652;
case 0x48d658:c.instructions+=10;goto B48d658;
case 0x48d65c:c.instructions+=9;goto B48d65c;
case 0x48d65f:c.instructions+=8;goto B48d65f;
case 0x48d663:c.instructions+=7;goto B48d663;
case 0x48d666:c.instructions+=6;goto B48d666;
case 0x48d66d:c.instructions+=5;goto B48d66d;
case 0x48d671:c.instructions+=4;goto B48d671;
case 0x48d672:c.instructions+=3;goto B48d672;
case 0x48d676:c.instructions+=2;goto B48d676;
case 0x48d67a:c.instructions+=1;goto B48d67a;
case 0x48d67d:goto L48d67d;
case 0x48d681:c.instructions+=11;goto B48d681;
case 0x48d685:c.instructions+=10;goto B48d685;
case 0x48d689:c.instructions+=9;goto B48d689;
case 0x48d68f:c.instructions+=8;goto B48d68f;
case 0x48d693:c.instructions+=7;goto B48d693;
case 0x48d699:c.instructions+=6;goto B48d699;
case 0x48d69d:c.instructions+=5;goto B48d69d;
case 0x48d6a0:c.instructions+=4;goto B48d6a0;
case 0x48d6a2:c.instructions+=3;goto B48d6a2;
case 0x48d6a8:c.instructions+=2;goto B48d6a8;
case 0x48d6ae:c.instructions+=1;goto B48d6ae;
case 0x48d6b4:goto L48d6b4;
case 0x48d6b5:c.instructions+=6;goto B48d6b5;
case 0x48d6b9:c.instructions+=5;goto B48d6b9;
case 0x48d6ba:c.instructions+=4;goto B48d6ba;
case 0x48d6bc:c.instructions+=3;goto B48d6bc;
case 0x48d6be:c.instructions+=2;goto B48d6be;
case 0x48d6bf:c.instructions+=1;goto B48d6bf;
case 0x48d6c4:goto L48d6c4;
case 0x48d6c5:c.instructions+=5;goto B48d6c5;
case 0x48d6c9:c.instructions+=4;goto B48d6c9;
case 0x48d6ce:c.instructions+=3;goto B48d6ce;
case 0x48d6cf:c.instructions+=2;goto B48d6cf;
case 0x48d6d5:c.instructions+=1;goto B48d6d5;
case 0x48d6da:goto L48d6da;
case 0x48d6e1:c.instructions+=4;goto B48d6e1;
case 0x48d6e4:c.instructions+=3;goto B48d6e4;
case 0x48d6e7:c.instructions+=2;goto B48d6e7;
case 0x48d6ec:c.instructions+=1;goto B48d6ec;
case 0x48d6ee:goto L48d6ee;
case 0x48d6f1:c.instructions+=2;goto B48d6f1;
case 0x48d6f2:c.instructions+=1;goto B48d6f2;
case 0x48d6f7:goto L48d6f7;
case 0x48d6fb:c.instructions+=3;goto B48d6fb;
case 0x48d6fe:c.instructions+=2;goto B48d6fe;
case 0x48d700:c.instructions+=1;goto B48d700;
case 0x48d702:goto L48d702;
case 0x48d704:c.instructions+=4;goto B48d704;
case 0x48d70a:c.instructions+=3;goto B48d70a;
case 0x48d70d:c.instructions+=2;goto B48d70d;
case 0x48d712:c.instructions+=1;goto B48d712;
case 0x48d714:goto L48d714;
case 0x48d718:c.instructions+=4;goto B48d718;
case 0x48d719:c.instructions+=3;goto B48d719;
case 0x48d71f:c.instructions+=2;goto B48d71f;
case 0x48d720:c.instructions+=1;goto B48d720;
case 0x48d725:goto L48d725;
case 0x48d72b:c.instructions+=3;goto B48d72b;
case 0x48d72c:c.instructions+=2;goto B48d72c;
case 0x48d731:c.instructions+=1;goto B48d731;
case 0x48d736:goto L48d736;
case 0x48d73c:c.instructions+=2;goto B48d73c;
case 0x48d73e:c.instructions+=1;goto B48d73e;
case 0x48d740:goto L48d740;
case 0x48d746:c.instructions+=6;goto B48d746;
case 0x48d749:c.instructions+=5;goto B48d749;
case 0x48d74a:c.instructions+=4;goto B48d74a;
case 0x48d74d:c.instructions+=3;goto B48d74d;
case 0x48d74e:c.instructions+=2;goto B48d74e;
case 0x48d758:c.instructions+=1;goto B48d758;
case 0x48d75d:goto L48d75d;
case 0x48d760:c.instructions+=3;goto B48d760;
case 0x48d762:c.instructions+=2;goto B48d762;
case 0x48d76c:c.instructions+=1;goto B48d76c;
case 0x48d76e:goto L48d76e;
case 0x48d76f:c.instructions+=1;goto B48d76f;
case 0x48d771:goto L48d771;
case 0x48d774:goto L48d774;
case 0x48d775:goto L48d775;
case 0x48d776:c.instructions+=3;goto B48d776;
case 0x48d777:c.instructions+=2;goto B48d777;
case 0x48d77d:c.instructions+=1;goto B48d77d;
case 0x48d780:goto L48d780;
case 0x48d783:c.instructions+=2;goto B48d783;
case 0x48d785:c.instructions+=1;goto B48d785;
case 0x48d787:goto L48d787;
case 0x48d78a:c.instructions+=4;goto B48d78a;
case 0x48d78b:c.instructions+=3;goto B48d78b;
case 0x48d78f:c.instructions+=2;goto B48d78f;
case 0x48d791:c.instructions+=1;goto B48d791;
case 0x48d793:goto L48d793;
case 0x48d795:c.instructions+=5;goto B48d795;
case 0x48d797:c.instructions+=4;goto B48d797;
case 0x48d79a:c.instructions+=3;goto B48d79a;
case 0x48d79c:c.instructions+=2;goto B48d79c;
case 0x48d79f:c.instructions+=1;goto B48d79f;
case 0x48d7a1:goto L48d7a1;
case 0x48d7a7:c.instructions+=8;goto B48d7a7;
case 0x48d7ad:c.instructions+=7;goto B48d7ad;
case 0x48d7af:c.instructions+=6;goto B48d7af;
case 0x48d7b2:c.instructions+=5;goto B48d7b2;
case 0x48d7b5:c.instructions+=4;goto B48d7b5;
case 0x48d7b8:c.instructions+=3;goto B48d7b8;
case 0x48d7ba:c.instructions+=2;goto B48d7ba;
case 0x48d7bb:c.instructions+=1;goto B48d7bb;
case 0x48d7be:goto L48d7be;
case 0x48d7c3:c.instructions+=5;goto B48d7c3;
case 0x48d7c5:c.instructions+=4;goto B48d7c5;
case 0x48d7cb:c.instructions+=3;goto B48d7cb;
case 0x48d7ce:c.instructions+=2;goto B48d7ce;
case 0x48d7d4:c.instructions+=1;goto B48d7d4;
case 0x48d7d7:goto L48d7d7;
case 0x48d7d8:goto L48d7d8;
case 0x48d7e0:goto L48d7e0;
case 0x48d7e3:c.instructions+=4;goto B48d7e3;
case 0x48d7e5:c.instructions+=3;goto B48d7e5;
case 0x48d7e8:c.instructions+=2;goto B48d7e8;
case 0x48d7ea:c.instructions+=1;goto B48d7ea;
case 0x48d7ec:goto L48d7ec;
case 0x48d7ef:c.instructions+=21;goto B48d7ef;
case 0x48d7f2:c.instructions+=20;goto B48d7f2;
case 0x48d7f5:c.instructions+=19;goto B48d7f5;
case 0x48d7f8:c.instructions+=18;goto B48d7f8;
case 0x48d7fb:c.instructions+=17;goto B48d7fb;
case 0x48d7ff:c.instructions+=16;goto B48d7ff;
case 0x48d802:c.instructions+=15;goto B48d802;
case 0x48d806:c.instructions+=14;goto B48d806;
case 0x48d808:c.instructions+=13;goto B48d808;
case 0x48d80a:c.instructions+=12;goto B48d80a;
case 0x48d80e:c.instructions+=11;goto B48d80e;
case 0x48d811:c.instructions+=10;goto B48d811;
case 0x48d815:c.instructions+=9;goto B48d815;
case 0x48d818:c.instructions+=8;goto B48d818;
case 0x48d81c:c.instructions+=7;goto B48d81c;
case 0x48d820:c.instructions+=6;goto B48d820;
case 0x48d823:c.instructions+=5;goto B48d823;
case 0x48d825:c.instructions+=4;goto B48d825;
case 0x48d828:c.instructions+=3;goto B48d828;
case 0x48d82d:c.instructions+=2;goto B48d82d;
case 0x48d830:c.instructions+=1;goto B48d830;
case 0x48d833:goto L48d833;
case 0x48d837:c.instructions+=10;goto B48d837;
case 0x48d839:c.instructions+=9;goto B48d839;
case 0x48d83c:c.instructions+=8;goto B48d83c;
case 0x48d83f:c.instructions+=7;goto B48d83f;
case 0x48d843:c.instructions+=6;goto B48d843;
case 0x48d845:c.instructions+=5;goto B48d845;
case 0x48d848:c.instructions+=4;goto B48d848;
case 0x48d84b:c.instructions+=3;goto B48d84b;
case 0x48d84d:c.instructions+=2;goto B48d84d;
case 0x48d850:c.instructions+=1;goto B48d850;
case 0x48d860:goto L48d860;
case 0x48d863:c.instructions+=2;goto B48d863;
case 0x48d865:c.instructions+=1;goto B48d865;
case 0x48d867:goto L48d867;
case 0x48d868:c.instructions+=3;goto B48d868;
case 0x48d86c:c.instructions+=2;goto B48d86c;
case 0x48d86e:c.instructions+=1;goto B48d86e;
case 0x48d870:goto L48d870;
case 0x48d873:c.instructions+=3;goto B48d873;
case 0x48d877:c.instructions+=2;goto B48d877;
case 0x48d879:c.instructions+=1;goto B48d879;
case 0x48d87b:goto L48d87b;
case 0x48d87f:c.instructions+=1;goto B48d87f;
case 0x48d880:goto L48d880;
case 0x48d882:c.instructions+=1;goto B48d882;
case 0x48d884:goto L48d884;
case 0x48d887:goto L48d887;
case 0x48d88a:c.instructions+=2;goto B48d88a;
case 0x48d88b:c.instructions+=1;goto B48d88b;
case 0x48d88d:goto L48d88d;
case 0x48d88e:goto L48d88e;
case 0x48d8a0:goto L48d8a0;
case 0x48d8a3:c.instructions+=2;goto B48d8a3;
case 0x48d8a5:c.instructions+=1;goto B48d8a5;
case 0x48d8a7:goto L48d8a7;
case 0x48d8ad:c.instructions+=3;goto B48d8ad;
case 0x48d8af:c.instructions+=2;goto B48d8af;
case 0x48d8b3:c.instructions+=1;goto B48d8b3;
case 0x48d8b5:goto L48d8b5;
case 0x48d8b7:c.instructions+=1;goto B48d8b7;
case 0x48d8b9:goto L48d8b9;
case 0x48d8bd:c.instructions+=2;goto B48d8bd;
case 0x48d8bf:c.instructions+=1;goto B48d8bf;
case 0x48d8c1:goto L48d8c1;
case 0x48d8c3:c.instructions+=1;goto B48d8c3;
case 0x48d8c5:goto L48d8c5;
case 0x48d8c9:c.instructions+=4;goto B48d8c9;
case 0x48d8cc:c.instructions+=3;goto B48d8cc;
case 0x48d8ce:c.instructions+=2;goto B48d8ce;
case 0x48d8d0:c.instructions+=1;goto B48d8d0;
case 0x48d8d2:goto L48d8d2;
case 0x48d8d5:c.instructions+=1;goto B48d8d5;
case 0x48d8d8:goto L48d8d8;
case 0x48d8da:c.instructions+=1;goto B48d8da;
case 0x48d8dd:goto L48d8dd;
case 0x48d8df:c.instructions+=1;goto B48d8df;
case 0x48d8f0:goto L48d8f0;
case 0x48d8f3:c.instructions+=2;goto B48d8f3;
case 0x48d8f5:c.instructions+=1;goto B48d8f5;
case 0x48d8f7:goto L48d8f7;
case 0x48d8fc:goto L48d8fc;
case 0x48d8fe:c.instructions+=1;goto B48d8fe;
case 0x48d910:goto L48d910;
case 0x48d914:c.instructions+=9;goto B48d914;
case 0x48d917:c.instructions+=8;goto B48d917;
case 0x48d918:c.instructions+=7;goto B48d918;
case 0x48d919:c.instructions+=6;goto B48d919;
case 0x48d91a:c.instructions+=5;goto B48d91a;
case 0x48d91d:c.instructions+=4;goto B48d91d;
case 0x48d921:c.instructions+=3;goto B48d921;
case 0x48d923:c.instructions+=2;goto B48d923;
case 0x48d925:c.instructions+=1;goto B48d925;
case 0x48d927:goto L48d927;
case 0x48d929:c.instructions+=2;goto B48d929;
case 0x48d92e:c.instructions+=1;goto B48d92e;
case 0x48d930:goto L48d930;
case 0x48d935:c.instructions+=7;goto B48d935;
case 0x48d938:c.instructions+=6;goto B48d938;
case 0x48d93a:c.instructions+=5;goto B48d93a;
case 0x48d940:c.instructions+=4;goto B48d940;
case 0x48d943:c.instructions+=3;goto B48d943;
case 0x48d949:c.instructions+=2;goto B48d949;
case 0x48d94f:c.instructions+=1;goto B48d94f;
case 0x48d951:goto L48d951;
case 0x48d956:c.instructions+=1;goto B48d956;
case 0x48d958:goto L48d958;
case 0x48d95b:c.instructions+=2;goto B48d95b;
case 0x48d95e:c.instructions+=1;goto B48d95e;
case 0x48d960:goto L48d960;
case 0x48d965:c.instructions+=1;goto B48d965;
case 0x48d967:goto L48d967;
case 0x48d96a:c.instructions+=2;goto B48d96a;
case 0x48d96d:c.instructions+=1;goto B48d96d;
case 0x48d96f:goto L48d96f;
case 0x48d974:c.instructions+=1;goto B48d974;
case 0x48d976:goto L48d976;
case 0x48d977:c.instructions+=1;goto B48d977;
case 0x48d97c:goto L48d97c;
case 0x48d97f:goto L48d97f;
case 0x48d982:c.instructions+=3;goto B48d982;
case 0x48d986:c.instructions+=2;goto B48d986;
case 0x48d988:c.instructions+=1;goto B48d988;
case 0x48d98a:goto L48d98a;
case 0x48d98c:c.instructions+=1;goto B48d98c;
case 0x48d98e:goto L48d98e;
case 0x48d994:goto L48d994;
case 0x48d99a:c.instructions+=10;goto B48d99a;
case 0x48d99c:c.instructions+=9;goto B48d99c;
case 0x48d99f:c.instructions+=8;goto B48d99f;
case 0x48d9a5:c.instructions+=7;goto B48d9a5;
case 0x48d9a6:c.instructions+=6;goto B48d9a6;
case 0x48d9a8:c.instructions+=5;goto B48d9a8;
case 0x48d9ab:c.instructions+=4;goto B48d9ab;
case 0x48d9ad:c.instructions+=3;goto B48d9ad;
case 0x48d9ae:c.instructions+=2;goto B48d9ae;
case 0x48d9af:c.instructions+=1;goto B48d9af;
case 0x48d9b0:goto L48d9b0;
case 0x48d9b4:c.instructions+=5;goto B48d9b4;
case 0x48d9b8:c.instructions+=4;goto B48d9b8;
case 0x48d9b9:c.instructions+=3;goto B48d9b9;
case 0x48d9ba:c.instructions+=2;goto B48d9ba;
case 0x48d9bf:c.instructions+=1;goto B48d9bf;
case 0x48d9c4:goto L48d9c4;
case 0x48d9d0:goto L48d9d0;
case 0x48d9d1:c.instructions+=4;goto B48d9d1;
case 0x48d9d5:c.instructions+=3;goto B48d9d5;
case 0x48d9d6:c.instructions+=2;goto B48d9d6;
case 0x48d9db:c.instructions+=1;goto B48d9db;
case 0x48d9e0:goto L48d9e0;
case 0x48d9e2:c.instructions+=1;goto B48d9e2;
case 0x48d9e4:goto L48d9e4;
case 0x48d9e9:goto L48d9e9;
case 0x48d9ea:c.instructions+=2;goto B48d9ea;
case 0x48d9ef:c.instructions+=1;goto B48d9ef;
case 0x48d9f4:goto L48d9f4;
case 0x48d9f6:c.instructions+=1;goto B48d9f6;
case 0x48d9f8:goto L48d9f8;
case 0x48d9f9:c.instructions+=1;goto B48d9f9;
case 0x48da00:goto L48da00;
case 0x48da01:c.instructions+=6;goto B48da01;
case 0x48da05:c.instructions+=5;goto B48da05;
case 0x48da08:c.instructions+=4;goto B48da08;
case 0x48da0a:c.instructions+=3;goto B48da0a;
case 0x48da0b:c.instructions+=2;goto B48da0b;
case 0x48da0e:c.instructions+=1;goto B48da0e;
case 0x48da10:goto L48da10;
case 0x48da11:c.instructions+=1;goto B48da11;
case 0x48da16:goto L48da16;
case 0x48da19:goto L48da19;
case 0x48da1c:c.instructions+=5;goto B48da1c;
case 0x48da20:c.instructions+=4;goto B48da20;
case 0x48da21:c.instructions+=3;goto B48da21;
case 0x48da24:c.instructions+=2;goto B48da24;
case 0x48da25:c.instructions+=1;goto B48da25;
case 0x48da2a:goto L48da2a;
case 0x48da2b:c.instructions+=1;goto B48da2b;
case 0x48da30:goto L48da30;
case 0x48da33:c.instructions+=8;goto B48da33;
case 0x48da36:c.instructions+=7;goto B48da36;
case 0x48da39:c.instructions+=6;goto B48da39;
case 0x48da3c:c.instructions+=5;goto B48da3c;
case 0x48da3f:c.instructions+=4;goto B48da3f;
case 0x48da42:c.instructions+=3;goto B48da42;
case 0x48da45:c.instructions+=2;goto B48da45;
case 0x48da47:c.instructions+=1;goto B48da47;
case 0x48da49:goto L48da49;
case 0x48da4c:c.instructions+=3;goto B48da4c;
case 0x48da4f:c.instructions+=2;goto B48da4f;
case 0x48da52:c.instructions+=1;goto B48da52;
case 0x48da55:goto L48da55;
case 0x48da56:c.instructions+=2;goto B48da56;
case 0x48da57:c.instructions+=1;goto B48da57;
case 0x48da60:goto L48da60;
case 0x48da65:c.instructions+=15;goto B48da65;
case 0x48da66:c.instructions+=14;goto B48da66;
case 0x48da67:c.instructions+=13;goto B48da67;
case 0x48da69:c.instructions+=12;goto B48da69;
case 0x48da6b:c.instructions+=11;goto B48da6b;
case 0x48da71:c.instructions+=10;goto B48da71;
case 0x48da72:c.instructions+=9;goto B48da72;
case 0x48da75:c.instructions+=8;goto B48da75;
case 0x48da78:c.instructions+=7;goto B48da78;
case 0x48da7d:c.instructions+=6;goto B48da7d;
case 0x48da7f:c.instructions+=5;goto B48da7f;
case 0x48da80:c.instructions+=4;goto B48da80;
case 0x48da86:c.instructions+=3;goto B48da86;
case 0x48da8d:c.instructions+=2;goto B48da8d;
case 0x48da90:c.instructions+=1;goto B48da90;
case 0x48da95:goto L48da95;
case 0x48da99:c.instructions+=8;goto B48da99;
case 0x48daa0:c.instructions+=7;goto B48daa0;
case 0x48daa1:c.instructions+=6;goto B48daa1;
case 0x48daa4:c.instructions+=5;goto B48daa4;
case 0x48daa7:c.instructions+=4;goto B48daa7;
case 0x48daaa:c.instructions+=3;goto B48daaa;
case 0x48daae:c.instructions+=2;goto B48daae;
case 0x48dab4:c.instructions+=1;goto B48dab4;
case 0x48dab9:goto L48dab9;
case 0x48dabc:c.instructions+=4;goto B48dabc;
case 0x48dabf:c.instructions+=3;goto B48dabf;
case 0x48dac0:c.instructions+=2;goto B48dac0;
case 0x48dac3:c.instructions+=1;goto B48dac3;
case 0x48dac8:goto L48dac8;
case 0x48dacb:c.instructions+=7;goto B48dacb;
case 0x48dacc:c.instructions+=6;goto B48dacc;
case 0x48dad0:c.instructions+=5;goto B48dad0;
case 0x48dad4:c.instructions+=4;goto B48dad4;
case 0x48dad7:c.instructions+=3;goto B48dad7;
case 0x48dad8:c.instructions+=2;goto B48dad8;
case 0x48dad9:c.instructions+=1;goto B48dad9;
case 0x48dae0:goto L48dae0;
case 0x48dae4:c.instructions+=5;goto B48dae4;
case 0x48dae7:c.instructions+=4;goto B48dae7;
case 0x48dae8:c.instructions+=3;goto B48dae8;
case 0x48dae9:c.instructions+=2;goto B48dae9;
case 0x48daee:c.instructions+=1;goto B48daee;
case 0x48daf3:goto L48daf3;
case 0x48daf5:c.instructions+=2;goto B48daf5;
case 0x48daf7:c.instructions+=1;goto B48daf7;
case 0x48dafd:goto L48dafd;
case 0x48dafe:c.instructions+=5;goto B48dafe;
case 0x48db04:c.instructions+=4;goto B48db04;
case 0x48db07:c.instructions+=3;goto B48db07;
case 0x48db0b:c.instructions+=2;goto B48db0b;
case 0x48db0f:c.instructions+=1;goto B48db0f;
case 0x48db15:goto L48db15;
case 0x48db1b:c.instructions+=3;goto B48db1b;
case 0x48db1c:c.instructions+=2;goto B48db1c;
case 0x48db20:c.instructions+=1;goto B48db20;
case 0x48db21:goto L48db21;
case 0x48db24:c.instructions+=5;goto B48db24;
case 0x48db28:c.instructions+=4;goto B48db28;
case 0x48db2c:c.instructions+=3;goto B48db2c;
case 0x48db2e:c.instructions+=2;goto B48db2e;
case 0x48db30:c.instructions+=1;goto B48db30;
case 0x48db36:goto L48db36;
case 0x48db3c:c.instructions+=1;goto B48db3c;
case 0x48db42:goto L48db42;
case 0x48db45:c.instructions+=6;goto B48db45;
case 0x48db48:c.instructions+=5;goto B48db48;
case 0x48db4e:c.instructions+=4;goto B48db4e;
case 0x48db51:c.instructions+=3;goto B48db51;
case 0x48db54:c.instructions+=2;goto B48db54;
case 0x48db59:c.instructions+=1;goto B48db59;
case 0x48db5b:goto L48db5b;
case 0x48db5d:goto L48db5d;
case 0x48db5f:c.instructions+=32;goto B48db5f;
case 0x48db65:c.instructions+=31;goto B48db65;
case 0x48db6b:c.instructions+=30;goto B48db6b;
case 0x48db6e:c.instructions+=29;goto B48db6e;
case 0x48db71:c.instructions+=28;goto B48db71;
case 0x48db77:c.instructions+=27;goto B48db77;
case 0x48db7d:c.instructions+=26;goto B48db7d;
case 0x48db81:c.instructions+=25;goto B48db81;
case 0x48db87:c.instructions+=24;goto B48db87;
case 0x48db8d:c.instructions+=23;goto B48db8d;
case 0x48db8e:c.instructions+=22;goto B48db8e;
case 0x48db94:c.instructions+=21;goto B48db94;
case 0x48db97:c.instructions+=20;goto B48db97;
case 0x48db99:c.instructions+=19;goto B48db99;
case 0x48db9f:c.instructions+=18;goto B48db9f;
case 0x48dba5:c.instructions+=17;goto B48dba5;
case 0x48dbab:c.instructions+=16;goto B48dbab;
case 0x48dbaf:c.instructions+=15;goto B48dbaf;
case 0x48dbb0:c.instructions+=14;goto B48dbb0;
case 0x48dbb6:c.instructions+=13;goto B48dbb6;
case 0x48dbb9:c.instructions+=12;goto B48dbb9;
case 0x48dbbb:c.instructions+=11;goto B48dbbb;
case 0x48dbbd:c.instructions+=10;goto B48dbbd;
case 0x48dbc3:c.instructions+=9;goto B48dbc3;
case 0x48dbc7:c.instructions+=8;goto B48dbc7;
case 0x48dbca:c.instructions+=7;goto B48dbca;
case 0x48dbcd:c.instructions+=6;goto B48dbcd;
case 0x48dbd3:c.instructions+=5;goto B48dbd3;
case 0x48dbd4:c.instructions+=4;goto B48dbd4;
case 0x48dbd5:c.instructions+=3;goto B48dbd5;
case 0x48dbd9:c.instructions+=2;goto B48dbd9;
case 0x48dbdd:c.instructions+=1;goto B48dbdd;
case 0x48dbe3:goto L48dbe3;
case 0x48dbe7:c.instructions+=7;goto B48dbe7;
case 0x48dbea:c.instructions+=6;goto B48dbea;
case 0x48dbeb:c.instructions+=5;goto B48dbeb;
case 0x48dbee:c.instructions+=4;goto B48dbee;
case 0x48dbf0:c.instructions+=3;goto B48dbf0;
case 0x48dbf4:c.instructions+=2;goto B48dbf4;
case 0x48dbf8:c.instructions+=1;goto B48dbf8;
case 0x48dbfe:goto L48dbfe;
case 0x48dc02:c.instructions+=4;goto B48dc02;
case 0x48dc04:c.instructions+=3;goto B48dc04;
case 0x48dc05:c.instructions+=2;goto B48dc05;
case 0x48dc06:c.instructions+=1;goto B48dc06;
case 0x48dc08:goto L48dc08;
case 0x48dc0e:c.instructions+=5;goto B48dc0e;
case 0x48dc13:c.instructions+=4;goto B48dc13;
case 0x48dc15:c.instructions+=3;goto B48dc15;
case 0x48dc16:c.instructions+=2;goto B48dc16;
case 0x48dc17:c.instructions+=1;goto B48dc17;
case 0x48dc1c:goto L48dc1c;
case 0x48dc21:c.instructions+=6;goto B48dc21;
case 0x48dc27:c.instructions+=5;goto B48dc27;
case 0x48dc2c:c.instructions+=4;goto B48dc2c;
case 0x48dc2e:c.instructions+=3;goto B48dc2e;
case 0x48dc2f:c.instructions+=2;goto B48dc2f;
case 0x48dc30:c.instructions+=1;goto B48dc30;
case 0x48dc35:goto L48dc35;
case 0x48dc3b:c.instructions+=5;goto B48dc3b;
case 0x48dc40:c.instructions+=4;goto B48dc40;
case 0x48dc43:c.instructions+=3;goto B48dc43;
case 0x48dc49:c.instructions+=2;goto B48dc49;
case 0x48dc4e:c.instructions+=1;goto B48dc4e;
case 0x48dc57:goto L48dc57;
case 0x48dc58:goto L48dc58;
case 0x48dc59:c.instructions+=2;goto B48dc59;
case 0x48dc5c:c.instructions+=1;goto B48dc5c;
case 0x48dc60:goto L48dc60;
case 0x48dc63:c.instructions+=6;goto B48dc63;
case 0x48dc64:c.instructions+=5;goto B48dc64;
case 0x48dc65:c.instructions+=4;goto B48dc65;
case 0x48dc69:c.instructions+=3;goto B48dc69;
case 0x48dc6a:c.instructions+=2;goto B48dc6a;
case 0x48dc6f:c.instructions+=1;goto B48dc6f;
case 0x48dc74:goto L48dc74;
case 0x48dc76:c.instructions+=1;goto B48dc76;
case 0x48dc78:goto L48dc78;
case 0x48dc7d:goto L48dc7d;
case 0x48dc7e:c.instructions+=2;goto B48dc7e;
case 0x48dc83:c.instructions+=1;goto B48dc83;
case 0x48dc88:goto L48dc88;
case 0x48dc8a:c.instructions+=1;goto B48dc8a;
case 0x48dc8c:goto L48dc8c;
case 0x48dc8d:c.instructions+=2;goto B48dc8d;
case 0x48dc92:c.instructions+=1;goto B48dc92;
case 0x48dc97:goto L48dc97;
case 0x48dc99:c.instructions+=4;goto B48dc99;
case 0x48dc9b:c.instructions+=3;goto B48dc9b;
case 0x48dc9d:c.instructions+=2;goto B48dc9d;
case 0x48dca1:c.instructions+=1;goto B48dca1;
case 0x48dca7:goto L48dca7;
case 0x48dcad:c.instructions+=5;goto B48dcad;
case 0x48dcb1:c.instructions+=4;goto B48dcb1;
case 0x48dcb7:c.instructions+=3;goto B48dcb7;
case 0x48dcbb:c.instructions+=2;goto B48dcbb;
case 0x48dcbf:c.instructions+=1;goto B48dcbf;
case 0x48dcc5:goto L48dcc5;
case 0x48dcc6:c.instructions+=3;goto B48dcc6;
case 0x48dcca:c.instructions+=2;goto B48dcca;
case 0x48dccb:c.instructions+=1;goto B48dccb;
case 0x48dcd0:goto L48dcd0;
case 0x48dcd6:c.instructions+=5;goto B48dcd6;
case 0x48dcdc:c.instructions+=4;goto B48dcdc;
case 0x48dcde:c.instructions+=3;goto B48dcde;
case 0x48dce0:c.instructions+=2;goto B48dce0;
case 0x48dce4:c.instructions+=1;goto B48dce4;
case 0x48dcea:goto L48dcea;
case 0x48dcf0:c.instructions+=2;goto B48dcf0;
case 0x48dcf2:c.instructions+=1;goto B48dcf2;
case 0x48dcf8:goto L48dcf8;
case 0x48dcfe:c.instructions+=7;goto B48dcfe;
case 0x48dd00:c.instructions+=6;goto B48dd00;
case 0x48dd02:c.instructions+=5;goto B48dd02;
case 0x48dd04:c.instructions+=4;goto B48dd04;
case 0x48dd05:c.instructions+=3;goto B48dd05;
case 0x48dd06:c.instructions+=2;goto B48dd06;
case 0x48dd07:c.instructions+=1;goto B48dd07;
case 0x48dd0c:goto L48dd0c;
case 0x48dd0e:c.instructions+=3;goto B48dd0e;
case 0x48dd11:c.instructions+=2;goto B48dd11;
case 0x48dd13:c.instructions+=1;goto B48dd13;
case 0x48dd19:goto L48dd19;
case 0x48dd1f:c.instructions+=15;goto B48dd1f;
case 0x48dd23:c.instructions+=14;goto B48dd23;
case 0x48dd26:c.instructions+=13;goto B48dd26;
case 0x48dd28:c.instructions+=12;goto B48dd28;
case 0x48dd2a:c.instructions+=11;goto B48dd2a;
case 0x48dd2f:c.instructions+=10;goto B48dd2f;
case 0x48dd31:c.instructions+=9;goto B48dd31;
case 0x48dd35:c.instructions+=8;goto B48dd35;
case 0x48dd38:c.instructions+=7;goto B48dd38;
case 0x48dd3a:c.instructions+=6;goto B48dd3a;
case 0x48dd3d:c.instructions+=5;goto B48dd3d;
case 0x48dd3f:c.instructions+=4;goto B48dd3f;
case 0x48dd42:c.instructions+=3;goto B48dd42;
case 0x48dd45:c.instructions+=2;goto B48dd45;
case 0x48dd4a:c.instructions+=1;goto B48dd4a;
case 0x48dd4c:goto L48dd4c;
case 0x48dd4e:goto L48dd4e;
case 0x48dd51:c.instructions+=7;goto B48dd51;
case 0x48dd53:c.instructions+=6;goto B48dd53;
case 0x48dd56:c.instructions+=5;goto B48dd56;
case 0x48dd59:c.instructions+=4;goto B48dd59;
case 0x48dd5d:c.instructions+=3;goto B48dd5d;
case 0x48dd60:c.instructions+=2;goto B48dd60;
case 0x48dd62:c.instructions+=1;goto B48dd62;
case 0x48dd64:goto L48dd64;
case 0x48dd6a:c.instructions+=14;goto B48dd6a;
case 0x48dd70:c.instructions+=13;goto B48dd70;
case 0x48dd71:c.instructions+=12;goto B48dd71;
case 0x48dd77:c.instructions+=11;goto B48dd77;
case 0x48dd7a:c.instructions+=10;goto B48dd7a;
case 0x48dd7c:c.instructions+=9;goto B48dd7c;
case 0x48dd80:c.instructions+=8;goto B48dd80;
case 0x48dd86:c.instructions+=7;goto B48dd86;
case 0x48dd8c:c.instructions+=6;goto B48dd8c;
case 0x48dd92:c.instructions+=5;goto B48dd92;
case 0x48dd93:c.instructions+=4;goto B48dd93;
case 0x48dd99:c.instructions+=3;goto B48dd99;
case 0x48dd9c:c.instructions+=2;goto B48dd9c;
case 0x48dd9e:c.instructions+=1;goto B48dd9e;
case 0x48dda4:goto L48dda4;
case 0x48ddaa:c.instructions+=5;goto B48ddaa;
case 0x48ddae:c.instructions+=4;goto B48ddae;
case 0x48ddaf:c.instructions+=3;goto B48ddaf;
case 0x48ddb6:c.instructions+=2;goto B48ddb6;
case 0x48ddba:c.instructions+=1;goto B48ddba;
case 0x48ddbe:goto L48ddbe;
case 0x48ddc2:c.instructions+=8;goto B48ddc2;
case 0x48ddc6:c.instructions+=7;goto B48ddc6;
case 0x48ddcc:c.instructions+=6;goto B48ddcc;
case 0x48ddcd:c.instructions+=5;goto B48ddcd;
case 0x48ddd0:c.instructions+=4;goto B48ddd0;
case 0x48ddd2:c.instructions+=3;goto B48ddd2;
case 0x48ddd6:c.instructions+=2;goto B48ddd6;
case 0x48ddda:c.instructions+=1;goto B48ddda;
case 0x48dde0:goto L48dde0;
case 0x48dde4:c.instructions+=3;goto B48dde4;
case 0x48dde6:c.instructions+=2;goto B48dde6;
case 0x48dde8:c.instructions+=1;goto B48dde8;
case 0x48ddee:goto L48ddee;
case 0x48ddf4:c.instructions+=4;goto B48ddf4;
case 0x48ddf6:c.instructions+=3;goto B48ddf6;
case 0x48ddf8:c.instructions+=2;goto B48ddf8;
case 0x48ddfa:c.instructions+=1;goto B48ddfa;
case 0x48ddfc:goto L48ddfc;
case 0x48de00:goto L48de00;
case 0x48de04:c.instructions+=4;goto B48de04;
case 0x48de09:c.instructions+=3;goto B48de09;
case 0x48de0c:c.instructions+=2;goto B48de0c;
case 0x48de0f:c.instructions+=1;goto B48de0f;
case 0x48de11:goto L48de11;
case 0x48de13:c.instructions+=1;goto B48de13;
case 0x48de15:goto L48de15;
case 0x48de19:c.instructions+=2;goto B48de19;
case 0x48de1b:c.instructions+=1;goto B48de1b;
case 0x48de20:goto L48de20;
case 0x48de22:goto L48de22;
case 0x48de24:c.instructions+=5;goto B48de24;
case 0x48de2a:c.instructions+=4;goto B48de2a;
case 0x48de2d:c.instructions+=3;goto B48de2d;
case 0x48de30:c.instructions+=2;goto B48de30;
case 0x48de36:c.instructions+=1;goto B48de36;
case 0x48de3a:goto L48de3a;
case 0x48de3e:c.instructions+=5;goto B48de3e;
case 0x48de44:c.instructions+=4;goto B48de44;
case 0x48de4a:c.instructions+=3;goto B48de4a;
case 0x48de4b:c.instructions+=2;goto B48de4b;
case 0x48de4e:c.instructions+=1;goto B48de4e;
case 0x48de52:goto L48de52;
case 0x48de53:c.instructions+=3;goto B48de53;
case 0x48de56:c.instructions+=2;goto B48de56;
case 0x48de58:c.instructions+=1;goto B48de58;
case 0x48de5a:goto L48de5a;
case 0x48de60:c.instructions+=6;goto B48de60;
case 0x48de66:c.instructions+=5;goto B48de66;
case 0x48de6a:c.instructions+=4;goto B48de6a;
case 0x48de6d:c.instructions+=3;goto B48de6d;
case 0x48de73:c.instructions+=2;goto B48de73;
case 0x48de79:c.instructions+=1;goto B48de79;
case 0x48de7d:goto L48de7d;
case 0x48de7e:c.instructions+=1;goto B48de7e;
case 0x48de7f:goto L48de7f;
case 0x48de80:c.instructions+=3;goto B48de80;
case 0x48de81:c.instructions+=2;goto B48de81;
case 0x48de84:c.instructions+=1;goto B48de84;
case 0x48de90:goto L48de90;
case 0x48de92:c.instructions+=12;goto B48de92;
case 0x48de97:c.instructions+=11;goto B48de97;
case 0x48de9c:c.instructions+=10;goto B48de9c;
case 0x48de9d:c.instructions+=9;goto B48de9d;
case 0x48dea2:c.instructions+=8;goto B48dea2;
case 0x48dea7:c.instructions+=7;goto B48dea7;
case 0x48dea8:c.instructions+=6;goto B48dea8;
case 0x48dead:c.instructions+=5;goto B48dead;
case 0x48deaf:c.instructions+=4;goto B48deaf;
case 0x48deb4:c.instructions+=3;goto B48deb4;
case 0x48deb9:c.instructions+=2;goto B48deb9;
case 0x48debe:c.instructions+=1;goto B48debe;
case 0x48dec3:goto L48dec3;
case 0x48dec5:goto L48dec5;
case 0x48deca:goto L48deca;
case 0x48decd:c.instructions+=4;goto B48decd;
case 0x48ded2:c.instructions+=3;goto B48ded2;
case 0x48ded7:c.instructions+=2;goto B48ded7;
case 0x48dedc:c.instructions+=1;goto B48dedc;
case 0x48dee1:goto L48dee1;
case 0x48dee3:c.instructions+=4;goto B48dee3;
case 0x48dee8:c.instructions+=3;goto B48dee8;
case 0x48deed:c.instructions+=2;goto B48deed;
case 0x48def2:c.instructions+=1;goto B48def2;
case 0x48def7:goto L48def7;
case 0x48def9:goto L48def9;
case 0x48defe:goto L48defe;
case 0x48df03:c.instructions+=9;goto B48df03;
case 0x48df06:c.instructions+=8;goto B48df06;
case 0x48df10:c.instructions+=7;goto B48df10;
case 0x48df1a:c.instructions+=6;goto B48df1a;
case 0x48df20:c.instructions+=5;goto B48df20;
case 0x48df2a:c.instructions+=4;goto B48df2a;
case 0x48df2f:c.instructions+=3;goto B48df2f;
case 0x48df39:c.instructions+=2;goto B48df39;
case 0x48df3a:c.instructions+=1;goto B48df3a;
case 0x48df40:goto L48df40;
case 0x48df41:c.instructions+=5;goto B48df41;
case 0x48df42:c.instructions+=4;goto B48df42;
case 0x48df48:c.instructions+=3;goto B48df48;
case 0x48df49:c.instructions+=2;goto B48df49;
case 0x48df4e:c.instructions+=1;goto B48df4e;
case 0x48df53:goto L48df53;
case 0x48df55:c.instructions+=2;goto B48df55;
case 0x48df57:c.instructions+=1;goto B48df57;
case 0x48df59:goto L48df59;
case 0x48df5d:c.instructions+=1;goto B48df5d;
case 0x48df60:goto L48df60;
case 0x48df62:c.instructions+=1;goto B48df62;
case 0x48df64:goto L48df64;
case 0x48df67:c.instructions+=7;goto B48df67;
case 0x48df6a:c.instructions+=6;goto B48df6a;
case 0x48df6c:c.instructions+=5;goto B48df6c;
case 0x48df6e:c.instructions+=4;goto B48df6e;
case 0x48df6f:c.instructions+=3;goto B48df6f;
case 0x48df70:c.instructions+=2;goto B48df70;
case 0x48df71:c.instructions+=1;goto B48df71;
case 0x48df76:goto L48df76;
case 0x48df79:c.instructions+=2;goto B48df79;
case 0x48df7b:c.instructions+=1;goto B48df7b;
case 0x48df7d:goto L48df7d;
case 0x48df7f:c.instructions+=2;goto B48df7f;
case 0x48df81:c.instructions+=1;goto B48df81;
case 0x48df83:goto L48df83;
case 0x48df84:c.instructions+=4;goto B48df84;
case 0x48df85:c.instructions+=3;goto B48df85;
case 0x48df87:c.instructions+=2;goto B48df87;
case 0x48df88:c.instructions+=1;goto B48df88;
case 0x48df89:goto L48df89;
case 0x48df8a:c.instructions+=4;goto B48df8a;
case 0x48df8c:c.instructions+=3;goto B48df8c;
case 0x48df8d:c.instructions+=2;goto B48df8d;
case 0x48df8e:c.instructions+=1;goto B48df8e;
case 0x48df90:goto L48df90;
case 0x48df91:c.instructions+=6;goto B48df91;
case 0x48df95:c.instructions+=5;goto B48df95;
case 0x48df97:c.instructions+=4;goto B48df97;
case 0x48df9c:c.instructions+=3;goto B48df9c;
case 0x48dfa2:c.instructions+=2;goto B48dfa2;
case 0x48dfa4:c.instructions+=1;goto B48dfa4;
case 0x48dfa6:goto L48dfa6;
case 0x48dfa8:c.instructions+=2;goto B48dfa8;
case 0x48dfa9:c.instructions+=1;goto B48dfa9;
case 0x48dfaa:goto L48dfaa;
case 0x48dfab:c.instructions+=1;goto B48dfab;
case 0x48dfb0:goto L48dfb0;
case 0x48dfb4:c.instructions+=4;goto B48dfb4;
case 0x48dfb8:c.instructions+=3;goto B48dfb8;
case 0x48dfba:c.instructions+=2;goto B48dfba;
case 0x48dfbc:c.instructions+=1;goto B48dfbc;
case 0x48dfbe:goto L48dfbe;
case 0x48dfc1:c.instructions+=7;goto B48dfc1;
case 0x48dfc4:c.instructions+=6;goto B48dfc4;
case 0x48dfc6:c.instructions+=5;goto B48dfc6;
case 0x48dfc7:c.instructions+=4;goto B48dfc7;
case 0x48dfc8:c.instructions+=3;goto B48dfc8;
case 0x48dfc9:c.instructions+=2;goto B48dfc9;
case 0x48dfca:c.instructions+=1;goto B48dfca;
case 0x48dfcf:goto L48dfcf;
case 0x48dfd2:c.instructions+=2;goto B48dfd2;
case 0x48dfd4:c.instructions+=1;goto B48dfd4;
case 0x48dfd6:goto L48dfd6;
case 0x48dfd9:c.instructions+=1;goto B48dfd9;
case 0x48dfdb:goto L48dfdb;
case 0x48dfdc:c.instructions+=4;goto B48dfdc;
case 0x48dfdd:c.instructions+=3;goto B48dfdd;
case 0x48dfe3:c.instructions+=2;goto B48dfe3;
case 0x48dfe8:c.instructions+=1;goto B48dfe8;
case 0x48dfed:goto L48dfed;
case 0x48dfef:c.instructions+=2;goto B48dfef;
case 0x48dff1:c.instructions+=1;goto B48dff1;
case 0x48dff3:goto L48dff3;
case 0x48dff5:c.instructions+=1;goto B48dff5;
case 0x48dff7:goto L48dff7;
case 0x48dffa:c.instructions+=3;goto B48dffa;
case 0x48dffd:c.instructions+=2;goto B48dffd;
case 0x48dfff:c.instructions+=1;goto B48dfff;
default:missing_instruction(c.pc);}
B48d003:L48d003:{c.instructions+=8;NFSU2_TR(0x48d003);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48d005:{NFSU2_TR(0x48d005);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B48d008:{NFSU2_TR(0x48d008);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B48d009:{NFSU2_TR(0x48d009);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+0))));
}
B48d00b:{NFSU2_TR(0x48d00b);
w4(R+0,u32(~u32(r4(R+0))));
}
B48d00d:{NFSU2_TR(0x48d00d);
w4(R+20,u32(u32(r4(R+20))&u32(r4(R+0))));
}
B48d00f:{NFSU2_TR(0x48d00f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48d012:{NFSU2_TR(0x48d012);
if(r1(R+518)){{goto L48d0a2;}}
}
B48d018:L48d018:{c.instructions+=8;NFSU2_TR(0x48d018);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d01c:{NFSU2_TR(0x48d01c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d01d:{NFSU2_TR(0x48d01d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B48d020:{NFSU2_TR(0x48d020);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d021:{NFSU2_TR(0x48d021);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48d025:{NFSU2_TR(0x48d025);
u8 U[4];
w4(U+0,u32(0x78d978ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d02a:{NFSU2_TR(0x48d02a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d02b:{NFSU2_TR(0x48d02b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d030ull));
TAIL_STATIC(0x4400d0u,440);
}
B48d030:L48d030:{c.instructions+=10;NFSU2_TR(0x48d030);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d037:{NFSU2_TR(0x48d037);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B48d03a:{NFSU2_TR(0x48d03a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48d03d:{NFSU2_TR(0x48d03d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48d03f:{NFSU2_TR(0x48d03f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B48d042:{NFSU2_TR(0x48d042);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B48d044:{NFSU2_TR(0x48d044);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d046:{NFSU2_TR(0x48d046);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d04a:{NFSU2_TR(0x48d04a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x2000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48d052:{NFSU2_TR(0x48d052);
if(r1(R+518)){{goto L48d071;}}
}
B48d054:L48d054:{c.instructions+=2;NFSU2_TR(0x48d054);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d055:{NFSU2_TR(0x48d055);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d05aull));
TAIL_STATIC(0x43e910u,43e);
}
B48d05a:L48d05a:{c.instructions+=3;NFSU2_TR(0x48d05a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48d05d:{NFSU2_TR(0x48d05d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48d05f:{NFSU2_TR(0x48d05f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48d071;}}
}
B48d061:L48d061:{c.instructions+=4;NFSU2_TR(0x48d061);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d065:{NFSU2_TR(0x48d065);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B48d068:{NFSU2_TR(0x48d068);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2000ull))));
}
B48d06d:{NFSU2_TR(0x48d06d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d071:L48d071:{c.instructions+=4;NFSU2_TR(0x48d071);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d075:{NFSU2_TR(0x48d075);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d076:{NFSU2_TR(0x48d076);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d077:{NFSU2_TR(0x48d077);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d07cull));
TAIL_STATIC(0x440820u,440);
}
B48d07c:L48d07c:{c.instructions+=11;NFSU2_TR(0x48d07c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48d07f:{NFSU2_TR(0x48d07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d082:{NFSU2_TR(0x48d082);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48d084:{NFSU2_TR(0x48d084);
__builtin_memmove((R+8),(R+20),4);
}
B48d086:{NFSU2_TR(0x48d086);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B48d087:{NFSU2_TR(0x48d087);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B48d08a:{NFSU2_TR(0x48d08a);
w4(R+4,u32(~u32(r4(R+4))));
}
B48d08c:{NFSU2_TR(0x48d08c);
w4(R+20,u32(u32(r4(R+20))&u32(r4(R+4))));
}
B48d08e:{NFSU2_TR(0x48d08e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d08f:{NFSU2_TR(0x48d08f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d090:{NFSU2_TR(0x48d090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d095ull));
TAIL_STATIC(0x574670u,574);
}
B48d095:L48d095:{c.instructions+=2;NFSU2_TR(0x48d095);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d096:{NFSU2_TR(0x48d096);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d09bull));
TAIL_STATIC(0x440540u,440);
}
B48d09b:L48d09b:{c.instructions+=2;NFSU2_TR(0x48d09b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48d09f:{NFSU2_TR(0x48d09f);
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
B48d0a2:L48d0a2:{c.instructions+=4;NFSU2_TR(0x48d0a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d0a3:{NFSU2_TR(0x48d0a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d0a4:{NFSU2_TR(0x48d0a4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d0a5:{NFSU2_TR(0x48d0a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d0a8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48d0a8:L48d0a8:{c.instructions+=4;NFSU2_TR(0x48d0a8);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B48d0af:{NFSU2_TR(0x48d0af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B48d0b2:{NFSU2_TR(0x48d0b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d0b4:{NFSU2_TR(0x48d0b4);
if(r1(R+518)){{goto L48d0bc;}}
}
B48d0b6:L48d0b6:{c.instructions+=1;NFSU2_TR(0x48d0b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B48d0bc:L48d0bc:{c.instructions+=3;NFSU2_TR(0x48d0bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B48d0c0:{NFSU2_TR(0x48d0c0);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B48d0c5:{NFSU2_TR(0x48d0c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d0e9;}}
}
B48d0c7:L48d0c7:{c.instructions+=3;NFSU2_TR(0x48d0c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d0ca:{NFSU2_TR(0x48d0ca);
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
B48d0cc:{NFSU2_TR(0x48d0cc);
if(r1(R+518)){{goto L48d0d7;}}
}
B48d0ce:L48d0ce:{c.instructions+=3;NFSU2_TR(0x48d0ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48d0d1:{NFSU2_TR(0x48d0d1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d0d2:{NFSU2_TR(0x48d0d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d0d4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B48d0d4:L48d0d4:{c.instructions+=1;NFSU2_TR(0x48d0d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48d0d7:L48d0d7:{c.instructions+=6;NFSU2_TR(0x48d0d7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48d0d9:{NFSU2_TR(0x48d0d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d0dc:{NFSU2_TR(0x48d0dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48d0df:{NFSU2_TR(0x48d0df);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B48d0e3:{NFSU2_TR(0x48d0e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d0e6:{NFSU2_TR(0x48d0e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d0e9:L48d0e9:{c.instructions+=6;NFSU2_TR(0x48d0e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48d0ea:{NFSU2_TR(0x48d0ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48d0eb:{NFSU2_TR(0x48d0eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48d0ec:{NFSU2_TR(0x48d0ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48d0ed:{NFSU2_TR(0x48d0ed);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48d0f3:{NFSU2_TR(0x48d0f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d100:L48d100:{c.instructions+=8;NFSU2_TR(0x48d100);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8cull))));
}
B48d106:{NFSU2_TR(0x48d106);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d107:{NFSU2_TR(0x48d107);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B48d10e:{NFSU2_TR(0x48d10e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d110:{NFSU2_TR(0x48d110);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d111:{NFSU2_TR(0x48d111);
__builtin_memmove((R+28),(R+4),4);
}
B48d113:{NFSU2_TR(0x48d113);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d117:{NFSU2_TR(0x48d117);
if(r1(R+518)){{goto L48d23c;}}
}
B48d11d:L48d11d:{c.instructions+=5;NFSU2_TR(0x48d11d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d11e:{NFSU2_TR(0x48d11e);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48d125:{NFSU2_TR(0x48d125);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d127:{NFSU2_TR(0x48d127);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d128:{NFSU2_TR(0x48d128);
if(r1(R+518)){{goto L48d23a;}}
}
B48d12e:L48d12e:{c.instructions+=3;NFSU2_TR(0x48d12e);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48d135:{NFSU2_TR(0x48d135);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d137:{NFSU2_TR(0x48d137);
if(r1(R+518)){{goto L48d23a;}}
}
B48d13d:L48d13d:{c.instructions+=5;NFSU2_TR(0x48d13d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48d13f:{NFSU2_TR(0x48d13f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48d141:{NFSU2_TR(0x48d141);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B48d145:{NFSU2_TR(0x48d145);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B48d148:{NFSU2_TR(0x48d148);
if(r1(R+518)){{goto L48d15c;}}
}
B48d14a:L48d14a:{c.instructions+=8;NFSU2_TR(0x48d14a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B48d14b:{NFSU2_TR(0x48d14b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B48d14f:{NFSU2_TR(0x48d14f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48d150:{NFSU2_TR(0x48d150);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48d151:{NFSU2_TR(0x48d151);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48d152:{NFSU2_TR(0x48d152);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48d153:{NFSU2_TR(0x48d153);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48d159:{NFSU2_TR(0x48d159);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d15c:L48d15c:{c.instructions+=3;NFSU2_TR(0x48d15c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48d15f:{NFSU2_TR(0x48d15f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48d161:{NFSU2_TR(0x48d161);
if(r1(R+518)){{goto L48d173;}}
}
B48d163:L48d163:{c.instructions+=4;NFSU2_TR(0x48d163);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xdfull))));
}
B48d165:{NFSU2_TR(0x48d165);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48d168:{NFSU2_TR(0x48d168);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B48d16e:{NFSU2_TR(0x48d16e);
{goto L48d232;}
}
B48d173:L48d173:{c.instructions+=14;NFSU2_TR(0x48d173);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B48d175:{NFSU2_TR(0x48d175);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B48d177:{NFSU2_TR(0x48d177);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B48d179:{NFSU2_TR(0x48d179);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x23ull))));
}
B48d17b:{NFSU2_TR(0x48d17b);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x20ull))));
}
B48d17d:{NFSU2_TR(0x48d17d);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B48d180:{NFSU2_TR(0x48d180);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d181:{NFSU2_TR(0x48d181);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d182:{NFSU2_TR(0x48d182);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B48d185:{NFSU2_TR(0x48d185);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d186:{NFSU2_TR(0x48d186);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48d18a:{NFSU2_TR(0x48d18a);
u8 U[4];
w4(U+0,u32(0x78d988ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d18f:{NFSU2_TR(0x48d18f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d190:{NFSU2_TR(0x48d190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d195ull));
TAIL_STATIC(0x4400d0u,440);
}
B48d195:L48d195:{c.instructions+=10;NFSU2_TR(0x48d195);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B48d197:{NFSU2_TR(0x48d197);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48d19a:{NFSU2_TR(0x48d19a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B48d19e:{NFSU2_TR(0x48d19e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B48d1a1:{NFSU2_TR(0x48d1a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B48d1a4:{NFSU2_TR(0x48d1a4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B48d1a6:{NFSU2_TR(0x48d1a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48d1a9:{NFSU2_TR(0x48d1a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x2000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48d1b1:{NFSU2_TR(0x48d1b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d1b5:{NFSU2_TR(0x48d1b5);
if(r1(R+518)){{goto L48d1c1;}}
}
B48d1b7:L48d1b7:{c.instructions+=2;NFSU2_TR(0x48d1b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x2008ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48d1bf:{NFSU2_TR(0x48d1bf);
{goto L48d1e2;}
}
B48d1c1:L48d1c1:{c.instructions+=2;NFSU2_TR(0x48d1c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d1c3:{NFSU2_TR(0x48d1c3);
if(r1(R+518)){{goto L48d1e2;}}
}
B48d1c5:L48d1c5:{c.instructions+=2;NFSU2_TR(0x48d1c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d1c6:{NFSU2_TR(0x48d1c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d1cbull));
TAIL_STATIC(0x43e910u,43e);
}
B48d1cb:L48d1cb:{c.instructions+=3;NFSU2_TR(0x48d1cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48d1ce:{NFSU2_TR(0x48d1ce);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48d1d0:{NFSU2_TR(0x48d1d0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48d1e2;}}
}
B48d1d2:L48d1d2:{c.instructions+=4;NFSU2_TR(0x48d1d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d1d6:{NFSU2_TR(0x48d1d6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B48d1d9:{NFSU2_TR(0x48d1d9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2000ull))));
}
B48d1de:{NFSU2_TR(0x48d1de);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d1e2:L48d1e2:{c.instructions+=4;NFSU2_TR(0x48d1e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48d1e6:{NFSU2_TR(0x48d1e6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d1e7:{NFSU2_TR(0x48d1e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d1e8:{NFSU2_TR(0x48d1e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d1edull));
TAIL_STATIC(0x440820u,440);
}
B48d1ed:L48d1ed:{c.instructions+=25;NFSU2_TR(0x48d1ed);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B48d1f1:{NFSU2_TR(0x48d1f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d1f4:{NFSU2_TR(0x48d1f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B48d1fa:{NFSU2_TR(0x48d1fa);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))+u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B48d1fe:{NFSU2_TR(0x48d1fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48d201:{NFSU2_TR(0x48d201);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d204:{NFSU2_TR(0x48d204);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48d207:{NFSU2_TR(0x48d207);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d208:{NFSU2_TR(0x48d208);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d209:{NFSU2_TR(0x48d209);
w1(R+0,u8(u32(r1(R+0))|u32(u8(0x10ull))));
}
B48d20b:{NFSU2_TR(0x48d20b);
u8 U[4];
w4(U+0,u32(0x48cf90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d210:{NFSU2_TR(0x48d210);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d211:{NFSU2_TR(0x48d211);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48d214:{NFSU2_TR(0x48d214);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d218:{NFSU2_TR(0x48d218);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48d21a:{NFSU2_TR(0x48d21a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d21b:{NFSU2_TR(0x48d21b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B48d21e:{NFSU2_TR(0x48d21e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d21f:{NFSU2_TR(0x48d21f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d222:{NFSU2_TR(0x48d222);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B48d223:{NFSU2_TR(0x48d223);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B48d225:{NFSU2_TR(0x48d225);
w4(R+0,u32(~u32(r4(R+0))));
}
B48d227:{NFSU2_TR(0x48d227);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B48d229:{NFSU2_TR(0x48d229);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d22a:{NFSU2_TR(0x48d22a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d22full));
TAIL_STATIC(0x57b530u,57b);
}
B48d22f:L48d22f:{c.instructions+=1;NFSU2_TR(0x48d22f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B48d232:L48d232:{c.instructions+=3;NFSU2_TR(0x48d232);
__builtin_memmove((R+4),(R+12),4);
}
B48d234:{NFSU2_TR(0x48d234);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d235:{NFSU2_TR(0x48d235);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d23aull));
TAIL_STATIC(0x488ba0u,488);
}
B48d23a:L48d23a:{c.instructions+=2;NFSU2_TR(0x48d23a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48d23b:{NFSU2_TR(0x48d23b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48d23c:L48d23c:{c.instructions+=4;NFSU2_TR(0x48d23c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48d23d:{NFSU2_TR(0x48d23d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48d23e:{NFSU2_TR(0x48d23e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x8cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x8cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48d244:{NFSU2_TR(0x48d244);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d250:L48d250:{c.instructions+=6;NFSU2_TR(0x48d250);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d251:{NFSU2_TR(0x48d251);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d252:{NFSU2_TR(0x48d252);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48d256:{NFSU2_TR(0x48d256);
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
B48d258:{NFSU2_TR(0x48d258);
__builtin_memmove((R+12),(R+4),4);
}
B48d25a:{NFSU2_TR(0x48d25a);
if(r1(R+518)){{goto L48d2cc;}}
}
B48d25c:L48d25c:{c.instructions+=4;NFSU2_TR(0x48d25c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d25d:{NFSU2_TR(0x48d25d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48d261:{NFSU2_TR(0x48d261);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d263:{NFSU2_TR(0x48d263);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d271;}}
}
B48d265:L48d265:{c.instructions+=2;NFSU2_TR(0x48d265);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d266:{NFSU2_TR(0x48d266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d26bull));
TAIL_STATIC(0x48ced0u,48c);
}
B48d26b:L48d26b:{c.instructions+=3;NFSU2_TR(0x48d26b);
__builtin_memmove((R+28),(R+0),4);
}
B48d26d:{NFSU2_TR(0x48d26d);
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
B48d26f:{NFSU2_TR(0x48d26f);
if(r1(R+518)){{goto L48d2cb;}}
}
B48d271:L48d271:{c.instructions+=3;NFSU2_TR(0x48d271);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48d277:{NFSU2_TR(0x48d277);
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
B48d279:{NFSU2_TR(0x48d279);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d2cb;}}
}
B48d27b:L48d27b:{c.instructions+=3;NFSU2_TR(0x48d27b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d281:{NFSU2_TR(0x48d281);
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
B48d283:{NFSU2_TR(0x48d283);
if(r1(R+518)){{goto L48d2cb;}}
}
B48d285:L48d285:{c.instructions+=7;NFSU2_TR(0x48d285);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d28b:{NFSU2_TR(0x48d28b);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d28d:{NFSU2_TR(0x48d28d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d28f:{NFSU2_TR(0x48d28f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d290:{NFSU2_TR(0x48d290);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d291:{NFSU2_TR(0x48d291);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d292:{NFSU2_TR(0x48d292);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d297ull));
TAIL_STATIC(0x488bc0u,488);
}
B48d297:L48d297:{c.instructions+=4;NFSU2_TR(0x48d297);
__builtin_memmove((R+24),(R+0),4);
}
B48d299:{NFSU2_TR(0x48d299);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B48d29c:{NFSU2_TR(0x48d29c);
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
B48d29e:{NFSU2_TR(0x48d29e);
if(r1(R+518)){{goto L48d2cb;}}
}
B48d2a0:L48d2a0:{c.instructions+=3;NFSU2_TR(0x48d2a0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B48d2a4:{NFSU2_TR(0x48d2a4);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B48d2a9:{NFSU2_TR(0x48d2a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d2cb;}}
}
B48d2ab:L48d2ab:{c.instructions+=1;NFSU2_TR(0x48d2ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d2b0ull));
TAIL_STATIC(0x4022c0u,402);
}
B48d2b0:L48d2b0:{c.instructions+=3;NFSU2_TR(0x48d2b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48d2b3:{NFSU2_TR(0x48d2b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48d2b5:{NFSU2_TR(0x48d2b5);
if(r1(R+518)){{goto L48d2c2;}}
}
B48d2b7:L48d2b7:{c.instructions+=6;NFSU2_TR(0x48d2b7);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))|u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48d2b9:{NFSU2_TR(0x48d2b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48d2ba:{NFSU2_TR(0x48d2ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48d2bd:{NFSU2_TR(0x48d2bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48d2be:{NFSU2_TR(0x48d2be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48d2bf:{NFSU2_TR(0x48d2bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d2c2:L48d2c2:{c.instructions+=4;NFSU2_TR(0x48d2c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d2c3:{NFSU2_TR(0x48d2c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d2c4:{NFSU2_TR(0x48d2c4);
__builtin_memmove((R+4),(R+12),4);
}
B48d2c6:{NFSU2_TR(0x48d2c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d2cbull));
TAIL_STATIC(0x488d60u,488);
}
B48d2cb:L48d2cb:{c.instructions+=1;NFSU2_TR(0x48d2cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48d2cc:L48d2cc:{c.instructions+=3;NFSU2_TR(0x48d2cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48d2cd:{NFSU2_TR(0x48d2cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48d2ce:{NFSU2_TR(0x48d2ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d2e0:L48d2e0:{c.instructions+=7;NFSU2_TR(0x48d2e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d2e4:{NFSU2_TR(0x48d2e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d2e5:{NFSU2_TR(0x48d2e5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B48d2e7:{NFSU2_TR(0x48d2e7);
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
B48d2e9:{NFSU2_TR(0x48d2e9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d2ea:{NFSU2_TR(0x48d2ea);
__builtin_memmove((R+20),(R+4),4);
}
B48d2ec:{NFSU2_TR(0x48d2ec);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48d36a;}}
}
B48d2ee:L48d2ee:{c.instructions+=2;NFSU2_TR(0x48d2ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d2ef:{NFSU2_TR(0x48d2ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d2f0:L48d2f0:{c.instructions+=4;NFSU2_TR(0x48d2f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d2f4:{NFSU2_TR(0x48d2f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B48d2f7:{NFSU2_TR(0x48d2f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d2f9:{NFSU2_TR(0x48d2f9);
if(r1(R+518)){{goto L48d35f;}}
}
B48d2fb:L48d2fb:{c.instructions+=3;NFSU2_TR(0x48d2fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d2fc:{NFSU2_TR(0x48d2fc);
__builtin_memmove((R+4),(R+20),4);
}
B48d2fe:{NFSU2_TR(0x48d2fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d303ull));
TAIL_STATIC(0x48ced0u,48c);
}
B48d303:L48d303:{c.instructions+=3;NFSU2_TR(0x48d303);
__builtin_memmove((R+28),(R+0),4);
}
B48d305:{NFSU2_TR(0x48d305);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d307:{NFSU2_TR(0x48d307);
if(r1(R+518)){{goto L48d35f;}}
}
B48d309:L48d309:{c.instructions+=3;NFSU2_TR(0x48d309);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48d30f:{NFSU2_TR(0x48d30f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48d311:{NFSU2_TR(0x48d311);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d35f;}}
}
B48d313:L48d313:{c.instructions+=3;NFSU2_TR(0x48d313);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d319:{NFSU2_TR(0x48d319);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d31b:{NFSU2_TR(0x48d31b);
if(r1(R+518)){{goto L48d35f;}}
}
B48d31d:L48d31d:{c.instructions+=7;NFSU2_TR(0x48d31d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d323:{NFSU2_TR(0x48d323);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d325:{NFSU2_TR(0x48d325);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d327:{NFSU2_TR(0x48d327);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d328:{NFSU2_TR(0x48d328);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d329:{NFSU2_TR(0x48d329);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d32a:{NFSU2_TR(0x48d32a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d32full));
TAIL_STATIC(0x488bc0u,488);
}
B48d32f:L48d32f:{c.instructions+=4;NFSU2_TR(0x48d32f);
__builtin_memmove((R+24),(R+0),4);
}
B48d331:{NFSU2_TR(0x48d331);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B48d334:{NFSU2_TR(0x48d334);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d336:{NFSU2_TR(0x48d336);
if(r1(R+518)){{goto L48d35f;}}
}
B48d338:L48d338:{c.instructions+=3;NFSU2_TR(0x48d338);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))-u32(u16(0x1ull))));
s2(u32(r4(U+0)),r2(U+4));
}
B48d33c:{NFSU2_TR(0x48d33c);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B48d341:{NFSU2_TR(0x48d341);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d35f;}}
}
B48d343:L48d343:{c.instructions+=1;NFSU2_TR(0x48d343);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d348ull));
TAIL_STATIC(0x4022c0u,402);
}
B48d348:L48d348:{c.instructions+=3;NFSU2_TR(0x48d348);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48d34b:{NFSU2_TR(0x48d34b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48d34d:{NFSU2_TR(0x48d34d);
if(r1(R+518)){{goto L48d356;}}
}
B48d34f:L48d34f:{c.instructions+=3;NFSU2_TR(0x48d34f);
w1(R+0,u8(u32(r1(R+0))|u32(u8(0x20ull))));
}
B48d351:{NFSU2_TR(0x48d351);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48d354:{NFSU2_TR(0x48d354);
{goto L48d35f;}
}
B48d356:L48d356:{c.instructions+=4;NFSU2_TR(0x48d356);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d357:{NFSU2_TR(0x48d357);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d358:{NFSU2_TR(0x48d358);
__builtin_memmove((R+4),(R+20),4);
}
B48d35a:{NFSU2_TR(0x48d35a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d35full));
TAIL_STATIC(0x488d60u,488);
}
B48d35f:L48d35f:{c.instructions+=4;NFSU2_TR(0x48d35f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d363:{NFSU2_TR(0x48d363);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B48d364:{NFSU2_TR(0x48d364);
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
B48d366:{NFSU2_TR(0x48d366);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48d2f0u);}goto L48d2f0;}}
}
B48d368:L48d368:{c.instructions+=2;NFSU2_TR(0x48d368);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48d369:{NFSU2_TR(0x48d369);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48d36a:L48d36a:{c.instructions+=3;NFSU2_TR(0x48d36a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48d36b:{NFSU2_TR(0x48d36b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48d36c:{NFSU2_TR(0x48d36c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d370:L48d370:{c.instructions+=6;NFSU2_TR(0x48d370);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d374:{NFSU2_TR(0x48d374);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d375:{NFSU2_TR(0x48d375);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d376:{NFSU2_TR(0x48d376);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d377:{NFSU2_TR(0x48d377);
__builtin_memmove((R+12),(R+4),4);
}
B48d379:{NFSU2_TR(0x48d379);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d37eull));
TAIL_STATIC(0x48ce80u,48c);
}
B48d37e:L48d37e:{c.instructions+=3;NFSU2_TR(0x48d37e);
__builtin_memmove((R+28),(R+0),4);
}
B48d380:{NFSU2_TR(0x48d380);
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
B48d382:{NFSU2_TR(0x48d382);
if(r1(R+518)){{goto L48d3b8;}}
}
B48d384:L48d384:{c.instructions+=5;NFSU2_TR(0x48d384);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d38a:{NFSU2_TR(0x48d38a);
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
B48d38c:{NFSU2_TR(0x48d38c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d38d:{NFSU2_TR(0x48d38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48d393:{NFSU2_TR(0x48d393);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48d3b7;}}
}
B48d395:L48d395:{c.instructions+=2;NFSU2_TR(0x48d395);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d396:{NFSU2_TR(0x48d396);
__builtin_memmove((R+20),(R+0),4);
}
B48d398:L48d398:{c.instructions+=3;NFSU2_TR(0x48d398);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d39b:{NFSU2_TR(0x48d39b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d39d:{NFSU2_TR(0x48d39d);
if(r1(R+518)){{goto L48d3b0;}}
}
B48d39f:L48d39f:{c.instructions+=6;NFSU2_TR(0x48d39f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48d3a1:{NFSU2_TR(0x48d3a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d3a2:{NFSU2_TR(0x48d3a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d3a3:{NFSU2_TR(0x48d3a3);
__builtin_memmove((R+4),(R+12),4);
}
B48d3a5:{NFSU2_TR(0x48d3a5);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B48d3ab:{NFSU2_TR(0x48d3ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d3b0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48d250u);}goto L48d250;}
}
B48d3b0:L48d3b0:{c.instructions+=3;NFSU2_TR(0x48d3b0);
w1(R+512,carry<u32>(r4(R+24),u32(0x18ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B48d3b3:{NFSU2_TR(0x48d3b3);
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
B48d3b4:{NFSU2_TR(0x48d3b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48d398u);}goto L48d398;}}
}
B48d3b6:L48d3b6:{c.instructions+=1;NFSU2_TR(0x48d3b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48d3b7:L48d3b7:{c.instructions+=1;NFSU2_TR(0x48d3b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48d3b8:L48d3b8:{c.instructions+=3;NFSU2_TR(0x48d3b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48d3b9:{NFSU2_TR(0x48d3b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48d3ba:{NFSU2_TR(0x48d3ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d3c0:L48d3c0:{c.instructions+=7;NFSU2_TR(0x48d3c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d3c1:{NFSU2_TR(0x48d3c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d3c2:{NFSU2_TR(0x48d3c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48d3c5:{NFSU2_TR(0x48d3c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d3c6:{NFSU2_TR(0x48d3c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48d3c9:{NFSU2_TR(0x48d3c9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48d3cb:{NFSU2_TR(0x48d3cb);
if(r1(R+518)){{goto L48d400;}}
}
B48d3cd:L48d3cd:{c.instructions+=1;NFSU2_TR(0x48d3cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48d3d1:L48d3d1:{c.instructions+=2;NFSU2_TR(0x48d3d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d3d3:{NFSU2_TR(0x48d3d3);
if(r1(R+518)){{goto L48d3e6;}}
}
B48d3d5:L48d3d5:{c.instructions+=4;NFSU2_TR(0x48d3d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48d3d8:{NFSU2_TR(0x48d3d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d3d9:{NFSU2_TR(0x48d3d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d3da:{NFSU2_TR(0x48d3da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d3dfull));
TAIL_STATIC(0x43dc30u,43d);
}
B48d3df:L48d3df:{c.instructions+=3;NFSU2_TR(0x48d3df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48d3e2:{NFSU2_TR(0x48d3e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d3e4:{NFSU2_TR(0x48d3e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d3fa;}}
}
B48d3e6:L48d3e6:{c.instructions+=3;NFSU2_TR(0x48d3e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d3ec:{NFSU2_TR(0x48d3ec);
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
B48d3ee:{NFSU2_TR(0x48d3ee);
if(r1(R+518)){{goto L48d408;}}
}
B48d3f0:L48d3f0:{c.instructions+=3;NFSU2_TR(0x48d3f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d3f6:{NFSU2_TR(0x48d3f6);
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
B48d3f8:{NFSU2_TR(0x48d3f8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L48d408;}}
}
B48d3fa:L48d3fa:{c.instructions+=3;NFSU2_TR(0x48d3fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B48d3fc:{NFSU2_TR(0x48d3fc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48d3fe:{NFSU2_TR(0x48d3fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48d3d1u);}goto L48d3d1;}}
}
B48d400:L48d400:{c.instructions+=5;NFSU2_TR(0x48d400);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48d401:{NFSU2_TR(0x48d401);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48d402:{NFSU2_TR(0x48d402);
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
B48d404:{NFSU2_TR(0x48d404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48d405:{NFSU2_TR(0x48d405);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d408:L48d408:{c.instructions+=5;NFSU2_TR(0x48d408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48d409:{NFSU2_TR(0x48d409);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48d40a:{NFSU2_TR(0x48d40a);
w4(R+0,u32(0x1ull));
}
B48d40f:{NFSU2_TR(0x48d40f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48d410:{NFSU2_TR(0x48d410);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d420:L48d420:{c.instructions+=11;NFSU2_TR(0x48d420);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x110ull))));
}
B48d426:{NFSU2_TR(0x48d426);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d427:{NFSU2_TR(0x48d427);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d428:{NFSU2_TR(0x48d428);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48d42a:{NFSU2_TR(0x48d42a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d42b:{NFSU2_TR(0x48d42b);
__builtin_memmove((R+20),(R+4),4);
}
B48d42d:{NFSU2_TR(0x48d42d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d42e:{NFSU2_TR(0x48d42e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d432:{NFSU2_TR(0x48d432);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d436:{NFSU2_TR(0x48d436);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d43a:{NFSU2_TR(0x48d43a);
__builtin_memmove((R+12),(R+12),4);
}
B48d440:L48d440:{c.instructions+=5;NFSU2_TR(0x48d440);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d447:{NFSU2_TR(0x48d447);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48d449:{NFSU2_TR(0x48d449);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d44b:{NFSU2_TR(0x48d44b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d44f:{NFSU2_TR(0x48d44f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48d60d;}}
}
B48d455:L48d455:{c.instructions+=5;NFSU2_TR(0x48d455);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48d45c:{NFSU2_TR(0x48d45c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B48d45f:{NFSU2_TR(0x48d45f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d460:{NFSU2_TR(0x48d460);
__builtin_memmove((R+4),(R+20),4);
}
B48d462:{NFSU2_TR(0x48d462);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d467ull));
TAIL_STATIC(0x48cf40u,48c);
}
B48d467:L48d467:{c.instructions+=3;NFSU2_TR(0x48d467);
__builtin_memmove((R+24),(R+0),4);
}
B48d469:{NFSU2_TR(0x48d469);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d46b:{NFSU2_TR(0x48d46b);
if(r1(R+518)){{goto L48d5f1;}}
}
B48d471:L48d471:{c.instructions+=2;NFSU2_TR(0x48d471);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B48d476:{NFSU2_TR(0x48d476);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d5f1;}}
}
B48d47c:L48d47c:{c.instructions+=2;NFSU2_TR(0x48d47c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B48d480:{NFSU2_TR(0x48d480);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d5f1;}}
}
B48d486:L48d486:{c.instructions+=3;NFSU2_TR(0x48d486);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d487:{NFSU2_TR(0x48d487);
__builtin_memmove((R+4),(R+20),4);
}
B48d489:{NFSU2_TR(0x48d489);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d48eull));
TAIL_STATIC(0x48ced0u,48c);
}
B48d48e:L48d48e:{c.instructions+=6;NFSU2_TR(0x48d48e);
__builtin_memmove((R+20),(R+0),4);
}
B48d490:{NFSU2_TR(0x48d490);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d494:{NFSU2_TR(0x48d494);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B48d496:{NFSU2_TR(0x48d496);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B48d498:{NFSU2_TR(0x48d498);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d49a:{NFSU2_TR(0x48d49a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48d4b9;}}
}
B48d49c:L48d49c:{c.instructions+=1;NFSU2_TR(0x48d49c);
__builtin_memmove((R+16),(R+16),4);
}
B48d4a0:L48d4a0:{c.instructions+=7;NFSU2_TR(0x48d4a0);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+28))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B48d4a3:{NFSU2_TR(0x48d4a3);
__builtin_memmove((R+0),(R+518),1);
}
B48d4a6:{NFSU2_TR(0x48d4a6);
w1(R+8,u8(u32(r1(R+8))|u32(r1(R+0))));
}
B48d4a8:{NFSU2_TR(0x48d4a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d4ac:{NFSU2_TR(0x48d4ac);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B48d4ad:{NFSU2_TR(0x48d4ad);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48d4af:{NFSU2_TR(0x48d4af);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48d4a0u);}goto L48d4a0;}}
}
B48d4b1:L48d4b1:{c.instructions+=2;NFSU2_TR(0x48d4b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48d4b3:{NFSU2_TR(0x48d4b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d5f1;}}
}
B48d4b9:L48d4b9:{c.instructions+=3;NFSU2_TR(0x48d4b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d4bd:{NFSU2_TR(0x48d4bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d4bf:{NFSU2_TR(0x48d4bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d54c;}}
}
B48d4c5:L48d4c5:{c.instructions+=15;NFSU2_TR(0x48d4c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B48d4c8:{NFSU2_TR(0x48d4c8);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B48d4cb:{NFSU2_TR(0x48d4cb);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B48d4cd:{NFSU2_TR(0x48d4cd);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+4))-u32(r1(R+4))));
w1(R+4,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B48d4cf:{NFSU2_TR(0x48d4cf);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x23ull))));
}
B48d4d2:{NFSU2_TR(0x48d4d2);
w1(R+4,u8(u32(r1(R+4))+u32(u8(0x20ull))));
}
B48d4d5:{NFSU2_TR(0x48d4d5);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B48d4d8:{NFSU2_TR(0x48d4d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d4d9:{NFSU2_TR(0x48d4d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d4da:{NFSU2_TR(0x48d4da);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x8ull))));
}
B48d4dd:{NFSU2_TR(0x48d4dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d4de:{NFSU2_TR(0x48d4de);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48d4e2:{NFSU2_TR(0x48d4e2);
u8 U[4];
w4(U+0,u32(0x78d988ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d4e7:{NFSU2_TR(0x48d4e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d4e8:{NFSU2_TR(0x48d4e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d4edull));
TAIL_STATIC(0x4400d0u,440);
}
B48d4ed:L48d4ed:{c.instructions+=10;NFSU2_TR(0x48d4ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d4f1:{NFSU2_TR(0x48d4f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48d4f4:{NFSU2_TR(0x48d4f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48d4f6:{NFSU2_TR(0x48d4f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48d4f9:{NFSU2_TR(0x48d4f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B48d4fc:{NFSU2_TR(0x48d4fc);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B48d4fe:{NFSU2_TR(0x48d4fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48d500:{NFSU2_TR(0x48d500);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d507:{NFSU2_TR(0x48d507);
w4(R+20,u32(0x2000ull));
}
B48d50c:{NFSU2_TR(0x48d50c);
if(r1(R+518)){{goto L48d515;}}
}
B48d50e:L48d50e:{c.instructions+=2;NFSU2_TR(0x48d50e);
w4(R+20,u32(0x2008ull));
}
B48d513:{NFSU2_TR(0x48d513);
{goto L48d524;}
}
B48d515:L48d515:{c.instructions+=2;NFSU2_TR(0x48d515);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d517:{NFSU2_TR(0x48d517);
if(r1(R+518)){{goto L48d524;}}
}
B48d519:L48d519:{c.instructions+=3;NFSU2_TR(0x48d519);
__builtin_memmove((R+20),(R+0),4);
}
B48d51b:{NFSU2_TR(0x48d51b);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0x7ull))));
}
B48d51e:{NFSU2_TR(0x48d51e);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0x2000ull))));
}
B48d524:L48d524:{c.instructions+=2;NFSU2_TR(0x48d524);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d525:{NFSU2_TR(0x48d525);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d52aull));
TAIL_STATIC(0x43e910u,43e);
}
B48d52a:L48d52a:{c.instructions+=3;NFSU2_TR(0x48d52a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48d52d:{NFSU2_TR(0x48d52d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48d52f:{NFSU2_TR(0x48d52f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48d543;}}
}
B48d531:L48d531:{c.instructions+=3;NFSU2_TR(0x48d531);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d532:{NFSU2_TR(0x48d532);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d533:{NFSU2_TR(0x48d533);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d538ull));
TAIL_STATIC(0x440820u,440);
}
B48d538:L48d538:{c.instructions+=3;NFSU2_TR(0x48d538);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48d53b:{NFSU2_TR(0x48d53b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d53e:{NFSU2_TR(0x48d53e);
{goto L48d5f1;}
}
B48d543:L48d543:{c.instructions+=2;NFSU2_TR(0x48d543);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B48d547:{NFSU2_TR(0x48d547);
{goto L48d5f1;}
}
B48d54c:L48d54c:{c.instructions+=2;NFSU2_TR(0x48d54c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48d54f:{NFSU2_TR(0x48d54f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d5d5;}}
}
B48d555:L48d555:{c.instructions+=2;NFSU2_TR(0x48d555);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B48d559:{NFSU2_TR(0x48d559);
if(r1(R+518)){{goto L48d5f1;}}
}
B48d55f:L48d55f:{c.instructions+=7;NFSU2_TR(0x48d55f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d560:{NFSU2_TR(0x48d560);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x8ull))));
}
B48d563:{NFSU2_TR(0x48d563);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d564:{NFSU2_TR(0x48d564);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48d56b:{NFSU2_TR(0x48d56b);
u8 U[4];
w4(U+0,u32(0x78d978ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d570:{NFSU2_TR(0x48d570);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d571:{NFSU2_TR(0x48d571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d576ull));
TAIL_STATIC(0x4400d0u,440);
}
B48d576:L48d576:{c.instructions+=9;NFSU2_TR(0x48d576);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d57a:{NFSU2_TR(0x48d57a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48d57c:{NFSU2_TR(0x48d57c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48d57f:{NFSU2_TR(0x48d57f);
u8 U[8];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d586:{NFSU2_TR(0x48d586);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B48d589:{NFSU2_TR(0x48d589);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B48d58b:{NFSU2_TR(0x48d58b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d58d:{NFSU2_TR(0x48d58d);
w4(R+20,u32(0x2000ull));
}
B48d592:{NFSU2_TR(0x48d592);
if(r1(R+518)){{goto L48d59f;}}
}
B48d594:L48d594:{c.instructions+=3;NFSU2_TR(0x48d594);
__builtin_memmove((R+20),(R+0),4);
}
B48d596:{NFSU2_TR(0x48d596);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0x7ull))));
}
B48d599:{NFSU2_TR(0x48d599);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0x2000ull))));
}
B48d59f:L48d59f:{c.instructions+=4;NFSU2_TR(0x48d59f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48d5a2:{NFSU2_TR(0x48d5a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d5a3:{NFSU2_TR(0x48d5a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48d5aa:{NFSU2_TR(0x48d5aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d5afull));
TAIL_STATIC(0x43e910u,43e);
}
B48d5af:L48d5af:{c.instructions+=3;NFSU2_TR(0x48d5af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48d5b2:{NFSU2_TR(0x48d5b2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48d5b4:{NFSU2_TR(0x48d5b4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48d5c5;}}
}
B48d5b6:L48d5b6:{c.instructions+=3;NFSU2_TR(0x48d5b6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d5b7:{NFSU2_TR(0x48d5b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d5b8:{NFSU2_TR(0x48d5b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d5bdull));
TAIL_STATIC(0x440820u,440);
}
B48d5bd:L48d5bd:{c.instructions+=3;NFSU2_TR(0x48d5bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48d5c0:{NFSU2_TR(0x48d5c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d5c3:{NFSU2_TR(0x48d5c3);
{goto L48d5c9;}
}
B48d5c5:L48d5c5:{c.instructions+=1;NFSU2_TR(0x48d5c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B48d5c9:L48d5c9:{c.instructions+=2;NFSU2_TR(0x48d5c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d5cb:{NFSU2_TR(0x48d5cb);
if(r1(R+518)){{goto L48d5f1;}}
}
B48d5cd:L48d5cd:{c.instructions+=2;NFSU2_TR(0x48d5cd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d5ce:{NFSU2_TR(0x48d5ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d5d3ull));
TAIL_STATIC(0x440540u,440);
}
B48d5d3:L48d5d3:{c.instructions+=1;NFSU2_TR(0x48d5d3);
{goto L48d5ee;}
}
B48d5d5:L48d5d5:{c.instructions+=2;NFSU2_TR(0x48d5d5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48d5d8:{NFSU2_TR(0x48d5d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d5f1;}}
}
B48d5da:L48d5da:{c.instructions+=3;NFSU2_TR(0x48d5da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d5dd:{NFSU2_TR(0x48d5dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d5df:{NFSU2_TR(0x48d5df);
if(r1(R+518)){{goto L48d5f1;}}
}
B48d5e1:L48d5e1:{c.instructions+=2;NFSU2_TR(0x48d5e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d5e2:{NFSU2_TR(0x48d5e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d5e7ull));
TAIL_STATIC(0x440540u,440);
}
B48d5e7:L48d5e7:{c.instructions+=1;NFSU2_TR(0x48d5e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48d5ee:L48d5ee:{c.instructions+=1;NFSU2_TR(0x48d5ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48d5f1:L48d5f1:{c.instructions+=7;NFSU2_TR(0x48d5f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d5f5:{NFSU2_TR(0x48d5f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d5fc:{NFSU2_TR(0x48d5fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B48d600:{NFSU2_TR(0x48d600);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B48d601:{NFSU2_TR(0x48d601);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48d603:{NFSU2_TR(0x48d603);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d607:{NFSU2_TR(0x48d607);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48d455u);}goto L48d455;}}
}
B48d60d:L48d60d:{c.instructions+=5;NFSU2_TR(0x48d60d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d611:{NFSU2_TR(0x48d611);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B48d612:{NFSU2_TR(0x48d612);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48d615:{NFSU2_TR(0x48d615);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d619:{NFSU2_TR(0x48d619);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48d440u);}goto L48d440;}}
}
B48d61f:L48d61f:{c.instructions+=7;NFSU2_TR(0x48d61f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d623:{NFSU2_TR(0x48d623);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48d624:{NFSU2_TR(0x48d624);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48d625:{NFSU2_TR(0x48d625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48d626:{NFSU2_TR(0x48d626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48d627:{NFSU2_TR(0x48d627);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x110ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x110ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x110ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48d62d:{NFSU2_TR(0x48d62d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d630:L48d630:{c.instructions+=7;NFSU2_TR(0x48d630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x428ull))));
}
B48d636:{NFSU2_TR(0x48d636);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d637:{NFSU2_TR(0x48d637);
u8 U[8];
w4(U+0,u32(u32(u32(0x438ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48d63e:{NFSU2_TR(0x48d63e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d63f:{NFSU2_TR(0x48d63f);
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
B48d641:{NFSU2_TR(0x48d641);
w4(R+4,u32(0xaull));
}
B48d646:{NFSU2_TR(0x48d646);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B48d64a:L48d64a:{c.instructions+=1;NFSU2_TR(0x48d64a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L48d64c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48d64au);}goto L48d64a;}
}
B48d64c:L48d64c:{c.instructions+=12;NFSU2_TR(0x48d64c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d652:{NFSU2_TR(0x48d652);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d658:{NFSU2_TR(0x48d658);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d65c:{NFSU2_TR(0x48d65c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48d65f:{NFSU2_TR(0x48d65f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d663:{NFSU2_TR(0x48d663);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48d666:{NFSU2_TR(0x48d666);
u8 U[8];
w4(U+0,u32(u32(u32(0x434ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d66d:{NFSU2_TR(0x48d66d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48d671:{NFSU2_TR(0x48d671);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d672:{NFSU2_TR(0x48d672);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d676:{NFSU2_TR(0x48d676);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d67a:{NFSU2_TR(0x48d67a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d67dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48d67d:L48d67d:{c.instructions+=12;NFSU2_TR(0x48d67d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d681:{NFSU2_TR(0x48d681);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48d685:{NFSU2_TR(0x48d685);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d689:{NFSU2_TR(0x48d689);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d68f:{NFSU2_TR(0x48d68f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d693:{NFSU2_TR(0x48d693);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d699:{NFSU2_TR(0x48d699);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48d69d:{NFSU2_TR(0x48d69d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48d6a0:{NFSU2_TR(0x48d6a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d6a2:{NFSU2_TR(0x48d6a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d6a8:{NFSU2_TR(0x48d6a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d6ae:{NFSU2_TR(0x48d6ae);
if(r1(R+518)){{goto L48d736;}}
}
B48d6b4:L48d6b4:{c.instructions+=7;NFSU2_TR(0x48d6b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d6b5:{NFSU2_TR(0x48d6b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d6b9:{NFSU2_TR(0x48d6b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d6ba:{NFSU2_TR(0x48d6ba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d6bc:{NFSU2_TR(0x48d6bc);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d6be:{NFSU2_TR(0x48d6be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d6bf:{NFSU2_TR(0x48d6bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d6c4ull));
TAIL_STATIC(0x57cef0u,57c);
}
B48d6c4:L48d6c4:{c.instructions+=6;NFSU2_TR(0x48d6c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d6c5:{NFSU2_TR(0x48d6c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48d6c9:{NFSU2_TR(0x48d6c9);
u8 U[4];
w4(U+0,u32(0x78d998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d6ce:{NFSU2_TR(0x48d6ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d6cf:{NFSU2_TR(0x48d6cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d6d5:{NFSU2_TR(0x48d6d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d6daull));
TAIL_STATIC(0x4400d0u,440);
}
B48d6da:L48d6da:{c.instructions+=5;NFSU2_TR(0x48d6da);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B48d6e1:{NFSU2_TR(0x48d6e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B48d6e4:{NFSU2_TR(0x48d6e4);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B48d6e7:{NFSU2_TR(0x48d6e7);
w4(R+28,u32(0x2000ull));
}
B48d6ec:{NFSU2_TR(0x48d6ec);
if(r1(R+518)){{goto L48d714;}}
}
B48d6ee:L48d6ee:{c.instructions+=3;NFSU2_TR(0x48d6ee);
w4(R+8,u32(s32(s16(r2(R+0)))));
}
B48d6f1:{NFSU2_TR(0x48d6f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d6f2:{NFSU2_TR(0x48d6f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d6f7ull));
TAIL_STATIC(0x43e910u,43e);
}
B48d6f7:L48d6f7:{c.instructions+=4;NFSU2_TR(0x48d6f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d6fb:{NFSU2_TR(0x48d6fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48d6fe:{NFSU2_TR(0x48d6fe);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48d700:{NFSU2_TR(0x48d700);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48d714;}}
}
B48d702:L48d702:{c.instructions+=5;NFSU2_TR(0x48d702);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48d704:{NFSU2_TR(0x48d704);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48d70a:{NFSU2_TR(0x48d70a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ull))));
}
B48d70d:{NFSU2_TR(0x48d70d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2008ull))));
}
B48d712:{NFSU2_TR(0x48d712);
__builtin_memmove((R+28),(R+0),4);
}
B48d714:L48d714:{c.instructions+=5;NFSU2_TR(0x48d714);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48d718:{NFSU2_TR(0x48d718);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d719:{NFSU2_TR(0x48d719);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d71f:{NFSU2_TR(0x48d71f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d720:{NFSU2_TR(0x48d720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d725ull));
TAIL_STATIC(0x570fa0u,570);
}
B48d725:L48d725:{c.instructions+=4;NFSU2_TR(0x48d725);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d72b:{NFSU2_TR(0x48d72b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d72c:{NFSU2_TR(0x48d72c);
u8 U[4];
w4(U+0,u32(0x488de0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d731:{NFSU2_TR(0x48d731);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d736ull));
TAIL_STATIC(0x57bd70u,57b);
}
B48d736:L48d736:{c.instructions+=3;NFSU2_TR(0x48d736);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d73c:{NFSU2_TR(0x48d73c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d73e:{NFSU2_TR(0x48d73e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d775;}}
}
B48d740:L48d740:{c.instructions+=7;NFSU2_TR(0x48d740);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d746:{NFSU2_TR(0x48d746);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48d749:{NFSU2_TR(0x48d749);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d74a:{NFSU2_TR(0x48d74a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48d74d:{NFSU2_TR(0x48d74d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d74e:{NFSU2_TR(0x48d74e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48d758:{NFSU2_TR(0x48d758);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d75dull));
TAIL_STATIC(0x440540u,440);
}
B48d75d:L48d75d:{c.instructions+=4;NFSU2_TR(0x48d75d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48d760:{NFSU2_TR(0x48d760);
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
B48d762:{NFSU2_TR(0x48d762);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48d76c:{NFSU2_TR(0x48d76c);
if(r1(R+518)){{goto L48d774;}}
}
B48d76e:L48d76e:{c.instructions+=2;NFSU2_TR(0x48d76e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d76f:{NFSU2_TR(0x48d76f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d771ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B48d771:L48d771:{c.instructions+=1;NFSU2_TR(0x48d771);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48d774:L48d774:{c.instructions+=1;NFSU2_TR(0x48d774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48d775:L48d775:{c.instructions+=4;NFSU2_TR(0x48d775);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48d776:{NFSU2_TR(0x48d776);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48d777:{NFSU2_TR(0x48d777);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x428ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x428ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x428ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48d77d:{NFSU2_TR(0x48d77d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d780:L48d780:{c.instructions+=3;NFSU2_TR(0x48d780);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d783:{NFSU2_TR(0x48d783);
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
B48d785:{NFSU2_TR(0x48d785);
if(r1(R+518)){{goto L48d7d8;}}
}
B48d787:L48d787:{c.instructions+=5;NFSU2_TR(0x48d787);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d78a:{NFSU2_TR(0x48d78a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d78b:{NFSU2_TR(0x48d78b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48d78f:{NFSU2_TR(0x48d78f);
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
B48d791:{NFSU2_TR(0x48d791);
if(r1(R+518)){{goto L48d7d7;}}
}
B48d793:L48d793:{c.instructions+=6;NFSU2_TR(0x48d793);
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
B48d795:{NFSU2_TR(0x48d795);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48d797:{NFSU2_TR(0x48d797);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48d79a:{NFSU2_TR(0x48d79a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B48d79c:{NFSU2_TR(0x48d79c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d79f:{NFSU2_TR(0x48d79f);
if(r1(R+518)){{goto L48d7be;}}
}
B48d7a1:L48d7a1:{c.instructions+=9;NFSU2_TR(0x48d7a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48d7a7:{NFSU2_TR(0x48d7a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48d7ad:{NFSU2_TR(0x48d7ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B48d7af:{NFSU2_TR(0x48d7af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d7b2:{NFSU2_TR(0x48d7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d7b5:{NFSU2_TR(0x48d7b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d7b8:{NFSU2_TR(0x48d7b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48d7ba:{NFSU2_TR(0x48d7ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48d7bb:{NFSU2_TR(0x48d7bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d7be:L48d7be:{c.instructions+=6;NFSU2_TR(0x48d7be);
__builtin_memmove((R+0),gp(0x82dbc4),4);
}
B48d7c3:{NFSU2_TR(0x48d7c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48d7c5:{NFSU2_TR(0x48d7c5);
__builtin_memmove(gp(0x82dbc4),(R+4),4);
}
B48d7cb:{NFSU2_TR(0x48d7cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d7ce:{NFSU2_TR(0x48d7ce);
u8 U[4];
w4(U+0,u32(0x82dbc0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B48d7d4:{NFSU2_TR(0x48d7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d7d7:L48d7d7:{c.instructions+=1;NFSU2_TR(0x48d7d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48d7d8:L48d7d8:{c.instructions+=1;NFSU2_TR(0x48d7d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d7e0:L48d7e0:{c.instructions+=5;NFSU2_TR(0x48d7e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d7e3:{NFSU2_TR(0x48d7e3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B48d7e5:{NFSU2_TR(0x48d7e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B48d7e8:{NFSU2_TR(0x48d7e8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48d7ea:{NFSU2_TR(0x48d7ea);
if(r1(R+518)){{goto L48d833;}}
}
B48d7ec:L48d7ec:{c.instructions+=22;NFSU2_TR(0x48d7ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d7ef:{NFSU2_TR(0x48d7ef);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48d7f2:{NFSU2_TR(0x48d7f2);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48d7f5:{NFSU2_TR(0x48d7f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48d7f8:{NFSU2_TR(0x48d7f8);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48d7fb:{NFSU2_TR(0x48d7fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B48d7ff:{NFSU2_TR(0x48d7ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d802:{NFSU2_TR(0x48d802);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d806:{NFSU2_TR(0x48d806);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48d808:{NFSU2_TR(0x48d808);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48d80a:{NFSU2_TR(0x48d80a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d80e:{NFSU2_TR(0x48d80e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48d811:{NFSU2_TR(0x48d811);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d815:{NFSU2_TR(0x48d815);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48d818:{NFSU2_TR(0x48d818);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d81c:{NFSU2_TR(0x48d81c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48d820:{NFSU2_TR(0x48d820);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d823:{NFSU2_TR(0x48d823);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48d825:{NFSU2_TR(0x48d825);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d828:{NFSU2_TR(0x48d828);
w4(R+0,u32(0x1ull));
}
B48d82d:{NFSU2_TR(0x48d82d);
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
B48d830:{NFSU2_TR(0x48d830);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d833:L48d833:{c.instructions+=11;NFSU2_TR(0x48d833);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d837:{NFSU2_TR(0x48d837);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48d839:{NFSU2_TR(0x48d839);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d83c:{NFSU2_TR(0x48d83c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d83f:{NFSU2_TR(0x48d83f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d843:{NFSU2_TR(0x48d843);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48d845:{NFSU2_TR(0x48d845);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d848:{NFSU2_TR(0x48d848);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d84b:{NFSU2_TR(0x48d84b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48d84d:{NFSU2_TR(0x48d84d);
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
B48d850:{NFSU2_TR(0x48d850);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d860:L48d860:{c.instructions+=3;NFSU2_TR(0x48d860);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d863:{NFSU2_TR(0x48d863);
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
B48d865:{NFSU2_TR(0x48d865);
if(r1(R+518)){{goto L48d88e;}}
}
B48d867:L48d867:{c.instructions+=4;NFSU2_TR(0x48d867);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d868:{NFSU2_TR(0x48d868);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48d86c:{NFSU2_TR(0x48d86c);
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
B48d86e:{NFSU2_TR(0x48d86e);
if(r1(R+518)){{goto L48d88d;}}
}
B48d870:L48d870:{c.instructions+=4;NFSU2_TR(0x48d870);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d873:{NFSU2_TR(0x48d873);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B48d877:{NFSU2_TR(0x48d877);
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
B48d879:{NFSU2_TR(0x48d879);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48d88d;}}
}
B48d87b:L48d87b:{c.instructions+=2;NFSU2_TR(0x48d87b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48d87f:{NFSU2_TR(0x48d87f);
}
B48d880:L48d880:{c.instructions+=2;NFSU2_TR(0x48d880);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B48d882:{NFSU2_TR(0x48d882);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d887;}}
}
B48d884:L48d884:{c.instructions+=1;NFSU2_TR(0x48d884);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d887:L48d887:{c.instructions+=3;NFSU2_TR(0x48d887);
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B48d88a:{NFSU2_TR(0x48d88a);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48d88b:{NFSU2_TR(0x48d88b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48d880u);}goto L48d880;}}
}
B48d88d:L48d88d:{c.instructions+=1;NFSU2_TR(0x48d88d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48d88e:L48d88e:{c.instructions+=1;NFSU2_TR(0x48d88e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d8a0:L48d8a0:{c.instructions+=3;NFSU2_TR(0x48d8a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d8a3:{NFSU2_TR(0x48d8a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d8a5:{NFSU2_TR(0x48d8a5);
if(r1(R+518)){{goto L48d8dd;}}
}
B48d8a7:L48d8a7:{c.instructions+=4;NFSU2_TR(0x48d8a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d8ad:{NFSU2_TR(0x48d8ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d8af:{NFSU2_TR(0x48d8af);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B48d8b3:{NFSU2_TR(0x48d8b3);
if(r1(R+518)){{goto L48d8dd;}}
}
B48d8b5:L48d8b5:{c.instructions+=2;NFSU2_TR(0x48d8b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d8b7:{NFSU2_TR(0x48d8b7);
if(r1(R+518)){{goto L48d8dd;}}
}
B48d8b9:L48d8b9:{c.instructions+=3;NFSU2_TR(0x48d8b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48d8bd:{NFSU2_TR(0x48d8bd);
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
B48d8bf:{NFSU2_TR(0x48d8bf);
if(r1(R+518)){{goto L48d8d8;}}
}
B48d8c1:L48d8c1:{c.instructions+=2;NFSU2_TR(0x48d8c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B48d8c3:{NFSU2_TR(0x48d8c3);
if(r1(R+512)){{goto L48d8dd;}}
}
B48d8c5:L48d8c5:{c.instructions+=5;NFSU2_TR(0x48d8c5);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffbull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B48d8c9:{NFSU2_TR(0x48d8c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B48d8cc:{NFSU2_TR(0x48d8cc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B48d8ce:{NFSU2_TR(0x48d8ce);
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
B48d8d0:{NFSU2_TR(0x48d8d0);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L48d8dd;}}
}
B48d8d2:L48d8d2:{c.instructions+=2;NFSU2_TR(0x48d8d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48d8d5:{NFSU2_TR(0x48d8d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d8d8:L48d8d8:{c.instructions+=2;NFSU2_TR(0x48d8d8);
__builtin_memmove((R+0),(R+4),4);
}
B48d8da:{NFSU2_TR(0x48d8da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d8dd:L48d8dd:{c.instructions+=2;NFSU2_TR(0x48d8dd);
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
B48d8df:{NFSU2_TR(0x48d8df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d8f0:L48d8f0:{c.instructions+=3;NFSU2_TR(0x48d8f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d8f3:{NFSU2_TR(0x48d8f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d8f5:{NFSU2_TR(0x48d8f5);
if(r1(R+518)){{goto L48d8fc;}}
}
B48d8f7:L48d8f7:{c.instructions+=1;NFSU2_TR(0x48d8f7);
TAIL_STATIC(0x488fa0u,488);
}
B48d8fc:L48d8fc:{c.instructions+=2;NFSU2_TR(0x48d8fc);
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
B48d8fe:{NFSU2_TR(0x48d8fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d910:L48d910:{c.instructions+=10;NFSU2_TR(0x48d910);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d914:{NFSU2_TR(0x48d914);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d917:{NFSU2_TR(0x48d917);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d918:{NFSU2_TR(0x48d918);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d919:{NFSU2_TR(0x48d919);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d91a:{NFSU2_TR(0x48d91a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48d91d:{NFSU2_TR(0x48d91d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B48d921:{NFSU2_TR(0x48d921);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48d923:{NFSU2_TR(0x48d923);
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
B48d925:{NFSU2_TR(0x48d925);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L48d994;}}
}
B48d927:L48d927:{c.instructions+=3;NFSU2_TR(0x48d927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48d929:{NFSU2_TR(0x48d929);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134002ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d92e:{NFSU2_TR(0x48d92e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d951;}}
}
B48d930:L48d930:{c.instructions+=8;NFSU2_TR(0x48d930);
__builtin_memmove((R+0),gp(0x830d20),4);
}
B48d935:{NFSU2_TR(0x48d935);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48d938:{NFSU2_TR(0x48d938);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48d93a:{NFSU2_TR(0x48d93a);
__builtin_memmove(gp(0x830d20),(R+24),4);
}
B48d940:{NFSU2_TR(0x48d940);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d943:{NFSU2_TR(0x48d943);
u8 U[4];
w4(U+0,u32(0x830d1cull));
s4(u32(r4(R+24)),r4(U+0));
}
B48d949:{NFSU2_TR(0x48d949);
s4(0x82d380,u32(u32(m4(0x82d380))+u32(u32(0x1ull))));
}
B48d94f:{NFSU2_TR(0x48d94f);
{goto L48d97f;}
}
B48d951:L48d951:{c.instructions+=2;NFSU2_TR(0x48d951);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134003ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d956:{NFSU2_TR(0x48d956);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d960;}}
}
B48d958:L48d958:{c.instructions+=3;NFSU2_TR(0x48d958);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B48d95b:{NFSU2_TR(0x48d95b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d95e:{NFSU2_TR(0x48d95e);
{goto L48d97f;}
}
B48d960:L48d960:{c.instructions+=2;NFSU2_TR(0x48d960);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x134004ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d965:{NFSU2_TR(0x48d965);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d96f;}}
}
B48d967:L48d967:{c.instructions+=3;NFSU2_TR(0x48d967);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48d96a:{NFSU2_TR(0x48d96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d96d:{NFSU2_TR(0x48d96d);
{goto L48d97f;}
}
B48d96f:L48d96f:{c.instructions+=2;NFSU2_TR(0x48d96f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80134008ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48d974:{NFSU2_TR(0x48d974);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48d97f;}}
}
B48d976:L48d976:{c.instructions+=2;NFSU2_TR(0x48d976);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d977:{NFSU2_TR(0x48d977);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d97cull));
TAIL_STATIC(0x5bb720u,5bb);
}
B48d97c:L48d97c:{c.instructions+=1;NFSU2_TR(0x48d97c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48d97f:L48d97f:{c.instructions+=4;NFSU2_TR(0x48d97f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d982:{NFSU2_TR(0x48d982);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B48d986:{NFSU2_TR(0x48d986);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B48d988:{NFSU2_TR(0x48d988);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48d927u);}goto L48d927;}}
}
B48d98a:L48d98a:{c.instructions+=2;NFSU2_TR(0x48d98a);
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
B48d98c:{NFSU2_TR(0x48d98c);
if(r1(R+518)){{goto L48d994;}}
}
B48d98e:L48d98e:{c.instructions+=1;NFSU2_TR(0x48d98e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x72ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B48d994:L48d994:{c.instructions+=11;NFSU2_TR(0x48d994);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48d99a:{NFSU2_TR(0x48d99a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48d99c:{NFSU2_TR(0x48d99c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d99f:{NFSU2_TR(0x48d99f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48d9a5:{NFSU2_TR(0x48d9a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48d9a6:{NFSU2_TR(0x48d9a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48d9a8:{NFSU2_TR(0x48d9a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48d9ab:{NFSU2_TR(0x48d9ab);
__builtin_memmove((R+0),(R+24),4);
}
B48d9ad:{NFSU2_TR(0x48d9ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48d9ae:{NFSU2_TR(0x48d9ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48d9af:{NFSU2_TR(0x48d9af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d9b0:L48d9b0:{c.instructions+=6;NFSU2_TR(0x48d9b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48d9b4:{NFSU2_TR(0x48d9b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48d9b8:{NFSU2_TR(0x48d9b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d9b9:{NFSU2_TR(0x48d9b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d9ba:{NFSU2_TR(0x48d9ba);
w4(R+4,u32(0x82dbc8ull));
}
B48d9bf:{NFSU2_TR(0x48d9bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d9c4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48d2e0u);}goto L48d2e0;}
}
B48d9c4:L48d9c4:{c.instructions+=1;NFSU2_TR(0x48d9c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48d9d0:L48d9d0:{c.instructions+=5;NFSU2_TR(0x48d9d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d9d1:{NFSU2_TR(0x48d9d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48d9d5:{NFSU2_TR(0x48d9d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d9d6:{NFSU2_TR(0x48d9d6);
w4(R+4,u32(0x82dbc8ull));
}
B48d9db:{NFSU2_TR(0x48d9db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d9e0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48d3c0u);}goto L48d3c0;}
}
B48d9e0:L48d9e0:{c.instructions+=2;NFSU2_TR(0x48d9e0);
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
B48d9e2:{NFSU2_TR(0x48d9e2);
if(r1(R+518)){{goto L48d9f8;}}
}
B48d9e4:L48d9e4:{c.instructions+=1;NFSU2_TR(0x48d9e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d9e9ull));
TAIL_STATIC(0x57ef60u,57e);
}
B48d9e9:L48d9e9:{c.instructions+=3;NFSU2_TR(0x48d9e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48d9ea:{NFSU2_TR(0x48d9ea);
w4(R+4,u32(0x82dbc8ull));
}
B48d9ef:{NFSU2_TR(0x48d9ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48d9f4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48d3c0u);}goto L48d3c0;}
}
B48d9f4:L48d9f4:{c.instructions+=2;NFSU2_TR(0x48d9f4);
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
B48d9f6:{NFSU2_TR(0x48d9f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48d9e4u);}goto L48d9e4;}}
}
B48d9f8:L48d9f8:{c.instructions+=2;NFSU2_TR(0x48d9f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48d9f9:{NFSU2_TR(0x48d9f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48da00:L48da00:{c.instructions+=7;NFSU2_TR(0x48da00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48da01:{NFSU2_TR(0x48da01);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48da05:{NFSU2_TR(0x48da05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48da08:{NFSU2_TR(0x48da08);
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
B48da0a:{NFSU2_TR(0x48da0a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48da0b:{NFSU2_TR(0x48da0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48da0e:{NFSU2_TR(0x48da0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48da19;}}
}
B48da10:L48da10:{c.instructions+=2;NFSU2_TR(0x48da10);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48da11:{NFSU2_TR(0x48da11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48da16ull));
TAIL_STATIC(0x4022c0u,402);
}
B48da16:L48da16:{c.instructions+=1;NFSU2_TR(0x48da16);
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
B48da19:L48da19:{c.instructions+=6;NFSU2_TR(0x48da19);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48da1c:{NFSU2_TR(0x48da1c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B48da20:{NFSU2_TR(0x48da20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48da21:{NFSU2_TR(0x48da21);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B48da24:{NFSU2_TR(0x48da24);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48da25:{NFSU2_TR(0x48da25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48da2aull));
TAIL_STATIC(0x4022c0u,402);
}
B48da2a:L48da2a:{c.instructions+=2;NFSU2_TR(0x48da2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48da2b:{NFSU2_TR(0x48da2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48da30ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48d910u);}goto L48d910;}
}
B48da30:L48da30:{c.instructions+=9;NFSU2_TR(0x48da30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48da33:{NFSU2_TR(0x48da33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48da36:{NFSU2_TR(0x48da36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48da39:{NFSU2_TR(0x48da39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48da3c:{NFSU2_TR(0x48da3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48da3f:{NFSU2_TR(0x48da3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48da42:{NFSU2_TR(0x48da42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B48da45:{NFSU2_TR(0x48da45);
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
B48da47:{NFSU2_TR(0x48da47);
if(r1(R+518)){{goto L48da55;}}
}
B48da49:L48da49:{c.instructions+=4;NFSU2_TR(0x48da49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48da4c:{NFSU2_TR(0x48da4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48da4f:{NFSU2_TR(0x48da4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48da52:{NFSU2_TR(0x48da52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48da55:L48da55:{c.instructions+=3;NFSU2_TR(0x48da55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48da56:{NFSU2_TR(0x48da56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48da57:{NFSU2_TR(0x48da57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48da60:L48da60:{c.instructions+=16;NFSU2_TR(0x48da60);
__builtin_memmove((R+0),gp(0x830d20),4);
}
B48da65:{NFSU2_TR(0x48da65);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48da66:{NFSU2_TR(0x48da66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48da67:{NFSU2_TR(0x48da67);
__builtin_memmove((R+24),(R+4),4);
}
B48da69:{NFSU2_TR(0x48da69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48da6b:{NFSU2_TR(0x48da6b);
__builtin_memmove(gp(0x830d20),(R+24),4);
}
B48da71:{NFSU2_TR(0x48da71);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48da72:{NFSU2_TR(0x48da72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48da75:{NFSU2_TR(0x48da75);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48da78:{NFSU2_TR(0x48da78);
u8 U[4];
w4(U+0,u32(0x78d9a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48da7d:{NFSU2_TR(0x48da7d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B48da7f:{NFSU2_TR(0x48da7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48da80:{NFSU2_TR(0x48da80);
u8 U[4];
w4(U+0,u32(0x830d1cull));
s4(u32(r4(R+24)),r4(U+0));
}
B48da86:{NFSU2_TR(0x48da86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x1dull));
s4(u32(r4(U+0)),r4(U+4));
}
B48da8d:{NFSU2_TR(0x48da8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48da90:{NFSU2_TR(0x48da90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48da95ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B48da95:L48da95:{c.instructions+=9;NFSU2_TR(0x48da95);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48da99:{NFSU2_TR(0x48da99);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B48daa0:{NFSU2_TR(0x48daa0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48daa1:{NFSU2_TR(0x48daa1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48daa4:{NFSU2_TR(0x48daa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48daa7:{NFSU2_TR(0x48daa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48daaa:{NFSU2_TR(0x48daaa);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B48daae:{NFSU2_TR(0x48daae);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x72ull))));
w2(U+4,u16(0x1ull));
s2(u32(r4(U+0)),r2(U+4));
}
B48dab4:{NFSU2_TR(0x48dab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48dab9ull));
TAIL_STATIC(0x575620u,575);
}
B48dab9:L48dab9:{c.instructions+=5;NFSU2_TR(0x48dab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B48dabc:{NFSU2_TR(0x48dabc);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B48dabf:{NFSU2_TR(0x48dabf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dac0:{NFSU2_TR(0x48dac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48dac3:{NFSU2_TR(0x48dac3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48dac8ull));
TAIL_STATIC(0x575620u,575);
}
B48dac8:L48dac8:{c.instructions+=8;NFSU2_TR(0x48dac8);
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
B48dacb:{NFSU2_TR(0x48dacb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48dacc:{NFSU2_TR(0x48dacc);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B48dad0:{NFSU2_TR(0x48dad0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7eull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B48dad4:{NFSU2_TR(0x48dad4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48dad7:{NFSU2_TR(0x48dad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48dad8:{NFSU2_TR(0x48dad8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48dad9:{NFSU2_TR(0x48dad9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48dae0:L48dae0:{c.instructions+=6;NFSU2_TR(0x48dae0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48dae4:{NFSU2_TR(0x48dae4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B48dae7:{NFSU2_TR(0x48dae7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dae8:{NFSU2_TR(0x48dae8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dae9:{NFSU2_TR(0x48dae9);
w4(R+4,u32(0x82dbc8ull));
}
B48daee:{NFSU2_TR(0x48daee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48daf3ull));
TAIL_STATIC(0x48ce80u,48c);
}
B48daf3:L48daf3:{c.instructions+=3;NFSU2_TR(0x48daf3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48daf5:{NFSU2_TR(0x48daf5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48daf7:{NFSU2_TR(0x48daf7);
if(r1(R+518)){{goto L48dc58;}}
}
B48dafd:L48dafd:{c.instructions+=6;NFSU2_TR(0x48dafd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dafe:{NFSU2_TR(0x48dafe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B48db04:{NFSU2_TR(0x48db04);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48db07:{NFSU2_TR(0x48db07);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48db0b:{NFSU2_TR(0x48db0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48db0f:{NFSU2_TR(0x48db0f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48dc57;}}
}
B48db15:L48db15:{c.instructions+=4;NFSU2_TR(0x48db15);
__builtin_memmove((R+4),gp(0x830c84),4);
}
B48db1b:{NFSU2_TR(0x48db1b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48db1c:{NFSU2_TR(0x48db1c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48db20:{NFSU2_TR(0x48db20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48db21:L48db21:{c.instructions+=6;NFSU2_TR(0x48db21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48db24:{NFSU2_TR(0x48db24);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48db28:{NFSU2_TR(0x48db28);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B48db2c:{NFSU2_TR(0x48db2c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B48db2e:{NFSU2_TR(0x48db2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48db30:{NFSU2_TR(0x48db30);
if(r1(R+518)){{goto L48dbe3;}}
}
B48db36:L48db36:{c.instructions+=2;NFSU2_TR(0x48db36);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48db3c:{NFSU2_TR(0x48db3c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L48dbfe;}}
}
B48db42:L48db42:{c.instructions+=7;NFSU2_TR(0x48db42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48db45:{NFSU2_TR(0x48db45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B48db48:{NFSU2_TR(0x48db48);
__builtin_memmove((R+24),gp(0x830cf0),4);
}
B48db4e:{NFSU2_TR(0x48db4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B48db51:{NFSU2_TR(0x48db51);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B48db54:{NFSU2_TR(0x48db54);
w4(R+4,u32(0x6ull));
}
B48db59:{NFSU2_TR(0x48db59);
__builtin_memmove((R+24),(R+8),4);
}
B48db5b:L48db5b:{c.instructions+=1;NFSU2_TR(0x48db5b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L48db5d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48db5bu);}goto L48db5b;}
}
B48db5d:L48db5d:{c.instructions+=33;NFSU2_TR(0x48db5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48db5f:{NFSU2_TR(0x48db5f);
__builtin_memmove((R+28),gp(0x830c84),4);
}
B48db65:{NFSU2_TR(0x48db65);
__builtin_memmove((R+24),gp(0x830cec),4);
}
B48db6b:{NFSU2_TR(0x48db6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B48db6e:{NFSU2_TR(0x48db6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48db71:{NFSU2_TR(0x48db71);
__builtin_memmove((R+24),gp(0x830c84),4);
}
B48db77:{NFSU2_TR(0x48db77);
__builtin_memmove((R+28),gp(0x830cec),4);
}
B48db7d:{NFSU2_TR(0x48db7d);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B48db81:{NFSU2_TR(0x48db81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48db87:{NFSU2_TR(0x48db87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48db8d:{NFSU2_TR(0x48db8d);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B48db8e:{NFSU2_TR(0x48db8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48db94:{NFSU2_TR(0x48db94);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48db97:{NFSU2_TR(0x48db97);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B48db99:{NFSU2_TR(0x48db99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48db9f:{NFSU2_TR(0x48db9f);
__builtin_memmove((R+4),gp(0x830bc4),4);
}
B48dba5:{NFSU2_TR(0x48dba5);
__builtin_memmove((R+28),gp(0x830bc8),4);
}
B48dbab:{NFSU2_TR(0x48dbab);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48dbaf:{NFSU2_TR(0x48dbaf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B48dbb0:{NFSU2_TR(0x48dbb0);
__builtin_memmove(gp(0x830bc4),(R+4),4);
}
B48dbb6:{NFSU2_TR(0x48dbb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48dbb9:{NFSU2_TR(0x48dbb9);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B48dbbb:{NFSU2_TR(0x48dbbb);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B48dbbd:{NFSU2_TR(0x48dbbd);
__builtin_memmove(gp(0x830bc8),(R+28),4);
}
B48dbc3:{NFSU2_TR(0x48dbc3);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x12ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B48dbc7:{NFSU2_TR(0x48dbc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48dbca:{NFSU2_TR(0x48dbca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48dbcd:{NFSU2_TR(0x48dbcd);
__builtin_memmove((R+4),gp(0x830c84),4);
}
B48dbd3:{NFSU2_TR(0x48dbd3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B48dbd4:{NFSU2_TR(0x48dbd4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B48dbd5:{NFSU2_TR(0x48dbd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48dbd9:{NFSU2_TR(0x48dbd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48dbdd:{NFSU2_TR(0x48dbdd);
__builtin_memmove(gp(0x830c84),(R+4),4);
}
B48dbe3:L48dbe3:{c.instructions+=8;NFSU2_TR(0x48dbe3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48dbe7:{NFSU2_TR(0x48dbe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48dbea:{NFSU2_TR(0x48dbea);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B48dbeb:{NFSU2_TR(0x48dbeb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x18ull))));
}
B48dbee:{NFSU2_TR(0x48dbee);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48dbf0:{NFSU2_TR(0x48dbf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48dbf4:{NFSU2_TR(0x48dbf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48dbf8:{NFSU2_TR(0x48dbf8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48db21u);}goto L48db21;}}
}
B48dbfe:L48dbfe:{c.instructions+=5;NFSU2_TR(0x48dbfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48dc02:{NFSU2_TR(0x48dc02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48dc04:{NFSU2_TR(0x48dc04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48dc05:{NFSU2_TR(0x48dc05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48dc06:{NFSU2_TR(0x48dc06);
if(r1(R+518)){{goto L48dc57;}}
}
B48dc08:L48dc08:{c.instructions+=6;NFSU2_TR(0x48dc08);
__builtin_memmove((R+8),gp(0x830cec),4);
}
B48dc0e:{NFSU2_TR(0x48dc0e);
u8 U[4];
w4(U+0,u32(0x489380ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dc13:{NFSU2_TR(0x48dc13);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dc15:{NFSU2_TR(0x48dc15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dc16:{NFSU2_TR(0x48dc16);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dc17:{NFSU2_TR(0x48dc17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48dc1cull));
TAIL_STATIC(0x75cc70u,75c);
}
B48dc1c:L48dc1c:{c.instructions+=7;NFSU2_TR(0x48dc1c);
__builtin_memmove((R+0),gp(0x830c84),4);
}
B48dc21:{NFSU2_TR(0x48dc21);
__builtin_memmove((R+4),gp(0x830cf0),4);
}
B48dc27:{NFSU2_TR(0x48dc27);
u8 U[4];
w4(U+0,u32(0x489380ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dc2c:{NFSU2_TR(0x48dc2c);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dc2e:{NFSU2_TR(0x48dc2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dc2f:{NFSU2_TR(0x48dc2f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dc30:{NFSU2_TR(0x48dc30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48dc35ull));
TAIL_STATIC(0x75cc70u,75c);
}
B48dc35:L48dc35:{c.instructions+=6;NFSU2_TR(0x48dc35);
__builtin_memmove((R+8),gp(0x830cf0),4);
}
B48dc3b:{NFSU2_TR(0x48dc3b);
__builtin_memmove((R+0),gp(0x830c84),4);
}
B48dc40:{NFSU2_TR(0x48dc40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B48dc43:{NFSU2_TR(0x48dc43);
__builtin_memmove(gp(0x830bb8),(R+8),4);
}
B48dc49:{NFSU2_TR(0x48dc49);
__builtin_memmove(gp(0x830bbc),(R+0),4);
}
B48dc4e:{NFSU2_TR(0x48dc4e);
s2(0x830cf4,u16(0xffffull));
}
B48dc57:L48dc57:{c.instructions+=1;NFSU2_TR(0x48dc57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48dc58:L48dc58:{c.instructions+=3;NFSU2_TR(0x48dc58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48dc59:{NFSU2_TR(0x48dc59);
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
B48dc5c:{NFSU2_TR(0x48dc5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48dc60:L48dc60:{c.instructions+=7;NFSU2_TR(0x48dc60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B48dc63:{NFSU2_TR(0x48dc63);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dc64:{NFSU2_TR(0x48dc64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dc65:{NFSU2_TR(0x48dc65);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48dc69:{NFSU2_TR(0x48dc69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dc6a:{NFSU2_TR(0x48dc6a);
w4(R+4,u32(0x82dbc8ull));
}
B48dc6f:{NFSU2_TR(0x48dc6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48dc74ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48d3c0u);}goto L48d3c0;}
}
B48dc74:L48dc74:{c.instructions+=2;NFSU2_TR(0x48dc74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48dc76:{NFSU2_TR(0x48dc76);
if(r1(R+518)){{goto L48dc8c;}}
}
B48dc78:L48dc78:{c.instructions+=1;NFSU2_TR(0x48dc78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48dc7dull));
TAIL_STATIC(0x57ef60u,57e);
}
B48dc7d:L48dc7d:{c.instructions+=3;NFSU2_TR(0x48dc7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dc7e:{NFSU2_TR(0x48dc7e);
w4(R+4,u32(0x82dbc8ull));
}
B48dc83:{NFSU2_TR(0x48dc83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48dc88ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48d3c0u);}goto L48d3c0;}
}
B48dc88:L48dc88:{c.instructions+=2;NFSU2_TR(0x48dc88);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48dc8a:{NFSU2_TR(0x48dc8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48dc78u);}goto L48dc78;}}
}
B48dc8c:L48dc8c:{c.instructions+=3;NFSU2_TR(0x48dc8c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dc8d:{NFSU2_TR(0x48dc8d);
w4(R+4,u32(0x82dbc8ull));
}
B48dc92:{NFSU2_TR(0x48dc92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48dc97ull));
TAIL_STATIC(0x48ce80u,48c);
}
B48dc97:L48dc97:{c.instructions+=5;NFSU2_TR(0x48dc97);
__builtin_memmove((R+20),(R+0),4);
}
B48dc99:{NFSU2_TR(0x48dc99);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48dc9b:{NFSU2_TR(0x48dc9b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48dc9d:{NFSU2_TR(0x48dc9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48dca1:{NFSU2_TR(0x48dca1);
if(r1(R+518)){{goto L48de7f;}}
}
B48dca7:L48dca7:{c.instructions+=6;NFSU2_TR(0x48dca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48dcad:{NFSU2_TR(0x48dcad);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48dcb1:{NFSU2_TR(0x48dcb1);
u8 U[8];
__builtin_memmove((U+0),gp(0x830c84),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+24)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48dcb7:{NFSU2_TR(0x48dcb7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48dcbb:{NFSU2_TR(0x48dcbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48dcbf:{NFSU2_TR(0x48dcbf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48de7f;}}
}
B48dcc5:L48dcc5:{c.instructions+=4;NFSU2_TR(0x48dcc5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dcc6:{NFSU2_TR(0x48dcc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48dcca:{NFSU2_TR(0x48dcca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dccb:{NFSU2_TR(0x48dccb);
{goto L48dcd0;}
}
B48dcd0:L48dcd0:{c.instructions+=6;NFSU2_TR(0x48dcd0);
__builtin_memmove((R+4),gp(0x830cf0),4);
}
B48dcd6:{NFSU2_TR(0x48dcd6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48dcdc:{NFSU2_TR(0x48dcdc);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B48dcde:{NFSU2_TR(0x48dcde);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48dce0:{NFSU2_TR(0x48dce0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48dce4:{NFSU2_TR(0x48dce4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48ddbe;}}
}
B48dcea:L48dcea:{c.instructions+=3;NFSU2_TR(0x48dcea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48dcf0:{NFSU2_TR(0x48dcf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48dcf2:{NFSU2_TR(0x48dcf2);
if(r1(R+518)){{goto L48ddbe;}}
}
B48dcf8:L48dcf8:{c.instructions+=8;NFSU2_TR(0x48dcf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48dcfe:{NFSU2_TR(0x48dcfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48dd00:{NFSU2_TR(0x48dd00);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dd02:{NFSU2_TR(0x48dd02);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dd04:{NFSU2_TR(0x48dd04);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dd05:{NFSU2_TR(0x48dd05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dd06:{NFSU2_TR(0x48dd06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dd07:{NFSU2_TR(0x48dd07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48dd0cull));
TAIL_STATIC(0x488bc0u,488);
}
B48dd0c:L48dd0c:{c.instructions+=4;NFSU2_TR(0x48dd0c);
__builtin_memmove((R+12),(R+0),4);
}
B48dd0e:{NFSU2_TR(0x48dd0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B48dd11:{NFSU2_TR(0x48dd11);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48dd13:{NFSU2_TR(0x48dd13);
if(r1(R+518)){{goto L48ddbe;}}
}
B48dd19:L48dd19:{c.instructions+=16;NFSU2_TR(0x48dd19);
__builtin_memmove((R+4),gp(0x830cec),4);
}
B48dd1f:{NFSU2_TR(0x48dd1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48dd23:{NFSU2_TR(0x48dd23);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B48dd26:{NFSU2_TR(0x48dd26);
__builtin_memmove((R+4),(R+12),4);
}
B48dd28:{NFSU2_TR(0x48dd28);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B48dd2a:{NFSU2_TR(0x48dd2a);
w4(R+0,u32(0x2aaaaaabull));
}
B48dd2f:{NFSU2_TR(0x48dd2f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B48dd31:{NFSU2_TR(0x48dd31);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48dd35:{NFSU2_TR(0x48dd35);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B48dd38:{NFSU2_TR(0x48dd38);
__builtin_memmove((R+0),(R+8),4);
}
B48dd3a:{NFSU2_TR(0x48dd3a);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B48dd3d:{NFSU2_TR(0x48dd3d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B48dd3f:{NFSU2_TR(0x48dd3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48dd42:{NFSU2_TR(0x48dd42);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B48dd45:{NFSU2_TR(0x48dd45);
w4(R+4,u32(0x6ull));
}
B48dd4a:{NFSU2_TR(0x48dd4a);
__builtin_memmove((R+28),(R+12),4);
}
B48dd4c:L48dd4c:{c.instructions+=1;NFSU2_TR(0x48dd4c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L48dd4e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48dd4cu);}goto L48dd4c;}
}
B48dd4e:L48dd4e:{c.instructions+=8;NFSU2_TR(0x48dd4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48dd51:{NFSU2_TR(0x48dd51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B48dd53:{NFSU2_TR(0x48dd53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48dd56:{NFSU2_TR(0x48dd56);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48dd59:{NFSU2_TR(0x48dd59);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48dd5d:{NFSU2_TR(0x48dd5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48dd60:{NFSU2_TR(0x48dd60);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48dd62:{NFSU2_TR(0x48dd62);
if(r1(R+518)){{goto L48dda4;}}
}
B48dd64:L48dd64:{c.instructions+=15;NFSU2_TR(0x48dd64);
__builtin_memmove((R+24),gp(0x830bc4),4);
}
B48dd6a:{NFSU2_TR(0x48dd6a);
__builtin_memmove((R+8),gp(0x830bc8),4);
}
B48dd70:{NFSU2_TR(0x48dd70);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B48dd71:{NFSU2_TR(0x48dd71);
__builtin_memmove(gp(0x830bc4),(R+24),4);
}
B48dd77:{NFSU2_TR(0x48dd77);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48dd7a:{NFSU2_TR(0x48dd7a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B48dd7c:{NFSU2_TR(0x48dd7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48dd80:{NFSU2_TR(0x48dd80);
__builtin_memmove(gp(0x830bc8),(R+8),4);
}
B48dd86:{NFSU2_TR(0x48dd86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48dd8c:{NFSU2_TR(0x48dd8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48dd92:{NFSU2_TR(0x48dd92);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B48dd93:{NFSU2_TR(0x48dd93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48dd99:{NFSU2_TR(0x48dd99);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48dd9c:{NFSU2_TR(0x48dd9c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B48dd9e:{NFSU2_TR(0x48dd9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48dda4:L48dda4:{c.instructions+=6;NFSU2_TR(0x48dda4);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B48ddaa:{NFSU2_TR(0x48ddaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ddae:{NFSU2_TR(0x48ddae);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B48ddaf:{NFSU2_TR(0x48ddaf);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+20)),r4(U+0));
}
B48ddb6:{NFSU2_TR(0x48ddb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B48ddba:{NFSU2_TR(0x48ddba);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ddbe:L48ddbe:{c.instructions+=9;NFSU2_TR(0x48ddbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ddc2:{NFSU2_TR(0x48ddc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48ddc6:{NFSU2_TR(0x48ddc6);
__builtin_memmove((R+28),gp(0x830c84),4);
}
B48ddcc:{NFSU2_TR(0x48ddcc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B48ddcd:{NFSU2_TR(0x48ddcd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B48ddd0:{NFSU2_TR(0x48ddd0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48ddd2:{NFSU2_TR(0x48ddd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ddd6:{NFSU2_TR(0x48ddd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48ddda:{NFSU2_TR(0x48ddda);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48dcd0u);}goto L48dcd0;}}
}
B48dde0:L48dde0:{c.instructions+=4;NFSU2_TR(0x48dde0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48dde4:{NFSU2_TR(0x48dde4);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B48dde6:{NFSU2_TR(0x48dde6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48dde8:{NFSU2_TR(0x48dde8);
if(r1(R+518)){{goto L48de7d;}}
}
B48ddee:L48ddee:{c.instructions+=5;NFSU2_TR(0x48ddee);
__builtin_memmove((R+4),gp(0x830cf0),4);
}
B48ddf4:{NFSU2_TR(0x48ddf4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B48ddf6:{NFSU2_TR(0x48ddf6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B48ddf8:{NFSU2_TR(0x48ddf8);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48ddfa:{NFSU2_TR(0x48ddfa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48de5a;}}
}
B48ddfc:L48ddfc:{c.instructions+=1;NFSU2_TR(0x48ddfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48de00:L48de00:{c.instructions+=5;NFSU2_TR(0x48de00);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B48de04:{NFSU2_TR(0x48de04);
__builtin_memmove((R+0),gp(0x830cec),4);
}
B48de09:{NFSU2_TR(0x48de09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B48de0c:{NFSU2_TR(0x48de0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B48de0f:{NFSU2_TR(0x48de0f);
if(r1(R+518)){{goto L48de52;}}
}
B48de11:L48de11:{c.instructions+=2;NFSU2_TR(0x48de11);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48de13:{NFSU2_TR(0x48de13);
if(r1(R+518)){{goto L48de3a;}}
}
B48de15:L48de15:{c.instructions+=3;NFSU2_TR(0x48de15);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48de19:{NFSU2_TR(0x48de19);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B48de1b:{NFSU2_TR(0x48de1b);
w4(R+4,u32(0x6ull));
}
B48de20:L48de20:{c.instructions+=1;NFSU2_TR(0x48de20);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L48de22;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48de20u);}goto L48de20;}
}
B48de22:L48de22:{c.instructions+=6;NFSU2_TR(0x48de22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48de24:{NFSU2_TR(0x48de24);
__builtin_memmove((R+24),gp(0x830cec),4);
}
B48de2a:{NFSU2_TR(0x48de2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B48de2d:{NFSU2_TR(0x48de2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48de30:{NFSU2_TR(0x48de30);
__builtin_memmove((R+4),gp(0x830cec),4);
}
B48de36:{NFSU2_TR(0x48de36);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B48de3a:L48de3a:{c.instructions+=6;NFSU2_TR(0x48de3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48de3e:{NFSU2_TR(0x48de3e);
__builtin_memmove((R+28),gp(0x830c84),4);
}
B48de44:{NFSU2_TR(0x48de44);
__builtin_memmove((R+4),gp(0x830cf0),4);
}
B48de4a:{NFSU2_TR(0x48de4a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B48de4b:{NFSU2_TR(0x48de4b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B48de4e:{NFSU2_TR(0x48de4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48de52:L48de52:{c.instructions+=4;NFSU2_TR(0x48de52);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B48de53:{NFSU2_TR(0x48de53);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x18ull))));
}
B48de56:{NFSU2_TR(0x48de56);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48de58:{NFSU2_TR(0x48de58);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48de00u);}goto L48de00;}}
}
B48de5a:L48de5a:{c.instructions+=7;NFSU2_TR(0x48de5a);
__builtin_memmove(gp(0x830c84),(R+8),4);
}
B48de60:{NFSU2_TR(0x48de60);
__builtin_memmove(gp(0x830bbc),(R+8),4);
}
B48de66:{NFSU2_TR(0x48de66);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48de6a:{NFSU2_TR(0x48de6a);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B48de6d:{NFSU2_TR(0x48de6d);
__builtin_memmove(gp(0x830bb8),(R+4),4);
}
B48de73:{NFSU2_TR(0x48de73);
__builtin_memmove(gp(0x830cf4),(R+0),2);
}
B48de79:{NFSU2_TR(0x48de79);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B48de7d:L48de7d:{c.instructions+=2;NFSU2_TR(0x48de7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48de7e:{NFSU2_TR(0x48de7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48de7f:L48de7f:{c.instructions+=4;NFSU2_TR(0x48de7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48de80:{NFSU2_TR(0x48de80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48de81:{NFSU2_TR(0x48de81);
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
B48de84:{NFSU2_TR(0x48de84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48de90:L48de90:{c.instructions+=13;NFSU2_TR(0x48de90);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48de92:{NFSU2_TR(0x48de92);
__builtin_memmove(gp(0x82d380),(R+0),4);
}
B48de97:{NFSU2_TR(0x48de97);
__builtin_memmove(gp(0x82d384),(R+0),4);
}
B48de9c:{NFSU2_TR(0x48de9c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48de9d:{NFSU2_TR(0x48de9d);
__builtin_memmove(gp(0x82d388),(R+0),4);
}
B48dea2:{NFSU2_TR(0x48dea2);
__builtin_memmove(gp(0x82d38c),(R+0),4);
}
B48dea7:{NFSU2_TR(0x48dea7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dea8:{NFSU2_TR(0x48dea8);
u8 U[4];
w4(U+0,u32(0x78d8e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dead:{NFSU2_TR(0x48dead);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48deaf:{NFSU2_TR(0x48deaf);
w4(R+4,u32(0x100ull));
}
B48deb4:{NFSU2_TR(0x48deb4);
w4(R+28,u32(0x82d638ull));
}
B48deb9:{NFSU2_TR(0x48deb9);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48debe:{NFSU2_TR(0x48debe);
__builtin_memmove(gp(0x82d390),(R+0),4);
}
B48dec3:L48dec3:{c.instructions+=1;NFSU2_TR(0x48dec3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L48dec5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48dec3u);}goto L48dec3;}
}
B48dec5:L48dec5:{c.instructions+=1;NFSU2_TR(0x48dec5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48decaull));
TAIL_STATIC(0x440df0u,440);
}
B48deca:L48deca:{c.instructions+=5;NFSU2_TR(0x48deca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B48decd:{NFSU2_TR(0x48decd);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ded2:{NFSU2_TR(0x48ded2);
w4(R+4,u32(0x830c78ull));
}
B48ded7:{NFSU2_TR(0x48ded7);
__builtin_memmove(gp(0x82da84),(R+0),4);
}
B48dedc:{NFSU2_TR(0x48dedc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48dee1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48da60u);}goto L48da60;}
}
B48dee1:L48dee1:{c.instructions+=5;NFSU2_TR(0x48dee1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48dee3:{NFSU2_TR(0x48dee3);
u8 U[4];
w4(U+0,u32(0x78d900ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dee8:{NFSU2_TR(0x48dee8);
w4(R+4,u32(0x30ull));
}
B48deed:{NFSU2_TR(0x48deed);
w4(R+28,u32(0x830b18ull));
}
B48def2:{NFSU2_TR(0x48def2);
u8 U[4];
w4(U+0,u32(0x830b20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48def7:L48def7:{c.instructions+=1;NFSU2_TR(0x48def7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L48def9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48def7u);}goto L48def7;}
}
B48def9:L48def9:{c.instructions+=1;NFSU2_TR(0x48def9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48defeull));
TAIL_STATIC(0x43dbd0u,43d);
}
B48defe:L48defe:{c.instructions+=10;NFSU2_TR(0x48defe);
__builtin_memmove((R+0),gp(0x82dbe4),4);
}
B48df03:{NFSU2_TR(0x48df03);
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
B48df06:{NFSU2_TR(0x48df06);
s4(0x830ba8,u32(0x1ull));
}
B48df10:{NFSU2_TR(0x48df10);
s4(0x830bd0,u32(0x830c78ull));
}
B48df1a:{NFSU2_TR(0x48df1a);
u8 U[4];
w4(U+0,u32(0x830b18ull));
s4(u32(r4(R+0)),r4(U+0));
}
B48df20:{NFSU2_TR(0x48df20);
s4(0x82dbe4,u32(0x830b18ull));
}
B48df2a:{NFSU2_TR(0x48df2a);
__builtin_memmove(gp(0x830b1c),(R+0),4);
}
B48df2f:{NFSU2_TR(0x48df2f);
s4(0x830b18,u32(0x82dbe0ull));
}
B48df39:{NFSU2_TR(0x48df39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48df3a:{NFSU2_TR(0x48df3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48df40:L48df40:{c.instructions+=6;NFSU2_TR(0x48df40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48df41:{NFSU2_TR(0x48df41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48df42:{NFSU2_TR(0x48df42);
__builtin_memmove((R+24),gp(0x830d1c),4);
}
B48df48:{NFSU2_TR(0x48df48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48df49:{NFSU2_TR(0x48df49);
w4(R+4,u32(0x830d1cull));
}
B48df4e:{NFSU2_TR(0x48df4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48df53ull));
TAIL_STATIC(0x502fd0u,502);
}
B48df53:L48df53:{c.instructions+=3;NFSU2_TR(0x48df53);
__builtin_memmove((R+12),(R+0),4);
}
B48df55:{NFSU2_TR(0x48df55);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48df57:{NFSU2_TR(0x48df57);
if(r1(R+518)){{goto L48df83;}}
}
B48df59:L48df59:{c.instructions+=2;NFSU2_TR(0x48df59);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48df5d:{NFSU2_TR(0x48df5d);
__builtin_memmove((R+4),(R+4),4);
}
B48df60:L48df60:{c.instructions+=2;NFSU2_TR(0x48df60);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48df62:{NFSU2_TR(0x48df62);
if(r1(R+518)){{goto L48df7d;}}
}
B48df64:L48df64:{c.instructions+=8;NFSU2_TR(0x48df64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48df67:{NFSU2_TR(0x48df67);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48df6a:{NFSU2_TR(0x48df6a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48df6c:{NFSU2_TR(0x48df6c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48df6e:{NFSU2_TR(0x48df6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48df6f:{NFSU2_TR(0x48df6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48df70:{NFSU2_TR(0x48df70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48df71:{NFSU2_TR(0x48df71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48df76ull));
TAIL_STATIC(0x488bc0u,488);
}
B48df76:L48df76:{c.instructions+=3;NFSU2_TR(0x48df76);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B48df79:{NFSU2_TR(0x48df79);
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
B48df7b:{NFSU2_TR(0x48df7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48df89;}}
}
B48df7d:L48df7d:{c.instructions+=3;NFSU2_TR(0x48df7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B48df7f:{NFSU2_TR(0x48df7f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48df81:{NFSU2_TR(0x48df81);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48df60u);}goto L48df60;}}
}
B48df83:L48df83:{c.instructions+=5;NFSU2_TR(0x48df83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48df84:{NFSU2_TR(0x48df84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48df85:{NFSU2_TR(0x48df85);
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
B48df87:{NFSU2_TR(0x48df87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48df88:{NFSU2_TR(0x48df88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48df89:L48df89:{c.instructions+=5;NFSU2_TR(0x48df89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48df8a:{NFSU2_TR(0x48df8a);
__builtin_memmove((R+0),(R+24),4);
}
B48df8c:{NFSU2_TR(0x48df8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48df8d:{NFSU2_TR(0x48df8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48df8e:{NFSU2_TR(0x48df8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48df90:L48df90:{c.instructions+=7;NFSU2_TR(0x48df90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48df91:{NFSU2_TR(0x48df91);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48df95:{NFSU2_TR(0x48df95);
__builtin_memmove((R+0),(R+28),4);
}
B48df97:{NFSU2_TR(0x48df97);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1fffull))));
}
B48df9c:{NFSU2_TR(0x48df9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x830da4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B48dfa2:{NFSU2_TR(0x48dfa2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48dfa4:{NFSU2_TR(0x48dfa4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48dfaa;}}
}
B48dfa6:L48dfa6:{c.instructions+=3;NFSU2_TR(0x48dfa6);
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
B48dfa8:{NFSU2_TR(0x48dfa8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48dfa9:{NFSU2_TR(0x48dfa9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48dfaa:L48dfaa:{c.instructions+=2;NFSU2_TR(0x48dfaa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dfab:{NFSU2_TR(0x48dfab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48dfb0ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B48dfb0:L48dfb0:{c.instructions+=5;NFSU2_TR(0x48dfb0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48dfb4:{NFSU2_TR(0x48dfb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48dfb8:{NFSU2_TR(0x48dfb8);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B48dfba:{NFSU2_TR(0x48dfba);
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
B48dfbc:{NFSU2_TR(0x48dfbc);
if(r1(R+518)){{goto L48dfdb;}}
}
B48dfbe:L48dfbe:{c.instructions+=8;NFSU2_TR(0x48dfbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48dfc1:{NFSU2_TR(0x48dfc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48dfc4:{NFSU2_TR(0x48dfc4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dfc6:{NFSU2_TR(0x48dfc6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dfc7:{NFSU2_TR(0x48dfc7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dfc8:{NFSU2_TR(0x48dfc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dfc9:{NFSU2_TR(0x48dfc9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dfca:{NFSU2_TR(0x48dfca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48dfcfull));
TAIL_STATIC(0x488bc0u,488);
}
B48dfcf:L48dfcf:{c.instructions+=3;NFSU2_TR(0x48dfcf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B48dfd2:{NFSU2_TR(0x48dfd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48dfd4:{NFSU2_TR(0x48dfd4);
if(r1(R+518)){TAIL_STATIC(0x48e045u,48e);}
}
B48dfd6:L48dfd6:{c.instructions+=2;NFSU2_TR(0x48dfd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B48dfd9:{NFSU2_TR(0x48dfd9);
TAIL_STATIC(0x48e045u,48e);
}
B48dfdb:L48dfdb:{c.instructions+=5;NFSU2_TR(0x48dfdb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dfdc:{NFSU2_TR(0x48dfdc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dfdd:{NFSU2_TR(0x48dfdd);
__builtin_memmove((R+24),gp(0x830d1c),4);
}
B48dfe3:{NFSU2_TR(0x48dfe3);
w4(R+4,u32(0x830d1cull));
}
B48dfe8:{NFSU2_TR(0x48dfe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48dfedull));
TAIL_STATIC(0x502fd0u,502);
}
B48dfed:L48dfed:{c.instructions+=3;NFSU2_TR(0x48dfed);
__builtin_memmove((R+12),(R+0),4);
}
B48dfef:{NFSU2_TR(0x48dfef);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48dff1:{NFSU2_TR(0x48dff1);
if(r1(R+518)){TAIL_STATIC(0x48e043u,48e);}
}
B48dff3:L48dff3:{c.instructions+=2;NFSU2_TR(0x48dff3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48dff5:{NFSU2_TR(0x48dff5);
if(r1(R+518)){TAIL_STATIC(0x48e017u,48e);}
}
B48dff7:L48dff7:{c.instructions+=4;NFSU2_TR(0x48dff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48dffa:{NFSU2_TR(0x48dffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48dffd:{NFSU2_TR(0x48dffd);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48dfff:{NFSU2_TR(0x48dfff);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x48e001u,48e);
}
XIT:NFSU2_TR_EXIT(0x48d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
