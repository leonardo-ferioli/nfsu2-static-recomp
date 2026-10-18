#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_40d(u8* __restrict R,Cpu& c);
u32 body_40e(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_414(u8* __restrict R,Cpu& c);
u32 body_419(u8* __restrict R,Cpu& c);
u32 body_41d(u8* __restrict R,Cpu& c);
u32 body_420(u8* __restrict R,Cpu& c);
u32 body_423(u8* __restrict R,Cpu& c);
u32 body_424(u8* __restrict R,Cpu& c);
u32 body_426(u8* __restrict R,Cpu& c);
u32 body_428(u8* __restrict R,Cpu& c);
u32 body_42a(u8* __restrict R,Cpu& c);
u32 body_42b(u8* __restrict R,Cpu& c);
u32 body_42e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x42d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x42d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_42d(u8* __restrict R,Cpu& c);
u32 page_42d(Cpu& c){return body_42d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_42d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x42d001:goto L42d001;
case 0x42d004:c.instructions+=3;goto B42d004;
case 0x42d008:c.instructions+=2;goto B42d008;
case 0x42d009:c.instructions+=1;goto B42d009;
case 0x42d00e:goto L42d00e;
case 0x42d013:goto L42d013;
case 0x42d018:c.instructions+=2;goto B42d018;
case 0x42d01a:c.instructions+=1;goto B42d01a;
case 0x42d01c:goto L42d01c;
case 0x42d01f:c.instructions+=1;goto B42d01f;
case 0x42d025:goto L42d025;
case 0x42d028:c.instructions+=2;goto B42d028;
case 0x42d02a:c.instructions+=1;goto B42d02a;
case 0x42d02c:goto L42d02c;
case 0x42d031:c.instructions+=2;goto B42d031;
case 0x42d033:c.instructions+=1;goto B42d033;
case 0x42d035:goto L42d035;
case 0x42d037:c.instructions+=2;goto B42d037;
case 0x42d039:c.instructions+=1;goto B42d039;
case 0x42d03e:goto L42d03e;
case 0x42d040:goto L42d040;
case 0x42d046:c.instructions+=5;goto B42d046;
case 0x42d04c:c.instructions+=4;goto B42d04c;
case 0x42d052:c.instructions+=3;goto B42d052;
case 0x42d054:c.instructions+=2;goto B42d054;
case 0x42d057:c.instructions+=1;goto B42d057;
case 0x42d059:goto L42d059;
case 0x42d05c:goto L42d05c;
case 0x42d060:c.instructions+=15;goto B42d060;
case 0x42d064:c.instructions+=14;goto B42d064;
case 0x42d068:c.instructions+=13;goto B42d068;
case 0x42d06c:c.instructions+=12;goto B42d06c;
case 0x42d070:c.instructions+=11;goto B42d070;
case 0x42d076:c.instructions+=10;goto B42d076;
case 0x42d07a:c.instructions+=9;goto B42d07a;
case 0x42d080:c.instructions+=8;goto B42d080;
case 0x42d083:c.instructions+=7;goto B42d083;
case 0x42d085:c.instructions+=6;goto B42d085;
case 0x42d087:c.instructions+=5;goto B42d087;
case 0x42d089:c.instructions+=4;goto B42d089;
case 0x42d08f:c.instructions+=3;goto B42d08f;
case 0x42d091:c.instructions+=2;goto B42d091;
case 0x42d094:c.instructions+=1;goto B42d094;
case 0x42d096:goto L42d096;
case 0x42d098:c.instructions+=1;goto B42d098;
case 0x42d09a:goto L42d09a;
case 0x42d09f:goto L42d09f;
case 0x42d0a1:c.instructions+=2;goto B42d0a1;
case 0x42d0a4:c.instructions+=1;goto B42d0a4;
case 0x42d0a7:goto L42d0a7;
case 0x42d0a9:c.instructions+=4;goto B42d0a9;
case 0x42d0ac:c.instructions+=3;goto B42d0ac;
case 0x42d0af:c.instructions+=2;goto B42d0af;
case 0x42d0b6:c.instructions+=1;goto B42d0b6;
case 0x42d0b8:goto L42d0b8;
case 0x42d0bb:c.instructions+=2;goto B42d0bb;
case 0x42d0bd:c.instructions+=1;goto B42d0bd;
case 0x42d0bf:goto L42d0bf;
case 0x42d0c5:c.instructions+=2;goto B42d0c5;
case 0x42d0c7:c.instructions+=1;goto B42d0c7;
case 0x42d0c9:goto L42d0c9;
case 0x42d0cd:c.instructions+=1;goto B42d0cd;
case 0x42d0cf:goto L42d0cf;
case 0x42d0d1:c.instructions+=2;goto B42d0d1;
case 0x42d0d3:c.instructions+=1;goto B42d0d3;
case 0x42d0d8:goto L42d0d8;
case 0x42d0d9:c.instructions+=5;goto B42d0d9;
case 0x42d0da:c.instructions+=4;goto B42d0da;
case 0x42d0db:c.instructions+=3;goto B42d0db;
case 0x42d0dc:c.instructions+=2;goto B42d0dc;
case 0x42d0df:c.instructions+=1;goto B42d0df;
case 0x42d0f0:goto L42d0f0;
case 0x42d0f2:c.instructions+=26;goto B42d0f2;
case 0x42d0f7:c.instructions+=25;goto B42d0f7;
case 0x42d0fd:c.instructions+=24;goto B42d0fd;
case 0x42d0fe:c.instructions+=23;goto B42d0fe;
case 0x42d105:c.instructions+=22;goto B42d105;
case 0x42d108:c.instructions+=21;goto B42d108;
case 0x42d109:c.instructions+=20;goto B42d109;
case 0x42d10a:c.instructions+=19;goto B42d10a;
case 0x42d10e:c.instructions+=18;goto B42d10e;
case 0x42d10f:c.instructions+=17;goto B42d10f;
case 0x42d113:c.instructions+=16;goto B42d113;
case 0x42d115:c.instructions+=15;goto B42d115;
case 0x42d116:c.instructions+=14;goto B42d116;
case 0x42d119:c.instructions+=13;goto B42d119;
case 0x42d11b:c.instructions+=12;goto B42d11b;
case 0x42d11e:c.instructions+=11;goto B42d11e;
case 0x42d122:c.instructions+=10;goto B42d122;
case 0x42d126:c.instructions+=9;goto B42d126;
case 0x42d12a:c.instructions+=8;goto B42d12a;
case 0x42d12e:c.instructions+=7;goto B42d12e;
case 0x42d132:c.instructions+=6;goto B42d132;
case 0x42d136:c.instructions+=5;goto B42d136;
case 0x42d13e:c.instructions+=4;goto B42d13e;
case 0x42d142:c.instructions+=3;goto B42d142;
case 0x42d146:c.instructions+=2;goto B42d146;
case 0x42d14a:c.instructions+=1;goto B42d14a;
case 0x42d14c:goto L42d14c;
case 0x42d154:c.instructions+=1;goto B42d154;
case 0x42d156:goto L42d156;
case 0x42d158:c.instructions+=2;goto B42d158;
case 0x42d15a:c.instructions+=1;goto B42d15a;
case 0x42d160:goto L42d160;
case 0x42d162:c.instructions+=1;goto B42d162;
case 0x42d164:goto L42d164;
case 0x42d165:c.instructions+=1;goto B42d165;
case 0x42d16a:goto L42d16a;
case 0x42d16c:c.instructions+=3;goto B42d16c;
case 0x42d16f:c.instructions+=2;goto B42d16f;
case 0x42d172:c.instructions+=1;goto B42d172;
case 0x42d174:goto L42d174;
case 0x42d176:c.instructions+=2;goto B42d176;
case 0x42d178:c.instructions+=1;goto B42d178;
case 0x42d17e:goto L42d17e;
case 0x42d182:c.instructions+=5;goto B42d182;
case 0x42d187:c.instructions+=4;goto B42d187;
case 0x42d18d:c.instructions+=3;goto B42d18d;
case 0x42d193:c.instructions+=2;goto B42d193;
case 0x42d194:c.instructions+=1;goto B42d194;
case 0x42d199:goto L42d199;
case 0x42d19c:c.instructions+=4;goto B42d19c;
case 0x42d1a0:c.instructions+=3;goto B42d1a0;
case 0x42d1a2:c.instructions+=2;goto B42d1a2;
case 0x42d1aa:c.instructions+=1;goto B42d1aa;
case 0x42d1b0:goto L42d1b0;
case 0x42d1b4:c.instructions+=6;goto B42d1b4;
case 0x42d1ba:c.instructions+=5;goto B42d1ba;
case 0x42d1bb:c.instructions+=4;goto B42d1bb;
case 0x42d1bc:c.instructions+=3;goto B42d1bc;
case 0x42d1bd:c.instructions+=2;goto B42d1bd;
case 0x42d1bf:c.instructions+=1;goto B42d1bf;
case 0x42d1c4:goto L42d1c4;
case 0x42d1c9:goto L42d1c9;
case 0x42d1cc:c.instructions+=1;goto B42d1cc;
case 0x42d1ce:goto L42d1ce;
case 0x42d1d6:c.instructions+=1;goto B42d1d6;
case 0x42d1d8:goto L42d1d8;
case 0x42d1dc:c.instructions+=3;goto B42d1dc;
case 0x42d1dd:c.instructions+=2;goto B42d1dd;
case 0x42d1de:c.instructions+=1;goto B42d1de;
case 0x42d1e3:goto L42d1e3;
case 0x42d1e5:c.instructions+=3;goto B42d1e5;
case 0x42d1e8:c.instructions+=2;goto B42d1e8;
case 0x42d1eb:c.instructions+=1;goto B42d1eb;
case 0x42d1ed:goto L42d1ed;
case 0x42d1ee:c.instructions+=4;goto B42d1ee;
case 0x42d1f2:c.instructions+=3;goto B42d1f2;
case 0x42d1f3:c.instructions+=2;goto B42d1f3;
case 0x42d1f5:c.instructions+=1;goto B42d1f5;
case 0x42d1fa:goto L42d1fa;
case 0x42d1ff:c.instructions+=2;goto B42d1ff;
case 0x42d200:c.instructions+=1;goto B42d200;
case 0x42d205:goto L42d205;
case 0x42d208:c.instructions+=4;goto B42d208;
case 0x42d20c:c.instructions+=3;goto B42d20c;
case 0x42d20e:c.instructions+=2;goto B42d20e;
case 0x42d216:c.instructions+=1;goto B42d216;
case 0x42d21c:goto L42d21c;
case 0x42d21d:c.instructions+=4;goto B42d21d;
case 0x42d222:c.instructions+=3;goto B42d222;
case 0x42d223:c.instructions+=2;goto B42d223;
case 0x42d225:c.instructions+=1;goto B42d225;
case 0x42d22a:goto L42d22a;
case 0x42d22f:goto L42d22f;
case 0x42d232:c.instructions+=1;goto B42d232;
case 0x42d238:goto L42d238;
case 0x42d240:c.instructions+=1;goto B42d240;
case 0x42d246:goto L42d246;
case 0x42d24a:c.instructions+=5;goto B42d24a;
case 0x42d24b:c.instructions+=4;goto B42d24b;
case 0x42d24f:c.instructions+=3;goto B42d24f;
case 0x42d250:c.instructions+=2;goto B42d250;
case 0x42d251:c.instructions+=1;goto B42d251;
case 0x42d256:goto L42d256;
case 0x42d259:c.instructions+=3;goto B42d259;
case 0x42d25c:c.instructions+=2;goto B42d25c;
case 0x42d260:c.instructions+=1;goto B42d260;
case 0x42d262:goto L42d262;
case 0x42d264:c.instructions+=3;goto B42d264;
case 0x42d267:c.instructions+=2;goto B42d267;
case 0x42d269:c.instructions+=1;goto B42d269;
case 0x42d26c:goto L42d26c;
case 0x42d270:c.instructions+=4;goto B42d270;
case 0x42d271:c.instructions+=3;goto B42d271;
case 0x42d272:c.instructions+=2;goto B42d272;
case 0x42d274:c.instructions+=1;goto B42d274;
case 0x42d279:goto L42d279;
case 0x42d27d:c.instructions+=5;goto B42d27d;
case 0x42d27f:c.instructions+=4;goto B42d27f;
case 0x42d280:c.instructions+=3;goto B42d280;
case 0x42d281:c.instructions+=2;goto B42d281;
case 0x42d283:c.instructions+=1;goto B42d283;
case 0x42d289:goto L42d289;
case 0x42d28b:c.instructions+=1;goto B42d28b;
case 0x42d28d:goto L42d28d;
case 0x42d292:c.instructions+=2;goto B42d292;
case 0x42d293:c.instructions+=1;goto B42d293;
case 0x42d298:goto L42d298;
case 0x42d29b:c.instructions+=4;goto B42d29b;
case 0x42d29f:c.instructions+=3;goto B42d29f;
case 0x42d2a1:c.instructions+=2;goto B42d2a1;
case 0x42d2a9:c.instructions+=1;goto B42d2a9;
case 0x42d2af:goto L42d2af;
case 0x42d2b5:c.instructions+=8;goto B42d2b5;
case 0x42d2b9:c.instructions+=7;goto B42d2b9;
case 0x42d2ba:c.instructions+=6;goto B42d2ba;
case 0x42d2bf:c.instructions+=5;goto B42d2bf;
case 0x42d2c0:c.instructions+=4;goto B42d2c0;
case 0x42d2c1:c.instructions+=3;goto B42d2c1;
case 0x42d2c2:c.instructions+=2;goto B42d2c2;
case 0x42d2c4:c.instructions+=1;goto B42d2c4;
case 0x42d2c9:goto L42d2c9;
case 0x42d2ce:goto L42d2ce;
case 0x42d2d2:goto L42d2d2;
case 0x42d2d5:c.instructions+=1;goto B42d2d5;
case 0x42d2d7:goto L42d2d7;
case 0x42d2df:c.instructions+=1;goto B42d2df;
case 0x42d2e1:goto L42d2e1;
case 0x42d2e3:c.instructions+=2;goto B42d2e3;
case 0x42d2ea:c.instructions+=1;goto B42d2ea;
case 0x42d2ec:goto L42d2ec;
case 0x42d2f2:c.instructions+=3;goto B42d2f2;
case 0x42d2f3:c.instructions+=2;goto B42d2f3;
case 0x42d2f4:c.instructions+=1;goto B42d2f4;
case 0x42d2f9:goto L42d2f9;
case 0x42d2fc:c.instructions+=2;goto B42d2fc;
case 0x42d2fe:c.instructions+=1;goto B42d2fe;
case 0x42d300:goto L42d300;
case 0x42d306:c.instructions+=2;goto B42d306;
case 0x42d307:c.instructions+=1;goto B42d307;
case 0x42d30c:goto L42d30c;
case 0x42d30f:c.instructions+=2;goto B42d30f;
case 0x42d311:c.instructions+=1;goto B42d311;
case 0x42d317:goto L42d317;
case 0x42d31c:c.instructions+=3;goto B42d31c;
case 0x42d321:c.instructions+=2;goto B42d321;
case 0x42d323:c.instructions+=1;goto B42d323;
case 0x42d328:goto L42d328;
case 0x42d32d:goto L42d32d;
case 0x42d332:c.instructions+=2;goto B42d332;
case 0x42d334:c.instructions+=1;goto B42d334;
case 0x42d336:goto L42d336;
case 0x42d33b:c.instructions+=2;goto B42d33b;
case 0x42d33d:c.instructions+=1;goto B42d33d;
case 0x42d33f:goto L42d33f;
case 0x42d342:c.instructions+=6;goto B42d342;
case 0x42d345:c.instructions+=5;goto B42d345;
case 0x42d348:c.instructions+=4;goto B42d348;
case 0x42d34f:c.instructions+=3;goto B42d34f;
case 0x42d355:c.instructions+=2;goto B42d355;
case 0x42d35c:c.instructions+=1;goto B42d35c;
case 0x42d35e:goto L42d35e;
case 0x42d362:c.instructions+=1;goto B42d362;
case 0x42d364:goto L42d364;
case 0x42d368:c.instructions+=3;goto B42d368;
case 0x42d369:c.instructions+=2;goto B42d369;
case 0x42d36a:c.instructions+=1;goto B42d36a;
case 0x42d36f:goto L42d36f;
case 0x42d371:c.instructions+=3;goto B42d371;
case 0x42d374:c.instructions+=2;goto B42d374;
case 0x42d377:c.instructions+=1;goto B42d377;
case 0x42d379:goto L42d379;
case 0x42d37f:c.instructions+=2;goto B42d37f;
case 0x42d380:c.instructions+=1;goto B42d380;
case 0x42d385:goto L42d385;
case 0x42d388:c.instructions+=2;goto B42d388;
case 0x42d38a:c.instructions+=1;goto B42d38a;
case 0x42d390:goto L42d390;
case 0x42d394:c.instructions+=5;goto B42d394;
case 0x42d395:c.instructions+=4;goto B42d395;
case 0x42d39a:c.instructions+=3;goto B42d39a;
case 0x42d39b:c.instructions+=2;goto B42d39b;
case 0x42d39d:c.instructions+=1;goto B42d39d;
case 0x42d3a2:goto L42d3a2;
case 0x42d3a7:goto L42d3a7;
case 0x42d3a9:c.instructions+=1;goto B42d3a9;
case 0x42d3af:goto L42d3af;
case 0x42d3b4:c.instructions+=1;goto B42d3b4;
case 0x42d3ba:goto L42d3ba;
case 0x42d3be:c.instructions+=5;goto B42d3be;
case 0x42d3bf:c.instructions+=4;goto B42d3bf;
case 0x42d3c3:c.instructions+=3;goto B42d3c3;
case 0x42d3c4:c.instructions+=2;goto B42d3c4;
case 0x42d3c5:c.instructions+=1;goto B42d3c5;
case 0x42d3ca:goto L42d3ca;
case 0x42d3cc:c.instructions+=3;goto B42d3cc;
case 0x42d3cf:c.instructions+=2;goto B42d3cf;
case 0x42d3d2:c.instructions+=1;goto B42d3d2;
case 0x42d3d4:goto L42d3d4;
case 0x42d3d8:c.instructions+=5;goto B42d3d8;
case 0x42d3da:c.instructions+=4;goto B42d3da;
case 0x42d3df:c.instructions+=3;goto B42d3df;
case 0x42d3e0:c.instructions+=2;goto B42d3e0;
case 0x42d3e2:c.instructions+=1;goto B42d3e2;
case 0x42d3e8:goto L42d3e8;
case 0x42d3ea:c.instructions+=1;goto B42d3ea;
case 0x42d3ec:goto L42d3ec;
case 0x42d3f0:c.instructions+=10;goto B42d3f0;
case 0x42d3f4:c.instructions+=9;goto B42d3f4;
case 0x42d3f8:c.instructions+=8;goto B42d3f8;
case 0x42d3fe:c.instructions+=7;goto B42d3fe;
case 0x42d402:c.instructions+=6;goto B42d402;
case 0x42d408:c.instructions+=5;goto B42d408;
case 0x42d40e:c.instructions+=4;goto B42d40e;
case 0x42d414:c.instructions+=3;goto B42d414;
case 0x42d41a:c.instructions+=2;goto B42d41a;
case 0x42d41b:c.instructions+=1;goto B42d41b;
case 0x42d420:goto L42d420;
case 0x42d423:c.instructions+=4;goto B42d423;
case 0x42d427:c.instructions+=3;goto B42d427;
case 0x42d429:c.instructions+=2;goto B42d429;
case 0x42d431:c.instructions+=1;goto B42d431;
case 0x42d433:goto L42d433;
case 0x42d439:c.instructions+=5;goto B42d439;
case 0x42d43a:c.instructions+=4;goto B42d43a;
case 0x42d43b:c.instructions+=3;goto B42d43b;
case 0x42d43c:c.instructions+=2;goto B42d43c;
case 0x42d43e:c.instructions+=1;goto B42d43e;
case 0x42d443:goto L42d443;
case 0x42d445:goto L42d445;
case 0x42d447:c.instructions+=1;goto B42d447;
case 0x42d449:goto L42d449;
case 0x42d44d:c.instructions+=1;goto B42d44d;
case 0x42d452:goto L42d452;
case 0x42d456:c.instructions+=7;goto B42d456;
case 0x42d457:c.instructions+=6;goto B42d457;
case 0x42d458:c.instructions+=5;goto B42d458;
case 0x42d459:c.instructions+=4;goto B42d459;
case 0x42d45a:c.instructions+=3;goto B42d45a;
case 0x42d461:c.instructions+=2;goto B42d461;
case 0x42d464:c.instructions+=1;goto B42d464;
case 0x42d470:goto L42d470;
case 0x42d472:c.instructions+=20;goto B42d472;
case 0x42d477:c.instructions+=19;goto B42d477;
case 0x42d47d:c.instructions+=18;goto B42d47d;
case 0x42d47e:c.instructions+=17;goto B42d47e;
case 0x42d485:c.instructions+=16;goto B42d485;
case 0x42d488:c.instructions+=15;goto B42d488;
case 0x42d489:c.instructions+=14;goto B42d489;
case 0x42d48a:c.instructions+=13;goto B42d48a;
case 0x42d48b:c.instructions+=12;goto B42d48b;
case 0x42d48f:c.instructions+=11;goto B42d48f;
case 0x42d491:c.instructions+=10;goto B42d491;
case 0x42d492:c.instructions+=9;goto B42d492;
case 0x42d495:c.instructions+=8;goto B42d495;
case 0x42d499:c.instructions+=7;goto B42d499;
case 0x42d49b:c.instructions+=6;goto B42d49b;
case 0x42d49e:c.instructions+=5;goto B42d49e;
case 0x42d4a2:c.instructions+=4;goto B42d4a2;
case 0x42d4a6:c.instructions+=3;goto B42d4a6;
case 0x42d4aa:c.instructions+=2;goto B42d4aa;
case 0x42d4ae:c.instructions+=1;goto B42d4ae;
case 0x42d4b0:goto L42d4b0;
case 0x42d4b8:c.instructions+=1;goto B42d4b8;
case 0x42d4ba:goto L42d4ba;
case 0x42d4bc:c.instructions+=2;goto B42d4bc;
case 0x42d4be:c.instructions+=1;goto B42d4be;
case 0x42d4c4:goto L42d4c4;
case 0x42d4c6:c.instructions+=1;goto B42d4c6;
case 0x42d4c8:goto L42d4c8;
case 0x42d4c9:c.instructions+=1;goto B42d4c9;
case 0x42d4ce:goto L42d4ce;
case 0x42d4d0:c.instructions+=3;goto B42d4d0;
case 0x42d4d3:c.instructions+=2;goto B42d4d3;
case 0x42d4d6:c.instructions+=1;goto B42d4d6;
case 0x42d4d8:goto L42d4d8;
case 0x42d4da:c.instructions+=2;goto B42d4da;
case 0x42d4dc:c.instructions+=1;goto B42d4dc;
case 0x42d4e2:goto L42d4e2;
case 0x42d4e6:c.instructions+=5;goto B42d4e6;
case 0x42d4eb:c.instructions+=4;goto B42d4eb;
case 0x42d4f1:c.instructions+=3;goto B42d4f1;
case 0x42d4f7:c.instructions+=2;goto B42d4f7;
case 0x42d4f8:c.instructions+=1;goto B42d4f8;
case 0x42d4fd:goto L42d4fd;
case 0x42d500:c.instructions+=4;goto B42d500;
case 0x42d504:c.instructions+=3;goto B42d504;
case 0x42d506:c.instructions+=2;goto B42d506;
case 0x42d50a:c.instructions+=1;goto B42d50a;
case 0x42d510:goto L42d510;
case 0x42d514:c.instructions+=6;goto B42d514;
case 0x42d51a:c.instructions+=5;goto B42d51a;
case 0x42d51b:c.instructions+=4;goto B42d51b;
case 0x42d51c:c.instructions+=3;goto B42d51c;
case 0x42d51d:c.instructions+=2;goto B42d51d;
case 0x42d51f:c.instructions+=1;goto B42d51f;
case 0x42d524:goto L42d524;
case 0x42d529:goto L42d529;
case 0x42d530:c.instructions+=2;goto B42d530;
case 0x42d532:c.instructions+=1;goto B42d532;
case 0x42d534:goto L42d534;
case 0x42d537:c.instructions+=2;goto B42d537;
case 0x42d53d:c.instructions+=1;goto B42d53d;
case 0x42d53f:goto L42d53f;
case 0x42d545:c.instructions+=2;goto B42d545;
case 0x42d546:c.instructions+=1;goto B42d546;
case 0x42d54b:goto L42d54b;
case 0x42d54d:c.instructions+=5;goto B42d54d;
case 0x42d550:c.instructions+=4;goto B42d550;
case 0x42d554:c.instructions+=3;goto B42d554;
case 0x42d556:c.instructions+=2;goto B42d556;
case 0x42d55e:c.instructions+=1;goto B42d55e;
case 0x42d564:goto L42d564;
case 0x42d569:c.instructions+=4;goto B42d569;
case 0x42d56e:c.instructions+=3;goto B42d56e;
case 0x42d570:c.instructions+=2;goto B42d570;
case 0x42d572:c.instructions+=1;goto B42d572;
case 0x42d577:goto L42d577;
case 0x42d57d:c.instructions+=3;goto B42d57d;
case 0x42d583:c.instructions+=2;goto B42d583;
case 0x42d585:c.instructions+=1;goto B42d585;
case 0x42d58a:goto L42d58a;
case 0x42d58b:c.instructions+=1;goto B42d58b;
case 0x42d590:goto L42d590;
case 0x42d592:c.instructions+=3;goto B42d592;
case 0x42d595:c.instructions+=2;goto B42d595;
case 0x42d598:c.instructions+=1;goto B42d598;
case 0x42d59a:goto L42d59a;
case 0x42d59f:c.instructions+=2;goto B42d59f;
case 0x42d5a0:c.instructions+=1;goto B42d5a0;
case 0x42d5a5:goto L42d5a5;
case 0x42d5a7:c.instructions+=5;goto B42d5a7;
case 0x42d5aa:c.instructions+=4;goto B42d5aa;
case 0x42d5ae:c.instructions+=3;goto B42d5ae;
case 0x42d5b0:c.instructions+=2;goto B42d5b0;
case 0x42d5b8:c.instructions+=1;goto B42d5b8;
case 0x42d5be:goto L42d5be;
case 0x42d5c3:c.instructions+=4;goto B42d5c3;
case 0x42d5c4:c.instructions+=3;goto B42d5c4;
case 0x42d5c6:c.instructions+=2;goto B42d5c6;
case 0x42d5c8:c.instructions+=1;goto B42d5c8;
case 0x42d5cd:goto L42d5cd;
case 0x42d5d3:c.instructions+=2;goto B42d5d3;
case 0x42d5d5:c.instructions+=1;goto B42d5d5;
case 0x42d5da:goto L42d5da;
case 0x42d5de:c.instructions+=3;goto B42d5de;
case 0x42d5df:c.instructions+=2;goto B42d5df;
case 0x42d5e0:c.instructions+=1;goto B42d5e0;
case 0x42d5e5:goto L42d5e5;
case 0x42d5e7:c.instructions+=3;goto B42d5e7;
case 0x42d5ea:c.instructions+=2;goto B42d5ea;
case 0x42d5ed:c.instructions+=1;goto B42d5ed;
case 0x42d5ef:goto L42d5ef;
case 0x42d5f5:c.instructions+=2;goto B42d5f5;
case 0x42d5f6:c.instructions+=1;goto B42d5f6;
case 0x42d5fb:goto L42d5fb;
case 0x42d5fe:c.instructions+=4;goto B42d5fe;
case 0x42d602:c.instructions+=3;goto B42d602;
case 0x42d604:c.instructions+=2;goto B42d604;
case 0x42d60c:c.instructions+=1;goto B42d60c;
case 0x42d612:goto L42d612;
case 0x42d616:c.instructions+=5;goto B42d616;
case 0x42d617:c.instructions+=4;goto B42d617;
case 0x42d61c:c.instructions+=3;goto B42d61c;
case 0x42d61d:c.instructions+=2;goto B42d61d;
case 0x42d61f:c.instructions+=1;goto B42d61f;
case 0x42d624:goto L42d624;
case 0x42d629:goto L42d629;
case 0x42d62e:c.instructions+=1;goto B42d62e;
case 0x42d634:goto L42d634;
case 0x42d63c:c.instructions+=1;goto B42d63c;
case 0x42d642:goto L42d642;
case 0x42d646:c.instructions+=5;goto B42d646;
case 0x42d647:c.instructions+=4;goto B42d647;
case 0x42d64b:c.instructions+=3;goto B42d64b;
case 0x42d64c:c.instructions+=2;goto B42d64c;
case 0x42d64d:c.instructions+=1;goto B42d64d;
case 0x42d652:goto L42d652;
case 0x42d654:c.instructions+=3;goto B42d654;
case 0x42d657:c.instructions+=2;goto B42d657;
case 0x42d65a:c.instructions+=1;goto B42d65a;
case 0x42d65c:goto L42d65c;
case 0x42d65e:c.instructions+=3;goto B42d65e;
case 0x42d661:c.instructions+=2;goto B42d661;
case 0x42d663:c.instructions+=1;goto B42d663;
case 0x42d666:goto L42d666;
case 0x42d66c:c.instructions+=13;goto B42d66c;
case 0x42d66e:c.instructions+=12;goto B42d66e;
case 0x42d670:c.instructions+=11;goto B42d670;
case 0x42d673:c.instructions+=10;goto B42d673;
case 0x42d674:c.instructions+=9;goto B42d674;
case 0x42d678:c.instructions+=8;goto B42d678;
case 0x42d679:c.instructions+=7;goto B42d679;
case 0x42d67a:c.instructions+=6;goto B42d67a;
case 0x42d67c:c.instructions+=5;goto B42d67c;
case 0x42d67f:c.instructions+=4;goto B42d67f;
case 0x42d681:c.instructions+=3;goto B42d681;
case 0x42d688:c.instructions+=2;goto B42d688;
case 0x42d68c:c.instructions+=1;goto B42d68c;
case 0x42d691:goto L42d691;
case 0x42d696:c.instructions+=2;goto B42d696;
case 0x42d697:c.instructions+=1;goto B42d697;
case 0x42d69c:goto L42d69c;
case 0x42d69f:c.instructions+=4;goto B42d69f;
case 0x42d6a3:c.instructions+=3;goto B42d6a3;
case 0x42d6a5:c.instructions+=2;goto B42d6a5;
case 0x42d6ad:c.instructions+=1;goto B42d6ad;
case 0x42d6af:goto L42d6af;
case 0x42d6b3:c.instructions+=9;goto B42d6b3;
case 0x42d6b7:c.instructions+=8;goto B42d6b7;
case 0x42d6b8:c.instructions+=7;goto B42d6b8;
case 0x42d6be:c.instructions+=6;goto B42d6be;
case 0x42d6bf:c.instructions+=5;goto B42d6bf;
case 0x42d6c0:c.instructions+=4;goto B42d6c0;
case 0x42d6c1:c.instructions+=3;goto B42d6c1;
case 0x42d6c2:c.instructions+=2;goto B42d6c2;
case 0x42d6c4:c.instructions+=1;goto B42d6c4;
case 0x42d6c9:goto L42d6c9;
case 0x42d6cb:goto L42d6cb;
case 0x42d6cd:c.instructions+=1;goto B42d6cd;
case 0x42d6cf:goto L42d6cf;
case 0x42d6d3:c.instructions+=2;goto B42d6d3;
case 0x42d6d5:c.instructions+=1;goto B42d6d5;
case 0x42d6d8:goto L42d6d8;
case 0x42d6dc:c.instructions+=7;goto B42d6dc;
case 0x42d6dd:c.instructions+=6;goto B42d6dd;
case 0x42d6de:c.instructions+=5;goto B42d6de;
case 0x42d6df:c.instructions+=4;goto B42d6df;
case 0x42d6e0:c.instructions+=3;goto B42d6e0;
case 0x42d6e7:c.instructions+=2;goto B42d6e7;
case 0x42d6ea:c.instructions+=1;goto B42d6ea;
case 0x42d6f0:goto L42d6f0;
case 0x42d6f2:c.instructions+=26;goto B42d6f2;
case 0x42d6f7:c.instructions+=25;goto B42d6f7;
case 0x42d6fd:c.instructions+=24;goto B42d6fd;
case 0x42d6fe:c.instructions+=23;goto B42d6fe;
case 0x42d705:c.instructions+=22;goto B42d705;
case 0x42d708:c.instructions+=21;goto B42d708;
case 0x42d709:c.instructions+=20;goto B42d709;
case 0x42d70a:c.instructions+=19;goto B42d70a;
case 0x42d70e:c.instructions+=18;goto B42d70e;
case 0x42d70f:c.instructions+=17;goto B42d70f;
case 0x42d713:c.instructions+=16;goto B42d713;
case 0x42d715:c.instructions+=15;goto B42d715;
case 0x42d716:c.instructions+=14;goto B42d716;
case 0x42d719:c.instructions+=13;goto B42d719;
case 0x42d71b:c.instructions+=12;goto B42d71b;
case 0x42d71e:c.instructions+=11;goto B42d71e;
case 0x42d722:c.instructions+=10;goto B42d722;
case 0x42d726:c.instructions+=9;goto B42d726;
case 0x42d72a:c.instructions+=8;goto B42d72a;
case 0x42d72e:c.instructions+=7;goto B42d72e;
case 0x42d732:c.instructions+=6;goto B42d732;
case 0x42d736:c.instructions+=5;goto B42d736;
case 0x42d73e:c.instructions+=4;goto B42d73e;
case 0x42d742:c.instructions+=3;goto B42d742;
case 0x42d746:c.instructions+=2;goto B42d746;
case 0x42d74a:c.instructions+=1;goto B42d74a;
case 0x42d74c:goto L42d74c;
case 0x42d754:c.instructions+=1;goto B42d754;
case 0x42d756:goto L42d756;
case 0x42d758:c.instructions+=2;goto B42d758;
case 0x42d75a:c.instructions+=1;goto B42d75a;
case 0x42d760:goto L42d760;
case 0x42d762:c.instructions+=1;goto B42d762;
case 0x42d764:goto L42d764;
case 0x42d765:c.instructions+=1;goto B42d765;
case 0x42d76a:goto L42d76a;
case 0x42d76c:c.instructions+=3;goto B42d76c;
case 0x42d76f:c.instructions+=2;goto B42d76f;
case 0x42d772:c.instructions+=1;goto B42d772;
case 0x42d774:goto L42d774;
case 0x42d776:c.instructions+=2;goto B42d776;
case 0x42d778:c.instructions+=1;goto B42d778;
case 0x42d77e:goto L42d77e;
case 0x42d782:c.instructions+=5;goto B42d782;
case 0x42d787:c.instructions+=4;goto B42d787;
case 0x42d78d:c.instructions+=3;goto B42d78d;
case 0x42d793:c.instructions+=2;goto B42d793;
case 0x42d794:c.instructions+=1;goto B42d794;
case 0x42d799:goto L42d799;
case 0x42d79c:c.instructions+=4;goto B42d79c;
case 0x42d7a0:c.instructions+=3;goto B42d7a0;
case 0x42d7a2:c.instructions+=2;goto B42d7a2;
case 0x42d7aa:c.instructions+=1;goto B42d7aa;
case 0x42d7b0:goto L42d7b0;
case 0x42d7b4:c.instructions+=6;goto B42d7b4;
case 0x42d7ba:c.instructions+=5;goto B42d7ba;
case 0x42d7bb:c.instructions+=4;goto B42d7bb;
case 0x42d7bc:c.instructions+=3;goto B42d7bc;
case 0x42d7bd:c.instructions+=2;goto B42d7bd;
case 0x42d7bf:c.instructions+=1;goto B42d7bf;
case 0x42d7c4:goto L42d7c4;
case 0x42d7c9:goto L42d7c9;
case 0x42d7cc:c.instructions+=1;goto B42d7cc;
case 0x42d7ce:goto L42d7ce;
case 0x42d7d6:c.instructions+=1;goto B42d7d6;
case 0x42d7d8:goto L42d7d8;
case 0x42d7dc:c.instructions+=3;goto B42d7dc;
case 0x42d7dd:c.instructions+=2;goto B42d7dd;
case 0x42d7de:c.instructions+=1;goto B42d7de;
case 0x42d7e3:goto L42d7e3;
case 0x42d7e5:c.instructions+=3;goto B42d7e5;
case 0x42d7e8:c.instructions+=2;goto B42d7e8;
case 0x42d7eb:c.instructions+=1;goto B42d7eb;
case 0x42d7ed:goto L42d7ed;
case 0x42d7ee:c.instructions+=4;goto B42d7ee;
case 0x42d7f2:c.instructions+=3;goto B42d7f2;
case 0x42d7f3:c.instructions+=2;goto B42d7f3;
case 0x42d7f5:c.instructions+=1;goto B42d7f5;
case 0x42d7fa:goto L42d7fa;
case 0x42d7ff:c.instructions+=2;goto B42d7ff;
case 0x42d800:c.instructions+=1;goto B42d800;
case 0x42d805:goto L42d805;
case 0x42d808:c.instructions+=4;goto B42d808;
case 0x42d80c:c.instructions+=3;goto B42d80c;
case 0x42d80e:c.instructions+=2;goto B42d80e;
case 0x42d816:c.instructions+=1;goto B42d816;
case 0x42d81c:goto L42d81c;
case 0x42d81d:c.instructions+=4;goto B42d81d;
case 0x42d822:c.instructions+=3;goto B42d822;
case 0x42d823:c.instructions+=2;goto B42d823;
case 0x42d825:c.instructions+=1;goto B42d825;
case 0x42d82a:goto L42d82a;
case 0x42d82f:goto L42d82f;
case 0x42d832:c.instructions+=1;goto B42d832;
case 0x42d838:goto L42d838;
case 0x42d840:c.instructions+=1;goto B42d840;
case 0x42d846:goto L42d846;
case 0x42d84a:c.instructions+=5;goto B42d84a;
case 0x42d84b:c.instructions+=4;goto B42d84b;
case 0x42d84f:c.instructions+=3;goto B42d84f;
case 0x42d850:c.instructions+=2;goto B42d850;
case 0x42d851:c.instructions+=1;goto B42d851;
case 0x42d856:goto L42d856;
case 0x42d859:c.instructions+=3;goto B42d859;
case 0x42d85c:c.instructions+=2;goto B42d85c;
case 0x42d860:c.instructions+=1;goto B42d860;
case 0x42d862:goto L42d862;
case 0x42d864:c.instructions+=3;goto B42d864;
case 0x42d867:c.instructions+=2;goto B42d867;
case 0x42d869:c.instructions+=1;goto B42d869;
case 0x42d86c:goto L42d86c;
case 0x42d870:c.instructions+=4;goto B42d870;
case 0x42d871:c.instructions+=3;goto B42d871;
case 0x42d872:c.instructions+=2;goto B42d872;
case 0x42d874:c.instructions+=1;goto B42d874;
case 0x42d879:goto L42d879;
case 0x42d87d:c.instructions+=5;goto B42d87d;
case 0x42d87f:c.instructions+=4;goto B42d87f;
case 0x42d880:c.instructions+=3;goto B42d880;
case 0x42d881:c.instructions+=2;goto B42d881;
case 0x42d883:c.instructions+=1;goto B42d883;
case 0x42d889:goto L42d889;
case 0x42d88b:c.instructions+=1;goto B42d88b;
case 0x42d88d:goto L42d88d;
case 0x42d892:c.instructions+=2;goto B42d892;
case 0x42d893:c.instructions+=1;goto B42d893;
case 0x42d898:goto L42d898;
case 0x42d89b:c.instructions+=4;goto B42d89b;
case 0x42d89f:c.instructions+=3;goto B42d89f;
case 0x42d8a1:c.instructions+=2;goto B42d8a1;
case 0x42d8a9:c.instructions+=1;goto B42d8a9;
case 0x42d8af:goto L42d8af;
case 0x42d8b5:c.instructions+=8;goto B42d8b5;
case 0x42d8b9:c.instructions+=7;goto B42d8b9;
case 0x42d8ba:c.instructions+=6;goto B42d8ba;
case 0x42d8bf:c.instructions+=5;goto B42d8bf;
case 0x42d8c0:c.instructions+=4;goto B42d8c0;
case 0x42d8c1:c.instructions+=3;goto B42d8c1;
case 0x42d8c2:c.instructions+=2;goto B42d8c2;
case 0x42d8c4:c.instructions+=1;goto B42d8c4;
case 0x42d8c9:goto L42d8c9;
case 0x42d8ce:goto L42d8ce;
case 0x42d8d2:goto L42d8d2;
case 0x42d8d5:c.instructions+=1;goto B42d8d5;
case 0x42d8d7:goto L42d8d7;
case 0x42d8df:c.instructions+=1;goto B42d8df;
case 0x42d8e1:goto L42d8e1;
case 0x42d8e3:c.instructions+=2;goto B42d8e3;
case 0x42d8ea:c.instructions+=1;goto B42d8ea;
case 0x42d8ec:goto L42d8ec;
case 0x42d8f2:c.instructions+=3;goto B42d8f2;
case 0x42d8f3:c.instructions+=2;goto B42d8f3;
case 0x42d8f4:c.instructions+=1;goto B42d8f4;
case 0x42d8f9:goto L42d8f9;
case 0x42d8fc:c.instructions+=2;goto B42d8fc;
case 0x42d8fe:c.instructions+=1;goto B42d8fe;
case 0x42d900:goto L42d900;
case 0x42d906:c.instructions+=2;goto B42d906;
case 0x42d907:c.instructions+=1;goto B42d907;
case 0x42d90c:goto L42d90c;
case 0x42d90f:c.instructions+=2;goto B42d90f;
case 0x42d911:c.instructions+=1;goto B42d911;
case 0x42d917:goto L42d917;
case 0x42d91c:c.instructions+=3;goto B42d91c;
case 0x42d921:c.instructions+=2;goto B42d921;
case 0x42d923:c.instructions+=1;goto B42d923;
case 0x42d928:goto L42d928;
case 0x42d92d:goto L42d92d;
case 0x42d932:c.instructions+=2;goto B42d932;
case 0x42d934:c.instructions+=1;goto B42d934;
case 0x42d936:goto L42d936;
case 0x42d93b:c.instructions+=2;goto B42d93b;
case 0x42d93d:c.instructions+=1;goto B42d93d;
case 0x42d93f:goto L42d93f;
case 0x42d942:c.instructions+=6;goto B42d942;
case 0x42d945:c.instructions+=5;goto B42d945;
case 0x42d948:c.instructions+=4;goto B42d948;
case 0x42d94f:c.instructions+=3;goto B42d94f;
case 0x42d955:c.instructions+=2;goto B42d955;
case 0x42d95c:c.instructions+=1;goto B42d95c;
case 0x42d95e:goto L42d95e;
case 0x42d962:c.instructions+=1;goto B42d962;
case 0x42d964:goto L42d964;
case 0x42d968:c.instructions+=3;goto B42d968;
case 0x42d969:c.instructions+=2;goto B42d969;
case 0x42d96a:c.instructions+=1;goto B42d96a;
case 0x42d96f:goto L42d96f;
case 0x42d971:c.instructions+=3;goto B42d971;
case 0x42d974:c.instructions+=2;goto B42d974;
case 0x42d977:c.instructions+=1;goto B42d977;
case 0x42d979:goto L42d979;
case 0x42d97f:c.instructions+=2;goto B42d97f;
case 0x42d980:c.instructions+=1;goto B42d980;
case 0x42d985:goto L42d985;
case 0x42d988:c.instructions+=2;goto B42d988;
case 0x42d98a:c.instructions+=1;goto B42d98a;
case 0x42d990:goto L42d990;
case 0x42d994:c.instructions+=5;goto B42d994;
case 0x42d995:c.instructions+=4;goto B42d995;
case 0x42d99a:c.instructions+=3;goto B42d99a;
case 0x42d99b:c.instructions+=2;goto B42d99b;
case 0x42d99d:c.instructions+=1;goto B42d99d;
case 0x42d9a2:goto L42d9a2;
case 0x42d9a7:goto L42d9a7;
case 0x42d9a9:c.instructions+=1;goto B42d9a9;
case 0x42d9af:goto L42d9af;
case 0x42d9b4:c.instructions+=1;goto B42d9b4;
case 0x42d9ba:goto L42d9ba;
case 0x42d9be:c.instructions+=5;goto B42d9be;
case 0x42d9bf:c.instructions+=4;goto B42d9bf;
case 0x42d9c3:c.instructions+=3;goto B42d9c3;
case 0x42d9c4:c.instructions+=2;goto B42d9c4;
case 0x42d9c5:c.instructions+=1;goto B42d9c5;
case 0x42d9ca:goto L42d9ca;
case 0x42d9cc:c.instructions+=3;goto B42d9cc;
case 0x42d9cf:c.instructions+=2;goto B42d9cf;
case 0x42d9d2:c.instructions+=1;goto B42d9d2;
case 0x42d9d4:goto L42d9d4;
case 0x42d9d8:c.instructions+=5;goto B42d9d8;
case 0x42d9da:c.instructions+=4;goto B42d9da;
case 0x42d9df:c.instructions+=3;goto B42d9df;
case 0x42d9e0:c.instructions+=2;goto B42d9e0;
case 0x42d9e2:c.instructions+=1;goto B42d9e2;
case 0x42d9e8:goto L42d9e8;
case 0x42d9ea:c.instructions+=1;goto B42d9ea;
case 0x42d9ec:goto L42d9ec;
case 0x42d9f0:c.instructions+=10;goto B42d9f0;
case 0x42d9f4:c.instructions+=9;goto B42d9f4;
case 0x42d9f8:c.instructions+=8;goto B42d9f8;
case 0x42d9fe:c.instructions+=7;goto B42d9fe;
case 0x42da02:c.instructions+=6;goto B42da02;
case 0x42da08:c.instructions+=5;goto B42da08;
case 0x42da0e:c.instructions+=4;goto B42da0e;
case 0x42da14:c.instructions+=3;goto B42da14;
case 0x42da1a:c.instructions+=2;goto B42da1a;
case 0x42da1b:c.instructions+=1;goto B42da1b;
case 0x42da20:goto L42da20;
case 0x42da23:c.instructions+=4;goto B42da23;
case 0x42da27:c.instructions+=3;goto B42da27;
case 0x42da29:c.instructions+=2;goto B42da29;
case 0x42da31:c.instructions+=1;goto B42da31;
case 0x42da33:goto L42da33;
case 0x42da39:c.instructions+=5;goto B42da39;
case 0x42da3a:c.instructions+=4;goto B42da3a;
case 0x42da3b:c.instructions+=3;goto B42da3b;
case 0x42da3c:c.instructions+=2;goto B42da3c;
case 0x42da3e:c.instructions+=1;goto B42da3e;
case 0x42da43:goto L42da43;
case 0x42da45:goto L42da45;
case 0x42da47:c.instructions+=1;goto B42da47;
case 0x42da49:goto L42da49;
case 0x42da4d:c.instructions+=2;goto B42da4d;
case 0x42da4f:c.instructions+=1;goto B42da4f;
case 0x42da52:goto L42da52;
case 0x42da56:c.instructions+=7;goto B42da56;
case 0x42da57:c.instructions+=6;goto B42da57;
case 0x42da58:c.instructions+=5;goto B42da58;
case 0x42da59:c.instructions+=4;goto B42da59;
case 0x42da5a:c.instructions+=3;goto B42da5a;
case 0x42da61:c.instructions+=2;goto B42da61;
case 0x42da64:c.instructions+=1;goto B42da64;
case 0x42da70:goto L42da70;
case 0x42da72:c.instructions+=20;goto B42da72;
case 0x42da77:c.instructions+=19;goto B42da77;
case 0x42da7d:c.instructions+=18;goto B42da7d;
case 0x42da7e:c.instructions+=17;goto B42da7e;
case 0x42da85:c.instructions+=16;goto B42da85;
case 0x42da88:c.instructions+=15;goto B42da88;
case 0x42da89:c.instructions+=14;goto B42da89;
case 0x42da8a:c.instructions+=13;goto B42da8a;
case 0x42da8e:c.instructions+=12;goto B42da8e;
case 0x42da8f:c.instructions+=11;goto B42da8f;
case 0x42da90:c.instructions+=10;goto B42da90;
case 0x42da94:c.instructions+=9;goto B42da94;
case 0x42da96:c.instructions+=8;goto B42da96;
case 0x42da99:c.instructions+=7;goto B42da99;
case 0x42da9b:c.instructions+=6;goto B42da9b;
case 0x42da9e:c.instructions+=5;goto B42da9e;
case 0x42daa2:c.instructions+=4;goto B42daa2;
case 0x42daa6:c.instructions+=3;goto B42daa6;
case 0x42daaa:c.instructions+=2;goto B42daaa;
case 0x42daae:c.instructions+=1;goto B42daae;
case 0x42dab0:goto L42dab0;
case 0x42dab8:c.instructions+=1;goto B42dab8;
case 0x42daba:goto L42daba;
case 0x42dabc:c.instructions+=2;goto B42dabc;
case 0x42dabe:c.instructions+=1;goto B42dabe;
case 0x42dac4:goto L42dac4;
case 0x42dac6:c.instructions+=1;goto B42dac6;
case 0x42dac8:goto L42dac8;
case 0x42dac9:c.instructions+=1;goto B42dac9;
case 0x42dace:goto L42dace;
case 0x42dad0:c.instructions+=3;goto B42dad0;
case 0x42dad3:c.instructions+=2;goto B42dad3;
case 0x42dad6:c.instructions+=1;goto B42dad6;
case 0x42dad8:goto L42dad8;
case 0x42dada:c.instructions+=2;goto B42dada;
case 0x42dadc:c.instructions+=1;goto B42dadc;
case 0x42dae2:goto L42dae2;
case 0x42dae6:c.instructions+=5;goto B42dae6;
case 0x42daeb:c.instructions+=4;goto B42daeb;
case 0x42daf1:c.instructions+=3;goto B42daf1;
case 0x42daf7:c.instructions+=2;goto B42daf7;
case 0x42daf8:c.instructions+=1;goto B42daf8;
case 0x42dafd:goto L42dafd;
case 0x42db00:c.instructions+=4;goto B42db00;
case 0x42db04:c.instructions+=3;goto B42db04;
case 0x42db06:c.instructions+=2;goto B42db06;
case 0x42db0e:c.instructions+=1;goto B42db0e;
case 0x42db14:goto L42db14;
case 0x42db18:c.instructions+=6;goto B42db18;
case 0x42db1e:c.instructions+=5;goto B42db1e;
case 0x42db1f:c.instructions+=4;goto B42db1f;
case 0x42db20:c.instructions+=3;goto B42db20;
case 0x42db21:c.instructions+=2;goto B42db21;
case 0x42db23:c.instructions+=1;goto B42db23;
case 0x42db28:goto L42db28;
case 0x42db2d:goto L42db2d;
case 0x42db30:c.instructions+=1;goto B42db30;
case 0x42db32:goto L42db32;
case 0x42db3a:c.instructions+=1;goto B42db3a;
case 0x42db3c:goto L42db3c;
case 0x42db40:c.instructions+=3;goto B42db40;
case 0x42db41:c.instructions+=2;goto B42db41;
case 0x42db42:c.instructions+=1;goto B42db42;
case 0x42db47:goto L42db47;
case 0x42db49:c.instructions+=3;goto B42db49;
case 0x42db4c:c.instructions+=2;goto B42db4c;
case 0x42db4f:c.instructions+=1;goto B42db4f;
case 0x42db51:goto L42db51;
case 0x42db52:c.instructions+=4;goto B42db52;
case 0x42db56:c.instructions+=3;goto B42db56;
case 0x42db57:c.instructions+=2;goto B42db57;
case 0x42db59:c.instructions+=1;goto B42db59;
case 0x42db5e:goto L42db5e;
case 0x42db63:c.instructions+=2;goto B42db63;
case 0x42db64:c.instructions+=1;goto B42db64;
case 0x42db69:goto L42db69;
case 0x42db6c:c.instructions+=4;goto B42db6c;
case 0x42db70:c.instructions+=3;goto B42db70;
case 0x42db72:c.instructions+=2;goto B42db72;
case 0x42db7a:c.instructions+=1;goto B42db7a;
case 0x42db80:goto L42db80;
case 0x42db81:c.instructions+=4;goto B42db81;
case 0x42db86:c.instructions+=3;goto B42db86;
case 0x42db87:c.instructions+=2;goto B42db87;
case 0x42db89:c.instructions+=1;goto B42db89;
case 0x42db8e:goto L42db8e;
case 0x42db93:goto L42db93;
case 0x42db96:c.instructions+=1;goto B42db96;
case 0x42db9c:goto L42db9c;
case 0x42dba4:c.instructions+=1;goto B42dba4;
case 0x42dbaa:goto L42dbaa;
case 0x42dbae:c.instructions+=5;goto B42dbae;
case 0x42dbaf:c.instructions+=4;goto B42dbaf;
case 0x42dbb3:c.instructions+=3;goto B42dbb3;
case 0x42dbb4:c.instructions+=2;goto B42dbb4;
case 0x42dbb5:c.instructions+=1;goto B42dbb5;
case 0x42dbba:goto L42dbba;
case 0x42dbbd:c.instructions+=3;goto B42dbbd;
case 0x42dbc0:c.instructions+=2;goto B42dbc0;
case 0x42dbc4:c.instructions+=1;goto B42dbc4;
case 0x42dbc6:goto L42dbc6;
case 0x42dbc8:c.instructions+=3;goto B42dbc8;
case 0x42dbcb:c.instructions+=2;goto B42dbcb;
case 0x42dbcd:c.instructions+=1;goto B42dbcd;
case 0x42dbd0:goto L42dbd0;
case 0x42dbd4:c.instructions+=4;goto B42dbd4;
case 0x42dbd5:c.instructions+=3;goto B42dbd5;
case 0x42dbd6:c.instructions+=2;goto B42dbd6;
case 0x42dbd8:c.instructions+=1;goto B42dbd8;
case 0x42dbdd:goto L42dbdd;
case 0x42dbe1:c.instructions+=5;goto B42dbe1;
case 0x42dbe3:c.instructions+=4;goto B42dbe3;
case 0x42dbe4:c.instructions+=3;goto B42dbe4;
case 0x42dbe5:c.instructions+=2;goto B42dbe5;
case 0x42dbe7:c.instructions+=1;goto B42dbe7;
case 0x42dbed:goto L42dbed;
case 0x42dbef:c.instructions+=1;goto B42dbef;
case 0x42dbf1:goto L42dbf1;
case 0x42dbf6:c.instructions+=2;goto B42dbf6;
case 0x42dbf7:c.instructions+=1;goto B42dbf7;
case 0x42dbfc:goto L42dbfc;
case 0x42dbff:c.instructions+=4;goto B42dbff;
case 0x42dc03:c.instructions+=3;goto B42dc03;
case 0x42dc05:c.instructions+=2;goto B42dc05;
case 0x42dc0d:c.instructions+=1;goto B42dc0d;
case 0x42dc0f:goto L42dc0f;
case 0x42dc15:c.instructions+=8;goto B42dc15;
case 0x42dc19:c.instructions+=7;goto B42dc19;
case 0x42dc1a:c.instructions+=6;goto B42dc1a;
case 0x42dc1f:c.instructions+=5;goto B42dc1f;
case 0x42dc20:c.instructions+=4;goto B42dc20;
case 0x42dc21:c.instructions+=3;goto B42dc21;
case 0x42dc22:c.instructions+=2;goto B42dc22;
case 0x42dc24:c.instructions+=1;goto B42dc24;
case 0x42dc29:goto L42dc29;
case 0x42dc2b:goto L42dc2b;
case 0x42dc2f:goto L42dc2f;
case 0x42dc32:c.instructions+=1;goto B42dc32;
case 0x42dc34:goto L42dc34;
case 0x42dc3c:c.instructions+=1;goto B42dc3c;
case 0x42dc3e:goto L42dc3e;
case 0x42dc40:c.instructions+=2;goto B42dc40;
case 0x42dc47:c.instructions+=1;goto B42dc47;
case 0x42dc49:goto L42dc49;
case 0x42dc4e:c.instructions+=3;goto B42dc4e;
case 0x42dc4f:c.instructions+=2;goto B42dc4f;
case 0x42dc50:c.instructions+=1;goto B42dc50;
case 0x42dc55:goto L42dc55;
case 0x42dc58:c.instructions+=2;goto B42dc58;
case 0x42dc5a:c.instructions+=1;goto B42dc5a;
case 0x42dc5c:goto L42dc5c;
case 0x42dc62:c.instructions+=2;goto B42dc62;
case 0x42dc63:c.instructions+=1;goto B42dc63;
case 0x42dc68:goto L42dc68;
case 0x42dc6b:c.instructions+=2;goto B42dc6b;
case 0x42dc6d:c.instructions+=1;goto B42dc6d;
case 0x42dc6f:goto L42dc6f;
case 0x42dc74:c.instructions+=3;goto B42dc74;
case 0x42dc79:c.instructions+=2;goto B42dc79;
case 0x42dc7b:c.instructions+=1;goto B42dc7b;
case 0x42dc80:goto L42dc80;
case 0x42dc82:goto L42dc82;
case 0x42dc84:c.instructions+=1;goto B42dc84;
case 0x42dc86:goto L42dc86;
case 0x42dc8a:c.instructions+=2;goto B42dc8a;
case 0x42dc8c:c.instructions+=1;goto B42dc8c;
case 0x42dc8f:goto L42dc8f;
case 0x42dc93:c.instructions+=7;goto B42dc93;
case 0x42dc94:c.instructions+=6;goto B42dc94;
case 0x42dc95:c.instructions+=5;goto B42dc95;
case 0x42dc96:c.instructions+=4;goto B42dc96;
case 0x42dc97:c.instructions+=3;goto B42dc97;
case 0x42dc9e:c.instructions+=2;goto B42dc9e;
case 0x42dca1:c.instructions+=1;goto B42dca1;
case 0x42dcb0:goto L42dcb0;
case 0x42dcb3:c.instructions+=18;goto B42dcb3;
case 0x42dcb4:c.instructions+=17;goto B42dcb4;
case 0x42dcb5:c.instructions+=16;goto B42dcb5;
case 0x42dcb6:c.instructions+=15;goto B42dcb6;
case 0x42dcba:c.instructions+=14;goto B42dcba;
case 0x42dcc0:c.instructions+=13;goto B42dcc0;
case 0x42dcc4:c.instructions+=12;goto B42dcc4;
case 0x42dccb:c.instructions+=11;goto B42dccb;
case 0x42dccc:c.instructions+=10;goto B42dccc;
case 0x42dcce:c.instructions+=9;goto B42dcce;
case 0x42dcd1:c.instructions+=8;goto B42dcd1;
case 0x42dcd3:c.instructions+=7;goto B42dcd3;
case 0x42dcd6:c.instructions+=6;goto B42dcd6;
case 0x42dcd9:c.instructions+=5;goto B42dcd9;
case 0x42dcdd:c.instructions+=4;goto B42dcdd;
case 0x42dce1:c.instructions+=3;goto B42dce1;
case 0x42dce4:c.instructions+=2;goto B42dce4;
case 0x42dce6:c.instructions+=1;goto B42dce6;
case 0x42dce9:goto L42dce9;
case 0x42dceb:c.instructions+=6;goto B42dceb;
case 0x42dcf1:c.instructions+=5;goto B42dcf1;
case 0x42dcfb:c.instructions+=4;goto B42dcfb;
case 0x42dd01:c.instructions+=3;goto B42dd01;
case 0x42dd06:c.instructions+=2;goto B42dd06;
case 0x42dd08:c.instructions+=1;goto B42dd08;
case 0x42dd0a:goto L42dd0a;
case 0x42dd10:c.instructions+=1;goto B42dd10;
case 0x42dd12:goto L42dd12;
case 0x42dd19:c.instructions+=1;goto B42dd19;
case 0x42dd1b:goto L42dd1b;
case 0x42dd22:goto L42dd22;
case 0x42dd29:c.instructions+=4;goto B42dd29;
case 0x42dd30:c.instructions+=3;goto B42dd30;
case 0x42dd36:c.instructions+=2;goto B42dd36;
case 0x42dd39:c.instructions+=1;goto B42dd39;
case 0x42dd3b:goto L42dd3b;
case 0x42dd42:c.instructions+=4;goto B42dd42;
case 0x42dd48:c.instructions+=3;goto B42dd48;
case 0x42dd49:c.instructions+=2;goto B42dd49;
case 0x42dd4b:c.instructions+=1;goto B42dd4b;
case 0x42dd4d:goto L42dd4d;
case 0x42dd54:c.instructions+=3;goto B42dd54;
case 0x42dd57:c.instructions+=2;goto B42dd57;
case 0x42dd59:c.instructions+=1;goto B42dd59;
case 0x42dd5b:goto L42dd5b;
case 0x42dd5e:c.instructions+=3;goto B42dd5e;
case 0x42dd60:c.instructions+=2;goto B42dd60;
case 0x42dd62:c.instructions+=1;goto B42dd62;
case 0x42dd64:goto L42dd64;
case 0x42dd69:c.instructions+=1;goto B42dd69;
case 0x42dd6b:goto L42dd6b;
case 0x42dd6d:goto L42dd6d;
case 0x42dd73:goto L42dd73;
case 0x42dd79:c.instructions+=2;goto B42dd79;
case 0x42dd7b:c.instructions+=1;goto B42dd7b;
case 0x42dd7d:goto L42dd7d;
case 0x42dd80:c.instructions+=3;goto B42dd80;
case 0x42dd82:c.instructions+=2;goto B42dd82;
case 0x42dd83:c.instructions+=1;goto B42dd83;
case 0x42dd86:goto L42dd86;
case 0x42dd89:c.instructions+=1;goto B42dd89;
case 0x42dd8b:goto L42dd8b;
case 0x42dd91:c.instructions+=8;goto B42dd91;
case 0x42dd92:c.instructions+=7;goto B42dd92;
case 0x42dd93:c.instructions+=6;goto B42dd93;
case 0x42dd94:c.instructions+=5;goto B42dd94;
case 0x42dd98:c.instructions+=4;goto B42dd98;
case 0x42dd99:c.instructions+=3;goto B42dd99;
case 0x42dd9c:c.instructions+=2;goto B42dd9c;
case 0x42dd9d:c.instructions+=1;goto B42dd9d;
case 0x42dda2:goto L42dda2;
case 0x42dda4:c.instructions+=1;goto B42dda4;
case 0x42ddaa:goto L42ddaa;
case 0x42ddaf:goto L42ddaf;
case 0x42ddb5:c.instructions+=12;goto B42ddb5;
case 0x42ddb9:c.instructions+=11;goto B42ddb9;
case 0x42ddba:c.instructions+=10;goto B42ddba;
case 0x42ddbe:c.instructions+=9;goto B42ddbe;
case 0x42ddbf:c.instructions+=8;goto B42ddbf;
case 0x42ddc0:c.instructions+=7;goto B42ddc0;
case 0x42ddc4:c.instructions+=6;goto B42ddc4;
case 0x42ddc5:c.instructions+=5;goto B42ddc5;
case 0x42ddc8:c.instructions+=4;goto B42ddc8;
case 0x42ddc9:c.instructions+=3;goto B42ddc9;
case 0x42ddcf:c.instructions+=2;goto B42ddcf;
case 0x42ddd7:c.instructions+=1;goto B42ddd7;
case 0x42dddc:goto L42dddc;
case 0x42ddde:c.instructions+=1;goto B42ddde;
case 0x42dde4:goto L42dde4;
case 0x42dde8:c.instructions+=2;goto B42dde8;
case 0x42ddea:c.instructions+=1;goto B42ddea;
case 0x42ddf0:goto L42ddf0;
case 0x42ddf2:c.instructions+=1;goto B42ddf2;
case 0x42ddf7:goto L42ddf7;
case 0x42ddf9:c.instructions+=1;goto B42ddf9;
case 0x42ddff:goto L42ddff;
case 0x42de00:c.instructions+=2;goto B42de00;
case 0x42de02:c.instructions+=1;goto B42de02;
case 0x42de07:goto L42de07;
case 0x42de09:c.instructions+=2;goto B42de09;
case 0x42de0b:c.instructions+=1;goto B42de0b;
case 0x42de11:goto L42de11;
case 0x42de12:c.instructions+=2;goto B42de12;
case 0x42de14:c.instructions+=1;goto B42de14;
case 0x42de19:goto L42de19;
case 0x42de1f:c.instructions+=3;goto B42de1f;
case 0x42de21:c.instructions+=2;goto B42de21;
case 0x42de24:c.instructions+=1;goto B42de24;
case 0x42de2a:goto L42de2a;
case 0x42de2e:c.instructions+=9;goto B42de2e;
case 0x42de31:c.instructions+=8;goto B42de31;
case 0x42de37:c.instructions+=7;goto B42de37;
case 0x42de3a:c.instructions+=6;goto B42de3a;
case 0x42de3b:c.instructions+=5;goto B42de3b;
case 0x42de3f:c.instructions+=4;goto B42de3f;
case 0x42de40:c.instructions+=3;goto B42de40;
case 0x42de42:c.instructions+=2;goto B42de42;
case 0x42de46:c.instructions+=1;goto B42de46;
case 0x42de4b:goto L42de4b;
case 0x42de4f:c.instructions+=5;goto B42de4f;
case 0x42de53:c.instructions+=4;goto B42de53;
case 0x42de55:c.instructions+=3;goto B42de55;
case 0x42de57:c.instructions+=2;goto B42de57;
case 0x42de5a:c.instructions+=1;goto B42de5a;
case 0x42de5c:goto L42de5c;
case 0x42de5f:c.instructions+=5;goto B42de5f;
case 0x42de64:c.instructions+=4;goto B42de64;
case 0x42de6a:c.instructions+=3;goto B42de6a;
case 0x42de6c:c.instructions+=2;goto B42de6c;
case 0x42de6f:c.instructions+=1;goto B42de6f;
case 0x42de71:goto L42de71;
case 0x42de76:goto L42de76;
case 0x42de7a:c.instructions+=8;goto B42de7a;
case 0x42de7f:c.instructions+=7;goto B42de7f;
case 0x42de80:c.instructions+=6;goto B42de80;
case 0x42de81:c.instructions+=5;goto B42de81;
case 0x42de82:c.instructions+=4;goto B42de82;
case 0x42de88:c.instructions+=3;goto B42de88;
case 0x42de89:c.instructions+=2;goto B42de89;
case 0x42de8b:c.instructions+=1;goto B42de8b;
case 0x42de90:goto L42de90;
case 0x42de92:c.instructions+=1;goto B42de92;
case 0x42de94:goto L42de94;
case 0x42de95:c.instructions+=3;goto B42de95;
case 0x42de96:c.instructions+=2;goto B42de96;
case 0x42de98:c.instructions+=1;goto B42de98;
case 0x42de9d:goto L42de9d;
case 0x42de9f:goto L42de9f;
case 0x42dea6:c.instructions+=2;goto B42dea6;
case 0x42deac:c.instructions+=1;goto B42deac;
case 0x42deb2:goto L42deb2;
case 0x42deb3:c.instructions+=5;goto B42deb3;
case 0x42deb4:c.instructions+=4;goto B42deb4;
case 0x42deb5:c.instructions+=3;goto B42deb5;
case 0x42deb6:c.instructions+=2;goto B42deb6;
case 0x42deb9:c.instructions+=1;goto B42deb9;
case 0x42dec0:goto L42dec0;
case 0x42dec4:c.instructions+=2;goto B42dec4;
case 0x42dec5:c.instructions+=1;goto B42dec5;
case 0x42dec7:goto L42dec7;
case 0x42dec8:c.instructions+=1;goto B42dec8;
case 0x42deca:goto L42deca;
case 0x42decc:c.instructions+=1;goto B42decc;
case 0x42decf:goto L42decf;
case 0x42ded3:c.instructions+=8;goto B42ded3;
case 0x42ded7:c.instructions+=7;goto B42ded7;
case 0x42ded8:c.instructions+=6;goto B42ded8;
case 0x42dedc:c.instructions+=5;goto B42dedc;
case 0x42dedd:c.instructions+=4;goto B42dedd;
case 0x42dee1:c.instructions+=3;goto B42dee1;
case 0x42dee2:c.instructions+=2;goto B42dee2;
case 0x42dee3:c.instructions+=1;goto B42dee3;
case 0x42dee8:goto L42dee8;
case 0x42deeb:goto L42deeb;
case 0x42deef:c.instructions+=10;goto B42deef;
case 0x42def3:c.instructions+=9;goto B42def3;
case 0x42def4:c.instructions+=8;goto B42def4;
case 0x42def8:c.instructions+=7;goto B42def8;
case 0x42def9:c.instructions+=6;goto B42def9;
case 0x42defd:c.instructions+=5;goto B42defd;
case 0x42defe:c.instructions+=4;goto B42defe;
case 0x42df02:c.instructions+=3;goto B42df02;
case 0x42df03:c.instructions+=2;goto B42df03;
case 0x42df04:c.instructions+=1;goto B42df04;
case 0x42df09:goto L42df09;
case 0x42df10:goto L42df10;
case 0x42df13:c.instructions+=8;goto B42df13;
case 0x42df14:c.instructions+=7;goto B42df14;
case 0x42df15:c.instructions+=6;goto B42df15;
case 0x42df17:c.instructions+=5;goto B42df17;
case 0x42df1d:c.instructions+=4;goto B42df1d;
case 0x42df1e:c.instructions+=3;goto B42df1e;
case 0x42df23:c.instructions+=2;goto B42df23;
case 0x42df25:c.instructions+=1;goto B42df25;
case 0x42df27:goto L42df27;
case 0x42df2d:c.instructions+=1;goto B42df2d;
case 0x42df33:goto L42df33;
case 0x42df36:c.instructions+=2;goto B42df36;
case 0x42df38:c.instructions+=1;goto B42df38;
case 0x42df3e:goto L42df3e;
case 0x42df44:c.instructions+=3;goto B42df44;
case 0x42df47:c.instructions+=2;goto B42df47;
case 0x42df49:c.instructions+=1;goto B42df49;
case 0x42df4b:goto L42df4b;
case 0x42df4e:c.instructions+=12;goto B42df4e;
case 0x42df51:c.instructions+=11;goto B42df51;
case 0x42df53:c.instructions+=10;goto B42df53;
case 0x42df55:c.instructions+=9;goto B42df55;
case 0x42df58:c.instructions+=8;goto B42df58;
case 0x42df59:c.instructions+=7;goto B42df59;
case 0x42df5a:c.instructions+=6;goto B42df5a;
case 0x42df5b:c.instructions+=5;goto B42df5b;
case 0x42df5c:c.instructions+=4;goto B42df5c;
case 0x42df5f:c.instructions+=3;goto B42df5f;
case 0x42df60:c.instructions+=2;goto B42df60;
case 0x42df61:c.instructions+=1;goto B42df61;
case 0x42df66:goto L42df66;
case 0x42df6c:c.instructions+=3;goto B42df6c;
case 0x42df6f:c.instructions+=2;goto B42df6f;
case 0x42df71:c.instructions+=1;goto B42df71;
case 0x42df73:goto L42df73;
case 0x42df79:c.instructions+=1;goto B42df79;
case 0x42df7b:goto L42df7b;
case 0x42df7e:c.instructions+=9;goto B42df7e;
case 0x42df7f:c.instructions+=8;goto B42df7f;
case 0x42df83:c.instructions+=7;goto B42df83;
case 0x42df84:c.instructions+=6;goto B42df84;
case 0x42df88:c.instructions+=5;goto B42df88;
case 0x42df89:c.instructions+=4;goto B42df89;
case 0x42df8a:c.instructions+=3;goto B42df8a;
case 0x42df90:c.instructions+=2;goto B42df90;
case 0x42df98:c.instructions+=1;goto B42df98;
case 0x42df9d:goto L42df9d;
case 0x42dfa1:c.instructions+=5;goto B42dfa1;
case 0x42dfa3:c.instructions+=4;goto B42dfa3;
case 0x42dfa9:c.instructions+=3;goto B42dfa9;
case 0x42dfab:c.instructions+=2;goto B42dfab;
case 0x42dfae:c.instructions+=1;goto B42dfae;
case 0x42dfb0:goto L42dfb0;
case 0x42dfb6:c.instructions+=2;goto B42dfb6;
case 0x42dfbc:c.instructions+=1;goto B42dfbc;
case 0x42dfc3:goto L42dfc3;
case 0x42dfc9:c.instructions+=2;goto B42dfc9;
case 0x42dfcc:c.instructions+=1;goto B42dfcc;
case 0x42dfce:goto L42dfce;
case 0x42dfcf:c.instructions+=1;goto B42dfcf;
case 0x42dfd1:goto L42dfd1;
case 0x42dfd2:c.instructions+=1;goto B42dfd2;
case 0x42dfd8:goto L42dfd8;
case 0x42dfda:c.instructions+=1;goto B42dfda;
case 0x42dfdf:goto L42dfdf;
case 0x42dfe4:goto L42dfe4;
case 0x42dfe6:c.instructions+=2;goto B42dfe6;
case 0x42dfe8:c.instructions+=1;goto B42dfe8;
case 0x42dfed:goto L42dfed;
case 0x42dff3:c.instructions+=2;goto B42dff3;
case 0x42dff5:c.instructions+=1;goto B42dff5;
case 0x42dffb:goto L42dffb;
case 0x42dffd:c.instructions+=1;goto B42dffd;
default:missing_instruction(c.pc);}
B42d001:L42d001:{c.instructions+=4;NFSU2_TR(0x42d001);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42d004:{NFSU2_TR(0x42d004);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42d008:{NFSU2_TR(0x42d008);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d009:{NFSU2_TR(0x42d009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d00eull));
TAIL_STATIC(0x401aa0u,401);
}
B42d00e:L42d00e:{c.instructions+=1;NFSU2_TR(0x42d00e);
{goto L42d0a7;}
}
B42d013:L42d013:{c.instructions+=3;NFSU2_TR(0x42d013);
__builtin_memmove((R+0),gp(0x890118),4);
}
B42d018:{NFSU2_TR(0x42d018);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d01a:{NFSU2_TR(0x42d01a);
if(r1(R+518)){{goto L42d025;}}
}
B42d01c:L42d01c:{c.instructions+=2;NFSU2_TR(0x42d01c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B42d01f:{NFSU2_TR(0x42d01f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42d0a7;}}
}
B42d025:L42d025:{c.instructions+=3;NFSU2_TR(0x42d025);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42d028:{NFSU2_TR(0x42d028);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d02a:{NFSU2_TR(0x42d02a);
if(r1(R+518)){{goto L42d0a7;}}
}
B42d02c:L42d02c:{c.instructions+=3;NFSU2_TR(0x42d02c);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B42d031:{NFSU2_TR(0x42d031);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42d033:{NFSU2_TR(0x42d033);
if(r1(R+518)){{goto L42d040;}}
}
B42d035:L42d035:{c.instructions+=3;NFSU2_TR(0x42d035);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d037:{NFSU2_TR(0x42d037);
__builtin_memmove((R+4),(R+24),4);
}
B42d039:{NFSU2_TR(0x42d039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d03eull));
TAIL_STATIC(0x40f750u,40f);
}
B42d03e:L42d03e:{c.instructions+=1;NFSU2_TR(0x42d03e);
{goto L42d0a7;}
}
B42d040:L42d040:{c.instructions+=6;NFSU2_TR(0x42d040);
{u32 ea_=u32(r4(R+28)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42d046:{NFSU2_TR(0x42d046);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42d04c:{NFSU2_TR(0x42d04c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42d052:{NFSU2_TR(0x42d052);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42d054:{NFSU2_TR(0x42d054);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42d057:{NFSU2_TR(0x42d057);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42d05c;}}
}
B42d059:L42d059:{c.instructions+=1;NFSU2_TR(0x42d059);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42d05c:L42d05c:{c.instructions+=16;NFSU2_TR(0x42d05c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B42d060:{NFSU2_TR(0x42d060);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B42d064:{NFSU2_TR(0x42d064);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d068:{NFSU2_TR(0x42d068);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42d06c:{NFSU2_TR(0x42d06c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d070:{NFSU2_TR(0x42d070);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42d076:{NFSU2_TR(0x42d076);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B42d07a:{NFSU2_TR(0x42d07a);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42d080:{NFSU2_TR(0x42d080);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42d083:{NFSU2_TR(0x42d083);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B42d085:{NFSU2_TR(0x42d085);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42d087:{NFSU2_TR(0x42d087);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B42d089:{NFSU2_TR(0x42d089);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42d08f:{NFSU2_TR(0x42d08f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42d091:{NFSU2_TR(0x42d091);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42d094:{NFSU2_TR(0x42d094);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42d09a;}}
}
B42d096:L42d096:{c.instructions+=2;NFSU2_TR(0x42d096);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42d098:{NFSU2_TR(0x42d098);
{goto L42d09f;}
}
B42d09a:L42d09a:{c.instructions+=1;NFSU2_TR(0x42d09a);
w4(R+0,u32(0x1ull));
}
B42d09f:L42d09f:{c.instructions+=3;NFSU2_TR(0x42d09f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d0a1:{NFSU2_TR(0x42d0a1);
__builtin_memmove((R+0),(R+518),1);
}
B42d0a4:{NFSU2_TR(0x42d0a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42d0a7:L42d0a7:{c.instructions+=5;NFSU2_TR(0x42d0a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42d0a9:{NFSU2_TR(0x42d0a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42d0ac:{NFSU2_TR(0x42d0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42d0af:{NFSU2_TR(0x42d0af);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1d9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42d0b6:{NFSU2_TR(0x42d0b6);
if(r1(R+518)){{goto L42d0d8;}}
}
B42d0b8:L42d0b8:{c.instructions+=3;NFSU2_TR(0x42d0b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42d0bb:{NFSU2_TR(0x42d0bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d0bd:{NFSU2_TR(0x42d0bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42d0d8;}}
}
B42d0bf:L42d0bf:{c.instructions+=3;NFSU2_TR(0x42d0bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42d0c5:{NFSU2_TR(0x42d0c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d0c7:{NFSU2_TR(0x42d0c7);
if(r1(R+518)){{goto L42d0cf;}}
}
B42d0c9:L42d0c9:{c.instructions+=2;NFSU2_TR(0x42d0c9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42d0cd:{NFSU2_TR(0x42d0cd);
if(r1(R+518)){{goto L42d0d8;}}
}
B42d0cf:L42d0cf:{c.instructions+=3;NFSU2_TR(0x42d0cf);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d0d1:{NFSU2_TR(0x42d0d1);
__builtin_memmove((R+4),(R+24),4);
}
B42d0d3:{NFSU2_TR(0x42d0d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d0d8ull));
TAIL_STATIC(0x42aa20u,42a);
}
B42d0d8:L42d0d8:{c.instructions+=6;NFSU2_TR(0x42d0d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42d0d9:{NFSU2_TR(0x42d0d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42d0da:{NFSU2_TR(0x42d0da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42d0db:{NFSU2_TR(0x42d0db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42d0dc:{NFSU2_TR(0x42d0dc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42d0df:{NFSU2_TR(0x42d0df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42d0f0:L42d0f0:{c.instructions+=27;NFSU2_TR(0x42d0f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d0f2:{NFSU2_TR(0x42d0f2);
u8 U[4];
w4(U+0,u32(0x771bccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d0f7:{NFSU2_TR(0x42d0f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42d0fd:{NFSU2_TR(0x42d0fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d0fe:{NFSU2_TR(0x42d0fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d105:{NFSU2_TR(0x42d105);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B42d108:{NFSU2_TR(0x42d108);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d109:{NFSU2_TR(0x42d109);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d10a:{NFSU2_TR(0x42d10a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42d10e:{NFSU2_TR(0x42d10e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d10f:{NFSU2_TR(0x42d10f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42d113:{NFSU2_TR(0x42d113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42d115:{NFSU2_TR(0x42d115);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d116:{NFSU2_TR(0x42d116);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42d119:{NFSU2_TR(0x42d119);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42d11b:{NFSU2_TR(0x42d11b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d11e:{NFSU2_TR(0x42d11e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d122:{NFSU2_TR(0x42d122);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d126:{NFSU2_TR(0x42d126);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d12a:{NFSU2_TR(0x42d12a);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d12e:{NFSU2_TR(0x42d12e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d132:{NFSU2_TR(0x42d132);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d136:{NFSU2_TR(0x42d136);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B42d13e:{NFSU2_TR(0x42d13e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d142:{NFSU2_TR(0x42d142);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d146:{NFSU2_TR(0x42d146);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d14a:{NFSU2_TR(0x42d14a);
if(r1(R+518)){{goto L42d1c9;}}
}
B42d14c:L42d14c:{c.instructions+=2;NFSU2_TR(0x42d14c);
u8 U[22];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1f4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1f4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1f4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B42d154:{NFSU2_TR(0x42d154);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42d1c9;}}
}
B42d156:L42d156:{c.instructions+=3;NFSU2_TR(0x42d156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42d158:{NFSU2_TR(0x42d158);
__builtin_memmove((R+4),(R+28),4);
}
B42d15a:{NFSU2_TR(0x42d15a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d160ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42d160:L42d160:{c.instructions+=2;NFSU2_TR(0x42d160);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42d162:{NFSU2_TR(0x42d162);
if(r1(R+518)){{goto L42d1c9;}}
}
B42d164:L42d164:{c.instructions+=2;NFSU2_TR(0x42d164);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d165:{NFSU2_TR(0x42d165);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d16aull));
TAIL_STATIC(0x40e7c0u,40e);
}
B42d16a:L42d16a:{c.instructions+=4;NFSU2_TR(0x42d16a);
__builtin_memmove((R+12),(R+0),4);
}
B42d16c:{NFSU2_TR(0x42d16c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d16f:{NFSU2_TR(0x42d16f);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B42d172:{NFSU2_TR(0x42d172);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42d1c9;}}
}
B42d174:L42d174:{c.instructions+=3;NFSU2_TR(0x42d174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42d176:{NFSU2_TR(0x42d176);
__builtin_memmove((R+4),(R+28),4);
}
B42d178:{NFSU2_TR(0x42d178);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d17eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42d17e:L42d17e:{c.instructions+=6;NFSU2_TR(0x42d17e);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42d182:{NFSU2_TR(0x42d182);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B42d187:{NFSU2_TR(0x42d187);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x708ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d18d:{NFSU2_TR(0x42d18d);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B42d193:{NFSU2_TR(0x42d193);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d194:{NFSU2_TR(0x42d194);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d199ull));
TAIL_STATIC(0x440e50u,440);
}
B42d199:L42d199:{c.instructions+=5;NFSU2_TR(0x42d199);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d19c:{NFSU2_TR(0x42d19c);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d1a0:{NFSU2_TR(0x42d1a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d1a2:{NFSU2_TR(0x42d1a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42d1aa:{NFSU2_TR(0x42d1aa);
if(r1(R+518)){{goto L42d445;}}
}
B42d1b0:L42d1b0:{c.instructions+=7;NFSU2_TR(0x42d1b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42d1b4:{NFSU2_TR(0x42d1b4);
__builtin_memmove((R+4),gp(0x783628),4);
}
B42d1ba:{NFSU2_TR(0x42d1ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d1bb:{NFSU2_TR(0x42d1bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d1bc:{NFSU2_TR(0x42d1bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d1bd:{NFSU2_TR(0x42d1bd);
__builtin_memmove((R+4),(R+0),4);
}
B42d1bf:{NFSU2_TR(0x42d1bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d1c4ull));
TAIL_STATIC(0x423c30u,423);
}
B42d1c4:L42d1c4:{c.instructions+=1;NFSU2_TR(0x42d1c4);
{goto L42d452;}
}
B42d1c9:L42d1c9:{c.instructions+=2;NFSU2_TR(0x42d1c9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d1cc:{NFSU2_TR(0x42d1cc);
if(r1(R+518)){{goto L42d22f;}}
}
B42d1ce:L42d1ce:{c.instructions+=2;NFSU2_TR(0x42d1ce);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x190ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x190ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42d1d6:{NFSU2_TR(0x42d1d6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42d22f;}}
}
B42d1d8:L42d1d8:{c.instructions+=4;NFSU2_TR(0x42d1d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42d1dc:{NFSU2_TR(0x42d1dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d1dd:{NFSU2_TR(0x42d1dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d1de:{NFSU2_TR(0x42d1de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d1e3ull));
TAIL_STATIC(0x403320u,403);
}
B42d1e3:L42d1e3:{c.instructions+=4;NFSU2_TR(0x42d1e3);
__builtin_memmove((R+12),(R+0),4);
}
B42d1e5:{NFSU2_TR(0x42d1e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42d1e8:{NFSU2_TR(0x42d1e8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d1eb:{NFSU2_TR(0x42d1eb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42d22f;}}
}
B42d1ed:L42d1ed:{c.instructions+=5;NFSU2_TR(0x42d1ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d1ee:{NFSU2_TR(0x42d1ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42d1f2:{NFSU2_TR(0x42d1f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d1f3:{NFSU2_TR(0x42d1f3);
__builtin_memmove((R+4),(R+28),4);
}
B42d1f5:{NFSU2_TR(0x42d1f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d1faull));
TAIL_STATIC(0x40d5c0u,40d);
}
B42d1fa:L42d1fa:{c.instructions+=3;NFSU2_TR(0x42d1fa);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B42d1ff:{NFSU2_TR(0x42d1ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d200:{NFSU2_TR(0x42d200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d205ull));
TAIL_STATIC(0x440e50u,440);
}
B42d205:L42d205:{c.instructions+=5;NFSU2_TR(0x42d205);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d208:{NFSU2_TR(0x42d208);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d20c:{NFSU2_TR(0x42d20c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d20e:{NFSU2_TR(0x42d20e);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42d216:{NFSU2_TR(0x42d216);
if(r1(R+518)){{goto L42d445;}}
}
B42d21c:L42d21c:{c.instructions+=5;NFSU2_TR(0x42d21c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d21d:{NFSU2_TR(0x42d21d);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d222:{NFSU2_TR(0x42d222);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d223:{NFSU2_TR(0x42d223);
__builtin_memmove((R+4),(R+0),4);
}
B42d225:{NFSU2_TR(0x42d225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d22aull));
TAIL_STATIC(0x423cc0u,423);
}
B42d22a:L42d22a:{c.instructions+=1;NFSU2_TR(0x42d22a);
{goto L42d452;}
}
B42d22f:L42d22f:{c.instructions+=2;NFSU2_TR(0x42d22f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d232:{NFSU2_TR(0x42d232);
if(r1(R+518)){{goto L42d2d2;}}
}
B42d238:L42d238:{c.instructions+=2;NFSU2_TR(0x42d238);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x12cull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x12cull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42d240:{NFSU2_TR(0x42d240);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42d2d2;}}
}
B42d246:L42d246:{c.instructions+=6;NFSU2_TR(0x42d246);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42d24a:{NFSU2_TR(0x42d24a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d24b:{NFSU2_TR(0x42d24b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42d24f:{NFSU2_TR(0x42d24f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d250:{NFSU2_TR(0x42d250);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d251:{NFSU2_TR(0x42d251);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d256ull));
TAIL_STATIC(0x42ba20u,42b);
}
B42d256:L42d256:{c.instructions+=4;NFSU2_TR(0x42d256);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B42d259:{NFSU2_TR(0x42d259);
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
B42d25c:{NFSU2_TR(0x42d25c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d260:{NFSU2_TR(0x42d260);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42d2d2;}}
}
B42d262:L42d262:{c.instructions+=4;NFSU2_TR(0x42d262);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42d264:{NFSU2_TR(0x42d264);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42d267:{NFSU2_TR(0x42d267);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42d269:{NFSU2_TR(0x42d269);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d26cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42d26c:L42d26c:{c.instructions+=5;NFSU2_TR(0x42d26c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42d270:{NFSU2_TR(0x42d270);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d271:{NFSU2_TR(0x42d271);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d272:{NFSU2_TR(0x42d272);
__builtin_memmove((R+4),(R+28),4);
}
B42d274:{NFSU2_TR(0x42d274);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d279ull));
TAIL_STATIC(0x40d5c0u,40d);
}
B42d279:L42d279:{c.instructions+=6;NFSU2_TR(0x42d279);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42d27d:{NFSU2_TR(0x42d27d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42d27f:{NFSU2_TR(0x42d27f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d280:{NFSU2_TR(0x42d280);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d281:{NFSU2_TR(0x42d281);
__builtin_memmove((R+4),(R+28),4);
}
B42d283:{NFSU2_TR(0x42d283);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d289ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42d289:L42d289:{c.instructions+=2;NFSU2_TR(0x42d289);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42d28b:{NFSU2_TR(0x42d28b);
if(r1(R+518)){{goto L42d2ce;}}
}
B42d28d:L42d28d:{c.instructions+=3;NFSU2_TR(0x42d28d);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B42d292:{NFSU2_TR(0x42d292);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d293:{NFSU2_TR(0x42d293);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d298ull));
TAIL_STATIC(0x440e50u,440);
}
B42d298:L42d298:{c.instructions+=5;NFSU2_TR(0x42d298);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d29b:{NFSU2_TR(0x42d29b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d29f:{NFSU2_TR(0x42d29f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d2a1:{NFSU2_TR(0x42d2a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42d2a9:{NFSU2_TR(0x42d2a9);
if(r1(R+518)){{goto L42d445;}}
}
B42d2af:L42d2af:{c.instructions+=9;NFSU2_TR(0x42d2af);
__builtin_memmove((R+4),gp(0x783630),4);
}
B42d2b5:{NFSU2_TR(0x42d2b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42d2b9:{NFSU2_TR(0x42d2b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d2ba:{NFSU2_TR(0x42d2ba);
u8 U[4];
w4(U+0,u32(0x40000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d2bf:{NFSU2_TR(0x42d2bf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d2c0:{NFSU2_TR(0x42d2c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d2c1:{NFSU2_TR(0x42d2c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d2c2:{NFSU2_TR(0x42d2c2);
__builtin_memmove((R+4),(R+0),4);
}
B42d2c4:{NFSU2_TR(0x42d2c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d2c9ull));
TAIL_STATIC(0x4243b0u,424);
}
B42d2c9:L42d2c9:{c.instructions+=1;NFSU2_TR(0x42d2c9);
{goto L42d452;}
}
B42d2ce:L42d2ce:{c.instructions+=1;NFSU2_TR(0x42d2ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42d2d2:L42d2d2:{c.instructions+=2;NFSU2_TR(0x42d2d2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d2d5:{NFSU2_TR(0x42d2d5);
if(r1(R+518)){{goto L42d32d;}}
}
B42d2d7:L42d2d7:{c.instructions+=2;NFSU2_TR(0x42d2d7);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1f4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1f4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42d2df:{NFSU2_TR(0x42d2df);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42d32d;}}
}
B42d2e1:L42d2e1:{c.instructions+=3;NFSU2_TR(0x42d2e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42d2e3:{NFSU2_TR(0x42d2e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B42d2ea:{NFSU2_TR(0x42d2ea);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42d32d;}}
}
B42d2ec:L42d2ec:{c.instructions+=4;NFSU2_TR(0x42d2ec);
__builtin_memmove((R+4),gp(0x78371c),4);
}
B42d2f2:{NFSU2_TR(0x42d2f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d2f3:{NFSU2_TR(0x42d2f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d2f4:{NFSU2_TR(0x42d2f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d2f9ull));
TAIL_STATIC(0x403380u,403);
}
B42d2f9:L42d2f9:{c.instructions+=3;NFSU2_TR(0x42d2f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42d2fc:{NFSU2_TR(0x42d2fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42d2fe:{NFSU2_TR(0x42d2fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42d32d;}}
}
B42d300:L42d300:{c.instructions+=3;NFSU2_TR(0x42d300);
__builtin_memmove((R+8),gp(0x81cb6c),4);
}
B42d306:{NFSU2_TR(0x42d306);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d307:{NFSU2_TR(0x42d307);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d30cull));
TAIL_STATIC(0x440e50u,440);
}
B42d30c:L42d30c:{c.instructions+=3;NFSU2_TR(0x42d30c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d30f:{NFSU2_TR(0x42d30f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d311:{NFSU2_TR(0x42d311);
if(r1(R+518)){{goto L42d445;}}
}
B42d317:L42d317:{c.instructions+=4;NFSU2_TR(0x42d317);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d31c:{NFSU2_TR(0x42d31c);
u8 U[4];
w4(U+0,u32(0x1f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d321:{NFSU2_TR(0x42d321);
__builtin_memmove((R+4),(R+0),4);
}
B42d323:{NFSU2_TR(0x42d323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d328ull));
TAIL_STATIC(0x4241c0u,424);
}
B42d328:L42d328:{c.instructions+=1;NFSU2_TR(0x42d328);
{goto L42d452;}
}
B42d32d:L42d32d:{c.instructions+=3;NFSU2_TR(0x42d32d);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B42d332:{NFSU2_TR(0x42d332);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42d334:{NFSU2_TR(0x42d334);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42d3a7;}}
}
B42d336:L42d336:{c.instructions+=3;NFSU2_TR(0x42d336);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B42d33b:{NFSU2_TR(0x42d33b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d33d:{NFSU2_TR(0x42d33d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42d3a7;}}
}
B42d33f:L42d33f:{c.instructions+=7;NFSU2_TR(0x42d33f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d342:{NFSU2_TR(0x42d342);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42d345:{NFSU2_TR(0x42d345);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42d348:{NFSU2_TR(0x42d348);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x902ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B42d34f:{NFSU2_TR(0x42d34f);
__builtin_memmove((R+8),gp(0x81cb60),4);
}
B42d355:{NFSU2_TR(0x42d355);
u8 U[16];
w4(U+0,u32(u32(u32(0x934ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B42d35c:{NFSU2_TR(0x42d35c);
if(r1(R+518)){{goto L42d3a7;}}
}
B42d35e:L42d35e:{c.instructions+=2;NFSU2_TR(0x42d35e);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42d362:{NFSU2_TR(0x42d362);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42d3a7;}}
}
B42d364:L42d364:{c.instructions+=4;NFSU2_TR(0x42d364);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42d368:{NFSU2_TR(0x42d368);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d369:{NFSU2_TR(0x42d369);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d36a:{NFSU2_TR(0x42d36a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d36full));
TAIL_STATIC(0x414130u,414);
}
B42d36f:L42d36f:{c.instructions+=4;NFSU2_TR(0x42d36f);
__builtin_memmove((R+12),(R+0),4);
}
B42d371:{NFSU2_TR(0x42d371);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42d374:{NFSU2_TR(0x42d374);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d377:{NFSU2_TR(0x42d377);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42d3a7;}}
}
B42d379:L42d379:{c.instructions+=3;NFSU2_TR(0x42d379);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B42d37f:{NFSU2_TR(0x42d37f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d380:{NFSU2_TR(0x42d380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d385ull));
TAIL_STATIC(0x440e50u,440);
}
B42d385:L42d385:{c.instructions+=3;NFSU2_TR(0x42d385);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d388:{NFSU2_TR(0x42d388);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d38a:{NFSU2_TR(0x42d38a);
if(r1(R+518)){{goto L42d445;}}
}
B42d390:L42d390:{c.instructions+=6;NFSU2_TR(0x42d390);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42d394:{NFSU2_TR(0x42d394);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d395:{NFSU2_TR(0x42d395);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d39a:{NFSU2_TR(0x42d39a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d39b:{NFSU2_TR(0x42d39b);
__builtin_memmove((R+4),(R+0),4);
}
B42d39d:{NFSU2_TR(0x42d39d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d3a2ull));
TAIL_STATIC(0x4238c0u,423);
}
B42d3a2:L42d3a2:{c.instructions+=1;NFSU2_TR(0x42d3a2);
{goto L42d452;}
}
B42d3a7:L42d3a7:{c.instructions+=2;NFSU2_TR(0x42d3a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d3a9:{NFSU2_TR(0x42d3a9);
if(r1(R+518)){{goto L42d449;}}
}
B42d3af:L42d3af:{c.instructions+=2;NFSU2_TR(0x42d3af);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x64ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42d3b4:{NFSU2_TR(0x42d3b4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42d449;}}
}
B42d3ba:L42d3ba:{c.instructions+=6;NFSU2_TR(0x42d3ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42d3be:{NFSU2_TR(0x42d3be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d3bf:{NFSU2_TR(0x42d3bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42d3c3:{NFSU2_TR(0x42d3c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d3c4:{NFSU2_TR(0x42d3c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d3c5:{NFSU2_TR(0x42d3c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d3caull));
TAIL_STATIC(0x42b5b0u,42b);
}
B42d3ca:L42d3ca:{c.instructions+=4;NFSU2_TR(0x42d3ca);
__builtin_memmove((R+12),(R+0),4);
}
B42d3cc:{NFSU2_TR(0x42d3cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B42d3cf:{NFSU2_TR(0x42d3cf);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B42d3d2:{NFSU2_TR(0x42d3d2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42d449;}}
}
B42d3d4:L42d3d4:{c.instructions+=6;NFSU2_TR(0x42d3d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42d3d8:{NFSU2_TR(0x42d3d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42d3da:{NFSU2_TR(0x42d3da);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d3df:{NFSU2_TR(0x42d3df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d3e0:{NFSU2_TR(0x42d3e0);
__builtin_memmove((R+4),(R+28),4);
}
B42d3e2:{NFSU2_TR(0x42d3e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d3e8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42d3e8:L42d3e8:{c.instructions+=2;NFSU2_TR(0x42d3e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42d3ea:{NFSU2_TR(0x42d3ea);
if(r1(R+518)){{goto L42d449;}}
}
B42d3ec:L42d3ec:{c.instructions+=11;NFSU2_TR(0x42d3ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42d3f0:{NFSU2_TR(0x42d3f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42d3f4:{NFSU2_TR(0x42d3f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42d3f8:{NFSU2_TR(0x42d3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d3fe:{NFSU2_TR(0x42d3fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42d402:{NFSU2_TR(0x42d402);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x310ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d408:{NFSU2_TR(0x42d408);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d40e:{NFSU2_TR(0x42d40e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x318ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d414:{NFSU2_TR(0x42d414);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B42d41a:{NFSU2_TR(0x42d41a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d41b:{NFSU2_TR(0x42d41b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d420ull));
TAIL_STATIC(0x440e50u,440);
}
B42d420:L42d420:{c.instructions+=5;NFSU2_TR(0x42d420);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d423:{NFSU2_TR(0x42d423);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d427:{NFSU2_TR(0x42d427);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d429:{NFSU2_TR(0x42d429);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42d431:{NFSU2_TR(0x42d431);
if(r1(R+518)){{goto L42d445;}}
}
B42d433:L42d433:{c.instructions+=6;NFSU2_TR(0x42d433);
__builtin_memmove((R+8),gp(0x783614),4);
}
B42d439:{NFSU2_TR(0x42d439);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d43a:{NFSU2_TR(0x42d43a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d43b:{NFSU2_TR(0x42d43b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d43c:{NFSU2_TR(0x42d43c);
__builtin_memmove((R+4),(R+0),4);
}
B42d43e:{NFSU2_TR(0x42d43e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d443ull));
TAIL_STATIC(0x423610u,423);
}
B42d443:L42d443:{c.instructions+=1;NFSU2_TR(0x42d443);
{goto L42d452;}
}
B42d445:L42d445:{c.instructions+=2;NFSU2_TR(0x42d445);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42d447:{NFSU2_TR(0x42d447);
{goto L42d452;}
}
B42d449:L42d449:{c.instructions+=2;NFSU2_TR(0x42d449);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42d44d:{NFSU2_TR(0x42d44d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d452ull));
TAIL_STATIC(0x4269e0u,426);
}
B42d452:L42d452:{c.instructions+=8;NFSU2_TR(0x42d452);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42d456:{NFSU2_TR(0x42d456);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42d457:{NFSU2_TR(0x42d457);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42d458:{NFSU2_TR(0x42d458);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42d459:{NFSU2_TR(0x42d459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42d45a:{NFSU2_TR(0x42d45a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d461:{NFSU2_TR(0x42d461);
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
B42d464:{NFSU2_TR(0x42d464);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42d470:L42d470:{c.instructions+=21;NFSU2_TR(0x42d470);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d472:{NFSU2_TR(0x42d472);
u8 U[4];
w4(U+0,u32(0x771b87ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d477:{NFSU2_TR(0x42d477);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42d47d:{NFSU2_TR(0x42d47d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d47e:{NFSU2_TR(0x42d47e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d485:{NFSU2_TR(0x42d485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B42d488:{NFSU2_TR(0x42d488);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d489:{NFSU2_TR(0x42d489);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d48a:{NFSU2_TR(0x42d48a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d48b:{NFSU2_TR(0x42d48b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42d48f:{NFSU2_TR(0x42d48f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42d491:{NFSU2_TR(0x42d491);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d492:{NFSU2_TR(0x42d492);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42d495:{NFSU2_TR(0x42d495);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42d499:{NFSU2_TR(0x42d499);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B42d49b:{NFSU2_TR(0x42d49b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d49e:{NFSU2_TR(0x42d49e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d4a2:{NFSU2_TR(0x42d4a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d4a6:{NFSU2_TR(0x42d4a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d4aa:{NFSU2_TR(0x42d4aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d4ae:{NFSU2_TR(0x42d4ae);
if(r1(R+518)){{goto L42d529;}}
}
B42d4b0:L42d4b0:{c.instructions+=2;NFSU2_TR(0x42d4b0);
u8 U[22];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1f4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1f4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1f4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B42d4b8:{NFSU2_TR(0x42d4b8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42d529;}}
}
B42d4ba:L42d4ba:{c.instructions+=3;NFSU2_TR(0x42d4ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42d4bc:{NFSU2_TR(0x42d4bc);
__builtin_memmove((R+4),(R+28),4);
}
B42d4be:{NFSU2_TR(0x42d4be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d4c4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42d4c4:L42d4c4:{c.instructions+=2;NFSU2_TR(0x42d4c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42d4c6:{NFSU2_TR(0x42d4c6);
if(r1(R+518)){{goto L42d529;}}
}
B42d4c8:L42d4c8:{c.instructions+=2;NFSU2_TR(0x42d4c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d4c9:{NFSU2_TR(0x42d4c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d4ceull));
TAIL_STATIC(0x40e7c0u,40e);
}
B42d4ce:L42d4ce:{c.instructions+=4;NFSU2_TR(0x42d4ce);
__builtin_memmove((R+20),(R+0),4);
}
B42d4d0:{NFSU2_TR(0x42d4d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d4d3:{NFSU2_TR(0x42d4d3);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B42d4d6:{NFSU2_TR(0x42d4d6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42d529;}}
}
B42d4d8:L42d4d8:{c.instructions+=3;NFSU2_TR(0x42d4d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42d4da:{NFSU2_TR(0x42d4da);
__builtin_memmove((R+4),(R+28),4);
}
B42d4dc:{NFSU2_TR(0x42d4dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d4e2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42d4e2:L42d4e2:{c.instructions+=6;NFSU2_TR(0x42d4e2);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42d4e6:{NFSU2_TR(0x42d4e6);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B42d4eb:{NFSU2_TR(0x42d4eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x708ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d4f1:{NFSU2_TR(0x42d4f1);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B42d4f7:{NFSU2_TR(0x42d4f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d4f8:{NFSU2_TR(0x42d4f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d4fdull));
TAIL_STATIC(0x440e50u,440);
}
B42d4fd:L42d4fd:{c.instructions+=5;NFSU2_TR(0x42d4fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d500:{NFSU2_TR(0x42d500);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d504:{NFSU2_TR(0x42d504);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d506:{NFSU2_TR(0x42d506);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d50a:{NFSU2_TR(0x42d50a);
if(r1(R+518)){{goto L42d6cb;}}
}
B42d510:L42d510:{c.instructions+=7;NFSU2_TR(0x42d510);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42d514:{NFSU2_TR(0x42d514);
__builtin_memmove((R+4),gp(0x783628),4);
}
B42d51a:{NFSU2_TR(0x42d51a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d51b:{NFSU2_TR(0x42d51b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d51c:{NFSU2_TR(0x42d51c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d51d:{NFSU2_TR(0x42d51d);
__builtin_memmove((R+4),(R+0),4);
}
B42d51f:{NFSU2_TR(0x42d51f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d524ull));
TAIL_STATIC(0x423c30u,423);
}
B42d524:L42d524:{c.instructions+=1;NFSU2_TR(0x42d524);
{goto L42d6d8;}
}
B42d529:L42d529:{c.instructions+=3;NFSU2_TR(0x42d529);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42d530:{NFSU2_TR(0x42d530);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42d532:{NFSU2_TR(0x42d532);
if(r1(R+518)){{goto L42d58a;}}
}
B42d534:L42d534:{c.instructions+=3;NFSU2_TR(0x42d534);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42d537:{NFSU2_TR(0x42d537);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x780ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42d53d:{NFSU2_TR(0x42d53d);
if(r1(R+518)){{goto L42d58a;}}
}
B42d53f:L42d53f:{c.instructions+=3;NFSU2_TR(0x42d53f);
__builtin_memmove((R+8),gp(0x81cb6c),4);
}
B42d545:{NFSU2_TR(0x42d545);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d546:{NFSU2_TR(0x42d546);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d54bull));
TAIL_STATIC(0x440e50u,440);
}
B42d54b:L42d54b:{c.instructions+=6;NFSU2_TR(0x42d54b);
__builtin_memmove((R+24),(R+0),4);
}
B42d54d:{NFSU2_TR(0x42d54d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d550:{NFSU2_TR(0x42d550);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d554:{NFSU2_TR(0x42d554);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d556:{NFSU2_TR(0x42d556);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42d55e:{NFSU2_TR(0x42d55e);
if(r1(R+518)){{goto L42d6cb;}}
}
B42d564:L42d564:{c.instructions+=5;NFSU2_TR(0x42d564);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d569:{NFSU2_TR(0x42d569);
u8 U[4];
w4(U+0,u32(0x258ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d56e:{NFSU2_TR(0x42d56e);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d570:{NFSU2_TR(0x42d570);
__builtin_memmove((R+4),(R+24),4);
}
B42d572:{NFSU2_TR(0x42d572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d577ull));
TAIL_STATIC(0x4234a0u,423);
}
B42d577:L42d577:{c.instructions+=4;NFSU2_TR(0x42d577);
u8 U[4];
w4(U+0,u32(0x7859d4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B42d57d:{NFSU2_TR(0x42d57d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42d583:{NFSU2_TR(0x42d583);
__builtin_memmove((R+0),(R+24),4);
}
B42d585:{NFSU2_TR(0x42d585);
{goto L42d6d8;}
}
B42d58a:L42d58a:{c.instructions+=2;NFSU2_TR(0x42d58a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d58b:{NFSU2_TR(0x42d58b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d590ull));
TAIL_STATIC(0x403450u,403);
}
B42d590:L42d590:{c.instructions+=4;NFSU2_TR(0x42d590);
__builtin_memmove((R+20),(R+0),4);
}
B42d592:{NFSU2_TR(0x42d592);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d595:{NFSU2_TR(0x42d595);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d598:{NFSU2_TR(0x42d598);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42d5da;}}
}
B42d59a:L42d59a:{c.instructions+=3;NFSU2_TR(0x42d59a);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B42d59f:{NFSU2_TR(0x42d59f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d5a0:{NFSU2_TR(0x42d5a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d5a5ull));
TAIL_STATIC(0x440e50u,440);
}
B42d5a5:L42d5a5:{c.instructions+=6;NFSU2_TR(0x42d5a5);
__builtin_memmove((R+24),(R+0),4);
}
B42d5a7:{NFSU2_TR(0x42d5a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d5aa:{NFSU2_TR(0x42d5aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d5ae:{NFSU2_TR(0x42d5ae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d5b0:{NFSU2_TR(0x42d5b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42d5b8:{NFSU2_TR(0x42d5b8);
if(r1(R+518)){{goto L42d6cb;}}
}
B42d5be:L42d5be:{c.instructions+=5;NFSU2_TR(0x42d5be);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d5c3:{NFSU2_TR(0x42d5c3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d5c4:{NFSU2_TR(0x42d5c4);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d5c6:{NFSU2_TR(0x42d5c6);
__builtin_memmove((R+4),(R+24),4);
}
B42d5c8:{NFSU2_TR(0x42d5c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d5cdull));
TAIL_STATIC(0x4234a0u,423);
}
B42d5cd:L42d5cd:{c.instructions+=3;NFSU2_TR(0x42d5cd);
u8 U[4];
w4(U+0,u32(0x7858d4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B42d5d3:{NFSU2_TR(0x42d5d3);
__builtin_memmove((R+0),(R+24),4);
}
B42d5d5:{NFSU2_TR(0x42d5d5);
{goto L42d6d8;}
}
B42d5da:L42d5da:{c.instructions+=4;NFSU2_TR(0x42d5da);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42d5de:{NFSU2_TR(0x42d5de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d5df:{NFSU2_TR(0x42d5df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d5e0:{NFSU2_TR(0x42d5e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d5e5ull));
TAIL_STATIC(0x403410u,403);
}
B42d5e5:L42d5e5:{c.instructions+=4;NFSU2_TR(0x42d5e5);
__builtin_memmove((R+20),(R+0),4);
}
B42d5e7:{NFSU2_TR(0x42d5e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42d5ea:{NFSU2_TR(0x42d5ea);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d5ed:{NFSU2_TR(0x42d5ed);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42d629;}}
}
B42d5ef:L42d5ef:{c.instructions+=3;NFSU2_TR(0x42d5ef);
__builtin_memmove((R+8),gp(0x81cb6c),4);
}
B42d5f5:{NFSU2_TR(0x42d5f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d5f6:{NFSU2_TR(0x42d5f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d5fbull));
TAIL_STATIC(0x440e50u,440);
}
B42d5fb:L42d5fb:{c.instructions+=5;NFSU2_TR(0x42d5fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d5fe:{NFSU2_TR(0x42d5fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d602:{NFSU2_TR(0x42d602);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d604:{NFSU2_TR(0x42d604);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42d60c:{NFSU2_TR(0x42d60c);
if(r1(R+518)){{goto L42d6cb;}}
}
B42d612:L42d612:{c.instructions+=6;NFSU2_TR(0x42d612);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42d616:{NFSU2_TR(0x42d616);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d617:{NFSU2_TR(0x42d617);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d61c:{NFSU2_TR(0x42d61c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d61d:{NFSU2_TR(0x42d61d);
__builtin_memmove((R+4),(R+0),4);
}
B42d61f:{NFSU2_TR(0x42d61f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d624ull));
TAIL_STATIC(0x424560u,424);
}
B42d624:L42d624:{c.instructions+=1;NFSU2_TR(0x42d624);
{goto L42d6d8;}
}
B42d629:L42d629:{c.instructions+=2;NFSU2_TR(0x42d629);
u8 U[22];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B42d62e:{NFSU2_TR(0x42d62e);
if(r1(R+518)){{goto L42d6cf;}}
}
B42d634:L42d634:{c.instructions+=2;NFSU2_TR(0x42d634);
u8 U[22];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x12cull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x12cull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x12cull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B42d63c:{NFSU2_TR(0x42d63c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42d6cf;}}
}
B42d642:L42d642:{c.instructions+=6;NFSU2_TR(0x42d642);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42d646:{NFSU2_TR(0x42d646);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d647:{NFSU2_TR(0x42d647);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42d64b:{NFSU2_TR(0x42d64b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d64c:{NFSU2_TR(0x42d64c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d64d:{NFSU2_TR(0x42d64d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d652ull));
TAIL_STATIC(0x42ba20u,42b);
}
B42d652:L42d652:{c.instructions+=4;NFSU2_TR(0x42d652);
__builtin_memmove((R+20),(R+0),4);
}
B42d654:{NFSU2_TR(0x42d654);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B42d657:{NFSU2_TR(0x42d657);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B42d65a:{NFSU2_TR(0x42d65a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42d6cf;}}
}
B42d65c:L42d65c:{c.instructions+=4;NFSU2_TR(0x42d65c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42d65e:{NFSU2_TR(0x42d65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42d661:{NFSU2_TR(0x42d661);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42d663:{NFSU2_TR(0x42d663);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d666ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42d666:L42d666:{c.instructions+=14;NFSU2_TR(0x42d666);
__builtin_memmove((R+8),gp(0x81cb60),4);
}
B42d66c:{NFSU2_TR(0x42d66c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B42d66e:{NFSU2_TR(0x42d66e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d670:{NFSU2_TR(0x42d670);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B42d673:{NFSU2_TR(0x42d673);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d674:{NFSU2_TR(0x42d674);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42d678:{NFSU2_TR(0x42d678);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d679:{NFSU2_TR(0x42d679);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B42d67a:{NFSU2_TR(0x42d67a);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B42d67c:{NFSU2_TR(0x42d67c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B42d67f:{NFSU2_TR(0x42d67f);
__builtin_memmove((R+4),(R+28),4);
}
B42d681:{NFSU2_TR(0x42d681);
{u32 ea_=u32(r4(R+8)+r4(R+0)+u32(1332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42d688:{NFSU2_TR(0x42d688);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42d68c:{NFSU2_TR(0x42d68c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d691ull));
TAIL_STATIC(0x40d5c0u,40d);
}
B42d691:L42d691:{c.instructions+=3;NFSU2_TR(0x42d691);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B42d696:{NFSU2_TR(0x42d696);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d697:{NFSU2_TR(0x42d697);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d69cull));
TAIL_STATIC(0x440e50u,440);
}
B42d69c:L42d69c:{c.instructions+=5;NFSU2_TR(0x42d69c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d69f:{NFSU2_TR(0x42d69f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d6a3:{NFSU2_TR(0x42d6a3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d6a5:{NFSU2_TR(0x42d6a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42d6ad:{NFSU2_TR(0x42d6ad);
if(r1(R+518)){{goto L42d6cb;}}
}
B42d6af:L42d6af:{c.instructions+=10;NFSU2_TR(0x42d6af);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42d6b3:{NFSU2_TR(0x42d6b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42d6b7:{NFSU2_TR(0x42d6b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d6b8:{NFSU2_TR(0x42d6b8);
__builtin_memmove((R+4),gp(0x783630),4);
}
B42d6be:{NFSU2_TR(0x42d6be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d6bf:{NFSU2_TR(0x42d6bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d6c0:{NFSU2_TR(0x42d6c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d6c1:{NFSU2_TR(0x42d6c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d6c2:{NFSU2_TR(0x42d6c2);
__builtin_memmove((R+4),(R+0),4);
}
B42d6c4:{NFSU2_TR(0x42d6c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d6c9ull));
TAIL_STATIC(0x4243b0u,424);
}
B42d6c9:L42d6c9:{c.instructions+=1;NFSU2_TR(0x42d6c9);
{goto L42d6d8;}
}
B42d6cb:L42d6cb:{c.instructions+=2;NFSU2_TR(0x42d6cb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42d6cd:{NFSU2_TR(0x42d6cd);
{goto L42d6d8;}
}
B42d6cf:L42d6cf:{c.instructions+=3;NFSU2_TR(0x42d6cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42d6d3:{NFSU2_TR(0x42d6d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42d6d5:{NFSU2_TR(0x42d6d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d6d8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42d6d8:L42d6d8:{c.instructions+=8;NFSU2_TR(0x42d6d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42d6dc:{NFSU2_TR(0x42d6dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42d6dd:{NFSU2_TR(0x42d6dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42d6de:{NFSU2_TR(0x42d6de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42d6df:{NFSU2_TR(0x42d6df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42d6e0:{NFSU2_TR(0x42d6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d6e7:{NFSU2_TR(0x42d6e7);
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
B42d6ea:{NFSU2_TR(0x42d6ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42d6f0:L42d6f0:{c.instructions+=27;NFSU2_TR(0x42d6f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d6f2:{NFSU2_TR(0x42d6f2);
u8 U[4];
w4(U+0,u32(0x771bccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d6f7:{NFSU2_TR(0x42d6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42d6fd:{NFSU2_TR(0x42d6fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d6fe:{NFSU2_TR(0x42d6fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d705:{NFSU2_TR(0x42d705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B42d708:{NFSU2_TR(0x42d708);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d709:{NFSU2_TR(0x42d709);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d70a:{NFSU2_TR(0x42d70a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42d70e:{NFSU2_TR(0x42d70e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d70f:{NFSU2_TR(0x42d70f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42d713:{NFSU2_TR(0x42d713);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42d715:{NFSU2_TR(0x42d715);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d716:{NFSU2_TR(0x42d716);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42d719:{NFSU2_TR(0x42d719);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42d71b:{NFSU2_TR(0x42d71b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d71e:{NFSU2_TR(0x42d71e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d722:{NFSU2_TR(0x42d722);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d726:{NFSU2_TR(0x42d726);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d72a:{NFSU2_TR(0x42d72a);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d72e:{NFSU2_TR(0x42d72e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d732:{NFSU2_TR(0x42d732);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d736:{NFSU2_TR(0x42d736);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B42d73e:{NFSU2_TR(0x42d73e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d742:{NFSU2_TR(0x42d742);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d746:{NFSU2_TR(0x42d746);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d74a:{NFSU2_TR(0x42d74a);
if(r1(R+518)){{goto L42d7c9;}}
}
B42d74c:L42d74c:{c.instructions+=2;NFSU2_TR(0x42d74c);
u8 U[22];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1f4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1f4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1f4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B42d754:{NFSU2_TR(0x42d754);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42d7c9;}}
}
B42d756:L42d756:{c.instructions+=3;NFSU2_TR(0x42d756);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42d758:{NFSU2_TR(0x42d758);
__builtin_memmove((R+4),(R+28),4);
}
B42d75a:{NFSU2_TR(0x42d75a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d760ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42d760:L42d760:{c.instructions+=2;NFSU2_TR(0x42d760);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42d762:{NFSU2_TR(0x42d762);
if(r1(R+518)){{goto L42d7c9;}}
}
B42d764:L42d764:{c.instructions+=2;NFSU2_TR(0x42d764);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d765:{NFSU2_TR(0x42d765);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d76aull));
TAIL_STATIC(0x40e7c0u,40e);
}
B42d76a:L42d76a:{c.instructions+=4;NFSU2_TR(0x42d76a);
__builtin_memmove((R+12),(R+0),4);
}
B42d76c:{NFSU2_TR(0x42d76c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d76f:{NFSU2_TR(0x42d76f);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B42d772:{NFSU2_TR(0x42d772);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42d7c9;}}
}
B42d774:L42d774:{c.instructions+=3;NFSU2_TR(0x42d774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42d776:{NFSU2_TR(0x42d776);
__builtin_memmove((R+4),(R+28),4);
}
B42d778:{NFSU2_TR(0x42d778);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d77eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42d77e:L42d77e:{c.instructions+=6;NFSU2_TR(0x42d77e);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42d782:{NFSU2_TR(0x42d782);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B42d787:{NFSU2_TR(0x42d787);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x708ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d78d:{NFSU2_TR(0x42d78d);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B42d793:{NFSU2_TR(0x42d793);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d794:{NFSU2_TR(0x42d794);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d799ull));
TAIL_STATIC(0x440e50u,440);
}
B42d799:L42d799:{c.instructions+=5;NFSU2_TR(0x42d799);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d79c:{NFSU2_TR(0x42d79c);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d7a0:{NFSU2_TR(0x42d7a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d7a2:{NFSU2_TR(0x42d7a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42d7aa:{NFSU2_TR(0x42d7aa);
if(r1(R+518)){{goto L42da45;}}
}
B42d7b0:L42d7b0:{c.instructions+=7;NFSU2_TR(0x42d7b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42d7b4:{NFSU2_TR(0x42d7b4);
__builtin_memmove((R+4),gp(0x783628),4);
}
B42d7ba:{NFSU2_TR(0x42d7ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d7bb:{NFSU2_TR(0x42d7bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d7bc:{NFSU2_TR(0x42d7bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d7bd:{NFSU2_TR(0x42d7bd);
__builtin_memmove((R+4),(R+0),4);
}
B42d7bf:{NFSU2_TR(0x42d7bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d7c4ull));
TAIL_STATIC(0x423c30u,423);
}
B42d7c4:L42d7c4:{c.instructions+=1;NFSU2_TR(0x42d7c4);
{goto L42da52;}
}
B42d7c9:L42d7c9:{c.instructions+=2;NFSU2_TR(0x42d7c9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d7cc:{NFSU2_TR(0x42d7cc);
if(r1(R+518)){{goto L42d82f;}}
}
B42d7ce:L42d7ce:{c.instructions+=2;NFSU2_TR(0x42d7ce);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x190ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x190ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42d7d6:{NFSU2_TR(0x42d7d6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42d82f;}}
}
B42d7d8:L42d7d8:{c.instructions+=4;NFSU2_TR(0x42d7d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42d7dc:{NFSU2_TR(0x42d7dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d7dd:{NFSU2_TR(0x42d7dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d7de:{NFSU2_TR(0x42d7de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d7e3ull));
TAIL_STATIC(0x403320u,403);
}
B42d7e3:L42d7e3:{c.instructions+=4;NFSU2_TR(0x42d7e3);
__builtin_memmove((R+12),(R+0),4);
}
B42d7e5:{NFSU2_TR(0x42d7e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42d7e8:{NFSU2_TR(0x42d7e8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d7eb:{NFSU2_TR(0x42d7eb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42d82f;}}
}
B42d7ed:L42d7ed:{c.instructions+=5;NFSU2_TR(0x42d7ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d7ee:{NFSU2_TR(0x42d7ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42d7f2:{NFSU2_TR(0x42d7f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d7f3:{NFSU2_TR(0x42d7f3);
__builtin_memmove((R+4),(R+28),4);
}
B42d7f5:{NFSU2_TR(0x42d7f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d7faull));
TAIL_STATIC(0x40d5c0u,40d);
}
B42d7fa:L42d7fa:{c.instructions+=3;NFSU2_TR(0x42d7fa);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B42d7ff:{NFSU2_TR(0x42d7ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d800:{NFSU2_TR(0x42d800);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d805ull));
TAIL_STATIC(0x440e50u,440);
}
B42d805:L42d805:{c.instructions+=5;NFSU2_TR(0x42d805);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d808:{NFSU2_TR(0x42d808);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d80c:{NFSU2_TR(0x42d80c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d80e:{NFSU2_TR(0x42d80e);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42d816:{NFSU2_TR(0x42d816);
if(r1(R+518)){{goto L42da45;}}
}
B42d81c:L42d81c:{c.instructions+=5;NFSU2_TR(0x42d81c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d81d:{NFSU2_TR(0x42d81d);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d822:{NFSU2_TR(0x42d822);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d823:{NFSU2_TR(0x42d823);
__builtin_memmove((R+4),(R+0),4);
}
B42d825:{NFSU2_TR(0x42d825);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d82aull));
TAIL_STATIC(0x423cc0u,423);
}
B42d82a:L42d82a:{c.instructions+=1;NFSU2_TR(0x42d82a);
{goto L42da52;}
}
B42d82f:L42d82f:{c.instructions+=2;NFSU2_TR(0x42d82f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d832:{NFSU2_TR(0x42d832);
if(r1(R+518)){{goto L42d8d2;}}
}
B42d838:L42d838:{c.instructions+=2;NFSU2_TR(0x42d838);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x12cull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x12cull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42d840:{NFSU2_TR(0x42d840);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42d8d2;}}
}
B42d846:L42d846:{c.instructions+=6;NFSU2_TR(0x42d846);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42d84a:{NFSU2_TR(0x42d84a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d84b:{NFSU2_TR(0x42d84b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42d84f:{NFSU2_TR(0x42d84f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d850:{NFSU2_TR(0x42d850);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d851:{NFSU2_TR(0x42d851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d856ull));
TAIL_STATIC(0x42ba20u,42b);
}
B42d856:L42d856:{c.instructions+=4;NFSU2_TR(0x42d856);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B42d859:{NFSU2_TR(0x42d859);
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
B42d85c:{NFSU2_TR(0x42d85c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d860:{NFSU2_TR(0x42d860);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42d8d2;}}
}
B42d862:L42d862:{c.instructions+=4;NFSU2_TR(0x42d862);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42d864:{NFSU2_TR(0x42d864);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42d867:{NFSU2_TR(0x42d867);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42d869:{NFSU2_TR(0x42d869);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d86cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42d86c:L42d86c:{c.instructions+=5;NFSU2_TR(0x42d86c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42d870:{NFSU2_TR(0x42d870);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d871:{NFSU2_TR(0x42d871);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d872:{NFSU2_TR(0x42d872);
__builtin_memmove((R+4),(R+28),4);
}
B42d874:{NFSU2_TR(0x42d874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d879ull));
TAIL_STATIC(0x40d5c0u,40d);
}
B42d879:L42d879:{c.instructions+=6;NFSU2_TR(0x42d879);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42d87d:{NFSU2_TR(0x42d87d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42d87f:{NFSU2_TR(0x42d87f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d880:{NFSU2_TR(0x42d880);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d881:{NFSU2_TR(0x42d881);
__builtin_memmove((R+4),(R+28),4);
}
B42d883:{NFSU2_TR(0x42d883);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d889ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42d889:L42d889:{c.instructions+=2;NFSU2_TR(0x42d889);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42d88b:{NFSU2_TR(0x42d88b);
if(r1(R+518)){{goto L42d8ce;}}
}
B42d88d:L42d88d:{c.instructions+=3;NFSU2_TR(0x42d88d);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B42d892:{NFSU2_TR(0x42d892);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d893:{NFSU2_TR(0x42d893);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d898ull));
TAIL_STATIC(0x440e50u,440);
}
B42d898:L42d898:{c.instructions+=5;NFSU2_TR(0x42d898);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d89b:{NFSU2_TR(0x42d89b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d89f:{NFSU2_TR(0x42d89f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d8a1:{NFSU2_TR(0x42d8a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42d8a9:{NFSU2_TR(0x42d8a9);
if(r1(R+518)){{goto L42da45;}}
}
B42d8af:L42d8af:{c.instructions+=9;NFSU2_TR(0x42d8af);
__builtin_memmove((R+4),gp(0x783630),4);
}
B42d8b5:{NFSU2_TR(0x42d8b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42d8b9:{NFSU2_TR(0x42d8b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d8ba:{NFSU2_TR(0x42d8ba);
u8 U[4];
w4(U+0,u32(0x40000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d8bf:{NFSU2_TR(0x42d8bf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d8c0:{NFSU2_TR(0x42d8c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d8c1:{NFSU2_TR(0x42d8c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d8c2:{NFSU2_TR(0x42d8c2);
__builtin_memmove((R+4),(R+0),4);
}
B42d8c4:{NFSU2_TR(0x42d8c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d8c9ull));
TAIL_STATIC(0x4243b0u,424);
}
B42d8c9:L42d8c9:{c.instructions+=1;NFSU2_TR(0x42d8c9);
{goto L42da52;}
}
B42d8ce:L42d8ce:{c.instructions+=1;NFSU2_TR(0x42d8ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42d8d2:L42d8d2:{c.instructions+=2;NFSU2_TR(0x42d8d2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d8d5:{NFSU2_TR(0x42d8d5);
if(r1(R+518)){{goto L42d92d;}}
}
B42d8d7:L42d8d7:{c.instructions+=2;NFSU2_TR(0x42d8d7);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1f4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1f4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42d8df:{NFSU2_TR(0x42d8df);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42d92d;}}
}
B42d8e1:L42d8e1:{c.instructions+=3;NFSU2_TR(0x42d8e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42d8e3:{NFSU2_TR(0x42d8e3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B42d8ea:{NFSU2_TR(0x42d8ea);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42d92d;}}
}
B42d8ec:L42d8ec:{c.instructions+=4;NFSU2_TR(0x42d8ec);
__builtin_memmove((R+4),gp(0x78371c),4);
}
B42d8f2:{NFSU2_TR(0x42d8f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d8f3:{NFSU2_TR(0x42d8f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d8f4:{NFSU2_TR(0x42d8f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d8f9ull));
TAIL_STATIC(0x403380u,403);
}
B42d8f9:L42d8f9:{c.instructions+=3;NFSU2_TR(0x42d8f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42d8fc:{NFSU2_TR(0x42d8fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42d8fe:{NFSU2_TR(0x42d8fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42d92d;}}
}
B42d900:L42d900:{c.instructions+=3;NFSU2_TR(0x42d900);
__builtin_memmove((R+8),gp(0x81cb6c),4);
}
B42d906:{NFSU2_TR(0x42d906);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d907:{NFSU2_TR(0x42d907);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d90cull));
TAIL_STATIC(0x440e50u,440);
}
B42d90c:L42d90c:{c.instructions+=3;NFSU2_TR(0x42d90c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d90f:{NFSU2_TR(0x42d90f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d911:{NFSU2_TR(0x42d911);
if(r1(R+518)){{goto L42da45;}}
}
B42d917:L42d917:{c.instructions+=4;NFSU2_TR(0x42d917);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d91c:{NFSU2_TR(0x42d91c);
u8 U[4];
w4(U+0,u32(0x1f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d921:{NFSU2_TR(0x42d921);
__builtin_memmove((R+4),(R+0),4);
}
B42d923:{NFSU2_TR(0x42d923);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d928ull));
TAIL_STATIC(0x4241c0u,424);
}
B42d928:L42d928:{c.instructions+=1;NFSU2_TR(0x42d928);
{goto L42da52;}
}
B42d92d:L42d92d:{c.instructions+=3;NFSU2_TR(0x42d92d);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B42d932:{NFSU2_TR(0x42d932);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42d934:{NFSU2_TR(0x42d934);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42d9a7;}}
}
B42d936:L42d936:{c.instructions+=3;NFSU2_TR(0x42d936);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B42d93b:{NFSU2_TR(0x42d93b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d93d:{NFSU2_TR(0x42d93d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42d9a7;}}
}
B42d93f:L42d93f:{c.instructions+=7;NFSU2_TR(0x42d93f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d942:{NFSU2_TR(0x42d942);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42d945:{NFSU2_TR(0x42d945);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42d948:{NFSU2_TR(0x42d948);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x902ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B42d94f:{NFSU2_TR(0x42d94f);
__builtin_memmove((R+8),gp(0x81cb60),4);
}
B42d955:{NFSU2_TR(0x42d955);
u8 U[16];
w4(U+0,u32(u32(u32(0x934ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B42d95c:{NFSU2_TR(0x42d95c);
if(r1(R+518)){{goto L42d9a7;}}
}
B42d95e:L42d95e:{c.instructions+=2;NFSU2_TR(0x42d95e);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+0)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42d962:{NFSU2_TR(0x42d962);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42d9a7;}}
}
B42d964:L42d964:{c.instructions+=4;NFSU2_TR(0x42d964);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42d968:{NFSU2_TR(0x42d968);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d969:{NFSU2_TR(0x42d969);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d96a:{NFSU2_TR(0x42d96a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d96full));
TAIL_STATIC(0x414130u,414);
}
B42d96f:L42d96f:{c.instructions+=4;NFSU2_TR(0x42d96f);
__builtin_memmove((R+12),(R+0),4);
}
B42d971:{NFSU2_TR(0x42d971);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42d974:{NFSU2_TR(0x42d974);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42d977:{NFSU2_TR(0x42d977);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42d9a7;}}
}
B42d979:L42d979:{c.instructions+=3;NFSU2_TR(0x42d979);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B42d97f:{NFSU2_TR(0x42d97f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d980:{NFSU2_TR(0x42d980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d985ull));
TAIL_STATIC(0x440e50u,440);
}
B42d985:L42d985:{c.instructions+=3;NFSU2_TR(0x42d985);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42d988:{NFSU2_TR(0x42d988);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42d98a:{NFSU2_TR(0x42d98a);
if(r1(R+518)){{goto L42da45;}}
}
B42d990:L42d990:{c.instructions+=6;NFSU2_TR(0x42d990);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42d994:{NFSU2_TR(0x42d994);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d995:{NFSU2_TR(0x42d995);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d99a:{NFSU2_TR(0x42d99a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d99b:{NFSU2_TR(0x42d99b);
__builtin_memmove((R+4),(R+0),4);
}
B42d99d:{NFSU2_TR(0x42d99d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d9a2ull));
TAIL_STATIC(0x4238c0u,423);
}
B42d9a2:L42d9a2:{c.instructions+=1;NFSU2_TR(0x42d9a2);
{goto L42da52;}
}
B42d9a7:L42d9a7:{c.instructions+=2;NFSU2_TR(0x42d9a7);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42d9a9:{NFSU2_TR(0x42d9a9);
if(r1(R+518)){{goto L42da49;}}
}
B42d9af:L42d9af:{c.instructions+=2;NFSU2_TR(0x42d9af);
u8 U[22];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x64ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x64ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B42d9b4:{NFSU2_TR(0x42d9b4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42da49;}}
}
B42d9ba:L42d9ba:{c.instructions+=6;NFSU2_TR(0x42d9ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42d9be:{NFSU2_TR(0x42d9be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d9bf:{NFSU2_TR(0x42d9bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42d9c3:{NFSU2_TR(0x42d9c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d9c4:{NFSU2_TR(0x42d9c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d9c5:{NFSU2_TR(0x42d9c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d9caull));
TAIL_STATIC(0x42b5b0u,42b);
}
B42d9ca:L42d9ca:{c.instructions+=4;NFSU2_TR(0x42d9ca);
__builtin_memmove((R+12),(R+0),4);
}
B42d9cc:{NFSU2_TR(0x42d9cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B42d9cf:{NFSU2_TR(0x42d9cf);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B42d9d2:{NFSU2_TR(0x42d9d2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42da49;}}
}
B42d9d4:L42d9d4:{c.instructions+=6;NFSU2_TR(0x42d9d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42d9d8:{NFSU2_TR(0x42d9d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42d9da:{NFSU2_TR(0x42d9da);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d9df:{NFSU2_TR(0x42d9df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42d9e0:{NFSU2_TR(0x42d9e0);
__builtin_memmove((R+4),(R+28),4);
}
B42d9e2:{NFSU2_TR(0x42d9e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42d9e8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42d9e8:L42d9e8:{c.instructions+=2;NFSU2_TR(0x42d9e8);
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
B42d9ea:{NFSU2_TR(0x42d9ea);
if(r1(R+518)){{goto L42da49;}}
}
B42d9ec:L42d9ec:{c.instructions+=11;NFSU2_TR(0x42d9ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42d9f0:{NFSU2_TR(0x42d9f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42d9f4:{NFSU2_TR(0x42d9f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42d9f8:{NFSU2_TR(0x42d9f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42d9fe:{NFSU2_TR(0x42d9fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42da02:{NFSU2_TR(0x42da02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x310ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42da08:{NFSU2_TR(0x42da08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42da0e:{NFSU2_TR(0x42da0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x318ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42da14:{NFSU2_TR(0x42da14);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B42da1a:{NFSU2_TR(0x42da1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42da1b:{NFSU2_TR(0x42da1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42da20ull));
TAIL_STATIC(0x440e50u,440);
}
B42da20:L42da20:{c.instructions+=5;NFSU2_TR(0x42da20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42da23:{NFSU2_TR(0x42da23);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42da27:{NFSU2_TR(0x42da27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42da29:{NFSU2_TR(0x42da29);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42da31:{NFSU2_TR(0x42da31);
if(r1(R+518)){{goto L42da45;}}
}
B42da33:L42da33:{c.instructions+=6;NFSU2_TR(0x42da33);
__builtin_memmove((R+8),gp(0x783614),4);
}
B42da39:{NFSU2_TR(0x42da39);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42da3a:{NFSU2_TR(0x42da3a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42da3b:{NFSU2_TR(0x42da3b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42da3c:{NFSU2_TR(0x42da3c);
__builtin_memmove((R+4),(R+0),4);
}
B42da3e:{NFSU2_TR(0x42da3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42da43ull));
TAIL_STATIC(0x423610u,423);
}
B42da43:L42da43:{c.instructions+=1;NFSU2_TR(0x42da43);
{goto L42da52;}
}
B42da45:L42da45:{c.instructions+=2;NFSU2_TR(0x42da45);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42da47:{NFSU2_TR(0x42da47);
{goto L42da52;}
}
B42da49:L42da49:{c.instructions+=3;NFSU2_TR(0x42da49);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42da4d:{NFSU2_TR(0x42da4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42da4f:{NFSU2_TR(0x42da4f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42da52ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42da52:L42da52:{c.instructions+=8;NFSU2_TR(0x42da52);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42da56:{NFSU2_TR(0x42da56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42da57:{NFSU2_TR(0x42da57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42da58:{NFSU2_TR(0x42da58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42da59:{NFSU2_TR(0x42da59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42da5a:{NFSU2_TR(0x42da5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42da61:{NFSU2_TR(0x42da61);
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
B42da64:{NFSU2_TR(0x42da64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42da70:L42da70:{c.instructions+=21;NFSU2_TR(0x42da70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42da72:{NFSU2_TR(0x42da72);
u8 U[4];
w4(U+0,u32(0x771c01ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42da77:{NFSU2_TR(0x42da77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42da7d:{NFSU2_TR(0x42da7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42da7e:{NFSU2_TR(0x42da7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42da85:{NFSU2_TR(0x42da85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B42da88:{NFSU2_TR(0x42da88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42da89:{NFSU2_TR(0x42da89);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42da8a:{NFSU2_TR(0x42da8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42da8e:{NFSU2_TR(0x42da8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42da8f:{NFSU2_TR(0x42da8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42da90:{NFSU2_TR(0x42da90);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42da94:{NFSU2_TR(0x42da94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42da96:{NFSU2_TR(0x42da96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42da99:{NFSU2_TR(0x42da99);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42da9b:{NFSU2_TR(0x42da9b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42da9e:{NFSU2_TR(0x42da9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42daa2:{NFSU2_TR(0x42daa2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42daa6:{NFSU2_TR(0x42daa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42daaa:{NFSU2_TR(0x42daaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42daae:{NFSU2_TR(0x42daae);
if(r1(R+518)){{goto L42db2d;}}
}
B42dab0:L42dab0:{c.instructions+=2;NFSU2_TR(0x42dab0);
u8 U[22];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1f4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1f4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1f4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B42dab8:{NFSU2_TR(0x42dab8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42db2d;}}
}
B42daba:L42daba:{c.instructions+=3;NFSU2_TR(0x42daba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42dabc:{NFSU2_TR(0x42dabc);
__builtin_memmove((R+4),(R+24),4);
}
B42dabe:{NFSU2_TR(0x42dabe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dac4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42dac4:L42dac4:{c.instructions+=2;NFSU2_TR(0x42dac4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42dac6:{NFSU2_TR(0x42dac6);
if(r1(R+518)){{goto L42db2d;}}
}
B42dac8:L42dac8:{c.instructions+=2;NFSU2_TR(0x42dac8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dac9:{NFSU2_TR(0x42dac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42daceull));
TAIL_STATIC(0x40e7c0u,40e);
}
B42dace:L42dace:{c.instructions+=4;NFSU2_TR(0x42dace);
__builtin_memmove((R+12),(R+0),4);
}
B42dad0:{NFSU2_TR(0x42dad0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42dad3:{NFSU2_TR(0x42dad3);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B42dad6:{NFSU2_TR(0x42dad6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42db2d;}}
}
B42dad8:L42dad8:{c.instructions+=3;NFSU2_TR(0x42dad8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42dada:{NFSU2_TR(0x42dada);
__builtin_memmove((R+4),(R+24),4);
}
B42dadc:{NFSU2_TR(0x42dadc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dae2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42dae2:L42dae2:{c.instructions+=6;NFSU2_TR(0x42dae2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42dae6:{NFSU2_TR(0x42dae6);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B42daeb:{NFSU2_TR(0x42daeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x708ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42daf1:{NFSU2_TR(0x42daf1);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B42daf7:{NFSU2_TR(0x42daf7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42daf8:{NFSU2_TR(0x42daf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dafdull));
TAIL_STATIC(0x440e50u,440);
}
B42dafd:L42dafd:{c.instructions+=5;NFSU2_TR(0x42dafd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42db00:{NFSU2_TR(0x42db00);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42db04:{NFSU2_TR(0x42db04);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42db06:{NFSU2_TR(0x42db06);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42db0e:{NFSU2_TR(0x42db0e);
if(r1(R+518)){{goto L42dc82;}}
}
B42db14:L42db14:{c.instructions+=7;NFSU2_TR(0x42db14);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42db18:{NFSU2_TR(0x42db18);
__builtin_memmove((R+4),gp(0x783628),4);
}
B42db1e:{NFSU2_TR(0x42db1e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42db1f:{NFSU2_TR(0x42db1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42db20:{NFSU2_TR(0x42db20);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42db21:{NFSU2_TR(0x42db21);
__builtin_memmove((R+4),(R+0),4);
}
B42db23:{NFSU2_TR(0x42db23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42db28ull));
TAIL_STATIC(0x423c30u,423);
}
B42db28:L42db28:{c.instructions+=1;NFSU2_TR(0x42db28);
{goto L42dc8f;}
}
B42db2d:L42db2d:{c.instructions+=2;NFSU2_TR(0x42db2d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42db30:{NFSU2_TR(0x42db30);
if(r1(R+518)){{goto L42db93;}}
}
B42db32:L42db32:{c.instructions+=2;NFSU2_TR(0x42db32);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x190ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x190ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42db3a:{NFSU2_TR(0x42db3a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42db93;}}
}
B42db3c:L42db3c:{c.instructions+=4;NFSU2_TR(0x42db3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42db40:{NFSU2_TR(0x42db40);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42db41:{NFSU2_TR(0x42db41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42db42:{NFSU2_TR(0x42db42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42db47ull));
TAIL_STATIC(0x403320u,403);
}
B42db47:L42db47:{c.instructions+=4;NFSU2_TR(0x42db47);
__builtin_memmove((R+12),(R+0),4);
}
B42db49:{NFSU2_TR(0x42db49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42db4c:{NFSU2_TR(0x42db4c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42db4f:{NFSU2_TR(0x42db4f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42db93;}}
}
B42db51:L42db51:{c.instructions+=5;NFSU2_TR(0x42db51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42db52:{NFSU2_TR(0x42db52);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B42db56:{NFSU2_TR(0x42db56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42db57:{NFSU2_TR(0x42db57);
__builtin_memmove((R+4),(R+24),4);
}
B42db59:{NFSU2_TR(0x42db59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42db5eull));
TAIL_STATIC(0x40d5c0u,40d);
}
B42db5e:L42db5e:{c.instructions+=3;NFSU2_TR(0x42db5e);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B42db63:{NFSU2_TR(0x42db63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42db64:{NFSU2_TR(0x42db64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42db69ull));
TAIL_STATIC(0x440e50u,440);
}
B42db69:L42db69:{c.instructions+=5;NFSU2_TR(0x42db69);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42db6c:{NFSU2_TR(0x42db6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42db70:{NFSU2_TR(0x42db70);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42db72:{NFSU2_TR(0x42db72);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42db7a:{NFSU2_TR(0x42db7a);
if(r1(R+518)){{goto L42dc82;}}
}
B42db80:L42db80:{c.instructions+=5;NFSU2_TR(0x42db80);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42db81:{NFSU2_TR(0x42db81);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42db86:{NFSU2_TR(0x42db86);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42db87:{NFSU2_TR(0x42db87);
__builtin_memmove((R+4),(R+0),4);
}
B42db89:{NFSU2_TR(0x42db89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42db8eull));
TAIL_STATIC(0x423cc0u,423);
}
B42db8e:L42db8e:{c.instructions+=1;NFSU2_TR(0x42db8e);
{goto L42dc8f;}
}
B42db93:L42db93:{c.instructions+=2;NFSU2_TR(0x42db93);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42db96:{NFSU2_TR(0x42db96);
if(r1(R+518)){{goto L42dc2f;}}
}
B42db9c:L42db9c:{c.instructions+=2;NFSU2_TR(0x42db9c);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x12cull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x12cull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42dba4:{NFSU2_TR(0x42dba4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42dc2f;}}
}
B42dbaa:L42dbaa:{c.instructions+=6;NFSU2_TR(0x42dbaa);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42dbae:{NFSU2_TR(0x42dbae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dbaf:{NFSU2_TR(0x42dbaf);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42dbb3:{NFSU2_TR(0x42dbb3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dbb4:{NFSU2_TR(0x42dbb4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dbb5:{NFSU2_TR(0x42dbb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dbbaull));
TAIL_STATIC(0x42ba20u,42b);
}
B42dbba:L42dbba:{c.instructions+=4;NFSU2_TR(0x42dbba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B42dbbd:{NFSU2_TR(0x42dbbd);
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
B42dbc0:{NFSU2_TR(0x42dbc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42dbc4:{NFSU2_TR(0x42dbc4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42dc2f;}}
}
B42dbc6:L42dbc6:{c.instructions+=4;NFSU2_TR(0x42dbc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42dbc8:{NFSU2_TR(0x42dbc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42dbcb:{NFSU2_TR(0x42dbcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42dbcd:{NFSU2_TR(0x42dbcd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dbd0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42dbd0:L42dbd0:{c.instructions+=5;NFSU2_TR(0x42dbd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42dbd4:{NFSU2_TR(0x42dbd4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dbd5:{NFSU2_TR(0x42dbd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dbd6:{NFSU2_TR(0x42dbd6);
__builtin_memmove((R+4),(R+24),4);
}
B42dbd8:{NFSU2_TR(0x42dbd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dbddull));
TAIL_STATIC(0x40d5c0u,40d);
}
B42dbdd:L42dbdd:{c.instructions+=6;NFSU2_TR(0x42dbdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42dbe1:{NFSU2_TR(0x42dbe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42dbe3:{NFSU2_TR(0x42dbe3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dbe4:{NFSU2_TR(0x42dbe4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dbe5:{NFSU2_TR(0x42dbe5);
__builtin_memmove((R+4),(R+24),4);
}
B42dbe7:{NFSU2_TR(0x42dbe7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dbedull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42dbed:L42dbed:{c.instructions+=2;NFSU2_TR(0x42dbed);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42dbef:{NFSU2_TR(0x42dbef);
if(r1(R+518)){{goto L42dc2b;}}
}
B42dbf1:L42dbf1:{c.instructions+=3;NFSU2_TR(0x42dbf1);
__builtin_memmove((R+0),gp(0x81cb6c),4);
}
B42dbf6:{NFSU2_TR(0x42dbf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dbf7:{NFSU2_TR(0x42dbf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dbfcull));
TAIL_STATIC(0x440e50u,440);
}
B42dbfc:L42dbfc:{c.instructions+=5;NFSU2_TR(0x42dbfc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42dbff:{NFSU2_TR(0x42dbff);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42dc03:{NFSU2_TR(0x42dc03);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42dc05:{NFSU2_TR(0x42dc05);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42dc0d:{NFSU2_TR(0x42dc0d);
if(r1(R+518)){{goto L42dc82;}}
}
B42dc0f:L42dc0f:{c.instructions+=9;NFSU2_TR(0x42dc0f);
__builtin_memmove((R+4),gp(0x783630),4);
}
B42dc15:{NFSU2_TR(0x42dc15);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42dc19:{NFSU2_TR(0x42dc19);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dc1a:{NFSU2_TR(0x42dc1a);
u8 U[4];
w4(U+0,u32(0x40000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dc1f:{NFSU2_TR(0x42dc1f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dc20:{NFSU2_TR(0x42dc20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dc21:{NFSU2_TR(0x42dc21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dc22:{NFSU2_TR(0x42dc22);
__builtin_memmove((R+4),(R+0),4);
}
B42dc24:{NFSU2_TR(0x42dc24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dc29ull));
TAIL_STATIC(0x4243b0u,424);
}
B42dc29:L42dc29:{c.instructions+=1;NFSU2_TR(0x42dc29);
{goto L42dc8f;}
}
B42dc2b:L42dc2b:{c.instructions+=1;NFSU2_TR(0x42dc2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42dc2f:L42dc2f:{c.instructions+=2;NFSU2_TR(0x42dc2f);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42dc32:{NFSU2_TR(0x42dc32);
if(r1(R+518)){{goto L42dc86;}}
}
B42dc34:L42dc34:{c.instructions+=2;NFSU2_TR(0x42dc34);
u8 U[22];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1f4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1f4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1f4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B42dc3c:{NFSU2_TR(0x42dc3c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L42dc86;}}
}
B42dc3e:L42dc3e:{c.instructions+=3;NFSU2_TR(0x42dc3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B42dc40:{NFSU2_TR(0x42dc40);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x424ull))));
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
B42dc47:{NFSU2_TR(0x42dc47);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42dc86;}}
}
B42dc49:L42dc49:{c.instructions+=4;NFSU2_TR(0x42dc49);
__builtin_memmove((R+0),gp(0x78371c),4);
}
B42dc4e:{NFSU2_TR(0x42dc4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dc4f:{NFSU2_TR(0x42dc4f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dc50:{NFSU2_TR(0x42dc50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dc55ull));
TAIL_STATIC(0x403380u,403);
}
B42dc55:L42dc55:{c.instructions+=3;NFSU2_TR(0x42dc55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42dc58:{NFSU2_TR(0x42dc58);
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
B42dc5a:{NFSU2_TR(0x42dc5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42dc86;}}
}
B42dc5c:L42dc5c:{c.instructions+=3;NFSU2_TR(0x42dc5c);
__builtin_memmove((R+4),gp(0x81cb6c),4);
}
B42dc62:{NFSU2_TR(0x42dc62);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dc63:{NFSU2_TR(0x42dc63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dc68ull));
TAIL_STATIC(0x440e50u,440);
}
B42dc68:L42dc68:{c.instructions+=3;NFSU2_TR(0x42dc68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B42dc6b:{NFSU2_TR(0x42dc6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42dc6d:{NFSU2_TR(0x42dc6d);
if(r1(R+518)){{goto L42dc82;}}
}
B42dc6f:L42dc6f:{c.instructions+=4;NFSU2_TR(0x42dc6f);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dc74:{NFSU2_TR(0x42dc74);
u8 U[4];
w4(U+0,u32(0x1f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dc79:{NFSU2_TR(0x42dc79);
__builtin_memmove((R+4),(R+0),4);
}
B42dc7b:{NFSU2_TR(0x42dc7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dc80ull));
TAIL_STATIC(0x4241c0u,424);
}
B42dc80:L42dc80:{c.instructions+=1;NFSU2_TR(0x42dc80);
{goto L42dc8f;}
}
B42dc82:L42dc82:{c.instructions+=2;NFSU2_TR(0x42dc82);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42dc84:{NFSU2_TR(0x42dc84);
{goto L42dc8f;}
}
B42dc86:L42dc86:{c.instructions+=3;NFSU2_TR(0x42dc86);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42dc8a:{NFSU2_TR(0x42dc8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42dc8c:{NFSU2_TR(0x42dc8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dc8full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42dc8f:L42dc8f:{c.instructions+=8;NFSU2_TR(0x42dc8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42dc93:{NFSU2_TR(0x42dc93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42dc94:{NFSU2_TR(0x42dc94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42dc95:{NFSU2_TR(0x42dc95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42dc96:{NFSU2_TR(0x42dc96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42dc97:{NFSU2_TR(0x42dc97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42dc9e:{NFSU2_TR(0x42dc9e);
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
B42dca1:{NFSU2_TR(0x42dca1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42dcb0:L42dcb0:{c.instructions+=19;NFSU2_TR(0x42dcb0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42dcb3:{NFSU2_TR(0x42dcb3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dcb4:{NFSU2_TR(0x42dcb4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dcb5:{NFSU2_TR(0x42dcb5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dcb6:{NFSU2_TR(0x42dcb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42dcba:{NFSU2_TR(0x42dcba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((R+0),(U+0),4);
}
B42dcc0:{NFSU2_TR(0x42dcc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42dcc4:{NFSU2_TR(0x42dcc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B42dccb:{NFSU2_TR(0x42dccb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dccc:{NFSU2_TR(0x42dccc);
__builtin_memmove((R+28),(R+4),4);
}
B42dcce:{NFSU2_TR(0x42dcce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B42dcd1:{NFSU2_TR(0x42dcd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42dcd3:{NFSU2_TR(0x42dcd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42dcd6:{NFSU2_TR(0x42dcd6);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B42dcd9:{NFSU2_TR(0x42dcd9);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B42dcdd:{NFSU2_TR(0x42dcdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42dce1:{NFSU2_TR(0x42dce1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42dce4:{NFSU2_TR(0x42dce4);
__builtin_memmove((R+4),(R+20),4);
}
B42dce6:{NFSU2_TR(0x42dce6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dce9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42dce9:L42dce9:{c.instructions+=7;NFSU2_TR(0x42dce9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B42dceb:{NFSU2_TR(0x42dceb);
{u32 ea_=u32(r4(R+28)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42dcf1:{NFSU2_TR(0x42dcf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f8ull))));
w4(U+4,u32(0x40000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42dcfb:{NFSU2_TR(0x42dcfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42dd01:{NFSU2_TR(0x42dd01);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B42dd06:{NFSU2_TR(0x42dd06);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42dd08:{NFSU2_TR(0x42dd08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42dd12;}}
}
B42dd0a:L42dd0a:{c.instructions+=2;NFSU2_TR(0x42dd0a);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42dd10:{NFSU2_TR(0x42dd10);
if(r1(R+518)){{goto L42dd1b;}}
}
B42dd12:L42dd12:{c.instructions+=2;NFSU2_TR(0x42dd12);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42dd19:{NFSU2_TR(0x42dd19);
{goto L42dd22;}
}
B42dd1b:L42dd1b:{c.instructions+=1;NFSU2_TR(0x42dd1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42dd22:L42dd22:{c.instructions+=5;NFSU2_TR(0x42dd22);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42dd29:{NFSU2_TR(0x42dd29);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1feull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42dd30:{NFSU2_TR(0x42dd30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42dd36:{NFSU2_TR(0x42dd36);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42dd39:{NFSU2_TR(0x42dd39);
if(r1(R+518)){{goto L42dd73;}}
}
B42dd3b:L42dd3b:{c.instructions+=5;NFSU2_TR(0x42dd3b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42dd42:{NFSU2_TR(0x42dd42);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x320ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42dd48:{NFSU2_TR(0x42dd48);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B42dd49:{NFSU2_TR(0x42dd49);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42dd4b:{NFSU2_TR(0x42dd4b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L42dd6b;}}
}
B42dd4d:L42dd4d:{c.instructions+=4;NFSU2_TR(0x42dd4d);
u8 U[16];
w4(U+0,u32(u32(u32(0x328ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B42dd54:{NFSU2_TR(0x42dd54);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42dd57:{NFSU2_TR(0x42dd57);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42dd59:{NFSU2_TR(0x42dd59);
if(r1(R+518)){{goto L42dd6b;}}
}
B42dd5b:L42dd5b:{c.instructions+=4;NFSU2_TR(0x42dd5b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42dd5e:{NFSU2_TR(0x42dd5e);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B42dd60:{NFSU2_TR(0x42dd60);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x9ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42dd62:{NFSU2_TR(0x42dd62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42dd6b;}}
}
B42dd64:L42dd64:{c.instructions+=2;NFSU2_TR(0x42dd64);
w4(R+0,u32(0x1ull));
}
B42dd69:{NFSU2_TR(0x42dd69);
{goto L42dd6d;}
}
B42dd6b:L42dd6b:{c.instructions+=1;NFSU2_TR(0x42dd6b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42dd6d:L42dd6d:{c.instructions+=1;NFSU2_TR(0x42dd6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B42dd73:L42dd73:{c.instructions+=3;NFSU2_TR(0x42dd73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42dd79:{NFSU2_TR(0x42dd79);
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
B42dd7b:{NFSU2_TR(0x42dd7b);
if(r1(R+518)){{goto L42ddaf;}}
}
B42dd7d:L42dd7d:{c.instructions+=4;NFSU2_TR(0x42dd7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42dd80:{NFSU2_TR(0x42dd80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42dd82:{NFSU2_TR(0x42dd82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dd83:{NFSU2_TR(0x42dd83);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dd86ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42dd86:L42dd86:{c.instructions+=2;NFSU2_TR(0x42dd86);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42dd89:{NFSU2_TR(0x42dd89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42ddaf;}}
}
B42dd8b:L42dd8b:{c.instructions+=9;NFSU2_TR(0x42dd8b);
__builtin_memmove((R+4),gp(0x783670),4);
}
B42dd91:{NFSU2_TR(0x42dd91);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dd92:{NFSU2_TR(0x42dd92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dd93:{NFSU2_TR(0x42dd93);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dd94:{NFSU2_TR(0x42dd94);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42dd98:{NFSU2_TR(0x42dd98);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dd99:{NFSU2_TR(0x42dd99);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B42dd9c:{NFSU2_TR(0x42dd9c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dd9d:{NFSU2_TR(0x42dd9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dda2ull));
TAIL_STATIC(0x428fd0u,428);
}
B42dda2:L42dda2:{c.instructions+=2;NFSU2_TR(0x42dda2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42dda4:{NFSU2_TR(0x42dda4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42deb2;}}
}
B42ddaa:L42ddaa:{c.instructions+=1;NFSU2_TR(0x42ddaa);
{goto L42de9f;}
}
B42ddaf:L42ddaf:{c.instructions+=13;NFSU2_TR(0x42ddaf);
__builtin_memmove((R+8),gp(0x783670),4);
}
B42ddb5:{NFSU2_TR(0x42ddb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42ddb9:{NFSU2_TR(0x42ddb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ddba:{NFSU2_TR(0x42ddba);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B42ddbe:{NFSU2_TR(0x42ddbe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ddbf:{NFSU2_TR(0x42ddbf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ddc0:{NFSU2_TR(0x42ddc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42ddc4:{NFSU2_TR(0x42ddc4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ddc5:{NFSU2_TR(0x42ddc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42ddc8:{NFSU2_TR(0x42ddc8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ddc9:{NFSU2_TR(0x42ddc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((R+4),(U+0),4);
}
B42ddcf:{NFSU2_TR(0x42ddcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x47c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42ddd7:{NFSU2_TR(0x42ddd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dddcull));
TAIL_STATIC(0x428df0u,428);
}
B42dddc:L42dddc:{c.instructions+=2;NFSU2_TR(0x42dddc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ddde:{NFSU2_TR(0x42ddde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42deb2;}}
}
B42dde4:L42dde4:{c.instructions+=3;NFSU2_TR(0x42dde4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B42dde8:{NFSU2_TR(0x42dde8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42ddea:{NFSU2_TR(0x42ddea);
if(r1(R+518)){{goto L42deb2;}}
}
B42ddf0:L42ddf0:{c.instructions+=2;NFSU2_TR(0x42ddf0);
__builtin_memmove((R+4),(R+20),4);
}
B42ddf2:{NFSU2_TR(0x42ddf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42ddf7ull));
TAIL_STATIC(0x60bea0u,60b);
}
B42ddf7:L42ddf7:{c.instructions+=2;NFSU2_TR(0x42ddf7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42ddf9:{NFSU2_TR(0x42ddf9);
if(r1(R+518)){{goto L42deb2;}}
}
B42ddff:L42ddff:{c.instructions+=3;NFSU2_TR(0x42ddff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42de00:{NFSU2_TR(0x42de00);
__builtin_memmove((R+4),(R+24),4);
}
B42de02:{NFSU2_TR(0x42de02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42de07ull));
TAIL_STATIC(0x60c120u,60c);
}
B42de07:L42de07:{c.instructions+=3;NFSU2_TR(0x42de07);
__builtin_memmove((R+20),(R+0),4);
}
B42de09:{NFSU2_TR(0x42de09);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B42de0b:{NFSU2_TR(0x42de0b);
if(r1(R+518)){{goto L42deb2;}}
}
B42de11:L42de11:{c.instructions+=3;NFSU2_TR(0x42de11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42de12:{NFSU2_TR(0x42de12);
__builtin_memmove((R+4),(R+24),4);
}
B42de14:{NFSU2_TR(0x42de14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42de19ull));
TAIL_STATIC(0x60bff0u,60b);
}
B42de19:L42de19:{c.instructions+=4;NFSU2_TR(0x42de19);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42de1f:{NFSU2_TR(0x42de1f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42de21:{NFSU2_TR(0x42de21);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42de24:{NFSU2_TR(0x42de24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42deb2;}}
}
B42de2a:L42de2a:{c.instructions+=10;NFSU2_TR(0x42de2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42de2e:{NFSU2_TR(0x42de2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42de31:{NFSU2_TR(0x42de31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42de37:{NFSU2_TR(0x42de37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42de3a:{NFSU2_TR(0x42de3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42de3b:{NFSU2_TR(0x42de3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42de3f:{NFSU2_TR(0x42de3f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42de40:{NFSU2_TR(0x42de40);
__builtin_memmove((R+4),(R+24),4);
}
B42de42:{NFSU2_TR(0x42de42);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42de46:{NFSU2_TR(0x42de46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42de4bull));
TAIL_STATIC(0x60c010u,60c);
}
B42de4b:L42de4b:{c.instructions+=6;NFSU2_TR(0x42de4b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42de4f:{NFSU2_TR(0x42de4f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B42de53:{NFSU2_TR(0x42de53);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B42de55:{NFSU2_TR(0x42de55);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42de57:{NFSU2_TR(0x42de57);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42de5a:{NFSU2_TR(0x42de5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42deb2;}}
}
B42de5c:L42de5c:{c.instructions+=6;NFSU2_TR(0x42de5c);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42de5f:{NFSU2_TR(0x42de5f);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42de64:{NFSU2_TR(0x42de64);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42de6a:{NFSU2_TR(0x42de6a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42de6c:{NFSU2_TR(0x42de6c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42de6f:{NFSU2_TR(0x42de6f);
if(r1(R+518)){{goto L42de76;}}
}
B42de71:L42de71:{c.instructions+=1;NFSU2_TR(0x42de71);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42de76:L42de76:{c.instructions+=9;NFSU2_TR(0x42de76);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42de7a:{NFSU2_TR(0x42de7a);
__builtin_memmove((R+0),gp(0x783670),4);
}
B42de7f:{NFSU2_TR(0x42de7f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42de80:{NFSU2_TR(0x42de80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42de81:{NFSU2_TR(0x42de81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42de82:{NFSU2_TR(0x42de82);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((R+20),(U+0),4);
}
B42de88:{NFSU2_TR(0x42de88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42de89:{NFSU2_TR(0x42de89);
__builtin_memmove((R+4),(R+20),4);
}
B42de8b:{NFSU2_TR(0x42de8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42de90ull));
TAIL_STATIC(0x42bf00u,42b);
}
B42de90:L42de90:{c.instructions+=2;NFSU2_TR(0x42de90);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42de92:{NFSU2_TR(0x42de92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42deb2;}}
}
B42de94:L42de94:{c.instructions+=4;NFSU2_TR(0x42de94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42de95:{NFSU2_TR(0x42de95);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42de96:{NFSU2_TR(0x42de96);
__builtin_memmove((R+4),(R+20),4);
}
B42de98:{NFSU2_TR(0x42de98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42de9dull));
TAIL_STATIC(0x420d40u,420);
}
B42de9d:L42de9d:{c.instructions+=1;NFSU2_TR(0x42de9d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B42de9f:L42de9f:{c.instructions+=3;NFSU2_TR(0x42de9f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42dea6:{NFSU2_TR(0x42dea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42deac:{NFSU2_TR(0x42deac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42deb2:L42deb2:{c.instructions+=6;NFSU2_TR(0x42deb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42deb3:{NFSU2_TR(0x42deb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42deb4:{NFSU2_TR(0x42deb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42deb5:{NFSU2_TR(0x42deb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42deb6:{NFSU2_TR(0x42deb6);
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
B42deb9:{NFSU2_TR(0x42deb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42dec0:L42dec0:{c.instructions+=3;NFSU2_TR(0x42dec0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42dec4:{NFSU2_TR(0x42dec4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B42dec5:{NFSU2_TR(0x42dec5);
if(r1(R+518)){{goto L42deeb;}}
}
B42dec7:L42dec7:{c.instructions+=2;NFSU2_TR(0x42dec7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B42dec8:{NFSU2_TR(0x42dec8);
if(r1(R+518)){{goto L42decf;}}
}
B42deca:L42deca:{c.instructions+=2;NFSU2_TR(0x42deca);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42decc:{NFSU2_TR(0x42decc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42decf:L42decf:{c.instructions+=9;NFSU2_TR(0x42decf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42ded3:{NFSU2_TR(0x42ded3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42ded7:{NFSU2_TR(0x42ded7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42ded8:{NFSU2_TR(0x42ded8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42dedc:{NFSU2_TR(0x42dedc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dedd:{NFSU2_TR(0x42dedd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42dee1:{NFSU2_TR(0x42dee1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dee2:{NFSU2_TR(0x42dee2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dee3:{NFSU2_TR(0x42dee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dee8ull));
TAIL_STATIC(0x42bf00u,42b);
}
B42dee8:L42dee8:{c.instructions+=1;NFSU2_TR(0x42dee8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42deeb:L42deeb:{c.instructions+=11;NFSU2_TR(0x42deeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42deef:{NFSU2_TR(0x42deef);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42def3:{NFSU2_TR(0x42def3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42def4:{NFSU2_TR(0x42def4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42def8:{NFSU2_TR(0x42def8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42def9:{NFSU2_TR(0x42def9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42defd:{NFSU2_TR(0x42defd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42defe:{NFSU2_TR(0x42defe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42df02:{NFSU2_TR(0x42df02);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42df03:{NFSU2_TR(0x42df03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42df04:{NFSU2_TR(0x42df04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42df09ull));
TAIL_STATIC(0x428fd0u,428);
}
B42df09:L42df09:{c.instructions+=1;NFSU2_TR(0x42df09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B42df10:L42df10:{c.instructions+=9;NFSU2_TR(0x42df10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B42df13:{NFSU2_TR(0x42df13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42df14:{NFSU2_TR(0x42df14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42df15:{NFSU2_TR(0x42df15);
__builtin_memmove((R+24),(R+4),4);
}
B42df17:{NFSU2_TR(0x42df17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42df1d:{NFSU2_TR(0x42df1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42df1e:{NFSU2_TR(0x42df1e);
w4(R+28,u32(0xffull));
}
B42df23:{NFSU2_TR(0x42df23);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42df25:{NFSU2_TR(0x42df25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L42df33;}}
}
B42df27:L42df27:{c.instructions+=2;NFSU2_TR(0x42df27);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42df2d:{NFSU2_TR(0x42df2d);
if(r1(R+518)){{goto L42dfc3;}}
}
B42df33:L42df33:{c.instructions+=3;NFSU2_TR(0x42df33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42df36:{NFSU2_TR(0x42df36);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42df38:{NFSU2_TR(0x42df38);
if(r1(R+518)){{goto L42dfc3;}}
}
B42df3e:L42df3e:{c.instructions+=4;NFSU2_TR(0x42df3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42df44:{NFSU2_TR(0x42df44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42df47:{NFSU2_TR(0x42df47);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42df49:{NFSU2_TR(0x42df49);
if(r1(R+518)){{goto L42dfc3;}}
}
B42df4b:L42df4b:{c.instructions+=13;NFSU2_TR(0x42df4b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B42df4e:{NFSU2_TR(0x42df4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42df51:{NFSU2_TR(0x42df51);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B42df53:{NFSU2_TR(0x42df53);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42df55:{NFSU2_TR(0x42df55);
__builtin_memmove((R+8),(R+518),1);
}
B42df58:{NFSU2_TR(0x42df58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42df59:{NFSU2_TR(0x42df59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42df5a:{NFSU2_TR(0x42df5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42df5b:{NFSU2_TR(0x42df5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42df5c:{NFSU2_TR(0x42df5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B42df5f:{NFSU2_TR(0x42df5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42df60:{NFSU2_TR(0x42df60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42df61:{NFSU2_TR(0x42df61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42df66ull));
TAIL_STATIC(0x40f4a0u,40f);
}
B42df66:L42df66:{c.instructions+=4;NFSU2_TR(0x42df66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42df6c:{NFSU2_TR(0x42df6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B42df6f:{NFSU2_TR(0x42df6f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42df71:{NFSU2_TR(0x42df71);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L42df7b;}}
}
B42df73:L42df73:{c.instructions+=2;NFSU2_TR(0x42df73);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B42df79:{NFSU2_TR(0x42df79);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L42dfc3;}}
}
B42df7b:L42df7b:{c.instructions+=10;NFSU2_TR(0x42df7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42df7e:{NFSU2_TR(0x42df7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42df7f:{NFSU2_TR(0x42df7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B42df83:{NFSU2_TR(0x42df83);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42df84:{NFSU2_TR(0x42df84);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42df88:{NFSU2_TR(0x42df88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42df89:{NFSU2_TR(0x42df89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42df8a:{NFSU2_TR(0x42df8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42df90:{NFSU2_TR(0x42df90);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42df98:{NFSU2_TR(0x42df98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42df9dull));
TAIL_STATIC(0x419bc0u,419);
}
B42df9d:L42df9d:{c.instructions+=6;NFSU2_TR(0x42df9d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42dfa1:{NFSU2_TR(0x42dfa1);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B42dfa3:{NFSU2_TR(0x42dfa3);
{u32 ea_=u32(u32(7878692u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42dfa9:{NFSU2_TR(0x42dfa9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42dfab:{NFSU2_TR(0x42dfab);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42dfae:{NFSU2_TR(0x42dfae);
if(r1(R+514)){{goto L42dfc3;}}
}
B42dfb0:L42dfb0:{c.instructions+=3;NFSU2_TR(0x42dfb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7b8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42dfb6:{NFSU2_TR(0x42dfb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42dfbc:{NFSU2_TR(0x42dfbc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7c0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42dfc3:L42dfc3:{c.instructions+=3;NFSU2_TR(0x42dfc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42dfc9:{NFSU2_TR(0x42dfc9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B42dfcc:{NFSU2_TR(0x42dfcc);
if(r1(R+518)){TAIL_STATIC(0x42e033u,42e);}
}
B42dfce:L42dfce:{c.instructions+=2;NFSU2_TR(0x42dfce);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B42dfcf:{NFSU2_TR(0x42dfcf);
if(r1(R+518)){{goto L42dfe4;}}
}
B42dfd1:L42dfd1:{c.instructions+=2;NFSU2_TR(0x42dfd1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B42dfd2:{NFSU2_TR(0x42dfd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x42e09bu,42e);}
}
B42dfd8:L42dfd8:{c.instructions+=2;NFSU2_TR(0x42dfd8);
__builtin_memmove((R+4),(R+24),4);
}
B42dfda:{NFSU2_TR(0x42dfda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dfdfull));
TAIL_STATIC(0x40fde0u,40f);
}
B42dfdf:L42dfdf:{c.instructions+=1;NFSU2_TR(0x42dfdf);
TAIL_STATIC(0x42e09bu,42e);
}
B42dfe4:L42dfe4:{c.instructions+=3;NFSU2_TR(0x42dfe4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42dfe6:{NFSU2_TR(0x42dfe6);
__builtin_memmove((R+4),(R+24),4);
}
B42dfe8:{NFSU2_TR(0x42dfe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42dfedull));
TAIL_STATIC(0x41d720u,41d);
}
B42dfed:L42dfed:{c.instructions+=3;NFSU2_TR(0x42dfed);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B42dff3:{NFSU2_TR(0x42dff3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42dff5:{NFSU2_TR(0x42dff5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x42e09bu,42e);}
}
B42dffb:L42dffb:{c.instructions+=2;NFSU2_TR(0x42dffb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42dffd:{NFSU2_TR(0x42dffd);
if(r1(R+518)){TAIL_STATIC(0x42e09bu,42e);}
TAIL_STATIC(0x42e003u,42e);
}
XIT:NFSU2_TR_EXIT(0x42d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
