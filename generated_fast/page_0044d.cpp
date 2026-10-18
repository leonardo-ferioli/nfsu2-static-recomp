#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_443(u8* __restrict R,Cpu& c);
u32 body_444(u8* __restrict R,Cpu& c);
u32 body_445(u8* __restrict R,Cpu& c);
u32 body_447(u8* __restrict R,Cpu& c);
u32 body_44a(u8* __restrict R,Cpu& c);
u32 body_44e(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x44d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x44d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_44d(u8* __restrict R,Cpu& c);
u32 page_44d(Cpu& c){return body_44d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_44d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x44d000:goto L44d000;
case 0x44d004:c.instructions+=47;goto B44d004;
case 0x44d008:c.instructions+=46;goto B44d008;
case 0x44d00a:c.instructions+=45;goto B44d00a;
case 0x44d010:c.instructions+=44;goto B44d010;
case 0x44d016:c.instructions+=43;goto B44d016;
case 0x44d01c:c.instructions+=42;goto B44d01c;
case 0x44d01e:c.instructions+=41;goto B44d01e;
case 0x44d024:c.instructions+=40;goto B44d024;
case 0x44d02a:c.instructions+=39;goto B44d02a;
case 0x44d030:c.instructions+=38;goto B44d030;
case 0x44d036:c.instructions+=37;goto B44d036;
case 0x44d03c:c.instructions+=36;goto B44d03c;
case 0x44d042:c.instructions+=35;goto B44d042;
case 0x44d046:c.instructions+=34;goto B44d046;
case 0x44d048:c.instructions+=33;goto B44d048;
case 0x44d04a:c.instructions+=32;goto B44d04a;
case 0x44d04e:c.instructions+=31;goto B44d04e;
case 0x44d050:c.instructions+=30;goto B44d050;
case 0x44d054:c.instructions+=29;goto B44d054;
case 0x44d058:c.instructions+=28;goto B44d058;
case 0x44d05a:c.instructions+=27;goto B44d05a;
case 0x44d05e:c.instructions+=26;goto B44d05e;
case 0x44d064:c.instructions+=25;goto B44d064;
case 0x44d06a:c.instructions+=24;goto B44d06a;
case 0x44d06e:c.instructions+=23;goto B44d06e;
case 0x44d074:c.instructions+=22;goto B44d074;
case 0x44d076:c.instructions+=21;goto B44d076;
case 0x44d07a:c.instructions+=20;goto B44d07a;
case 0x44d07e:c.instructions+=19;goto B44d07e;
case 0x44d080:c.instructions+=18;goto B44d080;
case 0x44d086:c.instructions+=17;goto B44d086;
case 0x44d08c:c.instructions+=16;goto B44d08c;
case 0x44d092:c.instructions+=15;goto B44d092;
case 0x44d095:c.instructions+=14;goto B44d095;
case 0x44d097:c.instructions+=13;goto B44d097;
case 0x44d099:c.instructions+=12;goto B44d099;
case 0x44d09b:c.instructions+=11;goto B44d09b;
case 0x44d0a1:c.instructions+=10;goto B44d0a1;
case 0x44d0a3:c.instructions+=9;goto B44d0a3;
case 0x44d0a9:c.instructions+=8;goto B44d0a9;
case 0x44d0ab:c.instructions+=7;goto B44d0ab;
case 0x44d0b1:c.instructions+=6;goto B44d0b1;
case 0x44d0b7:c.instructions+=5;goto B44d0b7;
case 0x44d0b9:c.instructions+=4;goto B44d0b9;
case 0x44d0bf:c.instructions+=3;goto B44d0bf;
case 0x44d0c1:c.instructions+=2;goto B44d0c1;
case 0x44d0c7:c.instructions+=1;goto B44d0c7;
case 0x44d0c9:goto L44d0c9;
case 0x44d0cd:c.instructions+=4;goto B44d0cd;
case 0x44d0d3:c.instructions+=3;goto B44d0d3;
case 0x44d0d5:c.instructions+=2;goto B44d0d5;
case 0x44d0d8:c.instructions+=1;goto B44d0d8;
case 0x44d0da:goto L44d0da;
case 0x44d0e0:c.instructions+=3;goto B44d0e0;
case 0x44d0e2:c.instructions+=2;goto B44d0e2;
case 0x44d0e9:c.instructions+=1;goto B44d0e9;
case 0x44d0eb:goto L44d0eb;
case 0x44d0ec:c.instructions+=3;goto B44d0ec;
case 0x44d0ef:c.instructions+=2;goto B44d0ef;
case 0x44d0f6:c.instructions+=1;goto B44d0f6;
case 0x44d0fb:goto L44d0fb;
case 0x44d0fd:goto L44d0fd;
case 0x44d0ff:goto L44d0ff;
case 0x44d103:c.instructions+=3;goto B44d103;
case 0x44d104:c.instructions+=2;goto B44d104;
case 0x44d105:c.instructions+=1;goto B44d105;
case 0x44d10a:goto L44d10a;
case 0x44d10f:c.instructions+=3;goto B44d10f;
case 0x44d112:c.instructions+=2;goto B44d112;
case 0x44d114:c.instructions+=1;goto B44d114;
case 0x44d116:goto L44d116;
case 0x44d118:c.instructions+=2;goto B44d118;
case 0x44d11e:c.instructions+=1;goto B44d11e;
case 0x44d123:goto L44d123;
case 0x44d125:c.instructions+=12;goto B44d125;
case 0x44d12a:c.instructions+=11;goto B44d12a;
case 0x44d12c:c.instructions+=10;goto B44d12c;
case 0x44d12f:c.instructions+=9;goto B44d12f;
case 0x44d131:c.instructions+=8;goto B44d131;
case 0x44d134:c.instructions+=7;goto B44d134;
case 0x44d136:c.instructions+=6;goto B44d136;
case 0x44d139:c.instructions+=5;goto B44d139;
case 0x44d13b:c.instructions+=4;goto B44d13b;
case 0x44d142:c.instructions+=3;goto B44d142;
case 0x44d147:c.instructions+=2;goto B44d147;
case 0x44d149:c.instructions+=1;goto B44d149;
case 0x44d14b:goto L44d14b;
case 0x44d14e:c.instructions+=5;goto B44d14e;
case 0x44d151:c.instructions+=4;goto B44d151;
case 0x44d157:c.instructions+=3;goto B44d157;
case 0x44d15c:c.instructions+=2;goto B44d15c;
case 0x44d15e:c.instructions+=1;goto B44d15e;
case 0x44d160:goto L44d160;
case 0x44d163:c.instructions+=2;goto B44d163;
case 0x44d166:c.instructions+=1;goto B44d166;
case 0x44d16c:goto L44d16c;
case 0x44d171:c.instructions+=5;goto B44d171;
case 0x44d172:c.instructions+=4;goto B44d172;
case 0x44d176:c.instructions+=3;goto B44d176;
case 0x44d177:c.instructions+=2;goto B44d177;
case 0x44d17a:c.instructions+=1;goto B44d17a;
case 0x44d17f:goto L44d17f;
case 0x44d180:c.instructions+=4;goto B44d180;
case 0x44d181:c.instructions+=3;goto B44d181;
case 0x44d183:c.instructions+=2;goto B44d183;
case 0x44d184:c.instructions+=1;goto B44d184;
case 0x44d190:goto L44d190;
case 0x44d193:c.instructions+=11;goto B44d193;
case 0x44d197:c.instructions+=10;goto B44d197;
case 0x44d198:c.instructions+=9;goto B44d198;
case 0x44d19c:c.instructions+=8;goto B44d19c;
case 0x44d19e:c.instructions+=7;goto B44d19e;
case 0x44d1a0:c.instructions+=6;goto B44d1a0;
case 0x44d1a4:c.instructions+=5;goto B44d1a4;
case 0x44d1aa:c.instructions+=4;goto B44d1aa;
case 0x44d1b0:c.instructions+=3;goto B44d1b0;
case 0x44d1b2:c.instructions+=2;goto B44d1b2;
case 0x44d1b5:c.instructions+=1;goto B44d1b5;
case 0x44d1b7:goto L44d1b7;
case 0x44d1bf:c.instructions+=1;goto B44d1bf;
case 0x44d1c1:goto L44d1c1;
case 0x44d1c7:c.instructions+=5;goto B44d1c7;
case 0x44d1c9:c.instructions+=4;goto B44d1c9;
case 0x44d1cf:c.instructions+=3;goto B44d1cf;
case 0x44d1d1:c.instructions+=2;goto B44d1d1;
case 0x44d1d4:c.instructions+=1;goto B44d1d4;
case 0x44d1d6:goto L44d1d6;
case 0x44d1de:c.instructions+=1;goto B44d1de;
case 0x44d1e0:goto L44d1e0;
case 0x44d1e6:c.instructions+=3;goto B44d1e6;
case 0x44d1ec:c.instructions+=2;goto B44d1ec;
case 0x44d1ee:c.instructions+=1;goto B44d1ee;
case 0x44d1f2:goto L44d1f2;
case 0x44d1f4:c.instructions+=5;goto B44d1f4;
case 0x44d1fa:c.instructions+=4;goto B44d1fa;
case 0x44d200:c.instructions+=3;goto B44d200;
case 0x44d202:c.instructions+=2;goto B44d202;
case 0x44d205:c.instructions+=1;goto B44d205;
case 0x44d207:goto L44d207;
case 0x44d20f:c.instructions+=1;goto B44d20f;
case 0x44d211:goto L44d211;
case 0x44d217:c.instructions+=5;goto B44d217;
case 0x44d219:c.instructions+=4;goto B44d219;
case 0x44d21f:c.instructions+=3;goto B44d21f;
case 0x44d221:c.instructions+=2;goto B44d221;
case 0x44d224:c.instructions+=1;goto B44d224;
case 0x44d226:goto L44d226;
case 0x44d22e:c.instructions+=1;goto B44d22e;
case 0x44d230:goto L44d230;
case 0x44d236:c.instructions+=3;goto B44d236;
case 0x44d23c:c.instructions+=2;goto B44d23c;
case 0x44d23e:c.instructions+=1;goto B44d23e;
case 0x44d242:goto L44d242;
case 0x44d244:c.instructions+=5;goto B44d244;
case 0x44d24a:c.instructions+=4;goto B44d24a;
case 0x44d250:c.instructions+=3;goto B44d250;
case 0x44d252:c.instructions+=2;goto B44d252;
case 0x44d255:c.instructions+=1;goto B44d255;
case 0x44d257:goto L44d257;
case 0x44d25f:c.instructions+=1;goto B44d25f;
case 0x44d261:goto L44d261;
case 0x44d267:c.instructions+=5;goto B44d267;
case 0x44d269:c.instructions+=4;goto B44d269;
case 0x44d26f:c.instructions+=3;goto B44d26f;
case 0x44d271:c.instructions+=2;goto B44d271;
case 0x44d274:c.instructions+=1;goto B44d274;
case 0x44d276:goto L44d276;
case 0x44d27e:c.instructions+=1;goto B44d27e;
case 0x44d280:goto L44d280;
case 0x44d286:c.instructions+=3;goto B44d286;
case 0x44d28c:c.instructions+=2;goto B44d28c;
case 0x44d28e:c.instructions+=1;goto B44d28e;
case 0x44d292:goto L44d292;
case 0x44d294:c.instructions+=10;goto B44d294;
case 0x44d295:c.instructions+=9;goto B44d295;
case 0x44d29b:c.instructions+=8;goto B44d29b;
case 0x44d2a1:c.instructions+=7;goto B44d2a1;
case 0x44d2a7:c.instructions+=6;goto B44d2a7;
case 0x44d2ad:c.instructions+=5;goto B44d2ad;
case 0x44d2b0:c.instructions+=4;goto B44d2b0;
case 0x44d2b1:c.instructions+=3;goto B44d2b1;
case 0x44d2b2:c.instructions+=2;goto B44d2b2;
case 0x44d2b4:c.instructions+=1;goto B44d2b4;
case 0x44d2b9:goto L44d2b9;
case 0x44d2bd:c.instructions+=10;goto B44d2bd;
case 0x44d2c3:c.instructions+=9;goto B44d2c3;
case 0x44d2c4:c.instructions+=8;goto B44d2c4;
case 0x44d2ca:c.instructions+=7;goto B44d2ca;
case 0x44d2d0:c.instructions+=6;goto B44d2d0;
case 0x44d2d6:c.instructions+=5;goto B44d2d6;
case 0x44d2d8:c.instructions+=4;goto B44d2d8;
case 0x44d2db:c.instructions+=3;goto B44d2db;
case 0x44d2dc:c.instructions+=2;goto B44d2dc;
case 0x44d2dd:c.instructions+=1;goto B44d2dd;
case 0x44d2e2:goto L44d2e2;
case 0x44d2e6:c.instructions+=6;goto B44d2e6;
case 0x44d2ea:c.instructions+=5;goto B44d2ea;
case 0x44d2ee:c.instructions+=4;goto B44d2ee;
case 0x44d2f2:c.instructions+=3;goto B44d2f2;
case 0x44d2f4:c.instructions+=2;goto B44d2f4;
case 0x44d2f7:c.instructions+=1;goto B44d2f7;
case 0x44d2f9:goto L44d2f9;
case 0x44d2fb:c.instructions+=1;goto B44d2fb;
case 0x44d2ff:goto L44d2ff;
case 0x44d303:c.instructions+=4;goto B44d303;
case 0x44d305:c.instructions+=3;goto B44d305;
case 0x44d307:c.instructions+=2;goto B44d307;
case 0x44d30a:c.instructions+=1;goto B44d30a;
case 0x44d30c:goto L44d30c;
case 0x44d30e:c.instructions+=1;goto B44d30e;
case 0x44d312:goto L44d312;
case 0x44d316:c.instructions+=4;goto B44d316;
case 0x44d318:c.instructions+=3;goto B44d318;
case 0x44d31a:c.instructions+=2;goto B44d31a;
case 0x44d31d:c.instructions+=1;goto B44d31d;
case 0x44d31f:goto L44d31f;
case 0x44d321:c.instructions+=1;goto B44d321;
case 0x44d325:goto L44d325;
case 0x44d329:c.instructions+=4;goto B44d329;
case 0x44d32b:c.instructions+=3;goto B44d32b;
case 0x44d32d:c.instructions+=2;goto B44d32d;
case 0x44d330:c.instructions+=1;goto B44d330;
case 0x44d332:goto L44d332;
case 0x44d334:c.instructions+=1;goto B44d334;
case 0x44d338:goto L44d338;
case 0x44d33c:c.instructions+=4;goto B44d33c;
case 0x44d33e:c.instructions+=3;goto B44d33e;
case 0x44d340:c.instructions+=2;goto B44d340;
case 0x44d343:c.instructions+=1;goto B44d343;
case 0x44d345:goto L44d345;
case 0x44d347:c.instructions+=1;goto B44d347;
case 0x44d34b:goto L44d34b;
case 0x44d351:c.instructions+=6;goto B44d351;
case 0x44d35b:c.instructions+=5;goto B44d35b;
case 0x44d361:c.instructions+=4;goto B44d361;
case 0x44d367:c.instructions+=3;goto B44d367;
case 0x44d369:c.instructions+=2;goto B44d369;
case 0x44d36c:c.instructions+=1;goto B44d36c;
case 0x44d36e:goto L44d36e;
case 0x44d374:c.instructions+=1;goto B44d374;
case 0x44d37a:goto L44d37a;
case 0x44d37b:c.instructions+=2;goto B44d37b;
case 0x44d37e:c.instructions+=1;goto B44d37e;
case 0x44d390:goto L44d390;
case 0x44d392:c.instructions+=11;goto B44d392;
case 0x44d397:c.instructions+=10;goto B44d397;
case 0x44d39d:c.instructions+=9;goto B44d39d;
case 0x44d39e:c.instructions+=8;goto B44d39e;
case 0x44d3a5:c.instructions+=7;goto B44d3a5;
case 0x44d3a6:c.instructions+=6;goto B44d3a6;
case 0x44d3a7:c.instructions+=5;goto B44d3a7;
case 0x44d3a9:c.instructions+=4;goto B44d3a9;
case 0x44d3ad:c.instructions+=3;goto B44d3ad;
case 0x44d3b3:c.instructions+=2;goto B44d3b3;
case 0x44d3bb:c.instructions+=1;goto B44d3bb;
case 0x44d3c0:goto L44d3c0;
case 0x44d3c3:c.instructions+=4;goto B44d3c3;
case 0x44d3c5:c.instructions+=3;goto B44d3c5;
case 0x44d3cd:c.instructions+=2;goto B44d3cd;
case 0x44d3d3:c.instructions+=1;goto B44d3d3;
case 0x44d3d5:goto L44d3d5;
case 0x44d3d8:c.instructions+=8;goto B44d3d8;
case 0x44d3df:c.instructions+=7;goto B44d3df;
case 0x44d3e5:c.instructions+=6;goto B44d3e5;
case 0x44d3e8:c.instructions+=5;goto B44d3e8;
case 0x44d3ee:c.instructions+=4;goto B44d3ee;
case 0x44d3f1:c.instructions+=3;goto B44d3f1;
case 0x44d3f2:c.instructions+=2;goto B44d3f2;
case 0x44d3f5:c.instructions+=1;goto B44d3f5;
case 0x44d3fa:goto L44d3fa;
case 0x44d3fe:c.instructions+=2;goto B44d3fe;
case 0x44d3ff:c.instructions+=1;goto B44d3ff;
case 0x44d401:goto L44d401;
case 0x44d407:goto L44d407;
case 0x44d40b:c.instructions+=3;goto B44d40b;
case 0x44d412:c.instructions+=2;goto B44d412;
case 0x44d415:c.instructions+=1;goto B44d415;
case 0x44d420:goto L44d420;
case 0x44d421:c.instructions+=16;goto B44d421;
case 0x44d423:c.instructions+=15;goto B44d423;
case 0x44d426:c.instructions+=14;goto B44d426;
case 0x44d428:c.instructions+=13;goto B44d428;
case 0x44d42d:c.instructions+=12;goto B44d42d;
case 0x44d433:c.instructions+=11;goto B44d433;
case 0x44d434:c.instructions+=10;goto B44d434;
case 0x44d43b:c.instructions+=9;goto B44d43b;
case 0x44d441:c.instructions+=8;goto B44d441;
case 0x44d446:c.instructions+=7;goto B44d446;
case 0x44d447:c.instructions+=6;goto B44d447;
case 0x44d448:c.instructions+=5;goto B44d448;
case 0x44d44b:c.instructions+=4;goto B44d44b;
case 0x44d44d:c.instructions+=3;goto B44d44d;
case 0x44d44e:c.instructions+=2;goto B44d44e;
case 0x44d450:c.instructions+=1;goto B44d450;
case 0x44d456:goto L44d456;
case 0x44d457:c.instructions+=1;goto B44d457;
case 0x44d45c:goto L44d45c;
case 0x44d45e:c.instructions+=3;goto B44d45e;
case 0x44d461:c.instructions+=2;goto B44d461;
case 0x44d463:c.instructions+=1;goto B44d463;
case 0x44d469:goto L44d469;
case 0x44d46f:c.instructions+=21;goto B44d46f;
case 0x44d474:c.instructions+=20;goto B44d474;
case 0x44d47a:c.instructions+=19;goto B44d47a;
case 0x44d480:c.instructions+=18;goto B44d480;
case 0x44d486:c.instructions+=17;goto B44d486;
case 0x44d48a:c.instructions+=16;goto B44d48a;
case 0x44d48e:c.instructions+=15;goto B44d48e;
case 0x44d492:c.instructions+=14;goto B44d492;
case 0x44d498:c.instructions+=13;goto B44d498;
case 0x44d49d:c.instructions+=12;goto B44d49d;
case 0x44d4a1:c.instructions+=11;goto B44d4a1;
case 0x44d4a5:c.instructions+=10;goto B44d4a5;
case 0x44d4a6:c.instructions+=9;goto B44d4a6;
case 0x44d4aa:c.instructions+=8;goto B44d4aa;
case 0x44d4ae:c.instructions+=7;goto B44d4ae;
case 0x44d4af:c.instructions+=6;goto B44d4af;
case 0x44d4b3:c.instructions+=5;goto B44d4b3;
case 0x44d4b5:c.instructions+=4;goto B44d4b5;
case 0x44d4b9:c.instructions+=3;goto B44d4b9;
case 0x44d4bd:c.instructions+=2;goto B44d4bd;
case 0x44d4c1:c.instructions+=1;goto B44d4c1;
case 0x44d4c6:goto L44d4c6;
case 0x44d4c8:c.instructions+=25;goto B44d4c8;
case 0x44d4cb:c.instructions+=24;goto B44d4cb;
case 0x44d4cf:c.instructions+=23;goto B44d4cf;
case 0x44d4d2:c.instructions+=22;goto B44d4d2;
case 0x44d4d6:c.instructions+=21;goto B44d4d6;
case 0x44d4da:c.instructions+=20;goto B44d4da;
case 0x44d4de:c.instructions+=19;goto B44d4de;
case 0x44d4e2:c.instructions+=18;goto B44d4e2;
case 0x44d4e6:c.instructions+=17;goto B44d4e6;
case 0x44d4e9:c.instructions+=16;goto B44d4e9;
case 0x44d4ed:c.instructions+=15;goto B44d4ed;
case 0x44d4f1:c.instructions+=14;goto B44d4f1;
case 0x44d4f5:c.instructions+=13;goto B44d4f5;
case 0x44d4f7:c.instructions+=12;goto B44d4f7;
case 0x44d4fd:c.instructions+=11;goto B44d4fd;
case 0x44d503:c.instructions+=10;goto B44d503;
case 0x44d509:c.instructions+=9;goto B44d509;
case 0x44d50c:c.instructions+=8;goto B44d50c;
case 0x44d50e:c.instructions+=7;goto B44d50e;
case 0x44d510:c.instructions+=6;goto B44d510;
case 0x44d513:c.instructions+=5;goto B44d513;
case 0x44d517:c.instructions+=4;goto B44d517;
case 0x44d519:c.instructions+=3;goto B44d519;
case 0x44d51e:c.instructions+=2;goto B44d51e;
case 0x44d524:c.instructions+=1;goto B44d524;
case 0x44d52a:goto L44d52a;
case 0x44d530:c.instructions+=1;goto B44d530;
case 0x44d535:goto L44d535;
case 0x44d53b:c.instructions+=4;goto B44d53b;
case 0x44d541:c.instructions+=3;goto B44d541;
case 0x44d543:c.instructions+=2;goto B44d543;
case 0x44d546:c.instructions+=1;goto B44d546;
case 0x44d54c:goto L44d54c;
case 0x44d553:c.instructions+=1;goto B44d553;
case 0x44d558:goto L44d558;
case 0x44d55a:c.instructions+=5;goto B44d55a;
case 0x44d55f:c.instructions+=4;goto B44d55f;
case 0x44d564:c.instructions+=3;goto B44d564;
case 0x44d56b:c.instructions+=2;goto B44d56b;
case 0x44d576:c.instructions+=1;goto B44d576;
case 0x44d57b:goto L44d57b;
case 0x44d582:c.instructions+=2;goto B44d582;
case 0x44d584:c.instructions+=1;goto B44d584;
case 0x44d586:goto L44d586;
case 0x44d588:c.instructions+=5;goto B44d588;
case 0x44d58a:c.instructions+=4;goto B44d58a;
case 0x44d58c:c.instructions+=3;goto B44d58c;
case 0x44d591:c.instructions+=2;goto B44d591;
case 0x44d598:c.instructions+=1;goto B44d598;
case 0x44d59d:goto L44d59d;
case 0x44d59f:goto L44d59f;
case 0x44d5a5:goto L44d5a5;
case 0x44d5ab:c.instructions+=23;goto B44d5ab;
case 0x44d5b1:c.instructions+=22;goto B44d5b1;
case 0x44d5b7:c.instructions+=21;goto B44d5b7;
case 0x44d5bb:c.instructions+=20;goto B44d5bb;
case 0x44d5c1:c.instructions+=19;goto B44d5c1;
case 0x44d5c5:c.instructions+=18;goto B44d5c5;
case 0x44d5cb:c.instructions+=17;goto B44d5cb;
case 0x44d5d0:c.instructions+=16;goto B44d5d0;
case 0x44d5d6:c.instructions+=15;goto B44d5d6;
case 0x44d5da:c.instructions+=14;goto B44d5da;
case 0x44d5e0:c.instructions+=13;goto B44d5e0;
case 0x44d5e1:c.instructions+=12;goto B44d5e1;
case 0x44d5e5:c.instructions+=11;goto B44d5e5;
case 0x44d5e9:c.instructions+=10;goto B44d5e9;
case 0x44d5ef:c.instructions+=9;goto B44d5ef;
case 0x44d5f0:c.instructions+=8;goto B44d5f0;
case 0x44d5f4:c.instructions+=7;goto B44d5f4;
case 0x44d5f8:c.instructions+=6;goto B44d5f8;
case 0x44d5fc:c.instructions+=5;goto B44d5fc;
case 0x44d5fe:c.instructions+=4;goto B44d5fe;
case 0x44d602:c.instructions+=3;goto B44d602;
case 0x44d606:c.instructions+=2;goto B44d606;
case 0x44d60a:c.instructions+=1;goto B44d60a;
case 0x44d60f:goto L44d60f;
case 0x44d615:c.instructions+=22;goto B44d615;
case 0x44d61b:c.instructions+=21;goto B44d61b;
case 0x44d61f:c.instructions+=20;goto B44d61f;
case 0x44d625:c.instructions+=19;goto B44d625;
case 0x44d629:c.instructions+=18;goto B44d629;
case 0x44d62c:c.instructions+=17;goto B44d62c;
case 0x44d632:c.instructions+=16;goto B44d632;
case 0x44d638:c.instructions+=15;goto B44d638;
case 0x44d63c:c.instructions+=14;goto B44d63c;
case 0x44d642:c.instructions+=13;goto B44d642;
case 0x44d648:c.instructions+=12;goto B44d648;
case 0x44d652:c.instructions+=11;goto B44d652;
case 0x44d65c:c.instructions+=10;goto B44d65c;
case 0x44d660:c.instructions+=9;goto B44d660;
case 0x44d664:c.instructions+=8;goto B44d664;
case 0x44d666:c.instructions+=7;goto B44d666;
case 0x44d66c:c.instructions+=6;goto B44d66c;
case 0x44d671:c.instructions+=5;goto B44d671;
case 0x44d676:c.instructions+=4;goto B44d676;
case 0x44d67c:c.instructions+=3;goto B44d67c;
case 0x44d681:c.instructions+=2;goto B44d681;
case 0x44d68b:c.instructions+=1;goto B44d68b;
case 0x44d690:goto L44d690;
case 0x44d697:c.instructions+=2;goto B44d697;
case 0x44d69e:c.instructions+=1;goto B44d69e;
case 0x44d6a3:goto L44d6a3;
case 0x44d6a9:c.instructions+=11;goto B44d6a9;
case 0x44d6af:c.instructions+=10;goto B44d6af;
case 0x44d6b3:c.instructions+=9;goto B44d6b3;
case 0x44d6b9:c.instructions+=8;goto B44d6b9;
case 0x44d6bf:c.instructions+=7;goto B44d6bf;
case 0x44d6c3:c.instructions+=6;goto B44d6c3;
case 0x44d6c9:c.instructions+=5;goto B44d6c9;
case 0x44d6cf:c.instructions+=4;goto B44d6cf;
case 0x44d6d3:c.instructions+=3;goto B44d6d3;
case 0x44d6d7:c.instructions+=2;goto B44d6d7;
case 0x44d6dd:c.instructions+=1;goto B44d6dd;
case 0x44d6e2:goto L44d6e2;
case 0x44d6e6:c.instructions+=3;goto B44d6e6;
case 0x44d6ec:c.instructions+=2;goto B44d6ec;
case 0x44d6ed:c.instructions+=1;goto B44d6ed;
case 0x44d6f2:goto L44d6f2;
case 0x44d6f3:c.instructions+=1;goto B44d6f3;
case 0x44d6f8:goto L44d6f8;
case 0x44d6fc:c.instructions+=4;goto B44d6fc;
case 0x44d6ff:c.instructions+=3;goto B44d6ff;
case 0x44d702:c.instructions+=2;goto B44d702;
case 0x44d704:c.instructions+=1;goto B44d704;
case 0x44d706:goto L44d706;
case 0x44d70a:c.instructions+=1;goto B44d70a;
case 0x44d70c:goto L44d70c;
case 0x44d70f:c.instructions+=4;goto B44d70f;
case 0x44d715:c.instructions+=3;goto B44d715;
case 0x44d717:c.instructions+=2;goto B44d717;
case 0x44d71a:c.instructions+=1;goto B44d71a;
case 0x44d720:goto L44d720;
case 0x44d723:c.instructions+=4;goto B44d723;
case 0x44d727:c.instructions+=3;goto B44d727;
case 0x44d72b:c.instructions+=2;goto B44d72b;
case 0x44d731:c.instructions+=1;goto B44d731;
case 0x44d736:goto L44d736;
case 0x44d73a:c.instructions+=3;goto B44d73a;
case 0x44d740:c.instructions+=2;goto B44d740;
case 0x44d742:c.instructions+=1;goto B44d742;
case 0x44d747:goto L44d747;
case 0x44d74b:c.instructions+=8;goto B44d74b;
case 0x44d74f:c.instructions+=7;goto B44d74f;
case 0x44d750:c.instructions+=6;goto B44d750;
case 0x44d754:c.instructions+=5;goto B44d754;
case 0x44d758:c.instructions+=4;goto B44d758;
case 0x44d75a:c.instructions+=3;goto B44d75a;
case 0x44d75c:c.instructions+=2;goto B44d75c;
case 0x44d762:c.instructions+=1;goto B44d762;
case 0x44d767:goto L44d767;
case 0x44d768:c.instructions+=1;goto B44d768;
case 0x44d76d:goto L44d76d;
case 0x44d771:c.instructions+=6;goto B44d771;
case 0x44d775:c.instructions+=5;goto B44d775;
case 0x44d778:c.instructions+=4;goto B44d778;
case 0x44d77a:c.instructions+=3;goto B44d77a;
case 0x44d77e:c.instructions+=2;goto B44d77e;
case 0x44d784:c.instructions+=1;goto B44d784;
case 0x44d789:goto L44d789;
case 0x44d78b:c.instructions+=2;goto B44d78b;
case 0x44d790:c.instructions+=1;goto B44d790;
case 0x44d792:goto L44d792;
case 0x44d797:c.instructions+=1;goto B44d797;
case 0x44d799:goto L44d799;
case 0x44d79e:c.instructions+=1;goto B44d79e;
case 0x44d7a0:goto L44d7a0;
case 0x44d7a5:c.instructions+=1;goto B44d7a5;
case 0x44d7a7:goto L44d7a7;
case 0x44d7ac:c.instructions+=1;goto B44d7ac;
case 0x44d7ae:goto L44d7ae;
case 0x44d7b3:goto L44d7b3;
case 0x44d7b8:c.instructions+=2;goto B44d7b8;
case 0x44d7ba:c.instructions+=1;goto B44d7ba;
case 0x44d7bc:goto L44d7bc;
case 0x44d7c2:c.instructions+=3;goto B44d7c2;
case 0x44d7c5:c.instructions+=2;goto B44d7c5;
case 0x44d7cb:c.instructions+=1;goto B44d7cb;
case 0x44d7cd:goto L44d7cd;
case 0x44d7d2:c.instructions+=2;goto B44d7d2;
case 0x44d7d4:c.instructions+=1;goto B44d7d4;
case 0x44d7d6:goto L44d7d6;
case 0x44d7dc:c.instructions+=3;goto B44d7dc;
case 0x44d7df:c.instructions+=2;goto B44d7df;
case 0x44d7e5:c.instructions+=1;goto B44d7e5;
case 0x44d7e7:goto L44d7e7;
case 0x44d7ed:c.instructions+=1;goto B44d7ed;
case 0x44d7f0:goto L44d7f0;
case 0x44d7f5:c.instructions+=2;goto B44d7f5;
case 0x44d7f7:c.instructions+=1;goto B44d7f7;
case 0x44d7f9:goto L44d7f9;
case 0x44d7ff:goto L44d7ff;
case 0x44d805:c.instructions+=13;goto B44d805;
case 0x44d806:c.instructions+=12;goto B44d806;
case 0x44d80c:c.instructions+=11;goto B44d80c;
case 0x44d810:c.instructions+=10;goto B44d810;
case 0x44d816:c.instructions+=9;goto B44d816;
case 0x44d81a:c.instructions+=8;goto B44d81a;
case 0x44d81c:c.instructions+=7;goto B44d81c;
case 0x44d821:c.instructions+=6;goto B44d821;
case 0x44d825:c.instructions+=5;goto B44d825;
case 0x44d829:c.instructions+=4;goto B44d829;
case 0x44d82f:c.instructions+=3;goto B44d82f;
case 0x44d835:c.instructions+=2;goto B44d835;
case 0x44d837:c.instructions+=1;goto B44d837;
case 0x44d83c:goto L44d83c;
case 0x44d83d:c.instructions+=2;goto B44d83d;
case 0x44d841:c.instructions+=1;goto B44d841;
case 0x44d846:goto L44d846;
case 0x44d84a:c.instructions+=5;goto B44d84a;
case 0x44d84b:c.instructions+=4;goto B44d84b;
case 0x44d851:c.instructions+=3;goto B44d851;
case 0x44d857:c.instructions+=2;goto B44d857;
case 0x44d85d:c.instructions+=1;goto B44d85d;
case 0x44d862:goto L44d862;
case 0x44d863:c.instructions+=2;goto B44d863;
case 0x44d867:c.instructions+=1;goto B44d867;
case 0x44d86c:goto L44d86c;
case 0x44d870:c.instructions+=5;goto B44d870;
case 0x44d871:c.instructions+=4;goto B44d871;
case 0x44d877:c.instructions+=3;goto B44d877;
case 0x44d87d:c.instructions+=2;goto B44d87d;
case 0x44d883:c.instructions+=1;goto B44d883;
case 0x44d888:goto L44d888;
case 0x44d88e:c.instructions+=3;goto B44d88e;
case 0x44d891:c.instructions+=2;goto B44d891;
case 0x44d897:c.instructions+=1;goto B44d897;
case 0x44d89d:goto L44d89d;
case 0x44d8a0:c.instructions+=4;goto B44d8a0;
case 0x44d8a6:c.instructions+=3;goto B44d8a6;
case 0x44d8a8:c.instructions+=2;goto B44d8a8;
case 0x44d8ab:c.instructions+=1;goto B44d8ab;
case 0x44d8b1:goto L44d8b1;
case 0x44d8b6:c.instructions+=2;goto B44d8b6;
case 0x44d8b8:c.instructions+=1;goto B44d8b8;
case 0x44d8ba:goto L44d8ba;
case 0x44d8c0:c.instructions+=3;goto B44d8c0;
case 0x44d8c3:c.instructions+=2;goto B44d8c3;
case 0x44d8c9:c.instructions+=1;goto B44d8c9;
case 0x44d8cb:goto L44d8cb;
case 0x44d8d0:c.instructions+=2;goto B44d8d0;
case 0x44d8d2:c.instructions+=1;goto B44d8d2;
case 0x44d8d4:goto L44d8d4;
case 0x44d8da:c.instructions+=3;goto B44d8da;
case 0x44d8dd:c.instructions+=2;goto B44d8dd;
case 0x44d8e3:c.instructions+=1;goto B44d8e3;
case 0x44d8e5:goto L44d8e5;
case 0x44d8eb:c.instructions+=1;goto B44d8eb;
case 0x44d8ee:goto L44d8ee;
case 0x44d8f3:c.instructions+=3;goto B44d8f3;
case 0x44d8f7:c.instructions+=2;goto B44d8f7;
case 0x44d8f9:c.instructions+=1;goto B44d8f9;
case 0x44d8fb:goto L44d8fb;
case 0x44d901:c.instructions+=2;goto B44d901;
case 0x44d905:c.instructions+=1;goto B44d905;
case 0x44d909:goto L44d909;
case 0x44d90a:c.instructions+=1;goto B44d90a;
case 0x44d90f:goto L44d90f;
case 0x44d913:c.instructions+=3;goto B44d913;
case 0x44d914:c.instructions+=2;goto B44d914;
case 0x44d918:c.instructions+=1;goto B44d918;
case 0x44d91d:goto L44d91d;
case 0x44d921:c.instructions+=16;goto B44d921;
case 0x44d927:c.instructions+=15;goto B44d927;
case 0x44d92d:c.instructions+=14;goto B44d92d;
case 0x44d932:c.instructions+=13;goto B44d932;
case 0x44d935:c.instructions+=12;goto B44d935;
case 0x44d937:c.instructions+=11;goto B44d937;
case 0x44d93d:c.instructions+=10;goto B44d93d;
case 0x44d942:c.instructions+=9;goto B44d942;
case 0x44d948:c.instructions+=8;goto B44d948;
case 0x44d94c:c.instructions+=7;goto B44d94c;
case 0x44d952:c.instructions+=6;goto B44d952;
case 0x44d958:c.instructions+=5;goto B44d958;
case 0x44d95e:c.instructions+=4;goto B44d95e;
case 0x44d964:c.instructions+=3;goto B44d964;
case 0x44d968:c.instructions+=2;goto B44d968;
case 0x44d96e:c.instructions+=1;goto B44d96e;
case 0x44d974:goto L44d974;
case 0x44d977:c.instructions+=4;goto B44d977;
case 0x44d97d:c.instructions+=3;goto B44d97d;
case 0x44d97f:c.instructions+=2;goto B44d97f;
case 0x44d982:c.instructions+=1;goto B44d982;
case 0x44d988:goto L44d988;
case 0x44d98d:c.instructions+=2;goto B44d98d;
case 0x44d98f:c.instructions+=1;goto B44d98f;
case 0x44d991:goto L44d991;
case 0x44d997:c.instructions+=2;goto B44d997;
case 0x44d99d:c.instructions+=1;goto B44d99d;
case 0x44d99f:goto L44d99f;
case 0x44d9a4:c.instructions+=2;goto B44d9a4;
case 0x44d9a6:c.instructions+=1;goto B44d9a6;
case 0x44d9a8:goto L44d9a8;
case 0x44d9ae:c.instructions+=2;goto B44d9ae;
case 0x44d9b4:c.instructions+=1;goto B44d9b4;
case 0x44d9b6:goto L44d9b6;
case 0x44d9bc:goto L44d9bc;
case 0x44d9bf:c.instructions+=4;goto B44d9bf;
case 0x44d9c4:c.instructions+=3;goto B44d9c4;
case 0x44d9c6:c.instructions+=2;goto B44d9c6;
case 0x44d9ca:c.instructions+=1;goto B44d9ca;
case 0x44d9cc:goto L44d9cc;
case 0x44d9d2:c.instructions+=2;goto B44d9d2;
case 0x44d9d6:c.instructions+=1;goto B44d9d6;
case 0x44d9da:goto L44d9da;
case 0x44d9e0:c.instructions+=15;goto B44d9e0;
case 0x44d9e4:c.instructions+=14;goto B44d9e4;
case 0x44d9ea:c.instructions+=13;goto B44d9ea;
case 0x44d9eb:c.instructions+=12;goto B44d9eb;
case 0x44d9ef:c.instructions+=11;goto B44d9ef;
case 0x44d9f0:c.instructions+=10;goto B44d9f0;
case 0x44d9f4:c.instructions+=9;goto B44d9f4;
case 0x44d9f8:c.instructions+=8;goto B44d9f8;
case 0x44d9fe:c.instructions+=7;goto B44d9fe;
case 0x44d9ff:c.instructions+=6;goto B44d9ff;
case 0x44da05:c.instructions+=5;goto B44da05;
case 0x44da09:c.instructions+=4;goto B44da09;
case 0x44da0f:c.instructions+=3;goto B44da0f;
case 0x44da15:c.instructions+=2;goto B44da15;
case 0x44da19:c.instructions+=1;goto B44da19;
case 0x44da1e:goto L44da1e;
case 0x44da22:c.instructions+=18;goto B44da22;
case 0x44da25:c.instructions+=17;goto B44da25;
case 0x44da2b:c.instructions+=16;goto B44da2b;
case 0x44da31:c.instructions+=15;goto B44da31;
case 0x44da35:c.instructions+=14;goto B44da35;
case 0x44da3b:c.instructions+=13;goto B44da3b;
case 0x44da41:c.instructions+=12;goto B44da41;
case 0x44da45:c.instructions+=11;goto B44da45;
case 0x44da4b:c.instructions+=10;goto B44da4b;
case 0x44da51:c.instructions+=9;goto B44da51;
case 0x44da55:c.instructions+=8;goto B44da55;
case 0x44da5b:c.instructions+=7;goto B44da5b;
case 0x44da61:c.instructions+=6;goto B44da61;
case 0x44da65:c.instructions+=5;goto B44da65;
case 0x44da6b:c.instructions+=4;goto B44da6b;
case 0x44da71:c.instructions+=3;goto B44da71;
case 0x44da75:c.instructions+=2;goto B44da75;
case 0x44da7b:c.instructions+=1;goto B44da7b;
case 0x44da81:goto L44da81;
case 0x44da84:c.instructions+=4;goto B44da84;
case 0x44da8a:c.instructions+=3;goto B44da8a;
case 0x44da8c:c.instructions+=2;goto B44da8c;
case 0x44da8f:c.instructions+=1;goto B44da8f;
case 0x44da95:goto L44da95;
case 0x44da9a:c.instructions+=2;goto B44da9a;
case 0x44da9c:c.instructions+=1;goto B44da9c;
case 0x44da9e:goto L44da9e;
case 0x44daa4:c.instructions+=3;goto B44daa4;
case 0x44daa7:c.instructions+=2;goto B44daa7;
case 0x44daad:c.instructions+=1;goto B44daad;
case 0x44daaf:goto L44daaf;
case 0x44dab4:c.instructions+=2;goto B44dab4;
case 0x44dab6:c.instructions+=1;goto B44dab6;
case 0x44dab8:goto L44dab8;
case 0x44dabe:c.instructions+=3;goto B44dabe;
case 0x44dac1:c.instructions+=2;goto B44dac1;
case 0x44dac7:c.instructions+=1;goto B44dac7;
case 0x44dac9:goto L44dac9;
case 0x44dacf:c.instructions+=1;goto B44dacf;
case 0x44dad2:goto L44dad2;
case 0x44dad7:c.instructions+=3;goto B44dad7;
case 0x44dadb:c.instructions+=2;goto B44dadb;
case 0x44dadd:c.instructions+=1;goto B44dadd;
case 0x44dadf:goto L44dadf;
case 0x44dae5:c.instructions+=2;goto B44dae5;
case 0x44dae9:c.instructions+=1;goto B44dae9;
case 0x44daed:goto L44daed;
case 0x44daf3:c.instructions+=2;goto B44daf3;
case 0x44daf4:c.instructions+=1;goto B44daf4;
case 0x44daf9:goto L44daf9;
case 0x44dafd:c.instructions+=3;goto B44dafd;
case 0x44dafe:c.instructions+=2;goto B44dafe;
case 0x44db02:c.instructions+=1;goto B44db02;
case 0x44db07:goto L44db07;
case 0x44db0b:c.instructions+=16;goto B44db0b;
case 0x44db11:c.instructions+=15;goto B44db11;
case 0x44db17:c.instructions+=14;goto B44db17;
case 0x44db1d:c.instructions+=13;goto B44db1d;
case 0x44db20:c.instructions+=12;goto B44db20;
case 0x44db22:c.instructions+=11;goto B44db22;
case 0x44db28:c.instructions+=10;goto B44db28;
case 0x44db2e:c.instructions+=9;goto B44db2e;
case 0x44db34:c.instructions+=8;goto B44db34;
case 0x44db38:c.instructions+=7;goto B44db38;
case 0x44db3e:c.instructions+=6;goto B44db3e;
case 0x44db44:c.instructions+=5;goto B44db44;
case 0x44db4a:c.instructions+=4;goto B44db4a;
case 0x44db50:c.instructions+=3;goto B44db50;
case 0x44db54:c.instructions+=2;goto B44db54;
case 0x44db5a:c.instructions+=1;goto B44db5a;
case 0x44db60:goto L44db60;
case 0x44db66:c.instructions+=2;goto B44db66;
case 0x44db6c:c.instructions+=1;goto B44db6c;
case 0x44db71:goto L44db71;
case 0x44db72:c.instructions+=5;goto B44db72;
case 0x44db77:c.instructions+=4;goto B44db77;
case 0x44db7b:c.instructions+=3;goto B44db7b;
case 0x44db80:c.instructions+=2;goto B44db80;
case 0x44db81:c.instructions+=1;goto B44db81;
case 0x44db86:goto L44db86;
case 0x44db8a:c.instructions+=6;goto B44db8a;
case 0x44db8b:c.instructions+=5;goto B44db8b;
case 0x44db90:c.instructions+=4;goto B44db90;
case 0x44db94:c.instructions+=3;goto B44db94;
case 0x44db99:c.instructions+=2;goto B44db99;
case 0x44db9a:c.instructions+=1;goto B44db9a;
case 0x44db9f:goto L44db9f;
case 0x44dba4:c.instructions+=3;goto B44dba4;
case 0x44dba7:c.instructions+=2;goto B44dba7;
case 0x44dba9:c.instructions+=1;goto B44dba9;
case 0x44dbab:goto L44dbab;
case 0x44dbb1:c.instructions+=2;goto B44dbb1;
case 0x44dbb7:c.instructions+=1;goto B44dbb7;
case 0x44dbbc:goto L44dbbc;
case 0x44dbbf:c.instructions+=1;goto B44dbbf;
case 0x44dbc6:goto L44dbc6;
case 0x44dbcc:c.instructions+=5;goto B44dbcc;
case 0x44dbcf:c.instructions+=4;goto B44dbcf;
case 0x44dbd0:c.instructions+=3;goto B44dbd0;
case 0x44dbd4:c.instructions+=2;goto B44dbd4;
case 0x44dbd5:c.instructions+=1;goto B44dbd5;
case 0x44dbda:goto L44dbda;
case 0x44dbe1:c.instructions+=7;goto B44dbe1;
case 0x44dbe2:c.instructions+=6;goto B44dbe2;
case 0x44dbe3:c.instructions+=5;goto B44dbe3;
case 0x44dbea:c.instructions+=4;goto B44dbea;
case 0x44dbeb:c.instructions+=3;goto B44dbeb;
case 0x44dbed:c.instructions+=2;goto B44dbed;
case 0x44dbee:c.instructions+=1;goto B44dbee;
case 0x44dbf0:goto L44dbf0;
case 0x44dbf2:c.instructions+=12;goto B44dbf2;
case 0x44dbf7:c.instructions+=11;goto B44dbf7;
case 0x44dbfd:c.instructions+=10;goto B44dbfd;
case 0x44dbfe:c.instructions+=9;goto B44dbfe;
case 0x44dc05:c.instructions+=8;goto B44dc05;
case 0x44dc06:c.instructions+=7;goto B44dc06;
case 0x44dc0a:c.instructions+=6;goto B44dc0a;
case 0x44dc0b:c.instructions+=5;goto B44dc0b;
case 0x44dc0d:c.instructions+=4;goto B44dc0d;
case 0x44dc0f:c.instructions+=3;goto B44dc0f;
case 0x44dc10:c.instructions+=2;goto B44dc10;
case 0x44dc14:c.instructions+=1;goto B44dc14;
case 0x44dc19:goto L44dc19;
case 0x44dc1c:c.instructions+=5;goto B44dc1c;
case 0x44dc1f:c.instructions+=4;goto B44dc1f;
case 0x44dc20:c.instructions+=3;goto B44dc20;
case 0x44dc28:c.instructions+=2;goto B44dc28;
case 0x44dc2e:c.instructions+=1;goto B44dc2e;
case 0x44dc33:goto L44dc33;
case 0x44dc37:c.instructions+=6;goto B44dc37;
case 0x44dc3a:c.instructions+=5;goto B44dc3a;
case 0x44dc3c:c.instructions+=4;goto B44dc3c;
case 0x44dc3d:c.instructions+=3;goto B44dc3d;
case 0x44dc44:c.instructions+=2;goto B44dc44;
case 0x44dc47:c.instructions+=1;goto B44dc47;
case 0x44dc50:goto L44dc50;
case 0x44dc52:c.instructions+=11;goto B44dc52;
case 0x44dc57:c.instructions+=10;goto B44dc57;
case 0x44dc5d:c.instructions+=9;goto B44dc5d;
case 0x44dc5e:c.instructions+=8;goto B44dc5e;
case 0x44dc65:c.instructions+=7;goto B44dc65;
case 0x44dc66:c.instructions+=6;goto B44dc66;
case 0x44dc67:c.instructions+=5;goto B44dc67;
case 0x44dc69:c.instructions+=4;goto B44dc69;
case 0x44dc6d:c.instructions+=3;goto B44dc6d;
case 0x44dc73:c.instructions+=2;goto B44dc73;
case 0x44dc7b:c.instructions+=1;goto B44dc7b;
case 0x44dc80:goto L44dc80;
case 0x44dc83:c.instructions+=4;goto B44dc83;
case 0x44dc85:c.instructions+=3;goto B44dc85;
case 0x44dc8d:c.instructions+=2;goto B44dc8d;
case 0x44dc93:c.instructions+=1;goto B44dc93;
case 0x44dc95:goto L44dc95;
case 0x44dc98:c.instructions+=8;goto B44dc98;
case 0x44dc9f:c.instructions+=7;goto B44dc9f;
case 0x44dca5:c.instructions+=6;goto B44dca5;
case 0x44dca8:c.instructions+=5;goto B44dca8;
case 0x44dcae:c.instructions+=4;goto B44dcae;
case 0x44dcb1:c.instructions+=3;goto B44dcb1;
case 0x44dcb2:c.instructions+=2;goto B44dcb2;
case 0x44dcb5:c.instructions+=1;goto B44dcb5;
case 0x44dcba:goto L44dcba;
case 0x44dcbe:c.instructions+=2;goto B44dcbe;
case 0x44dcbf:c.instructions+=1;goto B44dcbf;
case 0x44dcc1:goto L44dcc1;
case 0x44dcc7:goto L44dcc7;
case 0x44dccb:c.instructions+=3;goto B44dccb;
case 0x44dcd2:c.instructions+=2;goto B44dcd2;
case 0x44dcd5:c.instructions+=1;goto B44dcd5;
case 0x44dce0:goto L44dce0;
case 0x44dce1:c.instructions+=10;goto B44dce1;
case 0x44dce3:c.instructions+=9;goto B44dce3;
case 0x44dce6:c.instructions+=8;goto B44dce6;
case 0x44dcec:c.instructions+=7;goto B44dcec;
case 0x44dced:c.instructions+=6;goto B44dced;
case 0x44dcf1:c.instructions+=5;goto B44dcf1;
case 0x44dcf3:c.instructions+=4;goto B44dcf3;
case 0x44dcf4:c.instructions+=3;goto B44dcf4;
case 0x44dcf8:c.instructions+=2;goto B44dcf8;
case 0x44dcf9:c.instructions+=1;goto B44dcf9;
case 0x44dcfe:goto L44dcfe;
case 0x44dd01:c.instructions+=2;goto B44dd01;
case 0x44dd03:c.instructions+=1;goto B44dd03;
case 0x44dd09:goto L44dd09;
case 0x44dd0d:c.instructions+=26;goto B44dd0d;
case 0x44dd11:c.instructions+=25;goto B44dd11;
case 0x44dd15:c.instructions+=24;goto B44dd15;
case 0x44dd19:c.instructions+=23;goto B44dd19;
case 0x44dd1d:c.instructions+=22;goto B44dd1d;
case 0x44dd21:c.instructions+=21;goto B44dd21;
case 0x44dd25:c.instructions+=20;goto B44dd25;
case 0x44dd29:c.instructions+=19;goto B44dd29;
case 0x44dd2d:c.instructions+=18;goto B44dd2d;
case 0x44dd31:c.instructions+=17;goto B44dd31;
case 0x44dd32:c.instructions+=16;goto B44dd32;
case 0x44dd36:c.instructions+=15;goto B44dd36;
case 0x44dd3a:c.instructions+=14;goto B44dd3a;
case 0x44dd3e:c.instructions+=13;goto B44dd3e;
case 0x44dd42:c.instructions+=12;goto B44dd42;
case 0x44dd46:c.instructions+=11;goto B44dd46;
case 0x44dd4a:c.instructions+=10;goto B44dd4a;
case 0x44dd4b:c.instructions+=9;goto B44dd4b;
case 0x44dd4f:c.instructions+=8;goto B44dd4f;
case 0x44dd50:c.instructions+=7;goto B44dd50;
case 0x44dd54:c.instructions+=6;goto B44dd54;
case 0x44dd58:c.instructions+=5;goto B44dd58;
case 0x44dd59:c.instructions+=4;goto B44dd59;
case 0x44dd61:c.instructions+=3;goto B44dd61;
case 0x44dd69:c.instructions+=2;goto B44dd69;
case 0x44dd71:c.instructions+=1;goto B44dd71;
case 0x44dd76:goto L44dd76;
case 0x44dd7b:c.instructions+=6;goto B44dd7b;
case 0x44dd7e:c.instructions+=5;goto B44dd7e;
case 0x44dd7f:c.instructions+=4;goto B44dd7f;
case 0x44dd83:c.instructions+=3;goto B44dd83;
case 0x44dd84:c.instructions+=2;goto B44dd84;
case 0x44dd87:c.instructions+=1;goto B44dd87;
case 0x44dd8c:goto L44dd8c;
case 0x44dd8d:c.instructions+=3;goto B44dd8d;
case 0x44dd8f:c.instructions+=2;goto B44dd8f;
case 0x44dd90:c.instructions+=1;goto B44dd90;
case 0x44dda0:goto L44dda0;
case 0x44dda2:c.instructions+=13;goto B44dda2;
case 0x44dda7:c.instructions+=12;goto B44dda7;
case 0x44ddad:c.instructions+=11;goto B44ddad;
case 0x44ddae:c.instructions+=10;goto B44ddae;
case 0x44ddb5:c.instructions+=9;goto B44ddb5;
case 0x44ddb6:c.instructions+=8;goto B44ddb6;
case 0x44ddb7:c.instructions+=7;goto B44ddb7;
case 0x44ddb9:c.instructions+=6;goto B44ddb9;
case 0x44ddbd:c.instructions+=5;goto B44ddbd;
case 0x44ddc3:c.instructions+=4;goto B44ddc3;
case 0x44ddc6:c.instructions+=3;goto B44ddc6;
case 0x44ddc7:c.instructions+=2;goto B44ddc7;
case 0x44ddcf:c.instructions+=1;goto B44ddcf;
case 0x44ddd4:goto L44ddd4;
case 0x44ddd7:c.instructions+=2;goto B44ddd7;
case 0x44ddd8:c.instructions+=1;goto B44ddd8;
case 0x44dddd:goto L44dddd;
case 0x44dde0:c.instructions+=2;goto B44dde0;
case 0x44dde1:c.instructions+=1;goto B44dde1;
case 0x44dde6:goto L44dde6;
case 0x44dde9:c.instructions+=2;goto B44dde9;
case 0x44ddea:c.instructions+=1;goto B44ddea;
case 0x44ddef:goto L44ddef;
case 0x44ddf2:c.instructions+=2;goto B44ddf2;
case 0x44ddf3:c.instructions+=1;goto B44ddf3;
case 0x44ddf8:goto L44ddf8;
case 0x44ddfb:c.instructions+=3;goto B44ddfb;
case 0x44ddfe:c.instructions+=2;goto B44ddfe;
case 0x44de00:c.instructions+=1;goto B44de00;
case 0x44de02:goto L44de02;
case 0x44de04:c.instructions+=2;goto B44de04;
case 0x44de06:c.instructions+=1;goto B44de06;
case 0x44de08:goto L44de08;
case 0x44de0b:c.instructions+=4;goto B44de0b;
case 0x44de0d:c.instructions+=3;goto B44de0d;
case 0x44de15:c.instructions+=2;goto B44de15;
case 0x44de1b:c.instructions+=1;goto B44de1b;
case 0x44de1d:goto L44de1d;
case 0x44de20:c.instructions+=8;goto B44de20;
case 0x44de27:c.instructions+=7;goto B44de27;
case 0x44de2d:c.instructions+=6;goto B44de2d;
case 0x44de30:c.instructions+=5;goto B44de30;
case 0x44de36:c.instructions+=4;goto B44de36;
case 0x44de39:c.instructions+=3;goto B44de39;
case 0x44de3a:c.instructions+=2;goto B44de3a;
case 0x44de3d:c.instructions+=1;goto B44de3d;
case 0x44de42:goto L44de42;
case 0x44de46:c.instructions+=2;goto B44de46;
case 0x44de47:c.instructions+=1;goto B44de47;
case 0x44de49:goto L44de49;
case 0x44de4f:goto L44de4f;
case 0x44de53:c.instructions+=3;goto B44de53;
case 0x44de5a:c.instructions+=2;goto B44de5a;
case 0x44de5d:c.instructions+=1;goto B44de5d;
case 0x44de60:goto L44de60;
case 0x44de64:c.instructions+=4;goto B44de64;
case 0x44de66:c.instructions+=3;goto B44de66;
case 0x44de69:c.instructions+=2;goto B44de69;
case 0x44de6c:c.instructions+=1;goto B44de6c;
case 0x44de70:goto L44de70;
case 0x44de73:c.instructions+=4;goto B44de73;
case 0x44de75:c.instructions+=3;goto B44de75;
case 0x44de77:c.instructions+=2;goto B44de77;
case 0x44de7c:c.instructions+=1;goto B44de7c;
case 0x44de80:goto L44de80;
case 0x44de83:c.instructions+=1;goto B44de83;
case 0x44de90:goto L44de90;
case 0x44de91:c.instructions+=12;goto B44de91;
case 0x44de93:c.instructions+=11;goto B44de93;
case 0x44de96:c.instructions+=10;goto B44de96;
case 0x44de9c:c.instructions+=9;goto B44de9c;
case 0x44de9f:c.instructions+=8;goto B44de9f;
case 0x44dea0:c.instructions+=7;goto B44dea0;
case 0x44dea1:c.instructions+=6;goto B44dea1;
case 0x44dea2:c.instructions+=5;goto B44dea2;
case 0x44dea5:c.instructions+=4;goto B44dea5;
case 0x44dea6:c.instructions+=3;goto B44dea6;
case 0x44dea7:c.instructions+=2;goto B44dea7;
case 0x44dea9:c.instructions+=1;goto B44dea9;
case 0x44deae:goto L44deae;
case 0x44deb1:c.instructions+=3;goto B44deb1;
case 0x44deb2:c.instructions+=2;goto B44deb2;
case 0x44deb4:c.instructions+=1;goto B44deb4;
case 0x44deb9:goto L44deb9;
case 0x44debd:c.instructions+=3;goto B44debd;
case 0x44debe:c.instructions+=2;goto B44debe;
case 0x44debf:c.instructions+=1;goto B44debf;
case 0x44dec4:goto L44dec4;
case 0x44dec7:c.instructions+=8;goto B44dec7;
case 0x44dec9:c.instructions+=7;goto B44dec9;
case 0x44decc:c.instructions+=6;goto B44decc;
case 0x44dece:c.instructions+=5;goto B44dece;
case 0x44ded6:c.instructions+=4;goto B44ded6;
case 0x44dede:c.instructions+=3;goto B44dede;
case 0x44dee6:c.instructions+=2;goto B44dee6;
case 0x44deee:c.instructions+=1;goto B44deee;
case 0x44def0:goto L44def0;
case 0x44def3:c.instructions+=16;goto B44def3;
case 0x44def6:c.instructions+=15;goto B44def6;
case 0x44def9:c.instructions+=14;goto B44def9;
case 0x44defc:c.instructions+=13;goto B44defc;
case 0x44deff:c.instructions+=12;goto B44deff;
case 0x44df03:c.instructions+=11;goto B44df03;
case 0x44df05:c.instructions+=10;goto B44df05;
case 0x44df06:c.instructions+=9;goto B44df06;
case 0x44df0a:c.instructions+=8;goto B44df0a;
case 0x44df0e:c.instructions+=7;goto B44df0e;
case 0x44df12:c.instructions+=6;goto B44df12;
case 0x44df16:c.instructions+=5;goto B44df16;
case 0x44df17:c.instructions+=4;goto B44df17;
case 0x44df1b:c.instructions+=3;goto B44df1b;
case 0x44df1c:c.instructions+=2;goto B44df1c;
case 0x44df20:c.instructions+=1;goto B44df20;
case 0x44df25:goto L44df25;
case 0x44df28:goto L44df28;
case 0x44df2b:c.instructions+=2;goto B44df2b;
case 0x44df31:c.instructions+=1;goto B44df31;
case 0x44df33:goto L44df33;
case 0x44df3a:c.instructions+=1;goto B44df3a;
case 0x44df3c:goto L44df3c;
case 0x44df41:c.instructions+=1;goto B44df41;
case 0x44df44:goto L44df44;
case 0x44df45:c.instructions+=6;goto B44df45;
case 0x44df49:c.instructions+=5;goto B44df49;
case 0x44df4a:c.instructions+=4;goto B44df4a;
case 0x44df4e:c.instructions+=3;goto B44df4e;
case 0x44df4f:c.instructions+=2;goto B44df4f;
case 0x44df51:c.instructions+=1;goto B44df51;
case 0x44df56:goto L44df56;
case 0x44df5a:c.instructions+=2;goto B44df5a;
case 0x44df5b:c.instructions+=1;goto B44df5b;
case 0x44df60:goto L44df60;
case 0x44df64:c.instructions+=2;goto B44df64;
case 0x44df65:c.instructions+=1;goto B44df65;
case 0x44df6a:goto L44df6a;
case 0x44df6e:c.instructions+=5;goto B44df6e;
case 0x44df71:c.instructions+=4;goto B44df71;
case 0x44df74:c.instructions+=3;goto B44df74;
case 0x44df77:c.instructions+=2;goto B44df77;
case 0x44df7b:c.instructions+=1;goto B44df7b;
case 0x44df7d:goto L44df7d;
case 0x44df80:c.instructions+=1;goto B44df80;
case 0x44df82:goto L44df82;
case 0x44df86:c.instructions+=1;goto B44df86;
case 0x44df88:goto L44df88;
case 0x44df8c:c.instructions+=6;goto B44df8c;
case 0x44df94:c.instructions+=5;goto B44df94;
case 0x44df96:c.instructions+=4;goto B44df96;
case 0x44df9a:c.instructions+=3;goto B44df9a;
case 0x44df9e:c.instructions+=2;goto B44df9e;
case 0x44dfa0:c.instructions+=1;goto B44dfa0;
case 0x44dfa2:goto L44dfa2;
case 0x44dfa6:c.instructions+=6;goto B44dfa6;
case 0x44dfa8:c.instructions+=5;goto B44dfa8;
case 0x44dfac:c.instructions+=4;goto B44dfac;
case 0x44dfae:c.instructions+=3;goto B44dfae;
case 0x44dfb2:c.instructions+=2;goto B44dfb2;
case 0x44dfb8:c.instructions+=1;goto B44dfb8;
case 0x44dfbc:goto L44dfbc;
case 0x44dfbf:c.instructions+=16;goto B44dfbf;
case 0x44dfc3:c.instructions+=15;goto B44dfc3;
case 0x44dfc6:c.instructions+=14;goto B44dfc6;
case 0x44dfc9:c.instructions+=13;goto B44dfc9;
case 0x44dfca:c.instructions+=12;goto B44dfca;
case 0x44dfcd:c.instructions+=11;goto B44dfcd;
case 0x44dfd1:c.instructions+=10;goto B44dfd1;
case 0x44dfd5:c.instructions+=9;goto B44dfd5;
case 0x44dfd6:c.instructions+=8;goto B44dfd6;
case 0x44dfd9:c.instructions+=7;goto B44dfd9;
case 0x44dfdd:c.instructions+=6;goto B44dfdd;
case 0x44dfde:c.instructions+=5;goto B44dfde;
case 0x44dfe2:c.instructions+=4;goto B44dfe2;
case 0x44dfe6:c.instructions+=3;goto B44dfe6;
case 0x44dfe9:c.instructions+=2;goto B44dfe9;
case 0x44dfed:c.instructions+=1;goto B44dfed;
case 0x44dff2:goto L44dff2;
case 0x44dff4:c.instructions+=3;goto B44dff4;
case 0x44dff7:c.instructions+=2;goto B44dff7;
case 0x44dff9:c.instructions+=1;goto B44dff9;
case 0x44dffc:goto L44dffc;
case 0x44dffe:c.instructions+=1;goto B44dffe;
default:missing_instruction(c.pc);}
B44d000:L44d000:{c.instructions+=48;NFSU2_TR(0x44d000);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d004:{NFSU2_TR(0x44d004);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44d008:{NFSU2_TR(0x44d008);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44d00a:{NFSU2_TR(0x44d00a);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d010:{NFSU2_TR(0x44d010);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d016:{NFSU2_TR(0x44d016);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d01c:{NFSU2_TR(0x44d01c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44d01e:{NFSU2_TR(0x44d01e);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d024:{NFSU2_TR(0x44d024);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44d02a:{NFSU2_TR(0x44d02a);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d030:{NFSU2_TR(0x44d030);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44d036:{NFSU2_TR(0x44d036);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d03c:{NFSU2_TR(0x44d03c);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44d042:{NFSU2_TR(0x44d042);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d046:{NFSU2_TR(0x44d046);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44d048:{NFSU2_TR(0x44d048);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B44d04a:{NFSU2_TR(0x44d04a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d04e:{NFSU2_TR(0x44d04e);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B44d050:{NFSU2_TR(0x44d050);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d054:{NFSU2_TR(0x44d054);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d058:{NFSU2_TR(0x44d058);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B44d05a:{NFSU2_TR(0x44d05a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d05e:{NFSU2_TR(0x44d05e);
{u32 ea_=u32(r4(R+24)+u32(224u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44d064:{NFSU2_TR(0x44d064);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d06a:{NFSU2_TR(0x44d06a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44d06e:{NFSU2_TR(0x44d06e);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d074:{NFSU2_TR(0x44d074);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B44d076:{NFSU2_TR(0x44d076);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d07a:{NFSU2_TR(0x44d07a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44d07e:{NFSU2_TR(0x44d07e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44d080:{NFSU2_TR(0x44d080);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d086:{NFSU2_TR(0x44d086);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d08c:{NFSU2_TR(0x44d08c);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d092:{NFSU2_TR(0x44d092);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44d095:{NFSU2_TR(0x44d095);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44d097:{NFSU2_TR(0x44d097);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44d099:{NFSU2_TR(0x44d099);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B44d09b:{NFSU2_TR(0x44d09b);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d0a1:{NFSU2_TR(0x44d0a1);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B44d0a3:{NFSU2_TR(0x44d0a3);
{u32 ea_=u32(r4(R+24)+u32(304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d0a9:{NFSU2_TR(0x44d0a9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44d0ab:{NFSU2_TR(0x44d0ab);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d0b1:{NFSU2_TR(0x44d0b1);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d0b7:{NFSU2_TR(0x44d0b7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44d0b9:{NFSU2_TR(0x44d0b9);
{u32 ea_=u32(r4(R+24)+u32(308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d0bf:{NFSU2_TR(0x44d0bf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44d0c1:{NFSU2_TR(0x44d0c1);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d0c7:{NFSU2_TR(0x44d0c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44d0ff;}}
}
B44d0c9:L44d0c9:{c.instructions+=5;NFSU2_TR(0x44d0c9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d0cd:{NFSU2_TR(0x44d0cd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44d0d3:{NFSU2_TR(0x44d0d3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44d0d5:{NFSU2_TR(0x44d0d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44d0d8:{NFSU2_TR(0x44d0d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44d0ff;}}
}
B44d0da:L44d0da:{c.instructions+=4;NFSU2_TR(0x44d0da);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44d0e0:{NFSU2_TR(0x44d0e0);
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
B44d0e2:{NFSU2_TR(0x44d0e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44d0e9:{NFSU2_TR(0x44d0e9);
if(r1(R+518)){{goto L44d0ff;}}
}
B44d0eb:L44d0eb:{c.instructions+=4;NFSU2_TR(0x44d0eb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d0ec:{NFSU2_TR(0x44d0ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44d0ef:{NFSU2_TR(0x44d0ef);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B44d0f6:{NFSU2_TR(0x44d0f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d0fbull));
TAIL_STATIC(0x444d70u,444);
}
B44d0fb:L44d0fb:{c.instructions+=1;NFSU2_TR(0x44d0fb);
{goto L44d0ff;}
}
B44d0fd:L44d0fd:{c.instructions+=1;NFSU2_TR(0x44d0fd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44d0ff:L44d0ff:{c.instructions+=4;NFSU2_TR(0x44d0ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44d103:{NFSU2_TR(0x44d103);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d104:{NFSU2_TR(0x44d104);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d105:{NFSU2_TR(0x44d105);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d10aull));
TAIL_STATIC(0x444de0u,444);
}
B44d10a:L44d10a:{c.instructions+=4;NFSU2_TR(0x44d10a);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44d10f:{NFSU2_TR(0x44d10f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44d112:{NFSU2_TR(0x44d112);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44d114:{NFSU2_TR(0x44d114);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44d16c;}}
}
B44d116:L44d116:{c.instructions+=3;NFSU2_TR(0x44d116);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d118:{NFSU2_TR(0x44d118);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d11e:{NFSU2_TR(0x44d11e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d123ull));
TAIL_STATIC(0x75bed4u,75b);
}
B44d123:L44d123:{c.instructions+=13;NFSU2_TR(0x44d123);
__builtin_memmove((R+4),(R+0),4);
}
B44d125:{NFSU2_TR(0x44d125);
w4(R+0,u32(0xb60b60b7ull));
}
B44d12a:{NFSU2_TR(0x44d12a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B44d12c:{NFSU2_TR(0x44d12c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44d12f:{NFSU2_TR(0x44d12f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B44d131:{NFSU2_TR(0x44d131);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B44d134:{NFSU2_TR(0x44d134);
__builtin_memmove((R+4),(R+8),4);
}
B44d136:{NFSU2_TR(0x44d136);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B44d139:{NFSU2_TR(0x44d139);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B44d13b:{NFSU2_TR(0x44d13b);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44d142:{NFSU2_TR(0x44d142);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44d147:{NFSU2_TR(0x44d147);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44d149:{NFSU2_TR(0x44d149);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44d16c;}}
}
B44d14b:L44d14b:{c.instructions+=6;NFSU2_TR(0x44d14b);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d14e:{NFSU2_TR(0x44d14e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44d151:{NFSU2_TR(0x44d151);
{u32 ea_=u32(r4(R+4)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d157:{NFSU2_TR(0x44d157);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44d15c:{NFSU2_TR(0x44d15c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44d15e:{NFSU2_TR(0x44d15e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44d16c;}}
}
B44d160:L44d160:{c.instructions+=3;NFSU2_TR(0x44d160);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d163:{NFSU2_TR(0x44d163);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44d166:{NFSU2_TR(0x44d166);
{u32 ea_=u32(r4(R+8)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d16c:L44d16c:{c.instructions+=6;NFSU2_TR(0x44d16c);
__builtin_memmove((R+0),gp(0x865198),4);
}
B44d171:{NFSU2_TR(0x44d171);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d172:{NFSU2_TR(0x44d172);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44d176:{NFSU2_TR(0x44d176);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d177:{NFSU2_TR(0x44d177);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44d17a:{NFSU2_TR(0x44d17a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d17full));
TAIL_STATIC(0x447280u,447);
}
B44d17f:L44d17f:{c.instructions+=5;NFSU2_TR(0x44d17f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44d180:{NFSU2_TR(0x44d180);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44d181:{NFSU2_TR(0x44d181);
__builtin_memmove((R+16),(R+20),4);
}
B44d183:{NFSU2_TR(0x44d183);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44d184:{NFSU2_TR(0x44d184);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44d190:L44d190:{c.instructions+=12;NFSU2_TR(0x44d190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B44d193:{NFSU2_TR(0x44d193);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d197:{NFSU2_TR(0x44d197);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d198:{NFSU2_TR(0x44d198);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44d19c:{NFSU2_TR(0x44d19c);
__builtin_memmove((R+24),(R+4),4);
}
B44d19e:{NFSU2_TR(0x44d19e);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B44d1a0:{NFSU2_TR(0x44d1a0);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d1a4:{NFSU2_TR(0x44d1a4);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d1aa:{NFSU2_TR(0x44d1aa);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44d1b0:{NFSU2_TR(0x44d1b0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44d1b2:{NFSU2_TR(0x44d1b2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44d1b5:{NFSU2_TR(0x44d1b5);
if(r1(R+514)){{goto L44d1c1;}}
}
B44d1b7:L44d1b7:{c.instructions+=2;NFSU2_TR(0x44d1b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44d1bf:{NFSU2_TR(0x44d1bf);
{goto L44d1f2;}
}
B44d1c1:L44d1c1:{c.instructions+=6;NFSU2_TR(0x44d1c1);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B44d1c7:{NFSU2_TR(0x44d1c7);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B44d1c9:{NFSU2_TR(0x44d1c9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44d1cf:{NFSU2_TR(0x44d1cf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44d1d1:{NFSU2_TR(0x44d1d1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44d1d4:{NFSU2_TR(0x44d1d4);
if(r1(R+514)){{goto L44d1e0;}}
}
B44d1d6:L44d1d6:{c.instructions+=2;NFSU2_TR(0x44d1d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44d1de:{NFSU2_TR(0x44d1de);
{goto L44d1f2;}
}
B44d1e0:L44d1e0:{c.instructions+=4;NFSU2_TR(0x44d1e0);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d1e6:{NFSU2_TR(0x44d1e6);
{u32 ea_=u32(u32(7893276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d1ec:{NFSU2_TR(0x44d1ec);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B44d1ee:{NFSU2_TR(0x44d1ee);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d1f2:L44d1f2:{c.instructions+=6;NFSU2_TR(0x44d1f2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44d1f4:{NFSU2_TR(0x44d1f4);
{u32 ea_=u32(r4(R+24)+u32(304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d1fa:{NFSU2_TR(0x44d1fa);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44d200:{NFSU2_TR(0x44d200);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44d202:{NFSU2_TR(0x44d202);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44d205:{NFSU2_TR(0x44d205);
if(r1(R+514)){{goto L44d211;}}
}
B44d207:L44d207:{c.instructions+=2;NFSU2_TR(0x44d207);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44d20f:{NFSU2_TR(0x44d20f);
{goto L44d242;}
}
B44d211:L44d211:{c.instructions+=6;NFSU2_TR(0x44d211);
{u32 ea_=u32(r4(R+24)+u32(240u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B44d217:{NFSU2_TR(0x44d217);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B44d219:{NFSU2_TR(0x44d219);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44d21f:{NFSU2_TR(0x44d21f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44d221:{NFSU2_TR(0x44d221);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44d224:{NFSU2_TR(0x44d224);
if(r1(R+514)){{goto L44d230;}}
}
B44d226:L44d226:{c.instructions+=2;NFSU2_TR(0x44d226);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44d22e:{NFSU2_TR(0x44d22e);
{goto L44d242;}
}
B44d230:L44d230:{c.instructions+=4;NFSU2_TR(0x44d230);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d236:{NFSU2_TR(0x44d236);
{u32 ea_=u32(u32(7893276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d23c:{NFSU2_TR(0x44d23c);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B44d23e:{NFSU2_TR(0x44d23e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d242:L44d242:{c.instructions+=6;NFSU2_TR(0x44d242);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44d244:{NFSU2_TR(0x44d244);
{u32 ea_=u32(r4(R+24)+u32(308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d24a:{NFSU2_TR(0x44d24a);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44d250:{NFSU2_TR(0x44d250);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44d252:{NFSU2_TR(0x44d252);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44d255:{NFSU2_TR(0x44d255);
if(r1(R+514)){{goto L44d261;}}
}
B44d257:L44d257:{c.instructions+=2;NFSU2_TR(0x44d257);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44d25f:{NFSU2_TR(0x44d25f);
{goto L44d292;}
}
B44d261:L44d261:{c.instructions+=6;NFSU2_TR(0x44d261);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B44d267:{NFSU2_TR(0x44d267);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B44d269:{NFSU2_TR(0x44d269);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B44d26f:{NFSU2_TR(0x44d26f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44d271:{NFSU2_TR(0x44d271);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44d274:{NFSU2_TR(0x44d274);
if(r1(R+514)){{goto L44d280;}}
}
B44d276:L44d276:{c.instructions+=2;NFSU2_TR(0x44d276);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44d27e:{NFSU2_TR(0x44d27e);
{goto L44d292;}
}
B44d280:L44d280:{c.instructions+=4;NFSU2_TR(0x44d280);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d286:{NFSU2_TR(0x44d286);
{u32 ea_=u32(u32(7893276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d28c:{NFSU2_TR(0x44d28c);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B44d28e:{NFSU2_TR(0x44d28e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d292:L44d292:{c.instructions+=11;NFSU2_TR(0x44d292);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44d294:{NFSU2_TR(0x44d294);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d295:{NFSU2_TR(0x44d295);
{u32 ea_=u32(u32(8304100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d29b:{NFSU2_TR(0x44d29b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+0),(U+0),4);
}
B44d2a1:{NFSU2_TR(0x44d2a1);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d2a7:{NFSU2_TR(0x44d2a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44d2ad:{NFSU2_TR(0x44d2ad);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d2b0:{NFSU2_TR(0x44d2b0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d2b1:{NFSU2_TR(0x44d2b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d2b2:{NFSU2_TR(0x44d2b2);
__builtin_memmove((R+4),(R+24),4);
}
B44d2b4:{NFSU2_TR(0x44d2b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d2b9ull));
TAIL_STATIC(0x4455d0u,445);
}
B44d2b9:L44d2b9:{c.instructions+=11;NFSU2_TR(0x44d2b9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d2bd:{NFSU2_TR(0x44d2bd);
{u32 ea_=u32(u32(8304100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d2c3:{NFSU2_TR(0x44d2c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d2c4:{NFSU2_TR(0x44d2c4);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d2ca:{NFSU2_TR(0x44d2ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+8),(U+0),4);
}
B44d2d0:{NFSU2_TR(0x44d2d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B44d2d6:{NFSU2_TR(0x44d2d6);
__builtin_memmove((R+4),(R+24),4);
}
B44d2d8:{NFSU2_TR(0x44d2d8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d2db:{NFSU2_TR(0x44d2db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d2dc:{NFSU2_TR(0x44d2dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d2dd:{NFSU2_TR(0x44d2dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d2e2ull));
TAIL_STATIC(0x4455d0u,445);
}
B44d2e2:L44d2e2:{c.instructions+=7;NFSU2_TR(0x44d2e2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d2e6:{NFSU2_TR(0x44d2e6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d2ea:{NFSU2_TR(0x44d2ea);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d2ee:{NFSU2_TR(0x44d2ee);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44d2f2:{NFSU2_TR(0x44d2f2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44d2f4:{NFSU2_TR(0x44d2f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44d2f7:{NFSU2_TR(0x44d2f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44d2ff;}}
}
B44d2f9:L44d2f9:{c.instructions+=2;NFSU2_TR(0x44d2f9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44d2fb:{NFSU2_TR(0x44d2fb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d2ff:L44d2ff:{c.instructions+=5;NFSU2_TR(0x44d2ff);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d303:{NFSU2_TR(0x44d303);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B44d305:{NFSU2_TR(0x44d305);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44d307:{NFSU2_TR(0x44d307);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44d30a:{NFSU2_TR(0x44d30a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44d312;}}
}
B44d30c:L44d30c:{c.instructions+=2;NFSU2_TR(0x44d30c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44d30e:{NFSU2_TR(0x44d30e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d312:L44d312:{c.instructions+=5;NFSU2_TR(0x44d312);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d316:{NFSU2_TR(0x44d316);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B44d318:{NFSU2_TR(0x44d318);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44d31a:{NFSU2_TR(0x44d31a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44d31d:{NFSU2_TR(0x44d31d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44d325;}}
}
B44d31f:L44d31f:{c.instructions+=2;NFSU2_TR(0x44d31f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44d321:{NFSU2_TR(0x44d321);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d325:L44d325:{c.instructions+=5;NFSU2_TR(0x44d325);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d329:{NFSU2_TR(0x44d329);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B44d32b:{NFSU2_TR(0x44d32b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44d32d:{NFSU2_TR(0x44d32d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44d330:{NFSU2_TR(0x44d330);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44d338;}}
}
B44d332:L44d332:{c.instructions+=2;NFSU2_TR(0x44d332);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44d334:{NFSU2_TR(0x44d334);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d338:L44d338:{c.instructions+=5;NFSU2_TR(0x44d338);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d33c:{NFSU2_TR(0x44d33c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B44d33e:{NFSU2_TR(0x44d33e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44d340:{NFSU2_TR(0x44d340);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44d343:{NFSU2_TR(0x44d343);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44d34b;}}
}
B44d345:L44d345:{c.instructions+=2;NFSU2_TR(0x44d345);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44d347:{NFSU2_TR(0x44d347);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d34b:L44d34b:{c.instructions+=7;NFSU2_TR(0x44d34b);
{u32 ea_=u32(u32(7893260u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d351:{NFSU2_TR(0x44d351);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44d35b:{NFSU2_TR(0x44d35b);
{u32 ea_=u32(r4(R+24)+u32(332u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B44d361:{NFSU2_TR(0x44d361);
{u32 ea_=u32(r4(R+24)+u32(336u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44d367:{NFSU2_TR(0x44d367);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44d369:{NFSU2_TR(0x44d369);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44d36c:{NFSU2_TR(0x44d36c);
if(r1(R+514)){{goto L44d37a;}}
}
B44d36e:L44d36e:{c.instructions+=2;NFSU2_TR(0x44d36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44d374:{NFSU2_TR(0x44d374);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d37a:L44d37a:{c.instructions+=3;NFSU2_TR(0x44d37a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44d37b:{NFSU2_TR(0x44d37b);
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
B44d37e:{NFSU2_TR(0x44d37e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44d390:L44d390:{c.instructions+=12;NFSU2_TR(0x44d390);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d392:{NFSU2_TR(0x44d392);
u8 U[4];
w4(U+0,u32(0x772068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d397:{NFSU2_TR(0x44d397);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44d39d:{NFSU2_TR(0x44d39d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d39e:{NFSU2_TR(0x44d39e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d3a5:{NFSU2_TR(0x44d3a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d3a6:{NFSU2_TR(0x44d3a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d3a7:{NFSU2_TR(0x44d3a7);
__builtin_memmove((R+24),(R+4),4);
}
B44d3a9:{NFSU2_TR(0x44d3a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d3ad:{NFSU2_TR(0x44d3ad);
u8 U[4];
w4(U+0,u32(0x787e88ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44d3b3:{NFSU2_TR(0x44d3b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44d3bb:{NFSU2_TR(0x44d3bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d3c0ull));
TAIL_STATIC(0x445650u,445);
}
B44d3c0:L44d3c0:{c.instructions+=5;NFSU2_TR(0x44d3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44d3c3:{NFSU2_TR(0x44d3c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44d3c5:{NFSU2_TR(0x44d3c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B44d3cd:{NFSU2_TR(0x44d3cd);
u8 U[4];
w4(U+0,u32(0x787cf0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44d3d3:{NFSU2_TR(0x44d3d3);
if(r1(R+518)){{goto L44d3fa;}}
}
B44d3d5:L44d3d5:{c.instructions+=9;NFSU2_TR(0x44d3d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44d3d8:{NFSU2_TR(0x44d3d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44d3df:{NFSU2_TR(0x44d3df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44d3e5:{NFSU2_TR(0x44d3e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d3e8:{NFSU2_TR(0x44d3e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44d3ee:{NFSU2_TR(0x44d3ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44d3f1:{NFSU2_TR(0x44d3f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d3f2:{NFSU2_TR(0x44d3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d3f5:{NFSU2_TR(0x44d3f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d3faull));
TAIL_STATIC(0x48f760u,48f);
}
B44d3fa:L44d3fa:{c.instructions+=3;NFSU2_TR(0x44d3fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44d3fe:{NFSU2_TR(0x44d3fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44d3ff:{NFSU2_TR(0x44d3ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44d407;}}
}
B44d401:L44d401:{c.instructions+=1;NFSU2_TR(0x44d401);
s4(0x883dfc,u32(u32(m4(0x883dfc))-u32(u32(0x1ull))));
}
B44d407:L44d407:{c.instructions+=4;NFSU2_TR(0x44d407);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44d40b:{NFSU2_TR(0x44d40b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d412:{NFSU2_TR(0x44d412);
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
B44d415:{NFSU2_TR(0x44d415);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44d420:L44d420:{c.instructions+=17;NFSU2_TR(0x44d420);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d421:{NFSU2_TR(0x44d421);
__builtin_memmove((R+20),(R+16),4);
}
B44d423:{NFSU2_TR(0x44d423);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B44d426:{NFSU2_TR(0x44d426);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d428:{NFSU2_TR(0x44d428);
u8 U[4];
w4(U+0,u32(0x77224bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d42d:{NFSU2_TR(0x44d42d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44d433:{NFSU2_TR(0x44d433);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d434:{NFSU2_TR(0x44d434);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d43b:{NFSU2_TR(0x44d43b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x398ull))));
}
B44d441:{NFSU2_TR(0x44d441);
__builtin_memmove((R+0),gp(0x7eb5f4),4);
}
B44d446:{NFSU2_TR(0x44d446);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d447:{NFSU2_TR(0x44d447);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d448:{NFSU2_TR(0x44d448);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B44d44b:{NFSU2_TR(0x44d44b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B44d44d:{NFSU2_TR(0x44d44d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d44e:{NFSU2_TR(0x44d44e);
__builtin_memmove((R+28),(R+4),4);
}
B44d450:{NFSU2_TR(0x44d450);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L44d535;}}
}
B44d456:L44d456:{c.instructions+=2;NFSU2_TR(0x44d456);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d457:{NFSU2_TR(0x44d457);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d45cull));
TAIL_STATIC(0x5d7b20u,5d7);
}
B44d45c:L44d45c:{c.instructions+=4;NFSU2_TR(0x44d45c);
__builtin_memmove((R+24),(R+0),4);
}
B44d45e:{NFSU2_TR(0x44d45e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44d461:{NFSU2_TR(0x44d461);
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
B44d463:{NFSU2_TR(0x44d463);
if(r1(R+518)){{goto L44d52a;}}
}
B44d469:L44d469:{c.instructions+=22;NFSU2_TR(0x44d469);
{u32 ea_=u32(u32(8554144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d46f:{NFSU2_TR(0x44d46f);
__builtin_memmove((R+0),gp(0x8286a4),4);
}
B44d474:{NFSU2_TR(0x44d474);
{u32 ea_=u32(u32(8307920u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B44d47a:{NFSU2_TR(0x44d47a);
__builtin_memmove((R+4),gp(0x8286a8),4);
}
B44d480:{NFSU2_TR(0x44d480);
{u32 ea_=u32(u32(8307924u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d486:{NFSU2_TR(0x44d486);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d48a:{NFSU2_TR(0x44d48a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44d48e:{NFSU2_TR(0x44d48e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d492:{NFSU2_TR(0x44d492);
{u32 ea_=u32(u32(8307928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d498:{NFSU2_TR(0x44d498);
u8 U[4];
w4(U+0,u32(0x41200000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d49d:{NFSU2_TR(0x44d49d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44d4a1:{NFSU2_TR(0x44d4a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44d4a5:{NFSU2_TR(0x44d4a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d4a6:{NFSU2_TR(0x44d4a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44d4aa:{NFSU2_TR(0x44d4aa);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d4ae:{NFSU2_TR(0x44d4ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d4af:{NFSU2_TR(0x44d4af);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44d4b3:{NFSU2_TR(0x44d4b3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44d4b5:{NFSU2_TR(0x44d4b5);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d4b9:{NFSU2_TR(0x44d4b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d4bd:{NFSU2_TR(0x44d4bd);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d4c1:{NFSU2_TR(0x44d4c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d4c6ull));
TAIL_STATIC(0x43cf90u,43c);
}
B44d4c6:L44d4c6:{c.instructions+=26;NFSU2_TR(0x44d4c6);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d4c8:{NFSU2_TR(0x44d4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44d4cb:{NFSU2_TR(0x44d4cb);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44d4cf:{NFSU2_TR(0x44d4cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44d4d2:{NFSU2_TR(0x44d4d2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d4d6:{NFSU2_TR(0x44d4d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d4da:{NFSU2_TR(0x44d4da);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44d4de:{NFSU2_TR(0x44d4de);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d4e2:{NFSU2_TR(0x44d4e2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d4e6:{NFSU2_TR(0x44d4e6);
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
B44d4e9:{NFSU2_TR(0x44d4e9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44d4ed:{NFSU2_TR(0x44d4ed);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d4f1:{NFSU2_TR(0x44d4f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44d4f5:{NFSU2_TR(0x44d4f5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44d4f7:{NFSU2_TR(0x44d4f7);
{u32 ea_=u32(u32(8307920u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d4fd:{NFSU2_TR(0x44d4fd);
__builtin_memmove(gp(0x7ec4d8),(R+4),4);
}
B44d503:{NFSU2_TR(0x44d503);
{u32 ea_=u32(u32(8307924u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d509:{NFSU2_TR(0x44d509);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44d50c:{NFSU2_TR(0x44d50c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d50e:{NFSU2_TR(0x44d50e);
__builtin_memmove((R+0),(R+8),4);
}
B44d510:{NFSU2_TR(0x44d510);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d513:{NFSU2_TR(0x44d513);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d517:{NFSU2_TR(0x44d517);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44d519:{NFSU2_TR(0x44d519);
__builtin_memmove(gp(0x8286a8),(R+0),4);
}
B44d51e:{NFSU2_TR(0x44d51e);
{u32 ea_=u32(u32(8554144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d524:{NFSU2_TR(0x44d524);
{u32 ea_=u32(u32(8554148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d52a:L44d52a:{c.instructions+=2;NFSU2_TR(0x44d52a);
__builtin_memmove(gp(0x7eb5f4),(R+12),4);
}
B44d530:{NFSU2_TR(0x44d530);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d535ull));
TAIL_STATIC(0x4022c0u,402);
}
B44d535:L44d535:{c.instructions+=5;NFSU2_TR(0x44d535);
{u32 ea_=u32(u32(8554164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d53b:{NFSU2_TR(0x44d53b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44d541:{NFSU2_TR(0x44d541);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44d543:{NFSU2_TR(0x44d543);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44d546:{NFSU2_TR(0x44d546);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44d6a3;}}
}
B44d54c:L44d54c:{c.instructions+=2;NFSU2_TR(0x44d54c);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44d553:{NFSU2_TR(0x44d553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d558ull));
TAIL_STATIC(0x5e0b40u,5e0);
}
B44d558:L44d558:{c.instructions+=6;NFSU2_TR(0x44d558);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d55a:{NFSU2_TR(0x44d55a);
u8 U[4];
w4(U+0,u32(0x41000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d55f:{NFSU2_TR(0x44d55f);
u8 U[4];
w4(U+0,u32(0x8286b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d564:{NFSU2_TR(0x44d564);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44d56b:{NFSU2_TR(0x44d56b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3b8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44d576:{NFSU2_TR(0x44d576);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d57bull));
TAIL_STATIC(0x5e6fa0u,5e6);
}
B44d57b:L44d57b:{c.instructions+=3;NFSU2_TR(0x44d57b);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44d582:{NFSU2_TR(0x44d582);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44d584:{NFSU2_TR(0x44d584);
if(r1(R+518)){{goto L44d59f;}}
}
B44d586:L44d586:{c.instructions+=6;NFSU2_TR(0x44d586);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d588:{NFSU2_TR(0x44d588);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d58a:{NFSU2_TR(0x44d58a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d58c:{NFSU2_TR(0x44d58c);
u8 U[4];
w4(U+0,u32(0x8286b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d591:{NFSU2_TR(0x44d591);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44d598:{NFSU2_TR(0x44d598);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d59dull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B44d59d:L44d59d:{c.instructions+=1;NFSU2_TR(0x44d59d);
{goto L44d5a5;}
}
B44d59f:L44d59f:{c.instructions+=1;NFSU2_TR(0x44d59f);
{u32 ea_=u32(u32(8554168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d5a5:L44d5a5:{c.instructions+=24;NFSU2_TR(0x44d5a5);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44d5ab:{NFSU2_TR(0x44d5ab);
__builtin_memmove((R+4),gp(0x8286a4),4);
}
B44d5b1:{NFSU2_TR(0x44d5b1);
__builtin_memmove((R+8),gp(0x8286a8),4);
}
B44d5b7:{NFSU2_TR(0x44d5b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d5bb:{NFSU2_TR(0x44d5bb);
{u32 ea_=u32(u32(8554168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d5c1:{NFSU2_TR(0x44d5c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d5c5:{NFSU2_TR(0x44d5c5);
{u32 ea_=u32(u32(8554144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d5cb:{NFSU2_TR(0x44d5cb);
u8 U[4];
w4(U+0,u32(0x41200000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d5d0:{NFSU2_TR(0x44d5d0);
{u32 ea_=u32(u32(8307920u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B44d5d6:{NFSU2_TR(0x44d5d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44d5da:{NFSU2_TR(0x44d5da);
{u32 ea_=u32(u32(8307924u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d5e0:{NFSU2_TR(0x44d5e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d5e1:{NFSU2_TR(0x44d5e1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44d5e5:{NFSU2_TR(0x44d5e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44d5e9:{NFSU2_TR(0x44d5e9);
{u32 ea_=u32(u32(8307928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d5ef:{NFSU2_TR(0x44d5ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d5f0:{NFSU2_TR(0x44d5f0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44d5f4:{NFSU2_TR(0x44d5f4);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d5f8:{NFSU2_TR(0x44d5f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44d5fc:{NFSU2_TR(0x44d5fc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44d5fe:{NFSU2_TR(0x44d5fe);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d602:{NFSU2_TR(0x44d602);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d606:{NFSU2_TR(0x44d606);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d60a:{NFSU2_TR(0x44d60a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d60full));
TAIL_STATIC(0x43cf90u,43c);
}
B44d60f:L44d60f:{c.instructions+=23;NFSU2_TR(0x44d60f);
{u32 ea_=u32(u32(8554160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d615:{NFSU2_TR(0x44d615);
__builtin_memmove((R+4),gp(0x8286b0),4);
}
B44d61b:{NFSU2_TR(0x44d61b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44d61f:{NFSU2_TR(0x44d61f);
__builtin_memmove((R+8),gp(0x8286b4),4);
}
B44d625:{NFSU2_TR(0x44d625);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d629:{NFSU2_TR(0x44d629);
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
B44d62c:{NFSU2_TR(0x44d62c);
{u32 ea_=u32(u32(8554164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44d632:{NFSU2_TR(0x44d632);
__builtin_memmove(gp(0x8286a0),(R+4),4);
}
B44d638:{NFSU2_TR(0x44d638);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d63c:{NFSU2_TR(0x44d63c);
__builtin_memmove(gp(0x8286a4),(R+8),4);
}
B44d642:{NFSU2_TR(0x44d642);
{u32 ea_=u32(u32(8554168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44d648:{NFSU2_TR(0x44d648);
s4(0x8286b0,u32(0x0ull));
}
B44d652:{NFSU2_TR(0x44d652);
s4(0x8286b4,u32(0x0ull));
}
B44d65c:{NFSU2_TR(0x44d65c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d660:{NFSU2_TR(0x44d660);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44d664:{NFSU2_TR(0x44d664);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44d666:{NFSU2_TR(0x44d666);
{u32 ea_=u32(u32(8307920u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d66c:{NFSU2_TR(0x44d66c);
__builtin_memmove(gp(0x7ec4d8),(R+0),4);
}
B44d671:{NFSU2_TR(0x44d671);
__builtin_memmove((R+0),gp(0x8286b8),4);
}
B44d676:{NFSU2_TR(0x44d676);
{u32 ea_=u32(u32(8307924u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d67c:{NFSU2_TR(0x44d67c);
__builtin_memmove(gp(0x8286a8),(R+0),4);
}
B44d681:{NFSU2_TR(0x44d681);
s4(0x8286b8,u32(0x0ull));
}
B44d68b:{NFSU2_TR(0x44d68b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d690ull));
TAIL_STATIC(0x4022c0u,402);
}
B44d690:L44d690:{c.instructions+=3;NFSU2_TR(0x44d690);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44d697:{NFSU2_TR(0x44d697);
u8 U[8];
w4(U+0,u32(u32(u32(0x3acull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d69e:{NFSU2_TR(0x44d69e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d6a3ull));
TAIL_STATIC(0x5e0bf0u,5e0);
}
B44d6a3:L44d6a3:{c.instructions+=12;NFSU2_TR(0x44d6a3);
{u32 ea_=u32(u32(8554144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d6a9:{NFSU2_TR(0x44d6a9);
{u32 ea_=u32(u32(8307920u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44d6af:{NFSU2_TR(0x44d6af);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d6b3:{NFSU2_TR(0x44d6b3);
{u32 ea_=u32(u32(8554148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d6b9:{NFSU2_TR(0x44d6b9);
{u32 ea_=u32(u32(8307924u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44d6bf:{NFSU2_TR(0x44d6bf);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d6c3:{NFSU2_TR(0x44d6c3);
{u32 ea_=u32(u32(8554152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d6c9:{NFSU2_TR(0x44d6c9);
{u32 ea_=u32(u32(8307928u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44d6cf:{NFSU2_TR(0x44d6cf);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d6d3:{NFSU2_TR(0x44d6d3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d6d7:{NFSU2_TR(0x44d6d7);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d6dd:{NFSU2_TR(0x44d6dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d6e2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B44d6e2:L44d6e2:{c.instructions+=4;NFSU2_TR(0x44d6e2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d6e6:{NFSU2_TR(0x44d6e6);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d6ec:{NFSU2_TR(0x44d6ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d6ed:{NFSU2_TR(0x44d6ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d6f2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B44d6f2:L44d6f2:{c.instructions+=2;NFSU2_TR(0x44d6f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d6f3:{NFSU2_TR(0x44d6f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d6f8ull));
TAIL_STATIC(0x43c6f0u,43c);
}
B44d6f8:L44d6f8:{c.instructions+=5;NFSU2_TR(0x44d6f8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B44d6fc:{NFSU2_TR(0x44d6fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44d6ff:{NFSU2_TR(0x44d6ff);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B44d702:{NFSU2_TR(0x44d702);
__builtin_memmove((R+12),(R+0),4);
}
B44d704:{NFSU2_TR(0x44d704);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44d720;}}
}
B44d706:L44d706:{c.instructions+=2;NFSU2_TR(0x44d706);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+4))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B44d70a:{NFSU2_TR(0x44d70a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44d720;}}
}
B44d70c:L44d70c:{c.instructions+=5;NFSU2_TR(0x44d70c);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d70f:{NFSU2_TR(0x44d70f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44d715:{NFSU2_TR(0x44d715);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44d717:{NFSU2_TR(0x44d717);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44d71a:{NFSU2_TR(0x44d71a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44d89d;}}
}
B44d720:L44d720:{c.instructions+=5;NFSU2_TR(0x44d720);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B44d723:{NFSU2_TR(0x44d723);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d727:{NFSU2_TR(0x44d727);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B44d72b:{NFSU2_TR(0x44d72b);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d731:{NFSU2_TR(0x44d731);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d736ull));
TAIL_STATIC(0x75bed4u,75b);
}
B44d736:L44d736:{c.instructions+=4;NFSU2_TR(0x44d736);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d73a:{NFSU2_TR(0x44d73a);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d740:{NFSU2_TR(0x44d740);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B44d742:{NFSU2_TR(0x44d742);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d747ull));
TAIL_STATIC(0x75bed4u,75b);
}
B44d747:L44d747:{c.instructions+=9;NFSU2_TR(0x44d747);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d74b:{NFSU2_TR(0x44d74b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d74f:{NFSU2_TR(0x44d74f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d750:{NFSU2_TR(0x44d750);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d754:{NFSU2_TR(0x44d754);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d758:{NFSU2_TR(0x44d758);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B44d75a:{NFSU2_TR(0x44d75a);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B44d75c:{NFSU2_TR(0x44d75c);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d762:{NFSU2_TR(0x44d762);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d767ull));
TAIL_STATIC(0x75bed4u,75b);
}
B44d767:L44d767:{c.instructions+=2;NFSU2_TR(0x44d767);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d768:{NFSU2_TR(0x44d768);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d76dull));
TAIL_STATIC(0x43c6f0u,43c);
}
B44d76d:L44d76d:{c.instructions+=7;NFSU2_TR(0x44d76d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B44d771:{NFSU2_TR(0x44d771);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44d775:{NFSU2_TR(0x44d775);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44d778:{NFSU2_TR(0x44d778);
__builtin_memmove((R+24),(R+0),4);
}
B44d77a:{NFSU2_TR(0x44d77a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B44d77e:{NFSU2_TR(0x44d77e);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d784:{NFSU2_TR(0x44d784);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d789ull));
TAIL_STATIC(0x75bed4u,75b);
}
B44d789:L44d789:{c.instructions+=3;NFSU2_TR(0x44d789);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B44d78b:{NFSU2_TR(0x44d78b);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w1(R+512,u8((r2(U+0))<(u16(0x3ff6ull))));
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x3ff6ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B44d790:{NFSU2_TR(0x44d790);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L44d7a0;}}
}
B44d792:L44d792:{c.instructions+=2;NFSU2_TR(0x44d792);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
w1(R+512,u8((r2(U+0))<(u16(0x8000ull))));
}
B44d797:{NFSU2_TR(0x44d797);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L44d7a0;}}
}
B44d799:L44d799:{c.instructions+=2;NFSU2_TR(0x44d799);
w4(R+24,u32(0x3ff6ull));
}
B44d79e:{NFSU2_TR(0x44d79e);
{goto L44d7b3;}
}
B44d7a0:L44d7a0:{c.instructions+=2;NFSU2_TR(0x44d7a0);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
w1(R+512,u8((r2(U+0))<(u16(0xc00aull))));
}
B44d7a5:{NFSU2_TR(0x44d7a5);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L44d7b3;}}
}
B44d7a7:L44d7a7:{c.instructions+=2;NFSU2_TR(0x44d7a7);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
w1(R+512,u8((r2(U+0))<(u16(0x8000ull))));
}
B44d7ac:{NFSU2_TR(0x44d7ac);
if(r1(R+512)){{goto L44d7b3;}}
}
B44d7ae:L44d7ae:{c.instructions+=1;NFSU2_TR(0x44d7ae);
w4(R+24,u32(0xc00aull));
}
B44d7b3:L44d7b3:{c.instructions+=3;NFSU2_TR(0x44d7b3);
__builtin_memmove((R+0),gp(0x82866c),4);
}
B44d7b8:{NFSU2_TR(0x44d7b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44d7ba:{NFSU2_TR(0x44d7ba);
if(r1(R+518)){{goto L44d7cd;}}
}
B44d7bc:L44d7bc:{c.instructions+=4;NFSU2_TR(0x44d7bc);
{u32 ea_=u32(u32(8304108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d7c2:{NFSU2_TR(0x44d7c2);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d7c5:{NFSU2_TR(0x44d7c5);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d7cb:{NFSU2_TR(0x44d7cb);
{goto L44d7f0;}
}
B44d7cd:L44d7cd:{c.instructions+=3;NFSU2_TR(0x44d7cd);
__builtin_memmove((R+0),gp(0x828668),4);
}
B44d7d2:{NFSU2_TR(0x44d7d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44d7d4:{NFSU2_TR(0x44d7d4);
if(r1(R+518)){{goto L44d7e7;}}
}
B44d7d6:L44d7d6:{c.instructions+=4;NFSU2_TR(0x44d7d6);
{u32 ea_=u32(u32(8304104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d7dc:{NFSU2_TR(0x44d7dc);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d7df:{NFSU2_TR(0x44d7df);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d7e5:{NFSU2_TR(0x44d7e5);
{goto L44d7f0;}
}
B44d7e7:L44d7e7:{c.instructions+=2;NFSU2_TR(0x44d7e7);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d7ed:{NFSU2_TR(0x44d7ed);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d7f0:L44d7f0:{c.instructions+=3;NFSU2_TR(0x44d7f0);
__builtin_memmove((R+0),gp(0x828670),4);
}
B44d7f5:{NFSU2_TR(0x44d7f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44d7f7:{NFSU2_TR(0x44d7f7);
if(r1(R+518)){{goto L44d7ff;}}
}
B44d7f9:L44d7f9:{c.instructions+=1;NFSU2_TR(0x44d7f9);
{u32 ea_=u32(u32(8304112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d7ff:L44d7ff:{c.instructions+=14;NFSU2_TR(0x44d7ff);
{u32 ea_=u32(u32(8307920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d805:{NFSU2_TR(0x44d805);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d806:{NFSU2_TR(0x44d806);
{u32 ea_=u32(u32(8307924u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d80c:{NFSU2_TR(0x44d80c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d810:{NFSU2_TR(0x44d810);
{u32 ea_=u32(u32(8307928u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d816:{NFSU2_TR(0x44d816);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44d81a:{NFSU2_TR(0x44d81a);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B44d81c:{NFSU2_TR(0x44d81c);
__builtin_memmove(gp(0x7ec4d4),(R+0),4);
}
B44d821:{NFSU2_TR(0x44d821);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d825:{NFSU2_TR(0x44d825);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44d829:{NFSU2_TR(0x44d829);
{u32 ea_=u32(u32(8307920u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d82f:{NFSU2_TR(0x44d82f);
__builtin_memmove(gp(0x7ec4d8),(R+4),4);
}
B44d835:{NFSU2_TR(0x44d835);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44d837:{NFSU2_TR(0x44d837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d83cull));
TAIL_STATIC(0x43c370u,43c);
}
B44d83c:L44d83c:{c.instructions+=3;NFSU2_TR(0x44d83c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d83d:{NFSU2_TR(0x44d83d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d841:{NFSU2_TR(0x44d841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d846ull));
TAIL_STATIC(0x43c370u,43c);
}
B44d846:L44d846:{c.instructions+=6;NFSU2_TR(0x44d846);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d84a:{NFSU2_TR(0x44d84a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d84b:{NFSU2_TR(0x44d84b);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d851:{NFSU2_TR(0x44d851);
{u32 ea_=u32(u32(8307920u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44d857:{NFSU2_TR(0x44d857);
{u32 ea_=u32(u32(8554144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d85d:{NFSU2_TR(0x44d85d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d862ull));
TAIL_STATIC(0x43c370u,43c);
}
B44d862:L44d862:{c.instructions+=3;NFSU2_TR(0x44d862);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d863:{NFSU2_TR(0x44d863);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d867:{NFSU2_TR(0x44d867);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d86cull));
TAIL_STATIC(0x43c2b0u,43c);
}
B44d86c:L44d86c:{c.instructions+=6;NFSU2_TR(0x44d86c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d870:{NFSU2_TR(0x44d870);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d871:{NFSU2_TR(0x44d871);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d877:{NFSU2_TR(0x44d877);
{u32 ea_=u32(u32(8307924u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44d87d:{NFSU2_TR(0x44d87d);
{u32 ea_=u32(u32(8554148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d883:{NFSU2_TR(0x44d883);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d888ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B44d888:L44d888:{c.instructions+=4;NFSU2_TR(0x44d888);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d88e:{NFSU2_TR(0x44d88e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B44d891:{NFSU2_TR(0x44d891);
{u32 ea_=u32(u32(8307928u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44d897:{NFSU2_TR(0x44d897);
{u32 ea_=u32(u32(8554152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d89d:L44d89d:{c.instructions+=5;NFSU2_TR(0x44d89d);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d8a0:{NFSU2_TR(0x44d8a0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44d8a6:{NFSU2_TR(0x44d8a6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44d8a8:{NFSU2_TR(0x44d8a8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44d8ab:{NFSU2_TR(0x44d8ab);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44d974;}}
}
B44d8b1:L44d8b1:{c.instructions+=3;NFSU2_TR(0x44d8b1);
__builtin_memmove((R+0),gp(0x82866c),4);
}
B44d8b6:{NFSU2_TR(0x44d8b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44d8b8:{NFSU2_TR(0x44d8b8);
if(r1(R+518)){{goto L44d8cb;}}
}
B44d8ba:L44d8ba:{c.instructions+=4;NFSU2_TR(0x44d8ba);
{u32 ea_=u32(u32(8304108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d8c0:{NFSU2_TR(0x44d8c0);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d8c3:{NFSU2_TR(0x44d8c3);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d8c9:{NFSU2_TR(0x44d8c9);
{goto L44d8ee;}
}
B44d8cb:L44d8cb:{c.instructions+=3;NFSU2_TR(0x44d8cb);
__builtin_memmove((R+0),gp(0x828668),4);
}
B44d8d0:{NFSU2_TR(0x44d8d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44d8d2:{NFSU2_TR(0x44d8d2);
if(r1(R+518)){{goto L44d8e5;}}
}
B44d8d4:L44d8d4:{c.instructions+=4;NFSU2_TR(0x44d8d4);
{u32 ea_=u32(u32(8304104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d8da:{NFSU2_TR(0x44d8da);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d8dd:{NFSU2_TR(0x44d8dd);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d8e3:{NFSU2_TR(0x44d8e3);
{goto L44d8ee;}
}
B44d8e5:L44d8e5:{c.instructions+=2;NFSU2_TR(0x44d8e5);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d8eb:{NFSU2_TR(0x44d8eb);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d8ee:L44d8ee:{c.instructions+=4;NFSU2_TR(0x44d8ee);
__builtin_memmove((R+0),gp(0x828670),4);
}
B44d8f3:{NFSU2_TR(0x44d8f3);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d8f7:{NFSU2_TR(0x44d8f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44d8f9:{NFSU2_TR(0x44d8f9);
if(r1(R+518)){{goto L44d909;}}
}
B44d8fb:L44d8fb:{c.instructions+=3;NFSU2_TR(0x44d8fb);
{u32 ea_=u32(u32(8304112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d901:{NFSU2_TR(0x44d901);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d905:{NFSU2_TR(0x44d905);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d909:L44d909:{c.instructions+=2;NFSU2_TR(0x44d909);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d90a:{NFSU2_TR(0x44d90a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d90full));
TAIL_STATIC(0x43c2b0u,43c);
}
B44d90f:L44d90f:{c.instructions+=4;NFSU2_TR(0x44d90f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d913:{NFSU2_TR(0x44d913);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d914:{NFSU2_TR(0x44d914);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d918:{NFSU2_TR(0x44d918);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44d91dull));
TAIL_STATIC(0x43c370u,43c);
}
B44d91d:L44d91d:{c.instructions+=17;NFSU2_TR(0x44d91d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d921:{NFSU2_TR(0x44d921);
__builtin_memmove((R+8),gp(0x7ec4d8),4);
}
B44d927:{NFSU2_TR(0x44d927);
{u32 ea_=u32(u32(8307920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d92d:{NFSU2_TR(0x44d92d);
__builtin_memmove((R+0),gp(0x8286a8),4);
}
B44d932:{NFSU2_TR(0x44d932);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44d935:{NFSU2_TR(0x44d935);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B44d937:{NFSU2_TR(0x44d937);
__builtin_memmove(gp(0x7ec4d8),(R+8),4);
}
B44d93d:{NFSU2_TR(0x44d93d);
__builtin_memmove(gp(0x8286a8),(R+0),4);
}
B44d942:{NFSU2_TR(0x44d942);
{u32 ea_=u32(u32(8307920u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d948:{NFSU2_TR(0x44d948);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d94c:{NFSU2_TR(0x44d94c);
{u32 ea_=u32(u32(8307924u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44d952:{NFSU2_TR(0x44d952);
{u32 ea_=u32(u32(8307924u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d958:{NFSU2_TR(0x44d958);
{u32 ea_=u32(u32(8554144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44d95e:{NFSU2_TR(0x44d95e);
{u32 ea_=u32(u32(8554144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d964:{NFSU2_TR(0x44d964);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d968:{NFSU2_TR(0x44d968);
{u32 ea_=u32(u32(8554148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44d96e:{NFSU2_TR(0x44d96e);
{u32 ea_=u32(u32(8554148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d974:L44d974:{c.instructions+=5;NFSU2_TR(0x44d974);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d977:{NFSU2_TR(0x44d977);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44d97d:{NFSU2_TR(0x44d97d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44d97f:{NFSU2_TR(0x44d97f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44d982:{NFSU2_TR(0x44d982);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44da81;}}
}
B44d988:L44d988:{c.instructions+=3;NFSU2_TR(0x44d988);
__builtin_memmove((R+0),gp(0x82866c),4);
}
B44d98d:{NFSU2_TR(0x44d98d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44d98f:{NFSU2_TR(0x44d98f);
if(r1(R+518)){{goto L44d99f;}}
}
B44d991:L44d991:{c.instructions+=3;NFSU2_TR(0x44d991);
{u32 ea_=u32(u32(8304108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d997:{NFSU2_TR(0x44d997);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d99d:{NFSU2_TR(0x44d99d);
{goto L44d9bc;}
}
B44d99f:L44d99f:{c.instructions+=3;NFSU2_TR(0x44d99f);
__builtin_memmove((R+0),gp(0x828668),4);
}
B44d9a4:{NFSU2_TR(0x44d9a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44d9a6:{NFSU2_TR(0x44d9a6);
if(r1(R+518)){{goto L44d9b6;}}
}
B44d9a8:L44d9a8:{c.instructions+=3;NFSU2_TR(0x44d9a8);
{u32 ea_=u32(u32(8304104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d9ae:{NFSU2_TR(0x44d9ae);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d9b4:{NFSU2_TR(0x44d9b4);
{goto L44d9bc;}
}
B44d9b6:L44d9b6:{c.instructions+=1;NFSU2_TR(0x44d9b6);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d9bc:L44d9bc:{c.instructions+=5;NFSU2_TR(0x44d9bc);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d9bf:{NFSU2_TR(0x44d9bf);
__builtin_memmove((R+0),gp(0x828670),4);
}
B44d9c4:{NFSU2_TR(0x44d9c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44d9c6:{NFSU2_TR(0x44d9c6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d9ca:{NFSU2_TR(0x44d9ca);
if(r1(R+518)){{goto L44d9da;}}
}
B44d9cc:L44d9cc:{c.instructions+=3;NFSU2_TR(0x44d9cc);
{u32 ea_=u32(u32(8304112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d9d2:{NFSU2_TR(0x44d9d2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44d9d6:{NFSU2_TR(0x44d9d6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d9da:L44d9da:{c.instructions+=16;NFSU2_TR(0x44d9da);
{u32 ea_=u32(u32(8554144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d9e0:{NFSU2_TR(0x44d9e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44d9e4:{NFSU2_TR(0x44d9e4);
{u32 ea_=u32(u32(8307920u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44d9ea:{NFSU2_TR(0x44d9ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d9eb:{NFSU2_TR(0x44d9eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44d9ef:{NFSU2_TR(0x44d9ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d9f0:{NFSU2_TR(0x44d9f0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44d9f4:{NFSU2_TR(0x44d9f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44d9f8:{NFSU2_TR(0x44d9f8);
{u32 ea_=u32(u32(8554148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44d9fe:{NFSU2_TR(0x44d9fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44d9ff:{NFSU2_TR(0x44d9ff);
{u32 ea_=u32(u32(8307924u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44da05:{NFSU2_TR(0x44da05);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44da09:{NFSU2_TR(0x44da09);
{u32 ea_=u32(u32(8554152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44da0f:{NFSU2_TR(0x44da0f);
{u32 ea_=u32(u32(8307928u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B44da15:{NFSU2_TR(0x44da15);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44da19:{NFSU2_TR(0x44da19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44da1eull));
TAIL_STATIC(0x43cf90u,43c);
}
B44da1e:L44da1e:{c.instructions+=19;NFSU2_TR(0x44da1e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44da22:{NFSU2_TR(0x44da22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44da25:{NFSU2_TR(0x44da25);
{u32 ea_=u32(u32(8307920u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44da2b:{NFSU2_TR(0x44da2b);
{u32 ea_=u32(u32(8307920u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44da31:{NFSU2_TR(0x44da31);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44da35:{NFSU2_TR(0x44da35);
{u32 ea_=u32(u32(8307924u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44da3b:{NFSU2_TR(0x44da3b);
{u32 ea_=u32(u32(8307924u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44da41:{NFSU2_TR(0x44da41);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44da45:{NFSU2_TR(0x44da45);
{u32 ea_=u32(u32(8307928u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44da4b:{NFSU2_TR(0x44da4b);
{u32 ea_=u32(u32(8307928u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44da51:{NFSU2_TR(0x44da51);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44da55:{NFSU2_TR(0x44da55);
{u32 ea_=u32(u32(8554144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44da5b:{NFSU2_TR(0x44da5b);
{u32 ea_=u32(u32(8554144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44da61:{NFSU2_TR(0x44da61);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44da65:{NFSU2_TR(0x44da65);
{u32 ea_=u32(u32(8554148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44da6b:{NFSU2_TR(0x44da6b);
{u32 ea_=u32(u32(8554148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44da71:{NFSU2_TR(0x44da71);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44da75:{NFSU2_TR(0x44da75);
{u32 ea_=u32(u32(8554152u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44da7b:{NFSU2_TR(0x44da7b);
{u32 ea_=u32(u32(8554152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44da81:L44da81:{c.instructions+=5;NFSU2_TR(0x44da81);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44da84:{NFSU2_TR(0x44da84);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B44da8a:{NFSU2_TR(0x44da8a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B44da8c:{NFSU2_TR(0x44da8c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B44da8f:{NFSU2_TR(0x44da8f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L44db60;}}
}
B44da95:L44da95:{c.instructions+=3;NFSU2_TR(0x44da95);
__builtin_memmove((R+0),gp(0x82866c),4);
}
B44da9a:{NFSU2_TR(0x44da9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44da9c:{NFSU2_TR(0x44da9c);
if(r1(R+518)){{goto L44daaf;}}
}
B44da9e:L44da9e:{c.instructions+=4;NFSU2_TR(0x44da9e);
{u32 ea_=u32(u32(8304108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44daa4:{NFSU2_TR(0x44daa4);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44daa7:{NFSU2_TR(0x44daa7);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44daad:{NFSU2_TR(0x44daad);
{goto L44dad2;}
}
B44daaf:L44daaf:{c.instructions+=3;NFSU2_TR(0x44daaf);
__builtin_memmove((R+0),gp(0x828668),4);
}
B44dab4:{NFSU2_TR(0x44dab4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44dab6:{NFSU2_TR(0x44dab6);
if(r1(R+518)){{goto L44dac9;}}
}
B44dab8:L44dab8:{c.instructions+=4;NFSU2_TR(0x44dab8);
{u32 ea_=u32(u32(8304104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44dabe:{NFSU2_TR(0x44dabe);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44dac1:{NFSU2_TR(0x44dac1);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44dac7:{NFSU2_TR(0x44dac7);
{goto L44dad2;}
}
B44dac9:L44dac9:{c.instructions+=2;NFSU2_TR(0x44dac9);
{u32 ea_=u32(u32(8802712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44dacf:{NFSU2_TR(0x44dacf);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44dad2:L44dad2:{c.instructions+=4;NFSU2_TR(0x44dad2);
__builtin_memmove((R+0),gp(0x828670),4);
}
B44dad7:{NFSU2_TR(0x44dad7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44dadb:{NFSU2_TR(0x44dadb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44dadd:{NFSU2_TR(0x44dadd);
if(r1(R+518)){{goto L44daed;}}
}
B44dadf:L44dadf:{c.instructions+=3;NFSU2_TR(0x44dadf);
{u32 ea_=u32(u32(8304112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44dae5:{NFSU2_TR(0x44dae5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44dae9:{NFSU2_TR(0x44dae9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44daed:L44daed:{c.instructions+=3;NFSU2_TR(0x44daed);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4000ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44daf3:{NFSU2_TR(0x44daf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44daf4:{NFSU2_TR(0x44daf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44daf9ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B44daf9:L44daf9:{c.instructions+=4;NFSU2_TR(0x44daf9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44dafd:{NFSU2_TR(0x44dafd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dafe:{NFSU2_TR(0x44dafe);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44db02:{NFSU2_TR(0x44db02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44db07ull));
TAIL_STATIC(0x43c370u,43c);
}
B44db07:L44db07:{c.instructions+=17;NFSU2_TR(0x44db07);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44db0b:{NFSU2_TR(0x44db0b);
__builtin_memmove((R+4),gp(0x7ec4d8),4);
}
B44db11:{NFSU2_TR(0x44db11);
{u32 ea_=u32(u32(8307920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44db17:{NFSU2_TR(0x44db17);
__builtin_memmove((R+8),gp(0x8286a8),4);
}
B44db1d:{NFSU2_TR(0x44db1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44db20:{NFSU2_TR(0x44db20);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B44db22:{NFSU2_TR(0x44db22);
__builtin_memmove(gp(0x7ec4d8),(R+4),4);
}
B44db28:{NFSU2_TR(0x44db28);
__builtin_memmove(gp(0x8286a8),(R+8),4);
}
B44db2e:{NFSU2_TR(0x44db2e);
{u32 ea_=u32(u32(8307920u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44db34:{NFSU2_TR(0x44db34);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44db38:{NFSU2_TR(0x44db38);
{u32 ea_=u32(u32(8307924u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44db3e:{NFSU2_TR(0x44db3e);
{u32 ea_=u32(u32(8307924u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44db44:{NFSU2_TR(0x44db44);
{u32 ea_=u32(u32(8554144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44db4a:{NFSU2_TR(0x44db4a);
{u32 ea_=u32(u32(8554144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44db50:{NFSU2_TR(0x44db50);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44db54:{NFSU2_TR(0x44db54);
{u32 ea_=u32(u32(8554148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44db5a:{NFSU2_TR(0x44db5a);
{u32 ea_=u32(u32(8554148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44db60:L44db60:{c.instructions+=3;NFSU2_TR(0x44db60);
{u32 ea_=u32(u32(7893304u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44db66:{NFSU2_TR(0x44db66);
{u32 ea_=u32(u32(7896460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44db6c:{NFSU2_TR(0x44db6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44db71ull));
TAIL_STATIC(0x75bed4u,75b);
}
B44db71:L44db71:{c.instructions+=6;NFSU2_TR(0x44db71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44db72:{NFSU2_TR(0x44db72);
u8 U[4];
w4(U+0,u32(0x8286a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44db77:{NFSU2_TR(0x44db77);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44db7b:{NFSU2_TR(0x44db7b);
u8 U[4];
w4(U+0,u32(0x7ec4d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44db80:{NFSU2_TR(0x44db80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44db81:{NFSU2_TR(0x44db81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44db86ull));
TAIL_STATIC(0x4440d0u,444);
}
B44db86:L44db86:{c.instructions+=7;NFSU2_TR(0x44db86);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44db8a:{NFSU2_TR(0x44db8a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44db8b:{NFSU2_TR(0x44db8b);
u8 U[4];
w4(U+0,u32(0x8286a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44db90:{NFSU2_TR(0x44db90);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44db94:{NFSU2_TR(0x44db94);
u8 U[4];
w4(U+0,u32(0x7ec4d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44db99:{NFSU2_TR(0x44db99);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44db9a:{NFSU2_TR(0x44db9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44db9full));
TAIL_STATIC(0x5ba9a0u,5ba);
}
B44db9f:L44db9f:{c.instructions+=4;NFSU2_TR(0x44db9f);
__builtin_memmove((R+0),gp(0x828640),4);
}
B44dba4:{NFSU2_TR(0x44dba4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B44dba7:{NFSU2_TR(0x44dba7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44dba9:{NFSU2_TR(0x44dba9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44dbc6;}}
}
B44dbab:L44dbab:{c.instructions+=3;NFSU2_TR(0x44dbab);
{u32 ea_=u32(u32(7893308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44dbb1:{NFSU2_TR(0x44dbb1);
{u32 ea_=u32(u32(7896460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44dbb7:{NFSU2_TR(0x44dbb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44dbbcull));
TAIL_STATIC(0x75bed4u,75b);
}
B44dbbc:L44dbbc:{c.instructions+=2;NFSU2_TR(0x44dbbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44dbbf:{NFSU2_TR(0x44dbbf);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B44dbc6:L44dbc6:{c.instructions+=6;NFSU2_TR(0x44dbc6);
__builtin_memmove((R+8),gp(0x865198),4);
}
B44dbcc:{NFSU2_TR(0x44dbcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44dbcf:{NFSU2_TR(0x44dbcf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dbd0:{NFSU2_TR(0x44dbd0);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44dbd4:{NFSU2_TR(0x44dbd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dbd5:{NFSU2_TR(0x44dbd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44dbdaull));
TAIL_STATIC(0x447280u,447);
}
B44dbda:L44dbda:{c.instructions+=8;NFSU2_TR(0x44dbda);
u8 U[8];
w4(U+0,u32(u32(u32(0x3a4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44dbe1:{NFSU2_TR(0x44dbe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B44dbe2:{NFSU2_TR(0x44dbe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44dbe3:{NFSU2_TR(0x44dbe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44dbea:{NFSU2_TR(0x44dbea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B44dbeb:{NFSU2_TR(0x44dbeb);
__builtin_memmove((R+16),(R+20),4);
}
B44dbed:{NFSU2_TR(0x44dbed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44dbee:{NFSU2_TR(0x44dbee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44dbf0:L44dbf0:{c.instructions+=13;NFSU2_TR(0x44dbf0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dbf2:{NFSU2_TR(0x44dbf2);
u8 U[4];
w4(U+0,u32(0x772068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dbf7:{NFSU2_TR(0x44dbf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44dbfd:{NFSU2_TR(0x44dbfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dbfe:{NFSU2_TR(0x44dbfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44dc05:{NFSU2_TR(0x44dc05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dc06:{NFSU2_TR(0x44dc06);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44dc0a:{NFSU2_TR(0x44dc0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dc0b:{NFSU2_TR(0x44dc0b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dc0d:{NFSU2_TR(0x44dc0d);
__builtin_memmove((R+24),(R+4),4);
}
B44dc0f:{NFSU2_TR(0x44dc0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dc10:{NFSU2_TR(0x44dc10);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44dc14:{NFSU2_TR(0x44dc14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44dc19ull));
TAIL_STATIC(0x44ab90u,44a);
}
B44dc19:L44dc19:{c.instructions+=6;NFSU2_TR(0x44dc19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44dc1c:{NFSU2_TR(0x44dc1c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x40ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44dc1f:{NFSU2_TR(0x44dc1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dc20:{NFSU2_TR(0x44dc20);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44dc28:{NFSU2_TR(0x44dc28);
u8 U[4];
w4(U+0,u32(0x787ed8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44dc2e:{NFSU2_TR(0x44dc2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44dc33ull));
TAIL_STATIC(0x4022c0u,402);
}
B44dc33:L44dc33:{c.instructions+=7;NFSU2_TR(0x44dc33);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44dc37:{NFSU2_TR(0x44dc37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B44dc3a:{NFSU2_TR(0x44dc3a);
__builtin_memmove((R+0),(R+24),4);
}
B44dc3c:{NFSU2_TR(0x44dc3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44dc3d:{NFSU2_TR(0x44dc3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44dc44:{NFSU2_TR(0x44dc44);
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
B44dc47:{NFSU2_TR(0x44dc47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44dc50:L44dc50:{c.instructions+=12;NFSU2_TR(0x44dc50);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dc52:{NFSU2_TR(0x44dc52);
u8 U[4];
w4(U+0,u32(0x772068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dc57:{NFSU2_TR(0x44dc57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44dc5d:{NFSU2_TR(0x44dc5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dc5e:{NFSU2_TR(0x44dc5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44dc65:{NFSU2_TR(0x44dc65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dc66:{NFSU2_TR(0x44dc66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dc67:{NFSU2_TR(0x44dc67);
__builtin_memmove((R+24),(R+4),4);
}
B44dc69:{NFSU2_TR(0x44dc69);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44dc6d:{NFSU2_TR(0x44dc6d);
u8 U[4];
w4(U+0,u32(0x787ed8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44dc73:{NFSU2_TR(0x44dc73);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44dc7b:{NFSU2_TR(0x44dc7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44dc80ull));
TAIL_STATIC(0x4022c0u,402);
}
B44dc80:L44dc80:{c.instructions+=5;NFSU2_TR(0x44dc80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44dc83:{NFSU2_TR(0x44dc83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44dc85:{NFSU2_TR(0x44dc85);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B44dc8d:{NFSU2_TR(0x44dc8d);
u8 U[4];
w4(U+0,u32(0x787cf0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44dc93:{NFSU2_TR(0x44dc93);
if(r1(R+518)){{goto L44dcba;}}
}
B44dc95:L44dc95:{c.instructions+=9;NFSU2_TR(0x44dc95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44dc98:{NFSU2_TR(0x44dc98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44dc9f:{NFSU2_TR(0x44dc9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44dca5:{NFSU2_TR(0x44dca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44dca8:{NFSU2_TR(0x44dca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44dcae:{NFSU2_TR(0x44dcae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44dcb1:{NFSU2_TR(0x44dcb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dcb2:{NFSU2_TR(0x44dcb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44dcb5:{NFSU2_TR(0x44dcb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44dcbaull));
TAIL_STATIC(0x48f760u,48f);
}
B44dcba:L44dcba:{c.instructions+=3;NFSU2_TR(0x44dcba);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44dcbe:{NFSU2_TR(0x44dcbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44dcbf:{NFSU2_TR(0x44dcbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44dcc7;}}
}
B44dcc1:L44dcc1:{c.instructions+=1;NFSU2_TR(0x44dcc1);
s4(0x883dfc,u32(u32(m4(0x883dfc))-u32(u32(0x1ull))));
}
B44dcc7:L44dcc7:{c.instructions+=4;NFSU2_TR(0x44dcc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44dccb:{NFSU2_TR(0x44dccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44dcd2:{NFSU2_TR(0x44dcd2);
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
B44dcd5:{NFSU2_TR(0x44dcd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44dce0:L44dce0:{c.instructions+=11;NFSU2_TR(0x44dce0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dce1:{NFSU2_TR(0x44dce1);
__builtin_memmove((R+20),(R+16),4);
}
B44dce3:{NFSU2_TR(0x44dce3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B44dce6:{NFSU2_TR(0x44dce6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x9cull))));
}
B44dcec:{NFSU2_TR(0x44dcec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dced:{NFSU2_TR(0x44dced);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44dcf1:{NFSU2_TR(0x44dcf1);
__builtin_memmove((R+24),(R+4),4);
}
B44dcf3:{NFSU2_TR(0x44dcf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dcf4:{NFSU2_TR(0x44dcf4);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44dcf8:{NFSU2_TR(0x44dcf8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dcf9:{NFSU2_TR(0x44dcf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44dcfeull));
TAIL_STATIC(0x50d510u,50d);
}
B44dcfe:L44dcfe:{c.instructions+=3;NFSU2_TR(0x44dcfe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44dd01:{NFSU2_TR(0x44dd01);
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
B44dd03:{NFSU2_TR(0x44dd03);
if(r1(R+518)){{goto L44dd8c;}}
}
B44dd09:L44dd09:{c.instructions+=27;NFSU2_TR(0x44dd09);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44dd0d:{NFSU2_TR(0x44dd0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44dd11:{NFSU2_TR(0x44dd11);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44dd15:{NFSU2_TR(0x44dd15);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44dd19:{NFSU2_TR(0x44dd19);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44dd1d:{NFSU2_TR(0x44dd1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44dd21:{NFSU2_TR(0x44dd21);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44dd25:{NFSU2_TR(0x44dd25);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44dd29:{NFSU2_TR(0x44dd29);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44dd2d:{NFSU2_TR(0x44dd2d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44dd31:{NFSU2_TR(0x44dd31);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dd32:{NFSU2_TR(0x44dd32);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44dd36:{NFSU2_TR(0x44dd36);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44dd3a:{NFSU2_TR(0x44dd3a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44dd3e:{NFSU2_TR(0x44dd3e);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44dd42:{NFSU2_TR(0x44dd42);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44dd46:{NFSU2_TR(0x44dd46);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44dd4a:{NFSU2_TR(0x44dd4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dd4b:{NFSU2_TR(0x44dd4b);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44dd4f:{NFSU2_TR(0x44dd4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dd50:{NFSU2_TR(0x44dd50);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44dd54:{NFSU2_TR(0x44dd54);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44dd58:{NFSU2_TR(0x44dd58);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dd59:{NFSU2_TR(0x44dd59);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44dd61:{NFSU2_TR(0x44dd61);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44dd69:{NFSU2_TR(0x44dd69);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44dd71:{NFSU2_TR(0x44dd71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44dd76ull));
TAIL_STATIC(0x5ba9a0u,5ba);
}
B44dd76:L44dd76:{c.instructions+=7;NFSU2_TR(0x44dd76);
__builtin_memmove((R+0),gp(0x865198),4);
}
B44dd7b:{NFSU2_TR(0x44dd7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B44dd7e:{NFSU2_TR(0x44dd7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dd7f:{NFSU2_TR(0x44dd7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44dd83:{NFSU2_TR(0x44dd83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dd84:{NFSU2_TR(0x44dd84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44dd87:{NFSU2_TR(0x44dd87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44dd8cull));
TAIL_STATIC(0x447280u,447);
}
B44dd8c:L44dd8c:{c.instructions+=4;NFSU2_TR(0x44dd8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44dd8d:{NFSU2_TR(0x44dd8d);
__builtin_memmove((R+16),(R+20),4);
}
B44dd8f:{NFSU2_TR(0x44dd8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B44dd90:{NFSU2_TR(0x44dd90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44dda0:L44dda0:{c.instructions+=14;NFSU2_TR(0x44dda0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dda2:{NFSU2_TR(0x44dda2);
u8 U[4];
w4(U+0,u32(0x772068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dda7:{NFSU2_TR(0x44dda7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ddad:{NFSU2_TR(0x44ddad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ddae:{NFSU2_TR(0x44ddae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ddb5:{NFSU2_TR(0x44ddb5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ddb6:{NFSU2_TR(0x44ddb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ddb7:{NFSU2_TR(0x44ddb7);
__builtin_memmove((R+24),(R+4),4);
}
B44ddb9:{NFSU2_TR(0x44ddb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44ddbd:{NFSU2_TR(0x44ddbd);
u8 U[4];
w4(U+0,u32(0x787f28ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44ddc3:{NFSU2_TR(0x44ddc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ddc6:{NFSU2_TR(0x44ddc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ddc7:{NFSU2_TR(0x44ddc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44ddcf:{NFSU2_TR(0x44ddcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ddd4ull));
TAIL_STATIC(0x575630u,575);
}
B44ddd4:L44ddd4:{c.instructions+=3;NFSU2_TR(0x44ddd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ddd7:{NFSU2_TR(0x44ddd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ddd8:{NFSU2_TR(0x44ddd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ddddull));
TAIL_STATIC(0x575630u,575);
}
B44dddd:L44dddd:{c.instructions+=3;NFSU2_TR(0x44dddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44dde0:{NFSU2_TR(0x44dde0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dde1:{NFSU2_TR(0x44dde1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44dde6ull));
TAIL_STATIC(0x575630u,575);
}
B44dde6:L44dde6:{c.instructions+=3;NFSU2_TR(0x44dde6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44dde9:{NFSU2_TR(0x44dde9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ddea:{NFSU2_TR(0x44ddea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ddefull));
TAIL_STATIC(0x575630u,575);
}
B44ddef:L44ddef:{c.instructions+=3;NFSU2_TR(0x44ddef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44ddf2:{NFSU2_TR(0x44ddf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44ddf3:{NFSU2_TR(0x44ddf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44ddf8ull));
TAIL_STATIC(0x575630u,575);
}
B44ddf8:L44ddf8:{c.instructions+=4;NFSU2_TR(0x44ddf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44ddfb:{NFSU2_TR(0x44ddfb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B44ddfe:{NFSU2_TR(0x44ddfe);
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
B44de00:{NFSU2_TR(0x44de00);
if(r1(R+518)){{goto L44de08;}}
}
B44de02:L44de02:{c.instructions+=3;NFSU2_TR(0x44de02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B44de04:{NFSU2_TR(0x44de04);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44de06:{NFSU2_TR(0x44de06);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44de08ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B44de08:L44de08:{c.instructions+=5;NFSU2_TR(0x44de08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44de0b:{NFSU2_TR(0x44de0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B44de0d:{NFSU2_TR(0x44de0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B44de15:{NFSU2_TR(0x44de15);
u8 U[4];
w4(U+0,u32(0x787cf0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B44de1b:{NFSU2_TR(0x44de1b);
if(r1(R+518)){{goto L44de42;}}
}
B44de1d:L44de1d:{c.instructions+=9;NFSU2_TR(0x44de1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44de20:{NFSU2_TR(0x44de20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44de27:{NFSU2_TR(0x44de27);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44de2d:{NFSU2_TR(0x44de2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44de30:{NFSU2_TR(0x44de30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x284ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44de36:{NFSU2_TR(0x44de36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44de39:{NFSU2_TR(0x44de39);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44de3a:{NFSU2_TR(0x44de3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44de3d:{NFSU2_TR(0x44de3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44de42ull));
TAIL_STATIC(0x48f760u,48f);
}
B44de42:L44de42:{c.instructions+=3;NFSU2_TR(0x44de42);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44de46:{NFSU2_TR(0x44de46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B44de47:{NFSU2_TR(0x44de47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44de4f;}}
}
B44de49:L44de49:{c.instructions+=1;NFSU2_TR(0x44de49);
s4(0x883dfc,u32(u32(m4(0x883dfc))-u32(u32(0x1ull))));
}
B44de4f:L44de4f:{c.instructions+=4;NFSU2_TR(0x44de4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B44de53:{NFSU2_TR(0x44de53);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44de5a:{NFSU2_TR(0x44de5a);
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
B44de5d:{NFSU2_TR(0x44de5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44de60:L44de60:{c.instructions+=5;NFSU2_TR(0x44de60);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44de64:{NFSU2_TR(0x44de64);
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
B44de66:{NFSU2_TR(0x44de66);
__builtin_memmove((R+0),(R+518),1);
}
B44de69:{NFSU2_TR(0x44de69);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B44de6c:{NFSU2_TR(0x44de6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44de70:L44de70:{c.instructions+=5;NFSU2_TR(0x44de70);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44de73:{NFSU2_TR(0x44de73);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B44de75:{NFSU2_TR(0x44de75);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B44de77:{NFSU2_TR(0x44de77);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B44de7c:{NFSU2_TR(0x44de7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44de80:L44de80:{c.instructions+=2;NFSU2_TR(0x44de80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44de83:{NFSU2_TR(0x44de83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B44de90:L44de90:{c.instructions+=13;NFSU2_TR(0x44de90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44de91:{NFSU2_TR(0x44de91);
__builtin_memmove((R+20),(R+16),4);
}
B44de93:{NFSU2_TR(0x44de93);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B44de96:{NFSU2_TR(0x44de96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa4ull))));
}
B44de9c:{NFSU2_TR(0x44de9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44de9f:{NFSU2_TR(0x44de9f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dea0:{NFSU2_TR(0x44dea0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dea1:{NFSU2_TR(0x44dea1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dea2:{NFSU2_TR(0x44dea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44dea5:{NFSU2_TR(0x44dea5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dea6:{NFSU2_TR(0x44dea6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dea7:{NFSU2_TR(0x44dea7);
__builtin_memmove((R+24),(R+4),4);
}
B44dea9:{NFSU2_TR(0x44dea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44deaeull));
TAIL_STATIC(0x445c20u,445);
}
B44deae:L44deae:{c.instructions+=4;NFSU2_TR(0x44deae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B44deb1:{NFSU2_TR(0x44deb1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44deb2:{NFSU2_TR(0x44deb2);
__builtin_memmove((R+4),(R+24),4);
}
B44deb4:{NFSU2_TR(0x44deb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44deb9ull));
TAIL_STATIC(0x445e00u,445);
}
B44deb9:L44deb9:{c.instructions+=4;NFSU2_TR(0x44deb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44debd:{NFSU2_TR(0x44debd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44debe:{NFSU2_TR(0x44debe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44debf:{NFSU2_TR(0x44debf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44dec4ull));
TAIL_STATIC(0x5baf90u,5ba);
}
B44dec4:L44dec4:{c.instructions+=9;NFSU2_TR(0x44dec4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B44dec7:{NFSU2_TR(0x44dec7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B44dec9:{NFSU2_TR(0x44dec9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44decc:{NFSU2_TR(0x44decc);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B44dece:{NFSU2_TR(0x44dece);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44ded6:{NFSU2_TR(0x44ded6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44dede:{NFSU2_TR(0x44dede);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44dee6:{NFSU2_TR(0x44dee6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44deee:{NFSU2_TR(0x44deee);
if(r1(R+518)){{goto L44df28;}}
}
B44def0:L44def0:{c.instructions+=17;NFSU2_TR(0x44def0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44def3:{NFSU2_TR(0x44def3);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44def6:{NFSU2_TR(0x44def6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B44def9:{NFSU2_TR(0x44def9);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44defc:{NFSU2_TR(0x44defc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B44deff:{NFSU2_TR(0x44deff);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44df03:{NFSU2_TR(0x44df03);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B44df05:{NFSU2_TR(0x44df05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44df06:{NFSU2_TR(0x44df06);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44df0a:{NFSU2_TR(0x44df0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44df0e:{NFSU2_TR(0x44df0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44df12:{NFSU2_TR(0x44df12);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44df16:{NFSU2_TR(0x44df16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44df17:{NFSU2_TR(0x44df17);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44df1b:{NFSU2_TR(0x44df1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44df1c:{NFSU2_TR(0x44df1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44df20:{NFSU2_TR(0x44df20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44df25ull));
TAIL_STATIC(0x43c9b0u,43c);
}
B44df25:L44df25:{c.instructions+=1;NFSU2_TR(0x44df25);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B44df28:L44df28:{c.instructions+=3;NFSU2_TR(0x44df28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44df2b:{NFSU2_TR(0x44df2b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44df31:{NFSU2_TR(0x44df31);
if(r1(R+518)){{goto L44df44;}}
}
B44df33:L44df33:{c.instructions+=2;NFSU2_TR(0x44df33);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B44df3a:{NFSU2_TR(0x44df3a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L44df44;}}
}
B44df3c:L44df3c:{c.instructions+=2;NFSU2_TR(0x44df3c);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B44df41:{NFSU2_TR(0x44df41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B44df44:L44df44:{c.instructions+=7;NFSU2_TR(0x44df44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44df45:{NFSU2_TR(0x44df45);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B44df49:{NFSU2_TR(0x44df49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44df4a:{NFSU2_TR(0x44df4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B44df4e:{NFSU2_TR(0x44df4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44df4f:{NFSU2_TR(0x44df4f);
__builtin_memmove((R+4),(R+24),4);
}
B44df51:{NFSU2_TR(0x44df51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44df56ull));
TAIL_STATIC(0x445eb0u,445);
}
B44df56:L44df56:{c.instructions+=3;NFSU2_TR(0x44df56);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44df5a:{NFSU2_TR(0x44df5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44df5b:{NFSU2_TR(0x44df5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44df60ull));
TAIL_STATIC(0x43c2b0u,43c);
}
B44df60:L44df60:{c.instructions+=3;NFSU2_TR(0x44df60);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44df64:{NFSU2_TR(0x44df64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44df65:{NFSU2_TR(0x44df65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44df6aull));
TAIL_STATIC(0x43c370u,43c);
}
B44df6a:L44df6a:{c.instructions+=6;NFSU2_TR(0x44df6a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B44df6e:{NFSU2_TR(0x44df6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B44df71:{NFSU2_TR(0x44df71);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+0),(U+0),2);
}
B44df74:{NFSU2_TR(0x44df74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B44df77:{NFSU2_TR(0x44df77);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x1ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B44df7b:{NFSU2_TR(0x44df7b);
if(r1(R+518)){{goto L44df88;}}
}
B44df7d:L44df7d:{c.instructions+=2;NFSU2_TR(0x44df7d);
u8 U[4];
__builtin_memmove((U+0),(R+12),2);
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B44df80:{NFSU2_TR(0x44df80);
if(r1(R+518)){{goto L44df88;}}
}
B44df82:L44df82:{c.instructions+=2;NFSU2_TR(0x44df82);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x5ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B44df86:{NFSU2_TR(0x44df86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L44dfa2;}}
}
B44df88:L44df88:{c.instructions+=7;NFSU2_TR(0x44df88);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44df8c:{NFSU2_TR(0x44df8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B44df94:{NFSU2_TR(0x44df94);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B44df96:{NFSU2_TR(0x44df96);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44df9a:{NFSU2_TR(0x44df9a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44df9e:{NFSU2_TR(0x44df9e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44dfa0:{NFSU2_TR(0x44dfa0);
{goto L44dfbc;}
}
B44dfa2:L44dfa2:{c.instructions+=7;NFSU2_TR(0x44dfa2);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44dfa6:{NFSU2_TR(0x44dfa6);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B44dfa8:{NFSU2_TR(0x44dfa8);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44dfac:{NFSU2_TR(0x44dfac);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B44dfae:{NFSU2_TR(0x44dfae);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44dfb2:{NFSU2_TR(0x44dfb2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B44dfb8:{NFSU2_TR(0x44dfb8);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44dfbc:L44dfbc:{c.instructions+=17;NFSU2_TR(0x44dfbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B44dfbf:{NFSU2_TR(0x44dfbf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44dfc3:{NFSU2_TR(0x44dfc3);
{u32 ea_=u32(r4(R+28)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44dfc6:{NFSU2_TR(0x44dfc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B44dfc9:{NFSU2_TR(0x44dfc9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dfca:{NFSU2_TR(0x44dfca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+8),(U+0),4);
}
B44dfcd:{NFSU2_TR(0x44dfcd);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44dfd1:{NFSU2_TR(0x44dfd1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44dfd5:{NFSU2_TR(0x44dfd5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dfd6:{NFSU2_TR(0x44dfd6);
{u32 ea_=u32(r4(R+28)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44dfd9:{NFSU2_TR(0x44dfd9);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B44dfdd:{NFSU2_TR(0x44dfdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B44dfde:{NFSU2_TR(0x44dfde);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44dfe2:{NFSU2_TR(0x44dfe2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B44dfe6:{NFSU2_TR(0x44dfe6);
{u32 ea_=u32(r4(R+28)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B44dfe9:{NFSU2_TR(0x44dfe9);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B44dfed:{NFSU2_TR(0x44dfed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44dff2ull));
TAIL_STATIC(0x443f70u,443);
}
B44dff2:L44dff2:{c.instructions+=4;NFSU2_TR(0x44dff2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B44dff4:{NFSU2_TR(0x44dff4);
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
B44dff7:{NFSU2_TR(0x44dff7);
__builtin_memmove((R+4),(R+24),4);
}
B44dff9:{NFSU2_TR(0x44dff9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x44dffcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B44dffc:L44dffc:{c.instructions+=2;NFSU2_TR(0x44dffc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B44dffe:{NFSU2_TR(0x44dffe);
if(r1(R+518)){TAIL_STATIC(0x44e04du,44e);}
TAIL_STATIC(0x44e000u,44e);
}
XIT:NFSU2_TR_EXIT(0x44d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
