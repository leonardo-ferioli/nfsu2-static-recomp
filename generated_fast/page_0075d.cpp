#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_761(u8* __restrict R,Cpu& c);
u32 body_763(u8* __restrict R,Cpu& c);
u32 body_765(u8* __restrict R,Cpu& c);
u32 body_766(u8* __restrict R,Cpu& c);
u32 body_767(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x75d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x75d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_75d(u8* __restrict R,Cpu& c);
u32 page_75d(Cpu& c){return body_75d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_75d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x75d001:goto L75d001;
case 0x75d003:goto L75d003;
case 0x75d005:goto L75d005;
case 0x75d00c:goto L75d00c;
case 0x75d00e:c.instructions+=3;goto B75d00e;
case 0x75d013:c.instructions+=2;goto B75d013;
case 0x75d016:c.instructions+=1;goto B75d016;
case 0x75d018:goto L75d018;
case 0x75d01b:c.instructions+=2;goto B75d01b;
case 0x75d01d:c.instructions+=1;goto B75d01d;
case 0x75d024:goto L75d024;
case 0x75d02c:goto L75d02c;
case 0x75d040:goto L75d040;
case 0x75d042:c.instructions+=11;goto B75d042;
case 0x75d044:c.instructions+=10;goto B75d044;
case 0x75d046:c.instructions+=9;goto B75d046;
case 0x75d049:c.instructions+=8;goto B75d049;
case 0x75d04c:c.instructions+=7;goto B75d04c;
case 0x75d04f:c.instructions+=6;goto B75d04f;
case 0x75d052:c.instructions+=5;goto B75d052;
case 0x75d055:c.instructions+=4;goto B75d055;
case 0x75d058:c.instructions+=3;goto B75d058;
case 0x75d05b:c.instructions+=2;goto B75d05b;
case 0x75d05e:c.instructions+=1;goto B75d05e;
case 0x75d060:goto L75d060;
case 0x75d062:goto L75d062;
case 0x75d06c:goto L75d06c;
case 0x75d06e:c.instructions+=9;goto B75d06e;
case 0x75d070:c.instructions+=8;goto B75d070;
case 0x75d072:c.instructions+=7;goto B75d072;
case 0x75d075:c.instructions+=6;goto B75d075;
case 0x75d078:c.instructions+=5;goto B75d078;
case 0x75d07b:c.instructions+=4;goto B75d07b;
case 0x75d07e:c.instructions+=3;goto B75d07e;
case 0x75d081:c.instructions+=2;goto B75d081;
case 0x75d084:c.instructions+=1;goto B75d084;
case 0x75d086:goto L75d086;
case 0x75d088:goto L75d088;
case 0x75d090:goto L75d090;
case 0x75d092:c.instructions+=7;goto B75d092;
case 0x75d094:c.instructions+=6;goto B75d094;
case 0x75d096:c.instructions+=5;goto B75d096;
case 0x75d099:c.instructions+=4;goto B75d099;
case 0x75d09c:c.instructions+=3;goto B75d09c;
case 0x75d09f:c.instructions+=2;goto B75d09f;
case 0x75d0a2:c.instructions+=1;goto B75d0a2;
case 0x75d0a4:goto L75d0a4;
case 0x75d0a6:goto L75d0a6;
case 0x75d0d0:goto L75d0d0;
case 0x75d0d4:c.instructions+=17;goto B75d0d4;
case 0x75d0d8:c.instructions+=16;goto B75d0d8;
case 0x75d0dc:c.instructions+=15;goto B75d0dc;
case 0x75d0e0:c.instructions+=14;goto B75d0e0;
case 0x75d0e4:c.instructions+=13;goto B75d0e4;
case 0x75d0e8:c.instructions+=12;goto B75d0e8;
case 0x75d0ec:c.instructions+=11;goto B75d0ec;
case 0x75d0f0:c.instructions+=10;goto B75d0f0;
case 0x75d0f4:c.instructions+=9;goto B75d0f4;
case 0x75d0f8:c.instructions+=8;goto B75d0f8;
case 0x75d0fc:c.instructions+=7;goto B75d0fc;
case 0x75d100:c.instructions+=6;goto B75d100;
case 0x75d104:c.instructions+=5;goto B75d104;
case 0x75d108:c.instructions+=4;goto B75d108;
case 0x75d10f:c.instructions+=3;goto B75d10f;
case 0x75d111:c.instructions+=2;goto B75d111;
case 0x75d113:c.instructions+=1;goto B75d113;
case 0x75d12c:goto L75d12c;
case 0x75d12f:c.instructions+=4;goto B75d12f;
case 0x75d130:c.instructions+=3;goto B75d130;
case 0x75d131:c.instructions+=2;goto B75d131;
case 0x75d132:c.instructions+=1;goto B75d132;
case 0x75d134:goto L75d134;
case 0x75d136:c.instructions+=6;goto B75d136;
case 0x75d138:c.instructions+=5;goto B75d138;
case 0x75d13b:c.instructions+=4;goto B75d13b;
case 0x75d13c:c.instructions+=3;goto B75d13c;
case 0x75d13d:c.instructions+=2;goto B75d13d;
case 0x75d13e:c.instructions+=1;goto B75d13e;
case 0x75d140:goto L75d140;
case 0x75d142:c.instructions+=8;goto B75d142;
case 0x75d144:c.instructions+=7;goto B75d144;
case 0x75d147:c.instructions+=6;goto B75d147;
case 0x75d14a:c.instructions+=5;goto B75d14a;
case 0x75d14d:c.instructions+=4;goto B75d14d;
case 0x75d14e:c.instructions+=3;goto B75d14e;
case 0x75d14f:c.instructions+=2;goto B75d14f;
case 0x75d150:c.instructions+=1;goto B75d150;
case 0x75d154:goto L75d154;
case 0x75d156:c.instructions+=10;goto B75d156;
case 0x75d158:c.instructions+=9;goto B75d158;
case 0x75d15b:c.instructions+=8;goto B75d15b;
case 0x75d15e:c.instructions+=7;goto B75d15e;
case 0x75d161:c.instructions+=6;goto B75d161;
case 0x75d164:c.instructions+=5;goto B75d164;
case 0x75d167:c.instructions+=4;goto B75d167;
case 0x75d168:c.instructions+=3;goto B75d168;
case 0x75d169:c.instructions+=2;goto B75d169;
case 0x75d16a:c.instructions+=1;goto B75d16a;
case 0x75d16c:goto L75d16c;
case 0x75d170:c.instructions+=3;goto B75d170;
case 0x75d174:c.instructions+=2;goto B75d174;
case 0x75d17a:c.instructions+=1;goto B75d17a;
case 0x75d17c:goto L75d17c;
case 0x75d17f:c.instructions+=3;goto B75d17f;
case 0x75d182:c.instructions+=2;goto B75d182;
case 0x75d185:c.instructions+=1;goto B75d185;
case 0x75d187:goto L75d187;
case 0x75d188:goto L75d188;
case 0x75d18a:goto L75d18a;
case 0x75d18b:c.instructions+=1;goto B75d18b;
case 0x75d194:goto L75d194;
case 0x75d196:c.instructions+=1;goto B75d196;
case 0x75d1a0:goto L75d1a0;
case 0x75d1a2:c.instructions+=3;goto B75d1a2;
case 0x75d1a7:c.instructions+=2;goto B75d1a7;
case 0x75d1aa:c.instructions+=1;goto B75d1aa;
case 0x75d1ac:goto L75d1ac;
case 0x75d1af:c.instructions+=2;goto B75d1af;
case 0x75d1b1:c.instructions+=1;goto B75d1b1;
case 0x75d1b8:goto L75d1b8;
case 0x75d1cc:goto L75d1cc;
case 0x75d1cf:c.instructions+=7;goto B75d1cf;
case 0x75d1d1:c.instructions+=6;goto B75d1d1;
case 0x75d1d4:c.instructions+=5;goto B75d1d4;
case 0x75d1d7:c.instructions+=4;goto B75d1d7;
case 0x75d1da:c.instructions+=3;goto B75d1da;
case 0x75d1dd:c.instructions+=2;goto B75d1dd;
case 0x75d1e0:c.instructions+=1;goto B75d1e0;
case 0x75d1e2:goto L75d1e2;
case 0x75d1e3:goto L75d1e3;
case 0x75d1e5:goto L75d1e5;
case 0x75d1e6:c.instructions+=1;goto B75d1e6;
case 0x75d1f0:goto L75d1f0;
case 0x75d1f3:c.instructions+=9;goto B75d1f3;
case 0x75d1f5:c.instructions+=8;goto B75d1f5;
case 0x75d1f8:c.instructions+=7;goto B75d1f8;
case 0x75d1fb:c.instructions+=6;goto B75d1fb;
case 0x75d1fe:c.instructions+=5;goto B75d1fe;
case 0x75d201:c.instructions+=4;goto B75d201;
case 0x75d204:c.instructions+=3;goto B75d204;
case 0x75d207:c.instructions+=2;goto B75d207;
case 0x75d20a:c.instructions+=1;goto B75d20a;
case 0x75d20c:goto L75d20c;
case 0x75d20d:goto L75d20d;
case 0x75d20f:goto L75d20f;
case 0x75d210:c.instructions+=1;goto B75d210;
case 0x75d218:goto L75d218;
case 0x75d21b:c.instructions+=11;goto B75d21b;
case 0x75d21d:c.instructions+=10;goto B75d21d;
case 0x75d220:c.instructions+=9;goto B75d220;
case 0x75d223:c.instructions+=8;goto B75d223;
case 0x75d226:c.instructions+=7;goto B75d226;
case 0x75d229:c.instructions+=6;goto B75d229;
case 0x75d22c:c.instructions+=5;goto B75d22c;
case 0x75d22f:c.instructions+=4;goto B75d22f;
case 0x75d232:c.instructions+=3;goto B75d232;
case 0x75d235:c.instructions+=2;goto B75d235;
case 0x75d238:c.instructions+=1;goto B75d238;
case 0x75d23e:goto L75d23e;
case 0x75d23f:goto L75d23f;
case 0x75d241:goto L75d241;
case 0x75d242:c.instructions+=1;goto B75d242;
case 0x75d26c:goto L75d26c;
case 0x75d270:c.instructions+=17;goto B75d270;
case 0x75d274:c.instructions+=16;goto B75d274;
case 0x75d278:c.instructions+=15;goto B75d278;
case 0x75d27c:c.instructions+=14;goto B75d27c;
case 0x75d280:c.instructions+=13;goto B75d280;
case 0x75d284:c.instructions+=12;goto B75d284;
case 0x75d288:c.instructions+=11;goto B75d288;
case 0x75d28c:c.instructions+=10;goto B75d28c;
case 0x75d290:c.instructions+=9;goto B75d290;
case 0x75d294:c.instructions+=8;goto B75d294;
case 0x75d298:c.instructions+=7;goto B75d298;
case 0x75d29c:c.instructions+=6;goto B75d29c;
case 0x75d2a0:c.instructions+=5;goto B75d2a0;
case 0x75d2a4:c.instructions+=4;goto B75d2a4;
case 0x75d2ab:c.instructions+=3;goto B75d2ab;
case 0x75d2ad:c.instructions+=2;goto B75d2ad;
case 0x75d2af:c.instructions+=1;goto B75d2af;
case 0x75d2c8:goto L75d2c8;
case 0x75d2cb:c.instructions+=4;goto B75d2cb;
case 0x75d2cc:c.instructions+=3;goto B75d2cc;
case 0x75d2cd:c.instructions+=2;goto B75d2cd;
case 0x75d2ce:c.instructions+=1;goto B75d2ce;
case 0x75d2d0:goto L75d2d0;
case 0x75d2d3:c.instructions+=6;goto B75d2d3;
case 0x75d2d6:c.instructions+=5;goto B75d2d6;
case 0x75d2d9:c.instructions+=4;goto B75d2d9;
case 0x75d2da:c.instructions+=3;goto B75d2da;
case 0x75d2db:c.instructions+=2;goto B75d2db;
case 0x75d2dc:c.instructions+=1;goto B75d2dc;
case 0x75d2e0:goto L75d2e0;
case 0x75d2e3:c.instructions+=8;goto B75d2e3;
case 0x75d2e6:c.instructions+=7;goto B75d2e6;
case 0x75d2e9:c.instructions+=6;goto B75d2e9;
case 0x75d2ec:c.instructions+=5;goto B75d2ec;
case 0x75d2ef:c.instructions+=4;goto B75d2ef;
case 0x75d2f0:c.instructions+=3;goto B75d2f0;
case 0x75d2f1:c.instructions+=2;goto B75d2f1;
case 0x75d2f2:c.instructions+=1;goto B75d2f2;
case 0x75d2f4:goto L75d2f4;
case 0x75d2f7:c.instructions+=10;goto B75d2f7;
case 0x75d2fa:c.instructions+=9;goto B75d2fa;
case 0x75d2fd:c.instructions+=8;goto B75d2fd;
case 0x75d300:c.instructions+=7;goto B75d300;
case 0x75d303:c.instructions+=6;goto B75d303;
case 0x75d306:c.instructions+=5;goto B75d306;
case 0x75d309:c.instructions+=4;goto B75d309;
case 0x75d30a:c.instructions+=3;goto B75d30a;
case 0x75d30b:c.instructions+=2;goto B75d30b;
case 0x75d30c:c.instructions+=1;goto B75d30c;
case 0x75d30d:goto L75d30d;
case 0x75d30e:c.instructions+=5;goto B75d30e;
case 0x75d312:c.instructions+=4;goto B75d312;
case 0x75d313:c.instructions+=3;goto B75d313;
case 0x75d316:c.instructions+=2;goto B75d316;
case 0x75d31a:c.instructions+=1;goto B75d31a;
case 0x75d31c:goto L75d31c;
case 0x75d31d:c.instructions+=1;goto B75d31d;
case 0x75d322:goto L75d322;
case 0x75d323:c.instructions+=2;goto B75d323;
case 0x75d325:c.instructions+=1;goto B75d325;
case 0x75d32a:goto L75d32a;
case 0x75d32d:c.instructions+=1;goto B75d32d;
case 0x75d332:goto L75d332;
case 0x75d335:c.instructions+=2;goto B75d335;
case 0x75d337:c.instructions+=1;goto B75d337;
case 0x75d339:goto L75d339;
case 0x75d33c:c.instructions+=1;goto B75d33c;
case 0x75d33e:goto L75d33e;
case 0x75d341:c.instructions+=2;goto B75d341;
case 0x75d343:c.instructions+=1;goto B75d343;
case 0x75d345:goto L75d345;
case 0x75d346:c.instructions+=1;goto B75d346;
case 0x75d34b:goto L75d34b;
case 0x75d34f:c.instructions+=1;goto B75d34f;
case 0x75d350:goto L75d350;
case 0x75d354:c.instructions+=4;goto B75d354;
case 0x75d356:c.instructions+=3;goto B75d356;
case 0x75d357:c.instructions+=2;goto B75d357;
case 0x75d358:c.instructions+=1;goto B75d358;
case 0x75d359:goto L75d359;
case 0x75d35b:c.instructions+=2;goto B75d35b;
case 0x75d360:c.instructions+=1;goto B75d360;
case 0x75d365:goto L75d365;
case 0x75d369:c.instructions+=3;goto B75d369;
case 0x75d36c:c.instructions+=2;goto B75d36c;
case 0x75d370:c.instructions+=1;goto B75d370;
case 0x75d372:goto L75d372;
case 0x75d376:goto L75d376;
case 0x75d379:c.instructions+=1;goto B75d379;
case 0x75d37e:goto L75d37e;
case 0x75d37f:goto L75d37f;
case 0x75d380:c.instructions+=1;goto B75d380;
case 0x75d385:goto L75d385;
case 0x75d386:c.instructions+=3;goto B75d386;
case 0x75d38a:c.instructions+=2;goto B75d38a;
case 0x75d38b:c.instructions+=1;goto B75d38b;
case 0x75d390:goto L75d390;
case 0x75d391:c.instructions+=3;goto B75d391;
case 0x75d394:c.instructions+=2;goto B75d394;
case 0x75d398:c.instructions+=1;goto B75d398;
case 0x75d39d:goto L75d39d;
case 0x75d3a2:goto L75d3a2;
case 0x75d3a3:c.instructions+=1;goto B75d3a3;
case 0x75d3a8:goto L75d3a8;
case 0x75d3a9:c.instructions+=1;goto B75d3a9;
case 0x75d3aa:goto L75d3aa;
case 0x75d3ac:c.instructions+=2;goto B75d3ac;
case 0x75d3b1:c.instructions+=1;goto B75d3b1;
case 0x75d3b6:goto L75d3b6;
case 0x75d3bb:goto L75d3bb;
case 0x75d3be:c.instructions+=2;goto B75d3be;
case 0x75d3c0:c.instructions+=1;goto B75d3c0;
case 0x75d3c2:goto L75d3c2;
case 0x75d3c7:goto L75d3c7;
case 0x75d3cd:c.instructions+=2;goto B75d3cd;
case 0x75d3cf:c.instructions+=1;goto B75d3cf;
case 0x75d3d1:goto L75d3d1;
case 0x75d3d5:c.instructions+=5;goto B75d3d5;
case 0x75d3d6:c.instructions+=4;goto B75d3d6;
case 0x75d3d9:c.instructions+=3;goto B75d3d9;
case 0x75d3dc:c.instructions+=2;goto B75d3dc;
case 0x75d3df:c.instructions+=1;goto B75d3df;
case 0x75d3e4:goto L75d3e4;
case 0x75d3e7:c.instructions+=3;goto B75d3e7;
case 0x75d3ea:c.instructions+=2;goto B75d3ea;
case 0x75d3ee:c.instructions+=1;goto B75d3ee;
case 0x75d3f3:goto L75d3f3;
case 0x75d3f6:goto L75d3f6;
case 0x75d3fb:goto L75d3fb;
case 0x75d3fc:goto L75d3fc;
case 0x75d3ff:c.instructions+=1;goto B75d3ff;
case 0x75d404:goto L75d404;
case 0x75d405:c.instructions+=1;goto B75d405;
case 0x75d406:goto L75d406;
case 0x75d408:c.instructions+=3;goto B75d408;
case 0x75d40c:c.instructions+=2;goto B75d40c;
case 0x75d410:c.instructions+=1;goto B75d410;
case 0x75d415:goto L75d415;
case 0x75d418:c.instructions+=1;goto B75d418;
case 0x75d419:goto L75d419;
case 0x75d41e:c.instructions+=1;goto B75d41e;
case 0x75d424:goto L75d424;
case 0x75d426:c.instructions+=1;goto B75d426;
case 0x75d428:goto L75d428;
case 0x75d42d:c.instructions+=2;goto B75d42d;
case 0x75d42e:c.instructions+=1;goto B75d42e;
case 0x75d434:goto L75d434;
case 0x75d436:c.instructions+=1;goto B75d436;
case 0x75d438:goto L75d438;
case 0x75d43c:c.instructions+=1;goto B75d43c;
case 0x75d43e:goto L75d43e;
case 0x75d442:c.instructions+=1;goto B75d442;
case 0x75d449:goto L75d449;
case 0x75d44b:c.instructions+=1;goto B75d44b;
case 0x75d450:goto L75d450;
case 0x75d451:c.instructions+=1;goto B75d451;
case 0x75d452:goto L75d452;
case 0x75d454:c.instructions+=1;goto B75d454;
case 0x75d459:goto L75d459;
case 0x75d45a:c.instructions+=1;goto B75d45a;
case 0x75d45b:goto L75d45b;
case 0x75d460:c.instructions+=2;goto B75d460;
case 0x75d462:c.instructions+=1;goto B75d462;
case 0x75d464:goto L75d464;
case 0x75d466:goto L75d466;
case 0x75d467:c.instructions+=7;goto B75d467;
case 0x75d468:c.instructions+=6;goto B75d468;
case 0x75d46d:c.instructions+=5;goto B75d46d;
case 0x75d472:c.instructions+=4;goto B75d472;
case 0x75d474:c.instructions+=3;goto B75d474;
case 0x75d476:c.instructions+=2;goto B75d476;
case 0x75d478:c.instructions+=1;goto B75d478;
case 0x75d47a:goto L75d47a;
case 0x75d47c:c.instructions+=1;goto B75d47c;
case 0x75d47e:goto L75d47e;
case 0x75d480:c.instructions+=2;goto B75d480;
case 0x75d482:c.instructions+=1;goto B75d482;
case 0x75d484:goto L75d484;
case 0x75d486:goto L75d486;
case 0x75d489:c.instructions+=2;goto B75d489;
case 0x75d48b:c.instructions+=1;goto B75d48b;
case 0x75d48d:goto L75d48d;
case 0x75d48f:c.instructions+=1;goto B75d48f;
case 0x75d491:goto L75d491;
case 0x75d496:c.instructions+=1;goto B75d496;
case 0x75d49b:goto L75d49b;
case 0x75d4a0:c.instructions+=5;goto B75d4a0;
case 0x75d4a2:c.instructions+=4;goto B75d4a2;
case 0x75d4a7:c.instructions+=3;goto B75d4a7;
case 0x75d4a9:c.instructions+=2;goto B75d4a9;
case 0x75d4aa:c.instructions+=1;goto B75d4aa;
case 0x75d4ac:goto L75d4ac;
case 0x75d4ae:c.instructions+=2;goto B75d4ae;
case 0x75d4b0:c.instructions+=1;goto B75d4b0;
case 0x75d4b2:goto L75d4b2;
case 0x75d4b4:goto L75d4b4;
case 0x75d4b7:c.instructions+=2;goto B75d4b7;
case 0x75d4b9:c.instructions+=1;goto B75d4b9;
case 0x75d4bb:goto L75d4bb;
case 0x75d4bd:goto L75d4bd;
case 0x75d4be:c.instructions+=2;goto B75d4be;
case 0x75d4bf:c.instructions+=1;goto B75d4bf;
case 0x75d4c0:goto L75d4c0;
case 0x75d4c1:c.instructions+=5;goto B75d4c1;
case 0x75d4c3:c.instructions+=4;goto B75d4c3;
case 0x75d4c4:c.instructions+=3;goto B75d4c4;
case 0x75d4c5:c.instructions+=2;goto B75d4c5;
case 0x75d4c7:c.instructions+=1;goto B75d4c7;
case 0x75d4cc:goto L75d4cc;
case 0x75d4ce:c.instructions+=4;goto B75d4ce;
case 0x75d4cf:c.instructions+=3;goto B75d4cf;
case 0x75d4d5:c.instructions+=2;goto B75d4d5;
case 0x75d4d6:c.instructions+=1;goto B75d4d6;
case 0x75d4d8:goto L75d4d8;
case 0x75d4db:c.instructions+=1;goto B75d4db;
case 0x75d4e1:goto L75d4e1;
case 0x75d4e2:c.instructions+=1;goto B75d4e2;
case 0x75d4e8:goto L75d4e8;
case 0x75d4ec:c.instructions+=4;goto B75d4ec;
case 0x75d4ef:c.instructions+=3;goto B75d4ef;
case 0x75d4f5:c.instructions+=2;goto B75d4f5;
case 0x75d4fa:c.instructions+=1;goto B75d4fa;
case 0x75d4fc:goto L75d4fc;
case 0x75d502:c.instructions+=2;goto B75d502;
case 0x75d504:c.instructions+=1;goto B75d504;
case 0x75d506:goto L75d506;
case 0x75d50b:c.instructions+=3;goto B75d50b;
case 0x75d50e:c.instructions+=2;goto B75d50e;
case 0x75d510:c.instructions+=1;goto B75d510;
case 0x75d512:goto L75d512;
case 0x75d514:c.instructions+=2;goto B75d514;
case 0x75d516:c.instructions+=1;goto B75d516;
case 0x75d518:goto L75d518;
case 0x75d51a:goto L75d51a;
case 0x75d51f:c.instructions+=2;goto B75d51f;
case 0x75d522:c.instructions+=1;goto B75d522;
case 0x75d528:goto L75d528;
case 0x75d52d:c.instructions+=1;goto B75d52d;
case 0x75d52f:goto L75d52f;
case 0x75d534:c.instructions+=4;goto B75d534;
case 0x75d539:c.instructions+=3;goto B75d539;
case 0x75d53b:c.instructions+=2;goto B75d53b;
case 0x75d53d:c.instructions+=1;goto B75d53d;
case 0x75d53f:goto L75d53f;
case 0x75d541:c.instructions+=2;goto B75d541;
case 0x75d543:c.instructions+=1;goto B75d543;
case 0x75d545:goto L75d545;
case 0x75d547:goto L75d547;
case 0x75d54a:c.instructions+=2;goto B75d54a;
case 0x75d54c:c.instructions+=1;goto B75d54c;
case 0x75d54e:goto L75d54e;
case 0x75d553:c.instructions+=4;goto B75d553;
case 0x75d558:c.instructions+=3;goto B75d558;
case 0x75d55a:c.instructions+=2;goto B75d55a;
case 0x75d55c:c.instructions+=1;goto B75d55c;
case 0x75d55e:goto L75d55e;
case 0x75d560:c.instructions+=2;goto B75d560;
case 0x75d562:c.instructions+=1;goto B75d562;
case 0x75d564:goto L75d564;
case 0x75d566:goto L75d566;
case 0x75d569:c.instructions+=2;goto B75d569;
case 0x75d56b:c.instructions+=1;goto B75d56b;
case 0x75d56d:goto L75d56d;
case 0x75d571:c.instructions+=3;goto B75d571;
case 0x75d572:c.instructions+=2;goto B75d572;
case 0x75d573:c.instructions+=1;goto B75d573;
case 0x75d575:goto L75d575;
case 0x75d577:c.instructions+=1;goto B75d577;
case 0x75d57c:goto L75d57c;
case 0x75d57e:goto L75d57e;
case 0x75d581:c.instructions+=2;goto B75d581;
case 0x75d58b:c.instructions+=1;goto B75d58b;
case 0x75d590:goto L75d590;
case 0x75d591:c.instructions+=2;goto B75d591;
case 0x75d592:c.instructions+=1;goto B75d592;
case 0x75d593:goto L75d593;
case 0x75d595:c.instructions+=3;goto B75d595;
case 0x75d597:c.instructions+=2;goto B75d597;
case 0x75d59b:c.instructions+=1;goto B75d59b;
case 0x75d5a0:goto L75d5a0;
case 0x75d5a3:c.instructions+=1;goto B75d5a3;
case 0x75d5a4:goto L75d5a4;
case 0x75d5a6:c.instructions+=3;goto B75d5a6;
case 0x75d5a8:c.instructions+=2;goto B75d5a8;
case 0x75d5ac:c.instructions+=1;goto B75d5ac;
case 0x75d5b1:goto L75d5b1;
case 0x75d5b4:c.instructions+=1;goto B75d5b4;
case 0x75d5b5:goto L75d5b5;
case 0x75d5b7:c.instructions+=3;goto B75d5b7;
case 0x75d5b9:c.instructions+=2;goto B75d5b9;
case 0x75d5bb:c.instructions+=1;goto B75d5bb;
case 0x75d5c0:goto L75d5c0;
case 0x75d5c3:c.instructions+=1;goto B75d5c3;
case 0x75d5c4:goto L75d5c4;
case 0x75d5c6:c.instructions+=3;goto B75d5c6;
case 0x75d5c8:c.instructions+=2;goto B75d5c8;
case 0x75d5ca:c.instructions+=1;goto B75d5ca;
case 0x75d5cf:goto L75d5cf;
case 0x75d5d2:c.instructions+=1;goto B75d5d2;
case 0x75d5d3:goto L75d5d3;
case 0x75d5d4:c.instructions+=2;goto B75d5d4;
case 0x75d5d5:c.instructions+=1;goto B75d5d5;
case 0x75d5da:goto L75d5da;
case 0x75d5dd:c.instructions+=2;goto B75d5dd;
case 0x75d5e3:c.instructions+=1;goto B75d5e3;
case 0x75d5e5:goto L75d5e5;
case 0x75d5ea:goto L75d5ea;
case 0x75d5ec:goto L75d5ec;
case 0x75d5f0:goto L75d5f0;
case 0x75d5f4:c.instructions+=2;goto B75d5f4;
case 0x75d5f7:c.instructions+=1;goto B75d5f7;
case 0x75d5f9:goto L75d5f9;
case 0x75d5fb:c.instructions+=3;goto B75d5fb;
case 0x75d5fc:c.instructions+=2;goto B75d5fc;
case 0x75d5fd:c.instructions+=1;goto B75d5fd;
case 0x75d602:goto L75d602;
case 0x75d605:c.instructions+=1;goto B75d605;
case 0x75d607:goto L75d607;
case 0x75d60a:c.instructions+=2;goto B75d60a;
case 0x75d60e:c.instructions+=1;goto B75d60e;
case 0x75d611:goto L75d611;
case 0x75d613:c.instructions+=1;goto B75d613;
case 0x75d615:goto L75d615;
case 0x75d616:c.instructions+=1;goto B75d616;
case 0x75d618:goto L75d618;
case 0x75d61b:c.instructions+=4;goto B75d61b;
case 0x75d61c:c.instructions+=3;goto B75d61c;
case 0x75d61f:c.instructions+=2;goto B75d61f;
case 0x75d621:c.instructions+=1;goto B75d621;
case 0x75d623:goto L75d623;
case 0x75d626:c.instructions+=1;goto B75d626;
case 0x75d628:goto L75d628;
case 0x75d62b:c.instructions+=1;goto B75d62b;
case 0x75d62c:goto L75d62c;
case 0x75d62e:goto L75d62e;
case 0x75d631:c.instructions+=1;goto B75d631;
case 0x75d633:goto L75d633;
case 0x75d636:c.instructions+=1;goto B75d636;
case 0x75d638:goto L75d638;
case 0x75d63b:c.instructions+=1;goto B75d63b;
case 0x75d63d:goto L75d63d;
case 0x75d640:goto L75d640;
case 0x75d643:c.instructions+=1;goto B75d643;
case 0x75d645:goto L75d645;
case 0x75d648:c.instructions+=4;goto B75d648;
case 0x75d64b:c.instructions+=3;goto B75d64b;
case 0x75d64e:c.instructions+=2;goto B75d64e;
case 0x75d64f:c.instructions+=1;goto B75d64f;
case 0x75d651:goto L75d651;
case 0x75d654:c.instructions+=3;goto B75d654;
case 0x75d655:c.instructions+=2;goto B75d655;
case 0x75d656:c.instructions+=1;goto B75d656;
case 0x75d658:goto L75d658;
case 0x75d65a:goto L75d65a;
case 0x75d65b:goto L75d65b;
case 0x75d660:goto L75d660;
case 0x75d661:c.instructions+=5;goto B75d661;
case 0x75d663:c.instructions+=4;goto B75d663;
case 0x75d664:c.instructions+=3;goto B75d664;
case 0x75d667:c.instructions+=2;goto B75d667;
case 0x75d669:c.instructions+=1;goto B75d669;
case 0x75d66c:goto L75d66c;
case 0x75d66e:goto L75d66e;
case 0x75d671:c.instructions+=4;goto B75d671;
case 0x75d673:c.instructions+=3;goto B75d673;
case 0x75d676:c.instructions+=2;goto B75d676;
case 0x75d679:c.instructions+=1;goto B75d679;
case 0x75d67a:goto L75d67a;
case 0x75d67c:goto L75d67c;
case 0x75d67f:c.instructions+=2;goto B75d67f;
case 0x75d681:c.instructions+=1;goto B75d681;
case 0x75d683:goto L75d683;
case 0x75d685:c.instructions+=1;goto B75d685;
case 0x75d687:goto L75d687;
case 0x75d689:goto L75d689;
case 0x75d68a:c.instructions+=3;goto B75d68a;
case 0x75d68b:c.instructions+=2;goto B75d68b;
case 0x75d68c:c.instructions+=1;goto B75d68c;
case 0x75d68d:goto L75d68d;
case 0x75d68e:c.instructions+=13;goto B75d68e;
case 0x75d690:c.instructions+=12;goto B75d690;
case 0x75d691:c.instructions+=11;goto B75d691;
case 0x75d692:c.instructions+=10;goto B75d692;
case 0x75d695:c.instructions+=9;goto B75d695;
case 0x75d696:c.instructions+=8;goto B75d696;
case 0x75d697:c.instructions+=7;goto B75d697;
case 0x75d69a:c.instructions+=6;goto B75d69a;
case 0x75d69e:c.instructions+=5;goto B75d69e;
case 0x75d6a0:c.instructions+=4;goto B75d6a0;
case 0x75d6a3:c.instructions+=3;goto B75d6a3;
case 0x75d6a6:c.instructions+=2;goto B75d6a6;
case 0x75d6a8:c.instructions+=1;goto B75d6a8;
case 0x75d6aa:goto L75d6aa;
case 0x75d6ac:c.instructions+=1;goto B75d6ac;
case 0x75d6b1:goto L75d6b1;
case 0x75d6b2:c.instructions+=3;goto B75d6b2;
case 0x75d6b5:c.instructions+=2;goto B75d6b5;
case 0x75d6bb:c.instructions+=1;goto B75d6bb;
case 0x75d6bd:goto L75d6bd;
case 0x75d6c0:c.instructions+=2;goto B75d6c0;
case 0x75d6c3:c.instructions+=1;goto B75d6c3;
case 0x75d6c5:goto L75d6c5;
case 0x75d6cc:goto L75d6cc;
case 0x75d6cf:c.instructions+=2;goto B75d6cf;
case 0x75d6d5:c.instructions+=1;goto B75d6d5;
case 0x75d6d7:goto L75d6d7;
case 0x75d6da:c.instructions+=2;goto B75d6da;
case 0x75d6dc:c.instructions+=1;goto B75d6dc;
case 0x75d6de:goto L75d6de;
case 0x75d6e0:c.instructions+=2;goto B75d6e0;
case 0x75d6e2:c.instructions+=1;goto B75d6e2;
case 0x75d6e4:goto L75d6e4;
case 0x75d6e6:goto L75d6e6;
case 0x75d6e7:c.instructions+=3;goto B75d6e7;
case 0x75d6ea:c.instructions+=2;goto B75d6ea;
case 0x75d6ec:c.instructions+=1;goto B75d6ec;
case 0x75d6f1:goto L75d6f1;
case 0x75d6f4:c.instructions+=5;goto B75d6f4;
case 0x75d6f6:c.instructions+=4;goto B75d6f6;
case 0x75d6f9:c.instructions+=3;goto B75d6f9;
case 0x75d6fb:c.instructions+=2;goto B75d6fb;
case 0x75d6fe:c.instructions+=1;goto B75d6fe;
case 0x75d700:goto L75d700;
case 0x75d703:c.instructions+=1;goto B75d703;
case 0x75d705:goto L75d705;
case 0x75d707:c.instructions+=1;goto B75d707;
case 0x75d709:goto L75d709;
case 0x75d70a:c.instructions+=1;goto B75d70a;
case 0x75d70f:goto L75d70f;
case 0x75d711:c.instructions+=2;goto B75d711;
case 0x75d712:c.instructions+=1;goto B75d712;
case 0x75d714:goto L75d714;
case 0x75d718:c.instructions+=2;goto B75d718;
case 0x75d71a:c.instructions+=1;goto B75d71a;
case 0x75d71c:goto L75d71c;
case 0x75d71e:c.instructions+=3;goto B75d71e;
case 0x75d720:c.instructions+=2;goto B75d720;
case 0x75d723:c.instructions+=1;goto B75d723;
case 0x75d725:goto L75d725;
case 0x75d726:c.instructions+=3;goto B75d726;
case 0x75d729:c.instructions+=2;goto B75d729;
case 0x75d72c:c.instructions+=1;goto B75d72c;
case 0x75d731:goto L75d731;
case 0x75d734:c.instructions+=2;goto B75d734;
case 0x75d737:c.instructions+=1;goto B75d737;
case 0x75d739:goto L75d739;
case 0x75d73c:c.instructions+=3;goto B75d73c;
case 0x75d73e:c.instructions+=2;goto B75d73e;
case 0x75d740:c.instructions+=1;goto B75d740;
case 0x75d742:goto L75d742;
case 0x75d745:c.instructions+=1;goto B75d745;
case 0x75d747:goto L75d747;
case 0x75d74a:c.instructions+=4;goto B75d74a;
case 0x75d74d:c.instructions+=3;goto B75d74d;
case 0x75d74e:c.instructions+=2;goto B75d74e;
case 0x75d74f:c.instructions+=1;goto B75d74f;
case 0x75d754:goto L75d754;
case 0x75d757:c.instructions+=3;goto B75d757;
case 0x75d758:c.instructions+=2;goto B75d758;
case 0x75d759:c.instructions+=1;goto B75d759;
case 0x75d75b:goto L75d75b;
case 0x75d75e:c.instructions+=5;goto B75d75e;
case 0x75d761:c.instructions+=4;goto B75d761;
case 0x75d762:c.instructions+=3;goto B75d762;
case 0x75d764:c.instructions+=2;goto B75d764;
case 0x75d767:c.instructions+=1;goto B75d767;
case 0x75d769:goto L75d769;
case 0x75d770:goto L75d770;
case 0x75d772:c.instructions+=1;goto B75d772;
case 0x75d778:goto L75d778;
case 0x75d77b:goto L75d77b;
case 0x75d77c:goto L75d77c;
case 0x75d77d:c.instructions+=3;goto B75d77d;
case 0x75d77e:c.instructions+=2;goto B75d77e;
case 0x75d77f:c.instructions+=1;goto B75d77f;
case 0x75d780:goto L75d780;
case 0x75d782:goto L75d782;
case 0x75d784:c.instructions+=3;goto B75d784;
case 0x75d786:c.instructions+=2;goto B75d786;
case 0x75d789:c.instructions+=1;goto B75d789;
case 0x75d78b:goto L75d78b;
case 0x75d78f:c.instructions+=2;goto B75d78f;
case 0x75d792:c.instructions+=1;goto B75d792;
case 0x75d794:goto L75d794;
case 0x75d796:c.instructions+=2;goto B75d796;
case 0x75d79b:c.instructions+=1;goto B75d79b;
case 0x75d7a0:goto L75d7a0;
case 0x75d7a3:c.instructions+=1;goto B75d7a3;
case 0x75d7a8:goto L75d7a8;
case 0x75d7a9:c.instructions+=6;goto B75d7a9;
case 0x75d7ad:c.instructions+=5;goto B75d7ad;
case 0x75d7b0:c.instructions+=4;goto B75d7b0;
case 0x75d7b3:c.instructions+=3;goto B75d7b3;
case 0x75d7b6:c.instructions+=2;goto B75d7b6;
case 0x75d7b9:c.instructions+=1;goto B75d7b9;
case 0x75d7be:goto L75d7be;
case 0x75d7c1:c.instructions+=3;goto B75d7c1;
case 0x75d7c4:c.instructions+=2;goto B75d7c4;
case 0x75d7c8:c.instructions+=1;goto B75d7c8;
case 0x75d7cd:goto L75d7cd;
case 0x75d7d0:c.instructions+=1;goto B75d7d0;
case 0x75d7d5:goto L75d7d5;
case 0x75d7d6:goto L75d7d6;
case 0x75d7d9:c.instructions+=1;goto B75d7d9;
case 0x75d7de:goto L75d7de;
case 0x75d7df:c.instructions+=1;goto B75d7df;
case 0x75d7e0:goto L75d7e0;
case 0x75d7e1:c.instructions+=9;goto B75d7e1;
case 0x75d7e5:c.instructions+=8;goto B75d7e5;
case 0x75d7eb:c.instructions+=7;goto B75d7eb;
case 0x75d7f0:c.instructions+=6;goto B75d7f0;
case 0x75d7f3:c.instructions+=5;goto B75d7f3;
case 0x75d7f4:c.instructions+=4;goto B75d7f4;
case 0x75d7f5:c.instructions+=3;goto B75d7f5;
case 0x75d7f6:c.instructions+=2;goto B75d7f6;
case 0x75d7f9:c.instructions+=1;goto B75d7f9;
case 0x75d7fe:goto L75d7fe;
case 0x75d803:c.instructions+=9;goto B75d803;
case 0x75d805:c.instructions+=8;goto B75d805;
case 0x75d806:c.instructions+=7;goto B75d806;
case 0x75d807:c.instructions+=6;goto B75d807;
case 0x75d809:c.instructions+=5;goto B75d809;
case 0x75d80c:c.instructions+=4;goto B75d80c;
case 0x75d810:c.instructions+=3;goto B75d810;
case 0x75d813:c.instructions+=2;goto B75d813;
case 0x75d814:c.instructions+=1;goto B75d814;
case 0x75d81a:goto L75d81a;
case 0x75d81d:c.instructions+=6;goto B75d81d;
case 0x75d820:c.instructions+=5;goto B75d820;
case 0x75d822:c.instructions+=4;goto B75d822;
case 0x75d827:c.instructions+=3;goto B75d827;
case 0x75d828:c.instructions+=2;goto B75d828;
case 0x75d829:c.instructions+=1;goto B75d829;
case 0x75d82e:goto L75d82e;
case 0x75d834:c.instructions+=2;goto B75d834;
case 0x75d837:c.instructions+=1;goto B75d837;
case 0x75d839:goto L75d839;
case 0x75d83c:c.instructions+=2;goto B75d83c;
case 0x75d83d:c.instructions+=1;goto B75d83d;
case 0x75d843:goto L75d843;
case 0x75d846:c.instructions+=1;goto B75d846;
case 0x75d848:goto L75d848;
case 0x75d84b:c.instructions+=1;goto B75d84b;
case 0x75d84d:goto L75d84d;
case 0x75d852:c.instructions+=1;goto B75d852;
case 0x75d854:goto L75d854;
case 0x75d858:c.instructions+=1;goto B75d858;
case 0x75d85a:goto L75d85a;
case 0x75d864:c.instructions+=1;goto B75d864;
case 0x75d866:goto L75d866;
case 0x75d86d:c.instructions+=1;goto B75d86d;
case 0x75d86f:goto L75d86f;
case 0x75d876:goto L75d876;
case 0x75d879:c.instructions+=3;goto B75d879;
case 0x75d87c:c.instructions+=2;goto B75d87c;
case 0x75d87f:c.instructions+=1;goto B75d87f;
case 0x75d884:goto L75d884;
case 0x75d88a:c.instructions+=6;goto B75d88a;
case 0x75d88c:c.instructions+=5;goto B75d88c;
case 0x75d891:c.instructions+=4;goto B75d891;
case 0x75d892:c.instructions+=3;goto B75d892;
case 0x75d893:c.instructions+=2;goto B75d893;
case 0x75d897:c.instructions+=1;goto B75d897;
case 0x75d89c:goto L75d89c;
case 0x75d89e:c.instructions+=4;goto B75d89e;
case 0x75d8a3:c.instructions+=3;goto B75d8a3;
case 0x75d8a4:c.instructions+=2;goto B75d8a4;
case 0x75d8a5:c.instructions+=1;goto B75d8a5;
case 0x75d8aa:goto L75d8aa;
case 0x75d8ac:c.instructions+=7;goto B75d8ac;
case 0x75d8b2:c.instructions+=6;goto B75d8b2;
case 0x75d8b7:c.instructions+=5;goto B75d8b7;
case 0x75d8bd:c.instructions+=4;goto B75d8bd;
case 0x75d8be:c.instructions+=3;goto B75d8be;
case 0x75d8bf:c.instructions+=2;goto B75d8bf;
case 0x75d8c3:c.instructions+=1;goto B75d8c3;
case 0x75d8c8:goto L75d8c8;
case 0x75d8cb:c.instructions+=6;goto B75d8cb;
case 0x75d8ce:c.instructions+=5;goto B75d8ce;
case 0x75d8cf:c.instructions+=4;goto B75d8cf;
case 0x75d8d1:c.instructions+=3;goto B75d8d1;
case 0x75d8d2:c.instructions+=2;goto B75d8d2;
case 0x75d8d3:c.instructions+=1;goto B75d8d3;
case 0x75d8d8:goto L75d8d8;
case 0x75d8db:c.instructions+=2;goto B75d8db;
case 0x75d8dc:c.instructions+=1;goto B75d8dc;
case 0x75d8e0:goto L75d8e0;
case 0x75d8e3:c.instructions+=1;goto B75d8e3;
case 0x75d8e5:goto L75d8e5;
case 0x75d8e8:c.instructions+=1;goto B75d8e8;
case 0x75d8ea:goto L75d8ea;
case 0x75d8ed:c.instructions+=2;goto B75d8ed;
case 0x75d8ef:c.instructions+=1;goto B75d8ef;
case 0x75d8f0:goto L75d8f0;
case 0x75d8f2:c.instructions+=4;goto B75d8f2;
case 0x75d8f4:c.instructions+=3;goto B75d8f4;
case 0x75d8f7:c.instructions+=2;goto B75d8f7;
case 0x75d8f9:c.instructions+=1;goto B75d8f9;
case 0x75d8fa:goto L75d8fa;
case 0x75d8fc:c.instructions+=2;goto B75d8fc;
case 0x75d8fe:c.instructions+=1;goto B75d8fe;
case 0x75d8ff:goto L75d8ff;
case 0x75d900:c.instructions+=9;goto B75d900;
case 0x75d902:c.instructions+=8;goto B75d902;
case 0x75d905:c.instructions+=7;goto B75d905;
case 0x75d908:c.instructions+=6;goto B75d908;
case 0x75d909:c.instructions+=5;goto B75d909;
case 0x75d90a:c.instructions+=4;goto B75d90a;
case 0x75d90c:c.instructions+=3;goto B75d90c;
case 0x75d90d:c.instructions+=2;goto B75d90d;
case 0x75d912:c.instructions+=1;goto B75d912;
case 0x75d915:goto L75d915;
case 0x75d917:goto L75d917;
case 0x75d91a:c.instructions+=8;goto B75d91a;
case 0x75d91d:c.instructions+=7;goto B75d91d;
case 0x75d920:c.instructions+=6;goto B75d920;
case 0x75d923:c.instructions+=5;goto B75d923;
case 0x75d924:c.instructions+=4;goto B75d924;
case 0x75d927:c.instructions+=3;goto B75d927;
case 0x75d92a:c.instructions+=2;goto B75d92a;
case 0x75d92d:c.instructions+=1;goto B75d92d;
case 0x75d933:goto L75d933;
case 0x75d934:c.instructions+=3;goto B75d934;
case 0x75d935:c.instructions+=2;goto B75d935;
case 0x75d936:c.instructions+=1;goto B75d936;
case 0x75d939:goto L75d939;
case 0x75d93b:c.instructions+=4;goto B75d93b;
case 0x75d93f:c.instructions+=3;goto B75d93f;
case 0x75d943:c.instructions+=2;goto B75d943;
case 0x75d949:c.instructions+=1;goto B75d949;
case 0x75d94a:goto L75d94a;
case 0x75d94b:c.instructions+=8;goto B75d94b;
case 0x75d94d:c.instructions+=7;goto B75d94d;
case 0x75d94e:c.instructions+=6;goto B75d94e;
case 0x75d952:c.instructions+=5;goto B75d952;
case 0x75d958:c.instructions+=4;goto B75d958;
case 0x75d95b:c.instructions+=3;goto B75d95b;
case 0x75d95d:c.instructions+=2;goto B75d95d;
case 0x75d960:c.instructions+=1;goto B75d960;
case 0x75d962:goto L75d962;
case 0x75d965:c.instructions+=1;goto B75d965;
case 0x75d96a:goto L75d96a;
case 0x75d96b:c.instructions+=2;goto B75d96b;
case 0x75d96c:c.instructions+=1;goto B75d96c;
case 0x75d971:goto L75d971;
case 0x75d973:c.instructions+=4;goto B75d973;
case 0x75d974:c.instructions+=3;goto B75d974;
case 0x75d975:c.instructions+=2;goto B75d975;
case 0x75d978:c.instructions+=1;goto B75d978;
case 0x75d97a:goto L75d97a;
case 0x75d97d:c.instructions+=2;goto B75d97d;
case 0x75d97e:c.instructions+=1;goto B75d97e;
case 0x75d983:goto L75d983;
case 0x75d984:c.instructions+=2;goto B75d984;
case 0x75d985:c.instructions+=1;goto B75d985;
case 0x75d987:goto L75d987;
case 0x75d98a:c.instructions+=1;goto B75d98a;
case 0x75d98d:goto L75d98d;
case 0x75d98e:c.instructions+=3;goto B75d98e;
case 0x75d990:c.instructions+=2;goto B75d990;
case 0x75d991:c.instructions+=1;goto B75d991;
case 0x75d994:goto L75d994;
case 0x75d998:c.instructions+=2;goto B75d998;
case 0x75d99e:c.instructions+=1;goto B75d99e;
case 0x75d9a0:goto L75d9a0;
case 0x75d9a3:c.instructions+=1;goto B75d9a3;
case 0x75d9a8:goto L75d9a8;
case 0x75d9a9:goto L75d9a9;
case 0x75d9aa:goto L75d9aa;
case 0x75d9ad:c.instructions+=2;goto B75d9ad;
case 0x75d9af:c.instructions+=1;goto B75d9af;
case 0x75d9b1:goto L75d9b1;
case 0x75d9b6:goto L75d9b6;
case 0x75d9b7:goto L75d9b7;
case 0x75d9b8:c.instructions+=2;goto B75d9b8;
case 0x75d9ba:c.instructions+=1;goto B75d9ba;
case 0x75d9bf:goto L75d9bf;
case 0x75d9c4:c.instructions+=1;goto B75d9c4;
case 0x75d9c6:goto L75d9c6;
case 0x75d9c7:c.instructions+=1;goto B75d9c7;
case 0x75d9cc:goto L75d9cc;
case 0x75d9cd:goto L75d9cd;
case 0x75d9cf:c.instructions+=2;goto B75d9cf;
case 0x75d9d0:c.instructions+=1;goto B75d9d0;
case 0x75d9d3:goto L75d9d3;
case 0x75d9d4:c.instructions+=4;goto B75d9d4;
case 0x75d9d6:c.instructions+=3;goto B75d9d6;
case 0x75d9d8:c.instructions+=2;goto B75d9d8;
case 0x75d9de:c.instructions+=1;goto B75d9de;
case 0x75d9e3:goto L75d9e3;
case 0x75d9e6:c.instructions+=3;goto B75d9e6;
case 0x75d9e8:c.instructions+=2;goto B75d9e8;
case 0x75d9e9:c.instructions+=1;goto B75d9e9;
case 0x75d9eb:goto L75d9eb;
case 0x75d9ec:c.instructions+=1;goto B75d9ec;
case 0x75d9f1:goto L75d9f1;
case 0x75d9f2:goto L75d9f2;
case 0x75d9f4:c.instructions+=1;goto B75d9f4;
case 0x75d9f9:goto L75d9f9;
case 0x75d9fa:c.instructions+=2;goto B75d9fa;
case 0x75d9fb:c.instructions+=1;goto B75d9fb;
case 0x75d9fc:goto L75d9fc;
case 0x75d9fd:c.instructions+=2;goto B75d9fd;
case 0x75d9ff:c.instructions+=1;goto B75d9ff;
case 0x75da04:goto L75da04;
case 0x75da09:c.instructions+=1;goto B75da09;
case 0x75da0b:goto L75da0b;
case 0x75da0c:c.instructions+=1;goto B75da0c;
case 0x75da11:goto L75da11;
case 0x75da12:goto L75da12;
case 0x75da14:c.instructions+=2;goto B75da14;
case 0x75da15:c.instructions+=1;goto B75da15;
case 0x75da18:goto L75da18;
case 0x75da1a:c.instructions+=2;goto B75da1a;
case 0x75da1d:c.instructions+=1;goto B75da1d;
case 0x75da1f:goto L75da1f;
case 0x75da21:c.instructions+=1;goto B75da21;
case 0x75da22:goto L75da22;
case 0x75da25:c.instructions+=1;goto B75da25;
case 0x75da27:goto L75da27;
case 0x75da2a:goto L75da2a;
case 0x75da2d:c.instructions+=1;goto B75da2d;
case 0x75da2f:goto L75da2f;
case 0x75da32:goto L75da32;
case 0x75da35:c.instructions+=1;goto B75da35;
case 0x75da37:goto L75da37;
case 0x75da3a:goto L75da3a;
case 0x75da3d:c.instructions+=1;goto B75da3d;
case 0x75da3f:goto L75da3f;
case 0x75da42:goto L75da42;
case 0x75da45:c.instructions+=1;goto B75da45;
case 0x75da47:goto L75da47;
case 0x75da4c:goto L75da4c;
case 0x75da4d:c.instructions+=9;goto B75da4d;
case 0x75da50:c.instructions+=8;goto B75da50;
case 0x75da51:c.instructions+=7;goto B75da51;
case 0x75da53:c.instructions+=6;goto B75da53;
case 0x75da58:c.instructions+=5;goto B75da58;
case 0x75da5a:c.instructions+=4;goto B75da5a;
case 0x75da5b:c.instructions+=3;goto B75da5b;
case 0x75da60:c.instructions+=2;goto B75da60;
case 0x75da65:c.instructions+=1;goto B75da65;
case 0x75da67:goto L75da67;
case 0x75da6d:c.instructions+=1;goto B75da6d;
case 0x75da6f:goto L75da6f;
case 0x75da75:c.instructions+=1;goto B75da75;
case 0x75da77:goto L75da77;
case 0x75da79:c.instructions+=1;goto B75da79;
case 0x75da7b:goto L75da7b;
case 0x75da7d:c.instructions+=1;goto B75da7d;
case 0x75da7f:goto L75da7f;
case 0x75da81:c.instructions+=1;goto B75da81;
case 0x75da83:goto L75da83;
case 0x75da88:goto L75da88;
case 0x75da8a:c.instructions+=1;goto B75da8a;
case 0x75da8c:goto L75da8c;
case 0x75da8e:c.instructions+=1;goto B75da8e;
case 0x75da90:goto L75da90;
case 0x75da95:c.instructions+=1;goto B75da95;
case 0x75da97:goto L75da97;
case 0x75da9c:goto L75da9c;
case 0x75da9f:c.instructions+=4;goto B75da9f;
case 0x75daa0:c.instructions+=3;goto B75daa0;
case 0x75daa1:c.instructions+=2;goto B75daa1;
case 0x75daa2:c.instructions+=1;goto B75daa2;
case 0x75daa4:goto L75daa4;
case 0x75daa9:goto L75daa9;
case 0x75daaa:goto L75daaa;
case 0x75daac:c.instructions+=2;goto B75daac;
case 0x75daaf:c.instructions+=1;goto B75daaf;
case 0x75dab1:goto L75dab1;
case 0x75dab2:goto L75dab2;
case 0x75dab5:c.instructions+=1;goto B75dab5;
case 0x75dab7:goto L75dab7;
case 0x75daba:goto L75daba;
case 0x75dabd:c.instructions+=1;goto B75dabd;
case 0x75dabf:goto L75dabf;
case 0x75dac2:goto L75dac2;
case 0x75dac5:c.instructions+=1;goto B75dac5;
case 0x75dac7:goto L75dac7;
case 0x75daca:goto L75daca;
case 0x75dacd:c.instructions+=1;goto B75dacd;
case 0x75dacf:goto L75dacf;
case 0x75dad2:goto L75dad2;
case 0x75dad8:c.instructions+=1;goto B75dad8;
case 0x75dada:goto L75dada;
case 0x75dadd:goto L75dadd;
case 0x75dadf:c.instructions+=5;goto B75dadf;
case 0x75dae4:c.instructions+=4;goto B75dae4;
case 0x75dae6:c.instructions+=3;goto B75dae6;
case 0x75dae7:c.instructions+=2;goto B75dae7;
case 0x75daec:c.instructions+=1;goto B75daec;
case 0x75daee:goto L75daee;
case 0x75daf4:c.instructions+=1;goto B75daf4;
case 0x75daf6:goto L75daf6;
case 0x75daf8:c.instructions+=1;goto B75daf8;
case 0x75dafa:goto L75dafa;
case 0x75dafc:c.instructions+=1;goto B75dafc;
case 0x75dafe:goto L75dafe;
case 0x75db03:c.instructions+=1;goto B75db03;
case 0x75db05:goto L75db05;
case 0x75db0a:c.instructions+=1;goto B75db0a;
case 0x75db0c:goto L75db0c;
case 0x75db11:goto L75db11;
case 0x75db13:c.instructions+=2;goto B75db13;
case 0x75db19:c.instructions+=1;goto B75db19;
case 0x75db1b:goto L75db1b;
case 0x75db21:c.instructions+=1;goto B75db21;
case 0x75db23:goto L75db23;
case 0x75db25:c.instructions+=1;goto B75db25;
case 0x75db27:goto L75db27;
case 0x75db29:goto L75db29;
case 0x75db2f:c.instructions+=2;goto B75db2f;
case 0x75db30:c.instructions+=1;goto B75db30;
case 0x75db32:goto L75db32;
case 0x75db37:goto L75db37;
case 0x75db38:goto L75db38;
case 0x75db39:c.instructions+=6;goto B75db39;
case 0x75db3b:c.instructions+=5;goto B75db3b;
case 0x75db3c:c.instructions+=4;goto B75db3c;
case 0x75db3d:c.instructions+=3;goto B75db3d;
case 0x75db41:c.instructions+=2;goto B75db41;
case 0x75db44:c.instructions+=1;goto B75db44;
case 0x75db49:goto L75db49;
case 0x75db4b:c.instructions+=7;goto B75db4b;
case 0x75db4e:c.instructions+=6;goto B75db4e;
case 0x75db50:c.instructions+=5;goto B75db50;
case 0x75db52:c.instructions+=4;goto B75db52;
case 0x75db55:c.instructions+=3;goto B75db55;
case 0x75db58:c.instructions+=2;goto B75db58;
case 0x75db5a:c.instructions+=1;goto B75db5a;
case 0x75db5f:goto L75db5f;
case 0x75db62:c.instructions+=5;goto B75db62;
case 0x75db65:c.instructions+=4;goto B75db65;
case 0x75db67:c.instructions+=3;goto B75db67;
case 0x75db68:c.instructions+=2;goto B75db68;
case 0x75db69:c.instructions+=1;goto B75db69;
case 0x75db6a:goto L75db6a;
case 0x75db6e:c.instructions+=4;goto B75db6e;
case 0x75db73:c.instructions+=3;goto B75db73;
case 0x75db74:c.instructions+=2;goto B75db74;
case 0x75db78:c.instructions+=1;goto B75db78;
case 0x75db7d:goto L75db7d;
case 0x75db7e:c.instructions+=2;goto B75db7e;
case 0x75db7f:c.instructions+=1;goto B75db7f;
case 0x75db80:goto L75db80;
case 0x75db83:c.instructions+=2;goto B75db83;
case 0x75db86:c.instructions+=1;goto B75db86;
case 0x75db8b:goto L75db8b;
case 0x75db90:goto L75db90;
case 0x75db93:c.instructions+=1;goto B75db93;
case 0x75db9d:goto L75db9d;
case 0x75db9e:c.instructions+=2;goto B75db9e;
case 0x75dba2:c.instructions+=1;goto B75dba2;
case 0x75dba4:goto L75dba4;
case 0x75dbaa:c.instructions+=1;goto B75dbaa;
case 0x75dbac:goto L75dbac;
case 0x75dbb1:goto L75dbb1;
case 0x75dbb6:c.instructions+=1;goto B75dbb6;
case 0x75dbb8:goto L75dbb8;
case 0x75dbba:c.instructions+=7;goto B75dbba;
case 0x75dbbc:c.instructions+=6;goto B75dbbc;
case 0x75dbbe:c.instructions+=5;goto B75dbbe;
case 0x75dbc0:c.instructions+=4;goto B75dbc0;
case 0x75dbc2:c.instructions+=3;goto B75dbc2;
case 0x75dbc4:c.instructions+=2;goto B75dbc4;
case 0x75dbc6:c.instructions+=1;goto B75dbc6;
case 0x75dbc8:goto L75dbc8;
case 0x75dbcf:c.instructions+=1;goto B75dbcf;
case 0x75dbd5:goto L75dbd5;
case 0x75dbda:c.instructions+=2;goto B75dbda;
case 0x75dbe0:c.instructions+=1;goto B75dbe0;
case 0x75dbe5:goto L75dbe5;
case 0x75dbe7:goto L75dbe7;
case 0x75dbeb:c.instructions+=4;goto B75dbeb;
case 0x75dbed:c.instructions+=3;goto B75dbed;
case 0x75dbf2:c.instructions+=2;goto B75dbf2;
case 0x75dbf6:c.instructions+=1;goto B75dbf6;
case 0x75dbf8:goto L75dbf8;
case 0x75dbfe:c.instructions+=2;goto B75dbfe;
case 0x75dc00:c.instructions+=1;goto B75dc00;
case 0x75dc02:goto L75dc02;
case 0x75dc04:c.instructions+=1;goto B75dc04;
case 0x75dc06:goto L75dc06;
case 0x75dc08:c.instructions+=1;goto B75dc08;
case 0x75dc0a:goto L75dc0a;
case 0x75dc0f:goto L75dc0f;
case 0x75dc11:goto L75dc11;
case 0x75dc16:c.instructions+=1;goto B75dc16;
case 0x75dc18:goto L75dc18;
case 0x75dc1d:c.instructions+=1;goto B75dc1d;
case 0x75dc1f:goto L75dc1f;
case 0x75dc21:c.instructions+=2;goto B75dc21;
case 0x75dc27:c.instructions+=1;goto B75dc27;
case 0x75dc2c:goto L75dc2c;
case 0x75dc33:c.instructions+=1;goto B75dc33;
case 0x75dc39:goto L75dc39;
case 0x75dc3e:c.instructions+=2;goto B75dc3e;
case 0x75dc44:c.instructions+=1;goto B75dc44;
case 0x75dc49:goto L75dc49;
case 0x75dc4a:c.instructions+=1;goto B75dc4a;
case 0x75dc4b:goto L75dc4b;
case 0x75dc50:c.instructions+=6;goto B75dc50;
case 0x75dc54:c.instructions+=5;goto B75dc54;
case 0x75dc56:c.instructions+=4;goto B75dc56;
case 0x75dc5a:c.instructions+=3;goto B75dc5a;
case 0x75dc5d:c.instructions+=2;goto B75dc5d;
case 0x75dc5f:c.instructions+=1;goto B75dc5f;
case 0x75dc60:goto L75dc60;
case 0x75dc64:c.instructions+=4;goto B75dc64;
case 0x75dc69:c.instructions+=3;goto B75dc69;
case 0x75dc6b:c.instructions+=2;goto B75dc6b;
case 0x75dc6f:c.instructions+=1;goto B75dc6f;
case 0x75dc71:goto L75dc71;
case 0x75dc79:c.instructions+=1;goto B75dc79;
case 0x75dc7b:goto L75dc7b;
case 0x75dc80:c.instructions+=1;goto B75dc80;
case 0x75dc82:goto L75dc82;
case 0x75dc85:c.instructions+=1;goto B75dc85;
case 0x75dc87:goto L75dc87;
case 0x75dc89:c.instructions+=2;goto B75dc89;
case 0x75dc8a:c.instructions+=1;goto B75dc8a;
case 0x75dc8b:goto L75dc8b;
case 0x75dc8d:c.instructions+=1;goto B75dc8d;
case 0x75dc8e:goto L75dc8e;
case 0x75dc8f:c.instructions+=7;goto B75dc8f;
case 0x75dc91:c.instructions+=6;goto B75dc91;
case 0x75dc94:c.instructions+=5;goto B75dc94;
case 0x75dc99:c.instructions+=4;goto B75dc99;
case 0x75dc9b:c.instructions+=3;goto B75dc9b;
case 0x75dc9d:c.instructions+=2;goto B75dc9d;
case 0x75dca0:c.instructions+=1;goto B75dca0;
case 0x75dca2:goto L75dca2;
case 0x75dca5:c.instructions+=4;goto B75dca5;
case 0x75dca6:c.instructions+=3;goto B75dca6;
case 0x75dca7:c.instructions+=2;goto B75dca7;
case 0x75dcaa:c.instructions+=1;goto B75dcaa;
case 0x75dcaf:goto L75dcaf;
case 0x75dcb0:c.instructions+=3;goto B75dcb0;
case 0x75dcb1:c.instructions+=2;goto B75dcb1;
case 0x75dcb2:c.instructions+=1;goto B75dcb2;
case 0x75dcb4:goto L75dcb4;
case 0x75dcb5:c.instructions+=1;goto B75dcb5;
case 0x75dcb7:goto L75dcb7;
case 0x75dcb8:c.instructions+=1;goto B75dcb8;
case 0x75dcba:goto L75dcba;
case 0x75dcbc:c.instructions+=3;goto B75dcbc;
case 0x75dcbd:c.instructions+=2;goto B75dcbd;
case 0x75dcbe:c.instructions+=1;goto B75dcbe;
case 0x75dcbf:goto L75dcbf;
case 0x75dcc1:goto L75dcc1;
case 0x75dcc2:c.instructions+=2;goto B75dcc2;
case 0x75dcc3:c.instructions+=1;goto B75dcc3;
case 0x75dcc4:goto L75dcc4;
case 0x75dcc6:c.instructions+=1;goto B75dcc6;
case 0x75dcc8:goto L75dcc8;
case 0x75dccd:c.instructions+=2;goto B75dccd;
case 0x75dcce:c.instructions+=1;goto B75dcce;
case 0x75dccf:goto L75dccf;
case 0x75dcd4:c.instructions+=3;goto B75dcd4;
case 0x75dcd7:c.instructions+=2;goto B75dcd7;
case 0x75dcd9:c.instructions+=1;goto B75dcd9;
case 0x75dcdb:goto L75dcdb;
case 0x75dce2:c.instructions+=1;goto B75dce2;
case 0x75dce4:goto L75dce4;
case 0x75dce8:c.instructions+=1;goto B75dce8;
case 0x75dcea:goto L75dcea;
case 0x75dcec:c.instructions+=6;goto B75dcec;
case 0x75dcee:c.instructions+=5;goto B75dcee;
case 0x75dcf0:c.instructions+=4;goto B75dcf0;
case 0x75dcf3:c.instructions+=3;goto B75dcf3;
case 0x75dcf8:c.instructions+=2;goto B75dcf8;
case 0x75dcf9:c.instructions+=1;goto B75dcf9;
case 0x75dcfa:goto L75dcfa;
case 0x75dcfd:c.instructions+=5;goto B75dcfd;
case 0x75dd03:c.instructions+=4;goto B75dd03;
case 0x75dd05:c.instructions+=3;goto B75dd05;
case 0x75dd08:c.instructions+=2;goto B75dd08;
case 0x75dd0a:c.instructions+=1;goto B75dd0a;
case 0x75dd0c:goto L75dd0c;
case 0x75dd0e:c.instructions+=5;goto B75dd0e;
case 0x75dd10:c.instructions+=4;goto B75dd10;
case 0x75dd13:c.instructions+=3;goto B75dd13;
case 0x75dd16:c.instructions+=2;goto B75dd16;
case 0x75dd17:c.instructions+=1;goto B75dd17;
case 0x75dd18:goto L75dd18;
case 0x75dd1a:c.instructions+=5;goto B75dd1a;
case 0x75dd1c:c.instructions+=4;goto B75dd1c;
case 0x75dd21:c.instructions+=3;goto B75dd21;
case 0x75dd26:c.instructions+=2;goto B75dd26;
case 0x75dd27:c.instructions+=1;goto B75dd27;
case 0x75dd28:goto L75dd28;
case 0x75dd29:c.instructions+=14;goto B75dd29;
case 0x75dd2b:c.instructions+=13;goto B75dd2b;
case 0x75dd2e:c.instructions+=12;goto B75dd2e;
case 0x75dd32:c.instructions+=11;goto B75dd32;
case 0x75dd33:c.instructions+=10;goto B75dd33;
case 0x75dd37:c.instructions+=9;goto B75dd37;
case 0x75dd3a:c.instructions+=8;goto B75dd3a;
case 0x75dd3e:c.instructions+=7;goto B75dd3e;
case 0x75dd41:c.instructions+=6;goto B75dd41;
case 0x75dd44:c.instructions+=5;goto B75dd44;
case 0x75dd47:c.instructions+=4;goto B75dd47;
case 0x75dd4a:c.instructions+=3;goto B75dd4a;
case 0x75dd4d:c.instructions+=2;goto B75dd4d;
case 0x75dd4e:c.instructions+=1;goto B75dd4e;
case 0x75dd50:goto L75dd50;
case 0x75dd52:c.instructions+=9;goto B75dd52;
case 0x75dd53:c.instructions+=8;goto B75dd53;
case 0x75dd59:c.instructions+=7;goto B75dd59;
case 0x75dd5a:c.instructions+=6;goto B75dd5a;
case 0x75dd5e:c.instructions+=5;goto B75dd5e;
case 0x75dd65:c.instructions+=4;goto B75dd65;
case 0x75dd69:c.instructions+=3;goto B75dd69;
case 0x75dd6d:c.instructions+=2;goto B75dd6d;
case 0x75dd6e:c.instructions+=1;goto B75dd6e;
case 0x75dd6f:goto L75dd6f;
case 0x75dd70:c.instructions+=4;goto B75dd70;
case 0x75dd72:c.instructions+=3;goto B75dd72;
case 0x75dd73:c.instructions+=2;goto B75dd73;
case 0x75dd74:c.instructions+=1;goto B75dd74;
case 0x75dd79:goto L75dd79;
case 0x75dd7c:c.instructions+=2;goto B75dd7c;
case 0x75dd82:c.instructions+=1;goto B75dd82;
case 0x75dd84:goto L75dd84;
case 0x75dd89:goto L75dd89;
case 0x75dd8b:goto L75dd8b;
case 0x75dd8f:c.instructions+=1;goto B75dd8f;
case 0x75dd91:goto L75dd91;
case 0x75dd94:c.instructions+=2;goto B75dd94;
case 0x75dd97:c.instructions+=1;goto B75dd97;
case 0x75dd9c:goto L75dd9c;
case 0x75dd9d:c.instructions+=2;goto B75dd9d;
case 0x75dd9e:c.instructions+=1;goto B75dd9e;
case 0x75dda0:goto L75dda0;
case 0x75dda1:c.instructions+=3;goto B75dda1;
case 0x75dda4:c.instructions+=2;goto B75dda4;
case 0x75dda5:c.instructions+=1;goto B75dda5;
case 0x75dda8:goto L75dda8;
case 0x75ddab:c.instructions+=3;goto B75ddab;
case 0x75ddac:c.instructions+=2;goto B75ddac;
case 0x75ddad:c.instructions+=1;goto B75ddad;
case 0x75ddb2:goto L75ddb2;
case 0x75ddb5:c.instructions+=5;goto B75ddb5;
case 0x75ddb8:c.instructions+=4;goto B75ddb8;
case 0x75ddb9:c.instructions+=3;goto B75ddb9;
case 0x75ddba:c.instructions+=2;goto B75ddba;
case 0x75ddbb:c.instructions+=1;goto B75ddbb;
case 0x75ddc0:goto L75ddc0;
case 0x75ddc3:c.instructions+=5;goto B75ddc3;
case 0x75ddc5:c.instructions+=4;goto B75ddc5;
case 0x75ddc8:c.instructions+=3;goto B75ddc8;
case 0x75ddc9:c.instructions+=2;goto B75ddc9;
case 0x75ddcb:c.instructions+=1;goto B75ddcb;
case 0x75ddcd:goto L75ddcd;
case 0x75ddcf:c.instructions+=1;goto B75ddcf;
case 0x75ddd1:goto L75ddd1;
case 0x75ddd2:c.instructions+=2;goto B75ddd2;
case 0x75ddd4:c.instructions+=1;goto B75ddd4;
case 0x75ddd5:goto L75ddd5;
case 0x75ddd6:c.instructions+=2;goto B75ddd6;
case 0x75ddd7:c.instructions+=1;goto B75ddd7;
case 0x75ddd8:goto L75ddd8;
case 0x75ddd9:c.instructions+=5;goto B75ddd9;
case 0x75dddb:c.instructions+=4;goto B75dddb;
case 0x75ddde:c.instructions+=3;goto B75ddde;
case 0x75dddf:c.instructions+=2;goto B75dddf;
case 0x75dde2:c.instructions+=1;goto B75dde2;
case 0x75dde4:goto L75dde4;
case 0x75dde5:goto L75dde5;
case 0x75dde8:c.instructions+=2;goto B75dde8;
case 0x75dde9:c.instructions+=1;goto B75dde9;
case 0x75ddee:goto L75ddee;
case 0x75ddf0:c.instructions+=2;goto B75ddf0;
case 0x75ddf1:c.instructions+=1;goto B75ddf1;
case 0x75ddf3:goto L75ddf3;
case 0x75ddf4:c.instructions+=3;goto B75ddf4;
case 0x75ddf5:c.instructions+=2;goto B75ddf5;
case 0x75ddf6:c.instructions+=1;goto B75ddf6;
case 0x75ddfb:goto L75ddfb;
case 0x75ddfc:c.instructions+=5;goto B75ddfc;
case 0x75ddfd:c.instructions+=4;goto B75ddfd;
case 0x75de00:c.instructions+=3;goto B75de00;
case 0x75de01:c.instructions+=2;goto B75de01;
case 0x75de02:c.instructions+=1;goto B75de02;
case 0x75de07:goto L75de07;
case 0x75de0a:c.instructions+=4;goto B75de0a;
case 0x75de0d:c.instructions+=3;goto B75de0d;
case 0x75de0e:c.instructions+=2;goto B75de0e;
case 0x75de0f:c.instructions+=1;goto B75de0f;
case 0x75de10:goto L75de10;
case 0x75de11:c.instructions+=9;goto B75de11;
case 0x75de13:c.instructions+=8;goto B75de13;
case 0x75de14:c.instructions+=7;goto B75de14;
case 0x75de15:c.instructions+=6;goto B75de15;
case 0x75de18:c.instructions+=5;goto B75de18;
case 0x75de19:c.instructions+=4;goto B75de19;
case 0x75de1c:c.instructions+=3;goto B75de1c;
case 0x75de20:c.instructions+=2;goto B75de20;
case 0x75de21:c.instructions+=1;goto B75de21;
case 0x75de27:goto L75de27;
case 0x75de2b:c.instructions+=1;goto B75de2b;
case 0x75de2d:goto L75de2d;
case 0x75de30:c.instructions+=1;goto B75de30;
case 0x75de36:goto L75de36;
case 0x75de38:c.instructions+=3;goto B75de38;
case 0x75de39:c.instructions+=2;goto B75de39;
case 0x75de3f:c.instructions+=1;goto B75de3f;
case 0x75de41:goto L75de41;
case 0x75de44:c.instructions+=1;goto B75de44;
case 0x75de46:goto L75de46;
case 0x75de47:c.instructions+=3;goto B75de47;
case 0x75de48:c.instructions+=2;goto B75de48;
case 0x75de49:c.instructions+=1;goto B75de49;
case 0x75de4e:goto L75de4e;
case 0x75de51:c.instructions+=1;goto B75de51;
case 0x75de53:goto L75de53;
case 0x75de56:c.instructions+=2;goto B75de56;
case 0x75de5a:c.instructions+=1;goto B75de5a;
case 0x75de5c:goto L75de5c;
case 0x75de5e:c.instructions+=1;goto B75de5e;
case 0x75de60:goto L75de60;
case 0x75de63:c.instructions+=5;goto B75de63;
case 0x75de65:c.instructions+=4;goto B75de65;
case 0x75de68:c.instructions+=3;goto B75de68;
case 0x75de6b:c.instructions+=2;goto B75de6b;
case 0x75de70:c.instructions+=1;goto B75de70;
case 0x75de72:goto L75de72;
case 0x75de76:c.instructions+=5;goto B75de76;
case 0x75de78:c.instructions+=4;goto B75de78;
case 0x75de7b:c.instructions+=3;goto B75de7b;
case 0x75de7e:c.instructions+=2;goto B75de7e;
case 0x75de7f:c.instructions+=1;goto B75de7f;
case 0x75de81:goto L75de81;
case 0x75de85:c.instructions+=2;goto B75de85;
case 0x75de88:c.instructions+=1;goto B75de88;
case 0x75de8a:goto L75de8a;
case 0x75de8b:c.instructions+=10;goto B75de8b;
case 0x75de8e:c.instructions+=9;goto B75de8e;
case 0x75de91:c.instructions+=8;goto B75de91;
case 0x75de93:c.instructions+=7;goto B75de93;
case 0x75de94:c.instructions+=6;goto B75de94;
case 0x75de95:c.instructions+=5;goto B75de95;
case 0x75de98:c.instructions+=4;goto B75de98;
case 0x75de99:c.instructions+=3;goto B75de99;
case 0x75de9e:c.instructions+=2;goto B75de9e;
case 0x75dea1:c.instructions+=1;goto B75dea1;
case 0x75dea6:goto L75dea6;
case 0x75dea9:c.instructions+=2;goto B75dea9;
case 0x75deab:c.instructions+=1;goto B75deab;
case 0x75dead:goto L75dead;
case 0x75deaf:c.instructions+=1;goto B75deaf;
case 0x75deb1:goto L75deb1;
case 0x75deb5:c.instructions+=1;goto B75deb5;
case 0x75deb7:goto L75deb7;
case 0x75debb:c.instructions+=4;goto B75debb;
case 0x75debd:c.instructions+=3;goto B75debd;
case 0x75dec0:c.instructions+=2;goto B75dec0;
case 0x75dec2:c.instructions+=1;goto B75dec2;
case 0x75dec4:goto L75dec4;
case 0x75dec7:c.instructions+=1;goto B75dec7;
case 0x75dec9:goto L75dec9;
case 0x75decc:c.instructions+=2;goto B75decc;
case 0x75decf:c.instructions+=1;goto B75decf;
case 0x75ded1:goto L75ded1;
case 0x75ded3:goto L75ded3;
case 0x75ded4:c.instructions+=4;goto B75ded4;
case 0x75ded5:c.instructions+=3;goto B75ded5;
case 0x75ded6:c.instructions+=2;goto B75ded6;
case 0x75ded7:c.instructions+=1;goto B75ded7;
case 0x75ded8:goto L75ded8;
case 0x75dedd:goto L75dedd;
case 0x75dee0:c.instructions+=2;goto B75dee0;
case 0x75dee6:c.instructions+=1;goto B75dee6;
case 0x75dee8:goto L75dee8;
case 0x75deed:goto L75deed;
case 0x75def1:c.instructions+=2;goto B75def1;
case 0x75def2:c.instructions+=1;goto B75def2;
case 0x75def7:goto L75def7;
case 0x75def8:c.instructions+=2;goto B75def8;
case 0x75def9:c.instructions+=1;goto B75def9;
case 0x75defa:goto L75defa;
case 0x75deff:goto L75deff;
case 0x75df02:c.instructions+=2;goto B75df02;
case 0x75df08:c.instructions+=1;goto B75df08;
case 0x75df0a:goto L75df0a;
case 0x75df0f:goto L75df0f;
case 0x75df13:c.instructions+=1;goto B75df13;
case 0x75df15:goto L75df15;
case 0x75df1a:c.instructions+=3;goto B75df1a;
case 0x75df1e:c.instructions+=2;goto B75df1e;
case 0x75df1f:c.instructions+=1;goto B75df1f;
case 0x75df24:goto L75df24;
case 0x75df27:c.instructions+=1;goto B75df27;
case 0x75df28:goto L75df28;
case 0x75df2b:c.instructions+=4;goto B75df2b;
case 0x75df2f:c.instructions+=3;goto B75df2f;
case 0x75df33:c.instructions+=2;goto B75df33;
case 0x75df38:c.instructions+=1;goto B75df38;
case 0x75df39:goto L75df39;
case 0x75df3e:goto L75df3e;
case 0x75df41:c.instructions+=2;goto B75df41;
case 0x75df47:c.instructions+=1;goto B75df47;
case 0x75df49:goto L75df49;
case 0x75df4e:goto L75df4e;
case 0x75df52:c.instructions+=1;goto B75df52;
case 0x75df54:goto L75df54;
case 0x75df56:c.instructions+=3;goto B75df56;
case 0x75df5a:c.instructions+=2;goto B75df5a;
case 0x75df5b:c.instructions+=1;goto B75df5b;
case 0x75df60:goto L75df60;
case 0x75df63:c.instructions+=1;goto B75df63;
case 0x75df64:goto L75df64;
case 0x75df67:c.instructions+=4;goto B75df67;
case 0x75df6b:c.instructions+=3;goto B75df6b;
case 0x75df6f:c.instructions+=2;goto B75df6f;
case 0x75df72:c.instructions+=1;goto B75df72;
case 0x75df73:goto L75df73;
case 0x75df78:goto L75df78;
case 0x75df7b:c.instructions+=2;goto B75df7b;
case 0x75df81:c.instructions+=1;goto B75df81;
case 0x75df83:goto L75df83;
case 0x75df88:goto L75df88;
case 0x75df8c:c.instructions+=1;goto B75df8c;
case 0x75df8e:goto L75df8e;
case 0x75df93:c.instructions+=3;goto B75df93;
case 0x75df97:c.instructions+=2;goto B75df97;
case 0x75df98:c.instructions+=1;goto B75df98;
case 0x75df9d:goto L75df9d;
case 0x75dfa0:c.instructions+=1;goto B75dfa0;
case 0x75dfa1:goto L75dfa1;
case 0x75dfa4:c.instructions+=4;goto B75dfa4;
case 0x75dfa8:c.instructions+=3;goto B75dfa8;
case 0x75dfac:c.instructions+=2;goto B75dfac;
case 0x75dfb1:c.instructions+=1;goto B75dfb1;
case 0x75dfb2:goto L75dfb2;
case 0x75dfb7:goto L75dfb7;
case 0x75dfba:c.instructions+=2;goto B75dfba;
case 0x75dfc0:c.instructions+=1;goto B75dfc0;
case 0x75dfc2:goto L75dfc2;
case 0x75dfc7:goto L75dfc7;
case 0x75dfcb:c.instructions+=1;goto B75dfcb;
case 0x75dfcd:goto L75dfcd;
case 0x75dfcf:c.instructions+=3;goto B75dfcf;
case 0x75dfd3:c.instructions+=2;goto B75dfd3;
case 0x75dfd4:c.instructions+=1;goto B75dfd4;
case 0x75dfd9:goto L75dfd9;
case 0x75dfdc:c.instructions+=1;goto B75dfdc;
case 0x75dfdd:goto L75dfdd;
case 0x75dfe0:c.instructions+=4;goto B75dfe0;
case 0x75dfe4:c.instructions+=3;goto B75dfe4;
case 0x75dfe8:c.instructions+=2;goto B75dfe8;
case 0x75dfeb:c.instructions+=1;goto B75dfeb;
case 0x75dfec:goto L75dfec;
case 0x75dff1:goto L75dff1;
case 0x75dff4:c.instructions+=2;goto B75dff4;
case 0x75dffa:c.instructions+=1;goto B75dffa;
case 0x75dffc:goto L75dffc;
default:missing_instruction(c.pc);}
B75d001:L75d001:{c.instructions+=1;NFSU2_TR(0x75d001);
if(r1(R+512)){{goto L75d02c;}}
}
B75d003:L75d003:{c.instructions+=1;NFSU2_TR(0x75d003);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75d005;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d003u);}goto L75d003;}
}
B75d005:L75d005:{c.instructions+=1;NFSU2_TR(0x75d005);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x75d11cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75d00c:L75d00c:{c.instructions+=4;NFSU2_TR(0x75d00c);
__builtin_memmove((R+0),(R+28),4);
}
B75d00e:{NFSU2_TR(0x75d00e);
w4(R+8,u32(0x3ull));
}
B75d013:{NFSU2_TR(0x75d013);
u8 U[6];
w1(R+512,u8((r4(R+4))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75d016:{NFSU2_TR(0x75d016);
if(r1(R+512)){{goto L75d024;}}
}
B75d018:L75d018:{c.instructions+=3;NFSU2_TR(0x75d018);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B75d01b:{NFSU2_TR(0x75d01b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75d01d:{NFSU2_TR(0x75d01d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x75d030ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75d024:L75d024:{c.instructions+=1;NFSU2_TR(0x75d024);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x75d12cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75d02c:L75d02c:{c.instructions+=1;NFSU2_TR(0x75d02c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x75d0b0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75d040:L75d040:{c.instructions+=12;NFSU2_TR(0x75d040);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B75d042:{NFSU2_TR(0x75d042);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B75d044:{NFSU2_TR(0x75d044);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B75d046:{NFSU2_TR(0x75d046);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d049:{NFSU2_TR(0x75d049);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d04c:{NFSU2_TR(0x75d04c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d04f:{NFSU2_TR(0x75d04f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75d052:{NFSU2_TR(0x75d052);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d055:{NFSU2_TR(0x75d055);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3ull))));
}
B75d058:{NFSU2_TR(0x75d058);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3ull))));
}
B75d05b:{NFSU2_TR(0x75d05b);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B75d05e:{NFSU2_TR(0x75d05e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d02cu);}goto L75d02c;}}
}
B75d060:L75d060:{c.instructions+=1;NFSU2_TR(0x75d060);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75d062;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d060u);}goto L75d060;}
}
B75d062:L75d062:{c.instructions+=1;NFSU2_TR(0x75d062);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x75d11cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75d06c:L75d06c:{c.instructions+=10;NFSU2_TR(0x75d06c);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B75d06e:{NFSU2_TR(0x75d06e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B75d070:{NFSU2_TR(0x75d070);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B75d072:{NFSU2_TR(0x75d072);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d075:{NFSU2_TR(0x75d075);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75d078:{NFSU2_TR(0x75d078);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d07b:{NFSU2_TR(0x75d07b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B75d07e:{NFSU2_TR(0x75d07e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B75d081:{NFSU2_TR(0x75d081);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B75d084:{NFSU2_TR(0x75d084);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d02cu);}goto L75d02c;}}
}
B75d086:L75d086:{c.instructions+=1;NFSU2_TR(0x75d086);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75d088;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d086u);}goto L75d086;}
}
B75d088:L75d088:{c.instructions+=1;NFSU2_TR(0x75d088);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x75d11cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75d090:L75d090:{c.instructions+=8;NFSU2_TR(0x75d090);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B75d092:{NFSU2_TR(0x75d092);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B75d094:{NFSU2_TR(0x75d094);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B75d096:{NFSU2_TR(0x75d096);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75d099:{NFSU2_TR(0x75d099);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75d09c:{NFSU2_TR(0x75d09c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75d09f:{NFSU2_TR(0x75d09f);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B75d0a2:{NFSU2_TR(0x75d0a2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d02cu);}goto L75d02c;}}
}
B75d0a4:L75d0a4:{c.instructions+=1;NFSU2_TR(0x75d0a4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75d0a6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d0a4u);}goto L75d0a4;}
}
B75d0a6:L75d0a6:{c.instructions+=1;NFSU2_TR(0x75d0a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x75d11cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75d0d0:L75d0d0:{c.instructions+=18;NFSU2_TR(0x75d0d0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75d0d4:{NFSU2_TR(0x75d0d4);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75d0d8:{NFSU2_TR(0x75d0d8);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75d0dc:{NFSU2_TR(0x75d0dc);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75d0e0:{NFSU2_TR(0x75d0e0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75d0e4:{NFSU2_TR(0x75d0e4);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75d0e8:{NFSU2_TR(0x75d0e8);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75d0ec:{NFSU2_TR(0x75d0ec);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75d0f0:{NFSU2_TR(0x75d0f0);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75d0f4:{NFSU2_TR(0x75d0f4);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75d0f8:{NFSU2_TR(0x75d0f8);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75d0fc:{NFSU2_TR(0x75d0fc);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75d100:{NFSU2_TR(0x75d100);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75d104:{NFSU2_TR(0x75d104);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75d108:{NFSU2_TR(0x75d108);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75d10f:{NFSU2_TR(0x75d10f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B75d111:{NFSU2_TR(0x75d111);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75d113:{NFSU2_TR(0x75d113);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x75d11cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75d12c:L75d12c:{c.instructions+=5;NFSU2_TR(0x75d12c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d12f:{NFSU2_TR(0x75d12f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d130:{NFSU2_TR(0x75d130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d131:{NFSU2_TR(0x75d131);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75d132:{NFSU2_TR(0x75d132);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d134:L75d134:{c.instructions+=7;NFSU2_TR(0x75d134);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B75d136:{NFSU2_TR(0x75d136);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B75d138:{NFSU2_TR(0x75d138);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d13b:{NFSU2_TR(0x75d13b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d13c:{NFSU2_TR(0x75d13c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d13d:{NFSU2_TR(0x75d13d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75d13e:{NFSU2_TR(0x75d13e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d140:L75d140:{c.instructions+=9;NFSU2_TR(0x75d140);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B75d142:{NFSU2_TR(0x75d142);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B75d144:{NFSU2_TR(0x75d144);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d147:{NFSU2_TR(0x75d147);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d14a:{NFSU2_TR(0x75d14a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d14d:{NFSU2_TR(0x75d14d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d14e:{NFSU2_TR(0x75d14e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d14f:{NFSU2_TR(0x75d14f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75d150:{NFSU2_TR(0x75d150);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d154:L75d154:{c.instructions+=11;NFSU2_TR(0x75d154);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B75d156:{NFSU2_TR(0x75d156);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B75d158:{NFSU2_TR(0x75d158);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d15b:{NFSU2_TR(0x75d15b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d15e:{NFSU2_TR(0x75d15e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d161:{NFSU2_TR(0x75d161);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d164:{NFSU2_TR(0x75d164);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d167:{NFSU2_TR(0x75d167);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d168:{NFSU2_TR(0x75d168);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d169:{NFSU2_TR(0x75d169);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75d16a:{NFSU2_TR(0x75d16a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d16c:L75d16c:{c.instructions+=4;NFSU2_TR(0x75d16c);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B75d170:{NFSU2_TR(0x75d170);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B75d174:{NFSU2_TR(0x75d174);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(u32(0x3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75d17a:{NFSU2_TR(0x75d17a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75d1a0;}}
}
B75d17c:L75d17c:{c.instructions+=4;NFSU2_TR(0x75d17c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75d17f:{NFSU2_TR(0x75d17f);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3ull))));
}
B75d182:{NFSU2_TR(0x75d182);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B75d185:{NFSU2_TR(0x75d185);
if(r1(R+512)){{goto L75d194;}}
}
B75d187:L75d187:{c.instructions+=1;NFSU2_TR(0x75d187);
w1(R+522,u8(0x1ull));
}
B75d188:L75d188:{c.instructions+=1;NFSU2_TR(0x75d188);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75d18a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d188u);}goto L75d188;}
}
B75d18a:L75d18a:{c.instructions+=2;NFSU2_TR(0x75d18a);
w1(R+522,u8(0x0ull));
}
B75d18b:{NFSU2_TR(0x75d18b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x75d2b8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75d194:L75d194:{c.instructions+=2;NFSU2_TR(0x75d194);
u8 U[6];
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+4)));
w4(R+4,u32(0-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75d196:{NFSU2_TR(0x75d196);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x75d268ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75d1a0:L75d1a0:{c.instructions+=4;NFSU2_TR(0x75d1a0);
__builtin_memmove((R+0),(R+28),4);
}
B75d1a2:{NFSU2_TR(0x75d1a2);
w4(R+8,u32(0x3ull));
}
B75d1a7:{NFSU2_TR(0x75d1a7);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B75d1aa:{NFSU2_TR(0x75d1aa);
if(r1(R+512)){{goto L75d1b8;}}
}
B75d1ac:L75d1ac:{c.instructions+=3;NFSU2_TR(0x75d1ac);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B75d1af:{NFSU2_TR(0x75d1af);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75d1b1:{NFSU2_TR(0x75d1b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x75d1bcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75d1b8:L75d1b8:{c.instructions+=1;NFSU2_TR(0x75d1b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x75d2b8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75d1cc:L75d1cc:{c.instructions+=8;NFSU2_TR(0x75d1cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d1cf:{NFSU2_TR(0x75d1cf);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B75d1d1:{NFSU2_TR(0x75d1d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d1d4:{NFSU2_TR(0x75d1d4);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B75d1d7:{NFSU2_TR(0x75d1d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75d1da:{NFSU2_TR(0x75d1da);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B75d1dd:{NFSU2_TR(0x75d1dd);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B75d1e0:{NFSU2_TR(0x75d1e0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d194u);}goto L75d194;}}
}
B75d1e2:L75d1e2:{c.instructions+=1;NFSU2_TR(0x75d1e2);
w1(R+522,u8(0x1ull));
}
B75d1e3:L75d1e3:{c.instructions+=1;NFSU2_TR(0x75d1e3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75d1e5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d1e3u);}goto L75d1e3;}
}
B75d1e5:L75d1e5:{c.instructions+=2;NFSU2_TR(0x75d1e5);
w1(R+522,u8(0x0ull));
}
B75d1e6:{NFSU2_TR(0x75d1e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x75d2b8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75d1f0:L75d1f0:{c.instructions+=10;NFSU2_TR(0x75d1f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d1f3:{NFSU2_TR(0x75d1f3);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B75d1f5:{NFSU2_TR(0x75d1f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d1f8:{NFSU2_TR(0x75d1f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d1fb:{NFSU2_TR(0x75d1fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75d1fe:{NFSU2_TR(0x75d1fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d201:{NFSU2_TR(0x75d201);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x2ull))));
}
B75d204:{NFSU2_TR(0x75d204);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x2ull))));
}
B75d207:{NFSU2_TR(0x75d207);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B75d20a:{NFSU2_TR(0x75d20a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d194u);}goto L75d194;}}
}
B75d20c:L75d20c:{c.instructions+=1;NFSU2_TR(0x75d20c);
w1(R+522,u8(0x1ull));
}
B75d20d:L75d20d:{c.instructions+=1;NFSU2_TR(0x75d20d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75d20f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d20du);}goto L75d20d;}
}
B75d20f:L75d20f:{c.instructions+=2;NFSU2_TR(0x75d20f);
w1(R+522,u8(0x0ull));
}
B75d210:{NFSU2_TR(0x75d210);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x75d2b8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75d218:L75d218:{c.instructions+=12;NFSU2_TR(0x75d218);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d21b:{NFSU2_TR(0x75d21b);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B75d21d:{NFSU2_TR(0x75d21d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d220:{NFSU2_TR(0x75d220);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d223:{NFSU2_TR(0x75d223);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d226:{NFSU2_TR(0x75d226);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d229:{NFSU2_TR(0x75d229);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B75d22c:{NFSU2_TR(0x75d22c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d22f:{NFSU2_TR(0x75d22f);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x3ull))));
}
B75d232:{NFSU2_TR(0x75d232);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x3ull))));
}
B75d235:{NFSU2_TR(0x75d235);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B75d238:{NFSU2_TR(0x75d238);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d194u);}goto L75d194;}}
}
B75d23e:L75d23e:{c.instructions+=1;NFSU2_TR(0x75d23e);
w1(R+522,u8(0x1ull));
}
B75d23f:L75d23f:{c.instructions+=1;NFSU2_TR(0x75d23f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75d241;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d23fu);}goto L75d23f;}
}
B75d241:L75d241:{c.instructions+=2;NFSU2_TR(0x75d241);
w1(R+522,u8(0x0ull));
}
B75d242:{NFSU2_TR(0x75d242);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x75d2b8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75d26c:L75d26c:{c.instructions+=18;NFSU2_TR(0x75d26c);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75d270:{NFSU2_TR(0x75d270);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75d274:{NFSU2_TR(0x75d274);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75d278:{NFSU2_TR(0x75d278);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75d27c:{NFSU2_TR(0x75d27c);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75d280:{NFSU2_TR(0x75d280);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75d284:{NFSU2_TR(0x75d284);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75d288:{NFSU2_TR(0x75d288);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75d28c:{NFSU2_TR(0x75d28c);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75d290:{NFSU2_TR(0x75d290);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75d294:{NFSU2_TR(0x75d294);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75d298:{NFSU2_TR(0x75d298);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75d29c:{NFSU2_TR(0x75d29c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B75d2a0:{NFSU2_TR(0x75d2a0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B75d2a4:{NFSU2_TR(0x75d2a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75d2ab:{NFSU2_TR(0x75d2ab);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B75d2ad:{NFSU2_TR(0x75d2ad);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+28),r4(R+0)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75d2af:{NFSU2_TR(0x75d2af);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x75d2b8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B75d2c8:L75d2c8:{c.instructions+=5;NFSU2_TR(0x75d2c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d2cb:{NFSU2_TR(0x75d2cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d2cc:{NFSU2_TR(0x75d2cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d2cd:{NFSU2_TR(0x75d2cd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75d2ce:{NFSU2_TR(0x75d2ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d2d0:L75d2d0:{c.instructions+=7;NFSU2_TR(0x75d2d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d2d3:{NFSU2_TR(0x75d2d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d2d6:{NFSU2_TR(0x75d2d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d2d9:{NFSU2_TR(0x75d2d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d2da:{NFSU2_TR(0x75d2da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d2db:{NFSU2_TR(0x75d2db);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75d2dc:{NFSU2_TR(0x75d2dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d2e0:L75d2e0:{c.instructions+=9;NFSU2_TR(0x75d2e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d2e3:{NFSU2_TR(0x75d2e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d2e6:{NFSU2_TR(0x75d2e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d2e9:{NFSU2_TR(0x75d2e9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d2ec:{NFSU2_TR(0x75d2ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d2ef:{NFSU2_TR(0x75d2ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d2f0:{NFSU2_TR(0x75d2f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d2f1:{NFSU2_TR(0x75d2f1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75d2f2:{NFSU2_TR(0x75d2f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d2f4:L75d2f4:{c.instructions+=11;NFSU2_TR(0x75d2f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d2f7:{NFSU2_TR(0x75d2f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d2fa:{NFSU2_TR(0x75d2fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d2fd:{NFSU2_TR(0x75d2fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d300:{NFSU2_TR(0x75d300);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d303:{NFSU2_TR(0x75d303);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75d306:{NFSU2_TR(0x75d306);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d309:{NFSU2_TR(0x75d309);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d30a:{NFSU2_TR(0x75d30a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d30b:{NFSU2_TR(0x75d30b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75d30c:{NFSU2_TR(0x75d30c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d30d:L75d30d:{c.instructions+=6;NFSU2_TR(0x75d30d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d30e:{NFSU2_TR(0x75d30e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75d312:{NFSU2_TR(0x75d312);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d313:{NFSU2_TR(0x75d313);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B75d316:{NFSU2_TR(0x75d316);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x83ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B75d31a:{NFSU2_TR(0x75d31a);
if(r1(R+518)){{goto L75d350;}}
}
B75d31c:L75d31c:{c.instructions+=2;NFSU2_TR(0x75d31c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d31d:{NFSU2_TR(0x75d31d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d322ull));
TAIL_STATIC(0x75f42du,75f);
}
B75d322:L75d322:{c.instructions+=3;NFSU2_TR(0x75d322);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d323:{NFSU2_TR(0x75d323);
__builtin_memmove((R+28),(R+0),4);
}
B75d325:{NFSU2_TR(0x75d325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d32aull));
TAIL_STATIC(0x766027u,766);
}
B75d32a:L75d32a:{c.instructions+=2;NFSU2_TR(0x75d32a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d32d:{NFSU2_TR(0x75d32d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d332ull));
TAIL_STATIC(0x75fff7u,75f);
}
B75d332:L75d332:{c.instructions+=3;NFSU2_TR(0x75d332);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75d335:{NFSU2_TR(0x75d335);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B75d337:{NFSU2_TR(0x75d337);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L75d33e;}}
}
B75d339:L75d339:{c.instructions+=2;NFSU2_TR(0x75d339);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B75d33c:{NFSU2_TR(0x75d33c);
{goto L75d350;}
}
B75d33e:L75d33e:{c.instructions+=3;NFSU2_TR(0x75d33e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d341:{NFSU2_TR(0x75d341);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75d343:{NFSU2_TR(0x75d343);
if(r1(R+518)){{goto L75d350;}}
}
B75d345:L75d345:{c.instructions+=2;NFSU2_TR(0x75d345);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d346:{NFSU2_TR(0x75d346);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d34bull));
TAIL_STATIC(0x75c6dau,75c);
}
B75d34b:L75d34b:{c.instructions+=2;NFSU2_TR(0x75d34b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75d34f:{NFSU2_TR(0x75d34f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d350:L75d350:{c.instructions+=5;NFSU2_TR(0x75d350);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B75d354:{NFSU2_TR(0x75d354);
__builtin_memmove((R+0),(R+28),4);
}
B75d356:{NFSU2_TR(0x75d356);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d357:{NFSU2_TR(0x75d357);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d358:{NFSU2_TR(0x75d358);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d359:L75d359:{c.instructions+=3;NFSU2_TR(0x75d359);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d35b:{NFSU2_TR(0x75d35b);
u8 U[4];
w4(U+0,u32(0x7d3a08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d360:{NFSU2_TR(0x75d360);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d365ull));
TAIL_STATIC(0x760da0u,760);
}
B75d365:L75d365:{c.instructions+=4;NFSU2_TR(0x75d365);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75d369:{NFSU2_TR(0x75d369);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75d36c:{NFSU2_TR(0x75d36c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B75d370:{NFSU2_TR(0x75d370);
if(r1(R+518)){{goto L75d37f;}}
}
B75d372:L75d372:{c.instructions+=1;NFSU2_TR(0x75d372);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B75d376:L75d376:{c.instructions+=2;NFSU2_TR(0x75d376);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d379:{NFSU2_TR(0x75d379);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d37eull));
TAIL_STATIC(0x760ddbu,760);
}
B75d37e:L75d37e:{c.instructions+=1;NFSU2_TR(0x75d37e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d37f:L75d37f:{c.instructions+=2;NFSU2_TR(0x75d37f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d380:{NFSU2_TR(0x75d380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d385ull));
TAIL_STATIC(0x75f323u,75f);
}
B75d385:L75d385:{c.instructions+=4;NFSU2_TR(0x75d385);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d386:{NFSU2_TR(0x75d386);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75d38a:{NFSU2_TR(0x75d38a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d38b:{NFSU2_TR(0x75d38b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d390ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d30du);}goto L75d30d;}
}
B75d390:L75d390:{c.instructions+=4;NFSU2_TR(0x75d390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d391:{NFSU2_TR(0x75d391);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75d394:{NFSU2_TR(0x75d394);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75d398:{NFSU2_TR(0x75d398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d39dull));
{goto L75d3a2;}
}
B75d39d:L75d39d:{c.instructions+=1;NFSU2_TR(0x75d39d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d376u);}goto L75d376;}
}
B75d3a2:L75d3a2:{c.instructions+=2;NFSU2_TR(0x75d3a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d3a3:{NFSU2_TR(0x75d3a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d3a8ull));
TAIL_STATIC(0x75f375u,75f);
}
B75d3a8:L75d3a8:{c.instructions+=2;NFSU2_TR(0x75d3a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d3a9:{NFSU2_TR(0x75d3a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d3aa:L75d3aa:{c.instructions+=3;NFSU2_TR(0x75d3aa);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d3ac:{NFSU2_TR(0x75d3ac);
u8 U[4];
w4(U+0,u32(0x7d3a18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d3b1:{NFSU2_TR(0x75d3b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d3b6ull));
TAIL_STATIC(0x760da0u,760);
}
B75d3b6:L75d3b6:{c.instructions+=1;NFSU2_TR(0x75d3b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d3bbull));
TAIL_STATIC(0x76623fu,766);
}
B75d3bb:L75d3bb:{c.instructions+=3;NFSU2_TR(0x75d3bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75d3be:{NFSU2_TR(0x75d3be);
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
B75d3c0:{NFSU2_TR(0x75d3c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75d3d1;}}
}
B75d3c2:L75d3c2:{c.instructions+=1;NFSU2_TR(0x75d3c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d3c7ull));
TAIL_STATIC(0x7661bau,766);
}
B75d3c7:L75d3c7:{c.instructions+=3;NFSU2_TR(0x75d3c7);
u8 U[4];
w4(U+0,u32(0x18ull));
s4(u32(r4(R+0)),r4(U+0));
}
B75d3cd:{NFSU2_TR(0x75d3cd);
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
B75d3cf:{NFSU2_TR(0x75d3cf);
{goto L75d3f6;}
}
B75d3d1:L75d3d1:{c.instructions+=6;NFSU2_TR(0x75d3d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75d3d5:{NFSU2_TR(0x75d3d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d3d6:{NFSU2_TR(0x75d3d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d3d9:{NFSU2_TR(0x75d3d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d3dc:{NFSU2_TR(0x75d3dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d3df:{NFSU2_TR(0x75d3df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d3e4ull));
TAIL_STATIC(0x766052u,766);
}
B75d3e4:L75d3e4:{c.instructions+=4;NFSU2_TR(0x75d3e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B75d3e7:{NFSU2_TR(0x75d3e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75d3ea:{NFSU2_TR(0x75d3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75d3ee:{NFSU2_TR(0x75d3ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d3f3ull));
{goto L75d3fc;}
}
B75d3f3:L75d3f3:{c.instructions+=1;NFSU2_TR(0x75d3f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d3f6:L75d3f6:{c.instructions+=1;NFSU2_TR(0x75d3f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d3fbull));
TAIL_STATIC(0x760ddbu,760);
}
B75d3fb:L75d3fb:{c.instructions+=1;NFSU2_TR(0x75d3fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d3fc:L75d3fc:{c.instructions+=2;NFSU2_TR(0x75d3fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d3ff:{NFSU2_TR(0x75d3ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d404ull));
TAIL_STATIC(0x75f375u,75f);
}
B75d404:L75d404:{c.instructions+=2;NFSU2_TR(0x75d404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d405:{NFSU2_TR(0x75d405);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d406:L75d406:{c.instructions+=4;NFSU2_TR(0x75d406);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d408:{NFSU2_TR(0x75d408);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d40c:{NFSU2_TR(0x75d40c);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d410:{NFSU2_TR(0x75d410);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d415ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d3aau);}goto L75d3aa;}
}
B75d415:L75d415:{c.instructions+=2;NFSU2_TR(0x75d415);
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
B75d418:{NFSU2_TR(0x75d418);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d419:L75d419:{c.instructions+=2;NFSU2_TR(0x75d419);
u8 U[4];
w4(U+0,u32(0x7d3a34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d41e:{NFSU2_TR(0x75d41e);
u8 U[4];
__builtin_memmove((U+0),gp(0x783138),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d424ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75d424:L75d424:{c.instructions+=2;NFSU2_TR(0x75d424);
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
B75d426:{NFSU2_TR(0x75d426);
if(r1(R+518)){{goto L75d43e;}}
}
B75d428:L75d428:{c.instructions+=3;NFSU2_TR(0x75d428);
u8 U[4];
w4(U+0,u32(0x7d3a24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d42d:{NFSU2_TR(0x75d42d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d42e:{NFSU2_TR(0x75d42e);
u8 U[4];
__builtin_memmove((U+0),gp(0x783194),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d434ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75d434:L75d434:{c.instructions+=2;NFSU2_TR(0x75d434);
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
B75d436:{NFSU2_TR(0x75d436);
if(r1(R+518)){{goto L75d43e;}}
}
B75d438:L75d438:{c.instructions+=2;NFSU2_TR(0x75d438);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d43c:{NFSU2_TR(0x75d43c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d43eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75d43e:L75d43e:{c.instructions+=2;NFSU2_TR(0x75d43e);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d442:{NFSU2_TR(0x75d442);
u8 U[4];
__builtin_memmove((U+0),gp(0x783294),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d448ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75d449:L75d449:{c.instructions+=2;NFSU2_TR(0x75d449);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d44b:{NFSU2_TR(0x75d44b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d450ull));
TAIL_STATIC(0x7631f1u,763);
}
B75d450:L75d450:{c.instructions+=2;NFSU2_TR(0x75d450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d451:{NFSU2_TR(0x75d451);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d452:L75d452:{c.instructions+=2;NFSU2_TR(0x75d452);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d454:{NFSU2_TR(0x75d454);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d459ull));
TAIL_STATIC(0x76315du,763);
}
B75d459:L75d459:{c.instructions+=2;NFSU2_TR(0x75d459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d45a:{NFSU2_TR(0x75d45a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d45b:L75d45b:{c.instructions+=3;NFSU2_TR(0x75d45b);
__builtin_memmove((R+0),gp(0x819c64),4);
}
B75d460:{NFSU2_TR(0x75d460);
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
B75d462:{NFSU2_TR(0x75d462);
if(r1(R+518)){{goto L75d466;}}
}
B75d464:L75d464:{c.instructions+=1;NFSU2_TR(0x75d464);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d466ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75d466:L75d466:{c.instructions+=8;NFSU2_TR(0x75d466);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d467:{NFSU2_TR(0x75d467);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d468:{NFSU2_TR(0x75d468);
w4(R+4,u32(0x7e8cd8ull));
}
B75d46d:{NFSU2_TR(0x75d46d);
w4(R+28,u32(0x7e8cf0ull));
}
B75d472:{NFSU2_TR(0x75d472);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75d474:{NFSU2_TR(0x75d474);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B75d476:{NFSU2_TR(0x75d476);
__builtin_memmove((R+24),(R+4),4);
}
B75d478:{NFSU2_TR(0x75d478);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75d491;}}
}
B75d47a:L75d47a:{c.instructions+=2;NFSU2_TR(0x75d47a);
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
B75d47c:{NFSU2_TR(0x75d47c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75d4bd;}}
}
B75d47e:L75d47e:{c.instructions+=3;NFSU2_TR(0x75d47e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B75d480:{NFSU2_TR(0x75d480);
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
B75d482:{NFSU2_TR(0x75d482);
if(r1(R+518)){{goto L75d486;}}
}
B75d484:L75d484:{c.instructions+=1;NFSU2_TR(0x75d484);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d486ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75d486:L75d486:{c.instructions+=3;NFSU2_TR(0x75d486);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B75d489:{NFSU2_TR(0x75d489);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B75d48b:{NFSU2_TR(0x75d48b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d47au);}goto L75d47a;}}
}
B75d48d:L75d48d:{c.instructions+=2;NFSU2_TR(0x75d48d);
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
B75d48f:{NFSU2_TR(0x75d48f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75d4bd;}}
}
B75d491:L75d491:{c.instructions+=2;NFSU2_TR(0x75d491);
u8 U[4];
w4(U+0,u32(0x761dc7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d496:{NFSU2_TR(0x75d496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d49bull));
TAIL_STATIC(0x75c5edu,75c);
}
B75d49b:L75d49b:{c.instructions+=6;NFSU2_TR(0x75d49b);
w4(R+24,u32(0x7e8000ull));
}
B75d4a0:{NFSU2_TR(0x75d4a0);
__builtin_memmove((R+0),(R+24),4);
}
B75d4a2:{NFSU2_TR(0x75d4a2);
w4(R+28,u32(0x7e8cd4ull));
}
B75d4a7:{NFSU2_TR(0x75d4a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B75d4a9:{NFSU2_TR(0x75d4a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d4aa:{NFSU2_TR(0x75d4aa);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75d4bb;}}
}
B75d4ac:L75d4ac:{c.instructions+=3;NFSU2_TR(0x75d4ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75d4ae:{NFSU2_TR(0x75d4ae);
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
B75d4b0:{NFSU2_TR(0x75d4b0);
if(r1(R+518)){{goto L75d4b4;}}
}
B75d4b2:L75d4b2:{c.instructions+=1;NFSU2_TR(0x75d4b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d4b4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75d4b4:L75d4b4:{c.instructions+=3;NFSU2_TR(0x75d4b4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B75d4b7:{NFSU2_TR(0x75d4b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B75d4b9:{NFSU2_TR(0x75d4b9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d4acu);}goto L75d4ac;}}
}
B75d4bb:L75d4bb:{c.instructions+=1;NFSU2_TR(0x75d4bb);
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
B75d4bd:L75d4bd:{c.instructions+=3;NFSU2_TR(0x75d4bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d4be:{NFSU2_TR(0x75d4be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d4bf:{NFSU2_TR(0x75d4bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d4c0:L75d4c0:{c.instructions+=6;NFSU2_TR(0x75d4c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d4c1:{NFSU2_TR(0x75d4c1);
__builtin_memmove((R+20),(R+16),4);
}
B75d4c3:{NFSU2_TR(0x75d4c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d4c4:{NFSU2_TR(0x75d4c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d4c5:{NFSU2_TR(0x75d4c5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d4c7:{NFSU2_TR(0x75d4c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d4ccull));
TAIL_STATIC(0x7631f1u,763);
}
B75d4cc:L75d4cc:{c.instructions+=5;NFSU2_TR(0x75d4cc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B75d4ce:{NFSU2_TR(0x75d4ce);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75d4cf:{NFSU2_TR(0x75d4cf);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b8470),4);
w1(R+512,u8((r4(U+6))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+24)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75d4d5:{NFSU2_TR(0x75d4d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d4d6:{NFSU2_TR(0x75d4d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75d4e8;}}
}
B75d4d8:L75d4d8:{c.instructions+=2;NFSU2_TR(0x75d4d8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d4db:{NFSU2_TR(0x75d4db);
u8 U[4];
__builtin_memmove((U+0),gp(0x78318c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d4e1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75d4e1:L75d4e1:{c.instructions+=2;NFSU2_TR(0x75d4e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d4e2:{NFSU2_TR(0x75d4e2);
u8 U[4];
__builtin_memmove((U+0),gp(0x783298),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d4e8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75d4e8:L75d4e8:{c.instructions+=5;NFSU2_TR(0x75d4e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75d4ec:{NFSU2_TR(0x75d4ec);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d4ef:{NFSU2_TR(0x75d4ef);
__builtin_memmove(gp(0x8b846c),(R+24),4);
}
B75d4f5:{NFSU2_TR(0x75d4f5);
__builtin_memmove(gp(0x8b8468),(R+0),1);
}
B75d4fa:{NFSU2_TR(0x75d4fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75d54e;}}
}
B75d4fc:L75d4fc:{c.instructions+=3;NFSU2_TR(0x75d4fc);
__builtin_memmove((R+4),gp(0x8bb5ec),4);
}
B75d502:{NFSU2_TR(0x75d502);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75d504:{NFSU2_TR(0x75d504);
if(r1(R+518)){{goto L75d52f;}}
}
B75d506:L75d506:{c.instructions+=4;NFSU2_TR(0x75d506);
__builtin_memmove((R+0),gp(0x8bb5e8),4);
}
B75d50b:{NFSU2_TR(0x75d50b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B75d50e:{NFSU2_TR(0x75d50e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B75d510:{NFSU2_TR(0x75d510);
{goto L75d528;}
}
B75d512:L75d512:{c.instructions+=3;NFSU2_TR(0x75d512);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75d514:{NFSU2_TR(0x75d514);
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
B75d516:{NFSU2_TR(0x75d516);
if(r1(R+518)){{goto L75d51a;}}
}
B75d518:L75d518:{c.instructions+=1;NFSU2_TR(0x75d518);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d51aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75d51a:L75d51a:{c.instructions+=3;NFSU2_TR(0x75d51a);
__builtin_memmove((R+0),gp(0x8bb5e8),4);
}
B75d51f:{NFSU2_TR(0x75d51f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
}
B75d522:{NFSU2_TR(0x75d522);
u8 U[4];
__builtin_memmove((U+0),gp(0x8bb5ec),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B75d528:L75d528:{c.instructions+=2;NFSU2_TR(0x75d528);
__builtin_memmove(gp(0x8bb5e8),(R+0),4);
}
B75d52d:{NFSU2_TR(0x75d52d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d512u);}goto L75d512;}}
}
B75d52f:L75d52f:{c.instructions+=5;NFSU2_TR(0x75d52f);
w4(R+0,u32(0x7e8cf4ull));
}
B75d534:{NFSU2_TR(0x75d534);
w4(R+24,u32(0x7e8d00ull));
}
B75d539:{NFSU2_TR(0x75d539);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B75d53b:{NFSU2_TR(0x75d53b);
__builtin_memmove((R+28),(R+0),4);
}
B75d53d:{NFSU2_TR(0x75d53d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75d54e;}}
}
B75d53f:L75d53f:{c.instructions+=3;NFSU2_TR(0x75d53f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75d541:{NFSU2_TR(0x75d541);
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
B75d543:{NFSU2_TR(0x75d543);
if(r1(R+518)){{goto L75d547;}}
}
B75d545:L75d545:{c.instructions+=1;NFSU2_TR(0x75d545);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d547ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75d547:L75d547:{c.instructions+=3;NFSU2_TR(0x75d547);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B75d54a:{NFSU2_TR(0x75d54a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B75d54c:{NFSU2_TR(0x75d54c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d53fu);}goto L75d53f;}}
}
B75d54e:L75d54e:{c.instructions+=5;NFSU2_TR(0x75d54e);
w4(R+0,u32(0x7e8d04ull));
}
B75d553:{NFSU2_TR(0x75d553);
w4(R+24,u32(0x7e8d0cull));
}
B75d558:{NFSU2_TR(0x75d558);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B75d55a:{NFSU2_TR(0x75d55a);
__builtin_memmove((R+28),(R+0),4);
}
B75d55c:{NFSU2_TR(0x75d55c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75d56d;}}
}
B75d55e:L75d55e:{c.instructions+=3;NFSU2_TR(0x75d55e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B75d560:{NFSU2_TR(0x75d560);
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
B75d562:{NFSU2_TR(0x75d562);
if(r1(R+518)){{goto L75d566;}}
}
B75d564:L75d564:{c.instructions+=1;NFSU2_TR(0x75d564);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d566ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75d566:L75d566:{c.instructions+=3;NFSU2_TR(0x75d566);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B75d569:{NFSU2_TR(0x75d569);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B75d56b:{NFSU2_TR(0x75d56b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d55eu);}goto L75d55e;}}
}
B75d56d:L75d56d:{c.instructions+=4;NFSU2_TR(0x75d56d);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75d571:{NFSU2_TR(0x75d571);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d572:{NFSU2_TR(0x75d572);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d573:{NFSU2_TR(0x75d573);
if(r1(R+518)){{goto L75d57e;}}
}
B75d575:L75d575:{c.instructions+=2;NFSU2_TR(0x75d575);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d577:{NFSU2_TR(0x75d577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d57cull));
TAIL_STATIC(0x76315du,763);
}
B75d57c:L75d57c:{c.instructions+=1;NFSU2_TR(0x75d57c);
{goto L75d590;}
}
B75d57e:L75d57e:{c.instructions+=3;NFSU2_TR(0x75d57e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d581:{NFSU2_TR(0x75d581);
s4(0x8b8470,u32(0x1ull));
}
B75d58b:{NFSU2_TR(0x75d58b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d590ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d419u);}goto L75d419;}
}
B75d590:L75d590:{c.instructions+=3;NFSU2_TR(0x75d590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d591:{NFSU2_TR(0x75d591);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75d592:{NFSU2_TR(0x75d592);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d593:L75d593:{c.instructions+=4;NFSU2_TR(0x75d593);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d595:{NFSU2_TR(0x75d595);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d597:{NFSU2_TR(0x75d597);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d59b:{NFSU2_TR(0x75d59b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d5a0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d4c0u);}goto L75d4c0;}
}
B75d5a0:L75d5a0:{c.instructions+=2;NFSU2_TR(0x75d5a0);
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
B75d5a3:{NFSU2_TR(0x75d5a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d5a4:L75d5a4:{c.instructions+=4;NFSU2_TR(0x75d5a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d5a6:{NFSU2_TR(0x75d5a6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d5a8:{NFSU2_TR(0x75d5a8);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d5ac:{NFSU2_TR(0x75d5ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d5b1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d4c0u);}goto L75d4c0;}
}
B75d5b1:L75d5b1:{c.instructions+=2;NFSU2_TR(0x75d5b1);
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
B75d5b4:{NFSU2_TR(0x75d5b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d5b5:L75d5b5:{c.instructions+=4;NFSU2_TR(0x75d5b5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d5b7:{NFSU2_TR(0x75d5b7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d5b9:{NFSU2_TR(0x75d5b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d5bb:{NFSU2_TR(0x75d5bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d5c0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d4c0u);}goto L75d4c0;}
}
B75d5c0:L75d5c0:{c.instructions+=2;NFSU2_TR(0x75d5c0);
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
B75d5c3:{NFSU2_TR(0x75d5c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d5c4:L75d5c4:{c.instructions+=4;NFSU2_TR(0x75d5c4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d5c6:{NFSU2_TR(0x75d5c6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d5c8:{NFSU2_TR(0x75d5c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d5ca:{NFSU2_TR(0x75d5ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d5cfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d4c0u);}goto L75d4c0;}
}
B75d5cf:L75d5cf:{c.instructions+=2;NFSU2_TR(0x75d5cf);
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
B75d5d2:{NFSU2_TR(0x75d5d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d5d3:L75d5d3:{c.instructions+=3;NFSU2_TR(0x75d5d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d5d4:{NFSU2_TR(0x75d5d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d5d5:{NFSU2_TR(0x75d5d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d5daull));
TAIL_STATIC(0x761e3cu,761);
}
B75d5da:L75d5da:{c.instructions+=3;NFSU2_TR(0x75d5da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75d5dd:{NFSU2_TR(0x75d5dd);
u8 U[8];
__builtin_memmove((U+0),gp(0x819d24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75d5e3:{NFSU2_TR(0x75d5e3);
if(r1(R+518)){{goto L75d5ec;}}
}
B75d5e5:L75d5e5:{c.instructions+=1;NFSU2_TR(0x75d5e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d5eaull));
TAIL_STATIC(0x75e3d3u,75e);
}
B75d5ea:L75d5ea:{c.instructions+=1;NFSU2_TR(0x75d5ea);
__builtin_memmove((R+28),(R+0),4);
}
B75d5ec:L75d5ec:{c.instructions+=1;NFSU2_TR(0x75d5ec);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75d5f0:L75d5f0:{c.instructions+=3;NFSU2_TR(0x75d5f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75d5f4:{NFSU2_TR(0x75d5f4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B75d5f7:{NFSU2_TR(0x75d5f7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75d607;}}
}
B75d5f9:L75d5f9:{c.instructions+=4;NFSU2_TR(0x75d5f9);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d5fb:{NFSU2_TR(0x75d5fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d5fc:{NFSU2_TR(0x75d5fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d5fd:{NFSU2_TR(0x75d5fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d602ull));
TAIL_STATIC(0x766361u,766);
}
B75d602:L75d602:{c.instructions+=2;NFSU2_TR(0x75d602);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75d605:{NFSU2_TR(0x75d605);
{goto L75d611;}
}
B75d607:L75d607:{c.instructions+=3;NFSU2_TR(0x75d607);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75d60a:{NFSU2_TR(0x75d60a);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B75d60e:{NFSU2_TR(0x75d60e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8ull))));
}
B75d611:L75d611:{c.instructions+=2;NFSU2_TR(0x75d611);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75d613:{NFSU2_TR(0x75d613);
if(r1(R+518)){{goto L75d618;}}
}
B75d615:L75d615:{c.instructions+=2;NFSU2_TR(0x75d615);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75d616:{NFSU2_TR(0x75d616);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d5f0u);}goto L75d5f0;}
}
B75d618:L75d618:{c.instructions+=5;NFSU2_TR(0x75d618);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+4,u32(r1(U+0)));
}
B75d61b:{NFSU2_TR(0x75d61b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75d61c:{NFSU2_TR(0x75d61c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75d61f:{NFSU2_TR(0x75d61f);
__builtin_memmove((R+8),(R+4),4);
}
B75d621:{NFSU2_TR(0x75d621);
if(r1(R+518)){{goto L75d628;}}
}
B75d623:L75d623:{c.instructions+=2;NFSU2_TR(0x75d623);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75d626:{NFSU2_TR(0x75d626);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75d62c;}}
}
B75d628:L75d628:{c.instructions+=2;NFSU2_TR(0x75d628);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+4,u32(r1(U+0)));
}
B75d62b:{NFSU2_TR(0x75d62b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75d62c:L75d62c:{c.instructions+=1;NFSU2_TR(0x75d62c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75d62e:L75d62e:{c.instructions+=2;NFSU2_TR(0x75d62e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x30ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B75d631:{NFSU2_TR(0x75d631);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75d63d;}}
}
B75d633:L75d633:{c.instructions+=2;NFSU2_TR(0x75d633);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x39ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x39ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75d636:{NFSU2_TR(0x75d636);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L75d63d;}}
}
B75d638:L75d638:{c.instructions+=2;NFSU2_TR(0x75d638);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x30ull))));
}
B75d63b:{NFSU2_TR(0x75d63b);
{goto L75d640;}
}
B75d63d:L75d63d:{c.instructions+=1;NFSU2_TR(0x75d63d);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B75d640:L75d640:{c.instructions+=2;NFSU2_TR(0x75d640);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75d643:{NFSU2_TR(0x75d643);
if(r1(R+518)){{goto L75d651;}}
}
B75d645:L75d645:{c.instructions+=5;NFSU2_TR(0x75d645);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75d648:{NFSU2_TR(0x75d648);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B75d64b:{NFSU2_TR(0x75d64b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+4,u32(r1(U+0)));
}
B75d64e:{NFSU2_TR(0x75d64e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75d64f:{NFSU2_TR(0x75d64f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d62eu);}goto L75d62e;}
}
B75d651:L75d651:{c.instructions+=4;NFSU2_TR(0x75d651);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x2dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75d654:{NFSU2_TR(0x75d654);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d655:{NFSU2_TR(0x75d655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d656:{NFSU2_TR(0x75d656);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75d65a;}}
}
B75d658:L75d658:{c.instructions+=1;NFSU2_TR(0x75d658);
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
B75d65a:L75d65a:{c.instructions+=1;NFSU2_TR(0x75d65a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d65b:L75d65b:{c.instructions+=1;NFSU2_TR(0x75d65b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d5d3u);}goto L75d5d3;}
}
B75d660:L75d660:{c.instructions+=6;NFSU2_TR(0x75d660);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d661:{NFSU2_TR(0x75d661);
__builtin_memmove((R+20),(R+16),4);
}
B75d663:{NFSU2_TR(0x75d663);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d664:{NFSU2_TR(0x75d664);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75d667:{NFSU2_TR(0x75d667);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75d669:{NFSU2_TR(0x75d669);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B75d66c:L75d66c:{c.instructions+=1;NFSU2_TR(0x75d66c);
u8 U[23];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L75d66e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
w1(R+512,u8((r1(R+0))<(r1(U+16))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
w1(R+523,sborrow<u8>(r1(R+0),r1(U+16)));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
w1(U+22,u8(u32(r1(R+0))-u32(r1(U+16))));
w1(R+519,u8(s8(r1(U+22))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+22))==(u8(0x0ull))));
w1(U+19,u8(u32(r1(U+22))&u32(u8(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r1(U+19)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
w1(U+18,u8(!(r1(R+518))));
if(r1(U+18)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d66cu);}goto L75d66c;}}
}
B75d66e:L75d66e:{c.instructions+=5;NFSU2_TR(0x75d66e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B75d671:{NFSU2_TR(0x75d671);
w4(R+4,u32(0-u32(r4(R+4))));
}
B75d673:{NFSU2_TR(0x75d673);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B75d676:{NFSU2_TR(0x75d676);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B75d679:{NFSU2_TR(0x75d679);
w1(R+522,u8(0x1ull));
}
B75d67a:L75d67a:{c.instructions+=1;NFSU2_TR(0x75d67a);
u8 U[23];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L75d67c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
w1(R+512,u8((r1(R+0))<(r1(U+16))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
w1(R+523,sborrow<u8>(r1(R+0),r1(U+16)));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
w1(U+22,u8(u32(r1(R+0))-u32(r1(U+16))));
w1(R+519,u8(s8(r1(U+22))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+22))==(u8(0x0ull))));
w1(U+19,u8(u32(r1(U+22))&u32(u8(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r1(U+19)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
w1(U+18,u8(!(r1(R+518))));
if(r1(U+18)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d67au);}goto L75d67a;}}
}
B75d67c:L75d67c:{c.instructions+=3;NFSU2_TR(0x75d67c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75d67f:{NFSU2_TR(0x75d67f);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(r1(R+0))));
w1(R+523,sborrow<u8>(r1(U+4),r1(R+0)));
w1(U+5,u8(u32(r1(U+4))-u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B75d681:{NFSU2_TR(0x75d681);
if(r1(R+518)){{goto L75d687;}}
}
B75d683:L75d683:{c.instructions+=2;NFSU2_TR(0x75d683);
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
B75d685:{NFSU2_TR(0x75d685);
{goto L75d689;}
}
B75d687:L75d687:{c.instructions+=1;NFSU2_TR(0x75d687);
__builtin_memmove((R+0),(R+28),4);
}
B75d689:L75d689:{c.instructions+=4;NFSU2_TR(0x75d689);
w1(R+522,u8(0x0ull));
}
B75d68a:{NFSU2_TR(0x75d68a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d68b:{NFSU2_TR(0x75d68b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75d68c:{NFSU2_TR(0x75d68c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d68d:L75d68d:{c.instructions+=14;NFSU2_TR(0x75d68d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d68e:{NFSU2_TR(0x75d68e);
__builtin_memmove((R+20),(R+16),4);
}
B75d690:{NFSU2_TR(0x75d690);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d691:{NFSU2_TR(0x75d691);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d692:{NFSU2_TR(0x75d692);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d695:{NFSU2_TR(0x75d695);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d696:{NFSU2_TR(0x75d696);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d697:{NFSU2_TR(0x75d697);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75d69a:{NFSU2_TR(0x75d69a);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w8(U+8,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+28,u32(r8(U+24)));
}
B75d69e:{NFSU2_TR(0x75d69e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75d6a0:{NFSU2_TR(0x75d6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75d6a3:{NFSU2_TR(0x75d6a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75d6a6:{NFSU2_TR(0x75d6a6);
__builtin_memmove((R+12),(R+28),4);
}
B75d6a8:{NFSU2_TR(0x75d6a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75d6b1;}}
}
B75d6aa:L75d6aa:{c.instructions+=2;NFSU2_TR(0x75d6aa);
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
B75d6ac:{NFSU2_TR(0x75d6ac);
{goto L75d77c;}
}
B75d6b1:L75d6b1:{c.instructions+=4;NFSU2_TR(0x75d6b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d6b2:{NFSU2_TR(0x75d6b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75d6b5:{NFSU2_TR(0x75d6b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x10cull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B75d6bb:{NFSU2_TR(0x75d6bb);
if(r1(R+518)){{goto L75d6c5;}}
}
B75d6bd:L75d6bd:{c.instructions+=3;NFSU2_TR(0x75d6bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d6c0:{NFSU2_TR(0x75d6c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75d6c3:{NFSU2_TR(0x75d6c3);
{goto L75d6cc;}
}
B75d6c5:L75d6c5:{c.instructions+=1;NFSU2_TR(0x75d6c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75d6cc:L75d6cc:{c.instructions+=3;NFSU2_TR(0x75d6cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75d6cf:{NFSU2_TR(0x75d6cf);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x108ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B75d6d5:{NFSU2_TR(0x75d6d5);
if(r1(R+518)){{goto L75d700;}}
}
B75d6d7:L75d6d7:{c.instructions+=3;NFSU2_TR(0x75d6d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d6da:{NFSU2_TR(0x75d6da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75d6dc:{NFSU2_TR(0x75d6dc);
if(r1(R+518)){{goto L75d700;}}
}
B75d6de:L75d6de:{c.instructions+=3;NFSU2_TR(0x75d6de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B75d6e0:{NFSU2_TR(0x75d6e0);
__builtin_memmove((R+28),(R+12),4);
}
B75d6e2:{NFSU2_TR(0x75d6e2);
if(r1(R+512)){{goto L75d6e6;}}
}
B75d6e4:L75d6e4:{c.instructions+=1;NFSU2_TR(0x75d6e4);
__builtin_memmove((R+28),(R+0),4);
}
B75d6e6:L75d6e6:{c.instructions+=4;NFSU2_TR(0x75d6e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d6e7:{NFSU2_TR(0x75d6e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d6ea:{NFSU2_TR(0x75d6ea);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B75d6ec:{NFSU2_TR(0x75d6ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d6f1ull));
TAIL_STATIC(0x760df0u,760);
}
B75d6f1:L75d6f1:{c.instructions+=6;NFSU2_TR(0x75d6f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B75d6f4:{NFSU2_TR(0x75d6f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+28))));
s4(u32(r4(R+24)),r4(U+0));
}
B75d6f6:{NFSU2_TR(0x75d6f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75d6f9:{NFSU2_TR(0x75d6f9);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B75d6fb:{NFSU2_TR(0x75d6fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B75d6fe:{NFSU2_TR(0x75d6fe);
{goto L75d742;}
}
B75d700:L75d700:{c.instructions+=2;NFSU2_TR(0x75d700);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B75d703:{NFSU2_TR(0x75d703);
if(r1(R+512)){{goto L75d747;}}
}
B75d705:L75d705:{c.instructions+=2;NFSU2_TR(0x75d705);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75d707:{NFSU2_TR(0x75d707);
if(r1(R+518)){{goto L75d714;}}
}
B75d709:L75d709:{c.instructions+=2;NFSU2_TR(0x75d709);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d70a:{NFSU2_TR(0x75d70a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d70full));
TAIL_STATIC(0x75f42du,75f);
}
B75d70f:L75d70f:{c.instructions+=3;NFSU2_TR(0x75d70f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75d711:{NFSU2_TR(0x75d711);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d712:{NFSU2_TR(0x75d712);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75d780;}}
}
B75d714:L75d714:{c.instructions+=3;NFSU2_TR(0x75d714);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75d718:{NFSU2_TR(0x75d718);
__builtin_memmove((R+28),(R+12),4);
}
B75d71a:{NFSU2_TR(0x75d71a);
if(r1(R+518)){{goto L75d725;}}
}
B75d71c:L75d71c:{c.instructions+=4;NFSU2_TR(0x75d71c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B75d71e:{NFSU2_TR(0x75d71e);
__builtin_memmove((R+0),(R+12),4);
}
B75d720:{NFSU2_TR(0x75d720);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75d720);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75d720);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B75d723:{NFSU2_TR(0x75d723);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+8))));
}
B75d725:L75d725:{c.instructions+=4;NFSU2_TR(0x75d725);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d726:{NFSU2_TR(0x75d726);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d729:{NFSU2_TR(0x75d729);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d72c:{NFSU2_TR(0x75d72c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d731ull));
TAIL_STATIC(0x760237u,760);
}
B75d731:L75d731:{c.instructions+=3;NFSU2_TR(0x75d731);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75d734:{NFSU2_TR(0x75d734);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75d737:{NFSU2_TR(0x75d737);
if(r1(R+518)){{goto L75d78b;}}
}
B75d739:L75d739:{c.instructions+=4;NFSU2_TR(0x75d739);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B75d73c:{NFSU2_TR(0x75d73c);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+0))));
}
B75d73e:{NFSU2_TR(0x75d73e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B75d740:{NFSU2_TR(0x75d740);
if(r1(R+512)){{goto L75d78b;}}
}
B75d742:L75d742:{c.instructions+=2;NFSU2_TR(0x75d742);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75d745:{NFSU2_TR(0x75d745);
{goto L75d770;}
}
B75d747:L75d747:{c.instructions+=5;NFSU2_TR(0x75d747);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d74a:{NFSU2_TR(0x75d74a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B75d74d:{NFSU2_TR(0x75d74d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d74e:{NFSU2_TR(0x75d74e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d74f:{NFSU2_TR(0x75d74f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d754ull));
TAIL_STATIC(0x763d60u,763);
}
B75d754:L75d754:{c.instructions+=4;NFSU2_TR(0x75d754);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75d757:{NFSU2_TR(0x75d757);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d758:{NFSU2_TR(0x75d758);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d759:{NFSU2_TR(0x75d759);
if(r1(R+518)){{goto L75d780;}}
}
B75d75b:L75d75b:{c.instructions+=6;NFSU2_TR(0x75d75b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75d75e:{NFSU2_TR(0x75d75e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d761:{NFSU2_TR(0x75d761);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B75d762:{NFSU2_TR(0x75d762);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75d764:{NFSU2_TR(0x75d764);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75d767:{NFSU2_TR(0x75d767);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L75d770;}}
}
B75d769:L75d769:{c.instructions+=1;NFSU2_TR(0x75d769);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B75d770:L75d770:{c.instructions+=2;NFSU2_TR(0x75d770);
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
B75d772:{NFSU2_TR(0x75d772);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d6ccu);}goto L75d6cc;}}
}
B75d778:L75d778:{c.instructions+=1;NFSU2_TR(0x75d778);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d77b:L75d77b:{c.instructions+=1;NFSU2_TR(0x75d77b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d77c:L75d77c:{c.instructions+=4;NFSU2_TR(0x75d77c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d77d:{NFSU2_TR(0x75d77d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75d77e:{NFSU2_TR(0x75d77e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75d77f:{NFSU2_TR(0x75d77f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d780:L75d780:{c.instructions+=1;NFSU2_TR(0x75d780);
__builtin_memmove((R+0),(R+28),4);
}
B75d782:L75d782:{c.instructions+=4;NFSU2_TR(0x75d782);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B75d784:{NFSU2_TR(0x75d784);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75d786:{NFSU2_TR(0x75d786);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75d786);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x75d786);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B75d789:{NFSU2_TR(0x75d789);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d77bu);}goto L75d77b;}
}
B75d78b:L75d78b:{c.instructions+=3;NFSU2_TR(0x75d78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x20ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75d78f:{NFSU2_TR(0x75d78f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d792:{NFSU2_TR(0x75d792);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d782u);}goto L75d782;}
}
B75d794:L75d794:{c.instructions+=3;NFSU2_TR(0x75d794);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d796:{NFSU2_TR(0x75d796);
u8 U[4];
w4(U+0,u32(0x7d3a40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d79b:{NFSU2_TR(0x75d79b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d7a0ull));
TAIL_STATIC(0x760da0u,760);
}
B75d7a0:L75d7a0:{c.instructions+=2;NFSU2_TR(0x75d7a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d7a3:{NFSU2_TR(0x75d7a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d7a8ull));
TAIL_STATIC(0x75f323u,75f);
}
B75d7a8:L75d7a8:{c.instructions+=7;NFSU2_TR(0x75d7a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d7a9:{NFSU2_TR(0x75d7a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75d7ad:{NFSU2_TR(0x75d7ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d7b0:{NFSU2_TR(0x75d7b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d7b3:{NFSU2_TR(0x75d7b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d7b6:{NFSU2_TR(0x75d7b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d7b9:{NFSU2_TR(0x75d7b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d7beull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d68du);}goto L75d68d;}
}
B75d7be:L75d7be:{c.instructions+=4;NFSU2_TR(0x75d7be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B75d7c1:{NFSU2_TR(0x75d7c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75d7c4:{NFSU2_TR(0x75d7c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75d7c8:{NFSU2_TR(0x75d7c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d7cdull));
{goto L75d7d6;}
}
B75d7cd:L75d7cd:{c.instructions+=2;NFSU2_TR(0x75d7cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d7d0:{NFSU2_TR(0x75d7d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d7d5ull));
TAIL_STATIC(0x760ddbu,760);
}
B75d7d5:L75d7d5:{c.instructions+=1;NFSU2_TR(0x75d7d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d7d6:L75d7d6:{c.instructions+=2;NFSU2_TR(0x75d7d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d7d9:{NFSU2_TR(0x75d7d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d7deull));
TAIL_STATIC(0x75f375u,75f);
}
B75d7de:L75d7de:{c.instructions+=2;NFSU2_TR(0x75d7de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d7df:{NFSU2_TR(0x75d7df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d7e0:L75d7e0:{c.instructions+=10;NFSU2_TR(0x75d7e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d7e1:{NFSU2_TR(0x75d7e1);
u8 U[4];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B75d7e5:{NFSU2_TR(0x75d7e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xb8ull))));
}
B75d7eb:{NFSU2_TR(0x75d7eb);
__builtin_memmove((R+0),gp(0x81a1d0),4);
}
B75d7f0:{NFSU2_TR(0x75d7f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B75d7f3:{NFSU2_TR(0x75d7f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d7f4:{NFSU2_TR(0x75d7f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d7f5:{NFSU2_TR(0x75d7f5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d7f6:{NFSU2_TR(0x75d7f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75d7f9:{NFSU2_TR(0x75d7f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d7feull));
TAIL_STATIC(0x76698cu,766);
}
B75d7fe:L75d7fe:{c.instructions+=10;NFSU2_TR(0x75d7fe);
__builtin_memmove((R+0),gp(0x81a760),4);
}
B75d803:{NFSU2_TR(0x75d803);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d805:{NFSU2_TR(0x75d805);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B75d806:{NFSU2_TR(0x75d806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d807:{NFSU2_TR(0x75d807);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75d807);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x75d807);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B75d809:{NFSU2_TR(0x75d809);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75d80c:{NFSU2_TR(0x75d80c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B75d810:{NFSU2_TR(0x75d810);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75d813:{NFSU2_TR(0x75d813);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d814:{NFSU2_TR(0x75d814);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832a0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d81aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75d81a:L75d81a:{c.instructions+=7;NFSU2_TR(0x75d81a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75d81d:{NFSU2_TR(0x75d81d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75d820:{NFSU2_TR(0x75d820);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d822:{NFSU2_TR(0x75d822);
u8 U[4];
w4(U+0,u32(0x23c34600ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d827:{NFSU2_TR(0x75d827);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d828:{NFSU2_TR(0x75d828);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d829:{NFSU2_TR(0x75d829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d82eull));
TAIL_STATIC(0x75f750u,75f);
}
B75d82e:L75d82e:{c.instructions+=3;NFSU2_TR(0x75d82e);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b8474),4);
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
B75d834:{NFSU2_TR(0x75d834);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75d837:{NFSU2_TR(0x75d837);
if(r1(R+518)){{goto L75d884;}}
}
B75d839:L75d839:{c.instructions+=3;NFSU2_TR(0x75d839);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B75d83c:{NFSU2_TR(0x75d83c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d83d:{NFSU2_TR(0x75d83d);
u8 U[4];
__builtin_memmove((U+0),gp(0x78329c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d843ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75d843:L75d843:{c.instructions+=2;NFSU2_TR(0x75d843);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75d846:{NFSU2_TR(0x75d846);
if(r1(R+518)){{goto L75d86f;}}
}
B75d848:L75d848:{c.instructions+=2;NFSU2_TR(0x75d848);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75d84b:{NFSU2_TR(0x75d84b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75d866;}}
}
B75d84d:L75d84d:{c.instructions+=2;NFSU2_TR(0x75d84d);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x56ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B75d852:{NFSU2_TR(0x75d852);
if(r1(R+518)){{goto L75d866;}}
}
B75d854:L75d854:{c.instructions+=2;NFSU2_TR(0x75d854);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75d858:{NFSU2_TR(0x75d858);
if(r1(R+518)){{goto L75d866;}}
}
B75d85a:L75d85a:{c.instructions+=2;NFSU2_TR(0x75d85a);
s4(0x819c90,u32(0x1ull));
}
B75d864:{NFSU2_TR(0x75d864);
{goto L75d876;}
}
B75d866:L75d866:{c.instructions+=2;NFSU2_TR(0x75d866);
s4(0x819c90,u32(u32(m4(0x819c90))&u32(u32(0x0ull))));
}
B75d86d:{NFSU2_TR(0x75d86d);
{goto L75d876;}
}
B75d86f:L75d86f:{c.instructions+=1;NFSU2_TR(0x75d86f);
s4(0x819c90,u32(u32(m4(0x819c90))|u32(u32(0xffffffffull))));
}
B75d876:L75d876:{c.instructions+=4;NFSU2_TR(0x75d876);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d879:{NFSU2_TR(0x75d879);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75d87c:{NFSU2_TR(0x75d87c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75d87f:{NFSU2_TR(0x75d87f);
__builtin_memmove(gp(0x8b8474),(R+0),4);
}
B75d884:L75d884:{c.instructions+=7;NFSU2_TR(0x75d884);
__builtin_memmove((R+0),gp(0x819c90),2);
}
B75d88a:{NFSU2_TR(0x75d88a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d88c:{NFSU2_TR(0x75d88c);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d891:{NFSU2_TR(0x75d891);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d892:{NFSU2_TR(0x75d892);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d893:{NFSU2_TR(0x75d893);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B75d897:{NFSU2_TR(0x75d897);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d89cull));
TAIL_STATIC(0x75f750u,75f);
}
B75d89c:L75d89c:{c.instructions+=5;NFSU2_TR(0x75d89c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d89e:{NFSU2_TR(0x75d89e);
u8 U[4];
w4(U+0,u32(0x3e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d8a3:{NFSU2_TR(0x75d8a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d8a4:{NFSU2_TR(0x75d8a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d8a5:{NFSU2_TR(0x75d8a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d8aaull));
TAIL_STATIC(0x7669e0u,766);
}
B75d8aa:L75d8aa:{c.instructions+=8;NFSU2_TR(0x75d8aa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d8ac:{NFSU2_TR(0x75d8ac);
w1(R+512,carry<u32>(r4(R+12),u32(0x2ac18000ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ac18000ull))));
}
B75d8b2:{NFSU2_TR(0x75d8b2);
u8 U[4];
w4(U+0,u32(0x989680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d8b7:{NFSU2_TR(0x75d8b7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+28))+u32(u32(0xfe624e21ull))));
w4(R+28,u32(u32(r4(U+4))+u32(r4(U+0))));
}
B75d8bd:{NFSU2_TR(0x75d8bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d8be:{NFSU2_TR(0x75d8be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d8bf:{NFSU2_TR(0x75d8bf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B75d8c3:{NFSU2_TR(0x75d8c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d8c8ull));
TAIL_STATIC(0x75f750u,75f);
}
B75d8c8:L75d8c8:{c.instructions+=7;NFSU2_TR(0x75d8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75d8cb:{NFSU2_TR(0x75d8cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B75d8ce:{NFSU2_TR(0x75d8ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d8cf:{NFSU2_TR(0x75d8cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B75d8d1:{NFSU2_TR(0x75d8d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d8d2:{NFSU2_TR(0x75d8d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75d8d3:{NFSU2_TR(0x75d8d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d8d8ull));
TAIL_STATIC(0x76115eu,761);
}
B75d8d8:L75d8d8:{c.instructions+=3;NFSU2_TR(0x75d8d8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x74ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x74ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x74ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75d8db:{NFSU2_TR(0x75d8db);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75d8dc:{NFSU2_TR(0x75d8dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d8e0:L75d8e0:{c.instructions+=2;NFSU2_TR(0x75d8e0);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
w1(R+512,u8((r1(U+0))<(u8(0x40ull))));
}
B75d8e3:{NFSU2_TR(0x75d8e3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75d8fa;}}
}
B75d8e5:L75d8e5:{c.instructions+=2;NFSU2_TR(0x75d8e5);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x20ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x20ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75d8e8:{NFSU2_TR(0x75d8e8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75d8f0;}}
}
B75d8ea:L75d8ea:{c.instructions+=3;NFSU2_TR(0x75d8ea);
u8 U[48];
w1(U+34,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+35),(R+8),4);
w4(U+39,shl<u32>(r4(R+8),u64(r1(U+34))));
w1(U+43,u8(u32(u8(0x20ull))-u32(r1(U+34))));
w4(U+44,shr<u32>(r4(R+0),u64(r1(U+43))));
w4(R+8,u32(u32(r4(U+39))|u32(r4(U+44))));
w1(U+24,u8((r1(U+34))==(u8(0x0ull))));
w1(U+25,u8(u32(r1(U+34))-u32(u8(0x1ull))));
w4(U+26,shl<u32>(r4(U+35),u64(r1(U+25))));
w1(U+30,u8(s32(r4(U+26))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+30))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+31,u8((r1(U+34))==(u8(0x1ull))));
w1(U+32,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+33,u8(u32(r1(R+512))^u32(r1(U+32))));
__builtin_memmove((U+0),(U+31),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+33))));
w1(U+2,u8(!(r1(U+31))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r1(U+34))!=(u8(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B75d8ed:{NFSU2_TR(0x75d8ed);
u8 U[39];
w1(U+34,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+35),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+34))));
w1(U+24,u8((r1(U+34))==(u8(0x0ull))));
w1(U+25,u8(u32(r1(U+34))-u32(u8(0x1ull))));
w4(U+26,shl<u32>(r4(U+35),u64(r1(U+25))));
w1(U+30,u8(s32(r4(U+26))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+30))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+31,u8((r1(U+34))==(u8(0x1ull))));
w1(U+32,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+33,u8(u32(r1(R+512))^u32(r1(U+32))));
__builtin_memmove((U+0),(U+31),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+33))));
w1(U+2,u8(!(r1(U+31))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r1(U+34))!=(u8(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B75d8ef:{NFSU2_TR(0x75d8ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d8f0:L75d8f0:{c.instructions+=5;NFSU2_TR(0x75d8f0);
__builtin_memmove((R+8),(R+0),4);
}
B75d8f2:{NFSU2_TR(0x75d8f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75d8f4:{NFSU2_TR(0x75d8f4);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75d8f7:{NFSU2_TR(0x75d8f7);
u8 U[39];
w1(U+34,u8(u32(r1(R+4))&u32(u8(0x1full))));
__builtin_memmove((U+35),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+34))));
w1(U+24,u8((r1(U+34))==(u8(0x0ull))));
w1(U+25,u8(u32(r1(U+34))-u32(u8(0x1ull))));
w4(U+26,shl<u32>(r4(U+35),u64(r1(U+25))));
w1(U+30,u8(s32(r4(U+26))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+30))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+31,u8((r1(U+34))==(u8(0x1ull))));
w1(U+32,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+33,u8(u32(r1(R+512))^u32(r1(U+32))));
__builtin_memmove((U+0),(U+31),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+33))));
w1(U+2,u8(!(r1(U+31))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r1(U+34))!=(u8(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B75d8f9:{NFSU2_TR(0x75d8f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d8fa:L75d8fa:{c.instructions+=3;NFSU2_TR(0x75d8fa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75d8fc:{NFSU2_TR(0x75d8fc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75d8fe:{NFSU2_TR(0x75d8fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d8ff:L75d8ff:{c.instructions+=10;NFSU2_TR(0x75d8ff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d900:{NFSU2_TR(0x75d900);
__builtin_memmove((R+20),(R+16),4);
}
B75d902:{NFSU2_TR(0x75d902);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75d905:{NFSU2_TR(0x75d905);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d908:{NFSU2_TR(0x75d908);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d909:{NFSU2_TR(0x75d909);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d90a:{NFSU2_TR(0x75d90a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d90c:{NFSU2_TR(0x75d90c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d90d:{NFSU2_TR(0x75d90d);
w4(R+24,u32(0x7d3a4cull));
}
B75d912:{NFSU2_TR(0x75d912);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d915:L75d915:{c.instructions+=1;NFSU2_TR(0x75d915);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L75d917;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d915u);}goto L75d915;}
}
B75d917:L75d917:{c.instructions+=9;NFSU2_TR(0x75d917);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75d91a:{NFSU2_TR(0x75d91a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d91d:{NFSU2_TR(0x75d91d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75d920:{NFSU2_TR(0x75d920);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75d923:{NFSU2_TR(0x75d923);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d924:{NFSU2_TR(0x75d924);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d927:{NFSU2_TR(0x75d927);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d92a:{NFSU2_TR(0x75d92a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d92d:{NFSU2_TR(0x75d92d);
u8 U[4];
__builtin_memmove((U+0),gp(0x7832a4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d933ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B75d933:L75d933:{c.instructions+=4;NFSU2_TR(0x75d933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d934:{NFSU2_TR(0x75d934);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d935:{NFSU2_TR(0x75d935);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75d936:{NFSU2_TR(0x75d936);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d939:L75d939:{c.instructions+=5;NFSU2_TR(0x75d939);
__builtin_memmove((R+0),(R+4),4);
}
B75d93b:{NFSU2_TR(0x75d93b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B75d93f:{NFSU2_TR(0x75d93f);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B75d943:{NFSU2_TR(0x75d943);
u8 U[4];
w4(U+0,u32(0x7d3a70ull));
s4(u32(r4(R+0)),r4(U+0));
}
B75d949:{NFSU2_TR(0x75d949);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d94a:L75d94a:{c.instructions+=9;NFSU2_TR(0x75d94a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d94b:{NFSU2_TR(0x75d94b);
__builtin_memmove((R+24),(R+4),4);
}
B75d94d:{NFSU2_TR(0x75d94d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d94e:{NFSU2_TR(0x75d94e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75d952:{NFSU2_TR(0x75d952);
u8 U[4];
w4(U+0,u32(0x7d3a70ull));
s4(u32(r4(R+24)),r4(U+0));
}
B75d958:{NFSU2_TR(0x75d958);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d95b:{NFSU2_TR(0x75d95b);
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
B75d95d:{NFSU2_TR(0x75d95d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75d960:{NFSU2_TR(0x75d960);
if(r1(R+518)){{goto L75d987;}}
}
B75d962:L75d962:{c.instructions+=2;NFSU2_TR(0x75d962);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d965:{NFSU2_TR(0x75d965);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d96aull));
TAIL_STATIC(0x766bc0u,766);
}
B75d96a:L75d96a:{c.instructions+=3;NFSU2_TR(0x75d96a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75d96b:{NFSU2_TR(0x75d96b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d96c:{NFSU2_TR(0x75d96c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d971ull));
TAIL_STATIC(0x75c6c8u,75c);
}
B75d971:L75d971:{c.instructions+=5;NFSU2_TR(0x75d971);
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
B75d973:{NFSU2_TR(0x75d973);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d974:{NFSU2_TR(0x75d974);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d975:{NFSU2_TR(0x75d975);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75d978:{NFSU2_TR(0x75d978);
if(r1(R+518)){{goto L75d98d;}}
}
B75d97a:L75d97a:{c.instructions+=3;NFSU2_TR(0x75d97a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d97d:{NFSU2_TR(0x75d97d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d97e:{NFSU2_TR(0x75d97e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d983ull));
TAIL_STATIC(0x766ac0u,766);
}
B75d983:L75d983:{c.instructions+=3;NFSU2_TR(0x75d983);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d984:{NFSU2_TR(0x75d984);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d985:{NFSU2_TR(0x75d985);
{goto L75d98d;}
}
B75d987:L75d987:{c.instructions+=2;NFSU2_TR(0x75d987);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d98a:{NFSU2_TR(0x75d98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75d98d:L75d98d:{c.instructions+=4;NFSU2_TR(0x75d98d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75d98e:{NFSU2_TR(0x75d98e);
__builtin_memmove((R+0),(R+24),4);
}
B75d990:{NFSU2_TR(0x75d990);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d991:{NFSU2_TR(0x75d991);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d994:L75d994:{c.instructions+=3;NFSU2_TR(0x75d994);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B75d998:{NFSU2_TR(0x75d998);
u8 U[4];
w4(U+0,u32(0x7d3a70ull));
s4(u32(r4(R+4)),r4(U+0));
}
B75d99e:{NFSU2_TR(0x75d99e);
if(r1(R+518)){{goto L75d9a9;}}
}
B75d9a0:L75d9a0:{c.instructions+=2;NFSU2_TR(0x75d9a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75d9a3:{NFSU2_TR(0x75d9a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d9a8ull));
TAIL_STATIC(0x75c6dau,75c);
}
B75d9a8:L75d9a8:{c.instructions+=1;NFSU2_TR(0x75d9a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d9a9:L75d9a9:{c.instructions+=1;NFSU2_TR(0x75d9a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d9aa:L75d9aa:{c.instructions+=3;NFSU2_TR(0x75d9aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75d9ad:{NFSU2_TR(0x75d9ad);
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
B75d9af:{NFSU2_TR(0x75d9af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75d9b6;}}
}
B75d9b1:L75d9b1:{c.instructions+=1;NFSU2_TR(0x75d9b1);
w4(R+0,u32(0x7d3a78ull));
}
B75d9b6:L75d9b6:{c.instructions+=1;NFSU2_TR(0x75d9b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d9b7:L75d9b7:{c.instructions+=3;NFSU2_TR(0x75d9b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d9b8:{NFSU2_TR(0x75d9b8);
__builtin_memmove((R+24),(R+4),4);
}
B75d9ba:{NFSU2_TR(0x75d9ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d9bfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d994u);}goto L75d994;}
}
B75d9bf:L75d9bf:{c.instructions+=2;NFSU2_TR(0x75d9bf);
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
B75d9c4:{NFSU2_TR(0x75d9c4);
if(r1(R+518)){{goto L75d9cd;}}
}
B75d9c6:L75d9c6:{c.instructions+=2;NFSU2_TR(0x75d9c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d9c7:{NFSU2_TR(0x75d9c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d9ccull));
TAIL_STATIC(0x575630u,575);
}
B75d9cc:L75d9cc:{c.instructions+=1;NFSU2_TR(0x75d9cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d9cd:L75d9cd:{c.instructions+=3;NFSU2_TR(0x75d9cd);
__builtin_memmove((R+0),(R+24),4);
}
B75d9cf:{NFSU2_TR(0x75d9cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d9d0:{NFSU2_TR(0x75d9d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d9d3:L75d9d3:{c.instructions+=5;NFSU2_TR(0x75d9d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d9d4:{NFSU2_TR(0x75d9d4);
__builtin_memmove((R+24),(R+4),4);
}
B75d9d6:{NFSU2_TR(0x75d9d6);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d9d8:{NFSU2_TR(0x75d9d8);
u8 U[4];
w4(U+0,u32(0x7d3a90ull));
s4(u32(r4(R+24)),r4(U+0));
}
B75d9de:{NFSU2_TR(0x75d9de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d9e3ull));
TAIL_STATIC(0x7631f1u,763);
}
B75d9e3:L75d9e3:{c.instructions+=4;NFSU2_TR(0x75d9e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75d9e6:{NFSU2_TR(0x75d9e6);
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
B75d9e8:{NFSU2_TR(0x75d9e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d9e9:{NFSU2_TR(0x75d9e9);
if(r1(R+518)){{goto L75d9f2;}}
}
B75d9eb:L75d9eb:{c.instructions+=2;NFSU2_TR(0x75d9eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d9ec:{NFSU2_TR(0x75d9ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d9f1ull));
TAIL_STATIC(0x75c6dau,75c);
}
B75d9f1:L75d9f1:{c.instructions+=1;NFSU2_TR(0x75d9f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d9f2:L75d9f2:{c.instructions+=2;NFSU2_TR(0x75d9f2);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d9f4:{NFSU2_TR(0x75d9f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75d9f9ull));
TAIL_STATIC(0x76315du,763);
}
B75d9f9:L75d9f9:{c.instructions+=3;NFSU2_TR(0x75d9f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75d9fa:{NFSU2_TR(0x75d9fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75d9fb:{NFSU2_TR(0x75d9fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75d9fc:L75d9fc:{c.instructions+=3;NFSU2_TR(0x75d9fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75d9fd:{NFSU2_TR(0x75d9fd);
__builtin_memmove((R+24),(R+4),4);
}
B75d9ff:{NFSU2_TR(0x75d9ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75da04ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75d9d3u);}goto L75d9d3;}
}
B75da04:L75da04:{c.instructions+=2;NFSU2_TR(0x75da04);
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
B75da09:{NFSU2_TR(0x75da09);
if(r1(R+518)){{goto L75da12;}}
}
B75da0b:L75da0b:{c.instructions+=2;NFSU2_TR(0x75da0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75da0c:{NFSU2_TR(0x75da0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75da11ull));
TAIL_STATIC(0x575630u,575);
}
B75da11:L75da11:{c.instructions+=1;NFSU2_TR(0x75da11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75da12:L75da12:{c.instructions+=3;NFSU2_TR(0x75da12);
__builtin_memmove((R+0),(R+24),4);
}
B75da14:{NFSU2_TR(0x75da14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75da15:{NFSU2_TR(0x75da15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75da18:L75da18:{c.instructions+=3;NFSU2_TR(0x75da18);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75da1a:{NFSU2_TR(0x75da1a);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75da1d:{NFSU2_TR(0x75da1d);
if(r1(R+518)){{goto L75da22;}}
}
B75da1f:L75da1f:{c.instructions+=2;NFSU2_TR(0x75da1f);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75da21:{NFSU2_TR(0x75da21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75da22:L75da22:{c.instructions+=2;NFSU2_TR(0x75da22);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75da25:{NFSU2_TR(0x75da25);
if(r1(R+518)){{goto L75da2a;}}
}
B75da27:L75da27:{c.instructions+=1;NFSU2_TR(0x75da27);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8ull))));
}
B75da2a:L75da2a:{c.instructions+=2;NFSU2_TR(0x75da2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75da2d:{NFSU2_TR(0x75da2d);
if(r1(R+518)){{goto L75da32;}}
}
B75da2f:L75da2f:{c.instructions+=1;NFSU2_TR(0x75da2f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x4ull))));
}
B75da32:L75da32:{c.instructions+=2;NFSU2_TR(0x75da32);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75da35:{NFSU2_TR(0x75da35);
if(r1(R+518)){{goto L75da3a;}}
}
B75da37:L75da37:{c.instructions+=1;NFSU2_TR(0x75da37);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B75da3a:L75da3a:{c.instructions+=2;NFSU2_TR(0x75da3a);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75da3d:{NFSU2_TR(0x75da3d);
if(r1(R+518)){{goto L75da42;}}
}
B75da3f:L75da3f:{c.instructions+=1;NFSU2_TR(0x75da3f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1ull))));
}
B75da42:L75da42:{c.instructions+=2;NFSU2_TR(0x75da42);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75da45:{NFSU2_TR(0x75da45);
if(r1(R+518)){{goto L75da4c;}}
}
B75da47:L75da47:{c.instructions+=1;NFSU2_TR(0x75da47);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x80000ull))));
}
B75da4c:L75da4c:{c.instructions+=10;NFSU2_TR(0x75da4c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75da4d:{NFSU2_TR(0x75da4d);
w4(R+8,u32(r2(R+12)));
}
B75da50:{NFSU2_TR(0x75da50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75da51:{NFSU2_TR(0x75da51);
__builtin_memmove((R+4),(R+8),4);
}
B75da53:{NFSU2_TR(0x75da53);
w4(R+24,u32(0xc00ull));
}
B75da58:{NFSU2_TR(0x75da58);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+24))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B75da5a:{NFSU2_TR(0x75da5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75da5b:{NFSU2_TR(0x75da5b);
w4(R+28,u32(0x300ull));
}
B75da60:{NFSU2_TR(0x75da60);
w4(R+20,u32(0x200ull));
}
B75da65:{NFSU2_TR(0x75da65);
if(r1(R+518)){{goto L75da88;}}
}
B75da67:L75da67:{c.instructions+=2;NFSU2_TR(0x75da67);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x400ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75da6d:{NFSU2_TR(0x75da6d);
if(r1(R+518)){{goto L75da83;}}
}
B75da6f:L75da6f:{c.instructions+=2;NFSU2_TR(0x75da6f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x800ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75da75:{NFSU2_TR(0x75da75);
if(r1(R+518)){{goto L75da7f;}}
}
B75da77:L75da77:{c.instructions+=2;NFSU2_TR(0x75da77);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75da79:{NFSU2_TR(0x75da79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75da88;}}
}
B75da7b:L75da7b:{c.instructions+=2;NFSU2_TR(0x75da7b);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B75da7d:{NFSU2_TR(0x75da7d);
{goto L75da88;}
}
B75da7f:L75da7f:{c.instructions+=2;NFSU2_TR(0x75da7f);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+20))));
}
B75da81:{NFSU2_TR(0x75da81);
{goto L75da88;}
}
B75da83:L75da83:{c.instructions+=1;NFSU2_TR(0x75da83);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x100ull))));
}
B75da88:L75da88:{c.instructions+=2;NFSU2_TR(0x75da88);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+28))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B75da8a:{NFSU2_TR(0x75da8a);
if(r1(R+518)){{goto L75da97;}}
}
B75da8c:L75da8c:{c.instructions+=2;NFSU2_TR(0x75da8c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75da8e:{NFSU2_TR(0x75da8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75da9c;}}
}
B75da90:L75da90:{c.instructions+=2;NFSU2_TR(0x75da90);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10000ull))));
}
B75da95:{NFSU2_TR(0x75da95);
{goto L75da9c;}
}
B75da97:L75da97:{c.instructions+=1;NFSU2_TR(0x75da97);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20000ull))));
}
B75da9c:L75da9c:{c.instructions+=5;NFSU2_TR(0x75da9c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+13))&u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75da9f:{NFSU2_TR(0x75da9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75daa0:{NFSU2_TR(0x75daa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75daa1:{NFSU2_TR(0x75daa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75daa2:{NFSU2_TR(0x75daa2);
if(r1(R+518)){{goto L75daa9;}}
}
B75daa4:L75daa4:{c.instructions+=1;NFSU2_TR(0x75daa4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x40000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75daa9:L75daa9:{c.instructions+=1;NFSU2_TR(0x75daa9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75daaa:L75daaa:{c.instructions+=3;NFSU2_TR(0x75daaa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75daac:{NFSU2_TR(0x75daac);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75daaf:{NFSU2_TR(0x75daaf);
if(r1(R+518)){{goto L75dab2;}}
}
B75dab1:L75dab1:{c.instructions+=1;NFSU2_TR(0x75dab1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B75dab2:L75dab2:{c.instructions+=2;NFSU2_TR(0x75dab2);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75dab5:{NFSU2_TR(0x75dab5);
if(r1(R+518)){{goto L75daba;}}
}
B75dab7:L75dab7:{c.instructions+=1;NFSU2_TR(0x75dab7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x4ull))));
}
B75daba:L75daba:{c.instructions+=2;NFSU2_TR(0x75daba);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75dabd:{NFSU2_TR(0x75dabd);
if(r1(R+518)){{goto L75dac2;}}
}
B75dabf:L75dabf:{c.instructions+=1;NFSU2_TR(0x75dabf);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8ull))));
}
B75dac2:L75dac2:{c.instructions+=2;NFSU2_TR(0x75dac2);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75dac5:{NFSU2_TR(0x75dac5);
if(r1(R+518)){{goto L75daca;}}
}
B75dac7:L75dac7:{c.instructions+=1;NFSU2_TR(0x75dac7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x10ull))));
}
B75daca:L75daca:{c.instructions+=2;NFSU2_TR(0x75daca);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B75dacd:{NFSU2_TR(0x75dacd);
if(r1(R+518)){{goto L75dad2;}}
}
B75dacf:L75dacf:{c.instructions+=1;NFSU2_TR(0x75dacf);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20ull))));
}
B75dad2:L75dad2:{c.instructions+=2;NFSU2_TR(0x75dad2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75dad8:{NFSU2_TR(0x75dad8);
if(r1(R+518)){{goto L75dadd;}}
}
B75dada:L75dada:{c.instructions+=1;NFSU2_TR(0x75dada);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B75dadd:L75dadd:{c.instructions+=6;NFSU2_TR(0x75dadd);
__builtin_memmove((R+4),(R+12),4);
}
B75dadf:{NFSU2_TR(0x75dadf);
w4(R+8,u32(0x300ull));
}
B75dae4:{NFSU2_TR(0x75dae4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B75dae6:{NFSU2_TR(0x75dae6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dae7:{NFSU2_TR(0x75dae7);
w4(R+24,u32(0x200ull));
}
B75daec:{NFSU2_TR(0x75daec);
if(r1(R+518)){{goto L75db11;}}
}
B75daee:L75daee:{c.instructions+=2;NFSU2_TR(0x75daee);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75daf4:{NFSU2_TR(0x75daf4);
if(r1(R+518)){{goto L75db0c;}}
}
B75daf6:L75daf6:{c.instructions+=2;NFSU2_TR(0x75daf6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75daf8:{NFSU2_TR(0x75daf8);
if(r1(R+518)){{goto L75db05;}}
}
B75dafa:L75dafa:{c.instructions+=2;NFSU2_TR(0x75dafa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75dafc:{NFSU2_TR(0x75dafc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75db11;}}
}
B75dafe:L75dafe:{c.instructions+=2;NFSU2_TR(0x75dafe);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xc00ull))));
}
B75db03:{NFSU2_TR(0x75db03);
{goto L75db11;}
}
B75db05:L75db05:{c.instructions+=2;NFSU2_TR(0x75db05);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x800ull))));
}
B75db0a:{NFSU2_TR(0x75db0a);
{goto L75db11;}
}
B75db0c:L75db0c:{c.instructions+=1;NFSU2_TR(0x75db0c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400ull))));
}
B75db11:L75db11:{c.instructions+=3;NFSU2_TR(0x75db11);
__builtin_memmove((R+4),(R+12),4);
}
B75db13:{NFSU2_TR(0x75db13);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x30000ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B75db19:{NFSU2_TR(0x75db19);
if(r1(R+518)){{goto L75db27;}}
}
B75db1b:L75db1b:{c.instructions+=2;NFSU2_TR(0x75db1b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75db21:{NFSU2_TR(0x75db21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75db29;}}
}
B75db23:L75db23:{c.instructions+=2;NFSU2_TR(0x75db23);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+24))));
}
B75db25:{NFSU2_TR(0x75db25);
{goto L75db29;}
}
B75db27:L75db27:{c.instructions+=1;NFSU2_TR(0x75db27);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B75db29:L75db29:{c.instructions+=3;NFSU2_TR(0x75db29);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(u32(0x40000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75db2f:{NFSU2_TR(0x75db2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75db30:{NFSU2_TR(0x75db30);
if(r1(R+518)){{goto L75db37;}}
}
B75db32:L75db32:{c.instructions+=1;NFSU2_TR(0x75db32);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x1000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75db37:L75db37:{c.instructions+=1;NFSU2_TR(0x75db37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75db38:L75db38:{c.instructions+=7;NFSU2_TR(0x75db38);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75db39:{NFSU2_TR(0x75db39);
__builtin_memmove((R+20),(R+16),4);
}
B75db3b:{NFSU2_TR(0x75db3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75db3c:{NFSU2_TR(0x75db3c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75db3d:{NFSU2_TR(0x75db3d);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0x9b,0xd9,0x38"::"a"(ea_):"memory");}
}
B75db41:{NFSU2_TR(0x75db41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75db44:{NFSU2_TR(0x75db44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75db49ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75da18u);}goto L75da18;}
}
B75db49:L75db49:{c.instructions+=8;NFSU2_TR(0x75db49);
__builtin_memmove((R+12),(R+0),4);
}
B75db4b:{NFSU2_TR(0x75db4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75db4e:{NFSU2_TR(0x75db4e);
w4(R+0,u32(~u32(r4(R+0))));
}
B75db50:{NFSU2_TR(0x75db50);
w4(R+12,u32(u32(r4(R+12))&u32(r4(R+0))));
}
B75db52:{NFSU2_TR(0x75db52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75db55:{NFSU2_TR(0x75db55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B75db58:{NFSU2_TR(0x75db58);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B75db5a:{NFSU2_TR(0x75db5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75db5full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75daaau);}goto L75daaa;}
}
B75db5f:L75db5f:{c.instructions+=6;NFSU2_TR(0x75db5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75db62:{NFSU2_TR(0x75db62);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B75db65:{NFSU2_TR(0x75db65);
__builtin_memmove((R+0),(R+12),4);
}
B75db67:{NFSU2_TR(0x75db67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75db68:{NFSU2_TR(0x75db68);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75db69:{NFSU2_TR(0x75db69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75db6a:L75db6a:{c.instructions+=5;NFSU2_TR(0x75db6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75db6e:{NFSU2_TR(0x75db6e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff7ffffull))));
}
B75db73:{NFSU2_TR(0x75db73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75db74:{NFSU2_TR(0x75db74);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75db78:{NFSU2_TR(0x75db78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75db7dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75db38u);}goto L75db38;}
}
B75db7d:L75db7d:{c.instructions+=3;NFSU2_TR(0x75db7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75db7e:{NFSU2_TR(0x75db7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75db7f:{NFSU2_TR(0x75db7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75db80:L75db80:{c.instructions+=3;NFSU2_TR(0x75db80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B75db83:{NFSU2_TR(0x75db83);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B75db86:{NFSU2_TR(0x75db86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75db8bull));
TAIL_STATIC(0x765748u,765);
}
B75db8b:L75db8b:{c.instructions+=1;NFSU2_TR(0x75db8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75db90ull));
{goto L75db9d;}
}
B75db90:L75db90:{c.instructions+=2;NFSU2_TR(0x75db90);
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
B75db93:{NFSU2_TR(0x75db93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75db9d:L75db9d:{c.instructions+=3;NFSU2_TR(0x75db9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75db9e:{NFSU2_TR(0x75db9e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0x9b,0xd9,0x38"::"a"(ea_):"memory");}
}
B75dba2:{NFSU2_TR(0x75dba2);
if(r1(R+518)){{goto L75dc11;}}
}
B75dba4:L75dba4:{c.instructions+=2;NFSU2_TR(0x75dba4);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+16))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x27full))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B75dbaa:{NFSU2_TR(0x75dbaa);
if(r1(R+518)){{goto L75dbb1;}}
}
B75dbac:L75dbac:{c.instructions+=1;NFSU2_TR(0x75dbac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75dbb1ull));
TAIL_STATIC(0x7656d5u,765);
}
B75dbb1:L75dbb1:{c.instructions+=2;NFSU2_TR(0x75dbb1);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x3ff00000ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3ff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75dbb6:{NFSU2_TR(0x75dbb6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75dbe5;}}
}
B75dbb8:L75dbb8:{c.instructions+=8;NFSU2_TR(0x75dbb8);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B75dbba:{NFSU2_TR(0x75dbba);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B75dbbc:{NFSU2_TR(0x75dbbc);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B75dbbe:{NFSU2_TR(0x75dbbe);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B75dbc0:{NFSU2_TR(0x75dbc0);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B75dbc2:{NFSU2_TR(0x75dbc2);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B75dbc4:{NFSU2_TR(0x75dbc4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B75dbc6:{NFSU2_TR(0x75dbc6);
__asm__ volatile(".byte 0xd9,0xf3":::"memory");
}
B75dbc8:L75dbc8:{c.instructions+=2;NFSU2_TR(0x75dbc8);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8424),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75dbcf:{NFSU2_TR(0x75dbcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x76575eu,765);}
}
B75dbd5:L75dbd5:{c.instructions+=3;NFSU2_TR(0x75dbd5);
w4(R+8,u32(0xdull));
}
B75dbda:{NFSU2_TR(0x75dbda);
w4(R+4,u32(0x819cc0ull));
}
B75dbe0:{NFSU2_TR(0x75dbe0);
TAIL_STATIC(0x76576bu,765);
}
B75dbe5:L75dbe5:{c.instructions+=1;NFSU2_TR(0x75dbe5);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L75dc1f;}}
}
B75dbe7:L75dbe7:{c.instructions+=5;NFSU2_TR(0x75dbe7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75dbeb:{NFSU2_TR(0x75dbeb);
__builtin_memmove((R+4),(R+0),4);
}
B75dbed:{NFSU2_TR(0x75dbed);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B75dbf2:{NFSU2_TR(0x75dbf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B75dbf6:{NFSU2_TR(0x75dbf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75dc1f;}}
}
B75dbf8:L75dbf8:{c.instructions+=3;NFSU2_TR(0x75dbf8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000000ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B75dbfe:{NFSU2_TR(0x75dbfe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B75dc00:{NFSU2_TR(0x75dc00);
if(r1(R+518)){{goto L75dc06;}}
}
B75dc02:L75dc02:{c.instructions+=2;NFSU2_TR(0x75dc02);
__asm__ volatile(".byte 0xd9,0xeb":::"memory");
}
B75dc04:{NFSU2_TR(0x75dc04);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75dbc8u);}goto L75dbc8;}
}
B75dc06:L75dc06:{c.instructions+=2;NFSU2_TR(0x75dc06);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B75dc08:{NFSU2_TR(0x75dc08);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75dbc8u);}goto L75dbc8;}
}
B75dc0a:L75dc0a:{c.instructions+=1;NFSU2_TR(0x75dc0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75dc0full));
TAIL_STATIC(0x7656ecu,765);
}
B75dc0f:L75dc0f:{c.instructions+=1;NFSU2_TR(0x75dc0f);
{goto L75dc2c;}
}
B75dc11:L75dc11:{c.instructions+=2;NFSU2_TR(0x75dc11);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75dc16:{NFSU2_TR(0x75dc16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75dc0au);}goto L75dc0a;}}
}
B75dc18:L75dc18:{c.instructions+=2;NFSU2_TR(0x75dc18);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75dc1d:{NFSU2_TR(0x75dc1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75dc0au);}goto L75dc0a;}}
}
B75dc1f:L75dc1f:{c.instructions+=3;NFSU2_TR(0x75dc1f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B75dc21:{NFSU2_TR(0x75dc21);
{u32 ea_=u32(u32(8496336u));__asm__ volatile(".byte 0xdb,0x28"::"a"(ea_):"memory");}
}
B75dc27:{NFSU2_TR(0x75dc27);
w4(R+0,u32(0x1ull));
}
B75dc2c:L75dc2c:{c.instructions+=2;NFSU2_TR(0x75dc2c);
u8 U[8];
__builtin_memmove((U+0),gp(0x8b8424),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75dc33:{NFSU2_TR(0x75dc33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x76575eu,765);}
}
B75dc39:L75dc39:{c.instructions+=3;NFSU2_TR(0x75dc39);
w4(R+8,u32(0xdull));
}
B75dc3e:{NFSU2_TR(0x75dc3e);
w4(R+4,u32(0x819cc0ull));
}
B75dc44:{NFSU2_TR(0x75dc44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75dc49ull));
TAIL_STATIC(0x765677u,765);
}
B75dc49:L75dc49:{c.instructions+=2;NFSU2_TR(0x75dc49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B75dc4a:{NFSU2_TR(0x75dc4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75dc4b:L75dc4b:{c.instructions+=7;NFSU2_TR(0x75dc4b);
u8 U[6];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B75dc50:{NFSU2_TR(0x75dc50);
w2(R+0,u16(u32(r2(R+0))&u32(u16(0x7ff0ull))));
}
B75dc54:{NFSU2_TR(0x75dc54);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B75dc56:{NFSU2_TR(0x75dc56);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0x7ff0ull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0x7ff0ull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0x7ff0ull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B75dc5a:{NFSU2_TR(0x75dc5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B75dc5d:{NFSU2_TR(0x75dc5d);
__builtin_memmove((R+0),(R+4),4);
}
B75dc5f:{NFSU2_TR(0x75dc5f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75dc60:L75dc60:{c.instructions+=5;NFSU2_TR(0x75dc60);
u8 U[8];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75dc64:{NFSU2_TR(0x75dc64);
w4(R+4,u32(0x7ff8ull));
}
B75dc69:{NFSU2_TR(0x75dc69);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B75dc6b:{NFSU2_TR(0x75dc6b);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0x7ff0ull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B75dc6f:{NFSU2_TR(0x75dc6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75dc82;}}
}
B75dc71:L75dc71:{c.instructions+=2;NFSU2_TR(0x75dc71);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x7ffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B75dc79:{NFSU2_TR(0x75dc79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75dc87;}}
}
B75dc7b:L75dc7b:{c.instructions+=2;NFSU2_TR(0x75dc7b);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75dc80:{NFSU2_TR(0x75dc80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75dc87;}}
}
B75dc82:L75dc82:{c.instructions+=2;NFSU2_TR(0x75dc82);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(R+0))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B75dc85:{NFSU2_TR(0x75dc85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75dc8b;}}
}
B75dc87:L75dc87:{c.instructions+=3;NFSU2_TR(0x75dc87);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75dc89:{NFSU2_TR(0x75dc89);
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
B75dc8a:{NFSU2_TR(0x75dc8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75dc8b:L75dc8b:{c.instructions+=2;NFSU2_TR(0x75dc8b);
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
B75dc8d:{NFSU2_TR(0x75dc8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75dc8e:L75dc8e:{c.instructions+=8;NFSU2_TR(0x75dc8e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dc8f:{NFSU2_TR(0x75dc8f);
__builtin_memmove((R+20),(R+16),4);
}
B75dc91:{NFSU2_TR(0x75dc91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75dc94:{NFSU2_TR(0x75dc94);
w4(R+4,u32(0x7ff0ull));
}
B75dc99:{NFSU2_TR(0x75dc99);
__builtin_memmove((R+8),(R+0),4);
}
B75dc9b:{NFSU2_TR(0x75dc9b);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B75dc9d:{NFSU2_TR(0x75dc9d);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(R+8))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B75dca0:{NFSU2_TR(0x75dca0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75dccf;}}
}
B75dca2:L75dca2:{c.instructions+=5;NFSU2_TR(0x75dca2);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B75dca5:{NFSU2_TR(0x75dca5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dca6:{NFSU2_TR(0x75dca6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dca7:{NFSU2_TR(0x75dca7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B75dcaa:{NFSU2_TR(0x75dcaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75dcafull));
TAIL_STATIC(0x766ea9u,766);
}
B75dcaf:L75dcaf:{c.instructions+=4;NFSU2_TR(0x75dcaf);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75dcb0:{NFSU2_TR(0x75dcb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75dcb1:{NFSU2_TR(0x75dcb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75dcb2:{NFSU2_TR(0x75dcb2);
if(r1(R+518)){{goto L75dcc8;}}
}
B75dcb4:L75dcb4:{c.instructions+=2;NFSU2_TR(0x75dcb4);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75dcb5:{NFSU2_TR(0x75dcb5);
if(r1(R+518)){{goto L75dcc4;}}
}
B75dcb7:L75dcb7:{c.instructions+=2;NFSU2_TR(0x75dcb7);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75dcb8:{NFSU2_TR(0x75dcb8);
if(r1(R+518)){{goto L75dcbf;}}
}
B75dcba:L75dcba:{c.instructions+=4;NFSU2_TR(0x75dcba);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75dcbc:{NFSU2_TR(0x75dcbc);
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
B75dcbd:{NFSU2_TR(0x75dcbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75dcbe:{NFSU2_TR(0x75dcbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75dcbf:L75dcbf:{c.instructions+=1;NFSU2_TR(0x75dcbf);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dcc1:L75dcc1:{c.instructions+=3;NFSU2_TR(0x75dcc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75dcc2:{NFSU2_TR(0x75dcc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75dcc3:{NFSU2_TR(0x75dcc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75dcc4:L75dcc4:{c.instructions+=2;NFSU2_TR(0x75dcc4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dcc6:{NFSU2_TR(0x75dcc6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75dcc1u);}goto L75dcc1;}
}
B75dcc8:L75dcc8:{c.instructions+=3;NFSU2_TR(0x75dcc8);
w4(R+0,u32(0x200ull));
}
B75dccd:{NFSU2_TR(0x75dccd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75dcce:{NFSU2_TR(0x75dcce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75dccf:L75dccf:{c.instructions+=4;NFSU2_TR(0x75dccf);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8000ull))));
}
B75dcd4:{NFSU2_TR(0x75dcd4);
u8 U[2];
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B75dcd7:{NFSU2_TR(0x75dcd7);
__builtin_memmove((R+4),(R+0),4);
}
B75dcd9:{NFSU2_TR(0x75dcd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75dcfa;}}
}
B75dcdb:L75dcdb:{c.instructions+=2;NFSU2_TR(0x75dcdb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xfffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B75dce2:{NFSU2_TR(0x75dce2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75dcea;}}
}
B75dce4:L75dce4:{c.instructions+=2;NFSU2_TR(0x75dce4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75dce8:{NFSU2_TR(0x75dce8);
if(r1(R+518)){{goto L75dcfa;}}
}
B75dcea:L75dcea:{c.instructions+=7;NFSU2_TR(0x75dcea);
__builtin_memmove((R+0),(R+4),4);
}
B75dcec:{NFSU2_TR(0x75dcec);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B75dcee:{NFSU2_TR(0x75dcee);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B75dcf0:{NFSU2_TR(0x75dcf0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff90ull))));
}
B75dcf3:{NFSU2_TR(0x75dcf3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x80ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x80ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75dcf8:{NFSU2_TR(0x75dcf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75dcf9:{NFSU2_TR(0x75dcf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75dcfa:L75dcfa:{c.instructions+=6;NFSU2_TR(0x75dcfa);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B75dcfd:{NFSU2_TR(0x75dcfd);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B75dd03:{NFSU2_TR(0x75dd03);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B75dd05:{NFSU2_TR(0x75dd05);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75dd08:{NFSU2_TR(0x75dd08);
__builtin_memmove((R+0),(R+4),4);
}
B75dd0a:{NFSU2_TR(0x75dd0a);
if(r1(R+514)){{goto L75dd18;}}
}
B75dd0c:L75dd0c:{c.instructions+=6;NFSU2_TR(0x75dd0c);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B75dd0e:{NFSU2_TR(0x75dd0e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B75dd10:{NFSU2_TR(0x75dd10);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
}
B75dd13:{NFSU2_TR(0x75dd13);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x40ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75dd16:{NFSU2_TR(0x75dd16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75dd17:{NFSU2_TR(0x75dd17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75dd18:L75dd18:{c.instructions+=6;NFSU2_TR(0x75dd18);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B75dd1a:{NFSU2_TR(0x75dd1a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B75dd1c:{NFSU2_TR(0x75dd1c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffff08ull))));
}
B75dd21:{NFSU2_TR(0x75dd21);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x100ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75dd26:{NFSU2_TR(0x75dd26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B75dd27:{NFSU2_TR(0x75dd27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75dd28:L75dd28:{c.instructions+=15;NFSU2_TR(0x75dd28);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dd29:{NFSU2_TR(0x75dd29);
__builtin_memmove((R+20),(R+16),4);
}
B75dd2b:{NFSU2_TR(0x75dd2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xfffffff4ull))));
}
B75dd2e:{NFSU2_TR(0x75dd2e);
{u32 ea_=u32(r4(R+20)+u32(4294967294u));__asm__ volatile(".byte 0x9b,0xd9,0x38"::"a"(ea_):"memory");}
}
B75dd32:{NFSU2_TR(0x75dd32);
}
B75dd33:{NFSU2_TR(0x75dd33);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B75dd37:{NFSU2_TR(0x75dd37);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+1,u8(u32(r1(R+1))|u32(u8(0xcull))));
w1(R+519,u8(s8(r1(R+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+1))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+1))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B75dd3a:{NFSU2_TR(0x75dd3a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B75dd3e:{NFSU2_TR(0x75dd3e);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B75dd41:{NFSU2_TR(0x75dd41);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xdf,0x38"::"a"(ea_):"memory");}
}
B75dd44:{NFSU2_TR(0x75dd44);
{u32 ea_=u32(r4(R+20)+u32(4294967294u));__asm__ volatile(".byte 0xd9,0x28"::"a"(ea_):"memory");}
}
B75dd47:{NFSU2_TR(0x75dd47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75dd4a:{NFSU2_TR(0x75dd4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75dd4d:{NFSU2_TR(0x75dd4d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75dd4e:{NFSU2_TR(0x75dd4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75dd50:L75dd50:{c.instructions+=10;NFSU2_TR(0x75dd50);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dd52:{NFSU2_TR(0x75dd52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dd53:{NFSU2_TR(0x75dd53);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75dd59:{NFSU2_TR(0x75dd59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dd5a:{NFSU2_TR(0x75dd5a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75dd5e:{NFSU2_TR(0x75dd5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75dd65:{NFSU2_TR(0x75dd65);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75dd69:{NFSU2_TR(0x75dd69);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B75dd6d:{NFSU2_TR(0x75dd6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dd6e:{NFSU2_TR(0x75dd6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75dd6f:L75dd6f:{c.instructions+=5;NFSU2_TR(0x75dd6f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dd70:{NFSU2_TR(0x75dd70);
__builtin_memmove((R+20),(R+16),4);
}
B75dd72:{NFSU2_TR(0x75dd72);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dd73:{NFSU2_TR(0x75dd73);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dd74:{NFSU2_TR(0x75dd74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75dd79ull));
TAIL_STATIC(0x761e3cu,761);
}
B75dd79:L75dd79:{c.instructions+=3;NFSU2_TR(0x75dd79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75dd7c:{NFSU2_TR(0x75dd7c);
u8 U[8];
__builtin_memmove((U+0),gp(0x819d24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75dd82:{NFSU2_TR(0x75dd82);
if(r1(R+518)){{goto L75dd8b;}}
}
B75dd84:L75dd84:{c.instructions+=1;NFSU2_TR(0x75dd84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75dd89ull));
TAIL_STATIC(0x75e3d3u,75e);
}
B75dd89:L75dd89:{c.instructions+=1;NFSU2_TR(0x75dd89);
__builtin_memmove((R+12),(R+0),4);
}
B75dd8b:L75dd8b:{c.instructions+=2;NFSU2_TR(0x75dd8b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75dd8f:{NFSU2_TR(0x75dd8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75dda0;}}
}
B75dd91:L75dd91:{c.instructions+=3;NFSU2_TR(0x75dd91);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75dd94:{NFSU2_TR(0x75dd94);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75dd97:{NFSU2_TR(0x75dd97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75dd9cull));
TAIL_STATIC(0x767730u,767);
}
B75dd9c:L75dd9c:{c.instructions+=3;NFSU2_TR(0x75dd9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75dd9d:{NFSU2_TR(0x75dd9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75dd9e:{NFSU2_TR(0x75dd9e);
{goto L75ddd5;}
}
B75dda0:L75dda0:{c.instructions+=4;NFSU2_TR(0x75dda0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dda1:{NFSU2_TR(0x75dda1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75dda4:{NFSU2_TR(0x75dda4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dda5:{NFSU2_TR(0x75dda5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B75dda8:L75dda8:{c.instructions+=4;NFSU2_TR(0x75dda8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B75ddab:{NFSU2_TR(0x75ddab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ddac:{NFSU2_TR(0x75ddac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ddad:{NFSU2_TR(0x75ddad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ddb2ull));
{goto L75de10;}
}
B75ddb2:L75ddb2:{c.instructions+=6;NFSU2_TR(0x75ddb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B75ddb5:{NFSU2_TR(0x75ddb5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B75ddb8:{NFSU2_TR(0x75ddb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ddb9:{NFSU2_TR(0x75ddb9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ddba:{NFSU2_TR(0x75ddba);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B75ddbb:{NFSU2_TR(0x75ddbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ddc0ull));
{goto L75de10;}
}
B75ddc0:L75ddc0:{c.instructions+=6;NFSU2_TR(0x75ddc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B75ddc3:{NFSU2_TR(0x75ddc3);
__builtin_memmove((R+4),(R+0),4);
}
B75ddc5:{NFSU2_TR(0x75ddc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75ddc8:{NFSU2_TR(0x75ddc8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75ddc9:{NFSU2_TR(0x75ddc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75ddcb:{NFSU2_TR(0x75ddcb);
if(r1(R+518)){{goto L75ddd1;}}
}
B75ddcd:L75ddcd:{c.instructions+=2;NFSU2_TR(0x75ddcd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75ddcf:{NFSU2_TR(0x75ddcf);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75dda8u);}goto L75dda8;}}
}
B75ddd1:L75ddd1:{c.instructions+=3;NFSU2_TR(0x75ddd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75ddd2:{NFSU2_TR(0x75ddd2);
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
B75ddd4:{NFSU2_TR(0x75ddd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75ddd5:L75ddd5:{c.instructions+=3;NFSU2_TR(0x75ddd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75ddd6:{NFSU2_TR(0x75ddd6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75ddd7:{NFSU2_TR(0x75ddd7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75ddd8:L75ddd8:{c.instructions+=6;NFSU2_TR(0x75ddd8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ddd9:{NFSU2_TR(0x75ddd9);
__builtin_memmove((R+20),(R+16),4);
}
B75dddb:{NFSU2_TR(0x75dddb);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75ddde:{NFSU2_TR(0x75ddde);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dddf:{NFSU2_TR(0x75dddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75dde2:{NFSU2_TR(0x75dde2);
{goto L75dde5;}
}
B75dde4:L75dde4:{c.instructions+=1;NFSU2_TR(0x75dde4);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75dde5:L75dde5:{c.instructions+=3;NFSU2_TR(0x75dde5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(r1(U+0)));
}
B75dde8:{NFSU2_TR(0x75dde8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dde9:{NFSU2_TR(0x75dde9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ddeeull));
{goto L75dfb2;}
}
B75ddee:L75ddee:{c.instructions+=3;NFSU2_TR(0x75ddee);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B75ddf0:{NFSU2_TR(0x75ddf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75ddf1:{NFSU2_TR(0x75ddf1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75dde4u);}goto L75dde4;}}
}
B75ddf3:L75ddf3:{c.instructions+=4;NFSU2_TR(0x75ddf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ddf4:{NFSU2_TR(0x75ddf4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ddf5:{NFSU2_TR(0x75ddf5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ddf6:{NFSU2_TR(0x75ddf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75ddfbull));
TAIL_STATIC(0x766bc0u,766);
}
B75ddfb:L75ddfb:{c.instructions+=6;NFSU2_TR(0x75ddfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75ddfc:{NFSU2_TR(0x75ddfc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75ddfd:{NFSU2_TR(0x75ddfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75de00:{NFSU2_TR(0x75de00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75de01:{NFSU2_TR(0x75de01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75de02:{NFSU2_TR(0x75de02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75de07ull));
TAIL_STATIC(0x76777eu,767);
}
B75de07:L75de07:{c.instructions+=5;NFSU2_TR(0x75de07);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B75de0a:{NFSU2_TR(0x75de0a);
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
B75de0d:{NFSU2_TR(0x75de0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75de0e:{NFSU2_TR(0x75de0e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75de0f:{NFSU2_TR(0x75de0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75de10:L75de10:{c.instructions+=10;NFSU2_TR(0x75de10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75de11:{NFSU2_TR(0x75de11);
__builtin_memmove((R+20),(R+16),4);
}
B75de13:{NFSU2_TR(0x75de13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75de14:{NFSU2_TR(0x75de14);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75de15:{NFSU2_TR(0x75de15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B75de18:{NFSU2_TR(0x75de18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75de19:{NFSU2_TR(0x75de19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B75de1c:{NFSU2_TR(0x75de1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75de20:{NFSU2_TR(0x75de20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75de21:{NFSU2_TR(0x75de21);
if(r1(R+518)){{goto L75dec4;}}
}
B75de27:L75de27:{c.instructions+=2;NFSU2_TR(0x75de27);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75de2b:{NFSU2_TR(0x75de2b);
if(r1(R+518)){{goto L75de36;}}
}
B75de2d:L75de2d:{c.instructions+=2;NFSU2_TR(0x75de2d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x7full))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75de30:{NFSU2_TR(0x75de30);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L75dec4;}}
}
B75de36:L75de36:{c.instructions+=4;NFSU2_TR(0x75de36);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B75de38:{NFSU2_TR(0x75de38);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B75de39:{NFSU2_TR(0x75de39);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x100ull))));
}
B75de3f:{NFSU2_TR(0x75de3f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L75de60;}}
}
B75de41:L75de41:{c.instructions+=2;NFSU2_TR(0x75de41);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75de44:{NFSU2_TR(0x75de44);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75de53;}}
}
B75de46:L75de46:{c.instructions+=4;NFSU2_TR(0x75de46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75de47:{NFSU2_TR(0x75de47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75de48:{NFSU2_TR(0x75de48);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75de49:{NFSU2_TR(0x75de49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75de4eull));
TAIL_STATIC(0x766361u,766);
}
B75de4e:L75de4e:{c.instructions+=2;NFSU2_TR(0x75de4e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B75de51:{NFSU2_TR(0x75de51);
{goto L75de5c;}
}
B75de53:L75de53:{c.instructions+=3;NFSU2_TR(0x75de53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75de56:{NFSU2_TR(0x75de56);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B75de5a:{NFSU2_TR(0x75de5a);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B75de5c:L75de5c:{c.instructions+=2;NFSU2_TR(0x75de5c);
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
B75de5e:{NFSU2_TR(0x75de5e);
if(r1(R+518)){{goto L75ded1;}}
}
B75de60:L75de60:{c.instructions+=6;NFSU2_TR(0x75de60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B75de63:{NFSU2_TR(0x75de63);
__builtin_memmove((R+0),(R+12),4);
}
B75de65:{NFSU2_TR(0x75de65);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B75de68:{NFSU2_TR(0x75de68);
w4(R+4,u32(r1(R+0)));
}
B75de6b:{NFSU2_TR(0x75de6b);
u8 U[14];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
}
B75de70:{NFSU2_TR(0x75de70);
if(r1(R+518)){{goto L75de81;}}
}
B75de72:L75de72:{c.instructions+=6;NFSU2_TR(0x75de72);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B75de76:{NFSU2_TR(0x75de76);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75de78:{NFSU2_TR(0x75de78);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75de7b:{NFSU2_TR(0x75de7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75de7e:{NFSU2_TR(0x75de7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75de7f:{NFSU2_TR(0x75de7f);
{goto L75de8a;}
}
B75de81:L75de81:{c.instructions+=3;NFSU2_TR(0x75de81);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x0ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B75de85:{NFSU2_TR(0x75de85);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B75de88:{NFSU2_TR(0x75de88);
__builtin_memmove((R+0),(R+28),4);
}
B75de8a:L75de8a:{c.instructions+=11;NFSU2_TR(0x75de8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75de8b:{NFSU2_TR(0x75de8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75de8e:{NFSU2_TR(0x75de8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B75de91:{NFSU2_TR(0x75de91);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75de93:{NFSU2_TR(0x75de93);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75de94:{NFSU2_TR(0x75de94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75de95:{NFSU2_TR(0x75de95);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75de98:{NFSU2_TR(0x75de98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75de99:{NFSU2_TR(0x75de99);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75de9e:{NFSU2_TR(0x75de9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75dea1:{NFSU2_TR(0x75dea1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75dea6ull));
TAIL_STATIC(0x767819u,767);
}
B75dea6:L75dea6:{c.instructions+=3;NFSU2_TR(0x75dea6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B75dea9:{NFSU2_TR(0x75dea9);
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
B75deab:{NFSU2_TR(0x75deab);
if(r1(R+518)){{goto L75ded1;}}
}
B75dead:L75dead:{c.instructions+=2;NFSU2_TR(0x75dead);
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
B75deaf:{NFSU2_TR(0x75deaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L75deb7;}}
}
B75deb1:L75deb1:{c.instructions+=2;NFSU2_TR(0x75deb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B75deb5:{NFSU2_TR(0x75deb5);
{goto L75ded3;}
}
B75deb7:L75deb7:{c.instructions+=5;NFSU2_TR(0x75deb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B75debb:{NFSU2_TR(0x75debb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B75debd:{NFSU2_TR(0x75debd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+1),(U+4),1);
}
B75dec0:{NFSU2_TR(0x75dec0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75dec2:{NFSU2_TR(0x75dec2);
{goto L75ded3;}
}
B75dec4:L75dec4:{c.instructions+=2;NFSU2_TR(0x75dec4);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x41ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x41ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x41ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75dec7:{NFSU2_TR(0x75dec7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L75ded1;}}
}
B75dec9:L75dec9:{c.instructions+=3;NFSU2_TR(0x75dec9);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x5aull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5aull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5aull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75decc:{NFSU2_TR(0x75decc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B75decf:{NFSU2_TR(0x75decf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75ded3;}}
}
B75ded1:L75ded1:{c.instructions+=1;NFSU2_TR(0x75ded1);
__builtin_memmove((R+0),(R+12),4);
}
B75ded3:L75ded3:{c.instructions+=5;NFSU2_TR(0x75ded3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B75ded4:{NFSU2_TR(0x75ded4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B75ded5:{NFSU2_TR(0x75ded5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B75ded6:{NFSU2_TR(0x75ded6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B75ded7:{NFSU2_TR(0x75ded7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75ded8:L75ded8:{c.instructions+=1;NFSU2_TR(0x75ded8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75deddull));
TAIL_STATIC(0x761e3cu,761);
}
B75dedd:L75dedd:{c.instructions+=3;NFSU2_TR(0x75dedd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75dee0:{NFSU2_TR(0x75dee0);
u8 U[8];
__builtin_memmove((U+0),gp(0x819d24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75dee6:{NFSU2_TR(0x75dee6);
if(r1(R+518)){{goto L75deed;}}
}
B75dee8:L75dee8:{c.instructions+=1;NFSU2_TR(0x75dee8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75deedull));
TAIL_STATIC(0x75e3d3u,75e);
}
B75deed:L75deed:{c.instructions+=3;NFSU2_TR(0x75deed);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75def1:{NFSU2_TR(0x75def1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75def2:{NFSU2_TR(0x75def2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75def7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x75de10u);}goto L75de10;}
}
B75def7:L75def7:{c.instructions+=3;NFSU2_TR(0x75def7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75def8:{NFSU2_TR(0x75def8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B75def9:{NFSU2_TR(0x75def9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75defa:L75defa:{c.instructions+=1;NFSU2_TR(0x75defa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75deffull));
TAIL_STATIC(0x761e3cu,761);
}
B75deff:L75deff:{c.instructions+=3;NFSU2_TR(0x75deff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75df02:{NFSU2_TR(0x75df02);
u8 U[8];
__builtin_memmove((U+0),gp(0x819d24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75df08:{NFSU2_TR(0x75df08);
if(r1(R+518)){{goto L75df0f;}}
}
B75df0a:L75df0a:{c.instructions+=1;NFSU2_TR(0x75df0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75df0full));
TAIL_STATIC(0x75e3d3u,75e);
}
B75df0f:L75df0f:{c.instructions+=2;NFSU2_TR(0x75df0f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75df13:{NFSU2_TR(0x75df13);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75df28;}}
}
B75df15:L75df15:{c.instructions+=4;NFSU2_TR(0x75df15);
u8 U[4];
w4(U+0,u32(0x103ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75df1a:{NFSU2_TR(0x75df1a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75df1e:{NFSU2_TR(0x75df1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75df1f:{NFSU2_TR(0x75df1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75df24ull));
TAIL_STATIC(0x766361u,766);
}
B75df24:L75df24:{c.instructions+=2;NFSU2_TR(0x75df24);
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
B75df27:{NFSU2_TR(0x75df27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75df28:L75df28:{c.instructions+=5;NFSU2_TR(0x75df28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75df2b:{NFSU2_TR(0x75df2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75df2f:{NFSU2_TR(0x75df2f);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B75df33:{NFSU2_TR(0x75df33);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x103ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75df38:{NFSU2_TR(0x75df38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75df39:L75df39:{c.instructions+=1;NFSU2_TR(0x75df39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75df3eull));
TAIL_STATIC(0x761e3cu,761);
}
B75df3e:L75df3e:{c.instructions+=3;NFSU2_TR(0x75df3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75df41:{NFSU2_TR(0x75df41);
u8 U[8];
__builtin_memmove((U+0),gp(0x819d24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75df47:{NFSU2_TR(0x75df47);
if(r1(R+518)){{goto L75df4e;}}
}
B75df49:L75df49:{c.instructions+=1;NFSU2_TR(0x75df49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75df4eull));
TAIL_STATIC(0x75e3d3u,75e);
}
B75df4e:L75df4e:{c.instructions+=2;NFSU2_TR(0x75df4e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75df52:{NFSU2_TR(0x75df52);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75df64;}}
}
B75df54:L75df54:{c.instructions+=4;NFSU2_TR(0x75df54);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75df56:{NFSU2_TR(0x75df56);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75df5a:{NFSU2_TR(0x75df5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75df5b:{NFSU2_TR(0x75df5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75df60ull));
TAIL_STATIC(0x766361u,766);
}
B75df60:L75df60:{c.instructions+=2;NFSU2_TR(0x75df60);
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
B75df63:{NFSU2_TR(0x75df63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75df64:L75df64:{c.instructions+=5;NFSU2_TR(0x75df64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75df67:{NFSU2_TR(0x75df67);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75df6b:{NFSU2_TR(0x75df6b);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B75df6f:{NFSU2_TR(0x75df6f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75df72:{NFSU2_TR(0x75df72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75df73:L75df73:{c.instructions+=1;NFSU2_TR(0x75df73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75df78ull));
TAIL_STATIC(0x761e3cu,761);
}
B75df78:L75df78:{c.instructions+=3;NFSU2_TR(0x75df78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75df7b:{NFSU2_TR(0x75df7b);
u8 U[8];
__builtin_memmove((U+0),gp(0x819d24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75df81:{NFSU2_TR(0x75df81);
if(r1(R+518)){{goto L75df88;}}
}
B75df83:L75df83:{c.instructions+=1;NFSU2_TR(0x75df83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75df88ull));
TAIL_STATIC(0x75e3d3u,75e);
}
B75df88:L75df88:{c.instructions+=2;NFSU2_TR(0x75df88);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75df8c:{NFSU2_TR(0x75df8c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75dfa1;}}
}
B75df8e:L75df8e:{c.instructions+=4;NFSU2_TR(0x75df8e);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75df93:{NFSU2_TR(0x75df93);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75df97:{NFSU2_TR(0x75df97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75df98:{NFSU2_TR(0x75df98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75df9dull));
TAIL_STATIC(0x766361u,766);
}
B75df9d:L75df9d:{c.instructions+=2;NFSU2_TR(0x75df9d);
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
B75dfa0:{NFSU2_TR(0x75dfa0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75dfa1:L75dfa1:{c.instructions+=5;NFSU2_TR(0x75dfa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75dfa4:{NFSU2_TR(0x75dfa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75dfa8:{NFSU2_TR(0x75dfa8);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B75dfac:{NFSU2_TR(0x75dfac);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75dfb1:{NFSU2_TR(0x75dfb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75dfb2:L75dfb2:{c.instructions+=1;NFSU2_TR(0x75dfb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75dfb7ull));
TAIL_STATIC(0x761e3cu,761);
}
B75dfb7:L75dfb7:{c.instructions+=3;NFSU2_TR(0x75dfb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75dfba:{NFSU2_TR(0x75dfba);
u8 U[8];
__builtin_memmove((U+0),gp(0x819d24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75dfc0:{NFSU2_TR(0x75dfc0);
if(r1(R+518)){{goto L75dfc7;}}
}
B75dfc2:L75dfc2:{c.instructions+=1;NFSU2_TR(0x75dfc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75dfc7ull));
TAIL_STATIC(0x75e3d3u,75e);
}
B75dfc7:L75dfc7:{c.instructions+=2;NFSU2_TR(0x75dfc7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B75dfcb:{NFSU2_TR(0x75dfcb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L75dfdd;}}
}
B75dfcd:L75dfcd:{c.instructions+=4;NFSU2_TR(0x75dfcd);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dfcf:{NFSU2_TR(0x75dfcf);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B75dfd3:{NFSU2_TR(0x75dfd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B75dfd4:{NFSU2_TR(0x75dfd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75dfd9ull));
TAIL_STATIC(0x766361u,766);
}
B75dfd9:L75dfd9:{c.instructions+=2;NFSU2_TR(0x75dfd9);
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
B75dfdc:{NFSU2_TR(0x75dfdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75dfdd:L75dfdd:{c.instructions+=5;NFSU2_TR(0x75dfdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75dfe0:{NFSU2_TR(0x75dfe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B75dfe4:{NFSU2_TR(0x75dfe4);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B75dfe8:{NFSU2_TR(0x75dfe8);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B75dfeb:{NFSU2_TR(0x75dfeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B75dfec:L75dfec:{c.instructions+=1;NFSU2_TR(0x75dfec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75dff1ull));
TAIL_STATIC(0x761e3cu,761);
}
B75dff1:L75dff1:{c.instructions+=3;NFSU2_TR(0x75dff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B75dff4:{NFSU2_TR(0x75dff4);
u8 U[8];
__builtin_memmove((U+0),gp(0x819d24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B75dffa:{NFSU2_TR(0x75dffa);
if(r1(R+518)){TAIL_STATIC(0x75e001u,75e);}
}
B75dffc:L75dffc:{c.instructions+=1;NFSU2_TR(0x75dffc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x75e001ull));
TAIL_STATIC(0x75e3d3u,75e);
}
XIT:NFSU2_TR_EXIT(0x75d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
