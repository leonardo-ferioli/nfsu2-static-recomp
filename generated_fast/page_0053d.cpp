#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_4c5(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_520(u8* __restrict R,Cpu& c);
u32 body_522(u8* __restrict R,Cpu& c);
u32 body_523(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_531(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_53e(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x53d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x53d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_53d(u8* __restrict R,Cpu& c);
u32 page_53d(Cpu& c){return body_53d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_53d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x53d005:goto L53d005;
case 0x53d010:goto L53d010;
case 0x53d013:c.instructions+=2;goto B53d013;
case 0x53d015:c.instructions+=1;goto B53d015;
case 0x53d017:goto L53d017;
case 0x53d01a:c.instructions+=1;goto B53d01a;
case 0x53d01f:goto L53d01f;
case 0x53d020:goto L53d020;
case 0x53d023:c.instructions+=2;goto B53d023;
case 0x53d025:c.instructions+=1;goto B53d025;
case 0x53d027:goto L53d027;
case 0x53d02a:c.instructions+=1;goto B53d02a;
case 0x53d02f:goto L53d02f;
case 0x53d030:goto L53d030;
case 0x53d031:c.instructions+=2;goto B53d031;
case 0x53d033:c.instructions+=1;goto B53d033;
case 0x53d038:goto L53d038;
case 0x53d03d:c.instructions+=1;goto B53d03d;
case 0x53d03f:goto L53d03f;
case 0x53d040:c.instructions+=1;goto B53d040;
case 0x53d045:goto L53d045;
case 0x53d048:goto L53d048;
case 0x53d04a:c.instructions+=2;goto B53d04a;
case 0x53d04b:c.instructions+=1;goto B53d04b;
case 0x53d050:goto L53d050;
case 0x53d052:c.instructions+=12;goto B53d052;
case 0x53d057:c.instructions+=11;goto B53d057;
case 0x53d05d:c.instructions+=10;goto B53d05d;
case 0x53d05e:c.instructions+=9;goto B53d05e;
case 0x53d065:c.instructions+=8;goto B53d065;
case 0x53d066:c.instructions+=7;goto B53d066;
case 0x53d067:c.instructions+=6;goto B53d067;
case 0x53d069:c.instructions+=5;goto B53d069;
case 0x53d06d:c.instructions+=4;goto B53d06d;
case 0x53d073:c.instructions+=3;goto B53d073;
case 0x53d076:c.instructions+=2;goto B53d076;
case 0x53d07e:c.instructions+=1;goto B53d07e;
case 0x53d083:goto L53d083;
case 0x53d087:c.instructions+=5;goto B53d087;
case 0x53d08d:c.instructions+=4;goto B53d08d;
case 0x53d08e:c.instructions+=3;goto B53d08e;
case 0x53d095:c.instructions+=2;goto B53d095;
case 0x53d098:c.instructions+=1;goto B53d098;
case 0x53d0a0:goto L53d0a0;
case 0x53d0a1:c.instructions+=14;goto B53d0a1;
case 0x53d0a3:c.instructions+=13;goto B53d0a3;
case 0x53d0a5:c.instructions+=12;goto B53d0a5;
case 0x53d0aa:c.instructions+=11;goto B53d0aa;
case 0x53d0b0:c.instructions+=10;goto B53d0b0;
case 0x53d0b1:c.instructions+=9;goto B53d0b1;
case 0x53d0b8:c.instructions+=8;goto B53d0b8;
case 0x53d0be:c.instructions+=7;goto B53d0be;
case 0x53d0bf:c.instructions+=6;goto B53d0bf;
case 0x53d0c0:c.instructions+=5;goto B53d0c0;
case 0x53d0c1:c.instructions+=4;goto B53d0c1;
case 0x53d0c4:c.instructions+=3;goto B53d0c4;
case 0x53d0c7:c.instructions+=2;goto B53d0c7;
case 0x53d0c9:c.instructions+=1;goto B53d0c9;
case 0x53d0ce:goto L53d0ce;
case 0x53d0d0:c.instructions+=1;goto B53d0d0;
case 0x53d0d2:goto L53d0d2;
case 0x53d0d8:c.instructions+=1;goto B53d0d8;
case 0x53d0da:goto L53d0da;
case 0x53d0e0:goto L53d0e0;
case 0x53d0e2:c.instructions+=2;goto B53d0e2;
case 0x53d0e5:c.instructions+=1;goto B53d0e5;
case 0x53d0ea:goto L53d0ea;
case 0x53d0ec:c.instructions+=1;goto B53d0ec;
case 0x53d0ee:goto L53d0ee;
case 0x53d0f4:c.instructions+=1;goto B53d0f4;
case 0x53d0f6:goto L53d0f6;
case 0x53d0fc:goto L53d0fc;
case 0x53d0fe:c.instructions+=2;goto B53d0fe;
case 0x53d101:c.instructions+=1;goto B53d101;
case 0x53d106:goto L53d106;
case 0x53d109:c.instructions+=5;goto B53d109;
case 0x53d10c:c.instructions+=4;goto B53d10c;
case 0x53d10e:c.instructions+=3;goto B53d10e;
case 0x53d110:c.instructions+=2;goto B53d110;
case 0x53d113:c.instructions+=1;goto B53d113;
case 0x53d115:goto L53d115;
case 0x53d116:c.instructions+=8;goto B53d116;
case 0x53d118:c.instructions+=7;goto B53d118;
case 0x53d119:c.instructions+=6;goto B53d119;
case 0x53d11b:c.instructions+=5;goto B53d11b;
case 0x53d11d:c.instructions+=4;goto B53d11d;
case 0x53d122:c.instructions+=3;goto B53d122;
case 0x53d127:c.instructions+=2;goto B53d127;
case 0x53d129:c.instructions+=1;goto B53d129;
case 0x53d12e:goto L53d12e;
case 0x53d130:goto L53d130;
case 0x53d132:goto L53d132;
case 0x53d134:c.instructions+=3;goto B53d134;
case 0x53d13b:c.instructions+=2;goto B53d13b;
case 0x53d140:c.instructions+=1;goto B53d140;
case 0x53d145:goto L53d145;
case 0x53d147:c.instructions+=6;goto B53d147;
case 0x53d14c:c.instructions+=5;goto B53d14c;
case 0x53d14e:c.instructions+=4;goto B53d14e;
case 0x53d153:c.instructions+=3;goto B53d153;
case 0x53d158:c.instructions+=2;goto B53d158;
case 0x53d15a:c.instructions+=1;goto B53d15a;
case 0x53d15f:goto L53d15f;
case 0x53d161:c.instructions+=1;goto B53d161;
case 0x53d163:goto L53d163;
case 0x53d168:c.instructions+=1;goto B53d168;
case 0x53d16d:goto L53d16d;
case 0x53d16f:c.instructions+=4;goto B53d16f;
case 0x53d170:c.instructions+=3;goto B53d170;
case 0x53d176:c.instructions+=2;goto B53d176;
case 0x53d177:c.instructions+=1;goto B53d177;
case 0x53d17c:goto L53d17c;
case 0x53d17f:c.instructions+=2;goto B53d17f;
case 0x53d181:c.instructions+=1;goto B53d181;
case 0x53d186:goto L53d186;
case 0x53d188:c.instructions+=1;goto B53d188;
case 0x53d18a:goto L53d18a;
case 0x53d18f:c.instructions+=1;goto B53d18f;
case 0x53d194:goto L53d194;
case 0x53d197:c.instructions+=7;goto B53d197;
case 0x53d198:c.instructions+=6;goto B53d198;
case 0x53d19b:c.instructions+=5;goto B53d19b;
case 0x53d1a1:c.instructions+=4;goto B53d1a1;
case 0x53d1a2:c.instructions+=3;goto B53d1a2;
case 0x53d1a7:c.instructions+=2;goto B53d1a7;
case 0x53d1a8:c.instructions+=1;goto B53d1a8;
case 0x53d1ad:goto L53d1ad;
case 0x53d1b0:c.instructions+=2;goto B53d1b0;
case 0x53d1b2:c.instructions+=1;goto B53d1b2;
case 0x53d1b7:goto L53d1b7;
case 0x53d1b9:c.instructions+=6;goto B53d1b9;
case 0x53d1be:c.instructions+=5;goto B53d1be;
case 0x53d1c0:c.instructions+=4;goto B53d1c0;
case 0x53d1c5:c.instructions+=3;goto B53d1c5;
case 0x53d1ca:c.instructions+=2;goto B53d1ca;
case 0x53d1cc:c.instructions+=1;goto B53d1cc;
case 0x53d1d1:goto L53d1d1;
case 0x53d1d3:c.instructions+=1;goto B53d1d3;
case 0x53d1d5:goto L53d1d5;
case 0x53d1da:c.instructions+=1;goto B53d1da;
case 0x53d1df:goto L53d1df;
case 0x53d1e1:c.instructions+=4;goto B53d1e1;
case 0x53d1e2:c.instructions+=3;goto B53d1e2;
case 0x53d1e8:c.instructions+=2;goto B53d1e8;
case 0x53d1e9:c.instructions+=1;goto B53d1e9;
case 0x53d1ee:goto L53d1ee;
case 0x53d1f1:c.instructions+=2;goto B53d1f1;
case 0x53d1f3:c.instructions+=1;goto B53d1f3;
case 0x53d1f8:goto L53d1f8;
case 0x53d1fa:c.instructions+=1;goto B53d1fa;
case 0x53d1fc:goto L53d1fc;
case 0x53d201:c.instructions+=1;goto B53d201;
case 0x53d206:goto L53d206;
case 0x53d207:c.instructions+=7;goto B53d207;
case 0x53d20a:c.instructions+=6;goto B53d20a;
case 0x53d20d:c.instructions+=5;goto B53d20d;
case 0x53d213:c.instructions+=4;goto B53d213;
case 0x53d214:c.instructions+=3;goto B53d214;
case 0x53d219:c.instructions+=2;goto B53d219;
case 0x53d21a:c.instructions+=1;goto B53d21a;
case 0x53d21f:goto L53d21f;
case 0x53d222:c.instructions+=3;goto B53d222;
case 0x53d228:c.instructions+=2;goto B53d228;
case 0x53d22b:c.instructions+=1;goto B53d22b;
case 0x53d230:goto L53d230;
case 0x53d233:c.instructions+=3;goto B53d233;
case 0x53d239:c.instructions+=2;goto B53d239;
case 0x53d23c:c.instructions+=1;goto B53d23c;
case 0x53d241:goto L53d241;
case 0x53d244:c.instructions+=3;goto B53d244;
case 0x53d249:c.instructions+=2;goto B53d249;
case 0x53d24b:c.instructions+=1;goto B53d24b;
case 0x53d250:goto L53d250;
case 0x53d251:c.instructions+=4;goto B53d251;
case 0x53d254:c.instructions+=3;goto B53d254;
case 0x53d259:c.instructions+=2;goto B53d259;
case 0x53d25a:c.instructions+=1;goto B53d25a;
case 0x53d25f:goto L53d25f;
case 0x53d262:c.instructions+=9;goto B53d262;
case 0x53d265:c.instructions+=8;goto B53d265;
case 0x53d268:c.instructions+=7;goto B53d268;
case 0x53d269:c.instructions+=6;goto B53d269;
case 0x53d26e:c.instructions+=5;goto B53d26e;
case 0x53d271:c.instructions+=4;goto B53d271;
case 0x53d276:c.instructions+=3;goto B53d276;
case 0x53d277:c.instructions+=2;goto B53d277;
case 0x53d27a:c.instructions+=1;goto B53d27a;
case 0x53d27f:goto L53d27f;
case 0x53d282:c.instructions+=4;goto B53d282;
case 0x53d283:c.instructions+=3;goto B53d283;
case 0x53d286:c.instructions+=2;goto B53d286;
case 0x53d287:c.instructions+=1;goto B53d287;
case 0x53d28c:goto L53d28c;
case 0x53d28f:c.instructions+=9;goto B53d28f;
case 0x53d292:c.instructions+=8;goto B53d292;
case 0x53d295:c.instructions+=7;goto B53d295;
case 0x53d296:c.instructions+=6;goto B53d296;
case 0x53d29b:c.instructions+=5;goto B53d29b;
case 0x53d29e:c.instructions+=4;goto B53d29e;
case 0x53d2a3:c.instructions+=3;goto B53d2a3;
case 0x53d2a4:c.instructions+=2;goto B53d2a4;
case 0x53d2a7:c.instructions+=1;goto B53d2a7;
case 0x53d2ac:goto L53d2ac;
case 0x53d2af:c.instructions+=4;goto B53d2af;
case 0x53d2b2:c.instructions+=3;goto B53d2b2;
case 0x53d2b3:c.instructions+=2;goto B53d2b3;
case 0x53d2b4:c.instructions+=1;goto B53d2b4;
case 0x53d2b9:goto L53d2b9;
case 0x53d2bc:c.instructions+=7;goto B53d2bc;
case 0x53d2bf:c.instructions+=6;goto B53d2bf;
case 0x53d2c2:c.instructions+=5;goto B53d2c2;
case 0x53d2c3:c.instructions+=4;goto B53d2c3;
case 0x53d2c5:c.instructions+=3;goto B53d2c5;
case 0x53d2c7:c.instructions+=2;goto B53d2c7;
case 0x53d2ca:c.instructions+=1;goto B53d2ca;
case 0x53d2cc:goto L53d2cc;
case 0x53d2cf:c.instructions+=15;goto B53d2cf;
case 0x53d2d2:c.instructions+=14;goto B53d2d2;
case 0x53d2d5:c.instructions+=13;goto B53d2d5;
case 0x53d2db:c.instructions+=12;goto B53d2db;
case 0x53d2dd:c.instructions+=11;goto B53d2dd;
case 0x53d2df:c.instructions+=10;goto B53d2df;
case 0x53d2e5:c.instructions+=9;goto B53d2e5;
case 0x53d2e7:c.instructions+=8;goto B53d2e7;
case 0x53d2ea:c.instructions+=7;goto B53d2ea;
case 0x53d2ed:c.instructions+=6;goto B53d2ed;
case 0x53d2f4:c.instructions+=5;goto B53d2f4;
case 0x53d2f7:c.instructions+=4;goto B53d2f7;
case 0x53d2f8:c.instructions+=3;goto B53d2f8;
case 0x53d2fa:c.instructions+=2;goto B53d2fa;
case 0x53d2fd:c.instructions+=1;goto B53d2fd;
case 0x53d303:goto L53d303;
case 0x53d306:goto L53d306;
case 0x53d30a:c.instructions+=5;goto B53d30a;
case 0x53d30c:c.instructions+=4;goto B53d30c;
case 0x53d30f:c.instructions+=3;goto B53d30f;
case 0x53d312:c.instructions+=2;goto B53d312;
case 0x53d315:c.instructions+=1;goto B53d315;
case 0x53d317:goto L53d317;
case 0x53d319:c.instructions+=11;goto B53d319;
case 0x53d31c:c.instructions+=10;goto B53d31c;
case 0x53d31f:c.instructions+=9;goto B53d31f;
case 0x53d322:c.instructions+=8;goto B53d322;
case 0x53d325:c.instructions+=7;goto B53d325;
case 0x53d328:c.instructions+=6;goto B53d328;
case 0x53d32f:c.instructions+=5;goto B53d32f;
case 0x53d335:c.instructions+=4;goto B53d335;
case 0x53d338:c.instructions+=3;goto B53d338;
case 0x53d33b:c.instructions+=2;goto B53d33b;
case 0x53d33e:c.instructions+=1;goto B53d33e;
case 0x53d340:goto L53d340;
case 0x53d342:c.instructions+=15;goto B53d342;
case 0x53d345:c.instructions+=14;goto B53d345;
case 0x53d34a:c.instructions+=13;goto B53d34a;
case 0x53d34d:c.instructions+=12;goto B53d34d;
case 0x53d350:c.instructions+=11;goto B53d350;
case 0x53d353:c.instructions+=10;goto B53d353;
case 0x53d356:c.instructions+=9;goto B53d356;
case 0x53d359:c.instructions+=8;goto B53d359;
case 0x53d35c:c.instructions+=7;goto B53d35c;
case 0x53d35f:c.instructions+=6;goto B53d35f;
case 0x53d366:c.instructions+=5;goto B53d366;
case 0x53d369:c.instructions+=4;goto B53d369;
case 0x53d36f:c.instructions+=3;goto B53d36f;
case 0x53d372:c.instructions+=2;goto B53d372;
case 0x53d375:c.instructions+=1;goto B53d375;
case 0x53d378:goto L53d378;
case 0x53d37b:c.instructions+=3;goto B53d37b;
case 0x53d37e:c.instructions+=2;goto B53d37e;
case 0x53d380:c.instructions+=1;goto B53d380;
case 0x53d385:goto L53d385;
case 0x53d387:goto L53d387;
case 0x53d38d:c.instructions+=21;goto B53d38d;
case 0x53d390:c.instructions+=20;goto B53d390;
case 0x53d393:c.instructions+=19;goto B53d393;
case 0x53d395:c.instructions+=18;goto B53d395;
case 0x53d397:c.instructions+=17;goto B53d397;
case 0x53d399:c.instructions+=16;goto B53d399;
case 0x53d39b:c.instructions+=15;goto B53d39b;
case 0x53d39e:c.instructions+=14;goto B53d39e;
case 0x53d3a4:c.instructions+=13;goto B53d3a4;
case 0x53d3a7:c.instructions+=12;goto B53d3a7;
case 0x53d3ad:c.instructions+=11;goto B53d3ad;
case 0x53d3b0:c.instructions+=10;goto B53d3b0;
case 0x53d3b6:c.instructions+=9;goto B53d3b6;
case 0x53d3b9:c.instructions+=8;goto B53d3b9;
case 0x53d3c0:c.instructions+=7;goto B53d3c0;
case 0x53d3c3:c.instructions+=6;goto B53d3c3;
case 0x53d3c5:c.instructions+=5;goto B53d3c5;
case 0x53d3c8:c.instructions+=4;goto B53d3c8;
case 0x53d3cb:c.instructions+=3;goto B53d3cb;
case 0x53d3cd:c.instructions+=2;goto B53d3cd;
case 0x53d3d0:c.instructions+=1;goto B53d3d0;
case 0x53d3d2:goto L53d3d2;
case 0x53d3d5:c.instructions+=3;goto B53d3d5;
case 0x53d3d6:c.instructions+=2;goto B53d3d6;
case 0x53d3d9:c.instructions+=1;goto B53d3d9;
case 0x53d3de:goto L53d3de;
case 0x53d3e4:c.instructions+=3;goto B53d3e4;
case 0x53d3e7:c.instructions+=2;goto B53d3e7;
case 0x53d3ea:c.instructions+=1;goto B53d3ea;
case 0x53d3ef:goto L53d3ef;
case 0x53d3f1:c.instructions+=2;goto B53d3f1;
case 0x53d3f4:c.instructions+=1;goto B53d3f4;
case 0x53d3f6:goto L53d3f6;
case 0x53d3fc:goto L53d3fc;
case 0x53d3ff:c.instructions+=15;goto B53d3ff;
case 0x53d402:c.instructions+=14;goto B53d402;
case 0x53d406:c.instructions+=13;goto B53d406;
case 0x53d409:c.instructions+=12;goto B53d409;
case 0x53d40c:c.instructions+=11;goto B53d40c;
case 0x53d40f:c.instructions+=10;goto B53d40f;
case 0x53d412:c.instructions+=9;goto B53d412;
case 0x53d414:c.instructions+=8;goto B53d414;
case 0x53d417:c.instructions+=7;goto B53d417;
case 0x53d41a:c.instructions+=6;goto B53d41a;
case 0x53d41b:c.instructions+=5;goto B53d41b;
case 0x53d41e:c.instructions+=4;goto B53d41e;
case 0x53d421:c.instructions+=3;goto B53d421;
case 0x53d423:c.instructions+=2;goto B53d423;
case 0x53d426:c.instructions+=1;goto B53d426;
case 0x53d428:goto L53d428;
case 0x53d42b:goto L53d42b;
case 0x53d430:c.instructions+=20;goto B53d430;
case 0x53d433:c.instructions+=19;goto B53d433;
case 0x53d436:c.instructions+=18;goto B53d436;
case 0x53d43a:c.instructions+=17;goto B53d43a;
case 0x53d43d:c.instructions+=16;goto B53d43d;
case 0x53d43f:c.instructions+=15;goto B53d43f;
case 0x53d441:c.instructions+=14;goto B53d441;
case 0x53d443:c.instructions+=13;goto B53d443;
case 0x53d448:c.instructions+=12;goto B53d448;
case 0x53d44b:c.instructions+=11;goto B53d44b;
case 0x53d44e:c.instructions+=10;goto B53d44e;
case 0x53d453:c.instructions+=9;goto B53d453;
case 0x53d45a:c.instructions+=8;goto B53d45a;
case 0x53d45d:c.instructions+=7;goto B53d45d;
case 0x53d460:c.instructions+=6;goto B53d460;
case 0x53d462:c.instructions+=5;goto B53d462;
case 0x53d465:c.instructions+=4;goto B53d465;
case 0x53d468:c.instructions+=3;goto B53d468;
case 0x53d46a:c.instructions+=2;goto B53d46a;
case 0x53d46d:c.instructions+=1;goto B53d46d;
case 0x53d46f:goto L53d46f;
case 0x53d470:goto L53d470;
case 0x53d473:c.instructions+=3;goto B53d473;
case 0x53d474:c.instructions+=2;goto B53d474;
case 0x53d477:c.instructions+=1;goto B53d477;
case 0x53d47c:goto L53d47c;
case 0x53d482:c.instructions+=5;goto B53d482;
case 0x53d485:c.instructions+=4;goto B53d485;
case 0x53d488:c.instructions+=3;goto B53d488;
case 0x53d48e:c.instructions+=2;goto B53d48e;
case 0x53d491:c.instructions+=1;goto B53d491;
case 0x53d496:goto L53d496;
case 0x53d498:c.instructions+=1;goto B53d498;
case 0x53d49a:goto L53d49a;
case 0x53d49d:c.instructions+=2;goto B53d49d;
case 0x53d4a3:c.instructions+=1;goto B53d4a3;
case 0x53d4a5:goto L53d4a5;
case 0x53d4a8:goto L53d4a8;
case 0x53d4ab:c.instructions+=15;goto B53d4ab;
case 0x53d4ae:c.instructions+=14;goto B53d4ae;
case 0x53d4b2:c.instructions+=13;goto B53d4b2;
case 0x53d4b5:c.instructions+=12;goto B53d4b5;
case 0x53d4b8:c.instructions+=11;goto B53d4b8;
case 0x53d4bb:c.instructions+=10;goto B53d4bb;
case 0x53d4be:c.instructions+=9;goto B53d4be;
case 0x53d4c0:c.instructions+=8;goto B53d4c0;
case 0x53d4c3:c.instructions+=7;goto B53d4c3;
case 0x53d4c6:c.instructions+=6;goto B53d4c6;
case 0x53d4c7:c.instructions+=5;goto B53d4c7;
case 0x53d4ca:c.instructions+=4;goto B53d4ca;
case 0x53d4cd:c.instructions+=3;goto B53d4cd;
case 0x53d4cf:c.instructions+=2;goto B53d4cf;
case 0x53d4d2:c.instructions+=1;goto B53d4d2;
case 0x53d4d4:goto L53d4d4;
case 0x53d4d7:goto L53d4d7;
case 0x53d4da:c.instructions+=7;goto B53d4da;
case 0x53d4dd:c.instructions+=6;goto B53d4dd;
case 0x53d4de:c.instructions+=5;goto B53d4de;
case 0x53d4e1:c.instructions+=4;goto B53d4e1;
case 0x53d4e3:c.instructions+=3;goto B53d4e3;
case 0x53d4e6:c.instructions+=2;goto B53d4e6;
case 0x53d4e9:c.instructions+=1;goto B53d4e9;
case 0x53d4ef:goto L53d4ef;
case 0x53d4f2:c.instructions+=7;goto B53d4f2;
case 0x53d4f3:c.instructions+=6;goto B53d4f3;
case 0x53d4f4:c.instructions+=5;goto B53d4f4;
case 0x53d4f5:c.instructions+=4;goto B53d4f5;
case 0x53d4fc:c.instructions+=3;goto B53d4fc;
case 0x53d4fe:c.instructions+=2;goto B53d4fe;
case 0x53d4ff:c.instructions+=1;goto B53d4ff;
case 0x53d510:goto L53d510;
case 0x53d514:c.instructions+=4;goto B53d514;
case 0x53d519:c.instructions+=3;goto B53d519;
case 0x53d51a:c.instructions+=2;goto B53d51a;
case 0x53d51c:c.instructions+=1;goto B53d51c;
case 0x53d522:goto L53d522;
case 0x53d524:goto L53d524;
case 0x53d529:c.instructions+=1;goto B53d529;
case 0x53d52b:goto L53d52b;
case 0x53d530:c.instructions+=1;goto B53d530;
case 0x53d536:goto L53d536;
case 0x53d53b:c.instructions+=5;goto B53d53b;
case 0x53d53e:c.instructions+=4;goto B53d53e;
case 0x53d541:c.instructions+=3;goto B53d541;
case 0x53d546:c.instructions+=2;goto B53d546;
case 0x53d547:c.instructions+=1;goto B53d547;
case 0x53d54c:goto L53d54c;
case 0x53d54f:c.instructions+=2;goto B53d54f;
case 0x53d551:c.instructions+=1;goto B53d551;
case 0x53d557:goto L53d557;
case 0x53d55a:c.instructions+=5;goto B53d55a;
case 0x53d55c:c.instructions+=4;goto B53d55c;
case 0x53d561:c.instructions+=3;goto B53d561;
case 0x53d566:c.instructions+=2;goto B53d566;
case 0x53d567:c.instructions+=1;goto B53d567;
case 0x53d56c:goto L53d56c;
case 0x53d571:c.instructions+=1;goto B53d571;
case 0x53d576:goto L53d576;
case 0x53d579:c.instructions+=2;goto B53d579;
case 0x53d57b:c.instructions+=1;goto B53d57b;
case 0x53d581:goto L53d581;
case 0x53d587:c.instructions+=2;goto B53d587;
case 0x53d589:c.instructions+=1;goto B53d589;
case 0x53d58f:goto L53d58f;
case 0x53d594:c.instructions+=1;goto B53d594;
case 0x53d599:goto L53d599;
case 0x53d59a:c.instructions+=1;goto B53d59a;
case 0x53d59d:goto L53d59d;
case 0x53d5a0:c.instructions+=2;goto B53d5a0;
case 0x53d5a2:c.instructions+=1;goto B53d5a2;
case 0x53d5a8:goto L53d5a8;
case 0x53d5ab:c.instructions+=2;goto B53d5ab;
case 0x53d5b0:c.instructions+=1;goto B53d5b0;
case 0x53d5b2:goto L53d5b2;
case 0x53d5b7:c.instructions+=1;goto B53d5b7;
case 0x53d5b9:goto L53d5b9;
case 0x53d5bf:c.instructions+=5;goto B53d5bf;
case 0x53d5c2:c.instructions+=4;goto B53d5c2;
case 0x53d5c4:c.instructions+=3;goto B53d5c4;
case 0x53d5c5:c.instructions+=2;goto B53d5c5;
case 0x53d5c6:c.instructions+=1;goto B53d5c6;
case 0x53d5cb:goto L53d5cb;
case 0x53d5ce:c.instructions+=2;goto B53d5ce;
case 0x53d5cf:c.instructions+=1;goto B53d5cf;
case 0x53d5d2:goto L53d5d2;
case 0x53d5d8:c.instructions+=2;goto B53d5d8;
case 0x53d5da:c.instructions+=1;goto B53d5da;
case 0x53d5dc:goto L53d5dc;
case 0x53d5e1:c.instructions+=5;goto B53d5e1;
case 0x53d5e4:c.instructions+=4;goto B53d5e4;
case 0x53d5e6:c.instructions+=3;goto B53d5e6;
case 0x53d5e7:c.instructions+=2;goto B53d5e7;
case 0x53d5e8:c.instructions+=1;goto B53d5e8;
case 0x53d5ed:goto L53d5ed;
case 0x53d5ee:c.instructions+=1;goto B53d5ee;
case 0x53d5f1:goto L53d5f1;
case 0x53d5f6:c.instructions+=1;goto B53d5f6;
case 0x53d5f8:goto L53d5f8;
case 0x53d5fb:c.instructions+=2;goto B53d5fb;
case 0x53d600:c.instructions+=1;goto B53d600;
case 0x53d602:goto L53d602;
case 0x53d607:c.instructions+=1;goto B53d607;
case 0x53d609:goto L53d609;
case 0x53d60f:c.instructions+=2;goto B53d60f;
case 0x53d611:c.instructions+=1;goto B53d611;
case 0x53d613:goto L53d613;
case 0x53d618:c.instructions+=5;goto B53d618;
case 0x53d61b:c.instructions+=4;goto B53d61b;
case 0x53d61d:c.instructions+=3;goto B53d61d;
case 0x53d61e:c.instructions+=2;goto B53d61e;
case 0x53d61f:c.instructions+=1;goto B53d61f;
case 0x53d624:goto L53d624;
case 0x53d625:c.instructions+=1;goto B53d625;
case 0x53d628:goto L53d628;
case 0x53d62c:goto L53d62c;
case 0x53d62d:c.instructions+=1;goto B53d62d;
case 0x53d630:goto L53d630;
case 0x53d63a:c.instructions+=2;goto B53d63a;
case 0x53d63f:c.instructions+=1;goto B53d63f;
case 0x53d640:goto L53d640;
case 0x53d643:c.instructions+=3;goto B53d643;
case 0x53d646:c.instructions+=2;goto B53d646;
case 0x53d64b:c.instructions+=1;goto B53d64b;
case 0x53d64d:goto L53d64d;
case 0x53d652:c.instructions+=8;goto B53d652;
case 0x53d653:c.instructions+=7;goto B53d653;
case 0x53d657:c.instructions+=6;goto B53d657;
case 0x53d661:c.instructions+=5;goto B53d661;
case 0x53d665:c.instructions+=4;goto B53d665;
case 0x53d667:c.instructions+=3;goto B53d667;
case 0x53d669:c.instructions+=2;goto B53d669;
case 0x53d66e:c.instructions+=1;goto B53d66e;
case 0x53d670:goto L53d670;
case 0x53d673:c.instructions+=1;goto B53d673;
case 0x53d675:goto L53d675;
case 0x53d678:c.instructions+=3;goto B53d678;
case 0x53d679:c.instructions+=2;goto B53d679;
case 0x53d67f:c.instructions+=1;goto B53d67f;
case 0x53d681:goto L53d681;
case 0x53d683:goto L53d683;
case 0x53d685:c.instructions+=5;goto B53d685;
case 0x53d688:c.instructions+=4;goto B53d688;
case 0x53d689:c.instructions+=3;goto B53d689;
case 0x53d68e:c.instructions+=2;goto B53d68e;
case 0x53d68f:c.instructions+=1;goto B53d68f;
case 0x53d694:goto L53d694;
case 0x53d697:goto L53d697;
case 0x53d69b:c.instructions+=4;goto B53d69b;
case 0x53d6a1:c.instructions+=3;goto B53d6a1;
case 0x53d6a6:c.instructions+=2;goto B53d6a6;
case 0x53d6a7:c.instructions+=1;goto B53d6a7;
case 0x53d6ac:goto L53d6ac;
case 0x53d6af:c.instructions+=3;goto B53d6af;
case 0x53d6b1:c.instructions+=2;goto B53d6b1;
case 0x53d6b2:c.instructions+=1;goto B53d6b2;
case 0x53d6b4:goto L53d6b4;
case 0x53d6b6:c.instructions+=2;goto B53d6b6;
case 0x53d6bb:c.instructions+=1;goto B53d6bb;
case 0x53d6c0:goto L53d6c0;
case 0x53d6c3:c.instructions+=1;goto B53d6c3;
case 0x53d6c5:goto L53d6c5;
case 0x53d6c8:c.instructions+=3;goto B53d6c8;
case 0x53d6c9:c.instructions+=2;goto B53d6c9;
case 0x53d6ce:c.instructions+=1;goto B53d6ce;
case 0x53d6d0:goto L53d6d0;
case 0x53d6d2:goto L53d6d2;
case 0x53d6d4:c.instructions+=5;goto B53d6d4;
case 0x53d6d7:c.instructions+=4;goto B53d6d7;
case 0x53d6dd:c.instructions+=3;goto B53d6dd;
case 0x53d6e2:c.instructions+=2;goto B53d6e2;
case 0x53d6e3:c.instructions+=1;goto B53d6e3;
case 0x53d6e8:goto L53d6e8;
case 0x53d6eb:goto L53d6eb;
case 0x53d6f1:c.instructions+=2;goto B53d6f1;
case 0x53d6f3:c.instructions+=1;goto B53d6f3;
case 0x53d6f5:goto L53d6f5;
case 0x53d6f9:c.instructions+=4;goto B53d6f9;
case 0x53d6fb:c.instructions+=3;goto B53d6fb;
case 0x53d700:c.instructions+=2;goto B53d700;
case 0x53d701:c.instructions+=1;goto B53d701;
case 0x53d706:goto L53d706;
case 0x53d710:goto L53d710;
case 0x53d71a:c.instructions+=2;goto B53d71a;
case 0x53d71f:c.instructions+=1;goto B53d71f;
case 0x53d720:goto L53d720;
case 0x53d723:c.instructions+=3;goto B53d723;
case 0x53d726:c.instructions+=2;goto B53d726;
case 0x53d72b:c.instructions+=1;goto B53d72b;
case 0x53d72d:goto L53d72d;
case 0x53d737:c.instructions+=3;goto B53d737;
case 0x53d739:c.instructions+=2;goto B53d739;
case 0x53d73e:c.instructions+=1;goto B53d73e;
case 0x53d740:goto L53d740;
case 0x53d743:c.instructions+=1;goto B53d743;
case 0x53d745:goto L53d745;
case 0x53d748:c.instructions+=3;goto B53d748;
case 0x53d749:c.instructions+=2;goto B53d749;
case 0x53d74e:c.instructions+=1;goto B53d74e;
case 0x53d750:goto L53d750;
case 0x53d752:goto L53d752;
case 0x53d754:c.instructions+=5;goto B53d754;
case 0x53d757:c.instructions+=4;goto B53d757;
case 0x53d75d:c.instructions+=3;goto B53d75d;
case 0x53d762:c.instructions+=2;goto B53d762;
case 0x53d763:c.instructions+=1;goto B53d763;
case 0x53d768:goto L53d768;
case 0x53d76b:goto L53d76b;
case 0x53d770:goto L53d770;
case 0x53d775:goto L53d775;
case 0x53d77b:c.instructions+=2;goto B53d77b;
case 0x53d77d:c.instructions+=1;goto B53d77d;
case 0x53d77f:goto L53d77f;
case 0x53d783:c.instructions+=4;goto B53d783;
case 0x53d785:c.instructions+=3;goto B53d785;
case 0x53d78a:c.instructions+=2;goto B53d78a;
case 0x53d78b:c.instructions+=1;goto B53d78b;
case 0x53d790:goto L53d790;
case 0x53d796:goto L53d796;
case 0x53d7a0:goto L53d7a0;
case 0x53d7a5:goto L53d7a5;
case 0x53d7a8:c.instructions+=3;goto B53d7a8;
case 0x53d7ab:c.instructions+=2;goto B53d7ab;
case 0x53d7b0:c.instructions+=1;goto B53d7b0;
case 0x53d7b2:goto L53d7b2;
case 0x53d7bc:c.instructions+=2;goto B53d7bc;
case 0x53d7be:c.instructions+=1;goto B53d7be;
case 0x53d7c3:goto L53d7c3;
case 0x53d7c6:c.instructions+=1;goto B53d7c6;
case 0x53d7c8:goto L53d7c8;
case 0x53d7cb:c.instructions+=3;goto B53d7cb;
case 0x53d7cc:c.instructions+=2;goto B53d7cc;
case 0x53d7d1:c.instructions+=1;goto B53d7d1;
case 0x53d7d3:goto L53d7d3;
case 0x53d7d5:goto L53d7d5;
case 0x53d7d9:c.instructions+=6;goto B53d7d9;
case 0x53d7db:c.instructions+=5;goto B53d7db;
case 0x53d7de:c.instructions+=4;goto B53d7de;
case 0x53d7df:c.instructions+=3;goto B53d7df;
case 0x53d7e5:c.instructions+=2;goto B53d7e5;
case 0x53d7e6:c.instructions+=1;goto B53d7e6;
case 0x53d7eb:goto L53d7eb;
case 0x53d7ee:goto L53d7ee;
case 0x53d7f2:c.instructions+=3;goto B53d7f2;
case 0x53d7f7:c.instructions+=2;goto B53d7f7;
case 0x53d7f8:c.instructions+=1;goto B53d7f8;
case 0x53d7fd:goto L53d7fd;
case 0x53d800:c.instructions+=2;goto B53d800;
case 0x53d802:c.instructions+=1;goto B53d802;
case 0x53d804:goto L53d804;
case 0x53d806:c.instructions+=2;goto B53d806;
case 0x53d80b:c.instructions+=1;goto B53d80b;
case 0x53d810:goto L53d810;
case 0x53d813:c.instructions+=1;goto B53d813;
case 0x53d815:goto L53d815;
case 0x53d818:c.instructions+=3;goto B53d818;
case 0x53d819:c.instructions+=2;goto B53d819;
case 0x53d81e:c.instructions+=1;goto B53d81e;
case 0x53d820:goto L53d820;
case 0x53d822:goto L53d822;
case 0x53d824:c.instructions+=5;goto B53d824;
case 0x53d827:c.instructions+=4;goto B53d827;
case 0x53d82d:c.instructions+=3;goto B53d82d;
case 0x53d832:c.instructions+=2;goto B53d832;
case 0x53d833:c.instructions+=1;goto B53d833;
case 0x53d838:goto L53d838;
case 0x53d83b:goto L53d83b;
case 0x53d840:c.instructions+=2;goto B53d840;
case 0x53d84a:c.instructions+=1;goto B53d84a;
case 0x53d84f:goto L53d84f;
case 0x53d855:c.instructions+=2;goto B53d855;
case 0x53d857:c.instructions+=1;goto B53d857;
case 0x53d859:goto L53d859;
case 0x53d85d:c.instructions+=4;goto B53d85d;
case 0x53d85f:c.instructions+=3;goto B53d85f;
case 0x53d864:c.instructions+=2;goto B53d864;
case 0x53d865:c.instructions+=1;goto B53d865;
case 0x53d86a:goto L53d86a;
case 0x53d870:goto L53d870;
case 0x53d871:c.instructions+=7;goto B53d871;
case 0x53d873:c.instructions+=6;goto B53d873;
case 0x53d877:c.instructions+=5;goto B53d877;
case 0x53d87d:c.instructions+=4;goto B53d87d;
case 0x53d87f:c.instructions+=3;goto B53d87f;
case 0x53d880:c.instructions+=2;goto B53d880;
case 0x53d882:c.instructions+=1;goto B53d882;
case 0x53d885:goto L53d885;
case 0x53d889:c.instructions+=4;goto B53d889;
case 0x53d88b:c.instructions+=3;goto B53d88b;
case 0x53d891:c.instructions+=2;goto B53d891;
case 0x53d895:c.instructions+=1;goto B53d895;
case 0x53d897:goto L53d897;
case 0x53d898:c.instructions+=2;goto B53d898;
case 0x53d89a:c.instructions+=1;goto B53d89a;
case 0x53d89f:goto L53d89f;
case 0x53d8a5:c.instructions+=5;goto B53d8a5;
case 0x53d8a8:c.instructions+=4;goto B53d8a8;
case 0x53d8ae:c.instructions+=3;goto B53d8ae;
case 0x53d8b0:c.instructions+=2;goto B53d8b0;
case 0x53d8b2:c.instructions+=1;goto B53d8b2;
case 0x53d8b5:goto L53d8b5;
case 0x53d8b6:c.instructions+=1;goto B53d8b6;
case 0x53d8c0:goto L53d8c0;
case 0x53d8c5:c.instructions+=1;goto B53d8c5;
case 0x53d8ca:goto L53d8ca;
case 0x53d8cd:c.instructions+=2;goto B53d8cd;
case 0x53d8cf:c.instructions+=1;goto B53d8cf;
case 0x53d8d1:goto L53d8d1;
case 0x53d8d7:c.instructions+=2;goto B53d8d7;
case 0x53d8d9:c.instructions+=1;goto B53d8d9;
case 0x53d8db:goto L53d8db;
case 0x53d8e0:c.instructions+=1;goto B53d8e0;
case 0x53d8e5:goto L53d8e5;
case 0x53d8f0:goto L53d8f0;
case 0x53d8f3:c.instructions+=8;goto B53d8f3;
case 0x53d8f4:c.instructions+=7;goto B53d8f4;
case 0x53d8f5:c.instructions+=6;goto B53d8f5;
case 0x53d8f9:c.instructions+=5;goto B53d8f9;
case 0x53d8fa:c.instructions+=4;goto B53d8fa;
case 0x53d8fc:c.instructions+=3;goto B53d8fc;
case 0x53d8fe:c.instructions+=2;goto B53d8fe;
case 0x53d903:c.instructions+=1;goto B53d903;
case 0x53d907:goto L53d907;
case 0x53d909:goto L53d909;
case 0x53d90c:c.instructions+=14;goto B53d90c;
case 0x53d90e:c.instructions+=13;goto B53d90e;
case 0x53d912:c.instructions+=12;goto B53d912;
case 0x53d916:c.instructions+=11;goto B53d916;
case 0x53d918:c.instructions+=10;goto B53d918;
case 0x53d919:c.instructions+=9;goto B53d919;
case 0x53d921:c.instructions+=8;goto B53d921;
case 0x53d929:c.instructions+=7;goto B53d929;
case 0x53d931:c.instructions+=6;goto B53d931;
case 0x53d939:c.instructions+=5;goto B53d939;
case 0x53d941:c.instructions+=4;goto B53d941;
case 0x53d949:c.instructions+=3;goto B53d949;
case 0x53d94d:c.instructions+=2;goto B53d94d;
case 0x53d955:c.instructions+=1;goto B53d955;
case 0x53d958:goto L53d958;
case 0x53d95a:c.instructions+=2;goto B53d95a;
case 0x53d95c:c.instructions+=1;goto B53d95c;
case 0x53d95e:goto L53d95e;
case 0x53d95f:c.instructions+=1;goto B53d95f;
case 0x53d964:goto L53d964;
case 0x53d967:c.instructions+=2;goto B53d967;
case 0x53d969:c.instructions+=1;goto B53d969;
case 0x53d96b:goto L53d96b;
case 0x53d970:c.instructions+=2;goto B53d970;
case 0x53d972:c.instructions+=1;goto B53d972;
case 0x53d977:goto L53d977;
case 0x53d979:c.instructions+=1;goto B53d979;
case 0x53d97b:goto L53d97b;
case 0x53d980:c.instructions+=2;goto B53d980;
case 0x53d982:c.instructions+=1;goto B53d982;
case 0x53d984:goto L53d984;
case 0x53d987:c.instructions+=3;goto B53d987;
case 0x53d988:c.instructions+=2;goto B53d988;
case 0x53d98d:c.instructions+=1;goto B53d98d;
case 0x53d992:goto L53d992;
case 0x53d994:c.instructions+=1;goto B53d994;
case 0x53d996:goto L53d996;
case 0x53d99a:c.instructions+=1;goto B53d99a;
case 0x53d99c:goto L53d99c;
case 0x53d99e:goto L53d99e;
case 0x53d9a0:c.instructions+=2;goto B53d9a0;
case 0x53d9a6:c.instructions+=1;goto B53d9a6;
case 0x53d9a8:goto L53d9a8;
case 0x53d9a9:c.instructions+=1;goto B53d9a9;
case 0x53d9ae:goto L53d9ae;
case 0x53d9b1:c.instructions+=2;goto B53d9b1;
case 0x53d9b3:c.instructions+=1;goto B53d9b3;
case 0x53d9b5:goto L53d9b5;
case 0x53d9ba:c.instructions+=2;goto B53d9ba;
case 0x53d9bc:c.instructions+=1;goto B53d9bc;
case 0x53d9c1:goto L53d9c1;
case 0x53d9c3:c.instructions+=1;goto B53d9c3;
case 0x53d9c5:goto L53d9c5;
case 0x53d9ca:c.instructions+=2;goto B53d9ca;
case 0x53d9cc:c.instructions+=1;goto B53d9cc;
case 0x53d9ce:goto L53d9ce;
case 0x53d9d1:c.instructions+=3;goto B53d9d1;
case 0x53d9d2:c.instructions+=2;goto B53d9d2;
case 0x53d9d7:c.instructions+=1;goto B53d9d7;
case 0x53d9dc:goto L53d9dc;
case 0x53d9de:c.instructions+=1;goto B53d9de;
case 0x53d9e0:goto L53d9e0;
case 0x53d9e4:c.instructions+=1;goto B53d9e4;
case 0x53d9e6:goto L53d9e6;
case 0x53d9e8:goto L53d9e8;
case 0x53d9e9:c.instructions+=4;goto B53d9e9;
case 0x53d9ef:c.instructions+=3;goto B53d9ef;
case 0x53d9f5:c.instructions+=2;goto B53d9f5;
case 0x53d9fb:c.instructions+=1;goto B53d9fb;
case 0x53da00:goto L53da00;
case 0x53da03:c.instructions+=5;goto B53da03;
case 0x53da04:c.instructions+=4;goto B53da04;
case 0x53da05:c.instructions+=3;goto B53da05;
case 0x53da06:c.instructions+=2;goto B53da06;
case 0x53da09:c.instructions+=1;goto B53da09;
case 0x53da10:goto L53da10;
case 0x53da11:c.instructions+=4;goto B53da11;
case 0x53da15:c.instructions+=3;goto B53da15;
case 0x53da16:c.instructions+=2;goto B53da16;
case 0x53da18:c.instructions+=1;goto B53da18;
case 0x53da1d:goto L53da1d;
case 0x53da21:c.instructions+=6;goto B53da21;
case 0x53da25:c.instructions+=5;goto B53da25;
case 0x53da29:c.instructions+=4;goto B53da29;
case 0x53da2d:c.instructions+=3;goto B53da2d;
case 0x53da2f:c.instructions+=2;goto B53da2f;
case 0x53da32:c.instructions+=1;goto B53da32;
case 0x53da34:goto L53da34;
case 0x53da38:c.instructions+=2;goto B53da38;
case 0x53da3e:c.instructions+=1;goto B53da3e;
case 0x53da42:goto L53da42;
case 0x53da46:c.instructions+=6;goto B53da46;
case 0x53da4c:c.instructions+=5;goto B53da4c;
case 0x53da4f:c.instructions+=4;goto B53da4f;
case 0x53da52:c.instructions+=3;goto B53da52;
case 0x53da57:c.instructions+=2;goto B53da57;
case 0x53da58:c.instructions+=1;goto B53da58;
case 0x53da5d:goto L53da5d;
case 0x53da61:c.instructions+=9;goto B53da61;
case 0x53da65:c.instructions+=8;goto B53da65;
case 0x53da68:c.instructions+=7;goto B53da68;
case 0x53da6b:c.instructions+=6;goto B53da6b;
case 0x53da6e:c.instructions+=5;goto B53da6e;
case 0x53da71:c.instructions+=4;goto B53da71;
case 0x53da74:c.instructions+=3;goto B53da74;
case 0x53da76:c.instructions+=2;goto B53da76;
case 0x53da79:c.instructions+=1;goto B53da79;
case 0x53da7b:goto L53da7b;
case 0x53da7e:c.instructions+=1;goto B53da7e;
case 0x53da81:goto L53da81;
case 0x53da84:c.instructions+=4;goto B53da84;
case 0x53da87:c.instructions+=3;goto B53da87;
case 0x53da89:c.instructions+=2;goto B53da89;
case 0x53da8c:c.instructions+=1;goto B53da8c;
case 0x53da8e:goto L53da8e;
case 0x53da91:c.instructions+=1;goto B53da91;
case 0x53da94:goto L53da94;
case 0x53da95:c.instructions+=2;goto B53da95;
case 0x53da96:c.instructions+=1;goto B53da96;
case 0x53daa0:goto L53daa0;
case 0x53daa3:c.instructions+=8;goto B53daa3;
case 0x53daa4:c.instructions+=7;goto B53daa4;
case 0x53daa5:c.instructions+=6;goto B53daa5;
case 0x53daa6:c.instructions+=5;goto B53daa6;
case 0x53daa7:c.instructions+=4;goto B53daa7;
case 0x53daa9:c.instructions+=3;goto B53daa9;
case 0x53daab:c.instructions+=2;goto B53daab;
case 0x53dab0:c.instructions+=1;goto B53dab0;
case 0x53dab4:goto L53dab4;
case 0x53dab6:goto L53dab6;
case 0x53daba:c.instructions+=15;goto B53daba;
case 0x53dabd:c.instructions+=14;goto B53dabd;
case 0x53dabf:c.instructions+=13;goto B53dabf;
case 0x53dac3:c.instructions+=12;goto B53dac3;
case 0x53dac7:c.instructions+=11;goto B53dac7;
case 0x53dac9:c.instructions+=10;goto B53dac9;
case 0x53daca:c.instructions+=9;goto B53daca;
case 0x53dad2:c.instructions+=8;goto B53dad2;
case 0x53dada:c.instructions+=7;goto B53dada;
case 0x53dae2:c.instructions+=6;goto B53dae2;
case 0x53daea:c.instructions+=5;goto B53daea;
case 0x53daf2:c.instructions+=4;goto B53daf2;
case 0x53dafa:c.instructions+=3;goto B53dafa;
case 0x53db02:c.instructions+=2;goto B53db02;
case 0x53db06:c.instructions+=1;goto B53db06;
case 0x53db09:goto L53db09;
case 0x53db0e:c.instructions+=3;goto B53db0e;
case 0x53db16:c.instructions+=2;goto B53db16;
case 0x53db19:c.instructions+=1;goto B53db19;
case 0x53db21:goto L53db21;
case 0x53db23:c.instructions+=1;goto B53db23;
case 0x53db25:goto L53db25;
case 0x53db26:c.instructions+=1;goto B53db26;
case 0x53db2b:goto L53db2b;
case 0x53db2e:c.instructions+=2;goto B53db2e;
case 0x53db30:c.instructions+=1;goto B53db30;
case 0x53db32:goto L53db32;
case 0x53db36:c.instructions+=3;goto B53db36;
case 0x53db37:c.instructions+=2;goto B53db37;
case 0x53db39:c.instructions+=1;goto B53db39;
case 0x53db3e:goto L53db3e;
case 0x53db40:c.instructions+=1;goto B53db40;
case 0x53db42:goto L53db42;
case 0x53db47:c.instructions+=2;goto B53db47;
case 0x53db49:c.instructions+=1;goto B53db49;
case 0x53db4b:goto L53db4b;
case 0x53db4f:c.instructions+=4;goto B53db4f;
case 0x53db52:c.instructions+=3;goto B53db52;
case 0x53db53:c.instructions+=2;goto B53db53;
case 0x53db54:c.instructions+=1;goto B53db54;
case 0x53db59:goto L53db59;
case 0x53db5b:goto L53db5b;
case 0x53db5d:goto L53db5d;
case 0x53db5f:c.instructions+=2;goto B53db5f;
case 0x53db62:c.instructions+=1;goto B53db62;
case 0x53db64:goto L53db64;
case 0x53db6a:c.instructions+=2;goto B53db6a;
case 0x53db6c:c.instructions+=1;goto B53db6c;
case 0x53db6e:goto L53db6e;
case 0x53db72:c.instructions+=1;goto B53db72;
case 0x53db74:goto L53db74;
case 0x53db7b:goto L53db7b;
case 0x53db7f:c.instructions+=1;goto B53db7f;
case 0x53db81:goto L53db81;
case 0x53db84:c.instructions+=3;goto B53db84;
case 0x53db87:c.instructions+=2;goto B53db87;
case 0x53db89:c.instructions+=1;goto B53db89;
case 0x53db8b:goto L53db8b;
case 0x53db8d:c.instructions+=1;goto B53db8d;
case 0x53db90:goto L53db90;
case 0x53db91:c.instructions+=1;goto B53db91;
case 0x53db96:goto L53db96;
case 0x53db99:c.instructions+=3;goto B53db99;
case 0x53db9c:c.instructions+=2;goto B53db9c;
case 0x53db9d:c.instructions+=1;goto B53db9d;
case 0x53db9f:goto L53db9f;
case 0x53dba0:c.instructions+=5;goto B53dba0;
case 0x53dba5:c.instructions+=4;goto B53dba5;
case 0x53dba9:c.instructions+=3;goto B53dba9;
case 0x53dbab:c.instructions+=2;goto B53dbab;
case 0x53dbac:c.instructions+=1;goto B53dbac;
case 0x53dbb1:goto L53dbb1;
case 0x53dbb5:c.instructions+=6;goto B53dbb5;
case 0x53dbb8:c.instructions+=5;goto B53dbb8;
case 0x53dbb9:c.instructions+=4;goto B53dbb9;
case 0x53dbbc:c.instructions+=3;goto B53dbbc;
case 0x53dbbe:c.instructions+=2;goto B53dbbe;
case 0x53dbc2:c.instructions+=1;goto B53dbc2;
case 0x53dbc4:goto L53dbc4;
case 0x53dbc7:c.instructions+=2;goto B53dbc7;
case 0x53dbc9:c.instructions+=1;goto B53dbc9;
case 0x53dbcb:goto L53dbcb;
case 0x53dbcd:c.instructions+=1;goto B53dbcd;
case 0x53dbcf:goto L53dbcf;
case 0x53dbd1:goto L53dbd1;
case 0x53dbd4:c.instructions+=5;goto B53dbd4;
case 0x53dbd7:c.instructions+=4;goto B53dbd7;
case 0x53dbd9:c.instructions+=3;goto B53dbd9;
case 0x53dbda:c.instructions+=2;goto B53dbda;
case 0x53dbdc:c.instructions+=1;goto B53dbdc;
case 0x53dbde:goto L53dbde;
case 0x53dbe0:c.instructions+=1;goto B53dbe0;
case 0x53dbe2:goto L53dbe2;
case 0x53dbe3:c.instructions+=1;goto B53dbe3;
case 0x53dbe8:goto L53dbe8;
case 0x53dbeb:c.instructions+=2;goto B53dbeb;
case 0x53dbed:c.instructions+=1;goto B53dbed;
case 0x53dbef:goto L53dbef;
case 0x53dbf0:c.instructions+=2;goto B53dbf0;
case 0x53dbf2:c.instructions+=1;goto B53dbf2;
case 0x53dbf7:goto L53dbf7;
case 0x53dbf9:c.instructions+=1;goto B53dbf9;
case 0x53dbfb:goto L53dbfb;
case 0x53dc00:c.instructions+=2;goto B53dc00;
case 0x53dc02:c.instructions+=1;goto B53dc02;
case 0x53dc04:goto L53dc04;
case 0x53dc07:c.instructions+=3;goto B53dc07;
case 0x53dc08:c.instructions+=2;goto B53dc08;
case 0x53dc09:c.instructions+=1;goto B53dc09;
case 0x53dc0e:goto L53dc0e;
case 0x53dc10:goto L53dc10;
case 0x53dc12:goto L53dc12;
case 0x53dc14:c.instructions+=2;goto B53dc14;
case 0x53dc16:c.instructions+=1;goto B53dc16;
case 0x53dc18:goto L53dc18;
case 0x53dc1e:c.instructions+=2;goto B53dc1e;
case 0x53dc20:c.instructions+=1;goto B53dc20;
case 0x53dc22:goto L53dc22;
case 0x53dc26:c.instructions+=1;goto B53dc26;
case 0x53dc28:goto L53dc28;
case 0x53dc2f:goto L53dc2f;
case 0x53dc33:c.instructions+=1;goto B53dc33;
case 0x53dc35:goto L53dc35;
case 0x53dc38:c.instructions+=3;goto B53dc38;
case 0x53dc3b:c.instructions+=2;goto B53dc3b;
case 0x53dc3d:c.instructions+=1;goto B53dc3d;
case 0x53dc3f:goto L53dc3f;
case 0x53dc41:goto L53dc41;
case 0x53dc42:c.instructions+=1;goto B53dc42;
case 0x53dc47:goto L53dc47;
case 0x53dc4a:c.instructions+=3;goto B53dc4a;
case 0x53dc4d:c.instructions+=2;goto B53dc4d;
case 0x53dc4e:c.instructions+=1;goto B53dc4e;
case 0x53dc50:goto L53dc50;
case 0x53dc51:c.instructions+=5;goto B53dc51;
case 0x53dc56:c.instructions+=4;goto B53dc56;
case 0x53dc5a:c.instructions+=3;goto B53dc5a;
case 0x53dc5c:c.instructions+=2;goto B53dc5c;
case 0x53dc5d:c.instructions+=1;goto B53dc5d;
case 0x53dc62:goto L53dc62;
case 0x53dc66:c.instructions+=6;goto B53dc66;
case 0x53dc69:c.instructions+=5;goto B53dc69;
case 0x53dc6a:c.instructions+=4;goto B53dc6a;
case 0x53dc6d:c.instructions+=3;goto B53dc6d;
case 0x53dc6f:c.instructions+=2;goto B53dc6f;
case 0x53dc73:c.instructions+=1;goto B53dc73;
case 0x53dc75:goto L53dc75;
case 0x53dc78:c.instructions+=2;goto B53dc78;
case 0x53dc7a:c.instructions+=1;goto B53dc7a;
case 0x53dc7c:goto L53dc7c;
case 0x53dc7e:c.instructions+=1;goto B53dc7e;
case 0x53dc80:goto L53dc80;
case 0x53dc82:goto L53dc82;
case 0x53dc85:c.instructions+=5;goto B53dc85;
case 0x53dc88:c.instructions+=4;goto B53dc88;
case 0x53dc8a:c.instructions+=3;goto B53dc8a;
case 0x53dc8b:c.instructions+=2;goto B53dc8b;
case 0x53dc8d:c.instructions+=1;goto B53dc8d;
case 0x53dc8f:goto L53dc8f;
case 0x53dc91:c.instructions+=1;goto B53dc91;
case 0x53dc93:goto L53dc93;
case 0x53dc94:c.instructions+=1;goto B53dc94;
case 0x53dc99:goto L53dc99;
case 0x53dc9c:c.instructions+=2;goto B53dc9c;
case 0x53dc9e:c.instructions+=1;goto B53dc9e;
case 0x53dca0:goto L53dca0;
case 0x53dca1:c.instructions+=2;goto B53dca1;
case 0x53dca3:c.instructions+=1;goto B53dca3;
case 0x53dca8:goto L53dca8;
case 0x53dcaa:c.instructions+=1;goto B53dcaa;
case 0x53dcac:goto L53dcac;
case 0x53dcb1:c.instructions+=2;goto B53dcb1;
case 0x53dcb3:c.instructions+=1;goto B53dcb3;
case 0x53dcb5:goto L53dcb5;
case 0x53dcb8:c.instructions+=3;goto B53dcb8;
case 0x53dcb9:c.instructions+=2;goto B53dcb9;
case 0x53dcba:c.instructions+=1;goto B53dcba;
case 0x53dcbf:goto L53dcbf;
case 0x53dcc1:goto L53dcc1;
case 0x53dcc3:goto L53dcc3;
case 0x53dcc5:c.instructions+=2;goto B53dcc5;
case 0x53dcc8:c.instructions+=1;goto B53dcc8;
case 0x53dcca:goto L53dcca;
case 0x53dcd0:c.instructions+=2;goto B53dcd0;
case 0x53dcd2:c.instructions+=1;goto B53dcd2;
case 0x53dcd4:goto L53dcd4;
case 0x53dcd8:c.instructions+=1;goto B53dcd8;
case 0x53dcda:goto L53dcda;
case 0x53dce1:goto L53dce1;
case 0x53dce5:c.instructions+=1;goto B53dce5;
case 0x53dce7:goto L53dce7;
case 0x53dcea:c.instructions+=3;goto B53dcea;
case 0x53dced:c.instructions+=2;goto B53dced;
case 0x53dcef:c.instructions+=1;goto B53dcef;
case 0x53dcf1:goto L53dcf1;
case 0x53dcf3:goto L53dcf3;
case 0x53dcf4:c.instructions+=1;goto B53dcf4;
case 0x53dcf9:goto L53dcf9;
case 0x53dcfc:c.instructions+=3;goto B53dcfc;
case 0x53dcff:c.instructions+=2;goto B53dcff;
case 0x53dd00:c.instructions+=1;goto B53dd00;
case 0x53dd02:goto L53dd02;
case 0x53dd06:c.instructions+=7;goto B53dd06;
case 0x53dd0a:c.instructions+=6;goto B53dd0a;
case 0x53dd0b:c.instructions+=5;goto B53dd0b;
case 0x53dd0e:c.instructions+=4;goto B53dd0e;
case 0x53dd0f:c.instructions+=3;goto B53dd0f;
case 0x53dd13:c.instructions+=2;goto B53dd13;
case 0x53dd17:c.instructions+=1;goto B53dd17;
case 0x53dd1d:goto L53dd1d;
case 0x53dd1e:c.instructions+=5;goto B53dd1e;
case 0x53dd1f:c.instructions+=4;goto B53dd1f;
case 0x53dd20:c.instructions+=3;goto B53dd20;
case 0x53dd21:c.instructions+=2;goto B53dd21;
case 0x53dd24:c.instructions+=1;goto B53dd24;
case 0x53dd30:goto L53dd30;
case 0x53dd31:c.instructions+=4;goto B53dd31;
case 0x53dd35:c.instructions+=3;goto B53dd35;
case 0x53dd37:c.instructions+=2;goto B53dd37;
case 0x53dd41:c.instructions+=1;goto B53dd41;
case 0x53dd43:goto L53dd43;
case 0x53dd48:c.instructions+=3;goto B53dd48;
case 0x53dd49:c.instructions+=2;goto B53dd49;
case 0x53dd4e:c.instructions+=1;goto B53dd4e;
case 0x53dd53:goto L53dd53;
case 0x53dd59:c.instructions+=3;goto B53dd59;
case 0x53dd5c:c.instructions+=2;goto B53dd5c;
case 0x53dd5e:c.instructions+=1;goto B53dd5e;
case 0x53dd60:goto L53dd60;
case 0x53dd62:c.instructions+=3;goto B53dd62;
case 0x53dd67:c.instructions+=2;goto B53dd67;
case 0x53dd68:c.instructions+=1;goto B53dd68;
case 0x53dd6d:goto L53dd6d;
case 0x53dd6e:c.instructions+=1;goto B53dd6e;
case 0x53dd70:goto L53dd70;
case 0x53dd71:c.instructions+=4;goto B53dd71;
case 0x53dd75:c.instructions+=3;goto B53dd75;
case 0x53dd77:c.instructions+=2;goto B53dd77;
case 0x53dd81:c.instructions+=1;goto B53dd81;
case 0x53dd83:goto L53dd83;
case 0x53dd88:c.instructions+=3;goto B53dd88;
case 0x53dd89:c.instructions+=2;goto B53dd89;
case 0x53dd8e:c.instructions+=1;goto B53dd8e;
case 0x53dd93:goto L53dd93;
case 0x53dd99:c.instructions+=3;goto B53dd99;
case 0x53dd9c:c.instructions+=2;goto B53dd9c;
case 0x53dd9e:c.instructions+=1;goto B53dd9e;
case 0x53dda0:goto L53dda0;
case 0x53dda2:c.instructions+=3;goto B53dda2;
case 0x53dda7:c.instructions+=2;goto B53dda7;
case 0x53dda8:c.instructions+=1;goto B53dda8;
case 0x53ddad:goto L53ddad;
case 0x53ddae:c.instructions+=1;goto B53ddae;
case 0x53ddb0:goto L53ddb0;
case 0x53ddb1:c.instructions+=5;goto B53ddb1;
case 0x53ddb5:c.instructions+=4;goto B53ddb5;
case 0x53ddba:c.instructions+=3;goto B53ddba;
case 0x53ddbb:c.instructions+=2;goto B53ddbb;
case 0x53ddc0:c.instructions+=1;goto B53ddc0;
case 0x53ddc5:goto L53ddc5;
case 0x53ddcb:c.instructions+=4;goto B53ddcb;
case 0x53ddce:c.instructions+=3;goto B53ddce;
case 0x53ddd0:c.instructions+=2;goto B53ddd0;
case 0x53ddda:c.instructions+=1;goto B53ddda;
case 0x53dddc:goto L53dddc;
case 0x53ddde:c.instructions+=3;goto B53ddde;
case 0x53dde3:c.instructions+=2;goto B53dde3;
case 0x53dde4:c.instructions+=1;goto B53dde4;
case 0x53dde9:goto L53dde9;
case 0x53ddea:c.instructions+=1;goto B53ddea;
case 0x53ddf0:goto L53ddf0;
case 0x53ddf1:c.instructions+=5;goto B53ddf1;
case 0x53ddf5:c.instructions+=4;goto B53ddf5;
case 0x53ddfa:c.instructions+=3;goto B53ddfa;
case 0x53ddfb:c.instructions+=2;goto B53ddfb;
case 0x53de00:c.instructions+=1;goto B53de00;
case 0x53de05:goto L53de05;
case 0x53de0b:c.instructions+=4;goto B53de0b;
case 0x53de0e:c.instructions+=3;goto B53de0e;
case 0x53de10:c.instructions+=2;goto B53de10;
case 0x53de1a:c.instructions+=1;goto B53de1a;
case 0x53de1c:goto L53de1c;
case 0x53de1e:c.instructions+=3;goto B53de1e;
case 0x53de23:c.instructions+=2;goto B53de23;
case 0x53de24:c.instructions+=1;goto B53de24;
case 0x53de29:goto L53de29;
case 0x53de2a:c.instructions+=1;goto B53de2a;
case 0x53de30:goto L53de30;
case 0x53de36:c.instructions+=3;goto B53de36;
case 0x53de38:c.instructions+=2;goto B53de38;
case 0x53de42:c.instructions+=1;goto B53de42;
case 0x53de44:goto L53de44;
case 0x53de48:c.instructions+=4;goto B53de48;
case 0x53de4a:c.instructions+=3;goto B53de4a;
case 0x53de4f:c.instructions+=2;goto B53de4f;
case 0x53de50:c.instructions+=1;goto B53de50;
case 0x53de55:goto L53de55;
case 0x53de60:goto L53de60;
case 0x53de68:c.instructions+=1;goto B53de68;
case 0x53de6a:goto L53de6a;
case 0x53de6d:c.instructions+=2;goto B53de6d;
case 0x53de6f:c.instructions+=1;goto B53de6f;
case 0x53de71:goto L53de71;
case 0x53de77:c.instructions+=1;goto B53de77;
case 0x53de79:goto L53de79;
case 0x53de7f:c.instructions+=3;goto B53de7f;
case 0x53de82:c.instructions+=2;goto B53de82;
case 0x53de84:c.instructions+=1;goto B53de84;
case 0x53de86:goto L53de86;
case 0x53de88:goto L53de88;
case 0x53de8e:c.instructions+=4;goto B53de8e;
case 0x53de90:c.instructions+=3;goto B53de90;
case 0x53de93:c.instructions+=2;goto B53de93;
case 0x53de98:c.instructions+=1;goto B53de98;
case 0x53de9a:goto L53de9a;
case 0x53dea0:c.instructions+=5;goto B53dea0;
case 0x53dea4:c.instructions+=4;goto B53dea4;
case 0x53dea6:c.instructions+=3;goto B53dea6;
case 0x53dea7:c.instructions+=2;goto B53dea7;
case 0x53dea8:c.instructions+=1;goto B53dea8;
case 0x53dead:goto L53dead;
case 0x53deb0:goto L53deb0;
case 0x53deb3:c.instructions+=12;goto B53deb3;
case 0x53deb4:c.instructions+=11;goto B53deb4;
case 0x53deb5:c.instructions+=10;goto B53deb5;
case 0x53deb7:c.instructions+=9;goto B53deb7;
case 0x53deba:c.instructions+=8;goto B53deba;
case 0x53debd:c.instructions+=7;goto B53debd;
case 0x53debe:c.instructions+=6;goto B53debe;
case 0x53dec2:c.instructions+=5;goto B53dec2;
case 0x53dec4:c.instructions+=4;goto B53dec4;
case 0x53dec8:c.instructions+=3;goto B53dec8;
case 0x53decd:c.instructions+=2;goto B53decd;
case 0x53decf:c.instructions+=1;goto B53decf;
case 0x53ded0:goto L53ded0;
case 0x53ded2:c.instructions+=3;goto B53ded2;
case 0x53ded4:c.instructions+=2;goto B53ded4;
case 0x53ded8:c.instructions+=1;goto B53ded8;
case 0x53deda:goto L53deda;
case 0x53dedd:c.instructions+=3;goto B53dedd;
case 0x53dee0:c.instructions+=2;goto B53dee0;
case 0x53dee6:c.instructions+=1;goto B53dee6;
case 0x53dee8:goto L53dee8;
case 0x53deec:c.instructions+=4;goto B53deec;
case 0x53def2:c.instructions+=3;goto B53def2;
case 0x53def6:c.instructions+=2;goto B53def6;
case 0x53def9:c.instructions+=1;goto B53def9;
case 0x53defb:goto L53defb;
case 0x53defc:c.instructions+=1;goto B53defc;
case 0x53defe:goto L53defe;
case 0x53df03:goto L53df03;
case 0x53df06:c.instructions+=2;goto B53df06;
case 0x53df08:c.instructions+=1;goto B53df08;
case 0x53df0a:goto L53df0a;
case 0x53df0f:c.instructions+=2;goto B53df0f;
case 0x53df12:c.instructions+=1;goto B53df12;
case 0x53df14:goto L53df14;
case 0x53df17:c.instructions+=2;goto B53df17;
case 0x53df19:c.instructions+=1;goto B53df19;
case 0x53df1b:goto L53df1b;
case 0x53df1d:c.instructions+=1;goto B53df1d;
case 0x53df1f:goto L53df1f;
case 0x53df21:goto L53df21;
case 0x53df24:c.instructions+=5;goto B53df24;
case 0x53df26:c.instructions+=4;goto B53df26;
case 0x53df29:c.instructions+=3;goto B53df29;
case 0x53df2a:c.instructions+=2;goto B53df2a;
case 0x53df2c:c.instructions+=1;goto B53df2c;
case 0x53df2e:goto L53df2e;
case 0x53df31:c.instructions+=2;goto B53df31;
case 0x53df33:c.instructions+=1;goto B53df33;
case 0x53df35:goto L53df35;
case 0x53df38:c.instructions+=1;goto B53df38;
case 0x53df3a:goto L53df3a;
case 0x53df3d:c.instructions+=2;goto B53df3d;
case 0x53df3f:c.instructions+=1;goto B53df3f;
case 0x53df41:goto L53df41;
case 0x53df48:c.instructions+=1;goto B53df48;
case 0x53df4d:goto L53df4d;
case 0x53df4f:c.instructions+=1;goto B53df4f;
case 0x53df51:goto L53df51;
case 0x53df54:c.instructions+=1;goto B53df54;
case 0x53df56:goto L53df56;
case 0x53df58:c.instructions+=2;goto B53df58;
case 0x53df5b:c.instructions+=1;goto B53df5b;
case 0x53df60:goto L53df60;
case 0x53df63:c.instructions+=1;goto B53df63;
case 0x53df66:goto L53df66;
case 0x53df69:goto L53df69;
case 0x53df70:c.instructions+=1;goto B53df70;
case 0x53df72:goto L53df72;
case 0x53df78:c.instructions+=1;goto B53df78;
case 0x53df7a:goto L53df7a;
case 0x53df7b:c.instructions+=2;goto B53df7b;
case 0x53df7e:c.instructions+=1;goto B53df7e;
case 0x53df80:goto L53df80;
case 0x53df82:goto L53df82;
case 0x53df85:c.instructions+=2;goto B53df85;
case 0x53df87:c.instructions+=1;goto B53df87;
case 0x53df89:goto L53df89;
case 0x53df8c:c.instructions+=2;goto B53df8c;
case 0x53df8e:c.instructions+=1;goto B53df8e;
case 0x53df90:goto L53df90;
case 0x53df95:c.instructions+=1;goto B53df95;
case 0x53df9a:goto L53df9a;
case 0x53df9d:c.instructions+=3;goto B53df9d;
case 0x53dfa0:c.instructions+=2;goto B53dfa0;
case 0x53dfa2:c.instructions+=1;goto B53dfa2;
case 0x53dfa4:goto L53dfa4;
case 0x53dfa7:c.instructions+=2;goto B53dfa7;
case 0x53dfa9:c.instructions+=1;goto B53dfa9;
case 0x53dfab:goto L53dfab;
case 0x53dfad:goto L53dfad;
case 0x53dfaf:c.instructions+=1;goto B53dfaf;
case 0x53dfb1:goto L53dfb1;
case 0x53dfb4:c.instructions+=1;goto B53dfb4;
case 0x53dfb6:goto L53dfb6;
case 0x53dfb8:c.instructions+=2;goto B53dfb8;
case 0x53dfbb:c.instructions+=1;goto B53dfbb;
case 0x53dfc0:goto L53dfc0;
case 0x53dfc3:c.instructions+=1;goto B53dfc3;
case 0x53dfc6:goto L53dfc6;
case 0x53dfc9:goto L53dfc9;
case 0x53dfd0:goto L53dfd0;
case 0x53dfd3:c.instructions+=1;goto B53dfd3;
case 0x53dfd5:goto L53dfd5;
case 0x53dfdb:c.instructions+=2;goto B53dfdb;
case 0x53dfdc:c.instructions+=1;goto B53dfdc;
case 0x53dfe1:goto L53dfe1;
case 0x53dfe5:c.instructions+=8;goto B53dfe5;
case 0x53dfe8:c.instructions+=7;goto B53dfe8;
case 0x53dfec:c.instructions+=6;goto B53dfec;
case 0x53dfef:c.instructions+=5;goto B53dfef;
case 0x53dff2:c.instructions+=4;goto B53dff2;
case 0x53dff4:c.instructions+=3;goto B53dff4;
case 0x53dff5:c.instructions+=2;goto B53dff5;
case 0x53dff6:c.instructions+=1;goto B53dff6;
case 0x53dff8:goto L53dff8;
case 0x53dffb:c.instructions+=1;goto B53dffb;
case 0x53dffd:goto L53dffd;
case 0x53dfff:goto L53dfff;
default:missing_instruction(c.pc);}
B53d005:L53d005:{c.instructions+=1;NFSU2_TR(0x53d005);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53d010:L53d010:{c.instructions+=3;NFSU2_TR(0x53d010);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d013:{NFSU2_TR(0x53d013);
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
B53d015:{NFSU2_TR(0x53d015);
if(r1(R+518)){{goto L53d01f;}}
}
B53d017:L53d017:{c.instructions+=2;NFSU2_TR(0x53d017);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53d01a:{NFSU2_TR(0x53d01a);
TAIL_STATIC(0x522d70u,522);
}
B53d01f:L53d01f:{c.instructions+=1;NFSU2_TR(0x53d01f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53d020:L53d020:{c.instructions+=3;NFSU2_TR(0x53d020);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d023:{NFSU2_TR(0x53d023);
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
B53d025:{NFSU2_TR(0x53d025);
if(r1(R+518)){{goto L53d02f;}}
}
B53d027:L53d027:{c.instructions+=2;NFSU2_TR(0x53d027);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53d02a:{NFSU2_TR(0x53d02a);
TAIL_STATIC(0x522dd0u,522);
}
B53d02f:L53d02f:{c.instructions+=1;NFSU2_TR(0x53d02f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53d030:L53d030:{c.instructions+=3;NFSU2_TR(0x53d030);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d031:{NFSU2_TR(0x53d031);
__builtin_memmove((R+24),(R+4),4);
}
B53d033:{NFSU2_TR(0x53d033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d038ull));
{goto L53d050;}
}
B53d038:L53d038:{c.instructions+=2;NFSU2_TR(0x53d038);
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
B53d03d:{NFSU2_TR(0x53d03d);
if(r1(R+518)){{goto L53d048;}}
}
B53d03f:L53d03f:{c.instructions+=2;NFSU2_TR(0x53d03f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d040:{NFSU2_TR(0x53d040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d045ull));
TAIL_STATIC(0x575630u,575);
}
B53d045:L53d045:{c.instructions+=1;NFSU2_TR(0x53d045);
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
B53d048:L53d048:{c.instructions+=3;NFSU2_TR(0x53d048);
__builtin_memmove((R+0),(R+24),4);
}
B53d04a:{NFSU2_TR(0x53d04a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53d04b:{NFSU2_TR(0x53d04b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53d050:L53d050:{c.instructions+=13;NFSU2_TR(0x53d050);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d052:{NFSU2_TR(0x53d052);
u8 U[4];
w4(U+0,u32(0x777878ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d057:{NFSU2_TR(0x53d057);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d05d:{NFSU2_TR(0x53d05d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d05e:{NFSU2_TR(0x53d05e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d065:{NFSU2_TR(0x53d065);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d066:{NFSU2_TR(0x53d066);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d067:{NFSU2_TR(0x53d067);
__builtin_memmove((R+24),(R+4),4);
}
B53d069:{NFSU2_TR(0x53d069);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d06d:{NFSU2_TR(0x53d06d);
u8 U[4];
w4(U+0,u32(0x79beb8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B53d073:{NFSU2_TR(0x53d073);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53d076:{NFSU2_TR(0x53d076);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53d07e:{NFSU2_TR(0x53d07e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d083ull));
TAIL_STATIC(0x531980u,531);
}
B53d083:L53d083:{c.instructions+=6;NFSU2_TR(0x53d083);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d087:{NFSU2_TR(0x53d087);
u8 U[4];
w4(U+0,u32(0x79ac38ull));
s4(u32(r4(R+24)),r4(U+0));
}
B53d08d:{NFSU2_TR(0x53d08d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53d08e:{NFSU2_TR(0x53d08e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d095:{NFSU2_TR(0x53d095);
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
B53d098:{NFSU2_TR(0x53d098);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53d0a0:L53d0a0:{c.instructions+=15;NFSU2_TR(0x53d0a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d0a1:{NFSU2_TR(0x53d0a1);
__builtin_memmove((R+20),(R+16),4);
}
B53d0a3:{NFSU2_TR(0x53d0a3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d0a5:{NFSU2_TR(0x53d0a5);
u8 U[4];
w4(U+0,u32(0x7778a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d0aa:{NFSU2_TR(0x53d0aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d0b0:{NFSU2_TR(0x53d0b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d0b1:{NFSU2_TR(0x53d0b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d0b8:{NFSU2_TR(0x53d0b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x94ull))));
}
B53d0be:{NFSU2_TR(0x53d0be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d0bf:{NFSU2_TR(0x53d0bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d0c0:{NFSU2_TR(0x53d0c0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d0c1:{NFSU2_TR(0x53d0c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53d0c4:{NFSU2_TR(0x53d0c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d0c7:{NFSU2_TR(0x53d0c7);
__builtin_memmove((R+4),(R+28),4);
}
B53d0c9:{NFSU2_TR(0x53d0c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d0ceull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B53d0ce:L53d0ce:{c.instructions+=2;NFSU2_TR(0x53d0ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53d0d0:{NFSU2_TR(0x53d0d0);
if(r1(R+518)){{goto L53d0da;}}
}
B53d0d2:L53d0d2:{c.instructions+=2;NFSU2_TR(0x53d0d2);
{u32 ea_=u32(u32(7978768u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B53d0d8:{NFSU2_TR(0x53d0d8);
{goto L53d0e0;}
}
B53d0da:L53d0da:{c.instructions+=1;NFSU2_TR(0x53d0da);
{u32 ea_=u32(u32(7978760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B53d0e0:L53d0e0:{c.instructions+=3;NFSU2_TR(0x53d0e0);
__builtin_memmove((R+4),(R+28),4);
}
B53d0e2:{NFSU2_TR(0x53d0e2);
{u32 ea_=u32(r4(R+20)+u32(4294967192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53d0e5:{NFSU2_TR(0x53d0e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d0eaull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B53d0ea:L53d0ea:{c.instructions+=2;NFSU2_TR(0x53d0ea);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53d0ec:{NFSU2_TR(0x53d0ec);
if(r1(R+518)){{goto L53d0f6;}}
}
B53d0ee:L53d0ee:{c.instructions+=2;NFSU2_TR(0x53d0ee);
{u32 ea_=u32(u32(7978752u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B53d0f4:{NFSU2_TR(0x53d0f4);
{goto L53d0fc;}
}
B53d0f6:L53d0f6:{c.instructions+=1;NFSU2_TR(0x53d0f6);
{u32 ea_=u32(u32(7978760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B53d0fc:L53d0fc:{c.instructions+=3;NFSU2_TR(0x53d0fc);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d0fe:{NFSU2_TR(0x53d0fe);
{u32 ea_=u32(r4(R+20)+u32(4294967200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53d101:{NFSU2_TR(0x53d101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d106ull));
TAIL_STATIC(0x575620u,575);
}
B53d106:L53d106:{c.instructions+=6;NFSU2_TR(0x53d106);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53d109:{NFSU2_TR(0x53d109);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d10c:{NFSU2_TR(0x53d10c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53d10e:{NFSU2_TR(0x53d10e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53d110:{NFSU2_TR(0x53d110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d113:{NFSU2_TR(0x53d113);
if(r1(R+518)){{goto L53d130;}}
}
B53d115:L53d115:{c.instructions+=9;NFSU2_TR(0x53d115);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d116:{NFSU2_TR(0x53d116);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d118:{NFSU2_TR(0x53d118);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d119:{NFSU2_TR(0x53d119);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d11b:{NFSU2_TR(0x53d11b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d11d:{NFSU2_TR(0x53d11d);
u8 U[4];
w4(U+0,u32(0x7fa3c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d122:{NFSU2_TR(0x53d122);
u8 U[4];
w4(U+0,u32(0x7fa3c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d127:{NFSU2_TR(0x53d127);
__builtin_memmove((R+4),(R+0),4);
}
B53d129:{NFSU2_TR(0x53d129);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d12eull));
TAIL_STATIC(0x5202b0u,520);
}
B53d12e:L53d12e:{c.instructions+=1;NFSU2_TR(0x53d12e);
{goto L53d132;}
}
B53d130:L53d130:{c.instructions+=1;NFSU2_TR(0x53d130);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53d132:L53d132:{c.instructions+=4;NFSU2_TR(0x53d132);
__builtin_memmove((R+4),(R+28),4);
}
B53d134:{NFSU2_TR(0x53d134);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B53d13b:{NFSU2_TR(0x53d13b);
__builtin_memmove(gp(0x838564),(R+0),4);
}
B53d140:{NFSU2_TR(0x53d140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d145ull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B53d145:L53d145:{c.instructions+=7;NFSU2_TR(0x53d145);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B53d147:{NFSU2_TR(0x53d147);
w4(R+8,u32(0x6285e80ull));
}
B53d14c:{NFSU2_TR(0x53d14c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B53d14e:{NFSU2_TR(0x53d14e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8fc570a8ull))));
}
B53d153:{NFSU2_TR(0x53d153);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcbbc6512ull))));
}
B53d158:{NFSU2_TR(0x53d158);
__builtin_memmove((R+24),(R+0),4);
}
B53d15a:{NFSU2_TR(0x53d15a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d15full));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B53d15f:L53d15f:{c.instructions+=2;NFSU2_TR(0x53d15f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53d161:{NFSU2_TR(0x53d161);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53d16d;}}
}
B53d163:L53d163:{c.instructions+=2;NFSU2_TR(0x53d163);
w4(R+8,u32(0xc01a6f63ull));
}
B53d168:{NFSU2_TR(0x53d168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d16dull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B53d16d:L53d16d:{c.instructions+=5;NFSU2_TR(0x53d16d);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d16f:{NFSU2_TR(0x53d16f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d170:{NFSU2_TR(0x53d170);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B53d176:{NFSU2_TR(0x53d176);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d177:{NFSU2_TR(0x53d177);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d17cull));
TAIL_STATIC(0x43dc00u,43d);
}
B53d17c:L53d17c:{c.instructions+=3;NFSU2_TR(0x53d17c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53d17f:{NFSU2_TR(0x53d17f);
__builtin_memmove((R+8),(R+24),4);
}
B53d181:{NFSU2_TR(0x53d181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d186ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B53d186:L53d186:{c.instructions+=2;NFSU2_TR(0x53d186);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53d188:{NFSU2_TR(0x53d188);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53d194;}}
}
B53d18a:L53d18a:{c.instructions+=2;NFSU2_TR(0x53d18a);
w4(R+8,u32(0xc01a6f63ull));
}
B53d18f:{NFSU2_TR(0x53d18f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d194ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B53d194:L53d194:{c.instructions+=8;NFSU2_TR(0x53d194);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53d197:{NFSU2_TR(0x53d197);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d198:{NFSU2_TR(0x53d198);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d19b:{NFSU2_TR(0x53d19b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53d1a1:{NFSU2_TR(0x53d1a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d1a2:{NFSU2_TR(0x53d1a2);
u8 U[4];
w4(U+0,u32(0xe2a8254cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d1a7:{NFSU2_TR(0x53d1a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d1a8:{NFSU2_TR(0x53d1a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d1adull));
TAIL_STATIC(0x537b80u,537);
}
B53d1ad:L53d1ad:{c.instructions+=3;NFSU2_TR(0x53d1ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B53d1b0:{NFSU2_TR(0x53d1b0);
__builtin_memmove((R+4),(R+28),4);
}
B53d1b2:{NFSU2_TR(0x53d1b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d1b7ull));
TAIL_STATIC(0x5ea8b0u,5ea);
}
B53d1b7:L53d1b7:{c.instructions+=7;NFSU2_TR(0x53d1b7);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B53d1b9:{NFSU2_TR(0x53d1b9);
w4(R+8,u32(0x38d548d2ull));
}
B53d1be:{NFSU2_TR(0x53d1be);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B53d1c0:{NFSU2_TR(0x53d1c0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xaec8f620ull))));
}
B53d1c5:{NFSU2_TR(0x53d1c5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xacb8dff3ull))));
}
B53d1ca:{NFSU2_TR(0x53d1ca);
__builtin_memmove((R+24),(R+0),4);
}
B53d1cc:{NFSU2_TR(0x53d1cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d1d1ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B53d1d1:L53d1d1:{c.instructions+=2;NFSU2_TR(0x53d1d1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53d1d3:{NFSU2_TR(0x53d1d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53d1df;}}
}
B53d1d5:L53d1d5:{c.instructions+=2;NFSU2_TR(0x53d1d5);
w4(R+8,u32(0xc01a6f63ull));
}
B53d1da:{NFSU2_TR(0x53d1da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d1dfull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B53d1df:L53d1df:{c.instructions+=5;NFSU2_TR(0x53d1df);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d1e1:{NFSU2_TR(0x53d1e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d1e2:{NFSU2_TR(0x53d1e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53d1e8:{NFSU2_TR(0x53d1e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d1e9:{NFSU2_TR(0x53d1e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d1eeull));
TAIL_STATIC(0x43dc00u,43d);
}
B53d1ee:L53d1ee:{c.instructions+=3;NFSU2_TR(0x53d1ee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53d1f1:{NFSU2_TR(0x53d1f1);
__builtin_memmove((R+8),(R+24),4);
}
B53d1f3:{NFSU2_TR(0x53d1f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d1f8ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B53d1f8:L53d1f8:{c.instructions+=2;NFSU2_TR(0x53d1f8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53d1fa:{NFSU2_TR(0x53d1fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53d206;}}
}
B53d1fc:L53d1fc:{c.instructions+=2;NFSU2_TR(0x53d1fc);
w4(R+8,u32(0xc01a6f63ull));
}
B53d201:{NFSU2_TR(0x53d201);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d206ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B53d206:L53d206:{c.instructions+=8;NFSU2_TR(0x53d206);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d207:{NFSU2_TR(0x53d207);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d20a:{NFSU2_TR(0x53d20a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d20d:{NFSU2_TR(0x53d20d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B53d213:{NFSU2_TR(0x53d213);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d214:{NFSU2_TR(0x53d214);
u8 U[4];
w4(U+0,u32(0x2345f69eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d219:{NFSU2_TR(0x53d219);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d21a:{NFSU2_TR(0x53d21a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d21full));
TAIL_STATIC(0x537b80u,537);
}
B53d21f:L53d21f:{c.instructions+=4;NFSU2_TR(0x53d21f);
{u32 ea_=u32(r4(R+20)+u32(4294967200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53d222:{NFSU2_TR(0x53d222);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B53d228:{NFSU2_TR(0x53d228);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B53d22b:{NFSU2_TR(0x53d22b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d230ull));
TAIL_STATIC(0x75bed4u,75b);
}
B53d230:L53d230:{c.instructions+=4;NFSU2_TR(0x53d230);
{u32 ea_=u32(r4(R+20)+u32(4294967192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53d233:{NFSU2_TR(0x53d233);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B53d239:{NFSU2_TR(0x53d239);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d23c:{NFSU2_TR(0x53d23c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d241ull));
TAIL_STATIC(0x75bed4u,75b);
}
B53d241:L53d241:{c.instructions+=4;NFSU2_TR(0x53d241);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d244:{NFSU2_TR(0x53d244);
w4(R+24,u32(0x1ull));
}
B53d249:{NFSU2_TR(0x53d249);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B53d24b:{NFSU2_TR(0x53d24b);
{goto L53d250;}
}
B53d250:L53d250:{c.instructions+=5;NFSU2_TR(0x53d250);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d251:{NFSU2_TR(0x53d251);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B53d254:{NFSU2_TR(0x53d254);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d259:{NFSU2_TR(0x53d259);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d25a:{NFSU2_TR(0x53d25a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d25full));
TAIL_STATIC(0x4400d0u,440);
}
B53d25f:L53d25f:{c.instructions+=10;NFSU2_TR(0x53d25f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d262:{NFSU2_TR(0x53d262);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d265:{NFSU2_TR(0x53d265);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53d268:{NFSU2_TR(0x53d268);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d269:{NFSU2_TR(0x53d269);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d26e:{NFSU2_TR(0x53d26e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B53d271:{NFSU2_TR(0x53d271);
u8 U[4];
w4(U+0,u32(0xeec8134full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d276:{NFSU2_TR(0x53d276);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d277:{NFSU2_TR(0x53d277);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d27a:{NFSU2_TR(0x53d27a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d27full));
TAIL_STATIC(0x43db80u,43d);
}
B53d27f:L53d27f:{c.instructions+=5;NFSU2_TR(0x53d27f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53d282:{NFSU2_TR(0x53d282);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d283:{NFSU2_TR(0x53d283);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d286:{NFSU2_TR(0x53d286);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d287:{NFSU2_TR(0x53d287);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d28cull));
TAIL_STATIC(0x537b80u,537);
}
B53d28c:L53d28c:{c.instructions+=10;NFSU2_TR(0x53d28c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d28f:{NFSU2_TR(0x53d28f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53d292:{NFSU2_TR(0x53d292);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B53d295:{NFSU2_TR(0x53d295);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d296:{NFSU2_TR(0x53d296);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d29b:{NFSU2_TR(0x53d29b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B53d29e:{NFSU2_TR(0x53d29e);
u8 U[4];
w4(U+0,u32(0x22b57eb7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d2a3:{NFSU2_TR(0x53d2a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d2a4:{NFSU2_TR(0x53d2a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d2a7:{NFSU2_TR(0x53d2a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d2acull));
TAIL_STATIC(0x43db80u,43d);
}
B53d2ac:L53d2ac:{c.instructions+=5;NFSU2_TR(0x53d2ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d2af:{NFSU2_TR(0x53d2af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53d2b2:{NFSU2_TR(0x53d2b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d2b3:{NFSU2_TR(0x53d2b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d2b4:{NFSU2_TR(0x53d2b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d2b9ull));
TAIL_STATIC(0x537b80u,537);
}
B53d2b9:L53d2b9:{c.instructions+=8;NFSU2_TR(0x53d2b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53d2bc:{NFSU2_TR(0x53d2bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d2bf:{NFSU2_TR(0x53d2bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B53d2c2:{NFSU2_TR(0x53d2c2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B53d2c3:{NFSU2_TR(0x53d2c3);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B53d2c5:{NFSU2_TR(0x53d2c5);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B53d2c7:{NFSU2_TR(0x53d2c7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53d2ca:{NFSU2_TR(0x53d2ca);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53d250u);}goto L53d250;}}
}
B53d2cc:L53d2cc:{c.instructions+=16;NFSU2_TR(0x53d2cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53d2cf:{NFSU2_TR(0x53d2cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d2d2:{NFSU2_TR(0x53d2d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B53d2d5:{NFSU2_TR(0x53d2d5);
__builtin_memmove((R+28),gp(0x83a658),4);
}
B53d2db:{NFSU2_TR(0x53d2db);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B53d2dd:{NFSU2_TR(0x53d2dd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53d2df:{NFSU2_TR(0x53d2df);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1f0ull))));
}
B53d2e5:{NFSU2_TR(0x53d2e5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53d2e7:{NFSU2_TR(0x53d2e7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+0),(U+2),1);
}
B53d2ea:{NFSU2_TR(0x53d2ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d2ed:{NFSU2_TR(0x53d2ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53d2f4:{NFSU2_TR(0x53d2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d2f7:{NFSU2_TR(0x53d2f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B53d2f8:{NFSU2_TR(0x53d2f8);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B53d2fa:{NFSU2_TR(0x53d2fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d2fd:{NFSU2_TR(0x53d2fd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L53d4ef;}}
}
B53d303:L53d303:{c.instructions+=1;NFSU2_TR(0x53d303);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d306:L53d306:{c.instructions+=6;NFSU2_TR(0x53d306);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B53d30a:{NFSU2_TR(0x53d30a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53d30c:{NFSU2_TR(0x53d30c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d30f:{NFSU2_TR(0x53d30f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d312:{NFSU2_TR(0x53d312);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53d315:{NFSU2_TR(0x53d315);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53d340;}}
}
B53d317:L53d317:{c.instructions+=12;NFSU2_TR(0x53d317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53d319:{NFSU2_TR(0x53d319);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d31c:{NFSU2_TR(0x53d31c);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53d31f:{NFSU2_TR(0x53d31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d322:{NFSU2_TR(0x53d322);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B53d325:{NFSU2_TR(0x53d325);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B53d328:{NFSU2_TR(0x53d328);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53d32f:{NFSU2_TR(0x53d32f);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B53d335:{NFSU2_TR(0x53d335);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d338:{NFSU2_TR(0x53d338);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53d33b:{NFSU2_TR(0x53d33b);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53d33e:{NFSU2_TR(0x53d33e);
{goto L53d378;}
}
B53d340:L53d340:{c.instructions+=16;NFSU2_TR(0x53d340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B53d342:{NFSU2_TR(0x53d342);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x6cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B53d345:{NFSU2_TR(0x53d345);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x83a65cull))));
}
B53d34a:{NFSU2_TR(0x53d34a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d34d:{NFSU2_TR(0x53d34d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d350:{NFSU2_TR(0x53d350);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d353:{NFSU2_TR(0x53d353);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53d356:{NFSU2_TR(0x53d356);
{u32 ea_=u32(r4(R+20)+u32(4294967220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53d359:{NFSU2_TR(0x53d359);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d35c:{NFSU2_TR(0x53d35c);
{u32 ea_=u32(r4(R+20)+u32(4294967216u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B53d35f:{NFSU2_TR(0x53d35f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53d366:{NFSU2_TR(0x53d366);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d369:{NFSU2_TR(0x53d369);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B53d36f:{NFSU2_TR(0x53d36f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+24),(U+0),4);
}
B53d372:{NFSU2_TR(0x53d372);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d375:{NFSU2_TR(0x53d375);
{u32 ea_=u32(r4(R+20)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53d378:L53d378:{c.instructions+=4;NFSU2_TR(0x53d378);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53d37b:{NFSU2_TR(0x53d37b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d37e:{NFSU2_TR(0x53d37e);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B53d380:{NFSU2_TR(0x53d380);
w4(R+4,u32(0x5ull));
}
B53d385:L53d385:{c.instructions+=1;NFSU2_TR(0x53d385);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L53d387;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53d385u);}goto L53d385;}
}
B53d387:L53d387:{c.instructions+=22;NFSU2_TR(0x53d387);
__builtin_memmove((R+4),gp(0x838564),4);
}
B53d38d:{NFSU2_TR(0x53d38d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53d390:{NFSU2_TR(0x53d390);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B53d393:{NFSU2_TR(0x53d393);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B53d395:{NFSU2_TR(0x53d395);
__builtin_memmove((R+4),(R+8),4);
}
B53d397:{NFSU2_TR(0x53d397);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B53d399:{NFSU2_TR(0x53d399);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B53d39b:{NFSU2_TR(0x53d39b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d39e:{NFSU2_TR(0x53d39e);
{u32 ea_=u32(u32(7897276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B53d3a4:{NFSU2_TR(0x53d3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d3a7:{NFSU2_TR(0x53d3a7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x83000000ull))));
}
B53d3ad:{NFSU2_TR(0x53d3ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d3b0:{NFSU2_TR(0x53d3b0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xffaa8000ull))));
}
B53d3b6:{NFSU2_TR(0x53d3b6);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53d3b9:{NFSU2_TR(0x53d3b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x461c4000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53d3c0:{NFSU2_TR(0x53d3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d3c3:{NFSU2_TR(0x53d3c3);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53d3c5:{NFSU2_TR(0x53d3c5);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B53d3c8:{NFSU2_TR(0x53d3c8);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B53d3cb:{NFSU2_TR(0x53d3cb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B53d3cd:{NFSU2_TR(0x53d3cd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B53d3d0:{NFSU2_TR(0x53d3d0);
if(r1(R+514)){{goto L53d42b;}}
}
B53d3d2:L53d3d2:{c.instructions+=4;NFSU2_TR(0x53d3d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53d3d5:{NFSU2_TR(0x53d3d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d3d6:{NFSU2_TR(0x53d3d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53d3d9:{NFSU2_TR(0x53d3d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d3deull));
TAIL_STATIC(0x5764d0u,576);
}
B53d3de:L53d3de:{c.instructions+=4;NFSU2_TR(0x53d3de);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B53d3e4:{NFSU2_TR(0x53d3e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d3e7:{NFSU2_TR(0x53d3e7);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53d3ea:{NFSU2_TR(0x53d3ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d3efull));
TAIL_STATIC(0x5ea8a0u,5ea);
}
B53d3ef:L53d3ef:{c.instructions+=3;NFSU2_TR(0x53d3ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53d3f1:{NFSU2_TR(0x53d3f1);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53d3f4:{NFSU2_TR(0x53d3f4);
if(r1(R+518)){{goto L53d3fc;}}
}
B53d3f6:L53d3f6:{c.instructions+=1;NFSU2_TR(0x53d3f6);
{u32 ea_=u32(u32(7978748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B53d3fc:L53d3fc:{c.instructions+=16;NFSU2_TR(0x53d3fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d3ff:{NFSU2_TR(0x53d3ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d402:{NFSU2_TR(0x53d402);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53d406:{NFSU2_TR(0x53d406);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53d409:{NFSU2_TR(0x53d409);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53d40c:{NFSU2_TR(0x53d40c);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B53d40f:{NFSU2_TR(0x53d40f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B53d412:{NFSU2_TR(0x53d412);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53d414:{NFSU2_TR(0x53d414);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d417:{NFSU2_TR(0x53d417);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B53d41a:{NFSU2_TR(0x53d41a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B53d41b:{NFSU2_TR(0x53d41b);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B53d41e:{NFSU2_TR(0x53d41e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d421:{NFSU2_TR(0x53d421);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B53d423:{NFSU2_TR(0x53d423);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B53d426:{NFSU2_TR(0x53d426);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53d3d2u);}goto L53d3d2;}}
}
B53d428:L53d428:{c.instructions+=1;NFSU2_TR(0x53d428);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53d42b:L53d42b:{c.instructions+=21;NFSU2_TR(0x53d42b);
__builtin_memmove((R+0),gp(0x838564),4);
}
B53d430:{NFSU2_TR(0x53d430);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d433:{NFSU2_TR(0x53d433);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d436:{NFSU2_TR(0x53d436);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B53d43a:{NFSU2_TR(0x53d43a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d43d:{NFSU2_TR(0x53d43d);
__builtin_memmove((R+0),(R+8),4);
}
B53d43f:{NFSU2_TR(0x53d43f);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B53d441:{NFSU2_TR(0x53d441);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B53d443:{NFSU2_TR(0x53d443);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x83000000ull))));
}
B53d448:{NFSU2_TR(0x53d448);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d44b:{NFSU2_TR(0x53d44b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d44e:{NFSU2_TR(0x53d44e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xff1a95afull))));
}
B53d453:{NFSU2_TR(0x53d453);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x461c4000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53d45a:{NFSU2_TR(0x53d45a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d45d:{NFSU2_TR(0x53d45d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d460:{NFSU2_TR(0x53d460);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53d462:{NFSU2_TR(0x53d462);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B53d465:{NFSU2_TR(0x53d465);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B53d468:{NFSU2_TR(0x53d468);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B53d46a:{NFSU2_TR(0x53d46a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B53d46d:{NFSU2_TR(0x53d46d);
if(r1(R+514)){{goto L53d4d7;}}
}
B53d46f:L53d46f:{c.instructions+=1;NFSU2_TR(0x53d46f);
}
B53d470:L53d470:{c.instructions+=4;NFSU2_TR(0x53d470);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d473:{NFSU2_TR(0x53d473);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d474:{NFSU2_TR(0x53d474);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53d477:{NFSU2_TR(0x53d477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d47cull));
TAIL_STATIC(0x5764d0u,576);
}
B53d47c:L53d47c:{c.instructions+=6;NFSU2_TR(0x53d47c);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B53d482:{NFSU2_TR(0x53d482);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d485:{NFSU2_TR(0x53d485);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B53d488:{NFSU2_TR(0x53d488);
{u32 ea_=u32(u32(7978744u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B53d48e:{NFSU2_TR(0x53d48e);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53d491:{NFSU2_TR(0x53d491);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d496ull));
TAIL_STATIC(0x5ea8a0u,5ea);
}
B53d496:L53d496:{c.instructions+=2;NFSU2_TR(0x53d496);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53d498:{NFSU2_TR(0x53d498);
if(r1(R+518)){{goto L53d4a5;}}
}
B53d49a:L53d49a:{c.instructions+=3;NFSU2_TR(0x53d49a);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53d49d:{NFSU2_TR(0x53d49d);
{u32 ea_=u32(u32(7978736u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B53d4a3:{NFSU2_TR(0x53d4a3);
{goto L53d4a8;}
}
B53d4a5:L53d4a5:{c.instructions+=1;NFSU2_TR(0x53d4a5);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53d4a8:L53d4a8:{c.instructions+=16;NFSU2_TR(0x53d4a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53d4ab:{NFSU2_TR(0x53d4ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d4ae:{NFSU2_TR(0x53d4ae);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53d4b2:{NFSU2_TR(0x53d4b2);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53d4b5:{NFSU2_TR(0x53d4b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d4b8:{NFSU2_TR(0x53d4b8);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B53d4bb:{NFSU2_TR(0x53d4bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B53d4be:{NFSU2_TR(0x53d4be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B53d4c0:{NFSU2_TR(0x53d4c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d4c3:{NFSU2_TR(0x53d4c3);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B53d4c6:{NFSU2_TR(0x53d4c6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B53d4c7:{NFSU2_TR(0x53d4c7);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B53d4ca:{NFSU2_TR(0x53d4ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d4cd:{NFSU2_TR(0x53d4cd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B53d4cf:{NFSU2_TR(0x53d4cf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B53d4d2:{NFSU2_TR(0x53d4d2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53d470u);}goto L53d470;}}
}
B53d4d4:L53d4d4:{c.instructions+=1;NFSU2_TR(0x53d4d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53d4d7:L53d4d7:{c.instructions+=8;NFSU2_TR(0x53d4d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d4da:{NFSU2_TR(0x53d4da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d4dd:{NFSU2_TR(0x53d4dd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B53d4de:{NFSU2_TR(0x53d4de);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
}
B53d4e1:{NFSU2_TR(0x53d4e1);
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
B53d4e3:{NFSU2_TR(0x53d4e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d4e6:{NFSU2_TR(0x53d4e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d4e9:{NFSU2_TR(0x53d4e9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53d306u);}goto L53d306;}}
}
B53d4ef:L53d4ef:{c.instructions+=8;NFSU2_TR(0x53d4ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d4f2:{NFSU2_TR(0x53d4f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53d4f3:{NFSU2_TR(0x53d4f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53d4f4:{NFSU2_TR(0x53d4f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53d4f5:{NFSU2_TR(0x53d4f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d4fc:{NFSU2_TR(0x53d4fc);
__builtin_memmove((R+16),(R+20),4);
}
B53d4fe:{NFSU2_TR(0x53d4fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53d4ff:{NFSU2_TR(0x53d4ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53d510:L53d510:{c.instructions+=5;NFSU2_TR(0x53d510);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d514:{NFSU2_TR(0x53d514);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53d519:{NFSU2_TR(0x53d519);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d51a:{NFSU2_TR(0x53d51a);
__builtin_memmove((R+24),(R+4),4);
}
B53d51c:{NFSU2_TR(0x53d51c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L53d5f1;}}
}
B53d522:L53d522:{c.instructions+=1;NFSU2_TR(0x53d522);
if(r1(R+518)){{goto L53d59d;}}
}
B53d524:L53d524:{c.instructions+=2;NFSU2_TR(0x53d524);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53d529:{NFSU2_TR(0x53d529);
if(r1(R+518)){{goto L53d536;}}
}
B53d52b:L53d52b:{c.instructions+=2;NFSU2_TR(0x53d52b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53d530:{NFSU2_TR(0x53d530);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53d62c;}}
}
B53d536:L53d536:{c.instructions+=6;NFSU2_TR(0x53d536);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d53b:{NFSU2_TR(0x53d53b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d53e:{NFSU2_TR(0x53d53e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d541:{NFSU2_TR(0x53d541);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d546:{NFSU2_TR(0x53d546);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d547:{NFSU2_TR(0x53d547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d54cull));
TAIL_STATIC(0x537d40u,537);
}
B53d54c:L53d54c:{c.instructions+=3;NFSU2_TR(0x53d54c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53d54f:{NFSU2_TR(0x53d54f);
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
B53d551:{NFSU2_TR(0x53d551);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53d62c;}}
}
B53d557:L53d557:{c.instructions+=6;NFSU2_TR(0x53d557);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d55a:{NFSU2_TR(0x53d55a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d55c:{NFSU2_TR(0x53d55c);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d561:{NFSU2_TR(0x53d561);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d566:{NFSU2_TR(0x53d566);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d567:{NFSU2_TR(0x53d567);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d56cull));
TAIL_STATIC(0x537c60u,537);
}
B53d56c:L53d56c:{c.instructions+=2;NFSU2_TR(0x53d56c);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d571:{NFSU2_TR(0x53d571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d576ull));
TAIL_STATIC(0x52cf60u,52c);
}
B53d576:L53d576:{c.instructions+=3;NFSU2_TR(0x53d576);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B53d579:{NFSU2_TR(0x53d579);
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
B53d57b:{NFSU2_TR(0x53d57b);
if(r1(R+518)){{goto L53d62c;}}
}
B53d581:L53d581:{c.instructions+=3;NFSU2_TR(0x53d581);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53d587:{NFSU2_TR(0x53d587);
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
B53d589:{NFSU2_TR(0x53d589);
if(r1(R+518)){{goto L53d62c;}}
}
B53d58f:L53d58f:{c.instructions+=2;NFSU2_TR(0x53d58f);
u8 U[4];
w4(U+0,u32(0x790000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d594:{NFSU2_TR(0x53d594);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d599ull));
TAIL_STATIC(0x5376f0u,537);
}
B53d599:L53d599:{c.instructions+=2;NFSU2_TR(0x53d599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53d59a:{NFSU2_TR(0x53d59a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53d59d:L53d59d:{c.instructions+=3;NFSU2_TR(0x53d59d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53d5a0:{NFSU2_TR(0x53d5a0);
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
B53d5a2:{NFSU2_TR(0x53d5a2);
if(r1(R+518)){{goto L53d62c;}}
}
B53d5a8:L53d5a8:{c.instructions+=3;NFSU2_TR(0x53d5a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d5ab:{NFSU2_TR(0x53d5ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53d5b0:{NFSU2_TR(0x53d5b0);
if(r1(R+518)){{goto L53d5d2;}}
}
B53d5b2:L53d5b2:{c.instructions+=2;NFSU2_TR(0x53d5b2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53d5b7:{NFSU2_TR(0x53d5b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53d62c;}}
}
B53d5b9:L53d5b9:{c.instructions+=6;NFSU2_TR(0x53d5b9);
__builtin_memmove((R+4),gp(0x7fa230),4);
}
B53d5bf:{NFSU2_TR(0x53d5bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53d5c2:{NFSU2_TR(0x53d5c2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d5c4:{NFSU2_TR(0x53d5c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d5c5:{NFSU2_TR(0x53d5c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d5c6:{NFSU2_TR(0x53d5c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d5cbull));
TAIL_STATIC(0x537980u,537);
}
B53d5cb:L53d5cb:{c.instructions+=3;NFSU2_TR(0x53d5cb);
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
B53d5ce:{NFSU2_TR(0x53d5ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53d5cf:{NFSU2_TR(0x53d5cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53d5d2:L53d5d2:{c.instructions+=3;NFSU2_TR(0x53d5d2);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53d5d8:{NFSU2_TR(0x53d5d8);
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
B53d5da:{NFSU2_TR(0x53d5da);
if(r1(R+518)){{goto L53d62c;}}
}
B53d5dc:L53d5dc:{c.instructions+=6;NFSU2_TR(0x53d5dc);
__builtin_memmove((R+0),gp(0x7fa21c),4);
}
B53d5e1:{NFSU2_TR(0x53d5e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53d5e4:{NFSU2_TR(0x53d5e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d5e6:{NFSU2_TR(0x53d5e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d5e7:{NFSU2_TR(0x53d5e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d5e8:{NFSU2_TR(0x53d5e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d5edull));
TAIL_STATIC(0x5377a0u,537);
}
B53d5ed:L53d5ed:{c.instructions+=2;NFSU2_TR(0x53d5ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53d5ee:{NFSU2_TR(0x53d5ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53d5f1:L53d5f1:{c.instructions+=2;NFSU2_TR(0x53d5f1);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xe1fde1d1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53d5f6:{NFSU2_TR(0x53d5f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53d62c;}}
}
B53d5f8:L53d5f8:{c.instructions+=3;NFSU2_TR(0x53d5f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d5fb:{NFSU2_TR(0x53d5fb);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x406415e3ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53d600:{NFSU2_TR(0x53d600);
if(r1(R+518)){{goto L53d628;}}
}
B53d602:L53d602:{c.instructions+=2;NFSU2_TR(0x53d602);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53d607:{NFSU2_TR(0x53d607);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53d62c;}}
}
B53d609:L53d609:{c.instructions+=3;NFSU2_TR(0x53d609);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53d60f:{NFSU2_TR(0x53d60f);
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
B53d611:{NFSU2_TR(0x53d611);
if(r1(R+518)){{goto L53d62c;}}
}
B53d613:L53d613:{c.instructions+=6;NFSU2_TR(0x53d613);
__builtin_memmove((R+0),gp(0x7fa230),4);
}
B53d618:{NFSU2_TR(0x53d618);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53d61b:{NFSU2_TR(0x53d61b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d61d:{NFSU2_TR(0x53d61d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d61e:{NFSU2_TR(0x53d61e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d61f:{NFSU2_TR(0x53d61f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d624ull));
TAIL_STATIC(0x5377a0u,537);
}
B53d624:L53d624:{c.instructions+=2;NFSU2_TR(0x53d624);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53d625:{NFSU2_TR(0x53d625);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53d628:L53d628:{c.instructions+=1;NFSU2_TR(0x53d628);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53d62c:L53d62c:{c.instructions+=2;NFSU2_TR(0x53d62c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53d62d:{NFSU2_TR(0x53d62d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53d630:L53d630:{c.instructions+=3;NFSU2_TR(0x53d630);
s4(0x838568,u32(0x1ull));
}
B53d63a:{NFSU2_TR(0x53d63a);
w4(R+0,u32(0x8382a0ull));
}
B53d63f:{NFSU2_TR(0x53d63f);
}
B53d640:L53d640:{c.instructions+=4;NFSU2_TR(0x53d640);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B53d643:{NFSU2_TR(0x53d643);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B53d646:{NFSU2_TR(0x53d646);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8383a0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8383a0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B53d64b:{NFSU2_TR(0x53d64b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53d640u);}goto L53d640;}}
}
B53d64d:L53d64d:{c.instructions+=9;NFSU2_TR(0x53d64d);
__builtin_memmove((R+0),gp(0x838428),4);
}
B53d652:{NFSU2_TR(0x53d652);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d653:{NFSU2_TR(0x53d653);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53d657:{NFSU2_TR(0x53d657);
s4(0x83856c,u32(0x0ull));
}
B53d661:{NFSU2_TR(0x53d661);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B53d665:{NFSU2_TR(0x53d665);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B53d667:{NFSU2_TR(0x53d667);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53d669:{NFSU2_TR(0x53d669);
w4(R+4,u32(0x8382a0ull));
}
B53d66e:{NFSU2_TR(0x53d66e);
__builtin_memmove((R+28),(R+28),4);
}
B53d670:L53d670:{c.instructions+=2;NFSU2_TR(0x53d670);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B53d673:{NFSU2_TR(0x53d673);
if(r1(R+518)){{goto L53d683;}}
}
B53d675:L53d675:{c.instructions+=4;NFSU2_TR(0x53d675);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B53d678:{NFSU2_TR(0x53d678);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B53d679:{NFSU2_TR(0x53d679);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8383a0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8383a0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53d67f:{NFSU2_TR(0x53d67f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53d670u);}goto L53d670;}}
}
B53d681:L53d681:{c.instructions+=1;NFSU2_TR(0x53d681);
{goto L53d697;}
}
B53d683:L53d683:{c.instructions+=6;NFSU2_TR(0x53d683);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d685:{NFSU2_TR(0x53d685);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B53d688:{NFSU2_TR(0x53d688);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d689:{NFSU2_TR(0x53d689);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8382a0ull))));
}
B53d68e:{NFSU2_TR(0x53d68e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d68f:{NFSU2_TR(0x53d68f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d694ull));
TAIL_STATIC(0x43dc00u,43d);
}
B53d694:L53d694:{c.instructions+=1;NFSU2_TR(0x53d694);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53d697:L53d697:{c.instructions+=5;NFSU2_TR(0x53d697);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B53d69b:{NFSU2_TR(0x53d69b);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x838428))));
}
B53d6a1:{NFSU2_TR(0x53d6a1);
u8 U[4];
w4(U+0,u32(0x79bf24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d6a6:{NFSU2_TR(0x53d6a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d6a7:{NFSU2_TR(0x53d6a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d6acull));
TAIL_STATIC(0x43dcc0u,43d);
}
B53d6ac:L53d6ac:{c.instructions+=4;NFSU2_TR(0x53d6ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53d6af:{NFSU2_TR(0x53d6af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53d6b1:{NFSU2_TR(0x53d6b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53d6b2:{NFSU2_TR(0x53d6b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53d6eb;}}
}
B53d6b4:L53d6b4:{c.instructions+=3;NFSU2_TR(0x53d6b4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B53d6b6:{NFSU2_TR(0x53d6b6);
w4(R+0,u32(0x8382a0ull));
}
B53d6bb:{NFSU2_TR(0x53d6bb);
{goto L53d6c0;}
}
B53d6c0:L53d6c0:{c.instructions+=2;NFSU2_TR(0x53d6c0);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B53d6c3:{NFSU2_TR(0x53d6c3);
if(r1(R+518)){{goto L53d6d2;}}
}
B53d6c5:L53d6c5:{c.instructions+=4;NFSU2_TR(0x53d6c5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B53d6c8:{NFSU2_TR(0x53d6c8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B53d6c9:{NFSU2_TR(0x53d6c9);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8383a0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8383a0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B53d6ce:{NFSU2_TR(0x53d6ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53d6c0u);}goto L53d6c0;}}
}
B53d6d0:L53d6d0:{c.instructions+=1;NFSU2_TR(0x53d6d0);
{goto L53d6eb;}
}
B53d6d2:L53d6d2:{c.instructions+=6;NFSU2_TR(0x53d6d2);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d6d4:{NFSU2_TR(0x53d6d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B53d6d7:{NFSU2_TR(0x53d6d7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8382a0ull))));
}
B53d6dd:{NFSU2_TR(0x53d6dd);
u8 U[4];
w4(U+0,u32(0x79bf18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d6e2:{NFSU2_TR(0x53d6e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d6e3:{NFSU2_TR(0x53d6e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d6e8ull));
TAIL_STATIC(0x43dc00u,43d);
}
B53d6e8:L53d6e8:{c.instructions+=1;NFSU2_TR(0x53d6e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53d6eb:L53d6eb:{c.instructions+=3;NFSU2_TR(0x53d6eb);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53d6f1:{NFSU2_TR(0x53d6f1);
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
B53d6f3:{NFSU2_TR(0x53d6f3);
if(r1(R+518)){{goto L53d706;}}
}
B53d6f5:L53d6f5:{c.instructions+=5;NFSU2_TR(0x53d6f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53d6f9:{NFSU2_TR(0x53d6f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d6fb:{NFSU2_TR(0x53d6fb);
u8 U[4];
w4(U+0,u32(0x799ef0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d700:{NFSU2_TR(0x53d700);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d701:{NFSU2_TR(0x53d701);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d706ull));
TAIL_STATIC(0x5377a0u,537);
}
B53d706:L53d706:{c.instructions+=1;NFSU2_TR(0x53d706);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53d710:L53d710:{c.instructions+=3;NFSU2_TR(0x53d710);
s4(0x838568,u32(0x6ull));
}
B53d71a:{NFSU2_TR(0x53d71a);
w4(R+0,u32(0x8382a0ull));
}
B53d71f:{NFSU2_TR(0x53d71f);
}
B53d720:L53d720:{c.instructions+=4;NFSU2_TR(0x53d720);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B53d723:{NFSU2_TR(0x53d723);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B53d726:{NFSU2_TR(0x53d726);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8383a0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8383a0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B53d72b:{NFSU2_TR(0x53d72b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53d720u);}goto L53d720;}}
}
B53d72d:L53d72d:{c.instructions+=4;NFSU2_TR(0x53d72d);
s4(0x83856c,u32(0x0ull));
}
B53d737:{NFSU2_TR(0x53d737);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B53d739:{NFSU2_TR(0x53d739);
w4(R+0,u32(0x8382a0ull));
}
B53d73e:{NFSU2_TR(0x53d73e);
__builtin_memmove((R+28),(R+28),4);
}
B53d740:L53d740:{c.instructions+=2;NFSU2_TR(0x53d740);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B53d743:{NFSU2_TR(0x53d743);
if(r1(R+518)){{goto L53d752;}}
}
B53d745:L53d745:{c.instructions+=4;NFSU2_TR(0x53d745);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B53d748:{NFSU2_TR(0x53d748);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B53d749:{NFSU2_TR(0x53d749);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8383a0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8383a0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B53d74e:{NFSU2_TR(0x53d74e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53d740u);}goto L53d740;}}
}
B53d750:L53d750:{c.instructions+=1;NFSU2_TR(0x53d750);
{goto L53d76b;}
}
B53d752:L53d752:{c.instructions+=6;NFSU2_TR(0x53d752);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d754:{NFSU2_TR(0x53d754);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B53d757:{NFSU2_TR(0x53d757);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8382a0ull))));
}
B53d75d:{NFSU2_TR(0x53d75d);
u8 U[4];
w4(U+0,u32(0x79bf2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d762:{NFSU2_TR(0x53d762);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d763:{NFSU2_TR(0x53d763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d768ull));
TAIL_STATIC(0x43dc00u,43d);
}
B53d768:L53d768:{c.instructions+=1;NFSU2_TR(0x53d768);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53d76b:L53d76b:{c.instructions+=1;NFSU2_TR(0x53d76b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d770ull));
TAIL_STATIC(0x4a78e0u,4a7);
}
B53d770:L53d770:{c.instructions+=1;NFSU2_TR(0x53d770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d775ull));
TAIL_STATIC(0x4c57c0u,4c5);
}
B53d775:L53d775:{c.instructions+=3;NFSU2_TR(0x53d775);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53d77b:{NFSU2_TR(0x53d77b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53d77d:{NFSU2_TR(0x53d77d);
if(r1(R+518)){{goto L53d796;}}
}
B53d77f:L53d77f:{c.instructions+=5;NFSU2_TR(0x53d77f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d783:{NFSU2_TR(0x53d783);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d785:{NFSU2_TR(0x53d785);
u8 U[4];
w4(U+0,u32(0x799ef0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d78a:{NFSU2_TR(0x53d78a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d78b:{NFSU2_TR(0x53d78b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d790ull));
TAIL_STATIC(0x5377a0u,537);
}
B53d790:L53d790:{c.instructions+=1;NFSU2_TR(0x53d790);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53d796:L53d796:{c.instructions+=1;NFSU2_TR(0x53d796);
TAIL_STATIC(0x52cdd0u,52c);
}
B53d7a0:L53d7a0:{c.instructions+=1;NFSU2_TR(0x53d7a0);
w4(R+0,u32(0x8382a0ull));
}
B53d7a5:L53d7a5:{c.instructions+=4;NFSU2_TR(0x53d7a5);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B53d7a8:{NFSU2_TR(0x53d7a8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B53d7ab:{NFSU2_TR(0x53d7ab);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8383a0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8383a0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B53d7b0:{NFSU2_TR(0x53d7b0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53d7a5u);}goto L53d7a5;}}
}
B53d7b2:L53d7b2:{c.instructions+=3;NFSU2_TR(0x53d7b2);
s4(0x83856c,u32(0x0ull));
}
B53d7bc:{NFSU2_TR(0x53d7bc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B53d7be:{NFSU2_TR(0x53d7be);
w4(R+0,u32(0x8382a0ull));
}
B53d7c3:L53d7c3:{c.instructions+=2;NFSU2_TR(0x53d7c3);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B53d7c6:{NFSU2_TR(0x53d7c6);
if(r1(R+518)){{goto L53d7d5;}}
}
B53d7c8:L53d7c8:{c.instructions+=4;NFSU2_TR(0x53d7c8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B53d7cb:{NFSU2_TR(0x53d7cb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B53d7cc:{NFSU2_TR(0x53d7cc);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8383a0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8383a0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B53d7d1:{NFSU2_TR(0x53d7d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53d7c3u);}goto L53d7c3;}}
}
B53d7d3:L53d7d3:{c.instructions+=1;NFSU2_TR(0x53d7d3);
{goto L53d7ee;}
}
B53d7d5:L53d7d5:{c.instructions+=7;NFSU2_TR(0x53d7d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d7d9:{NFSU2_TR(0x53d7d9);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d7db:{NFSU2_TR(0x53d7db);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B53d7de:{NFSU2_TR(0x53d7de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d7df:{NFSU2_TR(0x53d7df);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8382a0ull))));
}
B53d7e5:{NFSU2_TR(0x53d7e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d7e6:{NFSU2_TR(0x53d7e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d7ebull));
TAIL_STATIC(0x43dc00u,43d);
}
B53d7eb:L53d7eb:{c.instructions+=1;NFSU2_TR(0x53d7eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53d7ee:L53d7ee:{c.instructions+=4;NFSU2_TR(0x53d7ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d7f2:{NFSU2_TR(0x53d7f2);
u8 U[4];
w4(U+0,u32(0x79b010ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d7f7:{NFSU2_TR(0x53d7f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d7f8:{NFSU2_TR(0x53d7f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d7fdull));
TAIL_STATIC(0x43dcc0u,43d);
}
B53d7fd:L53d7fd:{c.instructions+=3;NFSU2_TR(0x53d7fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B53d800:{NFSU2_TR(0x53d800);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53d802:{NFSU2_TR(0x53d802);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53d83b;}}
}
B53d804:L53d804:{c.instructions+=3;NFSU2_TR(0x53d804);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B53d806:{NFSU2_TR(0x53d806);
w4(R+0,u32(0x8382a0ull));
}
B53d80b:{NFSU2_TR(0x53d80b);
{goto L53d810;}
}
B53d810:L53d810:{c.instructions+=2;NFSU2_TR(0x53d810);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B53d813:{NFSU2_TR(0x53d813);
if(r1(R+518)){{goto L53d822;}}
}
B53d815:L53d815:{c.instructions+=4;NFSU2_TR(0x53d815);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B53d818:{NFSU2_TR(0x53d818);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B53d819:{NFSU2_TR(0x53d819);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8383a0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8383a0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B53d81e:{NFSU2_TR(0x53d81e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53d810u);}goto L53d810;}}
}
B53d820:L53d820:{c.instructions+=1;NFSU2_TR(0x53d820);
{goto L53d83b;}
}
B53d822:L53d822:{c.instructions+=6;NFSU2_TR(0x53d822);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d824:{NFSU2_TR(0x53d824);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B53d827:{NFSU2_TR(0x53d827);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8382a0ull))));
}
B53d82d:{NFSU2_TR(0x53d82d);
u8 U[4];
w4(U+0,u32(0x79b1f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d832:{NFSU2_TR(0x53d832);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d833:{NFSU2_TR(0x53d833);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d838ull));
TAIL_STATIC(0x43dc00u,43d);
}
B53d838:L53d838:{c.instructions+=1;NFSU2_TR(0x53d838);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53d83b:L53d83b:{c.instructions+=3;NFSU2_TR(0x53d83b);
w4(R+4,u32(0x827e88ull));
}
B53d840:{NFSU2_TR(0x53d840);
s4(0x838568,u32(0x4ull));
}
B53d84a:{NFSU2_TR(0x53d84a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d84full));
TAIL_STATIC(0x43b640u,43b);
}
B53d84f:L53d84f:{c.instructions+=3;NFSU2_TR(0x53d84f);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53d855:{NFSU2_TR(0x53d855);
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
B53d857:{NFSU2_TR(0x53d857);
if(r1(R+518)){{goto L53d86a;}}
}
B53d859:L53d859:{c.instructions+=5;NFSU2_TR(0x53d859);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53d85d:{NFSU2_TR(0x53d85d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d85f:{NFSU2_TR(0x53d85f);
u8 U[4];
w4(U+0,u32(0x799ef0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d864:{NFSU2_TR(0x53d864);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d865:{NFSU2_TR(0x53d865);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d86aull));
TAIL_STATIC(0x5377a0u,537);
}
B53d86a:L53d86a:{c.instructions+=1;NFSU2_TR(0x53d86a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53d870:L53d870:{c.instructions+=8;NFSU2_TR(0x53d870);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d871:{NFSU2_TR(0x53d871);
__builtin_memmove((R+24),(R+4),4);
}
B53d873:{NFSU2_TR(0x53d873);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d877:{NFSU2_TR(0x53d877);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d87d:{NFSU2_TR(0x53d87d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53d87f:{NFSU2_TR(0x53d87f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d880:{NFSU2_TR(0x53d880);
__builtin_memmove((R+4),(R+24),4);
}
B53d882:{NFSU2_TR(0x53d882);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d885ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53d885:L53d885:{c.instructions+=5;NFSU2_TR(0x53d885);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d889:{NFSU2_TR(0x53d889);
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
B53d88b:{NFSU2_TR(0x53d88b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53d891:{NFSU2_TR(0x53d891);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53d895:{NFSU2_TR(0x53d895);
if(r1(R+518)){{goto L53d8b5;}}
}
B53d897:L53d897:{c.instructions+=3;NFSU2_TR(0x53d897);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d898:{NFSU2_TR(0x53d898);
__builtin_memmove((R+4),(R+24),4);
}
B53d89a:{NFSU2_TR(0x53d89a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d89full));
TAIL_STATIC(0x5234c0u,523);
}
B53d89f:L53d89f:{c.instructions+=6;NFSU2_TR(0x53d89f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53d8a5:{NFSU2_TR(0x53d8a5);
{u32 ea_=u32(r4(R+0)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53d8a8:{NFSU2_TR(0x53d8a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d8ae:{NFSU2_TR(0x53d8ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B53d8b0:{NFSU2_TR(0x53d8b0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d8b2:{NFSU2_TR(0x53d8b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d8b5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53d8b5:L53d8b5:{c.instructions+=2;NFSU2_TR(0x53d8b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53d8b6:{NFSU2_TR(0x53d8b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53d8c0:L53d8c0:{c.instructions+=2;NFSU2_TR(0x53d8c0);
u8 U[4];
w4(U+0,u32(0x799f48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d8c5:{NFSU2_TR(0x53d8c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d8caull));
TAIL_STATIC(0x52cf60u,52c);
}
B53d8ca:L53d8ca:{c.instructions+=3;NFSU2_TR(0x53d8ca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53d8cd:{NFSU2_TR(0x53d8cd);
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
B53d8cf:{NFSU2_TR(0x53d8cf);
if(r1(R+518)){{goto L53d8e5;}}
}
B53d8d1:L53d8d1:{c.instructions+=3;NFSU2_TR(0x53d8d1);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53d8d7:{NFSU2_TR(0x53d8d7);
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
B53d8d9:{NFSU2_TR(0x53d8d9);
if(r1(R+518)){{goto L53d8e5;}}
}
B53d8db:L53d8db:{c.instructions+=2;NFSU2_TR(0x53d8db);
u8 U[4];
w4(U+0,u32(0x799f48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d8e0:{NFSU2_TR(0x53d8e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d8e5ull));
TAIL_STATIC(0x5376f0u,537);
}
B53d8e5:L53d8e5:{c.instructions+=1;NFSU2_TR(0x53d8e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53d8f0:L53d8f0:{c.instructions+=9;NFSU2_TR(0x53d8f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B53d8f3:{NFSU2_TR(0x53d8f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d8f4:{NFSU2_TR(0x53d8f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d8f5:{NFSU2_TR(0x53d8f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53d8f9:{NFSU2_TR(0x53d8f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d8fa:{NFSU2_TR(0x53d8fa);
__builtin_memmove((R+12),(R+4),4);
}
B53d8fc:{NFSU2_TR(0x53d8fc);
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
B53d8fe:{NFSU2_TR(0x53d8fe);
w4(R+4,u32(0xcull));
}
B53d903:{NFSU2_TR(0x53d903);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B53d907:L53d907:{c.instructions+=1;NFSU2_TR(0x53d907);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L53d909;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53d907u);}goto L53d907;}
}
B53d909:L53d909:{c.instructions+=15;NFSU2_TR(0x53d909);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53d90c:{NFSU2_TR(0x53d90c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d90e:{NFSU2_TR(0x53d90e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53d912:{NFSU2_TR(0x53d912);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d916:{NFSU2_TR(0x53d916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53d918:{NFSU2_TR(0x53d918);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d919:{NFSU2_TR(0x53d919);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x79ac98ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53d921:{NFSU2_TR(0x53d921);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x79ac90ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53d929:{NFSU2_TR(0x53d929);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x79ac88ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53d931:{NFSU2_TR(0x53d931);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x79ac7cull));
s4(u32(r4(U+0)),r4(U+4));
}
B53d939:{NFSU2_TR(0x53d939);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x79ac70ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53d941:{NFSU2_TR(0x53d941);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53d949:{NFSU2_TR(0x53d949);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d94d:{NFSU2_TR(0x53d94d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x42300000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53d955:{NFSU2_TR(0x53d955);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d958ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53d958:L53d958:{c.instructions+=3;NFSU2_TR(0x53d958);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B53d95a:{NFSU2_TR(0x53d95a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53d95c:{NFSU2_TR(0x53d95c);
if(r1(R+518)){{goto L53d97b;}}
}
B53d95e:L53d95e:{c.instructions+=2;NFSU2_TR(0x53d95e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d95f:{NFSU2_TR(0x53d95f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d964ull));
TAIL_STATIC(0x52cef0u,52c);
}
B53d964:L53d964:{c.instructions+=3;NFSU2_TR(0x53d964);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53d967:{NFSU2_TR(0x53d967);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53d969:{NFSU2_TR(0x53d969);
if(r1(R+518)){{goto L53d97b;}}
}
B53d96b:L53d96b:{c.instructions+=3;NFSU2_TR(0x53d96b);
u8 U[4];
w4(U+0,u32(0x171d00cbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d970:{NFSU2_TR(0x53d970);
__builtin_memmove((R+4),(R+0),4);
}
B53d972:{NFSU2_TR(0x53d972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d977ull));
TAIL_STATIC(0x517f80u,517);
}
B53d977:L53d977:{c.instructions+=2;NFSU2_TR(0x53d977);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53d979:{NFSU2_TR(0x53d979);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53d996;}}
}
B53d97b:L53d97b:{c.instructions+=3;NFSU2_TR(0x53d97b);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B53d980:{NFSU2_TR(0x53d980);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53d982:{NFSU2_TR(0x53d982);
if(r1(R+518)){{goto L53d99c;}}
}
B53d984:L53d984:{c.instructions+=4;NFSU2_TR(0x53d984);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d987:{NFSU2_TR(0x53d987);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d988:{NFSU2_TR(0x53d988);
u8 U[4];
w4(U+0,u32(0x171d00cbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d98d:{NFSU2_TR(0x53d98d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d992ull));
TAIL_STATIC(0x52c570u,52c);
}
B53d992:L53d992:{c.instructions+=2;NFSU2_TR(0x53d992);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53d994:{NFSU2_TR(0x53d994);
if(r1(R+518)){{goto L53d99c;}}
}
B53d996:L53d996:{c.instructions+=2;NFSU2_TR(0x53d996);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53d99a:{NFSU2_TR(0x53d99a);
if(r1(R+518)){{goto L53d99e;}}
}
B53d99c:L53d99c:{c.instructions+=1;NFSU2_TR(0x53d99c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53d99e:L53d99e:{c.instructions+=3;NFSU2_TR(0x53d99e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53d9a0:{NFSU2_TR(0x53d9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d9a6:{NFSU2_TR(0x53d9a6);
if(r1(R+518)){{goto L53d9c5;}}
}
B53d9a8:L53d9a8:{c.instructions+=2;NFSU2_TR(0x53d9a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d9a9:{NFSU2_TR(0x53d9a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d9aeull));
TAIL_STATIC(0x52cef0u,52c);
}
B53d9ae:L53d9ae:{c.instructions+=3;NFSU2_TR(0x53d9ae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53d9b1:{NFSU2_TR(0x53d9b1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53d9b3:{NFSU2_TR(0x53d9b3);
if(r1(R+518)){{goto L53d9c5;}}
}
B53d9b5:L53d9b5:{c.instructions+=3;NFSU2_TR(0x53d9b5);
u8 U[4];
w4(U+0,u32(0x6ec2f0deull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d9ba:{NFSU2_TR(0x53d9ba);
__builtin_memmove((R+4),(R+0),4);
}
B53d9bc:{NFSU2_TR(0x53d9bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d9c1ull));
TAIL_STATIC(0x517f80u,517);
}
B53d9c1:L53d9c1:{c.instructions+=2;NFSU2_TR(0x53d9c1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53d9c3:{NFSU2_TR(0x53d9c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53d9e0;}}
}
B53d9c5:L53d9c5:{c.instructions+=3;NFSU2_TR(0x53d9c5);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B53d9ca:{NFSU2_TR(0x53d9ca);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53d9cc:{NFSU2_TR(0x53d9cc);
if(r1(R+518)){{goto L53d9e6;}}
}
B53d9ce:L53d9ce:{c.instructions+=4;NFSU2_TR(0x53d9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53d9d1:{NFSU2_TR(0x53d9d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d9d2:{NFSU2_TR(0x53d9d2);
u8 U[4];
w4(U+0,u32(0x6ec2f0deull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d9d7:{NFSU2_TR(0x53d9d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53d9dcull));
TAIL_STATIC(0x52c570u,52c);
}
B53d9dc:L53d9dc:{c.instructions+=2;NFSU2_TR(0x53d9dc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53d9de:{NFSU2_TR(0x53d9de);
if(r1(R+518)){{goto L53d9e6;}}
}
B53d9e0:L53d9e0:{c.instructions+=2;NFSU2_TR(0x53d9e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53d9e4:{NFSU2_TR(0x53d9e4);
if(r1(R+518)){{goto L53d9e8;}}
}
B53d9e6:L53d9e6:{c.instructions+=1;NFSU2_TR(0x53d9e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53d9e8:L53d9e8:{c.instructions+=5;NFSU2_TR(0x53d9e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53d9e9:{NFSU2_TR(0x53d9e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d9ef:{NFSU2_TR(0x53d9ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d9f5:{NFSU2_TR(0x53d9f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53d9fb:{NFSU2_TR(0x53d9fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53da00ull));
TAIL_STATIC(0x50ca50u,50c);
}
B53da00:L53da00:{c.instructions+=6;NFSU2_TR(0x53da00);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53da03:{NFSU2_TR(0x53da03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53da04:{NFSU2_TR(0x53da04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53da05:{NFSU2_TR(0x53da05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53da06:{NFSU2_TR(0x53da06);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53da09:{NFSU2_TR(0x53da09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53da10:L53da10:{c.instructions+=5;NFSU2_TR(0x53da10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53da11:{NFSU2_TR(0x53da11);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53da15:{NFSU2_TR(0x53da15);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53da16:{NFSU2_TR(0x53da16);
__builtin_memmove((R+24),(R+4),4);
}
B53da18:{NFSU2_TR(0x53da18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53da1dull));
TAIL_STATIC(0x75bed4u,75b);
}
B53da1d:L53da1d:{c.instructions+=7;NFSU2_TR(0x53da1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53da21:{NFSU2_TR(0x53da21);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B53da25:{NFSU2_TR(0x53da25);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B53da29:{NFSU2_TR(0x53da29);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B53da2d:{NFSU2_TR(0x53da2d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B53da2f:{NFSU2_TR(0x53da2f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53da32:{NFSU2_TR(0x53da32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53da42;}}
}
B53da34:L53da34:{c.instructions+=3;NFSU2_TR(0x53da34);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53da38:{NFSU2_TR(0x53da38);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B53da3e:{NFSU2_TR(0x53da3e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B53da42:L53da42:{c.instructions+=7;NFSU2_TR(0x53da42);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53da46:{NFSU2_TR(0x53da46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53da4c:{NFSU2_TR(0x53da4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B53da4f:{NFSU2_TR(0x53da4f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B53da52:{NFSU2_TR(0x53da52);
u8 U[4];
w4(U+0,u32(0x79bf34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53da57:{NFSU2_TR(0x53da57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53da58:{NFSU2_TR(0x53da58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53da5dull));
TAIL_STATIC(0x537be0u,537);
}
B53da5d:L53da5d:{c.instructions+=10;NFSU2_TR(0x53da5d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53da61:{NFSU2_TR(0x53da61);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B53da65:{NFSU2_TR(0x53da65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53da68:{NFSU2_TR(0x53da68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B53da6b:{NFSU2_TR(0x53da6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53da6e:{NFSU2_TR(0x53da6e);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B53da71:{NFSU2_TR(0x53da71);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B53da74:{NFSU2_TR(0x53da74);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B53da76:{NFSU2_TR(0x53da76);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53da79:{NFSU2_TR(0x53da79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53da81;}}
}
B53da7b:L53da7b:{c.instructions+=2;NFSU2_TR(0x53da7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53da7e:{NFSU2_TR(0x53da7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53da81:L53da81:{c.instructions+=5;NFSU2_TR(0x53da81);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B53da84:{NFSU2_TR(0x53da84);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B53da87:{NFSU2_TR(0x53da87);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B53da89:{NFSU2_TR(0x53da89);
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
B53da8c:{NFSU2_TR(0x53da8c);
if(r1(R+514)){{goto L53da94;}}
}
B53da8e:L53da8e:{c.instructions+=2;NFSU2_TR(0x53da8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53da91:{NFSU2_TR(0x53da91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53da94:L53da94:{c.instructions+=3;NFSU2_TR(0x53da94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53da95:{NFSU2_TR(0x53da95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53da96:{NFSU2_TR(0x53da96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53daa0:L53daa0:{c.instructions+=9;NFSU2_TR(0x53daa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B53daa3:{NFSU2_TR(0x53daa3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53daa4:{NFSU2_TR(0x53daa4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53daa5:{NFSU2_TR(0x53daa5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53daa6:{NFSU2_TR(0x53daa6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53daa7:{NFSU2_TR(0x53daa7);
__builtin_memmove((R+24),(R+4),4);
}
B53daa9:{NFSU2_TR(0x53daa9);
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
B53daab:{NFSU2_TR(0x53daab);
w4(R+4,u32(0xcull));
}
B53dab0:{NFSU2_TR(0x53dab0);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B53dab4:L53dab4:{c.instructions+=1;NFSU2_TR(0x53dab4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L53dab6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53dab4u);}goto L53dab4;}
}
B53dab6:L53dab6:{c.instructions+=16;NFSU2_TR(0x53dab6);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53daba:{NFSU2_TR(0x53daba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53dabd:{NFSU2_TR(0x53dabd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dabf:{NFSU2_TR(0x53dabf);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B53dac3:{NFSU2_TR(0x53dac3);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53dac7:{NFSU2_TR(0x53dac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B53dac9:{NFSU2_TR(0x53dac9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53daca:{NFSU2_TR(0x53daca);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x79ac98ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53dad2:{NFSU2_TR(0x53dad2);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x79ac90ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53dada:{NFSU2_TR(0x53dada);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x79ac88ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53dae2:{NFSU2_TR(0x53dae2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x79ac7cull));
s4(u32(r4(U+0)),r4(U+4));
}
B53daea:{NFSU2_TR(0x53daea);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x79ac70ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53daf2:{NFSU2_TR(0x53daf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53dafa:{NFSU2_TR(0x53dafa);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x42900000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53db02:{NFSU2_TR(0x53db02);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53db06:{NFSU2_TR(0x53db06);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53db09ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B53db09:L53db09:{c.instructions+=4;NFSU2_TR(0x53db09);
w4(R+20,u32(0x1ull));
}
B53db0e:{NFSU2_TR(0x53db0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ec2f0deull));
s4(u32(r4(U+0)),r4(U+4));
}
B53db16:{NFSU2_TR(0x53db16);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+12),(U+0),4);
}
B53db19:{NFSU2_TR(0x53db19);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B53db21:L53db21:{c.instructions+=2;NFSU2_TR(0x53db21);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53db23:{NFSU2_TR(0x53db23);
if(r1(R+518)){{goto L53db42;}}
}
B53db25:L53db25:{c.instructions+=2;NFSU2_TR(0x53db25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53db26:{NFSU2_TR(0x53db26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53db2bull));
TAIL_STATIC(0x52cef0u,52c);
}
B53db2b:L53db2b:{c.instructions+=3;NFSU2_TR(0x53db2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53db2e:{NFSU2_TR(0x53db2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53db30:{NFSU2_TR(0x53db30);
if(r1(R+518)){{goto L53db42;}}
}
B53db32:L53db32:{c.instructions+=4;NFSU2_TR(0x53db32);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53db36:{NFSU2_TR(0x53db36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53db37:{NFSU2_TR(0x53db37);
__builtin_memmove((R+4),(R+0),4);
}
B53db39:{NFSU2_TR(0x53db39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53db3eull));
TAIL_STATIC(0x517f80u,517);
}
B53db3e:L53db3e:{c.instructions+=2;NFSU2_TR(0x53db3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53db40:{NFSU2_TR(0x53db40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53db5d;}}
}
B53db42:L53db42:{c.instructions+=3;NFSU2_TR(0x53db42);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B53db47:{NFSU2_TR(0x53db47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53db49:{NFSU2_TR(0x53db49);
if(r1(R+518)){{goto L53db5b;}}
}
B53db4b:L53db4b:{c.instructions+=5;NFSU2_TR(0x53db4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53db4f:{NFSU2_TR(0x53db4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53db52:{NFSU2_TR(0x53db52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53db53:{NFSU2_TR(0x53db53);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53db54:{NFSU2_TR(0x53db54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53db59ull));
TAIL_STATIC(0x52c570u,52c);
}
B53db59:L53db59:{c.instructions+=1;NFSU2_TR(0x53db59);
{goto L53db5d;}
}
B53db5b:L53db5b:{c.instructions+=1;NFSU2_TR(0x53db5b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53db5d:L53db5d:{c.instructions+=3;NFSU2_TR(0x53db5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53db5f:{NFSU2_TR(0x53db5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53db62:{NFSU2_TR(0x53db62);
if(r1(R+518)){{goto L53db9f;}}
}
B53db64:L53db64:{c.instructions+=3;NFSU2_TR(0x53db64);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B53db6a:{NFSU2_TR(0x53db6a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53db6c:{NFSU2_TR(0x53db6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53db74;}}
}
B53db6e:L53db6e:{c.instructions+=2;NFSU2_TR(0x53db6e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B53db72:{NFSU2_TR(0x53db72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53db7b;}}
}
B53db74:L53db74:{c.instructions+=1;NFSU2_TR(0x53db74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53db7b:L53db7b:{c.instructions+=2;NFSU2_TR(0x53db7b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53db7f:{NFSU2_TR(0x53db7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53db9f;}}
}
B53db81:L53db81:{c.instructions+=4;NFSU2_TR(0x53db81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53db84:{NFSU2_TR(0x53db84);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53db87:{NFSU2_TR(0x53db87);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53db89:{NFSU2_TR(0x53db89);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L53db9f;}}
}
B53db8b:L53db8b:{c.instructions+=2;NFSU2_TR(0x53db8b);
__builtin_memmove((R+24),(R+0),4);
}
B53db8d:{NFSU2_TR(0x53db8d);
__builtin_memmove((R+4),(R+4),4);
}
B53db90:L53db90:{c.instructions+=2;NFSU2_TR(0x53db90);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53db91:{NFSU2_TR(0x53db91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53db96ull));
TAIL_STATIC(0x50ca00u,50c);
}
B53db96:L53db96:{c.instructions+=4;NFSU2_TR(0x53db96);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53db99:{NFSU2_TR(0x53db99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53db9c:{NFSU2_TR(0x53db9c);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B53db9d:{NFSU2_TR(0x53db9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53db90u);}goto L53db90;}}
}
B53db9f:L53db9f:{c.instructions+=6;NFSU2_TR(0x53db9f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dba0:{NFSU2_TR(0x53dba0);
u8 U[4];
w4(U+0,u32(0x79bf3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dba5:{NFSU2_TR(0x53dba5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53dba9:{NFSU2_TR(0x53dba9);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dbab:{NFSU2_TR(0x53dbab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dbac:{NFSU2_TR(0x53dbac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53dbb1ull));
TAIL_STATIC(0x50c960u,50c);
}
B53dbb1:L53dbb1:{c.instructions+=7;NFSU2_TR(0x53dbb1);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53dbb5:{NFSU2_TR(0x53dbb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B53dbb8:{NFSU2_TR(0x53dbb8);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B53dbb9:{NFSU2_TR(0x53dbb9);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B53dbbc:{NFSU2_TR(0x53dbbc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53dbbe:{NFSU2_TR(0x53dbbe);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53dbc2:{NFSU2_TR(0x53dbc2);
if(r1(R+518)){{goto L53dbde;}}
}
B53dbc4:L53dbc4:{c.instructions+=3;NFSU2_TR(0x53dbc4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B53dbc7:{NFSU2_TR(0x53dbc7);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B53dbc9:{NFSU2_TR(0x53dbc9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L53dbd1;}}
}
B53dbcb:L53dbcb:{c.instructions+=2;NFSU2_TR(0x53dbcb);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53dbcd:{NFSU2_TR(0x53dbcd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L53dbd1;}}
}
B53dbcf:L53dbcf:{c.instructions+=1;NFSU2_TR(0x53dbcf);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B53dbd1:L53dbd1:{c.instructions+=6;NFSU2_TR(0x53dbd1);
w4(R+8,u32(r1(R+0)));
}
B53dbd4:{NFSU2_TR(0x53dbd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53dbd7:{NFSU2_TR(0x53dbd7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B53dbd9:{NFSU2_TR(0x53dbd9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B53dbda:{NFSU2_TR(0x53dbda);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53dbdc:{NFSU2_TR(0x53dbdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53dbc4u);}goto L53dbc4;}}
}
B53dbde:L53dbde:{c.instructions+=2;NFSU2_TR(0x53dbde);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53dbe0:{NFSU2_TR(0x53dbe0);
if(r1(R+518)){{goto L53dbfb;}}
}
B53dbe2:L53dbe2:{c.instructions+=2;NFSU2_TR(0x53dbe2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dbe3:{NFSU2_TR(0x53dbe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53dbe8ull));
TAIL_STATIC(0x52cef0u,52c);
}
B53dbe8:L53dbe8:{c.instructions+=3;NFSU2_TR(0x53dbe8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53dbeb:{NFSU2_TR(0x53dbeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53dbed:{NFSU2_TR(0x53dbed);
if(r1(R+518)){{goto L53dbfb;}}
}
B53dbef:L53dbef:{c.instructions+=3;NFSU2_TR(0x53dbef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dbf0:{NFSU2_TR(0x53dbf0);
__builtin_memmove((R+4),(R+0),4);
}
B53dbf2:{NFSU2_TR(0x53dbf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53dbf7ull));
TAIL_STATIC(0x517f80u,517);
}
B53dbf7:L53dbf7:{c.instructions+=2;NFSU2_TR(0x53dbf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53dbf9:{NFSU2_TR(0x53dbf9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53dc12;}}
}
B53dbfb:L53dbfb:{c.instructions+=3;NFSU2_TR(0x53dbfb);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B53dc00:{NFSU2_TR(0x53dc00);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53dc02:{NFSU2_TR(0x53dc02);
if(r1(R+518)){{goto L53dc10;}}
}
B53dc04:L53dc04:{c.instructions+=4;NFSU2_TR(0x53dc04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53dc07:{NFSU2_TR(0x53dc07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dc08:{NFSU2_TR(0x53dc08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dc09:{NFSU2_TR(0x53dc09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53dc0eull));
TAIL_STATIC(0x52c570u,52c);
}
B53dc0e:L53dc0e:{c.instructions+=1;NFSU2_TR(0x53dc0e);
{goto L53dc12;}
}
B53dc10:L53dc10:{c.instructions+=1;NFSU2_TR(0x53dc10);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53dc12:L53dc12:{c.instructions+=3;NFSU2_TR(0x53dc12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53dc14:{NFSU2_TR(0x53dc14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B53dc16:{NFSU2_TR(0x53dc16);
if(r1(R+518)){{goto L53dc50;}}
}
B53dc18:L53dc18:{c.instructions+=3;NFSU2_TR(0x53dc18);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B53dc1e:{NFSU2_TR(0x53dc1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53dc20:{NFSU2_TR(0x53dc20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53dc28;}}
}
B53dc22:L53dc22:{c.instructions+=2;NFSU2_TR(0x53dc22);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B53dc26:{NFSU2_TR(0x53dc26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53dc2f;}}
}
B53dc28:L53dc28:{c.instructions+=1;NFSU2_TR(0x53dc28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53dc2f:L53dc2f:{c.instructions+=2;NFSU2_TR(0x53dc2f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53dc33:{NFSU2_TR(0x53dc33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53dc50;}}
}
B53dc35:L53dc35:{c.instructions+=4;NFSU2_TR(0x53dc35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53dc38:{NFSU2_TR(0x53dc38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53dc3b:{NFSU2_TR(0x53dc3b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53dc3d:{NFSU2_TR(0x53dc3d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L53dc50;}}
}
B53dc3f:L53dc3f:{c.instructions+=1;NFSU2_TR(0x53dc3f);
__builtin_memmove((R+24),(R+0),4);
}
B53dc41:L53dc41:{c.instructions+=2;NFSU2_TR(0x53dc41);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dc42:{NFSU2_TR(0x53dc42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53dc47ull));
TAIL_STATIC(0x50ca00u,50c);
}
B53dc47:L53dc47:{c.instructions+=4;NFSU2_TR(0x53dc47);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53dc4a:{NFSU2_TR(0x53dc4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53dc4d:{NFSU2_TR(0x53dc4d);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B53dc4e:{NFSU2_TR(0x53dc4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53dc41u);}goto L53dc41;}}
}
B53dc50:L53dc50:{c.instructions+=6;NFSU2_TR(0x53dc50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dc51:{NFSU2_TR(0x53dc51);
u8 U[4];
w4(U+0,u32(0x79bf3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dc56:{NFSU2_TR(0x53dc56);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B53dc5a:{NFSU2_TR(0x53dc5a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dc5c:{NFSU2_TR(0x53dc5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dc5d:{NFSU2_TR(0x53dc5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53dc62ull));
TAIL_STATIC(0x50c960u,50c);
}
B53dc62:L53dc62:{c.instructions+=7;NFSU2_TR(0x53dc62);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53dc66:{NFSU2_TR(0x53dc66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B53dc69:{NFSU2_TR(0x53dc69);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B53dc6a:{NFSU2_TR(0x53dc6a);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B53dc6d:{NFSU2_TR(0x53dc6d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53dc6f:{NFSU2_TR(0x53dc6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B53dc73:{NFSU2_TR(0x53dc73);
if(r1(R+518)){{goto L53dc8f;}}
}
B53dc75:L53dc75:{c.instructions+=3;NFSU2_TR(0x53dc75);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B53dc78:{NFSU2_TR(0x53dc78);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B53dc7a:{NFSU2_TR(0x53dc7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L53dc82;}}
}
B53dc7c:L53dc7c:{c.instructions+=2;NFSU2_TR(0x53dc7c);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53dc7e:{NFSU2_TR(0x53dc7e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L53dc82;}}
}
B53dc80:L53dc80:{c.instructions+=1;NFSU2_TR(0x53dc80);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B53dc82:L53dc82:{c.instructions+=6;NFSU2_TR(0x53dc82);
w4(R+8,u32(r1(R+0)));
}
B53dc85:{NFSU2_TR(0x53dc85);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53dc88:{NFSU2_TR(0x53dc88);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B53dc8a:{NFSU2_TR(0x53dc8a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B53dc8b:{NFSU2_TR(0x53dc8b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53dc8d:{NFSU2_TR(0x53dc8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53dc75u);}goto L53dc75;}}
}
B53dc8f:L53dc8f:{c.instructions+=2;NFSU2_TR(0x53dc8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53dc91:{NFSU2_TR(0x53dc91);
if(r1(R+518)){{goto L53dcac;}}
}
B53dc93:L53dc93:{c.instructions+=2;NFSU2_TR(0x53dc93);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dc94:{NFSU2_TR(0x53dc94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53dc99ull));
TAIL_STATIC(0x52cef0u,52c);
}
B53dc99:L53dc99:{c.instructions+=3;NFSU2_TR(0x53dc99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53dc9c:{NFSU2_TR(0x53dc9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53dc9e:{NFSU2_TR(0x53dc9e);
if(r1(R+518)){{goto L53dcac;}}
}
B53dca0:L53dca0:{c.instructions+=3;NFSU2_TR(0x53dca0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dca1:{NFSU2_TR(0x53dca1);
__builtin_memmove((R+4),(R+0),4);
}
B53dca3:{NFSU2_TR(0x53dca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53dca8ull));
TAIL_STATIC(0x517f80u,517);
}
B53dca8:L53dca8:{c.instructions+=2;NFSU2_TR(0x53dca8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53dcaa:{NFSU2_TR(0x53dcaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53dcc3;}}
}
B53dcac:L53dcac:{c.instructions+=3;NFSU2_TR(0x53dcac);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B53dcb1:{NFSU2_TR(0x53dcb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53dcb3:{NFSU2_TR(0x53dcb3);
if(r1(R+518)){{goto L53dcc1;}}
}
B53dcb5:L53dcb5:{c.instructions+=4;NFSU2_TR(0x53dcb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53dcb8:{NFSU2_TR(0x53dcb8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dcb9:{NFSU2_TR(0x53dcb9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dcba:{NFSU2_TR(0x53dcba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53dcbfull));
TAIL_STATIC(0x52c570u,52c);
}
B53dcbf:L53dcbf:{c.instructions+=1;NFSU2_TR(0x53dcbf);
{goto L53dcc3;}
}
B53dcc1:L53dcc1:{c.instructions+=1;NFSU2_TR(0x53dcc1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53dcc3:L53dcc3:{c.instructions+=3;NFSU2_TR(0x53dcc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53dcc5:{NFSU2_TR(0x53dcc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53dcc8:{NFSU2_TR(0x53dcc8);
if(r1(R+518)){{goto L53dd02;}}
}
B53dcca:L53dcca:{c.instructions+=3;NFSU2_TR(0x53dcca);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B53dcd0:{NFSU2_TR(0x53dcd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53dcd2:{NFSU2_TR(0x53dcd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53dcda;}}
}
B53dcd4:L53dcd4:{c.instructions+=2;NFSU2_TR(0x53dcd4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B53dcd8:{NFSU2_TR(0x53dcd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53dce1;}}
}
B53dcda:L53dcda:{c.instructions+=1;NFSU2_TR(0x53dcda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B53dce1:L53dce1:{c.instructions+=2;NFSU2_TR(0x53dce1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53dce5:{NFSU2_TR(0x53dce5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53dd02;}}
}
B53dce7:L53dce7:{c.instructions+=4;NFSU2_TR(0x53dce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53dcea:{NFSU2_TR(0x53dcea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53dced:{NFSU2_TR(0x53dced);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53dcef:{NFSU2_TR(0x53dcef);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L53dd02;}}
}
B53dcf1:L53dcf1:{c.instructions+=1;NFSU2_TR(0x53dcf1);
__builtin_memmove((R+24),(R+0),4);
}
B53dcf3:L53dcf3:{c.instructions+=2;NFSU2_TR(0x53dcf3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dcf4:{NFSU2_TR(0x53dcf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53dcf9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B53dcf9:L53dcf9:{c.instructions+=4;NFSU2_TR(0x53dcf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53dcfc:{NFSU2_TR(0x53dcfc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53dcff:{NFSU2_TR(0x53dcff);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B53dd00:{NFSU2_TR(0x53dd00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53dcf3u);}goto L53dcf3;}}
}
B53dd02:L53dd02:{c.instructions+=8;NFSU2_TR(0x53dd02);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53dd06:{NFSU2_TR(0x53dd06);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53dd0a:{NFSU2_TR(0x53dd0a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B53dd0b:{NFSU2_TR(0x53dd0b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xcull))));
}
B53dd0e:{NFSU2_TR(0x53dd0e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B53dd0f:{NFSU2_TR(0x53dd0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53dd13:{NFSU2_TR(0x53dd13);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53dd17:{NFSU2_TR(0x53dd17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53db21u);}goto L53db21;}}
}
B53dd1d:L53dd1d:{c.instructions+=6;NFSU2_TR(0x53dd1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53dd1e:{NFSU2_TR(0x53dd1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53dd1f:{NFSU2_TR(0x53dd1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53dd20:{NFSU2_TR(0x53dd20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53dd21:{NFSU2_TR(0x53dd21);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x54ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x54ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B53dd24:{NFSU2_TR(0x53dd24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53dd30:L53dd30:{c.instructions+=5;NFSU2_TR(0x53dd30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dd31:{NFSU2_TR(0x53dd31);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53dd35:{NFSU2_TR(0x53dd35);
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
B53dd37:{NFSU2_TR(0x53dd37);
s4(0x838578,u32(0x1ull));
}
B53dd41:{NFSU2_TR(0x53dd41);
if(r1(R+518)){{goto L53dd6d;}}
}
B53dd43:L53dd43:{c.instructions+=4;NFSU2_TR(0x53dd43);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dd48:{NFSU2_TR(0x53dd48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dd49:{NFSU2_TR(0x53dd49);
u8 U[4];
w4(U+0,u32(0x837ca0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dd4e:{NFSU2_TR(0x53dd4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53dd53ull));
TAIL_STATIC(0x43dc00u,43d);
}
B53dd53:L53dd53:{c.instructions+=4;NFSU2_TR(0x53dd53);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53dd59:{NFSU2_TR(0x53dd59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53dd5c:{NFSU2_TR(0x53dd5c);
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
B53dd5e:{NFSU2_TR(0x53dd5e);
if(r1(R+518)){{goto L53dd6d;}}
}
B53dd60:L53dd60:{c.instructions+=4;NFSU2_TR(0x53dd60);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dd62:{NFSU2_TR(0x53dd62);
u8 U[4];
w4(U+0,u32(0x78f958ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dd67:{NFSU2_TR(0x53dd67);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dd68:{NFSU2_TR(0x53dd68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53dd6dull));
TAIL_STATIC(0x5377a0u,537);
}
B53dd6d:L53dd6d:{c.instructions+=2;NFSU2_TR(0x53dd6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53dd6e:{NFSU2_TR(0x53dd6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53dd70:L53dd70:{c.instructions+=5;NFSU2_TR(0x53dd70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dd71:{NFSU2_TR(0x53dd71);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53dd75:{NFSU2_TR(0x53dd75);
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
B53dd77:{NFSU2_TR(0x53dd77);
s4(0x838578,u32(0x2ull));
}
B53dd81:{NFSU2_TR(0x53dd81);
if(r1(R+518)){{goto L53ddad;}}
}
B53dd83:L53dd83:{c.instructions+=4;NFSU2_TR(0x53dd83);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dd88:{NFSU2_TR(0x53dd88);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dd89:{NFSU2_TR(0x53dd89);
u8 U[4];
w4(U+0,u32(0x837ca0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dd8e:{NFSU2_TR(0x53dd8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53dd93ull));
TAIL_STATIC(0x43dc00u,43d);
}
B53dd93:L53dd93:{c.instructions+=4;NFSU2_TR(0x53dd93);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53dd99:{NFSU2_TR(0x53dd99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53dd9c:{NFSU2_TR(0x53dd9c);
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
B53dd9e:{NFSU2_TR(0x53dd9e);
if(r1(R+518)){{goto L53ddad;}}
}
B53dda0:L53dda0:{c.instructions+=4;NFSU2_TR(0x53dda0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dda2:{NFSU2_TR(0x53dda2);
u8 U[4];
w4(U+0,u32(0x78f958ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dda7:{NFSU2_TR(0x53dda7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dda8:{NFSU2_TR(0x53dda8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ddadull));
TAIL_STATIC(0x5377a0u,537);
}
B53ddad:L53ddad:{c.instructions+=2;NFSU2_TR(0x53ddad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53ddae:{NFSU2_TR(0x53ddae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53ddb0:L53ddb0:{c.instructions+=6;NFSU2_TR(0x53ddb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ddb1:{NFSU2_TR(0x53ddb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53ddb5:{NFSU2_TR(0x53ddb5);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ddba:{NFSU2_TR(0x53ddba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ddbb:{NFSU2_TR(0x53ddbb);
u8 U[4];
w4(U+0,u32(0x837ca0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ddc0:{NFSU2_TR(0x53ddc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53ddc5ull));
TAIL_STATIC(0x43dc00u,43d);
}
B53ddc5:L53ddc5:{c.instructions+=5;NFSU2_TR(0x53ddc5);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53ddcb:{NFSU2_TR(0x53ddcb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53ddce:{NFSU2_TR(0x53ddce);
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
B53ddd0:{NFSU2_TR(0x53ddd0);
s4(0x838578,u32(0x1ull));
}
B53ddda:{NFSU2_TR(0x53ddda);
if(r1(R+518)){{goto L53dde9;}}
}
B53dddc:L53dddc:{c.instructions+=4;NFSU2_TR(0x53dddc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ddde:{NFSU2_TR(0x53ddde);
u8 U[4];
w4(U+0,u32(0x799f94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dde3:{NFSU2_TR(0x53dde3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dde4:{NFSU2_TR(0x53dde4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53dde9ull));
TAIL_STATIC(0x5377a0u,537);
}
B53dde9:L53dde9:{c.instructions+=2;NFSU2_TR(0x53dde9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53ddea:{NFSU2_TR(0x53ddea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53ddf0:L53ddf0:{c.instructions+=6;NFSU2_TR(0x53ddf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ddf1:{NFSU2_TR(0x53ddf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53ddf5:{NFSU2_TR(0x53ddf5);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ddfa:{NFSU2_TR(0x53ddfa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ddfb:{NFSU2_TR(0x53ddfb);
u8 U[4];
w4(U+0,u32(0x837ca0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53de00:{NFSU2_TR(0x53de00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53de05ull));
TAIL_STATIC(0x43dc00u,43d);
}
B53de05:L53de05:{c.instructions+=5;NFSU2_TR(0x53de05);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53de0b:{NFSU2_TR(0x53de0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B53de0e:{NFSU2_TR(0x53de0e);
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
B53de10:{NFSU2_TR(0x53de10);
s4(0x838578,u32(0x2ull));
}
B53de1a:{NFSU2_TR(0x53de1a);
if(r1(R+518)){{goto L53de29;}}
}
B53de1c:L53de1c:{c.instructions+=4;NFSU2_TR(0x53de1c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53de1e:{NFSU2_TR(0x53de1e);
u8 U[4];
w4(U+0,u32(0x799f94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53de23:{NFSU2_TR(0x53de23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53de24:{NFSU2_TR(0x53de24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53de29ull));
TAIL_STATIC(0x5377a0u,537);
}
B53de29:L53de29:{c.instructions+=2;NFSU2_TR(0x53de29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53de2a:{NFSU2_TR(0x53de2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53de30:L53de30:{c.instructions+=4;NFSU2_TR(0x53de30);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53de36:{NFSU2_TR(0x53de36);
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
B53de38:{NFSU2_TR(0x53de38);
s4(0x838578,u32(0x0ull));
}
B53de42:{NFSU2_TR(0x53de42);
if(r1(R+518)){{goto L53de55;}}
}
B53de44:L53de44:{c.instructions+=5;NFSU2_TR(0x53de44);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53de48:{NFSU2_TR(0x53de48);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53de4a:{NFSU2_TR(0x53de4a);
u8 U[4];
w4(U+0,u32(0x837ca0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53de4f:{NFSU2_TR(0x53de4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53de50:{NFSU2_TR(0x53de50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53de55ull));
TAIL_STATIC(0x5377a0u,537);
}
B53de55:L53de55:{c.instructions+=1;NFSU2_TR(0x53de55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53de60:L53de60:{c.instructions+=2;NFSU2_TR(0x53de60);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B53de68:{NFSU2_TR(0x53de68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53dead;}}
}
B53de6a:L53de6a:{c.instructions+=3;NFSU2_TR(0x53de6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53de6d:{NFSU2_TR(0x53de6d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B53de6f:{NFSU2_TR(0x53de6f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L53de86;}}
}
B53de71:L53de71:{c.instructions+=2;NFSU2_TR(0x53de71);
u8 U[8];
__builtin_memmove((U+0),gp(0x838408),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53de77:{NFSU2_TR(0x53de77);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L53de86;}}
}
B53de79:L53de79:{c.instructions+=4;NFSU2_TR(0x53de79);
__builtin_memmove((R+4),gp(0x83840c),4);
}
B53de7f:{NFSU2_TR(0x53de7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B53de82:{NFSU2_TR(0x53de82);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B53de84:{NFSU2_TR(0x53de84);
{goto L53de88;}
}
B53de86:L53de86:{c.instructions+=1;NFSU2_TR(0x53de86);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53de88:L53de88:{c.instructions+=5;NFSU2_TR(0x53de88);
__builtin_memmove((R+4),gp(0x8384c4),4);
}
B53de8e:{NFSU2_TR(0x53de8e);
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
B53de90:{NFSU2_TR(0x53de90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53de93:{NFSU2_TR(0x53de93);
__builtin_memmove(gp(0x837fd8),(R+0),4);
}
B53de98:{NFSU2_TR(0x53de98);
if(r1(R+518)){{goto L53dead;}}
}
B53de9a:L53de9a:{c.instructions+=6;NFSU2_TR(0x53de9a);
__builtin_memmove((R+8),gp(0x7fa2a0),4);
}
B53dea0:{NFSU2_TR(0x53dea0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53dea4:{NFSU2_TR(0x53dea4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dea6:{NFSU2_TR(0x53dea6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dea7:{NFSU2_TR(0x53dea7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dea8:{NFSU2_TR(0x53dea8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53deadull));
TAIL_STATIC(0x5377a0u,537);
}
B53dead:L53dead:{c.instructions+=1;NFSU2_TR(0x53dead);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53deb0:L53deb0:{c.instructions+=13;NFSU2_TR(0x53deb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B53deb3:{NFSU2_TR(0x53deb3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53deb4:{NFSU2_TR(0x53deb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53deb5:{NFSU2_TR(0x53deb5);
__builtin_memmove((R+24),(R+4),4);
}
B53deb7:{NFSU2_TR(0x53deb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53deba:{NFSU2_TR(0x53deba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53debd:{NFSU2_TR(0x53debd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53debe:{NFSU2_TR(0x53debe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53dec2:{NFSU2_TR(0x53dec2);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B53dec4:{NFSU2_TR(0x53dec4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53dec8:{NFSU2_TR(0x53dec8);
w4(R+0,u32(0x83acb8ull));
}
B53decd:{NFSU2_TR(0x53decd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B53decf:{NFSU2_TR(0x53decf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53ded0:L53ded0:{c.instructions+=4;NFSU2_TR(0x53ded0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B53ded2:{NFSU2_TR(0x53ded2);
__builtin_memmove((R+28),(R+0),4);
}
B53ded4:{NFSU2_TR(0x53ded4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53ded8:{NFSU2_TR(0x53ded8);
if(r1(R+518)){{goto L53dee8;}}
}
B53deda:L53deda:{c.instructions+=4;NFSU2_TR(0x53deda);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B53dedd:{NFSU2_TR(0x53dedd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B53dee0:{NFSU2_TR(0x53dee0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0xd8ull))));
}
B53dee6:{NFSU2_TR(0x53dee6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53ded0u);}goto L53ded0;}}
}
B53dee8:L53dee8:{c.instructions+=5;NFSU2_TR(0x53dee8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53deec:{NFSU2_TR(0x53deec);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53def2:{NFSU2_TR(0x53def2);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B53def6:{NFSU2_TR(0x53def6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53def9:{NFSU2_TR(0x53def9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53df72;}}
}
B53defb:L53defb:{c.instructions+=2;NFSU2_TR(0x53defb);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
}
B53defc:{NFSU2_TR(0x53defc);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L53df03;}}
}
B53defe:L53defe:{c.instructions+=1;NFSU2_TR(0x53defe);
w4(R+12,u32(0x3ull));
}
B53df03:L53df03:{c.instructions+=3;NFSU2_TR(0x53df03);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53df06:{NFSU2_TR(0x53df06);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53df08:{NFSU2_TR(0x53df08);
if(r1(R+518)){{goto L53df69;}}
}
B53df0a:L53df0a:{c.instructions+=3;NFSU2_TR(0x53df0a);
w4(R+8,u32(0x78f568ull));
}
B53df0f:{NFSU2_TR(0x53df0f);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B53df12:{NFSU2_TR(0x53df12);
w1(R+0,u8(0x42ull));
}
B53df14:L53df14:{c.instructions+=3;NFSU2_TR(0x53df14);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x21ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B53df17:{NFSU2_TR(0x53df17);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x61ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x61ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B53df19:{NFSU2_TR(0x53df19);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L53df21;}}
}
B53df1b:L53df1b:{c.instructions+=2;NFSU2_TR(0x53df1b);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x7aull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7aull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53df1d:{NFSU2_TR(0x53df1d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L53df21;}}
}
B53df1f:L53df1f:{c.instructions+=1;NFSU2_TR(0x53df1f);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0xe0ull))));
}
B53df21:L53df21:{c.instructions+=6;NFSU2_TR(0x53df21);
w4(R+0,u32(r1(R+0)));
}
B53df24:{NFSU2_TR(0x53df24);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B53df26:{NFSU2_TR(0x53df26);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B53df29:{NFSU2_TR(0x53df29);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B53df2a:{NFSU2_TR(0x53df2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53df2c:{NFSU2_TR(0x53df2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53df14u);}goto L53df14;}}
}
B53df2e:L53df2e:{c.instructions+=3;NFSU2_TR(0x53df2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53df31:{NFSU2_TR(0x53df31);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53df33:{NFSU2_TR(0x53df33);
if(r1(R+518)){{goto L53df69;}}
}
B53df35:L53df35:{c.instructions+=2;NFSU2_TR(0x53df35);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53df38:{NFSU2_TR(0x53df38);
if(r1(R+518)){{goto L53df4d;}}
}
B53df3a:L53df3a:{c.instructions+=3;NFSU2_TR(0x53df3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53df3d:{NFSU2_TR(0x53df3d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53df3f:{NFSU2_TR(0x53df3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53df35u);}goto L53df35;}}
}
B53df41:L53df41:{c.instructions+=2;NFSU2_TR(0x53df41);
w4(R+0,u32(s32(s8(m1(0x83804e)))));
}
B53df48:{NFSU2_TR(0x53df48);
{goto L53dfd0;}
}
B53df4d:L53df4d:{c.instructions+=2;NFSU2_TR(0x53df4d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53df4f:{NFSU2_TR(0x53df4f);
if(r1(R+518)){{goto L53df69;}}
}
B53df51:L53df51:{c.instructions+=2;NFSU2_TR(0x53df51);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53df54:{NFSU2_TR(0x53df54);
if(r1(R+518)){{goto L53df66;}}
}
B53df56:L53df56:{c.instructions+=3;NFSU2_TR(0x53df56);
__builtin_memmove((R+4),(R+28),4);
}
B53df58:{NFSU2_TR(0x53df58);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53df5b:{NFSU2_TR(0x53df5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53df60ull));
TAIL_STATIC(0x517720u,517);
}
B53df60:L53df60:{c.instructions+=2;NFSU2_TR(0x53df60);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53df63:{NFSU2_TR(0x53df63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53df66:L53df66:{c.instructions+=1;NFSU2_TR(0x53df66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53df69:L53df69:{c.instructions+=2;NFSU2_TR(0x53df69);
w4(R+0,u32(s32(s8(m1(0x83804e)))));
}
B53df70:{NFSU2_TR(0x53df70);
{goto L53dfd0;}
}
B53df72:L53df72:{c.instructions+=2;NFSU2_TR(0x53df72);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53df78:{NFSU2_TR(0x53df78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53dfe1;}}
}
B53df7a:L53df7a:{c.instructions+=3;NFSU2_TR(0x53df7a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B53df7b:{NFSU2_TR(0x53df7b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53df7e:{NFSU2_TR(0x53df7e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L53df82;}}
}
B53df80:L53df80:{c.instructions+=1;NFSU2_TR(0x53df80);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B53df82:L53df82:{c.instructions+=3;NFSU2_TR(0x53df82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B53df85:{NFSU2_TR(0x53df85);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53df87:{NFSU2_TR(0x53df87);
if(r1(R+518)){{goto L53dfc9;}}
}
B53df89:L53df89:{c.instructions+=3;NFSU2_TR(0x53df89);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53df8c:{NFSU2_TR(0x53df8c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53df8e:{NFSU2_TR(0x53df8e);
if(r1(R+518)){{goto L53dfc9;}}
}
B53df90:L53df90:{c.instructions+=2;NFSU2_TR(0x53df90);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53df95:{NFSU2_TR(0x53df95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53df9aull));
TAIL_STATIC(0x505450u,505);
}
B53df9a:L53df9a:{c.instructions+=4;NFSU2_TR(0x53df9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53df9d:{NFSU2_TR(0x53df9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53dfa0:{NFSU2_TR(0x53dfa0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53dfa2:{NFSU2_TR(0x53dfa2);
if(r1(R+518)){{goto L53dfad;}}
}
B53dfa4:L53dfa4:{c.instructions+=3;NFSU2_TR(0x53dfa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53dfa7:{NFSU2_TR(0x53dfa7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53dfa9:{NFSU2_TR(0x53dfa9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53df90u);}goto L53df90;}}
}
B53dfab:L53dfab:{c.instructions+=1;NFSU2_TR(0x53dfab);
{goto L53dfc9;}
}
B53dfad:L53dfad:{c.instructions+=2;NFSU2_TR(0x53dfad);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53dfaf:{NFSU2_TR(0x53dfaf);
if(r1(R+518)){{goto L53dfc9;}}
}
B53dfb1:L53dfb1:{c.instructions+=2;NFSU2_TR(0x53dfb1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53dfb4:{NFSU2_TR(0x53dfb4);
if(r1(R+518)){{goto L53dfc6;}}
}
B53dfb6:L53dfb6:{c.instructions+=3;NFSU2_TR(0x53dfb6);
__builtin_memmove((R+4),(R+28),4);
}
B53dfb8:{NFSU2_TR(0x53dfb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53dfbb:{NFSU2_TR(0x53dfbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53dfc0ull));
TAIL_STATIC(0x517720u,517);
}
B53dfc0:L53dfc0:{c.instructions+=2;NFSU2_TR(0x53dfc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53dfc3:{NFSU2_TR(0x53dfc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53dfc6:L53dfc6:{c.instructions+=1;NFSU2_TR(0x53dfc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53dfc9:L53dfc9:{c.instructions+=1;NFSU2_TR(0x53dfc9);
w4(R+0,u32(s32(s8(m1(0x838069)))));
}
B53dfd0:L53dfd0:{c.instructions+=2;NFSU2_TR(0x53dfd0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53dfd3:{NFSU2_TR(0x53dfd3);
if(r1(R+518)){{goto L53dfe1;}}
}
B53dfd5:L53dfd5:{c.instructions+=3;NFSU2_TR(0x53dfd5);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B53dfdb:{NFSU2_TR(0x53dfdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53dfdc:{NFSU2_TR(0x53dfdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53dfe1ull));
TAIL_STATIC(0x458520u,458);
}
B53dfe1:L53dfe1:{c.instructions+=9;NFSU2_TR(0x53dfe1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53dfe5:{NFSU2_TR(0x53dfe5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53dfe8:{NFSU2_TR(0x53dfe8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53dfec:{NFSU2_TR(0x53dfec);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B53dfef:{NFSU2_TR(0x53dfef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53dff2:{NFSU2_TR(0x53dff2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B53dff4:{NFSU2_TR(0x53dff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B53dff5:{NFSU2_TR(0x53dff5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B53dff6:{NFSU2_TR(0x53dff6);
if(r1(R+518)){{goto L53dffd;}}
}
B53dff8:L53dff8:{c.instructions+=2;NFSU2_TR(0x53dff8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B53dffb:{NFSU2_TR(0x53dffb);
{goto L53dfff;}
}
B53dffd:L53dffd:{c.instructions+=1;NFSU2_TR(0x53dffd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B53dfff:L53dfff:{c.instructions+=1;NFSU2_TR(0x53dfff);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x53e003u,53e);
}
XIT:NFSU2_TR_EXIT(0x53d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
